#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct node
{
    int number;
    char name[20];
    struct node *next;
}V_NODE;


V_NODE *add_link(V_NODE *head); 
V_NODE *delete_link(V_NODE *head);
V_NODE *load_link(void);

int get_choice(void);
void print_link(V_NODE *p);
void print_list(void);
void save_link(V_NODE *p);


int main(int argc, const char *argv[])
{
    V_NODE *head = NULL;
    while(1)
    {   
        print_list();
        switch(get_choice())
        {
            case 1 : head = add_link(head);break;
            case 2 : head = delete_link(head);break;
            case 3 : head = load_link();break;
            case 4 : print_link(head);break;
            case 5 : save_link(head);break;
            case 6 : exit(0);break;
            default : break;
        }
    }
    return 0;
}

int get_choice(void)
{
    char choice[20];
    scanf("%s",choice);
    if (atoi(choice) > 6 || atoi(choice) < 1) 
    {
        printf("wrong information\n");
    }
    else
        return atoi(choice);
}

void print_list(void)
{
    printf("plz make a choice:\n");
    printf("1.add node\n");
    printf("2.delete node\n");
    printf("3.load link\n");
    printf("4.print link\n");
    printf("5.save\n");
    printf("6.exit\n");
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
    printf("input number:\n");
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
        p->next = ptr->next;
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
        printf("%d\t%s\n",p->number, p->name);
        p = p -> next;
    }
}
void save_link(V_NODE *p)
{
    FILE *fp;
    char textname[20];
    printf("input textname\n");
    scanf("%s",textname);
    fp = fopen(textname,"w+");
    if (fp == NULL) 
    {
        perror("fp");
        exit(0);
    }
    while (p != NULL)
    {
        fprintf(fp,"%d\t%s\n",p->number, p->name);
        p = p->next;
    }
    fclose(fp);
}

V_NODE *load_link(void)
{
    FILE *fp;
    int num;
    char na[20];
    char loadname[20];
    V_NODE *head;
    V_NODE *p;
    printf("input loadname\n");
    scanf("%s",loadname);
    fp = fopen (loadname,"r+");
    if (fp == NULL) 
    {
       perror("fp");
       exit(0);
    }
    if (fscanf(fp, "%d%s", &num, na) != EOF) 
    {
        head = p = malloc(sizeof(V_NODE));
        if (p == NULL) 
        {
            perror("malloc");
            exit(0);
        }
        p->number = num;
   //printf("%d\n", num);
        strcpy(p->name,na);
  //printf("%s\n", na);
        p->next = NULL;
    }
    while(fscanf(fp,"%d%s",&num,na) != EOF)
    {
        p->next = malloc(sizeof(V_NODE));
        if (p == NULL) 
        {
            perror("malloc");
            exit(0);
        }
        p->next->number = num;
   //     printf("%d\n", num);
        strcpy(p->next->name,na);
  //      printf("%s\n", na);
        p->next->next = NULL;
        p = p->next;
    }    
    return head;
}
