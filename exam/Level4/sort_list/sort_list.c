#include "ft_list.h"

t_list *sort_list(t_list *lst, int (*cmp)(int, int))
{
    if (!lst || !lst->next)
        return lst;

    int swapped;
    t_list *current;
    t_list *last_unsorted = NULL;

    swapped = 1;
    while (swapped)
    {
        swapped = 0;
        current = lst;

        while (current->next != last_unsorted)
        {
            if (cmp(current->data, current->next->data) == 0) 
                int temp = current->data;
                current->data = current->next->data;
                current->next->data = temp;
                swapped = 1;
            }
            current = current->next;
        }
        last_unsorted = current;
    }
    return lst;
}
