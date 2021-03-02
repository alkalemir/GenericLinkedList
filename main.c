//
//  main.c
//  linkedList
//
//  Created by Emir Alkal on 2.03.2021.
//  Copyright © 2021 Emir Alkal. All rights reserved.
//

#include <stdio.h>
#include "linkedlist.h"

void printList(LL ll) {
    Node *iterator = ll.root;
    
    while (iterator != NULL) {
        printf("%d -> ", *(int*)iterator->data);
        iterator = iterator->next;
    }
    printf("NULL\n");

}
typedef _Bool (*fptr_t)(void *, void *);


_Bool func(void *p1, void *p2)
{
    if (*(int*)p1 > *(int*)p2) {
        return 1;
    }
    
    return 0;
}
void test(LL * ptr);

int main(int argc, const char * argv[]) {
    
    LL * ptr = initLinkedList(sizeof(int));
    int arr[] = {5, 4, 2, 1, 9, 3, 10, 0};
    int*p = arr;
    addNode(ptr, p++);
    addNode(ptr, p++);
    addNode(ptr, p++);
    addNode(ptr, p++);
    addNode(ptr, p++);
    addNode(ptr, p++);
    addNode(ptr, p++);
    addNode(ptr, p++);

    printList(*ptr);
    sortList(ptr, func);
    printList(*ptr);

    addAt(ptr, arr + 1, 6);
    printList(*ptr);
}
