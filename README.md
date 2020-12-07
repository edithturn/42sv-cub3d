# 42sv-cub3d


```bash
Intalling minilix

```

### Sources
https://lodev.org/cgtutor/raycasting.html



### Minilix
**For Linux**
https://github.com/42Paris/minilibx-linux

**For Windows**


## Compile

cc -I /usr/local/include main.c -L /usr/local/lib/ -lmlx -framework OpenGL -framework Appkit


### Debug
```console
gcc -g main.c -Wall -Wextra -Werror -D BUFFER_SIZE=1 ../get_next_line.c ../get_next_line_utils.c -I ../
make a.out
b get_next_line
run files/part1_test01_with_lines
gui
```
