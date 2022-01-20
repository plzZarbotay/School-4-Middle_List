#include "middle_list.h"

int sizeOFSTR( string strf ){
    int count = 0;
    while( strf[count] != '\0' ){
        count++;
    }
    return count;
}
vector<char> itc_strtlist(string str){
    int len = sizeOFSTR(str);
    vector <char> strlist;
    for(int i = 0;i<len; i++){
        strlist.push_back(str[i]);
    }
    return strlist;
}
string itc_join(vector<char> lst , string sep){
    int lenv = lst.size();
    string join = "";
    for( int i = 0; i < lenv - 1 ; i++  ){
        join += lst[i];
        join += sep;

    }
    join += lst[lenv - 1];
    return join;
}
string itc_rmstrspc(string str){
    int count = sizeOFSTR(str);
    string rmstrspc = "";
    for(int i = 0; i < count ; i++){
        if(str[i] != ' '){
            rmstrspc += str[i];
        }
    }
    return rmstrspc;
}
string itc_rmstrchar(string str,string less){
    int lenless = sizeOFSTR(less);
    int lenstr = sizeOFSTR(str);
    string rmstrchar = "";
    for( int i = 0; i < lenstr; i++ ){
        bool in_less = false;
        for(int h = 0; h < lenless ; h++){
            if( str[i] == less[h] ){
                in_less = true;
            }
        }
        if( in_less == false ){
            rmstrchar += str[i];
        }
    }

    return rmstrchar;
}
