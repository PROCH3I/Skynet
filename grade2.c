#include <stdio.h>

int main ()
{

        int maths_score;
        printf("Enter your Maths score :\n");
        scanf( "%d" , &maths_score );

  //>=85 A1
  //>=75 B2
  //>=70 B3
  //>=65 C4
  //>=60 C5
  //>=50 C6
  //>=45 D7
  //<=44 F9

  if (maths_score >= 85 && maths_score <= 100)
    printf("GRADE:A1 \n");
  else if (maths_score >=75 && maths_score <=84)
    printf("GRADE:B2 \n");
  else if (maths_score >=70 && maths_score <=74)
    printf("GRADE:B3 \n");
  else if (maths_score >=65 && maths_score <=69)
    printf("GRADE:C4 \n");
  else if (maths_score >=60 && maths_score <=64)
    printf("GRADE:C5 \n");
  else if (maths_score >=50 && maths_score <=59)
    printf("GRADE:C6 \n");
  else if (maths_score >=45 && maths_score <=49)
    printf("GRADE:D7 \n");
  else
    printf("GRADE:F9 \n");


  int english_score;
        printf("Enter your English score :\n");
        scanf( "%d" , &english_score );

  //>=85 A1
  //>=75 B2
  //>=70 B3
  //>=65 C4
  //>=60 C5
  //>=50 C6
  //>=45 D7
  //<=44 F9

  if (english_score >= 85 && english_score <= 100)
    printf("GRADE:A1 \n");
  else if (english_score >=75 && english_score <=84)
    printf("GRADE:B2 \n");
  else if (english_score >=70 && english_score <=74)
    printf("GRADE:B3 \n");
  else if (english_score >=65 && english_score <=69)
    printf("GRADE:C4 \n");
  else if (english_score >=60 && english_score <=64)
    printf("GRADE:C5 \n");
  else if (english_score >=50 && english_score <=59)
    printf("GRADE:C6 \n");
  else if (english_score >=45 && english_score <=49)
    printf("GRADE:D7 \n");
  else
    printf("GRADE:F9 \n");


  float average = (maths_score + english_score) / 2;
  printf( "Average Score = %.1f\n", average );

  return 0;
}
