#pragma once
#include <iostream>
#include <sstream>
#include <vector>
#include<string>
#include <regex>
using namespace std;

class Exception :public exception {
    string sMsg;
public:
    Exception(string Msg) {
        sMsg = Msg;
    }
    string what() {
        return sMsg;
    }
};

bool CheckName(string);
bool CheckNum(string);
void FixName(string&);
bool CompareString(string, string);