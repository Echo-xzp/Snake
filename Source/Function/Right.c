/*
 * @Descripttion:这是控制贪吃蛇向右走的函数的接口 
 * @Author: Xiao ZhiPeng
 * @version: 1.0
 * @Interface: 
 * @Date: 2021-07-28 08:15:48
 * @LastEditors: xiao zhipeng
 * @LastEditTime: 2021-07-29 12:56:12
 */

#include  "Right.h" 

/**
 * @name: Right
 * @description: 蛇往右走时蛇头变化
 * @param {MySnack} *snack      蛇变量的地址
 * @return {*}0
 */
int  Right(MySnack *snack)
{   
    //蛇向右走，即蛇头纵坐标下移
    ++(snack->xsnack[0]) ;

    return 0 ;

}

