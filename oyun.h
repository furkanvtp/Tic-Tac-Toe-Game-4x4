#ifndef OYUN_h
#define OYUN_h

class XxOoXx {
	private:
      int board[4][4];
      int tHamle;
      int sira;
    public:
      XxOoXx();
      void oyunGiris();
      void drawBoard();
      void getMove(int);
      void kazananiBul();     
      void printGameResult(int);
      void analiz();
      int  control();
};
#endif

