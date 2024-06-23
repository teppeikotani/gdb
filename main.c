#include <stdio.h>

// 関数プロトタイプの宣言
void findMaxMin(int arr[], int n, int *max, int *min);

int main() {
    int i;
    int arr[10] = {5,3,1,6,9,8,2,6,0,7};

    i = arr[10];

    int max, min;
    // 最大値と最小値を見つける関数を呼び出す
    findMaxMin(arr, 10, &max, &min);

    // 結果を出力
    printf("最大値: %d\n", max);
    printf("最小値: %d\n", min);

    return 0;
}

// 配列の最大値と最小値を見つける関数
void findMaxMin(int arr[], int n, int *max, int *min) {
    *max = arr[0];
    *min = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > *max) {
            *max = arr[i];
        }
        if (arr[i] < *min) {
            *min = arr[i];
        }
    }
}
