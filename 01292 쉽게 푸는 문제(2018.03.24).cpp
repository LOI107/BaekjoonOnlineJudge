/*

< 기본사항 / 내 소스 >
- 시간 제한(2 초 / 0 MS)
- 메모리 제한(128 MB / 1984 KB)
- 문제를 푼 전원의 정답 비율(54.441 %)

< 문제 >
동호는 내년에 초등학교를 입학한다. 그래서 동호 어머니는 수학 선행 학습을 위해 쉽게 푸는 문제를 동호에게 주었다.
이 문제는 다음과 같다. 1을 한 번, 2를 두 번, 3을 세 번, 이런 식으로 1 2 2 3 3 3 4 4 4 4 5 .. 이러한 수열을 만들고 
어느 일정한 구간을 주면 그 구간의 합을 구하는 것이다.
하지만 동호는 현재 더 어려운 문제를 푸느라 바쁘기에 우리가 동호를 도와주자.

< 입력 >
첫째 줄에 구간의 시작과 끝을 나타내는 정수 A, B(1≤A≤B≤1,000)가 주어진다. 
즉, 수열에서 A번째 숫자부터 B번째 숫자까지 합을 구하면 된다.

< 출력 >
첫 줄에 구간에 속하는 숫자의 합을 출력한다.

*/

#include <iostream>

using namespace std;

int main(void)
{
	int start, end, index = 0, sum = 0; // 시작과 끝, arr에 저장될 위치와 구간 사이의 합
	int arr[1000]; // 수열을 저장할 배열

	cin >> start >> end;

	for (int i = 1;; i++) // n을 n번 저장하기 위해 앞의 n을 설정
	{
		for (int j = 0; j < i; j++) // n번 저장하기 위한 반복문
		{
			if (index == end) // 배열의 낭비를 막기위해 (end - 1)항까지 저장되면 종료
				break;

			arr[index++] = i;
		}

		if (index == end)
			break;
	}

	for (int i = start - 1; i < end; i++)
		sum += arr[i];

	cout << sum << endl;
}