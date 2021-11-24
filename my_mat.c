#include <stdio.h>
#include <stdlib.h>
#include "my_mat.h"

int** init(){ 

    int** arr = (int**)malloc(10 * sizeof(int*));
    
    for (int i = 0; i < 10; i++){
        arr[i] = (int*)malloc(10 * sizeof(int));
    }

    for (int i =0; i <10; i++){
     
        for (int j =0; j <10; j++){

            scanf("%d" ,&arr[i][j]);
        }   
    }

    int k, temp;
      for(k=0 ; k<10; k++){
        for(int i=0; i<10; i++){
            for(int j=0; j<10; j++){
            
                temp=(arr[i][k]+arr[k][j]);

                if( (arr[i][j] > temp && temp!=0) && (arr[i][k]!=0 && arr[k][j]!=0) ){
                    arr[i][j]=temp;
                }

                else if ( (arr[i][j]==0 && (arr[i][k]>0 && arr[k][j]>0)) && (i != j ) ){
                    arr[i][j]=temp;
                }
                
            }
        }
    }
   
   return arr;
  }


void check_path(int **mat){
    int i , j;
    scanf("%d", &i);
    scanf("%d", &j);

    if(mat[i][j]!=0){
        printf("True\n");
    }
    else {
        printf("False\n");
        
    }
}


void short_path(int **mat){
    int i , j, k,temp;
    scanf("%d", &i);
    scanf("%d", &j);

    if(mat[i][j]!=0){
        printf("%d", mat[i][j]);
        printf("\n");
    }
    else {
     printf("-1\n");
    }
  }
    
