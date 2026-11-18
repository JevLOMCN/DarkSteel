// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MRMesh
// Functions: 56

// StaticClass @ 146c623f0

UClass * __cdecl UMRMeshComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMRMeshComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MRMesh",L"MRMeshComponent",
               &Z_Registration_Info_UClass_UMRMeshComponent.InnerSingleton,
               StaticRegisterNativesUMRMeshComponent,0x5e0,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UMRMeshComponent>,
               InternalVTableHelperCtorCaller<UMRMeshComponent>,local_res8,
               UPrimitiveComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMRMeshComponent.InnerSingleton;
}

// UMRMeshComponent @ 146c66180

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UMRMeshComponent * __thiscall
UMRMeshComponent::UMRMeshComponent(UMRMeshComponent *this,FVTableHelper *param_1)

{
  UPrimitiveComponent::UPrimitiveComponent((UPrimitiveComponent *)this,param_1);
  *(undefined8 *)&(this->OnClearEvent).field_0x18 = 2;
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  *(undefined ***)&this->field_0x548 = &___7UMRMeshComponent__6B_;
  (this->Material).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->WireframeMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  *(undefined8 *)&this->OnClearEvent = 0;
  *(undefined8 *)&(this->OnClearEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnClearEvent).field_0x10 = 0;
  this->bCreateMeshProxySections = true;
  this->bUpdateNavMeshOnMeshUpdate = true;
  this->bNavMeshUpdateSuggested = false;
  this->bNeverCreateCollisionMesh = false;
  this->bUseAsyncCooking = true;
  this->bConnected = false;
  (this->WireframeColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
  *(undefined8 *)&this->OnBrickDataUpdatedDelegate = 0;
  *(undefined8 *)&(this->OnBrickDataUpdatedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnBrickDataUpdatedDelegate).field_0x10 = 0;
  (this->BodyHolders).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BodyHolders).ArrayNum = 0;
  (this->BodyHolders).ArrayMax = 0;
  (this->BodyIds).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BodyIds).ArrayNum = 0;
  (this->BodyIds).ArrayMax = 0;
  *(undefined8 *)&(this->OnBrickDataUpdatedDelegate).field_0x18 = 2;
  return this;
}

// UMRMeshComponent @ 146c66290

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UMRMeshComponent * __thiscall
UMRMeshComponent::UMRMeshComponent(UMRMeshComponent *this,FObjectInitializer *param_1)

{
  UPrimitiveComponent::UPrimitiveComponent((UPrimitiveComponent *)this,param_1);
  *(undefined8 *)&(this->OnClearEvent).field_0x18 = 2;
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  *(undefined ***)&this->field_0x548 = &___7UMRMeshComponent__6B_;
  (this->Material).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->WireframeMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  *(undefined8 *)&this->OnClearEvent = 0;
  *(undefined8 *)&(this->OnClearEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnClearEvent).field_0x10 = 0;
  this->bCreateMeshProxySections = true;
  this->bUpdateNavMeshOnMeshUpdate = true;
  this->bNavMeshUpdateSuggested = false;
  this->bNeverCreateCollisionMesh = false;
  this->bUseAsyncCooking = true;
  this->bConnected = false;
  this->bEnableOcclusion = false;
  this->bUseWireframe = false;
  (this->WireframeColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
  *(undefined8 *)&this->OnBrickDataUpdatedDelegate = 0;
  *(undefined8 *)&(this->OnBrickDataUpdatedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnBrickDataUpdatedDelegate).field_0x10 = 0;
  (this->BodyHolders).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BodyHolders).ArrayNum = 0;
  (this->BodyHolders).ArrayMax = 0;
  (this->BodyIds).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BodyIds).ArrayNum = 0;
  (this->BodyIds).ArrayMax = 0;
  *(undefined8 *)&(this->OnBrickDataUpdatedDelegate).field_0x18 = 2;
  return this;
}

// ~UMRMeshComponent @ 146c66e00

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UMRMeshComponent::~UMRMeshComponent(UMRMeshComponent *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  *(undefined ***)&this->field_0x548 = &___7UMRMeshComponent__6B_;
  pFVar1 = (this->BodyIds).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BodyHolders).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnBrickDataUpdatedDelegate).field_0x8,
             *(int *)&(this->OnBrickDataUpdatedDelegate).field_0x10);
  pvVar2 = *(void **)&(this->OnBrickDataUpdatedDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnBrickDataUpdatedDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnClearEvent).field_0x8,*(int *)&(this->OnClearEvent).field_0x10);
  pvVar2 = *(void **)&(this->OnClearEvent).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnClearEvent);
  UPrimitiveComponent::~UPrimitiveComponent((UPrimitiveComponent *)this);
  return;
}

// BeginPlay @ 146c685d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UMRMeshComponent::BeginPlay(UMRMeshComponent *this)

{
  UPrimitiveComponent::BeginPlay((UPrimitiveComponent *)this);
  UPrimitiveComponent::SetCustomNavigableGeometry
            ((UPrimitiveComponent *)this,(uint)((byte)this->field_0x9a >> 7));
  return;
}

// CalcBounds @ 146c68600

TBoxSphereBounds<double,double> * __thiscall
UMRMeshComponent::CalcBounds
          (UMRMeshComponent *this,TBoxSphereBounds<double,double> *__return_storage_ptr__,
          TTransform<double> *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  __return_storage_ptr__->SphereRadius = 4398046511104.0;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.X = (double)uVar1;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = (double)uVar2;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X = 4398046511104.0;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y = 4398046511104.0;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z = 4398046511104.0;
  return __return_storage_ptr__;
}

// Clear @ 146c687e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMRMeshComponent::Clear(UMRMeshComponent *this)

{
  (**(code **)(*(longlong *)this + 0x28))();
  if (4 < (byte)LogMrMesh._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMrMesh);
    return;
  }
  return;
}

// ClearAllBrickData @ 146c68820

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall UMRMeshComponent::ClearAllBrickData(UMRMeshComponent *this)

{
  atomic<unsigned_int> *paVar1;
  undefined1 *puVar2;
  atomic<unsigned_int> aVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<_private:_virtual_void___cdecl_UMRMeshComponent::ClearAllBrickData(void)_::_2_::FStat_STAT_UMRMeshComponent_ClearAllBrickData>
  FVar7;
  FTaskBase *this_00;
  FTaskBase *this_01;
  FName local_res8;
  ETaskPriority local_res10 [8];
  code *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  bool local_68;
  undefined1 local_58 [8];
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDelegateAllocation *local_28;
  
  this_01 = (FTaskBase *)0x0;
  local_78 = ClearAllBrickData_Internal;
  puVar2 = &this[-1].field_0x98;
  uStack_70 = 0;
  local_58 = (undefined1  [8])0x0;
  local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_50.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
             (FWriteAccessScope *)&local_40);
  local_28 = &local_50;
  puVar4 = UE::Core::Private::DelegateAllocate(0x30,&local_50);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMRMeshComponent____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (puVar2 != (undefined1 *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)puVar2);
    }
    puVar4[3] = 0;
    local_res8 = (FName)puVar2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (puVar2 != (undefined1 *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)puVar2);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar4 + 3),(FObjectPtr)&local_res8);
    puVar4[4] = local_78;
    puVar4[5] = CONCAT44(uStack_6c,uStack_70);
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_UMRMeshComponent_ClearAllBrickData ==
        (FThreadSafeStaticStat<_private:_virtual_void___cdecl_UMRMeshComponent::ClearAllBrickData(void)_::_2_::FStat_STAT_UMRMeshComponent_ClearAllBrickData>
         )0x0) {
      pFVar6 = ::FName::FName(&local_res8,"STAT_UMRMeshComponent_ClearAllBrickData");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UMRMeshComponent_ClearAllBrickData,
                 *pFVar6,L"UMRMeshComponent.ClearAllBrickData","STATGROUP_MRMESH","STATCAT_Advanced"
                 ,L"MRMesh",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar7 = StatPtr_STAT_UMRMeshComponent_ClearAllBrickData;
  if (StatPtr_STAT_UMRMeshComponent_ClearAllBrickData ==
      (FThreadSafeStaticStat<_private:_virtual_void___cdecl_UMRMeshComponent::ClearAllBrickData(void)_::_2_::FStat_STAT_UMRMeshComponent_ClearAllBrickData>
       )0x0) {
    pFVar6 = ::FName::FName(&local_res8,"STAT_UMRMeshComponent_ClearAllBrickData");
    FVar7 = (FThreadSafeStaticStat<_private:_virtual_void___cdecl_UMRMeshComponent::ClearAllBrickData(void)_::_2_::FStat_STAT_UMRMeshComponent_ClearAllBrickData>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &StatPtr_STAT_UMRMeshComponent_ClearAllBrickData,*pFVar6,
                         L"UMRMeshComponent.ClearAllBrickData","STATGROUP_MRMESH","STATCAT_Advanced"
                         ,L"MRMesh",true,true,ST_int64,true,false,MCR_Invalid);
  }
  this_00 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x100,8);
  if (this_00 != (FTaskBase *)0x0) {
    FBaseGraphTask::FBaseGraphTask
              ((FBaseGraphTask *)this_00,
               (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                *)0x0);
    this_00->_padding_ = (longlong)&___7__TGraphTask_VFSimpleDelegateGraphTask____6B_;
    this_01 = this_00;
  }
  this_01[1]._padding_ = (longlong)FVar7;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&this_01[1]._padding_,
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_58);
  *(undefined4 *)&this_01[1]._padding_ = 1;
  UE::Tasks::Private::TranslatePriority(GameThread,local_res10,(EExtendedTaskPriority *)&local_res8)
  ;
  UE::Tasks::Private::FTaskBase::Init
            (this_01,L"GraphTask",local_res10[0],
             (EExtendedTaskPriority)local_res8.ComparisonIndex.Value,None);
  if (this_01 == (FTaskBase *)0x0) {
    UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x100);
  }
  else {
    LOCK();
    this_01->RefCount = (atomic<unsigned_int>)((int)this_01->RefCount + 1);
    UNLOCK();
    UE::Tasks::Private::FTaskBase::TryLaunch(this_01,0x100);
    LOCK();
    paVar1 = &this_01->RefCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<unsigned_int>)0x1) {
      (**(code **)this_01->_padding_)(this_01,1);
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
             (FWriteAccessScope *)&local_78);
  if ((local_50.DelegateSize != 0) &&
     (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_50,0,0,0x10);
    local_50.DelegateSize = 0;
  }
  if (local_68 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_6c,uStack_70),
               (FDestructionSentinel *)&local_78);
  }
  if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_50.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_58);
  return;
}

// ClearAllBrickData_Internal @ 146c68b80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UMRMeshComponent::ClearAllBrickData_Internal(UMRMeshComponent *this)

{
  undefined1 *puVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar9;
  undefined ***pppuVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong lVar15;
  FOnClear *this_02;
  longlong lVar16;
  undefined1 auStack_108 [32];
  longlong local_e8;
  longlong local_e0;
  undefined1 local_d8 [8];
  FDestructionSentinel local_d0;
  FReadAccessScope local_b8;
  code *local_98 [2];
  undefined **local_88;
  UMRMeshComponent *pUStack_80;
  undefined8 local_78;
  undefined ***local_70;
  undefined1 local_68 [16];
  undefined **local_58;
  UMRMeshComponent *pUStack_50;
  undefined8 local_48;
  undefined ***local_40;
  byte local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_108;
  bVar5 = IsInGameThread();
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MRMesh\\Private\\MRMeshComponent.cpp"
                         ,0x324,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar2 = (this->BodyIds).ArrayNum;
  while (iVar2 = iVar2 + -1, -1 < iVar2) {
    RemoveBodyInstance(this,iVar2);
  }
  local_70 = (undefined ***)0x0;
  local_88 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UMRMeshComponent::ClearAllBrickData_Internal'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  local_98[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UMRMeshComponent::ClearAllBrickData_Internal'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  pUStack_80 = this;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_UMRMeshComponent::ClearAllBrickData_Internal_::__l2::TSTR_FClearAllBricksLambda813>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_98);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_68._0_8_ = local_98[0];
    local_40 = local_70;
    local_58 = local_88;
    pUStack_50 = pUStack_80;
    local_48 = local_78;
    local_98[0] = (code *)0x0;
    local_38 = 2;
    pFVar9 = (FRenderCommandTag *)
             TRenderCommandTag<`UMRMeshComponent::ClearAllBrickData_Internal'::__l2::TSTR_FClearAllBricksLambda813>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_68,pFVar9);
    uVar12 = (ulonglong)local_38;
    if ((2 < uVar12) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar12] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_68._0_8_ != (code *)0x0) {
        pppuVar10 = (undefined ***)(local_68 + 0x10);
        if (local_40 != (undefined ***)0x0) {
          pppuVar10 = local_40;
        }
        (*(code *)(*pppuVar10)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar12])(local_68);
    }
  }
  if (local_98[0] != (code *)0x0) {
    pppuVar10 = &local_88;
    if (local_70 != (undefined ***)0x0) {
      pppuVar10 = local_70;
    }
    (*(code *)(*pppuVar10)[2])();
  }
  this_02 = &this->OnClearEvent;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_02,&local_b8);
  iVar2 = *(int *)&(this->OnClearEvent).field_0x10;
  plVar13 = *(longlong **)&(this->OnClearEvent).field_0x8;
  plVar14 = plVar13 + (longlong)iVar2 * 2;
  while( true ) {
    if (*(int *)&(this->OnClearEvent).field_0x10 != iVar2) {
      local_d8[0] = 0;
      `TCheckedPointerIterator<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_d8);
    }
    if (plVar13 == plVar14) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_b8);
      return;
    }
    if (((int)plVar13[1] != 0) && (*plVar13 != 0)) break;
    plVar13 = plVar13 + 2;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_b8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_02,
             (FWriteAccessScope *)&local_d0);
  puVar1 = &(this->OnClearEvent).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  bVar5 = false;
  uVar11 = *(int *)&(this->OnClearEvent).field_0x10 - 1;
  if (-1 < (int)uVar11) {
    lVar16 = (longlong)(int)uVar11;
    lVar15 = lVar16 << 4;
    bVar5 = false;
    do {
      iVar2 = *(int *)&(this->OnClearEvent).field_0x10;
      uVar8 = 0;
      if ((int)uVar11 < iVar2) {
        uVar8 = ~uVar11 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (local_e8 = lVar16, local_e0 = (longlong)iVar2,
         bVar6 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar3 = *(longlong *)&(this->OnClearEvent).field_0x8;
      if (((*(int *)(lVar15 + 8 + lVar3) == 0) ||
          (plVar13 = *(longlong **)(lVar15 + lVar3), plVar13 == (longlong *)0x0)) ||
         (cVar7 = (**(code **)(*plVar13 + 0x68))(), cVar7 == '\0')) {
        bVar5 = true;
      }
      lVar16 = lVar16 + -1;
      lVar15 = lVar15 + -0x10;
      uVar11 = uVar11 - 1;
    } while (-1 < (int)uVar11);
  }
  puVar1 = &(this->OnClearEvent).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  if (bVar5) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_02,false);
  }
  if (local_d0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d0.Accessor,&local_d0);
  }
  return;
}

// CreateSceneProxy @ 146c69570

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FPrimitiveSceneProxy * __thiscall UMRMeshComponent::CreateSceneProxy(UMRMeshComponent *this)

{
  FName FVar1;
  FPrimitiveSceneProxy *this_00;
  UMaterial *pUVar2;
  
  this_00 = ::operator_new(0x2f0);
  if (this_00 != (FPrimitiveSceneProxy *)0x0) {
    FVar1.ComparisonIndex.Value = *(uint *)&this->field_0x18;
    FVar1.Number = *(uint *)&this->field_0x1c;
    FPrimitiveSceneProxy::FPrimitiveSceneProxy(this_00,(UPrimitiveComponent *)this,FVar1);
    this_00->_padding_ = (longlong)&___7FMRMeshProxy__6B_;
    this_00[1]._padding_ = 0;
    this_00[1]._padding_ = 0;
    if (((this->bUseWireframe == false) ||
        (pUVar2 = (UMaterial *)(this->WireframeMaterial).field0_0x0.DebugPtr,
        pUVar2 == (UMaterial *)0x0)) &&
       (pUVar2 = (UMaterial *)(this->Material).field0_0x0.DebugPtr, pUVar2 == (UMaterial *)0x0)) {
      pUVar2 = UMaterial::GetDefaultMaterial(MD_Surface);
    }
    this_00[1].DebugMassData.AllocatorInstance.Data = (FScriptContainerElement *)pUVar2;
    this_00[1].DebugMassData.ArrayNum = this_00->Scene->FeatureLevel;
    *(bool *)&this_00[1].DebugMassData.ArrayMax = this->bEnableOcclusion;
    *(bool *)((longlong)&this_00[1].DebugMassData.ArrayMax + 1) = this->bUseWireframe;
    this_00[1].SimpleStreamableAssetManagerIndex.Object = (int *)0x0;
    this_00[1].SimpleStreamableAssetManagerIndex.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    *(undefined8 *)&this_00[1].PrimitiveColor.field0_0x0 = 0;
    this_00[1].PrimitiveColor.field0_0x0._s_0.B = 0.0;
    this_00[1].PrimitiveColor.field0_0x0._s_0.A = 1.79366e-43;
    *(undefined4 *)&this_00[1].CustomPrimitiveData.Data.AllocatorInstance.Data = 0xffffffff;
    *(undefined4 *)((longlong)&this_00[1].CustomPrimitiveData.Data.AllocatorInstance.Data + 4) = 0;
    this_00[1].TranslucencySortPriority = 0;
    *(undefined2 *)&this_00[1].field_0x62 = 0;
    this_00[1].TranslucencySortDistanceOffset = 0.0;
    this_00[1].Mobility = '\0';
    this_00[1].LightmapType = Default;
    *(undefined2 *)&this_00[1].field_0x6a = 0;
    return this_00;
  }
  return (FPrimitiveSceneProxy *)0x0;
}

// DoCustomNavigableGeometryExport @ 146c698d0

bool __thiscall
UMRMeshComponent::DoCustomNavigableGeometryExport
          (UMRMeshComponent *this,FNavigableGeometryExport *param_1)

{
  longlong *plVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  longlong *plVar6;
  undefined1 local_res8 [8];
  
  if (this->field_0x35 == '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("bHasCustomNavigableGeometry",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MRMesh\\Private\\MRMeshComponent.cpp"
                       ,0x36d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  plVar6 = *(longlong **)&this->field_0x368;
  iVar2 = *(int *)&this->field_0x370;
  plVar1 = plVar6 + iVar2;
  while( true ) {
    if (*(int *)&this->field_0x370 != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UMRMeshBodyHolder>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (plVar6 == plVar1) break;
    if (*(longlong *)(*plVar6 + 0x30) == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("BH->BodySetup",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MRMesh\\Private\\MRMeshComponent.cpp"
                         ,0x371,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    (**(code **)((longlong)*param_1 + 0x28))
              (param_1,*(undefined8 *)(*plVar6 + 0x30),&this[-1].OnClearEvent.field_0x18);
    plVar6 = plVar6 + 1;
  }
  return false;
}

// EndPlay @ 146c69a90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UMRMeshComponent::EndPlay(UMRMeshComponent *this,Type param_1)

{
  (**(code **)(*(longlong *)&this->field_0x548 + 0x28))();
  USceneComponent::EndPlay((USceneComponent *)this,param_1);
  return;
}

// ForceNavMeshUpdate @ 146c6a3a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UMRMeshComponent::ForceNavMeshUpdate(UMRMeshComponent *this)

{
  if (this->field_0x285 != '\0') {
    this->bNavMeshUpdateSuggested = false;
    USceneComponent::UpdateNavigationData((USceneComponent *)this);
    return;
  }
  if (4 < (byte)LogMrMesh._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMrMesh);
    return;
  }
  return;
}

// GetMaterial @ 146c6b9c0

UMaterialInterface * __thiscall UMRMeshComponent::GetMaterial(UMRMeshComponent *this,int param_1)

{
  return (this->Material).field0_0x0.DebugPtr;
}

// GetMaterialToUse @ 146c6b9d0

UMaterialInterface * __thiscall UMRMeshComponent::GetMaterialToUse(UMRMeshComponent *this)

{
  UMaterial *pUVar1;
  UMaterialInterface *pUVar2;
  
  if (((this->bUseWireframe == false) ||
      (pUVar2 = (this->WireframeMaterial).field0_0x0.DebugPtr, pUVar2 == (UMaterialInterface *)0x0))
     && (pUVar2 = (this->Material).field0_0x0.DebugPtr, pUVar2 == (UMaterialInterface *)0x0)) {
    pUVar1 = UMaterial::GetDefaultMaterial(MD_Surface);
    return (UMaterialInterface *)pUVar1;
  }
  return pUVar2;
}

// GetPrivateStaticClass @ 146c6bf40

UClass * __cdecl UMRMeshComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMRMeshComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MRMesh",L"MRMeshComponent",
               &Z_Registration_Info_UClass_UMRMeshComponent.InnerSingleton,
               StaticRegisterNativesUMRMeshComponent,0x5e0,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UMRMeshComponent>,
               InternalVTableHelperCtorCaller<UMRMeshComponent>,local_res8,
               UPrimitiveComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMRMeshComponent.InnerSingleton;
}

// GetUsedMaterials @ 146c6c200

void __thiscall
UMRMeshComponent::GetUsedMaterials
          (UMRMeshComponent *this,TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *param_1,
          bool param_2)

{
  TObjectPtr<UMaterialInterface>_u_0 TVar1;
  TObjectPtr<UMaterialInterface>_u_0 *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  TObjectPtr<UMaterialInterface>_u_0 local_18;
  TObjectPtr<UMaterialInterface>_u_0 local_10;
  
  TVar1 = (TObjectPtr<UMaterialInterface>_u_0)(this->Material).field0_0x0.DebugPtr;
  if (TVar1.DebugPtr != (UMaterialInterface *)0x0) {
    pTVar2 = (TObjectPtr<UMaterialInterface>_u_0 *)(param_1->AllocatorInstance).Data;
    local_18 = TVar1;
    if (((pTVar2 <= &local_18) && (&local_18 < pTVar2 + param_1->ArrayMax)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar5 = param_1->ArrayNum;
    if (iVar5 == param_1->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
    }
    param_1->ArrayNum = iVar5 + 1;
    ((TObjectPtr<UMaterialInterface>_u_0 *)((param_1->AllocatorInstance).Data + (longlong)iVar5 * 8)
    )->DebugPtr = (UMaterialInterface *)local_18;
  }
  piVar7 = &param_1->ArrayMax;
  local_10 = (TObjectPtr<UMaterialInterface>_u_0)(this->WireframeMaterial).field0_0x0.DebugPtr;
  if (local_10.DebugPtr != (UMaterialInterface *)0x0) {
    pTVar2 = (TObjectPtr<UMaterialInterface>_u_0 *)(param_1->AllocatorInstance).Data;
    if (((pTVar2 <= &local_10) && (&local_10 < pTVar2 + *piVar7)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    piVar6 = &param_1->ArrayNum;
    iVar5 = *piVar6;
    if (iVar5 == *piVar7) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&param_1->AllocatorInstance,piVar7);
      *piVar6 = iVar5;
    }
    *piVar6 = iVar5 + 1;
    ((TObjectPtr<UMaterialInterface>_u_0 *)((param_1->AllocatorInstance).Data + (longlong)iVar5 * 8)
    )->DebugPtr = (UMaterialInterface *)local_10;
  }
  return;
}

// IsConnected @ 146c6c7c0

bool __thiscall UMRMeshComponent::IsConnected(UMRMeshComponent *this)

{
  return (bool)this->field_0x1d;
}

// OnActorEnableCollisionChanged @ 146c6c860

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UMRMeshComponent::OnActorEnableCollisionChanged(UMRMeshComponent *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->BodyHolders).AllocatorInstance.Data;
  iVar2 = (this->BodyHolders).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->BodyHolders).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UMRMeshBodyHolder>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    FBodyInstance::UpdatePhysicsFilterData((FBodyInstance *)(*(longlong *)pFVar3 + 0x38));
    pFVar3 = pFVar3 + 8;
  }
  UPrimitiveComponent::OnActorEnableCollisionChanged((UPrimitiveComponent *)this);
  return;
}

// OnUpdateTransform @ 146c6c8e0

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
UMRMeshComponent::OnUpdateTransform
          (UMRMeshComponent *this,EUpdateTransformFlags param_1,ETeleportType param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  TVector<double>_u_0 local_38;
  
  UPrimitiveComponent::OnUpdateTransform((UPrimitiveComponent *)this,param_1,param_2);
  pFVar3 = (this->BodyHolders).AllocatorInstance.Data;
  iVar2 = (this->BodyHolders).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->BodyHolders).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UMRMeshBodyHolder>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    FBodyInstance::SetBodyTransform
              ((FBodyInstance *)(*(longlong *)pFVar3 + 0x38),
               (TTransform<double> *)&this->field_0x1f0,param_2,true);
    local_38._s_0.X = (double)*(undefined8 *)&this->field_0x230;
    local_38._s_0.Y = (double)*(undefined8 *)&this->field_0x238;
    local_38._s_0.Z = (double)*(undefined8 *)&this->field_0x240;
    FBodyInstance::UpdateBodyScale
              ((FBodyInstance *)(*(longlong *)pFVar3 + 0x38),(TVector<double> *)&local_38._s_0,false
              );
    pFVar3 = pFVar3 + 8;
  }
  return;
}

// RemoveBodyInstance @ 146c6d380

void __thiscall UMRMeshComponent::RemoveBodyInstance(UMRMeshComponent *this,int param_1)

{
  int *piVar1;
  TArray<TObjectPtr<UMRMeshBodyHolder>,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  UMRMeshBodyHolder *this_00;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  TSharedPtr<IMRMesh::FBrickDataReceipt,1> local_38;
  
  lVar9 = (longlong)param_1;
  pTVar2 = &this->BodyHolders;
  uVar10 = ~param_1;
  uVar11 = uVar10 >> 0x1f;
  uVar7 = 0;
  if (param_1 < (this->BodyHolders).ArrayNum) {
    uVar7 = uVar11;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  this_00 = *(UMRMeshBodyHolder **)((pTVar2->AllocatorInstance).Data + lVar9 * 8);
  UMRMeshBodyHolder::AbortCook(this_00);
  this_00->PositionData = (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)0x0;
  this_00->Indices = (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)0x0;
  local_38.Object = (FBrickDataReceipt *)0x0;
  local_38.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  TSharedPtr<IMRMesh::FBrickDataReceipt,1>::operator=(&this_00->BrickDataReceipt,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  FBodyInstance::TermBody(&this_00->BodyInstance,false);
  uVar7 = 0;
  if (param_1 < (this->BodyHolders).ArrayNum) {
    uVar7 = uVar11;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar3 = (this->BodyHolders).ArrayNum;
  pFVar4 = (pTVar2->AllocatorInstance).Data;
  iVar8 = iVar3 + uVar10;
  if (1 < iVar8) {
    iVar8 = 1;
  }
  if (iVar8 != 0) {
    memmove(pFVar4 + lVar9 * 8,pFVar4 + (longlong)(iVar3 - iVar8) * 8,(longlong)iVar8 << 3);
  }
  piVar1 = &(this->BodyHolders).ArrayNum;
  *piVar1 = *piVar1 + -1;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,&pTVar2->AllocatorInstance,(this->BodyHolders).ArrayNum,
             &(this->BodyHolders).ArrayMax);
  uVar7 = 0;
  if (param_1 < (this->BodyIds).ArrayNum) {
    uVar7 = uVar11;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar3 = (this->BodyIds).ArrayNum;
  pFVar4 = (this->BodyIds).AllocatorInstance.Data;
  iVar8 = iVar3 + uVar10;
  if (1 < iVar8) {
    iVar8 = 1;
  }
  if (iVar8 != 0) {
    memmove(pFVar4 + lVar9 * 8,pFVar4 + (longlong)(iVar3 - iVar8) * 8,(longlong)iVar8 << 3);
  }
  piVar1 = &(this->BodyIds).ArrayNum;
  *piVar1 = *piVar1 + -1;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,&(this->BodyIds).AllocatorInstance,(this->BodyIds).ArrayNum,
             &(this->BodyIds).ArrayMax);
  return;
}

// RequestNavMeshUpdate @ 146c6e8d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UMRMeshComponent::RequestNavMeshUpdate(UMRMeshComponent *this)

{
  if (this->bNavMeshUpdateSuggested == true) {
    if (this->field_0x285 != '\0') {
      this->bNavMeshUpdateSuggested = false;
      USceneComponent::UpdateNavigationData((USceneComponent *)this);
      return;
    }
    if (4 < (byte)LogMrMesh._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMrMesh);
      return;
    }
  }
  return;
}

// SendBrickData @ 146c6e920

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall UMRMeshComponent::SendBrickData(UMRMeshComponent *this,FSendBrickDataArgs *param_1)

{
  atomic<unsigned_int> *paVar1;
  undefined1 *puVar2;
  atomic<unsigned_int> aVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<_private:_virtual_void___cdecl_UMRMeshComponent::SendBrickData(IMRMesh::FSendBrickDataArgs)_::_2_::FStat_STAT_UMRMeshComponent_SendBrickData>
  FVar7;
  FTaskBase *this_00;
  FTaskBase *this_01;
  FName local_res8;
  ETaskPriority local_res10 [8];
  code *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  bool local_78;
  undefined1 local_68 [8];
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDelegateAllocation *local_38;
  
  this_01 = (FTaskBase *)0x0;
  local_88 = SendBrickData_Internal;
  puVar2 = &this[-1].field_0x98;
  uStack_80 = 0;
  local_68 = (undefined1  [8])0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
             (FWriteAccessScope *)&local_50);
  local_38 = &local_60;
  puVar4 = UE::Core::Private::DelegateAllocate(0xa0,&local_60);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__UFSendBrickDataArgs_IMRMesh____6B_
    ;
    IMRMesh::FSendBrickDataArgs::FSendBrickDataArgs((FSendBrickDataArgs *)(puVar4 + 1),param_1);
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[0x10] = uVar5;
    *puVar4 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMRMeshComponent____A6AXXZUFDefaultDelegateUserPolicy__UFSendBrickDataArgs_IMRMesh____6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (puVar2 != (undefined1 *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)puVar2);
    }
    puVar4[0x11] = 0;
    local_res8 = (FName)puVar2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (puVar2 != (undefined1 *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)puVar2);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar4 + 0x11),(FObjectPtr)&local_res8);
    puVar4[0x12] = local_88;
    puVar4[0x13] = CONCAT44(uStack_7c,uStack_80);
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_UMRMeshComponent_SendBrickData ==
        (FThreadSafeStaticStat<_private:_virtual_void___cdecl_UMRMeshComponent::SendBrickData(IMRMesh::FSendBrickDataArgs)_::_2_::FStat_STAT_UMRMeshComponent_SendBrickData>
         )0x0) {
      pFVar6 = ::FName::FName(&local_res8,"STAT_UMRMeshComponent_SendBrickData");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UMRMeshComponent_SendBrickData,*pFVar6,
                 L"UMRMeshComponent.SendBrickData","STATGROUP_MRMESH","STATCAT_Advanced",L"MRMesh",
                 true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar7 = StatPtr_STAT_UMRMeshComponent_SendBrickData;
  if (StatPtr_STAT_UMRMeshComponent_SendBrickData ==
      (FThreadSafeStaticStat<_private:_virtual_void___cdecl_UMRMeshComponent::SendBrickData(IMRMesh::FSendBrickDataArgs)_::_2_::FStat_STAT_UMRMeshComponent_SendBrickData>
       )0x0) {
    pFVar6 = ::FName::FName(&local_res8,"STAT_UMRMeshComponent_SendBrickData");
    FVar7 = (FThreadSafeStaticStat<_private:_virtual_void___cdecl_UMRMeshComponent::SendBrickData(IMRMesh::FSendBrickDataArgs)_::_2_::FStat_STAT_UMRMeshComponent_SendBrickData>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UMRMeshComponent_SendBrickData,
                         *pFVar6,L"UMRMeshComponent.SendBrickData","STATGROUP_MRMESH",
                         "STATCAT_Advanced",L"MRMesh",true,true,ST_int64,true,false,MCR_Invalid);
  }
  this_00 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x100,8);
  if (this_00 != (FTaskBase *)0x0) {
    FBaseGraphTask::FBaseGraphTask
              ((FBaseGraphTask *)this_00,
               (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                *)0x0);
    this_00->_padding_ = (longlong)&___7__TGraphTask_VFSimpleDelegateGraphTask____6B_;
    this_01 = this_00;
  }
  this_01[1]._padding_ = (longlong)FVar7;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&this_01[1]._padding_,
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_68);
  *(undefined4 *)&this_01[1]._padding_ = 1;
  UE::Tasks::Private::TranslatePriority(GameThread,local_res10,(EExtendedTaskPriority *)&local_res8)
  ;
  UE::Tasks::Private::FTaskBase::Init
            (this_01,L"GraphTask",local_res10[0],
             (EExtendedTaskPriority)local_res8.ComparisonIndex.Value,None);
  if (this_01 == (FTaskBase *)0x0) {
    UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x100);
  }
  else {
    LOCK();
    this_01->RefCount = (atomic<unsigned_int>)((int)this_01->RefCount + 1);
    UNLOCK();
    UE::Tasks::Private::FTaskBase::TryLaunch(this_01,0x100);
    LOCK();
    paVar1 = &this_01->RefCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<unsigned_int>)0x1) {
      (**(code **)this_01->_padding_)(this_01,1);
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
             (FWriteAccessScope *)&local_88);
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_60,0,0,0x10);
    local_60.DelegateSize = 0;
  }
  if (local_78 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_7c,uStack_80),
               (FDestructionSentinel *)&local_88);
  }
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_68);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->BrickDataReceipt).SharedReferenceCount.ReferenceController);
  return;
}

// SendBrickData_Internal @ 146c6eca0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UMRMeshComponent::SendBrickData_Internal(UMRMeshComponent *this,FSendBrickDataArgs *param_1)

{
  undefined1 *puVar1;
  ulong64 *puVar2;
  int *piVar3;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<TObjectPtr<UMRMeshBodyHolder>,TSizedDefaultAllocator<32>_> *pTVar5;
  byte *pbVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  UMRMeshBodyHolder *this_00;
  TReferenceControllerBase<1> *pTVar9;
  FBrickDataReceipt *pFVar10;
  UBodySetup *this_01;
  code *pcVar11;
  undefined8 uVar12;
  double dVar13;
  bool bVar14;
  uchar uVar15;
  uchar uVar16;
  uchar uVar17;
  uchar uVar18;
  uchar uVar19;
  uchar uVar20;
  uchar uVar21;
  UObject *this_02;
  UWorld *this_03;
  bool bVar22;
  bool bVar23;
  char cVar24;
  bool bVar25;
  uint uVar26;
  int iVar27;
  FName *pFVar28;
  FThreadSafeStaticStat<FStat_STAT_UpdateCollision> FVar29;
  UClass *pUVar30;
  UObject *pUVar31;
  FGuid *pFVar32;
  undefined8 *puVar33;
  ulong64 uVar34;
  FThreadStats *this_04;
  FThreadStatsPool *this_05;
  FRenderCommandList *this_06;
  FCommandList *this_07;
  FRenderCommandTag *pFVar35;
  longlong *plVar36;
  code **ppcVar37;
  uint uVar38;
  FName FVar39;
  ulonglong uVar40;
  FScriptContainerElement *pFVar41;
  longlong lVar42;
  undefined1 auStackY_398 [32];
  char local_337;
  UObject *local_330;
  FName local_328;
  undefined4 uStack_320;
  uint uStack_31c;
  UWorld *local_318;
  FColor_u_0 local_310 [2];
  FName local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  FName local_2f0;
  undefined1 local_2e0 [8];
  FDelegateAllocation local_2d8;
  UMRMeshBodyHolder *local_2c8;
  LARGE_INTEGER local_2c0;
  FStatMessage local_2b8;
  FDestructionSentinel local_2a8;
  FDestructionSentinel local_290;
  FDelegateAllocation *local_278;
  FName local_270;
  FBrickDataReceipt *local_268;
  TReferenceControllerBase<1> *pTStack_260;
  FGuid local_258;
  undefined1 local_248 [128];
  undefined1 local_1c8 [128];
  code *local_148 [2];
  code *local_138 [3];
  code **local_120;
  undefined1 local_118 [40];
  code **local_f0;
  byte local_e8;
  UMRMeshComponent *local_d8;
  undefined1 local_d0 [120];
  char local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_398;
  bVar22 = IsInGameThread();
  if ((!bVar22) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInGameThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MRMesh\\Private\\MRMeshComponent.cpp"
                          ,0x2a9,L""), bVar22)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  if ((param_1->Indices->ArrayNum < 1) || (local_337 = '\x01', param_1->PositionData->ArrayNum < 1))
  {
    local_337 = '\0';
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnBrickDataUpdatedDelegate,(FWriteAccessScope *)&local_2a8);
  puVar1 = &(this->OnBrickDataUpdatedDelegate).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  bVar22 = false;
  uVar38 = *(int *)&(this->OnBrickDataUpdatedDelegate).field_0x10 - 1;
  if (-1 < (int)uVar38) {
    lVar42 = (longlong)(int)uVar38 << 4;
    bVar22 = false;
    do {
      uVar26 = 0;
      if ((int)uVar38 < *(int *)&(this->OnBrickDataUpdatedDelegate).field_0x10) {
        uVar26 = ~uVar38 >> 0x1f;
      }
      if ((uVar26 == 0) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar23)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      lVar7 = *(longlong *)&(this->OnBrickDataUpdatedDelegate).field_0x8;
      if (((*(int *)(lVar7 + 8 + lVar42) == 0) ||
          (plVar36 = *(longlong **)(lVar7 + lVar42), plVar36 == (longlong *)0x0)) ||
         (cVar24 = (**(code **)(*plVar36 + 0x68))(), cVar24 == '\0')) {
        bVar22 = true;
      }
      lVar42 = lVar42 + -0x10;
      uVar38 = uVar38 - 1;
    } while (-1 < (int)uVar38);
  }
  puVar1 = &(this->OnBrickDataUpdatedDelegate).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  if (bVar22) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->OnBrickDataUpdatedDelegate,false);
  }
  if (local_2a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2a8.Accessor,&local_2a8);
  }
  if (4 < (byte)LogMrMesh._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMrMesh);
  }
  if ((this == (UMRMeshComponent *)0x0) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("Test",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Object.h"
                          ,0x760,L""), bVar22)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  if (((*(uint *)&this->field_0x8 >> 0x1e & 1) != 0) || (this->bNeverCreateCollisionMesh != false))
  goto LAB_146c6f73f;
  FVar29 = StatPtr_STAT_UpdateCollision;
  if (StatPtr_STAT_UpdateCollision == (FThreadSafeStaticStat<FStat_STAT_UpdateCollision>)0x0) {
    pFVar28 = ::FName::FName(&local_270,"STAT_UpdateCollision");
    FVar29 = (FThreadSafeStaticStat<FStat_STAT_UpdateCollision>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UpdateCollision,*pFVar28,
                        L"Update Collision","STATGROUP_MRMESH","STATCAT_Advanced",L"MRMesh",true,
                        true,ST_int64,true,false,MCR_Invalid);
  }
  FVar39 = *(FName *)FVar29;
  bVar22 = false;
  bVar14 = false;
  local_2f0.ComparisonIndex.Value = 0;
  local_2f0.Number = 0;
  bVar23 = false;
  bVar25 = false;
  if ((FVar39.ComparisonIndex.Value.Value == 0) && (FVar39.Number == 0)) {
LAB_146c6efc4:
    bVar14 = bVar25;
    bVar22 = bVar23;
    bVar23 = false;
    FVar39 = local_2f0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_310[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_310[0]._s_0,(char *)*(FName *)((longlong)FVar29 + 0x10));
      bVar22 = false;
      bVar14 = true;
      bVar23 = false;
      bVar25 = true;
      if (-1 < CpuChannel->Enabled) {
        local_308.ComparisonIndex.Value = FVar39.ComparisonIndex.Value.Value;
        local_308.Number = FVar39.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_308,(wchar_t *)*(FName *)((longlong)FVar29 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MRMesh\\Private\\MRMeshComponent.cpp"
                   ,0x2b3);
        bVar22 = true;
        bVar14 = true;
        bVar23 = true;
        bVar25 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_146c6efc4;
    local_328 = FVar39;
    FThreadStats::AddMessage(FVar39,CycleScopeStart);
    bVar23 = true;
  }
  local_318 = *(UWorld **)&this->field_0xb0;
  if (((local_318 == (UWorld *)0x0) &&
      (local_318 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
      local_318 == (UWorld *)0x0)) || (local_318->PhysicsScene == (FPhysScene_Chaos *)0x0)) {
    if (2 < (byte)LogMrMesh._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMrMesh);
    }
  }
  else {
    pTVar4 = &this->BodyIds;
    pFVar8 = (pTVar4->AllocatorInstance).Data;
    if (pFVar8 != pFVar8 + (longlong)(this->BodyIds).ArrayNum * 8) {
      pFVar41 = pFVar8;
      do {
        if (*(ulong64 *)pFVar41 == param_1->BrickId) {
          uVar38 = (uint)((longlong)pFVar41 - (longlong)pFVar8 >> 3);
          goto LAB_146c6f037;
        }
        pFVar41 = pFVar41 + 8;
      } while (pFVar41 != pFVar8 + (longlong)(this->BodyIds).ArrayNum * 8);
    }
    uVar38 = 0xffffffff;
LAB_146c6f037:
    if (local_337 == '\0') {
      if (uVar38 != 0xffffffff) {
        RemoveBodyInstance(this,uVar38);
        SuggestNavMeshUpdate(this);
      }
    }
    else {
      this->field_0x98 = this->field_0x98 | 8;
      if (uVar38 == 0xffffffff) {
        bVar25 = UObjectBaseUtility::IsTemplate
                           ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
        local_300 = 0;
        FObjectInitializer::AssertIfInConstructor
                  ((UObject *)this,
                   L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                  );
        pUVar30 = UMRMeshBodyHolder::StaticClass();
        FStaticConstructObjectParameters::FStaticConstructObjectParameters
                  ((FStaticConstructObjectParameters *)local_248,pUVar30);
        local_248._48_8_ = (FObjectInstancingGraph *)0x0;
        local_248._56_8_ = (UPackage *)0x0;
        local_248._16_4_ = 0;
        local_248._20_4_ = 0;
        local_248._40_8_ = (UObject *)0x0;
        local_248[0x20] = false;
        local_248._8_8_ = this;
        local_248._24_4_ = -(uint)bVar25 & (RF_ArchetypeObject|RF_Public);
        local_330 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_248);
        if (local_248._64_8_ != 0) {
          plVar36 = (longlong *)(local_248 + 0x50);
          if ((longlong *)local_248._104_8_ != (longlong *)0x0) {
            plVar36 = (longlong *)local_248._104_8_;
          }
          (**(code **)(*plVar36 + 0x10))();
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_330 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_330);
        }
        this_02 = local_330;
        uVar34 = param_1->BrickId;
        if ((*(longlong *)&((UObjectBaseUtility *)(local_330 + 1))->field_0x8 != 0) &&
           (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                               ("BodySetup == nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MRMesh\\Private\\MRMeshComponent.cpp"
                                ,0x46b,L""), bVar25)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        *(ulong64 *)&((UObjectBaseUtility *)(this_02 + 0xb))->field_0x20 = uVar34;
        bVar25 = UObjectBaseUtility::IsTemplate
                           ((UObjectBaseUtility *)this_02,RF_ArchetypeObject|RF_ClassDefaultObject);
        local_2f8 = 0;
        local_328 = (FName)(CONCAT44(local_328.Number,-(uint)bVar25) & 0xffffffff00000021);
        FObjectInitializer::AssertIfInConstructor
                  (this_02,
                   L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                  );
        pUVar30 = Z_Construct_UClass_UBodySetup_NoRegister();
        FStaticConstructObjectParameters::FStaticConstructObjectParameters
                  ((FStaticConstructObjectParameters *)local_1c8,pUVar30);
        local_1c8._48_8_ = (FObjectInstancingGraph *)0x0;
        local_1c8._56_8_ = (UPackage *)0x0;
        local_1c8._16_4_ = 0;
        local_1c8._20_4_ = 0;
        local_1c8._24_4_ = local_328.ComparisonIndex.Value;
        local_1c8._40_8_ = (UObject *)0x0;
        local_1c8[0x20] = false;
        local_1c8._8_8_ = this_02;
        pUVar31 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1c8);
        if (local_1c8._64_8_ != 0) {
          plVar36 = (longlong *)(local_1c8 + 0x50);
          if ((longlong *)local_1c8._104_8_ != (longlong *)0x0) {
            plVar36 = (longlong *)local_1c8._104_8_;
          }
          (**(code **)(*plVar36 + 0x10))();
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar31 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar31);
        }
        *(UObject **)&((UObjectBaseUtility *)(this_02 + 1))->field_0x8 = pUVar31;
        pFVar32 = FGuid::NewGuid(&local_258);
        pTVar5 = &this->BodyHolders;
        uVar12 = *(undefined8 *)&pFVar32->C;
        lVar42 = *(longlong *)&((UObjectBaseUtility *)(this_02 + 1))->field_0x8;
        *(undefined8 *)(lVar42 + 0x108) = *(undefined8 *)pFVar32;
        *(undefined8 *)(lVar42 + 0x110) = uVar12;
        pbVar6 = (byte *)(*(longlong *)&((UObjectBaseUtility *)(this_02 + 1))->field_0x8 + 0xd8);
        *pbVar6 = *pbVar6 & 0xbf;
        pbVar6 = (byte *)(*(longlong *)&((UObjectBaseUtility *)(this_02 + 1))->field_0x8 + 0xd9);
        *pbVar6 = *pbVar6 | 4;
        *(undefined1 *)(*(longlong *)&((UObjectBaseUtility *)(this_02 + 1))->field_0x8 + 0x31) = 3;
        ((UObjectBaseUtility *)(this_02 + 0xd))->field_0x20 = 0;
        pFVar8 = (pTVar5->AllocatorInstance).Data;
        if (((pFVar8 <= (FScriptContainerElement *)&local_330) &&
            ((FScriptContainerElement *)&local_330 <
             pFVar8 + (longlong)(this->BodyHolders).ArrayMax * 8)) &&
           (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar25)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        iVar27 = (this->BodyHolders).ArrayNum;
        piVar3 = &(this->BodyHolders).ArrayMax;
        if (iVar27 == *piVar3) {
          iVar27 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&pTVar5->AllocatorInstance,piVar3);
        }
        (this->BodyHolders).ArrayNum = iVar27 + 1;
        *(UObject **)((pTVar5->AllocatorInstance).Data + (longlong)iVar27 * 8) = local_330;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_330 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_330);
        }
        pFVar8 = (pTVar4->AllocatorInstance).Data;
        puVar2 = &param_1->BrickId;
        if (((pFVar8 <= puVar2) && (puVar2 < pFVar8 + (longlong)(this->BodyIds).ArrayMax * 8)) &&
           (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar25)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        uVar38 = (this->BodyIds).ArrayNum;
        piVar3 = &(this->BodyIds).ArrayMax;
        if (uVar38 == *piVar3) {
          uVar38 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&pTVar4->AllocatorInstance,piVar3);
        }
        pFVar8 = (pTVar4->AllocatorInstance).Data;
        (this->BodyIds).ArrayNum = uVar38 + 1;
        *(ulong64 *)(pFVar8 + (longlong)(int)uVar38 * 8) = *puVar2;
      }
      this_03 = local_318;
      uVar26 = 0;
      if ((int)uVar38 < (this->BodyHolders).ArrayNum) {
        uVar26 = ~uVar38 >> 0x1f;
      }
      if ((uVar26 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      this_00 = *(UMRMeshBodyHolder **)
                 ((this->BodyHolders).AllocatorInstance.Data + (longlong)(int)uVar38 * 8);
      if ((this_00->BrickId != param_1->BrickId) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("BodyHolder.BrickId == Args.BrickId",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MRMesh\\Private\\MRMeshComponent.cpp"
                              ,0x2c7,L""), bVar25)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      UMRMeshBodyHolder::AbortCook(this_00);
      if (((this_00->BodySetup).field0_0x0.DebugPtr == (UBodySetup *)0x0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("BodySetup != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MRMesh\\Private\\MRMeshComponent.cpp"
                              ,0x47b,L""), bVar25)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      if ((this_00->BrickId != param_1->BrickId) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("BrickId == Args.BrickId",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MRMesh\\Private\\MRMeshComponent.cpp"
                              ,0x47c,L""), bVar25)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pTVar9 = (param_1->BrickDataReceipt).SharedReferenceCount.ReferenceController;
      pFVar10 = (param_1->BrickDataReceipt).Object;
      if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_268 = (this_00->BrickDataReceipt).Object;
      pTStack_260 = (this_00->BrickDataReceipt).SharedReferenceCount.ReferenceController;
      (this_00->BrickDataReceipt).Object = pFVar10;
      (this_00->BrickDataReceipt).SharedReferenceCount.ReferenceController = pTVar9;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_260);
      this_00->PositionData = param_1->PositionData;
      this_00->Indices = param_1->Indices;
      dVar13 = (param_1->Bounds).Min.field0_0x0._s_0.Y;
      (this_00->Bounds).Min.field0_0x0._s_0.X = (param_1->Bounds).Min.field0_0x0._s_0.X;
      (this_00->Bounds).Min.field0_0x0._s_0.Y = dVar13;
      dVar13 = (param_1->Bounds).Max.field0_0x0._s_0.X;
      (this_00->Bounds).Min.field0_0x0._s_0.Z = (param_1->Bounds).Min.field0_0x0._s_0.Z;
      (this_00->Bounds).Max.field0_0x0._s_0.X = dVar13;
      dVar13 = (param_1->Bounds).Max.field0_0x0._s_0.Z;
      (this_00->Bounds).Max.field0_0x0._s_0.Y = (param_1->Bounds).Max.field0_0x0._s_0.Y;
      (this_00->Bounds).Max.field0_0x0._s_0.Z = dVar13;
      uVar15 = (param_1->Bounds).Pad[0];
      uVar16 = (param_1->Bounds).Pad[1];
      uVar17 = (param_1->Bounds).Pad[2];
      uVar18 = (param_1->Bounds).Pad[3];
      uVar19 = (param_1->Bounds).Pad[4];
      uVar20 = (param_1->Bounds).Pad[5];
      uVar21 = (param_1->Bounds).Pad[6];
      (this_00->Bounds).IsValid = (param_1->Bounds).IsValid;
      (this_00->Bounds).Pad[0] = uVar15;
      (this_00->Bounds).Pad[1] = uVar16;
      (this_00->Bounds).Pad[2] = uVar17;
      (this_00->Bounds).Pad[3] = uVar18;
      (this_00->Bounds).Pad[4] = uVar19;
      (this_00->Bounds).Pad[5] = uVar20;
      (this_00->Bounds).Pad[6] = uVar21;
      if ((this->bUseAsyncCooking == false) || (bVar25 = UWorld::IsGameWorld(this_03), !bVar25)) {
        ((this_00->BodySetup).field0_0x0.DebugPtr)->bHasCookedCollisionData = '\x01';
        (**(code **)(((this_00->BodySetup).field0_0x0.DebugPtr)->_padding_ + 0x2d0))();
        (**(code **)(((this_00->BodySetup).field0_0x0.DebugPtr)->_padding_ + 0x2b0))();
        UActorComponent::RecreatePhysicsState((UActorComponent *)this);
        SuggestNavMeshUpdate(this);
      }
      else {
        this_01 = (this_00->BodySetup).field0_0x0.DebugPtr;
        local_328 = (FName)UMRMeshBodyHolder::FinishPhysicsAsyncCook;
        uStack_31c = local_258.D;
        this_00->bCookInProgress = true;
        uStack_320 = 0;
        local_2e0 = (undefined1  [8])0x0;
        local_2d8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_2d8.DelegateSize = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2e0,
                   (FWriteAccessScope *)&local_290);
        local_278 = &local_2d8;
        puVar33 = UE::Core::Private::DelegateAllocate(0x30,&local_2d8);
        if (puVar33 != (undefined8 *)0x0) {
          *puVar33 = &
                     ___7__TCommonDelegateInstanceState___A6AX_N_ZUFDefaultDelegateUserPolicy__PEAVUBodySetup____6B_
          ;
          puVar33[1] = this_01;
          uVar34 = FDelegateHandle::GenerateNewID();
          puVar33[2] = uVar34;
          *puVar33 = &
                     ___7__TBaseUObjectMethodDelegateInstance__0A_VUMRMeshBodyHolder____A6AX_N_ZUFDefaultDelegateUserPolicy__PEAVUBodySetup____6B_
          ;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this_00);
          }
          puVar33[3] = 0;
          local_2c8 = this_00;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this_00);
          }
          FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar33 + 3),(FObjectPtr)&local_2c8);
          *(FName *)(puVar33 + 4) = local_328;
          puVar33[5] = CONCAT44(uStack_31c,uStack_320);
        }
        if (local_290.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_290.Accessor,&local_290);
        }
        UBodySetup::CreatePhysicsMeshesAsync
                  (this_01,(TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy> *)local_2e0);
      }
    }
  }
  if (bVar14) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar22) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar23) && (FVar39 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_04 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_04 == (FThreadStats *)0x0) {
      this_05 = FThreadStatsPool::Get();
      this_04 = FThreadStatsPool::GetFromPool(this_05);
    }
    if (this_04->bWaitForExplicitFlush < this_04->ScopeCount) {
      local_2b8.NameAndInfo.Index = FVar39.ComparisonIndex.Value;
      local_2b8.NameAndInfo.Number = FVar39.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_2c0);
      local_2b8.StatData.Pad[4] = '\0';
      local_2b8.StatData.Pad[5] = '\0';
      local_2b8.StatData.Pad[6] = '\0';
      local_2b8.StatData.Pad[7] = '\0';
      local_2b8.StatData.Pad[0] = local_2c0.s.LowPart._0_1_;
      local_2b8.StatData.Pad[1] = local_2c0.s.LowPart._1_1_;
      local_2b8.StatData.Pad[2] = local_2c0.s.LowPart._2_1_;
      local_2b8.StatData.Pad[3] = local_2c0.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_04,&local_2b8);
      piVar3 = &this_04->ScopeCount;
      *piVar3 = *piVar3 + -1;
      if (*piVar3 == 0) {
        FThreadStats::Flush(this_04,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_04,false,false);
      }
    }
  }
LAB_146c6f73f:
  if (((this->bCreateMeshProxySections != false) && (*(longlong *)&this->field_0x530 != 0)) &&
     (GIsThreadedRendering != false)) {
    local_d8 = this;
    IMRMesh::FSendBrickDataArgs::FSendBrickDataArgs((FSendBrickDataArgs *)local_d0,param_1);
    local_58 = local_337;
    local_148[0] = (code *)0x0;
    local_120 = FMemory::Malloc(0x90,8);
    *local_120 = (code *)&UE::Core::Private::Function::
                          TFunction_OwnedObject<`UMRMeshComponent::SendBrickData_Internal'::`84'::<lambda_1>,1,1>
                          ::_vftable_;
    local_120[1] = (code *)local_d8;
    local_120[2] = (code *)local_d0._0_8_;
    local_120[3] = (code *)local_d0._8_8_;
    local_120[4] = (code *)local_d0._16_8_;
    local_120[5] = (code *)local_d0._24_8_;
    local_120[6] = (code *)local_d0._32_8_;
    local_120[10] = (code *)local_d0._64_8_;
    local_120[0xb] = (code *)local_d0._72_8_;
    local_120[7] = (code *)local_d0._40_8_;
    local_120[8] = (code *)local_d0._48_8_;
    local_120[0xc] = (code *)local_d0._80_8_;
    local_120[0xd] = (code *)local_d0._88_8_;
    local_120[9] = (code *)local_d0._56_8_;
    local_120[0xe] = (code *)local_d0._96_8_;
    local_120[0xf] = (code *)local_d0._104_8_;
    local_d0._8_8_ = (TReferenceControllerBase<1> *)0x0;
    local_120[0x10] = (code *)local_d0._112_8_;
    *(char *)(local_120 + 0x11) = local_337;
    if (local_120 + 1 != (code **)0x0) {
      local_148[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<`UMRMeshComponent::SendBrickData_Internal'::__l84::<lambda_1>,void,FRHICommandListImmediate_&>
                     ::Call;
    }
    local_d0._0_8_ = (FBrickDataReceipt *)0x0;
    this_06 = FRenderCommandList::GetInstanceTLS();
    if (this_06 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_UMRMeshComponent::SendBrickData_Internal_::__l84::TSTR_FSendBrickDataLambda764>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_148);
    }
    else {
      this_07 = FRenderCommandList::GetRenderThread(this_06);
      local_118._0_8_ = local_148[0];
      local_f0 = local_120;
      local_120 = (code **)0x0;
      local_118._16_8_ = local_138[0];
      local_118._24_8_ = local_138[1];
      local_118._32_8_ = local_138[2];
      local_148[0] = (code *)0x0;
      local_e8 = 2;
      pFVar35 = (FRenderCommandTag *)
                TRenderCommandTag<`UMRMeshComponent::SendBrickData_Internal'::__l84::TSTR_FSendBrickDataLambda764>
                ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_07,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_118,pFVar35);
      uVar40 = (ulonglong)local_e8;
      if ((2 < uVar40) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                              ,0xd4,L""), bVar22)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar40] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_118._0_8_ != (code *)0x0) {
          ppcVar37 = (code **)(local_118 + 0x10);
          if (local_f0 != (code **)0x0) {
            ppcVar37 = local_f0;
          }
          (**(code **)(*ppcVar37 + 0x10))();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar40])(local_118);
      }
    }
    if (local_148[0] != (code *)0x0) {
      ppcVar37 = local_148 + 2;
      if (local_120 != (code **)0x0) {
        ppcVar37 = local_120;
      }
      (**(code **)(*ppcVar37 + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->BrickDataReceipt).SharedReferenceCount.ReferenceController);
  return;
}

// SendRelativeTransform @ 146c6fa00

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UMRMeshComponent::SendRelativeTransform(UMRMeshComponent *this,TTransform<double> *param_1)

{
  USceneComponent::SetRelativeTransform
            ((USceneComponent *)&this[-1].field_0x98,param_1,false,(FHitResult *)0x0,None);
  return;
}

// SendRenderDynamicData_Concurrent @ 146c6fa30

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

void __thiscall UMRMeshComponent::SendRenderDynamicData_Concurrent(UMRMeshComponent *this)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar3;
  code **ppcVar4;
  ulonglong uVar5;
  undefined1 auStack_c8 [32];
  UMRMeshComponent *local_a8;
  undefined1 uStack_a0;
  undefined7 uStack_9f;
  UMaterial *local_98;
  code *local_88 [2];
  code *local_78 [3];
  code **local_60;
  undefined1 local_58 [40];
  code **local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  UActorComponent::SendRenderDynamicData_Concurrent((UActorComponent *)this);
  if (*(longlong *)&this->field_0x530 != 0) {
    if (((this->bUseWireframe == false) ||
        (local_98 = (UMaterial *)(this->WireframeMaterial).field0_0x0.DebugPtr,
        local_98 == (UMaterial *)0x0)) &&
       (local_98 = (UMaterial *)(this->Material).field0_0x0.DebugPtr, local_98 == (UMaterial *)0x0))
    {
      local_98 = UMaterial::GetDefaultMaterial(MD_Surface);
    }
    uStack_a0 = this->bUseWireframe;
    local_88[0] = (code *)0x0;
    local_a8 = this;
    local_60 = FMemory::Malloc(0x20,8);
    *local_60 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`UMRMeshComponent::SendRenderDynamicData_Concurrent'::`5'::<lambda_1>,1,1>
                         ::_vftable_;
    local_60[1] = (code *)local_a8;
    local_60[2] = (code *)CONCAT71(uStack_9f,uStack_a0);
    local_60[3] = (code *)local_98;
    if (local_60 + 1 != (code **)0x0) {
      local_88[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`UMRMeshComponent::SendRenderDynamicData_Concurrent'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
                    ::Call;
    }
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_UMRMeshComponent::SendRenderDynamicData_Concurrent_::__l5::TSTR_FSetMaterialLambda863>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_58._0_8_ = local_88[0];
      local_30 = local_60;
      local_60 = (code **)0x0;
      local_58._16_8_ = local_78[0];
      local_58._24_8_ = local_78[1];
      local_58._32_8_ = local_78[2];
      local_88[0] = (code *)0x0;
      local_28 = 2;
      pFVar3 = (FRenderCommandTag *)
               TRenderCommandTag<`UMRMeshComponent::SendRenderDynamicData_Concurrent'::__l5::TSTR_FSetMaterialLambda863>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_58,pFVar3);
      uVar5 = (ulonglong)local_28;
      if (2 < uVar5) {
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
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar5] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_58._0_8_ != (code *)0x0) {
          ppcVar4 = (code **)(local_58 + 0x10);
          if (local_30 != (code **)0x0) {
            ppcVar4 = local_30;
          }
          (**(code **)(*ppcVar4 + 0x10))();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar5])(local_58);
      }
    }
    if (local_88[0] != (code *)0x0) {
      ppcVar4 = local_88 + 2;
      if (local_60 != (code **)0x0) {
        ppcVar4 = local_60;
      }
      (**(code **)(*ppcVar4 + 0x10))();
    }
  }
  return;
}

// SetCollisionEnabled @ 146c6fc10

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UMRMeshComponent::SetCollisionEnabled(UMRMeshComponent *this,Type param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  bool bVar3;
  Type TVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res10 [8];
  
  TVar4 = FBodyInstance::GetCollisionEnabled_CheckOwner((FBodyInstance *)&this->field_0x390);
  if (TVar4 != param_1) {
    pFVar5 = (this->BodyHolders).AllocatorInstance.Data;
    iVar2 = (this->BodyHolders).ArrayNum;
    pFVar1 = pFVar5 + (longlong)iVar2 * 8;
    while( true ) {
      if ((this->BodyHolders).ArrayNum != iVar2) {
        `TCheckedPointerIterator<TObjectPtr<UMRMeshBodyHolder>,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res10);
      }
      if (pFVar5 == pFVar1) break;
      FBodyInstance::SetCollisionEnabled((FBodyInstance *)(*(longlong *)pFVar5 + 0x38),param_1,true)
      ;
      pFVar5 = pFVar5 + 8;
    }
    if ((((this->field_0x98 & 1) != 0) && ((this->field_0x398 & 1) != 0)) &&
       (bVar3 = UPrimitiveComponent::IsWelded((UPrimitiveComponent *)this), !bVar3)) {
      pFVar5 = (this->BodyHolders).AllocatorInstance.Data;
      iVar2 = (this->BodyHolders).ArrayNum;
      pFVar1 = pFVar5 + (longlong)iVar2 * 8;
      while( true ) {
        if ((this->BodyHolders).ArrayNum != iVar2) {
          `TCheckedPointerIterator<TObjectPtr<UMRMeshBodyHolder>,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res10);
        }
        if (pFVar5 == pFVar1) break;
        FBodyInstance::ApplyWeldOnChildren((FBodyInstance *)(*(longlong *)pFVar5 + 0x38));
        pFVar5 = pFVar5 + 8;
      }
    }
  }
  UPrimitiveComponent::SetCollisionEnabled((UPrimitiveComponent *)this,param_1);
  return;
}

// SetCollisionObjectType @ 146c6fd10

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
UMRMeshComponent::SetCollisionObjectType(UMRMeshComponent *this,ECollisionChannel param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->BodyHolders).AllocatorInstance.Data;
  iVar2 = (this->BodyHolders).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->BodyHolders).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UMRMeshBodyHolder>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    FBodyInstance::SetObjectType((FBodyInstance *)(*(longlong *)pFVar3 + 0x38),param_1);
    pFVar3 = pFVar3 + 8;
  }
  UPrimitiveComponent::SetCollisionObjectType((UPrimitiveComponent *)this,param_1);
  return;
}

// SetCollisionProfileName @ 146c6fd90

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
UMRMeshComponent::SetCollisionProfileName(UMRMeshComponent *this,FName param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<FStat_STAT_MrMesh_SetCollisionProfileName> FVar7;
  uint *puVar8;
  FTlsAutoCleanup *pFVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  FColor_u_0 FVar12;
  FName FVar13;
  FColor_u_0 local_res8;
  uint uStackX_c;
  FName local_res20;
  code *local_48;
  FColor_u_0 *local_40;
  
  FVar7 = StatPtr_STAT_MrMesh_SetCollisionProfileName;
  if (StatPtr_STAT_MrMesh_SetCollisionProfileName ==
      (FThreadSafeStaticStat<FStat_STAT_MrMesh_SetCollisionProfileName>)0x0) {
    pFVar6 = ::FName::FName(&local_res20,"STAT_MrMesh_SetCollisionProfileName");
    FVar7 = (FThreadSafeStaticStat<FStat_STAT_MrMesh_SetCollisionProfileName>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MrMesh_SetCollisionProfileName,
                       *pFVar6,L"MrMesh SetCollisionProfileName","STATGROUP_Physics",
                       "STATCAT_Advanced",L"Physics",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar13 = *(FName *)FVar7;
  bVar3 = false;
  bVar5 = false;
  FVar12.Bits = (uint)FVar13.ComparisonIndex.Value;
  uVar10 = FVar13.Number;
  if ((FVar12.Bits != 0) || (uVar10 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8._s_0,(char *)*(FName *)((longlong)FVar7 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.Bits = FVar12.Bits;
        uStackX_c = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8._s_0,(wchar_t *)*(FName *)((longlong)FVar7 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MRMesh\\Private\\MRMeshComponent.cpp"
                   ,0x221);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.Bits = FVar12.Bits;
      uStackX_c = uVar10;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar4 = true;
      goto LAB_146c6fef2;
    }
  }
  bVar4 = false;
  FVar13.ComparisonIndex.Value = 0;
  FVar13.Number = 0;
LAB_146c6fef2:
  puVar8 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  local_40 = &local_res8;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar9 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_48,puVar8);
  pFVar11 = (this->BodyHolders).AllocatorInstance.Data;
  iVar2 = (this->BodyHolders).ArrayNum;
  pFVar1 = pFVar11 + (longlong)iVar2 * 8;
  if (pFVar9[6] == (FTlsAutoCleanup)this) {
    while( true ) {
      if ((this->BodyHolders).ArrayNum != iVar2) {
        `TCheckedPointerIterator<TObjectPtr<UMRMeshBodyHolder>,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(&local_res8);
      }
      if (pFVar11 == pFVar1) break;
      FBodyInstance::SetCollisionProfileNameDeferred
                ((FBodyInstance *)(*(longlong *)pFVar11 + 0x38),param_1);
      pFVar11 = pFVar11 + 8;
    }
  }
  else {
    while( true ) {
      if ((this->BodyHolders).ArrayNum != iVar2) {
        `TCheckedPointerIterator<TObjectPtr<UMRMeshBodyHolder>,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(&local_res8);
      }
      if (pFVar11 == pFVar1) break;
      FBodyInstance::SetCollisionProfileName((FBodyInstance *)(*(longlong *)pFVar11 + 0x38),param_1)
      ;
      pFVar11 = pFVar11 + 8;
    }
  }
  UPrimitiveComponent::SetCollisionProfileName((UPrimitiveComponent *)this,param_1,param_2);
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar4) {
    FThreadStats::AddMessage(FVar13,CycleScopeEnd);
  }
  return;
}

// SetCollisionResponseToAllChannels @ 146c6fff0

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
UMRMeshComponent::SetCollisionResponseToAllChannels
          (UMRMeshComponent *this,ECollisionResponse param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->BodyHolders).AllocatorInstance.Data;
  iVar2 = (this->BodyHolders).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->BodyHolders).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UMRMeshBodyHolder>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    FBodyInstance::SetResponseToAllChannels((FBodyInstance *)(*(longlong *)pFVar3 + 0x38),param_1);
    pFVar3 = pFVar3 + 8;
  }
  UPrimitiveComponent::SetCollisionResponseToAllChannels((UPrimitiveComponent *)this,param_1);
  return;
}

// SetCollisionResponseToChannel @ 146c70070

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
UMRMeshComponent::SetCollisionResponseToChannel
          (UMRMeshComponent *this,ECollisionChannel param_1,ECollisionResponse param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->BodyHolders).AllocatorInstance.Data;
  iVar2 = (this->BodyHolders).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->BodyHolders).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UMRMeshBodyHolder>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    FBodyInstance::SetResponseToChannel
              ((FBodyInstance *)(*(longlong *)pFVar3 + 0x38),param_1,param_2);
    pFVar3 = pFVar3 + 8;
  }
  UPrimitiveComponent::SetCollisionResponseToChannel((UPrimitiveComponent *)this,param_1,param_2);
  return;
}

// SetCollisionResponseToChannels @ 146c70100

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
UMRMeshComponent::SetCollisionResponseToChannels
          (UMRMeshComponent *this,FCollisionResponseContainer *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->BodyHolders).AllocatorInstance.Data;
  iVar2 = (this->BodyHolders).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->BodyHolders).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UMRMeshBodyHolder>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    FBodyInstance::SetResponseToChannels((FBodyInstance *)(*(longlong *)pFVar3 + 0x38),param_1);
    pFVar3 = pFVar3 + 8;
  }
  UPrimitiveComponent::SetCollisionResponseToChannels((UPrimitiveComponent *)this,param_1);
  return;
}

// SetConnected @ 146c70180

void __thiscall UMRMeshComponent::SetConnected(UMRMeshComponent *this,bool param_1)

{
  this->field_0x1d = param_1;
  return;
}

// SetEnableMeshOcclusion @ 146c70190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UMRMeshComponent::SetEnableMeshOcclusion(UMRMeshComponent *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar3;
  undefined ***pppuVar4;
  ulonglong uVar5;
  undefined1 auStack_b8 [48];
  code *local_88 [2];
  undefined **local_78;
  UMRMeshComponent *pUStack_70;
  undefined1 local_68;
  undefined4 uStack_67;
  undefined2 uStack_63;
  undefined1 uStack_61;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  UMRMeshComponent *pUStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  this->bEnableOcclusion = param_1;
  if (*(longlong *)&this->field_0x530 != 0) {
    local_60 = (undefined ***)0x0;
    local_78 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UMRMeshComponent::SetEnableMeshOcclusion'::`5'::<lambda_1>,1,0>
                ::_vftable_;
    uStack_67 = auStack_b8._41_4_;
    uStack_63 = auStack_b8._45_2_;
    uStack_61 = auStack_b8[0x2f];
    local_88[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UMRMeshComponent::SetEnableMeshOcclusion'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
    pUStack_70 = this;
    local_68 = param_1;
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_UMRMeshComponent::SetEnableMeshOcclusion_::__l5::TSTR_FSetEnableMeshOcclusionLambda1078>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_38._1_4_ = uStack_67;
      local_38._0_1_ = local_68;
      local_38._5_2_ = uStack_63;
      local_38._7_1_ = uStack_61;
      local_58._0_8_ = local_88[0];
      local_30 = local_60;
      local_48 = local_78;
      pUStack_40 = pUStack_70;
      local_88[0] = (code *)0x0;
      local_28 = 2;
      pFVar3 = (FRenderCommandTag *)
               TRenderCommandTag<`UMRMeshComponent::SetEnableMeshOcclusion'::__l5::TSTR_FSetEnableMeshOcclusionLambda1078>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_58,pFVar3);
      uVar5 = (ulonglong)local_28;
      if (2 < uVar5) {
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
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar5] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_58._0_8_ != (code *)0x0) {
          pppuVar4 = (undefined ***)(local_58 + 0x10);
          if (local_30 != (undefined ***)0x0) {
            pppuVar4 = local_30;
          }
          (*(code *)(*pppuVar4)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar5])(local_58);
      }
    }
    if (local_88[0] != (code *)0x0) {
      pppuVar4 = &local_78;
      if (local_60 != (undefined ***)0x0) {
        pppuVar4 = local_60;
      }
      (*(code *)(*pppuVar4)[2])();
    }
  }
  return;
}

// SetMaterial @ 146c70320

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
UMRMeshComponent::SetMaterial(UMRMeshComponent *this,int param_1,UMaterialInterface *param_2)

{
  UMaterialInterface *pUVar1;
  bool bVar2;
  
  pUVar1 = (this->Material).field0_0x0.DebugPtr;
  if (pUVar1 == (UMaterialInterface *)0x0) {
    bVar2 = param_2 == (UMaterialInterface *)0x0;
  }
  else {
    bVar2 = pUVar1 == param_2;
  }
  if (!bVar2) {
    if ((UE::GC::GIsIncrementalReachabilityPending) && (param_2 != (UMaterialInterface *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    (this->Material).field0_0x0.DebugPtr = param_2;
    UActorComponent::MarkRenderDynamicDataDirty((UActorComponent *)this);
  }
  return;
}

// SetUseWireframe @ 146c70380

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UMRMeshComponent::SetUseWireframe(UMRMeshComponent *this,bool param_1)

{
  this->bUseWireframe = param_1;
  UActorComponent::MarkRenderDynamicDataDirty((UActorComponent *)this);
  return;
}

// SetWalkableSlopeOverride @ 146c703a0

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
UMRMeshComponent::SetWalkableSlopeOverride(UMRMeshComponent *this,FWalkableSlopeOverride *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  pFVar4 = (this->BodyHolders).AllocatorInstance.Data;
  iVar2 = (this->BodyHolders).ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->BodyHolders).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UMRMeshBodyHolder>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    bVar3 = FBodyInstance::IsValidBodyInstance((FBodyInstance *)(*(longlong *)pFVar4 + 0x38));
    if (bVar3) {
      FBodyInstance::SetWalkableSlopeOverride
                ((FBodyInstance *)(*(longlong *)pFVar4 + 0x38),param_1,true);
    }
    pFVar4 = pFVar4 + 8;
  }
  UPrimitiveComponent::SetWalkableSlopeOverride((UPrimitiveComponent *)this,param_1);
  return;
}

// SetWireframeColor @ 146c70440

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UMRMeshComponent::SetWireframeColor(UMRMeshComponent *this,FLinearColor *param_1)

{
  undefined8 uVar1;
  bool bVar2;
  UClass *pUVar3;
  UMaterialInstanceDynamic *pUVar4;
  FLinearColor_u_0 local_28;
  
  do {
    uVar1 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
    *(undefined8 *)&(this->WireframeColor).field0_0x0 = *(undefined8 *)&param_1->field0_0x0;
    *(undefined8 *)((longlong)&(this->WireframeColor).field0_0x0 + 8) = uVar1;
    if ((this->WireframeMaterial).field0_0x0.DebugPtr != (UMaterialInterface *)0x0) {
      pUVar3 = Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
      bVar2 = FObjectPtr::IsA((FObjectPtr *)&this->WireframeMaterial,pUVar3);
      if ((bVar2) &&
         (pUVar4 = (UMaterialInstanceDynamic *)(this->WireframeMaterial).field0_0x0.DebugPtr,
         pUVar4 != (UMaterialInstanceDynamic *)0x0)) {
        if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x9d4c) < ::_TSS0) {
          _Init_thread_header(&::_TSS0);
          if (::_TSS0 == -1) {
            ::FName::FName(&ParamName,L"Color");
            _Init_thread_footer(&::_TSS0);
          }
        }
        local_28._0_8_ = *(undefined8 *)&param_1->field0_0x0;
        local_28._8_8_ = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
        UMaterialInstanceDynamic::SetVectorParameterValue
                  (pUVar4,ParamName,(FLinearColor *)&local_28._s_0);
        UActorComponent::MarkRenderDynamicDataDirty((UActorComponent *)this);
        return;
      }
    }
    pUVar4 = UMaterialInstanceDynamic::Create
                       ((this->WireframeMaterial).field0_0x0.DebugPtr,(UObject *)this,(FName)0x0);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar4 != (UMaterialInstanceDynamic *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->WireframeMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)pUVar4;
  } while( true );
}

// SetWireframeMaterial @ 146c70570

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
UMRMeshComponent::SetWireframeMaterial(UMRMeshComponent *this,UMaterialInterface *param_1)

{
  UMaterialInterface *pUVar1;
  bool bVar2;
  
  pUVar1 = (this->WireframeMaterial).field0_0x0.DebugPtr;
  if (pUVar1 == (UMaterialInterface *)0x0) {
    bVar2 = param_1 == (UMaterialInterface *)0x0;
  }
  else {
    bVar2 = pUVar1 == param_1;
  }
  if (!bVar2) {
    if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UMaterialInterface *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    (this->WireframeMaterial).field0_0x0.DebugPtr = param_1;
    UActorComponent::MarkRenderDynamicDataDirty((UActorComponent *)this);
  }
  return;
}

// ShouldCreatePhysicsState @ 146c705d0

bool __thiscall UMRMeshComponent::ShouldCreatePhysicsState(UMRMeshComponent *this)

{
  return false;
}

// StaticRegisterNativesUMRMeshComponent @ 146c70600

void __cdecl UMRMeshComponent::StaticRegisterNativesUMRMeshComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0xb;
  local_18.DataPtr = Z_Construct_UClass_UMRMeshComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// SuggestNavMeshUpdate @ 146c706d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UMRMeshComponent::SuggestNavMeshUpdate(UMRMeshComponent *this)

{
  this->bNavMeshUpdateSuggested = true;
  if ((this->bUpdateNavMeshOnMeshUpdate != false) && (this->field_0x285 != '\0')) {
    this->bNavMeshUpdateSuggested = false;
    USceneComponent::UpdateNavigationData((USceneComponent *)this);
    return;
  }
  return;
}

// UpdateMesh @ 146c72960

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UMRMeshComponent::UpdateMesh
          (UMRMeshComponent *this,TVector<double> *param_1,TQuat<double> *param_2,
          TVector<double> *param_3,
          TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *param_4,
          TArray<unsigned_int,TSizedDefaultAllocator<32>_> *param_5,
          TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_6,
          TArray<FPackedNormal,TSizedDefaultAllocator<32>_> *param_7,
          TArray<FColor,TSizedDefaultAllocator<32>_> *param_8)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  bool bVar11;
  bool bVar12;
  uint uVar13;
  TReferenceControllerBase<1> *pTVar14;
  TRotator<double> *this_00;
  TQuat<double> *pTVar15;
  TMatrix<double> *pTVar16;
  TReferenceControllerBase<1> *pTVar17;
  uint uVar18;
  longlong lVar19;
  longlong lVar20;
  double dVar21;
  undefined4 uVar22;
  undefined1 auStackY_378 [32];
  TVector<double>_u_0 local_308;
  TVector<double>_u_0 local_2e8;
  FSendBrickDataArgs local_2c8;
  TTransform<double> local_248;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  double dStack_1d0;
  TRotator<double> local_1c8;
  TQuat<double> local_1a8;
  undefined1 local_188 [24];
  double dStack_170;
  double local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  TVector<double>_u_0 local_150;
  undefined8 uStack_138;
  undefined8 local_130;
  double dStack_128;
  uchar local_120;
  uchar uStack_11f;
  uchar uStack_11e;
  uchar uStack_11d;
  uchar uStack_11c;
  uchar uStack_11b;
  uchar uStack_11a;
  uchar uStack_119;
  TMatrix<double> local_118;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_378;
  local_308._s_0.X = (param_1->field0_0x0)._s_0.X;
  local_308._s_0.Y = (param_1->field0_0x0)._s_0.Y;
  local_308._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  USceneComponent::SetRelativeLocationAndRotation
            ((USceneComponent *)this,(TVector<double> *)&local_308._s_0,param_2,false,
             (FHitResult *)0x0,None);
  local_2e8._s_0.X = (param_3->field0_0x0)._s_0.X;
  local_2e8._s_0.Y = (param_3->field0_0x0)._s_0.Y;
  local_2e8._s_0.Z = (param_3->field0_0x0)._s_0.Z;
  USceneComponent::SetRelativeScale3D((USceneComponent *)this,(TVector<double> *)&local_2e8._s_0);
  pTVar14 = ::operator_new(0x68);
  if (pTVar14 == (TReferenceControllerBase<1> *)0x0) {
    pTVar14 = (TReferenceControllerBase<1> *)0x0;
    pTVar17 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar14->SharedReferenceCount = (atomic<int>)0x1;
    pTVar14->WeakReferenceCount = (atomic<int>)0x1;
    pTVar14->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_UFMeshArrayHolder___00_SharedPointerInternals__6B_;
    FMeshArrayHolder::FMeshArrayHolder
              ((FMeshArrayHolder *)(pTVar14 + 1),param_4,param_5,param_6,param_7,param_8);
    pTVar17 = pTVar14 + 1;
    if ((pTVar17 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("InObject != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x246,L""), bVar11)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    LOCK();
    pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
  lVar20 = (longlong)param_4->ArrayNum;
  bVar11 = false;
  uVar18 = 0;
  local_158._0_1_ = '\0';
  local_158._1_1_ = '\0';
  local_158._2_1_ = '\0';
  local_158._3_1_ = '\0';
  local_158._4_1_ = '\0';
  local_158._5_1_ = '\0';
  local_158._6_1_ = '\0';
  local_158._7_1_ = '\0';
  local_188._0_16_ = ZEXT816(0);
  auVar9 = local_188._0_16_;
  local_188._16_8_ = 0.0;
  _dStack_170 = ZEXT816(0);
  auVar10 = _dStack_170;
  uStack_160 = 0.0;
  if (0 < lVar20) {
    lVar19 = 0;
    local_188._0_8_ = 0.0;
    local_188._8_8_ = 0.0;
    local_168 = 0.0;
    dStack_170 = 0.0;
    dVar5 = (double)local_188._0_8_;
    dVar6 = (double)local_188._8_8_;
    dVar8 = local_168;
    dVar7 = dStack_170;
    local_188._0_16_ = auVar9;
    _dStack_170 = auVar10;
    do {
      uVar13 = 0;
      if ((int)uVar18 < param_4->ArrayNum) {
        uVar13 = ~uVar18 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (param_4->AllocatorInstance).Data;
      dVar4 = (double)*(float *)(pFVar1 + lVar19);
      dVar21 = (double)*(float *)(pFVar1 + lVar19 + 4);
      dVar3 = (double)*(float *)(pFVar1 + lVar19 + 8);
      uVar22 = (undefined4)((ulonglong)dVar21 >> 0x20);
      if (bVar11) {
        if (dVar4 <= dVar5) {
          dVar5 = dVar4;
        }
        if (dVar3 <= (double)local_188._16_8_) {
          local_188._16_8_ = dVar3;
        }
        if (dVar21 <= dVar6) {
          dVar6 = dVar21;
        }
        if (dVar7 <= dVar4) {
          dVar7 = dVar4;
        }
        if (dVar8 <= dVar21) {
          dVar8 = dVar21;
        }
        if ((double)uStack_160 <= dVar3) {
          uStack_160 = dVar3;
        }
        local_188._8_8_ = dVar6;
        local_188._0_8_ = dVar5;
        local_168 = dVar8;
        dStack_170 = dVar7;
        dVar4 = dVar5;
        dVar21 = dVar6;
      }
      else {
        bVar11 = true;
        local_158._0_1_ = '\x01';
        unique0x10000584 = SUB84(dVar21,0);
        dStack_170 = dVar4;
        unique0x10000588 = uVar22;
        local_188._8_4_ = SUB84(dVar21,0);
        local_188._0_8_ = dVar4;
        local_188._12_4_ = uVar22;
        dVar7 = dVar4;
        dVar8 = dVar21;
        local_188._16_8_ = dVar3;
        uStack_160 = dVar3;
      }
      uVar18 = uVar18 + 1;
      lVar19 = lVar19 + 0xc;
      lVar20 = lVar20 + -1;
      dVar5 = dVar4;
      dVar6 = dVar21;
    } while (lVar20 != 0);
  }
  this_00 = UE::Math::TQuat<double>::Rotator(param_2,&local_1c8);
  pTVar15 = UE::Math::TRotator<double>::Quaternion(this_00,&local_1a8);
  local_248.Rotation.XY.m128d_f64[0] = pTVar15->X;
  local_248.Rotation.XY.m128d_f64[1] = pTVar15->Y;
  local_248.Rotation.ZW.m128d_f64[0] = pTVar15->Z;
  local_248.Rotation.ZW.m128d_f64[1] = pTVar15->W;
  local_248.Translation.XY.m128d_f64[0] = (param_1->field0_0x0)._s_0.X;
  local_248.Translation.XY.m128d_f64[1] = (param_1->field0_0x0)._s_0.Y;
  local_248.Translation.ZW.m128d_f64[0] = (param_1->field0_0x0)._s_0.Z;
  local_248.Translation.ZW.m128d_f64[1] = 0.0;
  local_248.Scale3D.XY.m128d_f64[0] = (param_3->field0_0x0)._s_0.X;
  local_248.Scale3D.XY.m128d_f64[1] = (param_3->field0_0x0)._s_0.Y;
  local_248.Scale3D.ZW.m128d_f64[0] = (param_3->field0_0x0)._s_0.Z;
  local_248.Scale3D.ZW.m128d_f64[1] = 0.0;
  local_1e8 = local_248.Rotation.XY.m128d_f64[0];
  dStack_1e0 = local_248.Rotation.XY.m128d_f64[1];
  local_1d8 = local_248.Rotation.ZW.m128d_f64[0];
  dStack_1d0 = local_248.Rotation.ZW.m128d_f64[1];
  pTVar16 = UE::Math::TTransform<double>::ToMatrixWithScale(&local_248,&local_118);
  UE::Math::TBox<double>::TransformBy
            ((TBox<double> *)local_188,(TBox<double> *)&local_150._s_0,pTVar16);
  local_188._8_8_ = local_150._s_0.Y;
  local_188._0_8_ = local_150._s_0.X;
  local_188._16_8_ = local_150._s_0.Z;
  local_158._0_1_ = local_120;
  local_158._1_1_ = uStack_11f;
  local_158._2_1_ = uStack_11e;
  local_158._3_1_ = uStack_11d;
  local_158._4_1_ = uStack_11c;
  local_158._5_1_ = uStack_11b;
  local_158._6_1_ = uStack_11a;
  local_158._7_1_ = uStack_119;
  local_168 = (double)local_130;
  dStack_170 = (double)uStack_138;
  uStack_160 = dStack_128;
  if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pTVar17 == (TReferenceControllerBase<1> *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar11)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((pTVar17 == (TReferenceControllerBase<1> *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar11)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((pTVar17 == (TReferenceControllerBase<1> *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar11)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((pTVar17 == (TReferenceControllerBase<1> *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar11)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((pTVar17 == (TReferenceControllerBase<1> *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar11)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_2c8.Indices =
       (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)&pTVar17[1].SharedReferenceCount;
  local_2c8.Bounds.Min.field0_0x0._s_0.X = (double)local_188._0_8_;
  local_2c8.Bounds.Min.field0_0x0._s_0.Y = (double)local_188._8_8_;
  local_2c8.BrickId = 0;
  local_2c8.Bounds.Min.field0_0x0._s_0.Z = (double)local_188._16_8_;
  local_2c8.Bounds.Max.field0_0x0._s_0.X = dStack_170;
  local_2c8.Bounds.Max.field0_0x0._s_0.Y = local_168;
  local_2c8.Bounds.Max.field0_0x0._s_0.Z = (double)uStack_160;
  local_2c8.Bounds.IsValid = (uchar)local_158;
  local_2c8.Bounds.Pad[0] = local_158._1_1_;
  local_2c8.Bounds.Pad[1] = local_158._2_1_;
  local_2c8.Bounds.Pad[2] = local_158._3_1_;
  local_2c8.Bounds.Pad[3] = local_158._4_1_;
  local_2c8.Bounds.Pad[4] = local_158._5_1_;
  local_2c8.Bounds.Pad[5] = local_158._6_1_;
  local_2c8.Bounds.Pad[6] = local_158._7_1_;
  local_2c8.BrickDataReceipt.Object = (FBrickDataReceipt *)pTVar17;
  local_2c8.BrickDataReceipt.SharedReferenceCount.ReferenceController = pTVar14;
  local_2c8.PositionData =
       (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
       &pTVar17->SharedReferenceCount;
  local_2c8.UVData =
       (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
       &pTVar17[2].SharedReferenceCount;
  local_2c8.TangentXZData =
       (TArray<FPackedNormal,TSizedDefaultAllocator<32>_> *)&pTVar17[3].SharedReferenceCount;
  local_2c8.ColorData =
       (TArray<FColor,TSizedDefaultAllocator<32>_> *)&pTVar17[4].SharedReferenceCount;
  SendBrickData_Internal(this,&local_2c8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
  pFVar1 = (param_6->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (param_7->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (param_8->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// UpdateMesh @ 146c72fa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UMRMeshComponent::UpdateMesh
          (UMRMeshComponent *this,TVector<double> *param_1,TQuat<double> *param_2,
          TVector<double> *param_3,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_4,
          TArray<unsigned_int,TSizedDefaultAllocator<32>_> *param_5,
          TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_6,
          TArray<FPackedNormal,TSizedDefaultAllocator<32>_> *param_7,
          TArray<FColor,TSizedDefaultAllocator<32>_> *param_8)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  TRotator<double> *this_00;
  TQuat<double> *pTVar5;
  TMatrix<double> *pTVar6;
  FMeshArrayHolder *pFVar7;
  TReferenceControllerBase<1> *pTVar8;
  undefined1 auStackY_328 [32];
  TVector<double>_u_0 local_2c8;
  TVector<double>_u_0 local_2a8;
  FSendBrickDataArgs local_288;
  TTransform<double> local_208;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  double dStack_190;
  TRotator<double> local_188;
  TQuat<double> local_168;
  TVector<double>_u_0 local_148;
  double dStack_130;
  double local_128;
  double dStack_120;
  uchar local_118;
  uchar uStack_117;
  uchar uStack_116;
  uchar uStack_115;
  uchar uStack_114;
  uchar uStack_113;
  uchar uStack_112;
  uchar uStack_111;
  TBox<double> local_110;
  TMatrix<double> local_d8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_328;
  local_2c8._s_0.X = (param_1->field0_0x0)._s_0.X;
  local_2c8._s_0.Y = (param_1->field0_0x0)._s_0.Y;
  local_2c8._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  USceneComponent::SetRelativeLocationAndRotation
            ((USceneComponent *)this,(TVector<double> *)&local_2c8._s_0,param_2,false,
             (FHitResult *)0x0,None);
  local_2a8._s_0.X = (param_3->field0_0x0)._s_0.X;
  local_2a8._s_0.Y = (param_3->field0_0x0)._s_0.Y;
  local_2a8._s_0.Z = (param_3->field0_0x0)._s_0.Z;
  USceneComponent::SetRelativeScale3D((USceneComponent *)this,(TVector<double> *)&local_2a8._s_0);
  iVar1 = param_4->ArrayNum;
  if (iVar1 < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  UE::Math::TBox<double>::TBox<double>
            (&local_110,(TVector<double> *)(param_4->AllocatorInstance).Data,iVar1);
  this_00 = UE::Math::TQuat<double>::Rotator(param_2,&local_188);
  pTVar5 = UE::Math::TRotator<double>::Quaternion(this_00,&local_168);
  local_208.Scale3D.XY.m128d_f64[0] = (param_3->field0_0x0)._s_0.X;
  local_208.Scale3D.XY.m128d_f64[1] = (param_3->field0_0x0)._s_0.Y;
  local_208.Rotation.XY.m128d_f64[0] = pTVar5->X;
  local_208.Rotation.XY.m128d_f64[1] = pTVar5->Y;
  local_208.Rotation.ZW.m128d_f64[0] = pTVar5->Z;
  local_208.Rotation.ZW.m128d_f64[1] = pTVar5->W;
  local_208.Translation.XY.m128d_f64[0] = (param_1->field0_0x0)._s_0.X;
  local_208.Translation.XY.m128d_f64[1] = (param_1->field0_0x0)._s_0.Y;
  local_208.Translation.ZW.m128d_f64[0] = (param_1->field0_0x0)._s_0.Z;
  local_208.Translation.ZW.m128d_f64[1] = 0.0;
  local_208.Scale3D.ZW.m128d_f64[0] = (param_3->field0_0x0)._s_0.Z;
  local_208.Scale3D.ZW.m128d_f64[1] = 0.0;
  local_1a8 = local_208.Rotation.XY.m128d_f64[0];
  dStack_1a0 = local_208.Rotation.XY.m128d_f64[1];
  local_198 = local_208.Rotation.ZW.m128d_f64[0];
  dStack_190 = local_208.Rotation.ZW.m128d_f64[1];
  pTVar6 = UE::Math::TTransform<double>::ToMatrixWithScale(&local_208,&local_d8);
  UE::Math::TBox<double>::TransformBy(&local_110,(TBox<double> *)&local_148._s_0,pTVar6);
  pFVar7 = ::operator_new(0x58);
  if (pFVar7 == (FMeshArrayHolder *)0x0) {
    pFVar7 = (FMeshArrayHolder *)0x0;
  }
  else {
    pFVar7 = FMeshArrayHolder::FMeshArrayHolder(pFVar7,param_4,param_5,param_6,param_7,param_8);
  }
  pTVar8 = ::operator_new(0x18);
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
    pTVar8 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFMeshArrayHolder__U__DefaultDeleter_UFMeshArrayHolder___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar8[1]._padding_ = (longlong)pFVar7;
  }
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pFVar7 == (FMeshArrayHolder *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (pFVar7 == (FMeshArrayHolder *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (pFVar7 == (FMeshArrayHolder *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (pFVar7 == (FMeshArrayHolder *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (pFVar7 == (FMeshArrayHolder *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_288.Indices = &pFVar7->Indices;
  local_288.Bounds.Min.field0_0x0._s_0.X = local_148._s_0.X;
  local_288.Bounds.Min.field0_0x0._s_0.Y = local_148._s_0.Y;
  local_288.BrickId = 0;
  local_288.Bounds.Min.field0_0x0._s_0.Z = local_148._s_0.Z;
  local_288.Bounds.Max.field0_0x0._s_0.X = dStack_130;
  local_288.Bounds.Max.field0_0x0._s_0.Y = local_128;
  local_288.Bounds.Max.field0_0x0._s_0.Z = dStack_120;
  local_288.Bounds.IsValid = local_118;
  local_288.Bounds.Pad[0] = uStack_117;
  local_288.Bounds.Pad[1] = uStack_116;
  local_288.Bounds.Pad[2] = uStack_115;
  local_288.Bounds.Pad[3] = uStack_114;
  local_288.Bounds.Pad[4] = uStack_113;
  local_288.Bounds.Pad[5] = uStack_112;
  local_288.Bounds.Pad[6] = uStack_111;
  local_288.BrickDataReceipt.Object = (FBrickDataReceipt *)pFVar7;
  local_288.BrickDataReceipt.SharedReferenceCount.ReferenceController = pTVar8;
  local_288.PositionData = &pFVar7->Vertices;
  local_288.UVData = &pFVar7->BogusUVs;
  local_288.TangentXZData = &pFVar7->BogusTangents;
  local_288.ColorData = &pFVar7->BogusColors;
  SendBrickData_Internal(this,&local_288);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  pFVar2 = (param_6->AllocatorInstance).Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (param_7->AllocatorInstance).Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (param_8->AllocatorInstance).Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// UpdatePhysicsToRBChannels @ 146c73380

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UMRMeshComponent::UpdatePhysicsToRBChannels(UMRMeshComponent *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  pFVar4 = (this->BodyHolders).AllocatorInstance.Data;
  iVar2 = (this->BodyHolders).ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->BodyHolders).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UMRMeshBodyHolder>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    bVar3 = FBodyInstance::IsValidBodyInstance((FBodyInstance *)(*(longlong *)pFVar4 + 0x38));
    if (bVar3) {
      FBodyInstance::UpdatePhysicsFilterData((FBodyInstance *)(*(longlong *)pFVar4 + 0x38));
    }
    pFVar4 = pFVar4 + 8;
  }
  UPrimitiveComponent::UpdatePhysicsToRBChannels((UPrimitiveComponent *)this);
  return;
}

// execClear @ 146c73640

void __cdecl UMRMeshComponent::execClear(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x000146c7365f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)&param_1[0x21].field_0x20 + 0x20))();
  return;
}

// execForceNavMeshUpdate @ 146c73920

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UMRMeshComponent::execForceNavMeshUpdate(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (param_1[0x10].field_0x5 != '\0') {
    param_1[0x22].field_0x12 = 0;
    USceneComponent::UpdateNavigationData((USceneComponent *)param_1);
    return;
  }
  if (4 < (byte)LogMrMesh._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMrMesh);
    return;
  }
  return;
}

// execGetEnableMeshOcclusion @ 146c73970

void __cdecl
UMRMeshComponent::execGetEnableMeshOcclusion(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[0x22].field_0x16;
  return;
}

// execGetUseWireframe @ 146c739a0

void __cdecl UMRMeshComponent::execGetUseWireframe(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[0x22].field_0x17;
  return;
}

// execGetWireframeColor @ 146c739d0

void __cdecl UMRMeshComponent::execGetWireframeColor(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = *(undefined8 *)&param_1[0x23].field_0x18;
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[0x23].field_0x10;
  *(undefined8 *)((longlong)param_3 + 8) = uVar1;
  return;
}

// execIsConnected @ 146c73a00

void __cdecl UMRMeshComponent::execIsConnected(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)&param_1[0x21].field_0x20 + 8))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execRequestNavMeshUpdate @ 146c73af0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UMRMeshComponent::execRequestNavMeshUpdate(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (param_1[0x22].field_0x12 == '\x01') {
    if (param_1[0x10].field_0x5 != '\0') {
      param_1[0x22].field_0x12 = 0;
      USceneComponent::UpdateNavigationData((USceneComponent *)param_1);
      return;
    }
    if (4 < (byte)LogMrMesh._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMrMesh);
      return;
    }
  }
  return;
}

// execSetEnableMeshOcclusion @ 146c73b50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UMRMeshComponent::execSetEnableMeshOcclusion(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  FRenderCommandList *this;
  FCommandList *this_00;
  FRenderCommandTag *pFVar5;
  undefined ***pppuVar6;
  ulonglong uVar7;
  undefined1 auStack_c8 [32];
  int local_a8 [8];
  code *local_88 [2];
  undefined **local_78;
  UObject *pUStack_70;
  undefined1 local_68;
  undefined4 uStack_67;
  undefined2 uStack_63;
  undefined1 uStack_61;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  UObject *pUStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_a8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_a8);
  }
  local_68 = local_a8[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar2 = *(longlong *)&param_1[0x21].field_0x8;
  param_1[0x22].field_0x16 = local_68;
  if (lVar2 != 0) {
    uStack_67 = local_a8._17_4_;
    uStack_63 = local_a8[5]._1_2_;
    uStack_61 = local_a8[5]._3_1_;
    local_88[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UMRMeshComponent::SetEnableMeshOcclusion'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
    local_60 = (undefined ***)0x0;
    local_78 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UMRMeshComponent::SetEnableMeshOcclusion'::`5'::<lambda_1>,1,0>
                ::_vftable_;
    pUStack_70 = param_1;
    this = FRenderCommandList::GetInstanceTLS();
    if (this == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_UMRMeshComponent::SetEnableMeshOcclusion_::__l5::TSTR_FSetEnableMeshOcclusionLambda1078>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
    }
    else {
      this_00 = FRenderCommandList::GetRenderThread(this);
      local_38._1_4_ = uStack_67;
      local_38._0_1_ = local_68;
      local_38._5_2_ = uStack_63;
      local_38._7_1_ = uStack_61;
      local_58._0_8_ = local_88[0];
      local_30 = local_60;
      local_48 = local_78;
      pUStack_40 = pUStack_70;
      local_88[0] = (code *)0x0;
      local_28 = 2;
      pFVar5 = (FRenderCommandTag *)
               TRenderCommandTag<`UMRMeshComponent::SetEnableMeshOcclusion'::__l5::TSTR_FSetEnableMeshOcclusionLambda1078>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_00,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_58,pFVar5);
      uVar7 = (ulonglong)local_28;
      if (2 < uVar7) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar7] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_58._0_8_ != (code *)0x0) {
          pppuVar6 = (undefined ***)(local_58 + 0x10);
          if (local_30 != (undefined ***)0x0) {
            pppuVar6 = local_30;
          }
          (*(code *)(*pppuVar6)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar7])(local_58);
      }
    }
    if (local_88[0] != (code *)0x0) {
      pppuVar6 = &local_78;
      if (local_60 != (undefined ***)0x0) {
        pppuVar6 = local_60;
      }
      (*(code *)(*pppuVar6)[2])();
    }
  }
  return;
}

// execSetUseWireframe @ 146c73d40

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl UMRMeshComponent::execSetUseWireframe(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[0x22].field_0x17 = local_res8[0] != 0;
  UActorComponent::MarkRenderDynamicDataDirty((UActorComponent *)param_1);
  return;
}

// execSetWireframeColor @ 146c73de0

void __cdecl UMRMeshComponent::execSetWireframeColor(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FLinearColor *pFVar2;
  FLinearColor local_18;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pFVar2 = &local_18;
  if ((FLinearColor *)param_2->MostRecentPropertyAddress != (FLinearColor *)0x0) {
    pFVar2 = (FLinearColor *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetWireframeColor((UMRMeshComponent *)param_1,pFVar2);
  return;
}

// execSetWireframeMaterial @ 146c73e80

void __cdecl
UMRMeshComponent::execSetWireframeMaterial(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res8;
  
  local_res8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0xa90))(param_1,local_res8);
  return;
}

