/*
 * @Descripttion: 这是打印贪吃蛇游戏画面的函数的接口
 * @Author: Xiao ZhiPeng
 * @version: 1.0
 * @Interface: 
 * @Date: 2021-07-27 19:04:20
 * @LastEditors: xiao zhipeng
 * @LastEditTime: 2021-07-28 15:12:24
 */

#include  "PrintSnake.h"

/**
 * @name: PrintSnack
 * @description: 打印贪吃蛇游戏画面
 * @param {int} venue  画面数组
 * @return {*}0 
 */
int PrintSnack(int venue[][VENUE_MAX_WIDTH])
{
    int i = 0 , j = 0 ;

    for (i = 0; i < VENUE_MAX_LENGTH; i++)
    {
        for (j = 0; j < VENUE_MAX_WIDTH; j++)
        {
            printf("%c",venue[i][j]) ;
        }
        printf("\n") ;
    }

    return 0 ;

}