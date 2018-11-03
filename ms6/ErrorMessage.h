// Final Project Milestone 6
// Version 1.0
// Date	2017-07-??
// Author   Fardad Soleimanloo
// ErrorMessage.h
// 
// 
//
//
// Revision History
// -----------------------------------------------------------
// Name Kyuyoung Shim   Date 2017-08-06   Reason
/////////////////////////////////////////////////////////////////

#ifndef SICT_ERRORMESSAGE_H
#define SICT_ERRORMESSAGE_H
#include <iostream>
#include <fstream>
#include <cstring>


namespace sict {


	class ErrorMessage {
	private:
		char* message_;
	public:
		ErrorMessage();
		ErrorMessage(const char* errorMessage);
		ErrorMessage(const ErrorMessage& em) = delete;
		ErrorMessage& operator=(const ErrorMessage& em) = delete;
		ErrorMessage& operator=(const char* errorMessage);
		virtual ~ErrorMessage();
		void clear();
		bool isClear()const;
		void message(const char* value);
		const char* message()const;

	};
	std::ostream& operator<<(std::ostream& os, const ErrorMessage& s);

}
#endif