#include <map>
#include <string>

class Errors {
public:
	static const int BAD_CARD = 10;
	static const int OTHER = 11;


	static std::string getMessage(const int errorCode) {
		static const std::map<const int, std::string> ErrorCodes = {
			{BAD_CARD, "Bad Playing Card"},
		};
		try {
			return ErrorCodes.at(errorCode);
		}
		catch (std::exception) {
			return "Unknown";
		}
	}
};

