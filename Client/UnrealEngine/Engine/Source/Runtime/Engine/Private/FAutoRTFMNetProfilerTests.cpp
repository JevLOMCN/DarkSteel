// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// GetTestFlags @ 1487eb6d0

EAutomationTestFlags __thiscall
FAutoRTFMNetProfilerTests::GetTestFlags(FAutoRTFMNetProfilerTests *this)

{
  return EngineFilter|CommandletContext|ServerContext|ClientContext;
}

// IsStressTest @ 1487eb780

bool __thiscall FAutoRTFMNetProfilerTests::IsStressTest(FAutoRTFMNetProfilerTests *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1487eb7c0

uint __thiscall FAutoRTFMNetProfilerTests::GetRequiredDeviceNum(FAutoRTFMNetProfilerTests *this)

{
  return 1;
}

// GetTestSourceFileName @ 1487eb7d0

FString * __thiscall
FAutoRTFMNetProfilerTests::GetTestSourceFileName
          (FAutoRTFMNetProfilerTests *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\AutoRTFM\\AutoRTFMNetworkProfilerTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1487eb800

int __thiscall FAutoRTFMNetProfilerTests::GetTestSourceFileLine(FAutoRTFMNetProfilerTests *this)

{
  return 0xf;
}

// GetTests @ 1487eb810

/* WARNING: Removing unreachable block (ram,0x0001487eb8fd) */
/* WARNING: Removing unreachable block (ram,0x0001487eb9c8) */

void __thiscall
FAutoRTFMNetProfilerTests::GetTests
          (FAutoRTFMNetProfilerTests *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"AutoRTFM + FNetworkProfiler");
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

// RunTest @ 1487eb9f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENetworkProfilerVersionHistory": Some values do not have unique names */

bool __thiscall FAutoRTFMNetProfilerTests::RunTest(FAutoRTFMNetProfilerTests *this,FString *param_1)

{
  int *piVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  UObject *pUVar6;
  UDemoNetDriver *this_00;
  UDemoNetConnection *pUVar7;
  UActorChannel *pUVar8;
  UClass *this_01;
  FName *pFVar9;
  FURL *pFVar10;
  longlong *plVar11;
  undefined1 auStackY_398 [32];
  UActorChannel *local_340;
  UActorChannel *local_338;
  FProperty *local_330;
  AAutoRTFMTestActor *local_328;
  FAutomationEvent local_320;
  FString local_2e8;
  FName local_2d8;
  FURL local_2d0;
  FNetworkProfiler local_268;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_398;
  bVar3 = AutoRTFM::ForTheRuntime::IsAutoRTFMRuntimeEnabledInternal();
  if (bVar3) {
    pUVar6 = GetTransientPackageAsObject();
    this_00 = NewObject<UDemoNetDriver>(pUVar6);
    pUVar6 = GetTransientPackageAsObject();
    pUVar7 = NewObject<UDemoNetConnection>(pUVar6);
    pUVar7->_padding_ = (longlong)this_00;
    UNetDriver::AddClientConnection((UNetDriver *)this_00,(UNetConnection *)pUVar7);
    pUVar6 = GetTransientPackageAsObject();
    pUVar8 = NewObject<UActorChannel>(pUVar6);
    *(uint *)&pUVar8->_padding_ = (uint)pUVar8->_padding_ | 0x1000;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar7 != (UDemoNetConnection *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar7);
    }
    pUVar8->_padding_ = (longlong)pUVar7;
    plVar11 = &pUVar7->_padding_;
    local_340 = pUVar8;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
    }
    if (((UActorChannel **)*plVar11 <= &local_340) &&
       (&local_340 < (UActorChannel **)*plVar11 + *(int *)((longlong)&pUVar7->_padding_ + 4))) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    iVar5 = (int)pUVar7->_padding_;
    piVar1 = (int *)((longlong)&pUVar7->_padding_ + 4);
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)plVar11,piVar1);
    }
    *(int *)&pUVar7->_padding_ = iVar5 + 1;
    *(UActorChannel **)(*plVar11 + (longlong)iVar5 * 8) = local_340;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_340 != (UActorChannel *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)local_340);
    }
    local_338 = pUVar8;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
    }
    if (((UActorChannel **)pUVar7->_padding_ <= &local_338) &&
       (&local_338 <
        (UActorChannel **)pUVar7->_padding_ + *(int *)((longlong)&pUVar7->_padding_ + 4))) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    iVar5 = (int)pUVar7->_padding_;
    piVar1 = (int *)((longlong)&pUVar7->_padding_ + 4);
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)&pUVar7->_padding_,piVar1);
    }
    *(int *)&pUVar7->_padding_ = iVar5 + 1;
    *(UActorChannel **)(pUVar7->_padding_ + (longlong)iVar5 * 8) = local_338;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_338 != (UActorChannel *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)local_338);
    }
    pUVar6 = GetTransientPackageAsObject();
    local_328 = NewObject<AAutoRTFMTestActor>(pUVar6);
    this_01 = Z_Construct_UClass_AAutoRTFMTestActor_NoRegister();
    pFVar9 = ::FName::FName(&local_2d8,10,L"MyProperty",FNAME_Add);
    local_330 = UStruct::FindPropertyByName((UStruct *)this_01,*pFVar9);
    FNetworkProfiler::FNetworkProfiler(&local_268);
    FNetworkProfiler::EnableTracking(&local_268,true);
    pFVar10 = FURL::FURL(&local_2d0,L"FAutoRTFMNetProfilerTests");
    FNetworkProfiler::TrackSessionChange(&local_268,true,pFVar10);
    if (local_2d0.Portal.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2d0.Portal.Data.AllocatorInstance.Data);
    }
    DestructItems<FString,int>((FString *)local_2d0.Op.AllocatorInstance.Data,local_2d0.Op.ArrayNum)
    ;
    if (local_2d0.Op.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2d0.Op.AllocatorInstance.Data);
    }
    if (local_2d0.RedirectURL.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2d0.RedirectURL.Data.AllocatorInstance.Data);
    }
    if (local_2d0.Map.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2d0.Map.Data.AllocatorInstance.Data);
    }
    if (local_2d0.Host.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2d0.Host.Data.AllocatorInstance.Data);
    }
    if (local_2d0.Protocol.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2d0.Protocol.Data.AllocatorInstance.Data);
    }
    FNetworkProfiler::TrackWritePropertyHandle(&local_268,0x10,(UNetConnection *)pUVar7);
    FNetworkProfiler::TrackWritePropertyHandle(&local_268,0x10,(UNetConnection *)pUVar7);
    ::FDebug::AssertFailed
              ("AUTORTFM_TESTING_ASSERT(ETransactionResult::Committed != Result)",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AutoRTFM\\Public\\AutoRTFMTesting.h"
               ,0x20,L"");
    FNetworkProfiler::TrackWritePropertyHeader(&local_268,local_330,0x10,(UNetConnection *)pUVar7);
    FNetworkProfiler::TrackWritePropertyHeader(&local_268,local_330,0x10,(UNetConnection *)pUVar7);
    ::FDebug::AssertFailed
              ("AUTORTFM_TESTING_ASSERT(ETransactionResult::Committed != Result)",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AutoRTFM\\Public\\AutoRTFMTesting.h"
               ,0x20,L"");
    FNetworkProfiler::TrackReplicateProperty(&local_268,local_330,0x10,(UNetConnection *)pUVar7);
    FNetworkProfiler::TrackReplicateProperty(&local_268,local_330,0x10,(UNetConnection *)pUVar7);
    ::FDebug::AssertFailed
              ("AUTORTFM_TESTING_ASSERT(ETransactionResult::Committed != Result)",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AutoRTFM\\Public\\AutoRTFMTesting.h"
               ,0x20,L"");
    FNetworkProfiler::TrackBeginContentBlock
              (&local_268,(UObject *)local_328,0x10,(UNetConnection *)pUVar7);
    FNetworkProfiler::TrackBeginContentBlock
              (&local_268,(UObject *)local_328,0x10,(UNetConnection *)pUVar7);
    ::FDebug::AssertFailed
              ("AUTORTFM_TESTING_ASSERT(ETransactionResult::Committed != Result)",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AutoRTFM\\Public\\AutoRTFMTesting.h"
               ,0x20,L"");
    FNetworkProfiler::TrackEndContentBlock
              (&local_268,(UObject *)local_328,0x10,(UNetConnection *)pUVar7);
    FNetworkProfiler::TrackEndContentBlock
              (&local_268,(UObject *)local_328,0x10,(UNetConnection *)pUVar7);
    ::FDebug::AssertFailed
              ("AUTORTFM_TESTING_ASSERT(ETransactionResult::Committed != Result)",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AutoRTFM\\Public\\AutoRTFMTesting.h"
               ,0x20,L"");
    FNetworkProfiler::~FNetworkProfiler(&local_268);
  }
  else {
    ::FString::FString(&local_2e8,L"SKIPPED \'FAutoRTFMNetProfilerTests\' test. AutoRTFM disabled.")
    ;
    _Src.Data = local_2e8.Data.AllocatorInstance.Data;
    local_320.Type = Info;
    local_320.Message.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_2e8.Data.ArrayNum == 0) {
      local_320.Message.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_2e8.Data.ArrayNum,0,(ForAnyElementType *)&local_320.Message,
                 local_2e8.Data.ArrayNum,&local_320.Message.Data.ArrayMax);
      memcpy(local_320.Message.Data.AllocatorInstance.Data,_Src.Data,
             (longlong)local_2e8.Data.ArrayNum * 2);
    }
    local_320.Artifact.A = 0;
    local_320.Artifact.B = 0;
    local_320.Context.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_320.Context.Data.ArrayNum = 0;
    local_320.Context.Data.ArrayMax = 0;
    local_320.Artifact.C = 0;
    local_320.Artifact.D = 0;
    FAutomationTestExecutionInfo::AddEvent
              ((FAutomationTestExecutionInfo *)&this->field_0x30,&local_320,0,true);
    if (local_320.Context.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_320.Context.Data.AllocatorInstance.Data);
    }
    if (local_320.Message.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_320.Message.Data.AllocatorInstance.Data);
    }
    if (local_2e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2e8.Data.AllocatorInstance.Data);
    }
  }
  return true;
}

// GetBeautifiedTestName @ 1487ebfb0

FString * __thiscall
FAutoRTFMNetProfilerTests::GetBeautifiedTestName
          (FAutoRTFMNetProfilerTests *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"AutoRTFM + FNetworkProfiler");
  return __return_storage_ptr__;
}

