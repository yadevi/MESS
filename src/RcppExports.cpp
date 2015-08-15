// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// mfastLmcpp
DataFrame mfastLmcpp(NumericVector y, NumericMatrix x, int addintercept);
RcppExport SEXP MESS_mfastLmcpp(SEXP ySEXP, SEXP xSEXP, SEXP addinterceptSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type addintercept(addinterceptSEXP);
    __result = Rcpp::wrap(mfastLmcpp(y, x, addintercept));
    return __result;
END_RCPP
}
// MLtest
double MLtest();
RcppExport SEXP MESS_MLtest() {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    __result = Rcpp::wrap(MLtest());
    return __result;
END_RCPP
}