// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// GetTestFlags @ 148995fa0

EAutomationTestFlags __thiscall
FVisualLogRedirectionsDeepHierarchyToNewParentTest::GetTestFlags
          (FVisualLogRedirectionsDeepHierarchyToNewParentTest *this)

{
  return EngineFilter|ClientContext|EditorContext;
}

// IsStressTest @ 148995fb0

bool __thiscall
FVisualLogRedirectionsDeepHierarchyToNewParentTest::IsStressTest
          (FVisualLogRedirectionsDeepHierarchyToNewParentTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 148995fc0

uint __thiscall
FVisualLogRedirectionsDeepHierarchyToNewParentTest::GetRequiredDeviceNum
          (FVisualLogRedirectionsDeepHierarchyToNewParentTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 148995fd0

FString * __thiscall
FVisualLogRedirectionsDeepHierarchyToNewParentTest::GetTestSourceFileName
          (FVisualLogRedirectionsDeepHierarchyToNewParentTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VisualLogger\\VisualLoggerAutomationTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 148996000

int __thiscall
FVisualLogRedirectionsDeepHierarchyToNewParentTest::GetTestSourceFileLine
          (FVisualLogRedirectionsDeepHierarchyToNewParentTest *this)

{
  return 0x225;
}

// GetTests @ 148996010

/* WARNING: Removing unreachable block (ram,0x0001489960fd) */
/* WARNING: Removing unreachable block (ram,0x0001489961c8) */

void __thiscall
FVisualLogRedirectionsDeepHierarchyToNewParentTest::GetTests
          (FVisualLogRedirectionsDeepHierarchyToNewParentTest *this,
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
  
  ::FString::FString(&local_18,"System.Engine.VisualLogger.Redirections.DeepHierarchyToNewParent");
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

// RunTest @ 1489961f0

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
FVisualLogRedirectionsDeepHierarchyToNewParentTest::RunTest
          (FVisualLogRedirectionsDeepHierarchyToNewParentTest *this,FString *param_1)

{
  int iVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  EAutomationTestFlags EVar5;
  FWeakObjectPtr FVar6;
  FVisualLogger *this_00;
  TMap<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>_>
  *this_01;
  FName *pFVar7;
  FName FVar8;
  FName FVar9;
  FName FVar10;
  FName FVar11;
  AActor *pAVar12;
  TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar13;
  TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar14;
  ForAnyElementType FVar15;
  FWeakObjectPtr local_res8;
  AActor *local_res18;
  FName local_res20;
  FString local_a8;
  FString local_98;
  FString local_88;
  FName local_78;
  FString local_70;
  FName local_60;
  FName local_58;
  FName local_50;
  FName local_48 [2];
  
  EVar5 = (**(code **)(*(longlong *)this + 8))();
  FVar6 = (FWeakObjectPtr)::`anonymous_namespace'::GetSimpleEngineAutomationTestWorld(EVar5);
  if (FVar6 == (FWeakObjectPtr)0x0) {
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
  }
  else {
    local_res8 = FVar6;
    this_00 = FVisualLogger::Get();
    FVisualLogger::Cleanup(this_00,(UWorld *)FVar6,false);
    this_01 = FVisualLogger::GetRedirectionMap((UObject *)FVar6);
    pFVar7 = ::FName::FName(&local_60,L"VLogTestObjA");
    FVar8 = (FName)NewObject<AActor>((UObject *)
                                     ((TObjectPtr<ULevel>_u_0 *)((longlong)FVar6 + 0x30))->DebugPtr,
                                     *pFVar7,RF_Transient,(UObject *)0x0,false,
                                     (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    local_78 = FVar8;
    pFVar7 = ::FName::FName(&local_58,L"VLogTestObjB");
    FVar9 = (FName)NewObject<AActor>((UObject *)
                                     ((TObjectPtr<ULevel>_u_0 *)((longlong)FVar6 + 0x30))->DebugPtr,
                                     *pFVar7,RF_Transient,(UObject *)0x0,false,
                                     (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    pFVar7 = ::FName::FName(&local_50,L"VLogTestObjC");
    FVar10 = (FName)NewObject<AActor>((UObject *)
                                      ((TObjectPtr<ULevel>_u_0 *)((longlong)FVar6 + 0x30))->DebugPtr
                                      ,*pFVar7,RF_Transient,(UObject *)0x0,false,
                                      (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    pFVar7 = ::FName::FName(local_48,L"VLogTestObjD");
    FVar11 = (FName)NewObject<AActor>((UObject *)
                                      ((TObjectPtr<ULevel>_u_0 *)((longlong)FVar6 + 0x30))->DebugPtr
                                      ,*pFVar7,RF_Transient,(UObject *)0x0,false,
                                      (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    pFVar7 = ::FName::FName(&local_res20,L"VLogTestObjE");
    pAVar12 = NewObject<AActor>((UObject *)
                                ((TObjectPtr<ULevel>_u_0 *)((longlong)FVar6 + 0x30))->DebugPtr,
                                *pFVar7,RF_Transient,(UObject *)0x0,false,
                                (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    pFVar7 = ::FName::FName((FName *)&local_a8,L"VLogTestObjF");
    local_res18 = NewObject<AActor>((UObject *)
                                    ((TObjectPtr<ULevel>_u_0 *)((longlong)local_res8 + 0x30))->
                                    DebugPtr,*pFVar7,RF_Transient,(UObject *)0x0,false,
                                    (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    FVisualLogger::Redirect((UObject *)FVar9,(UObject *)FVar8);
    FVisualLogger::Redirect((UObject *)FVar10,(UObject *)FVar9);
    FVisualLogger::Redirect((UObject *)FVar11,(UObject *)FVar10);
    FVisualLogger::Redirect((UObject *)pAVar12,(UObject *)FVar11);
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    if (FVar8 != (FName)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)FVar8);
      }
      local_res8.ObjectIndex = 0;
      local_res8.ObjectSerialNumber = 0;
      local_res20 = FVar8;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)FVar8);
      }
      FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res20);
    }
    local_70.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)
         TMapBase<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>_>
         ::Find((TMapBase<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>_>
                 *)this_01,(FObjectKey *)&local_res8);
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    if (FVar9 != (FName)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)FVar9);
      }
      local_res8.ObjectIndex = 0;
      local_res8.ObjectSerialNumber = 0;
      local_res20 = FVar9;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)FVar9);
      }
      FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res20);
    }
    pTVar13 = TMapBase<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>_>
              ::Find((TMapBase<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>_>
                      *)this_01,(FObjectKey *)&local_res8);
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)pTVar13;
    if (FVar10 != (FName)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)FVar10);
      }
      local_res8.ObjectIndex = 0;
      local_res8.ObjectSerialNumber = 0;
      local_res20 = FVar10;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)FVar10);
      }
      FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res20);
    }
    pTVar14 = TMapBase<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>_>
              ::Find((TMapBase<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>_>
                      *)this_01,(FObjectKey *)&local_res8);
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)pTVar14;
    if (FVar11 != (FName)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)FVar11);
      }
      local_res8.ObjectIndex = 0;
      local_res8.ObjectSerialNumber = 0;
      local_res20 = FVar11;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)FVar11);
      }
      FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res20);
    }
    local_res8 = (FWeakObjectPtr)
                 TMapBase<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>_>
                 ::Find((TMapBase<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>_>
                         *)this_01,(FObjectKey *)&local_res8);
    if (((((TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *)
           local_70.Data.AllocatorInstance.Data !=
           (TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *)0x0)
         && (pTVar13 !=
             (TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *)
             0x0)) &&
        (pTVar14 !=
         (TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *)0x0))
       && (local_res8 != (FWeakObjectPtr)0x0)) {
      iVar1 = *(int *)(local_70.Data.AllocatorInstance.Data + 8);
      ::FString::PrintfImpl(&local_70,L"%s (%s:%d)");
      FVar15.Data = (FScriptContainerElement *)L"";
      if (local_70.Data.ArrayNum != 0) {
        FVar15.Data = local_70.Data.AllocatorInstance.Data;
      }
      bVar4 = FAutomationTestBase::TestTrue
                        ((FAutomationTestBase *)this,(wchar_t *)FVar15.Data,iVar1 == 4);
      if ((TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *)
          local_70.Data.AllocatorInstance.Data !=
          (TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *)0x0)
      {
        FMemory::Free(local_70.Data.AllocatorInstance.Data);
      }
      if (!bVar4) {
        return false;
      }
      iVar1 = *(int *)(local_88.Data.AllocatorInstance.Data + 8);
      ::FString::PrintfImpl(&local_88,L"%s (%s:%d)");
      FVar15.Data = (FScriptContainerElement *)L"";
      if (local_88.Data.ArrayNum != 0) {
        FVar15.Data = local_88.Data.AllocatorInstance.Data;
      }
      bVar4 = FAutomationTestBase::TestTrue
                        ((FAutomationTestBase *)this,(wchar_t *)FVar15.Data,iVar1 == 3);
      if ((TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *)
          local_88.Data.AllocatorInstance.Data !=
          (TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *)0x0)
      {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      if (!bVar4) {
        return false;
      }
      iVar1 = *(int *)(local_98.Data.AllocatorInstance.Data + 8);
      ::FString::PrintfImpl(&local_98,L"%s (%s:%d)");
      FVar15.Data = (FScriptContainerElement *)L"";
      if (local_98.Data.ArrayNum != 0) {
        FVar15.Data = local_98.Data.AllocatorInstance.Data;
      }
      bVar4 = FAutomationTestBase::TestTrue
                        ((FAutomationTestBase *)this,(wchar_t *)FVar15.Data,iVar1 == 2);
      if ((TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *)
          local_98.Data.AllocatorInstance.Data !=
          (TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *)0x0)
      {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      if (!bVar4) {
        return false;
      }
      iVar1 = *(int *)((longlong)local_res8 + 8);
      ::FString::PrintfImpl(&local_98,L"%s (%s:%d)");
      FVar15.Data = (FScriptContainerElement *)L"";
      if (local_98.Data.ArrayNum != 0) {
        FVar15.Data = local_98.Data.AllocatorInstance.Data;
      }
      bVar4 = FAutomationTestBase::TestTrue
                        ((FAutomationTestBase *)this,(wchar_t *)FVar15.Data,iVar1 == 1);
      if ((TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *)
          local_98.Data.AllocatorInstance.Data !=
          (TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *)0x0)
      {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      if (!bVar4) {
        return false;
      }
      FVisualLogger::Redirect((UObject *)FVar9,(UObject *)local_res18);
      FVar8 = local_78;
      local_res8.ObjectIndex = 0;
      local_res8.ObjectSerialNumber = 0;
      if (local_78 != (FName)0x0) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)local_78);
        }
        local_res8.ObjectIndex = 0;
        local_res8.ObjectSerialNumber = 0;
        local_res20 = FVar8;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)FVar8);
        }
        FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res20);
      }
      local_78 = (FName)TMapBase<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>_>
                        ::Find((TMapBase<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>_>
                                *)this_01,(FObjectKey *)&local_res8);
      local_res8.ObjectIndex = 0;
      local_res8.ObjectSerialNumber = 0;
      if (FVar9 != (FName)0x0) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)FVar9);
        }
        local_res8.ObjectIndex = 0;
        local_res8.ObjectSerialNumber = 0;
        local_res20 = FVar9;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)FVar9);
        }
        FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res20);
      }
      local_98.Data.AllocatorInstance.Data =
           (FScriptContainerElement *)
           TMapBase<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>_>
           ::Find((TMapBase<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>_>
                   *)this_01,(FObjectKey *)&local_res8);
      local_res8.ObjectIndex = 0;
      local_res8.ObjectSerialNumber = 0;
      if (FVar10 != (FName)0x0) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)FVar10);
        }
        local_res8.ObjectIndex = 0;
        local_res8.ObjectSerialNumber = 0;
        local_res20 = FVar10;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)FVar10);
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
      if (FVar11 != (FName)0x0) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)FVar11);
        }
        local_res8.ObjectIndex = 0;
        local_res8.ObjectSerialNumber = 0;
        local_res20 = FVar11;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)FVar11);
        }
        FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res20);
      }
      pTVar13 = TMapBase<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>_>
                ::Find((TMapBase<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>_>
                        *)this_01,(FObjectKey *)&local_res8);
      pAVar12 = local_res18;
      local_res8.ObjectIndex = 0;
      local_res8.ObjectSerialNumber = 0;
      if (local_res18 != (AActor *)0x0) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)local_res18);
        }
        local_res8.ObjectIndex = 0;
        local_res8.ObjectSerialNumber = 0;
        local_res18 = pAVar12;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pAVar12);
        }
        FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res18);
      }
      pTVar14 = TMapBase<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>_>
                ::Find((TMapBase<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>_>
                        *)this_01,(FObjectKey *)&local_res8);
      FVar3.Data = local_88.Data.AllocatorInstance.Data;
      FVar15.Data = local_98.Data.AllocatorInstance.Data;
      if (((local_78 != (FName)0x0) &&
          ((TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *)
           local_98.Data.AllocatorInstance.Data !=
           (TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *)0x0)
          ) && (((TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
                  *)local_88.Data.AllocatorInstance.Data !=
                 (TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
                  *)0x0 &&
                ((pTVar13 !=
                  (TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
                   *)0x0 &&
                 (pTVar14 !=
                  (TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
                   *)0x0)))))) {
        iVar1 = *(int *)((longlong)local_78 + 8);
        ::FString::PrintfImpl(&local_a8,L"%s (%s:%d)");
        FVar8 = (FName)L"";
        if (local_a8.Data.ArrayNum != 0) {
          FVar8 = (FName)local_a8.Data.AllocatorInstance.Data;
        }
        bVar4 = FAutomationTestBase::TestTrue
                          ((FAutomationTestBase *)this,(wchar_t *)FVar8,iVar1 == 0);
        if ((FName)local_a8.Data.AllocatorInstance.Data != (FName)0x0) {
          FMemory::Free(local_a8.Data.AllocatorInstance.Data);
        }
        if (!bVar4) {
          return false;
        }
        iVar1 = pTVar14->ArrayNum;
        ::FString::PrintfImpl(&local_a8,L"%s (%s:%d)");
        FVar8 = (FName)L"";
        if (local_a8.Data.ArrayNum != 0) {
          FVar8 = (FName)local_a8.Data.AllocatorInstance.Data;
        }
        bVar4 = FAutomationTestBase::TestTrue
                          ((FAutomationTestBase *)this,(wchar_t *)FVar8,iVar1 == 4);
        if ((FName)local_a8.Data.AllocatorInstance.Data != (FName)0x0) {
          FMemory::Free(local_a8.Data.AllocatorInstance.Data);
        }
        if (!bVar4) {
          return false;
        }
        iVar1 = *(int *)(FVar15.Data + 8);
        ::FString::PrintfImpl(&local_a8,L"%s (%s:%d)");
        FVar8 = (FName)L"";
        if (local_a8.Data.ArrayNum != 0) {
          FVar8 = (FName)local_a8.Data.AllocatorInstance.Data;
        }
        bVar4 = FAutomationTestBase::TestTrue
                          ((FAutomationTestBase *)this,(wchar_t *)FVar8,iVar1 == 3);
        if ((FName)local_a8.Data.AllocatorInstance.Data != (FName)0x0) {
          FMemory::Free(local_a8.Data.AllocatorInstance.Data);
        }
        if (!bVar4) {
          return false;
        }
        iVar1 = *(int *)(FVar3.Data + 8);
        ::FString::PrintfImpl(&local_a8,L"%s (%s:%d)");
        FVar8 = (FName)L"";
        if (local_a8.Data.ArrayNum != 0) {
          FVar8 = (FName)local_a8.Data.AllocatorInstance.Data;
        }
        bVar4 = FAutomationTestBase::TestTrue
                          ((FAutomationTestBase *)this,(wchar_t *)FVar8,iVar1 == 2);
        if ((FName)local_a8.Data.AllocatorInstance.Data != (FName)0x0) {
          FMemory::Free(local_a8.Data.AllocatorInstance.Data);
        }
        if (!bVar4) {
          return false;
        }
        iVar1 = pTVar13->ArrayNum;
        ::FString::PrintfImpl(&local_a8,L"%s (%s:%d)");
        FVar8 = (FName)L"";
        if (local_a8.Data.ArrayNum != 0) {
          FVar8 = (FName)local_a8.Data.AllocatorInstance.Data;
        }
        bVar4 = FAutomationTestBase::TestTrue
                          ((FAutomationTestBase *)this,(wchar_t *)FVar8,iVar1 == 1);
        if ((FName)local_a8.Data.AllocatorInstance.Data != (FName)0x0) {
          FMemory::Free(local_a8.Data.AllocatorInstance.Data);
          return bVar4;
        }
        return bVar4;
      }
    }
  }
  pcVar2 = *(code **)(*(longlong *)this + 0x28);
  ::FString::PrintfImpl(&local_a8,L"Expected \'%s\' to be not null.");
  (*pcVar2)(this,&local_a8,0);
  if ((FName)local_a8.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  return false;
}

// GetBeautifiedTestName @ 148996ba0

FString * __thiscall
FVisualLogRedirectionsDeepHierarchyToNewParentTest::GetBeautifiedTestName
          (FVisualLogRedirectionsDeepHierarchyToNewParentTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "System.Engine.VisualLogger.Redirections.DeepHierarchyToNewParent");
  return __return_storage_ptr__;
}

