/*

< 기본사항 / 내 소스 >
- 시간 제한(1 초 / 28 MS)
- 메모리 제한(128 MB / 1984 KB)
- 문제를 푼 전원의 정답 비율(58.468 %)

< 문제 >
두 자연수 A와 B에 대해서, A의 배수이면서 B의 배수인 자연수를 A와 B의 공배수라고 한다. 
이런 공배수 중에서 가장 작은 수를 최소공배수라고 한다. 예를 들어, 6과 15의 공배수는 30, 60, 90등이 있으며, 최소 공배수는 30이다.
두 자연수 A와 B가 주어졌을 때, A와 B의 최소공배수를 구하는 프로그램을 작성하시오.

< 입력 >
첫째 줄에 테스트 케이스의 개수 T(1 ≤ T ≤ 1,000)가 주어진다. 둘째 줄부터 T개의 줄에 걸쳐서 A와 B가 주어진다. (1 ≤ A, B ≤ 45,000)

< 출력 >
첫째 줄부터 T개의 줄에 A와 B의 최소공배수를 입력받은 순서대로 한 줄에 하나씩 출력한다.

< 알고리즘 분류 >
- 유클리드 호제법

*/

#include <iostream>

using namespace std;

int main(void)
{	
	int input_a, input_b, case_num;
	int GCD; // 최대공약수

	cin >> case_num;

	for (int i = 0; i < case_num; i++)
	{
		cin >> input_a >> input_b;

		int a = input_a; // 나누는 과정을 반복하기 때문에 별도의 변수를 설정
		int b = input_b;

		if (b > a) // a를 b보다 큰 수로 만들기
		{
			int temp;

			temp = a;
			a = b;
			b = temp;
		}

		while (1) // 유클리드 호제법을 사용
		{
			if (a % b == 0) // a가 b로 나뉘어질 경우
			{
				GCD = b;
				break;
			}

			else // a가 b로 나뉘어지지 않으면 a를 b로 나눈 나머지를 저장한 뒤 둘의 위치를 바꿔 a를 다시 b보다 크게 만듬
			{
				a = a % b;

				int temp;

				temp = a;
				a = b;
				b = temp;
			}
		}

		cout << input_a * input_b / GCD << endl; // 최소공배수는 두 수의 곱을 최대공약수로 나눈 수
	}
}