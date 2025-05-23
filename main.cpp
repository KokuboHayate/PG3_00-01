#include <stdio.h>


template <typename T1, typename T2>
class Comparison
{
public:
	//メンバ変数
	T1 numA_;
	T2 numB_;

	//コンストラクタ
	Comparison(T1 numA_, T2 numB_) : numA_(numA_), numB_(numB_) {}

	//メンバ関数
	T1 Min() {
		//値の低いほうを返す
		if (numA_ < numB_) {
			return numA_;
		} else {
			return static_cast<T1>(numB_);
		}
		return numA_;
	}
};

int main() 
{
	//int同士の比較
	Comparison<int, int> com1(10, 20);
	printf("小さいほうは、%dです。\n", com1.Min());

	//float同士の比較
	Comparison<float, float> com2(30.0f, 10.0f);
	printf("小さいほうは、%fです。\n", com2.Min());

	//double同士の比較
	Comparison<double, double> com3(25.5, 25.0);
	printf("小さいほうは、%lfです。\n", com3.Min());

	//intとfloatの比較
	Comparison<int, float> com4(10, 20.0f);
	printf("小さいほうは、%dです。\n", com4.Min());

	//intとdoubleの比較
	Comparison<int, double> com5(30, 10.0);
	printf("小さいほうは、%dです。\n", com5.Min());

	//floatとdoubleの比較
	Comparison<float, double> com6(25.5, 25.0f);
	printf("小さいほうは、%fです。\n", com6.Min());

	return 0;
}