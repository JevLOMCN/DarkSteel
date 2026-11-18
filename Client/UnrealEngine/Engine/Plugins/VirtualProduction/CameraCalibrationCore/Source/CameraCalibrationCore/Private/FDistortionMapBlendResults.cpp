// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CameraCalibrationCore
// Functions: 1

// ~FDistortionMapBlendResults @ 14d6ac0a0

void __thiscall
LensInterpolationUtils::FDistortionMapBlendResults::~FDistortionMapBlendResults
          (FDistortionMapBlendResults *this)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  FLensDistortionState *pFVar3;
  
  if (((this->DistortedMaps).field0_0x0.TypedValue.ArrayMax != -1) &&
     (pFVar1 = (this->DistortedMaps).field0_0x0.TypedValue.AllocatorInstance.Data,
     pFVar1 != (FScriptContainerElement *)0x0)) {
    FMemory::Free(pFVar1);
  }
  if (((this->UndistortedMaps).field0_0x0.TypedValue.ArrayMax != -1) &&
     (pFVar1 = (this->UndistortedMaps).field0_0x0.TypedValue.AllocatorInstance.Data,
     pFVar1 != (FScriptContainerElement *)0x0)) {
    FMemory::Free(pFVar1);
  }
  if (((this->BlendedDistortionParams).bIsSet != false) &&
     (pFVar1 = (this->BlendedDistortionParams).TypedValue.Parameters.AllocatorInstance.Data,
     pFVar1 != (FScriptContainerElement *)0x0)) {
    FMemory::Free(pFVar1);
  }
  if ((this->BlendingParams).bIsSet != false) {
    pFVar3 = (FLensDistortionState *)&(this->BlendingParams).TypedValue.FxFyScale;
    lVar2 = 4;
    do {
      pFVar1 = pFVar3[-1].DistortionInfo.Parameters.AllocatorInstance.Data;
      pFVar3 = pFVar3 + -1;
      lVar2 = lVar2 + -1;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
    } while (lVar2 != 0);
  }
  return;
}

