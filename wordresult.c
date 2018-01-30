#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct word
{
	int q;
};
int main()
{
	FILE *out;
	struct word c;
	out = fopen("word.dat", "r");
	fread(&c, sizeof(struct word),1,out);
	printf("The no.of words are %d\n", c.q);
	return 0;
}
