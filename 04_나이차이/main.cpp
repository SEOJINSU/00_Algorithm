#include <iostream>

using namespace std;

/*
 *
 * 나이 차이.
 * N명의 나이가 입력됩니다. 이 N명의 사람 중 가장 나이차이가 많이 나는 경우는 몇 살일까요?
 * 최대 나이 차이를 출력하는 프로그램을 작성하세요.
 *
 * 첫 줄에 자연수 N이 입력되고, 그 다음 줄에 N개의 나이가 입력된다.
 * 첫 줄에 최대 나이차이를 출력함.
 *
 * example 
 * - input
 * 10
 * 13 15 34 23 45 65 33 11 26 42
 *
 * - output
 *   54 
 *
 * */


int main(void)
{
    int n, i, a, min = 2147000000, max = -2147000000;
    
    cin >> n;
    for(i=0; i<n; i++)
    {
	cin >> a;

	if(a > max)
	{
	    max = a;
	}
	if(a < min)
	{
	    min = a;
	}
    }
    cout << max-min;

    return 0;
}




