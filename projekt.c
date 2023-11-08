#include <stdio.h>

// int secteni()








int main() {                            //main
    
    int matrix1[5][5] =                   // zadání první matice 
    {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25}
    };

    int matrix2[5][5] =                   // zadání druhé matice 
    {
        {25, 24, 23, 22, 21},
        {20, 19, 18, 17, 16},
        {15, 14, 13, 12, 11},
        {10, 9, 8, 7, 6},
        {5, 4, 3, 2, 1}
    };




    /*for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("napiste vasou matice: [%d][%d]: ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }*/




    printf("\n");                         //printf první matice
    printf("Vase prvni matice je: 5x5:\n");
    printf("\n");
    for (int i = 0; i < 5; i++) 
    {
        for (int j = 0; j < 5; j++) 
        {
            if (j==0)
            {
                printf("|%d ", matrix1[i][j]);
            }
            else if (j==4)
            {
                printf("%d\t|", matrix1[i][j]);
            }
            else if (matrix1[i][j] < 10)
            {
                printf(" %d ", matrix1[i][j]);
            }
            else
            {
                printf("%d ", matrix1[i][j]);
            }
        }
        printf("\n");
    }
    

    printf("\n");                         //printf druhé matice
    printf("Vase druha matice je: 5x5:\n");
    printf("\n");
    for (int i = 0; i < 5; i++) 
    {
        for (int j = 0; j < 5; j++) 
        {
            if (j==0)
            {
                printf("|%d ", matrix2[i][j]);
            }
            else if (j==4)
            {
                printf("%d\t|", matrix2[i][j]);
            }
            else if (matrix2[i][j] < 10)
            {
                printf("%d  ", matrix2[i][j]);
            }
            else if (matrix2[i][j] >= 10)
            {
                printf("%d ", matrix2[i][j]);
            }
        }
        printf("\n");
    }



    printf("\nlist operaci:");            // list operace
    printf("\n\t1. secteni");
    printf("\n\t2. odcitani\n");
    printf("\n");



    
    return 0;
}
