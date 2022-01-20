#include "middle_list.h"
long itc_sumlst(const vector<int> &lst){
    long sumlst = 0;
    int lenlst = lst.size();
    for( int i = 0; i < lenlst; i++){
        sumlst += lst[i];
    }
    return sumlst;
}
long itc_sum_even_lst(const vector<int> &lst){
    long veclen = lst.size();
    long sum_even_lst = 0;
    for( int i = 0; i < veclen; i+=2 ){
        sum_even_lst += lst[i];
    }
    return sum_even_lst;
}
long itc_sum_even_part_lst(const vector<int> &lst){
    int lenlst = lst.size();
    long sum_even_part = 0;
    for( int i = 0 ; i < lenlst; i++){
        if( lst[i] % 2 == 0 ){
            sum_even_part += lst[i];
        }
    }
    return sum_even_part;
}
void itc_odd_even_separator_lst(const vector<int> &lst,vector<int> &lst1,vector<int> &lst2){
    int lenlst = lst.size();
    for( int i = 0 ; i < lenlst; i++ ){
        if( lst[i] % 2 == 0 ){
            lst1.push_back(lst[i]);
        } else{
            lst2.push_back(lst[i]);
        }
    }
}
void itc_pos_neg_separator_lst(const vector<int> &lst,vector<int> &lst1,vector<int> &lst2,vector<int> &lst3){
    int lenlst = lst.size();
    for( int i = 0 ; i < lenlst; i++ ){
        if( lst[i] > 0 ){
            lst3.push_back(lst[i]);
        } else if(lst[i] == 0){
            lst2.push_back(lst[i]);
        } else{
            lst1.push_back(lst[i]);
        }
    }
}
