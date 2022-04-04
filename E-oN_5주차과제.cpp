#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int *solution(int i, int array[], int commands[][3], int res[]);

void main()
{
    int array[100], commands[50][3], res[50];
    int arr_len, com_len;

    printf("array 배열의 길이 입력: ");
    scanf("%d", &arr_len);

    printf("array 배열의 원소를 입력: ");
    for(int i =0; i < arr_len; i++){
        scanf("%d", &array[i]);
    }

    printf("commands 배열의 길이 입력: ");
    scanf("%d", &com_len);
    
    for(int i=0; i < com_len; i++){
        printf("%d번째 commands의 원소 i,j,k를 입력: ", i+1);
        scanf("%d %d %d", &commands[i][0], &commands[i][1], &commands[i][2]);
    }
    
    for(int i=0; i < com_len; i++){
        solution(i, array, commands, res);
    }

    printf("[");
    for(int i=0; i<com_len; i++)
        printf("%2d", res[i]);
    printf("]");    

}

int *solution(int i, int array[], int commands[][3], int res[])
{
    int be[100];
    int j, k, a, b, c, n, t;
    int num;

    
    a = commands[i][0];
    b = commands[i][1];
    c = commands[i][2];
    n = b - a + 1;

    for(j=0; j < n; j++){
        be[j] = array[a + j - 1];
    }                
    
    for(k=0; k < n-1; k++)
        for(j=k+1; j < n; j++)
            if(be[k] > be[j]){
                t = be[k];
                be[k] = be[j];
                be[j] = t;
            }
        
    res[i] = be[c - 1];

    return res;
}
