#ifndef HAVE_VARIABLE_TEMPLATES_VARS_H_
#define HAVE_VARIABLE_TEMPLATES_VARS_H_

template<typename T>
constexpr T always_constexpr {};

template<typename T>
const T always_const {};

template<typename T>
T sometimes_const {};

#endif // ! HAVE_VARIABLE_TEMPLATES_VARS_H_
