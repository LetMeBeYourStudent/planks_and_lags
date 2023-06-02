///
/// Created by: Adamenko Mikhail (XenoneX) at 01.06.2023
///

#ifndef PLANKS_AND_LINES_PLANK_H
#define PLANKS_AND_LINES_PLANK_H

#include <vector>
#include <tuple>

namespace PlanksAndLines
{
    /// Struct of plank in calculation
    struct Plank
    {
        /// @brief Left-top corner x coordinate
        float x0;
        /// @brief Left-top corner y coordinate
        float y0;
        /// @brief Right-bottom corner x coordinate
        float x1;
        /// @brief Right-bottom corner y coordinate
        float y1;

        /// @brief y coordinate of joint points
        std::vector<float> points;

        /// @brief Method finds left joint range
        /// @return y0 and y1 coordinates of left joint range
        std::tuple<float, float> find_left_free_range();

        /// @brief Method finds right coordinate of left joint range
        /// @return y1 coordinate of left joint range
        float find_right_coordinate_of_left_range();
    };

}

#endif
