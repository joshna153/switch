#include <stdio.h>
#include <conio.h>
main()
{
  int food item=0;
  printf("select a food item: \n1. pizza\n2. burger\n3. pasta\n4. frenchfries\n5. sandwich");
  scanf("%d", & fooditem);
  switch(fooditem)
  {
    case 1:
         printf("fooditem - pizza. \n");
         printf("price - Rs 239");
         break:
    case 2:
        printf("fooditem - burger. \n");
        printf("price - Rs 129");
        break;
    case 3:
        printf("fooditem - pasta. \n");
        printf("price - Rs 179");
        break;
    case 4:
        printf("fooditem - frenchfries. \n");
        printf("price - Rs 99");
        break;
    case 5:
       printf("fooditem - sandwich.\n");
       printf("price - Rs 149");
       break;
    default : ("Invalid choice");
  }
}
