#include <stdio.h>

using namespace std;
/*
 *
 * 첫 줄에 주민등록증 번호가 입력됩니다.
 *
 * 첫 줄에 나이와 성별을 공백을 구분으로 출력하세요.
 * 성별은 남자는 M / 여자는 W
 * 
 * 780316-2376152
 * 42 W
 *
 * 061102-3575393
 *
 * */

int main(void)
{
    unsigned char a[20];
    unsigned int age, year;

    // Input
    scanf("%s", (unsigned char*)&a);
    
    if(a[7] == '1' || a[7] == '2')
    {
	year = 1900 +  ((a[0] - 48) * 10 + (a[1]-48));
    }
    else
    {
	year = 2000 + ((a[0] - 48) * 10 + (a[1]-48));
    }
    age = 2021 - year + 1;

    printf("%d ", age);

    if(a[0] == '1' || a[0] == '3')
    {
	printf("M\n");
    }
    else
    {
	printf("W\n");
    }

    return 0;
}



