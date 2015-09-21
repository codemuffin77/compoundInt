#include "compoundIntHead.h"
#include <cmath>

compoundInt::compoundInt():rate_(0), value_(0), period_(0){}   //initialization of class
compoundInt::compoundInt(float rate, float value, int period):rate_(rate), value_(value), period_(period){ } //class construtor
compoundInt::~compoundInt(){ }

//get operations
float compoundInt::getRate() const {return rate_;}
float compoundInt::getValue() const {return value_;}
int compoundInt::getPeriod() const {return period_;}

//set operations
void compoundInt::setRate(const float rate){
	rate_=rate;
}
void compoundInt::setValue(const float value){
	value_=value;
}
void compoundInt::setPeriod(const int period){
	period_=period;
}

//formula operation
float compoundInt::futureValue(){
	float futureValue=value_*pow(1+rate_,period_);
	return futureValue;
}
