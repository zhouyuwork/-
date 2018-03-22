#include<stdio.h>

int main(int argc,char*argv[])
{
	char ch;

	if(argc != 3)      //若输入字符串个数不等于3
		{
			printf("请正确输入:\n(格式：copy 原文件 目标文件)\n");
			return -1;
		}

	FILE *Psource = fopen(argv[1],"r");    //将原文件以只读的方式打开
	FILE *Pdestina = fopen(argv[2],"w");   //将目标文件以只写的方式打开

	if(Psource == NULL || Pdestina == NULL)  //如果文件指针为空,则不存在两文件其中之一或都不存在
		{
			printf("文件不存在！请重新输入：\n");
			return -1;
		}
	
	while((ch = fgetc(Psource)) != EOF) //读取原文件的内容
		{
			fputc(ch,Pdestina);         //写入目标文件
		}

   //关闭文件
	fclose(Psource);
	fclose(Pdestina);

	printf("拷贝文件成功！\n");

	return 0;

}
