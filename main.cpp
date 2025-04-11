#include <stdio.h>

//一般的な賃金体系の計算関数
int Normal(int time) {
	return time * 1072;
}

//再帰的な賃金体系の計算関数
int Recursive(int time,int salary) {
	if (time <= 1) {
		return salary;
	}

	return salary + Recursive(time - 1, salary * 2 - 50);
}

int main() 
{
	//労働時間を入れるの変数
	int workinghours;

	//労働時間を入力させる
	printf("何時間働きましたか？->");
	scanf_s("%d", &workinghours);

	//それぞれの体系における賃金の表示
	printf("一般的な賃金体系の場合:%d円\n", Normal(workinghours));
	printf("再帰的な賃金体系の場合:%d円\n", Recursive(workinghours,100));

	return 0;
}