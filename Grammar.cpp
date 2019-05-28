#include "Grammar.h"
#include <unordered_map>
#include <unordered_set>
#include <string>

struct GrammarImpl {
    std::string start;
    std::unordered_map<std::string, std::unordered_set<std::string>> rules;
    std::unordered_set<std::string> epsilon_nonterms;
};