/*
 * @Descripttion: �����ж��û��Ƿ���м��̲����ĺ����Ľӿ�
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
 * @description: �ж��û��Ƿ���м��̲���,���ı�pdirction��ֵ
 * @param {char} *pdirction     �ı�ķ�������ĵ�ַ
 * @return {*}0
 */
int GetKey(char *pdirction)
{   
    char ch ;

    //�ж��Ƿ��û����а���
    if (_kbhit())
    {
        ch = getch() ;
        
        //�û�������Ч�����뷽���ͻ����ȡ��������,���������ȡ
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
