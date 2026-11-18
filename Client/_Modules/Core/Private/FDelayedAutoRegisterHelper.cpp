// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 3

// FDelayedAutoRegisterHelper @ 1418bad90

FDelayedAutoRegisterHelper * __thiscall
FDelayedAutoRegisterHelper::FDelayedAutoRegisterHelper
          (FDelayedAutoRegisterHelper *this,EDelayedRegisterRunPhase param_1,
          TFunction<void___cdecl(EDelayedRegisterRunPhase)> *param_2,bool param_3)

{
  int iVar1;
  code *pcVar2;
  TMulticastDelegate<void___cdecl(EDelayedRegisterRunPhase),FDefaultDelegateUserPolicy> *this_00;
  undefined8 uVar3;
  longlong *plVar4;
  ForElementType<FSetElementId> FVar5;
  EDelayedRegisterRunPhase local_28 [8];
  
  if ((param_1 < NumRunOncePhases) &&
     (GPhasesAlreadyRun.Elements._8_4_ != GPhasesAlreadyRun.Elements._52_4_)) {
    FVar5 = (ForElementType<FSetElementId>)0x154b7f728;
    if (GPhasesAlreadyRun.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FVar5 = GPhasesAlreadyRun.Hash.SecondaryData;
    }
    for (iVar1 = *(int *)((longlong)FVar5 +
                         ((ulonglong)(GPhasesAlreadyRun.HashSize - 1) & (ulonglong)param_1) * 4);
        iVar1 != -1; iVar1 = *(int *)(GPhasesAlreadyRun.Elements._0_8_ + 4 + (longlong)iVar1 * 0xc))
    {
      if (*(EDelayedRegisterRunPhase *)(GPhasesAlreadyRun.Elements._0_8_ + (longlong)iVar1 * 0xc) ==
          param_1) {
        local_28[0] = param_1;
        UE::Core::Private::Function::CheckCallable(*(void **)param_2);
        pcVar2 = *(code **)param_2;
        plVar4 = (longlong *)&param_2->field_0x10;
        if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
          plVar4 = *(longlong **)&param_2->field_0x28;
        }
        uVar3 = (**(code **)(*plVar4 + 8))();
        (*pcVar2)(uVar3,local_28);
        goto LAB_1418bae26;
      }
    }
  }
  this_00 = GetDelayedAutoRegisterDelegate(param_1);
  TMulticastDelegateRegistration<void___cdecl(enum_EDelayedRegisterRunPhase),FDefaultDelegateUserPolicy>
  ::AddLambda<TFunction<void___cdecl(enum_EDelayedRegisterRunPhase)>_&>
            (this_00,(TFunction<void___cdecl(EDelayedRegisterRunPhase)> *)&stack0xffffffffffffffe0);
LAB_1418bae26:
  if (*(longlong *)param_2 != 0) {
    plVar4 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar4 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  return this;
}

// FDelayedAutoRegisterHelper @ 1418baea0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FDelayedAutoRegisterHelper * __thiscall
FDelayedAutoRegisterHelper::FDelayedAutoRegisterHelper
          (FDelayedAutoRegisterHelper *this,EDelayedRegisterRunPhase param_1,
          TFunction<void___cdecl(void)> *param_2,bool param_3)

{
  int iVar1;
  code *pcVar2;
  TMulticastDelegate<void___cdecl(EDelayedRegisterRunPhase),FDefaultDelegateUserPolicy> *this_00;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  ForElementType<FSetElementId> FVar6;
  undefined1 auStack_d8 [32];
  EDelayedRegisterRunPhase local_b8 [16];
  code *local_a8;
  longlong local_98 [3];
  longlong *local_80;
  TFunction<void___cdecl(EDelayedRegisterRunPhase)> local_78;
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  local_78._16_8_ = *(undefined8 *)param_2;
  local_40 = (longlong *)0x0;
  if (local_78._16_8_ != 0) {
    puVar3 = (undefined8 *)&param_2->field_0x10;
    if (*(undefined8 **)&param_2->field_0x28 != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)&param_2->field_0x28;
    }
    (**(code **)*puVar3)(puVar3,&local_78.field_0x20);
  }
  local_a8 = (code *)0x0;
  local_80 = FMemory::Malloc(0x40,0x10);
  *local_80 = (longlong)
              &UE::Core::Private::Function::
               TFunction_OwnedObject<`FDelayedAutoRegisterHelper::FDelayedAutoRegisterHelper'::`1'::<lambda_3_>,0,1>
               ::_vftable_;
  plVar5 = local_80 + 2;
  *plVar5 = local_78._16_8_;
  local_80[7] = (longlong)local_40;
  local_40 = (longlong *)0x0;
  local_80[4] = local_78._32_8_;
  local_80[5] = local_78._40_8_;
  local_80[6] = local_48;
  if (*plVar5 != 0) {
    local_78._16_8_ = 0;
  }
  if (plVar5 != (longlong *)0x0) {
    local_a8 = UE::Core::Private::Function::
               TFunctionRefCaller<`FDelayedAutoRegisterHelper::FDelayedAutoRegisterHelper'::__l1::<lambda_3_>,void,enum_EDelayedRegisterRunPhase>
               ::Call;
  }
  if ((param_1 < NumRunOncePhases) &&
     (GPhasesAlreadyRun.Elements._8_4_ != GPhasesAlreadyRun.Elements._52_4_)) {
    FVar6 = (ForElementType<FSetElementId>)0x154b7f728;
    if (GPhasesAlreadyRun.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FVar6 = GPhasesAlreadyRun.Hash.SecondaryData;
    }
    for (iVar1 = *(int *)((longlong)FVar6 +
                         ((ulonglong)(GPhasesAlreadyRun.HashSize - 1) & (ulonglong)param_1) * 4);
        iVar1 != -1; iVar1 = *(int *)(GPhasesAlreadyRun.Elements._0_8_ + 4 + (longlong)iVar1 * 0xc))
    {
      if (*(EDelayedRegisterRunPhase *)(GPhasesAlreadyRun.Elements._0_8_ + (longlong)iVar1 * 0xc) ==
          param_1) {
        local_b8[0] = param_1;
        UE::Core::Private::Function::CheckCallable(local_a8);
        pcVar2 = local_a8;
        plVar5 = local_98;
        if (local_80 != (longlong *)0x0) {
          plVar5 = local_80;
        }
        puVar3 = (undefined8 *)(**(code **)(*plVar5 + 8))();
        if (pcVar2 == UE::Core::Private::Function::
                      TFunctionRefCaller<`FDelayedAutoRegisterHelper::FDelayedAutoRegisterHelper'::__l1::<lambda_3_>,void,enum_EDelayedRegisterRunPhase>
                      ::Call) {
          UE::Core::Private::Function::CheckCallable((void *)*puVar3);
          pcVar2 = (code *)*puVar3;
          plVar5 = puVar3 + 2;
          if ((longlong *)puVar3[5] != (longlong *)0x0) {
            plVar5 = (longlong *)puVar3[5];
          }
          uVar4 = (**(code **)(*plVar5 + 8))();
          (*pcVar2)(uVar4);
        }
        else {
          (*pcVar2)(puVar3,local_b8);
        }
        goto LAB_1418bafe0;
      }
    }
  }
  this_00 = GetDelayedAutoRegisterDelegate(param_1);
  TMulticastDelegateRegistration<void___cdecl(enum_EDelayedRegisterRunPhase),FDefaultDelegateUserPolicy>
  ::AddLambda<TFunction<void___cdecl(enum_EDelayedRegisterRunPhase)>_&>(this_00,&local_78);
LAB_1418bafe0:
  if (local_a8 != (code *)0x0) {
    plVar5 = local_98;
    if (local_80 != (longlong *)0x0) {
      plVar5 = local_80;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  if (local_78._16_8_ != 0) {
    plVar5 = (longlong *)&local_78.field_0x20;
    if (local_40 != (longlong *)0x0) {
      plVar5 = local_40;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  if (*(longlong *)param_2 != 0) {
    plVar5 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar5 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  return this;
}

// RunAndClearDelayedAutoRegisterDelegates @ 1418f37f0

void __cdecl
FDelayedAutoRegisterHelper::RunAndClearDelayedAutoRegisterDelegates
          (EDelayedRegisterRunPhase param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *pTVar9;
  ForElementType<FSetElementId> FVar10;
  longlong lVar11;
  uint uVar12;
  bool bVar13;
  bool local_res8 [8];
  EDelayedRegisterRunPhase local_res10 [8];
  FDestructionSentinel local_58;
  FDestructionSentinel local_40;
  
  bVar13 = param_1 < NumRunOncePhases;
  local_res8[0] = (bool)param_1;
  if ((bVar13) && (GPhasesAlreadyRun.Elements._8_4_ != GPhasesAlreadyRun.Elements._52_4_)) {
    FVar10 = (ForElementType<FSetElementId>)0x154b7f728;
    if (GPhasesAlreadyRun.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FVar10 = GPhasesAlreadyRun.Hash.SecondaryData;
    }
    for (iVar1 = *(int *)((longlong)FVar10 +
                         ((ulonglong)(GPhasesAlreadyRun.HashSize - 1) & (ulonglong)param_1) * 4);
        iVar1 != -1; iVar1 = *(int *)(GPhasesAlreadyRun.Elements._0_8_ + 4 + (longlong)iVar1 * 0xc))
    {
      if (*(EDelayedRegisterRunPhase *)(GPhasesAlreadyRun.Elements._0_8_ + (longlong)iVar1 * 0xc) ==
          param_1) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("!GPhasesAlreadyRun.Contains(RunPhase)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\DelayedAutoRegister.cpp"
                           ,0x3c,
                           L"Delayed Startup phase %d has already run - it is not expected to be run again!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        break;
      }
    }
  }
  pTVar9 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
           GetDelayedAutoRegisterDelegate(param_1);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pTVar9,
             (FWriteAccessScope *)&local_58);
  pTVar9->InvocationListLockCount = pTVar9->InvocationListLockCount + 1;
  bVar5 = false;
  uVar12 = (pTVar9->InvocationList).ArrayNum - 1;
  if (-1 < (int)uVar12) {
    lVar11 = (longlong)(int)uVar12 << 4;
    bVar5 = false;
    do {
      uVar8 = 0;
      if ((int)uVar12 < (pTVar9->InvocationList).ArrayNum) {
        uVar8 = ~uVar12 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar2 = (pTVar9->InvocationList).AllocatorInstance.Data;
      if (((*(int *)(pFVar2 + lVar11 + 8) == 0) ||
          (plVar3 = *(longlong **)(pFVar2 + lVar11), plVar3 == (longlong *)0x0)) ||
         (cVar7 = (**(code **)(*plVar3 + 0x68))(), cVar7 == '\0')) {
        bVar5 = true;
      }
      lVar11 = lVar11 + -0x10;
      uVar12 = uVar12 - 1;
      param_1 = local_res8[0];
    } while (-1 < (int)uVar12);
  }
  pTVar9->InvocationListLockCount = pTVar9->InvocationListLockCount + -1;
  if (bVar5) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList(pTVar9,false);
  }
  if (local_58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
  }
  if (bVar13) {
    pTVar9 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             GetDelayedAutoRegisterDelegate(param_1);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pTVar9,
               (FWriteAccessScope *)&local_40);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::ClearUnchecked(pTVar9);
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    TSet<enum_EDelayedRegisterRunPhase,DefaultKeyFuncs<enum_EDelayedRegisterRunPhase,0>,FDefaultSetAllocator>
    ::Emplace<enum_EDelayedRegisterRunPhase_const_&>(&GPhasesAlreadyRun,local_res10,local_res8);
  }
  return;
}

