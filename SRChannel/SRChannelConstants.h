#ifndef SRCHANNELCONSTANTS_H
#define SRCHANNELCONSTANTS_H
#include "../SRClasses/SRConstants.h"
#include <stddef.h>

#define FREQUENCYRESPONSE 300
#define MAXNUMOUTCHANNELS 2


enum EPrograms {
  defaultProgram = 0,
  kick,
  vocalsfemale,
  kNumPrograms
};

//const int kNumPrograms = 1;
const double METER_ATTACK = .6, METER_DECAY = .05; // This is the global attack and release constants for meters

// Plugin's parameters
enum EParams
{
  // Input Stage
  kInputGain = 0,
  kSaturationType,
  kSaturationDrive,
  kSaturationAmount,
  kSaturationHarmonics,
  kSaturationSkew,
  kOversamplingRate,
  // EQ Stage
  // -- Filter
  kEqHpFreq,
  kEqLpFreq,
  kEqHpOrder,
  //kEqLpOrder,
  kEqHfGain,
  // -- EQ
  kEqHfFreq,
  //kEqHfQ,
  kEqHfBell,
  kEqHmfGain,
  kEqHmfFreq,
  kEqHmfQ,
  kEqLmfGain,
  kEqLmfFreq,
  kEqLmfQ,
  kEqLfGain,
  kEqLfFreq,
  //kEqLfQ,
  kEqLfBell,
  kEqAmount,
  // RMS Compressor
  kCompRmsThresh,
  kCompRmsRatio,
  kCompRmsAttack,
  kCompRmsRelease,
  kCompRmsKneeWidthDb,
  kCompRmsMakeup,
  kCompRmsIsFeedback,
  kCompRmsIsExrSc,
  // Peak Compressor
  kCompPeakThresh,
  kCompPeakRatio,
  kCompPeakAttack,
  kCompPeakRelease,
  kCompPeakKneeWidthDb,
  kCompPeakMakeup,
  kCompPeakSidechainFilterFreq,
  kCompPeakIsFeedback,
  kCompPeakIsExtSc,
  // Compressor
  kCompIsParallel,
  kCompPeakRmsRatio,
  kCompDryWet,
  // Deesser
  kDeesserFreq,
  kDeesserQ,
  kDeesserThresh,
  kDeesserRatio,
  kDeesserAttack,
  kDeesserRelease,
  kDeesserMakeup,
  // Output Stage
  kPan,
  kPanFreq,
  kIsPanMonoLow,
  kWidth,
  kLimiterThresh,
  kClipperThreshold,
  kAgc,
  kOutputGain,
  // Bypasses
  kInputBypass,
  kEqBypass,
  kCompBypass,
  kOutputBypass,
  kBypass,
  // Number of parameters
  kNumParams
};

// Plugin's parameters
const char* paramIdxStr[kNumParams] = {
  // Input Stage
  "kInputGain",
  "kSaturationType",
  "kSaturationDrive",
  "kSaturationAmount",
  "kSaturationHarmonics",
  "kSaturationSkew",
  "kOversamplingRate",
  // EQ Stage
  // -- Filter
  "kEqHpFreq",
  "kEqLpFreq",
  "kEqHpOrder",
  //kEqLpOrder",
  "kEqHfGain",
  // -- EQ
  "kEqHfFreq",
  //kEqHfQ",
  "kEqHfBell",
  "kEqHmfGain",
  "kEqHmfFreq",
  "kEqHmfQ",
  "kEqLmfGain",
  "kEqLmfFreq",
  "kEqLmfQ",
  "kEqLfGain",
  "kEqLfFreq",
  //kEqLfQ",
  "kEqLfBell",
  "kEqAmount",
  // RMS Compressor
  "kCompRmsThresh",
  "kCompRmsRatio",
  "kCompRmsAttack",
  "kCompRmsRelease",
  "kCompRmsKneeWidthDb",
  "kCompRmsMakeup",
  "kCompRmsIsFeedback",
  "kCompRmsIsExrSc",
  // Peak Compressor
  "kCompPeakThresh",
  "kCompPeakRatio",
  "kCompPeakAttack",
  "kCompPeakRelease",
  "kCompPeakKneeWidthDb",
  "kCompPeakMakeup",
  "kCompPeakSidechainFilterFreq",
  "kCompPeakIsFeedback",
  "kCompPeakIsExtSc",
  // Compressor
  "kCompIsParallel",
  "kCompPeakRmsRatio",
  "kCompDryWet",
  // Deesser
  "kDeesserFreq",
  "kDeesserQ",
  "kDeesserThresh",
  "kDeesserRatio",
  "kDeesserAttack",
  "kDeesserRelease",
  "kDeesserMakeup",
  // Output Stage
  "kPan",
  "kPanFreq",
  "kIsPanMonoLow",
  "kWidth",
  "kLimiterThresh",
  "kClipperThreshold",
  "kAgc",
  "kOutputGain",
  // Bypasses
  "kInputBypass",
  "kEqBypass",
  "kCompBypass",
  "kOutputBypass",
  "kBypass"
};

const char** namedParams = paramIdxStr;

//enum EAddParams {
//  kPeakMeterValues = 0,
//  kGrMeterValues,
//  kNumAddParams
//};

// Plugins control tags
enum ECtrlTags {

  // Input Stage
  cInputGain = 0,
  cSaturationType,
  cSaturationDrive,
  cSaturationAmount,
  cSaturationHarmonics,
  cSaturationSkew,
  cOversamplingRate,

  // EQ Stage

  // -- Filter
  cEqHpFreq,
  cEqLpFreq,
  cEqHpOrder,
  //cEqLpOrder,

  // -- EQ
  cEqHfGain,
  cEqHfFreq,
  //cEqHfQ,
  cEqHfBell,
  cEqHmfGain,
  cEqHmfFreq,
  cEqHmfQ,
  cEqLmfGain,
  cEqLmfFreq,
  cEqLmfQ,
  cEqLfGain,
  cEqLfFreq,
  //cEqLfQ,
  cEqLfBell,
  cEqAmount,

  // RMS Compressor
  cCompRmsThresh,
  cCompRmsRatio,
  cCompRmsAttack,
  cCompRmsRelease,
  cCompRmsKneeWidthDb,
  cCompRmsMakeup,
  cCompRmsIsFeedback,
  cCompRmsIsExrSc,

  // Peak Compressor
  cCompPeakThresh,
  cCompPeakRatio,
  cCompPeakAttack,
  cCompPeakRelease,
  cCompPeakKneeWidthDb,
  cCompPeakMakeup,
  cCompPeakSidechainFilterFreq,
  cCompPeakIsFeedback,
  cCompPeakIsExtSc,

  // Compressor
  cCompIsParallel,
  cCompPeakRmsRatio,
  cCompDryWet,

  // Deesser
  cDeesserFreq,
  cDeesserQ,
  cDeesserThresh,
  cDeesserRatio,
  cDeesserAttack,
  cDeesserRelease,
  cDeesserMakeup,

  // Output Stage
  cPan,
  cPanFreq,
  cIsPanMonoLow,
  cWidth,
  cLimiterThresh,
  cClipperThreshold,
  cAgc,
  cOutputGain,

  // Bypasses
  cInputBypass,
  cEqBypass,
  cCompBypass,
  cOutputBypass,
  cBypass,

  // UI Controls
  cSRPluginsLogo,
  cSRChannelLogo,
  cPanelHeader,
  cPanelFooter,
  cPanelInput,
  cPanelEq,
  cPanelComp,
  cPanelPost,
  cPanelOutput,
  cPanelMeter,
  cPresetMenu,
  cInputMeter,
  cInputMeterRms,
  cGrMeter,
  cOutputMeter,
  cOutputMeterRms,
  cScope,
  cChannelCount,
  cVersion,
  cFreqMeter,
  cInfo,
  cDisplayTestMeter,

  // Number of controls
  kNumCtrlTags,
};



enum EStages {
  stageInput = 0,
  stageEq,
  stageComp,
  stagePost,
  stageOutput,
  stageMeter,
  stageHeader,
  stageFooter,
  kNumStages
};

enum EPanelRects {
  RectInput = 0,
  RectEq,
  RectComp,
  RectPost,
  RectOutput,
  RectMeter,
  RectHeader,
  RectFooter,
  kNumSectionRects
};

const int sectionRectGridCells[kNumSectionRects][2] = {
{20,4},
{20,4},
{20,4},
{20,4},
{20,4},
{20,4},
{1,24},
{1,24}
};



/*
Actual properties struct.
Keep in order of the above listet parameters.
These are constants.
*/
const SRParamProperties srchannelParamProperties[kNumParams] = {
  // { "NAME", "SNAME" DEF, MIN, MAX, STEP, CENTER, CTRPNT, "LABEL",GROUP , TYPE, KNOB, PANEL, X, Y, "LBLMIN", "LBLMAX", "LBLCTR", "TOOLTIP"},
  // Input Stage
  { kInputGain, cInputGain, "Input Gain", "Input", 0., -60., 12., 0.1, 0., 10. / 12.,"dB", "Global", IParam::EParamType::kTypeDouble, IParam::EFlags::kFlagsNone, IParam::EParamUnit::kUnitDB, Fader, DEFAULT_FGCOLOR, {RectInput, 0, 2, 2.f, 18.f}, "-60", "12", "0", "Input Gain is applied before everything else" },
  { kSaturationType, cSaturationType, "Saturation Type", "Type", 0, 0, 6, -1, -1, -1, "", "Input", IParam::EParamType::kTypeEnum, IParam::EFlags::kFlagsNone, IParam::EParamUnit::kUnitCustom, Button, SR::Graphics::Layout::layout.GetColor(SR::Graphics::Layout::SRCustomColors::ECustomColors::kPluginBg), {RectInput, 2, 6, 2.f, 1.f}, "", "", "", "Type of Saturation"},
  { kSaturationDrive, cSaturationDrive, "Sat Drive", "Drive", 0., 0., 60., 0.1, 30., .5, "dB", "Input", IParam::EParamType::kTypeDouble, IParam::EFlags::kFlagsNone, IParam::EParamUnit::kUnitDB, SslRed, SR::Graphics::Layout::layout.GetColor(SR::Graphics::Layout::SRCustomColors::ECustomColors::kRed), {RectInput, 0, 0, 2.f, 2.f}, "0", "60", "30", "Saturation input drive, hits the saturation module harder" },
  { kSaturationAmount, cSaturationAmount, "Sat Amount", "Saturation", 0., 0., 99., 0.01, 10., .5, "%", "Input", IParam::EParamType::kTypeDouble, IParam::EFlags::kFlagsNone, IParam::EParamUnit::kUnitPercentage, SslOrange, SR::Graphics::Layout::layout.GetColor(SR::Graphics::Layout::SRCustomColors::ECustomColors::kOrange),{RectInput, 2, 0, 2.f, 2.f}, "0", "100", "10", "Amount of Saturation" },
  { kSaturationHarmonics, cSaturationHarmonics, "Harmonics", "Harmonics", 50., 0., 100., .01, 50., .5, "%", "Input", IParam::EParamType::kTypeDouble, IParam::EFlags::kFlagsNone, IParam::EParamUnit::kUnitPercentage, SslBlue, SR::Graphics::Layout::layout.GetColor(SR::Graphics::Layout::SRCustomColors::ECustomColors::kBlue), {RectInput, 2, 2, 2.f, 2.f}, "Even", "Odd", "Mix", "Dial in even harmonics by turning the knob counter-clockwise" },
  { kSaturationSkew, cSaturationSkew, "Sat Skew", "Skew", 0, -100., 100., 0.01, 0., .5, "%", "Input", IParam::EParamType::kTypeDouble, IParam::EFlags::kFlagsNone, IParam::EParamUnit::kUnitPercentage, SslOrange, SR::Graphics::Layout::layout.GetColor(SR::Graphics::Layout::SRCustomColors::ECustomColors::kOrange), {RectInput, 2, 4, 2.f, 2.f}, "-100", "100", "0", "Saturations positive/negative skewness. Distorts waveform" },
  { kOversamplingRate, cOversamplingRate, "Oversampling", "", 0, 0, 4, -1, -1, -1, "X", "Input", IParam::EParamType::kTypeEnum, IParam::EFlags::kFlagsNone, IParam::EParamUnit::kUnitCustom, Button, SR::Graphics::Layout::layout.GetColor(SR::Graphics::Layout::SRCustomColors::ECustomColors::kPluginBg), {RectInput, 2, 8, 2.f, 1.f}, "", "", "", "Oversampling Rate"},
  // EQ Stage
  // -- Filter
  { kEqHpFreq, cEqHpFreq, "Highpass Freq", "Highpass", 16., 16., 350., 1., 120., .5, "Hz", "EQ", IParam::EParamType::kTypeDouble, IParam::EFlags::kFlagsNone, IParam::EParamUnit::kUnitFrequency, SslWhite, SR::Graphics::Layout::layout.GetColor(SR::Graphics::Layout::SRCustomColors::ECustomColors::kWhite), {RectEq, 0, 1, 2.f, 2.f}, "16", "350", "120", "Frequency of the High Pass Filter, turn down to deactivate" },
  { kEqLpFreq, cEqLpFreq, "Lowpass Freq", "LowPass", 22000., 3000., 22000., 1., 5000., .5, "Hz", "EQ", IParam::EParamType::kTypeDouble, IParam::EFlags::kFlagsNone, IParam::EParamUnit::kUnitFrequency, SslWhite, SR::Graphics::Layout::layout.GetColor(SR::Graphics::Layout::SRCustomColors::ECustomColors::kWhite), {RectEq, 2, 0, 2.f, 2.f}, "3k", "22k", "5k", "Set the frequency of the Low Pass Filter, turn up to deactivate" },
  { kEqHpOrder, cEqHpOrder, "HP Order", "", 1, 0, 8, 1, 5, .5, "dB/oct", "EQ", IParam::EParamType::kTypeEnum, IParam::EFlags::kFlagsNone, IParam::EParamUnit::kUnitCustom, Button, SR::Graphics::Layout::layout.GetColor(SR::Graphics::Layout::SRCustomColors::ECustomColors::kPluginBg), {RectEq, 0, 0, 2.f, 1.f}, "6", "120", "36", "Order of the Highpass Filter or filter slope" },
  //{ kEqLpOrder, cEqLpOrder, "LP Order", "", 1, 0, 8, 1, 5, .5, "dB/oct", "EQ", IParam::EParamType::kTypeEnum, IParam::EFlags::kFlagsNone, none, {RectEq, 2, 2, 2.f, 1.f}, "6", "120", "36", "HIDED - Order of the Lowpass Filter or filter slope" },
  // -- EQ
  { kEqHfGain, cEqHfGain, "HF Gain", "Gain", 0., -12., 12., .1, 0., .5, "dB", "EQ", IParam::EParamType::kTypeDouble, IParam::EFlags::kFlagsNone, IParam::EParamUnit::kUnitDB, SslRed, SR::Graphics::Layout::layout.GetColor(SR::Graphics::Layout::SRCustomColors::ECustomColors::kRed), {RectEq, 0, 3, 2.f, 2.f}, "-12", "12", "0", "Gain of the high frequency band" },
  { kEqHfFreq, cEqHfFreq, "HF Freq", "Freq", 8000., 1500., 16000., 1., 8000., .5, "Hz", "EQ", IParam::EParamType::kTypeDouble, IParam::EFlags::kFlagsNone, IParam::EParamUnit::kUnitFrequency, SslRed, SR::Graphics::Layout::layout.GetColor(SR::Graphics::Layout::SRCustomColors::ECustomColors::kRed), {RectEq, 2, 4, 2.f, 2.f}, "1.5k", "16k", "8k", "Frequency of the high frequency band" },
  // { kEqHfQ, cEqHfQ, "HF Q", "Q", stQ, 0.1, 10., 0.01, stQ, .5, "", "EQ", IParam::EParamType::kTypeDouble, IParam::EFlags::kFlagsNone, SslRed, SR::Graphics::Layout::layout.GetColor(SR::Graphics::Layout::SRCustomColors::ECustomColors::kRed), {RectEq, -1, 4, 2.f, 2.f}, "W", "N", "", "Set the Q value of the high frequency band" },
  { kEqHfBell, cEqHfBell, "Hf Bell", "Bell", 0, 0, 1, 1, 0.5, .5, "", "EQ", IParam::EParamType::kTypeBool, IParam::EFlags::kFlagsNone, IParam::EParamUnit::kUnitCustom, Button, SR::Graphics::Layout::layout.GetColor(SR::Graphics::Layout::SRCustomColors::ECustomColors::kPluginBg), {RectEq, 2, 3, 2.f, 1.f}, "SLF", "BLL", "", "Switches the high frequency band between bell and shelf" },
  { kEqHmfGain, cEqHmfGain, "HMF Gain", "Gain", 0., -12., 12., 0.1, 0., .5, "dB", "EQ", IParam::EParamType::kTypeDouble, IParam::EFlags::kFlagsNone, IParam::EParamUnit::kUnitDB, SslBlue, SR::Graphics::Layout::layout.GetColor(SR::Graphics::Layout::SRCustomColors::ECustomColors::kBlue), {RectEq, 0, 5, 2.f, 2.f}, "-12", "12", "0", "Gain of the upper mid frequency band" },
  { kEqHmfFreq, cEqHmfFreq, "HMF Freq", "Freq", 3000., 600., 7000., 1., 3000., .5, "Hz", "EQ", IParam::EParamType::kTypeDouble, IParam::EFlags::kFlagsNone, IParam::EParamUnit::kUnitFrequency, SslBlue, SR::Graphics::Layout::layout.GetColor(SR::Graphics::Layout::SRCustomColors::ECustomColors::kBlue), {RectEq, 2, 6, 2.f, 2.f}, "600", "7k", "3k", "Frequency of the upper mid frequency band" },
  { kEqHmfQ, cEqHmfQ, "HMF Q", "Q", stQ, 0.1, 10., 0.01, stQ, .5, "", "EQ", IParam::EParamType::kTypeDouble, IParam::EFlags::kFlagsNone, IParam::EParamUnit::kUnitCustom, SslBlue, SR::Graphics::Layout::layout.GetColor(SR::Graphics::Layout::SRCustomColors::ECustomColors::kBlue), {RectEq, 0, 7, 2.f, 2.f}, "W", "N", "", "Set the Q value of the upper mid frequency band" },
  { kEqLmfGain, cEqLmfGain, "LMF Gain", "Gain", 0., -12., 12., 0.1, 0., .5, "dB", "EQ", IParam::EParamType::kTypeDouble, IParam::EFlags::kFlagsNone, IParam::EParamUnit::kUnitDB, SslGreen, SR::Graphics::Layout::layout.GetColor(SR::Graphics::Layout::SRCustomColors::ECustomColors::kGreen), {RectEq, 0, 9, 2.f, 2.f}, "-12", "12", "0", "Gain of the lower mid frequency band" },
  { kEqLmfFreq, cEqLmfFreq, "LMF Freq", "Freq", 1000., 200., 2500., 1., 1000., .5, "Hz", "EQ", IParam::EParamType::kTypeDouble, IParam::EFlags::kFlagsNone, IParam::EParamUnit::kUnitFrequency, SslGreen, SR::Graphics::Layout::layout.GetColor(SR::Graphics::Layout::SRCustomColors::ECustomColors::kGreen), {RectEq, 2, 10, 2.f, 2.f}, "200", "2.5k", "1k", "Frequency of the lower mid frequency band" },
  { kEqLmfQ, cEqLmfQ, "LMF Q", "Q", stQ, 0.1, 10., 0.01, stQ, .5, "", "EQ", IParam::EParamType::kTypeDouble, IParam::EFlags::kFlagsNone, IParam::EParamUnit::kUnitCustom, SslGreen, SR::Graphics::Layout::layout.GetColor(SR::Graphics::Layout::SRCustomColors::ECustomColors::kGreen), {RectEq, 0, 11, 2.f, 2.f}, "W", "N", "", "Set the Q value of the lower mid frequency band" },
  { kEqLfGain, cEqLfGain, "LF Gain", "Gain", 0., -12., 12., 0.1, 0., .5, "dB", "EQ", IParam::EParamType::kTypeDouble, IParam::EFlags::kFlagsNone, IParam::EParamUnit::kUnitDB, SslBlack, SR::Graphics::Layout::layout.GetColor(SR::Graphics::Layout::SRCustomColors::ECustomColors::kBlack), {RectEq, 0, 13, 2.f, 2.f}, "-12", "12", "0", "Gain of the low frequency band" },
  { kEqLfFreq, cEqLfFreq, "LF Freq", "Freq", 200., 30., 450., 1., 200., .5, "Hz", "EQ", IParam::EParamType::kTypeDouble, IParam::EFlags::kFlagsNone, IParam::EParamUnit::kUnitFrequency, SslBlack, SR::Graphics::Layout::layout.GetColor(SR::Graphics::Layout::SRCustomColors::ECustomColors::kBlack), {RectEq, 2, 12, 2.f, 2.f}, "30", "450", "200", "Set the frequency of the low frequency band" },
  // { kEqLfQ, cEqLfQ, "LF Q", "Q", stQ, 0.1, 10., 0.01, stQ, .5, "", "EQ", IParam::EParamType::kTypeDouble, IParam::EFlags::kFlagsNone, SslBlack, SR::Graphics::Layout::layout.GetColor(SR::Graphics::Layout::SRCustomColors::ECustomColors::kBlack), {RectEq, -1, 12, 2.f, 2.f}, "W", "N", "", "Set the Q value of the low frequency band" },
  { kEqLfBell, cEqLfBell, "Lf Bell", "Bell", 0, 0, 1, 0.1, 0.5, .5, "", "EQ", IParam::EParamType::kTypeBool, IParam::EFlags::kFlagsNone, IParam::EParamUnit::kUnitCustom, Button, SR::Graphics::Layout::layout.GetColor(SR::Graphics::Layout::SRCustomColors::ECustomColors::kPluginBg), {RectEq, 2, 14, 2.f, 1.f}, "SLF", "BLL", "", "Switches the low frequency band between bell and shelf" },
  { kEqAmount, cEqAmount, "EQ Amount", "Amount", 100.0, -200.0, 200.0, 0.1, 0., .5, "%", "EQ", IParam::EParamType::kTypeDouble, IParam::EFlags::kFlagsNone, IParam::EParamUnit::kUnitPercentage, SslWhite, SR::Graphics::Layout::layout.GetColor(SR::Graphics::Layout::SRCustomColors::ECustomColors::kWhite), {RectEq, 2, 16, 2.f, 2.f}, "-200", "200", "0", "Sets Equalizers processing amount"},
  // RMS Compressor
  { kCompRmsThresh, cCompRmsThresh, "RMS Thresh", "Thresh", 0., -40., 0., 0.1, -20., .5, "dB", "Compressor",IParam::EParamType::kTypeDouble, IParam::EFlags::kFlagsNone, IParam::EParamUnit::kUnitDB, SslWhite, SR::Graphics::Layout::layout.GetColor(SR::Graphics::Layout::SRCustomColors::ECustomColors::kWhite), {RectComp, 0, 0, 2.f, 2.f}, "-40", "0", "-20", "Threshold of RMS Compressor" },
  { kCompRmsRatio, cCompRmsRatio, "RMS Ratio", "Ratio", 3., 0.5, 20., 0.01, 3., .5, ":1", "Compressor",IParam::EParamType::kTypeDouble, IParam::EFlags::kFlagsNone, IParam::EParamUnit::kUnitRatio, SslWhite, SR::Graphics::Layout::layout.GetColor(SR::Graphics::Layout::SRCustomColors::ECustomColors::kWhite), {RectComp, 2, 1, 2.f, 2.f}, ".5:1", "20:1", "3:1", "Ratio of RMS Compressor" },
  { kCompRmsAttack, cCompRmsAttack, "RMS Attack", "Attack", 20., 10., 200., 0.01, 20., .5, "ms", "Compressor",IParam::EParamType::kTypeDouble, IParam::EFlags::kFlagsNone, IParam::EParamUnit::kUnitMilliseconds, SslWhite, SR::Graphics::Layout::layout.GetColor(SR::Graphics::Layout::SRCustomColors::ECustomColors::kWhite), {RectComp, 0, 2, 2.f, 2.f}, "10", "200", "20", "Attack of RMS Compressor" },
  { kCompRmsRelease, cCompRmsRelease, "RMS Release", "Release", 200., 100., 5000., 1., 200., .5, "ms", "Compressor",IParam::EParamType::kTypeDouble, IParam::EFlags::kFlagsNone, IParam::EParamUnit::kUnitMilliseconds, SslWhite, SR::Graphics::Layout::layout.GetColor(SR::Graphics::Layout::SRCustomColors::ECustomColors::kWhite), {RectComp, 2, 3, 2.f, 2.f}, "100", "5k", "200", "Release of RMS Compressor" },
  { kCompRmsKneeWidthDb, cCompRmsKneeWidthDb, "RMS Knee", "Knee", 10., 0., 30., 0.1, 10., .5, "dB", "Compressor",IParam::EParamType::kTypeDouble, IParam::EFlags::kFlagsNone, IParam::EParamUnit::kUnitDB, SslGreen, SR::Graphics::Layout::layout.GetColor(SR::Graphics::Layout::SRCustomColors::ECustomColors::kGreen), {RectComp, 2, 5, 2.f, 2.f}, "0", "30", "10", "RMS Compressors width of the soft knee" },
  { kCompRmsMakeup, cCompRmsMakeup, "RMS Makeup", "Makeup", 0., 0., 40., 0.1, 10., .5, "dB", "Compressor",IParam::EParamType::kTypeDouble, IParam::EFlags::kFlagsNone, IParam::EParamUnit::kUnitDB, SslBlack, SR::Graphics::Layout::layout.GetColor(SR::Graphics::Layout::SRCustomColors::ECustomColors::kBlack), {RectComp, 0, 4, 2.f, 2.f}, "0", "40", "10", "Makeup gain of RMS Compressor" },
  { kCompRmsIsFeedback, cCompRmsIsFeedback, "RMS Topology", "Topology", 0, 0, 1, 0.1, 0.5, .5, "", "Compressor",IParam::EParamType::kTypeBool, IParam::EFlags::kFlagsNone, IParam::EParamUnit::kUnitCustom, Button, SR::Graphics::Layout::layout.GetColor(SR::Graphics::Layout::SRCustomColors::ECustomColors::kPluginBg), {RectComp, 0, 6, 2.f, 1.f}, "FWD", "BCK", "", "RMS Compressors Topology, either feed forward or feedback" },
  { kCompRmsIsExrSc, cCompRmsIsExrSc, "RMS Ext SC", "Ext", 0, 0, 1, 0.1, 0.5, .5, "", "Compressor", IParam::EParamType::kTypeBool, IParam::EFlags::kFlagsNone, IParam::EParamUnit::kUnitCustom, Button, SR::Graphics::Layout::layout.GetColor(SR::Graphics::Layout::SRCustomColors::ECustomColors::kPluginBg), {RectComp, 2, 0, 2.f, 1.f}, "INT", "EXT", "", "External sidechain for RMS Compressor. Use tracks input channel 3/4" },
  // Peak Compressor
  { kCompPeakThresh, cCompPeakThresh, "Peak Thresh", "Thresh", 0., -40., 0., 0.1, -20., .5, "dB", "Compressor",IParam::EParamType::kTypeDouble, IParam::EFlags::kFlagsNone, IParam::EParamUnit::kUnitDB, SslWhite, SR::Graphics::Layout::layout.GetColor(SR::Graphics::Layout::SRCustomColors::ECustomColors::kWhite), {RectComp, 0, 8, 2.f, 2.f}, "-40", "0", "-20", "Threshold of Peak Compressor" },
  { kCompPeakRatio, cCompPeakRatio, "Peak Ratio", "Ratio", 3., 0.5, 20., 0.01, 3., .5, ":1", "Compressor",IParam::EParamType::kTypeDouble, IParam::EFlags::kFlagsNone, IParam::EParamUnit::kUnitRatio, SslWhite, SR::Graphics::Layout::layout.GetColor(SR::Graphics::Layout::SRCustomColors::ECustomColors::kWhite), {RectComp, 2, 9, 2.f, 2.f}, ".5:1", "20:1", "3:1", "Ratio of Peak Compressor" },
  { kCompPeakAttack, cCompPeakAttack, "Peak Attack", "Attack", 20., 0.01, 200., 0.01, 20., .5, "ms", "Compressor",IParam::EParamType::kTypeDouble, IParam::EFlags::kFlagsNone, IParam::EParamUnit::kUnitMilliseconds, SslWhite, SR::Graphics::Layout::layout.GetColor(SR::Graphics::Layout::SRCustomColors::ECustomColors::kWhite), {RectComp, 0, 10, 2.f, 2.f}, "0.01", "200", "20", "Attack of Peak Compressor" },
  { kCompPeakRelease, cCompPeakRelease, "Peak Release", "Release", 200., 20., 2000., 0.01, 200., .5, "ms", "Compressor",IParam::EParamType::kTypeDouble, IParam::EFlags::kFlagsNone, IParam::EParamUnit::kUnitMilliseconds, SslWhite, SR::Graphics::Layout::layout.GetColor(SR::Graphics::Layout::SRCustomColors::ECustomColors::kWhite), {RectComp, 2, 11, 2.f, 2.f}, "20", "2k", "200", "Release of Peak Compressor" },
  { kCompPeakKneeWidthDb, cCompPeakKneeWidthDb, "Peak Knee", "Knee", 10., 0., 30., 0.1, 10., .5, "dB", "Compressor",IParam::EParamType::kTypeDouble, IParam::EFlags::kFlagsNone, IParam::EParamUnit::kUnitDB, SslGreen, SR::Graphics::Layout::layout.GetColor(SR::Graphics::Layout::SRCustomColors::ECustomColors::kGreen), {RectComp, 2, 13, 2.f, 2.f}, "0", "30", "10", "Peak Compressors width of the soft knee" },
  { kCompPeakMakeup, cCompPeakMakeup, "Peak Makeup", "Makeup", 0., 0., 40., 0.1, 10., .5, "dB", "Compressor",IParam::EParamType::kTypeDouble, IParam::EFlags::kFlagsNone, IParam::EParamUnit::kUnitDB, SslBlack, SR::Graphics::Layout::layout.GetColor(SR::Graphics::Layout::SRCustomColors::ECustomColors::kBlack), {RectComp, 0, 12, 2.f, 2.f}, "0", "40", "10", "Makeup Gain of Peak Compressor" },
  { kCompPeakSidechainFilterFreq, cCompPeakSidechainFilterFreq, "Peak SC Filter", "Filter", 16., 16., 5000., 1., 1000., .5, "Hz", "Compressor",IParam::EParamType::kTypeDouble, IParam::EFlags::kFlagsNone, IParam::EParamUnit::kUnitFrequency, SslBlue, SR::Graphics::Layout::layout.GetColor(SR::Graphics::Layout::SRCustomColors::ECustomColors::kBlue), {RectComp, 0, 14, 2.f, 2.f}, "16", "5k", "1k", "Frequency of the Compressors sidechain highpass filter" },
  { kCompPeakIsFeedback, cCompPeakIsFeedback, "Peak Topology", "Topology", 0, 0, 1, 0.1, 0.5, .5, "", "Compressor",IParam::EParamType::kTypeBool, IParam::EFlags::kFlagsNone, IParam::EParamUnit::kUnitCustom, Button, SR::Graphics::Layout::layout.GetColor(SR::Graphics::Layout::SRCustomColors::ECustomColors::kPluginBg), {RectComp, 2, 15, 2.f, 1.f}, "FWD", "BCK", "", "Peak Compressors Topology, either feed forward or feedback" },
  { kCompPeakIsExtSc, cCompPeakIsExtSc, "Peak Ext SC", "Ext", 0, 0, 1, 0.1, 0.5, .5, "", "Compressor",IParam::EParamType::kTypeBool, IParam::EFlags::kFlagsNone, IParam::EParamUnit::kUnitCustom, Button, SR::Graphics::Layout::layout.GetColor(SR::Graphics::Layout::SRCustomColors::ECustomColors::kPluginBg), {RectComp, 2, 8, 2.f, 1.f}, "INT", "EXT", "", "External sidechain for Peak Compressor. Use tracks input channel 3/4" },
  // Compressor
  { kCompIsParallel, cCompIsParallel, "Comp Ser/Par", "Parallel", 0, 0, 1, 0.1, 0.5, .5, "", "Compressor",IParam::EParamType::kTypeBool, IParam::EFlags::kFlagsNone, IParam::EParamUnit::kUnitCustom, Button, SR::Graphics::Layout::layout.GetColor(SR::Graphics::Layout::SRCustomColors::ECustomColors::kPluginBg), {RectFooter, 10, 0, 2.f, 1.f}, "SER", "PAR", "", "RMS and Peak Compressor can be run serial or parallel" },
  { kCompPeakRmsRatio, cCompPeakRmsRatio, "RMS/Peak Ratio", "Ratio", 50., 0., 100., 0.1, 50., .5, "%", "Compressor",IParam::EParamType::kTypeDouble, IParam::EFlags::kFlagsNone, IParam::EParamUnit::kUnitPercentage, SslBlack, SR::Graphics::Layout::layout.GetColor(SR::Graphics::Layout::SRCustomColors::ECustomColors::kBlack), {RectComp, 0, 18, 2.f, 2.f}, "0", "100", "50", "Mix the signal of the RMS and Peak Compressor" },
  { kCompDryWet, cCompDryWet, "Dry/Wet", "Mix", 100., 0., 100., 1., 50., .5, "%", "Compressor",IParam::EParamType::kTypeDouble, IParam::EFlags::kFlagsNone, IParam::EParamUnit::kUnitPercentage, SslBlack, SR::Graphics::Layout::layout.GetColor(SR::Graphics::Layout::SRCustomColors::ECustomColors::kBlack), {RectComp, 2, 18, 2.f, 2.f}, "0", "100", "50", "Do parallel compression by dialing in the uncompressed signal" },
  // Deesser
  { kDeesserFreq, cDeesserFreq, "Deesser Freq", "Freq", 7000., 16., 22000., 1., 7000., .5, "Hz", "Deesser", IParam::EParamType::kTypeDouble, IParam::EFlags::kFlagsNone, IParam::EParamUnit::kUnitFrequency, SslYellow, SR::Graphics::Layout::layout.GetColor(SR::Graphics::Layout::SRCustomColors::ECustomColors::kYellow), {RectPost, 0, 12, 2.f, 2.f}, "16", "22k", "7k", "Deessers center frequency" },
  { kDeesserQ, cDeesserQ, "Deesser Q", "Q", 3.0, 0.1, 10., 0.01, 3.0, .5, "", "Deesser", IParam::EParamType::kTypeDouble, IParam::EFlags::kFlagsNone, IParam::EParamUnit::kUnitCustom, SslYellow, SR::Graphics::Layout::layout.GetColor(SR::Graphics::Layout::SRCustomColors::ECustomColors::kYellow), {RectPost, 2, 12, 2.f, 2.f}, "W", "N", "", "Deessers width (Q)" },
  { kDeesserThresh, cDeesserThresh, "Deesser Thresh", "Thresh", 0., -50., 0., 0.1, -10., .5, "dB", "Deesser", IParam::EParamType::kTypeDouble, IParam::EFlags::kFlagsNone, IParam::EParamUnit::kUnitDB, SslYellow, SR::Graphics::Layout::layout.GetColor(SR::Graphics::Layout::SRCustomColors::ECustomColors::kYellow), {RectPost, 0, 14, 2.f, 2.f}, "-50", "0", "-10", "Deessers Threshold" },
  { kDeesserRatio, cDeesserRatio, "Deesser Ratio", "Ratio", 5., 0.5, 20., 0.01, 5., .5, ":1", "Deesser", IParam::EParamType::kTypeDouble, IParam::EFlags::kFlagsNone, IParam::EParamUnit::kUnitRatio, SslYellow, SR::Graphics::Layout::layout.GetColor(SR::Graphics::Layout::SRCustomColors::ECustomColors::kYellow), {RectPost, 2, 14, 2.f, 2.f}, ".5:1", "20:1", "5:1", "Deessers Ratio" },
  { kDeesserAttack, cDeesserAttack, "Deesser Attack", "Attack", 1., 0.01, 200., 0.01, 1., .5, "ms", "Deesser", IParam::EParamType::kTypeDouble, IParam::EFlags::kFlagsNone, IParam::EParamUnit::kUnitMilliseconds, SslYellow, SR::Graphics::Layout::layout.GetColor(SR::Graphics::Layout::SRCustomColors::ECustomColors::kYellow), {RectPost, 0, 16, 2.f, 2.f}, "0.01", "200", "20", "Deessers Attack" },
  { kDeesserRelease, cDeesserRelease, "Deesser Release", "Release", 30., 1., 2000., 0.01, 30., .5, "ms", "Deesser", IParam::EParamType::kTypeDouble, IParam::EFlags::kFlagsNone, IParam::EParamUnit::kUnitMilliseconds, SslYellow, SR::Graphics::Layout::layout.GetColor(SR::Graphics::Layout::SRCustomColors::ECustomColors::kYellow), {RectPost, 2, 16, 2.f, 2.f}, "1", "2k", "200", "Deessers Release" },
  { kDeesserMakeup, cDeesserMakeup, "Deesser Makeup", "Makeup", 0., 0., 40., 0.1, 10., .5, "dB", "Deesser", IParam::EParamType::kTypeDouble, IParam::EFlags::kFlagsNone, IParam::EParamUnit::kUnitDB, SslYellow, SR::Graphics::Layout::layout.GetColor(SR::Graphics::Layout::SRCustomColors::ECustomColors::kYellow), {RectPost, 0, 18, 2.f, 2.f}, "0", "40", "10", "Deessers Makeup" },
  // Output Stage
  { kPan, cPan, "Pan", "Pan", 0., -100., 100., 1., 0., .5, "%", "Output", IParam::EParamType::kTypeDouble, IParam::EFlags::kFlagsNone, IParam::EParamUnit::kUnitPan, SslBlue, SR::Graphics::Layout::layout.GetColor(SR::Graphics::Layout::SRCustomColors::ECustomColors::kBlue), {RectOutput, 0, 0, 2.f, 2.f}, "L", "R", "C", "Pan" },
  { kPanFreq, cPanFreq, "Pan Freq", "XFreq", 16., 16., 1000., 1., 150., .5, "Hz", "Output", IParam::EParamType::kTypeDouble, IParam::EFlags::kFlagsNone, IParam::EParamUnit::kUnitFrequency, SslRed, SR::Graphics::Layout::layout.GetColor(SR::Graphics::Layout::SRCustomColors::ECustomColors::kRed), {RectOutput, 0, 2, 2.f, 2.f}, "16", "1k", "200", "Frequencies below crossover will be not affected by panner" },
  { kIsPanMonoLow, cIsPanMonoLow, "Mono Bass", "Mono Bass", 0, 0, 1, 0.1, 0.5, .5, "", "Output", IParam::EParamType::kTypeBool, IParam::EFlags::kFlagsNone, IParam::EParamUnit::kUnitCustom, Button, SR::Graphics::Layout::layout.GetColor(SR::Graphics::Layout::SRCustomColors::ECustomColors::kPluginBg), {RectOutput, 0, 6, 2.f, 1.f}, "STB", "MNB", "", "Bass Frequencies will left stereo or will be monoed" },
  { kWidth, cWidth, "Width", "Width", 100.0, 0.0, 400.0, 1.0, 100.0, 0.5, "%", "Output", IParam::EParamType::kTypeDouble, IParam::EFlags::kFlagsNone, IParam::EParamUnit::kUnitPercentage, SslBlue, SR::Graphics::Layout::layout.GetColor(SR::Graphics::Layout::SRCustomColors::ECustomColors::kBlue), {RectOutput, 0, 10, 2.f, 2.f}, "0", "400", "100", "Width of the stereo field" },
  { kLimiterThresh, cLimiterThresh, "Limiter", "Limiter", 10., -30., 10., 0.1, 0., .5, "dB", "Output", IParam::EParamType::kTypeDouble, IParam::EFlags::kFlagsNone, IParam::EParamUnit::kUnitDB, SslOrange, SR::Graphics::Layout::layout.GetColor(SR::Graphics::Layout::SRCustomColors::ECustomColors::kOrange), {RectOutput, 0, 4, 2.f, 2.f}, "-30", "10", "0", "Thresold of Output Limiter" },
  { kClipperThreshold, cClipperThreshold, "Clipper", "Clipper", 0., 0., 99., 0.01, 50., .5, "%", "Output", IParam::EParamType::kTypeDouble, IParam::EFlags::kFlagsNone, IParam::EParamUnit::kUnitPercentage, SslYellow, SR::Graphics::Layout::layout.GetColor(SR::Graphics::Layout::SRCustomColors::ECustomColors::kYellow), {RectOutput, 2, 0, 2.f, 2.f}, "0", "100", "50", "Amount of the Output Clipper (cuts amplitutde)" },
  { kAgc, cAgc, "Auto Gain Comp", "AGC", 0, 0, 1, 0.1, 0.5, .5, "", "Output", IParam::EParamType::kTypeBool, IParam::EFlags::kFlagsNone, IParam::EParamUnit::kUnitCustom, Button, SR::Graphics::Layout::layout.GetColor(SR::Graphics::Layout::SRCustomColors::ECustomColors::kPluginBg), {RectOutput, 0, 8, 2.f, 1.f}, "AGC", "", "", "Automatic Gain Conpensation. Click to adjust output volume to input volume" },
  { kOutputGain, cOutputGain, "Output Gain", "Output", 0., -60., 12., 0.1, 0., 10. / 12.,"dB", "Global", IParam::EParamType::kTypeDouble, IParam::EFlags::kFlagsNone, IParam::EParamUnit::kUnitDB, Fader, DEFAULT_FGCOLOR, {RectOutput, 2, 2, 2.f, 18.f}, "-60", "12", "0", "Output Gain" },
  // Bypasses
  { kInputBypass, cInputBypass, "Input Bypass", "In Byp", 0, 0, 1, 0.1, 0.5, .5, "", "Global", IParam::EParamType::kTypeBool, IParam::EFlags::kFlagsNone, IParam::EParamUnit::kUnitCustom, Button, SR::Graphics::Layout::layout.GetColor(SR::Graphics::Layout::SRCustomColors::ECustomColors::kPluginBg), {RectFooter, 0, 0, 2.f, 1.f}, "IN ON", "IN OFF", "", "Bypass Input Section" },
  { kEqBypass, cEqBypass, "EQ Bypass", "EQ Byp", 0, 0, 1, 0.1, 0.5, .5, "", "Global", IParam::EParamType::kTypeBool, IParam::EFlags::kFlagsNone, IParam::EParamUnit::kUnitCustom, Button, SR::Graphics::Layout::layout.GetColor(SR::Graphics::Layout::SRCustomColors::ECustomColors::kPluginBg), {RectFooter, 4, 0, 2.f, 1.f}, "EQ ON", "EQ OFF", "", "Bypass Equalizer Section" },
  { kCompBypass, cCompBypass, "Comp Bypass", "Comp Byp", 0, 0, 1, 0.1, 0.5, .5, "", "Global", IParam::EParamType::kTypeBool, IParam::EFlags::kFlagsNone, IParam::EParamUnit::kUnitCustom, Button, SR::Graphics::Layout::layout.GetColor(SR::Graphics::Layout::SRCustomColors::ECustomColors::kPluginBg), {RectFooter, 8, 0, 2.f, 1.f}, "DYN ON", "DYN OFF", "", "Bypass Compressor Section" },
  { kOutputBypass, cOutputBypass, "Output Bypass", "Out Byp", 0, 0, 1, 0.1, 0.5, .5, "", "Global", IParam::EParamType::kTypeBool, IParam::EFlags::kFlagsNone, IParam::EParamUnit::kUnitCustom, Button, SR::Graphics::Layout::layout.GetColor(SR::Graphics::Layout::SRCustomColors::ECustomColors::kPluginBg), {RectFooter, 16, 0, 2.f, 1.f}, "OUT ON", "OUT OFF", "", "Bypass Output Section" },
  { kBypass, cBypass, "Bypass", "Byp", 0, 0, 1, 0.1, 0.5, .5, "", "Global", IParam::EParamType::kTypeBool, IParam::EFlags::kFlagsNone, IParam::EParamUnit::kUnitCustom, Button, SR::Graphics::Layout::layout.GetColor(SR::Graphics::Layout::SRCustomColors::ECustomColors::kPluginBg), {RectFooter, 20, 0, 2.f, 1.f}, "ON", "OFF", "", "Bypass Plugin" }
  // { "NAME", "SNAME" DEF, MIN, MAX, STEP, CENTER, CTRPNT, "LABEL",GROUP , TYPE, KNOB, X, Y, "LBLMIN", "LBLMAX", "LBLCTR", "TOOLTIP"},
};

// Used filters
enum EFilters {
  kOpHp = 0,
  kOpLp,
  kHp1,
  kHp2,
  kHp3,
  kHp4,
  kHp5,
  kHp6,
  kHp7,
  kHp8,
  kHp9,
  kHp10,
  kLp,
  kLf,
  kLmf,
  kHmf,
  kHf,
  kPanHp,
  kPanLp,
  kDC,
  kNumFilters
};


#endif
