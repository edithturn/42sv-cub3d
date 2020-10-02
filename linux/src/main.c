#include	"../minilibx/mlx.h"
#include	"../minilibx/mlx_int.h"


#define	WIN1_SX		800
#define	WIN1_SY		800

int	local_endian;
void	*mlx;
void	*win1;


int main()
{

  int	a;

  a = 0x11223344;
  if (((unsigned char *)&a)[0] == 0x11)
    local_endian = 1;
  else
    local_endian = 0;
  printf(" => Local Endian : %d\n",local_endian);

  printf(" => Connection ...");
  if (!(mlx = mlx_init()))
    {
      printf(" !! KO !!\n");
      exit(1);
    }
  printf("OK (use_xshm %d pshm_format %d)\n",((t_xvar *)mlx)->use_xshm,((t_xvar *)mlx)->pshm_format);

  printf(" => Window1 %dx%d \"Title 1\" ...",WIN1_SX,WIN1_SY);
  if (!(win1 = mlx_new_window(mlx,WIN1_SX,WIN1_SY,"Title1")))
    {
      printf(" !! KO !!\n");
      exit(1);
    }
  printf("OK\n");
  mlx_loop(mlx);
}