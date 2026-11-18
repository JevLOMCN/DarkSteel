// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnalyticsET
// Functions: 18

// ~IAnalyticsProvider @ 143194140

void __thiscall IAnalyticsProvider::~IAnalyticsProvider(IAnalyticsProvider *this)

{
  *this = (IAnalyticsProvider)&___7IAnalyticsProvider__6B_;
  return;
}

// RecordCurrencyGiven @ 14319f0f0

/* WARNING: Removing unreachable block (ram,0x00014319f126) */

void __thiscall
IAnalyticsProvider::RecordCurrencyGiven(IAnalyticsProvider *this,FString *param_1,int param_2)

{
  (**(code **)((longlong)*this + 0xb0))();
  DestructItems<FAnalyticsEventAttribute,int>((FAnalyticsEventAttribute *)0x0,0);
  return;
}

// RecordCurrencyGiven @ 14319f140

/* WARNING: Removing unreachable block (ram,0x00014319f386) */
/* WARNING: Removing unreachable block (ram,0x00014319f568) */
/* WARNING: Removing unreachable block (ram,0x00014319f394) */
/* WARNING: Removing unreachable block (ram,0x00014319f576) */

void __thiscall
IAnalyticsProvider::RecordCurrencyGiven
          (IAnalyticsProvider *this,FString *param_1,int param_2,
          TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *param_3)

{
  FAnalyticsEventAttribute *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FString *pFVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  ForAnyElementType local_c8;
  int local_c0;
  int local_bc;
  FAnalyticsEventAttribute local_b8;
  FAnalyticsEventAttribute local_88;
  FString local_58;
  FString local_48;
  FString local_38 [2];
  
  iVar5 = param_3->ArrayNum;
  pFVar1 = (FAnalyticsEventAttribute *)(param_3->AllocatorInstance).Data;
  local_c8.Data = (FScriptContainerElement *)0x0;
  local_c0 = iVar5;
  if (iVar5 == 0) {
    local_bc = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,iVar5,0,&local_c8,iVar5,&local_bc);
    ConstructItems<FAnalyticsEventAttribute,FAnalyticsEventAttribute,int>
              (local_c8.Data,pFVar1,iVar5);
  }
  pFVar6 = ::FString::FString(&local_48,L"GameCurrencyType");
  if (((pFVar6->Data).ArrayNum < 2) ||
     (iVar5 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar6->Data).AllocatorInstance.Data,L"EventName"), iVar5 == 0)
     ) {
LAB_14319f213:
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
    if (iVar5 == 0) goto LAB_14319f213;
  }
  local_b8.AttrName.Data.AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
  (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.AttrName.Data.ArrayNum = (pFVar6->Data).ArrayNum;
  local_b8.AttrName.Data.ArrayMax = (pFVar6->Data).ArrayMax;
  (pFVar6->Data).ArrayNum = 0;
  (pFVar6->Data).ArrayMax = 0;
  ::FString::FString(&local_b8.AttrValueString,param_1);
  local_b8.AttrValueBool = false;
  local_b8.AttrValueNumber = 0.0;
  local_b8.AttrType = String;
  pFVar2 = (pFVar6->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  if (((local_c8.Data <= &local_b8) &&
      (&local_b8 < (FAnalyticsEventAttribute *)(local_c8.Data + (longlong)local_bc * 0x30))) &&
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
  if (local_c0 == local_bc) {
    local_c0 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x830,&local_c8,&local_bc);
  }
  lVar7 = (longlong)local_c0;
  *(undefined8 *)&local_c8.Data[lVar7 * 0x30].field_0x0 = 0;
  *(FScriptContainerElement **)&local_c8.Data[lVar7 * 0x30].field_0x0 =
       local_b8.AttrName.Data.AllocatorInstance.Data;
  *(int *)(local_c8.Data + lVar7 * 0x30 + 8) = local_b8.AttrName.Data.ArrayNum;
  *(int *)(local_c8.Data + lVar7 * 0x30 + 0xc) = local_b8.AttrName.Data.ArrayMax;
  *(undefined8 *)(local_c8.Data + lVar7 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(local_c8.Data + lVar7 * 0x30 + 0x10) =
       local_b8.AttrValueString.Data.AllocatorInstance.Data;
  *(int *)(local_c8.Data + lVar7 * 0x30 + 0x18) = local_b8.AttrValueString.Data.ArrayNum;
  *(int *)(local_c8.Data + lVar7 * 0x30 + 0x1c) = local_b8.AttrValueString.Data.ArrayMax;
  *(double *)(local_c8.Data + lVar7 * 0x30 + 0x20) = local_b8.AttrValueNumber;
  local_c8.Data[lVar7 * 0x30 + 0x28] = (FScriptContainerElement)local_b8.AttrValueBool;
  *(AttrTypeEnum *)(local_c8.Data + lVar7 * 0x30 + 0x2c) = local_b8.AttrType;
  local_b8.AttrValueString.Data.ArrayNum = 0;
  local_b8.AttrValueString.Data.ArrayMax = 0;
  local_b8.AttrValueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.AttrName.Data.ArrayNum = 0;
  local_b8.AttrName.Data.ArrayMax = 0;
  local_b8.AttrName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c0 = local_c0 + 1;
  pFVar6 = ::FString::FString(local_38,L"GameCurrencyAmount");
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
    if (iVar5 != 0) goto LAB_14319f40d;
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
LAB_14319f40d:
  local_88.AttrName.Data.AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
  (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.AttrName.Data.ArrayNum = (pFVar6->Data).ArrayNum;
  local_88.AttrName.Data.ArrayMax = (pFVar6->Data).ArrayMax;
  (pFVar6->Data).ArrayNum = 0;
  (pFVar6->Data).ArrayMax = 0;
  ::FString::PrintfImpl(&local_88.AttrValueString,L"%d");
  local_88.AttrValueNumber = 0.0;
  local_88.AttrValueBool = false;
  local_88.AttrType = JsonFragment;
  pFVar2 = (pFVar6->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  if (((local_c8.Data <= &local_88) &&
      (&local_88 < (FAnalyticsEventAttribute *)(local_c8.Data + (longlong)local_bc * 0x30))) &&
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
  if (local_c0 == local_bc) {
    local_c0 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x830,&local_c8,&local_bc);
  }
  lVar7 = (longlong)local_c0;
  *(undefined8 *)&local_c8.Data[lVar7 * 0x30].field_0x0 = 0;
  *(FScriptContainerElement **)&local_c8.Data[lVar7 * 0x30].field_0x0 =
       local_88.AttrName.Data.AllocatorInstance.Data;
  *(int *)(local_c8.Data + lVar7 * 0x30 + 8) = local_88.AttrName.Data.ArrayNum;
  *(int *)(local_c8.Data + lVar7 * 0x30 + 0xc) = local_88.AttrName.Data.ArrayMax;
  *(undefined8 *)(local_c8.Data + lVar7 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(local_c8.Data + lVar7 * 0x30 + 0x10) =
       local_88.AttrValueString.Data.AllocatorInstance.Data;
  *(int *)(local_c8.Data + lVar7 * 0x30 + 0x18) = local_88.AttrValueString.Data.ArrayNum;
  *(int *)(local_c8.Data + lVar7 * 0x30 + 0x1c) = local_88.AttrValueString.Data.ArrayMax;
  *(double *)(local_c8.Data + lVar7 * 0x30 + 0x20) = local_88.AttrValueNumber;
  local_c8.Data[lVar7 * 0x30 + 0x28] = (FScriptContainerElement)local_88.AttrValueBool;
  *(AttrTypeEnum *)(local_c8.Data + lVar7 * 0x30 + 0x2c) = local_88.AttrType;
  local_88.AttrValueString.Data.ArrayNum = 0;
  local_88.AttrValueString.Data.ArrayMax = 0;
  local_88.AttrValueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.AttrName.Data.ArrayNum = 0;
  local_88.AttrName.Data.ArrayMax = 0;
  local_88.AttrName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pcVar3 = *(code **)((longlong)*this + 0x80);
  local_c0 = local_c0 + 1;
  ::FString::FString(&local_58,L"Currency Given");
  (*pcVar3)(this,&local_58,&local_c8);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  DestructItems<FAnalyticsEventAttribute,int>((FAnalyticsEventAttribute *)local_c8.Data,local_c0);
  if ((FAnalyticsEventAttribute *)local_c8.Data != (FAnalyticsEventAttribute *)0x0) {
    FMemory::Free(local_c8.Data);
  }
  return;
}

// RecordCurrencyPurchase @ 14319f600

/* WARNING: Removing unreachable block (ram,0x00014319f9fe) */
/* WARNING: Removing unreachable block (ram,0x00014319f81d) */
/* WARNING: Removing unreachable block (ram,0x00014319fbe1) */
/* WARNING: Removing unreachable block (ram,0x00014319fa0c) */
/* WARNING: Removing unreachable block (ram,0x00014319f82c) */
/* WARNING: Removing unreachable block (ram,0x00014319fbef) */

void __thiscall
IAnalyticsProvider::RecordCurrencyPurchase
          (IAnalyticsProvider *this,FString *param_1,int param_2,FString *param_3,float param_4,
          FString *param_5)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FString *pFVar5;
  longlong lVar6;
  wchar_t *pwVar7;
  ForAnyElementType local_f8;
  undefined8 local_f0;
  FAnalyticsEventAttribute local_e8;
  FAnalyticsEventAttribute local_b8;
  FAnalyticsEventAttribute local_88;
  FString local_58;
  FString local_48;
  FString local_38 [2];
  
  local_f8.Data = (FScriptContainerElement *)0x0;
  local_f0 = 0;
  pFVar5 = ::FString::FString(&local_58,L"RealCurrencyType");
  if (((pFVar5->Data).ArrayNum < 2) ||
     (iVar4 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar5->Data).AllocatorInstance.Data,L"EventName"), iVar4 == 0)
     ) {
LAB_14319f68e:
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
    if ((pFVar5->Data).ArrayNum == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
    iVar4 = FGenericPlatformStricmp::Stricmp(pwVar7,L"DateOffset");
    if (iVar4 == 0) goto LAB_14319f68e;
  }
  local_e8.AttrName.Data.AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
  (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.AttrName.Data.ArrayNum = (pFVar5->Data).ArrayNum;
  local_e8.AttrName.Data.ArrayMax = (pFVar5->Data).ArrayMax;
  (pFVar5->Data).ArrayNum = 0;
  (pFVar5->Data).ArrayMax = 0;
  ::FString::FString(&local_e8.AttrValueString,param_3);
  local_e8.AttrValueBool = false;
  local_e8.AttrValueNumber = 0.0;
  local_e8.AttrType = String;
  pFVar1 = (pFVar5->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if (((local_f8.Data <= &local_e8) &&
      (&local_e8 < (FAnalyticsEventAttribute *)(local_f8.Data + (longlong)local_f0._4_4_ * 0x30)))
     && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = (int)local_f0;
  if ((int)local_f0 == local_f0._4_4_) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&local_f8,(int *)((longlong)&local_f0 + 4));
  }
  lVar6 = (longlong)iVar4;
  local_f0 = CONCAT44(local_f0._4_4_,iVar4 + 1);
  *(undefined8 *)&local_f8.Data[lVar6 * 0x30].field_0x0 = 0;
  *(FScriptContainerElement **)&local_f8.Data[lVar6 * 0x30].field_0x0 =
       local_e8.AttrName.Data.AllocatorInstance.Data;
  *(int *)(local_f8.Data + lVar6 * 0x30 + 8) = local_e8.AttrName.Data.ArrayNum;
  *(int *)(local_f8.Data + lVar6 * 0x30 + 0xc) = local_e8.AttrName.Data.ArrayMax;
  *(undefined8 *)(local_f8.Data + lVar6 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(local_f8.Data + lVar6 * 0x30 + 0x10) =
       local_e8.AttrValueString.Data.AllocatorInstance.Data;
  *(int *)(local_f8.Data + lVar6 * 0x30 + 0x18) = local_e8.AttrValueString.Data.ArrayNum;
  *(int *)(local_f8.Data + lVar6 * 0x30 + 0x1c) = local_e8.AttrValueString.Data.ArrayMax;
  *(double *)(local_f8.Data + lVar6 * 0x30 + 0x20) = local_e8.AttrValueNumber;
  local_f8.Data[lVar6 * 0x30 + 0x28] = (FScriptContainerElement)local_e8.AttrValueBool;
  *(AttrTypeEnum *)(local_f8.Data + lVar6 * 0x30 + 0x2c) = local_e8.AttrType;
  local_e8.AttrValueString.Data.ArrayNum = 0;
  local_e8.AttrValueString.Data.ArrayMax = 0;
  local_e8.AttrValueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.AttrName.Data.ArrayNum = 0;
  local_e8.AttrName.Data.ArrayMax = 0;
  local_e8.AttrName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar5 = ::FString::FString(&local_48,L"RealMoneyCost");
  if (((pFVar5->Data).ArrayNum < 2) ||
     (iVar4 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar5->Data).AllocatorInstance.Data,L"EventName"), iVar4 == 0)
     ) {
LAB_14319f87f:
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
    if ((pFVar5->Data).ArrayNum == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
    iVar4 = FGenericPlatformStricmp::Stricmp(pwVar7,L"DateOffset");
    if (iVar4 == 0) goto LAB_14319f87f;
  }
  local_b8.AttrName.Data.AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
  (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.AttrName.Data.ArrayNum = (pFVar5->Data).ArrayNum;
  local_b8.AttrName.Data.ArrayMax = (pFVar5->Data).ArrayMax;
  (pFVar5->Data).ArrayNum = 0;
  (pFVar5->Data).ArrayMax = 0;
  AnalyticsConversionToString(&local_b8.AttrValueString,param_4);
  local_b8.AttrValueNumber = 0.0;
  local_b8.AttrValueBool = false;
  local_b8.AttrType = JsonFragment;
  pFVar1 = (pFVar5->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if (((local_f8.Data <= &local_b8) &&
      (&local_b8 < (FAnalyticsEventAttribute *)(local_f8.Data + (longlong)local_f0._4_4_ * 0x30)))
     && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = (int)local_f0;
  if ((int)local_f0 == local_f0._4_4_) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&local_f8,(int *)((longlong)&local_f0 + 4));
  }
  lVar6 = (longlong)iVar4;
  local_f0 = CONCAT44(local_f0._4_4_,iVar4 + 1);
  *(undefined8 *)&local_f8.Data[lVar6 * 0x30].field_0x0 = 0;
  *(FScriptContainerElement **)&local_f8.Data[lVar6 * 0x30].field_0x0 =
       local_b8.AttrName.Data.AllocatorInstance.Data;
  *(int *)(local_f8.Data + lVar6 * 0x30 + 8) = local_b8.AttrName.Data.ArrayNum;
  *(int *)(local_f8.Data + lVar6 * 0x30 + 0xc) = local_b8.AttrName.Data.ArrayMax;
  *(undefined8 *)(local_f8.Data + lVar6 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(local_f8.Data + lVar6 * 0x30 + 0x10) =
       local_b8.AttrValueString.Data.AllocatorInstance.Data;
  *(int *)(local_f8.Data + lVar6 * 0x30 + 0x18) = local_b8.AttrValueString.Data.ArrayNum;
  *(int *)(local_f8.Data + lVar6 * 0x30 + 0x1c) = local_b8.AttrValueString.Data.ArrayMax;
  *(double *)(local_f8.Data + lVar6 * 0x30 + 0x20) = local_b8.AttrValueNumber;
  local_f8.Data[lVar6 * 0x30 + 0x28] = (FScriptContainerElement)local_b8.AttrValueBool;
  *(AttrTypeEnum *)(local_f8.Data + lVar6 * 0x30 + 0x2c) = local_b8.AttrType;
  local_b8.AttrValueString.Data.ArrayNum = 0;
  local_b8.AttrValueString.Data.ArrayMax = 0;
  local_b8.AttrValueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.AttrName.Data.ArrayNum = 0;
  local_b8.AttrName.Data.ArrayMax = 0;
  local_b8.AttrName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar5 = ::FString::FString(local_38,L"PaymentProvider");
  if ((1 < (pFVar5->Data).ArrayNum) &&
     (iVar4 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar5->Data).AllocatorInstance.Data,L"EventName"), iVar4 != 0)
     ) {
    if ((pFVar5->Data).ArrayNum == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
    iVar4 = FGenericPlatformStricmp::Stricmp(pwVar7,L"DateOffset");
    if (iVar4 != 0) goto LAB_14319fa85;
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
LAB_14319fa85:
  local_88.AttrName.Data.AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
  (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.AttrName.Data.ArrayNum = (pFVar5->Data).ArrayNum;
  local_88.AttrName.Data.ArrayMax = (pFVar5->Data).ArrayMax;
  (pFVar5->Data).ArrayNum = 0;
  (pFVar5->Data).ArrayMax = 0;
  ::FString::FString(&local_88.AttrValueString,param_5);
  local_88.AttrValueNumber = 0.0;
  local_88.AttrValueBool = false;
  local_88.AttrType = String;
  pFVar1 = (pFVar5->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if (((local_f8.Data <= &local_88) &&
      (&local_88 < (FAnalyticsEventAttribute *)(local_f8.Data + (longlong)local_f0._4_4_ * 0x30)))
     && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = (int)local_f0;
  if ((int)local_f0 == local_f0._4_4_) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&local_f8,(int *)((longlong)&local_f0 + 4));
  }
  lVar6 = (longlong)iVar4;
  local_f0 = CONCAT44(local_f0._4_4_,iVar4 + 1);
  *(undefined8 *)&local_f8.Data[lVar6 * 0x30].field_0x0 = 0;
  *(FScriptContainerElement **)&local_f8.Data[lVar6 * 0x30].field_0x0 =
       local_88.AttrName.Data.AllocatorInstance.Data;
  *(int *)(local_f8.Data + lVar6 * 0x30 + 8) = local_88.AttrName.Data.ArrayNum;
  *(int *)(local_f8.Data + lVar6 * 0x30 + 0xc) = local_88.AttrName.Data.ArrayMax;
  *(undefined8 *)(local_f8.Data + lVar6 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(local_f8.Data + lVar6 * 0x30 + 0x10) =
       local_88.AttrValueString.Data.AllocatorInstance.Data;
  *(int *)(local_f8.Data + lVar6 * 0x30 + 0x18) = local_88.AttrValueString.Data.ArrayNum;
  *(int *)(local_f8.Data + lVar6 * 0x30 + 0x1c) = local_88.AttrValueString.Data.ArrayMax;
  *(double *)(local_f8.Data + lVar6 * 0x30 + 0x20) = local_88.AttrValueNumber;
  local_f8.Data[lVar6 * 0x30 + 0x28] = (FScriptContainerElement)local_88.AttrValueBool;
  *(AttrTypeEnum *)(local_f8.Data + lVar6 * 0x30 + 0x2c) = local_88.AttrType;
  local_88.AttrValueString.Data.ArrayNum = 0;
  local_88.AttrValueString.Data.ArrayMax = 0;
  local_88.AttrValueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.AttrName.Data.ArrayNum = 0;
  local_88.AttrName.Data.ArrayMax = 0;
  local_88.AttrName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (**(code **)((longlong)*this + 0xa0))(this,param_1,param_2,&local_f8);
  DestructItems<FAnalyticsEventAttribute,int>
            ((FAnalyticsEventAttribute *)local_f8.Data,(int)local_f0);
  if ((FAnalyticsEventAttribute *)local_f8.Data != (FAnalyticsEventAttribute *)0x0) {
    FMemory::Free(local_f8.Data);
  }
  return;
}

// RecordCurrencyPurchase @ 14319fc60

/* WARNING: Removing unreachable block (ram,0x00014319fc96) */

void __thiscall
IAnalyticsProvider::RecordCurrencyPurchase(IAnalyticsProvider *this,FString *param_1,int param_2)

{
  (**(code **)((longlong)*this + 0xa0))();
  DestructItems<FAnalyticsEventAttribute,int>((FAnalyticsEventAttribute *)0x0,0);
  return;
}

// RecordCurrencyPurchase @ 14319fcb0

/* WARNING: Removing unreachable block (ram,0x00014319fef6) */
/* WARNING: Removing unreachable block (ram,0x0001431a00d8) */
/* WARNING: Removing unreachable block (ram,0x00014319ff04) */
/* WARNING: Removing unreachable block (ram,0x0001431a00e6) */

void __thiscall
IAnalyticsProvider::RecordCurrencyPurchase
          (IAnalyticsProvider *this,FString *param_1,int param_2,
          TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *param_3)

{
  FAnalyticsEventAttribute *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FString *pFVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  ForAnyElementType local_c8;
  int local_c0;
  int local_bc;
  FAnalyticsEventAttribute local_b8;
  FAnalyticsEventAttribute local_88;
  FString local_58;
  FString local_48;
  FString local_38 [2];
  
  iVar5 = param_3->ArrayNum;
  pFVar1 = (FAnalyticsEventAttribute *)(param_3->AllocatorInstance).Data;
  local_c8.Data = (FScriptContainerElement *)0x0;
  local_c0 = iVar5;
  if (iVar5 == 0) {
    local_bc = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,iVar5,0,&local_c8,iVar5,&local_bc);
    ConstructItems<FAnalyticsEventAttribute,FAnalyticsEventAttribute,int>
              (local_c8.Data,pFVar1,iVar5);
  }
  pFVar6 = ::FString::FString(&local_48,L"GameCurrencyType");
  if (((pFVar6->Data).ArrayNum < 2) ||
     (iVar5 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar6->Data).AllocatorInstance.Data,L"EventName"), iVar5 == 0)
     ) {
LAB_14319fd83:
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
    if (iVar5 == 0) goto LAB_14319fd83;
  }
  local_b8.AttrName.Data.AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
  (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.AttrName.Data.ArrayNum = (pFVar6->Data).ArrayNum;
  local_b8.AttrName.Data.ArrayMax = (pFVar6->Data).ArrayMax;
  (pFVar6->Data).ArrayNum = 0;
  (pFVar6->Data).ArrayMax = 0;
  ::FString::FString(&local_b8.AttrValueString,param_1);
  local_b8.AttrValueBool = false;
  local_b8.AttrValueNumber = 0.0;
  local_b8.AttrType = String;
  pFVar2 = (pFVar6->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  if (((local_c8.Data <= &local_b8) &&
      (&local_b8 < (FAnalyticsEventAttribute *)(local_c8.Data + (longlong)local_bc * 0x30))) &&
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
  if (local_c0 == local_bc) {
    local_c0 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x830,&local_c8,&local_bc);
  }
  lVar7 = (longlong)local_c0;
  *(undefined8 *)&local_c8.Data[lVar7 * 0x30].field_0x0 = 0;
  *(FScriptContainerElement **)&local_c8.Data[lVar7 * 0x30].field_0x0 =
       local_b8.AttrName.Data.AllocatorInstance.Data;
  *(int *)(local_c8.Data + lVar7 * 0x30 + 8) = local_b8.AttrName.Data.ArrayNum;
  *(int *)(local_c8.Data + lVar7 * 0x30 + 0xc) = local_b8.AttrName.Data.ArrayMax;
  *(undefined8 *)(local_c8.Data + lVar7 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(local_c8.Data + lVar7 * 0x30 + 0x10) =
       local_b8.AttrValueString.Data.AllocatorInstance.Data;
  *(int *)(local_c8.Data + lVar7 * 0x30 + 0x18) = local_b8.AttrValueString.Data.ArrayNum;
  *(int *)(local_c8.Data + lVar7 * 0x30 + 0x1c) = local_b8.AttrValueString.Data.ArrayMax;
  *(double *)(local_c8.Data + lVar7 * 0x30 + 0x20) = local_b8.AttrValueNumber;
  local_c8.Data[lVar7 * 0x30 + 0x28] = (FScriptContainerElement)local_b8.AttrValueBool;
  *(AttrTypeEnum *)(local_c8.Data + lVar7 * 0x30 + 0x2c) = local_b8.AttrType;
  local_b8.AttrValueString.Data.ArrayNum = 0;
  local_b8.AttrValueString.Data.ArrayMax = 0;
  local_b8.AttrValueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.AttrName.Data.ArrayNum = 0;
  local_b8.AttrName.Data.ArrayMax = 0;
  local_b8.AttrName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c0 = local_c0 + 1;
  pFVar6 = ::FString::FString(local_38,L"GameCurrencyAmount");
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
    if (iVar5 != 0) goto LAB_14319ff7d;
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
LAB_14319ff7d:
  local_88.AttrName.Data.AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
  (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.AttrName.Data.ArrayNum = (pFVar6->Data).ArrayNum;
  local_88.AttrName.Data.ArrayMax = (pFVar6->Data).ArrayMax;
  (pFVar6->Data).ArrayNum = 0;
  (pFVar6->Data).ArrayMax = 0;
  ::FString::PrintfImpl(&local_88.AttrValueString,L"%d");
  local_88.AttrValueNumber = 0.0;
  local_88.AttrValueBool = false;
  local_88.AttrType = JsonFragment;
  pFVar2 = (pFVar6->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  if (((local_c8.Data <= &local_88) &&
      (&local_88 < (FAnalyticsEventAttribute *)(local_c8.Data + (longlong)local_bc * 0x30))) &&
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
  if (local_c0 == local_bc) {
    local_c0 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x830,&local_c8,&local_bc);
  }
  lVar7 = (longlong)local_c0;
  *(undefined8 *)&local_c8.Data[lVar7 * 0x30].field_0x0 = 0;
  *(FScriptContainerElement **)&local_c8.Data[lVar7 * 0x30].field_0x0 =
       local_88.AttrName.Data.AllocatorInstance.Data;
  *(int *)(local_c8.Data + lVar7 * 0x30 + 8) = local_88.AttrName.Data.ArrayNum;
  *(int *)(local_c8.Data + lVar7 * 0x30 + 0xc) = local_88.AttrName.Data.ArrayMax;
  *(undefined8 *)(local_c8.Data + lVar7 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(local_c8.Data + lVar7 * 0x30 + 0x10) =
       local_88.AttrValueString.Data.AllocatorInstance.Data;
  *(int *)(local_c8.Data + lVar7 * 0x30 + 0x18) = local_88.AttrValueString.Data.ArrayNum;
  *(int *)(local_c8.Data + lVar7 * 0x30 + 0x1c) = local_88.AttrValueString.Data.ArrayMax;
  *(double *)(local_c8.Data + lVar7 * 0x30 + 0x20) = local_88.AttrValueNumber;
  local_c8.Data[lVar7 * 0x30 + 0x28] = (FScriptContainerElement)local_88.AttrValueBool;
  *(AttrTypeEnum *)(local_c8.Data + lVar7 * 0x30 + 0x2c) = local_88.AttrType;
  local_88.AttrValueString.Data.ArrayNum = 0;
  local_88.AttrValueString.Data.ArrayMax = 0;
  local_88.AttrValueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.AttrName.Data.ArrayNum = 0;
  local_88.AttrName.Data.ArrayMax = 0;
  local_88.AttrName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pcVar3 = *(code **)((longlong)*this + 0x80);
  local_c0 = local_c0 + 1;
  ::FString::FString(&local_58,L"Currency Purchase");
  (*pcVar3)(this,&local_58,&local_c8);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  DestructItems<FAnalyticsEventAttribute,int>((FAnalyticsEventAttribute *)local_c8.Data,local_c0);
  if ((FAnalyticsEventAttribute *)local_c8.Data != (FAnalyticsEventAttribute *)0x0) {
    FMemory::Free(local_c8.Data);
  }
  return;
}

// RecordError @ 1431a0170

void __thiscall IAnalyticsProvider::RecordError(IAnalyticsProvider *this,FString *param_1)

{
  FAnalyticsEventAttribute *local_18;
  undefined8 local_10;
  
  local_18 = (FAnalyticsEventAttribute *)0x0;
  local_10 = 0;
  (**(code **)((longlong)*this + 200))(this,param_1,&local_18);
  DestructItems<FAnalyticsEventAttribute,int>(local_18,(int)local_10);
  if (local_18 != (FAnalyticsEventAttribute *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// RecordError @ 1431a01c0

/* WARNING: Removing unreachable block (ram,0x0001431a040e) */
/* WARNING: Removing unreachable block (ram,0x0001431a041c) */

void __thiscall
IAnalyticsProvider::RecordError
          (IAnalyticsProvider *this,FString *param_1,
          TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *param_2)

{
  FAnalyticsEventAttribute *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FString *pFVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  ForAnyElementType local_78;
  int local_70;
  int local_6c;
  FString local_68;
  FString local_58;
  FAnalyticsEventAttribute local_48;
  
  iVar5 = param_2->ArrayNum;
  pFVar1 = (FAnalyticsEventAttribute *)(param_2->AllocatorInstance).Data;
  local_78.Data = (FScriptContainerElement *)0x0;
  local_70 = iVar5;
  if (iVar5 == 0) {
    local_6c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,iVar5,0,&local_78,iVar5,&local_6c);
    ConstructItems<FAnalyticsEventAttribute,FAnalyticsEventAttribute,int>
              (local_78.Data,pFVar1,iVar5);
  }
  if ((param_1->Data).ArrayNum == 0) {
    pwVar9 = L"";
  }
  else {
    pwVar9 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  pFVar6 = ::FString::FString(&local_58,L"Error");
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
    if (iVar5 != 0) goto LAB_1431a02c1;
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
LAB_1431a02c1:
  local_48.AttrName.Data.AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
  (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.AttrName.Data.ArrayNum = (pFVar6->Data).ArrayNum;
  local_48.AttrName.Data.ArrayMax = (pFVar6->Data).ArrayMax;
  (pFVar6->Data).ArrayNum = 0;
  (pFVar6->Data).ArrayMax = 0;
  ::FString::FString(&local_48.AttrValueString,pwVar9);
  local_48.AttrValueBool = false;
  local_48.AttrValueNumber = 0.0;
  local_48.AttrType = String;
  pFVar2 = (pFVar6->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  if (((local_78.Data <= &local_48) &&
      (&local_48 < (FAnalyticsEventAttribute *)(local_78.Data + (longlong)local_6c * 0x30))) &&
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
  if (local_70 == local_6c) {
    local_70 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x830,&local_78,&local_6c);
  }
  lVar7 = (longlong)local_70;
  *(undefined8 *)&local_78.Data[lVar7 * 0x30].field_0x0 = 0;
  *(FScriptContainerElement **)&local_78.Data[lVar7 * 0x30].field_0x0 =
       local_48.AttrName.Data.AllocatorInstance.Data;
  *(int *)(local_78.Data + lVar7 * 0x30 + 8) = local_48.AttrName.Data.ArrayNum;
  *(int *)(local_78.Data + lVar7 * 0x30 + 0xc) = local_48.AttrName.Data.ArrayMax;
  *(undefined8 *)(local_78.Data + lVar7 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(local_78.Data + lVar7 * 0x30 + 0x10) =
       local_48.AttrValueString.Data.AllocatorInstance.Data;
  *(int *)(local_78.Data + lVar7 * 0x30 + 0x18) = local_48.AttrValueString.Data.ArrayNum;
  *(int *)(local_78.Data + lVar7 * 0x30 + 0x1c) = local_48.AttrValueString.Data.ArrayMax;
  *(double *)(local_78.Data + lVar7 * 0x30 + 0x20) = local_48.AttrValueNumber;
  local_78.Data[lVar7 * 0x30 + 0x28] = (FScriptContainerElement)local_48.AttrValueBool;
  *(AttrTypeEnum *)(local_78.Data + lVar7 * 0x30 + 0x2c) = local_48.AttrType;
  local_48.AttrValueString.Data.ArrayNum = 0;
  local_48.AttrValueString.Data.ArrayMax = 0;
  local_48.AttrValueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.AttrName.Data.ArrayNum = 0;
  local_48.AttrName.Data.ArrayMax = 0;
  local_48.AttrName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pcVar3 = *(code **)((longlong)*this + 0x80);
  local_70 = local_70 + 1;
  ::FString::FString(&local_68,L"Game Error");
  (*pcVar3)(this,&local_68,&local_78);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  DestructItems<FAnalyticsEventAttribute,int>((FAnalyticsEventAttribute *)local_78.Data,local_70);
  if ((FAnalyticsEventAttribute *)local_78.Data != (FAnalyticsEventAttribute *)0x0) {
    FMemory::Free(local_78.Data);
  }
  return;
}

// RecordEvent @ 1431a08c0

void __thiscall
IAnalyticsProvider::RecordEvent
          (IAnalyticsProvider *this,FString *param_1,
          TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *param_2,
          EAnalyticsRecordEventMode param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001431a08c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this + 0x80))();
  return;
}

// RecordItemPurchase @ 1431a0aa0

/* WARNING: Removing unreachable block (ram,0x0001431a0c9f) */
/* WARNING: Removing unreachable block (ram,0x0001431a0e81) */
/* WARNING: Removing unreachable block (ram,0x0001431a0cad) */
/* WARNING: Removing unreachable block (ram,0x0001431a0e8f) */

void __thiscall
IAnalyticsProvider::RecordItemPurchase
          (IAnalyticsProvider *this,FString *param_1,FString *param_2,int param_3,int param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FString *pFVar5;
  longlong lVar6;
  wchar_t *pwVar7;
  ForAnyElementType local_b8;
  undefined8 local_b0;
  FAnalyticsEventAttribute local_a8;
  FAnalyticsEventAttribute local_78;
  FString local_48;
  FString local_38 [2];
  
  local_b8.Data = (FScriptContainerElement *)0x0;
  local_b0 = 0;
  pFVar5 = ::FString::FString(&local_48,L"Currency");
  if (((pFVar5->Data).ArrayNum < 2) ||
     (iVar4 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar5->Data).AllocatorInstance.Data,L"EventName"), iVar4 == 0)
     ) {
LAB_1431a0b2c:
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
    if ((pFVar5->Data).ArrayNum == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
    iVar4 = FGenericPlatformStricmp::Stricmp(pwVar7,L"DateOffset");
    if (iVar4 == 0) goto LAB_1431a0b2c;
  }
  local_a8.AttrName.Data.AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
  (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.AttrName.Data.ArrayNum = (pFVar5->Data).ArrayNum;
  local_a8.AttrName.Data.ArrayMax = (pFVar5->Data).ArrayMax;
  (pFVar5->Data).ArrayNum = 0;
  (pFVar5->Data).ArrayMax = 0;
  ::FString::FString(&local_a8.AttrValueString,param_2);
  local_a8.AttrValueBool = false;
  local_a8.AttrValueNumber = 0.0;
  local_a8.AttrType = String;
  pFVar1 = (pFVar5->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if (((local_b8.Data <= &local_a8) &&
      (&local_a8 < (FAnalyticsEventAttribute *)(local_b8.Data + (longlong)local_b0._4_4_ * 0x30)))
     && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = (int)local_b0;
  if ((int)local_b0 == local_b0._4_4_) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&local_b8,(int *)((longlong)&local_b0 + 4));
  }
  lVar6 = (longlong)iVar4;
  local_b0 = CONCAT44(local_b0._4_4_,iVar4 + 1);
  *(undefined8 *)&local_b8.Data[lVar6 * 0x30].field_0x0 = 0;
  *(FScriptContainerElement **)&local_b8.Data[lVar6 * 0x30].field_0x0 =
       local_a8.AttrName.Data.AllocatorInstance.Data;
  *(int *)(local_b8.Data + lVar6 * 0x30 + 8) = local_a8.AttrName.Data.ArrayNum;
  *(int *)(local_b8.Data + lVar6 * 0x30 + 0xc) = local_a8.AttrName.Data.ArrayMax;
  *(undefined8 *)(local_b8.Data + lVar6 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(local_b8.Data + lVar6 * 0x30 + 0x10) =
       local_a8.AttrValueString.Data.AllocatorInstance.Data;
  *(int *)(local_b8.Data + lVar6 * 0x30 + 0x18) = local_a8.AttrValueString.Data.ArrayNum;
  *(int *)(local_b8.Data + lVar6 * 0x30 + 0x1c) = local_a8.AttrValueString.Data.ArrayMax;
  *(double *)(local_b8.Data + lVar6 * 0x30 + 0x20) = local_a8.AttrValueNumber;
  local_b8.Data[lVar6 * 0x30 + 0x28] = (FScriptContainerElement)local_a8.AttrValueBool;
  *(AttrTypeEnum *)(local_b8.Data + lVar6 * 0x30 + 0x2c) = local_a8.AttrType;
  local_a8.AttrValueString.Data.ArrayNum = 0;
  local_a8.AttrValueString.Data.ArrayMax = 0;
  local_a8.AttrValueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.AttrName.Data.ArrayNum = 0;
  local_a8.AttrName.Data.ArrayMax = 0;
  local_a8.AttrName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar5 = ::FString::FString(local_38,L"PerItemCost");
  if ((1 < (pFVar5->Data).ArrayNum) &&
     (iVar4 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar5->Data).AllocatorInstance.Data,L"EventName"), iVar4 != 0)
     ) {
    if ((pFVar5->Data).ArrayNum == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
    iVar4 = FGenericPlatformStricmp::Stricmp(pwVar7,L"DateOffset");
    if (iVar4 != 0) goto LAB_1431a0d26;
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
LAB_1431a0d26:
  local_78.AttrName.Data.AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
  (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.AttrName.Data.ArrayNum = (pFVar5->Data).ArrayNum;
  local_78.AttrName.Data.ArrayMax = (pFVar5->Data).ArrayMax;
  (pFVar5->Data).ArrayNum = 0;
  (pFVar5->Data).ArrayMax = 0;
  ::FString::PrintfImpl(&local_78.AttrValueString,L"%d");
  local_78.AttrValueNumber = 0.0;
  local_78.AttrValueBool = false;
  local_78.AttrType = JsonFragment;
  pFVar1 = (pFVar5->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if (((local_b8.Data <= &local_78) &&
      (&local_78 < (FAnalyticsEventAttribute *)(local_b8.Data + (longlong)local_b0._4_4_ * 0x30)))
     && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = (int)local_b0;
  if ((int)local_b0 == local_b0._4_4_) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&local_b8,(int *)((longlong)&local_b0 + 4));
  }
  lVar6 = (longlong)iVar4;
  local_b0 = CONCAT44(local_b0._4_4_,iVar4 + 1);
  *(undefined8 *)&local_b8.Data[lVar6 * 0x30].field_0x0 = 0;
  *(FScriptContainerElement **)&local_b8.Data[lVar6 * 0x30].field_0x0 =
       local_78.AttrName.Data.AllocatorInstance.Data;
  *(int *)(local_b8.Data + lVar6 * 0x30 + 8) = local_78.AttrName.Data.ArrayNum;
  *(int *)(local_b8.Data + lVar6 * 0x30 + 0xc) = local_78.AttrName.Data.ArrayMax;
  *(undefined8 *)(local_b8.Data + lVar6 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(local_b8.Data + lVar6 * 0x30 + 0x10) =
       local_78.AttrValueString.Data.AllocatorInstance.Data;
  *(int *)(local_b8.Data + lVar6 * 0x30 + 0x18) = local_78.AttrValueString.Data.ArrayNum;
  *(int *)(local_b8.Data + lVar6 * 0x30 + 0x1c) = local_78.AttrValueString.Data.ArrayMax;
  *(double *)(local_b8.Data + lVar6 * 0x30 + 0x20) = local_78.AttrValueNumber;
  local_b8.Data[lVar6 * 0x30 + 0x28] = (FScriptContainerElement)local_78.AttrValueBool;
  *(AttrTypeEnum *)(local_b8.Data + lVar6 * 0x30 + 0x2c) = local_78.AttrType;
  local_78.AttrValueString.Data.ArrayNum = 0;
  local_78.AttrValueString.Data.ArrayMax = 0;
  local_78.AttrValueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.AttrName.Data.ArrayNum = 0;
  local_78.AttrName.Data.ArrayMax = 0;
  local_78.AttrName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (**(code **)((longlong)*this + 0x88))(this,param_1,param_4,&local_b8);
  DestructItems<FAnalyticsEventAttribute,int>
            ((FAnalyticsEventAttribute *)local_b8.Data,(int)local_b0);
  if ((FAnalyticsEventAttribute *)local_b8.Data != (FAnalyticsEventAttribute *)0x0) {
    FMemory::Free(local_b8.Data);
  }
  return;
}

// RecordItemPurchase @ 1431a0f00

/* WARNING: Removing unreachable block (ram,0x0001431a1146) */
/* WARNING: Removing unreachable block (ram,0x0001431a1328) */
/* WARNING: Removing unreachable block (ram,0x0001431a1154) */
/* WARNING: Removing unreachable block (ram,0x0001431a1336) */

void __thiscall
IAnalyticsProvider::RecordItemPurchase
          (IAnalyticsProvider *this,FString *param_1,int param_2,
          TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *param_3)

{
  FAnalyticsEventAttribute *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FString *pFVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  ForAnyElementType local_c8;
  int local_c0;
  int local_bc;
  FAnalyticsEventAttribute local_b8;
  FAnalyticsEventAttribute local_88;
  FString local_58;
  FString local_48;
  FString local_38 [2];
  
  iVar5 = param_3->ArrayNum;
  pFVar1 = (FAnalyticsEventAttribute *)(param_3->AllocatorInstance).Data;
  local_c8.Data = (FScriptContainerElement *)0x0;
  local_c0 = iVar5;
  if (iVar5 == 0) {
    local_bc = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,iVar5,0,&local_c8,iVar5,&local_bc);
    ConstructItems<FAnalyticsEventAttribute,FAnalyticsEventAttribute,int>
              (local_c8.Data,pFVar1,iVar5);
  }
  pFVar6 = ::FString::FString(&local_48,L"ItemId");
  if (((pFVar6->Data).ArrayNum < 2) ||
     (iVar5 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar6->Data).AllocatorInstance.Data,L"EventName"), iVar5 == 0)
     ) {
LAB_1431a0fd3:
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
    if (iVar5 == 0) goto LAB_1431a0fd3;
  }
  local_b8.AttrName.Data.AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
  (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.AttrName.Data.ArrayNum = (pFVar6->Data).ArrayNum;
  local_b8.AttrName.Data.ArrayMax = (pFVar6->Data).ArrayMax;
  (pFVar6->Data).ArrayNum = 0;
  (pFVar6->Data).ArrayMax = 0;
  ::FString::FString(&local_b8.AttrValueString,param_1);
  local_b8.AttrValueBool = false;
  local_b8.AttrValueNumber = 0.0;
  local_b8.AttrType = String;
  pFVar2 = (pFVar6->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  if (((local_c8.Data <= &local_b8) &&
      (&local_b8 < (FAnalyticsEventAttribute *)(local_c8.Data + (longlong)local_bc * 0x30))) &&
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
  if (local_c0 == local_bc) {
    local_c0 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x830,&local_c8,&local_bc);
  }
  lVar7 = (longlong)local_c0;
  *(undefined8 *)&local_c8.Data[lVar7 * 0x30].field_0x0 = 0;
  *(FScriptContainerElement **)&local_c8.Data[lVar7 * 0x30].field_0x0 =
       local_b8.AttrName.Data.AllocatorInstance.Data;
  *(int *)(local_c8.Data + lVar7 * 0x30 + 8) = local_b8.AttrName.Data.ArrayNum;
  *(int *)(local_c8.Data + lVar7 * 0x30 + 0xc) = local_b8.AttrName.Data.ArrayMax;
  *(undefined8 *)(local_c8.Data + lVar7 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(local_c8.Data + lVar7 * 0x30 + 0x10) =
       local_b8.AttrValueString.Data.AllocatorInstance.Data;
  *(int *)(local_c8.Data + lVar7 * 0x30 + 0x18) = local_b8.AttrValueString.Data.ArrayNum;
  *(int *)(local_c8.Data + lVar7 * 0x30 + 0x1c) = local_b8.AttrValueString.Data.ArrayMax;
  *(double *)(local_c8.Data + lVar7 * 0x30 + 0x20) = local_b8.AttrValueNumber;
  local_c8.Data[lVar7 * 0x30 + 0x28] = (FScriptContainerElement)local_b8.AttrValueBool;
  *(AttrTypeEnum *)(local_c8.Data + lVar7 * 0x30 + 0x2c) = local_b8.AttrType;
  local_b8.AttrValueString.Data.ArrayNum = 0;
  local_b8.AttrValueString.Data.ArrayMax = 0;
  local_b8.AttrValueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.AttrName.Data.ArrayNum = 0;
  local_b8.AttrName.Data.ArrayMax = 0;
  local_b8.AttrName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c0 = local_c0 + 1;
  pFVar6 = ::FString::FString(local_38,L"ItemQuantity");
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
    if (iVar5 != 0) goto LAB_1431a11cd;
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
LAB_1431a11cd:
  local_88.AttrName.Data.AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
  (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.AttrName.Data.ArrayNum = (pFVar6->Data).ArrayNum;
  local_88.AttrName.Data.ArrayMax = (pFVar6->Data).ArrayMax;
  (pFVar6->Data).ArrayNum = 0;
  (pFVar6->Data).ArrayMax = 0;
  ::FString::PrintfImpl(&local_88.AttrValueString,L"%d");
  local_88.AttrValueNumber = 0.0;
  local_88.AttrValueBool = false;
  local_88.AttrType = JsonFragment;
  pFVar2 = (pFVar6->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  if (((local_c8.Data <= &local_88) &&
      (&local_88 < (FAnalyticsEventAttribute *)(local_c8.Data + (longlong)local_bc * 0x30))) &&
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
  if (local_c0 == local_bc) {
    local_c0 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x830,&local_c8,&local_bc);
  }
  lVar7 = (longlong)local_c0;
  *(undefined8 *)&local_c8.Data[lVar7 * 0x30].field_0x0 = 0;
  *(FScriptContainerElement **)&local_c8.Data[lVar7 * 0x30].field_0x0 =
       local_88.AttrName.Data.AllocatorInstance.Data;
  *(int *)(local_c8.Data + lVar7 * 0x30 + 8) = local_88.AttrName.Data.ArrayNum;
  *(int *)(local_c8.Data + lVar7 * 0x30 + 0xc) = local_88.AttrName.Data.ArrayMax;
  *(undefined8 *)(local_c8.Data + lVar7 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(local_c8.Data + lVar7 * 0x30 + 0x10) =
       local_88.AttrValueString.Data.AllocatorInstance.Data;
  *(int *)(local_c8.Data + lVar7 * 0x30 + 0x18) = local_88.AttrValueString.Data.ArrayNum;
  *(int *)(local_c8.Data + lVar7 * 0x30 + 0x1c) = local_88.AttrValueString.Data.ArrayMax;
  *(double *)(local_c8.Data + lVar7 * 0x30 + 0x20) = local_88.AttrValueNumber;
  local_c8.Data[lVar7 * 0x30 + 0x28] = (FScriptContainerElement)local_88.AttrValueBool;
  *(AttrTypeEnum *)(local_c8.Data + lVar7 * 0x30 + 0x2c) = local_88.AttrType;
  local_88.AttrValueString.Data.ArrayNum = 0;
  local_88.AttrValueString.Data.ArrayMax = 0;
  local_88.AttrValueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.AttrName.Data.ArrayNum = 0;
  local_88.AttrName.Data.ArrayMax = 0;
  local_88.AttrName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pcVar3 = *(code **)((longlong)*this + 0x80);
  local_c0 = local_c0 + 1;
  ::FString::FString(&local_58,L"Item Purchase");
  (*pcVar3)(this,&local_58,&local_c8);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  DestructItems<FAnalyticsEventAttribute,int>((FAnalyticsEventAttribute *)local_c8.Data,local_c0);
  if ((FAnalyticsEventAttribute *)local_c8.Data != (FAnalyticsEventAttribute *)0x0) {
    FMemory::Free(local_c8.Data);
  }
  return;
}

// RecordProgress @ 1431a13c0

void __thiscall
IAnalyticsProvider::RecordProgress(IAnalyticsProvider *this,FString *param_1,FString *param_2)

{
  int iVar1;
  ForAnyElementType local_28;
  undefined8 local_20;
  FAnalyticsEventAttribute *local_18;
  undefined8 local_10;
  
  local_28.Data = (FScriptContainerElement *)0x0;
  local_20 = 0;
  iVar1 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x810,&local_28,(int *)((longlong)&local_20 + 4));
  local_20 = CONCAT44(local_20._4_4_,iVar1 + 1);
  ::FString::FString((FString *)(local_28.Data + (longlong)iVar1 * 0x10),param_2);
  local_18 = (FAnalyticsEventAttribute *)0x0;
  local_10 = 0;
  (**(code **)((longlong)*this + 0xe0))(this,param_1,&local_28,&local_18);
  DestructItems<FAnalyticsEventAttribute,int>(local_18,(int)local_10);
  if (local_18 != (FAnalyticsEventAttribute *)0x0) {
    FMemory::Free(local_18);
  }
  DestructItems<FString,int>((FString *)local_28.Data,(int)local_20);
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
  return;
}

// RecordProgress @ 1431a1490

void __thiscall
IAnalyticsProvider::RecordProgress
          (IAnalyticsProvider *this,FString *param_1,FString *param_2,
          TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *param_3)

{
  int iVar1;
  ForAnyElementType local_18;
  undefined8 local_10;
  
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10 = 0;
  iVar1 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x810,&local_18,(int *)((longlong)&local_10 + 4));
  local_10 = CONCAT44(local_10._4_4_,iVar1 + 1);
  ::FString::FString((FString *)(local_18.Data + (longlong)iVar1 * 0x10),param_2);
  (**(code **)((longlong)*this + 0xe0))(this,param_1,&local_18,param_3);
  DestructItems<FString,int>((FString *)local_18.Data,(int)local_10);
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return;
}

// RecordProgress @ 1431a1540

/* WARNING: Removing unreachable block (ram,0x0001431a17ba) */
/* WARNING: Removing unreachable block (ram,0x0001431a1a68) */
/* WARNING: Removing unreachable block (ram,0x0001431a17c9) */
/* WARNING: Removing unreachable block (ram,0x0001431a1a76) */

void __thiscall
IAnalyticsProvider::RecordProgress
          (IAnalyticsProvider *this,FString *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *param_3)

{
  FAnalyticsEventAttribute *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  FString *pFVar8;
  longlong lVar9;
  wchar_t *pwVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  wchar_t *pwVar14;
  ForAnyElementType local_d8;
  int local_d0;
  int local_cc;
  FAnalyticsEventAttribute local_c8;
  FAnalyticsEventAttribute local_98;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38 [2];
  
  iVar5 = param_3->ArrayNum;
  uVar12 = 0;
  pFVar1 = (FAnalyticsEventAttribute *)(param_3->AllocatorInstance).Data;
  local_d8.Data = (FScriptContainerElement *)0x0;
  local_d0 = iVar5;
  if (iVar5 == 0) {
    local_cc = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,iVar5,0,&local_d8,iVar5,&local_cc);
    ConstructItems<FAnalyticsEventAttribute,FAnalyticsEventAttribute,int>
              (local_d8.Data,pFVar1,iVar5);
  }
  if ((param_1->Data).ArrayNum == 0) {
    pwVar14 = L"";
  }
  else {
    pwVar14 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  pFVar8 = ::FString::FString(&local_48,L"ProgressType");
  if (((pFVar8->Data).ArrayNum < 2) ||
     (iVar5 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar8->Data).AllocatorInstance.Data,L"EventName"), iVar5 == 0)
     ) {
LAB_1431a162b:
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
    if ((pFVar8->Data).ArrayNum == 0) {
      pwVar10 = L"";
    }
    else {
      pwVar10 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
    }
    iVar5 = FGenericPlatformStricmp::Stricmp(pwVar10,L"DateOffset");
    if (iVar5 == 0) goto LAB_1431a162b;
  }
  local_c8.AttrName.Data.AllocatorInstance.Data = (pFVar8->Data).AllocatorInstance.Data;
  (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.AttrName.Data.ArrayNum = (pFVar8->Data).ArrayNum;
  local_c8.AttrName.Data.ArrayMax = (pFVar8->Data).ArrayMax;
  (pFVar8->Data).ArrayNum = 0;
  (pFVar8->Data).ArrayMax = 0;
  ::FString::FString(&local_c8.AttrValueString,pwVar14);
  local_c8.AttrValueBool = false;
  local_c8.AttrValueNumber = 0.0;
  local_c8.AttrType = String;
  pFVar2 = (pFVar8->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  if (((local_d8.Data <= &local_c8) &&
      (&local_c8 < (FAnalyticsEventAttribute *)(local_d8.Data + (longlong)local_cc * 0x30))) &&
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
  if (local_d0 == local_cc) {
    local_d0 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x830,&local_d8,&local_cc);
  }
  iVar5 = local_d0 + 1;
  lVar9 = (longlong)local_d0;
  *(undefined8 *)&local_d8.Data[lVar9 * 0x30].field_0x0 = 0;
  *(FScriptContainerElement **)&local_d8.Data[lVar9 * 0x30].field_0x0 =
       local_c8.AttrName.Data.AllocatorInstance.Data;
  *(int *)(local_d8.Data + lVar9 * 0x30 + 8) = local_c8.AttrName.Data.ArrayNum;
  *(int *)(local_d8.Data + lVar9 * 0x30 + 0xc) = local_c8.AttrName.Data.ArrayMax;
  *(undefined8 *)(local_d8.Data + lVar9 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(local_d8.Data + lVar9 * 0x30 + 0x10) =
       local_c8.AttrValueString.Data.AllocatorInstance.Data;
  *(int *)(local_d8.Data + lVar9 * 0x30 + 0x18) = local_c8.AttrValueString.Data.ArrayNum;
  *(int *)(local_d8.Data + lVar9 * 0x30 + 0x1c) = local_c8.AttrValueString.Data.ArrayMax;
  *(double *)(local_d8.Data + lVar9 * 0x30 + 0x20) = local_c8.AttrValueNumber;
  local_d8.Data[lVar9 * 0x30 + 0x28] = (FScriptContainerElement)local_c8.AttrValueBool;
  *(AttrTypeEnum *)(local_d8.Data + lVar9 * 0x30 + 0x2c) = local_c8.AttrType;
  local_c8.AttrValueString.Data.ArrayNum = 0;
  local_c8.AttrValueString.Data.ArrayMax = 0;
  local_c8.AttrValueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.AttrName.Data.ArrayNum = 0;
  local_c8.AttrName.Data.ArrayMax = 0;
  local_c8.AttrName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar11 = param_2->ArrayNum;
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  uVar13 = uVar12;
  local_d0 = iVar5;
  if (iVar11 < 1) {
LAB_1431a1892:
    pwVar14 = L"";
  }
  else {
    do {
      uVar7 = (uint)uVar12;
      uVar6 = 0;
      if ((int)uVar7 < iVar11) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (param_2->AllocatorInstance).Data;
      iVar11 = *(int *)(pFVar2 + uVar13 + 8);
      iVar5 = iVar11 + -1;
      if (iVar11 == 0) {
        iVar5 = 0;
      }
      ::FString::AppendChars(&local_68,*(wchar_t **)(pFVar2 + uVar13),iVar5);
      uVar7 = uVar7 + 1;
      uVar12 = (ulonglong)uVar7;
      if ((int)uVar7 < param_2->ArrayNum) {
        ::FString::AppendChars(&local_68,L".",1);
      }
      iVar11 = param_2->ArrayNum;
      uVar13 = uVar13 + 0x10;
    } while ((int)uVar7 < iVar11);
    pwVar14 = (wchar_t *)local_68.Data.AllocatorInstance.Data;
    if (local_68.Data.ArrayNum == 0) goto LAB_1431a1892;
  }
  pFVar8 = ::FString::FString(local_38,L"ProgressHierarchy");
  if ((1 < (pFVar8->Data).ArrayNum) &&
     (iVar5 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar8->Data).AllocatorInstance.Data,L"EventName"), iVar5 != 0)
     ) {
    if ((pFVar8->Data).ArrayNum == 0) {
      pwVar10 = L"";
    }
    else {
      pwVar10 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
    }
    iVar5 = FGenericPlatformStricmp::Stricmp(pwVar10,L"DateOffset");
    if (iVar5 != 0) goto LAB_1431a190d;
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
LAB_1431a190d:
  local_98.AttrName.Data.AllocatorInstance.Data = (pFVar8->Data).AllocatorInstance.Data;
  (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.AttrName.Data.ArrayNum = (pFVar8->Data).ArrayNum;
  local_98.AttrName.Data.ArrayMax = (pFVar8->Data).ArrayMax;
  (pFVar8->Data).ArrayNum = 0;
  (pFVar8->Data).ArrayMax = 0;
  ::FString::FString(&local_98.AttrValueString,pwVar14);
  local_98.AttrValueNumber = 0.0;
  local_98.AttrValueBool = false;
  local_98.AttrType = String;
  pFVar2 = (pFVar8->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  if (((local_d8.Data <= &local_98) &&
      (&local_98 < (FAnalyticsEventAttribute *)(local_d8.Data + (longlong)local_cc * 0x30))) &&
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
  if (local_d0 == local_cc) {
    local_d0 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x830,&local_d8,&local_cc);
  }
  lVar9 = (longlong)local_d0;
  *(undefined8 *)&local_d8.Data[lVar9 * 0x30].field_0x0 = 0;
  *(FScriptContainerElement **)&local_d8.Data[lVar9 * 0x30].field_0x0 =
       local_98.AttrName.Data.AllocatorInstance.Data;
  *(int *)(local_d8.Data + lVar9 * 0x30 + 8) = local_98.AttrName.Data.ArrayNum;
  *(int *)(local_d8.Data + lVar9 * 0x30 + 0xc) = local_98.AttrName.Data.ArrayMax;
  *(undefined8 *)(local_d8.Data + lVar9 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(local_d8.Data + lVar9 * 0x30 + 0x10) =
       local_98.AttrValueString.Data.AllocatorInstance.Data;
  *(int *)(local_d8.Data + lVar9 * 0x30 + 0x18) = local_98.AttrValueString.Data.ArrayNum;
  *(int *)(local_d8.Data + lVar9 * 0x30 + 0x1c) = local_98.AttrValueString.Data.ArrayMax;
  *(double *)(local_d8.Data + lVar9 * 0x30 + 0x20) = local_98.AttrValueNumber;
  local_d8.Data[lVar9 * 0x30 + 0x28] = (FScriptContainerElement)local_98.AttrValueBool;
  *(AttrTypeEnum *)(local_d8.Data + lVar9 * 0x30 + 0x2c) = local_98.AttrType;
  local_98.AttrValueString.Data.ArrayNum = 0;
  local_98.AttrValueString.Data.ArrayMax = 0;
  local_98.AttrValueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.AttrName.Data.ArrayNum = 0;
  local_98.AttrName.Data.ArrayMax = 0;
  local_98.AttrName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pcVar3 = *(code **)((longlong)*this + 0x80);
  local_d0 = local_d0 + 1;
  ::FString::FString(&local_58,L"Progression");
  (*pcVar3)(this,&local_58,&local_d8);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  DestructItems<FAnalyticsEventAttribute,int>((FAnalyticsEventAttribute *)local_d8.Data,local_d0);
  if ((FAnalyticsEventAttribute *)local_d8.Data != (FAnalyticsEventAttribute *)0x0) {
    FMemory::Free(local_d8.Data);
  }
  return;
}

// SetAge @ 1431a3160

void __thiscall IAnalyticsProvider::SetAge(IAnalyticsProvider *this,int param_1)

{
  code *pcVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  int iVar4;
  FString *pFVar5;
  wchar_t *pwVar6;
  ForAnyElementType local_68;
  int local_60;
  int local_5c;
  FString local_58;
  FString local_48;
  FAnalyticsEventAttribute local_38;
  
  pcVar1 = *(code **)((longlong)*this + 0x80);
  pFVar5 = ::FString::FString(&local_48,L"Age");
  if (1 < (pFVar5->Data).ArrayNum) {
    iVar4 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(pFVar5->Data).AllocatorInstance.Data,L"EventName");
    if (iVar4 != 0) {
      if ((pFVar5->Data).ArrayNum == 0) {
        pwVar6 = L"";
      }
      else {
        pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
      }
      iVar4 = FGenericPlatformStricmp::Stricmp(pwVar6,L"DateOffset");
      if (iVar4 != 0) goto LAB_1431a3201;
    }
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValidAttributeName(InName)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                     ,0x78,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_1431a3201:
  local_38.AttrName.Data.AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
  (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.AttrName.Data.ArrayNum = (pFVar5->Data).ArrayNum;
  local_38.AttrName.Data.ArrayMax = (pFVar5->Data).ArrayMax;
  (pFVar5->Data).ArrayNum = 0;
  (pFVar5->Data).ArrayMax = 0;
  ::FString::PrintfImpl(&local_38.AttrValueString,L"%d");
  local_38.AttrValueBool = false;
  local_38.AttrValueNumber = 0.0;
  local_38.AttrType = JsonFragment;
  pFVar2 = (pFVar5->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  local_68.Data = (FScriptContainerElement *)0x0;
  local_60 = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x30,8,1,0,&local_68,1,&local_5c);
  ConstructItems<FAnalyticsEventAttribute,FAnalyticsEventAttribute,int>(local_68.Data,&local_38,1);
  ::FString::FString(&local_58,L"Age");
  (*pcVar1)(this,&local_58,&local_68);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  DestructItems<FAnalyticsEventAttribute,int>((FAnalyticsEventAttribute *)local_68.Data,local_60);
  if ((FAnalyticsEventAttribute *)local_68.Data != (FAnalyticsEventAttribute *)0x0) {
    FMemory::Free(local_68.Data);
  }
  if (local_38.AttrValueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AttrValueString.Data.AllocatorInstance.Data);
  }
  if (local_38.AttrName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AttrName.Data.AllocatorInstance.Data);
  }
  return;
}

// SetBuildInfo @ 1431a3630

void __thiscall IAnalyticsProvider::SetBuildInfo(IAnalyticsProvider *this,FString *param_1)

{
  code *pcVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  int iVar4;
  FString *pFVar5;
  wchar_t *pwVar6;
  ForAnyElementType local_68;
  int local_60;
  int local_5c;
  FString local_58;
  FString local_48;
  FAnalyticsEventAttribute local_38;
  
  pcVar1 = *(code **)((longlong)*this + 0x80);
  pFVar5 = ::FString::FString(&local_48,L"BuildInfo");
  if (1 < (pFVar5->Data).ArrayNum) {
    iVar4 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(pFVar5->Data).AllocatorInstance.Data,L"EventName");
    if (iVar4 != 0) {
      if ((pFVar5->Data).ArrayNum == 0) {
        pwVar6 = L"";
      }
      else {
        pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
      }
      iVar4 = FGenericPlatformStricmp::Stricmp(pwVar6,L"DateOffset");
      if (iVar4 != 0) goto LAB_1431a36d2;
    }
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValidAttributeName(InName)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                     ,0x78,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_1431a36d2:
  local_38.AttrName.Data.AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
  (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.AttrName.Data.ArrayNum = (pFVar5->Data).ArrayNum;
  local_38.AttrName.Data.ArrayMax = (pFVar5->Data).ArrayMax;
  (pFVar5->Data).ArrayNum = 0;
  (pFVar5->Data).ArrayMax = 0;
  ::FString::FString(&local_38.AttrValueString,param_1);
  local_38.AttrValueBool = false;
  local_38.AttrValueNumber = 0.0;
  local_38.AttrType = String;
  pFVar2 = (pFVar5->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  local_68.Data = (FScriptContainerElement *)0x0;
  local_60 = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x30,8,1,0,&local_68,1,&local_5c);
  ConstructItems<FAnalyticsEventAttribute,FAnalyticsEventAttribute,int>(local_68.Data,&local_38,1);
  ::FString::FString(&local_58,L"BuildInfo");
  (*pcVar1)(this,&local_58,&local_68);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  DestructItems<FAnalyticsEventAttribute,int>((FAnalyticsEventAttribute *)local_68.Data,local_60);
  if ((FAnalyticsEventAttribute *)local_68.Data != (FAnalyticsEventAttribute *)0x0) {
    FMemory::Free(local_68.Data);
  }
  if (local_38.AttrValueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AttrValueString.Data.AllocatorInstance.Data);
  }
  if (local_38.AttrName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AttrName.Data.AllocatorInstance.Data);
  }
  return;
}

// SetGender @ 1431a3cc0

void __thiscall IAnalyticsProvider::SetGender(IAnalyticsProvider *this,FString *param_1)

{
  code *pcVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  int iVar4;
  FString *pFVar5;
  wchar_t *pwVar6;
  ForAnyElementType local_68;
  int local_60;
  int local_5c;
  FString local_58;
  FString local_48;
  FAnalyticsEventAttribute local_38;
  
  pcVar1 = *(code **)((longlong)*this + 0x80);
  pFVar5 = ::FString::FString(&local_48,L"Gender");
  if (1 < (pFVar5->Data).ArrayNum) {
    iVar4 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(pFVar5->Data).AllocatorInstance.Data,L"EventName");
    if (iVar4 != 0) {
      if ((pFVar5->Data).ArrayNum == 0) {
        pwVar6 = L"";
      }
      else {
        pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
      }
      iVar4 = FGenericPlatformStricmp::Stricmp(pwVar6,L"DateOffset");
      if (iVar4 != 0) goto LAB_1431a3d62;
    }
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValidAttributeName(InName)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                     ,0x78,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_1431a3d62:
  local_38.AttrName.Data.AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
  (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.AttrName.Data.ArrayNum = (pFVar5->Data).ArrayNum;
  local_38.AttrName.Data.ArrayMax = (pFVar5->Data).ArrayMax;
  (pFVar5->Data).ArrayNum = 0;
  (pFVar5->Data).ArrayMax = 0;
  ::FString::FString(&local_38.AttrValueString,param_1);
  local_38.AttrValueBool = false;
  local_38.AttrValueNumber = 0.0;
  local_38.AttrType = String;
  pFVar2 = (pFVar5->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  local_68.Data = (FScriptContainerElement *)0x0;
  local_60 = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x30,8,1,0,&local_68,1,&local_5c);
  ConstructItems<FAnalyticsEventAttribute,FAnalyticsEventAttribute,int>(local_68.Data,&local_38,1);
  ::FString::FString(&local_58,L"Gender");
  (*pcVar1)(this,&local_58,&local_68);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  DestructItems<FAnalyticsEventAttribute,int>((FAnalyticsEventAttribute *)local_68.Data,local_60);
  if ((FAnalyticsEventAttribute *)local_68.Data != (FAnalyticsEventAttribute *)0x0) {
    FMemory::Free(local_68.Data);
  }
  if (local_38.AttrValueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AttrValueString.Data.AllocatorInstance.Data);
  }
  if (local_38.AttrName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AttrName.Data.AllocatorInstance.Data);
  }
  return;
}

// SetLocation @ 1431a4000

void __thiscall IAnalyticsProvider::SetLocation(IAnalyticsProvider *this,FString *param_1)

{
  code *pcVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  int iVar4;
  FString *pFVar5;
  wchar_t *pwVar6;
  ForAnyElementType local_68;
  int local_60;
  int local_5c;
  FString local_58;
  FString local_48;
  FAnalyticsEventAttribute local_38;
  
  pcVar1 = *(code **)((longlong)*this + 0x80);
  pFVar5 = ::FString::FString(&local_48,L"Location");
  if (1 < (pFVar5->Data).ArrayNum) {
    iVar4 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(pFVar5->Data).AllocatorInstance.Data,L"EventName");
    if (iVar4 != 0) {
      if ((pFVar5->Data).ArrayNum == 0) {
        pwVar6 = L"";
      }
      else {
        pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
      }
      iVar4 = FGenericPlatformStricmp::Stricmp(pwVar6,L"DateOffset");
      if (iVar4 != 0) goto LAB_1431a40a2;
    }
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValidAttributeName(InName)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                     ,0x78,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_1431a40a2:
  local_38.AttrName.Data.AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
  (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.AttrName.Data.ArrayNum = (pFVar5->Data).ArrayNum;
  local_38.AttrName.Data.ArrayMax = (pFVar5->Data).ArrayMax;
  (pFVar5->Data).ArrayNum = 0;
  (pFVar5->Data).ArrayMax = 0;
  ::FString::FString(&local_38.AttrValueString,param_1);
  local_38.AttrValueBool = false;
  local_38.AttrValueNumber = 0.0;
  local_38.AttrType = String;
  pFVar2 = (pFVar5->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  local_68.Data = (FScriptContainerElement *)0x0;
  local_60 = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x30,8,1,0,&local_68,1,&local_5c);
  ConstructItems<FAnalyticsEventAttribute,FAnalyticsEventAttribute,int>(local_68.Data,&local_38,1);
  ::FString::FString(&local_58,L"Location");
  (*pcVar1)(this,&local_58,&local_68);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  DestructItems<FAnalyticsEventAttribute,int>((FAnalyticsEventAttribute *)local_68.Data,local_60);
  if ((FAnalyticsEventAttribute *)local_68.Data != (FAnalyticsEventAttribute *)0x0) {
    FMemory::Free(local_68.Data);
  }
  if (local_38.AttrValueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AttrValueString.Data.AllocatorInstance.Data);
  }
  if (local_38.AttrName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AttrName.Data.AllocatorInstance.Data);
  }
  return;
}

