#include<stdio.h>
void reverse_array(int *arr,int size)
{
    int *start=arr;
    int *end=arr+size-1;
    int temp;
    while(start<end)
    {
        temp=*start;
        *start=*end;
        *end=temp;
        start++;
        end--;
    }
}
void print_array(int *arr,int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d",*(arr+i));
    }
    printf("\n");

}
int main()
{
    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    printf("original array:");
    print_array(arr,size);
    reverse_array(arr,size);
    printf("reversed array:");
    print_array(arr,size);
    return 0;
}