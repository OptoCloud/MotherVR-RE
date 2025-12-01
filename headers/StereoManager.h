struct __unaligned __declspec(align(2)) MotherVR::StereoManager
{
  void *vftable;
  MotherVR::Options *vrRuntimePtr;
  uint8_t _pad_008[740];
  int32_t setVRRuntime;
  int32_t mirrorView;
  uint8_t mirrorViewSym;
  uint8_t _pad_2F5[3];
  float pixelScale;
  uint8_t clipBlinding;
  uint8_t snapRotation;
  uint8_t _pad_2FE_2FF[2];
  int snapSegmentsRaw;
  uint8_t inputRelativeWalk;
  uint8_t inputStrafing;
  uint8_t toggleGrips;
  uint8_t toggleCrouch;
  uint8_t debug;
  uint8_t skipIntro;
};
