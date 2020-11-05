/* Prints a date in legal form */
#include <stdio.h>
int main(void)
{
  int month, day, year;
  printf("Enter date as(month/day/year)(only for 20xx): ");
  scanf("%d /%d /%d", &month, &day, &year);
  if((1<=day&&day<=31)&&(1<=month&&month<=12)&&(0<=year&&year<=99))
  {
  		printf("Dated this %d", day);
  switch (day) {
    case 1: case 21: case 31:
      printf("st"); break;
    case 2: case 22:
      printf("nd"); break;
    case 3: case 23:
      printf("rd"); break;
    default: printf("th"); break;
  }
	  printf(" day of ");
    switch (month) {
    case 1:  printf("January");   break;
    case 2:  printf("February");  break;
    case 3:  printf("March");     break;
    case 4:  printf("April");     break;
    case 5:  printf("May");       break;
    case 6:  printf("June");      break;
    case 7:  printf("July");      break;
    case 8:  printf("August");    break;
    case 9:  printf("September"); break;
    case 10: printf("October");   break;
    case 11: printf("November");  break;
    case 12: printf("December");  break;
  }
  printf(", 20%.2d.\n", year);
  int a,b,c,d,e;
  d=(month-7)/2;
  c=(month-2)/2;
  b=(year+3)/4;
  if(year%4==0)//ÈòÄê 
  {
  if(month<=2){
  a=year*365+b+(month/2)*31+day-1;
  }
  else if(2<month&&month<=7){
  	a=year*365+b+60+(month-3)*30+c+day-1;
  }
  else{
  	a=year*365+b+213+(month-8)*30+d+day-1;
  }
}
  else{
  	if(month<=2){
  a=year*365+b+(month/2)*31+day-1;
  }
  else if(2<month&&month<=7){
  	a=year*365+b+59+(month-3)*30+c+day-1;
  }
  else{
  	a=year*365+b+212+(month-8)*30+d+day-1;
  }
  }
  e=a%7;
  printf("\nThe day is ");
  switch(e){
  case 0:printf("saturday");break;
  case 1:printf("sunday");break;
  case 2:printf("monday");break;
  case 3:printf("tuesday");  break;
  case 4:printf("wednesday");break;
  case 5:printf("thursday");break;
  case 6:printf("friday");   break;
  } 
}
    else{
    printf("Please enter the right number.");
  }
  return 0;
}


