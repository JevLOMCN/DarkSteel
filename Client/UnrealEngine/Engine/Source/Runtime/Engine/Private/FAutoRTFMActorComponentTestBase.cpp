// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// GetTestFlags @ 1487ea0e0

EAutomationTestFlags __thiscall
_anon_689E48D4::FAutoRTFMActorComponentTestBase::GetTestFlags(FAutoRTFMActorComponentTestBase *this)

{
  return EngineFilter|CommandletContext|ServerContext|ClientContext;
}

// GetRequiredDeviceNum @ 1487ea0f0

uint __thiscall
_anon_689E48D4::FAutoRTFMActorComponentTestBase::GetRequiredDeviceNum
          (FAutoRTFMActorComponentTestBase *this)

{
  return 1;
}

// GetTestSourceFileName @ 1487ea100

FString * __thiscall
_anon_689E48D4::FAutoRTFMActorComponentTestBase::GetTestSourceFileName
          (FAutoRTFMActorComponentTestBase *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,this->TestFile);
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1487ea130

int __thiscall
_anon_689E48D4::FAutoRTFMActorComponentTestBase::GetTestSourceFileLine
          (FAutoRTFMActorComponentTestBase *this)

{
  return this->TestLine;
}

// GetTests @ 1487ea140

/* WARNING: Removing unreachable block (ram,0x0001487ea244) */
/* WARNING: Removing unreachable block (ram,0x0001487ea31d) */

void __thiscall
_anon_689E48D4::FAutoRTFMActorComponentTestBase::GetTests
          (FAutoRTFMActorComponentTestBase *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_38;
  undefined8 local_30;
  FString local_28;
  FString local_18;
  
  ::FString::FString(&local_18,"AutoRTFM.ActorComponent.");
  ::FString::ConcatFF(&local_28,&local_18,(FString *)&this->_padding_);
  pFVar4 = (param_1->AllocatorInstance).Data;
  if (((pFVar4 <= (FScriptContainerElement *)&local_28) &&
      ((FScriptContainerElement *)&local_28 < pFVar4 + (longlong)param_1->ArrayMax * 0x10)) &&
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
  *(FScriptContainerElement **)pFVar4 = local_28.Data.AllocatorInstance.Data;
  *(int *)(pFVar4 + 8) = local_28.Data.ArrayNum;
  *(int *)(pFVar4 + 0xc) = local_28.Data.ArrayMax;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  pFVar4 = (param_2->AllocatorInstance).Data;
  local_38 = 0;
  local_30 = 0;
  if (((pFVar4 <= (FScriptContainerElement *)&local_38) &&
      ((FScriptContainerElement *)&local_38 < pFVar4 + (longlong)param_2->ArrayMax * 0x10)) &&
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
  *(undefined8 *)pFVar4 = local_38;
  *(undefined4 *)(pFVar4 + 8) = (undefined4)local_30;
  *(undefined4 *)(pFVar4 + 0xc) = local_30._4_4_;
  return;
}

// GetBeautifiedTestName @ 1487ea350

FString * __thiscall
_anon_689E48D4::FAutoRTFMActorComponentTestBase::GetBeautifiedTestName
          (FAutoRTFMActorComponentTestBase *this,FString *__return_storage_ptr__)

{
  FString local_18;
  
  ::FString::FString(&local_18,"AutoRTFM.ActorComponent.");
  ::FString::ConcatFF(__return_storage_ptr__,&local_18,(FString *)&this->_padding_);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// RunTest @ 1487ea3f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
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
_anon_689E48D4::FAutoRTFMActorComponentTestBase::RunTest
          (FAutoRTFMActorComponentTestBase *this,FString *param_1)

{
  void *_Src;
  bool bVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  UWorld *this_00;
  AAutoRTFMTestActor *pAVar4;
  UAutoRTFMTestPrimitiveComponent *this_01;
  longlong *plVar5;
  undefined1 auStackY_1b8 [32];
  undefined1 local_178 [8];
  TObjectPtr<UClass>_u_0 local_170;
  FAutomationEvent local_168;
  undefined1 local_128 [128];
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  bVar1 = AutoRTFM::ForTheRuntime::IsAutoRTFMRuntimeEnabledInternal();
  if (bVar1) {
    pUVar2 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar2,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar3 = Z_Construct_UClass_UWorld_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_128,pUVar3);
    local_128._8_8_ = pUVar2;
    this_00 = (UWorld *)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_128);
    if (local_128._64_8_ != 0) {
      plVar5 = (longlong *)(local_128 + 0x50);
      if ((longlong *)local_128._104_8_ != (longlong *)0x0) {
        plVar5 = (longlong *)local_128._104_8_;
      }
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
    UWorld::CreatePhysicsScene(this_00,(AWorldSettings *)0x0);
    local_178._0_4_ = local_178._0_4_ & 0xfffff67f | 0x167f;
    local_170.DebugPtr = (UClass *)0x0;
    UWorld::InitializeNewWorld(this_00,(FWorldInitializationValues *)local_178,false);
    pUVar2 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar2,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar3 = Z_Construct_UClass_UAutoRTFMTestLevel_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_a8,pUVar3);
    local_a8._8_8_ = pUVar2;
    pUVar2 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
    if (local_a8._64_8_ != 0) {
      plVar5 = (longlong *)(local_a8 + 0x50);
      if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
        plVar5 = (longlong *)local_a8._104_8_;
      }
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_00 != (UWorld *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    *(UWorld **)&pUVar2[4].field_0x20 = this_00;
    pAVar4 = NewObject<AAutoRTFMTestActor>(pUVar2);
    this_01 = NewObject<UAutoRTFMTestPrimitiveComponent>((UObject *)pAVar4);
    (**(code **)(this->_padding_ + 0x100))(this,this_00,pUVar2);
    UWorld::CleanupWorld(this_00,true,true,(UWorld *)0x0);
    if ((this_01->_padding_ & 1) != 0) {
      UActorComponent::UnregisterComponent((UActorComponent *)this_01);
    }
  }
  else {
    ::FString::PrintfImpl((FString *)local_178,L"SKIPPED test \'%s\'. AutoRTFM disabled.");
    _Src = (void *)CONCAT44(local_178._4_4_,local_178._0_4_);
    local_168.Type = Info;
    local_168.Message.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_170._0_4_ == 0) {
      local_168.Message.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_170._0_4_,0,(ForAnyElementType *)&local_168.Message,local_170._0_4_,
                 &local_168.Message.Data.ArrayMax);
      memcpy(local_168.Message.Data.AllocatorInstance.Data,_Src,(longlong)(int)local_170._0_4_ * 2);
    }
    local_168.Artifact.A = 0;
    local_168.Artifact.B = 0;
    local_168.Context.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_168.Context.Data.ArrayNum = 0;
    local_168.Context.Data.ArrayMax = 0;
    local_168.Artifact.C = 0;
    local_168.Artifact.D = 0;
    FAutomationTestExecutionInfo::AddEvent
              ((FAutomationTestExecutionInfo *)&this->_padding_,&local_168,0,true);
    if (local_168.Context.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.Context.Data.AllocatorInstance.Data);
    }
    if (local_168.Message.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.Message.Data.AllocatorInstance.Data);
    }
    if ((void *)CONCAT44(local_178._4_4_,local_178._0_4_) != (void *)0x0) {
      FMemory::Free((void *)CONCAT44(local_178._4_4_,local_178._0_4_));
    }
  }
  return true;
}

