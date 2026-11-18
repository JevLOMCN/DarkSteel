// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// HandleBasicStats @ 14770b720

/* WARNING: Removing unreachable block (ram,0x00014770c3c2) */
/* WARNING: Removing unreachable block (ram,0x00014770bf6c) */
/* WARNING: Removing unreachable block (ram,0x00014770bb06) */
/* WARNING: Removing unreachable block (ram,0x00014770b922) */
/* WARNING: Removing unreachable block (ram,0x00014770bd22) */
/* WARNING: Removing unreachable block (ram,0x00014770c1b5) */
/* WARNING: Removing unreachable block (ram,0x00014770dd43) */
/* WARNING: Removing unreachable block (ram,0x00014770c3d0) */
/* WARNING: Removing unreachable block (ram,0x00014770bf7a) */
/* WARNING: Removing unreachable block (ram,0x00014770bb14) */
/* WARNING: Removing unreachable block (ram,0x00014770b930) */
/* WARNING: Removing unreachable block (ram,0x00014770bd31) */
/* WARNING: Removing unreachable block (ram,0x00014770c1c3) */
/* WARNING: Removing unreachable block (ram,0x00014770dd51) */

void __thiscall FDumpFPSChartToAnalyticsArray::HandleBasicStats(FDumpFPSChartToAnalyticsArray *this)

{
  TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  FAnalyticsEventAttribute *pFVar3;
  code *pcVar4;
  bool bVar5;
  EBuildConfiguration EVar6;
  int iVar7;
  FString *pFVar8;
  longlong lVar9;
  wchar_t *pwVar10;
  FDateTime this_00;
  FString *pFVar11;
  FAnalyticsEventAttribute *pFVar12;
  wchar_t *pwVar13;
  FScriptContainerElement *local_ab8;
  undefined8 local_ab0;
  FScriptContainerElement *local_aa8;
  undefined8 local_aa0;
  undefined8 local_a98;
  FScriptContainerElement local_a90;
  undefined4 local_a8c;
  FScriptContainerElement *local_a88;
  undefined8 local_a80;
  FScriptContainerElement *local_a78;
  undefined8 local_a70;
  undefined8 local_a68;
  FScriptContainerElement local_a60;
  undefined4 local_a5c;
  FScriptContainerElement *local_a58;
  undefined8 local_a50;
  FScriptContainerElement *local_a48;
  undefined8 local_a40;
  undefined8 local_a38;
  FScriptContainerElement local_a30;
  undefined4 local_a2c;
  FScriptContainerElement *local_a28;
  undefined8 local_a20;
  FScriptContainerElement *local_a18;
  undefined8 local_a10;
  undefined8 local_a08;
  FScriptContainerElement local_a00;
  undefined4 local_9fc;
  FScriptContainerElement *local_9f8;
  undefined8 local_9f0;
  FString local_9e8;
  undefined8 local_9d8;
  FScriptContainerElement local_9d0;
  undefined4 local_9cc;
  FScriptContainerElement *local_9c8;
  undefined8 local_9c0;
  FString local_9b8;
  undefined8 local_9a8;
  FScriptContainerElement local_9a0;
  undefined4 local_99c;
  FScriptContainerElement *local_998;
  undefined8 local_990;
  FString local_988;
  undefined8 local_978;
  FScriptContainerElement local_970;
  undefined4 local_96c;
  FString local_968;
  FString local_958;
  FString local_948;
  FString local_938;
  FString local_928;
  FString local_918;
  FString local_908;
  FString local_8f8;
  FString local_8e8;
  FString local_8d8;
  FString local_8c8;
  FString local_8b8;
  FString local_8a8;
  FString local_898;
  FString local_888;
  FString local_878;
  FString local_868;
  FString local_858;
  FString local_848;
  FString local_838;
  FString local_828;
  FString local_818;
  FString local_808;
  FString local_7f8;
  FString local_7e8;
  FString local_7d8;
  FString local_7c8;
  FString local_7b8;
  FString local_7a8;
  FString local_798;
  FString local_788;
  FString local_778;
  FString local_768;
  FString local_758;
  FString local_748;
  FString local_738;
  FString local_728;
  FString local_718;
  FString local_708;
  FString local_6f8;
  FString local_6e8;
  FString local_6d8;
  FString local_6c8;
  FString local_6b8;
  FString local_6a8;
  FString local_698;
  FString local_688;
  FString local_678;
  FString local_668;
  FString local_658;
  FString local_648;
  FString local_638;
  FString local_628;
  FString local_618;
  FString local_608;
  FString local_5f8;
  FString local_5e8;
  FString local_5d8;
  FAnalyticsEventAttribute local_5c8;
  FAnalyticsEventAttribute local_598;
  FAnalyticsEventAttribute local_568;
  FAnalyticsEventAttribute local_538;
  FAnalyticsEventAttribute local_508;
  FAnalyticsEventAttribute local_4d8;
  FAnalyticsEventAttribute local_4a8;
  FAnalyticsEventAttribute local_478;
  FAnalyticsEventAttribute local_448;
  FAnalyticsEventAttribute local_418;
  FAnalyticsEventAttribute local_3e8;
  FAnalyticsEventAttribute local_3b8;
  FAnalyticsEventAttribute local_388;
  FAnalyticsEventAttribute local_358;
  FAnalyticsEventAttribute local_328;
  FAnalyticsEventAttribute local_2f8;
  FAnalyticsEventAttribute local_2c8;
  FAnalyticsEventAttribute local_298;
  FAnalyticsEventAttribute local_268;
  FAnalyticsEventAttribute local_238;
  FAnalyticsEventAttribute local_208;
  FAnalyticsEventAttribute local_1d8;
  FAnalyticsEventAttribute local_1a8;
  FAnalyticsEventAttribute local_178;
  FAnalyticsEventAttribute local_148;
  FAnalyticsEventAttribute local_118;
  FAnalyticsEventAttribute local_e8;
  FAnalyticsEventAttribute local_b8;
  FAnalyticsEventAttribute local_88;
  FAnalyticsEventAttribute local_58;
  
  pTVar1 = this->ParamArray;
  GetChangeListNumberForPerfTesting();
  pFVar8 = ::FString::FString(&local_628,L"ChangeList");
  if (((pFVar8->Data).ArrayNum < 2) ||
     (iVar7 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar8->Data).AllocatorInstance.Data,L"EventName"), iVar7 == 0)
     ) {
LAB_14770b7a9:
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidAttributeName(InName)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                       ,0x78,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
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
    iVar7 = FGenericPlatformStricmp::Stricmp(pwVar10,L"DateOffset");
    if (iVar7 == 0) goto LAB_14770b7a9;
  }
  local_9f8 = (pFVar8->Data).AllocatorInstance.Data;
  (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_9f0._0_4_ = (pFVar8->Data).ArrayNum;
  local_9f0._4_4_ = (pFVar8->Data).ArrayMax;
  (pFVar8->Data).ArrayNum = 0;
  (pFVar8->Data).ArrayMax = 0;
  ::FString::PrintfImpl(&local_9e8,L"%d");
  local_9d0 = (FScriptContainerElement)0x0;
  local_9d8 = 0;
  local_9cc = 4;
  pFVar2 = (pFVar8->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  if (((pFVar2 <= (FScriptContainerElement *)&local_9f8) &&
      ((FScriptContainerElement *)&local_9f8 < pFVar2 + (longlong)pTVar1->ArrayMax * 0x30)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar7 = pTVar1->ArrayNum;
  if (iVar7 == pTVar1->ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&pTVar1->AllocatorInstance,&pTVar1->ArrayMax);
  }
  lVar9 = (longlong)iVar7;
  pTVar1->ArrayNum = iVar7 + 1;
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  *(undefined8 *)(pFVar2 + lVar9 * 0x30) = 0;
  *(FScriptContainerElement **)(pFVar2 + lVar9 * 0x30) = local_9f8;
  *(undefined4 *)(pFVar2 + lVar9 * 0x30 + 8) = (undefined4)local_9f0;
  *(undefined4 *)(pFVar2 + lVar9 * 0x30 + 0xc) = local_9f0._4_4_;
  *(undefined8 *)(pFVar2 + lVar9 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(pFVar2 + lVar9 * 0x30 + 0x10) =
       local_9e8.Data.AllocatorInstance.Data;
  *(int *)(pFVar2 + lVar9 * 0x30 + 0x18) = local_9e8.Data.ArrayNum;
  *(int *)(pFVar2 + lVar9 * 0x30 + 0x1c) = local_9e8.Data.ArrayMax;
  *(undefined8 *)(pFVar2 + lVar9 * 0x30 + 0x20) = local_9d8;
  pFVar2[lVar9 * 0x30 + 0x28] = local_9d0;
  *(undefined4 *)(pFVar2 + lVar9 * 0x30 + 0x2c) = local_9cc;
  local_9e8.Data.ArrayNum = 0;
  local_9e8.Data.ArrayMax = 0;
  local_9e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_9f0 = 0;
  local_9f8 = (FScriptContainerElement *)0x0;
  pTVar1 = this->ParamArray;
  EVar6 = FApp::GetBuildConfiguration();
  pwVar10 = ::LexToString(EVar6);
  pFVar8 = ::FString::FString(&local_618,L"BuildType");
  if (((pFVar8->Data).ArrayNum < 2) ||
     (iVar7 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar8->Data).AllocatorInstance.Data,L"EventName"), iVar7 == 0)
     ) {
LAB_14770b99d:
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidAttributeName(InName)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                       ,0x78,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    if ((pFVar8->Data).ArrayNum == 0) {
      pwVar13 = L"";
    }
    else {
      pwVar13 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
    }
    iVar7 = FGenericPlatformStricmp::Stricmp(pwVar13,L"DateOffset");
    if (iVar7 == 0) goto LAB_14770b99d;
  }
  local_9c8 = (pFVar8->Data).AllocatorInstance.Data;
  (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_9c0._0_4_ = (pFVar8->Data).ArrayNum;
  local_9c0._4_4_ = (pFVar8->Data).ArrayMax;
  (pFVar8->Data).ArrayNum = 0;
  (pFVar8->Data).ArrayMax = 0;
  ::FString::FString(&local_9b8,pwVar10);
  local_9a8 = 0;
  local_9a0 = (FScriptContainerElement)0x0;
  local_99c = 0;
  pFVar2 = (pFVar8->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  if (((pFVar2 <= (FScriptContainerElement *)&local_9c8) &&
      ((FScriptContainerElement *)&local_9c8 < pFVar2 + (longlong)pTVar1->ArrayMax * 0x30)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar7 = pTVar1->ArrayNum;
  if (iVar7 == pTVar1->ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&pTVar1->AllocatorInstance,&pTVar1->ArrayMax);
  }
  lVar9 = (longlong)iVar7;
  pTVar1->ArrayNum = iVar7 + 1;
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  *(undefined8 *)(pFVar2 + lVar9 * 0x30) = 0;
  *(FScriptContainerElement **)(pFVar2 + lVar9 * 0x30) = local_9c8;
  *(undefined4 *)(pFVar2 + lVar9 * 0x30 + 8) = (undefined4)local_9c0;
  *(undefined4 *)(pFVar2 + lVar9 * 0x30 + 0xc) = local_9c0._4_4_;
  *(undefined8 *)(pFVar2 + lVar9 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(pFVar2 + lVar9 * 0x30 + 0x10) =
       local_9b8.Data.AllocatorInstance.Data;
  *(int *)(pFVar2 + lVar9 * 0x30 + 0x18) = local_9b8.Data.ArrayNum;
  *(int *)(pFVar2 + lVar9 * 0x30 + 0x1c) = local_9b8.Data.ArrayMax;
  *(undefined8 *)(pFVar2 + lVar9 * 0x30 + 0x20) = local_9a8;
  pFVar2[lVar9 * 0x30 + 0x28] = local_9a0;
  *(undefined4 *)(pFVar2 + lVar9 * 0x30 + 0x2c) = local_99c;
  local_9b8.Data.ArrayNum = 0;
  local_9b8.Data.ArrayMax = 0;
  local_9b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_9c0 = 0;
  local_9c8 = (FScriptContainerElement *)0x0;
  pTVar1 = this->ParamArray;
  this_00 = FDateTime::Now();
  pFVar8 = FDateTime::ToString((FDateTime *)this_00.Ticks,&local_828);
  pFVar11 = ::FString::FString(&local_608,L"DateStamp");
  if (((pFVar11->Data).ArrayNum < 2) ||
     (iVar7 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar11->Data).AllocatorInstance.Data,L"EventName"), iVar7 == 0
     )) {
LAB_14770bb8f:
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidAttributeName(InName)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                       ,0x78,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    if ((pFVar11->Data).ArrayNum == 0) {
      pwVar10 = L"";
    }
    else {
      pwVar10 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
    }
    iVar7 = FGenericPlatformStricmp::Stricmp(pwVar10,L"DateOffset");
    if (iVar7 == 0) goto LAB_14770bb8f;
  }
  local_ab8 = (pFVar11->Data).AllocatorInstance.Data;
  (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_ab0._0_4_ = (pFVar11->Data).ArrayNum;
  local_ab0._4_4_ = (pFVar11->Data).ArrayMax;
  (pFVar11->Data).ArrayNum = 0;
  (pFVar11->Data).ArrayMax = 0;
  local_aa8 = (pFVar8->Data).AllocatorInstance.Data;
  (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_aa0._0_4_ = (pFVar8->Data).ArrayNum;
  local_aa0._4_4_ = (pFVar8->Data).ArrayMax;
  (pFVar8->Data).ArrayNum = 0;
  (pFVar8->Data).ArrayMax = 0;
  local_a98 = 0;
  local_a90 = (FScriptContainerElement)0x0;
  local_a8c = 0;
  pFVar2 = (pFVar11->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  if (((pFVar2 <= (FScriptContainerElement *)&local_ab8) &&
      ((FScriptContainerElement *)&local_ab8 < pFVar2 + (longlong)pTVar1->ArrayMax * 0x30)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar7 = pTVar1->ArrayNum;
  if (iVar7 == pTVar1->ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&pTVar1->AllocatorInstance,&pTVar1->ArrayMax);
  }
  lVar9 = (longlong)iVar7;
  pTVar1->ArrayNum = iVar7 + 1;
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  *(undefined8 *)(pFVar2 + lVar9 * 0x30) = 0;
  *(FScriptContainerElement **)(pFVar2 + lVar9 * 0x30) = local_ab8;
  *(undefined4 *)(pFVar2 + lVar9 * 0x30 + 8) = (undefined4)local_ab0;
  *(undefined4 *)(pFVar2 + lVar9 * 0x30 + 0xc) = local_ab0._4_4_;
  *(undefined8 *)(pFVar2 + lVar9 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(pFVar2 + lVar9 * 0x30 + 0x10) = local_aa8;
  *(undefined4 *)(pFVar2 + lVar9 * 0x30 + 0x18) = (undefined4)local_aa0;
  *(undefined4 *)(pFVar2 + lVar9 * 0x30 + 0x1c) = local_aa0._4_4_;
  *(undefined8 *)(pFVar2 + lVar9 * 0x30 + 0x20) = local_a98;
  pFVar2[lVar9 * 0x30 + 0x28] = local_a90;
  *(undefined4 *)(pFVar2 + lVar9 * 0x30 + 0x2c) = local_a8c;
  local_aa0 = 0;
  local_aa8 = (FScriptContainerElement *)0x0;
  local_ab0 = 0;
  local_ab8 = (FScriptContainerElement *)0x0;
  if (local_828.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_828.Data.AllocatorInstance.Data);
  }
  pTVar1 = this->ParamArray;
  ::FString::PrintfImpl(&local_968,L"%s %s");
  pFVar8 = ::FString::FString(&local_5f8,L"OS");
  if (((pFVar8->Data).ArrayNum < 2) ||
     (iVar7 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar8->Data).AllocatorInstance.Data,L"EventName"), iVar7 == 0)
     ) {
LAB_14770bde4:
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidAttributeName(InName)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                       ,0x78,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
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
    iVar7 = FGenericPlatformStricmp::Stricmp(pwVar10,L"DateOffset");
    if (iVar7 == 0) goto LAB_14770bde4;
  }
  local_a88 = (pFVar8->Data).AllocatorInstance.Data;
  (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a80._0_4_ = (pFVar8->Data).ArrayNum;
  local_a80._4_4_ = (pFVar8->Data).ArrayMax;
  (pFVar8->Data).ArrayNum = 0;
  (pFVar8->Data).ArrayMax = 0;
  local_a78 = local_968.Data.AllocatorInstance.Data;
  local_a70._0_4_ = local_968.Data.ArrayNum;
  local_a70._4_4_ = local_968.Data.ArrayMax;
  local_968.Data.ArrayNum = 0;
  local_968.Data.ArrayMax = 0;
  local_a68 = 0;
  local_968.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a60 = (FScriptContainerElement)0x0;
  local_a5c = 0;
  pFVar2 = (pFVar8->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  if (((pFVar2 <= (FScriptContainerElement *)&local_a88) &&
      ((FScriptContainerElement *)&local_a88 < pFVar2 + (longlong)pTVar1->ArrayMax * 0x30)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar7 = pTVar1->ArrayNum;
  if (iVar7 == pTVar1->ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&pTVar1->AllocatorInstance,&pTVar1->ArrayMax);
  }
  lVar9 = (longlong)iVar7;
  pTVar1->ArrayNum = iVar7 + 1;
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  *(undefined8 *)(pFVar2 + lVar9 * 0x30) = 0;
  *(FScriptContainerElement **)(pFVar2 + lVar9 * 0x30) = local_a88;
  *(undefined4 *)(pFVar2 + lVar9 * 0x30 + 8) = (undefined4)local_a80;
  *(undefined4 *)(pFVar2 + lVar9 * 0x30 + 0xc) = local_a80._4_4_;
  *(undefined8 *)(pFVar2 + lVar9 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(pFVar2 + lVar9 * 0x30 + 0x10) = local_a78;
  *(int *)(pFVar2 + lVar9 * 0x30 + 0x18) = (int)local_a70;
  *(int *)(pFVar2 + lVar9 * 0x30 + 0x1c) = local_a70._4_4_;
  *(undefined8 *)(pFVar2 + lVar9 * 0x30 + 0x20) = local_a68;
  pFVar2[lVar9 * 0x30 + 0x28] = local_a60;
  *(undefined4 *)(pFVar2 + lVar9 * 0x30 + 0x2c) = local_a5c;
  local_a70 = 0;
  local_a78 = (FScriptContainerElement *)0x0;
  local_a80 = 0;
  local_a88 = (FScriptContainerElement *)0x0;
  if (local_968.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_968.Data.AllocatorInstance.Data);
  }
  pTVar1 = this->ParamArray;
  ::FString::PrintfImpl(&local_958,L"%s %s");
  pFVar8 = ::FString::FString(&local_5e8,L"CPU");
  if (((pFVar8->Data).ArrayNum < 2) ||
     (iVar7 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar8->Data).AllocatorInstance.Data,L"EventName"), iVar7 == 0)
     ) {
LAB_14770c02d:
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidAttributeName(InName)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                       ,0x78,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
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
    iVar7 = FGenericPlatformStricmp::Stricmp(pwVar10,L"DateOffset");
    if (iVar7 == 0) goto LAB_14770c02d;
  }
  local_a58 = (pFVar8->Data).AllocatorInstance.Data;
  (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a50._0_4_ = (pFVar8->Data).ArrayNum;
  local_a50._4_4_ = (pFVar8->Data).ArrayMax;
  (pFVar8->Data).ArrayNum = 0;
  (pFVar8->Data).ArrayMax = 0;
  local_a48 = local_958.Data.AllocatorInstance.Data;
  local_a40._0_4_ = local_958.Data.ArrayNum;
  local_a40._4_4_ = local_958.Data.ArrayMax;
  local_958.Data.ArrayNum = 0;
  local_958.Data.ArrayMax = 0;
  local_a38 = 0;
  local_958.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a30 = (FScriptContainerElement)0x0;
  local_a2c = 0;
  pFVar2 = (pFVar8->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  if (((pFVar2 <= (FScriptContainerElement *)&local_a58) &&
      ((FScriptContainerElement *)&local_a58 < pFVar2 + (longlong)pTVar1->ArrayMax * 0x30)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar7 = pTVar1->ArrayNum;
  if (iVar7 == pTVar1->ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&pTVar1->AllocatorInstance,&pTVar1->ArrayMax);
  }
  lVar9 = (longlong)iVar7;
  pTVar1->ArrayNum = iVar7 + 1;
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  *(undefined8 *)(pFVar2 + lVar9 * 0x30) = 0;
  *(FScriptContainerElement **)(pFVar2 + lVar9 * 0x30) = local_a58;
  *(undefined4 *)(pFVar2 + lVar9 * 0x30 + 8) = (undefined4)local_a50;
  *(undefined4 *)(pFVar2 + lVar9 * 0x30 + 0xc) = local_a50._4_4_;
  *(undefined8 *)(pFVar2 + lVar9 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(pFVar2 + lVar9 * 0x30 + 0x10) = local_a48;
  *(int *)(pFVar2 + lVar9 * 0x30 + 0x18) = (int)local_a40;
  *(int *)(pFVar2 + lVar9 * 0x30 + 0x1c) = local_a40._4_4_;
  *(undefined8 *)(pFVar2 + lVar9 * 0x30 + 0x20) = local_a38;
  pFVar2[lVar9 * 0x30 + 0x28] = local_a30;
  *(undefined4 *)(pFVar2 + lVar9 * 0x30 + 0x2c) = local_a2c;
  local_a40 = 0;
  local_a48 = (FScriptContainerElement *)0x0;
  local_a50 = 0;
  local_a58 = (FScriptContainerElement *)0x0;
  if (local_958.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_958.Data.AllocatorInstance.Data);
  }
  pTVar1 = this->ParamArray;
  pFVar8 = ::FString::FString(&local_5d8,L"DeviceProfile");
  if (((pFVar8->Data).ArrayNum < 2) ||
     (iVar7 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar8->Data).AllocatorInstance.Data,L"EventName"), iVar7 == 0)
     ) {
LAB_14770c231:
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidAttributeName(InName)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                       ,0x78,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
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
    iVar7 = FGenericPlatformStricmp::Stricmp(pwVar10,L"DateOffset");
    if (iVar7 == 0) goto LAB_14770c231;
  }
  local_998 = (pFVar8->Data).AllocatorInstance.Data;
  (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_990._0_4_ = (pFVar8->Data).ArrayNum;
  local_990._4_4_ = (pFVar8->Data).ArrayMax;
  (pFVar8->Data).ArrayNum = 0;
  (pFVar8->Data).ArrayMax = 0;
  ::FString::FString(&local_988,(FString *)&this->_padding_);
  local_978 = 0;
  local_970 = (FScriptContainerElement)0x0;
  local_96c = 0;
  pFVar2 = (pFVar8->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  if (((pFVar2 <= (FScriptContainerElement *)&local_998) &&
      ((FScriptContainerElement *)&local_998 < pFVar2 + (longlong)pTVar1->ArrayMax * 0x30)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar7 = pTVar1->ArrayNum;
  if (iVar7 == pTVar1->ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&pTVar1->AllocatorInstance,&pTVar1->ArrayMax);
  }
  lVar9 = (longlong)iVar7;
  pTVar1->ArrayNum = iVar7 + 1;
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  *(undefined8 *)(pFVar2 + lVar9 * 0x30) = 0;
  *(FScriptContainerElement **)(pFVar2 + lVar9 * 0x30) = local_998;
  *(undefined4 *)(pFVar2 + lVar9 * 0x30 + 8) = (undefined4)local_990;
  *(undefined4 *)(pFVar2 + lVar9 * 0x30 + 0xc) = local_990._4_4_;
  *(undefined8 *)(pFVar2 + lVar9 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(pFVar2 + lVar9 * 0x30 + 0x10) =
       local_988.Data.AllocatorInstance.Data;
  *(int *)(pFVar2 + lVar9 * 0x30 + 0x18) = local_988.Data.ArrayNum;
  *(int *)(pFVar2 + lVar9 * 0x30 + 0x1c) = local_988.Data.ArrayMax;
  *(undefined8 *)(pFVar2 + lVar9 * 0x30 + 0x20) = local_978;
  pFVar2[lVar9 * 0x30 + 0x28] = local_970;
  *(undefined4 *)(pFVar2 + lVar9 * 0x30 + 0x2c) = local_96c;
  local_988.Data.ArrayNum = 0;
  local_988.Data.ArrayMax = 0;
  local_988.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_990 = 0;
  local_998 = (FScriptContainerElement *)0x0;
  if (this->bIncludeClientHWInfo != false) {
    pTVar1 = this->ParamArray;
    pFVar8 = ::FString::FString(&local_818,L"DesktopGPU");
    pFVar12 = FAnalyticsEventAttribute::FAnalyticsEventAttribute<FString_&>
                        (&local_5c8,pFVar8,(FString *)&this->_padding_);
    pFVar3 = (FAnalyticsEventAttribute *)(pTVar1->AllocatorInstance).Data;
    if (((pFVar3 <= pFVar12) && (pFVar12 < pFVar3 + pTVar1->ArrayMax)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar7 = pTVar1->ArrayNum;
    if (iVar7 == pTVar1->ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x830,&pTVar1->AllocatorInstance,&pTVar1->ArrayMax);
    }
    pTVar1->ArrayNum = iVar7 + 1;
    FAnalyticsEventAttribute::FAnalyticsEventAttribute
              ((FAnalyticsEventAttribute *)
               ((pTVar1->AllocatorInstance).Data + (longlong)iVar7 * 0x30),pFVar12);
    if (local_5c8.AttrValueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5c8.AttrValueString.Data.AllocatorInstance.Data);
    }
    if (local_5c8.AttrName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5c8.AttrName.Data.AllocatorInstance.Data);
    }
    pTVar1 = this->ParamArray;
    pFVar8 = ::FString::FString(&local_808,L"GPUAdapter");
    pFVar12 = FAnalyticsEventAttribute::FAnalyticsEventAttribute<FString_&>
                        (&local_598,pFVar8,(FString *)&this->_padding_);
    pFVar3 = (FAnalyticsEventAttribute *)(pTVar1->AllocatorInstance).Data;
    if (((pFVar3 <= pFVar12) && (pFVar12 < pFVar3 + pTVar1->ArrayMax)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar7 = pTVar1->ArrayNum;
    if (iVar7 == pTVar1->ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x830,&pTVar1->AllocatorInstance,&pTVar1->ArrayMax);
    }
    pTVar1->ArrayNum = iVar7 + 1;
    FAnalyticsEventAttribute::FAnalyticsEventAttribute
              ((FAnalyticsEventAttribute *)
               ((pTVar1->AllocatorInstance).Data + (longlong)iVar7 * 0x30),pFVar12);
    if (local_598.AttrValueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_598.AttrValueString.Data.AllocatorInstance.Data);
    }
    if (local_598.AttrName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_598.AttrName.Data.AllocatorInstance.Data);
    }
    pTVar1 = this->ParamArray;
    pFVar8 = ::FString::FString(&local_7f8,L"ResolutionQuality");
    pFVar12 = FAnalyticsEventAttribute::FAnalyticsEventAttribute<float_&>
                        (&local_568,pFVar8,(float *)&this->_padding_);
    pFVar3 = (FAnalyticsEventAttribute *)(pTVar1->AllocatorInstance).Data;
    if (((pFVar3 <= pFVar12) && (pFVar12 < pFVar3 + pTVar1->ArrayMax)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar7 = pTVar1->ArrayNum;
    if (iVar7 == pTVar1->ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x830,&pTVar1->AllocatorInstance,&pTVar1->ArrayMax);
    }
    pTVar1->ArrayNum = iVar7 + 1;
    FAnalyticsEventAttribute::FAnalyticsEventAttribute
              ((FAnalyticsEventAttribute *)
               ((pTVar1->AllocatorInstance).Data + (longlong)iVar7 * 0x30),pFVar12);
    if (local_568.AttrValueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_568.AttrValueString.Data.AllocatorInstance.Data);
    }
    if (local_568.AttrName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_568.AttrName.Data.AllocatorInstance.Data);
    }
    pTVar1 = this->ParamArray;
    pFVar8 = ::FString::FString(&local_7e8,L"ViewDistanceQuality");
    pFVar12 = FAnalyticsEventAttribute::FAnalyticsEventAttribute<int_&>
                        (&local_538,pFVar8,(int *)((longlong)&this->_padding_ + 4));
    pFVar3 = (FAnalyticsEventAttribute *)(pTVar1->AllocatorInstance).Data;
    if (((pFVar3 <= pFVar12) && (pFVar12 < pFVar3 + pTVar1->ArrayMax)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar7 = pTVar1->ArrayNum;
    if (iVar7 == pTVar1->ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x830,&pTVar1->AllocatorInstance,&pTVar1->ArrayMax);
    }
    pTVar1->ArrayNum = iVar7 + 1;
    FAnalyticsEventAttribute::FAnalyticsEventAttribute
              ((FAnalyticsEventAttribute *)
               ((pTVar1->AllocatorInstance).Data + (longlong)iVar7 * 0x30),pFVar12);
    if (local_538.AttrValueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_538.AttrValueString.Data.AllocatorInstance.Data);
    }
    if (local_538.AttrName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_538.AttrName.Data.AllocatorInstance.Data);
    }
    pTVar1 = this->ParamArray;
    pFVar8 = ::FString::FString(&local_7d8,L"AntiAliasingQuality");
    pFVar12 = FAnalyticsEventAttribute::FAnalyticsEventAttribute<int_&>
                        (&local_508,pFVar8,(int *)&this->_padding_);
    pFVar3 = (FAnalyticsEventAttribute *)(pTVar1->AllocatorInstance).Data;
    if (((pFVar3 <= pFVar12) && (pFVar12 < pFVar3 + pTVar1->ArrayMax)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar7 = pTVar1->ArrayNum;
    if (iVar7 == pTVar1->ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x830,&pTVar1->AllocatorInstance,&pTVar1->ArrayMax);
    }
    pTVar1->ArrayNum = iVar7 + 1;
    FAnalyticsEventAttribute::FAnalyticsEventAttribute
              ((FAnalyticsEventAttribute *)
               ((pTVar1->AllocatorInstance).Data + (longlong)iVar7 * 0x30),pFVar12);
    if (local_508.AttrValueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_508.AttrValueString.Data.AllocatorInstance.Data);
    }
    if (local_508.AttrName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_508.AttrName.Data.AllocatorInstance.Data);
    }
    pTVar1 = this->ParamArray;
    pFVar8 = ::FString::FString(&local_7c8,L"ShadowQuality");
    pFVar12 = FAnalyticsEventAttribute::FAnalyticsEventAttribute<int_&>
                        (&local_4d8,pFVar8,(int *)((longlong)&this->_padding_ + 4));
    pFVar3 = (FAnalyticsEventAttribute *)(pTVar1->AllocatorInstance).Data;
    if (((pFVar3 <= pFVar12) && (pFVar12 < pFVar3 + pTVar1->ArrayMax)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar7 = pTVar1->ArrayNum;
    if (iVar7 == pTVar1->ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x830,&pTVar1->AllocatorInstance,&pTVar1->ArrayMax);
    }
    pTVar1->ArrayNum = iVar7 + 1;
    FAnalyticsEventAttribute::FAnalyticsEventAttribute
              ((FAnalyticsEventAttribute *)
               ((pTVar1->AllocatorInstance).Data + (longlong)iVar7 * 0x30),pFVar12);
    if (local_4d8.AttrValueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4d8.AttrValueString.Data.AllocatorInstance.Data);
    }
    if (local_4d8.AttrName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4d8.AttrName.Data.AllocatorInstance.Data);
    }
    pTVar1 = this->ParamArray;
    pFVar8 = ::FString::FString(&local_7b8,L"GlobalIlluminationQuality");
    pFVar12 = FAnalyticsEventAttribute::FAnalyticsEventAttribute<int_&>
                        (&local_4a8,pFVar8,(int *)&this->_padding_);
    pFVar3 = (FAnalyticsEventAttribute *)(pTVar1->AllocatorInstance).Data;
    if (((pFVar3 <= pFVar12) && (pFVar12 < pFVar3 + pTVar1->ArrayMax)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar7 = pTVar1->ArrayNum;
    if (iVar7 == pTVar1->ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x830,&pTVar1->AllocatorInstance,&pTVar1->ArrayMax);
    }
    pTVar1->ArrayNum = iVar7 + 1;
    FAnalyticsEventAttribute::FAnalyticsEventAttribute
              ((FAnalyticsEventAttribute *)
               ((pTVar1->AllocatorInstance).Data + (longlong)iVar7 * 0x30),pFVar12);
    if (local_4a8.AttrValueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4a8.AttrValueString.Data.AllocatorInstance.Data);
    }
    if (local_4a8.AttrName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4a8.AttrName.Data.AllocatorInstance.Data);
    }
    pTVar1 = this->ParamArray;
    pFVar8 = ::FString::FString(&local_7a8,L"ReflectionQuality");
    pFVar12 = FAnalyticsEventAttribute::FAnalyticsEventAttribute<int_&>
                        (&local_478,pFVar8,(int *)((longlong)&this->_padding_ + 4));
    pFVar3 = (FAnalyticsEventAttribute *)(pTVar1->AllocatorInstance).Data;
    if (((pFVar3 <= pFVar12) && (pFVar12 < pFVar3 + pTVar1->ArrayMax)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar7 = pTVar1->ArrayNum;
    if (iVar7 == pTVar1->ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x830,&pTVar1->AllocatorInstance,&pTVar1->ArrayMax);
    }
    pTVar1->ArrayNum = iVar7 + 1;
    FAnalyticsEventAttribute::FAnalyticsEventAttribute
              ((FAnalyticsEventAttribute *)
               ((pTVar1->AllocatorInstance).Data + (longlong)iVar7 * 0x30),pFVar12);
    if (local_478.AttrValueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_478.AttrValueString.Data.AllocatorInstance.Data);
    }
    if (local_478.AttrName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_478.AttrName.Data.AllocatorInstance.Data);
    }
    pTVar1 = this->ParamArray;
    pFVar8 = ::FString::FString(&local_798,L"PostProcessQuality");
    pFVar12 = FAnalyticsEventAttribute::FAnalyticsEventAttribute<int_&>
                        (&local_448,pFVar8,(int *)&this->_padding_);
    pFVar3 = (FAnalyticsEventAttribute *)(pTVar1->AllocatorInstance).Data;
    if (((pFVar3 <= pFVar12) && (pFVar12 < pFVar3 + pTVar1->ArrayMax)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar7 = pTVar1->ArrayNum;
    if (iVar7 == pTVar1->ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x830,&pTVar1->AllocatorInstance,&pTVar1->ArrayMax);
    }
    pTVar1->ArrayNum = iVar7 + 1;
    FAnalyticsEventAttribute::FAnalyticsEventAttribute
              ((FAnalyticsEventAttribute *)
               ((pTVar1->AllocatorInstance).Data + (longlong)iVar7 * 0x30),pFVar12);
    if (local_448.AttrValueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_448.AttrValueString.Data.AllocatorInstance.Data);
    }
    if (local_448.AttrName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_448.AttrName.Data.AllocatorInstance.Data);
    }
    pTVar1 = this->ParamArray;
    pFVar8 = ::FString::FString(&local_6e8,L"TextureQuality");
    pFVar12 = FAnalyticsEventAttribute::FAnalyticsEventAttribute<int_&>
                        (&local_418,pFVar8,(int *)((longlong)&this->_padding_ + 4));
    pFVar3 = (FAnalyticsEventAttribute *)(pTVar1->AllocatorInstance).Data;
    if (((pFVar3 <= pFVar12) && (pFVar12 < pFVar3 + pTVar1->ArrayMax)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar7 = pTVar1->ArrayNum;
    if (iVar7 == pTVar1->ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x830,&pTVar1->AllocatorInstance,&pTVar1->ArrayMax);
    }
    pTVar1->ArrayNum = iVar7 + 1;
    FAnalyticsEventAttribute::FAnalyticsEventAttribute
              ((FAnalyticsEventAttribute *)
               ((pTVar1->AllocatorInstance).Data + (longlong)iVar7 * 0x30),pFVar12);
    if (local_418.AttrValueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_418.AttrValueString.Data.AllocatorInstance.Data);
    }
    if (local_418.AttrName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_418.AttrName.Data.AllocatorInstance.Data);
    }
    pTVar1 = this->ParamArray;
    pFVar8 = ::FString::FString(&local_788,L"FXQuality");
    pFVar12 = FAnalyticsEventAttribute::FAnalyticsEventAttribute<int_&>
                        (&local_3e8,pFVar8,(int *)&this->_padding_);
    pFVar3 = (FAnalyticsEventAttribute *)(pTVar1->AllocatorInstance).Data;
    if (((pFVar3 <= pFVar12) && (pFVar12 < pFVar3 + pTVar1->ArrayMax)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar7 = pTVar1->ArrayNum;
    if (iVar7 == pTVar1->ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x830,&pTVar1->AllocatorInstance,&pTVar1->ArrayMax);
    }
    pTVar1->ArrayNum = iVar7 + 1;
    FAnalyticsEventAttribute::FAnalyticsEventAttribute
              ((FAnalyticsEventAttribute *)
               ((pTVar1->AllocatorInstance).Data + (longlong)iVar7 * 0x30),pFVar12);
    if (local_3e8.AttrValueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3e8.AttrValueString.Data.AllocatorInstance.Data);
    }
    if (local_3e8.AttrName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3e8.AttrName.Data.AllocatorInstance.Data);
    }
    pTVar1 = this->ParamArray;
    pFVar8 = ::FString::FString(&local_778,L"FoliageQuality");
    pFVar12 = FAnalyticsEventAttribute::FAnalyticsEventAttribute<int_&>
                        (&local_3b8,pFVar8,(int *)((longlong)&this->_padding_ + 4));
    pFVar3 = (FAnalyticsEventAttribute *)(pTVar1->AllocatorInstance).Data;
    if (((pFVar3 <= pFVar12) && (pFVar12 < pFVar3 + pTVar1->ArrayMax)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar7 = pTVar1->ArrayNum;
    if (iVar7 == pTVar1->ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x830,&pTVar1->AllocatorInstance,&pTVar1->ArrayMax);
    }
    pTVar1->ArrayNum = iVar7 + 1;
    FAnalyticsEventAttribute::FAnalyticsEventAttribute
              ((FAnalyticsEventAttribute *)
               ((pTVar1->AllocatorInstance).Data + (longlong)iVar7 * 0x30),pFVar12);
    if (local_3b8.AttrValueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3b8.AttrValueString.Data.AllocatorInstance.Data);
    }
    if (local_3b8.AttrName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3b8.AttrName.Data.AllocatorInstance.Data);
    }
    pTVar1 = this->ParamArray;
    pFVar8 = ::FString::FString(&local_768,L"ShadingQuality");
    pFVar12 = FAnalyticsEventAttribute::FAnalyticsEventAttribute<int_&>
                        (&local_388,pFVar8,(int *)&this->_padding_);
    pFVar3 = (FAnalyticsEventAttribute *)(pTVar1->AllocatorInstance).Data;
    if (((pFVar3 <= pFVar12) && (pFVar12 < pFVar3 + pTVar1->ArrayMax)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar7 = pTVar1->ArrayNum;
    if (iVar7 == pTVar1->ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x830,&pTVar1->AllocatorInstance,&pTVar1->ArrayMax);
    }
    pTVar1->ArrayNum = iVar7 + 1;
    FAnalyticsEventAttribute::FAnalyticsEventAttribute
              ((FAnalyticsEventAttribute *)
               ((pTVar1->AllocatorInstance).Data + (longlong)iVar7 * 0x30),pFVar12);
    if (local_388.AttrValueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_388.AttrValueString.Data.AllocatorInstance.Data);
    }
    if (local_388.AttrName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_388.AttrName.Data.AllocatorInstance.Data);
    }
    pTVar1 = this->ParamArray;
    ::FString::PrintfImpl(&local_938,L"%4.2f");
    pFVar8 = ::FString::FString(&local_758,L"PercentGPUBound");
    pFVar12 = FAnalyticsEventAttribute::FAnalyticsEventAttribute<FString>
                        (&local_358,pFVar8,&local_938);
    pFVar3 = (FAnalyticsEventAttribute *)(pTVar1->AllocatorInstance).Data;
    if (((pFVar3 <= pFVar12) && (pFVar12 < pFVar3 + pTVar1->ArrayMax)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar7 = pTVar1->ArrayNum;
    if (iVar7 == pTVar1->ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x830,&pTVar1->AllocatorInstance,&pTVar1->ArrayMax);
    }
    pTVar1->ArrayNum = iVar7 + 1;
    FAnalyticsEventAttribute::FAnalyticsEventAttribute
              ((FAnalyticsEventAttribute *)
               ((pTVar1->AllocatorInstance).Data + (longlong)iVar7 * 0x30),pFVar12);
    if (local_358.AttrValueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_358.AttrValueString.Data.AllocatorInstance.Data);
    }
    if (local_358.AttrName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_358.AttrName.Data.AllocatorInstance.Data);
    }
    if (local_938.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_938.Data.AllocatorInstance.Data);
    }
    pTVar1 = this->ParamArray;
    ::FString::PrintfImpl(&local_928,L"%4.2f");
    pFVar8 = ::FString::FString(&local_748,L"AvgGPUTime");
    pFVar12 = FAnalyticsEventAttribute::FAnalyticsEventAttribute<FString>
                        (&local_328,pFVar8,&local_928);
    pFVar3 = (FAnalyticsEventAttribute *)(pTVar1->AllocatorInstance).Data;
    if (((pFVar3 <= pFVar12) && (pFVar12 < pFVar3 + pTVar1->ArrayMax)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar7 = pTVar1->ArrayNum;
    if (iVar7 == pTVar1->ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x830,&pTVar1->AllocatorInstance,&pTVar1->ArrayMax);
    }
    pTVar1->ArrayNum = iVar7 + 1;
    FAnalyticsEventAttribute::FAnalyticsEventAttribute
              ((FAnalyticsEventAttribute *)
               ((pTVar1->AllocatorInstance).Data + (longlong)iVar7 * 0x30),pFVar12);
    if (local_328.AttrValueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_328.AttrValueString.Data.AllocatorInstance.Data);
    }
    if (local_328.AttrName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_328.AttrName.Data.AllocatorInstance.Data);
    }
    if (local_928.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_928.Data.AllocatorInstance.Data);
    }
  }
  pTVar1 = this->ParamArray;
  ::FString::PrintfImpl(&local_918,L"%4.2f");
  pFVar8 = ::FString::FString(&local_738,L"AvgRenderThreadTime");
  pFVar12 = FAnalyticsEventAttribute::FAnalyticsEventAttribute<FString>
                      (&local_2f8,pFVar8,&local_918);
  pFVar3 = (FAnalyticsEventAttribute *)(pTVar1->AllocatorInstance).Data;
  if (((pFVar3 <= pFVar12) && (pFVar12 < pFVar3 + pTVar1->ArrayMax)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar7 = pTVar1->ArrayNum;
  if (iVar7 == pTVar1->ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&pTVar1->AllocatorInstance,&pTVar1->ArrayMax);
  }
  lVar9 = (longlong)iVar7;
  pTVar1->ArrayNum = iVar7 + 1;
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  *(undefined8 *)(pFVar2 + lVar9 * 0x30) = 0;
  *(FScriptContainerElement **)(pFVar2 + lVar9 * 0x30) =
       (pFVar12->AttrName).Data.AllocatorInstance.Data;
  (pFVar12->AttrName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar2 + lVar9 * 0x30 + 8) = (pFVar12->AttrName).Data.ArrayNum;
  *(int *)(pFVar2 + lVar9 * 0x30 + 0xc) = (pFVar12->AttrName).Data.ArrayMax;
  (pFVar12->AttrName).Data.ArrayNum = 0;
  (pFVar12->AttrName).Data.ArrayMax = 0;
  *(undefined8 *)(pFVar2 + lVar9 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(pFVar2 + lVar9 * 0x30 + 0x10) =
       (pFVar12->AttrValueString).Data.AllocatorInstance.Data;
  (pFVar12->AttrValueString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar2 + lVar9 * 0x30 + 0x18) = (pFVar12->AttrValueString).Data.ArrayNum;
  *(int *)(pFVar2 + lVar9 * 0x30 + 0x1c) = (pFVar12->AttrValueString).Data.ArrayMax;
  (pFVar12->AttrValueString).Data.ArrayNum = 0;
  (pFVar12->AttrValueString).Data.ArrayMax = 0;
  *(double *)(pFVar2 + lVar9 * 0x30 + 0x20) = pFVar12->AttrValueNumber;
  pFVar2[lVar9 * 0x30 + 0x28] = (FScriptContainerElement)pFVar12->AttrValueBool;
  *(AttrTypeEnum *)(pFVar2 + lVar9 * 0x30 + 0x2c) = pFVar12->AttrType;
  if (local_2f8.AttrValueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2f8.AttrValueString.Data.AllocatorInstance.Data);
  }
  if (local_2f8.AttrName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2f8.AttrName.Data.AllocatorInstance.Data);
  }
  if (local_918.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_918.Data.AllocatorInstance.Data);
  }
  pTVar1 = this->ParamArray;
  ::FString::PrintfImpl(&local_908,L"%4.2f");
  pFVar8 = ::FString::FString(&local_728,L"AvgGameThreadTime");
  pFVar12 = FAnalyticsEventAttribute::FAnalyticsEventAttribute<FString>
                      (&local_2c8,pFVar8,&local_908);
  pFVar3 = (FAnalyticsEventAttribute *)(pTVar1->AllocatorInstance).Data;
  if (((pFVar3 <= pFVar12) && (pFVar12 < pFVar3 + pTVar1->ArrayMax)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar7 = pTVar1->ArrayNum;
  if (iVar7 == pTVar1->ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&pTVar1->AllocatorInstance,&pTVar1->ArrayMax);
  }
  lVar9 = (longlong)iVar7;
  pTVar1->ArrayNum = iVar7 + 1;
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  *(undefined8 *)(pFVar2 + lVar9 * 0x30) = 0;
  *(FScriptContainerElement **)(pFVar2 + lVar9 * 0x30) =
       (pFVar12->AttrName).Data.AllocatorInstance.Data;
  (pFVar12->AttrName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar2 + lVar9 * 0x30 + 8) = (pFVar12->AttrName).Data.ArrayNum;
  *(int *)(pFVar2 + lVar9 * 0x30 + 0xc) = (pFVar12->AttrName).Data.ArrayMax;
  (pFVar12->AttrName).Data.ArrayNum = 0;
  (pFVar12->AttrName).Data.ArrayMax = 0;
  *(undefined8 *)(pFVar2 + lVar9 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(pFVar2 + lVar9 * 0x30 + 0x10) =
       (pFVar12->AttrValueString).Data.AllocatorInstance.Data;
  (pFVar12->AttrValueString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar2 + lVar9 * 0x30 + 0x18) = (pFVar12->AttrValueString).Data.ArrayNum;
  *(int *)(pFVar2 + lVar9 * 0x30 + 0x1c) = (pFVar12->AttrValueString).Data.ArrayMax;
  (pFVar12->AttrValueString).Data.ArrayNum = 0;
  (pFVar12->AttrValueString).Data.ArrayMax = 0;
  *(double *)(pFVar2 + lVar9 * 0x30 + 0x20) = pFVar12->AttrValueNumber;
  pFVar2[lVar9 * 0x30 + 0x28] = (FScriptContainerElement)pFVar12->AttrValueBool;
  *(AttrTypeEnum *)(pFVar2 + lVar9 * 0x30 + 0x2c) = pFVar12->AttrType;
  if (local_2c8.AttrValueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2c8.AttrValueString.Data.AllocatorInstance.Data);
  }
  if (local_2c8.AttrName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2c8.AttrName.Data.AllocatorInstance.Data);
  }
  if (local_908.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_908.Data.AllocatorInstance.Data);
  }
  pTVar1 = this->ParamArray;
  ::FString::PrintfImpl(&local_8f8,L"%4.2f");
  pFVar8 = ::FString::FString(&local_718,L"AvgFPS");
  pFVar12 = FAnalyticsEventAttribute::FAnalyticsEventAttribute<FString>
                      (&local_298,pFVar8,&local_8f8);
  pFVar3 = (FAnalyticsEventAttribute *)(pTVar1->AllocatorInstance).Data;
  if (((pFVar3 <= pFVar12) && (pFVar12 < pFVar3 + pTVar1->ArrayMax)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar7 = pTVar1->ArrayNum;
  if (iVar7 == pTVar1->ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&pTVar1->AllocatorInstance,&pTVar1->ArrayMax);
  }
  lVar9 = (longlong)iVar7;
  pTVar1->ArrayNum = iVar7 + 1;
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  *(undefined8 *)(pFVar2 + lVar9 * 0x30) = 0;
  *(FScriptContainerElement **)(pFVar2 + lVar9 * 0x30) =
       (pFVar12->AttrName).Data.AllocatorInstance.Data;
  (pFVar12->AttrName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar2 + lVar9 * 0x30 + 8) = (pFVar12->AttrName).Data.ArrayNum;
  *(int *)(pFVar2 + lVar9 * 0x30 + 0xc) = (pFVar12->AttrName).Data.ArrayMax;
  (pFVar12->AttrName).Data.ArrayNum = 0;
  (pFVar12->AttrName).Data.ArrayMax = 0;
  *(undefined8 *)(pFVar2 + lVar9 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(pFVar2 + lVar9 * 0x30 + 0x10) =
       (pFVar12->AttrValueString).Data.AllocatorInstance.Data;
  (pFVar12->AttrValueString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar2 + lVar9 * 0x30 + 0x18) = (pFVar12->AttrValueString).Data.ArrayNum;
  *(int *)(pFVar2 + lVar9 * 0x30 + 0x1c) = (pFVar12->AttrValueString).Data.ArrayMax;
  (pFVar12->AttrValueString).Data.ArrayNum = 0;
  (pFVar12->AttrValueString).Data.ArrayMax = 0;
  *(double *)(pFVar2 + lVar9 * 0x30 + 0x20) = pFVar12->AttrValueNumber;
  pFVar2[lVar9 * 0x30 + 0x28] = (FScriptContainerElement)pFVar12->AttrValueBool;
  *(AttrTypeEnum *)(pFVar2 + lVar9 * 0x30 + 0x2c) = pFVar12->AttrType;
  if (local_298.AttrValueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_298.AttrValueString.Data.AllocatorInstance.Data);
  }
  if (local_298.AttrName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_298.AttrName.Data.AllocatorInstance.Data);
  }
  if (local_8f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8f8.Data.AllocatorInstance.Data);
  }
  pTVar1 = this->ParamArray;
  ::FString::PrintfImpl(&local_8e8,L"%4.2f");
  pFVar8 = ::FString::FString(&local_708,L"AvgFrameTime");
  pFVar12 = FAnalyticsEventAttribute::FAnalyticsEventAttribute<FString>
                      (&local_268,pFVar8,&local_8e8);
  pFVar3 = (FAnalyticsEventAttribute *)(pTVar1->AllocatorInstance).Data;
  if (((pFVar3 <= pFVar12) && (pFVar12 < pFVar3 + pTVar1->ArrayMax)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar7 = pTVar1->ArrayNum;
  if (iVar7 == pTVar1->ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&pTVar1->AllocatorInstance,&pTVar1->ArrayMax);
  }
  pTVar1->ArrayNum = iVar7 + 1;
  FAnalyticsEventAttribute::FAnalyticsEventAttribute
            ((FAnalyticsEventAttribute *)((pTVar1->AllocatorInstance).Data + (longlong)iVar7 * 0x30)
             ,pFVar12);
  if (local_268.AttrValueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_268.AttrValueString.Data.AllocatorInstance.Data);
  }
  if (local_268.AttrName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_268.AttrName.Data.AllocatorInstance.Data);
  }
  if (local_8e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8e8.Data.AllocatorInstance.Data);
  }
  pTVar1 = this->ParamArray;
  ::FString::PrintfImpl(&local_8d8,L"%4.2f");
  pFVar8 = ::FString::FString(&local_6f8,L"TimeDisregarded");
  pFVar12 = FAnalyticsEventAttribute::FAnalyticsEventAttribute<FString>
                      (&local_238,pFVar8,&local_8d8);
  pFVar3 = (FAnalyticsEventAttribute *)(pTVar1->AllocatorInstance).Data;
  if (((pFVar3 <= pFVar12) && (pFVar12 < pFVar3 + pTVar1->ArrayMax)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar7 = pTVar1->ArrayNum;
  if (iVar7 == pTVar1->ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&pTVar1->AllocatorInstance,&pTVar1->ArrayMax);
  }
  lVar9 = (longlong)iVar7;
  pTVar1->ArrayNum = iVar7 + 1;
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  *(undefined8 *)(pFVar2 + lVar9 * 0x30) = 0;
  *(FScriptContainerElement **)(pFVar2 + lVar9 * 0x30) =
       (pFVar12->AttrName).Data.AllocatorInstance.Data;
  (pFVar12->AttrName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar2 + lVar9 * 0x30 + 8) = (pFVar12->AttrName).Data.ArrayNum;
  *(int *)(pFVar2 + lVar9 * 0x30 + 0xc) = (pFVar12->AttrName).Data.ArrayMax;
  (pFVar12->AttrName).Data.ArrayNum = 0;
  (pFVar12->AttrName).Data.ArrayMax = 0;
  *(undefined8 *)(pFVar2 + lVar9 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(pFVar2 + lVar9 * 0x30 + 0x10) =
       (pFVar12->AttrValueString).Data.AllocatorInstance.Data;
  (pFVar12->AttrValueString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar2 + lVar9 * 0x30 + 0x18) = (pFVar12->AttrValueString).Data.ArrayNum;
  *(int *)(pFVar2 + lVar9 * 0x30 + 0x1c) = (pFVar12->AttrValueString).Data.ArrayMax;
  (pFVar12->AttrValueString).Data.ArrayNum = 0;
  (pFVar12->AttrValueString).Data.ArrayMax = 0;
  *(double *)(pFVar2 + lVar9 * 0x30 + 0x20) = pFVar12->AttrValueNumber;
  pFVar2[lVar9 * 0x30 + 0x28] = (FScriptContainerElement)pFVar12->AttrValueBool;
  *(AttrTypeEnum *)(pFVar2 + lVar9 * 0x30 + 0x2c) = pFVar12->AttrType;
  if (local_238.AttrValueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_238.AttrValueString.Data.AllocatorInstance.Data);
  }
  if (local_238.AttrName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_238.AttrName.Data.AllocatorInstance.Data);
  }
  if (local_8d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8d8.Data.AllocatorInstance.Data);
  }
  pTVar1 = this->ParamArray;
  ::FString::PrintfImpl(&local_8c8,L"%d");
  pFVar8 = ::FString::FString(&local_638,L"FramesDisregarded");
  pFVar12 = FAnalyticsEventAttribute::FAnalyticsEventAttribute<FString>
                      (&local_208,pFVar8,&local_8c8);
  pFVar3 = (FAnalyticsEventAttribute *)(pTVar1->AllocatorInstance).Data;
  if (((pFVar3 <= pFVar12) && (pFVar12 < pFVar3 + pTVar1->ArrayMax)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar7 = pTVar1->ArrayNum;
  if (iVar7 == pTVar1->ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&pTVar1->AllocatorInstance,&pTVar1->ArrayMax);
  }
  pTVar1->ArrayNum = iVar7 + 1;
  FAnalyticsEventAttribute::FAnalyticsEventAttribute
            ((FAnalyticsEventAttribute *)((pTVar1->AllocatorInstance).Data + (longlong)iVar7 * 0x30)
             ,pFVar12);
  if (local_208.AttrValueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_208.AttrValueString.Data.AllocatorInstance.Data);
  }
  if (local_208.AttrName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_208.AttrName.Data.AllocatorInstance.Data);
  }
  if (local_8c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8c8.Data.AllocatorInstance.Data);
  }
  pTVar1 = this->ParamArray;
  ::FString::PrintfImpl(&local_8b8,L"%4.2f");
  pFVar8 = ::FString::FString(&local_6d8,L"Time");
  pFVar12 = FAnalyticsEventAttribute::FAnalyticsEventAttribute<FString>
                      (&local_1d8,pFVar8,&local_8b8);
  pFVar3 = (FAnalyticsEventAttribute *)(pTVar1->AllocatorInstance).Data;
  if (((pFVar3 <= pFVar12) && (pFVar12 < pFVar3 + pTVar1->ArrayMax)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar7 = pTVar1->ArrayNum;
  if (iVar7 == pTVar1->ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&pTVar1->AllocatorInstance,&pTVar1->ArrayMax);
  }
  pTVar1->ArrayNum = iVar7 + 1;
  FAnalyticsEventAttribute::FAnalyticsEventAttribute
            ((FAnalyticsEventAttribute *)((pTVar1->AllocatorInstance).Data + (longlong)iVar7 * 0x30)
             ,pFVar12);
  if (local_1d8.AttrValueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d8.AttrValueString.Data.AllocatorInstance.Data);
  }
  if (local_1d8.AttrName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d8.AttrName.Data.AllocatorInstance.Data);
  }
  if (local_8b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8b8.Data.AllocatorInstance.Data);
  }
  pTVar1 = this->ParamArray;
  ::FString::PrintfImpl(&local_948,L"%i");
  pFVar8 = ::FString::FString(&local_6c8,L"FrameCount");
  if ((1 < (pFVar8->Data).ArrayNum) &&
     (iVar7 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar8->Data).AllocatorInstance.Data,L"EventName"), iVar7 != 0)
     ) {
    if ((pFVar8->Data).ArrayNum == 0) {
      pwVar10 = L"";
    }
    else {
      pwVar10 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
    }
    iVar7 = FGenericPlatformStricmp::Stricmp(pwVar10,L"DateOffset");
    if (iVar7 != 0) goto LAB_14770dbe1;
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValidAttributeName(InName)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                     ,0x78,L"");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_14770dbe1:
  local_a28 = (pFVar8->Data).AllocatorInstance.Data;
  (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a20._0_4_ = (pFVar8->Data).ArrayNum;
  local_a20._4_4_ = (pFVar8->Data).ArrayMax;
  (pFVar8->Data).ArrayNum = 0;
  (pFVar8->Data).ArrayMax = 0;
  local_a18 = local_948.Data.AllocatorInstance.Data;
  local_a10._0_4_ = local_948.Data.ArrayNum;
  local_a10._4_4_ = local_948.Data.ArrayMax;
  local_948.Data.ArrayNum = 0;
  local_948.Data.ArrayMax = 0;
  local_a08 = 0;
  local_948.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a00 = (FScriptContainerElement)0x0;
  local_9fc = 0;
  pFVar2 = (pFVar8->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  if (((pFVar2 <= (FScriptContainerElement *)&local_a28) &&
      ((FScriptContainerElement *)&local_a28 < pFVar2 + (longlong)pTVar1->ArrayMax * 0x30)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar7 = pTVar1->ArrayNum;
  if (iVar7 == pTVar1->ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&pTVar1->AllocatorInstance,&pTVar1->ArrayMax);
  }
  lVar9 = (longlong)iVar7;
  pTVar1->ArrayNum = iVar7 + 1;
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  *(undefined8 *)(pFVar2 + lVar9 * 0x30) = 0;
  *(FScriptContainerElement **)(pFVar2 + lVar9 * 0x30) = local_a28;
  *(undefined4 *)(pFVar2 + lVar9 * 0x30 + 8) = (undefined4)local_a20;
  *(undefined4 *)(pFVar2 + lVar9 * 0x30 + 0xc) = local_a20._4_4_;
  *(undefined8 *)(pFVar2 + lVar9 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(pFVar2 + lVar9 * 0x30 + 0x10) = local_a18;
  *(int *)(pFVar2 + lVar9 * 0x30 + 0x18) = (int)local_a10;
  *(int *)(pFVar2 + lVar9 * 0x30 + 0x1c) = local_a10._4_4_;
  *(undefined8 *)(pFVar2 + lVar9 * 0x30 + 0x20) = local_a08;
  pFVar2[lVar9 * 0x30 + 0x28] = local_a00;
  *(undefined4 *)(pFVar2 + lVar9 * 0x30 + 0x2c) = local_9fc;
  local_a10 = 0;
  local_a18 = (FScriptContainerElement *)0x0;
  local_a20 = 0;
  local_a28 = (FScriptContainerElement *)0x0;
  if (local_948.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_948.Data.AllocatorInstance.Data);
  }
  pTVar1 = this->ParamArray;
  ::FString::PrintfImpl(&local_8a8,L"%4.2f");
  pFVar8 = ::FString::FString(&local_6b8,L"FlushAsyncLoadTime");
  pFVar12 = FAnalyticsEventAttribute::FAnalyticsEventAttribute<FString>
                      (&local_1a8,pFVar8,&local_8a8);
  pFVar3 = (FAnalyticsEventAttribute *)(pTVar1->AllocatorInstance).Data;
  if (((pFVar3 <= pFVar12) && (pFVar12 < pFVar3 + pTVar1->ArrayMax)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar7 = pTVar1->ArrayNum;
  if (iVar7 == pTVar1->ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&pTVar1->AllocatorInstance,&pTVar1->ArrayMax);
  }
  lVar9 = (longlong)iVar7;
  pTVar1->ArrayNum = iVar7 + 1;
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  *(undefined8 *)(pFVar2 + lVar9 * 0x30) = 0;
  *(FScriptContainerElement **)(pFVar2 + lVar9 * 0x30) =
       (pFVar12->AttrName).Data.AllocatorInstance.Data;
  (pFVar12->AttrName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar2 + lVar9 * 0x30 + 8) = (pFVar12->AttrName).Data.ArrayNum;
  *(int *)(pFVar2 + lVar9 * 0x30 + 0xc) = (pFVar12->AttrName).Data.ArrayMax;
  (pFVar12->AttrName).Data.ArrayNum = 0;
  (pFVar12->AttrName).Data.ArrayMax = 0;
  *(undefined8 *)(pFVar2 + lVar9 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(pFVar2 + lVar9 * 0x30 + 0x10) =
       (pFVar12->AttrValueString).Data.AllocatorInstance.Data;
  (pFVar12->AttrValueString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar2 + lVar9 * 0x30 + 0x18) = (pFVar12->AttrValueString).Data.ArrayNum;
  *(int *)(pFVar2 + lVar9 * 0x30 + 0x1c) = (pFVar12->AttrValueString).Data.ArrayMax;
  (pFVar12->AttrValueString).Data.ArrayNum = 0;
  (pFVar12->AttrValueString).Data.ArrayMax = 0;
  *(double *)(pFVar2 + lVar9 * 0x30 + 0x20) = pFVar12->AttrValueNumber;
  pFVar2[lVar9 * 0x30 + 0x28] = (FScriptContainerElement)pFVar12->AttrValueBool;
  *(AttrTypeEnum *)(pFVar2 + lVar9 * 0x30 + 0x2c) = pFVar12->AttrType;
  if (local_1a8.AttrValueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8.AttrValueString.Data.AllocatorInstance.Data);
  }
  if (local_1a8.AttrName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8.AttrName.Data.AllocatorInstance.Data);
  }
  if (local_8a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8a8.Data.AllocatorInstance.Data);
  }
  pTVar1 = this->ParamArray;
  ::FString::PrintfImpl(&local_898,L"%d");
  pFVar8 = ::FString::FString(&local_6a8,L"FlushAsyncLoadCalls");
  pFVar12 = FAnalyticsEventAttribute::FAnalyticsEventAttribute<FString>
                      (&local_178,pFVar8,&local_898);
  pFVar3 = (FAnalyticsEventAttribute *)(pTVar1->AllocatorInstance).Data;
  if (((pFVar3 <= pFVar12) && (pFVar12 < pFVar3 + pTVar1->ArrayMax)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar7 = pTVar1->ArrayNum;
  if (iVar7 == pTVar1->ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&pTVar1->AllocatorInstance,&pTVar1->ArrayMax);
  }
  lVar9 = (longlong)iVar7;
  pTVar1->ArrayNum = iVar7 + 1;
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  *(undefined8 *)(pFVar2 + lVar9 * 0x30) = 0;
  *(FScriptContainerElement **)(pFVar2 + lVar9 * 0x30) =
       (pFVar12->AttrName).Data.AllocatorInstance.Data;
  (pFVar12->AttrName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar2 + lVar9 * 0x30 + 8) = (pFVar12->AttrName).Data.ArrayNum;
  *(int *)(pFVar2 + lVar9 * 0x30 + 0xc) = (pFVar12->AttrName).Data.ArrayMax;
  (pFVar12->AttrName).Data.ArrayNum = 0;
  (pFVar12->AttrName).Data.ArrayMax = 0;
  *(undefined8 *)(pFVar2 + lVar9 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(pFVar2 + lVar9 * 0x30 + 0x10) =
       (pFVar12->AttrValueString).Data.AllocatorInstance.Data;
  (pFVar12->AttrValueString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar2 + lVar9 * 0x30 + 0x18) = (pFVar12->AttrValueString).Data.ArrayNum;
  *(int *)(pFVar2 + lVar9 * 0x30 + 0x1c) = (pFVar12->AttrValueString).Data.ArrayMax;
  (pFVar12->AttrValueString).Data.ArrayNum = 0;
  (pFVar12->AttrValueString).Data.ArrayMax = 0;
  *(double *)(pFVar2 + lVar9 * 0x30 + 0x20) = pFVar12->AttrValueNumber;
  pFVar2[lVar9 * 0x30 + 0x28] = (FScriptContainerElement)pFVar12->AttrValueBool;
  *(AttrTypeEnum *)(pFVar2 + lVar9 * 0x30 + 0x2c) = pFVar12->AttrType;
  if (local_178.AttrValueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.AttrValueString.Data.AllocatorInstance.Data);
  }
  if (local_178.AttrName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.AttrName.Data.AllocatorInstance.Data);
  }
  if (local_898.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_898.Data.AllocatorInstance.Data);
  }
  pTVar1 = this->ParamArray;
  ::FString::PrintfImpl(&local_888,L"%4.2f");
  pFVar8 = ::FString::FString(&local_698,L"MaxFlushAsyncLoadTime");
  pFVar12 = FAnalyticsEventAttribute::FAnalyticsEventAttribute<FString>
                      (&local_148,pFVar8,&local_888);
  pFVar3 = (FAnalyticsEventAttribute *)(pTVar1->AllocatorInstance).Data;
  if (((pFVar3 <= pFVar12) && (pFVar12 < pFVar3 + pTVar1->ArrayMax)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar7 = pTVar1->ArrayNum;
  if (iVar7 == pTVar1->ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&pTVar1->AllocatorInstance,&pTVar1->ArrayMax);
  }
  lVar9 = (longlong)iVar7;
  pTVar1->ArrayNum = iVar7 + 1;
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  *(undefined8 *)(pFVar2 + lVar9 * 0x30) = 0;
  *(FScriptContainerElement **)(pFVar2 + lVar9 * 0x30) =
       (pFVar12->AttrName).Data.AllocatorInstance.Data;
  (pFVar12->AttrName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar2 + lVar9 * 0x30 + 8) = (pFVar12->AttrName).Data.ArrayNum;
  *(int *)(pFVar2 + lVar9 * 0x30 + 0xc) = (pFVar12->AttrName).Data.ArrayMax;
  (pFVar12->AttrName).Data.ArrayNum = 0;
  (pFVar12->AttrName).Data.ArrayMax = 0;
  *(undefined8 *)(pFVar2 + lVar9 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(pFVar2 + lVar9 * 0x30 + 0x10) =
       (pFVar12->AttrValueString).Data.AllocatorInstance.Data;
  (pFVar12->AttrValueString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar2 + lVar9 * 0x30 + 0x18) = (pFVar12->AttrValueString).Data.ArrayNum;
  *(int *)(pFVar2 + lVar9 * 0x30 + 0x1c) = (pFVar12->AttrValueString).Data.ArrayMax;
  (pFVar12->AttrValueString).Data.ArrayNum = 0;
  (pFVar12->AttrValueString).Data.ArrayMax = 0;
  *(double *)(pFVar2 + lVar9 * 0x30 + 0x20) = pFVar12->AttrValueNumber;
  pFVar2[lVar9 * 0x30 + 0x28] = (FScriptContainerElement)pFVar12->AttrValueBool;
  *(AttrTypeEnum *)(pFVar2 + lVar9 * 0x30 + 0x2c) = pFVar12->AttrType;
  if (local_148.AttrValueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.AttrValueString.Data.AllocatorInstance.Data);
  }
  if (local_148.AttrName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.AttrName.Data.AllocatorInstance.Data);
  }
  if (local_888.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_888.Data.AllocatorInstance.Data);
  }
  pTVar1 = this->ParamArray;
  ::FString::PrintfImpl(&local_878,L"%4.2f");
  pFVar8 = ::FString::FString(&local_688,L"AvgFlushAsyncLoadTime");
  pFVar12 = FAnalyticsEventAttribute::FAnalyticsEventAttribute<FString>
                      (&local_118,pFVar8,&local_878);
  pFVar3 = (FAnalyticsEventAttribute *)(pTVar1->AllocatorInstance).Data;
  if (((pFVar3 <= pFVar12) && (pFVar12 < pFVar3 + pTVar1->ArrayMax)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar7 = pTVar1->ArrayNum;
  if (iVar7 == pTVar1->ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&pTVar1->AllocatorInstance,&pTVar1->ArrayMax);
  }
  lVar9 = (longlong)iVar7;
  pTVar1->ArrayNum = iVar7 + 1;
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  *(undefined8 *)(pFVar2 + lVar9 * 0x30) = 0;
  *(FScriptContainerElement **)(pFVar2 + lVar9 * 0x30) =
       (pFVar12->AttrName).Data.AllocatorInstance.Data;
  (pFVar12->AttrName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar2 + lVar9 * 0x30 + 8) = (pFVar12->AttrName).Data.ArrayNum;
  *(int *)(pFVar2 + lVar9 * 0x30 + 0xc) = (pFVar12->AttrName).Data.ArrayMax;
  (pFVar12->AttrName).Data.ArrayNum = 0;
  (pFVar12->AttrName).Data.ArrayMax = 0;
  *(undefined8 *)(pFVar2 + lVar9 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(pFVar2 + lVar9 * 0x30 + 0x10) =
       (pFVar12->AttrValueString).Data.AllocatorInstance.Data;
  (pFVar12->AttrValueString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar2 + lVar9 * 0x30 + 0x18) = (pFVar12->AttrValueString).Data.ArrayNum;
  *(int *)(pFVar2 + lVar9 * 0x30 + 0x1c) = (pFVar12->AttrValueString).Data.ArrayMax;
  (pFVar12->AttrValueString).Data.ArrayNum = 0;
  (pFVar12->AttrValueString).Data.ArrayMax = 0;
  *(double *)(pFVar2 + lVar9 * 0x30 + 0x20) = pFVar12->AttrValueNumber;
  pFVar2[lVar9 * 0x30 + 0x28] = (FScriptContainerElement)pFVar12->AttrValueBool;
  *(AttrTypeEnum *)(pFVar2 + lVar9 * 0x30 + 0x2c) = pFVar12->AttrType;
  if (local_118.AttrValueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.AttrValueString.Data.AllocatorInstance.Data);
  }
  if (local_118.AttrName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.AttrName.Data.AllocatorInstance.Data);
  }
  if (local_878.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_878.Data.AllocatorInstance.Data);
  }
  pTVar1 = this->ParamArray;
  ::FString::PrintfImpl(&local_868,L"%d");
  pFVar8 = ::FString::FString(&local_678,L"SyncLoadCount");
  pFVar12 = FAnalyticsEventAttribute::FAnalyticsEventAttribute<FString>(&local_e8,pFVar8,&local_868)
  ;
  pFVar3 = (FAnalyticsEventAttribute *)(pTVar1->AllocatorInstance).Data;
  if (((pFVar3 <= pFVar12) && (pFVar12 < pFVar3 + pTVar1->ArrayMax)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar7 = pTVar1->ArrayNum;
  if (iVar7 == pTVar1->ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&pTVar1->AllocatorInstance,&pTVar1->ArrayMax);
  }
  lVar9 = (longlong)iVar7;
  pTVar1->ArrayNum = iVar7 + 1;
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  *(undefined8 *)(pFVar2 + lVar9 * 0x30) = 0;
  *(FScriptContainerElement **)(pFVar2 + lVar9 * 0x30) =
       (pFVar12->AttrName).Data.AllocatorInstance.Data;
  (pFVar12->AttrName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar2 + lVar9 * 0x30 + 8) = (pFVar12->AttrName).Data.ArrayNum;
  *(int *)(pFVar2 + lVar9 * 0x30 + 0xc) = (pFVar12->AttrName).Data.ArrayMax;
  (pFVar12->AttrName).Data.ArrayNum = 0;
  (pFVar12->AttrName).Data.ArrayMax = 0;
  *(undefined8 *)(pFVar2 + lVar9 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(pFVar2 + lVar9 * 0x30 + 0x10) =
       (pFVar12->AttrValueString).Data.AllocatorInstance.Data;
  (pFVar12->AttrValueString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar2 + lVar9 * 0x30 + 0x18) = (pFVar12->AttrValueString).Data.ArrayNum;
  *(int *)(pFVar2 + lVar9 * 0x30 + 0x1c) = (pFVar12->AttrValueString).Data.ArrayMax;
  (pFVar12->AttrValueString).Data.ArrayNum = 0;
  (pFVar12->AttrValueString).Data.ArrayMax = 0;
  *(double *)(pFVar2 + lVar9 * 0x30 + 0x20) = pFVar12->AttrValueNumber;
  pFVar2[lVar9 * 0x30 + 0x28] = (FScriptContainerElement)pFVar12->AttrValueBool;
  *(AttrTypeEnum *)(pFVar2 + lVar9 * 0x30 + 0x2c) = pFVar12->AttrType;
  if (local_e8.AttrValueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.AttrValueString.Data.AllocatorInstance.Data);
  }
  if (local_e8.AttrName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.AttrName.Data.AllocatorInstance.Data);
  }
  if (local_868.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_868.Data.AllocatorInstance.Data);
  }
  pTVar1 = this->ParamArray;
  ::FString::PrintfImpl(&local_858,L"%4.2f");
  pFVar8 = ::FString::FString(&local_668,L"PercentGameThreadBound");
  pFVar12 = FAnalyticsEventAttribute::FAnalyticsEventAttribute<FString>(&local_b8,pFVar8,&local_858)
  ;
  pFVar3 = (FAnalyticsEventAttribute *)(pTVar1->AllocatorInstance).Data;
  if (((pFVar3 <= pFVar12) && (pFVar12 < pFVar3 + pTVar1->ArrayMax)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar7 = pTVar1->ArrayNum;
  if (iVar7 == pTVar1->ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&pTVar1->AllocatorInstance,&pTVar1->ArrayMax);
  }
  lVar9 = (longlong)iVar7;
  pTVar1->ArrayNum = iVar7 + 1;
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  *(undefined8 *)(pFVar2 + lVar9 * 0x30) = 0;
  *(FScriptContainerElement **)(pFVar2 + lVar9 * 0x30) =
       (pFVar12->AttrName).Data.AllocatorInstance.Data;
  (pFVar12->AttrName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar2 + lVar9 * 0x30 + 8) = (pFVar12->AttrName).Data.ArrayNum;
  *(int *)(pFVar2 + lVar9 * 0x30 + 0xc) = (pFVar12->AttrName).Data.ArrayMax;
  (pFVar12->AttrName).Data.ArrayNum = 0;
  (pFVar12->AttrName).Data.ArrayMax = 0;
  *(undefined8 *)(pFVar2 + lVar9 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(pFVar2 + lVar9 * 0x30 + 0x10) =
       (pFVar12->AttrValueString).Data.AllocatorInstance.Data;
  (pFVar12->AttrValueString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar2 + lVar9 * 0x30 + 0x18) = (pFVar12->AttrValueString).Data.ArrayNum;
  *(int *)(pFVar2 + lVar9 * 0x30 + 0x1c) = (pFVar12->AttrValueString).Data.ArrayMax;
  (pFVar12->AttrValueString).Data.ArrayNum = 0;
  (pFVar12->AttrValueString).Data.ArrayMax = 0;
  *(double *)(pFVar2 + lVar9 * 0x30 + 0x20) = pFVar12->AttrValueNumber;
  pFVar2[lVar9 * 0x30 + 0x28] = (FScriptContainerElement)pFVar12->AttrValueBool;
  *(AttrTypeEnum *)(pFVar2 + lVar9 * 0x30 + 0x2c) = pFVar12->AttrType;
  if (local_b8.AttrValueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.AttrValueString.Data.AllocatorInstance.Data);
  }
  if (local_b8.AttrName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.AttrName.Data.AllocatorInstance.Data);
  }
  if (local_858.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_858.Data.AllocatorInstance.Data);
  }
  pTVar1 = this->ParamArray;
  ::FString::PrintfImpl(&local_848,L"%4.2f");
  pFVar8 = ::FString::FString(&local_658,L"PercentRenderThreadBound");
  pFVar12 = FAnalyticsEventAttribute::FAnalyticsEventAttribute<FString>(&local_88,pFVar8,&local_848)
  ;
  pFVar3 = (FAnalyticsEventAttribute *)(pTVar1->AllocatorInstance).Data;
  if (((pFVar3 <= pFVar12) && (pFVar12 < pFVar3 + pTVar1->ArrayMax)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar7 = pTVar1->ArrayNum;
  if (iVar7 == pTVar1->ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&pTVar1->AllocatorInstance,&pTVar1->ArrayMax);
  }
  lVar9 = (longlong)iVar7;
  pTVar1->ArrayNum = iVar7 + 1;
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  *(undefined8 *)(pFVar2 + lVar9 * 0x30) = 0;
  *(FScriptContainerElement **)(pFVar2 + lVar9 * 0x30) =
       (pFVar12->AttrName).Data.AllocatorInstance.Data;
  (pFVar12->AttrName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar2 + lVar9 * 0x30 + 8) = (pFVar12->AttrName).Data.ArrayNum;
  *(int *)(pFVar2 + lVar9 * 0x30 + 0xc) = (pFVar12->AttrName).Data.ArrayMax;
  (pFVar12->AttrName).Data.ArrayNum = 0;
  (pFVar12->AttrName).Data.ArrayMax = 0;
  *(undefined8 *)(pFVar2 + lVar9 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(pFVar2 + lVar9 * 0x30 + 0x10) =
       (pFVar12->AttrValueString).Data.AllocatorInstance.Data;
  (pFVar12->AttrValueString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar2 + lVar9 * 0x30 + 0x18) = (pFVar12->AttrValueString).Data.ArrayNum;
  *(int *)(pFVar2 + lVar9 * 0x30 + 0x1c) = (pFVar12->AttrValueString).Data.ArrayMax;
  (pFVar12->AttrValueString).Data.ArrayNum = 0;
  (pFVar12->AttrValueString).Data.ArrayMax = 0;
  *(double *)(pFVar2 + lVar9 * 0x30 + 0x20) = pFVar12->AttrValueNumber;
  pFVar2[lVar9 * 0x30 + 0x28] = (FScriptContainerElement)pFVar12->AttrValueBool;
  *(AttrTypeEnum *)(pFVar2 + lVar9 * 0x30 + 0x2c) = pFVar12->AttrType;
  if (local_88.AttrValueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AttrValueString.Data.AllocatorInstance.Data);
  }
  if (local_88.AttrName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AttrName.Data.AllocatorInstance.Data);
  }
  if (local_848.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_848.Data.AllocatorInstance.Data);
  }
  pTVar1 = this->ParamArray;
  bVar5 = IsInParallelGameThread();
  if (((!bVar5) && (bVar5 = IsInGameThread(), !bVar5)) &&
     (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0"), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  ::FString::PrintfImpl(&local_838,L"%d");
  pFVar8 = ::FString::FString(&local_648,L"ExcludeIdleTime");
  pFVar12 = FAnalyticsEventAttribute::FAnalyticsEventAttribute<FString>(&local_58,pFVar8,&local_838)
  ;
  pFVar3 = (FAnalyticsEventAttribute *)(pTVar1->AllocatorInstance).Data;
  if (((pFVar3 <= pFVar12) && (pFVar12 < pFVar3 + pTVar1->ArrayMax)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar7 = pTVar1->ArrayNum;
  if (iVar7 == pTVar1->ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&pTVar1->AllocatorInstance,&pTVar1->ArrayMax);
  }
  lVar9 = (longlong)iVar7;
  pTVar1->ArrayNum = iVar7 + 1;
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  *(undefined8 *)(pFVar2 + lVar9 * 0x30) = 0;
  *(FScriptContainerElement **)(pFVar2 + lVar9 * 0x30) =
       (pFVar12->AttrName).Data.AllocatorInstance.Data;
  (pFVar12->AttrName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar2 + lVar9 * 0x30 + 8) = (pFVar12->AttrName).Data.ArrayNum;
  *(int *)(pFVar2 + lVar9 * 0x30 + 0xc) = (pFVar12->AttrName).Data.ArrayMax;
  (pFVar12->AttrName).Data.ArrayNum = 0;
  (pFVar12->AttrName).Data.ArrayMax = 0;
  *(undefined8 *)(pFVar2 + lVar9 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(pFVar2 + lVar9 * 0x30 + 0x10) =
       (pFVar12->AttrValueString).Data.AllocatorInstance.Data;
  (pFVar12->AttrValueString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar2 + lVar9 * 0x30 + 0x18) = (pFVar12->AttrValueString).Data.ArrayNum;
  *(int *)(pFVar2 + lVar9 * 0x30 + 0x1c) = (pFVar12->AttrValueString).Data.ArrayMax;
  (pFVar12->AttrValueString).Data.ArrayNum = 0;
  (pFVar12->AttrValueString).Data.ArrayMax = 0;
  *(double *)(pFVar2 + lVar9 * 0x30 + 0x20) = pFVar12->AttrValueNumber;
  pFVar2[lVar9 * 0x30 + 0x28] = (FScriptContainerElement)pFVar12->AttrValueBool;
  *(AttrTypeEnum *)(pFVar2 + lVar9 * 0x30 + 0x2c) = pFVar12->AttrType;
  if (local_58.AttrValueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AttrValueString.Data.AllocatorInstance.Data);
  }
  if (local_58.AttrName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AttrName.Data.AllocatorInstance.Data);
  }
  if (local_838.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_838.Data.AllocatorInstance.Data);
  }
  return;
}

// HandleDynamicResThreshold @ 147710490

/* WARNING: Removing unreachable block (ram,0x00014771073d) */
/* WARNING: Removing unreachable block (ram,0x00014771074b) */

void __thiscall
FDumpFPSChartToAnalyticsArray::HandleDynamicResThreshold
          (FDumpFPSChartToAnalyticsArray *this,int param_1,float param_2)

{
  TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  ForAnyElementType FVar7;
  ForAnyElementType local_78;
  undefined8 local_70;
  FString local_68;
  FString local_58;
  FScriptContainerElement *local_48;
  undefined8 local_40;
  ForAnyElementType local_38;
  undefined8 local_30;
  undefined8 local_28;
  FScriptContainerElement local_20;
  undefined4 local_1c;
  
  ::FString::PrintfImpl(&local_58,L"DynRes%dPlus");
  ::FString::PrintfImpl(&local_68,L"%4.2f");
  FVar7.Data = local_58.Data.AllocatorInstance.Data;
  iVar5 = local_58.Data.ArrayNum;
  pTVar1 = this->ParamArray;
  local_78.Data = (FScriptContainerElement *)0x0;
  local_70 = CONCAT44(local_70._4_4_,iVar5);
  if (iVar5 == 0) {
    local_70 = local_58.Data._8_8_ & 0xffffffff;
    iVar5 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar5,0,&local_78,iVar5,(int *)((longlong)&local_70 + 4));
    memcpy(local_78.Data,FVar7.Data,(longlong)iVar5 * 2);
    iVar5 = (int)local_70;
  }
  if ((1 < iVar5) &&
     (iVar5 = FGenericPlatformStricmp::Stricmp((wchar_t *)local_78.Data,L"EventName"), iVar5 != 0))
  {
    FVar7.Data = (FScriptContainerElement *)L"";
    if ((int)local_70 != 0) {
      FVar7.Data = local_78.Data;
    }
    iVar5 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar7.Data,L"DateOffset");
    if (iVar5 != 0) goto LAB_1477105aa;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValidAttributeName(InName)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                     ,0x78,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_1477105aa:
  FVar7.Data = local_68.Data.AllocatorInstance.Data;
  local_48 = local_78.Data;
  local_40 = local_70;
  local_70 = 0;
  local_78.Data = (FScriptContainerElement *)0x0;
  local_38.Data = (FScriptContainerElement *)0x0;
  iVar5 = local_68.Data.ArrayNum;
  local_30 = CONCAT44(local_30._4_4_,iVar5);
  if (iVar5 == 0) {
    local_30 = local_68.Data._8_8_ & 0xffffffff;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar5,0,&local_38,iVar5,(int *)((longlong)&local_30 + 4));
    memcpy(local_38.Data,FVar7.Data,(longlong)iVar5 * 2);
  }
  local_20 = (FScriptContainerElement)0x0;
  local_28 = 0;
  local_1c = 0;
  if (local_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data);
  }
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  if (((pFVar2 <= (FScriptContainerElement *)&local_48) &&
      ((FScriptContainerElement *)&local_48 < pFVar2 + (longlong)pTVar1->ArrayMax * 0x30)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar5 = pTVar1->ArrayNum;
  if (iVar5 == pTVar1->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&pTVar1->AllocatorInstance,&pTVar1->ArrayMax);
  }
  lVar6 = (longlong)iVar5;
  pTVar1->ArrayNum = iVar5 + 1;
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  *(undefined8 *)(pFVar2 + lVar6 * 0x30) = 0;
  *(FScriptContainerElement **)(pFVar2 + lVar6 * 0x30) = local_48;
  *(undefined4 *)(pFVar2 + lVar6 * 0x30 + 8) = (undefined4)local_40;
  *(undefined4 *)(pFVar2 + lVar6 * 0x30 + 0xc) = local_40._4_4_;
  *(undefined8 *)(pFVar2 + lVar6 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(pFVar2 + lVar6 * 0x30 + 0x10) = local_38.Data;
  *(undefined4 *)(pFVar2 + lVar6 * 0x30 + 0x18) = (undefined4)local_30;
  *(undefined4 *)(pFVar2 + lVar6 * 0x30 + 0x1c) = local_30._4_4_;
  *(undefined8 *)(pFVar2 + lVar6 * 0x30 + 0x20) = local_28;
  pFVar2[lVar6 * 0x30 + 0x28] = local_20;
  *(undefined4 *)(pFVar2 + lVar6 * 0x30 + 0x2c) = local_1c;
  local_30 = 0;
  local_38.Data = (FScriptContainerElement *)0x0;
  local_40 = 0;
  local_48 = (FScriptContainerElement *)0x0;
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return;
}

// HandleFPSThreshold @ 147710910

/* WARNING: Removing unreachable block (ram,0x000147710bbd) */
/* WARNING: Removing unreachable block (ram,0x000147710bcb) */

void __thiscall
FDumpFPSChartToAnalyticsArray::HandleFPSThreshold
          (FDumpFPSChartToAnalyticsArray *this,int param_1,float param_2)

{
  TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  ForAnyElementType FVar7;
  ForAnyElementType local_78;
  undefined8 local_70;
  FString local_68;
  FString local_58;
  FScriptContainerElement *local_48;
  undefined8 local_40;
  ForAnyElementType local_38;
  undefined8 local_30;
  undefined8 local_28;
  FScriptContainerElement local_20;
  undefined4 local_1c;
  
  ::FString::PrintfImpl(&local_58,L"MVP%d");
  ::FString::PrintfImpl(&local_68,L"%4.2f");
  FVar7.Data = local_58.Data.AllocatorInstance.Data;
  iVar5 = local_58.Data.ArrayNum;
  pTVar1 = this->ParamArray;
  local_78.Data = (FScriptContainerElement *)0x0;
  local_70 = CONCAT44(local_70._4_4_,iVar5);
  if (iVar5 == 0) {
    local_70 = local_58.Data._8_8_ & 0xffffffff;
    iVar5 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar5,0,&local_78,iVar5,(int *)((longlong)&local_70 + 4));
    memcpy(local_78.Data,FVar7.Data,(longlong)iVar5 * 2);
    iVar5 = (int)local_70;
  }
  if ((1 < iVar5) &&
     (iVar5 = FGenericPlatformStricmp::Stricmp((wchar_t *)local_78.Data,L"EventName"), iVar5 != 0))
  {
    FVar7.Data = (FScriptContainerElement *)L"";
    if ((int)local_70 != 0) {
      FVar7.Data = local_78.Data;
    }
    iVar5 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar7.Data,L"DateOffset");
    if (iVar5 != 0) goto LAB_147710a2a;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValidAttributeName(InName)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                     ,0x78,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_147710a2a:
  FVar7.Data = local_68.Data.AllocatorInstance.Data;
  local_48 = local_78.Data;
  local_40 = local_70;
  local_70 = 0;
  local_78.Data = (FScriptContainerElement *)0x0;
  local_38.Data = (FScriptContainerElement *)0x0;
  iVar5 = local_68.Data.ArrayNum;
  local_30 = CONCAT44(local_30._4_4_,iVar5);
  if (iVar5 == 0) {
    local_30 = local_68.Data._8_8_ & 0xffffffff;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar5,0,&local_38,iVar5,(int *)((longlong)&local_30 + 4));
    memcpy(local_38.Data,FVar7.Data,(longlong)iVar5 * 2);
  }
  local_20 = (FScriptContainerElement)0x0;
  local_28 = 0;
  local_1c = 0;
  if (local_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data);
  }
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  if (((pFVar2 <= (FScriptContainerElement *)&local_48) &&
      ((FScriptContainerElement *)&local_48 < pFVar2 + (longlong)pTVar1->ArrayMax * 0x30)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar5 = pTVar1->ArrayNum;
  if (iVar5 == pTVar1->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&pTVar1->AllocatorInstance,&pTVar1->ArrayMax);
  }
  lVar6 = (longlong)iVar5;
  pTVar1->ArrayNum = iVar5 + 1;
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  *(undefined8 *)(pFVar2 + lVar6 * 0x30) = 0;
  *(FScriptContainerElement **)(pFVar2 + lVar6 * 0x30) = local_48;
  *(undefined4 *)(pFVar2 + lVar6 * 0x30 + 8) = (undefined4)local_40;
  *(undefined4 *)(pFVar2 + lVar6 * 0x30 + 0xc) = local_40._4_4_;
  *(undefined8 *)(pFVar2 + lVar6 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(pFVar2 + lVar6 * 0x30 + 0x10) = local_38.Data;
  *(undefined4 *)(pFVar2 + lVar6 * 0x30 + 0x18) = (undefined4)local_30;
  *(undefined4 *)(pFVar2 + lVar6 * 0x30 + 0x1c) = local_30._4_4_;
  *(undefined8 *)(pFVar2 + lVar6 * 0x30 + 0x20) = local_28;
  pFVar2[lVar6 * 0x30 + 0x28] = local_20;
  *(undefined4 *)(pFVar2 + lVar6 * 0x30 + 0x2c) = local_1c;
  local_30 = 0;
  local_38.Data = (FScriptContainerElement *)0x0;
  local_40 = 0;
  local_48 = (FScriptContainerElement *)0x0;
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return;
}

// HandleHitchBucket @ 147710d90

/* WARNING: Removing unreachable block (ram,0x00014771107d) */
/* WARNING: Removing unreachable block (ram,0x00014771128d) */
/* WARNING: Removing unreachable block (ram,0x00014771108b) */
/* WARNING: Removing unreachable block (ram,0x00014771129b) */

void __thiscall
FDumpFPSChartToAnalyticsArray::HandleHitchBucket
          (FDumpFPSChartToAnalyticsArray *this,FHistogram *param_1,int param_2)

{
  TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  ForAnyElementType FVar7;
  double dVar8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FScriptContainerElement *local_b8;
  undefined8 local_b0;
  FString local_a8;
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
  FString local_48 [3];
  
  if (this->bIncludeHistogramInfo == false) {
    return;
  }
  dVar8 = FHistogram::GetBinUpperBound(param_1,param_2);
  FHistogram::GetBinLowerBound(param_1,param_2);
  local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (dVar8 == __real_47efffffe0000000) {
    ::FString::PrintfImpl(&local_58,L"Hitch_%i_Plus_Hitch");
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
    local_c8.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
    local_c8.Data.ArrayNum = local_58.Data.ArrayNum;
    local_c8.Data.ArrayMax = local_58.Data.ArrayMax;
    local_58.Data.ArrayNum = 0;
    local_58.Data.ArrayMax = 0;
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  else {
    ::FString::PrintfImpl(local_48,L"Hitch_%i_%i_Hitch");
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
    local_c8.Data.AllocatorInstance.Data = local_48[0].Data.AllocatorInstance.Data;
    local_c8.Data.ArrayNum = local_48[0].Data.ArrayNum;
    local_c8.Data.ArrayMax = local_48[0].Data.ArrayMax;
    local_48[0].Data.ArrayNum = 0;
    local_48[0].Data.ArrayMax = 0;
    local_48[0].Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  pTVar1 = this->ParamArray;
  FHistogram::GetBinObservationsCount(param_1,param_2);
  ::FString::ConcatFC(&local_e8,&local_c8,L"Count");
  if ((local_e8.Data.ArrayNum < 2) ||
     (iVar5 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)local_e8.Data.AllocatorInstance.Data,L"EventName"), iVar5 == 0))
  {
LAB_147710ef6:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidAttributeName(InName)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                       ,0x78,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_e8.Data.ArrayNum != 0) {
      FVar7.Data = local_e8.Data.AllocatorInstance.Data;
    }
    iVar5 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar7.Data,L"DateOffset");
    if (iVar5 == 0) goto LAB_147710ef6;
  }
  local_b8 = local_e8.Data.AllocatorInstance.Data;
  local_b0._0_4_ = local_e8.Data.ArrayNum;
  local_b0._4_4_ = local_e8.Data.ArrayMax;
  local_e8.Data.ArrayNum = 0;
  local_e8.Data.ArrayMax = 0;
  local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ::FString::PrintfImpl(&local_a8,L"%d");
  local_98 = 0;
  local_90 = (FScriptContainerElement)0x0;
  local_8c = 4;
  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  if (((pFVar2 <= (FScriptContainerElement *)&local_b8) &&
      ((FScriptContainerElement *)&local_b8 < pFVar2 + (longlong)pTVar1->ArrayMax * 0x30)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar5 = pTVar1->ArrayNum;
  if (iVar5 == pTVar1->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&pTVar1->AllocatorInstance,&pTVar1->ArrayMax);
  }
  lVar6 = (longlong)iVar5;
  pTVar1->ArrayNum = iVar5 + 1;
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  *(undefined8 *)(pFVar2 + lVar6 * 0x30) = 0;
  *(FScriptContainerElement **)(pFVar2 + lVar6 * 0x30) = local_b8;
  *(int *)(pFVar2 + lVar6 * 0x30 + 8) = (int)local_b0;
  *(int *)(pFVar2 + lVar6 * 0x30 + 0xc) = local_b0._4_4_;
  *(undefined8 *)(pFVar2 + lVar6 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(pFVar2 + lVar6 * 0x30 + 0x10) = local_a8.Data.AllocatorInstance.Data
  ;
  *(int *)(pFVar2 + lVar6 * 0x30 + 0x18) = local_a8.Data.ArrayNum;
  *(int *)(pFVar2 + lVar6 * 0x30 + 0x1c) = local_a8.Data.ArrayMax;
  *(undefined8 *)(pFVar2 + lVar6 * 0x30 + 0x20) = local_98;
  pFVar2[lVar6 * 0x30 + 0x28] = local_90;
  *(undefined4 *)(pFVar2 + lVar6 * 0x30 + 0x2c) = local_8c;
  local_a8.Data.ArrayNum = 0;
  local_a8.Data.ArrayMax = 0;
  local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b0 = 0;
  local_b8 = (FScriptContainerElement *)0x0;
  pTVar1 = this->ParamArray;
  dVar8 = FHistogram::GetBinObservationsSum(param_1,param_2);
  ::FString::ConcatFC(&local_d8,&local_c8,L"Time");
  if ((1 < local_d8.Data.ArrayNum) &&
     (iVar5 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)local_d8.Data.AllocatorInstance.Data,L"EventName"), iVar5 != 0))
  {
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_d8.Data.ArrayNum != 0) {
      FVar7.Data = local_d8.Data.AllocatorInstance.Data;
    }
    iVar5 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar7.Data,L"DateOffset");
    if (iVar5 != 0) goto LAB_14771111e;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValidAttributeName(InName)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                     ,0x78,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_14771111e:
  local_88 = local_d8.Data.AllocatorInstance.Data;
  local_80._0_4_ = local_d8.Data.ArrayNum;
  local_80._4_4_ = local_d8.Data.ArrayMax;
  local_d8.Data.ArrayNum = 0;
  local_d8.Data.ArrayMax = 0;
  local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  AnalyticsConversionToString(&local_78,dVar8);
  local_68 = 0;
  local_60 = (FScriptContainerElement)0x0;
  local_5c = 4;
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  if (((pFVar2 <= (FScriptContainerElement *)&local_88) &&
      ((FScriptContainerElement *)&local_88 < pFVar2 + (longlong)pTVar1->ArrayMax * 0x30)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar5 = pTVar1->ArrayNum;
  if (iVar5 == pTVar1->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&pTVar1->AllocatorInstance,&pTVar1->ArrayMax);
  }
  lVar6 = (longlong)iVar5;
  pTVar1->ArrayNum = iVar5 + 1;
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  *(undefined8 *)(pFVar2 + lVar6 * 0x30) = 0;
  *(FScriptContainerElement **)(pFVar2 + lVar6 * 0x30) = local_88;
  *(int *)(pFVar2 + lVar6 * 0x30 + 8) = (int)local_80;
  *(int *)(pFVar2 + lVar6 * 0x30 + 0xc) = local_80._4_4_;
  *(undefined8 *)(pFVar2 + lVar6 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(pFVar2 + lVar6 * 0x30 + 0x10) = local_78.Data.AllocatorInstance.Data
  ;
  *(int *)(pFVar2 + lVar6 * 0x30 + 0x18) = local_78.Data.ArrayNum;
  *(int *)(pFVar2 + lVar6 * 0x30 + 0x1c) = local_78.Data.ArrayMax;
  *(undefined8 *)(pFVar2 + lVar6 * 0x30 + 0x20) = local_68;
  pFVar2[lVar6 * 0x30 + 0x28] = local_60;
  *(undefined4 *)(pFVar2 + lVar6 * 0x30 + 0x2c) = local_5c;
  local_78.Data.ArrayNum = 0;
  local_78.Data.ArrayMax = 0;
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_80 = 0;
  local_88 = (FScriptContainerElement *)0x0;
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  return;
}

// HandleHitchSummary @ 147711560

/* WARNING: Removing unreachable block (ram,0x000147712116) */
/* WARNING: Removing unreachable block (ram,0x000147711d3b) */
/* WARNING: Removing unreachable block (ram,0x000147711962) */
/* WARNING: Removing unreachable block (ram,0x00014771177b) */
/* WARNING: Removing unreachable block (ram,0x000147711b48) */
/* WARNING: Removing unreachable block (ram,0x000147711f12) */
/* WARNING: Removing unreachable block (ram,0x000147712322) */
/* WARNING: Removing unreachable block (ram,0x000147712124) */
/* WARNING: Removing unreachable block (ram,0x000147711d49) */
/* WARNING: Removing unreachable block (ram,0x000147711970) */
/* WARNING: Removing unreachable block (ram,0x00014771178a) */
/* WARNING: Removing unreachable block (ram,0x000147711b56) */
/* WARNING: Removing unreachable block (ram,0x000147711f20) */
/* WARNING: Removing unreachable block (ram,0x000147712330) */

void __thiscall
FDumpFPSChartToAnalyticsArray::HandleHitchSummary
          (FDumpFPSChartToAnalyticsArray *this,int param_1,double param_2)

{
  TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FString *pFVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  double dVar9;
  FScriptContainerElement *local_1f8;
  undefined8 local_1f0;
  FString local_1e8;
  undefined8 local_1d8;
  FScriptContainerElement local_1d0;
  undefined4 local_1cc;
  FScriptContainerElement *local_1c8;
  undefined8 local_1c0;
  FString local_1b8;
  undefined8 local_1a8;
  FScriptContainerElement local_1a0;
  undefined4 local_19c;
  FScriptContainerElement *local_198;
  undefined8 local_190;
  FString local_188;
  undefined8 local_178;
  FScriptContainerElement local_170;
  undefined4 local_16c;
  FScriptContainerElement *local_168;
  undefined8 local_160;
  FString local_158;
  undefined8 local_148;
  FScriptContainerElement local_140;
  undefined4 local_13c;
  FScriptContainerElement *local_138;
  undefined8 local_130;
  FString local_128;
  undefined8 local_118;
  FScriptContainerElement local_110;
  undefined4 local_10c;
  FScriptContainerElement *local_108;
  undefined8 local_100;
  FString local_f8;
  undefined8 local_e8;
  FScriptContainerElement local_e0;
  undefined4 local_dc;
  FScriptContainerElement *local_d8;
  undefined8 local_d0;
  FString local_c8;
  undefined8 local_b8;
  FScriptContainerElement local_b0;
  undefined4 local_ac;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48 [3];
  
  pTVar1 = this->ParamArray;
  pFVar6 = ::FString::FString(&local_a8,L"TotalHitches");
  if (((pFVar6->Data).ArrayNum < 2) ||
     (iVar5 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar6->Data).AllocatorInstance.Data,L"EventName"), iVar5 == 0)
     ) {
LAB_1477115ea:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidAttributeName(InName)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                       ,0x78,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
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
    iVar5 = FGenericPlatformStricmp::Stricmp(pwVar8,L"DateOffset");
    if (iVar5 == 0) goto LAB_1477115ea;
  }
  local_1f8 = (pFVar6->Data).AllocatorInstance.Data;
  (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1f0._0_4_ = (pFVar6->Data).ArrayNum;
  local_1f0._4_4_ = (pFVar6->Data).ArrayMax;
  (pFVar6->Data).ArrayNum = 0;
  (pFVar6->Data).ArrayMax = 0;
  ::FString::PrintfImpl(&local_1e8,L"%d");
  local_1d0 = (FScriptContainerElement)0x0;
  local_1d8 = 0;
  local_1cc = 4;
  pFVar2 = (pFVar6->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  if (((pFVar2 <= (FScriptContainerElement *)&local_1f8) &&
      ((FScriptContainerElement *)&local_1f8 < pFVar2 + (longlong)pTVar1->ArrayMax * 0x30)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar5 = pTVar1->ArrayNum;
  if (iVar5 == pTVar1->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&pTVar1->AllocatorInstance,&pTVar1->ArrayMax);
  }
  lVar7 = (longlong)iVar5;
  pTVar1->ArrayNum = iVar5 + 1;
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  *(undefined8 *)(pFVar2 + lVar7 * 0x30) = 0;
  *(FScriptContainerElement **)(pFVar2 + lVar7 * 0x30) = local_1f8;
  *(undefined4 *)(pFVar2 + lVar7 * 0x30 + 8) = (undefined4)local_1f0;
  *(undefined4 *)(pFVar2 + lVar7 * 0x30 + 0xc) = local_1f0._4_4_;
  *(undefined8 *)(pFVar2 + lVar7 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(pFVar2 + lVar7 * 0x30 + 0x10) =
       local_1e8.Data.AllocatorInstance.Data;
  *(int *)(pFVar2 + lVar7 * 0x30 + 0x18) = local_1e8.Data.ArrayNum;
  *(int *)(pFVar2 + lVar7 * 0x30 + 0x1c) = local_1e8.Data.ArrayMax;
  *(undefined8 *)(pFVar2 + lVar7 * 0x30 + 0x20) = local_1d8;
  pFVar2[lVar7 * 0x30 + 0x28] = local_1d0;
  *(undefined4 *)(pFVar2 + lVar7 * 0x30 + 0x2c) = local_1cc;
  local_1e8.Data.ArrayNum = 0;
  local_1e8.Data.ArrayMax = 0;
  local_1e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1f0 = 0;
  local_1f8 = (FScriptContainerElement *)0x0;
  pTVar1 = this->ParamArray;
  pFVar6 = ::FString::FString(&local_98,L"TotalGameBoundHitches");
  if (((pFVar6->Data).ArrayNum < 2) ||
     (iVar5 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar6->Data).AllocatorInstance.Data,L"EventName"), iVar5 == 0)
     ) {
LAB_1477117eb:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidAttributeName(InName)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                       ,0x78,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
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
    iVar5 = FGenericPlatformStricmp::Stricmp(pwVar8,L"DateOffset");
    if (iVar5 == 0) goto LAB_1477117eb;
  }
  local_1c8 = (pFVar6->Data).AllocatorInstance.Data;
  (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1c0._0_4_ = (pFVar6->Data).ArrayNum;
  local_1c0._4_4_ = (pFVar6->Data).ArrayMax;
  (pFVar6->Data).ArrayNum = 0;
  (pFVar6->Data).ArrayMax = 0;
  ::FString::PrintfImpl(&local_1b8,L"%d");
  local_1a8 = 0;
  local_1a0 = (FScriptContainerElement)0x0;
  local_19c = 4;
  pFVar2 = (pFVar6->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  if (((pFVar2 <= (FScriptContainerElement *)&local_1c8) &&
      ((FScriptContainerElement *)&local_1c8 < pFVar2 + (longlong)pTVar1->ArrayMax * 0x30)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar5 = pTVar1->ArrayNum;
  if (iVar5 == pTVar1->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&pTVar1->AllocatorInstance,&pTVar1->ArrayMax);
  }
  lVar7 = (longlong)iVar5;
  pTVar1->ArrayNum = iVar5 + 1;
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  *(undefined8 *)(pFVar2 + lVar7 * 0x30) = 0;
  *(FScriptContainerElement **)(pFVar2 + lVar7 * 0x30) = local_1c8;
  *(undefined4 *)(pFVar2 + lVar7 * 0x30 + 8) = (undefined4)local_1c0;
  *(undefined4 *)(pFVar2 + lVar7 * 0x30 + 0xc) = local_1c0._4_4_;
  *(undefined8 *)(pFVar2 + lVar7 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(pFVar2 + lVar7 * 0x30 + 0x10) =
       local_1b8.Data.AllocatorInstance.Data;
  *(int *)(pFVar2 + lVar7 * 0x30 + 0x18) = local_1b8.Data.ArrayNum;
  *(int *)(pFVar2 + lVar7 * 0x30 + 0x1c) = local_1b8.Data.ArrayMax;
  *(undefined8 *)(pFVar2 + lVar7 * 0x30 + 0x20) = local_1a8;
  pFVar2[lVar7 * 0x30 + 0x28] = local_1a0;
  *(undefined4 *)(pFVar2 + lVar7 * 0x30 + 0x2c) = local_19c;
  local_1b8.Data.ArrayNum = 0;
  local_1b8.Data.ArrayMax = 0;
  local_1b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1c0 = 0;
  local_1c8 = (FScriptContainerElement *)0x0;
  pTVar1 = this->ParamArray;
  pFVar6 = ::FString::FString(&local_88,L"TotalRenderBoundHitches");
  if (((pFVar6->Data).ArrayNum < 2) ||
     (iVar5 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar6->Data).AllocatorInstance.Data,L"EventName"), iVar5 == 0)
     ) {
LAB_1477119d1:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidAttributeName(InName)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                       ,0x78,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
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
    iVar5 = FGenericPlatformStricmp::Stricmp(pwVar8,L"DateOffset");
    if (iVar5 == 0) goto LAB_1477119d1;
  }
  local_198 = (pFVar6->Data).AllocatorInstance.Data;
  (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_190._0_4_ = (pFVar6->Data).ArrayNum;
  local_190._4_4_ = (pFVar6->Data).ArrayMax;
  (pFVar6->Data).ArrayNum = 0;
  (pFVar6->Data).ArrayMax = 0;
  ::FString::PrintfImpl(&local_188,L"%d");
  local_178 = 0;
  local_170 = (FScriptContainerElement)0x0;
  local_16c = 4;
  pFVar2 = (pFVar6->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  if (((pFVar2 <= (FScriptContainerElement *)&local_198) &&
      ((FScriptContainerElement *)&local_198 < pFVar2 + (longlong)pTVar1->ArrayMax * 0x30)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar5 = pTVar1->ArrayNum;
  if (iVar5 == pTVar1->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&pTVar1->AllocatorInstance,&pTVar1->ArrayMax);
  }
  lVar7 = (longlong)iVar5;
  pTVar1->ArrayNum = iVar5 + 1;
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  *(undefined8 *)(pFVar2 + lVar7 * 0x30) = 0;
  *(FScriptContainerElement **)(pFVar2 + lVar7 * 0x30) = local_198;
  *(undefined4 *)(pFVar2 + lVar7 * 0x30 + 8) = (undefined4)local_190;
  *(undefined4 *)(pFVar2 + lVar7 * 0x30 + 0xc) = local_190._4_4_;
  *(undefined8 *)(pFVar2 + lVar7 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(pFVar2 + lVar7 * 0x30 + 0x10) =
       local_188.Data.AllocatorInstance.Data;
  *(int *)(pFVar2 + lVar7 * 0x30 + 0x18) = local_188.Data.ArrayNum;
  *(int *)(pFVar2 + lVar7 * 0x30 + 0x1c) = local_188.Data.ArrayMax;
  *(undefined8 *)(pFVar2 + lVar7 * 0x30 + 0x20) = local_178;
  pFVar2[lVar7 * 0x30 + 0x28] = local_170;
  *(undefined4 *)(pFVar2 + lVar7 * 0x30 + 0x2c) = local_16c;
  local_188.Data.ArrayNum = 0;
  local_188.Data.ArrayMax = 0;
  local_188.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_190 = 0;
  local_198 = (FScriptContainerElement *)0x0;
  if (this->bIncludeClientHWInfo != false) {
    pTVar1 = this->ParamArray;
    pFVar6 = ::FString::FString(&local_78,L"TotalGPUBoundHitches");
    if (((pFVar6->Data).ArrayNum < 2) ||
       (iVar5 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)(pFVar6->Data).AllocatorInstance.Data,L"EventName"),
       iVar5 == 0)) {
LAB_147711bc4:
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidAttributeName(InName)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                         ,0x78,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
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
      iVar5 = FGenericPlatformStricmp::Stricmp(pwVar8,L"DateOffset");
      if (iVar5 == 0) goto LAB_147711bc4;
    }
    local_168 = (pFVar6->Data).AllocatorInstance.Data;
    (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_160._0_4_ = (pFVar6->Data).ArrayNum;
    local_160._4_4_ = (pFVar6->Data).ArrayMax;
    (pFVar6->Data).ArrayNum = 0;
    (pFVar6->Data).ArrayMax = 0;
    ::FString::PrintfImpl(&local_158,L"%d");
    local_148 = 0;
    local_140 = (FScriptContainerElement)0x0;
    local_13c = 4;
    pFVar2 = (pFVar6->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar2 = (pTVar1->AllocatorInstance).Data;
    if (((pFVar2 <= (FScriptContainerElement *)&local_168) &&
        ((FScriptContainerElement *)&local_168 < pFVar2 + (longlong)pTVar1->ArrayMax * 0x30)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar5 = pTVar1->ArrayNum;
    if (iVar5 == pTVar1->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x830,&pTVar1->AllocatorInstance,&pTVar1->ArrayMax);
    }
    lVar7 = (longlong)iVar5;
    pTVar1->ArrayNum = iVar5 + 1;
    pFVar2 = (pTVar1->AllocatorInstance).Data;
    *(undefined8 *)(pFVar2 + lVar7 * 0x30) = 0;
    *(FScriptContainerElement **)(pFVar2 + lVar7 * 0x30) = local_168;
    *(undefined4 *)(pFVar2 + lVar7 * 0x30 + 8) = (undefined4)local_160;
    *(undefined4 *)(pFVar2 + lVar7 * 0x30 + 0xc) = local_160._4_4_;
    *(undefined8 *)(pFVar2 + lVar7 * 0x30 + 0x10) = 0;
    *(FScriptContainerElement **)(pFVar2 + lVar7 * 0x30 + 0x10) =
         local_158.Data.AllocatorInstance.Data;
    *(int *)(pFVar2 + lVar7 * 0x30 + 0x18) = local_158.Data.ArrayNum;
    *(int *)(pFVar2 + lVar7 * 0x30 + 0x1c) = local_158.Data.ArrayMax;
    *(undefined8 *)(pFVar2 + lVar7 * 0x30 + 0x20) = local_148;
    pFVar2[lVar7 * 0x30 + 0x28] = local_140;
    *(undefined4 *)(pFVar2 + lVar7 * 0x30 + 0x2c) = local_13c;
    local_158.Data.ArrayNum = 0;
    local_158.Data.ArrayMax = 0;
    local_158.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_160 = 0;
    local_168 = (FScriptContainerElement *)0x0;
  }
  pTVar1 = this->ParamArray;
  pFVar6 = ::FString::FString(&local_68,L"TotalTimeInHitchFrames");
  if (((pFVar6->Data).ArrayNum < 2) ||
     (iVar5 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar6->Data).AllocatorInstance.Data,L"EventName"), iVar5 == 0)
     ) {
LAB_147711da6:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidAttributeName(InName)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                       ,0x78,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
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
    iVar5 = FGenericPlatformStricmp::Stricmp(pwVar8,L"DateOffset");
    if (iVar5 == 0) goto LAB_147711da6;
  }
  local_138 = (pFVar6->Data).AllocatorInstance.Data;
  (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_130._0_4_ = (pFVar6->Data).ArrayNum;
  local_130._4_4_ = (pFVar6->Data).ArrayMax;
  (pFVar6->Data).ArrayNum = 0;
  (pFVar6->Data).ArrayMax = 0;
  AnalyticsConversionToString(&local_128,param_2);
  local_118 = 0;
  local_110 = (FScriptContainerElement)0x0;
  local_10c = 4;
  pFVar2 = (pFVar6->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  if (((pFVar2 <= (FScriptContainerElement *)&local_138) &&
      ((FScriptContainerElement *)&local_138 < pFVar2 + (longlong)pTVar1->ArrayMax * 0x30)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar5 = pTVar1->ArrayNum;
  if (iVar5 == pTVar1->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&pTVar1->AllocatorInstance,&pTVar1->ArrayMax);
  }
  lVar7 = (longlong)iVar5;
  pTVar1->ArrayNum = iVar5 + 1;
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  *(undefined8 *)(pFVar2 + lVar7 * 0x30) = 0;
  *(FScriptContainerElement **)(pFVar2 + lVar7 * 0x30) = local_138;
  *(undefined4 *)(pFVar2 + lVar7 * 0x30 + 8) = (undefined4)local_130;
  *(undefined4 *)(pFVar2 + lVar7 * 0x30 + 0xc) = local_130._4_4_;
  *(undefined8 *)(pFVar2 + lVar7 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(pFVar2 + lVar7 * 0x30 + 0x10) =
       local_128.Data.AllocatorInstance.Data;
  *(int *)(pFVar2 + lVar7 * 0x30 + 0x18) = local_128.Data.ArrayNum;
  *(int *)(pFVar2 + lVar7 * 0x30 + 0x1c) = local_128.Data.ArrayMax;
  *(undefined8 *)(pFVar2 + lVar7 * 0x30 + 0x20) = local_118;
  pFVar2[lVar7 * 0x30 + 0x28] = local_110;
  *(undefined4 *)(pFVar2 + lVar7 * 0x30 + 0x2c) = local_10c;
  local_128.Data.ArrayNum = 0;
  local_128.Data.ArrayMax = 0;
  local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_130 = 0;
  local_138 = (FScriptContainerElement *)0x0;
  pTVar1 = this->ParamArray;
  dVar9 = *(double *)(this->_padding_ + 0x28);
  if (dVar9 <= 0.0) {
    dVar9 = 0.0;
  }
  else {
    dVar9 = (double)*(int *)(this->_padding_ + 0x60) * (__real_404e000000000000 / dVar9);
  }
  pFVar6 = ::FString::FString(&local_58,L"HitchesPerMinute");
  if (((pFVar6->Data).ArrayNum < 2) ||
     (iVar5 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar6->Data).AllocatorInstance.Data,L"EventName"), iVar5 == 0)
     ) {
LAB_147711faa:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidAttributeName(InName)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                       ,0x78,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
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
    iVar5 = FGenericPlatformStricmp::Stricmp(pwVar8,L"DateOffset");
    if (iVar5 == 0) goto LAB_147711faa;
  }
  local_108 = (pFVar6->Data).AllocatorInstance.Data;
  (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_100._0_4_ = (pFVar6->Data).ArrayNum;
  local_100._4_4_ = (pFVar6->Data).ArrayMax;
  (pFVar6->Data).ArrayNum = 0;
  (pFVar6->Data).ArrayMax = 0;
  AnalyticsConversionToString(&local_f8,dVar9);
  local_e8 = 0;
  local_e0 = (FScriptContainerElement)0x0;
  local_dc = 4;
  pFVar2 = (pFVar6->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  if (((pFVar2 <= (FScriptContainerElement *)&local_108) &&
      ((FScriptContainerElement *)&local_108 < pFVar2 + (longlong)pTVar1->ArrayMax * 0x30)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar5 = pTVar1->ArrayNum;
  if (iVar5 == pTVar1->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&pTVar1->AllocatorInstance,&pTVar1->ArrayMax);
  }
  lVar7 = (longlong)iVar5;
  pTVar1->ArrayNum = iVar5 + 1;
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  *(undefined8 *)(pFVar2 + lVar7 * 0x30) = 0;
  *(FScriptContainerElement **)(pFVar2 + lVar7 * 0x30) = local_108;
  *(undefined4 *)(pFVar2 + lVar7 * 0x30 + 8) = (undefined4)local_100;
  *(undefined4 *)(pFVar2 + lVar7 * 0x30 + 0xc) = local_100._4_4_;
  *(undefined8 *)(pFVar2 + lVar7 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(pFVar2 + lVar7 * 0x30 + 0x10) = local_f8.Data.AllocatorInstance.Data
  ;
  *(int *)(pFVar2 + lVar7 * 0x30 + 0x18) = local_f8.Data.ArrayNum;
  *(int *)(pFVar2 + lVar7 * 0x30 + 0x1c) = local_f8.Data.ArrayMax;
  *(undefined8 *)(pFVar2 + lVar7 * 0x30 + 0x20) = local_e8;
  pFVar2[lVar7 * 0x30 + 0x28] = local_e0;
  *(undefined4 *)(pFVar2 + lVar7 * 0x30 + 0x2c) = local_dc;
  local_f8.Data.ArrayNum = 0;
  local_f8.Data.ArrayMax = 0;
  local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_100 = 0;
  local_108 = (FScriptContainerElement *)0x0;
  pTVar1 = this->ParamArray;
  dVar9 = FPerformanceTrackingChart::GetPercentHitchTime
                    ((FPerformanceTrackingChart *)this->_padding_,true);
  pFVar6 = ::FString::FString(local_48,L"PercentSpentHitching");
  if ((1 < (pFVar6->Data).ArrayNum) &&
     (iVar5 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar6->Data).AllocatorInstance.Data,L"EventName"), iVar5 != 0)
     ) {
    if ((pFVar6->Data).ArrayNum == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    }
    iVar5 = FGenericPlatformStricmp::Stricmp(pwVar8,L"DateOffset");
    if (iVar5 != 0) goto LAB_1477121b5;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValidAttributeName(InName)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                     ,0x78,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_1477121b5:
  local_d8 = (pFVar6->Data).AllocatorInstance.Data;
  (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d0._0_4_ = (pFVar6->Data).ArrayNum;
  local_d0._4_4_ = (pFVar6->Data).ArrayMax;
  (pFVar6->Data).ArrayNum = 0;
  (pFVar6->Data).ArrayMax = 0;
  AnalyticsConversionToString(&local_c8,dVar9);
  local_b8 = 0;
  local_b0 = (FScriptContainerElement)0x0;
  local_ac = 4;
  pFVar2 = (pFVar6->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  if (((pFVar2 <= (FScriptContainerElement *)&local_d8) &&
      ((FScriptContainerElement *)&local_d8 < pFVar2 + (longlong)pTVar1->ArrayMax * 0x30)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar5 = pTVar1->ArrayNum;
  if (iVar5 == pTVar1->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&pTVar1->AllocatorInstance,&pTVar1->ArrayMax);
  }
  lVar7 = (longlong)iVar5;
  pTVar1->ArrayNum = iVar5 + 1;
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  *(undefined8 *)(pFVar2 + lVar7 * 0x30) = 0;
  *(FScriptContainerElement **)(pFVar2 + lVar7 * 0x30) = local_d8;
  *(undefined4 *)(pFVar2 + lVar7 * 0x30 + 8) = (undefined4)local_d0;
  *(undefined4 *)(pFVar2 + lVar7 * 0x30 + 0xc) = local_d0._4_4_;
  *(undefined8 *)(pFVar2 + lVar7 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(pFVar2 + lVar7 * 0x30 + 0x10) = local_c8.Data.AllocatorInstance.Data
  ;
  *(int *)(pFVar2 + lVar7 * 0x30 + 0x18) = local_c8.Data.ArrayNum;
  *(int *)(pFVar2 + lVar7 * 0x30 + 0x1c) = local_c8.Data.ArrayMax;
  *(undefined8 *)(pFVar2 + lVar7 * 0x30 + 0x20) = local_b8;
  pFVar2[lVar7 * 0x30 + 0x28] = local_b0;
  *(undefined4 *)(pFVar2 + lVar7 * 0x30 + 0x2c) = local_ac;
  return;
}

// PrintToEndpoint @ 147721b60

void __thiscall
FDumpFPSChartToAnalyticsArray::PrintToEndpoint(FDumpFPSChartToAnalyticsArray *this,FString *param_1)

{
  return;
}

