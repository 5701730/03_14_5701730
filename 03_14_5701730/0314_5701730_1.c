#include <stdio.h>
#include <time.h>
#include <stdio.h>
//0~100까지의 숫자중에서 소수들 만의 합을 구하는 프로그램의 
//수행시간을 clock 함수를 사용하여 측정


int main() {
	int num = 0;
	int sum = 0;

	clock_t start, stop;
	double duration;
	start = clock();

	for (int num = 2; num <= 100; num++) {
		int count = 0;
		for (int i = 1; i <= num; i++)
			if (num % i == 0)
				count++;
		if (count == 2)
			sum += num;

	}
	stop = clock();
	duration = (double)(stop - start) / CLOCKS_PER_SEC;
	printf("수행시간은 %f초입니다.\n", duration);

	


	printf("합:%d", sum);


	return 0;
}