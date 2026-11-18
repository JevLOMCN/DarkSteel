// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AutomationController
// Functions: 89

// FAutomationControllerManager @ 148c52bf0

/* WARNING: Enum "Type": Some values do not have unique names */

FAutomationControllerManager * __thiscall
FAutomationControllerManager::FAutomationControllerManager(FAutomationControllerManager *this)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  TNode *pTVar4;
  TNode *pTVar5;
  UClass *this_00;
  UAutomationControllerSettings *pUVar6;
  wchar_t *pwVar7;
  FString *pFVar8;
  FString *pFVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  int iVar15;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_a8;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_98;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_88;
  FString local_78;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_68;
  FString local_58;
  FString local_48;
  
  pTVar5 = (TNode *)0x0;
  (this->ActiveSessionId).A = 0;
  (this->ActiveSessionId).B = 0;
  (this->ActiveSessionId).C = 0;
  (this->ActiveSessionId).D = 0;
  this->CheckTestIntervalSeconds = 1.0;
  this->GameInstanceLostTimerSeconds = 300.0;
  (this->DeviceClusterManager).Clusters.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeviceClusterManager).Clusters.ArrayNum = 0;
  (this->DeviceClusterManager).Clusters.ArrayMax = 0;
  (this->MessageEndpoint).Object = (FMessageEndpoint *)0x0;
  (this->MessageEndpoint).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined ***)this = &___7FAutomationControllerManager__6B_;
  this->DeviceGroupFlags = 0;
  this->bDeveloperDirectoryIncluded = false;
  this->bHasErrors = false;
  this->bHasWarning = false;
  this->bHasLogs = false;
  this->bTestResultsAvailable = false;
  this->RequestedTestFlags = None;
  this->ExecutionCount = 0;
  this->LastTimeUpdateTicked = 0.0;
  this->RefreshTestResponses = 0;
  FAutomationReportManager::FAutomationReportManager(&this->ReportManager);
  (this->TestRunningArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TestRunningArray).ArrayNum = 0;
  (this->TestRunningArray).ArrayMax = 0;
  *(undefined8 *)&(this->StartedTestSessionWorkerInstanceIdSet).Elements = 0;
  *(undefined8 *)&(this->StartedTestSessionWorkerInstanceIdSet).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->StartedTestSessionWorkerInstanceIdSet).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->StartedTestSessionWorkerInstanceIdSet).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->StartedTestSessionWorkerInstanceIdSet).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->StartedTestSessionWorkerInstanceIdSet).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->StartedTestSessionWorkerInstanceIdSet).Elements.field_0x34 = 0;
  (this->StartedTestSessionWorkerInstanceIdSet).Hash.SecondaryData =
       (ForElementType<FSetElementId>)0x0;
  (this->StartedTestSessionWorkerInstanceIdSet).HashSize = 0;
  this->NumTestPasses = 0;
  this->CurrentTestPass = 0;
  this->bSendAnalytics = false;
  this->bKeepPIEOpen = false;
  this->bSortTestsByFailure = false;
  this->bPruneLogsOnSuccess = true;
  (this->JsonTestPassResults).Devices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->JsonTestPassResults).Devices.ArrayNum = 0;
  (this->JsonTestPassResults).Devices.ArrayMax = 0;
  (this->JsonTestPassResults).ReportCreatedOn.Ticks = 0;
  (this->JsonTestPassResults).ComparisonExportDirectory.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->JsonTestPassResults).ComparisonExportDirectory.Data.ArrayNum = 0;
  (this->JsonTestPassResults).ComparisonExportDirectory.Data.ArrayMax = 0;
  (this->JsonTestPassResults).Tests.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->JsonTestPassResults).Tests.ArrayNum = 0;
  (this->JsonTestPassResults).Tests.ArrayMax = 0;
  *(undefined8 *)&(this->JsonTestPassResults).TestsMapIndex = 0;
  *(undefined8 *)&(this->JsonTestPassResults).TestsMapIndex.field_0x8 = 0;
  *(undefined8 *)&(this->JsonTestPassResults).TestsMapIndex.field_0x20 = 0;
  (this->JsonTestPassResults).Succeeded = 0;
  (this->JsonTestPassResults).SucceededWithWarnings = 0;
  (this->JsonTestPassResults).Failed = 0;
  (this->JsonTestPassResults).NotRun = 0;
  (this->JsonTestPassResults).InProcess = 0;
  (this->JsonTestPassResults).TotalDuration = 0.0;
  (this->JsonTestPassResults).ComparisonExported = false;
  *(undefined4 *)&(this->JsonTestPassResults).TestsMapIndex.field_0x28 = 0;
  *(undefined4 *)&(this->JsonTestPassResults).TestsMapIndex.field_0x2c = 0x80;
  *(undefined4 *)&(this->JsonTestPassResults).TestsMapIndex.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->JsonTestPassResults).TestsMapIndex.field_0x34 = 0;
  *(undefined8 *)&(this->JsonTestPassResults).TestsMapIndex.field_0x40 = 0;
  *(undefined4 *)&(this->JsonTestPassResults).TestsMapIndex.field_0x48 = 0;
  (this->JsonTestPassResults).IsRequired = false;
  (this->ScreenshotManager).Object = (IScreenShotManager *)0x0;
  (this->ScreenshotManager).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar4 = ::operator_new(0x18);
  if (pTVar4 != (TNode *)0x0) {
    pTVar4->NextNode = (TNode *)0x0;
    (pTVar4->Item).Object = (FComparisonEntry *)0x0;
    (pTVar4->Item).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pTVar4->NextNode = (TNode *)0x0;
    (pTVar4->Item).Object = (FComparisonEntry *)0x0;
    (pTVar4->Item).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pTVar5 = pTVar4;
  }
  (this->ComparisonQueue).Tail = pTVar5;
  pFVar9 = &this->ReportExportPath;
  (this->ComparisonQueue).Head = pTVar5;
  pFVar8 = &this->ReportURLPath;
  iVar15 = 2;
  (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar1 = &this->DeveloperReportUrl;
  (this->ReportExportPath).Data.ArrayNum = 0;
  (this->ReportExportPath).Data.ArrayMax = 0;
  (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReportURLPath).Data.ArrayNum = 0;
  (this->ReportURLPath).Data.ArrayMax = 0;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeveloperReportUrl).Data.ArrayNum = 0;
  (this->DeveloperReportUrl).Data.ArrayMax = 0;
  *(undefined8 *)&this->ShutdownDelegate = 0;
  *(undefined8 *)&(this->ShutdownDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ShutdownDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->ShutdownDelegate).field_0x18 = 2;
  *(undefined8 *)&this->TestsAvailableDelegate = 0;
  *(undefined8 *)&(this->TestsAvailableDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->TestsAvailableDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->TestsAvailableDelegate).field_0x18 = 2;
  *(undefined8 *)&this->TestsRefreshedDelegate = 0;
  *(undefined8 *)&(this->TestsRefreshedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->TestsRefreshedDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->TestsRefreshedDelegate).field_0x18 = 2;
  *(undefined8 *)&this->ControllerResetDelegate = 0;
  *(undefined8 *)&(this->ControllerResetDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ControllerResetDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->ControllerResetDelegate).field_0x18 = 2;
  *(undefined8 *)&this->TestsCompleteDelegate = 0;
  *(undefined8 *)&(this->TestsCompleteDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->TestsCompleteDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->TestsCompleteDelegate).field_0x18 = 2;
  this_00 = UAutomationControllerSettings::StaticClass();
  pUVar6 = UClass::GetDefaultObject<UAutomationControllerSettings>(this_00);
  if (0.0 < pUVar6->CheckTestIntervalSeconds) {
    this->CheckTestIntervalSeconds = pUVar6->CheckTestIntervalSeconds;
  }
  if (0.0 < pUVar6->GameInstanceLostTimerSeconds) {
    this->GameInstanceLostTimerSeconds = pUVar6->GameInstanceLostTimerSeconds;
  }
  this->bKeepPIEOpen = pUVar6->bKeepPIEOpen;
  this->bSortTestsByFailure = pUVar6->bSortTestsByFailure;
  this->bPruneLogsOnSuccess = pUVar6->bPruneLogsOnSuccess;
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.Data.ArrayNum = 0;
  local_78.Data.ArrayMax = 0;
  pwVar7 = FCommandLine::Get();
  FParse::Value(pwVar7,L"ReportOutputPath=",pFVar9,false,(wchar_t **)0x0);
  pwVar7 = FCommandLine::Get();
  FParse::Value(pwVar7,L"DisplayReportOutputPath=",pFVar8,false,(wchar_t **)0x0);
  pwVar7 = FCommandLine::Get();
  FParse::Value(pwVar7,L"DeveloperReportOutputPath=",&local_78,false,(wchar_t **)0x0);
  iVar12 = (this->ReportExportPath).Data.ArrayNum;
  iVar10 = iVar12 + -1;
  if (iVar12 == 0) {
    iVar10 = 0;
  }
  if ((iVar10 != 0) && (2 < (byte)LogAutomationController._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAutomationController);
  }
  iVar12 = (this->ReportURLPath).Data.ArrayNum;
  iVar11 = 0;
  iVar10 = iVar12 + -1;
  if (iVar12 == 0) {
    iVar10 = iVar11;
  }
  if ((iVar10 != 0) && (2 < (byte)LogAutomationController._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAutomationController);
  }
  iVar12 = local_78.Data.ArrayNum + -1;
  if (local_78.Data.ArrayNum == 0) {
    iVar12 = iVar11;
  }
  if ((iVar12 != 0) && (2 < (byte)LogAutomationController._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAutomationController);
  }
  pwVar7 = FCommandLine::Get();
  FParse::Value(pwVar7,L"ReportExportPath=",pFVar9,false,(wchar_t **)0x0);
  pwVar7 = FCommandLine::Get();
  FParse::Value(pwVar7,L"ReportURL=",pFVar8,false,(wchar_t **)0x0);
  iVar12 = local_78.Data.ArrayNum + -1;
  if (local_78.Data.ArrayNum == 0) {
    iVar12 = iVar11;
  }
  if (iVar12 < 1) {
    pwVar7 = FCommandLine::Get();
    bVar3 = FParse::Param(pwVar7,L"DeveloperReport");
    if (!bVar3) {
      bVar3 = false;
      goto LAB_148c53004;
    }
  }
  bVar3 = true;
LAB_148c53004:
  iVar12 = (this->ReportExportPath).Data.ArrayNum;
  iVar10 = iVar12 + -1;
  if (iVar12 == 0) {
    iVar10 = iVar11;
  }
  if ((iVar10 != 0) && (bVar3)) {
    pwVar7 = FWindowsPlatformProcess::UserName(true);
    pFVar8 = ::FString::FString(&local_58,pwVar7);
    pFVar8 = ::FString::ToLower(pFVar8,(FString *)&local_68);
    local_a8.ArrayNum = (this->ReportExportPath).Data.ArrayNum;
    lVar13 = (longlong)local_a8.ArrayNum;
    local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_a8.ArrayNum == 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,5,0,&local_a8.AllocatorInstance,0,&local_a8.ArrayMax);
    }
    else {
      pFVar2 = (pFVar9->Data).AllocatorInstance.Data;
      uVar14 = local_a8.ArrayNum + 4;
      if ((int)uVar14 < local_a8.ArrayNum) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
      }
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar14,0,&local_a8.AllocatorInstance,local_a8.ArrayNum,&local_a8.ArrayMax);
      memcpy(local_a8.AllocatorInstance.Data,pFVar2,lVar13 * 2);
    }
    ::FString::PathAppend((FString *)&local_a8,L"dev",3);
    iVar12 = (pFVar8->Data).ArrayNum;
    iVar10 = iVar12 + -1;
    if (iVar12 == 0) {
      iVar10 = iVar11;
    }
    if ((local_a8.ArrayNum != 0) || (iVar12 = 2, iVar10 == -1)) {
      iVar12 = 1;
    }
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>(&local_98,&local_a8,iVar10 + iVar12);
    ::FString::PathAppend
              ((FString *)&local_98,(wchar_t *)(pFVar8->Data).AllocatorInstance.Data,iVar10);
    if (&pFVar9->Data != &local_98) {
      pFVar2 = (pFVar9->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (pFVar9->Data).AllocatorInstance.Data = local_98.AllocatorInstance.Data;
      (this->ReportExportPath).Data.ArrayNum = local_98.ArrayNum;
      (this->ReportExportPath).Data.ArrayMax = local_98.ArrayMax;
      local_98.ArrayNum = 0;
      local_98.ArrayMax = 0;
      local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.AllocatorInstance.Data);
    }
    if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.AllocatorInstance.Data);
    }
    if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  iVar12 = (this->ReportURLPath).Data.ArrayNum;
  iVar10 = iVar12 + -1;
  if (iVar12 == 0) {
    iVar10 = iVar11;
  }
  if ((iVar10 != 0) && (bVar3)) {
    pwVar7 = FWindowsPlatformProcess::UserName(true);
    pFVar9 = ::FString::FString(&local_48,pwVar7);
    pFVar9 = ::FString::ToLower(pFVar9,&local_58);
    local_a8.ArrayNum = (this->ReportURLPath).Data.ArrayNum;
    lVar13 = (longlong)local_a8.ArrayNum;
    local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_a8.ArrayNum == 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,5,0,&local_a8.AllocatorInstance,0,&local_a8.ArrayMax);
    }
    else {
      pFVar2 = (this->ReportURLPath).Data.AllocatorInstance.Data;
      uVar14 = local_a8.ArrayNum + 4;
      if ((int)uVar14 < local_a8.ArrayNum) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
      }
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar14,0,&local_a8.AllocatorInstance,local_a8.ArrayNum,&local_a8.ArrayMax);
      memcpy(local_a8.AllocatorInstance.Data,pFVar2,lVar13 * 2);
    }
    ::FString::PathAppend((FString *)&local_a8,L"dev",3);
    iVar12 = (pFVar9->Data).ArrayNum;
    iVar10 = iVar12 + -1;
    if (iVar12 == 0) {
      iVar10 = 0;
    }
    if ((local_a8.ArrayNum != 0) || (iVar10 == -1)) {
      iVar15 = 1;
    }
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>(&local_68,&local_a8,iVar10 + iVar15);
    ::FString::PathAppend
              ((FString *)&local_68,(wchar_t *)(pFVar9->Data).AllocatorInstance.Data,iVar10);
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
              (&local_88,&local_68,0xc - (uint)(local_68.ArrayNum != 0));
    ::FString::PathAppend((FString *)&local_88,L"index.html",10);
    if (&pFVar1->Data != &local_88) {
      pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (pFVar1->Data).AllocatorInstance.Data = local_88.AllocatorInstance.Data;
      (this->DeveloperReportUrl).Data.ArrayNum = local_88.ArrayNum;
      (this->DeveloperReportUrl).Data.ArrayMax = local_88.ArrayMax;
      local_88.ArrayNum = 0;
      local_88.ArrayMax = 0;
      local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.AllocatorInstance.Data);
    }
    if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.AllocatorInstance.Data);
    }
    if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  pwVar7 = FCommandLine::Get();
  bVar3 = FParse::Param(pwVar7,L"ResumeRunTest");
  this->bResumeRunTest = bVar3;
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  return this;
}

// ~FAutomationControllerManager @ 148c53df0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAutomationControllerManager::~FAutomationControllerManager(FAutomationControllerManager *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  TNode *pTVar3;
  ForElementType<FSetElementId> FVar4;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->TestsCompleteDelegate).field_0x8,
             *(int *)&(this->TestsCompleteDelegate).field_0x10);
  pvVar1 = *(void **)&(this->TestsCompleteDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->TestsCompleteDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->ControllerResetDelegate).field_0x8,
             *(int *)&(this->ControllerResetDelegate).field_0x10);
  pvVar1 = *(void **)&(this->ControllerResetDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ControllerResetDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->TestsRefreshedDelegate).field_0x8,
             *(int *)&(this->TestsRefreshedDelegate).field_0x10);
  pvVar1 = *(void **)&(this->TestsRefreshedDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->TestsRefreshedDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->TestsAvailableDelegate).field_0x8,
             *(int *)&(this->TestsAvailableDelegate).field_0x10);
  pvVar1 = *(void **)&(this->TestsAvailableDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->TestsAvailableDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->ShutdownDelegate).field_0x8,*(int *)&(this->ShutdownDelegate).field_0x10);
  pvVar1 = *(void **)&(this->ShutdownDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ShutdownDelegate);
  pFVar2 = (this->DeveloperReportUrl).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ReportURLPath).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ReportExportPath).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pTVar3 = (this->ComparisonQueue).Tail;
  while (pTVar3 != (TNode *)0x0) {
    (this->ComparisonQueue).Tail = pTVar3->NextNode;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pTVar3->Item).SharedReferenceCount.ReferenceController);
    ::operator_delete(pTVar3,0x18);
    pTVar3 = (this->ComparisonQueue).Tail;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ScreenshotManager).SharedReferenceCount.ReferenceController);
  FAutomatedTestPassResults::~FAutomatedTestPassResults(&this->JsonTestPassResults);
  (this->StartedTestSessionWorkerInstanceIdSet).HashSize = 0;
  FVar4 = (this->StartedTestSessionWorkerInstanceIdSet).Hash.SecondaryData;
  if (FVar4 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar4);
  }
  TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->StartedTestSessionWorkerInstanceIdSet).Elements);
  pFVar2 = (this->TestRunningArray).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ReportManager).ReportRoot.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MessageEndpoint).SharedReferenceCount.ReferenceController);
  DestructItems<FAutomationDeviceClusterManager::FDeviceCluster,int>
            ((FDeviceCluster *)(this->DeviceClusterManager).Clusters.AllocatorInstance.Data,
             (this->DeviceClusterManager).Clusters.ArrayNum);
  pFVar2 = (this->DeviceClusterManager).Clusters.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined ***)this = &___7IAutomationControllerManager__6B_;
  return;
}

// operator() @ 148c54840

bool __thiscall
`FAutomationControllerManager::ProcessResults'::__l31::<lambda_1>::operator()
          (void *this,FAutomatedTestResult *param_1,FAutomatedTestResult *param_2)

{
  int iVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  
  if (0 < param_1->Errors) {
    if (param_2->Errors < 1) {
      return true;
    }
    pwVar3 = L"";
    if ((param_2->FullTestPath).Data.ArrayNum == 0) {
      pwVar2 = L"";
    }
    else {
      pwVar2 = (wchar_t *)(param_2->FullTestPath).Data.AllocatorInstance.Data;
    }
    if ((param_1->FullTestPath).Data.ArrayNum != 0) {
      pwVar3 = (wchar_t *)(param_1->FullTestPath).Data.AllocatorInstance.Data;
    }
    iVar1 = FGenericPlatformStricmp::Stricmp(pwVar3,pwVar2);
    return SUB41((uint)iVar1 >> 0x1f,0);
  }
  if (param_2->Errors < 1) {
    if (param_1->State == Skipped) {
      if (param_2->State != Skipped) {
        return true;
      }
      pwVar3 = L"";
      if ((param_2->FullTestPath).Data.ArrayNum == 0) {
        pwVar2 = L"";
      }
      else {
        pwVar2 = (wchar_t *)(param_2->FullTestPath).Data.AllocatorInstance.Data;
      }
      if ((param_1->FullTestPath).Data.ArrayNum != 0) {
        pwVar3 = (wchar_t *)(param_1->FullTestPath).Data.AllocatorInstance.Data;
      }
      iVar1 = FGenericPlatformStricmp::Stricmp(pwVar3,pwVar2);
      return SUB41((uint)iVar1 >> 0x1f,0);
    }
    if (param_2->State != Skipped) {
      if (0 < param_1->Warnings) {
        if (param_2->Warnings < 1) {
          return true;
        }
        pwVar3 = L"";
        if ((param_2->FullTestPath).Data.ArrayNum == 0) {
          pwVar2 = L"";
        }
        else {
          pwVar2 = (wchar_t *)(param_2->FullTestPath).Data.AllocatorInstance.Data;
        }
        if ((param_1->FullTestPath).Data.ArrayNum != 0) {
          pwVar3 = (wchar_t *)(param_1->FullTestPath).Data.AllocatorInstance.Data;
        }
        iVar1 = FGenericPlatformStricmp::Stricmp(pwVar3,pwVar2);
        return SUB41((uint)iVar1 >> 0x1f,0);
      }
      if (param_2->Warnings < 1) {
        pwVar3 = L"";
        if ((param_2->FullTestPath).Data.ArrayNum == 0) {
          pwVar2 = L"";
        }
        else {
          pwVar2 = (wchar_t *)(param_2->FullTestPath).Data.AllocatorInstance.Data;
        }
        if ((param_1->FullTestPath).Data.ArrayNum != 0) {
          pwVar3 = (wchar_t *)(param_1->FullTestPath).Data.AllocatorInstance.Data;
        }
        iVar1 = FGenericPlatformStricmp::Stricmp(pwVar3,pwVar2);
        return SUB41((uint)iVar1 >> 0x1f,0);
      }
    }
  }
  return false;
}

// operator() @ 148c54960

void __thiscall
`FAutomationControllerManager::CollectTestResults'::__l15::<lambda_1>::operator()
          (void *this,int param_1)

{
  int iVar1;
  longlong *plVar2;
  FScriptContainerElement *_Src;
  undefined8 *puVar3;
  void *_Src_00;
  LPCRITICAL_SECTION p_Var4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  FString *pFVar9;
  wchar_t *pwVar10;
  longlong lVar11;
  FString *pFVar12;
  uint uVar13;
  FString local_a8;
  FString local_98;
  FString *local_88;
  FString *local_80;
  FString local_78;
  FString local_68;
  FString local_58;
  char local_48 [8];
  wchar_t *local_40;
  int local_38;
  
  plVar2 = *(longlong **)this;
  uVar13 = 0;
  if (param_1 < (int)plVar2[1]) {
    uVar13 = (uint)~param_1 >> 0x1f;
  }
  if (uVar13 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar12 = (FString *)((longlong)param_1 * 0x10 + *plVar2);
  pFVar9 = TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
           ::FindChecked((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                          *)(*(longlong *)((longlong)this + 8) + 0x78),pFVar12);
  local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.Data.ArrayNum = (pFVar9->Data).ArrayNum;
  lVar11 = (longlong)local_a8.Data.ArrayNum;
  _Src = (pFVar9->Data).AllocatorInstance.Data;
  if (local_a8.Data.ArrayNum == 0) {
    local_a8.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_a8.Data.ArrayNum,0,(ForAnyElementType *)&local_a8,local_a8.Data.ArrayNum,
               &local_a8.Data.ArrayMax);
    memcpy(local_a8.Data.AllocatorInstance.Data,_Src,lVar11 * 2);
  }
  pFVar9 = FPaths::AutomationReportsDir(&local_78);
  if ((pFVar9->Data).ArrayNum == 0) {
    pwVar10 = L"";
  }
  else {
    pwVar10 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
  }
  FPaths::MakePathRelativeTo(&local_a8,pwVar10);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  puVar3 = *(undefined8 **)((longlong)this + 0x10);
  iVar8 = local_a8.Data.ArrayNum + -1;
  if (local_a8.Data.ArrayNum == 0) {
    iVar8 = 0;
  }
  if ((*(int *)(puVar3 + 1) != 0) || (iVar7 = 2, iVar8 == -1)) {
    iVar7 = 1;
  }
  local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar1 = *(int *)(puVar3 + 1);
  _Src_00 = (void *)*puVar3;
  local_98.Data.ArrayNum = iVar1;
  if ((iVar1 == 0) && (iVar7 + iVar8 == 0)) {
    local_98.Data.ArrayNum = 0;
    local_98.Data.ArrayMax = 0;
  }
  else {
    uVar13 = iVar1 + iVar7 + iVar8;
    if ((int)uVar13 < iVar1) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar13,0,(ForAnyElementType *)&local_98,iVar1,&local_98.Data.ArrayMax);
    if (iVar1 != 0) {
      memcpy(local_98.Data.AllocatorInstance.Data,_Src_00,(longlong)iVar1 * 2);
    }
  }
  ::FString::PathAppend(&local_98,(wchar_t *)local_a8.Data.AllocatorInstance.Data,iVar8);
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  p_Var4 = *(LPCRITICAL_SECTION *)((longlong)this + 0x18);
  local_a8.Data.AllocatorInstance.Data = local_98.Data.AllocatorInstance.Data;
  local_a8.Data.ArrayNum = local_98.Data.ArrayNum;
  local_a8.Data.ArrayMax = local_98.Data.ArrayMax;
  local_98.Data.ArrayNum = 0;
  local_98.Data.ArrayMax = 0;
  local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (p_Var4 == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(p_Var4);
  local_80 = &local_a8;
  local_88 = pFVar12;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_const_&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)(*(longlong *)((longlong)this + 8) + 0x28),
             (TPairInitializer<FString_const_&,FString_&&> *)&stack0x00000010,(bool *)&local_88);
  LeaveCriticalSection(p_Var4);
  if (*(char *)(*(longlong *)((longlong)this + 8) + 0x20) != '\x02') goto LAB_148c54cad;
  iVar8 = (pFVar12->Data).ArrayNum;
  if (iVar8 == ComparisonFileTypes::Unapproved.Data.ArrayNum) {
    if (1 < iVar8) {
      iVar8 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar12->Data).AllocatorInstance.Data,
                         (wchar_t *)ComparisonFileTypes::Unapproved.Data.AllocatorInstance.Data);
      bVar6 = iVar8 == 0;
      goto LAB_148c54bb7;
    }
  }
  else {
    bVar6 = iVar8 + ComparisonFileTypes::Unapproved.Data.ArrayNum == 1;
LAB_148c54bb7:
    if (!bVar6) goto LAB_148c54cad;
  }
  lVar11 = *(longlong *)((longlong)this + 0x20);
  iVar8 = *(int *)(*(longlong *)this + 8);
  if (*(longlong *)(lVar11 + 0x1b8) == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  plVar2 = *(longlong **)(lVar11 + 0x1b8);
  pcVar5 = *(code **)(*plVar2 + 0x10);
  pFVar9 = ::FString::FString(&local_68,*(FString **)((longlong)this + 0x28));
  pFVar12 = ::FString::FString(&local_58,(FString *)(*(longlong *)((longlong)this + 8) + 0x10));
  (*pcVar5)(plVar2,local_48,pFVar12,pFVar9,iVar8 < 3);
  p_Var4 = *(LPCRITICAL_SECTION *)((longlong)this + 0x18);
  if (p_Var4 == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(p_Var4);
  if ((*(char *)(*(longlong *)((longlong)this + 0x20) + 0x138) == '\0') && (local_48[0] != '\0')) {
    *(char *)(*(longlong *)((longlong)this + 0x20) + 0x138) = local_48[0];
    uVar13 = local_38 - 1;
    if (local_38 == 0) {
      uVar13 = 0;
    }
    ::FString::AssignRange
              ((FString *)(*(longlong *)((longlong)this + 0x20) + 0x140),local_40,uVar13);
  }
  LeaveCriticalSection(p_Var4);
  if (local_40 != (wchar_t *)0x0) {
    FMemory::Free(local_40);
  }
LAB_148c54cad:
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  return;
}

// AddPingResult @ 148c56600

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAutomationControllerManager::AddPingResult(FAutomationControllerManager *this,FGuid *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = 0;
  if (0 < (this->TestRunningArray).ArrayNum) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < (this->TestRunningArray).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
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
      pFVar1 = (this->TestRunningArray).AllocatorInstance.Data;
      if (((*(uint *)(pFVar1 + lVar6 + 0x18) == param_1->C &&
           *(uint *)(pFVar1 + lVar6 + 0x14) == param_1->B) &&
          *(uint *)(pFVar1 + lVar6 + 0x1c) == param_1->D) &&
          *(uint *)(pFVar1 + lVar6 + 0x10) == param_1->A) {
        uVar4 = 0;
        if ((int)uVar5 < (this->TestRunningArray).ArrayNum) {
          uVar4 = ~uVar5 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        *(undefined8 *)
         ((this->TestRunningArray).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x28 + 0x20) = 0;
        return;
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x28;
    } while ((int)uVar5 < (this->TestRunningArray).ArrayNum);
  }
  return;
}

// CheckChildResult @ 148c57e80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAutomationControllerManager::CheckChildResult
          (FAutomationControllerManager *this,TSharedPtr<IAutomationReport,1> *param_1)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  FAutomationTestResults *pFVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  TSharedPtr<IAutomationReport,1> local_68;
  FAutomationTestResults local_58;
  
  if ((param_1->Object == (IAutomationReport *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  plVar6 = (longlong *)(**(code **)(param_1->Object->_padding_ + 0xe8))();
  iVar5 = (int)plVar6[1];
  if (iVar5 < 1) {
    if (((this->bHasErrors == false) || (this->bHasWarning == false)) || (this->bHasLogs == false))
    {
      if ((param_1->Object == (IAutomationReport *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      cVar3 = (**(code **)(param_1->Object->_padding_ + 0xa0))();
      if (cVar3 != '\0') {
        iVar8 = 0;
        iVar5 = (**(code **)(*(longlong *)this + 0x90))(this);
        if (0 < iVar5) {
          do {
            if ((param_1->Object == (IAutomationReport *)0x0) &&
               (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar2)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            pFVar7 = (FAutomationTestResults *)
                     (**(code **)(param_1->Object->_padding_ + 0x128))
                               (param_1->Object,iVar8,this->CurrentTestPass);
            FAutomationTestResults::FAutomationTestResults(&local_58,pFVar7);
            if (0 < local_58.ErrorTotal) {
              this->bHasErrors = true;
            }
            if (local_58.WarningTotal != 0) {
              this->bHasWarning = true;
            }
            if (local_58.Entries.ArrayNum - local_58.ErrorTotal != local_58.WarningTotal) {
              this->bHasLogs = true;
            }
            DestructItems<FAutomationExecutionEntry,int>
                      ((FAutomationExecutionEntry *)local_58.Entries.AllocatorInstance.Data,
                       local_58.Entries.ArrayNum);
            if ((FAutomationExecutionEntry *)local_58.Entries.AllocatorInstance.Data !=
                (FAutomationExecutionEntry *)0x0) {
              FMemory::Free(local_58.Entries.AllocatorInstance.Data);
            }
            DestructItems<FAutomationArtifact,int>
                      ((FAutomationArtifact *)local_58.Artifacts.AllocatorInstance.Data,
                       local_58.Artifacts.ArrayNum);
            if ((FAutomationArtifact *)local_58.Artifacts.AllocatorInstance.Data !=
                (FAutomationArtifact *)0x0) {
              FMemory::Free(local_58.Artifacts.AllocatorInstance.Data);
            }
            if (local_58.GameInstance.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
            {
              FMemory::Free(local_58.GameInstance.Data.AllocatorInstance.Data);
            }
            iVar8 = iVar8 + 1;
            iVar5 = (**(code **)(*(longlong *)this + 0x90))(this);
          } while (iVar8 < iVar5);
        }
      }
    }
  }
  else {
    uVar9 = 0;
    lVar10 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar9 < iVar5) {
        uVar4 = ~uVar9 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      local_68.Object = *(IAutomationReport **)(*plVar6 + lVar10);
      local_68.SharedReferenceCount.ReferenceController =
           *(TReferenceControllerBase<1> **)(*plVar6 + 8 + lVar10);
      if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      CheckChildResult(this,&local_68);
      iVar5 = (int)plVar6[1];
      uVar9 = uVar9 + 1;
      lVar10 = lVar10 + 0x10;
    } while ((int)uVar9 < iVar5);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// CheckTestResultsAvailable @ 148c58110

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FAutomationControllerManager::CheckTestResultsAvailable(FAutomationControllerManager *this)

{
  return this->bTestResultsAvailable;
}

// ClearAutomationReports @ 148c58120

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAutomationControllerManager::ClearAutomationReports(FAutomationControllerManager *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->ReportManager).ReportRoot.Object == (IAutomationReport *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148c58168. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(((this->ReportManager).ReportRoot.Object)->_padding_ + 8))();
  return;
}

// CollectTestResults @ 148c58650

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAutomationControllerManager::CollectTestResults
          (FAutomationControllerManager *this,TSharedPtr<IAutomationReport,1> *param_1,
          FAutomationTestResults *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  FAutomatedTestResult *pFVar4;
  FEngineVersion *pFVar5;
  FString *pFVar6;
  FScriptContainerElement *pFVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  undefined1 auStackY_138 [32];
  <lambda_1> local_f8 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_f0;
  FString local_e0;
  FString local_d0;
  undefined1 local_c0 [16];
  TSharedPtr<IAutomationReport,1> *local_b0;
  TArrayView<std::nullptr_t,int> local_a8;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_98;
  FScriptContainerElement *local_90;
  FString *local_88;
  _RTL_CRITICAL_SECTION *local_80;
  FAutomationControllerManager *local_78;
  FString *local_70;
  _RTL_CRITICAL_SECTION local_68;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_138;
  local_b0 = param_1;
  if ((this->JsonTestPassResults).IsRequired == false) goto LAB_148c58a2b;
  FAutomatedTestPassResults::UpdateTestResultStatus
            (&this->JsonTestPassResults,param_1,param_2->State,0 < param_2->WarningTotal);
  pFVar4 = FAutomatedTestPassResults::GetTestResult(&this->JsonTestPassResults,param_1);
  iVar8 = param_2->ErrorTotal;
  iVar1 = param_2->WarningTotal;
  TArray<FAutomationExecutionEntry,TSizedDefaultAllocator<32>_>::operator=
            (&pFVar4->Entries,&param_2->Entries);
  pFVar4->Warnings = iVar1;
  pFVar4->Errors = iVar8;
  TArray<FAutomationArtifact,TSizedDefaultAllocator<32>_>::operator=
            (&pFVar4->Artifacts,&param_2->Artifacts);
  pFVar4->Duration = param_2->Duration;
  if ((pFVar4->DeviceInstance).ArrayNum == 0) {
    iVar8 = (param_2->GameInstance).Data.ArrayNum;
    local_f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar9 = (param_2->GameInstance).Data.AllocatorInstance.Data;
    local_f0.ArrayNum = iVar8;
    if (iVar8 == 0) {
      local_f0.ArrayNum = 0;
      local_f0.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar8,0,&local_f0.AllocatorInstance,iVar8,&local_f0.ArrayMax);
      memcpy(local_f0.AllocatorInstance.Data,pFVar9,(longlong)iVar8 * 2);
    }
    DestructItems<FString,int>
              ((FString *)(pFVar4->DeviceInstance).AllocatorInstance.Data,
               (pFVar4->DeviceInstance).ArrayNum);
    TArray<FString,TSizedDefaultAllocator<32>_>::CopyToEmpty<FString,int>
              (&pFVar4->DeviceInstance,(FString *)&local_f0,1,(pFVar4->DeviceInstance).ArrayMax);
    if (local_f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.AllocatorInstance.Data);
    }
  }
  (this->JsonTestPassResults).TotalDuration =
       param_2->Duration + (this->JsonTestPassResults).TotalDuration;
  ::FString::FString(&local_d0,L"imageCompare");
  pFVar5 = FEngineVersion::Current();
  uVar2 = FEngineVersionBase::GetChangelist((FEngineVersionBase *)pFVar5);
  if (uVar2 != 0) {
    pFVar5 = FEngineVersion::Current();
    uVar2 = FEngineVersionBase::GetChangelist((FEngineVersionBase *)pFVar5);
    local_f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f0.ArrayNum = 0;
    local_f0.ArrayMax = 0;
    ::FString::AppendInt((FString *)&local_f0,uVar2);
    pFVar6 = ::operator/((FString *)local_c0,&local_d0,(FString *)&local_f0);
    if (&local_d0 != pFVar6) {
      if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d0.Data.AllocatorInstance.Data);
      }
      local_d0.Data.AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
      (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_d0.Data.ArrayNum = (pFVar6->Data).ArrayNum;
      local_d0.Data.ArrayMax = (pFVar6->Data).ArrayMax;
      (pFVar6->Data).ArrayNum = 0;
      (pFVar6->Data).ArrayMax = 0;
    }
    if ((FScriptContainerElement *)local_c0._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_c0._0_8_);
    }
    if (local_f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.AllocatorInstance.Data);
    }
  }
  iVar1 = (this->ReportExportPath).Data.ArrayNum;
  iVar8 = local_d0.Data.ArrayNum + -1;
  if (local_d0.Data.ArrayNum == 0) {
    iVar8 = 0;
  }
  local_e0.Data.ArrayNum = iVar1;
  if ((iVar1 == 0) && (iVar8 != -1)) {
    pFVar9 = (this->ReportExportPath).Data.AllocatorInstance.Data;
    iVar3 = iVar8 + 2;
LAB_148c588a6:
    local_e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (iVar3 != 0) goto LAB_148c588af;
    local_e0.Data.ArrayMax = 0;
  }
  else {
    pFVar9 = (this->ReportExportPath).Data.AllocatorInstance.Data;
    iVar3 = iVar8 + 1;
    if (iVar1 == 0) goto LAB_148c588a6;
LAB_148c588af:
    local_e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    uVar2 = iVar1 + iVar3;
    if ((int)uVar2 < iVar1) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar2,0,(ForAnyElementType *)&local_e0,iVar1,&local_e0.Data.ArrayMax);
    if (iVar1 != 0) {
      memcpy(local_e0.Data.AllocatorInstance.Data,pFVar9,(longlong)iVar1 * 2);
    }
  }
  ::FString::PathAppend(&local_e0,(wchar_t *)local_d0.Data.AllocatorInstance.Data,iVar8);
  InitializeCriticalSectionAndSpinCount(&local_68,4000);
  iVar8 = (pFVar4->Artifacts).ArrayNum;
  pFVar9 = (pFVar4->Artifacts).AllocatorInstance.Data;
  pFVar7 = pFVar9 + (longlong)iVar8 * 200;
  while( true ) {
    if ((pFVar4->Artifacts).ArrayNum != iVar8) {
      `TCheckedPointerIterator<FAutomationArtifact,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_f8);
    }
    if (pFVar9 == pFVar7) break;
    local_f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f0.ArrayNum = 0;
    local_f0.ArrayMax = 0;
    TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
    GetKeys<TSizedDefaultAllocator<32>_>
              ((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                *)(pFVar9 + 0x78),&local_f0);
    local_98 = &local_f0;
    local_88 = &local_d0;
    local_80 = &local_68;
    local_70 = &local_e0;
    local_a8.DataPtr = (void **)0x0;
    local_c0._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FAutomationControllerManager::CollectTestResults'::__l15::<lambda_1>,void,int>
         ::Call;
    local_c0._8_8_ = &local_98;
    local_a8.ArrayNum = 0;
    local_90 = pFVar9;
    local_78 = this;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ParallelFor Task",local_f0.ArrayNum,1,(TFunctionRef<void___cdecl(int)> *)local_c0,
               local_f8[0],None,&local_a8);
    DestructItems<FString,int>((FString *)local_f0.AllocatorInstance.Data,local_f0.ArrayNum);
    if (local_f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.AllocatorInstance.Data);
    }
    pFVar9 = pFVar9 + 200;
  }
  DeleteCriticalSection(&local_68);
  param_1 = local_b0;
  if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0.Data.AllocatorInstance.Data);
  }
  if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.Data.AllocatorInstance.Data);
  }
LAB_148c58a2b:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// ExecuteNextTask @ 148c5a010

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAutomationControllerManager::ExecuteNextTask
          (FAutomationControllerManager *this,int param_1,bool *param_2)

{
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FAutomationControllerManager::FTestRunningInfo,TSizedDefaultAllocator<32>_> *pTVar2;
  int *piVar3;
  FAutomatedTestPassResults *this_00;
  bool bVar4;
  EAutomationState EVar5;
  IAutomationReport *pIVar6;
  FGuid *pFVar7;
  FScriptContainerElement *pFVar8;
  TReferenceControllerBase<1> *pTVar9;
  code *pcVar10;
  undefined8 uVar11;
  ForAnyElementType FVar12;
  undefined8 uVar13;
  bool bVar14;
  char cVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  TSharedPtr<IAutomationReport,1> *pTVar19;
  FAutomationDeviceInfo *pFVar20;
  UScriptStruct *pUVar21;
  FString *pFVar22;
  FString *pFVar23;
  undefined8 *puVar24;
  FAutomationWorkerMessageBase *pFVar25;
  longlong lVar26;
  FAutomatedTestResult *pFVar27;
  FDateTime FVar28;
  FScriptContainerElement *pFVar29;
  longlong lVar30;
  FAutomationDeviceClusterManager *this_01;
  uint uVar31;
  int local_res20;
  TSharedPtr<IAutomationReport,1> local_2c8;
  ForAnyElementType local_2b8;
  undefined8 local_2b0;
  ForAnyElementType local_2a8;
  undefined8 local_2a0;
  uint local_298;
  uint local_294;
  int local_290;
  FString local_288;
  FAutomationTestResults local_278;
  FString local_238;
  TArray<FMessageAddress,TSizedDefaultAllocator<32>_> local_228;
  undefined1 local_218 [4];
  undefined4 local_214;
  ForAnyElementType local_210;
  undefined8 local_208;
  FAutomationArtifact *local_200;
  undefined8 local_1f8;
  FAutomationExecutionEntry *local_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  longlong local_1d8;
  EAutomationEventType local_1d0;
  FString local_1c8;
  FString local_1b8;
  FGuid local_1a8;
  FString local_198;
  TSharedPtr<IAutomationReport,1> local_188;
  FAutomationExecutionEntry local_178;
  FGuid *local_120;
  FGuid local_118;
  FString local_108;
  TSharedPtr<IAutomationReport,1> local_f8;
  FGuid local_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  TSharedPtr<IAutomationReport,1> local_c0;
  TSharedPtr<IAutomationReport,1> local_a8;
  TSharedPtr<IAutomationReport,1> local_98;
  void *local_88;
  FString local_78;
  FString local_68 [2];
  
  uVar31 = 0;
  local_294 = 0;
  local_2a8.Data = (FScriptContainerElement *)0x0;
  local_2a0 = 0;
  local_290 = FAutomationDeviceClusterManager::GetNumDevicesInCluster
                        (&this->DeviceClusterManager,param_1);
  local_res20 = 0;
  if (0 < local_290) {
    do {
      this_01 = &this->DeviceClusterManager;
      pTVar19 = FAutomationDeviceClusterManager::GetTest(this_01,&local_c0,param_1,local_res20);
      if ((pTVar19->Object == (IAutomationReport *)0x0) &&
         (bVar14 = FAutomationDeviceClusterManager::DeviceEnabled(this_01,param_1,local_res20),
         bVar14)) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_c0.SharedReferenceCount.ReferenceController);
        iVar16 = this->CurrentTestPass;
        uVar31 = uVar31 & 0xfffffffe;
        if (((this->ReportManager).ReportRoot.Object == (IAutomationReport *)0x0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar14)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pIVar6 = (this->ReportManager).ReportRoot.Object;
        (**(code **)(pIVar6->_padding_ + 0x150))(pIVar6,&local_2c8,param_2,param_1,iVar16,local_290)
        ;
        if (local_2c8.Object != (IAutomationReport *)0x0) {
          if ((local_2c8.Object == (IAutomationReport *)0x0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar14)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          cVar15 = (**(code **)((local_2c8.Object)->_padding_ + 0x118))
                             (local_2c8.Object,param_1,this->CurrentTestPass);
          if (cVar15 == '\0') {
            local_a8.Object = local_2c8.Object;
            local_a8.SharedReferenceCount.ReferenceController =
                 local_2c8.SharedReferenceCount.ReferenceController;
            if (local_2c8.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_2c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_2c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount
                   + 1);
              UNLOCK();
            }
            FAutomationDeviceClusterManager::SetTest(this_01,param_1,local_res20,&local_a8);
            if (((local_2a8.Data <= &local_2c8) &&
                (&local_2c8 <
                 (TSharedPtr<IAutomationReport,1> *)
                 (local_2a8.Data + (longlong)local_2a0._4_4_ * 0x10))) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar14)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            iVar16 = (int)local_2a0;
            if ((int)local_2a0 == local_2a0._4_4_) {
              iVar16 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,&local_2a8,(int *)((longlong)&local_2a0 + 4));
            }
            local_2a0 = CONCAT44(local_2a0._4_4_,iVar16 + 1);
            *(IAutomationReport **)&local_2a8.Data[(longlong)iVar16 * 0x10].field_0x0 =
                 local_2c8.Object;
            *(TReferenceControllerBase<1> **)(local_2a8.Data + (longlong)iVar16 * 0x10 + 8) =
                 local_2c8.SharedReferenceCount.ReferenceController;
            if (local_2c8.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_2c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_2c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount
                   + 1);
              UNLOCK();
            }
            local_98.Object = local_2c8.Object;
            local_98.SharedReferenceCount.ReferenceController =
                 local_2c8.SharedReferenceCount.ReferenceController;
            if (local_2c8.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_2c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_2c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount
                   + 1);
              UNLOCK();
            }
            FAutomationDeviceClusterManager::GetDevicesReservedForTest
                      (this_01,&local_228,param_1,&local_98);
            if ((local_2c8.Object == (IAutomationReport *)0x0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar14)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            iVar16 = local_228.ArrayNum;
            iVar17 = (**(code **)((local_2c8.Object)->_padding_ + 0x180))();
            if (iVar16 == iVar17) {
              local_2b8.Data = (FScriptContainerElement *)0x0;
              local_2b0 = 0;
              local_298 = 0;
              if (0 < local_228.ArrayNum) {
                local_1d8 = 0;
                local_294 = uVar31;
                do {
                  lVar26 = local_1d8;
                  uVar31 = local_298;
                  pFVar20 = FAutomationDeviceClusterManager::GetDeviceInfo
                                      (&this->DeviceClusterManager,param_1,local_res20);
                  local_120 = &pFVar20->Instance;
                  local_218[0] = 0;
                  local_214 = 0;
                  local_210.Data = (FScriptContainerElement *)0x0;
                  local_208._0_4_ = 0;
                  local_208._4_4_ = 0;
                  local_200 = (FAutomationArtifact *)0x0;
                  local_1f8 = 0;
                  local_1f0 = (FAutomationExecutionEntry *)0x0;
                  local_1e8 = 0;
                  uStack_1e0 = 0;
                  local_288.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  local_288.Data.ArrayNum = 0;
                  local_288.Data.ArrayMax = 0;
                  FGuid::AppendString(local_120,&local_288,Digits);
                  if (local_210.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_210.Data);
                  }
                  local_210.Data = local_288.Data.AllocatorInstance.Data;
                  uVar11._0_4_ = local_288.Data.ArrayNum;
                  uVar11._4_4_ = local_288.Data.ArrayMax;
                  local_208._0_4_ = local_288.Data.ArrayNum;
                  local_208._4_4_ = local_288.Data.ArrayMax;
                  local_288.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  local_288.Data.ArrayNum = 0;
                  local_288.Data.ArrayMax = 0;
                  local_218[0] = 1;
                  uVar13 = uVar11;
                  if (((local_2b8.Data <= (FScriptContainerElement *)&local_210) &&
                      (uVar13 = local_208,
                      (FScriptContainerElement *)&local_210 <
                      local_2b8.Data + (longlong)local_2b0._4_4_ * 0x10)) &&
                     (local_208 = uVar11,
                     bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), uVar13 = local_208, bVar14)) {
                    pcVar10 = (code *)swi(3);
                    (*pcVar10)();
                    return;
                  }
                  local_208 = uVar13;
                  iVar16 = (int)local_2b0;
                  if ((int)local_2b0 == local_2b0._4_4_) {
                    iVar16 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x810,&local_2b8,(int *)((longlong)&local_2b0 + 4));
                  }
                  FVar12.Data = local_210.Data;
                  pFVar29 = local_2b8.Data + (longlong)iVar16 * 0x10;
                  local_2b0 = CONCAT44(local_2b0._4_4_,iVar16 + 1);
                  *(FScriptContainerElement **)pFVar29 = (FScriptContainerElement *)0x0;
                  lVar30 = (longlong)(int)local_208;
                  *(int *)(pFVar29 + 8) = (int)local_208;
                  if ((int)local_208 == 0) {
                    *(int *)(pFVar29 + 0xc) = 0;
                  }
                  else {
                    UE::Core::Private::
                    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (2,2,(int)local_208,0,(ForAnyElementType *)pFVar29,(int)local_208,
                               (int *)(pFVar29 + 0xc));
                    /* WARNING: Load size is inaccurate */
                    memcpy(*pFVar29,FVar12.Data,lVar30 * 2);
                  }
                  if ((local_2c8.Object == (IAutomationReport *)0x0) &&
                     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                         ("IsValid()",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                          ,0x458,L""), bVar14)) {
                    pcVar10 = (code *)swi(3);
                    (*pcVar10)();
                    return;
                  }
                  (**(code **)((local_2c8.Object)->_padding_ + 0x100))
                            (local_2c8.Object,param_1,this->CurrentTestPass,local_218);
                  uVar18 = 0;
                  if ((int)uVar31 < local_228.ArrayNum) {
                    uVar18 = ~uVar31 >> 0x1f;
                  }
                  if ((uVar18 == 0) &&
                     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar14)) {
                    pcVar10 = (code *)swi(3);
                    (*pcVar10)();
                    return;
                  }
                  local_118._0_8_ = *(undefined8 *)(local_228.AllocatorInstance.Data + lVar26);
                  local_118._8_8_ = *(undefined8 *)(local_228.AllocatorInstance.Data + lVar26 + 8);
                  if (4 < (byte)LogAutomationController._0_1_) {
                    local_238.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                    local_238.Data.ArrayNum = 0;
                    local_238.Data.ArrayMax = 0;
                    FGuid::AppendString(&local_118,&local_238,Digits);
                    if ((local_2c8.Object == (IAutomationReport *)0x0) &&
                       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                           ("IsValid()",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                            ,0x458,L""), bVar14)) {
                      pcVar10 = (code *)swi(3);
                      (*pcVar10)();
                      return;
                    }
                    (**(code **)((local_2c8.Object)->_padding_ + 0x18))();
                    UE::Logging::Private::BasicLog<5>
                              (&::LOG_Static,(FLogCategoryBase *)&LogAutomationController);
                    if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_238.Data.AllocatorInstance.Data);
                    }
                  }
                  pUVar21 = FAutomationWorkerRunTests::StaticStruct();
                  if ((local_2c8.Object == (IAutomationReport *)0x0) &&
                     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                         ("IsValid()",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                          ,0x458,L""), bVar14)) {
                    pcVar10 = (code *)swi(3);
                    (*pcVar10)();
                    return;
                  }
                  pFVar22 = (FString *)(**(code **)((local_2c8.Object)->_padding_ + 0x20))();
                  if ((local_2c8.Object == (IAutomationReport *)0x0) &&
                     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                         ("IsValid()",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                          ,0x458,L""), bVar14)) {
                    pcVar10 = (code *)swi(3);
                    (*pcVar10)();
                    return;
                  }
                  pFVar23 = (FString *)(**(code **)((local_2c8.Object)->_padding_ + 0x18))();
                  if ((local_2c8.Object == (IAutomationReport *)0x0) &&
                     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                         ("IsValid()",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                          ,0x458,L""), bVar14)) {
                    pcVar10 = (code *)swi(3);
                    (*pcVar10)();
                    return;
                  }
                  puVar24 = (undefined8 *)(**(code **)((local_2c8.Object)->_padding_ + 0x10))();
                  pFVar25 = FMemory::Malloc(0x50,0);
                  bVar14 = this->bPruneLogsOnSuccess;
                  bVar4 = this->bSendAnalytics;
                  pFVar22 = ::FString::FString(&local_78,pFVar22);
                  pFVar23 = ::FString::FString(local_68,pFVar23);
                  local_198.Data.AllocatorInstance.Data = (FScriptContainerElement *)*puVar24;
                  *puVar24 = 0;
                  local_198.Data.ArrayNum = *(int *)(puVar24 + 1);
                  local_198.Data.ArrayMax = *(int *)((longlong)puVar24 + 0xc);
                  puVar24[1] = 0;
                  uVar31 = this->ExecutionCount;
                  (pFVar25->InstanceId).A = 0;
                  (pFVar25->InstanceId).B = 0;
                  (pFVar25->InstanceId).C = 0;
                  (pFVar25->InstanceId).D = 0;
                  pFVar25[1].InstanceId.A = uVar31;
                  pFVar25[1].InstanceId.B = local_298;
                  ::FString::FString((FString *)&pFVar25[1].InstanceId.C,&local_198);
                  ::FString::FString((FString *)&pFVar25[2].InstanceId.C,pFVar23);
                  ::FString::FString((FString *)&pFVar25[3].InstanceId.C,pFVar22);
                  *(bool *)&pFVar25[4].InstanceId.C = bVar4;
                  *(bool *)((longlong)&pFVar25[4].InstanceId.C + 1) = bVar14;
                  if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_198.Data.AllocatorInstance.Data);
                  }
                  pFVar29 = (pFVar23->Data).AllocatorInstance.Data;
                  if (pFVar29 != (FScriptContainerElement *)0x0) {
                    FMemory::Free(pFVar29);
                  }
                  pFVar29 = (pFVar22->Data).AllocatorInstance.Data;
                  if (pFVar29 != (FScriptContainerElement *)0x0) {
                    FMemory::Free(pFVar29);
                  }
                  SendMessage(this,pFVar25,pUVar21,(FMessageAddress *)&local_118);
                  if (local_88 != (void *)0x0) {
                    FMemory::Free(local_88);
                  }
                  pTVar2 = &this->TestRunningArray;
                  pFVar7 = (FGuid *)(pTVar2->AllocatorInstance).Data;
                  piVar3 = &(this->TestRunningArray).ArrayMax;
                  local_c8 = 0;
                  local_d8._0_4_ = local_120->A;
                  local_d8._4_4_ = local_120->B;
                  uStack_d0._0_4_ = local_120->C;
                  uStack_d0._4_4_ = local_120->D;
                  local_e8.A = local_118.A;
                  local_e8.B = local_118.B;
                  local_e8.C = local_118.C;
                  local_e8.D = local_118.D;
                  if (((pFVar7 <= &local_e8) &&
                      (&local_e8 < (FGuid *)((longlong)pFVar7 + (longlong)*piVar3 * 0x28))) &&
                     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar14)) {
                    pcVar10 = (code *)swi(3);
                    (*pcVar10)();
                    return;
                  }
                  iVar16 = (this->TestRunningArray).ArrayNum;
                  if (iVar16 == *piVar3) {
                    iVar16 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x828,&pTVar2->AllocatorInstance,piVar3);
                  }
                  lVar26 = (longlong)iVar16;
                  (this->TestRunningArray).ArrayNum = iVar16 + 1;
                  pFVar8 = (pTVar2->AllocatorInstance).Data;
                  *(undefined8 *)(pFVar8 + lVar26 * 0x28) = local_e8._0_8_;
                  *(undefined8 *)(pFVar8 + lVar26 * 0x28 + 8) = local_e8._8_8_;
                  pFVar29 = pFVar8 + lVar26 * 0x28 + 0x10;
                  *(undefined4 *)pFVar29 = (undefined4)local_d8;
                  *(undefined4 *)(pFVar29 + 4) = local_d8._4_4_;
                  *(undefined4 *)(pFVar29 + 8) = (undefined4)uStack_d0;
                  *(undefined4 *)(pFVar29 + 0xc) = uStack_d0._4_4_;
                  *(undefined8 *)(pFVar8 + lVar26 * 0x28 + 0x20) = local_c8;
                  DestructItems<FAutomationExecutionEntry,int>(local_1f0,(int)local_1e8);
                  if (local_1f0 != (FAutomationExecutionEntry *)0x0) {
                    FMemory::Free(local_1f0);
                  }
                  DestructItems<FAutomationArtifact,int>(local_200,(int)local_1f8);
                  if (local_200 != (FAutomationArtifact *)0x0) {
                    FMemory::Free(local_200);
                  }
                  if (local_210.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_210.Data);
                  }
                  local_298 = local_298 + 1;
                  local_1d8 = local_1d8 + 0x10;
                  uVar31 = local_294;
                } while ((int)local_298 < local_228.ArrayNum);
              }
              if (3 < (byte)LogAutomationController._0_1_) {
                if ((local_2c8.Object == (IAutomationReport *)0x0) &&
                   (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValid()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                        ,0x458,L""), bVar14)) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                (**(code **)((local_2c8.Object)->_padding_ + 0x20))();
                if ((local_2c8.Object == (IAutomationReport *)0x0) &&
                   (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValid()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                        ,0x458,L""), bVar14)) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                (**(code **)((local_2c8.Object)->_padding_ + 0x18))();
                UE::Logging::Private::BasicLog<4>
                          (&::LOG_Static,(FLogCategoryBase *)&LogAutomationController);
              }
              this_00 = &this->JsonTestPassResults;
              if ((this->JsonTestPassResults).IsRequired != false) {
                pFVar27 = FAutomatedTestPassResults::GetTestResult(this_00,&local_2c8);
                EVar5 = pFVar27->State;
                if (EVar5 != InProcess) {
                  if (EVar5 == NotRun) {
                    piVar3 = &(this->JsonTestPassResults).NotRun;
                    *piVar3 = *piVar3 + -1;
                  }
                  else if (EVar5 == InProcess) {
                    piVar3 = &(this->JsonTestPassResults).InProcess;
                    *piVar3 = *piVar3 + -1;
                  }
                  FVar28 = FDateTime::UtcNow();
                    /* WARNING: Load size is inaccurate */
                  (pFVar27->DateTime).Ticks = *FVar28.Ticks;
                  piVar3 = &(this->JsonTestPassResults).InProcess;
                  *piVar3 = *piVar3 + 1;
                  pFVar27->State = InProcess;
                }
                pFVar27 = FAutomatedTestPassResults::GetTestResult(this_00,&local_2c8);
                pTVar1 = &pFVar27->DeviceInstance;
                if (pTVar1 != (TArray<FString,TSizedDefaultAllocator<32>_> *)&local_2b8) {
                  DestructItems<FString,int>
                            ((FString *)(pTVar1->AllocatorInstance).Data,
                             (pFVar27->DeviceInstance).ArrayNum);
                  FVar12.Data = local_2b8.Data;
                  iVar16 = (int)local_2b0;
                  piVar3 = &(pFVar27->DeviceInstance).ArrayMax;
                  (pFVar27->DeviceInstance).ArrayNum = (int)local_2b0;
                  if (((int)local_2b0 == 0) && (*piVar3 == 0)) {
                    *piVar3 = 0;
                  }
                  else {
                    UE::Core::Private::
                    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x10,8,(int)local_2b0,*piVar3,&pTVar1->AllocatorInstance,
                               (int)local_2b0,piVar3);
                    ConstructItems<FString,FString,int>
                              ((pTVar1->AllocatorInstance).Data,(FString *)FVar12.Data,iVar16);
                  }
                }
                if (this->bResumeRunTest != false) {
                  GenerateJsonTestPassSummary(this,this_00);
                }
              }
              if ((local_2c8.Object == (IAutomationReport *)0x0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar14)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              (**(code **)((local_2c8.Object)->_padding_ + 0x198))();
              DestructItems<FString,int>((FString *)local_2b8.Data,(int)local_2b0);
              if (local_2b8.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_2b8.Data);
              }
            }
            if (local_228.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_228.AllocatorInstance.Data);
            }
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_2c8.SharedReferenceCount.ReferenceController);
      }
      else {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_c0.SharedReferenceCount.ReferenceController);
        uVar31 = uVar31 & 0xfffffffe;
        *param_2 = false;
      }
      local_res20 = local_res20 + 1;
    } while (local_res20 < local_290);
  }
  uVar31 = 0;
  if (0 < (int)local_2a0) {
    lVar26 = 0;
    do {
      uVar18 = 0;
      if ((int)uVar31 < (int)local_2a0) {
        uVar18 = ~uVar31 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pTVar9 = *(TReferenceControllerBase<1> **)(local_2a8.Data + lVar26 + 8);
      pIVar6 = *(IAutomationReport **)(local_2a8.Data + lVar26);
      if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (pIVar6 == (IAutomationReport *)0x0) {
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L"");
        if (bVar14) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L"");
        if (bVar14) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
      }
      iVar16 = (**(code **)(pIVar6->_padding_ + 0x178))(pIVar6);
      iVar17 = (**(code **)(pIVar6->_padding_ + 0x180))(pIVar6);
      if (iVar16 != iVar17) {
        pcVar10 = *(code **)(*(longlong *)this + 0x98);
        if ((pIVar6 == (IAutomationReport *)0x0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar14)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        iVar16 = (**(code **)(pIVar6->_padding_ + 0x180))(pIVar6);
        iVar17 = (*pcVar10)(this,param_1);
        if (iVar17 < iVar16) {
          local_278.Duration = 0.0;
          local_278.GameInstance.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_278.GameInstance.Data.ArrayNum = 0;
          local_278.GameInstance.Data.ArrayMax = 0;
          local_278.Artifacts.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_278.Artifacts.ArrayNum = 0;
          local_278.Artifacts.ArrayMax = 0;
          local_278.Entries.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_278.Entries.ArrayNum = 0;
          local_278.Entries.ArrayMax = 0;
          local_278.WarningTotal = 0;
          local_278.ErrorTotal = 0;
          local_278.State = Skipped;
          FAutomationDeviceClusterManager::GetNumDevicesInCluster
                    (&this->DeviceClusterManager,param_1);
          if ((pIVar6 == (IAutomationReport *)0x0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar14)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          (**(code **)(pIVar6->_padding_ + 0x180))(pIVar6);
          ::FString::PrintfImpl
                    (&local_108,
                     L"Skipped because the test needed %d devices to participate, Only had %d available."
                    );
          FVar12.Data = local_108.Data.AllocatorInstance.Data;
          local_1c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_1d0 = Warning;
          iVar16 = local_108.Data.ArrayNum;
          local_1c8.Data.ArrayNum = iVar16;
          if (iVar16 == 0) {
            local_1c8.Data.ArrayMax = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,iVar16,0,(ForAnyElementType *)&local_1c8,iVar16,&local_1c8.Data.ArrayMax)
            ;
            memcpy(local_1c8.Data.AllocatorInstance.Data,FVar12.Data,(longlong)iVar16 * 2);
          }
          local_1a8.A = 0;
          local_1a8.B = 0;
          local_1b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_1b8.Data.ArrayNum = 0;
          local_1b8.Data.ArrayMax = 0;
          local_1a8.C = 0;
          local_1a8.D = 0;
          local_178.Event.Type = local_1d0;
          ::FString::FString(&local_178.Event.Message,&local_1c8);
          ::FString::FString(&local_178.Event.Context,&local_1b8);
          local_178.LineNumber = -1;
          local_178.Filename.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_178.Event.Artifact.A = local_1a8.A;
          local_178.Event.Artifact.B = local_1a8.B;
          local_178.Event.Artifact.C = local_1a8.C;
          local_178.Event.Artifact.D = local_1a8.D;
          local_178.Filename.Data.ArrayNum = 0;
          local_178.Filename.Data.ArrayMax = 0;
          FDateTime::UtcNow();
          if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
          }
          if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
          }
          if (local_178.Event.Type == Warning) {
            local_278.WarningTotal = local_278.WarningTotal + 1;
          }
          else if (local_178.Event.Type == Error) {
            local_278.ErrorTotal = local_278.ErrorTotal + 1;
          }
          if (((local_278.Entries.AllocatorInstance.Data <= &local_178) &&
              (&local_178 <
               (FAutomationExecutionEntry *)
               (local_278.Entries.AllocatorInstance.Data +
               (longlong)local_278.Entries.ArrayMax * 0x58))) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar14)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          iVar16 = local_278.Entries.ArrayNum;
          if (local_278.Entries.ArrayNum == local_278.Entries.ArrayMax) {
            iVar16 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x858,&local_278.Entries.AllocatorInstance,
                                &local_278.Entries.ArrayMax);
          }
          FVar12.Data = local_278.Entries.AllocatorInstance.Data;
          local_278.Entries.ArrayNum = iVar16 + 1;
          lVar30 = (longlong)iVar16 * 0x58;
          local_278.Entries.AllocatorInstance.Data[lVar30].field_0x0 = local_178.Event.Type;
          ::FString::FString((FString *)(local_278.Entries.AllocatorInstance.Data + lVar30 + 8),
                             &local_178.Event.Message);
          ::FString::FString((FString *)(FVar12.Data + lVar30 + 0x18),&local_178.Event.Context);
          *(undefined8 *)(FVar12.Data + lVar30 + 0x28) = local_178.Event.Artifact._0_8_;
          *(undefined8 *)(FVar12.Data + lVar30 + 0x28 + 8) = local_178.Event.Artifact._8_8_;
          ::FString::FString((FString *)(FVar12.Data + lVar30 + 0x38),&local_178.Filename);
          *(int *)(FVar12.Data + lVar30 + 0x48) = local_178.LineNumber;
          *(long64 *)(FVar12.Data + lVar30 + 0x50) = local_178.Timestamp.Ticks;
          if (local_178.Filename.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_178.Filename.Data.AllocatorInstance.Data);
          }
          if (local_178.Event.Context.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
          {
            FMemory::Free(local_178.Event.Context.Data.AllocatorInstance.Data);
          }
          if (local_178.Event.Message.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
          {
            FMemory::Free(local_178.Event.Message.Data.AllocatorInstance.Data);
          }
          if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_108.Data.AllocatorInstance.Data);
          }
          if ((pIVar6 == (IAutomationReport *)0x0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar14)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          (**(code **)(pIVar6->_padding_ + 0x100))(pIVar6,param_1,this->CurrentTestPass,&local_278);
          local_f8.Object = pIVar6;
          local_f8.SharedReferenceCount.ReferenceController = pTVar9;
          if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
            CollectTestResults(this,&local_f8,&local_278);
          }
          else {
            LOCK();
            pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
            UNLOCK();
            CollectTestResults(this,&local_f8,&local_278);
            LOCK();
            pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_188.Object = pIVar6;
          local_188.SharedReferenceCount.ReferenceController = pTVar9;
          FAutomationDeviceClusterManager::ResetAllDevicesRunningTest
                    (&this->DeviceClusterManager,param_1,&local_188);
          DestructItems<FAutomationExecutionEntry,int>
                    ((FAutomationExecutionEntry *)local_278.Entries.AllocatorInstance.Data,
                     local_278.Entries.ArrayNum);
          if ((FAutomationExecutionEntry *)local_278.Entries.AllocatorInstance.Data !=
              (FAutomationExecutionEntry *)0x0) {
            FMemory::Free(local_278.Entries.AllocatorInstance.Data);
          }
          DestructItems<FAutomationArtifact,int>
                    ((FAutomationArtifact *)local_278.Artifacts.AllocatorInstance.Data,
                     local_278.Artifacts.ArrayNum);
          if ((FAutomationArtifact *)local_278.Artifacts.AllocatorInstance.Data !=
              (FAutomationArtifact *)0x0) {
            FMemory::Free(local_278.Artifacts.AllocatorInstance.Data);
          }
          if (local_278.GameInstance.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
          {
            FMemory::Free(local_278.GameInstance.Data.AllocatorInstance.Data);
          }
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
      uVar31 = uVar31 + 1;
      lVar26 = lVar26 + 0x10;
    } while ((int)uVar31 < (int)local_2a0);
  }
  if ((*param_2 != false) && (this->CurrentTestPass < this->NumTestPasses + -1)) {
    iVar16 = this->CurrentTestPass + 1;
    this->CurrentTestPass = iVar16;
    (this->ReportManager).CurrentTestPass = iVar16;
    *param_2 = false;
  }
  DestructItems<TSharedPtr<IAutomationReport,1>,int>
            ((TSharedPtr<IAutomationReport,1> *)local_2a8.Data,(int)local_2a0);
  if ((TSharedPtr<IAutomationReport,1> *)local_2a8.Data != (TSharedPtr<IAutomationReport,1> *)0x0) {
    FMemory::Free(local_2a8.Data);
  }
  return;
}

// ExportReport @ 148c5b1a0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FAutomationControllerManager::ExportReport(FAutomationControllerManager *this,uint param_1)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = (**(code **)(*(longlong *)this + 0x90))();
  bVar1 = FAutomationReportManager::ExportReport(&this->ReportManager,param_1,iVar2);
  return bVar1;
}

// GenerateJsonTestPassSummary @ 148c5ba50

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FAutomationControllerManager::GenerateJsonTestPassSummary
          (FAutomationControllerManager *this,FAutomatedTestPassResults *param_1)

{
  float fVar1;
  bool bVar2;
  FDateTime FVar3;
  UPackage *pUVar4;
  IFileManager *pIVar5;
  ForAnyElementType FVar6;
  int iVar7;
  FString local_58;
  FString local_48;
  FScriptContainerElement *local_38;
  int iStack_30;
  undefined4 uStack_2c;
  TStringView<wchar_t> local_28 [2];
  
  if (3 < (byte)LogAutomationController._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAutomationController);
  }
  FVar3 = FDateTime::UtcNow();
                    /* WARNING: Load size is inaccurate */
  (param_1->ReportCreatedOn).Ticks = *FVar3.Ticks;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  if (Z_Registration_Info_UScriptStruct_FAutomatedTestPassResults.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar4 = Z_Construct_UPackage__Script_AutomationController();
    Z_Registration_Info_UScriptStruct_FAutomatedTestPassResults.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAutomatedTestPassResults,(UObject *)pUVar4,
                         L"AutomatedTestPassResults");
  }
  bVar2 = FJsonObjectConverter::UStructToJsonObjectString
                    ((UStruct *)
                     Z_Registration_Info_UScriptStruct_FAutomatedTestPassResults.OuterSingleton,
                     param_1,&local_48,0,0,0,
                     (TDelegate<TSharedPtr<FJsonValue,1>___cdecl(FProperty_*,void_const_*),FDefaultDelegateUserPolicy>
                      *)0x0,true);
  if (bVar2) {
    ::FString::PrintfImpl(&local_58,L"%s/index.json");
    fVar1 = __real_3d4ccccd;
    iVar7 = 1;
    do {
      pIVar5 = IFileManager::Get();
      local_38 = local_48.Data.AllocatorInstance.Data;
      FVar6.Data = (FScriptContainerElement *)L"";
      if (local_58.Data.ArrayNum != 0) {
        FVar6.Data = local_58.Data.AllocatorInstance.Data;
      }
      iStack_30 = local_48.Data.ArrayNum + -1;
      if (local_48.Data.ArrayNum == 0) {
        iStack_30 = 0;
      }
      local_28[0]._12_4_ = uStack_2c;
      local_28[0].Size = iStack_30;
      local_28[0].DataPtr = (wchar_t *)local_48.Data.AllocatorInstance.Data;
      bVar2 = FFileHelper::SaveStringToFile(local_28,(wchar_t *)FVar6.Data,ForceUTF8,pIVar5,0);
      if (bVar2) {
        if (3 < (byte)LogAutomationController._0_1_) {
          UE::Logging::Private::BasicLog<4>
                    (&::LOG_Static,(FLogCategoryBase *)&LogAutomationController);
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        bVar2 = true;
        goto LAB_148c5bc2d;
      }
      FWindowsPlatformProcess::Sleep(fVar1);
      iVar7 = iVar7 + 1;
    } while (iVar7 < 4);
    if (2 < (byte)LogAutomationController._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAutomationController);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  else if (1 < (byte)LogAutomationController._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAutomationController);
  }
  bVar2 = false;
LAB_148c5bc2d:
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// GenerateTestPassHtmlIndex @ 148c5c800

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FAutomationControllerManager::GenerateTestPassHtmlIndex(FAutomationControllerManager *this)

{
  float fVar1;
  bool bVar2;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar3;
  IFileManager *pIVar4;
  ForAnyElementType FVar5;
  int iVar6;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_58;
  FString local_48;
  FString local_38;
  TStringView<wchar_t> local_28 [2];
  
  if (3 < (byte)LogAutomationController._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAutomationController);
  }
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pTVar3 = &FPaths::EngineContentDir(&local_38)->Data;
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_58,pTVar3,0x21 - (uint)(pTVar3->ArrayNum != 0));
  ::FString::PathAppend((FString *)&local_58,L"Automation/Report-Template.html",0x1f);
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_58.ArrayNum != 0) {
    FVar5.Data = local_58.AllocatorInstance.Data;
  }
  bVar2 = FFileHelper::LoadFileToString(&local_48,(wchar_t *)FVar5.Data,None,0);
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    ::FString::PrintfImpl((FString *)&local_58,L"%s/index.html");
    fVar1 = __real_3d4ccccd;
    iVar6 = 1;
    do {
      pIVar4 = IFileManager::Get();
      local_38.Data.AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
      FVar5.Data = (FScriptContainerElement *)L"";
      if (local_58.ArrayNum != 0) {
        FVar5.Data = local_58.AllocatorInstance.Data;
      }
      local_38.Data.ArrayNum = local_48.Data.ArrayNum + -1;
      if (local_48.Data.ArrayNum == 0) {
        local_38.Data.ArrayNum = 0;
      }
      local_28[0]._12_4_ = local_38.Data.ArrayMax;
      local_28[0].Size = local_38.Data.ArrayNum;
      local_28[0].DataPtr = (wchar_t *)local_48.Data.AllocatorInstance.Data;
      bVar2 = FFileHelper::SaveStringToFile(local_28,(wchar_t *)FVar5.Data,ForceUTF8,pIVar4,0);
      if (bVar2) {
        if (3 < (byte)LogAutomationController._0_1_) {
          UE::Logging::Private::BasicLog<4>
                    (&::LOG_Static,(FLogCategoryBase *)&LogAutomationController);
        }
        if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.AllocatorInstance.Data);
        }
        bVar2 = true;
        goto LAB_148c5c9fb;
      }
      FWindowsPlatformProcess::Sleep(fVar1);
      iVar6 = iVar6 + 1;
    } while (iVar6 < 4);
    if (2 < (byte)LogAutomationController._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAutomationController);
    }
    if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.AllocatorInstance.Data);
    }
  }
  else if (1 < (byte)LogAutomationController._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAutomationController);
  }
  bVar2 = false;
LAB_148c5c9fb:
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// GetClusterGroupName @ 148c5cc00

/* WARNING: Enum "Type": Some values do not have unique names */

FString * __thiscall
FAutomationControllerManager::GetClusterGroupName
          (FAutomationControllerManager *this,FString *__return_storage_ptr__,int param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FString *pFVar5;
  
  piVar1 = &(this->DeviceClusterManager).Clusters.ArrayNum;
  if (((param_1 < 0) || (*piVar1 <= param_1)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ClusterIndex >= 0) && (ClusterIndex < Clusters.Num())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AutomationController\\Private\\AutomationDeviceClusterManager.cpp"
                         ,0xd8,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FString *)(*pcVar2)();
    return pFVar5;
  }
  uVar4 = 0;
  if (param_1 < *piVar1) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FString *)(*pcVar2)();
    return pFVar5;
  }
  ::FString::FString(__return_storage_ptr__,
                     (FString *)
                     ((this->DeviceClusterManager).Clusters.AllocatorInstance.Data +
                     (longlong)param_1 * 0x30));
  return __return_storage_ptr__;
}

// GetDeviceName @ 148c5d650

/* WARNING: Enum "Type": Some values do not have unique names */

FString * __thiscall
FAutomationControllerManager::GetDeviceName
          (FAutomationControllerManager *this,FString *__return_storage_ptr__,int param_1,
          int param_2)

{
  FAutomationDeviceInfo *pFVar1;
  
  pFVar1 = FAutomationDeviceClusterManager::GetDeviceInfo
                     (&this->DeviceClusterManager,param_1,param_2);
  ::FString::FString(__return_storage_ptr__,&pFVar1->DeviceName);
  return __return_storage_ptr__;
}

// GetDeviceTypeName @ 148c5d690

/* WARNING: Enum "Type": Some values do not have unique names */

FString * __thiscall
FAutomationControllerManager::GetDeviceTypeName
          (FAutomationControllerManager *this,FString *__return_storage_ptr__,int param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FString *pFVar5;
  
  piVar1 = &(this->DeviceClusterManager).Clusters.ArrayNum;
  if (((param_1 < 0) || (*piVar1 <= param_1)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ClusterIndex >= 0) && (ClusterIndex < Clusters.Num())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AutomationController\\Private\\AutomationDeviceClusterManager.cpp"
                         ,0xdf,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FString *)(*pcVar2)();
    return pFVar5;
  }
  uVar4 = 0;
  if (param_1 < *piVar1) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FString *)(*pcVar2)();
    return pFVar5;
  }
  ::FString::FString(__return_storage_ptr__,
                     (FString *)
                     ((this->DeviceClusterManager).Clusters.AllocatorInstance.Data +
                     (longlong)param_1 * 0x30 + 0x10));
  return __return_storage_ptr__;
}

// GetEnabledReports @ 148c5e0c0

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<TSharedPtr<IAutomationReport,1>,TSizedDefaultAllocator<32>_> * __thiscall
FAutomationControllerManager::GetEnabledReports
          (FAutomationControllerManager *this,
          TArray<TSharedPtr<IAutomationReport,1>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  IAutomationReport *pIVar1;
  code *pcVar2;
  bool bVar3;
  TArray<TSharedPtr<IAutomationReport,1>,TSizedDefaultAllocator<32>_> *pTVar4;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if ((this->ReportManager).ReportRoot.Object == (IAutomationReport *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArray<TSharedPtr<IAutomationReport,1>,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar4;
    }
  }
  pIVar1 = (this->ReportManager).ReportRoot.Object;
  (**(code **)(pIVar1->_padding_ + 0x158))(pIVar1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetEnabledTestNames @ 148c5e130

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAutomationControllerManager::GetEnabledTestNames
          (FAutomationControllerManager *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  IAutomationReport *pIVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 local_18;
  undefined8 local_10;
  
  if ((this->ReportManager).ReportRoot.Object == (IAutomationReport *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pIVar1 = (this->ReportManager).ReportRoot.Object;
  local_18 = 0;
  local_10 = 0;
  (**(code **)(pIVar1->_padding_ + 0x80))(pIVar1,param_1,&local_18);
  return;
}

// GetEnabledTestsNum @ 148c5e940

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall FAutomationControllerManager::GetEnabledTestsNum(FAutomationControllerManager *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if ((this->ReportManager).ReportRoot.Object == (IAutomationReport *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148c5e988. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar3 = (**(code **)(((this->ReportManager).ReportRoot.Object)->_padding_ + 0x98))();
  return iVar3;
}

// GetFilteredReports @ 148c5ed00

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<TSharedPtr<IAutomationReport,1>,TSizedDefaultAllocator<32>_> * __thiscall
FAutomationControllerManager::GetFilteredReports(FAutomationControllerManager *this)

{
  code *pcVar1;
  bool bVar2;
  TArray<TSharedPtr<IAutomationReport,1>,TSizedDefaultAllocator<32>_> *pTVar3;
  
  if ((this->ReportManager).ReportRoot.Object == (IAutomationReport *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArray<TSharedPtr<IAutomationReport,1>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148c5ed48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pTVar3 = (TArray<TSharedPtr<IAutomationReport,1>,TSizedDefaultAllocator<32>_> *)
           (**(code **)(((this->ReportManager).ReportRoot.Object)->_padding_ + 0xe0))();
  return pTVar3;
}

// GetFilteredTestNames @ 148c5edb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAutomationControllerManager::GetFilteredTestNames
          (FAutomationControllerManager *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  IAutomationReport *pIVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 local_18;
  undefined8 local_10;
  
  if ((this->ReportManager).ReportRoot.Object == (IAutomationReport *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pIVar1 = (this->ReportManager).ReportRoot.Object;
  local_18 = 0;
  local_10 = 0;
  (**(code **)(pIVar1->_padding_ + 0x88))(pIVar1,param_1,&local_18);
  return;
}

// GetGameInstanceId @ 148c5f470

/* WARNING: Enum "Type": Some values do not have unique names */

FGuid * __thiscall
FAutomationControllerManager::GetGameInstanceId
          (FAutomationControllerManager *this,FGuid *__return_storage_ptr__,int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  FAutomationDeviceInfo *pFVar4;
  
  pFVar4 = FAutomationDeviceClusterManager::GetDeviceInfo
                     (&this->DeviceClusterManager,param_1,param_2);
  uVar1 = (pFVar4->Instance).B;
  uVar2 = (pFVar4->Instance).C;
  uVar3 = (pFVar4->Instance).D;
  __return_storage_ptr__->A = (pFVar4->Instance).A;
  __return_storage_ptr__->B = uVar1;
  __return_storage_ptr__->C = uVar2;
  __return_storage_ptr__->D = uVar3;
  return __return_storage_ptr__;
}

// GetGameInstanceName @ 148c5f4a0

/* WARNING: Enum "Type": Some values do not have unique names */

FString * __thiscall
FAutomationControllerManager::GetGameInstanceName
          (FAutomationControllerManager *this,FString *__return_storage_ptr__,int param_1,
          int param_2)

{
  FAutomationDeviceInfo *pFVar1;
  
  pFVar1 = FAutomationDeviceClusterManager::GetDeviceInfo
                     (&this->DeviceClusterManager,param_1,param_2);
  ::FString::FString(__return_storage_ptr__,&pFVar1->InstanceName);
  return __return_storage_ptr__;
}

// GetNumDeviceClusters @ 148c5fce0

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
FAutomationControllerManager::GetNumDeviceClusters(FAutomationControllerManager *this)

{
  return (this->DeviceClusterManager).Clusters.ArrayNum;
}

// GetNumDevicesInCluster @ 148c5fcf0

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
FAutomationControllerManager::GetNumDevicesInCluster(FAutomationControllerManager *this,int param_1)

{
  int iVar1;
  
  iVar1 = FAutomationDeviceClusterManager::GetNumDevicesInCluster
                    (&this->DeviceClusterManager,param_1);
  return iVar1;
}

// GetNumPasses @ 148c5fde0

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall FAutomationControllerManager::GetNumPasses(FAutomationControllerManager *this)

{
  return this->NumTestPasses;
}

// GetReportOutputPath @ 148c5ff50

/* WARNING: Enum "Type": Some values do not have unique names */

FString * __thiscall
FAutomationControllerManager::GetReportOutputPath
          (FAutomationControllerManager *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->ReportExportPath);
  return __return_storage_ptr__;
}

// GetReports @ 148c5ff80

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<TSharedPtr<IAutomationReport,1>,TSizedDefaultAllocator<32>_> * __thiscall
FAutomationControllerManager::GetReports(FAutomationControllerManager *this)

{
  TArray<TSharedPtr<IAutomationReport,1>,TSizedDefaultAllocator<32>_> *pTVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000148c5ff83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pTVar1 = (TArray<TSharedPtr<IAutomationReport,1>,TSizedDefaultAllocator<32>_> *)
           (**(code **)(*(longlong *)this + 0x80))();
  return pTVar1;
}

// GetTestState @ 148c60720

/* WARNING: Enum "Type": Some values do not have unique names */

Type __thiscall FAutomationControllerManager::GetTestState(FAutomationControllerManager *this)

{
  return this->AutomationTestState;
}

// HandleFindWorkersResponseMessage @ 148c60dc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAutomationControllerManager::HandleFindWorkersResponseMessage
          (FAutomationControllerManager *this,FAutomationWorkerFindWorkersResponse *param_1,
          TSharedRef<IMessageContext,1> *param_2)

{
  uint uVar1;
  FGuid *pFVar2;
  FMessageAddress *pFVar3;
  FString local_28;
  
  if (4 < (byte)LogAutomationController._0_1_) {
    pFVar2 = (FGuid *)(**(code **)((longlong)*param_2->Object + 0x48))();
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    FGuid::AppendString(pFVar2,&local_28,Digits);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAutomationController);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  if ((((param_1->SessionId).D == (this->ActiveSessionId).D &&
       (param_1->SessionId).C == (this->ActiveSessionId).C) &&
      (param_1->SessionId).B == (this->ActiveSessionId).B) &&
      (this->ActiveSessionId).A == (param_1->SessionId).A) {
    uVar1 = this->DeviceGroupFlags;
    pFVar3 = (FMessageAddress *)(**(code **)((longlong)*param_2->Object + 0x48))();
    FAutomationDeviceClusterManager::AddDeviceFromMessage
              (&this->DeviceClusterManager,pFVar3,param_1,uVar1);
  }
  if (this->AutomationTestState == Running) {
    if (5 < (byte)LogAutomationController._0_1_) {
      pFVar2 = (FGuid *)(**(code **)((longlong)*param_2->Object + 0x48))();
      local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_28.Data.ArrayNum = 0;
      local_28.Data.ArrayMax = 0;
      FGuid::AppendString(pFVar2,&local_28,Digits);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAutomationController);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
        return;
      }
    }
  }
  else {
    (**(code **)(*(longlong *)this + 0x10))(this);
    SetControllerStatus(this,Ready);
  }
  return;
}

// HandlePerformanceDataRequest @ 148c61800

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAutomationControllerManager::HandlePerformanceDataRequest
          (FAutomationControllerManager *this,FAutomationWorkerPerformanceDataRequest *param_1,
          TSharedRef<IMessageContext,1> *param_2)

{
  FGuid *this_00;
  FAutomationWorkerMessageBase *pFVar1;
  FMessageAddress *pFVar2;
  UScriptStruct *pUVar3;
  FString local_18;
  
  if (4 < (byte)LogAutomationController._0_1_) {
    this_00 = (FGuid *)(**(code **)((longlong)*param_2->Object + 0x48))();
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    FGuid::AppendString(this_00,&local_18,Digits);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAutomationController);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  pFVar1 = FMemory::Malloc(0x28,0);
  *(undefined4 *)((longlong)&pFVar1[1].InstanceId.A + 1) = 0;
  *(undefined2 *)((longlong)&pFVar1[1].InstanceId.B + 1) = 0;
  *(undefined1 *)((longlong)&pFVar1[1].InstanceId.B + 3) = 0;
  (pFVar1->InstanceId).A = 0;
  (pFVar1->InstanceId).B = 0;
  (pFVar1->InstanceId).C = 0;
  (pFVar1->InstanceId).D = 0;
  pFVar1[1].InstanceId.C = 0;
  pFVar1[1].InstanceId.D = 0;
  pFVar1[2].InstanceId.A = 0;
  pFVar1[2].InstanceId.B = 0;
  *(undefined1 *)&pFVar1[1].InstanceId.A = 1;
  ::FString::operator=((FString *)&pFVar1[1].InstanceId.C,L"");
  pFVar2 = (FMessageAddress *)(**(code **)((longlong)*param_2->Object + 0x48))();
  pUVar3 = FAutomationWorkerPerformanceDataResponse::StaticStruct();
  SendMessage(this,pFVar1,pUVar3,pFVar2);
  return;
}

// HandlePongMessage @ 148c61900

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAutomationControllerManager::HandlePongMessage
          (FAutomationControllerManager *this,FAutomationWorkerPong *param_1,
          TSharedRef<IMessageContext,1> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FMessageAddress *pFVar5;
  uint uVar6;
  longlong lVar7;
  
  pFVar5 = (FMessageAddress *)(**(code **)((longlong)*param_2->Object + 0x48))();
  FAutomationDeviceClusterManager::UpdateDeviceFromMessage
            (&this->DeviceClusterManager,pFVar5,(FAutomationWorkerMessageBase *)param_1);
  uVar6 = 0;
  if (0 < (this->TestRunningArray).ArrayNum) {
    lVar7 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar6 < (this->TestRunningArray).ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
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
      pFVar1 = (this->TestRunningArray).AllocatorInstance.Data;
      if (((*(int *)(pFVar1 + lVar7 + 0x18) == *(int *)&param_1->field_0x8 &&
           *(int *)(pFVar1 + lVar7 + 0x14) == *(int *)&param_1->field_0x4) &&
          *(int *)(pFVar1 + lVar7 + 0x1c) == *(int *)&param_1->field_0xc) &&
          *(int *)param_1 == *(int *)(pFVar1 + lVar7 + 0x10)) {
        uVar4 = 0;
        if ((int)uVar6 < (this->TestRunningArray).ArrayNum) {
          uVar4 = ~uVar6 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        *(undefined8 *)
         ((this->TestRunningArray).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x28 + 0x20) = 0;
        return;
      }
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 0x28;
    } while ((int)uVar6 < (this->TestRunningArray).ArrayNum);
  }
  return;
}

// HandleReceivedComparisonResult @ 148c61a70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAutomationControllerManager::HandleReceivedComparisonResult
          (FAutomationControllerManager *this,FAutomationWorkerImageComparisonResults *param_1,
          TSharedRef<IMessageContext,1> *param_2)

{
  FMessageAddress *pFVar1;
  
  pFVar1 = (FMessageAddress *)(**(code **)((longlong)*param_2->Object + 0x48))();
  FAutomationDeviceClusterManager::UpdateDeviceFromMessage
            (&this->DeviceClusterManager,pFVar1,(FAutomationWorkerMessageBase *)param_1);
  ReportImageComparisonResult(this,param_1);
  return;
}

// HandleReceivedScreenShot @ 148c61ac0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAutomationControllerManager::HandleReceivedScreenShot
          (FAutomationControllerManager *this,FAutomationWorkerScreenImage *param_1,
          TSharedRef<IMessageContext,1> *param_2)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  IScreenShotManager *pIVar4;
  TNode *pTVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  char cVar12;
  bool bVar13;
  DWORD DVar14;
  FGuid *this_00;
  FMessageAddress *pFVar15;
  FString *pFVar16;
  FString *pFVar17;
  IFileManager *pIVar18;
  TArrayView<unsigned_char_const_,__int64> *pTVar19;
  UScriptStruct *pUVar20;
  FComparisonEntry *pFVar21;
  undefined8 *puVar22;
  TNode *pTVar23;
  int iVar24;
  ForAnyElementType FVar25;
  FSharedReferencer<1> FVar26;
  undefined1 auStackY_2238 [32];
  FString local_21f8;
  FString local_21e8;
  FString local_21d8;
  FString local_21c8;
  FString local_21b8;
  TRawPtrProxy<FAutomationControllerManager::FComparisonEntry> local_21a8;
  TSharedRef<IMessageContext,1> *local_21a0;
  FString local_2198;
  TSharedRef<FAutomationControllerManager::FComparisonEntry,1> local_2188;
  FString local_2178;
  FString local_2168;
  TArrayView<unsigned_char_const_,__int64> local_2158;
  FString local_2148;
  FScriptContainerElement *local_2138;
  int iStack_2130;
  undefined4 uStack_212c;
  TStringView<wchar_t> local_2128;
  FScriptContainerElement *local_2118;
  int local_2110;
  TStringView<wchar_t> local_2108;
  FScriptContainerElement *local_20f8;
  int local_20f0;
  TStringView<wchar_t> local_20e8;
  FScriptContainerElement *local_20d8;
  int local_20d0;
  FString local_20c8;
  FString local_20b8;
  FString local_20a8;
  TArrayView<unsigned_char_const_,__int64> local_2098;
  TStringView<wchar_t> local_2088;
  undefined1 local_2078 [8];
  TReferenceControllerBase<1> *local_2070;
  FString local_2068;
  TArrayView<unsigned_char_const_,__int64> local_2058;
  wchar_t local_2048 [2048];
  wchar_t local_1048 [2048];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2238;
  local_21a0 = param_2;
  if (4 < (byte)LogAutomationController._0_1_) {
    this_00 = (FGuid *)(**(code **)((longlong)*param_2->Object + 0x48))();
    local_21e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_21e8.Data.ArrayNum = 0;
    local_21e8.Data.ArrayMax = 0;
    FGuid::AppendString(this_00,&local_21e8,Digits);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAutomationController);
    if (local_21e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_21e8.Data.AllocatorInstance.Data);
    }
  }
  pFVar15 = (FMessageAddress *)(**(code **)((longlong)*param_2->Object + 0x48))();
  FAutomationDeviceClusterManager::UpdateDeviceFromMessage
            (&this->DeviceClusterManager,pFVar15,(FAutomationWorkerMessageBase *)param_1);
  local_2128.DataPtr = (wchar_t *)(param_1->Metadata).Context.Data.AllocatorInstance.Data;
  iVar1 = (param_1->Metadata).Context.Data.ArrayNum;
  local_2118 = (param_1->Metadata).ScreenShotName.Data.AllocatorInstance.Data;
  local_2128.Size = iVar1 + -1;
  if (iVar1 == 0) {
    local_2128.Size = 0;
  }
  iVar1 = (param_1->Metadata).ScreenShotName.Data.ArrayNum;
  iVar24 = 0;
  local_2110 = iVar1 + -1;
  if (iVar1 == 0) {
    local_2110 = iVar24;
  }
  FPaths::CombineInternal(&local_2068,&local_2128,2);
  pFVar16 = FPaths::GetPath(&local_20b8,&param_1->ScreenShotName);
  pFVar17 = FPaths::AutomationTransientDir(&local_20c8);
  local_2108.DataPtr = (wchar_t *)(pFVar17->Data).AllocatorInstance.Data;
  iVar1 = (pFVar17->Data).ArrayNum;
  iVar2 = (pFVar16->Data).ArrayNum;
  local_20f8 = (pFVar16->Data).AllocatorInstance.Data;
  local_2108.Size = iVar1 + -1;
  if (iVar1 == 0) {
    local_2108.Size = iVar24;
  }
  local_20f0 = iVar2 + -1;
  if (iVar2 == 0) {
    local_20f0 = iVar24;
  }
  FPaths::CombineInternal(&local_2178,&local_2108,2);
  if (local_20c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_20c8.Data.AllocatorInstance.Data);
  }
  if (local_20b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_20b8.Data.AllocatorInstance.Data);
  }
  pFVar16 = FPaths::GetCleanFilename(&local_20a8,&param_1->ScreenShotName);
  local_20e8.DataPtr = (wchar_t *)local_2178.Data.AllocatorInstance.Data;
  local_20d8 = (pFVar16->Data).AllocatorInstance.Data;
  iVar1 = (pFVar16->Data).ArrayNum;
  local_20e8.Size = local_2178.Data.ArrayNum + -1;
  if (local_2178.Data.ArrayNum == 0) {
    local_20e8.Size = 0;
  }
  local_20d0 = iVar1 + -1;
  if (iVar1 == 0) {
    local_20d0 = iVar24;
  }
  FPaths::CombineInternal(&local_21f8,&local_20e8,2);
  if (local_20a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_20a8.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_2168,L".rdc");
  FPaths::ChangeExtension(&local_21b8,&local_21f8,&local_2168);
  if (local_2168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2168.Data.AllocatorInstance.Data);
  }
  FPaths::GetPath(&local_21c8,&local_21f8);
  pIVar18 = IFileManager::Get();
  FVar25.Data = (FScriptContainerElement *)L"";
  if (local_21c8.Data.ArrayNum != 0) {
    FVar25.Data = local_21c8.Data.AllocatorInstance.Data;
  }
  cVar12 = (**(code **)((longlong)*pIVar18 + 0x60))(pIVar18,FVar25.Data,1);
  if (cVar12 == '\0') {
    if (1 < (byte)LogAutomationController._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAutomationController);
    }
  }
  else {
    pIVar18 = IFileManager::Get();
    iVar1 = (param_1->ScreenImage).ArrayNum;
    local_2158.ArrayNum = (long64)iVar1;
    FVar25.Data = (FScriptContainerElement *)L"";
    if (local_21f8.Data.ArrayNum != 0) {
      FVar25.Data = local_21f8.Data.AllocatorInstance.Data;
    }
    pFVar3 = (param_1->ScreenImage).AllocatorInstance.Data;
    if ((iVar1 < 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar13)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    local_2158.DataPtr = (uchar *)pFVar3;
    bVar13 = FFileHelper::SaveArrayToFile(&local_2158,(wchar_t *)FVar25.Data,pIVar18,0);
    if (bVar13) {
      if (0 < (param_1->FrameTrace).ArrayNum) {
        pIVar18 = IFileManager::Get();
        FVar25.Data = (FScriptContainerElement *)L"";
        if (local_21b8.Data.ArrayNum != 0) {
          FVar25.Data = local_21b8.Data.AllocatorInstance.Data;
        }
        pTVar19 = TArrayView<unsigned_char_const_,__int64>::
                  TArrayView<unsigned_char_const_,__int64><TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const_&,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>
                            (&local_2058,&param_1->FrameTrace);
        local_2098.DataPtr = pTVar19->DataPtr;
        local_2098.ArrayNum = pTVar19->ArrayNum;
        bVar13 = FFileHelper::SaveArrayToFile(&local_2098,(wchar_t *)FVar25.Data,pIVar18,0);
        if (!bVar13) {
          DVar14 = FWindowsPlatformMisc::GetLastError();
          FWindowsPlatformMisc::GetSystemErrorMessage(local_1048,0x800,DVar14);
          if (2 < (byte)LogAutomationController._0_1_) {
            UE::Logging::Private::BasicLog<3>
                      (&::LOG_Static,(FLogCategoryBase *)&LogAutomationController);
          }
        }
      }
      local_21d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_21d8.Data.ArrayNum = 0;
      local_21d8.Data.ArrayMax = 0;
      pUVar20 = FAutomationScreenshotMetadata::StaticStruct();
      bVar13 = FJsonObjectConverter::UStructToJsonObjectString
                         ((UStruct *)pUVar20,&param_1->Metadata,&local_21d8,0,0,0,
                          (TDelegate<TSharedPtr<FJsonValue,1>___cdecl(FProperty_*,void_const_*),FDefaultDelegateUserPolicy>
                           *)0x0,true);
      if (bVar13) {
        ::FString::FString(&local_2148,L"json");
        FPaths::ChangeExtension(&local_2198,&local_21f8,&local_2148);
        if (local_2148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2148.Data.AllocatorInstance.Data);
        }
        pIVar18 = IFileManager::Get();
        local_2138 = local_21d8.Data.AllocatorInstance.Data;
        FVar25.Data = (FScriptContainerElement *)L"";
        if (local_2198.Data.ArrayNum != 0) {
          FVar25.Data = local_2198.Data.AllocatorInstance.Data;
        }
        iStack_2130 = local_21d8.Data.ArrayNum + -1;
        if (local_21d8.Data.ArrayNum == 0) {
          iStack_2130 = 0;
        }
        local_2088._12_4_ = uStack_212c;
        local_2088.Size = iStack_2130;
        local_2088.DataPtr = (wchar_t *)local_21d8.Data.AllocatorInstance.Data;
        FFileHelper::SaveStringToFile
                  (&local_2088,(wchar_t *)FVar25.Data,ForceUTF8WithoutBOM,pIVar18,0);
        if (local_2198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2198.Data.AllocatorInstance.Data);
        }
      }
      pFVar21 = ::operator_new(0x30);
      local_21a8.Object = (FComparisonEntry *)0x0;
      if (pFVar21 != (FComparisonEntry *)0x0) {
        (pFVar21->Sender).UniqueId.A = 0;
        (pFVar21->Sender).UniqueId.B = 0;
        *(undefined8 *)&(pFVar21->Sender).UniqueId.C = 0;
        (pFVar21->InstanceId).A = 0;
        (pFVar21->InstanceId).B = 0;
        (pFVar21->InstanceId).C = 0;
        (pFVar21->InstanceId).D = 0;
        *(undefined8 *)&(pFVar21->PendingComparison).field_0x0 = 0;
        *(undefined8 *)&(pFVar21->PendingComparison).field_0x8 = 0;
        local_21a8.Object = pFVar21;
      }
      TSharedRef<FAutomationControllerManager::FComparisonEntry,1>::
      TSharedRef<FAutomationControllerManager::FComparisonEntry,1><FAutomationControllerManager::FComparisonEntry>
                (&local_2188,&local_21a8);
      puVar22 = (undefined8 *)(**(code **)((longlong)*local_21a0->Object + 0x48))();
      uVar7 = *puVar22;
      uVar8 = puVar22[1];
      ((local_2188.Object)->Sender).UniqueId.A = (int)uVar7;
      ((local_2188.Object)->Sender).UniqueId.B = (int)((ulonglong)uVar7 >> 0x20);
      ((local_2188.Object)->Sender).UniqueId.C = (int)uVar8;
      ((local_2188.Object)->Sender).UniqueId.D = (int)((ulonglong)uVar8 >> 0x20);
      uVar9 = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
      uVar10 = *(undefined4 *)&param_1->_padding_;
      uVar11 = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
      ((local_2188.Object)->InstanceId).A = *(undefined4 *)&param_1->_padding_;
      ((local_2188.Object)->InstanceId).B = uVar9;
      ((local_2188.Object)->InstanceId).C = uVar10;
      ((local_2188.Object)->InstanceId).D = uVar11;
      if (((this->ScreenshotManager).Object == (IScreenShotManager *)0x0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar13)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pIVar4 = (this->ScreenshotManager).Object;
      puVar22 = (undefined8 *)
                (**(code **)((longlong)*pIVar4 + 8))
                          (pIVar4,local_2078,&local_21f8,&param_1->Metadata);
      if (&(local_2188.Object)->PendingComparison != (TFuture<FImageComparisonResult> *)puVar22) {
        *(undefined8 *)&(local_2188.Object)->PendingComparison = *puVar22;
        *puVar22 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  ((FSharedReferencer<1> *)&((local_2188.Object)->PendingComparison).field_0x8,
                   (FSharedReferencer<1> *)(puVar22 + 1));
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_2070);
      if ((FComparisonEntry *)local_2188.SharedReferenceCount.ReferenceController !=
          (FComparisonEntry *)0x0) {
        LOCK();
        (local_2188.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_2188.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pTVar23 = ::operator_new(0x18);
      FVar26.ReferenceController = local_2188.SharedReferenceCount.ReferenceController;
      if (pTVar23 != (TNode *)0x0) {
        pTVar23->NextNode = (TNode *)0x0;
        (pTVar23->Item).Object = local_2188.Object;
        (pTVar23->Item).SharedReferenceCount.ReferenceController =
             local_2188.SharedReferenceCount.ReferenceController;
        pTVar5 = (this->ComparisonQueue).Head;
        (this->ComparisonQueue).Head = pTVar23;
        pTVar5->NextNode = pTVar23;
        FVar26.ReferenceController = (TReferenceControllerBase<1> *)(FComparisonEntry *)0x0;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar26.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_2188.SharedReferenceCount.ReferenceController);
      if (local_21d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_21d8.Data.AllocatorInstance.Data);
      }
    }
    else {
      DVar14 = FWindowsPlatformMisc::GetLastError();
      FWindowsPlatformMisc::GetSystemErrorMessage(local_2048,0x800,DVar14);
      if (2 < (byte)LogAutomationController._0_1_) {
        UE::Logging::Private::BasicLog<3>
                  (&::LOG_Static,(FLogCategoryBase *)&LogAutomationController);
      }
    }
  }
  if (local_21c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_21c8.Data.AllocatorInstance.Data);
  }
  if (local_21b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_21b8.Data.AllocatorInstance.Data);
  }
  if (local_21f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_21f8.Data.AllocatorInstance.Data);
  }
  if (local_2178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2178.Data.AllocatorInstance.Data);
  }
  if (local_2068.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2068.Data.AllocatorInstance.Data);
  }
  return;
}

// HandleReceivedTelemetryData @ 148c621a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAutomationControllerManager::HandleReceivedTelemetryData
          (FAutomationControllerManager *this,FAutomationWorkerTelemetryData *param_1,
          TSharedRef<IMessageContext,1> *param_2)

{
  FMessageAddress *pFVar1;
  
  pFVar1 = (FMessageAddress *)(**(code **)((longlong)*param_2->Object + 0x48))();
  FAutomationDeviceClusterManager::UpdateDeviceFromMessage
            (&this->DeviceClusterManager,pFVar1,(FAutomationWorkerMessageBase *)param_1);
  FAutomationTelemetry::HandleAddTelemetry(param_1);
  return;
}

// HandleRequestNextNetworkCommandMessage @ 148c629e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAutomationControllerManager::HandleRequestNextNetworkCommandMessage
          (FAutomationControllerManager *this,FAutomationWorkerRequestNextNetworkCommand *param_1,
          TSharedRef<IMessageContext,1> *param_2)

{
  code *pcVar1;
  IAutomationReport *pIVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  FGuid *this_00;
  FMessageAddress *pFVar8;
  UScriptStruct *pUVar9;
  FAutomationWorkerMessageBase *pFVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  FSharedReferencer<1> FVar13;
  uint local_res8 [2];
  int local_res10 [2];
  TSharedPtr<IAutomationReport,1> local_68;
  FString local_58;
  TArray<FMessageAddress,TSizedDefaultAllocator<32>_> local_48;
  TSharedPtr<IAutomationReport,1> local_38;
  
  uVar11 = 0;
  if (4 < (byte)LogAutomationController._0_1_) {
    this_00 = (FGuid *)(**(code **)((longlong)*param_2->Object + 0x48))();
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Data.ArrayNum = 0;
    local_58.Data.ArrayMax = 0;
    FGuid::AppendString(this_00,&local_58,Digits);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAutomationController);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  pFVar8 = (FMessageAddress *)(**(code **)((longlong)*param_2->Object + 0x48))();
  FAutomationDeviceClusterManager::UpdateDeviceFromMessage
            (&this->DeviceClusterManager,pFVar8,(FAutomationWorkerMessageBase *)param_1);
  if (param_1->ExecutionCount == this->ExecutionCount) {
    bVar4 = FAutomationDeviceClusterManager::FindDevice
                      (&this->DeviceClusterManager,(FGuid *)param_1,(int *)local_res8,local_res10);
    if ((!bVar4) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("DeviceClusterManager.FindDevice(Message.InstanceId, ClusterIndex, DeviceIndex)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AutomationController\\Private\\AutomationControllerManager.cpp"
                           ,0x5bc,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FAutomationDeviceClusterManager::GetTest
              (&this->DeviceClusterManager,&local_68,local_res8[0],local_res10[0]);
    pIVar2 = local_68.Object;
    if (local_68.Object == (IAutomationReport *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Report.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AutomationController\\Private\\AutomationControllerManager.cpp"
                         ,0x5c0,L"");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    cVar5 = (**(code **)(pIVar2->_padding_ + 400))(pIVar2);
    if ((cVar5 != '\0') && ((this->ClusterDistributionMask >> (local_res8[0] & 0x1f) & 1) != 0)) {
      if ((pIVar2 == (IAutomationReport *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      (**(code **)(pIVar2->_padding_ + 0x198))(pIVar2);
      FVar13.ReferenceController = local_68.SharedReferenceCount.ReferenceController;
      local_38.Object = local_68.Object;
      local_38.SharedReferenceCount.ReferenceController =
           local_68.SharedReferenceCount.ReferenceController;
      if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      FAutomationDeviceClusterManager::GetDevicesReservedForTest
                (&this->DeviceClusterManager,&local_48,local_res8[0],&local_38);
      if ((pIVar2 == (IAutomationReport *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      iVar3 = local_48.ArrayNum;
      iVar6 = (**(code **)(pIVar2->_padding_ + 0x180))(pIVar2);
      if ((iVar3 != iVar6) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("DeviceAddresses.Num() == Report->GetNumParticipantsRequired()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AutomationController\\Private\\AutomationControllerManager.cpp"
                             ,0x5cd,L""), bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (0 < local_48.ArrayNum) {
        do {
          uVar7 = 0;
          if ((int)uVar11 < local_48.ArrayNum) {
            uVar7 = ~uVar11 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          pFVar12 = local_48.AllocatorInstance.Data + (longlong)(int)uVar11 * 0x10;
          pUVar9 = FAutomationWorkerNextNetworkCommandReply::StaticStruct();
          pFVar10 = FMemory::Malloc(0x10,0);
          (pFVar10->InstanceId).A = 0;
          (pFVar10->InstanceId).B = 0;
          (pFVar10->InstanceId).C = 0;
          (pFVar10->InstanceId).D = 0;
          SendMessage(this,pFVar10,pUVar9,(FMessageAddress *)pFVar12);
          uVar11 = uVar11 + 1;
          FVar13.ReferenceController = local_68.SharedReferenceCount.ReferenceController;
        } while ((int)uVar11 < local_48.ArrayNum);
      }
      local_68.SharedReferenceCount.ReferenceController = FVar13.ReferenceController;
      if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.AllocatorInstance.Data);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.SharedReferenceCount.ReferenceController);
  }
  return;
}

// HandleRequestTestsReplyCompleteMessage @ 148c62d20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAutomationControllerManager::HandleRequestTestsReplyCompleteMessage
          (FAutomationControllerManager *this,FAutomationWorkerRequestTestsReplyComplete *param_1,
          TSharedRef<IMessageContext,1> *param_2)

{
  int iVar1;
  int iVar2;
  EAutomationTestFlags EVar3;
  IAutomationReport *pIVar4;
  code *pcVar5;
  undefined4 uVar6;
  bool bVar7;
  uint uVar8;
  FGuid *pFVar9;
  FMessageAddress *pFVar10;
  longlong lVar11;
  ForAnyElementType FVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  FScriptContainerElement *pFVar15;
  FIdentityFunctor local_res8;
  undefined1 local_res10 [8];
  TSharedRef<IMessageContext,1> *local_res18;
  undefined1 local_res20 [8];
  ForAnyElementType local_148;
  uint local_140;
  undefined1 local_13c [12];
  int local_130 [2];
  FString local_128;
  FString local_118;
  FMemScope local_108 [2];
  FAutomationTestInfo local_f8;
  undefined1 local_58 [8];
  TReferenceControllerBase<1> *local_50;
  
  local_res18 = param_2;
  if (4 < (byte)LogAutomationController._0_1_) {
    pFVar9 = (FGuid *)(**(code **)((longlong)*param_2->Object + 0x48))();
    local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_128.Data.ArrayNum = 0;
    local_128.Data.ArrayMax = 0;
    FGuid::AppendString(pFVar9,&local_128,Digits);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAutomationController);
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
  }
  pFVar10 = (FMessageAddress *)(**(code **)((longlong)*param_2->Object + 0x48))();
  FAutomationDeviceClusterManager::UpdateDeviceFromMessage
            (&this->DeviceClusterManager,pFVar10,(FAutomationWorkerMessageBase *)param_1);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name1505,L"AutomationTest/Controller");
    _Init_thread_footer(&::_TSS0);
  }
  FVar12.Data = (FScriptContainerElement *)&DAT_00000001;
  FLLMScope::FLLMScope((FLLMScope *)(local_13c + 8),LLMScope_Name1505,false,None,Default,true);
  FMemScope::FMemScope(local_108,&LLMScope_Name1505,true);
  uVar13 = (param_1->Tests).ArrayNum;
  local_148.Data = (FScriptContainerElement *)0x0;
  local_13c._0_4_ = 0;
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
  }
  DestructItems<FAutomationTestInfo,int>((FAutomationTestInfo *)0x0,0);
  local_140 = 0;
  if ((0 < (int)uVar13) && (local_13c._0_4_ != uVar13)) {
    FVar12.Data = (FScriptContainerElement *)local_13c;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x98,8,uVar13,&local_148,0,(int *)FVar12.Data);
  }
  iVar1 = (param_1->Tests).ArrayNum;
  pFVar15 = (param_1->Tests).AllocatorInstance.Data;
  pFVar14 = pFVar15 + (longlong)iVar1 * 0xa0;
  while( true ) {
    uVar13 = 0;
    if ((param_1->Tests).ArrayNum != iVar1) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FAutomationWorkerSingleTestReply_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar15 == pFVar14) break;
    iVar2 = *(int *)(pFVar15 + 0x60);
    uVar13 = *(uint *)(pFVar15 + 0x8c);
    EVar3 = *(EAutomationTestFlags *)(pFVar15 + 0x88);
    ::FString::FString(&local_f8.DisplayName,(FString *)(pFVar15 + 0x10));
    ::FString::FString(&local_f8.FullTestPath,(FString *)(pFVar15 + 0x20));
    ::FString::FString(&local_f8.TestName,(FString *)(pFVar15 + 0x30));
    ::FString::FString(&local_f8.TestTags,(FString *)(pFVar15 + 0x90));
    ::FString::FString(&local_f8.TestParameter,(FString *)(pFVar15 + 0x40));
    ::FString::FString(&local_f8.SourceFile,(FString *)(pFVar15 + 0x50));
    local_f8.SourceFileLine = iVar2;
    ::FString::FString(&local_f8.AssetPath,(FString *)(pFVar15 + 0x68));
    ::FString::FString(&local_f8.OpenCommand,(FString *)(pFVar15 + 0x78));
    local_f8.NumDevicesCurrentlyRunningTest = 0;
    local_f8.TestFlags = EVar3;
    local_f8.NumParticipantsRequired = uVar13;
    if (((local_148.Data <= &local_f8) &&
        (&local_f8 < (FAutomationTestInfo *)(local_148.Data + (longlong)(int)local_13c._0_4_ * 0x98)
        )) && (FVar12.Data = local_148.Data,
              bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (local_140 == local_13c._0_4_) {
      local_140 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x898,&local_148,(int *)local_13c);
    }
    lVar11 = (longlong)(int)local_140;
    local_140 = local_140 + 1;
    FAutomationTestInfo::FAutomationTestInfo
              ((FAutomationTestInfo *)(local_148.Data + lVar11 * 0x98),&local_f8);
    if (local_f8.OpenCommand.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.OpenCommand.Data.AllocatorInstance.Data);
    }
    if (local_f8.AssetPath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.AssetPath.Data.AllocatorInstance.Data);
    }
    if (local_f8.SourceFile.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.SourceFile.Data.AllocatorInstance.Data);
    }
    if (local_f8.TestParameter.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.TestParameter.Data.AllocatorInstance.Data);
    }
    if (local_f8.TestTags.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.TestTags.Data.AllocatorInstance.Data);
    }
    if (local_f8.TestName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.TestName.Data.AllocatorInstance.Data);
    }
    if (local_f8.FullTestPath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.FullTestPath.Data.AllocatorInstance.Data);
    }
    if (local_f8.DisplayName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.DisplayName.Data.AllocatorInstance.Data);
    }
    pFVar15 = pFVar15 + 0xa0;
  }
  if (4 < (byte)LogAutomationController._0_1_) {
    pFVar9 = (FGuid *)(**(code **)((longlong)*local_res18->Object + 0x48))();
    local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_118.Data.ArrayNum = 0;
    local_118.Data.ArrayMax = 0;
    FGuid::AppendString(pFVar9,&local_118,Digits);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAutomationController);
    if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.Data.AllocatorInstance.Data);
    }
  }
  local_13c._4_4_ = 0xffffffff;
  local_130[0] = -1;
  bVar7 = FAutomationDeviceClusterManager::FindDevice
                    (&this->DeviceClusterManager,(FGuid *)param_1,(int *)(local_13c + 4),local_130);
  if (bVar7) {
    local_res8 = SUB81(this,0);
    AlgoImpl::
    IntroSortInternal<FAutomationTestInfo,int,FIdentityFunctor,TDereferenceWrapper<FAutomationTestInfo,_FAutomationControllerManager::SetTestNames_::__l5::FCompareAutomationTestInfo>_>
              ((FAutomationTestInfo *)local_148.Data,local_140,local_res8,
               (FCompareAutomationTestInfo *)local_res20);
    if (0 < (int)local_140) {
      do {
        uVar6 = local_13c._4_4_;
        iVar1 = this->NumTestPasses;
        uVar8 = 0;
        if ((int)uVar13 < (int)local_140) {
          uVar8 = ~uVar13 >> 0x1f;
        }
        if (uVar8 == 0) {
          FVar12.Data = (FScriptContainerElement *)(longlong)(int)local_140;
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar7) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        pFVar15 = local_148.Data + (longlong)(int)uVar13 * 0x98;
        if (((this->ReportManager).ReportRoot.Object == (IAutomationReport *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pIVar4 = (this->ReportManager).ReportRoot.Object;
        (**(code **)(pIVar4->_padding_ + 0x148))(pIVar4,local_58,pFVar15,uVar6,iVar1,FVar12.Data);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_50);
        uVar13 = uVar13 + 1;
      } while ((int)uVar13 < (int)local_140);
    }
  }
  this->RefreshTestResponses = this->RefreshTestResponses + 1;
  if (this->RefreshTestResponses == (this->DeviceClusterManager).Clusters.ArrayNum) {
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              (&this->TestsRefreshedDelegate);
  }
  DestructItems<FAutomationTestInfo,int>((FAutomationTestInfo *)local_148.Data,local_140);
  if ((FAutomationTestInfo *)local_148.Data != (FAutomationTestInfo *)0x0) {
    FMemory::Free(local_148.Data);
  }
  FMemScope::~FMemScope(local_108);
  FLLMScope::~FLLMScope((FLLMScope *)(local_13c + 8));
  return;
}

// HandleRunTestsReplyMessage @ 148c632d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FAutomationControllerManager::HandleRunTestsReplyMessage
          (FAutomationControllerManager *this,FAutomationWorkerRunTestsReply *param_1,
          TSharedRef<IMessageContext,1> *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  IAutomationReport *pIVar5;
  bool bVar6;
  uint uVar7;
  FMessageAddress *pFVar8;
  FAutomationDeviceInfo *pFVar9;
  uint uVar10;
  atomic<int> *paVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  int local_res8 [2];
  int local_res10 [2];
  FAutomationTestResults *local_res18;
  FString local_e8;
  TSharedPtr<IAutomationReport,1> local_d8;
  EAutomationState local_c8 [4];
  float local_c4;
  FScriptContainerElement *local_c0;
  int local_b8;
  int local_b4;
  FAutomationArtifact *local_b0;
  undefined8 local_a8;
  TArray<FAutomationExecutionEntry,TSizedDefaultAllocator<32>_> local_a0;
  undefined8 uStack_90;
  FGuid local_88;
  TSharedPtr<IAutomationReport,1> local_78;
  TSharedPtr<IAutomationReport,1> local_68;
  TSharedPtr<IAutomationReport,1> local_58 [2];
  
  pFVar8 = (FMessageAddress *)(**(code **)((longlong)*param_2->Object + 0x48))();
  FAutomationDeviceClusterManager::UpdateDeviceFromMessage
            (&this->DeviceClusterManager,pFVar8,(FAutomationWorkerMessageBase *)param_1);
  if (param_1->ExecutionCount == this->ExecutionCount) {
    local_c8[0] = param_1->State;
    local_a0.ArrayNum = 0;
    local_a0.ArrayMax = 0;
    uStack_90 = 0;
    local_c4 = param_1->Duration;
    local_c0 = (void *)0x0;
    local_b0 = (FAutomationArtifact *)0x0;
    local_a8 = 0;
    local_a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    bVar6 = FAutomationDeviceClusterManager::FindDevice
                      (&this->DeviceClusterManager,(FGuid *)param_1,local_res10,local_res8);
    if ((!bVar6) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("DeviceClusterManager.FindDevice(Message.InstanceId, ClusterIndex, DeviceIndex)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AutomationController\\Private\\AutomationControllerManager.cpp"
                           ,0x65b,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar9 = FAutomationDeviceClusterManager::GetDeviceInfo
                       (&this->DeviceClusterManager,local_res10[0],local_res8[0]);
    local_88.A = (pFVar9->Instance).A;
    local_88.B = (pFVar9->Instance).B;
    local_88.C = (pFVar9->Instance).C;
    local_88.D = (pFVar9->Instance).D;
    local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_e8.Data.ArrayNum = 0;
    local_e8.Data.ArrayMax = 0;
    FGuid::AppendString(&local_88,&local_e8,Digits);
    if (local_c0 != (void *)0x0) {
      FMemory::Free(local_c0);
    }
    local_c0 = local_e8.Data.AllocatorInstance.Data;
    local_b8 = local_e8.Data.ArrayNum;
    local_b4 = local_e8.Data.ArrayMax;
    local_e8.Data.ArrayNum = 0;
    local_e8.Data.ArrayMax = 0;
    local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    uVar4._0_4_ = param_1->WarningTotal;
    uVar4._4_4_ = param_1->ErrorTotal;
    TArray<FAutomationExecutionEntry,TSizedDefaultAllocator<32>_>::operator=
              (&local_a0,&param_1->Entries);
    uStack_90 = uVar4;
    FAutomationDeviceClusterManager::GetTest
              (&this->DeviceClusterManager,&local_d8,local_res10[0],local_res8[0]);
    pIVar5 = local_d8.Object;
    if (local_d8.Object != (IAutomationReport *)0x0) {
      if ((local_d8.Object == (IAutomationReport *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      (**(code **)(pIVar5->_padding_ + 0x100))(pIVar5,local_res10[0],this->CurrentTestPass,local_c8)
      ;
      if ((pIVar5 == (IAutomationReport *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_res18 = (FAutomationTestResults *)
                    (**(code **)(pIVar5->_padding_ + 0x128))
                              (pIVar5,local_res10[0],this->CurrentTestPass);
      iVar1 = this->CurrentTestPass;
      local_78.Object = local_d8.Object;
      local_78.SharedReferenceCount.ReferenceController =
           local_d8.SharedReferenceCount.ReferenceController;
      if (local_d8.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
        paVar11 = (atomic<int> *)&DAT_00000008;
      }
      else {
        paVar11 = &(local_d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
        LOCK();
        *paVar11 = (atomic<int>)((int)*paVar11 + 1);
        UNLOCK();
      }
      ReportAutomationResult(this,&local_78,local_res10[0],iVar1);
      local_68.Object = local_d8.Object;
      local_68.SharedReferenceCount.ReferenceController =
           local_d8.SharedReferenceCount.ReferenceController;
      if (local_d8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *paVar11 = (atomic<int>)((int)*paVar11 + 1);
        UNLOCK();
      }
      CollectTestResults(this,&local_68,local_res18);
    }
    local_58[0].Object = (IAutomationReport *)0x0;
    local_58[0].SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    FAutomationDeviceClusterManager::SetTest
              (&this->DeviceClusterManager,local_res10[0],local_res8[0],local_58);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_d8.SharedReferenceCount.ReferenceController);
    DestructItems<FAutomationExecutionEntry,int>
              ((FAutomationExecutionEntry *)local_a0.AllocatorInstance.Data,local_a0.ArrayNum);
    if ((FAutomationExecutionEntry *)local_a0.AllocatorInstance.Data !=
        (FAutomationExecutionEntry *)0x0) {
      FMemory::Free(local_a0.AllocatorInstance.Data);
    }
    DestructItems<FAutomationArtifact,int>(local_b0,(int)local_a8);
    if (local_b0 != (FAutomationArtifact *)0x0) {
      FMemory::Free(local_b0);
    }
    if (local_c0 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0);
    }
  }
  uVar12 = 0;
  uVar13 = uVar12;
  if (0 < (this->TestRunningArray).ArrayNum) {
    while( true ) {
      uVar10 = (uint)uVar12;
      uVar7 = 0;
      if ((int)uVar10 < (this->TestRunningArray).ArrayNum) {
        uVar7 = ~uVar10 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (this->TestRunningArray).AllocatorInstance.Data;
      if (((*(int *)(pFVar2 + uVar13 + 0x18) == (int)param_1->_padding_ &&
           *(int *)(pFVar2 + uVar13 + 0x14) == *(int *)((longlong)&param_1->_padding_ + 4)) &&
          *(int *)(pFVar2 + uVar13 + 0x1c) == *(int *)((longlong)&param_1->_padding_ + 4)) &&
          (int)param_1->_padding_ == *(int *)(pFVar2 + uVar13 + 0x10)) break;
      uVar12 = (ulonglong)(uVar10 + 1);
      uVar13 = uVar13 + 0x28;
      if ((this->TestRunningArray).ArrayNum <= (int)(uVar10 + 1)) {
        return;
      }
    }
    TArray<FAutomationControllerManager::FTestRunningInfo,TSizedDefaultAllocator<32>_>::RemoveAt
              (&this->TestRunningArray,uVar10,Default);
  }
  return;
}

// HandleTestDataRequest @ 148c636a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAutomationControllerManager::HandleTestDataRequest
          (FAutomationControllerManager *this,FAutomationWorkerTestDataRequest *param_1,
          TSharedRef<IMessageContext,1> *param_2)

{
  code *pcVar1;
  FScriptContainerElement *_Src;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  FGuid *this_00;
  FMessageAddress *pFVar6;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar7;
  IFileManager *pIVar8;
  FString *pFVar9;
  FAutomationWorkerMessageBase *pFVar10;
  UScriptStruct *pUVar11;
  wchar_t *pwVar12;
  ForAnyElementType FVar13;
  longlong lVar14;
  uint uVar15;
  undefined1 uVar16;
  undefined1 auStackY_1a8 [32];
  FString local_168;
  FString local_158;
  FString local_148;
  FString local_138;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_128;
  FString local_118;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_108;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_f8;
  FString local_e8;
  FScriptContainerElement *local_d8;
  int iStack_d0;
  undefined4 uStack_cc;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  TStringView<wchar_t> local_88;
  TStringView<wchar_t> local_78;
  wchar_t *local_68;
  undefined4 local_60;
  FScriptContainerElement *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if (4 < (byte)LogAutomationController._0_1_) {
    this_00 = (FGuid *)(**(code **)((longlong)*param_2->Object + 0x48))();
    local_148.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_148.Data.ArrayNum = 0;
    local_148.Data.ArrayMax = 0;
    FGuid::AppendString(this_00,&local_148,Digits);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAutomationController);
    if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
    }
  }
  pFVar6 = (FMessageAddress *)(**(code **)((longlong)*param_2->Object + 0x48))();
  FAutomationDeviceClusterManager::UpdateDeviceFromMessage
            (&this->DeviceClusterManager,pFVar6,(FAutomationWorkerMessageBase *)param_1);
  pTVar7 = &FPaths::ProjectDir(&local_c8)->Data;
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_108,pTVar7,6 - (uint)(pTVar7->ArrayNum != 0));
  ::FString::PathAppend((FString *)&local_108,L"Test",4);
  FPaths::ConvertRelativePathToFull(&local_118,(FString *)&local_108);
  if (local_108.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.AllocatorInstance.Data);
  }
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  pTVar7 = &::operator/(&local_b8,&param_1->DataType,&param_1->DataPlatform)->Data;
  iVar4 = (param_1->DataTestName).Data.ArrayNum;
  iVar3 = 1;
  iVar5 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar5 = 0;
  }
  if ((pTVar7->ArrayNum == 0) && (iVar5 != -1)) {
    iVar3 = 2;
  }
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_128,pTVar7,iVar5 + iVar3);
  ::FString::PathAppend
            ((FString *)&local_128,(wchar_t *)(param_1->DataTestName).Data.AllocatorInstance.Data,
             iVar5);
  iVar4 = (param_1->DataName).Data.ArrayNum;
  iVar5 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar5 = 0;
  }
  if ((local_128.ArrayNum != 0) || (iVar4 = 2, iVar5 == -1)) {
    iVar4 = 1;
  }
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_f8,&local_128,iVar5 + iVar4);
  ::FString::PathAppend
            ((FString *)&local_f8,(wchar_t *)(param_1->DataName).Data.AllocatorInstance.Data,iVar5);
  ::FString::ConcatFC(&local_138,(FString *)&local_f8,L".json");
  if (local_f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.AllocatorInstance.Data);
  }
  if (local_128.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.AllocatorInstance.Data);
  }
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  FVar13.Data = local_118.Data.AllocatorInstance.Data;
  iVar4 = local_138.Data.ArrayNum + -1;
  if (local_138.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  local_168.Data.ArrayNum = local_118.Data.ArrayNum;
  if ((local_118.Data.ArrayNum == 0) && (iVar4 != -1)) {
    iVar5 = iVar4 + 2;
LAB_148c638e0:
    local_168.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (iVar5 != 0) goto LAB_148c638ea;
    local_168.Data.ArrayMax = 0;
  }
  else {
    iVar5 = iVar4 + 1;
    if (local_118.Data.ArrayNum == 0) goto LAB_148c638e0;
LAB_148c638ea:
    local_168.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    uVar15 = local_118.Data.ArrayNum + iVar5;
    if ((int)uVar15 < local_118.Data.ArrayNum) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar15,0,(ForAnyElementType *)&local_168,local_118.Data.ArrayNum,
               &local_168.Data.ArrayMax);
    if (local_118.Data.ArrayNum != 0) {
      memcpy(local_168.Data.AllocatorInstance.Data,FVar13.Data,(longlong)local_118.Data.ArrayNum * 2
            );
    }
  }
  ::FString::PathAppend(&local_168,(wchar_t *)local_138.Data.AllocatorInstance.Data,iVar4);
  pIVar8 = IFileManager::Get();
  pcVar1 = *(code **)((longlong)*pIVar8 + 0x60);
  pFVar9 = FPaths::GetPath(&local_a8,&local_138);
  if ((pFVar9->Data).ArrayNum == 0) {
    pwVar12 = L"";
  }
  else {
    pwVar12 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
  }
  (*pcVar1)(pIVar8,pwVar12);
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  local_158.Data.ArrayNum = (param_1->JsonData).Data.ArrayNum;
  lVar14 = (longlong)local_158.Data.ArrayNum;
  uVar16 = 1;
  _Src = (param_1->JsonData).Data.AllocatorInstance.Data;
  local_158.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_158.Data.ArrayNum == 0) {
    local_158.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_158.Data.ArrayNum,0,(ForAnyElementType *)&local_158,local_158.Data.ArrayNum
               ,&local_158.Data.ArrayMax);
    memcpy(local_158.Data.AllocatorInstance.Data,_Src,lVar14 * 2);
  }
  bVar2 = FPaths::FileExists(&local_168);
  iVar4 = 0;
  if (bVar2) {
    FVar13.Data = (FScriptContainerElement *)L"";
    if (local_168.Data.ArrayNum != 0) {
      FVar13.Data = local_168.Data.AllocatorInstance.Data;
    }
    bVar2 = FFileHelper::LoadFileToString(&local_158,(wchar_t *)FVar13.Data,None,0);
    if (bVar2) {
      uVar16 = 0;
      goto LAB_148c63ae2;
    }
  }
  pFVar9 = FPaths::AutomationTransientDir(&local_98);
  local_60 = 5;
  local_78.DataPtr = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
  iVar5 = (pFVar9->Data).ArrayNum;
  local_78.Size = iVar5 + -1;
  if (iVar5 == 0) {
    local_78.Size = iVar4;
  }
  local_68 = L"Data/";
  local_58 = local_138.Data.AllocatorInstance.Data;
  local_50 = local_138.Data.ArrayNum + -1;
  if (local_138.Data.ArrayNum == 0) {
    local_50 = iVar4;
  }
  FPaths::CombineInternal(&local_e8,&local_78,3);
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  pIVar8 = IFileManager::Get();
  local_d8 = (param_1->JsonData).Data.AllocatorInstance.Data;
  iVar5 = (param_1->JsonData).Data.ArrayNum;
  FVar13.Data = (FScriptContainerElement *)L"";
  if (local_e8.Data.ArrayNum != 0) {
    FVar13.Data = local_e8.Data.AllocatorInstance.Data;
  }
  iStack_d0 = iVar5 + -1;
  if (iVar5 == 0) {
    iStack_d0 = iVar4;
  }
  local_88._12_4_ = uStack_cc;
  local_88.Size = iStack_d0;
  local_88.DataPtr = (wchar_t *)local_d8;
  FFileHelper::SaveStringToFile(&local_88,(wchar_t *)FVar13.Data,AutoDetect,pIVar8,0);
  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
LAB_148c63ae2:
  pFVar10 = FMemory::Malloc(0x28,0);
  *(undefined4 *)((longlong)&pFVar10[2].InstanceId.A + 1) = 0;
  *(undefined2 *)((longlong)&pFVar10[2].InstanceId.B + 1) = 0;
  *(undefined1 *)((longlong)&pFVar10[2].InstanceId.B + 3) = 0;
  (pFVar10->InstanceId).A = 0;
  (pFVar10->InstanceId).B = 0;
  (pFVar10->InstanceId).C = 0;
  (pFVar10->InstanceId).D = 0;
  (((FString *)(pFVar10 + 1))->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar10[1].InstanceId.C = 0;
  pFVar10[1].InstanceId.D = 0;
  *(undefined1 *)&pFVar10[2].InstanceId.A = uVar16;
  iVar5 = local_158.Data.ArrayNum + -1;
  if (local_158.Data.ArrayNum == 0) {
    iVar5 = iVar4;
  }
  ::FString::AssignRange
            ((FString *)(pFVar10 + 1),(wchar_t *)local_158.Data.AllocatorInstance.Data,iVar5);
  pFVar6 = (FMessageAddress *)(**(code **)((longlong)*param_2->Object + 0x48))();
  pUVar11 = FAutomationWorkerTestDataResponse::StaticStruct();
  SendMessage(this,pFVar10,pUVar11,pFVar6);
  if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.Data.AllocatorInstance.Data);
  }
  if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.Data.AllocatorInstance.Data);
  }
  if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Data.AllocatorInstance.Data);
  }
  if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data.AllocatorInstance.Data);
  }
  return;
}

// HandleWorkerOfflineMessage @ 148c63bd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAutomationControllerManager::HandleWorkerOfflineMessage
          (FAutomationControllerManager *this,FAutomationWorkerWorkerOffline *param_1,
          TSharedRef<IMessageContext,1> *param_2)

{
  FGuid local_18;
  
  local_18.A = *(uint *)&param_1->field_0x0;
  local_18.B = *(uint *)&param_1->field_0x4;
  local_18.C = *(uint *)&param_1->field_0x8;
  local_18.D = *(uint *)&param_1->field_0xc;
  FAutomationDeviceClusterManager::Remove(&this->DeviceClusterManager,&local_18);
  return;
}

// Init @ 148c64100

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FAutomationControllerManager::Init(FAutomationControllerManager *this)

{
  bool bVar1;
  wchar_t *pwVar2;
  
  this->AutomationTestState = Disabled;
  this->bTestResultsAvailable = false;
  pwVar2 = FCommandLine::Get();
  bVar1 = FParse::Param(pwVar2,L"SendAutomationAnalytics");
  this->bSendAnalytics = bVar1;
  this->RequestedTestFlags = PerfFilter|ProductFilter|EngineFilter|SmokeFilter;
  return;
}

// IsDeveloperDirectoryIncluded @ 148c64900

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FAutomationControllerManager::IsDeveloperDirectoryIncluded(FAutomationControllerManager *this)

{
  return this->bDeveloperDirectoryIncluded;
}

// IsDeviceGroupFlagSet @ 148c64910

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FAutomationControllerManager::IsDeviceGroupFlagSet(FAutomationControllerManager *this,Type param_1)

{
  return (this->DeviceGroupFlags & 1 << ((byte)param_1 & 0x1f)) != 0;
}

// IsReadyForTests @ 148c649d0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FAutomationControllerManager::IsReadyForTests(FAutomationControllerManager *this)

{
  FName FVar1;
  char cVar2;
  FName *pFVar3;
  FModuleManager *this_00;
  IModuleInterface *pIVar4;
  longlong *plVar5;
  FName local_res10 [3];
  
  pFVar3 = ::FName::FName(local_res10,"AssetRegistry");
  FVar1 = *pFVar3;
  this_00 = FModuleManager::Get();
  pIVar4 = FModuleManager::LoadModuleChecked(this_00,FVar1);
  plVar5 = (longlong *)(**(code **)((longlong)*pIVar4 + 0x40))(pIVar4);
  cVar2 = (**(code **)(*plVar5 + 0x388))(plVar5);
  return cVar2 == '\0';
}

// IsSendAnalytics @ 148c64aa0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FAutomationControllerManager::IsSendAnalytics(FAutomationControllerManager *this)

{
  return this->bSendAnalytics;
}

// IsTestRunnable @ 148c64ae0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FAutomationControllerManager::IsTestRunnable
          (FAutomationControllerManager *this,TSharedPtr<IAutomationReport,1> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = 0;
  iVar5 = (**(code **)(*(longlong *)this + 0x90))();
  bVar2 = false;
  if (0 < iVar5) {
    do {
      if ((param_1->Object == (IAutomationReport *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      cVar4 = (**(code **)(param_1->Object->_padding_ + 0xd0))(param_1->Object,iVar7);
      if (cVar4 != '\0') {
        pcVar1 = *(code **)(*(longlong *)this + 0x98);
        if ((param_1->Object == (IAutomationReport *)0x0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
        iVar5 = (**(code **)(param_1->Object->_padding_ + 0x180))();
        iVar6 = (*pcVar1)(this,iVar7);
        if (iVar5 <= iVar6) {
          bVar2 = true;
          break;
        }
      }
      iVar7 = iVar7 + 1;
      iVar5 = (**(code **)(*(longlong *)this + 0x90))(this);
      bVar2 = false;
    } while (iVar7 < iVar5);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return bVar2;
}

// KeepPIEOpen @ 148c64e40

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FAutomationControllerManager::KeepPIEOpen(FAutomationControllerManager *this)

{
  return this->bKeepPIEOpen;
}

// LoadJsonTestPassSummary @ 148c64e50

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FAutomationControllerManager::LoadJsonTestPassSummary
          (FAutomationControllerManager *this,FString *param_1,
          TArray<TSharedPtr<IAutomationReport,1>,TSizedDefaultAllocator<32>_> *param_2)

{
  FAutomatedTestPassResults *this_00;
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  FStaticBasicLogRecord *pFVar6;
  wchar_t *pwVar7;
  TSharedPtr<IAutomationReport,1> *pTVar8;
  TSharedPtr<IAutomationReport,1> *pTVar9;
  undefined1 local_res10 [16];
  FLLMScope local_res20 [2];
  FMemScope local_48;
  FString local_40;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name732,L"AutomationTest/Report");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_res20,LLMScope_Name732,false,None,Default,true);
  FMemScope::FMemScope(&local_48,&LLMScope_Name732,true);
  local_40.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_40.Data.ArrayNum = 0;
  local_40.Data.ArrayMax = 0;
  if ((param_1->Data).ArrayNum == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  bVar4 = FFileHelper::LoadFileToString(&local_40,pwVar7,None,0);
  if (bVar4) {
    this_00 = &this->JsonTestPassResults;
    bVar4 = FJsonObjectConverter::JsonObjectStringToUStruct<FAutomatedTestPassResults>
                      (&local_40,this_00,0,0,false,(FText *)0x0,
                       (TDelegate<bool___cdecl(TSharedPtr<FJsonValue,1>_const_&,FProperty_*,void_*),FDefaultDelegateUserPolicy>
                        *)0x0);
    if (bVar4) {
      if (3 < (byte)LogAutomationController._0_1_) {
        UE::Logging::Private::BasicLog<4>
                  (&::LOG_Static,(FLogCategoryBase *)&LogAutomationController);
      }
      FAutomatedTestPassResults::ReBuildTestsMapIndex(this_00);
      iVar1 = param_2->ArrayNum;
      pTVar8 = (TSharedPtr<IAutomationReport,1> *)(param_2->AllocatorInstance).Data;
      pTVar9 = pTVar8 + iVar1;
      while( true ) {
        if (param_2->ArrayNum != iVar1) {
          local_res10[0] = 0;
          `TCheckedPointerIterator<TSharedPtr<IAutomationReport,1>,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res10);
        }
        if (pTVar8 == pTVar9) break;
        bVar4 = FAutomatedTestPassResults::ReflectResultStateToReport(this_00,pTVar8);
        if ((!bVar4) && (2 < (byte)LogAutomationController._0_1_)) {
          if ((pTVar8->Object == (IAutomationReport *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          (**(code **)(pTVar8->Object->_padding_ + 0x20))();
          UE::Logging::Private::BasicLog<3>
                    (&::LOG_Static,(FLogCategoryBase *)&LogAutomationController);
        }
        pTVar8 = pTVar8 + 1;
      }
      if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_40.Data.AllocatorInstance.Data);
      }
      FMemScope::~FMemScope(&local_48);
      FLLMScope::~FLLMScope(local_res20);
      DestructItems<TSharedPtr<IAutomationReport,1>,int>
                ((TSharedPtr<IAutomationReport,1> *)(param_2->AllocatorInstance).Data,
                 param_2->ArrayNum);
      pFVar2 = (param_2->AllocatorInstance).Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      return true;
    }
    if ((byte)LogAutomationController._0_1_ < 2) goto LAB_148c64f72;
    pFVar6 = &::LOG_Static;
  }
  else {
    if ((byte)LogAutomationController._0_1_ < 2) goto LAB_148c64f72;
    pFVar6 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<2>(pFVar6,(FLogCategoryBase *)&LogAutomationController);
LAB_148c64f72:
  if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data.AllocatorInstance.Data);
  }
  FMemScope::~FMemScope(&local_48);
  FLLMScope::~FLLMScope(local_res20);
  DestructItems<TSharedPtr<IAutomationReport,1>,int>
            ((TSharedPtr<IAutomationReport,1> *)(param_2->AllocatorInstance).Data,param_2->ArrayNum)
  ;
  pFVar2 = (param_2->AllocatorInstance).Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return false;
}

// OnControllerReset @ 148c65220

/* WARNING: Enum "Type": Some values do not have unique names */

TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> * __thiscall
FAutomationControllerManager::OnControllerReset(FAutomationControllerManager *this)

{
  return &this->ControllerResetDelegate;
}

// OnShutdown @ 148c65230

/* WARNING: Enum "Type": Some values do not have unique names */

TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> * __thiscall
FAutomationControllerManager::OnShutdown(FAutomationControllerManager *this)

{
  return &this->ShutdownDelegate;
}

// OnTestsAvailable @ 148c65240

/* WARNING: Enum "Type": Some values do not have unique names */

TMulticastDelegate<void___cdecl(EAutomationControllerModuleState::Type),FDefaultDelegateUserPolicy>
* __thiscall FAutomationControllerManager::OnTestsAvailable(FAutomationControllerManager *this)

{
  return &this->TestsAvailableDelegate;
}

// OnTestsComplete @ 148c65250

/* WARNING: Enum "Type": Some values do not have unique names */

TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> * __thiscall
FAutomationControllerManager::OnTestsComplete(FAutomationControllerManager *this)

{
  return &this->TestsCompleteDelegate;
}

// OnTestsRefreshed @ 148c65260

/* WARNING: Enum "Type": Some values do not have unique names */

TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> * __thiscall
FAutomationControllerManager::OnTestsRefreshed(FAutomationControllerManager *this)

{
  return &this->TestsRefreshedDelegate;
}

// ProcessAvailableTasks @ 148c652b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAutomationControllerManager::ProcessAvailableTasks(FAutomationControllerManager *this)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  bool local_res8 [16];
  
  if ((this->ClusterDistributionMask != 0) &&
     (iVar4 = 0, 0 < (this->DeviceClusterManager).Clusters.ArrayNum)) {
    do {
      local_res8[0] = true;
      uVar3 = 1 << ((byte)iVar4 & 0x1f);
      if ((this->ClusterDistributionMask & uVar3) == 0) {
LAB_148c65308:
        puVar1 = &this->ClusterDistributionMask;
        *puVar1 = *puVar1 & ~uVar3;
        if (*puVar1 == 0) {
          ProcessResults(this);
          StopStartedTestSessions(this);
          TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                    (&this->TestsCompleteDelegate);
        }
      }
      else {
        iVar2 = FAutomationDeviceClusterManager::GetNumDevicesInCluster
                          (&this->DeviceClusterManager,iVar4);
        if (0 < iVar2) {
          ExecuteNextTask(this,iVar4,local_res8);
        }
        if (local_res8[0] != false) goto LAB_148c65308;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < (this->DeviceClusterManager).Clusters.ArrayNum);
  }
  if (this->bIsLocalSession != false) {
    return;
  }
  UpdateTests(this);
  return;
}

// ProcessComparisonQueue @ 148c65360

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAutomationControllerManager::ProcessComparisonQueue(FAutomationControllerManager *this)

{
  TSharedPtr<FAutomationControllerManager::FComparisonEntry,1> *pTVar1;
  TNode *pTVar2;
  TNode *pTVar3;
  longlong lVar4;
  bool bVar5;
  code *pcVar6;
  ForAnyElementType FVar7;
  double dVar8;
  double dVar9;
  bool bVar10;
  bool bVar11;
  FAutomationWorkerMessageBase *pFVar12;
  UScriptStruct *pUVar13;
  FComparisonEntry *this_00;
  undefined1 local_res8 [8];
  FString *local_res10;
  FComparisonEntry *local_218;
  FSharedReferencer<1> FStack_210;
  FString local_208;
  FAutomationWorkerImageComparisonResults local_1f8;
  longlong local_158;
  FSharedReferencer<1> FStack_150;
  undefined8 local_148;
  FString local_140;
  FString local_130;
  FString local_120;
  FString local_110;
  FString local_100;
  FString local_f0;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  double local_b0;
  double local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  float fStack_98;
  float fStack_94;
  FText local_90;
  FString local_80;
  FGuid local_70;
  char local_60;
  undefined4 local_5c;
  
  local_218 = (FComparisonEntry *)0x0;
  FStack_210.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (((this->ComparisonQueue).Tail)->NextNode != (TNode *)0x0) {
    pTVar2 = ((this->ComparisonQueue).Tail)->NextNode;
    FStack_210.ReferenceController = (pTVar2->Item).SharedReferenceCount.ReferenceController;
    this_00 = (pTVar2->Item).Object;
    if (FStack_210.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FStack_210.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FStack_210.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_218 = this_00;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    if ((this_00 == (FComparisonEntry *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if ((*(longlong *)&this_00->PendingComparison != 0) &&
       (*(char *)(*(longlong *)&this_00->PendingComparison + 0x68) != '\0')) {
      pTVar2 = ((this->ComparisonQueue).Tail)->NextNode;
      if (pTVar2 == (TNode *)0x0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Dequeued",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AutomationController\\Private\\AutomationControllerManager.cpp"
                            ,0x1fc,L"");
        if (bVar10) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      else {
        pTVar1 = &pTVar2->Item;
        if ((TSharedPtr<FAutomationControllerManager::FComparisonEntry,1> *)&local_218 != pTVar1) {
          local_218 = pTVar1->Object;
          pTVar1->Object = (FComparisonEntry *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&FStack_210,&(pTVar2->Item).SharedReferenceCount);
          this_00 = local_218;
        }
        pTVar3 = (this->ComparisonQueue).Tail;
        (this->ComparisonQueue).Tail = pTVar2;
        local_158 = 0;
        FStack_150.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        if (pTVar1 != (TSharedPtr<FAutomationControllerManager::FComparisonEntry,1> *)&local_158) {
          pTVar1->Object = (FComparisonEntry *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&(pTVar2->Item).SharedReferenceCount,&FStack_150);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FStack_150.ReferenceController);
        if (pTVar3 != (TNode *)0x0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((pTVar3->Item).SharedReferenceCount.ReferenceController);
          ::operator_delete(pTVar3,0x18);
        }
      }
      if ((this_00 == (FComparisonEntry *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (*(longlong *)&this_00->PendingComparison == 0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("State.IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                            ,0x155,L"");
        if (bVar10) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if ((*(longlong *)&this_00->PendingComparison == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      lVar4 = *(longlong *)&this_00->PendingComparison;
      while (*(char *)(lVar4 + 0x68) == '\0') {
        (**(code **)(**(longlong **)(lVar4 + 0x60) + 0x20))(*(longlong **)(lVar4 + 0x60),0xffffffff)
        ;
      }
      local_148 = *(undefined8 *)(lVar4 + 0x70);
      ::FString::FString(&local_140,(FString *)(lVar4 + 0x78));
      ::FString::FString(&local_130,(FString *)(lVar4 + 0x88));
      ::FString::FString(&local_120,(FString *)(lVar4 + 0x98));
      ::FString::FString(&local_110,(FString *)(lVar4 + 0xa8));
      ::FString::FString(&local_100,(FString *)(lVar4 + 0xb8));
      ::FString::FString(&local_f0,(FString *)(lVar4 + 200));
      ::FString::FString(&local_e0,(FString *)(lVar4 + 0xd8));
      ::FString::FString(&local_d0,(FString *)(lVar4 + 0xe8));
      ::FString::FString(&local_c0,(FString *)(lVar4 + 0xf8));
      local_b0 = *(double *)(lVar4 + 0x108);
      local_a8 = *(double *)(lVar4 + 0x110);
      local_a0 = *(undefined4 *)(lVar4 + 0x118);
      uStack_9c = *(undefined4 *)(lVar4 + 0x11c);
      fStack_98 = *(float *)(lVar4 + 0x120);
      fStack_94 = *(float *)(lVar4 + 0x124);
      local_90.TextData.Reference = *(ITextData **)(lVar4 + 0x128);
      if (local_90.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_90.TextData.Reference + 8))
                  (local_90.TextData.Reference,local_res8);
      }
      local_90.Flags = *(uint *)(lVar4 + 0x130);
      ::FString::FString(&local_80,(FString *)(lVar4 + 0x138));
      local_70._0_8_ = *(undefined8 *)(lVar4 + 0x148);
      local_70._8_8_ = *(undefined8 *)(lVar4 + 0x150);
      local_60 = *(char *)(lVar4 + 0x158);
      local_5c = *(undefined4 *)(lVar4 + 0x15c);
      local_res10 = FText::ToString(&local_90);
      if ((((local_110.Data.ArrayNum < 2) || (bVar10 = FText::IsEmpty(&local_90), !bVar10)) ||
          ((double)fStack_98 < local_b0)) || ((double)fStack_94 < local_a8)) {
        bVar10 = false;
      }
      else {
        bVar10 = true;
      }
      bVar5 = local_110.Data.ArrayNum < 2;
      if ((this_00 == (FComparisonEntry *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FVar7.Data = local_80.Data.AllocatorInstance.Data;
      dVar9 = local_a8;
      dVar8 = local_b0;
      local_1f8._padding_._0_4_ = (this_00->InstanceId).A;
      local_1f8._padding_._4_4_ = (this_00->InstanceId).B;
      local_1f8._padding_._0_4_ = (this_00->InstanceId).C;
      local_1f8._padding_._4_4_ = (this_00->InstanceId).D;
      local_1f8.ScreenshotPath.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1f8.ScreenshotPath.Data.ArrayNum = local_80.Data.ArrayNum;
      local_1f8.UniqueId.A = local_70.A;
      local_1f8.UniqueId.B = local_70.B;
      local_1f8.UniqueId.C = local_70.C;
      local_1f8.UniqueId.D = local_70.D;
      if (local_80.Data.ArrayNum == 0) {
        local_1f8.ScreenshotPath.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_80.Data.ArrayNum,0,(ForAnyElementType *)&local_1f8.ScreenshotPath,
                   local_80.Data.ArrayNum,&local_1f8.ScreenshotPath.Data.ArrayMax);
        memcpy(local_1f8.ScreenshotPath.Data.AllocatorInstance.Data,FVar7.Data,
               (longlong)local_80.Data.ArrayNum * 2);
      }
      local_1f8.MaxLocalDifference = dVar8;
      local_1f8.GlobalDifference = dVar9;
      local_1f8.bNew = bVar5;
      local_1f8.bSimilar = bVar10;
      ::FString::FString(&local_1f8.ErrorMessage,local_res10);
      FVar7.Data = local_100.Data.AllocatorInstance.Data;
      local_1f8.IncomingFilePath.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1f8.IncomingFilePath.Data.ArrayNum = local_100.Data.ArrayNum;
      if (local_100.Data.ArrayNum == 0) {
        local_1f8.IncomingFilePath.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_100.Data.ArrayNum,0,(ForAnyElementType *)&local_1f8.IncomingFilePath,
                   local_100.Data.ArrayNum,&local_1f8.IncomingFilePath.Data.ArrayMax);
        memcpy(local_1f8.IncomingFilePath.Data.AllocatorInstance.Data,FVar7.Data,
               (longlong)local_100.Data.ArrayNum * 2);
      }
      FVar7.Data = local_c0.Data.AllocatorInstance.Data;
      local_1f8.ReportComparisonFilePath.Data.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      local_1f8.ReportComparisonFilePath.Data.ArrayNum = local_c0.Data.ArrayNum;
      if (local_c0.Data.ArrayNum == 0) {
        local_1f8.ReportComparisonFilePath.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_c0.Data.ArrayNum,0,
                   (ForAnyElementType *)&local_1f8.ReportComparisonFilePath,local_c0.Data.ArrayNum,
                   &local_1f8.ReportComparisonFilePath.Data.ArrayMax);
        memcpy(local_1f8.ReportComparisonFilePath.Data.AllocatorInstance.Data,FVar7.Data,
               (longlong)local_c0.Data.ArrayNum * 2);
      }
      FVar7.Data = local_e0.Data.AllocatorInstance.Data;
      local_1f8.ReportApprovedFilePath.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1f8.ReportApprovedFilePath.Data.ArrayNum = local_e0.Data.ArrayNum;
      if (local_e0.Data.ArrayNum == 0) {
        local_1f8.ReportApprovedFilePath.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_e0.Data.ArrayNum,0,
                   (ForAnyElementType *)&local_1f8.ReportApprovedFilePath,local_e0.Data.ArrayNum,
                   &local_1f8.ReportApprovedFilePath.Data.ArrayMax);
        memcpy(local_1f8.ReportApprovedFilePath.Data.AllocatorInstance.Data,FVar7.Data,
               (longlong)local_e0.Data.ArrayNum * 2);
      }
      FVar7.Data = local_d0.Data.AllocatorInstance.Data;
      local_1f8.ReportIncomingFilePath.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1f8.ReportIncomingFilePath.Data.ArrayNum = local_d0.Data.ArrayNum;
      if (local_d0.Data.ArrayNum == 0) {
        local_1f8.ReportIncomingFilePath.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_d0.Data.ArrayNum,0,
                   (ForAnyElementType *)&local_1f8.ReportIncomingFilePath,local_d0.Data.ArrayNum,
                   &local_1f8.ReportIncomingFilePath.Data.ArrayMax);
        memcpy(local_1f8.ReportIncomingFilePath.Data.AllocatorInstance.Data,FVar7.Data,
               (longlong)local_d0.Data.ArrayNum * 2);
      }
      pFVar12 = FMemory::Malloc(0x98,0);
      (pFVar12->InstanceId).A = (undefined4)local_1f8._padding_;
      (pFVar12->InstanceId).B = local_1f8._padding_._4_4_;
      (pFVar12->InstanceId).C = (undefined4)local_1f8._padding_;
      (pFVar12->InstanceId).D = local_1f8._padding_._4_4_;
      pFVar12[1].InstanceId.A = local_1f8.UniqueId.A;
      pFVar12[1].InstanceId.B = local_1f8.UniqueId.B;
      pFVar12[1].InstanceId.C = local_1f8.UniqueId.C;
      pFVar12[1].InstanceId.D = local_1f8.UniqueId.D;
      ::FString::FString((FString *)(pFVar12 + 2),&local_1f8.ScreenshotPath);
      *(bool *)&pFVar12[3].InstanceId.A = local_1f8.bNew;
      *(bool *)((longlong)&pFVar12[3].InstanceId.A + 1) = local_1f8.bSimilar;
      *(double *)&pFVar12[3].InstanceId.C = local_1f8.MaxLocalDifference;
      *(double *)&pFVar12[4].InstanceId = local_1f8.GlobalDifference;
      ::FString::FString((FString *)&pFVar12[4].InstanceId.C,&local_1f8.ErrorMessage);
      ::FString::FString((FString *)&pFVar12[5].InstanceId.C,&local_1f8.IncomingFilePath);
      ::FString::FString((FString *)&pFVar12[6].InstanceId.C,&local_1f8.ReportComparisonFilePath);
      ::FString::FString((FString *)&pFVar12[7].InstanceId.C,&local_1f8.ReportApprovedFilePath);
      ::FString::FString((FString *)&pFVar12[8].InstanceId.C,&local_1f8.ReportIncomingFilePath);
      if (4 < (byte)LogAutomationController._0_1_) {
        if (1 < local_110.Data.ArrayNum) {
          FText::IsEmpty(&local_90);
        }
        local_208.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_208.Data.ArrayNum = 0;
        local_208.Data.ArrayMax = 0;
        FGuid::AppendString((FGuid *)this_00,&local_208,Digits);
        UE::Logging::Private::BasicLog<5>
                  (&::LOG_Static,(FLogCategoryBase *)&LogAutomationController);
        if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_208.Data.AllocatorInstance.Data);
        }
      }
      pUVar13 = FAutomationWorkerImageComparisonResults::StaticStruct();
      SendMessage(this,pFVar12,pUVar13,&this_00->Sender);
      if (local_60 == '\0') {
        ReportImageComparisonResult(this,&local_1f8);
      }
      if (local_1f8.ReportIncomingFilePath.Data.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1f8.ReportIncomingFilePath.Data.AllocatorInstance.Data);
      }
      if (local_1f8.ReportApprovedFilePath.Data.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1f8.ReportApprovedFilePath.Data.AllocatorInstance.Data);
      }
      if (local_1f8.ReportComparisonFilePath.Data.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1f8.ReportComparisonFilePath.Data.AllocatorInstance.Data);
      }
      if (local_1f8.IncomingFilePath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
      {
        FMemory::Free(local_1f8.IncomingFilePath.Data.AllocatorInstance.Data);
      }
      if (local_1f8.ErrorMessage.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1f8.ErrorMessage.Data.AllocatorInstance.Data);
      }
      if (local_1f8.ScreenshotPath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1f8.ScreenshotPath.Data.AllocatorInstance.Data);
      }
      if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_80.Data.AllocatorInstance.Data);
      }
      if (local_90.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_90.TextData.Reference + 0x10))();
      }
      if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c0.Data.AllocatorInstance.Data);
      }
      if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d0.Data.AllocatorInstance.Data);
      }
      if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e0.Data.AllocatorInstance.Data);
      }
      if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f0.Data.AllocatorInstance.Data);
      }
      if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_100.Data.AllocatorInstance.Data);
      }
      if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_110.Data.AllocatorInstance.Data);
      }
      if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_120.Data.AllocatorInstance.Data);
      }
      if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_130.Data.AllocatorInstance.Data);
      }
      if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_140.Data.AllocatorInstance.Data);
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_210.ReferenceController);
  return;
}

// ProcessResults @ 148c65c50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FAutomationControllerManager::ProcessResults(FAutomationControllerManager *this)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  FAutomationDeviceInfo *pFVar4;
  FAutomatedTestResult *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  FString *pFVar9;
  wchar_t *pwVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar14;
  undefined1 auStackY_188 [32];
  FIdentityFunctor local_148 [8];
  TSharedPtr<IAutomationReport,1> *local_140;
  int local_138;
  undefined4 local_130;
  TSharedPtr<IAutomationReport,1> local_128;
  FString local_110;
  FString local_100;
  undefined1 local_e8 [88];
  undefined1 local_90 [32];
  void *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ForElementType<FSetElementId> local_50;
  int local_48;
  bool local_40;
  ulonglong local_38;
  ulonglong uVar13;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_188;
  uVar14 = 0;
  local_130 = 0;
  this->bHasErrors = false;
  this->bHasWarning = false;
  this->bHasLogs = false;
  (**(code **)(*(longlong *)this + 0x88))(this,&local_140);
  if ((local_138 != 0) &&
     (this->bTestResultsAvailable = true, uVar11 = uVar14, uVar13 = uVar14, 0 < local_138)) {
    do {
      uVar12 = (uint)uVar13;
      uVar8 = 0;
      if ((int)uVar12 < local_138) {
        uVar8 = ~uVar12 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_128.Object = *(IAutomationReport **)((longlong)&local_140->Object + uVar11);
      local_128.SharedReferenceCount.ReferenceController =
           *(TReferenceControllerBase<1> **)
            ((longlong)&(local_140->SharedReferenceCount).ReferenceController + uVar11);
      if (local_128.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_128.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_128.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      CheckChildResult(this,&local_128);
      uVar11 = uVar11 + 0x10;
      uVar13 = (ulonglong)(uVar12 + 1);
    } while ((int)(uVar12 + 1) < local_138);
  }
  if ((this->JsonTestPassResults).IsRequired != false) {
    if (3 < (byte)LogAutomationController._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAutomationController);
    }
    iVar3 = (this->JsonTestPassResults).Devices.ArrayNum;
    pFVar4 = (FAutomationDeviceInfo *)(this->JsonTestPassResults).Devices.AllocatorInstance.Data;
    local_e8._0_8_ = (FAutomationDeviceInfo *)0x0;
    local_e8._8_4_ = iVar3;
    if (iVar3 == 0) {
      local_e8._12_4_ = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xb8,8,iVar3,0,(ForAnyElementType *)local_e8,iVar3,(int *)(local_e8 + 0xc));
      ConstructItems<FAutomationDeviceInfo,FAutomationDeviceInfo,int>
                ((void *)local_e8._0_8_,pFVar4,iVar3);
    }
    local_e8._16_8_ = (this->JsonTestPassResults).ReportCreatedOn.Ticks;
    local_e8._44_4_ = (this->JsonTestPassResults).TotalDuration;
    local_e8._24_4_ = (this->JsonTestPassResults).Succeeded;
    local_e8._28_4_ = (this->JsonTestPassResults).SucceededWithWarnings;
    local_e8._32_4_ = (this->JsonTestPassResults).Failed;
    local_e8._36_4_ = (this->JsonTestPassResults).NotRun;
    local_e8._40_4_ = (this->JsonTestPassResults).InProcess;
    local_e8[0x30] = (this->JsonTestPassResults).ComparisonExported;
    ::FString::FString((FString *)(local_e8 + 0x38),
                       &(this->JsonTestPassResults).ComparisonExportDirectory);
    iVar3 = (this->JsonTestPassResults).Tests.ArrayNum;
    pFVar5 = (FAutomatedTestResult *)(this->JsonTestPassResults).Tests.AllocatorInstance.Data;
    local_e8._72_8_ = (FAutomatedTestResult *)0x0;
    local_e8._80_4_ = iVar3;
    if (iVar3 == 0) {
      local_e8._84_4_ = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x90,8,iVar3,0,(ForAnyElementType *)(local_e8 + 0x48),iVar3,
                 (int *)(local_e8 + 0x54));
      ConstructItems<FAutomatedTestResult,FAutomatedTestResult,int>
                ((void *)local_e8._72_8_,pFVar5,iVar3);
    }
    local_68 = ___xmm_00000000ffffffff0000008000000000;
    uStack_60 = _UNK_150631d98;
    local_90._0_8_ = (FScriptContainerElement *)0x0;
    local_90._8_8_ = 0;
    local_70 = (void *)0x0;
    local_50 = (ForElementType<FSetElementId>)0x0;
    local_48 = 0;
    TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
    ::operator=((TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
                 *)local_90,
                (TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
                 *)&(this->JsonTestPassResults).TestsMapIndex);
    local_40 = (this->JsonTestPassResults).IsRequired;
    if (this->bSortTestsByFailure != false) {
      AlgoImpl::
      StableSortInternal<FAutomatedTestResult,FIdentityFunctor,TDereferenceWrapper<FAutomatedTestResult,_FAutomationControllerManager::ProcessResults_::__l31::<lambda_1>_>_>
                ((FAutomatedTestResult *)local_e8._72_8_,local_e8._80_4_,local_148[0],
                 (<lambda_1> *)local_148);
    }
    FDateTime::Now();
    if (4 < (byte)LogAutomationController._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAutomationController);
    }
    GenerateJsonTestPassSummary(this,(FAutomatedTestPassResults *)local_e8);
    if (4 < (byte)LogAutomationController._0_1_) {
      FDateTime::Now();
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAutomationController);
    }
    if (1 < (this->ReportURLPath).Data.ArrayNum) {
      if (3 < (byte)LogAutomationController._0_1_) {
        UE::Logging::Private::BasicLog<4>
                  (&::LOG_Static,(FLogCategoryBase *)&LogAutomationController);
      }
      if (1 < (this->DeveloperReportUrl).Data.ArrayNum) {
        if (3 < (byte)LogAutomationController._0_1_) {
          UE::Logging::Private::BasicLog<4>
                    (&::LOG_Static,(FLogCategoryBase *)&LogAutomationController);
        }
        if ((this->DeveloperReportUrl).Data.ArrayNum == 0) {
          pwVar10 = L"";
        }
        else {
          pwVar10 = (wchar_t *)(this->DeveloperReportUrl).Data.AllocatorInstance.Data;
        }
        FWindowsPlatformProcess::LaunchURL(pwVar10,(wchar_t *)0x0,(FString *)0x0);
      }
    }
    if (3 < (byte)LogAutomationController._0_1_) {
      if ((this->ReportExportPath).Data.ArrayNum < 2) {
        pFVar9 = FPaths::AutomationReportsDir(&local_100);
        FPaths::ConvertRelativePathToFull(&local_110,pFVar9);
        uVar14 = 3;
      }
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAutomationController);
      if (((uVar14 & 2) != 0) &&
         (uVar14 = (ulonglong)((uint)uVar14 & 0xfffffffd),
         local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_110.Data.AllocatorInstance.Data);
      }
      if (((uVar14 & 1) != 0) &&
         (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_100.Data.AllocatorInstance.Data);
      }
    }
    local_48 = 0;
    if (local_50 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_50);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_90,0,local_90._8_4_);
    iVar3 = SUB84(local_90._8_8_,4);
    local_90._8_8_ = local_90._8_8_ & 0xffffffff00000000;
    if (iVar3 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,(ForAnyElementType *)local_90,0,(int *)(local_90 + 0xc));
    }
    uVar8 = local_68._4_4_;
    uStack_60 = 0xffffffff;
    local_68 = (ulonglong)local_68._4_4_ << 0x20;
    if (0x80 < uVar8) {
      local_68 = 0x8000000000;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_90 + 0x10),0);
    }
    if (local_70 != (void *)0x0) {
      FMemory::Free(local_70);
    }
    if ((FScriptContainerElement *)local_90._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_90._0_8_);
    }
    DestructItems<FAutomatedTestResult,int>((FAutomatedTestResult *)local_e8._72_8_,local_e8._80_4_)
    ;
    if ((FAutomatedTestResult *)local_e8._72_8_ != (FAutomatedTestResult *)0x0) {
      FMemory::Free((void *)local_e8._72_8_);
    }
    if ((FScriptContainerElement *)local_e8._56_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_e8._56_8_);
    }
    DestructItems<FAutomationDeviceInfo,int>((FAutomationDeviceInfo *)local_e8._0_8_,local_e8._8_4_)
    ;
    if ((FAutomationDeviceInfo *)local_e8._0_8_ != (FAutomationDeviceInfo *)0x0) {
      FMemory::Free((void *)local_e8._0_8_);
    }
  }
  DestructItems<FAutomationDeviceInfo,int>
            ((FAutomationDeviceInfo *)(this->JsonTestPassResults).Devices.AllocatorInstance.Data,
             (this->JsonTestPassResults).Devices.ArrayNum);
  piVar1 = &(this->JsonTestPassResults).Devices.ArrayMax;
  (this->JsonTestPassResults).Devices.ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xb8,8,0,(ForAnyElementType *)&this->JsonTestPassResults,0,piVar1);
  }
  (this->JsonTestPassResults).Succeeded = 0;
  (this->JsonTestPassResults).SucceededWithWarnings = 0;
  (this->JsonTestPassResults).Failed = 0;
  (this->JsonTestPassResults).NotRun = 0;
  (this->JsonTestPassResults).InProcess = 0;
  (this->JsonTestPassResults).TotalDuration = 0.0;
  (this->JsonTestPassResults).IsRequired = false;
  bVar7 = 1 < *(int *)&(this->JsonTestPassResults).TestsMapIndex.field_0x48;
  if (!bVar7) {
    TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
                      *)&(this->JsonTestPassResults).TestsMapIndex);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)&(this->JsonTestPassResults).TestsMapIndex,0,
                    *(int *)&(this->JsonTestPassResults).TestsMapIndex.field_0x8);
  puVar2 = &(this->JsonTestPassResults).TestsMapIndex.field_0xc;
  *(undefined4 *)&(this->JsonTestPassResults).TestsMapIndex.field_0x8 = 0;
  if (*(int *)puVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)&(this->JsonTestPassResults).TestsMapIndex,0,
               (int *)puVar2);
  }
  *(undefined4 *)&(this->JsonTestPassResults).TestsMapIndex.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->JsonTestPassResults).TestsMapIndex.field_0x34 = 0;
  iVar3 = *(int *)&(this->JsonTestPassResults).TestsMapIndex.field_0x2c;
  *(undefined4 *)&(this->JsonTestPassResults).TestsMapIndex.field_0x28 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(this->JsonTestPassResults).TestsMapIndex.field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &(this->JsonTestPassResults).TestsMapIndex.field_0x10,0);
  }
  if (bVar7) {
    *(undefined4 *)&(this->JsonTestPassResults).TestsMapIndex.field_0x48 = 1;
    TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
              *)&(this->JsonTestPassResults).TestsMapIndex);
  }
  DestructItems<FAutomatedTestResult,int>
            ((FAutomatedTestResult *)(this->JsonTestPassResults).Tests.AllocatorInstance.Data,
             (this->JsonTestPassResults).Tests.ArrayNum);
  piVar1 = &(this->JsonTestPassResults).Tests.ArrayMax;
  (this->JsonTestPassResults).Tests.ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x90,8,0,&(this->JsonTestPassResults).Tests.AllocatorInstance,0,piVar1);
  }
  SetControllerStatus(this,Ready);
  DestructItems<TSharedPtr<IAutomationReport,1>,int>(local_140,local_138);
  if (local_140 != (TSharedPtr<IAutomationReport,1> *)0x0) {
    FMemory::Free(local_140);
  }
  return;
}

// RemoveCallbacks @ 148c673f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FAutomationControllerManager::RemoveCallbacks(FAutomationControllerManager *this)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::Clear
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->ShutdownDelegate);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::Clear
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->TestsAvailableDelegate);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::Clear
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->TestsRefreshedDelegate);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::Clear
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->TestsCompleteDelegate);
  return;
}

// RemoveTestRunning @ 148c67440

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FAutomationControllerManager::RemoveTestRunning(FAutomationControllerManager *this,FGuid *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = 0;
  if (0 < (this->TestRunningArray).ArrayNum) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < (this->TestRunningArray).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
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
      pFVar1 = (this->TestRunningArray).AllocatorInstance.Data;
      if (((*(uint *)(pFVar1 + lVar6 + 0x1c) == param_1->D &&
           *(uint *)(pFVar1 + lVar6 + 0x18) == param_1->C) &&
          *(uint *)(pFVar1 + lVar6 + 0x14) == param_1->B) &&
          param_1->A == *(uint *)(pFVar1 + lVar6 + 0x10)) {
        TArray<FAutomationControllerManager::FTestRunningInfo,TSizedDefaultAllocator<32>_>::RemoveAt
                  (&this->TestRunningArray,uVar5,Default);
        return;
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x28;
    } while ((int)uVar5 < (this->TestRunningArray).ArrayNum);
  }
  return;
}

// ReportAutomationResult @ 148c67530

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAutomationControllerManager::ReportAutomationResult
          (FAutomationControllerManager *this,TSharedPtr<IAutomationReport,1> *param_1,int param_2,
          int param_3)

{
  byte bVar1;
  EAutomationEventType EVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  code *pcVar4;
  bool bVar5;
  byte *pbVar6;
  UEnum *this_00;
  FString *pFVar7;
  ForAnyElementType FVar8;
  longlong lVar9;
  FAutomationExecutionEntry *this_01;
  FAutomationExecutionEntry *pFVar10;
  undefined1 local_res10 [8];
  FName local_98;
  ForAnyElementType local_90;
  int local_88;
  int local_84;
  FString local_80;
  FText local_70;
  FString local_60;
  FString local_50;
  FString local_40;
  
  ::FName::FName(&local_98,"LogAutomationController");
  if ((param_1->Object == (IAutomationReport *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pbVar6 = (byte *)(**(code **)(param_1->Object->_padding_ + 0x128))
                             (param_1->Object,param_2,param_3);
  bVar1 = *pbVar6;
  this_00 = StaticEnum<enum_EAutomationState>();
  if ((this_00 == (UEnum *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("EnumClass != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                         ,0xd13,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  UEnum::GetDisplayNameTextByValue(this_00,&local_70,(ulonglong)bVar1);
  pFVar7 = FText::ToString(&local_70);
  local_90.Data = (FScriptContainerElement *)0x0;
  local_88 = (pFVar7->Data).ArrayNum;
  lVar9 = (longlong)local_88;
  _Src = (pFVar7->Data).AllocatorInstance.Data;
  if (local_88 == 0) {
    local_84 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_88,0,&local_90,local_88,&local_84);
    memcpy(local_90.Data,_Src,lVar9 * 2);
  }
  if (local_70.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_70.TextData.Reference + 0x10))();
  }
  if ((param_1->Object == (IAutomationReport *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  (**(code **)(param_1->Object->_padding_ + 0x20))();
  if ((param_1->Object == (IAutomationReport *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  (**(code **)(param_1->Object->_padding_ + 0x18))();
  ::FString::PrintfImpl(&local_80,L"Test Completed. Result={%s} Name={%s} Path={%s}");
  if (*pbVar6 == 2) {
    if (1 < (byte)LogAutomationController._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAutomationController);
    }
  }
  else if (3 < (byte)LogAutomationController._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAutomationController);
  }
  if (4 < (byte)LogAutomationController._0_1_) {
    if ((param_1->Object == (IAutomationReport *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    (**(code **)(param_1->Object->_padding_ + 0x20))();
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAutomationController);
  }
  iVar3 = *(int *)(pbVar6 + 0x30);
  this_01 = *(FAutomationExecutionEntry **)(pbVar6 + 0x28);
  pFVar10 = this_01 + iVar3;
  do {
    if (*(int *)(pbVar6 + 0x30) != iVar3) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FAutomationExecutionEntry_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (this_01 == pFVar10) {
      if (4 < (byte)LogAutomationController._0_1_) {
        if ((param_1->Object == (IAutomationReport *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        (**(code **)(param_1->Object->_padding_ + 0x20))();
        UE::Logging::Private::BasicLog<5>
                  (&::LOG_Static,(FLogCategoryBase *)&LogAutomationController);
      }
      if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_80.Data.AllocatorInstance.Data);
      }
      if (local_90.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_1->SharedReferenceCount).ReferenceController);
      return;
    }
    EVar2 = (this_01->Event).Type;
    if (EVar2 == Info) {
      if (4 < (byte)LogAutomationController._0_1_) {
        FAutomationExecutionEntry::ToString(this_01,&local_40);
        UE::Logging::Private::BasicLog<5>
                  (&::LOG_Static,(FLogCategoryBase *)&LogAutomationController);
        FVar8.Data = local_40.Data.AllocatorInstance.Data;
        goto LAB_148c678ac;
      }
    }
    else if (EVar2 == Warning) {
      if (2 < (byte)LogAutomationController._0_1_) {
        FAutomationExecutionEntry::ToString(this_01,&local_50);
        UE::Logging::Private::BasicLog<3>
                  (&::LOG_Static,(FLogCategoryBase *)&LogAutomationController);
        FVar8.Data = local_50.Data.AllocatorInstance.Data;
        goto LAB_148c678ac;
      }
    }
    else if ((EVar2 == Error) && (1 < (byte)LogAutomationController._0_1_)) {
      FAutomationExecutionEntry::ToString(this_01,&local_60);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAutomationController);
      FVar8.Data = local_60.Data.AllocatorInstance.Data;
LAB_148c678ac:
      if (FVar8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar8.Data);
      }
    }
    this_01 = this_01 + 1;
  } while( true );
}

// ReportImageComparisonResult @ 148c67960

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAutomationControllerManager::ReportImageComparisonResult
          (FAutomationControllerManager *this,FAutomationWorkerImageComparisonResults *param_1)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined1 auStackY_298 [32];
  int local_268;
  int local_264;
  FString local_260;
  undefined1 local_250 [8];
  undefined1 local_248 [16];
  TReferenceControllerBase<1> *local_238;
  FString *local_230;
  FString *local_228;
  FString local_220;
  FString *local_210;
  FString *local_208;
  FString local_200;
  FString *local_1f0;
  FString *local_1e8;
  FString local_1e0;
  TStringView<wchar_t> local_1d0;
  FScriptContainerElement *local_1c0;
  int local_1b8;
  TStringView<wchar_t> local_1b0;
  FScriptContainerElement *local_1a0;
  int local_198;
  TStringView<wchar_t> local_190;
  FScriptContainerElement *local_180;
  int local_178;
  undefined1 local_168 [32];
  void *local_148;
  undefined4 local_140;
  uint local_13c;
  undefined4 local_138;
  undefined4 local_134;
  ForElementType<FSetElementId> local_128;
  int local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  FString local_108;
  undefined1 local_f8;
  undefined1 local_f0 [32];
  void *local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  void *local_b0;
  undefined4 local_a8;
  undefined1 local_a0 [32];
  void *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ForElementType<FSetElementId> local_60;
  int local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_298;
  bVar4 = FAutomationDeviceClusterManager::FindDevice
                    (&this->DeviceClusterManager,(FGuid *)param_1,&local_268,&local_264);
  if ((!bVar4) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("DeviceClusterManager.FindDevice(Result.InstanceId, ClusterIndex, DeviceIndex)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AutomationController\\Private\\AutomationControllerManager.cpp"
                         ,0x1cf,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FAutomationDeviceClusterManager::GetTest
            (&this->DeviceClusterManager,(TSharedPtr<IAutomationReport,1> *)(local_248 + 8),
             local_268,local_264);
  if ((FString *)local_248._8_8_ == (FString *)0x0) {
    if (1 < (byte)LogAutomationController._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAutomationController);
    }
  }
  else {
    local_13c = 0x80;
    local_168._0_8_ = (FScriptContainerElement *)0x0;
    local_168._8_8_ = 0;
    local_148 = (void *)0x0;
    iVar6 = 0;
    local_140 = 0;
    local_134 = 0;
    local_128 = (ForElementType<FSetElementId>)0x0;
    local_120 = 0;
    local_138 = 0xffffffff;
    FPaths::AutomationReportsDir(&local_260);
    local_1d0.DataPtr = (wchar_t *)local_260.Data.AllocatorInstance.Data;
    local_1c0 = (param_1->ReportIncomingFilePath).Data.AllocatorInstance.Data;
    local_1d0.Size = local_260.Data.ArrayNum + -1;
    if (local_260.Data.ArrayNum == 0) {
      local_1d0.Size = iVar6;
    }
    iVar1 = (param_1->ReportIncomingFilePath).Data.ArrayNum;
    local_1b8 = iVar1 + -1;
    if (iVar1 == 0) {
      local_1b8 = iVar6;
    }
    FPaths::CombineInternal(&local_220,&local_1d0,2);
    local_230 = &ComparisonFileTypes::Unapproved;
    local_228 = &local_220;
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_const_&,FString_&&>_>
              ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                *)local_168,(TPairInitializer<FString_const_&,FString_&&> *)local_250,
               (bool *)&local_230);
    if (local_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_220.Data.AllocatorInstance.Data);
    }
    iVar1 = (param_1->ReportComparisonFilePath).Data.ArrayNum;
    iVar5 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar5 = iVar6;
    }
    if (iVar5 != 0) {
      local_1b0.DataPtr = (wchar_t *)local_260.Data.AllocatorInstance.Data;
      local_1a0 = (param_1->ReportComparisonFilePath).Data.AllocatorInstance.Data;
      local_1b0.Size = local_260.Data.ArrayNum + -1;
      if (local_260.Data.ArrayNum == 0) {
        local_1b0.Size = iVar6;
      }
      local_198 = iVar5;
      FPaths::CombineInternal(&local_200,&local_1b0,2);
      local_210 = &ComparisonFileTypes::Difference;
      local_208 = &local_200;
      TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FString_const_&,FString_&&>_>
                ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                  *)local_168,(TPairInitializer<FString_const_&,FString_&&> *)(local_250 + 4),
                 (bool *)&local_210);
      if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_200.Data.AllocatorInstance.Data);
      }
    }
    if (param_1->bSimilar == false) {
      iVar1 = (param_1->ReportIncomingFilePath).Data.ArrayNum;
      iVar5 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar5 = iVar6;
      }
      if (iVar5 != 0) {
        local_190.DataPtr = (wchar_t *)local_260.Data.AllocatorInstance.Data;
        local_180 = (param_1->ReportApprovedFilePath).Data.AllocatorInstance.Data;
        local_190.Size = local_260.Data.ArrayNum + -1;
        if (local_260.Data.ArrayNum == 0) {
          local_190.Size = iVar6;
        }
        iVar6 = (param_1->ReportApprovedFilePath).Data.ArrayNum;
        local_178 = iVar6 + -1;
        if (iVar6 == 0) {
          local_178 = 0;
        }
        FPaths::CombineInternal(&local_1e0,&local_190,2);
        local_1f0 = &ComparisonFileTypes::Approved;
        local_1e8 = &local_1e0;
        TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FString_const_&,FString_&&>_>
                  ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                    *)local_168,(TPairInitializer<FString_const_&,FString_&&> *)local_248,
                   (bool *)&local_1f0);
        if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
        }
      }
    }
    if (((FString *)local_248._8_8_ == (FString *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_118._0_4_ = (param_1->UniqueId).A;
    local_118._4_4_ = (param_1->UniqueId).B;
    uStack_110._0_4_ = (param_1->UniqueId).C;
    uStack_110._4_4_ = (param_1->UniqueId).D;
    pcVar2 = *(code **)((((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)local_248._8_8_)->
                        AllocatorInstance).Data + 0x108);
    ::FString::FString(&local_108,&param_1->ScreenshotPath);
    local_c8 = ___xmm_00000000ffffffff0000008000000000;
    uStack_c0 = _UNK_150631d98;
    local_78 = ___xmm_00000000ffffffff0000008000000000;
    uStack_70 = _UNK_150631d98;
    local_f8 = 2;
    local_f0._0_8_ = (FScriptContainerElement *)0x0;
    local_f0._8_8_ = 0;
    local_d0 = (void *)0x0;
    local_b0 = (void *)0x0;
    local_a8 = 0;
    local_a0._0_8_ = (FScriptContainerElement *)0x0;
    local_a0._8_8_ = 0;
    local_80 = (void *)0x0;
    local_60 = (ForElementType<FSetElementId>)0x0;
    local_58 = 0;
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::operator=((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                 *)local_a0,
                (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                 *)local_168);
    (*pcVar2)(local_248._8_8_,local_268,this->CurrentTestPass,&local_118);
    local_58 = 0;
    if (local_60 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_60);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_a0,0,local_a0._8_4_);
    iVar6 = SUB84(local_a0._8_8_,4);
    local_a0._8_8_ = local_a0._8_8_ & 0xffffffff00000000;
    if (iVar6 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,(ForAnyElementType *)local_a0,0,(int *)(local_a0 + 0xc));
    }
    uVar3 = local_78._4_4_;
    uStack_70 = 0xffffffff;
    local_78 = (ulonglong)local_78._4_4_ << 0x20;
    if (0x80 < uVar3) {
      local_78 = 0x8000000000;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_a0 + 0x10),0);
    }
    if (local_80 != (void *)0x0) {
      FMemory::Free(local_80);
    }
    if ((FScriptContainerElement *)local_a0._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_a0._0_8_);
    }
    local_a8 = 0;
    if (local_b0 != (void *)0x0) {
      FMemory::Free(local_b0);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_f0,0,local_f0._8_4_);
    iVar6 = SUB84(local_f0._8_8_,4);
    local_f0._8_8_ = local_f0._8_8_ & 0xffffffff00000000;
    if (iVar6 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,(ForAnyElementType *)local_f0,0,(int *)(local_f0 + 0xc));
    }
    uVar3 = local_c8._4_4_;
    uStack_c0 = 0xffffffff;
    local_c8 = (ulonglong)local_c8._4_4_ << 0x20;
    if (0x80 < uVar3) {
      local_c8 = 0x8000000000;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_f0 + 0x10),0);
    }
    if (local_d0 != (void *)0x0) {
      FMemory::Free(local_d0);
    }
    if ((FScriptContainerElement *)local_f0._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_f0._0_8_);
    }
    if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
    }
    if (local_260.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_260.Data.AllocatorInstance.Data);
    }
    local_120 = 0;
    if (local_128 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_128);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_168,0,local_168._8_4_);
    iVar6 = SUB84(local_168._8_8_,4);
    local_168._8_8_ = local_168._8_8_ & 0xffffffff00000000;
    if (iVar6 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,(ForAnyElementType *)local_168,0,(int *)(local_168 + 0xc));
    }
    local_134 = 0;
    local_140 = 0;
    local_138 = 0xffffffff;
    if (0x80 < local_13c) {
      local_13c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_168 + 0x10),0);
    }
    if (local_148 != (void *)0x0) {
      FMemory::Free(local_148);
    }
    if ((FScriptContainerElement *)local_168._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_168._0_8_);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_238);
  return;
}

// ReportTestResults @ 148c67f70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FAutomationControllerManager::ReportTestResults(FAutomationControllerManager *this)

{
  FScriptContainerElement FVar1;
  FScriptContainerElement *_Src;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  UEnum *this_00;
  FString *pFVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  ForAnyElementType local_38;
  int local_30;
  int local_2c;
  FText local_28;
  
  if (4 < (byte)LogAutomationController._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAutomationController);
  }
  iVar6 = (this->JsonTestPassResults).Tests.ArrayNum;
  uVar8 = 0;
  uVar10 = uVar8;
  if (0 < iVar6) {
    do {
      uVar7 = (uint)uVar8;
      if (4 < (byte)LogAutomationController._0_1_) {
        uVar4 = 0;
        if ((int)uVar7 < iVar6) {
          uVar4 = ~uVar7 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        FVar1 = (this->JsonTestPassResults).Tests.AllocatorInstance.Data[uVar10 + 0x40];
        this_00 = StaticEnum<enum_EAutomationState>();
        if ((this_00 == (UEnum *)0x0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("EnumClass != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                               ,0xd13,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        UEnum::GetDisplayNameTextByValue(this_00,&local_28,(ulonglong)(byte)FVar1);
        pFVar5 = FText::ToString(&local_28);
        local_38.Data = (FScriptContainerElement *)0x0;
        local_30 = (pFVar5->Data).ArrayNum;
        lVar9 = (longlong)local_30;
        _Src = (pFVar5->Data).AllocatorInstance.Data;
        if (local_30 == 0) {
          local_2c = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_30,0,&local_38,local_30,&local_2c);
          memcpy(local_38.Data,_Src,lVar9 * 2);
        }
        if (local_28.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
        }
        uVar4 = 0;
        if ((int)uVar7 < (this->JsonTestPassResults).Tests.ArrayNum) {
          uVar4 = ~uVar7 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        UE::Logging::Private::BasicLog<5>
                  (&::LOG_Static,(FLogCategoryBase *)&LogAutomationController);
        if (local_38.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data);
        }
      }
      iVar6 = (this->JsonTestPassResults).Tests.ArrayNum;
      uVar8 = (ulonglong)(uVar7 + 1);
      uVar10 = uVar10 + 0x90;
    } while ((int)(uVar7 + 1) < iVar6);
  }
  return;
}

// ReportsHaveErrors @ 148c681d0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FAutomationControllerManager::ReportsHaveErrors(FAutomationControllerManager *this)

{
  return this->bHasErrors;
}

// ReportsHaveLogs @ 148c681e0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FAutomationControllerManager::ReportsHaveLogs(FAutomationControllerManager *this)

{
  return this->bHasLogs;
}

// ReportsHaveWarnings @ 148c681f0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FAutomationControllerManager::ReportsHaveWarnings(FAutomationControllerManager *this)

{
  return this->bHasWarning;
}

// RequestAvailableWorkers @ 148c68200

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAutomationControllerManager::RequestAvailableWorkers
          (FAutomationControllerManager *this,FGuid *param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  FMessageEndpoint *this_00;
  FName FVar3;
  code *pcVar4;
  double dVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ForAnyElementType FVar10;
  bool bVar11;
  undefined8 *puVar12;
  UScriptStruct *pUVar13;
  FName *pFVar14;
  FModuleManager *this_01;
  IModuleInterface *pIVar15;
  FDateTime local_res8;
  FTimespan local_res10;
  LARGE_INTEGER local_res18;
  FName local_res20;
  FString local_78;
  FString local_68;
  undefined1 local_58 [8];
  TReferenceControllerBase<1> *local_50;
  
  this->ExecutionCount = this->ExecutionCount + 1;
  DestructItems<FAutomationDeviceClusterManager::FDeviceCluster,int>
            ((FDeviceCluster *)(this->DeviceClusterManager).Clusters.AllocatorInstance.Data,
             (this->DeviceClusterManager).Clusters.ArrayNum);
  piVar1 = &(this->DeviceClusterManager).Clusters.ArrayMax;
  (this->DeviceClusterManager).Clusters.ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,(ForAnyElementType *)&this->DeviceClusterManager,0,piVar1);
  }
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&this->ControllerResetDelegate);
  this->bTestResultsAvailable = false;
  uVar7 = param_1->B;
  uVar8 = param_1->C;
  uVar9 = param_1->D;
  (this->ActiveSessionId).A = param_1->A;
  (this->ActiveSessionId).B = uVar7;
  (this->ActiveSessionId).C = uVar8;
  (this->ActiveSessionId).D = uVar9;
  ::FString::FString(&local_68,L"instance_name");
  if ((this->MessageEndpoint).Object == (FMessageEndpoint *)0x0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar11) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  this_00 = (this->MessageEndpoint).Object;
  puVar12 = FMemory::Malloc(0x48,0);
  ::FString::FString(&local_78,GInternalProjectName);
  FVar10.Data = local_78.Data.AllocatorInstance.Data;
  pFVar2 = (ForAnyElementType *)(puVar12 + 3);
  pFVar2->Data = (FScriptContainerElement *)0x0;
  *puVar12 = 0;
  puVar12[1] = 0;
  *(undefined4 *)(puVar12 + 2) = 10000;
  *(int *)(puVar12 + 4) = local_78.Data.ArrayNum;
  if (local_78.Data.ArrayNum == 0) {
    *(int *)((longlong)puVar12 + 0x24) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_78.Data.ArrayNum,0,pFVar2,local_78.Data.ArrayNum,
               (int *)((longlong)puVar12 + 0x24));
    memcpy(pFVar2->Data,FVar10.Data,(longlong)local_78.Data.ArrayNum * 2);
  }
  FVar10.Data = local_68.Data.AllocatorInstance.Data;
  pFVar2 = (ForAnyElementType *)(puVar12 + 5);
  pFVar2->Data = (FScriptContainerElement *)0x0;
  *(int *)(puVar12 + 6) = local_68.Data.ArrayNum;
  if (local_68.Data.ArrayNum == 0) {
    *(int *)((longlong)puVar12 + 0x34) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Data.ArrayNum,0,pFVar2,local_68.Data.ArrayNum,
               (int *)((longlong)puVar12 + 0x34));
    memcpy(pFVar2->Data,FVar10.Data,(longlong)local_68.Data.ArrayNum * 2);
  }
  uVar6 = *(undefined8 *)&param_1->C;
  puVar12[7] = *(undefined8 *)param_1;
  puVar12[8] = uVar6;
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  local_res10.Ticks = 0;
  local_res8.Ticks = 0x2bca2875f4373fff;
  pUVar13 = FAutomationWorkerFindWorkers::StaticStruct();
  FMessageEndpoint::Publish(this_00,puVar12,pUVar13,Network,&local_res10,&local_res8);
  QueryPerformanceCounter(&local_res18);
  dVar5 = (double)local_res18.QuadPart * FGenericPlatformTime::SecondsPerCycle;
  this->CheckTestTimer = 0.0;
  this->LastTimeUpdateTicked = dVar5 + __real_4170000000000000;
  pFVar14 = ::FName::FName(&local_res20,"ScreenShotComparisonTools");
  FVar3 = *pFVar14;
  this_01 = FModuleManager::Get();
  pIVar15 = FModuleManager::LoadModuleChecked(this_01,FVar3);
  puVar12 = (undefined8 *)(**(code **)((longlong)*pIVar15 + 0x40))(pIVar15,local_58);
  if (&this->ScreenshotManager != (TSharedPtr<IScreenShotManager,1> *)puVar12) {
    (this->ScreenshotManager).Object = (IScreenShotManager *)*puVar12;
    *puVar12 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ScreenshotManager).SharedReferenceCount,(FSharedReferencer<1> *)(puVar12 + 1)
              );
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_50);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return;
}

// RequestLoadAsset @ 148c684b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAutomationControllerManager::RequestLoadAsset(FAutomationControllerManager *this,FString *param_1)

{
  FMessageEndpoint *this_00;
  code *pcVar1;
  bool bVar2;
  FString *this_01;
  UScriptStruct *pUVar3;
  FDateTime local_res8;
  FTimespan local_res18;
  
  if ((this->MessageEndpoint).Object == (FMessageEndpoint *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_00 = (this->MessageEndpoint).Object;
  this_01 = FMemory::Malloc(0x10,0);
  ::FString::FString(this_01,param_1);
  local_res18.Ticks = 0;
  local_res8.Ticks = 0x2bca2875f4373fff;
  pUVar3 = FAssetEditorRequestOpenAsset::StaticStruct();
  FMessageEndpoint::Publish(this_00,this_01,pUVar3,Process,&local_res18,&local_res8);
  return;
}

// RequestTests @ 148c68570

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FAutomationControllerManager::RequestTests(FAutomationControllerManager *this)

{
  EAutomationTestFlags EVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UScriptStruct *pUVar5;
  FAutomationWorkerMessageBase *pFVar6;
  int iVar7;
  FString local_28;
  FGuid local_18;
  
  this->ExecutionCount = this->ExecutionCount + 1;
  iVar7 = 0;
  this->RefreshTestResponses = 0;
  if (((this->ReportManager).ReportRoot.Object == (IAutomationReport *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  (**(code **)(((this->ReportManager).ReportRoot.Object)->_padding_ + 8))();
  if (0 < (this->DeviceClusterManager).Clusters.ArrayNum) {
    do {
      iVar4 = FAutomationDeviceClusterManager::GetNumDevicesInCluster
                        (&this->DeviceClusterManager,iVar7);
      if (0 < iVar4) {
        FAutomationDeviceClusterManager::GetDeviceMessageAddress
                  (&this->DeviceClusterManager,(FMessageAddress *)&local_18,iVar7,0);
        if (4 < (byte)LogAutomationController._0_1_) {
          local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_28.Data.ArrayNum = 0;
          local_28.Data.ArrayMax = 0;
          FGuid::AppendString(&local_18,&local_28,Digits);
          UE::Logging::Private::BasicLog<5>
                    (&::LOG_Static,(FLogCategoryBase *)&LogAutomationController);
          if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_28.Data.AllocatorInstance.Data);
          }
        }
        pUVar5 = FAutomationWorkerRequestTests::StaticStruct();
        pFVar6 = FMemory::Malloc(0x18,0);
        EVar1 = this->RequestedTestFlags;
        *(bool *)&pFVar6[1].InstanceId.A = this->bDeveloperDirectoryIncluded;
        pFVar6[1].InstanceId.B = EVar1;
        (pFVar6->InstanceId).A = 0;
        (pFVar6->InstanceId).B = 0;
        (pFVar6->InstanceId).C = 0;
        (pFVar6->InstanceId).D = 0;
        SendMessage(this,pFVar6,pUVar5,(FMessageAddress *)&local_18);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < (this->DeviceClusterManager).Clusters.ArrayNum);
  }
  return;
}

// ResetAutomationTestTimeout @ 148c689c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAutomationControllerManager::ResetAutomationTestTimeout
          (FAutomationControllerManager *this,wchar_t *param_1)

{
  LARGE_INTEGER local_res8 [4];
  
  QueryPerformanceCounter(local_res8);
  this->LastTimeUpdateTicked =
       (double)local_res8[0].QuadPart * FGenericPlatformTime::SecondsPerCycle +
       __real_4170000000000000;
  return;
}

// RunTests @ 148c691c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAutomationControllerManager::RunTests(FAutomationControllerManager *this,bool param_1)

{
  int *piVar1;
  FAutomatedTestPassResults *pFVar2;
  IAutomationReport *pIVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  int iVar7;
  ulonglong uVar8;
  UScriptStruct *pUVar9;
  FAutomationWorkerMessageBase *pFVar10;
  FAutomationDeviceInfo *pFVar11;
  FAutomationDeviceInfo *pFVar12;
  IFileManager *pIVar13;
  FString *pFVar14;
  wchar_t *pwVar15;
  TSharedPtr<IAutomationReport,1> *pTVar16;
  int iVar17;
  TSharedPtr<IAutomationReport,1> *pTVar18;
  wchar_t *pwVar19;
  int iVar20;
  FGuid local_res8;
  LARGE_INTEGER local_res18;
  TSharedPtr<IAutomationReport,1> *local_e8;
  ulonglong local_e0;
  TArray<TSharedPtr<IAutomationReport,1>,TSizedDefaultAllocator<32>_> local_d8;
  FString local_c8;
  FString local_b8;
  FGuid local_a8;
  TSharedPtr<IAutomationReport,1> local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  this->ExecutionCount = this->ExecutionCount + 1;
  (this->ReportManager).CurrentTestPass = 0;
  piVar1 = &(this->TestRunningArray).ArrayMax;
  this->ClusterDistributionMask = 0;
  this->CurrentTestPass = 0;
  this->bTestResultsAvailable = false;
  (this->TestRunningArray).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,&(this->TestRunningArray).AllocatorInstance,0,piVar1);
  }
  this->bIsLocalSession = param_1;
  QueryPerformanceCounter(&local_res18);
  iVar20 = this->NumTestPasses;
  pwVar19 = L"";
  dVar5 = (double)local_res18.QuadPart * FGenericPlatformTime::SecondsPerCycle;
  this->CheckTestTimer = 0.0;
  this->LastTimeUpdateTicked = dVar5 + __real_4170000000000000;
  if (((this->ReportManager).ReportRoot.Object == (IAutomationReport *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pIVar3 = (this->ReportManager).ReportRoot.Object;
  (**(code **)(pIVar3->_padding_ + 0xf8))(pIVar3,iVar20);
  if (1 < (this->ReportExportPath).Data.ArrayNum) {
    (this->JsonTestPassResults).IsRequired = true;
    local_e8 = (TSharedPtr<IAutomationReport,1> *)0x0;
    local_e0 = 0;
    if (((this->ReportManager).ReportRoot.Object == (IAutomationReport *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pIVar3 = (this->ReportManager).ReportRoot.Object;
    (**(code **)(pIVar3->_padding_ + 0x158))(pIVar3,&local_e8);
    if (this->bResumeRunTest != false) {
      ::FString::PrintfImpl(&local_b8,L"%s/index.json");
      bVar6 = FPaths::FileExists(&local_b8);
      pTVar16 = local_e8;
      if (bVar6) {
        iVar20 = (int)local_e0;
        local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_d8.ArrayNum = (int)local_e0;
        if ((int)local_e0 == 0) {
          local_d8.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,(int)local_e0,0,&local_d8.AllocatorInstance,(int)local_e0,
                     &local_d8.ArrayMax);
          ConstructItems<TSharedPtr<IAutomationReport,1>,TSharedPtr<IAutomationReport,1>,int>
                    (local_d8.AllocatorInstance.Data,pTVar16,iVar20);
        }
        LoadJsonTestPassSummary(this,&local_b8,&local_d8);
      }
      if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
    }
    iVar20 = (int)local_e0;
    uVar8 = (ulonglong)(int)local_e0;
    pTVar18 = local_e8 + uVar8;
    pTVar16 = local_e8;
    while( true ) {
      if ((int)uVar8 != iVar20) {
        local_res8.C._0_1_ = 0;
        `TCheckedPointerIterator<TSharedPtr<IAutomationReport,1>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_res8.C);
      }
      if (pTVar16 == pTVar18) break;
      FAutomatedTestPassResults::AddTestResult(&this->JsonTestPassResults,pTVar16);
      uVar8 = local_e0 & 0xffffffff;
      pTVar16 = pTVar16 + 1;
    }
    GenerateTestPassHtmlIndex(this);
    DestructItems<TSharedPtr<IAutomationReport,1>,int>(local_e8,(int)local_e0);
    if (local_e8 != (TSharedPtr<IAutomationReport,1> *)0x0) {
      FMemory::Free(local_e8);
    }
  }
  iVar20 = 0;
  if (0 < (this->DeviceClusterManager).Clusters.ArrayNum) {
    do {
      iVar17 = 0;
      this->ClusterDistributionMask = this->ClusterDistributionMask | 1 << ((byte)iVar20 & 0x1f);
      iVar7 = FAutomationDeviceClusterManager::GetNumDevicesInCluster
                        (&this->DeviceClusterManager,iVar20);
      if (0 < iVar7) {
        do {
          local_98.Object = (IAutomationReport *)0x0;
          local_98.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          FAutomationDeviceClusterManager::SetTest
                    (&this->DeviceClusterManager,iVar20,iVar17,&local_98);
          FAutomationDeviceClusterManager::GetDeviceMessageAddress
                    (&this->DeviceClusterManager,(FMessageAddress *)&local_a8,iVar20,iVar17);
          if (4 < (byte)LogAutomationController._0_1_) {
            local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_c8.Data.ArrayNum = 0;
            local_c8.Data.ArrayMax = 0;
            FGuid::AppendString(&local_a8,&local_c8,Digits);
            UE::Logging::Private::BasicLog<5>
                      (&::LOG_Static,(FLogCategoryBase *)&LogAutomationController);
            if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_c8.Data.AllocatorInstance.Data);
            }
          }
          pUVar9 = FAutomationWorkerStartTestSession::StaticStruct();
          pFVar10 = FMemory::Malloc(0x10,0);
          (pFVar10->InstanceId).A = 0;
          (pFVar10->InstanceId).B = 0;
          (pFVar10->InstanceId).C = 0;
          (pFVar10->InstanceId).D = 0;
          SendMessage(this,pFVar10,pUVar9,(FMessageAddress *)&local_a8);
          pFVar11 = FAutomationDeviceClusterManager::GetDeviceInfo
                              (&this->DeviceClusterManager,iVar20,iVar17);
          local_88._0_4_ = (pFVar11->Instance).A;
          local_88._4_4_ = (pFVar11->Instance).B;
          uStack_80._0_4_ = (pFVar11->Instance).C;
          uStack_80._4_4_ = (pFVar11->Instance).D;
          TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Emplace<FGuid>
                    (&this->StartedTestSessionWorkerInstanceIdSet,&local_res8,(bool *)&local_88);
          if ((this->JsonTestPassResults).IsRequired != false) {
            pFVar12 = FAutomationDeviceClusterManager::GetDeviceInfo
                                (&this->DeviceClusterManager,iVar20,iVar17);
            pFVar2 = &this->JsonTestPassResults;
            pFVar11 = (FAutomationDeviceInfo *)(pFVar2->Devices).AllocatorInstance.Data;
            if (((pFVar11 <= pFVar12) &&
                (pFVar12 < pFVar11 + (this->JsonTestPassResults).Devices.ArrayMax)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            iVar7 = (this->JsonTestPassResults).Devices.ArrayNum;
            piVar1 = &(this->JsonTestPassResults).Devices.ArrayMax;
            if (iVar7 == *piVar1) {
              iVar7 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x8b8,(ForAnyElementType *)pFVar2,piVar1);
            }
            (this->JsonTestPassResults).Devices.ArrayNum = iVar7 + 1;
            FAutomationDeviceInfo::FAutomationDeviceInfo
                      ((FAutomationDeviceInfo *)
                       ((pFVar2->Devices).AllocatorInstance.Data + (longlong)iVar7 * 0xb8),pFVar12);
          }
          iVar17 = iVar17 + 1;
          iVar7 = FAutomationDeviceClusterManager::GetNumDevicesInCluster
                            (&this->DeviceClusterManager,iVar20);
        } while (iVar17 < iVar7);
      }
      iVar20 = iVar20 + 1;
    } while (iVar20 < (this->DeviceClusterManager).Clusters.ArrayNum);
  }
  if (3 < (byte)LogAutomationController._0_1_) {
    FPaths::AutomationTransientDir(&local_68);
    FPaths::AutomationLogDir(&local_78);
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAutomationController);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  pIVar13 = IFileManager::Get();
  pcVar4 = *(code **)((longlong)*pIVar13 + 0x68);
  pFVar14 = FPaths::AutomationLogDir(&local_58);
  if ((pFVar14->Data).ArrayNum == 0) {
    pwVar15 = L"";
  }
  else {
    pwVar15 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
  }
  (*pcVar4)(pIVar13,pwVar15,0,1);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  pIVar13 = IFileManager::Get();
  pcVar4 = *(code **)((longlong)*pIVar13 + 0x68);
  pFVar14 = FPaths::AutomationTransientDir(&local_48);
  if ((pFVar14->Data).ArrayNum != 0) {
    pwVar19 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
  }
  (*pcVar4)(pIVar13,pwVar19,0,1);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (this->ClusterDistributionMask != 0) {
    SetControllerStatus(this,Running);
  }
  return;
}

// SendMessage @ 148c69840

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAutomationControllerManager::SendMessage
          (FAutomationControllerManager *this,FAutomationWorkerMessageBase *param_1,
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
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AutomationController\\Private\\AutomationControllerManager.cpp"
                       ,0x4ee,L"");
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

// SetControllerStatus @ 148c69a00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAutomationControllerManager::SetControllerStatus(FAutomationControllerManager *this,Type param_1)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  FDestructionSentinel local_38;
  
  if (param_1 != this->AutomationTestState) {
    this->AutomationTestState = param_1;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->TestsAvailableDelegate,(FWriteAccessScope *)&local_38);
    puVar1 = &(this->TestsAvailableDelegate).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + 1;
    bVar5 = false;
    uVar9 = *(int *)&(this->TestsAvailableDelegate).field_0x10 - 1;
    if (-1 < (int)uVar9) {
      lVar10 = (longlong)(int)uVar9 << 4;
      bVar5 = false;
      do {
        uVar8 = 0;
        if ((int)uVar9 < *(int *)&(this->TestsAvailableDelegate).field_0x10) {
          uVar8 = ~uVar9 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar2 = *(longlong *)&(this->TestsAvailableDelegate).field_0x8;
        if (((*(int *)(lVar10 + 8 + lVar2) == 0) ||
            (plVar3 = *(longlong **)(lVar10 + lVar2), plVar3 == (longlong *)0x0)) ||
           (cVar7 = (**(code **)(*plVar3 + 0x68))(), cVar7 == '\0')) {
          bVar5 = true;
        }
        lVar10 = lVar10 + -0x10;
        uVar9 = uVar9 - 1;
      } while (-1 < (int)uVar9);
    }
    puVar1 = &(this->TestsAvailableDelegate).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    if (bVar5) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->TestsAvailableDelegate
                 ,false);
    }
    if (local_38.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
    }
  }
  return;
}

// SetDeveloperDirectoryIncluded @ 148c69b30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAutomationControllerManager::SetDeveloperDirectoryIncluded
          (FAutomationControllerManager *this,bool param_1)

{
  this->bDeveloperDirectoryIncluded = param_1;
  return;
}

// SetEnabledTests @ 148c69c50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAutomationControllerManager::SetEnabledTests
          (FAutomationControllerManager *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  IAutomationReport *pIVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 local_18;
  undefined8 local_10;
  
  if ((this->ReportManager).ReportRoot.Object == (IAutomationReport *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pIVar1 = (this->ReportManager).ReportRoot.Object;
  local_18 = 0;
  local_10 = 0;
  (**(code **)(pIVar1->_padding_ + 0x90))(pIVar1,param_1,&local_18);
  return;
}

// SetFilter @ 148c6a0f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAutomationControllerManager::SetFilter
          (FAutomationControllerManager *this,
          TSharedPtr<TFilterCollection<TSharedPtr<IAutomationReport,1>_const_&>,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TFilterCollection<TSharedPtr<IAutomationReport,1>_const_&> *pTVar2;
  IAutomationReport *pIVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  TFilterCollection<TSharedPtr<IAutomationReport,1>_const_&> *local_28;
  TReferenceControllerBase<1> *local_20;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pTVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (((this->ReportManager).ReportRoot.Object == (IAutomationReport *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pIVar3 = (this->ReportManager).ReportRoot.Object;
  lVar4 = pIVar3->_padding_;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28 = pTVar2;
  local_20 = pTVar1;
  (**(code **)(lVar4 + 0xd8))(pIVar3,&local_28,0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetKeepPIEOpen @ 148c6a830

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAutomationControllerManager::SetKeepPIEOpen(FAutomationControllerManager *this,bool param_1)

{
  this->bKeepPIEOpen = param_1;
  return;
}

// SetNumPasses @ 148c6a850

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAutomationControllerManager::SetNumPasses(FAutomationControllerManager *this,int param_1)

{
  this->NumTestPasses = param_1;
  return;
}

// SetRequestedTestFlags @ 148c6a8f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAutomationControllerManager::SetRequestedTestFlags
          (FAutomationControllerManager *this,EAutomationTestFlags param_1)

{
  this->RequestedTestFlags = param_1;
                    /* WARNING: Could not recover jumptable at 0x000148c6a8f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x10))();
  return;
}

// SetSendAnalytics @ 148c6b0d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAutomationControllerManager::SetSendAnalytics(FAutomationControllerManager *this,bool param_1)

{
  this->bSendAnalytics = param_1;
  return;
}

// SetTestNames @ 148c6bbe0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAutomationControllerManager::SetTestNames
          (FAutomationControllerManager *this,FGuid *param_1,
          TArray<FAutomationTestInfo,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  IAutomationReport *pIVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  FIdentityFunctor local_res8 [8];
  int local_res20 [2];
  int local_48 [2];
  undefined1 local_40 [8];
  TReferenceControllerBase<1> *local_38;
  
  local_res20[0] = -1;
  local_48[0] = -1;
  bVar6 = FAutomationDeviceClusterManager::FindDevice
                    (&this->DeviceClusterManager,param_1,local_res20,local_48);
  if (bVar6) {
    AlgoImpl::
    IntroSortInternal<FAutomationTestInfo,int,FIdentityFunctor,TDereferenceWrapper<FAutomationTestInfo,_FAutomationControllerManager::SetTestNames_::__l5::FCompareAutomationTestInfo>_>
              ((FAutomationTestInfo *)(param_2->AllocatorInstance).Data,param_2->ArrayNum,
               local_res8[0],(FCompareAutomationTestInfo *)local_res8);
    iVar8 = param_2->ArrayNum;
    uVar9 = 0;
    if (0 < iVar8) {
      do {
        iVar5 = local_res20[0];
        iVar1 = this->NumTestPasses;
        uVar7 = 0;
        if ((int)uVar9 < iVar8) {
          uVar7 = ~uVar9 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar2 = (param_2->AllocatorInstance).Data;
        if (((this->ReportManager).ReportRoot.Object == (IAutomationReport *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pIVar3 = (this->ReportManager).ReportRoot.Object;
        (**(code **)(pIVar3->_padding_ + 0x148))
                  (pIVar3,local_40,pFVar2 + (longlong)(int)uVar9 * 0x98,iVar5,iVar1);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_38);
        iVar8 = param_2->ArrayNum;
        uVar9 = uVar9 + 1;
      } while ((int)uVar9 < iVar8);
    }
  }
  this->RefreshTestResponses = this->RefreshTestResponses + 1;
  if (this->RefreshTestResponses != (this->DeviceClusterManager).Clusters.ArrayNum) {
    return;
  }
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&this->TestsRefreshedDelegate);
  return;
}

// SetVisibleTestsEnabled @ 148c6c430

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAutomationControllerManager::SetVisibleTestsEnabled
          (FAutomationControllerManager *this,bool param_1)

{
  IAutomationReport *pIVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((this->ReportManager).ReportRoot.Object == (IAutomationReport *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pIVar1 = (this->ReportManager).ReportRoot.Object;
                    /* WARNING: Could not recover jumptable at 0x000148c6c488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(pIVar1->_padding_ + 0xb8))(pIVar1,param_1);
  return;
}

// Shutdown @ 148c6c500

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FAutomationControllerManager::Shutdown(FAutomationControllerManager *this)

{
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->MessageEndpoint != (TSharedPtr<FMessageEndpoint,1> *)&local_18) {
    (this->MessageEndpoint).Object = (FMessageEndpoint *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MessageEndpoint).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&this->ShutdownDelegate);
                    /* WARNING: Could not recover jumptable at 0x000148c6c556. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x148))(this);
  return;
}

// SlugString @ 148c6c570

/* WARNING: Enum "Type": Some values do not have unique names */

FString * __thiscall
FAutomationControllerManager::SlugString
          (FAutomationControllerManager *this,FString *__return_storage_ptr__,FString *param_1)

{
  uint uVar1;
  wchar_t *pwVar2;
  wchar_t local_res10 [4];
  
  ::FString::FString(__return_storage_ptr__,param_1);
  pwVar2 = L"\"\' ,/.:|&!~\n\r\t@#(){}[]=;^%$`";
  uVar1 = 0;
  do {
    local_res10[0] = *pwVar2;
    local_res10[1] = 0;
    ::FString::ReplaceInline(__return_storage_ptr__,local_res10,L"",IgnoreCase);
    uVar1 = uVar1 + 1;
    pwVar2 = pwVar2 + 1;
  } while (uVar1 < 0x1c);
  return __return_storage_ptr__;
}

// Startup @ 148c6c5f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FAutomationControllerManager::Startup(FAutomationControllerManager *this)

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
  TReferenceControllerBase<1> *pTVar18;
  undefined4 local_res8 [2];
  FName local_res10;
  TRawPtrProxy<TRawMessageHandler<FAutomationWorkerFindWorkersResponse,FAutomationControllerManager>_>
  local_res18;
  TRawPtrProxy<TRawMessageHandler<FAutomationWorkerPong,FAutomationControllerManager>_> local_res20;
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
  TRawPtrProxy<TRawMessageHandler<FAutomationWorkerRequestNextNetworkCommand,FAutomationControllerManager>_>
  local_f8;
  TRawPtrProxy<TRawMessageHandler<FAutomationWorkerRequestTestsReplyComplete,FAutomationControllerManager>_>
  local_f0;
  TRawPtrProxy<TRawMessageHandler<FAutomationWorkerRunTestsReply,FAutomationControllerManager>_>
  local_e8;
  TRawPtrProxy<TRawMessageHandler<FAutomationWorkerScreenImage,FAutomationControllerManager>_>
  local_e0;
  TRawPtrProxy<TRawMessageHandler<FAutomationWorkerImageComparisonResults,FAutomationControllerManager>_>
  local_d8;
  TRawPtrProxy<TRawMessageHandler<FAutomationWorkerTestDataRequest,FAutomationControllerManager>_>
  local_d0;
  TRawPtrProxy<TRawMessageHandler<FAutomationWorkerWorkerOffline,FAutomationControllerManager>_>
  local_c8;
  TRawPtrProxy<TRawMessageHandler<FAutomationWorkerTelemetryData,FAutomationControllerManager>_>
  local_c0;
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
  
  ::FName::FName(&local_res10,"FAutomationControllerModule");
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
  local_1b4 = local_res10;
  local_1e0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_1d8.Data = (FScriptContainerElement *)0x0;
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
      (TRawMessageHandler<FAutomationWorkerFindWorkersResponse,FAutomationControllerManager> *)0x0)
  {
    local_res18.Object =
         (TRawMessageHandler<FAutomationWorkerFindWorkersResponse,FAutomationControllerManager> *)
         0x0;
  }
  else {
    (local_res18.Object)->Handler = this;
    (local_res18.Object)->_padding_ =
         (longlong)
         &
         ___7__TRawMessageHandler_UFAutomationWorkerFindWorkersResponse__VFAutomationControllerManager____6B_
    ;
    (local_res18.Object)->Func = (pmf_7c4e738f)HandleFindWorkersResponseMessage;
    if ((this == (FAutomationControllerManager *)0x0) &&
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
  TSharedPtr<IMessageHandler,1><TRawMessageHandler<FAutomationWorkerFindWorkersResponse,FAutomationControllerManager>_>
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
      (TRawMessageHandler<FAutomationWorkerPong,FAutomationControllerManager> *)0x0) {
    local_res20.Object =
         (TRawMessageHandler<FAutomationWorkerPong,FAutomationControllerManager> *)0x0;
  }
  else {
    (local_res20.Object)->Handler = this;
    (local_res20.Object)->_padding_ =
         (longlong)
         &___7__TRawMessageHandler_UFAutomationWorkerPong__VFAutomationControllerManager____6B_;
    (local_res20.Object)->Func = (pmf_ea2eb1a8)HandlePongMessage;
    if ((this == (FAutomationControllerManager *)0x0) &&
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
  TSharedPtr<IMessageHandler,1><TRawMessageHandler<FAutomationWorkerPong,FAutomationControllerManager>_>
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
  if (local_f8.Object ==
      (TRawMessageHandler<FAutomationWorkerRequestNextNetworkCommand,FAutomationControllerManager> *
      )0x0) {
    local_f8.Object =
         (TRawMessageHandler<FAutomationWorkerRequestNextNetworkCommand,FAutomationControllerManager>
          *)0x0;
  }
  else {
    (local_f8.Object)->Handler = this;
    (local_f8.Object)->_padding_ =
         (longlong)
         &
         ___7__TRawMessageHandler_UFAutomationWorkerRequestNextNetworkCommand__VFAutomationControllerManager____6B_
    ;
    (local_f8.Object)->Func = (pmf_781e98b1)HandleRequestNextNetworkCommandMessage;
    if ((this == (FAutomationControllerManager *)0x0) &&
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
  TSharedPtr<IMessageHandler,1><TRawMessageHandler<FAutomationWorkerRequestNextNetworkCommand,FAutomationControllerManager>_>
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
      (TRawMessageHandler<FAutomationWorkerRequestTestsReplyComplete,FAutomationControllerManager> *
      )0x0) {
    local_f0.Object =
         (TRawMessageHandler<FAutomationWorkerRequestTestsReplyComplete,FAutomationControllerManager>
          *)0x0;
  }
  else {
    (local_f0.Object)->Handler = this;
    (local_f0.Object)->_padding_ =
         (longlong)
         &
         ___7__TRawMessageHandler_UFAutomationWorkerRequestTestsReplyComplete__VFAutomationControllerManager____6B_
    ;
    (local_f0.Object)->Func = (pmf_7deb6e43)HandleRequestTestsReplyCompleteMessage;
    if ((this == (FAutomationControllerManager *)0x0) &&
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
  TSharedPtr<IMessageHandler,1><TRawMessageHandler<FAutomationWorkerRequestTestsReplyComplete,FAutomationControllerManager>_>
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
      (TRawMessageHandler<FAutomationWorkerRunTestsReply,FAutomationControllerManager> *)0x0) {
    local_e8.Object =
         (TRawMessageHandler<FAutomationWorkerRunTestsReply,FAutomationControllerManager> *)0x0;
  }
  else {
    (local_e8.Object)->Handler = this;
    (local_e8.Object)->_padding_ =
         (longlong)
         &
         ___7__TRawMessageHandler_UFAutomationWorkerRunTestsReply__VFAutomationControllerManager____6B_
    ;
    (local_e8.Object)->Func = (pmf_99fc5de6)HandleRunTestsReplyMessage;
    if ((this == (FAutomationControllerManager *)0x0) &&
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
  TSharedPtr<IMessageHandler,1><TRawMessageHandler<FAutomationWorkerRunTestsReply,FAutomationControllerManager>_>
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
      (TRawMessageHandler<FAutomationWorkerScreenImage,FAutomationControllerManager> *)0x0) {
    local_e0.Object =
         (TRawMessageHandler<FAutomationWorkerScreenImage,FAutomationControllerManager> *)0x0;
  }
  else {
    (local_e0.Object)->Handler = this;
    (local_e0.Object)->_padding_ =
         (longlong)
         &
         ___7__TRawMessageHandler_UFAutomationWorkerScreenImage__VFAutomationControllerManager____6B_
    ;
    (local_e0.Object)->Func = (pmf_12daeec1)HandleReceivedScreenShot;
    if ((this == (FAutomationControllerManager *)0x0) &&
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
  TSharedPtr<IMessageHandler,1><TRawMessageHandler<FAutomationWorkerScreenImage,FAutomationControllerManager>_>
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
      (TRawMessageHandler<FAutomationWorkerImageComparisonResults,FAutomationControllerManager> *)
      0x0) {
    local_d8.Object =
         (TRawMessageHandler<FAutomationWorkerImageComparisonResults,FAutomationControllerManager> *
         )0x0;
  }
  else {
    (local_d8.Object)->Handler = this;
    (local_d8.Object)->_padding_ =
         (longlong)
         &
         ___7__TRawMessageHandler_UFAutomationWorkerImageComparisonResults__VFAutomationControllerManager____6B_
    ;
    (local_d8.Object)->Func = (pmf_5c6dc282)HandleReceivedComparisonResult;
    if ((this == (FAutomationControllerManager *)0x0) &&
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
  TSharedPtr<IMessageHandler,1><TRawMessageHandler<FAutomationWorkerImageComparisonResults,FAutomationControllerManager>_>
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
      (TRawMessageHandler<FAutomationWorkerTestDataRequest,FAutomationControllerManager> *)0x0) {
    local_d0.Object =
         (TRawMessageHandler<FAutomationWorkerTestDataRequest,FAutomationControllerManager> *)0x0;
  }
  else {
    (local_d0.Object)->Handler = this;
    (local_d0.Object)->_padding_ =
         (longlong)
         &
         ___7__TRawMessageHandler_UFAutomationWorkerTestDataRequest__VFAutomationControllerManager____6B_
    ;
    (local_d0.Object)->Func = (pmf_c8a6eb85)HandleTestDataRequest;
    if ((this == (FAutomationControllerManager *)0x0) &&
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
  TSharedPtr<IMessageHandler,1><TRawMessageHandler<FAutomationWorkerTestDataRequest,FAutomationControllerManager>_>
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
      (TRawMessageHandler<FAutomationWorkerWorkerOffline,FAutomationControllerManager> *)0x0) {
    local_c8.Object =
         (TRawMessageHandler<FAutomationWorkerWorkerOffline,FAutomationControllerManager> *)0x0;
  }
  else {
    (local_c8.Object)->Handler = this;
    (local_c8.Object)->_padding_ =
         (longlong)
         &
         ___7__TRawMessageHandler_UFAutomationWorkerWorkerOffline__VFAutomationControllerManager____6B_
    ;
    (local_c8.Object)->Func = (pmf_29e317b7)HandleWorkerOfflineMessage;
    if ((this == (FAutomationControllerManager *)0x0) &&
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
  TSharedPtr<IMessageHandler,1><TRawMessageHandler<FAutomationWorkerWorkerOffline,FAutomationControllerManager>_>
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
      (TRawMessageHandler<FAutomationWorkerTelemetryData,FAutomationControllerManager> *)0x0) {
    local_c0.Object =
         (TRawMessageHandler<FAutomationWorkerTelemetryData,FAutomationControllerManager> *)0x0;
  }
  else {
    (local_c0.Object)->Handler = this;
    (local_c0.Object)->_padding_ =
         (longlong)
         &
         ___7__TRawMessageHandler_UFAutomationWorkerTelemetryData__VFAutomationControllerManager____6B_
    ;
    (local_c0.Object)->Func = (pmf_a0d4d335)HandleReceivedTelemetryData;
    if ((this == (FAutomationControllerManager *)0x0) &&
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
  TSharedPtr<IMessageHandler,1><TRawMessageHandler<FAutomationWorkerTelemetryData,FAutomationControllerManager>_>
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
    this_01 = FAutomationWorkerWorkerOffline::StaticStruct();
    pFVar16 = UStruct::GetStructPathName((UStruct *)this_01,&local_58);
    pTVar18 = (TReferenceControllerBase<1> *)0x0;
    if ((pFVar5->Enabled != false) &&
       (pTVar6 = (pFVar5->BusPtr).WeakReferenceCount.ReferenceController, pTVar18 = pTVar6,
       pTVar6 != (TReferenceControllerBase<1> *)0x0)) {
      aVar3 = pTVar6->SharedReferenceCount;
      do {
        pTVar18 = (TReferenceControllerBase<1> *)0x0;
        if (aVar3 == (atomic<int>)0x0) goto LAB_148c6d397;
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
      pTVar18 = pTVar6;
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
LAB_148c6d397:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar18);
  }
  this->ClusterDistributionMask = 0;
  this->ExecutionCount = 0;
  this->bDeveloperDirectoryIncluded = false;
  this->RequestedTestFlags = PerfFilter|ProductFilter|EngineFilter|SmokeFilter;
  this->NumTestPasses = 1;
  this->DeviceGroupFlags = 0;
                    /* WARNING: Could not recover jumptable at 0x000148c6d3e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x168))(this,0);
  return;
}

// StopStartedTestSessions @ 148c6d7f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAutomationControllerManager::StopStartedTestSessions(FAutomationControllerManager *this)

{
  undefined1 *puVar1;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *pTVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *pTVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  UScriptStruct *pUVar12;
  FAutomationWorkerMessageBase *pFVar13;
  longlong lVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  undefined1 *puVar19;
  uint *puVar20;
  undefined1 local_res8 [8];
  uint local_res10 [2];
  uint local_res18 [2];
  int local_res20;
  FString local_d8;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *local_c8;
  int iStack_c0;
  uint uStack_bc;
  undefined1 *local_b8;
  undefined4 uStack_b0;
  int iStack_ac;
  int local_a8;
  int iStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  int local_98;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *local_90;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_88;
  undefined8 uStack_68;
  FGuid local_60 [2];
  
  puVar1 = &(this->StartedTestSessionWorkerInstanceIdSet).Elements.field_0x10;
  local_res18[0] = 0xffffffff;
  iVar5 = *(int *)&(this->StartedTestSessionWorkerInstanceIdSet).Elements.field_0x28;
  pTVar2 = &this->StartedTestSessionWorkerInstanceIdSet;
  iStack_c0 = 0;
  local_res10[0] = 0xffffffff;
  local_a8 = 0;
  uStack_bc = 1;
  iStack_ac = 0;
  if (iVar5 != 0) {
    puVar20 = *(uint **)&(this->StartedTestSessionWorkerInstanceIdSet).Elements.field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)puVar1;
    }
    uVar17 = *puVar20;
    while (uVar17 == 0) {
      lVar14 = (longlong)iStack_c0;
      local_a8 = local_a8 + 0x20;
      iStack_c0 = iStack_c0 + 1;
      iStack_ac = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_c0) goto LAB_148c6d89d;
      uVar17 = puVar20[lVar14 + 1];
    }
    uStack_bc = -uVar17 & uVar17;
    uVar4 = (ulonglong)uStack_bc * 2 + 1;
    lVar14 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_res20 = (int)lVar14;
    iStack_ac = local_res20 + -1 + local_a8;
    if (iVar5 < iStack_ac) {
      iStack_ac = iVar5;
    }
  }
LAB_148c6d89d:
  uVar17 = *(uint *)&(this->StartedTestSessionWorkerInstanceIdSet).Elements.field_0x28;
  uVar16 = uVar17 & 0xffffffe0;
  iStack_a0 = *(int *)&(this->StartedTestSessionWorkerInstanceIdSet).Elements.field_0x8 -
              *(int *)&(this->StartedTestSessionWorkerInstanceIdSet).Elements.field_0x34;
  uStack_b0 = 0xffffffff;
  TStack_88._padding_ = CONCAT44(uStack_bc,iStack_c0);
  TStack_88.CurrentBitIndex = iStack_ac;
  TStack_88.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar17 >> 5;
  TStack_88._28_4_ = iStack_ac;
  TStack_88.BaseBitIndex = local_a8;
  uStack_68 = CONCAT44(uStack_9c,iStack_a0);
  local_c8 = pTVar2;
  local_b8 = puVar1;
  iStack_a4 = iStack_ac;
  local_90 = pTVar2;
  TStack_88.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar17 < 0) || (iVar5 < (int)uVar17)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar11 = *(uint *)&(this->StartedTestSessionWorkerInstanceIdSet).Elements.field_0x28;
  if (uVar17 != uVar11) {
    puVar19 = *(undefined1 **)&(this->StartedTestSessionWorkerInstanceIdSet).Elements.field_0x20;
    if (puVar19 == (undefined1 *)0x0) {
      puVar19 = puVar1;
    }
    uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar15 * 4);
    while (uVar17 == 0) {
      lVar14 = (longlong)iVar15;
      uVar16 = uVar16 + 0x20;
      iVar15 = iVar15 + 1;
      uVar17 = uVar11;
      if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
      goto LAB_148c6d9a0;
      uVar17 = *(uint *)(puVar19 + lVar14 * 4 + 4);
    }
    uVar4 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_98 = (int)lVar14;
    uVar17 = local_98 + -1 + uVar16;
    if ((int)uVar11 < (int)uVar17) {
      uVar17 = uVar11;
    }
  }
LAB_148c6d9a0:
  do {
    pTVar8 = local_90;
    if (*(int *)&(local_90->Elements).field_0x8 - *(int *)&(local_90->Elements).field_0x34 !=
        (int)uStack_68) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_88.CurrentBitIndex == uVar17) &&
        (TStack_88.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar8 == pTVar2))
    {
      return;
    }
    bVar9 = FAutomationDeviceClusterManager::FindDevice
                      (&this->DeviceClusterManager,
                       (FGuid *)(*(longlong *)&pTVar8->Elements +
                                (longlong)TStack_88.CurrentBitIndex * 0x18),(int *)local_res18,
                       (int *)local_res10);
    uVar11 = local_res18[0];
    uVar16 = local_res10[0];
    if (bVar9) {
      lVar14 = (longlong)(int)local_res18[0];
      lVar18 = (longlong)(int)local_res10[0];
      if ((((int)local_res18[0] < 0) ||
          ((this->DeviceClusterManager).Clusters.ArrayNum <= (int)local_res18[0])) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(ClusterIndex >= 0) && (ClusterIndex < Clusters.Num())",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AutomationController\\Private\\AutomationDeviceClusterManager.cpp"
                             ,0x111,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if ((int)uVar16 < 0) {
LAB_148c6da8b:
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(DeviceIndex >= 0) && (DeviceIndex < Clusters[ClusterIndex].Devices.Num())"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AutomationController\\Private\\AutomationDeviceClusterManager.cpp"
                           ,0x112,L"");
        if (bVar9) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      else {
        uVar10 = 0;
        if ((int)uVar11 < (this->DeviceClusterManager).Clusters.ArrayNum) {
          uVar10 = ~uVar11 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (*(int *)((this->DeviceClusterManager).Clusters.AllocatorInstance.Data +
                    lVar14 * 0x30 + 0x28) <= (int)uVar16) goto LAB_148c6da8b;
      }
      uVar10 = 0;
      if ((int)uVar11 < (this->DeviceClusterManager).Clusters.ArrayNum) {
        uVar10 = ~uVar11 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar6 = (this->DeviceClusterManager).Clusters.AllocatorInstance.Data;
      uVar11 = 0;
      if ((int)uVar16 < *(int *)(pFVar6 + lVar14 * 0x30 + 0x28)) {
        uVar11 = ~uVar16 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      puVar3 = (undefined8 *)(lVar18 * 0xe0 + *(longlong *)(pFVar6 + lVar14 * 0x30 + 0x20));
      local_60[0]._0_8_ = *puVar3;
      local_60[0]._8_8_ = puVar3[1];
      if (4 < (byte)LogAutomationController._0_1_) {
        local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_d8.Data.ArrayNum = 0;
        local_d8.Data.ArrayMax = 0;
        FGuid::AppendString(local_60,&local_d8,Digits);
        UE::Logging::Private::BasicLog<5>
                  (&::LOG_Static,(FLogCategoryBase *)&LogAutomationController);
        if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8.Data.AllocatorInstance.Data);
        }
      }
      pUVar12 = FAutomationWorkerStopTestSession::StaticStruct();
      pFVar13 = FMemory::Malloc(0x10,0);
      (pFVar13->InstanceId).A = 0;
      (pFVar13->InstanceId).B = 0;
      (pFVar13->InstanceId).C = 0;
      (pFVar13->InstanceId).D = 0;
      SendMessage(this,pFVar13,pUVar12,(FMessageAddress *)local_60);
    }
    TStack_88.UnvisitedBitMask = TStack_88.UnvisitedBitMask & ~TStack_88._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_88);
  } while( true );
}

// StopTests @ 148c6dc10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FAutomationControllerManager::StopTests(FAutomationControllerManager *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UScriptStruct *pUVar5;
  FAutomationWorkerMessageBase *pFVar6;
  int iVar7;
  int iVar8;
  Type TVar9;
  FString local_48;
  FGuid local_38;
  TSharedPtr<IAutomationReport,1> local_28;
  
  this->bTestResultsAvailable = false;
  TVar9 = Ready;
  this->ClusterDistributionMask = 0;
  if (((this->ReportManager).ReportRoot.Object == (IAutomationReport *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  (**(code **)(((this->ReportManager).ReportRoot.Object)->_padding_ + 0x1a8))();
  bVar3 = FAutomationDeviceClusterManager::HasActiveDevice(&this->DeviceClusterManager);
  if (bVar3) {
    iVar7 = 0;
    if (0 < (this->DeviceClusterManager).Clusters.ArrayNum) {
      do {
        iVar4 = FAutomationDeviceClusterManager::GetNumDevicesInCluster
                          (&this->DeviceClusterManager,iVar7);
        iVar8 = 0;
        if (0 < iVar4) {
          do {
            local_28.Object = (IAutomationReport *)0x0;
            local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
            FAutomationDeviceClusterManager::SetTest
                      (&this->DeviceClusterManager,iVar7,iVar8,&local_28);
            FAutomationDeviceClusterManager::GetDeviceMessageAddress
                      (&this->DeviceClusterManager,(FMessageAddress *)&local_38,iVar7,iVar8);
            if (4 < (byte)LogAutomationController._0_1_) {
              local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_48.Data.ArrayNum = 0;
              local_48.Data.ArrayMax = 0;
              FGuid::AppendString(&local_38,&local_48,Digits);
              UE::Logging::Private::BasicLog<5>
                        (&::LOG_Static,(FLogCategoryBase *)&LogAutomationController);
              if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_48.Data.AllocatorInstance.Data);
              }
            }
            pUVar5 = FAutomationWorkerStopTests::StaticStruct();
            pFVar6 = FMemory::Malloc(0x10,0);
            (pFVar6->InstanceId).A = 0;
            (pFVar6->InstanceId).B = 0;
            (pFVar6->InstanceId).C = 0;
            (pFVar6->InstanceId).D = 0;
            SendMessage(this,pFVar6,pUVar5,(FMessageAddress *)&local_38);
            iVar8 = iVar8 + 1;
            iVar4 = FAutomationDeviceClusterManager::GetNumDevicesInCluster
                              (&this->DeviceClusterManager,iVar7);
          } while (iVar8 < iVar4);
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < (this->DeviceClusterManager).Clusters.ArrayNum);
    }
  }
  else {
    TVar9 = Disabled;
  }
  SetControllerStatus(this,TVar9);
  piVar1 = &(this->TestRunningArray).ArrayMax;
  (this->TestRunningArray).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,&(this->TestRunningArray).AllocatorInstance,0,piVar1);
  }
  StopStartedTestSessions(this);
  return;
}

// Tick @ 148c6de10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FAutomationControllerManager::Tick(FAutomationControllerManager *this)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  bool local_res8 [16];
  
  if ((this->ClusterDistributionMask != 0) &&
     (iVar4 = 0, 0 < (this->DeviceClusterManager).Clusters.ArrayNum)) {
    do {
      local_res8[0] = true;
      uVar3 = 1 << ((byte)iVar4 & 0x1f);
      if ((this->ClusterDistributionMask & uVar3) == 0) {
LAB_148c6de68:
        puVar1 = &this->ClusterDistributionMask;
        *puVar1 = *puVar1 & ~uVar3;
        if (*puVar1 == 0) {
          ProcessResults(this);
          StopStartedTestSessions(this);
          TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                    (&this->TestsCompleteDelegate);
        }
      }
      else {
        iVar2 = FAutomationDeviceClusterManager::GetNumDevicesInCluster
                          (&this->DeviceClusterManager,iVar4);
        if (0 < iVar2) {
          ExecuteNextTask(this,iVar4,local_res8);
        }
        if (local_res8[0] != false) goto LAB_148c6de68;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < (this->DeviceClusterManager).Clusters.ArrayNum);
  }
  if (this->bIsLocalSession == false) {
    UpdateTests(this);
  }
  ProcessComparisonQueue(this);
  return;
}

// ToggleDeviceGroupFlag @ 148c6e8b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAutomationControllerManager::ToggleDeviceGroupFlag(FAutomationControllerManager *this,Type param_1)

{
  this->DeviceGroupFlags = this->DeviceGroupFlags ^ 1 << ((byte)param_1 & 0x1f);
  return;
}

// UpdateDeviceGroups @ 148c6ecc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FAutomationControllerManager::UpdateDeviceGroups(FAutomationControllerManager *this)

{
  int iVar1;
  IAutomationReport *pIVar2;
  code *pcVar3;
  bool bVar4;
  
  FAutomationDeviceClusterManager::ReGroupDevices
            (&this->DeviceClusterManager,this->DeviceGroupFlags);
  iVar1 = (this->DeviceClusterManager).Clusters.ArrayNum;
  if ((this->ReportManager).ReportRoot.Object == (IAutomationReport *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pIVar2 = (this->ReportManager).ReportRoot.Object;
                    /* WARNING: Could not recover jumptable at 0x000148c6ed22. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(pIVar2->_padding_ + 0xf0))(pIVar2,iVar1);
  return;
}

// UpdateTests @ 148c6ede0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FAutomationControllerManager::UpdateTests(FAutomationControllerManager *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  double dVar3;
  int iVar4;
  void *_Src;
  IAutomationReport *pIVar5;
  FSharedReferencer<1> FVar6;
  ForAnyElementType _Src_00;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  FAutomationDeviceInfo *pFVar11;
  FAutomationTestResults *pFVar12;
  UScriptStruct *pUVar13;
  FAutomationWorkerMessageBase *pFVar14;
  uint uVar15;
  int iVar16;
  longlong lVar17;
  uint uVar18;
  TArray<FAutomationControllerManager::FTestRunningInfo,TSizedDefaultAllocator<32>_> *pTVar19;
  int local_res8 [2];
  int local_res10 [2];
  longlong local_res18;
  longlong local_res20;
  ForAnyElementType local_1b8;
  int local_1b0;
  int local_1ac;
  FString local_1a8;
  EAutomationEventType local_198;
  FString local_190;
  void *local_180;
  undefined8 uStack_178;
  FGuid local_170;
  TSharedPtr<IAutomationReport,1> local_158;
  FAutomationTestResults local_148;
  LARGE_INTEGER local_108;
  LARGE_INTEGER local_100;
  FString local_f8;
  FAutomationExecutionEntry local_e8;
  FGuid local_90;
  TSharedPtr<IAutomationReport,1> local_78 [3];
  
  QueryPerformanceCounter(&local_108);
  dVar3 = ((double)local_108.QuadPart * FGenericPlatformTime::SecondsPerCycle +
          __real_4170000000000000) - this->LastTimeUpdateTicked;
  QueryPerformanceCounter(&local_100);
  bVar7 = __real_4000000000000000 <= dVar3;
  this->LastTimeUpdateTicked =
       (double)local_100.QuadPart * FGenericPlatformTime::SecondsPerCycle + __real_4170000000000000;
  if (bVar7) {
    if (4 < (byte)LogAutomationController._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAutomationController);
    }
  }
  else {
    dVar3 = dVar3 + this->CheckTestTimer;
    this->CheckTestTimer = dVar3;
    if ((double)this->CheckTestIntervalSeconds < dVar3) {
      uVar18 = 0;
      if (0 < (this->TestRunningArray).ArrayNum) {
        local_res18 = 0;
        local_res20 = 0;
        do {
          lVar17 = local_res20;
          pTVar19 = &this->TestRunningArray;
          dVar3 = this->CheckTestTimer;
          uVar15 = ~uVar18 >> 0x1f;
          uVar8 = 0;
          uVar9 = uVar8;
          if ((int)uVar18 < (this->TestRunningArray).ArrayNum) {
            uVar9 = uVar15;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar1 = (pTVar19->AllocatorInstance).Data;
          *(double *)(pFVar1 + lVar17 + 0x20) = dVar3 + *(double *)(pFVar1 + lVar17 + 0x20);
          uVar9 = uVar8;
          if ((int)uVar18 < (this->TestRunningArray).ArrayNum) {
            uVar9 = uVar15;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          iVar10 = (this->TestRunningArray).ArrayNum;
          if (*(double *)((pTVar19->AllocatorInstance).Data + lVar17 + 0x20) <=
              (double)this->GameInstanceLostTimerSeconds) {
            if ((int)uVar18 < iVar10) {
              uVar8 = uVar15;
            }
            if ((uVar8 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            pFVar1 = (pTVar19->AllocatorInstance).Data;
            pUVar13 = FAutomationWorkerPing::StaticStruct();
            pFVar14 = FMemory::Malloc(0x10,0);
            (pFVar14->InstanceId).A = 0;
            (pFVar14->InstanceId).B = 0;
            (pFVar14->InstanceId).C = 0;
            (pFVar14->InstanceId).D = 0;
            SendMessage(this,pFVar14,pUVar13,
                        (FMessageAddress *)(pFVar1 + (longlong)(int)uVar18 * 0x28));
          }
          else {
            if ((int)uVar18 < iVar10) {
              uVar8 = uVar15;
            }
            if ((uVar8 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            bVar7 = FAutomationDeviceClusterManager::FindDevice
                              (&this->DeviceClusterManager,
                               (FGuid *)((pTVar19->AllocatorInstance).Data +
                                        ((longlong)(int)uVar18 * 5 + 2) * 8),local_res10,local_res8)
            ;
            if ((!bVar7) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("DeviceClusterManager.FindDevice(TestRunningArray[Index].OwnerInstanceId, ClusterIndex, DeviceIndex)"
                                   ,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AutomationController\\Private\\AutomationControllerManager.cpp"
                                   ,0x491,L""), bVar7)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            iVar4 = local_res10[0];
            iVar10 = local_res8[0];
            FAutomationDeviceClusterManager::GetTest
                      (&this->DeviceClusterManager,&local_158,local_res10[0],local_res8[0]);
            pIVar5 = local_158.Object;
            if ((local_158.Object == (IAutomationReport *)0x0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Report.IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AutomationController\\Private\\AutomationControllerManager.cpp"
                                   ,0x494,L""), bVar7)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            this->bHasErrors = true;
            local_148.GameInstance.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_148.GameInstance.Data.ArrayNum = 0;
            local_148.GameInstance.Data.ArrayMax = 0;
            local_148.Artifacts.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_148.Artifacts.ArrayNum = 0;
            local_148.Artifacts.ArrayMax = 0;
            local_148.Entries.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_148.Entries.ArrayNum = 0;
            local_148.Entries.ArrayMax = 0;
            local_148.WarningTotal = 0;
            local_148.ErrorTotal = 0;
            local_148.Duration = 0.0;
            local_148.State = Fail;
            pFVar11 = FAutomationDeviceClusterManager::GetDeviceInfo
                                (&this->DeviceClusterManager,iVar4,iVar10);
            local_90.A = (pFVar11->Instance).A;
            local_90.B = (pFVar11->Instance).B;
            local_90.C = (pFVar11->Instance).C;
            local_90.D = (pFVar11->Instance).D;
            local_1a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_1a8.Data.ArrayNum = 0;
            local_1a8.Data.ArrayMax = 0;
            FGuid::AppendString(&local_90,&local_1a8,Digits);
            if (local_148.GameInstance.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
               ) {
              FMemory::Free(local_148.GameInstance.Data.AllocatorInstance.Data);
            }
            local_148.GameInstance.Data.AllocatorInstance.Data =
                 local_1a8.Data.AllocatorInstance.Data;
            local_148.GameInstance.Data.ArrayNum = local_1a8.Data.ArrayNum;
            local_148.GameInstance.Data.ArrayMax = local_1a8.Data.ArrayMax;
            local_1a8.Data.ArrayNum = 0;
            local_1a8.Data.ArrayMax = 0;
            local_1a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            pFVar11 = FAutomationDeviceClusterManager::GetDeviceInfo
                                (&this->DeviceClusterManager,iVar4,iVar10);
            local_1b8.Data = (FScriptContainerElement *)0x0;
            local_1b0 = (pFVar11->DeviceName).Data.ArrayNum;
            lVar17 = (longlong)local_1b0;
            pFVar1 = (pFVar11->DeviceName).Data.AllocatorInstance.Data;
            if (local_1b0 == 0) {
              local_1ac = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,local_1b0,0,&local_1b8,local_1b0,&local_1ac);
              memcpy(local_1b8.Data,pFVar1,lVar17 * 2);
            }
            ::FString::PrintfImpl(&local_f8,L"Timeout waiting for device %s");
            _Src_00.Data = local_f8.Data.AllocatorInstance.Data;
            local_198 = Error;
            local_190.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            iVar16 = local_f8.Data.ArrayNum;
            local_190.Data.ArrayNum = iVar16;
            if (iVar16 == 0) {
              local_190.Data.ArrayMax = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,iVar16,0,(ForAnyElementType *)&local_190,iVar16,
                         &local_190.Data.ArrayMax);
              memcpy(local_190.Data.AllocatorInstance.Data,_Src_00.Data,(longlong)iVar16 * 2);
            }
            local_170.A = 0;
            local_170.B = 0;
            local_180 = (void *)0x0;
            uStack_178 = 0;
            local_170.C = 0;
            local_170.D = 0;
            local_e8.Event.Type = local_198;
            ::FString::FString(&local_e8.Event.Message,&local_190);
            _Src = local_180;
            lVar17 = (longlong)(int)uStack_178;
            local_e8.Event.Context.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_e8.Event.Context.Data.ArrayNum = (int)uStack_178;
            if ((int)uStack_178 == 0) {
              local_e8.Event.Context.Data.ArrayMax = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,(int)uStack_178,0,(ForAnyElementType *)&local_e8.Event.Context,
                         (int)uStack_178,&local_e8.Event.Context.Data.ArrayMax);
              memcpy(local_e8.Event.Context.Data.AllocatorInstance.Data,_Src,lVar17 * 2);
            }
            local_e8.LineNumber = -1;
            local_e8.Filename.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_e8.Event.Artifact.A = local_170.A;
            local_e8.Event.Artifact.B = local_170.B;
            local_e8.Event.Artifact.C = local_170.C;
            local_e8.Event.Artifact.D = local_170.D;
            local_e8.Filename.Data.ArrayNum = 0;
            local_e8.Filename.Data.ArrayMax = 0;
            FDateTime::UtcNow();
            if (local_180 != (void *)0x0) {
              FMemory::Free(local_180);
            }
            if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_190.Data.AllocatorInstance.Data);
            }
            FAutomationTestResults::AddEvent(&local_148,&local_e8);
            if (local_e8.Filename.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_e8.Filename.Data.AllocatorInstance.Data);
            }
            if (local_e8.Event.Context.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
               ) {
              FMemory::Free(local_e8.Event.Context.Data.AllocatorInstance.Data);
            }
            if (local_e8.Event.Message.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
               ) {
              FMemory::Free(local_e8.Event.Message.Data.AllocatorInstance.Data);
            }
            if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_f8.Data.AllocatorInstance.Data);
            }
            if (1 < (byte)LogAutomationController._0_1_) {
              UE::Logging::Private::BasicLog<2>
                        (&::LOG_Static,(FLogCategoryBase *)&LogAutomationController);
            }
            if ((pIVar5 == (IAutomationReport *)0x0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar7)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            (**(code **)(pIVar5->_padding_ + 0x100))(pIVar5,iVar4,this->CurrentTestPass,&local_148);
            this->bTestResultsAvailable = true;
            if ((pIVar5 == (IAutomationReport *)0x0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar7)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            pFVar12 = (FAutomationTestResults *)
                      (**(code **)(pIVar5->_padding_ + 0x128))(pIVar5,iVar4,this->CurrentTestPass);
            FVar6.ReferenceController = local_158.SharedReferenceCount.ReferenceController;
            local_78[0].Object = local_158.Object;
            local_78[0].SharedReferenceCount.ReferenceController =
                 local_158.SharedReferenceCount.ReferenceController;
            if (local_158.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_158.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_158.SharedReferenceCount.ReferenceController)->SharedReferenceCount
                   + 1);
              UNLOCK();
            }
            CollectTestResults(this,local_78,pFVar12);
            FAutomationDeviceClusterManager::DisableDevice(&this->DeviceClusterManager,iVar4,iVar10)
            ;
            local_res18 = local_res18 + -1;
            lVar17 = local_res20 + -0x28;
            TArray<FAutomationControllerManager::FTestRunningInfo,TSizedDefaultAllocator<32>_>::
            RemoveAt(&this->TestRunningArray,uVar18,Default);
            bVar7 = FAutomationDeviceClusterManager::HasActiveDevice(&this->DeviceClusterManager);
            if (bVar7) {
              if (3 < (byte)LogAutomationController._0_1_) {
                UE::Logging::Private::BasicLog<4>
                          (&::LOG_Static,(FLogCategoryBase *)&LogAutomationController);
              }
              iVar10 = FAutomationDeviceClusterManager::GetNumActiveDevicesInCluster
                                 (&this->DeviceClusterManager,iVar4);
              if (iVar10 == 0) {
                this->ClusterDistributionMask =
                     this->ClusterDistributionMask & ~(1 << ((byte)iVar4 & 0x1f));
              }
              if ((this->TestRunningArray).ArrayNum == 0) {
                SetControllerStatus(this,Ready);
              }
            }
            else {
              ProcessResults(this);
              if (3 < (byte)LogAutomationController._0_1_) {
                UE::Logging::Private::BasicLog<4>
                          (&::LOG_Static,(FLogCategoryBase *)&LogAutomationController);
              }
              SetControllerStatus(this,Disabled);
              this->ClusterDistributionMask = 0;
            }
            if (local_1b8.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1b8.Data);
            }
            DestructItems<FAutomationExecutionEntry,int>
                      ((FAutomationExecutionEntry *)local_148.Entries.AllocatorInstance.Data,
                       local_148.Entries.ArrayNum);
            if ((FAutomationExecutionEntry *)local_148.Entries.AllocatorInstance.Data !=
                (FAutomationExecutionEntry *)0x0) {
              FMemory::Free(local_148.Entries.AllocatorInstance.Data);
            }
            DestructItems<FAutomationArtifact,int>
                      ((FAutomationArtifact *)local_148.Artifacts.AllocatorInstance.Data,
                       local_148.Artifacts.ArrayNum);
            if ((FAutomationArtifact *)local_148.Artifacts.AllocatorInstance.Data !=
                (FAutomationArtifact *)0x0) {
              FMemory::Free(local_148.Artifacts.AllocatorInstance.Data);
            }
            if (local_148.GameInstance.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
               ) {
              FMemory::Free(local_148.GameInstance.Data.AllocatorInstance.Data);
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (FVar6.ReferenceController);
            uVar18 = uVar18 - 1;
          }
          local_res20 = lVar17 + 0x28;
          local_res18 = local_res18 + 1;
          uVar18 = uVar18 + 1;
        } while ((int)uVar18 < (this->TestRunningArray).ArrayNum);
      }
      this->CheckTestTimer = 0.0;
    }
  }
  return;
}

