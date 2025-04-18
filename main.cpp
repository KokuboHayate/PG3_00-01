#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>

typedef int (*newType)(int a);
typedef int (*PFunc)(int*);

//賽の目の値が奇数の時の関数
int odd(int a) {
	printf("%d,半！\n", a);
	return 1;
}

//賽の目の値が偶数の時の関数
int even(int a) {
	printf("%d,丁！\n", a);
	return 2;
}

//乱数で、サイコロの目を出す(コールバック関数)
int DiceResult(int* s) {
	unsigned int currentTime = time(nullptr);
	srand(currentTime);

	int diceResult;
	diceResult = rand() % 6 + 1;
	return diceResult;

}

//指定の秒数後に、コールバック関数を呼び出す
int SetTimeout(PFunc p, int second) {
	Sleep(second * 1000);


	int result;
	result = p(&second);
	return result;
}

int main() 
{
	//プレイヤーの回答
	int player = 0;
	//賽の目の値
	int dice = 0;
	//半か丁の結果
	int result = 0;

	//関数ポインタの宣言
	newType calc;

	//半か丁を入力させる
	printf("これから君には、半(奇数)か丁(偶数)かを当ててもらう。\n");
	printf("半を思うなら1を、丁を思うなら2を入力せよ。\n->");
	scanf_s("%d", &player);
	//1or2を入力しなかった場合、1に置き換える
	if ((player < 1) || (player > 2)) {
		printf("想定していない値が入力されたので、強制的に1を入力します\n");
		player = 1;
	}
	printf("結果は……");

	//コールバック関数を用いて、もったいつけてから賽の目の値を出す
	PFunc p;
	p = DiceResult;
	dice = SetTimeout(p, 3);

	//賽の目の値から、半か丁かを調べる
	if (dice % 2 == 1) {
		calc = &odd;
	} else {
		calc = &even;
	};

	//半か丁かを表示する
	result = calc(dice);

	//勝ち負けの表示

	if (player == result) {
		printf("君の勝ちだ\n");
	} else {
		printf("君の負けだ\n");
	}

	return 0;
}