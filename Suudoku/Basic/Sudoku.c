#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<dos.h>
#include<dir.h>
#include<string.h>
char matrix[9][9];
int k,l,s;
FILE *fp;
char g;
 char *point[3000];
 void start();
 void printing();
 void progress();
 void progprint();
int constants();
void part1();
void block();
void answer();
void setcolor();
int checking();
void getmove();
void start();
int winner();
int actual();
int a=0,f=0;
 int main(){
 for(int i=0;i<9;i++)
  for(int j=0;j<9;j++)
  matrix[i][j]='_';
constants();
actual();
return 0;
 }



 void printing(){
     int c=0;
 system("cls");printf("\n\n");
 for(int i=0;i<9;i++){
         setcolor(15);
    printf("\t\t \263              \263\n");
    if(i==3||i==6){printf("  _______________\263______________\263______________\n");printf("\t\t \263              \263\n");}
    for(int j=0;j<9;j++){
        setcolor(15);
        if
    ((i==0&&j==0)||(i==0&&j==4)||(i==0&&j==8)||(i==1&&j==3)||(i==1&&j==5)||(i==2&&j==0)||(i==2&&j==2)||(i==2&&j==6)||(i==2&&j==8)||(i==3&&j==0)||(i==3&&j==2)||(i==3&&j==4)||(i==3&&j==6)||(i==3&&j==8)||(i==4&&j==2)||(i==4&&j==6)||(i==5&&j==0)||(i==5&&j==2)||(i==5&&j==4)||(i==5&&j==6)||(i==5&&j==8)||(i==6&&j==0)||(i==6&&j==2)||(i==6&&j==6)||(i==6&&j==8)||(i==7&&j==3)||(i==7&&j==5)||(i==8&&j==0)||(i==8&&j==4)||(i==8&&j==8))
       {

        setcolor(2);

  if( j==3 || j==6 ){setcolor(15);printf("  \263 ");setcolor(2);printf("%c",matrix[i][j] );}
    else{
        j==8?printf("%5c\n",matrix[i][j]):printf("%5c",matrix[i][j]);}
        setcolor(15);
       }
       else{

            setcolor(11);
            for(int b=0;b<a;b++){

            if(point[b]==&matrix[i][j]){


                c=c+1;


       setcolor(12);
         if( j==3 || j==6 ){setcolor(15);printf("  \263 ");setcolor(12);printf("%c",matrix[i][j] );}
       else{printf("%5c",matrix[i][j] );}
  if(j==8)
  {
      printf("\n");
  }



       setcolor(15);break;}




            }
     if(c!=1){


            if(matrix[i][j]=='_')
        {

             setcolor(8);
     if( j==3 || j==6 ){setcolor(15);printf("  \263 ");setcolor(8);printf("%c",matrix[i][j] );}
  else{printf("%5c",matrix[i][j] );}
  if(j==8)
  {
      printf("\n");
  }
        }

else{

             setcolor(3);
     if( j==3 || j==6 ){setcolor(15);printf("  \263 ");setcolor(3);printf("%c",matrix[i][j] );}
  else{printf("%5c",matrix[i][j] );}
  if(j==8)
  {
      printf("\n");
  }
        }






     }c=0;





            }


            }
    }
setcolor(15);
printf("\t\t \263              \263");
printf("\n\n");
setcolor(15);

}



int checking(){
a=0;
for(int i=0;i<9;i++){
    for(int j=0;j<8;j++)
    {
        for(int m=j+1;m<9;m++){

          if((matrix[i][j]==matrix[i][m])&&(matrix[i][j]!='_')&&(matrix[i][m]!='_')){point[a]=&matrix[i][j];a++;point[a]=&matrix[i][m];a++;}



            }







    }





}






for(int i=0;i<9;i++){
    for(int j=0;j<8;j++)
    {
        for(int m=j+1;m<9;m++){

          if((matrix[j][i]==matrix[m][i])&&(matrix[j][i]!='_')&&(matrix[m][i]!='_')){point[a]=&matrix[j][i];a++;point[a]=&matrix[m][i];a++;}



            }







    }





}





for( int m=0;m<9;m++)
{
        for(int n=0;n<9;n++)
        {
                        if(m%3==0&&n%3==0)
                        {
                              int x,y;


                            for(int i=m;i<(m+3);i++)
                            {
                                for(int j=n;j<(n+3);j++)
                                {
                                x=i;y=j+1;
                                label2:
                                if((matrix[i][j]==matrix[x][y])&&(matrix[i][j]!='_')&&(matrix[x][y]!='_')){point[a]=&matrix[i][j];a++;point[a]=&matrix[x][y];a++;    }

                                else if(y<(n+2))
                                     {
                                         y++;goto label2;
                                     }
                                else if(x<(m+2))

                                    {
                                        x++;y=n;
                                        goto label2;

                                    }
                                }

                        }


                    }
}


}























return 0;



}






 int constants(){

matrix[0][0]='7';
matrix[0][4]='3';
matrix[0][8]='5';
matrix[1][3]='7';
matrix[1][5]='6';
matrix[2][0]='1';
matrix[2][2]='4';
matrix[2][6]='6';
matrix[2][8]='2';
matrix[3][0]='8';
matrix[3][2]='2';
matrix[3][4]='5';
matrix[3][6]='3';
matrix[3][8]='6';
matrix[4][2]='6';
matrix[4][6]='5';
matrix[5][0]='5';
matrix[5][2]='7';
matrix[5][4]='8';
matrix[5][6]='4';
matrix[5][8]='9';
matrix[6][0]='4';
matrix[6][2]='1';
matrix[6][6]='2';
matrix[6][8]='8';
matrix[7][3]='5';
matrix[7][5]='2';
matrix[8][0]='9';
matrix[8][4]='6';
matrix[8][8]='1';




/*
matrix[0][0]='7';matrix[0][1]='6';matrix[0][2]='9';matrix[0][3]='2';matrix[0][4]='3';matrix[0][5]='1';matrix[0][6]='8';matrix[0][7]='4';matrix[0][8]='5';
matrix[1][0]='2';matrix[1][1]='8';matrix[1][2]='5';matrix[1][3]='7';matrix[1][4]='4';matrix[1][5]='6';matrix[1][6]='1';matrix[1][7]='9';matrix[1][8]='3';
matrix[2][0]='1';matrix[2][1]='3';matrix[2][2]='4';matrix[2][3]='8';matrix[2][4]='9';matrix[2][5]='5';matrix[2][6]='6';matrix[2][7]='7';matrix[2][8]='2';
matrix[3][0]='8';matrix[3][1]='4';matrix[3][2]='2';matrix[3][3]='9';matrix[3][4]='5';matrix[3][5]='7';matrix[3][6]='3';matrix[3][7]='1';matrix[3][8]='6';
matrix[4][0]='3';matrix[4][1]='9';matrix[4][2]='6';matrix[4][3]='1';matrix[4][4]='2';matrix[4][5]='4';matrix[4][6]='5';matrix[4][7]='8';matrix[4][8]='7';
matrix[5][0]='5';matrix[5][1]='1';matrix[5][2]='7';matrix[5][3]='6';matrix[5][4]='8';matrix[5][5]='3';matrix[5][6]='4';matrix[5][7]='2';matrix[5][8]='9';
matrix[6][0]='4';matrix[6][1]='5';matrix[6][2]='1';matrix[6][3]='3';matrix[6][4]='7';matrix[6][5]='9';matrix[6][6]='2';matrix[6][7]='6';matrix[6][8]='8';
matrix[7][0]='6';matrix[7][1]='7';matrix[7][2]='8';matrix[7][3]='5';matrix[7][4]='1';matrix[7][5]='2';matrix[7][6]='9';matrix[7][7]='3';matrix[7][8]='4';
matrix[8][0]='9';matrix[8][1]='2';matrix[8][2]='3';matrix[8][3]='4';matrix[8][4]='6';matrix[8][5]='8';matrix[8][6]='7';matrix[8][7]='5';matrix[8][8]='1';
*/
return 0;

}

 void setcolor(int ForgC)
 {
 WORD wColor;

  HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
  CONSOLE_SCREEN_BUFFER_INFO csbi;

                       //We use csbi for the wAttributes word.
 if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
 {
                 //Mask out all but the background attribute, and add in the forgournd color
      wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
      SetConsoleTextAttribute(hStdOut, wColor);
 }
 return;
}





void getmove()
{
   block();
if(s!=100 && s!=200 && s!=300){
   if
    (


     (k==0 && l==0)||
(k==0 && l==4)||
(k==0 && l==8)||
(k==1 && l==3)||
(k==1 && l==5)||
(k==2 && l==0)||
(k==2 && l==2)||
(k==2 && l==6)||
(k==2 && l==8)||
(k==3 && l==0)||
(k==3 && l==2)||
(k==3 && l==4)||
(k==3 && l==6)||
(k==3 && l==8)||
(k==4 && l==2)||
(k==4 && l==6)||
(k==5 && l==0)||
(k==5 && l==2)||
(k==5 && l==4)||
(k==5 && l==6)||
(k==5 && l==8)||
(k==6 && l==0)||
(k==6 && l==2)||
(k==6 && l==6)||
(k==6 && l==8)||
(k==7 && l==3)||
(k==7 && l==5)||
(k==8 && l==0)||
(k==8 && l==4)||
(k==8 && l==8)
     )
     {
         printing();
         printf("\n\t\tInvalid Coordinates\n\n");

         getmove();

     }
     else{ start();

     }
}


}


   void start(){

        printf("\n\t\tNumber you want to enter ");
      scanf(" %c",&g);


         matrix[k][l]=g;

        }



int winner(){

for(int i=0;i<9;i++){
    for(int j=0;j<8;j++)
    {
        for(int m=j+1;m<9;m++){

          if(matrix[i][j]==matrix[i][m]){return 0;}

}
}
}






for(int i=0;i<9;i++){
    for(int j=0;j<8;j++)
    {
        for(int m=j+1;m<9;m++){

          if(matrix[j][i]==matrix[m][i]){return 0;}



            }







    }





}





for( int m=0;m<9;m++)
{
        for(int n=0;n<9;n++)
        {
                        if(m%3==0&&n%3==0)
                        {
                              int x,y;


                            for(int i=m;i<(m+3);i++)
                            {
                                for(int j=n;j<(n+3);j++)
                                {
                                x=i;y=j+1;
                                label2:
                                if(matrix[i][j]==matrix[x][y]){return 0;  }

                                else if(y<(n+2))
                                     {
                                         y++;goto label2;
                                     }
                                else if(x<(m+2))

                                    {
                                        x++;y=n;
                                        goto label2;

                                    }
                                }

                        }


                    }
}


}
f=f+1;

return 0;

}














int actual(){
    printing();
    getmove();
    checking();
    printing();
    winner();
  if(s==100 )
  {
       printf("THANK YOU FOR PLAYING");
       return 0;
  }

        if(f==0){actual();  }
    else{ printf("you won");              }








return 0;

}

void block(){
    int r;
printf("enter block number and move position ");
scanf("%d %d",&s,&r);

if(s==1){

    switch(r){
    case 1:k=0;l=0;break;
    case 2:k=0;l=1;break;
    case 3:k=0;l=2;break;
    case 4:k=1;l=0;break;
    case 5:k=1;l=1;break;
    case 6:k=1;l=2;break;
    case 7:k=2;l=0;break;
    case 8:k=2;l=1;break;
    case 9:k=2;l=2;break;
    default: printing();
         printf("\n\t\tInvalid Coordinates\n\n");

         getmove();

    }
}
else if(s==2){

    switch(r){
    case 1:k=0;l=3;break;
    case 2:k=0;l=4;break;
    case 3:k=0;l=5;break;
    case 4:k=1;l=3;break;
    case 5:k=1;l=4;break;
    case 6:k=1;l=5;break;
    case 7:k=2;l=3;break;
    case 8:k=2;l=4;break;
    case 9:k=2;l=5;break;
    default: printing();
         printf("\n\t\tInvalid Coordinates\n\n");

         getmove();

    }
}
else if(s==3){

    switch(r){
    case 1:k=0;l=6;break;
    case 2:k=0;l=7;break;
    case 3:k=0;l=8;break;
    case 4:k=1;l=6;break;
    case 5:k=1;l=7;break;
    case 6:k=1;l=8;break;
    case 7:k=2;l=6;break;
    case 8:k=2;l=7;break;
    case 9:k=2;l=8;break;
    default: printing();
         printf("\n\t\tInvalid Coordinates\n\n");

         getmove();

    }
}
else if(s==4){

    switch(r){
    case 1:k=3;l=0;break;
    case 2:k=3;l=1;break;
    case 3:k=3;l=2;break;
    case 4:k=4;l=0;break;
    case 5:k=4;l=1;break;
    case 6:k=4;l=2;break;
    case 7:k=5;l=0;break;
    case 8:k=5;l=1;break;
    case 9:k=5;l=2;break;
    default: printing();
         printf("\n\t\tInvalid Coordinates\n\n");

         getmove();

    }
}

else if(s==5){

    switch(r){
    case 1:k=3;l=3;break;
    case 2:k=3;l=4;break;
    case 3:k=3;l=5;break;
    case 4:k=4;l=3;break;
    case 5:k=4;l=4;break;
    case 6:k=4;l=5;break;
    case 7:k=5;l=3;break;
    case 8:k=5;l=4;break;
    case 9:k=5;l=5;break;
    default: printing();
         printf("\n\t\tInvalid Coordinates\n\n");

         getmove();

    }
}

else if(s==6){

    switch(r){
    case 1:k=3;l=6;break;
    case 2:k=3;l=7;break;
    case 3:k=3;l=8;break;
    case 4:k=4;l=6;break;
    case 5:k=4;l=7;break;
    case 6:k=4;l=8;break;
    case 7:k=5;l=6;break;
    case 8:k=5;l=7;break;
    case 9:k=5;l=8;break;
    default: printing();
         printf("\n\t\tInvalid Coordinates\n\n");

         getmove();

    }
}

else if(s==7){

    switch(r){
    case 1:k=6;l=0;break;
    case 2:k=6;l=1;break;
    case 3:k=6;l=2;break;
    case 4:k=7;l=0;break;
    case 5:k=7;l=1;break;
    case 6:k=7;l=2;break;
    case 7:k=8;l=0;break;
    case 8:k=8;l=1;break;
    case 9:k=8;l=2;break;
    default: printing();
         printf("\n\t\tInvalid Coordinates\n\n");

         getmove();

    }
}

else if(s==8){

    switch(r){
    case 1:k=6;l=3;break;
    case 2:k=6;l=4;break;
    case 3:k=6;l=5;break;
    case 4:k=7;l=3;break;
    case 5:k=7;l=4;break;
    case 6:k=7;l=5;break;
    case 7:k=8;l=3;break;
    case 8:k=8;l=4;break;
    case 9:k=8;l=5;break;
    default: printing();
         printf("\n\t\tInvalid Coordinates\n\n");

         getmove();

    }
}

else if(s==9){

    switch(r){
    case 1:k=6;l=6;break;
    case 2:k=6;l=7;break;
    case 3:k=6;l=8;break;
    case 4:k=7;l=6;break;
    case 5:k=7;l=7;break;
    case 6:k=7;l=8;break;
    case 7:k=8;l=6;break;
    case 8:k=8;l=7;break;
    case 9:k=8;l=8;break;
    default: printing();
         printf("\n\t\tInvalid Coordinates\n\n");

         getmove();

    }
}

else if(s==100){
        answer();



}
else if(s==200){
        progress();



}
else if(s==300){
        progprint();



}
        else{
    printing();
         printf("\n\t\tInvalid Coordinates\n\n");

         getmove();
}






}
void answer(){
        fp=fopen("answer.txt","r");
        for(int i=0;i<9;i++){
    for(int j=0;j<9;j++){
        matrix[i][j]=getc(fp);

    }

}
fclose(fp);



}
void progress(){
fp=fopen("progress.txt","w");
for(int i=0;i<9;i++){
    for(int j=0;j<9;j++){
        putc(matrix[i][j],fp);

    }

}

fclose(fp);

}
void progprint(){

        fp=fopen("progress.txt","r");
        for(int i=0;i<9;i++){
    for(int j=0;j<9;j++){
        matrix[i][j]=getc(fp);

    }

}
fclose(fp);



}
