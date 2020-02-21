//
//  main.cpp
//  example_2
//
//  Created by air on 2020/2/16.
//  Copyright © 2020 xiaoyu. All rights reserved.
//

/** 练习题 5*/
//#include <stdio.h>
//#include <math.h>
//
//int main()
//{
//    int S=0;
//    int x=1,n,i,a,a1=0,a2 = 0;
//    printf("请输入位数‘a’和‘n’的值：\n");
//    scanf("%d,%d",&a,&n);
//    i = n;
//    while(x<=n)
//    {
//        if(i >= 1)
//        {
//            a2 = pow(10,n-i)* a + a1;
//            S = S + a2;
//            a1 = a2;
//            x++;
//            i--;
//        }
//    }
//    printf("输出最后一位数值：%d\n",a2);
//    printf("输出各数相加总和是：%d\n",S);
//    return 0;
//}




/**练习题 6*/
//#include <stdio.h>
//
//int main()
//{
//    int i =1;
////    long int S =0,n1 =1;
//    double S =0,n1 =1;
//    printf("(1!+2!+3!+4!+....+20!)的值为:\n");
//    while(i <= 20)
//    {
//        n1 = i * n1;
//        S = S + n1;
////        n1 = n2;
//        i++;
//    }
////    printf("%ld\n",S);
//    printf("%e\n",S);
//}






/** 练习题 7*/
//#include <stdio.h>
//
//int main()
//{
//    double k,sum,s1 =0,s2 =0,s3 =0;    //均用double型，不然算出结果不精确
//    printf("公式求和等于：\n");
//    for(k =1; k <=100 ; k++)
//    {
//        s1 = s1 + k;
//    }
//    for(k =1; k <=50; k++)
//    {
//        s2 = s2 +(k * k);
//    }
//    for(k =1; k <=10; k++)
//    {
//        s3 = s3 + (1/k);
//    }
//    sum =s1 +s2 +s3;
//    printf("%f\n",sum);
//    return 0;
//}




/**练习题 8*/
//#include <stdio.h>
//
//int main()
//{
//    int S,a1,a2,a3;
//    int s1,s2,s3;
//    for(a1 =1; a1 <=9; a1++)
//    {
//        for(a2 =0; a2 <=9; a2++)
//        {
//            for(a3 =0; a3 <=9; a3++)
//            {
//                S =a1*100 +a2*10 +a3;
//                s1 =a1 *a1 *a1;
//                s2 =a2 *a2 *a2;
//                s3 =a3 *a3 *a3;
//                if(S ==s1 +s2 +s3)
//                {
//                    printf("这是一个水仙花数：%d\n",S);
//                }
//            }
//        }
//    }
//    return 0;
//}



/**练习题 8 （方法二）*/
//#include <stdio.h>
//
//int main()
//{
//    int S,i,j,k,n;
//    for(n =100; n <=999; n++)
//    {
//        i =n/100;
//        j =n/10 - i*10;
//        k =n % 10;
//        if(n == i*i*i +j*j*j +k*k*k)
//        {
//            printf("这是一个水仙花数：%d\n",n);
//        }
//    }
//    return 0;
//}




/**练习题 9*/
#include <stdio.h>

int main()
{
    int n,i,sum =0,j;
    for(n =2; n <1000; n++)  //确保在1000之内 （外循环）
    {
        for(i =1; i <=n-1; i++)    //确保在该数内 循环求因子（内循环）
        {
            if(n % i==0)    //判断 是否为因子
            {
                sum = sum +i;     //求该数所有因子 总和
            }
        }
        if(sum ==n)    //判断 因子数总和是否与该数 相等
        {
            printf("%d its factors are ",n);
            for(j =1; j <n; j++)    //循环输出  所有因子数
            {
                if(j ==1)
                {
                    printf("%d",j);
                    continue;
                }
                if(n % j==0)
                {
                    printf("，%d",j);
                }
            }
            printf("\n");
        }
        sum = 0;  //每一次内循环结束后，因子求和 sum归零 重新计算
    }
    return 0;
}




