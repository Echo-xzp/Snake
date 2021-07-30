/*
 * @Descripttion:这是控制贪吃蛇向左走的函数的接口 
 * @Author: Xiao ZhiPeng
 * @version: 1.0
 * @Interface: 
 * @Date: 2021-07-28 08:15:48
 * @LastEditors: xiao zhipeng
 * @LastEditTime: 2021-07-29 12:55:44
 */

#include  "Left.h" 

/**
 * @name: Left
 * @description: 蛇往左走时蛇头变化
 * @param {MySnack} *snack      蛇变量的地址
 * @return {*}0
 */
int  Left(MySnack *snack)
{   
    //蛇向左走，即蛇横坐标左移
    --(snack->xsnack[0]) ;
    
    return 0 ;

}
