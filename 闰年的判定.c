#include<stdio.h>
#include<stdlib.h>

void leapyear(int from, int to)
{
	for (int year = from; year <= to; year++)
	{
		//������ж���׼��
		//1.�ܱ�4���������ܱ�100������
		//2.�ܱ�400����
		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		{
			printf("%d\n", year);
		}
	}
}
int main()
{
	int from = 1000,to = 2000;
	leapyear(from, to);
	system("pause");
	return 0;
}