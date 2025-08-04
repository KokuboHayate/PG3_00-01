#include <stdio.h>
#include <iostream>
#include <string>
#include <chrono>

int main() {
    // 100万文字の'a'で初期化
    std::string a(1000000, 'a');

    // コピーの時間計測
    auto copy_start = std::chrono::high_resolution_clock::now();
    std::string b = a; // コピー
    auto copy_end = std::chrono::high_resolution_clock::now();

    // 移動の時間計測
    auto move_start = std::chrono::high_resolution_clock::now();
    std::string c = std::move(a); // 移動
    auto move_end = std::chrono::high_resolution_clock::now();

    // 結果表示（マイクロ秒）
    auto copy_duration = std::chrono::duration_cast<std::chrono::microseconds>(copy_end - copy_start);
    auto move_duration = std::chrono::duration_cast<std::chrono::microseconds>(move_end - move_start);

    std::cout << "コピーにかかった時間: " << copy_duration.count() << " マイクロ秒\n";
    std::cout << "ムーブにかかった時間: " << move_duration.count() << " マイクロ秒\n";

    return 0;
}