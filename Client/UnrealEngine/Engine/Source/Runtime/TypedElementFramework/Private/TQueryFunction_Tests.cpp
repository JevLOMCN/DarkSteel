// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 32

// GetTestFlags @ 142cc8860

EAutomationTestFlags __thiscall
UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::GetTestFlags
          (TQueryFunction_Tests *this)

{
  return this->TestFlags;
}

// IsStressTest @ 142cc8870

bool __thiscall
UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::IsStressTest
          (TQueryFunction_Tests *this)

{
  return false;
}

// GetRequiredDeviceNum @ 142cc88d0

uint __thiscall
UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::GetRequiredDeviceNum
          (TQueryFunction_Tests *this)

{
  return 1;
}

// GetTestSourceFileName @ 142cc88e0

FString * __thiscall
UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::GetTestSourceFileName
          (TQueryFunction_Tests *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Tests\\Elements\\Framework\\TypedElementQueryFunctionsTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 142cc8910

int __thiscall
UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::GetTestSourceFileLine
          (TQueryFunction_Tests *this)

{
  return 0x68;
}

// GetTests @ 142cc8920

/* WARNING: Removing unreachable block (ram,0x000142cc8a9e) */

void __thiscall
UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::GetTests
          (TQueryFunction_Tests *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 142cc8ac0

bool __thiscall
UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::RunTest
          (TQueryFunction_Tests *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 142cc8af0

FString * __thiscall
UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::GetBeautifiedTestName
          (TQueryFunction_Tests *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// <lambda_invoker_cdecl> @ 142ccc8c0

uint __cdecl
`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l125::<lambda_16>::
<lambda_invoker_cdecl>(void)

{
  return 2;
}

// <lambda_invoker_cdecl> @ 142cccab0

int __cdecl
`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l154::<lambda_26>::
<lambda_invoker_cdecl>(void)

{
  return 4;
}

// TQueryFunction_Tests @ 142ce4550

TQueryFunction_Tests * __thiscall
UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TQueryFunction_Tests
          (TQueryFunction_Tests *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7TQueryFunction_Tests_Tests_Queries_DataStorage_Editor_UE__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][EngineFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,
                              "Editor::DataStorage::Queries::Query Function (TQueryFunction)");
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

// operator() @ 142ce5b60

void __thiscall
`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l105::<lambda_10>::
operator()(void *this,
          TQueryContext<UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>
          param_1)

{
  return;
}

// operator() @ 142ce5b70

void __thiscall
`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l109::<lambda_11>::
operator()(void *this,
          TQueryContext<UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>
          param_1)

{
  return;
}

// operator() @ 142ce5b80

bool __thiscall
`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l113::<lambda_12>::
operator()(void *this)

{
  return true;
}

// operator() @ 142ce5b90

void __thiscall
`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l117::<lambda_13>::
operator()(void *this,FTestColumnString *param_1)

{
  ::FString::operator=(&param_1->TestString,L"Callback");
  return;
}

// operator() @ 142ce5bb0

void __thiscall
`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l121::<lambda_14>::
operator()(void *this,FTestColumnString *param_1,FTestColumnInt *param_2)

{
  FScriptContainerElement *pFVar1;
  FString local_18;
  
  ::FString::PrintfImpl(&local_18,L"Test: %i");
  if (&param_1->TestString != &local_18) {
    pFVar1 = (param_1->TestString).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (param_1->TestString).Data.AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
    (param_1->TestString).Data.ArrayNum = local_18.Data.ArrayNum;
    (param_1->TestString).Data.ArrayMax = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 142ce5c30

void __thiscall
`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l125::<lambda_15>::
operator()(void *this,
          TQueryContext<UE::Editor::DataStorage::Queries::IRowBatchInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>
          param_1,TBatch<FTestColumnString> param_2,TBatch<FTestColumnInt_const_> param_3)

{
  uint uVar1;
  ulonglong uVar2;
  undefined1 local_res10 [8];
  undefined1 *local_res18 [2];
  FTestColumnString *local_18;
  FTestColumnInt *local_10;
  
  uVar1 = (**(code **)(*(longlong *)((longlong)param_1 + 8) + 8))((longlong)param_1 + 8);
  if (uVar1 != 0) {
    local_res18[0] = local_res10;
    uVar2 = (ulonglong)uVar1;
    local_18 = param_2.Values;
    local_10 = param_3.Values;
    do {
      Queries::Private::
      TForwarder<UE::Editor::DataStorage::Queries::IRowBatchInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>
      ::
      ForEachRow<``UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l125::<lambda_15>::operator()'::__l2::<lambda_1>,FTestColumnString,FTestColumnInt_const_>'
      ::__l4::<lambda_1>::operator()(local_res18,&local_18,&local_10);
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}

// operator() @ 142ce5ca0

void __thiscall
`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'[::E]::<lambda_17>::
operator()(void *this,
          TQueryContext<UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>
          param_1)

{
  UScriptStruct *local_res10 [3];
  UScriptStruct **local_18;
  undefined4 uStack_10;
  
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1);
  local_res10[0] = FTestColumnString::StaticStruct();
  local_18 = local_res10;
  uStack_10 = 1;
  (**(code **)(*(longlong *)param_1 + 8))(param_1,&local_18);
  return;
}

// operator() @ 142ce7720

void __thiscall
`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l3::<lambda_1>::
operator()(void *this)

{
  return;
}

// operator() @ 142ce78b0

void __thiscall
`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'[::L]::<lambda_20>::
operator()(void *this,
          TQueryContext<UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>
          param_1)

{
  UScriptStruct *local_res10 [3];
  UScriptStruct **local_18;
  undefined4 uStack_10;
  
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1);
  local_res10[0] = FTestColumnString::StaticStruct();
  local_18 = local_res10;
  uStack_10 = 1;
  (**(code **)(*(longlong *)param_1 + 8))(param_1,&local_18);
  return;
}

// operator() @ 142ce7910

bool __thiscall
`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l146::<lambda_23>::
operator()(void *this)

{
  return true;
}

// operator() @ 142ce7920

void __thiscall
`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l150::<lambda_24>::
operator()(void *this,TResult<bool> *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142ce7928. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)(param_1,1);
  return;
}

// operator() @ 142ce7940

void __thiscall
`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l154::<lambda_25>::
operator()(void *this,
          TQueryContext<UE::Editor::DataStorage::Queries::IRowBatchInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>
          param_1,TResult<int> *param_2,TBatch<FTestColumnInt_const_> param_3)

{
  int *piVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar2 = (**(code **)(*(longlong *)((longlong)param_1 + 8) + 8))((longlong)param_1 + 8);
  if (uVar2 != 0) {
    uVar3 = (ulonglong)uVar2;
    do {
      piVar1 = &(param_3.Values)->TestInt;
      param_3.Values = param_3.Values + 1;
      (**(code **)*param_2)(param_2,*piVar1);
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}

// operator() @ 142ce79a0

void __thiscall
`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l158::<lambda_27>::
operator()(void *this,EFlowControl *param_1,FTestColumnInt *param_2)

{
  **(int **)this = param_2->TestInt;
  *param_1 = Break;
  return;
}

// operator() @ 142ce9170

bool __thiscall
`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l13::<lambda_2>::
operator()(void *this)

{
  return false;
}

// operator() @ 142ce9f20

bool __thiscall
`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l23::<lambda_3>::
operator()(void *this)

{
  return (bool)**(undefined1 **)this;
}

// operator() @ 142cea640

void __thiscall
`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l33::<lambda_4>::
operator()(void *this,
          TQueryContext<UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>
          param_1)

{
  return;
}

// operator() @ 142cea650

void __thiscall
`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l43::<lambda_5>::
operator()(void *this,FTestColumnInt *param_1,FTestColumnString *param_2)

{
  return;
}

// operator() @ 142cea6e0

void __thiscall
`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l53::<lambda_6>::
operator()(void *this,
          TQueryContext<UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>
          param_1,FTestColumnInt *param_2,FTestColumnString *param_3)

{
  return;
}

// operator() @ 142cea900

void __thiscall
`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l69::<lambda_7>::
operator()(void *this,FTestColumnInt *param_1,
          TQueryContext<UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>
          param_2,FTestColumnString *param_3)

{
  return;
}

// operator() @ 142cea910

void __thiscall
`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l85::<lambda_8>::
operator()(void *this,
          TQueryContext<UE::Editor::DataStorage::Queries::IRowBatchInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>
          param_1,TBatch<FTestColumnInt> param_2,TBatch<FTestColumnString_const_> param_3)

{
  return;
}

// operator() @ 142cea920

void __thiscall
`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l101::<lambda_9>::
operator()(void *this)

{
  return;
}

