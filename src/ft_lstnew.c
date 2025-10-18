//
// Created by Alexandre on 18/10/2025.
//

#include "../include/libft.h"

t_list  *ft_lstnew(void *content) {
    t_list *new_lst;

    new_lst = ft_calloc(1, sizeof(t_list));
    if (!new_lst)
        return (NULL);
    new_lst->content = content;
    return (new_lst);
}
