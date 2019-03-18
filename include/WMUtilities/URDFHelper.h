//
// Created by olavoie on 15/03/19.
//

#ifndef WM_ADMITANCE_URDFHELPER_H
#define WM_ADMITANCE_URDFHELPER_H

#include "ControlTypes.h"
#include <string>
#include <urdf/model.h>

namespace wm_admitance
{
    namespace utilities
    {
        class URDFHelper final
        {
        public:
            URDFHelper();
            URDFHelper(const std::string& pURDFFilePath);
            ~URDFHelper() noexcept = default;

            RobotData getRobotData(const size_t pActuatorCount);
            RobotData getRobotData(const std::string& pURDFFilePath, const size_t pActuatorCount);

        private:
            urdf::Model aURDFModel;
        };
    }
}

#endif //WM_ADMITANCE_URDFHELPER_H
