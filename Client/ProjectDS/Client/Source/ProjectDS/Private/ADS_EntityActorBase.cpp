// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 53

// GetActor @ 14b48ca20

TWeakObjectPtr<AActor,FWeakObjectPtr> __thiscall
ADS_EntityActorBase::GetActor(ADS_EntityActorBase *this)

{
  longlong *plVar1;
  FWeakObjectPtr in_RDX;
  longlong *local_res8;
  
  plVar1 = &this[-1]._padding_;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (plVar1 != (longlong *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)plVar1);
  }
  *(undefined8 *)in_RDX = 0;
  local_res8 = plVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (plVar1 != (longlong *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)plVar1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RDX,(FObjectPtr)&local_res8);
  return (TWeakObjectPtr<AActor,FWeakObjectPtr>)in_RDX;
}

// GetEntitySpawnRange @ 14b48cba0

EDS_EntitySpawnRange __thiscall ADS_EntityActorBase::GetEntitySpawnRange(ADS_EntityActorBase *this)

{
  return None;
}

// StaticClass @ 14b48d750

UClass * __cdecl ADS_EntityActorBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_ADS_EntityActorBase.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_EntityActorBase",
               &Z_Registration_Info_UClass_ADS_EntityActorBase.InnerSingleton,
               StaticRegisterNativesADS_EntityActorBase,0x718,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ADS_EntityActorBase>,
               InternalVTableHelperCtorCaller<ADS_EntityActorBase>,aFStackX_8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADS_EntityActorBase.InnerSingleton;
}

// ADS_EntityActorBase @ 14b491e40

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

ADS_EntityActorBase * __thiscall
ADS_EntityActorBase::ADS_EntityActorBase(ADS_EntityActorBase *this,FVTableHelper *param_1)

{
  undefined8 local_res8;
  
  AActor::AActor((AActor *)this,param_1);
  FDS_EntityBase::FDS_EntityBase((FDS_EntityBase *)&this->_padding_);
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  *(undefined8 *)&this->OnTriggerOverlapDelegate = 0;
  this->_padding_ = (longlong)&_vftable__for__FDS_EntityBase__;
  *(undefined8 *)&(this->OnTriggerOverlapDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnTriggerOverlapDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->OnTriggerOverlapDelegate).field_0x18 = 2;
  (this->TrajectoryComponent).field0_0x0.DebugPtr = (UDS_CharacterTrajectoryComponent *)0x0;
  (this->AbilitySystemComponent).field0_0x0.DebugPtr = (UDS_AbilitySystemComponent *)0x0;
  (this->MovementComponent).field0_0x0.DebugPtr = (UDS_BasicMovementComponent *)0x0;
  (this->MovementCore).field0_0x0.DebugPtr = (UDS_MovementCore *)0x0;
  (this->CapsuleComponent).field0_0x0.DebugPtr = (UDS_CapsuleComponent *)0x0;
  (this->SyncRecvComponent).field0_0x0.DebugPtr = (UDS_SyncRecvComponent *)0x0;
  (this->TriggerCore).field0_0x0.DebugPtr = (UDS_TriggerCore *)0x0;
  (this->ColliderCore).field0_0x0.DebugPtr = (UDS_ColliderCore *)0x0;
  *(undefined8 *)&this->EntityMaterialInfoMap = 0;
  *(undefined8 *)&(this->EntityMaterialInfoMap).field_0x8 = 0;
  *(undefined8 *)&(this->EntityMaterialInfoMap).field_0x20 = 0;
  *(undefined4 *)&(this->EntityMaterialInfoMap).field_0x28 = 0;
  *(undefined4 *)&(this->EntityMaterialInfoMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->EntityMaterialInfoMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->EntityMaterialInfoMap).field_0x34 = 0;
  *(undefined8 *)&(this->EntityMaterialInfoMap).field_0x40 = 0;
  *(undefined4 *)&(this->EntityMaterialInfoMap).field_0x48 = 0;
  (this->DefaultMaterialList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DefaultMaterialList).ArrayNum = 0;
  (this->DefaultMaterialList).ArrayMax = 0;
  (this->GCResource).field0_0x0.DebugPtr = (UGeometryCollection *)0x0;
  (this->GCAsyncLoadHandle).Object = (FStreamableHandle *)0x0;
  (this->GCAsyncLoadHandle).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->GCActor).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&(this->GCActor).WeakPtr,(FObjectPtr)&local_res8);
  (this->TriggerOverlaps).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TriggerOverlaps).ArrayNum = 0;
  (this->TriggerOverlaps).ArrayMax = 0;
  (this->HiddenPolicyTimerHandle).Handle = 0;
  return this;
}

// ~ADS_EntityActorBase @ 14b493120

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall ADS_EntityActorBase::~ADS_EntityActorBase(ADS_EntityActorBase *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&_vftable__for__FDS_EntityBase__;
  pFVar1 = (this->TriggerOverlaps).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->GCAsyncLoadHandle).SharedReferenceCount.ReferenceController);
  pFVar1 = (this->DefaultMaterialList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->EntityMaterialInfoMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->EntityMaterialInfoMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_EntityMaterialType,FDS_EntityMaterialInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_EntityMaterialType,FDS_EntityMaterialInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->EntityMaterialInfoMap);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnTriggerOverlapDelegate).field_0x8,
             *(int *)&(this->OnTriggerOverlapDelegate).field_0x10);
  pvVar2 = *(void **)&(this->OnTriggerOverlapDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnTriggerOverlapDelegate);
  FDS_EntityBase::~FDS_EntityBase((FDS_EntityBase *)&this->_padding_);
  AActor::~AActor((AActor *)this);
  return;
}

// GetPartsSystemControl @ 14b494ce0

TWeakObjectPtr<UDS_PartsSystemControl,FWeakObjectPtr> __thiscall
ADS_EntityActorBase::GetPartsSystemControl(ADS_EntityActorBase *this)

{
  FWeakObjectPtr in_RDX;
  undefined8 local_res10 [3];
  
  *(undefined8 *)in_RDX = 0;
  local_res10[0] = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RDX,(FObjectPtr)local_res10);
  return (TWeakObjectPtr<UDS_PartsSystemControl,FWeakObjectPtr>)in_RDX;
}

// GetPrivateStaticClass @ 14b494d20

UClass * __cdecl ADS_EntityActorBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADS_EntityActorBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_EntityActorBase",
               &Z_Registration_Info_UClass_ADS_EntityActorBase.InnerSingleton,
               StaticRegisterNativesADS_EntityActorBase,0x718,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ADS_EntityActorBase>,
               InternalVTableHelperCtorCaller<ADS_EntityActorBase>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADS_EntityActorBase.InnerSingleton;
}

// StaticRegisterNativesADS_EntityActorBase @ 14b4957c0

void __cdecl ADS_EntityActorBase::StaticRegisterNativesADS_EntityActorBase(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_ADS_EntityActorBase_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execUpdateMaskValue @ 14b4967a0

void __cdecl
ADS_EntityActorBase::execUpdateMaskValue(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x768))(param_1,local_res8[0]);
  return;
}

// ADS_EntityActorBase @ 14bc29820

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

ADS_EntityActorBase * __thiscall
ADS_EntityActorBase::ADS_EntityActorBase(ADS_EntityActorBase *this,FObjectInitializer *param_1)

{
  FName FVar1;
  void *pvVar2;
  UClass *pUVar3;
  UDS_CapsuleComponent *pUVar4;
  FName *pFVar5;
  UDS_BasicMovementComponent *pUVar6;
  UDS_AbilitySystemComponent *pUVar7;
  ulonglong uVar8;
  FName local_res8;
  
  AActor::AActor((AActor *)this);
  FDS_EntityBase::FDS_EntityBase((FDS_EntityBase *)&this->_padding_);
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  *(undefined8 *)&this->OnTriggerOverlapDelegate = 0;
  this->_padding_ = (longlong)&_vftable__for__FDS_EntityBase__;
  *(undefined8 *)&(this->OnTriggerOverlapDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnTriggerOverlapDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->OnTriggerOverlapDelegate).field_0x18 = 2;
  (this->TrajectoryComponent).field0_0x0.DebugPtr = (UDS_CharacterTrajectoryComponent *)0x0;
  (this->AbilitySystemComponent).field0_0x0.DebugPtr = (UDS_AbilitySystemComponent *)0x0;
  (this->MovementComponent).field0_0x0.DebugPtr = (UDS_BasicMovementComponent *)0x0;
  (this->MovementCore).field0_0x0.DebugPtr = (UDS_MovementCore *)0x0;
  (this->CapsuleComponent).field0_0x0.DebugPtr = (UDS_CapsuleComponent *)0x0;
  (this->SyncRecvComponent).field0_0x0.DebugPtr = (UDS_SyncRecvComponent *)0x0;
  (this->TriggerCore).field0_0x0.DebugPtr = (UDS_TriggerCore *)0x0;
  (this->ColliderCore).field0_0x0.DebugPtr = (UDS_ColliderCore *)0x0;
  *(undefined8 *)&this->EntityMaterialInfoMap = 0;
  *(undefined8 *)&(this->EntityMaterialInfoMap).field_0x8 = 0;
  *(undefined8 *)&(this->EntityMaterialInfoMap).field_0x20 = 0;
  *(undefined4 *)&(this->EntityMaterialInfoMap).field_0x28 = 0;
  *(undefined4 *)&(this->EntityMaterialInfoMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->EntityMaterialInfoMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->EntityMaterialInfoMap).field_0x34 = 0;
  *(undefined8 *)&(this->EntityMaterialInfoMap).field_0x40 = 0;
  *(undefined4 *)&(this->EntityMaterialInfoMap).field_0x48 = 0;
  (this->DefaultMaterialList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DefaultMaterialList).ArrayNum = 0;
  (this->DefaultMaterialList).ArrayMax = 0;
  (this->GCResource).field0_0x0.DebugPtr = (UGeometryCollection *)0x0;
  (this->GCAsyncLoadHandle).Object = (FStreamableHandle *)0x0;
  (this->GCAsyncLoadHandle).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->GCActor).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  FWeakObjectPtr::operator=(&(this->GCActor).WeakPtr,(FObjectPtr)&local_res8);
  pvVar2 = ThreadLocalStoragePointer;
  uVar8 = (ulonglong)_tls_index;
  (this->TriggerOverlaps).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TriggerOverlaps).ArrayNum = 0;
  (this->TriggerOverlaps).ArrayMax = 0;
  (this->HiddenPolicyTimerHandle).Handle = 0;
  if (*(int *)(*(longlong *)((longlong)pvVar2 + uVar8 * 8) + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::CapsuleComponentName,L"CollisionCylinder");
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar1 = ::CapsuleComponentName;
  pUVar3 = Z_Construct_UClass_UDS_CapsuleComponent_NoRegister();
  pUVar4 = (UDS_CapsuleComponent *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar3,pUVar3,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 != (UDS_CapsuleComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  (this->CapsuleComponent).field0_0x0.DebugPtr = pUVar4;
  *(undefined4 *)&pUVar4->field_0x56c = 0x43480000;
  *(undefined4 *)&pUVar4->field_0x568 = 0x43480000;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  this->_padding_ = (longlong)(this->CapsuleComponent).field0_0x0;
  pFVar5 = ::FName::FName(&local_res8,"CharMoveComp");
  FVar1 = *pFVar5;
  pUVar3 = Z_Construct_UClass_UDS_BasicMovementComponent_NoRegister();
  pUVar6 = (UDS_BasicMovementComponent *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar3,pUVar3,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar6 != (UDS_BasicMovementComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  (this->MovementComponent).field0_0x0.DebugPtr = pUVar6;
  pFVar5 = ::FName::FName(&local_res8,"AbilitySystemComponent");
  FVar1 = *pFVar5;
  pUVar3 = Z_Construct_UClass_UDS_AbilitySystemComponent_NoRegister();
  pUVar7 = (UDS_AbilitySystemComponent *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar3,pUVar3,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar7 != (UDS_AbilitySystemComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  (this->AbilitySystemComponent).field0_0x0.DebugPtr = pUVar7;
  return this;
}

// AddHiddenPolicy @ 14bc2cf00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
ADS_EntityActorBase::AddHiddenPolicy
          (ADS_EntityActorBase *this,EDS_EntityHiddenPolicy *param_1,float param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  FTimerManager *pFVar3;
  FTimerData *pFVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  longlong *local_res8;
  FDelegateAllocation local_58;
  code *local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  this->_padding_ = this->_padding_ | *param_1;
  FDS_EntityBase::UpdateHiddenPolicy((FDS_EntityBase *)this);
  if (0.0 < param_2) {
    plVar1 = &this->_padding_;
    plVar2 = &this[-1]._padding_;
    if (this->_padding_ != 0) {
      pFVar3 = FDS_TimerManager::Get((UObject *)0x0);
      pFVar4 = FTimerManager::FindTimer(pFVar3,(FTimerHandle *)plVar1);
      if (pFVar4 != (FTimerData *)0x0) {
        FTimerManager::InternalClearTimer(pFVar3,(FTimerHandle)*plVar1);
      }
      *plVar1 = 0;
    }
    pFVar3 = FDS_TimerManager::Get((UObject *)0x0);
    uStack_40 = 0;
    local_48 = ExecuteHiddenPolicy;
    local_58.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_58.DelegateSize = 0;
    puVar5 = UE::Core::Private::DelegateAllocate(0x38,&local_58);
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &
                ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy__W4EDS_EntityHiddenPolicy___N__6B_
      ;
      puVar5[1] = *param_1;
      *(undefined1 *)(puVar5 + 2) = 0;
      uVar6 = FDelegateHandle::GenerateNewID();
      puVar5[3] = uVar6;
      *puVar5 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VADS_EntityActorBase____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy__W4EDS_EntityHiddenPolicy___N__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (plVar2 != (longlong *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)plVar2);
      }
      puVar5[4] = 0;
      local_res8 = plVar2;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (plVar2 != (longlong *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)plVar2);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar5 + 4),(FObjectPtr)&local_res8);
      puVar5[5] = local_48;
      puVar5[6] = CONCAT44(uStack_3c,uStack_40);
    }
    FTimerManager::SetTimer
              (pFVar3,(FTimerHandle *)&this->_padding_,
               (TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy> *)&local_58
               ,param_2,false,__real_bf800000);
    if ((local_58.DelegateSize != 0) &&
       (local_58.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_58.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_58,0,0,0x10);
      local_58.DelegateSize = 0;
    }
    if (local_58.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_58.DelegateAllocator);
    }
  }
  return;
}

// BeginPlay @ 14bc2dea0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ADS_EntityActorBase::BeginPlay(ADS_EntityActorBase *this)

{
  AActor::BeginPlay((AActor *)this);
                    /* WARNING: Could not recover jumptable at 0x00014bc2debd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x40))();
  return;
}

// ChangeMaterial @ 14bc30f90

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterSlotName": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_ResourceType": Some values do not have unique names */

void __thiscall
ADS_EntityActorBase::ChangeMaterial(ADS_EntityActorBase *this,UMaterialInterface *param_1)

{
  USceneComponent *pUVar1;
  bool bVar2;
  int iVar3;
  UObject *pUVar4;
  UWN_CS_CharacterPart *pUVar5;
  UClass *pUVar6;
  int iVar7;
  int iVar8;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res18;
  
  (**(code **)(this[-1]._padding_ + 0x760))();
  bVar2 = TWeakObjectPtr<UDS_PartsSystemControl,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_PartsSystemControl,FWeakObjectPtr> *)&local_res18,
                     (void *)0x0);
  if (bVar2) {
    (**(code **)(this->_padding_ + 0x80))(this);
    bVar2 = TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr> *)&local_res8,
                       (void *)0x0);
    if (!bVar2) {
      pUVar4 = FWeakObjectPtr::Get(&local_res8);
      iVar8 = (**(code **)(*(longlong *)pUVar4 + 0x810))(pUVar4);
      if ((iVar8 != 0) && (iVar3 = 0, 0 < iVar8)) {
        do {
          pUVar4 = FWeakObjectPtr::Get(&local_res8);
          (**(code **)(*(longlong *)pUVar4 + 0x6b8))(pUVar4,iVar3,param_1);
          iVar3 = iVar3 + 1;
        } while (iVar3 < iVar8);
        return;
      }
    }
  }
  else {
    pUVar4 = FWeakObjectPtr::Get(&local_res18);
    if (*(longlong *)(pUVar4 + 1) != 0) {
      iVar8 = 0;
      do {
        pUVar5 = UWN_CS_CharacterCore::GetPart
                           (*(UWN_CS_CharacterCore **)(pUVar4 + 1),(EWN_CS_CharacterSlotName)iVar8,
                            false);
        if ((pUVar5 != (UWN_CS_CharacterPart *)0x0) &&
           ((pUVar5->Component).field0_0x0.DebugPtr != (USceneComponent *)0x0)) {
          pUVar6 = Z_Construct_UClass_UMeshComponent_NoRegister();
          bVar2 = FObjectPtr::IsA((FObjectPtr *)&pUVar5->Component,pUVar6);
          if ((bVar2) &&
             (((pUVar1 = (pUVar5->Component).field0_0x0.DebugPtr, pUVar1 != (USceneComponent *)0x0
               && (iVar3 = (**(code **)(pUVar1->_padding_ + 0x810))(pUVar1), iVar3 != 0)) &&
              (iVar7 = 0, 0 < iVar3)))) {
            do {
              (**(code **)(pUVar1->_padding_ + 0x6b8))(pUVar1,iVar7);
              iVar7 = iVar7 + 1;
            } while (iVar7 < iVar3);
          }
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < 0x2f);
    }
  }
  return;
}

// ClearDestructionGC @ 14bc32610

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ADS_EntityActorBase::ClearDestructionGC(ADS_EntityActorBase *this)

{
  TSharedPtr<FStreamableHandle,1> *pTVar1;
  bool bVar2;
  AActor *this_00;
  FWeakObjectPtr local_res8;
  undefined8 local_res10;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  pTVar1 = &this->GCAsyncLoadHandle;
  (this->GCResource).field0_0x0.DebugPtr = (UGeometryCollection *)0x0;
  if (pTVar1->Object != (FStreamableHandle *)0x0) {
    FStreamableHandle::CancelHandle(pTVar1->Object);
    local_18 = 0;
    FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar1 != (TSharedPtr<FStreamableHandle,1> *)&local_18) {
      pTVar1->Object = (FStreamableHandle *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->GCAsyncLoadHandle).SharedReferenceCount,&FStack_10);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_10.ReferenceController);
  }
  bVar2 = TWeakObjectPtr<AGeometryCollectionActor,FWeakObjectPtr>::UEOpEquals
                    (&this->GCActor,(void *)0x0);
  if (!bVar2) {
    this_00 = (AActor *)FWeakObjectPtr::Get(&(this->GCActor).WeakPtr);
    AActor::Destroy(this_00,false,true);
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res10 = 0;
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
    (this->GCActor).WeakPtr = local_res8;
  }
  return;
}

// ClearEntityMaterialInfoMap @ 14bc326e0

void __thiscall ADS_EntityActorBase::ClearEntityMaterialInfoMap(ADS_EntityActorBase *this)

{
  undefined1 *puVar1;
  TMap<EDS_EntityMaterialType,FDS_EntityMaterialInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_EntityMaterialType,FDS_EntityMaterialInfo,0>_>
  *this_00;
  bool bVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  undefined8 local_98;
  FSharedReferencer<1> FStack_90;
  longlong *local_88;
  longlong lStack_80;
  undefined1 local_78 [16];
  int local_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  longlong *local_58;
  undefined1 auStack_50 [16];
  uint uStack_40;
  uint uStack_3c;
  int local_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  TMap<EDS_EntityMaterialType,FDS_EntityMaterialInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_EntityMaterialType,FDS_EntityMaterialInfo,0>_>
  *local_28;
  undefined2 local_20;
  
  this_00 = &this->EntityMaterialInfoMap;
  TSet<TTuple<enum_EDS_EntityMaterialType,FDS_EntityMaterialInfo>,TDefaultMapHashableKeyFuncs<enum_EDS_EntityMaterialType,FDS_EntityMaterialInfo,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            (&local_88,
             (TSet<TTuple<EDS_EntityMaterialType,FDS_EntityMaterialInfo>,TDefaultMapHashableKeyFuncs<EDS_EntityMaterialType,FDS_EntityMaterialInfo,0>,FDefaultSetAllocator>
              *)this_00);
  local_20 = 0;
  stack0xffffffffffffffb8 = local_78;
  local_58 = local_88;
  auStack_50._0_8_ = lStack_80;
  local_38 = local_68;
  uStack_34 = uStack_64;
  uStack_30 = uStack_60;
  uVar4 = local_78._8_8_ >> 0x20;
  local_28 = this_00;
  if (local_78._12_4_ < *(int *)(local_78._0_8_ + 0x18)) {
    do {
      lVar5 = (longlong)(int)uVar4 * 0x50 + *local_58;
      *(undefined8 *)(lVar5 + 0x18) = 0;
      *(undefined8 *)(lVar5 + 0x10) = 0;
      FUtf8String::Reset((FUtf8String *)(lVar5 + 0x20),0);
      if (*(FStreamableHandle **)(lVar5 + 0x30) != (FStreamableHandle *)0x0) {
        FStreamableHandle::CancelHandle(*(FStreamableHandle **)(lVar5 + 0x30));
        local_98 = 0;
        FStack_90.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        if ((undefined8 *)(lVar5 + 0x30) != &local_98) {
          *(undefined8 *)(lVar5 + 0x30) = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    ((FSharedReferencer<1> *)(lVar5 + 0x38),&FStack_90);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FStack_90.ReferenceController);
      }
      *(undefined8 *)(lVar5 + 0x40) = 0;
      uStack_40 = uStack_40 & ~auStack_50._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_50);
      uVar4 = (ulonglong)uStack_3c;
    } while ((int)uStack_3c < *(int *)(auStack_50._8_8_ + 0x18));
    if (((char)local_20 != '\0') && (local_20._1_1_ != '\0')) {
      uVar6 = *(int *)(&local_28->field_0x0 + 8) - *(int *)(&local_28->field_0x0 + 0x34);
      if (uVar6 < 4) {
        iVar3 = 1;
      }
      else {
        uVar4 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
        lVar5 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar5 == 0; lVar5 = lVar5 + -1) {
          }
        }
        iVar3 = 1 << ((byte)lVar5 & 0x1f);
      }
      if (((0 < (int)uVar6) && (*(int *)&local_28->field_0x48 < iVar3)) ||
         (iVar3 < *(int *)&local_28->field_0x48)) {
        *(int *)&local_28->field_0x48 = iVar3;
        TSet<TTuple<enum_EDS_EntityMaterialType,FDS_EntityMaterialInfo>,TDefaultMapHashableKeyFuncs<enum_EDS_EntityMaterialType,FDS_EntityMaterialInfo,0>,FDefaultSetAllocator>
        ::Rehash(local_28);
      }
    }
  }
  bVar2 = 1 < *(int *)&(this->EntityMaterialInfoMap).field_0x48;
  if (!bVar2) {
    TSet<TTuple<enum_EDS_EntityMaterialType,FDS_EntityMaterialInfo>,TDefaultMapHashableKeyFuncs<enum_EDS_EntityMaterialType,FDS_EntityMaterialInfo,0>,FDefaultSetAllocator>
    ::UnhashElements(this_00);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_EntityMaterialType,FDS_EntityMaterialInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements(this_00,0,*(int *)&(this->EntityMaterialInfoMap).field_0x8);
  puVar1 = &(this->EntityMaterialInfoMap).field_0xc;
  *(undefined4 *)&(this->EntityMaterialInfoMap).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x50,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->EntityMaterialInfoMap).field_0x34 = 0;
  *(undefined4 *)&(this->EntityMaterialInfoMap).field_0x30 = 0xffffffff;
  iVar3 = *(int *)&(this->EntityMaterialInfoMap).field_0x2c;
  *(undefined4 *)&(this->EntityMaterialInfoMap).field_0x28 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(this->EntityMaterialInfoMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->EntityMaterialInfoMap).field_0x10,0);
  }
  if (bVar2) {
    *(undefined4 *)&(this->EntityMaterialInfoMap).field_0x48 = 1;
    TSet<TTuple<enum_EDS_EntityMaterialType,FDS_EntityMaterialInfo>,TDefaultMapHashableKeyFuncs<enum_EDS_EntityMaterialType,FDS_EntityMaterialInfo,0>,FDefaultSetAllocator>
    ::Rehash(this_00);
  }
  return;
}

// EndPlay @ 14bc39d90

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ADS_EntityActorBase::EndPlay(ADS_EntityActorBase *this,Type param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UDS_AbilitySystemComponent *pUVar3;
  UDS_MovementCore *pUVar4;
  UDS_TriggerCore *this_00;
  UDS_ColliderCore *pUVar5;
  UObject *pUVar6;
  UDS_SyncRecvComponent *pUVar7;
  code *pcVar8;
  bool bVar9;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_01;
  UDS_ColliderComponent *this_02;
  FScriptContainerElement *pFVar10;
  EDS_StateTagType local_res18 [8];
  EDS_StateTagType local_res20 [8];
  undefined1 local_78 [8];
  FWeakObjectPtr local_70;
  FWeakObjectPtr local_68;
  FWeakObjectPtr local_60;
  UDS_AbilitySystemComponent *local_58;
  UDS_AbilitySystemComponent *local_50;
  UObject *local_48 [2];
  
  AActor::EndPlay((AActor *)this,param_1);
  pUVar3 = (this->AbilitySystemComponent).field0_0x0.DebugPtr;
  local_res18[0] = RemoveEntity;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (pUVar3 != (UDS_AbilitySystemComponent *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 != (UDS_AbilitySystemComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
  }
  local_68.ObjectIndex = 0;
  local_68.ObjectSerialNumber = 0;
  local_58 = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar3 != (UDS_AbilitySystemComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  FWeakObjectPtr::operator=(&local_68,(FObjectPtr)&local_58);
  UDS_AbilitySystemComponent::AddStateTag
            ((TWeakObjectPtr<UWN_AbilitySystemComponent,FWeakObjectPtr>)local_68,local_res18);
  pUVar3 = (this->AbilitySystemComponent).field0_0x0.DebugPtr;
  local_res20[0] = RemoveEntity;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (pUVar3 != (UDS_AbilitySystemComponent *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 != (UDS_AbilitySystemComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
  }
  local_60.ObjectIndex = 0;
  local_60.ObjectSerialNumber = 0;
  local_50 = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar3 != (UDS_AbilitySystemComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  FWeakObjectPtr::operator=(&local_60,(FObjectPtr)&local_50);
  UDS_AbilitySystemComponent::RemoveStateTag
            ((TWeakObjectPtr<UWN_AbilitySystemComponent,FWeakObjectPtr>)local_60,local_res20);
  pUVar3 = (this->AbilitySystemComponent).field0_0x0.DebugPtr;
  if (pUVar3 != (UDS_AbilitySystemComponent *)0x0) {
    this_01 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
              UWN_AbilitySystemComponent::GetChangedTagEvent((UWN_AbilitySystemComponent *)pUVar3);
    if (this->_padding_ != 0) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                (this_01,(FDelegateHandle)this->_padding_);
    }
    UWN_AbilitySystemComponent::UninitializeComponent
              ((UWN_AbilitySystemComponent *)(this->AbilitySystemComponent).field0_0x0.DebugPtr);
    FTickFunction::RemovePrerequisite
              ((FTickFunction *)&this->_padding_,
               (UObject *)(this->AbilitySystemComponent).field0_0x0.DebugPtr,
               (FTickFunction *)&this->_padding_);
  }
  pUVar4 = (this->MovementCore).field0_0x0.DebugPtr;
  if (pUVar4 != (UDS_MovementCore *)0x0) {
    (**(code **)(pUVar4->_padding_ + 0x2b8))();
  }
  this_00 = (this->TriggerCore).field0_0x0.DebugPtr;
  if (this_00 != (UDS_TriggerCore *)0x0) {
    UDS_TriggerCore::Deinitialize(this_00);
  }
  pUVar5 = (this->ColliderCore).field0_0x0.DebugPtr;
  if (pUVar5 != (UDS_ColliderCore *)0x0) {
    (pUVar5->OwnerActor).WeakPtr = (FWeakObjectPtr)0x0;
    pFVar10 = (pUVar5->ColliderComponents).AllocatorInstance.Data;
    iVar2 = (pUVar5->ColliderComponents).ArrayNum;
    pFVar1 = pFVar10 + (longlong)iVar2 * 8;
    while( true ) {
      if ((pUVar5->ColliderComponents).ArrayNum != iVar2) {
        local_78[0] = 0;
        `TCheckedPointerIterator<TObjectPtr<UDS_ColliderComponent>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_78);
      }
      if (pFVar10 == pFVar1) break;
      pUVar6 = *(UObject **)pFVar10;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (pUVar6 != (UObject *)0x0) {
          UE::GC::MarkAsReachable(pUVar6);
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar6);
        }
      }
      local_70.ObjectIndex = 0;
      local_70.ObjectSerialNumber = 0;
      local_48[0] = pUVar6;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar6);
      }
      FWeakObjectPtr::operator=(&local_70,(FObjectPtr)local_48);
      bVar9 = FWeakObjectPtr::IsValid(&local_70);
      if (bVar9) {
        this_02 = (UDS_ColliderComponent *)FWeakObjectPtr::Get(&local_70);
        (this_02->OwnerActor).WeakPtr = (FWeakObjectPtr)0x0;
        UDS_ColliderComponent::RemoveAllCharacterDelegate(this_02);
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &ADS_MainCharacter::MainCharacterSwitchCompleteDelegate,this_02);
      }
      else {
        bVar9 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<7585797269991981086>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\Components\\Collider\\DS_ColliderCore.cpp"
                           ,0x1e,"collideComponent.IsValid()");
        if (bVar9) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      pFVar10 = pFVar10 + 8;
    }
  }
  pUVar7 = (this->SyncRecvComponent).field0_0x0.DebugPtr;
  if (pUVar7 != (UDS_SyncRecvComponent *)0x0) {
    (**(code **)(pUVar7->_padding_ + 0x2b8))();
  }
  ClearEntityMaterialInfoMap(this);
  ClearDestructionGC(this);
  return;
}

// ExecuteHiddenPolicy @ 14bc3b3b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
ADS_EntityActorBase::ExecuteHiddenPolicy
          (ADS_EntityActorBase *this,EDS_EntityHiddenPolicy param_1,bool param_2)

{
  longlong lVar1;
  FTimerManager *this_00;
  FTimerData *pFVar2;
  EDS_EntityHiddenPolicy local_res10 [3];
  
  lVar1 = this->_padding_;
  local_res10[0] = param_1;
  if (param_2) {
    (**(code **)(lVar1 + 0x58))();
  }
  else {
    (**(code **)(lVar1 + 0x60))(&this->_padding_,local_res10,0);
  }
  if ((this->HiddenPolicyTimerHandle).Handle != 0) {
    this_00 = FDS_TimerManager::Get((UObject *)0x0);
    pFVar2 = FTimerManager::FindTimer(this_00,&this->HiddenPolicyTimerHandle);
    if (pFVar2 != (FTimerData *)0x0) {
      FTimerManager::InternalClearTimer
                (this_00,(FTimerHandle)(this->HiddenPolicyTimerHandle).Handle);
    }
    (this->HiddenPolicyTimerHandle).Handle = 0;
  }
  return;
}

// GetAbilitySystemComponent @ 14bc3ed90

TWeakObjectPtr<UDS_AbilitySystemComponent,FWeakObjectPtr> __thiscall
ADS_EntityActorBase::GetAbilitySystemComponent(ADS_EntityActorBase *this)

{
  UObject *pUVar1;
  FWeakObjectPtr in_RDX;
  UObject *local_res8;
  
  pUVar1 = (UObject *)this->_padding_;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (pUVar1 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar1);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar1);
    }
  }
  *(undefined8 *)in_RDX = 0;
  local_res8 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RDX,(FObjectPtr)&local_res8);
  return (TWeakObjectPtr<UDS_AbilitySystemComponent,FWeakObjectPtr>)in_RDX;
}

// GetCapsuleComponent @ 14bc3fab0

TWeakObjectPtr<UCapsuleComponent,FWeakObjectPtr> __thiscall
ADS_EntityActorBase::GetCapsuleComponent(ADS_EntityActorBase *this)

{
  UObject *pUVar1;
  FWeakObjectPtr in_RDX;
  UObject *local_res8;
  
  pUVar1 = (UObject *)this->_padding_;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (pUVar1 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar1);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar1);
    }
  }
  *(undefined8 *)in_RDX = 0;
  local_res8 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RDX,(FObjectPtr)&local_res8);
  return (TWeakObjectPtr<UCapsuleComponent,FWeakObjectPtr>)in_RDX;
}

// GetEntityActorBase @ 14bc40670

TWeakObjectPtr<ADS_EntityActorBase,FWeakObjectPtr> __cdecl
ADS_EntityActorBase::GetEntityActorBase(ulong64 *param_1)

{
  int iVar1;
  UDS_EntityManager *this;
  UObject *pUVar2;
  UClass *pUVar3;
  UObject *local_res18;
  FWeakObjectPtr local_res20;
  
  this = UDS_EntityManager::GetInst();
  if (this == (UDS_EntityManager *)0x0) {
    *param_1 = 0;
    local_res18 = (UObject *)0x0;
    goto LAB_14bc40719;
  }
  UDS_EntityManager::FindEntity(this,(ulong64)&local_res20);
  pUVar2 = FWeakObjectPtr::Get(&local_res20);
  if (pUVar2 == (UObject *)0x0) {
LAB_14bc406e2:
    pUVar2 = (UObject *)0x0;
  }
  else {
    pUVar3 = Z_Construct_UClass_ADS_EntityActorBase_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar3->_padding_)) goto LAB_14bc406e2;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  *param_1 = 0;
  local_res18 = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
LAB_14bc40719:
  FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_res18);
  return (TWeakObjectPtr<ADS_EntityActorBase,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// GetEntityMaterialInfo @ 14bc40820

FDS_EntityMaterialInfo * __thiscall
ADS_EntityActorBase::GetEntityMaterialInfo
          (ADS_EntityActorBase *this,EDS_EntityMaterialType *param_1)

{
  longlong *this_00;
  EDS_EntityMaterialType EVar1;
  FDS_EntityMaterialInfo *pFVar2;
  longlong *plVar3;
  int iVar4;
  TPairInitializer<EDS_EntityMaterialType_const_&,FDS_EntityMaterialInfo_&> local_res10;
  EDS_EntityMaterialType *local_58;
  EDS_EntityMaterialType *local_50;
  EDS_EntityMaterialType local_48 [2];
  undefined8 local_40;
  undefined8 local_38;
  void *local_30;
  undefined8 local_28;
  undefined8 local_20;
  TReferenceControllerBase<1> *local_18;
  undefined8 uStack_10;
  
  EVar1 = *param_1;
  if (EVar1 - Default < 2) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      emptyInfo.EntityMaterialType = Max;
      emptyInfo.MaterialPath.AssetPath.PackageName.ComparisonIndex.Value = 0;
      emptyInfo.MaterialPath.AssetPath.PackageName.Number = 0;
      emptyInfo.MaterialPath.AssetPath.AssetName.ComparisonIndex.Value = 0;
      emptyInfo.MaterialPath.AssetPath.AssetName.Number = 0;
      emptyInfo.MaterialPath.SubPathString.Data.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      emptyInfo.MaterialPath.SubPathString.Data.ArrayNum = 0;
      emptyInfo.MaterialPath.SubPathString.Data.ArrayMax = 0;
      emptyInfo.MaterialAsyncLoadHandle.Object = (FStreamableHandle *)0x0;
      emptyInfo.MaterialAsyncLoadHandle.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      emptyInfo.MaterialInterface.field0_0x0 = (TObjectPtr<UMaterialInterface>_u_0)(FObjectPtr)0x0;
      atexit(`FDS_EntityBase::GetEntityMaterialInfo'::__l2::
             _dynamic_atexit_destructor_for__emptyInfo__);
      _Init_thread_footer(&::_TSS0);
      return &emptyInfo;
    }
    return &emptyInfo;
  }
  this_00 = &this->_padding_;
  if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
    plVar3 = (longlong *)this->_padding_;
    if ((longlong *)this->_padding_ == (longlong *)0x0) {
      plVar3 = &this->_padding_;
    }
    iVar4 = *(int *)((longlong)plVar3 + (ulonglong)((int)this->_padding_ - Default & EVar1) * 4);
    if (iVar4 != -1) {
      do {
        if (*(EDS_EntityMaterialType *)(*this_00 + (longlong)iVar4 * 0x50) == EVar1) {
          if (iVar4 != -1) goto LAB_14bc4090c;
          break;
        }
        iVar4 = *(int *)(*this_00 + 0x48 + (longlong)iVar4 * 0x50);
      } while (iVar4 != -1);
    }
  }
  local_40 = 0;
  local_38 = 0;
  local_30 = (void *)0x0;
  local_28 = 0;
  local_20 = 0;
  local_50 = local_48;
  local_18 = (TReferenceControllerBase<1> *)0x0;
  uStack_10 = 0;
  local_58 = param_1;
  local_48[0] = EVar1;
  TSet<TTuple<enum_EDS_EntityMaterialType,FDS_EntityMaterialInfo>,TDefaultMapHashableKeyFuncs<enum_EDS_EntityMaterialType,FDS_EntityMaterialInfo,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_EntityMaterialType_const_&,FDS_EntityMaterialInfo_&>_>
            (this_00,&local_res10,(bool *)&local_58);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_18);
  if (local_30 != (void *)0x0) {
    FMemory::Free(local_30);
  }
LAB_14bc4090c:
  pFVar2 = TMapBase<enum_EDS_EntityMaterialType,FDS_EntityMaterialInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_EntityMaterialType,FDS_EntityMaterialInfo,0>_>
           ::FindChecked(this_00,*param_1);
  return pFVar2;
}

// GetMovementCore @ 14bc421e0

TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> __thiscall
ADS_EntityActorBase::GetMovementCore(ADS_EntityActorBase *this)

{
  UObject *pUVar1;
  FWeakObjectPtr in_RDX;
  UObject *local_res8;
  
  pUVar1 = (UObject *)this->_padding_;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (pUVar1 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar1);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar1);
    }
  }
  *(undefined8 *)in_RDX = 0;
  local_res8 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RDX,(FObjectPtr)&local_res8);
  return (TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>)in_RDX;
}

// GetSkeletalMeshComponent @ 14bc43d30

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr> __thiscall
ADS_EntityActorBase::GetSkeletalMeshComponent(ADS_EntityActorBase *this)

{
  bool bVar1;
  UObject *pUVar2;
  UWN_CS_CharacterSoul *pUVar3;
  FWeakObjectPtr in_RDX;
  USkeletalMeshComponent *pUVar4;
  FWeakObjectPtr local_res8;
  USkeletalMeshComponent *local_res18;
  
  (**(code **)(this[-1]._padding_ + 0x760))();
  bVar1 = TWeakObjectPtr<UDS_PartsSystemControl,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_PartsSystemControl,FWeakObjectPtr> *)&local_res8,
                     (void *)0x0);
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&local_res8);
    pUVar4 = (USkeletalMeshComponent *)0x0;
    if (*(UWN_CS_CharacterCore **)(pUVar2 + 1) != (UWN_CS_CharacterCore *)0x0) {
      pUVar3 = UWN_CS_CharacterCore::GetSoul(*(UWN_CS_CharacterCore **)(pUVar2 + 1));
      pUVar4 = (USkeletalMeshComponent *)0x0;
      if (pUVar3 != (UWN_CS_CharacterSoul *)0x0) {
        pUVar4 = (pUVar3->Component).field0_0x0.DebugPtr;
      }
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar4 != (USkeletalMeshComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    *(undefined8 *)in_RDX = 0;
    local_res18 = pUVar4;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar4 != (USkeletalMeshComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RDX,(FObjectPtr)&local_res18);
    return (TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>)in_RDX;
  }
  *(undefined8 *)in_RDX = 0;
  local_res18 = (USkeletalMeshComponent *)0x0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RDX,(FObjectPtr)&local_res18);
  return (TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>)in_RDX;
}

// GetSyncRecvComponent @ 14bc444b0

TWeakObjectPtr<UDS_SyncRecvComponent,FWeakObjectPtr> __thiscall
ADS_EntityActorBase::GetSyncRecvComponent(ADS_EntityActorBase *this)

{
  UObject *pUVar1;
  FWeakObjectPtr in_RDX;
  UObject *local_res8;
  
  pUVar1 = (UObject *)this->_padding_;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (pUVar1 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar1);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar1);
    }
  }
  *(undefined8 *)in_RDX = 0;
  local_res8 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RDX,(FObjectPtr)&local_res8);
  return (TWeakObjectPtr<UDS_SyncRecvComponent,FWeakObjectPtr>)in_RDX;
}

// GetTrajectoryComponent @ 14bc44690

TWeakObjectPtr<UDS_CharacterTrajectoryComponent,FWeakObjectPtr> __thiscall
ADS_EntityActorBase::GetTrajectoryComponent(ADS_EntityActorBase *this)

{
  UObject *pUVar1;
  FWeakObjectPtr in_RDX;
  UObject *local_res8;
  
  pUVar1 = (UObject *)this->_padding_;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (pUVar1 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar1);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar1);
    }
  }
  *(undefined8 *)in_RDX = 0;
  local_res8 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RDX,(FObjectPtr)&local_res8);
  return (TWeakObjectPtr<UDS_CharacterTrajectoryComponent,FWeakObjectPtr>)in_RDX;
}

// GetTriggerCore @ 14bc448c0

TWeakObjectPtr<UDS_TriggerCore,FWeakObjectPtr> __thiscall
ADS_EntityActorBase::GetTriggerCore(ADS_EntityActorBase *this)

{
  UDS_TriggerCore *pUVar1;
  FWeakObjectPtr in_RDX;
  UDS_TriggerCore *local_res8;
  
  pUVar1 = (this->TriggerCore).field0_0x0.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (pUVar1 != (UDS_TriggerCore *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UDS_TriggerCore *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
  }
  *(undefined8 *)in_RDX = 0;
  local_res8 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UDS_TriggerCore *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RDX,(FObjectPtr)&local_res8);
  return (TWeakObjectPtr<UDS_TriggerCore,FWeakObjectPtr>)in_RDX;
}

// HandleAbnormal @ 14bc451c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
ADS_EntityActorBase::HandleAbnormal(ADS_EntityActorBase *this,FDS_StruckInfo *param_1)

{
  bool bVar1;
  UDS_EntityManager *this_00;
  FDS_EntityBase *pFVar2;
  UDS_AbnormalAbilityData *this_01;
  FWeakObjectPtr local_res18 [2];
  FDS_AbnormalInfo local_e8;
  
  bVar1 = UDS_GameInstance::IsClientAbnormal();
  if (!bVar1) {
    if ((char)this->_padding_ == '\x02') {
      this_00 = UDS_EntityManager::GetInst();
      if (this_00 != (UDS_EntityManager *)0x0) {
        pFVar2 = UDS_EntityManager::FindEntityBase(this_00,20000);
        if (pFVar2 != (FDS_EntityBase *)0x0) {
          (**(code **)(pFVar2->_padding_ + 0x1a8))(pFVar2,param_1);
        }
      }
    }
    UDS_AbilityDataSet::GetAbilityData<UDS_AbnormalAbilityData>
              ((ulong64 *)local_res18,(EDS_AbilityTagType *)&this->_padding_);
    bVar1 = FWeakObjectPtr::IsValid(local_res18);
    if (bVar1) {
      local_e8.AbnormalType = None;
      local_e8.AbnormalGroup = None;
      local_e8.AttackerEntityID = 0;
      local_e8.AbnormalValue = 0;
      local_e8.IsAbnormalRotation = false;
      local_e8.AbnormalStartTime = 0.0;
      local_e8.SkillAttackID = 0;
      local_e8.AbnormalActionID = 0;
      local_e8.ActionGrade = 0;
      local_e8.AbnormalHeight = 0;
      local_e8.AbnormalMoveEndTime = 0.0;
      local_e8.AbnormalEndTime = 0.0;
      local_e8.AbnormalWaitTime = 0.0;
      local_e8.AbnormalMoveTime = 0.0;
      local_e8.AbnormalTime = 0.0;
      local_e8.AbnormalGetupTime = 0.0;
      ::FString::FString(&local_e8.AtkAttachSocket,L"");
      ::FString::FString(&local_e8.DefAttachSocket,L"");
      local_e8.AbnormalDestinationFloor.field0_0x0._s_0.Z =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_e8.AbnormalClientDestination.field0_0x0._s_0.Z =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_e8.AbnormalStartTime = param_1->EventTime;
      local_e8.AbnormalDestinationFloor.field0_0x0._s_0.X =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_e8.AbnormalDestinationFloor.field0_0x0._s_0.Y =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_e8.AbnormalClientDestination.field0_0x0._s_0.X =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_e8.AbnormalClientDestination.field0_0x0._s_0.Y =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_e8.AbnormalActionID = param_1->AbnormalID;
      local_e8.SkillAttackID = param_1->SkillAttackID;
      local_e8.AbnormalDestination.field0_0x0._s_0.X =
           (param_1->AbnormalDestination).field0_0x0._s_0.X;
      local_e8.AbnormalDestination.field0_0x0._s_0.Y =
           (param_1->AbnormalDestination).field0_0x0._s_0.Y;
      local_e8.AttackerEntityID = param_1->AttackerEntityID;
      local_e8.AbnormalDestination.field0_0x0._s_0.Z =
           (param_1->AbnormalDestination).field0_0x0._s_0.Z;
      local_e8.IsDefenderKilled = false;
      local_e8.IsDeadAbnormalCheck = false;
      local_e8.CameraShakeID = 0;
      local_e8.bIsSkillUseUncancel = false;
      local_e8.ID_HeightCondition = 0;
      this_01 = (UDS_AbnormalAbilityData *)FWeakObjectPtr::Get(local_res18);
      UDS_AbnormalAbilityData::AddAbnormalInfo(this_01,&local_e8);
      if (local_e8.DefAttachSocket.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.DefAttachSocket.Data.AllocatorInstance.Data);
      }
      if (local_e8.AtkAttachSocket.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.AtkAttachSocket.Data.AllocatorInstance.Data);
      }
    }
  }
  TMulticastDelegate<void___cdecl(FDS_StruckInfo_const_&),FDefaultDelegateUserPolicy>::Broadcast
            ((TMulticastDelegate<void___cdecl(FDS_StruckInfo_const_&),FDefaultDelegateUserPolicy> *)
             &this->_padding_,param_1);
  return;
}

// HandleDeath @ 14bc456c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall ADS_EntityActorBase::HandleDeath(ADS_EntityActorBase *this)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  UObject *pUVar7;
  UDS_CharInfoData *this_00;
  longlong lVar8;
  uint uVar9;
  EDS_AbilityTagType aEStackX_8 [8];
  FWeakObjectPtr FStackX_10;
  FWeakObjectPtr FStackX_18;
  undefined8 uStackX_20;
  FDestructionSentinel FStack_58;
  
  uStackX_20 = 0;
  aEStackX_8[0] = Death;
  FDS_EntityBase::TryActivateAbility
            ((FDS_EntityBase *)this,aEStackX_8,(TObjectPtr<UWN_AbilityContext>)&uStackX_20);
  UDS_DeathData::GetData((ulong64)&FStackX_10,this->_padding_,false);
  if (((char)this->_padding_ == '\x03') &&
     (bVar3 = TWeakObjectPtr<UDS_DeathData,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_DeathData,FWeakObjectPtr> *)&FStackX_10,(void *)0x0),
     !bVar3)) {
    pUVar7 = FWeakObjectPtr::Get(&FStackX_10);
    pUVar7[3].field_0x18 = 1;
    pUVar7 = FWeakObjectPtr::Get(&FStackX_10);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pUVar7[3].field_0x20,
               (FWriteAccessScope *)&FStack_58);
    *(int *)&pUVar7[4].field_0x14 = *(int *)&pUVar7[4].field_0x14 + 1;
    bVar3 = false;
    uVar9 = *(int *)&pUVar7[4].field_0x8 - 1;
    if (-1 < (int)uVar9) {
      lVar8 = (longlong)(int)uVar9 << 4;
      bVar3 = false;
      do {
        uVar6 = 0;
        if ((int)uVar9 < *(int *)&pUVar7[4].field_0x8) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (((*(int *)(*(longlong *)(pUVar7 + 4) + 8 + lVar8) == 0) ||
            (plVar1 = *(longlong **)(*(longlong *)(pUVar7 + 4) + lVar8), plVar1 == (longlong *)0x0))
           || (cVar5 = (**(code **)(*plVar1 + 0x68))(), cVar5 == '\0')) {
          bVar3 = true;
        }
        lVar8 = lVar8 + -0x10;
        uVar9 = uVar9 - 1;
      } while (-1 < (int)uVar9);
    }
    *(int *)&pUVar7[4].field_0x14 = *(int *)&pUVar7[4].field_0x14 + -1;
    if (bVar3) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar7[3].field_0x20,false);
    }
    if (FStack_58.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_58.Accessor,&FStack_58);
    }
  }
  UDS_CharInfoData::GetData((ulong64)&FStackX_18);
  bVar3 = FWeakObjectPtr::IsValid(&FStackX_18);
  if (bVar3) {
    this_00 = (UDS_CharInfoData *)FWeakObjectPtr::Get(&FStackX_18);
    UDS_CharInfoData::SetBattleNpcTargetEntityID(this_00,0);
  }
  return;
}

// HasTriggerOverlap @ 14bc46550

bool __thiscall
ADS_EntityActorBase::HasTriggerOverlap(ADS_EntityActorBase *this,EDS_TriggerType param_1)

{
  EDS_TriggerType *pEVar1;
  EDS_TriggerType *pEVar2;
  
  pEVar1 = (EDS_TriggerType *)this->_padding_;
  pEVar2 = pEVar1 + (int)this->_padding_;
  while( true ) {
    if (pEVar1 == pEVar2) {
      return false;
    }
    if (*pEVar1 == param_1) break;
    pEVar1 = pEVar1 + 1;
  }
  return true;
}

// HideEntityByDistance @ 14bc46580

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall ADS_EntityActorBase::HideEntityByDistance(ADS_EntityActorBase *this)

{
  double dVar1;
  bool bVar2;
  char cVar3;
  UDS_EntityManager *pUVar4;
  FDS_EntityBase *pFVar5;
  FDS_EntityBase *pFVar6;
  longlong *plVar7;
  float local_res10 [2];
  float local_res18 [2];
  undefined8 local_res20;
  
  bVar2 = UDS_IngameState::IsNpcTalking();
  if (((!bVar2) && (cVar3 = (**(code **)(this->_padding_ + 0x770))(this), cVar3 == '\0')) &&
     (pUVar4 = UDS_EntityManager::GetInst(), pUVar4 != (UDS_EntityManager *)0x0)) {
    pFVar5 = UDS_EntityManager::FindEntityBase(pUVar4,this->_padding_);
    plVar7 = &this->_padding_;
    if (((pFVar5 != (FDS_EntityBase *)0x0) &&
        (pUVar4 = UDS_EntityManager::GetInst(), pUVar4 != (UDS_EntityManager *)0x0)) &&
       (pFVar6 = UDS_EntityManager::GetCurrentMainCharEntityBase(pUVar4,true),
       pFVar6 != (FDS_EntityBase *)0x0)) {
      dVar1 = (double)(**(code **)(*plVar7 + 0x68))(plVar7);
      local_res10[0] = (float)dVar1;
      dVar1 = (double)(**(code **)(*plVar7 + 0x70))(plVar7);
      local_res18[0] = (float)dVar1;
      if ((0.0 < local_res10[0]) && (0.0 < local_res18[0])) {
        bVar2 = DS_Util::IsCloseDist(pFVar5,pFVar6,local_res10);
        if (bVar2) {
          local_res20 = 0x10;
          (**(code **)(*plVar7 + 0x60))(plVar7,&local_res20,0);
        }
        else {
          bVar2 = DS_Util::IsCloseDist(pFVar5,pFVar6,local_res18);
          if (!bVar2) {
            local_res20 = 0x10;
            (**(code **)(*plVar7 + 0x58))(plVar7,&local_res20,0);
          }
        }
      }
    }
  }
  return;
}

// OnChangedShowEntity @ 14bc4dc70

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ADS_EntityActorBase::OnChangedShowEntity(ADS_EntityActorBase *this,bool *param_1)

{
  byte bVar1;
  
  if (*param_1 == true) {
    if ((char)this->_padding_ == '\x01') {
      AActor::SetActorEnableCollision
                ((AActor *)&this[-1]._padding_,*(bool *)((longlong)&this->_padding_ + 1));
    }
    *(undefined2 *)&this->_padding_ = 0;
    return;
  }
  bVar1 = *(byte *)((longlong)&this[-1]._padding_ + 5);
  *(undefined1 *)&this->_padding_ = 1;
  *(byte *)((longlong)&this->_padding_ + 1) = bVar1 & 1;
  AActor::SetActorEnableCollision((AActor *)&this[-1]._padding_,false);
  return;
}

// OnChangedTagCallback @ 14bc4dce0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
ADS_EntityActorBase::OnChangedTagCallback
          (ADS_EntityActorBase *this,FGameplayTag *param_1,bool param_2)

{
  longlong *plVar1;
  bool bVar2;
  FDS_CharStateInfo *pFVar3;
  UDS_LogManager *pUVar4;
  FName FVar5;
  undefined1 auStackY_188 [32];
  FWeakObjectPtr local_158 [3];
  undefined8 local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  UDS_CharStateData::GetData((ulong64)local_158);
  bVar2 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *)local_158,(void *)0x0);
  if (!bVar2) {
    FWeakObjectPtr::Get(local_158);
    pFVar3 = UDS_CharStateData::GetCharStateInfo(param_1);
    local_140 = *(undefined8 *)&pFVar3->DetailState;
    if ((int)local_140 == 0x6e) {
      plVar1 = (longlong *)this->_padding_;
      if (plVar1 == (longlong *)0x0) {
        pUVar4 = UDS_LogManager::GetInst();
        if (pUVar4 != (UDS_LogManager *)0x0) {
          pUVar4 = UDS_LogManager::GetInst();
          local_138._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_138,"ADS_EntityActorBase::OnChangedTagCallback",0x29,Yes);
          UDS_LogManager::PrintLog(pUVar4,1,Warning,local_138.Ptr,0x139,L"CapsuleComponent nullptr")
          ;
          if ((void *)local_138._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_138._padding_);
          }
        }
      }
      else {
        FVar5 = ::COLLISION_PROFILE_NPC_NOCOLLISION;
        if (!param_2) {
          FVar5 = (FName)this->_padding_;
        }
        (**(code **)(*plVar1 + 0x788))(plVar1,FVar5);
      }
    }
  }
  return;
}

// OnDetectedByPlayerSkill @ 14bc4f010

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall ADS_EntityActorBase::OnDetectedByPlayerSkill(ADS_EntityActorBase *this)

{
  code *pcVar1;
  bool bVar2;
  FTimerManager *this_00;
  undefined ***pppuVar3;
  ulonglong uVar4;
  undefined1 auStackY_c8 [32];
  FTimerHandle local_98 [2];
  longlong local_88;
  undefined **local_78;
  longlong *plStack_70;
  undefined8 local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  longlong *plStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  (**(code **)(this->_padding_ + 0x1f0))(this,1);
  local_98[0].Handle = 0;
  this_00 = FDS_TimerManager::Get((UObject *)0x0);
  plStack_70 = &this[-1]._padding_;
  local_78 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`ADS_EntityActorBase::OnDetectedByPlayerSkill'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_48 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`ADS_EntityActorBase::OnDetectedByPlayerSkill'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_58._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`ADS_EntityActorBase::OnDetectedByPlayerSkill'::__l2::<lambda_1>,void>::
       Call;
  local_30 = (undefined ***)0x0;
  local_60 = (undefined ***)0x0;
  local_38 = local_68;
  local_88 = 0;
  local_28 = 3;
  plStack_40 = plStack_70;
  FTimerManager::InternalSetTimer
            (this_00,local_98,(FTimerUnifiedDelegate *)local_58,__real_3f800000,false,
             __real_40400000);
  uVar4 = (ulonglong)local_28;
  if (3 < local_28) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<std::nullptr_t,TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>,FTimerDynamicDelegate,TFunction<void___cdecl(void)>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar4] ==
      UE::Core::Private::TDestructorCaller<TFunction<void___cdecl(void)>_>::Destruct) {
    if ((code *)local_58._0_8_ != (code *)0x0) {
      pppuVar3 = &local_48;
      if (local_30 != (undefined ***)0x0) {
        pppuVar3 = local_30;
      }
      (*(code *)(*pppuVar3)[2])();
    }
  }
  else {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<std::nullptr_t,TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>,FTimerDynamicDelegate,TFunction<void___cdecl(void)>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar4])(local_58);
  }
  if (local_88 != 0) {
    pppuVar3 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar3 = local_60;
    }
    (*(code *)(*pppuVar3)[2])();
  }
  return;
}

// OnHit @ 14bc4f1a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall ADS_EntityActorBase::OnHit(ADS_EntityActorBase *this,FDS_StruckInfo *param_1)

{
  FDS_EntityBase::OnHit((FDS_EntityBase *)this,param_1);
  TMulticastDelegate<void___cdecl(FDS_StruckInfo_const_&),FDefaultDelegateUserPolicy>::Broadcast
            ((TMulticastDelegate<void___cdecl(FDS_StruckInfo_const_&),FDefaultDelegateUserPolicy> *)
             &this->_padding_,param_1);
  return;
}

// OnLoadCompleteGCResource @ 14bc4fde0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall ADS_EntityActorBase::OnLoadCompleteGCResource(ADS_EntityActorBase *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  UGeometryCollection *pUVar5;
  UClass *pUVar6;
  UDS_LogManager *pUVar7;
  undefined1 auStackY_188 [32];
  FString local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  lVar4 = (**(code **)(this->_padding_ + 0x28))();
  if (*(longlong *)(lVar4 + 0x68) == 0) goto LAB_14bc4fe71;
  pUVar5 = (UGeometryCollection *)FSoftObjectPath::ResolveObject((FSoftObjectPath *)(lVar4 + 0x68));
  if (pUVar5 == (UGeometryCollection *)0x0) {
LAB_14bc4fe52:
    pUVar5 = (UGeometryCollection *)0x0;
  }
  else {
    pUVar6 = Z_Construct_UClass_UGeometryCollection_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((*(int *)(pUVar5->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar6->_padding_)) goto LAB_14bc4fe52;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UGeometryCollection *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  (this->GCResource).field0_0x0.DebugPtr = pUVar5;
LAB_14bc4fe71:
  if ((this->GCResource).field0_0x0.DebugPtr == (UGeometryCollection *)0x0) {
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 != (UDS_LogManager *)0x0) {
      pUVar7 = UDS_LogManager::GetInst();
      FSoftObjectPath::ToString((FSoftObjectPath *)(lVar4 + 0x68),&local_148);
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"ADS_EntityActorBase::OnLoadCompleteGCResource",0x2d,Yes);
      UDS_LogManager::PrintLog
                (pUVar7,1,Warning,local_138.Ptr,0x3ad,L"Failed to load GCResource. (%s)");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
      if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_148.Data.AllocatorInstance.Data);
      }
    }
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8596615521003109458>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\DS_EntityActorBase.cpp"
                       ,0x3ae,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// OnPartsSystemComplete @ 14bc50fa0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall ADS_EntityActorBase::OnPartsSystemComplete(ADS_EntityActorBase *this)

{
  longlong *plVar1;
  bool bVar2;
  UObject *pUVar3;
  longlong *plVar4;
  FWeakObjectPtr local_res8;
  void *local_18 [2];
  
  (**(code **)(this->_padding_ + 0x80))();
  bVar2 = TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr> *)&local_res8,
                     (void *)0x0);
  if (!bVar2) {
    pUVar3 = FWeakObjectPtr::Get(&local_res8);
    plVar4 = (longlong *)(**(code **)(*(longlong *)pUVar3 + 0xa90))(pUVar3,local_18);
    plVar1 = &this->_padding_;
    if (plVar1 != plVar4) {
      if ((void *)*plVar1 != (void *)0x0) {
        FMemory::Free((void *)*plVar1);
      }
      *plVar1 = *plVar4;
      *plVar4 = 0;
      *(int *)&this->_padding_ = (int)plVar4[1];
      *(undefined4 *)((longlong)&this->_padding_ + 4) = *(undefined4 *)((longlong)plVar4 + 0xc);
      plVar4[1] = 0;
    }
    if (local_18[0] != (void *)0x0) {
      FMemory::Free(local_18[0]);
    }
  }
  (**(code **)(this->_padding_ + 0x1f8))(this,*(undefined1 *)((longlong)&this->_padding_ + 1));
  TMulticastDelegate<void___cdecl(FDS_EntityBase_*),FDefaultDelegateUserPolicy>::Broadcast
            ((TMulticastDelegate<void___cdecl(FDS_EntityBase_*),FDefaultDelegateUserPolicy> *)
             &this->_padding_,(FDS_EntityBase *)this);
  return;
}

// OnRemoveEntityTimerFinish @ 14bc52af0

void __thiscall ADS_EntityActorBase::OnRemoveEntityTimerFinish(ADS_EntityActorBase *this)

{
  code *pcVar1;
  bool bVar2;
  UDS_EntityManager *this_00;
  FWeakObjectPtr local_res10;
  UDS_EntityManager *local_res18 [2];
  
  local_res18[0] = UDS_EntityManager::GetInst();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_res18[0] != (UDS_EntityManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res18[0]);
  }
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_res18[0] != (UDS_EntityManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res18[0]);
  }
  FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)local_res18);
  bVar2 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar2) {
    this_00 = (UDS_EntityManager *)FWeakObjectPtr::Get(&local_res10);
    UDS_EntityManager::RemoveEntity(this_00,this->_padding_,false);
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8596615521003109645>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\DS_EntityActorBase.cpp"
                       ,0x2f3,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// OnTriggerBeginOverlap @ 14bc531e0

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
ADS_EntityActorBase::OnTriggerBeginOverlap
          (ADS_EntityActorBase *this,UDS_TriggerComponent *param_1,UPrimitiveComponent *param_2,
          AActor *param_3,UPrimitiveComponent *param_4)

{
  longlong *plVar1;
  EDS_TriggerType *pEVar2;
  EDS_TriggerType EVar3;
  int iVar4;
  EDS_TriggerType *pEVar5;
  
  if (param_1 != (UDS_TriggerComponent *)0x0) {
    plVar1 = &this->_padding_;
    pEVar5 = (EDS_TriggerType *)*plVar1;
    iVar4 = (int)this->_padding_;
    EVar3 = param_1->TriggerType;
    pEVar2 = pEVar5 + iVar4;
    for (; pEVar5 != pEVar2; pEVar5 = pEVar5 + 1) {
      if (*pEVar5 == EVar3) goto LAB_14bc53255;
    }
    if (iVar4 == *(int *)((longlong)&this->_padding_ + 4)) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x101,(ForAnyElementType *)plVar1,(int *)((longlong)&this->_padding_ + 4));
    }
    *(int *)&this->_padding_ = iVar4 + 1;
    *(EDS_TriggerType *)(*plVar1 + (longlong)iVar4) = EVar3;
LAB_14bc53255:
    TMulticastDelegate<void___cdecl(UDS_TriggerComponent_*,bool),FDefaultDelegateUserPolicy>::
    Broadcast((TMulticastDelegate<void___cdecl(UDS_TriggerComponent_*,bool),FDefaultDelegateUserPolicy>
               *)&this->_padding_,param_1,true);
  }
  return;
}

// OnTriggerEndOverlap @ 14bc534c0

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
ADS_EntityActorBase::OnTriggerEndOverlap
          (ADS_EntityActorBase *this,UDS_TriggerComponent *param_1,UPrimitiveComponent *param_2,
          AActor *param_3,UPrimitiveComponent *param_4)

{
  int iVar1;
  EDS_TriggerType *pEVar2;
  code *pcVar3;
  bool bVar4;
  EDS_TriggerType *pEVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  EDS_TriggerType EVar9;
  int iVar10;
  EDS_TriggerType local_38 [16];
  
  if (param_1 != (UDS_TriggerComponent *)0x0) {
    pEVar2 = (EDS_TriggerType *)this->_padding_;
    local_38[0] = param_1->TriggerType;
    for (pEVar5 = pEVar2; pEVar5 != pEVar2 + (int)this->_padding_; pEVar5 = pEVar5 + 1) {
      if (*pEVar5 == local_38[0]) {
        if (((pEVar2 <= local_38) && (local_38 < pEVar2 + *(int *)((longlong)&this->_padding_ + 4)))
           && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar1 = (int)this->_padding_;
        if (iVar1 != 0) {
          iVar10 = 0;
          pEVar2 = (EDS_TriggerType *)this->_padding_;
          bVar4 = *pEVar2 != local_38[0];
          lVar6 = 0;
          EVar9 = local_38[0];
          iVar7 = 0;
          do {
            iVar8 = iVar7;
            do {
              lVar6 = lVar6 + 1;
              iVar8 = iVar8 + 1;
              if (iVar1 <= lVar6) break;
            } while (bVar4 == (pEVar2[lVar6] != EVar9));
            if (bVar4 != false) {
              if (iVar10 != iVar7) {
                memmove(pEVar2 + iVar10,pEVar2 + iVar7,(longlong)(iVar8 - iVar7));
                EVar9 = local_38[0];
              }
              iVar10 = iVar10 + (iVar8 - iVar7);
            }
            bVar4 = (bool)(bVar4 ^ 1);
            iVar7 = iVar8;
          } while (lVar6 < iVar1);
          *(int *)&this->_padding_ = iVar10;
        }
        break;
      }
    }
    TMulticastDelegate<void___cdecl(UDS_TriggerComponent_*,bool),FDefaultDelegateUserPolicy>::
    Broadcast((TMulticastDelegate<void___cdecl(UDS_TriggerComponent_*,bool),FDefaultDelegateUserPolicy>
               *)&this->_padding_,param_1,false);
  }
  return;
}

// PlayDestructionEffect @ 14bc55190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall ADS_EntityActorBase::PlayDestructionEffect(ADS_EntityActorBase *this)

{
  UGeometryCollectionComponent *this_00;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TTransform<double> *pTVar4;
  UWorld *this_01;
  UClass *pUVar5;
  UWorld *pUVar6;
  AActor *pAVar7;
  UDS_LogManager *pUVar8;
  longlong *plVar9;
  atomic<unsigned_char> *paVar10;
  TTransform<double> *in_R8;
  undefined7 uVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  undefined1 auStackY_3e8 [32];
  AActor *local_3b8;
  undefined8 local_3b0;
  double local_3a8;
  double dStack_3a0;
  double local_398;
  undefined1 local_368 [112];
  TTransform<double> local_2f8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_298;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_178;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_3e8;
  if (this->_padding_ == 0) {
    return false;
  }
  if (this[-1]._padding_ == 0) {
    pTVar4 = &UE::Math::TTransform<double>::Identity;
  }
  else {
    pTVar4 = (TTransform<double> *)(this[-1]._padding_ + 0x1f0);
  }
  local_2f8.Rotation.XY.m128d_f64[0] = (pTVar4->Rotation).XY.m128d_f64[0];
  local_2f8.Rotation.XY.m128d_f64[1] = (pTVar4->Rotation).XY.m128d_f64[1];
  plVar9 = &this[-1]._padding_;
  local_2f8.Rotation.ZW.m128d_f64[0] = (pTVar4->Rotation).ZW.m128d_f64[0];
  local_2f8.Rotation.ZW.m128d_f64[1] = (pTVar4->Rotation).ZW.m128d_f64[1];
  local_2f8.Translation.XY.m128d_f64[0] = (pTVar4->Translation).XY.m128d_f64[0];
  local_2f8.Translation.XY.m128d_f64[1] = (pTVar4->Translation).XY.m128d_f64[1];
  local_2f8.Translation.ZW.m128d_f64[0] = (pTVar4->Translation).ZW.m128d_f64[0];
  local_2f8.Translation.ZW.m128d_f64[1] = (pTVar4->Translation).ZW.m128d_f64[1];
  local_2f8.Scale3D.XY.m128d_f64[0] = (pTVar4->Scale3D).XY.m128d_f64[0];
  local_2f8.Scale3D.XY.m128d_f64[1] = (pTVar4->Scale3D).XY.m128d_f64[1];
  local_2f8.Scale3D.ZW.m128d_f64[0] = (pTVar4->Scale3D).ZW.m128d_f64[0];
  local_2f8.Scale3D.ZW.m128d_f64[1] = (pTVar4->Scale3D).ZW.m128d_f64[1];
  this_01 = AActor::GetWorld((AActor *)plVar9);
  pUVar5 = Z_Construct_UClass_AGeometryCollectionActor_NoRegister();
  if ((plVar9 != (longlong *)0x0) &&
     (pUVar6 = AActor::GetWorld((AActor *)plVar9), this_01 != pUVar6)) {
    in_R8 = (TTransform<double> *)0xea2;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("this==Owner->GetWorld()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\World.h"
                       ,0xea2,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  FActorSpawnParameters::FActorSpawnParameters((FActorSpawnParameters *)local_368);
  local_368[0x32] = local_368[0x32] | 4;
  local_368[0x30] = AlwaysSpawn;
  local_368[0x31] = MultiplyWithRoot;
  local_368._24_8_ = (APawn *)0x0;
  local_368._16_8_ = plVar9;
  if (pUVar5 != (UClass *)0x0) {
    in_R8 = &local_2f8;
    pAVar7 = UWorld::SpawnActor(this_01,pUVar5,in_R8,(FActorSpawnParameters *)local_368);
    if (pAVar7 != (AActor *)0x0) {
      pUVar5 = Z_Construct_UClass_AGeometryCollectionActor_NoRegister();
      in_R8 = (TTransform<double> *)&pUVar5->_padding_;
      iVar12 = (int)pUVar5->_padding_;
      if ((iVar12 <= *(int *)(pAVar7->_padding_ + 0x38)) &&
         ((TTransform<double> *)
          *(undefined1 **)(*(longlong *)(pAVar7->_padding_ + 0x30) + (longlong)iVar12 * 8) == in_R8)
         ) goto LAB_14bc552cf;
    }
  }
  pAVar7 = (AActor *)0x0;
LAB_14bc552cf:
  if (local_368._64_8_ != 0) {
    plVar9 = (longlong *)(local_368 + 0x50);
    if ((longlong *)local_368._104_8_ != (longlong *)0x0) {
      plVar9 = (longlong *)local_368._104_8_;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  if (pAVar7 == (AActor *)0x0) {
    pUVar8 = UDS_LogManager::GetInst();
    if (pUVar8 != (UDS_LogManager *)0x0) {
      pUVar8 = UDS_LogManager::GetInst();
      local_298._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_298,"ADS_EntityActorBase::PlayDestructionEffect",0x2a,Yes);
      UDS_LogManager::PrintLog(pUVar8,1,Warning,local_298.Ptr,0x352,L"Failed to spawn newGCActor.");
      if ((void *)local_298._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_298._padding_);
      }
    }
    iVar12 = 0x353;
    paVar10 = &bGEnsureHasExecuted<_8596615521003109549>;
  }
  else {
    this_00 = (UGeometryCollectionComponent *)pAVar7[1]._padding_;
    if (this_00 != (UGeometryCollectionComponent *)0x0) {
      uVar11 = (undefined7)((ulonglong)in_R8 >> 8);
      UGeometryCollectionComponent::SetRestCollection
                (this_00,(UGeometryCollection *)this->_padding_,true);
      (**(code **)(*(longlong *)this_00 + 0x6f0))(this_00,1);
      (**(code **)(*(longlong *)this_00 + 0x788))
                (this_00,::COLLISION_PROFILE_DYNAMIC_LAND,CONCAT71(uVar11,1));
      UGameplayStatics::FinishSpawningActor(pAVar7,&local_2f8,MultiplyWithRoot);
      local_3b8 = pAVar7;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pAVar7);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)&this->_padding_,(FObjectPtr)&local_3b8);
      UGeometryCollectionComponent::CrumbleActiveClusters(this_00);
      dStack_3a0 = local_2f8.Translation.XY.m128d_f64[1];
      local_3a8 = local_2f8.Translation.XY.m128d_f64[0];
      fVar14 = *(float *)((longlong)&this->_padding_ + 4);
      local_398 = local_2f8.Translation.ZW.m128d_f64[0] + __real_4034000000000000;
      if (fVar14 <= *(float *)&this->_padding_) {
        fVar14 = *(float *)&this->_padding_;
      }
      fVar13 = DS_CommonDataHelper::ImpulseStrength();
      (**(code **)(*(longlong *)this_00 + 0x728))(this_00,&local_3a8,fVar14 + fVar14,fVar13);
      local_3b0 = 0x800;
      (**(code **)(this->_padding_ + 0x58))(this,&local_3b0,0);
      return true;
    }
    pUVar8 = UDS_LogManager::GetInst();
    if (pUVar8 != (UDS_LogManager *)0x0) {
      pUVar8 = UDS_LogManager::GetInst();
      local_178._padding_ = (longlong)this_00;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_178,"ADS_EntityActorBase::PlayDestructionEffect",0x2a,Yes);
      UDS_LogManager::PrintLog(pUVar8,1,Warning,local_178.Ptr,0x35a,L"gcComp is nullptr.");
      if ((UGeometryCollectionComponent *)local_178._padding_ != (UGeometryCollectionComponent *)0x0
         ) {
        FMemory::Free((void *)local_178._padding_);
      }
    }
    iVar12 = 0x35b;
    paVar10 = &bGEnsureHasExecuted<_8596615521003109541>;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (paVar10,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\DS_EntityActorBase.cpp"
                     ,iVar12,"false");
  if (!bVar2) {
    return false;
  }
  pcVar1 = (code *)swi(3);
  uVar3 = (*pcVar1)();
  return (bool)uVar3;
}

// PostInitializeComponents @ 14bc555b0

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
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall ADS_EntityActorBase::PostInitializeComponents(ADS_EntityActorBase *this)

{
  UDS_BasicMovementComponent *pUVar1;
  code *pcVar2;
  UDS_AbilitySystemComponent *pUVar3;
  FWeakObjectPtr FVar4;
  bool bVar5;
  UDS_GameInstance *pUVar6;
  UObject *pUVar7;
  UClass *pUVar8;
  UDS_MovementCore *pUVar9;
  TMulticastDelegate<void___cdecl(FGameplayTag_const_&,bool),FDefaultDelegateUserPolicy> *this_00;
  FDelegateHandle FVar10;
  UDS_TriggerCore *pUVar11;
  UDS_ColliderCore *pUVar12;
  longlong *plVar13;
  undefined1 auStackY_248 [32];
  FWeakObjectPtr local_218;
  FWeakObjectPtr local_210;
  FWeakObjectPtr local_208;
  FWeakObjectPtr local_200;
  FWeakObjectPtr local_1f8;
  FWeakObjectPtr local_1f0;
  ADS_EntityActorBase *local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  UDS_BasicMovementComponent *local_1d8;
  ADS_EntityActorBase *local_1d0;
  ADS_EntityActorBase *local_1c8;
  undefined1 local_1c0 [32];
  UObject *local_1a0;
  longlong local_168;
  longlong local_158 [3];
  longlong *local_140;
  undefined1 local_128 [128];
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_248;
  AActor::PostInitializeComponents((AActor *)this);
  pUVar6 = UDS_GameInstance::GetInst();
  if (pUVar6 == (UDS_GameInstance *)0x0) {
    return;
  }
  pUVar7 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar7,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar8 = Z_Construct_UClass_UDS_EntityActorMovementCore_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)(local_1c0 + 0x18),pUVar8);
  local_1a0 = pUVar7;
  pUVar9 = (UDS_MovementCore *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)(local_1c0 + 0x18));
  if (local_168 != 0) {
    plVar13 = local_158;
    if (local_140 != (longlong *)0x0) {
      plVar13 = local_140;
    }
    (**(code **)(*plVar13 + 0x10))(plVar13);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar9 == (UDS_MovementCore *)0x0)) {
    (this->MovementCore).field0_0x0.DebugPtr = pUVar9;
    if (pUVar9 != (UDS_MovementCore *)0x0) goto LAB_14bc5568d;
  }
  else {
    UE::GC::MarkAsReachable((UObject *)pUVar9);
    (this->MovementCore).field0_0x0.DebugPtr = pUVar9;
LAB_14bc5568d:
    pUVar1 = (this->MovementComponent).field0_0x0.DebugPtr;
    pcVar2 = *(code **)(pUVar9->_padding_ + 0x2b0);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar1 != (UDS_BasicMovementComponent *)0x0) {
        UE::GC::MarkAsReachable((UObject *)pUVar1);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar1 != (UDS_BasicMovementComponent *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar1);
      }
    }
    local_218.ObjectIndex = 0;
    local_218.ObjectSerialNumber = 0;
    local_1d8 = pUVar1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 != (UDS_BasicMovementComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    FWeakObjectPtr::operator=(&local_218,(FObjectPtr)&local_1d8);
    FVar4 = local_218;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    local_210.ObjectIndex = 0;
    local_210.ObjectSerialNumber = 0;
    local_1d0 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=(&local_210,(FObjectPtr)&local_1d0);
    (*pcVar2)(pUVar9,local_210,FVar4);
  }
  pUVar3 = (this->AbilitySystemComponent).field0_0x0.DebugPtr;
  if (pUVar3 != (UDS_AbilitySystemComponent *)0x0) {
    UWN_AbilitySystemComponent::InitializeComponent((UWN_AbilitySystemComponent *)pUVar3);
    pUVar3 = (this->AbilitySystemComponent).field0_0x0.DebugPtr;
    FTickFunction::AddPrerequisite
              ((FTickFunction *)&this->_padding_,(UObject *)pUVar3,
               (FTickFunction *)&pUVar3->_padding_);
    this_00 = UWN_AbilitySystemComponent::GetChangedTagEvent
                        ((UWN_AbilitySystemComponent *)
                         (this->AbilitySystemComponent).field0_0x0.DebugPtr);
    uStack_1e0 = 0x2c0;
    local_1e8 = (ADS_EntityActorBase *)FDS_EntityBase::_vcall__152__flat______;
    local_1c0._16_8_ = CONCAT44(uStack_1dc,0x2c0);
    local_1c0._8_8_ = FDS_EntityBase::_vcall__152__flat______;
    FVar10 = TMulticastDelegateRegistration<void___cdecl(FGameplayTag_const_&,bool),FDefaultDelegateUserPolicy>
             ::AddUObject<ADS_EntityActorBase>
                       ((TMulticastDelegateRegistration<void___cdecl(FGameplayTag_const_&,bool),FDefaultDelegateUserPolicy>
                         *)this_00,(ADS_EntityActorBase *)local_1c0,(pmf_b004c65e *)this);
    this->_padding_ = *(longlong *)FVar10.ID;
  }
  pUVar7 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar7,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar8 = Z_Construct_UClass_UDS_TriggerCore_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_128,pUVar8);
  local_128._8_8_ = pUVar7;
  pUVar11 = (UDS_TriggerCore *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_128);
  if (local_128._64_8_ != 0) {
    plVar13 = (longlong *)(local_128 + 0x50);
    if ((longlong *)local_128._104_8_ != (longlong *)0x0) {
      plVar13 = (longlong *)local_128._104_8_;
    }
    (**(code **)(*plVar13 + 0x10))(plVar13);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar11 == (UDS_TriggerCore *)0x0)) {
    (this->TriggerCore).field0_0x0.DebugPtr = pUVar11;
    if (pUVar11 == (UDS_TriggerCore *)0x0) goto LAB_14bc558ba;
  }
  else {
    UE::GC::MarkAsReachable((UObject *)pUVar11);
    (this->TriggerCore).field0_0x0.DebugPtr = pUVar11;
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  local_208.ObjectIndex = 0;
  local_208.ObjectSerialNumber = 0;
  local_1c8 = this;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&local_208,(FObjectPtr)&local_1c8);
  local_1f8 = local_208;
  bVar5 = FWeakObjectPtr::IsValid(&local_1f8);
  if (bVar5) {
    (pUVar11->OwnerActor).WeakPtr = local_1f8;
  }
LAB_14bc558ba:
  pUVar7 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar7,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar8 = Z_Construct_UClass_UDS_ColliderCore_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar8);
  local_a8._8_8_ = pUVar7;
  pUVar12 = (UDS_ColliderCore *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar13 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar13 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar13 + 0x10))(plVar13);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar12 == (UDS_ColliderCore *)0x0))
  {
    (this->ColliderCore).field0_0x0.DebugPtr = pUVar12;
    if (pUVar12 == (UDS_ColliderCore *)0x0) {
      return;
    }
  }
  else {
    UE::GC::MarkAsReachable((UObject *)pUVar12);
    (this->ColliderCore).field0_0x0.DebugPtr = pUVar12;
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  local_200.ObjectIndex = 0;
  local_200.ObjectSerialNumber = 0;
  local_1e8 = this;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&local_200,(FObjectPtr)&local_1e8);
  local_1f0 = local_200;
  bVar5 = FWeakObjectPtr::IsValid(&local_1f0);
  if (bVar5) {
    (pUVar12->OwnerActor).WeakPtr = local_1f0;
  }
  else {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7585797269991981072>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\Components\\Collider\\DS_ColliderCore.cpp"
                       ,0x10,"InActor.IsValid()");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// RefreshEntity @ 14bc56e40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall ADS_EntityActorBase::RefreshEntity(ADS_EntityActorBase *this)

{
  longlong *this_00;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UDS_LogManager *pUVar4;
  longlong lVar5;
  UAssetManager *pUVar6;
  undefined8 *puVar7;
  ulong64 uVar8;
  TSharedPtr<FStreamableHandle,1> *pTVar9;
  undefined1 auStackY_268 [32];
  undefined1 local_218 [8];
  FDelegateAllocation local_210;
  undefined1 local_200 [24];
  code *local_1e8 [4];
  longlong *local_1c8;
  FString local_1c0;
  TSharedPtr<FStreamableHandle,1> local_1b0;
  FDestructionSentinel local_1a0;
  FDelegateAllocation *local_188;
  source_location local_178;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_268;
  bVar2 = FDS_EntityBase::RefreshEntity((FDS_EntityBase *)this);
  if (bVar2) {
    this_00 = &this[-1]._padding_;
    if ((UCapsuleComponent *)this->_padding_ != (UCapsuleComponent *)0x0) {
      UCapsuleComponent::SetCapsuleSize
                ((UCapsuleComponent *)this->_padding_,*(float *)((longlong)&this->_padding_ + 4),
                 *(float *)&this->_padding_,true);
      if (((UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X != (double)this->_padding_) ||
          (UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y != (double)this->_padding_)) ||
         (UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z != (double)this->_padding_)) {
        local_1e8[0] = (code *)this->_padding_;
        local_1e8[1] = (code *)this->_padding_;
        local_1e8[2] = (code *)this->_padding_;
        USceneComponent::SetWorldScale3D
                  ((USceneComponent *)this[-1]._padding_,(TVector<double> *)local_1e8);
      }
      ClearDestructionGC((ADS_EntityActorBase *)this_00);
      lVar5 = (**(code **)(this->_padding_ + 0x28))(this);
      if (*(longlong *)(lVar5 + 0x68) != 0) {
        pUVar6 = UAssetManager::Get();
        local_200._0_4_ = 0x170;
        local_200._4_4_ = 0x3d;
        local_1c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_200._8_8_ =
             "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\DS_EntityActorBase.cpp"
        ;
        local_1c0.Data.ArrayNum = 0;
        local_1c0.Data.ArrayMax = 0;
        local_200._16_8_ = "bool __cdecl ADS_EntityActorBase::RefreshEntity(void)";
        local_1e8[0] = OnLoadCompleteGCResource;
        local_1e8[1] = (code *)((ulonglong)local_1b0.SharedReferenceCount.ReferenceController._4_4_
                               << 0x20);
        local_218 = (undefined1  [8])0x0;
        local_210.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_210.DelegateSize = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_218,
                   (FWriteAccessScope *)&local_1a0);
        local_188 = &local_210;
        puVar7 = UE::Core::Private::DelegateAllocate(0x30,&local_210);
        if (puVar7 != (undefined8 *)0x0) {
          *puVar7 = &
                    ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar8 = FDelegateHandle::GenerateNewID();
          puVar7[2] = uVar8;
          *puVar7 = &
                    ___7__TBaseUObjectMethodDelegateInstance__0A_VADS_EntityActorBase____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
          ;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_00 != (longlong *)0x0))
          {
            UE::GC::MarkAsReachable((UObject *)this_00);
          }
          puVar7[3] = 0;
          local_1c8 = this_00;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_00 != (longlong *)0x0))
          {
            UE::GC::MarkAsReachable((UObject *)this_00);
          }
          FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar7 + 3),(FObjectPtr)&local_1c8);
          puVar7[4] = local_1e8[0];
          puVar7[5] = local_1e8[1];
        }
        if (local_1a0.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1a0.Accessor,&local_1a0);
        }
        local_178._Column = local_200._4_4_;
        local_178._Line = local_200._0_4_;
        local_178._File = (char *)local_200._8_8_;
        local_178._Function = (char *)local_200._16_8_;
        pTVar9 = FStreamableManager::
                 RequestAsyncLoad<FSoftObjectPath_const_&,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,void>
                           (&pUVar6->StreamableManager,&local_1b0,(FSoftObjectPath *)(lVar5 + 0x68),
                            (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_218,0,
                            false,false,&local_1c0,(FSourceLocation *)&local_178);
        if ((TSharedPtr<FStreamableHandle,1> *)&this->_padding_ != pTVar9) {
          this->_padding_ = (longlong)pTVar9->Object;
          pTVar9->Object = (FStreamableHandle *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    ((FSharedReferencer<1> *)&this->_padding_,&pTVar9->SharedReferenceCount);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)
                   CONCAT44(local_1b0.SharedReferenceCount.ReferenceController._4_4_,
                            local_1b0.SharedReferenceCount.ReferenceController._0_4_));
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_218,
                   (FWriteAccessScope *)local_200);
        if ((local_210.DelegateSize != 0) &&
           (local_210.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
          (*(code *)**(undefined8 **)local_210.DelegateAllocator)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&local_210,0,0,0x10);
          local_210.DelegateSize = 0;
        }
        if (local_200[0x10] == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                    ((FMRSWRecursiveAccessDetector *)local_200._8_8_,
                     (FDestructionSentinel *)local_200);
        }
        if (local_210.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)local_210.DelegateAllocator);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_218);
      }
      return true;
    }
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"ADS_EntityActorBase::RefreshEntity",0x22,Yes);
      UDS_LogManager::PrintLog(pUVar4,1,Warning,local_158.Ptr,0x15d,L"CapsuleComponent is nullptr.")
      ;
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8596615521003110050>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\DS_EntityActorBase.cpp"
                       ,0x15e,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// RemoveEntity @ 14bc5a350

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall ADS_EntityActorBase::RemoveEntity(ADS_EntityActorBase *this,float param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  FTimerManager *this_00;
  undefined8 *puVar4;
  ulong64 uVar5;
  UDS_EntityManager *this_01;
  FWeakObjectPtr local_res18;
  UDS_EntityManager *local_res20;
  longlong *local_68;
  FDelegateAllocation local_60;
  code *local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  local_res20 = UDS_EntityManager::GetInst();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_res20 != (UDS_EntityManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res20);
  }
  local_res18.ObjectIndex = 0;
  local_res18.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_res20 != (UDS_EntityManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res20);
  }
  FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_res20);
  bVar3 = FWeakObjectPtr::IsValid(&local_res18);
  if (bVar3) {
    plVar1 = &this[-1]._padding_;
    if (param_1 <= 0.0) {
      this_01 = (UDS_EntityManager *)FWeakObjectPtr::Get(&local_res18);
      UDS_EntityManager::RemoveEntity(this_01,this->_padding_,false);
    }
    else {
      *(undefined1 *)&this->_padding_ = 1;
      this_00 = FDS_TimerManager::Get((UObject *)0x0);
      uStack_40 = 0;
      local_48 = OnRemoveEntityTimerFinish;
      local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_60.DelegateSize = 0;
      puVar4 = UE::Core::Private::DelegateAllocate(0x30,&local_60);
      if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = &
                  ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
        ;
        uVar5 = FDelegateHandle::GenerateNewID();
        puVar4[2] = uVar5;
        *puVar4 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VADS_EntityActorBase____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
        ;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (plVar1 != (longlong *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)plVar1);
        }
        puVar4[3] = 0;
        local_68 = plVar1;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (plVar1 != (longlong *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)plVar1);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar4 + 3),(FObjectPtr)&local_68);
        puVar4[4] = local_48;
        puVar4[5] = CONCAT44(uStack_3c,uStack_40);
      }
      FTimerManager::SetTimer
                (this_00,(FTimerHandle *)&this->_padding_,
                 (TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy> *)
                 &local_60,param_1,false,__real_bf800000);
      if (local_60.DelegateSize != 0) {
        if (local_60.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          return;
        }
        (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_60,0,0,0x10);
        local_60.DelegateSize = 0;
      }
      if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_60.DelegateAllocator);
        return;
      }
    }
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8596615521003109666>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\DS_EntityActorBase.cpp"
                       ,0x2de,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// RemoveHiddenPolicy @ 14bc5a870

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
ADS_EntityActorBase::RemoveHiddenPolicy
          (ADS_EntityActorBase *this,EDS_EntityHiddenPolicy *param_1,float param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  FTimerManager *pFVar3;
  FTimerData *pFVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  longlong *local_res8;
  FDelegateAllocation local_58;
  code *local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  this->_padding_ = this->_padding_ & ~*param_1;
  FDS_EntityBase::UpdateHiddenPolicy((FDS_EntityBase *)this);
  if (0.0 < param_2) {
    plVar1 = &this->_padding_;
    plVar2 = &this[-1]._padding_;
    if (this->_padding_ != 0) {
      pFVar3 = FDS_TimerManager::Get((UObject *)0x0);
      pFVar4 = FTimerManager::FindTimer(pFVar3,(FTimerHandle *)plVar1);
      if (pFVar4 != (FTimerData *)0x0) {
        FTimerManager::InternalClearTimer(pFVar3,(FTimerHandle)*plVar1);
      }
      *plVar1 = 0;
    }
    pFVar3 = FDS_TimerManager::Get((UObject *)0x0);
    uStack_40 = 0;
    local_48 = ExecuteHiddenPolicy;
    local_58.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_58.DelegateSize = 0;
    puVar5 = UE::Core::Private::DelegateAllocate(0x38,&local_58);
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &
                ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy__W4EDS_EntityHiddenPolicy___N__6B_
      ;
      puVar5[1] = *param_1;
      *(undefined1 *)(puVar5 + 2) = 1;
      uVar6 = FDelegateHandle::GenerateNewID();
      puVar5[3] = uVar6;
      *puVar5 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VADS_EntityActorBase____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy__W4EDS_EntityHiddenPolicy___N__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (plVar2 != (longlong *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)plVar2);
      }
      puVar5[4] = 0;
      local_res8 = plVar2;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (plVar2 != (longlong *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)plVar2);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar5 + 4),(FObjectPtr)&local_res8);
      puVar5[5] = local_48;
      puVar5[6] = CONCAT44(uStack_3c,uStack_40);
    }
    FTimerManager::SetTimer
              (pFVar3,(FTimerHandle *)&this->_padding_,
               (TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy> *)&local_58
               ,param_2,false,__real_bf800000);
    if ((local_58.DelegateSize != 0) &&
       (local_58.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_58.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_58,0,0,0x10);
      local_58.DelegateSize = 0;
    }
    if (local_58.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_58.DelegateAllocator);
    }
  }
  return;
}

// ResetToDefaultMaterial @ 14bc5b0d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ADS_EntityActorBase::ResetToDefaultMaterial(ADS_EntityActorBase *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UDS_PartsSystemControl *this_00;
  UObject *pUVar5;
  UDS_LogManager *pUVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  undefined1 auStackY_188 [32];
  FWeakObjectPtr local_158;
  FWeakObjectPtr local_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_188;
  (**(code **)(this[-1]._padding_ + 0x760))();
  bVar3 = TWeakObjectPtr<UDS_PartsSystemControl,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_PartsSystemControl,FWeakObjectPtr> *)&local_150,(void *)0x0
                    );
  if (bVar3) {
    (**(code **)(this->_padding_ + 0x80))(this);
    bVar3 = TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr> *)&local_158,
                       (void *)0x0);
    if (!bVar3) {
      iVar1 = (int)this->_padding_;
      pUVar5 = FWeakObjectPtr::Get(&local_158);
      iVar4 = (**(code **)(*(longlong *)pUVar5 + 0x810))(pUVar5);
      if (iVar1 == iVar4) {
        uVar8 = 0;
        if (0 < iVar1) {
          lVar9 = 0;
          do {
            pUVar5 = FWeakObjectPtr::Get(&local_158);
            pcVar2 = *(code **)(*(longlong *)pUVar5 + 0x6b8);
            uVar7 = 0;
            if ((int)uVar8 < (int)this->_padding_) {
              uVar7 = ~uVar8 >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            (*pcVar2)(pUVar5,uVar8,*(undefined8 *)(this->_padding_ + lVar9 * 8));
            uVar8 = uVar8 + 1;
            lVar9 = lVar9 + 1;
          } while (lVar9 < iVar1);
        }
      }
      else {
        pUVar6 = UDS_LogManager::GetInst();
        if (pUVar6 != (UDS_LogManager *)0x0) {
          pUVar6 = UDS_LogManager::GetInst();
          local_148._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_148,"ADS_EntityActorBase::ResetToDefaultMaterial",0x2b,Yes);
          UDS_LogManager::PrintLog
                    (pUVar6,1,Warning,local_148.Ptr,0x242,L"defMatCount != curMatCount.");
          if ((void *)local_148._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_148._padding_);
          }
        }
      }
    }
  }
  else {
    this_00 = (UDS_PartsSystemControl *)FWeakObjectPtr::Get(&local_150);
    UDS_PartsSystemControl::ResetToDefaultMaterial(this_00);
  }
  return;
}

// SetHiddenEntityActor @ 14bc5efd0

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
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */

void __thiscall ADS_EntityActorBase::SetHiddenEntityActor(ADS_EntityActorBase *this,bool param_1)

{
  undefined1 *puVar1;
  ForElementType<UPrimitiveComponent_*> FVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined1 *puVar5;
  UDS_WidgetComponent *this_00;
  longlong lVar6;
  code *pcVar7;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *pTVar8;
  bool bVar9;
  UObject *pUVar10;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *pTVar11;
  UClass *pUVar12;
  AActor *pAVar13;
  UClass *pUVar14;
  UClass *pUVar15;
  UDS_PartsSystemControl *this_01;
  FScriptContainerElement *pFVar16;
  int iVar17;
  ForElementType<UPrimitiveComponent_*> FVar18;
  uint uVar19;
  uint uVar20;
  undefined1 *puVar21;
  ForAnyElementType FVar22;
  uint *puVar23;
  UClass *pUVar24;
  ADS_EntityActorBase *pAVar25;
  undefined1 auStackY_1e8 [32];
  undefined1 local_1b7;
  undefined1 local_1b6 [6];
  FWeakObjectPtr local_1b0;
  ADS_EntityActorBase *local_1a8;
  FWeakObjectPtr local_1a0;
  TArray<FPrimitiveComponentId,TSizedDefaultAllocator<32>_> local_198;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *local_188;
  uint uStack_180;
  uint uStack_17c;
  undefined1 *local_178;
  undefined4 uStack_170;
  uint uStack_16c;
  uint local_168;
  uint uStack_164;
  int iStack_160;
  undefined4 uStack_15c;
  int local_158;
  UClass *local_150;
  UClass *local_148;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *local_140;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_138;
  undefined8 uStack_118;
  ForElementType<UPrimitiveComponent_*> local_110;
  int local_48;
  int local_44;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  local_1a8 = this;
  (**(code **)(this->_padding_ + 0x150))();
  bVar9 = TWeakObjectPtr<AActor,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<AActor,FWeakObjectPtr> *)&local_1b0,(void *)0x0);
  if (bVar9) {
    bVar9 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8596615521003109633>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\DS_EntityActorBase.cpp"
                       ,0x2ff,"false");
    if (!bVar9) {
      return;
    }
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pUVar10 = FWeakObjectPtr::Get(&local_1b0);
  pTVar11 = ObjectPtrDecay<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>,UE::Core::Private::TObjectPtrDecayTypeOf<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>_>,TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator>_>
                      ((TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
                        *)&pUVar10[0xe].field_0x18);
  uVar4 = *(uint *)&(pTVar11->Elements).field_0x28;
  pUVar15 = (UClass *)0x0;
  uStack_180 = 0;
  pUVar24 = (UClass *)0x0;
  local_168 = 0;
  uStack_17c = 1;
  puVar1 = &(pTVar11->Elements).field_0x10;
  uStack_16c = local_168;
  if (uVar4 != 0) {
    puVar23 = *(uint **)&(pTVar11->Elements).field_0x20;
    if (puVar23 == (uint *)0x0) {
      puVar23 = (uint *)puVar1;
    }
    uVar20 = *puVar23;
    pUVar12 = pUVar15;
    pUVar14 = pUVar15;
    local_168 = 0;
    uStack_180 = 0;
    while (uVar20 == 0) {
      uStack_180 = (int)pUVar12 + 1;
      pUVar12 = (UClass *)(ulonglong)uStack_180;
      local_168 = (int)pUVar14 + 0x20;
      pUVar14 = (UClass *)(ulonglong)local_168;
      uStack_16c = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_180)
      goto LAB_14bc5f11c;
      uVar20 = puVar23[(int)uStack_180];
    }
    uStack_17c = ~(uVar20 - 1) & uVar20;
    uVar3 = (ulonglong)uStack_17c * 2 + 1;
    lVar6 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    local_158 = (int)lVar6;
    uStack_16c = local_158 + -1 + local_168;
    if ((int)uVar4 < (int)uStack_16c) {
      uStack_16c = uVar4;
    }
  }
LAB_14bc5f11c:
  uVar20 = *(uint *)&(pTVar11->Elements).field_0x28;
  uVar19 = uVar20 & 0xffffffe0;
  iStack_160 = *(int *)&(pTVar11->Elements).field_0x8 - *(int *)&(pTVar11->Elements).field_0x34;
  uStack_170 = 0xffffffff;
  TStack_138._padding_ = CONCAT44(uStack_17c,uStack_180);
  TStack_138.CurrentBitIndex = uStack_16c;
  TStack_138.UnvisitedBitMask = 0xffffffff;
  iVar17 = (int)uVar20 >> 5;
  TStack_138._28_4_ = uStack_16c;
  TStack_138.BaseBitIndex = local_168;
  uStack_118 = CONCAT44(uStack_15c,iStack_160);
  local_188 = pTVar11;
  local_178 = puVar1;
  uStack_164 = uStack_16c;
  local_140 = pTVar11;
  TStack_138.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar20 < 0) || ((int)uVar4 < (int)uVar20)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar4 = *(uint *)&(pTVar11->Elements).field_0x28;
  if (uVar20 != uVar4) {
    puVar5 = *(undefined1 **)&(pTVar11->Elements).field_0x20;
    puVar21 = puVar1;
    if (puVar5 != (undefined1 *)0x0) {
      puVar21 = puVar5;
    }
    uVar20 = -1 << ((byte)uVar20 & 0x1f) & *(uint *)(puVar21 + (longlong)iVar17 * 4);
    while (uVar20 == 0) {
      iVar17 = iVar17 + 1;
      uVar19 = uVar19 + 0x20;
      uVar20 = uVar4;
      if ((int)(((int)(uVar4 - 1) >> 0x1f & 0x1fU) + (uVar4 - 1)) >> 5 < iVar17) goto LAB_14bc5f220;
      uVar20 = *(uint *)(puVar21 + (longlong)iVar17 * 4);
    }
    uVar3 = (ulonglong)(~(uVar20 - 1) & uVar20) * 2 + 1;
    lVar6 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    uVar20 = (int)lVar6 + -1 + uVar19;
    if ((int)uVar4 < (int)uVar20) {
      uVar20 = uVar4;
    }
  }
LAB_14bc5f220:
  while( true ) {
    pTVar8 = local_140;
    if (*(int *)&(local_140->Elements).field_0x8 - *(int *)&(local_140->Elements).field_0x34 !=
        (int)uStack_118) {
      `TSparseArray<TSparseSetElement<UActorComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_1b7);
    }
    pAVar25 = local_1a8;
    if (((TStack_138.CurrentBitIndex == uVar20) &&
        (TStack_138.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar8 == pTVar11)
       ) break;
    this_00 = *(UDS_WidgetComponent **)
               (*(longlong *)&pTVar8->Elements + (longlong)TStack_138.CurrentBitIndex * 0x10);
    pUVar12 = Z_Construct_UClass_UDS_WidgetComponent_NoRegister();
    iVar17 = (int)pUVar12->_padding_;
    if ((iVar17 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar17 * 8) ==
        &pUVar12->_padding_)) {
      pUVar12 = Z_Construct_UClass_UDS_WidgetComponent_NoRegister();
      iVar17 = (int)pUVar12->_padding_;
      if ((iVar17 <= *(int *)(this_00->_padding_ + 0x38)) &&
         ((((longlong *)
            *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar17 * 8) ==
            &pUVar12->_padding_ && (this_00 != (UDS_WidgetComponent *)0x0)) &&
          ((char)this_00->_padding_ == '\x01')))) {
        UDS_WidgetComponent::SetComponentWidgetVisibility(this_00,!param_1);
      }
    }
    TStack_138.UnvisitedBitMask = TStack_138.UnvisitedBitMask & ~TStack_138._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_138);
  }
  if (param_1) {
    pAVar13 = (AActor *)FWeakObjectPtr::Get(&local_1b0);
    WN_RegisterHiddenPrimitives(pAVar13);
    pAVar25 = local_1a8;
    goto LAB_14bc5f514;
  }
  (**(code **)(local_1a8[-1]._padding_ + 0x760))();
  bVar9 = TWeakObjectPtr<UDS_PartsSystemControl,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_PartsSystemControl,FWeakObjectPtr> *)&local_1a0,(void *)0x0
                    );
  if (bVar9) {
    pAVar13 = (AActor *)FWeakObjectPtr::Get(&local_1b0);
    WN_UnregisterHiddenPrimitives(pAVar13);
    goto LAB_14bc5f514;
  }
  local_110.SecondaryData = (ForElementType<UPrimitiveComponent_*>)0x0;
  local_44 = 0x18;
  pAVar13 = (AActor *)FWeakObjectPtr::Get(&local_1b0);
  local_48 = 0;
  if ((local_44 < 0) && (local_44 != 0)) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<UPrimitiveComponent_*>_>
              (8,8,0,&local_110,0,&local_44);
  }
  pUVar12 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar12 != (UClass *)0x0) goto LAB_14bc5f3bb;
  }
  else {
    pUVar24 = pUVar15;
    if (pUVar12 != (UClass *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar12);
LAB_14bc5f3bb:
      pUVar14 = Z_Construct_UClass_UActorComponent_NoRegister();
      pUVar24 = pUVar15;
      if (pUVar14 != (UClass *)0x0) {
        iVar17 = (int)pUVar14->_padding_;
        if (((int)pUVar12->_padding_ < iVar17) ||
           ((longlong *)*(undefined1 **)(pUVar12->_padding_ + (longlong)iVar17 * 8) !=
            &pUVar14->_padding_)) {
          bVar9 = false;
        }
        else {
          bVar9 = true;
        }
        if (bVar9) {
          pUVar24 = pUVar12;
        }
      }
    }
  }
  pUVar15 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar24 == pUVar15) {
    local_150 = pUVar12;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar12 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar12);
    }
    AActor::
    ForEachComponent_Internal<UPrimitiveComponent,1,1,_AActor::GetComponents<UPrimitiveComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
              (pAVar13,(TSubclassOf<UActorComponent>)&local_150,
               (TArray<UPrimitiveComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                *)&local_110);
  }
  else {
    local_148 = pUVar12;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar12 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar12);
    }
    AActor::
    ForEachComponent_Internal<UPrimitiveComponent,0,1,_AActor::GetComponents<UPrimitiveComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
              (pAVar13,(TSubclassOf<UActorComponent>)&local_148,
               (TArray<UPrimitiveComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                *)&local_110);
  }
  this_01 = (UDS_PartsSystemControl *)FWeakObjectPtr::Get(&local_1a0);
  UDS_PartsSystemControl::GetHiddenComponentIds(this_01,&local_198,true);
  iVar17 = local_48;
  FVar18 = (ForElementType<UPrimitiveComponent_*>)&local_110;
  if (local_110.SecondaryData != (ForElementType<UPrimitiveComponent_*>)0x0) {
    FVar18 = local_110.SecondaryData;
  }
  FVar2 = (ForElementType<UPrimitiveComponent_*>)((longlong)FVar18 + (longlong)local_48 * 8);
  FVar22.Data = local_198.AllocatorInstance.Data;
  while( true ) {
    if (local_48 != iVar17) {
      `TCheckedPointerIterator<UPrimitiveComponent_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_1b6);
      FVar22.Data = local_198.AllocatorInstance.Data;
    }
    if (FVar18 == FVar2) break;
    for (pFVar16 = FVar22.Data; pFVar16 != FVar22.Data + (longlong)local_198.ArrayNum * 4;
        pFVar16 = pFVar16 + 4) {
      if (*(uint *)pFVar16 ==
          ((*(UPrimitiveComponent **)FVar18)->SceneData).PrimitiveSceneId.PrimIDValue) {
        if (-1 < (int)((longlong)pFVar16 - (longlong)FVar22.Data >> 2)) goto LAB_14bc5f4f0;
        break;
      }
    }
    WN_UnregisterHiddenPrimitive(*(UPrimitiveComponent **)FVar18,false);
    FVar22.Data = local_198.AllocatorInstance.Data;
LAB_14bc5f4f0:
    FVar18 = (ForElementType<UPrimitiveComponent_*>)((longlong)FVar18 + 8);
  }
  if (FVar22.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar22.Data);
  }
  if (local_110.SecondaryData != (ForElementType<UPrimitiveComponent_*>)0x0) {
    FMemory::Free((void *)local_110.SecondaryData);
  }
LAB_14bc5f514:
  (**(code **)(pAVar25->_padding_ + 0x1e8))(pAVar25,!param_1);
  *(bool *)((longlong)&pAVar25->_padding_ + 1) = param_1;
  return;
}

// SetMaterialParamColor @ 14bc60240

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterSlotName": Some values do not have unique names */

void __thiscall
ADS_EntityActorBase::SetMaterialParamColor
          (ADS_EntityActorBase *this,
          TArray<FDS_ColorParameterValue,TSizedDefaultAllocator<32>_> *param_1)

{
  bool bVar1;
  UObject *pUVar2;
  UWN_CS_CharacterSoul *pUVar3;
  UDS_PartsSystemControl *this_00;
  FWeakObjectPtr local_res8 [4];
  
  (**(code **)(this[-1]._padding_ + 0x760))();
  bVar1 = TWeakObjectPtr<UDS_PartsSystemControl,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_PartsSystemControl,FWeakObjectPtr> *)local_res8,(void *)0x0
                    );
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get(local_res8);
    if (*(UWN_CS_CharacterCore **)(pUVar2 + 1) != (UWN_CS_CharacterCore *)0x0) {
      pUVar3 = UWN_CS_CharacterCore::GetSoul(*(UWN_CS_CharacterCore **)(pUVar2 + 1));
      if (pUVar3 != (UWN_CS_CharacterSoul *)0x0) {
        this_00 = (UDS_PartsSystemControl *)FWeakObjectPtr::Get(local_res8);
        UDS_PartsSystemControl::SetPartsColorParams(this_00,FullBody,param_1);
      }
    }
  }
  return;
}

// SetMaterialParamScalar @ 14bc60780

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterSlotName": Some values do not have unique names */

void __thiscall
ADS_EntityActorBase::SetMaterialParamScalar
          (ADS_EntityActorBase *this,
          TArray<FDS_ScalarParameterValue,TSizedDefaultAllocator<32>_> *param_1)

{
  bool bVar1;
  UObject *pUVar2;
  UWN_CS_CharacterSoul *pUVar3;
  UDS_PartsSystemControl *this_00;
  FWeakObjectPtr local_res8 [4];
  
  (**(code **)(this[-1]._padding_ + 0x760))();
  bVar1 = TWeakObjectPtr<UDS_PartsSystemControl,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_PartsSystemControl,FWeakObjectPtr> *)local_res8,(void *)0x0
                    );
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get(local_res8);
    if (*(UWN_CS_CharacterCore **)(pUVar2 + 1) != (UWN_CS_CharacterCore *)0x0) {
      pUVar3 = UWN_CS_CharacterCore::GetSoul(*(UWN_CS_CharacterCore **)(pUVar2 + 1));
      if (pUVar3 != (UWN_CS_CharacterSoul *)0x0) {
        this_00 = (UDS_PartsSystemControl *)FWeakObjectPtr::Get(local_res8);
        UDS_PartsSystemControl::SetPartsScalarParams(this_00,FullBody,param_1);
      }
    }
  }
  return;
}

// SetMaterialParamVector @ 14bc60c70

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterSlotName": Some values do not have unique names */

void __thiscall
ADS_EntityActorBase::SetMaterialParamVector
          (ADS_EntityActorBase *this,
          TArray<FDS_VectorParameterValue,TSizedDefaultAllocator<32>_> *param_1)

{
  bool bVar1;
  UObject *pUVar2;
  UWN_CS_CharacterSoul *pUVar3;
  UDS_PartsSystemControl *this_00;
  FWeakObjectPtr local_res8 [4];
  
  (**(code **)(this[-1]._padding_ + 0x760))();
  bVar1 = TWeakObjectPtr<UDS_PartsSystemControl,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_PartsSystemControl,FWeakObjectPtr> *)local_res8,(void *)0x0
                    );
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get(local_res8);
    if (*(UWN_CS_CharacterCore **)(pUVar2 + 1) != (UWN_CS_CharacterCore *)0x0) {
      pUVar3 = UWN_CS_CharacterCore::GetSoul(*(UWN_CS_CharacterCore **)(pUVar2 + 1));
      if (pUVar3 != (UWN_CS_CharacterSoul *)0x0) {
        this_00 = (UDS_PartsSystemControl *)FWeakObjectPtr::Get(local_res8);
        UDS_PartsSystemControl::SetPartsVectorParams(this_00,FullBody,param_1);
      }
    }
  }
  return;
}

// SetOutline @ 14bc619a0

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ADS_EntityActorBase::SetOutline(ADS_EntityActorBase *this,bool param_1)

{
  bool bVar1;
  UDS_PartsSystemControl *this_00;
  FWeakObjectPtr local_res8;
  FLinearColor_u_0 local_18;
  
  (**(code **)(this[-1]._padding_ + 0x760))(&this[-1]._padding_,&local_res8);
  bVar1 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar1) {
    this_00 = (UDS_PartsSystemControl *)FWeakObjectPtr::Get(&local_res8);
    local_18._0_8_ = *(undefined8 *)((longlong)&this->_padding_ + 4);
    local_18._8_8_ = *(undefined8 *)((longlong)&this->_padding_ + 4);
    UDS_PartsSystemControl::SetOutline(this_00,param_1,(FLinearColor *)&local_18._s_0);
  }
  return;
}

// SetParentEntity @ 14bc62f50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
ADS_EntityActorBase::SetParentEntity
          (ADS_EntityActorBase *this,TWeakObjectPtr<AActor,FWeakObjectPtr> param_1)

{
  bool bVar1;
  AActor *pAVar2;
  AActor *pAVar3;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10;
  FName local_res18;
  
  local_res10 = param_1.WeakPtr;
  FDS_EntityBase::SetParentEntity((FDS_EntityBase *)this,param_1);
  (**(code **)(this->_padding_ + 0x150))(this,&local_res8);
  bVar1 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar1) {
    bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)&this->_padding_ + 4));
    if (!bVar1) {
      FWeakObjectPtr::Get(&local_res8);
      pAVar2 = (AActor *)FWeakObjectPtr::Get(&local_res8);
      AActor::DetachFromActor(pAVar2,&FDetachmentTransformRules::KeepWorldTransform);
      return;
    }
    pAVar2 = (AActor *)FWeakObjectPtr::Get(&local_res8);
    local_res18.ComparisonIndex.Value = 0;
    local_res18.Number = 0;
    pAVar3 = (AActor *)FWeakObjectPtr::Get(&local_res10);
    AActor::AttachToActor
              (pAVar2,pAVar3,&FAttachmentTransformRules::KeepRelativeTransform,local_res18);
  }
  return;
}

// Tick @ 14bc66790

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall ADS_EntityActorBase::Tick(ADS_EntityActorBase *this,float param_1)

{
  longlong *plVar1;
  UDS_SyncRecvComponent *pUVar2;
  UDS_MovementCore *pUVar3;
  double dVar4;
  char cVar5;
  bool bVar6;
  UDS_EntityManager *pUVar7;
  FDS_EntityBase *pFVar8;
  FDS_EntityBase *pFVar9;
  float local_res8 [2];
  float local_res10 [2];
  float local_res18 [2];
  undefined8 local_res20;
  
  local_res10[0] = param_1;
  AActor::Tick((AActor *)this,param_1);
  pUVar2 = (this->SyncRecvComponent).field0_0x0.DebugPtr;
  if (pUVar2 != (UDS_SyncRecvComponent *)0x0) {
    (**(code **)(pUVar2->_padding_ + 0x2c8))(pUVar2,local_res10[0]);
  }
  plVar1 = &this->_padding_;
  cVar5 = (**(code **)(*plVar1 + 0x88))(plVar1);
  if ((cVar5 == '\x01') &&
     (pUVar3 = (this->MovementCore).field0_0x0.DebugPtr, pUVar3 != (UDS_MovementCore *)0x0)) {
    (**(code **)(pUVar3->_padding_ + 0x2c0))(pUVar3,local_res10);
  }
  bVar6 = UDS_IngameState::IsNpcTalking();
  if (((((!bVar6) && (cVar5 = (**(code **)(this->_padding_ + 0x770))(this), cVar5 == '\0')) &&
       (pUVar7 = UDS_EntityManager::GetInst(), pUVar7 != (UDS_EntityManager *)0x0)) &&
      ((pFVar8 = UDS_EntityManager::FindEntityBase(pUVar7,this->_padding_),
       pFVar8 != (FDS_EntityBase *)0x0 &&
       (pUVar7 = UDS_EntityManager::GetInst(), pUVar7 != (UDS_EntityManager *)0x0)))) &&
     (pFVar9 = UDS_EntityManager::GetCurrentMainCharEntityBase(pUVar7,true),
     pFVar9 != (FDS_EntityBase *)0x0)) {
    dVar4 = (double)(**(code **)(*plVar1 + 0x68))(plVar1);
    local_res8[0] = (float)dVar4;
    dVar4 = (double)(**(code **)(*plVar1 + 0x70))(plVar1);
    local_res18[0] = (float)dVar4;
    if ((0.0 < local_res8[0]) && (0.0 < local_res18[0])) {
      bVar6 = DS_Util::IsCloseDist(pFVar8,pFVar9,local_res8);
      if (bVar6) {
        local_res20 = 0x10;
        (**(code **)(*plVar1 + 0x60))(plVar1,&local_res20,0);
        return;
      }
      bVar6 = DS_Util::IsCloseDist(pFVar8,pFVar9,local_res18);
      if (!bVar6) {
        local_res20 = 0x10;
        (**(code **)(*plVar1 + 0x58))(plVar1,&local_res20,0);
      }
    }
  }
  return;
}

// UpdateMaskValue @ 14bc6cfa0

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterSlotName": Some values do not have unique names */

void __thiscall ADS_EntityActorBase::UpdateMaskValue(ADS_EntityActorBase *this,float param_1)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  UDS_PartsSystemControl *this_00;
  FWeakObjectPtr local_res8;
  FName local_res18 [2];
  TArray<FDS_ScalarParameterValue,TSizedDefaultAllocator<32>_> local_28 [2];
  
  (**(code **)(this->_padding_ + 0x760))();
  bVar1 = TWeakObjectPtr<UDS_PartsSystemControl,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_PartsSystemControl,FWeakObjectPtr> *)&local_res8,
                     (void *)0x0);
  if (!bVar1) {
    local_28[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28[0].ArrayNum = 0;
    local_28[0].ArrayMax = 0;
    ::FName::FName(local_res18,L"MaskValue");
    iVar2 = local_28[0].ArrayNum;
    if (local_28[0].ArrayNum == local_28[0].ArrayMax) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x40c,&local_28[0].AllocatorInstance,&local_28[0].ArrayMax);
    }
    lVar3 = (longlong)iVar2;
    local_28[0].ArrayNum = iVar2 + 1;
    *(uint *)(local_28[0].AllocatorInstance.Data + lVar3 * 0xc) =
         local_res18[0].ComparisonIndex.Value.Value;
    *(uint *)(local_28[0].AllocatorInstance.Data + lVar3 * 0xc + 4) = local_res18[0].Number;
    *(float *)(local_28[0].AllocatorInstance.Data + lVar3 * 0xc + 8) = param_1;
    this_00 = (UDS_PartsSystemControl *)FWeakObjectPtr::Get(&local_res8);
    UDS_PartsSystemControl::SetPartsScalarParams(this_00,FullBody,local_28);
    if (local_28[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28[0].AllocatorInstance.Data);
    }
  }
  return;
}

