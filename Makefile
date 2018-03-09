make.out: Item.o Jugador.o Main.o Bomba.o Normal.o Espina.o V.o Escenario.o Visible.o Tren.o
	g++ Item.o Jugador.o Main.o Bomba.o Normal.o Espina.o V.o Escenario.o Visible.o Tren.o -o make.out

Bomba.o: Bomba.h Bomba.cpp
	g++ -c Bomba.cpp

Espina.o: Espina.h Espina.o Bomba.h
	g++ -c Espina.cpp

Item.o: Item.h Item.cpp
	g++ -c Item.cpp

Jugador.o: Jugador.h Jugador.cpp Item.h
	g++ -c Jugador.cpp

Normal.o: Normal.h Normal.cpp Bomba.h
	g++ -c Normal.cpp

Tren.o: Tren.h Tren.cpp Escenario.h
	g++ -c Tren.cpp

Escenario.o: Escenario.h Escenario.cpp
	g++ -c Escenario.cpp

Visible.o: Visible.h Visible.cpp Escenario.h
	g++ -c Visible.cpp

V.o: V.h V.cpp Bomba.h
	g++ -c V.cpp

main.o: main.cpp Item.h Bomba.h Escenario.h Jugador.h Normal.h Espina.h V.h Tren.h Visible.h 
	g++ -c main.cpp
