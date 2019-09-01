
#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "string.h"



char * convert(char * s, int numRows) 
{
	int numSize = 0;
	int len = strlen(s);

	if (numRows <= 1) {
		return s;
	}
		
	char *temp = (char *)malloc(sizeof(char) * (len + 1));
	
	int n = 2 * numRows - 2;

	for (int i = 0; i < numRows; i++)
	{
		for (int j = 0; j < len; j++)
		{
			int k = j % n;
			if (k == i || k == n - i)
			{
				temp[numSize++] = s[j];
			}
		}
	}
	temp[numSize] = '\0';

	return temp;

}


int main()
{
	char A[] = "ABCABCABC";
	char *B;

	B = convert(&A, 3);

	printf("%s \n", B);

	return 0;
	system("PAUSE");
}