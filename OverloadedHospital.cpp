#include <iostream>
#include <string>
#include <fstream>
#include <cstring>
using namespace std;
int main(){
    std::ofstream fileOutput("InpatientReport.txt");
    std::ofstream fileOutput1("OutpatientReport.txt");
    char patient1[] = "inpatient";
    char patient2[] = "outpatient";
    char check[255],check1[255];
    cout << "What patient are you admitted to the hospital as? Inpatient or Outpatient?" << endl;
    cin >> check;
    for (int i=0; i<=strlen(check); i++){
        check1[i]=tolower(check[i]);
    }
    cout << endl;
    long int day,serv,serv1,medi,rate,total;
    if (strcmp(patient1,check1)==0) {
        fileOutput << "InpatientReport" << endl;
        cout << "The number of days spent in the hospital : ";
            cin >> day;
            if (day<0) exit(0);
            fileOutput << "The number of days spent in the hospital : " << day << endl;
        cout << "The daily rate : ";
            cin >> rate ;
            if (rate<0) exit(0);
            fileOutput << "The daily rate : " << rate << " vnd" << endl;
        cout << "Hospital medication charges : ";
            cin >> medi;
            if (medi<0) exit(0);
            fileOutput << "Hospital medication charges : " << medi << " vnd" << endl;
        cout << "Charges for hospital services : ";
            cin >> serv;
            if (serv<0) exit(0);
            fileOutput << "Charges for hospital services : " << serv << " vnd" << endl;
        cout << "Total costs paid to the hospital : ";
            total = ((day*rate)+medi+serv);
            cout << total ;
            fileOutput << "Total costs paid to the hospital : " << total << " vnd" << endl;
    }   else if (strcmp(patient2,check1)==0){
            fileOutput1 << "OutpatientReport" << endl;
                cout << "Hospital medication charges : ";
                    cin >> medi;
                    if (medi<0) exit(0);
                    fileOutput1 << "Hospital medication charges : " << medi << " vnd" << endl;
                cout << "Charges for hospital services : ";
                    cin >> serv;
                    if (serv<0) exit(0);
                    fileOutput1 << "Charges for hospital services : " << serv << " vnd" << endl;
                cout << "Total costs paid to the hospital : ";
                    total = +medi+serv;
                    cout << total ;
                    fileOutput1 << "Total costs paid to the hospital : " << total << " vnd" << endl;
    } 
    return 0;
}