#include "ft_list.h"
#include <stdlib.h>

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
    t_list *current = (*begin_list);
    while(current)
    {
        if(cmp(data_ref, current->data))
        {
            free(current->data);
            free(current);
        }
        current = current -> next;
    }
}