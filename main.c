#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

main()
{

int lin,col,linbase,colbase, tab;
int mat[3][3], mat1[3][3], mat2[6][6], mat3[9][9];

/* zerando todos elementos */
for (lin=0;lin<9;lin++){
   for (col=0;col<9;col++){
        if (lin<3){
            mat1[lin][col]=0;
        } 
        if (lin<6){
            mat2[lin][col]=0;
        }        
        mat3[lin][col]=0;
   }
}
 
for (lin=0; lin<3; lin++)
{
    for (col=0; col<3;col++)
    {
        printf("Digite ELEMENTO da linha %d, coluna %d da matriz: ",lin+1,col+1);
        scanf("%d", &mat[lin][col]);
    }
}

printf("Matriz original\n");
for (lin=0;lin<=2;lin++)
{
    for (col=0;col<3;col++)
    {
        printf("%d\t",mat[lin][col]);
        mat1[lin][col]=mat[lin][col];
    }
    printf("\n\n");
}

for (lin=0;lin<3;lin++)
    for (col=0;col<3;col++)
        mat1[lin][col] = (mat[lin][col])*2;

printf("\n\nMatriz com elementos multiplicados por 2\n\n");

for (lin=0;lin<=2;lin++)
{
    for (col=0;col<3;col++)
        printf("%d\t",mat1[lin][col]);

    printf("\n\n");
}

printf("\n\nMatriz, calculando e multiplicando por 2 \n\n");

linbase=0;
colbase=0;
for (lin=0;lin<9;lin++)
{
    for (col=0;col<9;col++)
    {        
        if (lin<3 && col<3){
            mat3[lin][col]=mat[lin][col];
        }
        else
        {
            if (lin>=3 && lin<9){
                linbase=lin-3;
            }
            else
            {
                linbase=lin;
            }            
            if (col>=3 && col<9){
                colbase=col-3;
            }
            else
            {
                colbase=col;
            }
            
            mat3[lin][col]=mat3[linbase][colbase]*2;        
        }
    }
    //printf("\n\n");
}


for (lin=0;lin<9;lin++)
{
    for (col=0;col<9;col++)
        printf("%d\t",mat3[lin][col]);

    printf("\n\n");
}

printf("\n\n");
return 0;

}