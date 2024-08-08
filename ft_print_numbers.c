/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrand-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 17:48:17 by jbrand-m          #+#    #+#             */
/*   Updated: 2024/08/08 17:53:44 by jbrand-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

void ft_print_numbers(void);

int main(){

    ft_print_numbers();
    return 0;

}

void ft_print_numbers(void){
    
    int i = 0;
    char ascii;

    while (i < 10) {
        ascii = i +'0';
        write(1, &ascii, 1);
        i++;

}
    
}
