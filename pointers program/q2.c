#include<stdio.h>
#include<stdlib.h>
char *slice(char *,int ,int,char *);  //*(a+i)=a[i]
int main(){
    char s[]="mouse";
    char *t;
    int a=slice(s,0,3,t);
    printf("%s",a);
    return 0;
}
char *slice(char *p,int b ,int c,char *d){
    char *backup,*k;
    d=(char *)malloc(sizeof(4));
    k=d;
    int i=0;
    while(i<4){
        *d=*(p+i);
        printf(" %c",*(p+i));
        i++;
        
    }
    // *d=*(p+i);
    // for(int i=b;i<c;i++){
    //     *backup=*(p+i);
    // }
   
    
    return k;
}