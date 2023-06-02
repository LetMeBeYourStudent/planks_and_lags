///
/// Created by: Adamenko Mikhail (XenoneX) at 01.06.2023
///

#include <vector>
#include <tuple>

namespace PlanksAndLines
{
    /// Class of plank in calculation
    struct Plank
    {
        /// @brief Left-top corner x
        float x0;
        /// @brief Left-top corner y
        float y0;
        /// @brief Right-bottom corner x
        float x1;
        /// @brief Right-bottom corner y
        float y1;

        /// @brief y of joint points
        std::vector<float> points;

        /// @brief Method finds left joint period
        /// @return y0 and y1 of left joint period
        std::tuple<float, float> find_left_free_period();

        /// @brief Method finds right coordinate of left joint period
        /// @return y1 of left joint period
        float find_right_coordinate_of_left_period();
    };

}
