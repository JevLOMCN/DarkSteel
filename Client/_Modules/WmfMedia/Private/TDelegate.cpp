// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WmfMedia
// Functions: 2

// ~TDelegate<void___cdecl(unsigned_char_const_*,unsigned_int,FTimespan,FTimespan),FDefaultDelegateUserPolicy> @ 14ea96690

void __thiscall
TDelegate<void___cdecl(unsigned_char_const_*,unsigned_int,FTimespan,FTimespan),FDefaultDelegateUserPolicy>
::
~TDelegate<void___cdecl(unsigned_char_const_*,unsigned_int,FTimespan,FTimespan),FDefaultDelegateUserPolicy>
          (TDelegate<void___cdecl(unsigned_char_const_*,unsigned_int,FTimespan,FTimespan),FDefaultDelegateUserPolicy>
           *this)

{
  FDestructionSentinel FStack_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&FStack_28);
  if ((*(int *)&this->field_0x10 != 0) && (*(undefined8 **)&this->field_0x8 != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)&this->field_0x8)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->field_0x8,0,0,0x10);
    *(undefined4 *)&this->field_0x10 = 0;
  }
  if (FStack_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_28.Accessor,&FStack_28);
  }
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector((FMRSWRecursiveAccessDetector *)this);
  return;
}

// ~TDelegate<void___cdecl(enum_EWmfMediaSamplerClockEvent),FDefaultDelegateUserPolicy> @ 14ea966a0

void __thiscall
TDelegate<void___cdecl(enum_EWmfMediaSamplerClockEvent),FDefaultDelegateUserPolicy>::
~TDelegate<void___cdecl(enum_EWmfMediaSamplerClockEvent),FDefaultDelegateUserPolicy>(void *this)

{
  FDestructionSentinel FStack_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (this,(FWriteAccessScope *)&FStack_28);
  if ((*(int *)((longlong)this + 0x10) != 0) &&
     (*(undefined8 **)((longlong)this + 8) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)((longlong)this + 8))();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)((longlong)this + 8),0,0,0x10);
    *(undefined4 *)((longlong)this + 0x10) = 0;
  }
  if (FStack_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_28.Accessor,&FStack_28);
  }
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this);
  return;
}

