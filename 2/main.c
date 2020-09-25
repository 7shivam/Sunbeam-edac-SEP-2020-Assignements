#include<stdio.h>
#include<stdlib.h>

//This function is simulation of strcpy()
void stringcpy(char *dest,char *src){
    int i;
    for(i=0;src[i]!='\0';i++){
        dest[i]=src[i];
    }
    dest[i]='\0';

}

//This function is simulation of strcat()
void stringadd(char *dest,char *src){
    int i=0;
    while(dest[i]!='\0'){
        i++;
    }
    dest[i]=' ';
    for(int j=0;src[j]!='\0';j++){
        dest[i]=src[j];
        i++;
    }
    dest[i]='\0';
}
//This function is simulation of strrev()
void stringrev(char *str){
    int i=0;
    while(str[i]!='\0'){
        i++;
    }
    char *p=(char *)malloc(sizeof(char)*i);
    i=i-1;
    int j=0;
    for(i,j;i>0;i--,j++){
        p[j]=str[i];
    }
    p[j]='\0';
    stringcpy(str,p);
}


//This function is simulation of strcmp()
int stringcmp(char *a,char *b){
    int i=0;
    while(1){
        if(a[i]==b[i]){
                i++;
            continue;
        }
        else if(a[i]>b[i]){
            return 1;
        }
        else{
            return -1;
        }

        i++;
}
return 0;
}


int main(){
    char arr1[300]="ABCDe\0";
    char arr2[100]="ABCDE\0";
    //stringcpy(&arr2,&arr1);
    //printf("Source-> %s\nDestination-> %s\n",arr1,arr2);
   // stringadd(&arr1,&arr2);
    //printf("%s",arr1);
    //printf("%d",stringcmp(&arr1,&arr2));
    stringrev(&arr1);
    printf("%s",arr1);
return 0;
}
