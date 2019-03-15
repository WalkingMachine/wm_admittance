/**
 * \file    ControlTypes.h
 * \author  Olivier Lavoie
 */

#ifndef CONTROL_TYPE_H
#define CONTROL_TYPE_H

#include <eigen3/Eigen/Eigen>

namespace wm_admitance
{
    namespace utilities
    {
        struct TransferFunctionCoefficient
        {
            Eigen::ArrayXXd aNumeratorFactor;
            Eigen::ArrayXXd aDenominatorFactor;
        };
    } // namespace utilities
} // namespace wm_admitance

#endif // CONTROL_TYPE_H