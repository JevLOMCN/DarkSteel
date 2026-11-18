// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// GetTestFlags @ 1489933d0

EAutomationTestFlags __thiscall
FVisualLogRedirectionsMultipleChildrenTest::GetTestFlags
          (FVisualLogRedirectionsMultipleChildrenTest *this)

{
  return EngineFilter|ClientContext|EditorContext;
}

// IsStressTest @ 1489933e0

bool __thiscall
FVisualLogRedirectionsMultipleChildrenTest::IsStressTest
          (FVisualLogRedirectionsMultipleChildrenTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1489933f0

uint __thiscall
FVisualLogRedirectionsMultipleChildrenTest::GetRequiredDeviceNum
          (FVisualLogRedirectionsMultipleChildrenTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 148993400

FString * __thiscall
FVisualLogRedirectionsMultipleChildrenTest::GetTestSourceFileName
          (FVisualLogRedirectionsMultipleChildrenTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VisualLogger\\VisualLoggerAutomationTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 148993430

int __thiscall
FVisualLogRedirectionsMultipleChildrenTest::GetTestSourceFileLine
          (FVisualLogRedirectionsMultipleChildrenTest *this)

{
  return 0x174;
}

// GetTests @ 148993440

/* WARNING: Removing unreachable block (ram,0x00014899352d) */
/* WARNING: Removing unreachable block (ram,0x0001489935f8) */

void __thiscall
FVisualLogRedirectionsMultipleChildrenTest::GetTests
          (FVisualLogRedirectionsMultipleChildrenTest *this,
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
  
  ::FString::FString(&local_18,"System.Engine.VisualLogger.Redirections.MultipleChildren");
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

// RunTest @ 148993620

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
FVisualLogRedirectionsMultipleChildrenTest::RunTest
          (FVisualLogRedirectionsMultipleChildrenTest *this,FString *param_1)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  EAutomationTestFlags EVar5;
  UWorld *pUVar6;
  FVisualLogger *this_00;
  TMap<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>_>
  *this_01;
  FName *pFVar7;
  AActor *pAVar8;
  AActor *pAVar9;
  AActor *pAVar10;
  AActor *pAVar11;
  TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar12;
  FName FVar13;
  ForAnyElementType FVar14;
  FWeakObjectPtr local_res8;
  AActor *local_res18;
  AActor *local_res20;
  FName local_78;
  FName local_70;
  FName local_68;
  FString local_60;
  FString local_50;
  
  EVar5 = (**(code **)(*(longlong *)this + 8))();
  pUVar6 = ::`anonymous_namespace'::GetSimpleEngineAutomationTestWorld(EVar5);
  if (pUVar6 != (UWorld *)0x0) {
    this_00 = FVisualLogger::Get();
    FVisualLogger::Cleanup(this_00,pUVar6,false);
    this_01 = FVisualLogger::GetRedirectionMap((UObject *)pUVar6);
    iVar1 = *(int *)&this_01->field_0x34;
    iVar2 = *(int *)&this_01->field_0x8;
    ::FString::PrintfImpl(&local_60,L"%s (%s:%d)");
    FVar13 = (FName)L"";
    if (local_60.Data.ArrayNum != 0) {
      FVar13 = (FName)local_60.Data.AllocatorInstance.Data;
    }
    bVar4 = FAutomationTestBase::TestTrue
                      ((FAutomationTestBase *)this,(wchar_t *)FVar13,iVar2 == iVar1);
    if ((FName)local_60.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_60.Data.AllocatorInstance.Data);
    }
    if (!bVar4) {
      return false;
    }
    pFVar7 = ::FName::FName(&local_78,L"VLogTestObjA");
    pAVar8 = NewObject<AActor>((UObject *)(pUVar6->PersistentLevel).field0_0x0.DebugPtr,*pFVar7,
                               RF_Transient,(UObject *)0x0,false,(FObjectInstancingGraph *)0x0,
                               (UPackage *)0x0);
    pFVar7 = ::FName::FName(&local_70,L"VLogTestObjB");
    pAVar9 = NewObject<AActor>((UObject *)(pUVar6->PersistentLevel).field0_0x0.DebugPtr,*pFVar7,
                               RF_Transient,(UObject *)0x0,false,(FObjectInstancingGraph *)0x0,
                               (UPackage *)0x0);
    local_res20 = pAVar9;
    pFVar7 = ::FName::FName(&local_68,L"VLogTestObjC");
    pAVar10 = NewObject<AActor>((UObject *)(pUVar6->PersistentLevel).field0_0x0.DebugPtr,*pFVar7,
                                RF_Transient,(UObject *)0x0,false,(FObjectInstancingGraph *)0x0,
                                (UPackage *)0x0);
    pFVar7 = ::FName::FName((FName *)&local_60,L"VLogTestObjD");
    pAVar11 = NewObject<AActor>((UObject *)(pUVar6->PersistentLevel).field0_0x0.DebugPtr,*pFVar7,
                                RF_Transient,(UObject *)0x0,false,(FObjectInstancingGraph *)0x0,
                                (UPackage *)0x0);
    FVisualLogger::Redirect((UObject *)pAVar9,(UObject *)pAVar8);
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    if (pAVar8 != (AActor *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pAVar8);
      }
      local_res8.ObjectIndex = 0;
      local_res8.ObjectSerialNumber = 0;
      local_res18 = pAVar8;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pAVar8);
      }
      FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res18);
    }
    pTVar12 = TMapBase<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>_>
              ::Find((TMapBase<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>_>
                      *)this_01,(FObjectKey *)&local_res8);
    if (pTVar12 !=
        (TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *)0x0) {
      iVar1 = pTVar12->ArrayNum;
      ::FString::PrintfImpl(&local_50,L"%s (%s:%d)");
      FVar14.Data = (FScriptContainerElement *)L"";
      if (local_50.Data.ArrayNum != 0) {
        FVar14.Data = local_50.Data.AllocatorInstance.Data;
      }
      bVar4 = FAutomationTestBase::TestTrue
                        ((FAutomationTestBase *)this,(wchar_t *)FVar14.Data,iVar1 == 1);
      if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.Data.AllocatorInstance.Data);
      }
      if (!bVar4) {
        return false;
      }
      pAVar9 = (AActor *)FVisualLogger::FindRedirection((UObject *)local_res20);
      ::FString::PrintfImpl(&local_50,L"%s (%s:%d)");
      FVar14.Data = (FScriptContainerElement *)L"";
      if (local_50.Data.ArrayNum != 0) {
        FVar14.Data = local_50.Data.AllocatorInstance.Data;
      }
      bVar4 = FAutomationTestBase::TestTrue
                        ((FAutomationTestBase *)this,(wchar_t *)FVar14.Data,pAVar9 == pAVar8);
      if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.Data.AllocatorInstance.Data);
      }
      if (!bVar4) {
        return false;
      }
      FVisualLogger::Redirect((UObject *)pAVar10,(UObject *)pAVar8);
      local_res8.ObjectIndex = 0;
      local_res8.ObjectSerialNumber = 0;
      if (pAVar8 != (AActor *)0x0) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pAVar8);
        }
        local_res8.ObjectIndex = 0;
        local_res8.ObjectSerialNumber = 0;
        local_res18 = pAVar8;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pAVar8);
        }
        FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res18);
      }
      pTVar12 = TMapBase<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>_>
                ::Find((TMapBase<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>_>
                        *)this_01,(FObjectKey *)&local_res8);
      if (pTVar12 !=
          (TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *)0x0)
      {
        iVar1 = pTVar12->ArrayNum;
        ::FString::PrintfImpl(&local_50,L"%s (%s:%d)");
        FVar14.Data = (FScriptContainerElement *)L"";
        if (local_50.Data.ArrayNum != 0) {
          FVar14.Data = local_50.Data.AllocatorInstance.Data;
        }
        bVar4 = FAutomationTestBase::TestTrue
                          ((FAutomationTestBase *)this,(wchar_t *)FVar14.Data,iVar1 == 2);
        if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_50.Data.AllocatorInstance.Data);
        }
        if (!bVar4) {
          return false;
        }
        pAVar9 = (AActor *)FVisualLogger::FindRedirection((UObject *)pAVar10);
        ::FString::PrintfImpl(&local_50,L"%s (%s:%d)");
        FVar14.Data = (FScriptContainerElement *)L"";
        if (local_50.Data.ArrayNum != 0) {
          FVar14.Data = local_50.Data.AllocatorInstance.Data;
        }
        bVar4 = FAutomationTestBase::TestTrue
                          ((FAutomationTestBase *)this,(wchar_t *)FVar14.Data,pAVar9 == pAVar8);
        if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_50.Data.AllocatorInstance.Data);
        }
        if (!bVar4) {
          return false;
        }
        FVisualLogger::Redirect((UObject *)pAVar11,(UObject *)pAVar8);
        local_res8.ObjectIndex = 0;
        local_res8.ObjectSerialNumber = 0;
        if (pAVar8 != (AActor *)0x0) {
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)pAVar8);
          }
          local_res8.ObjectIndex = 0;
          local_res8.ObjectSerialNumber = 0;
          local_res18 = pAVar8;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)pAVar8);
          }
          FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res18);
        }
        pTVar12 = TMapBase<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>_>
                  ::Find((TMapBase<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>_>
                          *)this_01,(FObjectKey *)&local_res8);
        if (pTVar12 !=
            (TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *)0x0
           ) {
          iVar1 = pTVar12->ArrayNum;
          ::FString::PrintfImpl(&local_50,L"%s (%s:%d)");
          FVar14.Data = (FScriptContainerElement *)L"";
          if (local_50.Data.ArrayNum != 0) {
            FVar14.Data = local_50.Data.AllocatorInstance.Data;
          }
          bVar4 = FAutomationTestBase::TestTrue
                            ((FAutomationTestBase *)this,(wchar_t *)FVar14.Data,iVar1 == 3);
          if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_50.Data.AllocatorInstance.Data);
          }
          if (!bVar4) {
            return false;
          }
          pAVar9 = (AActor *)FVisualLogger::FindRedirection((UObject *)pAVar11);
          ::FString::PrintfImpl(&local_50,L"%s (%s:%d)");
          FVar14.Data = (FScriptContainerElement *)L"";
          if (local_50.Data.ArrayNum != 0) {
            FVar14.Data = local_50.Data.AllocatorInstance.Data;
          }
          bVar4 = FAutomationTestBase::TestTrue
                            ((FAutomationTestBase *)this,(wchar_t *)FVar14.Data,pAVar9 == pAVar8);
          if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_50.Data.AllocatorInstance.Data);
            return bVar4;
          }
          return bVar4;
        }
      }
    }
  }
  pcVar3 = *(code **)(*(longlong *)this + 0x28);
  ::FString::PrintfImpl(&local_50,L"Expected \'%s\' to be not null.");
  (*pcVar3)(this,&local_50,0);
  if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data.AllocatorInstance.Data);
  }
  return false;
}

// GetBeautifiedTestName @ 148993bc0

FString * __thiscall
FVisualLogRedirectionsMultipleChildrenTest::GetBeautifiedTestName
          (FVisualLogRedirectionsMultipleChildrenTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "System.Engine.VisualLogger.Redirections.MultipleChildren");
  return __return_storage_ptr__;
}

