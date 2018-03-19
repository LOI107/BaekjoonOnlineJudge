/*

< 기본사항 / 내 소스 >
- 시간 제한(1 초 / 0 MS)
- 메모리 제한(128 MB / 1988 KB)
- 문제를 푼 전원의 정답 비율(67.157 %)

< 문제 >
윤정이는 뭐든지 아름다운 것이 좋다고 생각한다. 그래서 윤정이는 사물을 볼 때 자신이 정한 방법으로 아름다운 정도를 평가한다. 
윤정이는 숫자를 볼 때도 이런 아름다운 수의 정도를 따지는데, 윤정이에게 있어서 아름다운 수의 정도는 
그 숫자를 이루고 있는 10진수의 중복되지 않은 digit의 개수를 의미한다.  
예를 들어 122이라는 숫자는 1과 2 라는 2개의 digit으로 이루어져 있으므로 아름다운 정도가 2가 된다.  
윤정이의 방법으로 여러 수들의 아름다운 정도를 알아보자.

< 입력 >
첫째 줄에는 test case T가 입력으로 들어온다. 다음 줄부터는 아름다운 정도를 알고 싶은 숫자 X 가 입력으로 들어온다.(1<=X<=1000000000)

< 출력 >
X의 아름다운 정도를 출력한다.

*/

#include <iostream>
#include <string>

using namespace std;

int main(void)
{	
	int case_num;

	cin >> case_num;

	for (int i = 0; i < case_num; i++)
	{
		int beautiful_degree = 0; // 아름다운 정도
		int digit_num[10]; // 0부터 9까지의 수가 사용되었는지를 확인
		string num;

		cin >> num;

		for (int j = 0; j < 10; j++) // 배열 초기화
			digit_num[j] = 0;

		for (int j = 0; j < num.length(); j++) // 0부터 9까지의 수 중에 사용된 수의 배열을 1로 만듦
			digit_num[num[j] - '0'] = 1;

		for (int j = 0; j < 10; j++) // 아름다운 정도를 확인
		{
			if (digit_num[j] == 1)
				beautiful_degree++;
		}

		cout << beautiful_degree << endl;
	}
}