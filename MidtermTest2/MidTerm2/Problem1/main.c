#include<stdio.h>
int PassOrFail(int score)
{
	return score >= 50 ? 1 : 0;
}

int main()
{
	int score = 99;
	if (PassOrFail(score))
		printf("����� �����ϴ�!\n");
	else
		printf("����� �ֽ��ϴ�.\n");

		return 0;
}
