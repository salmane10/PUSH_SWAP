#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int             data;           /* data */
    struct Node*    next;
}Node;

int main()
{
    Node* node1 = (Node*)malloc(sizeof(Node));
    node1->data = 10;
    node1->next = NULL; // to end the node

    printf("node data: %d\n", node1->data);
    free(node1);
    
    return (0);
}
