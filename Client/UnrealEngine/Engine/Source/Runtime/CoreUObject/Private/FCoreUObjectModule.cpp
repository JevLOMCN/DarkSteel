// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 2

// StartupModule @ 141fb4690

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FCoreUObjectModule::StartupModule(FCoreUObjectModule *this)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_res10 [24];
  FDestructionSentinel local_28;
  undefined8 local_10;
  
  UClassRegisterAllCompiledInClasses();
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::AddStatic<>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::OnInit,(_func___cdecl_void *)local_res10);
  IsInAsyncLoadingThread = IsInAsyncLoadingThreadCoreUObjectInternal;
  IsAsyncLoading = IsAsyncLoadingCoreUObjectInternal;
  SuspendAsyncLoading = SuspendAsyncLoadingInternal;
  ResumeAsyncLoading = ResumeAsyncLoadingInternal;
  IsAsyncLoadingSuspended = IsAsyncLoadingSuspendedInternal;
  IsAsyncLoadingMultithreaded = IsAsyncLoadingMultithreadedCoreUObjectInternal;
  GetLoaderType = GetLoaderTypeInternal;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &FRuntimeErrors::OnRuntimeIssueLogged,(FWriteAccessScope *)&local_28);
  local_10 = 0x154f0b2b0;
  puVar1 = UE::Core::Private::DelegateAllocate
                     (0x20,(FDelegateAllocation *)&FRuntimeErrors::OnRuntimeIssueLogged.field_0x8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXW4Type_ELogVerbosity__PEBDHAEBVFText___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXW4Type_ELogVerbosity__PEBDHAEBVFText___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = RouteRuntimeMessageToBP;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  FPackageName::OnCoreUObjectInitialized();
  FFrame::InitPrintScriptCallstack();
  return;
}

// RouteRuntimeMessageToBP @ 141fe3320

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FCoreUObjectModule::RouteRuntimeMessageToBP(Type param_1,char *param_2,int param_3,FText *param_4)

{
  code *pcVar1;
  bool bVar2;
  size_t sVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  undefined1 auStackY_1b8 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  pwVar5 = L"";
  if ((1 < (byte)(param_1 - Error)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Verbosity == ELogVerbosity::Error) || (Verbosity == ELogVerbosity::Warning)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\CoreNative.cpp"
                         ,0x25,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FText::ToString(param_4);
  local_168._padding_ = 0;
  if (param_2 == (char *)0x0) {
    local_168.Ptr = (wchar_t *)0x0;
    local_168.StringLength = 0;
  }
  else {
    sVar3 = strlen(param_2);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_168,param_2,(int)sVar3,Yes);
  }
  FMsg::Logf_InternalImpl
            (param_2,param_3,(FName *)&LogScript.field_0x4,param_1,L"%s(%d): Runtime %s: \"%s\"");
  if ((void *)local_168._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_168._padding_);
  }
  pFVar4 = FText::ToString(param_4);
  if ((pFVar4->Data).ArrayNum != 0) {
    pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  FFrame::KismetExecutionMessage(pwVar5,param_1,(FName)0x0);
  return;
}

