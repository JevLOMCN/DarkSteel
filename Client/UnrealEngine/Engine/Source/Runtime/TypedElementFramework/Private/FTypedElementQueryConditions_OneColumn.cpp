// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 10

// GetTestFlags @ 142cc8330

EAutomationTestFlags __thiscall
UE::Editor::DataStorage::Tests::FTypedElementQueryConditions_OneColumn::GetTestFlags
          (FTypedElementQueryConditions_OneColumn *this)

{
  return this->TestFlags;
}

// IsStressTest @ 142cc8340

bool __thiscall
UE::Editor::DataStorage::Tests::FTypedElementQueryConditions_OneColumn::IsStressTest
          (FTypedElementQueryConditions_OneColumn *this)

{
  return false;
}

// GetRequiredDeviceNum @ 142cc8350

uint __thiscall
UE::Editor::DataStorage::Tests::FTypedElementQueryConditions_OneColumn::GetRequiredDeviceNum
          (FTypedElementQueryConditions_OneColumn *this)

{
  return 1;
}

// GetTestSourceFileName @ 142cc8360

FString * __thiscall
UE::Editor::DataStorage::Tests::FTypedElementQueryConditions_OneColumn::GetTestSourceFileName
          (FTypedElementQueryConditions_OneColumn *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Tests\\Elements\\Framework\\TypedElementQueryBuilderTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 142cc8390

int __thiscall
UE::Editor::DataStorage::Tests::FTypedElementQueryConditions_OneColumn::GetTestSourceFileLine
          (FTypedElementQueryConditions_OneColumn *this)

{
  return 0x76;
}

// GetTests @ 142cc83a0

/* WARNING: Removing unreachable block (ram,0x000142cc851e) */

void __thiscall
UE::Editor::DataStorage::Tests::FTypedElementQueryConditions_OneColumn::GetTests
          (FTypedElementQueryConditions_OneColumn *this,
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

// RunTest @ 142cc8540

bool __thiscall
UE::Editor::DataStorage::Tests::FTypedElementQueryConditions_OneColumn::RunTest
          (FTypedElementQueryConditions_OneColumn *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 142cc8570

FString * __thiscall
UE::Editor::DataStorage::Tests::FTypedElementQueryConditions_OneColumn::GetBeautifiedTestName
          (FTypedElementQueryConditions_OneColumn *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FTypedElementQueryConditions_OneColumn @ 142ce41b0

FTypedElementQueryConditions_OneColumn * __thiscall
UE::Editor::DataStorage::Tests::FTypedElementQueryConditions_OneColumn::
FTypedElementQueryConditions_OneColumn
          (FTypedElementQueryConditions_OneColumn *this,FString *param_1)

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
       (longlong)&___7FTypedElementQueryConditions_OneColumn_Tests_DataStorage_Editor_UE__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][EngineFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,
                              "Editor::DataStorage::Queries::FTypedElementQueryConditions_OneColumn"
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

// TestBody @ 142d14a60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Editor::DataStorage::Tests::FTypedElementQueryConditions_OneColumn::TestBody
          (FTypedElementQueryConditions_OneColumn *this,FString *param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  FWeakObjectPtr FVar3;
  uchar uVar4;
  bool bVar5;
  FAutomationTestFramework *pFVar6;
  UScriptStruct *pUVar7;
  undefined1 auStackY_358 [32];
  undefined1 local_318 [12];
  int iStack_30c;
  FWeakObjectPtr local_308 [2];
  FWeakObjectPtr local_2f8;
  undefined8 uStack_2f0;
  FConditions local_2d8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_358;
  local_2f8 = (FWeakObjectPtr)FTestColumnA::StaticStruct();
  if ((GC::GIsIncrementalReachabilityPending != false) && (local_2f8 != (FWeakObjectPtr)0x0)) {
    GC::MarkAsReachable((UObject *)local_2f8);
  }
  local_308[0].ObjectIndex = 0;
  local_308[0].ObjectSerialNumber = 0;
  if ((GC::GIsIncrementalReachabilityPending != false) && (local_2f8 != (FWeakObjectPtr)0x0)) {
    GC::MarkAsReachable((UObject *)local_2f8);
  }
  FWeakObjectPtr::operator=(local_308,(FObjectPtr)&local_2f8);
  local_318._0_4_ = local_308[0].ObjectIndex;
  local_318._4_4_ = local_308[0].ObjectSerialNumber;
  local_318._8_4_ = 0;
  iStack_30c = 0;
  Queries::FConditions::FConditions(&local_2d8,(FColumnBase *)local_318);
  uVar4 = Queries::FConditions::MinimumColumnMatchRequired(&local_2d8);
  if (uVar4 != '\x01') {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)local_318,L"Condition failed");
    (*pcVar2)(pFVar1,local_318,0);
    if ((FWeakObjectPtr)local_318._0_8_ != (FWeakObjectPtr)0x0) {
      FMemory::Free((void *)local_318._0_8_);
    }
  }
  pUVar7 = FTestColumnA::StaticStruct();
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar7);
  }
  local_308[0].ObjectIndex = 0;
  local_308[0].ObjectSerialNumber = 0;
  local_2f8 = (FWeakObjectPtr)pUVar7;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar7);
  }
  FWeakObjectPtr::operator=(local_308,(FObjectPtr)&local_2f8);
  FVar3 = local_308[0];
  local_2f8 = local_308[0];
  uStack_2f0 = 0;
  local_318._0_4_ = 0;
  local_318._4_4_ = 0;
  local_318._8_4_ = 1;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,4,1,0,(ForAnyElementType *)local_318,1,&iStack_30c);
  *(FWeakObjectPtr *)local_318._0_8_ = FVar3;
  ((FWeakObjectPtr *)(local_318._0_8_ + 8))->ObjectIndex = 0;
  ((FWeakObjectPtr *)(local_318._0_8_ + 8))->ObjectSerialNumber = 0;
  bVar5 = TestMatching(&local_2d8,
                       (TArray<UE::Editor::DataStorage::Queries::FColumnBase,TSizedDefaultAllocator<32>_>
                        *)local_318,true,false);
  if ((FWeakObjectPtr)local_318._0_8_ != (FWeakObjectPtr)0x0) {
    FMemory::Free((void *)local_318._0_8_);
  }
  if (!bVar5) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)local_318,L"Condition failed");
    (*pcVar2)(pFVar1,local_318,0);
    if ((FWeakObjectPtr)local_318._0_8_ != (FWeakObjectPtr)0x0) {
      FMemory::Free((void *)local_318._0_8_);
    }
  }
  if (local_2d8.Identifiers.AllocatorInstance.SecondaryData != (ForElementType<FName>)0x0) {
    FMemory::Free((void *)local_2d8.Identifiers.AllocatorInstance.SecondaryData);
  }
  if (local_2d8.Tokens.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token>)0x0) {
    FMemory::Free((void *)local_2d8.Tokens.AllocatorInstance.SecondaryData);
  }
  if (local_2d8.ColumnFlags.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::Editor::DataStorage::Queries::FConditions::EColumnFlags>)0x0) {
    FMemory::Free((void *)local_2d8.ColumnFlags.AllocatorInstance.SecondaryData);
  }
  if (local_2d8.Columns.AllocatorInstance.SecondaryData !=
      (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)0x0) {
    FMemory::Free((void *)local_2d8.Columns.AllocatorInstance.SecondaryData);
  }
  return;
}

