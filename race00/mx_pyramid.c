#include "unistd.h"
#include <stdlib.h>

void mx_printchar(char c);

void mx_pyramid(int n) {
      if (n <= 1 || n % 2 == 1) return;
    
    //размеры массива
    int N = n;
    int M = n * 2;
    
    //инициализация массива
    char **arr = (char **)malloc(N * sizeof(char *));
    for(int i = 0; i < N; i++) 
        arr[i] = (char *)malloc(M * sizeof(char));
    
    //заполнение пробелами
    for(int i = 0; i < N; i++) { 
        for(int j = 0; j < M; j++) {
            arr[i][j] = ' ';
        }
    }
    
    
    //нижняя грань
    for (int i = 1; i < N * 2 - 2; i++)
        arr[N-1][i] = '_';

    //левая передняя грань
    for (int i = N - 1, j = 0; i >= 0 && j < M ; i--, j++)
        arr[i][j] = '/';
        
    //правая передняя
    arr[0][n] = '\\';
    for (int i = 1, j = n; i < N && j < M ; i++, j++)
        arr[i][j] = '\\';

    //правая нижняя
    for(int i = 0; i < n / 2; i++) 
        arr[N-1-i][M-1] = '|';
        
    //правая задняя
    for(int i = 0, j = 0; i < n / 2; i++, j += 2) 
        arr[N-n/2-1-i][M-2-j] = '\\';

    //вывод массива
    int indicator = 0;
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            if(arr[i][j] == '\\') indicator++;
            if (i == 0 && arr[i][j-1] == '\\') break;
            else if (i < N / 2 && indicator == 2 && arr[i][j-1] == '\\') break;
            mx_printchar(arr[i][j]);
        }
        mx_printchar('\n');
        indicator = 0;
    }

    //освобождение памяти
    for(int i = 0; i < N; i++)
        free(arr[i]);
    free(arr);  
}

