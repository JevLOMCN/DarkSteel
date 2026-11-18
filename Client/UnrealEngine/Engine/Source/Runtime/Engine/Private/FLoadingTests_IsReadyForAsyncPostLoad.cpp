// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// GetTestFlags @ 1488700a0

EAutomationTestFlags __thiscall
FLoadingTests_IsReadyForAsyncPostLoad::GetTestFlags(FLoadingTests_IsReadyForAsyncPostLoad *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 1488700b0

bool __thiscall
FLoadingTests_IsReadyForAsyncPostLoad::IsStressTest(FLoadingTests_IsReadyForAsyncPostLoad *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1488700c0

uint __thiscall
FLoadingTests_IsReadyForAsyncPostLoad::GetRequiredDeviceNum
          (FLoadingTests_IsReadyForAsyncPostLoad *this)

{
  return 1;
}

// GetTestSourceFileName @ 1488700d0

FString * __thiscall
FLoadingTests_IsReadyForAsyncPostLoad::GetTestSourceFileName
          (FLoadingTests_IsReadyForAsyncPostLoad *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\Loading\\AsyncLoadingTests_IsReadyForAsyncPostLoad.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 148870100

int __thiscall
FLoadingTests_IsReadyForAsyncPostLoad::GetTestSourceFileLine
          (FLoadingTests_IsReadyForAsyncPostLoad *this)

{
  return 0xd;
}

// GetTests @ 148870110

/* WARNING: Removing unreachable block (ram,0x0001488701fd) */
/* WARNING: Removing unreachable block (ram,0x0001488702c8) */

void __thiscall
FLoadingTests_IsReadyForAsyncPostLoad::GetTests
          (FLoadingTests_IsReadyForAsyncPostLoad *this,
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
  
  ::FString::FString(&local_18,L"System.Engine.Loading.IsReadyForAsyncPostLoad.Tick");
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

// RunTest @ 1488702f0

bool __thiscall
FLoadingTests_IsReadyForAsyncPostLoad::RunTest
          (FLoadingTests_IsReadyForAsyncPostLoad *this,FString *param_1)

{
  code *pcVar1;
  FScriptContainerElement FVar2;
  Type TVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  ForAnyElementType FVar6;
  FScriptContainerElement local_res18 [8];
  undefined1 local_res20 [8];
  FString local_c8;
  undefined1 local_b8 [16];
  TFunction<void___cdecl(FLoadingTestsScope_&)> local_a8;
  FLoadingTestsScope local_78;
  
  local_a8._0_8_ = 0;
  local_a8._40_8_ = 0;
  FLoadingTestsScope::FLoadingTestsScope(&local_78,(FAutomationTestBase *)this,&local_a8);
  local_res20[0] = 0;
  puVar4 = UE::Core::Private::DelegateAllocate
                     (0x20,(FDelegateAllocation *)
                           &UAsyncLoadingTests_Shared::OnIsReadyForAsyncPostLoad);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6A_NPEBVUAsyncLoadingTests_Shared___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &TBaseFunctorDelegateInstance<bool___cdecl(UAsyncLoadingTests_Shared_const_*),FNotThreadSafeNotCheckedDelegateUserPolicy,`FLoadingTests_IsReadyForAsyncPostLoad::RunTest'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar4[3] = local_res20;
  }
  local_res18[0] = (FScriptContainerElement)0x0;
  puVar4 = UE::Core::Private::DelegateAllocate
                     (0x20,(FDelegateAllocation *)&UAsyncLoadingTests_Shared::OnPostLoad);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUAsyncLoadingTests_Shared___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &TBaseFunctorDelegateInstance<void___cdecl(UAsyncLoadingTests_Shared_*),FNotThreadSafeNotCheckedDelegateUserPolicy,`FLoadingTests_IsReadyForAsyncPostLoad::RunTest'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar4[3] = local_res18;
  }
  ::FString::FString(&local_c8,L"/Engine/LoadingTestsScope_Package1");
  LoadPackageAsync(&local_c8,(FGuid *)0x0);
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  local_c8.Data.AllocatorInstance.Data = local_res18;
  local_b8._8_8_ = &local_c8;
  local_b8._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`FLoadingTests_IsReadyForAsyncPostLoad::RunTest'::__l2::<lambda_3>,bool>::
       Call;
  TVar3 = ProcessAsyncLoadingUntilComplete
                    ((TFunctionRef<bool___cdecl(void)> *)local_b8,__real_4014000000000000);
  ::FString::FString(&local_c8,
                     "Async loading should not have been able to complete due to bIsReadyForAsyncPostLoad being false"
                    );
  if (TVar3 == Complete) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)local_b8,L"%s: The two values are equal.");
    (*pcVar1)(this,local_b8,0);
    if ((FScriptContainerElement *)local_b8._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_b8._0_8_);
    }
  }
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  FVar2 = local_res18[0];
  ::FString::FString(&local_c8,"No postload should have been called");
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_c8.Data.ArrayNum != 0) {
    FVar6.Data = local_c8.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestFalse((FAutomationTestBase *)this,(wchar_t *)FVar6.Data,(bool)FVar2);
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  local_c8.Data.AllocatorInstance.Data = local_res18;
  local_b8._8_8_ = &local_c8;
  local_res20[0] = 1;
  local_b8._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`FLoadingTests_IsReadyForAsyncPostLoad::RunTest'::__l2::<lambda_4>,bool>::
       Call;
  TVar3 = ProcessAsyncLoadingUntilComplete
                    ((TFunctionRef<bool___cdecl(void)> *)local_b8,__real_3ff0000000000000);
  ::FString::FString(&local_c8,"AsyncLoading should now be complete");
  if (TVar3 != Complete) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)local_b8,L"%s: The two values are not equal.");
    (*pcVar1)(this,local_b8,0);
    if ((FScriptContainerElement *)local_b8._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_b8._0_8_);
    }
  }
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  FVar2 = local_res18[0];
  ::FString::FString(&local_c8,"Postload should have been called");
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_c8.Data.ArrayNum != 0) {
    FVar6.Data = local_c8.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar6.Data,(bool)FVar2);
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  FLoadingTestsScope::~FLoadingTestsScope(&local_78);
  return true;
}

// GetBeautifiedTestName @ 1488705a0

FString * __thiscall
FLoadingTests_IsReadyForAsyncPostLoad::GetBeautifiedTestName
          (FLoadingTests_IsReadyForAsyncPostLoad *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"System.Engine.Loading.IsReadyForAsyncPostLoad.Tick");
  return __return_storage_ptr__;
}

