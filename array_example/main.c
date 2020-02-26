//
//  main.c
//  array_example
//
//  Created by air on 2020/2/25.
//  Copyright © 2020 xiaoyu. All rights reserved.
//

//#include <stdio.h>
//
//int main(int argc, const char * argv[]) {
//    // insert code here...
//    printf("Hello, World!\n");
//    return 0;
//}




/**冒泡算法（升序）*/
//#include <stdio.h>
//
//int main()
//{
//    int a[10];
//    int i,j,k;
//    printf("请输入10个整数：\n");
//    for(i =0; i <10; i++)    //循环输入 10个数组元素
//    {
//        scanf("%d",&a[i]);
//    }
//    printf("\n");
//    for(i =1; i <10; i++)      //外层循环 9 趟
//    {
//        for(j =0; j <10-i; j++)  // 每趟下来的 元素对比次数
//        {
//            if(a[j] > a[j+1])   //判断元素大小，进行位置调换
//            {
//                k =a[j];
//                a[j] =a[j+1];
//                a[j+1] =k;
//            }
//        }
//    }
//    printf("请输出排列后的顺序：\n");
//    for(i =0; i <10; i++)      //循环输出最终的排列循序
//    {
//        printf("%d ",a[i]);
//    }
//    printf("\n");
//    return 0;
//}





/**二维数组 例题 */
#include <stdio.h>

int main()
{
    int a[2][3] ={{1,2,4},{3,5,7}};
    int b[3][2],i,j,k;
    printf("array a:\n");
    for(i =0; i <2; i++)     //a 数组循环赋值输出
    {
        for(k =0,j =0; j <3; j++)
        {
            printf("%5d",a[i][j]);
            b[j][i] = a[i][j];     //a 数组 转换成 b 数组
            if(k <3)
            {
                k++;
            }
            if(k%3==0)      //判断输出三个元素 换行
            {
                printf("\n");
            }
        }
    }
    printf("\n");
    printf("array b:\n");
    for(i =0; i <3; i++)      // b 数组循环输出
    {
        for(k =0,j =0; j <2; j++)
        {
            printf("%5d",b[i][j]);
            if(k <2)
            {
                k++;
            }
            if(k%2==0)         //判断输出两个元素，换行
            {
                printf("\n");
            }
        }
    }
    printf("\n");
    return 0;
}
