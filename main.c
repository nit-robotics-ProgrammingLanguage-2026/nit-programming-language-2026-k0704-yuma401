
#include <stdio.h>

// static変数を使って、前回までの合計を保存する関数
int calculate_total(int value) {
    // static変数は関数が終了しても値を保持する
    static int accumulated_sum = 0;

    accumulated_sum += value;
    return accumulated_sum;
}

int main(void) {
    int input_number;
    int total = 0;

    scanf("%d", &input_number);

    // 入力が1〜10以外ならNGを表示する
    if (input_number < 1 || input_number > 10) {
        printf("NG");
        return 0;
    }

    // 2から始めて、2ずつ増やしながら合計する
    for (int loop_counter = 1;
         loop_counter <= input_number;
         loop_counter++) {
        total = calculate_total(loop_counter * 2);
    }

    printf("%d", total);

    return 0;
}
