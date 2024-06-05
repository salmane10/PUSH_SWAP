/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linkedlist.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slouham <slouham@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 11:16:10 by slouham           #+#    #+#             */
/*   Updated: 2024/06/05 18:40:40 by slouham          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
