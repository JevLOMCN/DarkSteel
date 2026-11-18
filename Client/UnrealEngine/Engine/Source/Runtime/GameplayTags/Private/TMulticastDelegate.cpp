// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayTags
// Functions: 1

// Broadcast @ 146ad26a0

void __thiscall
TMulticastDelegate<void___cdecl(FGameplayTag_const_&),FDefaultTSDelegateUserPolicy>::Broadcast
          (TMulticastDelegate<void___cdecl(FGameplayTag_const_&),FDefaultTSDelegateUserPolicy> *this
          ,FGameplayTag *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  
  if ((this == (TMulticastDelegate<void___cdecl(FGameplayTag_const_&),FDefaultTSDelegateUserPolicy>
                *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  *(int *)&this->field_0x3c = *(int *)&this->field_0x3c + 1;
  bVar3 = false;
  uVar8 = *(int *)&this->field_0x30 - 1;
  if (-1 < (int)uVar8) {
    lVar7 = (longlong)(int)uVar8 << 4;
    bVar3 = false;
    do {
      uVar6 = 0;
      if ((int)uVar8 < *(int *)&this->field_0x30) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (((*(int *)(*(longlong *)&this->field_0x28 + 8 + lVar7) == 0) ||
          (plVar1 = *(longlong **)(*(longlong *)&this->field_0x28 + lVar7),
          plVar1 == (longlong *)0x0)) || (cVar5 = (**(code **)(*plVar1 + 0x68))(), cVar5 == '\0')) {
        bVar3 = true;
      }
      lVar7 = lVar7 + -0x10;
      uVar8 = uVar8 - 1;
    } while (-1 < (int)uVar8);
  }
  *(int *)&this->field_0x3c = *(int *)&this->field_0x3c + -1;
  if (bVar3) {
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)this,false);
  }
                    /* WARNING: Could not recover jumptable at 0x000146ad27c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
  return;
}

