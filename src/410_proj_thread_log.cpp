//============================================================================
// Name        : 410_proj_thread_log.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <thread>
#include <chrono>
#include <iostream>
#include <vector>
#include "../includes/constants.h"
#include "../includes/Logger.h"

using namespace std;

//NOTE: you should have no mutexes in this file
//TODO linker errors?  Did you include the pthread library?   And set the proper dialect?
//TODO declare globals

int a = 0;
string z;

/***
 * TODO log info to both file and console. You can do this with 2 Logger objects. 
 * 		Note:  These logger objects cannot be local variables, they must be shared 
 * 		amongst the threads. (why?)
 * TODO this function should run until main (or another thread) asks it to quit
 * @param info  to log
 * returns void
 */
void fun(string info){

}
int main() {
	
	//TODO start as many threads as you have cores (see std::thread::hardware_concurrency())
	unsigned num_cpus = std::thread::hardware_concurrency();

	thread t1(fun, LOG_FILE);
	thread t2(fun, LOG_CONSOLE);


	//TODO save these threads in a vector

	//TODO let threads run a bit (5 seconds)
	std::this_thread::sleep_for(std::chrono::seconds(5));
	//TODO ask them all to stop
	
	//TODO wait for all threads to finish
	t1.join();
	t2.join();

	
	return 0;
}
