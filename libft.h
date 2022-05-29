/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauvicto <pauvicto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 04:04:48 by pauvicto          #+#    #+#             */
/*   Updated: 2022/05/14 23:17:32 by pauvicto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include	<stdlib.h>
# include	<unistd.h>

/**
 * @brief The bzero() function erases the data in the n bytes of the memory
       starting at the location pointed to by s, by writing zeros (bytes
       containing '\0') to that area.
 * 
 * @param s void pointer
 * @param n size_t
 */
void	ft_bzero(void *s, size_t n);

/**
 * @brief checks for an alphabetic character
 * 
 * @param c int
 * @return int 
 */
int		ft_isalpha(int c);

/**
 * @brief checks for an uppercase letter.
 * 
 * @param c int
 * @return int 
 */
int		ft_isdigit(int c);

/**
 * @brief checks for an alphanumeric character;
 * 
 * @param c int
 * @return int 
 */
int		ft_isalnum(int c);

/**
 * @brief checks whether c is a 7-bit unsigned char value that
 *  fits into the ASCII character set.
 * 
 * @param c int
 * @return int 
 */
int		ft_isascii(int c);

/**
 * @brief checks for any printable character including space.
 * 
 * @param c int
 * @return int 
 */
int		ft_isprint(int c);

/**
 * @brief The memchr() function scans the initial n bytes of the memory
       area pointed to by s for the first instance of c.  Both c and the
       bytes of the memory area pointed to by s are interpreted as
       unsigned char.
 * 
 * @param s const void
 * @param c int
 * @param n size_t
 * @return void* 
 */
void	*ft_memchr(const void *s, int c, size_t n);

/**
 * @brief The memcpy() function copies n bytes from memory area src to
       memory area dest.  The memory areas must not overlap.  Use
       memmove(3) if the memory areas do overlap.
 * 
 * @param dest void *
 * @param src const void *
 * @param n size_t
 * @return void* 
 */
void	*ft_memcpy(void *dest, const void *src, size_t n);

/**
 * @brief        The memmove() function copies n bytes from memory area src to
       memory area dest.  The memory areas may overlap: copying takes
       place as though the bytes in src are first copied into a
       temporary array that does not overlap src or dest, and the bytes
       are then copied from the temporary array to dest.
 * 
 * @param s1 void *
 * @param s2 const void *
 * @param n size_t
 * @return void* 
 */
void	*ft_memmove(void *s1, const void *s2, size_t n);

/**
 * @brief The memset() function fills the first n bytes of the memory area
       pointed to by s with the constant byte c.
 * 
 * @param s void *
 * @param c int 
 * @param n size_t
 * @return char* 
 */
char	*ft_memset(void *s, int c, size_t n);

/**
 * @brief The strchr() function returns a pointer to the first occurrence
       of the character c in the string s.
 * 
 * @param s const char
 * @param c int
 * @return char* 
 */
char	*ft_strchr(const char *s, int c);

/**
 * @brief The strlen() function calculates the length of the string pointed
       to by s, excluding the terminating null byte ('\0').
 * 
 * @param s const char *
 * @return size_t 
 */
size_t	ft_strlen(const char *s);

/**
 * @brief The strcmp() function compares the two strings s1 and s2. 
		It returns an integer less than, equal to, or greater than zero if s1 is found,
		respectively, to be less than, to match, or be greater than s2.
 * 
 * @param s1 const char *
 * @param s2 const char *
 * @param n size_t
 * @return int 
 */
int		ft_strncmp(const char *s1, const char *s2, size_t n);

/**
 * @brief The strrchr() function returns a pointer to the last occurrence
       of the character c in the string s.
 * 
 * @param s const char *
 * @param c int
 * @return char* 
 */
char	*ft_strrchr(const char *s, int c);

/**
 * @brief tolower() converts the letter c to lower case, if possible.
 * 
 * @param c int
 * @return int 
 */
int		ft_tolower(int c);

/**
 * @brief toupper() converts the letter c to upper case, if possible.
 * 
 * @param c int
 * @return int 
 */
int		ft_toupper(int c);

/**
 * @brief The strlcpy() and strlcat() functions copy and concatenate 
 * strings respectively.They are designed to be safer, more consistent, 
 * and less error prone replacements for strncpy(3) and strncat(3).
 * Unlike those functions, strlcpy() and strlcat() take the full size of 
 * the buffer (not just the length) and guarantee to NUL-terminate the 
 * result (as long as size is larger than 0 or, in the case of strlcat(), 
 * as long as there is at least one byte free in dst). Note that a byte 
 * for the NUL should be included in size. Also note that strlcpy() and 
 * strlcat() only operate on true ''C'' strings. This means that for strlcpy()
 * src must be NUL-terminated and for strlcat() both src and dst must be 
 * NUL-terminated.
 * 
 * @param dst char *
 * @param src const char *
 * @param size size_t
 * @return char*
 */
size_t	ft_strlcpy(char *dst, const char *src, size_t size);

/**
 * @brief The strdup() function returns a pointer to a new string which is
       a duplicate of the string s.  Memory for the new string is
       obtained with malloc(3), and can be freed with free(3).
 * 
 * @param src const char *
 * @return char* 
 */
char	*ft_strdup(const char *src);

/**
 * @brief  The memcmp() function compares the first n bytes (each
       interpreted as unsigned char) of the memory areas s1 and s2.
 * 
 * @param s1 const void *
 * @param s2 const void *
 * @param n size_t
 * @return int 
 */
int		ft_memcmp(const void *s1, const void *s2, size_t n);

/**
 * @brief The calloc() function allocates memory for an array
 *  of nmemb elements of size bytes each and returns a pointer
 *  to the allocated memory.  The memory is set to zero.  If 
 * nmemb or size is 0, then calloc() returns either NULL, or a 
 * unique pointer value that  can  later  be  successfully  passed
 * to free().   If  the multiplication of nmemb and size would
 * result in integer overflow, then calloc() returns an error.
 *  By contrast, an integer overflow would not be detected in
 * the following call to malloc(), with the result that an 
 * incorrectly sized block of memory would be allocated:
 * 
 * @param nmemb size_t
 * @param size size_t
 * @return void* 
 */
void	*ft_calloc(size_t nmemb, size_t size);

/**
 * @brief 
 * 
 * @param s char const *
 * @param start unsigned int
 * @param len size_t
 * @return char* 
 */
char	*ft_substr(char const *s, unsigned int start, size_t len);

/**
 * @brief Allocates (with malloc(3)) and returns a newstring, which
 *  is the result of the concatenationof ’s1’ and ’s2’.
 * 
 * @param s1 char const *
 * @param s2 char const *
 * @return char* 
 */
char	*ft_strjoin(char const *s1, char const *s2);

/**
 * @brief Allocates (with malloc(3)) and returns a copy of’s1’ 
 * with the characters specified in ’set’ removedfrom the 
 * beginning and the end of the string.
 * 
 * @param s1 char const *
 * @param set char const *
 * @return char* 
 */
char	*ft_strtrim(char const *s1, char const *set);

/**
 * @brief Allocates (with malloc(3)) and returns an array of 
 * strings obtained by splitting ’s’ using thecharacter ’c’ as
 *  a delimiter.  The array must endwith a NULL pointer
 * Return: The array of new strings resulting from the split.
 * NULL if the allocation fails.
 * 
 * @param s char const *
 * @param c char
 * @return char**
 */
char	**ft_split(char const *s, char c);

/**
 * @brief 
 * 
 * @param dst char*
 * @param src const char*
 * @param size size_t
 * @return size_t 
 */
size_t	ft_strlcat(char *dst, const char *src, size_t size);

/**
 * @brief The atoi() function converts the initial portion of
 *  the stringpointed to by nptr to int.  The behavior is the
 *  same asstrtol(nptr, NULL, 10);except that atoi() does not
 *  detect errors.
 * 
 * @param nptr const char
 * @return int 
 */
int		ft_atoi(const char *nptr);

/**
 * @brief The atoi() function converts the initial portion of
 *  the string pointed to by nptr to int.  The behavior is the same as
 *  trtol(nptr, NULL, 10);
 *  except that atoi() does not detect errors.
 * 
 * @param big 
 * @param little 
 * @param len 
 * @return char* 
 */
char	*ft_strnstr(const char *big, const char *little, size_t len);

/**
 * @brief Allocates (with malloc(3)) and returns a string representing
 *  the integer received as an argument.Negative numbers must be handled
 * 
 * @param n int
 * @return char* 
 */
char	*ft_itoa(int n);

/**
 * @brief Applies the function ’f’ to each character of thestring ’s’, and 
 * passing its index as first argumentto create a new string (with malloc(3))
 *  resultingfrom successive applications of ’f’.
 * 
 * @param s the string on which to iterate.
 * @param f the function to apply to each character.
 * @return char* The string created from the successive applicationsof ’f’.
 * Returns NULL if the allocation fails.
 */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

/**
 * @brief Applies the function ’f’ on each character ofthe string passed as 
 * argument, passing its indexas first argument.  Each character is passed 
 * byaddress to ’f’ to be modified if necessary.
 * 
 * @param s The string on which to iterate.
 * @param f he function to apply to each character
 */
void	ft_striteri(char *s, void (*f)(unsigned int, char*));

/**
 * @brief Outputs the character ’c’ to the given filedescriptor.
 * 
 * @param c The character to output
 * @param fd The file descriptor on which to write.
*/
void	ft_putchar_fd(char c, int fd);

/**
 * @brief Outputs the string ’s’ to the given filedescriptor.
 * 
 * @param s The string to output.
 * @param fd The file descriptor on which to write.
 */
void	ft_putstr_fd(char *s, int fd);

/**
 * @brief Outputs the string ’s’ to the given file
 *  descriptorfollowed by a newline.
 * 
 * @param s The string to output.
 * @param fd The file descriptor on which to write.
 */
void	ft_putendl_fd(char *s, int fd);

/**
 * @brief Outputs the integer ’n’ to the given filedescriptor
 * 
 * @param n The integer to output
 * @param fd The file descriptor on which to write.
 */
void	ft_putnbr_fd(int n, int fd);

#endif