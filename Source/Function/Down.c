/*
 * @Descripttion:这是控制贪吃蛇向下走的函数的接口 
 * @Author: Xiao ZhiPeng
 * @version: 1.0
 * @Interface: 
 * @Date: 2021-07-28 08:15:48
 * @LastEditors: xiao zhipeng
 * @LastEditTime: 2021-07-29 12:55:22
 */

#include  "Down.h" 

/**
 * @name: Down
 * @description: 蛇往下走时蛇头变化
 * @param {MySnack} *snack      蛇变量的地址
 * @return {*}0
 */
int  Down(MySnack *snack)
{   
    // //蛇向下走，即蛇头纵坐标下移
    ++(snack->ysnack[0]) ;

    return 0 ;

}
