/*
 * @Descripttion: 这是贪吃蛇生成食物的函数的接口
 * @Author: Xiao ZhiPeng
 * @version: 1.0
 * @Interface: 
 * @Date: 2021-07-27 18:34:52
 * @LastEditors: xiao zhipeng
 * @LastEditTime: 2021-07-29 12:54:23
 */

#include  "GetFood.h"

/**
 * @name: GetFood
 * @description: 在界面随机生成食物
 * @param {int} venue       游戏界面数组
 * @param {Coord*} pfood    食物变量的地址
 * @param {MySnack} snack   蛇变量
 * @param {int} SnackLen    蛇长
 * @return {*}0
 */
int  GetFood(int venue[][VENUE_MAX_WIDTH], Coord* pfood ,MySnack snack,int SnackLen)
{
    int i = 0 ;

    //生成食物随机位置
    // srand((unsigned)(time(NULL))) ;
    pfood->x = rand() %(VENUE_MAX_WIDTH-2) + 1 ;
    pfood->y = rand() %(VENUE_MAX_LENGTH-2) + 1 ;

    //检查食物位置是否与蛇的位置重合
    for (size_t i = 0; i < SnackLen; i++)
    {
        if (pfood->x == snack.xsnack[i] && pfood->y == snack.ysnack[i])
        {   
            GetFood(venue,pfood,snack,SnackLen) ;
        }
        
    }
    
    //生成食物，用“$”(ACSLL 36)表示
    venue[pfood->y][pfood->x] = 36 ;

    return 0 ;

}
