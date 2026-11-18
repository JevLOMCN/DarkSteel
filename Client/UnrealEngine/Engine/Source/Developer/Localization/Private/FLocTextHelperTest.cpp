// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Localization
// Functions: 10

// GetTestFlags @ 146b33b50

EAutomationTestFlags __thiscall FLocTextHelperTest::GetTestFlags(FLocTextHelperTest *this)

{
  return EngineFilter|ClientContext|EditorContext;
}

// IsStressTest @ 146b33b60

bool __thiscall FLocTextHelperTest::IsStressTest(FLocTextHelperTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 146b33b70

uint __thiscall FLocTextHelperTest::GetRequiredDeviceNum(FLocTextHelperTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 146b33b80

FString * __thiscall
FLocTextHelperTest::GetTestSourceFileName(FLocTextHelperTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\Localization\\Private\\LocTextHelperTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 146b33bb0

int __thiscall FLocTextHelperTest::GetTestSourceFileLine(FLocTextHelperTest *this)

{
  return 0xc;
}

// GetTests @ 146b33be0

/* WARNING: Removing unreachable block (ram,0x000146b33ccd) */
/* WARNING: Removing unreachable block (ram,0x000146b33d98) */

void __thiscall
FLocTextHelperTest::GetTests
          (FLocTextHelperTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.Core.Misc.LocText Helper");
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

// RunTest @ 146b33dc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000146b33fae) */
/* WARNING: Removing unreachable block (ram,0x000146b34095) */
/* WARNING: Enum "EFormatVersion": Some values do not have unique names */

bool __thiscall FLocTextHelperTest::RunTest(FLocTextHelperTest *this,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  void *pvVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  FGuid *this_00;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar11;
  FString *pFVar12;
  FString *pFVar13;
  FString *pFVar14;
  FString *pFVar15;
  ForAnyElementType FVar16;
  IFileManager *pIVar17;
  FScriptContainerElement *pFVar18;
  ForAnyElementType FVar19;
  FScriptContainerElement *pFVar20;
  FScriptContainerElement *pFVar21;
  ForAnyElementType FVar22;
  TReferenceControllerBase<1> *pTVar23;
  FInternationalizationArchive *pFVar24;
  FLocTextHelperTestSourceEntry *pFVar25;
  FScriptContainerElement *this_01;
  int iVar26;
  longlong lVar27;
  FLocTextHelperTest *pFVar28;
  longlong lVar29;
  FInternationalizationArchive *pFVar30;
  FInternationalizationArchive *this_02;
  longlong lVar31;
  undefined1 auStackY_768 [32];
  ForAnyElementType local_718;
  undefined8 local_710;
  ForAnyElementType local_708;
  undefined8 local_700;
  ForAnyElementType local_6f8;
  undefined8 local_6f0;
  ForAnyElementType local_6e8;
  undefined8 local_6e0;
  ForAnyElementType local_6d8;
  undefined8 local_6d0;
  longlong local_6c8;
  int local_6c0 [2];
  FString local_6b8;
  FString local_6a8;
  ForAnyElementType local_698;
  undefined8 local_690;
  ForAnyElementType local_688;
  undefined8 local_680;
  ForAnyElementType local_678;
  undefined8 local_670;
  ForAnyElementType local_668;
  undefined8 local_660;
  ForAnyElementType local_658;
  undefined8 local_650;
  FScriptContainerElement *local_648;
  FString local_640;
  FString local_630;
  FString local_620;
  FString local_610;
  FString local_600;
  undefined4 local_5f0 [2];
  FLocTextHelperTest *local_5e8;
  FString local_5e0;
  uint local_5d0;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_5c8;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_5b8;
  FString local_5a8;
  FString local_598;
  FString local_588;
  FString local_578;
  FLocTextHelperTest *local_568;
  FLocTextHelper *local_560;
  FString local_558;
  FManifestContext local_548;
  FLocTextHelperTestTranslationEntry *local_4e8;
  FLocTextHelperTestTranslationEntry *local_4e0;
  FLocTextHelperTestTranslationEntry *local_4d8;
  int *local_4d0;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_4c8;
  FLocKey local_4b8;
  FLocTextHelperTest *local_4a0;
  FLocTextHelper *local_498;
  undefined4 *local_490;
  FLocKey local_488;
  FLocKey local_470;
  FLocKey local_458;
  FLocKey local_440;
  FLocKey local_428;
  FLocKey local_410;
  FLocKey local_3f8;
  FLocKey local_3e0;
  FLocItem local_3c8;
  FLocItem local_3a8;
  FLocItem local_388;
  FLocItem local_368;
  FLocItem local_348;
  FLocItem local_328;
  FLocItem local_308;
  TArray<FString,TSizedDefaultAllocator<32>_> local_2e8;
  TSharedPtr<FManifestEntry,1> local_2d8;
  FString local_2c8;
  FString local_2b8;
  code *local_2a8;
  int **local_2a0;
  FString local_298;
  FString local_288;
  FString local_278;
  FString local_268;
  FString local_258;
  FString local_248;
  TSharedPtr<FLocMetadataObject,1> local_238;
  TSharedPtr<FLocMetadataObject,1> local_228;
  TSharedPtr<FLocMetadataObject,1> local_218;
  FString local_208;
  TSharedPtr<ILocFileNotifies,1> local_1f8;
  FGuid local_1e8;
  FString local_1d8;
  FString local_1c8;
  FString local_1b8;
  FString local_1a8;
  FLocTextHelper local_198;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_768;
  local_5f0[0] = 100;
  local_5e8 = this;
  this_00 = FGuid::NewGuid(&local_1e8);
  local_578.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_578.Data.ArrayNum = 0;
  local_578.Data.ArrayMax = 0;
  FGuid::AppendString(this_00,&local_578,Digits);
  pTVar11 = &FPaths::GameAgnosticSavedDir(&local_208)->Data;
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_4c8,pTVar11,0x14 - (uint)(pTVar11->ArrayNum != 0));
  ::FString::PathAppend((FString *)&local_4c8,L"LocTextHelperTest_",0x12);
  ::FString::ConcatFF(&local_558,(FString *)&local_4c8,&local_578);
  if (local_4c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4c8.AllocatorInstance.Data);
  }
  if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_208.Data.AllocatorInstance.Data);
  }
  if (local_578.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_578.Data.AllocatorInstance.Data);
  }
  local_718.Data = (FScriptContainerElement *)0x0;
  local_710 = 0;
  ::FString::FString(&local_6b8,L"fr");
  if (((local_718.Data <= (FScriptContainerElement *)&local_6b8) &&
      ((FScriptContainerElement *)&local_6b8 < local_718.Data + (longlong)local_710._4_4_ * 0x10))
     && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  iVar7 = (int)local_710;
  if ((int)local_710 == local_710._4_4_) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&local_718,(int *)((longlong)&local_710 + 4));
  }
  pFVar18 = local_718.Data + (longlong)iVar7 * 0x10;
  *(undefined8 *)pFVar18 = 0;
  *(FScriptContainerElement **)pFVar18 = local_6b8.Data.AllocatorInstance.Data;
  *(int *)(pFVar18 + 8) = local_6b8.Data.ArrayNum;
  *(int *)(pFVar18 + 0xc) = local_6b8.Data.ArrayMax;
  local_6b8.Data.ArrayNum = 0;
  local_6b8.Data.ArrayMax = 0;
  local_6b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_710._0_4_ = iVar7 + 1;
  ::FString::FString(&local_6a8,L"de");
  if (((local_718.Data <= (FScriptContainerElement *)&local_6a8) &&
      ((FScriptContainerElement *)&local_6a8 < local_718.Data + (longlong)local_710._4_4_ * 0x10))
     && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  iVar7 = (int)local_710;
  if ((int)local_710 == local_710._4_4_) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&local_718,(int *)((longlong)&local_710 + 4));
  }
  local_710 = CONCAT44(local_710._4_4_,iVar7 + 1);
  pFVar18 = local_718.Data + (longlong)iVar7 * 0x10;
  *(undefined8 *)pFVar18 = 0;
  *(FScriptContainerElement **)pFVar18 = local_6a8.Data.AllocatorInstance.Data;
  *(int *)(pFVar18 + 8) = local_6a8.Data.ArrayNum;
  *(int *)(pFVar18 + 0xc) = local_6a8.Data.ArrayMax;
  local_6a8.Data.ArrayNum = 0;
  local_6a8.Data.ArrayMax = 0;
  local_6a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1f8.Object = (ILocFileNotifies *)0x0;
  local_1f8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  TArray<FString,TSizedDefaultAllocator<32>_>::CopyToEmpty<FString,int>
            (&local_2e8,(FString *)local_718.Data,iVar7 + 1,0);
  pFVar12 = ::FString::FString(&local_1d8,L"en");
  pFVar13 = ::FString::FString(&local_1c8,L"Test.archive");
  pFVar14 = ::FString::FString(&local_1b8,L"Test.manifest");
  pFVar15 = ::FString::FString(&local_1a8,&local_558);
  FLocTextHelper::FLocTextHelper
            (&local_198,pFVar15,pFVar14,pFVar13,pFVar12,&local_2e8,&local_1f8,None);
  FLocTextHelper::LoadAll(&local_198,Create,(FText *)0x0);
  local_6d8.Data = (FScriptContainerElement *)0x0;
  local_6d0 = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x30,8,100,&local_6d8,0,(int *)((longlong)&local_6d0 + 4));
  local_6e8.Data = (FScriptContainerElement *)0x0;
  local_6e0 = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x40,8,100,&local_6e8,0,(int *)((longlong)&local_6e0 + 4));
  local_6f8.Data = (FScriptContainerElement *)0x0;
  local_6f0 = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x40,8,100,&local_6f8,0,(int *)((longlong)&local_6f0 + 4));
  local_708.Data = (FScriptContainerElement *)0x0;
  local_700 = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x40,8,100,&local_708,0,(int *)((longlong)&local_700 + 4));
  local_6c8 = 100;
  do {
    uVar8 = (uint)local_6d0;
    if ((uint)local_6d0 == local_6d0._4_4_) {
      uVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x830,&local_6d8,(int *)((longlong)&local_6d0 + 4));
    }
    local_6d0 = CONCAT44(local_6d0._4_4_,uVar8 + 1);
    DefaultConstructItems<FLocTextHelperTestSourceEntry,int>
              (local_6d8.Data + (longlong)(int)uVar8 * 0x30,1);
    uVar9 = 0;
    if ((int)uVar8 < (int)(uint)local_6d0) {
      uVar9 = ~uVar8 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    this_01 = local_6d8.Data + (longlong)(int)uVar8 * 0x30;
    ::FString::operator=((FString *)this_01,L"Test");
    ::FString::PrintfImpl(&local_640,L"Test_%d");
    pFVar18 = this_01 + 0x10;
    if (pFVar18 != (FScriptContainerElement *)&local_640) {
      if (*(void **)pFVar18 != (void *)0x0) {
        FMemory::Free(*(void **)pFVar18);
      }
      *(FScriptContainerElement **)pFVar18 = local_640.Data.AllocatorInstance.Data;
      *(int *)(this_01 + 0x18) = local_640.Data.ArrayNum;
      *(int *)(this_01 + 0x1c) = local_640.Data.ArrayMax;
      local_640.Data.ArrayNum = 0;
      local_640.Data.ArrayMax = 0;
      local_640.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_640.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_640.Data.AllocatorInstance.Data);
    }
    ::FString::PrintfImpl(&local_630,L"Source Text %d");
    pFVar1 = this_01 + 0x20;
    if (pFVar1 != (FScriptContainerElement *)&local_630) {
      if (*(void **)pFVar1 != (void *)0x0) {
        FMemory::Free(*(void **)pFVar1);
      }
      *(FScriptContainerElement **)pFVar1 = local_630.Data.AllocatorInstance.Data;
      *(int *)(this_01 + 0x28) = local_630.Data.ArrayNum;
      *(int *)(this_01 + 0x2c) = local_630.Data.ArrayMax;
      local_630.Data.ArrayNum = 0;
      local_630.Data.ArrayMax = 0;
      local_630.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_630.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_630.Data.AllocatorInstance.Data);
    }
    uVar8 = (uint)local_6e0;
    if ((uint)local_6e0 == local_6e0._4_4_) {
      uVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x840,&local_6e8,(int *)((longlong)&local_6e0 + 4));
    }
    local_6e0 = CONCAT44(local_6e0._4_4_,uVar8 + 1);
    DefaultConstructItems<FLocTextHelperTestTranslationEntry,int>
              (local_6e8.Data + (longlong)(int)uVar8 * 0x40,1);
    uVar9 = 0;
    if ((int)uVar8 < (int)(uint)local_6e0) {
      uVar9 = ~uVar8 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    pFVar20 = local_6e8.Data + (longlong)(int)uVar8 * 0x40;
    iVar7 = *(int *)&this_01[8].field_0x0 + -1;
    if (*(int *)&this_01[8].field_0x0 == 0) {
      iVar7 = 0;
    }
    local_648 = pFVar20;
    ::FString::AssignRange
              ((FString *)pFVar20,
               (wchar_t *)
               (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&this_01->field_0x0)->
               AllocatorInstance).Data,iVar7);
    iVar7 = *(int *)(this_01 + 0x18) + -1;
    if (*(int *)(this_01 + 0x18) == 0) {
      iVar7 = 0;
    }
    ::FString::AssignRange((FString *)(pFVar20 + 0x10),*(wchar_t **)pFVar18,iVar7);
    iVar7 = *(int *)(this_01 + 0x28) + -1;
    if (*(int *)(this_01 + 0x28) == 0) {
      iVar7 = 0;
    }
    ::FString::AssignRange((FString *)(pFVar20 + 0x20),*(wchar_t **)pFVar1,iVar7);
    ::FString::PrintfImpl(&local_620,L"English Text %d");
    pFVar1 = pFVar20 + 0x30;
    if (pFVar1 != (FScriptContainerElement *)&local_620) {
      if (*(void **)pFVar1 != (void *)0x0) {
        FMemory::Free(*(void **)pFVar1);
      }
      *(FScriptContainerElement **)pFVar1 = local_620.Data.AllocatorInstance.Data;
      *(int *)(pFVar20 + 0x38) = local_620.Data.ArrayNum;
      *(int *)(pFVar20 + 0x3c) = local_620.Data.ArrayMax;
      local_620.Data.ArrayNum = 0;
      local_620.Data.ArrayMax = 0;
      local_620.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_620.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_620.Data.AllocatorInstance.Data);
    }
    uVar8 = (uint)local_6f0;
    if ((uint)local_6f0 == local_6f0._4_4_) {
      uVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x840,&local_6f8,(int *)((longlong)&local_6f0 + 4));
    }
    local_6f0 = CONCAT44(local_6f0._4_4_,uVar8 + 1);
    DefaultConstructItems<FLocTextHelperTestTranslationEntry,int>
              (local_6f8.Data + (longlong)(int)uVar8 * 0x40,1);
    uVar9 = 0;
    if ((int)uVar8 < (int)(uint)local_6f0) {
      uVar9 = ~uVar8 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    pFVar20 = local_6f8.Data + (longlong)(int)uVar8 * 0x40;
    iVar7 = *(int *)&this_01[8].field_0x0 + -1;
    if (*(int *)&this_01[8].field_0x0 == 0) {
      iVar7 = 0;
    }
    ::FString::AssignRange
              ((FString *)pFVar20,
               (wchar_t *)
               (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&this_01->field_0x0)->
               AllocatorInstance).Data,iVar7);
    iVar7 = *(int *)(this_01 + 0x18) + -1;
    if (*(int *)(this_01 + 0x18) == 0) {
      iVar7 = 0;
    }
    ::FString::AssignRange((FString *)(pFVar20 + 0x10),*(wchar_t **)pFVar18,iVar7);
    iVar7 = *(int *)(local_648 + 0x38) + -1;
    if (*(int *)(local_648 + 0x38) == 0) {
      iVar7 = 0;
    }
    ::FString::AssignRange((FString *)(pFVar20 + 0x20),*(wchar_t **)pFVar1,iVar7);
    ::FString::PrintfImpl(&local_610,L"French Text %d");
    pFVar21 = pFVar20 + 0x30;
    if (pFVar21 != (FScriptContainerElement *)&local_610) {
      if (*(void **)pFVar21 != (void *)0x0) {
        FMemory::Free(*(void **)pFVar21);
      }
      *(FScriptContainerElement **)pFVar21 = local_610.Data.AllocatorInstance.Data;
      *(int *)(pFVar20 + 0x38) = local_610.Data.ArrayNum;
      *(int *)(pFVar20 + 0x3c) = local_610.Data.ArrayMax;
      local_610.Data.ArrayNum = 0;
      local_610.Data.ArrayMax = 0;
      local_610.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_610.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_610.Data.AllocatorInstance.Data);
    }
    uVar8 = (uint)local_700;
    if ((uint)local_700 == local_700._4_4_) {
      uVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x840,&local_708,(int *)((longlong)&local_700 + 4));
    }
    local_700 = CONCAT44(local_700._4_4_,uVar8 + 1);
    DefaultConstructItems<FLocTextHelperTestTranslationEntry,int>
              (local_708.Data + (longlong)(int)uVar8 * 0x40,1);
    uVar9 = 0;
    if ((int)uVar8 < (int)(uint)local_700) {
      uVar9 = ~uVar8 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    pFVar20 = local_708.Data + (longlong)(int)uVar8 * 0x40;
    iVar7 = *(int *)&this_01[8].field_0x0 + -1;
    if (*(int *)&this_01[8].field_0x0 == 0) {
      iVar7 = 0;
    }
    ::FString::AssignRange
              ((FString *)pFVar20,
               (wchar_t *)
               (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&this_01->field_0x0)->
               AllocatorInstance).Data,iVar7);
    iVar7 = *(int *)(this_01 + 0x18) + -1;
    if (*(int *)(this_01 + 0x18) == 0) {
      iVar7 = 0;
    }
    ::FString::AssignRange((FString *)(pFVar20 + 0x10),*(wchar_t **)pFVar18,iVar7);
    iVar7 = *(int *)(local_648 + 0x38) + -1;
    if (*(int *)(local_648 + 0x38) == 0) {
      iVar7 = 0;
    }
    ::FString::AssignRange((FString *)(pFVar20 + 0x20),*(wchar_t **)pFVar1,iVar7);
    ::FString::PrintfImpl(&local_600,L"German Text %d");
    pFVar18 = pFVar20 + 0x30;
    if (pFVar18 != (FScriptContainerElement *)&local_600) {
      if (*(void **)pFVar18 != (void *)0x0) {
        FMemory::Free(*(void **)pFVar18);
      }
      *(FScriptContainerElement **)pFVar18 = local_600.Data.AllocatorInstance.Data;
      *(int *)(pFVar20 + 0x38) = local_600.Data.ArrayNum;
      *(int *)(pFVar20 + 0x3c) = local_600.Data.ArrayMax;
      local_600.Data.ArrayNum = 0;
      local_600.Data.ArrayMax = 0;
      local_600.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_600.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_600.Data.AllocatorInstance.Data);
    }
    local_6c8 = local_6c8 + -1;
  } while (local_6c8 != 0);
  iVar7 = 0;
  lVar29 = 0;
  local_6c8 = 0;
  do {
    FVar16.Data = (FScriptContainerElement *)0x0;
    if (((int)(uint)local_6d0 <= iVar7) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    local_548.Key.Str.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_548.Key.Str.Data.ArrayNum = 0;
    local_548.Key.Str.Data.ArrayMax = 0;
    iVar26 = 0;
    local_548.Key.Hash = 0;
    pFVar18 = local_6d8.Data + lVar29 * 0x30;
    local_548.SourceLocation.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_548.SourceLocation.Data.ArrayNum = 0;
    local_548.SourceLocation.Data.ArrayMax = 0;
    local_548.PlatformName.ComparisonIndex.Value = 0;
    local_548.PlatformName.Number = 0;
    local_548.bIsOptional = false;
    local_548.InfoMetadataObj.Object = (FLocMetadataObject *)0x0;
    local_548.InfoMetadataObj.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    local_548.KeyMetadataObj.Object = (FLocMetadataObject *)0x0;
    local_548.KeyMetadataObj.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    ::FString::FString(&local_5e0,(FString *)(pFVar18 + 0x10));
    FVar22.Data = local_5e0.Data.AllocatorInstance.Data;
    iVar10 = local_5e0.Data.ArrayNum;
    FVar19.Data = (FScriptContainerElement *)L"";
    if (local_5e0.Data.ArrayNum != 0) {
      FVar19.Data = local_5e0.Data.AllocatorInstance.Data;
    }
    local_5d0 = FCrc::StrCrc32<wchar_t>((wchar_t *)FVar19.Data,0);
    uVar8 = local_5d0;
    if (local_548.Key.Str.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_548.Key.Str.Data.AllocatorInstance.Data);
      FVar22.Data = local_5e0.Data.AllocatorInstance.Data;
      iVar10 = local_5e0.Data.ArrayNum;
      uVar8 = local_5d0;
    }
    local_548.Key.Str.Data.ArrayMax = local_5e0.Data.ArrayMax;
    local_548.Key.Str.Data.ArrayNum = iVar10;
    iVar10 = *(int *)(pFVar18 + 0x28);
    pvVar3 = *(void **)(pFVar18 + 0x20);
    local_5e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_5e0.Data.ArrayNum = 0;
    local_5e0.Data.ArrayMax = 0;
    local_5d0 = 0;
    local_698.Data = (FScriptContainerElement *)0x0;
    local_548.Key.Str.Data.AllocatorInstance.Data = FVar22.Data;
    local_548.Key.Hash = uVar8;
    if (iVar10 != 0) {
      local_690._0_4_ = iVar10;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar10,0,&local_698,iVar10,(int *)((longlong)&local_690 + 4));
      memcpy(local_698.Data,pvVar3,(longlong)iVar10 * 2);
      FVar16.Data = local_698.Data;
      iVar26 = local_690._4_4_;
      iVar10 = (int)local_690;
    }
    local_698.Data = (FScriptContainerElement *)0x0;
    local_3c8.MetadataObj.Object = (FLocMetadataObject *)0x0;
    local_3c8.MetadataObj.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    local_690 = 0;
    local_3c8.Text.Data.AllocatorInstance.Data = FVar16.Data;
    local_3c8.Text.Data.ArrayNum = iVar10;
    local_3c8.Text.Data.ArrayMax = iVar26;
    ::FString::FString(&local_488.Str,(FString *)pFVar18);
    FVar16.Data = (FScriptContainerElement *)L"";
    if (local_488.Str.Data.ArrayNum != 0) {
      FVar16.Data = local_488.Str.Data.AllocatorInstance.Data;
    }
    local_488.Hash = FCrc::StrCrc32<wchar_t>((wchar_t *)FVar16.Data,0);
    FLocTextHelper::AddSourceText(&local_198,&local_488,&local_3c8,&local_548,(FString *)0x0);
    if (local_488.Str.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_488.Str.Data.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3c8.MetadataObj.SharedReferenceCount.ReferenceController);
    if (local_3c8.Text.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3c8.Text.Data.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_548.KeyMetadataObj.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_548.InfoMetadataObj.SharedReferenceCount.ReferenceController);
    if (local_548.SourceLocation.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_548.SourceLocation.Data.AllocatorInstance.Data);
    }
    if (local_548.Key.Str.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_548.Key.Str.Data.AllocatorInstance.Data);
    }
    if (((int)(uint)local_6e0 <= iVar7) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    local_688.Data = (FScriptContainerElement *)0x0;
    lVar27 = lVar29 * 0x40;
    pFVar18 = local_6e8.Data + lVar27;
    iVar10 = *(int *)(pFVar18 + 0x38);
    pvVar3 = *(void **)(pFVar18 + 0x30);
    if (iVar10 == 0) {
      local_388.Text.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_388.Text.Data.ArrayNum = iVar10;
      local_388.Text.Data.ArrayMax = 0;
    }
    else {
      local_680._0_4_ = iVar10;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar10,0,&local_688,iVar10,(int *)((longlong)&local_680 + 4));
      memcpy(local_688.Data,pvVar3,(longlong)iVar10 * 2);
      local_388.Text.Data.AllocatorInstance.Data = local_688.Data;
      local_388.Text.Data.ArrayNum = (int)local_680;
      local_388.Text.Data.ArrayMax = local_680._4_4_;
    }
    pvVar3 = *(void **)(pFVar18 + 0x20);
    iVar10 = *(int *)(pFVar18 + 0x28);
    local_688.Data = (FScriptContainerElement *)0x0;
    local_680 = 0;
    local_678.Data = (FScriptContainerElement *)0x0;
    local_388.MetadataObj.Object = (FLocMetadataObject *)0x0;
    local_388.MetadataObj.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    if (iVar10 == 0) {
      local_3a8.Text.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_3a8.Text.Data.ArrayMax = 0;
      local_3a8.Text.Data.ArrayNum = iVar10;
    }
    else {
      local_670._0_4_ = iVar10;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar10,0,&local_678,iVar10,(int *)((longlong)&local_670 + 4));
      memcpy(local_678.Data,pvVar3,(longlong)iVar10 * 2);
      local_3a8.Text.Data.AllocatorInstance.Data = local_678.Data;
      local_3a8.Text.Data.ArrayMax = local_670._4_4_;
      local_3a8.Text.Data.ArrayNum = (int)local_670;
    }
    local_678.Data = (FScriptContainerElement *)0x0;
    local_3a8.MetadataObj.Object = (FLocMetadataObject *)0x0;
    local_3a8.MetadataObj.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    local_670 = 0;
    ::FString::FString(&local_458.Str,(FString *)(pFVar18 + 0x10));
    FVar16.Data = (FScriptContainerElement *)L"";
    if (local_458.Str.Data.ArrayNum != 0) {
      FVar16.Data = local_458.Str.Data.AllocatorInstance.Data;
    }
    local_458.Hash = FCrc::StrCrc32<wchar_t>((wchar_t *)FVar16.Data,0);
    ::FString::FString(&local_470.Str,(FString *)pFVar18);
    FVar16.Data = (FScriptContainerElement *)L"";
    if (local_470.Str.Data.ArrayNum != 0) {
      FVar16.Data = local_470.Str.Data.AllocatorInstance.Data;
    }
    local_470.Hash = FCrc::StrCrc32<wchar_t>((wchar_t *)FVar16.Data,0);
    ::FString::FString(&local_5a8,L"en");
    iVar10 = local_5a8.Data.ArrayNum + -1;
    FVar16.Data = local_5a8.Data.AllocatorInstance.Data;
    if (local_5a8.Data.ArrayNum == 0) {
      iVar10 = 0;
      FVar16.Data = (FScriptContainerElement *)L"";
    }
    uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar10,(wchar_t *)FVar16.Data);
    iVar10 = TSet<TTuple<FString,TSharedPtr<FInternationalizationArchive,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FInternationalizationArchive,1>,0>,FDefaultSetAllocator>
             ::FindIndexByHash<FString>
                       ((TSet<TTuple<FString,TSharedPtr<FInternationalizationArchive,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FInternationalizationArchive,1>,0>,FDefaultSetAllocator>
                         *)&local_198.Archives,uVar8,&local_5a8);
    if ((iVar10 == -1) || (lVar31 = local_198.Archives._0_8_ + (longlong)iVar10 * 0x28, lVar31 == 0)
       ) {
      pFVar30 = (FInternationalizationArchive *)0x0;
      pTVar23 = (TReferenceControllerBase<1> *)0x0;
LAB_146b34c2a:
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Archive.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\Localization\\Private\\LocTextHelper.cpp"
                         ,0x455,
                         L"Attempted to add a translation, but no valid archive could be found for \'%s\'!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      if ((pFVar30 == (FInternationalizationArchive *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
    }
    else {
      pFVar30 = *(FInternationalizationArchive **)(lVar31 + 0x10);
      pTVar23 = *(TReferenceControllerBase<1> **)(lVar31 + 0x18);
      if (pTVar23 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar23->SharedReferenceCount = (atomic<int>)((int)pTVar23->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (pFVar30 == (FInternationalizationArchive *)0x0) goto LAB_146b34c2a;
    }
    local_238.Object = (FLocMetadataObject *)0x0;
    local_238.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    FInternationalizationArchive::AddEntry
              (pFVar30,&local_470,&local_458,&local_3a8,&local_388,&local_238,false);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar23);
    if (local_5a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5a8.Data.AllocatorInstance.Data);
    }
    if (local_470.Str.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_470.Str.Data.AllocatorInstance.Data);
    }
    if (local_458.Str.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_458.Str.Data.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3a8.MetadataObj.SharedReferenceCount.ReferenceController);
    if (local_3a8.Text.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3a8.Text.Data.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_388.MetadataObj.SharedReferenceCount.ReferenceController);
    if (local_388.Text.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_388.Text.Data.AllocatorInstance.Data);
    }
    if (((int)(uint)local_6f0 <= iVar7) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    pFVar18 = local_6f8.Data + lVar27;
    local_668.Data = (FScriptContainerElement *)0x0;
    iVar10 = *(int *)(pFVar18 + 0x38);
    pvVar3 = *(void **)(pFVar18 + 0x30);
    if (iVar10 == 0) {
      local_348.Text.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_348.Text.Data.ArrayNum = iVar10;
      local_348.Text.Data.ArrayMax = 0;
    }
    else {
      local_660._0_4_ = iVar10;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar10,0,&local_668,iVar10,(int *)((longlong)&local_660 + 4));
      memcpy(local_668.Data,pvVar3,(longlong)iVar10 * 2);
      local_348.Text.Data.AllocatorInstance.Data = local_668.Data;
      local_348.Text.Data.ArrayNum = (int)local_660;
      local_348.Text.Data.ArrayMax = local_660._4_4_;
    }
    pvVar3 = *(void **)(pFVar18 + 0x20);
    iVar10 = *(int *)(pFVar18 + 0x28);
    local_668.Data = (FScriptContainerElement *)0x0;
    local_660 = 0;
    local_658.Data = (FScriptContainerElement *)0x0;
    local_348.MetadataObj.Object = (FLocMetadataObject *)0x0;
    local_348.MetadataObj.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    if (iVar10 == 0) {
      local_368.Text.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_368.Text.Data.ArrayMax = 0;
      local_368.Text.Data.ArrayNum = iVar10;
    }
    else {
      local_650._0_4_ = iVar10;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar10,0,&local_658,iVar10,(int *)((longlong)&local_650 + 4));
      memcpy(local_658.Data,pvVar3,(longlong)iVar10 * 2);
      local_368.Text.Data.AllocatorInstance.Data = local_658.Data;
      local_368.Text.Data.ArrayMax = local_650._4_4_;
      local_368.Text.Data.ArrayNum = (int)local_650;
    }
    local_658.Data = (FScriptContainerElement *)0x0;
    local_368.MetadataObj.Object = (FLocMetadataObject *)0x0;
    local_368.MetadataObj.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    local_650 = 0;
    ::FString::FString(&local_428.Str,(FString *)(pFVar18 + 0x10));
    FVar16.Data = (FScriptContainerElement *)L"";
    if (local_428.Str.Data.ArrayNum != 0) {
      FVar16.Data = local_428.Str.Data.AllocatorInstance.Data;
    }
    local_428.Hash = FCrc::StrCrc32<wchar_t>((wchar_t *)FVar16.Data,0);
    ::FString::FString(&local_440.Str,(FString *)pFVar18);
    FVar16.Data = (FScriptContainerElement *)L"";
    if (local_440.Str.Data.ArrayNum != 0) {
      FVar16.Data = local_440.Str.Data.AllocatorInstance.Data;
    }
    local_440.Hash = FCrc::StrCrc32<wchar_t>((wchar_t *)FVar16.Data,0);
    ::FString::FString(&local_598,L"fr");
    lVar31 = 0;
    iVar10 = local_598.Data.ArrayNum + -1;
    FVar16.Data = local_598.Data.AllocatorInstance.Data;
    if (local_598.Data.ArrayNum == 0) {
      iVar10 = 0;
      FVar16.Data = (FScriptContainerElement *)L"";
    }
    uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar10,(wchar_t *)FVar16.Data);
    iVar10 = TSet<TTuple<FString,TSharedPtr<FInternationalizationArchive,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FInternationalizationArchive,1>,0>,FDefaultSetAllocator>
             ::FindIndexByHash<FString>
                       ((TSet<TTuple<FString,TSharedPtr<FInternationalizationArchive,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FInternationalizationArchive,1>,0>,FDefaultSetAllocator>
                         *)&local_198.Archives,uVar8,&local_598);
    if ((iVar10 == -1) || (lVar2 = local_198.Archives._0_8_ + (longlong)iVar10 * 0x28, lVar2 == 0))
    {
      pFVar30 = (FInternationalizationArchive *)0x0;
      pTVar23 = (TReferenceControllerBase<1> *)0x0;
LAB_146b34f8b:
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Archive.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\Localization\\Private\\LocTextHelper.cpp"
                         ,0x455,
                         L"Attempted to add a translation, but no valid archive could be found for \'%s\'!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      if ((pFVar30 == (FInternationalizationArchive *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
    }
    else {
      pFVar30 = *(FInternationalizationArchive **)(lVar2 + 0x10);
      pTVar23 = *(TReferenceControllerBase<1> **)(lVar2 + 0x18);
      if (pTVar23 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar23->SharedReferenceCount = (atomic<int>)((int)pTVar23->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (pFVar30 == (FInternationalizationArchive *)0x0) goto LAB_146b34f8b;
    }
    local_228.Object = (FLocMetadataObject *)0x0;
    local_228.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    FInternationalizationArchive::AddEntry
              (pFVar30,&local_440,&local_428,&local_368,&local_348,&local_228,false);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar23);
    if (local_598.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_598.Data.AllocatorInstance.Data);
    }
    if (local_440.Str.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_440.Str.Data.AllocatorInstance.Data);
    }
    if (local_428.Str.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_428.Str.Data.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_368.MetadataObj.SharedReferenceCount.ReferenceController);
    if (local_368.Text.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_368.Text.Data.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_348.MetadataObj.SharedReferenceCount.ReferenceController);
    if (local_348.Text.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_348.Text.Data.AllocatorInstance.Data);
    }
    if (((int)(uint)local_700 <= iVar7) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    pFVar18 = local_708.Data + lVar27;
    pFVar30 = (FInternationalizationArchive *)0x0;
    local_5c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::CopyToEmpty<wchar_t,int>
              (&local_5c8,*(wchar_t **)(pFVar18 + 0x30),*(int *)(pFVar18 + 0x38),0);
    local_308.Text.Data.AllocatorInstance.Data = local_5c8.AllocatorInstance.Data;
    local_308.Text.Data.ArrayNum = local_5c8.ArrayNum;
    local_308.Text.Data.ArrayMax = local_5c8.ArrayMax;
    local_5c8.ArrayNum = 0;
    local_5c8.ArrayMax = 0;
    local_5c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_308.MetadataObj.Object = (FLocMetadataObject *)0x0;
    local_308.MetadataObj.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    local_5b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::CopyToEmpty<wchar_t,int>
              (&local_5b8,*(wchar_t **)(pFVar18 + 0x20),*(int *)(pFVar18 + 0x28),0);
    local_328.Text.Data.AllocatorInstance.Data = local_5b8.AllocatorInstance.Data;
    local_328.Text.Data.ArrayNum = local_5b8.ArrayNum;
    local_328.Text.Data.ArrayMax = local_5b8.ArrayMax;
    local_5b8.ArrayNum = 0;
    local_5b8.ArrayMax = 0;
    local_5b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_328.MetadataObj.Object = (FLocMetadataObject *)0x0;
    local_328.MetadataObj.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    ::FString::FString(&local_3f8.Str,(FString *)(pFVar18 + 0x10));
    FVar16.Data = (FScriptContainerElement *)L"";
    if (local_3f8.Str.Data.ArrayNum != 0) {
      FVar16.Data = local_3f8.Str.Data.AllocatorInstance.Data;
    }
    local_3f8.Hash = FCrc::StrCrc32<wchar_t>((wchar_t *)FVar16.Data,0);
    ::FString::FString(&local_410.Str,(FString *)pFVar18);
    FVar16.Data = (FScriptContainerElement *)L"";
    if (local_410.Str.Data.ArrayNum != 0) {
      FVar16.Data = local_410.Str.Data.AllocatorInstance.Data;
    }
    local_410.Hash = FCrc::StrCrc32<wchar_t>((wchar_t *)FVar16.Data,0);
    ::FString::FString(&local_588,L"de");
    iVar10 = local_588.Data.ArrayNum + -1;
    FVar16.Data = local_588.Data.AllocatorInstance.Data;
    if (local_588.Data.ArrayNum == 0) {
      iVar10 = 0;
      FVar16.Data = (FScriptContainerElement *)L"";
    }
    uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar10,(wchar_t *)FVar16.Data);
    iVar10 = TSet<TTuple<FString,TSharedPtr<FInternationalizationArchive,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FInternationalizationArchive,1>,0>,FDefaultSetAllocator>
             ::FindIndexByHash<FString>
                       ((TSet<TTuple<FString,TSharedPtr<FInternationalizationArchive,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FInternationalizationArchive,1>,0>,FDefaultSetAllocator>
                         *)&local_198.Archives,uVar8,&local_588);
    pFVar24 = pFVar30;
    this_02 = pFVar30;
    if ((iVar10 == -1) || (lVar27 = local_198.Archives._0_8_ + (longlong)iVar10 * 0x28, lVar27 == 0)
       ) {
LAB_146b3528e:
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Archive.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\Localization\\Private\\LocTextHelper.cpp"
                         ,0x455,
                         L"Attempted to add a translation, but no valid archive could be found for \'%s\'!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      if ((this_02 == (FInternationalizationArchive *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
    }
    else {
      this_02 = *(FInternationalizationArchive **)(lVar27 + 0x10);
      pFVar24 = *(FInternationalizationArchive **)(lVar27 + 0x18);
      if (pFVar24 != (FInternationalizationArchive *)0x0) {
        LOCK();
        *(int *)&pFVar24->EntriesBySourceText =
             (int)*(atomic<int> *)&pFVar24->EntriesBySourceText + 1;
        UNLOCK();
      }
      if (this_02 == (FInternationalizationArchive *)0x0) goto LAB_146b3528e;
    }
    local_218.Object = (FLocMetadataObject *)0x0;
    local_218.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    FInternationalizationArchive::AddEntry
              (this_02,&local_410,&local_3f8,&local_328,&local_308,&local_218,false);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar24);
    if (local_588.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_588.Data.AllocatorInstance.Data);
    }
    if (local_410.Str.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_410.Str.Data.AllocatorInstance.Data);
    }
    if (local_3f8.Str.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3f8.Str.Data.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_328.MetadataObj.SharedReferenceCount.ReferenceController);
    if (local_328.Text.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_328.Text.Data.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_308.MetadataObj.SharedReferenceCount.ReferenceController);
    if (local_308.Text.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_308.Text.Data.AllocatorInstance.Data);
    }
    iVar7 = iVar7 + 1;
    lVar29 = lVar29 + 1;
    if (99 < iVar7) {
      local_6c8 = 0;
      while( true ) {
        lVar29 = local_6c8;
        iVar7 = (int)pFVar30;
        if (((int)(uint)local_6d0 <= iVar7) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        pFVar25 = (FLocTextHelperTestSourceEntry *)(local_6d8.Data + lVar29);
        if (((int)(uint)local_6e0 <= iVar7) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        local_4e8 = (FLocTextHelperTestTranslationEntry *)(local_6e8.Data + lVar31);
        if (((int)(uint)local_6f0 <= iVar7) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        local_4e0 = (FLocTextHelperTestTranslationEntry *)(local_6f8.Data + lVar31);
        if (((int)(uint)local_700 <= iVar7) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) break;
        local_4d8 = (FLocTextHelperTestTranslationEntry *)(local_708.Data + lVar31);
        ::FString::FString(&local_4b8.Str,&pFVar25->Key);
        FVar16.Data = (FScriptContainerElement *)L"";
        if (local_4b8.Str.Data.ArrayNum != 0) {
          FVar16.Data = local_4b8.Str.Data.AllocatorInstance.Data;
        }
        local_4b8.Hash = FCrc::StrCrc32<wchar_t>((wchar_t *)FVar16.Data,0);
        ::FString::FString(&local_3e0.Str,(FString *)pFVar25);
        FVar16.Data = (FScriptContainerElement *)L"";
        if (local_3e0.Str.Data.ArrayNum != 0) {
          FVar16.Data = local_3e0.Str.Data.AllocatorInstance.Data;
        }
        local_3e0.Hash = FCrc::StrCrc32<wchar_t>((wchar_t *)FVar16.Data,0);
        if (local_198.Manifest.Object == (FInternationalizationManifest *)0x0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Manifest.IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\Localization\\Private\\LocTextHelper.cpp"
                             ,0x405,
                             L"Attempted to find source text, but no manifest has been loaded!");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          if ((local_198.Manifest.Object == (FInternationalizationManifest *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
        }
        FInternationalizationManifest::FindEntryByKey
                  (local_198.Manifest.Object,&local_2d8,&local_3e0,&local_4b8,&pFVar25->SourceText);
        if (local_3e0.Str.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3e0.Str.Data.AllocatorInstance.Data);
        }
        if (local_4b8.Str.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_4b8.Str.Data.AllocatorInstance.Data);
        }
        pFVar28 = local_5e8;
        if (local_2d8.Object == (FManifestEntry *)0x0) {
          local_648 = *(FScriptContainerElement **)(*(longlong *)local_5e8 + 0x28);
          ::FString::PrintfImpl
                    (&local_248,L"Failed to find expected source text: \'%s\', \'%s\', \'%s\'.");
          pFVar28 = local_5e8;
          (*(code *)local_648)(local_5e8,&local_248,0);
          if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_248.Data.AllocatorInstance.Data);
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_2d8.SharedReferenceCount.ReferenceController);
        local_560 = &local_198;
        local_568 = pFVar28;
        ::FString::FString(&local_258,L"en");
        `FLocTextHelperTest::RunTest'::__l12::<lambda_1>::operator()
                  (&local_568,&local_258,pFVar25,local_4e8);
        if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_258.Data.AllocatorInstance.Data);
        }
        ::FString::FString(&local_2c8,L"fr");
        `FLocTextHelperTest::RunTest'::__l12::<lambda_1>::operator()
                  (&local_568,&local_2c8,pFVar25,local_4e0);
        if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
        }
        ::FString::FString(&local_2b8,L"de");
        `FLocTextHelperTest::RunTest'::__l12::<lambda_1>::operator()
                  (&local_568,&local_2b8,pFVar25,local_4d8);
        if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
        }
        pFVar30 = (FInternationalizationArchive *)(ulonglong)(iVar7 + 1U);
        local_6c8 = local_6c8 + 0x30;
        lVar31 = lVar31 + 0x40;
        if (99 < (int)(iVar7 + 1U)) {
          local_6c0[0] = 0;
          local_4d0 = local_6c0;
          local_2a0 = &local_4d0;
          local_2a8 = UE::Core::Private::Function::
                      TFunctionRefCaller<`FLocTextHelperTest::RunTest'::__l17::<lambda_2>,bool,TSharedRef<FManifestEntry,1>_>
                      ::Call;
          FLocTextHelper::EnumerateSourceTexts
                    (&local_198,
                     (TFunctionRef<bool___cdecl(TSharedRef<FManifestEntry,1>)> *)&local_2a8,true);
          if (local_6c0[0] != 100) {
            pcVar4 = *(code **)(*(longlong *)pFVar28 + 0x28);
            ::FString::PrintfImpl
                      (&local_298,
                       L"Failed to enumerate the expected number of source texts. Expected: %d. Actual: %d."
                      );
            (*pcVar4)(pFVar28,&local_298,0);
            if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_298.Data.AllocatorInstance.Data);
            }
          }
          local_498 = &local_198;
          local_490 = local_5f0;
          local_4a0 = pFVar28;
          ::FString::FString(&local_288,L"en");
          `FLocTextHelperTest::RunTest'::__l2::<lambda_3>::operator()(&local_4a0,&local_288);
          if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_288.Data.AllocatorInstance.Data);
          }
          ::FString::FString(&local_278,L"fr");
          `FLocTextHelperTest::RunTest'::__l2::<lambda_3>::operator()(&local_4a0,&local_278);
          if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_278.Data.AllocatorInstance.Data);
          }
          ::FString::FString(&local_268,L"de");
          `FLocTextHelperTest::RunTest'::__l2::<lambda_3>::operator()(&local_4a0,&local_268);
          if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_268.Data.AllocatorInstance.Data);
          }
          pIVar17 = IFileManager::Get();
          FVar16.Data = (FScriptContainerElement *)L"";
          if (local_558.Data.ArrayNum != 0) {
            FVar16.Data = local_558.Data.AllocatorInstance.Data;
          }
          (**(code **)((longlong)*pIVar17 + 0x68))(pIVar17,FVar16.Data,1);
          DestructItems<FLocTextHelperTestTranslationEntry,int>
                    ((FLocTextHelperTestTranslationEntry *)local_708.Data,(uint)local_700);
          if ((FLocTextHelperTestTranslationEntry *)local_708.Data !=
              (FLocTextHelperTestTranslationEntry *)0x0) {
            FMemory::Free(local_708.Data);
          }
          DestructItems<FLocTextHelperTestTranslationEntry,int>
                    ((FLocTextHelperTestTranslationEntry *)local_6f8.Data,(uint)local_6f0);
          if ((FLocTextHelperTestTranslationEntry *)local_6f8.Data !=
              (FLocTextHelperTestTranslationEntry *)0x0) {
            FMemory::Free(local_6f8.Data);
          }
          DestructItems<FLocTextHelperTestTranslationEntry,int>
                    ((FLocTextHelperTestTranslationEntry *)local_6e8.Data,(uint)local_6e0);
          if ((FLocTextHelperTestTranslationEntry *)local_6e8.Data !=
              (FLocTextHelperTestTranslationEntry *)0x0) {
            FMemory::Free(local_6e8.Data);
          }
          DestructItems<FLocTextHelperTestSourceEntry,int>
                    ((FLocTextHelperTestSourceEntry *)local_6d8.Data,(uint)local_6d0);
          if ((FLocTextHelperTestSourceEntry *)local_6d8.Data !=
              (FLocTextHelperTestSourceEntry *)0x0) {
            FMemory::Free(local_6d8.Data);
          }
          FLocTextHelper::~FLocTextHelper(&local_198);
          DestructItems<FString,int>((FString *)local_718.Data,(int)local_710);
          if (local_718.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_718.Data);
          }
          if (local_558.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_558.Data.AllocatorInstance.Data);
          }
          return true;
        }
      }
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  } while( true );
}

// GetBeautifiedTestName @ 146b35a00

FString * __thiscall
FLocTextHelperTest::GetBeautifiedTestName(FLocTextHelperTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Core.Misc.LocText Helper");
  return __return_storage_ptr__;
}

// operator() @ 146b4be80

/* WARNING: Enum "EFormatVersion": Some values do not have unique names */

void __thiscall
`FLocTextHelperTest::RunTest'::__l12::<lambda_1>::operator()
          (void *this,FString *param_1,FLocTextHelperTestSourceEntry *param_2,
          FLocTextHelperTestTranslationEntry *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  FLocTextHelper *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  TTuple<FString,TSharedPtr<FInternationalizationArchive,1>_> *pTVar9;
  FString *pFVar10;
  ForAnyElementType FVar11;
  TReferenceControllerBase<1> *pTVar12;
  FInternationalizationArchive *pFVar13;
  TSharedPtr<FArchiveEntry,1> local_238;
  FLocItem local_228;
  FLocItem local_208;
  TSharedPtr<FArchiveEntry,1> local_1e8;
  FLocKey local_1d8;
  FLocKey local_1c0;
  FLocKey local_1a8;
  FLocKey local_190;
  FLocKey local_178;
  FLocKey local_160;
  FLocKey local_148;
  FLocKey local_130;
  FLocItem local_118;
  FLocItem local_f8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  TSharedPtr<FLocMetadataObject,1> local_98;
  TSharedPtr<FLocMetadataObject,1> local_88;
  TSharedPtr<FLocMetadataObject,1> local_78;
  TSharedPtr<FLocMetadataObject,1> local_68;
  FString local_58;
  FString local_48;
  
  lVar2 = *(longlong *)((longlong)this + 8);
  ::FString::FString(&local_1c0.Str,&param_3->Key);
  FVar11.Data = (FScriptContainerElement *)L"";
  if (local_1c0.Str.Data.ArrayNum != 0) {
    FVar11.Data = local_1c0.Str.Data.AllocatorInstance.Data;
  }
  local_1c0.Hash = FCrc::StrCrc32<wchar_t>((wchar_t *)FVar11.Data,0);
  ::FString::FString(&local_1d8.Str,&param_3->Namespace);
  FVar11.Data = (FScriptContainerElement *)L"";
  if (local_1d8.Str.Data.ArrayNum != 0) {
    FVar11.Data = local_1d8.Str.Data.AllocatorInstance.Data;
  }
  local_1d8.Hash = FCrc::StrCrc32<wchar_t>((wchar_t *)FVar11.Data,0);
  pTVar9 = TSet<TTuple<FString,TSharedPtr<FInternationalizationArchive,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FInternationalizationArchive,1>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FString,TSharedPtr<FInternationalizationArchive,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FInternationalizationArchive,1>,0>,FDefaultSetAllocator>
                   *)(lVar2 + 0x98),param_1);
  if (pTVar9 == (TTuple<FString,TSharedPtr<FInternationalizationArchive,1>_> *)0x0) {
    pFVar13 = (FInternationalizationArchive *)0x0;
    pTVar12 = (TReferenceControllerBase<1> *)0x0;
LAB_146b4bf36:
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Archive.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\Localization\\Private\\LocTextHelper.cpp"
                       ,0x7d5,
                       L"Attempted to find a translation, but no valid archive could be found for \'%s\'!"
                      );
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if ((pFVar13 == (FInternationalizationArchive *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else {
    pTVar12 = *(TReferenceControllerBase<1> **)&pTVar9->field_0x18;
    pFVar13 = *(FInternationalizationArchive **)&pTVar9->field_0x10;
    if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pFVar13 == (FInternationalizationArchive *)0x0) goto LAB_146b4bf36;
  }
  local_98.Object = (FLocMetadataObject *)0x0;
  local_98.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FInternationalizationArchive::FindEntryByKey(pFVar13,&local_238,&local_1d8,&local_1c0,&local_98);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (local_1d8.Str.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d8.Str.Data.AllocatorInstance.Data);
  }
  if (local_1c0.Str.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c0.Str.Data.AllocatorInstance.Data);
  }
  if (local_238.Object == (FArchiveEntry *)0x0) {
LAB_146b4c064:
    plVar3 = *(longlong **)this;
    pcVar6 = *(code **)(*plVar3 + 0x28);
    ::FString::PrintfImpl
              (&local_d8,
               L"Failed to find expected translation for \'%s\': \'%s\', \'%s\', \'%s\', \'%s\'.");
    (*pcVar6)(plVar3,&local_d8,0);
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
  }
  else {
    if ((local_238.Object == (FArchiveEntry *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar8 = ((local_238.Object)->Translation).Text.Data.ArrayNum;
    iVar1 = (param_3->TranslationText).Data.ArrayNum;
    if (iVar8 == iVar1) {
      if (1 < iVar8) {
        iVar8 = wcscmp((wchar_t *)((local_238.Object)->Translation).Text.Data.AllocatorInstance.Data
                       ,(wchar_t *)(param_3->TranslationText).Data.AllocatorInstance.Data);
        bVar7 = iVar8 == 0;
        goto LAB_146b4c059;
      }
    }
    else {
      bVar7 = iVar8 + iVar1 == 1;
LAB_146b4c059:
      if (!bVar7) goto LAB_146b4c064;
    }
  }
  lVar2 = *(longlong *)((longlong)this + 8);
  ::FString::FString(&local_190.Str,&param_2->Key);
  FVar11.Data = (FScriptContainerElement *)L"";
  if (local_190.Str.Data.ArrayNum != 0) {
    FVar11.Data = local_190.Str.Data.AllocatorInstance.Data;
  }
  local_190.Hash = FCrc::StrCrc32<wchar_t>((wchar_t *)FVar11.Data,0);
  ::FString::FString(&local_1a8.Str,&param_2->Namespace);
  FVar11.Data = (FScriptContainerElement *)L"";
  if (local_1a8.Str.Data.ArrayNum != 0) {
    FVar11.Data = local_1a8.Str.Data.AllocatorInstance.Data;
  }
  local_1a8.Hash = FCrc::StrCrc32<wchar_t>((wchar_t *)FVar11.Data,0);
  pTVar9 = TSet<TTuple<FString,TSharedPtr<FInternationalizationArchive,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FInternationalizationArchive,1>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FString,TSharedPtr<FInternationalizationArchive,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FInternationalizationArchive,1>,0>,FDefaultSetAllocator>
                   *)(lVar2 + 0x98),param_1);
  if (pTVar9 == (TTuple<FString,TSharedPtr<FInternationalizationArchive,1>_> *)0x0) {
    pFVar13 = (FInternationalizationArchive *)0x0;
    pTVar12 = (TReferenceControllerBase<1> *)0x0;
LAB_146b4c179:
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Archive.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\Localization\\Private\\LocTextHelper.cpp"
                       ,0x7d5,
                       L"Attempted to find a translation, but no valid archive could be found for \'%s\'!"
                      );
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if ((pFVar13 == (FInternationalizationArchive *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else {
    pTVar12 = *(TReferenceControllerBase<1> **)&pTVar9->field_0x18;
    pFVar13 = *(FInternationalizationArchive **)&pTVar9->field_0x10;
    if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pFVar13 == (FInternationalizationArchive *)0x0) goto LAB_146b4c179;
  }
  local_88.Object = (FLocMetadataObject *)0x0;
  local_88.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FInternationalizationArchive::FindEntryByKey(pFVar13,&local_1e8,&local_1a8,&local_190,&local_88);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  local_238.Object = local_1e8.Object;
  local_1e8.Object = (FArchiveEntry *)0x0;
  SharedPointerInternals::FSharedReferencer<1>::operator=
            (&local_238.SharedReferenceCount,&local_1e8.SharedReferenceCount);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1e8.SharedReferenceCount.ReferenceController);
  if (local_1a8.Str.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8.Str.Data.AllocatorInstance.Data);
  }
  if (local_190.Str.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_190.Str.Data.AllocatorInstance.Data);
  }
  if (local_238.Object == (FArchiveEntry *)0x0) {
LAB_146b4c2cd:
    plVar3 = *(longlong **)this;
    pcVar6 = *(code **)(*plVar3 + 0x28);
    ::FString::PrintfImpl
              (&local_c8,
               L"Failed to find expected translation for \'%s\': \'%s\', \'%s\', \'%s\', \'%s\'.");
    (*pcVar6)(plVar3,&local_c8,0);
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
  }
  else {
    if ((local_238.Object == (FArchiveEntry *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar8 = ((local_238.Object)->Translation).Text.Data.ArrayNum;
    iVar1 = (param_3->TranslationText).Data.ArrayNum;
    if (iVar8 == iVar1) {
      if (1 < iVar8) {
        iVar8 = wcscmp((wchar_t *)((local_238.Object)->Translation).Text.Data.AllocatorInstance.Data
                       ,(wchar_t *)(param_3->TranslationText).Data.AllocatorInstance.Data);
        bVar7 = iVar8 == 0;
        goto LAB_146b4c2c2;
      }
    }
    else {
      bVar7 = iVar8 + iVar1 == 1;
LAB_146b4c2c2:
      if (!bVar7) goto LAB_146b4c2cd;
    }
  }
  pFVar4 = *(FLocTextHelper **)((longlong)this + 8);
  local_208.Text.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_208.Text.Data.ArrayNum = 0;
  local_208.Text.Data.ArrayMax = 0;
  local_208.MetadataObj.Object = (FLocMetadataObject *)0x0;
  local_208.MetadataObj.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_228.Text.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_228.MetadataObj.Object = (FLocMetadataObject *)0x0;
  local_228.MetadataObj.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_228.Text.Data.ArrayNum = 0;
  local_228.Text.Data.ArrayMax = 0;
  pFVar10 = ::FString::FString(&local_58,&param_3->SourceText);
  local_118.Text.Data.AllocatorInstance.Data = (pFVar10->Data).AllocatorInstance.Data;
  (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.Text.Data.ArrayNum = (pFVar10->Data).ArrayNum;
  local_118.Text.Data.ArrayMax = (pFVar10->Data).ArrayMax;
  (pFVar10->Data).ArrayNum = 0;
  (pFVar10->Data).ArrayMax = 0;
  local_118.MetadataObj.Object = (FLocMetadataObject *)0x0;
  local_118.MetadataObj.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pFVar5 = (pFVar10->Data).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  local_78.Object = (FLocMetadataObject *)0x0;
  local_78.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  ::FString::FString(&local_160.Str,&param_3->Key);
  FVar11.Data = (FScriptContainerElement *)L"";
  if (local_160.Str.Data.ArrayNum != 0) {
    FVar11.Data = local_160.Str.Data.AllocatorInstance.Data;
  }
  local_160.Hash = FCrc::StrCrc32<wchar_t>((wchar_t *)FVar11.Data,0);
  ::FString::FString(&local_178.Str,&param_3->Namespace);
  FVar11.Data = (FScriptContainerElement *)L"";
  if (local_178.Str.Data.ArrayNum != 0) {
    FVar11.Data = local_178.Str.Data.AllocatorInstance.Data;
  }
  local_178.Hash = FCrc::StrCrc32<wchar_t>((wchar_t *)FVar11.Data,0);
  FLocTextHelper::GetExportText
            (pFVar4,param_1,&local_178,&local_160,&local_78,NativeText,&local_118,&local_208,
             &local_228);
  if (local_178.Str.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Str.Data.AllocatorInstance.Data);
  }
  if (local_160.Str.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_160.Str.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_118.MetadataObj.SharedReferenceCount.ReferenceController);
  if (local_118.Text.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Text.Data.AllocatorInstance.Data);
  }
  iVar8 = (param_3->TranslationText).Data.ArrayNum;
  if (local_228.Text.Data.ArrayNum == iVar8) {
    if (1 < local_228.Text.Data.ArrayNum) {
      iVar8 = wcscmp((wchar_t *)local_228.Text.Data.AllocatorInstance.Data,
                     (wchar_t *)(param_3->TranslationText).Data.AllocatorInstance.Data);
      bVar7 = iVar8 == 0;
      goto LAB_146b4c4d7;
    }
  }
  else {
    bVar7 = local_228.Text.Data.ArrayNum + iVar8 == 1;
LAB_146b4c4d7:
    if (!bVar7) {
      iVar8 = (param_3->SourceText).Data.ArrayNum;
      if (local_208.Text.Data.ArrayNum == iVar8) {
        if (local_208.Text.Data.ArrayNum < 2) goto LAB_146b4c5ba;
        iVar8 = wcscmp((wchar_t *)local_208.Text.Data.AllocatorInstance.Data,
                       (wchar_t *)(param_3->SourceText).Data.AllocatorInstance.Data);
        bVar7 = iVar8 == 0;
      }
      else {
        bVar7 = local_208.Text.Data.ArrayNum + iVar8 == 1;
      }
      if (!bVar7) {
        plVar3 = *(longlong **)this;
        pcVar6 = *(code **)(*plVar3 + 0x28);
        ::FString::PrintfImpl
                  (&local_b8,
                   L"Failed to find expected export text for \'%s\': \'%s\', \'%s\', \'%s\', \'%s\'."
                  );
        (*pcVar6)(plVar3,&local_b8,0);
        if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b8.Data.AllocatorInstance.Data);
        }
      }
    }
  }
LAB_146b4c5ba:
  pFVar4 = *(FLocTextHelper **)((longlong)this + 8);
  pFVar10 = ::FString::FString(&local_48,&param_2->SourceText);
  local_f8.Text.Data.AllocatorInstance.Data = (pFVar10->Data).AllocatorInstance.Data;
  (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.Text.Data.ArrayNum = (pFVar10->Data).ArrayNum;
  local_f8.Text.Data.ArrayMax = (pFVar10->Data).ArrayMax;
  (pFVar10->Data).ArrayNum = 0;
  (pFVar10->Data).ArrayMax = 0;
  local_f8.MetadataObj.Object = (FLocMetadataObject *)0x0;
  local_f8.MetadataObj.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  pFVar5 = (pFVar10->Data).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  local_68.Object = (FLocMetadataObject *)0x0;
  local_68.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  ::FString::FString(&local_130.Str,&param_2->Key);
  FVar11.Data = (FScriptContainerElement *)L"";
  if (local_130.Str.Data.ArrayNum != 0) {
    FVar11.Data = local_130.Str.Data.AllocatorInstance.Data;
  }
  local_130.Hash = FCrc::StrCrc32<wchar_t>((wchar_t *)FVar11.Data,0);
  ::FString::FString(&local_148.Str,&param_2->Namespace);
  FVar11.Data = (FScriptContainerElement *)L"";
  if (local_148.Str.Data.ArrayNum != 0) {
    FVar11.Data = local_148.Str.Data.AllocatorInstance.Data;
  }
  local_148.Hash = FCrc::StrCrc32<wchar_t>((wchar_t *)FVar11.Data,0);
  FLocTextHelper::GetExportText
            (pFVar4,param_1,&local_148,&local_130,&local_68,NativeText,&local_f8,&local_208,
             &local_228);
  if (local_148.Str.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.Str.Data.AllocatorInstance.Data);
  }
  if (local_130.Str.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_130.Str.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f8.MetadataObj.SharedReferenceCount.ReferenceController);
  if (local_f8.Text.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Text.Data.AllocatorInstance.Data);
  }
  iVar8 = (param_3->TranslationText).Data.ArrayNum;
  if (local_228.Text.Data.ArrayNum == iVar8) {
    if (local_228.Text.Data.ArrayNum < 2) goto LAB_146b4c7da;
    iVar8 = wcscmp((wchar_t *)local_228.Text.Data.AllocatorInstance.Data,
                   (wchar_t *)(param_3->TranslationText).Data.AllocatorInstance.Data);
    bVar7 = iVar8 == 0;
  }
  else {
    bVar7 = local_228.Text.Data.ArrayNum + iVar8 == 1;
  }
  if (!bVar7) {
    iVar8 = (param_2->SourceText).Data.ArrayNum;
    if (local_208.Text.Data.ArrayNum == iVar8) {
      if (local_208.Text.Data.ArrayNum < 2) goto LAB_146b4c7da;
      iVar8 = wcscmp((wchar_t *)local_208.Text.Data.AllocatorInstance.Data,
                     (wchar_t *)(param_2->SourceText).Data.AllocatorInstance.Data);
      bVar7 = iVar8 == 0;
    }
    else {
      bVar7 = local_208.Text.Data.ArrayNum + iVar8 == 1;
    }
    if (!bVar7) {
      plVar3 = *(longlong **)this;
      pcVar6 = *(code **)(*plVar3 + 0x28);
      ::FString::PrintfImpl
                (&local_a8,
                 L"Failed to find expected export text for \'%s\': \'%s\', \'%s\', \'%s\', \'%s\'.")
      ;
      (*pcVar6)(plVar3,&local_a8,0);
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
    }
  }
LAB_146b4c7da:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_228.MetadataObj.SharedReferenceCount.ReferenceController);
  if (local_228.Text.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_228.Text.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_208.MetadataObj.SharedReferenceCount.ReferenceController);
  if (local_208.Text.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_208.Text.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_238.SharedReferenceCount.ReferenceController);
  return;
}

// operator() @ 146b4daf0

/* WARNING: Enum "EFormatVersion": Some values do not have unique names */

void __thiscall
`FLocTextHelperTest::RunTest'::__l2::<lambda_3>::operator()(void *this,FString *param_1)

{
  FLocTextHelper *this_00;
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  TTuple<FString,TSharedPtr<FInternationalizationArchive,1>_> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  int local_res8 [2];
  int *local_res10;
  code *local_68;
  int **local_60;
  code *local_58;
  FLocTextHelper **local_50;
  FString local_48;
  FLocTextHelper *local_38;
  FString *local_30;
  code **local_28;
  
  this_00 = *(FLocTextHelper **)((longlong)this + 8);
  local_res10 = local_res8;
  local_60 = &local_res10;
  pTVar6 = (TReferenceControllerBase<1> *)0x0;
  local_res8[0] = 0;
  local_68 = UE::Core::Private::Function::
             TFunctionRefCaller<``FLocTextHelperTest::RunTest'::__l2::<lambda_3>::operator()'::__l2::<lambda_1>,bool,TSharedRef<FArchiveEntry,1>_>
             ::Call;
  pTVar5 = TSet<TTuple<FString,TSharedPtr<FInternationalizationArchive,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FInternationalizationArchive,1>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FString,TSharedPtr<FInternationalizationArchive,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FInternationalizationArchive,1>,0>,FDefaultSetAllocator>
                   *)&this_00->Archives,param_1);
  if (pTVar5 != (TTuple<FString,TSharedPtr<FInternationalizationArchive,1>_> *)0x0) {
    pTVar6 = *(TReferenceControllerBase<1> **)&pTVar5->field_0x18;
    lVar1 = *(longlong *)&pTVar5->field_0x10;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (lVar1 != 0) goto LAB_146b4db98;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Archive.IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\Localization\\Private\\LocTextHelper.cpp"
                     ,0x485,
                     L"Attempted to enumerate translations, but no valid archive could be found for \'%s\'!"
                    );
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_146b4db98:
  local_28 = &local_68;
  local_50 = &local_38;
  local_58 = UE::Core::Private::Function::
             TFunctionRefCaller<`FLocTextHelper::EnumerateTranslations'::__l2::<lambda_1>,bool,TSharedRef<FManifestEntry,1>_>
             ::Call;
  local_38 = this_00;
  local_30 = param_1;
  FLocTextHelper::EnumerateSourceTexts
            (this_00,(TFunctionRef<bool___cdecl(TSharedRef<FManifestEntry,1>)> *)&local_58,true);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  if (**(int **)((longlong)this + 0x10) != local_res8[0]) {
    plVar2 = *(longlong **)this;
    pcVar3 = *(code **)(*plVar2 + 0x28);
    ::FString::PrintfImpl
              (&local_48,
               L"Failed to enumerate the expected number of translations for \'%s\'. Expected: %d. Actual: %d."
              );
    (*pcVar3)(plVar2,&local_48,0);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  return;
}

