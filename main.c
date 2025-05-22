#include<stdio.h>
void insert(int array[],int m){
    printf("Enter Elements : ");
    for(int i=0;i<m;i++){
        scanf("%d",&array[i]);
    }
}
void update(int array[],int m){
    printf("Which index You want update: ");
    int index;
    scanf("%d",&index);
    printf("Enter Value You want to update: ");
    int value;
    scanf("%d\n",&value);
    array[index]=value;
}
void delete(int array[],int m){
    int delindex;
    printf("Enter the index you want to delete: ");
    scanf("%d\n",&delindex);
    for(int i=delindex;i<m-1;i++){
        array[i]=array[i+1];
    }
}
void display(int array[],int m){
    printf("Displaying Array : ");
    for(int i=0;i<m;i++){
        printf("%d ",array[i]);
    }
    printf("\n");
}
void searching(int array[],int n){

        int search;
        printf("Enter A value to Search ");
        scanf("%d",&search);
        for(int i=0;i<n;i++){
            if(search==array[i]){
                printf("FOUND AT INDEX: %d",i);
                break;
                
            }else{
                if(i==n-1){
                    printf("NOT FOUND\n");
                }else{
                    continue;
                }
            }
       
}
}
int main (){
    int m;
    int array[m];
    

    while(1){
    printf("\n---------CHOSE OPERATION----------------\n");
    printf("1. INSERT \n");
    printf("2. UPDATE \n");
    printf("3. DELETE \n");
    printf("4. DISPLAY \n");
    printf("5. SORT \n");
    printf("6. SEARCH \n");
    printf("7. EXIT \n");
    
    int choice;
    printf("Enter Choice : ");
    scanf("%d",&choice);

    switch(choice){
        case 1: 
                printf("HOW MANY VALUE: ");
                scanf("%d",&m);
                insert(array,m);
                printf("Element Added Succesfully\n");
                break;

        case 2: update(array,m);
                break;

        case 3: delete(array,m);
                m--;
                break;

        case 4: display(array,m);
                break;

        case 5: printf("WHAT TYPE OF SORT ?\n1. ASCENDING\n2. DESCENDING \n");
                int sort;
                scanf("%d",&sort);
                if(sort==1){
                    for(int i=0;i<m;i++){
                        for(int j=i+1;j<m;j++){
                            if(array[i]>array[j]){
                                int temp = array[i];
                                array[i]=array[j];
                                array[j]=temp;
                            }else{
                                continue;
                            }
                        }
                    }
                }else if(sort==2){
                    for(int i=0;i<m;i++){
                        for(int j=i+1;j<m;j++){
                            if(array[i]<array[j]){
                                int temp = array[i];
                                array[i]=array[j];
                                array[j]=temp;
                            }else{
                                continue;
                            }
                        }
                    }
                }
                break;
        case 6: searching(array,m);
                break;
          
        case 7 : printf("PROGRAM ENDED SUCCESFULLY");
                 return 0;

    

        }
    }

 return 0;
}