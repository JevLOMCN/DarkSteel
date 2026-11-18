// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 10

// GetTestFlags @ 142ccbe30

EAutomationTestFlags __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_MultiVariableSizedValues::
GetTestFlags(FEditorDataStorageUiSorter_Prefix_MultiVariableSizedValues *this)

{
  return this->TestFlags;
}

// IsStressTest @ 142ccbe40

bool __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_MultiVariableSizedValues::
IsStressTest(FEditorDataStorageUiSorter_Prefix_MultiVariableSizedValues *this)

{
  return false;
}

// GetRequiredDeviceNum @ 142ccbe50

uint __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_MultiVariableSizedValues::
GetRequiredDeviceNum(FEditorDataStorageUiSorter_Prefix_MultiVariableSizedValues *this)

{
  return 1;
}

// GetTestSourceFileName @ 142ccbe60

FString * __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_MultiVariableSizedValues::
GetTestSourceFileName
          (FEditorDataStorageUiSorter_Prefix_MultiVariableSizedValues *this,
          FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Tests\\Elements\\Framework\\TypedElementDataStorageUiSorterTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 142ccbe90

int __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_MultiVariableSizedValues::
GetTestSourceFileLine(FEditorDataStorageUiSorter_Prefix_MultiVariableSizedValues *this)

{
  return 0x132;
}

// GetTests @ 142ccbea0

/* WARNING: Removing unreachable block (ram,0x000142ccc01e) */

void __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_MultiVariableSizedValues::GetTests
          (FEditorDataStorageUiSorter_Prefix_MultiVariableSizedValues *this,
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

// RunTest @ 142ccc040

bool __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_MultiVariableSizedValues::RunTest
          (FEditorDataStorageUiSorter_Prefix_MultiVariableSizedValues *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 142ccc070

FString * __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_MultiVariableSizedValues::
GetBeautifiedTestName
          (FEditorDataStorageUiSorter_Prefix_MultiVariableSizedValues *this,
          FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FEditorDataStorageUiSorter_Prefix_MultiVariableSizedValues @ 142ce0bd0

FEditorDataStorageUiSorter_Prefix_MultiVariableSizedValues * __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_MultiVariableSizedValues::
FEditorDataStorageUiSorter_Prefix_MultiVariableSizedValues
          (FEditorDataStorageUiSorter_Prefix_MultiVariableSizedValues *this,FString *param_1)

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
       ___7FEditorDataStorageUiSorter_Prefix_MultiVariableSizedValues_Tests_DataStorage_Editor_UE__6B_
  ;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][EngineFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,
                              "Editor::DataStorage::FColumnSorterInterface_Prefix_MultiVariableSizedValues"
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

// TestBody @ 142d015c0

void __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_MultiVariableSizedValues::TestBody
          (FEditorDataStorageUiSorter_Prefix_MultiVariableSizedValues *this,FString *param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  FName FVar4;
  bool bVar5;
  int iVar6;
  IModularFeatures *pIVar7;
  longlong lVar8;
  FAutomationTestFramework *pFVar9;
  FPrefixInfo *pFVar10;
  ForAnyElementType FVar11;
  ICoreProvider *pIVar12;
  undefined1 uStackX_1d;
  undefined4 uStackX_24;
  ForAnyElementType local_470;
  undefined8 local_468;
  undefined **local_460;
  ForAnyElementType local_458;
  undefined8 local_450;
  undefined **local_448;
  ForAnyElementType local_440;
  undefined8 local_438;
  undefined4 local_430;
  undefined1 uStack_42c;
  undefined1 uStack_42b;
  undefined2 uStack_42a;
  undefined4 local_428;
  undefined **local_420;
  ForAnyElementType local_418;
  undefined8 local_410;
  FMultiValueTestSorter<unsigned_int,unsigned_char,unsigned_short,unsigned_int,unsigned___int64,unsigned_short,unsigned_char,unsigned_short>
  local_408;
  FMultiValueTestSorter<unsigned_int,unsigned_char,unsigned_short,unsigned_int,unsigned___int64,unsigned_short>
  local_3f0;
  FMultiValueTestSorter<unsigned_int,unsigned_char,unsigned_short,unsigned_int> local_3d8;
  undefined **local_3c0;
  ForAnyElementType local_3b8;
  undefined8 local_3b0;
  FString local_3a8;
  FString local_398;
  FString local_388;
  FPrefixInfo local_378;
  FPrefixInfo local_368;
  FPrefixInfo local_358;
  FPrefixInfo local_348;
  FPrefixInfo local_338;
  FPrefixInfo local_328;
  FPrefixInfo local_318;
  FPrefixInfo local_308;
  undefined4 local_2f8;
  undefined1 uStack_2f4;
  undefined1 uStack_2f3;
  undefined2 uStack_2f2;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined8 local_2e8;
  undefined2 uStack_2e0;
  undefined1 uStack_2de;
  undefined1 uStack_2dd;
  undefined2 uStack_2dc;
  undefined2 uStack_2da;
  undefined4 local_2d8;
  undefined1 uStack_2d4;
  undefined1 uStack_2d3;
  undefined2 uStack_2d2;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined8 local_2c8;
  undefined4 local_2c0;
  undefined1 uStack_2bc;
  undefined1 uStack_2bb;
  undefined2 uStack_2ba;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined8 local_2b0;
  undefined2 uStack_2a8;
  undefined1 uStack_2a6;
  undefined5 uStack_2a5;
  undefined4 local_2a0;
  undefined1 uStack_29c;
  undefined1 uStack_29b;
  undefined2 uStack_29a;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined8 local_290;
  undefined2 uStack_288;
  undefined6 uStack_286;
  FString local_280;
  FString local_270;
  FString local_260;
  FString local_250;
  FString local_240;
  FString local_230;
  FString local_220;
  FString local_210;
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
  FString local_140;
  FString local_130;
  FString local_120;
  FString local_110;
  FString local_100;
  FString local_f0;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  FPrefixInfo local_b0;
  FPrefixInfo local_a0;
  FPrefixInfo local_90;
  FPrefixInfo local_80;
  FPrefixInfo local_70;
  FPrefixInfo local_60;
  FPrefixInfo local_50;
  
  FVar4 = StorageFeatureName;
  pIVar7 = IModularFeatures::Get();
  iVar6 = (**(code **)((longlong)*pIVar7 + 0x18))(pIVar7,FVar4);
  if (0 < iVar6) {
    pIVar7 = IModularFeatures::Get();
    lVar8 = (**(code **)((longlong)*pIVar7 + 0x20))(pIVar7,FVar4,0);
    pIVar12 = (ICoreProvider *)(lVar8 + -8);
    if (lVar8 == 0) {
      pIVar12 = (ICoreProvider *)0x0;
    }
    if (pIVar12 != (ICoreProvider *)0x0) {
      local_3c0 = &___7__FMultiValueTestSorter_I_Tests_DataStorage_Editor_UE__6B_;
      local_3b8.Data = (FScriptContainerElement *)0x0;
      local_3b0 = 0;
      iVar6 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&local_3b8,(int *)((longlong)&local_3b0 + 4));
      local_3b0 = CONCAT44(local_3b0._4_4_,iVar6 + 1);
      *(undefined4 *)(local_3b8.Data + (longlong)iVar6 * 4) = 0x11223344;
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
      if (*(int *)local_3b8.Data != 0x11223344) {
        pFVar9 = FAutomationTestFramework::Get();
        pFVar1 = pFVar9->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString(&local_280,L"Condition failed");
        (*pcVar2)(pFVar1,&local_280,0);
        if (local_280.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_280.Data.AllocatorInstance.Data);
        }
      }
      if (local_3b8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3b8.Data);
      }
      local_418.Data = (FScriptContainerElement *)0x0;
      local_420 = &___7__FMultiValueTestSorter_IE_Tests_DataStorage_Editor_UE__6B_;
      local_410 = 0;
      uStackX_24 = CONCAT31(uStackX_24._1_3_,0x55);
      iVar6 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&local_418,(int *)((longlong)&local_410 + 4));
      local_410 = CONCAT44(local_410._4_4_,iVar6 + 1);
      *(ulonglong *)(local_418.Data + (longlong)iVar6 * 8) = CONCAT44(uStackX_24,0x11223344);
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
      if (CONCAT41(*(undefined4 *)local_418.Data,local_418.Data[4]) != 0x1122334455) {
        pFVar9 = FAutomationTestFramework::Get();
        pFVar1 = pFVar9->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString(&local_270,L"Condition failed");
        (*pcVar2)(pFVar1,&local_270,0);
        if (local_270.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_270.Data.AllocatorInstance.Data);
        }
      }
      if (local_418.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_418.Data);
      }
      local_440.Data = (FScriptContainerElement *)0x0;
      local_448 = &___7__FMultiValueTestSorter_IEG_Tests_DataStorage_Editor_UE__6B_;
      local_438 = 0;
      iVar6 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&local_440,(int *)((longlong)&local_438 + 4));
      local_438 = CONCAT44(local_438._4_4_,iVar6 + 1);
      *(ulonglong *)(local_440.Data + (longlong)iVar6 * 8) =
           CONCAT26(0x6677,CONCAT15(uStackX_1d,0x5511223344));
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
      FVar11.Data = local_440.Data;
      local_378.bHasRemainingBytes = true;
      local_378.Prefix = (ulonglong)*(uint *)local_440.Data << 0x20;
      DataStorage::Private::CalculatePrefix<unsigned_char,unsigned_short_const_&>
                (&local_378,4,0,(uchar *)(local_440.Data + 4),(ushort *)(local_440.Data + 6));
      if (local_378.Prefix != 0x1122334455667700) {
        pFVar9 = FAutomationTestFramework::Get();
        pFVar1 = pFVar9->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString(&local_260,L"Condition failed");
        (*pcVar2)(pFVar1,&local_260,0);
        FVar11.Data = local_440.Data;
        if (local_260.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_260.Data.AllocatorInstance.Data);
          FVar11.Data = local_440.Data;
        }
      }
      if (local_378.bHasRemainingBytes != false) {
        pFVar9 = FAutomationTestFramework::Get();
        pFVar1 = pFVar9->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString(&local_250,L"Condition failed");
        (*pcVar2)(pFVar1,&local_250,0);
        FVar11.Data = local_440.Data;
        if (local_250.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_250.Data.AllocatorInstance.Data);
          FVar11.Data = local_440.Data;
        }
      }
      if (FVar11.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar11.Data);
      }
      local_3d8.Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_3d8._padding_ =
           (longlong)&___7__FMultiValueTestSorter_IEGI_Tests_DataStorage_Editor_UE__6B_;
      local_3d8.Values.ArrayNum = 0;
      local_3d8.Values.ArrayMax = 0;
      local_430 = 0x11223344;
      uStack_42c = 0x55;
      uStack_42a = 0x6677;
      local_428 = 0x8899aabb;
      iVar6 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x40c,&local_3d8.Values.AllocatorInstance,&local_3d8.Values.ArrayMax);
      local_3d8.Values.ArrayNum = iVar6 + 1;
      *(ulonglong *)(local_3d8.Values.AllocatorInstance.Data + (longlong)iVar6 * 0xc) =
           CONCAT26(uStack_42a,CONCAT15(uStack_42b,CONCAT14(uStack_42c,local_430)));
      *(undefined4 *)(local_3d8.Values.AllocatorInstance.Data + (longlong)iVar6 * 0xc + 8) =
           local_428;
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
      local_368.bHasRemainingBytes = true;
      local_368.Prefix =
           (ulonglong)
           CONCAT41(*(undefined4 *)local_3d8.Values.AllocatorInstance.Data,
                    local_3d8.Values.AllocatorInstance.Data[4]) << 0x18;
      DataStorage::Private::CalculatePrefix<unsigned_short,unsigned_int_const_&>
                (&local_368,5,0,(ushort *)(local_3d8.Values.AllocatorInstance.Data + 6),
                 (uint *)(local_3d8.Values.AllocatorInstance.Data + 8));
      if (local_368.Prefix != 0x1122334455667788) {
        pFVar9 = FAutomationTestFramework::Get();
        pFVar1 = pFVar9->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString(&local_240,L"Condition failed");
        (*pcVar2)(pFVar1,&local_240,0);
        if (local_240.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_240.Data.AllocatorInstance.Data);
        }
      }
      if (local_368.bHasRemainingBytes != true) {
        pFVar9 = FAutomationTestFramework::Get();
        pFVar1 = pFVar9->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString(&local_230,L"Condition failed");
        (*pcVar2)(pFVar1,&local_230,0);
        if (local_230.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_230.Data.AllocatorInstance.Data);
        }
      }
      pFVar10 = FMultiValueTestSorter<unsigned_int,unsigned_char,unsigned_short,unsigned_int>::
                CalculatePrefix(&local_3d8,&local_70,pIVar12,0,8);
      uVar3 = *(undefined8 *)&pFVar10->bHasRemainingBytes;
      if (pFVar10->Prefix != 0x99aabb0000000000) {
        pFVar9 = FAutomationTestFramework::Get();
        pFVar1 = pFVar9->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString(&local_c0,L"Condition failed");
        (*pcVar2)(pFVar1,&local_c0,0);
        if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c0.Data.AllocatorInstance.Data);
        }
      }
      if ((char)uVar3 != '\0') {
        pFVar9 = FAutomationTestFramework::Get();
        pFVar1 = pFVar9->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString(&local_d0,L"Condition failed");
        (*pcVar2)(pFVar1,&local_d0,0);
        if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d0.Data.AllocatorInstance.Data);
        }
      }
      if (local_3d8.Values.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3d8.Values.AllocatorInstance.Data);
      }
      local_458.Data = (FScriptContainerElement *)0x0;
      local_460 = &___7__FMultiValueTestSorter_IEGI_K_Tests_DataStorage_Editor_UE__6B_;
      local_2c8 = 0xccddeeff11223344;
      local_450 = 0;
      local_2d8 = 0x11223344;
      uStack_2d4 = 0x55;
      uStack_2d2 = 0x6677;
      uStack_2d0 = 0x8899aabb;
      iVar6 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&local_458,(int *)((longlong)&local_450 + 4));
      local_450 = CONCAT44(local_450._4_4_,iVar6 + 1);
      *(ulonglong *)(local_458.Data + (longlong)iVar6 * 0x18) =
           CONCAT26(uStack_2d2,CONCAT15(uStack_2d3,CONCAT14(uStack_2d4,local_2d8)));
      *(ulonglong *)(local_458.Data + (longlong)iVar6 * 0x18 + 8) = CONCAT44(uStack_2cc,uStack_2d0);
      *(undefined8 *)(local_458.Data + (longlong)iVar6 * 0x18 + 0x10) = local_2c8;
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
      local_358.bHasRemainingBytes = true;
      local_358.Prefix = (ulonglong)*(uint *)local_458.Data << 0x20;
      DataStorage::Private::
      CalculatePrefix<unsigned_char,unsigned_short_const_&,unsigned_int_const_&,unsigned___int64_const_&>
                (&local_358,4,0,(uchar *)(local_458.Data + 4),(ushort *)(local_458.Data + 6),
                 (uint *)(local_458.Data + 8),(ulong64 *)(local_458.Data + 0x10));
      if (local_358.Prefix != 0x1122334455667788) {
        pFVar9 = FAutomationTestFramework::Get();
        pFVar1 = pFVar9->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString(&local_e0,L"Condition failed");
        (*pcVar2)(pFVar1,&local_e0,0);
        if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e0.Data.AllocatorInstance.Data);
        }
      }
      if (local_358.bHasRemainingBytes != true) {
        pFVar9 = FAutomationTestFramework::Get();
        pFVar1 = pFVar9->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString(&local_f0,L"Condition failed");
        (*pcVar2)(pFVar1,&local_f0,0);
        if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f0.Data.AllocatorInstance.Data);
        }
      }
      if (((int)local_450 < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_348.Prefix = 0;
      local_348.bHasRemainingBytes = true;
      DataStorage::Private::
      CalculatePrefix<unsigned_char,unsigned_short_const_&,unsigned_int_const_&,unsigned___int64_const_&>
                (&local_348,4,8,(uchar *)(local_458.Data + 4),(ushort *)(local_458.Data + 6),
                 (uint *)(local_458.Data + 8),(ulong64 *)(local_458.Data + 0x10));
      if (local_348.Prefix != 0x99aabbccddeeff11) {
        pFVar9 = FAutomationTestFramework::Get();
        pFVar1 = pFVar9->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString(&local_100,L"Condition failed");
        (*pcVar2)(pFVar1,&local_100,0);
        if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_100.Data.AllocatorInstance.Data);
        }
      }
      if (local_348.bHasRemainingBytes != true) {
        pFVar9 = FAutomationTestFramework::Get();
        pFVar1 = pFVar9->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString(&local_110,L"Condition failed");
        (*pcVar2)(pFVar1,&local_110,0);
        if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_110.Data.AllocatorInstance.Data);
        }
      }
      if (((int)local_450 < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_338.Prefix = 0;
      local_338.bHasRemainingBytes = true;
      DataStorage::Private::
      CalculatePrefix<unsigned_char,unsigned_short_const_&,unsigned_int_const_&,unsigned___int64_const_&>
                (&local_338,4,0x10,(uchar *)(local_458.Data + 4),(ushort *)(local_458.Data + 6),
                 (uint *)(local_458.Data + 8),(ulong64 *)(local_458.Data + 0x10));
      if (local_338.Prefix != 0x2233440000000000) {
        pFVar9 = FAutomationTestFramework::Get();
        pFVar1 = pFVar9->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString(&local_130,L"Condition failed");
        (*pcVar2)(pFVar1,&local_130,0);
        if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_130.Data.AllocatorInstance.Data);
        }
      }
      if (local_338.bHasRemainingBytes != false) {
        pFVar9 = FAutomationTestFramework::Get();
        pFVar1 = pFVar9->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString(&local_120,L"Condition failed");
        (*pcVar2)(pFVar1,&local_120,0);
        if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_120.Data.AllocatorInstance.Data);
        }
      }
      if (local_458.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_458.Data);
      }
      local_290 = 0xccddeeff11223344;
      local_3f0._padding_ =
           (longlong)&___7__FMultiValueTestSorter_IEGI_KG_Tests_DataStorage_Editor_UE__6B_;
      local_3f0.Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      uStack_29a = 0x6677;
      local_3f0.Values.ArrayNum = 0;
      local_3f0.Values.ArrayMax = 0;
      local_2a0 = 0x11223344;
      uStack_29c = 0x55;
      uStack_298 = 0x8899aabb;
      uStack_288 = 0x5566;
      iVar6 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&local_3f0.Values.AllocatorInstance,&local_3f0.Values.ArrayMax);
      local_3f0.Values.ArrayNum = iVar6 + 1;
      *(ulonglong *)(local_3f0.Values.AllocatorInstance.Data + (longlong)iVar6 * 0x20) =
           CONCAT26(uStack_29a,CONCAT15(uStack_29b,CONCAT14(uStack_29c,local_2a0)));
      *(ulonglong *)(local_3f0.Values.AllocatorInstance.Data + (longlong)iVar6 * 0x20 + 8) =
           CONCAT44(uStack_294,uStack_298);
      *(undefined8 *)(local_3f0.Values.AllocatorInstance.Data + (longlong)iVar6 * 0x20 + 0x10) =
           local_290;
      *(ulonglong *)(local_3f0.Values.AllocatorInstance.Data + (longlong)iVar6 * 0x20 + 0x10 + 8) =
           CONCAT62(uStack_286,uStack_288);
      pFVar10 = FMultiValueTestSorter<unsigned_int,unsigned_char,unsigned_short,unsigned_int,unsigned___int64,unsigned_short>
                ::CalculatePrefix(&local_3f0,&local_a0,pIVar12,0,0);
      uVar3 = *(undefined8 *)&pFVar10->bHasRemainingBytes;
      if (pFVar10->Prefix != 0x1122334455667788) {
        pFVar9 = FAutomationTestFramework::Get();
        pFVar1 = pFVar9->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString(&local_140,L"Condition failed");
        (*pcVar2)(pFVar1,&local_140,0);
        if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_140.Data.AllocatorInstance.Data);
        }
      }
      if ((char)uVar3 != '\x01') {
        pFVar9 = FAutomationTestFramework::Get();
        pFVar1 = pFVar9->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString(&local_150,L"Condition failed");
        (*pcVar2)(pFVar1,&local_150,0);
        if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_150.Data.AllocatorInstance.Data);
        }
      }
      pFVar10 = FMultiValueTestSorter<unsigned_int,unsigned_char,unsigned_short,unsigned_int,unsigned___int64,unsigned_short>
                ::CalculatePrefix(&local_3f0,&local_90,pIVar12,0,8);
      uVar3 = *(undefined8 *)&pFVar10->bHasRemainingBytes;
      if (pFVar10->Prefix != 0x99aabbccddeeff11) {
        pFVar9 = FAutomationTestFramework::Get();
        pFVar1 = pFVar9->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString(&local_160,L"Condition failed");
        (*pcVar2)(pFVar1,&local_160,0);
        if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_160.Data.AllocatorInstance.Data);
        }
      }
      if ((char)uVar3 != '\x01') {
        pFVar9 = FAutomationTestFramework::Get();
        pFVar1 = pFVar9->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString(&local_170,L"Condition failed");
        (*pcVar2)(pFVar1,&local_170,0);
        if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_170.Data.AllocatorInstance.Data);
        }
      }
      pFVar10 = FMultiValueTestSorter<unsigned_int,unsigned_char,unsigned_short,unsigned_int,unsigned___int64,unsigned_short>
                ::CalculatePrefix(&local_3f0,&local_80,pIVar12,0,0x10);
      uVar3 = *(undefined8 *)&pFVar10->bHasRemainingBytes;
      if (pFVar10->Prefix != 0x2233445566000000) {
        pFVar9 = FAutomationTestFramework::Get();
        pFVar1 = pFVar9->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString(&local_1a0,L"Condition failed");
        (*pcVar2)(pFVar1,&local_1a0,0);
        if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
        }
      }
      if ((char)uVar3 != '\0') {
        pFVar9 = FAutomationTestFramework::Get();
        pFVar1 = pFVar9->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString(&local_1e0,L"Condition failed");
        (*pcVar2)(pFVar1,&local_1e0,0);
        if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
        }
      }
      if (local_3f0.Values.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3f0.Values.AllocatorInstance.Data);
      }
      local_470.Data = (FScriptContainerElement *)0x0;
      local_468 = 0;
      uStack_2ba = 0x6677;
      local_2c0 = 0x11223344;
      local_2b0 = 0xccddeeff11223344;
      uStack_2bc = 0x55;
      uStack_2b8 = 0x8899aabb;
      uStack_2a8 = 0x5566;
      uStack_2a6 = 0x77;
      iVar6 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&local_470,(int *)((longlong)&local_468 + 4));
      local_468 = CONCAT44(local_468._4_4_,iVar6 + 1);
      *(ulonglong *)(local_470.Data + (longlong)iVar6 * 0x20) =
           CONCAT26(uStack_2ba,CONCAT15(uStack_2bb,CONCAT14(uStack_2bc,local_2c0)));
      *(ulonglong *)(local_470.Data + (longlong)iVar6 * 0x20 + 8) = CONCAT44(uStack_2b4,uStack_2b8);
      *(undefined8 *)(local_470.Data + (longlong)iVar6 * 0x20 + 0x10) = local_2b0;
      *(ulonglong *)(local_470.Data + (longlong)iVar6 * 0x20 + 0x10 + 8) =
           CONCAT53(uStack_2a5,CONCAT12(uStack_2a6,uStack_2a8));
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
      local_328.bHasRemainingBytes = true;
      local_328.Prefix = (ulonglong)*(uint *)local_470.Data << 0x20;
      DataStorage::Private::
      CalculatePrefix<unsigned_char,unsigned_short_const_&,unsigned_int_const_&,unsigned___int64_const_&,unsigned_short_const_&,unsigned_char_const_&>
                (&local_328,4,0,(uchar *)(local_470.Data + 4),(ushort *)(local_470.Data + 6),
                 (uint *)(local_470.Data + 8),(ulong64 *)(local_470.Data + 0x10),
                 (ushort *)(local_470.Data + 0x18),(uchar *)(local_470.Data + 0x1a));
      if (local_328.Prefix != 0x1122334455667788) {
        pFVar9 = FAutomationTestFramework::Get();
        pFVar1 = pFVar9->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString(&local_1c0,L"Condition failed");
        (*pcVar2)(pFVar1,&local_1c0,0);
        if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
        }
      }
      if (local_328.bHasRemainingBytes != true) {
        pFVar9 = FAutomationTestFramework::Get();
        pFVar1 = pFVar9->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString(&local_220,L"Condition failed");
        (*pcVar2)(pFVar1,&local_220,0);
        if (local_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_220.Data.AllocatorInstance.Data);
        }
      }
      if (((int)local_468 < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_318.Prefix = 0;
      local_318.bHasRemainingBytes = true;
      DataStorage::Private::
      CalculatePrefix<unsigned_char,unsigned_short_const_&,unsigned_int_const_&,unsigned___int64_const_&,unsigned_short_const_&,unsigned_char_const_&>
                (&local_318,4,8,(uchar *)(local_470.Data + 4),(ushort *)(local_470.Data + 6),
                 (uint *)(local_470.Data + 8),(ulong64 *)(local_470.Data + 0x10),
                 (ushort *)(local_470.Data + 0x18),(uchar *)(local_470.Data + 0x1a));
      if (local_318.Prefix != 0x99aabbccddeeff11) {
        pFVar9 = FAutomationTestFramework::Get();
        pFVar1 = pFVar9->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString(&local_210,L"Condition failed");
        (*pcVar2)(pFVar1,&local_210,0);
        if (local_210.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_210.Data.AllocatorInstance.Data);
        }
      }
      if (local_318.bHasRemainingBytes != true) {
        pFVar9 = FAutomationTestFramework::Get();
        pFVar1 = pFVar9->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString(&local_200,L"Condition failed");
        (*pcVar2)(pFVar1,&local_200,0);
        if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_200.Data.AllocatorInstance.Data);
        }
      }
      if (((int)local_468 < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_308.Prefix = 0;
      local_308.bHasRemainingBytes = true;
      DataStorage::Private::
      CalculatePrefix<unsigned_char,unsigned_short_const_&,unsigned_int_const_&,unsigned___int64_const_&,unsigned_short_const_&,unsigned_char_const_&>
                (&local_308,4,0x10,(uchar *)(local_470.Data + 4),(ushort *)(local_470.Data + 6),
                 (uint *)(local_470.Data + 8),(ulong64 *)(local_470.Data + 0x10),
                 (ushort *)(local_470.Data + 0x18),(uchar *)(local_470.Data + 0x1a));
      if (local_308.Prefix != 0x2233445566770000) {
        pFVar9 = FAutomationTestFramework::Get();
        pFVar1 = pFVar9->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString(&local_1f0,L"Condition failed");
        (*pcVar2)(pFVar1,&local_1f0,0);
        if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
        }
      }
      if (local_308.bHasRemainingBytes != false) {
        pFVar9 = FAutomationTestFramework::Get();
        pFVar1 = pFVar9->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString(&local_398,L"Condition failed");
        (*pcVar2)(pFVar1,&local_398,0);
        if (local_398.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_398.Data.AllocatorInstance.Data);
        }
      }
      if (local_470.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_470.Data);
      }
      local_408.Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_408._padding_ =
           (longlong)&___7__FMultiValueTestSorter_IEGI_KGEG_Tests_DataStorage_Editor_UE__6B_;
      local_408.Values.ArrayNum = 0;
      local_408.Values.ArrayMax = 0;
      uStack_2f2 = 0x6677;
      local_2f8 = 0x11223344;
      local_2e8 = 0xccddeeff11223344;
      uStack_2f4 = 0x55;
      uStack_2dc = 0x8899;
      uStack_2f0 = 0x8899aabb;
      uStack_2e0 = 0x5566;
      uStack_2de = 0x77;
      iVar6 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&local_408.Values.AllocatorInstance,&local_408.Values.ArrayMax);
      local_408.Values.ArrayNum = iVar6 + 1;
      *(ulonglong *)(local_408.Values.AllocatorInstance.Data + (longlong)iVar6 * 0x20) =
           CONCAT26(uStack_2f2,CONCAT15(uStack_2f3,CONCAT14(uStack_2f4,local_2f8)));
      *(ulonglong *)(local_408.Values.AllocatorInstance.Data + (longlong)iVar6 * 0x20 + 8) =
           CONCAT44(uStack_2ec,uStack_2f0);
      *(undefined8 *)(local_408.Values.AllocatorInstance.Data + (longlong)iVar6 * 0x20 + 0x10) =
           local_2e8;
      *(ulonglong *)(local_408.Values.AllocatorInstance.Data + (longlong)iVar6 * 0x20 + 0x10 + 8) =
           CONCAT26(uStack_2da,
                    CONCAT24(uStack_2dc,CONCAT13(uStack_2dd,CONCAT12(uStack_2de,uStack_2e0))));
      pFVar10 = FMultiValueTestSorter<unsigned_int,unsigned_char,unsigned_short,unsigned_int,unsigned___int64,unsigned_short,unsigned_char,unsigned_short>
                ::CalculatePrefix(&local_408,&local_50,pIVar12,0,0);
      local_398.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFVar10->Prefix;
      local_398.Data._8_8_ = *(undefined8 *)&pFVar10->bHasRemainingBytes;
      if (local_398.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x1122334455667788) {
        pFVar9 = FAutomationTestFramework::Get();
        pFVar1 = pFVar9->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString(&local_1d0,L"Condition failed");
        (*pcVar2)(pFVar1,&local_1d0,0);
        if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
        }
      }
      if ((char)local_398.Data.ArrayNum != '\x01') {
        pFVar9 = FAutomationTestFramework::Get();
        pFVar1 = pFVar9->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString(&local_388,L"Condition failed");
        (*pcVar2)(pFVar1,&local_388,0);
        if (local_388.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_388.Data.AllocatorInstance.Data);
        }
      }
      pFVar10 = FMultiValueTestSorter<unsigned_int,unsigned_char,unsigned_short,unsigned_int,unsigned___int64,unsigned_short,unsigned_char,unsigned_short>
                ::CalculatePrefix(&local_408,&local_60,pIVar12,0,8);
      local_388.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFVar10->Prefix;
      local_388.Data._8_8_ = *(undefined8 *)&pFVar10->bHasRemainingBytes;
      if (local_388.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x99aabbccddeeff11) {
        pFVar9 = FAutomationTestFramework::Get();
        pFVar1 = pFVar9->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString(&local_1b0,L"Condition failed");
        (*pcVar2)(pFVar1,&local_1b0,0);
        if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
        }
      }
      if ((char)local_388.Data.ArrayNum != '\x01') {
        pFVar9 = FAutomationTestFramework::Get();
        pFVar1 = pFVar9->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString(&local_3a8,L"Condition failed");
        (*pcVar2)(pFVar1,&local_3a8,0);
        if (local_3a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3a8.Data.AllocatorInstance.Data);
        }
      }
      pFVar10 = FMultiValueTestSorter<unsigned_int,unsigned_char,unsigned_short,unsigned_int,unsigned___int64,unsigned_short,unsigned_char,unsigned_short>
                ::CalculatePrefix(&local_408,&local_b0,pIVar12,0,0x10);
      local_3a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFVar10->Prefix;
      local_3a8.Data._8_8_ = *(undefined8 *)&pFVar10->bHasRemainingBytes;
      if (local_3a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x2233445566778899) {
        pFVar9 = FAutomationTestFramework::Get();
        pFVar1 = pFVar9->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString(&local_190,L"Condition failed");
        (*pcVar2)(pFVar1,&local_190,0);
        if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_190.Data.AllocatorInstance.Data);
        }
      }
      if ((char)local_3a8.Data.ArrayNum != '\0') {
        pFVar9 = FAutomationTestFramework::Get();
        pFVar1 = pFVar9->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString(&local_180,L"Condition failed");
        (*pcVar2)(pFVar1,&local_180,0);
        if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_180.Data.AllocatorInstance.Data);
        }
      }
      if (local_408.Values.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_408.Values.AllocatorInstance.Data);
      }
    }
  }
  return;
}

