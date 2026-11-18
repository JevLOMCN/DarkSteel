// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 10

// GetTestFlags @ 142cc9e70

EAutomationTestFlags __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_Double::GetTestFlags
          (FEditorDataStorageUiSorter_Prefix_Double *this)

{
  return this->TestFlags;
}

// IsStressTest @ 142cc9e80

bool __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_Double::IsStressTest
          (FEditorDataStorageUiSorter_Prefix_Double *this)

{
  return false;
}

// GetRequiredDeviceNum @ 142cc9e90

uint __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_Double::GetRequiredDeviceNum
          (FEditorDataStorageUiSorter_Prefix_Double *this)

{
  return 1;
}

// GetTestSourceFileName @ 142cc9ea0

FString * __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_Double::GetTestSourceFileName
          (FEditorDataStorageUiSorter_Prefix_Double *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Tests\\Elements\\Framework\\TypedElementDataStorageUiSorterTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 142cc9ed0

int __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_Double::GetTestSourceFileLine
          (FEditorDataStorageUiSorter_Prefix_Double *this)

{
  return 0x11a;
}

// GetTests @ 142cc9ee0

/* WARNING: Removing unreachable block (ram,0x000142cca05e) */

void __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_Double::GetTests
          (FEditorDataStorageUiSorter_Prefix_Double *this,
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

// RunTest @ 142cca080

bool __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_Double::RunTest
          (FEditorDataStorageUiSorter_Prefix_Double *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 142cca0b0

FString * __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_Double::GetBeautifiedTestName
          (FEditorDataStorageUiSorter_Prefix_Double *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FEditorDataStorageUiSorter_Prefix_Double @ 142cdf7e0

FEditorDataStorageUiSorter_Prefix_Double * __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_Double::
FEditorDataStorageUiSorter_Prefix_Double
          (FEditorDataStorageUiSorter_Prefix_Double *this,FString *param_1)

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
       (longlong)&___7FEditorDataStorageUiSorter_Prefix_Double_Tests_DataStorage_Editor_UE__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][EngineFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"Editor::DataStorage::FColumnSorterInterface_Prefix_Double")
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

// TestBody @ 142cff5a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_Double::TestBody
          (FEditorDataStorageUiSorter_Prefix_Double *this,FString *param_1)

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
  FName FVar11;
  int iVar12;
  int iVar13;
  IModularFeatures *pIVar14;
  longlong lVar15;
  FAutomationTestFramework *pFVar16;
  ICoreProvider *pIVar17;
  undefined1 auStackY_f8 [32];
  FSingleValueTestSorter<double> local_c8;
  FString local_b0 [5];
  ulonglong local_58;
  
  FVar11 = StorageFeatureName;
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  pIVar14 = IModularFeatures::Get();
  iVar12 = (**(code **)((longlong)*pIVar14 + 0x18))(pIVar14,FVar11);
  if (iVar12 < 1) {
    pIVar17 = (ICoreProvider *)0x0;
  }
  else {
    pIVar14 = IModularFeatures::Get();
    lVar15 = (**(code **)((longlong)*pIVar14 + 0x20))(pIVar14,FVar11,0);
    pIVar17 = (ICoreProvider *)(lVar15 + -8);
    if (lVar15 == 0) {
      pIVar17 = (ICoreProvider *)0x0;
    }
  }
  uVar10 = _UNK_1509da088;
  uVar9 = ___xmm_c18960c532a5e354401c000000000000;
  uVar8 = _UNK_1509da078;
  uVar7 = ___xmm_bff51eb851eb851f3ff70a3d70a3d70a;
  uVar6 = _UNK_1509da048;
  uVar5 = ___xmm_409001cfc6a7ef9e4040f02a9930be0e;
  uVar4 = _UNK_1509da038;
  uVar3 = ___xmm_40451294c447c30dc021bc2f07548818;
  iVar12 = 0;
  if (pIVar17 != (ICoreProvider *)0x0) {
    local_c8._padding_ = (longlong)&___7__FSingleValueTestSorter_N_Tests_DataStorage_Editor_UE__6B_;
    local_c8.Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c8.Values.ArrayNum = 0;
    local_c8.Values.ArrayMax = 0;
    iVar13 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (8,8,8,&local_c8.Values.AllocatorInstance,&local_c8.Values.ArrayNum,
                        &local_c8.Values.ArrayMax);
    lVar15 = (longlong)iVar13;
    *(undefined8 *)(local_c8.Values.AllocatorInstance.Data + lVar15 * 8) = uVar7;
    *(undefined8 *)(local_c8.Values.AllocatorInstance.Data + lVar15 * 8 + 8) = uVar8;
    *(undefined8 *)(local_c8.Values.AllocatorInstance.Data + lVar15 * 8 + 0x10) = uVar3;
    *(undefined8 *)(local_c8.Values.AllocatorInstance.Data + lVar15 * 8 + 0x10 + 8) = uVar4;
    *(undefined8 *)(local_c8.Values.AllocatorInstance.Data + lVar15 * 8 + 0x20) = uVar9;
    *(undefined8 *)(local_c8.Values.AllocatorInstance.Data + lVar15 * 8 + 0x20 + 8) = uVar10;
    *(undefined8 *)(local_c8.Values.AllocatorInstance.Data + lVar15 * 8 + 0x30) = uVar5;
    *(undefined8 *)(local_c8.Values.AllocatorInstance.Data + lVar15 * 8 + 0x30 + 8) = uVar6;
    FSingleValueTestSorter<double>::SortByPrefix(&local_c8,pIVar17,0);
    if (0 < local_c8.Values.ArrayNum + -1) {
      do {
        iVar13 = iVar12 + 1;
        if (*(code **)(local_c8._padding_ + 0x18) == FSingleValueTestSorter<double>::Compare) {
          iVar12 = FSingleValueTestSorter<double>::Compare
                             (&local_c8,pIVar17,(longlong)iVar12,(longlong)iVar13);
        }
        else {
          iVar12 = (**(code **)(local_c8._padding_ + 0x18))();
        }
        if (0 < iVar12) {
          pFVar16 = FAutomationTestFramework::Get();
          pFVar1 = pFVar16->CurrentTest;
          pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
          ::FString::FString(local_b0,L"Condition failed");
          (*pcVar2)(pFVar1,local_b0,0);
          if (local_b0[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_b0[0].Data.AllocatorInstance.Data);
          }
          break;
        }
        iVar12 = iVar13;
      } while (iVar13 < local_c8.Values.ArrayNum + -1);
    }
    if (local_c8.Values.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Values.AllocatorInstance.Data);
    }
  }
  return;
}

