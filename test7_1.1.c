#define _CRT_SECURE_NO_WARNINGS 1

void print(int m)
{
	if (m > 9)
	{
		print(m / 10);
	}
	printf("%d ", m % 10);
}