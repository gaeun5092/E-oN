#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

/* 한 판의 조각수 N이 주어질 때 한조각, 두조각씩 나누는 총 방법의 가짓수
<방법>
1) 2가 들어갈 수 있는 최대 개수 k를 센다
2) 2가 0번, 1번, ..., k번 들어갈 때 각 경우의 수를 센다
3) 모두 더한다

<예시>
ex) N = 5일 때, k =2 
2가 0번 들어감 -> 1,1,1,1,1 (5C0=1)
2가 1번 들어감 -> 2,1,1,1 / 1,2,1,1 / 1,1,2,1 / 1,1,1,2 (4C1=4)
2가 2번 들어감 -> 2,2,1 / 2,1,2 / 1,2,2 (3C2=3) 
5C0 + 4C1 + 3C2 = 1 + 4 + 3 = 8

<일반화>
=> 한 판의 피자를 n조각으로 나눌 때 
2가 k번 들어감 -> (n-k)Ck

*/

int calculation(int num);
int combination(int m, int n);
long fact(int num);

void main()
{
    int num;

    printf("피자 조각 수 입력: ");
    scanf("%d", &num);

    printf("피자는 %d조각으로 나눌 수 있습니다.", calculation(num));
}

int calculation(int num) 
{
    int k, res, index;

    index = num;
    k = index / 2; // 2가 들어갈 수 있는 최대 개수

    res=0;
    for(int i=0; i <= k; i++){
        res = res + combination(num-i, i);
    }

    return res;
}

int combination(int m, int n) // 조합을 통해 각 경우의 개수를 구하는 함수 + 팩토리얼
{
    if( m == n)
        return 1;
    int a = fact(m);
    int b = fact(n);
    int c = fact(abs(m-n));
    return a/(b*c);   
}

long fact(int num) 
{
    if(num == 1 || num ==0)
        return 1;
    return num*fact(num - 1);
}   
