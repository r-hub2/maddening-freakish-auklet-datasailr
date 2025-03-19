#include "cpp_date.hpp"
#include <iostream>

int
main()
{
  Rcpp::Rcout << cpp_date_ymd( 2009, 7 , 14 ) << std::endl;
  Rcpp::Rcout << cpp_date_ym_weekday_nth( 2019, 7 , 1 , 3 ) << std::endl;
  int marine_day = cpp_date_ym_weekday_nth( 2019, 7 , 1 , 3 );

  char* formatted1 = cpp_date_format( marine_day, "%Y-%m-%d" );
  char* formatted2 = cpp_date_format( cpp_date_add_n_months( marine_day, 1) ,  "%Y-%m-%d" );
  char* formatted3 = cpp_date_format( cpp_date_add_n_years( marine_day, 2) , "%Y-%m-%d" );

  Rcpp::Rcout << formatted1 << std::endl;
  Rcpp::Rcout << "1 months from marine day" << formatted2 << std::endl;
  Rcpp::Rcout << "2 years from marine day" << formatted3 << std::endl;

  free(formatted1);
  free(formatted2);
  free(formatted3);
}
