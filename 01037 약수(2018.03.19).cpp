/*

< 기본사항 / 내 소스 >
- 시간 제한(2 초 / 0 MS)
- 메모리 제한(128 MB / 1988 KB)
- 문제를 푼 전원의 정답 비율(46.292 %)

< 문제 >
양수 A가 N의 진짜 약수가 되려면, N이 A의 배수이고, A가 1과 N이 아닐 때이다. 
어떤 수 N의 진짜 약수가 모두 주어질 때, N을 구하는 프로그램을 작성하시오.

< 입력 >
첫째 줄에 N의 진짜 약수의 개수가 주어진다. 이 개수는 50보다 작거나 같은 자연수이다. 둘째 줄에는 N의 진짜 약수가 주어진다. 
1,000,000보다 작거나 같고, 2보다 크거나 같은 자연수이고, 중복되지 않는다.

< 출력 >
첫째 줄에 N을 출력한다. N은 항상 32비트 부호있는 정수로 표현할 수 있다.

< 알고리즘 분류 >
- 수학

*/

#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{	
	int real_divisor_num; // 진짜 약수의 개수
	int real_divisor[50];

	cin >> real_divisor_num;

	for (int i = 0; i < real_divisor_num; i++)
		cin >> real_divisor[i];

	sort(real_divisor, real_divisor + real_divisor_num); // 진짜 약수의 배열을 오름차순으로 정렬
	
	if (real_divisor_num == 1) // 진짜 약수가 하나일 경우
		cout << real_divisor[0] * real_divisor[0] << endl;

	else cout << real_divisor[0] * real_divisor[real_divisor_num - 1] << endl; // 진짜 약수가 여러 개일 경우
}