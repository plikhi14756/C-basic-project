//
//  main.c
//  Mini Project 1
//  Game - Stone, Paper and scissors
//  Created by PRANAV LIKHI on 2023-06-29.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int computerChoice()
{
    
    int choice;
    
    srand(time(NULL));
    
        
        choice = (rand() % 3) + 1;
        
        switch (choice)
        {
            case 1:
               // printf("stone\n");
                return 's';
                break;
                
            case 2:
                //printf("paper\n");
                return 'p';
                break;
                
            case 3:
                //printf("scissors\n");
                return 'S';
                break;
                
            default:
                //printf("Invalid Choice\n");
                return 0;
        }
        
    

   
  //  return choice;
}



int player1Choice()

{
    
    char choose;
    getchar();
    printf("Player-1 choice (s - stone, p - paper and S - scissors): ");
    scanf("%c", &choose);
    
    switch (choose)
    {
        case 's':
          //  printf("Player 1 choice is: stone\n");
            return 's';
            break;
            
        case 'p':
            return 'p';
            break;
            
        case 'S':
          //  printf("Player 1 choice is: Scissors\n");
            return 'S';
            break;
            
        default:
         //   printf("Invalid Choice\n");
            return 0;
    }
    

  
}

int player2Choice()
{
    
    char choose;
    getchar();
    printf("Player-2 choice (s - stone, p - paper and S - scissors): ");
    scanf("%c", &choose);
    
    switch (choose)
    {
        case 's':
            
            return 's';
            break;
            
        case 'p':
            
            return 'p';
            break;
            
        case 'S':
          
            return 'S';
            break;
            
        default:
            printf("Invalid Choice\n");
            return 0;
    }
    
 
    
}

int getReasult1()
    {
        char result1 = computerChoice();
        char result2 = player1Choice();
    
       // Numerical values are (stone (s) - 115), (paper (p) - 112) and (scissors (S) - 83)
    
    printf("(w - Winner, l - looser and d - draw)\n");
        
        if (result1 == result2)
        {
            printf("(Computer choice -  %c)", result1);
            printf("\n");
            return 'd';
        }
            else if (result1 < result2)
            {
                printf("computer wins :) (Computer choice -  %c)", result1);
                printf("\n");
                return 'w';
            }
            
         else if (result1 > result2 || result1 < result2)
         {
             printf("Player 1 wins :) (Computer choice -  %c)", result1);
             printf("\n");
             return 'l';
         }
            else
        
        return 0;
            
            
    }

    int getReasult2()
    {
        char result2 = player1Choice();
        char result3 = player2Choice();
        
        // Numerical values are (stone/rock (s) - 115), (paper (p) - 112) and (scissors (S) - 83)
        
        printf("w - Winner, l - looser and d - draw\n");
        
        if (result2 == result3)
        {
            printf("its a draw\n");
            return 'd';
        }
        
                   
            else if (result2 < result3)
            {
                printf("Player 1 wins :)\n");
                return 'w';
            }
            //
         else if (result2 > result3 || result2 < result3)
         {
             printf("Player 2 wins :)\n");
             return 'l';
         }
            else
        
        return 0;
            
            
    }




int main()

{
    
    
    printf("************************************ Welcome To Stone, Paper and scissors game ************************************\n");
    
    int option;
    
    printf("Do you want to play with the computer or want to play with your friend (player 2) (1 - with computer, 2 - with another player, 3 - to exit game): ");
    scanf("%d", &option);
    
  
        
    switch (option)
    {
        case 1:
           
            printf("\n");
            printf("%c", getReasult1());
            printf("\n");
            
        break;
            
        case 2:
           
            printf("\n");
            printf("%c", getReasult2());
            printf("\n");
            break;
            
        case 3:
            
         
            printf("Thanks for playing the game :)");
            printf("\n************************************************* The END *********************************************************\n");
            return 0;
            
        
        
        default:
            
            return 0;
    }
    
    
    printf("Thanks for playing the game :)\n");
    printf("\n************************************************* The END *********************************************************\n");
    return 0;
    
}
