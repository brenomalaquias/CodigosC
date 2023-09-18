#include<stdio.h>
typedef struct {
    int num;
    char frase[10];
    float real;
}fila;

int main(void){

    fila ex;
    FILE *fl;
    fl= fopen("struct.txt","r");

    if(fl==NULL){
        printf("erro");
    }
    else{
        fscanf(fl,"%d",&ex.num);
        fscanf(fl,"%f",&ex.real);
        fscanf(fl,"%s",&ex.frase);
        printf("%d     %f   %s ",ex.num,ex.real,ex.frase);
    }
    fclose(fl);

    return 0;
}