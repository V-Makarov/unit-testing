#include <ctest.h>
#include <discriminant.h>
#include <process.h>

CTEST(test_suite, NO_ROOTS)
{
  const double a = 4;
  const double b = 0;
  const double c = 3;
  double x1, x2;
  
  short test = solve(a, b, c, &x1, &x2);
  
  short expected_root_number = 0;
  
  ASSERT_EQUAL(expected_root_number, test);
}

CTEST(test_suite, ONE_ROOTS)
{
  const double a = 1;
  const double b = -2;
  const double c = 1;
  double x1, x2;
  
  short test = solve(a, b, c, &x1, &x2);
  double expected_x1 = 1.00;
  
  short expected_root_number = 1;
  
  ASSERT_EQUAL(expected_root_number, test);
  ASSERT_DBL_NEAR(expected_x1, x1);
}

CTEST(test_suite, TWO_ROOTS)
{
  const double a = 2;
  const double b = -3;
  const double c = 1;
  double x1, x2;
  
  short test = solve(a, b, c, &x1, &x2);
  double expected_x1 = 0.50;
  double expected_x2 = 1.00;
  
  short expected_root_number = 2;
  
  ASSERT_EQUAL(expected_root_number, test);
  ASSERT_DBL_NEAR(expected_x1, x1);
  ASSERT_DBL_NEAR(expected_x2, x2);
}

CTEST(test_suite, ZERO_SET)
{
  const double a = 0;
  const double b = 0;
  const double c = 0;
  double x1, x2;
  
  double expected_x1 = 0.0;
  double expected_x2 = 0.0;	
  short expected_root_number = 1;
  short test = solve(a, b, c, &x1, &x2);
  ASSERT_EQUAL(expected_root_number, test);
  ASSERT_DBL_NEAR(expected_x1, x1);
  ASSERT_DBL_NEAR(expected_x2, x2);
}
