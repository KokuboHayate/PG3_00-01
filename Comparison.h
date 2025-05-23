#pragma once
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

