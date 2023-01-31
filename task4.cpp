#include <iostream>
using namespace std;
int timeperiod(int days);
main()

{
    
    int doctors=7;
    int untreatedpatients=0;
    int treatedpatients=0;
    int days=0;
    cout<<"enter the days:";
    cin >> days;
    

    for(int i=1; i<=days; i++)
    {
      int currentpatients=0;
      cout <<"Enter Day" << i << "Day Patients:";
      cin >> currentpatients;

        if((i%3==0) && (untreatedpatients > treatedpatients))
         
        {
            doctors++;

        }
        if(currentpatients > doctors)
        {
          treatedpatients =treatedpatients+doctors;

          untreatedpatients=untreatedpatients+(currentpatients-doctors);
        }
        else
        {
            treatedpatients=treatedpatients+currentpatients;
        }
        
    }
    cout<<"Treated patients:"<<treatedpatients<<endl;
        cout<<"unTreated patients:"<<untreatedpatients<<endl;
}
  