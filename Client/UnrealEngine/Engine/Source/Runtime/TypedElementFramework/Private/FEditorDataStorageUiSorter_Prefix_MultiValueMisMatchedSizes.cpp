// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 10

// GetTestFlags @ 142ccc2a0

EAutomationTestFlags __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_MultiValueMisMatchedSizes::
GetTestFlags(FEditorDataStorageUiSorter_Prefix_MultiValueMisMatchedSizes *this)

{
  return this->TestFlags;
}

// IsStressTest @ 142ccc2b0

bool __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_MultiValueMisMatchedSizes::
IsStressTest(FEditorDataStorageUiSorter_Prefix_MultiValueMisMatchedSizes *this)

{
  return false;
}

// GetRequiredDeviceNum @ 142ccc2c0

uint __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_MultiValueMisMatchedSizes::
GetRequiredDeviceNum(FEditorDataStorageUiSorter_Prefix_MultiValueMisMatchedSizes *this)

{
  return 1;
}

// GetTestSourceFileName @ 142ccc2d0

FString * __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_MultiValueMisMatchedSizes::
GetTestSourceFileName
          (FEditorDataStorageUiSorter_Prefix_MultiValueMisMatchedSizes *this,
          FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Tests\\Elements\\Framework\\TypedElementDataStorageUiSorterTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 142ccc300

int __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_MultiValueMisMatchedSizes::
GetTestSourceFileLine(FEditorDataStorageUiSorter_Prefix_MultiValueMisMatchedSizes *this)

{
  return 0x342;
}

// GetTests @ 142ccc310

/* WARNING: Removing unreachable block (ram,0x000142ccc48e) */

void __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_MultiValueMisMatchedSizes::
GetTests(FEditorDataStorageUiSorter_Prefix_MultiValueMisMatchedSizes *this,
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

// RunTest @ 142ccc4b0

bool __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_MultiValueMisMatchedSizes::RunTest
          (FEditorDataStorageUiSorter_Prefix_MultiValueMisMatchedSizes *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 142ccc4e0

FString * __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_MultiValueMisMatchedSizes::
GetBeautifiedTestName
          (FEditorDataStorageUiSorter_Prefix_MultiValueMisMatchedSizes *this,
          FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FEditorDataStorageUiSorter_Prefix_MultiValueMisMatchedSizes @ 142ce0660

FEditorDataStorageUiSorter_Prefix_MultiValueMisMatchedSizes * __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_MultiValueMisMatchedSizes::
FEditorDataStorageUiSorter_Prefix_MultiValueMisMatchedSizes
          (FEditorDataStorageUiSorter_Prefix_MultiValueMisMatchedSizes *this,FString *param_1)

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
       ___7FEditorDataStorageUiSorter_Prefix_MultiValueMisMatchedSizes_Tests_DataStorage_Editor_UE__6B_
  ;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][EngineFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,
                              "Editor::DataStorage::FColumnSorterInterface_Prefix_MultiValueMisMatchedSizes"
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

// TestBody @ 142d00750

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_MultiValueMisMatchedSizes::
TestBody(FEditorDataStorageUiSorter_Prefix_MultiValueMisMatchedSizes *this,FString *param_1)

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
  undefined1 auStackY_108 [32];
  FMultiValueTestSorter<signed_char,unsigned_short,unsigned___int64> local_d8;
  FString local_c0;
  undefined1 local_a8;
  undefined1 uStack_a7;
  undefined2 uStack_a6;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined1 local_98;
  undefined1 uStack_97;
  undefined2 uStack_96;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined1 local_88;
  undefined1 uStack_87;
  undefined2 uStack_86;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined1 local_78;
  undefined1 uStack_77;
  undefined2 uStack_76;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined1 local_68;
  undefined1 uStack_67;
  undefined2 uStack_66;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined1 local_58;
  undefined1 uStack_57;
  undefined2 uStack_56;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined1 local_48;
  undefined1 uStack_47;
  undefined2 uStack_46;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined1 local_38;
  undefined1 uStack_37;
  undefined2 uStack_36;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined1 local_28;
  undefined1 uStack_27;
  undefined2 uStack_26;
  undefined4 uStack_24;
  undefined8 uStack_20;
  ulonglong local_18;
  
  FVar3 = StorageFeatureName;
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_108;
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
    local_d8.Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    uStack_a6 = 0x58;
    local_d8._padding_ =
         (longlong)&___7__FMultiValueTestSorter_CG_K_Tests_DataStorage_Editor_UE__6B_;
    uStack_90 = 0x58;
    uStack_96 = 0x66;
    local_88 = 0x58;
    uStack_86 = 0x2a;
    local_78 = 0x58;
    uStack_60 = 0xaabbccdd11223333;
    local_68 = 0x58;
    uStack_50 = 0xaabbccdd11223344;
    uStack_66 = 0x20;
    uStack_40 = 0xaabbccdd11223322;
    uStack_36 = 0xacd6;
    uStack_26 = 0x11;
    uStack_56 = 0x20;
    uStack_46 = 0x20;
    local_d8.Values.ArrayNum = 0;
    local_d8.Values.ArrayMax = 0;
    local_a8 = 0x2a;
    uStack_a0 = 0x1f;
    local_98 = 0xfd;
    uStack_80 = 400;
    uStack_76 = 0x10;
    uStack_70 = 1;
    local_58 = 0x58;
    local_48 = 0x58;
    local_38 = 4;
    uStack_30 = 0x57;
    local_28 = 0xff;
    uStack_20 = 99;
    iVar5 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,9,&local_d8.Values.AllocatorInstance,&local_d8.Values.ArrayNum,
                       &local_d8.Values.ArrayMax);
    lVar7 = (longlong)iVar5;
    *(ulonglong *)(local_d8.Values.AllocatorInstance.Data + lVar7 * 0x10) =
         CONCAT44(uStack_a4,CONCAT22(uStack_a6,CONCAT11(uStack_a7,local_a8)));
    *(undefined8 *)(local_d8.Values.AllocatorInstance.Data + lVar7 * 0x10 + 8) = uStack_a0;
    *(ulonglong *)(local_d8.Values.AllocatorInstance.Data + lVar7 * 0x10 + 0x10) =
         CONCAT44(uStack_94,CONCAT22(uStack_96,CONCAT11(uStack_97,local_98)));
    *(undefined8 *)(local_d8.Values.AllocatorInstance.Data + lVar7 * 0x10 + 0x10 + 8) = uStack_90;
    *(ulonglong *)(local_d8.Values.AllocatorInstance.Data + lVar7 * 0x10 + 0x20) =
         CONCAT44(uStack_84,CONCAT22(uStack_86,CONCAT11(uStack_87,local_88)));
    *(undefined8 *)(local_d8.Values.AllocatorInstance.Data + lVar7 * 0x10 + 0x20 + 8) = uStack_80;
    *(ulonglong *)(local_d8.Values.AllocatorInstance.Data + lVar7 * 0x10 + 0x30) =
         CONCAT44(uStack_74,CONCAT22(uStack_76,CONCAT11(uStack_77,local_78)));
    *(undefined8 *)(local_d8.Values.AllocatorInstance.Data + lVar7 * 0x10 + 0x30 + 8) = uStack_70;
    *(ulonglong *)(local_d8.Values.AllocatorInstance.Data + lVar7 * 0x10 + 0x40) =
         CONCAT44(uStack_64,CONCAT22(uStack_66,CONCAT11(uStack_67,local_68)));
    *(undefined8 *)(local_d8.Values.AllocatorInstance.Data + lVar7 * 0x10 + 0x40 + 8) = uStack_60;
    *(ulonglong *)(local_d8.Values.AllocatorInstance.Data + lVar7 * 0x10 + 0x50) =
         CONCAT44(uStack_54,CONCAT22(uStack_56,CONCAT11(uStack_57,local_58)));
    *(undefined8 *)(local_d8.Values.AllocatorInstance.Data + lVar7 * 0x10 + 0x50 + 8) = uStack_50;
    *(ulonglong *)(local_d8.Values.AllocatorInstance.Data + lVar7 * 0x10 + 0x60) =
         CONCAT44(uStack_44,CONCAT22(uStack_46,CONCAT11(uStack_47,local_48)));
    *(undefined8 *)(local_d8.Values.AllocatorInstance.Data + lVar7 * 0x10 + 0x60 + 8) = uStack_40;
    *(ulonglong *)(local_d8.Values.AllocatorInstance.Data + lVar7 * 0x10 + 0x70) =
         CONCAT44(uStack_34,CONCAT22(uStack_36,CONCAT11(uStack_37,local_38)));
    *(undefined8 *)(local_d8.Values.AllocatorInstance.Data + lVar7 * 0x10 + 0x70 + 8) = uStack_30;
    *(ulonglong *)(local_d8.Values.AllocatorInstance.Data + lVar7 * 0x10 + 0x80) =
         CONCAT44(uStack_24,CONCAT22(uStack_26,CONCAT11(uStack_27,local_28)));
    *(undefined8 *)(local_d8.Values.AllocatorInstance.Data + lVar7 * 0x10 + 0x80 + 8) = uStack_20;
    FMultiValueTestSorter<signed_char,unsigned_short,unsigned___int64>::SortByPrefix
              (&local_d8,pIVar9,0,0,8);
    FMultiValueTestSorter<signed_char,unsigned_short,unsigned___int64>::SortByPrefix
              (&local_d8,pIVar9,8,5,7);
    if (0 < local_d8.Values.ArrayNum + -1) {
      do {
        iVar5 = iVar4 + 1;
        if (*(code **)(local_d8._padding_ + 0x18) ==
            FMultiValueTestSorter<signed_char,unsigned_short,unsigned___int64>::Compare) {
          iVar4 = FMultiValueTestSorter<signed_char,unsigned_short,unsigned___int64>::Compare
                            (&local_d8,pIVar9,(longlong)iVar4,(longlong)iVar5);
        }
        else {
          iVar4 = (**(code **)(local_d8._padding_ + 0x18))();
        }
        if (0 < iVar4) {
          pFVar8 = FAutomationTestFramework::Get();
          pFVar1 = pFVar8->CurrentTest;
          pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
          ::FString::FString(&local_c0,L"Condition failed");
          (*pcVar2)(pFVar1,&local_c0,0);
          if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_c0.Data.AllocatorInstance.Data);
          }
          break;
        }
        iVar4 = iVar5;
      } while (iVar5 < local_d8.Values.ArrayNum + -1);
    }
    if (local_d8.Values.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Values.AllocatorInstance.Data);
    }
  }
  return;
}

