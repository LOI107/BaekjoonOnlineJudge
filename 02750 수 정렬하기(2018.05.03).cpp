/*

< 기본사항 / 내 소스 >
- 시간 제한(1 초 / 36 MS)
- 메모리 제한(128 MB / 1988 KB)
- 문제를 푼 전원의 정답 비율(60.508 %)

< 문제 >
N개의 수가 주어졌을 때, 이를 오름차순으로 정렬하는 프로그램을 작성하시오.

< 입력 >
첫째 줄에 수의 개수 N(1 ≤ N ≤ 1,000)이 주어진다. 둘째 줄부터 N개의 줄에는 숫자가 주어진다. 
이 수는 절대값이 1,000보다 작거나 같은 정수이다. 수는 중복되지 않는다.

< 출력 >
첫째 줄부터 N개의 줄에 오름차순으로 정렬한 결과를 한 줄에 하나씩 출력한다.

*/

#include <iostream>
#include <set>

using namespace std;

int main(void)
{
	int caseNum, num;
	set<int> s;

	cin >> caseNum;

	for (int i = 0; i < caseNum; i++)
	{
		cin >> num;
		s.insert(num);
	}

	for (set<int>::iterator i = s.begin(); i != s.end(); i++)
		cout << *i << endl;
}