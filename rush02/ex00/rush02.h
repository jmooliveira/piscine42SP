/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemorais <jemorais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 12:40:00 by jemorais          #+#    #+#             */
/*   Updated: 2024/07/28 17:27:43 by marcudos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H

unsigned long long int	ft_atoi(char *str);
void					atr_dict(char **dict_filename,
							char **number_str, int argc, char **argv);
void					ft_putstr(char *str);
int						ft_str_is_numeric(char *str);
int						read_file(char *filename);

#endif
