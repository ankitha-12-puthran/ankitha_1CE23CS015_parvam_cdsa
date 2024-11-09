#include<stdio.h>
int count_element(int arr,int size,int target)
{
int count=0;
for(int i=0;i<size;i++)
{
if((arr+i)==target)
{
count++;
}
}
return count;
}
int main()
{
int arr[]={1,2,3,4,5,6,7};
int size=sizeof(arr)/sizeof(arr[0]);
int target;
printf("enter the target element");
scanf("%d",&target);
int count=count_element(arr,size,target);
printf("element %d appears %d times in array\n",target,count);
return 0;
}
