#include <stdio.h>

int main () {

  int bottom, top, area_triangle, area_rectangular, size, rest;

  scanf("%d", &bottom);
  scanf("%d", &top);

  if (bottom < 0 || bottom >= 160) return 1;
  if (top < 0 || top >= 160) return 1;

  // Triangle
  int max_width = top > bottom ? top : bottom;
  int min_width = top > bottom ? bottom : top;
  
  int base = max_width - min_width;
  int height = 70;
  area_triangle = height * base / 2;

  area_rectangular = min_width * height;
  size = area_rectangular + area_triangle;
  rest = 160 * 70 - size;

  if (size > rest) printf("1\n");
  else if (size == rest) printf("0\n");
  else printf("2\n");

  return 0;

}
