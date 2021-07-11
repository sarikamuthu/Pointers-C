#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void frotate(char *,char *,char *,int,int );
int main(){
char s[100] ;
char *c,*d;
char *w;
int k;
c=(char *)malloc(sizeof(char));
d=(char *)malloc(sizeof(char));
printf("Enter string:\n");
scanf("%s",s); 
printf("Enter no of rotatiom:\n");
scanf("%d",&k);
int a=strlen(s);
frotate(s,c,d,a,k);
w=strcat(d,c);
printf("The string after %d forward rotation is %s",k,w);
return 0;
}
void frotate(char *p,char*b,char *y,int g,int n){
    char *t;
    char *u;
   t=b;
   u=y;
   
    for(int i=1;i<=g-n;i++){
        *(t)=*(p);
        
        t++;
        p++;
    }
    for(int i=1;i<=(g-(g-n));i++){
        *u=*p;
        u++;
        p++;
    }
   
}