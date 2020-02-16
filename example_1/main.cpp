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

#include <stdio.h>

int main()
{
    int p,r,n,m,temp;
    printf("请输入两个正整数 n,m:");
    scanf("%d,%d",&n,&m);
    if(n < m)
    {
        temp = n;
        n = m;
        m = temp;
    }
    p = n * m;
    while(m!= 0)
    {
        r = n % m;
        n = m;
        m = r;
    }
    printf("最大公约数为：%d\n",n);
    printf("最小公倍数为：%d\n",p/n);
    return 0;
}
//
//
//
//
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





