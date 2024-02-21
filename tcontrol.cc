#include "tcontrol.hh"
#include <iostream>

void tc::reset_fore(){
	std::cout<<ts::FC_DEFAULT;
}

void tc::set_fore(int id){
	std::cout<<ts::FC_CUSTOM(id);
}

void tc::set_fore(int R,int G,int B){
	std::cout<<ts::FC_CUSTOM(R,G,B);
}

void tc::reset_back(){
	std::cout<<ts::BC_DEFAULT;
}

void tc::set_back(int id){
	std::cout<<ts::BC_CUSTOM(id);
}

void tc::set_back(int R,int G,int B){
	std::cout<<ts::BC_CUSTOM(R,G,B);
}

void tc::clear(){
	std::cout<<ts::DW_CLEAR;
}

void cur::mv_to(int line,int column){
	std::cout<<ts::CUR_MV_TO(line,column);
}

void cur::mv_col(int col){
	std::cout<<ts::CUR_MV_TO_COL(col);
}

void cur::mv_up(int x){
	std::cout<<ts::CUR_MV_UP(x);
}

void cur::mv_down(int x){
	std::cout<<ts::CUR_MV_DOWN(x);
}

void cur::mv_left(int x){
	std::cout<<ts::CUR_MV_LEFT(x);
}

void cur::mv_right(int x){
	std::cout<<ts::CUR_MV_RIGHT(x);
}

void cur::rm_line(){
	std::cout<<ts::DEL_LINE;
}

void cur::rm_begin(){
	std::cout<<ts::DEL_TO_BEG;
}

void cur::rm_end(){
	std::cout<<ts::DEL_TO_END;
}

void cur::hide(){
	std::cout<<ts::CUR_INVISIBLE;
}

void cur::show(){
	std::cout<<ts::CUR_VISIBLE;
}

void scr::cls(){
	std::cout<<ts::DEL_ALL;
}

void scr::rm_begin(){
	std::cout<<ts::DEL_TO_TOP;
}

void scr::rm_end(){
	std::cout<<ts::DEL_TO_BOT;
}