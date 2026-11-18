// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 10

// GetTestFlags @ 142cc9070

EAutomationTestFlags __thiscall
UE::Editor::DataStorage::Tests::FTypedElementQueryConditions3::GetTestFlags
          (FTypedElementQueryConditions3 *this)

{
  return this->TestFlags;
}

// IsStressTest @ 142cc9080

bool __thiscall
UE::Editor::DataStorage::Tests::FTypedElementQueryConditions3::IsStressTest
          (FTypedElementQueryConditions3 *this)

{
  return false;
}

// GetRequiredDeviceNum @ 142cc9090

uint __thiscall
UE::Editor::DataStorage::Tests::FTypedElementQueryConditions3::GetRequiredDeviceNum
          (FTypedElementQueryConditions3 *this)

{
  return 1;
}

// GetTestSourceFileName @ 142cc90a0

FString * __thiscall
UE::Editor::DataStorage::Tests::FTypedElementQueryConditions3::GetTestSourceFileName
          (FTypedElementQueryConditions3 *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Tests\\Elements\\Framework\\TypedElementQueryBuilderTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 142cc90d0

int __thiscall
UE::Editor::DataStorage::Tests::FTypedElementQueryConditions3::GetTestSourceFileLine
          (FTypedElementQueryConditions3 *this)

{
  return 0x93;
}

// GetTests @ 142cc90e0

/* WARNING: Removing unreachable block (ram,0x000142cc925e) */

void __thiscall
UE::Editor::DataStorage::Tests::FTypedElementQueryConditions3::GetTests
          (FTypedElementQueryConditions3 *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 142cc9280

bool __thiscall
UE::Editor::DataStorage::Tests::FTypedElementQueryConditions3::RunTest
          (FTypedElementQueryConditions3 *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 142cc92b0

FString * __thiscall
UE::Editor::DataStorage::Tests::FTypedElementQueryConditions3::GetBeautifiedTestName
          (FTypedElementQueryConditions3 *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FTypedElementQueryConditions3 @ 142ce3500

FTypedElementQueryConditions3 * __thiscall
UE::Editor::DataStorage::Tests::FTypedElementQueryConditions3::FTypedElementQueryConditions3
          (FTypedElementQueryConditions3 *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FTypedElementQueryConditions3_Tests_DataStorage_Editor_UE__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][EngineFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,
                              "Editor::DataStorage::QueryBuilder::FTypedElementQueryConditions A && (B || C)"
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

// TestBody @ 142d0f5c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Editor::DataStorage::Tests::FTypedElementQueryConditions3::TestBody
          (FTypedElementQueryConditions3 *this,FString *param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  int iVar3;
  TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr> TVar4;
  int iVar5;
  uchar uVar6;
  bool bVar7;
  FWeakObjectPtr FVar8;
  FConditions *pFVar9;
  FAutomationTestFramework *pFVar10;
  undefined1 auStackY_618 [32];
  FWeakObjectPtr local_5d8 [2];
  undefined1 local_5c8 [12];
  int iStack_5bc;
  FColumnBase local_5b8;
  FWeakObjectPtr local_5a8;
  FWeakObjectPtr FStack_5a0;
  int local_598;
  int iStack_594;
  undefined8 uStack_590;
  FConditions local_588;
  FConditions local_2d8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_618;
  local_5b8.TypeInfo.WeakPtr = (FWeakObjectPtr)FTestColumnC::StaticStruct();
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (local_5b8.TypeInfo.WeakPtr != (FWeakObjectPtr)0x0)) {
    GC::MarkAsReachable((UObject *)local_5b8.TypeInfo.WeakPtr);
  }
  local_5d8[0].ObjectIndex = 0;
  local_5d8[0].ObjectSerialNumber = 0;
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (local_5b8.TypeInfo.WeakPtr != (FWeakObjectPtr)0x0)) {
    GC::MarkAsReachable((UObject *)local_5b8.TypeInfo.WeakPtr);
  }
  FWeakObjectPtr::operator=(local_5d8,(FObjectPtr)&local_5b8);
  local_5c8._0_4_ = local_5d8[0].ObjectIndex;
  local_5c8._4_4_ = local_5d8[0].ObjectSerialNumber;
  local_5c8._8_4_ = 0;
  iStack_5bc = 0;
  FVar8 = (FWeakObjectPtr)FTestColumnB::StaticStruct();
  if ((GC::GIsIncrementalReachabilityPending != false) && (FVar8 != (FWeakObjectPtr)0x0)) {
    GC::MarkAsReachable((UObject *)FVar8);
  }
  local_5d8[0].ObjectIndex = 0;
  local_5d8[0].ObjectSerialNumber = 0;
  local_5b8.TypeInfo.WeakPtr = FVar8;
  if ((GC::GIsIncrementalReachabilityPending != false) && (FVar8 != (FWeakObjectPtr)0x0)) {
    GC::MarkAsReachable((UObject *)FVar8);
  }
  FWeakObjectPtr::operator=(local_5d8,(FObjectPtr)&local_5b8);
  local_5b8.TypeInfo.WeakPtr = local_5d8[0];
  local_5b8.Identifier.ComparisonIndex.Value = 0;
  local_5b8.Identifier.Number = 0;
  pFVar9 = Queries::operator||(&local_2d8,&local_5b8,(FColumnBase *)local_5c8);
  FVar8 = (FWeakObjectPtr)FTestColumnA::StaticStruct();
  if ((GC::GIsIncrementalReachabilityPending != false) && (FVar8 != (FWeakObjectPtr)0x0)) {
    GC::MarkAsReachable((UObject *)FVar8);
  }
  local_5d8[0].ObjectIndex = 0;
  local_5d8[0].ObjectSerialNumber = 0;
  local_5b8.TypeInfo.WeakPtr = FVar8;
  if ((GC::GIsIncrementalReachabilityPending != false) && (FVar8 != (FWeakObjectPtr)0x0)) {
    GC::MarkAsReachable((UObject *)FVar8);
  }
  FWeakObjectPtr::operator=(local_5d8,(FObjectPtr)&local_5b8);
  local_5c8._0_4_ = local_5d8[0].ObjectIndex;
  local_5c8._4_4_ = local_5d8[0].ObjectSerialNumber;
  local_5c8._8_4_ = 0;
  iStack_5bc = 0;
  Queries::operator&&(&local_588,(FColumnBase *)local_5c8,pFVar9);
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
  uVar6 = Queries::FConditions::MinimumColumnMatchRequired(&local_588);
  if (uVar6 != '\x02') {
    pFVar10 = FAutomationTestFramework::Get();
    pFVar1 = pFVar10->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)local_5c8,L"Condition failed");
    (*pcVar2)(pFVar1,local_5c8,0);
    if ((FWeakObjectPtr)local_5c8._0_8_ != (FWeakObjectPtr)0x0) {
      FMemory::Free((void *)local_5c8._0_8_);
    }
  }
  FVar8 = (FWeakObjectPtr)FTestColumnA::StaticStruct();
  if ((GC::GIsIncrementalReachabilityPending != false) && (FVar8 != (FWeakObjectPtr)0x0)) {
    GC::MarkAsReachable((UObject *)FVar8);
  }
  local_5d8[0].ObjectIndex = 0;
  local_5d8[0].ObjectSerialNumber = 0;
  local_5b8.TypeInfo.WeakPtr = FVar8;
  if ((GC::GIsIncrementalReachabilityPending != false) && (FVar8 != (FWeakObjectPtr)0x0)) {
    GC::MarkAsReachable((UObject *)FVar8);
  }
  FWeakObjectPtr::operator=(local_5d8,(FObjectPtr)&local_5b8);
  local_5b8.TypeInfo.WeakPtr = local_5d8[0];
  local_5a8 = local_5d8[0];
  FStack_5a0.ObjectIndex = 0;
  FStack_5a0.ObjectSerialNumber = 0;
  FVar8 = (FWeakObjectPtr)FTestColumnB::StaticStruct();
  if ((GC::GIsIncrementalReachabilityPending != false) && (FVar8 != (FWeakObjectPtr)0x0)) {
    GC::MarkAsReachable((UObject *)FVar8);
  }
  local_5d8[0].ObjectIndex = 0;
  local_5d8[0].ObjectSerialNumber = 0;
  local_5b8.TypeInfo.WeakPtr = FVar8;
  if ((GC::GIsIncrementalReachabilityPending != false) && (FVar8 != (FWeakObjectPtr)0x0)) {
    GC::MarkAsReachable((UObject *)FVar8);
  }
  FWeakObjectPtr::operator=(local_5d8,(FObjectPtr)&local_5b8);
  local_5b8.TypeInfo.WeakPtr = local_5d8[0];
  TVar4.WeakPtr = local_5b8.TypeInfo.WeakPtr;
  local_5b8.TypeInfo.WeakPtr.ObjectIndex = local_5d8[0].ObjectIndex;
  iVar3 = local_5b8.TypeInfo.WeakPtr.ObjectIndex;
  local_5b8.TypeInfo.WeakPtr.ObjectSerialNumber = local_5d8[0].ObjectSerialNumber;
  iVar5 = local_5b8.TypeInfo.WeakPtr.ObjectSerialNumber;
  uStack_590 = 0;
  local_5c8._0_4_ = 0;
  local_5c8._4_4_ = 0;
  local_5c8._8_4_ = 2;
  local_5b8.TypeInfo.WeakPtr = TVar4.WeakPtr;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,4,2,0,(ForAnyElementType *)local_5c8,2,&iStack_5bc);
  *(FWeakObjectPtr *)local_5c8._0_8_ = local_5a8;
  *(FWeakObjectPtr *)(local_5c8._0_8_ + 8) = FStack_5a0;
  local_598 = iVar3;
  iStack_594 = iVar5;
  ((FWeakObjectPtr *)(local_5c8._0_8_ + 0x10))->ObjectIndex = iVar3;
  *(int *)(local_5c8._0_8_ + 0x14) = iVar5;
  ((FWeakObjectPtr *)(local_5c8._0_8_ + 0x18))->ObjectIndex = (int)uStack_590;
  *(int *)(local_5c8._0_8_ + 0x1c) = uStack_590._4_4_;
  bVar7 = TestMatching(&local_588,
                       (TArray<UE::Editor::DataStorage::Queries::FColumnBase,TSizedDefaultAllocator<32>_>
                        *)local_5c8,true,false);
  if ((FWeakObjectPtr)local_5c8._0_8_ != (FWeakObjectPtr)0x0) {
    FMemory::Free((void *)local_5c8._0_8_);
  }
  if (!bVar7) {
    pFVar10 = FAutomationTestFramework::Get();
    pFVar1 = pFVar10->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)local_5c8,L"Condition failed");
    (*pcVar2)(pFVar1,local_5c8,0);
    if ((FWeakObjectPtr)local_5c8._0_8_ != (FWeakObjectPtr)0x0) {
      FMemory::Free((void *)local_5c8._0_8_);
    }
  }
  FVar8 = (FWeakObjectPtr)FTestColumnA::StaticStruct();
  if ((GC::GIsIncrementalReachabilityPending != false) && (FVar8 != (FWeakObjectPtr)0x0)) {
    GC::MarkAsReachable((UObject *)FVar8);
  }
  local_5d8[0].ObjectIndex = 0;
  local_5d8[0].ObjectSerialNumber = 0;
  local_5b8.TypeInfo.WeakPtr = FVar8;
  if ((GC::GIsIncrementalReachabilityPending != false) && (FVar8 != (FWeakObjectPtr)0x0)) {
    GC::MarkAsReachable((UObject *)FVar8);
  }
  FWeakObjectPtr::operator=(local_5d8,(FObjectPtr)&local_5b8);
  local_5b8.TypeInfo.WeakPtr = local_5d8[0];
  local_5a8 = local_5d8[0];
  FStack_5a0.ObjectIndex = 0;
  FStack_5a0.ObjectSerialNumber = 0;
  FVar8 = (FWeakObjectPtr)FTestColumnC::StaticStruct();
  if ((GC::GIsIncrementalReachabilityPending != false) && (FVar8 != (FWeakObjectPtr)0x0)) {
    GC::MarkAsReachable((UObject *)FVar8);
  }
  local_5d8[0].ObjectIndex = 0;
  local_5d8[0].ObjectSerialNumber = 0;
  local_5b8.TypeInfo.WeakPtr = FVar8;
  if ((GC::GIsIncrementalReachabilityPending != false) && (FVar8 != (FWeakObjectPtr)0x0)) {
    GC::MarkAsReachable((UObject *)FVar8);
  }
  FWeakObjectPtr::operator=(local_5d8,(FObjectPtr)&local_5b8);
  local_5b8.TypeInfo.WeakPtr = local_5d8[0];
  TVar4.WeakPtr = local_5b8.TypeInfo.WeakPtr;
  local_5b8.TypeInfo.WeakPtr.ObjectIndex = local_5d8[0].ObjectIndex;
  iVar3 = local_5b8.TypeInfo.WeakPtr.ObjectIndex;
  local_5b8.TypeInfo.WeakPtr.ObjectSerialNumber = local_5d8[0].ObjectSerialNumber;
  iVar5 = local_5b8.TypeInfo.WeakPtr.ObjectSerialNumber;
  uStack_590 = 0;
  local_5c8._0_4_ = 0;
  local_5c8._4_4_ = 0;
  local_5c8._8_4_ = 2;
  local_5b8.TypeInfo.WeakPtr = TVar4.WeakPtr;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,4,2,0,(ForAnyElementType *)local_5c8,2,&iStack_5bc);
  *(FWeakObjectPtr *)local_5c8._0_8_ = local_5a8;
  *(FWeakObjectPtr *)(local_5c8._0_8_ + 8) = FStack_5a0;
  local_598 = iVar3;
  iStack_594 = iVar5;
  ((FWeakObjectPtr *)(local_5c8._0_8_ + 0x10))->ObjectIndex = iVar3;
  *(int *)(local_5c8._0_8_ + 0x14) = iVar5;
  ((FWeakObjectPtr *)(local_5c8._0_8_ + 0x18))->ObjectIndex = (int)uStack_590;
  *(int *)(local_5c8._0_8_ + 0x1c) = uStack_590._4_4_;
  bVar7 = TestMatching(&local_588,
                       (TArray<UE::Editor::DataStorage::Queries::FColumnBase,TSizedDefaultAllocator<32>_>
                        *)local_5c8,true,false);
  if ((FWeakObjectPtr)local_5c8._0_8_ != (FWeakObjectPtr)0x0) {
    FMemory::Free((void *)local_5c8._0_8_);
  }
  if (!bVar7) {
    pFVar10 = FAutomationTestFramework::Get();
    pFVar1 = pFVar10->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)local_5c8,L"Condition failed");
    (*pcVar2)(pFVar1,local_5c8,0);
    if ((FWeakObjectPtr)local_5c8._0_8_ != (FWeakObjectPtr)0x0) {
      FMemory::Free((void *)local_5c8._0_8_);
    }
  }
  FVar8 = (FWeakObjectPtr)FTestColumnA::StaticStruct();
  if ((GC::GIsIncrementalReachabilityPending != false) && (FVar8 != (FWeakObjectPtr)0x0)) {
    GC::MarkAsReachable((UObject *)FVar8);
  }
  local_5d8[0].ObjectIndex = 0;
  local_5d8[0].ObjectSerialNumber = 0;
  local_5b8.TypeInfo.WeakPtr = FVar8;
  if ((GC::GIsIncrementalReachabilityPending != false) && (FVar8 != (FWeakObjectPtr)0x0)) {
    GC::MarkAsReachable((UObject *)FVar8);
  }
  FWeakObjectPtr::operator=(local_5d8,(FObjectPtr)&local_5b8);
  local_5b8.TypeInfo.WeakPtr = local_5d8[0];
  local_5a8 = local_5d8[0];
  FStack_5a0.ObjectIndex = 0;
  FStack_5a0.ObjectSerialNumber = 0;
  FVar8 = (FWeakObjectPtr)FTestColumnD::StaticStruct();
  if ((GC::GIsIncrementalReachabilityPending != false) && (FVar8 != (FWeakObjectPtr)0x0)) {
    GC::MarkAsReachable((UObject *)FVar8);
  }
  local_5d8[0].ObjectIndex = 0;
  local_5d8[0].ObjectSerialNumber = 0;
  local_5b8.TypeInfo.WeakPtr = FVar8;
  if ((GC::GIsIncrementalReachabilityPending != false) && (FVar8 != (FWeakObjectPtr)0x0)) {
    GC::MarkAsReachable((UObject *)FVar8);
  }
  FWeakObjectPtr::operator=(local_5d8,(FObjectPtr)&local_5b8);
  local_5b8.TypeInfo.WeakPtr = local_5d8[0];
  TVar4.WeakPtr = local_5b8.TypeInfo.WeakPtr;
  local_5b8.TypeInfo.WeakPtr.ObjectIndex = local_5d8[0].ObjectIndex;
  iVar3 = local_5b8.TypeInfo.WeakPtr.ObjectIndex;
  local_5b8.TypeInfo.WeakPtr.ObjectSerialNumber = local_5d8[0].ObjectSerialNumber;
  iVar5 = local_5b8.TypeInfo.WeakPtr.ObjectSerialNumber;
  uStack_590 = 0;
  local_5c8._0_4_ = 0;
  local_5c8._4_4_ = 0;
  local_5c8._8_4_ = 2;
  local_5b8.TypeInfo.WeakPtr = TVar4.WeakPtr;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,4,2,0,(ForAnyElementType *)local_5c8,2,&iStack_5bc);
  *(FWeakObjectPtr *)local_5c8._0_8_ = local_5a8;
  *(FWeakObjectPtr *)(local_5c8._0_8_ + 8) = FStack_5a0;
  local_598 = iVar3;
  iStack_594 = iVar5;
  ((FWeakObjectPtr *)(local_5c8._0_8_ + 0x10))->ObjectIndex = iVar3;
  *(int *)(local_5c8._0_8_ + 0x14) = iVar5;
  ((FWeakObjectPtr *)(local_5c8._0_8_ + 0x18))->ObjectIndex = (int)uStack_590;
  *(int *)(local_5c8._0_8_ + 0x1c) = uStack_590._4_4_;
  bVar7 = TestMatching(&local_588,
                       (TArray<UE::Editor::DataStorage::Queries::FColumnBase,TSizedDefaultAllocator<32>_>
                        *)local_5c8,false,false);
  if ((FWeakObjectPtr)local_5c8._0_8_ != (FWeakObjectPtr)0x0) {
    FMemory::Free((void *)local_5c8._0_8_);
  }
  if (!bVar7) {
    pFVar10 = FAutomationTestFramework::Get();
    pFVar1 = pFVar10->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)local_5c8,L"Condition failed");
    (*pcVar2)(pFVar1,local_5c8,0);
    if ((FWeakObjectPtr)local_5c8._0_8_ != (FWeakObjectPtr)0x0) {
      FMemory::Free((void *)local_5c8._0_8_);
    }
  }
  FVar8 = (FWeakObjectPtr)FTestColumnD::StaticStruct();
  if ((GC::GIsIncrementalReachabilityPending != false) && (FVar8 != (FWeakObjectPtr)0x0)) {
    GC::MarkAsReachable((UObject *)FVar8);
  }
  local_5d8[0].ObjectIndex = 0;
  local_5d8[0].ObjectSerialNumber = 0;
  local_5b8.TypeInfo.WeakPtr = FVar8;
  if ((GC::GIsIncrementalReachabilityPending != false) && (FVar8 != (FWeakObjectPtr)0x0)) {
    GC::MarkAsReachable((UObject *)FVar8);
  }
  FWeakObjectPtr::operator=(local_5d8,(FObjectPtr)&local_5b8);
  local_5b8.TypeInfo.WeakPtr = local_5d8[0];
  local_5a8 = local_5d8[0];
  FStack_5a0.ObjectIndex = 0;
  FStack_5a0.ObjectSerialNumber = 0;
  FVar8 = (FWeakObjectPtr)FTestColumnB::StaticStruct();
  if ((GC::GIsIncrementalReachabilityPending != false) && (FVar8 != (FWeakObjectPtr)0x0)) {
    GC::MarkAsReachable((UObject *)FVar8);
  }
  local_5d8[0].ObjectIndex = 0;
  local_5d8[0].ObjectSerialNumber = 0;
  local_5b8.TypeInfo.WeakPtr = FVar8;
  if ((GC::GIsIncrementalReachabilityPending != false) && (FVar8 != (FWeakObjectPtr)0x0)) {
    GC::MarkAsReachable((UObject *)FVar8);
  }
  FWeakObjectPtr::operator=(local_5d8,(FObjectPtr)&local_5b8);
  local_5b8.TypeInfo.WeakPtr = local_5d8[0];
  TVar4.WeakPtr = local_5b8.TypeInfo.WeakPtr;
  local_5b8.TypeInfo.WeakPtr.ObjectIndex = local_5d8[0].ObjectIndex;
  iVar3 = local_5b8.TypeInfo.WeakPtr.ObjectIndex;
  local_5b8.TypeInfo.WeakPtr.ObjectSerialNumber = local_5d8[0].ObjectSerialNumber;
  iVar5 = local_5b8.TypeInfo.WeakPtr.ObjectSerialNumber;
  uStack_590 = 0;
  local_5c8._0_4_ = 0;
  local_5c8._4_4_ = 0;
  local_5c8._8_4_ = 2;
  local_5b8.TypeInfo.WeakPtr = TVar4.WeakPtr;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,4,2,0,(ForAnyElementType *)local_5c8,2,&iStack_5bc);
  *(FWeakObjectPtr *)local_5c8._0_8_ = local_5a8;
  *(FWeakObjectPtr *)(local_5c8._0_8_ + 8) = FStack_5a0;
  ((FWeakObjectPtr *)(local_5c8._0_8_ + 0x10))->ObjectIndex = iVar3;
  *(int *)(local_5c8._0_8_ + 0x14) = iVar5;
  ((FWeakObjectPtr *)(local_5c8._0_8_ + 0x18))->ObjectIndex = (int)uStack_590;
  *(int *)(local_5c8._0_8_ + 0x1c) = uStack_590._4_4_;
  bVar7 = TestMatching(&local_588,
                       (TArray<UE::Editor::DataStorage::Queries::FColumnBase,TSizedDefaultAllocator<32>_>
                        *)local_5c8,false,false);
  if ((FWeakObjectPtr)local_5c8._0_8_ != (FWeakObjectPtr)0x0) {
    FMemory::Free((void *)local_5c8._0_8_);
  }
  if (!bVar7) {
    pFVar10 = FAutomationTestFramework::Get();
    pFVar1 = pFVar10->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)local_5c8,L"Condition failed");
    (*pcVar2)(pFVar1,local_5c8,0);
    if ((FWeakObjectPtr)local_5c8._0_8_ != (FWeakObjectPtr)0x0) {
      FMemory::Free((void *)local_5c8._0_8_);
    }
  }
  if (local_588.Identifiers.AllocatorInstance.SecondaryData != (ForElementType<FName>)0x0) {
    FMemory::Free((void *)local_588.Identifiers.AllocatorInstance.SecondaryData);
  }
  if (local_588.Tokens.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token>)0x0) {
    FMemory::Free((void *)local_588.Tokens.AllocatorInstance.SecondaryData);
  }
  if (local_588.ColumnFlags.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::Editor::DataStorage::Queries::FConditions::EColumnFlags>)0x0) {
    FMemory::Free((void *)local_588.ColumnFlags.AllocatorInstance.SecondaryData);
  }
  if (local_588.Columns.AllocatorInstance.SecondaryData !=
      (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)0x0) {
    FMemory::Free((void *)local_588.Columns.AllocatorInstance.SecondaryData);
  }
  return;
}

