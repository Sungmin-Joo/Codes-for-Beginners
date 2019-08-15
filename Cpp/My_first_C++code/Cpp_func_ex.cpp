#include <iostream>
using namespace std;


struct Student {
	int id;
	int kor;
	int eng;
	int math;
	double avg;
};
//void getAvg(Student &);
double getAvg(Student );
void main()
{
	Student a = { 12345, 87, 79, 93 };
	a.avg =  getAvg(a);
	//getAvg(&a);
	cout << a.id << "   " << a.avg << endl;
}

double getAvg(Student x)
{
	double sum;
	sum = x.math + x.kor + x.eng;
	x.avg = sum / 3.0;
	return x.avg;
}
//void getAvg(Student *x)
//{
//	double sum;
//	sum = x->math + x->kor + x->eng;
//	x->avg = sum / 3.0;
//}