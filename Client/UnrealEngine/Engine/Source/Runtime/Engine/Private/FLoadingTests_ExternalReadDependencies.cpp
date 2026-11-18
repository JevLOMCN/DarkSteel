// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// GetTestFlags @ 14886f290

EAutomationTestFlags __thiscall
FLoadingTests_ExternalReadDependencies::GetTestFlags(FLoadingTests_ExternalReadDependencies *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 14886f2a0

bool __thiscall
FLoadingTests_ExternalReadDependencies::IsStressTest(FLoadingTests_ExternalReadDependencies *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14886f2b0

uint __thiscall
FLoadingTests_ExternalReadDependencies::GetRequiredDeviceNum
          (FLoadingTests_ExternalReadDependencies *this)

{
  return 1;
}

// GetTestSourceFileName @ 14886f2c0

FString * __thiscall
FLoadingTests_ExternalReadDependencies::GetTestSourceFileName
          (FLoadingTests_ExternalReadDependencies *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\Loading\\AsyncLoadingTests_ExternalReadDependencies.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14886f2f0

int __thiscall
FLoadingTests_ExternalReadDependencies::GetTestSourceFileLine
          (FLoadingTests_ExternalReadDependencies *this)

{
  return 0xd;
}

// GetTests @ 14886f300

/* WARNING: Removing unreachable block (ram,0x00014886f3ed) */
/* WARNING: Removing unreachable block (ram,0x00014886f4b8) */

void __thiscall
FLoadingTests_ExternalReadDependencies::GetTests
          (FLoadingTests_ExternalReadDependencies *this,
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
  
  ::FString::FString(&local_18,L"System.Engine.Loading.ExternalReadDependencies");
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

// RunTest @ 14886f4e0

bool __thiscall
FLoadingTests_ExternalReadDependencies::RunTest
          (FLoadingTests_ExternalReadDependencies *this,FString *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  int local_res8 [2];
  FString local_a8;
  TFunction<void___cdecl(FLoadingTestsScope_&)> local_98;
  FLoadingTestsScope local_68;
  
  local_98._0_8_ = 0;
  local_98._40_8_ = 0;
  FLoadingTestsScope::FLoadingTestsScope(&local_68,(FAutomationTestBase *)this,&local_98);
  local_res8[0] = 0;
  puVar2 = UE::Core::Private::DelegateAllocate
                     (0x28,(FDelegateAllocation *)&UAsyncLoadingTests_Shared::OnSerialize);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFArchive__PEAVUAsyncLoadingTests_Shared___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(FArchive_&,UAsyncLoadingTests_Shared_*),FNotThreadSafeNotCheckedDelegateUserPolicy,`FLoadingTests_ExternalReadDependencies::RunTest'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar2[3] = this;
    puVar2[4] = local_res8;
  }
  ::FString::FString(&local_a8,L"/Engine/LoadingTestsScope_Package1");
  iVar1 = LoadPackageAsync(&local_a8,(FGuid *)0x0);
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  FlushAsyncLoading(iVar1);
  bVar5 = local_res8[0] != 0;
  ::FString::FString(&local_a8,"ExternalReadDependency callbacks should have been called");
  FVar4.Data = (FScriptContainerElement *)L"";
  if (local_a8.Data.ArrayNum != 0) {
    FVar4.Data = local_a8.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar4.Data,bVar5);
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  FLoadingTestsScope::~FLoadingTestsScope(&local_68);
  return true;
}

// GetBeautifiedTestName @ 14886f600

FString * __thiscall
FLoadingTests_ExternalReadDependencies::GetBeautifiedTestName
          (FLoadingTests_ExternalReadDependencies *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"System.Engine.Loading.ExternalReadDependencies");
  return __return_storage_ptr__;
}

// operator() @ 1488807e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`FLoadingTests_ExternalReadDependencies::RunTest'::__l2::<lambda_1>::operator()
          (void *this,FArchive *param_1,UAsyncLoadingTests_Shared *param_2)

{
  undefined ***pppuVar1;
  undefined1 auStack_68 [32];
  code *local_48 [2];
  undefined **local_38;
  undefined8 local_30;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_20 = (undefined ***)0x0;
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<``FLoadingTests_ExternalReadDependencies::RunTest'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_30 = *(undefined8 *)((longlong)this + 8);
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<``FLoadingTests_ExternalReadDependencies::RunTest'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,bool,double>
                ::Call;
  (**(code **)(*(longlong *)param_1 + 0x250))(param_1,local_48);
  if (local_48[0] != (code *)0x0) {
    pppuVar1 = &local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar1 = local_20;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  return;
}

