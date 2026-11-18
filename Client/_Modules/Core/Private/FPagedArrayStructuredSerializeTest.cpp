// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141ac9c90

EAutomationTestFlags __thiscall
PagedArray::FPagedArrayStructuredSerializeTest::GetTestFlags
          (FPagedArrayStructuredSerializeTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141ac9ca0

bool __thiscall
PagedArray::FPagedArrayStructuredSerializeTest::IsStressTest
          (FPagedArrayStructuredSerializeTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141ac9cb0

uint __thiscall
PagedArray::FPagedArrayStructuredSerializeTest::GetRequiredDeviceNum
          (FPagedArrayStructuredSerializeTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141ac9cc0

FString * __thiscall
PagedArray::FPagedArrayStructuredSerializeTest::GetTestSourceFileName
          (FPagedArrayStructuredSerializeTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\PagedArrayTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141ac9cf0

int __thiscall
PagedArray::FPagedArrayStructuredSerializeTest::GetTestSourceFileLine
          (FPagedArrayStructuredSerializeTest *this)

{
  return 0x616;
}

// GetTests @ 141ac9d00

/* WARNING: Removing unreachable block (ram,0x000141ac9e7e) */

void __thiscall
PagedArray::FPagedArrayStructuredSerializeTest::GetTests
          (FPagedArrayStructuredSerializeTest *this,
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
    iVar4 = UE::Core::Private::
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
    iVar4 = UE::Core::Private::
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

// RunTest @ 141ac9ea0

bool __thiscall
PagedArray::FPagedArrayStructuredSerializeTest::RunTest
          (FPagedArrayStructuredSerializeTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141ac9ed0

FString * __thiscall
PagedArray::FPagedArrayStructuredSerializeTest::GetBeautifiedTestName
          (FPagedArrayStructuredSerializeTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FPagedArrayStructuredSerializeTest @ 141b25f60

FPagedArrayStructuredSerializeTest * __thiscall
PagedArray::FPagedArrayStructuredSerializeTest::FPagedArrayStructuredSerializeTest
          (FPagedArrayStructuredSerializeTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FPagedArrayStructuredSerializeTest_PagedArray__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[SmokeFilter][Core][Containers][PagedArray]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,
                              "System::Core::Containers::TPagedArray::Structured Serialize");
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
  ::FString::FString(&local_18,"[SmokeFilter][Core][Containers][PagedArray]");
  local_28.Data.ArrayNum = (this->PrettyNameDotNotation).Data.ArrayNum;
  lVar5 = (longlong)local_28.Data.ArrayNum;
  pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_28.Data.ArrayNum == 0) {
    local_28.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
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

// TestBody @ 141b99490

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
PagedArray::FPagedArrayStructuredSerializeTest::TestBody
          (FPagedArrayStructuredSerializeTest *this,FString *param_1)

{
  int *piVar1;
  FAutomationTestBase *pFVar2;
  code *pcVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  uint uVar6;
  FAutomationTestFramework *pFVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  TPagedArray<TTestToken<int>,16,TSizedDefaultAllocator<32>_> local_698;
  TPagedArray<TTestToken<int>,16,TSizedDefaultAllocator<32>_> local_680;
  void *local_668;
  undefined8 local_660;
  void *local_658;
  undefined8 local_650;
  void *local_648;
  undefined8 local_640;
  TPagedArray<TTestToken<int>,16,TSizedDefaultAllocator<32>_> local_638;
  TPagedArray<TTestToken<int>,16,TSizedDefaultAllocator<32>_> local_620;
  undefined8 local_608;
  undefined8 local_600;
  TPagedArray<TTestToken<int>,16,TSizedDefaultAllocator<32>_> local_5f8;
  TPagedArray<TTestToken<int>,16,TSizedDefaultAllocator<32>_> local_5e0;
  int local_5c8 [2];
  FBinaryArchiveFormatter *local_5c0;
  int local_5b8 [2];
  FBinaryArchiveFormatter *local_5b0;
  FBinaryArchiveFormatter *local_5a8;
  FBinaryArchiveFormatter *local_5a0;
  FBinaryArchiveFormatter *local_598;
  FBinaryArchiveFormatter *local_590;
  FString local_588;
  FBinaryArchiveFormatter local_578;
  FString local_568;
  FBinaryArchiveFormatter local_558;
  FString local_548;
  FString local_538;
  FString local_528;
  FString local_518;
  FBinaryArchiveFormatter local_508;
  FString local_4f8;
  FBinaryArchiveFormatter local_4e8;
  FString local_4d8;
  FString local_4c8;
  FBinaryArchiveFormatter local_4b8;
  FString local_4a8;
  FBinaryArchiveFormatter local_498;
  FString local_488;
  FString local_478;
  FString local_468;
  FArchiveState local_458;
  undefined8 local_3c8;
  void **local_3c0;
  undefined8 local_3b8;
  FArchiveState local_3a8;
  undefined8 local_318;
  void **local_310;
  undefined8 local_308;
  FArchiveState local_2f8;
  undefined8 local_268;
  void **local_260;
  undefined8 local_258;
  FArchiveState local_248;
  undefined8 local_1b8;
  void **local_1b0;
  undefined8 local_1a8;
  FArchiveState local_198;
  undefined8 local_108;
  void **local_100;
  undefined8 local_f8;
  FArchiveState local_e8;
  undefined8 local_58;
  void **local_50;
  undefined8 local_48;
  
  TTestToken<int>::ConstructorCalls = 0;
  TTestToken<int>::DestructorCalls = 0;
  TTestToken<int>::CopyConstructorCalls = 0;
  TTestToken<int>::MoveConstructorCalls = 0;
  TTestToken<int>::CopyAssignmentCalls = 0;
  TTestToken<int>::MoveAssignmentCalls = 0;
  local_5e0.Pages.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_5e0.Pages.ArrayNum = 0;
  local_5e0.Pages.ArrayMax = 0;
  local_5e0.Count = 0;
  local_5f8.Pages.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_5f8.Pages.ArrayNum = 0;
  local_5f8.Pages.ArrayMax = 0;
  local_5f8.Count = 0;
  local_668 = (void *)0x0;
  local_660 = 0;
  local_458._padding_ = 0;
  local_458.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_458.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_458.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_458.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_458._40_8_ = 0;
  local_458.ArSerializingDefaults = 0;
  local_458.ArPortFlags = 0;
  local_458.ArMaxSerializeSize = 0;
  local_458.ArUEVer.FileVersionUE4 = 0;
  local_458.ArUEVer.FileVersionUE5 = 0;
  local_458.ArLicenseeUEVer = 0;
  local_458.ArEngineVer.Major = 0;
  local_458.ArEngineVer.Minor = 0;
  local_458.ArEngineVer.Patch = 0;
  local_458.ArEngineVer._6_2_ = 0;
  local_458.ArEngineVer.Changelist = 0;
  local_458.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_458.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_458.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_458.SerializedProperty = (FProperty *)0x0;
  local_458.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_458.bCustomVersionsAreReset = false;
  local_458._129_7_ = 0;
  local_458.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_458);
  local_3c8 = 0;
  local_458._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  local_3c0 = &local_668;
  local_3b8 = 0;
  FArchiveState::SetIsSaving(&local_458,true);
  (**(code **)(local_458._padding_ + 0x108))(&local_458,0);
  local_458._padding_ = (longlong)&___7FMemoryWriter__6B_;
  FBinaryArchiveFormatter::FBinaryArchiveFormatter(&local_4b8,(FArchive *)&local_458);
  local_5c0 = &local_4b8;
  UE::Core::PagedArray::Private::SerializeStructured<TTestToken<int>,16,TSizedDefaultAllocator<32>_>
            ((FStructuredArchiveSlot)&local_5c0,&local_5e0);
  FBinaryArchiveFormatter::~FBinaryArchiveFormatter(&local_4b8);
  FArchive::~FArchive((FArchive *)&local_458);
  if ((int)local_660 != 4) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar2 = pFVar7->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_4a8,L"Condition failed");
    (*pcVar3)(pFVar2,&local_4a8,0);
    if (local_4a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4a8.Data.AllocatorInstance.Data);
    }
  }
  local_248._padding_ = 0;
  local_248.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_248.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_248.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_248.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_248._40_8_ = 0;
  local_248.ArSerializingDefaults = 0;
  local_248.ArPortFlags = 0;
  local_248.ArMaxSerializeSize = 0;
  local_248.ArUEVer.FileVersionUE4 = 0;
  local_248.ArUEVer.FileVersionUE5 = 0;
  local_248.ArLicenseeUEVer = 0;
  local_248.ArEngineVer.Major = 0;
  local_248.ArEngineVer.Minor = 0;
  local_248.ArEngineVer.Patch = 0;
  local_248.ArEngineVer._6_2_ = 0;
  local_248.ArEngineVer.Changelist = 0;
  local_248.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_248.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_248.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_248.SerializedProperty = (FProperty *)0x0;
  local_248.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_248.bCustomVersionsAreReset = false;
  local_248._129_7_ = 0;
  local_248.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_248);
  local_1b8 = 0;
  local_248._padding_ = (longlong)&___7FMemoryReader__6B_;
  local_1b0 = &local_668;
  local_1a8 = 0x7fffffffffffffff;
  FArchiveState::SetIsLoading(&local_248,true);
  (**(code **)(local_248._padding_ + 0x108))(&local_248,0);
  FBinaryArchiveFormatter::FBinaryArchiveFormatter(&local_498,(FArchive *)&local_248);
  local_590 = &local_498;
  UE::Core::PagedArray::Private::SerializeStructured<TTestToken<int>,16,TSizedDefaultAllocator<32>_>
            ((FStructuredArchiveSlot)&local_590,&local_5f8);
  FBinaryArchiveFormatter::~FBinaryArchiveFormatter(&local_498);
  FArchive::~FArchive((FArchive *)&local_248);
  bVar5 = TPagedArray<TTestToken<int>,16,TSizedDefaultAllocator<32>_>::operator==
                    (&local_5e0,&local_5f8);
  if (!bVar5) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar2 = pFVar7->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_488,L"Condition failed");
    (*pcVar3)(pFVar2,&local_488,0);
    if (local_488.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_488.Data.AllocatorInstance.Data);
    }
  }
  if (local_668 != (void *)0x0) {
    FMemory::Free(local_668);
  }
  DestructItems<TArray<TTestToken<int>,TSizedDefaultAllocator<32>_>,int>
            ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)
             local_5f8.Pages.AllocatorInstance.Data,local_5f8.Pages.ArrayNum);
  if ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)local_5f8.Pages.AllocatorInstance.Data
      != (TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_5f8.Pages.AllocatorInstance.Data);
  }
  DestructItems<TArray<TTestToken<int>,TSizedDefaultAllocator<32>_>,int>
            ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)
             local_5e0.Pages.AllocatorInstance.Data,local_5e0.Pages.ArrayNum);
  if ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)local_5e0.Pages.AllocatorInstance.Data
      != (TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_5e0.Pages.AllocatorInstance.Data);
  }
  if (((TTestToken<int>::MoveConstructorCalls - TTestToken<int>::DestructorCalls) +
       TTestToken<int>::CopyConstructorCalls + TTestToken<int>::ConstructorCalls != 0) ||
     (TTestToken<int>::DestructorCalls != 0)) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar2 = pFVar7->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_478,L"Condition failed");
    (*pcVar3)(pFVar2,&local_478,0);
    if (local_478.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_478.Data.AllocatorInstance.Data);
    }
  }
  TTestToken<int>::ConstructorCalls = 0;
  TTestToken<int>::DestructorCalls = 0;
  TTestToken<int>::CopyConstructorCalls = 0;
  TTestToken<int>::MoveConstructorCalls = 0;
  TTestToken<int>::CopyAssignmentCalls = 0;
  TTestToken<int>::MoveAssignmentCalls = 0;
  local_698.Pages.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_698.Pages.ArrayNum = 0;
  local_698.Pages.ArrayMax = 0;
  local_698.Count = 0;
  local_638.Pages.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_638.Pages.ArrayNum = 0;
  local_638.Pages.ArrayMax = 0;
  local_638.Count = 0;
  TPagedArray<TTestToken<int>,16,TSizedDefaultAllocator<32>_>::SetNum(&local_698,4,Default);
  FVar4.Data = local_698.Pages.AllocatorInstance.Data;
  iVar12 = (local_698.Count >> 0x1f & 3U) + local_698.Count;
  uVar9 = local_698.Count & 0x80000003;
  iVar8 = 0;
  iVar11 = 0;
  if ((int)uVar9 < 0) {
    uVar9 = (uVar9 - 1 | 0xfffffffc) + 1;
    iVar8 = 0;
    iVar11 = 0;
  }
  do {
    uVar13 = 0;
    iVar10 = iVar11;
    do {
      if ((iVar8 == iVar12 >> 2) && (uVar13 == uVar9)) {
        if (local_698.Count != 4) {
          pFVar7 = FAutomationTestFramework::Get();
          pFVar2 = pFVar7->CurrentTest;
          pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
          ::FString::FString(&local_468,L"Condition failed");
          (*pcVar3)(pFVar2,&local_468,0);
          if (local_468.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_468.Data.AllocatorInstance.Data);
          }
        }
        if (local_638.Count != 0) {
          pFVar7 = FAutomationTestFramework::Get();
          pFVar2 = pFVar7->CurrentTest;
          pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
          ::FString::FString(&local_588,L"Condition failed");
          (*pcVar3)(pFVar2,&local_588,0);
          if (local_588.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_588.Data.AllocatorInstance.Data);
          }
        }
        local_658 = (void *)0x0;
        local_650 = 0;
        local_3a8._padding_ = 0;
        local_3a8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
        local_608 = 0;
        local_3a8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
        local_3a8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
        local_3a8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
        local_3a8._40_8_ = 0;
        local_3a8.ArSerializingDefaults = 0;
        local_3a8.ArPortFlags = 0;
        local_3a8.ArMaxSerializeSize = 0;
        local_3a8.ArUEVer.FileVersionUE4 = 0;
        local_3a8.ArUEVer.FileVersionUE5 = 0;
        local_3a8.ArLicenseeUEVer = 0;
        local_3a8.ArEngineVer.Major = 0;
        local_3a8.ArEngineVer.Minor = 0;
        local_3a8.ArEngineVer.Patch = 0;
        local_3a8.ArEngineVer._6_2_ = 0;
        local_3a8.ArEngineVer.Changelist = 0;
        local_3a8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
        local_3a8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
        local_3a8.SavePackageData = (FArchiveSavePackageData *)0x0;
        local_3a8.SerializedProperty = (FProperty *)0x0;
        local_3a8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
        local_3a8.bCustomVersionsAreReset = false;
        local_3a8._129_7_ = 0;
        local_3a8.NextProxy = (FArchiveState *)0x0;
        FArchiveState::FArchiveState(&local_3a8);
        local_318 = 0;
        local_3a8._padding_ =
             (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
        local_310 = &local_658;
        local_308 = local_608;
        FArchiveState::SetIsSaving(&local_3a8,true);
        (**(code **)(local_3a8._padding_ + 0x108))(&local_3a8,0);
        local_3a8._padding_ = (longlong)&___7FMemoryWriter__6B_;
        FBinaryArchiveFormatter::FBinaryArchiveFormatter(&local_578,(FArchive *)&local_3a8);
        local_5b0 = &local_578;
        UE::Core::PagedArray::Private::
        SerializeStructured<TTestToken<int>,16,TSizedDefaultAllocator<32>_>
                  ((FStructuredArchiveSlot)&local_5b0,&local_698);
        FBinaryArchiveFormatter::~FBinaryArchiveFormatter(&local_578);
        FArchive::~FArchive((FArchive *)&local_3a8);
        if ((int)local_650 != 0x14) {
          pFVar7 = FAutomationTestFramework::Get();
          pFVar2 = pFVar7->CurrentTest;
          pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
          ::FString::FString(&local_568,L"Condition failed");
          (*pcVar3)(pFVar2,&local_568,0);
          if (local_568.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_568.Data.AllocatorInstance.Data);
          }
        }
        local_198._padding_ = 0;
        local_198.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
        local_198.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
        local_198.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
        local_198.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
        local_198._40_8_ = 0;
        local_198.ArSerializingDefaults = 0;
        local_198.ArPortFlags = 0;
        local_198.ArMaxSerializeSize = 0;
        local_198.ArUEVer.FileVersionUE4 = 0;
        local_198.ArUEVer.FileVersionUE5 = 0;
        local_198.ArLicenseeUEVer = 0;
        local_198.ArEngineVer.Major = 0;
        local_198.ArEngineVer.Minor = 0;
        local_198.ArEngineVer.Patch = 0;
        local_198.ArEngineVer._6_2_ = 0;
        local_198.ArEngineVer.Changelist = 0;
        local_198.CustomVersionContainer = (FCustomVersionContainer *)0x0;
        local_198.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
        local_198.SavePackageData = (FArchiveSavePackageData *)0x0;
        local_198.SerializedProperty = (FProperty *)0x0;
        local_198.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
        local_198.bCustomVersionsAreReset = false;
        local_198._129_7_ = 0;
        local_198.NextProxy = (FArchiveState *)0x0;
        FArchiveState::FArchiveState(&local_198);
        local_108 = 0;
        local_198._padding_ = (longlong)&___7FMemoryReader__6B_;
        local_100 = &local_658;
        local_f8 = 0x7fffffffffffffff;
        FArchiveState::SetIsLoading(&local_198,true);
        (**(code **)(local_198._padding_ + 0x108))(&local_198,0);
        FBinaryArchiveFormatter::FBinaryArchiveFormatter(&local_558,(FArchive *)&local_198);
        local_5a8 = &local_558;
        UE::Core::PagedArray::Private::
        SerializeStructured<TTestToken<int>,16,TSizedDefaultAllocator<32>_>
                  ((FStructuredArchiveSlot)&local_5a8,&local_638);
        FBinaryArchiveFormatter::~FBinaryArchiveFormatter(&local_558);
        FArchive::~FArchive((FArchive *)&local_198);
        bVar5 = TPagedArray<TTestToken<int>,16,TSizedDefaultAllocator<32>_>::operator==
                          (&local_698,&local_638);
        if (!bVar5) {
          pFVar7 = FAutomationTestFramework::Get();
          pFVar2 = pFVar7->CurrentTest;
          pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
          ::FString::FString(&local_548,L"Condition failed");
          (*pcVar3)(pFVar2,&local_548,0);
          if (local_548.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_548.Data.AllocatorInstance.Data);
          }
        }
        if (local_658 != (void *)0x0) {
          FMemory::Free(local_658);
        }
        DestructItems<TArray<TTestToken<int>,TSizedDefaultAllocator<32>_>,int>
                  ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)
                   local_638.Pages.AllocatorInstance.Data,local_638.Pages.ArrayNum);
        if ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)
            local_638.Pages.AllocatorInstance.Data !=
            (TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)0x0) {
          FMemory::Free(local_638.Pages.AllocatorInstance.Data);
        }
        DestructItems<TArray<TTestToken<int>,TSizedDefaultAllocator<32>_>,int>
                  ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)
                   local_698.Pages.AllocatorInstance.Data,local_698.Pages.ArrayNum);
        if ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)
            local_698.Pages.AllocatorInstance.Data !=
            (TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)0x0) {
          FMemory::Free(local_698.Pages.AllocatorInstance.Data);
        }
        if (((TTestToken<int>::MoveConstructorCalls - TTestToken<int>::DestructorCalls) +
             TTestToken<int>::CopyConstructorCalls + TTestToken<int>::ConstructorCalls != 0) ||
           (TTestToken<int>::DestructorCalls != 0xc)) {
          pFVar7 = FAutomationTestFramework::Get();
          pFVar2 = pFVar7->CurrentTest;
          pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
          ::FString::FString(&local_538,L"Condition failed");
          (*pcVar3)(pFVar2,&local_538,0);
          if (local_538.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_538.Data.AllocatorInstance.Data);
          }
        }
        TTestToken<int>::ConstructorCalls = 0;
        TTestToken<int>::DestructorCalls = 0;
        TTestToken<int>::CopyConstructorCalls = 0;
        TTestToken<int>::MoveConstructorCalls = 0;
        TTestToken<int>::CopyAssignmentCalls = 0;
        TTestToken<int>::MoveAssignmentCalls = 0;
        local_680.Pages.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_680.Pages.ArrayNum = 0;
        local_680.Pages.ArrayMax = 0;
        local_680.Count = 0;
        local_620.Pages.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_620.Pages.ArrayNum = 0;
        local_620.Pages.ArrayMax = 0;
        local_620.Count = 0;
        TPagedArray<TTestToken<int>,16,TSizedDefaultAllocator<32>_>::SetNum(&local_680,0xc,Default);
        FVar4.Data = local_680.Pages.AllocatorInstance.Data;
        iVar12 = (local_680.Count >> 0x1f & 3U) + local_680.Count;
        uVar9 = local_680.Count & 0x80000003;
        iVar8 = 0;
        iVar11 = 0;
        if ((int)uVar9 < 0) {
          uVar9 = (uVar9 - 1 | 0xfffffffc) + 1;
          iVar8 = 0;
          iVar11 = 0;
        }
        do {
          uVar13 = 0;
          iVar10 = iVar11;
          do {
            if ((iVar8 == iVar12 >> 2) && (uVar13 == uVar9)) {
              if (local_680.Count != 0xc) {
                pFVar7 = FAutomationTestFramework::Get();
                pFVar2 = pFVar7->CurrentTest;
                pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
                ::FString::FString(&local_528,L"Condition failed");
                (*pcVar3)(pFVar2,&local_528,0);
                if (local_528.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_528.Data.AllocatorInstance.Data);
                }
              }
              if (local_620.Count != 0) {
                pFVar7 = FAutomationTestFramework::Get();
                pFVar2 = pFVar7->CurrentTest;
                pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
                ::FString::FString(&local_518,L"Condition failed");
                (*pcVar3)(pFVar2,&local_518,0);
                if (local_518.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_518.Data.AllocatorInstance.Data);
                }
              }
              local_648 = (void *)0x0;
              local_640 = 0;
              local_2f8._padding_ = 0;
              local_2f8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
              local_600 = 0;
              local_2f8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
              local_2f8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
              local_2f8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
              local_2f8._40_8_ = 0;
              local_2f8.ArSerializingDefaults = 0;
              local_2f8.ArPortFlags = 0;
              local_2f8.ArMaxSerializeSize = 0;
              local_2f8.ArUEVer.FileVersionUE4 = 0;
              local_2f8.ArUEVer.FileVersionUE5 = 0;
              local_2f8.ArLicenseeUEVer = 0;
              local_2f8.ArEngineVer.Major = 0;
              local_2f8.ArEngineVer.Minor = 0;
              local_2f8.ArEngineVer.Patch = 0;
              local_2f8.ArEngineVer._6_2_ = 0;
              local_2f8.ArEngineVer.Changelist = 0;
              local_2f8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
              local_2f8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
              local_2f8.SavePackageData = (FArchiveSavePackageData *)0x0;
              local_2f8.SerializedProperty = (FProperty *)0x0;
              local_2f8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
              local_2f8.bCustomVersionsAreReset = false;
              local_2f8._129_7_ = 0;
              local_2f8.NextProxy = (FArchiveState *)0x0;
              FArchiveState::FArchiveState(&local_2f8);
              local_268 = 0;
              local_2f8._padding_ =
                   (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
              local_260 = &local_648;
              local_258 = local_600;
              FArchiveState::SetIsSaving(&local_2f8,true);
              (**(code **)(local_2f8._padding_ + 0x108))(&local_2f8,0);
              local_2f8._padding_ = (longlong)&___7FMemoryWriter__6B_;
              FBinaryArchiveFormatter::FBinaryArchiveFormatter(&local_508,(FArchive *)&local_2f8);
              local_5a0 = &local_508;
              UE::Core::PagedArray::Private::
              SerializeStructured<TTestToken<int>,16,TSizedDefaultAllocator<32>_>
                        ((FStructuredArchiveSlot)&local_5a0,&local_680);
              FBinaryArchiveFormatter::~FBinaryArchiveFormatter(&local_508);
              FArchive::~FArchive((FArchive *)&local_2f8);
              if ((int)local_640 != 0x34) {
                pFVar7 = FAutomationTestFramework::Get();
                pFVar2 = pFVar7->CurrentTest;
                pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
                ::FString::FString(&local_4f8,L"Condition failed");
                (*pcVar3)(pFVar2,&local_4f8,0);
                if (local_4f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_4f8.Data.AllocatorInstance.Data);
                }
              }
              local_e8._padding_ = 0;
              local_e8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
              local_e8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
              local_e8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
              local_e8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
              local_e8._40_8_ = 0;
              local_e8.ArSerializingDefaults = 0;
              local_e8.ArPortFlags = 0;
              local_e8.ArMaxSerializeSize = 0;
              local_e8.ArUEVer.FileVersionUE4 = 0;
              local_e8.ArUEVer.FileVersionUE5 = 0;
              local_e8.ArLicenseeUEVer = 0;
              local_e8.ArEngineVer.Major = 0;
              local_e8.ArEngineVer.Minor = 0;
              local_e8.ArEngineVer.Patch = 0;
              local_e8.ArEngineVer._6_2_ = 0;
              local_e8.ArEngineVer.Changelist = 0;
              local_e8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
              local_e8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
              local_e8.SavePackageData = (FArchiveSavePackageData *)0x0;
              local_e8.SerializedProperty = (FProperty *)0x0;
              local_e8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
              local_e8.bCustomVersionsAreReset = false;
              local_e8._129_7_ = 0;
              local_e8.NextProxy = (FArchiveState *)0x0;
              FArchiveState::FArchiveState(&local_e8);
              local_58 = 0;
              local_e8._padding_ = (longlong)&___7FMemoryReader__6B_;
              local_50 = &local_648;
              local_48 = 0x7fffffffffffffff;
              FArchiveState::SetIsLoading(&local_e8,true);
              (**(code **)(local_e8._padding_ + 0x108))(&local_e8,0);
              FBinaryArchiveFormatter::FBinaryArchiveFormatter(&local_4e8,(FArchive *)&local_e8);
              local_598 = &local_4e8;
              UE::Core::PagedArray::Private::
              SerializeStructured<TTestToken<int>,16,TSizedDefaultAllocator<32>_>
                        ((FStructuredArchiveSlot)&local_598,&local_620);
              FBinaryArchiveFormatter::~FBinaryArchiveFormatter(&local_4e8);
              FArchive::~FArchive((FArchive *)&local_e8);
              bVar5 = TPagedArray<TTestToken<int>,16,TSizedDefaultAllocator<32>_>::operator==
                                (&local_680,&local_620);
              if (!bVar5) {
                pFVar7 = FAutomationTestFramework::Get();
                pFVar2 = pFVar7->CurrentTest;
                pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
                ::FString::FString(&local_4d8,L"Condition failed");
                (*pcVar3)(pFVar2,&local_4d8,0);
                if (local_4d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_4d8.Data.AllocatorInstance.Data);
                }
              }
              if (local_648 != (void *)0x0) {
                FMemory::Free(local_648);
              }
              DestructItems<TArray<TTestToken<int>,TSizedDefaultAllocator<32>_>,int>
                        ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)
                         local_620.Pages.AllocatorInstance.Data,local_620.Pages.ArrayNum);
              if ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)
                  local_620.Pages.AllocatorInstance.Data !=
                  (TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)0x0) {
                FMemory::Free(local_620.Pages.AllocatorInstance.Data);
              }
              DestructItems<TArray<TTestToken<int>,TSizedDefaultAllocator<32>_>,int>
                        ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)
                         local_680.Pages.AllocatorInstance.Data,local_680.Pages.ArrayNum);
              if ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)
                  local_680.Pages.AllocatorInstance.Data !=
                  (TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)0x0) {
                FMemory::Free(local_680.Pages.AllocatorInstance.Data);
              }
              if (((TTestToken<int>::MoveConstructorCalls - TTestToken<int>::DestructorCalls) +
                   TTestToken<int>::CopyConstructorCalls + TTestToken<int>::ConstructorCalls != 0)
                 || (TTestToken<int>::DestructorCalls != 0x24)) {
                pFVar7 = FAutomationTestFramework::Get();
                pFVar2 = pFVar7->CurrentTest;
                pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
                ::FString::FString(&local_4c8,L"Condition failed");
                (*pcVar3)(pFVar2,&local_4c8,0);
                if (local_4c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_4c8.Data.AllocatorInstance.Data);
                }
              }
              return;
            }
            uVar6 = 0;
            if ((int)uVar13 < *(int *)(FVar4.Data + (longlong)iVar8 * 0x10 + 8)) {
              uVar6 = ~uVar13 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            TTestToken<int>::ConstructorCalls = TTestToken<int>::ConstructorCalls + 1;
            iVar11 = iVar10 + 1;
            piVar1 = (int *)(*(longlong *)&FVar4.Data[(longlong)iVar8 * 0x10].field_0x0 +
                            (longlong)(int)uVar13 * 4);
            if ((local_5c8 == piVar1) &&
               (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                                  (&bGEnsureHasExecuted<_3577702131160842175>,false,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\TokenTest.h"
                                   ,0x41,"&Other != this"), bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            uVar13 = uVar13 + 1;
            *piVar1 = iVar10;
            TTestToken<int>::MoveAssignmentCalls = TTestToken<int>::MoveAssignmentCalls + 1;
            TTestToken<int>::DestructorCalls = TTestToken<int>::DestructorCalls + 1;
            iVar10 = iVar11;
          } while (uVar13 != 4);
          iVar8 = iVar8 + 1;
        } while( true );
      }
      uVar6 = 0;
      if ((int)uVar13 < *(int *)(FVar4.Data + (longlong)iVar8 * 0x10 + 8)) {
        uVar6 = ~uVar13 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      TTestToken<int>::ConstructorCalls = TTestToken<int>::ConstructorCalls + 1;
      iVar11 = iVar10 + 1;
      piVar1 = (int *)(*(longlong *)&FVar4.Data[(longlong)iVar8 * 0x10].field_0x0 +
                      (longlong)(int)uVar13 * 4);
      if ((local_5b8 == piVar1) &&
         (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_3577702131160842175>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\TokenTest.h"
                             ,0x41,"&Other != this"), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *piVar1 = iVar10;
      uVar13 = uVar13 + 1;
      TTestToken<int>::MoveAssignmentCalls = TTestToken<int>::MoveAssignmentCalls + 1;
      TTestToken<int>::DestructorCalls = TTestToken<int>::DestructorCalls + 1;
      iVar10 = iVar11;
    } while (uVar13 != 4);
    iVar8 = iVar8 + 1;
  } while( true );
}

