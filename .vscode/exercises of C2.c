//递归函数
// #include <stdio.h>

// int f(int x)
// {
//     //关于x的范围开始分类
//     if (x<1)
//     {
//         return 0;
//     }
//     else if(x==1)
//     {
//         return 1;
//     }
//     else
//     {
//         //此处也可以用switch
//         if (x%3==0)
//         {
//             return 2*f(x/3)-1;
//         }
//         else if (x%3==1)
//         {
//             return 3*f((x+2)/3)-1;
//         }
//         else if (x%3==2)
//         {
//             return 4*f((x+1)/3)-1;
//         }
//     }
// }
// int main()//此处为主函数
// {
//     int x;
//     scanf("%d",&x);
//     int F=f(x);
//     printf("%d",F);
//     return 0;
// }


// #include <stdio.h>
// int main()
// {
//     int m,n;
//     scanf("%d %d",&m,&n);//确定上下界
//     for (int i=m;i<=n;i++)
//     {
//         int count=1;//添加标记变量，如果它被改变了，说明在检查i是否为素数时i有了因数
//         for (int j=2;j<i;j++)
//         {
//             if (i%j==0)//检查如果i有因数，终止循环检查下一个i
//             {
//                 count=0;
//                 break;
//             }
//         }
//         //如果i有一个因数，count将会被改变后才结束循环.
//         //但若完成j循环后count仍为1，则证明它遍历了所有j且未被改变，没有因数
//         if (count)
//             {
//                 printf("%d ",i);
//             }
//     }
//     return 0;
// }


// #include <stdio.h>
// int main()
// {
//     int n,k;
//     scanf("%d %d",&n,&k);
//     float S=200;//输入初始房价
//     int save=0;//定义存款
//     for (int i=0;i<20;i++)
//     {
//         save+=n;//开始循环，第一年先攒n元
//         if (save>=S)//判断何时能买房子
//         {
//             printf("%d",i+1);
//             //break;
//             return 0;//如果买了房子，直接返回结果，如果用break则可能需要添加一个标志变量
//         }
//         S+=S*k/100.0;//放假每年以百分之k增长
//     }
//     printf("Impossible");//如果程序没有结束且运行到此，证明二十年了还没有买下房子
//     return 0;
// }

//我想求的是从h高度落下的每次高度减半的小球的第十次弹起高度和前十次的累计和
//因为第一次落地时的表达式和后续不同，但题目要求的是仅计算第十次，故我的循环直接从第二次开始
// #include <stdio.h>
// int main()
// {
//     double h;
//     scanf("%lf",&h);
//     double h_next=h/2;//将循环开始的高度设置为初始的一半，跳过第一次落地
//     double sum=h;
//     for (int i=1;i<10;i++)
//     {
//         sum+=2*h_next;
//         h_next/=2;//下一次的高度均减半
//     }
//     printf("The total is:%.3f\nThe tenth is:%.3f",sum,h_next);
    
//     return 0;
// }


//此代码计算由输入的数字是奇数还是偶数改变算法
// #include <stdio.h>
// int main()
// {
//     int m;
//     scanf("%d",&m);
//     while (m!=1)//最终结果会为1，所以不为一就是循环的条件
//     {
//         int temp=m;//创建临时变量储存旧值
//         if (m%2!=0)
//         {
            
//             m=m*3+1;//新算式
//             printf("%d*3+1=%d\n",temp,m);//打印算式
            
//         }
//         else
//         {
//             m=m/2;
//             printf("%d/2=%d\n",temp,m);
//         }
//     }
//     printf("End");//程序结束即循环退出输出结束语
//     return 0;
// }

//输入一组数，当遇到-1时不再输入，同时输出这些数字中的最大值
// #include <stdio.h>
// int main()
// {
//     int a;
//     int max=a;//把a的初值赋给max，这样就不用创建零时变量了
//     scanf("%d",&a);//为a赋值
//     while (a!=-1)//如果a不为-1，就进入循环
//     {
//         // int temp=a;//此句可以不要
//         scanf("%d",&a);
//         if (a>max)
//         {
//             max=a;
//         }
//     }
//     printf("%d",max);
    
//     return 0;
// }


// #include <stdio.h>
// int main()
// {
//     int n;
//     int a;
//     int b;
//     int d;
//     int e;
//     for (int i=10;i<100;i++)
//     {
//         a=i;
//          n=809*a+1;
//          b=n/100-8*a;
//          d=(b*100+n%100);
//          if (d-(9*a)==1)
//          {
//             break;
//          }
//     }
//     printf("%d\n%d\n%d\n%d\n%d\n",a,n,b,d,9*a);
//     return 0;
// }

////我欲计算一个n*3的表的每一行的和，我欲用数组和非数组的方法解决这个问题
////首先是二维数组方法（目前可能想不出非数组方法）
// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int arr[n][3];//创建二维数组
//     int count[n];//创建每行和的数组，并初始化
//     for (int i=0;i<n;i++)
//     {
//         for (int j=0;j<3;j++)
//         {
//             scanf("%d",&arr[i][j]);//双循环为二维数组赋值
//             count[i]+=arr[i][j];//将每一行的元素均加给count
//         }
//     }
//     for (int i=0;i<n;i++)
//     {
//         printf("%d\n",count[i]);//打印count
//     }
//     return 0;
// }




// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int arr[n][3];//创建二维数组
//     // int count[n];//创建每行和的数组，并初始化
//     for (int i=0;i<n;i++)
//     {
//         for (int j=0;j<3;j++)
//         {
//             scanf("%d",&arr[i][j]);//双循环为二维数组赋值
//             // count[i]+=arr[i][j];//将每一行的元素均加给count
//         }
//     }
    
//     for (int i=0;i<n;i++)
//     {
//         int d=0;
//         for (int j=0;j<3;j++)
//         {
//             d+=arr[i][j];
//         }
//         printf("%d\n",d);//打印count
//     }
//     return 0;
// }


// #include <stdio.h>
// int main()
// {
//     int health,kind;
//     int emerge=0;
//     scanf("%d %d",&health,&kind);
//     for (int i=0;i<kind;i++)
//     {
//         scanf("%d",&emerge);
//         health-=emerge;
//     }
//     if (health<=0)
//     {
//         printf("Yes");
//     }
//     else
//     {
//         printf("No");
//     }
//     return 0;
// }

// //求斐波那契数列的第n项
// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     arr[0]=1;//将第一和第二项确定为1
//     arr[1]=1;
//     if (n==1)//如果求的是第一第二项，直接输出结果
//     {
//         printf("1");
//     }
//     else if(n==2)
//     {
//         printf("1");
//     }
//     else
//     {
//         for (int i=2;i<n;i++)//否则就从第三项开始循环
//         {
//             arr[i]=arr[i-1]+arr[i-2];
//         }
//         printf("%d",arr[n-1]);//打印最后一项
//     }
//     return 0;
// }



// #include<stdio.h>
// int main()
// {     
//     int k;
//     scanf("%d",&k);
//     int a=1,b=1;//这里的a代表k-2项，b代表k-1项
//     int sum;//sum代表第k项
//     int count=3;//创建count，代表第几项，如果count==k，证明到了第k项，就结束循环，输出k
//     if(k==1 || k==2)
//     {
//         printf("1");//直接用选择语句可以不用在前面写个return 0
//     }
//     else 
//     {
//         while(count<=k)
//         {
//             sum=a+b;//算第count项，就是sum
//             a=b;
//             b=sum;
//             count++;//把项的数字变大

//         }
//         printf("%d",sum);
//     }
//     return 0;
// }

// for (int i=2;i<k;i++)
    // {
    //     sum=a+b;
    //     a=b;
    //     b=sum;
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
//     for (int i=0;i<n;i++)
//     {
//         int least=0;
//         int most=0;
//         least=arr[i][0]/4;
//         most=arr[i][0]/2;
//         if (arr[i][0]%2!=0)
//         {
            
//             least+=1;
//         }
//         printf("%d %d\n",least,most);
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//    if (n>=0 && n<60)
//    {
//        printf("E");
//    }
//    else if(n>=60 && n<70)
//    {
//        printf("D");
//    }
//    else if(n>=70 && n<80)
//    {
//        printf("C");
//    }
//    else if(n>=80 && n<90)
//    {
//        printf("B");
//    }
//    else
//    {
//        printf("A");
//    }
   
//     return 0;
// }


/////////////////////////////////
// for (int i=0;i<n-1;i++)
    // {
    //     for (int j=0;j<n-1-i;j++)
    //     {
    //         if (arr1[j]%3>arr1[j+1]%3)
    //         {
    //            int temp=arr1[j];
    //            arr1[j]=arr1[j+1];
    //            arr1[j+1]=temp;
    //         }
    //         else if (arr1[j]%3==arr1[j+1]%3)
    //         {
    //             if (arr1[j]>arr1[j+1])
    //             {
    //                 int temp=arr1[j];
    //                 arr1[j]=arr1[j+1];
    //                 arr1[j+1]=temp;
    //            }
    //         }
    //     }
        
    // }
    // for (int i=0;i<m-1;i++)
    // {
    //     for (int j=0;j<m-1-i;j++)
    //     {
    //         if (arr2[j]%3>arr2[j+1]%3)
    //         {
    //            int temp=arr2[j];
    //            arr2[j]=arr2[j+1];
    //            arr2[j+1]=temp;
    //         }
    //         else if (arr2[j]%3==arr2[j+1]%3)
    //         {
    //             if (arr2[j]>arr2[j+1])
    //             {
    //                 int temp=arr2[j];
    //                 arr2[j]=arr2[j+1];
    //                 arr2[j+1]=temp;
    //            }
    //         }
    //     }
        
    // }
// #include <stdio.h>
/////////排序函数
// void sequence(int arr[],int n)
// {
//     for (int i=0;i<n-1;i++)
//     {
//         for (int j=0;j<n-1-i;j++)
//         {
//             if (arr[j]%3>arr[j+1]%3)
//             {
//                int temp=arr[j];
//                arr[j]=arr[j+1];
//                arr[j+1]=temp;
//             }
//             else if (arr[j]%3==arr[j+1]%3)
//             {
//                 if (arr[j]>arr[j+1])
//                 {
//                     int temp=arr[j];
//                     arr[j]=arr[j+1];
//                     arr[j+1]=temp;
//                }
//             }
//         }
        
//     }
// }

// int main()
// {
//     int n;
//     while (1)
//     {
//         scanf("%d",&n);
//         int arr1[n];
    
//         for (int i=0;i<n;i++)
//         {
//             scanf("%d",&arr1[i]);
//         }
//         scanf("%d",m);
//         getchar();
//         if()
//     }
    


// //    //int n;
// //    //scanf("%d",&n);
// //    //int arr1[n];
    
// //    //for (int i=0;i<n;i++)
// //    //{
// //        //scanf("%d",&arr1[i]);
// //    //}
// //    //int m;
// //     //scanf("%d",&m);
// //    //int arr2[m];
// //    //for (int i=0;i<m;i++)
// //     //{
// //     //    scanf("%d",&arr2[i]);
// //    // }
//     sequence(arr1,n);
//     sequence(arr2,m);
    
//     for (int i=0;i<n-1;i++)
//     {
//         printf("%d ",arr1[i]);
//     }
//     printf("%d",arr1[n-1]);
//     printf("\n");
//     for (int i=0;i<m-1;i++)
//     {
//         printf("%d ",arr2[i]);
//     }
//     printf("%d",arr2[m-1]);
//     return 0;
// }



// #include <stdio.h>


// int Fun(int n)
// {
//     if (n==1 || n==2)
//     {
//         n=1;
//     }
//     else if(n%2!=0)
//     {
//         n=Fun(n-1)+Fun(n-2);
//     }
//     else if(n%2==0)
//     {
//         n=Fun(n-1)-Fun(n-2);
//     }
//     return n;
// }
// int main()
// {   
//         int n;
//         scanf("%d",&n);
//         printf("%d\n",Fun(n));
//         return 0;
// }


////递归函数完成一系列计算
// #include <stdio.h>
// int f(int x)
// {
//     if (x<1)
//     {
//         return 0;
//     }
//     else if(x==1)
//     {
//         return 1;
//     }
//     else
//     {
//         if (x%2==0)
//         {
//             return 3*f(x/2)-1;
//         }
//         else if(x%2==1)
//         {
//             return 3*f((x+1)/2)-1;
//         }
//     }
// }

// int main()
// {
//     int x=0;
//     scanf("%d",&x);
//     printf("%d",f(x));
//     return 0;
// }



// #include <stdio.h>
// int main()
// {
//     int n;
//     int least=0;
//     int most=0;
//     scanf("%d",&n);
//     int arr[n][1];
    
//     for (int i=0;i<n;i++)
//     {
//         for (int j=0;j<1;j++)
//         {
//             scanf("%d",&arr[i][j]);
//         }
        
//     }
//     for (int i=0;i<n-1;i++)
//     {
//         least=0;
//         most=0;
//         least=arr[i][0]/4;
//         most=arr[i][0]/2;
//         if (arr[i][0]%2!=0)
//         {
            
//             least=0;
//             most=0;
//         }
//         printf("%d %d\n",least,most);
//     }
//     least=arr[n-1][0]/4;
//     most=arr[n-1][0]/2;
//     if (arr[n-1][0]%2!=0)
//     {
            
//         least=0;
//         most=0;
//     }
//     printf("%d %d",least,most);
//     return 0;
// }



// #include <stdio.h>
// int m=0;
// void Move(int n,char A,char B,char C)
// {
//         m++;
//         //设置移动盘子的结束条件,如果A当前还有一个盘子那么就把他直接移动到C
//         if(n == 1) {
//                 printf("%c -> %c\n",A,C);
//         }else{
//         //否则开始递归
//                 Move(n-1,A,C,B);//递归， 将A上编号为1至n-l的圆盘移到B, C做辅助塔；
//                 //直接将编号为n的圆盘从A移到C;
//                 printf("%c -> %c\n",A,C);
 
//                 Move(n-1,B,A,C);//递归， 将B上编号为1至n-1的圆盘移到C, A做辅助塔
//         }
// }
 
// int main()
// {
//         int n;
//         printf("请输入盘子数：");
//         scanf("%d",&n);
//         //如果有五个盘子，和A，B，C三个柱子，否则开始递归.
//         Move(n,'A','B','C');
//         printf("移动次数：%d次",m);
// }




// #include <stdio.h>
// int Max(int a[],int n)
// {
    
//     for (int i=0;i<n;i++)
//     {
//         scanf("%d",&a[i]);
    
//     }
//     int max=a[0];
//     for (int i=0;i<n-1;i++)
//     {
//         if (a[i+1]>a[i])
//         {
//             max=a[i+1];
//         }
//     }
//     return max;
// }
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int a[n];
//     printf("%d",Max(a,n));
    
    
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
//     int least=0;
//     int most=0;
//     for (int i=0;i<n;i++)
//     {
//         if (arr[i][0]%2!=0)
//         {
//             printf("0 0\n");
//         }
//         else
//         {
//             least=arr[i][0]/4;
//             most=arr[i][0]/2;
//             if (arr[i][0]%4!=0)
//             {
//                 least=least+1;
//             }
//             printf("%d %d\n",least,most);
//         }
//     }
//     return 0;
// }


// #include <stdio.h>
// int main()
// {
// 	int a,b,c;//a为公马，b为母马，c为小马；
// 	for(a=1;a<100;a++)
// 	{
		
// 		b=(100-5*a)/3;
// 		c=100-a-b;
		
// 		if(a>0 && b>0 && c>0 && c%2==0)
// 		{
// 			printf("a=%d,b=%d,c=%d\n",a,b,c);
// 		}
// 	 } 
	
// 	return 0; 
	
// } 

// #include <stdio.h>
// int main()
// {
//     int gong;
//     int mu;
//     int small;
//     for (small=1;small<100;small++)
//     {
//         gong=(3*small-200)/2;
//         // gong=(100-3*mu)/5;
//         mu=100-small-gong;
//         if (gong>0 && mu>0 && small>0 && small%2==0)
//         {
//             printf("%d %d %d\n",gong,mu,small);
//         }
        
//     }
//     return 0;
// }


// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<n;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     for (int i=0;i<n-1;i++)
//     {
//         for (int j=0;j<n-i-1;j++)
//         {
//             if (arr[j]>arr[j+1])
//             {
//                 int temp=arr[j];
//                 arr[j]=arr[j+1];
//                 arr[j+1]=temp;
//             }
//         }
//     }
//     for (int i=0;i<n-1;i++)
//     {
//         printf("%d ",arr[i]);
//     }
//     printf("%d",arr[n-1]);
//     return 0;
// }


// #include <stdio.h>

// int main()
// {
//     float x1=-10,x2=10;
//     float y;
//     while(1)
//     {
//         float y1=2*x1*x1*x1-4*x1*x1+3*x1-6;
//         float y2=2*x2*x2*x2-4*x2*x2+3*x2-6;
//         float x0=(x1+x2)/2;
//         y=2*x0*x0*x0-4*x0*x0+3*x0-6;
//         if(y*y1<0)
//         {
//             x2=x0;
//         }
//         else
//         {
//             x1=x0;
//         }
//         if((y<1/(10*10*10*10*10) && y>0) || (y>-1/(10*10*10*10*10) && y<0))
//         {
//             printf("%f",x0);
//             break;
//         }
       
//     }

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int arr[]={1,7,8,56,2};
//     int* pa=&arr[0];
//     printf("%p\n",pa);
//     printf("%d\n",*pa);
//     // printf("%p\n",++pa);
//     printf("%d\n",*(pa+3));
//     return 0;
// }


// #include <stdio.h>
// int main()
// {
//     long long int x;
//     int yuan=100;
//     scanf("%lld",&x);
//     for (long long int i=1;i>0;i++)
//     {
//         yuan=yuan*1/100+yuan;
//         if(yuan>=x)
//         {
//             printf("%lld",i);
//             break;
//         }
        
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     char word;
//     scanf("%c",&word);
//     if (word=='a' || word=='e' || word=='i' || word=='o' || word=='u')
//     {
//         printf("Vowel");
//     }
//     else if(word=='b' || word=='c' || word=='d' || word=='f' || word=='g' ||word=='h' || word=='j' || word=='k' || word=='l' || word=='m' ||word=='n' || word=='o' || word=='p' || word=='q' || word=='r' ||word=='s' || word=='t' || word=='v' || word=='w' || word=='x' ||word=='y' || word=='z')
//     {
//         printf("Consonant");
        
//     }
//     else
//     {
//         printf("Not a letter");
//     }
    
//     return 0;
// }


// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     for (int i=1;i<=n;i++)
//     {
//         for (int d=1;d<=n;d++)
//         {
//             printf("*");
//         }
//         if (i==n)
//         {
//             return 0;
//         }
//         printf("\n");
//         for(int j=1;j<=i;j++)
//         {
//             printf(" ");
//         }
//     }
    
//     return 0;
// }


// #include <stdio.h>
// int main()
// {
//     char d[81],a;
//     char *pointer=&d[0];
//     scanf("%s %c",&d,&a);
//     for (int i=0;i<80;i++)
//     {
//         if (*pointer=a)
//         {
//             printf("%s",*pointer);
//         }
        
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int n,d;
//     int count=0;
//     scanf("%d",&n);
//     for (int i=1;i<=n;i++)
//     {
//         scanf("%d",&d);
//         if (d<0)
//         {
//            count=i; 
//         }
//     }
//     if(count!=0)
//     {
//         printf("%d",count);
//     }
//     else
//     {
//         printf("Negative number not found");
//     }
    
    
//     return 0;
// }



// #include <stdio.h>
// int main()
// {
//     int n,num,count;
//     double sum=0.0,average;
//     scanf("%d",&n);
//     for (int i=0;i<n;i++)
//     {
//         scanf("%d",&num);
//         if (num>0)
//         {
//             sum+=num;
//             count++;
//         }
//     }
//     average=sum/count;
//     printf("%.1f",average);
//     return 0;
// }


// #include <stdio.h>
// int main()
// {
//     int x;
//     scanf("%d",&x);
//     if (x%100==0)
//     {
//         printf("Yes");
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
//     int a,b,c;
//     scanf("%d %d %d",&a,&b,&c);
//     if ((b>a && b>c) || (b<a && b<c))
//     {
//         printf("No");
//     }
//     else if ((b>=a && b<=c) || (b<=a && b>=c))
//     {
//         printf("Yes");
//     }
    
    
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int m,n;
//     int count=0;
//     scanf("%d %d",&m,&n);
//     for (int i=m;i<=n;i++)
//     {
//         if ((i%4==0 && i%100!=0) || i%400==0)
//         {
//             count++;
//         }
//     }
//     printf("%d",count);
    
//     return 0;
// }



// #include <stdio.h>
// int main()
// {
//     int s,t,x;
//     scanf("%d %d %d",&s,&t,&x);
//     if (s<=t)
//     {
//         if(x>=s && x<=t)
//         {
//             printf("Yes");
//         }
//         else
//         {
//             printf("No");
//         }
//     }
//     else
//     {
//         if(x>=t && x<s)
//         {
//             printf("No");
//         }
//         else
//         {
//             printf("Yes");
//         }
//     }
//     return 0;
// }

// //swap交换函数
// void swap(int *pa,int *pb)//形参为指针变量，传入地址
// {
//     int z=0;
//     z=*pa;
//     *pa=*pb;
//     *pb=z;
// }

// #include <stdio.h>
// int main()
// {
//     int a;
//     int b;
//     scanf("%d %d",&a,&b);
//     printf("%d %d\n",a,b);
//     swap(&a,&b);
//     printf("%d %d\n",a,b);
//     return 0;
// }


////求ab内的闰年个数
/////////////////////////如果用函数，return (c%4==0 && c%100!=0) || c%400==0 也可以
// #include<stdio.h>
// int main()
// {
//     int a,b;
//     scanf("%d %d",&a,&b);
//     int count=0,c=a;
//     do
//     {   
//         if((c%4==0 && c%100!=0) || c%400==0)
//         {
//             count++;
//         }
//         c++;
//     } while (c>=a && c<=b);
//     printf("%d",count);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     char d[80]={0};
//     char c;
//     char result[81];
//     scanf("%s %c",&d,&c);
    
//     printf("%s",d);
//     return 0;
// }


//////////////考试


// #include <stdio.h>
// int main()
// {
//     int line,one=0,two=0,three=0,four=0,count=0;
//     scanf("%d",&line);
//     while (line>=20 && line<=120)
//     {
//         count++;
        
//         if (line>=70)
//         {
//             one++;
//         }
//         else if(line>=60 && line<=69)
//         {
//             two++;
//         }
//         else if(line>=50 && line<=59)
//         {
//             three++;
//         }
//         else
//         {
//             four++;
//         }
//         scanf("%d",&line);
//     }
//     printf("%d\n%d %d %d %d",count,one,two,three,four);
//     return 0;
// }


// #include <stdio.h>
// int main()
// {
//     int n,one,two,attack;
//     scanf("%d %d %d",&n,&one,&two);
//     for (int i=0;i<n;i++)
//     {
//         scanf("%d",&attack);
//         if(attack<one && attack>two)
//         {
//             attack=1;
//         }
//         else
//         {
//             attack=0;
//         }
//     }
//     if(attack==1)
//     {
//         printf("Yes");
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
//     int n,score,max=0,min=100,sum=0;
//     float average;
//     scanf("%d",&n);
//     for (int i=0;i<n;i++)
//     {
//         scanf("%d",&score);
//         if(score>max)
//         {
//             max=score;
//         }
//         // int temp=score;
//         if(score<min)
//         {
//             min=score;
//         }
//         sum+=score;
//     }
//     sum=sum-max-min;
//     average=1.0*sum/(n-2);
//     printf("%.2f",average);
    
//     return 0;
// }


// #include <stdio.h>
// int main()
// {
//     int n,sum=0;
//     scanf("%d",&n);
//     for (int i=1;i<=(n/9);i++)
//     {
//         for(int j=1;j<=9;i++)
//         {
//             sum+=j;
//         }
        
//     }
//     for (int i=1;i<=(n%9);i++)
//     {
//         sum+=i;
//     }
//     printf("%d",sum);
    
    
//     return 0;
// }

// //拆分一个数在1~9之间
// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     for (int i=1;i<=9;i++)
//     {
//         for (int j=1;j<=9;j++)
//         {
//             if (i*j==n)
//             {
//                 printf("Yes");
//                 return 0;
//             }
//         }
//     }
//     printf("No");
//     return 0;
// }


// #include<stdio.h>
// int main()
// {
// 	int z,sum=0;
// 	printf("请输入 z:");
// 	scanf("%d",&z);
// 	for(int i=1;i>0; i++)
// 	{
// 		int sum1=1;
// 		for(int n=1; n<=i;n++)
// 		{
// 			sum1*=n;
// 		}
// 		sum+=sum1;
// 		// m++;
//         if(i==9)
//         {
//             printf("%d",sum);
//         }
// 		if(sum>=z) 
// 		{
           
// 			printf("m<=%d",i);
// 			break;
            
// 		}
// 	}
// 	return 0;
// }

// #include<stdio.h>  
  
// int main() {  
//     int z, i = 1, sum = 0, factorial = 1;  
//     printf("请输入 z:");  
//     scanf("%d", &z);  
      
//     while (1) {  // 使用while循环来替代可能无限循环的for循环  
//         factorial *= i;  // 计算当前i的阶乘  
//         sum += factorial;  // 累加到总和中  
          
//         if (sum >= z) {  
//             printf("m<=%d\n", i);  // 输出使得阶乘和大于或等于z的最小i  
//             break;  
//         }  
//         i++;  // 增加i以计算下一个阶乘  
//     }  
      
//     return 0;  
// }

// #include <stdio.h>
// int main()
// {
//     int n,x,y,z;
//     int found=0;
//     scanf("%d",&n);
    
//     for(int x=0;x<n;x++)
//     {
//         for (int y=0;y<n-x;y++)
//         {
//             z=n-x-y;
//             if(120==5*x+2*y+z/10)
//             {
//                 printf("%d %d %d\n",x,y,z);
//                 found=1;
//             }
//         }
//     }
//     if(found==0)
//     {
//         printf("No output");
//     }
    
//     return 0;
// }
///////////求出不大于所给数的最大素数，自己写的，不能实现目标，修正版在下方
// #include <stdio.h>
// void prime(int arr[],int n)
// {
//     int j;
//     int i=0,max=1;
//     for(i=0;i<n;i++)
//     {
//         int found=1;
//         for(j=arr[i];j>=1;j--)
//         {
//             if(arr[i]==2)
//             {
//                 break;
//             }
//             for(int k=2;k<arr[i];k++)
//             {
//                 if(j%k==0)
//                 {
//                     found=0;
//                     break;
//                 }
//             }
//             if(found!=1)
//             {
//                 continue;
//             }
//             else
//             {
//                 arr[i]=j;
//                 break;
//             }
//         }
//     }
// }
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     for (int i=0;i<n;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     prime(arr,n);
//     for(int i=1;i<=n;i++)
//     {
//         printf("Case #%d:%d\n",i,arr[i]);
//     }
//     return 0;
// }



// #include <stdio.h>

// int Primel(int n)
// {
    
//     if (n==1)
//     {
//         return 1;
//     }
//     for(int i=n;i>1;i--)
//     {
//         int found=1;
//         for (int j=2;j<n;j++)
//         {
//             if(i%j==0)
//             {
//                 found=0;
//                 break;
//             }
//         }
//         if(found==1)
//         {
//             return i;
//         }
//         else
//         {
//             continue;
//         }
//     }
    

// }

// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     int prime[n];
//     for (int i=0;i<n;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     for(int j=0;j<n;j++)
//     {
//         prime[j]=Primel(arr[j]);
//     }
//     for(int i=0;i<n;i++)
//     {
//         printf("Case #%d:%d\n",i+1,prime[i]);
//     }
//     return 0;
// }
// ///////////////////ai写的，但是不能等把数字输完以后再输出结果
// #include <stdio.h>  
// #include <stdbool.h>  
// #include <limits.h>  
// // 判断一个数是否为质数的函数  
// bool isPrime(int num) {  
//     if (num <= 1) return false;  
//     if (num == 2) return true;  // 2 是质数  
//     if (num % 2 == 0) return false;  // 偶数（除了2）不是质数  
//     for (int i = 3; i * i <= num; i += 2) {  
//         if (num % i == 0) return false;  
//     }  
//     return true;  
// }  
  
// int main() {  
//     int T;  
//     scanf("%d", &T);  // 读取测试用例的数量  
  
//     for (int testCase = 1; testCase <= T; testCase++) {  
//         int n;  
//         scanf("%d", &n);  // 读取每个测试用例的 n  
  
//         int maxPrime = -1;  // 初始化最大质数为 -1  
  
//         // 从 n 开始向下查找质数  
//         for (int i = n; i >= 2; i--) {  
//             if (isPrime(i)) {  
//                 maxPrime = i;  
//                 break;  // 找到第一个质数后即可退出循环  
//             }  
//         }  
  
//         // 输出结果  
//         printf("Case #%d: %d\n", testCase, maxPrime);  
//     }  
  
//     return 0;  
// }


// #include <stdio.h>
// int main()
// {
//     int w;
//     float x;
//     printf("请输入行李重量(单位:kg):");
//     scanf("%d",&w);
//     if(w<=50)
//     {
//        x = (1.0*w * 25)/100;
//     }
//     else if(w>50 && w<= 100)
//     {
//         x=25*50/100+35 *(1.0*w-50)/100;
//     }
//     else
//     {
//         x=25*50/100+35*50/100+45 *(1.0*w-100)/100;
//     }
//     printf("托运费用为:%.2f元\n",x);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     // int lim=0;
//     // int arr[][2];
//     // for (int i=0;i>0;i++)
//     // {
//     //     for (int j=0;j>2;j++)
//     //     {
//     //         scanf("%d",&arr[i][j]);
//     //         if(arr[i][j]==0)
//     //         {
//     //             lim++;
//     //         }
//     //     }
//     //     if(lim==2)
//     //     {
//     //         break;
//     //     }
//     // }
    

    
    
    
//     return 0;
// }

////////////////////////////////为什么不行

// #include <stdio.h>  
// // 函数：计算两个数相加时的进位次数  
// int countCarry(int x, int y) {  
//     int carry = 0;  
//     int sum = x + y;
//     int ge1=x%10,ge2=y%10;
//     int shi1=(x%100)/10,shi2=(x%100)/10;
//     int bai1=x/100,bai2=y/100;  
//     // while (sum > 0) 
//     // {  
//     if (ge1+ge2>=10) 
//     {  
//         carry++;
//         if(shi1+shi2+1>=10)
//         {
//             carry++;
//             if(bai1+bai2+1>=10)
//             {
//                 carry++;
//             }
//         }
//         else
//         {
//             if(bai1+bai2>=10)
//             {
//                 carry++;
//             }
//         }  
//     }
//     else
//     {
//         if(shi1+shi2>=10)
//         {
//             carry++;
//             if(bai1+bai2+1>=10)
//             {
//                 carry++;
//             }
//         }
//         else
//         {
//             if(bai1+bai2>=10)
//             {
//                 carry++;
//             }
//         }
//     }  
//     // }  
//     return carry;  
// }  
// int main() {  
//     int x, y;  
      
//     // 不断读取输入，直到遇到 0 0  
//     while (scanf("%d %d", &x, &y) == 2 && (x != 0 || y != 0)) {  
//         // 输出当前 x 和 y 相加的进位次数  
//         printf("%d\n", countCarry(x, y));  
//     }  
      
//     return 0;  
// }


// #include <stdio.h>  
  
// // 函数：计算两个数相加时的进位次数  
// int countCarry(int x, int y) {  
//     int carry = 0;  
//     int sum = 0;  
//     int tempX = x;  
//     int tempY = y;  
      
//     while (tempX > 0 || tempY > 0 || carry > 0) {  
//         int digitX = tempX % 10;  
//         int digitY = tempY % 10;  
//         sum = digitX + digitY + carry;  
          
//         if (sum >= 10) {  
//             carry = 1;  
//             sum -= 10; // 去掉进位后的当前位数字  
//         } else {  
//             carry = 0;  
//         }  
          
//         tempX /= 10;  
//         tempY /= 10;  
//     }  
      
//     return carry; // 注意：这里返回的是最后一次的进位状态，但根据题目要求，应该统计进位次数  
//                   // 要统计进位次数，我们需要一个额外的计数器来在每次carry变为1时增加  
  
//     // 但是，由于题目可能只关心是否有过进位（至少一次），上面的返回carry（0或1）可能是足够的。  
//     // 如果要统计所有进位次数，请参见下面的修改。  
// }  
  
// 修改后的版本，用于统计所有进位次数  
// int countCarryAll(int x, int y) {  
//     int carryCount = 0;  
//     int carry = 0;  
//     int tempX = x;  
//     int tempY = y;  
      
//     while (tempX > 0 || tempY > 0 || carry > 0) {  
//         int digitX = tempX % 10;  
//         int digitY = tempY % 10;  
//         int sum = digitX + digitY + carry;  
          
//         if (sum >= 10) {  
//             carry = 1;  
//             carryCount++; // 每次进位时增加计数器  
//             sum -= 10;  
//         } else {  
//             carry = 0;  
//         }  
          
//         tempX /= 10;  
//         tempY /= 10;  
//     }  
      
//     return carryCount;  
// }  
  
// int main() {  
//     int x, y;  
      
//     // 不断读取输入，直到遇到 0 0  
//     while (scanf("%d %d", &x, &y) == 2 && (x != 0 || y != 0)) {  
//         // 输出当前 x 和 y 相加的进位次数（使用统计所有进位次数的函数）  
//         printf("%d\n", countCarryAll(x, y));  
//     }  
      
//     return 0;  
// }


// #include <stdio.h>  
  
// // 函数：计算两个数相加时的进位次数  
// int countCarry(int x, int y) {  
//     int carry = 0;  
//     int sum = x + y;  
//     while (sum > 0) {  
//         if (sum % 10 == 0) {  
//             carry++;  
//         }  
//         sum /= 10;  
//     }  
//     return carry;  
// }  
  
// int main() {  
//     int x, y;  
      
//     // 不断读取输入，直到遇到 0 0  
//     while (scanf("%d %d", &x, &y) == 2 && (x != 0 || y != 0)) {  
//         // 输出当前 x 和 y 相加的进位次数  
//         printf("%d\n", countCarry(x, y));  
//     }  
      
//     return 0;  
// }


