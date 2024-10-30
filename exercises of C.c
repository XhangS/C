#include <stdio.h>
#include <string.h>


  
/*1
int main() {  
    int n, a, b, c, s;  
      
    // 读取整数 n  
    scanf("%d", &n);  
      
    // 分离 n 的百位、十位和个位  
    a = n / 100;         // 百位  
    b = (n / 10) % 10;   // 十位  
    c = n % 10;          // 个位  
      
    // 计算 a, b, c 的和  
    s = a + b + c;  
      
    // 输出结果  
    printf("%d\n", s);  
      
    return 0;  
}*/





/*int main()
{
    int N;
    scanf("%d\n",&N);
    N=N%100;
    if (N<10)
    {
     printf("0%d\n",N);
    }
    else 
    {
     printf("%d\n",N);
    } 
}*/
   


   /*int a,b,c;
   scanf("%d %d %d",&a,&b,&c);
   a=7-a;
   c=7-c;
   b=7-b;
   printf("%d\n",a+b+c);*/
   
   //strlen=string len
   
   /*char arr1[]="abcdef";
   int len=strlen(arr1);

   printf("%d\n",len);
   printf("%s\n",arr1);*/




/*
int main() {
    int n,a,b,c,s;
    scanf("%d\n",&n);
    a=n/100;
    b=(n%100)/10;
    c=n%10;
    s=a+b+c;
    printf("%d\n",s); 
    return 0;
}*/




/*
#include <stdio.h>
int main()
{
    int F;
    float C;
    scanf("%d",&F);
    C=(F-32)/1.8;
    printf("%.2f",C);
    return 0;
}*/



/*
#include <stdio.h>
int main()
{
    float BMI,w,h;
    scanf("%f %f",&w,&h);
    BMI=w/(h*h);
    printf("%f",BMI);
    return 0;
}



#include <stdio.h>
int main()
{
    float a,b,C,S;
    scanf("%f %f",&a,&b);
    C=2*a+2*b;
    S=a*b;
    printf("%.1f\n",C);
    printf("%.1f\n",S);
    return 0;
}*/



/*
#include <stdio.h>
#define PI 3.14159
int main()
{
    int r;
    float C,S;
    scanf("%d",&r);
    C=2*PI*r;
    S=PI*r*r;
    printf("%.2f",C);
    printf(" %.2f",S);
    return 0;
}*/


/*
#include <stdio.h>
#include <math.h>
int main()
{
    float a,b,c,S,p;
    scanf("%f %f %f",&a,&b,&c);
    p=(a+b+c)/2;
    S=sqrt(p*(p-a)*(p-b)*(p-c));
    printf("%.2f",S);
    return 0;
}*/

/*
#include <stdio.h>
int main()
{
    float v,a,l;
    scanf("%f %f %f",&v,&a,&l);
    l=(v*v)/(2*a);
    printf("%.2f",l);
    return 0;
}*/

/*
#include <stdio.h>
int main()
{
    int d,m,y;
    scanf("%d %d %d",&y,&m,&d);
    printf("PRC form:%d/%d/%d\n",y,m,d);
    printf("UK form:%d/%d/%d\n",d,m,y);
    printf("USA form:%d/%d/%d\n",m,d,y);
    
    return 0;
}*/

/*
#include <stdio.h>
int main()
{
    int a,b,c,d,s;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a+b>=d)
    {
        printf("%d",a);
    } 
    else
    {
        s=a-(d-a-b);
        printf("%d",s);
        
    }
    return 0;
}
*/


/*
#include <stdio.h>
int main()
{
    int N,a,b;
    scanf("%d %d %d",&N,&a,&b);
    if (N*a<=b)
    {
        printf("%d",N*a);
    }
    else
    {
        printf("%d",b);
    }
    
    return 0;
}*/



/*
#include <stdio.h>
int main()
{
    int A,B,C,Max1,Max2;
    scanf("%d %d %d",&A,&B,&C);
    if (A>B)
    {
        Max1=A;
        if (B>C)
        {
            Max2=B;
            
        }
        else
        {
            Max2=C;
        }
        printf("%d",Max1+Max2);
        
    }
    else
    {
        Max1=B;
        if (A>C)
        {
            Max2=A;
            
        }
        else
        {
            Max2=C;
        }
        printf("%d",Max1+Max2);
    }
    return 0;
}*/



/*
#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if (a>b & b>c){
        printf("%d\n",(a+b));
        
    }
    else if (a>c & c>b){
        printf("%d\n",(a+c));
        
    }
    else if (c>a & a>b){
        printf("%d\n",(a+c));
        
    }
    else if (b>a & a>c){
        printf("%d\n",(a+b));
        
    }
    else {
        printf("%d\n",(b+c));
    }
return 0;
}
*/


/*
#include <stdio.h>
int main()
{
    int X,Y,N,a,b;
    scanf("%d %d %d",&X,&Y,&N);
    a=N/3;
    b=N%3;
    printf("%d",(a*Y)+(b*X));
    return 0;
}
*/


/*
#include <stdio.h>
int main()
{
    int X,Y,N,a,b,sum;
    scanf("%d %d %d",&X,&Y,&N);
    if (X>=Y/3)
    {
        a=N/3;
        b=N%3;
        sum=(a*Y)+(b*X);
        printf("%d",sum);
    }
    else
    {
        sum=N*X;
        printf("%d",sum);   
    }
    return 0;
}


#include <stdio.h>
int main()
{
    int X,Y;
    scanf("%d %d",&X,&Y);
    if (X>Y)
    {
        if (X-Y>=3)
        {
            
            printf("No");
        }
        else
        {
            
            printf("Yes");
        }
        
    }
    else
    {
        if (Y-X>=3)
        {
            printf("No");
  
        }
        else
        {
            printf("Yes");
        }
        
    }

    
    return 0;
}
*/


/*
#include <stdio.h>
int main()
{
    int N,a,b,A,B;
    scanf("%d",&N);
    a=N/10;
    A=(a/3)+a;
    b=(a%5)/3;
    if (b>0)
    {
        B=2*(a/5)+a+b;
    }
    else 
    {
        B=B=2*(a/5)+a;
    }
    if (A>B)
    {
       printf("%d",A);
  
    }
    else
    {
        printf("%d",B);
    }

    return 0;
}
*/

/*
#include <stdio.h>
int main()
{
    float math,english,computer;
    float ba;
    scanf("%d %d %d",&math,&english,&computer);
    ba=(math+english+computer)/3;
    printf("%.2f",ba);
    
    return 0;
}
*/


/*
#include <stdio.h>
int main()
{
    int socer;
    char step;
    scanf("%d",&socer);
    if (socer>=90)
    {
        step='A';
    }
    else if(socer>=80)
    {
        step='B';
    }
    else if(socer>=70)
    {
        step='C';
    }
    else if(socer>=60)
    {
        step='D';
    }
    else
    {
        step='E';
    }
    printf("%c",step);
    return 0;
}


#include <stdio.h>
int main()
{
    int y,x;
    scanf("%d",&x);
    if (x<6)
    {
        y=x-12;
    }
    else if(x>=6 & x<15)
    {
        y=3*x-1;
        
    }
    else
    {
        y=5*x+9;
        
    }
    printf("%d",y);
    
    
    
    return 0;
}


#include <stdio.h>
int main()
{
    int Day,N;
    float n,T;
    scanf("%d",&Day);
    N=Day*1.5;
    n=Day*1.5;
    T=N-n;
    if (T>=0)
    {
        printf("%d",N);
    }
    else 
    {
        printf("%d",N+1);
    }
    return 0;
}

*/

 
/*    函数
int Add(int x,int y)
{
    return (x+y);
}
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    int sum=Add(x,y);
    printf("%d",sum);
    return 0;
}
*/

/*
#include <stdio.h>
int main()
{
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    if (num1>num2)
    {
        printf(">");
    }
    else if(num1<num2)
    {
        printf("<");
    }
    else
    {
        printf("=");
    }
    
    return 0;
}
*/


/*计算规则:在1000克以内(包括1000克），基本费8元。超过1000克的部分，每500收超重费4元，不足500克部分按500克计算;如果选择加急，多收5元
#include <stdio.h>
int main()
{
    int weight,sum;
    char F;
    scanf("%d %c",&weight,&F);
    if (weight<=1000)//判断是否超过1000g
    {
        sum=8;
    }
    else 
    {
        int a=(weight-1000)/500;
        int b=(weight-1000)%500;//判断超过了几个500g
        if (a>0)
        {
            
            if (b>0)
            {
                sum=(a+1)*4+8;
            }
            else
            {
                sum=a*4+8;
            }
        }
        else
        {
            if (b>0)
            {
                sum=4+8;
            }
            else
            {
                sum=8;
            }
        }
    }
    if (F=='y')
    {
        sum=sum+5;
    }
    else 
    {
        sum=sum;
    }
    printf("%d",sum);
    return 0;
}

*/

//从键盘输入数字(1–7)，编程计算来表示该数字代表的是星期几，并输出星期几的英文表示。注意：周一到周日必须进行不合法数据判断，如果输入的数字有错误，则输出单词"Error"。每个输出后均有一个换行符。

/*
#include <stdio.h>
int main()
{
    int a;
    char *Day[8]={"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
    scanf("%d",&a);
    if (a>=1 & a<=7)
    {
        printf("%s\n",Day[a-1]);
    }
    else
    {
        printf("Error");
    }

    return 0;
}
*/

/*
#include <stdio.h>
int main()
{
    int year;
    scanf("%d",&year);
    if ((year%4==0 && year%100!=0) || (year%400==0))
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }    
    return 0;
}


#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if (n%3==0 && n%5==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}


#include <stdio.h>
int main()
{
    int N;
    float sum;
    scanf("%d",&N);
    if (N<30)
    {
        sum=N*50;
        printf("%.2f",sum);
    }
    else
    {
        sum=N*48;
        printf("%.2f",sum);
    }
    return 0;
}


#include <stdio.h>
int main()
{
    int p,q,m;
    scanf("%d %d %d",&p,&q,&m);
    if (m>=p && m<=q)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }

    return 0;
}
*/

//假设某人从某天起，开始“三天打鱼两天晒网”，问这个人在以后的第N天中是“打鱼”还是“晒网”？
/*#include <stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int a=N%5;
    char *D[]={"Drying","Fishing","Fishing","Fishing","Drying"};
    printf("%s in day %d",D[a],N);
    return 0;
}*/
//也 可以用选择

/*
#include <stdio.h>
int main()
{
    int A,B,life,n;
    scanf("%d %d",&A,&B);
    life=A%B;
    n=A/B;
    if (life<=0)
    {
        printf("%d",n);
    }
    else 
    {
        printf("%d",n+1);
    }
    
    
    
    return 0;
}
*/
/*
#include <stdio.h>
int main()
{
    int A,B;
    scanf("%d %d",&A,&B);
    if (A>0 && B==0)
    {
        printf("Gold");
    }
    else if(A==0 && B>0)
    {
        printf("Silver");
    }
    else
    {
        printf("Alloy");
    }
    return 0;
}*/

/*
#include <stdio.h>
int main()
{
    int i;
    int a,b,c;
    for (i=100;i<1000;i++)
    {
         a=i/100;
         b=(i%100)/10;
         c=i%10;
    
         if (a*a*a+b*b*b+c*c*c==i)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}
*/

/*
#include <stdio.h>
int num;
int factor[100];
int count=0;
int son(int num)//创建因子求和函数
{
    int sum;
    for (int i=1;i<num;i++)
    {
        if (num%i==0)
        {
            sum=sum+i;//累加因子求和
            printf("%d ",i);
        }
    }
    return sum;
}
int main()
{
    scanf("%d",&num);
    int b=son(num);
    if (b==num)//验证是否为完全数
    {
        printf("Yes,its factors are %d");
        //for (int i=0;i<count;i++)
       // {
        //    printf("%d",factor[i]);
        //}
    }
    else 
    {
        printf("No");
    }
    
    return 0;
}
*/


 /*
#include <stdio.h>
int main()
{
    long int Mon,attack;
    scanf("%ld %ld",&Mon,&attack);
    int N=Mon%attack;
    if (N=0)
    {
        printf("%ld",Mon/attack);
    }
    else
    {
        printf("%ld",Mon/attack+1);
    }
    return 0;
}

#include <stdio.h>
int main()
{
    int r,D,x2000;
    scanf("%d %d %d",&r,&D,&x2000);
    for (int i=2001;i<2011;i++)
    {
        x2000=r*x2000-D;
        printf("%d\n",x2000);
    }
    
    return 0;
}
*/


// #include <stdio.h>
// int main()
// {
//     long long int yen;
//     scanf("%lld",&yen);
//     long long int sum=0;
//     for (long int i=1;i>0;i++)
//     {
//         sum=sum+i;
//         if (sum>=yen)
//         {
//             printf("%ld",i);
//             break;
//         }
        
//     }
//     return 0;
// }


 /*
#include <stdio.h>
int main()
{
    int N;
    int nut[sizeof(N)]
    ;
    scanf("%d\n %d",&N,&nut[N]);
    printf("%d",nut);
    
    
    return 0;
}
*/


/*
#include <stdio.h>
int main()
{
    long long int A,B,K,count=0;
    scanf("%lld %lld %lld",&A,&B,&K);
    while (A<B)
    {
        A*=K;
        count++;
    }
    printf("%lld",count);
    
    return 0;
}



#include <stdio.h>
int main()
{
    long int N,K;
    scanf("%d %d",&N,&K);
    for(int i=1;i<=K;i++)
    {
        if (N%200<=0)
        {
           N=N/200;
        }
        else
        {
           N=N*1000+200;
        }
    
    }
    printf("%ld",N);
    return 0;
}*/

/*
#include <stdio.h>
int main()
{
    long long int N;
    long long int sum=0;
    long long int A[10000];
    scanf("%lld\n",&N);
    for (long long int i=0;i<=N;i++)
    {
        scanf("%lld",&A[i]);
    }
    
    for (long long int i=0;i<N;i++)
    {
        if (A[i]>10)
        {
            sum+=A[i]-10;
        }
    }
    printf("%lld",sum);
    return 0;
}

*/

/*
#include <stdio.h>
int main()
{
    long int six,nine;
    long int count=0;
    for (six=100;six<1000;six++)
    {
        for (nine=1000;nine<10000;nine++)
        {
            if ((nine/100)%10==(six/10)%10 && (nine/1000)==(nine%100)/10)
            {
                if (3*six==2*nine)
                {
                    count++;
                }
            }
           
            
        }
    }
    printf("%ld",count);
    
    
    return 0;
}
*/



/*求阿姆斯特朗数
#include <stdio.h>
int sum(int n)
{
    int h=n/100;
    int t=(n/10)%10;
    int a=n%10;
    int sum_h=1;
    int sum_t=1;
    int sum_a=1;
    for (int i=1;i<=h;i++)
    {
        sum_h*=i;
    }
    for (int i=1;i<=t;i++)
    {
        sum_t*=i;
    }
    for (int i=1;i<=a;i++)
    {
        sum_a*=i;
    }
    int Sum=sum_h+sum_t+sum_a;
    return Sum;
}

int main()
{
    
    for (int d=100;d<1000;d++)
    {
        int num=sum(d);
        if (num==d)
        {
            printf("%d\n",num);
        }
    }
    return 0;
}

*/

/*
#include <stdio.h>
int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    for (int i=m;i<=n;i++)
    {
        for (int a=2;a<i;a++)
        {
            for (int b=2;b<i;b++)
            {
                if (a*b!=i)
                {
                    printf("%d",i);
                }
                
            }
        }
    }
    
    return 0;
}*/

/*
#include <stdio.h>
int main()
{
    int n;
    float sum=0.0000;
    int sign=1;
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
        sum+=sign*(1.0/i);
        sign=-sign;
    }
        printf("sum=%.4f",sum);
    return 0;
}
*/


/*
#include <stdio.h>
int main()
{
    double h_0;
    float total=10.0;
    int i;
    scanf("%lf",&h_0);
    
    for (int i=2;i<11;i++)
    {
        
        total+=h_0;
        h_0*=1.0/2;
    }
    h_0=h_0*1.0/2;
    printf("The total is:%.3f\nThe tenth is:%.3lf",total,h_0);
    return 0;
}
*/

// #include <stdio.h>
// int main()
// {
//     int a=1;
//     int b=3;
//     sizeof(a);
//     sizeof(b);
//     printf("%d %d",sizeof a,sizeof b);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int m,n;
//     int min;
//     int arr[]={};
    
//     scanf("%d %d",&m,&n);
//     if(m>=n)
//     {
//         min=n;
//     }
//     else
//     {
//         min=m;
//     }
//     for (int i=1;i<=min;i++)
//     {
//         if(m%i==0 && n%i==0)
//         {
//             for (int a=0;a<min;a++)
//             {
//                 arr[a]=i;
//             }
            
//         }
//     }
//     int len=sizeof(arr)/4;
//     printf("%d",arr[len]);
//     return 0;
// }


// #include <stdio.h>
// int main()
// {
//     int S;
//     int last_two=S%100;
//     int first_two=S/100;
//     if (first_two>0 && first_two<=12)
//     {
//         if (last_two>0 && last_two<=12)
//         {
//             printf("AMBIGUOUS");
//         }
//         else 
//         {
//             printf("MMYY");
//         }
//     }
//     else
//     {
//         if (last_two>0 && last_two<=12)
//         {
//             printf("YYMM");
//         }
//         else
//         {
//             printf("NA");
//         }
//     }
    
    
//     return 0;
// }


// #include <stdio.h>
// int main()
// {
//     int V,T,S,D;
//     scanf("%d %d %d %d",&V,&T,&S,&D);
//     float t=D/V;
//     if (t<T || t>S)
//     {
//         printf("Yes");
//     }
//     else if (t>=T && t<=S)
//     {
//         printf("No");
//     }
    
//     return 0;
// }



// //求两个数的最大公约数，欧几里得辗转相除法
// #include <stdio.h>
// int num(int a,int b)
// {
//     int max,min;//取出最大最小值
//     if (a>=b)
//     {
//         max=a;
//         min=b;
//     }
//     else
//     {
//         max=b;
//         min=a;
//     }
//     int d=max%min;
//     while (d>0)
//     {
//         int temp=d;//创建临时变量储存b的旧值
//         d=min%d;
//         min=temp;
//     }
//     return min;
// }
// int main()
// {
//     int m,n;
//     scanf("%d %d",&m,&n);
//     int ans=num(m,n);
//     printf("%d",ans);
//     return 0;
// }



// #include <stdio.h>
// int main()
// {
//     int arr[2][2]={1,2,3,4};
//     printf("%d",arr);
//     return 0;
// }

//一个二维数组，判断每一列有几个元素和这一列最后一个元素相同，结果输出一行
// #include <stdio.h>
// int main()
// {
//     int n,m;
//     scanf("%d %d",&n,&m);
//     int arr[n][m];//创建二维数组
//     for (int i=0;i<n;i++)//遍历每个元素，为其赋值
//     {
//         for (int j=0;j<m;j++)
//         {
//             scanf("%d",&arr[i][j]);
//         }
//     }
    
//     for (int j=0;j<m;j++)//从每一列开始检查
//     {
//         int same=0;//重置结果的数值，因为最后一个元素也会被检查，所以same=0
//         for (int i=0;i<n;i++)
//         {
//             if (arr[i][j]==arr[n-1][j])
//             {
//                 same+=1;
//             }
//         }
//         printf("%d ",same);//在每一列结束后打印same
//     }
    
//     return 0;
// }


// #include <stdio.h>
// int main()
// {
//     int n,m;
//     scanf("%d %d",&n,&m);
//     int arr[n][m];
//     for (int i=0;i<n;i++)
//     {
//         for (int j=0;j<m;j++)
//         {
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     int max=arr[0][0];
//     int _i=0;
//     int _j=0;
//     for (int i=0;i<n;i++)
//     {
//         for (int j=0;j<m;j++)
//         {
//             if (arr[i][j]>max)
//             {
//                 max=arr[i][j];
//                 _i=i;
//                 _j=j;
//             }
//         }
//     }
//     printf("%d %d %d",max,_i,_j);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int n,k;
//     scanf("%d %d",&n,&k);
//     int arr[n];
//     for (int i=0;i<n;i++)//遍历所有元素为数组赋值
//     {
//         scanf("%d",&arr[i]);
//     }

//     for (int i=0;i<n-1;i++)//冒泡排序法
//     {
//         for (int j=0;j<n-1-i;j++)//j-1-i减少了排序次数
//         {
//             if (arr[j]<arr[j+1])//将数组排为降序
//             {
//                 int temp=arr[j];//创建temp变量存储上一位元素的旧值
//                 arr[j]=arr[j+1];
//                 arr[j+1]=temp;
//             }
//         }
//     }
//    for (int i=0;i<k;i++)//打印，若想从后往前打印，i>=n-k
//    {
//        printf("%d ",arr[i]);
//    }
//     return 0;
// }


//为上一个的扩展，添加了表示出第一位元素排名的部分
// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     //printf("\n");
//     int arr[n];
//     for (int i=0;i<n;i++)//遍历所有元素为数组赋值
//     {
//         scanf("%d",&arr[i]);
//     }
//     int old=arr[0];
//     for (int i=0;i<n-1;i++)//冒泡排序法
//     {
//         for (int j=0;j<n-1-i;j++)//j-1-i减少了排序次数
//         {
//             if (arr[j]<arr[j+1])//将数组排为降序
//             {
//                 int temp=arr[j];//创建temp变量存储上一位元素的旧值
//                 arr[j]=arr[j+1];
//                 arr[j+1]=temp;
//             }
//         }
//     }
//    for (int i=0;i<n;i++)//打印，若想从后往前打印，i>=n-k
//    {
//        if (arr[i]==old)//此处求得了等于第一个元素的位置，并默认第一个就是当初的第一个元素
//        {
//            printf("%d",i+1);
//            break;
//        }
       
//    }
//     return 0;
// }


//求一个二维数组最外层的和
// #include <stdio.h>
// int main()
// {
//     int n,m;
//     scanf("%d %d",&n,&m);
//     int arr[n][m];//创建二维数组
//     for (int i=0;i<n;i++)
//     {
//         for (int j=0;j<m;j++)
//         {
//             scanf("%d",&arr[i][j]);//遍历二维数组为其赋值
//         }
//     }
//     int sum=0;
//     for (int i=0;i<n;i++)
//     {
//         for (int j=0;j<m;j++)
//         {
//             sum+=arr[i][j];//求得所有数组的和
//         }
//     }
//     int sum2=0;
//     for (int i=1;i<n-1;i++)
//     {
//         for (int j=1;j<m-1;j++)
//         {
//             sum2+=arr[i][j];//求得中间数组的和
//         }
//     }
//     printf("%d",sum-sum2);
//     return 0;
// }



// #include <stdio.h>
// int main()
// {
//     double arr[12][1];
//     for (int i=0;i<12;i++)
//     {
//         scanf("%lf",&arr[i][0]);
//     }
//     double sum=0;
//     for (int i=0;i<12;i++)
//     {
//         sum+=arr[i][0];
//     }
//     printf("$%.2f\n",sum/12);
//     return 0;
// }


// #include <stdio.h>
// int main()
// {
//     int a,b;
//     scanf("%d %d",&a,&b);
//     for (int i=a;i<=b;i++)
//     {
//         if (i%11==0)
//         {
//             printf("%d ",i);
//         }
//     }
//     return 0;
// }


// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int arr[n][1];
//     for (int i=0;i<n;i++)
//     {
//         scanf("%d",&arr[i][0]);
//     }
//     int sum=0;
//     for (int i=0;i<n;i++)
//     {
//         sum+=arr[i][0];
//     }
//     printf("%d %.5f",sum,sum*1.0/n);
    
//     return 0;
// }


// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int arr[n][1];//创建有一列的数组
//     int arr2[n];//创建一个数组储存序号
//     for (int i=0;i<n;i++)
//     {
//         scanf("%d",&arr[i][1]);//为数组赋值
//         arr2[i]=i+1;//同时为序号数组输入连续的序号
//     }
//        //开始冒泡排序
//     for (int i=0;i<n-1;i++)
//     {
//         for (int j=0;j<n-1-i;j++)
//         {
//             if (arr[j][1]<arr[j+1][1])
//             {
//                 //前三行对数组arr开始冒泡排序，将其变为降序，方便后续打印
//                 int temp=arr[j][1];
//                 arr[j][1]=arr[j+1][1];
//                 arr[j+1][1]=temp;
//                 //在交换对应元素时对其对应的序号也交换，达到输出旧序号的目的
//                 int temp2=arr2[j];
//                 arr2[j]=arr2[j+1];
//                 arr2[j+1]=temp2;
                
//             }   
//         }
//     }
//     for (int i=0;i<n;i++)
//     {
//         printf("%d ",arr2[i]);
//     }
//     return 0;
// }


// #include <stdio.h>
// int main()
// {
//     char h="He",l="Li",c="Cao",d="Duan",w="Wang";
//     char x;
//     scanf("%c",&x);
//     if (x!='h' && x!='l' && x!='c' && x!='d' && x!='w')
//     {
//         printf("Not Here");
//     }
//     else
//     {
//         printf("%c",x);
//     }
    
//     return 0;
// }



//以下为两个斐波那契数列的算法，第二种是自己想的，但只允许在知道最大月份的情况下可以使用
//第一种是稍微简单的算法，不用考虑n

// #include <stdio.h>
// int Func(int month)//Func斐波那契数列函数
// {
//     
//     int num;
      //如果求第一第二月的兔子数，直接输出，不用计算，为三月以后的递推做准备
//     if (month==1)
//     {
//         num=1;
//     }
//     else if (month==2)
//     {
//         num=2;
//     }
//     else
//     {
//         int a=1,b=2,c=0;//定义第一二月的兔纸数
//         for (int i=2;i<month;i++)
//         {
//             c=a+b;
//             a=b;
//             b=c;
//             num=c;
//         }
//         return num;
//     }
// }
//主函数
// int main( )
// {
//     int month;
//     scanf("%d",&month);
//     printf("%d\n",Func(month));
//     return 0;
// }

//以下为用数组储存达到递推的目的，但必须知道最大月份以及数组计算没有必要
// #include <stdio.h>
// int Func(int month)
// {
//     int n=20;
//     int a[n];
//     int num;
//     if (month==1)
//     {
//         num=1;
//     }
//     else if (month==2)
//     {
//         num=2;
//     }
//     else
//     {
//         for (int i=2;i<month;i++)
//         {
//             a[0]=1;
//             a[1]=2;
//             a[i]=a[i-1]+a[i-2];
//             num=a[i];
//         }
        
//     }
//     return num;
// }

///////////////////////////////////////////////////////////////
//递归函数，第一次尝试
// #include <stdio.h>
// int GetSum(int n,int m)//创建递归函数
// {
//     int sum=n;
//     if (n<=m)
//     {
//         //写递归式，求得是区间和，我就用区间左值开始加，慢慢增大区间左值
//         sum+=GetSum(n+1,m);
//         return sum;
//     }
    
//     return 0;
    
// }

//以下是AI给出的答案
// 递归函数，计算从 n 到 m（包括 m）的和  
// int GetSum(int n, int m) {  
//     // 基准情况：如果 n 大于 m，则返回 0（因为我们不再需要加更多的数）  
//     if (n > m) {  
//         return 0;  
//     }  
//     // 递归步骤：返回 n 加上从 n+1 到 m 的和  
//     return n + GetSum(n + 1, m);  
// }  

// int main()   
// {   
//     int m,n,s;   
//     scanf("%d%d",&n,&m);   
//     s=GetSum(n,m);   
//     printf("%d\n",s); 
//     return 0;  
// }
//////////////////////////////////////////////////////

// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int arr[n][2];
//     for (int i=0;i<n;i++)
//     {
//         for (int j=0;j<2;j++)
//         {
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     int time=0;
//     int max=0;
//     int now=0;
//     for (int i=0;i<n-1;i++)
//     {

//         if (arr[i][0]>=90 && arr[i][0]<=140 && arr[i][1]>=60 && arr[i][1]<=90)
//         {
            
//             if (arr[i+1][0]>=90 && arr[i+1][0]<=140 && arr[i+1][1]>=60 && arr[i+1][1]<=90)
//             {
//                 now++;
//             }
//         }
//         else
//         {
//             if (now>max)
//             {
//                 max=now;
//             }
//             if (now>0 && arr[n-1][0]>=90 && arr[n-1][0]<=140 && arr[n-1][1]>=60 && arr[n-1][1]<=90)
//             {
//                 max++;
//             }
//             now=0;
//         }
//     }
//     printf("%d",max);
//     return 0;
// }
///////////////////////////////


// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int arr[n/2];
//     int sum=0;
//     int count=0;
//     for (int i=1;i<=n/2;i++)//利用数组储存真因子
//     {
//         if (n%i==0)
//         {
//             sum+=i;

//             /////////scanf("%d",&arr[i]);//万恶之源
//             arr[count]=i;
//             count++;
//         }
//     }
//     if (sum==n)//判断是否为完全数
//     {
//         printf("Yes,its factors are ");
//         for (int i=0;i<count;i++)
//         {
//             printf("%d ",arr[i]);//如果是，输出因子
//         }
//     }
//     else
//     {
//         printf("No");
//     }
    
//     return 0;
// }


////此题求得是观察A比B的能量高了多少倍
// #include <stdio.h>
// int main()
// {
//     int A,B;
//     scanf("%d %d",&A,&B);
//     int C=A-B;//我直接用他们的差来计算倍数
//     int engry=1;
//     for (int i=0;i<C;i++)
//     {
//         engry*=32;
//     }
//     printf("%d",engry);
    
//     return 0;
// }

////此题要求去除数组中与same相同的项，其余项按顺序输出
// #include <stdio.h>
// int main()
// {
//     int n,same;
//     scanf("%d %d",&n,&same);
//     int arr[n];//创建数组
//     for (int i=0;i<n;i++)
//     {
//         scanf("%d",&arr[i]);
//         if(arr[i]!=same)//如果数组某一项不与same相同，就输出它
//         {
//            printf("%d ",arr[i]);
//         }
        
//     }
//     return 0;
// }


////此题计算输入总天数，有m份作业，每份作业花费的天数在此被我储存起来，观察是否在n天内能写完作业
// #include <stdio.h>
// int main()
// {
//     int n,m;
//     scanf("%d %d",&n,&m);
//     int arr[n];//创建数组，此处可能应为m
//     for (int i=0;i<m;i++)//一共m份作业，故输入m个值
//     {
//         scanf("%d",&arr[i]);
//     }
//     int d=0;
//     for (int i=0;i<m;i++)
//     {
//         n=n-arr[i];//用总天数依次减数组的每一项
//     }
//     if(n<0)//如果n被减的小于零，证明假期不够用，输出-1
//     {
//         printf("-1");
//     }
//     else
//     {
//         printf("%d",n);//反之输出剩余的天数
//     }
    
//     return 0;
// }


///////////////////////////////////////
//自守数，但是并非能达到对于所有数都可以，在num是四位数开始就失去了作用
//////////////////////////////////////////////////////
// #include <stdio.h>
// int main()
// {
//     int num;
//     scanf("%d",&num);
//     //提取num平方的后几位，限定了其最大不过三位，后与num比较
//     if (num==num*num%1000 || num==num*num%100 || num==num*num%10)
//     {
//         printf("Yes");//若相同，输出yes
//     }
//     else
//     {
//         printf("No");
//     }
    
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     long long int n,sum=100,count=0;
//     scanf("%lld",&n);
//     for (long long int i=0;i>0;i++)
//     {
//         sum+=sum/100;
//         count++;
//         if(sum>=n)
//         {
//             printf("%lld",count);
//             break;
//         }
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int n,count=0;
//     char ch[3];
//     scanf("%d",&n);
//     char temp=ch;
//     for(int i=0;i<n;i++)
//     {
//         scanf(" %2s",&ch);
//         if(ch==temp)
//         {
//             count++;
//         }
//     }
    
//     scanf("%2s",&cd);
//     printf("%s %s",ch,cd);


//     return 0;
// }