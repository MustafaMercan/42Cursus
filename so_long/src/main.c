#include "../minilibx/mlx.h"
#include <stdio.h>
#define WIDTH 1000
#define HEIGHT 1000
#define MAP_WIDTH 10
#define MAP_HEIGHT 10

int map[MAP_HEIGHT][MAP_WIDTH] = {
  {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
  {1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
  {1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
  {1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
  {1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
  {1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
  {1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
  {1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
  {1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
  {1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
};

int main()
{
  void *mlx_ptr;
  void *win_ptr;
  
  mlx_ptr = mlx_init();
  win_ptr = mlx_new_window(mlx_ptr,WIDTH, HEIGHT, "My Map");

  int x = 0, y = 0;
  for(y = 0 ; y < MAP_HEIGHT; y++)
  {
	for(x = 0 ; x < MAP_WIDTH ; x++)
	{
		if(map[y][x] == 1)
		{
			mlx_pixel_put(mlx_ptr,win_ptr, x, y,0xFFFFFF);
		}
		else
			mlx_pixel_put(mlx_ptr,win_ptr,x,y, 0x000000);
	}
  }
  mlx_loop(mlx_ptr);
  return 0;
}