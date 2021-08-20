/*2 Write a C program to read file contents and display on console.*/
#include<stdio.h>
FILE* create_file(char*);
void file_to_console(FILE*,char*);
int main(){
	char str[100],name[10];
	printf("enter the file name with .txt/.c\n");
	scanf("%s",name);
	FILE *f=create_file(name);
	file_to_console(f,str);
		
	//FILE *fp=fopen(name,"r+");
	//fgets(str,100,fp);
	//printf("%s",str);


	return 0;
}
FILE* create_file(char *n){
	FILE *fp=fopen(n,"r+");
	
	return fp;
}

void file_to_console(FILE *t,char *w){
	fgets(w,50,t);
	printf("from file:%s/n",w);
	return;
}
