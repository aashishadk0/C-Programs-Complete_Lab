//Programt to write the line of text in a file named 'file.txt' and read it.
#include<stdio.h>
#include<string.h>
int main()
{
	char txt[500],newtxt[500];
	FILE *fp;
	
	//writing on file.
	fp = fopen("file.txt","w");
	if(fp==NULL){
		printf("Error on creating file.");
		return 0;
	}
	printf("Enter your text: \n");
	gets(txt);
	fwrite(txt, sizeof(char), strlen(txt), fp);
	fclose(fp);
	
	//Reading from a file.
	fp = fopen("file.txt", "r");
	if(fp==NULL){
		printf("File not found!");
		return 0;
	}
	fread(newtxt, sizeof(char), strlen(txt), fp);
	printf("\n...Displaying the content of 'file.txt'....\n\t");
	puts(newtxt);
	fclose(fp);
	return 0;	
}
