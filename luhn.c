#include<stdio.h>
#include<stdlib.h>
int i;
void multi(int arr[],int *sumEven){
    int dobro,left,right;
    for(i=0;i<8;i++){
        dobro= arr[i]*2;
        if(dobro>=10){
         left= dobro/10;
         right= dobro % 10;
         arr[i] = left+right;
        }
        else{
            arr[i]=dobro;
        }
        *sumEven+=arr[i];
        
      printf("%d ,soma=%d \n",arr[i],*sumEven);
    }
}

int main(void){
    int cartao[16]={4,8,4,7,3,5,2,9,8,9,2,6,3,0,9,4};
    int impar[8]={4,0,6,9,9,5,7,8};
    int par[8]={9,3,2,8,2,3,4,4};
    int somapar=0,somaimpar=0,somatotal;
    for(i=0; i<8;i++){
        somaimpar+=impar[i];
    }
    printf("\n %d",somaimpar);
    multi(par,&somapar);
    printf("\n %d",somapar);
    somatotal = somapar + somaimpar;

    if(somatotal%10==0){
        printf("numero valido");
    }
     else{
         printf("numero invalido");
     }
    
    return 0;
}
