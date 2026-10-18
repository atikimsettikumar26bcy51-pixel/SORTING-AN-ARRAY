#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int i,j;
    int a[10];
    srand(time(0));
    for(i=0;i<10;i++)
    {
        a[i]=(rand())%100;
    }
    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(a[j]>a[i])
            {
                int b=a[i];
                a[i]=a[j];
                a[j]=b;
            }
        }
    }
    printf("Numbers in descending order:\n");
    for(i=0;i<10;i++)
    {
        printf("%d is the %dth largest number\n",a[i],i+1);
    }
    int num,lb,ub,mid;
    printf("Enter the number you want to search for: ");
    scanf("%d",&num);
    lb=0;
    ub=9;
    do
    {
     mid=(lb+ub)/2;
     if(a[mid]==num)
     {
printf("%d is found at position %d\n",num,mid+1);
exit(0);

     }
    
     else
     if(a[mid]<num)
     {
         ub=mid-1;
     }
     else
     {
         lb=mid+1;
     }      
    }while(lb<=ub);
    printf("%d not found in the array",num);
    
    // Binary search implementation would go here
    return 0;
}