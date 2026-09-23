/*
없는 숫자 더하기
문제 설명
0부터 9까지의 숫자 중 일부가 들어있는 정수 배열 numbers가 매개변수로 주어집니다. 
numbers에서 찾을 수 없는 0부터 9까지의 숫자를 모두 찾아 더한 수를 return 하도록 solution 함수를 완성해주세요.

제한사항
1 ≤ numbers의 길이 ≤ 9
0 ≤ numbers의 모든 원소 ≤ 9
numbers의 모든 원소는 서로 다릅니다.
*/
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// numbers_len은 배열 numbers의 길이입니다.
int solution(int numbers[], size_t numbers_len) {
    int answer = 0;
    
    int flag[10]={0}; //0부터 9까지의 flag
    for(int i = 0; i < numbers_len; i++)
    {
        flag[numbers[i]] = 1;
    }
    for(int i = 0; i < 10; i++)
    {
        if(flag[i] == 0)
        {
            answer += i;
        }
    }
    return answer;
}