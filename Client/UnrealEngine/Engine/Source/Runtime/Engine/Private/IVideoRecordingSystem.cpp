// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// ~IVideoRecordingSystem @ 14834dd90

void __thiscall IVideoRecordingSystem::~IVideoRecordingSystem(IVideoRecordingSystem *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7IVideoRecordingSystem__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnVideoRecordingFinalized).field_0x8,
             *(int *)&(this->OnVideoRecordingFinalized).field_0x10);
  pvVar1 = *(void **)&(this->OnVideoRecordingFinalized).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnVideoRecordingFinalized);
  return;
}

