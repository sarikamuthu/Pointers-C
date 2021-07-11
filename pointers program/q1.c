#include<stdio.h>
#include<stdlib.h>
#define N 5
void copy(int *a,int *b);
int main(){
    int arr[N]={1,2,3,4,5};
    int *c_arr;
    c_arr=(char *)malloc(sizeof(arr));
    copy(arr,c_arr);
    for(int i=0;i<N;i++){
        printf("%d\n",c_arr[i]);
    }
    return 0;
}
void copy(int *a,int *b){
    while(*a<N){
        *b=*a;
        a++;
        b++;
    }
    *b=*a;
}