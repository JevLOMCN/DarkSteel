// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 1

// IsBoundToObject @ 145fc5050

bool __thiscall
TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBoundToObject
          (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this,void *param_1)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  FReadAccessScope local_38;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,&local_38);
  iVar1 = (this->InvocationList).ArrayNum;
  pFVar5 = (this->InvocationList).AllocatorInstance.Data;
  pFVar6 = pFVar5 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->InvocationList).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar6) break;
    if ((*(int *)(pFVar5 + 8) != 0) && (plVar2 = *(longlong **)pFVar5, plVar2 != (longlong *)0x0)) {
      cVar3 = (**(code **)(*plVar2 + 0x28))(plVar2,param_1);
      if (cVar3 != '\0') {
        bVar4 = true;
LAB_145fc50bf:
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_38);
        return bVar4;
      }
    }
    pFVar5 = pFVar5 + 0x10;
  }
  bVar4 = false;
  goto LAB_145fc50bf;
}

