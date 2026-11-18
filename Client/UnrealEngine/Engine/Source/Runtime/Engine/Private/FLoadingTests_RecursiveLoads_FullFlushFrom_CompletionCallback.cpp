// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// GetTestFlags @ 148875050

EAutomationTestFlags __thiscall
FLoadingTests_RecursiveLoads_FullFlushFrom_CompletionCallback::GetTestFlags
          (FLoadingTests_RecursiveLoads_FullFlushFrom_CompletionCallback *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 148875060

bool __thiscall
FLoadingTests_RecursiveLoads_FullFlushFrom_CompletionCallback::IsStressTest
          (FLoadingTests_RecursiveLoads_FullFlushFrom_CompletionCallback *this)

{
  return false;
}

// GetRequiredDeviceNum @ 148875070

uint __thiscall
FLoadingTests_RecursiveLoads_FullFlushFrom_CompletionCallback::GetRequiredDeviceNum
          (FLoadingTests_RecursiveLoads_FullFlushFrom_CompletionCallback *this)

{
  return 1;
}

// GetTestSourceFileName @ 148875080

FString * __thiscall
FLoadingTests_RecursiveLoads_FullFlushFrom_CompletionCallback::GetTestSourceFileName
          (FLoadingTests_RecursiveLoads_FullFlushFrom_CompletionCallback *this,
          FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\Loading\\AsyncLoadingTests_RecursiveLoads.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1488750b0

int __thiscall
FLoadingTests_RecursiveLoads_FullFlushFrom_CompletionCallback::GetTestSourceFileLine
          (FLoadingTests_RecursiveLoads_FullFlushFrom_CompletionCallback *this)

{
  return 0x133;
}

// GetTests @ 1488750c0

/* WARNING: Removing unreachable block (ram,0x0001488751ad) */
/* WARNING: Removing unreachable block (ram,0x000148875278) */

void __thiscall
FLoadingTests_RecursiveLoads_FullFlushFrom_CompletionCallback::GetTests
          (FLoadingTests_RecursiveLoads_FullFlushFrom_CompletionCallback *this,
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
  
  ::FString::FString(&local_18,
                     L"System.Engine.Loading.RecursiveLoads.FullFlushFrom.CompletionCallback");
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

// RunTest @ 1488752a0

bool __thiscall
FLoadingTests_RecursiveLoads_FullFlushFrom_CompletionCallback::RunTest
          (FLoadingTests_RecursiveLoads_FullFlushFrom_CompletionCallback *this,FString *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  bool local_res8 [8];
  bool local_res18 [8];
  undefined1 local_c8 [8];
  FDelegateAllocation local_c0;
  FString local_b0;
  undefined1 local_98 [16];
  bool local_88;
  FDelegateAllocation *local_80;
  undefined8 local_70;
  FLoadingTestsScope local_68;
  
  local_98._0_8_ = 0;
  local_70 = 0;
  FLoadingTestsScope::FLoadingTestsScope
            (&local_68,(FAutomationTestBase *)this,
             (TFunction<void___cdecl(FLoadingTestsScope_&)> *)local_98);
  local_res8[0] = false;
  local_res18[0] = false;
  local_c8 = (undefined1  [8])0x0;
  local_c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_c0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
             (FWriteAccessScope *)local_98);
  local_80 = &local_c0;
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,&local_c0);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVFName__PEAVUPackage__W4Type_EAsyncLoadingResult___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(FName_const_&,UPackage_*,enum_EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy,`FLoadingTests_RecursiveLoads_FullFlushFrom_CompletionCallback::RunTest'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar2[3] = this;
    puVar2[4] = local_res8;
    puVar2[5] = local_res18;
  }
  if (local_88 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_98._8_8_,(FDestructionSentinel *)local_98);
  }
  ::FString::FString(&local_b0,L"/Engine/LoadingTestsScope_Package1");
  iVar1 = LoadPackageAsync(&local_b0,
                           (TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>
                            *)local_c8,0,PKG_None,-1);
  if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.Data.AllocatorInstance.Data);
  }
  FlushAsyncLoading(iVar1);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"Callback function 1 should have been called",
             local_res8[0]);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"Callback function 2 should have been called",
             local_res18[0]);
  FLoadingTestsScope::~FLoadingTestsScope(&local_68);
  return true;
}

// GetBeautifiedTestName @ 1488753f0

FString * __thiscall
FLoadingTests_RecursiveLoads_FullFlushFrom_CompletionCallback::GetBeautifiedTestName
          (FLoadingTests_RecursiveLoads_FullFlushFrom_CompletionCallback *this,
          FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     L"System.Engine.Loading.RecursiveLoads.FullFlushFrom.CompletionCallback");
  return __return_storage_ptr__;
}

// operator() @ 148880a30

void __thiscall
`FLoadingTests_RecursiveLoads_FullFlushFrom_CompletionCallback::RunTest'::__l2::<lambda_1>::
operator()(void *this,FName *param_1,UPackage *param_2,Type param_3)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FString local_58;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  **(undefined1 **)((longlong)this + 8) = 1;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVFName__PEAVUPackage__W4Type_EAsyncLoadingResult___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(FName_const_&,UPackage_*,enum_EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy,``FLoadingTests_RecursiveLoads_FullFlushFrom_CompletionCallback::RunTest'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = uVar1;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  ::FString::FString(&local_58,L"/Engine/LoadingTestsScope_Package2");
  iVar2 = LoadPackageAsync(&local_58,
                           (TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>
                            *)local_48,0,PKG_None,-1);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  FlushAsyncLoading(iVar2);
  FAutomationTestBase::TestTrue
            (*(FAutomationTestBase **)this,L"Callback function 2 should have been called",
             *(bool *)*(undefined8 *)((longlong)this + 0x10));
  return;
}

