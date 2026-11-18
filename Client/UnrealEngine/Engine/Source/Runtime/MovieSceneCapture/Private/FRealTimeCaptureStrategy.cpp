// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneCapture
// Functions: 6

// FRealTimeCaptureStrategy @ 146bd7fb0

FRealTimeCaptureStrategy * __thiscall
FRealTimeCaptureStrategy::FRealTimeCaptureStrategy
          (FRealTimeCaptureStrategy *this,FFrameRate param_1)

{
  this->_padding_ = (longlong)&___7FRealTimeCaptureStrategy__6B_;
  this->NextPresentTimeS = 0.0;
  this->FrameLength = (double)param_1.Denominator / (double)param_1.Numerator;
  return this;
}

// GetDroppedFrames @ 146be0000

int __thiscall
FRealTimeCaptureStrategy::GetDroppedFrames
          (FRealTimeCaptureStrategy *this,double param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)((longlong)ROUND((param_1 + param_1) / this->FrameLength - __real_3fe0000000000000)
                >> 1);
  iVar1 = 0;
  if (param_2 < uVar2) {
    iVar1 = uVar2 - param_2;
  }
  return iVar1;
}

// OnInitialize @ 146be3d20

void __thiscall FRealTimeCaptureStrategy::OnInitialize(FRealTimeCaptureStrategy *this)

{
  return;
}

// OnStop @ 146be4b90

void __thiscall FRealTimeCaptureStrategy::OnStop(FRealTimeCaptureStrategy *this)

{
  return;
}

// ShouldPresent @ 146be8630

bool __thiscall
FRealTimeCaptureStrategy::ShouldPresent(FRealTimeCaptureStrategy *this,double param_1,uint param_2)

{
  return (double)param_2 * this->FrameLength <= param_1;
}

// ShouldSynchronizeFrames @ 146be8650

bool __thiscall FRealTimeCaptureStrategy::ShouldSynchronizeFrames(FRealTimeCaptureStrategy *this)

{
  return false;
}

