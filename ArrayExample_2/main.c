//
//  main.c
//  ArrayExample_2
//
//  Created by air on 2020/3/1.
//  Copyright © 2020 xiaoyu. All rights reserved.
//

//#include <stdio.h>
//
//int main(int argc, const char * argv[]) {
//    // insert code here...
//    printf("Hello, World!\n");
//    return 0;
//}



/**第六章 数组练习题*/

/**习题 1*/
//利用‘筛选法’（不是素数的 标记为 0）
//#include <stdio.h>
//#include <math.h>
//
//int main()
//{
//    int a[101],i,j;
//    for(i =1; i<101; i++)  //给数组每个元素赋值
//    {
//        a[i] =i;
////        printf("%5d",a[i]);
//    }
//    a[1] =0;      //把 1先置为 0
//    for(i =2;i <sqrt(100); i++)      //1不是素数，找素数只需进行到根号100
//    {
//        for(j =i+1; j <101; j++)    //i 后面的数
//        {
//            if(a[j]!=0 && a[i]!=0)      //判断都不为 0 时满足条件
//            {
//                if(a[j]%a[i]==0)     //  能被 i整除的数都标记为 0
//                {
//                    a[j] =0;
//                }
//            }
//        }
//    }
//    for(i =2; i <=100; i++)
//    {
//        if(a[i]!=0)
//        {
//            printf("%5d",a[i]);    //循环输出不是 0的数，即：素数
//        }
//    }
//    printf("\n");
//    return 0;
//}




/**习题 2*/
//#include <stdio.h>
//
//int main()
//{
//    int a[] ={12,23,4,5,21,55,78,56,33,70};
//    int i,j,t=0;
//    for(i =0; i<9; i++)
//    {
//        for(j =0; j <9-i; j++)
//            {
//                if(a[j] > a[j+1])
//                {
//                    t =a[j];
//                    a[j] =a[j+1];
//                    a[j+1] =t;
//
//                }
//            }
//    }
//    for(i =0; i<10; i++)
//    {
//        printf("%5d",a[i]);
//    }
//    printf("\n");
//}





/**习题  3*/
//#include <stdio.h>
//
//int main()
//{
//    int a[3][3] ={{1,2,3},{},{}};
//    int i,j;
//    int num=0;
//    for(i =0; i<3; i++)
//    {
//        for(j =0; j<3; j++)
//        {
//            if(i==1 || j==1)
//            {
//                continue;
//            }else{
//                num =num + a[i][j];
//            }
//        }
//    }
//    printf("%d\n",num);
//    return 0;
//}


/**习题 4*/
//#include <stdio.h>
//
//int main()
//{
//    int a[11] = {1,2,4,5,7,8,12,24,35,88};
//    int tamp1,temp2,num,i,j;
//    printf("初始数组元素：\n");
//    for(i=0 ;i<10; i++)
//    {
//        printf("%d\t",a[i]);
//    }
//    printf("\n");
//    printf("插入一个数：");
//    scanf("%d",&num);
//    if(num > a[9])
//    {
//        a[10] = num;
//    }
//    else
//    {
//        for(i =0; i<10; i++)
//        {
//            if(a[i] > num)
//            {
//                tamp1 = a[i];
//                a[i] = num;
//                for(j =i+1; j < 11; j++ )
//                {
//                    temp2 = a[j];
//                    a[j] = tamp1;
//                    tamp1 = temp2;
//                }
//                break;   //第一次执行完里面的 for循环后，跳出外层循环不再执行
//            }
//        }
//    }
//    printf("最终的排序：\n");
//    for(i =0; i<11; i++)
//    {
//        printf("%d\t",a[i]);
//    }
//    printf("\n");
//    return 0;
//}



/**习题 5*/
//#include <stdio.h>

//int main()
//{
//    int i,temp;
//    int s[6]={1,2,4,5,6,8};
//    printf("初始数组为：\n");
//    for(i = 0;i<6; i++)
//    {
//        printf("%d\t",s[i]);
//    }
//    printf("\n");
//    printf("转换后的数组为：\n");
//    for(i =0; i<6/2; i++)
//    {
//        temp = s[i];
//        s[i] = s[6-i-1];
//        s[6-i-1] = temp;
//    }
//    for(i = 0; i<6; i++)
//    {
//        printf("%d\t",s[i]);
//    }
//    printf("\n");
//    return 0;
//
//}




/**习题 6  ：杨辉三角形*/
#include <stdio.h>
#define N 10
#define M 20

int main()
{
    int i,j;
    int a[N][M];
    for(i =0 ; i<10; i++)
    {
        for(j= 0; j<=i;j++)
        {
            if(j==0||i==j)
            {
                a[i][j] = 1;
            }else
            {
              a[i][j] = a[i-1][j-1] + a[i-1][j];
            }
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    return 0;
    
    
}

