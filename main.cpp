#include <stdio.h>

template <typename Type>
Type Min(Type num1, Type num2) {
	if (num1 < num2) {
		return static_cast<Type>(num1);
	} else {
		return static_cast<Type>(num2);
	}
}

template <>
char Min<char>(char num1, char num2) {
	printf("数字以外は代入できません");
	return 0;
}

int main() 
{
	printf("%d\n", Min<int>(114, 514));
	printf("%f\n", Min<float>(11.4f, 51.4f));
	printf("%lf\n", Min<double>(11.4, 51.4));
	//printf("%s\n", Min<char>(114, 514));

	return 0;
}