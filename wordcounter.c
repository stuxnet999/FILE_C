#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct word
{
	int q;
};
int main()
{
	
	FILE *in;
	in = fopen("word.dat","w");
	char a[100];
	int i;
	int count=0;
	fgets(a, 100, stdin);
	for (i=0; i<strlen(a); i++)
	{
		if (a[i] == ' ')
		{
			count = count+1;
		}
	}
	count = count +1;
	struct word c = {count};
	fwrite(&c, sizeof(struct word),1, in);
	if (fwrite!=0)
	{
		printf("Input Successful!\n");
	}
	return 0;
}
