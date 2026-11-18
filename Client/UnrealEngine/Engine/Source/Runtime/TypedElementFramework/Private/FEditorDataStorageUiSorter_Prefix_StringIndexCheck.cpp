// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 10

// GetTestFlags @ 142cca6b0

EAutomationTestFlags __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_StringIndexCheck::GetTestFlags
          (FEditorDataStorageUiSorter_Prefix_StringIndexCheck *this)

{
  return this->TestFlags;
}

// IsStressTest @ 142cca6c0

bool __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_StringIndexCheck::IsStressTest
          (FEditorDataStorageUiSorter_Prefix_StringIndexCheck *this)

{
  return false;
}

// GetRequiredDeviceNum @ 142cca6d0

uint __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_StringIndexCheck::
GetRequiredDeviceNum(FEditorDataStorageUiSorter_Prefix_StringIndexCheck *this)

{
  return 1;
}

// GetTestSourceFileName @ 142cca6e0

FString * __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_StringIndexCheck::
GetTestSourceFileName
          (FEditorDataStorageUiSorter_Prefix_StringIndexCheck *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Tests\\Elements\\Framework\\TypedElementDataStorageUiSorterTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 142cca710

int __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_StringIndexCheck::
GetTestSourceFileLine(FEditorDataStorageUiSorter_Prefix_StringIndexCheck *this)

{
  return 0x1e1;
}

// GetTests @ 142cca720

/* WARNING: Removing unreachable block (ram,0x000142cca89e) */

void __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_StringIndexCheck::GetTests
          (FEditorDataStorageUiSorter_Prefix_StringIndexCheck *this,
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

// RunTest @ 142cca8c0

bool __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_StringIndexCheck::RunTest
          (FEditorDataStorageUiSorter_Prefix_StringIndexCheck *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 142cca8f0

FString * __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_StringIndexCheck::
GetBeautifiedTestName
          (FEditorDataStorageUiSorter_Prefix_StringIndexCheck *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FEditorDataStorageUiSorter_Prefix_StringIndexCheck @ 142ce0da0

FEditorDataStorageUiSorter_Prefix_StringIndexCheck * __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_StringIndexCheck::
FEditorDataStorageUiSorter_Prefix_StringIndexCheck
          (FEditorDataStorageUiSorter_Prefix_StringIndexCheck *this,FString *param_1)

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
       &___7FEditorDataStorageUiSorter_Prefix_StringIndexCheck_Tests_DataStorage_Editor_UE__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][EngineFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,
                              "Editor::DataStorage::FColumnSorterInterface_Prefix_StringIndexCheck")
  ;
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

// TestBody @ 142d02ab0

void __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_StringIndexCheck::TestBody
          (FEditorDataStorageUiSorter_Prefix_StringIndexCheck *this,FString *param_1)

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
  ForAnyElementType local_2f0;
  undefined8 local_2e8;
  ulong64 local_2e0;
  undefined8 uStack_2d8;
  FScriptContainerElement *local_2d0;
  int iStack_2c8;
  undefined4 uStack_2c4;
  FScriptContainerElement *local_2c0;
  int iStack_2b8;
  undefined4 uStack_2b4;
  FScriptContainerElement *local_2b0;
  int iStack_2a8;
  undefined4 uStack_2a4;
  FScriptContainerElement *local_2a0;
  int iStack_298;
  undefined4 uStack_294;
  FScriptContainerElement *local_290;
  int iStack_288;
  undefined4 uStack_284;
  FScriptContainerElement *local_280;
  int iStack_278;
  undefined4 uStack_274;
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
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  FPrefixInfo local_88;
  FPrefixInfo local_78;
  FPrefixInfo local_68;
  FPrefixInfo local_58;
  FPrefixInfo local_48;
  FPrefixInfo local_38;
  FPrefixInfo local_28;
  FPrefixInfo local_18;
  
  FVar4 = StorageFeatureName;
  pIVar8 = IModularFeatures::Get();
  iVar6 = (**(code **)((longlong)*pIVar8 + 0x18))(pIVar8,FVar4);
  if (0 < iVar6) {
    pIVar8 = IModularFeatures::Get();
    lVar9 = (**(code **)((longlong)*pIVar8 + 0x20))(pIVar8,FVar4);
    iVar6 = 0;
    lVar12 = lVar9 + -8;
    if (lVar9 == 0) {
      lVar12 = 0;
    }
    if (lVar12 != 0) {
      local_2f0.Data = (FScriptContainerElement *)0x0;
      local_2e8 = 0;
      ::FString::FString(&local_260,L"a");
      local_2d0 = local_260.Data.AllocatorInstance.Data;
      iStack_2c8 = local_260.Data.ArrayNum + -1;
      if (local_260.Data.ArrayNum == 0) {
        iStack_2c8 = iVar6;
      }
      if (((local_2f0.Data <= (FScriptContainerElement *)&local_2d0) &&
          ((FScriptContainerElement *)&local_2d0 < local_2f0.Data + (longlong)local_2e8._4_4_ * 0x10
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
      iVar7 = (int)local_2e8;
      if ((int)local_2e8 == local_2e8._4_4_) {
        iVar7 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_2f0,(int *)((longlong)&local_2e8 + 4));
      }
      local_2e8 = CONCAT44(local_2e8._4_4_,iVar7 + 1);
      *(FScriptContainerElement **)(local_2f0.Data + (longlong)iVar7 * 0x10) = local_2d0;
      *(ulonglong *)(local_2f0.Data + (longlong)iVar7 * 0x10 + 8) = CONCAT44(uStack_2c4,iStack_2c8);
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
      local_b8._0_8_ = *(undefined8 *)local_2f0.Data;
      local_b8._8_8_ = *(undefined8 *)(local_2f0.Data + 8);
      pFVar10 = TSortTypeInfo<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>_>
                ::CalculatePrefix(&local_88,0,0,
                                  (TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>
                                   *)local_b8);
      local_2e0 = pFVar10->Prefix;
      uStack_2d8 = *(undefined8 *)&pFVar10->bHasRemainingBytes;
      if (local_2e0 != 0x61000000000000) {
        pFVar11 = FAutomationTestFramework::Get();
        pFVar1 = pFVar11->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString(&local_150,L"Condition failed");
        (*pcVar2)(pFVar1,&local_150);
        if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_150.Data.AllocatorInstance.Data);
        }
      }
      if ((char)uStack_2d8 != '\0') {
        pFVar11 = FAutomationTestFramework::Get();
        pFVar1 = pFVar11->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString(&local_120,L"Condition failed");
        (*pcVar2)(pFVar1,&local_120);
        if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_120.Data.AllocatorInstance.Data);
        }
      }
      uVar3 = local_2e8 >> 0x20;
      local_2e8 = local_2e8 & 0xffffffff00000000;
      if ((int)uVar3 != 0) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,&local_2f0,0,(int *)((longlong)&local_2e8 + 4));
      }
      if (local_260.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_260.Data.AllocatorInstance.Data);
      }
      ::FString::FString(&local_250,L"aa");
      local_2c0 = local_250.Data.AllocatorInstance.Data;
      iStack_2b8 = local_250.Data.ArrayNum + -1;
      if (local_250.Data.ArrayNum == 0) {
        iStack_2b8 = iVar6;
      }
      if (((local_2f0.Data <= (FScriptContainerElement *)&local_2c0) &&
          ((FScriptContainerElement *)&local_2c0 < local_2f0.Data + (longlong)local_2e8._4_4_ * 0x10
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
      iVar7 = (int)local_2e8;
      if ((int)local_2e8 == local_2e8._4_4_) {
        iVar7 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_2f0,(int *)((longlong)&local_2e8 + 4));
      }
      local_2e8 = CONCAT44(local_2e8._4_4_,iVar7 + 1);
      *(FScriptContainerElement **)(local_2f0.Data + (longlong)iVar7 * 0x10) = local_2c0;
      *(ulonglong *)(local_2f0.Data + (longlong)iVar7 * 0x10 + 8) = CONCAT44(uStack_2b4,iStack_2b8);
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
      local_108._0_8_ = *(undefined8 *)local_2f0.Data;
      local_108._8_8_ = *(undefined8 *)(local_2f0.Data + 8);
      pFVar10 = TSortTypeInfo<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>_>
                ::CalculatePrefix(&local_78,0,0,
                                  (TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>
                                   *)local_108);
      local_2e0 = pFVar10->Prefix;
      uStack_2d8 = *(undefined8 *)&pFVar10->bHasRemainingBytes;
      if (local_2e0 != 0x61006100000000) {
        pFVar11 = FAutomationTestFramework::Get();
        pFVar1 = pFVar11->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString(&local_200,L"Condition failed");
        (*pcVar2)(pFVar1,&local_200);
        if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_200.Data.AllocatorInstance.Data);
        }
      }
      if ((char)uStack_2d8 != '\0') {
        pFVar11 = FAutomationTestFramework::Get();
        pFVar1 = pFVar11->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString(&local_1f0,L"Condition failed");
        (*pcVar2)(pFVar1,&local_1f0);
        if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
        }
      }
      uVar3 = local_2e8 >> 0x20;
      local_2e8 = local_2e8 & 0xffffffff00000000;
      if ((int)uVar3 != 0) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,&local_2f0,0,(int *)((longlong)&local_2e8 + 4));
      }
      if (local_250.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_250.Data.AllocatorInstance.Data);
      }
      ::FString::FString(&local_240,L"aaa");
      local_2b0 = local_240.Data.AllocatorInstance.Data;
      iStack_2a8 = local_240.Data.ArrayNum + -1;
      if (local_240.Data.ArrayNum == 0) {
        iStack_2a8 = iVar6;
      }
      if (((local_2f0.Data <= (FScriptContainerElement *)&local_2b0) &&
          ((FScriptContainerElement *)&local_2b0 < local_2f0.Data + (longlong)local_2e8._4_4_ * 0x10
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
      iVar7 = (int)local_2e8;
      if ((int)local_2e8 == local_2e8._4_4_) {
        iVar7 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_2f0,(int *)((longlong)&local_2e8 + 4));
      }
      local_2e8 = CONCAT44(local_2e8._4_4_,iVar7 + 1);
      *(FScriptContainerElement **)(local_2f0.Data + (longlong)iVar7 * 0x10) = local_2b0;
      *(ulonglong *)(local_2f0.Data + (longlong)iVar7 * 0x10 + 8) = CONCAT44(uStack_2a4,iStack_2a8);
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
      local_f8._0_8_ = *(undefined8 *)local_2f0.Data;
      local_f8._8_8_ = *(undefined8 *)(local_2f0.Data + 8);
      pFVar10 = TSortTypeInfo<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>_>
                ::CalculatePrefix(&local_68,0,0,
                                  (TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>
                                   *)local_f8);
      local_2e0 = pFVar10->Prefix;
      uStack_2d8 = *(undefined8 *)&pFVar10->bHasRemainingBytes;
      if (local_2e0 != 0x61006100610000) {
        pFVar11 = FAutomationTestFramework::Get();
        pFVar1 = pFVar11->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString(&local_1e0,L"Condition failed");
        (*pcVar2)(pFVar1,&local_1e0);
        if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
        }
      }
      if ((char)uStack_2d8 != '\0') {
        pFVar11 = FAutomationTestFramework::Get();
        pFVar1 = pFVar11->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString(&local_1d0,L"Condition failed");
        (*pcVar2)(pFVar1,&local_1d0);
        if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
        }
      }
      uVar3 = local_2e8 >> 0x20;
      local_2e8 = local_2e8 & 0xffffffff00000000;
      if ((int)uVar3 != 0) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,&local_2f0,0,(int *)((longlong)&local_2e8 + 4));
      }
      if (local_240.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_240.Data.AllocatorInstance.Data);
      }
      ::FString::FString(&local_230,L"aaaa");
      local_2a0 = local_230.Data.AllocatorInstance.Data;
      iStack_298 = local_230.Data.ArrayNum + -1;
      if (local_230.Data.ArrayNum == 0) {
        iStack_298 = iVar6;
      }
      if (((local_2f0.Data <= (FScriptContainerElement *)&local_2a0) &&
          ((FScriptContainerElement *)&local_2a0 < local_2f0.Data + (longlong)local_2e8._4_4_ * 0x10
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
      iVar7 = (int)local_2e8;
      if ((int)local_2e8 == local_2e8._4_4_) {
        iVar7 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_2f0,(int *)((longlong)&local_2e8 + 4));
      }
      local_2e8 = CONCAT44(local_2e8._4_4_,iVar7 + 1);
      *(FScriptContainerElement **)(local_2f0.Data + (longlong)iVar7 * 0x10) = local_2a0;
      *(ulonglong *)(local_2f0.Data + (longlong)iVar7 * 0x10 + 8) = CONCAT44(uStack_294,iStack_298);
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
      local_e8._0_8_ = *(undefined8 *)local_2f0.Data;
      local_e8._8_8_ = *(undefined8 *)(local_2f0.Data + 8);
      pFVar10 = TSortTypeInfo<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>_>
                ::CalculatePrefix(&local_18,0,0,
                                  (TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>
                                   *)local_e8);
      local_2e0 = pFVar10->Prefix;
      uStack_2d8 = *(undefined8 *)&pFVar10->bHasRemainingBytes;
      if (local_2e0 != 0x61006100610061) {
        pFVar11 = FAutomationTestFramework::Get();
        pFVar1 = pFVar11->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString(&local_1c0,L"Condition failed");
        (*pcVar2)(pFVar1,&local_1c0);
        if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
        }
      }
      if ((char)uStack_2d8 != '\0') {
        pFVar11 = FAutomationTestFramework::Get();
        pFVar1 = pFVar11->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString(&local_1b0,L"Condition failed");
        (*pcVar2)(pFVar1,&local_1b0);
        if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
        }
      }
      uVar3 = local_2e8 >> 0x20;
      local_2e8 = local_2e8 & 0xffffffff00000000;
      if ((int)uVar3 != 0) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,&local_2f0,0,(int *)((longlong)&local_2e8 + 4));
      }
      if (local_230.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_230.Data.AllocatorInstance.Data);
      }
      ::FString::FString(&local_220,L"aaaab");
      local_290 = local_220.Data.AllocatorInstance.Data;
      iStack_288 = local_220.Data.ArrayNum + -1;
      if (local_220.Data.ArrayNum == 0) {
        iStack_288 = iVar6;
      }
      if (((local_2f0.Data <= (FScriptContainerElement *)&local_290) &&
          ((FScriptContainerElement *)&local_290 < local_2f0.Data + (longlong)local_2e8._4_4_ * 0x10
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
      iVar7 = (int)local_2e8;
      if ((int)local_2e8 == local_2e8._4_4_) {
        iVar7 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_2f0,(int *)((longlong)&local_2e8 + 4));
      }
      local_2e8 = CONCAT44(local_2e8._4_4_,iVar7 + 1);
      *(FScriptContainerElement **)(local_2f0.Data + (longlong)iVar7 * 0x10) = local_290;
      *(ulonglong *)(local_2f0.Data + (longlong)iVar7 * 0x10 + 8) = CONCAT44(uStack_284,iStack_288);
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
      local_d8._0_8_ = *(undefined8 *)local_2f0.Data;
      local_d8._8_8_ = *(undefined8 *)(local_2f0.Data + 8);
      pFVar10 = TSortTypeInfo<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>_>
                ::CalculatePrefix(&local_58,0,0,
                                  (TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>
                                   *)local_d8);
      local_2e0 = pFVar10->Prefix;
      uStack_2d8 = *(undefined8 *)&pFVar10->bHasRemainingBytes;
      if (local_2e0 != 0x61006100610061) {
        pFVar11 = FAutomationTestFramework::Get();
        pFVar1 = pFVar11->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString(&local_1a0,L"Condition failed");
        (*pcVar2)(pFVar1,&local_1a0,0);
        if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
        }
      }
      if ((char)uStack_2d8 != '\x01') {
        pFVar11 = FAutomationTestFramework::Get();
        pFVar1 = pFVar11->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString(&local_190,L"Condition failed");
        (*pcVar2)(pFVar1,&local_190,0);
        if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_190.Data.AllocatorInstance.Data);
        }
      }
      if (((int)local_2e8 < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_c8._0_8_ = *(undefined8 *)local_2f0.Data;
      local_c8._8_8_ = *(undefined8 *)(local_2f0.Data + 8);
      pFVar10 = TSortTypeInfo<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>_>
                ::CalculatePrefix(&local_48,0,8,
                                  (TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>
                                   *)local_c8);
      local_2e0 = pFVar10->Prefix;
      uStack_2d8 = *(undefined8 *)&pFVar10->bHasRemainingBytes;
      if (local_2e0 != 0x62000000000000) {
        pFVar11 = FAutomationTestFramework::Get();
        pFVar1 = pFVar11->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString(&local_180,L"Condition failed");
        (*pcVar2)(pFVar1,&local_180);
        if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_180.Data.AllocatorInstance.Data);
        }
      }
      if ((char)uStack_2d8 != '\0') {
        pFVar11 = FAutomationTestFramework::Get();
        pFVar1 = pFVar11->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString(&local_170,L"Condition failed");
        (*pcVar2)(pFVar1,&local_170);
        if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_170.Data.AllocatorInstance.Data);
        }
      }
      uVar3 = local_2e8 >> 0x20;
      local_2e8 = local_2e8 & 0xffffffff00000000;
      if ((int)uVar3 != 0) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,&local_2f0,0,(int *)((longlong)&local_2e8 + 4));
      }
      if (local_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_220.Data.AllocatorInstance.Data);
      }
      ::FString::FString(&local_210,L"aaaabb");
      local_280 = local_210.Data.AllocatorInstance.Data;
      iStack_278 = local_210.Data.ArrayNum + -1;
      if (local_210.Data.ArrayNum == 0) {
        iStack_278 = iVar6;
      }
      if (((local_2f0.Data <= (FScriptContainerElement *)&local_280) &&
          ((FScriptContainerElement *)&local_280 < local_2f0.Data + (longlong)local_2e8._4_4_ * 0x10
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
      iVar6 = (int)local_2e8;
      if ((int)local_2e8 == local_2e8._4_4_) {
        iVar6 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_2f0,(int *)((longlong)&local_2e8 + 4));
      }
      local_2e8 = CONCAT44(local_2e8._4_4_,iVar6 + 1);
      *(FScriptContainerElement **)(local_2f0.Data + (longlong)iVar6 * 0x10) = local_280;
      *(ulonglong *)(local_2f0.Data + (longlong)iVar6 * 0x10 + 8) = CONCAT44(uStack_274,iStack_278);
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
      local_98._0_8_ = *(undefined8 *)local_2f0.Data;
      local_98._8_8_ = *(undefined8 *)(local_2f0.Data + 8);
      pFVar10 = TSortTypeInfo<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>_>
                ::CalculatePrefix(&local_38,0,0,
                                  (TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>
                                   *)local_98);
      local_2e0 = pFVar10->Prefix;
      uStack_2d8 = *(undefined8 *)&pFVar10->bHasRemainingBytes;
      if (local_2e0 != 0x61006100610061) {
        pFVar11 = FAutomationTestFramework::Get();
        pFVar1 = pFVar11->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString(&local_160,L"Condition failed");
        (*pcVar2)(pFVar1,&local_160,0);
        if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_160.Data.AllocatorInstance.Data);
        }
      }
      if ((char)uStack_2d8 != '\x01') {
        pFVar11 = FAutomationTestFramework::Get();
        pFVar1 = pFVar11->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString(&local_270,L"Condition failed");
        (*pcVar2)(pFVar1,&local_270,0);
        if (local_270.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_270.Data.AllocatorInstance.Data);
        }
      }
      if (((int)local_2e8 < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_a8._0_8_ = *(undefined8 *)local_2f0.Data;
      local_a8._8_8_ = *(undefined8 *)(local_2f0.Data + 8);
      pFVar10 = TSortTypeInfo<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>_>
                ::CalculatePrefix(&local_28,0,8,
                                  (TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>
                                   *)local_a8);
      local_270.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFVar10->Prefix;
      local_270.Data._8_8_ = *(undefined8 *)&pFVar10->bHasRemainingBytes;
      if (local_270.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x62006200000000) {
        pFVar11 = FAutomationTestFramework::Get();
        pFVar1 = pFVar11->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString(&local_140,L"Condition failed");
        (*pcVar2)(pFVar1,&local_140);
        if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_140.Data.AllocatorInstance.Data);
        }
      }
      if ((char)local_270.Data.ArrayNum != '\0') {
        pFVar11 = FAutomationTestFramework::Get();
        pFVar1 = pFVar11->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString(&local_130,L"Condition failed");
        (*pcVar2)(pFVar1,&local_130);
        if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_130.Data.AllocatorInstance.Data);
        }
      }
      uVar3 = local_2e8 >> 0x20;
      local_2e8 = local_2e8 & 0xffffffff00000000;
      if ((int)uVar3 != 0) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,&local_2f0,0,(int *)((longlong)&local_2e8 + 4));
      }
      if (local_210.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_210.Data.AllocatorInstance.Data);
      }
      if (local_2f0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2f0.Data);
      }
    }
  }
  return;
}

