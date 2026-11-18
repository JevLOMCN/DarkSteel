// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 10

// GetTestFlags @ 142ccae50

EAutomationTestFlags __thiscall
UE::Editor::DataStorage::Tests::FTypedElementQueryConditions_MultiMatch::GetTestFlags
          (FTypedElementQueryConditions_MultiMatch *this)

{
  return this->TestFlags;
}

// IsStressTest @ 142ccae60

bool __thiscall
UE::Editor::DataStorage::Tests::FTypedElementQueryConditions_MultiMatch::IsStressTest
          (FTypedElementQueryConditions_MultiMatch *this)

{
  return false;
}

// GetRequiredDeviceNum @ 142ccae70

uint __thiscall
UE::Editor::DataStorage::Tests::FTypedElementQueryConditions_MultiMatch::GetRequiredDeviceNum
          (FTypedElementQueryConditions_MultiMatch *this)

{
  return 1;
}

// GetTestSourceFileName @ 142ccae80

FString * __thiscall
UE::Editor::DataStorage::Tests::FTypedElementQueryConditions_MultiMatch::GetTestSourceFileName
          (FTypedElementQueryConditions_MultiMatch *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Tests\\Elements\\Framework\\TypedElementQueryBuilderTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 142ccaeb0

int __thiscall
UE::Editor::DataStorage::Tests::FTypedElementQueryConditions_MultiMatch::GetTestSourceFileLine
          (FTypedElementQueryConditions_MultiMatch *this)

{
  return 0xee;
}

// GetTests @ 142ccaec0

/* WARNING: Removing unreachable block (ram,0x000142ccb03e) */

void __thiscall
UE::Editor::DataStorage::Tests::FTypedElementQueryConditions_MultiMatch::GetTests
          (FTypedElementQueryConditions_MultiMatch *this,
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

// RunTest @ 142ccb060

bool __thiscall
UE::Editor::DataStorage::Tests::FTypedElementQueryConditions_MultiMatch::RunTest
          (FTypedElementQueryConditions_MultiMatch *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 142ccb090

FString * __thiscall
UE::Editor::DataStorage::Tests::FTypedElementQueryConditions_MultiMatch::GetBeautifiedTestName
          (FTypedElementQueryConditions_MultiMatch *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FTypedElementQueryConditions_MultiMatch @ 142ce3e10

FTypedElementQueryConditions_MultiMatch * __thiscall
UE::Editor::DataStorage::Tests::FTypedElementQueryConditions_MultiMatch::
FTypedElementQueryConditions_MultiMatch
          (FTypedElementQueryConditions_MultiMatch *this,FString *param_1)

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
       (longlong)&___7FTypedElementQueryConditions_MultiMatch_Tests_DataStorage_Editor_UE__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][EngineFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,
                              "Editor::DataStorage::QueryBuilder::FTypedElementQueryConditions_MultiMatch"
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

// TestBody @ 142d13d90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Editor::DataStorage::Tests::FTypedElementQueryConditions_MultiMatch::TestBody
          (FTypedElementQueryConditions_MultiMatch *this,FString *param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  int iVar3;
  TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr> TVar4;
  int iVar5;
  bool bVar6;
  FWeakObjectPtr FVar7;
  FConditions *pFVar8;
  FConditions *pFVar9;
  FConditions *pFVar10;
  FAutomationTestFramework *pFVar11;
  undefined1 auStackY_e68 [32];
  FWeakObjectPtr local_e28 [2];
  FColumnBase local_e18;
  undefined1 local_e08 [12];
  int iStack_dfc;
  FWeakObjectPtr local_df8;
  FWeakObjectPtr FStack_df0;
  FWeakObjectPtr local_de8;
  FWeakObjectPtr FStack_de0;
  FWeakObjectPtr local_dd8;
  FWeakObjectPtr FStack_dd0;
  FWeakObjectPtr local_dc8;
  FWeakObjectPtr FStack_dc0;
  FWeakObjectPtr local_db8;
  FWeakObjectPtr FStack_db0;
  undefined8 uStack_da0;
  FConditions local_d98;
  FConditions local_ae8;
  FConditions local_838;
  FConditions local_588;
  FConditions local_2d8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_e68;
  local_e18.TypeInfo.WeakPtr = (FWeakObjectPtr)FTestColumnF::StaticStruct();
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (local_e18.TypeInfo.WeakPtr != (FWeakObjectPtr)0x0)) {
    GC::MarkAsReachable((UObject *)local_e18.TypeInfo.WeakPtr);
  }
  local_e28[0].ObjectIndex = 0;
  local_e28[0].ObjectSerialNumber = 0;
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (local_e18.TypeInfo.WeakPtr != (FWeakObjectPtr)0x0)) {
    GC::MarkAsReachable((UObject *)local_e18.TypeInfo.WeakPtr);
  }
  FWeakObjectPtr::operator=(local_e28,(FObjectPtr)&local_e18);
  local_e08._0_4_ = local_e28[0].ObjectIndex;
  local_e08._4_4_ = local_e28[0].ObjectSerialNumber;
  local_e08._8_4_ = 0;
  iStack_dfc = 0;
  FVar7 = (FWeakObjectPtr)FTestColumnE::StaticStruct();
  if ((GC::GIsIncrementalReachabilityPending != false) && (FVar7 != (FWeakObjectPtr)0x0)) {
    GC::MarkAsReachable((UObject *)FVar7);
  }
  local_e28[0].ObjectIndex = 0;
  local_e28[0].ObjectSerialNumber = 0;
  local_e18.TypeInfo.WeakPtr = FVar7;
  if ((GC::GIsIncrementalReachabilityPending != false) && (FVar7 != (FWeakObjectPtr)0x0)) {
    GC::MarkAsReachable((UObject *)FVar7);
  }
  FWeakObjectPtr::operator=(local_e28,(FObjectPtr)&local_e18);
  local_e18.TypeInfo.WeakPtr = local_e28[0];
  local_e18.Identifier.ComparisonIndex.Value = 0;
  local_e18.Identifier.Number = 0;
  pFVar8 = Queries::operator||(&local_2d8,&local_e18,(FColumnBase *)local_e08);
  FVar7 = (FWeakObjectPtr)FTestColumnD::StaticStruct();
  if ((GC::GIsIncrementalReachabilityPending != false) && (FVar7 != (FWeakObjectPtr)0x0)) {
    GC::MarkAsReachable((UObject *)FVar7);
  }
  local_e28[0].ObjectIndex = 0;
  local_e28[0].ObjectSerialNumber = 0;
  local_e18.TypeInfo.WeakPtr = FVar7;
  if ((GC::GIsIncrementalReachabilityPending != false) && (FVar7 != (FWeakObjectPtr)0x0)) {
    GC::MarkAsReachable((UObject *)FVar7);
  }
  FWeakObjectPtr::operator=(local_e28,(FObjectPtr)&local_e18);
  local_e08._0_4_ = local_e28[0].ObjectIndex;
  local_e08._4_4_ = local_e28[0].ObjectSerialNumber;
  local_e08._8_4_ = 0;
  iStack_dfc = 0;
  FVar7 = (FWeakObjectPtr)FTestColumnC::StaticStruct();
  if ((GC::GIsIncrementalReachabilityPending != false) && (FVar7 != (FWeakObjectPtr)0x0)) {
    GC::MarkAsReachable((UObject *)FVar7);
  }
  local_e28[0].ObjectIndex = 0;
  local_e28[0].ObjectSerialNumber = 0;
  local_e18.TypeInfo.WeakPtr = FVar7;
  if ((GC::GIsIncrementalReachabilityPending != false) && (FVar7 != (FWeakObjectPtr)0x0)) {
    GC::MarkAsReachable((UObject *)FVar7);
  }
  FWeakObjectPtr::operator=(local_e28,(FObjectPtr)&local_e18);
  local_e18.TypeInfo.WeakPtr = local_e28[0];
  local_e18.Identifier.ComparisonIndex.Value = 0;
  local_e18.Identifier.Number = 0;
  pFVar9 = Queries::operator||(&local_588,&local_e18,(FColumnBase *)local_e08);
  FVar7 = (FWeakObjectPtr)FTestColumnB::StaticStruct();
  if ((GC::GIsIncrementalReachabilityPending != false) && (FVar7 != (FWeakObjectPtr)0x0)) {
    GC::MarkAsReachable((UObject *)FVar7);
  }
  local_e28[0].ObjectIndex = 0;
  local_e28[0].ObjectSerialNumber = 0;
  local_e18.TypeInfo.WeakPtr = FVar7;
  if ((GC::GIsIncrementalReachabilityPending != false) && (FVar7 != (FWeakObjectPtr)0x0)) {
    GC::MarkAsReachable((UObject *)FVar7);
  }
  FWeakObjectPtr::operator=(local_e28,(FObjectPtr)&local_e18);
  local_e08._0_4_ = local_e28[0].ObjectIndex;
  local_e08._4_4_ = local_e28[0].ObjectSerialNumber;
  local_e08._8_4_ = 0;
  iStack_dfc = 0;
  FVar7 = (FWeakObjectPtr)FTestColumnA::StaticStruct();
  if ((GC::GIsIncrementalReachabilityPending != false) && (FVar7 != (FWeakObjectPtr)0x0)) {
    GC::MarkAsReachable((UObject *)FVar7);
  }
  local_e28[0].ObjectIndex = 0;
  local_e28[0].ObjectSerialNumber = 0;
  local_e18.TypeInfo.WeakPtr = FVar7;
  if ((GC::GIsIncrementalReachabilityPending != false) && (FVar7 != (FWeakObjectPtr)0x0)) {
    GC::MarkAsReachable((UObject *)FVar7);
  }
  FWeakObjectPtr::operator=(local_e28,(FObjectPtr)&local_e18);
  local_e18.TypeInfo.WeakPtr = local_e28[0];
  local_e18.Identifier.ComparisonIndex.Value = 0;
  local_e18.Identifier.Number = 0;
  pFVar10 = Queries::operator||(&local_838,&local_e18,(FColumnBase *)local_e08);
  pFVar9 = Queries::operator&&(&local_ae8,pFVar10,pFVar9);
  Queries::operator&&(&local_d98,pFVar9,pFVar8);
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
  FVar7 = (FWeakObjectPtr)FTestColumnA::StaticStruct();
  if ((GC::GIsIncrementalReachabilityPending != false) && (FVar7 != (FWeakObjectPtr)0x0)) {
    GC::MarkAsReachable((UObject *)FVar7);
  }
  local_e28[0].ObjectIndex = 0;
  local_e28[0].ObjectSerialNumber = 0;
  local_e18.TypeInfo.WeakPtr = FVar7;
  if ((GC::GIsIncrementalReachabilityPending != false) && (FVar7 != (FWeakObjectPtr)0x0)) {
    GC::MarkAsReachable((UObject *)FVar7);
  }
  FWeakObjectPtr::operator=(local_e28,(FObjectPtr)&local_e18);
  local_e18.TypeInfo.WeakPtr = local_e28[0];
  local_df8 = local_e28[0];
  FStack_df0.ObjectIndex = 0;
  FStack_df0.ObjectSerialNumber = 0;
  FVar7 = (FWeakObjectPtr)FTestColumnB::StaticStruct();
  if ((GC::GIsIncrementalReachabilityPending != false) && (FVar7 != (FWeakObjectPtr)0x0)) {
    GC::MarkAsReachable((UObject *)FVar7);
  }
  local_e28[0].ObjectIndex = 0;
  local_e28[0].ObjectSerialNumber = 0;
  local_e18.TypeInfo.WeakPtr = FVar7;
  if ((GC::GIsIncrementalReachabilityPending != false) && (FVar7 != (FWeakObjectPtr)0x0)) {
    GC::MarkAsReachable((UObject *)FVar7);
  }
  FWeakObjectPtr::operator=(local_e28,(FObjectPtr)&local_e18);
  local_e18.TypeInfo.WeakPtr = local_e28[0];
  local_de8 = local_e28[0];
  FStack_de0.ObjectIndex = 0;
  FStack_de0.ObjectSerialNumber = 0;
  FVar7 = (FWeakObjectPtr)FTestColumnC::StaticStruct();
  if ((GC::GIsIncrementalReachabilityPending != false) && (FVar7 != (FWeakObjectPtr)0x0)) {
    GC::MarkAsReachable((UObject *)FVar7);
  }
  local_e28[0].ObjectIndex = 0;
  local_e28[0].ObjectSerialNumber = 0;
  local_e18.TypeInfo.WeakPtr = FVar7;
  if ((GC::GIsIncrementalReachabilityPending != false) && (FVar7 != (FWeakObjectPtr)0x0)) {
    GC::MarkAsReachable((UObject *)FVar7);
  }
  FWeakObjectPtr::operator=(local_e28,(FObjectPtr)&local_e18);
  local_e18.TypeInfo.WeakPtr = local_e28[0];
  local_dd8 = local_e28[0];
  FStack_dd0.ObjectIndex = 0;
  FStack_dd0.ObjectSerialNumber = 0;
  FVar7 = (FWeakObjectPtr)FTestColumnD::StaticStruct();
  if ((GC::GIsIncrementalReachabilityPending != false) && (FVar7 != (FWeakObjectPtr)0x0)) {
    GC::MarkAsReachable((UObject *)FVar7);
  }
  local_e28[0].ObjectIndex = 0;
  local_e28[0].ObjectSerialNumber = 0;
  local_e18.TypeInfo.WeakPtr = FVar7;
  if ((GC::GIsIncrementalReachabilityPending != false) && (FVar7 != (FWeakObjectPtr)0x0)) {
    GC::MarkAsReachable((UObject *)FVar7);
  }
  FWeakObjectPtr::operator=(local_e28,(FObjectPtr)&local_e18);
  local_e18.TypeInfo.WeakPtr = local_e28[0];
  local_dc8 = local_e28[0];
  FStack_dc0.ObjectIndex = 0;
  FStack_dc0.ObjectSerialNumber = 0;
  FVar7 = (FWeakObjectPtr)FTestColumnE::StaticStruct();
  if ((GC::GIsIncrementalReachabilityPending != false) && (FVar7 != (FWeakObjectPtr)0x0)) {
    GC::MarkAsReachable((UObject *)FVar7);
  }
  local_e28[0].ObjectIndex = 0;
  local_e28[0].ObjectSerialNumber = 0;
  local_e18.TypeInfo.WeakPtr = FVar7;
  if ((GC::GIsIncrementalReachabilityPending != false) && (FVar7 != (FWeakObjectPtr)0x0)) {
    GC::MarkAsReachable((UObject *)FVar7);
  }
  FWeakObjectPtr::operator=(local_e28,(FObjectPtr)&local_e18);
  local_e18.TypeInfo.WeakPtr = local_e28[0];
  local_db8 = local_e28[0];
  FStack_db0.ObjectIndex = 0;
  FStack_db0.ObjectSerialNumber = 0;
  FVar7 = (FWeakObjectPtr)FTestColumnF::StaticStruct();
  if ((GC::GIsIncrementalReachabilityPending != false) && (FVar7 != (FWeakObjectPtr)0x0)) {
    GC::MarkAsReachable((UObject *)FVar7);
  }
  local_e28[0].ObjectIndex = 0;
  local_e28[0].ObjectSerialNumber = 0;
  local_e18.TypeInfo.WeakPtr = FVar7;
  if ((GC::GIsIncrementalReachabilityPending != false) && (FVar7 != (FWeakObjectPtr)0x0)) {
    GC::MarkAsReachable((UObject *)FVar7);
  }
  FWeakObjectPtr::operator=(local_e28,(FObjectPtr)&local_e18);
  local_e18.TypeInfo.WeakPtr = local_e28[0];
  TVar4.WeakPtr = local_e18.TypeInfo.WeakPtr;
  local_e18.TypeInfo.WeakPtr.ObjectIndex = local_e28[0].ObjectIndex;
  iVar3 = local_e18.TypeInfo.WeakPtr.ObjectIndex;
  local_e18.TypeInfo.WeakPtr.ObjectSerialNumber = local_e28[0].ObjectSerialNumber;
  iVar5 = local_e18.TypeInfo.WeakPtr.ObjectSerialNumber;
  uStack_da0 = 0;
  local_e08._0_4_ = 0;
  local_e08._4_4_ = 0;
  local_e08._8_4_ = 6;
  local_e18.TypeInfo.WeakPtr = TVar4.WeakPtr;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,4,6,0,(ForAnyElementType *)local_e08,6,&iStack_dfc);
  *(FWeakObjectPtr *)local_e08._0_8_ = local_df8;
  *(FWeakObjectPtr *)(local_e08._0_8_ + 8) = FStack_df0;
  *(FWeakObjectPtr *)(local_e08._0_8_ + 0x10) = local_de8;
  *(FWeakObjectPtr *)(local_e08._0_8_ + 0x18) = FStack_de0;
  *(FWeakObjectPtr *)(local_e08._0_8_ + 0x20) = local_dd8;
  *(FWeakObjectPtr *)(local_e08._0_8_ + 0x28) = FStack_dd0;
  *(FWeakObjectPtr *)(local_e08._0_8_ + 0x30) = local_dc8;
  *(FWeakObjectPtr *)(local_e08._0_8_ + 0x38) = FStack_dc0;
  *(FWeakObjectPtr *)(local_e08._0_8_ + 0x40) = local_db8;
  *(FWeakObjectPtr *)(local_e08._0_8_ + 0x48) = FStack_db0;
  ((FWeakObjectPtr *)(local_e08._0_8_ + 0x50))->ObjectIndex = iVar3;
  *(int *)(local_e08._0_8_ + 0x54) = iVar5;
  ((FWeakObjectPtr *)(local_e08._0_8_ + 0x58))->ObjectIndex = (int)uStack_da0;
  *(int *)(local_e08._0_8_ + 0x5c) = uStack_da0._4_4_;
  bVar6 = TestMatching(&local_d98,
                       (TArray<UE::Editor::DataStorage::Queries::FColumnBase,TSizedDefaultAllocator<32>_>
                        *)local_e08,true,false);
  if ((FWeakObjectPtr)local_e08._0_8_ != (FWeakObjectPtr)0x0) {
    FMemory::Free((void *)local_e08._0_8_);
  }
  if (!bVar6) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar1 = pFVar11->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)local_e08,L"Condition failed");
    (*pcVar2)(pFVar1,local_e08,0);
    if ((FWeakObjectPtr)local_e08._0_8_ != (FWeakObjectPtr)0x0) {
      FMemory::Free((void *)local_e08._0_8_);
    }
  }
  FVar7 = (FWeakObjectPtr)FTestColumnA::StaticStruct();
  if ((GC::GIsIncrementalReachabilityPending != false) && (FVar7 != (FWeakObjectPtr)0x0)) {
    GC::MarkAsReachable((UObject *)FVar7);
  }
  local_e28[0].ObjectIndex = 0;
  local_e28[0].ObjectSerialNumber = 0;
  local_e18.TypeInfo.WeakPtr = FVar7;
  if ((GC::GIsIncrementalReachabilityPending != false) && (FVar7 != (FWeakObjectPtr)0x0)) {
    GC::MarkAsReachable((UObject *)FVar7);
  }
  FWeakObjectPtr::operator=(local_e28,(FObjectPtr)&local_e18);
  local_e18.TypeInfo.WeakPtr = local_e28[0];
  local_df8 = local_e28[0];
  FStack_df0.ObjectIndex = 0;
  FStack_df0.ObjectSerialNumber = 0;
  FVar7 = (FWeakObjectPtr)FTestColumnC::StaticStruct();
  if ((GC::GIsIncrementalReachabilityPending != false) && (FVar7 != (FWeakObjectPtr)0x0)) {
    GC::MarkAsReachable((UObject *)FVar7);
  }
  local_e28[0].ObjectIndex = 0;
  local_e28[0].ObjectSerialNumber = 0;
  local_e18.TypeInfo.WeakPtr = FVar7;
  if ((GC::GIsIncrementalReachabilityPending != false) && (FVar7 != (FWeakObjectPtr)0x0)) {
    GC::MarkAsReachable((UObject *)FVar7);
  }
  FWeakObjectPtr::operator=(local_e28,(FObjectPtr)&local_e18);
  local_e18.TypeInfo.WeakPtr = local_e28[0];
  local_de8 = local_e28[0];
  FStack_de0.ObjectIndex = 0;
  FStack_de0.ObjectSerialNumber = 0;
  FVar7 = (FWeakObjectPtr)FTestColumnE::StaticStruct();
  if ((GC::GIsIncrementalReachabilityPending != false) && (FVar7 != (FWeakObjectPtr)0x0)) {
    GC::MarkAsReachable((UObject *)FVar7);
  }
  local_e28[0].ObjectIndex = 0;
  local_e28[0].ObjectSerialNumber = 0;
  local_e18.TypeInfo.WeakPtr = FVar7;
  if ((GC::GIsIncrementalReachabilityPending != false) && (FVar7 != (FWeakObjectPtr)0x0)) {
    GC::MarkAsReachable((UObject *)FVar7);
  }
  FWeakObjectPtr::operator=(local_e28,(FObjectPtr)&local_e18);
  local_e18.TypeInfo.WeakPtr = local_e28[0];
  local_dd8 = local_e28[0];
  FStack_dd0.ObjectIndex = 0;
  FStack_dd0.ObjectSerialNumber = 0;
  FVar7 = (FWeakObjectPtr)FTestColumnG::StaticStruct();
  if ((GC::GIsIncrementalReachabilityPending != false) && (FVar7 != (FWeakObjectPtr)0x0)) {
    GC::MarkAsReachable((UObject *)FVar7);
  }
  local_e28[0].ObjectIndex = 0;
  local_e28[0].ObjectSerialNumber = 0;
  local_e18.TypeInfo.WeakPtr = FVar7;
  if ((GC::GIsIncrementalReachabilityPending != false) && (FVar7 != (FWeakObjectPtr)0x0)) {
    GC::MarkAsReachable((UObject *)FVar7);
  }
  FWeakObjectPtr::operator=(local_e28,(FObjectPtr)&local_e18);
  local_e18.TypeInfo.WeakPtr = local_e28[0];
  TVar4.WeakPtr = local_e18.TypeInfo.WeakPtr;
  local_e18.TypeInfo.WeakPtr.ObjectIndex = local_e28[0].ObjectIndex;
  iVar3 = local_e18.TypeInfo.WeakPtr.ObjectIndex;
  local_e18.TypeInfo.WeakPtr.ObjectSerialNumber = local_e28[0].ObjectSerialNumber;
  iVar5 = local_e18.TypeInfo.WeakPtr.ObjectSerialNumber;
  FStack_dc0.ObjectIndex = 0;
  FStack_dc0.ObjectSerialNumber = 0;
  local_e08._0_4_ = 0;
  local_e08._4_4_ = 0;
  local_e08._8_4_ = 4;
  local_e18.TypeInfo.WeakPtr = TVar4.WeakPtr;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,4,4,0,(ForAnyElementType *)local_e08,4,&iStack_dfc);
  *(FWeakObjectPtr *)local_e08._0_8_ = local_df8;
  *(FWeakObjectPtr *)(local_e08._0_8_ + 8) = FStack_df0;
  *(FWeakObjectPtr *)(local_e08._0_8_ + 0x10) = local_de8;
  *(FWeakObjectPtr *)(local_e08._0_8_ + 0x18) = FStack_de0;
  *(FWeakObjectPtr *)(local_e08._0_8_ + 0x20) = local_dd8;
  *(FWeakObjectPtr *)(local_e08._0_8_ + 0x28) = FStack_dd0;
  ((FWeakObjectPtr *)(local_e08._0_8_ + 0x30))->ObjectIndex = iVar3;
  *(int *)(local_e08._0_8_ + 0x34) = iVar5;
  ((FWeakObjectPtr *)(local_e08._0_8_ + 0x38))->ObjectIndex = FStack_dc0.ObjectIndex;
  *(int *)(local_e08._0_8_ + 0x3c) = FStack_dc0.ObjectSerialNumber;
  bVar6 = TestMatching(&local_d98,
                       (TArray<UE::Editor::DataStorage::Queries::FColumnBase,TSizedDefaultAllocator<32>_>
                        *)local_e08,true,false);
  if ((FWeakObjectPtr)local_e08._0_8_ != (FWeakObjectPtr)0x0) {
    FMemory::Free((void *)local_e08._0_8_);
  }
  if (!bVar6) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar1 = pFVar11->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)local_e08,L"Condition failed");
    (*pcVar2)(pFVar1,local_e08,0);
    if ((FWeakObjectPtr)local_e08._0_8_ != (FWeakObjectPtr)0x0) {
      FMemory::Free((void *)local_e08._0_8_);
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

