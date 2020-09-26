#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct date{
int day;
int month;
int year;
};
struct Employee{
int Employeeid;
char name[20];
char address[40];
int salary;
struct date birth;
struct date joining;

};
///////////////////////

int * change(char * arr){
    char new[10];
    for(int i=0;i<10;i++){
        new[i]=arr[i];
    }
    int *ptr=(int *)malloc(sizeof(int)*10);
    char *piece = strtok(new,"/");
    int cnt=0;
    while(piece != NULL){
        ptr[cnt]=atoi(piece);
        cnt++;
        piece= strtok(NULL,"/");
    }
return(ptr);
}


int main(){
    struct Employee e;
    char dob[10];
    char joining[10];
    printf("Enter employee id\n");
    scanf("%d",&e.Employeeid);
    getchar();
    printf("Enter employee name\n");
    gets(&e.name);
    printf("Enter the address of employee\n");
    gets(&e.address);
    printf("Enter the salary\n");
    scanf("%d",&e.salary);
    printf("Enter DOB in DD/MM/YYYY\n");
    scanf("%s",&dob);
    int *p =change(dob);
   // printf("%d %d %d\n",p[0],p[1],p[2]);
   e.birth.day=p[0];
   e.birth.month=p[1];
   e.birth.year=p[2];
   free(p);
   p=NULL;

    printf("Enter Joining Date in DD/MM/YYYY\n");
    scanf("%s",&joining);

    p =change(joining);
   // printf("%d %d %d\n",p[0],p[1],p[2]);
    e.joining.day=p[0];
    e.joining.month=p[1];
    e.joining.year=p[2];
    free(p);
    p=NULL;

    ////////////////////
    //Printing Structure Test Code
    ///////////////////
    //printf("%d\n",e.Employeeid);
    //printf("%s\n",e.name);
    //printf("%s\n",e.address);
    //printf("%d\n",e.salary);
    //printf("%d/%d/%d\n",e.birth.day,e.birth.month,e.birth.year);
    //printf("%d/%d/%d\n",e.joining.day,e.joining.month,e.joining.year);

    printf("Person age while joining compant %d Years\n",(e.joining.year)-(e.birth.year));
   //error printf("Experience in Month %d",((2020-e.joining.year)*12)+e.joining.month-9);





return 0;
}
