/*
 * @Descripttion: 这是判断用户是否进行键盘操作的函数的接口
 * @Author: Xiao ZhiPeng
 * @version: 1.0
 * @Interface: 
 * @Date: 2021-07-28 07:42:21
 * @LastEditors: xiao zhipeng
 * @LastEditTime: 2021-07-29 15:55:59
 */

#include  <conio.h>

#include  "GetKey.h"

/**
 * @name: GetKey
 * @description: 判断用户是否进行键盘操作,并改变pdirction的值
 * @param {char} *pdirction     改变的方向变量的地址
 * @return {*}0
 */
int GetKey(char *pdirction)
{   
    char ch ;

    //判断是否用户进行按键
    if (_kbhit())
    {
        ch = getch() ;
        
        //用户按键有效（不与方向冲突）读取按键数据,否则继续读取
		if ((ch == 100 && *pdirction != 97) || ch == 119 && *pdirction != 115 
            || ch == 97 && *pdirction != 100 || ch == 115 && *pdirction != 119)
            {
                *pdirction = ch ;
            } 
        else
        {
            GetKey(pdirction) ;
        }
    
    return 0 ;        

    }
    
}
