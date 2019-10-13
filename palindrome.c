#include<stdio.h>
int main()
{
	int num, orign , rem = 0 , rev = 0 ;
	printf("Enter any number :\n ");
	scanf("%d", &num);
	orign = num;
	while (num!= 0)
	{
	rem = num % 10;
	rev = rev * 10 + rem;
	num = num / 10;
	}
	printf("Reversed Number : %d\n", rev);
	printf("Original Number : %d\n", orign);
	if(orign == rev)
		printf("%d is a palindrome \n",orign);
	else
		printf("%d is not a palindrome \n",orign);
return 0;
}

