// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// TMulticastScriptDelegate<FNotThreadSafeDelegateMode> @ 149385be0

TMulticastScriptDelegate<FNotThreadSafeDelegateMode> * __thiscall
TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::
TMulticastScriptDelegate<FNotThreadSafeDelegateMode>
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *this,
          TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1)

{
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> *pTVar3;
  FScriptContainerElement *pFVar4;
  ForAnyElementType local_38;
  undefined8 local_30;
  FReadAccessScope local_28;
  
  pTVar1 = &this->InvocationList;
  this->_padding_ = 0;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->InvocationList).ArrayNum = 0;
  (this->InvocationList).ArrayMax = 0;
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,&local_28);
  if ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_> *)
      &local_38 != &param_1->InvocationList) {
    iVar2 = (param_1->InvocationList).ArrayNum;
    pTVar3 = (TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> *)
             (param_1->InvocationList).AllocatorInstance.Data;
    local_30 = CONCAT44(local_30._4_4_,iVar2);
    if ((iVar2 != 0) || (local_30._4_4_ != 0)) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,iVar2,local_30._4_4_,&local_38,iVar2,(int *)((longlong)&local_30 + 4));
      ConstructItems<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,int>
                (local_38.Data,pTVar3,iVar2);
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  if (pTVar1 != (TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
                 *)&local_38) {
    pFVar4 = (pTVar1->AllocatorInstance).Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pTVar1->AllocatorInstance).Data = local_38.Data;
    (this->InvocationList).ArrayNum = (int)local_30;
    (this->InvocationList).ArrayMax = local_30._4_4_;
    local_30 = 0;
    local_38.Data = (FScriptContainerElement *)0x0;
  }
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  return this;
}

