// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// Get @ 1486b8d00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FSceneViewport ** __thiscall TAttribute<FSceneViewport_*>::Get(TAttribute<FSceneViewport_*> *this)

{
  char cVar1;
  FSceneViewport *pFVar2;
  longlong *plVar3;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_28);
  if ((*(int *)&(this->Getter).field_0x10 != 0) &&
     (plVar3 = *(longlong **)&(this->Getter).field_0x8, plVar3 != (longlong *)0x0)) {
    cVar1 = (**(code **)(*plVar3 + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_28);
      if (*(int *)&(this->Getter).field_0x10 == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)&(this->Getter).field_0x8;
      }
      pFVar2 = (FSceneViewport *)(**(code **)(*plVar3 + 0x60))();
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      this->Value = pFVar2;
      return &this->Value;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return &this->Value;
}

