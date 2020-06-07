main: Media.o Search_engine.o main.o Book.o Film.o Periodical.o Video.o
	g++ Media.o Search_engine.o main.o Book.o Film.o Periodical.o Video.o -o main

main.o: main.cpp Media.h
	g++ -c main.cpp

Media.o: Media.cpp Book.h Film.h Periodical.h Video.h Search_engine.h
	g++ -c Media.cpp

Book.o: Book.cpp Book.h
	g++ -c Book.cpp

Film.o: Film.cpp Film.h
	g++ -c Film.cpp

Periodical.o: Periodical.cpp Periodical.h
	g++ -c Periodical.cpp

Video.o: Video.cpp Video.h
	g++ -c Video.cpp

Search_engine.o: Search_engine.cpp Search_engine.h
	g++ -c Search_engine.cpp