#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int k , n;
    printf("\nEnter k: \n");  //shift input
    scanf ("%d", &k);
    printf("\nEnter n: \n");  //shift input
    scanf ("%d", &n);

    int a[100];

	printf("\nEnter %d elements: \n", k);    //elements input
	for (int i = 0; i < k; i++)
    {
		printf("x[%d] = ", i + 1);
		scanf("%d", &a[i]);
	}
	for (int i = 0; i < k; i++)   //elements output
    {
        printf("%d\t",a[i]);
    }
    n %= k;
	for (int j = 1; j <= n; j++)  //shifting
    {
        int t=a[0];
        for (int i = 0; i < k - 1; i++)
        {
        a[i]=a[i + 1];
        }
        a[k - 1]=t;
    }
    printf("\n");
    for (int i = 0; i < k; i++)
		printf("%d\t",a[i]);
}
