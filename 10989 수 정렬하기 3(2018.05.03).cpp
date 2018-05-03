/*

< 기본사항 / 내 소스 >
- 시간 제한(5 초 / 1608 MS)
- 메모리 제한(8 MB / 1984 KB)
- 문제를 푼 전원의 정답 비율(24.226 %)

< 문제 >
N개의 수가 주어졌을 때, 이를 오름차순으로 정렬하는 프로그램을 작성하시오.

< 입력 >
첫째 줄에 수의 개수 N(1 ≤ N ≤ 10,000,000)이 주어진다. 둘째 줄부터 N개의 줄에는 숫자가 주어진다. 
이 수는 10,000보다 작거나 같은 자연수이다.

< 출력 >
첫째 줄부터 N개의 줄에 오름차순으로 정렬한 결과를 한 줄에 하나씩 출력한다.

< 알고리즘 분류 >
- 정렬

*/

#include <iostream>

using namespace std;

int main(void)
{
	int caseNum, num;
	int arr[10005]; // 숫자마다의 개수를 파악

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> caseNum;

	for (int i = 1; i <= 10000; i++)
		arr[i] = 0;

	for (int i = 1; i <= caseNum; i++) // 해당하는 수의 배열을 증가
	{
		cin >> num;
		arr[num]++;
	}	

	for (int i = 1; i <= 10000; i++)
	{
		for (int j = 0; j < arr[i]; j++)
			cout << i << '\n';
	}
}