#include<stdio.h>

int main(int argc,char *argv[])
{
	FILE *fp;
	int c;
	if(argc != 2)
		{
			printf("please input the file name:\n");
			return -1;
		}

	fp = fopen(argv[1],"r+");

	if(fp == NULL)
		{
			printf("no such file %s",*argv);
			return -1;
		}

	else
		{
			while((c = fgetc(fp)) != EOF)
			fputc(c,stdout);
			fclose(fp);
		}

		return 0;

}
	

