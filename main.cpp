#include <stdio.h>
#include "Livingthing.h"
#include "Human.h"
#include "Dog.h"

int main() 
{
	//基底クラスでまとめる
	Livingthing* livingthing[3];

	//派生クラスの生成
	for (int i = 0; i < 3; i++) {
		if (i < 2) {
			livingthing[i] = new Human;
		} else {
			livingthing[i] = new Dog;
		}
	}

	//仮想関数の実行
	for (int i = 0; i < 3; i++) {
		livingthing[i]->Firstcry();
	}

	//派生クラスの削除
	for (int i = 0; i < 3; i++) {
		delete livingthing[i];
	}

	return 0;
}