#include<stdio.h>
void iterate(float *,int size);
int main(){
    float a[]={1.0,3.5,2.6,7.8,9.3};
    iterate(a,5);

    return 0;
}
void iterate(float *p,int size){
    int i=0;
    while(i<size){
        printf("%u %f\n",(p+i),*(p+i));
        i++;
    }
}