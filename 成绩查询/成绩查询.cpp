#include<stdio.h>
#include<string.h>
typedef struct student{
	char name[20];
	char gender[20];
	int age;
	int score;
}STU;

int main(){
	int N,i,j,temp,count=0;
	STU student[1000],student_copy[1000];
	scanf("%d",&N);
	for(i=0;i<N;i++){
		scanf("%s %s %d %d",student[i].name,student[i].gender,&student[i].age,&student[i].score); 
	}
	for(i=0;i<N;i++){
		strcpy(student_copy[i].name,student[i].name);
		strcpy(student_copy[i].gender,student[i].gender);
		student_copy[i].age=student[i].age;
		student_copy[i].score=student[i].score;
	}
	for(i=0;i<N-1;i++){
		count=0;
		for(j=0;j<N-i-1;j++){
			if(student[j].score>student[j+1].score){
				temp=student[j].score;
				student[j].score=student[j+1].score;
				student[j+1].score=temp;
			}
			if(student[i].score==student[j].score){
				count++;
			}
			if(count>=2){
				break;
			}
		}
	} 
	if(count>=2){
		for(i=0;i<N;i++){
			printf("%s %s %d %d\n",student_copy[i].name,student_copy[i].gender,student_copy[i].age,student_copy[i].score);
	}
	}
	else{
		for(i=0;i<N;i++){
			printf("%s %s %d %d\n",student[i].name,student[i].gender,student[i].age,student[i].score);
	}
	}
	return 0;
} 
