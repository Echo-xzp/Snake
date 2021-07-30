/*
 * @Descripttion:这是控制贪吃蛇向上走的函数的接口 
 * @Author: Xiao ZhiPeng
 * @version: 1.0
 * @Interface: 
 * @Date: 2021-07-28 08:15:48
 * @LastEditors: xiao zhipeng
 * @LastEditTime: 2021-07-29 13:01:34
 */

#include  "Up.h" 

/**
 * @name: Up
 * @description: 蛇往上走时蛇头变化
 * @param {MySnack} *snack      蛇变量的地址
 * @return {*}0
 */
int  Up(MySnack *snack)
{   
    //蛇向上走，即蛇头坐标上移   
    --(snack->ysnack[0]) ;
    
    return 0 ;

}
