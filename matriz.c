#include <stdio.h>

int main()
{
    int filas, columnas;
    ;
    // Obtener dimensiones de la matriz
    printf("Ingresa el numero de filas: ");
    scanf("%d", &filas);
    printf("Ingresa el numero de columnas: ");
    scanf("%d", &columnas);
    // Crear matriz original con números aleatorios entre 0 y 100
    int matriz_original[filas][columnas]
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            matriz_original[i][j] = rand() % 101;//asignar numeros enteros entre 0 y 100
        }
    }
     // Imprimir matriz original
    printf("Matriz original:\n");
    for(int i = 0; i < filas; i++) {
        for(int j = 0; j < columnas; j++) {
            printf("%d ", matriz_original[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}
