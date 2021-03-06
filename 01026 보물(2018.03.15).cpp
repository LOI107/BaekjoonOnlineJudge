/*

< 기본사항 / 내 소스 >
- 시간 제한(2 초 / 0 MS)
- 메모리 제한(128 MB / 1988 KB)
- 문제를 푼 전원의 정답 비율(60.758 %)

< 문제 >
옛날 옛적에 수학이 항상 큰 골칫거리였던 나라가 있었다. 이 나라의 국왕 김지민은 다음과 같은 문제를 내고 큰 상금을 걸었다.
길이가 N인 정수 배열 A와 B가 있다. 다음과 같이 함수 S를 정의하자.

S = A[0]*B[0] + ... + A[N-1]*B[N-1]

S의 값을 가장 작게 만들기 위해 A의 수를 재배열하자. 단, B에 있는 수는 재배열하면 안된다.
S의 최솟값을 출력하는 프로그램을 작성하시오.

< 입력 >
첫째 줄에 N이 주어진다. 둘째 줄에는 A에 있는 N개의 수가 순서대로 주어지고, 셋째 줄에는 B에 있는 수가 순서대로 주어진다. 
N은 50보다 작거나 같은 자연수이고, A와 B의 각 원소는 100보다 작거나 같은 음이 아닌 정수이다.

< 출력 >
첫째 줄에 S의 최솟값을 출력한다.

< 힌트 >
A를 {1, 1, 0, 1, 6}과 같이 재배열하면 된다.

< 알고리즘 분류 >
- 정렬
- 탐색

*/

#include <iostream>
#include <algorithm>
#include <functional>

using namespace std;

int main()
{
	int num, mul_sum = 0;
	int a[50], b[50], c[50];

	cin >> num;

	for (int i = 0; i < num; i++)
		cin >> a[i];

	for (int i = 0; i < num; i++)
	{
		cin >> b[i];
		c[i] = b[i];
	}

	sort(a, a + num); // a를 오름차순 정렬

	sort(c, c + num, greater<int>()); // b를 재배열하면 안 된다고 했으므로 c로 옮겨서 내림차순으로 재배열

	for (int i = 0; i < num; i++) // a의 가장 작은 수부터 늘려가는 것과 b의 가장 큰 수부터 줄여가는 것을 곱하면 최소값이 도출
		mul_sum += a[i] * c[i];

	cout << mul_sum << endl;
}