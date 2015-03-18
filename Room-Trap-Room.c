/* Room-Trap-Room
C Final Project
*/

#include <stdio.h>
#include <ctype.h>
#include<string.h>
int main (void)
{
   /* Path and choice are initialized as default to begin game */
   /* The splash screen has three choices: 'S' to start, 'Q' to quit, 'H' for Help */
   /* The game has three choices and two paths, A and B; Z is the final stage,
      D is used as Default, E is used to Exit */

   char path = 'D';
   char decide;
   char fname[30];
   char lname[30];
   int choice;

   FILE *f = fopen("log.txt", "a");


    /* HOME SCREEN */
	 printf("                                  \n"
	        "		        ::::: .::::  ::::. ::: :::\n"
            "		        ::.:: :: :: ::: :: :::::::\n"
            "		        ::':: :: :: ::: :: :::::::\n"
            "		        :: :: ::.:: '::.:: :::: ::\n"
            "		        '' ''  ''''  ''''  '' ' ''\n"
            "		                                       \n"
        "		                               ..     ..\n"
        "	 ':::' ::':: ::::  ::':.  :::::. ::':: ::':: ::::.:::\n"
        "	  :::  ::.:' ::':. ::.::  :::.:' :: :: :: :: ::::::::\n"
        "	  :::  ::':: ::.:: ::''   :::':. :: :: :: :: ::::::::\n"
        "	  :::  :: :: ::':: ::     ::: :: ::.:: ::.:: :: :: ::\n"
        "	   '   '' '' '  '' ''      '' '   '''   '''   '    '\n\n\n");

    printf("	Created by Alexis Herrera in C for COP-1220-59606.\n");
	printf("		   Version 2.2 - December 1, 2014\n\n" );

    printf("//////////////////////////////////////////////////////////////");

    printf("\nIf you would like help for controls, \ntype 'H'.");
    printf(" If you have read the manual, type 'S' to start a new game.\n"
           " And type 'Q' if you would like to quit.\n\n");

    /* Loop to create choices */
    printf("------\n");
    while(scanf("%c", &decide) == 1 && choice != 'E')
    {
    printf("------");
    printf("\n");
    printf("//////////////////////////////////////////////////////////////");
    printf("\n");

    /* HELP SCREEN */
    if( decide == 'H' || decide == 'h')
     {
      printf("This game uses options to direct the player in different\n"
             "pathways to reach a goal. The game will present a situation and several \n"
             "options towards solving it.  An example would be as follows:\n\n");

      printf("You are here, what do you do?\n\n"
            " [1:] This\n [2:]  That\n [3:] The Other\n\n");
      printf("You would enter one of the number choices and it would lead you to\n"
             "a different path. Entering a number other than those will quit the game\n\n\n");
     }

    /* QUIT COMMAND */
    if ( decide == 'Q' || decide == 'q')
     {
      printf("Closing program, thank you.\n");
	  path = 'E';
      break;
     }

    /* START GAME COMMAND */
    if ( decide == 'S' || decide == 's')
	{
      printf("The game shall begin\n\n");
	  path = 'D';
	  break;
    }
   }



  /* //////\\\\\\
   GAME BEGINS HERE
     \\\\\\//////
  */




   /* ROOM A1 */
   while (path == 'D' && path != 'E')
   {

     printf(" ____________________________________________________________ \n");
	 printf("|                                                            |\n");
     printf("|                        A - 1                               |\n");
	 printf("|____________________________________________________________|\n\n");
     printf("You have found yourself in a pit, you quickly pick yourself up\n"
           "and take a look at your surroundings.  You have no recollection\n"
           "of how you arrived at this destination nor do you know why you are\n"
           "here. There is a piece of PAPER and a LIGHTER in your pockets\n"
           "A glimmer shines behind you and a door is in front of you.\n\n"
		   "What do you do?\n\n");

   printf("//////////////////////////////////////////////////////////////\n");

     printf("[1:] Check the glimmer behind you.\n"
           "[2:] Check PAPER.\n"
           "[3:] Look up at the ceiling\n\n");

    /* First Choices */
    while(scanf("%d", &choice) == 1)
     { printf("\n");
     if (choice == 1)
      {
       path = 'A';
       break;
      }
     else if (choice == 2)
      {
       printf("The PAPER in your pocket has strange lettering on it\n"
	          "and the numbers \"2-1-3\" written on the back of it.\n\n");
	   printf("What do you want to do?\n\n");
	   printf("[1:] Check the glimmer behind you.\n"
           "[2:] Check PAPER.\n"
           "[3:] Look up at the ceiling\n\n");
      }
     else if (choice == 3)
      {
	   printf("The light from the hole at the top of the pit is shining\n"
	         "through and reflecting off of a surface in the ground.\n");
	   printf("What do you want to do?\n\n");
	   printf("[1:] Check the glimmer behind you.\n"
           "[2:] Check PAPER.\n"
           "[3:] Look up at the ceiling\n\n");
      }
     else
       {
         printf("\nQuitting Session\n\n");
         path = 'E';
         break;
       }
     }
   }


  /* //////\\\\\\
       PATH A-2
     \\\\\\//////
  */

   if (path == 'A')
   {
    printf(" ____________________________________________________________ \n");
	printf("|                                                            |\n");
    printf("|                        A - 2                               |\n");
    printf("|____________________________________________________________|\n\n");
    printf("The shimmering behind you is coming from the light from the\n"
           "ceiling reflecting off of a knife that is hidden under some\n"
           "debris. Whoever threw you down here must have dropped\n"
           "it when you landed.  Thankfully, it didn't hit you on the way\n"
           "down.  You pick it up and head through the door.\n\n");

    printf("You enter the room and immediately notice how completely\n"
           "dark it is, you can make out a door in front of you and to the\n"
           "left of you.  A strong smell of something that smells like gas\n"
           "is in the air.\n\nWhat do you do?\n\n");

    printf("//////////////////////////////////////////////////////////////\n");

    printf("[1:] Move to the door in front of you.\n"
           "[2:] Flick your lighter to shine a light\n"
           "[3:] Move to the door to the left of you.\n\n");

    /*Choices*/
    while(scanf("%d", &choice) == 1)
     {
	 printf("\n");
     if (choice == 1)
      {
       path = 'A';
       break;
      }
     else if (choice == 2)
      {
       path = 'E';
       printf("You pull out your lighter and the moment you flick it on, the\n"
              "whole room erupts in flames, killing you instantly.");
       break;
      }
     else if (choice == 3)
      {
	   path = 'B';
       break;
      }
     else
       {
         printf("\nQuitting Session\n\n");
         path = 'E';
         break;
       }
     }
   }

  /* //////\\\\\\
       PATH A-3
     \\\\\\//////
  */

   if (path == 'A')
   {
    printf(" ____________________________________________________________ \n");
	printf("|                                                            |\n");
    printf("|                        A - 3                               |\n");
    printf("|____________________________________________________________|\n\n");
	  printf("There is a small hole with a strange marking on it, the\n"
	         "symbols look highly familiar, so you immediately grab the\n"
 			 "knife you had from before and plunge it into the hole, the\n"
 			 "border around it lights up and the door turns open for you.\n\n");

	  printf("You escape the darkness and enter the room in front of you\n"
           	 "which is dimly lit, you feel for the lighter in your pocket\n"
      	     "and flick it on.  The fire from the lighter illuminates only\n"
   			 "a small portion so you are covered in darkness, save for\n"
			 "a few plaques underneath unlit torches, numbered 2-1-3.\n\n"
			 "What do you do?\n\n");

     printf("//////////////////////////////////////////////////////////////\n");

     printf("[1:] Light torches in sequence left-middle-right\n"
           "[2:] Light torches in sequence right-middle-left\n"
           "[3:] Light torches in sequence middle-left-right\n\n");

    /*Choices*/
    while(scanf("%d", &choice) == 1)
     {
	 printf("\n");
     if (choice == 1)
      {
	   printf("The torches light for a moment and immediately go out. Try once more.\n\n");
	   printf("What do you want to do?\n\n");
       printf("[1:] Light torches in sequence left-middle-right\n"
           "[2:] Light torches in sequence right-middle-left\n"
           "[3:] Light torches in sequence middle-left-right\n\n");
      }
     else if (choice == 2)
      {
	   printf("The torches light for a moment and immediately go out. Try once more.\n\n");
	   printf("What do you want to do?\n\n");
       printf("[1:] Light torches in sequence left-middle-right\n"
           "[2:] Light torches in sequence right-middle-left\n"
           "[3:] Light torches in sequence middle-left-right\n\n");
      }
     else if (choice == 3)
      {
       printf("The flames from the torches light in a blaze and a wall\n"
              "slides down.\n\n");
	   path = 'A';
       break;
      }
     else
       {
         printf("\nQuitting Session\n\n");
         path = 'E';
         break;
       }
     }
   }


  /* //////\\\\\\
       PATH A-4
     \\\\\\//////
  */
   if (path == 'A')
    {
    printf(" ____________________________________________________________ \n");
	printf("|                                                            |\n");
    printf("|                        A - 4                               |\n");
    printf("|____________________________________________________________|\n\n");
    printf("The room is cool and well-lit, a stark contrast to the room\n"
    	     "you were previously in, there is a door with an insignia on\n"
   			 "it and you feel that paper that you had since your trek began\n"
			 "has the same symbols on the door.  You still have no idea why\n"
			 "you even had that paper to begin with and you realize that\n"
			 "whoever it was that threw you down there had stuffed that\n"
			 "piece of paper in your pocket.\n\n"
			 "Only one way out and that's through that door.\n\n");

      printf("//////////////////////////////////////////////////////////////\n");
      printf("[1:] Continue\n\n");

    /*Choices*/
      while(scanf("%d", &choice) == 1)
      {
        if (choice == 1)
        {
         path = 'Z';
		 break;
        }
        else if (choice == 2 || choice == 3)
        {
         printf("Invalid choice\n\n");
        }
        else
        {
         printf("\nQuitting Session\n\n");
         path = 'E';
         break;
        }
      }
	}


  /* //////\\\\\\
    PATH A-FINALE
     \\\\\\//////
  */

   while (path == 'Z')
    {
    printf(" ____________________________________________________________ \n");
	printf("|                                                            |\n");
    printf("|                        A - FINALE                          |\n");
    printf("|____________________________________________________________|\n\n");
	  printf("You enter the chamber hoping for freedom and are confronted\n"
	         "by a man in a cat mask and a long robe and tells you the\n"
			 "following, \"Congratulations on making it all the way here,\n"
 			 "you made the right choices, but now you will make the most\n"
			 "important one of all, choose one of the following doors\".\n\n");

	printf("//////////////////////////////////////////////////////////////\n");
	printf("[1:] Door 1\n"
           "[2:] Door 2\n"
           "[3:] Door 3\n\n");

    /*Choices*/
      while(scanf("%d", &choice) == 1)
      {
        if (choice == 1)
        {
         path = 'W';
		 break;
        }
        else if (choice == 2)
        {
         path = 'X';
		 break;
        }
		else if (choice == 3)
		{
		 path = 'Y';
		 break;
		}
        else
        {
         printf("\nQuitting Session\n\n");
         path = 'E';
         break;
        }
      }
	}



  /* //////\\\\\\
       PATH B
     \\\\\\//////

  */

   if (path == 'B')
   {
    printf(" ____________________________________________________________ \n");
	printf("|                                                            |\n");
    printf("|                        B - 1                               |\n");
    printf("|____________________________________________________________|\n\n");

    printf("The dark damp room you have just entered has one long chute\n"
	       "that looks like it leads to absolute nothingness, you have\n"
		   "no other choice as the door behind you has closed.\n\n"
		   "Well, here goes nothing.\n\n");

	printf("//////////////////////////////////////////////////////////////\n");

    printf("[1:] Continue\n\n");

	 /* Choices */
      while(scanf("%d", &choice) == 1)
      {
        if (choice == 1)
        {
         path = 'A';
		 break;
        }
        else if (choice == 2 || choice == 3)
        {
         printf("Invalid choice\n\n");
        }
        else
        {
         printf("\nQuitting Session\n\n");
         path = 'E';
         break;
        }
      }
   }



  /* //////\\\\\\
       PATH A-4 IF CHOICE B
     \\\\\\//////
  */
   if (path == 'A')
    {
    printf(" ____________________________________________________________ \n");
	printf("|                                                            |\n");
    printf("|                        A - 4                               |\n");
    printf("|____________________________________________________________|\n\n");
    printf("The room is cool and well-lit, a stark contrast to the room\n"
    	     "you were previously in, there is a door with an insignia on\n"
   			 "it and you feel that paper that you had since your trek began\n"
			 "has the same symbols on the door.  You still have no idea why\n"
			 "you even had that paper to begin with and you realize that\n"
			 "whoever it was that threw you down there had stuffed that\n"
			 "piece of paper in your pocket.\n\n"
			 "Only one way out and that's through that door.\n\n");

      printf("//////////////////////////////////////////////////////////////\n");
      printf("[1:] Continue\n\n");

    /*Choices*/
      while(scanf("%d", &choice) == 1)
      {
        if (choice == 1)
        {
         path = 'Z';
		 break;
        }
        else if (choice == 2 || choice == 3)
        {
         printf("Invalid choice\n\n");
        }
        else
        {
         printf("\nQuitting Session\n\n");
         path = 'E';
         break;
        }
      }
	}


  /* //////\\\\\\
    PATH A-FINALE IF CHOICE B
     \\\\\\//////
  */

   if (path == 'Z')
    {
    printf(" ____________________________________________________________ \n");
	printf("|                                                            |\n");
    printf("|                        A - FINALE                          |\n");
    printf("|____________________________________________________________|\n\n");
	  printf("You enter the chamber hoping for freedom and are confronted\n"
	         "by a man in a cat mask and a long robe and tells you the\n"
			 "following, \"Congratulations on making it all the way here,\n"
 			 "you made the right choices, but now you will make the most\n"
			 "important one of all, choose one of the following doors\".\n\n");

	printf("//////////////////////////////////////////////////////////////\n");
	printf("[1:] Door 1\n"
           "[2:] Door 2\n"
           "[3:] Door 3\n\n");

    /*Choices*/
      while(scanf("%d", &choice) == 1)
      {
        if (choice == 1)
        {
         path = 'W';
		 break;
        }
        else if (choice == 2)
        {
         path = 'X';
		 break;
        }
		else if (choice == 3)
		{
		 path = 'Y';
		 break;
		}
        else
        {
         printf("\nQuitting Session\n\n");
         path = 'E';
         break;
        }
      }
	}


  /* //////\\\\\\
    ENDING CHOICES
     \\\\\\//////
  */

  if (path == 'W')
   {
    printf("\nThe door opens and you are in a meadow, the fresh air and\n"
     "the smell of flowers hits your nose, your hometown is nearby\n"
     "and as you walk you notice a wooden table with a notebook on it.\n"
     "You open the book up and read the following, \"Thank you for\n"
     "playing this game and I hope you enjoyed playing it, it\n"
     "reminded me of those old Choose-Your-Own Adventure books,\n"
     "have a great day!\"\n\n");
   }
  else if (path == 'X')
   {
    printf("\nThe door opens and a pie hits you in the face.\n"
	       "You have died, Game Over.\n\n");
   }

  else if (path == 'Y')
   {
    printf("\nThe door opens and the game is over, the creator submits the\n"
       "assignment to his professor, closes his game, the compiler,\n"
       "and the text editing program he used to make it all.  He\n"
       "goes to class and takes the final exam.\n\n");
   }
  else
    {
	 printf("\n\nGAME OVER. \n\n");
	}


  /* NAME SCREEN FOR LOG */

while (path != 'E')
  {

  printf("Please enter your full name: ");
  scanf("%s", fname);
  scanf("%s", lname);
  puts("\n");
  fprintf(f,"%s %s\n", fname, lname);
  path = 'E';
  }
  getchar();
  return 0;
}
