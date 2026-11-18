// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// GetTestFlags @ 1487d8540

EAutomationTestFlags __thiscall FAutoRTFMNetDriverTests::GetTestFlags(FAutoRTFMNetDriverTests *this)

{
  return EngineFilter|CommandletContext|ServerContext|ClientContext;
}

// IsStressTest @ 1487d8550

bool __thiscall FAutoRTFMNetDriverTests::IsStressTest(FAutoRTFMNetDriverTests *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1487d8560

uint __thiscall FAutoRTFMNetDriverTests::GetRequiredDeviceNum(FAutoRTFMNetDriverTests *this)

{
  return 1;
}

// GetTestSourceFileName @ 1487d8570

FString * __thiscall
FAutoRTFMNetDriverTests::GetTestSourceFileName
          (FAutoRTFMNetDriverTests *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\AutoRTFM\\AutoRTFMNetDriverTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1487d85a0

int __thiscall FAutoRTFMNetDriverTests::GetTestSourceFileLine(FAutoRTFMNetDriverTests *this)

{
  return 10;
}

// GetTests @ 1487d85b0

/* WARNING: Removing unreachable block (ram,0x0001487d869d) */
/* WARNING: Removing unreachable block (ram,0x0001487d8768) */

void __thiscall
FAutoRTFMNetDriverTests::GetTests
          (FAutoRTFMNetDriverTests *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"AutoRTFM + FTraceFilter");
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

// RunTest @ 1487d8790

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall FAutoRTFMNetDriverTests::RunTest(FAutoRTFMNetDriverTests *this,FString *param_1)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  ForAnyElementType _Src;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  UObject *pUVar7;
  UDemoNetDriver *this_00;
  UDemoNetConnection *pUVar8;
  UActorChannel *pUVar9;
  UActorChannel *local_res18 [2];
  UActorChannel *local_a8;
  UActorChannel *local_a0;
  FScriptContainerElement *local_98;
  undefined8 local_90;
  FAutomationEvent local_88;
  FString local_50;
  FScriptContainerElement **local_40;
  UActorChannel **local_38;
  FScriptContainerElement **local_30;
  UActorChannel **local_28;
  
  bVar4 = AutoRTFM::ForTheRuntime::IsAutoRTFMRuntimeEnabledInternal();
  if (bVar4) {
    pUVar7 = GetTransientPackageAsObject();
    this_00 = NewObject<UDemoNetDriver>(pUVar7);
    pUVar7 = GetTransientPackageAsObject();
    pUVar8 = NewObject<UDemoNetConnection>(pUVar7);
    pUVar8->_padding_ = (longlong)this_00;
    UNetDriver::AddClientConnection((UNetDriver *)this_00,(UNetConnection *)pUVar8);
    pUVar7 = GetTransientPackageAsObject();
    pUVar9 = NewObject<UActorChannel>(pUVar7);
    *(uint *)&pUVar9->_padding_ = (uint)pUVar9->_padding_ | 0x1000;
    local_res18[0] = pUVar9;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
    }
    pUVar9->_padding_ = (longlong)pUVar8;
    plVar2 = &pUVar8->_padding_;
    local_a8 = local_res18[0];
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_res18[0] != (UActorChannel *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res18[0]);
    }
    if ((((UActorChannel **)*plVar2 <= &local_a8) &&
        (&local_a8 < (UActorChannel **)*plVar2 + *(int *)((longlong)&pUVar8->_padding_ + 4))) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    iVar6 = (int)pUVar8->_padding_;
    piVar1 = (int *)((longlong)&pUVar8->_padding_ + 4);
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)plVar2,piVar1);
    }
    *(int *)&pUVar8->_padding_ = iVar6 + 1;
    *(UActorChannel **)(*plVar2 + (longlong)iVar6 * 8) = local_a8;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_a8 != (UActorChannel *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)local_a8);
    }
    plVar2 = &pUVar8->_padding_;
    local_a0 = local_res18[0];
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_res18[0] != (UActorChannel *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res18[0]);
    }
    if ((((UActorChannel **)*plVar2 <= &local_a0) &&
        (&local_a0 < (UActorChannel **)*plVar2 + *(int *)((longlong)&pUVar8->_padding_ + 4))) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    iVar6 = (int)pUVar8->_padding_;
    piVar1 = (int *)((longlong)&pUVar8->_padding_ + 4);
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)plVar2,piVar1);
    }
    *(int *)&pUVar8->_padding_ = iVar6 + 1;
    *(UActorChannel **)(*plVar2 + (longlong)iVar6 * 8) = local_a0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_a0 != (UActorChannel *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)local_a0);
    }
    local_40 = &local_98;
    local_38 = local_res18;
    local_98 = (FScriptContainerElement *)0x0;
    local_90 = 0;
    AutoRTFM::AutoRTFMFunctorInvoker<_FAutoRTFMNetDriverTests::RunTest_::__l2::<lambda_1>_>
              (&local_40);
    FAutomationTestBase::TestTrue
              ((FAutomationTestBase *)this,
               L"AutoRTFM::ETransactionResult::AbortedByRequest == Result",false);
    FAutomationTestBase::TestTrue
              ((FAutomationTestBase *)this,L"Description.IsEmpty()",(int)local_90 < 2);
    local_30 = &local_98;
    local_28 = local_res18;
    AutoRTFM::AutoRTFMFunctorInvoker<_FAutoRTFMNetDriverTests::RunTest_::__l2::<lambda_2>_>
              (&local_30);
    FAutomationTestBase::TestTrue
              ((FAutomationTestBase *)this,L"AutoRTFM::ETransactionResult::Committed == Result",true
              );
    FAutomationTestBase::TestFalse
              ((FAutomationTestBase *)this,L"Description.IsEmpty()",(int)local_90 < 2);
    local_50.Data.AllocatorInstance.Data = local_98;
  }
  else {
    ::FString::FString(&local_50,L"SKIPPED \'FAutoRTFMNetDriverTests\' test. AutoRTFM disabled.");
    _Src.Data = local_50.Data.AllocatorInstance.Data;
    local_88.Type = Info;
    local_88.Message.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_50.Data.ArrayNum == 0) {
      local_88.Message.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_50.Data.ArrayNum,0,(ForAnyElementType *)&local_88.Message,
                 local_50.Data.ArrayNum,&local_88.Message.Data.ArrayMax);
      memcpy(local_88.Message.Data.AllocatorInstance.Data,_Src.Data,
             (longlong)local_50.Data.ArrayNum * 2);
    }
    local_88.Artifact.A = 0;
    local_88.Artifact.B = 0;
    local_88.Context.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.Context.Data.ArrayNum = 0;
    local_88.Context.Data.ArrayMax = 0;
    local_88.Artifact.C = 0;
    local_88.Artifact.D = 0;
    FAutomationTestExecutionInfo::AddEvent
              ((FAutomationTestExecutionInfo *)&this->field_0x30,&local_88,0,true);
    if (local_88.Context.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Context.Data.AllocatorInstance.Data);
    }
    if (local_88.Message.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Message.Data.AllocatorInstance.Data);
    }
  }
  if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data.AllocatorInstance.Data);
  }
  return true;
}

// GetBeautifiedTestName @ 1487d8b40

FString * __thiscall
FAutoRTFMNetDriverTests::GetBeautifiedTestName
          (FAutoRTFMNetDriverTests *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"AutoRTFM + FTraceFilter");
  return __return_storage_ptr__;
}

