#pragma once

#include <regex>
#include <sstream>
#include <string>
#include <vector>

/*
*/
namespace CodeUtils
{
    class CodeUtil
	{
	public:
        static bool ReadFile(const std::string& filePath, std::stringstream& fileContents, int recursionDepth = 0);
        static std::vector<std::string> SplitStringBySpace(const std::string& input);
        static bool SplitStringByRegex(const std::string& input, std::vector<std::string>& output, std::regex regex);
        static bool ConvertStringVectorToIntVector(const std::vector<std::string>& input, std::vector<int>& result);
        static bool ReadStringToInt(const std::string& input, int& number, bool allowNegative);
        static void ReadIntToString(const int input, std::string& result);
        static bool CharIsUppercaseLetter(const char c);
        static bool CharIsLowercaseLetter(const char c);
        static int GetSign(int val);

    private:
        static const int MaxRecursionDepth = 3;
    };
}
