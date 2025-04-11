#include <stdio.h>

int Normal(int time) {
	return time * 1072;
}

int Recursive(int time,int salary) {
	if (time <= 1) {
		return salary;
	}

	return salary + Recursive(time - 1, salary * 2 - 50);
}

int main() 
{
	int workinghours;

	scanf_s("%d", &workinghours);

	printf("一般的な賃金体系の場合:%d円\n", Normal(workinghours));
	printf("再帰的な賃金体系の場合:%d円\n", Recursive(workinghours,100));

	return 0;
}