// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 7

// FLogCategoryBase @ 1417a2ec0

/* WARNING: Enum "Type": Some values do not have unique names */

FLogCategoryBase * __thiscall
FLogCategoryBase::FLogCategoryBase(FLogCategoryBase *this,FName *param_1,Type param_2,Type param_3)

{
  uint *puVar1;
  FScriptContainerElement FVar2;
  code *pcVar3;
  bool bVar4;
  FString *pFVar5;
  size_t sVar6;
  FLogCategoryBase *pFVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  ulonglong uVar10;
  wchar_t *_Str;
  uint uVar11;
  FName local_res8;
  FImportantLogScope local_28;
  FString local_18;
  
  this->DefaultVerbosity = param_2;
  this->CompileTimeVerbosity = param_3;
  local_res8 = *param_1;
  this->CategoryName = local_res8;
  pFVar5 = ::FName::ToString(&local_res8,&local_18);
  if ((pFVar5->Data).ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
  sVar6 = wcslen(_Str);
  if (-1 < LogChannel->Enabled) {
    uVar10 = sVar6 & 0xffff;
    uVar11 = (uint)uVar10;
    UE::Trace::Private::FImportantLogScope::Enter<FLoggingLogCategoryFields>(&local_28,uVar11);
    puVar1 = (uint *)(local_28.Ptr + local_28.AuxCursor);
    *(FLogCategoryBase **)local_28.Ptr = this;
    local_28.Ptr[8] = param_2;
    *puVar1 = uVar11 << 0xd | 0x200;
    *(undefined1 *)puVar1 = 1;
    pFVar9 = (FScriptContainerElement *)(puVar1 + 1);
    if (uVar11 != 0) {
      do {
        FVar2 = *(FScriptContainerElement *)_Str;
        _Str = (wchar_t *)((longlong)_Str + 2);
        *pFVar9 = FVar2;
        pFVar9 = pFVar9 + 1;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    iVar8 = local_28.AuxCursor + uVar11;
    local_28.AuxCursor = iVar8 + 4;
    local_28.Ptr[(longlong)iVar8 + 4] = '\x03';
    LOCK();
    *(int *)(local_28.Ptr + local_28.BufferOffset) =
         *(int *)(local_28.Ptr + local_28.BufferOffset) + 1;
    UNLOCK();
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  SetVerbosity(this,this->DefaultVerbosity);
  if (this->CompileTimeVerbosity != NoLogging) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `private:_static_class_TLazySingleton<class_FLogSuppressionImplementation>&___ptr64___cdecl_TLazySingleton<FLogSuppressionImplementation>::GetLazy(void_(__cdecl*)(void*___ptr64))'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`private:_static_class_TLazySingleton<class_FLogSuppressionImplementation>&___ptr64___cdecl_TLazySingleton<FLogSuppressionImplementation>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                             ::__l2::_thread_safe_static_guard_0__),
       `private:_static_class_TLazySingleton<class_FLogSuppressionImplementation>&___ptr64___cdecl_TLazySingleton<FLogSuppressionImplementation>::GetLazy(void_(__cdecl*)(void*___ptr64))'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      FLazySingleton::Construct<FLogSuppressionImplementation>
                (&`private:_static_class_TLazySingleton<class_FLogSuppressionImplementation>&___ptr64___cdecl_TLazySingleton<FLogSuppressionImplementation>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                  ::__l2::Singleton);
      DAT_154ebb478 =
           &`private:_static_class_TLazySingleton<class_FLogSuppressionImplementation>&___ptr64___cdecl_TLazySingleton<FLogSuppressionImplementation>::GetLazy(void_(__cdecl*)(void*___ptr64))'
            ::__l2::Singleton;
      atexit(`TLazySingleton<FLogSuppressionImplementation>::GetLazy'::__l2::
             _dynamic_atexit_destructor_for__Singleton__);
      _Init_thread_footer(&`private:_static_class_TLazySingleton<class_FLogSuppressionImplementation>&___ptr64___cdecl_TLazySingleton<FLogSuppressionImplementation>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    if ((DAT_154ebb478 == (TLazySingleton<class_FLogSuppressionImplementation> *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\LazySingleton.h"
                           ,0x6d,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FLogCategoryBase *)(*pcVar3)();
      return pFVar7;
    }
    (*(code *)**(undefined8 **)DAT_154ebb478)(DAT_154ebb478,this);
  }
  return this;
}

// FLogCategoryBase @ 1417a3090

/* WARNING: Enum "Type": Some values do not have unique names */

FLogCategoryBase * __thiscall
FLogCategoryBase::FLogCategoryBase
          (FLogCategoryBase *this,wchar_t *param_1,Type param_2,Type param_3)

{
  FName *pFVar1;
  FName local_res8;
  
  pFVar1 = ::FName::FName(&local_res8,param_1);
  FLogCategoryBase(this,pFVar1,param_2,param_3);
  return this;
}

// ~FLogCategoryBase @ 1417a75a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FLogCategoryBase::~FLogCategoryBase(FLogCategoryBase *this)

{
  FLogSuppressionInterface *pFVar1;
  
  if (this->CompileTimeVerbosity != NoLogging) {
    pFVar1 = FLogSuppressionInterface::TryGet();
    if (pFVar1 != (FLogSuppressionInterface *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001417a75cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((longlong)*pFVar1 + 8))(pFVar1,this,*(code **)((longlong)*pFVar1 + 8));
      return;
    }
  }
  return;
}

// PostTrigger @ 1417eb240

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FLogCategoryBase::PostTrigger(FLogCategoryBase *this,Type param_1)

{
  code *pcVar1;
  bool bVar2;
  FOutputDeviceRedirector *this_00;
  
  if (this->CompileTimeVerbosity < param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("VerbosityLevel <= CompileTimeVerbosity",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Logging\\LogCategory.cpp"
                       ,0x4e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->DebugBreakOnLog != false) || ((char)param_1 < '\0')) {
    this_00 = GetGlobalLogSingleton();
    FOutputDeviceRedirector::FlushThreadedLogs(this_00,None);
    this->DebugBreakOnLog = false;
    bVar2 = FWindowsPlatformMisc::IsDebuggerPresent();
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// ResetFromDefault @ 1417f6020

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FLogCategoryBase::ResetFromDefault(FLogCategoryBase *this)

{
  SetVerbosity(this,this->DefaultVerbosity);
  return;
}

// SetVerbosity @ 1417fe2e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FLogCategoryBase::SetVerbosity(FLogCategoryBase *this,Type param_1)

{
  Type TVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  Type TVar10;
  Type local_res10 [8];
  FLogCategoryBase *local_58;
  Type *local_50;
  FDestructionSentinel local_48;
  
  TVar1 = this->Verbosity;
  local_res10[0] = param_1 & VerbosityMask;
  TVar10 = local_res10[0];
  if (this->CompileTimeVerbosity < local_res10[0]) {
    local_50 = local_res10;
    local_58 = this;
    bVar4 = `FLogCategoryBase::SetVerbosity'::__l3::<lambda_1>::operator()(&local_58);
    TVar10 = local_res10[0];
    if (!bVar4) {
      TVar10 = this->CompileTimeVerbosity;
    }
  }
  this->Verbosity = TVar10;
  this->DebugBreakOnLog = (bool)(param_1 >> 7);
  if (TVar1 != TVar10) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &FCoreDelegates::OnLogVerbosityChanged,(FWriteAccessScope *)&local_48);
    bVar4 = false;
    FCoreDelegates::OnLogVerbosityChanged._28_4_ = FCoreDelegates::OnLogVerbosityChanged._28_4_ + 1;
    uVar8 = FCoreDelegates::OnLogVerbosityChanged._16_4_ - 1;
    if (-1 < (int)uVar8) {
      lVar9 = (longlong)(int)uVar8 << 4;
      bVar4 = false;
      do {
        uVar7 = 0;
        if ((int)uVar8 < (int)FCoreDelegates::OnLogVerbosityChanged._16_4_) {
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
        if (((*(int *)(lVar9 + 8 + FCoreDelegates::OnLogVerbosityChanged._8_8_) == 0) ||
            (plVar2 = *(longlong **)(lVar9 + FCoreDelegates::OnLogVerbosityChanged._8_8_),
            plVar2 == (longlong *)0x0)) ||
           (cVar6 = (**(code **)(*plVar2 + 0x68))(plVar2,&this->CategoryName,TVar1,TVar10),
           cVar6 == '\0')) {
          bVar4 = true;
        }
        lVar9 = lVar9 + -0x10;
        uVar8 = uVar8 - 1;
      } while (-1 < (int)uVar8);
    }
    FCoreDelegates::OnLogVerbosityChanged._28_4_ = FCoreDelegates::OnLogVerbosityChanged._28_4_ + -1
    ;
    if (bVar4) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &FCoreDelegates::OnLogVerbosityChanged,false);
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
  }
  return;
}

// operator() @ 15047c310

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall `FLogCategoryBase::SetVerbosity'::__l3::<lambda_1>::operator()(void *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  FString local_18;
  
  bVar5 = false;
  bVar3 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3716715374830420019>);
  if (bVar3) {
    lVar1 = *(longlong *)this;
    ::ToString(*(Type *)(lVar1 + 3));
    ::ToString(**(Type **)((longlong)this + 8));
    ::FName::ToString((FName *)(lVar1 + 4),&local_18);
    bVar5 = true;
    bVar3 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3716715374830420019>,&::ENSURE_Static);
    if (bVar3) {
      bVar3 = true;
      goto LAB_15047c3ad;
    }
  }
  bVar3 = false;
LAB_15047c3ad:
  if ((bVar5) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  return false;
}

