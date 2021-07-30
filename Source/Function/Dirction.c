/*
 * @Descripttion: 这是一个根据用户输入确定蛇方向指针指向的函数的接口
 * @Author: Xiao ZhiPeng
 * @version: 1.0
 * @Interface: 
 * @Date: 2021-07-29 12:39:10
 * @LastEditors: xiao zhipeng
 * @LastEditTime: 2021-07-29 15:43:01
 */

#include  "Snake.h"
#include  "Dirction.h"
#include  "Up.h"
#include  "Down.h"
#include  "Right.h"
#include  "Left.h"

/**
 * @name: Dirction
 * @description: 根据用户输入确定蛇方向指针指向
 * @param {char} dirction   用户输入的方向
 * @param {MySnack} *snack     指向运动函数的指针的地址
 * @return {*}      
 */
int  Dirction(char dirction ,int (**pMove)(MySnack *snack))
{
    switch (dirction)
    {
    case 'a':
        *pMove = Left ;
        break;
    case  's' :
        *pMove = Down ;
        break ;
    case  'd' :
        *pMove = Right ;
        break ;
    case  'w' :
        *pMove = Up ;
        break ;
    default:
        printf("Error!\n") ;
        exit(1) ;
        break;
    }
}
