#include <Rcpp.h>
using namespace Rcpp;

// [[Rcpp::export]]
double mean_c(NumericVector x){
  int i;
  int n = x.size();
  double mean = 0;

  for(i=0; i<n; i++){
    mean += x[i];
  }
  return mean/n;
}

// [[Rcpp::export]]
NumericVector res_c(NumericVector x, NumericVector y){
  int i;
  int n = x.size();
  NumericVector residuals(n);
  for(i=0; i<n; i++){
    residuals[i] = pow(x[i] - y[i], 2);
  }
  return residuals;
}

// [[Rcpp::export]]
NumericVector res_sugar(NumericVector x, NumericVector y){
  return pow(x-y, 2);
}
