#include <stdio.h>

int main()
{
	int N, i=100, kolvo=0;
		scanf("%d", &N);
    while(i!=1000)
    {
        if(((i%10)+(i/10%10)+(i/100))==N)
            kolvo++;
        i++;
    }
    printf("%d\n", kolvo);
	system("pause");
	return 0;
}