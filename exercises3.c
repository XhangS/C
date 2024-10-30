#include <stdio.h>

int function(int x,int count)
{
    
    if(x==1)
    {
        count++;
        return count;
    }
    else
    {
        if(x%2==0)
        {
            count++;
            
            return function(x/2,count);
        }
        else
        {
            count++;
            
            return function(3*x+1,count);
        }
    }
}
int f(int x,int y)
{
    int count=0;
    int max=1;
    for (int i=x;i<=y;i++)
    {
        function(i,count);
        if(function(i,count)>=max)
        {
            max=function(i,count);
        }
    }
    return max;
    
}
int main()
{
    int x,y;
    while(1)
    {
        
        scanf("%d %d",&x,&y);
        printf("%d %d %d",x,y,f(x,y));
    }
    return 0;
}