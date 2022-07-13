#include <stdio.h>
#include <stdio.h>

int main () {

  // Output.
  float average_grade, average_list;

  // First entry.
  float test[3];

  // Second entry.
  float final_project;

  // Third entry.
  float list[5];

  // Get entry.
  scanf("%f %f %f", &test[0], &test[1], &test[2]);

  scanf("%f", &final_project);

  scanf("%f %f %f %f %f", &list[0], &list[1], &list[2], &list[3], &list[4]);

  // Calculate the average of the lists.
  average_list = (list[0] + list[1] + list[2] + list[3] + list[4]) / 10;

  // Calculate the average of the grade.
  average_grade = (
      (test[0]
       + 2 * test[1]
       + 3 * test[2]
       + 2 * final_project
       ) / 8 ) + average_list;

  printf("%.2f", average_grade);

  return 0;

}
