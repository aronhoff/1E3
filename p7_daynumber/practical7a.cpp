//Functions for Pratical 7 - 2016

#include <iostream>
using namespace std;

int month_length (int m, int y);
int year_length (int y);
bool leap_year (int year);
int daynumber (int day, int month, int year);
void dayMthYr (int numdays, int& day, int& month, int& year);
//add here the declaration of the calc_date function for task 2
int calc_date (int daynum, char sign, int diff, char type);

int main ()
{
	int day, month, year;
	cout << "Enter date : ";
	cin >> day >> month >> year;

	int daynum=daynumber(day, month, year);
	dayMthYr(daynum, day, month, year);
	cout << daynum << endl;
    cout << day <<" "<< month<< " " << year << endl;

    //Write code here to test the calc_date function
	char sign, type;
	int diff, day_2, month_2, year_2, daynum_2;
	cout << "Enter specification: ";
	cin >> sign >> diff >> type;
	
	daynum_2 = calc_date(daynum, sign, diff, type);
	dayMthYr(daynum_2, day_2, month_2, year_2);
	cout << daynum_2 << endl;
	cout << day_2 <<" "<< month_2 << " " << year_2 << endl;
	
    return 0;
}


void dayMthYr (int daynum, int& day, int& month, int& year)
{
	day=1; month=1; year=1900;
	while (daynum>year_length(year)){
		daynum=daynum-year_length(year);
		year=year+1;
	}
	while(daynum>month_length(month,year)){
		daynum=daynum-month_length(month,year);
		month=month+1;
	}
	day=daynum;
}

// add here the calc_date function definition
int calc_date (int daynum, char sign, int diff, char type){
	int day, month, year, d = 1;
	dayMthYr(daynum, day, month, year);
	if(sign =='-'){
		diff=-diff;
		d = -1;
	}
	if(type=='y'){
		for(int i = year; i != year+diff; i = i+d){
			if(!leap_year(i) && !leap_year(i+d)){
				daynum=daynum+365*d;
			}
			else if(sign == '+'){
				if(month > 2 && !leap_year(i + 1)){
					daynum = daynum + 365;
				}
				else{
					daynum = daynum + 366;
				}
			}
			else{
				if((leap_year(i-1) && month > 2) || (leap_year(i) && (month == 1 || (month == 2 && day != 29)))) {
					daynum = daynum - 365;
				}
				else{
					daynum = daynum - 366;
				}
			}
		}
	}
	else {
		if(type=='w'){
			diff=diff*7;
		}
		daynum=daynum+diff;
	}
	return daynum;
}

//converts a date to a daynumber
int daynumber (int day, int month, int year)
{
    int y, m, daynumber;
    //accumelate days in all years before the given one
    daynumber = 0;
    for (y = 1900; y < year; y++)
    {
        daynumber = daynumber + year_length (y);
    }

    //in the given year, accumelate days in all months before the given month
    for (m = 1; m < month; m++)
    {
        daynumber = daynumber + month_length(m, year);
    }

    //accumelate all the days in the given month, including the given day
    daynumber = daynumber + day;

    return daynumber;
}


//gives back the number of days in the given month of the given year
int month_length (int m, int y)
{
    if (m==2) 
        if (leap_year(y))
	      return 29;
        else
		return 28;
      
    else if (m==9 || m==4 || m==6 || m==11)  //i.e. September, April, June, or November
        return 30;
    
    else
        return 31;
}


int year_length (int y)
{
    if (leap_year (y)) 
        return 366;

    else
        return 365;
}
    

bool leap_year (int year)
{
    //returns true if year is a leap year
    
    if (year % 4 == 0) //all others are definitely not leap
        if (year < 1583)
            return true;
   
        else //after 1583
            if ((year % 100 == 0) && (year % 400 != 0))   //e.g. 1900
                return false;
            else //e.g. 1904 or 2000
                return true;

        else //not divisible by 4
            return false;
}