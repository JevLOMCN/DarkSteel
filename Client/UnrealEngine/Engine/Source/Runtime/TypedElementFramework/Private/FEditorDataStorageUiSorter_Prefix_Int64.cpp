// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 10

// GetTestFlags @ 142cc6870

EAutomationTestFlags __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_Int64::GetTestFlags
          (FEditorDataStorageUiSorter_Prefix_Int64 *this)

{
  return this->TestFlags;
}

// IsStressTest @ 142cc6880

bool __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_Int64::IsStressTest
          (FEditorDataStorageUiSorter_Prefix_Int64 *this)

{
  return false;
}

// GetRequiredDeviceNum @ 142cc6890

uint __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_Int64::GetRequiredDeviceNum
          (FEditorDataStorageUiSorter_Prefix_Int64 *this)

{
  return 1;
}

// GetTestSourceFileName @ 142cc68a0

FString * __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_Int64::GetTestSourceFileName
          (FEditorDataStorageUiSorter_Prefix_Int64 *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Tests\\Elements\\Framework\\TypedElementDataStorageUiSorterTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 142cc68d0

int __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_Int64::GetTestSourceFileLine
          (FEditorDataStorageUiSorter_Prefix_Int64 *this)

{
  return 0xde;
}

// GetTests @ 142cc68e0

/* WARNING: Removing unreachable block (ram,0x000142cc6a5e) */

void __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_Int64::GetTests
          (FEditorDataStorageUiSorter_Prefix_Int64 *this,
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

// RunTest @ 142cc6a80

bool __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_Int64::RunTest
          (FEditorDataStorageUiSorter_Prefix_Int64 *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 142cc6ab0

FString * __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_Int64::GetBeautifiedTestName
          (FEditorDataStorageUiSorter_Prefix_Int64 *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FEditorDataStorageUiSorter_Prefix_Int64 @ 142ce02c0

FEditorDataStorageUiSorter_Prefix_Int64 * __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_Int64::
FEditorDataStorageUiSorter_Prefix_Int64
          (FEditorDataStorageUiSorter_Prefix_Int64 *this,FString *param_1)

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
       (longlong)&___7FEditorDataStorageUiSorter_Prefix_Int64_Tests_DataStorage_Editor_UE__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][EngineFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"Editor::DataStorage::FColumnSorterInterface_Prefix_Int64");
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

// TestBody @ 142d00310

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_Int64::TestBody
          (FEditorDataStorageUiSorter_Prefix_Int64 *this,FString *param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  FName FVar13;
  int iVar14;
  int iVar15;
  IModularFeatures *pIVar16;
  longlong lVar17;
  FAutomationTestFramework *pFVar18;
  ICoreProvider *pIVar19;
  undefined1 auStackY_118 [32];
  FSingleValueTestSorter<__int64> local_e8;
  FString local_d0 [6];
  ulonglong local_68;
  
  FVar13 = StorageFeatureName;
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_118;
  pIVar16 = IModularFeatures::Get();
  iVar14 = (**(code **)((longlong)*pIVar16 + 0x18))(pIVar16,FVar13);
  if (iVar14 < 1) {
    pIVar19 = (ICoreProvider *)0x0;
  }
  else {
    pIVar16 = IModularFeatures::Get();
    lVar17 = (**(code **)((longlong)*pIVar16 + 0x20))(pIVar16,FVar13,0);
    pIVar19 = (ICoreProvider *)(lVar17 + -8);
    if (lVar17 == 0) {
      pIVar19 = (ICoreProvider *)0x0;
    }
  }
  uVar12 = _UNK_1509da0c8;
  uVar11 = ___xmm_ffffffffffffffff0000000000000001;
  uVar10 = _UNK_1509da0b8;
  uVar9 = ___xmm_ffffffffffff301b0000000000000007;
  uVar8 = _UNK_1509da018;
  uVar7 = ___xmm_00000000000004000000000000000021;
  uVar6 = _UNK_1509d9fe8;
  uVar5 = ___xmm_000000000000002afffffffffffffff8;
  uVar4 = _UNK_150744198;
  uVar3 = ___xmm_7fffffffffffffff8000000000000000;
  iVar14 = 0;
  if (pIVar19 != (ICoreProvider *)0x0) {
    local_e8._padding_ = (longlong)&___7__FSingleValueTestSorter__J_Tests_DataStorage_Editor_UE__6B_
    ;
    local_e8.Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_e8.Values.ArrayNum = 0;
    local_e8.Values.ArrayMax = 0;
    iVar15 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (8,8,10,&local_e8.Values.AllocatorInstance,&local_e8.Values.ArrayNum,
                        &local_e8.Values.ArrayMax);
    lVar17 = (longlong)iVar15;
    *(undefined8 *)(local_e8.Values.AllocatorInstance.Data + lVar17 * 8) = uVar11;
    *(undefined8 *)(local_e8.Values.AllocatorInstance.Data + lVar17 * 8 + 8) = uVar12;
    *(undefined8 *)(local_e8.Values.AllocatorInstance.Data + lVar17 * 8 + 0x10) = uVar5;
    *(undefined8 *)(local_e8.Values.AllocatorInstance.Data + lVar17 * 8 + 0x10 + 8) = uVar6;
    *(undefined8 *)(local_e8.Values.AllocatorInstance.Data + lVar17 * 8 + 0x20) = uVar3;
    *(undefined8 *)(local_e8.Values.AllocatorInstance.Data + lVar17 * 8 + 0x20 + 8) = uVar4;
    *(undefined8 *)(local_e8.Values.AllocatorInstance.Data + lVar17 * 8 + 0x30) = uVar9;
    *(undefined8 *)(local_e8.Values.AllocatorInstance.Data + lVar17 * 8 + 0x30 + 8) = uVar10;
    *(undefined8 *)(local_e8.Values.AllocatorInstance.Data + lVar17 * 8 + 0x40) = uVar7;
    *(undefined8 *)(local_e8.Values.AllocatorInstance.Data + lVar17 * 8 + 0x40 + 8) = uVar8;
    FSingleValueTestSorter<__int64>::SortByPrefix(&local_e8,pIVar19,0);
    if (0 < local_e8.Values.ArrayNum + -1) {
      do {
        iVar15 = iVar14 + 1;
        if (*(code **)(local_e8._padding_ + 0x18) == FSingleValueTestSorter<__int64>::Compare) {
          iVar14 = FSingleValueTestSorter<__int64>::Compare
                             (&local_e8,pIVar19,(longlong)iVar14,(longlong)iVar15);
        }
        else {
          iVar14 = (**(code **)(local_e8._padding_ + 0x18))();
        }
        if (0 < iVar14) {
          pFVar18 = FAutomationTestFramework::Get();
          pFVar1 = pFVar18->CurrentTest;
          pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
          ::FString::FString(local_d0,L"Condition failed");
          (*pcVar2)(pFVar1,local_d0,0);
          if (local_d0[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_d0[0].Data.AllocatorInstance.Data);
          }
          break;
        }
        iVar14 = iVar15;
      } while (iVar15 < local_e8.Values.ArrayNum + -1);
    }
    if (local_e8.Values.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Values.AllocatorInstance.Data);
    }
  }
  return;
}

