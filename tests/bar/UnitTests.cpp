#include <foolib/Bar.hpp>
#include <zephyr/ztest.h>


BOLT_ZTEST_SUITE(foolib_bar);

ZTEST_F(foolib_bar, test_get_answer_value)
{
  auto bar = Bar(42);

  answerValue = bar.getAnswerValue();

  assert_equal(answerValue, 42);
}
