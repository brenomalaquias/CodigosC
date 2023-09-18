#include<stdio.h>
#include<stdlib.h>
#define line 3
#define col 3

int i,j;

int ver(int a[][col]){

   for(i=0;i<3;i++){    
        for(j=0;j<3;j++){
           printf("a[%d][%d]= %d ",i,j,a[i][j]);
            if(a[i][j]==1) {
                 if( a[i+1][j]==a[i][j] && a[i+2][j]== a[i][j]){
                    printf("  ganhhou  1 na coluna[%d] \n",j);
                    return 1;
                }
                 if( a[i][j+1]==a[i][j] && a[i][j+2]== a[i][j]){
                    printf("  ganhhou 1 na linha [%d]\n",i);
                    return 1;
                }
            }
            else if(a[i][j]==2){
                if( a[i+1][j]==a[i][j] && a[i+2][j]== a[i][j]){
                    printf("  ganhhou  2 na coluna[%d] \n",j);
                    return 2;
                }
                 if( a[i][j+1]==a[i][j] && a[i][j+2]== a[i][j]){
                    printf("  ganhhou 2 na linha[%d] \n",i);
                    return 2;
                }
            }
     
        }  
      printf("\n");                 
    } 
   return 0;
}

int main(void){
    int l1,c1,fim=0,num;
    int a[3][3]=  {0,0,0,
                   0,0,0,
                   0,0,0};
   
    

    while(fim==0){
         for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                printf(" %d",a[i][j]);
            }
            printf("\n");
        }
        printf("digite a linha e a coluna que deseja:");
        scanf("%d",&l1);
        scanf("%d",&c1);
        printf("digite 1 ou 2 para o jogo da velha");
        scanf("%d",&num);
        
            if(a[l1][c1]!=0){
            printf("posicao ja ocupada");
            }
            else{

                a[l1][c1]=num;
            
                int result = ver(a);
                
                if(result==0){
                    printf("falha \n");
                }
                else{
                    printf("jogador %d ganhou!",result);

                    fim=1;
                }
            }
    }
   

    return 0;
}