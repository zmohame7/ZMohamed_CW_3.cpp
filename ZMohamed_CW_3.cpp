/*
 * Class: CMSC140  31371
 * Instructor:Aya Kutbi
 * Classwork 3
 * Description: Project gives 
 * Due Date: 2/14/204
 * I pledge that I have completed the programming assignment independently.
 * I have not copied the code from a student or any source.
 * I have not given my code to any student.
 * Zubayda Mohamed
   */

#include <iostream>
using namespace std;
int main()
{
	
    double num1, num2, num3, num4, num5, total ,avg;
	string name;
	string middle;
	string last;

    
	cout << "Enter Student's name: ";
	cin >> name >> middle >> last;

	
	cout <<  "Enter Syllabus Quiz score ranging from 0 to 100: "; 
	cin >> num1;

	
	cout <<  "Enter  Chapter 1 Quiz score ranging from 0 to 100: ";
	cin >> num2;

	
	cout << "Enter Chapter 2 Quiz score ranging from 0 to 100: ";
	cin >> num3;

	
	cout << "Enter Exam score ranging from 0 to 100: ";
	cin >> num4;

	
	cout << "Enter Practice score ranging from 0 to 100: ";
	cin >> num5;

	
	total = num1 + num2 + num3 + num4 + num5;
	
	avg = ( num1 + num2 + num3 + num4 + num5 ) / 5;
	
	
	cout << name << " " << middle << " " << last << ":" << " Final Score: " << total << " Average Score: " << avg << endl;
	
	
	return 0;


}


