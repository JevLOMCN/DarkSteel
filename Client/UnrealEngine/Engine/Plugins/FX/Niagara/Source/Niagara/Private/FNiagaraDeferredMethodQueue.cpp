// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// ExecuteAndClear @ 149443a50

void __thiscall FNiagaraDeferredMethodQueue::ExecuteAndClear(FNiagaraDeferredMethodQueue *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *pTVar4;
  FScriptContainerElement *this_00;
  undefined1 local_res8 [8];
  FReadAccessScope local_28;
  
  iVar3 = (this->Queue).ArrayNum;
  this_00 = (this->Queue).AllocatorInstance.Data;
  pFVar2 = this_00 + (longlong)iVar3 * 0x18;
  while( true ) {
    if ((this->Queue).ArrayNum != iVar3) {
      `TCheckedPointerIterator<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (this_00 == pFVar2) break;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_28);
    if ((*(int *)&this_00[0x10].field_0x0 != 0) &&
       (*(longlong **)&this_00[8].field_0x0 != (longlong *)0x0)) {
      (**(code **)(**(longlong **)&this_00[8].field_0x0 + 0x68))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    this_00 = this_00 + 0x18;
  }
  piVar1 = &(this->Queue).ArrayMax;
  pTVar4 = (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
           (this->Queue).AllocatorInstance.Data;
  iVar3 = (this->Queue).ArrayNum;
  if ((this->Queue).ArrayMax < 0) {
    DestructItems<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,int>(pTVar4,iVar3);
    (this->Queue).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)this,0,piVar1);
    }
  }
  else {
    DestructItems<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,int>(pTVar4,iVar3);
    (this->Queue).ArrayNum = 0;
  }
  return;
}

