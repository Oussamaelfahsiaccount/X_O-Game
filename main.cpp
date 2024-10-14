#include <iostream>
#include "Game.hpp"
#include <string>
int main(){
  Game G1 ;
  int i = 1 ;
  std::string answer ;
  int endGame = 0 ; 
  G1.PrintGame();
  while(1){
    G1.Init();
  while(i < 10 ){
  G1.GetFromUser();
  G1.PrintGame();
  endGame =G1.DidPlayerWin();
  if( endGame == 10 ){
      G1.PrintScore();
      break ;
  }
  i++;
  }
  std::cout << "Do you want to play again (write Yes or No )"<< std::endl ;
  std::cin >> answer ;
  if(answer == "No"){
      return 0;
  }
  }
  return 0;
}
