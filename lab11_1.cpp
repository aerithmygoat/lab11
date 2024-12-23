#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;
// cout << "Press Enter 3 times to reveal your future.";
// cout << "You will get A in this 261102.";
string graded(int num, string &final_grade){

    if  (num == 0) final_grade = "A";
    else if (num == 1) final_grade = "B+";
    else if (num == 2) final_grade = "B";
    else if (num == 3) final_grade = "C+";
    else if (num == 4) final_grade = "C";
    else if (num == 5) final_grade = "D+";
    else if (num == 6) final_grade = "D";
    else if (num == 7) final_grade = "F";
    else final_grade = "W";
    return final_grade;
}

int main(){
    int grade;
    string final_grade;
    srand(time(0));
    cout << "Press Enter 3 times to reveal your future.";
    cin.get();
    cin.get();
    cin.get();
    grade = rand()%9;
    graded(grade,final_grade);
    cout << "You will get " << final_grade << " in this 261102.";
    return 0;
}