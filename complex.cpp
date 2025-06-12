#include <iostream>
#include <cmath>
using namespace std;

class complex{
	private:
	    double real;
	    double imag;
	
	public:
		double getreal() const{
			return real;
		}
		double getimag() const{
			return imag;
		}
		void setreal(double r){
			real=r;
		}
		void setimag(double i){
			imag=i;
		}
};

void display(const complex&c){
	if(c.real==0 && c.imag==0){
		cout<<"0"<<endl;
	}
	else if(c.real==0){
		cout<<c.imag<<"i"<<endl;
	}
	else if(c.imag==0){
		cout<<c.real<<endl;
	}
	else{
		if(c.imag<0){
			cout<<c.real<<c.imag<<"i"<<endl;
		}else{
			cout<<c.real<<"+"<<c.imag<<"i"<<endl;
		}
	}
}

complex conjugate(const complex& c){
	complex conju=c;
	if(c.imag!=0){
		conju.imag*=-1;
    }
    return conju;
}

complex sum(const complex& c1,const complex& c2){
	complex c3;
	c3.real=c1.real+c2.real;
	c3.imag=c1.imag+c2.imag;
	
	return c3;
}

complex diff(const complex& c1,const complex& c2){
	complex c3;
	c3.real=c1.real-c2.real;
	c3.imag=c1.imag-c2.imag;
	
	return c3;
}

complex multiply(const complex& c1,const complex& c2){
	complex c3;
    c3.real = (c1.real * c2.real) - ((c1.imag * c2.imag));
	c3.imag = (c1.real*c2.imag) + (c1.imag*c2.real);
	
	return c3;
}

int main(){
	
	complex w;
	w.real=2;
	w.imag=0;
	display(w);
	
	complex x;
	x.real=-2;
	x.imag=3;
	display(x);
	
	complex y;
	y.real=2;
	y.imag=6;
	display(y);
	
	complex z;
	z.real=4;
	z.imag=-5;
	display(z);
	
    complex result = diff(multiply(sum(w, z), conjugate(x)), y);
	cout << "Result=";
	display(result);
	
	return 0;
}
