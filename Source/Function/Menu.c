/*
 * @Descripttion: 这是一个说明贪吃蛇玩法的函数的接口
 * @Author: Xiao ZhiPeng
 * @version: 1.0
 * @Interface: 
 * @Date: 2021-07-29 13:18:40
 * @LastEditors: xiao zhipeng
 * @LastEditTime: 2021-07-30 09:50:39
 */

#include  "Menu.h"

/**
 * @name: Menu
 * @description: 说明贪吃蛇玩法
 * @param {*}
 * @return {*}0
 */
int Menu(void)
{
    printf("简单贪吃蛇\n\n") ;
    printf("控制：\n'w' 上  'd' 右  's' 下  'a' 左 \n") ;
    printf("玩法：\n控制贪吃蛇吃食物，吃到食物贪吃蛇变长\n贪吃蛇触壁结束游戏，达到目标长度游戏胜利\n") ;
    printf("\n开始游戏\n\n") ;
    system("pause") ;

    return 0 ;

}