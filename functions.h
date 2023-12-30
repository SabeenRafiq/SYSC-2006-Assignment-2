#ifndef __FUNCTIONS_H__
#define __FUNCTIONS_H__

/********* functions.h ********
	Student Name 	= Sabeen Rafiq
	Student Number	= 101258923
*/

#include "data_structures.h"


/********** DON'T MODIFY **********/

/*
   Function create the collection that will be used in the exam
*/
my_collection_t *create_collection();

/*
   The function adds a new node to the head with the given value.
*/
void add_at_head (my_collection_t *coll, char value);

/*
   The function removes a node from the tail and returns the value. If the collection is empty, it returns '\0'.
*/
char remove_from_tail (my_collection_t *coll);


/*
  Prints all the characters in the collection on the terminal.
*/
void print_elements (my_collection_t *coll);


/*
   Removes all the elements from the collection. Your implementation
   for this function is not allowed to called remove_from_tail
*/
void empty_my_collection (my_collection_t *coll);
/********** DON'T MODIFY **********/
#endif