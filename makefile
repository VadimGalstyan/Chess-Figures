

myProject : main.o queen.o king.o bishop.o pawn.o rook.o knight.o
	g++ main.o queen.o king.o bishop.o pawn.o rook.o knight.o -o myProject

main.o : main.cpp
	g++ -c main.cpp -o main.o

queen.o : queen.cpp 
	g++ -c queen.cpp -o queen.o

king.o : king.cpp
	g++ -c king.cpp -o king.o

bishop.o : bishop.cpp
	g++ -c bishop.cpp -o bishop.o

pawn.o : pawn.cpp
	g++ -c pawn.cpp -o pawn.o

rook.o : rook.cpp
	g++ -c rook.cpp -o rook.o

knigth.o : knight.cpp
	g++ -c knight.cpp -o knight.o
