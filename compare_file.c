/*5 Write a C program to compare two files.*/
#include<stdio.h>
FILE* create_file(char*);
void file_to_console(FILE*);
int file_comp(FILE*,FILE*,char*,char*);
int main(){
	char str1[150],str2[150],name1[10],name2[10];
	printf("enter the file name 1 with .txt/.c\n");
	scanf("%s",name1);
	printf("enter the file name 2 with .txt/.c\n");
	scanf("%s",name2);
	FILE *f1=create_file(name1);
	FILE *f2=create_file(name2);
	file_to_console(f1);
	file_to_console(f2);
	printf("%s",file_comp(f1,f2,str1,str2)?"same":"not-same");


	return 0;
}
FILE* create_file(char *n){
	FILE *fp=fopen(n,"r+");
	
	return fp;
}
int file_comp(FILE *a,FILE *b,char *p,char *q){
	
	int i;
	fgets(p,150,a);
	fgets(q,150,b);
	for(i=0;p[i]!='\0';i++){
		if(p[i]==q[i])
		continue;
		else
		return 0;
		
	
	}
	return 1;
	

}

void file_to_console(FILE *t){
	
	char w[150];
	fgets(w,150,t);
	
	printf("from file:%s\n",w);
	return;
}



