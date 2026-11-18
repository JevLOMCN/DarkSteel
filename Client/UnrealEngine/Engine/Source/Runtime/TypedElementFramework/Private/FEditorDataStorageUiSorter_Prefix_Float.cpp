// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 10

// GetTestFlags @ 142cc98a0

EAutomationTestFlags __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_Float::GetTestFlags
          (FEditorDataStorageUiSorter_Prefix_Float *this)

{
  return this->TestFlags;
}

// IsStressTest @ 142cc98b0

bool __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_Float::IsStressTest
          (FEditorDataStorageUiSorter_Prefix_Float *this)

{
  return false;
}

// GetRequiredDeviceNum @ 142cc98c0

uint __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_Float::GetRequiredDeviceNum
          (FEditorDataStorageUiSorter_Prefix_Float *this)

{
  return 1;
}

// GetTestSourceFileName @ 142cc9920

FString * __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_Float::GetTestSourceFileName
          (FEditorDataStorageUiSorter_Prefix_Float *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Tests\\Elements\\Framework\\TypedElementDataStorageUiSorterTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 142cc9950

int __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_Float::GetTestSourceFileLine
          (FEditorDataStorageUiSorter_Prefix_Float *this)

{
  return 0x10e;
}

// GetTests @ 142cc9960

/* WARNING: Removing unreachable block (ram,0x000142cc9ade) */

void __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_Float::GetTests
          (FEditorDataStorageUiSorter_Prefix_Float *this,
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

// RunTest @ 142cc9b00

bool __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_Float::RunTest
          (FEditorDataStorageUiSorter_Prefix_Float *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 142cc9b30

FString * __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_Float::GetBeautifiedTestName
          (FEditorDataStorageUiSorter_Prefix_Float *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FEditorDataStorageUiSorter_Prefix_Float @ 142cdfd50

FEditorDataStorageUiSorter_Prefix_Float * __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_Float::
FEditorDataStorageUiSorter_Prefix_Float
          (FEditorDataStorageUiSorter_Prefix_Float *this,FString *param_1)

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
       (longlong)&___7FEditorDataStorageUiSorter_Prefix_Float_Tests_DataStorage_Editor_UE__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][EngineFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"Editor::DataStorage::FColumnSorterInterface_Prefix_Float");
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

// TestBody @ 142cffd10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_Float::TestBody
          (FEditorDataStorageUiSorter_Prefix_Float *this,FString *param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  FScriptContainerElement *pFVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  FName FVar8;
  int iVar9;
  int iVar10;
  IModularFeatures *pIVar11;
  longlong lVar12;
  FAutomationTestFramework *pFVar13;
  ICoreProvider *pIVar14;
  undefined1 auStackY_98 [32];
  FSingleValueTestSorter<float> local_68;
  FString local_50;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  FVar8 = StorageFeatureName;
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_98;
  pIVar11 = IModularFeatures::Get();
  iVar9 = (**(code **)((longlong)*pIVar11 + 0x18))(pIVar11,FVar8);
  if (iVar9 < 1) {
    pIVar14 = (ICoreProvider *)0x0;
  }
  else {
    pIVar11 = IModularFeatures::Get();
    lVar12 = (**(code **)((longlong)*pIVar11 + 0x20))(pIVar11,FVar8,0);
    pIVar14 = (ICoreProvider *)(lVar12 + -8);
    if (lVar12 == 0) {
      pIVar14 = (ICoreProvider *)0x0;
    }
  }
  uVar7 = _UNK_1509da068;
  uVar6 = ___xmm_44800e7e42078155cc4b062a40e00000;
  uVar4 = _UNK_1509da058;
  pFVar3 = ___xmm_422894a6c10de178bfa8f5c33fb851ec;
  iVar9 = 0;
  if (pIVar14 != (ICoreProvider *)0x0) {
    local_68._padding_ = (longlong)&___7__FSingleValueTestSorter_M_Tests_DataStorage_Editor_UE__6B_;
    local_68.Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.Values.ArrayNum = 0;
    local_68.Values.ArrayMax = 0;
    iVar10 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (4,4,8,&local_68.Values.AllocatorInstance,&local_68.Values.ArrayNum,
                        &local_68.Values.ArrayMax);
    uVar5 = _UNK_1509da058;
    local_50.Data.AllocatorInstance.Data = pFVar3;
    _UNK_1509da058 = (int)uVar4;
    _UNK_1509da05c = SUB84(uVar4,4);
    local_50.Data.ArrayNum = _UNK_1509da058;
    local_50.Data.ArrayMax = _UNK_1509da05c;
    local_40 = uVar6;
    uStack_38 = uVar7;
    _UNK_1509da058 = uVar5;
    *(FScriptContainerElement **)(local_68.Values.AllocatorInstance.Data + (longlong)iVar10 * 4) =
         pFVar3;
    *(undefined8 *)(local_68.Values.AllocatorInstance.Data + (longlong)iVar10 * 4 + 8) = uVar4;
    *(undefined8 *)(local_68.Values.AllocatorInstance.Data + (longlong)iVar10 * 4 + 0x10) = uVar6;
    *(undefined8 *)(local_68.Values.AllocatorInstance.Data + (longlong)iVar10 * 4 + 0x10 + 8) =
         uVar7;
    FSingleValueTestSorter<float>::SortByPrefix(&local_68,pIVar14,0);
    if (0 < local_68.Values.ArrayNum + -1) {
      do {
        iVar10 = iVar9 + 1;
        if (*(code **)(local_68._padding_ + 0x18) == FSingleValueTestSorter<float>::Compare) {
          iVar9 = FSingleValueTestSorter<float>::Compare
                            (&local_68,pIVar14,(longlong)iVar9,(longlong)iVar10);
        }
        else {
          iVar9 = (**(code **)(local_68._padding_ + 0x18))();
        }
        if (0 < iVar9) {
          pFVar13 = FAutomationTestFramework::Get();
          pFVar1 = pFVar13->CurrentTest;
          pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
          ::FString::FString(&local_50,L"Condition failed");
          (*pcVar2)(pFVar1,&local_50,0);
          if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_50.Data.AllocatorInstance.Data);
          }
          break;
        }
        iVar9 = iVar10;
      } while (iVar10 < local_68.Values.ArrayNum + -1);
    }
    if (local_68.Values.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Values.AllocatorInstance.Data);
    }
  }
  return;
}

