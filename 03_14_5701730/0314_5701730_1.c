#include <stdio.h>
#include <time.h>
#include <stdio.h>
//0~100������ �����߿��� �Ҽ��� ���� ���� ���ϴ� ���α׷��� 
//����ð��� clock �Լ��� ����Ͽ� ����


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
	printf("����ð��� %f���Դϴ�.\n", duration);

	


	printf("��:%d", sum);


	return 0;
}