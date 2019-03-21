// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

// r_kmeans_cuda
SEXP r_kmeans_cuda(Rcpp::NumericMatrix samples, int clusters, SEXP tolerance_sexp, SEXP init_sexp, SEXP yinyang_t_sexp, SEXP metric_sexp, bool average_distance_bool, SEXP seed_sexp, int device, int verbosity);
RcppExport SEXP _kmcudaR_r_kmeans_cuda(SEXP samplesSEXP, SEXP clustersSEXP, SEXP tolerance_sexpSEXP, SEXP init_sexpSEXP, SEXP yinyang_t_sexpSEXP, SEXP metric_sexpSEXP, SEXP average_distance_boolSEXP, SEXP seed_sexpSEXP, SEXP deviceSEXP, SEXP verbositySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type samples(samplesSEXP);
    Rcpp::traits::input_parameter< int >::type clusters(clustersSEXP);
    Rcpp::traits::input_parameter< SEXP >::type tolerance_sexp(tolerance_sexpSEXP);
    Rcpp::traits::input_parameter< SEXP >::type init_sexp(init_sexpSEXP);
    Rcpp::traits::input_parameter< SEXP >::type yinyang_t_sexp(yinyang_t_sexpSEXP);
    Rcpp::traits::input_parameter< SEXP >::type metric_sexp(metric_sexpSEXP);
    Rcpp::traits::input_parameter< bool >::type average_distance_bool(average_distance_boolSEXP);
    Rcpp::traits::input_parameter< SEXP >::type seed_sexp(seed_sexpSEXP);
    Rcpp::traits::input_parameter< int >::type device(deviceSEXP);
    Rcpp::traits::input_parameter< int >::type verbosity(verbositySEXP);
    rcpp_result_gen = Rcpp::wrap(r_kmeans_cuda(samples, clusters, tolerance_sexp, init_sexp, yinyang_t_sexp, metric_sexp, average_distance_bool, seed_sexp, device, verbosity));
    return rcpp_result_gen;
END_RCPP
}
// r_knn_cuda
Rcpp::IntegerMatrix r_knn_cuda(int k, Rcpp::NumericMatrix samples, Rcpp::NumericMatrix centroids_sexp, Rcpp::IntegerVector assignments_sexp, SEXP metric_sexp, int device, int verbosity);
RcppExport SEXP _kmcudaR_r_knn_cuda(SEXP kSEXP, SEXP samplesSEXP, SEXP centroids_sexpSEXP, SEXP assignments_sexpSEXP, SEXP metric_sexpSEXP, SEXP deviceSEXP, SEXP verbositySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type samples(samplesSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type centroids_sexp(centroids_sexpSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type assignments_sexp(assignments_sexpSEXP);
    Rcpp::traits::input_parameter< SEXP >::type metric_sexp(metric_sexpSEXP);
    Rcpp::traits::input_parameter< int >::type device(deviceSEXP);
    Rcpp::traits::input_parameter< int >::type verbosity(verbositySEXP);
    rcpp_result_gen = Rcpp::wrap(r_knn_cuda(k, samples, centroids_sexp, assignments_sexp, metric_sexp, device, verbosity));
    return rcpp_result_gen;
END_RCPP
}

RcppExport SEXP kmcudaR_r_kmeans_cuda(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
RcppExport SEXP kmcudaR_r_knn_cuda(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);

static const R_CallMethodDef CallEntries[] = {
    {"_kmcudaR_r_kmeans_cuda", (DL_FUNC) &_kmcudaR_r_kmeans_cuda, 10},
    {"_kmcudaR_r_knn_cuda", (DL_FUNC) &_kmcudaR_r_knn_cuda, 7},
    {"kmcudaR_r_kmeans_cuda", (DL_FUNC) &kmcudaR_r_kmeans_cuda, 10},
    {"kmcudaR_r_knn_cuda",    (DL_FUNC) &kmcudaR_r_knn_cuda,     7},
    {NULL, NULL, 0}
};

RcppExport void R_init_kmcudaR(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
