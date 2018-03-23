/*

< 기본사항 / 내 소스 >
- 시간 제한(1 초 / 4 MS)
- 메모리 제한(256 MB / 1988 KB)
- 문제를 푼 전원의 정답 비율(80.078 %)

< 문제 >
예제를 보고 별찍는 규칙을 유추한 뒤에 별을 찍어 보세요.

< 입력 >
첫째 줄에 N (1<=N<=100)이 주어진다.

< 출력 >
첫째 줄부터 N번째 줄 까지 차례대로 별을 출력한다.

*/

#include <iostream>

using namespace std;

int main(void)
{
	int n;

	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j < n - i + 1; j++)
			cout << " ";

		for (int j = 1; j < 2 * i; j++)
		{
			if (j % 2 == 1)
				cout << '*';

			else cout << " ";
		}

		cout << endl;
	}
}