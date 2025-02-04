// This is core/vnl/vnl_imag.h
#ifndef vnl_imag_h_
#define vnl_imag_h_
//:
// \file
// \brief Functions to return the imaginary parts of complex arrays, vectors, matrices
//
// \verbatim
// Modifications
// Peter Vanroose - 2 July 2002 - part of vnl_complex_ops.h moved here
// \endverbatim

#include <complex>
#ifdef _MSC_VER
#  include <vcl_msvc_warnings.h>
#endif
#include "vnl_vector.h"
#include "vnl_vector_fixed.h"
#include "vnl_matrix.h"
#include "vnl_matrix_fixed.h"
#include "vnl_diag_matrix.h"
#include "vnl_diag_matrix_fixed.h"
#include "vnl_sym_matrix.h"
#include "vnl/vnl_export.h"

//: Return array I of imaginary parts of complex array C.
template <class T>
VNL_EXPORT void
vnl_imag(const std::complex<T> * C, T * I, unsigned int n);

// - vnl_vector
// - vnl_vector_fixed
// - vnl_matrix
// - vnl_matrix_fixed
// - vnl_diag_matrix
// - vnl_diag_matrix_fixed
// - vnl_sym_matrix

//: Vector of imaginary parts of vnl_vector<std::complex<T> >.
// \relatesalso vnl_vector
template <class T>
VNL_EXPORT vnl_vector<T>
vnl_imag(const vnl_vector<std::complex<T>> & C);

//: Vector of imaginary parts of vnl_vector_fixed<std::complex<T>, N >.
// \relatesalso vnl_vector_fixed
template <class T, unsigned int N>
vnl_vector_fixed<T, N>
vnl_imag(const vnl_vector_fixed<std::complex<T>, N> & C)
{
  vnl_vector_fixed<T, N> R;
  typename vnl_vector_fixed<std::complex<T>, N>::const_iterator cIt = C.begin();
  typename vnl_vector_fixed<T, N>::iterator rIt = R.begin();
  for (; cIt != C.end(); ++cIt, ++rIt)
    *rIt = std::imag(*cIt);
  return R;
}

//: Matrix of imaginary parts of vnl_matrix<std::complex<T> >.
// \relatesalso vnl_matrix
template <class T>
VNL_EXPORT vnl_matrix<T>
vnl_imag(const vnl_matrix<std::complex<T>> & C);

//: Matrix of imaginary parts of vnl_matrix_fixed<std::complex<T>,NRow,NCol >.
// \relatesalso vnl_matrix_fixed
template <class T, unsigned int NRow, unsigned int NCol>
vnl_matrix_fixed<T, NRow, NCol>
vnl_imag(const vnl_matrix_fixed<std::complex<T>, NRow, NCol> & C)
{
  vnl_matrix_fixed<T, NRow, NCol> R;
  typename vnl_matrix_fixed<std::complex<T>, NRow, NCol>::const_iterator cIt = C.begin();
  typename vnl_matrix_fixed<T, NRow, NCol>::iterator rIt = R.begin();
  for (; cIt != C.end(); ++cIt, ++rIt)
    *rIt = std::imag(*cIt);
  return R;
}

//: Matrix of imaginary parts of vnl_diag_matrix<std::complex<T> >.
// \relatesalso vnl_diag_matrix
template <class T>
VNL_EXPORT vnl_diag_matrix<T>
vnl_imag(const vnl_diag_matrix<std::complex<T>> & C);

//: Matrix of imaginary parts of vnl_diag_matrix_fixed<std::complex<T> >.
// \relatesalso vnl_diag_matrix_fixed
template <class T, unsigned int N>
vnl_diag_matrix_fixed<T, N>
vnl_imag(const vnl_diag_matrix_fixed<std::complex<T>, N> & C)
{
  vnl_diag_matrix_fixed<T, N> R;
  typename vnl_diag_matrix_fixed<std::complex<T>, N>::const_iterator cIt = C.begin();
  typename vnl_diag_matrix_fixed<T, N>::iterator rIt = R.begin();
  for (; cIt != C.end(); ++cIt, ++rIt)
    *rIt = std::imag(*cIt);
  return R;
}

//: Matrix of imaginary parts of vnl_sym_matrix<std::complex<T> >.
// \relatesalso vnl_sym_matrix
template <class T>
VNL_EXPORT vnl_sym_matrix<T>
vnl_imag(const vnl_sym_matrix<std::complex<T>> & C);


#endif // vnl_imag_h_
