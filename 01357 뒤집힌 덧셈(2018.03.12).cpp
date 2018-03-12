/*

< 기본사항 / 내 소스 >
- 시간 제한(2 초 / 0 MS)
- 메모리 제한(128 MB / 2048 KB)
- 문제를 푼 전원의 정답 비율(44.519 %)

< 문제 >
어떤 수 X가 주어졌을 때, X의 모든 자리수가 역순이 된 수를 얻을 수 있다. Rev(X)를 X의 모든 자리수를 역순으로 만드는 함수라고 하자. 
예를 들어, X=123일 때, Rev(X) = 321이다. 그리고, X=100일 때, Rev(X) = 1이다.
두 양의 정수 X와 Y가 주어졌을 때, Rev(Rev(X) + Rev(Y))를 구하는 프로그램을 작성하시오

< 입력 >
첫째 줄에 수 X와 Y가 주어진다. X와 Y는 1,000보다 작거나 같은 자연수이다.

< 출력 >
첫째 줄에 문제의 정답을 출력한다.

< 알고리즘 분류 >
- 수학

*/

#include <iostream>
#include <cstdlib>
#include <string>
#include <algorithm>
#include <sstream>

using namespace std;

int main()
{	
	string x, y;

	cin >> x >> y;

	reverse(x.begin(), x.end()); // Rev를 적용해서 자리수 역순으로 만들기
	reverse(y.begin(), y.end());

	int sum;

	sum = atoi(x.c_str()) + atoi(y.c_str()); // string을 int형으로 바꾼 뒤 더하기

	stringstream temp;

	temp << sum; // int형을 stringstream으로 바꾸어서 저장

	string result;

	result = temp.str(); // stringstream을 string으로 저장

	reverse(result.begin(), result.end()); // Rev를 적용해서 자리수 역순으로 만들기
	
	cout << atoi(result.c_str()) << endl; // string일 경우 앞에 0이 출력될 수 있으므로 최종적으로 int로 바꾸고 출력
}