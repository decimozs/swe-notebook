
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

farrays: ./Arrays/FixedArrays/fixedArrays.cpp
	g++ -o farrays ./Arrays/FixedArrays/fixedArrays.cpp
	./farrays

marrays: ./Arrays/MultidimensionalArrays/multidimensionalArrays.cpp
	g++ -o marrays ./Arrays/MultidimensionalArrays/multidimensionalArrays.cpp
	./marrays

darrays: ./Arrays/DynamicArrays/dynamicArrays.cpp
	g++ -o darrays ./Arrays/DynamicArrays/dynamicArrays.cpp
	./darrays

sumOfAnArray: ./Exercises/Arrays/sumOfAnArray.cpp
	g++ -o sumOfAnArray ./Exercises/Arrays/sumOfAnArray.cpp
	./sumOfAnArray

reversingAnArray: ./Exercises/Arrays/reversingAnArray.cpp
	g++ -o reversingAnArray ./Exercises/Arrays/reversingAnArray.cpp
	./reversingAnArray

removeDuplicates: ./Exercises/Arrays/removeDuplicates.cpp
	g++ -o removeDuplicates ./Exercises/Arrays/removeDuplicates.cpp
	./removeDuplicates

secondLargestElement: ./Exercises/Arrays/secondLargestElement.cpp
	g++ -o secondLargestElement ./Exercises/Arrays/secondLargestElement.cpp
	./secondLargestElement

arraySorted: ./Exercises/Arrays/checkIfItsSorted.cpp
	g++ -o arraySorted ./Exercises/Arrays/checkIfItsSorted.cpp
	./arraySorted


