///
/// Created by: Adamenko Mikhail (XenoneX) at 01.06.2023
///

#ifndef PLANKS_AND_LINES_CALCULATOR_H
#define PLANKS_AND_LINES_CALCULATOR_H

#include "Line.h"
#include "Plank.h"

namespace PlanksAndLines
{
    /// 
    class Calculator
    {
    private:
        /// @brief Method checks if two planks is adjoined
        /// @return Yes or No
        static bool is_adjoining_(const Plank* plank1, const Plank* plank2);

        /// @brief Method checks if plank is adjoined with any plank in list
        /// @return Yes or No
        static bool is_adjoining_(const Plank* plank, const std::vector<Plank>* planks);
    public:
    };
    
} // namespace PlankdAndLines

#endif
