/*
 * @Descripttion: 这是初始化贪吃蛇的函数的接口
 * @Author: Xiao ZhiPeng
 * @version: 1.0
 * @Interface: 
 * @Date: 2021-07-27 16:34:32
 * @LastEditors: xiao zhipeng
 * @LastEditTime: 2021-07-30 09:47:56
 */

#include  "InitSnake.h"

#define     SPARE_SPACE     3     //备用空间，防止生成蛇后，玩家没有反应时间，直接游戏失败

/**
 * @name: 
 * @description: 
 * @param {int} venue
 * @param {MySnack*} snack
 * @return {*}
 */
int InitSnack(int venue[VENUE_MAX_LENGTH][VENUE_MAX_WIDTH] , MySnack* snack)
{
    int xborn = 0 , yborn = 0 , i = 0 ;

    //生成随机出生点横纵坐标，随机点为蛇头，向左拓展蛇头
    //绘制蛇，把蛇坐标所在用“O”(ASCII 79)替代
    xborn = rand() %(VENUE_MAX_WIDTH-2-SPARE_SPACE) + INIT_SNACK_SIZE ;     //防止生成蛇直接触壁，同时留足操作空间
    yborn = rand() %(VENUE_MAX_LENGTH-2) + 1 ;
    for (size_t i = 0; i < INIT_SNACK_SIZE; i++)
    {
        snack->xsnack[i] = xborn - i ;    //数组从蛇头开始保存
        snack->ysnack[i] = yborn ;
        venue[snack->ysnack[i]][snack->xsnack[i]] = 79 ;
    }
    
    return 0 ;

}
