#include <iostream>
using namespace std;
struct Marks
{
    string name;
    long double roll_number;
    long double chemistry_marks;
    long double math_marks;
    long double physics_marks;
    long double total_marks;
    long double total_percentage;
};
Marks percentage(double total_marks)
{
    Marks percentage;
    percentage.total_percentage = (total_marks / 300) * 100;
    cout << percentage.total_percentage << endl;
}
int main()
{
    Marks student1;
    Marks student2;
    Marks student3;
    Marks student4;
    Marks student5;

    cout << "Total marks of each subject is 100" << endl;
    cout << "Enter student name :";
    cin >> student1.name;
    cout << "Enter your roll number:";
    cin >> student1.roll_number;
    cout << "Enter your math marks :";
    cin >> student1.math_marks;
    cout << "Enter your physics marks :";
    cin >> student1.physics_marks;
    cout << "Enter your chemistry marks:";
    cin >> student1.chemistry_marks;
    student1.total_marks = student1.math_marks + student1.physics_marks + student1.chemistry_marks;
    percentage(student1.total_marks);
    

    cout << "Enter student name :";
    cin >> student2.name;
    cout << "Enter your roll number:";
    cin >> student2.roll_number;
    cout << "Enter your math marks :";
    cin >> student2.math_marks;
    cout << "Enter your physics marks :";
    cin >> student2.physics_marks;
    cout << "Enter your chemistry marks:";
    cin >> student2.chemistry_marks;
    student2.total_marks = student2.math_marks + student2.physics_marks + student2.chemistry_marks;
    percentage(student2.total_marks);

    cout << "Enter student name :";
    cin >> student3.name;
    cout << "Enter your roll number:";
    cin >> student3.roll_number;
    cout << "Enter your math marks :";
    cin >> student3.math_marks;
    cout << "Enter your physics marks :";
    cin >> student3.physics_marks;
    cout << "Enter your chemistry marks:";
    cin >> student3.chemistry_marks;
    student3.total_marks = student3.math_marks + student3.physics_marks + student3.chemistry_marks;
    percentage(student3.total_marks);

    cout << "Enter student name :";
    cin >> student4.name;
    cout << "Enter your roll number:";
    cin >> student4.roll_number;
    cout << "Enter your math marks :";
    cin >> student4.math_marks;
    cout << "Enter your physics marks :";
    cin >> student4.physics_marks;
    cout << "Enter your chemistry marks:";
    cin >> student4.chemistry_marks;
    student4.total_marks = student4.math_marks + student4.physics_marks + student4.chemistry_marks;
    percentage(student4.total_marks);

    cout << "Enter student name :";
    cin >> student5.name;
    cout << "Enter your roll number:";
    cin >> student5.roll_number;
    cout << "Enter your math marks :";
    cin >> student5.math_marks;
    cout << "Enter your physics marks :";
    cin >> student5.physics_marks;
    cout << "Enter your chemistry marks:";
    cin >> student5.chemistry_marks;
    student5.total_marks = student5.math_marks + student5.physics_marks + student5.chemistry_marks;
    percentage(student5.total_marks);
}