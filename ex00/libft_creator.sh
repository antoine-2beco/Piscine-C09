rm -rf libft.a
find . -name "*.c" -type f -exec gcc -Wextra -Wall -Werror -c {} \;
ar rc libft.a *.o
find . -name "*.o" -type f -delete