// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 4

// InstrumentScriptEvent @ 142211ec0

void __cdecl FBlueprintCoreDelegates::InstrumentScriptEvent(FScriptInstrumentationSignal *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  FDestructionSentinel local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&OnScriptProfilingEvent,
             (FWriteAccessScope *)&local_28);
  bVar3 = false;
  OnScriptProfilingEvent._28_4_ = OnScriptProfilingEvent._28_4_ + 1;
  uVar7 = OnScriptProfilingEvent._16_4_ - 1;
  if (-1 < (int)uVar7) {
    lVar8 = (longlong)(int)uVar7 << 4;
    bVar3 = false;
    do {
      uVar6 = 0;
      if ((int)uVar7 < (int)OnScriptProfilingEvent._16_4_) {
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
      if (((*(int *)(lVar8 + 8 + OnScriptProfilingEvent._8_8_) == 0) ||
          (plVar1 = *(longlong **)(lVar8 + OnScriptProfilingEvent._8_8_), plVar1 == (longlong *)0x0)
          ) || (cVar5 = (**(code **)(*plVar1 + 0x68))(plVar1,param_1), cVar5 == '\0')) {
        bVar3 = true;
      }
      lVar8 = lVar8 + -0x10;
      uVar7 = uVar7 - 1;
    } while (-1 < (int)uVar7);
  }
  OnScriptProfilingEvent._28_4_ = OnScriptProfilingEvent._28_4_ + -1;
  if (bVar3) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&OnScriptProfilingEvent,false);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// IsDebuggingEnabled @ 142212170

bool __cdecl FBlueprintCoreDelegates::IsDebuggingEnabled(void)

{
  bool bVar1;
  
  bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&OnScriptException);
  return bVar1;
}

// SetScriptMaximumLoopIterations @ 14222bd60

void __cdecl FBlueprintCoreDelegates::SetScriptMaximumLoopIterations(int param_1)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = param_1;
  if ((param_1 < 1) &&
     (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_7634585018982989550>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\ScriptCore.cpp"
                         ,0x112,"MaximumLoopIterations > 0"), iVar2 = GMaximumScriptLoopIterations,
     bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  GMaximumScriptLoopIterations = iVar2;
  return;
}

// ThrowScriptException @ 142231640

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FBlueprintCoreDelegates::ThrowScriptException
          (UObject *param_1,FFrame *param_2,FBlueprintExceptionInfo *param_3)

{
  TOptional<FText> *this;
  Type TVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  FText *pFVar8;
  uint uVar9;
  longlong lVar10;
  FLogScopedCategoryAndVerbosityOverride local_68;
  FText local_58;
  FString local_48;
  FDestructionSentinel local_38;
  
  TVar1 = param_3->EventType;
  bVar5 = true;
  if (((TVar1 == Breakpoint) || (TVar1 == Tracepoint)) || (TVar1 == WireTracepoint)) {
    bVar5 = false;
  }
  else if (2 < (byte)LogScript._0_1_) {
    FLogScopedCategoryAndVerbosityOverride::FLogScopedCategoryAndVerbosityOverride
              (&local_68,(FName)LogScript._4_8_,Warning);
    this = &param_3->Description;
    if ((param_3->Description).field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) {
      pFVar8 = FText::FText(&local_58);
      if (pFVar8 != (FText *)this) {
        if (*(longlong **)&this->field0_0x0 != (longlong *)0x0) {
          (**(code **)(**(longlong **)&this->field0_0x0 + 0x10))();
        }
        FText::FText((FText *)this,pFVar8);
        if (((this->field0_0x0).TypedValue.TextData.Reference == (ITextData *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x171,
                               L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if (local_58.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
      }
      if (((this->field0_0x0).TypedValue.TextData.Reference == (ITextData *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    FText::ToString((FText *)this);
    FOutputDevice::LogfImpl((FOutputDevice *)param_2,L"%s");
    FLogCategoryBase::PostTrigger((FLogCategoryBase *)&LogScript,Warning);
    FLogScopedCategoryAndVerbosityOverride::~FLogScopedCategoryAndVerbosityOverride(&local_68);
  }
  bVar4 = IsInGameThread();
  if (bVar4) {
    if ((((bVar5) &&
         (bVar5 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                             &OnScriptException), !bVar5)) && (GShortScriptWarnings == 0)) &&
       (2 < (byte)LogScript._0_1_)) {
      FFrame::GetStackTrace(param_2,&local_48);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogScript);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&OnScriptException,
               (FWriteAccessScope *)&local_38);
    bVar5 = false;
    OnScriptException._28_4_ = OnScriptException._28_4_ + 1;
    uVar9 = OnScriptException._16_4_ - 1;
    if (-1 < (int)uVar9) {
      lVar10 = (longlong)(int)uVar9 << 4;
      do {
        uVar7 = 0;
        if ((int)uVar9 < (int)OnScriptException._16_4_) {
          uVar7 = ~uVar9 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (((*(int *)(lVar10 + 8 + OnScriptException._8_8_) == 0) ||
            (plVar2 = *(longlong **)(lVar10 + OnScriptException._8_8_), plVar2 == (longlong *)0x0))
           || (cVar6 = (**(code **)(*plVar2 + 0x68))(plVar2,param_1,param_2,param_3), cVar6 == '\0')
           ) {
          bVar5 = true;
        }
        lVar10 = lVar10 + -0x10;
        uVar9 = uVar9 - 1;
      } while (-1 < (int)uVar9);
    }
    OnScriptException._28_4_ = OnScriptException._28_4_ + -1;
    if (bVar5) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&OnScriptException,false);
    }
    if (local_38.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
    }
  }
  if (param_3->EventType == AbortExecution) {
    param_2->bAbortingExecution = true;
  }
  return;
}

