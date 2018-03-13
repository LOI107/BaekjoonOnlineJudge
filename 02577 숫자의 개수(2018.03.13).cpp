/*

< 기본사항 / 내 소스 >
- 시간 제한(1 초 / 0 MS)
- 메모리 제한(128 MB / 2044 KB)
- 문제를 푼 전원의 정답 비율(65.659 %)

< 문제 >
세 개의 자연수 A, B, C가 주어질 때 A×B×C를 계산한 결과에 0부터 9까지 각각의 숫자가 몇 번씩 쓰였는지를 구하는 프로그램을 작성하시오.
예를 들어 A = 150, B = 266, C = 427 이라면 A × B × C = 150 × 266 × 427 = 17037300 이 되고,
계산한 결과 17037300 에는 0이 3번, 1이 1번, 3이 2번, 7이 2번 쓰였다.

< 입력 >
첫째 줄에 A, 둘째 줄에 B, 셋째 줄에 C가 주어진다. A, B, C는 모두 100보다 같거나 크고, 1,000보다 작은 자연수이다.

< 출력 >
첫째 줄에는 A×B×C의 결과에 0 이 몇 번 쓰였는지 출력한다. 
마찬가지로 둘째 줄부터 열 번째 줄까지 A×B×C의 결과에 1부터 9까지의 숫자가 각각 몇 번 쓰였는지 차례로 한 줄에 하나씩 출력한다.

< 출처 >
Olympiad > 한국정보올림피아드시?도지역본선 > 지역본선 2006 > 초등부 2번

< 알고리즘 분류 >
- 구현

*/

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
	int a, b, c;
	int arr[10]; // 0부터 9의 숫자 개수를 저장할 배열
	string str;

	for (int i = 0; i < 10; i++)
		arr[i] = 0;

	cin >> a >> b >> c;

	stringstream s;

	s << a * b * c; // int형을 stringstream형으로 변환

	str = s.str(); // stringstream형을 string형으로 변환

	for (int i = 0; i < str.length(); i++) // 각 자리의 숫자에 해당하는 0부터 9까지 배열의 각각의 숫자 개수를 증가
		arr[str[i] - '0']++;

	for (int i = 0; i < 10; i++)
		cout << arr[i] << endl;
}