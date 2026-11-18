// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CameraCalibrationCore
// Functions: 1

// DestroyObject @ 14d6c0610

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FDerivedDistortionDataJob,1>::DestroyObject
          (TIntrusiveReferenceController<FDerivedDistortionDataJob,1> *this)

{
  void *pvVar1;
  longlong lVar2;
  
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x60);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  lVar2 = *(longlong *)((this->ObjectStorage).Pad + 0x48);
  if (lVar2 != 0) {
    (**(code **)(lVar2 + -0x10))(lVar2 + -0x10);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((this->ObjectStorage).Pad + 0x30));
  return;
}

