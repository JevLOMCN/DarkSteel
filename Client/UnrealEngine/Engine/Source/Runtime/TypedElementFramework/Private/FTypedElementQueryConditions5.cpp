// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 10

// GetTestFlags @ 142cc9bb0

EAutomationTestFlags __thiscall
UE::Editor::DataStorage::Tests::FTypedElementQueryConditions5::GetTestFlags
          (FTypedElementQueryConditions5 *this)

{
  return this->TestFlags;
}

// IsStressTest @ 142cc9bc0

bool __thiscall
UE::Editor::DataStorage::Tests::FTypedElementQueryConditions5::IsStressTest
          (FTypedElementQueryConditions5 *this)

{
  return false;
}

// GetRequiredDeviceNum @ 142cc9bd0

uint __thiscall
UE::Editor::DataStorage::Tests::FTypedElementQueryConditions5::GetRequiredDeviceNum
          (FTypedElementQueryConditions5 *this)

{
  return 1;
}

// GetTestSourceFileName @ 142cc9be0

FString * __thiscall
UE::Editor::DataStorage::Tests::FTypedElementQueryConditions5::GetTestSourceFileName
          (FTypedElementQueryConditions5 *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Tests\\Elements\\Framework\\TypedElementQueryBuilderTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 142cc9c10

int __thiscall
UE::Editor::DataStorage::Tests::FTypedElementQueryConditions5::GetTestSourceFileLine
          (FTypedElementQueryConditions5 *this)

{
  return 0xb3;
}

// GetTests @ 142cc9c20

/* WARNING: Removing unreachable block (ram,0x000142cc9d9e) */

void __thiscall
UE::Editor::DataStorage::Tests::FTypedElementQueryConditions5::GetTests
          (FTypedElementQueryConditions5 *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 142cc9dc0

bool __thiscall
UE::Editor::DataStorage::Tests::FTypedElementQueryConditions5::RunTest
          (FTypedElementQueryConditions5 *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 142cc9df0

FString * __thiscall
UE::Editor::DataStorage::Tests::FTypedElementQueryConditions5::GetBeautifiedTestName
          (FTypedElementQueryConditions5 *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FTypedElementQueryConditions5 @ 142ce38a0

FTypedElementQueryConditions5 * __thiscall
UE::Editor::DataStorage::Tests::FTypedElementQueryConditions5::FTypedElementQueryConditions5
          (FTypedElementQueryConditions5 *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FTypedElementQueryConditions5_Tests_DataStorage_Editor_UE__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][EngineFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,
                              "Editor::DataStorage::QueryBuilder::FTypedElementQueryConditions (A || B) && (C || D) && (E || F)"
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

// TestBody @ 142d11190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Editor::DataStorage::Tests::FTypedElementQueryConditions5::TestBody
          (FTypedElementQueryConditions5 *this,FString *param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  FWeakObjectPtr FVar3;
  FWeakObjectPtr FVar4;
  undefined4 uVar5;
  undefined1 auVar6 [8];
  undefined4 uVar7;
  uchar uVar8;
  bool bVar9;
  UScriptStruct *pUVar10;
  FConditions *pFVar11;
  FConditions *pFVar12;
  FConditions *pFVar13;
  FAutomationTestFramework *pFVar14;
  undefined1 auStackY_e48 [32];
  FWeakObjectPtr local_e08 [2];
  undefined1 local_df8 [8];
  FName FStack_df0;
  FWeakObjectPtr local_de8;
  undefined8 uStack_de0;
  undefined1 local_dd8 [8];
  FName FStack_dd0;
  FWeakObjectPtr local_dc8;
  FWeakObjectPtr FStack_dc0;
  FWeakObjectPtr local_db8;
  FWeakObjectPtr FStack_db0;
  FWeakObjectPtr local_da8;
  undefined8 uStack_da0;
  FConditions local_d98;
  FConditions local_ae8;
  FConditions local_838;
  FConditions local_588;
  FConditions local_2d8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_e48;
  local_de8 = (FWeakObjectPtr)FTestColumnF::StaticStruct();
  if ((GC::GIsIncrementalReachabilityPending != false) && (local_de8 != (FWeakObjectPtr)0x0)) {
    GC::MarkAsReachable((UObject *)local_de8);
  }
  local_e08[0].ObjectIndex = 0;
  local_e08[0].ObjectSerialNumber = 0;
  if ((GC::GIsIncrementalReachabilityPending != false) && (local_de8 != (FWeakObjectPtr)0x0)) {
    GC::MarkAsReachable((UObject *)local_de8);
  }
  FWeakObjectPtr::operator=(local_e08,(FObjectPtr)&local_de8);
  local_dd8._0_4_ = local_e08[0].ObjectIndex;
  local_dd8._4_4_ = local_e08[0].ObjectSerialNumber;
  local_df8._0_4_ = local_e08[0].ObjectIndex;
  local_df8._4_4_ = local_e08[0].ObjectSerialNumber;
  FStack_df0.ComparisonIndex.Value = 0;
  FStack_df0.Number = 0;
  pUVar10 = FTestColumnE::StaticStruct();
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar10);
  }
  local_e08[0].ObjectIndex = 0;
  local_e08[0].ObjectSerialNumber = 0;
  local_de8 = (FWeakObjectPtr)pUVar10;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar10);
  }
  FWeakObjectPtr::operator=(local_e08,(FObjectPtr)&local_de8);
  FStack_dd0 = FStack_df0;
  local_dd8 = local_df8;
  local_de8 = local_e08[0];
  uStack_de0 = 0;
  local_df8._0_4_ = local_e08[0].ObjectIndex;
  local_df8._4_4_ = local_e08[0].ObjectSerialNumber;
  FStack_df0.ComparisonIndex.Value = 0;
  FStack_df0.Number = 0;
  pFVar11 = Queries::operator||(&local_2d8,(FColumnBase *)local_df8,(FColumnBase *)local_dd8);
  pUVar10 = FTestColumnD::StaticStruct();
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar10);
  }
  local_e08[0].ObjectIndex = 0;
  local_e08[0].ObjectSerialNumber = 0;
  local_de8 = (FWeakObjectPtr)pUVar10;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar10);
  }
  FWeakObjectPtr::operator=(local_e08,(FObjectPtr)&local_de8);
  local_dd8._0_4_ = local_e08[0].ObjectIndex;
  local_dd8._4_4_ = local_e08[0].ObjectSerialNumber;
  local_df8._0_4_ = local_e08[0].ObjectIndex;
  local_df8._4_4_ = local_e08[0].ObjectSerialNumber;
  FStack_df0.ComparisonIndex.Value = 0;
  FStack_df0.Number = 0;
  pUVar10 = FTestColumnC::StaticStruct();
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar10);
  }
  local_e08[0].ObjectIndex = 0;
  local_e08[0].ObjectSerialNumber = 0;
  local_de8 = (FWeakObjectPtr)pUVar10;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar10);
  }
  FWeakObjectPtr::operator=(local_e08,(FObjectPtr)&local_de8);
  FStack_dd0 = FStack_df0;
  local_dd8 = local_df8;
  local_de8 = local_e08[0];
  uStack_de0 = 0;
  local_df8._0_4_ = local_e08[0].ObjectIndex;
  local_df8._4_4_ = local_e08[0].ObjectSerialNumber;
  FStack_df0.ComparisonIndex.Value = 0;
  FStack_df0.Number = 0;
  pFVar12 = Queries::operator||(&local_588,(FColumnBase *)local_df8,(FColumnBase *)local_dd8);
  pUVar10 = FTestColumnB::StaticStruct();
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar10);
  }
  local_e08[0].ObjectIndex = 0;
  local_e08[0].ObjectSerialNumber = 0;
  local_de8 = (FWeakObjectPtr)pUVar10;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar10);
  }
  FWeakObjectPtr::operator=(local_e08,(FObjectPtr)&local_de8);
  local_dd8._0_4_ = local_e08[0].ObjectIndex;
  local_dd8._4_4_ = local_e08[0].ObjectSerialNumber;
  local_df8._0_4_ = local_e08[0].ObjectIndex;
  local_df8._4_4_ = local_e08[0].ObjectSerialNumber;
  FStack_df0.ComparisonIndex.Value = 0;
  FStack_df0.Number = 0;
  pUVar10 = FTestColumnA::StaticStruct();
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar10);
  }
  local_e08[0].ObjectIndex = 0;
  local_e08[0].ObjectSerialNumber = 0;
  local_de8 = (FWeakObjectPtr)pUVar10;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar10);
  }
  FWeakObjectPtr::operator=(local_e08,(FObjectPtr)&local_de8);
  FStack_dd0 = FStack_df0;
  local_dd8 = local_df8;
  local_de8 = local_e08[0];
  uStack_de0 = 0;
  local_df8._0_4_ = local_e08[0].ObjectIndex;
  local_df8._4_4_ = local_e08[0].ObjectSerialNumber;
  FStack_df0.ComparisonIndex.Value = 0;
  FStack_df0.Number = 0;
  pFVar13 = Queries::operator||(&local_838,(FColumnBase *)local_df8,(FColumnBase *)local_dd8);
  pFVar12 = Queries::operator&&(&local_ae8,pFVar13,pFVar12);
  Queries::operator&&(&local_d98,pFVar12,pFVar11);
  if (local_ae8.Identifiers.AllocatorInstance.SecondaryData != (ForElementType<FName>)0x0) {
    FMemory::Free((void *)local_ae8.Identifiers.AllocatorInstance.SecondaryData);
  }
  if (local_ae8.Tokens.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token>)0x0) {
    FMemory::Free((void *)local_ae8.Tokens.AllocatorInstance.SecondaryData);
  }
  if (local_ae8.ColumnFlags.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::Editor::DataStorage::Queries::FConditions::EColumnFlags>)0x0) {
    FMemory::Free((void *)local_ae8.ColumnFlags.AllocatorInstance.SecondaryData);
  }
  if (local_ae8.Columns.AllocatorInstance.SecondaryData !=
      (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)0x0) {
    FMemory::Free((void *)local_ae8.Columns.AllocatorInstance.SecondaryData);
  }
  if (local_838.Identifiers.AllocatorInstance.SecondaryData != (ForElementType<FName>)0x0) {
    FMemory::Free((void *)local_838.Identifiers.AllocatorInstance.SecondaryData);
  }
  if (local_838.Tokens.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token>)0x0) {
    FMemory::Free((void *)local_838.Tokens.AllocatorInstance.SecondaryData);
  }
  if (local_838.ColumnFlags.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::Editor::DataStorage::Queries::FConditions::EColumnFlags>)0x0) {
    FMemory::Free((void *)local_838.ColumnFlags.AllocatorInstance.SecondaryData);
  }
  if (local_838.Columns.AllocatorInstance.SecondaryData !=
      (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)0x0) {
    FMemory::Free((void *)local_838.Columns.AllocatorInstance.SecondaryData);
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
  uVar8 = Queries::FConditions::MinimumColumnMatchRequired(&local_d98);
  if (uVar8 != '\x03') {
    pFVar14 = FAutomationTestFramework::Get();
    pFVar1 = pFVar14->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)local_df8,L"Condition failed");
    (*pcVar2)(pFVar1,local_df8,0);
    if ((FWeakObjectPtr)local_df8 != (FWeakObjectPtr)0x0) {
      FMemory::Free((void *)local_df8);
    }
  }
  pUVar10 = FTestColumnA::StaticStruct();
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar10);
  }
  local_e08[0].ObjectIndex = 0;
  local_e08[0].ObjectSerialNumber = 0;
  local_de8 = (FWeakObjectPtr)pUVar10;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar10);
  }
  FWeakObjectPtr::operator=(local_e08,(FObjectPtr)&local_de8);
  FVar3 = local_e08[0];
  local_de8 = local_e08[0];
  uStack_de0 = 0;
  local_df8._0_4_ = 0;
  local_df8._4_4_ = 0;
  FStack_df0.ComparisonIndex.Value = 1;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,4,1,0,(ForAnyElementType *)local_df8,1,(int *)&FStack_df0.Number);
  FVar4 = local_e08[0];
  local_e08[0].ObjectIndex = FVar3.ObjectIndex;
  local_e08[0].ObjectSerialNumber = FVar3.ObjectSerialNumber;
  local_dd8._0_4_ = local_e08[0].ObjectIndex;
  local_dd8._4_4_ = local_e08[0].ObjectSerialNumber;
  FStack_dd0.ComparisonIndex.Value = 0;
  FStack_dd0.Number = 0;
  *(FWeakObjectPtr *)local_df8 = FVar3;
  ((FWeakObjectPtr *)((longlong)local_df8 + 8))->ObjectIndex = 0;
  ((FWeakObjectPtr *)((longlong)local_df8 + 8))->ObjectSerialNumber = 0;
  local_e08[0] = FVar4;
  bVar9 = TestMatching(&local_d98,
                       (TArray<UE::Editor::DataStorage::Queries::FColumnBase,TSizedDefaultAllocator<32>_>
                        *)local_df8,false,false);
  if ((FWeakObjectPtr)local_df8 != (FWeakObjectPtr)0x0) {
    FMemory::Free((void *)local_df8);
  }
  if (!bVar9) {
    pFVar14 = FAutomationTestFramework::Get();
    pFVar1 = pFVar14->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)local_df8,L"Condition failed");
    (*pcVar2)(pFVar1,local_df8,0);
    if ((FWeakObjectPtr)local_df8 != (FWeakObjectPtr)0x0) {
      FMemory::Free((void *)local_df8);
    }
  }
  pUVar10 = FTestColumnA::StaticStruct();
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar10);
  }
  local_e08[0].ObjectIndex = 0;
  local_e08[0].ObjectSerialNumber = 0;
  local_de8 = (FWeakObjectPtr)pUVar10;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar10);
  }
  FWeakObjectPtr::operator=(local_e08,(FObjectPtr)&local_de8);
  local_dd8._0_4_ = local_e08[0].ObjectIndex;
  local_dd8._4_4_ = local_e08[0].ObjectSerialNumber;
  local_dc8 = local_e08[0];
  FStack_dc0.ObjectIndex = 0;
  FStack_dc0.ObjectSerialNumber = 0;
  pUVar10 = FTestColumnC::StaticStruct();
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar10);
  }
  local_e08[0].ObjectIndex = 0;
  local_e08[0].ObjectSerialNumber = 0;
  local_de8 = (FWeakObjectPtr)pUVar10;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar10);
  }
  FWeakObjectPtr::operator=(local_e08,(FObjectPtr)&local_de8);
  FVar3 = local_e08[0];
  local_dd8._0_4_ = local_e08[0].ObjectIndex;
  local_dd8._4_4_ = local_e08[0].ObjectSerialNumber;
  auVar6 = local_dd8;
  local_dd8._0_4_ = local_e08[0].ObjectIndex;
  uVar5 = local_dd8._0_4_;
  local_dd8._4_4_ = local_e08[0].ObjectSerialNumber;
  uVar7 = local_dd8._4_4_;
  FStack_db0.ObjectIndex = 0;
  FStack_db0.ObjectSerialNumber = 0;
  local_df8._0_4_ = 0;
  local_df8._4_4_ = 0;
  FStack_df0.ComparisonIndex.Value = 2;
  local_dd8 = auVar6;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,4,2,0,(ForAnyElementType *)local_df8,2,(int *)&FStack_df0.Number);
  *(FWeakObjectPtr *)local_df8 = local_dc8;
  *(FWeakObjectPtr *)((longlong)local_df8 + 8) = FStack_dc0;
  local_db8 = FVar3;
  ((FWeakObjectPtr *)((longlong)local_df8 + 0x10))->ObjectIndex = uVar5;
  *(undefined4 *)((longlong)local_df8 + 0x14) = uVar7;
  ((FWeakObjectPtr *)((longlong)local_df8 + 0x18))->ObjectIndex = FStack_db0.ObjectIndex;
  *(int *)((longlong)local_df8 + 0x1c) = FStack_db0.ObjectSerialNumber;
  bVar9 = TestMatching(&local_d98,
                       (TArray<UE::Editor::DataStorage::Queries::FColumnBase,TSizedDefaultAllocator<32>_>
                        *)local_df8,false,false);
  if ((FWeakObjectPtr)local_df8 != (FWeakObjectPtr)0x0) {
    FMemory::Free((void *)local_df8);
  }
  if (!bVar9) {
    pFVar14 = FAutomationTestFramework::Get();
    pFVar1 = pFVar14->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)local_df8,L"Condition failed");
    (*pcVar2)(pFVar1,local_df8,0);
    if ((FWeakObjectPtr)local_df8 != (FWeakObjectPtr)0x0) {
      FMemory::Free((void *)local_df8);
    }
  }
  pUVar10 = FTestColumnA::StaticStruct();
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar10);
  }
  local_e08[0].ObjectIndex = 0;
  local_e08[0].ObjectSerialNumber = 0;
  local_de8 = (FWeakObjectPtr)pUVar10;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar10);
  }
  FWeakObjectPtr::operator=(local_e08,(FObjectPtr)&local_de8);
  local_dd8._0_4_ = local_e08[0].ObjectIndex;
  local_dd8._4_4_ = local_e08[0].ObjectSerialNumber;
  local_dc8 = local_e08[0];
  FStack_dc0.ObjectIndex = 0;
  FStack_dc0.ObjectSerialNumber = 0;
  pUVar10 = FTestColumnC::StaticStruct();
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar10);
  }
  local_e08[0].ObjectIndex = 0;
  local_e08[0].ObjectSerialNumber = 0;
  local_de8 = (FWeakObjectPtr)pUVar10;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar10);
  }
  FWeakObjectPtr::operator=(local_e08,(FObjectPtr)&local_de8);
  local_dd8._0_4_ = local_e08[0].ObjectIndex;
  local_dd8._4_4_ = local_e08[0].ObjectSerialNumber;
  local_db8 = local_e08[0];
  FStack_db0.ObjectIndex = 0;
  FStack_db0.ObjectSerialNumber = 0;
  pUVar10 = FTestColumnE::StaticStruct();
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar10);
  }
  local_e08[0].ObjectIndex = 0;
  local_e08[0].ObjectSerialNumber = 0;
  local_de8 = (FWeakObjectPtr)pUVar10;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar10);
  }
  FWeakObjectPtr::operator=(local_e08,(FObjectPtr)&local_de8);
  FVar3 = local_e08[0];
  local_dd8._0_4_ = local_e08[0].ObjectIndex;
  local_dd8._4_4_ = local_e08[0].ObjectSerialNumber;
  auVar6 = local_dd8;
  local_dd8._0_4_ = local_e08[0].ObjectIndex;
  uVar5 = local_dd8._0_4_;
  local_dd8._4_4_ = local_e08[0].ObjectSerialNumber;
  uVar7 = local_dd8._4_4_;
  uStack_da0 = 0;
  local_df8._0_4_ = 0;
  local_df8._4_4_ = 0;
  FStack_df0.ComparisonIndex.Value = 3;
  local_dd8 = auVar6;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,4,3,0,(ForAnyElementType *)local_df8,3,(int *)&FStack_df0.Number);
  *(FWeakObjectPtr *)local_df8 = local_dc8;
  *(FWeakObjectPtr *)((longlong)local_df8 + 8) = FStack_dc0;
  *(FWeakObjectPtr *)((longlong)local_df8 + 0x10) = local_db8;
  *(FWeakObjectPtr *)((longlong)local_df8 + 0x18) = FStack_db0;
  local_da8 = FVar3;
  ((FWeakObjectPtr *)((longlong)local_df8 + 0x20))->ObjectIndex = uVar5;
  *(undefined4 *)((longlong)local_df8 + 0x24) = uVar7;
  ((FWeakObjectPtr *)((longlong)local_df8 + 0x28))->ObjectIndex = (int)uStack_da0;
  *(int *)((longlong)local_df8 + 0x2c) = uStack_da0._4_4_;
  bVar9 = TestMatching(&local_d98,
                       (TArray<UE::Editor::DataStorage::Queries::FColumnBase,TSizedDefaultAllocator<32>_>
                        *)local_df8,true,false);
  if ((FWeakObjectPtr)local_df8 != (FWeakObjectPtr)0x0) {
    FMemory::Free((void *)local_df8);
  }
  if (!bVar9) {
    pFVar14 = FAutomationTestFramework::Get();
    pFVar1 = pFVar14->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)local_df8,L"Condition failed");
    (*pcVar2)(pFVar1,local_df8,0);
    if ((FWeakObjectPtr)local_df8 != (FWeakObjectPtr)0x0) {
      FMemory::Free((void *)local_df8);
    }
  }
  pUVar10 = FTestColumnB::StaticStruct();
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar10);
  }
  local_e08[0].ObjectIndex = 0;
  local_e08[0].ObjectSerialNumber = 0;
  local_de8 = (FWeakObjectPtr)pUVar10;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar10);
  }
  FWeakObjectPtr::operator=(local_e08,(FObjectPtr)&local_de8);
  local_dd8._0_4_ = local_e08[0].ObjectIndex;
  local_dd8._4_4_ = local_e08[0].ObjectSerialNumber;
  local_dc8 = local_e08[0];
  FStack_dc0.ObjectIndex = 0;
  FStack_dc0.ObjectSerialNumber = 0;
  pUVar10 = FTestColumnC::StaticStruct();
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar10);
  }
  local_e08[0].ObjectIndex = 0;
  local_e08[0].ObjectSerialNumber = 0;
  local_de8 = (FWeakObjectPtr)pUVar10;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar10);
  }
  FWeakObjectPtr::operator=(local_e08,(FObjectPtr)&local_de8);
  local_dd8._0_4_ = local_e08[0].ObjectIndex;
  local_dd8._4_4_ = local_e08[0].ObjectSerialNumber;
  local_db8 = local_e08[0];
  FStack_db0.ObjectIndex = 0;
  FStack_db0.ObjectSerialNumber = 0;
  pUVar10 = FTestColumnE::StaticStruct();
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar10);
  }
  local_e08[0].ObjectIndex = 0;
  local_e08[0].ObjectSerialNumber = 0;
  local_de8 = (FWeakObjectPtr)pUVar10;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar10);
  }
  FWeakObjectPtr::operator=(local_e08,(FObjectPtr)&local_de8);
  FVar3 = local_e08[0];
  local_dd8._0_4_ = local_e08[0].ObjectIndex;
  local_dd8._4_4_ = local_e08[0].ObjectSerialNumber;
  auVar6 = local_dd8;
  local_dd8._0_4_ = local_e08[0].ObjectIndex;
  uVar5 = local_dd8._0_4_;
  local_dd8._4_4_ = local_e08[0].ObjectSerialNumber;
  uVar7 = local_dd8._4_4_;
  uStack_da0 = 0;
  local_df8._0_4_ = 0;
  local_df8._4_4_ = 0;
  FStack_df0.ComparisonIndex.Value = 3;
  local_dd8 = auVar6;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,4,3,0,(ForAnyElementType *)local_df8,3,(int *)&FStack_df0.Number);
  *(FWeakObjectPtr *)local_df8 = local_dc8;
  *(FWeakObjectPtr *)((longlong)local_df8 + 8) = FStack_dc0;
  *(FWeakObjectPtr *)((longlong)local_df8 + 0x10) = local_db8;
  *(FWeakObjectPtr *)((longlong)local_df8 + 0x18) = FStack_db0;
  local_da8 = FVar3;
  ((FWeakObjectPtr *)((longlong)local_df8 + 0x20))->ObjectIndex = uVar5;
  *(undefined4 *)((longlong)local_df8 + 0x24) = uVar7;
  ((FWeakObjectPtr *)((longlong)local_df8 + 0x28))->ObjectIndex = (int)uStack_da0;
  *(int *)((longlong)local_df8 + 0x2c) = uStack_da0._4_4_;
  bVar9 = TestMatching(&local_d98,
                       (TArray<UE::Editor::DataStorage::Queries::FColumnBase,TSizedDefaultAllocator<32>_>
                        *)local_df8,true,false);
  if ((FWeakObjectPtr)local_df8 != (FWeakObjectPtr)0x0) {
    FMemory::Free((void *)local_df8);
  }
  if (!bVar9) {
    pFVar14 = FAutomationTestFramework::Get();
    pFVar1 = pFVar14->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)local_df8,L"Condition failed");
    (*pcVar2)(pFVar1,local_df8,0);
    if ((FWeakObjectPtr)local_df8 != (FWeakObjectPtr)0x0) {
      FMemory::Free((void *)local_df8);
    }
  }
  pUVar10 = FTestColumnA::StaticStruct();
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar10);
  }
  local_e08[0].ObjectIndex = 0;
  local_e08[0].ObjectSerialNumber = 0;
  local_de8 = (FWeakObjectPtr)pUVar10;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar10);
  }
  FWeakObjectPtr::operator=(local_e08,(FObjectPtr)&local_de8);
  local_dd8._0_4_ = local_e08[0].ObjectIndex;
  local_dd8._4_4_ = local_e08[0].ObjectSerialNumber;
  local_dc8 = local_e08[0];
  FStack_dc0.ObjectIndex = 0;
  FStack_dc0.ObjectSerialNumber = 0;
  pUVar10 = FTestColumnC::StaticStruct();
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar10);
  }
  local_e08[0].ObjectIndex = 0;
  local_e08[0].ObjectSerialNumber = 0;
  local_de8 = (FWeakObjectPtr)pUVar10;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar10);
  }
  FWeakObjectPtr::operator=(local_e08,(FObjectPtr)&local_de8);
  local_dd8._0_4_ = local_e08[0].ObjectIndex;
  local_dd8._4_4_ = local_e08[0].ObjectSerialNumber;
  local_db8 = local_e08[0];
  FStack_db0.ObjectIndex = 0;
  FStack_db0.ObjectSerialNumber = 0;
  pUVar10 = FTestColumnG::StaticStruct();
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar10);
  }
  local_e08[0].ObjectIndex = 0;
  local_e08[0].ObjectSerialNumber = 0;
  local_de8 = (FWeakObjectPtr)pUVar10;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar10);
  }
  FWeakObjectPtr::operator=(local_e08,(FObjectPtr)&local_de8);
  FVar3 = local_e08[0];
  local_dd8._0_4_ = local_e08[0].ObjectIndex;
  local_dd8._4_4_ = local_e08[0].ObjectSerialNumber;
  auVar6 = local_dd8;
  local_dd8._0_4_ = local_e08[0].ObjectIndex;
  uVar5 = local_dd8._0_4_;
  local_dd8._4_4_ = local_e08[0].ObjectSerialNumber;
  uVar7 = local_dd8._4_4_;
  uStack_da0 = 0;
  local_df8._0_4_ = 0;
  local_df8._4_4_ = 0;
  FStack_df0.ComparisonIndex.Value = 3;
  local_dd8 = auVar6;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,4,3,0,(ForAnyElementType *)local_df8,3,(int *)&FStack_df0.Number);
  *(FWeakObjectPtr *)local_df8 = local_dc8;
  *(FWeakObjectPtr *)((longlong)local_df8 + 8) = FStack_dc0;
  *(FWeakObjectPtr *)((longlong)local_df8 + 0x10) = local_db8;
  *(FWeakObjectPtr *)((longlong)local_df8 + 0x18) = FStack_db0;
  local_da8 = FVar3;
  ((FWeakObjectPtr *)((longlong)local_df8 + 0x20))->ObjectIndex = uVar5;
  *(undefined4 *)((longlong)local_df8 + 0x24) = uVar7;
  ((FWeakObjectPtr *)((longlong)local_df8 + 0x28))->ObjectIndex = (int)uStack_da0;
  *(int *)((longlong)local_df8 + 0x2c) = uStack_da0._4_4_;
  bVar9 = TestMatching(&local_d98,
                       (TArray<UE::Editor::DataStorage::Queries::FColumnBase,TSizedDefaultAllocator<32>_>
                        *)local_df8,false,false);
  if ((FWeakObjectPtr)local_df8 != (FWeakObjectPtr)0x0) {
    FMemory::Free((void *)local_df8);
  }
  if (!bVar9) {
    pFVar14 = FAutomationTestFramework::Get();
    pFVar1 = pFVar14->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)local_df8,L"Condition failed");
    (*pcVar2)(pFVar1,local_df8);
    if ((FWeakObjectPtr)local_df8 != (FWeakObjectPtr)0x0) {
      FMemory::Free((void *)local_df8);
    }
  }
  pUVar10 = FTestColumnA::StaticStruct();
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar10);
  }
  local_e08[0].ObjectIndex = 0;
  local_e08[0].ObjectSerialNumber = 0;
  local_de8 = (FWeakObjectPtr)pUVar10;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar10);
  }
  FWeakObjectPtr::operator=(local_e08,(FObjectPtr)&local_de8);
  local_df8._0_4_ = local_e08[0].ObjectIndex;
  local_df8._4_4_ = local_e08[0].ObjectSerialNumber;
  local_dc8 = local_e08[0];
  FStack_dc0.ObjectIndex = 0;
  FStack_dc0.ObjectSerialNumber = 0;
  pUVar10 = FTestColumnG::StaticStruct();
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar10);
  }
  local_e08[0].ObjectIndex = 0;
  local_e08[0].ObjectSerialNumber = 0;
  local_de8 = (FWeakObjectPtr)pUVar10;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar10);
  }
  FWeakObjectPtr::operator=(local_e08,(FObjectPtr)&local_de8);
  local_df8._0_4_ = local_e08[0].ObjectIndex;
  local_df8._4_4_ = local_e08[0].ObjectSerialNumber;
  local_db8 = local_e08[0];
  FStack_db0.ObjectIndex = 0;
  FStack_db0.ObjectSerialNumber = 0;
  pUVar10 = FTestColumnD::StaticStruct();
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar10);
  }
  local_e08[0].ObjectIndex = 0;
  local_e08[0].ObjectSerialNumber = 0;
  local_de8 = (FWeakObjectPtr)pUVar10;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar10);
  }
  FWeakObjectPtr::operator=(local_e08,(FObjectPtr)&local_de8);
  local_df8 = (undefined1  [8])&local_dc8;
  FStack_df0 = (FName)&local_d98;
  local_da8 = local_e08[0];
  uStack_da0 = 0;
  TArray<UE::Editor::DataStorage::Queries::FColumnBase,TSizedDefaultAllocator<32>_>::
  TArray<UE::Editor::DataStorage::Queries::FColumnBase,TSizedDefaultAllocator<32>_>
            ((TArray<UE::Editor::DataStorage::Queries::FColumnBase,TSizedDefaultAllocator<32>_> *)
             local_dd8,(initializer_list<UE::Editor::DataStorage::Queries::FColumnBase> *)local_df8)
  ;
  bVar9 = TestMatching(&local_d98,
                       (TArray<UE::Editor::DataStorage::Queries::FColumnBase,TSizedDefaultAllocator<32>_>
                        *)local_dd8,false,false);
  if ((FWeakObjectPtr)local_dd8 != (FWeakObjectPtr)0x0) {
    FMemory::Free((void *)local_dd8);
  }
  if (!bVar9) {
    pFVar14 = FAutomationTestFramework::Get();
    pFVar1 = pFVar14->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)local_dd8,L"Condition failed");
    (*pcVar2)(pFVar1,local_dd8,0);
    if ((FWeakObjectPtr)local_dd8 != (FWeakObjectPtr)0x0) {
      FMemory::Free((void *)local_dd8);
    }
  }
  pUVar10 = FTestColumnG::StaticStruct();
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar10);
  }
  local_e08[0].ObjectIndex = 0;
  local_e08[0].ObjectSerialNumber = 0;
  local_de8 = (FWeakObjectPtr)pUVar10;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar10);
  }
  FWeakObjectPtr::operator=(local_e08,(FObjectPtr)&local_de8);
  local_dd8._0_4_ = local_e08[0].ObjectIndex;
  local_dd8._4_4_ = local_e08[0].ObjectSerialNumber;
  local_dc8 = local_e08[0];
  FStack_dc0.ObjectIndex = 0;
  FStack_dc0.ObjectSerialNumber = 0;
  pUVar10 = FTestColumnC::StaticStruct();
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar10);
  }
  local_e08[0].ObjectIndex = 0;
  local_e08[0].ObjectSerialNumber = 0;
  local_de8 = (FWeakObjectPtr)pUVar10;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar10);
  }
  FWeakObjectPtr::operator=(local_e08,(FObjectPtr)&local_de8);
  local_dd8._0_4_ = local_e08[0].ObjectIndex;
  local_dd8._4_4_ = local_e08[0].ObjectSerialNumber;
  local_db8 = local_e08[0];
  FStack_db0.ObjectIndex = 0;
  FStack_db0.ObjectSerialNumber = 0;
  pUVar10 = FTestColumnD::StaticStruct();
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar10);
  }
  local_e08[0].ObjectIndex = 0;
  local_e08[0].ObjectSerialNumber = 0;
  local_de8 = (FWeakObjectPtr)pUVar10;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar10);
  }
  FWeakObjectPtr::operator=(local_e08,(FObjectPtr)&local_de8);
  local_dd8._0_4_ = local_e08[0].ObjectIndex;
  local_dd8._4_4_ = local_e08[0].ObjectSerialNumber;
  auVar6 = local_dd8;
  local_dd8._0_4_ = local_e08[0].ObjectIndex;
  uVar5 = local_dd8._0_4_;
  local_dd8._4_4_ = local_e08[0].ObjectSerialNumber;
  uVar7 = local_dd8._4_4_;
  uStack_da0 = 0;
  local_df8._0_4_ = 0;
  local_df8._4_4_ = 0;
  FStack_df0.ComparisonIndex.Value = 3;
  local_dd8 = auVar6;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,4,3,0,(ForAnyElementType *)local_df8,3,(int *)&FStack_df0.Number);
  *(FWeakObjectPtr *)local_df8 = local_dc8;
  *(FWeakObjectPtr *)((longlong)local_df8 + 8) = FStack_dc0;
  *(FWeakObjectPtr *)((longlong)local_df8 + 0x10) = local_db8;
  *(FWeakObjectPtr *)((longlong)local_df8 + 0x18) = FStack_db0;
  ((FWeakObjectPtr *)((longlong)local_df8 + 0x20))->ObjectIndex = uVar5;
  *(undefined4 *)((longlong)local_df8 + 0x24) = uVar7;
  ((FWeakObjectPtr *)((longlong)local_df8 + 0x28))->ObjectIndex = (int)uStack_da0;
  *(int *)((longlong)local_df8 + 0x2c) = uStack_da0._4_4_;
  bVar9 = TestMatching(&local_d98,
                       (TArray<UE::Editor::DataStorage::Queries::FColumnBase,TSizedDefaultAllocator<32>_>
                        *)local_df8,false,false);
  if ((FWeakObjectPtr)local_df8 != (FWeakObjectPtr)0x0) {
    FMemory::Free((void *)local_df8);
  }
  if (!bVar9) {
    pFVar14 = FAutomationTestFramework::Get();
    pFVar1 = pFVar14->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)local_dd8,L"Condition failed");
    (*pcVar2)(pFVar1,local_dd8,0);
    if ((FWeakObjectPtr)local_dd8 != (FWeakObjectPtr)0x0) {
      FMemory::Free((void *)local_dd8);
    }
  }
  if (local_d98.Identifiers.AllocatorInstance.SecondaryData != (ForElementType<FName>)0x0) {
    FMemory::Free((void *)local_d98.Identifiers.AllocatorInstance.SecondaryData);
  }
  if (local_d98.Tokens.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token>)0x0) {
    FMemory::Free((void *)local_d98.Tokens.AllocatorInstance.SecondaryData);
  }
  if (local_d98.ColumnFlags.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::Editor::DataStorage::Queries::FConditions::EColumnFlags>)0x0) {
    FMemory::Free((void *)local_d98.ColumnFlags.AllocatorInstance.SecondaryData);
  }
  if (local_d98.Columns.AllocatorInstance.SecondaryData !=
      (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)0x0) {
    FMemory::Free((void *)local_d98.Columns.AllocatorInstance.SecondaryData);
  }
  return;
}

