// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// GetTestFlags @ 148994f20

EAutomationTestFlags __thiscall
FVisualLogRedirectionsWithinHierachyTest::GetTestFlags
          (FVisualLogRedirectionsWithinHierachyTest *this)

{
  return EngineFilter|ClientContext|EditorContext;
}

// IsStressTest @ 148994f30

bool __thiscall
FVisualLogRedirectionsWithinHierachyTest::IsStressTest
          (FVisualLogRedirectionsWithinHierachyTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 148994f40

uint __thiscall
FVisualLogRedirectionsWithinHierachyTest::GetRequiredDeviceNum
          (FVisualLogRedirectionsWithinHierachyTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 148994f50

FString * __thiscall
FVisualLogRedirectionsWithinHierachyTest::GetTestSourceFileName
          (FVisualLogRedirectionsWithinHierachyTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VisualLogger\\VisualLoggerAutomationTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 148994f80

int __thiscall
FVisualLogRedirectionsWithinHierachyTest::GetTestSourceFileLine
          (FVisualLogRedirectionsWithinHierachyTest *this)

{
  return 0x1e5;
}

// GetTests @ 148994f90

/* WARNING: Removing unreachable block (ram,0x00014899507d) */
/* WARNING: Removing unreachable block (ram,0x000148995148) */

void __thiscall
FVisualLogRedirectionsWithinHierachyTest::GetTests
          (FVisualLogRedirectionsWithinHierachyTest *this,
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
  
  ::FString::FString(&local_18,"System.Engine.VisualLogger.Redirections.WithinHierachy");
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

// RunTest @ 148995170

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FVisualLogRedirectionsWithinHierachyTest::RunTest
          (FVisualLogRedirectionsWithinHierachyTest *this,FString *param_1)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  EAutomationTestFlags EVar6;
  FWeakObjectPtr FVar7;
  FVisualLogger *this_00;
  TMap<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>_>
  *this_01;
  FName *pFVar8;
  AActor *pAVar9;
  AActor *pAVar10;
  AActor *pAVar11;
  AActor *pAVar12;
  AActor *pAVar13;
  FName FVar14;
  TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar15;
  ForAnyElementType FVar16;
  FWeakObjectPtr local_res8;
  AActor *local_res20;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  AActor *local_78;
  FString local_70;
  FString local_60;
  FString local_50;
  
  EVar6 = (**(code **)(*(longlong *)this + 8))();
  FVar7 = (FWeakObjectPtr)::`anonymous_namespace'::GetSimpleEngineAutomationTestWorld(EVar6);
  if (FVar7 == (FWeakObjectPtr)0x0) {
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
  }
  else {
    local_res8 = FVar7;
    this_00 = FVisualLogger::Get();
    FVisualLogger::Cleanup(this_00,(UWorld *)FVar7,false);
    this_01 = FVisualLogger::GetRedirectionMap((UObject *)FVar7);
    iVar1 = *(int *)&this_01->field_0x34;
    iVar2 = *(int *)&this_01->field_0x8;
    ::FString::PrintfImpl(&local_a8,L"%s (%s:%d)");
    FVar14 = (FName)L"";
    if (local_a8.Data.ArrayNum != 0) {
      FVar14 = (FName)local_a8.Data.AllocatorInstance.Data;
    }
    bVar5 = FAutomationTestBase::TestTrue
                      ((FAutomationTestBase *)this,(wchar_t *)FVar14,iVar2 == iVar1);
    if ((FName)local_a8.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    if (!bVar5) {
      return false;
    }
    pFVar8 = ::FName::FName((FName *)&local_98,L"VLogTestObjA");
    pAVar9 = NewObject<AActor>((UObject *)
                               ((TObjectPtr<ULevel>_u_0 *)((longlong)FVar7 + 0x30))->DebugPtr,
                               *pFVar8,RF_Transient,(UObject *)0x0,false,
                               (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    pFVar8 = ::FName::FName((FName *)&local_70,L"VLogTestObjB");
    pAVar10 = NewObject<AActor>((UObject *)
                                ((TObjectPtr<ULevel>_u_0 *)((longlong)FVar7 + 0x30))->DebugPtr,
                                *pFVar8,RF_Transient,(UObject *)0x0,false,
                                (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    pFVar8 = ::FName::FName((FName *)&local_60,L"VLogTestObjC");
    pAVar11 = NewObject<AActor>((UObject *)
                                ((TObjectPtr<ULevel>_u_0 *)((longlong)FVar7 + 0x30))->DebugPtr,
                                *pFVar8,RF_Transient,(UObject *)0x0,false,
                                (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    pFVar8 = ::FName::FName((FName *)&local_50,L"VLogTestObjD");
    pAVar12 = NewObject<AActor>((UObject *)
                                ((TObjectPtr<ULevel>_u_0 *)((longlong)FVar7 + 0x30))->DebugPtr,
                                *pFVar8,RF_Transient,(UObject *)0x0,false,
                                (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    pFVar8 = ::FName::FName((FName *)&local_a8,L"VLogTestObjE");
    local_78 = NewObject<AActor>((UObject *)
                                 ((TObjectPtr<ULevel>_u_0 *)((longlong)local_res8 + 0x30))->DebugPtr
                                 ,*pFVar8,RF_Transient,(UObject *)0x0,false,
                                 (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    FVisualLogger::Redirect((UObject *)local_78,(UObject *)pAVar12);
    FVisualLogger::Redirect((UObject *)pAVar12,(UObject *)pAVar10);
    FVisualLogger::Redirect((UObject *)pAVar10,(UObject *)pAVar9);
    FVisualLogger::Redirect((UObject *)pAVar11,(UObject *)pAVar9);
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    if (pAVar9 != (AActor *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pAVar9);
      }
      local_res8.ObjectIndex = 0;
      local_res8.ObjectSerialNumber = 0;
      local_res20 = pAVar9;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pAVar9);
      }
      FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res20);
    }
    local_88.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)
         TMapBase<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>_>
         ::Find((TMapBase<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>_>
                 *)this_01,(FObjectKey *)&local_res8);
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    if (pAVar10 != (AActor *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pAVar10);
      }
      local_res8.ObjectIndex = 0;
      local_res8.ObjectSerialNumber = 0;
      local_res20 = pAVar10;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pAVar10);
      }
      FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res20);
    }
    pAVar13 = (AActor *)
              TMapBase<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>_>
              ::Find((TMapBase<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>_>
                      *)this_01,(FObjectKey *)&local_res8);
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)pAVar13;
    if (pAVar12 != (AActor *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pAVar12);
      }
      local_res8.ObjectIndex = 0;
      local_res8.ObjectSerialNumber = 0;
      local_res20 = pAVar12;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pAVar12);
      }
      FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res20);
    }
    local_res8 = (FWeakObjectPtr)
                 TMapBase<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>_>
                 ::Find((TMapBase<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>_>
                         *)this_01,(FObjectKey *)&local_res8);
    if ((((TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *)
          local_88.Data.AllocatorInstance.Data !=
          (TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *)0x0)
        && (pAVar13 != (AActor *)0x0)) && (local_res8 != (FWeakObjectPtr)0x0)) {
      iVar1 = *(int *)(local_88.Data.AllocatorInstance.Data + 8);
      ::FString::PrintfImpl(&local_88,L"%s (%s:%d)");
      FVar16.Data = (FScriptContainerElement *)L"";
      if (local_88.Data.ArrayNum != 0) {
        FVar16.Data = local_88.Data.AllocatorInstance.Data;
      }
      bVar5 = FAutomationTestBase::TestTrue
                        ((FAutomationTestBase *)this,(wchar_t *)FVar16.Data,iVar1 == 4);
      if ((TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *)
          local_88.Data.AllocatorInstance.Data !=
          (TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *)0x0)
      {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      if (!bVar5) {
        return false;
      }
      iVar1 = *(int *)(local_b8.Data.AllocatorInstance.Data + 8);
      ::FString::PrintfImpl(&local_b8,L"%s (%s:%d)");
      FVar16.Data = (FScriptContainerElement *)L"";
      if (local_b8.Data.ArrayNum != 0) {
        FVar16.Data = local_b8.Data.AllocatorInstance.Data;
      }
      bVar5 = FAutomationTestBase::TestTrue
                        ((FAutomationTestBase *)this,(wchar_t *)FVar16.Data,iVar1 == 2);
      if ((AActor *)local_b8.Data.AllocatorInstance.Data != (AActor *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
      if (!bVar5) {
        return false;
      }
      iVar1 = *(int *)((longlong)local_res8 + 8);
      ::FString::PrintfImpl(&local_b8,L"%s (%s:%d)");
      FVar16.Data = (FScriptContainerElement *)L"";
      if (local_b8.Data.ArrayNum != 0) {
        FVar16.Data = local_b8.Data.AllocatorInstance.Data;
      }
      bVar5 = FAutomationTestBase::TestTrue
                        ((FAutomationTestBase *)this,(wchar_t *)FVar16.Data,iVar1 == 1);
      if ((AActor *)local_b8.Data.AllocatorInstance.Data != (AActor *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
      if (!bVar5) {
        return false;
      }
      pAVar13 = (AActor *)FVisualLogger::FindRedirection((UObject *)pAVar10);
      ::FString::PrintfImpl(&local_b8,L"%s (%s:%d)");
      FVar16.Data = (FScriptContainerElement *)L"";
      if (local_b8.Data.ArrayNum != 0) {
        FVar16.Data = local_b8.Data.AllocatorInstance.Data;
      }
      bVar5 = FAutomationTestBase::TestTrue
                        ((FAutomationTestBase *)this,(wchar_t *)FVar16.Data,pAVar13 == pAVar9);
      if ((AActor *)local_b8.Data.AllocatorInstance.Data != (AActor *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
      if (!bVar5) {
        return false;
      }
      pAVar13 = (AActor *)FVisualLogger::FindRedirection((UObject *)pAVar11);
      ::FString::PrintfImpl(&local_b8,L"%s (%s:%d)");
      FVar16.Data = (FScriptContainerElement *)L"";
      if (local_b8.Data.ArrayNum != 0) {
        FVar16.Data = local_b8.Data.AllocatorInstance.Data;
      }
      bVar5 = FAutomationTestBase::TestTrue
                        ((FAutomationTestBase *)this,(wchar_t *)FVar16.Data,pAVar13 == pAVar9);
      if ((AActor *)local_b8.Data.AllocatorInstance.Data != (AActor *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
      if (!bVar5) {
        return false;
      }
      pAVar13 = (AActor *)FVisualLogger::FindRedirection((UObject *)pAVar12);
      ::FString::PrintfImpl(&local_b8,L"%s (%s:%d)");
      FVar16.Data = (FScriptContainerElement *)L"";
      if (local_b8.Data.ArrayNum != 0) {
        FVar16.Data = local_b8.Data.AllocatorInstance.Data;
      }
      bVar5 = FAutomationTestBase::TestTrue
                        ((FAutomationTestBase *)this,(wchar_t *)FVar16.Data,pAVar13 == pAVar9);
      if ((AActor *)local_b8.Data.AllocatorInstance.Data != (AActor *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
      if (!bVar5) {
        return false;
      }
      pAVar13 = (AActor *)FVisualLogger::FindRedirection((UObject *)local_78);
      ::FString::PrintfImpl(&local_b8,L"%s (%s:%d)");
      FVar16.Data = (FScriptContainerElement *)L"";
      if (local_b8.Data.ArrayNum != 0) {
        FVar16.Data = local_b8.Data.AllocatorInstance.Data;
      }
      bVar5 = FAutomationTestBase::TestTrue
                        ((FAutomationTestBase *)this,(wchar_t *)FVar16.Data,pAVar13 == pAVar9);
      if ((AActor *)local_b8.Data.AllocatorInstance.Data != (AActor *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
      if (!bVar5) {
        return false;
      }
      FVisualLogger::Redirect((UObject *)pAVar12,(UObject *)pAVar11);
      local_res8.ObjectIndex = 0;
      local_res8.ObjectSerialNumber = 0;
      if (pAVar9 != (AActor *)0x0) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pAVar9);
        }
        local_res8.ObjectIndex = 0;
        local_res8.ObjectSerialNumber = 0;
        local_res20 = pAVar9;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pAVar9);
        }
        FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res20);
      }
      local_88.Data.AllocatorInstance.Data =
           (FScriptContainerElement *)
           TMapBase<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>_>
           ::Find((TMapBase<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>_>
                   *)this_01,(FObjectKey *)&local_res8);
      local_res8.ObjectIndex = 0;
      local_res8.ObjectSerialNumber = 0;
      if (pAVar10 != (AActor *)0x0) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pAVar10);
        }
        local_res8.ObjectIndex = 0;
        local_res8.ObjectSerialNumber = 0;
        local_res20 = pAVar10;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pAVar10);
        }
        FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res20);
      }
      local_res20 = (AActor *)
                    TMapBase<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>_>
                    ::Find((TMapBase<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>_>
                            *)this_01,(FObjectKey *)&local_res8);
      local_res8.ObjectIndex = 0;
      local_res8.ObjectSerialNumber = 0;
      if (pAVar11 != (AActor *)0x0) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pAVar11);
        }
        local_res8.ObjectIndex = 0;
        local_res8.ObjectSerialNumber = 0;
        local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)pAVar11;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pAVar11);
        }
        FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_b8);
      }
      FVar14 = (FName)TMapBase<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>_>
                      ::Find((TMapBase<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>_>
                              *)this_01,(FObjectKey *)&local_res8);
      local_res8.ObjectIndex = 0;
      local_res8.ObjectSerialNumber = 0;
      local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)FVar14;
      if (pAVar12 != (AActor *)0x0) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pAVar12);
        }
        local_res8.ObjectIndex = 0;
        local_res8.ObjectSerialNumber = 0;
        local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)pAVar12;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pAVar12);
        }
        FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_b8);
      }
      pTVar15 = TMapBase<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>_>
                ::Find((TMapBase<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>_>
                        *)this_01,(FObjectKey *)&local_res8);
      if ((((TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *)
            local_88.Data.AllocatorInstance.Data !=
            (TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *)0x0
           ) && (local_res20 != (AActor *)0x0)) &&
         ((FVar14 != (FName)0x0 &&
          (pTVar15 !=
           (TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *)0x0)
          ))) {
        iVar1 = *(int *)(local_88.Data.AllocatorInstance.Data + 8);
        ::FString::PrintfImpl(&local_b8,L"%s (%s:%d)");
        FVar16.Data = (FScriptContainerElement *)L"";
        if (local_b8.Data.ArrayNum != 0) {
          FVar16.Data = local_b8.Data.AllocatorInstance.Data;
        }
        bVar5 = FAutomationTestBase::TestTrue
                          ((FAutomationTestBase *)this,(wchar_t *)FVar16.Data,iVar1 == 4);
        if ((AActor *)local_b8.Data.AllocatorInstance.Data != (AActor *)0x0) {
          FMemory::Free(local_b8.Data.AllocatorInstance.Data);
        }
        if (!bVar5) {
          return false;
        }
        lVar4 = local_res20->_padding_;
        ::FString::PrintfImpl(&local_b8,L"%s (%s:%d)");
        FVar16.Data = (FScriptContainerElement *)L"";
        if (local_b8.Data.ArrayNum != 0) {
          FVar16.Data = local_b8.Data.AllocatorInstance.Data;
        }
        bVar5 = FAutomationTestBase::TestTrue
                          ((FAutomationTestBase *)this,(wchar_t *)FVar16.Data,(int)lVar4 == 0);
        if ((AActor *)local_b8.Data.AllocatorInstance.Data != (AActor *)0x0) {
          FMemory::Free(local_b8.Data.AllocatorInstance.Data);
        }
        if (!bVar5) {
          return false;
        }
        iVar1 = *(int *)((longlong)local_98.Data.AllocatorInstance.Data + 8);
        ::FString::PrintfImpl(&local_98,L"%s (%s:%d)");
        FVar14 = (FName)L"";
        if (local_98.Data.ArrayNum != 0) {
          FVar14 = (FName)local_98.Data.AllocatorInstance;
        }
        bVar5 = FAutomationTestBase::TestTrue
                          ((FAutomationTestBase *)this,(wchar_t *)FVar14,iVar1 == 2);
        if ((FName)local_98.Data.AllocatorInstance.Data != (FName)0x0) {
          FMemory::Free(local_98.Data.AllocatorInstance.Data);
        }
        if (!bVar5) {
          return false;
        }
        iVar1 = pTVar15->ArrayNum;
        ::FString::PrintfImpl(&local_98,L"%s (%s:%d)");
        FVar14 = (FName)L"";
        if (local_98.Data.ArrayNum != 0) {
          FVar14 = (FName)local_98.Data.AllocatorInstance;
        }
        bVar5 = FAutomationTestBase::TestTrue
                          ((FAutomationTestBase *)this,(wchar_t *)FVar14,iVar1 == 1);
        if ((FName)local_98.Data.AllocatorInstance.Data != (FName)0x0) {
          FMemory::Free(local_98.Data.AllocatorInstance.Data);
        }
        if (!bVar5) {
          return false;
        }
        pAVar10 = (AActor *)FVisualLogger::FindRedirection((UObject *)pAVar10);
        ::FString::PrintfImpl(&local_98,L"%s (%s:%d)");
        FVar14 = (FName)L"";
        if (local_98.Data.ArrayNum != 0) {
          FVar14 = (FName)local_98.Data.AllocatorInstance;
        }
        bVar5 = FAutomationTestBase::TestTrue
                          ((FAutomationTestBase *)this,(wchar_t *)FVar14,pAVar10 == pAVar9);
        if ((FName)local_98.Data.AllocatorInstance.Data != (FName)0x0) {
          FMemory::Free(local_98.Data.AllocatorInstance.Data);
        }
        if (!bVar5) {
          return false;
        }
        pAVar10 = (AActor *)FVisualLogger::FindRedirection((UObject *)pAVar11);
        ::FString::PrintfImpl(&local_70,L"%s (%s:%d)");
        FVar14 = (FName)L"";
        if (local_70.Data.ArrayNum != 0) {
          FVar14 = (FName)local_70.Data.AllocatorInstance;
        }
        bVar5 = FAutomationTestBase::TestTrue
                          ((FAutomationTestBase *)this,(wchar_t *)FVar14,pAVar10 == pAVar9);
        if ((FName)local_70.Data.AllocatorInstance.Data != (FName)0x0) {
          FMemory::Free(local_70.Data.AllocatorInstance.Data);
        }
        if (!bVar5) {
          return false;
        }
        pAVar10 = (AActor *)FVisualLogger::FindRedirection((UObject *)pAVar12);
        ::FString::PrintfImpl(&local_60,L"%s (%s:%d)");
        FVar14 = (FName)L"";
        if (local_60.Data.ArrayNum != 0) {
          FVar14 = (FName)local_60.Data.AllocatorInstance;
        }
        bVar5 = FAutomationTestBase::TestTrue
                          ((FAutomationTestBase *)this,(wchar_t *)FVar14,pAVar10 == pAVar9);
        if ((FName)local_60.Data.AllocatorInstance.Data != (FName)0x0) {
          FMemory::Free(local_60.Data.AllocatorInstance.Data);
        }
        if (!bVar5) {
          return false;
        }
        pAVar10 = (AActor *)FVisualLogger::FindRedirection((UObject *)local_78);
        ::FString::PrintfImpl(&local_50,L"%s (%s:%d)");
        FVar14 = (FName)L"";
        if (local_50.Data.ArrayNum != 0) {
          FVar14 = (FName)local_50.Data.AllocatorInstance;
        }
        bVar5 = FAutomationTestBase::TestTrue
                          ((FAutomationTestBase *)this,(wchar_t *)FVar14,pAVar10 == pAVar9);
        if ((FName)local_50.Data.AllocatorInstance.Data != (FName)0x0) {
          FMemory::Free(local_50.Data.AllocatorInstance.Data);
          return bVar5;
        }
        return bVar5;
      }
    }
  }
  pcVar3 = *(code **)(*(longlong *)this + 0x28);
  ::FString::PrintfImpl(&local_a8,L"Expected \'%s\' to be not null.");
  (*pcVar3)(this,&local_a8,0);
  if ((FName)local_a8.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  return false;
}

// GetBeautifiedTestName @ 148995ce0

FString * __thiscall
FVisualLogRedirectionsWithinHierachyTest::GetBeautifiedTestName
          (FVisualLogRedirectionsWithinHierachyTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Engine.VisualLogger.Redirections.WithinHierachy"
                    );
  return __return_storage_ptr__;
}

