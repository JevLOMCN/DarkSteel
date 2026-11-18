// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 10

// GetTestFlags @ 142cc9330

EAutomationTestFlags __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_FNameById::GetTestFlags
          (FEditorDataStorageUiSorter_Prefix_FNameById *this)

{
  return this->TestFlags;
}

// IsStressTest @ 142cc9340

bool __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_FNameById::IsStressTest
          (FEditorDataStorageUiSorter_Prefix_FNameById *this)

{
  return false;
}

// GetRequiredDeviceNum @ 142cc9350

uint __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_FNameById::GetRequiredDeviceNum
          (FEditorDataStorageUiSorter_Prefix_FNameById *this)

{
  return 1;
}

// GetTestSourceFileName @ 142cc9360

FString * __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_FNameById::GetTestSourceFileName
          (FEditorDataStorageUiSorter_Prefix_FNameById *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Tests\\Elements\\Framework\\TypedElementDataStorageUiSorterTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 142cc9390

int __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_FNameById::GetTestSourceFileLine
          (FEditorDataStorageUiSorter_Prefix_FNameById *this)

{
  return 0x304;
}

// GetTests @ 142cc93a0

/* WARNING: Removing unreachable block (ram,0x000142cc951e) */

void __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_FNameById::GetTests
          (FEditorDataStorageUiSorter_Prefix_FNameById *this,
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

// RunTest @ 142cc9540

bool __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_FNameById::RunTest
          (FEditorDataStorageUiSorter_Prefix_FNameById *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 142cc9570

FString * __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_FNameById::GetBeautifiedTestName
          (FEditorDataStorageUiSorter_Prefix_FNameById *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FEditorDataStorageUiSorter_Prefix_FNameById @ 142cdf9b0

FEditorDataStorageUiSorter_Prefix_FNameById * __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_FNameById::
FEditorDataStorageUiSorter_Prefix_FNameById
          (FEditorDataStorageUiSorter_Prefix_FNameById *this,FString *param_1)

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
       (longlong)&___7FEditorDataStorageUiSorter_Prefix_FNameById_Tests_DataStorage_Editor_UE__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][EngineFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,
                              "Editor::DataStorage::FColumnSorterInterface_Prefix_FNameById");
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

// TestBody @ 142cff7e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_FNameById::TestBody
          (FEditorDataStorageUiSorter_Prefix_FNameById *this,FString *param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  FName FVar3;
  int iVar4;
  int iVar5;
  IModularFeatures *pIVar6;
  longlong lVar7;
  FAutomationTestFramework *pFVar8;
  int iVar9;
  ICoreProvider *pIVar10;
  undefined1 auStackY_b8 [32];
  FSingleValueTestSorter<UE::Editor::DataStorage::TSortNameView<UE::Editor::DataStorage::FSortById>_>
  local_78;
  ForAnyElementType local_60;
  int local_58;
  int local_54;
  FString local_50;
  FName local_40;
  FName FStack_38;
  FName local_30;
  FName FStack_28;
  FName local_20;
  FName FStack_18;
  ulonglong local_10;
  
  FVar3 = StorageFeatureName;
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  pIVar6 = IModularFeatures::Get();
  iVar4 = (**(code **)((longlong)*pIVar6 + 0x18))(pIVar6,FVar3);
  if (iVar4 < 1) {
    pIVar10 = (ICoreProvider *)0x0;
  }
  else {
    pIVar6 = IModularFeatures::Get();
    lVar7 = (**(code **)((longlong)*pIVar6 + 0x20))(pIVar6,FVar3,0);
    pIVar10 = (ICoreProvider *)(lVar7 + -8);
    if (lVar7 == 0) {
      pIVar10 = (ICoreProvider *)0x0;
    }
  }
  iVar4 = 0;
  if (pIVar10 != (ICoreProvider *)0x0) {
    ::FName::FName(&local_40,"a");
    ::FName::FName(&FStack_38,"bba");
    ::FName::FName(&local_30,"Aba");
    ::FName::FName(&FStack_28,"cba");
    ::FName::FName(&local_20,"ABac");
    ::FName::FName(&FStack_18,"LongName");
    local_60.Data = (FScriptContainerElement *)0x0;
    local_58 = 6;
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,6,0,&local_60,6,&local_54);
    iVar9 = local_58;
    *(FName *)local_60.Data = local_40;
    *(FName *)(local_60.Data + 8) = FStack_38;
    *(FName *)(local_60.Data + 0x10) = local_30;
    *(FName *)(local_60.Data + 0x18) = FStack_28;
    *(FName *)(local_60.Data + 0x20) = local_20;
    *(FName *)(local_60.Data + 0x28) = FStack_18;
    local_78._padding_ =
         (longlong)
         &
         ___7__FSingleValueTestSorter_U__TSortNameView_UFSortById_DataStorage_Editor_UE___DataStorage_Editor_UE___Tests_DataStorage_Editor_UE__6B_
    ;
    local_78.Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Values.ArrayNum = 0;
    local_78.Values.ArrayMax = 0;
    if (local_58 != 0) {
      iVar5 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,local_58,&local_78.Values.AllocatorInstance,
                         &local_78.Values.ArrayNum,&local_78.Values.ArrayMax);
      ConstructItems<UE::Editor::DataStorage::TSortNameView<UE::Editor::DataStorage::FSortById>,FName,int>
                (local_78.Values.AllocatorInstance.Data + (longlong)iVar5 * 0x10,
                 (FName *)local_60.Data,iVar9);
    }
    FSingleValueTestSorter<UE::Editor::DataStorage::TSortNameView<UE::Editor::DataStorage::FSortById>_>
    ::SortByPrefix(&local_78,pIVar10,0);
    if (0 < local_78.Values.ArrayNum + -1) {
      do {
        iVar9 = iVar4 + 1;
        if (*(code **)(local_78._padding_ + 0x18) ==
            FSingleValueTestSorter<UE::Editor::DataStorage::TSortNameView<UE::Editor::DataStorage::FSortById>_>
            ::Compare) {
          iVar4 = FSingleValueTestSorter<UE::Editor::DataStorage::TSortNameView<UE::Editor::DataStorage::FSortById>_>
                  ::Compare(&local_78,pIVar10,(longlong)iVar4,(longlong)iVar9);
        }
        else {
          iVar4 = (**(code **)(local_78._padding_ + 0x18))();
        }
        if (0 < iVar4) {
          pFVar8 = FAutomationTestFramework::Get();
          pFVar1 = pFVar8->CurrentTest;
          pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
          ::FString::FString(&local_50,L"Condition failed");
          (*pcVar2)(pFVar1,&local_50,0);
          if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_50.Data.AllocatorInstance.Data);
          }
          break;
        }
        iVar4 = iVar9;
      } while (iVar9 < local_78.Values.ArrayNum + -1);
    }
    if (local_78.Values.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Values.AllocatorInstance.Data);
    }
    if ((FName *)local_60.Data != (FName *)0x0) {
      FMemory::Free(local_60.Data);
    }
  }
  return;
}

