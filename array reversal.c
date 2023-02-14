#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    int arr[num];
    for(int i=0;i<num;i++)
       scanf("%d",&arr[i]);
    int temp;
    int num1=num;
    for(int i=0;i<num;i++)
    {
        temp=arr[i];
        arr[i]=arr[num-1];
        arr[num-1]=temp;
        num=num-1;
    }
    for(int i=0;i<num1;i++)
       printf("%d ",arr[i]);
}
