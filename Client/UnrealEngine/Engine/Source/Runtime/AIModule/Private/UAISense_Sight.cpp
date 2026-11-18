// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 32

// StaticClass @ 146f84220

UClass * __cdecl UAISense_Sight::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAISense_Sight.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"AISense_Sight",
               &Z_Registration_Info_UClass_UAISense_Sight.InnerSingleton,
               StaticRegisterNativesUAISense_Sight,0x1d8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Game",InternalConstructor<UAISense_Sight>,
               InternalVTableHelperCtorCaller<UAISense_Sight>,local_res8,UAISense::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAISense_Sight.InnerSingleton;
}

// UAISense_Sight @ 146f94b30

UAISense_Sight * __thiscall
UAISense_Sight::UAISense_Sight(UAISense_Sight *this,FVTableHelper *param_1)

{
  UAISense::UAISense((UAISense *)this,param_1);
  this->_padding_ = (longlong)&___7UAISense_Sight__6B_;
  *(undefined8 *)&this->ObservedTargets = 0;
  *(undefined8 *)&(this->ObservedTargets).field_0x8 = 0;
  *(undefined8 *)&(this->ObservedTargets).field_0x20 = 0;
  *(undefined4 *)&(this->ObservedTargets).field_0x28 = 0;
  *(undefined4 *)&(this->ObservedTargets).field_0x2c = 0x80;
  *(undefined4 *)&(this->ObservedTargets).field_0x34 = 0;
  *(undefined4 *)&(this->ObservedTargets).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ObservedTargets).field_0x40 = 0;
  *(undefined4 *)&(this->ObservedTargets).field_0x48 = 0;
  *(undefined8 *)&this->DigestedProperties = 0;
  *(undefined8 *)&(this->DigestedProperties).field_0x8 = 0;
  *(undefined8 *)&(this->DigestedProperties).field_0x20 = 0;
  *(undefined4 *)&(this->DigestedProperties).field_0x28 = 0;
  *(undefined4 *)&(this->DigestedProperties).field_0x2c = 0x80;
  *(undefined4 *)&(this->DigestedProperties).field_0x34 = 0;
  *(undefined4 *)&(this->DigestedProperties).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->DigestedProperties).field_0x40 = 0;
  *(undefined4 *)&(this->DigestedProperties).field_0x48 = 0;
  this->NextOutOfRangeIndex = 0;
  (this->SightQueriesOutOfRange).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SightQueriesOutOfRange).ArrayNum = 0;
  (this->SightQueriesOutOfRange).ArrayMax = 0;
  (this->SightQueriesInRange).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SightQueriesInRange).ArrayNum = 0;
  (this->SightQueriesInRange).ArrayMax = 0;
  (this->SightQueriesPending).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SightQueriesPending).ArrayNum = 0;
  (this->SightQueriesPending).ArrayMax = 0;
  *(undefined8 *)&this->OnPendingCanBeSeenQueryProcessedDelegate = 0;
  *(undefined8 *)&(this->OnPendingCanBeSeenQueryProcessedDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnPendingCanBeSeenQueryProcessedDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnPendingTraceQueryProcessedDelegate = 0;
  *(undefined8 *)&(this->OnPendingTraceQueryProcessedDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnPendingTraceQueryProcessedDelegate).field_0x10 = 0;
  this->QueriesListAccessDetector = (FRWFallbackSafeAccessDetectorDefinition)0x0;
  this->bSightQueriesOutOfRangeDirty = true;
  return this;
}

// UAISense_Sight @ 146f94c50

UAISense_Sight * __thiscall
UAISense_Sight::UAISense_Sight(UAISense_Sight *this,FObjectInitializer *param_1)

{
  uint *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  UAISense_Sight *local_res8;
  FDestructionSentinel local_48;
  longlong *local_30;
  
  UAISense::UAISense((UAISense *)this,param_1);
  this->_padding_ = (longlong)&___7UAISense_Sight__6B_;
  puVar2 = &(this->OnPendingCanBeSeenQueryProcessedDelegate).field_0x8;
  *(undefined8 *)&this->ObservedTargets = 0;
  puVar3 = &(this->OnPendingTraceQueryProcessedDelegate).field_0x8;
  *(undefined8 *)&(this->ObservedTargets).field_0x8 = 0;
  *(undefined8 *)&(this->ObservedTargets).field_0x20 = 0;
  *(undefined4 *)&(this->ObservedTargets).field_0x28 = 0;
  *(undefined4 *)&(this->ObservedTargets).field_0x2c = 0x80;
  *(undefined4 *)&(this->ObservedTargets).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ObservedTargets).field_0x34 = 0;
  *(undefined8 *)&(this->ObservedTargets).field_0x40 = 0;
  *(undefined4 *)&(this->ObservedTargets).field_0x48 = 0;
  *(undefined8 *)&this->DigestedProperties = 0;
  *(undefined8 *)&(this->DigestedProperties).field_0x8 = 0;
  *(undefined8 *)&(this->DigestedProperties).field_0x20 = 0;
  *(undefined4 *)&(this->DigestedProperties).field_0x28 = 0;
  *(undefined4 *)&(this->DigestedProperties).field_0x2c = 0x80;
  *(undefined4 *)&(this->DigestedProperties).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DigestedProperties).field_0x34 = 0;
  *(undefined8 *)&(this->DigestedProperties).field_0x40 = 0;
  *(undefined4 *)&(this->DigestedProperties).field_0x48 = 0;
  this->NextOutOfRangeIndex = 0;
  this->bSightQueriesOutOfRangeDirty = true;
  (this->SightQueriesOutOfRange).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SightQueriesOutOfRange).ArrayNum = 0;
  (this->SightQueriesOutOfRange).ArrayMax = 0;
  (this->SightQueriesInRange).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SightQueriesInRange).ArrayNum = 0;
  (this->SightQueriesInRange).ArrayMax = 0;
  (this->SightQueriesPending).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SightQueriesPending).ArrayNum = 0;
  (this->SightQueriesPending).ArrayMax = 0;
  this->MaxTracesPerTick = 6;
  this->MaxAsyncTracesPerTick = 10;
  this->MinQueriesPerTimeSliceCheck = 0x28;
  this->MaxTimeSlicePerTick = 0.005;
  this->HighImportanceQueryDistanceThreshold = 300.0;
  this->MaxQueryImportance = 60.0;
  this->SightLimitQueryImportance = 10.0;
  this->PendingQueriesBudgetReductionRatio = 0.5;
  this->bUseAsynchronousTraceForDefaultSightQueries = false;
  *(undefined8 *)&this->OnPendingCanBeSeenQueryProcessedDelegate = 0;
  *(undefined8 *)puVar2 = 0;
  *(undefined4 *)&(this->OnPendingCanBeSeenQueryProcessedDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnPendingTraceQueryProcessedDelegate = 0;
  *(undefined8 *)puVar3 = 0;
  *(undefined4 *)&(this->OnPendingTraceQueryProcessedDelegate).field_0x10 = 0;
  this->QueriesListAccessDetector = (FRWFallbackSafeAccessDetectorDefinition)0x0;
  if ((this->_padding_ & 0x10) == 0) {
    pUVar5 = Z_Construct_UClass_UAISenseConfig_Sight_NoRegister();
    if ((pUVar5->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar5);
    }
    pUVar4 = (pUVar5->ClassDefaultObject).field0_0x0.DebugPtr;
    pUVar5 = GetPrivateStaticClass();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    *(UClass **)&pUVar4[1].field_0x20 = pUVar5;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_padding_,
               (FWriteAccessScope *)&local_48);
    local_30 = &this->_padding_;
    puVar6 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_30);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &
                ___7__TCommonDelegateInstanceState___A6AXAEBUFPerceptionListener___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar7 = FDelegateHandle::GenerateNewID();
      puVar6[2] = uVar7;
      *puVar6 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUAISense_Sight____A6AXAEBUFPerceptionListener___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar6[3] = 0;
      local_res8 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar6 + 3),(FObjectPtr)&local_res8);
      puVar6[4] = OnNewListenerImpl;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_padding_,
               (FWriteAccessScope *)&local_48);
    local_30 = &this->_padding_;
    puVar6 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_30);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &
                ___7__TCommonDelegateInstanceState___A6AXAEBUFPerceptionListener___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar7 = FDelegateHandle::GenerateNewID();
      puVar6[2] = uVar7;
      *puVar6 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUAISense_Sight____A6AXAEBUFPerceptionListener___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar6[3] = 0;
      local_res8 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar6 + 3),(FObjectPtr)&local_res8);
      puVar6[4] = OnListenerUpdateImpl;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_padding_,
               (FWriteAccessScope *)&local_48);
    local_30 = &this->_padding_;
    puVar6 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_30);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &
                ___7__TCommonDelegateInstanceState___A6AXAEBUFPerceptionListener___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar7 = FDelegateHandle::GenerateNewID();
      puVar6[2] = uVar7;
      *puVar6 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUAISense_Sight____A6AXAEBUFPerceptionListener___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar6[3] = 0;
      local_res8 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar6 + 3),(FObjectPtr)&local_res8);
      puVar6[4] = OnListenerRemovedImpl;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnPendingCanBeSeenQueryProcessedDelegate,(FWriteAccessScope *)&local_48);
    local_30 = (longlong *)puVar2;
    puVar6 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)puVar2);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &
                ___7__TCommonDelegateInstanceState___A6AXAEBUFAISightQueryID___NMAEBU__TVector_N_Math_UE__AEBU__TOptional_H___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar7 = FDelegateHandle::GenerateNewID();
      puVar6[2] = uVar7;
      *puVar6 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUAISense_Sight____A6AXAEBUFAISightQueryID___NMAEBU__TVector_N_Math_UE__AEBU__TOptional_H___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar6[3] = 0;
      local_res8 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar6 + 3),(FObjectPtr)&local_res8);
      puVar6[4] = OnPendingCanBeSeenQueryProcessed;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnPendingTraceQueryProcessedDelegate,(FWriteAccessScope *)&local_48);
    local_30 = (longlong *)puVar3;
    puVar6 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)puVar3);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &
                ___7__TCommonDelegateInstanceState___A6AXAEBUFTraceHandle__AEAUFTraceDatum___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar7 = FDelegateHandle::GenerateNewID();
      puVar6[2] = uVar7;
      *puVar6 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUAISense_Sight____A6AXAEBUFTraceHandle__AEAUFTraceDatum___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar6[3] = 0;
      local_res8 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar6 + 3),(FObjectPtr)&local_res8);
      puVar6[4] = OnPendingTraceQueryProcessed;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
  }
  puVar1 = (uint *)((longlong)&this->_padding_ + 4);
  *puVar1 = *puVar1 | 6;
  *(undefined1 *)&this->_padding_ = 1;
  pUVar5 = Z_Construct_UClass_UAISystem_NoRegister();
  if ((pUVar5->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar5);
  }
  this->DefaultSightCollisionChannel =
       (uint)(byte)(pUVar5->ClassDefaultObject).field0_0x0.DebugPtr[6].field_0x10;
  return this;
}

// ~UAISense_Sight @ 146f96cd0

void __thiscall UAISense_Sight::~UAISense_Sight(UAISense_Sight *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  
  this->_padding_ = (longlong)&___7UAISense_Sight__6B_;
  if (this->QueriesListAccessDetector != (FRWFallbackSafeAccessDetectorDefinition)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("AtomicValue.load(std::memory_order_relaxed) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                       ,0x3a,L"Detector cannot be destroyed while other threads access it");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &this->OnPendingTraceQueryProcessedDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &this->OnPendingCanBeSeenQueryProcessedDelegate);
  pFVar1 = (this->SightQueriesPending).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SightQueriesInRange).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SightQueriesOutOfRange).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->DigestedProperties).field_0x48 = 0;
  pvVar2 = *(void **)&(this->DigestedProperties).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FAIGenericID<FPerceptionListenerCounter>,UAISense_Sight::FDigestedSightProperties>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FAIGenericID<FPerceptionListenerCounter>,UAISense_Sight::FDigestedSightProperties>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FAIGenericID<FPerceptionListenerCounter>,UAISense_Sight::FDigestedSightProperties>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->DigestedProperties);
  *(undefined4 *)&(this->ObservedTargets).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ObservedTargets).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FAISightTarget>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FAISightTarget>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FAISightTarget>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ObservedTargets);
  this->_padding_ = (longlong)&___7UAISense__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_padding_);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_padding_);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_padding_);
  UObject::~UObject((UObject *)this);
  return;
}

// CalcQueryImportance @ 146f9bf10

float __thiscall
UAISense_Sight::CalcQueryImportance
          (UAISense_Sight *this,FPerceptionListener *param_1,TVector<double> *param_2,float param_3)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar3 = (param_2->field0_0x0)._s_0.X - (param_1->CachedLocation).field0_0x0._s_0.X;
  dVar4 = (param_2->field0_0x0)._s_0.Y - (param_1->CachedLocation).field0_0x0._s_0.Y;
  dVar2 = (param_2->field0_0x0)._s_0.Z - (param_1->CachedLocation).field0_0x0._s_0.Z;
  fVar1 = this->MaxQueryImportance;
  dVar2 = dVar4 * dVar4 + dVar3 * dVar3 + dVar2 * dVar2;
  if (dVar2 <= (double)this->HighImportanceDistanceSquare) {
    return fVar1;
  }
  dVar3 = (double)fVar1;
  dVar2 = (double)((this->SightLimitQueryImportance - fVar1) / param_3) * dVar2 + dVar3;
  if (dVar3 <= dVar2) {
    dVar2 = dVar3;
  }
  if (dVar2 <= 0.0) {
    dVar2 = 0.0;
  }
  return (float)dVar2;
}

// ComputeVisibility @ 146f9dd20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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

EVisibilityResult __thiscall
UAISense_Sight::ComputeVisibility
          (UAISense_Sight *this,UWorld *param_1,FAISightQuery *param_2,FPerceptionListener *param_3,
          AActor *param_4,FAISightTarget *param_5,AActor *param_6,FDigestedSightProperties *param_7,
          float *param_8,TVector<double> *param_9,int *param_10,int *param_11)

{
  int *piVar1;
  ECollisionChannel EVar2;
  USceneComponent *pUVar3;
  longlong *plVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  undefined8 uVar10;
  LARGE_INTEGER LVar11;
  TStatId TVar12;
  char cVar13;
  bool bVar14;
  uint uVar15;
  EVisibilityResult EVar16;
  FName *pFVar17;
  FThreadSafeStaticStat<FStat_STAT_AI_Sense_Sight_ComputeVisibility> FVar18;
  FThreadSafeStaticStat<_public:___cdecl__protected:_enum_UAISense_Sight::EVisibilityResult___cdecl_UAISense_Sight::ComputeVisibility(UWorld_*,FAISightQuery_&,FPerceptionListener_&,AActor_const_*,FAISightTarget_&,AActor_*,UAISense_Sight::FDigestedSightProperties_const_&,float_&,UE::Math::TVector<double>_&,int_&,int_&)const_::_16_::<lambda_2>::operator()(void)const_::_2_::FStat_AILineOfSight>
  FVar19;
  AActor *pAVar20;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FHitResult *pFVar21;
  FNameEntryId FVar22;
  FName FVar23;
  undefined1 auStackY_378 [32];
  byte local_318 [8];
  FPerceptionListener *local_310;
  uint local_308;
  uint uStack_304;
  FColor_u_0 local_300 [2];
  UAISense_Sight *local_2f8;
  TVector<double> *local_2f0;
  FName local_2e8;
  FTraceHandle_u_0 local_2e0 [2];
  LARGE_INTEGER local_2d0;
  TStatId local_2c8;
  FStatMessage local_2c0;
  FName local_2b0;
  AActor *local_2a8;
  FTraceHandle_u_0 local_2a0;
  undefined1 local_298;
  FName local_290;
  TVector<double>_u_0 local_280;
  undefined8 local_258;
  undefined4 uStack_250;
  undefined1 uStack_24c;
  undefined2 uStack_24b;
  undefined1 uStack_249;
  uint local_248;
  uint local_244;
  undefined4 local_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  double local_230;
  AActor *local_228;
  byte *local_220;
  FName local_218;
  FName local_210;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  double local_1f8;
  FHitResult local_1e8;
  FCollisionQueryParams local_e8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_378;
  EVar16 = Visible;
  local_2d0 = (LARGE_INTEGER)param_7;
  local_2a8 = param_4;
  local_2c8.StatIdPtr = (TStatIdData *)param_5;
  local_2e8 = (FName)param_8;
  local_2f0 = param_9;
  local_2e0[0] = (FTraceHandle_u_0)param_10;
  local_2a0 = (FTraceHandle_u_0)param_11;
  FVar18 = StatPtr_STAT_AI_Sense_Sight_ComputeVisibility;
  local_310 = param_3;
  local_2f8 = this;
  local_2c0.StatData.Pad = (uchar  [8])param_1;
  if (StatPtr_STAT_AI_Sense_Sight_ComputeVisibility ==
      (FThreadSafeStaticStat<FStat_STAT_AI_Sense_Sight_ComputeVisibility>)0x0) {
    pFVar17 = ::FName::FName(&local_218,"STAT_AI_Sense_Sight_ComputeVisibility");
    FVar18 = (FThreadSafeStaticStat<FStat_STAT_AI_Sense_Sight_ComputeVisibility>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_Sense_Sight_ComputeVisibility,
                        *pFVar17,L"Perception Sense: Sight, Compute visibility","STATGROUP_AI",
                        "STATCAT_Advanced",L"AI",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar23 = *(FName *)FVar18;
  bVar7 = false;
  bVar9 = false;
  local_290.ComparisonIndex.Value = 0;
  local_290.Number = 0;
  FVar22 = FVar23.ComparisonIndex.Value;
  uVar15 = FVar23.Number;
  if ((FVar22.Value == 0) && (uVar15 == 0)) {
LAB_146f9decb:
    bVar8 = false;
    FVar23 = local_290;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_300[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_300[0]._s_0,(char *)*(FName *)((longlong)FVar18 + 0x10));
      bVar7 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_2b0.ComparisonIndex.Value = FVar22.Value;
        local_2b0.Number = uVar15;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_2b0,(wchar_t *)*(FName *)((longlong)FVar18 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\Perception\\AISense_Sight.cpp"
                   ,0x205);
        bVar7 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_146f9decb;
    local_308 = FVar22.Value;
    uStack_304 = uVar15;
    FThreadStats::AddMessage(FVar23,CycleScopeStart);
    bVar8 = true;
  }
  LVar11 = local_2d0;
  cVar13 = (**(code **)(local_2f8->_padding_ + 0x300))
                     (local_2f8,local_2d0.QuadPart,param_2,local_310);
  uVar10 = FAISystem::InvalidLocation.field0_0x0._s_0.Y;
  if (cVar13 != '\0') {
    (local_2f0->field0_0x0)._s_0.X = FAISystem::InvalidLocation.field0_0x0._s_0.X;
    (local_2f0->field0_0x0)._s_0.Y = (double)uVar10;
    (local_2f0->field0_0x0)._s_0.Z = FAISystem::InvalidLocation.field0_0x0._s_0.Z;
    goto LAB_146f9e33b;
  }
  pUVar3 = (param_6->RootComponent).field0_0x0.DebugPtr;
  local_280._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
  local_280._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
  local_280._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
  local_280._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
  local_280._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  if (pUVar3 != (USceneComponent *)0x0) {
    local_1f8 = (pUVar3->ComponentToWorld).Translation.ZW.m128d_f64[0];
    local_208 = *(undefined4 *)(pUVar3->ComponentToWorld).Translation.XY.m128d_f64;
    uStack_204 = *(undefined4 *)((longlong)(pUVar3->ComponentToWorld).Translation.XY.m128d_f64 + 4);
    uStack_200 = *(undefined4 *)((pUVar3->ComponentToWorld).Translation.XY.m128d_f64 + 1);
    uStack_1fc = *(undefined4 *)
                  ((longlong)(pUVar3->ComponentToWorld).Translation.XY.m128d_f64 + 0xc);
    local_280._0_4_ = local_208;
    local_280._4_4_ = uStack_204;
    local_280._8_4_ = uStack_200;
    local_280._12_4_ = uStack_1fc;
    local_280._s_0.Z = local_1f8;
  }
  bVar14 = FAISystem::CheckIsTargetInSightCone
                     (&local_310->CachedLocation,&local_310->CachedDirection,*(float *)LVar11,
                      *(float *)(LVar11.QuadPart + 0x10),*(float *)(LVar11.QuadPart + 0x14),
                      ((float *)(LVar11.QuadPart + 4))
                      [(ulonglong)(*(byte *)&param_2->field6_0x30 & 1) * 2],
                      (TVector<double> *)&local_280._s_0);
  TVar12.StatIdPtr = local_2c8.StatIdPtr;
  if (!bVar14) {
    EVar16 = NotVisible;
    goto LAB_146f9e33b;
  }
  if (((((local_2c8.StatIdPtr)->StatDescriptionAnsi).Ptr != (char *)0x0) &&
      (bVar14 = FWeakObjectPtr::IsValid
                          ((FWeakObjectPtr *)&(local_2c8.StatIdPtr)->StatDescriptionWide), bVar14))
     && (plVar4 = (longlong *)((TVar12.StatIdPtr)->StatDescriptionAnsi).Ptr,
        plVar4 != (longlong *)0x0)) {
    local_318[0] = *(byte *)&param_2->field6_0x30 & 1;
    FAIGenericID<FPerceptionListenerCounter>::InvalidID();
    local_248 = (param_2->ObserverId).Index;
    local_240 = *(undefined4 *)&(local_310->CachedLocation).field0_0x0;
    uStack_23c = *(undefined4 *)((longlong)&(local_310->CachedLocation).field0_0x0 + 4);
    uStack_238 = *(undefined4 *)((longlong)&(local_310->CachedLocation).field0_0x0 + 8);
    uStack_234 = *(undefined4 *)((longlong)&(local_310->CachedLocation).field0_0x0 + 0xc);
    local_230 = (local_310->CachedLocation).field0_0x0._s_0.Z;
    local_244 = param_2->TargetId;
    local_228 = local_2a8;
    local_220 = local_318;
    EVar16 = (**(code **)(*plVar4 + 0x18))(plVar4,&local_248,local_2f0,local_2e0[0]._Handle);
    if (EVar16 == Pending) {
      local_2a0._Handle = 0;
      local_298 = 0;
      FAISightQuery::SetTraceInfo(param_2,(FTraceHandle *)&local_2a0._Data);
    }
    goto LAB_146f9e33b;
  }
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar5 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    StatPtr_AILineOfSight =
         (FThreadSafeStaticStat<_public:___cdecl__protected:_enum_UAISense_Sight::EVisibilityResult___cdecl_UAISense_Sight::ComputeVisibility(UWorld_*,FAISightQuery_&,FPerceptionListener_&,AActor_const_*,FAISightTarget_&,AActor_*,UAISense_Sight::FDigestedSightProperties_const_&,float_&,UE::Math::TVector<double>_&,int_&,int_&)const_::_16_::<lambda_2>::operator()(void)const_::_2_::FStat_AILineOfSight>
          )0x0;
    pFVar17 = ::FName::FName(&local_2e8,"AILineOfSight");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_AILineOfSight,*pFVar17,L"AILineOfSight",
               "STATGROUP_CollisionTags","STATCAT_Advanced",L"CollisionTags",true,true,ST_int64,true
               ,false,MCR_Invalid);
    _Init_thread_footer(&::_TSS0);
  }
  FVar19 = StatPtr_AILineOfSight;
  if (StatPtr_AILineOfSight ==
      (FThreadSafeStaticStat<_public:___cdecl__protected:_enum_UAISense_Sight::EVisibilityResult___cdecl_UAISense_Sight::ComputeVisibility(UWorld_*,FAISightQuery_&,FPerceptionListener_&,AActor_const_*,FAISightTarget_&,AActor_*,UAISense_Sight::FDigestedSightProperties_const_&,float_&,UE::Math::TVector<double>_&,int_&,int_&)const_::_16_::<lambda_2>::operator()(void)const_::_2_::FStat_AILineOfSight>
       )0x0) {
    pFVar17 = ::FName::FName(&local_210,"AILineOfSight");
    FVar19 = (FThreadSafeStaticStat<_public:___cdecl__protected:_enum_UAISense_Sight::EVisibilityResult___cdecl_UAISense_Sight::ComputeVisibility(UWorld_*,FAISightQuery_&,FPerceptionListener_&,AActor_const_*,FAISightTarget_&,AActor_*,UAISense_Sight::FDigestedSightProperties_const_&,float_&,UE::Math::TVector<double>_&,int_&,int_&)const_::_16_::<lambda_2>::operator()(void)const_::_2_::FStat_AILineOfSight>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_AILineOfSight,*pFVar17,
                          L"AILineOfSight","STATGROUP_CollisionTags","STATCAT_Advanced",
                          L"CollisionTags",true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_2c8.StatIdPtr = (TStatIdData *)FVar19;
  if ((*(int *)(lVar5 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&::StaticName,"AILineOfSight");
    _Init_thread_footer(&::_TSS0);
  }
  FCollisionQueryParams::FCollisionQueryParams(&local_e8,::StaticName,&local_2c8,true,local_2a8);
  EVar2 = local_2f8->DefaultSightCollisionChannel;
  if (local_2f8->bUseAsynchronousTraceForDefaultSightQueries == false) {
    memset(&local_1e8,0,0x100);
    uStack_24b = 0;
    local_1e8.HitObjectHandle.ReferenceObject.WeakPtr.ObjectIndex = 0;
    local_1e8.HitObjectHandle.ReferenceObject.WeakPtr.ObjectSerialNumber = 0;
    local_1e8.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectIndex = 0;
    local_1e8.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectSerialNumber = 0;
    uStack_249 = 0;
    local_258 = 0;
    uStack_250 = 0xffffffff;
    uStack_24c = 0;
    local_1e8.HitObjectHandle.InstanceIndex = -1;
    local_1e8.HitObjectHandle.ResolutionStatus = Invalid;
    local_1e8.HitObjectHandle._29_3_ = 0;
    local_1e8.Time = 1.0;
    local_1e8.MyItem = -1;
    local_1e8.HitObjectHandle.ManagerInterface.InterfaceInstance =
         (IActorInstanceManagerInterface *)0x0;
    bVar14 = UWorld::LineTraceSingleByChannel
                       ((UWorld *)local_2c0.StatData.Pad,&local_1e8,&local_310->CachedLocation,
                        (TVector<double> *)&local_280._s_0,EVar2,&local_e8,
                        &FCollisionResponseParams::DefaultResponseParam);
    *(int *)local_2e0[0] = *(int *)local_2e0[0] + 1;
    pFVar21 = &local_1e8;
    if (!bVar14) {
      pFVar21 = (FHitResult *)0x0;
    }
    if (pFVar21 == (FHitResult *)0x0) {
LAB_146f9e300:
      (local_2f0->field0_0x0)._s_0.X = (double)CONCAT44(local_280._4_4_,local_280._0_4_);
      (local_2f0->field0_0x0)._s_0.Y = (double)CONCAT44(local_280._12_4_,local_280._8_4_);
      (local_2f0->field0_0x0)._s_0.Z = local_280._s_0.Z;
      EVar16 = Visible;
    }
    else {
      pAVar20 = FActorInstanceHandle::FetchActor(&pFVar21->HitObjectHandle);
      if (pAVar20 != (AActor *)0x0) {
        do {
          if (pAVar20 == param_6) {
            bVar14 = true;
            goto LAB_146f9e2f5;
          }
          pAVar20 = (pAVar20->Owner).field0_0x0.DebugPtr;
        } while (pAVar20 != (AActor *)0x0);
        bVar14 = false;
LAB_146f9e2f5:
        if (bVar14) goto LAB_146f9e300;
      }
      EVar16 = NotVisible;
    }
  }
  else {
    UWorld::AsyncLineTraceByChannel
              ((UWorld *)local_2c0.StatData.Pad,(FTraceHandle *)&local_2e0[0]._Data,Single,
               &local_310->CachedLocation,(TVector<double> *)&local_280._s_0,EVar2,&local_e8,
               &FCollisionResponseParams::DefaultResponseParam,
               &local_2f8->OnPendingTraceQueryProcessedDelegate,0);
    if ((int *)local_2e0[0]._Handle == (int *)0x0) {
      EVar16 = NotVisible;
    }
    else {
      *(int *)local_2a0 = *(int *)local_2a0 + 1;
      if (((local_2e0[0]._Handle & 0x8000000000000000) != 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(TraceHandle._Data.Index & (static_cast<uint32>(1) << 31)) == 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Classes\\Perception\\AISense_Sight.h"
                              ,0xa7,L""), bVar14)) {
        pcVar6 = (code *)swi(3);
        EVar16 = (*pcVar6)();
        return EVar16;
      }
      *(uint *)&param_2->field6_0x30 = *(uint *)&param_2->field6_0x30 & 1;
      *(uint *)&param_2->field6_0x30 = *(uint *)&param_2->field6_0x30 | local_2e0[0]._Data.Index * 2
      ;
      (param_2->field6_0x30).TraceInfo.FrameNumber = local_2e0[0]._Data.FrameNumber;
      EVar16 = Pending;
    }
  }
  if (local_e8.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
      (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_e8.IgnoreSourceObjects.AllocatorInstance.SecondaryData);
  }
  if (local_e8.IgnoreComponents.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0
     ) {
    FMemory::Free((void *)local_e8.IgnoreComponents.AllocatorInstance.SecondaryData);
  }
LAB_146f9e33b:
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar8) && (FVar23 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_2c0.NameAndInfo.Index = FVar23.ComparisonIndex.Value;
      local_2c0.NameAndInfo.Number = FVar23.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_2d0);
      local_2c0.StatData.Pad = (uchar  [8])(local_2d0.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(this_00,&local_2c0);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return EVar16;
}

// DescribeSelfToGameplayDebugger @ 146fa3b90

void __thiscall
UAISense_Sight::DescribeSelfToGameplayDebugger
          (UAISense_Sight *this,UAIPerceptionSystem *param_1,FGameplayDebuggerCategory *param_2)

{
  FName local_34;
  FString local_28;
  FString local_18;
  
  local_34 = (FName)this->_padding_;
  ::FName::ToString(&local_34,&local_18);
  ::FString::PrintfImpl
            (&local_28,L"%s: %d Targets, %d Queries (InRange:%d, OutOfRange:%d, Pending:%d)");
  FGameplayDebuggerCategory::AddTextLine(param_2,&local_28);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// GenerateQueriesForListener @ 146fab4b0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UAISense_Sight::GenerateQueriesForListener
          (UAISense_Sight *this,FPerceptionListener *param_1,FDigestedSightProperties *param_2,
          TFunction<void___cdecl(FAISightQuery_&)> *param_3)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  USceneComponent *pUVar4;
  bool bVar5;
  bool bVar6;
  TMap<unsigned_int,FAISightTarget,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FAISightTarget,0>_>
  *pTVar7;
  bool bVar8;
  IGenericTeamAgentInterface *pIVar9;
  UAIPerceptionComponent *this_00;
  AActor *pAVar10;
  AActor *pAVar11;
  longlong lVar12;
  uint *puVar13;
  TVector<double>_u_0 local_a8;
  undefined4 uStack_90;
  int iStack_8c;
  int local_88;
  int iStack_84;
  TMap<unsigned_int,FAISightTarget,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FAISightTarget,0>_>
  *local_78;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  
  bVar6 = false;
  bVar5 = false;
  pIVar9 = FPerceptionListener::GetTeamAgent(param_1);
  bVar8 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)param_1);
  if (bVar8) {
    this_00 = (UAIPerceptionComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)param_1);
    pAVar10 = UAIPerceptionComponent::GetBodyActor(this_00);
  }
  else {
    pAVar10 = (AActor *)0x0;
  }
  local_a8._s_0.X = (double)&this->ObservedTargets;
  local_a8._8_4_ = 0;
  iVar2 = *(int *)&(this->ObservedTargets).field_0x28;
  local_a8._s_0.Z = (double)&(this->ObservedTargets).field_0x10;
  local_88 = 0;
  local_a8._12_4_ = 1;
  iStack_8c = 0;
  if (iVar2 != 0) {
    puVar13 = *(uint **)&(this->ObservedTargets).field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)local_a8._s_0.Z;
    }
    uVar3 = *puVar13;
    while (uVar3 == 0) {
      lVar12 = (longlong)(int)local_a8._8_4_;
      local_88 = local_88 + 0x20;
      local_a8._8_4_ = local_a8._8_4_ + 1;
      iStack_8c = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)local_a8._8_4_)
      goto LAB_146fab59b;
      uVar3 = puVar13[lVar12 + 1];
    }
    local_a8._12_4_ = -uVar3 & uVar3;
    uVar1 = (ulonglong)(uint)local_a8._12_4_ * 2 + 1;
    lVar12 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iStack_8c = local_88 + -1 + (int)lVar12;
    if (iVar2 < iStack_8c) {
      iStack_8c = iVar2;
    }
  }
LAB_146fab59b:
  uStack_90 = 0xffffffff;
  TStack_70._padding_ = CONCAT44(local_a8._12_4_,local_a8._8_4_);
  TStack_70.UnvisitedBitMask = 0xffffffff;
  TStack_70._28_4_ = iStack_8c;
  TStack_70.BaseBitIndex = local_88;
  iStack_84 = iStack_8c;
  local_78 = (TMap<unsigned_int,FAISightTarget,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FAISightTarget,0>_>
              *)local_a8._0_8_;
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_a8._s_0.Z;
  TStack_70.CurrentBitIndex = iStack_8c;
  if (iStack_8c < iVar2) {
    do {
      pTVar7 = local_78;
      lVar12 = (longlong)TStack_70.CurrentBitIndex;
      pAVar11 = (AActor *)
                FWeakObjectPtr::Get((FWeakObjectPtr *)(*(longlong *)local_78 + 8 + lVar12 * 0x38));
      if ((pAVar11 != (AActor *)0x0) && (pAVar11 != pAVar10)) {
        pUVar4 = (pAVar11->RootComponent).field0_0x0.DebugPtr;
        local_a8._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
        local_a8._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
        local_a8._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
        local_a8._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
        local_a8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        if (pUVar4 != (USceneComponent *)0x0) {
          local_a8._0_4_ = *(undefined4 *)(pUVar4->ComponentToWorld).Translation.XY.m128d_f64;
          local_a8._4_4_ =
               *(undefined4 *)((longlong)(pUVar4->ComponentToWorld).Translation.XY.m128d_f64 + 4);
          local_a8._8_4_ = *(int *)((pUVar4->ComponentToWorld).Translation.XY.m128d_f64 + 1);
          local_a8._12_4_ =
               *(uint *)((longlong)(pUVar4->ComponentToWorld).Translation.XY.m128d_f64 + 0xc);
          local_a8._s_0.Z =
               (double)(undefined1 *)(pUVar4->ComponentToWorld).Translation.ZW.m128d_f64[0];
        }
        bVar8 = RegisterNewQuery(this,param_1,pIVar9,pAVar11,
                                 (uint *)(*(longlong *)pTVar7 + lVar12 * 0x38),
                                 (TVector<double> *)&local_a8._s_0,param_2,param_3);
        bVar5 = bVar6;
        if (bVar8) {
          bVar6 = true;
          bVar5 = true;
        }
      }
      TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
    } while (TStack_70.CurrentBitIndex < (TStack_70.Array)->NumBits);
    if (bVar5) {
      *(undefined4 *)&this->_padding_ = 0;
    }
  }
  return;
}

// GetPrivateStaticClass @ 146fb3e30

UClass * __cdecl UAISense_Sight::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAISense_Sight.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"AISense_Sight",
               &Z_Registration_Info_UClass_UAISense_Sight.InnerSingleton,
               StaticRegisterNativesUAISense_Sight,0x1d8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Game",InternalConstructor<UAISense_Sight>,
               InternalVTableHelperCtorCaller<UAISense_Sight>,local_res8,UAISense::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAISense_Sight.InnerSingleton;
}

// OnListenerConfigUpdated @ 146fbd2a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UAISense_Sight::OnListenerConfigUpdated(UAISense_Sight *this,FPerceptionListener *param_1)

{
  uchar uVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  UAIPerceptionComponent *this_00;
  UAISenseConfig_Sight *pUVar5;
  FString *pFVar6;
  UClass *pUVar7;
  wchar_t *pwVar8;
  undefined8 *puVar9;
  wchar_t *pwVar10;
  int iVar11;
  undefined1 *puVar12;
  FString local_38;
  undefined1 local_28 [32];
  
  uVar2 = (param_1->ListenerID).Index;
  if (*(int *)&(this->DigestedProperties).field_0x8 !=
      *(int *)&(this->DigestedProperties).field_0x34) {
    puVar12 = *(undefined1 **)&(this->DigestedProperties).field_0x40;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = &(this->DigestedProperties).field_0x38;
    }
    iVar11 = *(int *)(puVar12 +
                     (ulonglong)(*(int *)&(this->DigestedProperties).field_0x48 - 1U & uVar2) * 4);
    if (iVar11 != -1) {
      lVar3 = *(longlong *)&this->DigestedProperties;
      do {
        if (*(uint *)(lVar3 + (longlong)iVar11 * 0x28) == uVar2) {
          if ((iVar11 != -1) && (lVar3 = lVar3 + (longlong)iVar11 * 0x28, lVar3 != 0)) {
            puVar9 = (undefined8 *)(lVar3 + 4);
            goto LAB_146fbd31a;
          }
          break;
        }
        iVar11 = *(int *)(lVar3 + 0x20 + (longlong)iVar11 * 0x28);
      } while (iVar11 != -1);
    }
  }
  puVar9 = (undefined8 *)0x0;
LAB_146fbd31a:
  if (puVar9 != (undefined8 *)0x0) {
    this_00 = (UAIPerceptionComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)param_1);
    local_38.Data.AllocatorInstance.Data._0_1_ = *(uchar *)((longlong)&this->_padding_ + 4);
    local_38.Data._4_8_ = this->_padding_;
    pUVar5 = (UAISenseConfig_Sight *)
             UAIPerceptionComponent::GetSenseConfig
                       (this_00,(FAINamedID<FAISenseCounter> *)&local_38);
    if (pUVar5 == (UAISenseConfig_Sight *)0x0) {
      pFVar6 = GetTypeName<UAISenseConfig_Sight_const_>(&local_38);
      if ((pFVar6->Data).ArrayNum == 0) {
        pwVar8 = L"";
      }
      else {
        pwVar8 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar8);
    }
    pUVar7 = Z_Construct_UClass_UAISenseConfig_Sight_NoRegister();
    iVar11 = (int)pUVar7->_padding_;
    if ((*(int *)(pUVar5->_padding_ + 0x38) < iVar11) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar11 * 8)
        != &pUVar7->_padding_)) {
      pFVar6 = GetTypeName<UAISenseConfig_Sight_const_>(&local_38);
      pwVar8 = L"";
      if ((pFVar6->Data).ArrayNum == 0) {
        pwVar10 = L"";
      }
      else {
        pwVar10 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
      }
      pFVar6 = GetFullNameForCastLogError<UAISenseConfig>
                         ((FString *)local_28,(UAISenseConfig *)pUVar5);
      if ((pFVar6->Data).ArrayNum != 0) {
        pwVar8 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar8,pwVar10);
    }
    FDigestedSightProperties::FDigestedSightProperties((FDigestedSightProperties *)local_28,pUVar5);
    uVar1 = *(uchar *)(puVar9 + 3);
    *puVar9 = local_28._0_8_;
    puVar9[1] = local_28._8_8_;
    puVar9[2] = local_28._16_8_;
    *(undefined4 *)(puVar9 + 3) = local_28._24_4_;
    if ((uchar)local_28._24_4_ == uVar1) {
      return;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_padding_,
             (FReadAccessScope *)local_28);
  if (((int)this->_padding_ != 0) &&
     (plVar4 = (longlong *)this->_padding_, plVar4 != (longlong *)0x0)) {
    (**(code **)(*plVar4 + 0x68))(plVar4,param_1);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)local_28);
  return;
}

// OnListenerForgetsActor @ 146fbd5e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UAISense_Sight::OnListenerForgetsActor
          (UAISense_Sight *this,FPerceptionListener *param_1,AActor *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  iVar1 = (this->SightQueriesInRange).ArrayNum;
  pFVar5 = (this->SightQueriesInRange).AllocatorInstance.Data;
  uVar2 = (param_1->ListenerID).Index;
  iVar3 = *(int *)((longlong)&param_2->_padding_ + 4);
  pFVar6 = pFVar5 + (longlong)iVar1 * 0x38;
  while( true ) {
    if ((this->SightQueriesInRange).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FAISightQuery,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar5 == pFVar6) {
      iVar1 = (this->SightQueriesOutOfRange).ArrayNum;
      pFVar5 = (this->SightQueriesOutOfRange).AllocatorInstance.Data;
      pFVar6 = pFVar5 + (longlong)iVar1 * 0x38;
      goto LAB_146fbd653;
    }
    if ((*(uint *)pFVar5 == uVar2) && (*(int *)(pFVar5 + 4) == iVar3)) break;
    pFVar5 = pFVar5 + 0x38;
  }
LAB_146fbd6b7:
  uVar4 = FAISystem::InvalidLocation.field0_0x0._s_0.Y;
  *(double *)(pFVar5 + 0x10) = FAISystem::InvalidLocation.field0_0x0._s_0.X;
  *(undefined8 *)(pFVar5 + 0x18) = uVar4;
  uVar4 = FAISystem::InvalidLocation.field0_0x0._s_0.Z;
  *(ulonglong *)(pFVar5 + 0x30) = *(ulonglong *)(pFVar5 + 0x30) & 0xfffffffffffffffe;
  *(undefined8 *)(pFVar5 + 0x20) = uVar4;
  return;
LAB_146fbd653:
  if ((this->SightQueriesOutOfRange).ArrayNum != iVar1) {
    `TCheckedPointerIterator<FAISightQuery,int,0>::operator!='::__l2::<lambda_1>::operator()
              (local_res8);
  }
  if (pFVar5 == pFVar6) {
    iVar1 = (this->SightQueriesPending).ArrayNum;
    pFVar5 = (this->SightQueriesPending).AllocatorInstance.Data;
    pFVar6 = pFVar5 + (longlong)iVar1 * 0x38;
    while( true ) {
      if ((this->SightQueriesPending).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FAISightQuery,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar5 == pFVar6) {
        return;
      }
      if ((*(uint *)pFVar5 == uVar2) && (*(int *)(pFVar5 + 4) == iVar3)) break;
      pFVar5 = pFVar5 + 0x38;
    }
    goto LAB_146fbd6b7;
  }
  if ((*(uint *)pFVar5 == uVar2) && (*(int *)(pFVar5 + 4) == iVar3)) goto LAB_146fbd6b7;
  pFVar5 = pFVar5 + 0x38;
  goto LAB_146fbd653;
}

// OnListenerForgetsAll @ 146fbd840

void __thiscall
UAISense_Sight::OnListenerForgetsAll(UAISense_Sight *this,FPerceptionListener *param_1)

{
  FRWFallbackSafeAccessDetectorDefinition *pFVar1;
  FRWFallbackSafeAccessDetectorDefinition FVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [16];
  
  LOCK();
  pFVar1 = &this->QueriesListAccessDetector;
  FVar2 = *pFVar1;
  *pFVar1 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar1 + 0x100000);
  UNLOCK();
  if ((FVar2 != (FRWFallbackSafeAccessDetectorDefinition)0x0) &&
     (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                       ,0x72,
                       L"Acquiring a write access while there are ongoing read or write access");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar3 = (this->SightQueriesInRange).ArrayNum;
  pFVar9 = (this->SightQueriesInRange).AllocatorInstance.Data;
  uVar4 = (param_1->ListenerID).Index;
  pFVar8 = pFVar9 + (longlong)iVar3 * 0x38;
  while( true ) {
    if ((this->SightQueriesInRange).ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FAISightQuery,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    uVar6 = FAISystem::InvalidLocation.field0_0x0._s_0.Y;
    if (pFVar9 == pFVar8) break;
    if (*(uint *)pFVar9 == uVar4) {
      *(double *)(pFVar9 + 0x10) = FAISystem::InvalidLocation.field0_0x0._s_0.X;
      *(undefined8 *)(pFVar9 + 0x18) = uVar6;
      uVar6 = FAISystem::InvalidLocation.field0_0x0._s_0.Z;
      *(ulonglong *)(pFVar9 + 0x30) = *(ulonglong *)(pFVar9 + 0x30) & 0xfffffffffffffffe;
      *(undefined8 *)(pFVar9 + 0x20) = uVar6;
    }
    pFVar9 = pFVar9 + 0x38;
  }
  iVar3 = (this->SightQueriesOutOfRange).ArrayNum;
  pFVar9 = (this->SightQueriesOutOfRange).AllocatorInstance.Data;
  pFVar8 = pFVar9 + (longlong)iVar3 * 0x38;
  while( true ) {
    if ((this->SightQueriesOutOfRange).ArrayNum != iVar3) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FAISightQuery,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    uVar6 = FAISystem::InvalidLocation.field0_0x0._s_0.Y;
    if (pFVar9 == pFVar8) break;
    if (*(uint *)pFVar9 == uVar4) {
      *(double *)(pFVar9 + 0x10) = FAISystem::InvalidLocation.field0_0x0._s_0.X;
      *(undefined8 *)(pFVar9 + 0x18) = uVar6;
      uVar6 = FAISystem::InvalidLocation.field0_0x0._s_0.Z;
      *(ulonglong *)(pFVar9 + 0x30) = *(ulonglong *)(pFVar9 + 0x30) & 0xfffffffffffffffe;
      *(undefined8 *)(pFVar9 + 0x20) = uVar6;
    }
    pFVar9 = pFVar9 + 0x38;
  }
  iVar3 = (this->SightQueriesPending).ArrayNum;
  pFVar9 = (this->SightQueriesPending).AllocatorInstance.Data;
  pFVar8 = pFVar9 + (longlong)iVar3 * 0x38;
  while( true ) {
    if ((this->SightQueriesPending).ArrayNum != iVar3) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<FAISightQuery,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    uVar6 = FAISystem::InvalidLocation.field0_0x0._s_0.Y;
    if (pFVar9 == pFVar8) break;
    if (*(uint *)pFVar9 == uVar4) {
      *(double *)(pFVar9 + 0x10) = FAISystem::InvalidLocation.field0_0x0._s_0.X;
      *(undefined8 *)(pFVar9 + 0x18) = uVar6;
      uVar6 = FAISystem::InvalidLocation.field0_0x0._s_0.Z;
      *(ulonglong *)(pFVar9 + 0x30) = *(ulonglong *)(pFVar9 + 0x30) & 0xfffffffffffffffe;
      *(undefined8 *)(pFVar9 + 0x20) = uVar6;
    }
    pFVar9 = pFVar9 + 0x38;
  }
  LOCK();
  pFVar1 = &this->QueriesListAccessDetector;
  FVar2 = *pFVar1;
  *pFVar1 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar1 + -0x100000);
  UNLOCK();
  if ((FVar2 != (FRWFallbackSafeAccessDetectorDefinition)0x100000) &&
     (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                       ,0x7d,
                       L"Another thread asked to have a read or write access during this write access"
                      );
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  return;
}

// OnListenerRemovedImpl @ 146fbdd60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UAISense_Sight::OnListenerRemovedImpl(UAISense_Sight *this,FPerceptionListener *param_1)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined1 auStack_68 [32];
  undefined1 local_48 [40];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_48._0_8_ = 0;
  local_20 = (longlong *)0x0;
  RemoveAllQueriesByListener
            (this,param_1,(TFunction<void___cdecl(FAISightQuery_const_&)> *)local_48);
  if (local_48._0_8_ != 0) {
    plVar5 = (longlong *)(local_48 + 0x10);
    if (local_20 != (longlong *)0x0) {
      plVar5 = local_20;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  uVar1 = (param_1->ListenerID).Index;
  if (*(int *)&(this->DigestedProperties).field_0x8 !=
      *(int *)&(this->DigestedProperties).field_0x34) {
    puVar7 = *(undefined1 **)&(this->DigestedProperties).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->DigestedProperties).field_0x38;
    }
    iVar6 = *(int *)(puVar7 + (ulonglong)
                              (*(int *)&(this->DigestedProperties).field_0x48 - 1U & uVar1) * 4);
    if (iVar6 != -1) {
      lVar2 = *(longlong *)&(this->DigestedProperties).field_0x0;
      do {
        if (*(uint *)(lVar2 + (longlong)iVar6 * 0x28) == uVar1) {
          if (iVar6 == -1) goto LAB_146fbde0c;
          goto LAB_146fbde32;
        }
        iVar6 = *(int *)(lVar2 + 0x20 + (longlong)iVar6 * 0x28);
      } while (iVar6 != -1);
    }
  }
  iVar6 = -1;
LAB_146fbde0c:
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("PairId.IsValidId()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x556,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_146fbde32:
  TSet<TTuple<FAIGenericID<FPerceptionListenerCounter>,UAISense_Sight::FDigestedSightProperties>,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,UAISense_Sight::FDigestedSightProperties,0>,FDefaultSetAllocator>
  ::RemoveByIndex((TSet<TTuple<FAIGenericID<FPerceptionListenerCounter>,UAISense_Sight::FDigestedSightProperties>,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,UAISense_Sight::FDigestedSightProperties,0>,FDefaultSetAllocator>
                   *)&this->DigestedProperties,iVar6);
  return;
}

// OnListenerUpdateImpl @ 146fbe210

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UAISense_Sight::OnListenerUpdateImpl(UAISense_Sight *this,FPerceptionListener *param_1)

{
  FWeakObjectPtr *this_00;
  FDigestedSightProperties *pFVar1;
  int *piVar2;
  FRWFallbackSafeAccessDetectorDefinition *pFVar3;
  TMap<FAIGenericID<FPerceptionListenerCounter>,UAISense_Sight::FDigestedSightProperties,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,UAISense_Sight::FDigestedSightProperties,0>_>
  *this_01;
  FRWFallbackSafeAccessDetectorDefinition FVar4;
  FName FVar5;
  code *pcVar6;
  undefined8 uVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  ulonglong uVar11;
  float fVar12;
  bool bVar13;
  FName *pFVar14;
  FThreadSafeStaticStat<FStat_STAT_AI_Sense_Sight_ListenerUpdate> FVar15;
  UAIPerceptionComponent *pUVar16;
  AActor *pAVar17;
  UAISenseConfig_Sight *pUVar18;
  UClass *pUVar19;
  FDigestedSightProperties *pFVar20;
  FThreadStats *this_02;
  FThreadStatsPool *this_03;
  longlong lVar21;
  undefined ***pppuVar22;
  longlong *plVar23;
  undefined1 *puVar24;
  uint uVar25;
  int iVar26;
  FNameEntryId FVar27;
  undefined1 auStackY_2e8 [32];
  FName local_288;
  uint local_278;
  uint local_274;
  uint local_270;
  uint uStack_26c;
  FColor_u_0 local_268 [2];
  FName local_260;
  uint *local_258;
  LARGE_INTEGER local_250;
  FAINamedID<FAISenseCounter> local_248;
  FStatMessage local_238;
  FName local_228;
  FDigestedSightProperties local_220;
  ForAnyElementType local_1f8;
  undefined8 local_1f0;
  TBitArray<FDefaultBitArrayAllocator> local_1e8;
  undefined4 local_1c8;
  undefined4 local_1c4;
  void *local_1b8;
  undefined4 local_1b0;
  TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_1a8;
  void *local_168;
  undefined4 local_160;
  code *local_158 [2];
  undefined **local_148;
  ForAnyElementType *local_140;
  undefined ***local_130;
  code *local_128 [2];
  undefined **local_118;
  ForAnyElementType *local_110;
  undefined ***local_100;
  code *local_f8 [2];
  undefined **local_e8;
  TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_e0;
  undefined ***local_d0;
  code *local_c8 [2];
  undefined **local_b8;
  TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_b0;
  undefined ***local_a0;
  undefined1 local_98 [40];
  longlong *local_70;
  undefined1 local_68 [40];
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
  FVar15 = StatPtr_STAT_AI_Sense_Sight_ListenerUpdate;
  if (StatPtr_STAT_AI_Sense_Sight_ListenerUpdate ==
      (FThreadSafeStaticStat<FStat_STAT_AI_Sense_Sight_ListenerUpdate>)0x0) {
    pFVar14 = ::FName::FName(&local_228,"STAT_AI_Sense_Sight_ListenerUpdate");
    FVar15 = (FThreadSafeStaticStat<FStat_STAT_AI_Sense_Sight_ListenerUpdate>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_Sense_Sight_ListenerUpdate,
                        *pFVar14,L"Perception Sense: Sight, Listener Update","STATGROUP_AI",
                        "STATCAT_Advanced",L"AI",true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_288.ComparisonIndex.Value = 0;
  local_288.Number = 0;
  bVar10 = false;
  bVar9 = false;
  bVar8 = false;
  FVar5 = *(FName *)FVar15;
  FVar27 = FVar5.ComparisonIndex.Value;
  uVar25 = FVar5.Number;
  if ((FVar27.Value != 0) || (uVar25 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_268[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_268[0]._s_0,(char *)*(FName *)((longlong)FVar15 + 0x10));
      bVar9 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_260.ComparisonIndex.Value = FVar27.Value;
        local_260.Number = uVar25;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_260,(wchar_t *)*(FName *)((longlong)FVar15 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\Perception\\AISense_Sight.cpp"
                   ,0x38f);
        bVar9 = true;
        bVar8 = true;
      }
    }
    bVar10 = false;
    if (FThreadStats::bPrimaryEnable != false) {
      local_270 = FVar27.Value;
      uStack_26c = uVar25;
      FThreadStats::AddMessage(FVar5,CycleScopeStart);
      bVar10 = true;
      local_288 = FVar5;
    }
  }
  bVar13 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)param_1);
  if (bVar13) {
    pUVar16 = (UAIPerceptionComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)param_1);
    pAVar17 = UAIPerceptionComponent::GetBodyActor(pUVar16);
    if (pAVar17 == (AActor *)0x0) goto LAB_146fbe382;
    local_274 = *(uint *)((longlong)&pAVar17->_padding_ + 4);
  }
  else {
LAB_146fbe382:
    local_274 = 0xffffffff;
  }
  if (*(int *)&(this->ObservedTargets).field_0x8 != *(int *)&(this->ObservedTargets).field_0x34) {
    puVar24 = *(undefined1 **)&(this->ObservedTargets).field_0x40;
    if (puVar24 == (undefined1 *)0x0) {
      puVar24 = &(this->ObservedTargets).field_0x38;
    }
    iVar26 = *(int *)(puVar24 +
                     (ulonglong)(*(int *)&(this->ObservedTargets).field_0x48 - 1U & local_274) * 4);
    if (iVar26 != -1) {
      lVar21 = *(longlong *)&this->ObservedTargets;
      do {
        if (*(uint *)((longlong)iVar26 * 0x38 + lVar21) == local_274) {
          if (((iVar26 != -1) && (lVar21 = (longlong)iVar26 * 0x38 + lVar21, lVar21 != 0)) &&
             (this_00 = (FWeakObjectPtr *)(lVar21 + 8), this_00 != (FWeakObjectPtr *)0x0)) {
            bVar13 = FWeakObjectPtr::IsValid(this_00);
            if (bVar13) {
              local_1f8.Data = (FScriptContainerElement *)0x0;
              local_148 = &UE::Core::Private::Function::
                           TFunction_OwnedObject<`UAISense_Sight::OnListenerUpdateImpl'::`8'::<lambda_1>,0,0>
                           ::_vftable_;
              local_140 = &local_1f8;
              local_158[0] = UE::Core::Private::Function::
                             TFunctionRefCaller<`UAISense_Sight::OnListenerUpdateImpl'::__l8::<lambda_1>,void,FAISightQuery_const_&>
                             ::Call;
              local_1f0 = 0;
              local_1e8.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
              local_1e8.NumBits = 0;
              local_1e8.MaxBits = 0x80;
              local_1c8 = 0xffffffff;
              local_1c4 = 0;
              local_1b8 = (void *)0x0;
              local_1b0 = 0;
              local_130 = (undefined ***)0x0;
              LOCK();
              pFVar3 = &this->QueriesListAccessDetector;
              FVar4 = *pFVar3;
              *pFVar3 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar3 + 0x100000);
              UNLOCK();
              if (((FVar4 != (FRWFallbackSafeAccessDetectorDefinition)0x0) &&
                  (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                                      ,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                                      ,0x72,
                                      L"Acquiring a write access while there are ongoing read or write access"
                                     ), bVar13)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              RemoveAllQueriesToTarget_Internal
                        (this,&local_274,(TFunction<void___cdecl(FAISightQuery_const_&)> *)local_158
                        );
              LOCK();
              pFVar3 = &this->QueriesListAccessDetector;
              FVar4 = *pFVar3;
              *pFVar3 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar3 + -0x100000);
              UNLOCK();
              if (((FVar4 != (FRWFallbackSafeAccessDetectorDefinition)0x100000) &&
                  (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                                      ,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                                      ,0x7d,
                                      L"Another thread asked to have a read or write access during this write access"
                                     ), bVar13)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              if (local_158[0] != (code *)0x0) {
                pppuVar22 = &local_148;
                if (local_130 != (undefined ***)0x0) {
                  pppuVar22 = local_130;
                }
                (*(code *)(*pppuVar22)[2])();
              }
              local_100 = (undefined ***)0x0;
              local_118 = &UE::Core::Private::Function::
                           TFunction_OwnedObject<`UAISense_Sight::OnListenerUpdateImpl'::`8'::<lambda_2>,0,0>
                           ::_vftable_;
              local_110 = &local_1f8;
              local_128[0] = UE::Core::Private::Function::
                             TFunctionRefCaller<`UAISense_Sight::OnListenerUpdateImpl'::__l8::<lambda_2>,void,FAISightQuery_&>
                             ::Call;
              pAVar17 = (AActor *)FWeakObjectPtr::Get(this_00);
              RegisterTarget(this,pAVar17,(TFunction<void___cdecl(FAISightQuery_&)> *)local_128);
              if (local_128[0] != (code *)0x0) {
                pppuVar22 = &local_118;
                if (local_100 != (undefined ***)0x0) {
                  pppuVar22 = local_100;
                }
                (*(code *)(*pppuVar22)[2])();
              }
              local_1b0 = 0;
              if (local_1b8 != (void *)0x0) {
                FMemory::Free(local_1b8);
              }
              uVar11 = local_1f0 >> 0x20;
              local_1f0 = local_1f0 & 0xffffffff00000000;
              if ((int)uVar11 != 0) {
                UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0xc,4,0,&local_1f8,0,(int *)((longlong)&local_1f0 + 4));
              }
              local_1c8 = 0xffffffff;
              local_1c4 = 0;
              local_1e8.NumBits = 0;
              if (0x80 < (uint)local_1e8.MaxBits) {
                local_1e8.MaxBits = 0x80;
                TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_1e8,0);
              }
              if (local_1e8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
                FMemory::Free((void *)local_1e8.AllocatorInstance.SecondaryData);
              }
              if (local_1f8.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1f8.Data);
              }
            }
            else {
              local_98._0_8_ = 0;
              local_70 = (longlong *)0x0;
              LOCK();
              pFVar3 = &this->QueriesListAccessDetector;
              FVar4 = *pFVar3;
              *pFVar3 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar3 + 0x100000);
              UNLOCK();
              if (((FVar4 != (FRWFallbackSafeAccessDetectorDefinition)0x0) &&
                  (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                                      ,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                                      ,0x72,
                                      L"Acquiring a write access while there are ongoing read or write access"
                                     ), bVar13)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              RemoveAllQueriesToTarget_Internal
                        (this,&local_274,(TFunction<void___cdecl(FAISightQuery_const_&)> *)local_98)
              ;
              LOCK();
              pFVar3 = &this->QueriesListAccessDetector;
              FVar4 = *pFVar3;
              *pFVar3 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar3 + -0x100000);
              UNLOCK();
              if (((FVar4 != (FRWFallbackSafeAccessDetectorDefinition)0x100000) &&
                  (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                                      ,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                                      ,0x7d,
                                      L"Another thread asked to have a read or write access during this write access"
                                     ), bVar13)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              if (local_98._0_8_ != 0) {
                plVar23 = (longlong *)(local_98 + 0x10);
                if (local_70 != (longlong *)0x0) {
                  plVar23 = local_70;
                }
                (**(code **)(*plVar23 + 0x10))();
              }
            }
          }
          break;
        }
        iVar26 = *(int *)((longlong)iVar26 * 0x38 + 0x30 + lVar21);
      } while (iVar26 != -1);
    }
  }
  local_278 = (param_1->ListenerID).Index;
  if (((uint)(param_1->Filter).AcceptedChannelsMask >>
       (*(byte *)((longlong)&this->_padding_ + 4) & 0x1f) & 1) == 0) {
    local_68._0_8_ = 0;
    local_40 = (longlong *)0x0;
    RemoveAllQueriesByListener
              (this,param_1,(TFunction<void___cdecl(FAISightQuery_const_&)> *)local_68);
    if (local_68._0_8_ != 0) {
      plVar23 = (longlong *)(local_68 + 0x10);
      if (local_40 != (longlong *)0x0) {
        plVar23 = local_40;
      }
      (**(code **)(*plVar23 + 0x10))();
    }
    if (*(int *)&(this->DigestedProperties).field_0x8 !=
        *(int *)&(this->DigestedProperties).field_0x34) {
      puVar24 = *(undefined1 **)&(this->DigestedProperties).field_0x40;
      if (puVar24 == (undefined1 *)0x0) {
        puVar24 = &(this->DigestedProperties).field_0x38;
      }
      iVar26 = *(int *)(puVar24 +
                       ((longlong)*(int *)&(this->DigestedProperties).field_0x48 - 1U &
                       (longlong)(int)local_278) * 4);
      if (iVar26 != -1) {
        lVar21 = *(longlong *)&(this->DigestedProperties).field_0x0;
        do {
          if (*(uint *)(lVar21 + (longlong)iVar26 * 0x28) == local_278) {
            TSet<TTuple<FAIGenericID<FPerceptionListenerCounter>,UAISense_Sight::FDigestedSightProperties>,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,UAISense_Sight::FDigestedSightProperties,0>,FDefaultSetAllocator>
            ::RemoveByIndex((TSet<TTuple<FAIGenericID<FPerceptionListenerCounter>,UAISense_Sight::FDigestedSightProperties>,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,UAISense_Sight::FDigestedSightProperties,0>,FDefaultSetAllocator>
                             *)&this->DigestedProperties,iVar26);
            break;
          }
          iVar26 = *(int *)(lVar21 + 0x20 + (longlong)iVar26 * 0x28);
        } while (iVar26 != -1);
      }
    }
    goto LAB_146fbea25;
  }
  local_1a8._0_8_ = 0;
  local_e8 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UAISense_Sight::OnListenerUpdateImpl'::`13'::<lambda_3>,0,0>::
              _vftable_;
  local_e0 = &local_1a8;
  local_1a8._8_8_ = 0;
  local_f8[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UAISense_Sight::OnListenerUpdateImpl'::__l13::<lambda_3>,void,FAISightQuery_const_&>
                ::Call;
  local_1a8._32_8_ = 0;
  local_1a8._40_4_ = 0;
  local_1a8._44_4_ = 0x80;
  local_1a8._48_4_ = 0xffffffff;
  local_1a8._52_4_ = 0;
  local_168 = (void *)0x0;
  local_160 = 0;
  local_d0 = (undefined ***)0x0;
  RemoveAllQueriesByListener
            (this,param_1,(TFunction<void___cdecl(FAISightQuery_const_&)> *)local_f8);
  if (local_f8[0] != (code *)0x0) {
    pppuVar22 = &local_e8;
    if (local_d0 != (undefined ***)0x0) {
      pppuVar22 = local_d0;
    }
    (*(code *)(*pppuVar22)[2])();
  }
  pUVar16 = (UAIPerceptionComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)param_1);
  local_248.Index = *(uchar *)((longlong)&this->_padding_ + 4);
  local_248.Name = (FName)this->_padding_;
  pUVar18 = (UAISenseConfig_Sight *)UAIPerceptionComponent::GetSenseConfig(pUVar16,&local_248);
  if (pUVar18 == (UAISenseConfig_Sight *)0x0) {
LAB_146fbe806:
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("SenseConfig",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\Perception\\AISense_Sight.cpp"
                        ,0x3c0,L"");
    pUVar18 = (UAISenseConfig_Sight *)0x0;
    if (bVar13) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else {
    pUVar19 = Z_Construct_UClass_UAISenseConfig_Sight_NoRegister();
    iVar26 = (int)pUVar19->_padding_;
    if ((*(int *)(pUVar18->_padding_ + 0x38) < iVar26) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar18->_padding_ + 0x30) + (longlong)iVar26 * 8) !=
        &pUVar19->_padding_)) goto LAB_146fbe806;
  }
  this_01 = &this->DigestedProperties;
  if (*(int *)&(this->DigestedProperties).field_0x8 !=
      *(int *)&(this->DigestedProperties).field_0x34) {
    puVar24 = *(undefined1 **)&(this->DigestedProperties).field_0x40;
    if (puVar24 == (undefined1 *)0x0) {
      puVar24 = &(this->DigestedProperties).field_0x38;
    }
    iVar26 = *(int *)(puVar24 +
                     (ulonglong)(*(int *)&(this->DigestedProperties).field_0x48 - 1U & local_278) *
                     4);
    if (iVar26 != -1) {
      lVar21 = *(longlong *)&this_01->field_0x0;
      do {
        if (*(uint *)(lVar21 + (longlong)iVar26 * 0x28) == local_278) {
          if ((iVar26 != -1) && (lVar21 = lVar21 + (longlong)iVar26 * 0x28, lVar21 != 0))
          goto LAB_146fbe8cf;
          break;
        }
        iVar26 = *(int *)(lVar21 + 0x20 + (longlong)iVar26 * 0x28);
      } while (iVar26 != -1);
    }
  }
  local_258 = &local_278;
  TSet<TTuple<FAIGenericID<FPerceptionListenerCounter>,UAISense_Sight::FDigestedSightProperties>,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,UAISense_Sight::FDigestedSightProperties,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FAIGenericID<FPerceptionListenerCounter>_const_&>_>
            ((TSet<TTuple<FAIGenericID<FPerceptionListenerCounter>,UAISense_Sight::FDigestedSightProperties>,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,UAISense_Sight::FDigestedSightProperties,0>,FDefaultSetAllocator>
              *)this_01,(uint)&local_270,
             (TKeyInitializer<FAIGenericID<FPerceptionListenerCounter>_const_&> *)
             (ulonglong)local_278,(bool *)&local_258);
  lVar21 = *(longlong *)&this_01->field_0x0 + (longlong)(int)local_270 * 0x28;
LAB_146fbe8cf:
  pFVar1 = (FDigestedSightProperties *)(lVar21 + 4);
  pFVar20 = FDigestedSightProperties::FDigestedSightProperties(&local_220,pUVar18);
  local_a0 = (undefined ***)0x0;
  fVar12 = pFVar20->SightRadiusSq;
  uVar7 = *(undefined8 *)&pFVar20->AutoSuccessRangeSqFromLastSeenLocation;
  pFVar1->PeripheralVisionAngleCos = pFVar20->PeripheralVisionAngleCos;
  pFVar1->SightRadiusSq = fVar12;
  *(undefined8 *)(lVar21 + 0xc) = uVar7;
  *(undefined8 *)(lVar21 + 0x14) = *(undefined8 *)&pFVar20->PointOfViewBackwardOffset;
  *(undefined4 *)(lVar21 + 0x1c) = *(undefined4 *)&pFVar20->AffiliationFlags;
  local_b8 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UAISense_Sight::OnListenerUpdateImpl'::`13'::<lambda_4>,0,0>::
              _vftable_;
  local_b0 = &local_1a8;
  local_c8[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UAISense_Sight::OnListenerUpdateImpl'::__l13::<lambda_4>,void,FAISightQuery_&>
                ::Call;
  GenerateQueriesForListener
            (this,param_1,pFVar1,(TFunction<void___cdecl(FAISightQuery_&)> *)local_c8);
  if (local_c8[0] != (code *)0x0) {
    pppuVar22 = &local_b8;
    if (local_a0 != (undefined ***)0x0) {
      pppuVar22 = local_a0;
    }
    (*(code *)(*pppuVar22)[2])();
  }
  local_160 = 0;
  if (local_168 != (void *)0x0) {
    FMemory::Free(local_168);
  }
  TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_1a8);
LAB_146fbea25:
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar10) && (local_288 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false))
     && (FThreadStats::TlsSlot != 0xffffffff)) {
    this_02 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_02 == (FThreadStats *)0x0) {
      this_03 = FThreadStatsPool::Get();
      this_02 = FThreadStatsPool::GetFromPool(this_03);
    }
    if (this_02->bWaitForExplicitFlush < this_02->ScopeCount) {
      local_238.NameAndInfo.Index = local_288.ComparisonIndex.Value;
      local_238.NameAndInfo.Number = local_288.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_250);
      local_238.StatData.Pad[4] = '\0';
      local_238.StatData.Pad[5] = '\0';
      local_238.StatData.Pad[6] = '\0';
      local_238.StatData.Pad[7] = '\0';
      local_238.StatData.Pad[0] = local_250.s.LowPart._0_1_;
      local_238.StatData.Pad[1] = local_250.s.LowPart._1_1_;
      local_238.StatData.Pad[2] = local_250.s.LowPart._2_1_;
      local_238.StatData.Pad[3] = local_250.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_02,&local_238);
      piVar2 = &this_02->ScopeCount;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FThreadStats::Flush(this_02,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_02,false,false);
      }
    }
  }
  return;
}

// OnNewListenerImpl @ 146fbf990

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UAISense_Sight::OnNewListenerImpl(UAISense_Sight *this,FPerceptionListener *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  UObject *pUVar6;
  UClass *pUVar7;
  longlong *plVar8;
  UAISenseConfig_Sight *pUVar9;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  longlong local_b0;
  uint local_a8;
  undefined1 local_a4 [8];
  FDigestedSightProperties *local_9c;
  uint *local_90;
  FDigestedSightProperties *local_88;
  FDigestedSightProperties local_80;
  undefined1 local_58 [40];
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)param_1);
  if (pUVar6 == (UObject *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewListenerPtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\Perception\\AISense_Sight.cpp"
                       ,0x34b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_a4[4] = *(undefined1 *)((longlong)&this->_padding_ + 4);
  local_9c = (FDigestedSightProperties *)this->_padding_;
  uVar4 = TArray<TObjectPtr<UAISenseConfig>,TSizedDefaultAllocator<32>_>::
          IndexOfByPredicate<_anonymous_namespace_::FConfigOfSenseID>
                    ((TArray<TObjectPtr<UAISenseConfig>,TSizedDefaultAllocator<32>_> *)
                     &pUVar6[4].field_0x20,(FConfigOfSenseID *)(local_a4 + 4));
  if (uVar4 != 0xffffffff) {
    uVar5 = 0;
    if ((int)uVar4 < *(int *)(pUVar6 + 5)) {
      uVar5 = ~uVar4 >> 0x1f;
    }
    if (uVar5 == 0) {
      local_b8 = (longlong)(int)uVar4;
      local_b0 = (longlong)*(int *)(pUVar6 + 5);
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pUVar9 = *(UAISenseConfig_Sight **)
              (*(longlong *)&pUVar6[4].field_0x20 + (longlong)(int)uVar4 * 8);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar9 == (UAISenseConfig_Sight *)0x0) goto LAB_146fbfaa9;
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
    if (pUVar9 != (UAISenseConfig_Sight *)0x0) {
      pUVar7 = Z_Construct_UClass_UAISenseConfig_Sight_NoRegister();
      iVar1 = (int)pUVar7->_padding_;
      if ((iVar1 <= *(int *)(pUVar9->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar9->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar7->_padding_)) goto LAB_146fbfad1;
    }
  }
LAB_146fbfaa9:
  pUVar9 = (UAISenseConfig_Sight *)0x0;
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("SenseConfig",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\Perception\\AISense_Sight.cpp"
                     ,0x34d,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_146fbfad1:
  FDigestedSightProperties::FDigestedSightProperties(&local_80,pUVar9);
  local_a8 = (param_1->ListenerID).Index;
  local_90 = &local_a8;
  local_88 = &local_80;
  TSet<TTuple<FAIGenericID<FPerceptionListenerCounter>,UAISense_Sight::FDigestedSightProperties>,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,UAISense_Sight::FDigestedSightProperties,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FAIGenericID<FPerceptionListenerCounter>_&&,UAISense_Sight::FDigestedSightProperties_const_&>_>
            ((TSet<TTuple<FAIGenericID<FPerceptionListenerCounter>,UAISense_Sight::FDigestedSightProperties>,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,UAISense_Sight::FDigestedSightProperties,0>,FDefaultSetAllocator>
              *)&this->DigestedProperties,
             (TPairInitializer<FAIGenericID<FPerceptionListenerCounter>_&&,UAISense_Sight::FDigestedSightProperties_const_&>
              *)local_a4,(bool *)&local_90);
  local_58._0_8_ = 0;
  local_30 = (longlong *)0x0;
  GenerateQueriesForListener
            (this,param_1,&local_80,(TFunction<void___cdecl(FAISightQuery_&)> *)local_58);
  if (local_58._0_8_ != 0) {
    plVar8 = (longlong *)(local_58 + 0x10);
    if (local_30 != (longlong *)0x0) {
      plVar8 = local_30;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  return;
}

// OnPendingCanBeSeenQueryProcessed @ 146fc08e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UAISense_Sight::OnPendingCanBeSeenQueryProcessed
          (UAISense_Sight *this,FAISightQueryID *param_1,bool param_2,float param_3,
          TVector<double> *param_4,TOptional<int> *param_5)

{
  int *piVar1;
  FRWFallbackSafeAccessDetectorDefinition *pFVar2;
  FRWFallbackSafeAccessDetectorDefinition FVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_AI_Sense_Sight_ProcessPendingQuery> FVar12;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  FNameEntryId FVar15;
  FName FVar16;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_78;
  FName local_70;
  FName local_68;
  FStatMessage local_58;
  TOptional<AActor_*> local_48 [2];
  
  FVar12 = StatPtr_STAT_AI_Sense_Sight_ProcessPendingQuery;
  if (StatPtr_STAT_AI_Sense_Sight_ProcessPendingQuery ==
      (FThreadSafeStaticStat<FStat_STAT_AI_Sense_Sight_ProcessPendingQuery>)0x0) {
    pFVar11 = ::FName::FName(&local_70,"STAT_AI_Sense_Sight_ProcessPendingQuery");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_AI_Sense_Sight_ProcessPendingQuery>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_AI_Sense_Sight_ProcessPendingQuery,*pFVar11,
                        L"Perception Sense: Sight, Process pending result","STATGROUP_AI",
                        "STATCAT_Advanced",L"AI",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar16 = *(FName *)FVar12;
  bVar7 = false;
  bVar9 = false;
  local_68.ComparisonIndex.Value = 0;
  local_68.Number = 0;
  FVar15 = FVar16.ComparisonIndex.Value;
  uVar13 = FVar16.Number;
  if ((FVar15.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar7 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar15.Value;
        local_res10.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\Perception\\AISense_Sight.cpp"
                   ,0x26d);
        bVar7 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_78.s.LowPart = FVar15.Value;
      local_78.s.HighPart = uVar13;
      FThreadStats::AddMessage(FVar16,CycleScopeStart);
      bVar8 = true;
      goto LAB_146fc0a3f;
    }
  }
  bVar8 = false;
  FVar16 = local_68;
LAB_146fc0a3f:
  LOCK();
  pFVar2 = &this->QueriesListAccessDetector;
  FVar3 = *pFVar2;
  *pFVar2 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar2 + 0x100000);
  UNLOCK();
  if (((FVar3 != (FRWFallbackSafeAccessDetectorDefinition)0x0) &&
      (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                          ,0x72,
                          L"Acquiring a write access while there are ongoing read or write access"),
     bVar10)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar4 = (this->SightQueriesPending).AllocatorInstance.Data;
  if (pFVar4 != pFVar4 + (longlong)(this->SightQueriesPending).ArrayNum * 0x38) {
    pFVar14 = pFVar4;
    do {
      if ((*(uint *)pFVar14 == (param_1->ObserverId).Index) &&
         (*(uint *)(pFVar14 + 4) == param_1->TargetId)) {
        iVar6 = (int)(((longlong)pFVar14 - (longlong)pFVar4) / 0x38);
        if (iVar6 != -1) {
          local_48[0].bIsSet = false;
          OnPendingQueryProcessed(this,iVar6,param_2,param_3,param_4,param_5,local_48);
        }
        break;
      }
      pFVar14 = pFVar14 + 0x38;
    } while (pFVar14 != pFVar4 + (longlong)(this->SightQueriesPending).ArrayNum * 0x38);
  }
  LOCK();
  pFVar2 = &this->QueriesListAccessDetector;
  FVar3 = *pFVar2;
  *pFVar2 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar2 + -0x100000);
  UNLOCK();
  if (((FVar3 != (FRWFallbackSafeAccessDetectorDefinition)0x100000) &&
      (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                          ,0x7d,
                          L"Another thread asked to have a read or write access during this write access"
                         ), bVar10)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar8) && (FVar16 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_58.NameAndInfo.Index = FVar16.ComparisonIndex.Value;
      local_58.NameAndInfo.Number = FVar16.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_78);
      local_58.StatData.Pad[4] = '\0';
      local_58.StatData.Pad[5] = '\0';
      local_58.StatData.Pad[6] = '\0';
      local_58.StatData.Pad[7] = '\0';
      local_58.StatData.Pad[0] = local_78.s.LowPart._0_1_;
      local_58.StatData.Pad[1] = local_78.s.LowPart._1_1_;
      local_58.StatData.Pad[2] = local_78.s.LowPart._2_1_;
      local_58.StatData.Pad[3] = local_78.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_58);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// OnPendingQueryProcessed @ 146fc0c70

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UAISense_Sight::OnPendingQueryProcessed
          (UAISense_Sight *this,int param_1,bool param_2,float param_3,TVector<double> *param_4,
          TOptional<int> *param_5,TOptional<AActor_*> *param_6)

{
  int *piVar1;
  USceneComponent *pUVar2;
  FAISightQuery *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  FAISightTarget *this_00;
  AActor *pAVar9;
  longlong lVar10;
  uint *puVar11;
  undefined1 *puVar12;
  FScriptContainerElement *pFVar13;
  FPerceptionListener *pFVar14;
  FPerceptionListener *pFVar15;
  TArray<FAISightQuery,TSizedDefaultAllocator<32>_> *pTVar16;
  FPerceptionListener *pFVar17;
  byte bVar18;
  longlong lVar19;
  uint uVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  TVector<double>_u_0 local_a8;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  double local_80;
  FAISightQuery local_78;
  
  pFVar17 = (FPerceptionListener *)0x0;
  uVar20 = (uint)~param_1 >> 0x1f;
  uVar6 = 0;
  if (param_1 < (this->SightQueriesPending).ArrayNum) {
    uVar6 = uVar20;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar13 = (this->SightQueriesPending).AllocatorInstance.Data;
  lVar19 = (longlong)param_1 * 0x38;
  local_78.ObserverId.Index = *(uint *)(pFVar13 + lVar19);
  local_78.TargetId = *(uint *)(pFVar13 + lVar19 + 4);
  local_78.Score = *(float *)(pFVar13 + lVar19 + 8);
  local_78.Importance = *(float *)(pFVar13 + lVar19 + 0xc);
  local_78.LastSeenLocation.field0_0x0._s_0.X = (double)*(undefined8 *)(pFVar13 + lVar19 + 0x10);
  local_78.LastSeenLocation.field0_0x0._s_0.Y = (double)*(undefined8 *)(pFVar13 + lVar19 + 0x10 + 8)
  ;
  local_78.LastSeenLocation.field0_0x0._s_0.Z = (double)*(undefined8 *)(pFVar13 + lVar19 + 0x20);
  local_78.UserData = *(int *)(pFVar13 + lVar19 + 0x28);
  local_78.field6_0x30 = *(FAISightQuery_u_48 *)(pFVar13 + lVar19 + 0x30);
  uVar6 = 0;
  if (param_1 < (this->SightQueriesPending).ArrayNum) {
    uVar6 = uVar20;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar8 = (this->SightQueriesPending).ArrayNum;
  pFVar13 = (this->SightQueriesPending).AllocatorInstance.Data;
  iVar7 = iVar8 + ~param_1;
  if (1 < iVar7) {
    iVar7 = 1;
  }
  if (iVar7 != 0) {
    memmove(pFVar13 + lVar19,pFVar13 + (longlong)(iVar8 - iVar7) * 0x38,(longlong)iVar7 * 0x38);
  }
  piVar1 = &(this->SightQueriesPending).ArrayNum;
  *piVar1 = *piVar1 + -1;
  if ((this->_padding_ == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("PerceptionSystemInstance",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\Perception\\AISense.cpp"
                         ,0x40,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar19 = this->_padding_;
  if (*(int *)(lVar19 + 0x40) == *(int *)(lVar19 + 0x6c)) {
    return;
  }
  lVar10 = *(longlong *)(lVar19 + 0x78);
  if (*(longlong *)(lVar19 + 0x78) == 0) {
    lVar10 = lVar19 + 0x70;
  }
  uVar6 = *(uint *)(lVar10 + (ulonglong)(*(int *)(lVar19 + 0x80) - 1U & local_78.ObserverId.Index) *
                             4);
  if (uVar6 == 0xffffffff) {
    return;
  }
  while (puVar11 = (uint *)((longlong)(int)uVar6 * 0x60 + *(longlong *)(lVar19 + 0x38)),
        *puVar11 != local_78.ObserverId.Index) {
    uVar6 = puVar11[0x16];
    if (uVar6 == 0xffffffff) {
      return;
    }
  }
  pFVar15 = (FPerceptionListener *)(puVar11 + 2);
  if (puVar11 == (uint *)0x0) {
    pFVar15 = pFVar17;
  }
  if (pFVar15 == (FPerceptionListener *)0x0) {
    return;
  }
  if (param_6->bIsSet == false) {
    this_00 = TMapBase<unsigned_int,FAISightTarget,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FAISightTarget,0>_>
              ::Find((TMapBase<unsigned_int,FAISightTarget,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FAISightTarget,0>_>
                      *)&this->ObservedTargets,local_78.TargetId);
    if (this_00 == (FAISightTarget *)0x0) {
      return;
    }
    pAVar9 = (AActor *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
  }
  else {
    pAVar9 = param_6->TypedValue;
  }
  if (pAVar9 == (AActor *)0x0) {
    return;
  }
  pUVar2 = (pAVar9->RootComponent).field0_0x0.DebugPtr;
  bVar18 = local_78.field6_0x30._0_1_ & 1;
  local_a8._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
  local_a8._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
  local_a8._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
  local_a8._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
  local_a8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  if (pUVar2 != (USceneComponent *)0x0) {
    local_80 = (pUVar2->ComponentToWorld).Translation.ZW.m128d_f64[0];
    local_90 = *(undefined4 *)(pUVar2->ComponentToWorld).Translation.XY.m128d_f64;
    uStack_8c = *(undefined4 *)((longlong)(pUVar2->ComponentToWorld).Translation.XY.m128d_f64 + 4);
    uStack_88 = *(undefined4 *)((pUVar2->ComponentToWorld).Translation.XY.m128d_f64 + 1);
    uStack_84 = *(undefined4 *)((longlong)(pUVar2->ComponentToWorld).Translation.XY.m128d_f64 + 0xc)
    ;
    local_a8._0_4_ = local_90;
    local_a8._4_4_ = uStack_8c;
    local_a8._8_4_ = uStack_88;
    local_a8._12_4_ = uStack_84;
    local_a8._s_0.Z = local_80;
  }
  UpdateQueryVisibilityStatus
            (this,&local_78,pFVar15,param_2,param_4,param_3,pAVar9,(TVector<double> *)&local_a8._s_0
            );
  if (param_5->bIsSet != false) {
    local_78.UserData = param_5->TypedValue;
  }
  local_78.field6_0x30 =
       (FAISightQuery_u_48)((ulonglong)(local_78.field6_0x30._0_4_ & 1) | GFrameCounter * 2);
  pFVar14 = pFVar17;
  if (*(int *)&(this->DigestedProperties).field_0x8 !=
      *(int *)&(this->DigestedProperties).field_0x34) {
    puVar12 = *(undefined1 **)&(this->DigestedProperties).field_0x40;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = &(this->DigestedProperties).field_0x38;
    }
    iVar7 = *(int *)(puVar12 +
                    (ulonglong)
                    (*(int *)&(this->DigestedProperties).field_0x48 - 1U & local_78.ObserverId.Index
                    ) * 4);
    if (iVar7 != -1) {
      do {
        pFVar14 = (FPerceptionListener *)
                  (*(longlong *)&this->DigestedProperties + (longlong)iVar7 * 0x28);
        if (*(uint *)(*(longlong *)&this->DigestedProperties + (longlong)iVar7 * 0x28) ==
            local_78.ObserverId.Index) {
          if (pFVar14 != (FPerceptionListener *)0x0) goto LAB_146fc0fd7;
          break;
        }
        iVar7 = *(int *)((longlong)&(pFVar14->CachedLocation).field0_0x0 + 0x10);
        pFVar14 = pFVar17;
      } while (iVar7 != -1);
    }
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_146fc0fd7:
  dVar21 = (double)CONCAT44(local_a8._4_4_,local_a8._0_4_) -
           (pFVar15->CachedLocation).field0_0x0._s_0.X;
  dVar23 = local_a8._s_0.Z - (pFVar15->CachedLocation).field0_0x0._s_0.Z;
  dVar22 = (double)CONCAT44(local_a8._12_4_,local_a8._8_4_) -
           (pFVar15->CachedLocation).field0_0x0._s_0.Y;
  local_78.Importance = this->MaxQueryImportance;
  dVar23 = dVar22 * dVar22 + dVar21 * dVar21 + dVar23 * dVar23;
  if ((double)this->HighImportanceDistanceSquare < dVar23) {
    dVar21 = (double)local_78.Importance;
    dVar23 = (double)((this->SightLimitQueryImportance - local_78.Importance) /
                     (float)(&pFVar14->Filter)[(ulonglong)bVar18 * 2].AcceptedChannelsMask) * dVar23
             + dVar21;
    if (dVar21 <= dVar23) {
      dVar23 = dVar21;
    }
    if (dVar23 <= 0.0) {
      dVar23 = 0.0;
    }
    local_78.Importance = (float)dVar23;
  }
  if (local_78.Importance <= 0.0) {
    pTVar16 = &this->SightQueriesOutOfRange;
    pFVar3 = (FAISightQuery *)(pTVar16->AllocatorInstance).Data;
    if (this->bSightQueriesOutOfRangeDirty == false) {
      iVar7 = this->NextOutOfRangeIndex;
      if (((pFVar3 <= &local_78) && (&local_78 < pFVar3 + (this->SightQueriesOutOfRange).ArrayMax))
         && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar8 = (this->SightQueriesOutOfRange).ArrayNum;
      piVar1 = &(this->SightQueriesOutOfRange).ArrayMax;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x838,&pTVar16->AllocatorInstance,piVar1);
      }
      pFVar13 = (pTVar16->AllocatorInstance).Data;
      (this->SightQueriesOutOfRange).ArrayNum = iVar8 + 1;
      lVar19 = (longlong)iVar7 * 0x38;
      pFVar13 = pFVar13 + lVar19;
      memmove(pFVar13 + 0x38,pFVar13,(longlong)(iVar8 - iVar7) * 0x38);
      pFVar13 = (pTVar16->AllocatorInstance).Data;
      *(uint *)(pFVar13 + lVar19) = local_78.ObserverId.Index;
      *(uint *)(pFVar13 + lVar19 + 4) = local_78.TargetId;
      *(float *)(pFVar13 + lVar19 + 8) = local_78.Score;
      *(float *)(pFVar13 + lVar19 + 0xc) = local_78.Importance;
      *(double *)(pFVar13 + lVar19 + 0x10) = local_78.LastSeenLocation.field0_0x0._s_0.X;
      *(double *)(pFVar13 + lVar19 + 0x10 + 8) = local_78.LastSeenLocation.field0_0x0._s_0.Y;
      *(double *)(pFVar13 + lVar19 + 0x20) = local_78.LastSeenLocation.field0_0x0._s_0.Z;
      *(int *)(pFVar13 + lVar19 + 0x28) = local_78.UserData;
      *(FAISightQuery_u_48 *)(pFVar13 + lVar19 + 0x30) = local_78.field6_0x30;
      *(FAISightQuery_u_48 *)(pFVar13 + lVar19 + 0x30) = local_78.field6_0x30;
      this->NextOutOfRangeIndex = this->NextOutOfRangeIndex + 1;
    }
    else {
      if (((pFVar3 <= &local_78) && (&local_78 < pFVar3 + (this->SightQueriesOutOfRange).ArrayMax))
         && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar7 = (this->SightQueriesOutOfRange).ArrayNum;
      piVar1 = &(this->SightQueriesOutOfRange).ArrayMax;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x838,&pTVar16->AllocatorInstance,piVar1);
      }
      lVar19 = (longlong)iVar7 * 0x38;
      (this->SightQueriesOutOfRange).ArrayNum = iVar7 + 1;
      pFVar13 = (pTVar16->AllocatorInstance).Data;
      *(uint *)(pFVar13 + lVar19) = local_78.ObserverId.Index;
      *(uint *)(pFVar13 + lVar19 + 4) = local_78.TargetId;
      *(float *)(pFVar13 + lVar19 + 8) = local_78.Score;
      *(float *)(pFVar13 + lVar19 + 0xc) = local_78.Importance;
      *(double *)(pFVar13 + lVar19 + 0x10) = local_78.LastSeenLocation.field0_0x0._s_0.X;
      *(double *)(pFVar13 + lVar19 + 0x10 + 8) = local_78.LastSeenLocation.field0_0x0._s_0.Y;
      *(double *)(pFVar13 + lVar19 + 0x20) = local_78.LastSeenLocation.field0_0x0._s_0.Z;
      *(int *)(pFVar13 + lVar19 + 0x28) = local_78.UserData;
      *(FAISightQuery_u_48 *)(pFVar13 + lVar19 + 0x30) = local_78.field6_0x30;
      *(FAISightQuery_u_48 *)(pFVar13 + lVar19 + 0x30) = local_78.field6_0x30;
    }
  }
  else {
    pTVar16 = &this->SightQueriesInRange;
    pFVar3 = (FAISightQuery *)(pTVar16->AllocatorInstance).Data;
    if (((pFVar3 <= &local_78) && (&local_78 < pFVar3 + (this->SightQueriesInRange).ArrayMax)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar7 = (this->SightQueriesInRange).ArrayNum;
    piVar1 = &(this->SightQueriesInRange).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x838,&pTVar16->AllocatorInstance,piVar1);
    }
    lVar19 = (longlong)iVar7 * 0x38;
    (this->SightQueriesInRange).ArrayNum = iVar7 + 1;
    pFVar13 = (pTVar16->AllocatorInstance).Data;
    *(uint *)(pFVar13 + lVar19) = local_78.ObserverId.Index;
    *(uint *)(pFVar13 + lVar19 + 4) = local_78.TargetId;
    *(float *)(pFVar13 + lVar19 + 8) = local_78.Score;
    *(float *)(pFVar13 + lVar19 + 0xc) = local_78.Importance;
    *(double *)(pFVar13 + lVar19 + 0x10) = local_78.LastSeenLocation.field0_0x0._s_0.X;
    *(double *)(pFVar13 + lVar19 + 0x10 + 8) = local_78.LastSeenLocation.field0_0x0._s_0.Y;
    *(double *)(pFVar13 + lVar19 + 0x20) = local_78.LastSeenLocation.field0_0x0._s_0.Z;
    *(int *)(pFVar13 + lVar19 + 0x28) = local_78.UserData;
    *(FAISightQuery_u_48 *)(pFVar13 + lVar19 + 0x30) = local_78.field6_0x30;
    *(FAISightQuery_u_48 *)(pFVar13 + lVar19 + 0x30) = local_78.field6_0x30;
  }
  return;
}

// OnPendingTraceQueryProcessed @ 146fc1390

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UAISense_Sight::OnPendingTraceQueryProcessed
          (UAISense_Sight *this,FTraceHandle *param_1,FTraceDatum *param_2)

{
  int *piVar1;
  FRWFallbackSafeAccessDetectorDefinition *pFVar2;
  FRWFallbackSafeAccessDetectorDefinition FVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<FStat_STAT_AI_Sense_Sight_ProcessPendingQuery> FVar14;
  uint *puVar15;
  AActor *pAVar16;
  AActor *pAVar17;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar18;
  FScriptContainerElement *pFVar19;
  undefined1 *puVar20;
  FNameEntryId FVar21;
  FName FVar22;
  FColor_u_0 local_res8 [2];
  FName local_res10 [2];
  TOptional<int> local_res20;
  LARGE_INTEGER local_78;
  FName local_70;
  FName local_68;
  FStatMessage local_58;
  TOptional<AActor_*> local_48;
  
  pAVar16 = (AActor *)0x0;
  FVar14 = StatPtr_STAT_AI_Sense_Sight_ProcessPendingQuery;
  if (StatPtr_STAT_AI_Sense_Sight_ProcessPendingQuery ==
      (FThreadSafeStaticStat<FStat_STAT_AI_Sense_Sight_ProcessPendingQuery>)0x0) {
    pFVar13 = ::FName::FName(&local_70,"STAT_AI_Sense_Sight_ProcessPendingQuery");
    FVar14 = (FThreadSafeStaticStat<FStat_STAT_AI_Sense_Sight_ProcessPendingQuery>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_AI_Sense_Sight_ProcessPendingQuery,*pFVar13,
                        L"Perception Sense: Sight, Process pending result","STATGROUP_AI",
                        "STATCAT_Advanced",L"AI",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar22 = *(FName *)FVar14;
  bVar7 = false;
  bVar9 = false;
  local_68.ComparisonIndex.Value = 0;
  local_68.Number = 0;
  FVar21 = FVar22.ComparisonIndex.Value;
  uVar18 = FVar22.Number;
  if ((FVar21.Value == 0) && (uVar18 == 0)) {
LAB_146fc14e0:
    bVar8 = false;
    FVar22 = local_68;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar14 + 0x10));
      bVar7 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10[0].ComparisonIndex.Value = FVar21.Value;
        local_res10[0].Number = uVar18;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (local_res10,(wchar_t *)*(FName *)((longlong)FVar14 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\Perception\\AISense_Sight.cpp"
                   ,0x282);
        bVar7 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_146fc14e0;
    local_res20.TypedValue = FVar21.Value;
    local_res20._4_4_ = uVar18;
    FThreadStats::AddMessage(FVar22,CycleScopeStart);
    bVar8 = true;
  }
  LOCK();
  pFVar2 = &this->QueriesListAccessDetector;
  FVar3 = *pFVar2;
  *pFVar2 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar2 + 0x100000);
  UNLOCK();
  if (((FVar3 != (FRWFallbackSafeAccessDetectorDefinition)0x0) &&
      (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                          ,0x72,
                          L"Acquiring a write access while there are ongoing read or write access"),
     bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar5 = (this->SightQueriesPending).AllocatorInstance.Data;
  iVar4 = (this->SightQueriesPending).ArrayNum;
  if (pFVar5 != pFVar5 + (longlong)iVar4 * 0x38) {
    pFVar19 = pFVar5;
    do {
      if ((*(uint *)(pFVar19 + 0x34) == (param_1->field0_0x0)._Data.FrameNumber) &&
         (*(uint *)(pFVar19 + 0x30) >> 1 == (param_1->field0_0x0)._Data.Index)) {
        uVar18 = (uint)(((longlong)pFVar19 - (longlong)pFVar5) / 0x38);
        if (uVar18 != 0xffffffff) {
          uVar11 = 0;
          if ((int)uVar18 < iVar4) {
            uVar11 = ~uVar18 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar11 = *(uint *)((this->SightQueriesPending).AllocatorInstance.Data +
                            (longlong)(int)uVar18 * 0x38 + 4);
          if (*(int *)&(this->ObservedTargets).field_0x8 ==
              *(int *)&(this->ObservedTargets).field_0x34) goto LAB_146fc1660;
          puVar20 = *(undefined1 **)&(this->ObservedTargets).field_0x40;
          if (puVar20 == (undefined1 *)0x0) {
            puVar20 = &(this->ObservedTargets).field_0x38;
          }
          uVar12 = *(uint *)(puVar20 +
                            (ulonglong)(*(int *)&(this->ObservedTargets).field_0x48 - 1U & uVar11) *
                            4);
          if (uVar12 == 0xffffffff) goto LAB_146fc1660;
          goto LAB_146fc1630;
        }
        break;
      }
      pFVar19 = pFVar19 + 0x38;
    } while (pFVar19 != pFVar5 + (longlong)iVar4 * 0x38);
  }
LAB_146fc16f0:
  LOCK();
  pFVar2 = &this->QueriesListAccessDetector;
  FVar3 = *pFVar2;
  *pFVar2 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar2 + -0x100000);
  UNLOCK();
  if (((FVar3 != (FRWFallbackSafeAccessDetectorDefinition)0x100000) &&
      (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                          ,0x7d,
                          L"Another thread asked to have a read or write access during this write access"
                         ), bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar8) && (FVar22 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_58.NameAndInfo.Index = FVar22.ComparisonIndex.Value;
      local_58.NameAndInfo.Number = FVar22.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_78);
      local_58.StatData.Pad[4] = '\0';
      local_58.StatData.Pad[5] = '\0';
      local_58.StatData.Pad[6] = '\0';
      local_58.StatData.Pad[7] = '\0';
      local_58.StatData.Pad[0] = local_78.s.LowPart._0_1_;
      local_58.StatData.Pad[1] = local_78.s.LowPart._1_1_;
      local_58.StatData.Pad[2] = local_78.s.LowPart._2_1_;
      local_58.StatData.Pad[3] = local_78.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_58);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
  while (uVar12 = puVar15[0xc], uVar12 != 0xffffffff) {
LAB_146fc1630:
    puVar15 = (uint *)((longlong)(int)uVar12 * 0x38 + *(longlong *)&this->ObservedTargets);
    if (*puVar15 == uVar11) {
      pAVar17 = (AActor *)(puVar15 + 2);
      if (puVar15 == (uint *)0x0) {
        pAVar17 = pAVar16;
      }
      pAVar16 = (AActor *)0x0;
      if (pAVar17 != (AActor *)0x0) {
        pAVar16 = (AActor *)FWeakObjectPtr::Get((FWeakObjectPtr *)pAVar17);
      }
      break;
    }
  }
LAB_146fc1660:
  if (((param_2->OutHits).ArrayNum < 1) ||
     (pFVar5 = (param_2->OutHits).AllocatorInstance.Data, pFVar5 == (FScriptContainerElement *)0x0))
  {
LAB_146fc169d:
    bVar10 = true;
  }
  else {
    for (pAVar17 = FActorInstanceHandle::FetchActor((FActorInstanceHandle *)(pFVar5 + 0xb8));
        pAVar17 != (AActor *)0x0; pAVar17 = (pAVar17->Owner).field0_0x0.DebugPtr) {
      if (pAVar17 == pAVar16) goto LAB_146fc169d;
    }
    bVar10 = false;
  }
  local_48.bIsSet = true;
  local_res20._4_4_ = local_res20._4_4_ & 0xffffff00;
  local_48.TypedValue = pAVar16;
  OnPendingQueryProcessed(this,uVar18,bVar10,__real_3f800000,&param_2->End,&local_res20,&local_48);
  goto LAB_146fc16f0;
}

// PostInitProperties @ 146fc2c30

void __thiscall UAISense_Sight::PostInitProperties(UAISense_Sight *this)

{
  UAISense::PostInitProperties((UAISense *)this);
  this->HighImportanceDistanceSquare =
       this->HighImportanceQueryDistanceThreshold * this->HighImportanceQueryDistanceThreshold;
  return;
}

// RegisterEvent @ 146fc7560

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UAISense_Sight::RegisterEvent(UAISense_Sight *this,FAISightEvent *param_1)

{
  return;
}

// RegisterNewQuery @ 146fc7900

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UAISense_Sight::RegisterNewQuery
          (UAISense_Sight *this,FPerceptionListener *param_1,IGenericTeamAgentInterface *param_2,
          AActor *param_3,uint *param_4,TVector<double> *param_5,FDigestedSightProperties *param_6,
          TFunction<void___cdecl(FAISightQuery_&)> *param_7)

{
  int *piVar1;
  byte bVar2;
  code *pcVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *plVar8;
  FScriptContainerElement *pFVar9;
  float fVar10;
  
  bVar2 = param_6->AffiliationFlags;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_bool___cdecl_FAISenseAffiliationFilter::ShouldSenseTeam(IGenericTeamAgentInterface_const*___ptr64,AActor_const&___ptr64,unsigned_char)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_bool___cdecl_FAISenseAffiliationFilter::ShouldSenseTeam(IGenericTeamAgentInterface_const*___ptr64,AActor_const&___ptr64,unsigned_char)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_bool___cdecl_FAISenseAffiliationFilter::ShouldSenseTeam(IGenericTeamAgentInterface_const*___ptr64,AActor_const&___ptr64,unsigned_char)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    `public:_static_bool___cdecl_FAISenseAffiliationFilter::ShouldSenseTeam(IGenericTeamAgentInterface_const*___ptr64,AActor_const&___ptr64,unsigned_char)'
    ::__l2::AllFlags = '\a';
    _Init_thread_footer(&`public:_static_bool___cdecl_FAISenseAffiliationFilter::ShouldSenseTeam(IGenericTeamAgentInterface_const*___ptr64,AActor_const&___ptr64,unsigned_char)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if (bVar2 != `public:_static_bool___cdecl_FAISenseAffiliationFilter::ShouldSenseTeam(IGenericTeamAgentInterface_const*___ptr64,AActor_const&___ptr64,unsigned_char)'
               ::__l2::AllFlags) {
    if (param_2 == (IGenericTeamAgentInterface *)0x0) {
      uVar5 = 2;
    }
    else {
      bVar4 = (**(code **)((longlong)*param_2 + 0x20))(param_2,param_3);
      uVar5 = 1 << (bVar4 & 0x1f);
    }
    if ((uVar5 & bVar2) == 0) {
      return false;
    }
  }
  fVar10 = CalcQueryImportance(this,param_1,param_5,param_6->SightRadiusSq);
  if (0.0 < fVar10) {
    iVar6 = (this->SightQueriesInRange).ArrayNum;
    piVar1 = &(this->SightQueriesInRange).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x838,&(this->SightQueriesInRange).AllocatorInstance,piVar1);
    }
    (this->SightQueriesInRange).ArrayNum = iVar6 + 1;
    pFVar9 = (this->SightQueriesInRange).AllocatorInstance.Data + (longlong)iVar6 * 0x38;
  }
  else {
    this->bSightQueriesOutOfRangeDirty = true;
    piVar1 = &(this->SightQueriesOutOfRange).ArrayMax;
    iVar6 = (this->SightQueriesOutOfRange).ArrayNum;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x838,&(this->SightQueriesOutOfRange).AllocatorInstance,piVar1);
    }
    (this->SightQueriesOutOfRange).ArrayNum = iVar6 + 1;
    pFVar9 = (this->SightQueriesOutOfRange).AllocatorInstance.Data + (longlong)iVar6 * 0x38;
  }
  DefaultConstructItems<FAISightQuery,int>(pFVar9,1);
  *(uint *)pFVar9 = (param_1->ListenerID).Index;
  uVar5 = *param_4;
  *(float *)(pFVar9 + 0xc) = fVar10;
  *(uint *)(pFVar9 + 4) = uVar5;
  if (*(void **)param_7 != (void *)0x0) {
    UE::Core::Private::Function::CheckCallable(*(void **)param_7);
    pcVar3 = *(code **)param_7;
    plVar8 = (longlong *)&param_7->field_0x10;
    if (*(longlong **)&param_7->field_0x28 != (longlong *)0x0) {
      plVar8 = *(longlong **)&param_7->field_0x28;
    }
    uVar7 = (**(code **)(*plVar8 + 8))();
    (*pcVar3)(uVar7,pFVar9);
  }
  return true;
}

// RegisterSource @ 146fc8940

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UAISense_Sight::RegisterSource(UAISense_Sight *this,AActor *param_1)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48 [40];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_48._0_8_ = 0;
  local_20 = (longlong *)0x0;
  RegisterTarget(this,param_1,(TFunction<void___cdecl(FAISightQuery_&)> *)local_48);
  if (local_48._0_8_ != 0) {
    plVar1 = (longlong *)(local_48 + 0x10);
    if (local_20 != (longlong *)0x0) {
      plVar1 = local_20;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}

// RegisterTarget @ 146fc8ea0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UAISense_Sight::RegisterTarget
          (UAISense_Sight *this,AActor *param_1,TFunction<void___cdecl(FAISightQuery_&)> *param_2)

{
  TMap<unsigned_int,FAISightTarget,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FAISightTarget,0>_>
  *this_00;
  ulonglong uVar1;
  code *pcVar2;
  USceneComponent *pUVar3;
  bool bVar4;
  bool bVar5;
  TFunction<void___cdecl(FAISightQuery_&)> *pTVar6;
  bool bVar7;
  FGenericTeamId FVar8;
  bool bVar9;
  undefined1 uVar10;
  uint uVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<FStat_STAT_AI_Sense_Sight_RegisterTarget> FVar13;
  uint *puVar14;
  UObjectBaseUtility *this_01;
  UClass *pUVar15;
  IAISightTargetInterface *pIVar16;
  undefined7 extraout_var;
  UAIPerceptionComponent *this_02;
  AActor *pAVar17;
  IGenericTeamAgentInterface *pIVar18;
  int iVar19;
  undefined1 *puVar20;
  uchar uVar21;
  longlong lVar22;
  FPerceptionListener *this_03;
  uint uVar23;
  FName FVar24;
  int iVar25;
  uint uVar26;
  undefined1 *puVar28;
  TBitArray<FDefaultBitArrayAllocator> *pTVar29;
  FWeakObjectPtr *pFVar30;
  TFunction<void___cdecl(FAISightQuery_&)> *local_res18;
  uint local_res20;
  FColor_u_0 local_178;
  undefined1 local_174 [4];
  FName local_170;
  FWeakObjectPtr *local_168;
  FName local_160;
  FName local_158;
  FWeakObjectPtr local_148;
  undefined8 local_140;
  undefined8 local_138;
  uchar local_130;
  undefined4 local_12c;
  undefined8 local_128;
  int local_120;
  AActor *local_118;
  UClass *local_110;
  longlong *local_108;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_100;
  longlong *local_e0;
  uint uStack_d8;
  uint uStack_d4;
  TBitArray<FDefaultBitArrayAllocator> *local_d0;
  undefined4 uStack_c8;
  int iStack_c4;
  int local_c0;
  undefined4 uStack_bc;
  undefined4 *local_b0;
  FWeakObjectPtr *local_a8;
  FName local_a0;
  TVector<double>_u_0 local_98;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  double local_70;
  undefined4 local_4c;
  FWeakObjectPtr *pFVar27;
  
  pFVar27 = (FWeakObjectPtr *)0x0;
  uVar26 = 0;
  FVar13 = StatPtr_STAT_AI_Sense_Sight_RegisterTarget;
  local_res18 = param_2;
  if (StatPtr_STAT_AI_Sense_Sight_RegisterTarget ==
      (FThreadSafeStaticStat<FStat_STAT_AI_Sense_Sight_RegisterTarget>)0x0) {
    pFVar12 = ::FName::FName(&local_a0,"STAT_AI_Sense_Sight_RegisterTarget");
    FVar13 = (FThreadSafeStaticStat<FStat_STAT_AI_Sense_Sight_RegisterTarget>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_Sense_Sight_RegisterTarget,
                        *pFVar12,L"Perception Sense: Sight, Register Target","STATGROUP_AI",
                        "STATCAT_Advanced",L"AI",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar24 = *(FName *)FVar13;
  bVar5 = false;
  bVar4 = false;
  local_158.ComparisonIndex.Value = 0;
  local_158.Number = 0;
  bVar9 = false;
  bVar7 = false;
  if ((FVar24.ComparisonIndex.Value.Value == 0) && (FVar24.Number == 0)) {
LAB_146fc900c:
    bVar5 = bVar9;
    bVar4 = bVar7;
    bVar7 = false;
    local_160 = local_158;
    FVar24 = local_158;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_178.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_178._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar5 = false;
      bVar4 = true;
      bVar9 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_170.ComparisonIndex.Value = FVar24.ComparisonIndex.Value.Value;
        local_170.Number = FVar24.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_170,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\Perception\\AISense_Sight.cpp"
                   ,0x30f);
        bVar5 = true;
        bVar4 = true;
        bVar9 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_146fc900c;
    local_160 = FVar24;
    FThreadStats::AddMessage(FVar24,CycleScopeStart);
    bVar7 = true;
  }
  uVar23 = *(uint *)((longlong)&param_1->_padding_ + 4);
  this_00 = &this->ObservedTargets;
  if (*(int *)&(this->ObservedTargets).field_0x8 != *(int *)&(this->ObservedTargets).field_0x34) {
    puVar20 = *(undefined1 **)&(this->ObservedTargets).field_0x40;
    if (puVar20 == (undefined1 *)0x0) {
      puVar20 = &(this->ObservedTargets).field_0x38;
    }
    uVar11 = *(uint *)(puVar20 +
                      (ulonglong)(*(int *)&(this->ObservedTargets).field_0x48 - 1U & uVar23) * 4);
    if (uVar11 != 0xffffffff) {
      do {
        puVar14 = (uint *)((longlong)(int)uVar11 * 0x38 + *(longlong *)&this_00->field_0x0);
        if (*puVar14 == uVar23) {
          pFVar30 = (FWeakObjectPtr *)(puVar14 + 2);
          if (puVar14 == (uint *)0x0) {
            pFVar30 = pFVar27;
          }
          local_168 = pFVar30;
          if ((pFVar30 != (FWeakObjectPtr *)0x0) &&
             (pAVar17 = (AActor *)FWeakObjectPtr::Get(pFVar30), pAVar17 == param_1))
          goto LAB_146fc918d;
          break;
        }
        uVar11 = puVar14[0xc];
      } while (uVar11 != 0xffffffff);
    }
  }
  uVar21 = FGenericTeamId::NoTeam.TeamID;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_148.ObjectIndex = 0;
  local_148.ObjectSerialNumber = 0;
  local_118 = param_1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_148,(FObjectPtr)&local_118);
  local_12c = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  local_b0 = &local_12c;
  local_140 = 0;
  local_a8 = &local_148;
  local_138 = 0;
  local_128 = 0;
  local_130 = uVar21;
  TSet<TTuple<unsigned_int,FAISightTarget>,TDefaultMapHashableKeyFuncs<unsigned_int,FAISightTarget,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_const_&,FAISightTarget_const_&>_>
            ((TSet<TTuple<unsigned_int,FAISightTarget>,TDefaultMapHashableKeyFuncs<unsigned_int,FAISightTarget,0>,FDefaultSetAllocator>
              *)this_00,(TPairInitializer<unsigned_int_const_&,FAISightTarget_const_&> *)local_174,
             (bool *)&local_b0);
  pFVar30 = (FWeakObjectPtr *)
            (*(longlong *)&this_00->field_0x0 + (longlong)(int)local_174 * 0x38 + 8);
  pcVar2 = *(code **)(param_1->_padding_ + 0x740);
  local_168 = pFVar30;
  local_110 = Z_Construct_UClass_UAISightTargetInterface_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_110 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_110);
  }
  this_01 = (UObjectBaseUtility *)(*pcVar2)(param_1,&local_110);
  if (this_01 != (UObjectBaseUtility *)0x0) {
    pUVar15 = Z_Construct_UClass_UAISightTargetInterface_NoRegister();
    pIVar16 = UObjectBaseUtility::GetInterfaceAddress(this_01,pUVar15);
    if (pIVar16 != (IAISightTargetInterface *)0x0) goto LAB_146fc9181;
  }
  pUVar15 = Z_Construct_UClass_UAISightTargetInterface_NoRegister();
  pIVar16 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)param_1,pUVar15);
LAB_146fc9181:
  TWeakInterfacePtr<IAISightTargetInterface>::operator=
            ((TWeakInterfacePtr<IAISightTargetInterface> *)(pFVar30 + 1),pIVar16);
LAB_146fc918d:
  FVar8 = FGenericTeamId::GetTeamIdentifier((AActor *)&stack0x00000010);
  local_res20 = local_res20 & 0xffffff00;
  *(undefined1 *)&pFVar30[3].ObjectIndex = *(undefined1 *)CONCAT71(extraout_var,FVar8.TeamID);
  if ((this->_padding_ == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("PerceptionSystemInstance",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\Perception\\AISense.cpp"
                         ,0x40,L""), bVar9)) {
    pcVar2 = (code *)swi(3);
    uVar10 = (*pcVar2)();
    return (bool)uVar10;
  }
  pFVar30 = local_168;
  pTVar6 = local_res18;
  lVar22 = this->_padding_;
  pUVar3 = (param_1->RootComponent).field0_0x0.DebugPtr;
  local_108 = (longlong *)(lVar22 + 0x38);
  local_98._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
  local_98._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
  local_98._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
  local_98._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
  local_98._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  if (pUVar3 != (USceneComponent *)0x0) {
    local_70 = (pUVar3->ComponentToWorld).Translation.ZW.m128d_f64[0];
    local_80 = *(undefined4 *)(pUVar3->ComponentToWorld).Translation.XY.m128d_f64;
    uStack_7c = *(undefined4 *)((longlong)(pUVar3->ComponentToWorld).Translation.XY.m128d_f64 + 4);
    uStack_78 = *(undefined4 *)((pUVar3->ComponentToWorld).Translation.XY.m128d_f64 + 1);
    uStack_74 = *(undefined4 *)((longlong)(pUVar3->ComponentToWorld).Translation.XY.m128d_f64 + 0xc)
    ;
    local_98._0_4_ = local_80;
    local_98._4_4_ = uStack_7c;
    local_98._8_4_ = uStack_78;
    local_98._12_4_ = uStack_74;
    local_98._s_0.Z = local_70;
  }
  iVar19 = *(int *)(lVar22 + 0x60);
  TStack_100.Array = (TBitArray<FDefaultBitArrayAllocator> *)(lVar22 + 0x48);
  local_c0 = 0;
  uStack_d4 = 1;
  iStack_c4 = 0;
  if (iVar19 != 0) {
    pTVar29 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar22 + 0x58);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar22 + 0x58) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar29 = TStack_100.Array;
    }
    uVar23 = *(uint *)(pTVar29->AllocatorInstance).InlineData;
    uVar26 = 0;
    while (uVar23 == 0) {
      iVar25 = (int)pFVar27;
      local_c0 = local_c0 + 0x20;
      uVar26 = iVar25 + 1;
      pFVar27 = (FWeakObjectPtr *)(ulonglong)uVar26;
      iStack_c4 = iVar19;
      if ((int)(iVar19 + -1 + (iVar19 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)uVar26) goto LAB_146fc92a0;
      uVar23 = *(uint *)((pTVar29->AllocatorInstance).InlineData + (longlong)iVar25 * 4 + 4);
    }
    uStack_d4 = -uVar23 & uVar23;
    uVar1 = (ulonglong)uStack_d4 * 2 + 1;
    lVar22 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar22 == 0; lVar22 = lVar22 + -1) {
      }
    }
    local_120 = (int)lVar22;
    iStack_c4 = local_120 + -1 + local_c0;
    if (iVar19 < iStack_c4) {
      iStack_c4 = iVar19;
    }
  }
LAB_146fc92a0:
  uStack_c8 = 0xffffffff;
  uStack_bc = local_4c;
  TStack_100._padding_ = CONCAT44(uStack_d4,uVar26);
  TStack_100.UnvisitedBitMask = 0xffffffff;
  TStack_100._28_4_ = local_4c;
  TStack_100.BaseBitIndex = local_c0;
  uVar23 = local_res20;
  local_e0 = local_108;
  uStack_d8 = uVar26;
  local_d0 = TStack_100.Array;
  TStack_100.CurrentBitIndex = iStack_c4;
  if (iStack_c4 < iVar19) {
    do {
      this_03 = (FPerceptionListener *)
                (*local_108 + 8 + (longlong)TStack_100.CurrentBitIndex * 0x60);
      if (((uint)(this_03->Filter).AcceptedChannelsMask >>
           (*(byte *)((longlong)&this->_padding_ + 4) & 0x1f) & 1) != 0) {
        bVar9 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this_03);
        if (bVar9) {
          this_02 = (UAIPerceptionComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_03);
          pAVar17 = UAIPerceptionComponent::GetBodyActor(this_02);
        }
        else {
          pAVar17 = (AActor *)0x0;
        }
        if (pAVar17 != param_1) {
          uVar26 = (this_03->ListenerID).Index;
          if (*(int *)&(this->DigestedProperties).field_0x8 !=
              *(int *)&(this->DigestedProperties).field_0x34) {
            puVar20 = *(undefined1 **)&(this->DigestedProperties).field_0x40;
            puVar28 = &(this->DigestedProperties).field_0x38;
            if (puVar20 != (undefined1 *)0x0) {
              puVar28 = puVar20;
            }
            iVar19 = *(int *)(puVar28 +
                             (ulonglong)
                             (*(int *)&(this->DigestedProperties).field_0x48 - 1U & uVar26) * 4);
            if (iVar19 != -1) {
              do {
                lVar22 = *(longlong *)&this->DigestedProperties + (longlong)iVar19 * 0x28;
                if (*(uint *)(*(longlong *)&this->DigestedProperties + (longlong)iVar19 * 0x28) ==
                    uVar26) {
                  if (lVar22 == 0) goto LAB_146fc93bf;
                  goto LAB_146fc93e5;
                }
                iVar19 = *(int *)(lVar22 + 0x20);
              } while (iVar19 != -1);
            }
          }
          lVar22 = 0;
LAB_146fc93bf:
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Pair != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                             ,0x288,L"");
          if (bVar9) {
            pcVar2 = (code *)swi(3);
            uVar10 = (*pcVar2)();
            return (bool)uVar10;
          }
LAB_146fc93e5:
          pIVar18 = FPerceptionListener::GetTeamAgent(this_03);
          bVar9 = RegisterNewQuery(this,this_03,pIVar18,param_1,
                                   (uint *)&pFVar30[3].ObjectSerialNumber,
                                   (TVector<double> *)&local_98._s_0,
                                   (FDigestedSightProperties *)(lVar22 + 4),pTVar6);
          uVar23 = uVar23 & 0xff;
          if (bVar9) {
            uVar23 = 1;
          }
        }
      }
      TStack_100.UnvisitedBitMask = TStack_100.UnvisitedBitMask & ~TStack_100._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_100);
    } while (TStack_100.CurrentBitIndex < (TStack_100.Array)->NumBits);
    FVar24 = local_160;
    local_res20 = uVar23;
    if ((char)uVar23 != '\0') {
      *(undefined4 *)&this->_padding_ = 0;
    }
  }
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar7) {
    FThreadStats::AddMessage(FVar24,CycleScopeEnd);
  }
  return (bool)(undefined1)local_res20;
}

// RemoveAllQueriesByListener @ 146fcb200

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UAISense_Sight::RemoveAllQueriesByListener
          (UAISense_Sight *this,FPerceptionListener *param_1,
          TFunction<void___cdecl(FAISightQuery_const_&)> *param_2)

{
  int *piVar1;
  FRWFallbackSafeAccessDetectorDefinition *pFVar2;
  FRWFallbackSafeAccessDetectorDefinition FVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  EReverseForEachResult EVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_AI_Sense_Sight_RemoveByListener> FVar11;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar12;
  FNameEntryId FVar13;
  FName FVar14;
  FColor_u_0 local_res8 [2];
  FAIGenericID<FPerceptionListenerCounter> local_res10 [2];
  FName local_res18;
  LARGE_INTEGER local_res20;
  FName local_78;
  FName local_70;
  <lambda_1> local_60;
  FStatMessage local_50;
  
  FVar11 = StatPtr_STAT_AI_Sense_Sight_RemoveByListener;
  if (StatPtr_STAT_AI_Sense_Sight_RemoveByListener ==
      (FThreadSafeStaticStat<FStat_STAT_AI_Sense_Sight_RemoveByListener>)0x0) {
    pFVar10 = ::FName::FName(&local_78,"STAT_AI_Sense_Sight_RemoveByListener");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_AI_Sense_Sight_RemoveByListener>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_Sense_Sight_RemoveByListener,
                        *pFVar10,L"Perception Sense: Sight, Remove By Listener","STATGROUP_AI",
                        "STATCAT_Advanced",L"AI",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar14 = *(FName *)FVar11;
  bVar5 = false;
  bVar7 = false;
  local_70.ComparisonIndex.Value = 0;
  local_70.Number = 0;
  FVar13 = FVar14.ComparisonIndex.Value;
  uVar12 = FVar14.Number;
  if ((FVar13.Value != 0) || (uVar12 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.ComparisonIndex.Value = FVar13.Value;
        local_res18.Number = uVar12;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res18,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\Perception\\AISense_Sight.cpp"
                   ,0x3f5);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res20.s.LowPart = FVar13.Value;
      local_res20.s.HighPart = uVar12;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar6 = true;
      goto LAB_146fcb359;
    }
  }
  bVar6 = false;
  FVar14 = local_70;
LAB_146fcb359:
  LOCK();
  pFVar2 = &this->QueriesListAccessDetector;
  FVar3 = *pFVar2;
  *pFVar2 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar2 + 0x100000);
  UNLOCK();
  if ((FVar3 != (FRWFallbackSafeAccessDetectorDefinition)0x0) &&
     (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                       ,0x72,
                       L"Acquiring a write access while there are ongoing read or write access");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_res10[0].Index = (param_1->ListenerID).Index;
  local_60.ListenerId = local_res10;
  local_60.OnRemoveFunc = param_2;
  ReverseForEach<TArray<FAISightQuery,TSizedDefaultAllocator<32>_>,_UAISense_Sight::RemoveAllQueriesByListener_::__l2::<lambda_1>_>
            (&this->SightQueriesInRange,&local_60);
  EVar9 = ReverseForEach<TArray<FAISightQuery,TSizedDefaultAllocator<32>_>,_UAISense_Sight::RemoveAllQueriesByListener_::__l2::<lambda_1>_>
                    (&this->SightQueriesOutOfRange,&local_60);
  if (EVar9 == Modified) {
    this->bSightQueriesOutOfRangeDirty = true;
  }
  ReverseForEach<TArray<FAISightQuery,TSizedDefaultAllocator<32>_>,_UAISense_Sight::RemoveAllQueriesByListener_::__l2::<lambda_1>_>
            (&this->SightQueriesPending,&local_60);
  LOCK();
  pFVar2 = &this->QueriesListAccessDetector;
  FVar3 = *pFVar2;
  *pFVar2 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar2 + -0x100000);
  UNLOCK();
  if ((FVar3 != (FRWFallbackSafeAccessDetectorDefinition)0x100000) &&
     (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                       ,0x7d,
                       L"Another thread asked to have a read or write access during this write access"
                      );
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_50.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_50.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res20);
      local_50.StatData.Pad[4] = '\0';
      local_50.StatData.Pad[5] = '\0';
      local_50.StatData.Pad[6] = '\0';
      local_50.StatData.Pad[7] = '\0';
      local_50.StatData.Pad[0] = local_res20.s.LowPart._0_1_;
      local_50.StatData.Pad[1] = local_res20.s.LowPart._1_1_;
      local_50.StatData.Pad[2] = local_res20.s.LowPart._2_1_;
      local_50.StatData.Pad[3] = local_res20.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_50);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// RemoveAllQueriesToTarget @ 146fcb540

void __thiscall
UAISense_Sight::RemoveAllQueriesToTarget
          (UAISense_Sight *this,uint *param_1,
          TFunction<void___cdecl(FAISightQuery_const_&)> *param_2)

{
  FRWFallbackSafeAccessDetectorDefinition *pFVar1;
  FRWFallbackSafeAccessDetectorDefinition FVar2;
  code *pcVar3;
  bool bVar4;
  
  LOCK();
  pFVar1 = &this->QueriesListAccessDetector;
  FVar2 = *pFVar1;
  *pFVar1 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar1 + 0x100000);
  UNLOCK();
  if ((FVar2 != (FRWFallbackSafeAccessDetectorDefinition)0x0) &&
     (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                       ,0x72,
                       L"Acquiring a write access while there are ongoing read or write access");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  RemoveAllQueriesToTarget_Internal(this,param_1,param_2);
  LOCK();
  pFVar1 = &this->QueriesListAccessDetector;
  FVar2 = *pFVar1;
  *pFVar1 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar1 + -0x100000);
  UNLOCK();
  if ((FVar2 != (FRWFallbackSafeAccessDetectorDefinition)0x100000) &&
     (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                       ,0x7d,
                       L"Another thread asked to have a read or write access during this write access"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// RemoveAllQueriesToTarget_Internal @ 146fcb600

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UAISense_Sight::RemoveAllQueriesToTarget_Internal
          (UAISense_Sight *this,uint *param_1,
          TFunction<void___cdecl(FAISightQuery_const_&)> *param_2)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  EReverseForEachResult EVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<FStat_STAT_AI_Sense_Sight_RemoveToTarget> FVar7;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar8;
  FNameEntryId FVar9;
  FName FVar10;
  FNameEntryId FVar11;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FStatMessage local_38;
  
  FVar11.Value = 0;
  FVar7 = StatPtr_STAT_AI_Sense_Sight_RemoveToTarget;
  if (StatPtr_STAT_AI_Sense_Sight_RemoveToTarget ==
      (FThreadSafeStaticStat<FStat_STAT_AI_Sense_Sight_RemoveToTarget>)0x0) {
    pFVar6 = ::FName::FName(&local_res10,"STAT_AI_Sense_Sight_RemoveToTarget");
    FVar7 = (FThreadSafeStaticStat<FStat_STAT_AI_Sense_Sight_RemoveToTarget>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_Sense_Sight_RemoveToTarget,
                       *pFVar6,L"Perception Sense: Sight, Remove To Target","STATGROUP_AI",
                       "STATCAT_Advanced",L"AI",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar10 = *(FName *)FVar7;
  bVar2 = false;
  bVar4 = false;
  FVar9 = FVar10.ComparisonIndex.Value;
  uVar8 = FVar10.Number;
  if ((FVar9.Value != 0) || (uVar8 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar7 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar9.Value;
        local_res8.s.HighPart = uVar8;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar7 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\Perception\\AISense_Sight.cpp"
                   ,0x419);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar9.Value;
      local_res8.s.HighPart = uVar8;
      FThreadStats::AddMessage(FVar10,CycleScopeStart);
      bVar3 = true;
      FVar11.Value = FVar9.Value;
      goto LAB_146fcb768;
    }
  }
  bVar3 = false;
  FVar10.ComparisonIndex.Value = 0;
  FVar10.Number = 0;
LAB_146fcb768:
  local_38.StatData.Pad = (uchar  [8])param_1;
  local_38.NameAndInfo = (FStatNameAndInfo)param_2;
  ReverseForEach<TArray<FAISightQuery,TSizedDefaultAllocator<32>_>,_UAISense_Sight::RemoveAllQueriesToTarget_Internal_::__l2::<lambda_1>_>
            (&this->SightQueriesInRange,(<lambda_1> *)&local_38);
  EVar5 = ReverseForEach<TArray<FAISightQuery,TSizedDefaultAllocator<32>_>,_UAISense_Sight::RemoveAllQueriesToTarget_Internal_::__l2::<lambda_1>_>
                    (&this->SightQueriesOutOfRange,(<lambda_1> *)&local_38);
  if (EVar5 == Modified) {
    this->bSightQueriesOutOfRangeDirty = true;
  }
  ReverseForEach<TArray<FAISightQuery,TSizedDefaultAllocator<32>_>,_UAISense_Sight::RemoveAllQueriesToTarget_Internal_::__l2::<lambda_1>_>
            (&this->SightQueriesPending,(<lambda_1> *)&local_38);
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar10 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo =
           (FStatNameAndInfo)
           (CONCAT44(FVar10.Number,FVar11.Value) & 0xffff6fffffffffff | 0x600000000000);
      QueryPerformanceCounter(&local_res8);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_38.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_38.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_38.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_38);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// ShouldAutomaticallySeeTarget @ 146fd2d60

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UAISense_Sight::ShouldAutomaticallySeeTarget
          (UAISense_Sight *this,FDigestedSightProperties *param_1,FAISightQuery *param_2,
          FPerceptionListener *param_3,AActor *param_4,float *param_5)

{
  USceneComponent *pUVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  *param_5 = 1.0;
  if ((param_1->AutoSuccessRangeSqFromLastSeenLocation != __real_bf800000) &&
     (((dVar5 = (param_2->LastSeenLocation).field0_0x0._s_0.X, dVar5 != __real_47efffffe0000000 ||
       (__real_47efffffe0000000 != (param_2->LastSeenLocation).field0_0x0._s_0.Y)) ||
      (__real_47efffffe0000000 != (param_2->LastSeenLocation).field0_0x0._s_0.Z)))) {
    pUVar1 = (param_4->RootComponent).field0_0x0.DebugPtr;
    uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    if (pUVar1 != (USceneComponent *)0x0) {
      uVar2 = (pUVar1->ComponentToWorld).Translation.ZW.m128d_f64[0];
      uVar6 = (pUVar1->ComponentToWorld).Translation.XY.m128d_f64[0];
      uVar7 = (pUVar1->ComponentToWorld).Translation.XY.m128d_f64[1];
    }
    dVar5 = dVar5 - (double)uVar6;
    dVar3 = (param_2->LastSeenLocation).field0_0x0._s_0.Z - (double)uVar2;
    dVar4 = (param_2->LastSeenLocation).field0_0x0._s_0.Y - (double)uVar7;
    return dVar4 * dVar4 + dVar5 * dVar5 + dVar3 * dVar3 <=
           (double)param_1->AutoSuccessRangeSqFromLastSeenLocation;
  }
  return false;
}

// StaticRegisterNativesUAISense_Sight @ 146fd3670

void __cdecl UAISense_Sight::StaticRegisterNativesUAISense_Sight(void)

{
  return;
}

// UnregisterSource @ 146fdb810

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UAISense_Sight::UnregisterSource(UAISense_Sight *this,AActor *param_1)

{
  FRWFallbackSafeAccessDetectorDefinition *pFVar1;
  FRWFallbackSafeAccessDetectorDefinition FVar2;
  code *pcVar3;
  FGenericTeamId FVar4;
  bool bVar5;
  EReverseForEachResult EVar6;
  uint *puVar7;
  uint uVar8;
  undefined1 *puVar9;
  uint local_res8 [2];
  undefined8 local_res10;
  AActor *local_res18 [2];
  <lambda_1> local_78;
  FWeakObjectPtr local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  LOCK();
  pFVar1 = &this->QueriesListAccessDetector;
  FVar2 = *pFVar1;
  *pFVar1 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar1 + 0x100000);
  UNLOCK();
  if (((FVar2 != (FRWFallbackSafeAccessDetectorDefinition)0x0) &&
      (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                         ,0x72,
                         L"Acquiring a write access while there are ongoing read or write access"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FVar4.TeamID = FGenericTeamId::NoTeam.TeamID;
  local_res8[0] = *(uint *)((longlong)&param_1->_padding_ + 4);
  local_58.ObjectIndex = 0;
  local_58.ObjectSerialNumber = 0;
  local_res10 = 0;
  FWeakObjectPtr::operator=(&local_58,(FObjectPtr)&local_res10);
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = CONCAT71(uStack_40._1_7_,FVar4.TeamID);
  local_38 = 0;
  uStack_40 = CONCAT44(0xffffffff,(undefined4)uStack_40);
  if (*(int *)&(this->ObservedTargets).field_0x8 != *(int *)&(this->ObservedTargets).field_0x34) {
    puVar9 = *(undefined1 **)&(this->ObservedTargets).field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->ObservedTargets).field_0x38;
    }
    uVar8 = *(uint *)(puVar9 + (ulonglong)
                               (*(int *)&(this->ObservedTargets).field_0x48 - 1U & local_res8[0]) *
                               4);
    if (uVar8 != 0xffffffff) {
      do {
        puVar7 = (uint *)((longlong)(int)uVar8 * 0x38 +
                         *(longlong *)&(this->ObservedTargets).field_0x0);
        if (*puVar7 == local_res8[0]) {
          local_58 = *(FWeakObjectPtr *)(puVar7 + 2);
          uStack_50 = *(undefined8 *)(puVar7 + 4);
          local_48 = *(undefined8 *)(puVar7 + 6);
          uStack_40 = *(undefined8 *)(puVar7 + 8);
          local_38 = *(undefined8 *)(puVar7 + 10);
          TSet<TTuple<unsigned_int,FAISightTarget>,TDefaultMapHashableKeyFuncs<unsigned_int,FAISightTarget,0>,FDefaultSetAllocator>
          ::RemoveByIndex((TSet<TTuple<unsigned_int,FAISightTarget>,TDefaultMapHashableKeyFuncs<unsigned_int,FAISightTarget,0>,FDefaultSetAllocator>
                           *)&this->ObservedTargets,uVar8);
          if (0 < (this->SightQueriesPending).ArrayNum + (this->SightQueriesInRange).ArrayNum +
                  (this->SightQueriesOutOfRange).ArrayNum) {
            local_res18[0] = (AActor *)FWeakObjectPtr::Get(&local_58);
            if ((this->_padding_ == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("PerceptionSystemInstance",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\Perception\\AISense.cpp"
                                   ,0x40,L""), bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            local_78.ListenersMap =
                 (TMap<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener,0>_>
                  *)(this->_padding_ + 0x38);
            local_78.AsTargetId = local_res8;
            local_78.TargetActor = local_res18;
            local_78.__this = this;
            ReverseForEach<TArray<FAISightQuery,TSizedDefaultAllocator<32>_>,_UAISense_Sight::UnregisterSource_::__l5::<lambda_1>_>
                      (&this->SightQueriesInRange,&local_78);
            EVar6 = ReverseForEach<TArray<FAISightQuery,TSizedDefaultAllocator<32>_>,_UAISense_Sight::UnregisterSource_::__l5::<lambda_1>_>
                              (&this->SightQueriesOutOfRange,&local_78);
            if (EVar6 == Modified) {
              this->bSightQueriesOutOfRangeDirty = true;
            }
            ReverseForEach<TArray<FAISightQuery,TSizedDefaultAllocator<32>_>,_UAISense_Sight::UnregisterSource_::__l5::<lambda_1>_>
                      (&this->SightQueriesPending,&local_78);
          }
          break;
        }
        uVar8 = puVar7[0xc];
      } while (uVar8 != 0xffffffff);
    }
  }
  LOCK();
  pFVar1 = &this->QueriesListAccessDetector;
  FVar2 = *pFVar1;
  *pFVar1 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar1 + -0x100000);
  UNLOCK();
  if (((FVar2 != (FRWFallbackSafeAccessDetectorDefinition)0x100000) &&
      (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                         ,0x7d,
                         L"Another thread asked to have a read or write access during this write access"
                        ), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  return;
}

// Update @ 146fdc890

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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

float __thiscall UAISense_Sight::Update(UAISense_Sight *this)

{
  int *piVar1;
  FQueryOperation *pFVar2;
  FRWFallbackSafeAccessDetectorDefinition *pFVar3;
  TArray<FAISightQuery,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<FAISightQuery,TSizedDefaultAllocator<32>_> *pTVar5;
  FQueryOperation *pFVar6;
  FRWFallbackSafeAccessDetectorDefinition FVar7;
  byte bVar8;
  FScriptContainerElement FVar9;
  uint uVar10;
  USceneComponent *pUVar11;
  undefined1 *puVar12;
  code *pcVar13;
  double dVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  double dVar18;
  EOperationType EVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  uint uVar24;
  EVisibilityResult EVar25;
  FName *pFVar26;
  FThreadSafeStaticStat<FStat_STAT_AI_Sense_Sight> FVar27;
  FThreadSafeStaticStat<FStat_STAT_AI_Sense_Sight_UpdateSort> FVar28;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar29;
  AActor *pAVar30;
  UAIPerceptionComponent *this_02;
  AActor *pAVar31;
  float *pfVar32;
  FThreadSafeStaticStat<FStat_STAT_AI_Sense_Sight_QueryOperations> FVar33;
  ulonglong uVar34;
  FScriptContainerElement *pFVar35;
  longlong *plVar36;
  uint uVar37;
  int iVar38;
  undefined1 *puVar39;
  FAISightQuery *pFVar40;
  int iVar41;
  FAISightQuery *pFVar42;
  longlong lVar43;
  ForAnyElementType FVar44;
  FName FVar45;
  longlong lVar46;
  FScriptContainerElement *pFVar47;
  int iVar48;
  float fVar49;
  double dVar50;
  float fVar51;
  double dVar52;
  double dVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  undefined4 uVar57;
  undefined1 auStackY_2f8 [32];
  ForAnyElementType local_290;
  undefined8 local_288;
  <lambda_1> local_280;
  undefined1 local_27f;
  undefined1 local_27e;
  FIdentityFunctor local_27d;
  FIdentityFunctor local_27c;
  FIdentityFunctor local_27b [3];
  int local_278;
  uint local_274;
  int local_270;
  FName local_268;
  FName local_260;
  ForAnyElementType local_258;
  undefined8 local_250;
  int local_248;
  int local_244;
  FQueryOperation local_240;
  FQueryOperation local_238;
  FQueryOperation local_230;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_228;
  FAISightTarget *local_218;
  int local_210;
  int local_20c;
  float local_208;
  int local_204;
  uint local_200;
  FColor_u_0 local_1fc;
  FColor_u_0 local_1f8;
  FColor_u_0 local_1f4;
  FName local_1f0;
  FName local_1e8;
  FName local_1e0;
  AActor *local_1d8;
  FName local_1d0;
  FName local_1c8;
  FName local_1b8;
  FName local_1a8;
  FString local_198;
  TMapBase<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener,0>_>
  *local_188;
  UWorld *local_180;
  FName local_178;
  FName local_170;
  LARGE_INTEGER local_168;
  LARGE_INTEGER local_160;
  LARGE_INTEGER local_158;
  FStatMessage local_150;
  FString local_140;
  TVector<double>_u_0 local_130;
  FName local_118;
  FName local_110;
  FName local_108;
  TVector<double>_u_0 local_100;
  double local_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  double local_c0;
  undefined1 local_b8 [40];
  longlong *local_90;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_2f8;
  FVar27 = StatPtr_STAT_AI_Sense_Sight;
  if (StatPtr_STAT_AI_Sense_Sight == (FThreadSafeStaticStat<FStat_STAT_AI_Sense_Sight>)0x0) {
    pFVar26 = ::FName::FName(&local_118,"STAT_AI_Sense_Sight");
    FVar27 = (FThreadSafeStaticStat<FStat_STAT_AI_Sense_Sight>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_Sense_Sight,*pFVar26,
                        L"Perception Sense: Sight","STATGROUP_AI","STATCAT_Advanced",L"AI",true,true
                        ,ST_int64,true,false,MCR_Invalid);
  }
  FVar45 = *(FName *)FVar27;
  bVar16 = false;
  bVar17 = false;
  local_1c8.ComparisonIndex.Value = 0;
  local_1c8.Number = 0;
  bVar20 = false;
  bVar21 = false;
  if ((FVar45.ComparisonIndex.Value.Value == 0) && (FVar45.Number == 0)) {
LAB_146fdca01:
    bVar17 = bVar21;
    bVar16 = bVar20;
    bVar20 = false;
    local_1e8 = local_1c8;
    FVar45 = local_1c8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1fc.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1fc._s_0,(char *)*(FName *)((longlong)FVar27 + 0x10));
      bVar16 = false;
      bVar17 = true;
      bVar20 = false;
      bVar21 = true;
      if (-1 < CpuChannel->Enabled) {
        local_1d0.ComparisonIndex.Value = FVar45.ComparisonIndex.Value.Value;
        local_1d0.Number = FVar45.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_1d0,(wchar_t *)*(FName *)((longlong)FVar27 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\Perception\\AISense_Sight.cpp"
                   ,0x103);
        bVar16 = true;
        bVar17 = true;
        bVar20 = true;
        bVar21 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_146fdca01;
    local_268 = FVar45;
    local_1e8 = FVar45;
    FThreadStats::AddMessage(FVar45,CycleScopeStart);
    bVar20 = true;
  }
  local_180 = UEngine::GetWorldFromContextObject
                        (GEngine,*(UObject **)(this->_padding_ + 0x20),LogAndReturnNull);
  fVar49 = __real_7f7fffff;
  if (local_180 == (UWorld *)0x0) goto LAB_146fddf94;
  LOCK();
  pFVar3 = &this->QueriesListAccessDetector;
  FVar7 = *pFVar3;
  *pFVar3 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar3 + 0x100000);
  UNLOCK();
  if (((FVar7 != (FRWFallbackSafeAccessDetectorDefinition)0x0) &&
      (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                          ,0x72,
                          L"Acquiring a write access while there are ongoing read or write access"),
     bVar21)) {
    pcVar13 = (code *)swi(3);
    fVar49 = (float)(*pcVar13)();
    return fVar49;
  }
  FVar28 = StatPtr_STAT_AI_Sense_Sight_UpdateSort;
  if (StatPtr_STAT_AI_Sense_Sight_UpdateSort ==
      (FThreadSafeStaticStat<FStat_STAT_AI_Sense_Sight_UpdateSort>)0x0) {
    pFVar26 = ::FName::FName(&local_110,"STAT_AI_Sense_Sight_UpdateSort");
    FVar28 = (FThreadSafeStaticStat<FStat_STAT_AI_Sense_Sight_UpdateSort>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_Sense_Sight_UpdateSort,
                        *pFVar26,L"Perception Sense: Sight, Update Sort","STATGROUP_AI",
                        "STATCAT_Advanced",L"AI",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar29 = *(FName *)FVar28;
  bVar21 = false;
  bVar22 = false;
  local_1b8.ComparisonIndex.Value = 0;
  local_1b8.Number = 0;
  if ((FVar29.ComparisonIndex.Value.Value == 0) && (FVar29.Number == 0)) {
LAB_146fdcb9e:
    bVar15 = false;
    FVar29 = local_1b8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1f8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1f8._s_0,(char *)*(FName *)((longlong)FVar28 + 0x10));
      bVar21 = false;
      bVar22 = true;
      if (-1 < CpuChannel->Enabled) {
        local_1e0.ComparisonIndex.Value = FVar29.ComparisonIndex.Value.Value;
        local_1e0.Number = FVar29.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_1e0,(wchar_t *)*(FName *)((longlong)FVar28 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\Perception\\AISense_Sight.cpp"
                   ,0x116);
        bVar21 = true;
        bVar22 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_146fdcb9e;
    local_268 = FVar29;
    FThreadStats::AddMessage(FVar29,CycleScopeStart);
    bVar15 = true;
  }
  if (this->bSightQueriesOutOfRangeDirty != false) {
    ForEach<TArray<FAISightQuery,TSizedDefaultAllocator<32>_>,_UAISense_Sight::Update_::__l6::<lambda_1>_>
              (&this->SightQueriesOutOfRange,&local_280);
    AlgoImpl::
    IntroSortInternal<FAISightQuery,int,FIdentityFunctor,TDereferenceWrapper<FAISightQuery,FAISightQuery::FSortPredicate>_>
              ((FAISightQuery *)(this->SightQueriesOutOfRange).AllocatorInstance.Data,
               (this->SightQueriesOutOfRange).ArrayNum,local_27d,(FSortPredicate *)&local_27d);
    this->NextOutOfRangeIndex = 0;
    this->bSightQueriesOutOfRangeDirty = false;
  }
  ForEach<TArray<FAISightQuery,TSizedDefaultAllocator<32>_>,_UAISense_Sight::Update_::__l6::<lambda_1>_>
            (&this->SightQueriesInRange,&local_280);
  AlgoImpl::
  IntroSortInternal<FAISightQuery,int,FIdentityFunctor,TDereferenceWrapper<FAISightQuery,FAISightQuery::FSortPredicate>_>
            ((FAISightQuery *)(this->SightQueriesInRange).AllocatorInstance.Data,
             (this->SightQueriesInRange).ArrayNum,local_27c,(FSortPredicate *)&local_27c);
  if (bVar22) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar21) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar15) && (FVar29 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_150.NameAndInfo.Index = FVar29.ComparisonIndex.Value;
      local_150.NameAndInfo.Number = FVar29.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_168);
      local_150.StatData.Pad[4] = '\0';
      local_150.StatData.Pad[5] = '\0';
      local_150.StatData.Pad[6] = '\0';
      local_150.StatData.Pad[7] = '\0';
      local_150.StatData.Pad[0] = local_168.s.LowPart._0_1_;
      local_150.StatData.Pad[1] = local_168.s.LowPart._1_1_;
      local_150.StatData.Pad[2] = local_168.s.LowPart._2_1_;
      local_150.StatData.Pad[3] = local_168.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_150);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  local_248 = 0;
  iVar48 = (int)((float)(this->SightQueriesPending).ArrayNum *
                this->PendingQueriesBudgetReductionRatio);
  if (iVar48 < 0) {
    iVar48 = 0;
  }
  local_244 = iVar48;
  QueryPerformanceCounter(&local_160);
  dVar18 = __real_4170000000000000;
  local_290.Data = (FScriptContainerElement *)0x0;
  local_288 = 0;
  local_228.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_228.ArrayNum = 0;
  local_228.ArrayMax = 0;
  dVar14 = (double)local_160.QuadPart * FGenericPlatformTime::SecondsPerCycle +
           this->MaxTimeSlicePerTick + __real_4170000000000000;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,0x10,&local_290,0,(int *)((longlong)&local_288 + 4));
  if (local_228.ArrayMax < 0x10) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0x10,&local_228.AllocatorInstance,local_228.ArrayNum,&local_228.ArrayMax);
  }
  if ((this->_padding_ == 0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("PerceptionSystemInstance",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\Perception\\AISense.cpp"
                          ,0x40,L""), bVar21)) {
    pcVar13 = (code *)swi(3);
    fVar49 = (float)(*pcVar13)();
    return fVar49;
  }
  local_188 = (TMapBase<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener,0>_>
               *)(this->_padding_ + 0x38);
  local_200 = 0;
  fVar49 = 0.0;
  local_270 = 0;
  local_204 = 0;
  iVar38 = 0;
  iVar41 = 0;
  if (0 < (this->SightQueriesOutOfRange).ArrayNum + (this->SightQueriesInRange).ArrayNum) {
    do {
      uVar10 = local_200;
      iVar38 = local_270;
      local_278 = iVar41 + 1;
      if ((((local_278 % this->MinQueriesPerTimeSliceCheck == 0) &&
           (QueryPerformanceCounter(&local_158),
           dVar14 < (double)local_158.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar18)) ||
          (this->MaxTracesPerTick <= local_248)) || (this->MaxAsyncTracesPerTick <= iVar48)) break;
      if (((int)uVar10 < 0) || ((this->SightQueriesInRange).ArrayNum <= (int)uVar10)) {
        local_274 = 0xffffffff;
        pFVar42 = (FAISightQuery *)0x0;
      }
      else {
        uVar37 = 0;
        if ((int)uVar10 < (this->SightQueriesInRange).ArrayNum) {
          uVar37 = ~uVar10 >> 0x1f;
        }
        if ((uVar37 == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar21)) {
          pcVar13 = (code *)swi(3);
          fVar49 = (float)(*pcVar13)();
          return fVar49;
        }
        pFVar42 = (FAISightQuery *)
                  ((this->SightQueriesInRange).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x38
                  );
        local_274 = uVar10;
      }
      if ((iVar38 < 0) || (iVar48 = (this->SightQueriesOutOfRange).ArrayNum, iVar48 <= iVar38)) {
        uVar37 = 0xffffffff;
LAB_146fdcfd6:
        pFVar40 = (FAISightQuery *)0x0;
      }
      else {
        uVar37 = (this->NextOutOfRangeIndex + iVar38) % iVar48;
        if (uVar37 == 0xffffffff) goto LAB_146fdcfd6;
        uVar24 = 0;
        if ((int)uVar37 < iVar48) {
          uVar24 = ~uVar37 >> 0x1f;
        }
        if ((uVar24 == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar21)) {
          pcVar13 = (code *)swi(3);
          fVar49 = (float)(*pcVar13)();
          return fVar49;
        }
        pFVar40 = (FAISightQuery *)
                  ((this->SightQueriesOutOfRange).AllocatorInstance.Data +
                  (longlong)(int)uVar37 * 0x38);
        if (pFVar40 != (FAISightQuery *)0x0) {
          uVar34 = GFrameCounter - ((ulonglong)pFVar40->field6_0x30 >> 1);
          if ((longlong)uVar34 < 0) {
            pFVar40->Score = (float)uVar34 + pFVar40->Importance;
          }
          else {
            pFVar40->Score = (float)(longlong)uVar34 + pFVar40->Importance;
          }
        }
      }
      if ((pFVar42 == (FAISightQuery *)0x0) || (pFVar40 == (FAISightQuery *)0x0)) {
        bVar21 = pFVar40 == (FAISightQuery *)0x0;
      }
      else {
        bVar21 = pFVar40->Score < pFVar42->Score;
      }
      if (bVar21 != false) {
        pFVar40 = pFVar42;
      }
      if ((pFVar40 == (FAISightQuery *)0x0) &&
         (bVar22 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<1976862326954918241>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\Perception\\AISense_Sight.cpp"
                              ,0x161,"SightQuery"), bVar22)) {
        pcVar13 = (code *)swi(3);
        fVar49 = (float)(*pcVar13)();
        return fVar49;
      }
      if (bVar21 == false) {
        local_270 = local_270 + 1;
      }
      else {
        local_200 = uVar10 + 1;
      }
      FVar29 = (FName)TMapBase<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener,0>_>
                      ::FindChecked(local_188,&pFVar40->ObserverId);
      local_260 = FVar29;
      local_218 = TMapBase<unsigned_int,FAISightTarget,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FAISightTarget,0>_>
                  ::FindChecked((TMapBase<unsigned_int,FAISightTarget,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FAISightTarget,0>_>
                                 *)&this->ObservedTargets,pFVar40->TargetId);
      pAVar30 = (AActor *)FWeakObjectPtr::Get((FWeakObjectPtr *)local_218);
      local_1d8 = pAVar30;
      this_02 = (UAIPerceptionComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)FVar29);
      if ((this_02 == (UAIPerceptionComponent *)0x0) &&
         (bVar22 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<1976862326954918254>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\Perception\\AISense_Sight.cpp"
                              ,0x16e,"ListenerPtr"), bVar22)) {
        pcVar13 = (code *)swi(3);
        fVar49 = (float)(*pcVar13)();
        return fVar49;
      }
      if ((pAVar30 == (AActor *)0x0) || (this_02 == (UAIPerceptionComponent *)0x0)) {
        local_230.OpType = Remove;
        local_230.Index = uVar37;
        if (bVar21 != false) {
          local_230.Index = local_274;
        }
        local_230.bInRange = bVar21;
        if (((local_290.Data <= &local_230) &&
            (&local_230 < (FQueryOperation *)(local_290.Data + (longlong)local_288._4_4_ * 8))) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar21)) {
          pcVar13 = (code *)swi(3);
          fVar49 = (float)(*pcVar13)();
          return fVar49;
        }
        iVar48 = (int)local_288;
        if ((int)local_288 == local_288._4_4_) {
          iVar48 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x408,&local_290,(int *)((longlong)&local_288 + 4));
        }
        local_288 = CONCAT44(local_288._4_4_,iVar48 + 1);
        *(ulonglong *)(local_290.Data + (longlong)iVar48 * 8) =
             CONCAT44(local_230.Index,
                      CONCAT22(local_230._2_2_,CONCAT11(local_230.OpType,local_230.bInRange)));
        if (pAVar30 == (AActor *)0x0) {
          TArray<unsigned_int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<unsigned_int_const_&>
                    (&local_228,&pFVar40->TargetId);
        }
      }
      else {
        local_268 = (FName)TMapBase<FAIGenericID<FPerceptionListenerCounter>,UAISense_Sight::FDigestedSightProperties,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,UAISense_Sight::FDigestedSightProperties,0>_>
                           ::FindChecked((TMapBase<FAIGenericID<FPerceptionListenerCounter>,UAISense_Sight::FDigestedSightProperties,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,UAISense_Sight::FDigestedSightProperties,0>_>
                                          *)&this->DigestedProperties,&pFVar40->ObserverId);
        pAVar31 = UAIPerceptionComponent::GetBodyActor(this_02);
        pAVar30 = local_1d8;
        local_210 = 0;
        local_20c = 0;
        local_130._s_0.Z = 0.0;
        local_208 = 1.0;
        local_130._s_0.X = 0.0;
        local_130._s_0.Y = 0.0;
        EVar25 = ComputeVisibility(this,local_180,pFVar40,(FPerceptionListener *)local_260,pAVar31,
                                   local_218,local_1d8,(FDigestedSightProperties *)local_268,
                                   &local_208,(TVector<double> *)&local_130._s_0,&local_210,
                                   &local_20c);
        local_248 = local_248 + local_210;
        local_244 = local_244 + local_20c;
        local_218 = (FAISightTarget *)CONCAT44(local_218._4_4_,EVar25);
        if (EVar25 == Pending) {
          local_240.OpType = MoveToPending;
          local_240.Index = uVar37;
          if (bVar21 != false) {
            local_240.Index = local_274;
          }
          local_240.bInRange = bVar21;
          EVar19 = MoveToPending;
          if (((local_290.Data <= &local_240) &&
              (EVar19 = local_240.OpType,
              &local_240 < (FQueryOperation *)(local_290.Data + (longlong)local_288._4_4_ * 8))) &&
             (local_240.OpType = MoveToPending,
             bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), EVar19 = local_240.OpType, bVar21)) {
            pcVar13 = (code *)swi(3);
            fVar49 = (float)(*pcVar13)();
            return fVar49;
          }
          local_240.OpType = EVar19;
          iVar48 = (int)local_288;
          if ((int)local_288 == local_288._4_4_) {
            iVar48 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x408,&local_290,(int *)((longlong)&local_288 + 4));
          }
          local_288 = CONCAT44(local_288._4_4_,iVar48 + 1);
          *(ulonglong *)(local_290.Data + (longlong)iVar48 * 8) =
               CONCAT44(local_240.Index,
                        CONCAT22(local_240._2_2_,CONCAT11(local_240.OpType,local_240.bInRange)));
        }
        else {
          if ((1 < (byte)LogAIPerception._0_1_) && (NotVisible < EVar25)) {
            local_178 = (FName)pAVar30->_padding_;
            ::FName::ToString(&local_178,&local_140);
            if (pAVar31 == (AActor *)0x0) {
              ::FString::FString(&local_198,L"None");
            }
            else {
              local_170 = (FName)pAVar31->_padding_;
              ::FName::ToString(&local_170,&local_198);
            }
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAIPerception);
            if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_198.Data.AllocatorInstance.Data);
            }
            if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_140.Data.AllocatorInstance.Data);
            }
            EVar25 = (EVisibilityResult)local_218;
          }
          FVar29 = local_260;
          bVar8 = *(byte *)&pFVar40->field6_0x30;
          pUVar11 = (local_1d8->RootComponent).field0_0x0.DebugPtr;
          local_100._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          uVar54 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
          uVar55 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
          uVar56 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
          uVar57 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
          if (pUVar11 != (USceneComponent *)0x0) {
            local_c0 = (pUVar11->ComponentToWorld).Translation.ZW.m128d_f64[0];
            local_d0 = *(undefined4 *)(pUVar11->ComponentToWorld).Translation.XY.m128d_f64;
            uStack_cc = *(undefined4 *)
                         ((longlong)(pUVar11->ComponentToWorld).Translation.XY.m128d_f64 + 4);
            uStack_c8 = *(undefined4 *)((pUVar11->ComponentToWorld).Translation.XY.m128d_f64 + 1);
            uStack_c4 = *(undefined4 *)
                         ((longlong)(pUVar11->ComponentToWorld).Translation.XY.m128d_f64 + 0xc);
            local_100._s_0.Z = local_c0;
            uVar54 = local_d0;
            uVar55 = uStack_cc;
            uVar56 = uStack_c8;
            uVar57 = uStack_c4;
          }
          local_100._0_4_ = uVar54;
          local_100._4_4_ = uVar55;
          local_100._8_4_ = uVar56;
          local_100._12_4_ = uVar57;
          local_d8 = local_100._s_0.Z;
          UpdateQueryVisibilityStatus
                    (this,pFVar40,(FPerceptionListener *)local_260,EVar25 == Visible,
                     (TVector<double> *)&local_130._s_0,local_208,local_1d8,
                     (TVector<double> *)&local_100._s_0);
          if ((bVar8 & 1) == 0) {
            pfVar32 = (float *)((longlong)local_268 + 4);
          }
          else {
            pfVar32 = (float *)((longlong)local_268 + 0xc);
          }
          dVar50 = local_d8 - *(double *)((longlong)FVar29 + 0x20);
          dVar52 = (double)CONCAT44(uVar55,uVar54) -
                   (((TVector<double> *)((longlong)FVar29 + 0x10))->field0_0x0)._s_0.X;
          dVar53 = (double)CONCAT44(uVar57,uVar56) - *(double *)((longlong)FVar29 + 0x18);
          fVar51 = this->MaxQueryImportance;
          dVar53 = dVar53 * dVar53 + dVar52 * dVar52 + dVar50 * dVar50;
          if ((double)this->HighImportanceDistanceSquare < dVar53) {
            dVar50 = (double)fVar51;
            dVar53 = (double)((this->SightLimitQueryImportance - fVar51) / *pfVar32) * dVar53 +
                     dVar50;
            if (dVar50 <= dVar53) {
              dVar53 = dVar50;
            }
            if (dVar53 <= 0.0) {
              dVar53 = 0.0;
            }
            fVar51 = (float)dVar53;
          }
          pFVar40->Importance = fVar51;
          if (bVar21 != 0.0 < fVar51) {
            local_238.OpType = SwapList;
            local_238.Index = uVar37;
            if (bVar21 != false) {
              local_238.Index = local_274;
            }
            local_238.bInRange = bVar21;
            if (((local_290.Data <= &local_238) &&
                (&local_238 < (FQueryOperation *)(local_290.Data + (longlong)local_288._4_4_ * 8)))
               && (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar21)) {
              pcVar13 = (code *)swi(3);
              fVar49 = (float)(*pcVar13)();
              return fVar49;
            }
            iVar48 = (int)local_288;
            if ((int)local_288 == local_288._4_4_) {
              iVar48 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x408,&local_290,(int *)((longlong)&local_288 + 4));
            }
            local_288 = CONCAT44(local_288._4_4_,iVar48 + 1);
            *(ulonglong *)(local_290.Data + (longlong)iVar48 * 8) =
                 CONCAT44(local_238.Index,
                          CONCAT22(local_238._2_2_,CONCAT11(local_238.OpType,local_238.bInRange)));
          }
          pFVar40->field6_0x30 =
               (FAISightQuery_u_48)
               ((ulonglong)(*(uint *)&pFVar40->field6_0x30 & 1) | GFrameCounter * 2);
        }
      }
      local_204 = local_204 + 1;
      iVar38 = local_270;
      iVar41 = local_278;
      iVar48 = local_244;
    } while (local_204 <
             (this->SightQueriesOutOfRange).ArrayNum + (this->SightQueriesInRange).ArrayNum);
  }
  iVar48 = (this->SightQueriesOutOfRange).ArrayNum;
  if (iVar48 < 1) {
    iVar48 = 0;
  }
  else {
    iVar48 = (this->NextOutOfRangeIndex + iVar38) % iVar48;
  }
  this->NextOutOfRangeIndex = iVar48;
  if (6 < (byte)LogAIPerception._0_1_) {
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogAIPerception);
  }
  if (0 < (int)local_288) {
    FVar33 = StatPtr_STAT_AI_Sense_Sight_QueryOperations;
    if (StatPtr_STAT_AI_Sense_Sight_QueryOperations ==
        (FThreadSafeStaticStat<FStat_STAT_AI_Sense_Sight_QueryOperations>)0x0) {
      pFVar26 = ::FName::FName(&local_108,"STAT_AI_Sense_Sight_QueryOperations");
      FVar33 = (FThreadSafeStaticStat<FStat_STAT_AI_Sense_Sight_QueryOperations>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_Sense_Sight_QueryOperations,
                          *pFVar26,L"Perception Sense: Sight, Query operations","STATGROUP_AI",
                          "STATCAT_Advanced",L"AI",true,true,ST_int64,true,false,MCR_Invalid);
    }
    FVar45 = *(FName *)FVar33;
    bVar21 = false;
    bVar15 = false;
    local_1a8.ComparisonIndex.Value = 0;
    local_1a8.Number = 0;
    bVar22 = false;
    bVar23 = false;
    if ((FVar45.ComparisonIndex.Value.Value == 0) && (FVar45.Number == 0)) {
LAB_146fdd7e2:
      bVar15 = bVar23;
      bVar21 = bVar22;
      bVar22 = false;
      local_260 = local_1a8;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_1f4.Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_1f4._s_0,(char *)*(FName *)((longlong)FVar33 + 0x10));
        bVar21 = false;
        bVar15 = true;
        bVar22 = false;
        bVar23 = true;
        if (-1 < CpuChannel->Enabled) {
          local_1f0.ComparisonIndex.Value = FVar45.ComparisonIndex.Value.Value;
          local_1f0.Number = FVar45.Number;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_1f0,(wchar_t *)*(FName *)((longlong)FVar33 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\Perception\\AISense_Sight.cpp"
                     ,0x1ad);
          bVar21 = true;
          bVar15 = true;
          bVar22 = true;
          bVar23 = true;
        }
      }
      if (FThreadStats::bPrimaryEnable == false) goto LAB_146fdd7e2;
      local_260 = FVar45;
      FThreadStats::AddMessage(FVar45,CycleScopeStart);
      bVar22 = true;
    }
    AlgoImpl::
    IntroSortInternal<_UAISense_Sight::Update_::__l2::FQueryOperation,int,FIdentityFunctor,TDereferenceWrapper<_UAISense_Sight::Update_::__l2::FQueryOperation,_UAISense_Sight::Update_::__l79::<lambda_2>_>_>
              ((FQueryOperation *)local_290.Data,(int)local_288,local_27b[0],(<lambda_2> *)local_27b
              );
    pTVar4 = &this->SightQueriesInRange;
    iVar48 = (int)local_288;
    local_258.Data = (FScriptContainerElement *)0x0;
    local_250 = 0;
    pFVar47 = local_290.Data + 4;
    pFVar6 = (FQueryOperation *)(local_290.Data + (longlong)(int)local_288 * 8);
    while( true ) {
      if ((int)local_288 != iVar48) {
        local_27f = 0;
        `TCheckedPointerIterator<`UAISense_Sight::Update'::__l2::FQueryOperation,int,0>::operator!='
        ::__l2::<lambda_1>::operator()(&local_27f);
      }
      FVar45 = local_1e8;
      FVar44.Data = local_258.Data;
      FVar29 = local_260;
      pFVar2 = (FQueryOperation *)(pFVar47 + -4);
      if (pFVar2 == pFVar6) break;
      FVar9 = pFVar47[-3];
      if (FVar9 != (FScriptContainerElement)0x0) {
        if (FVar9 == (FScriptContainerElement)0x1) {
          uVar10 = *(uint *)pFVar47;
          if (pFVar2->bInRange == false) {
            uVar37 = 0;
            if ((int)uVar10 < (this->SightQueriesOutOfRange).ArrayNum) {
              uVar37 = ~uVar10 >> 0x1f;
            }
            if ((uVar37 == 0) &&
               (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar23)) {
              pcVar13 = (code *)swi(3);
              fVar49 = (float)(*pcVar13)();
              return fVar49;
            }
            pFVar42 = (FAISightQuery *)(pTVar4->AllocatorInstance).Data;
            pFVar40 = (FAISightQuery *)
                      ((this->SightQueriesOutOfRange).AllocatorInstance.Data +
                      (longlong)(int)uVar10 * 0x38);
            if (((pFVar42 <= pFVar40) && (pFVar40 < pFVar42 + (this->SightQueriesInRange).ArrayMax))
               && (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar23)) {
              pcVar13 = (code *)swi(3);
              fVar49 = (float)(*pcVar13)();
              return fVar49;
            }
            iVar38 = (this->SightQueriesInRange).ArrayNum;
            piVar1 = &(this->SightQueriesInRange).ArrayMax;
            if (iVar38 == *piVar1) {
              iVar38 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x838,&pTVar4->AllocatorInstance,piVar1);
            }
            (this->SightQueriesInRange).ArrayNum = iVar38 + 1;
            FVar44.Data = (pTVar4->AllocatorInstance).Data;
          }
          else {
            uVar37 = 0;
            if ((int)uVar10 < (this->SightQueriesInRange).ArrayNum) {
              uVar37 = ~uVar10 >> 0x1f;
            }
            if ((uVar37 == 0) &&
               (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar23)) {
              pcVar13 = (code *)swi(3);
              fVar49 = (float)(*pcVar13)();
              return fVar49;
            }
            pFVar40 = (FAISightQuery *)
                      ((pTVar4->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x38);
            if (((local_258.Data <= pFVar40) &&
                (pFVar40 < (FAISightQuery *)(local_258.Data + (longlong)local_250._4_4_ * 0x38))) &&
               (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar23)) {
              pcVar13 = (code *)swi(3);
              fVar49 = (float)(*pcVar13)();
              return fVar49;
            }
            if ((int)local_250 == local_250._4_4_) {
              iVar38 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x838,&local_258,(int *)((longlong)&local_250 + 4));
              local_250 = CONCAT44(local_250._4_4_,iVar38);
            }
            iVar38 = (int)local_250;
            local_250 = CONCAT44(local_250._4_4_,(int)local_250 + 1);
            FVar44.Data = local_258.Data;
          }
        }
        else {
          if (FVar9 != (FScriptContainerElement)0x2) {
            bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("false",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\Perception\\AISense_Sight.cpp"
                                ,0x1d3,L"");
            if (bVar23) {
              pcVar13 = (code *)swi(3);
              fVar49 = (float)(*pcVar13)();
              return fVar49;
            }
            goto LAB_146fddbdc;
          }
          uVar10 = *(uint *)pFVar47;
          pTVar5 = &this->SightQueriesPending;
          if (pFVar2->bInRange == false) {
            uVar37 = 0;
            if ((int)uVar10 < (this->SightQueriesOutOfRange).ArrayNum) {
              uVar37 = ~uVar10 >> 0x1f;
            }
            if ((uVar37 == 0) &&
               (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar23)) {
              pcVar13 = (code *)swi(3);
              fVar49 = (float)(*pcVar13)();
              return fVar49;
            }
            pFVar40 = (FAISightQuery *)
                      ((this->SightQueriesOutOfRange).AllocatorInstance.Data +
                      (longlong)(int)uVar10 * 0x38);
          }
          else {
            uVar37 = 0;
            if ((int)uVar10 < (this->SightQueriesInRange).ArrayNum) {
              uVar37 = ~uVar10 >> 0x1f;
            }
            if ((uVar37 == 0) &&
               (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar23)) {
              pcVar13 = (code *)swi(3);
              fVar49 = (float)(*pcVar13)();
              return fVar49;
            }
            pFVar40 = (FAISightQuery *)
                      ((pTVar4->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x38);
          }
          pFVar42 = (FAISightQuery *)(pTVar5->AllocatorInstance).Data;
          if (((pFVar42 <= pFVar40) && (pFVar40 < pFVar42 + (this->SightQueriesPending).ArrayMax))
             && (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar23)) {
            pcVar13 = (code *)swi(3);
            fVar49 = (float)(*pcVar13)();
            return fVar49;
          }
          iVar38 = (this->SightQueriesPending).ArrayNum;
          piVar1 = &(this->SightQueriesPending).ArrayMax;
          if (iVar38 == *piVar1) {
            iVar38 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x838,&pTVar5->AllocatorInstance,piVar1);
          }
          (this->SightQueriesPending).ArrayNum = iVar38 + 1;
          FVar44.Data = (pTVar5->AllocatorInstance).Data;
        }
        (((FAISightQuery *)((longlong)FVar44.Data + (longlong)iVar38 * 0x38))->ObserverId).Index =
             (pFVar40->ObserverId).Index;
        ((FAISightQuery *)((longlong)FVar44.Data + (longlong)iVar38 * 0x38))->TargetId =
             pFVar40->TargetId;
        ((FAISightQuery *)((longlong)FVar44.Data + (longlong)iVar38 * 0x38))->Score = pFVar40->Score
        ;
        ((FAISightQuery *)((longlong)FVar44.Data + (longlong)iVar38 * 0x38))->Importance =
             pFVar40->Importance;
        dVar14 = (pFVar40->LastSeenLocation).field0_0x0._s_0.Y;
        (((FAISightQuery *)((longlong)FVar44.Data + (longlong)iVar38 * 0x38))->LastSeenLocation).
        field0_0x0._s_0.X = (pFVar40->LastSeenLocation).field0_0x0._s_0.X;
        (((FAISightQuery *)((longlong)FVar44.Data + (longlong)iVar38 * 0x38))->LastSeenLocation).
        field0_0x0._s_0.Y = dVar14;
        (((FAISightQuery *)((longlong)FVar44.Data + (longlong)iVar38 * 0x38))->LastSeenLocation).
        field0_0x0._s_0.Z = (pFVar40->LastSeenLocation).field0_0x0._s_0.Z;
        ((FAISightQuery *)((longlong)FVar44.Data + (longlong)iVar38 * 0x38))->UserData =
             pFVar40->UserData;
        ((FAISightQuery *)((longlong)FVar44.Data + (longlong)iVar38 * 0x38))->field6_0x30 =
             pFVar40->field6_0x30;
        ((FAISightQuery *)((longlong)FVar44.Data + (longlong)iVar38 * 0x38))->field6_0x30 =
             pFVar40->field6_0x30;
      }
LAB_146fddbdc:
      uVar10 = *(uint *)pFVar47;
      uVar37 = ~uVar10;
      if (((FQueryOperation *)(pFVar47 + -4))->bInRange == false) {
        uVar24 = 0;
        if ((int)uVar10 < (this->SightQueriesOutOfRange).ArrayNum) {
          uVar24 = uVar37 >> 0x1f;
        }
        if ((uVar24 == 0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar23)) {
          pcVar13 = (code *)swi(3);
          fVar49 = (float)(*pcVar13)();
          return fVar49;
        }
        pFVar35 = (this->SightQueriesOutOfRange).AllocatorInstance.Data +
                  (longlong)(int)uVar10 * 0x38;
        iVar38 = (this->SightQueriesOutOfRange).ArrayNum + uVar37;
        if (iVar38 != 0) {
          memmove(pFVar35,pFVar35 + 0x38,(longlong)iVar38 * 0x38);
        }
        piVar1 = &(this->SightQueriesOutOfRange).ArrayNum;
        *piVar1 = *piVar1 + -1;
        if ((int)*(uint *)pFVar47 < this->NextOutOfRangeIndex) {
          this->NextOutOfRangeIndex = this->NextOutOfRangeIndex + -1;
        }
        pFVar47 = pFVar47 + 8;
      }
      else {
        uVar24 = 0;
        if ((int)uVar10 < (this->SightQueriesInRange).ArrayNum) {
          uVar24 = uVar37 >> 0x1f;
        }
        if ((uVar24 == 0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar23)) {
          pcVar13 = (code *)swi(3);
          fVar49 = (float)(*pcVar13)();
          return fVar49;
        }
        iVar41 = (this->SightQueriesInRange).ArrayNum;
        pFVar35 = (pTVar4->AllocatorInstance).Data;
        iVar38 = iVar41 + uVar37;
        if (1 < iVar38) {
          iVar38 = 1;
        }
        if (iVar38 != 0) {
          memmove(pFVar35 + (longlong)(int)uVar10 * 0x38,
                  pFVar35 + (longlong)(iVar41 - iVar38) * 0x38,(longlong)iVar38 * 0x38);
        }
        piVar1 = &(this->SightQueriesInRange).ArrayNum;
        *piVar1 = *piVar1 + -1;
        pFVar47 = pFVar47 + 8;
      }
    }
    iVar48 = (int)local_250;
    lVar46 = (longlong)(int)local_250;
    if (0 < (int)local_250) {
      local_278 = this->NextOutOfRangeIndex;
      lVar43 = (longlong)local_278;
      if (((FAISightQuery *)local_258.Data == (FAISightQuery *)0x0) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("Ptr != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x793,L""), bVar23)) {
        pcVar13 = (code *)swi(3);
        fVar49 = (float)(*pcVar13)();
        return fVar49;
      }
      iVar38 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x38,8,iVar48,&(this->SightQueriesOutOfRange).AllocatorInstance,
                          &(this->SightQueriesOutOfRange).ArrayNum,
                          &(this->SightQueriesOutOfRange).ArrayMax);
      pFVar47 = (this->SightQueriesOutOfRange).AllocatorInstance.Data + lVar43 * 0x38;
      memmove(pFVar47 + lVar46 * 0x38,pFVar47,(longlong)(iVar38 - local_278) * 0x38);
      ConstructItems<FAISightQuery,FAISightQuery,int>
                ((this->SightQueriesOutOfRange).AllocatorInstance.Data + lVar43 * 0x38,
                 (FAISightQuery *)FVar44.Data,iVar48);
      this->NextOutOfRangeIndex = this->NextOutOfRangeIndex + (int)local_250;
    }
    if (0 < local_228.ArrayNum) {
      iVar48 = local_228.ArrayNum;
      if (FVisualLogger::bIsRecording != 0) {
        FVisualLogger::CategorizedLogfImpl
                  ((UObject *)this->_padding_,(FName *)&LogAIPerception.field_0x4,Error,
                   L"Invalid sight targets found during UAISense_Sight::Update call");
        iVar48 = local_228.ArrayNum;
      }
      pFVar47 = local_228.AllocatorInstance.Data + (longlong)iVar48 * 4;
      FVar44.Data = local_228.AllocatorInstance.Data;
      iVar38 = iVar48;
      while( true ) {
        if (iVar38 != iVar48) {
          local_27e = 0;
          `TCheckedPointerIterator<unsigned_int,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_27e);
        }
        if (FVar44.Data == pFVar47) break;
        local_b8._0_8_ = 0;
        local_90 = (longlong *)0x0;
        RemoveAllQueriesToTarget_Internal
                  (this,(uint *)FVar44.Data,
                   (TFunction<void___cdecl(FAISightQuery_const_&)> *)local_b8);
        if (local_b8._0_8_ != 0) {
          plVar36 = (longlong *)(local_b8 + 0x10);
          if (local_90 != (longlong *)0x0) {
            plVar36 = local_90;
          }
          (**(code **)(*plVar36 + 0x10))();
        }
        if (*(int *)&(this->ObservedTargets).field_0x8 ==
            *(int *)&(this->ObservedTargets).field_0x34) {
LAB_146fddedf:
          FVar44.Data = FVar44.Data + 4;
          iVar38 = local_228.ArrayNum;
        }
        else {
          puVar12 = *(undefined1 **)&(this->ObservedTargets).field_0x40;
          puVar39 = &(this->ObservedTargets).field_0x38;
          if (puVar12 != (undefined1 *)0x0) {
            puVar39 = puVar12;
          }
          iVar38 = *(int *)(puVar39 +
                           ((longlong)*(int *)&(this->ObservedTargets).field_0x48 - 1U &
                           (longlong)(int)*(uint *)FVar44.Data) * 4);
          if (iVar38 == -1) goto LAB_146fddedf;
          do {
            if (*(uint *)((longlong)iVar38 * 0x38 + *(longlong *)&this->ObservedTargets) ==
                *(uint *)FVar44.Data) {
              TSet<TTuple<unsigned_int,FAISightTarget>,TDefaultMapHashableKeyFuncs<unsigned_int,FAISightTarget,0>,FDefaultSetAllocator>
              ::RemoveByIndex((TSet<TTuple<unsigned_int,FAISightTarget>,TDefaultMapHashableKeyFuncs<unsigned_int,FAISightTarget,0>,FDefaultSetAllocator>
                               *)&this->ObservedTargets,iVar38);
              goto LAB_146fddedf;
            }
            iVar38 = *(int *)((longlong)iVar38 * 0x38 + 0x30 + *(longlong *)&this->ObservedTargets);
          } while (iVar38 != -1);
          FVar44.Data = FVar44.Data + 4;
          iVar38 = local_228.ArrayNum;
        }
      }
      TSet<TTuple<unsigned_int,FAISightTarget>,TDefaultMapHashableKeyFuncs<unsigned_int,FAISightTarget,0>,FDefaultSetAllocator>
      ::Compact((TSet<TTuple<unsigned_int,FAISightTarget>,TDefaultMapHashableKeyFuncs<unsigned_int,FAISightTarget,0>,FDefaultSetAllocator>
                 *)&this->ObservedTargets);
    }
    if ((FAISightQuery *)local_258.Data != (FAISightQuery *)0x0) {
      FMemory::Free(local_258.Data);
    }
    if (bVar15) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar21) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (bVar22) {
      FThreadStats::AddMessage(FVar29,CycleScopeEnd);
    }
  }
  if (local_228.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_228.AllocatorInstance.Data);
  }
  if ((FQueryOperation *)local_290.Data != (FQueryOperation *)0x0) {
    FMemory::Free(local_290.Data);
  }
  LOCK();
  pFVar3 = &this->QueriesListAccessDetector;
  FVar7 = *pFVar3;
  *pFVar3 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar3 + -0x100000);
  UNLOCK();
  if (((FVar7 != (FRWFallbackSafeAccessDetectorDefinition)0x100000) &&
      (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                          ,0x7d,
                          L"Another thread asked to have a read or write access during this write access"
                         ), bVar21)) {
    pcVar13 = (code *)swi(3);
    fVar49 = (float)(*pcVar13)();
    return fVar49;
  }
LAB_146fddf94:
  if (bVar17) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar16) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar20) {
    FThreadStats::AddMessage(FVar45,CycleScopeEnd);
  }
  return fVar49;
}

// UpdateQueryVisibilityStatus @ 146fe2aa0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UAISense_Sight::UpdateQueryVisibilityStatus
          (UAISense_Sight *this,FAISightQuery *param_1,FPerceptionListener *param_2,bool param_3,
          TVector<double> *param_4,float param_5,AActor *param_6,TVector<double> *param_7)

{
  double dVar1;
  bool bVar2;
  undefined8 uVar3;
  TVector<double> *pTVar4;
  UAIPerceptionComponent *pUVar5;
  FAIStimulus local_70;
  
  if (param_3) {
    if (((__real_47efffffe0000000 == (param_4->field0_0x0)._s_0.X) &&
        (__real_47efffffe0000000 == (param_4->field0_0x0)._s_0.Y)) &&
       (__real_47efffffe0000000 == (param_4->field0_0x0)._s_0.Z)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    pTVar4 = param_4;
    if (!bVar2) {
      pTVar4 = &param_1->LastSeenLocation;
    }
    local_70.StimulusLocation.field0_0x0._s_0.X = (pTVar4->field0_0x0)._s_0.X;
    local_70.StimulusLocation.field0_0x0._s_0.Y = (pTVar4->field0_0x0)._s_0.Y;
    local_70.Age = 0.0;
    local_70.Strength = param_5;
    local_70.StimulusLocation.field0_0x0._s_0.Z = (pTVar4->field0_0x0)._s_0.Z;
    local_70.ExpirationAge = 3.4028235e+38;
    local_70.ReceiverLocation.field0_0x0._s_0.X = (param_2->CachedLocation).field0_0x0._s_0.X;
    local_70.ReceiverLocation.field0_0x0._s_0.Y = (param_2->CachedLocation).field0_0x0._s_0.Y;
    local_70.Tag.ComparisonIndex.Value = 0;
    local_70.Tag.Number = 0;
    local_70.ReceiverLocation.field0_0x0._s_0.Z = (param_2->CachedLocation).field0_0x0._s_0.Z;
    local_70.Type.Index = 0xff;
    ::FName::FName(&local_70.Type.Name,L"Invalid");
    local_70._84_4_ = ((char)this->_padding_ == '\x01') + 2 | local_70._84_4_ & 0xfffffffa;
    local_70.Type.Index = *(uchar *)((longlong)&this->_padding_ + 4);
    local_70.Type.Name = (FName)this->_padding_;
    param_2->bHasStimulusToProcess = 1;
    pUVar5 = (UAIPerceptionComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)param_2);
    UAIPerceptionComponent::RegisterStimulus(pUVar5,param_6,&local_70);
    param_1->field6_0x30 = (FAISightQuery_u_48)(param_1->field6_0x30 | 1);
    if (bVar2) {
      dVar1 = (param_4->field0_0x0)._s_0.Y;
      (param_1->LastSeenLocation).field0_0x0._s_0.X = (param_4->field0_0x0)._s_0.X;
      (param_1->LastSeenLocation).field0_0x0._s_0.Y = dVar1;
      (param_1->LastSeenLocation).field0_0x0._s_0.Z = (param_4->field0_0x0)._s_0.Z;
    }
  }
  else if ((*(byte *)&param_1->field6_0x30 & 1) != 0) {
    local_70.ExpirationAge = 3.4028235e+38;
    local_70.Age = 0.0;
    local_70.StimulusLocation.field0_0x0._s_0.X = (param_7->field0_0x0)._s_0.X;
    local_70.StimulusLocation.field0_0x0._s_0.Y = (param_7->field0_0x0)._s_0.Y;
    local_70.Strength = -1.0;
    local_70.StimulusLocation.field0_0x0._s_0.Z = (param_7->field0_0x0)._s_0.Z;
    local_70.ReceiverLocation.field0_0x0._s_0.X = (param_2->CachedLocation).field0_0x0._s_0.X;
    local_70.ReceiverLocation.field0_0x0._s_0.Y = (param_2->CachedLocation).field0_0x0._s_0.Y;
    local_70.Tag.ComparisonIndex.Value = 0;
    local_70.Tag.Number = 0;
    local_70.Type.Index = 0xff;
    local_70.ReceiverLocation.field0_0x0._s_0.Z = (param_2->CachedLocation).field0_0x0._s_0.Z;
    ::FName::FName(&local_70.Type.Name,L"Invalid");
    local_70.bExpired = 0;
    local_70.bSuccessfullySensed = 0;
    local_70.bWantsToNotifyOnlyOnValueChange = (char)this->_padding_ == '\x01';
    local_70.Type.Index = *(uchar *)((longlong)&this->_padding_ + 4);
    local_70.Type.Name = (FName)this->_padding_;
    param_2->bHasStimulusToProcess = 1;
    pUVar5 = (UAIPerceptionComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)param_2);
    UAIPerceptionComponent::RegisterStimulus(pUVar5,param_6,&local_70);
    param_1->field6_0x30 = (FAISightQuery_u_48)(param_1->field6_0x30 & 0xfffffffffffffffe);
    uVar3 = FAISystem::InvalidLocation.field0_0x0._s_0.Y;
    (param_1->LastSeenLocation).field0_0x0._s_0.X = FAISystem::InvalidLocation.field0_0x0._s_0.X;
    (param_1->LastSeenLocation).field0_0x0._s_0.Y = (double)uVar3;
    (param_1->LastSeenLocation).field0_0x0._s_0.Z = FAISystem::InvalidLocation.field0_0x0._s_0.Z;
  }
  return;
}

// UpdateQueryVisibilityStatus @ 146fe2cc0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UAISense_Sight::UpdateQueryVisibilityStatus
          (UAISense_Sight *this,FAISightQuery *param_1,FPerceptionListener *param_2,bool param_3,
          TVector<double> *param_4,float param_5,AActor *param_6,TVector<double> *param_7)

{
  double dVar1;
  bool bVar2;
  undefined8 uVar3;
  TVector<double> *pTVar4;
  UAIPerceptionComponent *pUVar5;
  FAIStimulus FStack_70;
  
  if (param_6 != (AActor *)0x0) {
    if (param_3) {
      if (((__real_47efffffe0000000 == (param_4->field0_0x0)._s_0.X) &&
          (__real_47efffffe0000000 == (param_4->field0_0x0)._s_0.Y)) &&
         (__real_47efffffe0000000 == (param_4->field0_0x0)._s_0.Z)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      pTVar4 = param_4;
      if (!bVar2) {
        pTVar4 = &param_1->LastSeenLocation;
      }
      FStack_70.StimulusLocation.field0_0x0._s_0.X = (pTVar4->field0_0x0)._s_0.X;
      FStack_70.StimulusLocation.field0_0x0._s_0.Y = (pTVar4->field0_0x0)._s_0.Y;
      FStack_70.Age = 0.0;
      FStack_70.Strength = param_5;
      FStack_70.StimulusLocation.field0_0x0._s_0.Z = (pTVar4->field0_0x0)._s_0.Z;
      FStack_70.ExpirationAge = 3.4028235e+38;
      FStack_70.ReceiverLocation.field0_0x0._s_0.X = (param_2->CachedLocation).field0_0x0._s_0.X;
      FStack_70.ReceiverLocation.field0_0x0._s_0.Y = (param_2->CachedLocation).field0_0x0._s_0.Y;
      FStack_70.Tag.ComparisonIndex.Value = 0;
      FStack_70.Tag.Number = 0;
      FStack_70.ReceiverLocation.field0_0x0._s_0.Z = (param_2->CachedLocation).field0_0x0._s_0.Z;
      FStack_70.Type.Index = 0xff;
      ::FName::FName(&FStack_70.Type.Name,L"Invalid");
      FStack_70._84_4_ = ((char)this->_padding_ == '\x01') + 2 | FStack_70._84_4_ & 0xfffffffa;
      FStack_70.Type.Index = *(uchar *)((longlong)&this->_padding_ + 4);
      FStack_70.Type.Name = (FName)this->_padding_;
      param_2->bHasStimulusToProcess = 1;
      pUVar5 = (UAIPerceptionComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)param_2);
      UAIPerceptionComponent::RegisterStimulus(pUVar5,param_6,&FStack_70);
      param_1->field6_0x30 = (FAISightQuery_u_48)(param_1->field6_0x30 | 1);
      if (bVar2) {
        dVar1 = (param_4->field0_0x0)._s_0.Y;
        (param_1->LastSeenLocation).field0_0x0._s_0.X = (param_4->field0_0x0)._s_0.X;
        (param_1->LastSeenLocation).field0_0x0._s_0.Y = dVar1;
        (param_1->LastSeenLocation).field0_0x0._s_0.Z = (param_4->field0_0x0)._s_0.Z;
      }
    }
    else if ((*(byte *)&param_1->field6_0x30 & 1) != 0) {
      FStack_70.ExpirationAge = 3.4028235e+38;
      FStack_70.Age = 0.0;
      FStack_70.StimulusLocation.field0_0x0._s_0.X = (param_7->field0_0x0)._s_0.X;
      FStack_70.StimulusLocation.field0_0x0._s_0.Y = (param_7->field0_0x0)._s_0.Y;
      FStack_70.Strength = -1.0;
      FStack_70.StimulusLocation.field0_0x0._s_0.Z = (param_7->field0_0x0)._s_0.Z;
      FStack_70.ReceiverLocation.field0_0x0._s_0.X = (param_2->CachedLocation).field0_0x0._s_0.X;
      FStack_70.ReceiverLocation.field0_0x0._s_0.Y = (param_2->CachedLocation).field0_0x0._s_0.Y;
      FStack_70.Tag.ComparisonIndex.Value = 0;
      FStack_70.Tag.Number = 0;
      FStack_70.Type.Index = 0xff;
      FStack_70.ReceiverLocation.field0_0x0._s_0.Z = (param_2->CachedLocation).field0_0x0._s_0.Z;
      ::FName::FName(&FStack_70.Type.Name,L"Invalid");
      FStack_70.bExpired = 0;
      FStack_70.bSuccessfullySensed = 0;
      FStack_70.bWantsToNotifyOnlyOnValueChange = (char)this->_padding_ == '\x01';
      FStack_70.Type.Index = *(uchar *)((longlong)&this->_padding_ + 4);
      FStack_70.Type.Name = (FName)this->_padding_;
      param_2->bHasStimulusToProcess = 1;
      pUVar5 = (UAIPerceptionComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)param_2);
      UAIPerceptionComponent::RegisterStimulus(pUVar5,param_6,&FStack_70);
      param_1->field6_0x30 = (FAISightQuery_u_48)(param_1->field6_0x30 & 0xfffffffffffffffe);
      uVar3 = FAISystem::InvalidLocation.field0_0x0._s_0.Y;
      (param_1->LastSeenLocation).field0_0x0._s_0.X = FAISystem::InvalidLocation.field0_0x0._s_0.X;
      (param_1->LastSeenLocation).field0_0x0._s_0.Y = (double)uVar3;
      (param_1->LastSeenLocation).field0_0x0._s_0.Z = FAISystem::InvalidLocation.field0_0x0._s_0.Z;
    }
    return;
  }
  return;
}

