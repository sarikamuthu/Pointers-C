#include<stdio.h>
int main(){
    int a=5,*p;
    p=&a;
    printf("%d\n",a);
    printf("%d\n",*p);
    printf("%u\n",p);
    printf("%u\n",&a);

    return 0;
}