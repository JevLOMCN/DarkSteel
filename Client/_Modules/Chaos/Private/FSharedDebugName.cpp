// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 3

// FSharedDebugName @ 14388bbe0

FSharedDebugName * __thiscall
Chaos::FSharedDebugName::FSharedDebugName(FSharedDebugName *this,FString *param_1)

{
  FString *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  FString *pFVar3;
  
  pFVar1 = ::operator_new(0x10);
  pFVar3 = (FString *)0x0;
  if (pFVar1 != (FString *)0x0) {
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->Data).AllocatorInstance.Data = (param_1->Data).AllocatorInstance.Data;
    (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->Data).ArrayNum = (param_1->Data).ArrayNum;
    (pFVar1->Data).ArrayMax = (param_1->Data).ArrayMax;
    (param_1->Data).ArrayNum = 0;
    (param_1->Data).ArrayMax = 0;
    pFVar3 = pFVar1;
  }
  (this->Name).Object = pFVar3;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
    (this->Name).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    return this;
  }
  pTVar2->SharedReferenceCount = (atomic<int>)0x1;
  pTVar2->_padding_ =
       (longlong)
       &
       ___7__TReferenceControllerWithDeleter_VFString__U__DefaultDeleter_VFString___SharedPointerInternals___00_SharedPointerInternals__6B_
  ;
  pTVar2->WeakReferenceCount = (atomic<int>)0x1;
  pTVar2[1]._padding_ = (longlong)pFVar3;
  (this->Name).SharedReferenceCount.ReferenceController = pTVar2;
  return this;
}

// FSharedDebugName @ 14388bca0

FSharedDebugName * __thiscall
Chaos::FSharedDebugName::FSharedDebugName(FSharedDebugName *this,FString *param_1)

{
  FString *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  pFVar1 = ::operator_new(0x10);
  if (pFVar1 == (FString *)0x0) {
    pFVar1 = (FString *)0x0;
  }
  else {
    pFVar1 = ::FString::FString(pFVar1,param_1);
  }
  (this->Name).Object = pFVar1;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFString__U__DefaultDeleter_VFString___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pFVar1;
    (this->Name).SharedReferenceCount.ReferenceController = pTVar2;
    return this;
  }
  (this->Name).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// Value @ 1438dc220

FString * __thiscall Chaos::FSharedDebugName::Value(FSharedDebugName *this)

{
  FString *pFVar1;
  FString *pFVar2;
  
  pFVar1 = (this->Name).Object;
  pFVar2 = &DefaultName;
  if (pFVar1 != (FString *)0x0) {
    pFVar2 = pFVar1;
  }
  return pFVar2;
}

