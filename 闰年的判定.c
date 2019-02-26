#include<stdio.h>
#include<stdlib.h>

void leapyear(int from, int to)
{
	for (int year = from; year <= to; year++)
	{
		//闰年的判定标准：
		//1.能被4整除但不能被100整除、
		//2.能被400整除
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