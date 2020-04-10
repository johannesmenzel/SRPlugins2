#pragma once

#include "IPlug_include_in_plug_hdr.h"

const int kNumPrograms = 1;

enum EParams
{
  kParam = 0,
  kNumParams
};

using namespace iplug;
using namespace igraphics;

class SRTestBed : public Plugin
{
public:
  SRTestBed(const InstanceInfo& info);

#if IPLUG_DSP // All DSP methods and member variables should be within an IPLUG_DSP guard, should you want distributed UI
  void ProcessBlock(sample** inputs, sample** outputs, int nFrames) override;

private:
  double mLastSamplesAverage[2];
#endif
};
