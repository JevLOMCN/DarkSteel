// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// GetTestFlags @ 1489940d0

EAutomationTestFlags __thiscall
FVisualLogRedirectionsCreationOrderTest::GetTestFlags(FVisualLogRedirectionsCreationOrderTest *this)

{
  return EngineFilter|ClientContext|EditorContext;
}

// IsStressTest @ 148994180

bool __thiscall
FVisualLogRedirectionsCreationOrderTest::IsStressTest(FVisualLogRedirectionsCreationOrderTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 148994190

uint __thiscall
FVisualLogRedirectionsCreationOrderTest::GetRequiredDeviceNum
          (FVisualLogRedirectionsCreationOrderTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 148994220

FString * __thiscall
FVisualLogRedirectionsCreationOrderTest::GetTestSourceFileName
          (FVisualLogRedirectionsCreationOrderTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VisualLogger\\VisualLoggerAutomationTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 148994250

int __thiscall
FVisualLogRedirectionsCreationOrderTest::GetTestSourceFileLine
          (FVisualLogRedirectionsCreationOrderTest *this)

{
  return 0x1a5;
}

// GetTests @ 1489942c0

/* WARNING: Removing unreachable block (ram,0x0001489943ad) */
/* WARNING: Removing unreachable block (ram,0x000148994478) */

void __thiscall
FVisualLogRedirectionsCreationOrderTest::GetTests
          (FVisualLogRedirectionsCreationOrderTest *this,
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
  
  ::FString::FString(&local_18,"System.Engine.VisualLogger.Redirections.CreationOrder");
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

// RunTest @ 1489944d0

/* WARNING: Type propagation algorithm not settling */
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
FVisualLogRedirectionsCreationOrderTest::RunTest
          (FVisualLogRedirectionsCreationOrderTest *this,FString *param_1)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  EAutomationTestFlags EVar6;
  UWorld *pUVar7;
  TMap<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>_>
  *this_00;
  FName *pFVar8;
  UWorld *pUVar9;
  UWorld *pUVar10;
  AActor *pAVar11;
  TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar12;
  UWorld *pUVar13;
  TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar14;
  ForAnyElementType FVar15;
  FName FVar16;
  FWeakObjectPtr local_res8;
  UWorld *local_res20;
  FString local_a8;
  FString local_98;
  FString local_88;
  UWorld *local_78;
  FVisualLogger *local_70;
  FString local_68;
  FString local_58;
  FString local_48;
  
  EVar6 = (**(code **)(*(longlong *)this + 8))();
  pUVar7 = ::`anonymous_namespace'::GetSimpleEngineAutomationTestWorld(EVar6);
  local_res20 = pUVar7;
  if (pUVar7 != (UWorld *)0x0) {
    local_70 = FVisualLogger::Get();
    FVisualLogger::Cleanup(local_70,pUVar7,false);
    this_00 = FVisualLogger::GetRedirectionMap((UObject *)pUVar7);
    iVar1 = *(int *)&this_00->field_0x34;
    iVar2 = *(int *)&this_00->field_0x8;
    ::FString::PrintfImpl(&local_a8,L"%s (%s:%d)");
    FVar16 = (FName)L"";
    if (local_a8.Data.ArrayNum != 0) {
      FVar16 = (FName)local_a8.Data.AllocatorInstance.Data;
    }
    bVar5 = FAutomationTestBase::TestTrue
                      ((FAutomationTestBase *)this,(wchar_t *)FVar16,iVar2 == iVar1);
    if ((FName)local_a8.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    if (!bVar5) {
      return false;
    }
    pFVar8 = ::FName::FName((FName *)&local_88,L"VLogTestObjA");
    pUVar9 = (UWorld *)
             NewObject<AActor>((UObject *)(pUVar7->PersistentLevel).field0_0x0.DebugPtr,*pFVar8,
                               RF_Transient,(UObject *)0x0,false,(FObjectInstancingGraph *)0x0,
                               (UPackage *)0x0);
    pFVar8 = ::FName::FName((FName *)&local_58,L"VLogTestObjB");
    pUVar10 = (UWorld *)
              NewObject<AActor>((UObject *)(pUVar7->PersistentLevel).field0_0x0.DebugPtr,*pFVar8,
                                RF_Transient,(UObject *)0x0,false,(FObjectInstancingGraph *)0x0,
                                (UPackage *)0x0);
    pFVar8 = ::FName::FName((FName *)&local_48,L"VLogTestObjC");
    pUVar7 = (UWorld *)
             NewObject<AActor>((UObject *)(pUVar7->PersistentLevel).field0_0x0.DebugPtr,*pFVar8,
                               RF_Transient,(UObject *)0x0,false,(FObjectInstancingGraph *)0x0,
                               (UPackage *)0x0);
    pFVar8 = ::FName::FName((FName *)&local_a8,L"VLogTestObjD");
    pAVar11 = NewObject<AActor>((UObject *)(local_res20->PersistentLevel).field0_0x0.DebugPtr,
                                *pFVar8,RF_Transient,(UObject *)0x0,false,
                                (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    FVisualLogger::Redirect((UObject *)pUVar10,(UObject *)pUVar9);
    FVisualLogger::Redirect((UObject *)pUVar7,(UObject *)pUVar10);
    FVisualLogger::Redirect((UObject *)pAVar11,(UObject *)pUVar7);
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    if (pUVar9 != (UWorld *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar9);
      }
      local_res8.ObjectIndex = 0;
      local_res8.ObjectSerialNumber = 0;
      local_78 = pUVar9;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar9);
      }
      FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_78);
    }
    local_68.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)
         TMapBase<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>_>
         ::Find((TMapBase<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>_>
                 *)this_00,(FObjectKey *)&local_res8);
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    if (pUVar10 != (UWorld *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar10);
      }
      local_res8.ObjectIndex = 0;
      local_res8.ObjectSerialNumber = 0;
      local_78 = pUVar10;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar10);
      }
      FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_78);
    }
    pTVar12 = TMapBase<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>_>
              ::Find((TMapBase<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>_>
                      *)this_00,(FObjectKey *)&local_res8);
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)pTVar12;
    if (pUVar7 != (UWorld *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar7);
      }
      local_res8.ObjectIndex = 0;
      local_res8.ObjectSerialNumber = 0;
      local_78 = pUVar7;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar7);
      }
      FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_78);
    }
    local_res8 = (FWeakObjectPtr)
                 TMapBase<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>_>
                 ::Find((TMapBase<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>_>
                         *)this_00,(FObjectKey *)&local_res8);
    if ((((TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *)
          local_68.Data.AllocatorInstance.Data !=
          (TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *)0x0)
        && (pTVar12 !=
            (TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *)0x0
           )) && (local_res8 != (FWeakObjectPtr)0x0)) {
      iVar1 = *(int *)(local_68.Data.AllocatorInstance.Data + 8);
      ::FString::PrintfImpl(&local_68,L"%s (%s:%d)");
      FVar15.Data = (FScriptContainerElement *)L"";
      if (local_68.Data.ArrayNum != 0) {
        FVar15.Data = local_68.Data.AllocatorInstance.Data;
      }
      bVar5 = FAutomationTestBase::TestTrue
                        ((FAutomationTestBase *)this,(wchar_t *)FVar15.Data,iVar1 == 3);
      if ((TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *)
          local_68.Data.AllocatorInstance.Data !=
          (TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *)0x0)
      {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      if (!bVar5) {
        return false;
      }
      iVar1 = *(int *)(local_98.Data.AllocatorInstance.Data + 8);
      ::FString::PrintfImpl(&local_98,L"%s (%s:%d)");
      FVar15.Data = (FScriptContainerElement *)L"";
      if (local_98.Data.ArrayNum != 0) {
        FVar15.Data = local_98.Data.AllocatorInstance.Data;
      }
      bVar5 = FAutomationTestBase::TestTrue
                        ((FAutomationTestBase *)this,(wchar_t *)FVar15.Data,iVar1 == 2);
      if ((TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *)
          local_98.Data.AllocatorInstance.Data !=
          (TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *)0x0)
      {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      if (!bVar5) {
        return false;
      }
      iVar1 = *(int *)((longlong)local_res8 + 8);
      ::FString::PrintfImpl(&local_98,L"%s (%s:%d)");
      FVar15.Data = (FScriptContainerElement *)L"";
      if (local_98.Data.ArrayNum != 0) {
        FVar15.Data = local_98.Data.AllocatorInstance.Data;
      }
      bVar5 = FAutomationTestBase::TestTrue
                        ((FAutomationTestBase *)this,(wchar_t *)FVar15.Data,iVar1 == 1);
      if ((TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *)
          local_98.Data.AllocatorInstance.Data !=
          (TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *)0x0)
      {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      if (!bVar5) {
        return false;
      }
      pUVar13 = (UWorld *)FVisualLogger::FindRedirection((UObject *)pUVar10);
      ::FString::PrintfImpl(&local_98,L"%s (%s:%d)");
      FVar15.Data = (FScriptContainerElement *)L"";
      if (local_98.Data.ArrayNum != 0) {
        FVar15.Data = local_98.Data.AllocatorInstance.Data;
      }
      bVar5 = FAutomationTestBase::TestTrue
                        ((FAutomationTestBase *)this,(wchar_t *)FVar15.Data,pUVar13 == pUVar9);
      if ((TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *)
          local_98.Data.AllocatorInstance.Data !=
          (TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *)0x0)
      {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      if (!bVar5) {
        return false;
      }
      pUVar13 = (UWorld *)FVisualLogger::FindRedirection((UObject *)pUVar7);
      ::FString::PrintfImpl(&local_98,L"%s (%s:%d)");
      FVar15.Data = (FScriptContainerElement *)L"";
      if (local_98.Data.ArrayNum != 0) {
        FVar15.Data = local_98.Data.AllocatorInstance.Data;
      }
      bVar5 = FAutomationTestBase::TestTrue
                        ((FAutomationTestBase *)this,(wchar_t *)FVar15.Data,pUVar13 == pUVar9);
      if ((TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *)
          local_98.Data.AllocatorInstance.Data !=
          (TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *)0x0)
      {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      if (!bVar5) {
        return false;
      }
      pUVar13 = (UWorld *)FVisualLogger::FindRedirection((UObject *)pAVar11);
      ::FString::PrintfImpl(&local_98,L"%s (%s:%d)");
      FVar15.Data = (FScriptContainerElement *)L"";
      if (local_98.Data.ArrayNum != 0) {
        FVar15.Data = local_98.Data.AllocatorInstance.Data;
      }
      bVar5 = FAutomationTestBase::TestTrue
                        ((FAutomationTestBase *)this,(wchar_t *)FVar15.Data,pUVar13 == pUVar9);
      if ((TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *)
          local_98.Data.AllocatorInstance.Data !=
          (TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *)0x0)
      {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      if (!bVar5) {
        return false;
      }
      FVisualLogger::Cleanup(local_70,local_res20,false);
      FVisualLogger::Redirect((UObject *)pAVar11,(UObject *)pUVar7);
      FVisualLogger::Redirect((UObject *)pUVar7,(UObject *)pUVar10);
      FVisualLogger::Redirect((UObject *)pUVar10,(UObject *)pUVar9);
      local_res8.ObjectIndex = 0;
      local_res8.ObjectSerialNumber = 0;
      if (pUVar9 != (UWorld *)0x0) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar9);
        }
        local_res8.ObjectIndex = 0;
        local_res8.ObjectSerialNumber = 0;
        local_res20 = pUVar9;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar9);
        }
        FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res20);
      }
      local_70 = (FVisualLogger *)
                 TMapBase<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>_>
                 ::Find((TMapBase<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>_>
                         *)this_00,(FObjectKey *)&local_res8);
      local_res8.ObjectIndex = 0;
      local_res8.ObjectSerialNumber = 0;
      if (pUVar10 != (UWorld *)0x0) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar10);
        }
        local_res8.ObjectIndex = 0;
        local_res8.ObjectSerialNumber = 0;
        local_res20 = pUVar10;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar10);
        }
        FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res20);
      }
      pTVar12 = TMapBase<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>_>
                ::Find((TMapBase<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>_>
                        *)this_00,(FObjectKey *)&local_res8);
      local_res8.ObjectIndex = 0;
      local_res8.ObjectSerialNumber = 0;
      local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)pTVar12;
      if (pUVar7 != (UWorld *)0x0) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar7);
        }
        local_res8.ObjectIndex = 0;
        local_res8.ObjectSerialNumber = 0;
        local_res20 = pUVar7;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar7);
        }
        FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res20);
      }
      pTVar14 = TMapBase<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>_>
                ::Find((TMapBase<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>_>
                        *)this_00,(FObjectKey *)&local_res8);
      if (((local_70 != (FVisualLogger *)0x0) &&
          (pTVar12 !=
           (TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *)0x0)
          ) && (pTVar14 !=
                (TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *
                )0x0)) {
        lVar4 = local_70->_padding_;
        ::FString::PrintfImpl(&local_88,L"%s (%s:%d)");
        FVar16 = (FName)L"";
        if (local_88.Data.ArrayNum != 0) {
          FVar16 = (FName)local_88.Data.AllocatorInstance;
        }
        bVar5 = FAutomationTestBase::TestTrue
                          ((FAutomationTestBase *)this,(wchar_t *)FVar16,(int)lVar4 == 3);
        if ((FName)local_88.Data.AllocatorInstance.Data != (FName)0x0) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
        if (!bVar5) {
          return false;
        }
        iVar1 = *(int *)(local_98.Data.AllocatorInstance.Data + 8);
        ::FString::PrintfImpl(&local_88,L"%s (%s:%d)");
        FVar16 = (FName)L"";
        if (local_88.Data.ArrayNum != 0) {
          FVar16 = (FName)local_88.Data.AllocatorInstance;
        }
        bVar5 = FAutomationTestBase::TestTrue
                          ((FAutomationTestBase *)this,(wchar_t *)FVar16,iVar1 == 2);
        if ((FName)local_88.Data.AllocatorInstance.Data != (FName)0x0) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
        if (!bVar5) {
          return false;
        }
        iVar1 = pTVar14->ArrayNum;
        ::FString::PrintfImpl(&local_88,L"%s (%s:%d)");
        FVar16 = (FName)L"";
        if (local_88.Data.ArrayNum != 0) {
          FVar16 = (FName)local_88.Data.AllocatorInstance;
        }
        bVar5 = FAutomationTestBase::TestTrue
                          ((FAutomationTestBase *)this,(wchar_t *)FVar16,iVar1 == 1);
        if ((FName)local_88.Data.AllocatorInstance.Data != (FName)0x0) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
        if (!bVar5) {
          return false;
        }
        pUVar10 = (UWorld *)FVisualLogger::FindRedirection((UObject *)pUVar10);
        ::FString::PrintfImpl(&local_88,L"%s (%s:%d)");
        FVar16 = (FName)L"";
        if (local_88.Data.ArrayNum != 0) {
          FVar16 = (FName)local_88.Data.AllocatorInstance;
        }
        bVar5 = FAutomationTestBase::TestTrue
                          ((FAutomationTestBase *)this,(wchar_t *)FVar16,pUVar10 == pUVar9);
        if ((FName)local_88.Data.AllocatorInstance.Data != (FName)0x0) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
        if (!bVar5) {
          return false;
        }
        pUVar7 = (UWorld *)FVisualLogger::FindRedirection((UObject *)pUVar7);
        ::FString::PrintfImpl(&local_58,L"%s (%s:%d)");
        FVar16 = (FName)L"";
        if (local_58.Data.ArrayNum != 0) {
          FVar16 = (FName)local_58.Data.AllocatorInstance;
        }
        bVar5 = FAutomationTestBase::TestTrue
                          ((FAutomationTestBase *)this,(wchar_t *)FVar16,pUVar7 == pUVar9);
        if ((FName)local_58.Data.AllocatorInstance.Data != (FName)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        if (!bVar5) {
          return false;
        }
        pUVar7 = (UWorld *)FVisualLogger::FindRedirection((UObject *)pAVar11);
        ::FString::PrintfImpl(&local_48,L"%s (%s:%d)");
        FVar16 = (FName)L"";
        if (local_48.Data.ArrayNum != 0) {
          FVar16 = (FName)local_48.Data.AllocatorInstance;
        }
        bVar5 = FAutomationTestBase::TestTrue
                          ((FAutomationTestBase *)this,(wchar_t *)FVar16,pUVar7 == pUVar9);
        if ((FName)local_48.Data.AllocatorInstance.Data != (FName)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
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

// GetBeautifiedTestName @ 148994e80

FString * __thiscall
FVisualLogRedirectionsCreationOrderTest::GetBeautifiedTestName
          (FVisualLogRedirectionsCreationOrderTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Engine.VisualLogger.Redirections.CreationOrder")
  ;
  return __return_storage_ptr__;
}

