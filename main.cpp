#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	int mas[100][100];
	int n,m;
	
	printf("Enter the number of rows: ");
	scanf("%i",&n);
	printf("Enter the number of columns: ");
	scanf("%i",&m);
	
	srand(time(NULL));
	
	for(int j=0; j<n; j++)
	{
		for(int i=0; i<m; i++)
		{
			mas[j][i]=rand()%9+(-2);
		}
	}
	
	for(int j=0; j<n; j++)
	{
		for(int i=0; i<m; i++)
		{
			printf("%7i",mas[j][i]);
		}
		printf("\n");
	}
}
