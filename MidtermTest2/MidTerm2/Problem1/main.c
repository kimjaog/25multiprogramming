#include<stdio.h>
int PassOrFail(int score)
{
	return score >= 50 ? 1 : 0;
}

int main()
{
	int score = 99;
	if (PassOrFail(score))
		printf("재시험 없습니다!\n");
	else
		printf("재시험 있습니다.\n");

		return 0;
}
