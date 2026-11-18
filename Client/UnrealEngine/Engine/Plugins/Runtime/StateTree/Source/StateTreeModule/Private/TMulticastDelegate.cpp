// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 3

// Broadcast @ 14d4b7140

void __thiscall
TMulticastDelegate<void___cdecl(FStateTreeExecutionContext_const_&,UE::StateTree::Debug::FNodeDelegateArgs),FDefaultTSDelegateUserPolicy>
::Broadcast(TMulticastDelegate<void___cdecl(FStateTreeExecutionContext_const_&,UE::StateTree::Debug::FNodeDelegateArgs),FDefaultTSDelegateUserPolicy>
            *this,FStateTreeExecutionContext *param_1,FNodeDelegateArgs *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  UStateTree *pUVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  bool bVar10;
  char cVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  UStateTree *local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pUVar3 = (param_2->Node).StateTree.Val;
  uVar4 = *(undefined8 *)&(param_2->Node).Index;
  uVar5 = (param_2->NodeId).A;
  uVar6 = (param_2->NodeId).B;
  uVar7 = (param_2->NodeId).C;
  uVar8 = (param_2->NodeId).D;
  if ((this == (TMulticastDelegate<void___cdecl(FStateTreeExecutionContext_const_&,UE::StateTree::Debug::FNodeDelegateArgs),FDefaultTSDelegateUserPolicy>
                *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar9)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  *(int *)&this->field_0x3c = *(int *)&this->field_0x3c + 1;
  bVar9 = false;
  uVar13 = *(int *)&this->field_0x30 - 1;
  if (-1 < (int)uVar13) {
    lVar14 = (longlong)(int)uVar13 << 4;
    bVar9 = false;
    do {
      uVar12 = 0;
      if ((int)uVar13 < *(int *)&this->field_0x30) {
        uVar12 = ~uVar13 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((*(int *)(lVar14 + 8 + *(longlong *)&this->field_0x28) == 0) ||
         (plVar1 = *(longlong **)(lVar14 + *(longlong *)&this->field_0x28),
         plVar1 == (longlong *)0x0)) {
LAB_14d4b7250:
        bVar9 = true;
      }
      else {
        local_28 = uVar5;
        uStack_24 = uVar6;
        uStack_20 = uVar7;
        uStack_1c = uVar8;
        local_38 = pUVar3;
        uStack_30 = uVar4;
        cVar11 = (**(code **)(*plVar1 + 0x68))(plVar1,param_1,&local_38);
        if (cVar11 == '\0') goto LAB_14d4b7250;
      }
      lVar14 = lVar14 + -0x10;
      uVar13 = uVar13 - 1;
    } while (-1 < (int)uVar13);
  }
  *(int *)&this->field_0x3c = *(int *)&this->field_0x3c + -1;
  if (bVar9) {
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)this,false);
  }
                    /* WARNING: Could not recover jumptable at 0x00014d4b72a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
  return;
}

// Broadcast @ 14d4b72b0

void __thiscall
TMulticastDelegate<void___cdecl(FStateTreeExecutionContext_const_&,enum_EStateTreeUpdatePhase,FStateTreeStateHandle),FDefaultTSDelegateUserPolicy>
::Broadcast(void *this,FStateTreeExecutionContext *param_1,EStateTreeUpdatePhase param_2,
           FStateTreeStateHandle param_3)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  
  if ((this == (void *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  EnterCriticalSection(this);
  *(int *)((longlong)this + 0x3c) = *(int *)((longlong)this + 0x3c) + 1;
  bVar3 = false;
  uVar8 = *(int *)((longlong)this + 0x30) - 1;
  if (-1 < (int)uVar8) {
    lVar7 = (longlong)(int)uVar8 << 4;
    bVar3 = false;
    do {
      uVar6 = 0;
      if ((int)uVar8 < *(int *)((longlong)this + 0x30)) {
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
      if (((*(int *)(*(longlong *)((longlong)this + 0x28) + 8 + lVar7) == 0) ||
          (plVar1 = *(longlong **)(*(longlong *)((longlong)this + 0x28) + lVar7),
          plVar1 == (longlong *)0x0)) ||
         (cVar5 = (**(code **)(*plVar1 + 0x68))(plVar1,param_1,param_2,param_3.Index), cVar5 == '\0'
         )) {
        bVar3 = true;
      }
      lVar7 = lVar7 + -0x10;
      uVar8 = uVar8 - 1;
    } while (-1 < (int)uVar8);
  }
  *(int *)((longlong)this + 0x3c) = *(int *)((longlong)this + 0x3c) + -1;
  if (bVar3) {
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::CompactInvocationList(this,false);
  }
                    /* WARNING: Could not recover jumptable at 0x00014d4b73fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(this);
  return;
}

// Broadcast @ 14d52d9b0

void __thiscall
TMulticastDelegate<void___cdecl(enum_EStateTreeTraceStatus),FDefaultDelegateUserPolicy>::Broadcast
          (void *this,EStateTreeTraceStatus param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  FDestructionSentinel local_38;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (this,(FWriteAccessScope *)&local_38);
  *(int *)((longlong)this + 0x1c) = *(int *)((longlong)this + 0x1c) + 1;
  bVar3 = false;
  uVar7 = *(int *)((longlong)this + 0x10) - 1;
  if (-1 < (int)uVar7) {
    lVar8 = (longlong)(int)uVar7 << 4;
    bVar3 = false;
    do {
      uVar6 = 0;
      if ((int)uVar7 < *(int *)((longlong)this + 0x10)) {
        uVar6 = ~uVar7 >> 0x1f;
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
      if (((*(int *)(*(longlong *)((longlong)this + 8) + 8 + lVar8) == 0) ||
          (plVar1 = *(longlong **)(*(longlong *)((longlong)this + 8) + lVar8),
          plVar1 == (longlong *)0x0)) || (cVar5 = (**(code **)(*plVar1 + 0x68))(), cVar5 == '\0')) {
        bVar3 = true;
      }
      lVar8 = lVar8 + -0x10;
      uVar7 = uVar7 - 1;
    } while (-1 < (int)uVar7);
  }
  *(int *)((longlong)this + 0x1c) = *(int *)((longlong)this + 0x1c) + -1;
  if (bVar3) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList(this,false);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return;
}

