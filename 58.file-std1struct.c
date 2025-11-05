//Program to write the details of a student in a file named 'std.txt' and read it.
#include<stdio.h>
struct student{
	char name[30];
	int roll;
};
int main()
{
	struct student s;
	FILE *fp;
	//Writing record.
	fp=fopen("std.txt","w");
	if(fp==NULL){
		printf("Error creating file.\a");
		return 0;
	}
	printf("Enter details of a student(Name, Roll no.): ");
	scanf("%s %d", s.name, &s.roll);
	fwrite(&s, sizeof(s), 1, fp);
	fclose(fp);
	
	//Reading record.
	fp=fopen("std.txt", "r");
	if(fp==NULL){
		printf("Error opening file.\a");
		return 0;
	}
	fread(&s, sizeof(s), 1, fp);
	printf("Name\t\tRoll\n");
	printf("--------------------\n");
	printf("%s\t\t %d",s.name,s.roll);
	fclose(fp);	
}
