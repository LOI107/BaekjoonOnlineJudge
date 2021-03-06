/*

< 기본사항 / 내 소스 >
- 시간 제한(10 초 - 시간 누적 / 4908 MS)
- 메모리 제한(128 MB / 8260 KB)
- 문제를 푼 전원의 정답 비율(55.376 %)

< 문제 >
N개의 수가 주어졌을 때, 이를 비내림차순으로 정렬하는 프로그램을 작성하시오.
길이가 K인 수열 A가 A1 ≤ A2 ≤ ... ≤ AK-1 ≤ AK를 만족하면, 비내림차순이라고 한다.

< 입력 >
첫째 줄에 수의 개수 N(1 ≤ N ≤ 1,000,000)이 주어진다. 둘째 줄부터 N개의 줄에는 숫자가 주어진다. 
이 수는 절대값이 1,000,000보다 작거나 같은 정수이며, 같은 수가 여러 번 중복될 수도 있다.

< 출력 >
첫째 줄부터 N개의 줄에 비내림차순으로 정렬한 결과를 한 줄에 하나씩 출력한다.

*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	int caseNum, num;
	vector<int> v;

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> caseNum;

	for (int i = 0; i < caseNum; i++)
	{
		cin >> num;
		v.push_back(num);
	}

	sort(v.begin(), v.end());

	for (vector<int>::iterator i = v.begin(); i != v.end(); i++)
		cout << *i << '\n';
}