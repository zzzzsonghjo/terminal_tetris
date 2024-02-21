#pragma once

#include <string>

namespace ts{

	const std::string DW_CLEAR="\033[0m";

	const std::string DW_BOLD="\033[1m";
	const std::string DW_FAINT="\033[2m";
	const std::string DW_ITALIAN="\033[3m";
	const std::string DW_UNDERLINE="\033[4m";
	const std::string DW_BLINKING="\033[5m";
	const std::string DW_REVERSE="\033[7m";
	const std::string DW_HIDDEN="\033[8m";
	const std::string DW_STRIKETHROUGH="\033[9m";

	const std::string DW_RESET_BOLD_FAINT="\033[22m";
	const std::string DW_RESET_ITALIAN="\033[23m";
	const std::string DW_RESET_UNDERLINE="\033[24m";
	const std::string DW_RESET_BLINKING="\033[25m";
	const std::string DW_RESET_REVERSE="\033[27m";
	const std::string DW_RESET_HIDDEN="\033[28m";
	const std::string DW_RESET_STRIKETHROUGH="\033[29m";

	const std::string FC_BLACK="\033[30m";
	const std::string FC_RED="\033[31m";
	const std::string FC_GREEN="\033[32m";
	const std::string FC_YELLOW="\033[33m";
	const std::string FC_BLUE="\033[34m";
	const std::string FC_PURPLE="\033[35m";
	const std::string FC_CYAN="\033[36m";
	const std::string FC_WHITE="\033[37m";
	const std::string FC_BRIGHT_BLACK="\033[90m";
	const std::string FC_BRIGHT_RED="\033[91m";
	const std::string FC_BRIGHT_GREEN="\033[92m";
	const std::string FC_BRIGHT_YELLOW="\033[93m";
	const std::string FC_BRIGHT_BLUE="\033[94m";
	const std::string FC_BRIGHT_PURPLE="\033[95m";
	const std::string FC_BRIGHT_CYAN="\033[96m";
	const std::string FC_BRIGHT_WHITE="\033[97m";
	const std::string FC_DEFAULT="\033[39m";

	inline const std::string FC_CUSTOM(const int id){
		return "\033[38;5;"+std::to_string(id)+"m";
	}

	inline const std::string FC_CUSTOM(const int R,const int G,const int B){
		return "\033[38;2;"+std::to_string(R)+";"+std::to_string(G)+";"+std::to_string(B)+"m";
	}

	const std::string BC_BLACK="\033[40m";
	const std::string BC_RED="\033[41m";
	const std::string BC_GREEN="\033[42m";
	const std::string BC_YELLOW="\033[43m";
	const std::string BC_BLUE="\033[44m";
	const std::string BC_PURPLE="\033[45m";
	const std::string BC_CYAN="\033[46m";
	const std::string BC_WHITE="\033[47m";
	const std::string BC_BRIGHT_BLACK="\033[100m";
	const std::string BC_BRIGHT_RED="\033[101m";
	const std::string BC_BRIGHT_GREEN="\033[102m";
	const std::string BC_BRIGHT_YELLOW="\033[103m";
	const std::string BC_BRIGHT_BLUE="\033[104m";
	const std::string BC_BRIGHT_PURPLE="\033[105m";
	const std::string BC_BRIGHT_CYAN="\033[106m";
	const std::string BC_BRIGHT_WHITE="\033[107m";
	const std::string BC_DEFAULT="\033[49m";

	inline const std::string BC_CUSTOM(const int id){
		return "\033[48;5;"+std::to_string(id)+"m";
	}

	inline const std::string BC_CUSTOM(const int R,const int G,const int B){
		return "\033[48;2;"+std::to_string(R)+";"+std::to_string(G)+";"+std::to_string(B)+"m";
	}

	inline const std::string CUR_MV_TO(int line,int column){
		return "\033["+std::to_string(line)+';'+std::to_string(column)+'H';
	}

	inline const std::string CUR_MV_UP(int x){
		return "\033["+std::to_string(x)+'A';
	}

	inline const std::string CUR_MV_DOWN(int x){
		return "\033["+std::to_string(x)+'B';
	}

	inline const std::string CUR_MV_RIGHT(int x){
		return "\033["+std::to_string(x)+'C';
	}

	inline const std::string CUR_MV_LEFT(int x){
		return "\033["+std::to_string(x)+'D';
	}

	inline const std::string CUR_LINES_DOWN(int x){
		return "\033["+std::to_string(x)+'E';
	}

	inline const std::string CUR_LINES_UP(int x){
		return "\033["+std::to_string(x)+'F';
	}

	inline const std::string CUR_MV_TO_COL(int x){
		return "\033["+std::to_string(x)+'G';
	}

	const std::string DEL_TO_BOT="\033[0J";
	const std::string DEL_TO_TOP="\033[1J";
	const std::string DEL_ALL="\033[2J";
	const std::string DEL_TO_BEG="\033[0K";
	const std::string DEL_TO_END="\033[1K";
	const std::string DEL_LINE="\033[2K";

	const std::string CUR_INVISIBLE="\033[?25l";
	const std::string CUR_VISIBLE="\033[?25h";
	const std::string SCR_RESTORE="\033[?47l";
	const std::string SCR_SAVE="\033[?47h";

} // ts

namespace tc{

	enum E_COLOR{
		black,
		red,
		green,
		yellow,
		blue,
		purple,
		cyan,
		white,
		bright_black,
		bright_red,
		bright_green,
		bright_yellow,
		bright_blue,
		bright_pueple,
		bright_cyan,
		bright_white
	};

	void set_back(int);
	void set_back(int,int,int);
	void reset_back();

	void set_fore(int);
	void set_fore(int,int,int);
	void reset_fore();

	void clear();

} // tc

namespace cur{

	void mv_to(int,int);
	void mv_col(int);
	void mv_up(int);
	void mv_down(int);
	void mv_left(int);
	void mv_right(int);

		void rm_line();
		void rm_begin();
		void rm_end();	

	void hide();
	void show();

} // cur

namespace scr{

	void cls();
	void rm_begin();
	void rm_end();

} // scr
