/*
 *
 * 자연수 N이 입력되면 1부터 N까지의 수 중 M의 배수합을 출력하는 프로그램을 작성하시오.
 * 
 * # 입력설명
 * 첫 줄에 자연수 N과 M이 차례대로 입렵된다.(3<=M<N<=1000)
 *
 * # 출력설명
 * 첫 줄에 M의 배수합을 출력한다.
 *
 * # 예제
 * 15 3 -> 45 
 *
*/

#include <iostream>

using namespace std;

int main(void)
{
    int n,m,i,sum=0;
    
    cin >> n >> m;

    for(i=1; i<=n; i++)
    {
	if(i%m == 0)
	{
	    sum+=i;
	}
    }

    cout << sum << endl;

    return 0;
}
