
constantTime: ./Notations/ConstantTime/example.cpp
	g++ -o constantTime ./Notations/ConstantTime/example.cpp
	./constantTime

linearTime: ./Notations/LinearTime/example.cpp
	g++ -o linearTime ./Notations/LinearTime/example.cpp
	./linearTime

quadraticTime: ./Notations/QuadraticTime/example.cpp
	g++ -o quadraticTime ./Notations/QuadraticTime/example.cpp
	./quadraticTime

logTime: ./Notations/LogarithmicTime/example.cpp
	g++ -o logTime ./Notations/LogarithmicTime/example.cpp
	./logTime

loglinearTime: ./Notations/LoglinearTime/example.cpp
	g++ -o loglinearTime ./Notations/LoglinearTime/example.cpp
	./loglinearTime

factorialTime: ./Notations/FactorialTime/example.cpp
	g++ -o factorialTime ./Notations/FactorialTime/example.cpp
	./factorialTime
