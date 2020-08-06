#include <iostream>
#include "oyun.h"
using namespace std;

int main(){
   XxOoXx game;
   int hamleyap;
   game.oyunGiris();
   while((game.control())!=2020){
      game.drawBoard();
      cout << "\nHamlenizi giriniz: " ;
      cin  >> hamleyap;
      game.getMove(hamleyap);
      game.kazananiBul();
  }
   game.analiz();
   system("PAUSE");
   return 0;
}
