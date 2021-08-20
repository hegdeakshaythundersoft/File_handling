/* 1 Write a C program to create a file and write contents, save and close the file.*/
#include<stdio.h>
FILE* create_file();
void file_copy_str(FILE*,char*);
void file_to_console(FILE*,char*);
int main(){
	char name[10],str[100];
	printf("enter the file name with .txt/.c\n");
	scanf("%s",name);
	
	
	FILE *fp=create_file(name);/*file creation or read*/
	file_copy_str(fp,str);/*copy to str*/
	file_to_console(fp,str);/*using str print on console*/
	
	fclose(fp);
	

	return 0;
}
FILE* create_file(char *n){
	FILE *fp=fopen(n,"w+");
	
	return fp;
}
void file_copy_str(FILE *p,char *s){
	
	printf("Enter the desired data to put in file : string input\n");
	scanf("%s",s);
	fputs(s,p);
	return;
}


void file_to_console(FILE *t,char *w){
	fgets(w,50,t);
	printf("from file:%s/n",w);
	return;
}
