#include<stdio.h>
int main()
{
    int arr1[10],arr2[10],ans[10],i,*a1,*a2,*as;
    puts("enter  5 elements of first array:");
    for(i=0;i<5;i++)
        scanf("%d",&arr1[i]);
    puts("enter  5 elements of second array:");
    for(i=0;i<5;i++)
        scanf("%d",&arr2[i]);
        a1=&arr1[0];
        a2=&arr2[0];
        as=&ans[0];
        for(i=0;i<5;i++)
        {
            *as=(*a1)+(*a2);
            a1++;
            a2++;
            as++;
        }

     puts("the sum of 2 arrays is");
     for(i=0;i<5;i++)
            printf("%d\n",ans[i]);

}
