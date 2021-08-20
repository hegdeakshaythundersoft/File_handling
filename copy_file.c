/*6 Write a C program to copy contents from one file to another file.*/
#include<stdio.h>
FILE* create_file(char*);
void file_to_console(FILE*);
int file_copy(FILE*,FILE*,char*,char*);
int main(){
	char str1[150],str2[150],name1[10],name2[10];
	printf("enter the file name 1 with .txt/.c\n");
	scanf("%s",name1);
	printf("enter the file name 2 with .txt/.c\n");
	scanf("%s",name2);
	FILE *f1=create_file(name1);
	FILE *f2=create_file(name2);
	//file_to_console(f1);
	file_to_console(f2);
	printf("%s",file_copy(f1,f2,str1,str2)?"same":"not-same");
	file_to_console(f2);

	return 0;
}
FILE* create_file(char *n){
	FILE *fp=fopen(n,"w+");
	
	return fp;
}
int file_copy(FILE *a,FILE *b,char *p,char *q){
	
	int i;
	fgets(p,150,a);
	//fgets(q,150,b);
	for(i=0;p[i]!='\0';i++){
		q[i]=p[i];
		continue;
	}
	fputs(q,b);
	return 1;
	

}

void file_to_console(FILE *t){
	
	char w[150];
	fgets(w,150,t);
	
	printf("from file:%s\n",w);
	return;
}



