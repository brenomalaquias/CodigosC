#include<stdio.h>
#include<string.h>
typedef struct{
  int n;
  char str[];
}Fi;

void create(int num,char frase[],void(*func)()){
 Fi coisa;

 num = coisa.n;
 strcpy(coisa.str,frase);
 printf(coisa.str);

 (*func)();

}

void esc(){
    printf(" funcionou");
}
int main(){
    
    int num= 20;
    char frase[10]="ola tudo";

    create(num,frase,&esc);
    return 0;
}