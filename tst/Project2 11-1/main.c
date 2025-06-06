#include<stdio.h>
#include <time.h>


int main()
{
    clock_t start, end;       // 시작과 끝 시간 저장용 변수
    double cpu_time_used;     // 경과 시간 (초) 저장용 변수

    start = clock();          // 현재 CPU 시간을 시작 시간으로 저장

    int i = 0;
    // 예시 작업: 시간이 조금 걸리는 루프 (시간 측정을 위한 더미 작업)
    while (i < 100000)
    {
  
        printf("으히히힣 %d\n", i);
        i = i + 1;
    }

    end = clock();            // 현재 CPU 시간을 끝 시간으로 저장

    // 경과 시간 계산 (틱 수 차이 / 초당 틱 수)
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;

    printf("작업에 걸린 시간: %.3f초\n", cpu_time_used);  // 결과 출력

    return 0;
}