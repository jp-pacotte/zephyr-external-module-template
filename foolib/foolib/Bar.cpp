#include "Bar.hpp"


Bar::Bar():_answerValue(answerValue)
{
}

auto Bar::getAnswerValue() -> int
{
    return _answerValue;
}