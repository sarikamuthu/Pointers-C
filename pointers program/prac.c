#include<stdio.h>
int main(){
    int a[2][2]={{1,2},{3,4}};
    printf("%u\n",a);
    printf("%u\n",a+1);
    printf("%u %d\n",*a+1,**a+1);
    printf("%u %d\n",*(a+1)+1,*(*(a+1)+1));

    return 0;
}