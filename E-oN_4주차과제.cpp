#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS


main()
{
int arr[6];
int i, j, sw, t;

printf("6개의 수를 입력: ");  // 수를 입력받음
for(i=0; i<6; i++)
    scanf("%d", &arr[i]);

for(i=0; i<5; i++){  //버블정렬
    sw=0;
    for(j=1; j<5-i; j++)
        if(arr[j-1] > arr[j]){
        t=arr[j-1];    
        arr[j-1]=arr[j];    
        arr[j]=t;
        sw=1; 
    }
    if(sw==0)
        break;
}

printf("[ ");  //출력
for(i=0;i<6;i++)
    printf("%d ", arr[i]);
printf("]");

}
