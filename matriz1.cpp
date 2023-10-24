#include <stdio.h>

void ex1();
void ex2();
void ex3();
void ex4();
void ex5();

int main() {
    ex5();
    return 0;
}

//Ler os elementos de uma matriz 5 x 10, um a um, mostrando os elementos da matriz depois de preenchida;
//os elementos devem ser mostrados no formato visual de matriz, cada um em suas respectivas linha e coluna.

void ex1(){
    int mat[5][10], i, j;
    printf("elementos:\n");
    for(i=0;i<5;i++){
        for(j=0;j<10;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    for(i=0;i<5;i++){
        for(j=0;j<10;j++){
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
}

//Somar duas matrizes A e B, de 7 linhas e 8 colunas cada uma, gerando uma matriz C, também 7 x 8,
//onde cada elemento de C é a soma dos 2 elementos correspondentes em A e B.

void ex2(){
    int matA[7][8], matB[7][8], i, j;

    printf("elementos da matriz A:\n");
    for(i=0;i<7;i++){
        for(j=0;j<8;j++){
            scanf("%d",&matA[i][j]);
        }
    }
    printf("elementos da matriz B:\n");
    for(i=0;i<7;i++){
        for(j=0;j<8;j++){
            scanf("%d",&matB[i][j]);
        }
    }
    printf("matriz C:\n");
    for(i=0;i<7;i++){
        for(j=0;j<8;j++){
            printf("%d ",matA[i][j] + matB[i][j]);
        }
        printf("\n");
    }
}

//Dada uma matriz 4 x 3, ler os elementos desta matriz, criar e mostrar sua matriz transposta.

void ex3(){
    int mat[4][3], i, j;
    printf("elementos:\n");
    for(i=0;i<4;i++){
        for(j=0;j<3;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    printf("matriz:\n");
    for(i=0;i<4;i++){
        for(j=0;j<3;j++){
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
    printf("matriz transposta:\n");
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            printf("%d ",mat[j][i]);
        }
        printf("\n");
    }
}

// Dada uma matriz M de 6 x 9, deve-se totalizá-la na vertical gerando um vetor V de 9 elementos.
// Imprimir o vetor e, a seguir, encontrar e imprimir a média dos 9 valores.

void ex4(){
    int  i, j; 
    float mat[6][9], v[9], media=0;
    printf("elementos:\n");
    for(i=0;i<6;i++){
        for(j=0;j<9;j++){
            scanf("%f",&mat[i][j]);
        }
    }
    for(i=0;i<6;i++) {
        for (j = 0; j < 9; j++) {
            printf("%.0f ", mat[i][j]);
        }
        printf("\n");
    }
    printf("ventor V:\n");
    for (j = 0; j < 9; j++) {
        v[j] = 0;
        for (i = 0; i < 6; i++) {
            v[j] += mat[i][j];
        }
        printf("%.0f ", v[j]);
        media += v[j];
    }
    printf("\n");
    printf("Media: %.2f\n", media/(float)j);

}

//Ler uma matriz quadrada de ordem 10 e totalizar os elementos de sua diagonal principal,
//imprimindo o total ao final.

void ex5(){
	int mat[10][10], i, j, t=0;
	
	printf("elementos:\n");
    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            scanf("%",&mat[i][j]);
        }
    }
	for(i=0;i<10;i++)
		t += mat[i][i];
	printf("total: %d",t);
	
}



