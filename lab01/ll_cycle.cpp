#include "ll_cycle.h"

bool ll_has_cycle(node *head) {
    if (!head) return false;
    node *hare = head;
    node *turtle = head;
    while(hare)
    {
    	hare = hare->next;
    	if(!hare) return false;
    	hare = hare-> next;
    	if(!hare) return false;
    	turtle = turtle-> next;
    	if(turtle==hare) return true;
    	
    }
    return true;
}
