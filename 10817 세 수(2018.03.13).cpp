/*

< 기본사항 / 내 소스 >
- 시간 제한(1 초 / 0 MS)
- 메모리 제한(256 MB / 1984 KB)
- 문제를 푼 전원의 정답 비율(48.805 %)

< 문제 >
세 정수 A, B, C가 주어진다. 이 때, 두 번째로 큰 정수를 출력하는 프로그램을 작성하시오.

< 입력 >
첫째 줄에 세 정수 A, B, C가 공백으로 구분되어 주어진다. (1 ≤ A, B, C ≤ 100)

< 출력 >
두 번째로 큰 정수를 출력한다.

*/

#include <iostream>

using namespace std;

int main()
{
	int temp;
	int num[3];

	cin >> num[0] >> num[1] >> num[2];

	if (num[0] < num[1]) // 반복해서 가장 큰 수를 오른쪽으로 옮기는 일반적인 정렬 알고리즘을 사용
	{
		temp = num[0];
		num[0] = num[1];
		num[1] = temp;
	}

	if (num[1] < num[2])
	{
		temp = num[1];
		num[1] = num[2];
		num[2] = temp;
	}

	if (num[0] < num[1])
	{
		temp = num[0];
		num[0] = num[1];
		num[1] = temp;
	}

	cout << num[1] << endl;
}