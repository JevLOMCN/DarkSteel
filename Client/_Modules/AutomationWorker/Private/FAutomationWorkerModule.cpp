// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AutomationWorker
// Functions: 33

// StartupModule @ 148bfd530

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FAutomationWorkerModule::StartupModule(FAutomationWorkerModule *this)

{
  FAutomationTestFramework *pFVar1;
  
  Initialize(this);
  pFVar1 = FAutomationTestFramework::Get();
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddRaw<FAutomationWorkerModule>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)pFVar1
             ,(FAutomationWorkerModule *)&stack0x00000010,(pmf_d1ab1099)this);
  pFVar1 = FAutomationTestFramework::Get();
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddRaw<FAutomationWorkerModule>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &pFVar1->PostTestingEvent,(FAutomationWorkerModule *)&stack0x00000010,
             (pmf_d1ab1099)this);
  return;
}

// ShutdownModule @ 148bfd590

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FAutomationWorkerModule::ShutdownModule(FAutomationWorkerModule *this)

{
  FAutomationTestFramework *pFVar1;
  
  pFVar1 = FAutomationTestFramework::Get();
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)pFVar1,this);
  pFVar1 = FAutomationTestFramework::Get();
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pFVar1->PostTestingEvent,this);
  return;
}

// SupportsDynamicReloading @ 148bfd5d0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FAutomationWorkerModule::SupportsDynamicReloading(FAutomationWorkerModule *this)

{
  return true;
}

// Tick @ 148bfd5e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FAutomationWorkerModule::Tick(FAutomationWorkerModule *this)

{
  uint uVar1;
  longlong *plVar2;
  FMessageEndpoint *this_00;
  bool bVar3;
  char cVar4;
  FAutomationTestFramework *pFVar5;
  UScriptStruct *pUVar6;
  FAutomationWorkerMessageBase *pFVar7;
  FReadAccessScope local_28;
  
  if (GIsAutomationTesting) {
    pFVar5 = FAutomationTestFramework::Get();
    bVar3 = FAutomationTestFramework::ExecuteLatentCommands(pFVar5);
    if (bVar3) {
      if (this->bExecutingNetworkCommandResults != false) {
        if (GIsAutomationTesting != false) {
          pUVar6 = FAutomationWorkerRequestNextNetworkCommand::StaticStruct();
          pFVar7 = FMemory::Malloc(0x14,0);
          uVar1 = this->ExecutionCount;
          (pFVar7->InstanceId).A = 0;
          (pFVar7->InstanceId).B = 0;
          (pFVar7->InstanceId).C = 0;
          (pFVar7->InstanceId).D = 0;
          pFVar7[1].InstanceId.A = uVar1;
          SendMessage(this,pFVar7,pUVar6,&this->TestRequesterAddress);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->StopTestEvent,
                     &local_28);
          if (((*(int *)&(this->StopTestEvent).field_0x10 == 0) ||
              (plVar2 = *(longlong **)&(this->StopTestEvent).field_0x8, plVar2 == (longlong *)0x0))
             || (cVar4 = (**(code **)(*plVar2 + 0x38))(), cVar4 == '\0')) {
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
            ~FReadAccessScope(&local_28);
          }
          else {
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
            ~FReadAccessScope(&local_28);
            this->bExecuteNextNetworkCommand = true;
          }
        }
        this->bExecutingNetworkCommandResults = false;
      }
      if (this->bExecuteNextNetworkCommand != false) {
        if (GIsAutomationTesting != false) {
          pFVar5 = FAutomationTestFramework::Get();
          bVar3 = FAutomationTestFramework::ExecuteNetworkCommands(pFVar5);
          if (bVar3) {
            ReportTestComplete(this);
          }
        }
        this->bExecuteNextNetworkCommand = false;
        this->bExecutingNetworkCommandResults = true;
      }
    }
  }
  this_00 = (this->MessageEndpoint).Object;
  if (this_00 == (FMessageEndpoint *)0x0) {
    return;
  }
  FMessageEndpoint::ProcessInbox(this_00);
  return;
}

// ExecuteLatentCommands @ 148bffd30

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FAutomationWorkerModule::ExecuteLatentCommands(FAutomationWorkerModule *this)

{
  bool bVar1;
  FAutomationTestFramework *this_00;
  
  if (GIsAutomationTesting) {
    this_00 = FAutomationTestFramework::Get();
    bVar1 = FAutomationTestFramework::ExecuteLatentCommands(this_00);
    return bVar1;
  }
  return false;
}

// ExecuteNetworkCommands @ 148bffd60

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FAutomationWorkerModule::ExecuteNetworkCommands(FAutomationWorkerModule *this)

{
  bool bVar1;
  FAutomationTestFramework *this_00;
  
  if (GIsAutomationTesting) {
    this_00 = FAutomationTestFramework::Get();
    bVar1 = FAutomationTestFramework::ExecuteNetworkCommands(this_00);
    return bVar1;
  }
  return false;
}

// HandleFindWorkersMessage @ 148c02da0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAutomationWorkerModule::HandleFindWorkersMessage
          (FAutomationWorkerModule *this,FAutomationWorkerFindWorkers *param_1,
          TSharedRef<IMessageContext,1> *param_2)

{
  FGuid *this_00;
  FMessageAddress *pFVar1;
  FString local_18;
  
  if (4 < (byte)LogAutomationWorker._0_1_) {
    this_00 = (FGuid *)(**(code **)((longlong)*param_2->Object + 0x48))();
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    FGuid::AppendString(this_00,&local_18,Digits);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAutomationWorker);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if ((((FApp::SessionId.B == (param_1->SessionId).B && FApp::SessionId.D == (param_1->SessionId).D)
       && FApp::SessionId.C == (param_1->SessionId).C) &&
       FApp::SessionId.A == (param_1->SessionId).A) && (param_1->Changelist == 10000)) {
    pFVar1 = (FMessageAddress *)(**(code **)((longlong)*param_2->Object + 0x48))();
    SendWorkerFound(this,pFVar1);
  }
  return;
}

// HandleNextNetworkCommandReplyMessage @ 148c03740

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAutomationWorkerModule::HandleNextNetworkCommandReplyMessage
          (FAutomationWorkerModule *this,FAutomationWorkerNextNetworkCommandReply *param_1,
          TSharedRef<IMessageContext,1> *param_2)

{
  code *pcVar1;
  bool bVar2;
  FGuid *this_00;
  FString local_18;
  
  if (4 < (byte)LogAutomationWorker._0_1_) {
    this_00 = (FGuid *)(**(code **)((longlong)*param_2->Object + 0x48))();
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    FGuid::AppendString(this_00,&local_18,Digits);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAutomationWorker);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  this->bExecuteNextNetworkCommand = true;
  if ((this->bExecutingNetworkCommandResults != false) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("bExecutingNetworkCommandResults == false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AutomationWorker\\Private\\AutomationWorkerModule.cpp"
                         ,0x15f,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// HandlePerformanceDataRetrieved @ 148c037f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAutomationWorkerModule::HandlePerformanceDataRetrieved
          (FAutomationWorkerModule *this,FAutomationWorkerPerformanceDataResponse *param_1,
          TSharedRef<IMessageContext,1> *param_2)

{
  FGuid *this_00;
  FAutomationTestFramework *this_01;
  FString local_18;
  
  if (4 < (byte)LogAutomationWorker._0_1_) {
    this_00 = (FGuid *)(**(code **)((longlong)*param_2->Object + 0x48))();
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    FGuid::AppendString(this_00,&local_18,Digits);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAutomationWorker);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  this_01 = FAutomationTestFramework::Get();
  FAutomationTestFramework::NotifyPerformanceDataRetrieved
            (this_01,param_1->bSuccess,&param_1->ErrorMessage);
  return;
}

// HandlePingMessage @ 148c03880

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAutomationWorkerModule::HandlePingMessage
          (FAutomationWorkerModule *this,FAutomationWorkerPing *param_1,
          TSharedRef<IMessageContext,1> *param_2)

{
  FMessageAddress *pFVar1;
  UScriptStruct *pUVar2;
  FAutomationWorkerMessageBase *pFVar3;
  
  pFVar1 = (FMessageAddress *)(**(code **)((longlong)*param_2->Object + 0x48))();
  pUVar2 = FAutomationWorkerPong::StaticStruct();
  pFVar3 = FMemory::Malloc(0x10,0);
  (pFVar3->InstanceId).A = 0;
  (pFVar3->InstanceId).B = 0;
  (pFVar3->InstanceId).C = 0;
  (pFVar3->InstanceId).D = 0;
  SendMessage(this,pFVar3,pUVar2,pFVar1);
  return;
}

// HandlePostTestingEvent @ 148c038f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FAutomationWorkerModule::HandlePostTestingEvent(FAutomationWorkerModule *this)

{
  FAutomationTestFramework *pFVar1;
  TDelegate<void___cdecl(TArray<FColor,TSizedDefaultAllocator<32>_>_const_&,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const_&,FAutomationScreenshotData_const_&),FDefaultDelegateUserPolicy>
  *this_00;
  TDelegate<void___cdecl(TArray<FColor,TSizedDefaultAllocator<32>_>_const_&,FAutomationScreenshotData_const_&),FDefaultDelegateUserPolicy>
  *this_01;
  
  pFVar1 = FAutomationTestFramework::Get();
  this_00 = FAutomationTestFramework::OnScreenshotAndTraceCaptured(pFVar1);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pFVar1 = FAutomationTestFramework::Get();
  this_01 = FAutomationTestFramework::OnScreenshotCaptured(pFVar1);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_01);
  pFVar1 = FAutomationTestFramework::Get();
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &pFVar1->OnScreenshotComparisonReport,this);
  return;
}

// HandlePreTestingEvent @ 148c03950

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FAutomationWorkerModule::HandlePreTestingEvent(FAutomationWorkerModule *this)

{
  code *pcVar1;
  bool bVar2;
  FAutomationTestFramework *pFVar3;
  TDelegate<void___cdecl(TArray<FColor,TSizedDefaultAllocator<32>_>_const_&,FAutomationScreenshotData_const_&),FDefaultDelegateUserPolicy>
  *this_00;
  undefined8 *puVar4;
  ulong64 uVar5;
  TDelegate<void___cdecl(TArray<FColor,TSizedDefaultAllocator<32>_>_const_&,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const_&,FAutomationScreenshotData_const_&),FDefaultDelegateUserPolicy>
  *this_01;
  FDestructionSentinel local_48;
  undefined1 *local_30;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  pFVar3 = FAutomationTestFramework::Get();
  this_00 = FAutomationTestFramework::OnScreenshotCaptured(pFVar3);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
             (FWriteAccessScope *)&local_48);
  local_30 = &this_00->field_0x8;
  puVar4 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_30);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_UFColor__V__TSizedDefaultAllocator__0CA_____AEBUFAutomationScreenshotData___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFAutomationWorkerModule____A6AXAEBV__TArray_UFColor__V__TSizedDefaultAllocator__0CA_____AEBUFAutomationScreenshotData___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar4[4] = HandleScreenShotCapturedWithName;
    puVar4[3] = this;
    if (this == (FAutomationWorkerModule *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && MethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                         ,0x1d8,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  pFVar3 = FAutomationTestFramework::Get();
  this_01 = FAutomationTestFramework::OnScreenshotAndTraceCaptured(pFVar3);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_01,
             (FWriteAccessScope *)&local_28);
  local_10 = &this_01->field_0x8;
  puVar4 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_UFColor__V__TSizedDefaultAllocator__0CA_____AEBV__TArray_EV__TSizedDefaultAllocator__0CA_____AEBUFAutomationScreenshotData___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFAutomationWorkerModule____A6AXAEBV__TArray_UFColor__V__TSizedDefaultAllocator__0CA_____AEBV__TArray_EV__TSizedDefaultAllocator__0CA_____AEBUFAutomationScreenshotData___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar4[4] = HandleScreenShotAndTraceCapturedWithName;
    puVar4[3] = this;
    if (this == (FAutomationWorkerModule *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && MethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                         ,0x1d8,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  pFVar3 = FAutomationTestFramework::Get();
  TMulticastDelegateRegistration<void___cdecl(FAutomationScreenshotCompareResults_const_&),FDefaultDelegateUserPolicy>
  ::AddRaw<FAutomationWorkerModule>
            ((TMulticastDelegateRegistration<void___cdecl(FAutomationScreenshotCompareResults_const_&),FDefaultDelegateUserPolicy>
              *)&pFVar3->OnScreenshotComparisonReport,(FAutomationWorkerModule *)&stack0x00000010,
             (pmf_832db8a3)this);
  return;
}

// HandleRequestTestsMessage @ 148c03ae0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAutomationWorkerModule::HandleRequestTestsMessage
          (FAutomationWorkerModule *this,FAutomationWorkerRequestTests *param_1,
          TSharedRef<IMessageContext,1> *param_2)

{
  FGuid *this_00;
  FAutomationTestFramework *pFVar1;
  FMessageAddress *pFVar2;
  FString local_18;
  
  if (4 < (byte)LogAutomationWorker._0_1_) {
    this_00 = (FGuid *)(**(code **)((longlong)*param_2->Object + 0x48))();
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    FGuid::AppendString(this_00,&local_18,Digits);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAutomationWorker);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  pFVar1 = FAutomationTestFramework::Get();
  FAutomationTestFramework::LoadTestModules(pFVar1);
  pFVar1 = FAutomationTestFramework::Get();
  FAutomationTestFramework::SetDeveloperDirectoryIncluded
            (pFVar1,param_1->DeveloperDirectoryIncluded);
  pFVar1 = FAutomationTestFramework::Get();
  FAutomationTestFramework::SetRequestedTestFilter(pFVar1,param_1->RequestedTestFlags);
  pFVar1 = FAutomationTestFramework::Get();
  FAutomationTestFramework::GetValidTestNames(pFVar1,&this->TestInfo);
  pFVar2 = (FMessageAddress *)(**(code **)((longlong)*param_2->Object + 0x48))();
  SendTests(this,pFVar2);
  return;
}

// HandleRunTestsMessage @ 148c03bd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000148c0458d) */
/* WARNING: Removing unreachable block (ram,0x000148c0459b) */
/* WARNING: Removing unreachable block (ram,0x000148c045a9) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAutomationWorkerModule::HandleRunTestsMessage
          (FAutomationWorkerModule *this,FAutomationWorkerRunTests *param_1,
          TSharedRef<IMessageContext,1> *param_2)

{
  int *piVar1;
  FAutomationExecutionEntry *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  FGuid *this_00;
  uint *puVar10;
  FAutomationWorkerRunTestsReply *pFVar11;
  FAutomationExecutionEntry *pFVar12;
  FMessageAddress *pFVar13;
  UScriptStruct *pUVar14;
  FAutomationTestFramework *pFVar15;
  undefined8 *puVar16;
  FAutomationWorkerMessageBase *pFVar17;
  ForAnyElementType FVar18;
  wchar_t *pwVar19;
  longlong lVar20;
  longlong lVar21;
  undefined1 auStackY_338 [32];
  bool local_2e8 [4];
  FLLMScope local_2e4;
  FString local_2e0;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_2d0;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_2c0;
  FString local_2b0;
  FString local_2a0;
  FString local_290;
  undefined1 local_280 [8];
  FString local_278;
  FString local_268;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined4 local_238;
  undefined8 local_230;
  FString local_228;
  FString local_218;
  undefined8 local_208;
  undefined8 uStack_200;
  FAutomationEvent local_1f8;
  undefined1 local_1c0;
  FString local_1b8;
  FString local_1a8;
  undefined8 local_198;
  undefined8 uStack_190;
  FMemScope local_180;
  FString local_178;
  FAutomationExecutionEntry local_168;
  FStringFormatArg local_108;
  FStringFormatArg local_e8;
  FStringFormatArg local_c8;
  FStringFormatArg local_a8;
  FStringFormatArg local_88;
  FStringFormatArg local_68;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_338;
  if (4 < (byte)LogAutomationWorker._0_1_) {
    this_00 = (FGuid *)(**(code **)((longlong)*param_2->Object + 0x48))();
    local_2b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2b0.Data.ArrayNum = 0;
    local_2b0.Data.ArrayMax = 0;
    FGuid::AppendString(this_00,&local_2b0,Digits);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAutomationWorker);
    if (local_2b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2b0.Data.AllocatorInstance.Data);
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name626,L"AutomationTest/Worker");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(&local_2e4,LLMScope_Name626,false,None,Default,true);
  FMemScope::FMemScope(&local_180,&LLMScope_Name626,true);
  if (((((this->TestRequesterAddress).UniqueId.D == 0 &&
        (this->TestRequesterAddress).UniqueId.B == 0) &&
       (this->TestRequesterAddress).UniqueId.A == 0) && (this->TestRequesterAddress).UniqueId.C == 0
      ) || ((this->TestName).Data.ArrayNum < 2)) {
    local_2e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2e0.Data.ArrayNum = 0;
    local_2e0.Data.ArrayMax = 0;
    local_2e8[0] = false;
    pFVar15 = FAutomationTestFramework::Get();
    bVar7 = FAutomationTestFramework::CanRunTestInEnvironment
                      (pFVar15,&param_1->TestName,&local_2e0,local_2e8);
    if ((!bVar7) ||
       (bVar7 = IsTestExcluded(this,&param_1->FullTestPath,&local_2e0,local_2e8), bVar7)) {
      if ((param_1->BeautifiedTestName).Data.ArrayNum == 0) {
        pwVar19 = L"";
      }
      else {
        pwVar19 = (wchar_t *)(param_1->BeautifiedTestName).Data.AllocatorInstance.Data;
      }
      FStringFormatArg::FStringFormatArg(&local_a8,pwVar19);
      FVar18.Data = (FScriptContainerElement *)L"";
      if (local_2e0.Data.ArrayNum != 0) {
        FVar18.Data = local_2e0.Data.AllocatorInstance.Data;
      }
      FStringFormatArg::FStringFormatArg(&local_88,(wchar_t *)FVar18.Data);
      if ((param_1->FullTestPath).Data.ArrayNum == 0) {
        pwVar19 = L"";
      }
      else {
        pwVar19 = (wchar_t *)(param_1->FullTestPath).Data.AllocatorInstance.Data;
      }
      FStringFormatArg::FStringFormatArg(&local_68,pwVar19);
      local_2c0.ArrayNum = 3;
      local_2c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,3,0,&local_2c0.AllocatorInstance,3,&local_2c0.ArrayMax);
      ConstructItems<FStringFormatArg,FStringFormatArg,int>
                (local_2c0.AllocatorInstance.Data,&local_a8,3);
      ::FString::FormatImpl
                (&local_218,L"Test Skipped. Name={{0}} Reason={{1}} Path={{2}}",&local_2c0);
      DestructItems<FStringFormatArg,int>
                ((FStringFormatArg *)local_2c0.AllocatorInstance.Data,local_2c0.ArrayNum);
      if ((FStringFormatArg *)local_2c0.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
        FMemory::Free(local_2c0.AllocatorInstance.Data);
      }
      if (local_68.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.StringValue.Data.AllocatorInstance.Data);
      }
      if (local_88.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.StringValue.Data.AllocatorInstance.Data);
      }
      if (local_a8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.StringValue.Data.AllocatorInstance.Data);
      }
      if (local_2e8[0] == false) {
        if (3 < (byte)LogAutomationWorker._0_1_) {
          UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAutomationWorker);
        }
      }
      else if (2 < (byte)LogAutomationWorker._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAutomationWorker);
      }
      pFVar17 = FMemory::Malloc(0x48,0);
      *(undefined4 *)((longlong)&pFVar17[4].InstanceId.A + 1) = 0;
      *(undefined2 *)((longlong)&pFVar17[4].InstanceId.B + 1) = 0;
      *(undefined1 *)((longlong)&pFVar17[4].InstanceId.B + 3) = 0;
      (pFVar17->InstanceId).A = 0;
      (pFVar17->InstanceId).B = 0;
      (pFVar17->InstanceId).C = 0;
      (pFVar17->InstanceId).D = 0;
      (((FString *)(pFVar17 + 1))->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      pFVar17[1].InstanceId.C = 0;
      pFVar17[1].InstanceId.D = 0;
      pFVar17[2].InstanceId.A = 0;
      pFVar17[2].InstanceId.B = 0;
      pFVar17[2].InstanceId.C = 0;
      pFVar17[2].InstanceId.D = 0;
      pFVar17[3].InstanceId.A = 0;
      pFVar17[3].InstanceId.B = 0;
      pFVar17[3].InstanceId.C = 0;
      pFVar17[3].InstanceId.D = 0;
      *(undefined1 *)&pFVar17[4].InstanceId.A = 0;
      ::FString::operator=((FString *)(pFVar17 + 1),&param_1->TestName);
      pFVar17[3].InstanceId.D = param_1->ExecutionCount;
      *(undefined1 *)&pFVar17[4].InstanceId.A = 4;
      ::FString::PrintfImpl(&local_178,L"Skipping test: %s");
      local_1c0 = 0;
      ::FString::FString(&local_1b8,&local_178);
      local_280[0] = local_1c0;
      local_198 = 0;
      local_1a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1a8.Data.ArrayNum = 0;
      local_1a8.Data.ArrayMax = 0;
      uStack_190 = 0;
      ::FString::FString(&local_278,&local_1b8);
      ::FString::FString(&local_268,&local_1a8);
      local_238 = 0xffffffff;
      local_248 = 0;
      local_258 = local_198;
      uStack_250 = uStack_190;
      uStack_240 = 0;
      FDateTime::UtcNow();
      if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
      }
      if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
      }
      if (((*(undefined1 **)&pFVar17[2].InstanceId <= local_280) &&
          (local_280 <
           *(undefined1 **)&pFVar17[2].InstanceId + (longlong)(int)pFVar17[2].InstanceId.D * 0x58))
         && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar9 = pFVar17[2].InstanceId.C;
      if (uVar9 == pFVar17[2].InstanceId.D) {
        uVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x858,(ForAnyElementType *)(pFVar17 + 2),(int *)&pFVar17[2].InstanceId.D)
        ;
      }
      lVar21 = (longlong)(int)uVar9 * 0x58;
      pFVar17[2].InstanceId.C = uVar9 + 1;
      lVar20 = *(longlong *)&pFVar17[2].InstanceId;
      *(undefined1 *)(lVar21 + lVar20) = local_280[0];
      *(undefined8 *)(lVar21 + 8 + lVar20) = 0;
      *(FScriptContainerElement **)(lVar21 + 8 + lVar20) = local_278.Data.AllocatorInstance.Data;
      *(int *)(lVar21 + 0x10 + lVar20) = local_278.Data.ArrayNum;
      *(int *)(lVar21 + 0x14 + lVar20) = local_278.Data.ArrayMax;
      *(undefined8 *)(lVar21 + 0x18 + lVar20) = 0;
      *(FScriptContainerElement **)(lVar21 + 0x18 + lVar20) = local_268.Data.AllocatorInstance.Data;
      *(int *)(lVar21 + 0x20 + lVar20) = local_268.Data.ArrayNum;
      *(int *)(lVar21 + 0x24 + lVar20) = local_268.Data.ArrayMax;
      puVar16 = (undefined8 *)(lVar21 + 0x28 + lVar20);
      *puVar16 = local_258;
      puVar16[1] = uStack_250;
      *(undefined8 *)(lVar21 + 0x38 + lVar20) = 0;
      *(undefined8 *)(lVar21 + 0x38 + lVar20) = local_248;
      *(undefined4 *)(lVar21 + 0x40 + lVar20) = (undefined4)uStack_240;
      *(undefined4 *)(lVar21 + 0x44 + lVar20) = uStack_240._4_4_;
      *(undefined4 *)(lVar21 + 0x48 + lVar20) = local_238;
      *(undefined8 *)(lVar21 + 0x50 + lVar20) = local_230;
      uStack_240 = 0;
      local_248 = 0;
      local_268.Data.ArrayNum = 0;
      local_268.Data.ArrayMax = 0;
      local_268.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_278.Data.ArrayNum = 0;
      local_278.Data.ArrayMax = 0;
      local_278.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_178.Data.AllocatorInstance.Data);
      }
      pFVar13 = (FMessageAddress *)(**(code **)((longlong)*param_2->Object + 0x48))();
      pUVar14 = FAutomationWorkerRunTestsReply::StaticStruct();
      SendMessage(this,pFVar17,pUVar14,pFVar13);
      local_228.Data.AllocatorInstance.Data = local_2e0.Data.AllocatorInstance.Data;
      if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_218.Data.AllocatorInstance.Data);
        local_228.Data.AllocatorInstance.Data = local_2e0.Data.AllocatorInstance.Data;
      }
    }
    else {
      this->ExecutionCount = param_1->ExecutionCount;
      ::FString::operator=(&this->TestName,&param_1->TestName);
      ::FString::operator=(&this->BeautifiedTestName,&param_1->BeautifiedTestName);
      ::FString::operator=(&this->FullTestPath,&param_1->FullTestPath);
      this->bSendAnalytics = param_1->bSendAnalytics;
      this->bPruneLogsOnSuccess = param_1->bPruneLogsOnSuccess;
      puVar16 = (undefined8 *)(**(code **)((longlong)*param_2->Object + 0x48))();
      uVar5 = *puVar16;
      uVar6 = puVar16[1];
      this->bExecuteNextNetworkCommand = true;
      this->bExecutingNetworkCommandResults = false;
      local_208 = 0;
      (this->TestRequesterAddress).UniqueId.A = (int)uVar5;
      (this->TestRequesterAddress).UniqueId.B = (int)((ulonglong)uVar5 >> 0x20);
      (this->TestRequesterAddress).UniqueId.C = (int)uVar6;
      (this->TestRequesterAddress).UniqueId.D = (int)((ulonglong)uVar6 >> 0x20);
      uStack_200 = 0;
      (this->ActiveScreenshotComparisonId).A = 0;
      (this->ActiveScreenshotComparisonId).B = 0;
      (this->ActiveScreenshotComparisonId).C = 0;
      (this->ActiveScreenshotComparisonId).D = 0;
      TriggerSectionNotifications(this);
      pFVar15 = FAutomationTestFramework::Get();
      FAutomationTestFramework::StartTestByName
                (pFVar15,&param_1->TestName,param_1->RoleIndex,&param_1->FullTestPath);
      local_228.Data.AllocatorInstance.Data = local_2e0.Data.AllocatorInstance.Data;
    }
  }
  else {
    puVar10 = (uint *)(**(code **)((longlong)*param_2->Object + 0x48))();
    if (((puVar10[3] == (this->TestRequesterAddress).UniqueId.D &&
         puVar10[2] == (this->TestRequesterAddress).UniqueId.C) &&
        puVar10[1] == (this->TestRequesterAddress).UniqueId.B) &&
        *puVar10 == (this->TestRequesterAddress).UniqueId.A) {
      if ((byte)LogAutomationWorker._0_1_ < 5) goto LAB_148c045ff;
      local_2a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_2a0.Data.ArrayNum = 0;
      local_2a0.Data.ArrayMax = 0;
      FGuid::AppendString(&(this->TestRequesterAddress).UniqueId,&local_2a0,Digits);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAutomationWorker);
      local_228.Data.AllocatorInstance.Data = local_2a0.Data.AllocatorInstance.Data;
    }
    else {
      if ((this->BeautifiedTestName).Data.ArrayNum == 0) {
        pwVar19 = L"";
      }
      else {
        pwVar19 = (wchar_t *)(this->BeautifiedTestName).Data.AllocatorInstance.Data;
      }
      FStringFormatArg::FStringFormatArg(&local_108,pwVar19);
      local_290.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_290.Data.ArrayNum = 0;
      local_290.Data.ArrayMax = 0;
      FGuid::AppendString(&(this->TestRequesterAddress).UniqueId,&local_290,Digits);
      FVar18.Data = (FScriptContainerElement *)L"";
      if (local_290.Data.ArrayNum != 0) {
        FVar18.Data = local_290.Data.AllocatorInstance.Data;
      }
      FStringFormatArg::FStringFormatArg(&local_e8,(wchar_t *)FVar18.Data);
      if ((param_1->BeautifiedTestName).Data.ArrayNum == 0) {
        pwVar19 = L"";
      }
      else {
        pwVar19 = (wchar_t *)(param_1->BeautifiedTestName).Data.AllocatorInstance.Data;
      }
      FStringFormatArg::FStringFormatArg(&local_c8,pwVar19);
      local_2d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_2d0.ArrayNum = 3;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,3,0,&local_2d0.AllocatorInstance,3,&local_2d0.ArrayMax);
      ConstructItems<FStringFormatArg,FStringFormatArg,int>
                (local_2d0.AllocatorInstance.Data,&local_108,3);
      ::FString::FormatImpl
                (&local_228,
                 L"Worker is already running test \'{0}\' from {1}. \'{2}\' won\'t be run.",
                 &local_2d0);
      DestructItems<FStringFormatArg,int>
                ((FStringFormatArg *)local_2d0.AllocatorInstance.Data,local_2d0.ArrayNum);
      if ((FStringFormatArg *)local_2d0.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
        FMemory::Free(local_2d0.AllocatorInstance.Data);
      }
      if (local_c8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.StringValue.Data.AllocatorInstance.Data);
      }
      if (local_e8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.StringValue.Data.AllocatorInstance.Data);
      }
      if (local_108.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.StringValue.Data.AllocatorInstance.Data);
      }
      if (local_290.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_290.Data.AllocatorInstance.Data);
      }
      if (2 < (byte)LogAutomationWorker._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAutomationWorker);
      }
      pFVar11 = FMessageEndpoint::MakeMessage<FAutomationWorkerRunTestsReply>();
      ::FString::operator=(&pFVar11->TestName,&param_1->TestName);
      FVar18.Data = local_228.Data.AllocatorInstance.Data;
      pFVar11->ExecutionCount = param_1->ExecutionCount;
      pFVar11->State = Skipped;
      local_1f8.Type = Error;
      local_1f8.Message.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_228.Data.ArrayNum == 0) {
        local_1f8.Message.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_228.Data.ArrayNum,0,(ForAnyElementType *)&local_1f8.Message,
                   local_228.Data.ArrayNum,&local_1f8.Message.Data.ArrayMax);
        memcpy(local_1f8.Message.Data.AllocatorInstance.Data,FVar18.Data,
               (longlong)local_228.Data.ArrayNum * 2);
      }
      local_1f8.Artifact.A = 0;
      local_1f8.Artifact.B = 0;
      local_1f8.Context.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1f8.Context.Data.ArrayNum = 0;
      local_1f8.Context.Data.ArrayMax = 0;
      local_1f8.Artifact.C = 0;
      local_1f8.Artifact.D = 0;
      pFVar12 = FAutomationExecutionEntry::FAutomationExecutionEntry(&local_168,&local_1f8);
      pFVar2 = (FAutomationExecutionEntry *)(pFVar11->Entries).AllocatorInstance.Data;
      if (((pFVar2 <= pFVar12) && (pFVar12 < pFVar2 + (pFVar11->Entries).ArrayMax)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar8 = (pFVar11->Entries).ArrayNum;
      piVar1 = &(pFVar11->Entries).ArrayMax;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x858,&(pFVar11->Entries).AllocatorInstance,piVar1);
      }
      (pFVar11->Entries).ArrayNum = iVar8 + 1;
      pFVar3 = (pFVar11->Entries).AllocatorInstance.Data;
      lVar20 = (longlong)iVar8 * 0x58;
      pFVar3[lVar20] = (FScriptContainerElement)(pFVar12->Event).Type;
      *(undefined8 *)(pFVar3 + lVar20 + 8) = 0;
      *(FScriptContainerElement **)(pFVar3 + lVar20 + 8) =
           (pFVar12->Event).Message.Data.AllocatorInstance.Data;
      (pFVar12->Event).Message.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(pFVar3 + lVar20 + 0x10) = (pFVar12->Event).Message.Data.ArrayNum;
      *(int *)(pFVar3 + lVar20 + 0x14) = (pFVar12->Event).Message.Data.ArrayMax;
      (pFVar12->Event).Message.Data.ArrayNum = 0;
      (pFVar12->Event).Message.Data.ArrayMax = 0;
      *(undefined8 *)(pFVar3 + lVar20 + 0x18) = 0;
      *(FScriptContainerElement **)(pFVar3 + lVar20 + 0x18) =
           (pFVar12->Event).Context.Data.AllocatorInstance.Data;
      (pFVar12->Event).Context.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(pFVar3 + lVar20 + 0x20) = (pFVar12->Event).Context.Data.ArrayNum;
      *(int *)(pFVar3 + lVar20 + 0x24) = (pFVar12->Event).Context.Data.ArrayMax;
      (pFVar12->Event).Context.Data.ArrayNum = 0;
      (pFVar12->Event).Context.Data.ArrayMax = 0;
      uVar5 = *(undefined8 *)&(pFVar12->Event).Artifact.C;
      *(undefined8 *)(pFVar3 + lVar20 + 0x28) = *(undefined8 *)&(pFVar12->Event).Artifact;
      *(undefined8 *)(pFVar3 + lVar20 + 0x28 + 8) = uVar5;
      *(undefined8 *)(pFVar3 + lVar20 + 0x38) = 0;
      *(FScriptContainerElement **)(pFVar3 + lVar20 + 0x38) =
           (pFVar12->Filename).Data.AllocatorInstance.Data;
      (pFVar12->Filename).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(pFVar3 + lVar20 + 0x40) = (pFVar12->Filename).Data.ArrayNum;
      *(int *)(pFVar3 + lVar20 + 0x44) = (pFVar12->Filename).Data.ArrayMax;
      (pFVar12->Filename).Data.ArrayNum = 0;
      (pFVar12->Filename).Data.ArrayMax = 0;
      *(int *)(pFVar3 + lVar20 + 0x48) = pFVar12->LineNumber;
      *(long64 *)(pFVar3 + lVar20 + 0x50) = (pFVar12->Timestamp).Ticks;
      if (local_168.Filename.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_168.Filename.Data.AllocatorInstance.Data);
      }
      if (local_168.Event.Context.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_168.Event.Context.Data.AllocatorInstance.Data);
      }
      if (local_168.Event.Message.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_168.Event.Message.Data.AllocatorInstance.Data);
      }
      pFVar11->ErrorTotal = 1;
      pFVar13 = (FMessageAddress *)(**(code **)((longlong)*param_2->Object + 0x48))();
      pUVar14 = FAutomationWorkerRunTestsReply::StaticStruct();
      SendMessage(this,(FAutomationWorkerMessageBase *)pFVar11,pUVar14,pFVar13);
    }
  }
  if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_228.Data.AllocatorInstance.Data);
  }
LAB_148c045ff:
  FMemScope::~FMemScope(&local_180);
  FLLMScope::~FLLMScope(&local_2e4);
  return;
}

// HandleScreenShotAndTraceCapturedWithName @ 148c04690

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAutomationWorkerModule::HandleScreenShotAndTraceCapturedWithName
          (FAutomationWorkerModule *this,TArray<FColor,TSizedDefaultAllocator<32>_> *param_1,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_2,
          FAutomationScreenshotData *param_3)

{
  FMessageAddress *this_00;
  int *piVar1;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  code *pcVar4;
  long64 _Size;
  FAutomationWorkerModule *this_01;
  bool bVar5;
  char cVar6;
  DWORD DVar7;
  FAutomationWorkerScreenImage *pFVar8;
  UScriptStruct *pUVar9;
  IFileManager *pIVar10;
  ForAnyElementType FVar11;
  int iVar12;
  undefined1 auStackY_22c8 [32];
  FString local_2280;
  FLLMScope local_2270 [2];
  FString local_2268;
  FString local_2258;
  FString local_2248;
  FString local_2238;
  TArray<unsigned_char,TSizedDefaultAllocator<64>_> local_2228;
  FScriptContainerElement *local_2210;
  FAutomationWorkerModule *local_2208;
  FMemScope local_2200;
  FString local_21f8;
  TArrayView<FColor_const_,__int64> local_21e8;
  FString local_21d8;
  TArrayView<unsigned_char_const_,__int64> local_21c8;
  FString local_21b8;
  FScriptContainerElement *local_21a8;
  int iStack_21a0;
  undefined4 uStack_219c;
  FAutomationScreenshotMetadata local_2198;
  TStringView<wchar_t> local_2058;
  wchar_t local_2048 [2048];
  wchar_t local_1048 [2048];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x148c046b2;
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_22c8;
  local_2208 = this;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name479,L"AutomationTest/ImageCompare");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_2270,LLMScope_Name479,false,None,Default,true);
  FMemScope::FMemScope(&local_2200,&LLMScope_Name479,true);
  local_21e8.DataPtr = (FColor *)(param_1->AllocatorInstance).Data;
  iVar3 = param_3->Height;
  iVar12 = param_3->Width;
  local_21e8.ArrayNum = (long64)param_1->ArrayNum;
  local_2228.ArrayMax = 0;
  local_2228.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2228.ArrayNum = 0;
  if ((local_21e8.ArrayNum < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FImageUtils::PNGCompressImageArray(iVar12,iVar3,&local_21e8,&local_2228);
  FAutomationScreenshotMetadata::FAutomationScreenshotMetadata(&local_2198,param_3);
  this_00 = &this->TestRequesterAddress;
  if ((((this->TestRequesterAddress).UniqueId.D == 0 && (this->TestRequesterAddress).UniqueId.C == 0
       ) && (this->TestRequesterAddress).UniqueId.B == 0) && (this_00->UniqueId).A == 0) {
    AutomationCommon::GetLocalPathForScreenshot(&local_2280,&param_3->ScreenshotPath);
    ::FString::FString(&local_21d8,L".rdc");
    FPaths::ChangeExtension(&local_2238,&local_2280,&local_21d8);
    if (local_21d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_21d8.Data.AllocatorInstance.Data);
    }
    FPaths::GetPath(&local_2248,&local_2280);
    if (4 < (byte)LogAutomationWorker._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAutomationWorker);
    }
    pIVar10 = IFileManager::Get();
    FVar11.Data = (FScriptContainerElement *)L"";
    if (local_2248.Data.ArrayNum != 0) {
      FVar11.Data = local_2248.Data.AllocatorInstance.Data;
    }
    cVar6 = (**(code **)((longlong)*pIVar10 + 0x60))(pIVar10,FVar11.Data,1);
    if (cVar6 == '\0') {
      if (1 < (byte)LogAutomationWorker._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAutomationWorker);
      }
    }
    else {
      pIVar10 = IFileManager::Get();
      FVar11.Data = (FScriptContainerElement *)L"";
      if (local_2280.Data.ArrayNum != 0) {
        FVar11.Data = local_2280.Data.AllocatorInstance.Data;
      }
      bVar5 = FFileHelper::SaveArrayToFile(&local_2228,(wchar_t *)FVar11.Data,pIVar10,0);
      if (bVar5) {
        if (0 < param_2->ArrayNum) {
          pIVar10 = IFileManager::Get();
          local_21c8.DataPtr = (uchar *)(param_2->AllocatorInstance).Data;
          local_21c8.ArrayNum = (long64)param_2->ArrayNum;
          FVar11.Data = (FScriptContainerElement *)L"";
          if (local_2238.Data.ArrayNum != 0) {
            FVar11.Data = local_2238.Data.AllocatorInstance.Data;
          }
          if ((param_2->ArrayNum < 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          bVar5 = FFileHelper::SaveArrayToFile(&local_21c8,(wchar_t *)FVar11.Data,pIVar10,0);
          if (!bVar5) {
            DVar7 = FWindowsPlatformMisc::GetLastError();
            FWindowsPlatformMisc::GetSystemErrorMessage(local_1048,0x800,DVar7);
            if (2 < (byte)LogAutomationWorker._0_1_) {
              UE::Logging::Private::BasicLog<3>
                        (&::LOG_Static,(FLogCategoryBase *)&LogAutomationWorker);
            }
          }
        }
        local_2258.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_2258.Data.ArrayNum = 0;
        local_2258.Data.ArrayMax = 0;
        pUVar9 = FAutomationScreenshotMetadata::StaticStruct();
        bVar5 = FJsonObjectConverter::UStructToJsonObjectString
                          ((UStruct *)pUVar9,&local_2198,&local_2258,0,0,0,
                           (TDelegate<TSharedPtr<FJsonValue,1>___cdecl(FProperty_*,void_const_*),FDefaultDelegateUserPolicy>
                            *)0x0,true);
        if (bVar5) {
          ::FString::FString(&local_21b8,L"json");
          FPaths::ChangeExtension(&local_21f8,&local_2280,&local_21b8);
          if (local_21b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_21b8.Data.AllocatorInstance.Data);
          }
          pIVar10 = IFileManager::Get();
          local_21a8 = local_2258.Data.AllocatorInstance.Data;
          FVar11.Data = (FScriptContainerElement *)L"";
          if (local_21f8.Data.ArrayNum != 0) {
            FVar11.Data = local_21f8.Data.AllocatorInstance.Data;
          }
          iStack_21a0 = local_2258.Data.ArrayNum + -1;
          if (local_2258.Data.ArrayNum == 0) {
            iStack_21a0 = 0;
          }
          local_2058._12_4_ = uStack_219c;
          local_2058.Size = iStack_21a0;
          local_2058.DataPtr = (wchar_t *)local_2258.Data.AllocatorInstance.Data;
          FFileHelper::SaveStringToFile
                    (&local_2058,(wchar_t *)FVar11.Data,ForceUTF8WithoutBOM,pIVar10,0);
          if (local_21f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_21f8.Data.AllocatorInstance.Data);
          }
        }
        if (local_2258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2258.Data.AllocatorInstance.Data);
        }
      }
      else {
        DVar7 = FWindowsPlatformMisc::GetLastError();
        FWindowsPlatformMisc::GetSystemErrorMessage(local_2048,0x800,DVar7);
        if (2 < (byte)LogAutomationWorker._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAutomationWorker);
        }
      }
    }
    if (local_2248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2248.Data.AllocatorInstance.Data);
    }
    if (local_2238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2238.Data.AllocatorInstance.Data);
    }
    if (local_2280.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2280.Data.AllocatorInstance.Data);
    }
  }
  else {
    pFVar8 = FMemory::Malloc(0x180,0);
    memset(pFVar8,0,0x180);
    pFVar8 = FAutomationWorkerScreenImage::FAutomationWorkerScreenImage(pFVar8);
    ::FString::operator=(&pFVar8->ScreenShotName,&param_3->ScreenshotPath);
    _Size = local_2228.ArrayNum;
    piVar1 = &(pFVar8->ScreenImage).ArrayMax;
    iVar3 = *piVar1;
    local_2210 = local_2228.AllocatorInstance.Data;
    iVar12 = (int)local_2228.ArrayNum;
    if ((iVar12 != local_2228.ArrayNum) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(OtherSizeType)NewNum == OtherNum",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0xdac,L"Invalid number of elements to add to this array type: %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    (pFVar8->ScreenImage).ArrayNum = iVar12;
    if ((_Size == 0) && (iVar3 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,iVar12,iVar3,&(pFVar8->ScreenImage).AllocatorInstance,iVar12,piVar1);
      if (_Size != 0) {
        memcpy((pFVar8->ScreenImage).AllocatorInstance.Data,local_2210,_Size);
      }
    }
    pTVar2 = &pFVar8->FrameTrace;
    if (pTVar2 != param_2) {
      iVar3 = param_2->ArrayNum;
      piVar1 = &(pFVar8->FrameTrace).ArrayMax;
      _Src = (param_2->AllocatorInstance).Data;
      (pFVar8->FrameTrace).ArrayNum = iVar3;
      if ((iVar3 == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,iVar3,*piVar1,&pTVar2->AllocatorInstance,iVar3,piVar1);
        if (iVar3 != 0) {
          memcpy((pTVar2->AllocatorInstance).Data,_Src,(longlong)iVar3);
        }
      }
    }
    ::FString::operator=(&(pFVar8->Metadata).ScreenShotName,&local_2198.ScreenShotName);
    ::FString::operator=(&(pFVar8->Metadata).VariantName,&local_2198.VariantName);
    ::FString::operator=(&(pFVar8->Metadata).Context,&local_2198.Context);
    ::FString::operator=(&(pFVar8->Metadata).TestName,&local_2198.TestName);
    ::FString::operator=(&(pFVar8->Metadata).Notes,&local_2198.Notes);
    (pFVar8->Metadata).Id.A = local_2198.Id.A;
    (pFVar8->Metadata).Id.B = local_2198.Id.B;
    (pFVar8->Metadata).Id.C = local_2198.Id.C;
    (pFVar8->Metadata).Id.D = local_2198.Id.D;
    ::FString::operator=(&(pFVar8->Metadata).Commit,&local_2198.Commit);
    (pFVar8->Metadata).Width = local_2198.Width;
    (pFVar8->Metadata).Height = local_2198.Height;
    ::FString::operator=(&(pFVar8->Metadata).Rhi,&local_2198.Rhi);
    ::FString::operator=(&(pFVar8->Metadata).Platform,&local_2198.Platform);
    ::FString::operator=(&(pFVar8->Metadata).FeatureLevel,&local_2198.FeatureLevel);
    (pFVar8->Metadata).bIsStereo = local_2198.bIsStereo;
    (pFVar8->Metadata).bIsSubstrate = local_2198.bIsSubstrate;
    ::FString::operator=(&(pFVar8->Metadata).Vendor,&local_2198.Vendor);
    ::FString::operator=(&(pFVar8->Metadata).AdapterName,&local_2198.AdapterName);
    ::FString::operator=
              (&(pFVar8->Metadata).AdapterInternalDriverVersion,
               &local_2198.AdapterInternalDriverVersion);
    ::FString::operator=
              (&(pFVar8->Metadata).AdapterUserDriverVersion,&local_2198.AdapterUserDriverVersion);
    ::FString::operator=(&(pFVar8->Metadata).UniqueDeviceId,&local_2198.UniqueDeviceId);
    (pFVar8->Metadata).ResolutionQuality = local_2198.ResolutionQuality;
    (pFVar8->Metadata).ViewDistanceQuality = local_2198.ViewDistanceQuality;
    (pFVar8->Metadata).AntiAliasingQuality = local_2198.AntiAliasingQuality;
    (pFVar8->Metadata).ShadowQuality = local_2198.ShadowQuality;
    (pFVar8->Metadata).GlobalIlluminationQuality = local_2198.GlobalIlluminationQuality;
    (pFVar8->Metadata).ReflectionQuality = local_2198.ReflectionQuality;
    (pFVar8->Metadata).PostProcessQuality = local_2198.PostProcessQuality;
    (pFVar8->Metadata).TextureQuality = local_2198.TextureQuality;
    (pFVar8->Metadata).EffectsQuality = local_2198.EffectsQuality;
    (pFVar8->Metadata).FoliageQuality = local_2198.FoliageQuality;
    (pFVar8->Metadata).ShadingQuality = local_2198.ShadingQuality;
    (pFVar8->Metadata).bHasComparisonRules = local_2198.bHasComparisonRules;
    (pFVar8->Metadata).ToleranceRed = local_2198.ToleranceRed;
    (pFVar8->Metadata).ToleranceGreen = local_2198.ToleranceGreen;
    (pFVar8->Metadata).ToleranceBlue = local_2198.ToleranceBlue;
    (pFVar8->Metadata).ToleranceAlpha = local_2198.ToleranceAlpha;
    (pFVar8->Metadata).ToleranceMinBrightness = local_2198.ToleranceMinBrightness;
    (pFVar8->Metadata).ToleranceMaxBrightness = local_2198.ToleranceMaxBrightness;
    (pFVar8->Metadata).MaximumLocalError = local_2198.MaximumLocalError;
    (pFVar8->Metadata).MaximumGlobalError = local_2198.MaximumGlobalError;
    (pFVar8->Metadata).bIgnoreAntiAliasing = local_2198.bIgnoreAntiAliasing;
    (pFVar8->Metadata).bIgnoreColors = local_2198.bIgnoreColors;
    if (4 < (byte)LogAutomationWorker._0_1_) {
      local_2268.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_2268.Data.ArrayNum = 0;
      local_2268.Data.ArrayMax = 0;
      FGuid::AppendString(&this_00->UniqueId,&local_2268,Digits);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAutomationWorker);
      if (local_2268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2268.Data.AllocatorInstance.Data);
      }
    }
    this_01 = local_2208;
    (local_2208->ActiveScreenshotComparisonId).A = local_2198.Id.A;
    (local_2208->ActiveScreenshotComparisonId).B = local_2198.Id.B;
    (local_2208->ActiveScreenshotComparisonId).C = local_2198.Id.C;
    (local_2208->ActiveScreenshotComparisonId).D = local_2198.Id.D;
    pUVar9 = FAutomationWorkerScreenImage::StaticStruct();
    SendMessage(this_01,(FAutomationWorkerMessageBase *)pFVar8,pUVar9,this_00);
  }
  FAutomationScreenshotMetadata::~FAutomationScreenshotMetadata(&local_2198);
  if (local_2228.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2228.AllocatorInstance.Data);
  }
  FMemScope::~FMemScope(&local_2200);
  FLLMScope::~FLLMScope(local_2270);
  return;
}

// HandleScreenShotCapturedWithName @ 148c04fb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAutomationWorkerModule::HandleScreenShotCapturedWithName
          (FAutomationWorkerModule *this,TArray<FColor,TSizedDefaultAllocator<32>_> *param_1,
          FAutomationScreenshotData *param_2)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  HandleScreenShotAndTraceCapturedWithName(this,param_1,&local_18,param_2);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
    return;
  }
  return;
}

// HandleScreenShotCompared @ 148c04ff0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAutomationWorkerModule::HandleScreenShotCompared
          (FAutomationWorkerModule *this,FAutomationWorkerImageComparisonResults *param_1,
          TSharedRef<IMessageContext,1> *param_2)

{
  uint uVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FGuid *this_00;
  FAutomationTestFramework *this_01;
  int iVar4;
  FString local_a8;
  FAutomationScreenshotCompareResults local_98;
  
  if (4 < (byte)LogAutomationWorker._0_1_) {
    this_00 = (FGuid *)(**(code **)((longlong)*param_2->Object + 0x48))();
    local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a8.Data.ArrayNum = 0;
    local_a8.Data.ArrayMax = 0;
    FGuid::AppendString(this_00,&local_a8,Digits);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAutomationWorker);
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
  }
  if ((((param_1->UniqueId).D == (this->ActiveScreenshotComparisonId).D &&
       (param_1->UniqueId).C == (this->ActiveScreenshotComparisonId).C) &&
      (param_1->UniqueId).B == (this->ActiveScreenshotComparisonId).B) &&
      (this->ActiveScreenshotComparisonId).A == (param_1->UniqueId).A) {
    local_98.ErrorMessage.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_98.MaxLocalDifference = 0.0;
    local_98.GlobalDifference = 0.0;
    local_98.UniqueId.A = (param_1->UniqueId).A;
    local_98.UniqueId.B = (param_1->UniqueId).B;
    local_98.UniqueId.C = (param_1->UniqueId).C;
    local_98.UniqueId.D = (param_1->UniqueId).D;
    local_98.ErrorMessage.Data.ArrayNum = 0;
    local_98.ErrorMessage.Data.ArrayMax = 0;
    local_98.bWasNew = false;
    local_98.bWasSimilar = false;
    local_98.IncomingFilePath.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_98.IncomingFilePath.Data.ArrayNum = 0;
    local_98.IncomingFilePath.Data.ArrayMax = 0;
    local_98.ReportComparisonFilePath.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_98.ReportComparisonFilePath.Data.ArrayNum = 0;
    local_98.ReportComparisonFilePath.Data.ArrayMax = 0;
    local_98.ReportApprovedFilePath.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_98.ReportApprovedFilePath.Data.ArrayNum = 0;
    local_98.ReportApprovedFilePath.Data.ArrayMax = 0;
    local_98.ReportIncomingFilePath.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_98.ReportIncomingFilePath.Data.ArrayNum = 0;
    local_98.ReportIncomingFilePath.Data.ArrayMax = 0;
    local_98.ScreenshotPath.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_98.ScreenshotPath.Data.ArrayNum = 0;
    local_98.ScreenshotPath.Data.ArrayMax = 0;
    iVar4 = 0;
    if (&local_98.ScreenshotPath != &param_1->ScreenshotPath) {
      uVar1 = (param_1->ScreenshotPath).Data.ArrayNum;
      pFVar3 = (param_1->ScreenshotPath).Data.AllocatorInstance.Data;
      local_98.ScreenshotPath.Data.ArrayMax = 0;
      local_98.ScreenshotPath.Data.ArrayNum = uVar1;
      iVar4 = 0;
      if (uVar1 != 0) {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,uVar1,0,(ForAnyElementType *)&local_98.ScreenshotPath,uVar1,
                   &local_98.ScreenshotPath.Data.ArrayMax);
        memcpy(local_98.ScreenshotPath.Data.AllocatorInstance.Data,pFVar3,(longlong)(int)uVar1 * 2);
        iVar4 = local_98.ErrorMessage.Data.ArrayMax;
      }
    }
    local_98.MaxLocalDifference = param_1->MaxLocalDifference;
    local_98.GlobalDifference = param_1->GlobalDifference;
    local_98.bWasNew = param_1->bNew;
    local_98.bWasSimilar = param_1->bSimilar;
    if (&local_98.ErrorMessage != &param_1->ErrorMessage) {
      iVar2 = (param_1->ErrorMessage).Data.ArrayNum;
      pFVar3 = (param_1->ErrorMessage).Data.AllocatorInstance.Data;
      local_98.ErrorMessage.Data.ArrayNum = iVar2;
      if ((iVar2 == 0) && (iVar4 == 0)) {
        local_98.ErrorMessage.Data.ArrayNum = 0;
        local_98.ErrorMessage.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar2,iVar4,(ForAnyElementType *)&local_98.ErrorMessage,iVar2,
                   &local_98.ErrorMessage.Data.ArrayMax);
        if (iVar2 != 0) {
          memcpy(local_98.ErrorMessage.Data.AllocatorInstance.Data,pFVar3,(longlong)iVar2 * 2);
        }
      }
    }
    this_01 = FAutomationTestFramework::Get();
    FAutomationTestFramework::NotifyScreenshotComparisonComplete(this_01,&local_98);
    if (local_98.ScreenshotPath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.ScreenshotPath.Data.AllocatorInstance.Data);
    }
    if (local_98.ReportIncomingFilePath.Data.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.ReportIncomingFilePath.Data.AllocatorInstance.Data);
    }
    if (local_98.ReportApprovedFilePath.Data.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.ReportApprovedFilePath.Data.AllocatorInstance.Data);
    }
    if (local_98.ReportComparisonFilePath.Data.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.ReportComparisonFilePath.Data.AllocatorInstance.Data);
    }
    if (local_98.IncomingFilePath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.IncomingFilePath.Data.AllocatorInstance.Data);
    }
    if (local_98.ErrorMessage.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.ErrorMessage.Data.AllocatorInstance.Data);
    }
  }
  else if (4 < (byte)LogAutomationWorker._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAutomationWorker);
  }
  return;
}

// HandleScreenShotComparisonReport @ 148c05280

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAutomationWorkerModule::HandleScreenShotComparisonReport
          (FAutomationWorkerModule *this,FAutomationScreenshotCompareResults *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  FAutomationWorkerMessageBase *pFVar4;
  UScriptStruct *pUVar5;
  
  pFVar4 = FMemory::Malloc(0x98,0);
  *(undefined2 *)&pFVar4[3].InstanceId.A = 0;
  pFVar4[3].InstanceId.C = 0;
  pFVar4[3].InstanceId.D = 0;
  (pFVar4->InstanceId).A = 0;
  (pFVar4->InstanceId).B = 0;
  (pFVar4->InstanceId).C = 0;
  (pFVar4->InstanceId).D = 0;
  pFVar4[1].InstanceId.A = 0;
  pFVar4[1].InstanceId.B = 0;
  pFVar4[1].InstanceId.C = 0;
  pFVar4[1].InstanceId.D = 0;
  (((FString *)(pFVar4 + 2))->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar4[2].InstanceId.C = 0;
  pFVar4[2].InstanceId.D = 0;
  pFVar4[4].InstanceId.C = 0;
  pFVar4[4].InstanceId.D = 0;
  pFVar4[5].InstanceId.A = 0;
  pFVar4[5].InstanceId.B = 0;
  pFVar4[5].InstanceId.C = 0;
  pFVar4[5].InstanceId.D = 0;
  pFVar4[6].InstanceId.A = 0;
  pFVar4[6].InstanceId.B = 0;
  pFVar4[6].InstanceId.C = 0;
  pFVar4[6].InstanceId.D = 0;
  pFVar4[7].InstanceId.A = 0;
  pFVar4[7].InstanceId.B = 0;
  pFVar4[7].InstanceId.C = 0;
  pFVar4[7].InstanceId.D = 0;
  pFVar4[8].InstanceId.A = 0;
  pFVar4[8].InstanceId.B = 0;
  pFVar4[8].InstanceId.C = 0;
  pFVar4[8].InstanceId.D = 0;
  pFVar4[9].InstanceId.A = 0;
  pFVar4[9].InstanceId.B = 0;
  pFVar4[4].InstanceId.A = 0;
  pFVar4[4].InstanceId.B = 0;
  ::FString::operator=((FString *)(pFVar4 + 2),&param_1->ScreenshotPath);
  uVar1 = (param_1->UniqueId).B;
  uVar2 = (param_1->UniqueId).C;
  uVar3 = (param_1->UniqueId).D;
  pFVar4[1].InstanceId.A = (param_1->UniqueId).A;
  pFVar4[1].InstanceId.B = uVar1;
  pFVar4[1].InstanceId.C = uVar2;
  pFVar4[1].InstanceId.D = uVar3;
  *(bool *)&pFVar4[3].InstanceId.A = param_1->bWasNew;
  *(bool *)((longlong)&pFVar4[3].InstanceId.A + 1) = param_1->bWasSimilar;
  ::FString::operator=((FString *)&pFVar4[4].InstanceId.C,&param_1->ErrorMessage);
  *(double *)&pFVar4[3].InstanceId.C = param_1->MaxLocalDifference;
  *(double *)&pFVar4[4].InstanceId = param_1->GlobalDifference;
  ::FString::operator=((FString *)&pFVar4[5].InstanceId.C,&param_1->IncomingFilePath);
  ::FString::operator=((FString *)&pFVar4[6].InstanceId.C,&param_1->ReportComparisonFilePath);
  ::FString::operator=((FString *)&pFVar4[7].InstanceId.C,&param_1->ReportApprovedFilePath);
  ::FString::operator=((FString *)&pFVar4[8].InstanceId.C,&param_1->ReportIncomingFilePath);
  pUVar5 = FAutomationWorkerImageComparisonResults::StaticStruct();
  SendMessage(this,pFVar4,pUVar5,&this->TestRequesterAddress);
  return;
}

// HandleStartTestSession @ 148c053d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAutomationWorkerModule::HandleStartTestSession
          (FAutomationWorkerModule *this,FAutomationWorkerStartTestSession *param_1,
          TSharedRef<IMessageContext,1> *param_2)

{
  FGuid *this_00;
  FAutomationTestFramework *pFVar1;
  FString local_18;
  
  if (4 < (byte)LogAutomationWorker._0_1_) {
    this_00 = (FGuid *)(**(code **)((longlong)*param_2->Object + 0x48))();
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    FGuid::AppendString(this_00,&local_18,Digits);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAutomationWorker);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  pFVar1 = FAutomationTestFramework::Get();
  FAutomationTestFramework::ResetTests(pFVar1);
  ::FString::Empty(&this->ActiveSection);
  pFVar1 = FAutomationTestFramework::Get();
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&pFVar1->OnBeforeAllTestsEvent);
  return;
}

// HandleStopTestSession @ 148c05470

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAutomationWorkerModule::HandleStopTestSession
          (FAutomationWorkerModule *this,FAutomationWorkerStopTestSession *param_1,
          TSharedRef<IMessageContext,1> *param_2)

{
  FGuid *this_00;
  FAutomationTestFramework *pFVar1;
  FString local_18;
  
  if (4 < (byte)LogAutomationWorker._0_1_) {
    this_00 = (FGuid *)(**(code **)((longlong)*param_2->Object + 0x48))();
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    FGuid::AppendString(this_00,&local_18,Digits);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAutomationWorker);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  TriggerSectionNotifications(this);
  pFVar1 = FAutomationTestFramework::Get();
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&pFVar1->OnAfterAllTestsEvent);
  return;
}

// HandleStopTestsMessage @ 148c05500

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAutomationWorkerModule::HandleStopTestsMessage
          (FAutomationWorkerModule *this,FAutomationWorkerStopTests *param_1,
          TSharedRef<IMessageContext,1> *param_2)

{
  FGuid *this_00;
  FAutomationTestFramework *this_01;
  FString local_18;
  
  if (4 < (byte)LogAutomationWorker._0_1_) {
    this_00 = (FGuid *)(**(code **)((longlong)*param_2->Object + 0x48))();
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    FGuid::AppendString(this_00,&local_18,Digits);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAutomationWorker);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if (GIsAutomationTesting != false) {
    this_01 = FAutomationTestFramework::Get();
    FAutomationTestFramework::DequeueAllCommands(this_01);
  }
  ReportTestComplete(this);
  return;
}

// HandleTelemetryData @ 148c055a0

/* WARNING: Removing unreachable block (ram,0x000148c057f4) */
/* WARNING: Removing unreachable block (ram,0x000148c05802) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAutomationWorkerModule::HandleTelemetryData
          (FAutomationWorkerModule *this,FString *param_1,FString *param_2,
          TArray<FAutomationTelemetryData,TSizedDefaultAllocator<32>_> *param_3)

{
  FString *pFVar1;
  FAutomationWorkerMessageBase *pFVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  EBuildConfiguration EVar7;
  bool bVar8;
  uint uVar9;
  FAutomationWorkerMessageBase *pFVar10;
  wchar_t *pwVar11;
  UScriptStruct *pUVar12;
  longlong lVar13;
  FScriptContainerElement *pFVar14;
  undefined1 local_res20 [8];
  FString local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  FString local_60;
  FScriptContainerElement *local_50;
  FString local_48;
  
  pFVar10 = FMemory::Malloc(0x60,0);
  pFVar10[1].InstanceId.A = 0;
  pFVar10[1].InstanceId.B = 0;
  pFVar10[1].InstanceId.C = 0;
  pFVar10[1].InstanceId.D = 0;
  pFVar10[2].InstanceId.A = 0;
  pFVar10[2].InstanceId.B = 0;
  pFVar10[3].InstanceId.A = 0;
  pFVar10[3].InstanceId.B = 0;
  pFVar1 = (FString *)(pFVar10 + 3);
  pFVar10[2].InstanceId.C = 0;
  pFVar10[2].InstanceId.D = 0;
  pFVar2 = pFVar10 + 5;
  pFVar10[3].InstanceId.C = 0;
  pFVar10[3].InstanceId.D = 0;
  *(FScriptContainerElement **)&pFVar2->InstanceId = (FScriptContainerElement *)0x0;
  pFVar10[5].InstanceId.C = 0;
  pFVar10[5].InstanceId.D = 0;
  (pFVar10->InstanceId).A = 0;
  (pFVar10->InstanceId).B = 0;
  (pFVar10->InstanceId).C = 0;
  (pFVar10->InstanceId).D = 0;
  pFVar10[4].InstanceId.A = 0;
  pFVar10[4].InstanceId.B = 0;
  pFVar10[4].InstanceId.C = 0;
  pFVar10[4].InstanceId.D = 0;
  ::FString::operator=((FString *)(pFVar10 + 1),param_1);
  ::FString::FString(&local_80,"Windows");
  if (pFVar1 != &local_80) {
    if (*(void **)&pFVar1->Data != (void *)0x0) {
      FMemory::Free(*(void **)&pFVar1->Data);
    }
    *(FScriptContainerElement **)&pFVar1->Data = local_80.Data.AllocatorInstance.Data;
    pFVar10[3].InstanceId.C = local_80.Data.ArrayNum;
    pFVar10[3].InstanceId.D = local_80.Data.ArrayMax;
    local_80.Data.ArrayNum = 0;
    local_80.Data.ArrayMax = 0;
    local_80.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.Data.AllocatorInstance.Data);
  }
  EVar7 = FApp::GetBuildConfiguration();
  pwVar11 = ::LexToString(EVar7);
  ::FString::operator=((FString *)(pFVar10 + 2),pwVar11);
  ::FString::operator=((FString *)(pFVar10 + 4),param_2);
  iVar4 = param_3->ArrayNum;
  pFVar14 = (param_3->AllocatorInstance).Data;
  pFVar3 = pFVar14 + (longlong)iVar4 * 0x28;
  while( true ) {
    if (param_3->ArrayNum != iVar4) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<FAutomationTelemetryData_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res20);
    }
    if (pFVar14 == pFVar3) break;
    local_70 = 0;
    uStack_68 = 0;
    ::FString::FString(&local_60,(FString *)pFVar14);
    local_50 = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar14[0x10].field_0x0)->
               AllocatorInstance).Data;
    ::FString::FString(&local_48,(FString *)(pFVar14 + 0x18));
    if (((*(FScriptContainerElement **)&pFVar2->InstanceId <= (FScriptContainerElement *)&local_70)
        && ((FScriptContainerElement *)&local_70 <
            *(FScriptContainerElement **)&pFVar2->InstanceId +
            (longlong)(int)pFVar10[5].InstanceId.D * 0x38)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar9 = pFVar10[5].InstanceId.C;
    if (uVar9 == pFVar10[5].InstanceId.D) {
      uVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x838,(ForAnyElementType *)pFVar2,(int *)&pFVar10[5].InstanceId.D);
    }
    pFVar10[5].InstanceId.C = uVar9 + 1;
    pFVar5 = *(FScriptContainerElement **)&pFVar2->InstanceId;
    lVar13 = (longlong)(int)uVar9 * 0x38;
    *(undefined8 *)(pFVar5 + lVar13) = local_70;
    *(undefined8 *)(pFVar5 + lVar13 + 8) = uStack_68;
    *(undefined8 *)(pFVar5 + lVar13 + 0x10) = 0;
    *(FScriptContainerElement **)(pFVar5 + lVar13 + 0x10) = local_60.Data.AllocatorInstance.Data;
    *(int *)(pFVar5 + lVar13 + 0x18) = local_60.Data.ArrayNum;
    *(int *)(pFVar5 + lVar13 + 0x1c) = local_60.Data.ArrayMax;
    *(undefined8 *)(pFVar5 + lVar13 + 0x28) = 0;
    *(FScriptContainerElement **)(pFVar5 + lVar13 + 0x20) = local_50;
    *(FScriptContainerElement **)(pFVar5 + lVar13 + 0x28) = local_48.Data.AllocatorInstance.Data;
    *(int *)(pFVar5 + lVar13 + 0x30) = local_48.Data.ArrayNum;
    *(int *)(pFVar5 + lVar13 + 0x34) = local_48.Data.ArrayMax;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_60.Data.ArrayNum = 0;
    local_60.Data.ArrayMax = 0;
    local_60.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar14 = pFVar14 + 0x28;
  }
  if (4 < (byte)LogAutomationWorker._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAutomationWorker);
  }
  pUVar12 = FAutomationWorkerTelemetryData::StaticStruct();
  SendMessage(this,pFVar10,pUVar12,&this->TestRequesterAddress);
  return;
}

// HandleTestDataRetrieved @ 148c05880

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAutomationWorkerModule::HandleTestDataRetrieved
          (FAutomationWorkerModule *this,FAutomationWorkerTestDataResponse *param_1,
          TSharedRef<IMessageContext,1> *param_2)

{
  FGuid *this_00;
  FAutomationTestFramework *this_01;
  FString local_18;
  
  if (4 < (byte)LogAutomationWorker._0_1_) {
    this_00 = (FGuid *)(**(code **)((longlong)*param_2->Object + 0x48))();
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    FGuid::AppendString(this_00,&local_18,Digits);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAutomationWorker);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  this_01 = FAutomationTestFramework::Get();
  FAutomationTestFramework::NotifyTestDataRetrieved(this_01,param_1->bIsNew,&param_1->JsonData);
  return;
}

// Initialize @ 148c05d50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FAutomationWorkerModule::Initialize(FAutomationWorkerModule *this)

{
  TSharedPtr<FMessageEndpoint,1> *pTVar1;
  atomic<int> *paVar2;
  atomic<int> aVar3;
  FName FVar4;
  FMessageEndpoint *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  IMessageBus *pIVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  atomic<int> aVar11;
  FName *pFVar12;
  FModuleManager *this_00;
  IModuleInterface *pIVar13;
  undefined8 *puVar14;
  FTaskGraphInterface *pFVar15;
  UScriptStruct *this_01;
  FTopLevelAssetPath *pFVar16;
  TSharedRef<FMessageEndpoint,1> *pTVar17;
  wchar_t *pwVar18;
  TReferenceControllerBase<1> *pTVar19;
  undefined4 local_res8 [2];
  FName local_res10;
  TRawPtrProxy<TRawMessageHandler<FAutomationWorkerFindWorkers,FAutomationWorkerModule>_>
  local_res18;
  TRawPtrProxy<TRawMessageHandler<FAutomationWorkerNextNetworkCommandReply,FAutomationWorkerModule>_>
  local_res20;
  undefined1 local_1f8 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_1e0;
  ForAnyElementType FStack_1d8;
  int local_1d0;
  ForAnyElementType local_1c8;
  undefined8 local_1c0;
  bool local_1b8;
  FName local_1b4;
  Type local_1ac;
  TSharedPtr<IMessageHandler,1> local_1a8;
  TSharedPtr<IMessageHandler,1> local_198;
  TSharedPtr<IMessageHandler,1> local_188;
  TSharedPtr<IMessageHandler,1> local_178;
  TSharedPtr<IMessageHandler,1> local_168;
  TSharedPtr<IMessageHandler,1> local_158;
  TSharedPtr<IMessageHandler,1> local_148;
  TSharedPtr<IMessageHandler,1> local_138;
  TSharedPtr<IMessageHandler,1> local_128;
  TSharedPtr<IMessageHandler,1> local_118;
  TSharedPtr<FMessageEndpoint,1> local_108;
  TRawPtrProxy<TRawMessageHandler<FAutomationWorkerPing,FAutomationWorkerModule>_> local_f8;
  TRawPtrProxy<TRawMessageHandler<FAutomationWorkerStartTestSession,FAutomationWorkerModule>_>
  local_f0;
  TRawPtrProxy<TRawMessageHandler<FAutomationWorkerStopTestSession,FAutomationWorkerModule>_>
  local_e8;
  TRawPtrProxy<TRawMessageHandler<FAutomationWorkerRequestTests,FAutomationWorkerModule>_> local_e0;
  TRawPtrProxy<TRawMessageHandler<FAutomationWorkerRunTests,FAutomationWorkerModule>_> local_d8;
  TRawPtrProxy<TRawMessageHandler<FAutomationWorkerImageComparisonResults,FAutomationWorkerModule>_>
  local_d0;
  TRawPtrProxy<TRawMessageHandler<FAutomationWorkerTestDataResponse,FAutomationWorkerModule>_>
  local_c8;
  TRawPtrProxy<TRawMessageHandler<FAutomationWorkerStopTests,FAutomationWorkerModule>_> local_c0;
  FMessageEndpoint *local_b8;
  TReferenceControllerBase<1> *local_b0;
  FDestructionSentinel local_a8;
  FName local_90;
  undefined1 local_88 [8];
  TReferenceControllerBase<1> *local_80;
  undefined1 local_78 [8];
  TReferenceControllerBase<1> *local_70;
  TSharedRef<FMessageEndpoint,1> local_68;
  FTopLevelAssetPath local_58;
  
  bVar9 = FGenericPlatformProcess::SupportsMultithreading();
  if (bVar9) {
    ::FName::FName(&local_res10,"FAutomationWorkerModule");
    pFVar12 = ::FName::FName(&local_90,"Messaging");
    FVar4 = *pFVar12;
    this_00 = FModuleManager::Get();
    pIVar13 = FModuleManager::LoadModuleChecked(this_00,FVar4);
    puVar14 = (undefined8 *)(**(code **)((longlong)*pIVar13 + 0x68))(pIVar13,local_88);
    local_1f8._0_8_ = *puVar14;
    local_1f8._8_8_ = puVar14[1];
    if ((TReferenceControllerBase<1> *)local_1f8._8_8_ != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      ((TReferenceControllerBase<1> *)local_1f8._8_8_)->WeakReferenceCount =
           (atomic<int>)
           ((int)((TReferenceControllerBase<1> *)local_1f8._8_8_)->WeakReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_80);
    local_1e0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_1d8.Data = (FScriptContainerElement *)0x0;
    local_1b4 = local_res10;
    local_1f8[0x10] = false;
    local_1d0 = 0;
    local_1c8.Data = (FScriptContainerElement *)0x0;
    local_1c0._0_4_ = 0;
    local_1c0._4_4_ = 0;
    local_1b8 = false;
    pFVar15 = FTaskGraphInterface::Get();
    local_1ac = (**(code **)((longlong)*pFVar15 + 0x10))(pFVar15,0);
    local_res18.Object = ::operator_new(0x18);
    if (local_res18.Object ==
        (TRawMessageHandler<FAutomationWorkerFindWorkers,FAutomationWorkerModule> *)0x0) {
      local_res18.Object =
           (TRawMessageHandler<FAutomationWorkerFindWorkers,FAutomationWorkerModule> *)0x0;
    }
    else {
      (local_res18.Object)->Handler = this;
      (local_res18.Object)->_padding_ =
           (longlong)
           &___7__TRawMessageHandler_UFAutomationWorkerFindWorkers__VFAutomationWorkerModule____6B_;
      (local_res18.Object)->Func = (pmf_763f175d)HandleFindWorkersMessage;
      if ((this == (FAutomationWorkerModule *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("InHandler != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MessagingCommon\\Public\\MessageHandlers.h"
                             ,0x58,L""), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    TSharedPtr<IMessageHandler,1>::
    TSharedPtr<IMessageHandler,1><TRawMessageHandler<FAutomationWorkerFindWorkers,FAutomationWorkerModule>_>
              (&local_1a8,&local_res18);
    if (((local_1c8.Data <= &local_1a8) &&
        (&local_1a8 <
         (TSharedPtr<IMessageHandler,1> *)(local_1c8.Data + (longlong)local_1c0._4_4_ * 0x10))) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    iVar10 = (int)local_1c0;
    if ((int)local_1c0 == local_1c0._4_4_) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&local_1c8,(int *)((longlong)&local_1c0 + 4));
    }
    local_1c0._0_4_ = iVar10 + 1;
    *(IMessageHandler **)&local_1c8.Data[(longlong)iVar10 * 0x10].field_0x0 = local_1a8.Object;
    *(TReferenceControllerBase<1> **)(local_1c8.Data + (longlong)iVar10 * 0x10 + 8) =
         local_1a8.SharedReferenceCount.ReferenceController;
    local_1a8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_1a8.Object = (IMessageHandler *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    local_res20.Object = ::operator_new(0x18);
    if (local_res20.Object ==
        (TRawMessageHandler<FAutomationWorkerNextNetworkCommandReply,FAutomationWorkerModule> *)0x0)
    {
      local_res20.Object =
           (TRawMessageHandler<FAutomationWorkerNextNetworkCommandReply,FAutomationWorkerModule> *)
           0x0;
    }
    else {
      (local_res20.Object)->Handler = this;
      (local_res20.Object)->_padding_ =
           (longlong)
           &
           ___7__TRawMessageHandler_UFAutomationWorkerNextNetworkCommandReply__VFAutomationWorkerModule____6B_
      ;
      (local_res20.Object)->Func = (pmf_3de1aa1f)HandleNextNetworkCommandReplyMessage;
      if ((this == (FAutomationWorkerModule *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("InHandler != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MessagingCommon\\Public\\MessageHandlers.h"
                             ,0x58,L""), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    TSharedPtr<IMessageHandler,1>::
    TSharedPtr<IMessageHandler,1><TRawMessageHandler<FAutomationWorkerNextNetworkCommandReply,FAutomationWorkerModule>_>
              (&local_198,&local_res20);
    if (((local_1c8.Data <= &local_198) &&
        (&local_198 <
         (TSharedPtr<IMessageHandler,1> *)(local_1c8.Data + (longlong)local_1c0._4_4_ * 0x10))) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    iVar10 = (int)local_1c0;
    if ((int)local_1c0 == local_1c0._4_4_) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&local_1c8,(int *)((longlong)&local_1c0 + 4));
    }
    local_1c0._0_4_ = iVar10 + 1;
    *(IMessageHandler **)&local_1c8.Data[(longlong)iVar10 * 0x10].field_0x0 = local_198.Object;
    *(TReferenceControllerBase<1> **)(local_1c8.Data + (longlong)iVar10 * 0x10 + 8) =
         local_198.SharedReferenceCount.ReferenceController;
    local_198.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_198.Object = (IMessageHandler *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    local_f8.Object = ::operator_new(0x18);
    if (local_f8.Object == (TRawMessageHandler<FAutomationWorkerPing,FAutomationWorkerModule> *)0x0)
    {
      local_f8.Object = (TRawMessageHandler<FAutomationWorkerPing,FAutomationWorkerModule> *)0x0;
    }
    else {
      (local_f8.Object)->Handler = this;
      (local_f8.Object)->_padding_ =
           (longlong)
           &___7__TRawMessageHandler_UFAutomationWorkerPing__VFAutomationWorkerModule____6B_;
      (local_f8.Object)->Func = (pmf_7de04e21)HandlePingMessage;
      if ((this == (FAutomationWorkerModule *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("InHandler != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MessagingCommon\\Public\\MessageHandlers.h"
                             ,0x58,L""), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    TSharedPtr<IMessageHandler,1>::
    TSharedPtr<IMessageHandler,1><TRawMessageHandler<FAutomationWorkerPing,FAutomationWorkerModule>_>
              (&local_188,&local_f8);
    if (((local_1c8.Data <= &local_188) &&
        (&local_188 <
         (TSharedPtr<IMessageHandler,1> *)(local_1c8.Data + (longlong)local_1c0._4_4_ * 0x10))) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    iVar10 = (int)local_1c0;
    if ((int)local_1c0 == local_1c0._4_4_) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&local_1c8,(int *)((longlong)&local_1c0 + 4));
    }
    local_1c0._0_4_ = iVar10 + 1;
    *(IMessageHandler **)&local_1c8.Data[(longlong)iVar10 * 0x10].field_0x0 = local_188.Object;
    *(TReferenceControllerBase<1> **)(local_1c8.Data + (longlong)iVar10 * 0x10 + 8) =
         local_188.SharedReferenceCount.ReferenceController;
    local_188.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_188.Object = (IMessageHandler *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    local_f0.Object = ::operator_new(0x18);
    if (local_f0.Object ==
        (TRawMessageHandler<FAutomationWorkerStartTestSession,FAutomationWorkerModule> *)0x0) {
      local_f0.Object =
           (TRawMessageHandler<FAutomationWorkerStartTestSession,FAutomationWorkerModule> *)0x0;
    }
    else {
      (local_f0.Object)->Handler = this;
      (local_f0.Object)->_padding_ =
           (longlong)
           &
           ___7__TRawMessageHandler_UFAutomationWorkerStartTestSession__VFAutomationWorkerModule____6B_
      ;
      (local_f0.Object)->Func = (pmf_ed3c5631)HandleStartTestSession;
      if ((this == (FAutomationWorkerModule *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("InHandler != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MessagingCommon\\Public\\MessageHandlers.h"
                             ,0x58,L""), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    TSharedPtr<IMessageHandler,1>::
    TSharedPtr<IMessageHandler,1><TRawMessageHandler<FAutomationWorkerStartTestSession,FAutomationWorkerModule>_>
              (&local_178,&local_f0);
    if (((local_1c8.Data <= &local_178) &&
        (&local_178 <
         (TSharedPtr<IMessageHandler,1> *)(local_1c8.Data + (longlong)local_1c0._4_4_ * 0x10))) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    iVar10 = (int)local_1c0;
    if ((int)local_1c0 == local_1c0._4_4_) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&local_1c8,(int *)((longlong)&local_1c0 + 4));
    }
    local_1c0._0_4_ = iVar10 + 1;
    *(IMessageHandler **)&local_1c8.Data[(longlong)iVar10 * 0x10].field_0x0 = local_178.Object;
    *(TReferenceControllerBase<1> **)(local_1c8.Data + (longlong)iVar10 * 0x10 + 8) =
         local_178.SharedReferenceCount.ReferenceController;
    local_178.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_178.Object = (IMessageHandler *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    local_e8.Object = ::operator_new(0x18);
    if (local_e8.Object ==
        (TRawMessageHandler<FAutomationWorkerStopTestSession,FAutomationWorkerModule> *)0x0) {
      local_e8.Object =
           (TRawMessageHandler<FAutomationWorkerStopTestSession,FAutomationWorkerModule> *)0x0;
    }
    else {
      (local_e8.Object)->Handler = this;
      (local_e8.Object)->_padding_ =
           (longlong)
           &
           ___7__TRawMessageHandler_UFAutomationWorkerStopTestSession__VFAutomationWorkerModule____6B_
      ;
      (local_e8.Object)->Func = (pmf_82f35197)HandleStopTestSession;
      if ((this == (FAutomationWorkerModule *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("InHandler != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MessagingCommon\\Public\\MessageHandlers.h"
                             ,0x58,L""), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    TSharedPtr<IMessageHandler,1>::
    TSharedPtr<IMessageHandler,1><TRawMessageHandler<FAutomationWorkerStopTestSession,FAutomationWorkerModule>_>
              (&local_168,&local_e8);
    if (((local_1c8.Data <= &local_168) &&
        (&local_168 <
         (TSharedPtr<IMessageHandler,1> *)(local_1c8.Data + (longlong)local_1c0._4_4_ * 0x10))) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    iVar10 = (int)local_1c0;
    if ((int)local_1c0 == local_1c0._4_4_) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&local_1c8,(int *)((longlong)&local_1c0 + 4));
    }
    local_1c0._0_4_ = iVar10 + 1;
    *(IMessageHandler **)&local_1c8.Data[(longlong)iVar10 * 0x10].field_0x0 = local_168.Object;
    *(TReferenceControllerBase<1> **)(local_1c8.Data + (longlong)iVar10 * 0x10 + 8) =
         local_168.SharedReferenceCount.ReferenceController;
    local_168.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_168.Object = (IMessageHandler *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    local_e0.Object = ::operator_new(0x18);
    if (local_e0.Object ==
        (TRawMessageHandler<FAutomationWorkerRequestTests,FAutomationWorkerModule> *)0x0) {
      local_e0.Object =
           (TRawMessageHandler<FAutomationWorkerRequestTests,FAutomationWorkerModule> *)0x0;
    }
    else {
      (local_e0.Object)->Handler = this;
      (local_e0.Object)->_padding_ =
           (longlong)
           &___7__TRawMessageHandler_UFAutomationWorkerRequestTests__VFAutomationWorkerModule____6B_
      ;
      (local_e0.Object)->Func = (pmf_e07719c1)HandleRequestTestsMessage;
      if ((this == (FAutomationWorkerModule *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("InHandler != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MessagingCommon\\Public\\MessageHandlers.h"
                             ,0x58,L""), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    TSharedPtr<IMessageHandler,1>::
    TSharedPtr<IMessageHandler,1><TRawMessageHandler<FAutomationWorkerRequestTests,FAutomationWorkerModule>_>
              (&local_158,&local_e0);
    if (((local_1c8.Data <= &local_158) &&
        (&local_158 <
         (TSharedPtr<IMessageHandler,1> *)(local_1c8.Data + (longlong)local_1c0._4_4_ * 0x10))) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    iVar10 = (int)local_1c0;
    if ((int)local_1c0 == local_1c0._4_4_) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&local_1c8,(int *)((longlong)&local_1c0 + 4));
    }
    local_1c0._0_4_ = iVar10 + 1;
    *(IMessageHandler **)&local_1c8.Data[(longlong)iVar10 * 0x10].field_0x0 = local_158.Object;
    *(TReferenceControllerBase<1> **)(local_1c8.Data + (longlong)iVar10 * 0x10 + 8) =
         local_158.SharedReferenceCount.ReferenceController;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_158.Object = (IMessageHandler *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    local_d8.Object = ::operator_new(0x18);
    if (local_d8.Object ==
        (TRawMessageHandler<FAutomationWorkerRunTests,FAutomationWorkerModule> *)0x0) {
      local_d8.Object = (TRawMessageHandler<FAutomationWorkerRunTests,FAutomationWorkerModule> *)0x0
      ;
    }
    else {
      (local_d8.Object)->Handler = this;
      (local_d8.Object)->_padding_ =
           (longlong)
           &___7__TRawMessageHandler_UFAutomationWorkerRunTests__VFAutomationWorkerModule____6B_;
      (local_d8.Object)->Func = (pmf_e0fdd23d)HandleRunTestsMessage;
      if ((this == (FAutomationWorkerModule *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("InHandler != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MessagingCommon\\Public\\MessageHandlers.h"
                             ,0x58,L""), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    TSharedPtr<IMessageHandler,1>::
    TSharedPtr<IMessageHandler,1><TRawMessageHandler<FAutomationWorkerRunTests,FAutomationWorkerModule>_>
              (&local_148,&local_d8);
    if (((local_1c8.Data <= &local_148) &&
        (&local_148 <
         (TSharedPtr<IMessageHandler,1> *)(local_1c8.Data + (longlong)local_1c0._4_4_ * 0x10))) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    iVar10 = (int)local_1c0;
    if ((int)local_1c0 == local_1c0._4_4_) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&local_1c8,(int *)((longlong)&local_1c0 + 4));
    }
    local_1c0._0_4_ = iVar10 + 1;
    *(IMessageHandler **)&local_1c8.Data[(longlong)iVar10 * 0x10].field_0x0 = local_148.Object;
    *(TReferenceControllerBase<1> **)(local_1c8.Data + (longlong)iVar10 * 0x10 + 8) =
         local_148.SharedReferenceCount.ReferenceController;
    local_148.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_148.Object = (IMessageHandler *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    local_d0.Object = ::operator_new(0x18);
    if (local_d0.Object ==
        (TRawMessageHandler<FAutomationWorkerImageComparisonResults,FAutomationWorkerModule> *)0x0)
    {
      local_d0.Object =
           (TRawMessageHandler<FAutomationWorkerImageComparisonResults,FAutomationWorkerModule> *)
           0x0;
    }
    else {
      (local_d0.Object)->Handler = this;
      (local_d0.Object)->_padding_ =
           (longlong)
           &
           ___7__TRawMessageHandler_UFAutomationWorkerImageComparisonResults__VFAutomationWorkerModule____6B_
      ;
      (local_d0.Object)->Func = (pmf_ada83ec1)HandleScreenShotCompared;
      if ((this == (FAutomationWorkerModule *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("InHandler != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MessagingCommon\\Public\\MessageHandlers.h"
                             ,0x58,L""), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    TSharedPtr<IMessageHandler,1>::
    TSharedPtr<IMessageHandler,1><TRawMessageHandler<FAutomationWorkerImageComparisonResults,FAutomationWorkerModule>_>
              (&local_138,&local_d0);
    if (((local_1c8.Data <= &local_138) &&
        (&local_138 <
         (TSharedPtr<IMessageHandler,1> *)(local_1c8.Data + (longlong)local_1c0._4_4_ * 0x10))) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    iVar10 = (int)local_1c0;
    if ((int)local_1c0 == local_1c0._4_4_) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&local_1c8,(int *)((longlong)&local_1c0 + 4));
    }
    local_1c0._0_4_ = iVar10 + 1;
    *(IMessageHandler **)&local_1c8.Data[(longlong)iVar10 * 0x10].field_0x0 = local_138.Object;
    *(TReferenceControllerBase<1> **)(local_1c8.Data + (longlong)iVar10 * 0x10 + 8) =
         local_138.SharedReferenceCount.ReferenceController;
    local_138.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_138.Object = (IMessageHandler *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    local_c8.Object = ::operator_new(0x18);
    if (local_c8.Object ==
        (TRawMessageHandler<FAutomationWorkerTestDataResponse,FAutomationWorkerModule> *)0x0) {
      local_c8.Object =
           (TRawMessageHandler<FAutomationWorkerTestDataResponse,FAutomationWorkerModule> *)0x0;
    }
    else {
      (local_c8.Object)->Handler = this;
      (local_c8.Object)->_padding_ =
           (longlong)
           &
           ___7__TRawMessageHandler_UFAutomationWorkerTestDataResponse__VFAutomationWorkerModule____6B_
      ;
      (local_c8.Object)->Func = (pmf_eddb2af6)HandleTestDataRetrieved;
      if ((this == (FAutomationWorkerModule *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("InHandler != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MessagingCommon\\Public\\MessageHandlers.h"
                             ,0x58,L""), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    TSharedPtr<IMessageHandler,1>::
    TSharedPtr<IMessageHandler,1><TRawMessageHandler<FAutomationWorkerTestDataResponse,FAutomationWorkerModule>_>
              (&local_128,&local_c8);
    if (((local_1c8.Data <= &local_128) &&
        (&local_128 <
         (TSharedPtr<IMessageHandler,1> *)(local_1c8.Data + (longlong)local_1c0._4_4_ * 0x10))) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    iVar10 = (int)local_1c0;
    if ((int)local_1c0 == local_1c0._4_4_) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&local_1c8,(int *)((longlong)&local_1c0 + 4));
    }
    local_1c0._0_4_ = iVar10 + 1;
    *(IMessageHandler **)&local_1c8.Data[(longlong)iVar10 * 0x10].field_0x0 = local_128.Object;
    *(TReferenceControllerBase<1> **)(local_1c8.Data + (longlong)iVar10 * 0x10 + 8) =
         local_128.SharedReferenceCount.ReferenceController;
    local_128.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_128.Object = (IMessageHandler *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    local_c0.Object = ::operator_new(0x18);
    if (local_c0.Object ==
        (TRawMessageHandler<FAutomationWorkerStopTests,FAutomationWorkerModule> *)0x0) {
      local_c0.Object =
           (TRawMessageHandler<FAutomationWorkerStopTests,FAutomationWorkerModule> *)0x0;
    }
    else {
      (local_c0.Object)->Handler = this;
      (local_c0.Object)->_padding_ =
           (longlong)
           &___7__TRawMessageHandler_UFAutomationWorkerStopTests__VFAutomationWorkerModule____6B_;
      (local_c0.Object)->Func = (pmf_4414113a)HandleStopTestsMessage;
      if ((this == (FAutomationWorkerModule *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("InHandler != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MessagingCommon\\Public\\MessageHandlers.h"
                             ,0x58,L""), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    TSharedPtr<IMessageHandler,1>::
    TSharedPtr<IMessageHandler,1><TRawMessageHandler<FAutomationWorkerStopTests,FAutomationWorkerModule>_>
              (&local_118,&local_c0);
    if (((local_1c8.Data <= &local_118) &&
        (&local_118 <
         (TSharedPtr<IMessageHandler,1> *)(local_1c8.Data + (longlong)local_1c0._4_4_ * 0x10))) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    iVar10 = (int)local_1c0;
    if ((int)local_1c0 == local_1c0._4_4_) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&local_1c8,(int *)((longlong)&local_1c0 + 4));
    }
    local_1c0._0_4_ = iVar10 + 1;
    *(IMessageHandler **)&local_1c8.Data[(longlong)iVar10 * 0x10].field_0x0 = local_118.Object;
    *(TReferenceControllerBase<1> **)(local_1c8.Data + (longlong)iVar10 * 0x10 + 8) =
         local_118.SharedReferenceCount.ReferenceController;
    local_118.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_118.Object = (IMessageHandler *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    local_1b8 = true;
    FMessageEndpointBuilder::Build((FMessageEndpointBuilder *)local_1f8,&local_108);
    pTVar1 = &this->MessageEndpoint;
    if (pTVar1 != &local_108) {
      pTVar1->Object = local_108.Object;
      local_108.Object = (FMessageEndpoint *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->MessageEndpoint).SharedReferenceCount,&local_108.SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_108.SharedReferenceCount.ReferenceController);
    DestructItems<TSharedPtr<IMessageHandler,1>,int>
              ((TSharedPtr<IMessageHandler,1> *)local_1c8.Data,(int)local_1c0);
    if ((TSharedPtr<IMessageHandler,1> *)local_1c8.Data != (TSharedPtr<IMessageHandler,1> *)0x0) {
      FMemory::Free(local_1c8.Data);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_1e0,(FWriteAccessScope *)&local_a8);
    if ((local_1d0 != 0) && (FStack_1d8.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_1d8.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1d8,0,0,0x10);
      local_1d0 = 0;
    }
    if (local_a8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a8.Accessor,&local_a8);
    }
    if (FStack_1d8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_1d8.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_1e0.AccessDetector);
    if ((TReferenceControllerBase<1> *)local_1f8._8_8_ != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = (atomic<int> *)(local_1f8._8_8_ + 0xc);
      aVar3 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)(*(longlong *)local_1f8._8_8_ + 8))(local_1f8._8_8_,1);
      }
    }
    pFVar5 = pTVar1->Object;
    if (pFVar5 != (FMessageEndpoint *)0x0) {
      local_res8[0] = 0x20001;
      this_01 = FAutomationWorkerFindWorkers::StaticStruct();
      pFVar16 = UStruct::GetStructPathName((UStruct *)this_01,&local_58);
      pTVar19 = (TReferenceControllerBase<1> *)0x0;
      if ((pFVar5->Enabled != false) &&
         (pTVar6 = (pFVar5->BusPtr).WeakReferenceCount.ReferenceController, pTVar19 = pTVar6,
         pTVar6 != (TReferenceControllerBase<1> *)0x0)) {
        aVar3 = pTVar6->SharedReferenceCount;
        do {
          pTVar19 = (TReferenceControllerBase<1> *)0x0;
          if (aVar3 == (atomic<int>)0x0) goto LAB_148c06b11;
          LOCK();
          aVar11 = pTVar6->SharedReferenceCount;
          bVar9 = aVar3 == aVar11;
          if (bVar9) {
            pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
            aVar11 = aVar3;
          }
          UNLOCK();
          aVar3 = aVar11;
        } while (!bVar9);
        pIVar7 = (pFVar5->BusPtr).Object;
        pTVar19 = pTVar6;
        if (pIVar7 != (IMessageBus *)0x0) {
          pcVar8 = *(code **)((longlong)*pIVar7 + 0x40);
          pTVar17 = TSharedFromThis<FMessageEndpoint,1>::AsShared
                              ((TSharedFromThis<FMessageEndpoint,1> *)&pFVar5->_padding_,&local_68);
          local_b8 = pTVar17->Object;
          local_b0 = (pTVar17->SharedReferenceCount).ReferenceController;
          if (local_b0 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            local_b0->SharedReferenceCount = (atomic<int>)((int)local_b0->SharedReferenceCount + 1);
            UNLOCK();
          }
          (*pcVar8)(pIVar7,local_78,&local_b8,pFVar16,local_res8);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_70);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_b0);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_68.SharedReferenceCount.ReferenceController);
        }
      }
LAB_148c06b11:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar19);
    }
    bVar9 = true;
  }
  else {
    bVar9 = false;
  }
  this->bExecuteNextNetworkCommand = bVar9;
  this->ExecutionCount = 0xffffffff;
  this->bExecutingNetworkCommandResults = false;
  this->bSendAnalytics = false;
  pwVar18 = FCommandLine::Get();
  FParse::Value(pwVar18,L"-DeviceTag=",&this->DeviceTag,true,(wchar_t **)0x0);
  return;
}

// IsTestExcluded @ 148c076f0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FAutomationWorkerModule::IsTestExcluded
          (FAutomationWorkerModule *this,FString *param_1,FString *param_2,bool *param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  UAutomationTestExcludelist *this_00;
  FString *pFVar5;
  FAutomationTestExcludelistEntry *pFVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  FName local_78;
  FString local_70;
  FString local_60;
  FString local_50;
  FString local_40;
  FString local_30;
  
  local_78.ComparisonIndex.Value = 0;
  local_78.Number = 0;
  this_00 = UAutomationTestExcludelist::Get();
  if (this_00 == (UAutomationTestExcludelist *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != Excludelist",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AutomationWorker\\Private\\AutomationWorkerModule.cpp"
                       ,0x246,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  piVar7 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar7 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      GetRHIForAutomation(&RHI);
      atexit(`FAutomationWorkerModule::IsTestExcluded'::__l2::_dynamic_atexit_destructor_for__RHI__)
      ;
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (*piVar7 < ::_TSS1) {
    _Init_thread_header(&::_TSS1);
    if (::_TSS1 == -1) {
      ::FName::FName(&Platform,"Windows");
      _Init_thread_footer(&::_TSS1);
    }
  }
  bVar3 = UAutomationTestExcludelist::IsTestExcluded
                    (this_00,param_1,&Platform,&RHI,&local_78,param_3);
  if (bVar3) {
    if (param_2 != (FString *)0x0) {
      bVar3 = local_78 != (FName)0x0;
      if (bVar3) {
        pFVar5 = ::FName::ToString(&local_78,&local_60);
      }
      else {
        pFVar5 = ::FString::FString(&local_50,L"unknown reason");
      }
      if (param_2 != pFVar5) {
        pFVar1 = (param_2->Data).AllocatorInstance.Data;
        if (pFVar1 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar1);
        }
        (param_2->Data).AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
        (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (param_2->Data).ArrayNum = (pFVar5->Data).ArrayNum;
        (param_2->Data).ArrayMax = (pFVar5->Data).ArrayMax;
        (pFVar5->Data).ArrayNum = 0;
        (pFVar5->Data).ArrayMax = 0;
      }
      if (bVar3) {
        if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_60.Data.AllocatorInstance.Data);
        }
      }
      if ((!bVar3) && (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_50.Data.AllocatorInstance.Data);
      }
      ::FString::AppendChars(param_2,L" [config]",9);
      pFVar6 = UAutomationTestExcludelist::GetExcludeTestEntry(this_00,param_1);
      if (pFVar6 != (FAutomationTestExcludelistEntry *)0x0) {
        if (*(int *)&(pFVar6->Platforms).Elements.field_0x8 !=
            *(int *)&(pFVar6->Platforms).Elements.field_0x34) {
          ::FString::AppendChars(param_2,L" [",2);
          pFVar5 = ::FName::ToString(&Platform,&local_40);
          iVar9 = (pFVar5->Data).ArrayNum;
          iVar8 = iVar9 + -1;
          if (iVar9 == 0) {
            iVar8 = 0;
          }
          ::FString::AppendChars(param_2,(wchar_t *)(pFVar5->Data).AllocatorInstance.Data,iVar8);
          if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_40.Data.AllocatorInstance.Data);
          }
          ::FString::AppendChars(param_2,L"]",1);
        }
        UAutomationTestExcludelist::GetConfigFilenameForEntry(this_00,&local_70,pFVar6,&Platform);
        if (1 < local_70.Data.ArrayNum) {
          pFVar5 = FPaths::ConvertRelativePathToFull(&local_30,&local_70);
          if (&local_70 != pFVar5) {
            if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_70.Data.AllocatorInstance.Data);
            }
            local_70.Data.AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
            (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_70.Data.ArrayNum = (pFVar5->Data).ArrayNum;
            local_70.Data.ArrayMax = (pFVar5->Data).ArrayMax;
            (pFVar5->Data).ArrayNum = 0;
            (pFVar5->Data).ArrayMax = 0;
          }
          if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_30.Data.AllocatorInstance.Data);
          }
          FPaths::MakePlatformFilename(&local_70);
          ::FString::AppendChars(param_2,L" [",2);
          iVar9 = local_70.Data.ArrayNum + -1;
          if (local_70.Data.ArrayNum == 0) {
            iVar9 = 0;
          }
          ::FString::AppendChars(param_2,(wchar_t *)local_70.Data.AllocatorInstance.Data,iVar9);
          ::FString::AppendChars(param_2,L"(1)]",4);
        }
        if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_70.Data.AllocatorInstance.Data);
        }
      }
    }
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}

// RecordPerformanceAnalytics @ 148c07e50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAutomationWorkerModule::RecordPerformanceAnalytics
          (FAutomationWorkerModule *this,FAutomationPerformanceSnapshot *param_1)

{
  FAutomationAnalytics::FireEvent_FPSCapture(param_1);
  return;
}

// ReportNetworkCommandComplete @ 148c07e60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FAutomationWorkerModule::ReportNetworkCommandComplete(FAutomationWorkerModule *this)

{
  uint uVar1;
  longlong *plVar2;
  char cVar3;
  UScriptStruct *pUVar4;
  FAutomationWorkerMessageBase *pFVar5;
  FReadAccessScope local_28;
  
  if (GIsAutomationTesting) {
    pUVar4 = FAutomationWorkerRequestNextNetworkCommand::StaticStruct();
    pFVar5 = FMemory::Malloc(0x14,0);
    uVar1 = this->ExecutionCount;
    (pFVar5->InstanceId).A = 0;
    (pFVar5->InstanceId).B = 0;
    (pFVar5->InstanceId).C = 0;
    (pFVar5->InstanceId).D = 0;
    pFVar5[1].InstanceId.A = uVar1;
    SendMessage(this,pFVar5,pUVar4,&this->TestRequesterAddress);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->StopTestEvent,
               &local_28);
    if ((*(int *)&(this->StopTestEvent).field_0x10 != 0) &&
       (plVar2 = *(longlong **)&(this->StopTestEvent).field_0x8, plVar2 != (longlong *)0x0)) {
      cVar3 = (**(code **)(*plVar2 + 0x38))();
      if (cVar3 != '\0') {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_28);
        this->bExecuteNextNetworkCommand = true;
        return;
      }
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
  }
  return;
}

// ReportTestComplete @ 148c07f20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FAutomationWorkerModule::ReportTestComplete(FAutomationWorkerModule *this)

{
  FAutomationExecutionEntry *pFVar1;
  TArray<FAutomationExecutionEntry,TSizedDefaultAllocator<32>_> *pTVar2;
  longlong *plVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  ForAnyElementType FVar7;
  bool bVar8;
  char cVar9;
  int iVar10;
  FAutomationTestFramework *pFVar11;
  FString *pFVar12;
  FAutomationWorkerRunTestsReply *pFVar13;
  UScriptStruct *pUVar14;
  longlong *plVar15;
  wchar_t *pwVar16;
  longlong lVar17;
  ForAnyElementType *pFVar18;
  FScriptContainerElement *pFVar19;
  int iVar20;
  FAutomationExecutionEntry *pFVar21;
  ForAnyElementType local_108;
  undefined8 local_100;
  ForAnyElementType local_f8;
  int local_f0;
  int local_ec;
  FAutomationTestExecutionInfo local_e8;
  FScriptContainerElement *local_78;
  int local_70;
  int local_6c;
  FReadAccessScope local_68;
  FReadAccessScope local_50;
  FString local_38;
  
  plVar15 = (longlong *)0x0;
  if (GIsAutomationTesting) {
    pFVar11 = FAutomationTestFramework::Get();
    FAutomationTestFramework::ExecuteLatentCommands(pFVar11);
    local_e8.bSuccessful = false;
    local_e8.Duration = 0.0;
    local_e8.AnalyticsItems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_e8.AnalyticsItems.ArrayNum = 0;
    local_e8.AnalyticsItems.ArrayMax = 0;
    local_e8.TelemetryItems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_e8.TelemetryItems.ArrayNum = 0;
    local_e8.TelemetryItems.ArrayMax = 0;
    local_e8.TelemetryStorage.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_e8.TelemetryStorage.Data.ArrayNum = 0;
    local_e8.TelemetryStorage.Data.ArrayMax = 0;
    local_e8.Entries.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_e8.Entries.ArrayNum = 0;
    local_e8.Entries.ArrayMax = 0;
    local_e8.Errors = 0;
    local_e8.Warnings = 0;
    local_e8.ContextStack.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_e8.ContextStack.ArrayNum = 0;
    local_e8.ContextStack.ArrayMax = 0;
    pFVar11 = FAutomationTestFramework::Get();
    bVar8 = FAutomationTestFramework::StopTest(pFVar11,&local_e8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->StopTestEvent,
               &local_68);
    if (((*(int *)&(this->StopTestEvent).field_0x10 == 0) ||
        (plVar3 = *(longlong **)&(this->StopTestEvent).field_0x8, plVar3 == (longlong *)0x0)) ||
       (cVar9 = (**(code **)(*plVar3 + 0x38))(), cVar9 == '\0')) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_68);
      pFVar13 = FMemory::Malloc(0x48,0);
      *(undefined4 *)&pFVar13->field_0x41 = 0;
      *(undefined2 *)&pFVar13->field_0x45 = 0;
      pFVar13->field_0x47 = 0;
      pFVar13->_padding_ = 0;
      pFVar13->_padding_ = 0;
      (pFVar13->TestName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar13->TestName).Data.ArrayNum = 0;
      (pFVar13->TestName).Data.ArrayMax = 0;
      (pFVar13->Entries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar13->Entries).ArrayNum = 0;
      (pFVar13->Entries).ArrayMax = 0;
      pFVar13->WarningTotal = 0;
      pFVar13->ErrorTotal = 0;
      pFVar13->Duration = 0.0;
      pFVar13->ExecutionCount = 0;
      pFVar13->State = NotRun;
      iVar10 = (this->TestName).Data.ArrayNum;
      iVar20 = iVar10 + -1;
      if (iVar10 == 0) {
        iVar20 = 0;
      }
      ::FString::AssignRange
                (&pFVar13->TestName,(wchar_t *)(this->TestName).Data.AllocatorInstance.Data,iVar20);
      FVar7.Data = local_e8.Entries.AllocatorInstance.Data;
      pFVar13->ExecutionCount = this->ExecutionCount;
      pFVar13->State = bVar8 + Fail;
      pFVar13->Duration = (float)local_e8.Duration;
      iVar10 = local_e8.Entries.ArrayNum;
      if ((this->bPruneLogsOnSuccess == false) || (!bVar8)) {
        local_f8.Data = (FScriptContainerElement *)0x0;
        local_f0 = local_e8.Entries.ArrayNum;
        if (local_e8.Entries.ArrayNum == 0) {
          local_ec = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x58,8,local_e8.Entries.ArrayNum,0,&local_f8,local_e8.Entries.ArrayNum,
                     &local_ec);
          ConstructItems<FAutomationExecutionEntry,FAutomationExecutionEntry,int>
                    (local_f8.Data,(FAutomationExecutionEntry *)FVar7.Data,iVar10);
        }
        pFVar18 = &local_f8;
        bVar6 = false;
        bVar8 = true;
      }
      else {
        local_108.Data = (FScriptContainerElement *)0x0;
        local_100 = 0;
        pFVar21 = (FAutomationExecutionEntry *)
                  (local_e8.Entries.AllocatorInstance.Data +
                  (longlong)local_e8.Entries.ArrayNum * 0x58);
        if ((FAutomationExecutionEntry *)local_e8.Entries.AllocatorInstance.Data != pFVar21) {
          pFVar19 = local_e8.Entries.AllocatorInstance.Data + 0x18;
          do {
            if (*(int *)(pFVar19 + 8) == 0) {
              pwVar16 = L"";
            }
            else {
              pwVar16 = *(wchar_t **)pFVar19;
            }
            iVar10 = FGenericPlatformStricmp::Stricmp(pwVar16,L"log");
            if ((iVar10 != 0) || (((FAutomationEvent *)(pFVar19 + -0x18))->Type != Info)) {
              pFVar1 = (FAutomationExecutionEntry *)(pFVar19 + -0x18);
              if ((local_108.Data <= pFVar1) &&
                 ((pFVar1 < (FAutomationExecutionEntry *)
                            (local_108.Data + (longlong)local_100._4_4_ * 0x58) &&
                  (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar8)))) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              iVar10 = (int)local_100;
              if ((int)local_100 == local_100._4_4_) {
                iVar10 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x858,&local_108,(int *)((longlong)&local_100 + 4));
              }
              FVar7.Data = local_108.Data;
              local_100 = CONCAT44(local_100._4_4_,iVar10 + 1);
              lVar17 = (longlong)iVar10 * 0x58;
              local_108.Data[lVar17].field_0x0 = (pFVar1->Event).Type;
              ::FString::FString((FString *)(local_108.Data + lVar17 + 8),
                                 (FString *)(pFVar19 + -0x10));
              ::FString::FString((FString *)(FVar7.Data + lVar17 + 0x18),(FString *)pFVar19);
              uVar5 = *(undefined8 *)(pFVar19 + 0x18);
              *(undefined8 *)(FVar7.Data + lVar17 + 0x28) = *(undefined8 *)(pFVar19 + 0x10);
              *(undefined8 *)(FVar7.Data + lVar17 + 0x28 + 8) = uVar5;
              ::FString::FString((FString *)(FVar7.Data + lVar17 + 0x38),(FString *)(pFVar19 + 0x20)
                                );
              *(undefined4 *)(FVar7.Data + lVar17 + 0x48) = *(undefined4 *)(pFVar19 + 0x30);
              *(undefined8 *)(FVar7.Data + lVar17 + 0x50) = *(undefined8 *)(pFVar19 + 0x38);
            }
            pFVar1 = (FAutomationExecutionEntry *)(pFVar19 + 0x40);
            pFVar19 = pFVar19 + 0x58;
          } while (pFVar1 != pFVar21);
        }
        pFVar18 = &local_108;
        bVar6 = true;
        bVar8 = false;
      }
      pTVar2 = &pFVar13->Entries;
      if (pTVar2 != (TArray<FAutomationExecutionEntry,TSizedDefaultAllocator<32>_> *)pFVar18) {
        DestructItems<FAutomationExecutionEntry,int>
                  ((FAutomationExecutionEntry *)(pTVar2->AllocatorInstance).Data,
                   (pFVar13->Entries).ArrayNum);
        iVar10 = *(int *)&pFVar18[1].Data;
        iVar20 = (pFVar13->Entries).ArrayMax;
        pFVar21 = (FAutomationExecutionEntry *)pFVar18->Data;
        (pFVar13->Entries).ArrayNum = iVar10;
        if ((iVar10 == 0) && (iVar20 == 0)) {
          (pFVar13->Entries).ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x58,8,iVar10,iVar20,&pTVar2->AllocatorInstance,iVar10,
                     &(pFVar13->Entries).ArrayMax);
          ConstructItems<FAutomationExecutionEntry,FAutomationExecutionEntry,int>
                    ((pTVar2->AllocatorInstance).Data,pFVar21,iVar10);
        }
      }
      if ((bVar8) &&
         (DestructItems<FAutomationExecutionEntry,int>
                    ((FAutomationExecutionEntry *)local_f8.Data,local_f0),
         (FAutomationExecutionEntry *)local_f8.Data != (FAutomationExecutionEntry *)0x0)) {
        FMemory::Free(local_f8.Data);
      }
      if (bVar6) {
        DestructItems<FAutomationExecutionEntry,int>
                  ((FAutomationExecutionEntry *)local_108.Data,(int)local_100);
        if ((FAutomationExecutionEntry *)local_108.Data != (FAutomationExecutionEntry *)0x0) {
          FMemory::Free(local_108.Data);
        }
      }
      pFVar13->WarningTotal = local_e8.Warnings;
      pFVar13->ErrorTotal = local_e8.Errors;
      if (this->bSendAnalytics != false) {
        if (FAutomationAnalytics::bIsInitialized == false) {
          FAutomationAnalytics::Initialize();
        }
        FAutomationAnalytics::FireEvent_AutomationTestResults(pFVar13,&this->BeautifiedTestName);
        SendAnalyticsEvents(this,&local_e8.AnalyticsItems);
      }
      if (0 < local_e8.TelemetryItems.ArrayNum) {
        HandleTelemetryData(this,&local_e8.TelemetryStorage,&this->FullTestPath,
                            &local_e8.TelemetryItems);
      }
      pUVar14 = FAutomationWorkerRunTestsReply::StaticStruct();
      SendMessage(this,(FAutomationWorkerMessageBase *)pFVar13,pUVar14,&this->TestRequesterAddress);
    }
    else {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_68);
      pFVar12 = ::FString::FString(&local_38,&this->TestName);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->StopTestEvent,
                 &local_50);
      if (*(int *)&(this->StopTestEvent).field_0x10 != 0) {
        plVar15 = *(longlong **)&(this->StopTestEvent).field_0x8;
      }
      pcVar4 = *(code **)(*plVar15 + 0x60);
      local_78 = (pFVar12->Data).AllocatorInstance.Data;
      (pFVar12->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_70 = (pFVar12->Data).ArrayNum;
      local_6c = (pFVar12->Data).ArrayMax;
      (pFVar12->Data).ArrayNum = 0;
      (pFVar12->Data).ArrayMax = 0;
      (*pcVar4)(plVar15,bVar8,&local_78,&local_e8);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_50);
      pFVar19 = (pFVar12->Data).AllocatorInstance.Data;
      if (pFVar19 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar19);
      }
    }
    (this->TestRequesterAddress).UniqueId.C = 0;
    (this->TestRequesterAddress).UniqueId.D = 0;
    (this->TestRequesterAddress).UniqueId.A = 0;
    (this->TestRequesterAddress).UniqueId.B = 0;
    this->ExecutionCount = 0xffffffff;
    ::FString::Empty(&this->TestName);
    ::FString::Empty(&this->FullTestPath);
    ::FString::Empty(&this->BeautifiedTestName);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->StopTestEvent);
    FAutomationTestExecutionInfo::Clear(&local_e8);
    DestructItems<FString,int>
              ((FString *)local_e8.ContextStack.AllocatorInstance.Data,
               local_e8.ContextStack.ArrayNum);
    if (local_e8.ContextStack.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.ContextStack.AllocatorInstance.Data);
    }
    DestructItems<FAutomationExecutionEntry,int>
              ((FAutomationExecutionEntry *)local_e8.Entries.AllocatorInstance.Data,
               local_e8.Entries.ArrayNum);
    if ((FAutomationExecutionEntry *)local_e8.Entries.AllocatorInstance.Data !=
        (FAutomationExecutionEntry *)0x0) {
      FMemory::Free(local_e8.Entries.AllocatorInstance.Data);
    }
    if (local_e8.TelemetryStorage.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.TelemetryStorage.Data.AllocatorInstance.Data);
    }
    DestructItems<FAutomationTelemetryData,int>
              ((FAutomationTelemetryData *)local_e8.TelemetryItems.AllocatorInstance.Data,
               local_e8.TelemetryItems.ArrayNum);
    if ((FAutomationTelemetryData *)local_e8.TelemetryItems.AllocatorInstance.Data !=
        (FAutomationTelemetryData *)0x0) {
      FMemory::Free(local_e8.TelemetryItems.AllocatorInstance.Data);
    }
    DestructItems<FString,int>
              ((FString *)local_e8.AnalyticsItems.AllocatorInstance.Data,
               local_e8.AnalyticsItems.ArrayNum);
    if (local_e8.AnalyticsItems.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.AnalyticsItems.AllocatorInstance.Data);
    }
  }
  return;
}

// SendAnalyticsEvents @ 148c08510

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FAutomationWorkerModule::SendAnalyticsEvents
          (FAutomationWorkerModule *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  void *_Src;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  FString local_e8;
  FAutomationPerformanceSnapshot local_d8;
  
  iVar9 = param_1->ArrayNum;
  uVar8 = 0;
  uVar11 = uVar8;
  if (0 < iVar9) {
    do {
      uVar7 = (uint)uVar8;
      uVar4 = 0;
      if ((int)uVar7 < iVar9) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (param_1->AllocatorInstance).Data;
      local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_e8.Data.ArrayNum = *(int *)(pFVar1 + uVar11 + 8);
      lVar6 = (longlong)local_e8.Data.ArrayNum;
      _Src = *(void **)(pFVar1 + uVar11);
      if (local_e8.Data.ArrayNum == 0) {
        local_e8.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_e8.Data.ArrayNum,0,(ForAnyElementType *)&local_e8,
                   local_e8.Data.ArrayNum,&local_e8.Data.ArrayMax);
        memcpy(local_e8.Data.AllocatorInstance.Data,_Src,lVar6 * 2);
      }
      bVar3 = ::FString::EndsWith(&local_e8,L",PERF",5,IgnoreCase);
      if (bVar3) {
        iVar9 = local_e8.Data.ArrayNum + -6;
        iVar10 = local_e8.Data.ArrayNum + -1;
        if (local_e8.Data.ArrayNum == 0) {
          iVar9 = -5;
          iVar10 = 0;
        }
        iVar5 = iVar10;
        if (iVar9 < iVar10) {
          iVar5 = iVar9;
        }
        iVar9 = 0;
        if (0 < iVar5) {
          iVar9 = iVar5;
        }
        ::FString::RemoveAt(&local_e8,iVar9,iVar10 - iVar9,No);
        local_d8.Changelist.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_d8.Changelist.Data.ArrayNum = 0;
        local_d8.Changelist.Data.ArrayMax = 0;
        local_d8.BuildConfiguration.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_d8.BuildConfiguration.Data.ArrayNum = 0;
        local_d8.BuildConfiguration.Data.ArrayMax = 0;
        local_d8.MapName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_d8.MapName.Data.ArrayNum = 0;
        local_d8.MapName.Data.ArrayMax = 0;
        local_d8.SequenceName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_d8.SequenceName.Data.ArrayNum = 0;
        local_d8.SequenceName.Data.ArrayMax = 0;
        local_d8.AverageFPS.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_d8.AverageFPS.Data.ArrayNum = 0;
        local_d8.AverageFPS.Data.ArrayMax = 0;
        local_d8.AverageFrameTime.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_d8.AverageFrameTime.Data.ArrayNum = 0;
        local_d8.AverageFrameTime.Data.ArrayMax = 0;
        local_d8.AverageGameThreadTime.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_d8.AverageGameThreadTime.Data.ArrayNum = 0;
        local_d8.AverageGameThreadTime.Data.ArrayMax = 0;
        local_d8.AverageRenderThreadTime.Data.AllocatorInstance.Data =
             (FScriptContainerElement *)0x0;
        local_d8.AverageRenderThreadTime.Data.ArrayNum = 0;
        local_d8.AverageRenderThreadTime.Data.ArrayMax = 0;
        local_d8.AverageGPUTime.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_d8.AverageGPUTime.Data.ArrayNum = 0;
        local_d8.AverageGPUTime.Data.ArrayMax = 0;
        local_d8.PercentOfFramesAtLeast30FPS.Data.AllocatorInstance.Data =
             (FScriptContainerElement *)0x0;
        local_d8.PercentOfFramesAtLeast30FPS.Data.ArrayNum = 0;
        local_d8.PercentOfFramesAtLeast30FPS.Data.ArrayMax = 0;
        local_d8.PercentOfFramesAtLeast60FPS.Data.AllocatorInstance.Data =
             (FScriptContainerElement *)0x0;
        local_d8.PercentOfFramesAtLeast60FPS.Data.ArrayNum = 0;
        local_d8.PercentOfFramesAtLeast60FPS.Data.ArrayMax = 0;
        FAutomationPerformanceSnapshot::FromCommaDelimitedString(&local_d8,&local_e8);
        FAutomationAnalytics::FireEvent_FPSCapture(&local_d8);
        if (local_d8.PercentOfFramesAtLeast60FPS.Data.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8.PercentOfFramesAtLeast60FPS.Data.AllocatorInstance.Data);
        }
        if (local_d8.PercentOfFramesAtLeast30FPS.Data.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8.PercentOfFramesAtLeast30FPS.Data.AllocatorInstance.Data);
        }
        if (local_d8.AverageGPUTime.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8.AverageGPUTime.Data.AllocatorInstance.Data);
        }
        if (local_d8.AverageRenderThreadTime.Data.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8.AverageRenderThreadTime.Data.AllocatorInstance.Data);
        }
        if (local_d8.AverageGameThreadTime.Data.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8.AverageGameThreadTime.Data.AllocatorInstance.Data);
        }
        if (local_d8.AverageFrameTime.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
        {
          FMemory::Free(local_d8.AverageFrameTime.Data.AllocatorInstance.Data);
        }
        if (local_d8.AverageFPS.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8.AverageFPS.Data.AllocatorInstance.Data);
        }
        if (local_d8.SequenceName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8.SequenceName.Data.AllocatorInstance.Data);
        }
        if (local_d8.MapName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8.MapName.Data.AllocatorInstance.Data);
        }
        if (local_d8.BuildConfiguration.Data.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8.BuildConfiguration.Data.AllocatorInstance.Data);
        }
        if (local_d8.Changelist.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8.Changelist.Data.AllocatorInstance.Data);
        }
      }
      if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Data.AllocatorInstance.Data);
      }
      iVar9 = param_1->ArrayNum;
      uVar8 = (ulonglong)(uVar7 + 1);
      uVar11 = uVar11 + 0x10;
    } while ((int)(uVar7 + 1) < iVar9);
  }
  return;
}

// SendMessage @ 148c087c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAutomationWorkerModule::SendMessage
          (FAutomationWorkerModule *this,FAutomationWorkerMessageBase *param_1,
          UScriptStruct *param_2,FMessageAddress *param_3)

{
  FMessageEndpoint *this_00;
  code *pcVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ForAnyElementType _Src;
  bool bVar6;
  int iVar7;
  FGuid *pFVar8;
  longlong lVar9;
  FDateTime local_res8;
  FTimespan local_res10;
  ForAnyElementType local_68;
  undefined8 local_60;
  TArray<FMessageAddress,TSizedDefaultAllocator<32>_> local_58;
  TSharedPtr<IMessageAttachment,1> local_48;
  FGuid local_38;
  
  if (param_1 == (FAutomationWorkerMessageBase *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != Message",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AutomationWorker\\Private\\AutomationWorkerModule.cpp"
                       ,0x108,L"");
    if (bVar6) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pFVar8 = FApp::GetInstanceId(&local_38);
  uVar3 = pFVar8->B;
  uVar4 = pFVar8->C;
  uVar5 = pFVar8->D;
  (param_1->InstanceId).A = pFVar8->A;
  (param_1->InstanceId).B = uVar3;
  (param_1->InstanceId).C = uVar4;
  (param_1->InstanceId).D = uVar5;
  if ((this->MessageEndpoint).Object == (FMessageEndpoint *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_00 = (this->MessageEndpoint).Object;
  local_res10.Ticks = 0;
  local_res8.Ticks = 0x2bca2875f4373fff;
  local_68.Data = (FScriptContainerElement *)0x0;
  local_60 = 0;
  iVar7 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x410,&local_68,(int *)((longlong)&local_60 + 4));
  _Src.Data = local_68.Data;
  uVar2 = *(undefined8 *)&(param_3->UniqueId).C;
  local_58.ArrayNum = iVar7 + 1;
  local_60 = CONCAT44(local_60._4_4_,local_58.ArrayNum);
  *(undefined8 *)(local_68.Data + (longlong)iVar7 * 0x10) = *(undefined8 *)&param_3->UniqueId;
  *(undefined8 *)(local_68.Data + (longlong)iVar7 * 0x10 + 8) = uVar2;
  lVar9 = (longlong)local_58.ArrayNum;
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_58.ArrayNum == 0) {
    local_58.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,local_58.ArrayNum,0,&local_58.AllocatorInstance,local_58.ArrayNum,
               &local_58.ArrayMax);
    memcpy(local_58.AllocatorInstance.Data,_Src.Data,lVar9 << 4);
  }
  local_48.Object = (IMessageAttachment *)0x0;
  local_48.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FMessageEndpoint::Send(this_00,param_1,param_2,None,&local_48,&local_58,&local_res10,&local_res8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data);
  }
  return;
}

// SendTests @ 148c08980

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAutomationWorkerModule::SendTests(FAutomationWorkerModule *this,FMessageAddress *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FAutomationWorkerMessageBase *pFVar4;
  FAutomationWorkerSingleTestReply *pFVar5;
  UScriptStruct *pUVar6;
  uint uVar7;
  FLLMScope local_res8 [2];
  FMemScope local_res18 [2];
  FString local_e8;
  FAutomationWorkerSingleTestReply local_d8;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name250,L"AutomationTest/Worker");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_res8,LLMScope_Name250,false,None,Default,true);
  FMemScope::FMemScope(local_res18,&LLMScope_Name250,true);
  pFVar4 = FMemory::Malloc(0x20,0);
  uVar7 = 0;
  (pFVar4->InstanceId).A = 0;
  (pFVar4->InstanceId).B = 0;
  (pFVar4->InstanceId).C = 0;
  (pFVar4->InstanceId).D = 0;
  pFVar4[1].InstanceId.A = 0;
  pFVar4[1].InstanceId.B = 0;
  pFVar4[1].InstanceId.C = 0;
  pFVar4[1].InstanceId.D = 0;
  if (0 < (this->TestInfo).ArrayNum) {
    do {
      uVar3 = 0;
      if ((int)uVar7 < (this->TestInfo).ArrayNum) {
        uVar3 = ~uVar7 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar5 = FAutomationWorkerSingleTestReply::FAutomationWorkerSingleTestReply
                         (&local_d8,
                          (FAutomationTestInfo *)
                          ((this->TestInfo).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x98));
      uVar3 = pFVar4[1].InstanceId.C;
      if (uVar3 == pFVar4[1].InstanceId.D) {
        uVar3 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x8a0,(ForAnyElementType *)(pFVar4 + 1),(int *)&pFVar4[1].InstanceId.D);
      }
      pFVar4[1].InstanceId.C = uVar3 + 1;
      FAutomationWorkerSingleTestReply::FAutomationWorkerSingleTestReply
                ((FAutomationWorkerSingleTestReply *)
                 ((longlong)(int)uVar3 * 0xa0 + *(longlong *)&pFVar4[1].InstanceId),pFVar5);
      if (local_d8.TestTags.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.TestTags.Data.AllocatorInstance.Data);
      }
      if (local_d8.OpenCommand.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.OpenCommand.Data.AllocatorInstance.Data);
      }
      if (local_d8.AssetPath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.AssetPath.Data.AllocatorInstance.Data);
      }
      if (local_d8.SourceFile.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.SourceFile.Data.AllocatorInstance.Data);
      }
      if (local_d8.TestParameter.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.TestParameter.Data.AllocatorInstance.Data);
      }
      if (local_d8.TestName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.TestName.Data.AllocatorInstance.Data);
      }
      if (local_d8.FullTestPath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.FullTestPath.Data.AllocatorInstance.Data);
      }
      if (local_d8.DisplayName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.DisplayName.Data.AllocatorInstance.Data);
      }
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < (this->TestInfo).ArrayNum);
  }
  if (4 < (byte)LogAutomationWorker._0_1_) {
    local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_e8.Data.ArrayNum = 0;
    local_e8.Data.ArrayMax = 0;
    FGuid::AppendString(&param_1->UniqueId,&local_e8,Digits);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAutomationWorker);
    if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data.AllocatorInstance.Data);
    }
  }
  pUVar6 = FAutomationWorkerRequestTestsReplyComplete::StaticStruct();
  SendMessage(this,pFVar4,pUVar6,param_1);
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// SendWorkerFound @ 148c08c70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAutomationWorkerModule::SendWorkerFound(FAutomationWorkerModule *this,FMessageAddress *param_1)

{
  FString *pFVar1;
  FString *pFVar2;
  uint *puVar3;
  uint *puVar4;
  FScriptContainerElement *_Src;
  uint uVar5;
  FAutomationWorkerMessageBase *pFVar6;
  FString *pFVar7;
  wchar_t *pwVar8;
  FString *pFVar9;
  UScriptStruct *pUVar10;
  int iVar11;
  ForAnyElementType FVar12;
  int iVar13;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  
  pFVar6 = FMemory::Malloc(0xb8,0);
  pFVar6[1].InstanceId.A = 0;
  pFVar6[1].InstanceId.B = 0;
  pFVar6[1].InstanceId.C = 0;
  pFVar6[1].InstanceId.D = 0;
  pFVar6[2].InstanceId.A = 0;
  pFVar6[2].InstanceId.B = 0;
  (pFVar6->InstanceId).A = 0;
  (pFVar6->InstanceId).B = 0;
  (pFVar6->InstanceId).C = 0;
  (pFVar6->InstanceId).D = 0;
  pFVar9 = (FString *)(pFVar6 + 2);
  pFVar6[2].InstanceId.C = 0;
  pFVar6[2].InstanceId.D = 0;
  pFVar1 = (FString *)(pFVar6 + 3);
  *(uint *)&(pFVar1->Data).AllocatorInstance.Data = 0;
  *(uint *)((longlong)&(pFVar1->Data).AllocatorInstance.Data + 4) = 0;
  pFVar2 = (FString *)(pFVar6 + 6);
  pFVar6[3].InstanceId.C = 0;
  pFVar6[3].InstanceId.D = 0;
  puVar3 = &pFVar6[8].InstanceId.C;
  pFVar6[4].InstanceId.A = 0;
  pFVar6[4].InstanceId.B = 0;
  puVar4 = &pFVar6[10].InstanceId.C;
  pFVar6[4].InstanceId.C = 0;
  pFVar6[4].InstanceId.D = 0;
  pFVar6[5].InstanceId.A = 0;
  pFVar6[5].InstanceId.B = 0;
  pFVar6[5].InstanceId.C = 0;
  pFVar6[5].InstanceId.D = 0;
  *(uint *)&(pFVar2->Data).AllocatorInstance.Data = 0;
  *(uint *)((longlong)&(pFVar2->Data).AllocatorInstance.Data + 4) = 0;
  pFVar6[6].InstanceId.C = 0;
  pFVar6[6].InstanceId.D = 0;
  pFVar6[7].InstanceId.A = 0;
  pFVar6[7].InstanceId.B = 0;
  pFVar6[7].InstanceId.C = 0;
  pFVar6[7].InstanceId.D = 0;
  pFVar6[8].InstanceId.A = 0;
  pFVar6[8].InstanceId.C = 0;
  pFVar6[8].InstanceId.D = 0;
  pFVar6[9].InstanceId.A = 0;
  pFVar6[9].InstanceId.B = 0;
  pFVar6[9].InstanceId.C = 0;
  pFVar6[9].InstanceId.D = 0;
  pFVar6[10].InstanceId.A = 0;
  pFVar6[10].InstanceId.B = 0;
  pFVar6[10].InstanceId.C = 0;
  pFVar6[10].InstanceId.D = 0;
  pFVar6[0xb].InstanceId.A = 0;
  pFVar6[0xb].InstanceId.B = 0;
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.Data.ArrayNum = 0;
  local_88.Data.ArrayMax = 0;
  local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.Data.ArrayNum = 0;
  local_98.Data.ArrayMax = 0;
  FWindowsPlatformMisc::GetOSVersions(&local_88,&local_98);
  ::FString::ConcatFC(&local_c8,&local_88,L" ");
  ::FString::ConcatFF(&local_68,&local_c8,&local_98);
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  pFVar7 = FWindowsPlatformMisc::GetCPUBrand(&local_c8);
  ::FString::TrimStart(pFVar7,&local_78);
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  iVar11 = (this->DeviceTag).Data.ArrayNum;
  if (iVar11 < 2) {
    pwVar8 = FWindowsPlatformProcess::ComputerName();
    pFVar7 = ::FString::FString(&local_58,pwVar8);
    FVar12.Data = (pFVar7->Data).AllocatorInstance.Data;
    (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar11 = (pFVar7->Data).ArrayNum;
    (pFVar7->Data).ArrayNum = 0;
    (pFVar7->Data).ArrayMax = 0;
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  else {
    _Src = (this->DeviceTag).Data.AllocatorInstance.Data;
    local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c8.Data.ArrayNum = iVar11;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar11,0,(ForAnyElementType *)&local_c8,iVar11,&local_c8.Data.ArrayMax);
    memcpy(local_c8.Data.AllocatorInstance.Data,_Src,(longlong)iVar11 * 2);
    FVar12.Data = local_c8.Data.AllocatorInstance.Data;
    iVar11 = local_c8.Data.ArrayNum;
  }
  iVar13 = iVar11 + -1;
  if (iVar11 == 0) {
    iVar13 = 0;
  }
  ::FString::AssignRange((FString *)(pFVar6 + 1),(wchar_t *)FVar12.Data,iVar13);
  FWindowsPlatformProcess::GetCurrentProcessId();
  FWindowsPlatformProcess::ComputerName();
  ::FString::PrintfImpl(&local_b8,L"%s-%i");
  if (pFVar9 != &local_b8) {
    if (*(void **)&pFVar9->Data != (void *)0x0) {
      FMemory::Free(*(void **)&pFVar9->Data);
    }
    *(FScriptContainerElement **)&pFVar9->Data = local_b8.Data.AllocatorInstance.Data;
    pFVar6[2].InstanceId.C = local_b8.Data.ArrayNum;
    pFVar6[2].InstanceId.D = local_b8.Data.ArrayMax;
    local_b8.Data.ArrayNum = 0;
    local_b8.Data.ArrayMax = 0;
    local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_a8,"Windows");
  if (pFVar1 != &local_a8) {
    if (*(void **)&pFVar1->Data != (void *)0x0) {
      FMemory::Free(*(void **)&pFVar1->Data);
    }
    *(FScriptContainerElement **)&pFVar1->Data = local_a8.Data.AllocatorInstance.Data;
    pFVar6[3].InstanceId.C = local_a8.Data.ArrayNum;
    pFVar6[3].InstanceId.D = local_a8.Data.ArrayMax;
    local_a8.Data.ArrayNum = 0;
    local_a8.Data.ArrayMax = 0;
    local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  *(FGuid *)&pFVar6[9].InstanceId.C = FApp::SessionId;
  iVar11 = local_68.Data.ArrayNum + -1;
  if (local_68.Data.ArrayNum == 0) {
    iVar11 = 0;
  }
  ::FString::AssignRange
            ((FString *)(pFVar6 + 4),(wchar_t *)local_68.Data.AllocatorInstance.Data,iVar11);
  pwVar8 = FGenericPlatformMisc::GetDefaultDeviceProfileName();
  ::FString::operator=((FString *)(pFVar6 + 5),pwVar8);
  pFVar9 = FWindowsPlatformMisc::GetPrimaryGPUBrand(&local_58);
  if (pFVar2 != pFVar9) {
    if (*(void **)&pFVar2->Data != (void *)0x0) {
      FMemory::Free(*(void **)&pFVar2->Data);
    }
    *(FScriptContainerElement **)&pFVar2->Data = (pFVar9->Data).AllocatorInstance.Data;
    (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar6[6].InstanceId.C = (pFVar9->Data).ArrayNum;
    pFVar6[6].InstanceId.D = (pFVar9->Data).ArrayMax;
    (pFVar9->Data).ArrayNum = 0;
    (pFVar9->Data).ArrayMax = 0;
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  iVar11 = local_78.Data.ArrayNum + -1;
  if (local_78.Data.ArrayNum == 0) {
    iVar11 = 0;
  }
  ::FString::AssignRange
            ((FString *)(pFVar6 + 7),(wchar_t *)local_78.Data.AllocatorInstance.Data,iVar11);
  uVar5 = FGenericPlatformMemory::GetPhysicalGBRam();
  pFVar6[8].InstanceId.A = uVar5;
  pFVar9 = FApp::GetGraphicsRHI(&local_58);
  if ((FString *)puVar4 != pFVar9) {
    if (*(void **)puVar4 != (void *)0x0) {
      FMemory::Free(*(void **)puVar4);
    }
    *(FScriptContainerElement **)puVar4 = (pFVar9->Data).AllocatorInstance.Data;
    (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar6[0xb].InstanceId.A = (pFVar9->Data).ArrayNum;
    pFVar6[0xb].InstanceId.B = (pFVar9->Data).ArrayMax;
    (pFVar9->Data).ArrayNum = 0;
    (pFVar9->Data).ArrayMax = 0;
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  pFVar9 = AutomationCommon::GetRenderDetailsString(&local_58);
  if ((FString *)puVar3 != pFVar9) {
    if (*(void **)puVar3 != (void *)0x0) {
      FMemory::Free(*(void **)puVar3);
    }
    *(FScriptContainerElement **)puVar3 = (pFVar9->Data).AllocatorInstance.Data;
    (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar6[9].InstanceId.A = (pFVar9->Data).ArrayNum;
    pFVar6[9].InstanceId.B = (pFVar9->Data).ArrayMax;
    (pFVar9->Data).ArrayNum = 0;
    (pFVar9->Data).ArrayMax = 0;
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  pUVar10 = FAutomationWorkerFindWorkersResponse::StaticStruct();
  SendMessage(this,pFVar6,pUVar10,param_1);
  if (FVar12.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar12.Data);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  return;
}

// TriggerSectionNotifications @ 148c095a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FAutomationWorkerModule::TriggerSectionNotifications(FAutomationWorkerModule *this)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  FAutomationTestFramework *pFVar10;
  int iVar11;
  FScriptContainerElement *pFVar12;
  wchar_t *pwVar13;
  longlong lVar14;
  ForAnyElementType FVar15;
  int iVar16;
  int iVar17;
  undefined1 local_res8 [8];
  ForAnyElementType local_48;
  undefined8 local_40;
  FString local_38;
  FString local_28;
  
  if ((this->FullTestPath).Data.ArrayNum < 2) {
    pFVar1 = &this->ActiveSection;
    if (1 < (this->ActiveSection).Data.ArrayNum) {
      pFVar10 = FAutomationTestFramework::Get();
      bVar7 = FAutomationTestFramework::IsAnyOnLeavingTestSectionBound(pFVar10);
      if (bVar7) {
        pFVar10 = FAutomationTestFramework::Get();
        FAutomationTestFramework::TriggerOnLeavingTestSection(pFVar10,pFVar1);
        while( true ) {
          pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
          iVar9 = (this->ActiveSection).Data.ArrayNum;
          pFVar12 = pFVar2 + (longlong)iVar9 * 2;
          do {
            if (pFVar12 == pFVar2) goto LAB_148c0961f;
            pFVar12 = pFVar12 + -2;
          } while (*(short *)pFVar12 != 0x2e);
          iVar8 = (int)((longlong)pFVar12 - (longlong)pFVar2 >> 1);
          if (iVar8 == -1) break;
          iVar16 = iVar9 + -1;
          if (iVar9 == 0) {
            iVar16 = 0;
          }
          iVar9 = iVar16;
          if (iVar8 < iVar16) {
            iVar9 = iVar8;
          }
          iVar8 = 0;
          if (0 < iVar9) {
            iVar8 = iVar9;
          }
          ::FString::RemoveAt(pFVar1,iVar8,iVar16 - iVar8,Default);
          pFVar10 = FAutomationTestFramework::Get();
          FAutomationTestFramework::TriggerOnLeavingTestSection(pFVar10,pFVar1);
        }
      }
LAB_148c0961f:
      ::FString::Empty(pFVar1);
    }
  }
  else {
    pFVar10 = FAutomationTestFramework::Get();
    bVar7 = FAutomationTestFramework::IsAnyOnEnteringTestSectionBound(pFVar10);
    if (!bVar7) {
      pFVar10 = FAutomationTestFramework::Get();
      bVar7 = FAutomationTestFramework::IsAnyOnLeavingTestSectionBound(pFVar10);
      if (!bVar7) {
        return;
      }
    }
    local_38.Data.ArrayNum = (this->FullTestPath).Data.ArrayNum;
    lVar14 = (longlong)local_38.Data.ArrayNum;
    pFVar12 = (this->FullTestPath).Data.AllocatorInstance.Data;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.Data = (FScriptContainerElement *)0x0;
    local_40 = 0;
    if (local_38.Data.ArrayNum == 0) {
      local_38.Data.ArrayMax = 0;
      iVar9 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_38.Data.ArrayNum,0,(ForAnyElementType *)&local_38,local_38.Data.ArrayNum,
                 &local_38.Data.ArrayMax);
      memcpy(local_38.Data.AllocatorInstance.Data,pFVar12,lVar14 * 2);
      iVar9 = local_38.Data.ArrayNum;
    }
    while( true ) {
      pFVar12 = local_38.Data.AllocatorInstance.Data + (longlong)iVar9 * 2;
      iVar16 = 0;
      iVar8 = 0;
      do {
        if (pFVar12 == local_38.Data.AllocatorInstance.Data) goto LAB_148c098ab;
        pFVar12 = pFVar12 + -2;
      } while (*(wchar_t *)pFVar12 != L'.');
      iVar11 = (int)((longlong)pFVar12 - (longlong)local_38.Data.AllocatorInstance.Data >> 1);
      if (iVar11 == -1) break;
      iVar17 = iVar9 + -1;
      if (iVar9 == 0) {
        iVar17 = iVar8;
      }
      iVar9 = iVar17;
      if (iVar11 < iVar17) {
        iVar9 = iVar11;
      }
      iVar11 = iVar8;
      if (0 < iVar9) {
        iVar11 = iVar9;
      }
      ::FString::RemoveAt(&local_38,iVar11,iVar17 - iVar11,Default);
      if (1 < (this->ActiveSection).Data.ArrayNum) {
        iVar9 = local_38.Data.ArrayNum + -1;
        FVar15.Data = local_38.Data.AllocatorInstance.Data;
        if (local_38.Data.ArrayNum == 0) {
          iVar9 = iVar16;
          FVar15.Data = (FScriptContainerElement *)L"";
        }
        bVar7 = ::FString::StartsWith(&this->ActiveSection,(wchar_t *)FVar15.Data,iVar9,IgnoreCase);
        if (bVar7) break;
      }
      if (((local_48.Data <= (FScriptContainerElement *)&local_38) &&
          ((FScriptContainerElement *)&local_38 < local_48.Data + (longlong)local_40._4_4_ * 0x10))
         && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar9 = (int)local_40;
      if ((int)local_40 == local_40._4_4_) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_48,(int *)((longlong)&local_40 + 4));
      }
      FVar15.Data = local_38.Data.AllocatorInstance.Data;
      pFVar12 = local_48.Data + (longlong)iVar9 * 0x10;
      local_40 = CONCAT44(local_40._4_4_,iVar9 + 1);
      *(FScriptContainerElement **)pFVar12 = (FScriptContainerElement *)0x0;
      lVar14 = (longlong)local_38.Data.ArrayNum;
      *(int *)(pFVar12 + 8) = local_38.Data.ArrayNum;
      if (local_38.Data.ArrayNum == 0) {
        *(int *)(pFVar12 + 0xc) = 0;
        iVar9 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_38.Data.ArrayNum,0,(ForAnyElementType *)pFVar12,local_38.Data.ArrayNum,
                   (int *)(pFVar12 + 0xc));
                    /* WARNING: Load size is inaccurate */
        memcpy(*pFVar12,FVar15.Data,lVar14 * 2);
        iVar9 = local_38.Data.ArrayNum;
      }
    }
LAB_148c098ab:
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (0 < (int)local_40) {
      pFVar1 = &this->ActiveSection;
      if (1 < (this->ActiveSection).Data.ArrayNum) {
        pFVar10 = FAutomationTestFramework::Get();
        bVar7 = FAutomationTestFramework::IsAnyOnLeavingTestSectionBound(pFVar10);
        if (bVar7) {
          if (((int)local_40 < 1) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          ::FString::FString(&local_28,(FString *)local_48.Data);
          while( true ) {
            iVar9 = (this->ActiveSection).Data.ArrayNum;
            if (iVar9 == 0) {
              pwVar13 = L"";
              iVar9 = iVar16;
            }
            else {
              pwVar13 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
              iVar9 = iVar9 + -1;
            }
            bVar7 = ::FString::StartsWith(&local_28,pwVar13,iVar9,IgnoreCase);
            if (bVar7) break;
            pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
            pFVar12 = pFVar2 + (longlong)(this->ActiveSection).Data.ArrayNum * 2;
            do {
              if (pFVar12 == pFVar2) goto LAB_148c09995;
              pFVar12 = pFVar12 + -2;
            } while (*(short *)pFVar12 != 0x2e);
            iVar9 = (int)((longlong)pFVar12 - (longlong)pFVar2 >> 1);
            if (iVar9 == -1) break;
            pFVar10 = FAutomationTestFramework::Get();
            FAutomationTestFramework::TriggerOnLeavingTestSection(pFVar10,pFVar1);
            iVar11 = (this->ActiveSection).Data.ArrayNum;
            iVar17 = iVar11 + -1;
            if (iVar11 == 0) {
              iVar17 = iVar16;
            }
            iVar11 = iVar17;
            if (iVar9 < iVar17) {
              iVar11 = iVar9;
            }
            iVar9 = iVar8;
            if (0 < iVar11) {
              iVar9 = iVar11;
            }
            ::FString::RemoveAt(pFVar1,iVar9,iVar17 - iVar9,Default);
          }
LAB_148c09995:
          if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_28.Data.AllocatorInstance.Data);
          }
        }
      }
      if (((int)local_40 < 1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar9 = *(int *)(local_48.Data + 8) + -1;
      if (*(int *)(local_48.Data + 8) == 0) {
        iVar9 = iVar16;
      }
      ::FString::AssignRange(pFVar1,*(wchar_t **)local_48.Data,iVar9);
      pFVar10 = FAutomationTestFramework::Get();
      bVar7 = FAutomationTestFramework::IsAnyOnEnteringTestSectionBound(pFVar10);
      if (bVar7) {
        iVar9 = (int)local_40;
        lVar14 = (longlong)((int)local_40 / 2);
        if (0 < (int)local_40 / 2) {
          pFVar12 = local_48.Data + (longlong)((int)local_40 + -1) * 0x10;
          FVar15.Data = local_48.Data;
          do {
            uVar4 = *(undefined8 *)(pFVar12 + 8);
            uVar5 = *(undefined8 *)FVar15.Data;
            uVar6 = *(undefined8 *)(FVar15.Data + 8);
            *(undefined8 *)FVar15.Data = *(undefined8 *)pFVar12;
            *(undefined8 *)(FVar15.Data + 8) = uVar4;
            FVar15.Data = FVar15.Data + 0x10;
            *(undefined8 *)pFVar12 = uVar5;
            *(undefined8 *)(pFVar12 + 8) = uVar6;
            lVar14 = lVar14 + -1;
            pFVar12 = pFVar12 + -0x10;
          } while (lVar14 != 0);
        }
        pFVar12 = local_48.Data + (longlong)(int)local_40 * 0x10;
        FVar15.Data = local_48.Data;
        while( true ) {
          if ((int)local_40 != iVar9) {
            `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_res8);
          }
          if (FVar15.Data == pFVar12) break;
          pFVar10 = FAutomationTestFramework::Get();
          FAutomationTestFramework::TriggerOnEnteringTestSection(pFVar10,(FString *)FVar15.Data);
          FVar15.Data = FVar15.Data + 0x10;
        }
      }
    }
    DestructItems<FString,int>((FString *)local_48.Data,(int)local_40);
    if (local_48.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data);
    }
  }
  return;
}

