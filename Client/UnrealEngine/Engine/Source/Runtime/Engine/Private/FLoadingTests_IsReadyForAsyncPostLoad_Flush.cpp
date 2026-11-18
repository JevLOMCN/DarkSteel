// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// GetTestFlags @ 148871940

EAutomationTestFlags __thiscall
FLoadingTests_IsReadyForAsyncPostLoad_Flush::GetTestFlags
          (FLoadingTests_IsReadyForAsyncPostLoad_Flush *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 148871950

bool __thiscall
FLoadingTests_IsReadyForAsyncPostLoad_Flush::IsStressTest
          (FLoadingTests_IsReadyForAsyncPostLoad_Flush *this)

{
  return false;
}

// GetRequiredDeviceNum @ 148871960

uint __thiscall
FLoadingTests_IsReadyForAsyncPostLoad_Flush::GetRequiredDeviceNum
          (FLoadingTests_IsReadyForAsyncPostLoad_Flush *this)

{
  return 1;
}

// GetTestSourceFileName @ 148871970

FString * __thiscall
FLoadingTests_IsReadyForAsyncPostLoad_Flush::GetTestSourceFileName
          (FLoadingTests_IsReadyForAsyncPostLoad_Flush *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\Loading\\AsyncLoadingTests_IsReadyForAsyncPostLoad.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1488719a0

int __thiscall
FLoadingTests_IsReadyForAsyncPostLoad_Flush::GetTestSourceFileLine
          (FLoadingTests_IsReadyForAsyncPostLoad_Flush *this)

{
  return 0x3c;
}

// GetTests @ 1488719b0

/* WARNING: Removing unreachable block (ram,0x000148871a9d) */
/* WARNING: Removing unreachable block (ram,0x000148871b68) */

void __thiscall
FLoadingTests_IsReadyForAsyncPostLoad_Flush::GetTests
          (FLoadingTests_IsReadyForAsyncPostLoad_Flush *this,
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
  
  ::FString::FString(&local_18,L"System.Engine.Loading.IsReadyForAsyncPostLoad.Flush");
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

// RunTest @ 148871b90

bool __thiscall
FLoadingTests_IsReadyForAsyncPostLoad_Flush::RunTest
          (FLoadingTests_IsReadyForAsyncPostLoad_Flush *this,FString *param_1)

{
  bool bVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  ForAnyElementType FVar5;
  bool local_res18 [8];
  undefined1 local_res20 [8];
  FString local_a8;
  TFunction<void___cdecl(FLoadingTestsScope_&)> local_98;
  FLoadingTestsScope local_68;
  
  local_98._0_8_ = 0;
  local_98._40_8_ = 0;
  FLoadingTestsScope::FLoadingTestsScope(&local_68,(FAutomationTestBase *)this,&local_98);
  local_res20[0] = 0;
  puVar3 = UE::Core::Private::DelegateAllocate
                     (0x20,(FDelegateAllocation *)
                           &UAsyncLoadingTests_Shared::OnIsReadyForAsyncPostLoad);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_NPEBVUAsyncLoadingTests_Shared___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<bool___cdecl(UAsyncLoadingTests_Shared_const_*),FNotThreadSafeNotCheckedDelegateUserPolicy,`FLoadingTests_IsReadyForAsyncPostLoad_Flush::RunTest'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = local_res20;
  }
  local_res18[0] = false;
  puVar3 = UE::Core::Private::DelegateAllocate
                     (0x20,(FDelegateAllocation *)&UAsyncLoadingTests_Shared::OnPostLoad);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUAsyncLoadingTests_Shared___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(UAsyncLoadingTests_Shared_*),FNotThreadSafeNotCheckedDelegateUserPolicy,`FLoadingTests_IsReadyForAsyncPostLoad_Flush::RunTest'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar3[3] = local_res18;
  }
  ::FString::FString(&local_a8,L"/Engine/LoadingTestsScope_Package1");
  iVar2 = LoadPackageAsync(&local_a8,(FGuid *)0x0);
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  FlushAsyncLoading(iVar2);
  bVar1 = local_res18[0];
  ::FString::FString(&local_a8,"Postload should have been called");
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_a8.Data.ArrayNum != 0) {
    FVar5.Data = local_a8.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar5.Data,bVar1);
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  FLoadingTestsScope::~FLoadingTestsScope(&local_68);
  return true;
}

// GetBeautifiedTestName @ 148871cf0

FString * __thiscall
FLoadingTests_IsReadyForAsyncPostLoad_Flush::GetBeautifiedTestName
          (FLoadingTests_IsReadyForAsyncPostLoad_Flush *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"System.Engine.Loading.IsReadyForAsyncPostLoad.Flush");
  return __return_storage_ptr__;
}

