// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// GetTestFlags @ 148874cb0

EAutomationTestFlags __thiscall
FLoadingTests_RecursiveLoads_FullFlushFrom_PostLoad::GetTestFlags
          (FLoadingTests_RecursiveLoads_FullFlushFrom_PostLoad *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 148874cc0

bool __thiscall
FLoadingTests_RecursiveLoads_FullFlushFrom_PostLoad::IsStressTest
          (FLoadingTests_RecursiveLoads_FullFlushFrom_PostLoad *this)

{
  return false;
}

// GetRequiredDeviceNum @ 148874cd0

uint __thiscall
FLoadingTests_RecursiveLoads_FullFlushFrom_PostLoad::GetRequiredDeviceNum
          (FLoadingTests_RecursiveLoads_FullFlushFrom_PostLoad *this)

{
  return 1;
}

// GetTestSourceFileName @ 148874ce0

FString * __thiscall
FLoadingTests_RecursiveLoads_FullFlushFrom_PostLoad::GetTestSourceFileName
          (FLoadingTests_RecursiveLoads_FullFlushFrom_PostLoad *this,FString *__return_storage_ptr__
          )

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\Loading\\AsyncLoadingTests_RecursiveLoads.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 148874d10

int __thiscall
FLoadingTests_RecursiveLoads_FullFlushFrom_PostLoad::GetTestSourceFileLine
          (FLoadingTests_RecursiveLoads_FullFlushFrom_PostLoad *this)

{
  return 0x10f;
}

// GetTests @ 148874d20

/* WARNING: Removing unreachable block (ram,0x000148874e0d) */
/* WARNING: Removing unreachable block (ram,0x000148874ed8) */

void __thiscall
FLoadingTests_RecursiveLoads_FullFlushFrom_PostLoad::GetTests
          (FLoadingTests_RecursiveLoads_FullFlushFrom_PostLoad *this,
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
  
  ::FString::FString(&local_18,L"System.Engine.Loading.RecursiveLoads.FullFlushFrom.Postload");
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

// RunTest @ 148874f00

bool __thiscall
FLoadingTests_RecursiveLoads_FullFlushFrom_PostLoad::RunTest
          (FLoadingTests_RecursiveLoads_FullFlushFrom_PostLoad *this,FString *param_1)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  int local_res8 [2];
  FString local_a8;
  TFunction<void___cdecl(FLoadingTestsScope_&)> local_98;
  FLoadingTestsScope local_68;
  
  local_98._0_8_ = 0;
  local_98._40_8_ = 0;
  FLoadingTestsScope::FLoadingTestsScope(&local_68,(FAutomationTestBase *)this,&local_98);
  local_res8[0] = 0;
  puVar1 = UE::Core::Private::DelegateAllocate
                     (0x28,(FDelegateAllocation *)&UAsyncLoadingTests_Shared::OnPostLoad);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUAsyncLoadingTests_Shared___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(UAsyncLoadingTests_Shared_*),FNotThreadSafeNotCheckedDelegateUserPolicy,`FLoadingTests_RecursiveLoads_FullFlushFrom_PostLoad::RunTest'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = this;
    puVar1[4] = local_res8;
  }
  ::FString::FString(&local_a8,L"/Engine/LoadingTestsScope_Package2");
  local_res8[0] = LoadPackageAsync(&local_a8,(FGuid *)0x0);
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  FLoadingTestsScope::LoadObjects(&local_68);
  FLoadingTestsScope::~FLoadingTestsScope(&local_68);
  return true;
}

// GetBeautifiedTestName @ 148874fe0

FString * __thiscall
FLoadingTests_RecursiveLoads_FullFlushFrom_PostLoad::GetBeautifiedTestName
          (FLoadingTests_RecursiveLoads_FullFlushFrom_PostLoad *this,FString *__return_storage_ptr__
          )

{
  ::FString::FString(__return_storage_ptr__,
                     L"System.Engine.Loading.RecursiveLoads.FullFlushFrom.Postload");
  return __return_storage_ptr__;
}

// operator() @ 148880b40

void __thiscall
`FLoadingTests_RecursiveLoads_FullFlushFrom_PostLoad::RunTest'::__l2::<lambda_1>::operator()
          (void *this,UAsyncLoadingTests_Shared *param_1)

{
  int iVar1;
  FString *pFVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  wchar_t *pwVar5;
  TStringView<wchar_t> local_18;
  
  pFVar2 = UObjectBaseUtility::GetPathName
                     ((UObjectBaseUtility *)param_1,(FString *)&local_18,(UObject *)0x0);
  if ((pFVar2->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(pwVar5,L"/Engine/LoadingTestsScope_Package1.TestObject");
  if (local_18.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_18.DataPtr);
  }
  if (iVar1 == 0) {
    FlushAsyncLoading(**(int **)((longlong)this + 8));
    local_18.Size = 0x2d;
    local_18.DataPtr = L"/Engine/LoadingTestsScope_Package2.TestObject";
    pUVar3 = UAsyncLoadingTests_Shared::StaticClass();
    pUVar4 = StaticFindObject(pUVar3,(UObject *)0x0,&local_18,None);
    FAutomationTestBase::TestFalse
              (*(FAutomationTestBase **)this,L"The object should be serialized and postloaded",
               (*(uint *)&pUVar4->field_0x8 & 0x1400) != 0);
  }
  return;
}

