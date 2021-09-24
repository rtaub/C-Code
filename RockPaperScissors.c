#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
  int npc, player, win;
  int npcPts=0;
  int playerPts=0;
  printf("---Rock Paper Scissors---");
  printf("\nFirst to what wins?");
  scanf("%d", &win);
  
  //while loop that continues until either the player or npc hit the designated win amount 
  while(npcPts!=win && playerPts!=win){
    //have the player enter a number to represent their choice and store it in player 
    printf("\nEnter Choice: 1=Rock 2=Paper 3=Scissors");
    scanf("%d", &player);
    /*generate a random number 1-3 (rock, paper or scissors) for the npc
    since there isn't a built in function for generating a number in a range I used the 
    formula: num = (rand() % (upper – lower + 1)) + lower */
    npc = (rand()%(3-1+1))+1;
    
    /*check who won the round by putting the player and npc choice through conditions
    that cover every combination in rock, paper, scissors */
    if(player==1 && npc==1){
      printf("\n(Player) Rock X (NPC) Rock = Draw");
    }
    else if(player==1 && npc==2){
      printf("\n(Player) Rock X (NPC) Paper = NPC Win");
      npcPts++;
    }
    else if(player==1 && npc==3){
      printf("\n(Player) Rock X (NPC) Scissors = Player Win");
      playerPts++;
    }
    else if(player==2 && npc==1){
      printf("\n(Player) Paper X (NPC) Rock = Player Win");
      playerPts++;
    }
    else if(player==2 && npc==2){
      printf("\n(Player) Paper X (NPC) Paper = Draw");
    }
    else if(player==2 && npc==3){
      printf("\n(Player) Paper X (NPC) Scissors = NPC Win");
      npcPts++;
    }
    else if(player==3 && npc==1){
      printf("\n(Player) Scissors X (NPC) Rock = NPC Win");
      npcPts++;
    }
    else if(player==3 && npc==2){
      printf("\n(Player) Scissors X (NPC) Paper = Player Win");
      playerPts++;
    }
    else if(player==3 && npc==3){
      printf("\n(Player) Scissors X (NPC) Scissors = Draw");
    }
  }
  
  //if either player has the amount of points to win, print the result
  if(playerPts==win){
    printf("\nPlayer won");
  }
  else if(npcPts==win){
    printf("\nNPC won");
  }
  return 0;
}
