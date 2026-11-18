// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 10

// GetTestFlags @ 142ccbb70

EAutomationTestFlags __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_StringIndexCheckWithOffset::
GetTestFlags(FEditorDataStorageUiSorter_Prefix_StringIndexCheckWithOffset *this)

{
  return this->TestFlags;
}

// IsStressTest @ 142ccbb80

bool __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_StringIndexCheckWithOffset::
IsStressTest(FEditorDataStorageUiSorter_Prefix_StringIndexCheckWithOffset *this)

{
  return false;
}

// GetRequiredDeviceNum @ 142ccbb90

uint __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_StringIndexCheckWithOffset::
GetRequiredDeviceNum(FEditorDataStorageUiSorter_Prefix_StringIndexCheckWithOffset *this)

{
  return 1;
}

// GetTestSourceFileName @ 142ccbba0

FString * __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_StringIndexCheckWithOffset::
GetTestSourceFileName
          (FEditorDataStorageUiSorter_Prefix_StringIndexCheckWithOffset *this,
          FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Tests\\Elements\\Framework\\TypedElementDataStorageUiSorterTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 142ccbbd0

int __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_StringIndexCheckWithOffset::
GetTestSourceFileLine(FEditorDataStorageUiSorter_Prefix_StringIndexCheckWithOffset *this)

{
  return 0x222;
}

// GetTests @ 142ccbbe0

/* WARNING: Removing unreachable block (ram,0x000142ccbd5e) */

void __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_StringIndexCheckWithOffset::
GetTests(FEditorDataStorageUiSorter_Prefix_StringIndexCheckWithOffset *this,
        TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
        TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  FString *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  undefined8 local_18;
  undefined8 local_10;
  
  pFVar1 = &this->PrettyNameDotNotation;
  pFVar5 = (param_1->AllocatorInstance).Data;
  if (((pFVar5 <= pFVar1) && (pFVar1 < pFVar5 + (longlong)param_1->ArrayMax * 0x10)) &&
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
    iVar4 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar4 + 1;
  ::FString::FString((FString *)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 0x10),pFVar1)
  ;
  pFVar5 = (param_2->AllocatorInstance).Data;
  local_18 = 0;
  local_10 = 0;
  if (((pFVar5 <= (FScriptContainerElement *)&local_18) &&
      ((FScriptContainerElement *)&local_18 < pFVar5 + (longlong)param_2->ArrayMax * 0x10)) &&
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
  iVar4 = param_2->ArrayNum;
  if (iVar4 == param_2->ArrayMax) {
    iVar4 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar4 + 1;
  pFVar5 = (param_2->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
  *(undefined8 *)pFVar5 = 0;
  *(undefined8 *)pFVar5 = local_18;
  *(undefined4 *)(pFVar5 + 8) = (undefined4)local_10;
  *(undefined4 *)(pFVar5 + 0xc) = local_10._4_4_;
  return;
}

// RunTest @ 142ccbd80

bool __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_StringIndexCheckWithOffset::
RunTest(FEditorDataStorageUiSorter_Prefix_StringIndexCheckWithOffset *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 142ccbdb0

FString * __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_StringIndexCheckWithOffset::
GetBeautifiedTestName
          (FEditorDataStorageUiSorter_Prefix_StringIndexCheckWithOffset *this,
          FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FEditorDataStorageUiSorter_Prefix_StringIndexCheckWithOffset @ 142ce0f70

FEditorDataStorageUiSorter_Prefix_StringIndexCheckWithOffset * __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_StringIndexCheckWithOffset::
FEditorDataStorageUiSorter_Prefix_StringIndexCheckWithOffset
          (FEditorDataStorageUiSorter_Prefix_StringIndexCheckWithOffset *this,FString *param_1)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  EAutomationTestFlags EVar3;
  FString *pFVar4;
  FAutomationTestFramework *this_00;
  longlong lVar5;
  FString local_28;
  FString local_18;
  
  FAutomationTestBase::FAutomationTestBase((FAutomationTestBase *)this,param_1,false);
  this->_padding_ =
       (longlong)
       &
       ___7FEditorDataStorageUiSorter_Prefix_StringIndexCheckWithOffset_Tests_DataStorage_Editor_UE__6B_
  ;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][EngineFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,
                              "Editor::DataStorage::FColumnSorterInterface_Prefix_StringIndexCheckWithOffset"
                             );
  pFVar4 = ::FString::Replace(pFVar4,&local_18,L"::",L".",IgnoreCase);
  if (pFVar1 != pFVar4) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->PrettyNameDotNotation).Data.ArrayNum = (pFVar4->Data).ArrayNum;
    (this->PrettyNameDotNotation).Data.ArrayMax = (pFVar4->Data).ArrayMax;
    (pFVar4->Data).ArrayNum = 0;
    (pFVar4->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  EVar3 = this->TestFlags;
  if ((EVar3 & (ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext)) == None
     ) {
    EVar3 = EVar3 | (ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext);
    this->TestFlags = EVar3;
  }
  if ((EVar3 & (NegativeFilter|StressFilter|PerfFilter|ProductFilter|EngineFilter|SmokeFilter)) ==
      None) {
    this->TestFlags = EVar3 | EngineFilter;
  }
  this_00 = FAutomationTestFramework::Get();
  ::FString::FString(&local_18,"[ApplicationContextMask][EngineFilter]");
  local_28.Data.ArrayNum = (this->PrettyNameDotNotation).Data.ArrayNum;
  lVar5 = (longlong)local_28.Data.ArrayNum;
  pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_28.Data.ArrayNum == 0) {
    local_28.Data.ArrayMax = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_28.Data.ArrayNum,0,(ForAnyElementType *)&local_28,local_28.Data.ArrayNum,
               &local_28.Data.ArrayMax);
    memcpy(local_28.Data.AllocatorInstance.Data,pFVar2,lVar5 * 2);
  }
  FAutomationTestFramework::RegisterAutomationTestTags(this_00,&local_28,&local_18,true);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return this;
}

// TestBody @ 142d03a90

void __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_StringIndexCheckWithOffset::
TestBody(FEditorDataStorageUiSorter_Prefix_StringIndexCheckWithOffset *this,FString *param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  ulonglong uVar3;
  FName FVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  IModularFeatures *pIVar8;
  longlong lVar9;
  FPrefixInfo *pFVar10;
  FAutomationTestFramework *pFVar11;
  longlong lVar12;
  undefined **local_498;
  ForAnyElementType local_490;
  undefined8 local_488;
  ulong64 local_480;
  undefined8 uStack_478;
  undefined ***local_470;
  undefined8 uStack_468;
  undefined2 local_460;
  undefined2 uStack_45e;
  undefined4 uStack_45c;
  FScriptContainerElement *pFStack_458;
  undefined8 uStack_450;
  ushort local_448;
  undefined2 uStack_446;
  undefined4 uStack_444;
  FScriptContainerElement *pFStack_440;
  undefined8 uStack_438;
  undefined2 local_430;
  undefined2 uStack_42e;
  undefined4 uStack_42c;
  FScriptContainerElement *pFStack_428;
  undefined8 uStack_420;
  undefined2 local_418;
  undefined2 uStack_416;
  undefined4 uStack_414;
  FScriptContainerElement *pFStack_410;
  undefined8 uStack_408;
  undefined2 local_400;
  undefined2 uStack_3fe;
  undefined4 uStack_3fc;
  FScriptContainerElement *pFStack_3f8;
  undefined8 uStack_3f0;
  ushort local_3e8;
  undefined2 uStack_3e6;
  undefined4 uStack_3e4;
  FScriptContainerElement *pFStack_3e0;
  undefined8 uStack_3d8;
  FString local_3d0;
  FString local_3c0;
  FString local_3b0;
  FString local_3a0;
  FString local_390;
  FString local_380;
  undefined ***local_370;
  undefined4 local_368;
  FString local_360;
  FString local_350;
  FScriptContainerElement *local_340;
  int iStack_338;
  undefined4 uStack_334;
  undefined ***local_330;
  undefined4 local_328;
  FString local_320;
  FString local_310;
  undefined ***local_300;
  undefined4 local_2f8;
  FString local_2f0;
  FString local_2e0;
  FScriptContainerElement *local_2d0;
  int iStack_2c8;
  undefined4 uStack_2c4;
  undefined ***local_2c0;
  undefined4 local_2b8;
  FString local_2b0;
  FString local_2a0;
  undefined ***local_290;
  undefined4 local_288;
  FString local_280;
  FString local_270;
  FScriptContainerElement *local_260;
  int iStack_258;
  undefined4 uStack_254;
  undefined ***local_250;
  undefined4 local_248;
  FString local_240;
  FString local_230;
  undefined ***local_220;
  undefined4 local_218;
  FString local_210;
  FString local_200;
  FScriptContainerElement *local_1f0;
  int iStack_1e8;
  undefined4 uStack_1e4;
  undefined ***local_1e0;
  undefined4 local_1d8;
  FString local_1d0;
  FString local_1c0;
  undefined ***local_1b0;
  undefined4 local_1a8;
  FString local_1a0;
  FString local_190;
  FScriptContainerElement *local_180;
  int iStack_178;
  undefined4 uStack_174;
  FString local_170;
  FString local_160;
  undefined ***local_150;
  undefined4 local_148;
  FString local_140;
  FString local_130;
  FScriptContainerElement *local_120;
  int iStack_118;
  undefined4 uStack_114;
  undefined ***local_110;
  undefined4 local_108;
  FString local_100;
  FString local_f0;
  FPrefixInfo local_e0;
  FPrefixInfo local_d0;
  FPrefixInfo local_c0;
  FPrefixInfo local_b0;
  FPrefixInfo local_a0;
  FPrefixInfo local_90;
  FPrefixInfo local_80;
  FPrefixInfo local_70;
  FPrefixInfo local_60;
  FPrefixInfo local_50;
  FPrefixInfo local_40;
  FPrefixInfo local_30;
  
  FVar4 = StorageFeatureName;
  pIVar8 = IModularFeatures::Get();
  iVar6 = (**(code **)((longlong)*pIVar8 + 0x18))(pIVar8,FVar4);
  if (0 < iVar6) {
    pIVar8 = IModularFeatures::Get();
    lVar9 = (**(code **)((longlong)*pIVar8 + 0x20))(pIVar8,FVar4,0);
    iVar6 = 0;
    lVar12 = lVar9 + -8;
    if (lVar9 == 0) {
      lVar12 = 0;
    }
    if (lVar12 != 0) {
      local_498 = &
                  ___7__FMultiValueTestSorter_GIU__TSortStringView_UFSortCaseSensitive_DataStorage_Editor_UE__V__TStringView__W___DataStorage_Editor_UE___Tests_DataStorage_Editor_UE__6B_
      ;
      local_490.Data = (FScriptContainerElement *)0x0;
      local_488 = 0;
      ::FString::FString(&local_3d0,L"a");
      local_180 = local_3d0.Data.AllocatorInstance.Data;
      local_448 = 0xaaaa;
      uStack_444 = 0xbbbbcccc;
      iStack_178 = local_3d0.Data.ArrayNum + -1;
      if (local_3d0.Data.ArrayNum == 0) {
        iStack_178 = iVar6;
      }
      uStack_438 = CONCAT44(uStack_174,iStack_178);
      pFStack_440 = local_3d0.Data.AllocatorInstance.Data;
      if (((local_490.Data <= (FScriptContainerElement *)&local_448) &&
          ((FScriptContainerElement *)&local_448 < local_490.Data + (longlong)local_488._4_4_ * 0x18
          )) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar7 = (int)local_488;
      if ((int)local_488 == local_488._4_4_) {
        iVar7 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,&local_490,(int *)((longlong)&local_488 + 4));
      }
      local_488 = CONCAT44(local_488._4_4_,iVar7 + 1);
      *(ulonglong *)(local_490.Data + (longlong)iVar7 * 0x18) =
           CONCAT44(uStack_444,CONCAT22(uStack_446,local_448));
      *(FScriptContainerElement **)(local_490.Data + (longlong)iVar7 * 0x18 + 8) = pFStack_440;
      *(undefined8 *)(local_490.Data + (longlong)iVar7 * 0x18 + 0x10) = uStack_438;
      if ((iVar7 + 1 < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_150 = &local_498;
      local_148 = 0;
      pFVar10 = `UE::Editor::DataStorage::Tests::
                FMultiValueTestSorter<unsigned_short,unsigned_int,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>_>
                ::CalculatePrefix'::__l2::<lambda_1>::
                operator()<unsigned_short_const_&,unsigned_int_const_&,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>_const_&>
                          (&local_150,&local_80,(ushort *)local_490.Data,
                           (uint *)(local_490.Data + 4),
                           (TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>
                            *)(local_490.Data + 8));
      local_480 = pFVar10->Prefix;
      uStack_478 = *(undefined8 *)&pFVar10->bHasRemainingBytes;
      if (local_480 != 0xaaaabbbbcccc0061) {
        pFVar11 = FAutomationTestFramework::Get();
        pFVar1 = pFVar11->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString(&local_140,L"Condition failed");
        (*pcVar2)(pFVar1,&local_140);
        if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_140.Data.AllocatorInstance.Data);
        }
      }
      if ((char)uStack_478 != '\0') {
        pFVar11 = FAutomationTestFramework::Get();
        pFVar1 = pFVar11->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString(&local_130,L"Condition failed");
        (*pcVar2)(pFVar1,&local_130);
        if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_130.Data.AllocatorInstance.Data);
        }
      }
      uVar3 = local_488 >> 0x20;
      local_488 = local_488 & 0xffffffff00000000;
      if ((int)uVar3 != 0) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,&local_490,0,(int *)((longlong)&local_488 + 4));
      }
      if (local_3d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3d0.Data.AllocatorInstance.Data);
      }
      ::FString::FString(&local_3c0,L"ab");
      local_120 = local_3c0.Data.AllocatorInstance.Data;
      local_430 = 0xaaaa;
      uStack_42c = 0xbbbbcccc;
      iStack_118 = local_3c0.Data.ArrayNum + -1;
      if (local_3c0.Data.ArrayNum == 0) {
        iStack_118 = iVar6;
      }
      uStack_420 = CONCAT44(uStack_114,iStack_118);
      pFStack_428 = local_3c0.Data.AllocatorInstance.Data;
      if (((local_490.Data <= (FScriptContainerElement *)&local_430) &&
          ((FScriptContainerElement *)&local_430 < local_490.Data + (longlong)local_488._4_4_ * 0x18
          )) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar7 = (int)local_488;
      if ((int)local_488 == local_488._4_4_) {
        iVar7 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,&local_490,(int *)((longlong)&local_488 + 4));
      }
      local_488 = CONCAT44(local_488._4_4_,iVar7 + 1);
      *(ulonglong *)(local_490.Data + (longlong)iVar7 * 0x18) =
           CONCAT44(uStack_42c,CONCAT22(uStack_42e,local_430));
      *(FScriptContainerElement **)(local_490.Data + (longlong)iVar7 * 0x18 + 8) = pFStack_428;
      *(undefined8 *)(local_490.Data + (longlong)iVar7 * 0x18 + 0x10) = uStack_420;
      if ((iVar7 + 1 < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_110 = &local_498;
      local_108 = 0;
      pFVar10 = `UE::Editor::DataStorage::Tests::
                FMultiValueTestSorter<unsigned_short,unsigned_int,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>_>
                ::CalculatePrefix'::__l2::<lambda_1>::
                operator()<unsigned_short_const_&,unsigned_int_const_&,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>_const_&>
                          (&local_110,&local_90,(ushort *)local_490.Data,
                           (uint *)(local_490.Data + 4),
                           (TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>
                            *)(local_490.Data + 8));
      local_480 = pFVar10->Prefix;
      uStack_478 = *(undefined8 *)&pFVar10->bHasRemainingBytes;
      if (local_480 != 0xaaaabbbbcccc0061) {
        pFVar11 = FAutomationTestFramework::Get();
        pFVar1 = pFVar11->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString(&local_100,L"Condition failed");
        (*pcVar2)(pFVar1,&local_100,0);
        if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_100.Data.AllocatorInstance.Data);
        }
      }
      if ((char)uStack_478 != '\x01') {
        pFVar11 = FAutomationTestFramework::Get();
        pFVar1 = pFVar11->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString(&local_f0,L"Condition failed");
        (*pcVar2)(pFVar1,&local_f0,0);
        if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f0.Data.AllocatorInstance.Data);
        }
      }
      if (((int)local_488 < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_370 = &local_498;
      local_368 = 8;
      pFVar10 = `UE::Editor::DataStorage::Tests::
                FMultiValueTestSorter<unsigned_short,unsigned_int,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>_>
                ::CalculatePrefix'::__l2::<lambda_1>::
                operator()<unsigned_short_const_&,unsigned_int_const_&,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>_const_&>
                          (&local_370,&local_b0,(ushort *)local_490.Data,
                           (uint *)(local_490.Data + 4),
                           (TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>
                            *)(local_490.Data + 8));
      local_480 = pFVar10->Prefix;
      uStack_478 = *(undefined8 *)&pFVar10->bHasRemainingBytes;
      if (local_480 != 0x62000000000000) {
        pFVar11 = FAutomationTestFramework::Get();
        pFVar1 = pFVar11->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString(&local_360,L"Condition failed");
        (*pcVar2)(pFVar1,&local_360);
        if (local_360.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_360.Data.AllocatorInstance.Data);
        }
      }
      if ((char)uStack_478 != '\0') {
        pFVar11 = FAutomationTestFramework::Get();
        pFVar1 = pFVar11->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString(&local_350,L"Condition failed");
        (*pcVar2)(pFVar1,&local_350);
        if (local_350.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_350.Data.AllocatorInstance.Data);
        }
      }
      uVar3 = local_488 >> 0x20;
      local_488 = local_488 & 0xffffffff00000000;
      if ((int)uVar3 != 0) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,&local_490,0,(int *)((longlong)&local_488 + 4));
      }
      if (local_3c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3c0.Data.AllocatorInstance.Data);
      }
      ::FString::FString(&local_3b0,L"abc");
      local_340 = local_3b0.Data.AllocatorInstance.Data;
      local_418 = 0xaaaa;
      uStack_414 = 0xbbbbcccc;
      iStack_338 = local_3b0.Data.ArrayNum + -1;
      if (local_3b0.Data.ArrayNum == 0) {
        iStack_338 = iVar6;
      }
      uStack_408 = CONCAT44(uStack_334,iStack_338);
      pFStack_410 = local_3b0.Data.AllocatorInstance.Data;
      if (((local_490.Data <= (FScriptContainerElement *)&local_418) &&
          ((FScriptContainerElement *)&local_418 < local_490.Data + (longlong)local_488._4_4_ * 0x18
          )) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar7 = (int)local_488;
      if ((int)local_488 == local_488._4_4_) {
        iVar7 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,&local_490,(int *)((longlong)&local_488 + 4));
      }
      local_488 = CONCAT44(local_488._4_4_,iVar7 + 1);
      *(ulonglong *)(local_490.Data + (longlong)iVar7 * 0x18) =
           CONCAT44(uStack_414,CONCAT22(uStack_416,local_418));
      *(FScriptContainerElement **)(local_490.Data + (longlong)iVar7 * 0x18 + 8) = pFStack_410;
      *(undefined8 *)(local_490.Data + (longlong)iVar7 * 0x18 + 0x10) = uStack_408;
      if ((iVar7 + 1 < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_330 = &local_498;
      local_328 = 0;
      pFVar10 = `UE::Editor::DataStorage::Tests::
                FMultiValueTestSorter<unsigned_short,unsigned_int,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>_>
                ::CalculatePrefix'::__l2::<lambda_1>::
                operator()<unsigned_short_const_&,unsigned_int_const_&,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>_const_&>
                          (&local_330,&local_70,(ushort *)local_490.Data,
                           (uint *)(local_490.Data + 4),
                           (TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>
                            *)(local_490.Data + 8));
      local_480 = pFVar10->Prefix;
      uStack_478 = *(undefined8 *)&pFVar10->bHasRemainingBytes;
      if (local_480 != 0xaaaabbbbcccc0061) {
        pFVar11 = FAutomationTestFramework::Get();
        pFVar1 = pFVar11->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString(&local_320,L"Condition failed");
        (*pcVar2)(pFVar1,&local_320,0);
        if (local_320.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_320.Data.AllocatorInstance.Data);
        }
      }
      if ((char)uStack_478 != '\x01') {
        pFVar11 = FAutomationTestFramework::Get();
        pFVar1 = pFVar11->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString(&local_310,L"Condition failed");
        (*pcVar2)(pFVar1,&local_310,0);
        if (local_310.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_310.Data.AllocatorInstance.Data);
        }
      }
      if (((int)local_488 < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_300 = &local_498;
      local_2f8 = 8;
      pFVar10 = `UE::Editor::DataStorage::Tests::
                FMultiValueTestSorter<unsigned_short,unsigned_int,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>_>
                ::CalculatePrefix'::__l2::<lambda_1>::
                operator()<unsigned_short_const_&,unsigned_int_const_&,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>_const_&>
                          (&local_300,&local_60,(ushort *)local_490.Data,
                           (uint *)(local_490.Data + 4),
                           (TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>
                            *)(local_490.Data + 8));
      local_480 = pFVar10->Prefix;
      uStack_478 = *(undefined8 *)&pFVar10->bHasRemainingBytes;
      if (local_480 != 0x62006300000000) {
        pFVar11 = FAutomationTestFramework::Get();
        pFVar1 = pFVar11->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString(&local_2f0,L"Condition failed");
        (*pcVar2)(pFVar1,&local_2f0);
        if (local_2f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2f0.Data.AllocatorInstance.Data);
        }
      }
      if ((char)uStack_478 != '\0') {
        pFVar11 = FAutomationTestFramework::Get();
        pFVar1 = pFVar11->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString(&local_2e0,L"Condition failed");
        (*pcVar2)(pFVar1,&local_2e0);
        if (local_2e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2e0.Data.AllocatorInstance.Data);
        }
      }
      uVar3 = local_488 >> 0x20;
      local_488 = local_488 & 0xffffffff00000000;
      if ((int)uVar3 != 0) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,&local_490,0,(int *)((longlong)&local_488 + 4));
      }
      if (local_3b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3b0.Data.AllocatorInstance.Data);
      }
      ::FString::FString(&local_3a0,L"abcd");
      local_2d0 = local_3a0.Data.AllocatorInstance.Data;
      local_400 = 0xaaaa;
      uStack_3fc = 0xbbbbcccc;
      iStack_2c8 = local_3a0.Data.ArrayNum + -1;
      if (local_3a0.Data.ArrayNum == 0) {
        iStack_2c8 = iVar6;
      }
      uStack_3f0 = CONCAT44(uStack_2c4,iStack_2c8);
      pFStack_3f8 = local_3a0.Data.AllocatorInstance.Data;
      if (((local_490.Data <= (FScriptContainerElement *)&local_400) &&
          ((FScriptContainerElement *)&local_400 < local_490.Data + (longlong)local_488._4_4_ * 0x18
          )) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar7 = (int)local_488;
      if ((int)local_488 == local_488._4_4_) {
        iVar7 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,&local_490,(int *)((longlong)&local_488 + 4));
      }
      local_488 = CONCAT44(local_488._4_4_,iVar7 + 1);
      *(ulonglong *)(local_490.Data + (longlong)iVar7 * 0x18) =
           CONCAT44(uStack_3fc,CONCAT22(uStack_3fe,local_400));
      *(FScriptContainerElement **)(local_490.Data + (longlong)iVar7 * 0x18 + 8) = pFStack_3f8;
      *(undefined8 *)(local_490.Data + (longlong)iVar7 * 0x18 + 0x10) = uStack_3f0;
      if ((iVar7 + 1 < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_2c0 = &local_498;
      local_2b8 = 0;
      pFVar10 = `UE::Editor::DataStorage::Tests::
                FMultiValueTestSorter<unsigned_short,unsigned_int,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>_>
                ::CalculatePrefix'::__l2::<lambda_1>::
                operator()<unsigned_short_const_&,unsigned_int_const_&,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>_const_&>
                          (&local_2c0,&local_50,(ushort *)local_490.Data,
                           (uint *)(local_490.Data + 4),
                           (TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>
                            *)(local_490.Data + 8));
      local_480 = pFVar10->Prefix;
      uStack_478 = *(undefined8 *)&pFVar10->bHasRemainingBytes;
      if (local_480 != 0xaaaabbbbcccc0061) {
        pFVar11 = FAutomationTestFramework::Get();
        pFVar1 = pFVar11->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString(&local_2b0,L"Condition failed");
        (*pcVar2)(pFVar1,&local_2b0,0);
        if (local_2b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2b0.Data.AllocatorInstance.Data);
        }
      }
      if ((char)uStack_478 != '\x01') {
        pFVar11 = FAutomationTestFramework::Get();
        pFVar1 = pFVar11->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString(&local_2a0,L"Condition failed");
        (*pcVar2)(pFVar1,&local_2a0,0);
        if (local_2a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2a0.Data.AllocatorInstance.Data);
        }
      }
      if (((int)local_488 < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_290 = &local_498;
      local_288 = 8;
      pFVar10 = `UE::Editor::DataStorage::Tests::
                FMultiValueTestSorter<unsigned_short,unsigned_int,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>_>
                ::CalculatePrefix'::__l2::<lambda_1>::
                operator()<unsigned_short_const_&,unsigned_int_const_&,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>_const_&>
                          (&local_290,&local_40,(ushort *)local_490.Data,
                           (uint *)(local_490.Data + 4),
                           (TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>
                            *)(local_490.Data + 8));
      local_480 = pFVar10->Prefix;
      uStack_478 = *(undefined8 *)&pFVar10->bHasRemainingBytes;
      if (local_480 != 0x62006300640000) {
        pFVar11 = FAutomationTestFramework::Get();
        pFVar1 = pFVar11->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString(&local_280,L"Condition failed");
        (*pcVar2)(pFVar1,&local_280);
        if (local_280.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_280.Data.AllocatorInstance.Data);
        }
      }
      if ((char)uStack_478 != '\0') {
        pFVar11 = FAutomationTestFramework::Get();
        pFVar1 = pFVar11->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString(&local_270,L"Condition failed");
        (*pcVar2)(pFVar1,&local_270);
        if (local_270.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_270.Data.AllocatorInstance.Data);
        }
      }
      uVar3 = local_488 >> 0x20;
      local_488 = local_488 & 0xffffffff00000000;
      if ((int)uVar3 != 0) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,&local_490,0,(int *)((longlong)&local_488 + 4));
      }
      if (local_3a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3a0.Data.AllocatorInstance.Data);
      }
      ::FString::FString(&local_390,L"abcde");
      local_260 = local_390.Data.AllocatorInstance.Data;
      local_3e8 = 0xaaaa;
      uStack_3e4 = 0xbbbbcccc;
      iStack_258 = local_390.Data.ArrayNum + -1;
      if (local_390.Data.ArrayNum == 0) {
        iStack_258 = iVar6;
      }
      uStack_3d8 = CONCAT44(uStack_254,iStack_258);
      pFStack_3e0 = local_390.Data.AllocatorInstance.Data;
      if (((local_490.Data <= (FScriptContainerElement *)&local_3e8) &&
          ((FScriptContainerElement *)&local_3e8 < local_490.Data + (longlong)local_488._4_4_ * 0x18
          )) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar7 = (int)local_488;
      if ((int)local_488 == local_488._4_4_) {
        iVar7 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,&local_490,(int *)((longlong)&local_488 + 4));
      }
      local_488 = CONCAT44(local_488._4_4_,iVar7 + 1);
      *(ulonglong *)(local_490.Data + (longlong)iVar7 * 0x18) =
           CONCAT44(uStack_3e4,CONCAT22(uStack_3e6,local_3e8));
      *(FScriptContainerElement **)(local_490.Data + (longlong)iVar7 * 0x18 + 8) = pFStack_3e0;
      *(undefined8 *)(local_490.Data + (longlong)iVar7 * 0x18 + 0x10) = uStack_3d8;
      if ((iVar7 + 1 < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_250 = &local_498;
      local_248 = 0;
      pFVar10 = `UE::Editor::DataStorage::Tests::
                FMultiValueTestSorter<unsigned_short,unsigned_int,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>_>
                ::CalculatePrefix'::__l2::<lambda_1>::
                operator()<unsigned_short_const_&,unsigned_int_const_&,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>_const_&>
                          (&local_250,&local_e0,(ushort *)local_490.Data,
                           (uint *)(local_490.Data + 4),
                           (TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>
                            *)(local_490.Data + 8));
      local_480 = pFVar10->Prefix;
      uStack_478 = *(undefined8 *)&pFVar10->bHasRemainingBytes;
      if (local_480 != 0xaaaabbbbcccc0061) {
        pFVar11 = FAutomationTestFramework::Get();
        pFVar1 = pFVar11->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString(&local_240,L"Condition failed");
        (*pcVar2)(pFVar1,&local_240,0);
        if (local_240.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_240.Data.AllocatorInstance.Data);
        }
      }
      if ((char)uStack_478 != '\x01') {
        pFVar11 = FAutomationTestFramework::Get();
        pFVar1 = pFVar11->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString(&local_230,L"Condition failed");
        (*pcVar2)(pFVar1,&local_230,0);
        if (local_230.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_230.Data.AllocatorInstance.Data);
        }
      }
      if (((int)local_488 < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_220 = &local_498;
      local_218 = 8;
      pFVar10 = `UE::Editor::DataStorage::Tests::
                FMultiValueTestSorter<unsigned_short,unsigned_int,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>_>
                ::CalculatePrefix'::__l2::<lambda_1>::
                operator()<unsigned_short_const_&,unsigned_int_const_&,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>_const_&>
                          (&local_220,&local_d0,(ushort *)local_490.Data,
                           (uint *)(local_490.Data + 4),
                           (TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>
                            *)(local_490.Data + 8));
      local_480 = pFVar10->Prefix;
      uStack_478 = *(undefined8 *)&pFVar10->bHasRemainingBytes;
      if (local_480 != 0x62006300640065) {
        pFVar11 = FAutomationTestFramework::Get();
        pFVar1 = pFVar11->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString(&local_210,L"Condition failed");
        (*pcVar2)(pFVar1,&local_210);
        if (local_210.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_210.Data.AllocatorInstance.Data);
        }
      }
      if ((char)uStack_478 != '\0') {
        pFVar11 = FAutomationTestFramework::Get();
        pFVar1 = pFVar11->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString(&local_200,L"Condition failed");
        (*pcVar2)(pFVar1,&local_200);
        if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_200.Data.AllocatorInstance.Data);
        }
      }
      uVar3 = local_488 >> 0x20;
      local_488 = local_488 & 0xffffffff00000000;
      if ((int)uVar3 != 0) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,&local_490,0,(int *)((longlong)&local_488 + 4));
      }
      if (local_390.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_390.Data.AllocatorInstance.Data);
      }
      ::FString::FString(&local_380,L"abcdef");
      local_1f0 = local_380.Data.AllocatorInstance.Data;
      local_460 = 0xaaaa;
      uStack_45c = 0xbbbbcccc;
      iStack_1e8 = local_380.Data.ArrayNum + -1;
      if (local_380.Data.ArrayNum == 0) {
        iStack_1e8 = iVar6;
      }
      uStack_450 = CONCAT44(uStack_1e4,iStack_1e8);
      pFStack_458 = local_380.Data.AllocatorInstance.Data;
      if (((local_490.Data <= (FScriptContainerElement *)&local_460) &&
          ((FScriptContainerElement *)&local_460 < local_490.Data + (longlong)local_488._4_4_ * 0x18
          )) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar6 = (int)local_488;
      if ((int)local_488 == local_488._4_4_) {
        iVar6 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,&local_490,(int *)((longlong)&local_488 + 4));
      }
      local_488 = CONCAT44(local_488._4_4_,iVar6 + 1);
      *(ulonglong *)(local_490.Data + (longlong)iVar6 * 0x18) =
           CONCAT44(uStack_45c,CONCAT22(uStack_45e,local_460));
      *(FScriptContainerElement **)(local_490.Data + (longlong)iVar6 * 0x18 + 8) = pFStack_458;
      *(undefined8 *)(local_490.Data + (longlong)iVar6 * 0x18 + 0x10) = uStack_450;
      if ((iVar6 + 1 < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_1e0 = &local_498;
      local_1d8 = 0;
      pFVar10 = `UE::Editor::DataStorage::Tests::
                FMultiValueTestSorter<unsigned_short,unsigned_int,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>_>
                ::CalculatePrefix'::__l2::<lambda_1>::
                operator()<unsigned_short_const_&,unsigned_int_const_&,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>_const_&>
                          (&local_1e0,&local_c0,(ushort *)local_490.Data,
                           (uint *)(local_490.Data + 4),
                           (TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>
                            *)(local_490.Data + 8));
      local_480 = pFVar10->Prefix;
      uStack_478 = *(undefined8 *)&pFVar10->bHasRemainingBytes;
      if (local_480 != 0xaaaabbbbcccc0061) {
        pFVar11 = FAutomationTestFramework::Get();
        pFVar1 = pFVar11->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString(&local_1d0,L"Condition failed");
        (*pcVar2)(pFVar1,&local_1d0,0);
        if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
        }
      }
      if ((char)uStack_478 != '\x01') {
        pFVar11 = FAutomationTestFramework::Get();
        pFVar1 = pFVar11->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString(&local_1c0,L"Condition failed");
        (*pcVar2)(pFVar1,&local_1c0,0);
        if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
        }
      }
      if (((int)local_488 < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_1b0 = &local_498;
      local_1a8 = 8;
      pFVar10 = `UE::Editor::DataStorage::Tests::
                FMultiValueTestSorter<unsigned_short,unsigned_int,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>_>
                ::CalculatePrefix'::__l2::<lambda_1>::
                operator()<unsigned_short_const_&,unsigned_int_const_&,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>_const_&>
                          (&local_1b0,&local_30,(ushort *)local_490.Data,
                           (uint *)(local_490.Data + 4),
                           (TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>
                            *)(local_490.Data + 8));
      local_480 = pFVar10->Prefix;
      uStack_478 = *(undefined8 *)&pFVar10->bHasRemainingBytes;
      if (local_480 != 0x62006300640065) {
        pFVar11 = FAutomationTestFramework::Get();
        pFVar1 = pFVar11->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString(&local_1a0,L"Condition failed");
        (*pcVar2)(pFVar1,&local_1a0,0);
        if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
        }
      }
      if ((char)uStack_478 != '\x01') {
        pFVar11 = FAutomationTestFramework::Get();
        pFVar1 = pFVar11->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString(&local_190,L"Condition failed");
        (*pcVar2)(pFVar1,&local_190,0);
        if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_190.Data.AllocatorInstance.Data);
        }
      }
      if (((int)local_488 < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_470 = &local_498;
      uStack_468 = CONCAT44(uStack_468._4_4_,0x10);
      pFVar10 = `UE::Editor::DataStorage::Tests::
                FMultiValueTestSorter<unsigned_short,unsigned_int,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>_>
                ::CalculatePrefix'::__l2::<lambda_1>::
                operator()<unsigned_short_const_&,unsigned_int_const_&,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>_const_&>
                          (&local_470,&local_a0,(ushort *)local_490.Data,
                           (uint *)(local_490.Data + 4),
                           (TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>
                            *)(local_490.Data + 8));
      local_470 = (undefined ***)pFVar10->Prefix;
      uStack_468 = *(undefined8 *)&pFVar10->bHasRemainingBytes;
      if (local_470 != (undefined ***)0x66000000000000) {
        pFVar11 = FAutomationTestFramework::Get();
        pFVar1 = pFVar11->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString(&local_170,L"Condition failed");
        (*pcVar2)(pFVar1,&local_170);
        if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_170.Data.AllocatorInstance.Data);
        }
      }
      if ((char)uStack_468 != '\0') {
        pFVar11 = FAutomationTestFramework::Get();
        pFVar1 = pFVar11->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString(&local_160,L"Condition failed");
        (*pcVar2)(pFVar1,&local_160);
        if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_160.Data.AllocatorInstance.Data);
        }
      }
      uVar3 = local_488 >> 0x20;
      local_488 = local_488 & 0xffffffff00000000;
      if ((int)uVar3 != 0) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,&local_490,0,(int *)((longlong)&local_488 + 4));
      }
      if (local_380.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_380.Data.AllocatorInstance.Data);
      }
      if (local_490.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_490.Data);
      }
    }
  }
  return;
}

