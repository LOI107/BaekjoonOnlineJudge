/*

< 기본사항 / 내 소스 >
- 시간 제한(1 초 / 0 MS)
- 메모리 제한(128 MB / 1984 KB)
- 문제를 푼 전원의 정답 비율(75.950 %)

< 문제 >
자연수 N개를 주면 합을 구하는 프로그램을 작성하시오.

< 입력 >
입력의 첫 줄에는 테스트 케이스의 개수 T(1 ≤ T ≤ 10)가 주어진다. 
각 테스트 케이스는 첫 줄에 자연수의 개수 N(1 ≤ N ≤ 100)이 주어지고, 그 다음 줄에는  N개의 자연수가 주어진다. 
각각의 자연수 사이에는 하나씩의 공백이 있다.

< 출력 >
각 테스트 케이스에 대해서 주어진 자연수의 합을 한 줄에 하나씩 출력한다.

< 출처 >
ACM-ICPC > Regionals > Asia > Korea > Nationwide Internet Competition > Asia Regional - Daejeon Nationalwide Internet Competition 2003 PA번

*/

#include <iostream>

using namespace std;

int main(void)
{
	int case_num, natural_num, num; // 케이스 개수와 케이스별 자연수 개수, 각각의 자연수

	cin >> case_num;

	for (int i = 0; i < case_num; i++)
	{
		int sum = 0;

		cin >> natural_num;

		for (int j = 0; j < natural_num; j++)
		{
			cin >> num;

			sum += num;
		}

		cout << sum << endl;
	}		
}