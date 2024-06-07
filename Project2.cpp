#include <iostream>
#include "clsQueue.h"
using namespace std;

void queueDetails(clsQueue<int> myQueue)
{
	cout << "\nQueue Size   : " << myQueue.size() << endl;
	cout << "\nQueue Front  : " << myQueue.front() << endl;
	cout << "\nQueue Back   : " << myQueue.back() << endl;
}

void popAllDetails(clsQueue<int> myQueue) 
{
	while (myQueue.size() > 0)
	{
		cout << "\nQueue After pop() :\n";
		myQueue.pop();
		myQueue.print();

		queueDetails(myQueue);
	}
}

int main() 
{

	clsQueue<int> myQueue;

	myQueue.push(10);
	myQueue.push(20);
	myQueue.push(30);
	myQueue.push(40);
	myQueue.push(50);
	myQueue.push(60);

	myQueue.print("\n\n");
	
	popAllDetails(myQueue);

	system("pause > 0");

	return 0;
}