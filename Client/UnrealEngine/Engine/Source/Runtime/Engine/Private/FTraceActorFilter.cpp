// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// Destroy @ 1488bbba0

void __cdecl FTraceActorFilter::Destroy(void)

{
  TMulticastDelegateRegistration<void___cdecl(UWorld_*,FWorldInitializationValues),FDefaultDelegateUserPolicy>
  ::Remove((TMulticastDelegateRegistration<void___cdecl(UWorld_*,FWorldInitializationValues),FDefaultDelegateUserPolicy>
            *)&FWorldDelegates::OnPreWorldInitialization,WorldPreInitHandle);
  TMulticastDelegateRegistration<void___cdecl(UWorld_*,FWorldInitializationValues),FDefaultDelegateUserPolicy>
  ::Remove((TMulticastDelegateRegistration<void___cdecl(UWorld_*,FWorldInitializationValues),FDefaultDelegateUserPolicy>
            *)&FWorldDelegates::OnPostWorldInitialization,WorldPostInitHandle);
  return;
}

// Initialize @ 1488cbc80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl FTraceActorFilter::Initialize(void)

{
  FDelegateHandle FVar1;
  undefined1 local_res8 [32];
  
  FVar1 = TMulticastDelegateRegistration<void___cdecl(UWorld_*,FWorldInitializationValues),FDefaultDelegateUserPolicy>
          ::AddStatic<>((TMulticastDelegateRegistration<void___cdecl(UWorld_*,FWorldInitializationValues),FDefaultDelegateUserPolicy>
                         *)&FWorldDelegates::OnPreWorldInitialization,
                        (_func___cdecl_void_UWorld_ptr_FWorldInitializationValues *)local_res8);
                    /* WARNING: Load size is inaccurate */
  WorldPreInitHandle.ID = *FVar1.ID;
  FVar1 = TMulticastDelegateRegistration<void___cdecl(UWorld_*,FWorldInitializationValues),FDefaultDelegateUserPolicy>
          ::AddStatic<>((TMulticastDelegateRegistration<void___cdecl(UWorld_*,FWorldInitializationValues),FDefaultDelegateUserPolicy>
                         *)&FWorldDelegates::OnPostWorldInitialization,
                        (_func___cdecl_void_UWorld_ptr_FWorldInitializationValues *)local_res8);
                    /* WARNING: Load size is inaccurate */
  WorldPostInitHandle.ID = *FVar1.ID;
  return;
}

// OnActorSpawned @ 1488ce6a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl FTraceActorFilter::OnActorSpawned(AActor *param_1)

{
  code *pcVar1;
  bool bVar2;
  UWorld *pUVar3;
  FTraceFilterObjectAnnotation *pFVar4;
  
  pUVar3 = AActor::GetWorld(param_1);
  pFVar4 = TMapBase<UObjectBase_const_*,FTraceFilterObjectAnnotation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FTraceFilterObjectAnnotation,0>_>
           ::Find((TMapBase<UObjectBase_const_*,FTraceFilterObjectAnnotation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FTraceFilterObjectAnnotation,0>_>
                   *)&GObjectFilterAnnotations.AnnotationMap,(UObjectBase *)pUVar3);
  if (pFVar4 != (FTraceFilterObjectAnnotation *)0x0) {
    return;
  }
  if (param_1 == (AActor *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5664537739974934824>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TraceFilter.cpp"
                       ,0x128,"InObject");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TraceFilter.cpp"
                       ,0x3d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&GObjectFilterAnnotations.AnnotationMapCritical);
  GObjectFilterAnnotations.AnnotationCacheValue.bIsTraceable = true;
  GObjectFilterAnnotations.AnnotationCacheKey = (UObjectBase *)param_1;
  FTraceUObjectAnnotation::RemoveAnnotation(&GObjectFilterAnnotations,(UObjectBase *)param_1);
  LeaveCriticalSection((LPCRITICAL_SECTION)&GObjectFilterAnnotations.AnnotationMapCritical);
  FObjectTrace::OutputObject((UObject *)param_1);
  return;
}

// OnPostWorldInit @ 1488cfd70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl FTraceActorFilter::OnPostWorldInit(UWorld *param_1,FWorldInitializationValues *param_2)

{
  code *pcVar1;
  bool bVar2;
  FTraceFilterObjectAnnotation *pFVar3;
  UClass *pUVar4;
  AActor *this;
  UWorld *pUVar5;
  FString *pFVar6;
  wchar_t *pwVar7;
  UClass *local_res8;
  FString local_78;
  TActorIteratorBase<TActorIterator<AActor>_> local_68;
  
  pFVar3 = TMapBase<UObjectBase_const_*,FTraceFilterObjectAnnotation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FTraceFilterObjectAnnotation,0>_>
           ::Find((TMapBase<UObjectBase_const_*,FTraceFilterObjectAnnotation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FTraceFilterObjectAnnotation,0>_>
                   *)&GObjectFilterAnnotations.AnnotationMap,(UObjectBase *)param_1);
  if (pFVar3 == (FTraceFilterObjectAnnotation *)0x0) {
    pUVar4 = Z_Construct_UClass_AActor_NoRegister();
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar4 != (UClass *)0x0) {
        UE::GC::MarkAsReachable((UObject *)pUVar4);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar4);
      }
    }
    local_68.Flags = OnlyActiveLevels|SkipPendingKill;
    local_68.State.bIsSet = false;
    local_res8 = pUVar4;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    FActorIteratorState::FActorIteratorState
              (&local_68.State.TypedValue,param_1,(TSubclassOf<AActor>)&local_res8);
    local_68.State.bIsSet = true;
    while( true ) {
      TActorIteratorBase<TActorIterator<AActor>_>::operator++(&local_68);
      if ((local_68.State.bIsSet == false) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (local_68.State.TypedValue.ReachedEnd != false) break;
      if ((local_68.State.bIsSet == false) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      this = FActorIteratorState::GetActorChecked(&local_68.State.TypedValue);
      if (this == (AActor *)0x0) {
        pFVar6 = GetTypeName<AActor>(&local_78);
        if ((pFVar6->Data).ArrayNum == 0) {
          pwVar7 = L"";
        }
        else {
          pwVar7 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(L"nullptr",pwVar7);
      }
      pUVar5 = AActor::GetWorld(this);
      pFVar3 = TMapBase<UObjectBase_const_*,FTraceFilterObjectAnnotation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FTraceFilterObjectAnnotation,0>_>
               ::Find((TMapBase<UObjectBase_const_*,FTraceFilterObjectAnnotation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FTraceFilterObjectAnnotation,0>_>
                       *)&GObjectFilterAnnotations.AnnotationMap,(UObjectBase *)pUVar5);
      if (pFVar3 == (FTraceFilterObjectAnnotation *)0x0) {
        EnterCriticalSection((LPCRITICAL_SECTION)&GObjectFilterAnnotations.AnnotationMapCritical);
        GObjectFilterAnnotations.AnnotationCacheValue.bIsTraceable = true;
        GObjectFilterAnnotations.AnnotationCacheKey = (UObjectBase *)this;
        FTraceUObjectAnnotation::RemoveAnnotation(&GObjectFilterAnnotations,(UObjectBase *)this);
        LeaveCriticalSection((LPCRITICAL_SECTION)&GObjectFilterAnnotations.AnnotationMapCritical);
        FObjectTrace::OutputObject((UObject *)this);
      }
    }
    if (local_68.State.bIsSet != false) {
      UWorld::RemoveOnActorSpawnedHandler
                (local_68.State.TypedValue.CurrentWorld,
                 local_68.State.TypedValue.ActorSpawnedDelegateHandle);
      if (local_68.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data);
      }
      if (local_68.State.TypedValue.ActorArray.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.State.TypedValue.ActorArray.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// OnPreWorldInit @ 1488cff90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl FTraceActorFilter::OnPreWorldInit(UWorld *param_1,FWorldInitializationValues *param_2)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_48;
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_48,(FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVAActor___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXPEAVAActor___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = OnActorSpawned;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  UWorld::AddOnActorSpawnedHandler
            (param_1,(TDelegate<void___cdecl(AActor_*),FDefaultDelegateUserPolicy> *)
                     &stack0x00000018);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_48,(FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_48.AccessDetector);
  return;
}

