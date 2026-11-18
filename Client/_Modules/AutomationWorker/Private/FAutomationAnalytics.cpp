// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AutomationWorker
// Functions: 11

// FireEvent_AutomationTestResults @ 148bffd90

/* WARNING: Removing unreachable block (ram,0x000148c00ba9) */
/* WARNING: Removing unreachable block (ram,0x000148c00748) */
/* WARNING: Removing unreachable block (ram,0x000148c00371) */
/* WARNING: Removing unreachable block (ram,0x000148bfffae) */
/* WARNING: Removing unreachable block (ram,0x000148c0018a) */
/* WARNING: Removing unreachable block (ram,0x000148c00567) */
/* WARNING: Removing unreachable block (ram,0x000148c00977) */
/* WARNING: Removing unreachable block (ram,0x000148c00e2c) */
/* WARNING: Removing unreachable block (ram,0x000148c00bba) */
/* WARNING: Removing unreachable block (ram,0x000148c00756) */
/* WARNING: Removing unreachable block (ram,0x000148c0037f) */
/* WARNING: Removing unreachable block (ram,0x000148bfffbc) */
/* WARNING: Removing unreachable block (ram,0x000148c00198) */
/* WARNING: Removing unreachable block (ram,0x000148c00575) */
/* WARNING: Removing unreachable block (ram,0x000148c00988) */
/* WARNING: Removing unreachable block (ram,0x000148c00e3b) */

void __cdecl
FAutomationAnalytics::FireEvent_AutomationTestResults
          (FAutomationWorkerRunTestsReply *param_1,FString *param_2)

{
  EAutomationState EVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  IAnalyticsProviderET *pIVar4;
  ForAnyElementType _Src;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FString *pFVar8;
  longlong lVar9;
  FEngineVersion *this;
  wchar_t *pwVar10;
  TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> local_248;
  FAnalyticsEventAttribute local_238;
  FAnalyticsEventAttribute local_208;
  FAnalyticsEventAttribute local_1d8;
  FAnalyticsEventAttribute local_1a8;
  FAnalyticsEventAttribute local_178;
  FAnalyticsEventAttribute local_148;
  FAnalyticsEventAttribute local_118;
  FAnalyticsEventAttribute local_e8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28 [2];
  
  if (Analytics.Object == (IAnalyticsProviderET *)0x0) {
    return;
  }
  local_248.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_248.ArrayNum = 0;
  local_248.ArrayMax = 0;
  SetInitialParameters(&local_248);
  pFVar8 = GetAutomationParamName(&local_98,TestName);
  if (((pFVar8->Data).ArrayNum < 2) ||
     (iVar6 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar8->Data).AllocatorInstance.Data,L"EventName"), iVar6 == 0)
     ) {
LAB_148bffe30:
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidAttributeName(InName)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                       ,0x78,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    if ((pFVar8->Data).ArrayNum == 0) {
      pwVar10 = L"";
    }
    else {
      pwVar10 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
    }
    iVar6 = FGenericPlatformStricmp::Stricmp(pwVar10,L"DateOffset");
    if (iVar6 == 0) goto LAB_148bffe30;
  }
  local_208.AttrName.Data.AllocatorInstance.Data = (pFVar8->Data).AllocatorInstance.Data;
  (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_208.AttrName.Data.ArrayNum = (pFVar8->Data).ArrayNum;
  local_208.AttrName.Data.ArrayMax = (pFVar8->Data).ArrayMax;
  (pFVar8->Data).ArrayNum = 0;
  (pFVar8->Data).ArrayMax = 0;
  ::FString::FString(&local_208.AttrValueString,&param_1->TestName);
  local_208.AttrValueBool = false;
  local_208.AttrValueNumber = 0.0;
  local_208.AttrType = String;
  pFVar2 = (pFVar8->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  if (((local_248.AllocatorInstance.Data <= &local_208) &&
      (&local_208 <
       (FAnalyticsEventAttribute *)
       (local_248.AllocatorInstance.Data + (longlong)local_248.ArrayMax * 0x30))) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar6 = local_248.ArrayNum;
  if (local_248.ArrayNum == local_248.ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&local_248.AllocatorInstance,&local_248.ArrayMax);
  }
  lVar9 = (longlong)iVar6;
  local_248.ArrayNum = iVar6 + 1;
  *(undefined8 *)&local_248.AllocatorInstance.Data[lVar9 * 0x30].field_0x0 = 0;
  *(FScriptContainerElement **)&local_248.AllocatorInstance.Data[lVar9 * 0x30].field_0x0 =
       local_208.AttrName.Data.AllocatorInstance.Data;
  *(int *)(local_248.AllocatorInstance.Data + lVar9 * 0x30 + 8) = local_208.AttrName.Data.ArrayNum;
  *(int *)(local_248.AllocatorInstance.Data + lVar9 * 0x30 + 0xc) = local_208.AttrName.Data.ArrayMax
  ;
  *(undefined8 *)(local_248.AllocatorInstance.Data + lVar9 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(local_248.AllocatorInstance.Data + lVar9 * 0x30 + 0x10) =
       local_208.AttrValueString.Data.AllocatorInstance.Data;
  *(int *)(local_248.AllocatorInstance.Data + lVar9 * 0x30 + 0x18) =
       local_208.AttrValueString.Data.ArrayNum;
  *(int *)(local_248.AllocatorInstance.Data + lVar9 * 0x30 + 0x1c) =
       local_208.AttrValueString.Data.ArrayMax;
  *(double *)(local_248.AllocatorInstance.Data + lVar9 * 0x30 + 0x20) = local_208.AttrValueNumber;
  local_248.AllocatorInstance.Data[lVar9 * 0x30 + 0x28] =
       (FScriptContainerElement)local_208.AttrValueBool;
  *(AttrTypeEnum *)(local_248.AllocatorInstance.Data + lVar9 * 0x30 + 0x2c) = local_208.AttrType;
  local_208.AttrValueString.Data.ArrayNum = 0;
  local_208.AttrValueString.Data.ArrayMax = 0;
  local_208.AttrValueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_208.AttrName.Data.ArrayNum = 0;
  local_208.AttrName.Data.ArrayMax = 0;
  local_208.AttrName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar8 = GetAutomationParamName(&local_88,BeautifiedName);
  if (((pFVar8->Data).ArrayNum < 2) ||
     (iVar6 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar8->Data).AllocatorInstance.Data,L"EventName"), iVar6 == 0)
     ) {
LAB_148c00010:
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidAttributeName(InName)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                       ,0x78,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    if ((pFVar8->Data).ArrayNum == 0) {
      pwVar10 = L"";
    }
    else {
      pwVar10 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
    }
    iVar6 = FGenericPlatformStricmp::Stricmp(pwVar10,L"DateOffset");
    if (iVar6 == 0) goto LAB_148c00010;
  }
  local_1d8.AttrName.Data.AllocatorInstance.Data = (pFVar8->Data).AllocatorInstance.Data;
  (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1d8.AttrName.Data.ArrayNum = (pFVar8->Data).ArrayNum;
  local_1d8.AttrName.Data.ArrayMax = (pFVar8->Data).ArrayMax;
  (pFVar8->Data).ArrayNum = 0;
  (pFVar8->Data).ArrayMax = 0;
  ::FString::FString(&local_1d8.AttrValueString,param_2);
  local_1d8.AttrValueNumber = 0.0;
  local_1d8.AttrValueBool = false;
  local_1d8.AttrType = String;
  pFVar2 = (pFVar8->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  if (((local_248.AllocatorInstance.Data <= &local_1d8) &&
      (&local_1d8 <
       (FAnalyticsEventAttribute *)
       (local_248.AllocatorInstance.Data + (longlong)local_248.ArrayMax * 0x30))) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar6 = local_248.ArrayNum;
  if (local_248.ArrayNum == local_248.ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&local_248.AllocatorInstance,&local_248.ArrayMax);
  }
  lVar9 = (longlong)iVar6;
  local_248.ArrayNum = iVar6 + 1;
  *(undefined8 *)&local_248.AllocatorInstance.Data[lVar9 * 0x30].field_0x0 = 0;
  *(FScriptContainerElement **)&local_248.AllocatorInstance.Data[lVar9 * 0x30].field_0x0 =
       local_1d8.AttrName.Data.AllocatorInstance.Data;
  *(int *)(local_248.AllocatorInstance.Data + lVar9 * 0x30 + 8) = local_1d8.AttrName.Data.ArrayNum;
  *(int *)(local_248.AllocatorInstance.Data + lVar9 * 0x30 + 0xc) = local_1d8.AttrName.Data.ArrayMax
  ;
  *(undefined8 *)(local_248.AllocatorInstance.Data + lVar9 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(local_248.AllocatorInstance.Data + lVar9 * 0x30 + 0x10) =
       local_1d8.AttrValueString.Data.AllocatorInstance.Data;
  *(int *)(local_248.AllocatorInstance.Data + lVar9 * 0x30 + 0x18) =
       local_1d8.AttrValueString.Data.ArrayNum;
  *(int *)(local_248.AllocatorInstance.Data + lVar9 * 0x30 + 0x1c) =
       local_1d8.AttrValueString.Data.ArrayMax;
  *(double *)(local_248.AllocatorInstance.Data + lVar9 * 0x30 + 0x20) = local_1d8.AttrValueNumber;
  local_248.AllocatorInstance.Data[lVar9 * 0x30 + 0x28] =
       (FScriptContainerElement)local_1d8.AttrValueBool;
  *(AttrTypeEnum *)(local_248.AllocatorInstance.Data + lVar9 * 0x30 + 0x2c) = local_1d8.AttrType;
  local_1d8.AttrValueString.Data.ArrayNum = 0;
  local_1d8.AttrValueString.Data.ArrayMax = 0;
  local_1d8.AttrValueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1d8.AttrName.Data.ArrayNum = 0;
  local_1d8.AttrName.Data.ArrayMax = 0;
  local_1d8.AttrName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar8 = GetAutomationParamName(&local_78,ExecutionCount);
  if (((pFVar8->Data).ArrayNum < 2) ||
     (iVar6 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar8->Data).AllocatorInstance.Data,L"EventName"), iVar6 == 0)
     ) {
LAB_148c001ec:
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidAttributeName(InName)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                       ,0x78,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    if ((pFVar8->Data).ArrayNum == 0) {
      pwVar10 = L"";
    }
    else {
      pwVar10 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
    }
    iVar6 = FGenericPlatformStricmp::Stricmp(pwVar10,L"DateOffset");
    if (iVar6 == 0) goto LAB_148c001ec;
  }
  local_1a8.AttrName.Data.AllocatorInstance.Data = (pFVar8->Data).AllocatorInstance.Data;
  (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1a8.AttrName.Data.ArrayNum = (pFVar8->Data).ArrayNum;
  local_1a8.AttrName.Data.ArrayMax = (pFVar8->Data).ArrayMax;
  (pFVar8->Data).ArrayNum = 0;
  (pFVar8->Data).ArrayMax = 0;
  ::FString::PrintfImpl(&local_1a8.AttrValueString,L"%u");
  local_1a8.AttrValueNumber = 0.0;
  local_1a8.AttrValueBool = false;
  local_1a8.AttrType = JsonFragment;
  pFVar2 = (pFVar8->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  if (((local_248.AllocatorInstance.Data <= &local_1a8) &&
      (&local_1a8 <
       (FAnalyticsEventAttribute *)
       (local_248.AllocatorInstance.Data + (longlong)local_248.ArrayMax * 0x30))) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar6 = local_248.ArrayNum;
  if (local_248.ArrayNum == local_248.ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&local_248.AllocatorInstance,&local_248.ArrayMax);
  }
  lVar9 = (longlong)iVar6;
  local_248.ArrayNum = iVar6 + 1;
  *(undefined8 *)&local_248.AllocatorInstance.Data[lVar9 * 0x30].field_0x0 = 0;
  *(FScriptContainerElement **)&local_248.AllocatorInstance.Data[lVar9 * 0x30].field_0x0 =
       local_1a8.AttrName.Data.AllocatorInstance.Data;
  *(int *)(local_248.AllocatorInstance.Data + lVar9 * 0x30 + 8) = local_1a8.AttrName.Data.ArrayNum;
  *(int *)(local_248.AllocatorInstance.Data + lVar9 * 0x30 + 0xc) = local_1a8.AttrName.Data.ArrayMax
  ;
  *(undefined8 *)(local_248.AllocatorInstance.Data + lVar9 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(local_248.AllocatorInstance.Data + lVar9 * 0x30 + 0x10) =
       local_1a8.AttrValueString.Data.AllocatorInstance.Data;
  *(int *)(local_248.AllocatorInstance.Data + lVar9 * 0x30 + 0x18) =
       local_1a8.AttrValueString.Data.ArrayNum;
  *(int *)(local_248.AllocatorInstance.Data + lVar9 * 0x30 + 0x1c) =
       local_1a8.AttrValueString.Data.ArrayMax;
  *(double *)(local_248.AllocatorInstance.Data + lVar9 * 0x30 + 0x20) = local_1a8.AttrValueNumber;
  local_248.AllocatorInstance.Data[lVar9 * 0x30 + 0x28] =
       (FScriptContainerElement)local_1a8.AttrValueBool;
  *(AttrTypeEnum *)(local_248.AllocatorInstance.Data + lVar9 * 0x30 + 0x2c) = local_1a8.AttrType;
  local_1a8.AttrValueString.Data.ArrayNum = 0;
  local_1a8.AttrValueString.Data.ArrayMax = 0;
  local_1a8.AttrValueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1a8.AttrName.Data.ArrayNum = 0;
  local_1a8.AttrName.Data.ArrayMax = 0;
  local_1a8.AttrName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  EVar1 = param_1->State;
  pFVar8 = GetAutomationParamName(&local_68,IsSuccess);
  if (((pFVar8->Data).ArrayNum < 2) ||
     (iVar6 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar8->Data).AllocatorInstance.Data,L"EventName"), iVar6 == 0)
     ) {
LAB_148c003d7:
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidAttributeName(InName)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                       ,0x78,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    if ((pFVar8->Data).ArrayNum == 0) {
      pwVar10 = L"";
    }
    else {
      pwVar10 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
    }
    iVar6 = FGenericPlatformStricmp::Stricmp(pwVar10,L"DateOffset");
    if (iVar6 == 0) goto LAB_148c003d7;
  }
  local_178.AttrName.Data.AllocatorInstance.Data = (pFVar8->Data).AllocatorInstance.Data;
  pwVar10 = L"true";
  (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_178.AttrName.Data.ArrayNum = (pFVar8->Data).ArrayNum;
  local_178.AttrName.Data.ArrayMax = (pFVar8->Data).ArrayMax;
  if (EVar1 != Success) {
    pwVar10 = L"false";
  }
  (pFVar8->Data).ArrayNum = 0;
  (pFVar8->Data).ArrayMax = 0;
  ::FString::FString(&local_178.AttrValueString,pwVar10);
  local_178.AttrValueNumber = 0.0;
  local_178.AttrValueBool = false;
  local_178.AttrType = JsonFragment;
  pFVar2 = (pFVar8->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  if (((local_248.AllocatorInstance.Data <= &local_178) &&
      (&local_178 <
       (FAnalyticsEventAttribute *)
       (local_248.AllocatorInstance.Data + (longlong)local_248.ArrayMax * 0x30))) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar6 = local_248.ArrayNum;
  if (local_248.ArrayNum == local_248.ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&local_248.AllocatorInstance,&local_248.ArrayMax);
  }
  lVar9 = (longlong)iVar6;
  local_248.ArrayNum = iVar6 + 1;
  *(undefined8 *)&local_248.AllocatorInstance.Data[lVar9 * 0x30].field_0x0 = 0;
  *(FScriptContainerElement **)&local_248.AllocatorInstance.Data[lVar9 * 0x30].field_0x0 =
       local_178.AttrName.Data.AllocatorInstance.Data;
  *(int *)(local_248.AllocatorInstance.Data + lVar9 * 0x30 + 8) = local_178.AttrName.Data.ArrayNum;
  *(int *)(local_248.AllocatorInstance.Data + lVar9 * 0x30 + 0xc) = local_178.AttrName.Data.ArrayMax
  ;
  *(undefined8 *)(local_248.AllocatorInstance.Data + lVar9 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(local_248.AllocatorInstance.Data + lVar9 * 0x30 + 0x10) =
       local_178.AttrValueString.Data.AllocatorInstance.Data;
  *(int *)(local_248.AllocatorInstance.Data + lVar9 * 0x30 + 0x18) =
       local_178.AttrValueString.Data.ArrayNum;
  *(int *)(local_248.AllocatorInstance.Data + lVar9 * 0x30 + 0x1c) =
       local_178.AttrValueString.Data.ArrayMax;
  *(double *)(local_248.AllocatorInstance.Data + lVar9 * 0x30 + 0x20) = local_178.AttrValueNumber;
  local_248.AllocatorInstance.Data[lVar9 * 0x30 + 0x28] =
       (FScriptContainerElement)local_178.AttrValueBool;
  *(AttrTypeEnum *)(local_248.AllocatorInstance.Data + lVar9 * 0x30 + 0x2c) = local_178.AttrType;
  local_178.AttrValueString.Data.ArrayNum = 0;
  local_178.AttrValueString.Data.ArrayMax = 0;
  local_178.AttrValueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_178.AttrName.Data.ArrayNum = 0;
  local_178.AttrName.Data.ArrayMax = 0;
  local_178.AttrName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar8 = GetAutomationParamName(&local_58,Duration);
  if (((pFVar8->Data).ArrayNum < 2) ||
     (iVar6 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar8->Data).AllocatorInstance.Data,L"EventName"), iVar6 == 0)
     ) {
LAB_148c005c9:
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidAttributeName(InName)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                       ,0x78,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    if ((pFVar8->Data).ArrayNum == 0) {
      pwVar10 = L"";
    }
    else {
      pwVar10 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
    }
    iVar6 = FGenericPlatformStricmp::Stricmp(pwVar10,L"DateOffset");
    if (iVar6 == 0) goto LAB_148c005c9;
  }
  local_148.AttrName.Data.AllocatorInstance.Data = (pFVar8->Data).AllocatorInstance.Data;
  (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_148.AttrName.Data.ArrayNum = (pFVar8->Data).ArrayNum;
  local_148.AttrName.Data.ArrayMax = (pFVar8->Data).ArrayMax;
  (pFVar8->Data).ArrayNum = 0;
  (pFVar8->Data).ArrayMax = 0;
  AnalyticsConversionToString(&local_148.AttrValueString,param_1->Duration);
  local_148.AttrValueNumber = 0.0;
  local_148.AttrValueBool = false;
  local_148.AttrType = JsonFragment;
  pFVar2 = (pFVar8->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  if (((local_248.AllocatorInstance.Data <= &local_148) &&
      (&local_148 <
       (FAnalyticsEventAttribute *)
       (local_248.AllocatorInstance.Data + (longlong)local_248.ArrayMax * 0x30))) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar6 = local_248.ArrayNum;
  if (local_248.ArrayNum == local_248.ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&local_248.AllocatorInstance,&local_248.ArrayMax);
  }
  lVar9 = (longlong)iVar6;
  local_248.ArrayNum = iVar6 + 1;
  *(undefined8 *)&local_248.AllocatorInstance.Data[lVar9 * 0x30].field_0x0 = 0;
  *(FScriptContainerElement **)&local_248.AllocatorInstance.Data[lVar9 * 0x30].field_0x0 =
       local_148.AttrName.Data.AllocatorInstance.Data;
  *(int *)(local_248.AllocatorInstance.Data + lVar9 * 0x30 + 8) = local_148.AttrName.Data.ArrayNum;
  *(int *)(local_248.AllocatorInstance.Data + lVar9 * 0x30 + 0xc) = local_148.AttrName.Data.ArrayMax
  ;
  *(undefined8 *)(local_248.AllocatorInstance.Data + lVar9 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(local_248.AllocatorInstance.Data + lVar9 * 0x30 + 0x10) =
       local_148.AttrValueString.Data.AllocatorInstance.Data;
  *(int *)(local_248.AllocatorInstance.Data + lVar9 * 0x30 + 0x18) =
       local_148.AttrValueString.Data.ArrayNum;
  *(int *)(local_248.AllocatorInstance.Data + lVar9 * 0x30 + 0x1c) =
       local_148.AttrValueString.Data.ArrayMax;
  *(double *)(local_248.AllocatorInstance.Data + lVar9 * 0x30 + 0x20) = local_148.AttrValueNumber;
  local_248.AllocatorInstance.Data[lVar9 * 0x30 + 0x28] =
       (FScriptContainerElement)local_148.AttrValueBool;
  *(AttrTypeEnum *)(local_248.AllocatorInstance.Data + lVar9 * 0x30 + 0x2c) = local_148.AttrType;
  local_148.AttrValueString.Data.ArrayNum = 0;
  local_148.AttrValueString.Data.ArrayMax = 0;
  local_148.AttrValueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_148.AttrName.Data.ArrayNum = 0;
  local_148.AttrName.Data.ArrayMax = 0;
  local_148.AttrName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar8 = GetAutomationParamName(&local_48,ErrorCount);
  if (((pFVar8->Data).ArrayNum < 2) ||
     (iVar6 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar8->Data).AllocatorInstance.Data,L"EventName"), iVar6 == 0)
     ) {
LAB_148c007aa:
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidAttributeName(InName)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                       ,0x78,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    if ((pFVar8->Data).ArrayNum == 0) {
      pwVar10 = L"";
    }
    else {
      pwVar10 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
    }
    iVar6 = FGenericPlatformStricmp::Stricmp(pwVar10,L"DateOffset");
    if (iVar6 == 0) goto LAB_148c007aa;
  }
  local_118.AttrName.Data.AllocatorInstance.Data = (pFVar8->Data).AllocatorInstance.Data;
  (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.AttrName.Data.ArrayNum = (pFVar8->Data).ArrayNum;
  local_118.AttrName.Data.ArrayMax = (pFVar8->Data).ArrayMax;
  (pFVar8->Data).ArrayNum = 0;
  (pFVar8->Data).ArrayMax = 0;
  ::FString::PrintfImpl(&local_118.AttrValueString,L"%d");
  local_118.AttrValueNumber = 0.0;
  local_118.AttrValueBool = false;
  local_118.AttrType = JsonFragment;
  pFVar2 = (pFVar8->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  if (((local_248.AllocatorInstance.Data <= &local_118) &&
      (&local_118 <
       (FAnalyticsEventAttribute *)
       (local_248.AllocatorInstance.Data + (longlong)local_248.ArrayMax * 0x30))) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar6 = local_248.ArrayNum;
  if (local_248.ArrayNum == local_248.ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&local_248.AllocatorInstance,&local_248.ArrayMax);
  }
  lVar9 = (longlong)iVar6;
  local_248.ArrayNum = iVar6 + 1;
  *(undefined8 *)&local_248.AllocatorInstance.Data[lVar9 * 0x30].field_0x0 = 0;
  *(FScriptContainerElement **)&local_248.AllocatorInstance.Data[lVar9 * 0x30].field_0x0 =
       local_118.AttrName.Data.AllocatorInstance.Data;
  *(int *)(local_248.AllocatorInstance.Data + lVar9 * 0x30 + 8) = local_118.AttrName.Data.ArrayNum;
  *(int *)(local_248.AllocatorInstance.Data + lVar9 * 0x30 + 0xc) = local_118.AttrName.Data.ArrayMax
  ;
  *(undefined8 *)(local_248.AllocatorInstance.Data + lVar9 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(local_248.AllocatorInstance.Data + lVar9 * 0x30 + 0x10) =
       local_118.AttrValueString.Data.AllocatorInstance.Data;
  *(int *)(local_248.AllocatorInstance.Data + lVar9 * 0x30 + 0x18) =
       local_118.AttrValueString.Data.ArrayNum;
  *(int *)(local_248.AllocatorInstance.Data + lVar9 * 0x30 + 0x1c) =
       local_118.AttrValueString.Data.ArrayMax;
  *(double *)(local_248.AllocatorInstance.Data + lVar9 * 0x30 + 0x20) = local_118.AttrValueNumber;
  local_248.AllocatorInstance.Data[lVar9 * 0x30 + 0x28] =
       (FScriptContainerElement)local_118.AttrValueBool;
  *(AttrTypeEnum *)(local_248.AllocatorInstance.Data + lVar9 * 0x30 + 0x2c) = local_118.AttrType;
  local_118.AttrValueString.Data.ArrayNum = 0;
  local_118.AttrValueString.Data.ArrayMax = 0;
  local_118.AttrValueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.AttrName.Data.ArrayNum = 0;
  local_118.AttrName.Data.ArrayMax = 0;
  local_118.AttrName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar8 = GetAutomationParamName(&local_38,WarningCount);
  if (((pFVar8->Data).ArrayNum < 2) ||
     (iVar6 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar8->Data).AllocatorInstance.Data,L"EventName"), iVar6 == 0)
     ) {
LAB_148c009dc:
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidAttributeName(InName)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                       ,0x78,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    if ((pFVar8->Data).ArrayNum == 0) {
      pwVar10 = L"";
    }
    else {
      pwVar10 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
    }
    iVar6 = FGenericPlatformStricmp::Stricmp(pwVar10,L"DateOffset");
    if (iVar6 == 0) goto LAB_148c009dc;
  }
  local_e8.AttrName.Data.AllocatorInstance.Data = (pFVar8->Data).AllocatorInstance.Data;
  (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.AttrName.Data.ArrayNum = (pFVar8->Data).ArrayNum;
  local_e8.AttrName.Data.ArrayMax = (pFVar8->Data).ArrayMax;
  (pFVar8->Data).ArrayNum = 0;
  (pFVar8->Data).ArrayMax = 0;
  ::FString::PrintfImpl(&local_e8.AttrValueString,L"%d");
  local_e8.AttrValueNumber = 0.0;
  local_e8.AttrValueBool = false;
  local_e8.AttrType = JsonFragment;
  pFVar2 = (pFVar8->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  if (((local_248.AllocatorInstance.Data <= &local_e8) &&
      (&local_e8 <
       (FAnalyticsEventAttribute *)
       (local_248.AllocatorInstance.Data + (longlong)local_248.ArrayMax * 0x30))) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar6 = local_248.ArrayNum;
  if (local_248.ArrayNum == local_248.ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&local_248.AllocatorInstance,&local_248.ArrayMax);
  }
  lVar9 = (longlong)iVar6;
  local_248.ArrayNum = iVar6 + 1;
  *(undefined8 *)&local_248.AllocatorInstance.Data[lVar9 * 0x30].field_0x0 = 0;
  *(FScriptContainerElement **)&local_248.AllocatorInstance.Data[lVar9 * 0x30].field_0x0 =
       local_e8.AttrName.Data.AllocatorInstance.Data;
  *(int *)(local_248.AllocatorInstance.Data + lVar9 * 0x30 + 8) = local_e8.AttrName.Data.ArrayNum;
  *(int *)(local_248.AllocatorInstance.Data + lVar9 * 0x30 + 0xc) = local_e8.AttrName.Data.ArrayMax;
  *(undefined8 *)(local_248.AllocatorInstance.Data + lVar9 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(local_248.AllocatorInstance.Data + lVar9 * 0x30 + 0x10) =
       local_e8.AttrValueString.Data.AllocatorInstance.Data;
  *(int *)(local_248.AllocatorInstance.Data + lVar9 * 0x30 + 0x18) =
       local_e8.AttrValueString.Data.ArrayNum;
  *(int *)(local_248.AllocatorInstance.Data + lVar9 * 0x30 + 0x1c) =
       local_e8.AttrValueString.Data.ArrayMax;
  *(double *)(local_248.AllocatorInstance.Data + lVar9 * 0x30 + 0x20) = local_e8.AttrValueNumber;
  local_248.AllocatorInstance.Data[lVar9 * 0x30 + 0x28] =
       (FScriptContainerElement)local_e8.AttrValueBool;
  *(AttrTypeEnum *)(local_248.AllocatorInstance.Data + lVar9 * 0x30 + 0x2c) = local_e8.AttrType;
  local_e8.AttrValueString.Data.ArrayNum = 0;
  local_e8.AttrValueString.Data.ArrayMax = 0;
  local_e8.AttrValueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.AttrName.Data.ArrayNum = 0;
  local_e8.AttrName.Data.ArrayMax = 0;
  local_e8.AttrName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this = FEngineVersion::Current();
  uVar7 = FEngineVersionBase::GetChangelist((FEngineVersionBase *)this);
  local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.Data.ArrayNum = 0;
  local_b8.Data.ArrayMax = 0;
  ::FString::AppendInt(&local_b8,uVar7);
  pFVar8 = GetAutomationParamName(local_28,CL);
  if ((1 < (pFVar8->Data).ArrayNum) &&
     (iVar6 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar8->Data).AllocatorInstance.Data,L"EventName"), iVar6 != 0)
     ) {
    if ((pFVar8->Data).ArrayNum == 0) {
      pwVar10 = L"";
    }
    else {
      pwVar10 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
    }
    iVar6 = FGenericPlatformStricmp::Stricmp(pwVar10,L"DateOffset");
    if (iVar6 != 0) goto LAB_148c00c5d;
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValidAttributeName(InName)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                     ,0x78,L"");
  if (bVar5) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_148c00c5d:
  _Src.Data = local_b8.Data.AllocatorInstance.Data;
  local_238.AttrName.Data.AllocatorInstance.Data = (pFVar8->Data).AllocatorInstance.Data;
  (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_238.AttrName.Data.ArrayNum = (pFVar8->Data).ArrayNum;
  local_238.AttrName.Data.ArrayMax = (pFVar8->Data).ArrayMax;
  (pFVar8->Data).ArrayNum = 0;
  (pFVar8->Data).ArrayMax = 0;
  lVar9 = (longlong)local_b8.Data.ArrayNum;
  local_238.AttrValueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_238.AttrValueString.Data.ArrayNum = local_b8.Data.ArrayNum;
  if (local_b8.Data.ArrayNum == 0) {
    local_238.AttrValueString.Data._8_8_ = local_b8.Data._8_8_ & 0xffffffff;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_b8.Data.ArrayNum,0,(ForAnyElementType *)&local_238.AttrValueString,
               local_b8.Data.ArrayNum,&local_238.AttrValueString.Data.ArrayMax);
    memcpy(local_238.AttrValueString.Data.AllocatorInstance.Data,_Src.Data,lVar9 * 2);
  }
  local_238.AttrValueNumber = 0.0;
  local_238.AttrValueBool = false;
  local_238.AttrType = String;
  pFVar2 = (pFVar8->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  if (((local_248.AllocatorInstance.Data <= &local_238) &&
      (&local_238 <
       (FAnalyticsEventAttribute *)
       (local_248.AllocatorInstance.Data + (longlong)local_248.ArrayMax * 0x30))) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar6 = local_248.ArrayNum;
  if (local_248.ArrayNum == local_248.ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&local_248.AllocatorInstance,&local_248.ArrayMax);
  }
  lVar9 = (longlong)iVar6;
  local_248.ArrayNum = iVar6 + 1;
  *(undefined8 *)&local_248.AllocatorInstance.Data[lVar9 * 0x30].field_0x0 = 0;
  *(FScriptContainerElement **)&local_248.AllocatorInstance.Data[lVar9 * 0x30].field_0x0 =
       local_238.AttrName.Data.AllocatorInstance.Data;
  *(int *)(local_248.AllocatorInstance.Data + lVar9 * 0x30 + 8) = local_238.AttrName.Data.ArrayNum;
  *(int *)(local_248.AllocatorInstance.Data + lVar9 * 0x30 + 0xc) = local_238.AttrName.Data.ArrayMax
  ;
  *(undefined8 *)(local_248.AllocatorInstance.Data + lVar9 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(local_248.AllocatorInstance.Data + lVar9 * 0x30 + 0x10) =
       local_238.AttrValueString.Data.AllocatorInstance.Data;
  *(int *)(local_248.AllocatorInstance.Data + lVar9 * 0x30 + 0x18) =
       local_238.AttrValueString.Data.ArrayNum;
  *(int *)(local_248.AllocatorInstance.Data + lVar9 * 0x30 + 0x1c) =
       local_238.AttrValueString.Data.ArrayMax;
  *(double *)(local_248.AllocatorInstance.Data + lVar9 * 0x30 + 0x20) = local_238.AttrValueNumber;
  local_248.AllocatorInstance.Data[lVar9 * 0x30 + 0x28] =
       (FScriptContainerElement)local_238.AttrValueBool;
  *(AttrTypeEnum *)(local_248.AllocatorInstance.Data + lVar9 * 0x30 + 0x2c) = local_238.AttrType;
  local_238.AttrValueString.Data.ArrayNum = 0;
  local_238.AttrValueString.Data.ArrayMax = 0;
  local_238.AttrValueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_238.AttrName.Data.ArrayNum = 0;
  local_238.AttrName.Data.ArrayMax = 0;
  local_238.AttrName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if ((Analytics.Object == (IAnalyticsProviderET *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pIVar4 = Analytics.Object;
  pcVar3 = *(code **)((Analytics.Object)->_padding_ + 0x100);
  pFVar8 = GetAutomationEventName(&local_a8,AutomationTestResults);
  (*pcVar3)(pIVar4,pFVar8,&local_248);
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  DestructItems<FAnalyticsEventAttribute,int>
            ((FAnalyticsEventAttribute *)local_248.AllocatorInstance.Data,local_248.ArrayNum);
  if ((FAnalyticsEventAttribute *)local_248.AllocatorInstance.Data !=
      (FAnalyticsEventAttribute *)0x0) {
    FMemory::Free(local_248.AllocatorInstance.Data);
  }
  return;
}

// FireEvent_FPSCapture @ 148c00f10

/* WARNING: Removing unreachable block (ram,0x000148c01d0b) */
/* WARNING: Removing unreachable block (ram,0x000148c01909) */
/* WARNING: Removing unreachable block (ram,0x000148c0154f) */
/* WARNING: Removing unreachable block (ram,0x000148c0112c) */
/* WARNING: Removing unreachable block (ram,0x000148c01374) */
/* WARNING: Removing unreachable block (ram,0x000148c0172c) */
/* WARNING: Removing unreachable block (ram,0x000148c01ae6) */
/* WARNING: Removing unreachable block (ram,0x000148c01f3b) */
/* WARNING: Removing unreachable block (ram,0x000148c01d1c) */
/* WARNING: Removing unreachable block (ram,0x000148c01917) */
/* WARNING: Removing unreachable block (ram,0x000148c0155d) */
/* WARNING: Removing unreachable block (ram,0x000148c0113a) */
/* WARNING: Removing unreachable block (ram,0x000148c01383) */
/* WARNING: Removing unreachable block (ram,0x000148c0173a) */
/* WARNING: Removing unreachable block (ram,0x000148c01af4) */
/* WARNING: Removing unreachable block (ram,0x000148c01f4c) */

void __cdecl FAutomationAnalytics::FireEvent_FPSCapture(FAutomationPerformanceSnapshot *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  IAnalyticsProviderET *pIVar3;
  ForAnyElementType _Src;
  bool bVar4;
  int iVar5;
  FString *pFVar6;
  longlong lVar7;
  FAnalyticsEventAttribute *pFVar8;
  wchar_t *pwVar9;
  TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> local_308;
  FAnalyticsEventAttribute local_2f8;
  FAnalyticsEventAttribute local_2c8;
  FAnalyticsEventAttribute local_298;
  FAnalyticsEventAttribute local_268;
  FAnalyticsEventAttribute local_238;
  FAnalyticsEventAttribute local_208;
  FAnalyticsEventAttribute local_1d8;
  FAnalyticsEventAttribute local_1a8;
  FString local_178;
  FString local_168;
  FString local_158;
  FString local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FAnalyticsEventAttribute local_b8;
  FAnalyticsEventAttribute local_88;
  FAnalyticsEventAttribute local_58;
  
  if (Analytics.Object == (IAnalyticsProviderET *)0x0) {
    return;
  }
  local_308.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_308.ArrayNum = 0;
  local_308.ArrayMax = 0;
  SetInitialParameters(&local_308);
  pFVar6 = GetAutomationParamName(&local_168,CL);
  if (((pFVar6->Data).ArrayNum < 2) ||
     (iVar5 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar6->Data).AllocatorInstance.Data,L"EventName"), iVar5 == 0)
     ) {
LAB_148c00faf:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidAttributeName(InName)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                       ,0x78,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    if ((pFVar6->Data).ArrayNum == 0) {
      pwVar9 = L"";
    }
    else {
      pwVar9 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    }
    iVar5 = FGenericPlatformStricmp::Stricmp(pwVar9,L"DateOffset");
    if (iVar5 == 0) goto LAB_148c00faf;
  }
  local_2c8.AttrName.Data.AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
  (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2c8.AttrName.Data.ArrayNum = (pFVar6->Data).ArrayNum;
  local_2c8.AttrName.Data.ArrayMax = (pFVar6->Data).ArrayMax;
  (pFVar6->Data).ArrayNum = 0;
  (pFVar6->Data).ArrayMax = 0;
  ::FString::FString(&local_2c8.AttrValueString,&param_1->Changelist);
  local_2c8.AttrValueBool = false;
  local_2c8.AttrValueNumber = 0.0;
  local_2c8.AttrType = String;
  pFVar1 = (pFVar6->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if (((local_308.AllocatorInstance.Data <= &local_2c8) &&
      (&local_2c8 <
       (FAnalyticsEventAttribute *)
       (local_308.AllocatorInstance.Data + (longlong)local_308.ArrayMax * 0x30))) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar5 = local_308.ArrayNum;
  if (local_308.ArrayNum == local_308.ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&local_308.AllocatorInstance,&local_308.ArrayMax);
  }
  lVar7 = (longlong)iVar5;
  local_308.ArrayNum = iVar5 + 1;
  *(undefined8 *)&local_308.AllocatorInstance.Data[lVar7 * 0x30].field_0x0 = 0;
  *(FScriptContainerElement **)&local_308.AllocatorInstance.Data[lVar7 * 0x30].field_0x0 =
       local_2c8.AttrName.Data.AllocatorInstance.Data;
  *(int *)(local_308.AllocatorInstance.Data + lVar7 * 0x30 + 8) = local_2c8.AttrName.Data.ArrayNum;
  *(int *)(local_308.AllocatorInstance.Data + lVar7 * 0x30 + 0xc) = local_2c8.AttrName.Data.ArrayMax
  ;
  *(undefined8 *)(local_308.AllocatorInstance.Data + lVar7 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(local_308.AllocatorInstance.Data + lVar7 * 0x30 + 0x10) =
       local_2c8.AttrValueString.Data.AllocatorInstance.Data;
  *(int *)(local_308.AllocatorInstance.Data + lVar7 * 0x30 + 0x18) =
       local_2c8.AttrValueString.Data.ArrayNum;
  *(int *)(local_308.AllocatorInstance.Data + lVar7 * 0x30 + 0x1c) =
       local_2c8.AttrValueString.Data.ArrayMax;
  *(double *)(local_308.AllocatorInstance.Data + lVar7 * 0x30 + 0x20) = local_2c8.AttrValueNumber;
  local_308.AllocatorInstance.Data[lVar7 * 0x30 + 0x28] =
       (FScriptContainerElement)local_2c8.AttrValueBool;
  *(AttrTypeEnum *)(local_308.AllocatorInstance.Data + lVar7 * 0x30 + 0x2c) = local_2c8.AttrType;
  local_2c8.AttrValueString.Data.ArrayNum = 0;
  local_2c8.AttrValueString.Data.ArrayMax = 0;
  local_2c8.AttrValueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2c8.AttrName.Data.ArrayNum = 0;
  local_2c8.AttrName.Data.ArrayMax = 0;
  local_2c8.AttrName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar6 = GetAutomationParamName(&local_158,Spec);
  if (((pFVar6->Data).ArrayNum < 2) ||
     (iVar5 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar6->Data).AllocatorInstance.Data,L"EventName"), iVar5 == 0)
     ) {
LAB_148c0118e:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidAttributeName(InName)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                       ,0x78,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    if ((pFVar6->Data).ArrayNum == 0) {
      pwVar9 = L"";
    }
    else {
      pwVar9 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    }
    iVar5 = FGenericPlatformStricmp::Stricmp(pwVar9,L"DateOffset");
    if (iVar5 == 0) goto LAB_148c0118e;
  }
  local_2f8.AttrName.Data.AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
  (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2f8.AttrName.Data.ArrayNum = (pFVar6->Data).ArrayNum;
  local_2f8.AttrName.Data.ArrayMax = (pFVar6->Data).ArrayMax;
  (pFVar6->Data).ArrayNum = 0;
  _Src = MachineSpec.Data.AllocatorInstance;
  (pFVar6->Data).ArrayMax = 0;
  lVar7 = (longlong)MachineSpec.Data.ArrayNum;
  local_2f8.AttrValueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2f8.AttrValueString.Data.ArrayNum = MachineSpec.Data.ArrayNum;
  if (MachineSpec.Data.ArrayNum == 0) {
    local_2f8.AttrValueString.Data.ArrayNum = 0;
    local_2f8.AttrValueString.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,MachineSpec.Data.ArrayNum,0,(ForAnyElementType *)&local_2f8.AttrValueString,
               MachineSpec.Data.ArrayNum,&local_2f8.AttrValueString.Data.ArrayMax);
    memcpy(local_2f8.AttrValueString.Data.AllocatorInstance.Data,_Src.Data,lVar7 * 2);
  }
  local_2f8.AttrValueNumber = 0.0;
  local_2f8.AttrValueBool = false;
  local_2f8.AttrType = String;
  pFVar1 = (pFVar6->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if (((local_308.AllocatorInstance.Data <= &local_2f8) &&
      (&local_2f8 <
       (FAnalyticsEventAttribute *)
       (local_308.AllocatorInstance.Data + (longlong)local_308.ArrayMax * 0x30))) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar5 = local_308.ArrayNum;
  if (local_308.ArrayNum == local_308.ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&local_308.AllocatorInstance,&local_308.ArrayMax);
  }
  lVar7 = (longlong)iVar5;
  local_308.ArrayNum = iVar5 + 1;
  *(undefined8 *)&local_308.AllocatorInstance.Data[lVar7 * 0x30].field_0x0 = 0;
  *(FScriptContainerElement **)&local_308.AllocatorInstance.Data[lVar7 * 0x30].field_0x0 =
       local_2f8.AttrName.Data.AllocatorInstance.Data;
  *(int *)(local_308.AllocatorInstance.Data + lVar7 * 0x30 + 8) = local_2f8.AttrName.Data.ArrayNum;
  *(int *)(local_308.AllocatorInstance.Data + lVar7 * 0x30 + 0xc) = local_2f8.AttrName.Data.ArrayMax
  ;
  *(undefined8 *)(local_308.AllocatorInstance.Data + lVar7 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(local_308.AllocatorInstance.Data + lVar7 * 0x30 + 0x10) =
       local_2f8.AttrValueString.Data.AllocatorInstance.Data;
  *(int *)(local_308.AllocatorInstance.Data + lVar7 * 0x30 + 0x18) =
       local_2f8.AttrValueString.Data.ArrayNum;
  *(int *)(local_308.AllocatorInstance.Data + lVar7 * 0x30 + 0x1c) =
       local_2f8.AttrValueString.Data.ArrayMax;
  *(double *)(local_308.AllocatorInstance.Data + lVar7 * 0x30 + 0x20) = local_2f8.AttrValueNumber;
  local_308.AllocatorInstance.Data[lVar7 * 0x30 + 0x28] =
       (FScriptContainerElement)local_2f8.AttrValueBool;
  *(AttrTypeEnum *)(local_308.AllocatorInstance.Data + lVar7 * 0x30 + 0x2c) = local_2f8.AttrType;
  local_2f8.AttrValueString.Data.ArrayNum = 0;
  local_2f8.AttrValueString.Data.ArrayMax = 0;
  local_2f8.AttrValueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2f8.AttrName.Data.ArrayNum = 0;
  local_2f8.AttrName.Data.ArrayMax = 0;
  local_2f8.AttrName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar6 = GetAutomationParamName(&local_148,MapName);
  if (((pFVar6->Data).ArrayNum < 2) ||
     (iVar5 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar6->Data).AllocatorInstance.Data,L"EventName"), iVar5 == 0)
     ) {
LAB_148c013d4:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidAttributeName(InName)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                       ,0x78,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    if ((pFVar6->Data).ArrayNum == 0) {
      pwVar9 = L"";
    }
    else {
      pwVar9 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    }
    iVar5 = FGenericPlatformStricmp::Stricmp(pwVar9,L"DateOffset");
    if (iVar5 == 0) goto LAB_148c013d4;
  }
  local_298.AttrName.Data.AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
  (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_298.AttrName.Data.ArrayNum = (pFVar6->Data).ArrayNum;
  local_298.AttrName.Data.ArrayMax = (pFVar6->Data).ArrayMax;
  (pFVar6->Data).ArrayNum = 0;
  (pFVar6->Data).ArrayMax = 0;
  ::FString::FString(&local_298.AttrValueString,&param_1->MapName);
  local_298.AttrValueNumber = 0.0;
  local_298.AttrValueBool = false;
  local_298.AttrType = String;
  pFVar1 = (pFVar6->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if (((local_308.AllocatorInstance.Data <= &local_298) &&
      (&local_298 <
       (FAnalyticsEventAttribute *)
       (local_308.AllocatorInstance.Data + (longlong)local_308.ArrayMax * 0x30))) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar5 = local_308.ArrayNum;
  if (local_308.ArrayNum == local_308.ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&local_308.AllocatorInstance,&local_308.ArrayMax);
  }
  lVar7 = (longlong)iVar5;
  local_308.ArrayNum = iVar5 + 1;
  *(undefined8 *)&local_308.AllocatorInstance.Data[lVar7 * 0x30].field_0x0 = 0;
  *(FScriptContainerElement **)&local_308.AllocatorInstance.Data[lVar7 * 0x30].field_0x0 =
       local_298.AttrName.Data.AllocatorInstance.Data;
  *(int *)(local_308.AllocatorInstance.Data + lVar7 * 0x30 + 8) = local_298.AttrName.Data.ArrayNum;
  *(int *)(local_308.AllocatorInstance.Data + lVar7 * 0x30 + 0xc) = local_298.AttrName.Data.ArrayMax
  ;
  *(undefined8 *)(local_308.AllocatorInstance.Data + lVar7 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(local_308.AllocatorInstance.Data + lVar7 * 0x30 + 0x10) =
       local_298.AttrValueString.Data.AllocatorInstance.Data;
  *(int *)(local_308.AllocatorInstance.Data + lVar7 * 0x30 + 0x18) =
       local_298.AttrValueString.Data.ArrayNum;
  *(int *)(local_308.AllocatorInstance.Data + lVar7 * 0x30 + 0x1c) =
       local_298.AttrValueString.Data.ArrayMax;
  *(double *)(local_308.AllocatorInstance.Data + lVar7 * 0x30 + 0x20) = local_298.AttrValueNumber;
  local_308.AllocatorInstance.Data[lVar7 * 0x30 + 0x28] =
       (FScriptContainerElement)local_298.AttrValueBool;
  *(AttrTypeEnum *)(local_308.AllocatorInstance.Data + lVar7 * 0x30 + 0x2c) = local_298.AttrType;
  local_298.AttrValueString.Data.ArrayNum = 0;
  local_298.AttrValueString.Data.ArrayMax = 0;
  local_298.AttrValueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_298.AttrName.Data.ArrayNum = 0;
  local_298.AttrName.Data.ArrayMax = 0;
  local_298.AttrName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar6 = GetAutomationParamName(&local_138,FPS);
  if (((pFVar6->Data).ArrayNum < 2) ||
     (iVar5 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar6->Data).AllocatorInstance.Data,L"EventName"), iVar5 == 0)
     ) {
LAB_148c015b1:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidAttributeName(InName)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                       ,0x78,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    if ((pFVar6->Data).ArrayNum == 0) {
      pwVar9 = L"";
    }
    else {
      pwVar9 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    }
    iVar5 = FGenericPlatformStricmp::Stricmp(pwVar9,L"DateOffset");
    if (iVar5 == 0) goto LAB_148c015b1;
  }
  local_268.AttrName.Data.AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
  (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_268.AttrName.Data.ArrayNum = (pFVar6->Data).ArrayNum;
  local_268.AttrName.Data.ArrayMax = (pFVar6->Data).ArrayMax;
  (pFVar6->Data).ArrayNum = 0;
  (pFVar6->Data).ArrayMax = 0;
  ::FString::FString(&local_268.AttrValueString,&param_1->AverageFPS);
  local_268.AttrValueNumber = 0.0;
  local_268.AttrValueBool = false;
  local_268.AttrType = String;
  pFVar1 = (pFVar6->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if (((local_308.AllocatorInstance.Data <= &local_268) &&
      (&local_268 <
       (FAnalyticsEventAttribute *)
       (local_308.AllocatorInstance.Data + (longlong)local_308.ArrayMax * 0x30))) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar5 = local_308.ArrayNum;
  if (local_308.ArrayNum == local_308.ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&local_308.AllocatorInstance,&local_308.ArrayMax);
  }
  lVar7 = (longlong)iVar5;
  local_308.ArrayNum = iVar5 + 1;
  *(undefined8 *)&local_308.AllocatorInstance.Data[lVar7 * 0x30].field_0x0 = 0;
  *(FScriptContainerElement **)&local_308.AllocatorInstance.Data[lVar7 * 0x30].field_0x0 =
       local_268.AttrName.Data.AllocatorInstance.Data;
  *(int *)(local_308.AllocatorInstance.Data + lVar7 * 0x30 + 8) = local_268.AttrName.Data.ArrayNum;
  *(int *)(local_308.AllocatorInstance.Data + lVar7 * 0x30 + 0xc) = local_268.AttrName.Data.ArrayMax
  ;
  *(undefined8 *)(local_308.AllocatorInstance.Data + lVar7 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(local_308.AllocatorInstance.Data + lVar7 * 0x30 + 0x10) =
       local_268.AttrValueString.Data.AllocatorInstance.Data;
  *(int *)(local_308.AllocatorInstance.Data + lVar7 * 0x30 + 0x18) =
       local_268.AttrValueString.Data.ArrayNum;
  *(int *)(local_308.AllocatorInstance.Data + lVar7 * 0x30 + 0x1c) =
       local_268.AttrValueString.Data.ArrayMax;
  *(double *)(local_308.AllocatorInstance.Data + lVar7 * 0x30 + 0x20) = local_268.AttrValueNumber;
  local_308.AllocatorInstance.Data[lVar7 * 0x30 + 0x28] =
       (FScriptContainerElement)local_268.AttrValueBool;
  *(AttrTypeEnum *)(local_308.AllocatorInstance.Data + lVar7 * 0x30 + 0x2c) = local_268.AttrType;
  local_268.AttrValueString.Data.ArrayNum = 0;
  local_268.AttrValueString.Data.ArrayMax = 0;
  local_268.AttrValueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_268.AttrName.Data.ArrayNum = 0;
  local_268.AttrName.Data.ArrayMax = 0;
  local_268.AttrName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar6 = GetAutomationParamName(&local_128,BuildConfiguration);
  if (((pFVar6->Data).ArrayNum < 2) ||
     (iVar5 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar6->Data).AllocatorInstance.Data,L"EventName"), iVar5 == 0)
     ) {
LAB_148c0178e:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidAttributeName(InName)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                       ,0x78,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    if ((pFVar6->Data).ArrayNum == 0) {
      pwVar9 = L"";
    }
    else {
      pwVar9 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    }
    iVar5 = FGenericPlatformStricmp::Stricmp(pwVar9,L"DateOffset");
    if (iVar5 == 0) goto LAB_148c0178e;
  }
  local_238.AttrName.Data.AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
  (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_238.AttrName.Data.ArrayNum = (pFVar6->Data).ArrayNum;
  local_238.AttrName.Data.ArrayMax = (pFVar6->Data).ArrayMax;
  (pFVar6->Data).ArrayNum = 0;
  (pFVar6->Data).ArrayMax = 0;
  ::FString::FString(&local_238.AttrValueString,&param_1->BuildConfiguration);
  local_238.AttrValueNumber = 0.0;
  local_238.AttrValueBool = false;
  local_238.AttrType = String;
  pFVar1 = (pFVar6->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if (((local_308.AllocatorInstance.Data <= &local_238) &&
      (&local_238 <
       (FAnalyticsEventAttribute *)
       (local_308.AllocatorInstance.Data + (longlong)local_308.ArrayMax * 0x30))) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar5 = local_308.ArrayNum;
  if (local_308.ArrayNum == local_308.ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&local_308.AllocatorInstance,&local_308.ArrayMax);
  }
  lVar7 = (longlong)iVar5;
  local_308.ArrayNum = iVar5 + 1;
  *(undefined8 *)&local_308.AllocatorInstance.Data[lVar7 * 0x30].field_0x0 = 0;
  *(FScriptContainerElement **)&local_308.AllocatorInstance.Data[lVar7 * 0x30].field_0x0 =
       local_238.AttrName.Data.AllocatorInstance.Data;
  *(int *)(local_308.AllocatorInstance.Data + lVar7 * 0x30 + 8) = local_238.AttrName.Data.ArrayNum;
  *(int *)(local_308.AllocatorInstance.Data + lVar7 * 0x30 + 0xc) = local_238.AttrName.Data.ArrayMax
  ;
  *(undefined8 *)(local_308.AllocatorInstance.Data + lVar7 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(local_308.AllocatorInstance.Data + lVar7 * 0x30 + 0x10) =
       local_238.AttrValueString.Data.AllocatorInstance.Data;
  *(int *)(local_308.AllocatorInstance.Data + lVar7 * 0x30 + 0x18) =
       local_238.AttrValueString.Data.ArrayNum;
  *(int *)(local_308.AllocatorInstance.Data + lVar7 * 0x30 + 0x1c) =
       local_238.AttrValueString.Data.ArrayMax;
  *(double *)(local_308.AllocatorInstance.Data + lVar7 * 0x30 + 0x20) = local_238.AttrValueNumber;
  local_308.AllocatorInstance.Data[lVar7 * 0x30 + 0x28] =
       (FScriptContainerElement)local_238.AttrValueBool;
  *(AttrTypeEnum *)(local_308.AllocatorInstance.Data + lVar7 * 0x30 + 0x2c) = local_238.AttrType;
  local_238.AttrValueString.Data.ArrayNum = 0;
  local_238.AttrValueString.Data.ArrayMax = 0;
  local_238.AttrValueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_238.AttrName.Data.ArrayNum = 0;
  local_238.AttrName.Data.ArrayMax = 0;
  local_238.AttrName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar6 = GetAutomationParamName(&local_118,AverageFrameTime);
  if (((pFVar6->Data).ArrayNum < 2) ||
     (iVar5 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar6->Data).AllocatorInstance.Data,L"EventName"), iVar5 == 0)
     ) {
LAB_148c0196b:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidAttributeName(InName)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                       ,0x78,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    if ((pFVar6->Data).ArrayNum == 0) {
      pwVar9 = L"";
    }
    else {
      pwVar9 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    }
    iVar5 = FGenericPlatformStricmp::Stricmp(pwVar9,L"DateOffset");
    if (iVar5 == 0) goto LAB_148c0196b;
  }
  local_208.AttrName.Data.AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
  (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_208.AttrName.Data.ArrayNum = (pFVar6->Data).ArrayNum;
  local_208.AttrName.Data.ArrayMax = (pFVar6->Data).ArrayMax;
  (pFVar6->Data).ArrayNum = 0;
  (pFVar6->Data).ArrayMax = 0;
  ::FString::FString(&local_208.AttrValueString,&param_1->AverageFrameTime);
  local_208.AttrValueNumber = 0.0;
  local_208.AttrValueBool = false;
  local_208.AttrType = String;
  pFVar1 = (pFVar6->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if (((local_308.AllocatorInstance.Data <= &local_208) &&
      (&local_208 <
       (FAnalyticsEventAttribute *)
       (local_308.AllocatorInstance.Data + (longlong)local_308.ArrayMax * 0x30))) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar5 = local_308.ArrayNum;
  if (local_308.ArrayNum == local_308.ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&local_308.AllocatorInstance,&local_308.ArrayMax);
  }
  lVar7 = (longlong)iVar5;
  local_308.ArrayNum = iVar5 + 1;
  *(undefined8 *)&local_308.AllocatorInstance.Data[lVar7 * 0x30].field_0x0 = 0;
  *(FScriptContainerElement **)&local_308.AllocatorInstance.Data[lVar7 * 0x30].field_0x0 =
       local_208.AttrName.Data.AllocatorInstance.Data;
  *(int *)(local_308.AllocatorInstance.Data + lVar7 * 0x30 + 8) = local_208.AttrName.Data.ArrayNum;
  *(int *)(local_308.AllocatorInstance.Data + lVar7 * 0x30 + 0xc) = local_208.AttrName.Data.ArrayMax
  ;
  *(undefined8 *)(local_308.AllocatorInstance.Data + lVar7 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(local_308.AllocatorInstance.Data + lVar7 * 0x30 + 0x10) =
       local_208.AttrValueString.Data.AllocatorInstance.Data;
  *(int *)(local_308.AllocatorInstance.Data + lVar7 * 0x30 + 0x18) =
       local_208.AttrValueString.Data.ArrayNum;
  *(int *)(local_308.AllocatorInstance.Data + lVar7 * 0x30 + 0x1c) =
       local_208.AttrValueString.Data.ArrayMax;
  *(double *)(local_308.AllocatorInstance.Data + lVar7 * 0x30 + 0x20) = local_208.AttrValueNumber;
  local_308.AllocatorInstance.Data[lVar7 * 0x30 + 0x28] =
       (FScriptContainerElement)local_208.AttrValueBool;
  *(AttrTypeEnum *)(local_308.AllocatorInstance.Data + lVar7 * 0x30 + 0x2c) = local_208.AttrType;
  local_208.AttrValueString.Data.ArrayNum = 0;
  local_208.AttrValueString.Data.ArrayMax = 0;
  local_208.AttrValueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_208.AttrName.Data.ArrayNum = 0;
  local_208.AttrName.Data.ArrayMax = 0;
  local_208.AttrName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar6 = GetAutomationParamName(&local_108,AverageGameThreadTime);
  if (((pFVar6->Data).ArrayNum < 2) ||
     (iVar5 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar6->Data).AllocatorInstance.Data,L"EventName"), iVar5 == 0)
     ) {
LAB_148c01b48:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidAttributeName(InName)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                       ,0x78,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    if ((pFVar6->Data).ArrayNum == 0) {
      pwVar9 = L"";
    }
    else {
      pwVar9 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    }
    iVar5 = FGenericPlatformStricmp::Stricmp(pwVar9,L"DateOffset");
    if (iVar5 == 0) goto LAB_148c01b48;
  }
  local_1d8.AttrName.Data.AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
  (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1d8.AttrName.Data.ArrayNum = (pFVar6->Data).ArrayNum;
  local_1d8.AttrName.Data.ArrayMax = (pFVar6->Data).ArrayMax;
  (pFVar6->Data).ArrayNum = 0;
  (pFVar6->Data).ArrayMax = 0;
  ::FString::FString(&local_1d8.AttrValueString,&param_1->AverageGameThreadTime);
  local_1d8.AttrValueNumber = 0.0;
  local_1d8.AttrValueBool = false;
  local_1d8.AttrType = String;
  pFVar1 = (pFVar6->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if (((local_308.AllocatorInstance.Data <= &local_1d8) &&
      (&local_1d8 <
       (FAnalyticsEventAttribute *)
       (local_308.AllocatorInstance.Data + (longlong)local_308.ArrayMax * 0x30))) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar5 = local_308.ArrayNum;
  if (local_308.ArrayNum == local_308.ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&local_308.AllocatorInstance,&local_308.ArrayMax);
  }
  lVar7 = (longlong)iVar5;
  local_308.ArrayNum = iVar5 + 1;
  *(undefined8 *)&local_308.AllocatorInstance.Data[lVar7 * 0x30].field_0x0 = 0;
  *(FScriptContainerElement **)&local_308.AllocatorInstance.Data[lVar7 * 0x30].field_0x0 =
       local_1d8.AttrName.Data.AllocatorInstance.Data;
  *(int *)(local_308.AllocatorInstance.Data + lVar7 * 0x30 + 8) = local_1d8.AttrName.Data.ArrayNum;
  *(int *)(local_308.AllocatorInstance.Data + lVar7 * 0x30 + 0xc) = local_1d8.AttrName.Data.ArrayMax
  ;
  *(undefined8 *)(local_308.AllocatorInstance.Data + lVar7 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(local_308.AllocatorInstance.Data + lVar7 * 0x30 + 0x10) =
       local_1d8.AttrValueString.Data.AllocatorInstance.Data;
  *(int *)(local_308.AllocatorInstance.Data + lVar7 * 0x30 + 0x18) =
       local_1d8.AttrValueString.Data.ArrayNum;
  *(int *)(local_308.AllocatorInstance.Data + lVar7 * 0x30 + 0x1c) =
       local_1d8.AttrValueString.Data.ArrayMax;
  *(double *)(local_308.AllocatorInstance.Data + lVar7 * 0x30 + 0x20) = local_1d8.AttrValueNumber;
  local_308.AllocatorInstance.Data[lVar7 * 0x30 + 0x28] =
       (FScriptContainerElement)local_1d8.AttrValueBool;
  *(AttrTypeEnum *)(local_308.AllocatorInstance.Data + lVar7 * 0x30 + 0x2c) = local_1d8.AttrType;
  local_1d8.AttrValueString.Data.ArrayNum = 0;
  local_1d8.AttrValueString.Data.ArrayMax = 0;
  local_1d8.AttrValueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1d8.AttrName.Data.ArrayNum = 0;
  local_1d8.AttrName.Data.ArrayMax = 0;
  local_1d8.AttrName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar6 = GetAutomationParamName(&local_f8,AverageRenderThreadTime);
  if ((1 < (pFVar6->Data).ArrayNum) &&
     (iVar5 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar6->Data).AllocatorInstance.Data,L"EventName"), iVar5 != 0)
     ) {
    if ((pFVar6->Data).ArrayNum == 0) {
      pwVar9 = L"";
    }
    else {
      pwVar9 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    }
    iVar5 = FGenericPlatformStricmp::Stricmp(pwVar9,L"DateOffset");
    if (iVar5 != 0) goto LAB_148c01d96;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValidAttributeName(InName)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                     ,0x78,L"");
  if (bVar4) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_148c01d96:
  local_1a8.AttrName.Data.AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
  (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1a8.AttrName.Data.ArrayNum = (pFVar6->Data).ArrayNum;
  local_1a8.AttrName.Data.ArrayMax = (pFVar6->Data).ArrayMax;
  (pFVar6->Data).ArrayNum = 0;
  (pFVar6->Data).ArrayMax = 0;
  ::FString::FString(&local_1a8.AttrValueString,&param_1->AverageRenderThreadTime);
  local_1a8.AttrValueNumber = 0.0;
  local_1a8.AttrValueBool = false;
  local_1a8.AttrType = String;
  pFVar1 = (pFVar6->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if (((local_308.AllocatorInstance.Data <= &local_1a8) &&
      (&local_1a8 <
       (FAnalyticsEventAttribute *)
       (local_308.AllocatorInstance.Data + (longlong)local_308.ArrayMax * 0x30))) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar5 = local_308.ArrayNum;
  if (local_308.ArrayNum == local_308.ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&local_308.AllocatorInstance,&local_308.ArrayMax);
  }
  lVar7 = (longlong)iVar5;
  *(undefined8 *)&local_308.AllocatorInstance.Data[lVar7 * 0x30].field_0x0 = 0;
  *(FScriptContainerElement **)&local_308.AllocatorInstance.Data[lVar7 * 0x30].field_0x0 =
       local_1a8.AttrName.Data.AllocatorInstance.Data;
  *(int *)(local_308.AllocatorInstance.Data + lVar7 * 0x30 + 8) = local_1a8.AttrName.Data.ArrayNum;
  *(int *)(local_308.AllocatorInstance.Data + lVar7 * 0x30 + 0xc) = local_1a8.AttrName.Data.ArrayMax
  ;
  *(undefined8 *)(local_308.AllocatorInstance.Data + lVar7 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(local_308.AllocatorInstance.Data + lVar7 * 0x30 + 0x10) =
       local_1a8.AttrValueString.Data.AllocatorInstance.Data;
  *(int *)(local_308.AllocatorInstance.Data + lVar7 * 0x30 + 0x18) =
       local_1a8.AttrValueString.Data.ArrayNum;
  *(int *)(local_308.AllocatorInstance.Data + lVar7 * 0x30 + 0x1c) =
       local_1a8.AttrValueString.Data.ArrayMax;
  *(double *)(local_308.AllocatorInstance.Data + lVar7 * 0x30 + 0x20) = local_1a8.AttrValueNumber;
  local_308.AllocatorInstance.Data[lVar7 * 0x30 + 0x28] =
       (FScriptContainerElement)local_1a8.AttrValueBool;
  *(AttrTypeEnum *)(local_308.AllocatorInstance.Data + lVar7 * 0x30 + 0x2c) = local_1a8.AttrType;
  local_1a8.AttrValueString.Data.ArrayNum = 0;
  local_1a8.AttrValueString.Data.ArrayMax = 0;
  local_1a8.AttrValueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1a8.AttrName.Data.ArrayNum = 0;
  local_1a8.AttrName.Data.ArrayMax = 0;
  local_1a8.AttrName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_308.ArrayNum = iVar5 + 1;
  pFVar6 = GetAutomationParamName(&local_e8,AverageGPUTime);
  pFVar8 = FAnalyticsEventAttribute::FAnalyticsEventAttribute<FString_const_&>
                     (&local_b8,pFVar6,&param_1->AverageGPUTime);
  if (((local_308.AllocatorInstance.Data <= pFVar8) &&
      (pFVar8 < (FAnalyticsEventAttribute *)
                (local_308.AllocatorInstance.Data + (longlong)local_308.ArrayMax * 0x30))) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (local_308.ArrayNum == local_308.ArrayMax) {
    local_308.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x830,&local_308.AllocatorInstance,&local_308.ArrayMax);
  }
  lVar7 = (longlong)local_308.ArrayNum;
  local_308.ArrayNum = local_308.ArrayNum + 1;
  *(undefined8 *)&local_308.AllocatorInstance.Data[lVar7 * 0x30].field_0x0 = 0;
  *(FScriptContainerElement **)&local_308.AllocatorInstance.Data[lVar7 * 0x30].field_0x0 =
       (pFVar8->AttrName).Data.AllocatorInstance.Data;
  (pFVar8->AttrName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(local_308.AllocatorInstance.Data + lVar7 * 0x30 + 8) = (pFVar8->AttrName).Data.ArrayNum;
  *(int *)(local_308.AllocatorInstance.Data + lVar7 * 0x30 + 0xc) = (pFVar8->AttrName).Data.ArrayMax
  ;
  (pFVar8->AttrName).Data.ArrayNum = 0;
  (pFVar8->AttrName).Data.ArrayMax = 0;
  *(undefined8 *)(local_308.AllocatorInstance.Data + lVar7 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(local_308.AllocatorInstance.Data + lVar7 * 0x30 + 0x10) =
       (pFVar8->AttrValueString).Data.AllocatorInstance.Data;
  (pFVar8->AttrValueString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(local_308.AllocatorInstance.Data + lVar7 * 0x30 + 0x18) =
       (pFVar8->AttrValueString).Data.ArrayNum;
  *(int *)(local_308.AllocatorInstance.Data + lVar7 * 0x30 + 0x1c) =
       (pFVar8->AttrValueString).Data.ArrayMax;
  (pFVar8->AttrValueString).Data.ArrayNum = 0;
  (pFVar8->AttrValueString).Data.ArrayMax = 0;
  *(double *)(local_308.AllocatorInstance.Data + lVar7 * 0x30 + 0x20) = pFVar8->AttrValueNumber;
  local_308.AllocatorInstance.Data[lVar7 * 0x30 + 0x28] =
       (FScriptContainerElement)pFVar8->AttrValueBool;
  *(AttrTypeEnum *)(local_308.AllocatorInstance.Data + lVar7 * 0x30 + 0x2c) = pFVar8->AttrType;
  if (local_b8.AttrValueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.AttrValueString.Data.AllocatorInstance.Data);
  }
  if (local_b8.AttrName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.AttrName.Data.AllocatorInstance.Data);
  }
  pFVar6 = GetAutomationParamName(&local_d8,PercentOfFramesAtLeast30FPS);
  pFVar8 = FAnalyticsEventAttribute::FAnalyticsEventAttribute<FString_const_&>
                     (&local_88,pFVar6,&param_1->PercentOfFramesAtLeast30FPS);
  if (((local_308.AllocatorInstance.Data <= pFVar8) &&
      (pFVar8 < (FAnalyticsEventAttribute *)
                (local_308.AllocatorInstance.Data + (longlong)local_308.ArrayMax * 0x30))) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar5 = local_308.ArrayNum;
  if (local_308.ArrayNum == local_308.ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&local_308.AllocatorInstance,&local_308.ArrayMax);
  }
  lVar7 = (longlong)iVar5;
  local_308.ArrayNum = iVar5 + 1;
  *(undefined8 *)&local_308.AllocatorInstance.Data[lVar7 * 0x30].field_0x0 = 0;
  *(FScriptContainerElement **)&local_308.AllocatorInstance.Data[lVar7 * 0x30].field_0x0 =
       (pFVar8->AttrName).Data.AllocatorInstance.Data;
  (pFVar8->AttrName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(local_308.AllocatorInstance.Data + lVar7 * 0x30 + 8) = (pFVar8->AttrName).Data.ArrayNum;
  *(int *)(local_308.AllocatorInstance.Data + lVar7 * 0x30 + 0xc) = (pFVar8->AttrName).Data.ArrayMax
  ;
  (pFVar8->AttrName).Data.ArrayNum = 0;
  (pFVar8->AttrName).Data.ArrayMax = 0;
  *(undefined8 *)(local_308.AllocatorInstance.Data + lVar7 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(local_308.AllocatorInstance.Data + lVar7 * 0x30 + 0x10) =
       (pFVar8->AttrValueString).Data.AllocatorInstance.Data;
  (pFVar8->AttrValueString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(local_308.AllocatorInstance.Data + lVar7 * 0x30 + 0x18) =
       (pFVar8->AttrValueString).Data.ArrayNum;
  *(int *)(local_308.AllocatorInstance.Data + lVar7 * 0x30 + 0x1c) =
       (pFVar8->AttrValueString).Data.ArrayMax;
  (pFVar8->AttrValueString).Data.ArrayNum = 0;
  (pFVar8->AttrValueString).Data.ArrayMax = 0;
  *(double *)(local_308.AllocatorInstance.Data + lVar7 * 0x30 + 0x20) = pFVar8->AttrValueNumber;
  local_308.AllocatorInstance.Data[lVar7 * 0x30 + 0x28] =
       (FScriptContainerElement)pFVar8->AttrValueBool;
  *(AttrTypeEnum *)(local_308.AllocatorInstance.Data + lVar7 * 0x30 + 0x2c) = pFVar8->AttrType;
  if (local_88.AttrValueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AttrValueString.Data.AllocatorInstance.Data);
  }
  if (local_88.AttrName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AttrName.Data.AllocatorInstance.Data);
  }
  pFVar6 = GetAutomationParamName(&local_c8,PercentOfFramesAtLeast60FPS);
  pFVar8 = FAnalyticsEventAttribute::FAnalyticsEventAttribute<FString_const_&>
                     (&local_58,pFVar6,&param_1->PercentOfFramesAtLeast60FPS);
  if (((local_308.AllocatorInstance.Data <= pFVar8) &&
      (pFVar8 < (FAnalyticsEventAttribute *)
                (local_308.AllocatorInstance.Data + (longlong)local_308.ArrayMax * 0x30))) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar5 = local_308.ArrayNum;
  if (local_308.ArrayNum == local_308.ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&local_308.AllocatorInstance,&local_308.ArrayMax);
  }
  lVar7 = (longlong)iVar5;
  local_308.ArrayNum = iVar5 + 1;
  *(undefined8 *)&local_308.AllocatorInstance.Data[lVar7 * 0x30].field_0x0 = 0;
  *(FScriptContainerElement **)&local_308.AllocatorInstance.Data[lVar7 * 0x30].field_0x0 =
       (pFVar8->AttrName).Data.AllocatorInstance.Data;
  (pFVar8->AttrName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(local_308.AllocatorInstance.Data + lVar7 * 0x30 + 8) = (pFVar8->AttrName).Data.ArrayNum;
  *(int *)(local_308.AllocatorInstance.Data + lVar7 * 0x30 + 0xc) = (pFVar8->AttrName).Data.ArrayMax
  ;
  (pFVar8->AttrName).Data.ArrayNum = 0;
  (pFVar8->AttrName).Data.ArrayMax = 0;
  *(undefined8 *)(local_308.AllocatorInstance.Data + lVar7 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(local_308.AllocatorInstance.Data + lVar7 * 0x30 + 0x10) =
       (pFVar8->AttrValueString).Data.AllocatorInstance.Data;
  (pFVar8->AttrValueString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(local_308.AllocatorInstance.Data + lVar7 * 0x30 + 0x18) =
       (pFVar8->AttrValueString).Data.ArrayNum;
  *(int *)(local_308.AllocatorInstance.Data + lVar7 * 0x30 + 0x1c) =
       (pFVar8->AttrValueString).Data.ArrayMax;
  (pFVar8->AttrValueString).Data.ArrayNum = 0;
  (pFVar8->AttrValueString).Data.ArrayMax = 0;
  *(double *)(local_308.AllocatorInstance.Data + lVar7 * 0x30 + 0x20) = pFVar8->AttrValueNumber;
  local_308.AllocatorInstance.Data[lVar7 * 0x30 + 0x28] =
       (FScriptContainerElement)pFVar8->AttrValueBool;
  *(AttrTypeEnum *)(local_308.AllocatorInstance.Data + lVar7 * 0x30 + 0x2c) = pFVar8->AttrType;
  if (local_58.AttrValueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AttrValueString.Data.AllocatorInstance.Data);
  }
  if (local_58.AttrName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AttrName.Data.AllocatorInstance.Data);
  }
  if ((Analytics.Object == (IAnalyticsProviderET *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pIVar3 = Analytics.Object;
  pcVar2 = *(code **)((Analytics.Object)->_padding_ + 0x100);
  pFVar6 = GetAutomationEventName(&local_178,FPSCapture);
  (*pcVar2)(pIVar3,pFVar6,&local_308);
  if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data.AllocatorInstance.Data);
  }
  DestructItems<FAnalyticsEventAttribute,int>
            ((FAnalyticsEventAttribute *)local_308.AllocatorInstance.Data,local_308.ArrayNum);
  if ((FAnalyticsEventAttribute *)local_308.AllocatorInstance.Data !=
      (FAnalyticsEventAttribute *)0x0) {
    FMemory::Free(local_308.AllocatorInstance.Data);
  }
  return;
}

// GetAutomationEventName @ 148c02850

FString * __cdecl
FAutomationAnalytics::GetAutomationEventName(FString *__return_storage_ptr__,Type param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FString *pFVar4;
  int iVar5;
  
  iVar5 = AutomationEventNames.ArrayNum;
  if (iVar5 <= (int)param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InEventName < AutomationEventNames.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AutomationWorker\\Private\\AutomationAnalytics.cpp"
                       ,0x50,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar1)();
      return pFVar4;
    }
    iVar5 = AutomationEventNames.ArrayNum;
  }
  uVar3 = 0;
  if ((int)param_1 < iVar5) {
    uVar3 = ~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar1)();
      return pFVar4;
    }
  }
  ::FString::FString(__return_storage_ptr__,
                     (FString *)
                     (AutomationEventNames.AllocatorInstance.Data + (longlong)(int)param_1 * 0x10));
  return __return_storage_ptr__;
}

// GetAutomationParamName @ 148c02910

FString * __cdecl
FAutomationAnalytics::GetAutomationParamName(FString *__return_storage_ptr__,Type param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FString *pFVar4;
  int iVar5;
  
  iVar5 = AutomationParamNames.ArrayNum;
  if (iVar5 <= (int)param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InEngineParam < AutomationParamNames.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AutomationWorker\\Private\\AutomationAnalytics.cpp"
                       ,0x57,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar1)();
      return pFVar4;
    }
    iVar5 = AutomationParamNames.ArrayNum;
  }
  uVar3 = 0;
  if ((int)param_1 < iVar5) {
    uVar3 = ~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar1)();
      return pFVar4;
    }
  }
  ::FString::FString(__return_storage_ptr__,
                     (FString *)
                     (AutomationParamNames.AllocatorInstance.Data + (longlong)(int)param_1 * 0x10));
  return __return_storage_ptr__;
}

// GetProvider @ 148c02a90

IAnalyticsProvider * __cdecl FAutomationAnalytics::GetProvider(void)

{
  code *pcVar1;
  bool bVar2;
  IAnalyticsProvider *pIVar3;
  
  if (((!bIsInitialized) || (Analytics.Object == (IAnalyticsProviderET *)0x0)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsInitialized && IsAvailable()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AutomationWorker\\Private\\AutomationAnalytics.cpp"
                         ,0x24,
                         L"FAutomationAnalytics::GetProvider called outside of Initialize/Shutdown."
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    pIVar3 = (IAnalyticsProvider *)(*pcVar1)();
    return pIVar3;
  }
  return (IAnalyticsProvider *)Analytics.Object;
}

// Initialize @ 148c05950

/* WARNING: Removing unreachable block (ram,0x000148c05a8a) */

void __cdecl FAutomationAnalytics::Initialize(void)

{
  FName FVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  IAnalyticsProviderET *pIVar4;
  bool bVar5;
  FName *pFVar6;
  FModuleManager *this;
  IModuleInterface *pIVar7;
  FString *pFVar8;
  TSharedPtr<IAnalyticsProviderET,1> *pTVar9;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  FName local_res8;
  FString local_138;
  FAnalyticsEventAttribute *local_128;
  undefined8 local_120;
  FScriptContainerElement *local_118;
  int local_110;
  int local_10c;
  FScriptContainerElement *local_108;
  int local_100;
  int local_fc;
  void *local_f8;
  undefined8 local_f0;
  void *local_e8;
  undefined8 local_e0;
  FString *local_d8;
  undefined8 local_d0;
  void *local_c8;
  undefined8 local_c0;
  undefined2 local_b8;
  void *local_b0;
  undefined8 local_a8;
  void *local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  FString local_80;
  undefined1 local_70 [8];
  TReferenceControllerBase<1> *local_68;
  FString local_60;
  FString local_50;
  FString local_40;
  FString local_30;
  
  if ((bIsInitialized) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bIsInitialized",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AutomationWorker\\Private\\AutomationAnalytics.cpp"
                         ,0x2c,L"FAutomationAnalytics::Initialize called more than once."), bVar5))
  {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar6 = ::FName::FName(&local_res8,"AnalyticsET");
  FVar1 = *pFVar6;
  this = FModuleManager::Get();
  pIVar7 = FModuleManager::LoadModuleChecked(this,FVar1);
  pcVar3 = *(code **)((longlong)*pIVar7 + 0x48);
  pFVar8 = ::FString::FString(&local_30,L"https://datarouter.ol.epicgames.com/");
  ::FString::PrintfImpl(&local_138,L"AutomationAnalytics.%s");
  local_108 = (pFVar8->Data).AllocatorInstance.Data;
  (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_100 = (pFVar8->Data).ArrayNum;
  local_fc = (pFVar8->Data).ArrayMax;
  (pFVar8->Data).ArrayNum = 0;
  (pFVar8->Data).ArrayMax = 0;
  local_84 = 0xffffffff;
  local_8c = 0xffffffffbf800000;
  local_90 = 0;
  local_98 = 0;
  local_a0 = (void *)0x0;
  local_a8 = 0;
  local_b0 = (void *)0x0;
  local_b8 = 0x100;
  local_c0 = 0;
  local_c8 = (void *)0x0;
  local_d0 = 0;
  local_d8 = (FString *)0x0;
  local_e0 = 0;
  local_e8 = (void *)0x0;
  local_f0 = 0;
  local_f8 = (void *)0x0;
  local_10c = local_138.Data.ArrayMax;
  local_110 = local_138.Data.ArrayNum;
  local_118 = local_138.Data.AllocatorInstance.Data;
  local_138.Data.ArrayNum = 0;
  local_138.Data.ArrayMax = 0;
  local_138.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar2 = (pFVar8->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FString,int>((FString *)0x0,0);
  pTVar9 = (TSharedPtr<IAnalyticsProviderET,1> *)(*pcVar3)(pIVar7,local_70,&local_118);
  if (pTVar9 != &Analytics) {
    Analytics.Object = pTVar9->Object;
    pTVar9->Object = (IAnalyticsProviderET *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&Analytics.SharedReferenceCount,&pTVar9->SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_68);
  if (local_a0 != (void *)0x0) {
    FMemory::Free(local_a0);
  }
  if (local_b0 != (void *)0x0) {
    FMemory::Free(local_b0);
  }
  if (local_c8 != (void *)0x0) {
    FMemory::Free(local_c8);
  }
  DestructItems<FString,int>(local_d8,(int)local_d0);
  if (local_d8 != (FString *)0x0) {
    FMemory::Free(local_d8);
  }
  if (local_e8 != (void *)0x0) {
    FMemory::Free(local_e8);
  }
  if (local_f8 != (void *)0x0) {
    FMemory::Free(local_f8);
  }
  if (local_108 != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108);
  }
  if (local_118 != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118);
  }
  if (Analytics.Object != (IAnalyticsProviderET *)0x0) {
    if ((Analytics.Object == (IAnalyticsProviderET *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pIVar4 = Analytics.Object;
    pcVar3 = *(code **)((Analytics.Object)->_padding_ + 0x28);
    FWindowsPlatformMisc::GetOperatingSystemId(&local_40);
    FGenericPlatformMisc::GetEpicAccountId(&local_50);
    FGenericPlatformMisc::GetLoginId(&local_60);
    ::FString::PrintfImpl(&local_80,L"%s|%s|%s");
    (*pcVar3)(pIVar4,&local_80);
    if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data.AllocatorInstance.Data);
    }
    if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Data.AllocatorInstance.Data);
    }
    if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
    }
    if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
    if ((Analytics.Object == (IAnalyticsProviderET *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_128 = (FAnalyticsEventAttribute *)0x0;
    local_120 = 0;
    (**(code **)(Analytics.Object)->_padding_)(Analytics.Object,&local_128);
    DestructItems<FAnalyticsEventAttribute,int>(local_128,(int)local_120);
    if (local_128 != (FAnalyticsEventAttribute *)0x0) {
      FMemory::Free(local_128);
    }
    pwVar10 = FCommandLine::Get();
    pwVar11 = L"60hzmin";
    bVar5 = FParse::Param(pwVar10,L"60hzmin");
    if (!bVar5) {
      pwVar10 = FCommandLine::Get();
      bVar5 = FParse::Param(pwVar10,L"30hzmin");
      pwVar11 = L"";
      if (bVar5) {
        pwVar11 = L"30hzmin";
      }
    }
    ::FString::operator=(&MachineSpec,pwVar11);
    bIsInitialized = true;
    InititalizeAnalyticParameterNames();
  }
  return;
}

// InititalizeAnalyticParameterNames @ 148c06cd0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FAutomationAnalytics::InititalizeAnalyticParameterNames(void)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  if (AutomationEventNames.ArrayMax < 2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,2,&AutomationEventNames.AllocatorInstance,AutomationEventNames.ArrayNum,
               &AutomationEventNames.ArrayMax);
  }
  TArray<FString,TSizedDefaultAllocator<32>_>::SetNum(&AutomationEventNames,2,Default);
  uVar4 = 0;
  if ((AutomationEventNames.ArrayNum < 1) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  ::FString::operator=((FString *)AutomationEventNames.AllocatorInstance.Data,L"FPSCapture");
  if ((AutomationEventNames.ArrayNum < 2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  ::FString::operator=
            ((FString *)(AutomationEventNames.AllocatorInstance.Data + 0x10),L"AutomationTest");
  if ((AutomationEventNames.ArrayNum < 1) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((*(int *)(AutomationEventNames.AllocatorInstance.Data + 8) < 2) &&
     (1 < (byte)LogAutomationAnalytics._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAutomationAnalytics);
  }
  if ((AutomationEventNames.ArrayNum < 2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((*(int *)(AutomationEventNames.AllocatorInstance.Data + 0x18) < 2) &&
     (1 < (byte)LogAutomationAnalytics._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAutomationAnalytics);
  }
  if (AutomationParamNames.ArrayMax < 0x14) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0x14,&AutomationParamNames.AllocatorInstance,AutomationParamNames.ArrayNum,
               &AutomationParamNames.ArrayMax);
  }
  TArray<FString,TSizedDefaultAllocator<32>_>::SetNum(&AutomationParamNames,0x14,Default);
  if ((AutomationParamNames.ArrayNum < 1) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  ::FString::operator=((FString *)AutomationParamNames.AllocatorInstance.Data,L"MapName");
  if ((AutomationParamNames.ArrayNum < 2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  ::FString::operator=((FString *)(AutomationParamNames.AllocatorInstance.Data + 0x10),L"TimeStamp")
  ;
  if ((AutomationParamNames.ArrayNum < 3) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  ::FString::operator=((FString *)(AutomationParamNames.AllocatorInstance.Data + 0x20),L"Platform");
  if ((AutomationParamNames.ArrayNum < 4) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  ::FString::operator=((FString *)(AutomationParamNames.AllocatorInstance.Data + 0x30),L"Spec");
  if ((AutomationParamNames.ArrayNum < 5) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  ::FString::operator=((FString *)(AutomationParamNames.AllocatorInstance.Data + 0x40),L"CL");
  if ((AutomationParamNames.ArrayNum < 6) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  ::FString::operator=((FString *)(AutomationParamNames.AllocatorInstance.Data + 0x50),L"FPS");
  if ((AutomationParamNames.ArrayNum < 7) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  ::FString::operator=
            ((FString *)(AutomationParamNames.AllocatorInstance.Data + 0x60),L"BuildConfiguration");
  if ((AutomationParamNames.ArrayNum < 8) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  ::FString::operator=
            ((FString *)(AutomationParamNames.AllocatorInstance.Data + 0x70),L"AverageFrameTime");
  if ((AutomationParamNames.ArrayNum < 9) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  ::FString::operator=
            ((FString *)(AutomationParamNames.AllocatorInstance.Data + 0x80),
             L"AverageGameThreadTime");
  if ((AutomationParamNames.ArrayNum < 10) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  ::FString::operator=
            ((FString *)(AutomationParamNames.AllocatorInstance.Data + 0x90),
             L"AverageRenderThreadTime");
  if ((AutomationParamNames.ArrayNum < 0xb) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  ::FString::operator=
            ((FString *)(AutomationParamNames.AllocatorInstance.Data + 0xa0),L"AverageGPUTime");
  if ((AutomationParamNames.ArrayNum < 0xc) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  ::FString::operator=
            ((FString *)(AutomationParamNames.AllocatorInstance.Data + 0xb0),
             L"PercentOfFramesAtLeast30FPS");
  if ((AutomationParamNames.ArrayNum < 0xd) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  ::FString::operator=
            ((FString *)(AutomationParamNames.AllocatorInstance.Data + 0xc0),
             L"PercentOfFramesAtLeast60FPS");
  if ((AutomationParamNames.ArrayNum < 0xe) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  ::FString::operator=((FString *)(AutomationParamNames.AllocatorInstance.Data + 0xd0),L"TestName");
  if ((AutomationParamNames.ArrayNum < 0xf) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  ::FString::operator=
            ((FString *)(AutomationParamNames.AllocatorInstance.Data + 0xe0),L"BeautifiedName");
  if ((AutomationParamNames.ArrayNum < 0x10) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  ::FString::operator=
            ((FString *)(AutomationParamNames.AllocatorInstance.Data + 0xf0),L"ExecutionCount");
  if ((AutomationParamNames.ArrayNum < 0x11) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  ::FString::operator=
            ((FString *)(AutomationParamNames.AllocatorInstance.Data + 0x100),L"IsSuccess");
  if ((AutomationParamNames.ArrayNum < 0x12) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  ::FString::operator=((FString *)(AutomationParamNames.AllocatorInstance.Data + 0x110),L"Duration")
  ;
  if ((AutomationParamNames.ArrayNum < 0x13) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  ::FString::operator=
            ((FString *)(AutomationParamNames.AllocatorInstance.Data + 0x120),L"ErrorCount");
  if ((AutomationParamNames.ArrayNum < 0x14) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  ::FString::operator=
            ((FString *)(AutomationParamNames.AllocatorInstance.Data + 0x130),L"WarningCount");
  uVar5 = uVar4;
  do {
    if ((AutomationParamNames.ArrayNum <= (int)uVar4) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((*(int *)(AutomationParamNames.AllocatorInstance.Data + uVar5 + 8) < 2) &&
       (1 < (byte)LogAutomationAnalytics._0_1_)) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAutomationAnalytics);
    }
    uVar3 = (int)uVar4 + 1;
    uVar4 = (ulonglong)uVar3;
    uVar5 = uVar5 + 0x10;
  } while ((int)uVar3 < 0x14);
  return;
}

// IsAvailable @ 148c07680

bool __cdecl FAutomationAnalytics::IsAvailable(void)

{
  return Analytics.Object != (IAnalyticsProviderET *)0x0;
}

// IsInitialized @ 148c076a0

bool __cdecl FAutomationAnalytics::IsInitialized(void)

{
  return bIsInitialized;
}

// SetInitialParameters @ 148c090d0

/* WARNING: Removing unreachable block (ram,0x000148c092ef) */
/* WARNING: Removing unreachable block (ram,0x000148c094f9) */
/* WARNING: Removing unreachable block (ram,0x000148c092fd) */
/* WARNING: Removing unreachable block (ram,0x000148c09507) */

void __cdecl
FAutomationAnalytics::SetInitialParameters
          (TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  int iVar4;
  int iVar5;
  FString *pFVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  longlong lVar9;
  FScriptContainerElement *local_b8;
  undefined8 local_b0;
  ForAnyElementType local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  FScriptContainerElement local_90;
  undefined4 local_8c;
  FScriptContainerElement *local_88;
  undefined8 local_80;
  FString local_78;
  undefined8 local_68;
  FScriptContainerElement local_60;
  undefined4 local_5c;
  FString local_58;
  FString local_48;
  FString local_38 [2];
  
  ::FString::FString(&local_58,"Windows");
  iVar5 = local_58.Data.ArrayNum;
  _Src.Data = local_58.Data.AllocatorInstance.Data;
  lVar9 = (longlong)local_58.Data.ArrayNum;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  pFVar6 = GetAutomationParamName(&local_48,TimeStamp);
  if (((pFVar6->Data).ArrayNum < 2) ||
     (iVar4 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar6->Data).AllocatorInstance.Data,L"EventName"), iVar4 == 0)
     ) {
LAB_148c09179:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidAttributeName(InName)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                       ,0x78,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    if ((pFVar6->Data).ArrayNum == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    }
    iVar4 = FGenericPlatformStricmp::Stricmp(pwVar8,L"DateOffset");
    if (iVar4 == 0) goto LAB_148c09179;
  }
  local_88 = (pFVar6->Data).AllocatorInstance.Data;
  (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_80._0_4_ = (pFVar6->Data).ArrayNum;
  local_80._4_4_ = (pFVar6->Data).ArrayMax;
  (pFVar6->Data).ArrayNum = 0;
  (pFVar6->Data).ArrayMax = 0;
  ::FString::PrintfImpl(&local_78,L"%d");
  local_60 = (FScriptContainerElement)0x0;
  local_68 = 0;
  local_5c = 4;
  pFVar1 = (pFVar6->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (param_1->AllocatorInstance).Data;
  if (((pFVar1 <= (FScriptContainerElement *)&local_88) &&
      ((FScriptContainerElement *)&local_88 < pFVar1 + (longlong)param_1->ArrayMax * 0x30)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = param_1->ArrayNum;
  if (iVar4 == param_1->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  lVar7 = (longlong)iVar4;
  param_1->ArrayNum = iVar4 + 1;
  pFVar1 = (param_1->AllocatorInstance).Data;
  *(undefined8 *)(pFVar1 + lVar7 * 0x30) = 0;
  *(FScriptContainerElement **)(pFVar1 + lVar7 * 0x30) = local_88;
  *(undefined4 *)(pFVar1 + lVar7 * 0x30 + 8) = (undefined4)local_80;
  *(undefined4 *)(pFVar1 + lVar7 * 0x30 + 0xc) = local_80._4_4_;
  *(undefined8 *)(pFVar1 + lVar7 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(pFVar1 + lVar7 * 0x30 + 0x10) = local_78.Data.AllocatorInstance.Data
  ;
  *(int *)(pFVar1 + lVar7 * 0x30 + 0x18) = local_78.Data.ArrayNum;
  *(int *)(pFVar1 + lVar7 * 0x30 + 0x1c) = local_78.Data.ArrayMax;
  *(undefined8 *)(pFVar1 + lVar7 * 0x30 + 0x20) = local_68;
  pFVar1[lVar7 * 0x30 + 0x28] = local_60;
  *(undefined4 *)(pFVar1 + lVar7 * 0x30 + 0x2c) = local_5c;
  local_78.Data.ArrayNum = 0;
  local_78.Data.ArrayMax = 0;
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_80 = 0;
  local_88 = (FScriptContainerElement *)0x0;
  pFVar6 = GetAutomationParamName(local_38,Platform);
  if ((1 < (pFVar6->Data).ArrayNum) &&
     (iVar4 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar6->Data).AllocatorInstance.Data,L"EventName"), iVar4 != 0)
     ) {
    if ((pFVar6->Data).ArrayNum == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    }
    iVar4 = FGenericPlatformStricmp::Stricmp(pwVar8,L"DateOffset");
    if (iVar4 != 0) goto LAB_148c09374;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValidAttributeName(InName)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                     ,0x78,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_148c09374:
  local_b8 = (pFVar6->Data).AllocatorInstance.Data;
  (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b0._0_4_ = (pFVar6->Data).ArrayNum;
  local_b0._4_4_ = (pFVar6->Data).ArrayMax;
  (pFVar6->Data).ArrayNum = 0;
  (pFVar6->Data).ArrayMax = 0;
  local_a8.Data = (FScriptContainerElement *)0x0;
  local_a0 = CONCAT44(local_a0._4_4_,iVar5);
  if (iVar5 == 0) {
    local_a0 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar5,0,&local_a8,iVar5,(int *)((longlong)&local_a0 + 4));
    memcpy(local_a8.Data,_Src.Data,lVar9 * 2);
  }
  local_98 = 0;
  local_90 = (FScriptContainerElement)0x0;
  local_8c = 0;
  pFVar1 = (pFVar6->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (param_1->AllocatorInstance).Data;
  if (((pFVar1 <= (FScriptContainerElement *)&local_b8) &&
      ((FScriptContainerElement *)&local_b8 < pFVar1 + (longlong)param_1->ArrayMax * 0x30)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar5 = param_1->ArrayNum;
  if (iVar5 == param_1->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  lVar9 = (longlong)iVar5;
  param_1->ArrayNum = iVar5 + 1;
  pFVar1 = (param_1->AllocatorInstance).Data;
  *(undefined8 *)(pFVar1 + lVar9 * 0x30) = 0;
  *(FScriptContainerElement **)(pFVar1 + lVar9 * 0x30) = local_b8;
  *(undefined4 *)(pFVar1 + lVar9 * 0x30 + 8) = (undefined4)local_b0;
  *(undefined4 *)(pFVar1 + lVar9 * 0x30 + 0xc) = local_b0._4_4_;
  *(undefined8 *)(pFVar1 + lVar9 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(pFVar1 + lVar9 * 0x30 + 0x10) = local_a8.Data;
  *(undefined4 *)(pFVar1 + lVar9 * 0x30 + 0x18) = (undefined4)local_a0;
  *(undefined4 *)(pFVar1 + lVar9 * 0x30 + 0x1c) = local_a0._4_4_;
  *(undefined8 *)(pFVar1 + lVar9 * 0x30 + 0x20) = local_98;
  pFVar1[lVar9 * 0x30 + 0x28] = local_90;
  *(undefined4 *)(pFVar1 + lVar9 * 0x30 + 0x2c) = local_8c;
  local_a0 = 0;
  local_a8.Data = (FScriptContainerElement *)0x0;
  local_b0 = 0;
  local_b8 = (FScriptContainerElement *)0x0;
  if (_Src.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(_Src.Data);
  }
  return;
}

// Shutdown @ 148c09550

void __cdecl FAutomationAnalytics::Shutdown(void)

{
  FSharedReferencer<1> local_10 [2];
  
  local_10[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
  Analytics.Object = (IAnalyticsProviderET *)0x0;
  SharedPointerInternals::FSharedReferencer<1>::operator=(&Analytics.SharedReferenceCount,local_10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_10[0].ReferenceController);
  bIsInitialized = false;
  return;
}

