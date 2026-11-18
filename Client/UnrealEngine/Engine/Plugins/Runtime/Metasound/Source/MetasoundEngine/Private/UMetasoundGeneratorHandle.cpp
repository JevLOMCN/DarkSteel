// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 29

// StaticClass @ 14b2e4d40

UClass * __cdecl UMetasoundGeneratorHandle::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMetasoundGeneratorHandle.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MetasoundEngine",L"MetasoundGeneratorHandle",
               &Z_Registration_Info_UClass_UMetasoundGeneratorHandle.InnerSingleton,
               StaticRegisterNativesUMetasoundGeneratorHandle,0xd8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMetasoundGeneratorHandle>,
               InternalVTableHelperCtorCaller<UMetasoundGeneratorHandle>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMetasoundGeneratorHandle.InnerSingleton;
}

// UMetasoundGeneratorHandle @ 14b34d120

UMetasoundGeneratorHandle * __thiscall
UMetasoundGeneratorHandle::UMetasoundGeneratorHandle
          (UMetasoundGeneratorHandle *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMetasoundGeneratorHandle__6B_;
  *(undefined8 *)&this->OnGeneratorHandleAttached = 0;
  *(undefined8 *)&(this->OnGeneratorHandleAttached).field_0x8 = 0;
  *(undefined8 *)&(this->OnGeneratorHandleAttached).field_0x10 = 0;
  *(undefined8 *)&this->OnGeneratorHandleDetached = 0;
  *(undefined8 *)&(this->OnGeneratorHandleDetached).field_0x8 = 0;
  *(undefined8 *)&(this->OnGeneratorHandleDetached).field_0x10 = 0;
  *(undefined8 *)&this->OnIOUpdated = 0;
  *(undefined8 *)&(this->OnIOUpdated).field_0x8 = 0;
  *(undefined8 *)&(this->OnIOUpdated).field_0x10 = 0;
  *(undefined8 *)&this->OnIOUpdatedWithChanges = 0;
  *(undefined8 *)&(this->OnIOUpdatedWithChanges).field_0x8 = 0;
  *(undefined8 *)&(this->OnIOUpdatedWithChanges).field_0x10 = 0;
  (this->GeneratorHandle).Object = (FMetasoundGeneratorHandle *)0x0;
  (this->GeneratorHandle).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->OnGeneratorsGraphChanged = 0;
  *(undefined8 *)&(this->OnGeneratorsGraphChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnGeneratorsGraphChanged).field_0x10 = 0;
  *(undefined8 *)&(this->OnGeneratorHandleAttached).field_0x18 = 2;
  *(undefined8 *)&(this->OnGeneratorHandleDetached).field_0x18 = 2;
  *(undefined8 *)&(this->OnIOUpdated).field_0x18 = 2;
  *(undefined8 *)&(this->OnIOUpdatedWithChanges).field_0x18 = 2;
  *(undefined8 *)&(this->OnGeneratorsGraphChanged).field_0x18 = 2;
  return this;
}

// UMetasoundGeneratorHandle @ 14b34d1e0

UMetasoundGeneratorHandle * __thiscall
UMetasoundGeneratorHandle::UMetasoundGeneratorHandle
          (UMetasoundGeneratorHandle *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMetasoundGeneratorHandle__6B_;
  *(undefined8 *)&this->OnGeneratorHandleAttached = 0;
  *(undefined8 *)&(this->OnGeneratorHandleAttached).field_0x8 = 0;
  *(undefined8 *)&(this->OnGeneratorHandleAttached).field_0x10 = 0;
  *(undefined8 *)&this->OnGeneratorHandleDetached = 0;
  *(undefined8 *)&(this->OnGeneratorHandleDetached).field_0x8 = 0;
  *(undefined8 *)&(this->OnGeneratorHandleDetached).field_0x10 = 0;
  *(undefined8 *)&this->OnIOUpdated = 0;
  *(undefined8 *)&(this->OnIOUpdated).field_0x8 = 0;
  *(undefined8 *)&(this->OnIOUpdated).field_0x10 = 0;
  *(undefined8 *)&this->OnIOUpdatedWithChanges = 0;
  *(undefined8 *)&(this->OnIOUpdatedWithChanges).field_0x8 = 0;
  *(undefined8 *)&(this->OnIOUpdatedWithChanges).field_0x10 = 0;
  (this->GeneratorHandle).Object = (FMetasoundGeneratorHandle *)0x0;
  (this->GeneratorHandle).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->OnGeneratorsGraphChanged = 0;
  *(undefined8 *)&(this->OnGeneratorsGraphChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnGeneratorsGraphChanged).field_0x10 = 0;
  *(undefined8 *)&(this->OnGeneratorHandleAttached).field_0x18 = 2;
  *(undefined8 *)&(this->OnGeneratorHandleDetached).field_0x18 = 2;
  *(undefined8 *)&(this->OnIOUpdated).field_0x18 = 2;
  *(undefined8 *)&(this->OnIOUpdatedWithChanges).field_0x18 = 2;
  *(undefined8 *)&(this->OnGeneratorsGraphChanged).field_0x18 = 2;
  return this;
}

// ~UMetasoundGeneratorHandle @ 14b3529d0

void __thiscall
UMetasoundGeneratorHandle::~UMetasoundGeneratorHandle(UMetasoundGeneratorHandle *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UMetasoundGeneratorHandle__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnGeneratorsGraphChanged).field_0x8,
             *(int *)&(this->OnGeneratorsGraphChanged).field_0x10);
  pvVar1 = *(void **)&(this->OnGeneratorsGraphChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnGeneratorsGraphChanged);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->GeneratorHandle).SharedReferenceCount.ReferenceController);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnIOUpdatedWithChanges).field_0x8,
             *(int *)&(this->OnIOUpdatedWithChanges).field_0x10);
  pvVar1 = *(void **)&(this->OnIOUpdatedWithChanges).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnIOUpdatedWithChanges);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)&(this->OnIOUpdated).field_0x8
             ,*(int *)&(this->OnIOUpdated).field_0x10);
  pvVar1 = *(void **)&(this->OnIOUpdated).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnIOUpdated);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnGeneratorHandleDetached).field_0x8,
             *(int *)&(this->OnGeneratorHandleDetached).field_0x10);
  pvVar1 = *(void **)&(this->OnGeneratorHandleDetached).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnGeneratorHandleDetached);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnGeneratorHandleAttached).field_0x8,
             *(int *)&(this->OnGeneratorHandleAttached).field_0x10);
  pvVar1 = *(void **)&(this->OnGeneratorHandleAttached).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnGeneratorHandleAttached);
  UObject::~UObject((UObject *)this);
  return;
}

// operator() @ 14b35d600

void __thiscall
`UMetasoundGeneratorHandle::InitGeneratorHandle'::__l2::<lambda_4>::operator()
          (void *this,TArray<Metasound::FVertexInterfaceChange,TSizedDefaultAllocator<32>_> *param_1
          )

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  FDestructionSentinel local_38;
  
  lVar1 = *(longlong *)this;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar1 + 0x88),
             (FWriteAccessScope *)&local_38);
  *(int *)(lVar1 + 0xa4) = *(int *)(lVar1 + 0xa4) + 1;
  bVar4 = false;
  uVar8 = *(int *)(lVar1 + 0x98) - 1;
  if (-1 < (int)uVar8) {
    lVar9 = (longlong)(int)uVar8 << 4;
    bVar4 = false;
    do {
      uVar7 = 0;
      if ((int)uVar8 < *(int *)(lVar1 + 0x98)) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (((*(int *)(lVar9 + 8 + *(longlong *)(lVar1 + 0x90)) == 0) ||
          (plVar2 = *(longlong **)(lVar9 + *(longlong *)(lVar1 + 0x90)), plVar2 == (longlong *)0x0))
         || (cVar6 = (**(code **)(*plVar2 + 0x68))(), cVar6 == '\0')) {
        bVar4 = true;
      }
      lVar9 = lVar9 + -0x10;
      uVar8 = uVar8 - 1;
    } while (-1 < (int)uVar8);
  }
  *(int *)(lVar1 + 0xa4) = *(int *)(lVar1 + 0xa4) + -1;
  if (bVar4) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(lVar1 + 0x88),false);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return;
}

// AddGraphSetCallback @ 14b363f70

FDelegateHandle __thiscall
UMetasoundGeneratorHandle::AddGraphSetCallback
          (UMetasoundGeneratorHandle *this,
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
  AddDelegateInstance<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->OnGeneratorsGraphChanged,
             param_1);
  return (FDelegateHandle)(ulong64)param_1;
}

// ApplyParameterPack @ 14b365490

bool __thiscall
UMetasoundGeneratorHandle::ApplyParameterPack
          (UMetasoundGeneratorHandle *this,UMetasoundParameterPack *param_1)

{
  FMetasoundGeneratorHandle *pFVar1;
  bool bVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  TSharedPtr<FMetasoundParameterPackStorage,1> *pTVar6;
  bool bVar7;
  bool bVar8;
  FLLMScope local_res10 [2];
  FLLMScope local_res18 [2];
  FName local_res20;
  FName local_58;
  FMemScope local_50;
  FMemScope local_48;
  TSharedPtr<FMetasoundParameterPackStorage,1> local_40;
  
  FLLMScope::FLLMScope
            (local_res18,LLMTagDeclaration_Audio_MetaSound.UniqueName,false,None,Default,true);
  local_res20 = LLMTagDeclaration_Audio_MetaSound.UniqueName;
  FMemScope::FMemScope(&local_48,&local_res20,true);
  bVar2 = 0 < GCycleStatsShouldEmitNamedEvents;
  if (bVar2) {
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Green,"UMetasoundGeneratorHandle::ApplyParameterPack");
  }
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId763,"UMetasoundGeneratorHandle::ApplyParameterPack",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundGeneratorHandle.cpp"
               ,0x2fb);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId763);
  }
  if (((param_1 == (UMetasoundParameterPack *)0x0) ||
      (pFVar1 = (this->GeneratorHandle).Object, pFVar1 == (FMetasoundGeneratorHandle *)0x0)) ||
     (bVar4 = FWeakObjectPtr::IsValid(&(pFVar1->AudioComponent).WeakPtr), !bVar4)) {
    bVar4 = false;
  }
  else {
    if (((this->GeneratorHandle).Object == (FMetasoundGeneratorHandle *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    pFVar1 = (this->GeneratorHandle).Object;
    FLLMScope::FLLMScope
              (local_res10,LLMTagDeclaration_Audio_MetaSound.UniqueName,false,None,Default,true);
    local_58 = LLMTagDeclaration_Audio_MetaSound.UniqueName;
    FMemScope::FMemScope(&local_50,&local_58,true);
    bVar4 = 0 < GCycleStatsShouldEmitNamedEvents;
    if (bVar4) {
      FGenericPlatformMisc::BeginNamedEvent
                (&FColor::Green,"FMetasoundGeneratorHandle::UpdateParameters");
    }
    bVar8 = -1 < CpuChannel->Enabled;
    if (bVar8) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId128,"FMetasoundGeneratorHandle::UpdateParameters",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundGeneratorHandle.cpp"
                 ,0x80);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId128);
    }
    pTVar6 = UMetasoundParameterPack::GetCopyOfParameterStorage(param_1,&local_40);
    if (&pFVar1->LatestParameterState != pTVar6) {
      (pFVar1->LatestParameterState).Object = pTVar6->Object;
      pTVar6->Object = (FMetasoundParameterPackStorage *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(pFVar1->LatestParameterState).SharedReferenceCount,&pTVar6->SharedReferenceCount)
      ;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_40.SharedReferenceCount.ReferenceController);
    Metasound::FMetasoundGeneratorHandle::SendParametersToGenerator(pFVar1);
    if (bVar8) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (bVar4) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    FMemScope::~FMemScope(&local_50);
    FLLMScope::~FLLMScope(local_res10);
    bVar4 = true;
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar2) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  FMemScope::~FMemScope(&local_48);
  FLLMScope::~FLLMScope(local_res18);
  return bVar4;
}

// BeginDestroy @ 14b3660e0

void __thiscall UMetasoundGeneratorHandle::BeginDestroy(UMetasoundGeneratorHandle *this)

{
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  UObject::BeginDestroy((UObject *)this);
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->GeneratorHandle != (TSharedPtr<Metasound::FMetasoundGeneratorHandle,1> *)&local_18) {
    (this->GeneratorHandle).Object = (FMetasoundGeneratorHandle *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->GeneratorHandle).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  return;
}

// CreateMetaSoundGeneratorHandle @ 14b3747b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMetasoundGeneratorHandle * __cdecl
UMetasoundGeneratorHandle::CreateMetaSoundGeneratorHandle(UAudioComponent *param_1)

{
  bool bVar1;
  bool bVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  UMetasoundGeneratorHandle *this;
  longlong *plVar5;
  UMetasoundGeneratorHandle *pUVar6;
  bool bVar7;
  undefined1 auStackY_f8 [32];
  FName local_c8;
  FLLMScope local_c0 [2];
  UAudioComponent *local_b8;
  FMemScope local_b0;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  FLLMScope::FLLMScope
            (local_c0,LLMTagDeclaration_Audio_MetaSound.UniqueName,false,None,Default,true);
  local_c8 = LLMTagDeclaration_Audio_MetaSound.UniqueName;
  FMemScope::FMemScope(&local_b0,&local_c8,true);
  bVar1 = 0 < GCycleStatsShouldEmitNamedEvents;
  if (bVar1) {
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Green,"UMetasoundGeneratorHandle::CreateMetaSoundGeneratorHandle");
  }
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId732,
               "UMetasoundGeneratorHandle::CreateMetaSoundGeneratorHandle",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundGeneratorHandle.cpp"
               ,0x2dc);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId732);
  }
  if (param_1 == (UAudioComponent *)0x0) {
    pUVar6 = (UMetasoundGeneratorHandle *)0x0;
  }
  else {
    pUVar3 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar3,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar4 = StaticClass();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_a8,pUVar4);
    local_a8._8_8_ = pUVar3;
    this = (UMetasoundGeneratorHandle *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
    if (local_a8._64_8_ != 0) {
      plVar5 = (longlong *)(local_a8 + 0x50);
      if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
        plVar5 = (longlong *)local_a8._104_8_;
      }
      (**(code **)(*plVar5 + 0x10))();
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_c8.ComparisonIndex.Value = 0;
    local_c8.Number = 0;
    local_b8 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_c8,(FObjectPtr)&local_b8);
    bVar2 = InitGeneratorHandle(this,(TWeakObjectPtr<UAudioComponent,FWeakObjectPtr> *)&local_c8);
    pUVar6 = (UMetasoundGeneratorHandle *)0x0;
    if (bVar2) {
      pUVar6 = this;
    }
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar1) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  FMemScope::~FMemScope(&local_b0);
  FLLMScope::~FLLMScope(local_c0);
  return pUVar6;
}

// EnableRuntimeRenderTiming @ 14b398ac0

void __thiscall
UMetasoundGeneratorHandle::EnableRuntimeRenderTiming(UMetasoundGeneratorHandle *this,bool param_1)

{
  FMetasoundGeneratorHandle *pFVar1;
  FMetasoundGenerator *pFVar2;
  code *pcVar3;
  atomic<int> aVar4;
  bool bVar5;
  atomic<int> aVar6;
  TReferenceControllerBase<1> *pTVar7;
  
  pFVar1 = (this->GeneratorHandle).Object;
  if ((pFVar1 != (FMetasoundGeneratorHandle *)0x0) &&
     (bVar5 = FWeakObjectPtr::IsValid(&(pFVar1->AudioComponent).WeakPtr), bVar5)) {
    if (((this->GeneratorHandle).Object == (FMetasoundGeneratorHandle *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar1 = (this->GeneratorHandle).Object;
    pFVar1->bRuntimeRenderTimingShouldBeEnabled = param_1;
    pTVar7 = (pFVar1->Generator).WeakReferenceCount.ReferenceController;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      aVar4 = pTVar7->SharedReferenceCount;
      do {
        if (aVar4 == (atomic<int>)0x0) {
          pTVar7 = (TReferenceControllerBase<1> *)0x0;
          goto LAB_14b398b50;
        }
        LOCK();
        aVar6 = pTVar7->SharedReferenceCount;
        bVar5 = aVar4 == aVar6;
        if (bVar5) {
          pTVar7->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
          aVar6 = aVar4;
        }
        UNLOCK();
        aVar4 = aVar6;
      } while (!bVar5);
      pFVar2 = (pFVar1->Generator).Object;
      if (pFVar2 != (FMetasoundGenerator *)0x0) {
        pFVar2->field_0x250 =
             (pFVar1->bRuntimeRenderTimingShouldBeEnabled << 6 ^ pFVar2->field_0x250) & 0x40U ^
             pFVar2->field_0x250;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
        return;
      }
    }
LAB_14b398b50:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  }
  return;
}

// GetAudioComponentId @ 14b3ad500

ulong64 __thiscall UMetasoundGeneratorHandle::GetAudioComponentId(UMetasoundGeneratorHandle *this)

{
  FMetasoundGeneratorHandle *pFVar1;
  code *pcVar2;
  bool bVar3;
  ulong64 uVar4;
  
  pFVar1 = (this->GeneratorHandle).Object;
  if (pFVar1 != (FMetasoundGeneratorHandle *)0x0) {
    bVar3 = FWeakObjectPtr::IsValid(&(pFVar1->AudioComponent).WeakPtr);
    if (bVar3) {
      if ((this->GeneratorHandle).Object == (FMetasoundGeneratorHandle *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return uVar4;
        }
      }
      return ((this->GeneratorHandle).Object)->AudioComponentId;
    }
  }
  return 0xffffffffffffffff;
}

// GetCPUCoreUtilization @ 14b3ae480

double __thiscall UMetasoundGeneratorHandle::GetCPUCoreUtilization(UMetasoundGeneratorHandle *this)

{
  FMetasoundGeneratorHandle *pFVar1;
  FMetasoundGenerator *this_00;
  code *pcVar2;
  atomic<int> aVar3;
  bool bVar4;
  atomic<int> aVar5;
  TReferenceControllerBase<1> *pTVar6;
  double dVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  pFVar1 = (this->GeneratorHandle).Object;
  if ((pFVar1 == (FMetasoundGeneratorHandle *)0x0) ||
     (bVar4 = FWeakObjectPtr::IsValid(&(pFVar1->AudioComponent).WeakPtr), !bVar4)) {
    return 0.0;
  }
  if (((this->GeneratorHandle).Object == (FMetasoundGeneratorHandle *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    dVar7 = (double)(*pcVar2)();
    return dVar7;
  }
  pFVar1 = (this->GeneratorHandle).Object;
  pTVar6 = (pFVar1->Generator).WeakReferenceCount.ReferenceController;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar6->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        pTVar6 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14b3ae510;
      }
      LOCK();
      aVar5 = pTVar6->SharedReferenceCount;
      bVar4 = aVar3 == aVar5;
      if (bVar4) {
        pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar5 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar5;
    } while (!bVar4);
    this_00 = (pFVar1->Generator).Object;
    if (this_00 != (FMetasoundGenerator *)0x0) {
      dVar7 = Metasound::FMetasoundGenerator::GetCPUCoreUtilization(this_00);
      uVar8 = SUB84(dVar7,0);
      uVar9 = (undefined4)((ulonglong)dVar7 >> 0x20);
      goto LAB_14b3ae513;
    }
  }
LAB_14b3ae510:
  uVar8 = 0;
  uVar9 = 0;
LAB_14b3ae513:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return (double)CONCAT44(uVar9,uVar8);
}

// GetGenerator @ 14b3b4490

TSharedPtr<Metasound::FMetasoundGenerator,1> * __thiscall
UMetasoundGeneratorHandle::GetGenerator
          (UMetasoundGeneratorHandle *this,
          TSharedPtr<Metasound::FMetasoundGenerator,1> *__return_storage_ptr__)

{
  FMetasoundGeneratorHandle *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  atomic<int> aVar4;
  bool bVar5;
  atomic<int> aVar6;
  TSharedPtr<Metasound::FMetasoundGenerator,1> *pTVar7;
  
  pFVar1 = (this->GeneratorHandle).Object;
  if ((pFVar1 == (FMetasoundGeneratorHandle *)0x0) ||
     (bVar5 = FWeakObjectPtr::IsValid(&(pFVar1->AudioComponent).WeakPtr), !bVar5)) {
    __return_storage_ptr__->Object = (FMetasoundGenerator *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    if (((this->GeneratorHandle).Object == (FMetasoundGeneratorHandle *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedPtr<Metasound::FMetasoundGenerator,1> *)(*pcVar3)();
      return pTVar7;
    }
    pFVar1 = (this->GeneratorHandle).Object;
    pTVar2 = (pFVar1->Generator).WeakReferenceCount.ReferenceController;
    if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
LAB_14b3b4520:
      __return_storage_ptr__->Object = (FMetasoundGenerator *)0x0;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
    }
    else {
      aVar4 = pTVar2->SharedReferenceCount;
      do {
        if (aVar4 == (atomic<int>)0x0) goto LAB_14b3b4520;
        LOCK();
        aVar6 = pTVar2->SharedReferenceCount;
        bVar5 = aVar4 == aVar6;
        if (bVar5) {
          pTVar2->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
          aVar6 = aVar4;
        }
        UNLOCK();
        aVar4 = aVar6;
      } while (!bVar5);
      __return_storage_ptr__->Object = (pFVar1->Generator).Object;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14b3bfa00

UClass * __cdecl UMetasoundGeneratorHandle::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMetasoundGeneratorHandle.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MetasoundEngine",L"MetasoundGeneratorHandle",
               &Z_Registration_Info_UClass_UMetasoundGeneratorHandle.InnerSingleton,
               StaticRegisterNativesUMetasoundGeneratorHandle,0xd8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMetasoundGeneratorHandle>,
               InternalVTableHelperCtorCaller<UMetasoundGeneratorHandle>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMetasoundGeneratorHandle.InnerSingleton;
}

// InitGeneratorHandle @ 14b3c4c10

bool __thiscall
UMetasoundGeneratorHandle::InitGeneratorHandle
          (UMetasoundGeneratorHandle *this,TWeakObjectPtr<UAudioComponent,FWeakObjectPtr> *param_1)

{
  TSharedPtr<Metasound::FMetasoundGeneratorHandle,1> *pTVar1;
  FMetasoundGeneratorHandle *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  TSharedPtr<Metasound::FMetasoundGeneratorHandle,1> *pTVar6;
  undefined8 *puVar7;
  ulong64 uVar8;
  FDestructionSentinel local_98;
  undefined1 *local_80;
  FDestructionSentinel local_78;
  undefined1 *local_60;
  FDestructionSentinel local_58;
  undefined1 *local_40;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  TSharedPtr<Metasound::FMetasoundGeneratorHandle,1> local_18;
  
  pTVar6 = Metasound::FMetasoundGeneratorHandle::Create(&local_18,param_1);
  pTVar1 = &this->GeneratorHandle;
  if (pTVar1 != pTVar6) {
    pTVar1->Object = pTVar6->Object;
    pTVar6->Object = (FMetasoundGeneratorHandle *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->GeneratorHandle).SharedReferenceCount,&pTVar6->SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  pFVar2 = pTVar1->Object;
  if (pFVar2 == (FMetasoundGeneratorHandle *)0x0) {
    bVar4 = false;
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar2->OnGeneratorSet,
               (FWriteAccessScope *)&local_98);
    local_80 = &(pFVar2->OnGeneratorSet).field_0x8;
    puVar7 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_80);
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = &
                ___7__TCommonDelegateInstanceState___A6AX__QEAV__TWeakPtr_VFMetasoundGenerator_Metasound___00___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar8 = FDelegateHandle::GenerateNewID();
      puVar7[2] = uVar8;
      *puVar7 = &TBaseFunctorDelegateInstance<void___cdecl(TWeakPtr<Metasound::FMetasoundGenerator,1>_&&),FDefaultDelegateUserPolicy,`UMetasoundGeneratorHandle::InitGeneratorHandle'::`2'::<lambda_1>_>
                 ::_vftable_;
      puVar7[3] = this;
    }
    if (local_98.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
    }
    if (pTVar1->Object == (FMetasoundGeneratorHandle *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    pFVar2 = pTVar1->Object;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar2->OnGraphUpdated,
               (FWriteAccessScope *)&local_78);
    local_60 = &(pFVar2->OnGraphUpdated).field_0x8;
    puVar7 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_60);
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
      uVar8 = FDelegateHandle::GenerateNewID();
      puVar7[2] = uVar8;
      *puVar7 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UMetasoundGeneratorHandle::InitGeneratorHandle'::`2'::<lambda_2>_>
                 ::_vftable_;
      puVar7[3] = this;
    }
    if (local_78.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
    }
    if (pTVar1->Object == (FMetasoundGeneratorHandle *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    pFVar2 = pTVar1->Object;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &pFVar2->OnGeneratorIOUpdated,(FWriteAccessScope *)&local_58);
    local_40 = &(pFVar2->OnGeneratorIOUpdated).field_0x8;
    puVar7 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_40);
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
      uVar8 = FDelegateHandle::GenerateNewID();
      puVar7[2] = uVar8;
      *puVar7 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UMetasoundGeneratorHandle::InitGeneratorHandle'::`2'::<lambda_3>_>
                 ::_vftable_;
      puVar7[3] = this;
    }
    if (local_58.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
    }
    if (pTVar1->Object == (FMetasoundGeneratorHandle *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    pFVar2 = pTVar1->Object;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &pFVar2->OnGeneratorIOUpdatedWithChanges,(FWriteAccessScope *)&local_38);
    local_20 = &(pFVar2->OnGeneratorIOUpdatedWithChanges).field_0x8;
    puVar7 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_20);
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = &
                ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_UFVertexInterfaceChange_Metasound__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar8 = FDelegateHandle::GenerateNewID();
      puVar7[2] = uVar8;
      *puVar7 = &TBaseFunctorDelegateInstance<void___cdecl(TArray<Metasound::FVertexInterfaceChange,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,`UMetasoundGeneratorHandle::InitGeneratorHandle'::`2'::<lambda_4>_>
                 ::_vftable_;
      puVar7[3] = this;
    }
    if (local_38.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
    }
    bVar4 = true;
  }
  return bVar4;
}

// IsValid @ 14b3c8f60

bool __thiscall UMetasoundGeneratorHandle::IsValid(UMetasoundGeneratorHandle *this)

{
  FMetasoundGeneratorHandle *pFVar1;
  bool bVar2;
  
  pFVar1 = (this->GeneratorHandle).Object;
  if (pFVar1 != (FMetasoundGeneratorHandle *)0x0) {
    bVar2 = FWeakObjectPtr::IsValid(&(pFVar1->AudioComponent).WeakPtr);
    if (bVar2) {
      return true;
    }
  }
  return false;
}

// RegisterPassthroughAnalyzerForType @ 14b3d2330

void __cdecl
UMetasoundGeneratorHandle::RegisterPassthroughAnalyzerForType
          (FName param_1,FName param_2,FName param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  TPairInitializer<FName_const_&,Metasound::FMetasoundGeneratorHandle::FPassthroughAnalyzerInfo_&&>
  local_res8;
  FName local_28;
  FName local_20;
  FPassthroughAnalyzerInfo **local_18;
  FName *local_10;
  
  local_res8.Value = (FPassthroughAnalyzerInfo *)param_1;
  uVar4 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (Metasound::FMetasoundGeneratorHandle::PassthroughAnalyzers._8_4_ !=
      Metasound::FMetasoundGeneratorHandle::PassthroughAnalyzers._52_4_) {
    lVar5 = 0x154cc5ff8;
    if (Metasound::FMetasoundGeneratorHandle::PassthroughAnalyzers._64_8_ != 0) {
      lVar5 = Metasound::FMetasoundGeneratorHandle::PassthroughAnalyzers._64_8_;
    }
    for (iVar1 = *(int *)(lVar5 + (ulonglong)
                                  (Metasound::FMetasoundGeneratorHandle::PassthroughAnalyzers._72_4_
                                   - 1 & param_1.Number + uVar4) * 4); iVar1 != -1;
        iVar1 = *(int *)((longlong)iVar1 * 0x20 + 0x18 +
                        Metasound::FMetasoundGeneratorHandle::PassthroughAnalyzers._0_8_)) {
      if (*(FName *)((longlong)iVar1 * 0x20 +
                    Metasound::FMetasoundGeneratorHandle::PassthroughAnalyzers._0_8_) == param_1) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!PassthroughAnalyzers.Contains(TypeName)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundGeneratorHandle.cpp"
                           ,0xbb,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        break;
      }
    }
  }
  local_18 = &local_res8.Value;
  local_10 = &local_28;
  local_28 = param_2;
  local_20 = param_3;
  TSet<TTuple<FName,Metasound::FMetasoundGeneratorHandle::FPassthroughAnalyzerInfo>,TDefaultMapHashableKeyFuncs<FName,Metasound::FMetasoundGeneratorHandle::FPassthroughAnalyzerInfo,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FName_const_&,Metasound::FMetasoundGeneratorHandle::FPassthroughAnalyzerInfo_&&>_>
            ((TSet<TTuple<FName,Metasound::FMetasoundGeneratorHandle::FPassthroughAnalyzerInfo>,TDefaultMapHashableKeyFuncs<FName,Metasound::FMetasoundGeneratorHandle::FPassthroughAnalyzerInfo,0>,FDefaultSetAllocator>
              *)&Metasound::FMetasoundGeneratorHandle::PassthroughAnalyzers,&local_res8,
             (bool *)&local_18);
  return;
}

// RemoveGraphSetCallback @ 14b3d4e10

bool __thiscall
UMetasoundGeneratorHandle::RemoveGraphSetCallback
          (UMetasoundGeneratorHandle *this,FDelegateHandle *param_1)

{
  bool bVar1;
  
  if (param_1->ID != 0) {
    bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &this->OnGeneratorsGraphChanged,(FDelegateHandle)param_1->ID);
    return bVar1;
  }
  return false;
}

// StaticRegisterNativesUMetasoundGeneratorHandle @ 14b3e1630

void __cdecl UMetasoundGeneratorHandle::StaticRegisterNativesUMetasoundGeneratorHandle(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 6;
  local_18.DataPtr = Z_Construct_UClass_UMetasoundGeneratorHandle_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// TryCreateAnalyzerAddress @ 14b3e32e0

bool __thiscall
UMetasoundGeneratorHandle::TryCreateAnalyzerAddress
          (UMetasoundGeneratorHandle *this,FName param_1,FName param_2,FName param_3,
          FAnalyzerAddress *param_4)

{
  FMetasoundGeneratorHandle *pFVar1;
  bool bVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  FLLMScope local_res8 [2];
  FName local_28;
  FMemScope local_20;
  
  FLLMScope::FLLMScope
            (local_res8,LLMTagDeclaration_Audio_MetaSound.UniqueName,false,None,Default,true);
  local_28 = LLMTagDeclaration_Audio_MetaSound.UniqueName;
  FMemScope::FMemScope(&local_20,&local_28,true);
  bVar2 = 0 < GCycleStatsShouldEmitNamedEvents;
  if (bVar2) {
    FGenericPlatformMisc::BeginNamedEvent(&FColor::Green,"UMetasoundGeneratorHandle::WatchOutput");
  }
  bVar6 = -1 < CpuChannel->Enabled;
  if (bVar6) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId797,"UMetasoundGeneratorHandle::WatchOutput",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundGeneratorHandle.cpp"
               ,0x31d);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId797);
  }
  pFVar1 = (this->GeneratorHandle).Object;
  if ((pFVar1 == (FMetasoundGeneratorHandle *)0x0) ||
     (bVar4 = FWeakObjectPtr::IsValid(&(pFVar1->AudioComponent).WeakPtr), !bVar4)) {
    bVar4 = false;
  }
  else {
    if (((this->GeneratorHandle).Object == (FMetasoundGeneratorHandle *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    bVar4 = Metasound::FMetasoundGeneratorHandle::TryCreateAnalyzerAddress
                      ((this->GeneratorHandle).Object,param_1,param_2,param_3,param_4);
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar2) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  FMemScope::~FMemScope(&local_20);
  FLLMScope::~FLLMScope(local_res8);
  return bVar4;
}

// UpdateWatchers @ 14b3e66c0

void __thiscall UMetasoundGeneratorHandle::UpdateWatchers(UMetasoundGeneratorHandle *this)

{
  return;
}

// WatchOutput @ 14b3e76b0

bool __thiscall
UMetasoundGeneratorHandle::WatchOutput
          (UMetasoundGeneratorHandle *this,FName param_1,
          TDelegate<void___cdecl(FName,FMetaSoundOutput_const_&),FDefaultDelegateUserPolicy>
          *param_2,FName param_3,FName param_4)

{
  FMetasoundGeneratorHandle *pFVar1;
  bool bVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  FLLMScope local_res8 [2];
  FName local_28;
  FMemScope local_20;
  
  FLLMScope::FLLMScope
            (local_res8,LLMTagDeclaration_Audio_MetaSound.UniqueName,false,None,Default,true);
  local_28 = LLMTagDeclaration_Audio_MetaSound.UniqueName;
  FMemScope::FMemScope(&local_20,&local_28,true);
  bVar2 = 0 < GCycleStatsShouldEmitNamedEvents;
  if (bVar2) {
    FGenericPlatformMisc::BeginNamedEvent(&FColor::Green,"UMetasoundGeneratorHandle::WatchOutput");
  }
  bVar6 = -1 < CpuChannel->Enabled;
  if (bVar6) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId831,"UMetasoundGeneratorHandle::WatchOutput",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundGeneratorHandle.cpp"
               ,0x33f);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId831);
  }
  pFVar1 = (this->GeneratorHandle).Object;
  if ((pFVar1 == (FMetasoundGeneratorHandle *)0x0) ||
     (bVar4 = FWeakObjectPtr::IsValid(&(pFVar1->AudioComponent).WeakPtr), !bVar4)) {
    bVar4 = false;
  }
  else {
    if (((this->GeneratorHandle).Object == (FMetasoundGeneratorHandle *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    bVar4 = Metasound::FMetasoundGeneratorHandle::WatchOutput
                      ((this->GeneratorHandle).Object,param_1,param_2,param_3,param_4);
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar2) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  FMemScope::~FMemScope(&local_20);
  FLLMScope::~FLLMScope(local_res8);
  return bVar4;
}

// WatchOutput @ 14b3e7840

bool __thiscall
UMetasoundGeneratorHandle::WatchOutput
          (UMetasoundGeneratorHandle *this,FName param_1,FOnMetasoundOutputValueChanged *param_2,
          FName param_3,FName param_4)

{
  FMetasoundGeneratorHandle *pFVar1;
  bool bVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  FLLMScope local_res8 [2];
  FName local_28;
  FMemScope local_20;
  
  FLLMScope::FLLMScope
            (local_res8,LLMTagDeclaration_Audio_MetaSound.UniqueName,false,None,Default,true);
  local_28 = LLMTagDeclaration_Audio_MetaSound.UniqueName;
  FMemScope::FMemScope(&local_20,&local_28,true);
  bVar2 = 0 < GCycleStatsShouldEmitNamedEvents;
  if (bVar2) {
    FGenericPlatformMisc::BeginNamedEvent(&FColor::Green,"UMetasoundGeneratorHandle::WatchOutput");
  }
  bVar6 = -1 < CpuChannel->Enabled;
  if (bVar6) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId814,"UMetasoundGeneratorHandle::WatchOutput",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundGeneratorHandle.cpp"
               ,0x32e);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId814);
  }
  pFVar1 = (this->GeneratorHandle).Object;
  if ((pFVar1 == (FMetasoundGeneratorHandle *)0x0) ||
     (bVar4 = FWeakObjectPtr::IsValid(&(pFVar1->AudioComponent).WeakPtr), !bVar4)) {
    bVar4 = false;
  }
  else {
    if (((this->GeneratorHandle).Object == (FMetasoundGeneratorHandle *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    bVar4 = Metasound::FMetasoundGeneratorHandle::WatchOutput
                      ((this->GeneratorHandle).Object,param_1,param_2,param_3,param_4);
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar2) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  FMemScope::~FMemScope(&local_20);
  FLLMScope::~FLLMScope(local_res8);
  return bVar4;
}

// execApplyParameterPack @ 14b3e9950

void __cdecl
UMetasoundGeneratorHandle::execApplyParameterPack(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  UMetasoundParameterPack *local_res10;
  
  local_res10 = (UMetasoundParameterPack *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = ApplyParameterPack((UMetasoundGeneratorHandle *)param_1,local_res10);
  *(bool *)param_3 = bVar2;
  return;
}

// execCreateMetaSoundGeneratorHandle @ 14b3ec280

void __cdecl
UMetasoundGeneratorHandle::execCreateMetaSoundGeneratorHandle
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UMetasoundGeneratorHandle *pUVar2;
  UAudioComponent *local_res10;
  
  local_res10 = (UAudioComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar2 = CreateMetaSoundGeneratorHandle(local_res10);
  *(UMetasoundGeneratorHandle **)param_3 = pUVar2;
  return;
}

// execEnableRuntimeRenderTiming @ 14b3eec80

void __cdecl
UMetasoundGeneratorHandle::execEnableRuntimeRenderTiming
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  atomic<int> aVar5;
  bool bVar6;
  atomic<int> aVar7;
  TReferenceControllerBase<1> *pTVar8;
  bool bVar9;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  bVar9 = local_res8[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((*(longlong *)&param_1[4].field_0x8 != 0) &&
     (bVar6 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(*(longlong *)&param_1[4].field_0x8 + 0x70))
     , bVar6)) {
    if ((*(longlong *)&param_1[4].field_0x8 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    lVar2 = *(longlong *)&param_1[4].field_0x8;
    *(bool *)(lVar2 + 0x154) = bVar9;
    pTVar8 = *(TReferenceControllerBase<1> **)(lVar2 + 0xb0);
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      aVar5 = pTVar8->SharedReferenceCount;
      do {
        if (aVar5 == (atomic<int>)0x0) {
          pTVar8 = (TReferenceControllerBase<1> *)0x0;
          goto LAB_14b3eed70;
        }
        LOCK();
        aVar7 = pTVar8->SharedReferenceCount;
        bVar9 = aVar5 == aVar7;
        if (bVar9) {
          pTVar8->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
          aVar7 = aVar5;
        }
        UNLOCK();
        aVar5 = aVar7;
      } while (!bVar9);
      lVar3 = *(longlong *)(lVar2 + 0xa8);
      if (lVar3 != 0) {
        *(byte *)(lVar3 + 0x250) =
             (*(char *)(lVar2 + 0x154) << 6 ^ *(byte *)(lVar3 + 0x250)) & 0x40 ^
             *(byte *)(lVar3 + 0x250);
      }
    }
LAB_14b3eed70:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
  return;
}

// execGetCPUCoreUtilization @ 14b3f0cd0

void __cdecl
UMetasoundGeneratorHandle::execGetCPUCoreUtilization(UObject *param_1,FFrame *param_2,void *param_3)

{
  longlong lVar1;
  FMetasoundGenerator *this;
  code *pcVar2;
  atomic<int> aVar3;
  bool bVar4;
  atomic<int> aVar5;
  TReferenceControllerBase<1> *pTVar6;
  double dVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((*(longlong *)&param_1[4].field_0x8 == 0) ||
     (bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(*(longlong *)&param_1[4].field_0x8 + 0x70))
     , !bVar4)) {
    *(undefined8 *)param_3 = 0;
    return;
  }
  if ((*(longlong *)&param_1[4].field_0x8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar1 = *(longlong *)&param_1[4].field_0x8;
  pTVar6 = *(TReferenceControllerBase<1> **)(lVar1 + 0xb0);
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar6->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        pTVar6 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14b3f0d73;
      }
      LOCK();
      aVar5 = pTVar6->SharedReferenceCount;
      bVar4 = aVar3 == aVar5;
      if (bVar4) {
        pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar5 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar5;
    } while (!bVar4);
    this = *(FMetasoundGenerator **)(lVar1 + 0xa8);
    if (this != (FMetasoundGenerator *)0x0) {
      dVar7 = Metasound::FMetasoundGenerator::GetCPUCoreUtilization(this);
      uVar8 = SUB84(dVar7,0);
      uVar9 = (undefined4)((ulonglong)dVar7 >> 0x20);
      goto LAB_14b3f0d76;
    }
  }
LAB_14b3f0d73:
  uVar8 = 0;
  uVar9 = 0;
LAB_14b3f0d76:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  *(ulonglong *)param_3 = CONCAT44(uVar9,uVar8);
  return;
}

// execUpdateWatchers @ 14b3f6bb0

void __cdecl
UMetasoundGeneratorHandle::execUpdateWatchers(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  return;
}

// execWatchOutput @ 14b3f6dd0

void __cdecl
UMetasoundGeneratorHandle::execWatchOutput(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  code *pcVar3;
  FName FVar4;
  FName FVar5;
  FName FVar6;
  bool bVar7;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *this;
  bool bVar8;
  FLLMScope local_res8 [2];
  FName local_res10;
  FName local_res18;
  FName local_res20;
  FName local_a8;
  FMemScope local_a0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 local_80 [16];
  atomic<unsigned___int64> local_70;
  FReadAccessScope local_68;
  
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_98.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_90 = 0;
  local_88 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  this = &local_98;
  if ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2->MostRecentPropertyAddress
      != (TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)0x0) {
    this = (TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
           param_2->MostRecentPropertyAddress;
  }
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  FVar5 = local_res18;
  FVar4 = local_res10;
  local_80._0_8_ = (atomic<unsigned___int64>)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(this,&local_68);
  local_80._8_8_ = this[1].AccessDetector.State;
  local_70 = this[2].AccessDetector.State;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_68);
  FVar6 = local_res20;
  FLLMScope::FLLMScope
            (local_res8,LLMTagDeclaration_Audio_MetaSound.UniqueName,false,None,Default,true);
  local_a8 = LLMTagDeclaration_Audio_MetaSound.UniqueName;
  FMemScope::FMemScope(&local_a0,&local_a8,true);
  bVar2 = 0 < GCycleStatsShouldEmitNamedEvents;
  if (bVar2) {
    FGenericPlatformMisc::BeginNamedEvent(&FColor::Green,"UMetasoundGeneratorHandle::WatchOutput");
  }
  bVar8 = -1 < CpuChannel->Enabled;
  if (bVar8) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId814,"UMetasoundGeneratorHandle::WatchOutput",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundGeneratorHandle.cpp"
               ,0x32e);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId814);
  }
  if ((*(longlong *)&param_1[4].field_0x8 == 0) ||
     (bVar7 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(*(longlong *)&param_1[4].field_0x8 + 0x70))
     , !bVar7)) {
    if (bVar8) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (bVar2) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    bVar7 = false;
  }
  else {
    if ((*(longlong *)&param_1[4].field_0x8 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar7 = Metasound::FMetasoundGeneratorHandle::WatchOutput
                      (*(FMetasoundGeneratorHandle **)&param_1[4].field_0x8,FVar6,
                       (FOnMetasoundOutputValueChanged *)local_80,FVar5,FVar4);
    if (bVar8) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (bVar2) {
      FGenericPlatformMisc::EndNamedEvent();
    }
  }
  FMemScope::~FMemScope(&local_a0);
  FLLMScope::~FLLMScope(local_res8);
  *(bool *)param_3 = bVar7;
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_80);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_98.AccessDetector);
  return;
}

