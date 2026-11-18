// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 1

// IsBound @ 142b9c5d0

bool __thiscall
TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::IsBound
          (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  if (this == (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  iVar1 = (this->InvocationList).ArrayNum;
  pFVar5 = (this->InvocationList).AllocatorInstance.Data;
  pFVar6 = pFVar5 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->InvocationList).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar6) break;
    if ((*(int *)(pFVar5 + 8) != 0) && (*(longlong *)pFVar5 != 0)) {
      bVar3 = true;
LAB_142b9c65c:
      if (this != (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)0x0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)this);
      }
      return bVar3;
    }
    pFVar5 = pFVar5 + 0x10;
  }
  bVar3 = false;
  goto LAB_142b9c65c;
}

