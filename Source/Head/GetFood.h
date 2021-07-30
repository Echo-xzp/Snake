/*
 * @Descripttion: 这是贪吃蛇生成食物的函数的接口
 * @Author: Xiao ZhiPeng
 * @version: 1.0
 * @Interface: 
 * @Date: 2021-07-27 14:55:32
 * @LastEditors: xiao zhipeng
 * @LastEditTime: 2021-07-29 09:18:00
 */

#ifndef     __GETFOOD_H__
#define     __GETFOOD_H__

#include  "Snake.h"

int  GetFood(int venue[][VENUE_MAX_WIDTH], Coord* pfood ,MySnack snack ,int SnackLen) ;

#endif