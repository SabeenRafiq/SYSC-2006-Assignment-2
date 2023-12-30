#ifndef __DATA_STRUCTURES_H__
#define __DATA_STRUCTURES_H__

/********* data_structures.h ********
	Student Name 	= Sabeen Rafiq
	Student Number	= 101258923
*/

/********** DON'T MODIFY **********/

//The nodes in the list are stored using the following data structure:
typedef struct node {
    char elem;
    struct node *next;
} node_t;

// The collection is stored using the following data structure:
typedef struct {
    node_t *tail;
    node_t *head;
} my_collection_t;


#endif