#include<stdio.h>
void fl(float *p,int i);
void f_l(float [],int i);
int main(){
    float a[5]={2.3,6.7,3.5,9.4,76.2};
    printf("%f\n",a[2]); //3.5
    fl(a,2);
    printf("%f\n",a[2]);
    f_l(a,2);
    printf("%f\n",a[2]);  //value is changed bcoz arrays are by default passed by reference
    return 0;
}
void fl(float *p,int i){
    *(p+i)=43.5;
}                               //*(a+i)=a[i]
void f_l(float b[],int i){
    b[i]=6.23;
}