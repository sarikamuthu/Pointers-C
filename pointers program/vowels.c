#include<stdio.h>
void vowelcount(char *p,int a[]);
int main(){
    char *s="ssn college of engineering";
    int a[5];
    for(int i=0;i<5;i++){
        a[i]=0;
    }
    vowelcount(s,a);
    for(int i=0;i<5;i++){
        printf(" %d",a[i]);
    }

    return 0;
}
void vowelcount(char *p,int a[]){
    while(*p!='\0'){
        if(*p=='a'){
            a[0]++;
        }
        else if(*p=='e'){
            a[1]++;
        }
        
        else if(*p=='i'){
            a[2]++;
        }
        else if(*p=='o'){
            a[3]++;
        }
        else if(*p=='u'){
            a[4]++;
        }
        p++;
    }



}