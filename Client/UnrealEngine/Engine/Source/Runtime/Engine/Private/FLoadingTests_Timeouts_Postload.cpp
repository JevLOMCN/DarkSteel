// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// GetTestFlags @ 148876ce0

EAutomationTestFlags __thiscall
FLoadingTests_Timeouts_Postload::GetTestFlags(FLoadingTests_Timeouts_Postload *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 148876cf0

bool __thiscall FLoadingTests_Timeouts_Postload::IsStressTest(FLoadingTests_Timeouts_Postload *this)

{
  return false;
}

// GetRequiredDeviceNum @ 148876d00

uint __thiscall
FLoadingTests_Timeouts_Postload::GetRequiredDeviceNum(FLoadingTests_Timeouts_Postload *this)

{
  return 1;
}

// GetTestSourceFileName @ 148876d10

FString * __thiscall
FLoadingTests_Timeouts_Postload::GetTestSourceFileName
          (FLoadingTests_Timeouts_Postload *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\Loading\\AsyncLoadingTests_Timeouts.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 148876d40

int __thiscall
FLoadingTests_Timeouts_Postload::GetTestSourceFileLine(FLoadingTests_Timeouts_Postload *this)

{
  return 0xe;
}

// GetTests @ 148876d50

/* WARNING: Removing unreachable block (ram,0x000148876e3d) */
/* WARNING: Removing unreachable block (ram,0x000148876f08) */

void __thiscall
FLoadingTests_Timeouts_Postload::GetTests
          (FLoadingTests_Timeouts_Postload *this,
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
  
  ::FString::FString(&local_18,L"System.Engine.Loading.Timeouts.Postload");
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

// RunTest @ 148876f30

bool __thiscall
FLoadingTests_Timeouts_Postload::RunTest(FLoadingTests_Timeouts_Postload *this,FString *param_1)

{
  code *pcVar1;
  int iVar2;
  Type TVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  ForAnyElementType FVar6;
  int local_res8 [2];
  int *local_res18;
  int *local_res20;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  code *local_d8;
  int **local_d0;
  FString local_c8;
  code *local_b8;
  int **local_b0;
  TFunction<void___cdecl(FLoadingTestsScope_&)> local_a8;
  FLoadingTestsScope local_78;
  
  local_a8._0_8_ = 0;
  local_a8._40_8_ = 0;
  FLoadingTestsScope::FLoadingTestsScope(&local_78,(FAutomationTestBase *)this,&local_a8);
  local_res8[0] = 0;
  puVar4 = UE::Core::Private::DelegateAllocate
                     (0x28,(FDelegateAllocation *)&UAsyncLoadingTests_Shared::OnPostLoad);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUAsyncLoadingTests_Shared___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &TBaseFunctorDelegateInstance<void___cdecl(UAsyncLoadingTests_Shared_*),FNotThreadSafeNotCheckedDelegateUserPolicy,`FLoadingTests_Timeouts_Postload::RunTest'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar4[3] = this;
    puVar4[4] = local_res8;
  }
  ::FString::FString(&local_f8,L"/Engine/LoadingTestsScope_Package1");
  LoadPackageAsync(&local_f8,(FGuid *)0x0);
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_e8,L"/Engine/LoadingTestsScope_Package2");
  LoadPackageAsync(&local_e8,(FGuid *)0x0);
  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  local_res18 = local_res8;
  local_d0 = &local_res18;
  local_d8 = UE::Core::Private::Function::
             TFunctionRefCaller<`FLoadingTests_Timeouts_Postload::RunTest'::__l2::<lambda_2>,bool>::
             Call;
  TVar3 = ProcessAsyncLoadingUntilComplete
                    ((TFunctionRef<bool___cdecl(void)> *)&local_d8,__real_3ff0000000000000);
  ::FString::FString(&local_138,"Async loading should have timed out");
  if (TVar3 != TimeOut) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_c8,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_c8,0);
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
  }
  if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Data.AllocatorInstance.Data);
  }
  iVar2 = local_res8[0];
  ::FString::FString(&local_128,
                     "Only the first package should have been postloaded due to the timeout");
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_128.Data.ArrayNum != 0) {
    FVar6.Data = local_128.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual((FAutomationTestBase *)this,(wchar_t *)FVar6.Data,iVar2,1);
  if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data.AllocatorInstance.Data);
  }
  local_res20 = local_res8;
  local_b0 = &local_res20;
  local_b8 = UE::Core::Private::Function::
             TFunctionRefCaller<`FLoadingTests_Timeouts_Postload::RunTest'::__l2::<lambda_3>,bool>::
             Call;
  TVar3 = ProcessAsyncLoadingUntilComplete
                    ((TFunctionRef<bool___cdecl(void)> *)&local_b8,__real_4014000000000000);
  ::FString::FString(&local_118,"Async loading should not have timeout on the second wait");
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_118.Data.ArrayNum != 0) {
    FVar6.Data = local_118.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,(wchar_t *)FVar6.Data,TVar3 - PendingImports < 2);
  if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data.AllocatorInstance.Data);
  }
  iVar2 = local_res8[0];
  ::FString::FString(&local_108,"All packages should have been postloaded by now");
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_108.Data.ArrayNum != 0) {
    FVar6.Data = local_108.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual((FAutomationTestBase *)this,(wchar_t *)FVar6.Data,iVar2,2);
  if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
  }
  FLoadingTestsScope::~FLoadingTestsScope(&local_78);
  return true;
}

// GetBeautifiedTestName @ 1488771b0

FString * __thiscall
FLoadingTests_Timeouts_Postload::GetBeautifiedTestName
          (FLoadingTests_Timeouts_Postload *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"System.Engine.Loading.Timeouts.Postload");
  return __return_storage_ptr__;
}

