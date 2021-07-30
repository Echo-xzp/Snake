/*
 * @Descripttion:这是一个根据用户输入确定蛇方向指针指向的函数的接口 
 * @Author: Xiao ZhiPeng
 * @version: 1.0
 * @Interface: 
 * @Date: 2021-07-29 12:32:42
 * @LastEditors: xiao zhipeng
 * @LastEditTime: 2021-07-29 12:41:28
 */

#ifndef     __DIRCTION_H__
#define     __DIRCTOON_H__

int  Dirction(char dirction ,int (**pMove)(MySnack *snack)) ;

#endif