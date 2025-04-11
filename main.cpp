#include <stdio.h>

//テンプレート
template <typename Type>


Type Min(Type num1, Type num2) {
	if (num1 <= num2) {
		return static_cast<Type>(num1);
	} else {
		return static_cast<Type>(num2);
	}
}

template <>
char Min<char>(char num1, char num2) {
	
	return printf("数字以外は代入できません");
}

int main() 
{
	//int型の比較
	printf("%d\n", Min<int>(114, 514));

	//float型の比較
	printf("%f\n", Min<float>(11.4f, 51.4f));

	//double型の比較
	printf("%lf\n", Min<double>(11.4, 51.4));

	//char型での比較
	printf("%c\n", Min<char>('114', '514'));

	return 0;
}