// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionEngine
// Functions: 2

// ~IDataflowContentOwner @ 1463a5990

void __thiscall IDataflowContentOwner::~IDataflowContentOwner(IDataflowContentOwner *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7IDataflowContentOwner__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnContentOwnerChanged).field_0x8,
             *(int *)&(this->OnContentOwnerChanged).field_0x10);
  pvVar1 = *(void **)&(this->OnContentOwnerChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnContentOwnerChanged);
  return;
}

// _getUObject @ 1463d14c0

UObject * __thiscall IDataflowContentOwner::_getUObject(IDataflowContentOwner *this)

{
  return (UObject *)0x0;
}

