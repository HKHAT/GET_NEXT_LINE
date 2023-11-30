/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elchakir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 21:15:43 by elchakir          #+#    #+#             */
/*   Updated: 2023/11/30 21:23:51 by elchakir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef GET_NEXT_LINE
#  define GET_NEXT_LINE

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 2
# endif
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
size_t	ft_strlcat(char *dst, const char *src, size_t size);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlen(const char *str);
char	*ft_strjoin(char  *s1, char  *s2);
char	*ft_strdup(const char *src);
char	*ft_strchr(const char *s, int c);
char	*ft_substr(const char* str, unsigned int start, size_t length);
char	*get_next_line(int fd);

#endif
