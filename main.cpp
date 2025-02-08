/* Lab: Cap 3: Box Office
   Nombre: Daniel Aviles
   Num Est. 801-24-5453

*/
#include <iostream>
using namespace std;
#include <iomanip> 
#include <string>
int main() {
    // Write C++ code here
    string name;
    double c_tickets, a_tickets, g_profit, net_profit, dis_profit;
    
    
    cout << "This program calculates the Gross and Net Box Office Profit and the Distributer's Profit of a movie playing in the theater.";
    cout << "\n" << endl;

    cout << "Enter the name of the movie: ";
    getline(cin, name);
    
    cout << "Enter the amount of adult tickets sold: ";
    cin >> a_tickets;

    cout << "Enter the amount of child tickets sold: ";
    cin >> c_tickets;
   
    cout << "\n" << endl;
    
    g_profit = c_tickets * 6.0 + (a_tickets * 10.0);
    net_profit = g_profit * 0.20;
    dis_profit = g_profit - net_profit;
    
    cout << "Movie Name:" << right << setw(19) << "\"" << name << "\"" << endl;
    
    cout << "Adult tickets sold:" << right << setw(15) << a_tickets << endl;
    
    cout << "Child tickets sold:" << right << setw(15) << c_tickets << endl;
    
    cout << "Gross Box Office Profit:" << right << setw(8) << "$  " <<  setprecision(2) << fixed  << g_profit << endl;
    cout << "Net Box Office Profit:" << right << setw(10) << " $  " <<    setprecision(2) << fixed <<  net_profit << endl;
    cout << "Amount Paid to Distribitors:" << right << setw(4) << " $  " << setprecision(2) << fixed <<  dis_profit << endl;

   
    return 0;

}
