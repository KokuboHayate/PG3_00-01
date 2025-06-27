#include <stdio.h>
#include <list>
using namespace std;

int main() 
{
	//駅名リスト
	list <const char*> eki_list{
		"Tokyo", "Kanda", "Akihabara", "Okachimachi", "Ueno", "Uguisudani", "Nippori", "Tabata", "Komagome", "Sugamo", "Otsuka", "Ikebukuro", "Mejiro", "Takadanobaba", "Sin-Okubo", "Shinjuku", "Yoyogi", "Harajuku", "Shibuya", "Ebisu", "Meguro", "Gotanda", "Osaki", "Sinagawa", "Tamachi", "Hamamatsucho", "Shimbashi", "Yurakucho"
	};

	//1970年時点での駅リストの表示
	printf("1970年 山手線の駅名一覧\n");
	for (auto itr = eki_list.begin(); itr != eki_list.end(); ++itr) {
		printf("%s\n", *itr);
	}

	printf("\n\n");

	//田端の前に西日暮里を入れる
	for (std::list<const char*>::iterator itr = eki_list.begin(); itr != eki_list.end(); ++itr) {
		if (*itr == "Tabata") {
			itr = eki_list.insert(itr, "Nisinippori");
			++itr;
		}
	}
	//2019年時点での駅リストの表示
	printf("2019年 山手線の駅名一覧\n");
	for (auto itr = eki_list.begin(); itr != eki_list.end(); ++itr) {
		printf("%s\n", *itr);
	}

	printf("\n\n");

	//田町の前に高輪ゲートウェイを入れる
	for (std::list<const char*>::iterator itr = eki_list.begin(); itr != eki_list.end(); ++itr) {
		if (*itr == "Tamachi") {
			itr = eki_list.insert(itr, "TakanawaGateway");
			++itr;
		}
	}
	//2022年時点での駅リストの表示
	printf("2022年 山手線の駅名一覧\n");
	for (auto itr = eki_list.begin(); itr != eki_list.end(); ++itr) {
		printf("%s\n", *itr);
	}



	return 0;
}