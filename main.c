#include <stdio.h>
#include "my_mat.h"
#include "my_mat.c"

int main(){
    char a='A', b='B', c='C';
    char comp;
    scanf("%c", &comp);
    int **mat=NULL;
   while (comp !='D')
   {
    if(comp==a){
    
        mat=init();
    }
    else if(comp==b){
        check_path(mat);
    }
    else if(comp==c){
       short_path(mat);
    }

    scanf("%c", &comp);
   }
   

   return 0;  
}


 
    
