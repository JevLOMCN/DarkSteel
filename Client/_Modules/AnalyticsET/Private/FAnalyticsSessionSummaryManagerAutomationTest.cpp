// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnalyticsET
// Functions: 8

// GetTestFlags @ 14318d980

EAutomationTestFlags __thiscall
FAnalyticsSessionSummaryManagerAutomationTest::GetTestFlags
          (FAnalyticsSessionSummaryManagerAutomationTest *this)

{
  return EngineFilter|MediumPriority|EditorContext;
}

// IsStressTest @ 14318d990

bool __thiscall
FAnalyticsSessionSummaryManagerAutomationTest::IsStressTest
          (FAnalyticsSessionSummaryManagerAutomationTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14318d9a0

uint __thiscall
FAnalyticsSessionSummaryManagerAutomationTest::GetRequiredDeviceNum
          (FAnalyticsSessionSummaryManagerAutomationTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 14318d9b0

FString * __thiscall
FAnalyticsSessionSummaryManagerAutomationTest::GetTestSourceFileName
          (FAnalyticsSessionSummaryManagerAutomationTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\AnalyticsET\\Private\\Tests\\AnalyticsSessionSummaryManagerTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14318d9e0

int __thiscall
FAnalyticsSessionSummaryManagerAutomationTest::GetTestSourceFileLine
          (FAnalyticsSessionSummaryManagerAutomationTest *this)

{
  return 0x10;
}

// GetTests @ 14318d9f0

/* WARNING: Removing unreachable block (ram,0x00014318dadd) */
/* WARNING: Removing unreachable block (ram,0x00014318dba8) */

void __thiscall
FAnalyticsSessionSummaryManagerAutomationTest::GetTests
          (FAnalyticsSessionSummaryManagerAutomationTest *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.Analytics.SessionSummaryManager");
  pFVar4 = (param_1->AllocatorInstance).Data;
  if (((pFVar4 <= (FScriptContainerElement *)&local_18) &&
      ((FScriptContainerElement *)&local_18 < pFVar4 + (longlong)param_1->ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = param_1->ArrayNum;
  if (iVar3 == param_1->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar3 + 1;
  pFVar4 = (param_1->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar4 = 0;
  *(FScriptContainerElement **)pFVar4 = local_18.Data.AllocatorInstance.Data;
  *(int *)(pFVar4 + 8) = local_18.Data.ArrayNum;
  *(int *)(pFVar4 + 0xc) = local_18.Data.ArrayMax;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar4 = (param_2->AllocatorInstance).Data;
  local_28 = 0;
  local_20 = 0;
  if (((pFVar4 <= (FScriptContainerElement *)&local_28) &&
      ((FScriptContainerElement *)&local_28 < pFVar4 + (longlong)param_2->ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = param_2->ArrayNum;
  if (iVar3 == param_2->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar3 + 1;
  pFVar4 = (param_2->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar4 = 0;
  *(undefined8 *)pFVar4 = local_28;
  *(undefined4 *)(pFVar4 + 8) = (undefined4)local_20;
  *(undefined4 *)(pFVar4 + 0xc) = local_20._4_4_;
  return;
}

// RunTest @ 14318dbd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */

bool __thiscall
FAnalyticsSessionSummaryManagerAutomationTest::RunTest
          (FAnalyticsSessionSummaryManagerAutomationTest *this,FString *param_1)

{
  FString *pFVar1;
  uint *puVar2;
  FDummyAnalyticsSummarySender *pFVar3;
  code *pcVar4;
  FSharedReferencer<1> FVar5;
  longlong *plVar6;
  char cVar7;
  bool bVar8;
  undefined1 uVar9;
  bool bVar10;
  DWORD DVar11;
  DWORD DVar12;
  int iVar13;
  FGuid *pFVar14;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar15;
  IFileManager *pIVar16;
  FString *pFVar17;
  TSharedRef<FDummyAnalyticsSummarySender,1> *pTVar18;
  ulonglong uVar19;
  undefined8 uVar20;
  wchar_t *pwVar21;
  ForAnyElementType FVar22;
  longlong lVar23;
  uint *puVar24;
  FScriptContainerElement *pFVar25;
  FScriptContainerElement *pFVar26;
  TReferenceControllerBase<1> *pTVar27;
  longlong lVar28;
  FScriptContainerElement *pFVar29;
  uint uVar30;
  FProcessGroup *pFVar31;
  FScriptContainerElement *pFVar32;
  undefined1 auStackY_4f8 [32];
  undefined1 local_4a8 [8];
  FString local_4a0;
  TReferenceControllerBase<1> *local_490;
  FString local_488;
  FAnalyticsSessionSummaryManager local_478;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_3c8;
  FString local_3b8;
  FString local_3a8;
  FString local_398;
  FString local_388;
  FString local_378;
  TSharedPtr<IAnalyticsPropertyStore,1> local_368;
  TSharedPtr<IAnalyticsPropertyStore,1> local_358;
  longlong *local_348;
  undefined1 auStack_340 [16];
  uint uStack_330;
  uint uStack_32c;
  longlong local_328;
  TSet<TTuple<FString,FAnalyticsSessionSummaryManager::FProcessGroup>,TDefaultMapHashableKeyFuncs<FString,FAnalyticsSessionSummaryManager::FProcessGroup,0>,FDefaultSetAllocator>
  *pTStack_320;
  TSet<TTuple<FString,FAnalyticsSessionSummaryManager::FProcessGroup>,TDefaultMapHashableKeyFuncs<FString,FAnalyticsSessionSummaryManager::FProcessGroup,0>,FDefaultSetAllocator>
  *local_318;
  undefined2 local_310;
  FString local_308;
  FString local_2f8;
  FString local_2e8;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  FSharedReferencer<1> local_2c0;
  FString local_2b8;
  FString local_2a8;
  undefined8 local_298;
  FSharedReferencer<1> local_290;
  FString local_288;
  undefined4 local_278;
  LARGE_INTEGER local_270;
  code *local_268;
  FAnalyticsSessionSummaryManager **local_260;
  FRegexPattern local_258;
  TSharedRef<FDummyAnalyticsSummarySender,1> local_248;
  FString local_238;
  TSharedRef<FDummyAnalyticsSummarySender,1> local_228;
  FString local_218;
  FAnalyticsSessionSummaryManager *local_208;
  undefined1 *local_200;
  FRegexPattern *local_1f8;
  FString local_1f0;
  FString local_1e0;
  FString local_1d0;
  FString local_1c0;
  undefined1 local_1b0 [32];
  longlong local_190;
  TSet<TTuple<FString,FAnalyticsSessionSummaryManager::FProcessGroup>,TDefaultMapHashableKeyFuncs<FString,FAnalyticsSessionSummaryManager::FProcessGroup,0>,FDefaultSetAllocator>
  *pTStack_188;
  FGuid local_180;
  FGuid local_170;
  IAnalyticsSessionSummarySender *local_160;
  TReferenceControllerBase<1> *pTStack_158;
  IAnalyticsSessionSummarySender *local_150;
  TReferenceControllerBase<1> *pTStack_148;
  FAnalyticsSessionSummaryManager local_138;
  undefined1 local_88 [32];
  void *local_68;
  undefined4 local_60;
  uint local_5c;
  undefined4 local_58;
  undefined4 local_54;
  ForElementType<FSetElementId> local_48;
  int local_40;
  ulonglong local_38;
  
  pFVar1 = &local_478.SessionRootPath;
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_4f8;
  ::FString::FString(&local_3b8,L"DummyPrincipal");
  ::FString::FString(&local_1c0,L"DummySubsidiary");
  pFVar14 = FGuid::NewGuid(&local_180);
  local_488.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_488.Data.ArrayNum = 0;
  local_488.Data.ArrayMax = 0;
  FGuid::AppendString(pFVar14,&local_488,Digits);
  ::FString::FString(&local_378,L"DummyUserId");
  ::FString::FString(&local_388,L"DummyAppId");
  ::FString::FString(&local_398,L"DummyAppVersion");
  pFVar14 = FGuid::NewGuid(&local_170);
  local_4a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_4a0.Data.ArrayNum = 0;
  local_4a0.Data.ArrayMax = 0;
  FGuid::AppendString(pFVar14,&local_4a0,DigitsWithHyphensInBraces);
  pTVar15 = &FPaths::AutomationTransientDir(&local_1f0)->Data;
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_3c8,pTVar15,0xf - (uint)(pTVar15->ArrayNum != 0));
  ::FString::PathAppend((FString *)&local_3c8,L"AnalyticsTest",0xd);
  if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
  }
  pIVar16 = IFileManager::Get();
  FVar22.Data = (FScriptContainerElement *)L"";
  if (local_3c8.ArrayNum != 0) {
    FVar22.Data = local_3c8.AllocatorInstance.Data;
  }
  (**(code **)((longlong)*pIVar16 + 0x60))(pIVar16,FVar22.Data,1);
  ::FString::FString(&local_2e8,L"DelayedSend");
  ::FString::FString(&local_2f8,L"SessionId");
  ::FString::FString(&local_308,L"SentFrom");
  ::FString::FString(&local_3a8,L"Prop1");
  ::FString::FString(&local_1d0,L"Prop2");
  DVar11 = FWindowsPlatformProcess::GetCurrentProcessId();
  DVar12 = FWindowsPlatformProcess::GetCurrentProcessId();
  iVar13 = local_3b8.Data.ArrayNum;
  FVar22.Data = local_3b8.Data.AllocatorInstance.Data;
  local_478.ProcessName.Data.ArrayNum = local_3b8.Data.ArrayNum;
  local_478.WeakPropertyStores.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_478.WeakPropertyStores.ArrayNum = 0;
  local_478.WeakPropertyStores.ArrayMax = 0;
  local_478.SummarySender.Object = (IAnalyticsSessionSummarySender *)0x0;
  local_478.SummarySender.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_478.ProcessName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_3b8.Data.ArrayNum == 0) {
    local_478.ProcessName.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_3b8.Data.ArrayNum,0,(ForAnyElementType *)&local_478.ProcessName,
               local_3b8.Data.ArrayNum,&local_478.ProcessName.Data.ArrayMax);
    memcpy(local_478.ProcessName.Data.AllocatorInstance.Data,FVar22.Data,(longlong)iVar13 * 2);
  }
  FVar22.Data = local_488.Data.AllocatorInstance.Data;
  lVar23 = (longlong)local_488.Data.ArrayNum;
  local_478.ProcessGroupId.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_478.ProcessGroupId.Data.ArrayNum = local_488.Data.ArrayNum;
  if (local_488.Data.ArrayNum == 0) {
    local_478.ProcessGroupId.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_488.Data.ArrayNum,0,(ForAnyElementType *)&local_478.ProcessGroupId,
               local_488.Data.ArrayNum,&local_478.ProcessGroupId.Data.ArrayMax);
    memcpy(local_478.ProcessGroupId.Data.AllocatorInstance.Data,FVar22.Data,lVar23 * 2);
  }
  FVar22.Data = local_378.Data.AllocatorInstance.Data;
  local_478.UserId.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar13 = local_378.Data.ArrayNum;
  local_478.UserId.Data.ArrayNum = iVar13;
  if (iVar13 == 0) {
    local_478.UserId.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar13,0,(ForAnyElementType *)&local_478.UserId,iVar13,
               &local_478.UserId.Data.ArrayMax);
    memcpy(local_478.UserId.Data.AllocatorInstance.Data,FVar22.Data,(longlong)iVar13 * 2);
  }
  FVar22.Data = local_388.Data.AllocatorInstance.Data;
  local_478.AppId.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar13 = local_388.Data.ArrayNum;
  local_478.AppId.Data.ArrayNum = iVar13;
  if (iVar13 == 0) {
    local_478.AppId.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar13,0,(ForAnyElementType *)&local_478.AppId,iVar13,
               &local_478.AppId.Data.ArrayMax);
    memcpy(local_478.AppId.Data.AllocatorInstance.Data,FVar22.Data,(longlong)iVar13 * 2);
  }
  FVar22.Data = local_398.Data.AllocatorInstance.Data;
  local_478.AppVersion.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar13 = local_398.Data.ArrayNum;
  local_478.AppVersion.Data.ArrayNum = iVar13;
  if (iVar13 == 0) {
    local_478.AppVersion.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar13,0,(ForAnyElementType *)&local_478.AppVersion,iVar13,
               &local_478.AppVersion.Data.ArrayMax);
    memcpy(local_478.AppVersion.Data.AllocatorInstance.Data,FVar22.Data,(longlong)iVar13 * 2);
  }
  FVar22.Data = local_4a0.Data.AllocatorInstance.Data;
  lVar23 = (longlong)local_4a0.Data.ArrayNum;
  local_478.SessionId.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_478.SessionId.Data.ArrayNum = local_4a0.Data.ArrayNum;
  if (local_4a0.Data.ArrayNum == 0) {
    local_478.SessionId.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_4a0.Data.ArrayNum,0,(ForAnyElementType *)&local_478.SessionId,
               local_4a0.Data.ArrayNum,&local_478.SessionId.Data.ArrayMax);
    memcpy(local_478.SessionId.Data.AllocatorInstance.Data,FVar22.Data,lVar23 * 2);
  }
  FVar22.Data = local_3c8.AllocatorInstance.Data;
  local_478.SessionRootPath.Data.ArrayNum = local_3c8.ArrayNum;
  local_478.SessionRootPath.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_3c8.ArrayNum == 0) {
    local_478.SessionRootPath.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_3c8.ArrayNum,0,(ForAnyElementType *)pFVar1,local_3c8.ArrayNum,
               &local_478.SessionRootPath.Data.ArrayMax);
    memcpy(local_478.SessionRootPath.Data.AllocatorInstance.Data,FVar22.Data,
           (longlong)local_3c8.ArrayNum * 2);
  }
  local_478.StoreCounter = 0;
  local_478.CurrentProcessId = DVar12;
  local_478.PrincipalProcessId = DVar11;
  QueryPerformanceCounter(&local_270);
  local_478.bOrphanGroupOwner = false;
  local_478.bIsPrincipal = DVar12 == DVar11;
  local_478.NextOrphanSessionCheckTimeSecs =
       (double)local_270.QuadPart * FGenericPlatformTime::SecondsPerCycle + __real_4170000000000000;
  if (local_478.SessionRootPath.Data.ArrayNum < 2) {
LAB_14318e05d:
    pFVar17 = AnalyticsSessionUtils::GetDefaultSavedDir(&local_1e0);
    if (pFVar1 != pFVar17) {
      if (local_478.SessionRootPath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_478.SessionRootPath.Data.AllocatorInstance.Data);
      }
      local_478.SessionRootPath.Data.AllocatorInstance.Data = (pFVar17->Data).AllocatorInstance.Data
      ;
      (pFVar17->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_478.SessionRootPath.Data.ArrayNum = (pFVar17->Data).ArrayNum;
      local_478.SessionRootPath.Data.ArrayMax = (pFVar17->Data).ArrayMax;
      (pFVar17->Data).ArrayNum = 0;
      (pFVar17->Data).ArrayMax = 0;
    }
    if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
    }
  }
  else {
    pIVar16 = IFileManager::Get();
    FVar22.Data = (FScriptContainerElement *)L"";
    if (local_478.SessionRootPath.Data.ArrayNum != 0) {
      FVar22.Data = local_478.SessionRootPath.Data.AllocatorInstance.Data;
    }
    cVar7 = (**(code **)((longlong)*pIVar16 + 0x58))(pIVar16,FVar22.Data);
    if (cVar7 == '\0') goto LAB_14318e05d;
  }
  pIVar16 = IFileManager::Get();
  FVar22.Data = (FScriptContainerElement *)L"";
  if (local_478.SessionRootPath.Data.ArrayNum != 0) {
    FVar22.Data = local_478.SessionRootPath.Data.AllocatorInstance.Data;
  }
  (**(code **)((longlong)*pIVar16 + 0x60))(pIVar16,FVar22.Data,1);
  if (local_478.bIsPrincipal != false) {
    local_478.bOrphanGroupOwner =
         AnalyticsSessionUtils::TryAcquiringOrphanGroupsOwnership
                   (pFVar1,&local_478.ProcessName,local_478.CurrentProcessId);
  }
  pTVar18 = MakeShared<FDummyAnalyticsSummarySender,1>(&local_228);
  pTVar27 = (pTVar18->SharedReferenceCount).ReferenceController;
  pFVar3 = pTVar18->Object;
  local_490 = pTVar27;
  if (pTVar27 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_228.SharedReferenceCount.ReferenceController);
  }
  else {
    LOCK();
    pTVar27->SharedReferenceCount = (atomic<int>)((int)pTVar27->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_228.SharedReferenceCount.ReferenceController);
    LOCK();
    pTVar27->SharedReferenceCount = (atomic<int>)((int)pTVar27->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar27->SharedReferenceCount = (atomic<int>)((int)pTVar27->SharedReferenceCount + 1);
    UNLOCK();
  }
  FVar5.ReferenceController = local_478.SummarySender.SharedReferenceCount.ReferenceController;
  local_160 = local_478.SummarySender.Object;
  pTStack_158 = local_478.SummarySender.SharedReferenceCount.ReferenceController;
  local_478.SummarySender.Object = (IAnalyticsSessionSummarySender *)pFVar3;
  local_478.SummarySender.SharedReferenceCount.ReferenceController = pTVar27;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar5.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar27);
  FAnalyticsSessionSummaryManager::MakeStore(&local_478,&local_358,0x400);
  if ((local_358.Object == (IAnalyticsPropertyStore *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("PropertyStore",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\AnalyticsET\\Private\\Tests\\AnalyticsSessionSummaryManagerTests.cpp"
                         ,0x4e,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    uVar9 = (*pcVar4)();
    return (bool)uVar9;
  }
  (**(code **)((longlong)*local_358.Object + 0xb0))(local_358.Object,&local_3a8,0x2a);
  local_2d8 = 0x7fffffffffffffff;
  (**(code **)((longlong)*local_358.Object + 0x150))(local_358.Object,0);
  local_2c0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_358.Object = (IAnalyticsPropertyStore *)0x0;
  local_2c8 = 0;
  SharedPointerInternals::FSharedReferencer<1>::operator=
            (&local_358.SharedReferenceCount,&local_2c0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2c0.ReferenceController);
  if ((FDummyAnalyticsSummarySender *)local_478.SummarySender.Object !=
      (FDummyAnalyticsSummarySender *)0x0) {
    local_88._0_8_ = (FScriptContainerElement *)0x0;
    local_88._8_8_ = 0;
    local_68 = (void *)0x0;
    local_60 = 0;
    local_5c = 0x80;
    local_58 = 0xffffffff;
    local_54 = 0;
    local_48 = (ForElementType<FSetElementId>)0x0;
    local_40 = 0;
    ::FString::FString(&local_218,L"(^[0-9A-Za-z]+)_([0-9]+)_([0-9]+)(_[0-9]+)?_(.*)");
    FRegexPattern::FRegexPattern(&local_258,&local_218,None);
    if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_218.Data.AllocatorInstance.Data);
    }
    pIVar16 = IFileManager::Get();
    FVar22.Data = (FScriptContainerElement *)L"";
    if (local_478.SessionRootPath.Data.ArrayNum != 0) {
      FVar22.Data = local_478.SessionRootPath.Data.AllocatorInstance.Data;
    }
    local_208 = &local_478;
    local_200 = local_88;
    local_1f8 = &local_258;
    local_260 = &local_208;
    local_268 = UE::Core::Private::Function::
                TFunctionRefCaller<`FAnalyticsSessionSummaryManager::GetSessionFiles'::__l2::<lambda_1>,bool,wchar_t_const_*,bool>
                ::Call;
    (**(code **)((longlong)*pIVar16 + 0x90))(pIVar16,FVar22.Data,&local_268);
    if (local_478.bOrphanGroupOwner != false) {
      if ((local_478.bIsPrincipal == false) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsPrincipalProcess()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\AnalyticsET\\Private\\AnalyticsSessionSummaryManager.cpp"
                             ,0x184,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        uVar9 = (*pcVar4)();
        return (bool)uVar9;
      }
      TSet<TTuple<FString,FAnalyticsSessionSummaryManager::FProcessGroup>,TDefaultMapHashableKeyFuncs<FString,FAnalyticsSessionSummaryManager::FProcessGroup,0>,FDefaultSetAllocator>
      ::TIterator::TIterator
                ((TIterator *)local_1b0,
                 (TSet<TTuple<FString,FAnalyticsSessionSummaryManager::FProcessGroup>,TDefaultMapHashableKeyFuncs<FString,FAnalyticsSessionSummaryManager::FProcessGroup,0>,FDefaultSetAllocator>
                  *)local_88);
      local_318 = (TSet<TTuple<FString,FAnalyticsSessionSummaryManager::FProcessGroup>,TDefaultMapHashableKeyFuncs<FString,FAnalyticsSessionSummaryManager::FProcessGroup,0>,FDefaultSetAllocator>
                   *)local_88;
      local_310 = 0;
      stack0xfffffffffffffcc8 = local_1b0._16_16_;
      local_348 = (longlong *)local_1b0._0_8_;
      auStack_340._0_8_ = local_1b0._8_8_;
      local_328 = local_190;
      pTStack_320 = pTStack_188;
      uVar19 = local_1b0._24_8_ >> 0x20;
      uVar30 = local_1b0._28_4_;
      if ((int)uVar30 < *(int *)(local_1b0._16_8_ + 0x18)) {
        do {
          plVar6 = local_348;
          lVar23 = *local_348;
          if (*(int *)((longlong)(int)uVar19 * 0x40 + 0x20 + lVar23) < 2) {
LAB_14318e427:
            lVar23 = *plVar6;
            lVar28 = (longlong)(int)uVar30 * 0x40;
            if (*(DWORD *)(lVar28 + 0x10 + lVar23) != local_478.PrincipalProcessId) {
              iVar13 = *(int *)(lVar28 + 0x30 + lVar23);
              puVar24 = *(uint **)(lVar28 + 0x28 + lVar23);
              puVar2 = puVar24 + (longlong)iVar13 * 10;
              while( true ) {
                if (*(int *)(lVar28 + 0x30 + lVar23) != iVar13) {
                  local_4a8[0] = 0;
                  `TCheckedPointerIterator<FAnalyticsSessionSummaryManager::FPropertyFileInfo,int,0>
                  ::operator!='::__l2::<lambda_1>::operator()(local_4a8);
                }
                if (puVar24 == puVar2) goto LAB_14318e492;
                bVar8 = FWindowsPlatformProcess::IsApplicationRunning(*puVar24);
                if (bVar8) break;
                puVar24 = puVar24 + 10;
              }
              goto LAB_14318e47f;
            }
          }
          else {
            iVar13 = *(int *)((longlong)(int)uVar30 * 0x40 + 0x20 + lVar23);
            if (iVar13 == local_478.ProcessName.Data.ArrayNum) {
              if (iVar13 < 2) goto LAB_14318e427;
              iVar13 = FGenericPlatformStricmp::Stricmp
                                 (*(wchar_t **)((longlong)(int)uVar30 * 0x40 + 0x18 + lVar23),
                                  (wchar_t *)local_478.ProcessName.Data.AllocatorInstance.Data);
              bVar8 = iVar13 == 0;
            }
            else {
              bVar8 = iVar13 + local_478.ProcessName.Data.ArrayNum == 1;
            }
            if (bVar8) goto LAB_14318e427;
LAB_14318e47f:
            TSet<TTuple<FString,FAnalyticsSessionSummaryManager::FProcessGroup>,TDefaultMapHashableKeyFuncs<FString,FAnalyticsSessionSummaryManager::FProcessGroup,0>,FDefaultSetAllocator>
            ::RemoveByIndex(pTStack_320,uVar30);
            local_310 = CONCAT11(local_310._1_1_,1);
          }
LAB_14318e492:
          uStack_330 = uStack_330 & ~auStack_340._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                    ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_340);
          uVar19 = (ulonglong)uStack_32c;
          uVar30 = uStack_32c;
        } while ((int)uStack_32c < *(int *)(auStack_340._8_8_ + 0x18));
        pTVar27 = local_490;
        if (((char)local_310 != '\0') && (local_310._1_1_ != '\0')) {
          uVar30 = *(int *)&(local_318->Elements).field_0x8 -
                   *(int *)&(local_318->Elements).field_0x34;
          if (uVar30 < 4) {
            iVar13 = 1;
          }
          else {
            uVar19 = (ulonglong)((uVar30 >> 1) + 7) * 2 + 1;
            lVar23 = 0x3f;
            if (uVar19 != 0) {
              for (; uVar19 >> lVar23 == 0; lVar23 = lVar23 + -1) {
              }
            }
            local_278 = (undefined4)lVar23;
            iVar13 = 1 << ((byte)lVar23 & 0x1f);
          }
          if (((0 < (int)uVar30) && (local_318->HashSize < iVar13)) ||
             (iVar13 < local_318->HashSize)) {
            local_318->HashSize = iVar13;
            TSet<TTuple<FString,FAnalyticsSessionSummaryManager::FProcessGroup>,TDefaultMapHashableKeyFuncs<FString,FAnalyticsSessionSummaryManager::FProcessGroup,0>,FDefaultSetAllocator>
            ::Rehash(local_318);
            pTVar27 = local_490;
          }
        }
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_258.Implementation.SharedReferenceCount.ReferenceController);
    iVar13 = 0;
    if (local_478.ProcessGroupId.Data.ArrayNum == 0) {
      pwVar21 = L"";
    }
    else {
      iVar13 = local_478.ProcessGroupId.Data.ArrayNum + -1;
      pwVar21 = (wchar_t *)local_478.ProcessGroupId.Data.AllocatorInstance.Data;
    }
    uVar30 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar13,pwVar21);
    iVar13 = TSet<TTuple<FString,FAnalyticsSessionSummaryManager::FProcessGroup>,TDefaultMapHashableKeyFuncs<FString,FAnalyticsSessionSummaryManager::FProcessGroup,0>,FDefaultSetAllocator>
             ::FindIndexByHash<FString>
                       ((TSet<TTuple<FString,FAnalyticsSessionSummaryManager::FProcessGroup>,TDefaultMapHashableKeyFuncs<FString,FAnalyticsSessionSummaryManager::FProcessGroup,0>,FDefaultSetAllocator>
                         *)local_88,uVar30,&local_478.ProcessGroupId);
    if (iVar13 != -1) {
      pFVar31 = (FProcessGroup *)
                ((FScriptContainerElement *)(local_88._0_8_ + (longlong)iVar13 * 0x40) + 0x10);
      if ((FScriptContainerElement *)(local_88._0_8_ + (longlong)iVar13 * 0x40) ==
          (FScriptContainerElement *)0x0) {
        pFVar31 = (FProcessGroup *)0x0;
      }
      if (pFVar31 != (FProcessGroup *)0x0) {
        FAnalyticsSessionSummaryManager::ProcessSummary
                  (&local_478,&local_478.ProcessGroupId,pFVar31);
      }
    }
    local_40 = 0;
    if (local_48 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_48);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,FAnalyticsSessionSummaryManager::FProcessGroup>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FAnalyticsSessionSummaryManager::FProcessGroup>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_88,0,local_88._8_4_);
    bVar8 = local_88._12_4_ != 0;
    local_88._8_8_ = (ulonglong)(uint)local_88._12_4_ << 0x20;
    if (bVar8) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,8,0,(ForAnyElementType *)local_88,0,(int *)(local_88 + 0xc));
    }
    local_58 = 0xffffffff;
    local_54 = 0;
    local_60 = 0;
    if (0x80 < local_5c) {
      local_5c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),0);
    }
    if (local_68 != (void *)0x0) {
      FMemory::Free(local_68);
    }
    if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_88._0_8_);
    }
  }
  pFVar32 = (FScriptContainerElement *)0x0;
  local_478.StoreCounter = 0;
  if ((pFVar3 == (FDummyAnalyticsSummarySender *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    uVar9 = (*pcVar4)();
    return (bool)uVar9;
  }
  iVar13 = (pFVar3->UserId).Data.ArrayNum;
  if (iVar13 == local_378.Data.ArrayNum) {
    if (1 < iVar13) {
      iVar13 = FGenericPlatformStricmp::Stricmp
                         ((wchar_t *)(pFVar3->UserId).Data.AllocatorInstance.Data,
                          (wchar_t *)local_378.Data.AllocatorInstance.Data);
      bVar8 = iVar13 == 0;
      goto LAB_14318e6d8;
    }
  }
  else {
    bVar8 = iVar13 + local_378.Data.ArrayNum == 1;
LAB_14318e6d8:
    if ((!bVar8) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("SummarySender->UserId == PrincipalProcessUserId",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\AnalyticsET\\Private\\Tests\\AnalyticsSessionSummaryManagerTests.cpp"
                           ,0x59,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      uVar9 = (*pcVar4)();
      return (bool)uVar9;
    }
  }
  if ((pFVar3 == (FDummyAnalyticsSummarySender *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    uVar9 = (*pcVar4)();
    return (bool)uVar9;
  }
  iVar13 = (pFVar3->AppId).Data.ArrayNum;
  if (iVar13 == local_388.Data.ArrayNum) {
    if (1 < iVar13) {
      iVar13 = FGenericPlatformStricmp::Stricmp
                         ((wchar_t *)(pFVar3->AppId).Data.AllocatorInstance.Data,
                          (wchar_t *)local_388.Data.AllocatorInstance.Data);
      bVar8 = iVar13 == 0;
      goto LAB_14318e757;
    }
  }
  else {
    bVar8 = iVar13 + local_388.Data.ArrayNum == 1;
LAB_14318e757:
    if ((!bVar8) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("SummarySender->AppId == PrincipalProcessAppId",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\AnalyticsET\\Private\\Tests\\AnalyticsSessionSummaryManagerTests.cpp"
                           ,0x5a,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      uVar9 = (*pcVar4)();
      return (bool)uVar9;
    }
  }
  if ((pFVar3 == (FDummyAnalyticsSummarySender *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    uVar9 = (*pcVar4)();
    return (bool)uVar9;
  }
  iVar13 = (pFVar3->AppVersion).Data.ArrayNum;
  if (iVar13 == local_398.Data.ArrayNum) {
    if (1 < iVar13) {
      iVar13 = FGenericPlatformStricmp::Stricmp
                         ((wchar_t *)(pFVar3->AppVersion).Data.AllocatorInstance.Data,
                          (wchar_t *)local_398.Data.AllocatorInstance.Data);
      bVar8 = iVar13 == 0;
      goto LAB_14318e7d6;
    }
  }
  else {
    bVar8 = iVar13 + local_398.Data.ArrayNum == 1;
LAB_14318e7d6:
    if ((!bVar8) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("SummarySender->AppVersion == PrincipalProcessAppVersion",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\AnalyticsET\\Private\\Tests\\AnalyticsSessionSummaryManagerTests.cpp"
                           ,0x5b,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      uVar9 = (*pcVar4)();
      return (bool)uVar9;
    }
  }
  if ((pFVar3 == (FDummyAnalyticsSummarySender *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    uVar9 = (*pcVar4)();
    return (bool)uVar9;
  }
  iVar13 = (pFVar3->SessionId).Data.ArrayNum;
  if (iVar13 == local_4a0.Data.ArrayNum) {
    if (1 < iVar13) {
      iVar13 = FGenericPlatformStricmp::Stricmp
                         ((wchar_t *)(pFVar3->SessionId).Data.AllocatorInstance.Data,
                          (wchar_t *)local_4a0.Data.AllocatorInstance.Data);
      bVar8 = iVar13 == 0;
      goto LAB_14318e856;
    }
  }
  else {
    bVar8 = iVar13 + local_4a0.Data.ArrayNum == 1;
LAB_14318e856:
    if ((!bVar8) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("SummarySender->SessionId == PrincipalProcessSessionId",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\AnalyticsET\\Private\\Tests\\AnalyticsSessionSummaryManagerTests.cpp"
                           ,0x5c,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      uVar9 = (*pcVar4)();
      return (bool)uVar9;
    }
  }
  ::FString::FString(&local_2b8,L"false");
  if ((pFVar3 == (FDummyAnalyticsSummarySender *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    uVar9 = (*pcVar4)();
    return (bool)uVar9;
  }
  pFVar25 = (pFVar3->Properties).AllocatorInstance.Data;
  pFVar29 = pFVar25 + (longlong)(pFVar3->Properties).ArrayNum * 0x30;
  uVar20 = local_2e8.Data._8_8_;
  pFVar26 = pFVar32;
  if (pFVar25 != pFVar29) {
    do {
      iVar13 = *(int *)(pFVar25 + 8);
      pFVar26 = pFVar25;
      if (iVar13 == (int)uVar20) {
        if (iVar13 < 2) break;
        iVar13 = FGenericPlatformStricmp::Stricmp
                           (*(wchar_t **)pFVar25,(wchar_t *)local_2e8.Data.AllocatorInstance.Data);
        bVar8 = iVar13 == 0;
        uVar20 = local_2e8.Data._8_8_;
      }
      else {
        bVar8 = iVar13 + (int)uVar20 == 1;
      }
      if ((bVar8) || (pFVar25 = pFVar25 + 0x30, pFVar26 = pFVar32, pFVar25 == pFVar29)) break;
    } while( true );
  }
  iVar13 = *(int *)(pFVar26 + 0x18);
  bVar8 = false;
  if (iVar13 == local_2b8.Data.ArrayNum) {
    bVar10 = bVar8;
    if (1 < iVar13) {
      iVar13 = FGenericPlatformStricmp::Stricmp
                         (*(wchar_t **)(pFVar26 + 0x10),
                          (wchar_t *)local_2b8.Data.AllocatorInstance.Data);
      bVar10 = iVar13 != 0;
    }
  }
  else {
    bVar10 = iVar13 + local_2b8.Data.ArrayNum != 1;
  }
  if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
  }
  if ((bVar10) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("SummarySender->Properties.FindByPredicate([&](const FAnalyticsEventAttribute& Attr) { return Attr.GetName() == DelayedSendProp.Key; })->GetValue() == LexToString(false)"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\AnalyticsET\\Private\\Tests\\AnalyticsSessionSummaryManagerTests.cpp"
                          ,0x5f,L""), bVar10)) {
    pcVar4 = (code *)swi(3);
    uVar9 = (*pcVar4)();
    return (bool)uVar9;
  }
  if ((pFVar3 == (FDummyAnalyticsSummarySender *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar4 = (code *)swi(3);
    uVar9 = (*pcVar4)();
    return (bool)uVar9;
  }
  pFVar25 = (pFVar3->Properties).AllocatorInstance.Data;
  pFVar29 = pFVar25 + (longlong)(pFVar3->Properties).ArrayNum * 0x30;
  uVar20 = local_2f8.Data._8_8_;
  pFVar26 = pFVar32;
  if (pFVar25 != pFVar29) {
    do {
      iVar13 = *(int *)(pFVar25 + 8);
      pFVar26 = pFVar25;
      if (iVar13 == (int)uVar20) {
        if (iVar13 < 2) break;
        iVar13 = FGenericPlatformStricmp::Stricmp
                           (*(wchar_t **)pFVar25,(wchar_t *)local_2f8.Data.AllocatorInstance.Data);
        bVar10 = iVar13 == 0;
        uVar20 = local_2f8.Data._8_8_;
      }
      else {
        bVar10 = iVar13 + (int)uVar20 == 1;
      }
      if ((bVar10) || (pFVar25 = pFVar25 + 0x30, pFVar26 = pFVar32, pFVar25 == pFVar29)) break;
    } while( true );
  }
  iVar13 = *(int *)(pFVar26 + 0x18);
  if (iVar13 == local_4a0.Data.ArrayNum) {
    if (1 < iVar13) {
      iVar13 = FGenericPlatformStricmp::Stricmp
                         (*(wchar_t **)(pFVar26 + 0x10),
                          (wchar_t *)local_4a0.Data.AllocatorInstance.Data);
      bVar10 = iVar13 == 0;
      goto LAB_14318ea45;
    }
  }
  else {
    bVar10 = iVar13 + local_4a0.Data.ArrayNum == 1;
LAB_14318ea45:
    if ((!bVar10) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("SummarySender->Properties.FindByPredicate([&](const FAnalyticsEventAttribute& Attr) { return Attr.GetName() == SessionIdProp.Key; })->GetValue() == PrincipalProcessSessionId"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\AnalyticsET\\Private\\Tests\\AnalyticsSessionSummaryManagerTests.cpp"
                            ,0x60,L""), bVar10)) {
      pcVar4 = (code *)swi(3);
      uVar9 = (*pcVar4)();
      return (bool)uVar9;
    }
  }
  if ((pFVar3 == (FDummyAnalyticsSummarySender *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar4 = (code *)swi(3);
    uVar9 = (*pcVar4)();
    return (bool)uVar9;
  }
  pFVar25 = (pFVar3->Properties).AllocatorInstance.Data;
  pFVar29 = pFVar25 + (longlong)(pFVar3->Properties).ArrayNum * 0x30;
  uVar20 = local_308.Data._8_8_;
  pFVar26 = pFVar32;
  if (pFVar25 != pFVar29) {
    do {
      iVar13 = *(int *)(pFVar25 + 8);
      pFVar26 = pFVar25;
      if (iVar13 == (int)uVar20) {
        if (iVar13 < 2) break;
        iVar13 = FGenericPlatformStricmp::Stricmp
                           (*(wchar_t **)pFVar25,(wchar_t *)local_308.Data.AllocatorInstance.Data);
        bVar10 = iVar13 == 0;
        uVar20 = local_308.Data._8_8_;
      }
      else {
        bVar10 = iVar13 + (int)uVar20 == 1;
      }
      if ((bVar10) || (pFVar25 = pFVar25 + 0x30, pFVar26 = pFVar32, pFVar25 == pFVar29)) break;
    } while( true );
  }
  iVar13 = *(int *)(pFVar26 + 0x18);
  if (iVar13 == local_3b8.Data.ArrayNum) {
    if (iVar13 < 2) goto LAB_14318eb51;
    iVar13 = FGenericPlatformStricmp::Stricmp
                       (*(wchar_t **)(pFVar26 + 0x10),
                        (wchar_t *)local_3b8.Data.AllocatorInstance.Data);
    bVar10 = iVar13 == 0;
  }
  else {
    bVar10 = iVar13 + local_3b8.Data.ArrayNum == 1;
  }
  if ((!bVar10) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("SummarySender->Properties.FindByPredicate([&](const FAnalyticsEventAttribute& Attr) { return Attr.GetName() == SentFromProp.Key; })->GetValue() == PrincipalProcessName"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\AnalyticsET\\Private\\Tests\\AnalyticsSessionSummaryManagerTests.cpp"
                          ,0x61,L""), bVar10)) {
    pcVar4 = (code *)swi(3);
    uVar9 = (*pcVar4)();
    return (bool)uVar9;
  }
LAB_14318eb51:
  ::FString::PrintfImpl(&local_2a8,L"%d");
  if ((pFVar3 == (FDummyAnalyticsSummarySender *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar4 = (code *)swi(3);
    uVar9 = (*pcVar4)();
    return (bool)uVar9;
  }
  pFVar25 = (pFVar3->Properties).AllocatorInstance.Data;
  pFVar29 = pFVar25 + (longlong)(pFVar3->Properties).ArrayNum * 0x30;
  uVar20 = local_3a8.Data._8_8_;
  pFVar26 = pFVar32;
  if (pFVar25 != pFVar29) {
    do {
      iVar13 = *(int *)(pFVar25 + 8);
      pFVar26 = pFVar25;
      if (iVar13 == (int)uVar20) {
        if (iVar13 < 2) break;
        iVar13 = FGenericPlatformStricmp::Stricmp
                           (*(wchar_t **)pFVar25,(wchar_t *)local_3a8.Data.AllocatorInstance.Data);
        bVar10 = iVar13 == 0;
        uVar20 = local_3a8.Data._8_8_;
      }
      else {
        bVar10 = iVar13 + (int)uVar20 == 1;
      }
      if ((bVar10) || (pFVar25 = pFVar25 + 0x30, pFVar26 = pFVar32, pFVar25 == pFVar29)) break;
    } while( true );
  }
  iVar13 = *(int *)(pFVar26 + 0x18);
  if (iVar13 == local_2a8.Data.ArrayNum) {
    if (1 < iVar13) {
      iVar13 = FGenericPlatformStricmp::Stricmp
                         (*(wchar_t **)(pFVar26 + 0x10),
                          (wchar_t *)local_2a8.Data.AllocatorInstance.Data);
      bVar8 = iVar13 != 0;
    }
  }
  else {
    bVar8 = iVar13 + local_2a8.Data.ArrayNum != 1;
  }
  if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
  }
  if ((bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("SummarySender->Properties.FindByPredicate([&](const FAnalyticsEventAttribute& Attr) { return Attr.GetName() == Prop1.Key; })->GetValue() == LexToString(Prop1Value)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\AnalyticsET\\Private\\Tests\\AnalyticsSessionSummaryManagerTests.cpp"
                         ,100,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    uVar9 = (*pcVar4)();
    return (bool)uVar9;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_358.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar27);
  if (local_478.bOrphanGroupOwner != false) {
    AnalyticsSessionUtils::ReleaseOrphanGroupsOwnership
              (pFVar1,&local_478.ProcessName,local_478.CurrentProcessId);
  }
  if (local_478.SessionRootPath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_478.SessionRootPath.Data.AllocatorInstance.Data);
  }
  if (local_478.SessionId.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_478.SessionId.Data.AllocatorInstance.Data);
  }
  if (local_478.AppVersion.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_478.AppVersion.Data.AllocatorInstance.Data);
  }
  if (local_478.AppId.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_478.AppId.Data.AllocatorInstance.Data);
  }
  if (local_478.UserId.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_478.UserId.Data.AllocatorInstance.Data);
  }
  if (local_478.ProcessGroupId.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_478.ProcessGroupId.Data.AllocatorInstance.Data);
  }
  if (local_478.ProcessName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_478.ProcessName.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_478.SummarySender.SharedReferenceCount.ReferenceController);
  DestructItems<TWeakPtr<IAnalyticsPropertyStore,1>,int>
            ((TWeakPtr<IAnalyticsPropertyStore,1> *)
             local_478.WeakPropertyStores.AllocatorInstance.Data,
             local_478.WeakPropertyStores.ArrayNum);
  if ((TWeakPtr<IAnalyticsPropertyStore,1> *)local_478.WeakPropertyStores.AllocatorInstance.Data !=
      (TWeakPtr<IAnalyticsPropertyStore,1> *)0x0) {
    FMemory::Free(local_478.WeakPropertyStores.AllocatorInstance.Data);
  }
  DVar11 = FWindowsPlatformProcess::GetCurrentProcessId();
  DVar12 = FWindowsPlatformProcess::GetCurrentProcessId();
  FAnalyticsSessionSummaryManager::FAnalyticsSessionSummaryManager
            (&local_138,&local_3b8,&local_488,DVar12,DVar11,&local_378,&local_388,&local_398,
             &local_4a0,(FString *)&local_3c8);
  pTVar18 = MakeShared<FDummyAnalyticsSummarySender,1>(&local_248);
  pTVar27 = (pTVar18->SharedReferenceCount).ReferenceController;
  pFVar3 = pTVar18->Object;
  if (pTVar27 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_248.SharedReferenceCount.ReferenceController);
  }
  else {
    LOCK();
    pTVar27->SharedReferenceCount = (atomic<int>)((int)pTVar27->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_248.SharedReferenceCount.ReferenceController);
    LOCK();
    pTVar27->SharedReferenceCount = (atomic<int>)((int)pTVar27->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar27->SharedReferenceCount = (atomic<int>)((int)pTVar27->SharedReferenceCount + 1);
    UNLOCK();
  }
  FVar5.ReferenceController = local_138.SummarySender.SharedReferenceCount.ReferenceController;
  local_150 = local_138.SummarySender.Object;
  pTStack_148 = local_138.SummarySender.SharedReferenceCount.ReferenceController;
  local_138.SummarySender.Object = (IAnalyticsSessionSummarySender *)pFVar3;
  local_138.SummarySender.SharedReferenceCount.ReferenceController = pTVar27;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar5.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar27);
  FAnalyticsSessionSummaryManager::MakeStore(&local_138,&local_368,0x400);
  if ((local_368.Object == (IAnalyticsPropertyStore *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("PrincipalStore",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\AnalyticsET\\Private\\Tests\\AnalyticsSessionSummaryManagerTests.cpp"
                         ,0x74,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    uVar9 = (*pcVar4)();
    return (bool)uVar9;
  }
  (**(code **)((longlong)*local_368.Object + 0xb0))(local_368.Object,&local_3a8,0x2a);
  local_2d0 = 0x7fffffffffffffff;
  (**(code **)((longlong)*local_368.Object + 0x150))(local_368.Object,0,&local_2d0);
  local_290.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_368.Object = (IAnalyticsPropertyStore *)0x0;
  local_298 = 0;
  SharedPointerInternals::FSharedReferencer<1>::operator=
            (&local_368.SharedReferenceCount,&local_290);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_290.ReferenceController);
  FAnalyticsSessionSummaryManager::Shutdown(&local_138,true);
  if ((pFVar3 == (FDummyAnalyticsSummarySender *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    uVar9 = (*pcVar4)();
    return (bool)uVar9;
  }
  if ((pFVar3->bReportSent != false) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!PrincipalSender->bReportSent",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\AnalyticsET\\Private\\Tests\\AnalyticsSessionSummaryManagerTests.cpp"
                         ,0x81,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    uVar9 = (*pcVar4)();
    return (bool)uVar9;
  }
  FWindowsPlatformProcess::GetCurrentProcessId();
  FWindowsPlatformProcess::GetCurrentProcessId();
  ::FString::PrintfImpl(&local_238,L"%s_%d_%d_%s");
  ::operator/(&local_288,(FString *)&local_3c8,&local_238);
  if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_238.Data.AllocatorInstance.Data);
  }
  pIVar16 = IFileManager::Get();
  FVar22.Data = (FScriptContainerElement *)L"";
  if (local_288.Data.ArrayNum != 0) {
    FVar22.Data = local_288.Data.AllocatorInstance.Data;
  }
  cVar7 = (**(code **)((longlong)*pIVar16 + 0x50))(pIVar16,FVar22.Data);
  if ((cVar7 != '\0') &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IFileManager::Get().FileExists(*PropertyStorePathname)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\AnalyticsET\\Private\\Tests\\AnalyticsSessionSummaryManagerTests.cpp"
                         ,0x85,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    uVar9 = (*pcVar4)();
    return (bool)uVar9;
  }
  if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_288.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_368.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar27);
  FAnalyticsSessionSummaryManager::~FAnalyticsSessionSummaryManager(&local_138);
  if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
  }
  if (local_3a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3a8.Data.AllocatorInstance.Data);
  }
  if (local_308.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_308.Data.AllocatorInstance.Data);
  }
  if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
  }
  if (local_2e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2e8.Data.AllocatorInstance.Data);
  }
  if (local_3c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3c8.AllocatorInstance.Data);
  }
  if (local_4a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4a0.Data.AllocatorInstance.Data);
  }
  if (local_398.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_398.Data.AllocatorInstance.Data);
  }
  if (local_388.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_388.Data.AllocatorInstance.Data);
  }
  if (local_378.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_378.Data.AllocatorInstance.Data);
  }
  if (local_488.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_488.Data.AllocatorInstance.Data);
  }
  if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
  }
  if (local_3b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3b8.Data.AllocatorInstance.Data);
  }
  return true;
}

// GetBeautifiedTestName @ 14318f120

FString * __thiscall
FAnalyticsSessionSummaryManagerAutomationTest::GetBeautifiedTestName
          (FAnalyticsSessionSummaryManagerAutomationTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Analytics.SessionSummaryManager");
  return __return_storage_ptr__;
}

