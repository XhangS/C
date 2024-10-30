// #include <stdio.h>
 
// const int MAX = 3;
 
// int main ()
// {
//    // 定义一个整数数组
//    int var[] = {10, 100, 200};
//    // 定义一个整数变量 i 和一个整数指针 ptr
//    int i, *ptr;
 
//    // 将指针 ptr 指向数组 var 的起始地址
//    ptr = var;
//    // 循环遍历数组
//    for ( i = 0; i < MAX; i++)
//    {
//       // 打印当前指针 ptr 所指向的地址
//       printf("存储地址:var[%d] = %p\n", i, ptr );
//       // 打印当前指针 ptr 所指向地址的值
//       printf("存储值:var[%d] = %d\n", i, *ptr );
 
//       // 将指针 ptr 移动到下一个数组元素的位置
//       ptr++;
//    }
//    return 0;
// }


#include <stdio.h>
int main()
{
//    char arr[]="Hello";
//    char *pr=arr;
   
//    for (int i=0;i<5;i++)
//    {
//       printf("%p\n",pr);
//       printf("%c\n",*pr);
//       printf("%s\n",pr);
//       printf("%d",pr);
//       pr++;
//    }
      int arr[]={1,2,3,5,8};
      int *pr=arr;
   
      for (int i=0;i<5;i++)
      {
          printf("%p\n",pr);
          printf("%d\n",*pr);
        //   printf("%s\n",pr);
          printf("%d",pr);
          pr++;
       }




   return 0;
}


// #include <stdio.h>
 
// const int MAX = 3;
 
// int main ()
// {
//    int  var[] = {10, 100, 200};
//    int i, *ptr[MAX];
 
//    for ( i = 0; i < MAX; i++)
//    {
//       ptr[i] = &var[i]; /* 赋值为整数的地址 */
//    }
//    for ( i = 0; i < MAX; i++)
//    {
//       printf("Value of var[%d] = %d\n", i, *ptr[i] );
//    }
//    return 0;
// }


// #include <stdio.h>
 
// const int MAX = 4;
 
// int main ()
// {
//    const char *names[] = {
//                    "Zara Ali",
//                    "Hina Ali",
//                    "Nuha Ali",
//                    "Sara Ali",
//    };
//    int i = 0;
 
//    for ( i = 0; i < MAX; i++)
//    {
//       printf("Value of names[%d] = %s\n", i, names[i] );
//    }
//    return 0;
// }