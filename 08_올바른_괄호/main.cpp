#include <stdio.h>

/**
 *
 * 괄호가 입력되면 올바른 괄호면 YES
 * 올바르지 않으면 NO를 출력하는 프로그램을 만드시오.
 * (())() -> YES
 * (()())))은 -> NO
 *
 */

int main(void)
{
    int i, cnt=0;
    char input_arr[100]={0,};

    fgets(input_arr, sizeof(input_arr), stdin);

    for(i=0; input_arr[i] != '\0'; i++)
    {
	if(cnt < 0)
	{
	    cnt--;
	    break;
	}
	else
	{
	    if(input_arr[i] == '(')
	    {
		cnt++;
	    }
	    else if(input_arr[i] == ')')
	    {
		cnt--;
	    }

	    if(cnt < 0) break;
	}
    }
    
    if(cnt == 0)
    {
	printf("YES\n");
    }
    else
    {
	printf("NO\n");
    }
    return 0;
}


