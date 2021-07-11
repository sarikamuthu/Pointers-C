#include<stdio.h>
#include<stdlib.h>
char *slice(char *,char *,int,int,int);
int main()
{
  char *p,*q;
  int a,b,c;
  printf("enter the string \n");
  scanf("%s",p);
  printf("enter start step and stop index");
  scanf("%d%d%d",&a,&b,&c);
  q=slice(p,q,a,b,c);
  printf("%s",q);
}

char *slice(char *p,char *q,int a,int b,int c)
{
  q=(char *)malloc(sizeof(p));
  char *qs;
  qs=p;
  while(a!=c)
  {
    *q=*p;
    q++;
    p=p+b;
  }
  *q='\0';
  return qs;
}