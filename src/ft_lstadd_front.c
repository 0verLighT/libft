//
// Created by Alexandre on 18/10/2025.
//


#include <stdio.h>

#include "../include/libft.h"

void ft_lstadd_front(t_list **lst, t_list *new) {
    if (!*lst) {
        *lst = new;
        return;
    }
    new->next = *lst;
    *lst = new;
}
