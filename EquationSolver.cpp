#include <iostream>
#include <windows.h>

using namespace std;

void SleepPrint(const string& num, int delay = 800){
    cout << num << endl;
    Sleep(delay);
    
}

int main(){
    int a,b,c;

    cout << "Solve Equation of form ax + b = c: " << endl;
    cout << "Enter a";
    cin >> a;
    cout << "Enter b";
    cin >> b;
    cout << "Enter c";
    cin >> c;

    //Begin to Solve out equation

    SleepPrint("\n Solving your equation step by step");
    

    // Print our Equation
    SleepPrint("Step 1" + to_string(a) + "x + " + to_string(b) + "=" + to_string(c));

    // Subtracting b from both side or taking b to right side become -ve
    int  rhs_after_b = c - b;
    SleepPrint("Step 2: Subtract " + to_string(b) + " from both sides");
    SleepPrint("    =>" + to_string(a) + "x =" + to_string(rhs_after_b));

    // Last Step: Dividing our x co-ef by both side

    int x = rhs_after_b/a;
    SleepPrint("Step 3: Dividing " + to_string(a) + " from both sides ");
    SleepPrint("   => x =" + to_string(x));

       // Final solution
    SleepPrint("Final Solution: x = " + to_string(x));

    cout << "\nPress Enter to exit...";
    cin.get(); // waits for leftover newline
    cin.get(); // waits for user to press Enter


    return 0;

   
}