#include<iostream>
using namespace std;
int main(){
    //we are assuming that are 6 subjects in total we need to calculate percentage,total score out of,Grades
    int English,Hindi,Science,Maths,Socialstudies,Grade,total,score,total_score; float percentage;
    cout<<"Please enter the total marks Conducted by school :";
    cin>>total;
    cout<<"\nplease enter the Marks in English of the student :";
    cin>>English;
    cout<<"\nplease enter the Marks in Hindi o f the student :";
    cin>>Hindi;
    cout<<"\nplease enter the Marks in Science of the student :";
    cin>>Science;
    cout<<"\nplease enter the Marks in Maths of the student :";
    cin>>Maths;
    cout<<"\nplease enter the Marks in Socialstudies  of the student :";
    cin>>Socialstudies;
      score=English+Hindi+Science+Maths+Socialstudies;
    cout<<"\nTotal Marks Obtained by students in Combine :";
    cout<<score;
    cout<<"/";
    cout<<total;
    cout<<"\nPercentage obtained By student : ";
    percentage=(((float)score/total)*100);
    cout<<percentage;
    cout<<"%";
     if(percentage >= 90) cout << "\nGrade: A+";
     else if(percentage >= 75) cout << "\nGrade: A";
      else if(percentage >= 60) cout << "\nGrade: B";
      else if(percentage >= 40) cout << "\nGrade: C";
      else cout << "\nGrade: Fail";
 

}