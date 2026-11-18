// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 7

// EnforceScriptTimeLimit @ 14220a150

void __thiscall FBlueprintContextTracker::EnforceScriptTimeLimit(FBlueprintContextTracker *this)

{
  bool bVar1;
  int iVar2;
  float fVar3;
  
  if (GMaximumScriptLoopIterations < 0x7fffffff) {
    fVar3 = VerseHangDetection::VerseHangThreshold();
    bVar1 = VerseHangDetection::IsComputationLimitExceeded
                      (*(double *)
                        (*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xd40)
                       ,(double)fVar3);
    if (bVar1) {
      iVar2 = GMaximumScriptLoopIterations + 1;
      this->bRanaway = true;
      this->bScriptTimedOut = true;
      this->Runaway = iVar2;
    }
  }
  return;
}

// EnterScriptContext @ 14220a930

void __thiscall
FBlueprintContextTracker::EnterScriptContext
          (FBlueprintContextTracker *this,UObject *param_1,UFunction *param_2)

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
  
  this->ScriptEntryTag = this->ScriptEntryTag + 1;
  bVar3 = IsInGameThread();
  if (bVar3) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&OnEnterScriptContext,
               (FWriteAccessScope *)&local_38);
    bVar3 = false;
    OnEnterScriptContext._28_4_ = OnEnterScriptContext._28_4_ + 1;
    uVar7 = OnEnterScriptContext._16_4_ - 1;
    if (-1 < (int)uVar7) {
      lVar8 = (longlong)(int)uVar7 << 4;
      bVar3 = false;
      do {
        uVar6 = 0;
        if ((int)uVar7 < (int)OnEnterScriptContext._16_4_) {
          uVar6 = ~uVar7 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (((*(int *)(lVar8 + 8 + OnEnterScriptContext._8_8_) == 0) ||
            (plVar1 = *(longlong **)(lVar8 + OnEnterScriptContext._8_8_), plVar1 == (longlong *)0x0)
            ) || (cVar5 = (**(code **)(*plVar1 + 0x68))(plVar1,this,param_1,param_2), cVar5 == '\0')
           ) {
          bVar3 = true;
        }
        lVar8 = lVar8 + -0x10;
        uVar7 = uVar7 - 1;
      } while (-1 < (int)uVar7);
    }
    OnEnterScriptContext._28_4_ = OnEnterScriptContext._28_4_ + -1;
    if (bVar3) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&OnEnterScriptContext,false);
    }
    if (local_38.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
    }
  }
  return;
}

// ExitScriptContext @ 14220ab90

void __thiscall FBlueprintContextTracker::ExitScriptContext(FBlueprintContextTracker *this)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  FDestructionSentinel local_38;
  
  bVar4 = IsInGameThread();
  if (bVar4) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&OnExitScriptContext,
               (FWriteAccessScope *)&local_38);
    bVar4 = false;
    OnExitScriptContext._28_4_ = OnExitScriptContext._28_4_ + 1;
    uVar8 = OnExitScriptContext._16_4_ - 1;
    if (-1 < (int)uVar8) {
      lVar9 = (longlong)(int)uVar8 << 4;
      bVar4 = false;
      do {
        uVar7 = 0;
        if ((int)uVar8 < (int)OnExitScriptContext._16_4_) {
          uVar7 = ~uVar8 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (((*(int *)(lVar9 + 8 + OnExitScriptContext._8_8_) == 0) ||
            (plVar2 = *(longlong **)(lVar9 + OnExitScriptContext._8_8_), plVar2 == (longlong *)0x0))
           || (cVar6 = (**(code **)(*plVar2 + 0x68))(plVar2,this), cVar6 == '\0')) {
          bVar4 = true;
        }
        lVar9 = lVar9 + -0x10;
        uVar8 = uVar8 - 1;
      } while (-1 < (int)uVar8);
    }
    OnExitScriptContext._28_4_ = OnExitScriptContext._28_4_ + -1;
    if (bVar4) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&OnExitScriptContext,false);
    }
    if (local_38.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
    }
  }
  piVar1 = &this->ScriptEntryTag;
  *piVar1 = *piVar1 + -1;
  if ((*piVar1 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ScriptEntryTag >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\ScriptCore.cpp"
                         ,0x14c,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  return;
}

// Get @ 14220cea0

FBlueprintContextTracker * __cdecl FBlueprintContextTracker::Get(void)

{
  FBlueprintContextTracker *pFVar1;
  undefined1 local_res8 [32];
  code *local_18;
  undefined1 *local_10;
  
  local_10 = local_res8;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FBlueprintContextTracker>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar1 = (FBlueprintContextTracker *)
           FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_18,
                      &`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FBlueprintContextTracker>::GetTlsSlot(void)'
                       ::__l2::TlsSlot);
  return pFVar1;
}

// RecordAccessViolation @ 1422188a0

bool __thiscall
FBlueprintContextTracker::RecordAccessViolation(FBlueprintContextTracker *this,UObject *param_1)

{
  longlong lVar1;
  uint uVar2;
  int *piVar3;
  FName FVar4;
  undefined1 *puVar5;
  int iVar6;
  uint uStackX_1c;
  FName local_res20;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FConfigCacheIni::GetInt
                (GConfig,L"ScriptErrorLog",L"MaxNumOfAccessViolation",&MaxNumOfAccessViolation.Value
                 ,&GEditorIni);
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (MaxNumOfAccessViolation.Value < 1) {
    return true;
  }
  if (param_1 == (UObject *)0x0) {
    FVar4.ComparisonIndex.Value = 0;
    FVar4.Number = 0;
  }
  else {
    FVar4.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
    FVar4.Number = *(uint *)&param_1->field_0x1c;
  }
  local_res20 = FVar4;
  uVar2 = ::GetTypeHash(FVar4.ComparisonIndex.Value);
  uStackX_1c = FVar4.Number;
  if (*(int *)&(this->DisplayedWarningsMap).field_0x8 !=
      *(int *)&(this->DisplayedWarningsMap).field_0x34) {
    puVar5 = *(undefined1 **)&(this->DisplayedWarningsMap).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->DisplayedWarningsMap).field_0x38;
    }
    iVar6 = *(int *)(puVar5 + (ulonglong)
                              (*(int *)&(this->DisplayedWarningsMap).field_0x48 - 1U &
                              uStackX_1c + uVar2) * 4);
    if (iVar6 != -1) {
      do {
        lVar1 = *(longlong *)&this->DisplayedWarningsMap + (longlong)iVar6 * 0x14;
        if (*(FName *)(*(longlong *)&this->DisplayedWarningsMap + (longlong)iVar6 * 0x14) ==
            local_res20) {
          if (lVar1 != 0) {
            piVar3 = (int *)(lVar1 + 8);
            goto LAB_14221896c;
          }
          break;
        }
        iVar6 = *(int *)(lVar1 + 0xc);
      } while (iVar6 != -1);
    }
  }
  piVar3 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::
           EmplaceByHash<FName_const_&>
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&this->DisplayedWarningsMap,uStackX_1c + uVar2,&local_res20);
LAB_14221896c:
  *piVar3 = *piVar3 + 1;
  return *piVar3 <= MaxNumOfAccessViolation.Value;
}

// ResetRunaway @ 14221b600

void __thiscall FBlueprintContextTracker::ResetRunaway(FBlueprintContextTracker *this)

{
  this->Runaway = 0;
  this->Recurse = 0;
  this->bRanaway = false;
  this->bScriptTimedOut = false;
  return;
}

// TryGet @ 142231f60

FBlueprintContextTracker * __cdecl FBlueprintContextTracker::TryGet(void)

{
  FBlueprintContextTracker *pFVar1;
  
  pFVar1 = (FBlueprintContextTracker *)
           FThreadSingletonInitializer::TryGet
                     (&`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FBlueprintContextTracker>::GetTlsSlot(void)'
                       ::__l2::TlsSlot);
  return pFVar1;
}

