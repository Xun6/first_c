//
//  main.cpp
//  first_c
//
//  Created by air on 2020/2/13.
//  Copyright © 2020 xiaoyu. All rights reserved.
//

//#include <iostream>
//
//int main(int argc, const char * argv[]) {
//    // insert code here...
//    std::cout << "Hello, World!\n";
//    return 0;
//}


/**例题：输入两个正整数 m 和 n ，求其最大公约数和最小公倍数*/

//#include <stdio.h>
//
//int main()
//{
//    int p,r,n,m,temp;
//    printf("请输入两个正整数 n,m:");
//    scanf("%d,%d",&n,&m);
//    if(n < m)
//    {
//        temp = n;
//        n = m;
//        m = temp;
//    }
//    p = n * m;
//    while(m!= 0)
//    {
//        r = n % m;
//        n = m;
//        m = r;
//    }
//    printf("最大公约数为：%d\n",n);
//    printf("最小公倍数为：%d\n",p/n);
//    return 0;
//}




/**例题：输入一行字符，分别统计出其中英文字母、空格、数字、其他字符的个数*/
//#include <stdio.h>
//
//int main()
//{
//    int letter=0,digital=0,space=0,other=0;
//    char c;
//    printf("请输入一串字符：\n");
//    while((c=getchar())!='\n')
//    {
//        if((c>='A' && c<='Z') || (c>='a' && c<='z'))
//        {
//            letter++;
//        }
//        else if(c==' ')
//        {
//            space++;
//        }
//        else if(c>='0'&&c<='9')
//        {
//            digital++;
//        }
//        else
//        {
//            other++;
//        }
//    }
//    printf("字母数：%d\n数字数：%d\n空格数：%d\n其他：%d\n",letter,digital,space,other);
//    return 0;
//}
//




/**例题 5*/
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
        if(i < 1)
        {
            break;
        }
        a2 = pow(10,n-i)* a + a1;
        S = S + a2;
        a1 = a2;
        x++;
        i--;
    }
    printf("输出最后一位数值：%d\n",a2);
    printf("输出各数相加总和是：%d\n",S);
    return 0;
}
