#include<stdio.h>

int tot( int * pa );

main()
{
    int arr[6], *pa;

    printf("6개의 숫자를 입력하시오: ");

    for(int i=0; i<6; i++){ //6개의 수를 입력받고 배열에 저장 
        scanf("%d", &arr[i]);
    }

    pa = &arr[0];   // 포인터 변수 pa에 배열의 첫번째 주소 저장

    printf("합:%d", tot( pa ));
    
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
