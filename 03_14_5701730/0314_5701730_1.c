#include <stdio.h>
#include <time.h>
#include <stdio.h>
//0~100������ �����߿��� �Ҽ��� ���� ���� ���ϴ� ���α׷��� 
//����ð��� clock �Լ��� ����Ͽ� ����


int main() {
	int num = 0;
	int n;
	int sum = 0;
	for (int num = 2; num <= n; num++) {
		int count = 0;
		for (int i = 1; i <= num; i++)
			if (num % i == 0)
				count++;
		if (count == 2)
			sum += num;

	}


	printf("��:%d", sum);


	return 0;
}