#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int tot( int * pa );

main()
{
    int arr[6];

    printf("6개의 숫자를 입력하시오: ");

    scanf("%d, %d, %d, %d, %d, %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4], &arr[5], &arr[6]);

    printf("합:%d", tot( arr ));
    
}

int tot( int *pa ) // 총합을 구하는 함수
{
    int tot;

    tot = 0;
    for(int i=0; i<6; i++){ 
        tot = tot + *pa++;
    }

    return tot;    //모든 요소의 총합을 반환
}
