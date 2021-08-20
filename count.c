/* 4 write a C program to count characters, words and lines in a text file.*/
#include<stdio.h>
FILE* create_file(char*);
void file_to_console(FILE*);
int* file_count(FILE*,int*);
int main(){
	char str[100],name[10],s[50];
	int count[3]={0};
	printf("enter the file name with .txt/.c\n");
	scanf("%s",name);
	FILE *f=create_file(name);
	file_to_console(f);
	file_count(f,count);
	rewind(f);
	file_to_console(f);
	printf("chars words lines\n%d %d %d",count[0],count[1],count[2]);	
	//FILE *fp=fopen(name,"r+");
	//fgets(str,100,fp);
	//printf("%s",str);


	return 0;
}
FILE* create_file(char *n){
	FILE *fp=fopen(n,"a+");
	
	return fp;
}
int* file_count(FILE *b,int *m){
	
	int i;
	char str[150];
	fgets(str,150,b);
	for(i=0;str[i]!='\0';i++){
		if((str[i]==' ')||(str[i]=='\n')||(str[i]=='.')){/*if space, '.' , ',' ,'\n' word,line are detected and rest considered as valid chars */
		if(str[i]!=' ')
		*(m+1)+=1;
		else
		*(m+2)+=1;
		
		}
	
	else
	*m+=1;
	}
	
	if(((*m)||(*(m+1)))&&(*(m+2)==0))
		*(m+2)=*(m+1)=1;
	return m;

}

void file_to_console(FILE *t){
	
	char w[150];
	fgets(w,150,t);
	
	printf("from file:%s\n",w);
	return;
}




