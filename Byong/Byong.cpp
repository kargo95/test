// Byong.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//
//문제1: 정수 세개를 입력 받고, 그 중에서 가장 큰 수를 찾아서 출력
//입력 : 1,2,3
//MAX : 3


#include "stdafx.h"
#include <stdio.h>


int main()
{
	int x, y, z;

	printf("정수를 입력하세요\n");
	scanf("%d", &x);

	printf("정수를 입력하세요\n");
	scanf("%d", &y);

	printf("정수를 입력하세요\n");
	scanf("%d", &z);

	printf("%d %d %d", x, y, z);
    return 0;
}

