#include <stdio.h>
#include <string.h>
typedef struct
{
    int number;
    char name[20];
    int score;
    char score1;
    struct node *next;
}node;
int main(int argc, const char *argv[])
{
    node stu;
    node *ptr = NULL;
    ptr = &stu;
    stu.number = 1;
    strcpy(stu.name,"wang");
    stu.score = 30;
    stu.score1 = 'b';
    //ptr->name = {b};     char name[] 为地址 
    printf("%d %s %d %c\n",stu.number,stu.name,stu.score,stu.score1);
    ptr -> number = 2;
    ptr -> score = 50;
    strcpy(ptr -> name,"xiu");
    printf("%d %s %d\n",stu.number,stu.name,stu.score);
    printf("plz input number:\n");
    scanf("%d",&ptr->number);
    printf("name:\n");
    scanf("%s",ptr->name);
    getchar ();
    printf("score:\n");
    scanf("%c",&ptr->score1);
    printf("%d %s %c\n",ptr->number,ptr->name,ptr->score1);
   
   
    ptr -> number = 20;
    ptr -> next = null;
    stu *create_link(int n);


    return 0;
    

}
