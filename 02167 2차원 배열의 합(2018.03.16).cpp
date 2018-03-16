/*

< 기본사항 / 내 소스 >
- 시간 제한(2 초 / 744 MS)
- 메모리 제한(128 MB / 2220 KB)
- 문제를 푼 전원의 정답 비율(59.709 %)

< 문제 >
2차원 배열이 주어졌을 때 (i, j) 위치부터 (x, y) 위치까지에 저장되어 있는 수들의 합을 구하는 프로그램을 작성하시오. 
배열의 (i, j) 위치는 i행 j열을 나타낸다.

< 입력 >
첫째 줄에 배열의 크기 N, M(1≤N, M≤300)이 주어진다. 다음 N개의 줄에는 M개의 정수로 배열이 주어진다. 
그 다음 줄에는 합을 구할 부분의 개수 K(1≤K≤10,000)가 주어진다. 
다음 K개의 줄에는 네 개의 정수로 i, j, x, y가 주어진다(i≤x, j≤y).

< 출력 >
K개의 줄에 순서대로 배열의 합을 출력한다. 배열의 합은 32bit-int 범위를 초과하지 않는다.

< 알고리즘 분류 >
- 다이나믹 프로그래밍

*/

#include <iostream>

using namespace std;

int main(void)
{	
	int n, m, case_num;
	int arr[300][300];

	cin >> n >> m;

	for (int a = 0; a < n; a++)
	{
		for (int b = 0; b < m; b++)
			cin >> arr[a][b];
	}

	cin >> case_num;

	int i, j, x, y;

	for (int a = 0; a < case_num; a++)
	{
		int sum = 0;

		cin >> i >> j >> x >> y;

		for (int b = i - 1; b < x; b++) // 해당하는 모든 값을 더하기
		{
			for (int c = j - 1; c < y; c++)
				sum += arr[b][c];
		}

		cout << sum << endl;
	}
}