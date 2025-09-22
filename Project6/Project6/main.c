//   int r_valve = rand() % NUM;

//   char a[NUM];
//   char b[NUM];

//   for (int i = 0; i < NUM; i++) {

//   printf("%d , i");   

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM 10

int main() {
    int a[NUM];
    int i;

    // 0~9 초기화
    for (i = 0; i < NUM; i++) {
        a[i] = i;
    }

    // 랜덤 시드 설정
    srand(time(NULL));

    // Fisher–Yates shuffle
    for (i = NUM - 1; i > 0; i--) {
        int j = rand() % (i + 1);   // 0~i 중 하나 선택
        // swap arr[i] <-> arr[j]
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }

    // 결과 출력
    for (i = 0; i < NUM; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
