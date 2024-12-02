#include <foolib/Bar.hpp>
#include <zephyr/ztest.h>


using namespace foolib;

ZTEST_SUITE(foolib_bar,NULL,NULL,NULL,NULL,NULL);

ZTEST_F(foolib_bar, test_get_answer_value)
{
  auto bar = Bar(42);

  auto answerValue = bar.getAnswerValue();

  zassert_equal(answerValue, 42);
}
