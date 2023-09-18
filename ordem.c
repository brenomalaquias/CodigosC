#include<stdio.h>

int main (void){
    int arr[]={1,3,2,8,4,6,5};
    int chave,i,j;
    
    for(j=1;j<7;j++){
        chave= arr[j];
        i=j-1;

        while(i>=0 && arr[i]>chave){
            arr[i+1]=arr[i];
            i=i-1;
            printf("troca feita \n");
        }
        arr[i+1]=chave;
        printf("chave atribuida \n");
        
        for(i=0;i<7;i++){
          printf("%d ",arr[i]);
         }
         printf("\n");
    }
      printf("\n");
    for(i=0;i<7;i++){
      printf("%d ",arr[i]);
    }

    return 0;
}