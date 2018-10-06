#include <stdio.h>
int main()
{
    char a1[100], b2[100], i, j;
	printf("Enter first string: ");
    scanf("%s", a1);
	printf("Enter second string: ");
    scanf("%s", b2);
    for(i = 0; a1[i] != '\0'; ++i); //length of a1 in i 
	 for(j = 0; b2[j] != '\0'; ++j, ++i)
     a1[i] = b2[j];
	 a1[i] = '\0';
    printf("After concatenation: %s", a1);
	return 0;
}
