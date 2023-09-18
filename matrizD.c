#include<stdio.h>
#include<stdlib.h>

int main(void){
  int **matriz;

  matriz =(int **) malloc(3 * sizeof(int*));

  for(int i=0;i<3;i++){
     matriz[i]=(int *) malloc(3 * sizeof(int));
  }

  for(int i = 0;i<3;i++){
    for(int j =0;j<3;j++){
      matriz[i][j] = i+j;
    }
  }

 for(int i = 0;i<3;i++){
    for(int j =0;j<3;j++){
      printf("%d",matriz[i][j]);
    }
    printf("\n");
  }
  free(matriz);
    return 0;
}