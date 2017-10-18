#ifndef myExceptions_
#define myExceptions_

#include<string>
#include<iostream>

using namespace std;

class illegalParameterValue
{
public:
	illegalParameterValue(string theMessage="Illegal parameter value")
	{
		message = theMessage;
	}
	void outputMessage() { cout << message << endl; }
private:
	string message;
};

class illegalInputData
{
public:
	illegalInputData(string theMessage = "Illegal input data")
	{
		message = theMessage;
	}
	void outputMessage() { cout << message << endl; }
private:
	string message;
};

class illegalIndex
{
public:
	illegalIndex(string theMessage = "Illegal index")
	{
		message = theMessage;
	}
	void outputMessage() { cout << message << endl; }
private:
	string message;
};

class matrixIndexOutOfBounds
{
public:
	matrixIndexOutOfBounds
	(string theMessage = "Matrix index out of bounds")
	{
		message = theMessage;
	}
	void outputMessage() { cout << message << endl; }
private:
	string message;
};

class matrixSizeMismatch
{
public:
	matrixSizeMismatch(string theMessage =
		"The size of the two matrics doesn't match")
	{
		message = theMessage;
	}
	void outputMessage() { cout << message << endl; }
private:
	string message;
};

class stackEmpty
{
public:
	stackEmpty(string theMessage =
		"Invalid operation on empty stack")
	{
		message = theMessage;
	}
	void outputMessage() { cout << message << endl; }
private:
	string message;
};

class queueEmpty
{
public:
	queueEmpty(string theMessage =
		"Invalid operation on empty queue")
	{
		message = theMessage;
	}
	void outputMessage() { cout << message << endl; }
private:
	string message;
};

class hashTableFull
{
public:
	hashTableFull(string theMessage =
		"The hash table is full")
	{
		message = theMessage;
	}
	void outputMessage() { cout << message << endl; }
private:
	string message;
};

class undefinedEdgeWeight
{
public:
	undefinedEdgeWeight(string theMessage =
		"No edge weights defined")
	{
		message = theMessage;
	}
	void outputMessage() { cout << message << endl; }
private:
	string message;
};

class undefinedMethod
{
public:
	undefinedMethod(string theMessage =
		"This method is undefined")
	{
		message = theMessage;
	}
	void outputMessage() { cout << message << endl; }
private:
	string message;
};
#endif // !myExceptions_

