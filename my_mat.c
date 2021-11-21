#include <stdio.h>
#include <stdlib.h>
#include "my_mat.h"

int min(int n, int m);
int** init();
void check_path(int **mat);
void short_path(int **mat);


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
   
   return arr;
  }



    /**
     *  func B-check if there is a path between i , j
     **/
void check_path(int **mat){
    int i , j;
    scanf("%d", &i);
    scanf("%d", &j);
    
    for (int a = 0; a <10; a++){
     
        for (int b = 0; b < 10; b++){

           if(a==i && b==j){
               //check if there is a path
               if(mat[a][b]!=0){
                   printf("True\n");
                   break;
               }
               else {
                   printf("False\n");
                   break;
               }
           }
        }  
    }
}

int min(int n, int m){
   int minnum=n;
   if(n>m){minnum=m;}
   return minnum;
}

    /**
     *  func C-check if there is a short path between i , j
     **/
void short_path(int **mat){

    int i , j, k;
    scanf("%d", &i);
    scanf("%d", &j);
    
    for(k=0 ; k<10; k++){
        for(int a=0; a<10; a++){
            for(int b=0; b<10; b++){
            
                int temp= mat[a][k]+mat[k][b];

                if( (temp < mat[a][b]) && (temp=!0) && (mat[a][k]!=0 && mat[k][b]!=0) ){
                    mat[a][b]=mat[a][k]+mat[k][b];
                }
            }
        }
    }

    if(mat[i][j]!=0){
        printf("%d", mat[i][j]);
        printf("\n");
    }
    else {
     printf("-1\n");
    }
}
    