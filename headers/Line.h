///
/// Created by: Adamenko Mikhail (XenoneX) at 01.06.2023
///

#ifndef PLANKS_AND_LINES_LINE_H
#define PLANKS_AND_LINES_LINE_H

namespace PlanksAndLines
{
    /// Struct of line in calculation
    struct Line
    {
        /// @brief x coordinate of start point
        float x0;
        /// @brief y coordinate of start point
        float y0;
        /// @brief x coordinate of end point
        float x1;
        /// @brief y coordinate of end point
        float y1;

        /// @brief Joint points count
        int joint_points_count;

        /// @brief Method calculates length of the lag
        /// @return Lag length
        float get_length();
    };
}

#endif
