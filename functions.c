/********* definitions.c ********
	Student Name 	= Sabeen Rafiq
	Student Number	= 101258923
*/

#include "data_structures.h"
#include "functions.h"
#include <stdlib.h>
#include <assert.h>
#include <stdio.h>

/******** IMPORTANT: ********/
/* YOU ARE NOT ALLOWED TO CREATE EXTRA FUNCTIONS */



/*
   The function adds a new node to the head with the given value.
*/
void add_at_head(my_collection_t *coll, char value)
{

	node_t *newnode = malloc(sizeof(node_t));
	assert(newnode != NULL);
	newnode->elem = value;
	newnode->next = NULL;
	
	if (coll->tail == NULL)
	{
		coll->head = newnode;
		coll->tail = newnode;
	}
	else
	{
		coll->head->next = newnode;
		coll->head = newnode;
	}

	/* The computational time for the function is: O(1)
		Explanation: This is as we are always adding the node to the front of the list
		and we know where the front of the list is by the head pointer. We do not need to 
		iterate through all the elements etc. to add a new node therefore it's operating time 
		is known as O(1).



	*/
}

/*
   The function removes a node from the tail and returns the value. If the collection is empty, it returns '\0'.
*/
char remove_from_tail(my_collection_t *coll)
{
	if (coll->tail == NULL)
	{
		return '\0';
	}
	
	char value = coll->tail->elem;
	node_t *temp = coll->tail;
	coll->tail = coll->tail->next;
	free(temp);
	return value;

	/* The computational time for the function is: O(1)
			Explanation: This is as we are always removing the node to the rear of the list
			and we know where the rear of the list is by the rear pointer. We do not need to 
			iterate through all the elements etc. to remove the last node therefore it's operating time 
			is known as O(1).



	*/
}

/*
  Prints all the characters in the collection on the terminal.
*/
void print_elements(my_collection_t *coll)
{
	// Order of elements to be printed was not specefied so they are printed tail to head
	// The format wanted for the output also was not specefied so i did the format present below
	// Collection Values: __(char or message)__
	
	if (coll->tail != NULL)
	{
		printf("Collection Values: ");
		node_t *current = coll->tail;
		for (;current != NULL; current = current -> next)
		{
			printf("%c, ", current->elem);
		}
	}
	else
	{
		printf("Collection Values: Collection is empty");
	}

	/* The computational time for the function is: O(n)
			Explanation: This is as we must iterate through the whole list 
			in order to print all elements. This means the time it takes for the 
			function to run is dependent on the length of the list, which is why 
			it's operating time is O(1).



	*/
}

/*
   Removes all the elements from the collection. Your implementation
   for this function is not allowed to called remove_from_tail
*/
void empty_my_collection(my_collection_t *coll)
{
	node_t *node_del;
	while (coll->tail != NULL)
	{
		node_del = coll->tail;
		coll->tail = coll->tail->next;
		free(node_del);
	}
}

/*
   *************** DON'T MODIFY THIS FUNCTION ****************
   Function create the collection that will be used in the exam
*/
my_collection_t *create_collection()
{
	my_collection_t *coll = malloc(sizeof(my_collection_t));
	assert(coll != NULL);
	coll->head = NULL;
	coll->tail = NULL;
	return coll;
}
