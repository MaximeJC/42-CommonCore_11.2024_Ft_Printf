#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft/libft.h"
# include <stdarg.h>

int	ft_printf(const char *str, ...) __attribute__((format(printf, 1, 2)));

#endif
