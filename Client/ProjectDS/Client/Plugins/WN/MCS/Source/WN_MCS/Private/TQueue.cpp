// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_MCS
// Functions: 3

// TQueue<FWN_MCS_MeshUpdateParams,1> @ 14accb350

TQueue<FWN_MCS_MeshUpdateParams,1> * __thiscall
TQueue<FWN_MCS_MeshUpdateParams,1>::TQueue<FWN_MCS_MeshUpdateParams,1>
          (TQueue<FWN_MCS_MeshUpdateParams,1> *this)

{
  TNode *pTVar1;
  
  pTVar1 = ::operator_new(0x30);
  if (pTVar1 != (TNode *)0x0) {
    pTVar1->NextNode = (TNode *)0x0;
    *(undefined8 *)&pTVar1->Item = 0;
    *(undefined8 *)&(pTVar1->Item).Callback = 0;
    *(undefined8 *)&(pTVar1->Item).Callback.field_0x8 = 0;
    *(undefined8 *)&(pTVar1->Item).Callback.field_0x10 = 0;
    *(undefined8 *)&(pTVar1->Item).InPolicy = 0;
    pTVar1->NextNode = (TNode *)0x0;
    (pTVar1->Item).ID = 0xffffffff;
    *(undefined8 *)&(pTVar1->Item).Callback = 0;
    *(undefined8 *)&(pTVar1->Item).Callback.field_0x8 = 0;
    *(undefined4 *)&(pTVar1->Item).Callback.field_0x10 = 0;
    (pTVar1->Item).InPolicy = Async_Med;
    this->Tail = pTVar1;
    this->Head = pTVar1;
    return this;
  }
  this->Tail = (TNode *)0x0;
  this->Head = (TNode *)0x0;
  return this;
}

// ~TQueue<FWN_MCS_MeshUpdateParams,1> @ 14accb5c0

void __thiscall
TQueue<FWN_MCS_MeshUpdateParams,1>::~TQueue<FWN_MCS_MeshUpdateParams,1>
          (TQueue<FWN_MCS_MeshUpdateParams,1> *this)

{
  TNode *pTVar1;
  void *pvVar2;
  
  pTVar1 = this->Tail;
  while (pTVar1 != (TNode *)0x0) {
    this->Tail = pTVar1->NextNode;
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pTVar1->Item).Callback);
    pvVar2 = *(void **)&(pTVar1->Item).Callback.field_0x8;
    if (pvVar2 != (void *)0x0) {
      FMemory::Free(pvVar2);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)&(pTVar1->Item).Callback);
    ::operator_delete(pTVar1,0x30);
    pTVar1 = this->Tail;
  }
  return;
}

// Empty @ 14accc430

void __thiscall TQueue<FWN_MCS_MeshUpdateParams,1>::Empty(TQueue<FWN_MCS_MeshUpdateParams,1> *this)

{
  TNode *pTVar1;
  TNode *pTVar2;
  void *pvVar3;
  FDestructionSentinel local_48;
  undefined8 local_30;
  undefined1 auStack_28 [8];
  ForAnyElementType local_20;
  ulonglong uStack_18;
  undefined8 local_10;
  
  while (pTVar1 = this->Tail->NextNode, pTVar1 != (TNode *)0x0) {
    pTVar2 = this->Tail;
    this->Tail = pTVar1;
    local_30 = 0xffffffff;
    auStack_28 = (undefined1  [8])0x0;
    local_20.Data = (FScriptContainerElement *)0x0;
    uStack_18 = 0;
    local_10 = 1;
    (pTVar1->Item).ID = 0xffffffff;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pTVar1->Item).Callback,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_28);
    (pTVar1->Item).InPolicy = (EWN_MCS_MeshUpdatePolicy)local_10;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_28,
               (FWriteAccessScope *)&local_48);
    if (((int)uStack_18 != 0) && (local_20.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_20.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_20,0,0,0x10);
      uStack_18 = uStack_18 & 0xffffffff00000000;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    if (local_20.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_20.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)auStack_28);
    if (pTVar2 != (TNode *)0x0) {
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pTVar2->Item).Callback);
      pvVar3 = *(void **)&(pTVar2->Item).Callback.field_0x8;
      if (pvVar3 != (void *)0x0) {
        FMemory::Free(pvVar3);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)&(pTVar2->Item).Callback);
      ::operator_delete(pTVar2,0x30);
    }
  }
  return;
}

