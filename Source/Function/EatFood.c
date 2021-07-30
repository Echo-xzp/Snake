/*
 * @Descripttion:这是贪吃蛇吃到食物的处理函数的接口 
 * @Author: Xiao ZhiPeng
 * @version: 1.0
 * @Interface: 
 * @Date: 2021-07-28 15:31:58
 * @LastEditors: xiao zhipeng
 * @LastEditTime: 2021-07-29 12:52:47
 */

#include  "EatFood.h"

/**
 * @name: EatFood
 * @description: 处理贪吃蛇吃到食物
 * @param {MySnack} *snack      蛇数组的地址
 * @param {int *} pSnackLen     蛇长变量的地址
 * @param {Coord} OldTail       旧蛇尾
 * @return {*}0
 */
int  EatFood(MySnack *snack ,int * pSnackLen ,Coord OldTail)
{
    //蛇吃到食物，蛇长度增加，储存旧蛇尾
    snack->xsnack[*pSnackLen] = OldTail.x ;
    snack->ysnack[*pSnackLen] = OldTail.y ;
    ++(*pSnackLen) ;

    return 0 ;

}