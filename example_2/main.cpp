//
//  main.cpp
//  example_2
//
//  Created by air on 2020/2/16.
//  Copyright © 2020 xiaoyu. All rights reserved.
//

/** 例题 5*/
#include <stdio.h>
#include <math.h>

int main()
{
    int S=0;
    int x=1,n,i,a,a1=0,a2 = 0;
    printf("请输入位数‘a’和‘n’的值：\n");
    scanf("%d,%d",&a,&n);
    i = n;
    while(x<=n)
    {
        if(i >= 1)
        {
            a2 = pow(10,n-i)* a + a1;
            S = S + a2;
            a1 = a2;
            x++;
            i--;
        }
    }
    printf("输出最后一位数值：%d\n",a2);
    printf("输出各数相加总和是：%d\n",S);
    return 0;
}
