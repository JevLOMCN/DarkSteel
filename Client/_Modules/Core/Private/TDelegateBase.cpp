// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 5

// ~TDelegateBase<FNotThreadSafeDelegateMode> @ 141588230

void __thiscall
TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
          (TDelegateBase<FNotThreadSafeDelegateMode> *this)

{
  FDestructionSentinel local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_28);
  if ((*(int *)&this->field_0x10 != 0) && (*(undefined8 **)&this->field_0x8 != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)&this->field_0x8)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->field_0x8,0,0,0x10);
    *(undefined4 *)&this->field_0x10 = 0;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector((FMRSWRecursiveAccessDetector *)this);
  return;
}

// IsBound @ 141649c90

bool __thiscall
TDelegateBase<FNotThreadSafeDelegateMode>::IsBound(TDelegateBase<FNotThreadSafeDelegateMode> *this)

{
  char cVar1;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,&local_28);
  if ((*(int *)&this->field_0x10 != 0) && (*(longlong **)&this->field_0x8 != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)&this->field_0x8 + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      return true;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return false;
}

// TDelegateBase<FNotThreadSafeDelegateMode> @ 1417332a0

TDelegateBase<FNotThreadSafeDelegateMode> * __thiscall
TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
          (TDelegateBase<FNotThreadSafeDelegateMode> *this,
          TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  FDestructionSentinel local_28;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined4 *)&this->field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
  }
  *(undefined8 *)&this->field_0x8 = *(undefined8 *)&param_1->field_0x8;
  *(undefined8 *)&param_1->field_0x8 = 0;
  *(undefined4 *)&this->field_0x10 = *(undefined4 *)&param_1->field_0x10;
  *(undefined4 *)&param_1->field_0x10 = 0;
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return this;
}

// operator= @ 1417a7ba0

TDelegateBase<FNotThreadSafeDelegateMode> * __thiscall
TDelegateBase<FNotThreadSafeDelegateMode>::operator=
          (TDelegateBase<FNotThreadSafeDelegateMode> *this,
          TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  FDestructionSentinel local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  uVar2 = *(undefined8 *)&param_1->field_0x8;
  *(undefined8 *)&param_1->field_0x8 = 0;
  uVar1 = *(undefined4 *)&param_1->field_0x10;
  *(undefined4 *)&param_1->field_0x10 = 0;
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_28);
  if ((*(int *)&this->field_0x10 != 0) && (*(undefined8 **)&this->field_0x8 != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)&this->field_0x8)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->field_0x8,0,0,0x10);
    *(undefined4 *)&this->field_0x10 = 0;
  }
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
  }
  *(undefined8 *)&this->field_0x8 = uVar2;
  *(undefined4 *)&this->field_0x10 = uVar1;
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return this;
}

// Unbind @ 14180ac80

void __thiscall
TDelegateBase<FNotThreadSafeDelegateMode>::Unbind(TDelegateBase<FNotThreadSafeDelegateMode> *this)

{
  FDestructionSentinel local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_28);
  if ((*(int *)&this->field_0x10 != 0) && (*(undefined8 **)&this->field_0x8 != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)&this->field_0x8)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->field_0x8,0,0,0x10);
    *(undefined4 *)&this->field_0x10 = 0;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

