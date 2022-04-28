#include <stdio.h>
#include <string.h>


typedef  struct  players {
                                          char  fname [ 15 ] ;
                                          char  lname [ 15 ] ;
                                          char  team  [ 15 ] ;
                                          char  division [ 5 ] ;
                                          char  conference [ 5 ] ;
                                          char  position  [ 5 ] ;
                                          int   age ;
                                          int   height ;
                                          int   num;
                                      }  players ;


int main (void)
{
    //Local variables declared... add additional variables as required
    players  records [132] ;
    int  menu_choice = 0, col = 0, d = 0, c = 1 ;
    char fnameguess [15], lnameguess [15];
    //1. Open the cars.dat file in the read mode and confirm
   //     you have properly opened the file.
   FILE * read_ptr;
   read_ptr = fopen("players.dat" , "r" ) ;

   if(read_ptr == NULL)
   {
      printf("FILE NOT PROPERLY OPENED");
   }
   else
   {
      printf("File is opened and in read mode\n\n");
   }


    //2. Read the entire contents of the cars.dat file into the
    //    inventory array.
   for ( col = 0 ; col < 132 ; col = col + 1 )
   {
      fscanf( read_ptr , "%s %s %s %s %s %s %d %d %d" , &records[col].fname,&records[col].lname,
                &records[col].team,&records[col].division,
               &records[col].conference,&records[col].position,&records[col].age,
               &records[col].height, &records[col].num  ) ;
   }

   for(int g = 1; g <+ 10; g++){
      printf("\nGuess Number %d:",g);
      scanf("%s",&fnameguess);
      scanf("%s",&lnameguess);
      
      for(int j = 0; j < 132; j++){
         if(strcmp(records[j].fname,fnameguess) == 0){
            if(strcmp(records[j].lname,lnameguess) == 0){
                d = j;
            }
         }
      
      }
      if(strcmp(records[c].fname,records[d].fname) == 0){
         if(strcmp(records[c].lname,records[d].lname) == 0){
             printf("CORRECT GUESS ON ATTEMPT : %d",g);
             return(0);
            }
         }
      if(strcmp(records[c].team,records[d].team) == 0){
         printf("Correct Team %s\n",records[d].team);
      }
      else{
         printf("Wrong Team %s\n",records[d].team );
      }      

      if(strcmp(records[c].division,records[d].division) == 0){
         printf("Correct Division %s\n",records[d].division);
      }
      else{
         printf("Wrong Division %s\n",records[d].division);
      }

      if(strcmp(records[c].conference,records[d].conference) == 0){
         printf("Correct Conference %s\n",records[d].conference);
      }
      else{
         printf("Wrong Conference %s\n",records[d].conference);
      }

      if(strcmp(records[c].position,records[d].position) == 0){
         printf("Correct Position %s\n",records[d].position);
      }
      else{
         printf("Wrong Position %s\n",records[d].position);
      }
      if(records[c].age == records[d].age){
         printf("Correct Age %d\n",records[d].age);
      }
      else if(records[c].age < records[d].age){
         printf("Player Younger Than %d\n",records[d].age);
      }
      else{
         printf("Player Older Than %d\n",records[d].age);
      }
      if(records[c].height == records[d].height){
         printf("Correct Age %d\n",records[d].height);
      }
      else if(records[c].height < records[d].height){
         printf("Player Shorter Than %d\n",records[d].height);
      }
      else{
         printf("Player Taller Than %d\n",records[d].height);
      }
      if(records[c].num == records[d].num){
         printf("Correct Number %d\n",records[d].num);
      }
      else if(records[c].num < records[d].num){
         printf("Player Number Lower Than %d\n",records[d].num);
      }
      else{
         printf("Player Number Higher Than %d\n",records[d].num);
      }



   }
   printf("Player Was %s %s",records[c].fname,records[c].lname);
   return 0;
}
