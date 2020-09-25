#include <stdio.h>
#include <stdlib.h>

int main()
{
   int array[10]={0};
   void findindex(){
       printf("Index  |  value\n");
   for(int i=0;i<10;i++){

    printf("%d  |  %d\n",i,array[i]);
    }
    printf("---------------------------------------------------------------------------------------------\n");
   }
   int choice=1;
   while(choice!=0){
        printf("\n Enter 9 to continue 0 to exit :: ");
		scanf("%d", &choice);
        printf("0.Exit\n1.Add Number\n2.Delete Number\n3.Find Maximum number\n4.Find Minimum number\n5.Sum of Number\n6.show\n");
        scanf("%d",&choice);

        switch(choice){
            case 1:{
                //findindex();
                int index=0;
                int add=0;
                printf("Enter the index value to add in array\n");
                scanf("%d",&index);
                printf("Enter the value at that index\n");
                scanf("%d",&add);
                array[index]=add;
                continue;

                }
            case 6:{
                findindex();
                continue;

            }
            case 2:{
                //findindex();
                int index=0;
                printf("Enter the index value to delete in array\n");
                scanf("%d",&index);
                array[index]=0;
                continue;

            }
            case 3:{
                //findindex();
                int max=-32768;
                for(int i=0;i<10;i++){
                    if(array[i]>max)
                        max=array[i];
                }
                printf("max element in array is %d\n",max);
                continue;
            }
            case 4:{
              //  findindex();
                int min=32767;
                for(int i=0;i<10;i++){
                    if(array[i]<min)
                        min=array[i];
                }
                printf("min element in array is %d\n",min);
                continue;

            }
            case 5:{
                //findindex();
                int sum=0;
                for(int i=0;i<10;i++){
                    sum=sum+array[i];
                }
                printf("Sum of all numbers is %d\n",sum);
                }
                continue;


                }



   }




 return 0;
}
