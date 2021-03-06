#include "CondFormats/CTPPSReadoutObjects/src/headers.h"

namespace CondFormats_CTPPSPixelObjects {
   struct dictionary {
     std::map<CTPPSPixelFramePosition, CTPPSPixelROCInfo> ROCMapping;
     std::map<uint32_t, CTPPSPixelROCAnalysisMask> analysisMask;
     std::vector< CTPPSPixelGainCalibration::DetRegistry >::iterator p3;
     std::vector< CTPPSPixelGainCalibration::DetRegistry >::const_iterator p4;
     std::map<uint32_t,CTPPSPixelGainCalibration> mycalibmap;
     //--- timing calibration parameters
     std::map<PPSTimingCalibration::Key,std::vector<double> > tc_tm;
     std::map<PPSTimingCalibration::Key,std::pair<double,double> > tc_pm;
     std::pair<PPSTimingCalibration::Key,std::vector<double> > tc_v_tm;
     std::pair<PPSTimingCalibration::Key,std::pair<double,double> > tc_v_pm;
  };
}

