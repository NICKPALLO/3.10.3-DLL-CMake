#include"Leaver.h"

namespace Leaver
{
	std::string Leaver::leave(std::string name)
	{
		name = "До свидания, " + name;
		return name;
	}
}