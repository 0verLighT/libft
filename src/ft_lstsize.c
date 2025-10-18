//
// Created by Alexandre on 18/10/2025.
//

#include <stdio.h>

#include "../include/libft.h"

int ft_lstsize(t_list *lst)
{
    int size;

    size = 0;
    while (lst)
    {
        lst = lst->next;
        size++;
    }
    return (size);
}