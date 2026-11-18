// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 10

// GetTestFlags @ 142cc5d70

EAutomationTestFlags __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_UInt32::GetTestFlags
          (FEditorDataStorageUiSorter_Prefix_UInt32 *this)

{
  return this->TestFlags;
}

// IsStressTest @ 142cc5d80

bool __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_UInt32::IsStressTest
          (FEditorDataStorageUiSorter_Prefix_UInt32 *this)

{
  return false;
}

// GetRequiredDeviceNum @ 142cc5d90

uint __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_UInt32::GetRequiredDeviceNum
          (FEditorDataStorageUiSorter_Prefix_UInt32 *this)

{
  return 1;
}

// GetTestSourceFileName @ 142cc5da0

FString * __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_UInt32::GetTestSourceFileName
          (FEditorDataStorageUiSorter_Prefix_UInt32 *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Tests\\Elements\\Framework\\TypedElementDataStorageUiSorterTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 142cc5dd0

int __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_UInt32::GetTestSourceFileLine
          (FEditorDataStorageUiSorter_Prefix_UInt32 *this)

{
  return 0xba;
}

// GetTests @ 142cc5de0

/* WARNING: Removing unreachable block (ram,0x000142cc5f5e) */

void __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_UInt32::GetTests
          (FEditorDataStorageUiSorter_Prefix_UInt32 *this,
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

// RunTest @ 142cc5f80

bool __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_UInt32::RunTest
          (FEditorDataStorageUiSorter_Prefix_UInt32 *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 142cc5fb0

FString * __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_UInt32::GetBeautifiedTestName
          (FEditorDataStorageUiSorter_Prefix_UInt32 *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FEditorDataStorageUiSorter_Prefix_UInt32 @ 142ce1a50

FEditorDataStorageUiSorter_Prefix_UInt32 * __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_UInt32::
FEditorDataStorageUiSorter_Prefix_UInt32
          (FEditorDataStorageUiSorter_Prefix_UInt32 *this,FString *param_1)

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
       (longlong)&___7FEditorDataStorageUiSorter_Prefix_UInt32_Tests_DataStorage_Editor_UE__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][EngineFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"Editor::DataStorage::FColumnSorterInterface_Prefix_UInt32")
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

// TestBody @ 142d05d60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_UInt32::TestBody
          (FEditorDataStorageUiSorter_Prefix_UInt32 *this,FString *param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  FName FVar3;
  int iVar4;
  int iVar5;
  IModularFeatures *pIVar6;
  longlong lVar7;
  FAutomationTestFramework *pFVar8;
  ICoreProvider *pIVar9;
  undefined1 auStackY_78 [32];
  FSingleValueTestSorter<unsigned_int> local_48;
  FString local_30;
  undefined4 local_20;
  ulonglong local_18;
  
  FVar3 = StorageFeatureName;
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_78;
  pIVar6 = IModularFeatures::Get();
  iVar4 = (**(code **)((longlong)*pIVar6 + 0x18))(pIVar6,FVar3);
  if (iVar4 < 1) {
    pIVar9 = (ICoreProvider *)0x0;
  }
  else {
    pIVar6 = IModularFeatures::Get();
    lVar7 = (**(code **)((longlong)*pIVar6 + 0x20))(pIVar6,FVar3,0);
    pIVar9 = (ICoreProvider *)(lVar7 + -8);
    if (lVar7 == 0) {
      pIVar9 = (ICoreProvider *)0x0;
    }
  }
  iVar4 = 0;
  if (pIVar9 != (ICoreProvider *)0x0) {
    local_48.Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48._padding_ = (longlong)&___7__FSingleValueTestSorter_I_Tests_DataStorage_Editor_UE__6B_;
    local_48.Values.ArrayNum = 0;
    local_48.Values.ArrayMax = 0;
    local_30.Data.AllocatorInstance.Data._0_4_ = 1;
    local_30.Data.AllocatorInstance.Data._4_4_ = 0x2a;
    local_30.Data.ArrayNum = 7;
    local_30.Data.ArrayMax = 0x21;
    local_20 = 0x400;
    iVar5 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,5,&local_48.Values.AllocatorInstance,&local_48.Values.ArrayNum,
                       &local_48.Values.ArrayMax);
    *(ulonglong *)(local_48.Values.AllocatorInstance.Data + (longlong)iVar5 * 4) =
         CONCAT44(local_30.Data.AllocatorInstance.Data._4_4_,
                  local_30.Data.AllocatorInstance.Data._0_4_);
    *(ulonglong *)(local_48.Values.AllocatorInstance.Data + (longlong)iVar5 * 4 + 8) =
         CONCAT44(local_30.Data.ArrayMax,local_30.Data.ArrayNum);
    *(undefined4 *)(local_48.Values.AllocatorInstance.Data + (longlong)iVar5 * 4 + 0x10) = local_20;
    FSingleValueTestSorter<unsigned_int>::SortByPrefix(&local_48,pIVar9,0);
    if (0 < local_48.Values.ArrayNum + -1) {
      do {
        iVar5 = iVar4 + 1;
        if (*(code **)(local_48._padding_ + 0x18) == FSingleValueTestSorter<unsigned_int>::Compare)
        {
          iVar4 = FSingleValueTestSorter<unsigned_int>::Compare
                            (&local_48,pIVar9,(longlong)iVar4,(longlong)iVar5);
        }
        else {
          iVar4 = (**(code **)(local_48._padding_ + 0x18))();
        }
        if (0 < iVar4) {
          pFVar8 = FAutomationTestFramework::Get();
          pFVar1 = pFVar8->CurrentTest;
          pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
          ::FString::FString(&local_30,L"Condition failed");
          (*pcVar2)(pFVar1,&local_30,0);
          if ((void *)CONCAT44(local_30.Data.AllocatorInstance.Data._4_4_,
                               local_30.Data.AllocatorInstance.Data._0_4_) != (void *)0x0) {
            FMemory::Free((void *)CONCAT44(local_30.Data.AllocatorInstance.Data._4_4_,
                                           local_30.Data.AllocatorInstance.Data._0_4_));
          }
          break;
        }
        iVar4 = iVar5;
      } while (iVar5 < local_48.Values.ArrayNum + -1);
    }
    if (local_48.Values.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Values.AllocatorInstance.Data);
    }
  }
  return;
}

