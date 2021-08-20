/* 3 Write a C program to append content to a file.*/
#include<stdio.h>
FILE* create_file(char*);
void file_to_console(FILE*);
void file_append(FILE*,char*);
int main(){
	char str[100],name[10],s[50];
	printf("enter the file name with .txt/.c\n");
	scanf("%s",name);
	FILE *f=create_file(name);
	file_to_console(f);
	file_append(f,s);
	rewind(f);
	file_to_console(f);
		
	//FILE *fp=fopen(name,"r+");
	//fgets(str,100,fp);
	//printf("%s",str);


	return 0;
}
FILE* create_file(char *n){
	FILE *fp=fopen(n,"a+");
	
	return fp;
}
void file_append(FILE *b,char *m){
	
	printf("enter the string to amend the file\n");
	scanf("%s\n",m);
	
	fputs(m,b);

	return;

}
void file_to_console(FILE *t){
	
	char w[150];
	fgets(w,150,t);
	
	printf("from file:%s\n",w);
	return;
}










