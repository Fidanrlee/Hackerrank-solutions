#include cmath
#include cstdio
#include vector
#include iostream
#include algorithm
using namespace std;


class Triangle{
    public
    	void triangle(){
     		coutI am a trianglen;
    	}
};

class Isosceles  public Triangle{
    public
    	void isosceles(){
    		coutI am an isosceles trianglen;
    	}
  		void description(){

           coutIn an isosceles triangle two sides are equaln;
        }
};

int main(){
    Isosceles isc;
    isc.isosceles();
  	isc.description();
    isc.triangle();
    return 0;
}
