/*
###################################
// NAME:		Matthew Thomas
// EMAIL:		mthomas52@myseneca.ca
// STUDENTID:	147546204
// DATE:		2021/07/31

I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
###################################
*/
#ifndef SDDS_COVIDPATIENT_H_
#define SDDS_COVIDPATIENT_H_
#include "Patient.h"

namespace sdds {

	class CovidPatient : public Patient
	{
	public:
		CovidPatient();

		char type()const;

		istream& csvRead(std::istream& istr);
		ostream& write(ostream& ostr)const;
		istream& read(istream& istr);
	};
}
#endif // !SDDS_COVIDPATIENT_H_



