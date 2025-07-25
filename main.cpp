#include <stdio.h>
#include <thread>

//テキスト表記関数
void PrintText1(char text[]) {
	printf("%s\n", text);
}


int main() 
{
	char text1[] = "thread1";
	char text2[] = "thread2";
	char text3[] = "thread3";

	//スレッドの生成→動作完了の順で3回行う
	std::thread th1(PrintText1, text1);
	th1.join();

	std::thread th2(PrintText1, text2);
	th2.join();

	std::thread th3(PrintText1, text3);
	th3.join();

	return 0;
}