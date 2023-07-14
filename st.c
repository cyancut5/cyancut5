#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int game(char you,char computer)
{
if(you==computer)
return -1;
if(you=='s'&&computer=='p')
return 0;
else if(you=='p'&&computer=='s')
return 1;
if(you=='p'&&computer=='z')
return 0;
else if(you=='z'&&computer=='p')
return 1;
}
int main()
{
int n;
char you,computer,result;
srand(time(NULL));
n=rand()% 100;
if(n<33)
computer='p';
else if(n>33&&n<66)
computer='p';
else
computer='z';
printf("shravani enter s for stone,p for paper and z for scissor");
scanf("%c",&you);
result=game(you,computer);
if(result==-1)
{
printf("game draw");
}
else if(result==1)
{
printf("you have won the game");
}
else
{
printf("you have lost the game");
}
printf("\nyou choose:%c and computer choose:%c\n",you,computer);
return 0;
}
