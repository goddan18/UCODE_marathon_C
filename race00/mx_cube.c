#include "unistd.h"
#include <stdlib.h>

void mx_printchar(char c);


void mx_cube(int n) {
    if (n <= 1) return;
    
    //размеры массива
    int N = n+2+n/2+1;
    int M = n*2+2+n/2+1;
    
    //инициализация массива
    char **arr = (char **)malloc(N * sizeof(char *));
    for(int i = 0; i < N; i++) 
        arr[i] = (char *)malloc(M * sizeof(char));
    
    //заполнение пробелами
    for(int i = 0; i < N; i++)
        for(int j = 0; j < M; j++) 
            arr[i][j] = ' ';
    
    
    //передние грани
    //левая грань
    for(int i = 2; i < n+2; i++)
        arr[N-i][0] = '|';
        
    //правая грань
    for(int i = 2; i < n+2; i++)
        arr[N-i][n*2+1] = '|';

    //верхняя грань
    arr[n/2+1][0] = '+';
    arr[n/2+1][n*2+1] = '+';
    for(int i = 1; i <= n * 2; i++) {
        arr[n/2+1][i] = '-';
    }
    
    //нижняя грань
    arr[N-1][0] = '+';
    arr[N-1][n*2+1] = '+';
    for(int i = 1; i <= n * 2; i++) {
        arr[N-1][i] = '-';
    }
    
    //задние грани
    //верхняя грань
    arr[0][n/2+1] = '+';
    arr[0][M-1] = '+';
    for(int i = n/2+2; i <= M-2; i++) {
        arr[0][i] = '-';
    }
    
    //правая грань
    arr[n+1][M-1] = '+';
    for(int i = 1; i <= n; i++)
        arr[i][M-1] = '|';
    
    
    
    //диагонали
    //левая верхняя
    for(int i = 1; i < n/2+1; i++)
        arr[N-2-n-i][i] = '/';
 
    //правая верхняя
    for(int i = 1; i < n/2+1; i++)
        arr[N-2-n-i][i+n*2+1] = '/';

    //правая нижняя
    for(int i = 1; i < n/2+1; i++)
        arr[N-1-i][i+n*2+1] = '/';



    //вывод массива
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            if(i > n + 1 && (arr[i][j-1] == '/' || arr[i][j-1] == '+') && j > 1) break;
            mx_printchar(arr[i][j]);
        }
        mx_printchar('\n');
    }

    //освобождение памяти
    for(int i = 0; i < N; i++)
        free(arr[i]);
    free(arr);

}


