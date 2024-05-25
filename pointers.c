//node contain 2 box first one is the value or data
// the second box contain the address of the next node
// list [23]&-->[54]&-->[78]&-->[90]&-->NULL
// head [23]

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int value;
    struct node *next;
}nd;

nd  *append(int value, nd *cur, nd **root)
{
    if (cur == NULL)
    {
        cur = (nd *)malloc(sizeof(nd));
        cur->value = value;
        *root = cur;
        printf("%d\n", cur->value);
    }
    else
    {
        cur->next = (nd *)malloc(sizeof(nd));
        cur = cur->next;
        cur->value = value;
        printf("%d\n", cur->value);
    }
    return (cur) ;
}


nd *append2(int value, nd *cure , nd *root2)
{
    if (cure == NULL)
    {
         cure = (nd*)malloc(sizeof(nd));
         cure->value = value;
         root2 = cure;
    }
    else
    {
        cure->next = (nd*)malloc(sizeof(nd));
        cure = cure->next;
        cure->value = value;
    }
}

nd *append3(int value, nd *current, nd *root)
{
    if (current == NULL)
    {
        current = (nd *)malloc(sizeof(nd));
        current->value = value;
        root = current;
        printf("%d", current->value);
    }
    else 
    {
        current->next = (nd *)malloc(sizeof(nd));
        current = current->next;
        current->value = value;
        printf("%d", current->value);
    }
}
int main()
{

    int data[10] = { 42, -9, 65, 13, 1, 10, 89, 37, -11, 5 };
    nd * root = NULL;
    nd * cur  = NULL;
    int i = 0;
    while (i < 10)
    {
        cur = append(data[i], cur, &root);
        i++;
    }
    
}