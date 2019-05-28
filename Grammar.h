#ifndef PARSERGEN_GRAMMAR_H
#define PARSERGEN_GRAMMAR_H

#include <memory>
#include <string>
#include <vector>
#include <unordered_set>

namespace ParserGen {
    class Grammar {
    public:
        Grammar(const std::string x[]);
        Grammar(const std::vector<std::string>& x);
        Grammar(const Grammar& g);
        Grammar(Grammar&& g);
        Grammar& operator=(const Grammar& g);
        Grammar& operator=(Grammar&& g);
        const std::unordered_set<std::string>& first_set(const std::string& terminal) const;
        const std::unordered_set<std::string>& follow_set(const std::string& terminal) const;
        const std::unordered_set<std::string>& nonterminals() const;
        const std::string& start() const;
        const std::unordered_set<std::string>& terminals() const;

    private:
        struct GrammarImpl;
        std::unique_ptr<GrammarImpl> impl;
    };
}


#endif
