#include "middle_list.h"
void itc_odd_even_analysis_lst(const vector<int> &lst){
    setlocale( LC_ALL,"Russian" );
    int countlst =  lst.size();
    vector<int> count;
    vector<int> maxcount;
    vector<int> mincount;
    vector<long> sum;
    vector<bool> empty;
    for(int i =0; i < 2; i++  ){
        count.push_back(0);
        maxcount.push_back(0);
        mincount.push_back(0);
        sum.push_back(0);
        empty.push_back(false);
    }
    for(int i = 0 ; i < countlst ; i++){
        int h;
        if( lst[i] % 2 == 0){
        h = 0;
        }else{
        h = 1;
        }
        ++count[h];
        if( empty[h] == false ) {
            empty[h] = true;
            maxcount[h] = lst[i];
            mincount[h] = lst[i];
        } else{
            if( lst[i] > maxcount[h]){
                maxcount[h] = lst[i];
            }
            if( lst[i] < mincount[h]){
                mincount[h] = lst[i];
            }
        }
            sum[h]+=lst[i];

    }
    cout<<"Анализ списка:"<<endl
        <<"Количество четных чисел: "<<count[0]<<","<<"		"<<"Количество нечетных чисел: "<<count[1]<<","<<endl
        <<"Максимальная четная цифра: "<<maxcount[0]<<","<<"		"<<"Максимальная нечетная цифра: "<<maxcount[1]<<","<<endl
        <<"Минимальная четная цифра: "<<mincount[0]<<","<<"		"<<"Минимальная нечетная цифра: "<<mincount[1]<<","<<endl
        <<"Сумма четных чисел: "<<sum[0]<<","<<"			"<<"Сумма нечетных чисел: "<<sum[1]<<","<<endl;
}
void itc_pos_neg_analysis_lst(const vector <int> &lst){
    setlocale( LC_ALL,"Russian" );
    int countlst =  lst.size();
    vector<int> count;
    vector<int> maxcount;
    vector<int> mincount;
    vector<long> sum;
    vector<bool> empty;
    int zerocount = 0;
    for(int i =0; i < 2; i++  ){
        count.push_back(0);
        maxcount.push_back(0);
        mincount.push_back(0);
        sum.push_back(0);
        empty.push_back(false);
    }
    for( int i = 0 ; i < countlst; ++i ){
    if( lst[i] == 0 ){
        zerocount++;
    } else{
        int h = 0;
        if(lst[i] > 0){
            h = 1;
        }
        ++count[h];
        if( empty[h] == false ) {
            empty[h] = true;
            maxcount[h] = lst[i];
            mincount[h] = lst[i];
        } else{
            if( lst[i] > maxcount[h]){
                maxcount[h] = lst[i];
            }
            if( lst[i] < mincount[h]){
                mincount[h] = lst[i];
            }
        }
            sum[h]+=lst[i];

    }

}
    vector <double> middlenumber;
    for(int i =0; i < 2; i++  ){
        middlenumber.push_back((double)(sum[i])/count[i] );
    }
    cout<<"Положительные:			Отрицательные:"<<endl
    <<"Количество чисел: "<<count[1]<<","<<"	"<<"Количество чисел: "<<count[0]<<","<<endl
    <<"Максимальная цифра: "<<maxcount[1]<<","<<"		"<<"Максимальная цифра: "<<maxcount[0]<<","<<endl
    <<"Минимальная цифра: "<<mincount[1]<<","<<"		"<<"Минимальная цифра: "<<mincount[0]<<","<<endl
    <<"Сумма чисел: "<<sum[1]<<","<<"			"<<"Сумма чисел: "<<sum[0]<<","<<endl
    <<"Среднее значение: "<<middlenumber[1]<<" 		"<<"Среднее значение: "<<middlenumber[0]<<endl
    <<" "<<endl
    <<"Количество нулей: "<<zerocount<<endl;
}
