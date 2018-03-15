/*

< 기본사항 / 내 소스 >
- 시간 제한(2 초 / 0 MS)
- 메모리 제한(128 MB / 1988 KB)
- 문제를 푼 전원의 정답 비율(60.435 %)

< 문제 >
배열을 정렬하는 것은 쉽다. 수가 주어지면, 그 수의 각 자리수를 내림차순으로 정렬해보자.

< 입력 >
첫째 줄에 정렬하고자하는 수 N이 주어진다. N은 1,000,000,000보다 작거나 같은 자연수이다.

< 출력 >
첫째 줄에 자리수를 내림차순으로 정렬한 수를 출력한다.

< 알고리즘 분류 >
- 정렬

*/

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <functional>

using namespace std;

int main(void)
{
	int i = 0;
	char num[20];

	while (((num[i++] = getchar()) != EOF) && (num[i - 1] != '\n')); // getchar를 통해 한 글자씩 입력받아 배열에 저장

	sort(num, num + i - 1, greater<char>()); // 내림차순 정렬

	for (int j = 0; j < i - 1 ; j++)
		cout << num[j];

	cout << endl;
}