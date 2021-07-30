/*
 * @Descripttion: 这是一个简单的贪吃蛇游戏程序
 * @Author: Xiao ZhiPeng
 * @version: 1.0
 * @Interface: 
 * @Date: 2021-07-27 15:40:46
 * @LastEditors: xiao zhipeng
 * @LastEditTime: 2021-07-30 09:50:23
 */

#include  <time.h>
#include  <windows.h>

#include "Snake.h"
#include  "Menu.h"
#include "InitVenue.h"
#include "InitSnake.h"
#include  "GetFood.h"
#include  "GetKey.h"
#include  "Dirction.h"
#include  "SnakeMove.h"
#include  "EatFood.h"
#include  "PrintSnake.h"

int main(int argc, char const *argv[])
{
    int venue[VENUE_MAX_LENGTH][VENUE_MAX_WIDTH] ;
    int i = 0 , j = 0 ;
    int PassScore = MAX_SNACK_SIZE - INIT_SNACK_SIZE , SnackLen = INIT_SNACK_SIZE ;
    MySnack snack ;
    char dirction = 'd' ;               //初始行进方向：右
    int (*pMove)(MySnack*) = NULL ;    //指向移动函数的指针
    Coord food = {0,0} , OldTail = {0,0} , head = {0,0} ;

    //埋下随机数种子
    srand(time(NULL)) ;

    //游戏说明主菜单
    Menu() ;

    //初始化游戏界面
    InitVenue(venue) ;
    
    //初始化蛇
    InitSnack(venue,&snack) ;

    //游戏运行，蛇达到最大长度退出
    while (SnackLen < MAX_SNACK_SIZE)
    {   
        //判断是否存在食物，否则生成
        if (venue[food.y][food.x] != 36)
        {
            GetFood(venue,&food,snack,SnackLen) ;
        }

        //读取用户操作
        GetKey(&dirction) ;

        //根据用户输入确定函数指针指向
        Dirction(dirction,&pMove) ;

        //保存旧蛇尾,以便复原
        OldTail.x = snack.xsnack[SnackLen-1] ;
        OldTail.y = snack.ysnack[SnackLen-1] ;

        //根据指针，蛇坐标移动,此时蛇图像并未修正
        SnackMove(&snack,SnackLen,pMove) ;

        //保存新蛇头,以便判断蛇头位置
        head.x = snack.xsnack[0] ;
        head.y = snack.ysnack[0] ;

        //判断蛇头位置(空格，食物，边界，蛇身)
        //蛇头位置不是空格
        if(venue[head.y][head.x] != 32)
        {
            //判断蛇头位置是否为食物位置
            if (head.x == food.x && head.y == food.y)
            {   
                //蛇吃到食物，进行处理
                EatFood(&snack,&SnackLen,OldTail) ;

                //不擦除蛇尾，只修正蛇头，使蛇变长
                venue[head.y][head.x] = 79 ;
            }

            //蛇头位置为边界，蛇身
            else
            {   
                //游戏结束，退出程序
                printf("\nGame Over!\n\n") ;
                system("pause") ;
                exit(0) ;
            }
        }

        //蛇头位置为空格
        else
        {
            //修正蛇头，擦除蛇尾
            venue[head.y][head.x] = 79 ;
            venue[OldTail.y][OldTail.x] = 32 ;

        }
        
        //清空屏幕,绘制蛇,打印分数
        system("cls") ;
        PrintSnack(venue) ;
        printf("通关分数：%d\n",PassScore) ;
        printf("你的分数：%d\n",(SnackLen - INIT_SNACK_SIZE)) ;
        
        //屏幕休眠(用户观察游戏)，休眠时间决定蛇的移速
        Sleep(SNACK_SPEED) ;
    }
    
    //成功完成游戏
    printf("\nYou Are Winner!\n\n") ;
    system("pause") ;
    return 0;
    
}
