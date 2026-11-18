// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 1

// Broadcast<IBaseDelegateInstance<void___cdecl(TSharedPtr<SDockTab,1>,TSharedPtr<SDockTab,1>),FDefaultDelegateUserPolicy>,TSharedPtr<SDockTab,1>,TSharedPtr<SDockTab,1>_> @ 1426ea120

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
Broadcast<IBaseDelegateInstance<void___cdecl(TSharedPtr<SDockTab,1>,TSharedPtr<SDockTab,1>),FDefaultDelegateUserPolicy>,TSharedPtr<SDockTab,1>,TSharedPtr<SDockTab,1>_>
          (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this,TSharedPtr<SDockTab,1> *param_1,
          TSharedPtr<SDockTab,1> *param_2)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  SDockTab *local_58;
  TReferenceControllerBase<1> *local_50;
  SDockTab *local_48;
  TReferenceControllerBase<1> *local_40;
  FDestructionSentinel local_38;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_38);
  this->InvocationListLockCount = this->InvocationListLockCount + 1;
  bVar4 = false;
  uVar9 = (this->InvocationList).ArrayNum - 1;
  if ((int)uVar9 < 0) {
    this->InvocationListLockCount = this->InvocationListLockCount + -1;
  }
  else {
    lVar8 = (longlong)(int)uVar9 << 4;
    do {
      uVar7 = 0;
      if ((int)uVar9 < (this->InvocationList).ArrayNum) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if (uVar7 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pFVar1 = (this->InvocationList).AllocatorInstance.Data;
      if ((*(int *)(pFVar1 + lVar8 + 8) == 0) ||
         (plVar2 = *(longlong **)(pFVar1 + lVar8), plVar2 == (longlong *)0x0)) {
LAB_1426ea226:
        bVar4 = true;
      }
      else {
        pcVar3 = *(code **)(*plVar2 + 0x68);
        local_58 = param_2->Object;
        local_50 = (param_2->SharedReferenceCount).ReferenceController;
        if (local_50 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_50->SharedReferenceCount = (atomic<int>)((int)local_50->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_48 = param_1->Object;
        local_40 = (param_1->SharedReferenceCount).ReferenceController;
        if (local_40 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_40->SharedReferenceCount = (atomic<int>)((int)local_40->SharedReferenceCount + 1);
          UNLOCK();
        }
        cVar6 = (*pcVar3)(plVar2,&local_48,&local_58);
        if (cVar6 == '\0') goto LAB_1426ea226;
      }
      lVar8 = lVar8 + -0x10;
      uVar9 = uVar9 - 1;
    } while (-1 < (int)uVar9);
    this->InvocationListLockCount = this->InvocationListLockCount + -1;
    if (bVar4) {
      CompactInvocationList(this,false);
    }
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

