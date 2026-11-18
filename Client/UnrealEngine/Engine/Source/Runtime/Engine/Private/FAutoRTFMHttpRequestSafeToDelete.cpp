// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// GetTestFlags @ 1487d3e30

EAutomationTestFlags __thiscall
FAutoRTFMHttpRequestSafeToDelete::GetTestFlags(FAutoRTFMHttpRequestSafeToDelete *this)

{
  return EngineFilter|CommandletContext|ServerContext|ClientContext;
}

// IsStressTest @ 1487d3e40

bool __thiscall
FAutoRTFMHttpRequestSafeToDelete::IsStressTest(FAutoRTFMHttpRequestSafeToDelete *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1487d3e50

uint __thiscall
FAutoRTFMHttpRequestSafeToDelete::GetRequiredDeviceNum(FAutoRTFMHttpRequestSafeToDelete *this)

{
  return 1;
}

// GetTestSourceFileName @ 1487d3e60

FString * __thiscall
FAutoRTFMHttpRequestSafeToDelete::GetTestSourceFileName
          (FAutoRTFMHttpRequestSafeToDelete *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\AutoRTFM\\AutoRTFMHttpModuleTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1487d3e90

int __thiscall
FAutoRTFMHttpRequestSafeToDelete::GetTestSourceFileLine(FAutoRTFMHttpRequestSafeToDelete *this)

{
  return 0x1b0;
}

// GetTests @ 1487d3ea0

/* WARNING: Removing unreachable block (ram,0x0001487d3f8d) */
/* WARNING: Removing unreachable block (ram,0x0001487d4058) */

void __thiscall
FAutoRTFMHttpRequestSafeToDelete::GetTests
          (FAutoRTFMHttpRequestSafeToDelete *this,
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
  
  ::FString::FString(&local_18,"AutoRTFM + HttpRequestSafeToDelete");
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

// RunTest @ 1487d4080

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FAutoRTFMHttpRequestSafeToDelete::RunTest(FAutoRTFMHttpRequestSafeToDelete *this,FString *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  undefined1 auStack_148 [32];
  undefined8 *local_128;
  undefined1 *local_120;
  undefined8 local_118;
  TReferenceControllerBase<1> *pTStack_110;
  undefined1 local_108 [152];
  void *local_70;
  undefined4 local_68;
  ForAnyElementType local_60;
  ForAnyElementType local_50;
  ForAnyElementType local_38;
  int local_30;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_148;
  FHttpTestModule::FHttpTestModule((FHttpTestModule *)local_108);
  local_128 = (undefined8 *)local_108;
  AutoRTFM::AutoRTFMFunctorInvoker<_FAutoRTFMHttpRequestSafeToDelete::RunTest_::__l2::<lambda_1>_>
            (&local_128);
  local_128 = (undefined8 *)local_108;
  AutoRTFM::AutoRTFMFunctorInvoker<_FAutoRTFMHttpRequestSafeToDelete::RunTest_::__l2::<lambda_2>_>
            (&local_128);
  local_128 = &local_118;
  local_120 = local_108;
  local_118 = 0;
  pTStack_110 = (TReferenceControllerBase<1> *)0x0;
  AutoRTFM::AutoRTFMFunctorInvoker<_FAutoRTFMHttpRequestSafeToDelete::RunTest_::__l2::<lambda_3>_>
            (&local_128);
  pTVar3 = pTStack_110;
  local_118 = 0;
  if (pTStack_110 != (TReferenceControllerBase<1> *)0x0) {
    pTStack_110 = (TReferenceControllerBase<1> *)0x0;
    LOCK();
    paVar1 = &pTVar3->SharedReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)pTVar3->_padding_)();
      LOCK();
      paVar1 = &pTVar3->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_110);
  local_108._0_8_ = &FHttpTestModule::_vftable__for__IModuleInterface__;
  local_108._8_8_ = &FHttpTestModule::_vftable__for__FSelfRegisteringExec__;
  FHttpModule::ShutdownModule((FHttpModule *)local_108);
  DestructItems<FString,int>((FString *)local_38.Data,local_30);
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  if (local_50.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data);
  }
  if (local_60.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Data);
  }
  local_68 = 0;
  if (local_70 != (void *)0x0) {
    FMemory::Free(local_70);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_108 + 0x58));
  FSelfRegisteringExec::~FSelfRegisteringExec((FSelfRegisteringExec *)(local_108 + 8));
  return true;
}

// GetBeautifiedTestName @ 1487d4210

FString * __thiscall
FAutoRTFMHttpRequestSafeToDelete::GetBeautifiedTestName
          (FAutoRTFMHttpRequestSafeToDelete *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"AutoRTFM + HttpRequestSafeToDelete");
  return __return_storage_ptr__;
}

