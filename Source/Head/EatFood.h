/*
 * @Descripttion: 这是贪吃蛇吃到食物的处理函数的接口
 * @Author: Xiao ZhiPeng
 * @version: 1.0
 * @Interface: 
 * @Date: 2021-07-28 15:28:30
 * @LastEditors: xiao zhipeng
 * @LastEditTime: 2021-07-29 11:54:43
 */

#ifndef     __EATFOOD_H__
#define     __EATFOOD_H__

#include  "Snake.h"

int  EatFood(MySnack *snack ,int * pSnackLen ,Coord OldTail) ;

#endif