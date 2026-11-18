// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 10

// GetTestFlags @ 142cc9630

EAutomationTestFlags __thiscall
UE::Editor::DataStorage::Tests::FTypedElementQueryConditions4::GetTestFlags
          (FTypedElementQueryConditions4 *this)

{
  return this->TestFlags;
}

// IsStressTest @ 142cc9640

bool __thiscall
UE::Editor::DataStorage::Tests::FTypedElementQueryConditions4::IsStressTest
          (FTypedElementQueryConditions4 *this)

{
  return false;
}

// GetRequiredDeviceNum @ 142cc9650

uint __thiscall
UE::Editor::DataStorage::Tests::FTypedElementQueryConditions4::GetRequiredDeviceNum
          (FTypedElementQueryConditions4 *this)

{
  return 1;
}

// GetTestSourceFileName @ 142cc9660

FString * __thiscall
UE::Editor::DataStorage::Tests::FTypedElementQueryConditions4::GetTestSourceFileName
          (FTypedElementQueryConditions4 *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Tests\\Elements\\Framework\\TypedElementQueryBuilderTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 142cc9690

int __thiscall
UE::Editor::DataStorage::Tests::FTypedElementQueryConditions4::GetTestSourceFileLine
          (FTypedElementQueryConditions4 *this)

{
  return 0x9e;
}

// GetTests @ 142cc96a0

/* WARNING: Removing unreachable block (ram,0x000142cc981e) */

void __thiscall
UE::Editor::DataStorage::Tests::FTypedElementQueryConditions4::GetTests
          (FTypedElementQueryConditions4 *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 142cc9840

bool __thiscall
UE::Editor::DataStorage::Tests::FTypedElementQueryConditions4::RunTest
          (FTypedElementQueryConditions4 *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 142cc9870

FString * __thiscall
UE::Editor::DataStorage::Tests::FTypedElementQueryConditions4::GetBeautifiedTestName
          (FTypedElementQueryConditions4 *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FTypedElementQueryConditions4 @ 142ce36d0

FTypedElementQueryConditions4 * __thiscall
UE::Editor::DataStorage::Tests::FTypedElementQueryConditions4::FTypedElementQueryConditions4
          (FTypedElementQueryConditions4 *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FTypedElementQueryConditions4_Tests_DataStorage_Editor_UE__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][EngineFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,
                              "Editor::DataStorage::QueryBuilder::FTypedElementQueryConditions A && (B || C) && (D || E)"
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

// TestBody @ 142d0fee0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Editor::DataStorage::Tests::FTypedElementQueryConditions4::TestBody
          (FTypedElementQueryConditions4 *this,FString *param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  FName FVar3;
  FName FVar4;
  undefined4 uVar5;
  undefined1 auVar6 [8];
  undefined4 uVar7;
  uchar uVar8;
  bool bVar9;
  UScriptStruct *pUVar10;
  FConditions *pFVar11;
  FConditions *pFVar12;
  FAutomationTestFramework *pFVar13;
  TColumn<FTestColumnD> *pTVar14;
  undefined1 auStackY_bc8 [32];
  FName local_b88 [2];
  undefined1 local_b78 [8];
  FName FStack_b70;
  FName local_b68;
  undefined8 uStack_b60;
  undefined1 local_b58 [8];
  FName FStack_b50;
  FName local_b48;
  FName FStack_b40;
  FName local_b38;
  FName FStack_b30;
  uint local_b28;
  uint uStack_b24;
  undefined8 uStack_b20;
  FName local_b18;
  undefined8 local_b10;
  FName local_b08;
  undefined8 local_b00;
  undefined8 local_af8;
  undefined8 uStack_af0;
  FConditions local_ae8;
  FConditions local_838;
  FConditions local_588;
  FConditions local_2d8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_bc8;
  local_b68 = (FName)FTestColumnE::StaticStruct();
  if ((GC::GIsIncrementalReachabilityPending != false) && (local_b68 != (FName)0x0)) {
    GC::MarkAsReachable((UObject *)local_b68);
  }
  local_b88[0].ComparisonIndex.Value = 0;
  local_b88[0].Number = 0;
  if ((GC::GIsIncrementalReachabilityPending != false) && (local_b68 != (FName)0x0)) {
    GC::MarkAsReachable((UObject *)local_b68);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)local_b88,(FObjectPtr)&local_b68);
  local_b58._0_4_ = local_b88[0].ComparisonIndex.Value;
  local_b58._4_4_ = local_b88[0].Number;
  local_b78._0_4_ = local_b88[0].ComparisonIndex.Value;
  local_b78._4_4_ = local_b88[0].Number;
  FStack_b70.ComparisonIndex.Value = 0;
  FStack_b70.Number = 0;
  pUVar10 = FTestColumnD::StaticStruct();
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar10);
  }
  local_b88[0].ComparisonIndex.Value = 0;
  local_b88[0].Number = 0;
  local_b68 = (FName)pUVar10;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar10);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)local_b88,(FObjectPtr)&local_b68);
  FStack_b50 = FStack_b70;
  local_b58 = local_b78;
  local_b68 = local_b88[0];
  uStack_b60 = 0;
  local_b78._0_4_ = local_b88[0].ComparisonIndex.Value;
  local_b78._4_4_ = local_b88[0].Number;
  FStack_b70.ComparisonIndex.Value = 0;
  FStack_b70.Number = 0;
  pFVar11 = Queries::operator||(&local_2d8,(FColumnBase *)local_b78,(FColumnBase *)local_b58);
  pUVar10 = FTestColumnC::StaticStruct();
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar10);
  }
  local_b88[0].ComparisonIndex.Value = 0;
  local_b88[0].Number = 0;
  local_b68 = (FName)pUVar10;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar10);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)local_b88,(FObjectPtr)&local_b68);
  local_b58._0_4_ = local_b88[0].ComparisonIndex.Value;
  local_b58._4_4_ = local_b88[0].Number;
  local_b78._0_4_ = local_b88[0].ComparisonIndex.Value;
  local_b78._4_4_ = local_b88[0].Number;
  FStack_b70.ComparisonIndex.Value = 0;
  FStack_b70.Number = 0;
  pUVar10 = FTestColumnB::StaticStruct();
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar10);
  }
  local_b88[0].ComparisonIndex.Value = 0;
  local_b88[0].Number = 0;
  local_b68 = (FName)pUVar10;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar10);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)local_b88,(FObjectPtr)&local_b68);
  FStack_b50 = FStack_b70;
  local_b58 = local_b78;
  local_b68 = local_b88[0];
  uStack_b60 = 0;
  local_b78._0_4_ = local_b88[0].ComparisonIndex.Value;
  local_b78._4_4_ = local_b88[0].Number;
  FStack_b70.ComparisonIndex.Value = 0;
  FStack_b70.Number = 0;
  pFVar12 = Queries::operator||(&local_588,(FColumnBase *)local_b78,(FColumnBase *)local_b58);
  pUVar10 = FTestColumnA::StaticStruct();
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar10);
  }
  local_b88[0].ComparisonIndex.Value = 0;
  local_b88[0].Number = 0;
  local_b68 = (FName)pUVar10;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar10);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)local_b88,(FObjectPtr)&local_b68);
  local_b78._0_4_ = local_b88[0].ComparisonIndex.Value;
  local_b78._4_4_ = local_b88[0].Number;
  FStack_b70.ComparisonIndex.Value = 0;
  FStack_b70.Number = 0;
  local_b58._0_4_ = local_b88[0].ComparisonIndex.Value;
  local_b58._4_4_ = local_b88[0].Number;
  FStack_b50.ComparisonIndex.Value = 0;
  FStack_b50.Number = 0;
  pFVar12 = Queries::operator&&(&local_838,(FColumnBase *)local_b58,pFVar12);
  Queries::operator&&(&local_ae8,pFVar12,pFVar11);
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
  uVar8 = Queries::FConditions::MinimumColumnMatchRequired(&local_ae8);
  if (uVar8 != '\x03') {
    pFVar13 = FAutomationTestFramework::Get();
    pFVar1 = pFVar13->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)local_b78,L"Condition failed");
    (*pcVar2)(pFVar1,local_b78,0);
    if ((FName)local_b78 != (FName)0x0) {
      FMemory::Free((void *)local_b78);
    }
  }
  pUVar10 = FTestColumnA::StaticStruct();
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar10);
  }
  local_b88[0].ComparisonIndex.Value = 0;
  local_b88[0].Number = 0;
  local_b68 = (FName)pUVar10;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar10);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)local_b88,(FObjectPtr)&local_b68);
  FVar3 = local_b88[0];
  local_b68 = local_b88[0];
  uStack_b60 = 0;
  local_b78._0_4_ = 0;
  local_b78._4_4_ = 0;
  FStack_b70.ComparisonIndex.Value = 1;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,4,1,0,(ForAnyElementType *)local_b78,1,(int *)&FStack_b70.Number);
  FVar4 = local_b88[0];
  local_b88[0].ComparisonIndex = FVar3.ComparisonIndex.Value;
  local_b88[0].Number = FVar3.Number;
  local_b58._0_4_ = local_b88[0].ComparisonIndex.Value;
  local_b58._4_4_ = local_b88[0].Number;
  FStack_b50.ComparisonIndex.Value = 0;
  FStack_b50.Number = 0;
  *(FName *)local_b78 = FVar3;
  ((FName *)((longlong)local_b78 + 8))->ComparisonIndex = 0;
  ((FName *)((longlong)local_b78 + 8))->Number = 0;
  local_b88[0] = FVar4;
  bVar9 = TestMatching(&local_ae8,
                       (TArray<UE::Editor::DataStorage::Queries::FColumnBase,TSizedDefaultAllocator<32>_>
                        *)local_b78,false,false);
  if ((FWeakObjectPtr)local_b78 != (FWeakObjectPtr)0x0) {
    FMemory::Free((void *)local_b78);
  }
  if (!bVar9) {
    pFVar13 = FAutomationTestFramework::Get();
    pFVar1 = pFVar13->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)local_b78,L"Condition failed");
    (*pcVar2)(pFVar1,local_b78,0);
    if ((FWeakObjectPtr)local_b78 != (FWeakObjectPtr)0x0) {
      FMemory::Free((void *)local_b78);
    }
  }
  pUVar10 = FTestColumnA::StaticStruct();
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar10);
  }
  local_b88[0].ComparisonIndex.Value = 0;
  local_b88[0].Number = 0;
  local_b68 = (FName)pUVar10;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar10);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)local_b88,(FObjectPtr)&local_b68);
  local_b58._0_4_ = local_b88[0].ComparisonIndex.Value;
  local_b58._4_4_ = local_b88[0].Number;
  local_b48 = local_b88[0];
  FStack_b40.ComparisonIndex.Value = 0;
  FStack_b40.Number = 0;
  pUVar10 = FTestColumnB::StaticStruct();
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar10);
  }
  local_b88[0].ComparisonIndex.Value = 0;
  local_b88[0].Number = 0;
  local_b68 = (FName)pUVar10;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar10);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)local_b88,(FObjectPtr)&local_b68);
  FVar3 = local_b88[0];
  local_b58._0_4_ = local_b88[0].ComparisonIndex.Value;
  local_b58._4_4_ = local_b88[0].Number;
  auVar6 = local_b58;
  local_b58._0_4_ = local_b88[0].ComparisonIndex.Value;
  uVar5 = local_b58._0_4_;
  local_b58._4_4_ = local_b88[0].Number;
  uVar7 = local_b58._4_4_;
  FStack_b30.ComparisonIndex.Value = 0;
  FStack_b30.Number = 0;
  local_b78._0_4_ = 0;
  local_b78._4_4_ = 0;
  FStack_b70.ComparisonIndex.Value = 2;
  local_b58 = auVar6;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,4,2,0,(ForAnyElementType *)local_b78,2,(int *)&FStack_b70.Number);
  *(FName *)local_b78 = local_b48;
  *(FName *)((longlong)local_b78 + 8) = FStack_b40;
  local_b38 = FVar3;
  (((FName *)((longlong)local_b78 + 0x10))->ComparisonIndex).Value = uVar5;
  *(undefined4 *)((longlong)local_b78 + 0x14) = uVar7;
  (((FName *)((longlong)local_b78 + 0x18))->ComparisonIndex).Value =
       FStack_b30.ComparisonIndex.Value;
  *(uint *)((longlong)local_b78 + 0x1c) = FStack_b30.Number;
  bVar9 = TestMatching(&local_ae8,
                       (TArray<UE::Editor::DataStorage::Queries::FColumnBase,TSizedDefaultAllocator<32>_>
                        *)local_b78,false,false);
  if ((FWeakObjectPtr)local_b78 != (FWeakObjectPtr)0x0) {
    FMemory::Free((void *)local_b78);
  }
  if (!bVar9) {
    pFVar13 = FAutomationTestFramework::Get();
    pFVar1 = pFVar13->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)local_b78,L"Condition failed");
    (*pcVar2)(pFVar1,local_b78,0);
    if ((FWeakObjectPtr)local_b78 != (FWeakObjectPtr)0x0) {
      FMemory::Free((void *)local_b78);
    }
  }
  pUVar10 = FTestColumnA::StaticStruct();
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar10);
  }
  local_b88[0].ComparisonIndex.Value = 0;
  local_b88[0].Number = 0;
  local_b68 = (FName)pUVar10;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar10);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)local_b88,(FObjectPtr)&local_b68);
  local_b58._0_4_ = local_b88[0].ComparisonIndex.Value;
  local_b58._4_4_ = local_b88[0].Number;
  local_b48 = local_b88[0];
  FStack_b40.ComparisonIndex.Value = 0;
  FStack_b40.Number = 0;
  pUVar10 = FTestColumnB::StaticStruct();
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar10);
  }
  local_b88[0].ComparisonIndex.Value = 0;
  local_b88[0].Number = 0;
  local_b68 = (FName)pUVar10;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar10);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)local_b88,(FObjectPtr)&local_b68);
  local_b58._0_4_ = local_b88[0].ComparisonIndex.Value;
  local_b58._4_4_ = local_b88[0].Number;
  local_b38 = local_b88[0];
  FStack_b30.ComparisonIndex.Value = 0;
  FStack_b30.Number = 0;
  pUVar10 = FTestColumnD::StaticStruct();
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar10);
  }
  local_b88[0].ComparisonIndex.Value = 0;
  local_b88[0].Number = 0;
  local_b68 = (FName)pUVar10;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar10);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)local_b88,(FObjectPtr)&local_b68);
  local_b58._0_4_ = local_b88[0].ComparisonIndex.Value;
  local_b58._4_4_ = local_b88[0].Number;
  auVar6 = local_b58;
  local_b58._0_4_ = local_b88[0].ComparisonIndex.Value;
  uVar5 = local_b58._0_4_;
  local_b58._4_4_ = local_b88[0].Number;
  uVar7 = local_b58._4_4_;
  uStack_b20 = 0;
  local_b78._0_4_ = 0;
  local_b78._4_4_ = 0;
  FStack_b70.ComparisonIndex.Value = 3;
  local_b58 = auVar6;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,4,3,0,(ForAnyElementType *)local_b78,3,(int *)&FStack_b70.Number);
  *(FName *)local_b78 = local_b48;
  *(FName *)((longlong)local_b78 + 8) = FStack_b40;
  *(FName *)((longlong)local_b78 + 0x10) = local_b38;
  *(FName *)((longlong)local_b78 + 0x18) = FStack_b30;
  local_b28 = uVar5;
  uStack_b24 = uVar7;
  (((FName *)((longlong)local_b78 + 0x20))->ComparisonIndex).Value = uVar5;
  *(undefined4 *)((longlong)local_b78 + 0x24) = uVar7;
  (((FName *)((longlong)local_b78 + 0x28))->ComparisonIndex).Value = (uint)uStack_b20;
  *(uint *)((longlong)local_b78 + 0x2c) = uStack_b20._4_4_;
  bVar9 = TestMatching(&local_ae8,
                       (TArray<UE::Editor::DataStorage::Queries::FColumnBase,TSizedDefaultAllocator<32>_>
                        *)local_b78,true,false);
  if ((FWeakObjectPtr)local_b78 != (FWeakObjectPtr)0x0) {
    FMemory::Free((void *)local_b78);
  }
  if (!bVar9) {
    pFVar13 = FAutomationTestFramework::Get();
    pFVar1 = pFVar13->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)local_b78,L"Condition failed");
    (*pcVar2)(pFVar1,local_b78,0);
    if ((FWeakObjectPtr)local_b78 != (FWeakObjectPtr)0x0) {
      FMemory::Free((void *)local_b78);
    }
  }
  pUVar10 = FTestColumnA::StaticStruct();
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar10);
  }
  local_b88[0].ComparisonIndex.Value = 0;
  local_b88[0].Number = 0;
  local_b68 = (FName)pUVar10;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar10);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)local_b88,(FObjectPtr)&local_b68);
  local_b58._0_4_ = local_b88[0].ComparisonIndex.Value;
  local_b58._4_4_ = local_b88[0].Number;
  local_b48 = local_b88[0];
  FStack_b40.ComparisonIndex.Value = 0;
  FStack_b40.Number = 0;
  pUVar10 = FTestColumnB::StaticStruct();
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar10);
  }
  local_b88[0].ComparisonIndex.Value = 0;
  local_b88[0].Number = 0;
  local_b68 = (FName)pUVar10;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar10);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)local_b88,(FObjectPtr)&local_b68);
  local_b58._0_4_ = local_b88[0].ComparisonIndex.Value;
  local_b58._4_4_ = local_b88[0].Number;
  local_b38 = local_b88[0];
  FStack_b30.ComparisonIndex.Value = 0;
  FStack_b30.Number = 0;
  pUVar10 = FTestColumnE::StaticStruct();
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar10);
  }
  local_b88[0].ComparisonIndex.Value = 0;
  local_b88[0].Number = 0;
  local_b68 = (FName)pUVar10;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar10);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)local_b88,(FObjectPtr)&local_b68);
  local_b58._0_4_ = local_b88[0].ComparisonIndex.Value;
  local_b58._4_4_ = local_b88[0].Number;
  auVar6 = local_b58;
  local_b58._0_4_ = local_b88[0].ComparisonIndex.Value;
  uVar5 = local_b58._0_4_;
  local_b58._4_4_ = local_b88[0].Number;
  uVar7 = local_b58._4_4_;
  uStack_b20 = 0;
  local_b78._0_4_ = 0;
  local_b78._4_4_ = 0;
  FStack_b70.ComparisonIndex.Value = 3;
  local_b58 = auVar6;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,4,3,0,(ForAnyElementType *)local_b78,3,(int *)&FStack_b70.Number);
  *(FName *)local_b78 = local_b48;
  *(FName *)((longlong)local_b78 + 8) = FStack_b40;
  *(FName *)((longlong)local_b78 + 0x10) = local_b38;
  *(FName *)((longlong)local_b78 + 0x18) = FStack_b30;
  local_b28 = uVar5;
  uStack_b24 = uVar7;
  (((FName *)((longlong)local_b78 + 0x20))->ComparisonIndex).Value = uVar5;
  *(undefined4 *)((longlong)local_b78 + 0x24) = uVar7;
  (((FName *)((longlong)local_b78 + 0x28))->ComparisonIndex).Value = (uint)uStack_b20;
  *(uint *)((longlong)local_b78 + 0x2c) = uStack_b20._4_4_;
  bVar9 = TestMatching(&local_ae8,
                       (TArray<UE::Editor::DataStorage::Queries::FColumnBase,TSizedDefaultAllocator<32>_>
                        *)local_b78,true,false);
  if ((FWeakObjectPtr)local_b78 != (FWeakObjectPtr)0x0) {
    FMemory::Free((void *)local_b78);
  }
  if (!bVar9) {
    pFVar13 = FAutomationTestFramework::Get();
    pFVar1 = pFVar13->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)local_b78,L"Condition failed");
    (*pcVar2)(pFVar1,local_b78,0);
    if ((FWeakObjectPtr)local_b78 != (FWeakObjectPtr)0x0) {
      FMemory::Free((void *)local_b78);
    }
  }
  pUVar10 = FTestColumnA::StaticStruct();
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar10);
  }
  local_b88[0].ComparisonIndex.Value = 0;
  local_b88[0].Number = 0;
  local_b68 = (FName)pUVar10;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar10);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)local_b88,(FObjectPtr)&local_b68);
  local_b58._0_4_ = local_b88[0].ComparisonIndex.Value;
  local_b58._4_4_ = local_b88[0].Number;
  local_b48 = local_b88[0];
  FStack_b40.ComparisonIndex.Value = 0;
  FStack_b40.Number = 0;
  pUVar10 = FTestColumnC::StaticStruct();
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar10);
  }
  local_b88[0].ComparisonIndex.Value = 0;
  local_b88[0].Number = 0;
  local_b68 = (FName)pUVar10;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar10);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)local_b88,(FObjectPtr)&local_b68);
  local_b58._0_4_ = local_b88[0].ComparisonIndex.Value;
  local_b58._4_4_ = local_b88[0].Number;
  local_b38 = local_b88[0];
  FStack_b30.ComparisonIndex.Value = 0;
  FStack_b30.Number = 0;
  pUVar10 = FTestColumnD::StaticStruct();
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar10);
  }
  local_b88[0].ComparisonIndex.Value = 0;
  local_b88[0].Number = 0;
  local_b68 = (FName)pUVar10;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar10);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)local_b88,(FObjectPtr)&local_b68);
  local_b58._0_4_ = local_b88[0].ComparisonIndex.Value;
  local_b58._4_4_ = local_b88[0].Number;
  auVar6 = local_b58;
  local_b58._0_4_ = local_b88[0].ComparisonIndex.Value;
  uVar5 = local_b58._0_4_;
  local_b58._4_4_ = local_b88[0].Number;
  uVar7 = local_b58._4_4_;
  uStack_b20 = 0;
  local_b78._0_4_ = 0;
  local_b78._4_4_ = 0;
  FStack_b70.ComparisonIndex.Value = 3;
  local_b58 = auVar6;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,4,3,0,(ForAnyElementType *)local_b78,3,(int *)&FStack_b70.Number);
  *(FName *)local_b78 = local_b48;
  *(FName *)((longlong)local_b78 + 8) = FStack_b40;
  *(FName *)((longlong)local_b78 + 0x10) = local_b38;
  *(FName *)((longlong)local_b78 + 0x18) = FStack_b30;
  local_b28 = uVar5;
  uStack_b24 = uVar7;
  (((FName *)((longlong)local_b78 + 0x20))->ComparisonIndex).Value = uVar5;
  *(undefined4 *)((longlong)local_b78 + 0x24) = uVar7;
  (((FName *)((longlong)local_b78 + 0x28))->ComparisonIndex).Value = (uint)uStack_b20;
  *(uint *)((longlong)local_b78 + 0x2c) = uStack_b20._4_4_;
  bVar9 = TestMatching(&local_ae8,
                       (TArray<UE::Editor::DataStorage::Queries::FColumnBase,TSizedDefaultAllocator<32>_>
                        *)local_b78,true,false);
  if ((FWeakObjectPtr)local_b78 != (FWeakObjectPtr)0x0) {
    FMemory::Free((void *)local_b78);
  }
  if (!bVar9) {
    pFVar13 = FAutomationTestFramework::Get();
    pFVar1 = pFVar13->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)local_b78,L"Condition failed");
    (*pcVar2)(pFVar1,local_b78,0);
    if ((FWeakObjectPtr)local_b78 != (FWeakObjectPtr)0x0) {
      FMemory::Free((void *)local_b78);
    }
  }
  pUVar10 = FTestColumnA::StaticStruct();
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar10);
  }
  local_b88[0].ComparisonIndex.Value = 0;
  local_b88[0].Number = 0;
  local_b68 = (FName)pUVar10;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar10);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)local_b88,(FObjectPtr)&local_b68);
  local_b58._0_4_ = local_b88[0].ComparisonIndex.Value;
  local_b58._4_4_ = local_b88[0].Number;
  local_b48 = local_b88[0];
  FStack_b40.ComparisonIndex.Value = 0;
  FStack_b40.Number = 0;
  pUVar10 = FTestColumnC::StaticStruct();
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar10);
  }
  local_b88[0].ComparisonIndex.Value = 0;
  local_b88[0].Number = 0;
  local_b68 = (FName)pUVar10;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar10);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)local_b88,(FObjectPtr)&local_b68);
  local_b58._0_4_ = local_b88[0].ComparisonIndex.Value;
  local_b58._4_4_ = local_b88[0].Number;
  local_b38 = local_b88[0];
  FStack_b30.ComparisonIndex.Value = 0;
  FStack_b30.Number = 0;
  pUVar10 = FTestColumnF::StaticStruct();
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar10);
  }
  local_b88[0].ComparisonIndex.Value = 0;
  local_b88[0].Number = 0;
  local_b68 = (FName)pUVar10;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar10);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)local_b88,(FObjectPtr)&local_b68);
  local_b58._0_4_ = local_b88[0].ComparisonIndex.Value;
  local_b58._4_4_ = local_b88[0].Number;
  auVar6 = local_b58;
  local_b58._0_4_ = local_b88[0].ComparisonIndex.Value;
  uVar5 = local_b58._0_4_;
  local_b58._4_4_ = local_b88[0].Number;
  uVar7 = local_b58._4_4_;
  uStack_b20 = 0;
  local_b78._0_4_ = 0;
  local_b78._4_4_ = 0;
  FStack_b70.ComparisonIndex.Value = 3;
  local_b58 = auVar6;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,4,3,0,(ForAnyElementType *)local_b78,3,(int *)&FStack_b70.Number);
  *(FName *)local_b78 = local_b48;
  *(FName *)((longlong)local_b78 + 8) = FStack_b40;
  *(FName *)((longlong)local_b78 + 0x10) = local_b38;
  *(FName *)((longlong)local_b78 + 0x18) = FStack_b30;
  local_b28 = uVar5;
  uStack_b24 = uVar7;
  (((FName *)((longlong)local_b78 + 0x20))->ComparisonIndex).Value = uVar5;
  *(undefined4 *)((longlong)local_b78 + 0x24) = uVar7;
  (((FName *)((longlong)local_b78 + 0x28))->ComparisonIndex).Value = (uint)uStack_b20;
  *(uint *)((longlong)local_b78 + 0x2c) = uStack_b20._4_4_;
  bVar9 = TestMatching(&local_ae8,
                       (TArray<UE::Editor::DataStorage::Queries::FColumnBase,TSizedDefaultAllocator<32>_>
                        *)local_b78,false,false);
  if ((FWeakObjectPtr)local_b78 != (FWeakObjectPtr)0x0) {
    FMemory::Free((void *)local_b78);
  }
  if (!bVar9) {
    pFVar13 = FAutomationTestFramework::Get();
    pFVar1 = pFVar13->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)local_b78,L"Condition failed");
    (*pcVar2)(pFVar1,local_b78);
    if ((FWeakObjectPtr)local_b78 != (FWeakObjectPtr)0x0) {
      FMemory::Free((void *)local_b78);
    }
  }
  pUVar10 = FTestColumnA::StaticStruct();
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar10);
  }
  local_b88[0].ComparisonIndex.Value = 0;
  local_b88[0].Number = 0;
  local_b68 = (FName)pUVar10;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar10);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)local_b88,(FObjectPtr)&local_b68);
  local_b78._0_4_ = local_b88[0].ComparisonIndex.Value;
  local_b78._4_4_ = local_b88[0].Number;
  local_b18 = local_b88[0];
  local_b10 = 0;
  pUVar10 = FTestColumnF::StaticStruct();
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar10);
  }
  local_b88[0].ComparisonIndex.Value = 0;
  local_b88[0].Number = 0;
  local_b68 = (FName)pUVar10;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar10);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)local_b88,(FObjectPtr)&local_b68);
  local_b78._0_4_ = local_b88[0].ComparisonIndex.Value;
  local_b78._4_4_ = local_b88[0].Number;
  local_b08 = local_b88[0];
  local_b00 = 0;
  local_b88[0].ComparisonIndex.Value = 0;
  local_b88[0].Number = 0;
  pTVar14 = Queries::TColumn<FTestColumnD>::TColumn<FTestColumnD><FTestColumnD>
                      ((TColumn<FTestColumnD> *)&local_b48,local_b88);
  local_af8 = *(undefined8 *)pTVar14;
  uStack_af0 = *(undefined8 *)&pTVar14->field_0x8;
  local_b78 = (undefined1  [8])&local_b18;
  FStack_b70 = (FName)&local_ae8;
  TArray<UE::Editor::DataStorage::Queries::FColumnBase,TSizedDefaultAllocator<32>_>::
  TArray<UE::Editor::DataStorage::Queries::FColumnBase,TSizedDefaultAllocator<32>_>
            ((TArray<UE::Editor::DataStorage::Queries::FColumnBase,TSizedDefaultAllocator<32>_> *)
             local_b58,(initializer_list<UE::Editor::DataStorage::Queries::FColumnBase> *)local_b78)
  ;
  bVar9 = TestMatching(&local_ae8,
                       (TArray<UE::Editor::DataStorage::Queries::FColumnBase,TSizedDefaultAllocator<32>_>
                        *)local_b58,false,false);
  if ((FName)local_b58 != (FName)0x0) {
    FMemory::Free((void *)local_b58);
  }
  if (!bVar9) {
    pFVar13 = FAutomationTestFramework::Get();
    pFVar1 = pFVar13->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)local_b58,L"Condition failed");
    (*pcVar2)(pFVar1,local_b58,0);
    if ((FName)local_b58 != (FName)0x0) {
      FMemory::Free((void *)local_b58);
    }
  }
  pUVar10 = FTestColumnB::StaticStruct();
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar10);
  }
  local_b88[0].ComparisonIndex.Value = 0;
  local_b88[0].Number = 0;
  local_b68 = (FName)pUVar10;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar10);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)local_b88,(FObjectPtr)&local_b68);
  local_b58._0_4_ = local_b88[0].ComparisonIndex.Value;
  local_b58._4_4_ = local_b88[0].Number;
  local_b48 = local_b88[0];
  FStack_b40.ComparisonIndex.Value = 0;
  FStack_b40.Number = 0;
  pUVar10 = FTestColumnC::StaticStruct();
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar10);
  }
  local_b88[0].ComparisonIndex.Value = 0;
  local_b88[0].Number = 0;
  local_b68 = (FName)pUVar10;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar10);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)local_b88,(FObjectPtr)&local_b68);
  local_b58._0_4_ = local_b88[0].ComparisonIndex.Value;
  local_b58._4_4_ = local_b88[0].Number;
  local_b38 = local_b88[0];
  FStack_b30.ComparisonIndex.Value = 0;
  FStack_b30.Number = 0;
  pUVar10 = FTestColumnD::StaticStruct();
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar10);
  }
  local_b88[0].ComparisonIndex.Value = 0;
  local_b88[0].Number = 0;
  local_b68 = (FName)pUVar10;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar10);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)local_b88,(FObjectPtr)&local_b68);
  local_b58._0_4_ = local_b88[0].ComparisonIndex.Value;
  local_b58._4_4_ = local_b88[0].Number;
  auVar6 = local_b58;
  local_b58._0_4_ = local_b88[0].ComparisonIndex.Value;
  uVar5 = local_b58._0_4_;
  local_b58._4_4_ = local_b88[0].Number;
  uVar7 = local_b58._4_4_;
  uStack_b20 = 0;
  local_b78._0_4_ = 0;
  local_b78._4_4_ = 0;
  FStack_b70.ComparisonIndex.Value = 3;
  local_b58 = auVar6;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,4,3,0,(ForAnyElementType *)local_b78,3,(int *)&FStack_b70.Number);
  *(FName *)local_b78 = local_b48;
  *(FName *)((longlong)local_b78 + 8) = FStack_b40;
  *(FName *)((longlong)local_b78 + 0x10) = local_b38;
  *(FName *)((longlong)local_b78 + 0x18) = FStack_b30;
  (((FName *)((longlong)local_b78 + 0x20))->ComparisonIndex).Value = uVar5;
  *(undefined4 *)((longlong)local_b78 + 0x24) = uVar7;
  (((FName *)((longlong)local_b78 + 0x28))->ComparisonIndex).Value = (uint)uStack_b20;
  *(uint *)((longlong)local_b78 + 0x2c) = uStack_b20._4_4_;
  bVar9 = TestMatching(&local_ae8,
                       (TArray<UE::Editor::DataStorage::Queries::FColumnBase,TSizedDefaultAllocator<32>_>
                        *)local_b78,false,false);
  if ((FWeakObjectPtr)local_b78 != (FWeakObjectPtr)0x0) {
    FMemory::Free((void *)local_b78);
  }
  if (!bVar9) {
    pFVar13 = FAutomationTestFramework::Get();
    pFVar1 = pFVar13->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)local_b58,L"Condition failed");
    (*pcVar2)(pFVar1,local_b58,0);
    if ((FName)local_b58 != (FName)0x0) {
      FMemory::Free((void *)local_b58);
    }
  }
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
  return;
}

