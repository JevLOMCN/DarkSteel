// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 10

// GetTestFlags @ 142ccb8b0

EAutomationTestFlags __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_4ByteMultiValue::GetTestFlags
          (FEditorDataStorageUiSorter_Prefix_4ByteMultiValue *this)

{
  return this->TestFlags;
}

// IsStressTest @ 142ccb8c0

bool __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_4ByteMultiValue::IsStressTest
          (FEditorDataStorageUiSorter_Prefix_4ByteMultiValue *this)

{
  return false;
}

// GetRequiredDeviceNum @ 142ccb8d0

uint __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_4ByteMultiValue::
GetRequiredDeviceNum(FEditorDataStorageUiSorter_Prefix_4ByteMultiValue *this)

{
  return 1;
}

// GetTestSourceFileName @ 142ccb8e0

FString * __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_4ByteMultiValue::
GetTestSourceFileName
          (FEditorDataStorageUiSorter_Prefix_4ByteMultiValue *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Tests\\Elements\\Framework\\TypedElementDataStorageUiSorterTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 142ccb910

int __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_4ByteMultiValue::
GetTestSourceFileLine(FEditorDataStorageUiSorter_Prefix_4ByteMultiValue *this)

{
  return 0x32a;
}

// GetTests @ 142ccb920

/* WARNING: Removing unreachable block (ram,0x000142ccba9e) */

void __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_4ByteMultiValue::GetTests
          (FEditorDataStorageUiSorter_Prefix_4ByteMultiValue *this,
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

// RunTest @ 142ccbac0

bool __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_4ByteMultiValue::RunTest
          (FEditorDataStorageUiSorter_Prefix_4ByteMultiValue *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 142ccbaf0

FString * __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_4ByteMultiValue::
GetBeautifiedTestName
          (FEditorDataStorageUiSorter_Prefix_4ByteMultiValue *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FEditorDataStorageUiSorter_Prefix_4ByteMultiValue @ 142cdeed0

FEditorDataStorageUiSorter_Prefix_4ByteMultiValue * __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_4ByteMultiValue::
FEditorDataStorageUiSorter_Prefix_4ByteMultiValue
          (FEditorDataStorageUiSorter_Prefix_4ByteMultiValue *this,FString *param_1)

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
       &___7FEditorDataStorageUiSorter_Prefix_4ByteMultiValue_Tests_DataStorage_Editor_UE__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][EngineFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,
                              "Editor::DataStorage::FColumnSorterInterface_Prefix_4ByteMultiValue");
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

// TestBody @ 142cfe850

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_4ByteMultiValue::TestBody
          (FEditorDataStorageUiSorter_Prefix_4ByteMultiValue *this,FString *param_1)

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
  undefined1 auStackY_d8 [32];
  FMultiValueTestSorter<unsigned_int,unsigned_int,unsigned_int> local_a8;
  FString local_90;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  FVar3 = StorageFeatureName;
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_d8;
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
    local_a8.Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a8._padding_ = (longlong)&___7__FMultiValueTestSorter_III_Tests_DataStorage_Editor_UE__6B_
    ;
    local_a8.Values.ArrayNum = 0;
    local_a8.Values.ArrayMax = 0;
    local_78 = 0x2a;
    uStack_74 = 0x58;
    uStack_70 = 0x1f;
    uStack_6c = 3;
    local_68 = 0x66;
    uStack_64 = 0x58;
    uStack_60 = 0x58;
    uStack_5c = 0x2a;
    local_58 = 400;
    uStack_54 = 0x58;
    uStack_50 = 0x10;
    uStack_4c = 1;
    local_48 = 0x58;
    uStack_44 = 0x20;
    uStack_40 = 0x18;
    uStack_3c = 0x58;
    local_38 = 0x20;
    uStack_34 = 0xc;
    uStack_30 = 4;
    uStack_2c = 0x7acd6;
    local_28 = 0x57;
    uStack_24 = 0x7acd6;
    uStack_20 = 0x11;
    uStack_1c = 99;
    iVar5 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xc,4,8,&local_a8.Values.AllocatorInstance,&local_a8.Values.ArrayNum,
                       &local_a8.Values.ArrayMax);
    lVar7 = (longlong)iVar5;
    *(ulonglong *)(local_a8.Values.AllocatorInstance.Data + lVar7 * 0xc) =
         CONCAT44(uStack_74,local_78);
    *(ulonglong *)(local_a8.Values.AllocatorInstance.Data + lVar7 * 0xc + 8) =
         CONCAT44(uStack_6c,uStack_70);
    *(ulonglong *)(local_a8.Values.AllocatorInstance.Data + lVar7 * 0xc + 0x10) =
         CONCAT44(uStack_64,local_68);
    *(ulonglong *)(local_a8.Values.AllocatorInstance.Data + lVar7 * 0xc + 0x10 + 8) =
         CONCAT44(uStack_5c,uStack_60);
    *(ulonglong *)(local_a8.Values.AllocatorInstance.Data + lVar7 * 0xc + 0x20) =
         CONCAT44(uStack_54,local_58);
    *(ulonglong *)(local_a8.Values.AllocatorInstance.Data + lVar7 * 0xc + 0x20 + 8) =
         CONCAT44(uStack_4c,uStack_50);
    *(ulonglong *)(local_a8.Values.AllocatorInstance.Data + lVar7 * 0xc + 0x30) =
         CONCAT44(uStack_44,local_48);
    *(ulonglong *)(local_a8.Values.AllocatorInstance.Data + lVar7 * 0xc + 0x30 + 8) =
         CONCAT44(uStack_3c,uStack_40);
    *(ulonglong *)(local_a8.Values.AllocatorInstance.Data + lVar7 * 0xc + 0x40) =
         CONCAT44(uStack_34,local_38);
    *(ulonglong *)(local_a8.Values.AllocatorInstance.Data + lVar7 * 0xc + 0x40 + 8) =
         CONCAT44(uStack_2c,uStack_30);
    *(ulonglong *)(local_a8.Values.AllocatorInstance.Data + lVar7 * 0xc + 0x50) =
         CONCAT44(uStack_24,local_28);
    *(ulonglong *)(local_a8.Values.AllocatorInstance.Data + lVar7 * 0xc + 0x50 + 8) =
         CONCAT44(uStack_1c,uStack_20);
    FMultiValueTestSorter<unsigned_int,unsigned_int,unsigned_int>::SortByPrefix
              (&local_a8,pIVar9,0,0,7);
    FMultiValueTestSorter<unsigned_int,unsigned_int,unsigned_int>::SortByPrefix
              (&local_a8,pIVar9,8,4,5);
    if (0 < local_a8.Values.ArrayNum + -1) {
      do {
        iVar5 = iVar4 + 1;
        if (*(code **)(local_a8._padding_ + 0x18) ==
            FMultiValueTestSorter<unsigned_int,unsigned_int,unsigned_int>::Compare) {
          iVar4 = FMultiValueTestSorter<unsigned_int,unsigned_int,unsigned_int>::Compare
                            (&local_a8,pIVar9,(longlong)iVar4,(longlong)iVar5);
        }
        else {
          iVar4 = (**(code **)(local_a8._padding_ + 0x18))();
        }
        if (0 < iVar4) {
          pFVar8 = FAutomationTestFramework::Get();
          pFVar1 = pFVar8->CurrentTest;
          pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
          ::FString::FString(&local_90,L"Condition failed");
          (*pcVar2)(pFVar1,&local_90,0);
          if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_90.Data.AllocatorInstance.Data);
          }
          break;
        }
        iVar4 = iVar5;
      } while (iVar5 < local_a8.Values.ArrayNum + -1);
    }
    if (local_a8.Values.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Values.AllocatorInstance.Data);
    }
  }
  return;
}

