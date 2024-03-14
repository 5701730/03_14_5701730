#include <stdio.h>
#include <time.h>
#include <stdio.h>
//0~100까지의 숫자중에서 소수들 만의 합을 구하는 프로그램의 
//수행시간을 clock 함수를 사용하여 측정


int main() {
	int num = 0;//숫자 변수 초기화
	int sum = 0;//소수의 합을 저장할 변수 초기화

	clock_t start, stop;//시작 시간,종료 시간을 저장해줄 변수
	double duration;//시간을 저장해주는 변수 초기화
	start = clock();//시간 측정 시작

	for (int num = 2; num <= 100; num++) {//소수를 구해서 합을 구해주는 반복문
		int count = 0;//약수의 개수를 저장해줄 변수
		for (int i = 1; i <= num; i++)//약수를 찾기위한 반복문
			if (num % i == 0)//num이 i로 나누어떨어지면
				count++;//약수의 개수를 증가
		if (count == 2)//약수의 개수가 2개면 소수이므로 더해줌
			sum += num;

	}
	stop = clock();//시간 측정 종료
	duration = (double)(stop - start) / CLOCKS_PER_SEC;//측정 시간 계산
	printf("수행시간은 %f초입니다.\n", duration);//출력

	


	printf("합:%d", sum);//출력


	return 0;
}