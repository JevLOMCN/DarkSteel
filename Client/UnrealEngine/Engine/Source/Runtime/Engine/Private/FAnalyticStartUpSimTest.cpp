// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// GetTestFlags @ 1487e5b20

EAutomationTestFlags __thiscall FAnalyticStartUpSimTest::GetTestFlags(FAnalyticStartUpSimTest *this)

{
  return EngineFilter|RequiresUser|NonNullRHI|ClientContext;
}

// IsStressTest @ 1487e5b40

bool __thiscall FAnalyticStartUpSimTest::IsStressTest(FAnalyticStartUpSimTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1487e5b80

uint __thiscall FAnalyticStartUpSimTest::GetRequiredDeviceNum(FAnalyticStartUpSimTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 1487e5ba0

FString * __thiscall
FAnalyticStartUpSimTest::GetTestSourceFileName
          (FAnalyticStartUpSimTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\AnalyticsTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1487e5bd0

int __thiscall FAnalyticStartUpSimTest::GetTestSourceFileLine(FAnalyticStartUpSimTest *this)

{
  return 0xd;
}

// GetTests @ 1487e5dc0

/* WARNING: Removing unreachable block (ram,0x0001487e5ead) */
/* WARNING: Removing unreachable block (ram,0x0001487e5f78) */

void __thiscall
FAnalyticStartUpSimTest::GetTests
          (FAnalyticStartUpSimTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.Engine.Analytic.Record Event - Simulate Program Start");
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

// RunTest @ 1487e6510

/* WARNING: Removing unreachable block (ram,0x0001487e6b44) */
/* WARNING: Removing unreachable block (ram,0x0001487e6748) */
/* WARNING: Removing unreachable block (ram,0x0001487e6953) */
/* WARNING: Removing unreachable block (ram,0x0001487e6d37) */
/* WARNING: Removing unreachable block (ram,0x0001487e6b52) */
/* WARNING: Removing unreachable block (ram,0x0001487e6757) */
/* WARNING: Removing unreachable block (ram,0x0001487e6961) */
/* WARNING: Removing unreachable block (ram,0x0001487e6d45) */

bool __thiscall FAnalyticStartUpSimTest::RunTest(FAnalyticStartUpSimTest *this,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  FString *pFVar7;
  FString *pFVar8;
  longlong lVar9;
  wchar_t *pwVar10;
  IAnalyticsProviderET *pIVar11;
  size_t sVar12;
  wchar_t *pwVar13;
  int *this_00;
  char *pcVar14;
  char *pcVar15;
  undefined1 local_res18 [8];
  ForAnyElementType local_228;
  undefined8 local_220;
  FAnalyticsEventAttribute local_218;
  FAnalyticsEventAttribute local_1e8;
  FAnalyticsEventAttribute local_1b8;
  FAnalyticsEventAttribute local_188;
  FAutomationEvent local_158;
  FString local_120;
  FString local_110;
  FString local_100;
  FString local_f0;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60;
  FString local_50 [2];
  
  if (FEngineAnalytics::Analytics.Object == (IAnalyticsProviderET *)0x0) {
    ::FString::FString(&local_d0,
                       L"SKIPPED \'FAnalyticStartUpSimTest\' test.  EngineAnalytics are not currently available."
                      );
    _Src.Data = local_d0.Data.AllocatorInstance.Data;
    local_158.Type = Info;
    local_158.Message.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_d0.Data.ArrayNum == 0) {
      local_158.Message.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_d0.Data.ArrayNum,0,(ForAnyElementType *)&local_158.Message,
                 local_d0.Data.ArrayNum,&local_158.Message.Data.ArrayMax);
      memcpy(local_158.Message.Data.AllocatorInstance.Data,_Src.Data,
             (longlong)local_d0.Data.ArrayNum * 2);
    }
    local_158.Artifact.A = 0;
    local_158.Artifact.B = 0;
    local_158.Context.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_158.Context.Data.ArrayNum = 0;
    local_158.Context.Data.ArrayMax = 0;
    local_158.Artifact.C = 0;
    local_158.Artifact.D = 0;
    FAutomationTestExecutionInfo::AddEvent
              ((FAutomationTestExecutionInfo *)&this->field_0x30,&local_158,0,true);
    if (local_158.Context.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.Context.Data.AllocatorInstance.Data);
    }
    if (local_158.Message.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.Message.Data.AllocatorInstance.Data);
    }
    goto LAB_1487e71f5;
  }
  local_228.Data = (FScriptContainerElement *)0x0;
  local_220 = 0;
  pFVar7 = FGenericPlatformMisc::GetLoginId(&local_a0);
  pFVar8 = ::FString::FString(&local_80,L"LoginID");
  if (((pFVar8->Data).ArrayNum < 2) ||
     (iVar5 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar8->Data).AllocatorInstance.Data,L"EventName"), iVar5 == 0)
     ) {
LAB_1487e65aa:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidAttributeName(InName)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                       ,0x78,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  else {
    if ((pFVar8->Data).ArrayNum == 0) {
      pwVar10 = L"";
    }
    else {
      pwVar10 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
    }
    iVar5 = FGenericPlatformStricmp::Stricmp(pwVar10,L"DateOffset");
    if (iVar5 == 0) goto LAB_1487e65aa;
  }
  local_218.AttrName.Data.AllocatorInstance.Data = (pFVar8->Data).AllocatorInstance.Data;
  (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_218.AttrName.Data.ArrayNum = (pFVar8->Data).ArrayNum;
  local_218.AttrName.Data.ArrayMax = (pFVar8->Data).ArrayMax;
  (pFVar8->Data).ArrayNum = 0;
  (pFVar8->Data).ArrayMax = 0;
  local_218.AttrValueString.Data.AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
  (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_218.AttrValueString.Data.ArrayNum = (pFVar7->Data).ArrayNum;
  local_218.AttrValueString.Data.ArrayMax = (pFVar7->Data).ArrayMax;
  (pFVar7->Data).ArrayNum = 0;
  (pFVar7->Data).ArrayMax = 0;
  local_218.AttrValueNumber = 0.0;
  local_218.AttrValueBool = false;
  local_218.AttrType = String;
  pFVar1 = (pFVar8->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if (((local_228.Data <= &local_218) &&
      (&local_218 < (FAnalyticsEventAttribute *)(local_228.Data + (longlong)local_220._4_4_ * 0x30))
      ) && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  iVar5 = (int)local_220;
  if ((int)local_220 == local_220._4_4_) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&local_228,(int *)((longlong)&local_220 + 4));
  }
  lVar9 = (longlong)iVar5;
  local_220 = CONCAT44(local_220._4_4_,iVar5 + 1);
  *(undefined8 *)&local_228.Data[lVar9 * 0x30].field_0x0 = 0;
  *(FScriptContainerElement **)&local_228.Data[lVar9 * 0x30].field_0x0 =
       local_218.AttrName.Data.AllocatorInstance.Data;
  *(int *)(local_228.Data + lVar9 * 0x30 + 8) = local_218.AttrName.Data.ArrayNum;
  *(int *)(local_228.Data + lVar9 * 0x30 + 0xc) = local_218.AttrName.Data.ArrayMax;
  *(undefined8 *)(local_228.Data + lVar9 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(local_228.Data + lVar9 * 0x30 + 0x10) =
       local_218.AttrValueString.Data.AllocatorInstance.Data;
  *(int *)(local_228.Data + lVar9 * 0x30 + 0x18) = local_218.AttrValueString.Data.ArrayNum;
  *(int *)(local_228.Data + lVar9 * 0x30 + 0x1c) = local_218.AttrValueString.Data.ArrayMax;
  *(double *)(local_228.Data + lVar9 * 0x30 + 0x20) = local_218.AttrValueNumber;
  local_228.Data[lVar9 * 0x30 + 0x28] = (FScriptContainerElement)local_218.AttrValueBool;
  *(AttrTypeEnum *)(local_228.Data + lVar9 * 0x30 + 0x2c) = local_218.AttrType;
  local_218.AttrValueString.Data.ArrayNum = 0;
  local_218.AttrValueString.Data.ArrayMax = 0;
  local_218.AttrValueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_218.AttrName.Data.ArrayNum = 0;
  local_218.AttrName.Data.ArrayMax = 0;
  local_218.AttrName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.Data.AllocatorInstance.Data);
  }
  pFVar7 = FWindowsPlatformMisc::GetOperatingSystemId(&local_90);
  pFVar8 = ::FString::FString(&local_70,L"OSID");
  if (((pFVar8->Data).ArrayNum < 2) ||
     (iVar5 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar8->Data).AllocatorInstance.Data,L"EventName"), iVar5 == 0)
     ) {
LAB_1487e67cc:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidAttributeName(InName)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                       ,0x78,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  else {
    if ((pFVar8->Data).ArrayNum == 0) {
      pwVar10 = L"";
    }
    else {
      pwVar10 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
    }
    iVar5 = FGenericPlatformStricmp::Stricmp(pwVar10,L"DateOffset");
    if (iVar5 == 0) goto LAB_1487e67cc;
  }
  local_1e8.AttrName.Data.AllocatorInstance.Data = (pFVar8->Data).AllocatorInstance.Data;
  (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1e8.AttrName.Data.ArrayNum = (pFVar8->Data).ArrayNum;
  local_1e8.AttrName.Data.ArrayMax = (pFVar8->Data).ArrayMax;
  (pFVar8->Data).ArrayNum = 0;
  (pFVar8->Data).ArrayMax = 0;
  local_1e8.AttrValueString.Data.AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
  (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1e8.AttrValueString.Data.ArrayNum = (pFVar7->Data).ArrayNum;
  local_1e8.AttrValueString.Data.ArrayMax = (pFVar7->Data).ArrayMax;
  (pFVar7->Data).ArrayNum = 0;
  (pFVar7->Data).ArrayMax = 0;
  local_1e8.AttrValueNumber = 0.0;
  local_1e8.AttrValueBool = false;
  local_1e8.AttrType = String;
  pFVar1 = (pFVar8->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if (((local_228.Data <= &local_1e8) &&
      (&local_1e8 < (FAnalyticsEventAttribute *)(local_228.Data + (longlong)local_220._4_4_ * 0x30))
      ) && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  iVar5 = (int)local_220;
  if ((int)local_220 == local_220._4_4_) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&local_228,(int *)((longlong)&local_220 + 4));
  }
  lVar9 = (longlong)iVar5;
  local_220 = CONCAT44(local_220._4_4_,iVar5 + 1);
  *(undefined8 *)&local_228.Data[lVar9 * 0x30].field_0x0 = 0;
  *(FScriptContainerElement **)&local_228.Data[lVar9 * 0x30].field_0x0 =
       local_1e8.AttrName.Data.AllocatorInstance.Data;
  *(int *)(local_228.Data + lVar9 * 0x30 + 8) = local_1e8.AttrName.Data.ArrayNum;
  *(int *)(local_228.Data + lVar9 * 0x30 + 0xc) = local_1e8.AttrName.Data.ArrayMax;
  *(undefined8 *)(local_228.Data + lVar9 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(local_228.Data + lVar9 * 0x30 + 0x10) =
       local_1e8.AttrValueString.Data.AllocatorInstance.Data;
  *(int *)(local_228.Data + lVar9 * 0x30 + 0x18) = local_1e8.AttrValueString.Data.ArrayNum;
  *(int *)(local_228.Data + lVar9 * 0x30 + 0x1c) = local_1e8.AttrValueString.Data.ArrayMax;
  *(double *)(local_228.Data + lVar9 * 0x30 + 0x20) = local_1e8.AttrValueNumber;
  local_228.Data[lVar9 * 0x30 + 0x28] = (FScriptContainerElement)local_1e8.AttrValueBool;
  *(AttrTypeEnum *)(local_228.Data + lVar9 * 0x30 + 0x2c) = local_1e8.AttrType;
  local_1e8.AttrValueString.Data.ArrayNum = 0;
  local_1e8.AttrValueString.Data.ArrayMax = 0;
  local_1e8.AttrValueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1e8.AttrName.Data.ArrayNum = 0;
  local_1e8.AttrName.Data.ArrayMax = 0;
  local_1e8.AttrName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Data.AllocatorInstance.Data);
  }
  pFVar7 = ::FString::FString(&local_60,L"GameName");
  if (((pFVar7->Data).ArrayNum < 2) ||
     (iVar5 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar7->Data).AllocatorInstance.Data,L"EventName"), iVar5 == 0)
     ) {
LAB_1487e69c7:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidAttributeName(InName)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                       ,0x78,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  else {
    if ((pFVar7->Data).ArrayNum == 0) {
      pwVar10 = L"";
    }
    else {
      pwVar10 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
    }
    iVar5 = FGenericPlatformStricmp::Stricmp(pwVar10,L"DateOffset");
    if (iVar5 == 0) goto LAB_1487e69c7;
  }
  local_1b8.AttrName.Data.AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
  (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1b8.AttrName.Data.ArrayNum = (pFVar7->Data).ArrayNum;
  local_1b8.AttrName.Data.ArrayMax = (pFVar7->Data).ArrayMax;
  (pFVar7->Data).ArrayNum = 0;
  (pFVar7->Data).ArrayMax = 0;
  ::FString::FString(&local_1b8.AttrValueString,GInternalProjectName);
  local_1b8.AttrValueNumber = 0.0;
  local_1b8.AttrValueBool = false;
  local_1b8.AttrType = String;
  pFVar1 = (pFVar7->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if (((local_228.Data <= &local_1b8) &&
      (&local_1b8 < (FAnalyticsEventAttribute *)(local_228.Data + (longlong)local_220._4_4_ * 0x30))
      ) && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  iVar5 = (int)local_220;
  if ((int)local_220 == local_220._4_4_) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&local_228,(int *)((longlong)&local_220 + 4));
  }
  lVar9 = (longlong)iVar5;
  local_220 = CONCAT44(local_220._4_4_,iVar5 + 1);
  *(undefined8 *)&local_228.Data[lVar9 * 0x30].field_0x0 = 0;
  *(FScriptContainerElement **)&local_228.Data[lVar9 * 0x30].field_0x0 =
       local_1b8.AttrName.Data.AllocatorInstance.Data;
  *(int *)(local_228.Data + lVar9 * 0x30 + 8) = local_1b8.AttrName.Data.ArrayNum;
  *(int *)(local_228.Data + lVar9 * 0x30 + 0xc) = local_1b8.AttrName.Data.ArrayMax;
  *(undefined8 *)(local_228.Data + lVar9 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(local_228.Data + lVar9 * 0x30 + 0x10) =
       local_1b8.AttrValueString.Data.AllocatorInstance.Data;
  *(int *)(local_228.Data + lVar9 * 0x30 + 0x18) = local_1b8.AttrValueString.Data.ArrayNum;
  *(int *)(local_228.Data + lVar9 * 0x30 + 0x1c) = local_1b8.AttrValueString.Data.ArrayMax;
  *(double *)(local_228.Data + lVar9 * 0x30 + 0x20) = local_1b8.AttrValueNumber;
  local_228.Data[lVar9 * 0x30 + 0x28] = (FScriptContainerElement)local_1b8.AttrValueBool;
  *(AttrTypeEnum *)(local_228.Data + lVar9 * 0x30 + 0x2c) = local_1b8.AttrType;
  local_1b8.AttrValueString.Data.ArrayNum = 0;
  local_1b8.AttrValueString.Data.ArrayMax = 0;
  local_1b8.AttrValueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1b8.AttrName.Data.ArrayNum = 0;
  local_1b8.AttrName.Data.ArrayMax = 0;
  local_1b8.AttrName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pwVar10 = FCommandLine::Get();
  pFVar7 = ::FString::FString(local_50,L"CommandLine");
  if (((pFVar7->Data).ArrayNum < 2) ||
     (iVar5 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar7->Data).AllocatorInstance.Data,L"EventName"), iVar5 == 0)
     ) {
LAB_1487e6baf:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidAttributeName(InName)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                       ,0x78,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  else {
    if ((pFVar7->Data).ArrayNum == 0) {
      pwVar13 = L"";
    }
    else {
      pwVar13 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
    }
    iVar5 = FGenericPlatformStricmp::Stricmp(pwVar13,L"DateOffset");
    if (iVar5 == 0) goto LAB_1487e6baf;
  }
  local_188.AttrName.Data.AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
  (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_188.AttrName.Data.ArrayNum = (pFVar7->Data).ArrayNum;
  local_188.AttrName.Data.ArrayMax = (pFVar7->Data).ArrayMax;
  (pFVar7->Data).ArrayNum = 0;
  (pFVar7->Data).ArrayMax = 0;
  ::FString::FString(&local_188.AttrValueString,pwVar10);
  local_188.AttrValueNumber = 0.0;
  local_188.AttrValueBool = false;
  local_188.AttrType = String;
  pFVar1 = (pFVar7->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if (((local_228.Data <= &local_188) &&
      (&local_188 < (FAnalyticsEventAttribute *)(local_228.Data + (longlong)local_220._4_4_ * 0x30))
      ) && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  iVar5 = (int)local_220;
  if ((int)local_220 == local_220._4_4_) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&local_228,(int *)((longlong)&local_220 + 4));
  }
  lVar9 = (longlong)iVar5;
  local_220 = CONCAT44(local_220._4_4_,iVar5 + 1);
  *(undefined8 *)&local_228.Data[lVar9 * 0x30].field_0x0 = 0;
  *(FScriptContainerElement **)&local_228.Data[lVar9 * 0x30].field_0x0 =
       local_188.AttrName.Data.AllocatorInstance.Data;
  *(int *)(local_228.Data + lVar9 * 0x30 + 8) = local_188.AttrName.Data.ArrayNum;
  *(int *)(local_228.Data + lVar9 * 0x30 + 0xc) = local_188.AttrName.Data.ArrayMax;
  *(undefined8 *)(local_228.Data + lVar9 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(local_228.Data + lVar9 * 0x30 + 0x10) =
       local_188.AttrValueString.Data.AllocatorInstance.Data;
  *(int *)(local_228.Data + lVar9 * 0x30 + 0x18) = local_188.AttrValueString.Data.ArrayNum;
  *(int *)(local_228.Data + lVar9 * 0x30 + 0x1c) = local_188.AttrValueString.Data.ArrayMax;
  *(double *)(local_228.Data + lVar9 * 0x30 + 0x20) = local_188.AttrValueNumber;
  local_228.Data[lVar9 * 0x30 + 0x28] = (FScriptContainerElement)local_188.AttrValueBool;
  *(AttrTypeEnum *)(local_228.Data + lVar9 * 0x30 + 0x2c) = local_188.AttrType;
  local_188.AttrValueString.Data.ArrayNum = 0;
  local_188.AttrValueString.Data.ArrayMax = 0;
  local_188.AttrValueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_188.AttrName.Data.ArrayNum = 0;
  local_188.AttrName.Data.ArrayMax = 0;
  local_188.AttrName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pIVar11 = FEngineAnalytics::GetProvider();
  pcVar2 = *(code **)(pIVar11->_padding_ + 0x100);
  ::FString::FString(&local_c0,L"Engine.AutomationTest.Analytics.ProgramStartedEvent");
  (*pcVar2)(pIVar11,&local_c0,&local_228);
  if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.Data.AllocatorInstance.Data);
  }
  FGenericPlatformMisc::GetLoginId(&local_100);
  FWindowsPlatformMisc::GetOperatingSystemId(&local_110);
  ::FString::FString(&local_120,GInternalProjectName);
  pwVar10 = FCommandLine::Get();
  ::FString::FString(&local_b0,pwVar10);
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,L"\'LoginID\' is not expected to be empty!",
             local_100.Data.ArrayNum < 2);
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,L"\'OperatingSystemID\' is not expected to be empty!",
             local_110.Data.ArrayNum < 2);
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,L"\'GameName\' is expected.",local_120.Data.ArrayNum < 2);
  iVar5 = ::FString::Find(&local_b0,L"AnalyticsDisableCaching",0x17,IgnoreCase,FromStart,-1);
  if (iVar5 != -1) {
    ::FString::PrintfImpl(&local_e0,L"LoginID\":\"%s");
    ::FString::PrintfImpl(&local_f0,L"OSID\":\"%s");
    pcVar15 = *(char **)&this->field_0x70;
    iVar5 = *(int *)&this->field_0x78;
    this_00 = (int *)(pcVar15 + 8);
    pcVar14 = pcVar15 + (longlong)iVar5 * 0x58;
    while( true ) {
      if (*(int *)&this->field_0x78 != iVar5) {
        `TCheckedPointerIterator<FAutomationExecutionEntry_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res18);
      }
      if (pcVar15 == pcVar14) break;
      if ((*pcVar15 == '\0') &&
         (iVar6 = ::FString::Find((FString *)this_00,
                                  L"Engine.AutomationTest.Analytics.ProgramStartedEvent",0x33,
                                  IgnoreCase,FromStart,-1), iVar6 != -1)) {
        iVar6 = ::FString::Find((FString *)this_00,
                                L"Engine.AutomationTest.Analytics.ProgramStartedEvent",0x33,
                                IgnoreCase,FromStart,-1);
        FAutomationTestBase::TestTrue
                  ((FAutomationTestBase *)this,
                   L"Recorded event name is expected to be in the sent event.",iVar6 != -1);
        if (local_e0.Data.ArrayNum == 0) {
          pwVar10 = L"";
LAB_1487e6f68:
          sVar12 = wcslen(pwVar10);
          iVar6 = ::FString::Find((FString *)this_00,pwVar10,(int)sVar12,IgnoreCase,FromStart,-1);
        }
        else {
          pwVar10 = (wchar_t *)local_e0.Data.AllocatorInstance.Data;
          if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
          goto LAB_1487e6f68;
          iVar6 = -1;
        }
        FAutomationTestBase::TestTrue
                  ((FAutomationTestBase *)this,L"\'LoginID\' is expected to be in the sent event.",
                   iVar6 != -1);
        if (local_f0.Data.ArrayNum == 0) {
          pwVar10 = L"";
LAB_1487e6fc8:
          sVar12 = wcslen(pwVar10);
          iVar6 = ::FString::Find((FString *)this_00,pwVar10,(int)sVar12,IgnoreCase,FromStart,-1);
        }
        else {
          pwVar10 = (wchar_t *)local_f0.Data.AllocatorInstance.Data;
          if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
          goto LAB_1487e6fc8;
          iVar6 = -1;
        }
        FAutomationTestBase::TestTrue
                  ((FAutomationTestBase *)this,
                   L"\'OperatingSystemID\' is expected to be in the sent event.",iVar6 != -1);
        if (local_120.Data.ArrayNum == 0) {
          pwVar10 = L"";
LAB_1487e7022:
          sVar12 = wcslen(pwVar10);
          iVar6 = ::FString::Find((FString *)this_00,pwVar10,(int)sVar12,IgnoreCase,FromStart,-1);
        }
        else {
          pwVar10 = (wchar_t *)local_120.Data.AllocatorInstance.Data;
          if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
          goto LAB_1487e7022;
          iVar6 = -1;
        }
        FAutomationTestBase::TestTrue
                  ((FAutomationTestBase *)this,L"\'GameName\' is expected to be in the sent event.",
                   iVar6 != -1);
        iVar6 = ::FString::Find((FString *)this_00,L"AnalyticsDisableCaching",0x17,IgnoreCase,
                                FromStart,-1);
        FAutomationTestBase::TestTrue
                  ((FAutomationTestBase *)this,
                   L"\'CommandLine arguments\' are expected to be in the sent event.",iVar6 != -1);
      }
      pcVar15 = pcVar15 + 0x58;
      this_00 = this_00 + 0x16;
    }
    if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.Data.AllocatorInstance.Data);
    }
    if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data.AllocatorInstance.Data);
    }
  }
  if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.Data.AllocatorInstance.Data);
  }
  if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_120.Data.AllocatorInstance.Data);
  }
  if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_110.Data.AllocatorInstance.Data);
  }
  if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_100.Data.AllocatorInstance.Data);
  }
  DestructItems<FAnalyticsEventAttribute,int>
            ((FAnalyticsEventAttribute *)local_228.Data,(int)local_220);
  local_d0.Data.AllocatorInstance.Data = local_228.Data;
LAB_1487e71f5:
  if ((FAnalyticsEventAttribute *)local_d0.Data.AllocatorInstance.Data !=
      (FAnalyticsEventAttribute *)0x0) {
    FMemory::Free(local_d0.Data.AllocatorInstance.Data);
  }
  return true;
}

// GetBeautifiedTestName @ 1487e7220

FString * __thiscall
FAnalyticStartUpSimTest::GetBeautifiedTestName
          (FAnalyticStartUpSimTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "System.Engine.Analytic.Record Event - Simulate Program Start");
  return __return_storage_ptr__;
}

