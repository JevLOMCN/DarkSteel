// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 10

// GetTestFlags @ 142cc5ab0

EAutomationTestFlags __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_MultiValueStringsMatchingNumbers::
GetTestFlags(FEditorDataStorageUiSorter_Prefix_MultiValueStringsMatchingNumbers *this)

{
  return this->TestFlags;
}

// IsStressTest @ 142cc5ac0

bool __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_MultiValueStringsMatchingNumbers::
IsStressTest(FEditorDataStorageUiSorter_Prefix_MultiValueStringsMatchingNumbers *this)

{
  return false;
}

// GetRequiredDeviceNum @ 142cc5ad0

uint __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_MultiValueStringsMatchingNumbers::
GetRequiredDeviceNum(FEditorDataStorageUiSorter_Prefix_MultiValueStringsMatchingNumbers *this)

{
  return 1;
}

// GetTestSourceFileName @ 142cc5ae0

FString * __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_MultiValueStringsMatchingNumbers::
GetTestSourceFileName
          (FEditorDataStorageUiSorter_Prefix_MultiValueStringsMatchingNumbers *this,
          FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Tests\\Elements\\Framework\\TypedElementDataStorageUiSorterTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 142cc5b10

int __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_MultiValueStringsMatchingNumbers::
GetTestSourceFileLine(FEditorDataStorageUiSorter_Prefix_MultiValueStringsMatchingNumbers *this)

{
  return 0x372;
}

// GetTests @ 142cc5b20

/* WARNING: Removing unreachable block (ram,0x000142cc5c9e) */

void __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_MultiValueStringsMatchingNumbers::
GetTests(FEditorDataStorageUiSorter_Prefix_MultiValueStringsMatchingNumbers *this,
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

// RunTest @ 142cc5cc0

bool __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_MultiValueStringsMatchingNumbers::
RunTest(FEditorDataStorageUiSorter_Prefix_MultiValueStringsMatchingNumbers *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 142cc5cf0

FString * __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_MultiValueStringsMatchingNumbers::
GetBeautifiedTestName
          (FEditorDataStorageUiSorter_Prefix_MultiValueStringsMatchingNumbers *this,
          FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FEditorDataStorageUiSorter_Prefix_MultiValueStringsMatchingNumbers @ 142ce0a00

FEditorDataStorageUiSorter_Prefix_MultiValueStringsMatchingNumbers * __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_MultiValueStringsMatchingNumbers::
FEditorDataStorageUiSorter_Prefix_MultiValueStringsMatchingNumbers
          (FEditorDataStorageUiSorter_Prefix_MultiValueStringsMatchingNumbers *this,FString *param_1
          )

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
       ___7FEditorDataStorageUiSorter_Prefix_MultiValueStringsMatchingNumbers_Tests_DataStorage_Editor_UE__6B_
  ;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][EngineFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,
                              "Editor::DataStorage::FColumnSorterInterface_Prefix_MultiValueStringsMatchingNumbers"
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

// TestBody @ 142d00ff0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_MultiValueStringsMatchingNumbers::
TestBody(FEditorDataStorageUiSorter_Prefix_MultiValueStringsMatchingNumbers *this,FString *param_1)

{
  ulonglong *puVar1;
  FAutomationTestBase *pFVar2;
  code *pcVar3;
  FName FVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  IModularFeatures *pIVar8;
  longlong lVar9;
  FAutomationTestFramework *pFVar10;
  ulonglong *puVar11;
  ICoreProvider *pIVar12;
  undefined1 auStackY_1e8 [32];
  ForAnyElementType local_1a8;
  int local_1a0;
  int local_19c;
  FMultiValueTestSorter<unsigned_int,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_>
  local_198;
  undefined8 local_180;
  int iStack_178;
  undefined4 uStack_174;
  undefined8 local_170;
  int iStack_168;
  undefined4 uStack_164;
  undefined8 local_160;
  int iStack_158;
  undefined4 uStack_154;
  undefined8 local_150;
  int iStack_148;
  undefined4 uStack_144;
  undefined8 local_140;
  int iStack_138;
  undefined4 uStack_134;
  undefined8 local_130;
  int iStack_128;
  undefined4 uStack_124;
  FString local_120;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  ulonglong local_18 [2];
  
  FVar4 = StorageFeatureName;
  local_18[0] = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  pIVar8 = IModularFeatures::Get();
  iVar6 = (**(code **)((longlong)*pIVar8 + 0x18))(pIVar8,FVar4);
  if (iVar6 < 1) {
    pIVar12 = (ICoreProvider *)0x0;
  }
  else {
    pIVar8 = IModularFeatures::Get();
    lVar9 = (**(code **)((longlong)*pIVar8 + 0x20))(pIVar8,FVar4,0);
    pIVar12 = (ICoreProvider *)(lVar9 + -8);
    if (lVar9 == 0) {
      pIVar12 = (ICoreProvider *)0x0;
    }
  }
  iVar6 = 0;
  if (pIVar12 != (ICoreProvider *)0x0) {
    ::FString::FString(&local_78,L"a");
    ::FString::FString(&local_68,L"bb_a");
    ::FString::FString(&local_58,L"cb");
    ::FString::FString(&local_48,L"ab_ca");
    ::FString::FString(&local_38,L"ab_ac");
    ::FString::FString(&local_28,L"longstring");
    local_1a8.Data = (FScriptContainerElement *)0x0;
    local_1a0 = 6;
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,6,0,&local_1a8,6,&local_19c);
    ConstructItems<FString,FString,int>(local_1a8.Data,&local_78,6);
    puVar11 = local_18;
    local_198.Values._8_8_ = 6;
    do {
      puVar1 = puVar11 + -2;
      puVar11 = puVar11 + -2;
      local_198.Values._8_8_ = local_198.Values._8_8_ + -1;
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
    } while (local_198.Values._8_8_ != 0);
    local_198._padding_ =
         (longlong)
         &
         ___7__FMultiValueTestSorter_IU__TSortStringView_UFSortCaseInsensitive_DataStorage_Editor_UE__V__TStringView__W___DataStorage_Editor_UE___Tests_DataStorage_Editor_UE__6B_
    ;
    local_198.Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if ((local_1a0 < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_108 = 0x2a;
    local_180 = *(undefined8 *)local_1a8.Data;
    iVar7 = 0;
    iStack_178 = *(int *)(local_1a8.Data + 8) + -1;
    if (*(int *)(local_1a8.Data + 8) == 0) {
      iStack_178 = iVar7;
    }
    uStack_f8 = CONCAT44(uStack_174,iStack_178);
    uStack_100 = local_180;
    if ((local_1a0 < 2) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uStack_f0 = 0x2a;
    local_170 = *(undefined8 *)(local_1a8.Data + 0x10);
    iStack_168 = *(int *)(local_1a8.Data + 0x18) + -1;
    if (*(int *)(local_1a8.Data + 0x18) == 0) {
      iStack_168 = iVar7;
    }
    uStack_e0 = CONCAT44(uStack_164,iStack_168);
    local_e8 = local_170;
    if ((local_1a0 < 3) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_d8 = 0x2a;
    local_160 = *(undefined8 *)(local_1a8.Data + 0x20);
    iStack_158 = *(int *)(local_1a8.Data + 0x28) + -1;
    if (*(int *)(local_1a8.Data + 0x28) == 0) {
      iStack_158 = iVar7;
    }
    uStack_c8 = CONCAT44(uStack_154,iStack_158);
    uStack_d0 = local_160;
    if ((local_1a0 < 4) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uStack_c0 = 0x2a;
    local_150 = *(undefined8 *)(local_1a8.Data + 0x30);
    iStack_148 = *(int *)(local_1a8.Data + 0x38) + -1;
    if (*(int *)(local_1a8.Data + 0x38) == 0) {
      iStack_148 = iVar7;
    }
    uStack_b0 = CONCAT44(uStack_144,iStack_148);
    local_b8 = local_150;
    if ((local_1a0 < 5) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_a8 = 0x2a;
    local_140 = *(undefined8 *)(local_1a8.Data + 0x40);
    iStack_138 = *(int *)(local_1a8.Data + 0x48) + -1;
    if (*(int *)(local_1a8.Data + 0x48) == 0) {
      iStack_138 = 0;
    }
    uStack_98 = CONCAT44(uStack_134,iStack_138);
    uStack_a0 = local_140;
    if ((local_1a0 < 6) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uStack_90 = 0x2a;
    local_130 = *(undefined8 *)(local_1a8.Data + 0x50);
    iStack_128 = *(int *)(local_1a8.Data + 0x58) + -1;
    if (*(int *)(local_1a8.Data + 0x58) == 0) {
      iStack_128 = 0;
    }
    iVar7 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,6,&local_198.Values.AllocatorInstance,&local_198.Values.ArrayNum,
                       &local_198.Values.ArrayMax);
    lVar9 = (longlong)iVar7;
    *(ulonglong *)(local_198.Values.AllocatorInstance.Data + lVar9 * 0x18) =
         CONCAT44(uStack_104,local_108);
    *(undefined8 *)(local_198.Values.AllocatorInstance.Data + lVar9 * 0x18 + 8) = uStack_100;
    *(undefined8 *)(local_198.Values.AllocatorInstance.Data + lVar9 * 0x18 + 0x10) = uStack_f8;
    *(ulonglong *)(local_198.Values.AllocatorInstance.Data + lVar9 * 0x18 + 0x10 + 8) =
         CONCAT44(uStack_ec,uStack_f0);
    *(undefined8 *)(local_198.Values.AllocatorInstance.Data + lVar9 * 0x18 + 0x20) = local_e8;
    *(undefined8 *)(local_198.Values.AllocatorInstance.Data + lVar9 * 0x18 + 0x20 + 8) = uStack_e0;
    *(ulonglong *)(local_198.Values.AllocatorInstance.Data + lVar9 * 0x18 + 0x30) =
         CONCAT44(uStack_d4,local_d8);
    *(undefined8 *)(local_198.Values.AllocatorInstance.Data + lVar9 * 0x18 + 0x30 + 8) = uStack_d0;
    *(undefined8 *)(local_198.Values.AllocatorInstance.Data + lVar9 * 0x18 + 0x40) = uStack_c8;
    *(ulonglong *)(local_198.Values.AllocatorInstance.Data + lVar9 * 0x18 + 0x40 + 8) =
         CONCAT44(uStack_bc,uStack_c0);
    *(undefined8 *)(local_198.Values.AllocatorInstance.Data + lVar9 * 0x18 + 0x50) = local_b8;
    *(undefined8 *)(local_198.Values.AllocatorInstance.Data + lVar9 * 0x18 + 0x50 + 8) = uStack_b0;
    *(ulonglong *)(local_198.Values.AllocatorInstance.Data + lVar9 * 0x18 + 0x60) =
         CONCAT44(uStack_a4,local_a8);
    *(undefined8 *)(local_198.Values.AllocatorInstance.Data + lVar9 * 0x18 + 0x60 + 8) = uStack_a0;
    *(undefined8 *)(local_198.Values.AllocatorInstance.Data + lVar9 * 0x18 + 0x70) = uStack_98;
    *(ulonglong *)(local_198.Values.AllocatorInstance.Data + lVar9 * 0x18 + 0x70 + 8) =
         CONCAT44(uStack_8c,uStack_90);
    *(undefined8 *)(local_198.Values.AllocatorInstance.Data + lVar9 * 0x18 + 0x80) = local_130;
    *(ulonglong *)(local_198.Values.AllocatorInstance.Data + lVar9 * 0x18 + 0x80 + 8) =
         CONCAT44(uStack_124,iStack_128);
    FMultiValueTestSorter<unsigned_int,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_>
    ::SortByPrefix(&local_198,pIVar12,0,0,5);
    FMultiValueTestSorter<unsigned_int,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_>
    ::SortByPrefix(&local_198,pIVar12,8,1,2);
    if (0 < local_198.Values.ArrayNum + -1) {
      do {
        iVar7 = iVar6 + 1;
        if (*(code **)(local_198._padding_ + 0x18) ==
            FMultiValueTestSorter<unsigned_int,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_>
            ::Compare) {
          iVar6 = FMultiValueTestSorter<unsigned_int,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_>
                  ::Compare(&local_198,pIVar12,(longlong)iVar6,(longlong)iVar7);
        }
        else {
          iVar6 = (**(code **)(local_198._padding_ + 0x18))();
        }
        if (0 < iVar6) {
          pFVar10 = FAutomationTestFramework::Get();
          pFVar2 = pFVar10->CurrentTest;
          pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
          ::FString::FString(&local_120,L"Condition failed");
          (*pcVar3)(pFVar2,&local_120,0);
          if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_120.Data.AllocatorInstance.Data);
          }
          break;
        }
        iVar6 = iVar7;
      } while (iVar7 < local_198.Values.ArrayNum + -1);
    }
    if (local_198.Values.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.Values.AllocatorInstance.Data);
    }
    DestructItems<FString,int>((FString *)local_1a8.Data,local_1a0);
    if (local_1a8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a8.Data);
    }
  }
  return;
}

