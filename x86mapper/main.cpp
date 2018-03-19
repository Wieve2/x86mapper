#include "ManualMapper.h"

int main()
{
	ManualMapper mapper;
		
	if(!mapper.InjectDll("csgo.exe", "test.dll"))
		getchar();
}