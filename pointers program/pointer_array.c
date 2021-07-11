#include<stdio.h>
int main(){
    int *p;
    int a[5]={1,2,3,4,5};
    //*(a+i)=a[i];
    printf("%d\n",*(a+2)); //a[2]=3
    printf("%d\n",*(a+5)); //garbage value

    //to print whole array
    for(int i=0;i<5;i++){
        printf("%d\n",*(a+i));
    }



    return 0;
}