// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 2

// ~IVirtualKeyboardEntry @ 1428c1020

void __thiscall IVirtualKeyboardEntry::~IVirtualKeyboardEntry(IVirtualKeyboardEntry *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7IVirtualKeyboardEntry__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnSelectionChanged);
  pvVar1 = *(void **)&(this->OnSelectionChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSelectionChanged);
  return;
}

// IsIntegratedKeyboardEnabled @ 142954480

bool __thiscall IVirtualKeyboardEntry::IsIntegratedKeyboardEnabled(IVirtualKeyboardEntry *this)

{
  return false;
}

