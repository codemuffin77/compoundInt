#ifndef _compoundInt.h_
#define _compoundInt.h_

#include <iostream>

class compoundInt{
	private:               //define private variables
		float rate_;
		float value_;
		int period_;
	
	public:
		compoundInt();
		compoundInt(float rate, float value, int period);
		~compoundInt();
		
		float getRate() const;			//define get and set operations
		void   setRate(const float rate);
		float getValue() const;
		void   setValue(const float value);
		int getPeriod() const;
		void   setPeriod(const int period);	
		float futureValue();           //define formula calculation operation
};


#endif  _compoundInt.h_
