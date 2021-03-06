/*

< 기본사항 / 내 소스 >
- 시간 제한(2 초 / 0 MS)
- 메모리 제한(128 MB / 1988 KB)
- 문제를 푼 전원의 정답 비율(45.038 %)

< 문제 >
시작 -> 실행 -> cmd를 쳐보자. 검정 화면이 눈에 보인다. 여기서 dir이라고 치면 그 디렉토리에 있는 서브디렉토리와 파일이 모두 나온다. 
이 때 원하는 파일을 찾으려면 다음과 같이 하면 된다.
dir *.exe라고 치면 확장자가 exe인 파일이 다 나온다. "dir 패턴"과 같이 치면 그 패턴에 맞는 파일만 검색 결과로 나온다. 
예를 들어, dir a?b.exe라고 검색하면 파일명의 첫 번째 글자가 a이고, 세 번째 글자가 b이고, 확장자가 exe인 것이 모두 나온다. 
이 때 두 번째 문자는 아무거나 나와도 된다. 예를 들어, acb.exe, aab.exe, apb.exe가 나온다.
이 문제는 검색 결과가 먼저 주어졌을 때, 패턴으로 뭘 쳐야 그 결과가 나오는지를 출력하는 문제이다. 
패턴에는 알파벳과 "." 그리고 "?"만 넣을 수 있다. 가능하면 ?을 적게 써야 한다. 
그 디렉토리에는 검색 결과에 나온 파일만 있다고 가정하고, 파일 이름의 길이는 모두 같다.

< 입력 >
첫째 줄에 파일 이름의 개수 N이 주어진다. 둘째 줄부터 N개의 줄에는 파일 이름이 주어진다. 
N은 50보다 작거나 같은 자연수이고 파일 이름의 길이는 모두 같고 길이는 최대 50이다. 
파일이름은 알파벳과 "." 그리고 "?"로만 이루어져 있다.

< 출력 >
첫째줄에 패턴을 출력하면 된다.

< 알고리즘 분류 >
- 문자열 처리

*/

#include <iostream>
#include <string>

using namespace std;

int main(void)
{	
	int case_num;
	string search_name; // 검색할 때 입력할 패턴을 고려한 파일 이름
	string file_name[50];

	cin >> case_num;

	for (int i = 0; i < case_num; i++)
		cin >> file_name[i];

	for (int i = 0; i < file_name[0].length(); i++)
	{
		bool name_check = true; // 모든 파일 이름의 똑같은 위치에 똑같은 문자가 있는지를 확인

		for (int j = 0; j < case_num - 1; j++)
		{
			if (file_name[j][i] != file_name[j + 1][i]) // 다른 파일의 같은 이름 위치에서 문자가 다를 경우
			{
				name_check = false;
				break;
			}
		}

		if (name_check == true) // 모든 파일의 이름이 같은 위치에서 겹칠 경우
			search_name += file_name[0][i];

		else search_name += "?"; // 파일들의 이름이 같은 위치에서 다를 경우
	}

	cout << search_name << endl;
}