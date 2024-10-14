#include "Game.hpp"


Game::Game(){
      std::cout<<"Constructed "<<std::endl;
    //AlreadyEntred.reserve(9);
    
    std::cout << std::endl ;
    userInput.reserve(9);
    userInput = {
    " " , " ", " ",
    " ", " ", " ",
    " ", " ", " "
  } ;
  }

 void Game::PrintGame(){
      std::cout << " Game Updated \n";
       std::cout <<" ___________\n"
            <<"| " <<userInput[0]<< " | "<<userInput[1] <<" | "
            <<userInput[2] <<" |\n"<<
            " -----------\n" <<
            "| "<< userInput[3]<< " | "<<userInput[4] <<" | "
            <<userInput[5]<<" |\n"
            <<" -----------\n" 
            <<"| "<<userInput[6]<<" | "<<userInput[7]<<" | " <<userInput[8]
            <<" |\n"<<" ___________\n"<<std::endl;  
  }

void Game::GetFromUser(){
    int index , times = 0 ;  
    bool flag = false ;
    std::cout << "Enter the Empty Case Number from 0 to 9 "<<std::endl;
    std::cout << "- "<< PlayerTurn << " Player :" ;   
    do{
        if(times > 0 ) {
            std::cout << " The case  fits already, try again "<<std::endl;
        }
        std::cin >> index  ;
        
        times ++ ;
    }while(ItemInRange(index ));
    
    userInput[index] = PlayerTurn ;
    PlayerTurn = PlayerTurn == 'X' ? 'O' : 'X' ;
    AlreadyEntred.push_back(index);
  }
  


int Game::DidPlayerWin(){
      /* cases 
        'X' == tab(0) 
            == tab(1) == tab(2) or 
            == tab(3) == tab(6) or 
            == tab(4) == tab(8)
            tab(1) == tab(4) == tab(7)
            tab(2) 
            == tab(4) == tab(6) or
            == tab(5) == tab(8) 
            tab(3) == tab(4) == tab(5)
            tab(6) == tab(7) == tab(8)
      
      */
      if(userInput[0] !=" "  ){
      if ( (userInput[0] == userInput[1] )
      && (userInput[1] == userInput[2])){
          if(userInput[0] =="X"){
              X_score++ ;
          }else{
              O_score++ ;
          }
          std::cout << userInput[0] << " Player win "<< std::endl;
          return 10;
      }else if ( (userInput[0] == userInput[3] ) && (userInput[3] == userInput[6])  ){
          if(userInput[0] =="X"){
              X_score++ ;
          }else{
              O_score++ ;
          }
          std::cout << userInput[0] << " Player win "<< std::endl;
          return 10;
      }else if( (userInput[0] == userInput[4] ) && (userInput[4] == userInput[8]) ){
          if(userInput[0] =="X"){
              X_score++ ;
          }else{
              O_score++ ;
          }
          std::cout << userInput[0] << " Player win "<< std::endl;
          return 10;
      }
      }else if (userInput[1] !=" " && (userInput[1] == userInput[4] ) && 
      (userInput[1] == userInput[7])){
          if(userInput[1] =="X"){
              X_score++ ;
          }else{
              O_score++ ;
          }
          std::cout << userInput[0] << " Player win "<< std::endl;
          return 10;
      }else if (userInput[3] !=" " && (userInput[3] == userInput[4] ) && 
      (userInput[4] == userInput[5])){
          if(userInput[3] =="X"){
              X_score++ ;
          }else{
              O_score++ ;
          }
          std::cout << userInput[3] << " Player win "<< std::endl;
          return 10;
      }else if (userInput[6] !=" " && (userInput[6] == userInput[7] ) && 
      (userInput[6] == userInput[8])){
          if(userInput[6] =="X"){
              X_score++ ;
          }else{
              O_score++ ;
          }
          std::cout << userInput[6] << " Player win "<< std::endl;
          return 10;
      }else if(userInput[2] !=" "){
      if ( (userInput[6] == userInput[4] ) && 
      (userInput[6] == userInput[2])){
          if(userInput[2] =="X"){
              X_score++ ;
          }else{
              O_score++ ;
          }
          std::cout << userInput[2] << " Player win "<< std::endl;
          return 10 ;
      }else if ( (userInput[5] == userInput[8] ) && 
      (userInput[5] == userInput[2])){
          if(userInput[2] =="X"){
              X_score++ ;
          }else{
              O_score++ ;
          }
          std::cout << userInput[2] << " Player win "<< std::endl;
          return 10;
      }
      }
      return 0;
  }


bool Game::ItemInRange(int& item ){
    for(int i : AlreadyEntred){
        if(item == i ){
           return true;
            
        } 
    }
    return false;
  }

void Game::PrintScore(){
      std::cout<< "X player Score " << X_score 
      << "\nO player Score "<<O_score 
      << std::endl;
  }


void Game::Init(){
      userInput = {
    " " , " ", " ",
    " ", " ", " ",
    " ", " ", " "
  } ;
  AlreadyEntred = {} ;
  }
