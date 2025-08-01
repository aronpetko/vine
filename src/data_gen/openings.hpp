#ifndef OPENINGS_HPP
#define OPENINGS_HPP

#include "../chess/board.hpp"
#include "../util/random.hpp"

namespace datagen {

std::vector<BoardState> generate_openings(usize count, usize seed, usize random_moves);

}

#endif // OPENINGS_HPP