// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 10

// GetTestFlags @ 142cca0e0

EAutomationTestFlags __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_8ByteMultiValue::GetTestFlags
          (FEditorDataStorageUiSorter_Prefix_8ByteMultiValue *this)

{
  return this->TestFlags;
}

// IsStressTest @ 142cca0f0

bool __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_8ByteMultiValue::IsStressTest
          (FEditorDataStorageUiSorter_Prefix_8ByteMultiValue *this)

{
  return false;
}

// GetRequiredDeviceNum @ 142cca100

uint __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_8ByteMultiValue::
GetRequiredDeviceNum(FEditorDataStorageUiSorter_Prefix_8ByteMultiValue *this)

{
  return 1;
}

// GetTestSourceFileName @ 142cca110

FString * __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_8ByteMultiValue::
GetTestSourceFileName
          (FEditorDataStorageUiSorter_Prefix_8ByteMultiValue *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Tests\\Elements\\Framework\\TypedElementDataStorageUiSorterTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 142cca140

int __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_8ByteMultiValue::
GetTestSourceFileLine(FEditorDataStorageUiSorter_Prefix_8ByteMultiValue *this)

{
  return 0x311;
}

// GetTests @ 142cca1a0

/* WARNING: Removing unreachable block (ram,0x000142cca31e) */

void __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_8ByteMultiValue::GetTests
          (FEditorDataStorageUiSorter_Prefix_8ByteMultiValue *this,
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

// RunTest @ 142cca340

bool __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_8ByteMultiValue::RunTest
          (FEditorDataStorageUiSorter_Prefix_8ByteMultiValue *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 142cca370

FString * __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_8ByteMultiValue::
GetBeautifiedTestName
          (FEditorDataStorageUiSorter_Prefix_8ByteMultiValue *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FEditorDataStorageUiSorter_Prefix_8ByteMultiValue @ 142cdf0a0

FEditorDataStorageUiSorter_Prefix_8ByteMultiValue * __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_8ByteMultiValue::
FEditorDataStorageUiSorter_Prefix_8ByteMultiValue
          (FEditorDataStorageUiSorter_Prefix_8ByteMultiValue *this,FString *param_1)

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
       &___7FEditorDataStorageUiSorter_Prefix_8ByteMultiValue_Tests_DataStorage_Editor_UE__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][EngineFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,
                              "Editor::DataStorage::FColumnSorterInterface_Prefix_8ByteMultiValue");
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

// TestBody @ 142cfeb10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_8ByteMultiValue::TestBody
          (FEditorDataStorageUiSorter_Prefix_8ByteMultiValue *this,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  FAutomationTestBase *pFVar2;
  code *pcVar3;
  FName FVar4;
  int iVar5;
  int iVar6;
  IModularFeatures *pIVar7;
  longlong lVar8;
  FAutomationTestFramework *pFVar9;
  ICoreProvider *pIVar10;
  undefined1 auStackY_138 [32];
  FMultiValueTestSorter<unsigned___int64,unsigned___int64,unsigned___int64> local_108;
  FString local_f0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  FVar4 = StorageFeatureName;
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_138;
  pIVar7 = IModularFeatures::Get();
  iVar5 = (**(code **)((longlong)*pIVar7 + 0x18))(pIVar7,FVar4);
  if (iVar5 < 1) {
    pIVar10 = (ICoreProvider *)0x0;
  }
  else {
    pIVar7 = IModularFeatures::Get();
    lVar8 = (**(code **)((longlong)*pIVar7 + 0x20))(pIVar7,FVar4,0);
    pIVar10 = (ICoreProvider *)(lVar8 + -8);
    if (lVar8 == 0) {
      pIVar10 = (ICoreProvider *)0x0;
    }
  }
  iVar5 = 0;
  if (pIVar10 != (ICoreProvider *)0x0) {
    local_b8 = ___xmm_00000000000000580000000000000066;
    uStack_b0 = _UNK_1509d9ff8;
    local_88 = ___xmm_00000000000000010000000000000010;
    uStack_80 = _UNK_1509d9fc8;
    local_108._padding_ =
         (longlong)&___7__FMultiValueTestSorter__K_K_K_Tests_DataStorage_Editor_UE__6B_;
    local_58 = ___xmm_000000000000000c0000000000000020;
    uStack_50 = _UNK_1509d9fd8;
    local_28 = ___xmm_00000000000000630000000000000011;
    uStack_20 = _UNK_1509da008;
    local_108.Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_108.Values.ArrayNum = 0;
    local_108.Values.ArrayMax = 0;
    local_d8 = 0x2a;
    uStack_d0 = 0x58;
    local_c8 = 0x1f;
    uStack_c0 = 3;
    local_a8 = 0x58;
    uStack_a0 = 0x2a;
    local_98 = 400;
    uStack_90 = 0x58;
    local_78 = 0x58;
    uStack_70 = 0x20;
    local_68 = 0x18;
    uStack_60 = 0x58;
    local_48 = 4;
    uStack_40 = 0x7acd6;
    local_38 = 0x57;
    uStack_30 = 0x7acd6;
    iVar6 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,8,&local_108.Values.AllocatorInstance,&local_108.Values.ArrayNum,
                       &local_108.Values.ArrayMax);
    pFVar1 = local_108.Values.AllocatorInstance.Data + (longlong)iVar6 * 0x18;
    *(undefined8 *)pFVar1 = local_d8;
    *(undefined8 *)(pFVar1 + 8) = uStack_d0;
    *(undefined8 *)(pFVar1 + 0x10) = local_c8;
    *(undefined8 *)(pFVar1 + 0x18) = uStack_c0;
    *(undefined8 *)(pFVar1 + 0x20) = local_b8;
    *(undefined8 *)(pFVar1 + 0x28) = uStack_b0;
    *(undefined8 *)(pFVar1 + 0x30) = local_a8;
    *(undefined8 *)(pFVar1 + 0x38) = uStack_a0;
    *(undefined8 *)(pFVar1 + 0x40) = local_98;
    *(undefined8 *)(pFVar1 + 0x48) = uStack_90;
    *(undefined8 *)(pFVar1 + 0x50) = local_88;
    *(undefined8 *)(pFVar1 + 0x58) = uStack_80;
    *(undefined8 *)(pFVar1 + 0x60) = local_78;
    *(undefined8 *)(pFVar1 + 0x68) = uStack_70;
    *(undefined8 *)(pFVar1 + 0x70) = local_68;
    *(undefined8 *)(pFVar1 + 0x78) = uStack_60;
    *(undefined8 *)(pFVar1 + 0x80) = local_58;
    *(undefined8 *)(pFVar1 + 0x88) = uStack_50;
    *(undefined8 *)(pFVar1 + 0x90) = local_48;
    *(undefined8 *)(pFVar1 + 0x98) = uStack_40;
    *(undefined8 *)(pFVar1 + 0xa0) = local_38;
    *(undefined8 *)(pFVar1 + 0xa8) = uStack_30;
    *(undefined8 *)(pFVar1 + 0xb0) = local_28;
    *(undefined8 *)(pFVar1 + 0xb8) = uStack_20;
    FMultiValueTestSorter<unsigned___int64,unsigned___int64,unsigned___int64>::SortByPrefix
              (&local_108,pIVar10,0,0,7);
    FMultiValueTestSorter<unsigned___int64,unsigned___int64,unsigned___int64>::SortByPrefix
              (&local_108,pIVar10,8,3,6);
    FMultiValueTestSorter<unsigned___int64,unsigned___int64,unsigned___int64>::SortByPrefix
              (&local_108,pIVar10,0x10,4,5);
    if (0 < local_108.Values.ArrayNum + -1) {
      do {
        iVar6 = iVar5 + 1;
        if (*(code **)(local_108._padding_ + 0x18) ==
            FMultiValueTestSorter<unsigned___int64,unsigned___int64,unsigned___int64>::Compare) {
          iVar5 = FMultiValueTestSorter<unsigned___int64,unsigned___int64,unsigned___int64>::Compare
                            (&local_108,pIVar10,(longlong)iVar5,(longlong)iVar6);
        }
        else {
          iVar5 = (**(code **)(local_108._padding_ + 0x18))();
        }
        if (0 < iVar5) {
          pFVar9 = FAutomationTestFramework::Get();
          pFVar2 = pFVar9->CurrentTest;
          pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
          ::FString::FString(&local_f0,L"Condition failed");
          (*pcVar3)(pFVar2,&local_f0,0);
          if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_f0.Data.AllocatorInstance.Data);
          }
          break;
        }
        iVar5 = iVar6;
      } while (iVar6 < local_108.Values.ArrayNum + -1);
    }
    if (local_108.Values.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Values.AllocatorInstance.Data);
    }
  }
  return;
}

