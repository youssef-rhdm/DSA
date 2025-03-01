/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DS.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhandou <yrhandou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 15:07:05 by yrhandou          #+#    #+#             */
/*   Updated: 2025/02/18 17:00:15 by yrhandou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DS_H
#define DS_H

#include <stdio.h>
#include <stdlib.h>

typedef struct stack
{
	int data[__INT32_MAX__];
	int top;
} stack;

typedef struct s_stack
{
	struct s_stack *next;
	int data;
}	t_stack;



#endif
