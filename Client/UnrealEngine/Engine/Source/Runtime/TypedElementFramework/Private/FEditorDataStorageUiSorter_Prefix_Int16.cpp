// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 10

// GetTestFlags @ 142cc7370

EAutomationTestFlags __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_Int16::GetTestFlags
          (FEditorDataStorageUiSorter_Prefix_Int16 *this)

{
  return this->TestFlags;
}

// IsStressTest @ 142cc7380

bool __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_Int16::IsStressTest
          (FEditorDataStorageUiSorter_Prefix_Int16 *this)

{
  return false;
}

// GetRequiredDeviceNum @ 142cc7390

uint __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_Int16::GetRequiredDeviceNum
          (FEditorDataStorageUiSorter_Prefix_Int16 *this)

{
  return 1;
}

// GetTestSourceFileName @ 142cc73a0

FString * __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_Int16::GetTestSourceFileName
          (FEditorDataStorageUiSorter_Prefix_Int16 *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Tests\\Elements\\Framework\\TypedElementDataStorageUiSorterTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 142cc73d0

int __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_Int16::GetTestSourceFileLine
          (FEditorDataStorageUiSorter_Prefix_Int16 *this)

{
  return 0xf6;
}

// GetTests @ 142cc73e0

/* WARNING: Removing unreachable block (ram,0x000142cc755e) */

void __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_Int16::GetTests
          (FEditorDataStorageUiSorter_Prefix_Int16 *this,
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

// RunTest @ 142cc7580

bool __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_Int16::RunTest
          (FEditorDataStorageUiSorter_Prefix_Int16 *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 142cc75b0

FString * __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_Int16::GetBeautifiedTestName
          (FEditorDataStorageUiSorter_Prefix_Int16 *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FEditorDataStorageUiSorter_Prefix_Int16 @ 142cdff20

FEditorDataStorageUiSorter_Prefix_Int16 * __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_Int16::
FEditorDataStorageUiSorter_Prefix_Int16
          (FEditorDataStorageUiSorter_Prefix_Int16 *this,FString *param_1)

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
       (longlong)&___7FEditorDataStorageUiSorter_Prefix_Int16_Tests_DataStorage_Editor_UE__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][EngineFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"Editor::DataStorage::FColumnSorterInterface_Prefix_Int16");
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

// TestBody @ 142cfff00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_Int16::TestBody
          (FEditorDataStorageUiSorter_Prefix_Int16 *this,FString *param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  FScriptContainerElement *pFVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  FName FVar6;
  int iVar7;
  int iVar8;
  IModularFeatures *pIVar9;
  longlong lVar10;
  FAutomationTestFramework *pFVar11;
  ICoreProvider *pIVar12;
  undefined1 auStackY_88 [32];
  FSingleValueTestSorter<short> local_58;
  FString local_40;
  undefined4 local_30;
  ulonglong local_28;
  
  FVar6 = StorageFeatureName;
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_88;
  pIVar9 = IModularFeatures::Get();
  iVar7 = (**(code **)((longlong)*pIVar9 + 0x18))(pIVar9,FVar6);
  if (iVar7 < 1) {
    pIVar12 = (ICoreProvider *)0x0;
  }
  else {
    pIVar9 = IModularFeatures::Get();
    lVar10 = (**(code **)((longlong)*pIVar9 + 0x20))(pIVar9,FVar6,0);
    pIVar12 = (ICoreProvider *)(lVar10 + -8);
    if (lVar10 == 0) {
      pIVar12 = (ICoreProvider *)0x0;
    }
  }
  uVar4 = _UNK_1509da098;
  pFVar3 = ___xmm_f36b00077fff8000002afff8ffff0001;
  iVar7 = 0;
  if (pIVar12 != (ICoreProvider *)0x0) {
    local_58._padding_ = (longlong)&___7__FSingleValueTestSorter_F_Tests_DataStorage_Editor_UE__6B_;
    local_58.Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Values.ArrayNum = 0;
    local_58.Values.ArrayMax = 0;
    local_30 = 0x4000021;
    iVar8 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,10,&local_58.Values.AllocatorInstance,&local_58.Values.ArrayNum,
                       &local_58.Values.ArrayMax);
    *(FScriptContainerElement **)(local_58.Values.AllocatorInstance.Data + (longlong)iVar8 * 2) =
         pFVar3;
    *(undefined8 *)(local_58.Values.AllocatorInstance.Data + (longlong)iVar8 * 2 + 8) = uVar4;
    uVar5 = _UNK_1509da098;
    local_40.Data.AllocatorInstance.Data = pFVar3;
    _UNK_1509da098 = (int)uVar4;
    _UNK_1509da09c = SUB84(uVar4,4);
    local_40.Data.ArrayNum = _UNK_1509da098;
    local_40.Data.ArrayMax = _UNK_1509da09c;
    _UNK_1509da098 = uVar5;
    *(undefined4 *)(local_58.Values.AllocatorInstance.Data + (longlong)iVar8 * 2 + 0x10) = local_30;
    FSingleValueTestSorter<short>::SortByPrefix(&local_58,pIVar12,0);
    if (0 < local_58.Values.ArrayNum + -1) {
      do {
        iVar8 = iVar7 + 1;
        if (*(code **)(local_58._padding_ + 0x18) == FSingleValueTestSorter<short>::Compare) {
          iVar7 = FSingleValueTestSorter<short>::Compare
                            (&local_58,pIVar12,(longlong)iVar7,(longlong)iVar8);
        }
        else {
          iVar7 = (**(code **)(local_58._padding_ + 0x18))();
        }
        if (0 < iVar7) {
          pFVar11 = FAutomationTestFramework::Get();
          pFVar1 = pFVar11->CurrentTest;
          pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
          ::FString::FString(&local_40,L"Condition failed");
          (*pcVar2)(pFVar1,&local_40,0);
          if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_40.Data.AllocatorInstance.Data);
          }
          break;
        }
        iVar7 = iVar8;
      } while (iVar8 < local_58.Values.ArrayNum + -1);
    }
    if (local_58.Values.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Values.AllocatorInstance.Data);
    }
  }
  return;
}

