/*

< 기본사항 / 내 소스 >
- 시간 제한(1 초 / 0 MS)
- 메모리 제한(128 MB / 1984 KB)
- 문제를 푼 전원의 정답 비율(48.626 %)

< 문제 >
7개의 자연수가 주어질 때, 이들 중 홀수인 자연수들을 모두 골라 그 합을 구하고, 고른 홀수들 중 최소값을 찾는 프로그램을 작성하시오.

예를 들어, 7개의 자연수 12, 77, 38, 41, 53, 92, 85가 주어지면 이들 중 홀수는 77, 41, 53, 85이므로 그 합은
77 + 41 + 53 + 85 = 256이 되고, 41 < 53 < 77 < 85이므로 홀수들 중 최소값은 41이 된다.

< 입력 >
입력의 첫째 줄부터 일곱 번째 줄까지 한 줄에 하나의 자연수가 주어진다. 주어지는 자연수는 100보다 작다.

< 출력 >
홀수가 존재하지 않는 경우에는 첫째 줄에 -1을 출력한다. 
홀수가 존재하는 경우 첫째 줄에 홀수들의 합을 출력하고, 둘째 줄에 홀수들 중 최소값을 출력한다.

< 출처 >
Olympiad > 한국정보올림피아드시?도지역본선 > 지역본선 2006 > 초등부 1번

*/

#include <iostream>

using namespace std;

int main(void)
{
	int num, leastOddNum, check = 0; // check는 홀수가 있는지 없는지를 판별
	int oddSum = 0;

	for (int i = 0; i < 7; i++)
	{
		cin >> num;

		if (num % 2 == 1) // 홀수일 경우
		{
			oddSum += num;

			if (check == 0) // 최초의 홀수일 경우 최저홀수에 저장 후 check를 1로 바꾸기
			{
				leastOddNum = num;
				check = 1;
			}

			if (num < leastOddNum) // 더 작은 홀수가 있을 경우
				leastOddNum = num;
		}
	}

	if (oddSum == 0) // 홀수가 하나도 없을 경우
		cout << -1 << endl;
	
	else
	{
		cout << oddSum << endl;
		cout << leastOddNum << endl;
	}
}