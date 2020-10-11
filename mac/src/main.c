#include	"../minilibx/mlx.h"
#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int main(int ac, char **av)
{

  //void	*mlx_ptr;
  //void 	*win_ptr;

  //for read the file
  char  *line;
  int fd;
  int ret;
  //mlx_ptr = mlx_init();

  // Validating the Map argc = 2 and argv = 1
  // validaten --save argv = 2

  ret = 0;
  if (ac == 2)
  {
    fd = open(av[1],O_RDONLY);
    while((ret = get_next_line(fd, &line)) > 0)
    {
      printf("%s\n", line);
      free(line);
    }
    if (ret == -1)
      printf("%s", "I can't read your FD");
    else if(ret == 0)
    {
      free(line);
    }
    close(fd);

    //win_ptr = mlx_new_window(mlx_ptr,500, 500, "mlx 42" );
    //mlx_loop(mlx_ptr);

    
  }
  
  if (ac == 1)
    printf("%s", "Error map don't sending"); 

}