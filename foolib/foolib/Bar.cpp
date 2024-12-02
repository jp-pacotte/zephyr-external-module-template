#include "Bar.hpp"

using namespace foolib;

Bar::Bar(int answerValue):_answerValue(answerValue)
{
}

auto Bar::getAnswerValue() -> int
{
    return _answerValue;
}