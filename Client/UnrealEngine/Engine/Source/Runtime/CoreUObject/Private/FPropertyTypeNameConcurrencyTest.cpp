// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 11

// GetTestFlags @ 1422c7c70

EAutomationTestFlags __thiscall
UE::FPropertyTypeNameConcurrencyTest::GetTestFlags(FPropertyTypeNameConcurrencyTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 1422c7c80

bool __thiscall
UE::FPropertyTypeNameConcurrencyTest::IsStressTest(FPropertyTypeNameConcurrencyTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1422c7c90

uint __thiscall
UE::FPropertyTypeNameConcurrencyTest::GetRequiredDeviceNum(FPropertyTypeNameConcurrencyTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 1422c7ca0

FString * __thiscall
UE::FPropertyTypeNameConcurrencyTest::GetTestSourceFileName
          (FPropertyTypeNameConcurrencyTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Tests\\UObject\\PropertyTypeNameTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1422c7cd0

int __thiscall
UE::FPropertyTypeNameConcurrencyTest::GetTestSourceFileLine(FPropertyTypeNameConcurrencyTest *this)

{
  return 0x1ca;
}

// GetTests @ 1422c7ce0

/* WARNING: Removing unreachable block (ram,0x0001422c7e5e) */

void __thiscall
UE::FPropertyTypeNameConcurrencyTest::GetTests
          (FPropertyTypeNameConcurrencyTest *this,
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

// RunTest @ 1422c7e80

bool __thiscall
UE::FPropertyTypeNameConcurrencyTest::RunTest
          (FPropertyTypeNameConcurrencyTest *this,FString *param_1)

{
  bool bVar1;
  FName *pFVar2;
  FName local_res18;
  FName local_res20;
  TArrayView<std::nullptr_t,int> local_28;
  code *local_18;
  FName *local_10;
  
  pFVar2 = ::FName::FName(&local_res20,10,"TestStruct",FNAME_Add);
  local_28.DataPtr = (void **)0x0;
  local_28.ArrayNum = 0;
  local_res18 = *pFVar2;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::FPropertyTypeNameConcurrencyTest::TestBody'::__l2::<lambda_1>,void,int>
             ::Call;
  local_10 = &local_res18;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"PropertyTypeNameConcurrencyTest",0x10000,1,
             (TFunctionRef<void___cdecl(int)> *)&local_18,local_res18.ComparisonIndex.Value._0_1_,
             None,&local_28);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 1422c7f30

FString * __thiscall
UE::FPropertyTypeNameConcurrencyTest::GetBeautifiedTestName
          (FPropertyTypeNameConcurrencyTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FPropertyTypeNameConcurrencyTest @ 1422cdee0

FPropertyTypeNameConcurrencyTest * __thiscall
UE::FPropertyTypeNameConcurrencyTest::FPropertyTypeNameConcurrencyTest
          (FPropertyTypeNameConcurrencyTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FPropertyTypeNameConcurrencyTest_UE__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[Core][UObject][EngineFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"CoreUObject::PropertyTypeName::Concurrency");
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
  ::FString::FString(&local_18,"[Core][UObject][EngineFilter]");
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

// operator() @ 1422d1e00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UE::FPropertyTypeNameConcurrencyTest::TestBody'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  FName FVar1;
  FName FVar2;
  FName FVar3;
  FName FVar4;
  FNameEntryId FVar5;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  uint uVar6;
  uint uVar7;
  undefined1 auStack_128 [32];
  uint local_108;
  uint uStack_104;
  FPropertyTypeNameBuilder local_f8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_128;
  local_f8.Nodes.ArrayMax = 10;
  local_f8.Nodes.AllocatorInstance.SecondaryData = (ForElementType<UE::FPropertyTypeNameNode>)0x0;
  local_f8.Nodes.ArrayNum = 0;
  local_f8.OuterNodeIndex.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  local_f8.OuterNodeIndex.ArrayNum = 0;
  local_f8.OuterNodeIndex.ArrayMax = 10;
  local_f8.ActiveIndex = -1;
  uVar6 = param_1 & 0x80000007;
  if ((int)uVar6 < 0) {
    uVar6 = (uVar6 - 1 | 0xfffffff8) + 1;
  }
  if (uVar6 == 0) {
    FVar5 = FNameEntryId::FromValidEName((EName)&local_108);
    local_108 = *(uint *)CONCAT44(extraout_var,FVar5.Value);
    uStack_104 = 0;
    FVar1.Number = 0;
    FVar1.ComparisonIndex.Value = local_108;
    UE::FPropertyTypeNameBuilder::AddName(&local_f8,FVar1);
    UE::FPropertyTypeNameBuilder::BeginParameters(&local_f8);
  }
  uVar7 = param_1 & 0x80000003;
  if ((int)uVar7 < 0) {
    uVar7 = (uVar7 - 1 | 0xfffffffc) + 1;
  }
  if (uVar7 == 0) {
    FVar5 = FNameEntryId::FromValidEName((EName)&local_108);
    local_108 = *(uint *)CONCAT44(extraout_var_00,FVar5.Value);
    uStack_104 = 0;
    FVar2.Number = 0;
    FVar2.ComparisonIndex.Value = local_108;
    UE::FPropertyTypeNameBuilder::AddName(&local_f8,FVar2);
    UE::FPropertyTypeNameBuilder::BeginParameters(&local_f8);
  }
  FVar5 = FNameEntryId::FromValidEName((EName)&local_108);
  local_108 = *(uint *)CONCAT44(extraout_var_01,FVar5.Value);
  uStack_104 = 0;
  FVar3.Number = 0;
  FVar3.ComparisonIndex.Value = local_108;
  UE::FPropertyTypeNameBuilder::AddName(&local_f8,FVar3);
  UE::FPropertyTypeNameBuilder::BeginParameters(&local_f8);
  local_108 = *(uint *)this;
  uStack_104 = param_1 + 1;
  FVar4.Number = uStack_104;
  FVar4.ComparisonIndex.Value = local_108;
  UE::FPropertyTypeNameBuilder::AddName(&local_f8,FVar4);
  UE::FPropertyTypeNameBuilder::EndParameters(&local_f8);
  if (uVar7 == 0) {
    UE::FPropertyTypeNameBuilder::EndParameters(&local_f8);
  }
  if (uVar6 == 0) {
    UE::FPropertyTypeNameBuilder::EndParameters(&local_f8);
  }
  UE::FPropertyTypeNameBuilder::Build(&local_f8);
  if (local_f8.OuterNodeIndex.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
    FMemory::Free((void *)local_f8.OuterNodeIndex.AllocatorInstance.SecondaryData);
  }
  if (local_f8.Nodes.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::FPropertyTypeNameNode>)0x0) {
    FMemory::Free((void *)local_f8.Nodes.AllocatorInstance.SecondaryData);
  }
  return;
}

// TestBody @ 1422f5ab0

void __thiscall
UE::FPropertyTypeNameConcurrencyTest::TestBody
          (FPropertyTypeNameConcurrencyTest *this,FString *param_1)

{
  FName *pFVar1;
  FName local_res18;
  FName local_res20;
  TArrayView<std::nullptr_t,int> local_28;
  code *local_18;
  FName *local_10;
  
  pFVar1 = ::FName::FName(&local_res20,10,"TestStruct",FNAME_Add);
  local_res18 = *pFVar1;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::FPropertyTypeNameConcurrencyTest::TestBody'::__l2::<lambda_1>,void,int>
             ::Call;
  local_10 = &local_res18;
  local_28.DataPtr = (void **)0x0;
  local_28.ArrayNum = 0;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"PropertyTypeNameConcurrencyTest",0x10000,1,
             (TFunctionRef<void___cdecl(int)> *)&local_18,local_res18.ComparisonIndex.Value._0_1_,
             None,&local_28);
  return;
}

