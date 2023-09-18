#include<stdio.h>
#include<stdlib.h>
int i,j;
void Merge(int A[],int p, int q, int r){
  int nL=q-p+1,
  nR=r-q,
  k=p;
  
  int L[nL];
  int R[nR];
  printf("\n array do lado esquerdo: ");
  for(i=0;i<nL;i++){
    L[i]=A[i+p];
   printf("%d ",L[i]);
  }
  system("pause");
   printf("\n  array do lado direito: ");
  for(j=0;j<nR;j++){
    R[j]=A[q+j+1];
    printf("%d ",R[j]);
  }
   system("pause");
  i=0;
  j=0;
while(i<nL && j<nR){
    if(L[i]<= R[j]){
     A[k]=L[i];
     printf("\n A[k=%d]=%d L[i=%d]=%d \n",k,A[k],i,L[i]); 
      system("pause");    
     i++;   
    }
    else{
     A[k]= R[j];
     printf("\n A[k=%d]=%d R[j=%d]=%d \n",k,A[k],j,R[j]);  
      system("pause");
     j++;
    }
    k++;
}

while(i<nL){
    A[k]=L[i];
    i++;  
    k++;
}
while(j<nR){
   A[k]= R[j];
   j++;
   k++;
}
   printf("\n array atual=");
    for(i=0;i<8;i++){
        printf(" %d ",A[i]);
    }
     system("pause");
}
void mergesort(int A[],int p, int r){
   if(p>=r){
        printf("%d\n",A[p]);
        
        return;
   }
//    if(p<r){
    else{
        printf("p=%d r= %d \n",p,r);
        int q = p+(r-p)/2;
        mergesort(A,p,q);
        mergesort(A,q+1,r);
        Merge(A,p,q,r);
        
    }
}
        

int main(void){
    int arr[]={4,9,6,8,3,2,7,1};
    
    mergesort(arr,0,7);
    printf("\n array final=");
    for(i=0;i<8;i++){
        printf(" %d ",arr[i]);
    }
    return 0;
}