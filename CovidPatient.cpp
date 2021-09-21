/*
###################################
// NAME:		Matthew Thomas
// EMAIL:		mthomas52@myseneca.ca
// STUDENTID:	147546204
// DATE:		2021/07/31

I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
###################################
*/
#include "CovidPatient.h"
namespace sdds {
	int nextCovidTicket = 1;

   CovidPatient::CovidPatient() : Patient(nextCovidTicket)
   {
	   nextCovidTicket++;
   }
   char CovidPatient::type()const
   {
	   return 'C';
   }
 
   istream& CovidPatient::csvRead(std::istream& istr)
   {
	   Patient::csvRead(istr);
	   nextCovidTicket = Patient::number() + 1;
	   istr.ignore();
	   
	   return istr;
   }
   ostream& CovidPatient::write(ostream& ostr) const
   {
	   if (Patient::fileIO())
	   {
		   Patient::csvWrite(ostr);
	   }
	   else 
	   { 
		   ostr << "COVID TEST" << endl;
		   Patient::write(ostr) << endl;
	   }
		   
	   return ostr;
   }
   istream& CovidPatient::read(istream& istr)
   {
	   return Patient::fileIO() ? csvRead(istr) : Patient::read(istr);

   }
}