#include<stdio.h>
int main(){
    int a[5]={1,2,3,4,5};
    int (*p)[5]=&a;  //&(*a);
    printf("%d\n",**p+3);
    return 0;
}