// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 1

// Broadcast<IBaseDelegateInstance<void___cdecl(unsigned___int64,TSharedPtr<Metasound::FMetasoundGenerator,1>),FDefaultTSDelegateUserPolicy>,unsigned___int64,TSharedPtr<Metasound::FMetasoundGenerator,1>_> @ 14b3098c0

void __thiscall
TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::
Broadcast<IBaseDelegateInstance<void___cdecl(unsigned___int64,TSharedPtr<Metasound::FMetasoundGenerator,1>),FDefaultTSDelegateUserPolicy>,unsigned___int64,TSharedPtr<Metasound::FMetasoundGenerator,1>_>
          (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *this,ulong64 param_1,
          TSharedPtr<Metasound::FMetasoundGenerator,1> *param_2)

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
  FMetasoundGenerator *local_28;
  TReferenceControllerBase<1> *local_20;
  
  if (this == (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
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
LAB_14b3099ca:
        bVar4 = true;
      }
      else {
        pcVar3 = *(code **)(*plVar2 + 0x68);
        local_28 = param_2->Object;
        local_20 = (param_2->SharedReferenceCount).ReferenceController;
        if (local_20 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_20->SharedReferenceCount = (atomic<int>)((int)local_20->SharedReferenceCount + 1);
          UNLOCK();
        }
        cVar6 = (*pcVar3)(plVar2,param_1,&local_28);
        if (cVar6 == '\0') goto LAB_14b3099ca;
      }
      lVar8 = lVar8 + -0x10;
      uVar9 = uVar9 - 1;
    } while (-1 < (int)uVar9);
    this->InvocationListLockCount = this->InvocationListLockCount + -1;
    if (bVar4) {
      CompactInvocationList(this,false);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

