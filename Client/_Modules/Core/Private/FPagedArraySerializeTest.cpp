// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141ac9350

EAutomationTestFlags __thiscall
PagedArray::FPagedArraySerializeTest::GetTestFlags(FPagedArraySerializeTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141ac9360

bool __thiscall PagedArray::FPagedArraySerializeTest::IsStressTest(FPagedArraySerializeTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141ac9370

uint __thiscall
PagedArray::FPagedArraySerializeTest::GetRequiredDeviceNum(FPagedArraySerializeTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141ac9380

FString * __thiscall
PagedArray::FPagedArraySerializeTest::GetTestSourceFileName
          (FPagedArraySerializeTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\PagedArrayTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141ac93b0

int __thiscall
PagedArray::FPagedArraySerializeTest::GetTestSourceFileLine(FPagedArraySerializeTest *this)

{
  return 0x5b0;
}

// GetTests @ 141ac93c0

/* WARNING: Removing unreachable block (ram,0x000141ac953e) */

void __thiscall
PagedArray::FPagedArraySerializeTest::GetTests
          (FPagedArraySerializeTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141ac9560

bool __thiscall
PagedArray::FPagedArraySerializeTest::RunTest(FPagedArraySerializeTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141ac9590

FString * __thiscall
PagedArray::FPagedArraySerializeTest::GetBeautifiedTestName
          (FPagedArraySerializeTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FPagedArraySerializeTest @ 141b25650

FPagedArraySerializeTest * __thiscall
PagedArray::FPagedArraySerializeTest::FPagedArraySerializeTest
          (FPagedArraySerializeTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FPagedArraySerializeTest_PagedArray__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[SmokeFilter][Core][Containers][PagedArray]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Containers::TPagedArray::Serialize");
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

// TestBody @ 141b965c0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
PagedArray::FPagedArraySerializeTest::TestBody(FPagedArraySerializeTest *this,FString *param_1)

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
  TPagedArray<TTestToken<int>,16,TSizedDefaultAllocator<32>_> local_608;
  TPagedArray<TTestToken<int>,16,TSizedDefaultAllocator<32>_> local_5f0;
  void *local_5d8;
  undefined8 local_5d0;
  void *local_5c8;
  undefined8 local_5c0;
  void *local_5b8;
  undefined8 local_5b0;
  TPagedArray<TTestToken<int>,16,TSizedDefaultAllocator<32>_> local_5a8;
  TPagedArray<TTestToken<int>,16,TSizedDefaultAllocator<32>_> local_590;
  undefined8 local_578;
  undefined8 local_570;
  TPagedArray<TTestToken<int>,16,TSizedDefaultAllocator<32>_> local_568;
  TPagedArray<TTestToken<int>,16,TSizedDefaultAllocator<32>_> local_550;
  int local_538;
  int local_534;
  FString local_530;
  FString local_520;
  FString local_510;
  FString local_500;
  FString local_4f0;
  FString local_4e0;
  FString local_4d0;
  FString local_4c0;
  FString local_4b0;
  FString local_4a0;
  FString local_490;
  FString local_480;
  FString local_470;
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
  local_550.Pages.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_550.Pages.ArrayNum = 0;
  local_550.Pages.ArrayMax = 0;
  local_550.Count = 0;
  local_568.Pages.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_568.Pages.ArrayNum = 0;
  local_568.Pages.ArrayMax = 0;
  local_568.Count = 0;
  local_5d8 = (void *)0x0;
  local_5d0 = 0;
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
  local_3c0 = &local_5d8;
  local_3b8 = 0;
  FArchiveState::SetIsSaving(&local_458,true);
  (**(code **)(local_458._padding_ + 0x108))(&local_458,0);
  local_458._padding_ = (longlong)&___7FMemoryWriter__6B_;
  UE::Core::PagedArray::Private::Serialize<TTestToken<int>,16,TSizedDefaultAllocator<32>_>
            ((FArchive *)&local_458,&local_550);
  FArchive::~FArchive((FArchive *)&local_458);
  if ((int)local_5d0 != 4) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar2 = pFVar7->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_530,L"Condition failed");
    (*pcVar3)(pFVar2,&local_530,0);
    if (local_530.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_530.Data.AllocatorInstance.Data);
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
  local_1b0 = &local_5d8;
  local_1a8 = 0x7fffffffffffffff;
  FArchiveState::SetIsLoading(&local_248,true);
  (**(code **)(local_248._padding_ + 0x108))(&local_248,0);
  UE::Core::PagedArray::Private::Serialize<TTestToken<int>,16,TSizedDefaultAllocator<32>_>
            ((FArchive *)&local_248,&local_568);
  FArchive::~FArchive((FArchive *)&local_248);
  bVar5 = TPagedArray<TTestToken<int>,16,TSizedDefaultAllocator<32>_>::operator==
                    (&local_550,&local_568);
  if (!bVar5) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar2 = pFVar7->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_520,L"Condition failed");
    (*pcVar3)(pFVar2,&local_520,0);
    if (local_520.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_520.Data.AllocatorInstance.Data);
    }
  }
  if (local_5d8 != (void *)0x0) {
    FMemory::Free(local_5d8);
  }
  DestructItems<TArray<TTestToken<int>,TSizedDefaultAllocator<32>_>,int>
            ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)
             local_568.Pages.AllocatorInstance.Data,local_568.Pages.ArrayNum);
  if ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)local_568.Pages.AllocatorInstance.Data
      != (TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_568.Pages.AllocatorInstance.Data);
  }
  DestructItems<TArray<TTestToken<int>,TSizedDefaultAllocator<32>_>,int>
            ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)
             local_550.Pages.AllocatorInstance.Data,local_550.Pages.ArrayNum);
  if ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)local_550.Pages.AllocatorInstance.Data
      != (TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_550.Pages.AllocatorInstance.Data);
  }
  if (((TTestToken<int>::MoveConstructorCalls - TTestToken<int>::DestructorCalls) +
       TTestToken<int>::CopyConstructorCalls + TTestToken<int>::ConstructorCalls != 0) ||
     (TTestToken<int>::DestructorCalls != 0)) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar2 = pFVar7->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_510,L"Condition failed");
    (*pcVar3)(pFVar2,&local_510,0);
    if (local_510.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_510.Data.AllocatorInstance.Data);
    }
  }
  TTestToken<int>::ConstructorCalls = 0;
  TTestToken<int>::DestructorCalls = 0;
  TTestToken<int>::CopyConstructorCalls = 0;
  TTestToken<int>::MoveConstructorCalls = 0;
  TTestToken<int>::CopyAssignmentCalls = 0;
  TTestToken<int>::MoveAssignmentCalls = 0;
  local_608.Pages.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_608.Pages.ArrayNum = 0;
  local_608.Pages.ArrayMax = 0;
  local_608.Count = 0;
  local_5a8.Pages.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_5a8.Pages.ArrayNum = 0;
  local_5a8.Pages.ArrayMax = 0;
  local_5a8.Count = 0;
  TPagedArray<TTestToken<int>,16,TSizedDefaultAllocator<32>_>::SetNum(&local_608,4,Default);
  FVar4.Data = local_608.Pages.AllocatorInstance.Data;
  iVar12 = (local_608.Count >> 0x1f & 3U) + local_608.Count;
  uVar9 = local_608.Count & 0x80000003;
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
        if (local_608.Count != 4) {
          pFVar7 = FAutomationTestFramework::Get();
          pFVar2 = pFVar7->CurrentTest;
          pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
          ::FString::FString(&local_500,L"Condition failed");
          (*pcVar3)(pFVar2,&local_500,0);
          if (local_500.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_500.Data.AllocatorInstance.Data);
          }
        }
        if (local_5a8.Count != 0) {
          pFVar7 = FAutomationTestFramework::Get();
          pFVar2 = pFVar7->CurrentTest;
          pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
          ::FString::FString(&local_4f0,L"Condition failed");
          (*pcVar3)(pFVar2,&local_4f0,0);
          if (local_4f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_4f0.Data.AllocatorInstance.Data);
          }
        }
        local_5c8 = (void *)0x0;
        local_5c0 = 0;
        local_3a8._padding_ = 0;
        local_3a8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
        local_578 = 0;
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
        local_310 = &local_5c8;
        local_308 = local_578;
        FArchiveState::SetIsSaving(&local_3a8,true);
        (**(code **)(local_3a8._padding_ + 0x108))(&local_3a8,0);
        local_3a8._padding_ = (longlong)&___7FMemoryWriter__6B_;
        UE::Core::PagedArray::Private::Serialize<TTestToken<int>,16,TSizedDefaultAllocator<32>_>
                  ((FArchive *)&local_3a8,&local_608);
        FArchive::~FArchive((FArchive *)&local_3a8);
        if ((int)local_5c0 != 0x14) {
          pFVar7 = FAutomationTestFramework::Get();
          pFVar2 = pFVar7->CurrentTest;
          pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
          ::FString::FString(&local_4e0,L"Condition failed");
          (*pcVar3)(pFVar2,&local_4e0,0);
          if (local_4e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_4e0.Data.AllocatorInstance.Data);
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
        local_100 = &local_5c8;
        local_f8 = 0x7fffffffffffffff;
        FArchiveState::SetIsLoading(&local_198,true);
        (**(code **)(local_198._padding_ + 0x108))(&local_198,0);
        UE::Core::PagedArray::Private::Serialize<TTestToken<int>,16,TSizedDefaultAllocator<32>_>
                  ((FArchive *)&local_198,&local_5a8);
        FArchive::~FArchive((FArchive *)&local_198);
        bVar5 = TPagedArray<TTestToken<int>,16,TSizedDefaultAllocator<32>_>::operator==
                          (&local_608,&local_5a8);
        if (!bVar5) {
          pFVar7 = FAutomationTestFramework::Get();
          pFVar2 = pFVar7->CurrentTest;
          pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
          ::FString::FString(&local_4d0,L"Condition failed");
          (*pcVar3)(pFVar2,&local_4d0,0);
          if (local_4d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_4d0.Data.AllocatorInstance.Data);
          }
        }
        if (local_5c8 != (void *)0x0) {
          FMemory::Free(local_5c8);
        }
        DestructItems<TArray<TTestToken<int>,TSizedDefaultAllocator<32>_>,int>
                  ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)
                   local_5a8.Pages.AllocatorInstance.Data,local_5a8.Pages.ArrayNum);
        if ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)
            local_5a8.Pages.AllocatorInstance.Data !=
            (TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)0x0) {
          FMemory::Free(local_5a8.Pages.AllocatorInstance.Data);
        }
        DestructItems<TArray<TTestToken<int>,TSizedDefaultAllocator<32>_>,int>
                  ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)
                   local_608.Pages.AllocatorInstance.Data,local_608.Pages.ArrayNum);
        if ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)
            local_608.Pages.AllocatorInstance.Data !=
            (TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)0x0) {
          FMemory::Free(local_608.Pages.AllocatorInstance.Data);
        }
        if (((TTestToken<int>::MoveConstructorCalls - TTestToken<int>::DestructorCalls) +
             TTestToken<int>::CopyConstructorCalls + TTestToken<int>::ConstructorCalls != 0) ||
           (TTestToken<int>::DestructorCalls != 0xc)) {
          pFVar7 = FAutomationTestFramework::Get();
          pFVar2 = pFVar7->CurrentTest;
          pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
          ::FString::FString(&local_4c0,L"Condition failed");
          (*pcVar3)(pFVar2,&local_4c0,0);
          if (local_4c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_4c0.Data.AllocatorInstance.Data);
          }
        }
        TTestToken<int>::ConstructorCalls = 0;
        TTestToken<int>::DestructorCalls = 0;
        TTestToken<int>::CopyConstructorCalls = 0;
        TTestToken<int>::MoveConstructorCalls = 0;
        TTestToken<int>::CopyAssignmentCalls = 0;
        TTestToken<int>::MoveAssignmentCalls = 0;
        local_5f0.Pages.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_5f0.Pages.ArrayNum = 0;
        local_5f0.Pages.ArrayMax = 0;
        local_5f0.Count = 0;
        local_590.Pages.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_590.Pages.ArrayNum = 0;
        local_590.Pages.ArrayMax = 0;
        local_590.Count = 0;
        TPagedArray<TTestToken<int>,16,TSizedDefaultAllocator<32>_>::SetNum(&local_5f0,0xc,Default);
        FVar4.Data = local_5f0.Pages.AllocatorInstance.Data;
        iVar12 = (local_5f0.Count >> 0x1f & 3U) + local_5f0.Count;
        uVar9 = local_5f0.Count & 0x80000003;
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
              if (local_5f0.Count != 0xc) {
                pFVar7 = FAutomationTestFramework::Get();
                pFVar2 = pFVar7->CurrentTest;
                pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
                ::FString::FString(&local_4b0,L"Condition failed");
                (*pcVar3)(pFVar2,&local_4b0,0);
                if (local_4b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_4b0.Data.AllocatorInstance.Data);
                }
              }
              if (local_590.Count != 0) {
                pFVar7 = FAutomationTestFramework::Get();
                pFVar2 = pFVar7->CurrentTest;
                pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
                ::FString::FString(&local_4a0,L"Condition failed");
                (*pcVar3)(pFVar2,&local_4a0,0);
                if (local_4a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_4a0.Data.AllocatorInstance.Data);
                }
              }
              local_5b8 = (void *)0x0;
              local_5b0 = 0;
              local_2f8._padding_ = 0;
              local_2f8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
              local_570 = 0;
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
              local_260 = &local_5b8;
              local_258 = local_570;
              FArchiveState::SetIsSaving(&local_2f8,true);
              (**(code **)(local_2f8._padding_ + 0x108))(&local_2f8,0);
              local_2f8._padding_ = (longlong)&___7FMemoryWriter__6B_;
              UE::Core::PagedArray::Private::
              Serialize<TTestToken<int>,16,TSizedDefaultAllocator<32>_>
                        ((FArchive *)&local_2f8,&local_5f0);
              FArchive::~FArchive((FArchive *)&local_2f8);
              if ((int)local_5b0 != 0x34) {
                pFVar7 = FAutomationTestFramework::Get();
                pFVar2 = pFVar7->CurrentTest;
                pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
                ::FString::FString(&local_490,L"Condition failed");
                (*pcVar3)(pFVar2,&local_490,0);
                if (local_490.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_490.Data.AllocatorInstance.Data);
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
              local_50 = &local_5b8;
              local_48 = 0x7fffffffffffffff;
              FArchiveState::SetIsLoading(&local_e8,true);
              (**(code **)(local_e8._padding_ + 0x108))(&local_e8,0);
              UE::Core::PagedArray::Private::
              Serialize<TTestToken<int>,16,TSizedDefaultAllocator<32>_>
                        ((FArchive *)&local_e8,&local_590);
              FArchive::~FArchive((FArchive *)&local_e8);
              bVar5 = TPagedArray<TTestToken<int>,16,TSizedDefaultAllocator<32>_>::operator==
                                (&local_5f0,&local_590);
              if (!bVar5) {
                pFVar7 = FAutomationTestFramework::Get();
                pFVar2 = pFVar7->CurrentTest;
                pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
                ::FString::FString(&local_480,L"Condition failed");
                (*pcVar3)(pFVar2,&local_480,0);
                if (local_480.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_480.Data.AllocatorInstance.Data);
                }
              }
              if (local_5b8 != (void *)0x0) {
                FMemory::Free(local_5b8);
              }
              DestructItems<TArray<TTestToken<int>,TSizedDefaultAllocator<32>_>,int>
                        ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)
                         local_590.Pages.AllocatorInstance.Data,local_590.Pages.ArrayNum);
              if ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)
                  local_590.Pages.AllocatorInstance.Data !=
                  (TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)0x0) {
                FMemory::Free(local_590.Pages.AllocatorInstance.Data);
              }
              DestructItems<TArray<TTestToken<int>,TSizedDefaultAllocator<32>_>,int>
                        ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)
                         local_5f0.Pages.AllocatorInstance.Data,local_5f0.Pages.ArrayNum);
              if ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)
                  local_5f0.Pages.AllocatorInstance.Data !=
                  (TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)0x0) {
                FMemory::Free(local_5f0.Pages.AllocatorInstance.Data);
              }
              if (((TTestToken<int>::MoveConstructorCalls - TTestToken<int>::DestructorCalls) +
                   TTestToken<int>::CopyConstructorCalls + TTestToken<int>::ConstructorCalls != 0)
                 || (TTestToken<int>::DestructorCalls != 0x24)) {
                pFVar7 = FAutomationTestFramework::Get();
                pFVar2 = pFVar7->CurrentTest;
                pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
                ::FString::FString(&local_470,L"Condition failed");
                (*pcVar3)(pFVar2,&local_470,0);
                if (local_470.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_470.Data.AllocatorInstance.Data);
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
            if ((&local_534 == piVar1) &&
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
      if ((&local_538 == piVar1) &&
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

