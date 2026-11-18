// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImgMedia
// Functions: 1

// ~IImgMediaModule @ 14ea3b570

void __thiscall IImgMediaModule::~IImgMediaModule(IImgMediaModule *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7IImgMediaModule__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnImgMediaPlayerCreated).field_0x8,
             *(int *)&(this->OnImgMediaPlayerCreated).field_0x10);
  pvVar1 = *(void **)&(this->OnImgMediaPlayerCreated).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnImgMediaPlayerCreated);
  this->_padding_ = (longlong)IModuleInterface::vftable;
  return;
}

