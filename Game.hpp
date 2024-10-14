#ifndef "Game"
#define "Game" 

#include <string>
#include <vector>
#include <iostream>


class Game{
  
  public :
  Game();
  
  void PrintGame();
  
  void GetFromUser();
  
  int DidPlayerWin();
  

  
  bool ItemInRange(int& item );
  
  void PrintScore();
  void Init();
  private :
  int O_score =  0 ; 
  int X_score =  0 ; 
  bool Congratulations = false ;
  std::vector<int> AlreadyEntred;
  std::vector<std::string> userInput ;
  char PlayerTurn = 'X'; 
  
  
};


#endif
