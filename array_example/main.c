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
//#include <stdio.h>
//
//int main()
//{
//    int a[2][3] ={{1,2,4},{3,5,7}};
//    int b[3][2],i,j;
//    printf("array a:\n");
//    for(i =0; i <2; i++)     //a 数组循环赋值输出
//    {
//        for(j =0; j <3; j++)
//        {
//            printf("%5d",a[i][j]);
//            b[j][i] = a[i][j];     //a 数组 转换成 b 数组
//        }
//        printf("\n");      //输出完一行就换行
//    }
//    printf("\n");
//    printf("array b:\n");
//    for(i =0; i <3; i++)      // b 数组循环输出
//    {
//        for(j =0; j <2; j++)
//        {
//            printf("%5d",b[i][j]);
//        }
//        printf("\n");   //输出完一行就换行
//    }
//    printf("\n");
//    return 0;
//}




/**二维数组 输出一个菱形*/
//#include <stdio.h>
//
//int main()
//{
//    char a[][6]={{' ',' ',' ','*'},{' ',' ','*',' ','*'},{' ','*',' ',' ',' ','*'},{' ',' ','*',' ','*'},{' ',' ',' ','*'}};
//    int i,j;
//    for(i =0; i<5; i++)
//    {
//        for(j =0; j<6; j++)
//        {
//            printf("%c",a[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}




/**统计输入字符  单词数*/     //关键：判断空格出现
//#include <stdio.h>
////#include <string.h>
//
//int main()
//{
//    char string[30];      //定义一个字符数组
//    int i,num =0,word =0;
//    char c;
//    gets(string);       //输入一个字符串给字符数组 string
//    for(i =0; (c=string[i])!='\0'; i++)      //将字符数组中一个字符string[i],赋值给字符变量 c，且判断不为‘\0’时继续循环
//    {
//        if(c==' ')
//        {
//            word =0;     //判断字符为空格时，使 word 置0
//        }else if(word ==0)   //判断字符不是空格时，且word为0，将word 置 1，并记录一个新单词
//        {
//            word =1;
//            num++;
//        }
//    }
//    printf("单词统计次数：%d\n",num);
//    return 0;
//}




/**例题：有 3 个字符串，要求找出其中最大者*/
#include <stdio.h>
#include <string.h>  //使用字符串处理函数时，需要加上 此头文件
int main()
{
    char str[3][20];     //定义一个二维数组（看作是三个一维字符数组str[i],便于下面循环赋值）
    char string[20];
    int i;
    for(i =0; i <3; i++)
    {
        gets(str[i]);          //循环给字符数组 str[i] 赋值
    }
    if(strcmp(str[0],str[1]) >0)   //判断比较str[0] 和 str[1] 中的最大值，并把最大值复制给 string数组
    {
        strcpy(string,str[0]);
    }
    else
    {
        strcpy(string,str[1]);
    }
    if(strcmp(string, str[2]) <0)
    {
        strcpy(string, str[2]);      //把 str[2]字符串 赋给 字符数组string
    }
    printf("\nthe largest string is: %s\n",string);    //输出 string
    return 0;
}
