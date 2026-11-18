// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// GetTestFlags @ 1487e86a0

EAutomationTestFlags __thiscall
FAnalyticsEventAttributeUnitTest::GetTestFlags(FAnalyticsEventAttributeUnitTest *this)

{
  return EngineFilter|RequiresUser|NonNullRHI|ClientContext;
}

// IsStressTest @ 1487e86b0

bool __thiscall
FAnalyticsEventAttributeUnitTest::IsStressTest(FAnalyticsEventAttributeUnitTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1487e86c0

uint __thiscall
FAnalyticsEventAttributeUnitTest::GetRequiredDeviceNum(FAnalyticsEventAttributeUnitTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 1487e8750

FString * __thiscall
FAnalyticsEventAttributeUnitTest::GetTestSourceFileName
          (FAnalyticsEventAttributeUnitTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\AnalyticsTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1487e8780

int __thiscall
FAnalyticsEventAttributeUnitTest::GetTestSourceFileLine(FAnalyticsEventAttributeUnitTest *this)

{
  return 0x4b;
}

// GetTests @ 1487e8790

/* WARNING: Removing unreachable block (ram,0x0001487e887d) */
/* WARNING: Removing unreachable block (ram,0x0001487e8948) */

void __thiscall
FAnalyticsEventAttributeUnitTest::GetTests
          (FAnalyticsEventAttributeUnitTest *this,
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
  
  ::FString::FString(&local_18,"System.Engine.Analytic.EventAttribute Struct Unit Test");
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

// RunTest @ 1487e8970

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FAnalyticsEventAttributeUnitTest::RunTest(FAnalyticsEventAttributeUnitTest *this,FString *param_1)

{
  code *pcVar1;
  ForAnyElementType FVar2;
  int *this_00;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  FString *pFVar9;
  ForAnyElementType FVar10;
  ulonglong uVar11;
  FScriptContainerElement *pFVar12;
  ForAnyElementType FVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auStackY_408 [32];
  ForAnyElementType local_3b8;
  undefined8 local_3b0;
  undefined4 local_3a8;
  undefined4 local_3a4;
  ForAnyElementType local_3a0;
  undefined8 local_398;
  ForAnyElementType local_390;
  undefined8 local_388;
  ForAnyElementType local_380;
  undefined8 local_378;
  ForAnyElementType local_370;
  undefined8 local_368;
  ForAnyElementType local_360;
  undefined8 local_358;
  ForAnyElementType local_350;
  undefined8 local_348;
  undefined1 local_340 [4];
  undefined4 local_33c;
  undefined4 local_338;
  undefined4 local_334;
  FString local_330;
  FString local_320;
  FScriptContainerElement *local_310;
  int local_308;
  undefined4 local_304;
  FString local_300;
  undefined8 local_2f0;
  undefined1 local_2e8;
  undefined4 local_2e4;
  FScriptContainerElement *local_2e0;
  int local_2d8;
  undefined4 local_2d4;
  ForAnyElementType local_2d0;
  int local_2c8;
  int local_2c4 [3];
  undefined1 local_2b8;
  undefined4 local_2b4;
  FString local_2b0;
  FString local_2a0;
  FScriptContainerElement *local_290;
  int local_288;
  undefined4 local_284;
  FString local_280;
  undefined8 local_270;
  undefined1 local_268;
  undefined4 local_264;
  FAutomationEvent local_260;
  FAnalyticsEventAttribute local_228;
  FScriptContainerElement *local_1f8;
  int local_1f0;
  undefined4 local_1ec;
  FString local_1e8;
  undefined8 local_1d8;
  undefined1 local_1d0;
  undefined4 local_1cc;
  FScriptContainerElement *local_1c8;
  int local_1c0;
  undefined4 local_1bc;
  FString local_1b8;
  undefined8 local_1a8;
  undefined1 local_1a0;
  undefined4 local_19c;
  FScriptContainerElement *local_198;
  int local_190;
  undefined4 local_18c;
  FString local_188;
  undefined8 local_178;
  undefined1 local_170;
  undefined4 local_16c;
  undefined1 local_168 [8];
  TPairInitializer<FString_const_&,int_const_&> local_160;
  FString local_150;
  FString local_140;
  FString local_130;
  FScriptContainerElement *local_120;
  FString local_118;
  FGuid local_108;
  FString *local_f8;
  undefined4 *local_f0;
  FString *local_e8;
  undefined4 *local_e0;
  FString *local_d8;
  undefined4 *local_d0;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  undefined1 local_98 [32];
  void *local_78;
  undefined4 local_70;
  uint local_6c;
  undefined4 local_68;
  undefined4 local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_408;
  bVar5 = false;
  local_33c = 0;
  local_160.Value = (int *)this;
  if (FEngineAnalytics::Analytics.Object == (IAnalyticsProviderET *)0x0) {
    ::FString::FString(&local_130,
                       L"SKIPPED \'FAnalyticsEventAttributeUnitTest\' test.  EngineAnalytics are not currently available."
                      );
    FVar2.Data = local_130.Data.AllocatorInstance.Data;
    local_260.Type = Info;
    local_260.Message.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_130.Data.ArrayNum == 0) {
      local_260.Message.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_130.Data.ArrayNum,0,(ForAnyElementType *)&local_260.Message,
                 local_130.Data.ArrayNum,&local_260.Message.Data.ArrayMax);
      memcpy(local_260.Message.Data.AllocatorInstance.Data,FVar2.Data,
             (longlong)local_130.Data.ArrayNum * 2);
    }
    local_260.Artifact.A = 0;
    local_260.Artifact.B = 0;
    local_260.Context.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_260.Context.Data.ArrayNum = 0;
    local_260.Context.Data.ArrayMax = 0;
    local_260.Artifact.C = 0;
    local_260.Artifact.D = 0;
    FAutomationTestExecutionInfo::AddEvent
              ((FAutomationTestExecutionInfo *)&this->field_0x30,&local_260,0,true);
    if (local_260.Context.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_260.Context.Data.AllocatorInstance.Data);
    }
    if (local_260.Message.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_260.Message.Data.AllocatorInstance.Data);
    }
    if (local_130.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      return true;
    }
    FMemory::Free(local_130.Data.AllocatorInstance.Data);
    return true;
  }
  ::FString::FString(&local_2b0,"Test of");
  iVar8 = local_2b0.Data.ArrayNum;
  FVar2.Data = local_2b0.Data.AllocatorInstance.Data;
  lVar14 = (longlong)local_2b0.Data.ArrayNum;
  local_2b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2b0.Data.ArrayNum = 0;
  local_2b0.Data.ArrayMax = 0;
  ::FString::FString(&local_2a0,
                     "FAnalyticsEventAttribute \'(const FString InName, const FString& InVaue)\'");
  iVar7 = local_2a0.Data.ArrayNum;
  FVar13.Data = local_2a0.Data.AllocatorInstance.Data;
  local_2a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  lVar15 = (longlong)local_2a0.Data.ArrayNum;
  local_120 = FVar13.Data;
  local_2a0.Data.ArrayNum = 0;
  local_2a0.Data.ArrayMax = 0;
  local_380.Data = (FScriptContainerElement *)0x0;
  local_378 = CONCAT44(local_378._4_4_,iVar8);
  if (iVar8 == 0) {
    local_378 = 0;
    local_378._0_4_ = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar8,0,&local_380,iVar8,(int *)((longlong)&local_378 + 4));
    memcpy(local_380.Data,FVar2.Data,lVar14 * 2);
  }
  if (((int)local_378 < 2) ||
     (iVar6 = FGenericPlatformStricmp::Stricmp((wchar_t *)local_380.Data,L"EventName"), iVar6 == 0))
  {
LAB_1487e8a9f:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidAttributeName(InName)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                       ,0x78,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
  }
  else {
    FVar10.Data = (FScriptContainerElement *)L"";
    if ((int)local_378 != 0) {
      FVar10.Data = local_380.Data;
    }
    iVar6 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar10.Data,L"DateOffset");
    if (iVar6 == 0) goto LAB_1487e8a9f;
  }
  local_2e0 = local_380.Data;
  local_2d8 = (int)local_378;
  local_2d4 = local_378._4_4_;
  local_378 = 0;
  local_380.Data = (FScriptContainerElement *)0x0;
  local_2d0.Data = (FScriptContainerElement *)0x0;
  local_2c8 = iVar7;
  if (iVar7 == 0) {
    local_2c4[0] = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar7,0,&local_2d0,iVar7,local_2c4);
    memcpy(local_2d0.Data,FVar13.Data,lVar15 * 2);
  }
  local_2b8 = 0;
  local_2c4[1] = 0;
  local_2c4[2] = 0;
  local_2b4 = 0;
  if (local_380.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_380.Data);
  }
  pFVar12 = (FScriptContainerElement *)L"";
  if (local_2d8 != 0) {
    pFVar12 = local_2e0;
  }
  iVar7 = FGenericPlatformStricmp::Stricmp((wchar_t *)pFVar12,L"Test of");
  if (iVar7 == 0) {
    FVar13.Data = (FScriptContainerElement *)L"";
    if (local_2c8 != 0) {
      FVar13.Data = local_2d0.Data;
    }
    iVar7 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)FVar13.Data,
                       "FAnalyticsEventAttribute \'(const FString InName, const FString& InVaue)\'")
    ;
    if (iVar7 != 0) goto LAB_1487e8b8d;
    bVar3 = true;
  }
  else {
LAB_1487e8b8d:
    bVar3 = false;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,
             L"Expected to take in these type of values \'(const FString&, const FString&)\'",bVar3)
  ;
  local_370.Data = (FScriptContainerElement *)0x0;
  local_368 = CONCAT44(local_368._4_4_,iVar8);
  if (iVar8 == 0) {
    local_368 = 0;
    local_368._0_4_ = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar8,0,&local_370,iVar8,(int *)((longlong)&local_368 + 4));
    memcpy(local_370.Data,FVar2.Data,lVar14 * 2);
  }
  if (((int)local_368 < 2) ||
     (iVar7 = FGenericPlatformStricmp::Stricmp((wchar_t *)local_370.Data,L"EventName"), iVar7 == 0))
  {
LAB_1487e8c26:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidAttributeName(InName)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                       ,0x78,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
  }
  else {
    FVar13.Data = (FScriptContainerElement *)L"";
    if ((int)local_368 != 0) {
      FVar13.Data = local_370.Data;
    }
    iVar7 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar13.Data,L"DateOffset");
    if (iVar7 == 0) goto LAB_1487e8c26;
  }
  local_198 = local_370.Data;
  local_190 = (int)local_368;
  local_18c = local_368._4_4_;
  local_368 = 0;
  local_370.Data = (FScriptContainerElement *)0x0;
  ::FString::FString(&local_188,
                     L"FAnalyticsEventAttribute \'(const FString InName, const TCHAR* InValue)\'");
  local_178 = 0;
  local_170 = 0;
  local_16c = 0;
  if (local_370.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_370.Data);
  }
  pFVar12 = (FScriptContainerElement *)L"";
  if (local_190 != 0) {
    pFVar12 = local_198;
  }
  iVar7 = FGenericPlatformStricmp::Stricmp((wchar_t *)pFVar12,L"Test of");
  if (iVar7 == 0) {
    FVar13.Data = (FScriptContainerElement *)L"";
    if (local_188.Data.ArrayNum != 0) {
      FVar13.Data = local_188.Data.AllocatorInstance.Data;
    }
    iVar7 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)FVar13.Data,
                       L"FAnalyticsEventAttribute \'(const FString InName, const TCHAR* InValue)\'")
    ;
    if (iVar7 != 0) goto LAB_1487e8cea;
    bVar3 = true;
  }
  else {
LAB_1487e8cea:
    bVar3 = false;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,
             L"Expected to take in these type of values \'(const FString&, const TCHAR*\')",bVar3);
  local_360.Data = (FScriptContainerElement *)0x0;
  local_358 = CONCAT44(local_358._4_4_,iVar8);
  if (iVar8 == 0) {
    local_358 = 0;
    local_358._0_4_ = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar8,0,&local_360,iVar8,(int *)((longlong)&local_358 + 4));
    memcpy(local_360.Data,FVar2.Data,lVar14 * 2);
  }
  if (((int)local_358 < 2) ||
     (iVar7 = FGenericPlatformStricmp::Stricmp((wchar_t *)local_360.Data,L"EventName"), iVar7 == 0))
  {
LAB_1487e8d83:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidAttributeName(InName)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                       ,0x78,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
  }
  else {
    FVar13.Data = (FScriptContainerElement *)L"";
    if ((int)local_358 != 0) {
      FVar13.Data = local_360.Data;
    }
    iVar7 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar13.Data,L"DateOffset");
    if (iVar7 == 0) goto LAB_1487e8d83;
  }
  local_1c8 = local_360.Data;
  local_1c0 = (int)local_358;
  local_1bc = local_358._4_4_;
  local_358 = 0;
  local_360.Data = (FScriptContainerElement *)0x0;
  ::FString::FString(&local_1b8,L"true");
  local_1a8 = 0;
  local_1a0 = 0;
  local_19c = 4;
  if (local_360.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_360.Data);
  }
  pFVar12 = (FScriptContainerElement *)L"";
  if (local_1c0 != 0) {
    pFVar12 = local_1c8;
  }
  iVar7 = FGenericPlatformStricmp::Stricmp((wchar_t *)pFVar12,L"Test of");
  if (iVar7 == 0) {
    ::FString::FString(&local_118,L"true");
    if (local_1b8.Data.ArrayNum == local_118.Data.ArrayNum) {
      if (1 < local_1b8.Data.ArrayNum) {
        iVar7 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)local_1b8.Data.AllocatorInstance.Data,
                           (wchar_t *)local_118.Data.AllocatorInstance.Data);
        bVar3 = iVar7 == 0;
        goto LAB_1487e8e69;
      }
    }
    else {
      bVar3 = local_1b8.Data.ArrayNum + local_118.Data.ArrayNum == 1;
LAB_1487e8e69:
      bVar5 = true;
      if (!bVar3) goto LAB_1487e8e7f;
    }
    bVar3 = true;
    bVar5 = true;
  }
  else {
LAB_1487e8e7f:
    bVar3 = false;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,
             L"Expected to take in these types of values \'(const FString&, bool)\'",bVar3);
  if ((bVar5) && (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_118.Data.AllocatorInstance.Data);
  }
  bVar5 = false;
  FGuid::NewGuid(&local_108);
  local_350.Data = (FScriptContainerElement *)0x0;
  local_348 = CONCAT44(local_348._4_4_,iVar8);
  if (iVar8 == 0) {
    local_348 = 0;
    local_348._0_4_ = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar8,0,&local_350,iVar8,(int *)((longlong)&local_348 + 4));
    memcpy(local_350.Data,FVar2.Data,lVar14 * 2);
  }
  if (((int)local_348 < 2) ||
     (iVar7 = FGenericPlatformStricmp::Stricmp((wchar_t *)local_350.Data,L"EventName"), iVar7 == 0))
  {
LAB_1487e8f3e:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidAttributeName(InName)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                       ,0x78,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
  }
  else {
    FVar13.Data = (FScriptContainerElement *)L"";
    if ((int)local_348 != 0) {
      FVar13.Data = local_350.Data;
    }
    iVar7 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar13.Data,L"DateOffset");
    if (iVar7 == 0) goto LAB_1487e8f3e;
  }
  local_290 = local_350.Data;
  local_288 = (int)local_348;
  local_284 = local_348._4_4_;
  local_348 = 0;
  local_350.Data = (FScriptContainerElement *)0x0;
  local_280.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_280.Data.ArrayNum = 0;
  local_280.Data.ArrayMax = 0;
  FGuid::AppendString(&local_108,&local_280,Digits);
  local_270 = 0;
  local_268 = 0;
  local_264 = 0;
  if (local_350.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_350.Data);
  }
  pFVar12 = (FScriptContainerElement *)L"";
  if (local_288 != 0) {
    pFVar12 = local_290;
  }
  iVar7 = FGenericPlatformStricmp::Stricmp((wchar_t *)pFVar12,L"Test of");
  if (iVar7 == 0) {
    local_320.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_320.Data.ArrayNum = 0;
    local_320.Data.ArrayMax = 0;
    bVar5 = true;
    FGuid::AppendString(&local_108,&local_320,Digits);
    if (local_280.Data.ArrayNum == local_320.Data.ArrayNum) {
      if (1 < local_280.Data.ArrayNum) {
        iVar7 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)local_280.Data.AllocatorInstance.Data,
                           (wchar_t *)local_320.Data.AllocatorInstance.Data);
        bVar3 = iVar7 == 0;
        goto LAB_1487e903e;
      }
    }
    else {
      bVar3 = local_280.Data.ArrayNum + local_320.Data.ArrayNum == 1;
LAB_1487e903e:
      if (!bVar3) goto LAB_1487e904a;
    }
    bVar3 = true;
  }
  else {
LAB_1487e904a:
    bVar3 = false;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,
             L"Expected to take in these type of values \'(const FString&, FGuid)\'",bVar3);
  if ((bVar5) && (local_320.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_320.Data.AllocatorInstance.Data);
  }
  bVar5 = false;
  local_3a0.Data = (FScriptContainerElement *)0x0;
  local_398 = CONCAT44(local_398._4_4_,iVar8);
  if (iVar8 == 0) {
    local_398 = 0;
    local_398._0_4_ = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar8,0,&local_3a0,iVar8,(int *)((longlong)&local_398 + 4));
    memcpy(local_3a0.Data,FVar2.Data,lVar14 * 2);
  }
  if (((int)local_398 < 2) ||
     (iVar7 = FGenericPlatformStricmp::Stricmp((wchar_t *)local_3a0.Data,L"EventName"), iVar7 == 0))
  {
LAB_1487e9104:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidAttributeName(InName)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                       ,0x78,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
  }
  else {
    FVar13.Data = (FScriptContainerElement *)L"";
    if ((int)local_398 != 0) {
      FVar13.Data = local_3a0.Data;
    }
    iVar7 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar13.Data,L"DateOffset");
    if (iVar7 == 0) goto LAB_1487e9104;
  }
  local_1f8 = local_3a0.Data;
  local_1f0 = (int)local_398;
  local_1ec = local_398._4_4_;
  local_398 = 0;
  local_3a0.Data = (FScriptContainerElement *)0x0;
  ::FString::PrintfImpl(&local_1e8,L"%d");
  local_1d8 = 0;
  local_1d0 = 0;
  local_1cc = 4;
  if (local_3a0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3a0.Data);
  }
  pFVar12 = (FScriptContainerElement *)L"";
  if (local_1f0 != 0) {
    pFVar12 = local_1f8;
  }
  iVar7 = FGenericPlatformStricmp::Stricmp((wchar_t *)pFVar12,L"Test of");
  if (iVar7 == 0) {
    bVar5 = true;
    ::FString::PrintfImpl(&local_150,L"%d");
    if (local_1e8.Data.ArrayNum == local_150.Data.ArrayNum) {
      if (1 < local_1e8.Data.ArrayNum) {
        iVar7 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)local_1e8.Data.AllocatorInstance.Data,
                           (wchar_t *)local_150.Data.AllocatorInstance.Data);
        bVar3 = iVar7 == 0;
        goto LAB_1487e9205;
      }
    }
    else {
      bVar3 = local_1e8.Data.ArrayNum + local_150.Data.ArrayNum == 1;
LAB_1487e9205:
      if (!bVar3) goto LAB_1487e9211;
    }
    bVar3 = true;
  }
  else {
LAB_1487e9211:
    bVar3 = false;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"Expected to take in a arithmetic type (example int32)",
             bVar3);
  if ((bVar5) && (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_150.Data.AllocatorInstance.Data);
  }
  local_3b8.Data = (FScriptContainerElement *)0x0;
  local_3b0 = 0;
  iVar6 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x404,&local_3b8,(int *)((longlong)&local_3b0 + 4));
  local_3a8 = 1;
  iVar7 = iVar6 + 1;
  *(undefined4 *)(local_3b8.Data + (longlong)iVar6 * 4) = 0;
  local_3b0._0_4_ = iVar7;
  if (((local_3b8.Data <= (FScriptContainerElement *)&local_3a8) &&
      ((FScriptContainerElement *)&local_3a8 < local_3b8.Data + (longlong)local_3b0._4_4_ * 4)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return (bool)uVar4;
  }
  if ((int)local_3b0 == local_3b0._4_4_) {
    local_3b0._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x404,&local_3b8,(int *)((longlong)&local_3b0 + 4));
  }
  iVar7 = (int)local_3b0 + 1;
  local_3a4 = 2;
  *(undefined4 *)(local_3b8.Data + (longlong)(int)local_3b0 * 4) = local_3a8;
  local_3b0._0_4_ = iVar7;
  if (((local_3b8.Data <= (FScriptContainerElement *)&local_3a4) &&
      ((FScriptContainerElement *)&local_3a4 < local_3b8.Data + (longlong)local_3b0._4_4_ * 4)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return (bool)uVar4;
  }
  iVar7 = (int)local_3b0;
  if ((int)local_3b0 == local_3b0._4_4_) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&local_3b8,(int *)((longlong)&local_3b0 + 4));
  }
  local_3b0 = CONCAT44(local_3b0._4_4_,iVar7 + 1);
  *(undefined4 *)(local_3b8.Data + (longlong)iVar7 * 4) = local_3a4;
  local_390.Data = (FScriptContainerElement *)0x0;
  local_388 = CONCAT44(local_388._4_4_,iVar8);
  if (iVar8 == 0) {
    local_388 = 0;
    local_388._0_4_ = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar8,0,&local_390,iVar8,(int *)((longlong)&local_388 + 4));
    memcpy(local_390.Data,FVar2.Data,lVar14 * 2);
  }
  if (((int)local_388 < 2) ||
     (iVar7 = FGenericPlatformStricmp::Stricmp((wchar_t *)local_390.Data,L"EventName"), iVar7 == 0))
  {
LAB_1487e945c:
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidAttributeName(InName)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                       ,0x78,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
  }
  else {
    FVar13.Data = (FScriptContainerElement *)L"";
    if ((int)local_388 != 0) {
      FVar13.Data = local_390.Data;
    }
    iVar7 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar13.Data,L"DateOffset");
    if (iVar7 == 0) goto LAB_1487e945c;
  }
  iVar7 = (int)local_3b0;
  uVar11 = (ulonglong)(int)local_3b0;
  local_310 = local_390.Data;
  local_308 = (int)local_388;
  pFVar12 = local_3b8.Data + uVar11 * 4;
  local_390.Data = (FScriptContainerElement *)0x0;
  local_300.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_304 = local_388._4_4_;
  local_388 = 0;
  local_300.Data.ArrayNum = 0;
  local_300.Data.ArrayMax = 0;
  FVar13.Data = local_3b8.Data;
  while( true ) {
    if ((int)uVar11 != iVar7) {
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_340);
    }
    if (FVar13.Data == pFVar12) break;
    ::FString::PrintfImpl(&local_140,L"%d");
    iVar6 = local_140.Data.ArrayNum + -1;
    if (local_140.Data.ArrayNum == 0) {
      iVar6 = 0;
    }
    ::FString::AppendChars(&local_300,(wchar_t *)local_140.Data.AllocatorInstance.Data,iVar6);
    if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_140.Data.AllocatorInstance.Data);
    }
    ::FString::AppendChars(&local_300,L",",1);
    uVar11 = local_3b0 & 0xffffffff;
    FVar13.Data = FVar13.Data + 4;
  }
  iVar7 = local_300.Data.ArrayNum + -1;
  if (local_300.Data.ArrayNum == 0) {
    iVar7 = 0;
  }
  if (iVar7 + -1 < iVar7) {
    iVar7 = iVar7 + -1;
  }
  iVar6 = 0;
  if (0 < iVar7) {
    iVar6 = iVar7;
  }
  ::FString::RemoveAt(&local_300,iVar6,1,No);
  this_00 = local_160.Value;
  local_2f0 = 0;
  local_2e8 = 0;
  local_2e4 = 0;
  if (local_390.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_390.Data);
  }
  pFVar12 = (FScriptContainerElement *)L"";
  if (local_308 != 0) {
    pFVar12 = local_310;
  }
  iVar7 = FGenericPlatformStricmp::Stricmp((wchar_t *)pFVar12,L"Test of");
  if (iVar7 == 0) {
    FVar13.Data = (FScriptContainerElement *)L"";
    if (local_300.Data.ArrayNum != 0) {
      FVar13.Data = local_300.Data.AllocatorInstance.Data;
    }
    iVar7 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar13.Data,L"0,1,2");
    if (iVar7 != 0) goto LAB_1487e95d0;
    bVar5 = true;
  }
  else {
LAB_1487e95d0:
    bVar5 = false;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this_00,L"Expected to take in am arithmetic TArray",bVar5);
  ::FString::FString(&local_b8,"TestKey 1");
  ::FString::FString(&local_a8,"TestKey 2");
  ::FString::FString(&local_c8,"TestKey 3");
  local_f8 = &local_b8;
  local_338 = 0;
  local_f0 = &local_338;
  local_334 = 1;
  local_33c = 99;
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (void *)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_58 = (ForElementType<FSetElementId>)0x0;
  local_50 = 0;
  TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FString_const_&,int_const_&>_>
            ((TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
              *)local_98,(TPairInitializer<FString_const_&,int_const_&> *)local_168,
             (bool *)&local_f8);
  local_e8 = &local_a8;
  local_e0 = &local_334;
  TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FString_const_&,int_const_&>_>
            ((TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
              *)local_98,(TPairInitializer<FString_const_&,int_const_&> *)(local_168 + 4),
             (bool *)&local_e8);
  local_d8 = &local_c8;
  local_d0 = &local_33c;
  TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FString_const_&,int_const_&>_>
            ((TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
              *)local_98,&local_160,(bool *)&local_d8);
  local_330.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_330.Data.ArrayNum = iVar8;
  if (iVar8 == 0) {
    local_330.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar8,0,(ForAnyElementType *)&local_330,iVar8,&local_330.Data.ArrayMax);
    memcpy(local_330.Data.AllocatorInstance.Data,FVar2.Data,lVar14 * 2);
  }
  pFVar9 = FAnalyticsEventAttribute::CheckName(&local_228,&local_330);
  local_228.AttrName.Data.AllocatorInstance.Data = (pFVar9->Data).AllocatorInstance.Data;
  (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_228.AttrName.Data.ArrayNum = (pFVar9->Data).ArrayNum;
  local_228.AttrName.Data.ArrayMax = (pFVar9->Data).ArrayMax;
  (pFVar9->Data).ArrayNum = 0;
  (pFVar9->Data).ArrayMax = 0;
  AnalyticsConversionToString<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>
            (&local_228.AttrValueString,
             (TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_> *)
             local_98);
  local_228.AttrValueNumber = 0.0;
  local_228.AttrValueBool = false;
  local_228.AttrType = String;
  if (local_330.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_330.Data.AllocatorInstance.Data);
  }
  FVar13.Data = (FScriptContainerElement *)L"";
  if (local_228.AttrName.Data.ArrayNum != 0) {
    FVar13.Data = local_228.AttrName.Data.AllocatorInstance.Data;
  }
  iVar8 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar13.Data,L"Test of");
  if (iVar8 == 0) {
    FVar13.Data = (FScriptContainerElement *)L"";
    if (local_228.AttrValueString.Data.ArrayNum != 0) {
      FVar13.Data = local_228.AttrValueString.Data.AllocatorInstance.Data;
    }
    iVar8 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)FVar13.Data,L"TestKey 1:0,TestKey 2:1,TestKey 3:99");
    if (iVar8 == 0) {
      bVar5 = true;
      goto LAB_1487e9814;
    }
  }
  bVar5 = false;
LAB_1487e9814:
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this_00,L"Expected to take in a TMap ",bVar5)
  ;
  if (local_228.AttrValueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_228.AttrValueString.Data.AllocatorInstance.Data);
  }
  if (local_228.AttrName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_228.AttrName.Data.AllocatorInstance.Data);
  }
  local_50 = 0;
  if (local_58 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_58);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_98,0,local_98._8_4_);
  iVar8 = SUB84(local_98._8_8_,4);
  local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
  if (iVar8 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
  }
  local_68 = 0xffffffff;
  local_64 = 0;
  local_70 = 0;
  if (0x80 < local_6c) {
    local_6c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
  }
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_98._0_8_);
  }
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  if (local_300.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_300.Data.AllocatorInstance.Data);
  }
  if (local_310 != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_310);
  }
  if (local_3b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3b8.Data);
  }
  if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
  }
  if (local_1f8 != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1f8);
  }
  if (local_280.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_280.Data.AllocatorInstance.Data);
  }
  if (local_290 != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_290);
  }
  if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
  }
  if (local_1c8 != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8);
  }
  if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.Data.AllocatorInstance.Data);
  }
  if (local_198 != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198);
  }
  if (local_2d0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2d0.Data);
  }
  if (local_2e0 != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2e0);
  }
  if (local_120 != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_120);
  }
  if (FVar2.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar2.Data);
  }
  return true;
}

// GetBeautifiedTestName @ 1487e9b70

FString * __thiscall
FAnalyticsEventAttributeUnitTest::GetBeautifiedTestName
          (FAnalyticsEventAttributeUnitTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Engine.Analytic.EventAttribute Struct Unit Test"
                    );
  return __return_storage_ptr__;
}

