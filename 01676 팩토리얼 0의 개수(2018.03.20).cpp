/*

< 기본사항 / 내 소스 >
- 시간 제한(2 초 / 0 MS)
- 메모리 제한(128 MB / 1984 KB)
- 문제를 푼 전원의 정답 비율(47.467 %)

< 문제 >
N!에서 뒤에서부터 처음 0이 아닌 숫자가 나올 때까지 0의 개수를 구하는 프로그램을 작성하시오.

< 입력 >
첫째 줄에 N이 주어진다. (0 ≤ N ≤ 500)

< 출력 >
첫째 줄에 구한 0의 개수를 출력한다.

*/

#include <iostream>

using namespace std;

int main(void)
{	
	int num, num_5 = 0;

	cin >> num;

	for (int i = 1; i <= num; i++)
	{
		int temp = i; // i의 값을 변화시키지 않기 위해서

		while (1) 
		{
			if (temp % 5 == 0) // 해당 수가 포함하고 있는 모든 5의 개수를 계산
			{
				num_5++;
				temp = temp / 5;
			}

			else break;
		}
	}

	cout << num_5 << endl; // 5와 2가 곱해지면 10이 되어 0이 발생하므로 0의 개수와 5의 개수는 동일
}