/*
 * @Descripttion: 这是有关贪吃蛇自定义变量与定义宏的接口
 * @Author: Xiao ZhiPeng
 * @version: 1.0
 * @Interface: 
 * @Date: 2021-07-27 15:06:21
 * @LastEditors: xiao zhipeng
 * @LastEditTime: 2021-07-29 12:59:04
 */

#ifndef     __SNAKE_H__
#define     __SNAKE_H__

#include  <stdio.h>
#include  <stdlib.h>

//宏定义贪吃蛇数据，可直接进行修改
#define     MAX_SNACK_SIZE    18        //定义蛇的最大长度，即完成游戏所需蛇长
#define     INIT_SNACK_SIZE     3        //定义蛇的初始化长度
#define     SNACK_SPEED         500      //定义蛇的移速，单位毫秒
#define     VENUE_MAX_LENGTH     17         //定义游戏场地宽度
#define     VENUE_MAX_WIDTH      37          //定义游戏场地长度

typedef struct MYSNAKE
{                                       //蛇由两个数组分别确定的X,Y轴上位置gouc
    int xsnack[MAX_SNACK_SIZE ] ;       //储存蛇X轴坐标的数组
    int ysnack[MAX_SNACK_SIZE ] ;       //储存蛇Y轴坐标的数组
}MySnack ;

typedef struct COORD                    //自定义结构体表示坐标
{
    int x ;
    int y ;
}Coord;


#endif