#include"std_lib_facilities.h"

int main(){
  //need add random
  vector<int> game {1,1,1,1,1,1,1,1,1,1};
  
  // 1 = a rock
  // 2 = scissors
  // 3 = peper

  cout << "For convenience, enable Caps Lock :-)\n\n";
  cout << "P = paper\nR = a rock\nS = scissors\n";
  
  int win  = 0;
  int lose = 0;
  int draw = 0;
  
  for(int i = 0;i < game.size();i++){
  string input = " ";
  cout << "You say: ";
  cin >> input;

  //if's

  string z = " ";
  if(game[i] == 1){z = "a rock";}
  if(game[i] == 2){z = "scissors";}
  if(game[i] == 3){z = "paper";}
  
    if(input == "P"){
      if(game[i] == 1){cout << "Victory!" << " PC said " << z << "\n\n"; win++;}
      if(game[i] == 2){cout << "Lose :("  << " PC said " << z << "\n\n"; lose++;}
      if(game[i] == 3){cout << "Drow!"   << " PC said "  << z << "\n\n"; draw++;}
    }
    
    if(input == "S"){
      if(game[i] == 3){cout << "Victory!" << " PC said " << z << "\n\n"; win++;}
      if(game[i] == 1){cout << "Lose :("  << " PC said " << z << "\n\n"; lose++;}
      if(game[i] == 2){cout << "Drow!"    << " PC said " << z << "\n\n"; draw++;}
    }
    
    if(input == "R"){
      if(game[i] == 2){cout << "Victory!" << " PC said " << z << "\n\n"; win++;}
      if(game[i] == 3){cout << "Lose :("  << " PC said " << z << "\n\n"; lose++;}
      if(game[i] == 1){cout << "Drow!"    << " PC said " << z << "\n\n"; draw++;}
    }
    
    if(input != "P"&input != "S"& input != "R"){cout << "Uups something went wrong...\n";}
    
  }
  
  //stat
  
    cout << "╔══════════╗\n";
    cout << "║ wins = " << win  <<" ║ STAT\n";
    cout << "║ lose = " << lose <<" ║\n";
    cout << "║ draw = " << draw <<" ╚══════╗\n";
    cout << "║ total game = " << game.size() << " ║\n";
    cout << "╚═════════════════╝\n";
   
}

