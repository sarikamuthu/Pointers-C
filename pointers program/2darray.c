#include<stdio.h>
int main(){
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    printf("%u\n",a);//address of 1
    printf("%u\n",a+1);//address of 4
    printf("%u\n",a+2);
    printf("%u %d\n",*a,**a);
    printf("%u %d\n",*a+1,**a+1);
    printf("%u %d\n",*a+2,**a+2);
    printf("%u %d\n",*(a+1),*(*(a+1)));
    printf("%u %d\n",*(a+1)+1,*(*(a+1))+1);
    printf("%u %d\n",*(a+1)+2,*(*(a+1))+2);
    printf("%u %d\n",*(a+2),*(*(a+2)));
    printf("%u %d\n",*(a+2)+1,*(*(a+2))+1);
    printf("%u %d\n",*(a+2)+2,*(*(a+2))+2);
    return 0;
}