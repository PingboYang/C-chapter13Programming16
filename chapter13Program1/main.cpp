#include <iostream>
using namespace std;


class Date{
    public:
    int  month, day, year;
};

int main() {
    Date myObj=Date();
    string vocabularyYear;
    do{
        cout<<"Please enter a month: ";
        cin>>myObj.month;
    }while (myObj.month>12 || myObj.month<1);

    do{
        cout<<"Please enter a day: ";
        cin>>myObj.day;
    }while (myObj.day>31 || myObj.day<1);

    cout<<"Please enter a year: ";
    cin>>myObj.year;
    switch (myObj.month){
        case 1:
            vocabularyYear="January";
            break;
        case 2:
            vocabularyYear="February";
            break;
        case 3:
            vocabularyYear="March";
            break;
        case 4:
            vocabularyYear="April";
            break;
        case 5:
            vocabularyYear="May";
            break;
        case 6:
            vocabularyYear="June";
            break;
        case 7:
            vocabularyYear="July";
            break;
        case 8:
            vocabularyYear="August";
            break;
        case 9:
            vocabularyYear="September";
            break;
        case 10:
            vocabularyYear="October";
            break;
        case 11:
            vocabularyYear="November";
            break;
        case 12:
            vocabularyYear="December";
            break;
    }





    cout <<myObj.month <<"/" <<myObj.day << "/"<<myObj.year<<endl;
    cout <<vocabularyYear<<" " <<myObj.day<<","<<" " <<myObj.year<<endl;
    cout <<myObj.day<<" " << vocabularyYear<<" "<<myObj.year<<endl;
    return 0;
}