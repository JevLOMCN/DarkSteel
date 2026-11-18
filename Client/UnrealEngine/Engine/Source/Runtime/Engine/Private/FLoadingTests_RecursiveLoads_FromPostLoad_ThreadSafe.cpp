// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// GetTestFlags @ 148872fc0

EAutomationTestFlags __thiscall
FLoadingTests_RecursiveLoads_FromPostLoad_ThreadSafe::GetTestFlags
          (FLoadingTests_RecursiveLoads_FromPostLoad_ThreadSafe *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 148872fd0

bool __thiscall
FLoadingTests_RecursiveLoads_FromPostLoad_ThreadSafe::IsStressTest
          (FLoadingTests_RecursiveLoads_FromPostLoad_ThreadSafe *this)

{
  return false;
}

// GetRequiredDeviceNum @ 148872fe0

uint __thiscall
FLoadingTests_RecursiveLoads_FromPostLoad_ThreadSafe::GetRequiredDeviceNum
          (FLoadingTests_RecursiveLoads_FromPostLoad_ThreadSafe *this)

{
  return 1;
}

// GetTestSourceFileName @ 148872ff0

FString * __thiscall
FLoadingTests_RecursiveLoads_FromPostLoad_ThreadSafe::GetTestSourceFileName
          (FLoadingTests_RecursiveLoads_FromPostLoad_ThreadSafe *this,
          FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\Loading\\AsyncLoadingTests_RecursiveLoads.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 148873020

int __thiscall
FLoadingTests_RecursiveLoads_FromPostLoad_ThreadSafe::GetTestSourceFileLine
          (FLoadingTests_RecursiveLoads_FromPostLoad_ThreadSafe *this)

{
  return 0x55;
}

// GetTests @ 148873030

/* WARNING: Removing unreachable block (ram,0x00014887311d) */
/* WARNING: Removing unreachable block (ram,0x0001488731e8) */

void __thiscall
FLoadingTests_RecursiveLoads_FromPostLoad_ThreadSafe::GetTests
          (FLoadingTests_RecursiveLoads_FromPostLoad_ThreadSafe *this,
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
  
  ::FString::FString(&local_18,L"System.Engine.Loading.RecursiveLoads.FromPostLoad_ThreadSafe");
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

// RunTest @ 148873210

bool __thiscall
FLoadingTests_RecursiveLoads_FromPostLoad_ThreadSafe::RunTest
          (FLoadingTests_RecursiveLoads_FromPostLoad_ThreadSafe *this,FString *param_1)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  TFunction<void___cdecl(FLoadingTestsScope_&)> local_98;
  FLoadingTestsScope local_68;
  
  local_98._0_8_ = 0;
  local_98._40_8_ = 0;
  FLoadingTestsScope::FLoadingTestsScope(&local_68,(FAutomationTestBase *)this,&local_98);
  puVar1 = UE::Core::Private::DelegateAllocate
                     (0x20,(FDelegateAllocation *)&UAsyncLoadingTests_Shared::OnIsPostLoadThreadSafe
                     );
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_NPEBVUAsyncLoadingTests_Shared___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<bool___cdecl(UAsyncLoadingTests_Shared_const_*),FNotThreadSafeNotCheckedDelegateUserPolicy,`FLoadingTests_RecursiveLoads_FromPostLoad_ThreadSafe::RunTest'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  puVar1 = UE::Core::Private::DelegateAllocate
                     (0x20,(FDelegateAllocation *)&UAsyncLoadingTests_Shared::OnPostLoad);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUAsyncLoadingTests_Shared___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(UAsyncLoadingTests_Shared_*),FNotThreadSafeNotCheckedDelegateUserPolicy,`FLoadingTests_RecursiveLoads_FromPostLoad_ThreadSafe::RunTest'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar1[3] = this;
  }
  FLoadingTestsScope::LoadObjects(&local_68);
  FLoadingTestsScope::~FLoadingTestsScope(&local_68);
  return true;
}

// GetBeautifiedTestName @ 1488732e0

FString * __thiscall
FLoadingTests_RecursiveLoads_FromPostLoad_ThreadSafe::GetBeautifiedTestName
          (FLoadingTests_RecursiveLoads_FromPostLoad_ThreadSafe *this,
          FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     L"System.Engine.Loading.RecursiveLoads.FromPostLoad_ThreadSafe");
  return __return_storage_ptr__;
}

