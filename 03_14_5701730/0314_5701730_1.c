#include <stdio.h>
#include <time.h>
#include <stdio.h>
//0~100������ �����߿��� �Ҽ��� ���� ���� ���ϴ� ���α׷��� 
//����ð��� clock �Լ��� ����Ͽ� ����


int main() {
	int num = 0;//���� ���� �ʱ�ȭ
	int sum = 0;//�Ҽ��� ���� ������ ���� �ʱ�ȭ

	clock_t start, stop;//���� �ð�,���� �ð��� �������� ����
	double duration;//�ð��� �������ִ� ���� �ʱ�ȭ
	start = clock();//�ð� ���� ����

	for (int num = 2; num <= 100; num++) {//�Ҽ��� ���ؼ� ���� �����ִ� �ݺ���
		int count = 0;//����� ������ �������� ����
		for (int i = 1; i <= num; i++)//����� ã������ �ݺ���
			if (num % i == 0)//num�� i�� �����������
				count++;//����� ������ ����
		if (count == 2)//����� ������ 2���� �Ҽ��̹Ƿ� ������
			sum += num;

	}
	stop = clock();//�ð� ���� ����
	duration = (double)(stop - start) / CLOCKS_PER_SEC;//���� �ð� ���
	printf("����ð��� %f���Դϴ�.\n", duration);//���

	


	printf("��:%d", sum);//���


	return 0;
}