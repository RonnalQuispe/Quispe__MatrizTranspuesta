#include <stdio.h>
#include <stdlib.h>
int main()
{
    int fila, columna;
        // Obtener dimensiones de la matriz
    printf("Ingresa el numero de filas: ");
    scanf("%d", &fila);
    printf("Ingresa el numero de columnas: ");
    scanf("%d", &columna);
    // Crear matriz original con números aleatorios entre 0 y 100
    int matriz_original[fila][columna];
    for (int i = 0; i < fila; i++)
    {
        for (int j = 0; j < columna; j++)
        {
            matriz_original[i][j] = rand() % 101;//asignar numeros enteros entre 0 y 100
        }
    }
     // Imprimir matriz original
    printf("Matriz original:\n");
    for(int i = 0; i < fila; i++) {
        for(int j = 0; j < columna; j++) {
            printf("%d ", matriz_original[i][j]);
        }
        printf("\n");
    }
    // Obtener matriz transpuesta
    int matriz_transpuesta[columna][fila];
    for(int i = 0; i < columna; i++) {
        for(int j = 0; j < fila; j++) {
            matriz_transpuesta[i][j] = matriz_original[j][i];
        }
    }
    
    // Imprimir matriz transpuesta
    printf("Matriz transpuesta:\n");
    for(int i = 0; i < columna; i++) {
        for(int j = 0; j < fila; j++) {
            printf("%d ", matriz_transpuesta[i][j]);
        }
        printf("\n");
    }
    
    
    
    return 0;
}

