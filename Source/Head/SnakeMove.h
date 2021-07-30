/*
 * @Descripttion:这是控制贪吃蛇移动的函数的接口 
 * @Author: Xiao ZhiPeng
 * @version: 1.0
 * @Interface: 
 * @Date: 2021-07-29 08:19:28
 * @LastEditors: xiao zhipeng
 * @LastEditTime: 2021-07-29 11:49:59
 */

#ifndef     __SNKEMOVE_H__
#define     __SNAKEMOVE_H__

#include  "Snake.h"

int  SnackMove(MySnack *snack,int SnackLen ,int (*pMove)(MySnack *snack)) ;

#endif