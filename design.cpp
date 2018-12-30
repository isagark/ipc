#include<iostream>
using namespace std;

//static int s_iRimSize;

class vehicle{
	private:
		int m_iWheels;
	
	public:
		vehicle(int wheels= 0):m_iWheels(wheels){
			cout << "Vehicle constructor called" << endl;
		}

		vehicle& operator=(const vehicle& v1){
			if(this != &v1){
				m_iWheels =v1.m_iWheels;
				cout <<"in assignment operator" << endl;
			}
			return *this;
		}

		vehicle(const vehicle& v1):m_iWheels(v1.m_iWheels){
			cout <<"in copy constructor "<< endl;
		} 
	
		virtual	~vehicle(){
			cout <<"vehicle destructor called"<<endl;
		}
};


class twoWheeler:public vehicle{
	private:
		string m_sCompany;
		int m_iYearofmanufacture;
	public:
		twoWheeler(int wheels = 0 ,string company = "test",int year=2018):vehicle(wheels),m_sCompany(company),m_iYearofmanufacture(year){
			cout <<"twoWheeler constructor called " << endl;		
		}

		twoWheeler(const twoWheeler& twowheeler):vehicle(2),m_sCompany(twowheeler.m_sCompany),m_iYearofmanufacture(twowheeler.m_iYearofmanufacture){
			cout <<"copy constructor called " << endl;
		}

		twoWheeler& operator=(const twoWheeler& twowheeler){
			if(this != &twowheeler){
				m_sCompany = twowheeler.m_sCompany;
				m_iYearofmanufacture = twowheeler.m_iYearofmanufacture;
				cout <<"in copy assignment operator "<< endl;
			}
			return *this;
		}

		~twoWheeler(){
			cout << "twoWheeler destructor called" << endl;
		}

};


int main(){
	vehicle* car = new twoWheeler();
	twoWheeler bajaj;
	twoWheeler honda(2,"HONDA",2018);
	bajaj = honda;
	delete car;
	return 0;
}
