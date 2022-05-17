a.exe: node.o queue.o main.o 
	g++ node.o queue.o main.o -o a.exe 

node.o: node.h node.cpp 
	g++ -c -g node.cpp 


main.o: main.cpp queue.h 
	g++ -c -g main.cpp
