#include "queen.h"
#include "king.h"
#include "bishop.h"
#include "pawn.h"
#include "rook.h"
#include "knight.h"

int main()
{
	Queen q("black",0,0);
	q.printFigure();
	
	King king("Black",0,0);
	king.printFigure();
	
	Bishop bishop("White",0,0);
	bishop.printFigure();

        Pawn pawn("White",0,0);
	pawn.printFigure();

        Rook rook("Black",0,0);
	rook.printFigure();
	
	Knight k("Black",0,0);
	k.printFigure();
}
