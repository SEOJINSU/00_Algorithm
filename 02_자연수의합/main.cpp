#include <iostream>

using namespace std;

/*
 *
 * 자연수의 합
 * 3 7 -> 3 + 4 + 5 + 6 + 7 = 25
 *
 *
 * */

int main(void)
{
    int a,b,i,sum=0;

    // console input a, b
    cin >> a >> b;
    sum = a;

    cout << sum;
    for(i=a+1; i<=b; i++)
    {
	sum += i;
	cout << " + " << i;
    }
    
    cout << " = " << sum << endl;

    return 0;
}
