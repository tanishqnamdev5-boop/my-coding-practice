#include <stdio.h>
int main() {;
    char day;
   printf("enter day of the week: ");
   scanf("%c", &day);
   switch(day) {
      case 'm':
         printf("Monday\n");
         break;
      case 't':
         printf("Tuesday\n");
         break;
      case 'w':
         printf("Wednesday\n");
         break;
      case 'r':
         printf("Thursday\n");
         break;
      case 'f':
         printf("Friday\n");
         break;
      case 's':
         printf("Saturday\n");
         break;
      case 'u':
         printf("Sunday\n");
         break;
      default:
         printf("Invalid day\n");
    
    return 0;
}
}
