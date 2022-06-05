#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//int main()
//{
//	char local[] = "Hello GitHub!";
//	char github[] = "#############";
//	int a = 0;
//	int sz = sizeof(local) / sizeof(local[0]);
//	for (a = 0; a <= sz - 2; a++)
//	{
//		github[a] = local[a];
//		github[sz-2] = local[sz-2];
//		if (a == sz - 2)
//		{
//			printf("%s", github);
//		}
//	}
//	return 0;
//}


int main()
{
	char local[] = "Hello GitHub!";
	char github[] = "#############";
	int left = 0;
	int right = strlen(local)-1;
	while (left <= right)
	{
		github[left] = local[left];
		github[right] = local[right];
		left++;
		right--;
	}
	printf("%s", github);
	return 0;
}