/*

< 기본사항 / 내 소스 >
- 시간 제한(1 초 / 4 MS)
- 메모리 제한(256 MB / 3800 KB)
- 문제를 푼 전원의 정답 비율(62.176 %)

< 문제 >
수 N개가 주어졌을 때, N개의 합을 구하는 프로그램을 작성하시오.

< 입력 >
첫째 줄에 테스트 케이스의 개수 T가 주어진다. 각 테스트 케이스는 한 줄로 이루어져 있으며, 
N(1 ≤ N ≤ 100)개의 수가 공백으로 구분되어서 주어진다. 입력으로 주어지는 수는 10,000보다 작거나 같은 자연수이다. 
또, 0으로 시작하는 수는 주어지지 않는다.

< 출력 >
각 테스트 케이스마다 입력받은 수 N개의 합을 한 줄에 하나씩 입력받은 순서대로 출력한다.

*/

#include <iostream>

using namespace std;

int main(void)
{
	int case_num, num, sum = 0;

	cin >> case_num;

	for (int i = 0; i < case_num; i++)
	{
		sum = 0;

		while (cin >> num)
		{
			if (cin.peek() == '\n') // 한 줄 입력을 받은 후 enter키가 입력되면 버퍼에 들어가있는 것을 확인하고 다음 줄로 넘어감
			{
				sum += num;
				break;
			}
			
			sum += num;
		}

		cout << sum << endl;
	}
}