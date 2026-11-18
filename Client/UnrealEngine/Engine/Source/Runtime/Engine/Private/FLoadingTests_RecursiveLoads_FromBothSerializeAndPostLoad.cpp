// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 11

// GetTestFlags @ 148875560

EAutomationTestFlags __thiscall
FLoadingTests_RecursiveLoads_FromBothSerializeAndPostLoad::GetTestFlags
          (FLoadingTests_RecursiveLoads_FromBothSerializeAndPostLoad *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 148875570

bool __thiscall
FLoadingTests_RecursiveLoads_FromBothSerializeAndPostLoad::IsStressTest
          (FLoadingTests_RecursiveLoads_FromBothSerializeAndPostLoad *this)

{
  return false;
}

// GetRequiredDeviceNum @ 148875580

uint __thiscall
FLoadingTests_RecursiveLoads_FromBothSerializeAndPostLoad::GetRequiredDeviceNum
          (FLoadingTests_RecursiveLoads_FromBothSerializeAndPostLoad *this)

{
  return 1;
}

// GetTestSourceFileName @ 148875590

FString * __thiscall
FLoadingTests_RecursiveLoads_FromBothSerializeAndPostLoad::GetTestSourceFileName
          (FLoadingTests_RecursiveLoads_FromBothSerializeAndPostLoad *this,
          FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\Loading\\AsyncLoadingTests_RecursiveLoads.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1488755c0

int __thiscall
FLoadingTests_RecursiveLoads_FromBothSerializeAndPostLoad::GetTestSourceFileLine
          (FLoadingTests_RecursiveLoads_FromBothSerializeAndPostLoad *this)

{
  return 0x15d;
}

// GetTests @ 1488755d0

/* WARNING: Removing unreachable block (ram,0x0001488756bd) */
/* WARNING: Removing unreachable block (ram,0x000148875788) */

void __thiscall
FLoadingTests_RecursiveLoads_FromBothSerializeAndPostLoad::GetTests
          (FLoadingTests_RecursiveLoads_FromBothSerializeAndPostLoad *this,
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
  
  ::FString::FString(&local_18,L"System.Engine.Loading.RecursiveLoads.FromBothSerializeAndPostLoad")
  ;
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

// RunTest @ 1488757b0

bool __thiscall
FLoadingTests_RecursiveLoads_FromBothSerializeAndPostLoad::RunTest
          (FLoadingTests_RecursiveLoads_FromBothSerializeAndPostLoad *this,FString *param_1)

{
  double dVar1;
  double dVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  char local_res8 [16];
  byte local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_f8;
  undefined1 local_f7 [3];
  undefined4 local_f4;
  char *local_f0;
  FString local_e8;
  code *local_d8;
  char **local_d0;
  FString local_c8;
  code *local_b8 [2];
  undefined **local_a8;
  code *local_a0;
  undefined8 local_90;
  FLoadingTestsScope local_88;
  
  local_a8 = &
             ___7__TFunction_OwnedObject_P6AXAEAVFLoadingTestsScope___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_a0 = `FLoadingTests_RecursiveLoads_FromBothSerializeAndPostLoad::RunTest'::__l2::<lambda_1>
             ::<lambda_invoker_cdecl>;
  local_b8[0] = UE::Core::Private::Function::
                TFunctionRefCaller<void_(__cdecl*)(FLoadingTestsScope_&),void,FLoadingTestsScope_&>
                ::Call;
  local_90 = 0;
  FLoadingTestsScope::FLoadingTestsScope
            (&local_88,(FAutomationTestBase *)this,
             (TFunction<void___cdecl(FLoadingTestsScope_&)> *)local_b8);
  local_res8[0] = '\0';
  local_res18[0] = 0;
  local_f4 = 0;
  local_f8 = 0;
  local_res20[0] = 0;
  local_f7[0] = 0;
  puVar6 = UE::Core::Private::DelegateAllocate
                     (0x58,(FDelegateAllocation *)&UAsyncLoadingTests_Shared::OnSerialize);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFArchive__PEAVUAsyncLoadingTests_Shared___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &TBaseFunctorDelegateInstance<void___cdecl(FArchive_&,UAsyncLoadingTests_Shared_*),FNotThreadSafeNotCheckedDelegateUserPolicy,`FLoadingTests_RecursiveLoads_FromBothSerializeAndPostLoad::RunTest'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar6[3] = this;
    puVar6[4] = &local_88;
    puVar6[5] = local_res8;
    puVar6[6] = local_res18;
    puVar6[7] = &local_f4;
    puVar6[8] = local_res20;
    puVar6[9] = &local_f8;
    puVar6[10] = local_f7;
  }
  puVar6 = UE::Core::Private::DelegateAllocate
                     (0x40,(FDelegateAllocation *)&UAsyncLoadingTests_Shared::OnPostLoad);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUAsyncLoadingTests_Shared___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &TBaseFunctorDelegateInstance<void___cdecl(UAsyncLoadingTests_Shared_*),FNotThreadSafeNotCheckedDelegateUserPolicy,`FLoadingTests_RecursiveLoads_FromBothSerializeAndPostLoad::RunTest'::`2'::<lambda_3>_>
               ::_vftable_;
    puVar6[3] = this;
    puVar6[4] = &local_88;
    puVar6[5] = local_res20;
    puVar6[6] = &local_f8;
    puVar6[7] = local_f7;
  }
  ::FString::FString(&local_e8,L"/Engine/LoadingTestsScope_Package1");
  iVar4 = LoadPackageAsync(&local_e8,(FGuid *)0x0);
  dVar1 = __real_3fb99999a0000000;
  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
    dVar1 = __real_3fb99999a0000000;
  }
  while (dVar2 = __real_3fb99999a0000000, __real_3fb99999a0000000 = dVar1, local_res8[0] == '\0') {
    local_f0 = local_res8;
    local_d8 = UE::Core::Private::Function::
               TFunctionRefCaller<`FLoadingTests_RecursiveLoads_FromBothSerializeAndPostLoad::RunTest'::__l4::<lambda_4>,bool>
               ::Call;
    local_d0 = &local_f0;
    ProcessAsyncLoadingUntilComplete((TFunctionRef<bool___cdecl(void)> *)&local_d8,dVar2);
    dVar1 = __real_3fb99999a0000000;
    __real_3fb99999a0000000 = dVar2;
  }
  ::FString::FString(&local_c8,L"/Engine/LoadingTestsScope_Package3");
  iVar5 = LoadPackageAsync(&local_c8,(FGuid *)0x0);
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  bVar3 = local_res18[0];
  LOCK();
  local_res18[0] = 1;
  UNLOCK();
  if ((bVar3 & 3) == 2) {
    UE::ParkingLot::WakeAll(local_res18);
  }
  FlushAsyncLoading(iVar5);
  FlushAsyncLoading(iVar4);
  FLoadingTestsScope::~FLoadingTestsScope(&local_88);
  return true;
}

// GetBeautifiedTestName @ 1488759e0

FString * __thiscall
FLoadingTests_RecursiveLoads_FromBothSerializeAndPostLoad::GetBeautifiedTestName
          (FLoadingTests_RecursiveLoads_FromBothSerializeAndPostLoad *this,
          FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     L"System.Engine.Loading.RecursiveLoads.FromBothSerializeAndPostLoad");
  return __return_storage_ptr__;
}

// <lambda_invoker_cdecl> @ 148877ab0

void __cdecl
`FLoadingTests_RecursiveLoads_FromBothSerializeAndPostLoad::RunTest'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FLoadingTestsScope *param_1)

{
  UAsyncLoadingTests_Shared *pUVar1;
  UAsyncLoadingTests_Shared *local_res8 [4];
  
  local_res8[0] = param_1->Object2;
  pUVar1 = param_1->Object1;
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (local_res8[0] != (UAsyncLoadingTests_Shared *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  FSoftObjectPtr::operator=(&(pUVar1->SoftReference).SoftObjectPtr,(FObjectPtr)local_res8);
  return;
}

// operator() @ 148881180

void __thiscall
`FLoadingTests_RecursiveLoads_FromBothSerializeAndPostLoad::RunTest'::__l2::<lambda_2>::operator()
          (void *this,FArchive *param_1,UAsyncLoadingTests_Shared *param_2)

{
  byte bVar1;
  byte *pbVar2;
  code *pcVar3;
  FMonotonicTimeSpan FVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  FString *pFVar8;
  UObject *pUVar9;
  wchar_t *pwVar10;
  bool bVar11;
  FString local_28;
  
  bVar6 = true;
  bVar11 = true;
  bVar5 = false;
  if ((param_1->field_0x28 & 1) != 0) {
    pFVar8 = UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_2,&local_28,(UObject *)0x0)
    ;
    if ((pFVar8->Data).ArrayNum == 0) {
      pwVar10 = L"";
    }
    else {
      pwVar10 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
    }
    iVar7 = FGenericPlatformStricmp::Stricmp
                      (pwVar10,L"/Engine/LoadingTestsScope_Package1.TestObject");
    bVar5 = true;
    if (iVar7 == 0) goto LAB_1488811e5;
  }
  bVar11 = bVar5;
  bVar6 = false;
LAB_1488811e5:
  if ((bVar11) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar6) {
    **(int **)((longlong)this + 0x20) = **(int **)((longlong)this + 0x20) + 1;
    if ((**(int **)((longlong)this + 0x20) != 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("SerializeCount == 1",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\Loading\\AsyncLoadingTests_RecursiveLoads.cpp"
                           ,0x177,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar6 = IsInGameThread();
    LOCK();
    *(bool *)*(undefined8 *)((longlong)this + 0x38) = !bVar6;
    UNLOCK();
    pUVar9 = TPersistentObjectPtr<FSoftObjectPath>::Get
                       ((TPersistentObjectPtr<FSoftObjectPath> *)&param_2->SoftReference);
    if (pUVar9 == (UObject *)0x0) {
      if (*(longlong *)&(param_2->SoftReference).SoftObjectPtr.field_0x8 != 0) {
        FSoftObjectPath::TryLoad
                  ((FSoftObjectPath *)&(param_2->SoftReference).SoftObjectPtr.field_0x8,
                   (FUObjectSerializeContext *)0x0);
        pUVar9 = TPersistentObjectPtr<FSoftObjectPath>::Get
                           ((TPersistentObjectPtr<FSoftObjectPath> *)&param_2->SoftReference);
      }
      if (pUVar9 == (UObject *)0x0) {
        return;
      }
    }
    FAutomationTestBase::TestTrue
              (*(FAutomationTestBase **)this,L"Recursive loads in serialize should be deserialized",
               (bool)(~(byte)(*(uint *)&pUVar9->field_0x8 >> 10) & 1));
    bVar6 = IsInGameThread();
    if (!bVar6) {
      FAutomationTestBase::TestFalse
                (*(FAutomationTestBase **)this,
                 L"Recursive loads in serialize skip thread-unsafe postloads when run from the ALT",
                 *(bool *)*(undefined8 *)((longlong)this + 0x28));
    }
    pbVar2 = *(byte **)((longlong)this + 0x30);
    LOCK();
    bVar1 = *pbVar2;
    *pbVar2 = 1;
    UNLOCK();
    if ((bVar1 & 3) == 2) {
      UE::ParkingLot::WakeAll(pbVar2);
    }
    FVar4.Time = __real_3ff0000000000000.Time;
    LOCK();
    **(undefined1 **)((longlong)this + 0x10) = 1;
    UNLOCK();
    UE::FManualResetEvent::WaitFor(*(FManualResetEvent **)((longlong)this + 0x18),FVar4);
  }
  return;
}

// operator() @ 1488817b0

void __thiscall
`FLoadingTests_RecursiveLoads_FromBothSerializeAndPostLoad::RunTest'::__l2::<lambda_3>::operator()
          (void *this,UAsyncLoadingTests_Shared *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FString *pFVar4;
  UClass *pUVar5;
  UObject *pUVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  undefined4 uStack_4c;
  FString local_48;
  FString local_38;
  TStringView<wchar_t> local_28;
  TStringView<wchar_t> local_18;
  
  pFVar4 = UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_48,(UObject *)0x0);
  pwVar8 = L"";
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  iVar3 = FGenericPlatformStricmp::Stricmp(pwVar7,L"/Engine/LoadingTestsScope_Package2.TestObject");
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (iVar3 == 0) {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\Loading\\AsyncLoadingTests_RecursiveLoads.cpp"
                         ,0x196,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (**(char **)((longlong)this + 0x20) != '\0') {
      UE::FManualResetEvent::WaitFor
                (*(FManualResetEvent **)((longlong)this + 0x18),__real_3ff0000000000000);
    }
    LOCK();
    **(undefined1 **)((longlong)this + 0x10) = 1;
    UNLOCK();
  }
  pFVar4 = UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_38,(UObject *)0x0);
  if ((pFVar4->Data).ArrayNum != 0) {
    pwVar8 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  iVar3 = FGenericPlatformStricmp::Stricmp(pwVar8,L"/Engine/LoadingTestsScope_Package3.TestObject");
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (iVar3 == 0) {
    pUVar5 = Z_Construct_UClass_UObject_NoRegister();
    local_18._12_4_ = uStack_4c;
    local_18.Size = 0x2d;
    local_28.DataPtr = (wchar_t *)0x0;
    local_28.Size = 0;
    local_28._12_4_ = 0;
    local_18.DataPtr = L"/Engine/LoadingTestsScope_Package2.TestObject";
    pUVar6 = StaticLoadObject(pUVar5,(UObject *)0x0,&local_18,&local_28,0,(UPackageMap *)0x0,true,
                              (FLinkerInstancingContext *)0x0);
    if (pUVar6 != (UObject *)0x0) {
      FAutomationTestBase::TestTrue
                (*(FAutomationTestBase **)this,L"Recursive loads in postload should be deserialized"
                 ,(bool)(~(byte)(*(uint *)&pUVar6->field_0x8 >> 10) & 1));
      FAutomationTestBase::TestTrue
                (*(FAutomationTestBase **)this,
                 L"Recursive loads in postload should be able to postload",
                 (bool)(~(byte)(*(uint *)&pUVar6->field_0x8 >> 0xc) & 1));
    }
  }
  return;
}

