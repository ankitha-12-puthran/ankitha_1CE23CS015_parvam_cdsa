#include<stdio.h>
int main()
 {
     int x,y,*pointer;
 x=22;
 printf("%d\t%d\n", x,y);
 pointer=&x;
 printf("%d\t%d\n", x,y);
 y=*pointer;
 printf("%d\t%d\n", x,y);

 }