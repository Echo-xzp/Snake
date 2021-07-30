/*
 * @Descripttion:这是控制贪吃蛇移动的函数的接口 
 * @Author: Xiao ZhiPeng
 * @version: 1.0
 * @Interface: 
 * @Date: 2021-07-29 08:21:46
 * @LastEditors: xiao zhipeng
 * @LastEditTime: 2021-07-29 15:54:29
 */

#include  "SnakeMove.h"

/**
 * @name: SnackMove
 * @description: 根据指针指向不同的方向函数，控制蛇进行运动
 * @param {MySnack} *snack      蛇变量的地址
 * @param {int} SnackLen        蛇长
 * @param {MySnack} *snack      指向蛇的方向函数的指针
 * @return {*}0
 */
int  SnackMove(MySnack *snack,int SnackLen ,int (*pMove)(MySnack *snack))
{   
    int i = 0 , xtail = 0 , ytail = 0 ;

    //保存蛇尾坐标，防止后续覆盖导致数据丢失
    xtail = snack->xsnack[SnackLen-1] ;
    ytail = snack->ysnack[SnackLen-1] ;
    
    //蛇移动，即蛇头外其余坐标变成其前一个蛇位置的坐标，蛇头更加移动方向改变坐标
    for ( i = SnackLen-1; i > 0; --i)
    {
        snack->xsnack[i] = snack->xsnack[i-1] ;
        snack->ysnack[i] = snack->ysnack[i-1] ;
    }
    pMove(snack) ;      //调用指向移动函数的指针改变蛇头

    return 0 ;

}