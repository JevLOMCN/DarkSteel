// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// GetTestFlags @ 148992ce0

EAutomationTestFlags __thiscall
FVisualLogRedirectionsCleanupTest::GetTestFlags(FVisualLogRedirectionsCleanupTest *this)

{
  return EngineFilter|ClientContext|EditorContext;
}

// IsStressTest @ 148992cf0

bool __thiscall
FVisualLogRedirectionsCleanupTest::IsStressTest(FVisualLogRedirectionsCleanupTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 148992d00

uint __thiscall
FVisualLogRedirectionsCleanupTest::GetRequiredDeviceNum(FVisualLogRedirectionsCleanupTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 148992d10

FString * __thiscall
FVisualLogRedirectionsCleanupTest::GetTestSourceFileName
          (FVisualLogRedirectionsCleanupTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VisualLogger\\VisualLoggerAutomationTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 148992d40

int __thiscall
FVisualLogRedirectionsCleanupTest::GetTestSourceFileLine(FVisualLogRedirectionsCleanupTest *this)

{
  return 0x157;
}

// GetTests @ 148992d50

/* WARNING: Removing unreachable block (ram,0x000148992e3d) */
/* WARNING: Removing unreachable block (ram,0x000148992f08) */

void __thiscall
FVisualLogRedirectionsCleanupTest::GetTests
          (FVisualLogRedirectionsCleanupTest *this,
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
  
  ::FString::FString(&local_18,"System.Engine.VisualLogger.Redirections.Cleanup");
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

// RunTest @ 148992f30

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
FVisualLogRedirectionsCleanupTest::RunTest(FVisualLogRedirectionsCleanupTest *this,FString *param_1)

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
  FName FVar8;
  FName FVar9;
  FName FVar10;
  TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar11;
  ForAnyElementType FVar12;
  FWeakObjectPtr local_res8;
  FName local_res18;
  UWorld *local_res20;
  FName local_60;
  FString local_58;
  FString local_48;
  
  EVar5 = (**(code **)(*(longlong *)this + 8))();
  pUVar6 = ::`anonymous_namespace'::GetSimpleEngineAutomationTestWorld(EVar5);
  local_res20 = pUVar6;
  if (pUVar6 != (UWorld *)0x0) {
    this_00 = FVisualLogger::Get();
    FVisualLogger::Cleanup(this_00,pUVar6,false);
    this_01 = FVisualLogger::GetRedirectionMap((UObject *)pUVar6);
    iVar1 = *(int *)&this_01->field_0x34;
    iVar2 = *(int *)&this_01->field_0x8;
    ::FString::PrintfImpl(&local_58,L"%s (%s:%d)");
    FVar8 = (FName)L"";
    if (local_58.Data.ArrayNum != 0) {
      FVar8 = (FName)local_58.Data.AllocatorInstance.Data;
    }
    bVar4 = FAutomationTestBase::TestTrue
                      ((FAutomationTestBase *)this,(wchar_t *)FVar8,iVar2 == iVar1);
    if ((FName)local_58.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (!bVar4) {
      return false;
    }
    pFVar7 = ::FName::FName(&local_res18,L"VLogTestObjA");
    FVar8 = (FName)NewObject<AActor>((UObject *)(pUVar6->PersistentLevel).field0_0x0.DebugPtr,
                                     *pFVar7,RF_Transient,(UObject *)0x0,false,
                                     (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    pFVar7 = ::FName::FName(&local_60,L"VLogTestObjB");
    FVar9 = (FName)NewObject<AActor>((UObject *)(pUVar6->PersistentLevel).field0_0x0.DebugPtr,
                                     *pFVar7,RF_Transient,(UObject *)0x0,false,
                                     (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    pFVar7 = ::FName::FName((FName *)&local_58,L"VLogTestObjC");
    FVar10 = (FName)NewObject<AActor>((UObject *)(pUVar6->PersistentLevel).field0_0x0.DebugPtr,
                                      *pFVar7,RF_Transient,(UObject *)0x0,false,
                                      (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    FVisualLogger::Redirect((UObject *)FVar9,(UObject *)FVar8);
    FVisualLogger::Redirect((UObject *)FVar10,(UObject *)FVar9);
    iVar1 = *(int *)&this_01->field_0x8;
    iVar2 = *(int *)&this_01->field_0x34;
    ::FString::PrintfImpl(&local_48,L"%s (%s:%d)");
    FVar12.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar12.Data = local_48.Data.AllocatorInstance.Data;
    }
    bVar4 = FAutomationTestBase::TestTrue
                      ((FAutomationTestBase *)this,(wchar_t *)FVar12.Data,iVar1 - iVar2 == 2);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (!bVar4) {
      return false;
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    if (FVar8 != (FName)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)FVar8);
      }
      local_res8.ObjectIndex = 0;
      local_res8.ObjectSerialNumber = 0;
      local_res18 = FVar8;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)FVar8);
      }
      FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res18);
    }
    pTVar11 = TMapBase<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>_>
              ::Find((TMapBase<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>_>
                      *)this_01,(FObjectKey *)&local_res8);
    if (pTVar11 !=
        (TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *)0x0) {
      local_res8.ObjectIndex = 0;
      local_res8.ObjectSerialNumber = 0;
      if (FVar9 != (FName)0x0) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)FVar9);
        }
        local_res8.ObjectIndex = 0;
        local_res8.ObjectSerialNumber = 0;
        local_res18 = FVar9;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)FVar9);
        }
        FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res18);
      }
      pTVar11 = TMapBase<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>_>
                ::Find((TMapBase<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>_>
                        *)this_01,(FObjectKey *)&local_res8);
      if (pTVar11 !=
          (TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *)0x0)
      {
        local_res8.ObjectIndex = 0;
        local_res8.ObjectSerialNumber = 0;
        if (FVar10 != (FName)0x0) {
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)FVar10);
          }
          local_res8.ObjectIndex = 0;
          local_res8.ObjectSerialNumber = 0;
          local_res18 = FVar10;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)FVar10);
          }
          FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res18);
        }
        pTVar11 = TMapBase<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>_>
                  ::Find((TMapBase<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>_>
                          *)this_01,(FObjectKey *)&local_res8);
        ::FString::PrintfImpl(&local_48,L"%s (%s:%d)");
        FVar12.Data = (FScriptContainerElement *)L"";
        if (local_48.Data.ArrayNum != 0) {
          FVar12.Data = local_48.Data.AllocatorInstance.Data;
        }
        bVar4 = FAutomationTestBase::TestTrue
                          ((FAutomationTestBase *)this,(wchar_t *)FVar12.Data,
                           pTVar11 ==
                           (TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
                            *)0x0);
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        if (!bVar4) {
          return false;
        }
        FVisualLogger::Cleanup(this_00,local_res20,false);
        iVar1 = *(int *)&this_01->field_0x34;
        iVar2 = *(int *)&this_01->field_0x8;
        ::FString::PrintfImpl(&local_48,L"%s (%s:%d)");
        FVar12.Data = (FScriptContainerElement *)L"";
        if (local_48.Data.ArrayNum != 0) {
          FVar12.Data = local_48.Data.AllocatorInstance.Data;
        }
        bVar4 = FAutomationTestBase::TestTrue
                          ((FAutomationTestBase *)this,(wchar_t *)FVar12.Data,iVar2 == iVar1);
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
          return bVar4;
        }
        return bVar4;
      }
    }
  }
  pcVar3 = *(code **)(*(longlong *)this + 0x28);
  ::FString::PrintfImpl(&local_48,L"Expected \'%s\' to be not null.");
  (*pcVar3)(this,&local_48,0);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return false;
}

// GetBeautifiedTestName @ 148993360

FString * __thiscall
FVisualLogRedirectionsCleanupTest::GetBeautifiedTestName
          (FVisualLogRedirectionsCleanupTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Engine.VisualLogger.Redirections.Cleanup");
  return __return_storage_ptr__;
}

