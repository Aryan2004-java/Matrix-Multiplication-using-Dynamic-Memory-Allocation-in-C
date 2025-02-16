#include<stdio.h>
#include<stdlib.h>
void multmat(int **firstmat,int rows1,int cols1,int **secmat,int rows2,int cols2,int **resmat){
    int i,j,k;
    if(cols1!=rows2){
        printf("Matrix multiplication not possible: incompatible dimensions\n");
        return;
    }
    for(i=0;i<rows1;i++){
        for(j=0;j<cols2;j++){
            resmat[i][j]=0;
            for(k=0;k<cols1;k++){
                resmat[i][j]+=firstmat[i][k]*secmat[k][j];
            }
        }
    }
}
void printmat(int **mat,int rows,int cols){
    int i,j;
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            printf("%d  ",mat[i][j]);
        }
        printf("\n");
    }
}
void freemat(int **mat,int rows){
    int i;
    for(i=0;i<rows;i++)
    free(mat[i]);
    free(mat);
}
int main(){
   int i,j,rows1,rows2,cols1,cols2;
   printf("Enter the rows and columns for the first matrix\n");
   scanf("%d %d",&rows1,&cols1); 
   
  int **firstmat=(int**)malloc(rows1*sizeof(int*));
  for(i=0;i<rows1;i++)
  firstmat[i]=(int*)malloc(cols1*sizeof(int));
  printf("Enter the elements of the first matrix\n");
  for(i=0;i<rows1;i++){
    for(j=0;j<cols1;j++){
        scanf("%d",&firstmat[i][j]);
    }
  }
  
  printf("Enter the rows and columns of the second matrix\n");
  scanf("%d %d",&rows2,&cols2);
  
  int **secmat=(int**)malloc(rows2*sizeof(int*));
  for(i=0;i<rows2;i++)
  secmat[i]=(int*)malloc(cols2*sizeof(int));
  printf("Enter elements of the second matrix\n");
  for(i=0;i<rows2;i++){
    for(j=0;j<cols2;j++){
        scanf("%d",&secmat[i][j]);
    }
  }

  int **resmat=(int**)malloc(rows1*sizeof(int*));
  for(i=0;i<rows1;i++)
  resmat[i]=(int*)malloc(cols2*sizeof(int));

  multmat(firstmat,rows1,cols1,secmat,rows2,cols2,resmat);
  printf("Result of matrix multiplication is : \n");
  printmat(resmat,rows1,cols2);

  freemat(firstmat,rows1);
  freemat(secmat,rows2);
  freemat(resmat,rows1);
return 0;
}