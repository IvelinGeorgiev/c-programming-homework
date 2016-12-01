#include<stdio.h>
#include<string.h>
int main(){
int w=0;
int c=0;
char fix;
char Q1;
char Q2;
char Q3;
char Q4;
char Q5;
char Q6;
char Q7;
char Q8;
char Q9;
char Q10;
printf("\n Welcome to the WoW quiz!\n");


printf(" Question 1- What is the name of the new WoW expansion?\nA=The Burning Crusade\nB=Legion\nC=Cataclysm\n");
scanf("%c", &Q1);
if((Q1=='B')||(Q1=='b')){
c++;
printf("Correct answer\n");


}
else{
w++;
printf("Wrong answer\n");


}
fix=getchar();
printf(" Question 2- From where did the orcs come from?\nA=Broken Isles\nB=Northrend\nC=Draenor(Outland)\n");
scanf("%c", &Q2);
if((Q2=='C')||(Q2=='c')){
c++;
printf("Correct answer!\n");


}
else{
w++;
printf("Wrong answer\n");


}
fix=getchar();

printf(" Question 3- What is the capital city of the Horde?\nA=Undercity\nB=Thunder Bluff\nC=Orgrimmar\n");
scanf("%c", &Q3);
if((Q3=='C')||(Q3=='c')){
c++;
printf("Correct answer!\n");


}
else{
w++;
printf("Wrong answer\n");


}
fix=getchar();

printf(" Question 4- After Orgrim's death who took up the mantle of warchief?\nA=Thrall\nB=Cairne\nC=Durotan\n");
scanf("%c", &Q4);
if((Q4=='A')||(Q4=='a')){
c++;
printf("Correct answer!\n");


}
else{
w++;
printf("Wrong answer!\n");


}
fix=getchar();

printf(" Question 5- Who ressurected Teron Gorefiend?\nA=Gul'Dan\nB=Ner'Zhul\nC=Kil'Jaeden\n");
scanf("%c", &Q5);
if((Q5=='A')||(Q5=='a')){
c++;
printf("Correct answer!\n");


}
else{
w++;
printf("Wrong answer!\n");


}
fix=getchar();

printf(" Question 6- Who drank from Mannoroth's blood first?\nA=Gul'Dan\nB=Grommash\nC=Garrosh\n");
scanf("%c", &Q6);
if((Q6=='B')||(Q6=='b')){
c++;
printf("Correct answer!\n");


}
else{
w++;
printf("Wrong answer!\n");


}
fix=getchar();

printf(" Question 7- With who did the High Elves unite in the Troll Wars?\nA=The Orcs\nB=The Tauren\nC=The Humans\n");
scanf("%c", &Q7);
if((Q7=='C')||(Q7=='c')){
c++;
printf("Correct answer!\n");


}
else{
w++;
printf("Wrong answer!\n");


}
fix=getchar();

printf(" Question 8- Which Old God created the Emerald Nightmare?\nA=Yogg'Saron\nB=C'Thun\nC=N'Zoth\n");
scanf("%c", &Q8);
if((Q8=='A')||(Q8=='a')){
c++;
printf("Correct answer\n");


}
else{
w++;
printf("Wrong answer!\n");


}
fix=getchar();

printf(" Question 9- Who killed Y'Shaarj?\nA=Yogg'Saron\nB=Sargeras\nC=Aman'Thul\n");
scanf("%c", &Q9);
if((Q9=='C')||(Q9=='c')){
c++;
printf("Correct answer!\n");


}
else{
w++;
printf("Wrong answer!\n");


}
fix=getchar();

printf(" Question 10- Helya imprisoned ODyn with the help of?\nA=Ra-Den\nB=Loken\nC=Freya\n");
scanf("%c", &Q10);
if((Q10=='B')||(Q10=='b')){
c++;
printf("Correct answer\n");


}
else{
w++;
printf("Wrong answer\n");


}
printf("Correct answers:%d\n", c);
printf("Wrong answers:%d\n", w);
fix=1+fix;//za da nqma errori XD
return 0;
}
