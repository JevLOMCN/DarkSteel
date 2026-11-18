// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 10

// GetTestFlags @ 148874840

EAutomationTestFlags __thiscall
FLoadingTests_RecursiveLoads_FullFlushFrom_Serialize::GetTestFlags
          (FLoadingTests_RecursiveLoads_FullFlushFrom_Serialize *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 148874850

bool __thiscall
FLoadingTests_RecursiveLoads_FullFlushFrom_Serialize::IsStressTest
          (FLoadingTests_RecursiveLoads_FullFlushFrom_Serialize *this)

{
  return false;
}

// GetRequiredDeviceNum @ 148874860

uint __thiscall
FLoadingTests_RecursiveLoads_FullFlushFrom_Serialize::GetRequiredDeviceNum
          (FLoadingTests_RecursiveLoads_FullFlushFrom_Serialize *this)

{
  return 1;
}

// GetTestSourceFileName @ 148874870

FString * __thiscall
FLoadingTests_RecursiveLoads_FullFlushFrom_Serialize::GetTestSourceFileName
          (FLoadingTests_RecursiveLoads_FullFlushFrom_Serialize *this,
          FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\Loading\\AsyncLoadingTests_RecursiveLoads.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1488748a0

int __thiscall
FLoadingTests_RecursiveLoads_FullFlushFrom_Serialize::GetTestSourceFileLine
          (FLoadingTests_RecursiveLoads_FullFlushFrom_Serialize *this)

{
  return 0xcc;
}

// GetTests @ 1488748b0

/* WARNING: Removing unreachable block (ram,0x00014887499d) */
/* WARNING: Removing unreachable block (ram,0x000148874a68) */

void __thiscall
FLoadingTests_RecursiveLoads_FullFlushFrom_Serialize::GetTests
          (FLoadingTests_RecursiveLoads_FullFlushFrom_Serialize *this,
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
  
  ::FString::FString(&local_18,L"System.Engine.Loading.RecursiveLoads.FullFlushFrom.Serialize");
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

// RunTest @ 148874a90

bool __thiscall
FLoadingTests_RecursiveLoads_FullFlushFrom_Serialize::RunTest
          (FLoadingTests_RecursiveLoads_FullFlushFrom_Serialize *this,FString *param_1)

{
  FString *pFVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  int local_b8 [2];
  FString local_b0;
  TFunction<void___cdecl(FLoadingTestsScope_&)> local_98;
  FLoadingTestsScope local_68;
  
  local_98._0_8_ = 0;
  local_98._40_8_ = 0;
  FLoadingTestsScope::FLoadingTestsScope(&local_68,(FAutomationTestBase *)this,&local_98);
  pFVar1 = ::FString::FString(&local_b0,
                              L"will result in a partially loaded package to avoid a deadlock.");
  FAutomationTestBase::AddExpectedMessage((FAutomationTestBase *)this,pFVar1,Contains,1,true);
  local_res8[0] = 0;
  local_res18[0] = 0;
  local_res20[0] = 0;
  puVar2 = UE::Core::Private::DelegateAllocate
                     (0x38,(FDelegateAllocation *)&UAsyncLoadingTests_Shared::OnPostLoad);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUAsyncLoadingTests_Shared___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(UAsyncLoadingTests_Shared_*),FNotThreadSafeNotCheckedDelegateUserPolicy,`FLoadingTests_RecursiveLoads_FullFlushFrom_Serialize::RunTest'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar2[3] = this;
    puVar2[4] = local_res8;
    puVar2[5] = local_res18;
    puVar2[6] = local_res20;
  }
  local_b8[0] = 0;
  puVar2 = UE::Core::Private::DelegateAllocate
                     (0x40,(FDelegateAllocation *)&UAsyncLoadingTests_Shared::OnSerialize);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFArchive__PEAVUAsyncLoadingTests_Shared___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(FArchive_&,UAsyncLoadingTests_Shared_*),FNotThreadSafeNotCheckedDelegateUserPolicy,`FLoadingTests_RecursiveLoads_FullFlushFrom_Serialize::RunTest'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar2[3] = this;
    puVar2[4] = local_b8;
    puVar2[5] = local_res8;
    puVar2[6] = local_res18;
    puVar2[7] = local_res20;
  }
  ::FString::FString(&local_b0,L"/Engine/LoadingTestsScope_Package2");
  local_b8[0] = LoadPackageAsync(&local_b0,(FGuid *)0x0);
  if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.Data.AllocatorInstance.Data);
  }
  FLoadingTestsScope::LoadObjects(&local_68);
  FLoadingTestsScope::~FLoadingTestsScope(&local_68);
  return true;
}

// GetBeautifiedTestName @ 148874c40

FString * __thiscall
FLoadingTests_RecursiveLoads_FullFlushFrom_Serialize::GetBeautifiedTestName
          (FLoadingTests_RecursiveLoads_FullFlushFrom_Serialize *this,
          FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     L"System.Engine.Loading.RecursiveLoads.FullFlushFrom.Serialize");
  return __return_storage_ptr__;
}

// operator() @ 148880c10

void __thiscall
`FLoadingTests_RecursiveLoads_FullFlushFrom_Serialize::RunTest'::__l2::<lambda_1>::operator()
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
                         ,0xdc,L"");
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

// operator() @ 1488814c0

void __thiscall
`FLoadingTests_RecursiveLoads_FullFlushFrom_Serialize::RunTest'::__l2::<lambda_2>::operator()
          (void *this,FArchive *param_1,UAsyncLoadingTests_Shared *param_2)

{
  byte bVar1;
  byte *pbVar2;
  bool bVar3;
  int iVar4;
  FString *pFVar5;
  UClass *pUVar6;
  UObject *pUVar7;
  wchar_t *pwVar8;
  bool bVar9;
  TStringView<wchar_t> local_18;
  
  bVar3 = false;
  if ((param_1->field_0x28 & 1) != 0) {
    pFVar5 = UObjectBaseUtility::GetPathName
                       ((UObjectBaseUtility *)param_2,(FString *)&local_18,(UObject *)0x0);
    if ((pFVar5->Data).ArrayNum == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
    bVar9 = true;
    iVar4 = FGenericPlatformStricmp::Stricmp
                      (pwVar8,L"/Engine/LoadingTestsScope_Package1.TestObject");
    bVar3 = true;
    if (iVar4 == 0) {
      bVar3 = true;
      goto LAB_148881527;
    }
  }
  bVar9 = bVar3;
  bVar3 = false;
LAB_148881527:
  if ((bVar9) && (local_18.DataPtr != (wchar_t *)0x0)) {
    FMemory::Free(local_18.DataPtr);
  }
  if (bVar3) {
    bVar3 = IsInGameThread();
    LOCK();
    *(bool *)*(undefined8 *)((longlong)this + 0x20) = !bVar3;
    UNLOCK();
    FlushAsyncLoading(**(int **)((longlong)this + 8));
    local_18.Size = 0x2d;
    local_18.DataPtr = L"/Engine/LoadingTestsScope_Package2.TestObject";
    pUVar6 = UAsyncLoadingTests_Shared::StaticClass();
    pUVar7 = StaticFindObject(pUVar6,(UObject *)0x0,&local_18,None);
    FAutomationTestBase::TestFalse
              (*(FAutomationTestBase **)this,L"The object should be serialized",
               (bool)((byte)(*(uint *)&pUVar7->field_0x8 >> 10) & 1));
    FAutomationTestBase::TestFalse
              (*(FAutomationTestBase **)this,L"The object should not have been postloaded",
               *(bool *)*(undefined8 *)((longlong)this + 0x18));
    pbVar2 = *(byte **)((longlong)this + 0x10);
    LOCK();
    bVar1 = *pbVar2;
    *pbVar2 = 1;
    UNLOCK();
    if ((bVar1 & 3) == 2) {
      UE::ParkingLot::WakeAll(pbVar2);
    }
  }
  return;
}

