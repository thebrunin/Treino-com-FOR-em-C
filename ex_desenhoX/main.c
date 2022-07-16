#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Desenho\n\n");
    int linha, coluna;

    for(linha=0;linha<=8;linha++){
            for(coluna=0;coluna<=8;coluna++){
                if(((linha==0)||(linha==8))||(((linha+coluna==8)||(linha==coluna))||((coluna==0)||(coluna==8)))){
                    printf("* ");
                }else{
                    printf("  ");
                }
            }

        printf("\n");
    }
}
