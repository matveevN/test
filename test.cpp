#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
#include <string>
#include <locale>
#include <cctype> 


std::string removeWord(const std::string& str, const std::string& word)
{
    std::string result = str;
    std::size_t pos = 0;

    while ((pos = result.find(word, pos)) != std::string::npos)
        result.erase(pos, word.length());
    
    return result;
}

int main()
{

    setlocale(LC_ALL, "ru");
    
    std::cout << "Использование: программы <входнойфайл> <выходнойфайл> <удаляемоеслово>" << std::endl;
  
    std::string inputFile;
    std::cin >> inputFile;
    std::string outputFile;
    std::cin >> outputFile;
    std::string wordToRemove;
    std::cin >> wordToRemove;

    std::ifstream input(inputFile);
    std::ofstream output(outputFile);

    if (!input.is_open())
    {
        std::cout << "Невозможно открыть входной файл" << std::endl;
        return 1;
    }

    if (!output.is_open())
    {
        std::cout << "Невозможно открыть выходной файл" << std::endl;
        return 1;
    }

    std::vector<std::string> lines;

    std::string line;

    while (std::getline(input, line))
    {
        std::string modifiedLine = removeWord(line, wordToRemove);
        lines.push_back(modifiedLine);
    }

    input.close();
    // Сортировка строк без учета регистра символов
    std::sort(lines.begin(), lines.end(), [](const std::string& a, const std::string& b)
    {
        std::string aLower = a;
        std::transform(aLower.begin(), aLower.end(), aLower.begin(), ::tolower);
        std::string bLower = b;
        std::transform(bLower.begin(), bLower.end(), bLower.begin(), ::tolower);
        return aLower < bLower;
    });

    for (const auto& sortedLine : lines)
        output << sortedLine << "\n";
    
    output.close();

    std::cout << "Программа успешно завершена" << std::endl;

    return 0;
}