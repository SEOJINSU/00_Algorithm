#include <iostream>

using namespace std;

/**
 *
 *  03 진약수의 합
 *  첫줄에 자연수 N이 주어지면 N의 진약수의 합을 구하시오.
 *  20 -> 1 + 2 + 4 + 5 +10
 *
 */

int main(void)
{
    int n,i,sum=1;
    cin >> n;

    // 진약수는 원래 약수중 자기자신을 제외한 약수이다. 따라서 초기값은 무조건 1 이다.
    cout << sum;

    for(i=2; i<n; i++)
    {
	if(n%i == 0)
	{
	    sum += i;
	    cout << " + " << i;
	}
    }
    cout << " = " << sum << endl;

    return 0;
}
