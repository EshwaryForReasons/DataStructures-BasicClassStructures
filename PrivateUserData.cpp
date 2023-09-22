
#include "PrivateUserData.h"

PrivateUserData::PrivateUserData(uint64_t _credit_card_num, int _security_code)
{
	credit_card_num = _credit_card_num;
	security_code = _security_code;
}

PrivateUserData::~PrivateUserData()
{

}

void PrivateUserData::set_credit_card_num(uint64_t new_credit_card_num)
{
	credit_card_num = new_credit_card_num;
}

void PrivateUserData::set_security_code(int new_security_code)
{
	security_code = new_security_code;
}

uint64_t PrivateUserData::get_credit_card_num()
{
	return credit_card_num;
}

int PrivateUserData::get_security_code()
{
	return security_code;
}
