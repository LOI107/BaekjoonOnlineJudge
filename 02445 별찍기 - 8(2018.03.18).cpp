/*

< 기본사항 / 내 소스 >
- 시간 제한(1 초 / 4 MS)
- 메모리 제한(128 MB / 1988 KB)
- 문제를 푼 전원의 정답 비율(73.808 %)

< 문제 >
예제를 보고 별찍는 규칙을 유추한 뒤에 별을 찍어 보세요.

< 입력 >
첫째 줄에 N (1<=N<=100)이 주어진다.

< 출력 >
첫째 줄부터 2*N-1번째 줄 까지 차례대로 별을 출력한다.

*/

#include <iostream>

using namespace std;

int main(void)
{	
	int n;

	cin >> n;

	for (int i = 0; i < n - 1; i++) // 가장 긴 가운데 줄 위의 부분을 출력
	{
		for (int j = 0; j <= i; j++) // 줄번호만큼 *을 출력
			cout << "*";

		for (int j = 0; j < 2 * (n - i - 1); j++) // (2 * (n - 줄번호))만큼 공백을 출력
			cout << " ";

		for (int j = 0; j <= i; j++) // 줄번호만큼 *을 출력
			cout << "*";

		cout << endl;
	}

	for (int i = 0; i < n; i++) // 가장 긴 가운데 줄을 포함하여 아래 부분을 출력
	{
		for (int j = 0; j < n - i; j++) // (n - 줄번호 + 1)만큼 *을 출력
			cout << "*";

		for (int j = 0; j < 2 * i; j++) // (2 * 줄번호 - 1)만큼 공백을 출력
			cout << " ";

		for (int j = 0; j < n - i; j++) // (n - 줄번호 + 1)만큼 *을 출력
			cout << "*";

		cout << endl;		
	}
}