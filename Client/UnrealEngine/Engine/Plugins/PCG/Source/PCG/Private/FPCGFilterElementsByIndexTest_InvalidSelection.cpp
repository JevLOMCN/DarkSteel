// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// GetTestFlags @ 149fb7710

EAutomationTestFlags __thiscall
FPCGFilterElementsByIndexTest_InvalidSelection::GetTestFlags
          (FPCGFilterElementsByIndexTest_InvalidSelection *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 149fb7720

bool __thiscall
FPCGFilterElementsByIndexTest_InvalidSelection::IsStressTest
          (FPCGFilterElementsByIndexTest_InvalidSelection *this)

{
  return false;
}

// GetRequiredDeviceNum @ 149fb7730

uint __thiscall
FPCGFilterElementsByIndexTest_InvalidSelection::GetRequiredDeviceNum
          (FPCGFilterElementsByIndexTest_InvalidSelection *this)

{
  return 1;
}

// GetTestSourceFileName @ 149fb7740

FString * __thiscall
FPCGFilterElementsByIndexTest_InvalidSelection::GetTestSourceFileName
          (FPCGFilterElementsByIndexTest_InvalidSelection *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGFilterByIndexTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 149fb77b0

int __thiscall
FPCGFilterElementsByIndexTest_InvalidSelection::GetTestSourceFileLine
          (FPCGFilterElementsByIndexTest_InvalidSelection *this)

{
  return 0x1bf;
}

// GetTests @ 149fb7800

/* WARNING: Removing unreachable block (ram,0x000149fb78ed) */
/* WARNING: Removing unreachable block (ram,0x000149fb79b8) */

void __thiscall
FPCGFilterElementsByIndexTest_InvalidSelection::GetTests
          (FPCGFilterElementsByIndexTest_InvalidSelection *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"Plugins.PCG.FilterElementsByIndex.InvalidSelection");
  pFVar4 = (param_1->AllocatorInstance).Data;
  if (((pFVar4 <= (FScriptContainerElement *)&local_18) &&
      ((FScriptContainerElement *)&local_18 < pFVar4 + (longlong)param_1->ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = param_1->ArrayNum;
  if (iVar3 == param_1->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar3 + 1;
  pFVar4 = (param_1->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar4 = 0;
  *(FScriptContainerElement **)pFVar4 = local_18.Data.AllocatorInstance.Data;
  *(int *)(pFVar4 + 8) = local_18.Data.ArrayNum;
  *(int *)(pFVar4 + 0xc) = local_18.Data.ArrayMax;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar4 = (param_2->AllocatorInstance).Data;
  local_28 = 0;
  local_20 = 0;
  if (((pFVar4 <= (FScriptContainerElement *)&local_28) &&
      ((FScriptContainerElement *)&local_28 < pFVar4 + (longlong)param_2->ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = param_2->ArrayNum;
  if (iVar3 == param_2->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar3 + 1;
  pFVar4 = (param_2->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar4 = 0;
  *(undefined8 *)pFVar4 = local_28;
  *(undefined4 *)(pFVar4 + 8) = (undefined4)local_20;
  *(undefined4 *)(pFVar4 + 0xc) = local_20._4_4_;
  return;
}

// RunTest @ 149fb79e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
FPCGFilterElementsByIndexTest_InvalidSelection::RunTest
          (FPCGFilterElementsByIndexTest_InvalidSelection *this,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  UPCGFilterElementsByIndexSettings *pUVar2;
  FString *pFVar3;
  FString *pFVar4;
  undefined1 auStackY_248 [32];
  undefined1 local_218 [8];
  undefined1 local_210 [16];
  undefined4 local_200 [2];
  undefined1 local_1f8 [16];
  TFunction<void___cdecl(PCGTestsCommon::FTestData_&)> local_1e8;
  FTestData local_1b8;
  FInsideOutsideFilterData local_128;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_248;
  local_1f8._0_8_ = Z_Construct_UClass_AActor_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UClass *)local_1f8._0_8_ != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_1f8._0_8_);
  }
  PCGTestsCommon::FTestData::FTestData
            (&local_1b8,0x2a,(UPCGSettings *)0x0,(TSubclassOf<AActor>)local_1f8);
  local_1e8._0_8_ = 0;
  local_1e8._40_8_ = 0;
  pUVar2 = PCGTestsCommon::GenerateSettings<UPCGFilterElementsByIndexSettings>
                     (&local_1b8,&local_1e8);
  pUVar2->bSelectIndicesByInput = false;
  local_200[0] = 10;
  pFVar3 = ::FString::FString((FString *)local_210,"Invalid expression in parsed string:");
  FAutomationTestBase::AddExpectedError((FAutomationTestBase *)this,pFVar3,Contains,2,true);
  pFVar4 = ::FString::FString((FString *)local_210,"4:0");
  pFVar3 = &pUVar2->SelectedIndices;
  if (pFVar3 != pFVar4) {
    pFVar1 = (pFVar3->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (pFVar3->Data).AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pUVar2->SelectedIndices).Data.ArrayNum = (pFVar4->Data).ArrayNum;
    (pUVar2->SelectedIndices).Data.ArrayMax = (pFVar4->Data).ArrayMax;
    (pFVar4->Data).ArrayNum = 0;
    (pFVar4->Data).ArrayMax = 0;
  }
  if ((FScriptContainerElement *)local_210._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_210._0_8_);
  }
  local_1f8._8_8_ = local_218;
  local_210._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`FPCGFilterElementsByIndexTest_InvalidSelection::RunTest'::__l2::<lambda_1>,UPCGData_*>
       ::Call;
  local_1f8._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`FPCGFilterElementsByIndexTest_InvalidSelection::RunTest'::__l3::<lambda_2>,UPCGData_*>
       ::Call;
  local_210._8_8_ = local_200;
  PCGFilterByIndexTest::Helpers::ResetAndExecuteElement
            (&local_128,&local_1b8,pUVar2,(TFunctionRef<UPCGData_*___cdecl(void)> *)local_210,
             (TFunctionRef<UPCGData_*___cdecl(void)> *)local_1f8);
  local_128.OutsideData.Tags.HashSize = 0;
  if (local_128.OutsideData.Tags.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_128.OutsideData.Tags.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_128.OutsideData.Tags.Elements);
  FPCGDataPtrWrapper::~FPCGDataPtrWrapper(&local_128.OutsideData.Data);
  local_128.InsideData.Tags.HashSize = 0;
  if (local_128.InsideData.Tags.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_128.InsideData.Tags.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_128.InsideData.Tags.Elements);
  FPCGDataPtrWrapper::~FPCGDataPtrWrapper((FPCGDataPtrWrapper *)&local_128);
  pFVar4 = ::FString::FString((FString *)local_210,"-1:-3");
  if (pFVar3 != pFVar4) {
    pFVar1 = (pFVar3->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (pFVar3->Data).AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pUVar2->SelectedIndices).Data.ArrayNum = (pFVar4->Data).ArrayNum;
    (pUVar2->SelectedIndices).Data.ArrayMax = (pFVar4->Data).ArrayMax;
    (pFVar4->Data).ArrayNum = 0;
    (pFVar4->Data).ArrayMax = 0;
  }
  if ((FScriptContainerElement *)local_210._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_210._0_8_);
  }
  local_210._8_8_ = local_218;
  local_1f8._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`FPCGFilterElementsByIndexTest_InvalidSelection::RunTest'::__l2::<lambda_1>,UPCGData_*>
       ::Call;
  local_210._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`FPCGFilterElementsByIndexTest_InvalidSelection::RunTest'::__l4::<lambda_3>,UPCGData_*>
       ::Call;
  local_1f8._8_8_ = local_200;
  PCGFilterByIndexTest::Helpers::ResetAndExecuteElement
            (&local_128,&local_1b8,pUVar2,(TFunctionRef<UPCGData_*___cdecl(void)> *)local_1f8,
             (TFunctionRef<UPCGData_*___cdecl(void)> *)local_210);
  local_128.OutsideData.Tags.HashSize = 0;
  if (local_128.OutsideData.Tags.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_128.OutsideData.Tags.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_128.OutsideData.Tags.Elements);
  FPCGDataPtrWrapper::~FPCGDataPtrWrapper(&local_128.OutsideData.Data);
  local_128.InsideData.Tags.HashSize = 0;
  if (local_128.InsideData.Tags.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_128.InsideData.Tags.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_128.InsideData.Tags.Elements);
  FPCGDataPtrWrapper::~FPCGDataPtrWrapper((FPCGDataPtrWrapper *)&local_128);
  pFVar4 = ::FString::FString((FString *)local_210,"Invalid character in parsed string:");
  FAutomationTestBase::AddExpectedError((FAutomationTestBase *)this,pFVar4,Contains,1,true);
  pFVar4 = ::FString::FString((FString *)local_210,"0,2:3,4*");
  if (pFVar3 != pFVar4) {
    pFVar1 = (pFVar3->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (pFVar3->Data).AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pUVar2->SelectedIndices).Data.ArrayNum = (pFVar4->Data).ArrayNum;
    (pUVar2->SelectedIndices).Data.ArrayMax = (pFVar4->Data).ArrayMax;
    (pFVar4->Data).ArrayNum = 0;
    (pFVar4->Data).ArrayMax = 0;
  }
  if ((FScriptContainerElement *)local_210._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_210._0_8_);
  }
  local_210._8_8_ = local_218;
  local_1f8._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`FPCGFilterElementsByIndexTest_InvalidSelection::RunTest'::__l2::<lambda_1>,UPCGData_*>
       ::Call;
  local_210._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`FPCGFilterElementsByIndexTest_InvalidSelection::RunTest'::__l5::<lambda_4>,UPCGData_*>
       ::Call;
  local_1f8._8_8_ = local_200;
  PCGFilterByIndexTest::Helpers::ResetAndExecuteElement
            (&local_128,&local_1b8,pUVar2,(TFunctionRef<UPCGData_*___cdecl(void)> *)local_1f8,
             (TFunctionRef<UPCGData_*___cdecl(void)> *)local_210);
  local_128.OutsideData.Tags.HashSize = 0;
  if (local_128.OutsideData.Tags.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_128.OutsideData.Tags.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_128.OutsideData.Tags.Elements);
  FPCGDataPtrWrapper::~FPCGDataPtrWrapper(&local_128.OutsideData.Data);
  local_128.InsideData.Tags.HashSize = 0;
  if (local_128.InsideData.Tags.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_128.InsideData.Tags.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_128.InsideData.Tags.Elements);
  FPCGDataPtrWrapper::~FPCGDataPtrWrapper((FPCGDataPtrWrapper *)&local_128);
  PCGTestsCommon::FTestData::~FTestData(&local_1b8);
  return true;
}

// GetBeautifiedTestName @ 149fb7dd0

FString * __thiscall
FPCGFilterElementsByIndexTest_InvalidSelection::GetBeautifiedTestName
          (FPCGFilterElementsByIndexTest_InvalidSelection *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Plugins.PCG.FilterElementsByIndex.InvalidSelection");
  return __return_storage_ptr__;
}

