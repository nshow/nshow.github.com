#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct node
{
    int number;
    char name[20];
    int score;
    struct node *next;
}V_NODE;


V_NODE *create_link(int n);
V_NODE *add_link(V_NODE *head);
V_NODE *delete_link(V_NODE *head);
int get_choice(void);
void print_link(V_NODE *p);
void print_list(void);

int main(int argc, const char *argv[])
{
    
    /*    V_NODE *head;
          int n = 0;
          printf("input number:\n");
          scanf("%d",&n);

          head = create_link(n);
          print_link(head);
          head = add_link(head);
          print_link(head);
          head = delete_link(head);
          print_link(head);*/
    V_NODE *head = NULL;
    while(1)
    {   
        print_list();
        switch(get_choice())
        {
            case 1 : head = add_link(head);break;
            case 2 : head = delete_link(head);break;
            case 3 : print_link(head);break;
            case 4 : exit(0);break;
            default : break;
        }
    }
    return 0;
}

int get_choice(void)
{
    int choice = 0;
    scanf("%d",&choice);
    return choice;
}

void print_list(void)
{
    printf("plz make a choice:\n");
    printf("1.add node\n");
    printf("2.delete node\n");
    printf("3.print link\n");
    printf("4.exit\n");
}

V_NODE *create_link(int n)
{
    V_NODE *p = NULL;
    V_NODE *head = NULL;
    int i = 0;

    p = head = malloc(sizeof(V_NODE));
    if (p == NULL) 
    {
        perror("malloc");
        exit(0);   //直接到主函数的 return 0；
    }
    p->number = 1;
    strcpy(p->name , "a");
    p->next = NULL;

    for (i = 1; i < n; i++) 
    {
        p->next = malloc(sizeof(V_NODE));
        if (p->next == NULL) 
        {
            perror("malloc");
            exit(0);
        }
        p->next->number = i+1;
        strcpy(p->next->name,"a");
        p->next->next = NULL;
        p = p->next;        
    }
    return head;   
}

V_NODE *add_link(V_NODE *head)
{
    V_NODE *p = NULL;
    V_NODE *ptr = head;
    p = malloc(sizeof(V_NODE));
    if (p == NULL) 
    {
        perror("malloc");
        exit (0);
    }
    printf("input number\n");
    scanf("%d",&p->number);
    printf("input name:\n");
    scanf("%s",p->name);
    p->next = NULL;

    if (ptr == NULL) 
    {
        return p;
    }
    if (p->number < ptr->number) 
    {
        p->next = ptr;
        head = p;
        return head;
    }
    while ((ptr->next != NULL)&&(p->number > ptr->next->number))
    {
        ptr = ptr->next;
    }

    p->next = ptr->next;
    ptr->next = p;
    return head;
}
V_NODE *delete_link(V_NODE *head)
{
    int num = 0;
    V_NODE *p = head;
    V_NODE *ptr = NULL;
    if (head == NULL) 
    {
        printf("epty link\n");
        return NULL;
    }
    printf("plz input number of node to delete:\n");
    scanf("%d",&num);
    if (num == head->number) 
    {
        head = head->next;
        free(p);
        return head;
    }

    while ((p->next != NULL) && (p->next->number !=num))
    {
        p = p->next;
    }
    if (p->next == NULL) 
    {
        printf("NO number match\n");
    }
    else
    {
        ptr = p->next;
        p->next = p->next->next;
        free(ptr);
    }
    return head;
}

void print_link(V_NODE *p)
{
    if (p == NULL) 
    {
        printf("link empty\n");
    }
    else
        printf("student information\n");
        printf("number\tname\n");
        printf("\n");
    while (p != NULL)
    {
        printf("%d\t%s\n",p -> number,p -> name);
        p = p -> next; 
    }
}
