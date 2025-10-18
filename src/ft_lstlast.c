//
// Created by Alexandre on 18/10/2025.
//

#include "../include/libft.h"

t_list *ft_lstlast(t_list *lst) {
    if (!lst)
        return (NULL);
    while (lst->next) {
        lst = lst->next;
    }
    return (lst);
}
