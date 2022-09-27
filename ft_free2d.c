/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free2d.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwang <kwang@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 16:48:43 by kwang             #+#    #+#             */
/*   Updated: 2022/09/26 17:28:20 by kwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_free2d(char **arr)
{
    int    i;

    if (arr == NULL)
        return ;
    i = 0;
    while (arr[i] != NULL)
    {
        free(arr[i]);
        i++;
    }
    free(arr);
    arr = NULL;
}