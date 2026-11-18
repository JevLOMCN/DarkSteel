// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 10

// GetTestFlags @ 142cc4f90

EAutomationTestFlags __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_WideStringView_CaseSensitive::
GetTestFlags(FEditorDataStorageUiSorter_Prefix_WideStringView_CaseSensitive *this)

{
  return this->TestFlags;
}

// IsStressTest @ 142cc4fa0

bool __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_WideStringView_CaseSensitive::
IsStressTest(FEditorDataStorageUiSorter_Prefix_WideStringView_CaseSensitive *this)

{
  return false;
}

// GetRequiredDeviceNum @ 142cc4fb0

uint __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_WideStringView_CaseSensitive::
GetRequiredDeviceNum(FEditorDataStorageUiSorter_Prefix_WideStringView_CaseSensitive *this)

{
  return 1;
}

// GetTestSourceFileName @ 142cc4fc0

FString * __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_WideStringView_CaseSensitive::
GetTestSourceFileName
          (FEditorDataStorageUiSorter_Prefix_WideStringView_CaseSensitive *this,
          FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Tests\\Elements\\Framework\\TypedElementDataStorageUiSorterTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 142cc4ff0

int __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_WideStringView_CaseSensitive::
GetTestSourceFileLine(FEditorDataStorageUiSorter_Prefix_WideStringView_CaseSensitive *this)

{
  return 0x289;
}

// GetTests @ 142cc5000

/* WARNING: Removing unreachable block (ram,0x000142cc517e) */

void __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_WideStringView_CaseSensitive::
GetTests(FEditorDataStorageUiSorter_Prefix_WideStringView_CaseSensitive *this,
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

// RunTest @ 142cc51a0

bool __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_WideStringView_CaseSensitive::
RunTest(FEditorDataStorageUiSorter_Prefix_WideStringView_CaseSensitive *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 142cc51d0

FString * __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_WideStringView_CaseSensitive::
GetBeautifiedTestName
          (FEditorDataStorageUiSorter_Prefix_WideStringView_CaseSensitive *this,
          FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FEditorDataStorageUiSorter_Prefix_WideStringView_CaseSensitive @ 142ce2190

FEditorDataStorageUiSorter_Prefix_WideStringView_CaseSensitive * __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_WideStringView_CaseSensitive::
FEditorDataStorageUiSorter_Prefix_WideStringView_CaseSensitive
          (FEditorDataStorageUiSorter_Prefix_WideStringView_CaseSensitive *this,FString *param_1)

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
       ___7FEditorDataStorageUiSorter_Prefix_WideStringView_CaseSensitive_Tests_DataStorage_Editor_UE__6B_
  ;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][EngineFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,
                              "Editor::DataStorage::FColumnSorterInterface_Prefix_WideStringView_CaseSensitive"
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

// TestBody @ 142d065c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_WideStringView_CaseSensitive::
TestBody(FEditorDataStorageUiSorter_Prefix_WideStringView_CaseSensitive *this,FString *param_1)

{
  ulonglong *puVar1;
  FAutomationTestBase *pFVar2;
  code *pcVar3;
  FName FVar4;
  int iVar5;
  int iVar6;
  IModularFeatures *pIVar7;
  longlong lVar8;
  FAutomationTestFramework *pFVar9;
  ulonglong *puVar10;
  int iVar11;
  ICoreProvider *pIVar12;
  undefined1 auStackY_f8 [32];
  ForAnyElementType local_b8;
  int local_b0;
  int local_ac;
  FSingleValueTestSorter<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>_>
  local_a8;
  FString local_90;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  ulonglong local_18 [2];
  
  FVar4 = StorageFeatureName;
  local_18[0] = __security_cookie.value ^ (ulonglong)auStackY_f8;
  pIVar7 = IModularFeatures::Get();
  iVar5 = (**(code **)((longlong)*pIVar7 + 0x18))(pIVar7,FVar4);
  if (iVar5 < 1) {
    pIVar12 = (ICoreProvider *)0x0;
  }
  else {
    pIVar7 = IModularFeatures::Get();
    lVar8 = (**(code **)((longlong)*pIVar7 + 0x20))(pIVar7,FVar4,0);
    pIVar12 = (ICoreProvider *)(lVar8 + -8);
    if (lVar8 == 0) {
      pIVar12 = (ICoreProvider *)0x0;
    }
  }
  iVar5 = 0;
  if (pIVar12 != (ICoreProvider *)0x0) {
    ::FString::FString(&local_78,L"a");
    ::FString::FString(&local_68,L"bba");
    ::FString::FString(&local_58,L"Aba");
    ::FString::FString(&local_48,L"cba");
    ::FString::FString(&local_38,L"ABac");
    ::FString::FString(&local_28,L"longstring");
    lVar8 = 6;
    local_b8.Data = (FScriptContainerElement *)0x0;
    local_b0 = 6;
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,6,0,&local_b8,6,&local_ac);
    ConstructItems<FString,FString,int>(local_b8.Data,&local_78,6);
    puVar10 = local_18;
    do {
      puVar1 = puVar10 + -2;
      puVar10 = puVar10 + -2;
      lVar8 = lVar8 + -1;
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      iVar11 = local_b0;
    } while (lVar8 != 0);
    local_a8._padding_ =
         (longlong)
         &
         ___7__FSingleValueTestSorter_U__TSortStringView_UFSortCaseSensitive_DataStorage_Editor_UE__V__TStringView__W___DataStorage_Editor_UE___Tests_DataStorage_Editor_UE__6B_
    ;
    local_a8.Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a8.Values._8_8_ = lVar8;
    if (local_b0 != 0) {
      iVar6 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,local_b0,&local_a8.Values.AllocatorInstance,
                         &local_a8.Values.ArrayNum,&local_a8.Values.ArrayMax);
      ConstructItems<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>,FString,int>
                (local_a8.Values.AllocatorInstance.Data + (longlong)iVar6 * 0x10,
                 (FString *)local_b8.Data,iVar11);
    }
    FSingleValueTestSorter<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>_>
    ::SortByPrefix(&local_a8,pIVar12,0);
    if (0 < local_a8.Values.ArrayNum + -1) {
      do {
        iVar11 = iVar5 + 1;
        if (*(code **)(local_a8._padding_ + 0x18) ==
            FSingleValueTestSorter<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>_>
            ::Compare) {
          iVar5 = FSingleValueTestSorter<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>_>
                  ::Compare(&local_a8,pIVar12,(longlong)iVar5,(longlong)iVar11);
        }
        else {
          iVar5 = (**(code **)(local_a8._padding_ + 0x18))();
        }
        if (0 < iVar5) {
          pFVar9 = FAutomationTestFramework::Get();
          pFVar2 = pFVar9->CurrentTest;
          pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
          ::FString::FString(&local_90,L"Condition failed");
          (*pcVar3)(pFVar2,&local_90,0);
          if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_90.Data.AllocatorInstance.Data);
          }
          break;
        }
        iVar5 = iVar11;
      } while (iVar11 < local_a8.Values.ArrayNum + -1);
    }
    if (local_a8.Values.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Values.AllocatorInstance.Data);
    }
    DestructItems<FString,int>((FString *)local_b8.Data,local_b0);
    if (local_b8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data);
    }
  }
  return;
}

