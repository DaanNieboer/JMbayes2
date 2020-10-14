// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// mcmc_cpp
List mcmc_cpp(List model_data, List model_info, List initial_values, List priors, List control, List vcov_prop);
RcppExport SEXP _JMbayes2_mcmc_cpp(SEXP model_dataSEXP, SEXP model_infoSEXP, SEXP initial_valuesSEXP, SEXP priorsSEXP, SEXP controlSEXP, SEXP vcov_propSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type model_data(model_dataSEXP);
    Rcpp::traits::input_parameter< List >::type model_info(model_infoSEXP);
    Rcpp::traits::input_parameter< List >::type initial_values(initial_valuesSEXP);
    Rcpp::traits::input_parameter< List >::type priors(priorsSEXP);
    Rcpp::traits::input_parameter< List >::type control(controlSEXP);
    Rcpp::traits::input_parameter< List >::type vcov_prop(vcov_propSEXP);
    rcpp_result_gen = Rcpp::wrap(mcmc_cpp(model_data, model_info, initial_values, priors, control, vcov_prop));
    return rcpp_result_gen;
END_RCPP
}
// logLik_jm
arma::vec logLik_jm(List thetas, List model_data, List model_info, List control);
RcppExport SEXP _JMbayes2_logLik_jm(SEXP thetasSEXP, SEXP model_dataSEXP, SEXP model_infoSEXP, SEXP controlSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type thetas(thetasSEXP);
    Rcpp::traits::input_parameter< List >::type model_data(model_dataSEXP);
    Rcpp::traits::input_parameter< List >::type model_info(model_infoSEXP);
    Rcpp::traits::input_parameter< List >::type control(controlSEXP);
    rcpp_result_gen = Rcpp::wrap(logLik_jm(thetas, model_data, model_info, control));
    return rcpp_result_gen;
END_RCPP
}
