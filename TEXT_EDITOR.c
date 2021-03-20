#include<stdio.h>
#include<conio.h>



// C program to make a Text Editor

// Made in India with Love by Snehomoy Maitra

// Don't forget to checkout snehomoy100 on github.com



main () {
	
	
	FILE *fp;
	char in,fn[35],cho;
	
	
	printf("\n\n\t\t\tTEXT EDITOR\n\n");
	printf("\n\n\t\tEnter your file name : ");
	gets(fn);
	printf("\n\nWhat you want to do write:w/read:r/add:a : ");
	scanf("%c",&cho);	
	
	
	if(cho=='r')
	{
		
		fp=fopen(fn,"r");
		
		printf("\n\n\n\t\t\tREADING MODE\n\n");
		
		while((in=getc(fp)!=EOF))
		{
			printf("%c",in);
		}
	}
	
	
	
	else if(cho=='w')
	{
		fp=fopen(fn,"w");
		
		printf("\n\n\n\t\tWRITTING MODE\n\n");
		printf("\n\n\n\t\t\t For saving the file PRESS Ctrl+Z");
		
		while((in=getchar()) != EOF)
		{
			putc(in,fp);
		}
		
		fclose(fp);
	}
	
	
	
	else if(cho=='a')
	{
		fp=fopen(fn,"a");
		
		printf("\n\n\n\t\tADDING MODE\n\n");
		printf("\n\n\n\t\t\t For saving the file PRESS Ctrl+Z");
		
		while((in=getchar()) != EOF)
		{
			putc(in,fp);
		}
		
		fclose(fp);
	}
	
	
	
	getch();
	
	return 0;
	
	
}
