#include <stdio.h>

// 양력에서 음력으로 변환하는 함수
void yangToLunar(int year, int month, int day) {
    int koreanYear;  // 태음력 연도
    int koreanMonth; // 태음력 월
    int koreanDay;   // 태음력 일

    // 양력에서 음력 변환 근사치 계산 (간단한 예시)
    koreanYear = year - 2333; // 예시로 2333년을 기준으로 함
    koreanMonth = month;
    koreanDay = day;

    // 결과 출력
    printf("양력: %d년 %d월 %d일\n", year, month, day);
    printf("음력: %d년 %d월 %d일\n", koreanYear, koreanMonth, koreanDay);
}

int main() {
    // 양력 날짜 입력 (예시)
    int yangYear, yangMonth, yangDay;

    printf("양력 날짜 입력 (년 월 일): ");
    scanf("%d %d %d", &yangYear, &yangMonth, &yangDay);

    // 양력에서 음력으로 변환
    yangToLunar(yangYear, yangMonth, yangDay);

    return 0;
}
