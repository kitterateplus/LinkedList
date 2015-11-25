#include<stdio.h>
#include<conio.h>

void allocatememory(struct memorynode *add);
void removeamemorynode(struct memorynode *add);

struct memorynode{
       char ch;
       struct memorynode *next;
};

int main(){

void allocatememory(struct memorynode *add){
     
     struct memorynode *temp;
     
     if(head->next == NULL){
                   //create first memory node
                   temp=(struct memorynode*)malloc(sizeof(struct memorynode));
                   
                   prinft("\nEnter Data : ");
                   scanf("%c",&ch);
                   
                   head=temp;
                   head->data=ch;
                   head->next=Null;
     }
     else{
                   //add a memory node to the end of the list
                   temp=(struct memorynode*)malloc(sizeof(struct memorynode));
                   
                   printf("\nEnter Data :");
                   scanf("%c",&ch);
                   
                   //Exchange the memory address of the nodes
                   temp->next=NULL;
                   temp->data=ch
                   head->next=temp;
     }
     //return the address of the last memory node
     return(temp);
}

void removeamemorynode(struct memorynode *add){
     
           char search,ch='Y';
           struct memorynode *temp;
           
           printf("\nEnter the memory node to be removed: ");
           scanf("%c",&search);
                       
           while(ch == 'Y'){
                           if(add->data == search){
                                        ch='N';
                                        //Exchange the address of the next in memory
                                        temp->next=add->next;
                           }
                           else{
                                //keep the value of the previous nodes in the memory
                                temp=add;
                                add=add->next;
                           }
           }
}     
