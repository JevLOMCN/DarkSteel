// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CameraCalibrationCore
// Functions: 1

// operator= @ 14d6ad510

FDerivedDistortionDataJobArgs * __thiscall
FDerivedDistortionDataJobArgs::operator=
          (FDerivedDistortionDataJobArgs *this,FDerivedDistortionDataJobArgs *param_1)

{
  ECalibratedMapChannels EVar1;
  
  this->Focus = param_1->Focus;
  this->Zoom = param_1->Zoom;
  EVar1 = (param_1->Format).UndistortionChannels;
  (this->Format).PixelOrigin = (param_1->Format).PixelOrigin;
  (this->Format).UndistortionChannels = EVar1;
  (this->Format).DistortionChannels = (param_1->Format).DistortionChannels;
  (this->SourceDistortionMap).WeakPtr = (param_1->SourceDistortionMap).WeakPtr;
  (this->OutputUndistortionDisplacementMap).WeakPtr =
       (param_1->OutputUndistortionDisplacementMap).WeakPtr;
  (this->OutputDistortionDisplacementMap).WeakPtr =
       (param_1->OutputDistortionDisplacementMap).WeakPtr;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->JobCompletedCallback,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->JobCompletedCallback);
  return this;
}

