#include <iostream>
#include "tcontrol.hh"

#include <thread>
#include <chrono>

using namespace std::chrono_literals;

int main(){
	cur::hide();
	int line=0;
	while(true){
		scr::cls();
		tc::set_back(tc::black);
		cur::mv_to(line++,10);
		std::cout<<"  "<<std::flush;
		tc::clear();
		std::this_thread::sleep_for(1s);
	}
	return 0;
}