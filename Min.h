#pragma once

template <typename T1, typename T2>
class Min
{
public:
		T1 numA_;
		T2 numB_;
	
		//コンストラクタ
		Min(T1 numA_,T2 numB_) : numA_(numA_), numB_(numB_){}
	
		T1 Result() {
			if (numA_ < numB_) {
				return numA_;
			} else {
				return static_cast<T1>(numB_);
			}
			return numA_;
		}
};

