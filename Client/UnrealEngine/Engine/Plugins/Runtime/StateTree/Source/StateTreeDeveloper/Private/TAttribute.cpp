// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeDeveloper
// Functions: 1

// Get @ 14d72d9f0

FStateTreeTraceActiveStates * __thiscall
TAttribute<FStateTreeTraceActiveStates>::Get(TAttribute<FStateTreeTraceActiveStates> *this)

{
  FScriptContainerElement *pFVar1;
  char cVar2;
  longlong *plVar3;
  undefined1 local_38 [48];
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FReadAccessScope *)(local_38 + 0x10));
  if (((*(int *)&(this->Getter).field_0x10 == 0) ||
      (plVar3 = *(longlong **)&(this->Getter).field_0x8, plVar3 == (longlong *)0x0)) ||
     (cVar2 = (**(code **)(*plVar3 + 0x38))(), cVar2 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_38 + 0x10));
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_38 + 0x10));
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
               (FReadAccessScope *)(local_38 + 0x10));
    plVar3 = (longlong *)0x0;
    if (*(int *)&(this->Getter).field_0x10 != 0) {
      plVar3 = *(longlong **)&(this->Getter).field_0x8;
    }
    (**(code **)(*plVar3 + 0x60))(plVar3,local_38);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_38 + 0x10));
    if (this != (TAttribute<FStateTreeTraceActiveStates> *)local_38) {
      DestructItems<FStateTreeTraceActiveStates::FAssetActiveStates,int>
                ((FAssetActiveStates *)(this->Value).PerAssetStates.AllocatorInstance.Data,
                 (this->Value).PerAssetStates.ArrayNum);
      pFVar1 = (this->Value).PerAssetStates.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (this->Value).PerAssetStates.AllocatorInstance.Data =
           (FScriptContainerElement *)local_38._0_8_;
      (this->Value).PerAssetStates.ArrayNum = local_38._8_4_;
      (this->Value).PerAssetStates.ArrayMax = local_38._12_4_;
      local_38._12_4_ = 0;
      local_38._0_8_ = (FAssetActiveStates *)0x0;
      local_38._8_4_ = 0;
    }
    DestructItems<FStateTreeTraceActiveStates::FAssetActiveStates,int>
              ((FAssetActiveStates *)local_38._0_8_,local_38._8_4_);
    if ((FAssetActiveStates *)local_38._0_8_ != (FAssetActiveStates *)0x0) {
      FMemory::Free((void *)local_38._0_8_);
      return &this->Value;
    }
  }
  return &this->Value;
}

