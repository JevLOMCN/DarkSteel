// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnalyticsET
// Functions: 20

// EndFlow @ 1431983c0

bool __thiscall
FAnalyticsFlowTracker::EndFlow
          (FAnalyticsFlowTracker *this,FGuid *param_1,bool param_2,
          TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *param_3)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  bool bVar1;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    bVar1 = EndFlowInternal(this,param_1,param_2,param_3);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// EndFlow @ 143198450

bool __thiscall
FAnalyticsFlowTracker::EndFlow
          (FAnalyticsFlowTracker *this,FName *param_1,bool param_2,
          TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *param_3)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  bool bVar1;
  FGuid *pFVar2;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar2 = TMapBase<FName,FGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGuid,0>_>
             ::Find((TMapBase<FName,FGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGuid,0>_>
                     *)this,*param_1);
    if (pFVar2 == (FGuid *)0x0) {
      bVar1 = false;
    }
    else {
      bVar1 = EndFlowInternal(this,pFVar2,param_2,param_3);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// EndFlow @ 1431984f0

bool __thiscall
FAnalyticsFlowTracker::EndFlow
          (FAnalyticsFlowTracker *this,bool param_1,
          TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar1 = (this->FlowDataStack).ArrayNum;
  if (iVar1 == 0) {
    bVar3 = false;
  }
  else {
    uVar5 = 0;
    if ((int)(iVar1 - 1U) < iVar1) {
      uVar5 = ~(iVar1 - 1U) >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    bVar3 = EndFlowInternal(this,(FGuid *)((this->FlowDataStack).AllocatorInstance.Data +
                                          (longlong)((this->FlowDataStack).ArrayNum + -1) * 0x10),
                            param_1,param_2);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return bVar3;
}

// EndFlowInternal @ 1431985e0

/* WARNING: Removing unreachable block (ram,0x0001431994cc) */
/* WARNING: Removing unreachable block (ram,0x0001431990a3) */
/* WARNING: Removing unreachable block (ram,0x000143198d18) */
/* WARNING: Removing unreachable block (ram,0x0001431988f0) */
/* WARNING: Removing unreachable block (ram,0x000143198b10) */
/* WARNING: Removing unreachable block (ram,0x000143198f0a) */
/* WARNING: Removing unreachable block (ram,0x0001431992a8) */
/* WARNING: Removing unreachable block (ram,0x00014319986b) */
/* WARNING: Removing unreachable block (ram,0x0001431994dd) */
/* WARNING: Removing unreachable block (ram,0x0001431990b1) */
/* WARNING: Removing unreachable block (ram,0x000143198d26) */
/* WARNING: Removing unreachable block (ram,0x0001431988fe) */
/* WARNING: Removing unreachable block (ram,0x000143198b1f) */
/* WARNING: Removing unreachable block (ram,0x000143198f18) */
/* WARNING: Removing unreachable block (ram,0x0001431992b6) */
/* WARNING: Removing unreachable block (ram,0x00014319987c) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FAnalyticsFlowTracker::EndFlowInternal
          (FAnalyticsFlowTracker *this,FGuid *param_1,bool param_2,
          TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *param_3)

{
  FAnalyticsEventAttribute *pFVar1;
  FScriptContainerElement *pFVar2;
  undefined1 *puVar3;
  IAnalyticsProvider *pIVar4;
  code *pcVar5;
  double dVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  uint uVar10;
  ulong64 uVar11;
  FDateTime FVar12;
  FString *pFVar13;
  FString *pFVar14;
  wchar_t *pwVar15;
  wchar_t *pwVar16;
  uint *puVar17;
  undefined1 *puVar18;
  uint *puVar19;
  uint uVar20;
  uint *puVar21;
  FName FVar22;
  FName FVar23;
  longlong lVar24;
  FName *this_00;
  TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> local_2c8;
  undefined1 local_2b8;
  undefined1 local_2b7;
  undefined1 local_2b6;
  undefined1 local_2b5 [5];
  FString local_2b0;
  FAnalyticsEventAttribute local_2a0;
  FAnalyticsEventAttribute local_270;
  FAnalyticsEventAttribute local_240;
  FAnalyticsEventAttribute local_210;
  FAnalyticsEventAttribute local_1e0;
  FAnalyticsEventAttribute local_1b0;
  FAnalyticsEventAttribute local_180;
  FAnalyticsEventAttribute local_150;
  FGuid local_120;
  FGuid local_110;
  TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> local_100;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58 [3];
  
  if (((param_1->B == 0 && param_1->A == 0) && param_1->C == 0) && param_1->D == 0) {
    return false;
  }
  uVar11 = CityHash64((char *)param_1,0x10);
  iVar9 = TSet<TTuple<FGuid,FAnalyticsFlowTracker::FFlowData>,TDefaultMapHashableKeyFuncs<FGuid,FAnalyticsFlowTracker::FFlowData,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>
                    ((TSet<TTuple<FGuid,FAnalyticsFlowTracker::FFlowData>,TDefaultMapHashableKeyFuncs<FGuid,FAnalyticsFlowTracker::FFlowData,0>,FDefaultSetAllocator>
                      *)&this->FlowDataRegistry,(uint)uVar11,param_1);
  if (iVar9 == -1) {
    return false;
  }
  lVar24 = (longlong)iVar9 * 0x70 + *(longlong *)&this->FlowDataRegistry;
  this_00 = (FName *)(lVar24 + 0x10);
  if (lVar24 == 0) {
    this_00 = (FName *)0x0;
  }
  if (this_00 == (FName *)0x0) {
    return false;
  }
  FVar12 = FDateTime::UtcNow();
  FVar23 = *(FName *)FVar12.Ticks;
  this_00[4] = FVar23;
  this_00[6] = (FName)((double)((longlong)FVar23 - (longlong)this_00[3]) * __real_3e7ad7f29abcaf48);
  local_2c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar9 = param_3->ArrayNum;
  pFVar1 = (FAnalyticsEventAttribute *)(param_3->AllocatorInstance).Data;
  local_2c8.ArrayNum = iVar9;
  if (iVar9 == 0) {
    local_2c8.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,iVar9,0,&local_2c8.AllocatorInstance,iVar9,&local_2c8.ArrayMax);
    ConstructItems<FAnalyticsEventAttribute,FAnalyticsEventAttribute,int>
              (local_2c8.AllocatorInstance.Data,pFVar1,iVar9);
  }
  pFVar13 = ::FString::FString(&local_c8,L"SchemaVersion");
  if (((pFVar13->Data).ArrayNum < 2) ||
     (iVar9 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar13->Data).AllocatorInstance.Data,L"EventName"), iVar9 == 0
     )) {
LAB_14319875d:
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidAttributeName(InName)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                       ,0x78,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return (bool)uVar8;
    }
  }
  else {
    if ((pFVar13->Data).ArrayNum == 0) {
      pwVar16 = L"";
    }
    else {
      pwVar16 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
    }
    iVar9 = FGenericPlatformStricmp::Stricmp(pwVar16,L"DateOffset");
    if (iVar9 == 0) goto LAB_14319875d;
  }
  local_210.AttrName.Data.AllocatorInstance.Data = (pFVar13->Data).AllocatorInstance.Data;
  (pFVar13->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_210.AttrName.Data.ArrayNum = (pFVar13->Data).ArrayNum;
  local_210.AttrName.Data.ArrayMax = (pFVar13->Data).ArrayMax;
  (pFVar13->Data).ArrayNum = 0;
  (pFVar13->Data).ArrayMax = 0;
  ::FString::PrintfImpl(&local_210.AttrValueString,L"%u");
  local_210.AttrValueBool = false;
  local_210.AttrValueNumber = 0.0;
  local_210.AttrType = JsonFragment;
  pFVar2 = (pFVar13->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  if (((local_2c8.AllocatorInstance.Data <= &local_210) &&
      (&local_210 <
       (FAnalyticsEventAttribute *)
       (local_2c8.AllocatorInstance.Data + (longlong)local_2c8.ArrayMax * 0x30))) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  if (local_2c8.ArrayNum == local_2c8.ArrayMax) {
    local_2c8.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x830,&local_2c8.AllocatorInstance,&local_2c8.ArrayMax);
  }
  lVar24 = (longlong)local_2c8.ArrayNum;
  *(undefined8 *)&local_2c8.AllocatorInstance.Data[lVar24 * 0x30].field_0x0 = 0;
  *(FScriptContainerElement **)&local_2c8.AllocatorInstance.Data[lVar24 * 0x30].field_0x0 =
       local_210.AttrName.Data.AllocatorInstance.Data;
  *(int *)(local_2c8.AllocatorInstance.Data + lVar24 * 0x30 + 8) = local_210.AttrName.Data.ArrayNum;
  *(int *)(local_2c8.AllocatorInstance.Data + lVar24 * 0x30 + 0xc) =
       local_210.AttrName.Data.ArrayMax;
  *(undefined8 *)(local_2c8.AllocatorInstance.Data + lVar24 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(local_2c8.AllocatorInstance.Data + lVar24 * 0x30 + 0x10) =
       local_210.AttrValueString.Data.AllocatorInstance.Data;
  *(int *)(local_2c8.AllocatorInstance.Data + lVar24 * 0x30 + 0x18) =
       local_210.AttrValueString.Data.ArrayNum;
  *(int *)(local_2c8.AllocatorInstance.Data + lVar24 * 0x30 + 0x1c) =
       local_210.AttrValueString.Data.ArrayMax;
  *(double *)(local_2c8.AllocatorInstance.Data + lVar24 * 0x30 + 0x20) = local_210.AttrValueNumber;
  local_2c8.AllocatorInstance.Data[lVar24 * 0x30 + 0x28] =
       (FScriptContainerElement)local_210.AttrValueBool;
  *(AttrTypeEnum *)(local_2c8.AllocatorInstance.Data + lVar24 * 0x30 + 0x2c) = local_210.AttrType;
  local_210.AttrValueString.Data.ArrayNum = 0;
  local_210.AttrValueString.Data.ArrayMax = 0;
  local_210.AttrValueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_210.AttrName.Data.ArrayNum = 0;
  local_210.AttrName.Data.ArrayMax = 0;
  local_210.AttrName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2b0.Data.ArrayNum = 0;
  local_2b0.Data.ArrayMax = 0;
  local_2c8.ArrayNum = local_2c8.ArrayNum + 1;
  FGuid::AppendString((FGuid *)(this_00 + 1),&local_2b0,Digits);
  pFVar13 = ::FString::FString(&local_b8,L"FlowGUID");
  if (((pFVar13->Data).ArrayNum < 2) ||
     (iVar9 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar13->Data).AllocatorInstance.Data,L"EventName"), iVar9 == 0
     )) {
LAB_143198970:
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidAttributeName(InName)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                       ,0x78,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return (bool)uVar8;
    }
  }
  else {
    if ((pFVar13->Data).ArrayNum == 0) {
      pwVar16 = L"";
    }
    else {
      pwVar16 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
    }
    iVar9 = FGenericPlatformStricmp::Stricmp(pwVar16,L"DateOffset");
    if (iVar9 == 0) goto LAB_143198970;
  }
  local_2a0.AttrName.Data.AllocatorInstance.Data = (pFVar13->Data).AllocatorInstance.Data;
  (pFVar13->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2a0.AttrName.Data.ArrayNum = (pFVar13->Data).ArrayNum;
  local_2a0.AttrName.Data.ArrayMax = (pFVar13->Data).ArrayMax;
  (pFVar13->Data).ArrayNum = 0;
  (pFVar13->Data).ArrayMax = 0;
  local_2a0.AttrValueString.Data.AllocatorInstance.Data = local_2b0.Data.AllocatorInstance.Data;
  local_2a0.AttrValueString.Data.ArrayNum = local_2b0.Data.ArrayNum;
  local_2a0.AttrValueString.Data.ArrayMax = local_2b0.Data.ArrayMax;
  local_2b0.Data.ArrayNum = 0;
  local_2b0.Data.ArrayMax = 0;
  local_2a0.AttrValueNumber = 0.0;
  local_2b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2a0.AttrValueBool = false;
  local_2a0.AttrType = String;
  pFVar2 = (pFVar13->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  if (((local_2c8.AllocatorInstance.Data <= &local_2a0) &&
      (&local_2a0 <
       (FAnalyticsEventAttribute *)
       (local_2c8.AllocatorInstance.Data + (longlong)local_2c8.ArrayMax * 0x30))) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  if (local_2c8.ArrayNum == local_2c8.ArrayMax) {
    local_2c8.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x830,&local_2c8.AllocatorInstance,&local_2c8.ArrayMax);
  }
  iVar9 = local_2c8.ArrayNum + 1;
  lVar24 = (longlong)local_2c8.ArrayNum;
  *(undefined8 *)&local_2c8.AllocatorInstance.Data[lVar24 * 0x30].field_0x0 = 0;
  *(FScriptContainerElement **)&local_2c8.AllocatorInstance.Data[lVar24 * 0x30].field_0x0 =
       local_2a0.AttrName.Data.AllocatorInstance.Data;
  *(int *)(local_2c8.AllocatorInstance.Data + lVar24 * 0x30 + 8) = local_2a0.AttrName.Data.ArrayNum;
  *(int *)(local_2c8.AllocatorInstance.Data + lVar24 * 0x30 + 0xc) =
       local_2a0.AttrName.Data.ArrayMax;
  *(undefined8 *)(local_2c8.AllocatorInstance.Data + lVar24 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(local_2c8.AllocatorInstance.Data + lVar24 * 0x30 + 0x10) =
       local_2a0.AttrValueString.Data.AllocatorInstance.Data;
  *(int *)(local_2c8.AllocatorInstance.Data + lVar24 * 0x30 + 0x18) =
       local_2a0.AttrValueString.Data.ArrayNum;
  *(int *)(local_2c8.AllocatorInstance.Data + lVar24 * 0x30 + 0x1c) =
       local_2a0.AttrValueString.Data.ArrayMax;
  *(double *)(local_2c8.AllocatorInstance.Data + lVar24 * 0x30 + 0x20) = local_2a0.AttrValueNumber;
  local_2c8.AllocatorInstance.Data[lVar24 * 0x30 + 0x28] =
       (FScriptContainerElement)local_2a0.AttrValueBool;
  *(AttrTypeEnum *)(local_2c8.AllocatorInstance.Data + lVar24 * 0x30 + 0x2c) = local_2a0.AttrType;
  local_2a0.AttrValueString.Data.ArrayNum = 0;
  local_2a0.AttrValueString.Data.ArrayMax = 0;
  local_2a0.AttrValueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2a0.AttrName.Data.ArrayNum = 0;
  local_2a0.AttrName.Data.ArrayMax = 0;
  local_2a0.AttrName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2c8.ArrayNum = iVar9;
  if (local_2b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b0.Data.AllocatorInstance.Data);
  }
  pFVar13 = ::FName::ToString(this_00,&local_e8);
  pFVar14 = ::FString::FString(&local_a8,L"FlowName");
  if (((pFVar14->Data).ArrayNum < 2) ||
     (iVar9 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar14->Data).AllocatorInstance.Data,L"EventName"), iVar9 == 0
     )) {
LAB_143198b92:
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidAttributeName(InName)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                       ,0x78,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return (bool)uVar8;
    }
  }
  else {
    if ((pFVar14->Data).ArrayNum == 0) {
      pwVar16 = L"";
    }
    else {
      pwVar16 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
    }
    iVar9 = FGenericPlatformStricmp::Stricmp(pwVar16,L"DateOffset");
    if (iVar9 == 0) goto LAB_143198b92;
  }
  local_270.AttrName.Data.AllocatorInstance.Data = (pFVar14->Data).AllocatorInstance.Data;
  (pFVar14->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_270.AttrName.Data.ArrayNum = (pFVar14->Data).ArrayNum;
  local_270.AttrName.Data.ArrayMax = (pFVar14->Data).ArrayMax;
  (pFVar14->Data).ArrayNum = 0;
  (pFVar14->Data).ArrayMax = 0;
  local_270.AttrValueString.Data.AllocatorInstance.Data = (pFVar13->Data).AllocatorInstance.Data;
  (pFVar13->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_270.AttrValueString.Data.ArrayNum = (pFVar13->Data).ArrayNum;
  local_270.AttrValueString.Data.ArrayMax = (pFVar13->Data).ArrayMax;
  (pFVar13->Data).ArrayNum = 0;
  (pFVar13->Data).ArrayMax = 0;
  local_270.AttrType = String;
  local_270.AttrValueNumber = 0.0;
  local_270.AttrValueBool = false;
  pFVar2 = (pFVar14->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  if (((local_2c8.AllocatorInstance.Data <= &local_270) &&
      (&local_270 <
       (FAnalyticsEventAttribute *)
       (local_2c8.AllocatorInstance.Data + (longlong)local_2c8.ArrayMax * 0x30))) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  if (local_2c8.ArrayNum == local_2c8.ArrayMax) {
    local_2c8.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x830,&local_2c8.AllocatorInstance,&local_2c8.ArrayMax);
  }
  iVar9 = local_2c8.ArrayNum + 1;
  lVar24 = (longlong)local_2c8.ArrayNum;
  *(undefined8 *)&local_2c8.AllocatorInstance.Data[lVar24 * 0x30].field_0x0 = 0;
  *(FScriptContainerElement **)&local_2c8.AllocatorInstance.Data[lVar24 * 0x30].field_0x0 =
       local_270.AttrName.Data.AllocatorInstance.Data;
  *(int *)(local_2c8.AllocatorInstance.Data + lVar24 * 0x30 + 8) = local_270.AttrName.Data.ArrayNum;
  *(int *)(local_2c8.AllocatorInstance.Data + lVar24 * 0x30 + 0xc) =
       local_270.AttrName.Data.ArrayMax;
  *(undefined8 *)(local_2c8.AllocatorInstance.Data + lVar24 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(local_2c8.AllocatorInstance.Data + lVar24 * 0x30 + 0x10) =
       local_270.AttrValueString.Data.AllocatorInstance.Data;
  *(int *)(local_2c8.AllocatorInstance.Data + lVar24 * 0x30 + 0x18) =
       local_270.AttrValueString.Data.ArrayNum;
  *(int *)(local_2c8.AllocatorInstance.Data + lVar24 * 0x30 + 0x1c) =
       local_270.AttrValueString.Data.ArrayMax;
  *(double *)(local_2c8.AllocatorInstance.Data + lVar24 * 0x30 + 0x20) = local_270.AttrValueNumber;
  local_2c8.AllocatorInstance.Data[lVar24 * 0x30 + 0x28] =
       (FScriptContainerElement)local_270.AttrValueBool;
  *(AttrTypeEnum *)(local_2c8.AllocatorInstance.Data + lVar24 * 0x30 + 0x2c) = local_270.AttrType;
  local_270.AttrValueString.Data.ArrayNum = 0;
  local_270.AttrValueString.Data.ArrayMax = 0;
  local_270.AttrValueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_270.AttrName.Data.ArrayNum = 0;
  local_270.AttrName.Data.ArrayMax = 0;
  local_270.AttrName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2c8.ArrayNum = iVar9;
  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  pFVar13 = ::FString::FString(&local_98,L"ThreadId");
  if (((pFVar13->Data).ArrayNum < 2) ||
     (iVar9 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar13->Data).AllocatorInstance.Data,L"EventName"), iVar9 == 0
     )) {
LAB_143198d88:
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidAttributeName(InName)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                       ,0x78,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return (bool)uVar8;
    }
  }
  else {
    if ((pFVar13->Data).ArrayNum == 0) {
      pwVar16 = L"";
    }
    else {
      pwVar16 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
    }
    iVar9 = FGenericPlatformStricmp::Stricmp(pwVar16,L"DateOffset");
    if (iVar9 == 0) goto LAB_143198d88;
  }
  local_1e0.AttrName.Data.AllocatorInstance.Data = (pFVar13->Data).AllocatorInstance.Data;
  (pFVar13->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1e0.AttrName.Data.ArrayNum = (pFVar13->Data).ArrayNum;
  local_1e0.AttrName.Data.ArrayMax = (pFVar13->Data).ArrayMax;
  (pFVar13->Data).ArrayNum = 0;
  (pFVar13->Data).ArrayMax = 0;
  ::FString::PrintfImpl(&local_1e0.AttrValueString,L"%u");
  local_1e0.AttrValueNumber = 0.0;
  local_1e0.AttrValueBool = false;
  local_1e0.AttrType = JsonFragment;
  pFVar2 = (pFVar13->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  if (((local_2c8.AllocatorInstance.Data <= &local_1e0) &&
      (&local_1e0 <
       (FAnalyticsEventAttribute *)
       (local_2c8.AllocatorInstance.Data + (longlong)local_2c8.ArrayMax * 0x30))) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  if (local_2c8.ArrayNum == local_2c8.ArrayMax) {
    local_2c8.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x830,&local_2c8.AllocatorInstance,&local_2c8.ArrayMax);
  }
  lVar24 = (longlong)local_2c8.ArrayNum;
  *(undefined8 *)&local_2c8.AllocatorInstance.Data[lVar24 * 0x30].field_0x0 = 0;
  *(FScriptContainerElement **)&local_2c8.AllocatorInstance.Data[lVar24 * 0x30].field_0x0 =
       local_1e0.AttrName.Data.AllocatorInstance.Data;
  *(int *)(local_2c8.AllocatorInstance.Data + lVar24 * 0x30 + 8) = local_1e0.AttrName.Data.ArrayNum;
  *(int *)(local_2c8.AllocatorInstance.Data + lVar24 * 0x30 + 0xc) =
       local_1e0.AttrName.Data.ArrayMax;
  *(undefined8 *)(local_2c8.AllocatorInstance.Data + lVar24 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(local_2c8.AllocatorInstance.Data + lVar24 * 0x30 + 0x10) =
       local_1e0.AttrValueString.Data.AllocatorInstance.Data;
  *(int *)(local_2c8.AllocatorInstance.Data + lVar24 * 0x30 + 0x18) =
       local_1e0.AttrValueString.Data.ArrayNum;
  *(int *)(local_2c8.AllocatorInstance.Data + lVar24 * 0x30 + 0x1c) =
       local_1e0.AttrValueString.Data.ArrayMax;
  *(double *)(local_2c8.AllocatorInstance.Data + lVar24 * 0x30 + 0x20) = local_1e0.AttrValueNumber;
  local_2c8.AllocatorInstance.Data[lVar24 * 0x30 + 0x28] =
       (FScriptContainerElement)local_1e0.AttrValueBool;
  *(AttrTypeEnum *)(local_2c8.AllocatorInstance.Data + lVar24 * 0x30 + 0x2c) = local_1e0.AttrType;
  local_1e0.AttrValueString.Data.ArrayNum = 0;
  local_1e0.AttrValueString.Data.ArrayMax = 0;
  local_1e0.AttrValueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1e0.AttrName.Data.ArrayNum = 0;
  local_1e0.AttrName.Data.ArrayMax = 0;
  local_1e0.AttrName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2c8.ArrayNum = local_2c8.ArrayNum + 1;
  dVar6 = FDateTime::ToUnixTimestampDecimal((FDateTime *)(this_00 + 3));
  pFVar13 = ::FString::FString(&local_88,L"StartUTC");
  pFVar14 = FAnalyticsEventAttribute::CheckName(&local_240,pFVar13);
  local_240.AttrName.Data.AllocatorInstance.Data = (pFVar14->Data).AllocatorInstance.Data;
  (pFVar14->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_240.AttrName.Data.ArrayNum = (pFVar14->Data).ArrayNum;
  local_240.AttrName.Data.ArrayMax = (pFVar14->Data).ArrayMax;
  (pFVar14->Data).ArrayNum = 0;
  (pFVar14->Data).ArrayMax = 0;
  AnalyticsConversionToString(&local_240.AttrValueString,dVar6);
  local_240.AttrValueNumber = 0.0;
  local_240.AttrValueBool = false;
  local_240.AttrType = JsonFragment;
  pFVar2 = (pFVar13->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  if (((local_2c8.AllocatorInstance.Data <= &local_240) &&
      (&local_240 <
       (FAnalyticsEventAttribute *)
       (local_2c8.AllocatorInstance.Data + (longlong)local_2c8.ArrayMax * 0x30))) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  if (local_2c8.ArrayNum == local_2c8.ArrayMax) {
    local_2c8.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x830,&local_2c8.AllocatorInstance,&local_2c8.ArrayMax);
  }
  lVar24 = (longlong)local_2c8.ArrayNum;
  *(undefined8 *)&local_2c8.AllocatorInstance.Data[lVar24 * 0x30].field_0x0 = 0;
  *(FScriptContainerElement **)&local_2c8.AllocatorInstance.Data[lVar24 * 0x30].field_0x0 =
       local_240.AttrName.Data.AllocatorInstance.Data;
  *(int *)(local_2c8.AllocatorInstance.Data + lVar24 * 0x30 + 8) = local_240.AttrName.Data.ArrayNum;
  *(int *)(local_2c8.AllocatorInstance.Data + lVar24 * 0x30 + 0xc) =
       local_240.AttrName.Data.ArrayMax;
  *(undefined8 *)(local_2c8.AllocatorInstance.Data + lVar24 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(local_2c8.AllocatorInstance.Data + lVar24 * 0x30 + 0x10) =
       local_240.AttrValueString.Data.AllocatorInstance.Data;
  *(int *)(local_2c8.AllocatorInstance.Data + lVar24 * 0x30 + 0x18) =
       local_240.AttrValueString.Data.ArrayNum;
  *(int *)(local_2c8.AllocatorInstance.Data + lVar24 * 0x30 + 0x1c) =
       local_240.AttrValueString.Data.ArrayMax;
  *(double *)(local_2c8.AllocatorInstance.Data + lVar24 * 0x30 + 0x20) = local_240.AttrValueNumber;
  local_2c8.AllocatorInstance.Data[lVar24 * 0x30 + 0x28] =
       (FScriptContainerElement)local_240.AttrValueBool;
  *(AttrTypeEnum *)(local_2c8.AllocatorInstance.Data + lVar24 * 0x30 + 0x2c) = local_240.AttrType;
  local_240.AttrValueString.Data.ArrayNum = 0;
  local_240.AttrValueString.Data.ArrayMax = 0;
  local_240.AttrValueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_240.AttrName.Data.ArrayNum = 0;
  local_240.AttrName.Data.ArrayMax = 0;
  local_240.AttrName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2c8.ArrayNum = local_2c8.ArrayNum + 1;
  pFVar13 = ::FString::FString(&local_78,L"Success");
  if (((pFVar13->Data).ArrayNum < 2) ||
     (iVar9 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar13->Data).AllocatorInstance.Data,L"EventName"), iVar9 == 0
     )) {
LAB_143199102:
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidAttributeName(InName)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                       ,0x78,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return (bool)uVar8;
    }
  }
  else {
    if ((pFVar13->Data).ArrayNum == 0) {
      pwVar16 = L"";
    }
    else {
      pwVar16 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
    }
    iVar9 = FGenericPlatformStricmp::Stricmp(pwVar16,L"DateOffset");
    if (iVar9 == 0) goto LAB_143199102;
  }
  local_1b0.AttrName.Data.AllocatorInstance.Data = (pFVar13->Data).AllocatorInstance.Data;
  pwVar16 = L"true";
  (pFVar13->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1b0.AttrName.Data.ArrayNum = (pFVar13->Data).ArrayNum;
  local_1b0.AttrName.Data.ArrayMax = (pFVar13->Data).ArrayMax;
  if (!param_2) {
    pwVar16 = L"false";
  }
  (pFVar13->Data).ArrayNum = 0;
  (pFVar13->Data).ArrayMax = 0;
  ::FString::FString(&local_1b0.AttrValueString,pwVar16);
  local_1b0.AttrValueNumber = 0.0;
  local_1b0.AttrValueBool = false;
  local_1b0.AttrType = JsonFragment;
  pFVar2 = (pFVar13->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  if (((local_2c8.AllocatorInstance.Data <= &local_1b0) &&
      (&local_1b0 <
       (FAnalyticsEventAttribute *)
       (local_2c8.AllocatorInstance.Data + (longlong)local_2c8.ArrayMax * 0x30))) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  if (local_2c8.ArrayNum == local_2c8.ArrayMax) {
    local_2c8.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x830,&local_2c8.AllocatorInstance,&local_2c8.ArrayMax);
  }
  lVar24 = (longlong)local_2c8.ArrayNum;
  *(undefined8 *)&local_2c8.AllocatorInstance.Data[lVar24 * 0x30].field_0x0 = 0;
  *(FScriptContainerElement **)&local_2c8.AllocatorInstance.Data[lVar24 * 0x30].field_0x0 =
       local_1b0.AttrName.Data.AllocatorInstance.Data;
  *(int *)(local_2c8.AllocatorInstance.Data + lVar24 * 0x30 + 8) = local_1b0.AttrName.Data.ArrayNum;
  *(int *)(local_2c8.AllocatorInstance.Data + lVar24 * 0x30 + 0xc) =
       local_1b0.AttrName.Data.ArrayMax;
  *(undefined8 *)(local_2c8.AllocatorInstance.Data + lVar24 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(local_2c8.AllocatorInstance.Data + lVar24 * 0x30 + 0x10) =
       local_1b0.AttrValueString.Data.AllocatorInstance.Data;
  *(int *)(local_2c8.AllocatorInstance.Data + lVar24 * 0x30 + 0x18) =
       local_1b0.AttrValueString.Data.ArrayNum;
  *(int *)(local_2c8.AllocatorInstance.Data + lVar24 * 0x30 + 0x1c) =
       local_1b0.AttrValueString.Data.ArrayMax;
  *(double *)(local_2c8.AllocatorInstance.Data + lVar24 * 0x30 + 0x20) = local_1b0.AttrValueNumber;
  local_2c8.AllocatorInstance.Data[lVar24 * 0x30 + 0x28] =
       (FScriptContainerElement)local_1b0.AttrValueBool;
  *(AttrTypeEnum *)(local_2c8.AllocatorInstance.Data + lVar24 * 0x30 + 0x2c) = local_1b0.AttrType;
  local_1b0.AttrValueString.Data.ArrayNum = 0;
  local_1b0.AttrValueString.Data.ArrayMax = 0;
  local_1b0.AttrValueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1b0.AttrName.Data.ArrayNum = 0;
  local_1b0.AttrName.Data.ArrayMax = 0;
  local_1b0.AttrName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2c8.ArrayNum = local_2c8.ArrayNum + 1;
  pFVar13 = ::FString::FString(&local_68,L"WallTimeInSec");
  if (((pFVar13->Data).ArrayNum < 2) ||
     (iVar9 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar13->Data).AllocatorInstance.Data,L"EventName"), iVar9 == 0
     )) {
LAB_143199307:
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidAttributeName(InName)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                       ,0x78,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return (bool)uVar8;
    }
  }
  else {
    if ((pFVar13->Data).ArrayNum == 0) {
      pwVar16 = L"";
    }
    else {
      pwVar16 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
    }
    iVar9 = FGenericPlatformStricmp::Stricmp(pwVar16,L"DateOffset");
    if (iVar9 == 0) goto LAB_143199307;
  }
  local_180.AttrName.Data.AllocatorInstance.Data = (pFVar13->Data).AllocatorInstance.Data;
  (pFVar13->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_180.AttrName.Data.ArrayNum = (pFVar13->Data).ArrayNum;
  local_180.AttrName.Data.ArrayMax = (pFVar13->Data).ArrayMax;
  (pFVar13->Data).ArrayNum = 0;
  (pFVar13->Data).ArrayMax = 0;
  AnalyticsConversionToString(&local_180.AttrValueString,(double)this_00[6]);
  local_180.AttrValueNumber = 0.0;
  local_180.AttrValueBool = false;
  local_180.AttrType = JsonFragment;
  pFVar2 = (pFVar13->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  if (((local_2c8.AllocatorInstance.Data <= &local_180) &&
      (&local_180 <
       (FAnalyticsEventAttribute *)
       (local_2c8.AllocatorInstance.Data + (longlong)local_2c8.ArrayMax * 0x30))) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  if (local_2c8.ArrayNum == local_2c8.ArrayMax) {
    local_2c8.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x830,&local_2c8.AllocatorInstance,&local_2c8.ArrayMax);
  }
  lVar24 = (longlong)local_2c8.ArrayNum;
  *(undefined8 *)&local_2c8.AllocatorInstance.Data[lVar24 * 0x30].field_0x0 = 0;
  *(FScriptContainerElement **)&local_2c8.AllocatorInstance.Data[lVar24 * 0x30].field_0x0 =
       local_180.AttrName.Data.AllocatorInstance.Data;
  *(int *)(local_2c8.AllocatorInstance.Data + lVar24 * 0x30 + 8) = local_180.AttrName.Data.ArrayNum;
  *(int *)(local_2c8.AllocatorInstance.Data + lVar24 * 0x30 + 0xc) =
       local_180.AttrName.Data.ArrayMax;
  *(undefined8 *)(local_2c8.AllocatorInstance.Data + lVar24 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(local_2c8.AllocatorInstance.Data + lVar24 * 0x30 + 0x10) =
       local_180.AttrValueString.Data.AllocatorInstance.Data;
  *(int *)(local_2c8.AllocatorInstance.Data + lVar24 * 0x30 + 0x18) =
       local_180.AttrValueString.Data.ArrayNum;
  *(int *)(local_2c8.AllocatorInstance.Data + lVar24 * 0x30 + 0x1c) =
       local_180.AttrValueString.Data.ArrayMax;
  *(double *)(local_2c8.AllocatorInstance.Data + lVar24 * 0x30 + 0x20) = local_180.AttrValueNumber;
  local_2c8.AllocatorInstance.Data[lVar24 * 0x30 + 0x28] =
       (FScriptContainerElement)local_180.AttrValueBool;
  *(AttrTypeEnum *)(local_2c8.AllocatorInstance.Data + lVar24 * 0x30 + 0x2c) = local_180.AttrType;
  local_180.AttrValueString.Data.ArrayNum = 0;
  local_180.AttrValueString.Data.ArrayMax = 0;
  local_180.AttrValueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_180.AttrName.Data.ArrayNum = 0;
  local_180.AttrName.Data.ArrayMax = 0;
  local_180.AttrName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  uVar20 = this_00[8].ComparisonIndex.Value;
  dVar6 = 0.0;
  FVar23 = this_00[7];
  FVar22 = (FName)((longlong)(int)uVar20 * 0x10 + (longlong)FVar23);
  puVar19 = (uint *)0x0;
  local_2c8.ArrayNum = local_2c8.ArrayNum + 1;
  while( true ) {
    if (this_00[8].ComparisonIndex.Value != uVar20) {
      local_2b8 = 0;
      `TCheckedPointerIterator<FGuid,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_2b8);
    }
    if (FVar23 == FVar22) break;
    local_110._0_8_ = *(undefined8 *)FVar23;
    local_110._8_8_ = *(undefined8 *)((longlong)FVar23 + 8);
    local_100.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_100.ArrayNum = 0;
    local_100.ArrayMax = 0;
    EndSubFlowInternal(this,&local_110,true,&local_100);
    DestructItems<FAnalyticsEventAttribute,int>((FAnalyticsEventAttribute *)0x0,0);
    uVar11 = CityHash64((char *)&local_110,0x10);
    puVar21 = puVar19;
    if (*(int *)&(this->SubFlowDataRegistry).field_0x8 !=
        *(int *)&(this->SubFlowDataRegistry).field_0x34) {
      puVar3 = *(undefined1 **)&(this->SubFlowDataRegistry).field_0x40;
      puVar18 = &(this->SubFlowDataRegistry).field_0x38;
      if (puVar3 != (undefined1 *)0x0) {
        puVar18 = puVar3;
      }
      uVar10 = *(uint *)(puVar18 +
                        ((ulonglong)(*(int *)&(this->SubFlowDataRegistry).field_0x48 - 1) &
                        uVar11 & 0xffffffff) * 4);
      if (uVar10 != 0xffffffff) {
        do {
          puVar17 = (uint *)((longlong)(int)uVar10 * 0x80 + *(longlong *)&this->SubFlowDataRegistry)
          ;
          if (((local_110.D == puVar17[3] && local_110.C == puVar17[2]) && local_110.B == puVar17[1]
              ) && local_110.A == *puVar17) {
            puVar21 = puVar17 + 4;
            if (puVar17 == (uint *)0x0) {
              puVar21 = puVar19;
            }
            if (puVar21 != (uint *)0x0) goto LAB_143199616;
            break;
          }
          uVar10 = puVar17[0x1e];
        } while (uVar10 != 0xffffffff);
      }
    }
    local_2b7 = 0;
    bVar7 = `FAnalyticsFlowTracker::EndFlowInternal'::__l11::<lambda_1>::operator()(&local_2b7);
    if (bVar7) {
LAB_143199616:
      AggregateAttributes(&local_2c8,
                          (TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *)
                          (puVar21 + 0x16));
      dVar6 = dVar6 + *(double *)(puVar21 + 0x12);
    }
    FVar23 = (FName)((longlong)FVar23 + 0x10);
  }
  pFVar13 = ::FString::FString(local_58,L"TotalTimeInSec");
  pwVar16 = L"";
  if ((1 < (pFVar13->Data).ArrayNum) &&
     (iVar9 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar13->Data).AllocatorInstance.Data,L"EventName"), iVar9 != 0
     )) {
    if ((pFVar13->Data).ArrayNum == 0) {
      pwVar15 = L"";
    }
    else {
      pwVar15 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
    }
    iVar9 = FGenericPlatformStricmp::Stricmp(pwVar15,L"DateOffset");
    if (iVar9 != 0) goto LAB_1431996ba;
  }
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValidAttributeName(InName)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                     ,0x78,L"");
  if (bVar7) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
LAB_1431996ba:
  local_150.AttrName.Data.AllocatorInstance.Data = (pFVar13->Data).AllocatorInstance.Data;
  (pFVar13->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_150.AttrName.Data.ArrayNum = (pFVar13->Data).ArrayNum;
  local_150.AttrName.Data.ArrayMax = (pFVar13->Data).ArrayMax;
  (pFVar13->Data).ArrayNum = 0;
  (pFVar13->Data).ArrayMax = 0;
  AnalyticsConversionToString(&local_150.AttrValueString,dVar6);
  local_150.AttrValueNumber = 0.0;
  local_150.AttrValueBool = false;
  local_150.AttrType = JsonFragment;
  pFVar2 = (pFVar13->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  if (((local_2c8.AllocatorInstance.Data <= &local_150) &&
      (&local_150 <
       (FAnalyticsEventAttribute *)
       (local_2c8.AllocatorInstance.Data + (longlong)local_2c8.ArrayMax * 0x30))) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  if (local_2c8.ArrayNum == local_2c8.ArrayMax) {
    local_2c8.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x830,&local_2c8.AllocatorInstance,&local_2c8.ArrayMax);
  }
  iVar9 = local_2c8.ArrayNum + 1;
  lVar24 = (longlong)local_2c8.ArrayNum;
  *(undefined8 *)&local_2c8.AllocatorInstance.Data[lVar24 * 0x30].field_0x0 = 0;
  *(FScriptContainerElement **)&local_2c8.AllocatorInstance.Data[lVar24 * 0x30].field_0x0 =
       local_150.AttrName.Data.AllocatorInstance.Data;
  *(int *)(local_2c8.AllocatorInstance.Data + lVar24 * 0x30 + 8) = local_150.AttrName.Data.ArrayNum;
  *(int *)(local_2c8.AllocatorInstance.Data + lVar24 * 0x30 + 0xc) =
       local_150.AttrName.Data.ArrayMax;
  *(undefined8 *)(local_2c8.AllocatorInstance.Data + lVar24 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(local_2c8.AllocatorInstance.Data + lVar24 * 0x30 + 0x10) =
       local_150.AttrValueString.Data.AllocatorInstance.Data;
  *(int *)(local_2c8.AllocatorInstance.Data + lVar24 * 0x30 + 0x18) =
       local_150.AttrValueString.Data.ArrayNum;
  *(int *)(local_2c8.AllocatorInstance.Data + lVar24 * 0x30 + 0x1c) =
       local_150.AttrValueString.Data.ArrayMax;
  *(double *)(local_2c8.AllocatorInstance.Data + lVar24 * 0x30 + 0x20) = local_150.AttrValueNumber;
  local_2c8.AllocatorInstance.Data[lVar24 * 0x30 + 0x28] =
       (FScriptContainerElement)local_150.AttrValueBool;
  *(AttrTypeEnum *)(local_2c8.AllocatorInstance.Data + lVar24 * 0x30 + 0x2c) = local_150.AttrType;
  local_150.AttrValueString.Data.ArrayNum = 0;
  local_150.AttrValueString.Data.ArrayMax = 0;
  local_150.AttrValueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_150.AttrName.Data.ArrayNum = 0;
  local_150.AttrName.Data.ArrayMax = 0;
  local_150.AttrName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pIVar4 = (this->AnalyticsProvider).Object;
  local_2c8.ArrayNum = iVar9;
  if (pIVar4 != (IAnalyticsProvider *)0x0) {
    (**(code **)((longlong)*pIVar4 + 0x80))(pIVar4,&this->FlowEventName,&local_2c8);
    if (((this->AnalyticsProvider).Object == (IAnalyticsProvider *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return (bool)uVar8;
    }
    (**(code **)((longlong)*(this->AnalyticsProvider).Object + 0x20))();
  }
  pFVar13 = ::FName::ToString(this_00,&local_d8);
  if ((pFVar13->Data).ArrayNum != 0) {
    pwVar16 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
  }
  FMiscTrace::OutputEndRegion(pwVar16);
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  uVar20 = this_00[8].ComparisonIndex.Value;
  FVar23 = this_00[7];
  FVar22 = (FName)((longlong)(int)uVar20 * 0x10 + (longlong)FVar23);
  while( true ) {
    if (this_00[8].ComparisonIndex.Value != uVar20) {
      local_2b6 = 0;
      `TCheckedPointerIterator<FGuid,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_2b6);
    }
    if (FVar23 == FVar22) break;
    local_120._0_8_ = *(undefined8 *)FVar23;
    local_120._8_8_ = *(undefined8 *)((longlong)FVar23 + 8);
    uVar11 = CityHash64((char *)&local_120,0x10);
    if (*(int *)&(this->SubFlowDataRegistry).field_0x8 !=
        *(int *)&(this->SubFlowDataRegistry).field_0x34) {
      puVar3 = *(undefined1 **)&(this->SubFlowDataRegistry).field_0x40;
      puVar18 = &(this->SubFlowDataRegistry).field_0x38;
      if (puVar3 != (undefined1 *)0x0) {
        puVar18 = puVar3;
      }
      uVar10 = *(uint *)(puVar18 +
                        ((ulonglong)(*(int *)&(this->SubFlowDataRegistry).field_0x48 - 1) &
                        uVar11 & 0xffffffff) * 4);
      if (uVar10 != 0xffffffff) {
        do {
          puVar19 = (uint *)((longlong)(int)uVar10 * 0x80 + *(longlong *)&this->SubFlowDataRegistry)
          ;
          if (((local_120.D == puVar19[3] && local_120.C == puVar19[2]) && local_120.B == puVar19[1]
              ) && local_120.A == *puVar19) {
            puVar21 = puVar19 + 4;
            if (puVar19 == (uint *)0x0) {
              puVar21 = (uint *)0x0;
            }
            if (puVar21 == (uint *)0x0) goto LAB_1431999f4;
            goto LAB_143199a07;
          }
          uVar10 = puVar19[0x1e];
        } while (uVar10 != 0xffffffff);
      }
    }
    puVar21 = (uint *)0x0;
LAB_1431999f4:
    local_2b5[0] = 0;
    bVar7 = `FAnalyticsFlowTracker::EndFlowInternal'::__l21::<lambda_2>::operator()(local_2b5);
    if (bVar7) {
LAB_143199a07:
      if (*(int *)&(this->SubFlowDataRegistry).field_0x8 !=
          *(int *)&(this->SubFlowDataRegistry).field_0x34) {
        uVar11 = CityHash64((char *)&local_120,0x10);
        TSet<TTuple<FGuid,FAnalyticsFlowTracker::FSubFlowData>,TDefaultMapHashableKeyFuncs<FGuid,FAnalyticsFlowTracker::FSubFlowData,0>,FDefaultSetAllocator>
        ::RemoveImpl<FGuid>((TSet<TTuple<FGuid,FAnalyticsFlowTracker::FSubFlowData>,TDefaultMapHashableKeyFuncs<FGuid,FAnalyticsFlowTracker::FSubFlowData,0>,FDefaultSetAllocator>
                             *)&this->SubFlowDataRegistry,(uint)uVar11,&local_120);
      }
      TSet<TTuple<FName,FGuid>,TDefaultMapHashableKeyFuncs<FName,FGuid,0>,FDefaultSetAllocator>::
      Remove((TSet<TTuple<FName,FGuid>,TDefaultMapHashableKeyFuncs<FName,FGuid,0>,FDefaultSetAllocator>
              *)&this->SubFlowGuidRegistry,*(FName *)(puVar21 + 6));
    }
    FVar23 = (FName)((longlong)FVar23 + 0x10);
  }
  if (*(int *)&(this->FlowDataRegistry).field_0x8 != *(int *)&(this->FlowDataRegistry).field_0x34) {
    uVar11 = CityHash64((char *)(this_00 + 1),0x10);
    TSet<TTuple<FGuid,FAnalyticsFlowTracker::FFlowData>,TDefaultMapHashableKeyFuncs<FGuid,FAnalyticsFlowTracker::FFlowData,0>,FDefaultSetAllocator>
    ::RemoveImpl<FGuid>((TSet<TTuple<FGuid,FAnalyticsFlowTracker::FFlowData>,TDefaultMapHashableKeyFuncs<FGuid,FAnalyticsFlowTracker::FFlowData,0>,FDefaultSetAllocator>
                         *)&this->FlowDataRegistry,(uint)uVar11,(FGuid *)(this_00 + 1));
  }
  TSet<TTuple<FName,FGuid>,TDefaultMapHashableKeyFuncs<FName,FGuid,0>,FDefaultSetAllocator>::Remove
            ((TSet<TTuple<FName,FGuid>,TDefaultMapHashableKeyFuncs<FName,FGuid,0>,FDefaultSetAllocator>
              *)this,*this_00);
  uVar20 = (this->FlowDataStack).ArrayNum - 1;
  if (-1 < (int)uVar20) {
    lVar24 = (longlong)(int)uVar20 << 4;
    do {
      uVar10 = 0;
      if ((int)uVar20 < (this->FlowDataStack).ArrayNum) {
        uVar10 = ~uVar20 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      pFVar2 = (this->FlowDataStack).AllocatorInstance.Data;
      if (((*(uint *)(pFVar2 + lVar24 + 0xc) == param_1->D &&
           *(uint *)(pFVar2 + lVar24 + 8) == param_1->C) &&
          *(uint *)(pFVar2 + lVar24 + 4) == param_1->B) && *(uint *)(pFVar2 + lVar24) == param_1->A)
      {
        TArray<FGuid,TSizedDefaultAllocator<32>_>::RemoveAt(&this->FlowDataStack,uVar20,Default);
        break;
      }
      lVar24 = lVar24 + -0x10;
      uVar20 = uVar20 - 1;
    } while (-1 < (int)uVar20);
  }
  DestructItems<FAnalyticsEventAttribute,int>
            ((FAnalyticsEventAttribute *)local_2c8.AllocatorInstance.Data,local_2c8.ArrayNum);
  if ((FAnalyticsEventAttribute *)local_2c8.AllocatorInstance.Data !=
      (FAnalyticsEventAttribute *)0x0) {
    FMemory::Free(local_2c8.AllocatorInstance.Data);
  }
  return true;
}

// EndSession @ 143199bc0

/* WARNING: Removing unreachable block (ram,0x000143199cb0) */

void __thiscall FAnalyticsFlowTracker::EndSession(FAnalyticsFlowTracker *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> local_28;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar1 = (this->FlowDataStack).ArrayNum;
  while (iVar1 != 0) {
    iVar1 = (this->FlowDataStack).ArrayNum;
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
    uVar5 = iVar1 - 1;
    uVar4 = 0;
    if ((int)uVar5 < iVar1) {
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
    EndFlowInternal(this,(FGuid *)((this->FlowDataStack).AllocatorInstance.Data +
                                  (longlong)((this->FlowDataStack).ArrayNum + -1) * 0x10),false,
                    &local_28);
    DestructItems<FAnalyticsEventAttribute,int>((FAnalyticsEventAttribute *)0x0,0);
    iVar1 = (this->FlowDataStack).ArrayNum;
  }
  if ((*(int *)&(this->FlowDataRegistry).field_0x8 != *(int *)&(this->FlowDataRegistry).field_0x34)
     && (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_8109941322015571942>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\AnalyticsET\\Private\\AnalyticsFlowTracker.cpp"
                            ,0x1a,"FlowDataRegistry.IsEmpty()"), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((*(int *)&(this->FlowGuidRegistry).field_0x8 != *(int *)&(this->FlowGuidRegistry).field_0x34)
     && (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_8109941322015571941>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\AnalyticsET\\Private\\AnalyticsFlowTracker.cpp"
                            ,0x1b,"FlowGuidRegistry.IsEmpty()"), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->AnalyticsProvider != (TSharedPtr<IAnalyticsProvider,1> *)&local_18) {
    (this->AnalyticsProvider).Object = (IAnalyticsProvider *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->AnalyticsProvider).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
                    /* WARNING: Could not recover jumptable at 0x000143199d83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// EndSubFlow @ 143199f20

bool __thiscall
FAnalyticsFlowTracker::EndSubFlow
          (FAnalyticsFlowTracker *this,FGuid *param_1,bool param_2,
          TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *param_3)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  bool bVar1;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (((param_1->D == 0 && param_1->C == 0) && param_1->B == 0) && param_1->A == 0) {
      bVar1 = false;
    }
    else {
      bVar1 = EndSubFlowInternal(this,param_1,param_2,param_3);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// EndSubFlow @ 143199fc0

bool __thiscall
FAnalyticsFlowTracker::EndSubFlow
          (FAnalyticsFlowTracker *this,FName *param_1,bool param_2,
          TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *param_3)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  bool bVar1;
  FGuid *pFVar2;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar2 = TMapBase<FName,FGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGuid,0>_>
             ::Find((TMapBase<FName,FGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGuid,0>_>
                     *)&this->SubFlowGuidRegistry,*param_1);
    if (pFVar2 == (FGuid *)0x0) {
      bVar1 = false;
    }
    else {
      bVar1 = EndSubFlowInternal(this,pFVar2,param_2,param_3);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// EndSubFlowInternal @ 14319a060

/* WARNING: Removing unreachable block (ram,0x00014319aa66) */
/* WARNING: Removing unreachable block (ram,0x00014319a4f8) */
/* WARNING: Removing unreachable block (ram,0x00014319a6fa) */
/* WARNING: Removing unreachable block (ram,0x00014319adaf) */
/* WARNING: Removing unreachable block (ram,0x00014319aa74) */
/* WARNING: Removing unreachable block (ram,0x00014319a507) */
/* WARNING: Removing unreachable block (ram,0x00014319a708) */
/* WARNING: Removing unreachable block (ram,0x00014319adbd) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FAnalyticsFlowTracker::EndSubFlowInternal
          (FAnalyticsFlowTracker *this,FGuid *param_1,bool param_2,
          TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *param_3)

{
  FName FVar1;
  FName FVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  code *pcVar5;
  double dVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  uint uVar10;
  ulong64 uVar11;
  FDateTime FVar12;
  FString *pFVar13;
  FAnalyticsEventAttribute *pFVar14;
  IAnalyticsProvider *pIVar15;
  wchar_t *pwVar16;
  wchar_t *pwVar17;
  uint *puVar18;
  uint uVar19;
  longlong lVar20;
  FName *this_00;
  uint *puVar21;
  ForAnyElementType FVar22;
  undefined1 *puVar23;
  uint *puVar24;
  wchar_t *pwVar25;
  undefined1 local_res10 [8];
  ForAnyElementType local_308;
  int local_300;
  int local_2fc;
  FAnalyticsEventAttribute local_2f8;
  FAnalyticsEventAttribute local_2c8;
  FAnalyticsEventAttribute local_298;
  FAnalyticsEventAttribute local_268;
  FString local_238;
  FString local_228;
  FName local_218;
  FName FStack_210;
  FString local_200;
  FString local_1f0;
  FString local_1e0;
  FString local_1d0;
  FString local_1c0;
  FString local_1b0;
  FString local_1a0;
  FString local_190;
  FString local_180;
  FString local_170;
  FString local_160;
  FString local_150;
  FAnalyticsEventAttribute local_140;
  FAnalyticsEventAttribute local_110;
  FAnalyticsEventAttribute local_e0;
  FAnalyticsEventAttribute local_b0;
  FAnalyticsEventAttribute local_80;
  
  if (((param_1->B == 0 && param_1->A == 0) && param_1->C == 0) && param_1->D == 0) {
    return false;
  }
  uVar11 = CityHash64((char *)param_1,0x10);
  iVar9 = TSet<TTuple<FGuid,FAnalyticsFlowTracker::FSubFlowData>,TDefaultMapHashableKeyFuncs<FGuid,FAnalyticsFlowTracker::FSubFlowData,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>
                    ((TSet<TTuple<FGuid,FAnalyticsFlowTracker::FSubFlowData>,TDefaultMapHashableKeyFuncs<FGuid,FAnalyticsFlowTracker::FSubFlowData,0>,FDefaultSetAllocator>
                      *)&this->SubFlowDataRegistry,(uint)uVar11,param_1);
  if (iVar9 == -1) {
    return false;
  }
  lVar20 = (longlong)iVar9 * 0x80 + *(longlong *)&this->SubFlowDataRegistry;
  this_00 = (FName *)(lVar20 + 0x10);
  if (lVar20 == 0) {
    this_00 = (FName *)0x0;
  }
  if (this_00 == (FName *)0x0) {
    return false;
  }
  local_218 = this_00[1];
  FStack_210 = this_00[2];
  if ((longlong)this_00[6] <= (longlong)this_00[7]) {
    return true;
  }
  FVar12 = FDateTime::UtcNow();
  FVar1 = *(FName *)FVar12.Ticks;
  this_00[7] = FVar1;
  FVar2 = this_00[6];
  *(bool *)&this_00[10].ComparisonIndex.Value = param_2;
  this_00[9] = (FName)((double)((longlong)FVar1 - (longlong)FVar2) * __real_3e7ad7f29abcaf48);
  TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *)(this_00 + 0xb),param_3
            );
  iVar9 = param_3->ArrayNum;
  pFVar14 = (FAnalyticsEventAttribute *)(param_3->AllocatorInstance).Data;
  local_308.Data = (FScriptContainerElement *)0x0;
  local_300 = iVar9;
  if (iVar9 == 0) {
    local_2fc = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,iVar9,0,&local_308,iVar9,&local_2fc);
    ConstructItems<FAnalyticsEventAttribute,FAnalyticsEventAttribute,int>
              (local_308.Data,pFVar14,iVar9);
  }
  pFVar13 = ::FString::FString(&local_1d0,L"SchemaVersion");
  pFVar14 = FAnalyticsEventAttribute::FAnalyticsEventAttribute<unsigned_int_const_&>
                      (&local_140,pFVar13,&this->SubFlowSchemaVersion);
  if (((local_308.Data <= pFVar14) &&
      (pFVar14 < (FAnalyticsEventAttribute *)(local_308.Data + (longlong)local_2fc * 0x30))) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  if (local_300 == local_2fc) {
    local_300 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x830,&local_308,&local_2fc);
  }
  iVar9 = local_300 + 1;
  lVar20 = (longlong)local_300;
  *(undefined8 *)&local_308.Data[lVar20 * 0x30].field_0x0 = 0;
  *(FScriptContainerElement **)&local_308.Data[lVar20 * 0x30].field_0x0 =
       (pFVar14->AttrName).Data.AllocatorInstance.Data;
  (pFVar14->AttrName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(local_308.Data + lVar20 * 0x30 + 8) = (pFVar14->AttrName).Data.ArrayNum;
  *(int *)(local_308.Data + lVar20 * 0x30 + 0xc) = (pFVar14->AttrName).Data.ArrayMax;
  (pFVar14->AttrName).Data.ArrayNum = 0;
  (pFVar14->AttrName).Data.ArrayMax = 0;
  *(undefined8 *)(local_308.Data + lVar20 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(local_308.Data + lVar20 * 0x30 + 0x10) =
       (pFVar14->AttrValueString).Data.AllocatorInstance.Data;
  (pFVar14->AttrValueString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(local_308.Data + lVar20 * 0x30 + 0x18) = (pFVar14->AttrValueString).Data.ArrayNum;
  *(int *)(local_308.Data + lVar20 * 0x30 + 0x1c) = (pFVar14->AttrValueString).Data.ArrayMax;
  (pFVar14->AttrValueString).Data.ArrayNum = 0;
  (pFVar14->AttrValueString).Data.ArrayMax = 0;
  *(double *)(local_308.Data + lVar20 * 0x30 + 0x20) = pFVar14->AttrValueNumber;
  local_308.Data[lVar20 * 0x30 + 0x28] = (FScriptContainerElement)pFVar14->AttrValueBool;
  *(AttrTypeEnum *)(local_308.Data + lVar20 * 0x30 + 0x2c) = pFVar14->AttrType;
  local_300 = iVar9;
  if (local_140.AttrValueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_140.AttrValueString.Data.AllocatorInstance.Data);
  }
  if (local_140.AttrName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_140.AttrName.Data.AllocatorInstance.Data);
  }
  local_238.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_238.Data.ArrayNum = 0;
  local_238.Data.ArrayMax = 0;
  FGuid::AppendString((FGuid *)(this_00 + 4),&local_238,Digits);
  pwVar25 = L"";
  FVar22.Data = (FScriptContainerElement *)L"";
  if (local_238.Data.ArrayNum != 0) {
    FVar22.Data = local_238.Data.AllocatorInstance.Data;
  }
  pFVar13 = ::FString::FString(&local_1c0,L"SubFlowGUID");
  if (((pFVar13->Data).ArrayNum < 2) ||
     (iVar9 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar13->Data).AllocatorInstance.Data,L"EventName"), iVar9 == 0
     )) {
LAB_14319a36a:
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidAttributeName(InName)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                       ,0x78,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return (bool)uVar8;
    }
  }
  else {
    if ((pFVar13->Data).ArrayNum == 0) {
      pwVar17 = L"";
    }
    else {
      pwVar17 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
    }
    iVar9 = FGenericPlatformStricmp::Stricmp(pwVar17,L"DateOffset");
    if (iVar9 == 0) goto LAB_14319a36a;
  }
  local_2f8.AttrName.Data.AllocatorInstance.Data = (pFVar13->Data).AllocatorInstance.Data;
  (pFVar13->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2f8.AttrName.Data.ArrayNum = (pFVar13->Data).ArrayNum;
  local_2f8.AttrName.Data.ArrayMax = (pFVar13->Data).ArrayMax;
  (pFVar13->Data).ArrayNum = 0;
  (pFVar13->Data).ArrayMax = 0;
  ::FString::FString(&local_2f8.AttrValueString,(wchar_t *)FVar22.Data);
  local_2f8.AttrValueBool = false;
  local_2f8.AttrType = String;
  local_2f8.AttrValueNumber = 0.0;
  pFVar3 = (pFVar13->Data).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  if (((local_308.Data <= &local_2f8) &&
      (&local_2f8 < (FAnalyticsEventAttribute *)(local_308.Data + (longlong)local_2fc * 0x30))) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  if (local_300 == local_2fc) {
    local_300 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x830,&local_308,&local_2fc);
  }
  iVar9 = local_300 + 1;
  lVar20 = (longlong)local_300;
  *(undefined8 *)&local_308.Data[lVar20 * 0x30].field_0x0 = 0;
  *(FScriptContainerElement **)&local_308.Data[lVar20 * 0x30].field_0x0 =
       local_2f8.AttrName.Data.AllocatorInstance.Data;
  *(int *)(local_308.Data + lVar20 * 0x30 + 8) = local_2f8.AttrName.Data.ArrayNum;
  *(int *)(local_308.Data + lVar20 * 0x30 + 0xc) = local_2f8.AttrName.Data.ArrayMax;
  *(undefined8 *)(local_308.Data + lVar20 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(local_308.Data + lVar20 * 0x30 + 0x10) =
       local_2f8.AttrValueString.Data.AllocatorInstance.Data;
  *(int *)(local_308.Data + lVar20 * 0x30 + 0x18) = local_2f8.AttrValueString.Data.ArrayNum;
  *(int *)(local_308.Data + lVar20 * 0x30 + 0x1c) = local_2f8.AttrValueString.Data.ArrayMax;
  *(double *)(local_308.Data + lVar20 * 0x30 + 0x20) = local_2f8.AttrValueNumber;
  local_308.Data[lVar20 * 0x30 + 0x28] = (FScriptContainerElement)local_2f8.AttrValueBool;
  *(AttrTypeEnum *)(local_308.Data + lVar20 * 0x30 + 0x2c) = local_2f8.AttrType;
  local_2f8.AttrValueString.Data.ArrayNum = 0;
  local_2f8.AttrValueString.Data.ArrayMax = 0;
  local_2f8.AttrValueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2f8.AttrName.Data.ArrayNum = 0;
  local_2f8.AttrName.Data.ArrayMax = 0;
  local_2f8.AttrName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_300 = iVar9;
  if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_238.Data.AllocatorInstance.Data);
  }
  pFVar13 = ::FName::ToString(this_00 + 3,&local_200);
  if ((pFVar13->Data).ArrayNum == 0) {
    pwVar17 = L"";
  }
  else {
    pwVar17 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
  }
  pFVar13 = ::FString::FString(&local_1b0,L"SubFlowName");
  if (((pFVar13->Data).ArrayNum < 2) ||
     (iVar9 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar13->Data).AllocatorInstance.Data,L"EventName"), iVar9 == 0
     )) {
LAB_14319a581:
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidAttributeName(InName)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                       ,0x78,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return (bool)uVar8;
    }
  }
  else {
    if ((pFVar13->Data).ArrayNum == 0) {
      pwVar16 = L"";
    }
    else {
      pwVar16 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
    }
    iVar9 = FGenericPlatformStricmp::Stricmp(pwVar16,L"DateOffset");
    if (iVar9 == 0) goto LAB_14319a581;
  }
  local_2c8.AttrName.Data.AllocatorInstance.Data = (pFVar13->Data).AllocatorInstance.Data;
  (pFVar13->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2c8.AttrName.Data.ArrayNum = (pFVar13->Data).ArrayNum;
  local_2c8.AttrName.Data.ArrayMax = (pFVar13->Data).ArrayMax;
  (pFVar13->Data).ArrayNum = 0;
  (pFVar13->Data).ArrayMax = 0;
  ::FString::FString(&local_2c8.AttrValueString,pwVar17);
  local_2c8.AttrValueNumber = 0.0;
  local_2c8.AttrType = String;
  local_2c8.AttrValueBool = false;
  pFVar3 = (pFVar13->Data).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  if (((local_308.Data <= &local_2c8) &&
      (&local_2c8 < (FAnalyticsEventAttribute *)(local_308.Data + (longlong)local_2fc * 0x30))) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  if (local_300 == local_2fc) {
    local_300 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x830,&local_308,&local_2fc);
  }
  iVar9 = local_300 + 1;
  lVar20 = (longlong)local_300;
  *(undefined8 *)&local_308.Data[lVar20 * 0x30].field_0x0 = 0;
  *(FScriptContainerElement **)&local_308.Data[lVar20 * 0x30].field_0x0 =
       local_2c8.AttrName.Data.AllocatorInstance.Data;
  *(int *)(local_308.Data + lVar20 * 0x30 + 8) = local_2c8.AttrName.Data.ArrayNum;
  *(int *)(local_308.Data + lVar20 * 0x30 + 0xc) = local_2c8.AttrName.Data.ArrayMax;
  *(undefined8 *)(local_308.Data + lVar20 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(local_308.Data + lVar20 * 0x30 + 0x10) =
       local_2c8.AttrValueString.Data.AllocatorInstance.Data;
  *(int *)(local_308.Data + lVar20 * 0x30 + 0x18) = local_2c8.AttrValueString.Data.ArrayNum;
  *(int *)(local_308.Data + lVar20 * 0x30 + 0x1c) = local_2c8.AttrValueString.Data.ArrayMax;
  *(double *)(local_308.Data + lVar20 * 0x30 + 0x20) = local_2c8.AttrValueNumber;
  local_308.Data[lVar20 * 0x30 + 0x28] = (FScriptContainerElement)local_2c8.AttrValueBool;
  *(AttrTypeEnum *)(local_308.Data + lVar20 * 0x30 + 0x2c) = local_2c8.AttrType;
  local_2c8.AttrValueString.Data.ArrayNum = 0;
  local_2c8.AttrValueString.Data.ArrayMax = 0;
  local_2c8.AttrValueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2c8.AttrName.Data.ArrayNum = 0;
  local_2c8.AttrName.Data.ArrayMax = 0;
  local_2c8.AttrName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_300 = iVar9;
  if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_200.Data.AllocatorInstance.Data);
  }
  local_228.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_228.Data.ArrayNum = 0;
  local_228.Data.ArrayMax = 0;
  FGuid::AppendString((FGuid *)(this_00 + 1),&local_228,Digits);
  pFVar13 = ::FString::FString(&local_1a0,L"FlowGUID");
  pFVar14 = FAnalyticsEventAttribute::FAnalyticsEventAttribute<FString>
                      (&local_110,pFVar13,&local_228);
  if (((local_308.Data <= pFVar14) &&
      (pFVar14 < (FAnalyticsEventAttribute *)(local_308.Data + (longlong)local_2fc * 0x30))) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  if (local_300 == local_2fc) {
    local_300 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x830,&local_308,&local_2fc);
  }
  iVar9 = local_300 + 1;
  puVar24 = (uint *)0x0;
  lVar20 = (longlong)local_300;
  *(undefined8 *)&local_308.Data[lVar20 * 0x30].field_0x0 = 0;
  *(FScriptContainerElement **)&local_308.Data[lVar20 * 0x30].field_0x0 =
       (pFVar14->AttrName).Data.AllocatorInstance.Data;
  (pFVar14->AttrName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(local_308.Data + lVar20 * 0x30 + 8) = (pFVar14->AttrName).Data.ArrayNum;
  *(int *)(local_308.Data + lVar20 * 0x30 + 0xc) = (pFVar14->AttrName).Data.ArrayMax;
  (pFVar14->AttrName).Data.ArrayNum = 0;
  (pFVar14->AttrName).Data.ArrayMax = 0;
  *(undefined8 *)(local_308.Data + lVar20 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(local_308.Data + lVar20 * 0x30 + 0x10) =
       (pFVar14->AttrValueString).Data.AllocatorInstance.Data;
  (pFVar14->AttrValueString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(local_308.Data + lVar20 * 0x30 + 0x18) = (pFVar14->AttrValueString).Data.ArrayNum;
  *(int *)(local_308.Data + lVar20 * 0x30 + 0x1c) = (pFVar14->AttrValueString).Data.ArrayMax;
  (pFVar14->AttrValueString).Data.ArrayNum = 0;
  (pFVar14->AttrValueString).Data.ArrayMax = 0;
  *(double *)(local_308.Data + lVar20 * 0x30 + 0x20) = pFVar14->AttrValueNumber;
  local_308.Data[lVar20 * 0x30 + 0x28] = (FScriptContainerElement)pFVar14->AttrValueBool;
  *(AttrTypeEnum *)(local_308.Data + lVar20 * 0x30 + 0x2c) = pFVar14->AttrType;
  local_300 = iVar9;
  if (local_110.AttrValueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_110.AttrValueString.Data.AllocatorInstance.Data);
  }
  if (local_110.AttrName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_110.AttrName.Data.AllocatorInstance.Data);
  }
  if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_228.Data.AllocatorInstance.Data);
  }
  pFVar13 = ::FName::ToString(this_00,&local_1f0);
  if ((pFVar13->Data).ArrayNum == 0) {
    pwVar17 = L"";
  }
  else {
    pwVar17 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
  }
  pFVar13 = ::FString::FString(&local_190,L"FlowName");
  if (((pFVar13->Data).ArrayNum < 2) ||
     (iVar9 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar13->Data).AllocatorInstance.Data,L"EventName"), iVar9 == 0
     )) {
LAB_14319a8f0:
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidAttributeName(InName)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                       ,0x78,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return (bool)uVar8;
    }
  }
  else {
    if ((pFVar13->Data).ArrayNum == 0) {
      pwVar16 = L"";
    }
    else {
      pwVar16 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
    }
    iVar9 = FGenericPlatformStricmp::Stricmp(pwVar16,L"DateOffset");
    if (iVar9 == 0) goto LAB_14319a8f0;
  }
  local_298.AttrName.Data.AllocatorInstance.Data = (pFVar13->Data).AllocatorInstance.Data;
  (pFVar13->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_298.AttrName.Data.ArrayNum = (pFVar13->Data).ArrayNum;
  local_298.AttrName.Data.ArrayMax = (pFVar13->Data).ArrayMax;
  (pFVar13->Data).ArrayNum = 0;
  (pFVar13->Data).ArrayMax = 0;
  ::FString::FString(&local_298.AttrValueString,pwVar17);
  local_298.AttrValueNumber = 0.0;
  local_298.AttrValueBool = false;
  local_298.AttrType = String;
  pFVar3 = (pFVar13->Data).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  if (((local_308.Data <= &local_298) &&
      (&local_298 < (FAnalyticsEventAttribute *)(local_308.Data + (longlong)local_2fc * 0x30))) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  if (local_300 == local_2fc) {
    local_300 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x830,&local_308,&local_2fc);
  }
  iVar9 = local_300 + 1;
  lVar20 = (longlong)local_300;
  *(undefined8 *)&local_308.Data[lVar20 * 0x30].field_0x0 = 0;
  *(FScriptContainerElement **)&local_308.Data[lVar20 * 0x30].field_0x0 =
       local_298.AttrName.Data.AllocatorInstance.Data;
  *(int *)(local_308.Data + lVar20 * 0x30 + 8) = local_298.AttrName.Data.ArrayNum;
  *(int *)(local_308.Data + lVar20 * 0x30 + 0xc) = local_298.AttrName.Data.ArrayMax;
  *(undefined8 *)(local_308.Data + lVar20 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(local_308.Data + lVar20 * 0x30 + 0x10) =
       local_298.AttrValueString.Data.AllocatorInstance.Data;
  *(int *)(local_308.Data + lVar20 * 0x30 + 0x18) = local_298.AttrValueString.Data.ArrayNum;
  *(int *)(local_308.Data + lVar20 * 0x30 + 0x1c) = local_298.AttrValueString.Data.ArrayMax;
  *(double *)(local_308.Data + lVar20 * 0x30 + 0x20) = local_298.AttrValueNumber;
  local_308.Data[lVar20 * 0x30 + 0x28] = (FScriptContainerElement)local_298.AttrValueBool;
  *(AttrTypeEnum *)(local_308.Data + lVar20 * 0x30 + 0x2c) = local_298.AttrType;
  local_298.AttrValueString.Data.ArrayNum = 0;
  local_298.AttrValueString.Data.ArrayMax = 0;
  local_298.AttrValueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_298.AttrName.Data.ArrayNum = 0;
  local_298.AttrName.Data.ArrayMax = 0;
  local_298.AttrName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_300 = iVar9;
  if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
  }
  pFVar13 = ::FString::FString(&local_180,L"ThreadId");
  pFVar14 = FAnalyticsEventAttribute::FAnalyticsEventAttribute<unsigned_int_&>
                      (&local_e0,pFVar13,(uint *)(this_00 + 8));
  if (((local_308.Data <= pFVar14) &&
      (pFVar14 < (FAnalyticsEventAttribute *)(local_308.Data + (longlong)local_2fc * 0x30))) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  if (local_300 == local_2fc) {
    local_300 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x830,&local_308,&local_2fc);
  }
  iVar9 = local_300 + 1;
  lVar20 = (longlong)local_300;
  *(undefined8 *)&local_308.Data[lVar20 * 0x30].field_0x0 = 0;
  *(FScriptContainerElement **)&local_308.Data[lVar20 * 0x30].field_0x0 =
       (pFVar14->AttrName).Data.AllocatorInstance.Data;
  (pFVar14->AttrName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(local_308.Data + lVar20 * 0x30 + 8) = (pFVar14->AttrName).Data.ArrayNum;
  *(int *)(local_308.Data + lVar20 * 0x30 + 0xc) = (pFVar14->AttrName).Data.ArrayMax;
  (pFVar14->AttrName).Data.ArrayNum = 0;
  (pFVar14->AttrName).Data.ArrayMax = 0;
  *(undefined8 *)(local_308.Data + lVar20 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(local_308.Data + lVar20 * 0x30 + 0x10) =
       (pFVar14->AttrValueString).Data.AllocatorInstance.Data;
  (pFVar14->AttrValueString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(local_308.Data + lVar20 * 0x30 + 0x18) = (pFVar14->AttrValueString).Data.ArrayNum;
  *(int *)(local_308.Data + lVar20 * 0x30 + 0x1c) = (pFVar14->AttrValueString).Data.ArrayMax;
  (pFVar14->AttrValueString).Data.ArrayNum = 0;
  (pFVar14->AttrValueString).Data.ArrayMax = 0;
  *(double *)(local_308.Data + lVar20 * 0x30 + 0x20) = pFVar14->AttrValueNumber;
  local_308.Data[lVar20 * 0x30 + 0x28] = (FScriptContainerElement)pFVar14->AttrValueBool;
  *(AttrTypeEnum *)(local_308.Data + lVar20 * 0x30 + 0x2c) = pFVar14->AttrType;
  local_300 = iVar9;
  if (local_e0.AttrValueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0.AttrValueString.Data.AllocatorInstance.Data);
  }
  if (local_e0.AttrName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0.AttrName.Data.AllocatorInstance.Data);
  }
  dVar6 = FDateTime::ToUnixTimestampDecimal((FDateTime *)(this_00 + 6));
  pFVar13 = ::FString::FString(&local_170,L"StartUTC");
  if ((1 < (pFVar13->Data).ArrayNum) &&
     (iVar9 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar13->Data).AllocatorInstance.Data,L"EventName"), iVar9 != 0
     )) {
    if ((pFVar13->Data).ArrayNum == 0) {
      pwVar17 = L"";
    }
    else {
      pwVar17 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
    }
    iVar9 = FGenericPlatformStricmp::Stricmp(pwVar17,L"DateOffset");
    if (iVar9 != 0) goto LAB_14319ac48;
  }
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValidAttributeName(InName)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                     ,0x78,L"");
  if (bVar7) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
LAB_14319ac48:
  local_268.AttrName.Data.AllocatorInstance.Data = (pFVar13->Data).AllocatorInstance.Data;
  (pFVar13->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_268.AttrName.Data.ArrayNum = (pFVar13->Data).ArrayNum;
  local_268.AttrName.Data.ArrayMax = (pFVar13->Data).ArrayMax;
  (pFVar13->Data).ArrayNum = 0;
  (pFVar13->Data).ArrayMax = 0;
  AnalyticsConversionToString(&local_268.AttrValueString,dVar6);
  local_268.AttrValueNumber = 0.0;
  local_268.AttrValueBool = false;
  local_268.AttrType = JsonFragment;
  pFVar3 = (pFVar13->Data).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  if (((local_308.Data <= &local_268) &&
      (&local_268 < (FAnalyticsEventAttribute *)(local_308.Data + (longlong)local_2fc * 0x30))) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  if (local_300 == local_2fc) {
    local_300 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x830,&local_308,&local_2fc);
  }
  lVar20 = (longlong)local_300;
  *(undefined8 *)&local_308.Data[lVar20 * 0x30].field_0x0 = 0;
  *(FScriptContainerElement **)&local_308.Data[lVar20 * 0x30].field_0x0 =
       local_268.AttrName.Data.AllocatorInstance.Data;
  *(int *)(local_308.Data + lVar20 * 0x30 + 8) = local_268.AttrName.Data.ArrayNum;
  *(int *)(local_308.Data + lVar20 * 0x30 + 0xc) = local_268.AttrName.Data.ArrayMax;
  *(undefined8 *)(local_308.Data + lVar20 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(local_308.Data + lVar20 * 0x30 + 0x10) =
       local_268.AttrValueString.Data.AllocatorInstance.Data;
  *(int *)(local_308.Data + lVar20 * 0x30 + 0x18) = local_268.AttrValueString.Data.ArrayNum;
  *(int *)(local_308.Data + lVar20 * 0x30 + 0x1c) = local_268.AttrValueString.Data.ArrayMax;
  *(double *)(local_308.Data + lVar20 * 0x30 + 0x20) = local_268.AttrValueNumber;
  local_308.Data[lVar20 * 0x30 + 0x28] = (FScriptContainerElement)local_268.AttrValueBool;
  *(AttrTypeEnum *)(local_308.Data + lVar20 * 0x30 + 0x2c) = local_268.AttrType;
  local_268.AttrValueString.Data.ArrayNum = 0;
  local_268.AttrValueString.Data.ArrayMax = 0;
  local_268.AttrValueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_268.AttrName.Data.ArrayNum = 0;
  local_268.AttrName.Data.ArrayMax = 0;
  local_268.AttrName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_300 = local_300 + 1;
  pFVar13 = ::FString::FString(&local_160,L"TimeInSec");
  pFVar14 = FAnalyticsEventAttribute::FAnalyticsEventAttribute<double_&>
                      (&local_b0,pFVar13,(double *)(this_00 + 9));
  if (((local_308.Data <= pFVar14) &&
      (pFVar14 < (FAnalyticsEventAttribute *)(local_308.Data + (longlong)local_2fc * 0x30))) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  if (local_300 == local_2fc) {
    local_300 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x830,&local_308,&local_2fc);
  }
  iVar9 = local_300 + 1;
  lVar20 = (longlong)local_300;
  *(undefined8 *)&local_308.Data[lVar20 * 0x30].field_0x0 = 0;
  *(FScriptContainerElement **)&local_308.Data[lVar20 * 0x30].field_0x0 =
       (pFVar14->AttrName).Data.AllocatorInstance.Data;
  (pFVar14->AttrName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(local_308.Data + lVar20 * 0x30 + 8) = (pFVar14->AttrName).Data.ArrayNum;
  *(int *)(local_308.Data + lVar20 * 0x30 + 0xc) = (pFVar14->AttrName).Data.ArrayMax;
  (pFVar14->AttrName).Data.ArrayNum = 0;
  (pFVar14->AttrName).Data.ArrayMax = 0;
  *(undefined8 *)(local_308.Data + lVar20 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(local_308.Data + lVar20 * 0x30 + 0x10) =
       (pFVar14->AttrValueString).Data.AllocatorInstance.Data;
  (pFVar14->AttrValueString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(local_308.Data + lVar20 * 0x30 + 0x18) = (pFVar14->AttrValueString).Data.ArrayNum;
  *(int *)(local_308.Data + lVar20 * 0x30 + 0x1c) = (pFVar14->AttrValueString).Data.ArrayMax;
  (pFVar14->AttrValueString).Data.ArrayNum = 0;
  (pFVar14->AttrValueString).Data.ArrayMax = 0;
  *(double *)(local_308.Data + lVar20 * 0x30 + 0x20) = pFVar14->AttrValueNumber;
  local_308.Data[lVar20 * 0x30 + 0x28] = (FScriptContainerElement)pFVar14->AttrValueBool;
  *(AttrTypeEnum *)(local_308.Data + lVar20 * 0x30 + 0x2c) = pFVar14->AttrType;
  local_300 = iVar9;
  if (local_b0.AttrValueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.AttrValueString.Data.AllocatorInstance.Data);
  }
  if (local_b0.AttrName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.AttrName.Data.AllocatorInstance.Data);
  }
  pFVar13 = ::FString::FString(&local_150,L"Success");
  pFVar14 = FAnalyticsEventAttribute::FAnalyticsEventAttribute<bool_&>
                      (&local_80,pFVar13,(bool *)(this_00 + 10));
  if (((local_308.Data <= pFVar14) &&
      (pFVar14 < (FAnalyticsEventAttribute *)(local_308.Data + (longlong)local_2fc * 0x30))) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  if (local_300 == local_2fc) {
    local_300 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x830,&local_308,&local_2fc);
  }
  iVar9 = local_300 + 1;
  lVar20 = (longlong)local_300;
  *(undefined8 *)&local_308.Data[lVar20 * 0x30].field_0x0 = 0;
  *(FScriptContainerElement **)&local_308.Data[lVar20 * 0x30].field_0x0 =
       (pFVar14->AttrName).Data.AllocatorInstance.Data;
  (pFVar14->AttrName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(local_308.Data + lVar20 * 0x30 + 8) = (pFVar14->AttrName).Data.ArrayNum;
  *(int *)(local_308.Data + lVar20 * 0x30 + 0xc) = (pFVar14->AttrName).Data.ArrayMax;
  (pFVar14->AttrName).Data.ArrayNum = 0;
  (pFVar14->AttrName).Data.ArrayMax = 0;
  *(undefined8 *)(local_308.Data + lVar20 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(local_308.Data + lVar20 * 0x30 + 0x10) =
       (pFVar14->AttrValueString).Data.AllocatorInstance.Data;
  (pFVar14->AttrValueString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(local_308.Data + lVar20 * 0x30 + 0x18) = (pFVar14->AttrValueString).Data.ArrayNum;
  *(int *)(local_308.Data + lVar20 * 0x30 + 0x1c) = (pFVar14->AttrValueString).Data.ArrayMax;
  (pFVar14->AttrValueString).Data.ArrayNum = 0;
  (pFVar14->AttrValueString).Data.ArrayMax = 0;
  *(double *)(local_308.Data + lVar20 * 0x30 + 0x20) = pFVar14->AttrValueNumber;
  local_308.Data[lVar20 * 0x30 + 0x28] = (FScriptContainerElement)pFVar14->AttrValueBool;
  *(AttrTypeEnum *)(local_308.Data + lVar20 * 0x30 + 0x2c) = pFVar14->AttrType;
  local_300 = iVar9;
  if (local_80.AttrValueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.AttrValueString.Data.AllocatorInstance.Data);
  }
  if (local_80.AttrName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.AttrName.Data.AllocatorInstance.Data);
  }
  if ((this->AnalyticsProvider).Object != (IAnalyticsProvider *)0x0) {
    pIVar15 = TSharedPtr<IAnalyticsProvider,1>::operator->(&this->AnalyticsProvider);
    (**(code **)((longlong)*pIVar15 + 0x80))(pIVar15,&this->SubFlowEventName,&local_308);
  }
  pFVar13 = ::FName::ToString(this_00 + 3,&local_1e0);
  if ((pFVar13->Data).ArrayNum != 0) {
    pwVar25 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
  }
  FMiscTrace::OutputEndRegion(pwVar25);
  if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
  }
  uVar11 = CityHash64((char *)&local_218,0x10);
  puVar21 = puVar24;
  if (*(int *)&(this->FlowDataRegistry).field_0x8 != *(int *)&(this->FlowDataRegistry).field_0x34) {
    puVar23 = *(undefined1 **)&(this->FlowDataRegistry).field_0x40;
    if (puVar23 == (undefined1 *)0x0) {
      puVar23 = &(this->FlowDataRegistry).field_0x38;
    }
    uVar19 = *(uint *)(puVar23 +
                      ((ulonglong)(*(int *)&(this->FlowDataRegistry).field_0x48 - 1) &
                      uVar11 & 0xffffffff) * 4);
    if (uVar19 != 0xffffffff) {
      do {
        puVar18 = (uint *)((longlong)(int)uVar19 * 0x70 + *(longlong *)&this->FlowDataRegistry);
        if (((FStack_210.Number == puVar18[3] && FStack_210.ComparisonIndex.Value == puVar18[2]) &&
            local_218.Number == puVar18[1]) && local_218.ComparisonIndex.Value == *puVar18) {
          puVar21 = puVar18 + 4;
          if (puVar18 == (uint *)0x0) {
            puVar21 = puVar24;
          }
          if (puVar21 != (uint *)0x0) goto LAB_14319b161;
          break;
        }
        uVar19 = puVar18[0x1a];
      } while (uVar19 != 0xffffffff);
    }
  }
  local_res10[0] = 0;
  bVar7 = `FAnalyticsFlowTracker::EndSubFlowInternal'::__l13::<lambda_1>::operator()(local_res10);
  if (bVar7) {
LAB_14319b161:
    uVar19 = puVar21[0x14] - 1;
    if (-1 < (int)uVar19) {
      lVar20 = (longlong)(int)uVar19 << 4;
      do {
        uVar10 = 0;
        if ((int)uVar19 < (int)puVar21[0x14]) {
          uVar10 = ~uVar19 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
        lVar4 = *(longlong *)(puVar21 + 0x12);
        if (((*(uint *)(lVar4 + 0xc + lVar20) == param_1->D &&
             *(uint *)(lVar4 + 8 + lVar20) == param_1->C) &&
            *(uint *)(lVar4 + 4 + lVar20) == param_1->B) && param_1->A == *(uint *)(lVar4 + lVar20))
        {
          TArray<FGuid,TSizedDefaultAllocator<32>_>::RemoveAt
                    ((TArray<FGuid,TSizedDefaultAllocator<32>_> *)(puVar21 + 0x12),uVar19,Default);
          break;
        }
        lVar20 = lVar20 + -0x10;
        uVar19 = uVar19 - 1;
      } while (-1 < (int)uVar19);
    }
  }
  DestructItems<FAnalyticsEventAttribute,int>((FAnalyticsEventAttribute *)local_308.Data,local_300);
  if ((FAnalyticsEventAttribute *)local_308.Data != (FAnalyticsEventAttribute *)0x0) {
    FMemory::Free(local_308.Data);
  }
  return true;
}

// SetProvider @ 1431a43c0

void __thiscall
FAnalyticsFlowTracker::SetProvider
          (FAnalyticsFlowTracker *this,TSharedPtr<IAnalyticsProvider,1> *param_1)

{
  IAnalyticsProvider *pIVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pIVar1 = param_1->Object;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this->AnalyticsProvider).SharedReferenceCount.ReferenceController;
  (this->AnalyticsProvider).Object = pIVar1;
  (this->AnalyticsProvider).SharedReferenceCount.ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// StartFlow @ 1431a51c0

FGuid * __thiscall
FAnalyticsFlowTracker::StartFlow
          (FAnalyticsFlowTracker *this,FGuid *__return_storage_ptr__,FName *param_1)

{
  int *piVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  FString *pFVar7;
  ulong64 uVar8;
  longlong lVar9;
  longlong lVar10;
  FDateTime FVar11;
  FGuid *pFVar12;
  wchar_t *pwVar13;
  TArray<FGuid,TSizedDefaultAllocator<32>_> *pTVar14;
  undefined1 local_res8 [8];
  TPairInitializer<FGuid_const_&,FAnalyticsFlowTracker::FFlowData_const_&> local_d8;
  FName local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  DWORD local_a0;
  undefined8 local_98;
  void *local_90;
  undefined8 local_88;
  void *local_80;
  undefined8 local_78;
  FName *local_68;
  FGuid *local_60;
  FGuid *local_58;
  FName *local_50;
  FString local_40;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar7 = ::FName::ToString(param_1,&local_40);
  if ((pFVar7->Data).ArrayNum == 0) {
    pwVar13 = L"";
  }
  else {
    pwVar13 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
  }
  FMiscTrace::OutputBeginRegion(pwVar13,(wchar_t *)0x0);
  if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data.AllocatorInstance.Data);
  }
  FGuid::NewGuid(__return_storage_ptr__);
  uVar8 = CityHash64((char *)__return_storage_ptr__,0x10);
  iVar6 = TSet<TTuple<FGuid,FAnalyticsFlowTracker::FFlowData>,TDefaultMapHashableKeyFuncs<FGuid,FAnalyticsFlowTracker::FFlowData,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>
                    ((TSet<TTuple<FGuid,FAnalyticsFlowTracker::FFlowData>,TDefaultMapHashableKeyFuncs<FGuid,FAnalyticsFlowTracker::FFlowData,0>,FDefaultSetAllocator>
                      *)&this->FlowDataRegistry,(uint)uVar8,__return_storage_ptr__);
  if (iVar6 != -1) {
    lVar9 = (longlong)iVar6 * 0x70 + *(longlong *)&this->FlowDataRegistry;
    lVar10 = lVar9 + 0x10;
    if (lVar9 == 0) {
      lVar10 = 0;
    }
    if (lVar10 != 0) {
      local_res8[0] = 0;
      `FAnalyticsFlowTracker::StartFlow'::__l2::<lambda_1>::operator()(local_res8);
    }
  }
  ::FName::FName(&local_c8,L"None");
  local_c0 = 0;
  local_98 = 0;
  uStack_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_90 = (void *)0x0;
  local_88 = 0;
  local_80 = (void *)0x0;
  local_78 = 0;
  FVar11 = FDateTime::UtcNow();
  local_c0._0_4_ = __return_storage_ptr__->A;
  local_c0._4_4_ = __return_storage_ptr__->B;
  uStack_b8._0_4_ = __return_storage_ptr__->C;
  uStack_b8._4_4_ = __return_storage_ptr__->D;
  local_b0 = *(undefined8 *)FVar11.Ticks;
  local_c8 = *param_1;
  local_a0 = GetCurrentThreadId();
  local_68 = param_1;
  local_60 = __return_storage_ptr__;
  TSet<TTuple<FName,FGuid>,TDefaultMapHashableKeyFuncs<FName,FGuid,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FName_const_&,FGuid_const_&>_>
            ((TSet<TTuple<FName,FGuid>,TDefaultMapHashableKeyFuncs<FName,FGuid,0>,FDefaultSetAllocator>
              *)this,(TPairInitializer<FName_const_&,FGuid_const_&> *)&stack0x00000020,
             (bool *)&local_68);
  local_50 = &local_c8;
  local_58 = __return_storage_ptr__;
  TSet<TTuple<FGuid,FAnalyticsFlowTracker::FFlowData>,TDefaultMapHashableKeyFuncs<FGuid,FAnalyticsFlowTracker::FFlowData,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FGuid_const_&,FAnalyticsFlowTracker::FFlowData_const_&>_>
            ((TSet<TTuple<FGuid,FAnalyticsFlowTracker::FFlowData>,TDefaultMapHashableKeyFuncs<FGuid,FAnalyticsFlowTracker::FFlowData,0>,FDefaultSetAllocator>
              *)&this->FlowDataRegistry,&local_d8,(bool *)&local_58);
  pTVar14 = &this->FlowDataStack;
  pFVar12 = (FGuid *)(pTVar14->AllocatorInstance).Data;
  if ((pFVar12 <= __return_storage_ptr__) &&
     (__return_storage_ptr__ < pFVar12 + (this->FlowDataStack).ArrayMax)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pFVar12 = (FGuid *)(*pcVar3)();
      return pFVar12;
    }
  }
  iVar6 = (this->FlowDataStack).ArrayNum;
  piVar1 = &(this->FlowDataStack).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x410,&pTVar14->AllocatorInstance,piVar1);
  }
  (this->FlowDataStack).ArrayNum = iVar6 + 1;
  uVar4 = *(undefined8 *)&__return_storage_ptr__->C;
  pFVar2 = (pTVar14->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
  *(undefined8 *)pFVar2 = *(undefined8 *)__return_storage_ptr__;
  *(undefined8 *)(pFVar2 + 8) = uVar4;
  if (local_80 != (void *)0x0) {
    FMemory::Free(local_80);
  }
  if (local_90 != (void *)0x0) {
    FMemory::Free(local_90);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return __return_storage_ptr__;
}

// StartSession @ 1431a5410

void __thiscall FAnalyticsFlowTracker::StartSession(FAnalyticsFlowTracker *this)

{
  return;
}

// StartSubFlow @ 1431a5760

FGuid * __thiscall
FAnalyticsFlowTracker::StartSubFlow
          (FAnalyticsFlowTracker *this,FGuid *__return_storage_ptr__,FName *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FGuid *pFVar4;
  uint uVar5;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar1 = (this->FlowDataStack).ArrayNum;
  if (iVar1 < 1) {
    __return_storage_ptr__->A = 0;
    __return_storage_ptr__->B = 0;
    __return_storage_ptr__->C = 0;
    __return_storage_ptr__->D = 0;
  }
  else {
    uVar5 = 0;
    if ((int)(iVar1 - 1U) < iVar1) {
      uVar5 = ~(iVar1 - 1U) >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FGuid *)(*pcVar2)();
        return pFVar4;
      }
    }
    StartSubFlowInternal
              (this,__return_storage_ptr__,param_1,
               (FGuid *)((this->FlowDataStack).AllocatorInstance.Data +
                        (longlong)((this->FlowDataStack).ArrayNum + -1) * 0x10));
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return __return_storage_ptr__;
}

// StartSubFlow @ 1431a5850

FGuid * __thiscall
FAnalyticsFlowTracker::StartSubFlow
          (FAnalyticsFlowTracker *this,FGuid *__return_storage_ptr__,FName *param_1,FGuid *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    StartSubFlowInternal(this,__return_storage_ptr__,param_1,param_2);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// StartSubFlowInternal @ 1431a58d0

FGuid * __thiscall
FAnalyticsFlowTracker::StartSubFlowInternal
          (FAnalyticsFlowTracker *this,FGuid *__return_storage_ptr__,FName *param_1,FGuid *param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  ulong64 uVar6;
  FString *pFVar7;
  uint *puVar8;
  FDateTime FVar9;
  FGuid *pFVar10;
  wchar_t *pwVar11;
  uint *puVar12;
  uint *puVar13;
  undefined1 *puVar14;
  longlong lVar15;
  uint *puVar16;
  undefined1 local_res8 [8];
  undefined1 local_128 [8];
  FGuid local_120;
  undefined1 local_110 [8];
  TPairInitializer<FGuid_const_&,FAnalyticsFlowTracker::FSubFlowData_const_&> local_108;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  FName local_e0;
  undefined8 local_c8;
  undefined8 local_c0;
  DWORD local_b8;
  undefined8 local_b0;
  undefined1 local_a8;
  uint local_a4;
  FAnalyticsEventAttribute *local_a0;
  undefined8 local_98;
  FName *local_88;
  FGuid *local_80;
  FName *local_78;
  FGuid *local_70;
  FGuid *local_68;
  undefined8 *local_60;
  FString local_50;
  
  uVar6 = CityHash64((char *)param_2,0x10);
  iVar4 = TSet<TTuple<FGuid,FAnalyticsFlowTracker::FFlowData>,TDefaultMapHashableKeyFuncs<FGuid,FAnalyticsFlowTracker::FFlowData,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>
                    ((TSet<TTuple<FGuid,FAnalyticsFlowTracker::FFlowData>,TDefaultMapHashableKeyFuncs<FGuid,FAnalyticsFlowTracker::FFlowData,0>,FDefaultSetAllocator>
                      *)&this->FlowDataRegistry,(uint)uVar6,param_2);
  puVar13 = (uint *)0x0;
  puVar16 = puVar13;
  if (iVar4 != -1) {
    lVar15 = (longlong)iVar4 * 0x70 + *(longlong *)&this->FlowDataRegistry;
    puVar16 = (uint *)(lVar15 + 0x10);
    if (lVar15 == 0) {
      puVar16 = puVar13;
    }
    if (puVar16 != (uint *)0x0) goto LAB_1431a593b;
  }
  local_res8[0] = 0;
  bVar3 = `FAnalyticsFlowTracker::StartSubFlowInternal'::__l3::<lambda_1>::operator()(local_res8);
  if (!bVar3) {
    __return_storage_ptr__->A = 0;
    __return_storage_ptr__->B = 0;
    __return_storage_ptr__->C = 0;
    __return_storage_ptr__->D = 0;
    return __return_storage_ptr__;
  }
LAB_1431a593b:
  pFVar7 = ::FName::ToString(param_1,&local_50);
  if ((pFVar7->Data).ArrayNum == 0) {
    pwVar11 = L"";
  }
  else {
    pwVar11 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
  }
  FMiscTrace::OutputBeginRegion(pwVar11,(wchar_t *)0x0);
  if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data.AllocatorInstance.Data);
  }
  FGuid::NewGuid(&local_120);
  uVar6 = CityHash64((char *)&local_120,0x10);
  if (*(int *)&(this->SubFlowDataRegistry).field_0x8 !=
      *(int *)&(this->SubFlowDataRegistry).field_0x34) {
    puVar14 = *(undefined1 **)&(this->SubFlowDataRegistry).field_0x40;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = &(this->SubFlowDataRegistry).field_0x38;
    }
    uVar5 = *(uint *)(puVar14 +
                     ((ulonglong)(*(int *)&(this->SubFlowDataRegistry).field_0x48 - 1) &
                     uVar6 & 0xffffffff) * 4);
    if (uVar5 != 0xffffffff) {
      do {
        puVar12 = (uint *)((longlong)(int)uVar5 * 0x80 +
                          *(longlong *)&(this->SubFlowDataRegistry).field_0x0);
        if (((local_120.D == puVar12[3] && local_120.C == puVar12[2]) && local_120.B == puVar12[1])
            && local_120.A == *puVar12) {
          puVar8 = puVar12 + 4;
          if (puVar12 == (uint *)0x0) {
            puVar8 = puVar13;
          }
          if (puVar8 != (uint *)0x0) {
            local_128[0] = 0;
            `FAnalyticsFlowTracker::StartSubFlowInternal'::__l5::<lambda_2>::operator()(local_128);
          }
          break;
        }
        uVar5 = puVar12[0x1e];
      } while (uVar5 != 0xffffffff);
    }
  }
  local_80 = &local_120;
  local_88 = param_1;
  TSet<TTuple<FName,FGuid>,TDefaultMapHashableKeyFuncs<FName,FGuid,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FName_const_&,FGuid_const_&>_>
            ((TSet<TTuple<FName,FGuid>,TDefaultMapHashableKeyFuncs<FName,FGuid,0>,FDefaultSetAllocator>
              *)&this->SubFlowGuidRegistry,
             (TPairInitializer<FName_const_&,FGuid_const_&> *)local_110,(bool *)&local_88);
  local_e0 = *param_1;
  local_f0 = 0;
  local_b0 = 0;
  uStack_e8 = 0;
  local_a8 = 0;
  local_a0 = (FAnalyticsEventAttribute *)0x0;
  local_98 = 0;
  FVar9 = FDateTime::UtcNow();
  local_c8 = *(undefined8 *)FVar9.Ticks;
  local_a4 = puVar16[0x14];
  local_c0 = 0;
  local_b8 = GetCurrentThreadId();
  local_f0 = *(undefined8 *)(puVar16 + 2);
  uStack_e8 = *(undefined8 *)(puVar16 + 4);
  local_f8 = *(undefined8 *)puVar16;
  if (((*(FGuid **)(puVar16 + 0xe) <= &local_120) &&
      (&local_120 < *(FGuid **)(puVar16 + 0xe) + (int)puVar16[0x11])) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar10 = (FGuid *)(*pcVar2)();
    return pFVar10;
  }
  uVar5 = puVar16[0x10];
  if (uVar5 == puVar16[0x11]) {
    uVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x410,(ForAnyElementType *)(puVar16 + 0xe),(int *)(puVar16 + 0x11));
  }
  puVar16[0x10] = uVar5 + 1;
  puVar1 = (undefined8 *)(*(longlong *)(puVar16 + 0xe) + (longlong)(int)uVar5 * 0x10);
  *puVar1 = CONCAT44(local_120.B,local_120.A);
  puVar1[1] = CONCAT44(local_120.D,local_120.C);
  if (((*(FGuid **)(puVar16 + 0x12) <= &local_120) &&
      (&local_120 < *(FGuid **)(puVar16 + 0x12) + (int)puVar16[0x15])) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar10 = (FGuid *)(*pcVar2)();
    return pFVar10;
  }
  uVar5 = puVar16[0x14];
  if (uVar5 == puVar16[0x15]) {
    uVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x410,(ForAnyElementType *)(puVar16 + 0x12),(int *)(puVar16 + 0x15));
  }
  puVar16[0x14] = uVar5 + 1;
  puVar1 = (undefined8 *)(*(longlong *)(puVar16 + 0x12) + (longlong)(int)uVar5 * 0x10);
  *puVar1 = CONCAT44(local_120.B,local_120.A);
  puVar1[1] = CONCAT44(local_120.D,local_120.C);
  local_70 = &local_120;
  local_78 = param_1;
  TSet<TTuple<FName,FGuid>,TDefaultMapHashableKeyFuncs<FName,FGuid,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FName_const_&,FGuid_const_&>_>
            ((TSet<TTuple<FName,FGuid>,TDefaultMapHashableKeyFuncs<FName,FGuid,0>,FDefaultSetAllocator>
              *)&this->SubFlowGuidRegistry,
             (TPairInitializer<FName_const_&,FGuid_const_&> *)(local_110 + 4),(bool *)&local_78);
  local_68 = &local_120;
  local_60 = &local_f8;
  TSet<TTuple<FGuid,FAnalyticsFlowTracker::FSubFlowData>,TDefaultMapHashableKeyFuncs<FGuid,FAnalyticsFlowTracker::FSubFlowData,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FGuid_const_&,FAnalyticsFlowTracker::FSubFlowData_const_&>_>
            ((TSet<TTuple<FGuid,FAnalyticsFlowTracker::FSubFlowData>,TDefaultMapHashableKeyFuncs<FGuid,FAnalyticsFlowTracker::FSubFlowData,0>,FDefaultSetAllocator>
              *)&this->SubFlowDataRegistry,&local_108,(bool *)&local_68);
  __return_storage_ptr__->A = local_120.A;
  __return_storage_ptr__->B = local_120.B;
  __return_storage_ptr__->C = local_120.C;
  __return_storage_ptr__->D = local_120.D;
  DestructItems<FAnalyticsEventAttribute,int>(local_a0,(int)local_98);
  if (local_a0 != (FAnalyticsEventAttribute *)0x0) {
    FMemory::Free(local_a0);
  }
  return __return_storage_ptr__;
}

// operator() @ 15049bca0

bool __thiscall `FAnalyticsFlowTracker::StartFlow'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8109941322015571929>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8109941322015571929>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15049bce0

bool __thiscall
`FAnalyticsFlowTracker::StartSubFlowInternal'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8109941322015571890>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8109941322015571890>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15049bd20

bool __thiscall `FAnalyticsFlowTracker::EndFlowInternal'::__l11::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8109941322015571683>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8109941322015571683>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15049bd60

bool __thiscall
`FAnalyticsFlowTracker::EndSubFlowInternal'::__l13::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8109941322015571811>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8109941322015571811>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15049bda0

bool __thiscall
`FAnalyticsFlowTracker::StartSubFlowInternal'::__l5::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8109941322015571884>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8109941322015571884>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15049bde0

bool __thiscall `FAnalyticsFlowTracker::EndFlowInternal'::__l21::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8109941322015571660>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8109941322015571660>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

