
int main()
{
    printf("Desenho\n\n");
    int linha, coluna;

    for(linha=0;linha<8;linha++){
        for(coluna=0;coluna<8;coluna++){
        if(linha>=coluna){
        printf("[%d:%d]", linha, coluna);
    }} printf ("\n\n");
    }
}

