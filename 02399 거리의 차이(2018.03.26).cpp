/*

< 기본사항 / 내 소스 >
- 시간 제한(2 초 / 92 MS)
- 메모리 제한(128 MB / 1984 KB)
- 문제를 푼 전원의 정답 비율(51.951 %)

< 문제 >
수직선에 n개의 점이 찍혀 있다. 각각의 점의 x좌표가 주어졌을 때, 
n^2개의 모든 쌍에 대해서 거리의 차이를 더한 값을 구하는 프로그램을 작성하시오.
즉, 모든 i, j에 대해서 |x[i] - x[j]|의 합을 구하는 것이다.

< 입력 >
첫째 줄에 n(1≤n≤10,000)이 주어진다. 다음 줄에는 x[1], x[2], x[3], …, x[n]이 주어진다. 
각각은 0 이상 1,000,000,000 이하의 정수이다.

< 출력 >
첫째 줄에 답을 출력한다.

< 알고리즘 분류 >
- 정렬

*/

#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
	long long caseNum, sum = 0;
	long long location[10001];

	cin >> caseNum;

	for (long long i = 0; i < caseNum; i++)
		cin >> location[i];

	for (long long i = 0; i < caseNum; i++)
	{
		for (long long j = 0; j < caseNum; j++)
			sum += abs(location[i] - location[j]);
	}

	cout << sum << endl;
}