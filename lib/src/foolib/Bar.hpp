#pragma once


namespace foolib
{
class Bar
{
public:
    Bar(int answerValue);

    auto getAnswerValue() -> int;

private:
    int _answerValue;
};
} // namespace foolib
