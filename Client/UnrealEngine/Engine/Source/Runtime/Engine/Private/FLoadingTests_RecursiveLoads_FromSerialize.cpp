// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 10

// GetTestFlags @ 148872380

EAutomationTestFlags __thiscall
FLoadingTests_RecursiveLoads_FromSerialize::GetTestFlags
          (FLoadingTests_RecursiveLoads_FromSerialize *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 148872390

bool __thiscall
FLoadingTests_RecursiveLoads_FromSerialize::IsStressTest
          (FLoadingTests_RecursiveLoads_FromSerialize *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1488723a0

uint __thiscall
FLoadingTests_RecursiveLoads_FromSerialize::GetRequiredDeviceNum
          (FLoadingTests_RecursiveLoads_FromSerialize *this)

{
  return 1;
}

// GetTestSourceFileName @ 1488723b0

FString * __thiscall
FLoadingTests_RecursiveLoads_FromSerialize::GetTestSourceFileName
          (FLoadingTests_RecursiveLoads_FromSerialize *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\Loading\\AsyncLoadingTests_RecursiveLoads.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1488723e0

int __thiscall
FLoadingTests_RecursiveLoads_FromSerialize::GetTestSourceFileLine
          (FLoadingTests_RecursiveLoads_FromSerialize *this)

{
  return 0x16;
}

// GetTests @ 1488723f0

/* WARNING: Removing unreachable block (ram,0x0001488724dd) */
/* WARNING: Removing unreachable block (ram,0x0001488725a8) */

void __thiscall
FLoadingTests_RecursiveLoads_FromSerialize::GetTests
          (FLoadingTests_RecursiveLoads_FromSerialize *this,
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
  
  ::FString::FString(&local_18,L"System.Engine.Loading.RecursiveLoads.FromSerialize");
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

// RunTest @ 1488725d0

bool __thiscall
FLoadingTests_RecursiveLoads_FromSerialize::RunTest
          (FLoadingTests_RecursiveLoads_FromSerialize *this,FString *param_1)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  TFunction<void___cdecl(FLoadingTestsScope_&)> local_98;
  FLoadingTestsScope local_68;
  
  local_98._0_8_ = 0;
  local_98._40_8_ = 0;
  FLoadingTestsScope::FLoadingTestsScope(&local_68,(FAutomationTestBase *)this,&local_98);
  local_res18[0] = 0;
  local_res8[0] = 0;
  local_res20[0] = 0;
  puVar1 = UE::Core::Private::DelegateAllocate
                     (0x38,(FDelegateAllocation *)&UAsyncLoadingTests_Shared::OnPostLoad);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUAsyncLoadingTests_Shared___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(UAsyncLoadingTests_Shared_*),FNotThreadSafeNotCheckedDelegateUserPolicy,`FLoadingTests_RecursiveLoads_FromSerialize::RunTest'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = this;
    puVar1[4] = local_res18;
    puVar1[5] = local_res8;
    puVar1[6] = local_res20;
  }
  puVar1 = UE::Core::Private::DelegateAllocate
                     (0x38,(FDelegateAllocation *)&UAsyncLoadingTests_Shared::OnSerialize);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFArchive__PEAVUAsyncLoadingTests_Shared___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(FArchive_&,UAsyncLoadingTests_Shared_*),FNotThreadSafeNotCheckedDelegateUserPolicy,`FLoadingTests_RecursiveLoads_FromSerialize::RunTest'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar1[3] = this;
    puVar1[4] = local_res8;
    puVar1[5] = local_res18;
    puVar1[6] = local_res20;
  }
  FLoadingTestsScope::LoadObjects(&local_68);
  FLoadingTestsScope::~FLoadingTestsScope(&local_68);
  return true;
}

// GetBeautifiedTestName @ 148872700

FString * __thiscall
FLoadingTests_RecursiveLoads_FromSerialize::GetBeautifiedTestName
          (FLoadingTests_RecursiveLoads_FromSerialize *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"System.Engine.Loading.RecursiveLoads.FromSerialize");
  return __return_storage_ptr__;
}

// operator() @ 148880970

void __thiscall
`FLoadingTests_RecursiveLoads_FromSerialize::RunTest'::__l2::<lambda_1>::operator()
          (void *this,UAsyncLoadingTests_Shared *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  FString local_18;
  
  pFVar4 = UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_18,(UObject *)0x0);
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  iVar3 = FGenericPlatformStricmp::Stricmp(pwVar5,L"/Engine/LoadingTestsScope_Package2.TestObject");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (iVar3 == 0) {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\Loading\\AsyncLoadingTests_RecursiveLoads.cpp"
                         ,0x24,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (**(char **)((longlong)this + 0x18) != '\0') {
      UE::FManualResetEvent::WaitFor
                (*(FManualResetEvent **)((longlong)this + 8),__real_3ff0000000000000);
    }
    LOCK();
    **(undefined1 **)((longlong)this + 0x10) = 1;
    UNLOCK();
  }
  return;
}

// operator() @ 148881400

void __thiscall
`FLoadingTests_RecursiveLoads_FromSerialize::RunTest'::__l2::<lambda_2>::operator()
          (void *this,FArchive *param_1,UAsyncLoadingTests_Shared *param_2)

{
  byte bVar1;
  byte *pbVar2;
  bool bVar3;
  UObject *pUVar4;
  
  if ((param_1->field_0x28 & 1) != 0) {
    bVar3 = IsInGameThread();
    LOCK();
    *(bool *)*(undefined8 *)((longlong)this + 0x18) = !bVar3;
    UNLOCK();
    pUVar4 = TPersistentObjectPtr<FSoftObjectPath>::Get
                       ((TPersistentObjectPtr<FSoftObjectPath> *)&param_2->SoftReference);
    if (pUVar4 == (UObject *)0x0) {
      if (*(longlong *)&(param_2->SoftReference).SoftObjectPtr.field_0x8 != 0) {
        FSoftObjectPath::TryLoad
                  ((FSoftObjectPath *)&(param_2->SoftReference).SoftObjectPtr.field_0x8,
                   (FUObjectSerializeContext *)0x0);
        pUVar4 = TPersistentObjectPtr<FSoftObjectPath>::Get
                           ((TPersistentObjectPtr<FSoftObjectPath> *)&param_2->SoftReference);
      }
      if (pUVar4 == (UObject *)0x0) {
        return;
      }
    }
    FAutomationTestBase::TestTrue
              (*(FAutomationTestBase **)this,L"Recursive loads in serialize should be deserialized",
               (bool)(~(byte)(*(uint *)&pUVar4->field_0x8 >> 10) & 1));
    bVar3 = IsInGameThread();
    if (!bVar3) {
      FAutomationTestBase::TestFalse
                (*(FAutomationTestBase **)this,
                 L"Recursive loads in serialize skip thread-unsafe postloads when run from the ALT",
                 *(bool *)*(undefined8 *)((longlong)this + 8));
      pbVar2 = *(byte **)((longlong)this + 0x10);
      LOCK();
      bVar1 = *pbVar2;
      *pbVar2 = 1;
      UNLOCK();
      if ((bVar1 & 3) == 2) {
        UE::ParkingLot::WakeAll(pbVar2);
      }
    }
  }
  return;
}

