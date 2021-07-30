/*
 * @Descripttion: 这是初始化贪吃蛇运动场地的函数的接口
 * @Author: Xiao ZhiPeng
 * @version: 1.0
 * @Interface: 
 * @Date: 2021-07-27 15:27:48
 * @LastEditors: xiao zhipeng
 * @LastEditTime: 2021-07-27 16:13:38
 */

#include  "InitVenue.h"

/**
 * @name: InitVenue
 * @description: 初始化贪吃蛇运动场地
 * @param {int} venue   贪吃蛇运动场地
 * @return {*}0
 */
int  InitVenue(int venue[VENUE_MAX_LENGTH][VENUE_MAX_WIDTH])
{
    int i = 0 , j = 0 ;
    
    //将二维数组外圈全部赋值“#”(ASCII 35)，其他全部赋值空格(ASCII 32)，构成场地
        
    // 第一排与最后一排
    for (size_t i = 0; i < VENUE_MAX_WIDTH; i++)
    {
        venue[0][i] = 35 ;                 
        venue[VENUE_MAX_LENGTH-1][i] = 35 ;
    }

    //第一列与最后一列
    for (size_t i = 0; i < VENUE_MAX_LENGTH; i++)
    {
        venue[i][0] = 35 ;
        venue[i][VENUE_MAX_WIDTH-1] = 35 ;
    }
    
    //其他赋值空格
    for (i = 1; i < VENUE_MAX_LENGTH-1; i++)
    {
        for (j = 1; j < VENUE_MAX_WIDTH-1; j++)
        {
            venue[i][j] = 32 ;
        }
    }
    
    return 0 ;
    
}
