// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 10

// GetTestFlags @ 142cc6df0

EAutomationTestFlags __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_Int32::GetTestFlags
          (FEditorDataStorageUiSorter_Prefix_Int32 *this)

{
  return this->TestFlags;
}

// IsStressTest @ 142cc6e00

bool __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_Int32::IsStressTest
          (FEditorDataStorageUiSorter_Prefix_Int32 *this)

{
  return false;
}

// GetRequiredDeviceNum @ 142cc6e10

uint __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_Int32::GetRequiredDeviceNum
          (FEditorDataStorageUiSorter_Prefix_Int32 *this)

{
  return 1;
}

// GetTestSourceFileName @ 142cc6e20

FString * __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_Int32::GetTestSourceFileName
          (FEditorDataStorageUiSorter_Prefix_Int32 *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Tests\\Elements\\Framework\\TypedElementDataStorageUiSorterTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 142cc6e50

int __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_Int32::GetTestSourceFileLine
          (FEditorDataStorageUiSorter_Prefix_Int32 *this)

{
  return 0xea;
}

// GetTests @ 142cc6e60

/* WARNING: Removing unreachable block (ram,0x000142cc6fde) */

void __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_Int32::GetTests
          (FEditorDataStorageUiSorter_Prefix_Int32 *this,
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

// RunTest @ 142cc7000

bool __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_Int32::RunTest
          (FEditorDataStorageUiSorter_Prefix_Int32 *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 142cc7030

FString * __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_Int32::GetBeautifiedTestName
          (FEditorDataStorageUiSorter_Prefix_Int32 *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FEditorDataStorageUiSorter_Prefix_Int32 @ 142ce00f0

FEditorDataStorageUiSorter_Prefix_Int32 * __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_Int32::
FEditorDataStorageUiSorter_Prefix_Int32
          (FEditorDataStorageUiSorter_Prefix_Int32 *this,FString *param_1)

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
       (longlong)&___7FEditorDataStorageUiSorter_Prefix_Int32_Tests_DataStorage_Editor_UE__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][EngineFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"Editor::DataStorage::FColumnSorterInterface_Prefix_Int32");
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

// TestBody @ 142d000f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_Int32::TestBody
          (FEditorDataStorageUiSorter_Prefix_Int32 *this,FString *param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  FName FVar7;
  int iVar8;
  int iVar9;
  IModularFeatures *pIVar10;
  longlong lVar11;
  FAutomationTestFramework *pFVar12;
  ICoreProvider *pIVar13;
  undefined1 auStackY_b8 [32];
  FSingleValueTestSorter<int> local_88;
  FString local_70 [3];
  undefined4 local_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  FVar7 = StorageFeatureName;
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  pIVar10 = IModularFeatures::Get();
  iVar8 = (**(code **)((longlong)*pIVar10 + 0x18))(pIVar10,FVar7);
  if (iVar8 < 1) {
    pIVar13 = (ICoreProvider *)0x0;
  }
  else {
    pIVar10 = IModularFeatures::Get();
    lVar11 = (**(code **)((longlong)*pIVar10 + 0x20))(pIVar10,FVar7,0);
    pIVar13 = (ICoreProvider *)(lVar11 + -8);
    if (lVar11 == 0) {
      pIVar13 = (ICoreProvider *)0x0;
    }
  }
  uVar6 = _UNK_1509da0a8;
  uVar5 = ___xmm_ffff301b000000077fffffff80000000;
  uVar4 = _UNK_1509da028;
  uVar3 = ___xmm_0000002afffffff8ffffffff00000001;
  iVar8 = 0;
  if (pIVar13 != (ICoreProvider *)0x0) {
    local_88._padding_ = (longlong)&___7__FSingleValueTestSorter_H_Tests_DataStorage_Editor_UE__6B_;
    local_88.Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.Values.ArrayNum = 0;
    local_88.Values.ArrayMax = 0;
    local_40 = 0x21;
    uStack_3c = 0x400;
    iVar9 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,10,&local_88.Values.AllocatorInstance,&local_88.Values.ArrayNum,
                       &local_88.Values.ArrayMax);
    lVar11 = (longlong)iVar9;
    *(undefined8 *)(local_88.Values.AllocatorInstance.Data + lVar11 * 4) = uVar3;
    *(undefined8 *)(local_88.Values.AllocatorInstance.Data + lVar11 * 4 + 8) = uVar4;
    *(undefined8 *)(local_88.Values.AllocatorInstance.Data + lVar11 * 4 + 0x10) = uVar5;
    *(undefined8 *)(local_88.Values.AllocatorInstance.Data + lVar11 * 4 + 0x10 + 8) = uVar6;
    *(ulonglong *)(local_88.Values.AllocatorInstance.Data + lVar11 * 4 + 0x20) =
         CONCAT44(uStack_3c,local_40);
    FSingleValueTestSorter<int>::SortByPrefix(&local_88,pIVar13,0);
    if (0 < local_88.Values.ArrayNum + -1) {
      do {
        iVar9 = iVar8 + 1;
        if (*(code **)(local_88._padding_ + 0x18) == FSingleValueTestSorter<int>::Compare) {
          iVar8 = FSingleValueTestSorter<int>::Compare
                            (&local_88,pIVar13,(longlong)iVar8,(longlong)iVar9);
        }
        else {
          iVar8 = (**(code **)(local_88._padding_ + 0x18))();
        }
        if (0 < iVar8) {
          pFVar12 = FAutomationTestFramework::Get();
          pFVar1 = pFVar12->CurrentTest;
          pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
          ::FString::FString(local_70,L"Condition failed");
          (*pcVar2)(pFVar1,local_70,0);
          if (local_70[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_70[0].Data.AllocatorInstance.Data);
          }
          break;
        }
        iVar8 = iVar9;
      } while (iVar9 < local_88.Values.ArrayNum + -1);
    }
    if (local_88.Values.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Values.AllocatorInstance.Data);
    }
  }
  return;
}

