#ifndef DEFINES_HPP_
#define DEFINES_HPP_

#include <cstdint>
#include <type_traits>

#define SWITCH_MODIFIRE  // потом сделать через флаг в cmake

#define THROW_FURTHER throw

/*
 * дефайн для того чтобы в тестах можно было унаследоваться от класса
 * и получить доступ к его приватным функциям
*/
#ifdef SWITCH_MODIFIRE
#define MODIFIRE protected
#else
#define MODIFIRE private
#endif

namespace own::defines {
constexpr int DEFAULT_HEIGHT = 1;
constexpr std::size_t DEFAULT_CAPACITY = 5;
constexpr std::size_t FACTOR = 2;
constexpr bool NON_CONST = false;
constexpr bool CONST = true;
} // namespace own::defines

#endif
