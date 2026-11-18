// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 136

// StaticClass @ 14a200bf0

UClass * __cdecl UControlRigComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UControlRigComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ControlRig",L"ControlRigComponent",
               &Z_Registration_Info_UClass_UControlRigComponent.InnerSingleton,
               StaticRegisterNativesUControlRigComponent,0x720,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UControlRigComponent>,
               InternalVTableHelperCtorCaller<UControlRigComponent>,local_res8,
               UPrimitiveComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UControlRigComponent.InnerSingleton;
}

// UControlRigComponent @ 14a2225b0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UControlRigComponent * __thiscall
UControlRigComponent::UControlRigComponent(UControlRigComponent *this,FVTableHelper *param_1)

{
  UPrimitiveComponent::UPrimitiveComponent((UPrimitiveComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  (this->ControlRigClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  *(undefined8 *)&this->OnPreInitializeDelegate = 0;
  *(undefined8 *)&(this->OnPreInitializeDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnPreInitializeDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnPostInitializeDelegate = 0;
  *(undefined8 *)&(this->OnPostInitializeDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnPostInitializeDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnPreConstructionDelegate = 0;
  *(undefined8 *)&(this->OnPreConstructionDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnPreConstructionDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnPostConstructionDelegate = 0;
  *(undefined8 *)&(this->OnPostConstructionDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnPostConstructionDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnPreForwardsSolveDelegate = 0;
  *(undefined8 *)&(this->OnPreForwardsSolveDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnPreForwardsSolveDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnPostForwardsSolveDelegate = 0;
  *(undefined8 *)&(this->OnPostForwardsSolveDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnPostForwardsSolveDelegate).field_0x10 = 0;
  (this->UserDefinedElements).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UserDefinedElements).ArrayNum = 0;
  (this->UserDefinedElements).ArrayMax = 0;
  (this->MappedElements).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MappedElements).ArrayNum = 0;
  (this->MappedElements).ArrayMax = 0;
  (this->ControlRig).field0_0x0.DebugPtr = (UControlRig *)0x0;
  *(undefined8 *)&this->TempAttributeContainer = 0;
  *(undefined8 *)&(this->TempAttributeContainer).field_0x8 = 0;
  *(undefined8 *)&(this->TempAttributeContainer).field_0x10 = 0;
  *(undefined8 *)&(this->TempAttributeContainer).field_0x18 = 0;
  *(undefined8 *)&(this->TempAttributeContainer).field_0x20 = 0;
  *(undefined8 *)&(this->TempAttributeContainer).field_0x28 = 0;
  *(undefined8 *)&(this->TempAttributeContainer).field_0x30 = 0;
  *(undefined8 *)&(this->TempAttributeContainer).field_0x38 = 0;
  *(undefined8 *)&this->CachedSkeletalMeshComponentSettings = 0;
  *(undefined8 *)&(this->CachedSkeletalMeshComponentSettings).field_0x8 = 0;
  *(undefined8 *)&(this->CachedSkeletalMeshComponentSettings).field_0x20 = 0;
  *(undefined4 *)&(this->CachedSkeletalMeshComponentSettings).field_0x28 = 0;
  *(undefined4 *)&(this->CachedSkeletalMeshComponentSettings).field_0x2c = 0x80;
  *(undefined4 *)&(this->CachedSkeletalMeshComponentSettings).field_0x34 = 0;
  *(undefined4 *)&(this->CachedSkeletalMeshComponentSettings).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->CachedSkeletalMeshComponentSettings).field_0x40 = 0;
  *(undefined4 *)&(this->CachedSkeletalMeshComponentSettings).field_0x48 = 0;
  *(undefined8 *)&this->ControlRigCreatedEvent = 0;
  *(undefined8 *)&(this->ControlRigCreatedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->ControlRigCreatedEvent).field_0x10 = 0;
  (this->InputElementIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InputElementIndices).ArrayNum = 0;
  (this->InputElementIndices).ArrayMax = 0;
  (this->InputTransforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InputTransforms).ArrayNum = 0;
  (this->InputTransforms).ArrayMax = 0;
  (this->LastInputTransforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LastInputTransforms).ArrayNum = 0;
  (this->LastInputTransforms).ArrayMax = 0;
  (this->ObjectBinding).Object = (IControlRigObjectBinding *)0x0;
  (this->ObjectBinding).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&(this->ControlRigCreatedEvent).field_0x18 = 2;
  return this;
}

// UControlRigComponent @ 14a2227a0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UControlRigComponent * __thiscall
UControlRigComponent::UControlRigComponent(UControlRigComponent *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  
  UPrimitiveComponent::UPrimitiveComponent((UPrimitiveComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  (this->ControlRigClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  *(undefined8 *)&this->OnPreInitializeDelegate = 0;
  *(undefined8 *)&(this->OnPreInitializeDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnPreInitializeDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnPostInitializeDelegate = 0;
  *(undefined8 *)&(this->OnPostInitializeDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnPostInitializeDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnPreConstructionDelegate = 0;
  *(undefined8 *)&(this->OnPreConstructionDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnPreConstructionDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnPostConstructionDelegate = 0;
  *(undefined8 *)&(this->OnPostConstructionDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnPostConstructionDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnPreForwardsSolveDelegate = 0;
  *(undefined8 *)&(this->OnPreForwardsSolveDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnPreForwardsSolveDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnPostForwardsSolveDelegate = 0;
  *(undefined8 *)&(this->OnPostForwardsSolveDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnPostForwardsSolveDelegate).field_0x10 = 0;
  (this->UserDefinedElements).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UserDefinedElements).ArrayNum = 0;
  (this->UserDefinedElements).ArrayMax = 0;
  (this->MappedElements).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MappedElements).ArrayNum = 0;
  (this->MappedElements).ArrayMax = 0;
  *(undefined8 *)&this->TempAttributeContainer = 0;
  *(undefined8 *)&(this->TempAttributeContainer).field_0x8 = 0;
  *(undefined8 *)&(this->TempAttributeContainer).field_0x10 = 0;
  *(undefined8 *)&(this->TempAttributeContainer).field_0x18 = 0;
  *(undefined8 *)&(this->TempAttributeContainer).field_0x20 = 0;
  *(undefined8 *)&(this->TempAttributeContainer).field_0x28 = 0;
  *(undefined8 *)&(this->TempAttributeContainer).field_0x30 = 0;
  *(undefined8 *)&(this->TempAttributeContainer).field_0x38 = 0;
  *(undefined8 *)&this->CachedSkeletalMeshComponentSettings = 0;
  *(undefined8 *)&(this->CachedSkeletalMeshComponentSettings).field_0x8 = 0;
  *(undefined8 *)&(this->CachedSkeletalMeshComponentSettings).field_0x20 = 0;
  *(undefined4 *)&(this->CachedSkeletalMeshComponentSettings).field_0x28 = 0;
  *(undefined4 *)&(this->CachedSkeletalMeshComponentSettings).field_0x2c = 0x80;
  *(undefined4 *)&(this->CachedSkeletalMeshComponentSettings).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CachedSkeletalMeshComponentSettings).field_0x34 = 0;
  *(undefined8 *)&(this->CachedSkeletalMeshComponentSettings).field_0x40 = 0;
  *(undefined4 *)&(this->CachedSkeletalMeshComponentSettings).field_0x48 = 0;
  *(undefined8 *)&this->ControlRigCreatedEvent = 0;
  *(undefined8 *)&(this->ControlRigCreatedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->ControlRigCreatedEvent).field_0x10 = 0;
  *(undefined8 *)&(this->ControlRigCreatedEvent).field_0x18 = 2;
  (this->InputElementIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InputElementIndices).ArrayNum = 0;
  (this->InputElementIndices).ArrayMax = 0;
  (this->InputTransforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InputTransforms).ArrayNum = 0;
  (this->InputTransforms).ArrayMax = 0;
  (this->LastInputTransforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LastInputTransforms).ArrayNum = 0;
  (this->LastInputTransforms).ArrayMax = 0;
  (this->ObjectBinding).Object = (IControlRigObjectBinding *)0x0;
  (this->ObjectBinding).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 7;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 1);
  *pbVar1 = *pbVar1 | 0x80;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 8;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 3);
  *pbVar1 = *pbVar1 | 1;
  *(undefined1 *)&this->_padding_ = 0;
  (this->ControlRig).field0_0x0.DebugPtr = (UControlRig *)0x0;
  this->bResetTransformBeforeTick = true;
  this->bResetInitialsBeforeConstruction = true;
  this->bUpdateRigOnTick = true;
  this->bUpdateInEditor = true;
  this->bDrawBones = true;
  this->bShowDebugDrawing = false;
  this->bIsInsideInitializeBracket = false;
  this->bNeedsEvaluation = true;
  this->bEnableLazyEvaluation = false;
  this->LazyEvaluationPositionThreshold = 0.1;
  this->LazyEvaluationRotationThreshold = 0.5;
  this->LazyEvaluationScaleThreshold = 0.01;
  this->bNeedToInitialize = false;
  return this;
}

// ~UControlRigComponent @ 14a2269d0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UControlRigComponent::~UControlRigComponent(UControlRigComponent *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ObjectBinding).SharedReferenceCount.ReferenceController);
  pFVar1 = (this->LastInputTransforms).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->InputTransforms).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->InputElementIndices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->ControlRigCreatedEvent).field_0x8,
             *(int *)&(this->ControlRigCreatedEvent).field_0x10);
  pvVar2 = *(void **)&(this->ControlRigCreatedEvent).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ControlRigCreatedEvent);
  *(undefined4 *)&(this->CachedSkeletalMeshComponentSettings).field_0x48 = 0;
  pvVar2 = *(void **)&(this->CachedSkeletalMeshComponentSettings).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<USkeletalMeshComponent_*,UControlRigComponent::FCachedSkeletalMeshComponentSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<USkeletalMeshComponent_*,UControlRigComponent::FCachedSkeletalMeshComponentSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<USkeletalMeshComponent_*,UControlRigComponent::FCachedSkeletalMeshComponentSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedSkeletalMeshComponentSettings);
  UE::Anim::TAttributeContainer<FMeshPoseBoneIndex,TSizedDefaultAllocator<32>_>::
  ~TAttributeContainer<FMeshPoseBoneIndex,TSizedDefaultAllocator<32>_>
            ((TAttributeContainer<FMeshPoseBoneIndex,TSizedDefaultAllocator<32>_> *)
             &this->TempAttributeContainer);
  DestructItems<FControlRigComponentMappedElement,int>
            ((FControlRigComponentMappedElement *)(this->MappedElements).AllocatorInstance.Data,
             (this->MappedElements).ArrayNum);
  pFVar1 = (this->MappedElements).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FControlRigComponentMappedElement,int>
            ((FControlRigComponentMappedElement *)(this->UserDefinedElements).AllocatorInstance.Data
             ,(this->UserDefinedElements).ArrayNum);
  pFVar1 = (this->UserDefinedElements).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->OnPostForwardsSolveDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnPostForwardsSolveDelegate);
  pvVar2 = *(void **)&(this->OnPreForwardsSolveDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnPreForwardsSolveDelegate);
  pvVar2 = *(void **)&(this->OnPostConstructionDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnPostConstructionDelegate);
  pvVar2 = *(void **)&(this->OnPreConstructionDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnPreConstructionDelegate);
  pvVar2 = *(void **)&(this->OnPostInitializeDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnPostInitializeDelegate);
  pvVar2 = *(void **)&(this->OnPreInitializeDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnPreInitializeDelegate);
  UPrimitiveComponent::~UPrimitiveComponent((UPrimitiveComponent *)this);
  return;
}

// operator() @ 14a22e2e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
`UControlRigComponent::CalcBounds'::__l17::<lambda_1>::operator()
          (void *this,FRigTransformElement *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  TTransform<double> *pTVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined4 uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auStack_f8 [32];
  TVector<double>_u_0 local_d8;
  TTransform<double> local_b8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_f8;
  pTVar8 = URigHierarchy::GetTransform
                     (*(URigHierarchy **)((longlong)this + 0x70),&local_b8,param_1,CurrentGlobal);
  auVar16 = *(undefined1 (*) [16])((longlong)this + 0x20);
  auVar9 = *(undefined1 (*) [16])((longlong)this + 0x10);
  dVar3 = *(double *)((longlong)this + 0x50) * (pTVar8->Translation).XY.m128d_f64[0];
  dVar4 = *(double *)((longlong)this + 0x58) * (pTVar8->Translation).XY.m128d_f64[1];
  uVar17 = (undefined4)((ulonglong)dVar4 >> 0x20);
  dVar5 = (pTVar8->Translation).ZW.m128d_f64[0] * *(double *)((longlong)this + 0x60);
  dVar6 = *(double *)((longlong)this + 0x68) * 0.0;
  dVar7 = *(double *)((longlong)this + 0x28);
  auVar18._8_4_ = SUB84(dVar4,0);
  auVar18._0_8_ = dVar3;
  auVar18._12_4_ = uVar17;
  dVar2 = auVar16._0_8_;
  auVar11 = blendpd(auVar9,auVar16,2);
  auVar19._0_8_ = auVar18._8_8_ * auVar9._0_8_ - auVar9._8_8_ * dVar3;
  auVar19._8_8_ = dVar5 * auVar9._8_8_ - dVar2 * dVar4;
  auVar20._8_4_ = SUB84(dVar4,0);
  auVar20._0_8_ = dVar3;
  auVar20._12_4_ = uVar17;
  auVar9._8_4_ = SUB84(dVar6,0);
  auVar9._0_8_ = dVar5;
  auVar9._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  auVar9 = blendpd(auVar20,auVar9,2);
  auVar10._0_8_ = auVar9._0_8_ * dVar2 - auVar11._0_8_ * dVar5;
  auVar10._8_8_ = auVar9._8_8_ * auVar16._8_8_ - auVar11._8_8_ * dVar6;
  auVar9 = *(undefined1 (*) [16])((longlong)this + 0x10);
  auVar20 = blendpd(auVar19,auVar10,2);
  dVar6 = auVar19._8_8_ + auVar19._8_8_;
  dVar1 = auVar10._0_8_ + auVar10._0_8_;
  uVar17 = (undefined4)((ulonglong)dVar1 >> 0x20);
  auVar21._0_8_ = auVar20._0_8_ + auVar20._0_8_;
  auVar21._8_8_ = auVar20._8_8_ + auVar20._8_8_;
  auVar14._8_4_ = SUB84(dVar1,0);
  auVar14._0_8_ = dVar6;
  auVar14._12_4_ = uVar17;
  auVar12._8_4_ = SUB84(dVar1,0);
  auVar12._0_8_ = dVar6;
  auVar12._12_4_ = uVar17;
  auVar20 = blendpd(auVar12,auVar21,2);
  auVar15._0_8_ = auVar14._8_8_ * auVar9._0_8_ - auVar9._8_8_ * dVar6;
  auVar15._8_8_ = auVar21._0_8_ * auVar9._8_8_ - dVar2 * dVar1;
  auVar11._8_4_ = SUB84(auVar15._8_8_,0);
  auVar11._0_8_ = auVar15._0_8_;
  auVar11._12_4_ = (int)((ulonglong)auVar15._8_8_ >> 0x20);
  auVar9 = blendpd(auVar9,auVar16,2);
  auVar13._0_8_ = auVar20._0_8_ * dVar2 - auVar9._0_8_ * auVar21._0_8_;
  auVar13._8_8_ = auVar20._8_8_ * auVar16._8_8_ - auVar9._8_8_ * auVar21._8_8_;
  auVar16 = blendpd(auVar15,auVar13,2);
  dVar2 = dVar1 * dVar7 + dVar4 + auVar13._0_8_ + *(double *)((longlong)this + 0x38);
  local_d8._s_0.Z =
       auVar21._0_8_ * dVar7 + dVar5 + auVar16._0_8_ + *(double *)((longlong)this + 0x40);
  local_d8._8_4_ = SUB84(dVar2,0);
  local_d8._0_8_ = dVar6 * dVar7 + dVar3 + auVar11._8_8_ + *(double *)((longlong)this + 0x30);
  local_d8._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  UE::Math::TBox<double>::operator+=(*(TBox<double> **)this,(TVector<double> *)&local_d8._s_0);
  return true;
}

// operator() @ 14a22e470

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
`UControlRigComponent::AddMappedSkeletalMesh'::__l20::<lambda_1>::operator()
          (void *this,FRigBoneElement *param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  undefined8 local_18;
  undefined8 uStack_10;
  
  iVar7 = USkinnedMeshComponent::GetBoneIndex
                    (*(USkinnedMeshComponent **)this,*(FName *)((longlong)&param_1->_padding_ + 4));
  if (iVar7 != -1) {
    local_18 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
    pFVar2 = *(ForAnyElementType **)((longlong)this + 8);
    uStack_10 = local_18;
    if ((pFVar2->Data <= (FScriptContainerElement *)&local_18) &&
       ((FScriptContainerElement *)&local_18 <
        pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 0x10)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
    }
    iVar7 = *(int *)&pFVar2[1].Data;
    piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x410,pFVar2,piVar1);
    }
    *(int *)&pFVar2[1].Data = iVar7 + 1;
    pFVar3 = pFVar2->Data;
    *(undefined8 *)(pFVar3 + (longlong)iVar7 * 0x10) = local_18;
    *(undefined8 *)(pFVar3 + (longlong)iVar7 * 0x10 + 8) = uStack_10;
  }
  return true;
}

// operator() @ 14a2300d0

bool __thiscall
`UControlRigComponent::AddMappedSkeletalMesh'::__l31::<lambda_2>::operator()
          (void *this,FRigCurveElement *param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_18 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  pFVar2 = *(ForAnyElementType **)((longlong)this + 8);
  uStack_10 = local_18;
  if ((pFVar2->Data <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 <
      pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 0x10)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  iVar7 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x410,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar7 + 1;
  pFVar3 = pFVar2->Data;
  *(undefined8 *)(pFVar3 + (longlong)iVar7 * 0x10) = local_18;
  *(undefined8 *)(pFVar3 + (longlong)iVar7 * 0x10 + 8) = uStack_10;
  return true;
}

// AddMappedCompleteSkeletalMesh @ 14a23a630

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UControlRigComponent::AddMappedCompleteSkeletalMesh
          (UControlRigComponent *this,USkeletalMeshComponent *param_1,
          EControlRigComponentMapDirection param_2)

{
  TArray<FControlRigComponentMappedCurve,TSizedDefaultAllocator<32>_> local_28;
  TArray<FControlRigComponentMappedBone,TSizedDefaultAllocator<32>_> local_18;
  
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  AddMappedSkeletalMesh(this,param_1,&local_18,&local_28,param_2);
  return;
}

// AddMappedComponents @ 14a23a670

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UControlRigComponent::AddMappedComponents
          (UControlRigComponent *this,
          TArray<FControlRigComponentMappedComponent,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  ForAnyElementType FVar5;
  bool bVar6;
  int iVar7;
  UControlRig *pUVar8;
  FName FVar9;
  FScriptContainerElement *pFVar10;
  undefined1 auStackY_218 [32];
  undefined1 local_1c8 [8];
  ForAnyElementType local_1c0;
  undefined8 local_1b8;
  TArray<FControlRigComponentMappedElement,TSizedDefaultAllocator<32>_> local_1b0;
  UObject *local_1a0;
  FString local_198;
  FString local_188;
  FString local_178;
  FString local_168;
  undefined1 local_158 [32];
  undefined1 local_138 [84];
  FScriptContainerElement local_e4;
  FName local_e0;
  FScriptContainerElement local_d8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_218;
  pUVar8 = SetupControlRigIfRequired(this);
  if (pUVar8 != (UControlRig *)0x0) {
    if (0 < pUVar8->PreConstructionBracket) {
      ::FString::PrintfImpl
                (&local_198,
                 L"%s cannot be called during the PreConstructionEvent - use ConstructionScript instead."
                );
      local_188.Data.AllocatorInstance.Data = local_198.Data.AllocatorInstance.Data;
      if (2 < (byte)LogControlRig._0_1_) {
        UObjectBaseUtility::GetPathName
                  ((UObjectBaseUtility *)this,(FString *)(local_158 + 8),(UObject *)0x0);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogControlRig);
        local_188.Data.AllocatorInstance.Data = local_198.Data.AllocatorInstance.Data;
        if ((void *)local_158._8_8_ != (void *)0x0) {
          FMemory::Free((void *)local_158._8_8_);
          local_188.Data.AllocatorInstance.Data = local_198.Data.AllocatorInstance.Data;
        }
      }
      goto LAB_14a23aa16;
    }
    if (0 < pUVar8->PostConstructionBracket) {
      ::FString::PrintfImpl
                (&local_188,
                 L"%s cannot be called during the PostConstructionEvent - use ConstructionScript instead."
                );
      ReportError(this,&local_188);
      goto LAB_14a23aa16;
    }
    if (0 < *(int *)((longlong)&pUVar8->_padding_ + 4)) {
      ::FString::PrintfImpl
                (&local_178,
                 L"%s cannot be called during the InitEvent - use ConstructionScript instead.");
      ReportError(this,&local_178);
      local_188.Data.AllocatorInstance.Data = local_178.Data.AllocatorInstance.Data;
      goto LAB_14a23aa16;
    }
    if (0 < (int)pUVar8->_padding_) {
      ::FString::PrintfImpl
                (&local_168,
                 L"%s cannot be called during the ForwardsSolveEvent - use ConstructionScript instead."
                );
      ReportError(this,&local_168);
      local_188.Data.AllocatorInstance.Data = local_168.Data.AllocatorInstance.Data;
      goto LAB_14a23aa16;
    }
  }
  pFVar10 = (param_1->AllocatorInstance).Data;
  iVar1 = param_1->ArrayNum;
  local_1c0.Data = (FScriptContainerElement *)0x0;
  local_1b8 = 0;
  pFVar3 = pFVar10 + (longlong)iVar1 * 0x18;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      local_1c8[0] = 0;
      `TCheckedPointerIterator<FControlRigComponentMappedComponent,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_1c8);
    }
    FVar5.Data = local_1c0.Data;
    if (pFVar10 == pFVar3) break;
    lVar2 = *(longlong *)pFVar10;
    if ((lVar2 != 0) && (*(longlong *)(pFVar10 + 8) != 0)) {
      FControlRigComponentMappedElement::FControlRigComponentMappedElement
                ((FControlRigComponentMappedElement *)local_138);
      local_1a0 = *(UObject **)(lVar2 + 0xa8);
      if (local_1a0 == (UObject *)this->_padding_) {
        local_1a0 = (UObject *)0x0;
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_1a0 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_1a0);
      }
      FSoftObjectPtr::operator=((FSoftObjectPtr *)(local_138 + 0x20),(FObjectPtr)&local_1a0);
      FVar9 = GetComponentNameWithinActor((UActorComponent *)local_158);
      local_138._0_8_ = *(undefined8 *)FVar9;
      local_e0 = *(FName *)(pFVar10 + 8);
      local_e4 = pFVar10[0x10];
      local_d8 = pFVar10[0x11];
      if (((local_1c0.Data <= (FControlRigComponentMappedElement *)local_138) &&
          ((FScriptContainerElement *)local_138 < local_1c0.Data + (longlong)local_1b8._4_4_ * 0xf0)
          ) && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar7 = (int)local_1b8;
      if ((int)local_1b8 == local_1b8._4_4_) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x10f0,&local_1c0,(int *)((longlong)&local_1b8 + 4));
      }
      local_1b8 = CONCAT44(local_1b8._4_4_,iVar7 + 1);
      FControlRigComponentMappedElement::FControlRigComponentMappedElement
                ((FControlRigComponentMappedElement *)(local_1c0.Data + (longlong)iVar7 * 0xf0),
                 (FControlRigComponentMappedElement *)local_138);
      if ((void *)local_138._56_8_ != (void *)0x0) {
        FMemory::Free((void *)local_138._56_8_);
      }
      if ((void *)local_138._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_138._8_8_);
      }
    }
    pFVar10 = pFVar10 + 0x18;
  }
  iVar1 = (int)local_1b8;
  local_1b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1b0.ArrayNum = (int)local_1b8;
  if ((int)local_1b8 == 0) {
    local_1b0.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xf0,0x10,(int)local_1b8,0,&local_1b0.AllocatorInstance,(int)local_1b8,
               &local_1b0.ArrayMax);
    ConstructItems<FControlRigComponentMappedElement,FControlRigComponentMappedElement,int>
              (local_1b0.AllocatorInstance.Data,(FControlRigComponentMappedElement *)FVar5.Data,
               iVar1);
  }
  AddMappedElements(this,&local_1b0);
  DestructItems<FControlRigComponentMappedElement,int>
            ((FControlRigComponentMappedElement *)local_1c0.Data,(int)local_1b8);
  local_188.Data.AllocatorInstance.Data = local_1c0.Data;
LAB_14a23aa16:
  if ((FControlRigComponentMappedElement *)local_188.Data.AllocatorInstance.Data !=
      (FControlRigComponentMappedElement *)0x0) {
    FMemory::Free(local_188.Data.AllocatorInstance.Data);
  }
  pFVar3 = (param_1->AllocatorInstance).Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return;
}

// AddMappedElements @ 14a23aa50

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UControlRigComponent::AddMappedElements
          (UControlRigComponent *this,
          TArray<FControlRigComponentMappedElement,TSizedDefaultAllocator<32>_> *param_1)

{
  TArray<FControlRigComponentMappedElement,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UControlRig *pUVar7;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  pUVar7 = SetupControlRigIfRequired(this);
  if (pUVar7 == (UControlRig *)0x0) {
LAB_14a23abb9:
    pTVar1 = &this->MappedElements;
    if ((pTVar1 == param_1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)this != (void*)&Source",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x96e,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar2 = param_1->ArrayNum;
    if (iVar2 != 0) {
      iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0xf0,0x10,iVar2,&pTVar1->AllocatorInstance,&(this->MappedElements).ArrayNum
                         ,&(this->MappedElements).ArrayMax);
      ConstructItems<FControlRigComponentMappedElement,FControlRigComponentMappedElement,int>
                ((pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 0xf0,
                 (FControlRigComponentMappedElement *)(param_1->AllocatorInstance).Data,iVar2);
    }
    ValidateMappingData(this);
    Initialize(this);
  }
  else {
    if (pUVar7->PreConstructionBracket < 1) {
      if (pUVar7->PostConstructionBracket < 1) {
        if (*(int *)((longlong)&pUVar7->_padding_ + 4) < 1) {
          if ((int)pUVar7->_padding_ < 1) goto LAB_14a23abb9;
          ::FString::PrintfImpl
                    (&local_28,
                     L"%s cannot be called during the ForwardsSolveEvent - use ConstructionScript instead."
                    );
          ReportError(this,&local_28);
          local_48.Data.AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
        }
        else {
          ::FString::PrintfImpl
                    (&local_38,
                     L"%s cannot be called during the InitEvent - use ConstructionScript instead.");
          ReportError(this,&local_38);
          local_48.Data.AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
        }
      }
      else {
        ::FString::PrintfImpl
                  (&local_48,
                   L"%s cannot be called during the PostConstructionEvent - use ConstructionScript instead."
                  );
        ReportError(this,&local_48);
      }
    }
    else {
      ::FString::PrintfImpl
                (&local_58,
                 L"%s cannot be called during the PreConstructionEvent - use ConstructionScript instead."
                );
      local_48.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
      if (2 < (byte)LogControlRig._0_1_) {
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_18,(UObject *)0x0);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogControlRig);
        local_48.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
          local_48.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
        }
      }
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  DestructItems<FControlRigComponentMappedElement,int>
            ((FControlRigComponentMappedElement *)(param_1->AllocatorInstance).Data,
             param_1->ArrayNum);
  pFVar3 = (param_1->AllocatorInstance).Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return;
}

// AddMappedSkeletalMesh @ 14a23ac80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UControlRigComponent::AddMappedSkeletalMesh
          (UControlRigComponent *this,USkeletalMeshComponent *param_1,
          TArray<FControlRigComponentMappedBone,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FControlRigComponentMappedCurve,TSizedDefaultAllocator<32>_> *param_3,
          EControlRigComponentMapDirection param_4)

{
  FWeakObjectPtr *pFVar1;
  FScriptContainerElement *pFVar2;
  FWeakObjectPtr *pFVar3;
  code *pcVar4;
  ForAnyElementType FVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  UControlRig *pUVar9;
  TArray<FSkeletalMeshToMap,TSizedDefaultAllocator<32>_> *pTVar10;
  USkeletalMesh *pUVar11;
  FName FVar12;
  ForAnyElementType FVar13;
  FName *pFVar14;
  longlong lVar15;
  undefined1 auStackY_418 [32];
  undefined1 local_3c8;
  undefined1 local_3c7 [7];
  ForAnyElementType local_3c0;
  undefined8 local_3b8;
  FWeakObjectPtr local_3b0;
  TArray<FControlRigComponentMappedBone,TSizedDefaultAllocator<32>_> local_3a8;
  TArray<FControlRigComponentMappedCurve,TSizedDefaultAllocator<32>_> local_398;
  FWeakObjectPtr local_388;
  ForAnyElementType local_380;
  int local_378;
  int local_374;
  ForAnyElementType local_370;
  int local_368;
  int local_364;
  TArray<FControlRigComponentMappedElement,TSizedDefaultAllocator<32>_> local_360;
  TArray<FControlRigComponentMappedBone,TSizedDefaultAllocator<32>_> *local_350;
  TArray<FControlRigComponentMappedCurve,TSizedDefaultAllocator<32>_> *local_348;
  USkeletalMeshComponent *local_340;
  UControlRigComponent *local_338;
  UObject *local_330;
  UObject *local_328;
  FString local_320;
  FString local_310;
  FString local_300;
  FString local_2f0;
  USkeletalMeshComponent *local_2e0;
  ForAnyElementType *local_2d8;
  code *local_2d0;
  USkeletalMeshComponent **local_2c8;
  FString local_2c0;
  longlong local_2b0;
  ForAnyElementType *local_2a8;
  code *local_2a0;
  longlong *local_298;
  FString local_290;
  undefined1 local_280 [16];
  FString local_270;
  FString local_260;
  FString local_250;
  undefined1 local_238 [76];
  FName local_1ec;
  ERigElementType local_1e4;
  FName local_1e0;
  EControlRigComponentMapDirection local_1d8;
  undefined1 local_148 [76];
  FName local_fc;
  ERigElementType local_f4;
  FName local_f0;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_418;
  local_350 = param_2;
  local_348 = param_3;
  if (param_1 == (USkeletalMeshComponent *)0x0) {
    pFVar2 = (param_2->AllocatorInstance).Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar2 = (param_3->AllocatorInstance).Data;
    if (pFVar2 == (FScriptContainerElement *)0x0) {
      return;
    }
    FMemory::Free(pFVar2);
    return;
  }
  pUVar9 = SetupControlRigIfRequired(this);
  if (pUVar9 == (UControlRig *)0x0) {
LAB_14a23ae52:
    pUVar9 = SetupControlRigIfRequired(this);
    if (pUVar9 == (UControlRig *)0x0) {
      local_3b0.ObjectIndex = 0;
      local_3b0.ObjectSerialNumber = 0;
      local_3a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_3a8.ArrayNum = 0;
      local_3a8.ArrayMax = 0;
      local_398.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_398.ArrayNum = 0;
      local_398.ArrayMax = 0;
      local_340 = param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      FWeakObjectPtr::operator=(&local_3b0,(FObjectPtr)&local_340);
      if (&local_3a8 != param_2) {
        iVar7 = param_2->ArrayNum;
        pFVar2 = (param_2->AllocatorInstance).Data;
        local_3a8.ArrayNum = iVar7;
        if ((iVar7 == 0) && (local_3a8.ArrayMax == 0)) {
          local_3a8.ArrayNum = 0;
          local_3a8.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,4,iVar7,local_3a8.ArrayMax,&local_3a8.AllocatorInstance,iVar7,
                     &local_3a8.ArrayMax);
          if (iVar7 != 0) {
            memcpy(local_3a8.AllocatorInstance.Data,pFVar2,(longlong)iVar7 << 4);
          }
        }
      }
      if (&local_398 != param_3) {
        iVar7 = param_3->ArrayNum;
        pFVar2 = (param_3->AllocatorInstance).Data;
        local_398.ArrayNum = iVar7;
        if ((iVar7 == 0) && (local_398.ArrayMax == 0)) {
          local_398.ArrayNum = 0;
          local_398.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,4,iVar7,local_398.ArrayMax,&local_398.AllocatorInstance,iVar7,
                     &local_398.ArrayMax);
          if (iVar7 != 0) {
            memcpy(local_398.AllocatorInstance.Data,pFVar2,(longlong)iVar7 << 4);
          }
        }
      }
      EnterCriticalSection((LPCRITICAL_SECTION)&gPendingSkeletalMeshesLock);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UControlRigComponent *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      local_388.ObjectIndex = 0;
      local_388.ObjectSerialNumber = 0;
      local_338 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UControlRigComponent *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=(&local_388,(FObjectPtr)&local_338);
      pTVar10 = TMapBase<TWeakObjectPtr<UControlRigComponent,FWeakObjectPtr>,TArray<FSkeletalMeshToMap,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UControlRigComponent,FWeakObjectPtr>,TArray<FSkeletalMeshToMap,TSizedDefaultAllocator<32>_>,0>_>
                ::FindOrAddImpl<TWeakObjectPtr<UControlRigComponent,FWeakObjectPtr>_>
                          ((TMapBase<TWeakObjectPtr<UControlRigComponent,FWeakObjectPtr>,TArray<FSkeletalMeshToMap,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UControlRigComponent,FWeakObjectPtr>,TArray<FSkeletalMeshToMap,TSizedDefaultAllocator<32>_>,0>_>
                            *)&gPendingSkeletalMeshes,
                           local_388.ObjectSerialNumber ^ local_388.ObjectIndex,
                           (TWeakObjectPtr<UControlRigComponent,FWeakObjectPtr> *)&local_388);
      pFVar3 = (FWeakObjectPtr *)(pTVar10->AllocatorInstance).Data;
      if (((pFVar3 <= &local_3b0) && (&local_3b0 < pFVar3 + (longlong)pTVar10->ArrayMax * 5)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar7 = pTVar10->ArrayNum;
      if (iVar7 == pTVar10->ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x828,&pTVar10->AllocatorInstance,&pTVar10->ArrayMax);
      }
      FVar13.Data = local_3a8.AllocatorInstance.Data;
      pTVar10->ArrayNum = iVar7 + 1;
      pFVar1 = (FWeakObjectPtr *)((pTVar10->AllocatorInstance).Data + (longlong)iVar7 * 0x28);
      *pFVar1 = local_3b0;
      pFVar3 = pFVar1 + 1;
      pFVar3->ObjectIndex = 0;
      pFVar3->ObjectSerialNumber = 0;
      lVar15 = (longlong)local_3a8.ArrayNum;
      pFVar1[2].ObjectIndex = local_3a8.ArrayNum;
      if (local_3a8.ArrayNum == 0) {
        pFVar1[2].ObjectSerialNumber = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,local_3a8.ArrayNum,0,(ForAnyElementType *)pFVar3,local_3a8.ArrayNum,
                   &pFVar1[2].ObjectSerialNumber);
        memcpy((void *)*pFVar3,FVar13.Data,lVar15 << 4);
      }
      FVar13.Data = local_398.AllocatorInstance.Data;
      pFVar3 = pFVar1 + 3;
      pFVar3->ObjectIndex = 0;
      pFVar3->ObjectSerialNumber = 0;
      lVar15 = (longlong)local_398.ArrayNum;
      pFVar1[4].ObjectIndex = local_398.ArrayNum;
      if (local_398.ArrayNum == 0) {
        pFVar1[4].ObjectSerialNumber = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,local_398.ArrayNum,0,(ForAnyElementType *)pFVar3,local_398.ArrayNum,
                   &pFVar1[4].ObjectSerialNumber);
        memcpy((void *)*pFVar3,FVar13.Data,lVar15 << 4);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)&gPendingSkeletalMeshesLock);
      FVar13.Data = local_3a8.AllocatorInstance.Data;
      if (local_398.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_398.AllocatorInstance.Data);
        FVar13.Data = local_3a8.AllocatorInstance.Data;
      }
    }
    else {
      local_368 = param_2->ArrayNum;
      lVar15 = (longlong)local_368;
      pFVar2 = (param_2->AllocatorInstance).Data;
      local_3c0.Data = (FScriptContainerElement *)0x0;
      local_3b8 = 0;
      local_370.Data = (FScriptContainerElement *)0x0;
      if (local_368 == 0) {
        local_364 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,local_368,0,&local_370,local_368,&local_364);
        memcpy(local_370.Data,pFVar2,lVar15 << 4);
      }
      if ((local_368 == 0) &&
         (pUVar11 = USkeletalMeshComponent::GetSkeletalMeshAsset(param_1),
         pUVar11 != (USkeletalMesh *)0x0)) {
        lVar15 = (**(code **)(pUVar11->_padding_ + 0x400))(pUVar11);
        if (lVar15 == 0) {
          UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar11,&local_260,(UObject *)0x0);
          ::FString::PrintfImpl(&local_2c0,L"%s does not have a Skeleton set.");
          ReportError(this,&local_2c0);
          if (local_2c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2c0.Data.AllocatorInstance.Data);
          }
          if (local_260.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_260.Data.AllocatorInstance.Data);
          }
        }
        else {
          local_2d8 = &local_370;
          local_2c8 = &local_2e0;
          local_2d0 = UE::Core::Private::Function::
                      TFunctionRefCaller<`UControlRigComponent::AddMappedSkeletalMesh'::__l20::<lambda_1>,bool,FRigBoneElement_*>
                      ::Call;
          local_2e0 = param_1;
          URigHierarchy::ForEach<FRigBoneElement>
                    ((pUVar9->DynamicHierarchy).field0_0x0.DebugPtr,
                     (TFunctionRef<bool___cdecl(FRigBoneElement_*)> *)&local_2d0);
        }
      }
      local_378 = param_3->ArrayNum;
      lVar15 = (longlong)local_378;
      pFVar2 = (param_3->AllocatorInstance).Data;
      local_380.Data = (FScriptContainerElement *)0x0;
      if (local_378 == 0) {
        local_374 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,local_378,0,&local_380,local_378,&local_374);
        memcpy(local_380.Data,pFVar2,lVar15 << 4);
      }
      if ((local_378 == 0) &&
         (pUVar11 = USkeletalMeshComponent::GetSkeletalMeshAsset(param_1),
         pUVar11 != (USkeletalMesh *)0x0)) {
        lVar15 = (**(code **)(pUVar11->_padding_ + 0x408))(pUVar11);
        if (lVar15 == 0) {
          UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar11,&local_250,(UObject *)0x0);
          ::FString::PrintfImpl(&local_290,L"%s does not have a Skeleton set.");
          ReportError(this,&local_290);
          if (local_290.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_290.Data.AllocatorInstance.Data);
          }
          if (local_250.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_250.Data.AllocatorInstance.Data);
          }
        }
        else {
          local_2a8 = &local_380;
          local_298 = &local_2b0;
          local_2a0 = UE::Core::Private::Function::
                      TFunctionRefCaller<`UControlRigComponent::AddMappedSkeletalMesh'::__l31::<lambda_2>,bool,FRigCurveElement_*>
                      ::Call;
          local_2b0 = lVar15;
          URigHierarchy::ForEach<FRigCurveElement>
                    ((pUVar9->DynamicHierarchy).field0_0x0.DebugPtr,
                     (TFunctionRef<bool___cdecl(FRigCurveElement_*)> *)&local_2a0);
        }
      }
      iVar7 = local_368;
      pFVar14 = (FName *)(local_370.Data + (longlong)local_368 * 0x10);
      FVar13.Data = local_370.Data;
      while( true ) {
        if (local_368 != iVar7) {
          local_3c8 = 0;
          `TCheckedPointerIterator<FControlRigComponentMappedBone,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_3c8);
        }
        iVar8 = local_378;
        if ((FName *)FVar13.Data == pFVar14) break;
        if ((*(FName *)FVar13.Data != (FName)0x0) &&
           (*(FName *)((longlong)FVar13.Data + 8) != (FName)0x0)) {
          FControlRigComponentMappedElement::FControlRigComponentMappedElement
                    ((FControlRigComponentMappedElement *)local_238);
          local_330 = (UObject *)param_1->_padding_;
          if ((UObject *)param_1->_padding_ == (UObject *)this->_padding_) {
            local_330 = (UObject *)0x0;
          }
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_330 != (UObject *)0x0))
          {
            UE::GC::MarkAsReachable(local_330);
          }
          FSoftObjectPtr::operator=((FSoftObjectPtr *)(local_238 + 0x20),(FObjectPtr)&local_330);
          FVar12 = GetComponentNameWithinActor((UActorComponent *)local_280);
          local_238._0_8_ = *(undefined8 *)FVar12;
          local_1e0 = *(FName *)FVar13.Data;
          local_1ec = *(FName *)((longlong)FVar13.Data + 8);
          local_1e4 = Bone;
          local_1d8 = param_4;
          if (((local_3c0.Data <= (FControlRigComponentMappedElement *)local_238) &&
              ((FScriptContainerElement *)local_238 <
               local_3c0.Data + (longlong)local_3b8._4_4_ * 0xf0)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar8 = (int)local_3b8;
          if ((int)local_3b8 == local_3b8._4_4_) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x10f0,&local_3c0,(int *)((longlong)&local_3b8 + 4));
          }
          local_3b8 = CONCAT44(local_3b8._4_4_,iVar8 + 1);
          FControlRigComponentMappedElement::FControlRigComponentMappedElement
                    ((FControlRigComponentMappedElement *)(local_3c0.Data + (longlong)iVar8 * 0xf0),
                     (FControlRigComponentMappedElement *)local_238);
          if ((void *)local_238._56_8_ != (void *)0x0) {
            FMemory::Free((void *)local_238._56_8_);
          }
          if ((void *)local_238._8_8_ != (void *)0x0) {
            FMemory::Free((void *)local_238._8_8_);
          }
        }
        FVar13.Data = FVar13.Data + 0x10;
      }
      pFVar14 = (FName *)(local_380.Data + (longlong)local_378 * 0x10);
      FVar13.Data = local_380.Data;
      while( true ) {
        if (local_378 != iVar8) {
          local_3c7[0] = 0;
          `TCheckedPointerIterator<FControlRigComponentMappedCurve,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_3c7);
        }
        FVar5.Data = local_3c0.Data;
        if ((FName *)FVar13.Data == pFVar14) break;
        if ((*(FName *)FVar13.Data != (FName)0x0) &&
           (*(FName *)((longlong)FVar13.Data + 8) != (FName)0x0)) {
          FControlRigComponentMappedElement::FControlRigComponentMappedElement
                    ((FControlRigComponentMappedElement *)local_148);
          local_328 = (UObject *)0x0;
          if ((UObject *)param_1->_padding_ != (UObject *)this->_padding_) {
            local_328 = (UObject *)param_1->_padding_;
          }
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_328 != (UObject *)0x0))
          {
            UE::GC::MarkAsReachable(local_328);
          }
          FSoftObjectPtr::operator=((FSoftObjectPtr *)(local_148 + 0x20),(FObjectPtr)&local_328);
          FVar12 = GetComponentNameWithinActor((UActorComponent *)(local_280 + 8));
          local_148._0_8_ = *(undefined8 *)FVar12;
          local_f0 = *(FName *)FVar13.Data;
          local_fc = *(FName *)((longlong)FVar13.Data + 8);
          local_f4 = Curve;
          if (((local_3c0.Data <= (FControlRigComponentMappedElement *)local_148) &&
              ((FScriptContainerElement *)local_148 <
               local_3c0.Data + (longlong)local_3b8._4_4_ * 0xf0)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar7 = (int)local_3b8;
          if ((int)local_3b8 == local_3b8._4_4_) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x10f0,&local_3c0,(int *)((longlong)&local_3b8 + 4));
          }
          local_3b8 = CONCAT44(local_3b8._4_4_,iVar7 + 1);
          FControlRigComponentMappedElement::FControlRigComponentMappedElement
                    ((FControlRigComponentMappedElement *)(local_3c0.Data + (longlong)iVar7 * 0xf0),
                     (FControlRigComponentMappedElement *)local_148);
          if ((void *)local_148._56_8_ != (void *)0x0) {
            FMemory::Free((void *)local_148._56_8_);
          }
          if ((void *)local_148._8_8_ != (void *)0x0) {
            FMemory::Free((void *)local_148._8_8_);
          }
        }
        FVar13.Data = FVar13.Data + 0x10;
      }
      iVar7 = (int)local_3b8;
      local_360.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_360.ArrayNum = (int)local_3b8;
      if ((int)local_3b8 == 0) {
        local_360.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xf0,0x10,(int)local_3b8,0,&local_360.AllocatorInstance,(int)local_3b8,
                   &local_360.ArrayMax);
        ConstructItems<FControlRigComponentMappedElement,FControlRigComponentMappedElement,int>
                  (local_360.AllocatorInstance.Data,(FControlRigComponentMappedElement *)FVar5.Data,
                   iVar7);
      }
      AddMappedElements(this,&local_360);
      if (local_380.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_380.Data);
      }
      if (local_370.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_370.Data);
      }
      DestructItems<FControlRigComponentMappedElement,int>
                ((FControlRigComponentMappedElement *)local_3c0.Data,(int)local_3b8);
      FVar13.Data = local_3c0.Data;
    }
    if ((FControlRigComponentMappedElement *)FVar13.Data != (FControlRigComponentMappedElement *)0x0
       ) {
      FMemory::Free(FVar13.Data);
    }
    pFVar2 = (local_350->AllocatorInstance).Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar2 = (local_348->AllocatorInstance).Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
  }
  else {
    if (pUVar9->PreConstructionBracket < 1) {
      if (pUVar9->PostConstructionBracket < 1) {
        if (*(int *)((longlong)&pUVar9->_padding_ + 4) < 1) {
          if ((int)pUVar9->_padding_ < 1) goto LAB_14a23ae52;
          ::FString::PrintfImpl
                    (&local_2f0,
                     L"%s cannot be called during the ForwardsSolveEvent - use ConstructionScript instead."
                    );
          ReportError(this,&local_2f0);
          local_310.Data.AllocatorInstance.Data = local_2f0.Data.AllocatorInstance.Data;
        }
        else {
          ::FString::PrintfImpl
                    (&local_300,
                     L"%s cannot be called during the InitEvent - use ConstructionScript instead.");
          ReportError(this,&local_300);
          local_310.Data.AllocatorInstance.Data = local_300.Data.AllocatorInstance.Data;
        }
      }
      else {
        ::FString::PrintfImpl
                  (&local_310,
                   L"%s cannot be called during the PostConstructionEvent - use ConstructionScript instead."
                  );
        ReportError(this,&local_310);
      }
    }
    else {
      ::FString::PrintfImpl
                (&local_320,
                 L"%s cannot be called during the PreConstructionEvent - use ConstructionScript instead."
                );
      local_310.Data.AllocatorInstance.Data = local_320.Data.AllocatorInstance.Data;
      if (2 < (byte)LogControlRig._0_1_) {
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_270,(UObject *)0x0);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogControlRig);
        local_310.Data.AllocatorInstance.Data = local_320.Data.AllocatorInstance.Data;
        if (local_270.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_270.Data.AllocatorInstance.Data);
          local_310.Data.AllocatorInstance.Data = local_320.Data.AllocatorInstance.Data;
        }
      }
    }
    if (local_310.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_310.Data.AllocatorInstance.Data);
    }
    pFVar2 = (param_2->AllocatorInstance).Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar2 = (param_3->AllocatorInstance).Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
  }
  return;
}

// AllowsTickDependency @ 14a23e420

bool __cdecl
UControlRigComponent::AllowsTickDependency(UObject *param_1,UObject *param_2,FString *param_3)

{
  TConsoleVariableData<bool> *pTVar1;
  bool bVar2;
  longlong lVar3;
  
  pTVar1 = CVarControlRigDisableTickDependencyCheck.Ref;
  bVar2 = IsInParallelGameThread();
  if ((bVar2) || (bVar2 = IsInGameThread(), bVar2)) {
    lVar3 = 0;
  }
  else {
    lVar3 = 1;
  }
  if (pTVar1->ShadowedValue[lVar3] == false) {
    if (((param_1 != param_2) &&
        (bVar2 = UObjectBaseUtility::IsInOuter((UObjectBaseUtility *)param_2,param_1), !bVar2)) &&
       (bVar2 = HasTickDependency(param_1,param_2,param_3), !bVar2)) {
      bVar2 = HasTickDependency(param_2,param_1,param_3);
      return !bVar2;
    }
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  return bVar2;
}

// BeginDestroy @ 14a241540

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UControlRigComponent::BeginDestroy(UControlRigComponent *this)

{
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10 [3];
  
  UPrimitiveComponent::BeginDestroy((UPrimitiveComponent *)this);
  EnterCriticalSection((LPCRITICAL_SECTION)&gPendingSkeletalMeshesLock);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UControlRigComponent *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10[0] = (FWeakObjectPtr)this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UControlRigComponent *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res10);
  local_res10[0] = local_res8;
  if (gPendingSkeletalMeshes._8_4_ != gPendingSkeletalMeshes._52_4_) {
    TSet<TTuple<TWeakObjectPtr<UControlRigComponent,FWeakObjectPtr>,TArray<FSkeletalMeshToMap,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UControlRigComponent,FWeakObjectPtr>,TArray<FSkeletalMeshToMap,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::RemoveImpl<TWeakObjectPtr<UControlRigComponent_const_,FWeakObjectPtr>_>
              ((TSet<TTuple<TWeakObjectPtr<UControlRigComponent,FWeakObjectPtr>,TArray<FSkeletalMeshToMap,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UControlRigComponent,FWeakObjectPtr>,TArray<FSkeletalMeshToMap,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                *)&gPendingSkeletalMeshes,local_res8.ObjectSerialNumber ^ local_res8.ObjectIndex,
               (TWeakObjectPtr<UControlRigComponent_const_,FWeakObjectPtr> *)local_res10);
  }
                    /* WARNING: Could not recover jumptable at 0x00014a2415e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&gPendingSkeletalMeshesLock);
  return;
}

// CalcBounds @ 14a242a90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TBoxSphereBounds<double,double> * __thiscall
UControlRigComponent::CalcBounds
          (UControlRigComponent *this,TBoxSphereBounds<double,double> *__return_storage_ptr__,
          TTransform<double> *param_1)

{
  double *pdVar1;
  double dVar2;
  int iVar3;
  UControlRig *pUVar4;
  FRigTransformElement *pFVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [12];
  undefined1 auVar11 [8];
  TTransform<double> *pTVar12;
  bool bVar13;
  uint uVar14;
  TBoxSphereBounds<double,double> *pTVar15;
  longlong lVar16;
  UScriptStruct *pUVar17;
  double *pdVar18;
  longlong lVar19;
  uint uVar20;
  longlong lVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  double dVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  double dVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  double dVar36;
  double dVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  double dVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  undefined1 auStack_258 [32];
  longlong local_238;
  longlong local_230;
  undefined1 local_228 [8];
  TTransform<double> *local_220;
  FRigTransformElement *local_218;
  TTransform<double> *local_210;
  TBoxSphereBounds<double,double> *local_208;
  UControlRigComponent *local_200;
  undefined1 local_1f8 [16];
  double local_1e8;
  undefined1 local_1e0 [8];
  double dStack_1d8;
  double local_1d0;
  undefined1 auStack_1c8 [16];
  double dStack_1b8;
  char local_1b0;
  undefined4 local_1af;
  undefined2 local_1ab;
  undefined1 local_1a9;
  TTransform<double> local_1a8;
  undefined1 *local_148 [2];
  longlong local_138;
  longlong lStack_130;
  longlong local_128;
  longlong lStack_120;
  longlong local_118;
  longlong lStack_110;
  longlong local_108;
  longlong lStack_100;
  longlong local_f8;
  longlong lStack_f0;
  longlong local_e8;
  longlong lStack_e0;
  longlong local_d8;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStack_258;
  local_1af = 0;
  local_1ab = 0;
  local_1a9 = 0;
  pUVar4 = (this->ControlRig).field0_0x0.DebugPtr;
  local_1b0 = '\0';
  _local_1e0 = ZEXT816(0);
  auVar29 = _local_1e0;
  local_1d0 = 0.0;
  auStack_1c8 = ZEXT816(0);
  dStack_1b8 = 0.0;
  local_1e0 = (undefined1  [8])0x0;
  dStack_1d8 = 0.0;
  dVar2 = dStack_1d8;
  auVar11 = local_1e0;
  if (pUVar4 != (UControlRig *)0x0) {
    local_220 = param_1;
    local_208 = __return_storage_ptr__;
    local_200 = this;
    if ((this->bShowDebugDrawing != false) && (uVar20 = 0, 0 < (int)pUVar4->_padding_)) {
      local_210 = (TTransform<double> *)&this->_padding_;
      lVar19 = 0;
      _local_1e0 = auVar29;
      do {
        pTVar12 = local_210;
        iVar3 = (int)pUVar4->_padding_;
        uVar14 = 0;
        if ((int)uVar20 < iVar3) {
          uVar14 = ~uVar20 >> 0x1f;
        }
        if (uVar14 == 0) {
          local_238 = (longlong)(int)uVar20;
          local_230 = (longlong)iVar3;
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar13) {
            pcVar6 = (code *)swi(3);
            pTVar15 = (TBoxSphereBounds<double,double> *)(*pcVar6)();
            return pTVar15;
          }
        }
        lVar21 = pUVar4->_padding_;
        local_1a8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_1a8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
        local_1a8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_1a8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
        local_1a8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0]
        ;
        local_1a8.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1]
        ;
        local_1a8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2]
        ;
        local_1a8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3]
        ;
        local_1a8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_1a8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
        local_1a8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_1a8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
        UE::Math::TTransform<double>::Multiply
                  (&local_1a8,(TTransform<double> *)(lVar21 + 0x40 + lVar19),pTVar12);
        iVar3 = *(int *)(lVar19 + 0x18 + lVar21);
        pdVar18 = *(double **)(lVar19 + 0x10 + lVar21);
        pdVar1 = pdVar18 + (longlong)iVar3 * 3;
        uVar46 = local_1a8.Rotation.ZW.m128d_f64[0]._0_4_;
        uVar47 = local_1a8.Rotation.ZW.m128d_f64[0]._4_4_;
        uVar48 = local_1a8.Rotation.ZW.m128d_f64[1]._0_4_;
        uVar49 = local_1a8.Rotation.ZW.m128d_f64[1]._4_4_;
        uVar50 = local_1a8.Rotation.XY.m128d_f64[0]._0_4_;
        uVar51 = local_1a8.Rotation.XY.m128d_f64[0]._4_4_;
        uVar52 = local_1a8.Rotation.XY.m128d_f64[1]._0_4_;
        uVar53 = local_1a8.Rotation.XY.m128d_f64[1]._4_4_;
        auVar11 = local_1e0;
        dVar2 = dStack_1d8;
        while( true ) {
          if (*(int *)(lVar19 + 0x18 + lVar21) != iVar3) {
            local_228[0] = 0;
            `TCheckedPointerIterator<UE::Math::TVector<double>_const_,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_228);
            uVar46 = local_1a8.Rotation.ZW.m128d_f64[0]._0_4_;
            uVar47 = local_1a8.Rotation.ZW.m128d_f64[0]._4_4_;
            uVar48 = local_1a8.Rotation.ZW.m128d_f64[1]._0_4_;
            uVar49 = local_1a8.Rotation.ZW.m128d_f64[1]._4_4_;
            uVar50 = local_1a8.Rotation.XY.m128d_f64[0]._0_4_;
            uVar51 = local_1a8.Rotation.XY.m128d_f64[0]._4_4_;
            uVar52 = local_1a8.Rotation.XY.m128d_f64[1]._0_4_;
            uVar53 = local_1a8.Rotation.XY.m128d_f64[1]._4_4_;
            dVar2 = dStack_1d8;
            auVar11 = local_1e0;
          }
          if (pdVar18 == pdVar1) break;
          dVar37 = (double)CONCAT44(uVar53,uVar52);
          auVar38._4_4_ = uVar51;
          auVar38._0_4_ = uVar50;
          auVar38._8_4_ = uVar52;
          auVar38._12_4_ = uVar53;
          dVar36 = pdVar18[2] * local_1a8.Scale3D.ZW.m128d_f64[0];
          dVar40 = local_1a8.Scale3D.ZW.m128d_f64[1] * 0.0;
          dVar27 = local_1a8.Scale3D.XY.m128d_f64[0] * *pdVar18;
          dVar33 = local_1a8.Scale3D.XY.m128d_f64[1] * pdVar18[1];
          uVar44 = (undefined4)((ulonglong)dVar33 >> 0x20);
          auVar9._4_4_ = uVar47;
          auVar9._0_4_ = uVar46;
          auVar9._8_4_ = uVar48;
          auVar9._12_4_ = uVar49;
          auVar39 = blendpd(auVar38,auVar9,2);
          auVar41._8_4_ = SUB84(dVar33,0);
          auVar41._0_8_ = dVar27;
          auVar41._12_4_ = uVar44;
          auVar22._8_4_ = uVar46;
          auVar22._0_8_ = dVar37;
          auVar22._12_4_ = uVar47;
          auVar28._8_4_ = SUB84(dVar33,0);
          auVar28._0_8_ = dVar27;
          auVar28._12_4_ = uVar44;
          auVar42._0_8_ = auVar41._8_8_ * (double)CONCAT44(uVar51,uVar50) - dVar37 * dVar27;
          auVar42._8_8_ = dVar36 * (double)CONCAT44(uVar53,uVar52) - auVar22._8_8_ * dVar33;
          auVar7._8_4_ = SUB84(dVar40,0);
          auVar7._0_8_ = dVar36;
          auVar7._12_4_ = (int)((ulonglong)dVar40 >> 0x20);
          auVar29 = blendpd(auVar28,auVar7,2);
          auVar30._0_8_ = auVar29._0_8_ * (double)CONCAT44(uVar47,uVar46) - auVar39._0_8_ * dVar36;
          auVar30._8_8_ = auVar29._8_8_ * (double)CONCAT44(uVar49,uVar48) - auVar39._8_8_ * dVar40;
          auVar29 = blendpd(auVar42,auVar30,2);
          dVar40 = auVar42._8_8_ + auVar42._8_8_;
          dVar8 = auVar30._0_8_ + auVar30._0_8_;
          uVar44 = SUB84(dVar8,0);
          uVar45 = (undefined4)((ulonglong)dVar8 >> 0x20);
          auVar43._0_8_ = auVar29._0_8_ + auVar29._0_8_;
          auVar43._8_8_ = auVar29._8_8_ + auVar29._8_8_;
          auVar34._8_4_ = uVar44;
          auVar34._0_8_ = dVar40;
          auVar34._12_4_ = uVar45;
          auVar23._8_4_ = uVar44;
          auVar23._0_8_ = dVar40;
          auVar23._12_4_ = uVar45;
          auVar31._8_4_ = uVar44;
          auVar31._0_8_ = dVar40;
          auVar31._12_4_ = uVar45;
          auVar29 = blendpd(auVar31,auVar43,2);
          auVar35._0_8_ = auVar34._8_8_ * (double)CONCAT44(uVar51,uVar50) - dVar40 * dVar37;
          auVar35._8_8_ =
               auVar43._0_8_ * (double)CONCAT44(uVar53,uVar52) -
               auVar23._8_8_ * (double)CONCAT44(uVar47,uVar46);
          auVar24._8_4_ = SUB84(auVar43._8_8_,0);
          auVar24._0_8_ = auVar43._0_8_;
          auVar24._12_4_ = (int)((ulonglong)auVar43._8_8_ >> 0x20);
          auVar32._0_8_ =
               auVar29._0_8_ * (double)CONCAT44(uVar47,uVar46) - auVar43._0_8_ * auVar39._0_8_;
          auVar32._8_8_ =
               auVar29._8_8_ * (double)CONCAT44(uVar49,uVar48) - auVar24._8_8_ * auVar39._8_8_;
          auVar25._8_4_ = SUB84(auVar35._8_8_,0);
          auVar25._0_8_ = auVar35._0_8_;
          auVar25._12_4_ = (int)((ulonglong)auVar35._8_8_ >> 0x20);
          auVar29 = blendpd(auVar35,auVar32,2);
          dVar27 = dVar40 * (double)CONCAT44(uVar49,uVar48) + dVar27 + auVar25._8_8_ +
                   local_1a8.Translation.XY.m128d_f64[0];
          dVar33 = dVar8 * (double)CONCAT44(uVar49,uVar48) + dVar33 + auVar32._0_8_ +
                   local_1a8.Translation.XY.m128d_f64[1];
          uVar44 = SUB84(dVar33,0);
          uVar45 = (undefined4)((ulonglong)dVar33 >> 0x20);
          local_1e8 = auVar43._0_8_ * (double)CONCAT44(uVar49,uVar48) + dVar36 + auVar29._0_8_ +
                      local_1a8.Translation.ZW.m128d_f64[0];
          local_1f8._8_4_ = uVar44;
          local_1f8._0_8_ = dVar27;
          local_1f8._12_4_ = uVar45;
          if (local_1b0 == '\0') {
            local_1b0 = '\x01';
            pdVar18 = pdVar18 + 3;
            auVar10._4_8_ = auVar32._0_8_;
            auVar10._0_4_ = (int)((ulonglong)dVar27 >> 0x20);
            auVar26._0_8_ = auVar10._0_8_ << 0x20;
            auVar26._8_4_ = uVar44;
            auVar26._12_4_ = uVar45;
            auStack_1c8._8_8_ = auVar26._8_8_;
            auStack_1c8._0_8_ = dVar27;
            unique0x10000321 = uVar44;
            local_1e0 = (undefined1  [8])dVar27;
            unique0x10000325 = uVar45;
            auVar11 = (undefined1  [8])dVar27;
            dVar2 = dVar33;
            local_1d0 = local_1e8;
            dStack_1b8 = local_1e8;
          }
          else {
            if (dVar27 <= (double)auVar11) {
              auVar11 = (undefined1  [8])dVar27;
            }
            if (local_1e8 <= local_1d0) {
              local_1d0 = local_1e8;
            }
            pdVar18 = pdVar18 + 3;
            if (dVar33 <= dVar2) {
              dVar2 = dVar33;
            }
            dVar36 = (double)auStack_1c8._8_8_;
            if ((double)auStack_1c8._8_8_ <= dVar33) {
              dVar36 = dVar33;
            }
            if ((double)auStack_1c8._0_8_ <= dVar27) {
              auStack_1c8._0_8_ = dVar27;
            }
            dStack_1d8 = dVar2;
            local_1e0 = auVar11;
            auStack_1c8._8_8_ = dVar36;
            if (dStack_1b8 <= local_1e8) {
              dStack_1b8 = local_1e8;
            }
          }
        }
        uVar20 = uVar20 + 1;
        lVar19 = lVar19 + 0xd0;
        auVar29 = _local_1e0;
      } while ((int)uVar20 < (int)pUVar4->_padding_);
    }
    _local_1e0 = auVar29;
    __return_storage_ptr__ = local_208;
    lVar19 = *(longlong *)((longlong)(local_200->ControlRig).field0_0x0 + 0x338);
    param_1 = local_220;
    if (lVar19 != 0) {
      local_138 = local_200->_padding_;
      lStack_130 = local_200->_padding_;
      local_148[0] = local_1e0;
      local_128 = local_200->_padding_;
      lStack_120 = local_200->_padding_;
      uVar20 = 0;
      local_118 = local_200->_padding_;
      lStack_110 = local_200->_padding_;
      local_108 = local_200->_padding_;
      lStack_100 = local_200->_padding_;
      local_f8 = local_200->_padding_;
      lStack_f0 = local_200->_padding_;
      local_e8 = local_200->_padding_;
      lStack_e0 = local_200->_padding_;
      if (0 < *(int *)(lVar19 + 0x100)) {
        lVar21 = 0;
        local_d8 = lVar19;
        do {
          uVar14 = 0;
          if ((int)uVar20 < *(int *)(lVar19 + 0x100)) {
            uVar14 = ~uVar20 >> 0x1f;
          }
          if (uVar14 == 0) {
            local_238 = (longlong)(int)uVar20;
            local_230 = (longlong)*(int *)(lVar19 + 0x100);
            bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar13) {
              pcVar6 = (code *)swi(3);
              pTVar15 = (TBoxSphereBounds<double,double> *)(*pcVar6)();
              return pTVar15;
            }
          }
          pFVar5 = *(FRigTransformElement **)(lVar21 + *(longlong *)(lVar19 + 0xf8));
          if (pFVar5 != (FRigTransformElement *)0x0) {
            lVar16 = (**(code **)(pFVar5->_padding_ + 0x10))(pFVar5);
            pUVar17 = FRigTransformElement::StaticStruct();
            if (pUVar17 != (UScriptStruct *)0x0) {
              iVar3 = (int)pUVar17->_padding_;
              if ((*(int *)(lVar16 + 0x38) < iVar3) ||
                 ((longlong *)*(undefined1 **)(*(longlong *)(lVar16 + 0x30) + (longlong)iVar3 * 8)
                  != &pUVar17->_padding_)) {
                bVar13 = false;
              }
              else {
                bVar13 = true;
              }
              if ((bVar13) &&
                 (local_218 = pFVar5,
                 bVar13 = UE::Core::Private::Function::
                          TFunctionRefCaller<`UControlRigComponent::CalcBounds'::__l17::<lambda_1>,bool,FRigTransformElement_*>
                          ::Call(local_148,&local_218), !bVar13)) break;
            }
          }
          uVar20 = uVar20 + 1;
          lVar21 = lVar21 + 8;
        } while ((int)uVar20 < *(int *)(lVar19 + 0x100));
        param_1 = local_220;
        dVar2 = dStack_1d8;
        auVar11 = local_1e0;
      }
    }
  }
  if (local_1b0 == '\0') {
    dVar27 = (param_1->Translation).XY.m128d_f64[1];
    dVar2 = (param_1->Translation).ZW.m128d_f64[0];
    (__return_storage_ptr__->Origin).field0_0x0._s_0.X = (param_1->Translation).XY.m128d_f64[0];
    (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = dVar27;
    (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = dVar2;
    (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X = 1.0;
    (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y = 1.0;
    (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z = 1.0;
    __return_storage_ptr__->SphereRadius = 1.0;
  }
  else {
    dVar40 = (double)auStack_1c8._8_8_ - dVar2;
    dStack_1b8 = dStack_1b8 - local_1d0;
    dVar33 = dVar40 * __real_3fe0000000000000;
    dVar36 = ((double)auStack_1c8._0_8_ - (double)auVar11) * __real_3fe0000000000000;
    dVar27 = dStack_1b8 * __real_3fe0000000000000;
    (__return_storage_ptr__->Origin).field0_0x0._s_0.X = (double)auVar11 + dVar36;
    (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = dVar2 + dVar33;
    (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = local_1d0 + dVar27;
    (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X = dVar36;
    (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y = dVar33;
    (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z = dVar27;
    dVar2 = (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X;
    auVar39._0_8_ = dVar2 * dVar2;
    auVar39._8_8_ = 0;
    auVar29._8_8_ = 0;
    auVar29._0_8_ =
         (dStack_1b8 * dStack_1b8 + dVar40 * dVar40) * __real_3fd0000000000000 + auVar39._0_8_;
    auVar29 = sqrtpd(auVar39,auVar29);
    __return_storage_ptr__->SphereRadius = auVar29._0_8_;
  }
  return __return_storage_ptr__;
}

// CanExecute @ 14a245930

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall UControlRigComponent::CanExecute(UControlRigComponent *this)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined1 uVar1;
  int iVar2;
  UControlRig *pUVar3;
  
  iVar2 = (**(code **)(*(longlong *)CVarControlRigDisableExecutionComponent._padding_ + 200))();
  if (iVar2 == 0) {
    pUVar3 = SetupControlRigIfRequired(this);
    if (pUVar3 != (UControlRig *)0x0) {
      UNRECOVERED_JUMPTABLE = *(code **)(pUVar3->_padding_ + 0x2b8);
                    /* WARNING: Could not recover jumptable at 0x00014a24596c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)(pUVar3,UNRECOVERED_JUMPTABLE);
      return (bool)uVar1;
    }
  }
  return false;
}

// ClearMappedElements @ 14a246120

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UControlRigComponent::ClearMappedElements(UControlRigComponent *this)

{
  int *piVar1;
  TArray<FControlRigComponentMappedElement,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FControlRigComponentMappedElement *pFVar4;
  UControlRig *pUVar5;
  wchar_t *pwVar6;
  FString local_28;
  FString local_18;
  
  pUVar5 = SetupControlRigIfRequired(this);
  if (pUVar5 == (UControlRig *)0x0) {
LAB_14a24623d:
    pTVar2 = &this->MappedElements;
    piVar1 = &(this->MappedElements).ArrayMax;
    pFVar4 = (FControlRigComponentMappedElement *)(pTVar2->AllocatorInstance).Data;
    iVar3 = (this->MappedElements).ArrayNum;
    if ((this->MappedElements).ArrayMax < 0) {
      DestructItems<FControlRigComponentMappedElement,int>(pFVar4,iVar3);
      (this->MappedElements).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xf0,0x10,0,&pTVar2->AllocatorInstance,0,piVar1);
      }
    }
    else {
      DestructItems<FControlRigComponentMappedElement,int>(pFVar4,iVar3);
      (this->MappedElements).ArrayNum = 0;
    }
    if (pTVar2 != &this->UserDefinedElements) {
      DestructItems<FControlRigComponentMappedElement,int>
                ((FControlRigComponentMappedElement *)(pTVar2->AllocatorInstance).Data,
                 (this->MappedElements).ArrayNum);
      iVar3 = (this->UserDefinedElements).ArrayNum;
      pFVar4 = (FControlRigComponentMappedElement *)
               (this->UserDefinedElements).AllocatorInstance.Data;
      (this->MappedElements).ArrayNum = iVar3;
      if ((iVar3 == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xf0,0x10,iVar3,*piVar1,&pTVar2->AllocatorInstance,iVar3,piVar1);
        ConstructItems<FControlRigComponentMappedElement,FControlRigComponentMappedElement,int>
                  ((pTVar2->AllocatorInstance).Data,pFVar4,iVar3);
      }
    }
    ValidateMappingData(this);
    Initialize(this);
  }
  else {
    if (pUVar5->PreConstructionBracket < 1) {
      if (pUVar5->PostConstructionBracket < 1) {
        if (*(int *)((longlong)&pUVar5->_padding_ + 4) < 1) {
          if ((int)pUVar5->_padding_ < 1) goto LAB_14a24623d;
          pwVar6 = 
          L"%s cannot be called during the ForwardsSolveEvent - use ConstructionScript instead.";
        }
        else {
          pwVar6 = L"%s cannot be called during the InitEvent - use ConstructionScript instead.";
        }
      }
      else {
        pwVar6 = 
        L"%s cannot be called during the PostConstructionEvent - use ConstructionScript instead.";
      }
      ::FString::PrintfImpl(&local_28,pwVar6);
      ReportError(this,&local_28);
    }
    else {
      ::FString::PrintfImpl
                (&local_28,
                 L"%s cannot be called during the PreConstructionEvent - use ConstructionScript instead."
                );
      if (2 < (byte)LogControlRig._0_1_) {
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_18,(UObject *)0x0);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogControlRig);
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
      }
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
      return;
    }
  }
  return;
}

// ConvertTransformFromRigSpace @ 14a249710

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */
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
UControlRigComponent::ConvertTransformFromRigSpace
          (UControlRigComponent *this,TTransform<double> *param_1,EControlRigComponentSpace param_2)

{
  TTransform<double> *pTVar1;
  undefined1 auStack_f8 [32];
  TTransform<double> local_d8;
  TTransform<double> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_f8;
  if (param_2 == WorldSpace) {
    pTVar1 = (TTransform<double> *)&this->_padding_;
  }
  else {
    if (param_2 != ActorSpace) {
      return;
    }
    pTVar1 = USceneComponent::GetRelativeTransform((USceneComponent *)this,&local_78);
  }
  local_d8.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_d8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_d8.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_d8.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_d8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_d8.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_d8.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_d8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_d8.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_d8.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_d8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_d8.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_d8.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_d8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_d8.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_d8.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_d8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_d8.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  UE::Math::TTransform<double>::Multiply(&local_d8,param_1,pTVar1);
  (param_1->Rotation).XY.m128d_f64[0] = local_d8.Rotation.XY.m128d_f64[0];
  (param_1->Rotation).XY.m128d_f64[1] = local_d8.Rotation.XY.m128d_f64[1];
  (param_1->Rotation).ZW.m128d_f64[0] = local_d8.Rotation.ZW.m128d_f64[0];
  (param_1->Rotation).ZW.m128d_f64[1] = local_d8.Rotation.ZW.m128d_f64[1];
  (param_1->Translation).XY.m128d_f64[0] = local_d8.Translation.XY.m128d_f64[0];
  (param_1->Translation).XY.m128d_f64[1] = local_d8.Translation.XY.m128d_f64[1];
  (param_1->Translation).ZW.m128d_f64[0] = local_d8.Translation.ZW.m128d_f64[0];
  (param_1->Translation).ZW.m128d_f64[1] = local_d8.Translation.ZW.m128d_f64[1];
  (param_1->Scale3D).XY.m128d_f64[0] = local_d8.Scale3D.XY.m128d_f64[0];
  (param_1->Scale3D).XY.m128d_f64[1] = local_d8.Scale3D.XY.m128d_f64[1];
  (param_1->Scale3D).ZW.m128d_f64[0] = local_d8.Scale3D.ZW.m128d_f64[0];
  (param_1->Scale3D).ZW.m128d_f64[1] = local_d8.Scale3D.ZW.m128d_f64[1];
  return;
}

// ConvertTransformToRigSpace @ 14a249810

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */
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
UControlRigComponent::ConvertTransformToRigSpace
          (UControlRigComponent *this,TTransform<double> *param_1,EControlRigComponentSpace param_2)

{
  double dVar1;
  TTransform<double> *pTVar2;
  undefined1 auStack_f8 [32];
  TTransform<double> local_d8;
  TTransform<double> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_f8;
  if (param_2 == WorldSpace) {
    pTVar2 = (TTransform<double> *)&this->_padding_;
  }
  else {
    if (param_2 != ActorSpace) {
      return;
    }
    pTVar2 = USceneComponent::GetRelativeTransform((USceneComponent *)this,&local_78);
  }
  pTVar2 = UE::Math::TTransform<double>::GetRelativeTransform(param_1,&local_d8,pTVar2);
  dVar1 = (pTVar2->Rotation).XY.m128d_f64[1];
  (param_1->Rotation).XY.m128d_f64[0] = (pTVar2->Rotation).XY.m128d_f64[0];
  (param_1->Rotation).XY.m128d_f64[1] = dVar1;
  dVar1 = (pTVar2->Rotation).ZW.m128d_f64[1];
  (param_1->Rotation).ZW.m128d_f64[0] = (pTVar2->Rotation).ZW.m128d_f64[0];
  (param_1->Rotation).ZW.m128d_f64[1] = dVar1;
  dVar1 = (pTVar2->Translation).XY.m128d_f64[1];
  (param_1->Translation).XY.m128d_f64[0] = (pTVar2->Translation).XY.m128d_f64[0];
  (param_1->Translation).XY.m128d_f64[1] = dVar1;
  dVar1 = (pTVar2->Translation).ZW.m128d_f64[1];
  (param_1->Translation).ZW.m128d_f64[0] = (pTVar2->Translation).ZW.m128d_f64[0];
  (param_1->Translation).ZW.m128d_f64[1] = dVar1;
  dVar1 = (pTVar2->Scale3D).XY.m128d_f64[1];
  (param_1->Scale3D).XY.m128d_f64[0] = (pTVar2->Scale3D).XY.m128d_f64[0];
  (param_1->Scale3D).XY.m128d_f64[1] = dVar1;
  dVar1 = (pTVar2->Scale3D).ZW.m128d_f64[1];
  (param_1->Scale3D).ZW.m128d_f64[0] = (pTVar2->Scale3D).ZW.m128d_f64[0];
  (param_1->Scale3D).ZW.m128d_f64[1] = dVar1;
  return;
}

// CreateSceneProxy @ 14a24d6c0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FPrimitiveSceneProxy * __thiscall UControlRigComponent::CreateSceneProxy(UControlRigComponent *this)

{
  FPrimitiveSceneProxy *this_00;
  
  this_00 = ::operator_new(0x290);
  if (this_00 != (FPrimitiveSceneProxy *)0x0) {
    FPrimitiveSceneProxy::FPrimitiveSceneProxy(this_00,(UPrimitiveComponent *)this,(FName)0x0);
    this_00->bWillEverBeLit = '\0';
    this_00->_padding_ = (longlong)&___7FControlRigSceneProxy__6B_;
    this_00[1]._padding_ = (longlong)this;
    return this_00;
  }
  return (FPrimitiveSceneProxy *)0x0;
}

// DoesElementExist @ 14a250340

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
UControlRigComponent::DoesElementExist
          (UControlRigComponent *this,FName param_1,ERigElementType param_2)

{
  int iVar1;
  UControlRig *pUVar2;
  FRigElementKey local_18;
  
  pUVar2 = SetupControlRigIfRequired(this);
  if (pUVar2 != (UControlRig *)0x0) {
    local_18.Type = param_2;
    local_18.Name = param_1;
    iVar1 = URigHierarchy::GetIndex((pUVar2->DynamicHierarchy).field0_0x0.DebugPtr,&local_18,true);
    return iVar1 != -1;
  }
  return false;
}

// EnsureCalledOutsideOfBracket @ 14a251d90

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UControlRigComponent::EnsureCalledOutsideOfBracket(UControlRigComponent *this,wchar_t *param_1)

{
  UControlRig *pUVar1;
  wchar_t *pwVar2;
  FString local_28;
  FString local_18;
  
  pUVar1 = SetupControlRigIfRequired(this);
  if (pUVar1 == (UControlRig *)0x0) {
    return true;
  }
  if (0 < pUVar1->PreConstructionBracket) {
    if (param_1 == (wchar_t *)0x0) {
      ::FString::FString(&local_28,
                         L"Cannot be called during the PreConstructionEvent - use ConstructionScript instead."
                        );
    }
    else {
      ::FString::PrintfImpl
                (&local_28,
                 L"%s cannot be called during the PreConstructionEvent - use ConstructionScript instead."
                );
    }
    if (2 < (byte)LogControlRig._0_1_) {
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_18,(UObject *)0x0);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogControlRig);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    goto LAB_14a251ee9;
  }
  if (pUVar1->PostConstructionBracket < 1) {
    if (*(int *)((longlong)&pUVar1->_padding_ + 4) < 1) {
      if ((int)pUVar1->_padding_ < 1) {
        return true;
      }
      if (param_1 == (wchar_t *)0x0) {
        pwVar2 = L"Cannot be called during the ForwardsSolveEvent - use ConstructionScript instead."
        ;
        goto LAB_14a251ed8;
      }
      ::FString::PrintfImpl
                (&local_28,
                 L"%s cannot be called during the ForwardsSolveEvent - use ConstructionScript instead."
                );
    }
    else if (param_1 == (wchar_t *)0x0) {
      pwVar2 = L"Cannot be called during the InitEvent - use ConstructionScript instead.";
LAB_14a251ed8:
      ::FString::FString(&local_28,pwVar2);
    }
    else {
      ::FString::PrintfImpl
                (&local_28,
                 L"%s cannot be called during the InitEvent - use ConstructionScript instead.");
    }
  }
  else {
    if (param_1 == (wchar_t *)0x0) {
      pwVar2 = 
      L"Cannot be called during the PostConstructionEvent - use ConstructionScript instead.";
      goto LAB_14a251ed8;
    }
    ::FString::PrintfImpl
              (&local_28,
               L"%s cannot be called during the PostConstructionEvent - use ConstructionScript instead."
              );
  }
  ReportError(this,&local_28);
LAB_14a251ee9:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return false;
}

// GetAbsoluteTime @ 14a25db40

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

float __thiscall UControlRigComponent::GetAbsoluteTime(UControlRigComponent *this)

{
  UControlRig *pUVar1;
  
  pUVar1 = (this->ControlRig).field0_0x0.DebugPtr;
  if (pUVar1 != (UControlRig *)0x0) {
    return *(float *)((longlong)&pUVar1->_padding_ + 4);
  }
  return 0.0;
}

// GetBoneTransform @ 14a25f800

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TTransform<double> * __thiscall
UControlRigComponent::GetBoneTransform
          (UControlRigComponent *this,TTransform<double> *__return_storage_ptr__,FName param_1,
          EControlRigComponentSpace param_2)

{
  URigHierarchy *this_00;
  int iVar1;
  UControlRig *pUVar2;
  undefined1 auStack_b8 [32];
  FRigElementKey local_98;
  TTransform<double> local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_b8;
  pUVar2 = SetupControlRigIfRequired(this);
  if (pUVar2 != (UControlRig *)0x0) {
    local_98.Type = Bone;
    local_98.Name = param_1;
    iVar1 = URigHierarchy::GetIndex((pUVar2->DynamicHierarchy).field0_0x0.DebugPtr,&local_98,true);
    if (iVar1 != -1) {
      this_00 = (pUVar2->DynamicHierarchy).field0_0x0.DebugPtr;
      if (param_2 == LocalSpace) {
        URigHierarchy::GetLocalTransformByIndex(this_00,__return_storage_ptr__,iVar1,false);
        return __return_storage_ptr__;
      }
      URigHierarchy::GetGlobalTransformByIndex(this_00,&local_88,iVar1,false);
      ConvertTransformFromRigSpace(this,&local_88,param_2);
      (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = local_88.Rotation.XY.m128d_f64[0];
      (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = local_88.Rotation.XY.m128d_f64[1];
      (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = local_88.Rotation.ZW.m128d_f64[0];
      (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = local_88.Rotation.ZW.m128d_f64[1];
      (__return_storage_ptr__->Translation).XY.m128d_f64[0] = local_88.Translation.XY.m128d_f64[0];
      (__return_storage_ptr__->Translation).XY.m128d_f64[1] = local_88.Translation.XY.m128d_f64[1];
      (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = local_88.Translation.ZW.m128d_f64[0];
      (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = local_88.Translation.ZW.m128d_f64[1];
      (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = local_88.Scale3D.XY.m128d_f64[0];
      (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = local_88.Scale3D.XY.m128d_f64[1];
      goto LAB_14a25f916;
    }
  }
  *&(__return_storage_ptr__->Rotation).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(__return_storage_ptr__->Rotation).ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(__return_storage_ptr__->Translation).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(__return_storage_ptr__->Translation).ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(__return_storage_ptr__->Scale3D).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  local_88.Scale3D.ZW.m128d_f64[0]._0_4_ =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._0_4_;
  local_88.Scale3D.ZW.m128d_f64[0]._4_4_ =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._4_4_;
  local_88.Scale3D.ZW.m128d_f64[1]._0_4_ =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._0_4_;
  local_88.Scale3D.ZW.m128d_f64[1]._4_4_ =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._4_4_;
LAB_14a25f916:
  *(undefined4 *)(__return_storage_ptr__->Scale3D).ZW.m128d_f64 =
       local_88.Scale3D.ZW.m128d_f64[0]._0_4_;
  *(undefined4 *)((longlong)(__return_storage_ptr__->Scale3D).ZW.m128d_f64 + 4) =
       local_88.Scale3D.ZW.m128d_f64[0]._4_4_;
  *(undefined4 *)((__return_storage_ptr__->Scale3D).ZW.m128d_f64 + 1) =
       local_88.Scale3D.ZW.m128d_f64[1]._0_4_;
  *(undefined4 *)((longlong)(__return_storage_ptr__->Scale3D).ZW.m128d_f64 + 0xc) =
       local_88.Scale3D.ZW.m128d_f64[1]._4_4_;
  return __return_storage_ptr__;
}

// GetComponentNameWithinActor @ 14a25fd00

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FName __cdecl UControlRigComponent::GetComponentNameWithinActor(UActorComponent *param_1)

{
  longlong lVar1;
  code *pcVar2;
  FField *pFVar3;
  bool bVar4;
  FName FVar5;
  longlong lVar6;
  longlong in_RDX;
  TFieldIterator<FProperty> local_28;
  
  if ((in_RDX == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InComponent",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\ControlRigComponent.cpp"
                         ,0x6f4,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    FVar5 = (FName)(*pcVar2)();
    return FVar5;
  }
  lVar1 = *(longlong *)(in_RDX + 0xa8);
  param_1->_padding_ = *(longlong *)(in_RDX + 0x18);
  if (lVar1 == 0) {
    return (FName)param_1;
  }
  local_28.Struct = *(UStruct **)(lVar1 + 0x10);
  if (local_28.Struct == (UStruct *)0x0) {
    local_28.Field = (FField *)0x0;
  }
  else {
    local_28.Field = (local_28.Struct)->ChildProperties;
  }
  local_28.InterfaceIndex = -1;
  local_28.bIncludeSuper = true;
  local_28.bIncludeDeprecated = true;
  local_28.bIncludeInterface = false;
  TFieldIterator<FProperty>::IterateToNext(&local_28);
  pFVar3 = local_28.Field;
  while( true ) {
    if (pFVar3 == (FField *)0x0) {
      return (FName)param_1;
    }
    if (((((uint)(int)pFVar3->ClassPrivate->CastFlags >> 0x1a & 1) != 0) &&
        (pFVar3 != (FField *)0x0)) &&
       (local_28.Field = pFVar3, lVar6 = (**(code **)(pFVar3->_padding_ + 0x208))(pFVar3,lVar1,0),
       lVar6 == in_RDX)) break;
    local_28.Field = pFVar3->Next;
    TFieldIterator<FProperty>::IterateToNext(&local_28);
    pFVar3 = local_28.Field;
  }
  bVar4 = IsThisNotNull(pFVar3,"FField::GetFName");
  if (bVar4) {
    FVar5 = pFVar3->NamePrivate;
  }
  else {
    FVar5.ComparisonIndex.Value = 0;
    FVar5.Number = 0;
  }
  param_1->_padding_ = (longlong)FVar5;
  return (FName)param_1;
}

// GetControlBool @ 14a260060

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall UControlRigComponent::GetControlBool(UControlRigComponent *this,FName param_1)

{
  UControlRig *pUVar1;
  FRigControlElement *pFVar2;
  FRigControlValue *pFVar3;
  FRigElementKey local_98;
  FRigControlValue local_8c;
  
  pUVar1 = SetupControlRigIfRequired(this);
  if (pUVar1 != (UControlRig *)0x0) {
    local_98.Type = Control;
    local_98.Name = param_1;
    pFVar2 = URigHierarchy::Find<FRigControlElement>
                       ((pUVar1->DynamicHierarchy).field0_0x0.DebugPtr,&local_98);
    if ((pFVar2 != (FRigControlElement *)0x0) && ((pFVar2->Settings).ControlType == Bool)) {
      pFVar3 = URigHierarchy::GetControlValue
                         ((pUVar1->DynamicHierarchy).field0_0x0.DebugPtr,&local_8c,pFVar2,Current,
                          true);
      return (bool)*(undefined1 *)&(pFVar3->FloatStorage).Float00;
    }
  }
  return false;
}

// GetControlFloat @ 14a260270

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

float __thiscall UControlRigComponent::GetControlFloat(UControlRigComponent *this,FName param_1)

{
  ERigControlType EVar1;
  UControlRig *pUVar2;
  FRigControlElement *pFVar3;
  FRigControlValue *pFVar4;
  FRigElementKey local_98;
  FRigControlValue local_8c;
  
  pUVar2 = SetupControlRigIfRequired(this);
  if (pUVar2 != (UControlRig *)0x0) {
    local_98.Type = Control;
    local_98.Name = param_1;
    pFVar3 = URigHierarchy::Find<FRigControlElement>
                       ((pUVar2->DynamicHierarchy).field0_0x0.DebugPtr,&local_98);
    if ((pFVar3 != (FRigControlElement *)0x0) &&
       ((EVar1 = (pFVar3->Settings).ControlType, EVar1 == Float || (EVar1 == ScaleFloat)))) {
      pFVar4 = URigHierarchy::GetControlValue
                         ((pUVar2->DynamicHierarchy).field0_0x0.DebugPtr,&local_8c,pFVar3,Current,
                          true);
      return (pFVar4->FloatStorage).Float00;
    }
  }
  return 0.0;
}

// GetControlInt @ 14a2603d0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

int __thiscall UControlRigComponent::GetControlInt(UControlRigComponent *this,FName param_1)

{
  UControlRig *pUVar1;
  FRigControlElement *pFVar2;
  FRigControlValue *pFVar3;
  FRigElementKey local_98;
  FRigControlValue local_8c;
  
  pUVar1 = SetupControlRigIfRequired(this);
  if (pUVar1 != (UControlRig *)0x0) {
    local_98.Type = Control;
    local_98.Name = param_1;
    pFVar2 = URigHierarchy::Find<FRigControlElement>
                       ((pUVar1->DynamicHierarchy).field0_0x0.DebugPtr,&local_98);
    if ((pFVar2 != (FRigControlElement *)0x0) && ((pFVar2->Settings).ControlType == Integer)) {
      pFVar3 = URigHierarchy::GetControlValue
                         ((pUVar1->DynamicHierarchy).field0_0x0.DebugPtr,&local_8c,pFVar2,Current,
                          true);
      return (int)(pFVar3->FloatStorage).Float00;
    }
  }
  return 0;
}

// GetControlOffset @ 14a2605d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TTransform<double> * __thiscall
UControlRigComponent::GetControlOffset
          (UControlRigComponent *this,TTransform<double> *__return_storage_ptr__,FName param_1,
          EControlRigComponentSpace param_2)

{
  URigHierarchy *this_00;
  UControlRig *pUVar1;
  FRigControlElement *pFVar2;
  undefined1 auStack_b8 [32];
  FRigElementKey local_98;
  TTransform<double> local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_b8;
  pUVar1 = SetupControlRigIfRequired(this);
  if (pUVar1 != (UControlRig *)0x0) {
    local_98.Type = Control;
    local_98.Name = param_1;
    pFVar2 = URigHierarchy::Find<FRigControlElement>
                       ((pUVar1->DynamicHierarchy).field0_0x0.DebugPtr,&local_98);
    if (pFVar2 != (FRigControlElement *)0x0) {
      this_00 = (pUVar1->DynamicHierarchy).field0_0x0.DebugPtr;
      if (param_2 == LocalSpace) {
        URigHierarchy::GetControlOffsetTransform(this_00,__return_storage_ptr__,pFVar2,CurrentLocal)
        ;
        return __return_storage_ptr__;
      }
      URigHierarchy::GetControlOffsetTransform(this_00,&local_88,pFVar2,CurrentGlobal);
      ConvertTransformFromRigSpace(this,&local_88,param_2);
      (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = local_88.Rotation.XY.m128d_f64[0];
      (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = local_88.Rotation.XY.m128d_f64[1];
      (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = local_88.Rotation.ZW.m128d_f64[0];
      (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = local_88.Rotation.ZW.m128d_f64[1];
      (__return_storage_ptr__->Translation).XY.m128d_f64[0] = local_88.Translation.XY.m128d_f64[0];
      (__return_storage_ptr__->Translation).XY.m128d_f64[1] = local_88.Translation.XY.m128d_f64[1];
      (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = local_88.Translation.ZW.m128d_f64[0];
      (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = local_88.Translation.ZW.m128d_f64[1];
      (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = local_88.Scale3D.XY.m128d_f64[0];
      (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = local_88.Scale3D.XY.m128d_f64[1];
      goto LAB_14a2606ec;
    }
  }
  *&(__return_storage_ptr__->Rotation).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(__return_storage_ptr__->Rotation).ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(__return_storage_ptr__->Translation).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(__return_storage_ptr__->Translation).ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(__return_storage_ptr__->Scale3D).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  local_88.Scale3D.ZW.m128d_f64[0]._0_4_ =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._0_4_;
  local_88.Scale3D.ZW.m128d_f64[0]._4_4_ =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._4_4_;
  local_88.Scale3D.ZW.m128d_f64[1]._0_4_ =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._0_4_;
  local_88.Scale3D.ZW.m128d_f64[1]._4_4_ =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._4_4_;
LAB_14a2606ec:
  *(undefined4 *)(__return_storage_ptr__->Scale3D).ZW.m128d_f64 =
       local_88.Scale3D.ZW.m128d_f64[0]._0_4_;
  *(undefined4 *)((longlong)(__return_storage_ptr__->Scale3D).ZW.m128d_f64 + 4) =
       local_88.Scale3D.ZW.m128d_f64[0]._4_4_;
  *(undefined4 *)((__return_storage_ptr__->Scale3D).ZW.m128d_f64 + 1) =
       local_88.Scale3D.ZW.m128d_f64[1]._0_4_;
  *(undefined4 *)((longlong)(__return_storage_ptr__->Scale3D).ZW.m128d_f64 + 0xc) =
       local_88.Scale3D.ZW.m128d_f64[1]._4_4_;
  return __return_storage_ptr__;
}

// GetControlPosition @ 14a260730

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TVector<double> * __thiscall
UControlRigComponent::GetControlPosition
          (UControlRigComponent *this,TVector<double> *__return_storage_ptr__,FName param_1,
          EControlRigComponentSpace param_2)

{
  double dVar1;
  double dVar2;
  TTransform<double> *pTVar3;
  TTransform<double> local_68;
  
  pTVar3 = GetControlTransform(this,&local_68,param_1,param_2);
  dVar2 = (pTVar3->Translation).XY.m128d_f64[1];
  dVar1 = (pTVar3->Translation).ZW.m128d_f64[0];
  (__return_storage_ptr__->field0_0x0)._s_0.X = (pTVar3->Translation).XY.m128d_f64[0];
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// GetControlRig @ 14a2608f0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UControlRig * __thiscall UControlRigComponent::GetControlRig(UControlRigComponent *this)

{
  undefined1 *puVar1;
  FControlRigComponentEvent *this_00;
  int iVar2;
  UClass *pUVar3;
  longlong lVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  uint uVar10;
  UClass *pUVar11;
  UClass *pUVar12;
  UControlRig *pUVar13;
  UClass *pUVar14;
  uint uVar15;
  longlong lVar16;
  FDestructionSentinel FStack_48;
  
  pUVar14 = (UClass *)0x0;
  if ((this->ControlRig).field0_0x0.DebugPtr != (UControlRig *)0x0) {
    pUVar3 = (this->ControlRigClass).Class.field0_0x0.DebugPtr;
    pUVar12 = pUVar14;
    if ((pUVar3 != (UClass *)0x0) &&
       (pUVar11 = UControlRig::StaticClass(), pUVar11 != (UClass *)0x0)) {
      iVar2 = (int)pUVar11->_padding_;
      if (((int)pUVar3->_padding_ < iVar2) ||
         ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar2 * 8) !=
          &pUVar11->_padding_)) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      if (bVar7) {
        pUVar12 = (this->ControlRigClass).Class.field0_0x0.DebugPtr;
      }
    }
    pUVar13 = (this->ControlRig).field0_0x0.DebugPtr;
    if ((UClass *)pUVar13->_padding_ == pUVar12) {
      return pUVar13;
    }
    SetControlRig(this,(UControlRig *)0x0);
  }
  pUVar3 = (this->ControlRigClass).Class.field0_0x0.DebugPtr;
  if ((pUVar3 != (UClass *)0x0) && (pUVar12 = UControlRig::StaticClass(), pUVar12 != (UClass *)0x0))
  {
    iVar2 = (int)pUVar12->_padding_;
    if (((int)pUVar3->_padding_ < iVar2) ||
       ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar2 * 8) != &pUVar12->_padding_
       )) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if ((bVar7) &&
       (pUVar3 = (this->ControlRigClass).Class.field0_0x0.DebugPtr, pUVar3 != (UClass *)0x0)) {
      pUVar12 = UControlRig::StaticClass();
      if (pUVar12 != (UClass *)0x0) {
        iVar2 = (int)pUVar12->_padding_;
        if (((int)pUVar3->_padding_ < iVar2) ||
           ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar2 * 8) !=
            &pUVar12->_padding_)) {
          bVar7 = false;
        }
        else {
          bVar7 = true;
        }
        if (bVar7) {
          pUVar14 = (this->ControlRigClass).Class.field0_0x0.DebugPtr;
        }
      }
      pUVar13 = NewObject<UControlRig>
                          ((UObject *)this,pUVar14,(FName)0x0,RF_NoFlags,(UObject *)0x0,false,
                           (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
      SetControlRig(this,pUVar13);
      this_00 = &this->ControlRigCreatedEvent;
      bVar7 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                        ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00);
      if (bVar7) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
                   (FWriteAccessScope *)&FStack_48);
        puVar1 = &(this->ControlRigCreatedEvent).field_0x1c;
        *(int *)puVar1 = *(int *)puVar1 + 1;
        bVar7 = false;
        uVar15 = *(int *)&(this->ControlRigCreatedEvent).field_0x10 - 1;
        if (-1 < (int)uVar15) {
          lVar16 = (longlong)(int)uVar15 << 4;
          bVar7 = false;
          do {
            uVar10 = 0;
            if ((int)uVar15 < *(int *)&(this->ControlRigCreatedEvent).field_0x10) {
              uVar10 = ~uVar15 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar6 = (code *)swi(3);
              pUVar13 = (UControlRig *)(*pcVar6)();
              return pUVar13;
            }
            lVar4 = *(longlong *)&(this->ControlRigCreatedEvent).field_0x8;
            if (((*(int *)(lVar16 + 8 + lVar4) == 0) ||
                (plVar5 = *(longlong **)(lVar16 + lVar4), plVar5 == (longlong *)0x0)) ||
               (cVar9 = (**(code **)(*plVar5 + 0x68))(), cVar9 == '\0')) {
              bVar7 = true;
            }
            lVar16 = lVar16 + -0x10;
            uVar15 = uVar15 - 1;
          } while (-1 < (int)uVar15);
        }
        puVar1 = &(this->ControlRigCreatedEvent).field_0x1c;
        *(int *)puVar1 = *(int *)puVar1 + -1;
        if (bVar7) {
          TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,false);
        }
        if (FStack_48.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_48.Accessor,&FStack_48);
        }
      }
      ValidateMappingData(this);
    }
  }
  return (this->ControlRig).field0_0x0.DebugPtr;
}

// GetControlRotator @ 14a260ae0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TRotator<double> * __thiscall
UControlRigComponent::GetControlRotator
          (UControlRigComponent *this,TRotator<double> *__return_storage_ptr__,FName param_1,
          EControlRigComponentSpace param_2)

{
  TTransform<double> *pTVar1;
  TQuat<double> local_88;
  TTransform<double> local_68;
  
  pTVar1 = GetControlTransform(this,&local_68,param_1,param_2);
  local_88.X = (pTVar1->Rotation).XY.m128d_f64[0];
  local_88.Y = (pTVar1->Rotation).XY.m128d_f64[1];
  local_88.Z = (pTVar1->Rotation).ZW.m128d_f64[0];
  local_88.W = (pTVar1->Rotation).ZW.m128d_f64[1];
  UE::Math::TQuat<double>::Rotator(&local_88,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetControlScale @ 14a260b30

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TVector<double> * __thiscall
UControlRigComponent::GetControlScale
          (UControlRigComponent *this,TVector<double> *__return_storage_ptr__,FName param_1,
          EControlRigComponentSpace param_2)

{
  double dVar1;
  double dVar2;
  TTransform<double> *pTVar3;
  TTransform<double> local_68;
  
  pTVar3 = GetControlTransform(this,&local_68,param_1,param_2);
  dVar2 = (pTVar3->Scale3D).XY.m128d_f64[1];
  dVar1 = (pTVar3->Scale3D).ZW.m128d_f64[0];
  (__return_storage_ptr__->field0_0x0)._s_0.X = (pTVar3->Scale3D).XY.m128d_f64[0];
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// GetControlTransform @ 14a260d70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TTransform<double> * __thiscall
UControlRigComponent::GetControlTransform
          (UControlRigComponent *this,TTransform<double> *__return_storage_ptr__,FName param_1,
          EControlRigComponentSpace param_2)

{
  URigHierarchy *this_00;
  UControlRig *pUVar1;
  FRigControlElement *pFVar2;
  TTransform<double> *pTVar3;
  undefined1 auStack_128 [32];
  FRigElementKey local_108;
  TTransform<double> local_f8;
  TTransform<double> local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_128;
  pUVar1 = SetupControlRigIfRequired(this);
  if (pUVar1 != (UControlRig *)0x0) {
    local_108.Type = Control;
    local_108.Name = param_1;
    pFVar2 = URigHierarchy::Find<FRigControlElement>
                       ((pUVar1->DynamicHierarchy).field0_0x0.DebugPtr,&local_108);
    if (pFVar2 != (FRigControlElement *)0x0) {
      this_00 = (pUVar1->DynamicHierarchy).field0_0x0.DebugPtr;
      local_f8.Rotation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      local_f8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_f8.Rotation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
      local_f8.Rotation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      local_f8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_f8.Rotation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
      local_f8.Translation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_f8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_f8.Translation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_f8.Translation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
      local_f8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_f8.Translation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
      local_f8.Scale3D.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_f8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_f8.Scale3D.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      local_f8.Scale3D.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      local_f8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_f8.Scale3D.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
      if (param_2 == LocalSpace) {
        pTVar3 = URigHierarchy::GetTransform
                           (this_00,&local_98,(FRigTransformElement *)pFVar2,CurrentLocal);
        local_f8.Rotation.XY.m128d_f64[0]._0_4_ = *(undefined4 *)(pTVar3->Rotation).XY.m128d_f64;
        local_f8.Rotation.XY.m128d_f64[0]._4_4_ =
             *(undefined4 *)((longlong)(pTVar3->Rotation).XY.m128d_f64 + 4);
        local_f8.Rotation.XY.m128d_f64[1]._0_4_ =
             *(undefined4 *)((pTVar3->Rotation).XY.m128d_f64 + 1);
        local_f8.Rotation.XY.m128d_f64[1]._4_4_ =
             *(undefined4 *)((longlong)(pTVar3->Rotation).XY.m128d_f64 + 0xc);
        local_f8.Rotation.ZW.m128d_f64[0]._0_4_ = *(undefined4 *)(pTVar3->Rotation).ZW.m128d_f64;
        local_f8.Rotation.ZW.m128d_f64[0]._4_4_ =
             *(undefined4 *)((longlong)(pTVar3->Rotation).ZW.m128d_f64 + 4);
        local_f8.Rotation.ZW.m128d_f64[1]._0_4_ =
             *(undefined4 *)((pTVar3->Rotation).ZW.m128d_f64 + 1);
        local_f8.Rotation.ZW.m128d_f64[1]._4_4_ =
             *(undefined4 *)((longlong)(pTVar3->Rotation).ZW.m128d_f64 + 0xc);
        local_f8.Translation.XY.m128d_f64[0]._0_4_ =
             *(undefined4 *)(pTVar3->Translation).XY.m128d_f64;
        local_f8.Translation.XY.m128d_f64[0]._4_4_ =
             *(undefined4 *)((longlong)(pTVar3->Translation).XY.m128d_f64 + 4);
        local_f8.Translation.XY.m128d_f64[1]._0_4_ =
             *(undefined4 *)((pTVar3->Translation).XY.m128d_f64 + 1);
        local_f8.Translation.XY.m128d_f64[1]._4_4_ =
             *(undefined4 *)((longlong)(pTVar3->Translation).XY.m128d_f64 + 0xc);
        local_f8.Translation.ZW.m128d_f64[0]._0_4_ =
             *(undefined4 *)(pTVar3->Translation).ZW.m128d_f64;
        local_f8.Translation.ZW.m128d_f64[0]._4_4_ =
             *(undefined4 *)((longlong)(pTVar3->Translation).ZW.m128d_f64 + 4);
        local_f8.Translation.ZW.m128d_f64[1]._0_4_ =
             *(undefined4 *)((pTVar3->Translation).ZW.m128d_f64 + 1);
        local_f8.Translation.ZW.m128d_f64[1]._4_4_ =
             *(undefined4 *)((longlong)(pTVar3->Translation).ZW.m128d_f64 + 0xc);
        local_f8.Scale3D.XY.m128d_f64[0]._0_4_ = *(undefined4 *)(pTVar3->Scale3D).XY.m128d_f64;
        local_f8.Scale3D.XY.m128d_f64[0]._4_4_ =
             *(undefined4 *)((longlong)(pTVar3->Scale3D).XY.m128d_f64 + 4);
        local_f8.Scale3D.XY.m128d_f64[1]._0_4_ = *(undefined4 *)((pTVar3->Scale3D).XY.m128d_f64 + 1)
        ;
        local_f8.Scale3D.XY.m128d_f64[1]._4_4_ =
             *(undefined4 *)((longlong)(pTVar3->Scale3D).XY.m128d_f64 + 0xc);
        local_f8.Scale3D.ZW.m128d_f64[0]._0_4_ = *(undefined4 *)(pTVar3->Scale3D).ZW.m128d_f64;
        local_f8.Scale3D.ZW.m128d_f64[0]._4_4_ =
             *(undefined4 *)((longlong)(pTVar3->Scale3D).ZW.m128d_f64 + 4);
        local_f8.Scale3D.ZW.m128d_f64[1]._0_4_ = *(undefined4 *)((pTVar3->Scale3D).ZW.m128d_f64 + 1)
        ;
        local_f8.Scale3D.ZW.m128d_f64[1]._4_4_ =
             *(undefined4 *)((longlong)(pTVar3->Scale3D).ZW.m128d_f64 + 0xc);
      }
      else {
        pTVar3 = URigHierarchy::GetTransform
                           (this_00,&local_98,(FRigTransformElement *)pFVar2,CurrentGlobal);
        local_f8.Rotation.XY.m128d_f64 = *&(pTVar3->Rotation).XY.m128d_f64;
        local_f8.Rotation.ZW.m128d_f64 = *&(pTVar3->Rotation).ZW.m128d_f64;
        local_f8.Translation.XY.m128d_f64 = *&(pTVar3->Translation).XY.m128d_f64;
        local_f8.Translation.ZW.m128d_f64 = *&(pTVar3->Translation).ZW.m128d_f64;
        local_f8.Scale3D.XY.m128d_f64 = *&(pTVar3->Scale3D).XY.m128d_f64;
        local_f8.Scale3D.ZW.m128d_f64 = *&(pTVar3->Scale3D).ZW.m128d_f64;
        ConvertTransformFromRigSpace(this,&local_f8,param_2);
      }
      *(undefined4 *)(__return_storage_ptr__->Rotation).XY.m128d_f64 =
           local_f8.Rotation.XY.m128d_f64[0]._0_4_;
      *(undefined4 *)((longlong)(__return_storage_ptr__->Rotation).XY.m128d_f64 + 4) =
           local_f8.Rotation.XY.m128d_f64[0]._4_4_;
      *(undefined4 *)((__return_storage_ptr__->Rotation).XY.m128d_f64 + 1) =
           local_f8.Rotation.XY.m128d_f64[1]._0_4_;
      *(undefined4 *)((longlong)(__return_storage_ptr__->Rotation).XY.m128d_f64 + 0xc) =
           local_f8.Rotation.XY.m128d_f64[1]._4_4_;
      *(undefined4 *)(__return_storage_ptr__->Rotation).ZW.m128d_f64 =
           local_f8.Rotation.ZW.m128d_f64[0]._0_4_;
      *(undefined4 *)((longlong)(__return_storage_ptr__->Rotation).ZW.m128d_f64 + 4) =
           local_f8.Rotation.ZW.m128d_f64[0]._4_4_;
      *(undefined4 *)((__return_storage_ptr__->Rotation).ZW.m128d_f64 + 1) =
           local_f8.Rotation.ZW.m128d_f64[1]._0_4_;
      *(undefined4 *)((longlong)(__return_storage_ptr__->Rotation).ZW.m128d_f64 + 0xc) =
           local_f8.Rotation.ZW.m128d_f64[1]._4_4_;
      *(undefined4 *)(__return_storage_ptr__->Translation).XY.m128d_f64 =
           local_f8.Translation.XY.m128d_f64[0]._0_4_;
      *(undefined4 *)((longlong)(__return_storage_ptr__->Translation).XY.m128d_f64 + 4) =
           local_f8.Translation.XY.m128d_f64[0]._4_4_;
      *(undefined4 *)((__return_storage_ptr__->Translation).XY.m128d_f64 + 1) =
           local_f8.Translation.XY.m128d_f64[1]._0_4_;
      *(undefined4 *)((longlong)(__return_storage_ptr__->Translation).XY.m128d_f64 + 0xc) =
           local_f8.Translation.XY.m128d_f64[1]._4_4_;
      *(undefined4 *)(__return_storage_ptr__->Translation).ZW.m128d_f64 =
           local_f8.Translation.ZW.m128d_f64[0]._0_4_;
      *(undefined4 *)((longlong)(__return_storage_ptr__->Translation).ZW.m128d_f64 + 4) =
           local_f8.Translation.ZW.m128d_f64[0]._4_4_;
      *(undefined4 *)((__return_storage_ptr__->Translation).ZW.m128d_f64 + 1) =
           local_f8.Translation.ZW.m128d_f64[1]._0_4_;
      *(undefined4 *)((longlong)(__return_storage_ptr__->Translation).ZW.m128d_f64 + 0xc) =
           local_f8.Translation.ZW.m128d_f64[1]._4_4_;
      *(undefined4 *)(__return_storage_ptr__->Scale3D).XY.m128d_f64 =
           local_f8.Scale3D.XY.m128d_f64[0]._0_4_;
      *(undefined4 *)((longlong)(__return_storage_ptr__->Scale3D).XY.m128d_f64 + 4) =
           local_f8.Scale3D.XY.m128d_f64[0]._4_4_;
      *(undefined4 *)((__return_storage_ptr__->Scale3D).XY.m128d_f64 + 1) =
           local_f8.Scale3D.XY.m128d_f64[1]._0_4_;
      *(undefined4 *)((longlong)(__return_storage_ptr__->Scale3D).XY.m128d_f64 + 0xc) =
           local_f8.Scale3D.XY.m128d_f64[1]._4_4_;
      *(undefined4 *)(__return_storage_ptr__->Scale3D).ZW.m128d_f64 =
           local_f8.Scale3D.ZW.m128d_f64[0]._0_4_;
      *(undefined4 *)((longlong)(__return_storage_ptr__->Scale3D).ZW.m128d_f64 + 4) =
           local_f8.Scale3D.ZW.m128d_f64[0]._4_4_;
      *(undefined4 *)((__return_storage_ptr__->Scale3D).ZW.m128d_f64 + 1) =
           local_f8.Scale3D.ZW.m128d_f64[1]._0_4_;
      *(undefined4 *)((longlong)(__return_storage_ptr__->Scale3D).ZW.m128d_f64 + 0xc) =
           local_f8.Scale3D.ZW.m128d_f64[1]._4_4_;
      return __return_storage_ptr__;
    }
  }
  *&(__return_storage_ptr__->Rotation).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(__return_storage_ptr__->Rotation).ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(__return_storage_ptr__->Translation).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(__return_storage_ptr__->Translation).ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(__return_storage_ptr__->Scale3D).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(__return_storage_ptr__->Scale3D).ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  return __return_storage_ptr__;
}

// GetControlVector2D @ 14a261660

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TVector2<double> * __thiscall
UControlRigComponent::GetControlVector2D
          (UControlRigComponent *this,TVector2<double> *__return_storage_ptr__,FName param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  UControlRig *pUVar3;
  FRigControlElement *pFVar4;
  FRigControlValue *pFVar5;
  FRigElementKey local_a8;
  FRigControlValue local_98;
  
  pUVar3 = SetupControlRigIfRequired(this);
  if (pUVar3 != (UControlRig *)0x0) {
    local_a8.Type = Control;
    local_a8.Name = param_1;
    pFVar4 = URigHierarchy::Find<FRigControlElement>
                       ((pUVar3->DynamicHierarchy).field0_0x0.DebugPtr,&local_a8);
    if ((pFVar4 != (FRigControlElement *)0x0) && ((pFVar4->Settings).ControlType == Vector2D)) {
      pFVar5 = URigHierarchy::GetControlValue
                         ((pUVar3->DynamicHierarchy).field0_0x0.DebugPtr,&local_98,pFVar4,Current,
                          true);
      uVar1 = (pFVar5->FloatStorage).Float00;
      uVar2 = (pFVar5->FloatStorage).Float01;
      (__return_storage_ptr__->field0_0x0)._s_0.X = (double)(float)uVar1;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)(float)uVar2;
      return __return_storage_ptr__;
    }
  }
  (__return_storage_ptr__->field0_0x0)._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector;
  return __return_storage_ptr__;
}

// GetElementNames @ 14a263290

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
UControlRigComponent::GetElementNames
          (UControlRigComponent *this,
          TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,ERigElementType param_1)

{
  FScriptContainerElement *pFVar1;
  ERigElementType EVar2;
  int iVar3;
  URigHierarchy *pUVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  UControlRig *pUVar9;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res10 [8];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pUVar9 = SetupControlRigIfRequired(this);
  if (pUVar9 != (UControlRig *)0x0) {
    pUVar4 = (pUVar9->DynamicHierarchy).field0_0x0.DebugPtr;
    pFVar12 = (pUVar4->Elements).AllocatorInstance.Data;
    iVar3 = (pUVar4->Elements).ArrayNum;
    pFVar1 = pFVar12 + (longlong)iVar3 * 8;
    while( true ) {
      if ((pUVar4->Elements).ArrayNum != iVar3) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<FRigBaseElement_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (pFVar12 == pFVar1) break;
      EVar2 = *(ERigElementType *)(*(longlong *)pFVar12 + 0x10);
      if ((param_1 & EVar2) == EVar2) {
        pFVar5 = (__return_storage_ptr__->AllocatorInstance).Data;
        pFVar11 = (FScriptContainerElement *)(*(longlong *)pFVar12 + 0x14);
        if (((pFVar5 <= pFVar11) &&
            (pFVar11 < pFVar5 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar6 = (code *)swi(3);
          pTVar10 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
          return pTVar10;
        }
        iVar8 = __return_storage_ptr__->ArrayNum;
        if (iVar8 == __return_storage_ptr__->ArrayMax) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar8 + 1;
        *(undefined8 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 8) =
             *(undefined8 *)pFVar11;
      }
      pFVar12 = pFVar12 + 8;
    }
  }
  return __return_storage_ptr__;
}

// GetInitialBoneTransform @ 14a264710

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TTransform<double> * __thiscall
UControlRigComponent::GetInitialBoneTransform
          (UControlRigComponent *this,TTransform<double> *__return_storage_ptr__,FName param_1,
          EControlRigComponentSpace param_2)

{
  URigHierarchy *this_00;
  int iVar1;
  UControlRig *pUVar2;
  undefined1 auStack_b8 [32];
  FRigElementKey local_98;
  TTransform<double> local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_b8;
  pUVar2 = SetupControlRigIfRequired(this);
  if (pUVar2 != (UControlRig *)0x0) {
    local_98.Type = Bone;
    local_98.Name = param_1;
    iVar1 = URigHierarchy::GetIndex((pUVar2->DynamicHierarchy).field0_0x0.DebugPtr,&local_98,true);
    if (iVar1 != -1) {
      this_00 = (pUVar2->DynamicHierarchy).field0_0x0.DebugPtr;
      if (param_2 == LocalSpace) {
        URigHierarchy::GetLocalTransformByIndex(this_00,__return_storage_ptr__,iVar1,true);
        return __return_storage_ptr__;
      }
      URigHierarchy::GetGlobalTransformByIndex(this_00,&local_88,iVar1,true);
      ConvertTransformFromRigSpace(this,&local_88,param_2);
      (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = local_88.Rotation.XY.m128d_f64[0];
      (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = local_88.Rotation.XY.m128d_f64[1];
      (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = local_88.Rotation.ZW.m128d_f64[0];
      (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = local_88.Rotation.ZW.m128d_f64[1];
      (__return_storage_ptr__->Translation).XY.m128d_f64[0] = local_88.Translation.XY.m128d_f64[0];
      (__return_storage_ptr__->Translation).XY.m128d_f64[1] = local_88.Translation.XY.m128d_f64[1];
      (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = local_88.Translation.ZW.m128d_f64[0];
      (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = local_88.Translation.ZW.m128d_f64[1];
      (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = local_88.Scale3D.XY.m128d_f64[0];
      (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = local_88.Scale3D.XY.m128d_f64[1];
      goto LAB_14a264826;
    }
  }
  *&(__return_storage_ptr__->Rotation).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(__return_storage_ptr__->Rotation).ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(__return_storage_ptr__->Translation).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(__return_storage_ptr__->Translation).ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(__return_storage_ptr__->Scale3D).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  local_88.Scale3D.ZW.m128d_f64[0]._0_4_ =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._0_4_;
  local_88.Scale3D.ZW.m128d_f64[0]._4_4_ =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._4_4_;
  local_88.Scale3D.ZW.m128d_f64[1]._0_4_ =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._0_4_;
  local_88.Scale3D.ZW.m128d_f64[1]._4_4_ =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._4_4_;
LAB_14a264826:
  *(undefined4 *)(__return_storage_ptr__->Scale3D).ZW.m128d_f64 =
       local_88.Scale3D.ZW.m128d_f64[0]._0_4_;
  *(undefined4 *)((longlong)(__return_storage_ptr__->Scale3D).ZW.m128d_f64 + 4) =
       local_88.Scale3D.ZW.m128d_f64[0]._4_4_;
  *(undefined4 *)((__return_storage_ptr__->Scale3D).ZW.m128d_f64 + 1) =
       local_88.Scale3D.ZW.m128d_f64[1]._0_4_;
  *(undefined4 *)((longlong)(__return_storage_ptr__->Scale3D).ZW.m128d_f64 + 0xc) =
       local_88.Scale3D.ZW.m128d_f64[1]._4_4_;
  return __return_storage_ptr__;
}

// GetInitialSpaceTransform @ 14a264860

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TTransform<double> * __thiscall
UControlRigComponent::GetInitialSpaceTransform
          (UControlRigComponent *this,TTransform<double> *__return_storage_ptr__,FName param_1,
          EControlRigComponentSpace param_2)

{
  URigHierarchy *this_00;
  UControlRig *pUVar1;
  FRigNullElement *pFVar2;
  undefined1 auStack_b8 [32];
  FRigElementKey local_98;
  TTransform<double> local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_b8;
  pUVar1 = SetupControlRigIfRequired(this);
  if (pUVar1 != (UControlRig *)0x0) {
    local_98.Type = Control;
    local_98.Name = param_1;
    pFVar2 = URigHierarchy::Find<FRigNullElement>
                       ((pUVar1->DynamicHierarchy).field0_0x0.DebugPtr,&local_98);
    if (pFVar2 != (FRigNullElement *)0x0) {
      this_00 = (pUVar1->DynamicHierarchy).field0_0x0.DebugPtr;
      if (param_2 == LocalSpace) {
        URigHierarchy::GetTransform
                  (this_00,__return_storage_ptr__,(FRigTransformElement *)pFVar2,InitialLocal);
        return __return_storage_ptr__;
      }
      URigHierarchy::GetTransform(this_00,&local_88,(FRigTransformElement *)pFVar2,InitialGlobal);
      ConvertTransformFromRigSpace(this,&local_88,param_2);
      (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = local_88.Rotation.XY.m128d_f64[0];
      (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = local_88.Rotation.XY.m128d_f64[1];
      (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = local_88.Rotation.ZW.m128d_f64[0];
      (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = local_88.Rotation.ZW.m128d_f64[1];
      (__return_storage_ptr__->Translation).XY.m128d_f64[0] = local_88.Translation.XY.m128d_f64[0];
      (__return_storage_ptr__->Translation).XY.m128d_f64[1] = local_88.Translation.XY.m128d_f64[1];
      (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = local_88.Translation.ZW.m128d_f64[0];
      (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = local_88.Translation.ZW.m128d_f64[1];
      (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = local_88.Scale3D.XY.m128d_f64[0];
      (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = local_88.Scale3D.XY.m128d_f64[1];
      goto LAB_14a264979;
    }
  }
  *&(__return_storage_ptr__->Rotation).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(__return_storage_ptr__->Rotation).ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(__return_storage_ptr__->Translation).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(__return_storage_ptr__->Translation).ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(__return_storage_ptr__->Scale3D).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  local_88.Scale3D.ZW.m128d_f64[0]._0_4_ =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._0_4_;
  local_88.Scale3D.ZW.m128d_f64[0]._4_4_ =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._4_4_;
  local_88.Scale3D.ZW.m128d_f64[1]._0_4_ =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._0_4_;
  local_88.Scale3D.ZW.m128d_f64[1]._4_4_ =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._4_4_;
LAB_14a264979:
  *(undefined4 *)(__return_storage_ptr__->Scale3D).ZW.m128d_f64 =
       local_88.Scale3D.ZW.m128d_f64[0]._0_4_;
  *(undefined4 *)((longlong)(__return_storage_ptr__->Scale3D).ZW.m128d_f64 + 4) =
       local_88.Scale3D.ZW.m128d_f64[0]._4_4_;
  *(undefined4 *)((__return_storage_ptr__->Scale3D).ZW.m128d_f64 + 1) =
       local_88.Scale3D.ZW.m128d_f64[1]._0_4_;
  *(undefined4 *)((longlong)(__return_storage_ptr__->Scale3D).ZW.m128d_f64 + 0xc) =
       local_88.Scale3D.ZW.m128d_f64[1]._4_4_;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14a267c90

UClass * __cdecl UControlRigComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UControlRigComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ControlRig",L"ControlRigComponent",
               &Z_Registration_Info_UClass_UControlRigComponent.InnerSingleton,
               StaticRegisterNativesUControlRigComponent,0x720,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UControlRigComponent>,
               InternalVTableHelperCtorCaller<UControlRigComponent>,local_res8,
               UPrimitiveComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UControlRigComponent.InnerSingleton;
}

// GetSpaceTransform @ 14a26b890

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TTransform<double> * __thiscall
UControlRigComponent::GetSpaceTransform
          (UControlRigComponent *this,TTransform<double> *__return_storage_ptr__,FName param_1,
          EControlRigComponentSpace param_2)

{
  URigHierarchy *this_00;
  UControlRig *pUVar1;
  FRigNullElement *pFVar2;
  undefined1 auStack_b8 [32];
  FRigElementKey local_98;
  TTransform<double> local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_b8;
  pUVar1 = SetupControlRigIfRequired(this);
  if (pUVar1 != (UControlRig *)0x0) {
    local_98.Type = Control;
    local_98.Name = param_1;
    pFVar2 = URigHierarchy::Find<FRigNullElement>
                       ((pUVar1->DynamicHierarchy).field0_0x0.DebugPtr,&local_98);
    if (pFVar2 != (FRigNullElement *)0x0) {
      this_00 = (pUVar1->DynamicHierarchy).field0_0x0.DebugPtr;
      if (param_2 == LocalSpace) {
        URigHierarchy::GetTransform
                  (this_00,__return_storage_ptr__,(FRigTransformElement *)pFVar2,CurrentLocal);
        return __return_storage_ptr__;
      }
      URigHierarchy::GetTransform(this_00,&local_88,(FRigTransformElement *)pFVar2,CurrentGlobal);
      ConvertTransformFromRigSpace(this,&local_88,param_2);
      (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = local_88.Rotation.XY.m128d_f64[0];
      (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = local_88.Rotation.XY.m128d_f64[1];
      (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = local_88.Rotation.ZW.m128d_f64[0];
      (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = local_88.Rotation.ZW.m128d_f64[1];
      (__return_storage_ptr__->Translation).XY.m128d_f64[0] = local_88.Translation.XY.m128d_f64[0];
      (__return_storage_ptr__->Translation).XY.m128d_f64[1] = local_88.Translation.XY.m128d_f64[1];
      (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = local_88.Translation.ZW.m128d_f64[0];
      (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = local_88.Translation.ZW.m128d_f64[1];
      (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = local_88.Scale3D.XY.m128d_f64[0];
      (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = local_88.Scale3D.XY.m128d_f64[1];
      goto LAB_14a26b9ac;
    }
  }
  *&(__return_storage_ptr__->Rotation).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(__return_storage_ptr__->Rotation).ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(__return_storage_ptr__->Translation).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(__return_storage_ptr__->Translation).ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(__return_storage_ptr__->Scale3D).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  local_88.Scale3D.ZW.m128d_f64[0]._0_4_ =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._0_4_;
  local_88.Scale3D.ZW.m128d_f64[0]._4_4_ =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._4_4_;
  local_88.Scale3D.ZW.m128d_f64[1]._0_4_ =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._0_4_;
  local_88.Scale3D.ZW.m128d_f64[1]._4_4_ =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._4_4_;
LAB_14a26b9ac:
  *(undefined4 *)(__return_storage_ptr__->Scale3D).ZW.m128d_f64 =
       local_88.Scale3D.ZW.m128d_f64[0]._0_4_;
  *(undefined4 *)((longlong)(__return_storage_ptr__->Scale3D).ZW.m128d_f64 + 4) =
       local_88.Scale3D.ZW.m128d_f64[0]._4_4_;
  *(undefined4 *)((__return_storage_ptr__->Scale3D).ZW.m128d_f64 + 1) =
       local_88.Scale3D.ZW.m128d_f64[1]._0_4_;
  *(undefined4 *)((longlong)(__return_storage_ptr__->Scale3D).ZW.m128d_f64 + 0xc) =
       local_88.Scale3D.ZW.m128d_f64[1]._4_4_;
  return __return_storage_ptr__;
}

// HandleControlRigExecutedEvent @ 14a26dd80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UControlRigComponent::HandleControlRigExecutedEvent
          (UControlRigComponent *this,URigVMHost *param_1,FName *param_2)

{
  __m128d *p_Var1;
  ERigElementType EVar2;
  int iVar3;
  UControlRig *pUVar4;
  FScriptContainerElement *pFVar5;
  USceneComponent *pUVar6;
  FName FVar7;
  UInstancedStaticMeshComponent *this_00;
  code *pcVar8;
  double *pdVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  char cVar23;
  bool bVar24;
  uint uVar25;
  uint uVar26;
  int iVar27;
  UClass *pUVar28;
  longlong lVar29;
  FControlRigAnimInstanceProxy *pFVar30;
  float *pfVar31;
  TTransform<double> *pTVar32;
  ulonglong uVar33;
  FControlRigComponentMappedElement *pFVar34;
  FControlRigComponentMappedElement *pFVar35;
  FControlRigAnimInstanceProxy *pFVar36;
  FControlRigAnimInstanceProxy *pFVar37;
  float fVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  undefined4 uVar57;
  undefined4 uVar58;
  undefined4 uVar59;
  undefined4 uVar60;
  undefined4 uVar61;
  undefined4 uVar62;
  undefined1 auStack_558 [32];
  undefined1 uStack_528;
  undefined1 uStack_527;
  undefined1 auStack_526 [6];
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> TStack_520;
  FMeshPoseBoneIndex aFStack_510 [2];
  FControlRigComponentMappedElement *pFStack_508;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> TStack_500;
  USkeletalMeshComponent *pUStack_4f0;
  USkeletalMesh *pUStack_4e8;
  TTransform<double> TStack_4d8;
  TTransform<double> TStack_478;
  TTransform<double> TStack_418;
  TTransform<double> TStack_3b8;
  TTransform<double> TStack_358;
  TTransform<double> TStack_2f8;
  TTransform<double> TStack_298;
  TTransform<double> TStack_238;
  TTransform<double> TStack_1d8;
  TTransform<double> TStack_178;
  TTransform<double> TStack_118;
  ulonglong uStack_b8;
  
  uStack_b8 = __security_cookie.value ^ (ulonglong)auStack_558;
  pUVar4 = (this->ControlRig).field0_0x0.DebugPtr;
  if (pUVar4 != (UControlRig *)0x0) {
    cVar23 = (**(code **)(pUVar4->_padding_ + 0x490))();
    if (cVar23 == '\0') {
      iVar3 = (this->MappedElements).ArrayNum;
      pFVar30 = (FControlRigAnimInstanceProxy *)0x0;
      pFVar34 = (FControlRigComponentMappedElement *)(this->MappedElements).AllocatorInstance.Data;
      pFVar35 = pFVar34 + iVar3;
      pFVar37 = pFVar30;
      while( true ) {
        if ((this->MappedElements).ArrayNum != iVar3) {
          `TCheckedPointerIterator<FControlRigComponentMappedElement,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&uStack_527);
        }
        fVar10 = __real_3f800000;
        if (pFVar34 == pFVar35) break;
        pFVar36 = (FControlRigAnimInstanceProxy *)(pFVar34->SceneComponent).field0_0x0.DebugPtr;
        if (pFVar36 == (FControlRigAnimInstanceProxy *)0x0) {
          bVar24 = pFVar37 == (FControlRigAnimInstanceProxy *)0x0;
        }
        else {
          bVar24 = pFVar36 == pFVar37;
        }
        if (((!bVar24) || (pFVar30 == (FControlRigAnimInstanceProxy *)0x0)) &&
           (pFVar30 = FControlRigComponentMappedElement::GetAnimProxyOnGameThread(pFVar34),
           pFVar30 != (FControlRigAnimInstanceProxy *)0x0)) {
          TSet<TTuple<FMeshPoseBoneIndex,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<FMeshPoseBoneIndex,UE::Math::TTransform<double>,0>,FDefaultSetAllocator>
          ::Reset((TSet<TTuple<FMeshPoseBoneIndex,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<FMeshPoseBoneIndex,UE::Math::TTransform<double>,0>,FDefaultSetAllocator>
                   *)&pFVar30->StoredTransforms);
          TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
          ::Reset((TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
                   *)&pFVar30->StoredCurves);
          UE::Anim::TAttributeContainer<FMeshPoseBoneIndex,TSizedDefaultAllocator<32>_>::Empty
                    ((TAttributeContainer<FMeshPoseBoneIndex,TSizedDefaultAllocator<32>_> *)
                     &pFVar30->StoredAttributes);
          pFVar37 = (FControlRigAnimInstanceProxy *)(pFVar34->SceneComponent).field0_0x0.DebugPtr;
        }
        pFVar34 = pFVar34 + 1;
      }
      iVar3 = (this->MappedElements).ArrayNum;
      uVar33 = (ulonglong)iVar3;
      pFVar34 = (FControlRigComponentMappedElement *)(this->MappedElements).AllocatorInstance.Data;
      pFStack_508 = (FControlRigComponentMappedElement *)CONCAT44(pFStack_508._4_4_,iVar3);
      pFVar35 = pFVar34 + uVar33;
LAB_14a29d400:
      if ((this->MappedElements).ArrayNum != (int)uVar33) {
        `TCheckedPointerIterator<FControlRigComponentMappedElement,int,0>::operator!='::__l2::
        <lambda_1>::operator()(auStack_526);
      }
      if (pFVar34 == pFVar35) {
        if (pFVar30 == (FControlRigAnimInstanceProxy *)0x0) {
          return;
        }
        UE::Anim::TAttributeContainer<FMeshPoseBoneIndex,TSizedDefaultAllocator<32>_>::CopyFrom
                  ((TAttributeContainer<FMeshPoseBoneIndex,TSizedDefaultAllocator<32>_> *)
                   &pFVar30->StoredAttributes,
                   (TAttributeContainer<FMeshPoseBoneIndex,TSizedDefaultAllocator<32>_> *)
                   &this->TempAttributeContainer);
        return;
      }
      if ((((pFVar34->ElementIndex != -1) && (pFVar34->Direction != Input)) &&
          (pUVar6 = (pFVar34->SceneComponent).field0_0x0.DebugPtr, pUVar6 != (USceneComponent *)0x0)
          ) && (((uint)pUVar6->_padding_ >> 0x1e & 1) == 0)) {
        EVar2 = pFVar34->ElementType;
        if ((EVar2 != Bone) && ((EVar2 - Null & 0xfd) != 0)) {
          if ((EVar2 != Curve) || (pFVar34->ElementIndex < 0)) goto LAB_14a29da62;
          pFVar36 = (FControlRigAnimInstanceProxy *)(pFVar34->SceneComponent).field0_0x0.DebugPtr;
          if (pFVar36 == (FControlRigAnimInstanceProxy *)0x0) {
            bVar24 = pFVar37 == (FControlRigAnimInstanceProxy *)0x0;
          }
          else {
            bVar24 = pFVar36 == pFVar37;
          }
          if ((!bVar24) || (pFVar30 == (FControlRigAnimInstanceProxy *)0x0)) {
            pFVar30 = FControlRigComponentMappedElement::GetAnimProxyOnGameThread(pFVar34);
            if (pFVar30 == (FControlRigAnimInstanceProxy *)0x0) goto LAB_14a29da62;
            pFVar37 = (FControlRigAnimInstanceProxy *)(pFVar34->SceneComponent).field0_0x0.DebugPtr;
          }
          fVar38 = URigHierarchy::GetCurveValueByIndex
                             ((((this->ControlRig).field0_0x0.DebugPtr)->DynamicHierarchy).
                              field0_0x0.DebugPtr,pFVar34->ElementIndex);
          FVar7 = pFVar34->TransformName;
          uVar26 = ::GetTypeHash(FVar7.ComparisonIndex.Value);
          pfVar31 = TMapBase<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>
                    ::FindOrAddImpl<FName_const_&>
                              ((TMapBase<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>
                                *)&pFVar30->StoredCurves,uVar26 + FVar7.Number,
                               &pFVar34->TransformName);
          uVar33 = (ulonglong)pFStack_508 & 0xffffffff;
          pFVar34 = pFVar34 + 1;
          *pfVar31 = fVar38;
          goto LAB_14a29d400;
        }
        URigHierarchy::GetGlobalTransformByIndex
                  ((((this->ControlRig).field0_0x0.DebugPtr)->DynamicHierarchy).field0_0x0.DebugPtr,
                   &TStack_4d8,pFVar34->ElementIndex,false);
        if (pFVar34->Space == WorldSpace) {
          TStack_418.Rotation.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
          TStack_418.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0]
          ;
          TStack_418.Rotation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
          TStack_418.Rotation.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
          TStack_418.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2]
          ;
          TStack_418.Rotation.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
          TStack_418.Translation.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
          TStack_418.Translation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          TStack_418.Translation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
          TStack_418.Translation.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
          TStack_418.Translation.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[2];
          TStack_418.Translation.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
          TStack_418.Scale3D.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
          TStack_418.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          TStack_418.Scale3D.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
          TStack_418.Scale3D.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
          TStack_418.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          TStack_418.Scale3D.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
          UE::Math::TTransform<double>::Multiply
                    (&TStack_418,&TStack_4d8,(TTransform<double> *)&this->_padding_);
          TStack_4d8.Rotation.XY.m128d_f64[0] = TStack_418.Rotation.XY.m128d_f64[0];
          TStack_4d8.Rotation.XY.m128d_f64[1] = TStack_418.Rotation.XY.m128d_f64[1];
          TStack_4d8.Rotation.ZW.m128d_f64[0] = TStack_418.Rotation.ZW.m128d_f64[0];
          TStack_4d8.Rotation.ZW.m128d_f64[1] = TStack_418.Rotation.ZW.m128d_f64[1];
          TStack_4d8.Translation.XY.m128d_f64[0] = TStack_418.Translation.XY.m128d_f64[0];
          TStack_4d8.Translation.XY.m128d_f64[1] = TStack_418.Translation.XY.m128d_f64[1];
          TStack_4d8.Translation.ZW.m128d_f64[0] = TStack_418.Translation.ZW.m128d_f64[0];
          TStack_4d8.Translation.ZW.m128d_f64[1] = TStack_418.Translation.ZW.m128d_f64[1];
          uVar39 = TStack_418.Scale3D.XY.m128d_f64[0]._0_4_;
          uVar40 = TStack_418.Scale3D.XY.m128d_f64[0]._4_4_;
          uVar41 = TStack_418.Scale3D.XY.m128d_f64[1]._0_4_;
          uVar42 = TStack_418.Scale3D.XY.m128d_f64[1]._4_4_;
          uVar43 = TStack_418.Scale3D.ZW.m128d_f64[0]._0_4_;
          uVar44 = TStack_418.Scale3D.ZW.m128d_f64[0]._4_4_;
          uVar45 = TStack_418.Scale3D.ZW.m128d_f64[1]._0_4_;
          uVar46 = TStack_418.Scale3D.ZW.m128d_f64[1]._4_4_;
LAB_14a29d668:
          TStack_4d8.Scale3D.ZW.m128d_f64[0] = (double)CONCAT44(uVar44,uVar43);
          TStack_4d8.Scale3D.ZW.m128d_f64[1] = (double)CONCAT44(uVar46,uVar45);
          TStack_4d8.Scale3D.XY.m128d_f64[0] = (double)CONCAT44(uVar40,uVar39);
          TStack_4d8.Scale3D.XY.m128d_f64[1] = (double)CONCAT44(uVar42,uVar41);
        }
        else if (pFVar34->Space == ActorSpace) {
          pTVar32 = USceneComponent::GetRelativeTransform((USceneComponent *)this,&TStack_238);
          TStack_478.Rotation.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
          TStack_478.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0]
          ;
          TStack_478.Rotation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
          TStack_478.Rotation.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
          TStack_478.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2]
          ;
          TStack_478.Rotation.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
          TStack_478.Translation.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
          TStack_478.Translation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          TStack_478.Translation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
          TStack_478.Translation.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
          TStack_478.Translation.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[2];
          TStack_478.Translation.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
          TStack_478.Scale3D.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
          TStack_478.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          TStack_478.Scale3D.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
          TStack_478.Scale3D.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
          TStack_478.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          TStack_478.Scale3D.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
          UE::Math::TTransform<double>::Multiply(&TStack_478,&TStack_4d8,pTVar32);
          TStack_4d8.Rotation.XY.m128d_f64[0] = TStack_478.Rotation.XY.m128d_f64[0];
          TStack_4d8.Rotation.XY.m128d_f64[1] = TStack_478.Rotation.XY.m128d_f64[1];
          TStack_4d8.Rotation.ZW.m128d_f64[0] = TStack_478.Rotation.ZW.m128d_f64[0];
          TStack_4d8.Rotation.ZW.m128d_f64[1] = TStack_478.Rotation.ZW.m128d_f64[1];
          TStack_4d8.Translation.XY.m128d_f64[0] = TStack_478.Translation.XY.m128d_f64[0];
          TStack_4d8.Translation.XY.m128d_f64[1] = TStack_478.Translation.XY.m128d_f64[1];
          TStack_4d8.Translation.ZW.m128d_f64[0] = TStack_478.Translation.ZW.m128d_f64[0];
          TStack_4d8.Translation.ZW.m128d_f64[1] = TStack_478.Translation.ZW.m128d_f64[1];
          uVar39 = TStack_478.Scale3D.XY.m128d_f64[0]._0_4_;
          uVar40 = TStack_478.Scale3D.XY.m128d_f64[0]._4_4_;
          uVar41 = TStack_478.Scale3D.XY.m128d_f64[1]._0_4_;
          uVar42 = TStack_478.Scale3D.XY.m128d_f64[1]._4_4_;
          uVar43 = TStack_478.Scale3D.ZW.m128d_f64[0]._0_4_;
          uVar44 = TStack_478.Scale3D.ZW.m128d_f64[0]._4_4_;
          uVar45 = TStack_478.Scale3D.ZW.m128d_f64[1]._0_4_;
          uVar46 = TStack_478.Scale3D.ZW.m128d_f64[1]._4_4_;
          goto LAB_14a29d668;
        }
        TStack_3b8.Rotation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
        TStack_3b8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        TStack_3b8.Rotation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
        TStack_3b8.Rotation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
        TStack_3b8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        TStack_3b8.Rotation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
        TStack_3b8.Translation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
        TStack_3b8.Translation.XY.m128d_f64[0] =
             (double)GlobalVectorConstants::FloatZero.m128_f32[0];
        TStack_3b8.Translation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
        TStack_3b8.Translation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
        TStack_3b8.Translation.ZW.m128d_f64[0] =
             (double)GlobalVectorConstants::FloatZero.m128_f32[2];
        TStack_3b8.Translation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
        TStack_3b8.Scale3D.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
        TStack_3b8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        TStack_3b8.Scale3D.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
        TStack_3b8.Scale3D.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
        TStack_3b8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        TStack_3b8.Scale3D.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
        UE::Math::TTransform<double>::Multiply(&TStack_3b8,&TStack_4d8,&pFVar34->Offset);
        TStack_4d8.Rotation.XY.m128d_f64[0] = TStack_3b8.Rotation.XY.m128d_f64[0];
        TStack_4d8.Rotation.XY.m128d_f64[1] = TStack_3b8.Rotation.XY.m128d_f64[1];
        TStack_4d8.Rotation.ZW.m128d_f64[0] = TStack_3b8.Rotation.ZW.m128d_f64[0];
        TStack_4d8.Rotation.ZW.m128d_f64[1] = TStack_3b8.Rotation.ZW.m128d_f64[1];
        TStack_4d8.Translation.XY.m128d_f64[0] = TStack_3b8.Translation.XY.m128d_f64[0];
        TStack_4d8.Translation.XY.m128d_f64[1] = TStack_3b8.Translation.XY.m128d_f64[1];
        TStack_4d8.Translation.ZW.m128d_f64[0] = TStack_3b8.Translation.ZW.m128d_f64[0];
        TStack_4d8.Translation.ZW.m128d_f64[1] = TStack_3b8.Translation.ZW.m128d_f64[1];
        TStack_4d8.Scale3D.XY.m128d_f64[0] = TStack_3b8.Scale3D.XY.m128d_f64[0];
        TStack_4d8.Scale3D.XY.m128d_f64[1] = TStack_3b8.Scale3D.XY.m128d_f64[1];
        TStack_4d8.Scale3D.ZW.m128d_f64[0] = TStack_3b8.Scale3D.ZW.m128d_f64[0];
        TStack_4d8.Scale3D.ZW.m128d_f64[1] = TStack_3b8.Scale3D.ZW.m128d_f64[1];
        if (pFVar34->SubIndex < 0) {
          fVar38 = pFVar34->Weight;
          if (fVar38 < fVar10) {
            pUVar6 = (pFVar34->SceneComponent).field0_0x0.DebugPtr;
            if (fVar10 <= fVar38) {
              fVar38 = fVar10;
            }
            TStack_298.Rotation.XY.m128d_f64[0] =
                 (pUVar6->ComponentToWorld).Rotation.XY.m128d_f64[0];
            TStack_298.Rotation.XY.m128d_f64[1] =
                 (pUVar6->ComponentToWorld).Rotation.XY.m128d_f64[1];
            if (fVar38 <= 0.0) {
              fVar38 = 0.0;
            }
            TStack_298.Rotation.ZW.m128d_f64[0] =
                 (pUVar6->ComponentToWorld).Rotation.ZW.m128d_f64[0];
            TStack_298.Rotation.ZW.m128d_f64[1] =
                 (pUVar6->ComponentToWorld).Rotation.ZW.m128d_f64[1];
            TStack_298.Translation.XY.m128d_f64[0] =
                 (pUVar6->ComponentToWorld).Translation.XY.m128d_f64[0];
            TStack_298.Translation.XY.m128d_f64[1] =
                 (pUVar6->ComponentToWorld).Translation.XY.m128d_f64[1];
            TStack_298.Translation.ZW.m128d_f64[0] =
                 (pUVar6->ComponentToWorld).Translation.ZW.m128d_f64[0];
            TStack_298.Translation.ZW.m128d_f64[1] =
                 (pUVar6->ComponentToWorld).Translation.ZW.m128d_f64[1];
            TStack_298.Scale3D.XY.m128d_f64[0] = (pUVar6->ComponentToWorld).Scale3D.XY.m128d_f64[0];
            TStack_298.Scale3D.XY.m128d_f64[1] = (pUVar6->ComponentToWorld).Scale3D.XY.m128d_f64[1];
            TStack_298.Scale3D.ZW.m128d_f64[0] = (pUVar6->ComponentToWorld).Scale3D.ZW.m128d_f64[0];
            TStack_298.Scale3D.ZW.m128d_f64[1] = (pUVar6->ComponentToWorld).Scale3D.ZW.m128d_f64[1];
            pTVar32 = FRigVMMathLibrary::LerpTransform(&TStack_118,&TStack_298,&TStack_4d8,fVar38);
            TStack_4d8.Rotation.XY.m128d_f64[0] = (pTVar32->Rotation).XY.m128d_f64[0];
            TStack_4d8.Rotation.XY.m128d_f64[1] = (pTVar32->Rotation).XY.m128d_f64[1];
            TStack_4d8.Rotation.ZW.m128d_f64[0] = (pTVar32->Rotation).ZW.m128d_f64[0];
            TStack_4d8.Rotation.ZW.m128d_f64[1] = (pTVar32->Rotation).ZW.m128d_f64[1];
            TStack_4d8.Translation.XY.m128d_f64[0] = (pTVar32->Translation).XY.m128d_f64[0];
            TStack_4d8.Translation.XY.m128d_f64[1] = (pTVar32->Translation).XY.m128d_f64[1];
            TStack_4d8.Translation.ZW.m128d_f64[0] = (pTVar32->Translation).ZW.m128d_f64[0];
            TStack_4d8.Translation.ZW.m128d_f64[1] = (pTVar32->Translation).ZW.m128d_f64[1];
            TStack_4d8.Scale3D.XY.m128d_f64[0] = (pTVar32->Scale3D).XY.m128d_f64[0];
            TStack_4d8.Scale3D.XY.m128d_f64[1] = (pTVar32->Scale3D).XY.m128d_f64[1];
            TStack_4d8.Scale3D.ZW.m128d_f64[0] = (pTVar32->Scale3D).ZW.m128d_f64[0];
            TStack_4d8.Scale3D.ZW.m128d_f64[1] = (pTVar32->Scale3D).ZW.m128d_f64[1];
          }
          USceneComponent::SetWorldTransform
                    ((pFVar34->SceneComponent).field0_0x0.DebugPtr,&TStack_4d8,false,
                     (FHitResult *)0x0,None);
          goto LAB_14a29da62;
        }
        pFVar36 = (FControlRigAnimInstanceProxy *)(pFVar34->SceneComponent).field0_0x0.DebugPtr;
        if (pFVar36 == (FControlRigAnimInstanceProxy *)0x0) {
          bVar24 = pFVar37 == (FControlRigAnimInstanceProxy *)0x0;
        }
        else {
          bVar24 = pFVar36 == pFVar37;
        }
        if ((bVar24) &&
           (uVar39 = TStack_3b8.Rotation.XY.m128d_f64[0]._0_4_,
           uVar40 = TStack_3b8.Rotation.XY.m128d_f64[0]._4_4_,
           uVar41 = TStack_3b8.Rotation.XY.m128d_f64[1]._0_4_,
           uVar42 = TStack_3b8.Rotation.XY.m128d_f64[1]._4_4_,
           uVar43 = TStack_3b8.Rotation.ZW.m128d_f64[0]._0_4_,
           uVar44 = TStack_3b8.Rotation.ZW.m128d_f64[0]._4_4_,
           uVar45 = TStack_3b8.Rotation.ZW.m128d_f64[1]._0_4_,
           uVar46 = TStack_3b8.Rotation.ZW.m128d_f64[1]._4_4_,
           uVar47 = TStack_3b8.Translation.XY.m128d_f64[0]._0_4_,
           uVar48 = TStack_3b8.Translation.XY.m128d_f64[0]._4_4_,
           uVar49 = TStack_3b8.Translation.XY.m128d_f64[1]._0_4_,
           uVar50 = TStack_3b8.Translation.XY.m128d_f64[1]._4_4_,
           uVar51 = TStack_3b8.Translation.ZW.m128d_f64[0]._0_4_,
           uVar52 = TStack_3b8.Translation.ZW.m128d_f64[0]._4_4_,
           uVar53 = TStack_3b8.Translation.ZW.m128d_f64[1]._0_4_,
           uVar54 = TStack_3b8.Translation.ZW.m128d_f64[1]._4_4_,
           uVar55 = TStack_3b8.Scale3D.XY.m128d_f64[0]._0_4_,
           uVar56 = TStack_3b8.Scale3D.XY.m128d_f64[0]._4_4_,
           uVar57 = TStack_3b8.Scale3D.XY.m128d_f64[1]._0_4_,
           uVar58 = TStack_3b8.Scale3D.XY.m128d_f64[1]._4_4_,
           uVar59 = TStack_3b8.Scale3D.ZW.m128d_f64[0]._0_4_,
           uVar60 = TStack_3b8.Scale3D.ZW.m128d_f64[0]._4_4_,
           uVar61 = TStack_3b8.Scale3D.ZW.m128d_f64[1]._0_4_,
           uVar62 = TStack_3b8.Scale3D.ZW.m128d_f64[1]._4_4_,
           pFVar30 != (FControlRigAnimInstanceProxy *)0x0)) {
LAB_14a29d78f:
          if (pFVar36 != (FControlRigAnimInstanceProxy *)0x0) {
            if (pFVar34->Space == WorldSpace) {
              pTVar32 = UE::Math::TTransform<double>::GetRelativeTransform
                                  (&TStack_4d8,&TStack_1d8,
                                   (TTransform<double> *)&pFVar36->field_0x1f0);
              uVar39 = *(undefined4 *)(pTVar32->Rotation).XY.m128d_f64;
              uVar40 = *(undefined4 *)((longlong)(pTVar32->Rotation).XY.m128d_f64 + 4);
              TStack_4d8.Rotation.XY.m128d_f64[0] = (pTVar32->Rotation).XY.m128d_f64[0];
              pdVar9 = (pTVar32->Rotation).XY.m128d_f64 + 1;
              uVar41 = *(undefined4 *)pdVar9;
              uVar42 = *(undefined4 *)((longlong)(pTVar32->Rotation).XY.m128d_f64 + 0xc);
              TStack_4d8.Rotation.XY.m128d_f64[1] = *pdVar9;
              p_Var1 = &(pTVar32->Rotation).ZW;
              uVar43 = *(undefined4 *)p_Var1->m128d_f64;
              uVar44 = *(undefined4 *)((longlong)(pTVar32->Rotation).ZW.m128d_f64 + 4);
              TStack_4d8.Rotation.ZW.m128d_f64[0] = p_Var1->m128d_f64[0];
              pdVar9 = (pTVar32->Rotation).ZW.m128d_f64 + 1;
              uVar45 = *(undefined4 *)pdVar9;
              uVar46 = *(undefined4 *)((longlong)(pTVar32->Rotation).ZW.m128d_f64 + 0xc);
              TStack_4d8.Rotation.ZW.m128d_f64[1] = *pdVar9;
              uVar47 = *(undefined4 *)(pTVar32->Translation).XY.m128d_f64;
              uVar48 = *(undefined4 *)((longlong)(pTVar32->Translation).XY.m128d_f64 + 4);
              TStack_4d8.Translation.XY.m128d_f64[0] = (pTVar32->Translation).XY.m128d_f64[0];
              pdVar9 = (pTVar32->Translation).XY.m128d_f64 + 1;
              uVar49 = *(undefined4 *)pdVar9;
              uVar50 = *(undefined4 *)((longlong)(pTVar32->Translation).XY.m128d_f64 + 0xc);
              TStack_4d8.Translation.XY.m128d_f64[1] = *pdVar9;
              p_Var1 = &(pTVar32->Translation).ZW;
              uVar51 = *(undefined4 *)p_Var1->m128d_f64;
              uVar52 = *(undefined4 *)((longlong)(pTVar32->Translation).ZW.m128d_f64 + 4);
              TStack_4d8.Translation.ZW.m128d_f64[0] = p_Var1->m128d_f64[0];
              pdVar9 = (pTVar32->Translation).ZW.m128d_f64 + 1;
              uVar53 = *(undefined4 *)pdVar9;
              uVar54 = *(undefined4 *)((longlong)(pTVar32->Translation).ZW.m128d_f64 + 0xc);
              TStack_4d8.Translation.ZW.m128d_f64[1] = *pdVar9;
              uVar55 = *(undefined4 *)(pTVar32->Scale3D).XY.m128d_f64;
              uVar56 = *(undefined4 *)((longlong)(pTVar32->Scale3D).XY.m128d_f64 + 4);
              TStack_4d8.Scale3D.XY.m128d_f64[0] = (pTVar32->Scale3D).XY.m128d_f64[0];
              pdVar9 = (pTVar32->Scale3D).XY.m128d_f64 + 1;
              uVar57 = *(undefined4 *)pdVar9;
              uVar58 = *(undefined4 *)((longlong)(pTVar32->Scale3D).XY.m128d_f64 + 0xc);
              TStack_4d8.Scale3D.XY.m128d_f64[1] = *pdVar9;
              p_Var1 = &(pTVar32->Scale3D).ZW;
              uVar59 = *(undefined4 *)p_Var1->m128d_f64;
              uVar60 = *(undefined4 *)((longlong)(pTVar32->Scale3D).ZW.m128d_f64 + 4);
              TStack_4d8.Scale3D.ZW.m128d_f64[0] = p_Var1->m128d_f64[0];
              pdVar9 = (pTVar32->Scale3D).ZW.m128d_f64 + 1;
              uVar61 = *(undefined4 *)pdVar9;
              uVar62 = *(undefined4 *)((longlong)(pTVar32->Scale3D).ZW.m128d_f64 + 0xc);
              TStack_4d8.Scale3D.ZW.m128d_f64[1] = *pdVar9;
            }
            aFStack_510[0] = (FMeshPoseBoneIndex)pFVar34->SubIndex;
            pTVar32 = TMapBase<FMeshPoseBoneIndex,UE::Math::TTransform<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMeshPoseBoneIndex,UE::Math::TTransform<double>,0>_>
                      ::FindOrAddImpl<FMeshPoseBoneIndex>
                                ((TMapBase<FMeshPoseBoneIndex,UE::Math::TTransform<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMeshPoseBoneIndex,UE::Math::TTransform<double>,0>_>
                                  *)&pFVar30->StoredTransforms,(uint)aFStack_510[0],aFStack_510);
            uVar33 = (ulonglong)pFStack_508 & 0xffffffff;
            pFVar34 = pFVar34 + 1;
            *(undefined4 *)(pTVar32->Rotation).XY.m128d_f64 = uVar39;
            *(undefined4 *)((longlong)(pTVar32->Rotation).XY.m128d_f64 + 4) = uVar40;
            *(undefined4 *)((pTVar32->Rotation).XY.m128d_f64 + 1) = uVar41;
            *(undefined4 *)((longlong)(pTVar32->Rotation).XY.m128d_f64 + 0xc) = uVar42;
            *(undefined4 *)(pTVar32->Rotation).ZW.m128d_f64 = uVar43;
            *(undefined4 *)((longlong)(pTVar32->Rotation).ZW.m128d_f64 + 4) = uVar44;
            *(undefined4 *)((pTVar32->Rotation).ZW.m128d_f64 + 1) = uVar45;
            *(undefined4 *)((longlong)(pTVar32->Rotation).ZW.m128d_f64 + 0xc) = uVar46;
            *(undefined4 *)(pTVar32->Translation).XY.m128d_f64 = uVar47;
            *(undefined4 *)((longlong)(pTVar32->Translation).XY.m128d_f64 + 4) = uVar48;
            *(undefined4 *)((pTVar32->Translation).XY.m128d_f64 + 1) = uVar49;
            *(undefined4 *)((longlong)(pTVar32->Translation).XY.m128d_f64 + 0xc) = uVar50;
            *(undefined4 *)(pTVar32->Translation).ZW.m128d_f64 = uVar51;
            *(undefined4 *)((longlong)(pTVar32->Translation).ZW.m128d_f64 + 4) = uVar52;
            *(undefined4 *)((pTVar32->Translation).ZW.m128d_f64 + 1) = uVar53;
            *(undefined4 *)((longlong)(pTVar32->Translation).ZW.m128d_f64 + 0xc) = uVar54;
            *(undefined4 *)(pTVar32->Scale3D).XY.m128d_f64 = uVar55;
            *(undefined4 *)((longlong)(pTVar32->Scale3D).XY.m128d_f64 + 4) = uVar56;
            *(undefined4 *)((pTVar32->Scale3D).XY.m128d_f64 + 1) = uVar57;
            *(undefined4 *)((longlong)(pTVar32->Scale3D).XY.m128d_f64 + 0xc) = uVar58;
            *(undefined4 *)(pTVar32->Scale3D).ZW.m128d_f64 = uVar59;
            *(undefined4 *)((longlong)(pTVar32->Scale3D).ZW.m128d_f64 + 4) = uVar60;
            *(undefined4 *)((pTVar32->Scale3D).ZW.m128d_f64 + 1) = uVar61;
            *(undefined4 *)((longlong)(pTVar32->Scale3D).ZW.m128d_f64 + 0xc) = uVar62;
            goto LAB_14a29d400;
          }
        }
        else {
          pFVar30 = FControlRigComponentMappedElement::GetAnimProxyOnGameThread(pFVar34);
          if (pFVar30 != (FControlRigAnimInstanceProxy *)0x0) {
            pFVar36 = (FControlRigAnimInstanceProxy *)(pFVar34->SceneComponent).field0_0x0.DebugPtr;
            pFVar37 = pFVar36;
            uVar39 = TStack_4d8.Rotation.XY.m128d_f64[0]._0_4_;
            uVar40 = TStack_4d8.Rotation.XY.m128d_f64[0]._4_4_;
            uVar41 = TStack_4d8.Rotation.XY.m128d_f64[1]._0_4_;
            uVar42 = TStack_4d8.Rotation.XY.m128d_f64[1]._4_4_;
            uVar43 = TStack_4d8.Rotation.ZW.m128d_f64[0]._0_4_;
            uVar44 = TStack_4d8.Rotation.ZW.m128d_f64[0]._4_4_;
            uVar45 = TStack_4d8.Rotation.ZW.m128d_f64[1]._0_4_;
            uVar46 = TStack_4d8.Rotation.ZW.m128d_f64[1]._4_4_;
            uVar47 = TStack_4d8.Translation.XY.m128d_f64[0]._0_4_;
            uVar48 = TStack_4d8.Translation.XY.m128d_f64[0]._4_4_;
            uVar49 = TStack_4d8.Translation.XY.m128d_f64[1]._0_4_;
            uVar50 = TStack_4d8.Translation.XY.m128d_f64[1]._4_4_;
            uVar51 = TStack_4d8.Translation.ZW.m128d_f64[0]._0_4_;
            uVar52 = TStack_4d8.Translation.ZW.m128d_f64[0]._4_4_;
            uVar53 = TStack_4d8.Translation.ZW.m128d_f64[1]._0_4_;
            uVar54 = TStack_4d8.Translation.ZW.m128d_f64[1]._4_4_;
            uVar55 = TStack_4d8.Scale3D.XY.m128d_f64[0]._0_4_;
            uVar56 = TStack_4d8.Scale3D.XY.m128d_f64[0]._4_4_;
            uVar57 = TStack_4d8.Scale3D.XY.m128d_f64[1]._0_4_;
            uVar58 = TStack_4d8.Scale3D.XY.m128d_f64[1]._4_4_;
            uVar59 = TStack_4d8.Scale3D.ZW.m128d_f64[0]._0_4_;
            uVar60 = TStack_4d8.Scale3D.ZW.m128d_f64[0]._4_4_;
            uVar61 = TStack_4d8.Scale3D.ZW.m128d_f64[1]._0_4_;
            uVar62 = TStack_4d8.Scale3D.ZW.m128d_f64[1]._4_4_;
            goto LAB_14a29d78f;
          }
        }
        if ((pFVar34->SceneComponent).field0_0x0.DebugPtr == (USceneComponent *)0x0)
        goto LAB_14a29da62;
        pUVar28 = Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
        bVar24 = FObjectPtr::IsA((FObjectPtr *)&pFVar34->SceneComponent,pUVar28);
        if ((bVar24) &&
           (this_00 = (UInstancedStaticMeshComponent *)(pFVar34->SceneComponent).field0_0x0.DebugPtr
           , this_00 != (UInstancedStaticMeshComponent *)0x0)) {
          iVar3 = pFVar34->SubIndex;
          iVar27 = (**(code **)(this_00->_padding_ + 0xc68))(this_00);
          if (iVar3 < iVar27) {
            if (pFVar34->Weight <= fVar10 && fVar10 != pFVar34->Weight) {
              TStack_358.Rotation.XY.m128d_f64 =
                   UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
              TStack_358.Rotation.ZW.m128d_f64 =
                   UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
              TStack_358.Translation.XY.m128d_f64 =
                   UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
              TStack_358.Translation.ZW.m128d_f64 =
                   UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
              TStack_358.Scale3D.XY.m128d_f64 =
                   UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
              TStack_358.Scale3D.ZW.m128d_f64 =
                   UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
              UInstancedStaticMeshComponent::GetInstanceTransform(this_00,iVar3,&TStack_358,true);
              fVar38 = pFVar34->Weight;
              if (fVar10 <= pFVar34->Weight) {
                fVar38 = fVar10;
              }
              if (fVar38 <= 0.0) {
                fVar38 = 0.0;
              }
              pTVar32 = FRigVMMathLibrary::LerpTransform(&TStack_178,&TStack_358,&TStack_4d8,fVar38)
              ;
              TStack_4d8.Rotation.XY.m128d_f64[0] = (pTVar32->Rotation).XY.m128d_f64[0];
              TStack_4d8.Rotation.XY.m128d_f64[1] = (pTVar32->Rotation).XY.m128d_f64[1];
              TStack_4d8.Rotation.ZW.m128d_f64[0] = (pTVar32->Rotation).ZW.m128d_f64[0];
              TStack_4d8.Rotation.ZW.m128d_f64[1] = (pTVar32->Rotation).ZW.m128d_f64[1];
              TStack_4d8.Translation.XY.m128d_f64[0] = (pTVar32->Translation).XY.m128d_f64[0];
              TStack_4d8.Translation.XY.m128d_f64[1] = (pTVar32->Translation).XY.m128d_f64[1];
              TStack_4d8.Translation.ZW.m128d_f64[0] = (pTVar32->Translation).ZW.m128d_f64[0];
              TStack_4d8.Translation.ZW.m128d_f64[1] = (pTVar32->Translation).ZW.m128d_f64[1];
              TStack_4d8.Scale3D.XY.m128d_f64[0] = (pTVar32->Scale3D).XY.m128d_f64[0];
              TStack_4d8.Scale3D.XY.m128d_f64[1] = (pTVar32->Scale3D).XY.m128d_f64[1];
              TStack_4d8.Scale3D.ZW.m128d_f64[0] = (pTVar32->Scale3D).ZW.m128d_f64[0];
              TStack_4d8.Scale3D.ZW.m128d_f64[1] = (pTVar32->Scale3D).ZW.m128d_f64[1];
            }
            (**(code **)(this_00->_padding_ + 0xbf0))(this_00,pFVar34->SubIndex,&TStack_4d8);
            uVar33 = (ulonglong)pFStack_508 & 0xffffffff;
            pFVar34 = pFVar34 + 1;
            goto LAB_14a29d400;
          }
        }
      }
LAB_14a29da62:
      uVar33 = (ulonglong)pFStack_508 & 0xffffffff;
      pFVar34 = pFVar34 + 1;
      goto LAB_14a29d400;
    }
    if ((0 < (this->MappedElements).ArrayNum) &&
       (pFVar5 = (this->MappedElements).AllocatorInstance.Data, *(longlong *)(pFVar5 + 0xd8) != 0))
    {
      pUVar28 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
      bVar24 = FObjectPtr::IsA((FObjectPtr *)(pFVar5 + 0xd8),pUVar28);
      if ((bVar24) &&
         ((pUStack_4f0 = *(USkeletalMeshComponent **)(pFVar5 + 0xd8),
          pUStack_4f0 != (USkeletalMeshComponent *)0x0 &&
          (pUStack_4e8 = USkeletalMeshComponent::GetSkeletalMeshAsset(pUStack_4f0),
          pUStack_4e8 != (USkeletalMesh *)0x0)))) {
        pFVar30 = (FControlRigAnimInstanceProxy *)0x0;
        TStack_520.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        TStack_520.ArrayNum = 0;
        TStack_520.ArrayMax = 0;
        lVar29 = (**(code **)(pUStack_4e8->_padding_ + 800))(pUStack_4e8);
        TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                  (&TStack_520,*(int *)(lVar29 + 0x28),Default);
        iVar3 = (this->MappedElements).ArrayNum;
        pFVar34 = (FControlRigComponentMappedElement *)(this->MappedElements).AllocatorInstance.Data
        ;
        pFVar35 = pFVar34 + iVar3;
        pFVar37 = pFVar30;
        pFStack_508 = pFVar35;
        while( true ) {
          if ((this->MappedElements).ArrayNum != iVar3) {
            uStack_528 = 0;
            `TCheckedPointerIterator<FControlRigComponentMappedElement,int,0>::operator!='::__l2::
            <lambda_1>::operator()(&uStack_528);
          }
          if (pFVar34 == pFVar35) break;
          pFVar36 = (FControlRigAnimInstanceProxy *)(pFVar34->SceneComponent).field0_0x0.DebugPtr;
          if (pFVar36 == (FControlRigAnimInstanceProxy *)0x0) {
            bVar24 = pFVar37 == (FControlRigAnimInstanceProxy *)0x0;
          }
          else {
            bVar24 = pFVar36 == pFVar37;
          }
          if (((!bVar24) || (pFVar30 == (FControlRigAnimInstanceProxy *)0x0)) &&
             (pFVar30 = FControlRigComponentMappedElement::GetAnimProxyOnGameThread(pFVar34),
             pFVar30 != (FControlRigAnimInstanceProxy *)0x0)) {
            TSet<TTuple<FMeshPoseBoneIndex,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<FMeshPoseBoneIndex,UE::Math::TTransform<double>,0>,FDefaultSetAllocator>
            ::Reset((TSet<TTuple<FMeshPoseBoneIndex,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<FMeshPoseBoneIndex,UE::Math::TTransform<double>,0>,FDefaultSetAllocator>
                     *)&pFVar30->StoredTransforms);
            TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
            ::Reset((TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
                     *)&pFVar30->StoredCurves);
            UE::Anim::TAttributeContainer<FMeshPoseBoneIndex,TSizedDefaultAllocator<32>_>::Empty
                      ((TAttributeContainer<FMeshPoseBoneIndex,TSizedDefaultAllocator<32>_> *)
                       &pFVar30->StoredAttributes);
            pFVar37 = (FControlRigAnimInstanceProxy *)(pFVar34->SceneComponent).field0_0x0.DebugPtr;
          }
          if ((((pFVar34->ElementIndex != -1) && (pFVar34->Direction != Input)) &&
              ((pFVar34->ElementType == Bone || ((pFVar34->ElementType - Null & 0xfd) == 0)))) &&
             ((-1 < pFVar34->SubIndex && (pFVar34->SubIndex < TStack_520.ArrayNum)))) {
            URigHierarchy::GetLocalTransformByIndex
                      ((((this->ControlRig).field0_0x0.DebugPtr)->DynamicHierarchy).field0_0x0.
                       DebugPtr,&TStack_2f8,pFVar34->ElementIndex,false);
            dVar22 = TStack_2f8.Scale3D.ZW.m128d_f64[1];
            dVar21 = TStack_2f8.Scale3D.ZW.m128d_f64[0];
            dVar20 = TStack_2f8.Scale3D.XY.m128d_f64[1];
            dVar19 = TStack_2f8.Scale3D.XY.m128d_f64[0];
            dVar18 = TStack_2f8.Translation.ZW.m128d_f64[1];
            dVar17 = TStack_2f8.Translation.ZW.m128d_f64[0];
            dVar16 = TStack_2f8.Translation.XY.m128d_f64[1];
            dVar15 = TStack_2f8.Translation.XY.m128d_f64[0];
            dVar14 = TStack_2f8.Rotation.ZW.m128d_f64[1];
            dVar13 = TStack_2f8.Rotation.ZW.m128d_f64[0];
            dVar12 = TStack_2f8.Rotation.XY.m128d_f64[1];
            dVar11 = TStack_2f8.Rotation.XY.m128d_f64[0];
            uVar26 = pFVar34->SubIndex;
            uVar25 = 0;
            if ((int)uVar26 < TStack_520.ArrayNum) {
              uVar25 = ~uVar26 >> 0x1f;
            }
            if ((uVar25 == 0) &&
               (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar24)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            lVar29 = (longlong)(int)uVar26 * 0x60;
            *(double *)(TStack_520.AllocatorInstance.Data + lVar29) = dVar11;
            *(double *)(TStack_520.AllocatorInstance.Data + lVar29 + 8) = dVar12;
            *(double *)(TStack_520.AllocatorInstance.Data + lVar29 + 0x10) = dVar13;
            *(double *)(TStack_520.AllocatorInstance.Data + lVar29 + 0x10 + 8) = dVar14;
            *(double *)(TStack_520.AllocatorInstance.Data + lVar29 + 0x20) = dVar15;
            *(double *)(TStack_520.AllocatorInstance.Data + lVar29 + 0x20 + 8) = dVar16;
            *(double *)(TStack_520.AllocatorInstance.Data + lVar29 + 0x30) = dVar17;
            *(double *)(TStack_520.AllocatorInstance.Data + lVar29 + 0x30 + 8) = dVar18;
            *(double *)(TStack_520.AllocatorInstance.Data + lVar29 + 0x40) = dVar19;
            *(double *)(TStack_520.AllocatorInstance.Data + lVar29 + 0x40 + 8) = dVar20;
            *(double *)(TStack_520.AllocatorInstance.Data + lVar29 + 0x50) = dVar21;
            *(double *)(TStack_520.AllocatorInstance.Data + lVar29 + 0x50 + 8) = dVar22;
            pFVar35 = pFStack_508;
          }
          pFVar34 = pFVar34 + 1;
        }
        TStack_500.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        TStack_500.ArrayNum = 0;
        TStack_500.ArrayMax = 0;
        TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                  (&TStack_500,TStack_520.ArrayNum,Default);
        USkinnedAsset::FillComponentSpaceTransforms
                  ((USkinnedAsset *)pUStack_4e8,&TStack_520,
                   &pUStack_4f0->FillComponentSpaceTransformsRequiredBones,
                   (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
                   (&pUStack_4f0->_padding_ +
                   (longlong)*(int *)((longlong)&pUStack_4f0->_padding_ + 4) * 2));
        if (pFVar30 != (FControlRigAnimInstanceProxy *)0x0) {
          UE::Anim::TAttributeContainer<FMeshPoseBoneIndex,TSizedDefaultAllocator<32>_>::CopyFrom
                    ((TAttributeContainer<FMeshPoseBoneIndex,TSizedDefaultAllocator<32>_> *)
                     &pFVar30->StoredAttributes,
                     (TAttributeContainer<FMeshPoseBoneIndex,TSizedDefaultAllocator<32>_> *)
                     &this->TempAttributeContainer);
        }
        if (TStack_500.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(TStack_500.AllocatorInstance.Data);
        }
        if (TStack_520.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(TStack_520.AllocatorInstance.Data);
        }
      }
    }
  }
  return;
}

// HandleControlRigInitializedEvent @ 14a26dd90

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UControlRigComponent::HandleControlRigInitializedEvent
          (UControlRigComponent *this,URigVMHost *param_1,FName *param_2)

{
  UFunction *pUVar1;
  UControlRigComponent *local_res8 [4];
  
  local_res8[0] = this;
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UControlRigComponent_OnPostInitialize);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,local_res8);
  return;
}

// HandleControlRigPostConstructionEvent @ 14a26ddd0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UControlRigComponent::HandleControlRigPostConstructionEvent
          (UControlRigComponent *this,UControlRig *param_1,FName *param_2)

{
  UFunction *pUVar1;
  UControlRigComponent *local_res8 [4];
  
  local_res8[0] = this;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UControlRigComponent_OnPostConstruction);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,local_res8);
  return;
}

// HandleControlRigPostForwardsSolveEvent @ 14a26de10

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UControlRigComponent::HandleControlRigPostForwardsSolveEvent
          (UControlRigComponent *this,UControlRig *param_1,FName *param_2)

{
  UFunction *pUVar1;
  UControlRigComponent *local_res8 [4];
  
  local_res8[0] = this;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UControlRigComponent_OnPostForwardsSolve);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,local_res8);
  return;
}

// HandleControlRigPreConstructionEvent @ 14a26de50

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
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
UControlRigComponent::HandleControlRigPreConstructionEvent
          (UControlRigComponent *this,UControlRig *param_1,FName *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FControlRigAnimInstanceProxy *pFVar3;
  USkeletalMeshComponent *this_00;
  undefined1 *puVar4;
  FControlRigAnimInstanceProxy *pFVar5;
  UClass *pUVar6;
  TQuat<double> *pTVar7;
  UFunction *pUVar8;
  ulonglong uVar9;
  FControlRigAnimInstanceProxy *pFVar10;
  FControlRigComponentMappedElement *this_01;
  ForAnyElementType FVar11;
  FControlRigComponentMappedElement *pFVar12;
  bool bVar13;
  UControlRigComponent *local_res8;
  TObjectPtr<USceneComponent>_u_0 local_res20;
  TArray<USkeletalMeshComponent_*,TSizedDefaultAllocator<32>_> local_88;
  TRotator<double> local_78;
  TQuat<double> local_58;
  
  iVar2 = (this->MappedElements).ArrayNum;
  pFVar10 = (FControlRigAnimInstanceProxy *)0x0;
  this_01 = (FControlRigComponentMappedElement *)(this->MappedElements).AllocatorInstance.Data;
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar12 = this_01 + iVar2;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  pFVar5 = pFVar10;
LAB_14a26de95:
  do {
    if ((this->MappedElements).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FControlRigComponentMappedElement,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_res8);
    }
    if (this_01 == pFVar12) {
      iVar2 = local_88.ArrayNum;
      uVar9 = (ulonglong)local_88.ArrayNum;
      pFVar1 = local_88.AllocatorInstance.Data + uVar9 * 8;
      FVar11.Data = local_88.AllocatorInstance.Data;
      while( true ) {
        if ((int)uVar9 != iVar2) {
          `TCheckedPointerIterator<USkeletalMeshComponent_*,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_res8);
        }
        if (FVar11.Data == pFVar1) break;
        this_00 = *(USkeletalMeshComponent **)FVar11.Data;
        USkeletalMeshComponent::TickAnimation(this_00,0.0,false);
        (**(code **)(this_00->_padding_ + 0xb88))(this_00,0);
        USkinnedMeshComponent::RefreshFollowerComponents((USkinnedMeshComponent *)this_00);
        local_78.Pitch = (double)this_00->_padding_;
        local_78.Yaw = (double)this_00->_padding_;
        local_78.Roll = (double)this_00->_padding_;
        pTVar7 = FRotationConversionCache::RotatorToQuat
                           ((FRotationConversionCache *)&this_00->_padding_,&local_58,&local_78);
        USceneComponent::UpdateComponentToWorldWithParent
                  ((USceneComponent *)this_00,(USceneComponent *)this_00->_padding_,
                   (FName)this_00->_padding_,None,pTVar7,None);
        (**(code **)(this_00->_padding_ + 0xbc8))(this_00);
        UActorComponent::MarkRenderTransformDirty((UActorComponent *)this_00);
        UActorComponent::MarkRenderDynamicDataDirty((UActorComponent *)this_00);
        uVar9 = local_88._8_8_ & 0xffffffff;
        FVar11.Data = FVar11.Data + 8;
      }
      local_res8 = this;
      pUVar8 = UObject::FindFunctionChecked
                         ((UObject *)this,NAME_UControlRigComponent_OnPreConstruction);
      (**(code **)(this->_padding_ + 0x260))(this,pUVar8,&local_res8);
      if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.AllocatorInstance.Data);
      }
      return;
    }
    pFVar3 = (FControlRigAnimInstanceProxy *)(this_01->SceneComponent).field0_0x0.DebugPtr;
    if (pFVar3 == (FControlRigAnimInstanceProxy *)0x0) {
      bVar13 = pFVar10 == (FControlRigAnimInstanceProxy *)0x0;
    }
    else {
      bVar13 = pFVar3 == pFVar10;
    }
    if ((!bVar13) || (pFVar5 == (FControlRigAnimInstanceProxy *)0x0)) {
      pFVar5 = FControlRigComponentMappedElement::GetAnimProxyOnGameThread(this_01);
      if (pFVar5 != (FControlRigAnimInstanceProxy *)0x0) {
        TSet<TTuple<FMeshPoseBoneIndex,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<FMeshPoseBoneIndex,UE::Math::TTransform<double>,0>,FDefaultSetAllocator>
        ::Reset((TSet<TTuple<FMeshPoseBoneIndex,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<FMeshPoseBoneIndex,UE::Math::TTransform<double>,0>,FDefaultSetAllocator>
                 *)&pFVar5->StoredTransforms);
        TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>::
        Reset((TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
               *)&pFVar5->StoredCurves);
        DestructItems<TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>,int>
                  (*(TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> **)
                    &(pFVar5->StoredAttributes).field_0x10,
                   *(int *)&(pFVar5->StoredAttributes).field_0x18);
        puVar4 = &(pFVar5->StoredAttributes).field_0x1c;
        *(undefined4 *)&(pFVar5->StoredAttributes).field_0x18 = 0;
        if (*(int *)puVar4 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,0,(ForAnyElementType *)&(pFVar5->StoredAttributes).field_0x10,0,
                     (int *)puVar4);
        }
        DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                  (*(TArray<int,TSizedDefaultAllocator<32>_> **)&pFVar5->StoredAttributes,
                   *(int *)&(pFVar5->StoredAttributes).field_0x8);
        puVar4 = &(pFVar5->StoredAttributes).field_0xc;
        *(undefined4 *)&(pFVar5->StoredAttributes).field_0x8 = 0;
        if (*(int *)puVar4 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,0,(ForAnyElementType *)&pFVar5->StoredAttributes,0,(int *)puVar4);
        }
        DestructItems<TArray<UE::Anim::TWrappedAttribute<TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,int>
                  (*(TArray<UE::Anim::TWrappedAttribute<TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                     **)&(pFVar5->StoredAttributes).field_0x20,
                   *(int *)&(pFVar5->StoredAttributes).field_0x28);
        puVar4 = &(pFVar5->StoredAttributes).field_0x2c;
        *(undefined4 *)&(pFVar5->StoredAttributes).field_0x28 = 0;
        if (*(int *)puVar4 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,0,(ForAnyElementType *)&(pFVar5->StoredAttributes).field_0x20,0,
                     (int *)puVar4);
        }
        puVar4 = &(pFVar5->StoredAttributes).field_0x3c;
        *(undefined4 *)&(pFVar5->StoredAttributes).field_0x38 = 0;
        if (*(int *)puVar4 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,0,(ForAnyElementType *)&(pFVar5->StoredAttributes).field_0x30,0,
                     (int *)puVar4);
        }
        pFVar10 = (FControlRigAnimInstanceProxy *)(this_01->SceneComponent).field0_0x0.DebugPtr;
      }
    }
    if ((this_01->SceneComponent).field0_0x0.DebugPtr == (USceneComponent *)0x0) {
LAB_14a26e03b:
      local_res20.DebugPtr = (USceneComponent *)0x0;
    }
    else {
      pUVar6 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
      bVar13 = FObjectPtr::IsA((FObjectPtr *)&this_01->SceneComponent,pUVar6);
      if (!bVar13) goto LAB_14a26e03b;
      local_res20 = (TObjectPtr<USceneComponent>_u_0)(this_01->SceneComponent).field0_0x0.DebugPtr;
      if (local_res20.DebugPtr != (USceneComponent *)0x0) {
        TArray<USkeletalMeshComponent_*,TSizedDefaultAllocator<32>_>::
        AddUniqueImpl<USkeletalMeshComponent_*_const_&>
                  (&local_88,(USkeletalMeshComponent **)&local_res20.DebugPtr);
        this_01 = this_01 + 1;
        goto LAB_14a26de95;
      }
    }
    this_01 = this_01 + 1;
  } while( true );
}

// HandleControlRigPreForwardsSolveEvent @ 14a26e180

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UControlRigComponent::HandleControlRigPreForwardsSolveEvent
          (UControlRigComponent *this,UControlRig *param_1,FName *param_2)

{
  UFunction *pUVar1;
  UControlRigComponent *local_res8 [4];
  
  local_res8[0] = this;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UControlRigComponent_OnPreForwardsSolve);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,local_res8);
  return;
}

// HasTickDependency @ 14a26fb80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
UControlRigComponent::HasTickDependency(UObject *param_1,UObject *param_2,FString *param_3)

{
  int iVar1;
  bool bVar2;
  undefined1 auStackY_a8 [32];
  undefined1 local_78 [32];
  void *local_58;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  ForElementType<FSetElementId> local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  local_4c = 0x80;
  local_78._0_8_ = (FScriptContainerElement *)0x0;
  local_78._8_8_ = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_44 = 0;
  local_38 = (ForElementType<FSetElementId>)0x0;
  local_30 = 0;
  local_48 = 0xffffffff;
  bVar2 = HasTickDependency_Impl
                    (param_1,param_2,
                     (TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,FDefaultSetAllocator>
                      *)local_78,param_3);
  local_30 = 0;
  if (local_38 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_38);
  }
  iVar1 = SUB84(local_78._8_8_,4);
  local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)local_78,0,(int *)(local_78 + 0xc));
  }
  local_48 = 0xffffffff;
  local_44 = 0;
  local_50 = 0;
  if (0x80 < local_4c) {
    local_4c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_78 + 0x10),0);
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_78._0_8_);
  }
  return bVar2;
}

// HasTickDependency_Impl @ 14a26fc80

bool __cdecl
UControlRigComponent::HasTickDependency_Impl
          (UObject *param_1,UObject *param_2,
          TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,FDefaultSetAllocator> *param_3,
          FString *param_4)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  UClass *pUVar4;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *pTVar5;
  UObject *pUVar6;
  ForElementType<FSetElementId> FVar7;
  FWeakObjectPtr *this;
  FWeakObjectPtr *pFVar8;
  UObject *local_res8;
  UObject *local_res10;
  
  if (param_1 == param_2) {
    return true;
  }
  uVar2 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  if (*(int *)&(param_3->Elements).field_0x8 != *(int *)&(param_3->Elements).field_0x34) {
    FVar7 = (param_3->Hash).SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&param_3->Hash;
    }
    iVar3 = *(int *)((longlong)FVar7 +
                    (ulonglong)(param_3->HashSize - 1U & (uVar2 >> 0x10 ^ uVar2)) * 4);
    if (iVar3 != -1) {
      do {
        if (*(UObject **)(*(longlong *)&param_3->Elements + (longlong)iVar3 * 0x10) == param_1) {
          return false;
        }
        iVar3 = *(int *)(*(longlong *)&param_3->Elements + 8 + (longlong)iVar3 * 0x10);
      } while (iVar3 != -1);
    }
  }
  local_res8 = param_1;
  TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,FDefaultSetAllocator>::
  Emplace<UObject_const_*_const_&>(param_3,&local_res10,(bool *)&local_res8);
  if (param_2 != (UObject *)0x0) {
    pUVar4 = Z_Construct_UClass_USceneComponent_NoRegister();
    iVar3 = (int)pUVar4->_padding_;
    if ((iVar3 <= *(int *)(*(longlong *)&param_2->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_2->field_0x10 + 0x30) + (longlong)iVar3 * 8) ==
        &pUVar4->_padding_)) {
      if (param_1 != (UObject *)0x0) {
        pUVar4 = Z_Construct_UClass_USceneComponent_NoRegister();
        iVar3 = (int)pUVar4->_padding_;
        if (((iVar3 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
            ((longlong *)
             *(undefined1 **)
              (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar3 * 8) ==
             &pUVar4->_padding_)) && (param_1 != (UObject *)0x0)) {
          if (((*(longlong *)&param_2[4].field_0x8 != 0) &&
              (*(longlong *)&param_1[4].field_0x8 != 0)) &&
             ((*(UObject **)&param_1[5].field_0x8 != (UObject *)0x0 &&
              (bVar1 = HasTickDependency_Impl
                                 (*(UObject **)&param_1[5].field_0x8,param_2,param_3,param_4), bVar1
              )))) {
            return true;
          }
          goto LAB_14a26fe6a;
        }
      }
      pUVar4 = Z_Construct_UClass_AActor_NoRegister();
      iVar3 = (int)pUVar4->_padding_;
      if (((iVar3 <= *(int *)(*(longlong *)&param_2->field_0x10 + 0x38)) &&
          ((longlong *)
           *(undefined1 **)
            (*(longlong *)(*(longlong *)&param_2->field_0x10 + 0x30) + (longlong)iVar3 * 8) ==
           &pUVar4->_padding_)) &&
         (pTVar5 = ObjectPtrDecay<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>,UE::Core::Private::TObjectPtrDecayTypeOf<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>_>,TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator>_>
                             ((TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
                               *)&param_2[0xe].field_0x18),
         *(int *)&(pTVar5->Elements).field_0x8 != *(int *)&(pTVar5->Elements).field_0x34)) {
        FVar7 = (pTVar5->Hash).SecondaryData;
        if (FVar7 == (ForElementType<FSetElementId>)0x0) {
          FVar7 = (ForElementType<FSetElementId>)&pTVar5->Hash;
        }
        iVar3 = *(int *)FVar7;
        if (iVar3 != -1) {
          do {
            if (*(longlong *)(*(longlong *)&pTVar5->Elements + (longlong)iVar3 * 0x10) == 0) {
              return true;
            }
            iVar3 = *(int *)(*(longlong *)&pTVar5->Elements + 8 + (longlong)iVar3 * 0x10);
          } while (iVar3 != -1);
        }
      }
    }
  }
LAB_14a26fe6a:
  if (param_1 != (UObject *)0x0) {
    pUVar4 = Z_Construct_UClass_UActorComponent_NoRegister();
    iVar3 = (int)pUVar4->_padding_;
    if (((iVar3 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
        ((longlong *)
         *(undefined1 **)
          (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar3 * 8) ==
         &pUVar4->_padding_)) && (param_1 != (UObject *)0x0)) {
      iVar3 = *(int *)(param_1 + 2);
      this = *(FWeakObjectPtr **)&param_1[1].field_0x20;
      pFVar8 = this + (longlong)iVar3 * 2;
      while( true ) {
        if (*(int *)(param_1 + 2) != iVar3) {
          `TCheckedPointerIterator<FTickPrerequisite_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_res8);
        }
        if (this == pFVar8) break;
        bVar1 = FWeakObjectPtr::IsValid(this);
        if (((bVar1) && (pUVar6 = FWeakObjectPtr::Get(this), pUVar6 != (UObject *)0x0)) &&
           ((pUVar6 == param_2 ||
            (bVar1 = HasTickDependency_Impl(pUVar6,param_2,param_3,param_4), bVar1)))) {
          return true;
        }
        this = this + 2;
      }
      return false;
    }
  }
  return false;
}

// Initialize @ 14a2721f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UControlRigComponent::Initialize(UControlRigComponent *this)

{
  undefined1 uVar1;
  int iVar2;
  UObject *pUVar3;
  bool bVar4;
  int iVar5;
  UFunction *pUVar6;
  UControlRig *pUVar7;
  longlong lVar8;
  UClass *pUVar9;
  uint uVar10;
  char *pcVar11;
  UControlRigComponent *pUVar12;
  UControlRigComponent *pUVar13;
  UObject *this_00;
  FScriptContainerElement *pFVar14;
  FScriptContainerElement *pFVar15;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  FString local_b0;
  FString local_a0;
  longlong local_88 [4];
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  void *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  if (this->bIsInsideInitializeBracket == false) {
    this->bIsInsideInitializeBracket = true;
    if ((this->UserDefinedElements).ArrayNum != 0) {
      TArray<FControlRigComponentMappedElement,TSizedDefaultAllocator<32>_>::operator=
                (&this->MappedElements,&this->UserDefinedElements);
    }
    ValidateMappingData(this);
    local_a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)this;
    pUVar6 = UObject::FindFunctionChecked((UObject *)this,NAME_UControlRigComponent_OnPreInitialize)
    ;
    (**(code **)(this->_padding_ + 0x260))(this,pUVar6);
    pUVar7 = SetupControlRigIfRequired(this);
    if (pUVar7 != (UControlRig *)0x0) {
      if (*(int *)((longlong)&pUVar7->_padding_ + 4) < 1) {
        FRigVMDrawContainer::Reset((FRigVMDrawContainer *)&pUVar7->_padding_);
        URigHierarchy::ResetPoseToInitial((pUVar7->DynamicHierarchy).field0_0x0.DebugPtr,All);
        (**(code **)(pUVar7->_padding_ + 0x318))(pUVar7);
      }
      else {
        ::FString::FString(&local_b0,L"Initialize is being called recursively.");
        if (2 < (byte)LogControlRig._0_1_) {
          UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_a0,(UObject *)0x0);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogControlRig);
          if ((UControlRigComponent *)local_a0.Data.AllocatorInstance.Data !=
              (UControlRigComponent *)0x0) {
            FMemory::Free(local_a0.Data.AllocatorInstance.Data);
          }
        }
        if ((UObject *)local_b0.Data.AllocatorInstance.Data != (UObject *)0x0) {
          FMemory::Free(local_b0.Data.AllocatorInstance.Data);
        }
      }
    }
    pFVar14 = (this->MappedElements).AllocatorInstance.Data;
    iVar2 = (this->MappedElements).ArrayNum;
    local_88[0] = 0;
    this_00 = (UObject *)(pFVar14 + 0xd8);
    pFVar15 = pFVar14 + (longlong)iVar2 * 0xf0;
    local_88[1] = 0;
    local_68 = 0;
    local_60 = 0;
    local_5c = 0x80;
    local_58 = 0xffffffff;
    local_54 = 0;
    local_48 = (void *)0x0;
    local_40 = 0;
    while( true ) {
      if ((this->MappedElements).ArrayNum != iVar2) {
        `TCheckedPointerIterator<FControlRigComponentMappedElement,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_b8);
      }
      if (pFVar14 == pFVar15) break;
      pUVar3 = *(UObject **)this_00;
      if (pUVar3 != (UObject *)0x0) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar3);
        }
        local_b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)pUVar3;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (UE::GC::MarkAsReachable(pUVar3), UE::GC::GIsIncrementalReachabilityPending != false)) {
          UE::GC::MarkAsReachable(pUVar3);
        }
        uVar10 = ((uint)((ulonglong)pUVar3 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar3 >> 4)) *
                 -0x7a143595;
        uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
        iVar5 = TSet<TTuple<TObjectPtr<USceneComponent>,enum_EControlRigComponentMapDirection>,TDefaultMapHashableKeyFuncs<TObjectPtr<USceneComponent>,enum_EControlRigComponentMapDirection,0>,FDefaultSetAllocator>
                ::FindIndexByHash<TObjectPtr<USceneComponent_const_>_>
                          (local_88,uVar10 >> 0x10 ^ uVar10,
                           (TObjectPtr<USceneComponent_const_> *)&local_b0);
        if (iVar5 != -1) {
          lVar8 = local_88[0] + (longlong)iVar5 * 0x18;
          pcVar11 = (char *)(lVar8 + 8);
          if (lVar8 == 0) {
            pcVar11 = (char *)0x0;
          }
          if ((pcVar11 != (char *)0x0) && (*pcVar11 != *(char *)(this_00 + -3))) goto LAB_14a2724fd;
        }
        if (*(char *)(this_00 + -3) == '\x01') {
          bVar4 = AllowsTickDependency
                            (*(UObject **)this_00,(UObject *)this,TickDependencyErrorMessagePtr);
          if (bVar4) {
            lVar8 = (*(UControlRigComponent **)this_00)->_padding_;
            pUVar12 = *(UControlRigComponent **)this_00;
            pUVar13 = this;
LAB_14a27249d:
            (**(code **)(lVar8 + 0x4c0))(pUVar12,pUVar13);
          }
        }
        else {
          bVar4 = AllowsTickDependency
                            ((UObject *)this,*(UObject **)this_00,TickDependencyErrorMessagePtr);
          if (bVar4) {
            lVar8 = this->_padding_;
            pUVar13 = *(UControlRigComponent **)this_00;
            pUVar12 = this;
            goto LAB_14a27249d;
          }
        }
        uVar1 = *(undefined1 *)(this_00 + -3);
        local_b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)this_00;
        TSet<TTuple<TObjectPtr<USceneComponent>,enum_EControlRigComponentMapDirection>,TDefaultMapHashableKeyFuncs<TObjectPtr<USceneComponent>,enum_EControlRigComponentMapDirection,0>,FDefaultSetAllocator>
        ::Emplace<TKeyInitializer<TObjectPtr<USceneComponent>_const_&>_>
                  (local_88,(TKeyInitializer<TObjectPtr<USceneComponent>_const_&> *)&local_a0,
                   (bool *)&local_b0);
        *(undefined1 *)
         (local_88[0] + 8 + (longlong)(int)local_a0.Data.AllocatorInstance.Data * 0x18) = uVar1;
        if (*(longlong *)this_00 != 0) {
          pUVar9 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
          bVar4 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar9);
          if ((bVar4) && (*(USkeletalMeshComponent **)this_00 != (USkeletalMeshComponent *)0x0)) {
            USkeletalMeshComponent::SetUpdateAnimationInEditor
                      (*(USkeletalMeshComponent **)this_00,this->bUpdateInEditor);
          }
        }
      }
LAB_14a2724fd:
      pFVar14 = pFVar14 + 0xf0;
      this_00 = this_00 + 6;
    }
    local_40 = 0;
    if (local_48 != (void *)0x0) {
      FMemory::Free(local_48);
    }
    TSparseArray<TSparseSetElement<TTuple<TObjectPtr<USceneComponent>,enum_EControlRigComponentMapDirection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<USceneComponent>,enum_EControlRigComponentMapDirection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (local_88);
    this->bIsInsideInitializeBracket = false;
  }
  return;
}

// OnPostConstruction @ 14a2786e0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UControlRigComponent::OnPostConstruction(UControlRigComponent *this,UControlRigComponent *param_1)

{
  UFunction *pUVar1;
  UControlRigComponent *local_res8 [4];
  
  local_res8[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UControlRigComponent_OnPostConstruction);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,local_res8);
  return;
}

// OnPostConstruction_Implementation @ 14a278720

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UControlRigComponent::OnPostConstruction_Implementation
          (UControlRigComponent *this,UControlRigComponent *param_1)

{
  UControlRigComponent *local_res8 [4];
  
  local_res8[0] = param_1;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
             &this->OnPostConstructionDelegate,local_res8);
  return;
}

// OnPostForwardsSolve @ 14a278750

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UControlRigComponent::OnPostForwardsSolve(UControlRigComponent *this,UControlRigComponent *param_1)

{
  UFunction *pUVar1;
  UControlRigComponent *local_res8 [4];
  
  local_res8[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UControlRigComponent_OnPostForwardsSolve);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,local_res8);
  return;
}

// OnPostForwardsSolve_Implementation @ 14a278790

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UControlRigComponent::OnPostForwardsSolve_Implementation
          (UControlRigComponent *this,UControlRigComponent *param_1)

{
  UControlRigComponent *local_res8 [4];
  
  local_res8[0] = param_1;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
             &this->OnPostForwardsSolveDelegate,local_res8);
  return;
}

// OnPostInitialize @ 14a2787c0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UControlRigComponent::OnPostInitialize(UControlRigComponent *this,UControlRigComponent *param_1)

{
  UFunction *pUVar1;
  UControlRigComponent *local_res8 [4];
  
  local_res8[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UControlRigComponent_OnPostInitialize);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,local_res8);
  return;
}

// OnPostInitialize_Implementation @ 14a278800

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UControlRigComponent::OnPostInitialize_Implementation
          (UControlRigComponent *this,UControlRigComponent *param_1)

{
  UControlRigComponent *local_res8;
  
  ValidateMappingData(this);
  local_res8 = param_1;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnPostInitializeDelegate
             ,&local_res8);
  return;
}

// OnPreConstruction @ 14a278840

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UControlRigComponent::OnPreConstruction(UControlRigComponent *this,UControlRigComponent *param_1)

{
  UFunction *pUVar1;
  UControlRigComponent *local_res8 [4];
  
  local_res8[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UControlRigComponent_OnPreConstruction)
  ;
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,local_res8);
  return;
}

// OnPreConstruction_Implementation @ 14a278880

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UControlRigComponent::OnPreConstruction_Implementation
          (UControlRigComponent *this,UControlRigComponent *param_1)

{
  UControlRigComponent *local_res8 [4];
  
  local_res8[0] = param_1;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
             &this->OnPreConstructionDelegate,local_res8);
  return;
}

// OnPreForwardsSolve @ 14a2788b0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UControlRigComponent::OnPreForwardsSolve(UControlRigComponent *this,UControlRigComponent *param_1)

{
  UFunction *pUVar1;
  UControlRigComponent *local_res8 [4];
  
  local_res8[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UControlRigComponent_OnPreForwardsSolve);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,local_res8);
  return;
}

// OnPreForwardsSolve_Implementation @ 14a2788f0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UControlRigComponent::OnPreForwardsSolve_Implementation
          (UControlRigComponent *this,UControlRigComponent *param_1)

{
  UControlRigComponent *local_res8 [4];
  
  local_res8[0] = param_1;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
             &this->OnPreForwardsSolveDelegate,local_res8);
  return;
}

// OnPreInitialize @ 14a278920

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UControlRigComponent::OnPreInitialize(UControlRigComponent *this,UControlRigComponent *param_1)

{
  UFunction *pUVar1;
  UControlRigComponent *local_res8 [4];
  
  local_res8[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UControlRigComponent_OnPreInitialize);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,local_res8);
  return;
}

// OnPreInitialize_Implementation @ 14a278960

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UControlRigComponent::OnPreInitialize_Implementation
          (UControlRigComponent *this,UControlRigComponent *param_1)

{
  UControlRigComponent *local_res8 [4];
  
  local_res8[0] = param_1;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnPreInitializeDelegate,
             local_res8);
  return;
}

// OnRegister @ 14a278990

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UControlRigComponent::OnRegister(UControlRigComponent *this)

{
  byte *pbVar1;
  FWeakObjectPtr local_res8;
  UControlRigComponent *local_res10 [3];
  
  UPrimitiveComponent::OnRegister((UPrimitiveComponent *)this);
  (this->ControlRig).field0_0x0.DebugPtr = (UControlRig *)0x0;
  EnterCriticalSection((LPCRITICAL_SECTION)&gPendingSkeletalMeshesLock);
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10[0] = this;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res10);
  TMapBase<TWeakObjectPtr<UControlRigComponent,FWeakObjectPtr>,TArray<FSkeletalMeshToMap,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UControlRigComponent,FWeakObjectPtr>,TArray<FSkeletalMeshToMap,TSizedDefaultAllocator<32>_>,0>_>
  ::FindOrAddImpl<TWeakObjectPtr<UControlRigComponent,FWeakObjectPtr>_>
            ((TMapBase<TWeakObjectPtr<UControlRigComponent,FWeakObjectPtr>,TArray<FSkeletalMeshToMap,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UControlRigComponent,FWeakObjectPtr>,TArray<FSkeletalMeshToMap,TSizedDefaultAllocator<32>_>,0>_>
              *)&gPendingSkeletalMeshes,local_res8.ObjectSerialNumber ^ local_res8.ObjectIndex,
             (TWeakObjectPtr<UControlRigComponent,FWeakObjectPtr> *)&local_res8);
  LeaveCriticalSection((LPCRITICAL_SECTION)&gPendingSkeletalMeshesLock);
  this->bNeedToInitialize = true;
  if (this->_padding_ != 0) {
    pbVar1 = (byte *)(this->_padding_ + 0x32);
    *pbVar1 = *pbVar1 | 7;
  }
  return;
}

// OnUnregister @ 14a278ba0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UControlRigComponent::OnUnregister(UControlRigComponent *this)

{
  TMap<USkeletalMeshComponent_*,UControlRigComponent::FCachedSkeletalMeshComponentSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<USkeletalMeshComponent_*,UControlRigComponent::FCachedSkeletalMeshComponentSettings,0>_>
  *pTVar1;
  undefined1 *puVar2;
  longlong *plVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  UObject *pUVar7;
  UObjectBase *this_00;
  longlong *plVar8;
  code *pcVar9;
  TMap<USkeletalMeshComponent_*,UControlRigComponent::FCachedSkeletalMeshComponentSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<USkeletalMeshComponent_*,UControlRigComponent::FCachedSkeletalMeshComponentSettings,0>_>
  *pTVar10;
  bool bVar11;
  FUObjectItem *pFVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  undefined1 *puVar17;
  uint *puVar18;
  undefined1 local_res8 [8];
  int local_res10;
  FWeakObjectPtr local_res18;
  UControlRigComponent *local_res20;
  FWeakObjectPtr local_a8;
  TMap<USkeletalMeshComponent_*,UControlRigComponent::FCachedSkeletalMeshComponentSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<USkeletalMeshComponent_*,UControlRigComponent::FCachedSkeletalMeshComponentSettings,0>_>
  *local_a0;
  int iStack_98;
  uint uStack_94;
  undefined1 *local_90;
  undefined4 uStack_88;
  int iStack_84;
  int local_80;
  int iStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  TMap<USkeletalMeshComponent_*,UControlRigComponent::FCachedSkeletalMeshComponentSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<USkeletalMeshComponent_*,UControlRigComponent::FCachedSkeletalMeshComponentSettings,0>_>
  *local_70;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  UPrimitiveComponent::OnUnregister((UPrimitiveComponent *)this);
  bVar11 = URigVMHost::IsGarbageOrDestroyed((UObject *)this);
  if ((bVar11) ||
     ((pUVar7 = (UObject *)this->_padding_, pUVar7 != (UObject *)0x0 &&
      ((bVar11 = URigVMHost::IsGarbageOrDestroyed(pUVar7), bVar11 ||
       ((pUVar7[2].field_0xd & 2) != 0)))))) {
    EnterCriticalSection((LPCRITICAL_SECTION)&gPendingSkeletalMeshesLock);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UControlRigComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    local_res18.ObjectIndex = 0;
    local_res18.ObjectSerialNumber = 0;
    local_res20 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UControlRigComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_res20);
    local_a8 = local_res18;
    if (gPendingSkeletalMeshes._8_4_ != gPendingSkeletalMeshes._52_4_) {
      TSet<TTuple<TWeakObjectPtr<UControlRigComponent,FWeakObjectPtr>,TArray<FSkeletalMeshToMap,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UControlRigComponent,FWeakObjectPtr>,TArray<FSkeletalMeshToMap,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
      ::RemoveImpl<TWeakObjectPtr<UControlRigComponent_const_,FWeakObjectPtr>_>
                ((TSet<TTuple<TWeakObjectPtr<UControlRigComponent,FWeakObjectPtr>,TArray<FSkeletalMeshToMap,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UControlRigComponent,FWeakObjectPtr>,TArray<FSkeletalMeshToMap,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                  *)&gPendingSkeletalMeshes,local_res18.ObjectSerialNumber ^ local_res18.ObjectIndex
                 ,(TWeakObjectPtr<UControlRigComponent_const_,FWeakObjectPtr> *)&local_a8);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&gPendingSkeletalMeshesLock);
  }
  else {
    pTVar1 = &this->CachedSkeletalMeshComponentSettings;
    iStack_98 = 0;
    uStack_94 = 1;
    puVar2 = &(this->CachedSkeletalMeshComponentSettings).field_0x10;
    iVar5 = *(int *)&(this->CachedSkeletalMeshComponentSettings).field_0x28;
    local_80 = 0;
    iStack_84 = 0;
    if (iVar5 != 0) {
      puVar18 = *(uint **)&(this->CachedSkeletalMeshComponentSettings).field_0x20;
      if (puVar18 == (uint *)0x0) {
        puVar18 = (uint *)puVar2;
      }
      uVar16 = *puVar18;
      while (uVar16 == 0) {
        lVar13 = (longlong)iStack_98;
        local_80 = local_80 + 0x20;
        iStack_98 = iStack_98 + 1;
        iStack_84 = iVar5;
        if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_98) goto LAB_14a278c8e;
        uVar16 = puVar18[lVar13 + 1];
      }
      uStack_94 = -uVar16 & uVar16;
      uVar4 = (ulonglong)uStack_94 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      local_res10 = (int)lVar13;
      iStack_84 = local_80 + -1 + local_res10;
      if (iVar5 < iStack_84) {
        iStack_84 = iVar5;
      }
    }
LAB_14a278c8e:
    uVar16 = *(uint *)&(this->CachedSkeletalMeshComponentSettings).field_0x28;
    uVar15 = uVar16 & 0xffffffe0;
    iStack_78 = *(int *)&(this->CachedSkeletalMeshComponentSettings).field_0x8 -
                *(int *)&(this->CachedSkeletalMeshComponentSettings).field_0x34;
    uStack_88 = 0xffffffff;
    TStack_68._padding_ = CONCAT44(uStack_94,iStack_98);
    TStack_68.CurrentBitIndex = iStack_84;
    TStack_68.UnvisitedBitMask = 0xffffffff;
    iVar14 = (int)uVar16 >> 5;
    TStack_68._28_4_ = iStack_84;
    TStack_68.BaseBitIndex = local_80;
    uStack_48 = CONCAT44(uStack_74,iStack_78);
    local_a0 = pTVar1;
    local_90 = puVar2;
    iStack_7c = iStack_84;
    local_70 = pTVar1;
    TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
    if ((((int)uVar16 < 0) || (iVar5 < (int)uVar16)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar11)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    uVar6 = *(uint *)&(this->CachedSkeletalMeshComponentSettings).field_0x28;
    if (uVar16 != uVar6) {
      puVar17 = *(undefined1 **)&(this->CachedSkeletalMeshComponentSettings).field_0x20;
      if (puVar17 == (undefined1 *)0x0) {
        puVar17 = puVar2;
      }
      uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar14 * 4);
      while (uVar16 == 0) {
        lVar13 = (longlong)iVar14;
        uVar15 = uVar15 + 0x20;
        iVar14 = iVar14 + 1;
        uVar16 = uVar6;
        if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
        goto LAB_14a278d91;
        uVar16 = *(uint *)(puVar17 + lVar13 * 4 + 4);
      }
      uVar4 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
      lVar13 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      uVar16 = (int)lVar13 + -1 + uVar15;
      if ((int)uVar6 < (int)uVar16) {
        uVar16 = uVar6;
      }
    }
LAB_14a278d91:
    while( true ) {
      pTVar10 = local_70;
      if (*(int *)&local_70->field_0x8 - *(int *)&local_70->field_0x34 != (int)uStack_48) {
        `TSparseArray<TSparseSetElement<TTuple<USkeletalMeshComponent_*,UControlRigComponent::FCachedSkeletalMeshComponentSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (((TStack_68.CurrentBitIndex == uVar16) &&
          (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) &&
         (pTVar10 == pTVar1)) break;
      lVar13 = *(longlong *)pTVar10;
      plVar3 = (longlong *)(lVar13 + (longlong)TStack_68.CurrentBitIndex * 0x28);
      this_00 = *(UObjectBase **)(lVar13 + (longlong)TStack_68.CurrentBitIndex * 0x28);
      if (((this_00 != (UObjectBase *)0x0) &&
          (bVar11 = UObjectBase::IsValidLowLevel(this_00), bVar11)) &&
         ((bVar11 = URigVMHost::IsGarbageOrDestroyed((UObject *)*plVar3), !bVar11 &&
          (((*plVar3 != 0 && ((*(uint *)(*plVar3 + 8) >> 0x1e & 1) == 0)) &&
           (pFVar12 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)(*plVar3 + 0xc)),
           ((uint)((ulonglong)(pFVar12->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0)))))) {
        plVar8 = (longlong *)*plVar3;
        (**(code **)(*plVar8 + 0xc70))(plVar8,plVar3[1]);
        *(byte *)((longlong)plVar8 + 0x42) =
             *(byte *)((longlong)plVar8 + 0x42) ^
             ((char)plVar3[3] * '\x02' ^ *(byte *)((longlong)plVar8 + 0x42)) & 2;
      }
      TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
    }
  }
  TSet<TTuple<USkeletalMeshComponent_*,UControlRigComponent::FCachedSkeletalMeshComponentSettings>,TDefaultMapHashableKeyFuncs<USkeletalMeshComponent_*,UControlRigComponent::FCachedSkeletalMeshComponentSettings,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<USkeletalMeshComponent_*,UControlRigComponent::FCachedSkeletalMeshComponentSettings>,TDefaultMapHashableKeyFuncs<USkeletalMeshComponent_*,UControlRigComponent::FCachedSkeletalMeshComponentSettings,0>,FDefaultSetAllocator>
           *)&this->CachedSkeletalMeshComponentSettings);
  return;
}

// ReportError @ 14a288520

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UControlRigComponent::ReportError(UControlRigComponent *this,FString *param_1)

{
  FString local_18;
  
  if (2 < (byte)LogControlRig._0_1_) {
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_18,(UObject *)0x0);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogControlRig);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// Serialize @ 14a28ec40

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UControlRigComponent::Serialize(UControlRigComponent *this,FArchive *param_1)

{
  UControlRig *pUVar1;
  
  UPrimitiveComponent::Serialize((UPrimitiveComponent *)this,param_1);
  if (((param_1->field_0x2b & 1) != 0) &&
     (pUVar1 = (this->ControlRig).field0_0x0.DebugPtr, pUVar1 != (UControlRig *)0x0)) {
    (**(code **)(pUVar1->_padding_ + 0x2c0))(pUVar1,1);
  }
  return;
}

// Serialize @ 14a28ec90

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
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
UControlRigComponent::Serialize(UControlRigComponent *this,FStructuredArchiveRecord param_1)

{
  UControlRig *pUVar1;
  FArchive *pFVar2;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar2 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  UPrimitiveComponent::Serialize((UPrimitiveComponent *)this,pFVar2);
  if (((pFVar2->field_0x2b & 1) != 0) &&
     (pUVar1 = (this->ControlRig).field0_0x0.DebugPtr, pUVar1 != (UControlRig *)0x0)) {
    (**(code **)(pUVar1->_padding_ + 0x2c0))(pUVar1,1);
  }
  return;
}

// SetBoneInitialTransformsFromSkeletalMesh @ 14a28fc90

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UControlRigComponent::SetBoneInitialTransformsFromSkeletalMesh
          (UControlRigComponent *this,USkeletalMesh *param_1)

{
  UControlRig *pUVar1;
  
  if ((param_1 != (USkeletalMesh *)0x0) &&
     (pUVar1 = SetupControlRigIfRequired(this), pUVar1 != (UControlRig *)0x0)) {
    (**(code **)(pUVar1->_padding_ + 0x470))(pUVar1,param_1);
    this->bResetInitialsBeforeConstruction = false;
  }
  return;
}

// SetBoneTransform @ 14a28fdc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UControlRigComponent::SetBoneTransform
          (UControlRigComponent *this,FName param_1,TTransform<double> *param_2,
          EControlRigComponentSpace param_3,float param_4,bool param_5)

{
  int iVar1;
  UControlRig *pUVar2;
  URigHierarchy *this_00;
  undefined1 auStackY_138 [32];
  FRigElementKey local_108;
  TTransform<double> local_f8;
  TTransform<double> local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_138;
  if ((__real_322bcc77 < param_4) &&
     (pUVar2 = SetupControlRigIfRequired(this), pUVar2 != (UControlRig *)0x0)) {
    local_108.Type = Bone;
    local_108.Name = param_1;
    iVar1 = URigHierarchy::GetIndex((pUVar2->DynamicHierarchy).field0_0x0.DebugPtr,&local_108,true);
    if (iVar1 != -1) {
      ConvertTransformToRigSpace(this,param_2,param_3);
      this_00 = (pUVar2->DynamicHierarchy).field0_0x0.DebugPtr;
      if (param_3 == LocalSpace) {
        if (param_4 < __real_3f800000) {
          URigHierarchy::GetLocalTransformByIndex(this_00,&local_f8,iVar1,false);
          FRigVMMathLibrary::LerpTransform(&local_98,&local_f8,param_2,param_4);
          URigHierarchy::SetLocalTransform
                    ((pUVar2->DynamicHierarchy).field0_0x0.DebugPtr,iVar1,param_2,param_5,false,
                     false);
        }
        else {
          URigHierarchy::SetLocalTransform(this_00,iVar1,param_2,param_5,false,false);
        }
      }
      else {
        if (param_4 < __real_3f800000) {
          URigHierarchy::GetGlobalTransformByIndex(this_00,&local_f8,iVar1,false);
          FRigVMMathLibrary::LerpTransform(&local_98,&local_f8,param_2,param_4);
          this_00 = (pUVar2->DynamicHierarchy).field0_0x0.DebugPtr;
        }
        URigHierarchy::SetGlobalTransform(this_00,iVar1,param_2,param_5,false);
      }
    }
  }
  return;
}

// SetControlBool @ 14a290790

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UControlRigComponent::SetControlBool(UControlRigComponent *this,FName param_1,bool param_2)

{
  UControlRig *pUVar1;
  FName local_res10 [3];
  undefined1 local_a8 [4];
  undefined4 local_a4;
  undefined8 local_a0;
  undefined4 local_98;
  undefined1 local_94;
  ulonglong local_90 [16];
  undefined4 local_10;
  
  local_res10[0] = param_1;
  pUVar1 = SetupControlRigIfRequired(this);
  if (pUVar1 != (UControlRig *)0x0) {
    local_98 = 0;
    local_94 = 0;
    local_90[1] = 0;
    local_a8[0] = 0;
    local_a4 = 0x1ff;
    local_a0 = 0x7f7fffff;
    local_90[2] = 0;
    local_90[3] = 0;
    local_10 = 1;
    local_90[4] = 0;
    local_90[5] = 0;
    local_90[0] = (ulonglong)param_2;
    local_90[6] = 0;
    local_90[7] = 0;
    local_90[8] = 0;
    local_90[9] = 0;
    local_90[10] = 0;
    local_90[0xb] = 0;
    local_90[0xc] = 0;
    local_90[0xd] = 0;
    local_90[0xe] = 0;
    local_90[0xf] = 0;
    (**(code **)(pUVar1->_padding_ + 0x3f0))(pUVar1,local_res10,local_90,1,local_a8,1,0,0);
  }
  return;
}

// SetControlFloat @ 14a290900

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UControlRigComponent::SetControlFloat(UControlRigComponent *this,FName param_1,float param_2)

{
  UControlRig *pUVar1;
  FName local_res10 [3];
  undefined1 local_b8 [4];
  undefined4 local_b4;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined1 local_a4;
  ulonglong local_a0 [16];
  undefined4 local_20;
  
  local_res10[0] = param_1;
  pUVar1 = SetupControlRigIfRequired(this);
  if (pUVar1 != (UControlRig *)0x0) {
    local_a8 = 0;
    local_a4 = 0;
    local_a0[1] = 0;
    local_a0[0] = (ulonglong)(uint)param_2;
    local_b8[0] = 0;
    local_b4 = 0x1ff;
    local_b0 = 0x7f7fffff;
    local_a0[2] = 0;
    local_a0[3] = 0;
    local_20 = 1;
    local_a0[4] = 0;
    local_a0[5] = 0;
    local_a0[6] = 0;
    local_a0[7] = 0;
    local_a0[8] = 0;
    local_a0[9] = 0;
    local_a0[10] = 0;
    local_a0[0xb] = 0;
    local_a0[0xc] = 0;
    local_a0[0xd] = 0;
    local_a0[0xe] = 0;
    local_a0[0xf] = 0;
    (**(code **)(pUVar1->_padding_ + 0x3f0))(pUVar1,local_res10,local_a0,1,local_b8,1,0,0);
  }
  return;
}

// SetControlInt @ 14a290c50

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UControlRigComponent::SetControlInt(UControlRigComponent *this,FName param_1,int param_2)

{
  UControlRig *pUVar1;
  FName local_res10 [3];
  undefined1 local_a8 [4];
  undefined4 local_a4;
  undefined8 local_a0;
  undefined4 local_98;
  undefined1 local_94;
  ulonglong local_90 [16];
  undefined4 local_10;
  
  local_res10[0] = param_1;
  pUVar1 = SetupControlRigIfRequired(this);
  if (pUVar1 != (UControlRig *)0x0) {
    local_98 = 0;
    local_94 = 0;
    local_90[1] = 0;
    local_a8[0] = 0;
    local_a4 = 0x1ff;
    local_a0 = 0x7f7fffff;
    local_90[2] = 0;
    local_90[3] = 0;
    local_10 = 1;
    local_90[4] = 0;
    local_90[5] = 0;
    local_90[0] = (ulonglong)(uint)param_2;
    local_90[6] = 0;
    local_90[7] = 0;
    local_90[8] = 0;
    local_90[9] = 0;
    local_90[10] = 0;
    local_90[0xb] = 0;
    local_90[0xc] = 0;
    local_90[0xd] = 0;
    local_90[0xe] = 0;
    local_90[0xf] = 0;
    (**(code **)(pUVar1->_padding_ + 0x3f0))(pUVar1,local_res10,local_90,1,local_a8,1,0,0);
  }
  return;
}

// SetControlOffset @ 14a290e90

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UControlRigComponent::SetControlOffset
          (UControlRigComponent *this,FName param_1,TTransform<double> *param_2,
          EControlRigComponentSpace param_3)

{
  UControlRig *pUVar1;
  FRigControlElement *pFVar2;
  Type TVar3;
  FRigElementKey local_38;
  
  pUVar1 = SetupControlRigIfRequired(this);
  if (pUVar1 != (UControlRig *)0x0) {
    local_38.Type = Control;
    local_38.Name = param_1;
    pFVar2 = URigHierarchy::Find<FRigControlElement>
                       ((pUVar1->DynamicHierarchy).field0_0x0.DebugPtr,&local_38);
    if (pFVar2 != (FRigControlElement *)0x0) {
      if (param_3 != LocalSpace) {
        ConvertTransformToRigSpace(this,param_2,param_3);
      }
      TVar3 = CurrentGlobal;
      if (param_3 == LocalSpace) {
        TVar3 = CurrentLocal;
      }
      URigHierarchy::SetControlOffsetTransform
                ((pUVar1->DynamicHierarchy).field0_0x0.DebugPtr,pFVar2,param_2,TVar3,true,false,
                 false,false);
    }
  }
  return;
}

// SetControlPosition @ 14a290f40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UControlRigComponent::SetControlPosition
          (UControlRigComponent *this,FName param_1,TVector<double> *param_2,
          EControlRigComponentSpace param_3)

{
  URigHierarchy *this_00;
  UControlRig *pUVar1;
  FRigControlElement *pFVar2;
  TTransform<double> *pTVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined1 auStack_1b8 [32];
  FRigElementKey local_198;
  TTransform<double> local_188;
  TTransform<double> local_128;
  TTransform<double> local_c8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_1b8;
  pUVar1 = SetupControlRigIfRequired(this);
  if (pUVar1 != (UControlRig *)0x0) {
    local_198.Type = Control;
    local_198.Name = param_1;
    pFVar2 = URigHierarchy::Find<FRigControlElement>
                       ((pUVar1->DynamicHierarchy).field0_0x0.DebugPtr,&local_198);
    if (pFVar2 != (FRigControlElement *)0x0) {
      this_00 = (pUVar1->DynamicHierarchy).field0_0x0.DebugPtr;
      local_128.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64
      ;
      local_128.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64
      ;
      local_128.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
      local_128.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
      local_128.Translation.ZW.m128d_f64[0] = (param_2->field0_0x0)._s_0.Z;
      local_128.Translation.ZW.m128d_f64[1] = 0.0;
      local_128.Translation.XY.m128d_f64[0] = (param_2->field0_0x0)._s_0.X;
      local_128.Translation.XY.m128d_f64[1] = (param_2->field0_0x0)._s_0.Y;
      if (param_3 == LocalSpace) {
        pTVar3 = URigHierarchy::GetTransform
                           (this_00,&local_c8,(FRigTransformElement *)pFVar2,CurrentLocal);
        uVar4 = *(undefined4 *)(pTVar3->Rotation).XY.m128d_f64;
        uVar5 = *(undefined4 *)((longlong)(pTVar3->Rotation).XY.m128d_f64 + 4);
        uVar6 = *(undefined4 *)((pTVar3->Rotation).XY.m128d_f64 + 1);
        uVar7 = *(undefined4 *)((longlong)(pTVar3->Rotation).XY.m128d_f64 + 0xc);
        uVar8 = *(undefined4 *)(pTVar3->Rotation).ZW.m128d_f64;
        uVar9 = *(undefined4 *)((longlong)(pTVar3->Rotation).ZW.m128d_f64 + 4);
        uVar10 = *(undefined4 *)((pTVar3->Rotation).ZW.m128d_f64 + 1);
        uVar11 = *(undefined4 *)((longlong)(pTVar3->Rotation).ZW.m128d_f64 + 0xc);
        uVar12 = *(undefined4 *)(pTVar3->Scale3D).XY.m128d_f64;
        uVar13 = *(undefined4 *)((longlong)(pTVar3->Scale3D).XY.m128d_f64 + 4);
        uVar14 = *(undefined4 *)((pTVar3->Scale3D).XY.m128d_f64 + 1);
        uVar15 = *(undefined4 *)((longlong)(pTVar3->Scale3D).XY.m128d_f64 + 0xc);
        uVar16 = *(undefined4 *)(pTVar3->Scale3D).ZW.m128d_f64;
        uVar17 = *(undefined4 *)((longlong)(pTVar3->Scale3D).ZW.m128d_f64 + 4);
        uVar18 = *(undefined4 *)((pTVar3->Scale3D).ZW.m128d_f64 + 1);
        uVar19 = *(undefined4 *)((longlong)(pTVar3->Scale3D).ZW.m128d_f64 + 0xc);
      }
      else {
        pTVar3 = URigHierarchy::GetTransform
                           (this_00,&local_c8,(FRigTransformElement *)pFVar2,CurrentGlobal);
        local_188.Translation.XY.m128d_f64[0] = (pTVar3->Translation).XY.m128d_f64[0];
        local_188.Translation.XY.m128d_f64[1] = (pTVar3->Translation).XY.m128d_f64[1];
        local_188.Translation.ZW.m128d_f64[0] = (pTVar3->Translation).ZW.m128d_f64[0];
        local_188.Translation.ZW.m128d_f64[1] = (pTVar3->Translation).ZW.m128d_f64[1];
        uVar4 = *(undefined4 *)(pTVar3->Rotation).XY.m128d_f64;
        uVar5 = *(undefined4 *)((longlong)(pTVar3->Rotation).XY.m128d_f64 + 4);
        uVar6 = *(undefined4 *)((pTVar3->Rotation).XY.m128d_f64 + 1);
        uVar7 = *(undefined4 *)((longlong)(pTVar3->Rotation).XY.m128d_f64 + 0xc);
        uVar8 = *(undefined4 *)(pTVar3->Rotation).ZW.m128d_f64;
        uVar9 = *(undefined4 *)((longlong)(pTVar3->Rotation).ZW.m128d_f64 + 4);
        uVar10 = *(undefined4 *)((pTVar3->Rotation).ZW.m128d_f64 + 1);
        uVar11 = *(undefined4 *)((longlong)(pTVar3->Rotation).ZW.m128d_f64 + 0xc);
        uVar12 = *(undefined4 *)(pTVar3->Scale3D).XY.m128d_f64;
        uVar13 = *(undefined4 *)((longlong)(pTVar3->Scale3D).XY.m128d_f64 + 4);
        uVar14 = *(undefined4 *)((pTVar3->Scale3D).XY.m128d_f64 + 1);
        uVar15 = *(undefined4 *)((longlong)(pTVar3->Scale3D).XY.m128d_f64 + 0xc);
        uVar16 = *(undefined4 *)(pTVar3->Scale3D).ZW.m128d_f64;
        uVar17 = *(undefined4 *)((longlong)(pTVar3->Scale3D).ZW.m128d_f64 + 4);
        uVar18 = *(undefined4 *)((pTVar3->Scale3D).ZW.m128d_f64 + 1);
        uVar19 = *(undefined4 *)((longlong)(pTVar3->Scale3D).ZW.m128d_f64 + 0xc);
        ConvertTransformToRigSpace(this,&local_128,param_3);
      }
      local_188.Translation.XY.m128d_f64[0] = local_128.Translation.XY.m128d_f64[0];
      local_188.Translation.XY.m128d_f64[1] = local_128.Translation.XY.m128d_f64[1];
      local_188.Translation.ZW.m128d_f64[0] = local_128.Translation.ZW.m128d_f64[0];
      local_188.Translation.ZW.m128d_f64[1] = 0.0;
      local_188.Rotation.XY.m128d_f64[0]._0_4_ = uVar4;
      local_188.Rotation.XY.m128d_f64[0]._4_4_ = uVar5;
      local_188.Rotation.XY.m128d_f64[1]._0_4_ = uVar6;
      local_188.Rotation.XY.m128d_f64[1]._4_4_ = uVar7;
      local_188.Rotation.ZW.m128d_f64[0]._0_4_ = uVar8;
      local_188.Rotation.ZW.m128d_f64[0]._4_4_ = uVar9;
      local_188.Rotation.ZW.m128d_f64[1]._0_4_ = uVar10;
      local_188.Rotation.ZW.m128d_f64[1]._4_4_ = uVar11;
      local_188.Scale3D.XY.m128d_f64[0]._0_4_ = uVar12;
      local_188.Scale3D.XY.m128d_f64[0]._4_4_ = uVar13;
      local_188.Scale3D.XY.m128d_f64[1]._0_4_ = uVar14;
      local_188.Scale3D.XY.m128d_f64[1]._4_4_ = uVar15;
      local_188.Scale3D.ZW.m128d_f64[0]._0_4_ = uVar16;
      local_188.Scale3D.ZW.m128d_f64[0]._4_4_ = uVar17;
      local_188.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar18;
      local_188.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar19;
      SetControlTransform(this,param_1,&local_188,param_3);
    }
  }
  return;
}

// SetControlRig @ 14a291180

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall UControlRigComponent::SetControlRig(UControlRigComponent *this,UControlRig *param_1)

{
  code *pcVar1;
  IControlRigObjectBinding *pIVar2;
  UPackage *pUVar3;
  UAnimationDataSourceRegistry *this_00;
  UControlRig *pUVar4;
  bool bVar5;
  TSharedPtr<IControlRigObjectBinding,1> local_28;
  
  pUVar4 = (this->ControlRig).field0_0x0.DebugPtr;
  if (pUVar4 == (UControlRig *)0x0) {
    bVar5 = param_1 == (UControlRig *)0x0;
  }
  else {
    bVar5 = pUVar4 == param_1;
  }
  if (!bVar5) {
    if (pUVar4 != (UControlRig *)0x0) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar4->_padding_,this);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &((this->ControlRig).field0_0x0.DebugPtr)->PreConstructionEvent,this);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &((this->ControlRig).field0_0x0.DebugPtr)->PostConstructionEvent,this);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &((this->ControlRig).field0_0x0.DebugPtr)->PreForwardsSolveEvent,this);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &((this->ControlRig).field0_0x0.DebugPtr)->PostForwardsSolveEvent,this);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &((this->ControlRig).field0_0x0.DebugPtr)->_padding_,this);
      pUVar4 = (this->ControlRig).field0_0x0.DebugPtr;
      pcVar1 = *(code **)(pUVar4->_padding_ + 0x170);
      pUVar3 = GetTransientPackage();
      (*pcVar1)(pUVar4,0,pUVar3,0x34);
      UObjectBaseUtility::MarkAsGarbage
                ((UObjectBaseUtility *)(this->ControlRig).field0_0x0.DebugPtr);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UControlRig *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    (this->ControlRig).field0_0x0.DebugPtr = param_1;
    pUVar4 = param_1;
  }
  if (pUVar4 != (UControlRig *)0x0) {
    local_28.SharedReferenceCount.ReferenceController._0_4_ = 0;
    local_28.Object = (IControlRigObjectBinding *)HandleControlRigInitializedEvent;
    TMulticastDelegateRegistration<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>
    ::AddUObject<UControlRigComponent>
              ((TMulticastDelegateRegistration<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>
                *)&pUVar4->_padding_,(UControlRigComponent *)&stack0x00000008,(pmf_234dd2cf *)this);
    local_28.SharedReferenceCount.ReferenceController._0_4_ = 0;
    local_28.Object = (IControlRigObjectBinding *)HandleControlRigPreConstructionEvent;
    TMulticastDelegateRegistration<void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy>
    ::AddUObject<UControlRigComponent>
              ((TMulticastDelegateRegistration<void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy>
                *)&((this->ControlRig).field0_0x0.DebugPtr)->PreConstructionEvent,
               (UControlRigComponent *)&stack0x00000008,(pmf_cf5c6381 *)this);
    local_28.SharedReferenceCount.ReferenceController._0_4_ = 0;
    local_28.Object = (IControlRigObjectBinding *)HandleControlRigPostConstructionEvent;
    TMulticastDelegateRegistration<void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy>
    ::AddUObject<UControlRigComponent>
              ((TMulticastDelegateRegistration<void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy>
                *)&((this->ControlRig).field0_0x0.DebugPtr)->PostConstructionEvent,
               (UControlRigComponent *)&stack0x00000008,(pmf_cf5c6381 *)this);
    local_28.SharedReferenceCount.ReferenceController._0_4_ = 0;
    local_28.Object = (IControlRigObjectBinding *)HandleControlRigPreForwardsSolveEvent;
    TMulticastDelegateRegistration<void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy>
    ::AddUObject<UControlRigComponent>
              ((TMulticastDelegateRegistration<void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy>
                *)&((this->ControlRig).field0_0x0.DebugPtr)->PreForwardsSolveEvent,
               (UControlRigComponent *)&stack0x00000008,(pmf_cf5c6381 *)this);
    local_28.SharedReferenceCount.ReferenceController._0_4_ = 0;
    local_28.Object = (IControlRigObjectBinding *)HandleControlRigPostForwardsSolveEvent;
    TMulticastDelegateRegistration<void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy>
    ::AddUObject<UControlRigComponent>
              ((TMulticastDelegateRegistration<void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy>
                *)&((this->ControlRig).field0_0x0.DebugPtr)->PostForwardsSolveEvent,
               (UControlRigComponent *)&stack0x00000008,(pmf_cf5c6381 *)this);
    local_28.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)
         ((ulonglong)local_28.SharedReferenceCount.ReferenceController._4_4_ << 0x20);
    local_28.Object = (IControlRigObjectBinding *)HandleControlRigExecutedEvent;
    TMulticastDelegateRegistration<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>
    ::AddUObject<UControlRigComponent>
              ((TMulticastDelegateRegistration<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>
                *)&((this->ControlRig).field0_0x0.DebugPtr)->_padding_,
               (UControlRigComponent *)&stack0x00000008,(pmf_234dd2cf *)this);
    this_00 = UControlRig::GetDataSourceRegistry((this->ControlRig).field0_0x0.DebugPtr);
    UAnimationDataSourceRegistry::RegisterDataSource
              (this_00,&UControlRig::OwnerComponent,(UObject *)this);
    pIVar2 = (this->ObjectBinding).Object;
    if (pIVar2 != (IControlRigObjectBinding *)0x0) {
      pUVar4 = (this->ControlRig).field0_0x0.DebugPtr;
      local_28.SharedReferenceCount.ReferenceController =
           (this->ObjectBinding).SharedReferenceCount.ReferenceController;
      if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_28.Object = pIVar2;
      UControlRig::SetObjectBinding(pUVar4,&local_28);
    }
    pUVar4 = (this->ControlRig).field0_0x0.DebugPtr;
    (**(code **)(pUVar4->_padding_ + 0x2c0))(pUVar4,1);
  }
  return;
}

// SetControlRigClass @ 14a291730

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UControlRigComponent::SetControlRigClass
          (UControlRigComponent *this,TSubclassOf<UControlRig> param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  UClass *pUVar7;
  
  pUVar5 = (this->ControlRigClass).Class.field0_0x0.DebugPtr;
  pUVar6 = (UClass *)0x0;
  pUVar7 = pUVar6;
  if ((pUVar5 != (UClass *)0x0) && (pUVar4 = UControlRig::StaticClass(), pUVar4 != (UClass *)0x0)) {
    iVar1 = (int)pUVar4->_padding_;
    if (((int)pUVar5->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar1 * 8) != &pUVar4->_padding_)
       ) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      pUVar7 = (this->ControlRigClass).Class.field0_0x0.DebugPtr;
    }
  }
  lVar2 = *(longlong *)param_1.Class.field0_0x0;
  if ((lVar2 != 0) && (pUVar5 = UControlRig::StaticClass(), pUVar5 != (UClass *)0x0)) {
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar5->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      pUVar6 = *(UClass **)param_1.Class.field0_0x0;
    }
  }
  if (pUVar7 != pUVar6) {
    SetControlRig(this,(UControlRig *)0x0);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (*(UObject **)param_1.Class.field0_0x0 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(*(UObject **)param_1.Class.field0_0x0);
    }
    (this->ControlRigClass).Class.field0_0x0 = *(TObjectPtr<UClass>_u_0 *)param_1.Class.field0_0x0;
    Initialize(this);
  }
  return;
}

// SetControlRotator @ 14a291830

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UControlRigComponent::SetControlRotator
          (UControlRigComponent *this,FName param_1,TRotator<double> *param_2,
          EControlRigComponentSpace param_3)

{
  URigHierarchy *this_00;
  UControlRig *pUVar1;
  FRigControlElement *pFVar2;
  TQuat<double> *pTVar3;
  TTransform<double> *pTVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined1 auStack_1e8 [32];
  FRigElementKey local_1c8;
  TTransform<double> local_1b8;
  TQuat<double> local_158;
  TTransform<double> local_138;
  TTransform<double> local_d8;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStack_1e8;
  pUVar1 = SetupControlRigIfRequired(this);
  if (pUVar1 != (UControlRig *)0x0) {
    local_1c8.Type = Control;
    local_1c8.Name = param_1;
    pFVar2 = URigHierarchy::Find<FRigControlElement>
                       ((pUVar1->DynamicHierarchy).field0_0x0.DebugPtr,&local_1c8);
    if (pFVar2 != (FRigControlElement *)0x0) {
      local_138.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64
      ;
      local_138.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64
      ;
      local_138.Translation.XY.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
      local_138.Translation.ZW.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
      local_138.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
      local_138.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
      pTVar3 = UE::Math::TRotator<double>::Quaternion(param_2,&local_158);
      this_00 = (pUVar1->DynamicHierarchy).field0_0x0.DebugPtr;
      local_138.Rotation.XY.m128d_f64[0] = pTVar3->X;
      local_138.Rotation.XY.m128d_f64[1] = pTVar3->Y;
      local_138.Rotation.ZW.m128d_f64[0] = pTVar3->Z;
      local_138.Rotation.ZW.m128d_f64[1] = pTVar3->W;
      if (param_3 == LocalSpace) {
        pTVar4 = URigHierarchy::GetTransform
                           (this_00,&local_d8,(FRigTransformElement *)pFVar2,CurrentLocal);
        uVar5 = *(undefined4 *)(pTVar4->Translation).XY.m128d_f64;
        uVar6 = *(undefined4 *)((longlong)(pTVar4->Translation).XY.m128d_f64 + 4);
        uVar7 = *(undefined4 *)((pTVar4->Translation).XY.m128d_f64 + 1);
        uVar8 = *(undefined4 *)((longlong)(pTVar4->Translation).XY.m128d_f64 + 0xc);
        uVar9 = *(undefined4 *)(pTVar4->Translation).ZW.m128d_f64;
        uVar10 = *(undefined4 *)((longlong)(pTVar4->Translation).ZW.m128d_f64 + 4);
        uVar11 = *(undefined4 *)((pTVar4->Translation).ZW.m128d_f64 + 1);
        uVar12 = *(undefined4 *)((longlong)(pTVar4->Translation).ZW.m128d_f64 + 0xc);
        uVar13 = *(undefined4 *)(pTVar4->Scale3D).XY.m128d_f64;
        uVar14 = *(undefined4 *)((longlong)(pTVar4->Scale3D).XY.m128d_f64 + 4);
        uVar15 = *(undefined4 *)((pTVar4->Scale3D).XY.m128d_f64 + 1);
        uVar16 = *(undefined4 *)((longlong)(pTVar4->Scale3D).XY.m128d_f64 + 0xc);
        uVar17 = *(undefined4 *)(pTVar4->Scale3D).ZW.m128d_f64;
        uVar18 = *(undefined4 *)((longlong)(pTVar4->Scale3D).ZW.m128d_f64 + 4);
        uVar19 = *(undefined4 *)((pTVar4->Scale3D).ZW.m128d_f64 + 1);
        uVar20 = *(undefined4 *)((longlong)(pTVar4->Scale3D).ZW.m128d_f64 + 0xc);
      }
      else {
        pTVar4 = URigHierarchy::GetTransform
                           (this_00,&local_d8,(FRigTransformElement *)pFVar2,CurrentGlobal);
        local_1b8.Rotation.XY.m128d_f64[0] = (pTVar4->Rotation).XY.m128d_f64[0];
        local_1b8.Rotation.XY.m128d_f64[1] = (pTVar4->Rotation).XY.m128d_f64[1];
        local_1b8.Rotation.ZW.m128d_f64[0] = (pTVar4->Rotation).ZW.m128d_f64[0];
        local_1b8.Rotation.ZW.m128d_f64[1] = (pTVar4->Rotation).ZW.m128d_f64[1];
        uVar5 = *(undefined4 *)(pTVar4->Translation).XY.m128d_f64;
        uVar6 = *(undefined4 *)((longlong)(pTVar4->Translation).XY.m128d_f64 + 4);
        uVar7 = *(undefined4 *)((pTVar4->Translation).XY.m128d_f64 + 1);
        uVar8 = *(undefined4 *)((longlong)(pTVar4->Translation).XY.m128d_f64 + 0xc);
        uVar9 = *(undefined4 *)(pTVar4->Translation).ZW.m128d_f64;
        uVar10 = *(undefined4 *)((longlong)(pTVar4->Translation).ZW.m128d_f64 + 4);
        uVar11 = *(undefined4 *)((pTVar4->Translation).ZW.m128d_f64 + 1);
        uVar12 = *(undefined4 *)((longlong)(pTVar4->Translation).ZW.m128d_f64 + 0xc);
        uVar13 = *(undefined4 *)(pTVar4->Scale3D).XY.m128d_f64;
        uVar14 = *(undefined4 *)((longlong)(pTVar4->Scale3D).XY.m128d_f64 + 4);
        uVar15 = *(undefined4 *)((pTVar4->Scale3D).XY.m128d_f64 + 1);
        uVar16 = *(undefined4 *)((longlong)(pTVar4->Scale3D).XY.m128d_f64 + 0xc);
        uVar17 = *(undefined4 *)(pTVar4->Scale3D).ZW.m128d_f64;
        uVar18 = *(undefined4 *)((longlong)(pTVar4->Scale3D).ZW.m128d_f64 + 4);
        uVar19 = *(undefined4 *)((pTVar4->Scale3D).ZW.m128d_f64 + 1);
        uVar20 = *(undefined4 *)((longlong)(pTVar4->Scale3D).ZW.m128d_f64 + 0xc);
        ConvertTransformToRigSpace(this,&local_138,param_3);
      }
      local_1b8.Rotation.XY.m128d_f64[0] = local_138.Rotation.XY.m128d_f64[0];
      local_1b8.Rotation.XY.m128d_f64[1] = local_138.Rotation.XY.m128d_f64[1];
      local_1b8.Rotation.ZW.m128d_f64[0] = local_138.Rotation.ZW.m128d_f64[0];
      local_1b8.Rotation.ZW.m128d_f64[1] = local_138.Rotation.ZW.m128d_f64[1];
      local_1b8.Translation.XY.m128d_f64[0]._0_4_ = uVar5;
      local_1b8.Translation.XY.m128d_f64[0]._4_4_ = uVar6;
      local_1b8.Translation.XY.m128d_f64[1]._0_4_ = uVar7;
      local_1b8.Translation.XY.m128d_f64[1]._4_4_ = uVar8;
      local_1b8.Translation.ZW.m128d_f64[0]._0_4_ = uVar9;
      local_1b8.Translation.ZW.m128d_f64[0]._4_4_ = uVar10;
      local_1b8.Translation.ZW.m128d_f64[1]._0_4_ = uVar11;
      local_1b8.Translation.ZW.m128d_f64[1]._4_4_ = uVar12;
      local_1b8.Scale3D.XY.m128d_f64[0]._0_4_ = uVar13;
      local_1b8.Scale3D.XY.m128d_f64[0]._4_4_ = uVar14;
      local_1b8.Scale3D.XY.m128d_f64[1]._0_4_ = uVar15;
      local_1b8.Scale3D.XY.m128d_f64[1]._4_4_ = uVar16;
      local_1b8.Scale3D.ZW.m128d_f64[0]._0_4_ = uVar17;
      local_1b8.Scale3D.ZW.m128d_f64[0]._4_4_ = uVar18;
      local_1b8.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar19;
      local_1b8.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar20;
      SetControlTransform(this,param_1,&local_1b8,param_3);
    }
  }
  return;
}

// SetControlScale @ 14a291a40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UControlRigComponent::SetControlScale
          (UControlRigComponent *this,FName param_1,TVector<double> *param_2,
          EControlRigComponentSpace param_3)

{
  URigHierarchy *this_00;
  UControlRig *pUVar1;
  FRigControlElement *pFVar2;
  TTransform<double> *pTVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined1 auStack_1b8 [32];
  FRigElementKey local_198;
  TTransform<double> local_188;
  TTransform<double> local_128;
  TTransform<double> local_c8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_1b8;
  pUVar1 = SetupControlRigIfRequired(this);
  if (pUVar1 != (UControlRig *)0x0) {
    local_198.Type = Control;
    local_198.Name = param_1;
    pFVar2 = URigHierarchy::Find<FRigControlElement>
                       ((pUVar1->DynamicHierarchy).field0_0x0.DebugPtr,&local_198);
    if (pFVar2 != (FRigControlElement *)0x0) {
      this_00 = (pUVar1->DynamicHierarchy).field0_0x0.DebugPtr;
      local_128.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64
      ;
      local_128.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64
      ;
      local_128.Translation.XY.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
      local_128.Translation.ZW.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
      local_128.Scale3D.ZW.m128d_f64[0] = (param_2->field0_0x0)._s_0.Z;
      local_128.Scale3D.ZW.m128d_f64[1] = 0.0;
      local_128.Scale3D.XY.m128d_f64[0] = (param_2->field0_0x0)._s_0.X;
      local_128.Scale3D.XY.m128d_f64[1] = (param_2->field0_0x0)._s_0.Y;
      if (param_3 == LocalSpace) {
        pTVar3 = URigHierarchy::GetTransform
                           (this_00,&local_c8,(FRigTransformElement *)pFVar2,CurrentLocal);
        uVar4 = *(undefined4 *)(pTVar3->Rotation).XY.m128d_f64;
        uVar5 = *(undefined4 *)((longlong)(pTVar3->Rotation).XY.m128d_f64 + 4);
        uVar6 = *(undefined4 *)((pTVar3->Rotation).XY.m128d_f64 + 1);
        uVar7 = *(undefined4 *)((longlong)(pTVar3->Rotation).XY.m128d_f64 + 0xc);
        uVar8 = *(undefined4 *)(pTVar3->Rotation).ZW.m128d_f64;
        uVar9 = *(undefined4 *)((longlong)(pTVar3->Rotation).ZW.m128d_f64 + 4);
        uVar10 = *(undefined4 *)((pTVar3->Rotation).ZW.m128d_f64 + 1);
        uVar11 = *(undefined4 *)((longlong)(pTVar3->Rotation).ZW.m128d_f64 + 0xc);
        uVar12 = *(undefined4 *)(pTVar3->Translation).XY.m128d_f64;
        uVar13 = *(undefined4 *)((longlong)(pTVar3->Translation).XY.m128d_f64 + 4);
        uVar14 = *(undefined4 *)((pTVar3->Translation).XY.m128d_f64 + 1);
        uVar15 = *(undefined4 *)((longlong)(pTVar3->Translation).XY.m128d_f64 + 0xc);
        uVar16 = *(undefined4 *)(pTVar3->Translation).ZW.m128d_f64;
        uVar17 = *(undefined4 *)((longlong)(pTVar3->Translation).ZW.m128d_f64 + 4);
        uVar18 = *(undefined4 *)((pTVar3->Translation).ZW.m128d_f64 + 1);
        uVar19 = *(undefined4 *)((longlong)(pTVar3->Translation).ZW.m128d_f64 + 0xc);
      }
      else {
        pTVar3 = URigHierarchy::GetTransform
                           (this_00,&local_c8,(FRigTransformElement *)pFVar2,CurrentGlobal);
        local_188.Scale3D.XY.m128d_f64[0] = (pTVar3->Scale3D).XY.m128d_f64[0];
        local_188.Scale3D.XY.m128d_f64[1] = (pTVar3->Scale3D).XY.m128d_f64[1];
        local_188.Scale3D.ZW.m128d_f64[0] = (pTVar3->Scale3D).ZW.m128d_f64[0];
        local_188.Scale3D.ZW.m128d_f64[1] = (pTVar3->Scale3D).ZW.m128d_f64[1];
        uVar4 = *(undefined4 *)(pTVar3->Rotation).XY.m128d_f64;
        uVar5 = *(undefined4 *)((longlong)(pTVar3->Rotation).XY.m128d_f64 + 4);
        uVar6 = *(undefined4 *)((pTVar3->Rotation).XY.m128d_f64 + 1);
        uVar7 = *(undefined4 *)((longlong)(pTVar3->Rotation).XY.m128d_f64 + 0xc);
        uVar8 = *(undefined4 *)(pTVar3->Rotation).ZW.m128d_f64;
        uVar9 = *(undefined4 *)((longlong)(pTVar3->Rotation).ZW.m128d_f64 + 4);
        uVar10 = *(undefined4 *)((pTVar3->Rotation).ZW.m128d_f64 + 1);
        uVar11 = *(undefined4 *)((longlong)(pTVar3->Rotation).ZW.m128d_f64 + 0xc);
        uVar12 = *(undefined4 *)(pTVar3->Translation).XY.m128d_f64;
        uVar13 = *(undefined4 *)((longlong)(pTVar3->Translation).XY.m128d_f64 + 4);
        uVar14 = *(undefined4 *)((pTVar3->Translation).XY.m128d_f64 + 1);
        uVar15 = *(undefined4 *)((longlong)(pTVar3->Translation).XY.m128d_f64 + 0xc);
        uVar16 = *(undefined4 *)(pTVar3->Translation).ZW.m128d_f64;
        uVar17 = *(undefined4 *)((longlong)(pTVar3->Translation).ZW.m128d_f64 + 4);
        uVar18 = *(undefined4 *)((pTVar3->Translation).ZW.m128d_f64 + 1);
        uVar19 = *(undefined4 *)((longlong)(pTVar3->Translation).ZW.m128d_f64 + 0xc);
        ConvertTransformToRigSpace(this,&local_128,param_3);
      }
      local_188.Scale3D.XY.m128d_f64[0] = local_128.Scale3D.XY.m128d_f64[0];
      local_188.Scale3D.XY.m128d_f64[1] = local_128.Scale3D.XY.m128d_f64[1];
      local_188.Scale3D.ZW.m128d_f64[0] = local_128.Scale3D.ZW.m128d_f64[0];
      local_188.Scale3D.ZW.m128d_f64[1] = 0.0;
      local_188.Rotation.XY.m128d_f64[0]._0_4_ = uVar4;
      local_188.Rotation.XY.m128d_f64[0]._4_4_ = uVar5;
      local_188.Rotation.XY.m128d_f64[1]._0_4_ = uVar6;
      local_188.Rotation.XY.m128d_f64[1]._4_4_ = uVar7;
      local_188.Rotation.ZW.m128d_f64[0]._0_4_ = uVar8;
      local_188.Rotation.ZW.m128d_f64[0]._4_4_ = uVar9;
      local_188.Rotation.ZW.m128d_f64[1]._0_4_ = uVar10;
      local_188.Rotation.ZW.m128d_f64[1]._4_4_ = uVar11;
      local_188.Translation.XY.m128d_f64[0]._0_4_ = uVar12;
      local_188.Translation.XY.m128d_f64[0]._4_4_ = uVar13;
      local_188.Translation.XY.m128d_f64[1]._0_4_ = uVar14;
      local_188.Translation.XY.m128d_f64[1]._4_4_ = uVar15;
      local_188.Translation.ZW.m128d_f64[0]._0_4_ = uVar16;
      local_188.Translation.ZW.m128d_f64[0]._4_4_ = uVar17;
      local_188.Translation.ZW.m128d_f64[1]._0_4_ = uVar18;
      local_188.Translation.ZW.m128d_f64[1]._4_4_ = uVar19;
      SetControlTransform(this,param_1,&local_188,param_3);
    }
  }
  return;
}

// SetControlTransform @ 14a291d30

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UControlRigComponent::SetControlTransform
          (UControlRigComponent *this,FName param_1,TTransform<double> *param_2,
          EControlRigComponentSpace param_3)

{
  UControlRig *pUVar1;
  FRigControlElement *pFVar2;
  Type TVar3;
  FRigElementKey local_28;
  
  pUVar1 = SetupControlRigIfRequired(this);
  if (pUVar1 != (UControlRig *)0x0) {
    local_28.Type = Control;
    local_28.Name = param_1;
    pFVar2 = URigHierarchy::Find<FRigControlElement>
                       ((pUVar1->DynamicHierarchy).field0_0x0.DebugPtr,&local_28);
    if (pFVar2 != (FRigControlElement *)0x0) {
      if (param_3 == LocalSpace) {
        TVar3 = CurrentLocal;
      }
      else {
        ConvertTransformToRigSpace(this,param_2,param_3);
        TVar3 = CurrentGlobal;
      }
      URigHierarchy::SetTransform
                ((pUVar1->DynamicHierarchy).field0_0x0.DebugPtr,(FRigTransformElement *)pFVar2,
                 param_2,TVar3,true,false,false,false);
    }
  }
  return;
}

// SetControlVector2D @ 14a291ff0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UControlRigComponent::SetControlVector2D
          (UControlRigComponent *this,FName param_1,TVector2<double> *param_2)

{
  UControlRig *pUVar1;
  FName local_res10 [3];
  undefined1 local_a8 [4];
  undefined4 local_a4;
  undefined8 local_a0;
  undefined4 local_98;
  undefined1 local_94;
  float local_90;
  float fStack_8c;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined4 local_10;
  
  local_res10[0] = param_1;
  pUVar1 = SetupControlRigIfRequired(this);
  if (pUVar1 != (UControlRig *)0x0) {
    local_98 = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_94 = 0;
    local_70 = 0;
    uStack_68 = 0;
    uStack_88 = 0;
    local_60 = 0;
    uStack_58 = 0;
    local_50 = 0;
    uStack_48 = 0;
    local_40 = 0;
    uStack_38 = 0;
    local_30 = 0;
    uStack_28 = 0;
    local_a8[0] = 0;
    local_20 = 0;
    uStack_18 = 0;
    local_a4 = 0x1ff;
    local_a0 = 0x7f7fffff;
    local_10 = 1;
    _local_90 = CONCAT44((float)(param_2->field0_0x0)._s_0.Y,(float)(param_2->field0_0x0)._s_0.X);
    (**(code **)(pUVar1->_padding_ + 0x3f0))(pUVar1,local_res10,&local_90,1,local_a8,1,0,0);
  }
  return;
}

// SetInitialBoneTransform @ 14a294060

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UControlRigComponent::SetInitialBoneTransform
          (UControlRigComponent *this,FName param_1,TTransform<double> *param_2,
          EControlRigComponentSpace param_3,bool param_4)

{
  int iVar1;
  int iVar2;
  UControlRig *pUVar3;
  undefined1 auStackY_148 [32];
  undefined1 local_108 [8];
  uint uStack_100;
  TTransform<double> local_f8;
  TTransform<double> local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_148;
  pUVar3 = SetupControlRigIfRequired(this);
  if (pUVar3 != (UControlRig *)0x0) {
    local_108[0] = Bone;
    local_108._4_4_ = param_1.ComparisonIndex.Value;
    uStack_100 = param_1.Number;
    iVar1 = URigHierarchy::GetIndex
                      ((pUVar3->DynamicHierarchy).field0_0x0.DebugPtr,(FRigElementKey *)local_108,
                       true);
    if (iVar1 != -1) {
      if ((pUVar3->PreConstructionBracket < 1) && (pUVar3->PostConstructionBracket < 1)) {
        ::FString::FString((FString *)local_108,
                           L"SetInitialBoneTransform should only be called during OnPreConstruction / OnPostConstruction."
                          );
        ReportError(this,(FString *)local_108);
        if ((void *)CONCAT44(local_108._4_4_,local_108._0_4_) != (void *)0x0) {
          FMemory::Free((void *)CONCAT44(local_108._4_4_,local_108._0_4_));
        }
      }
      else {
        ConvertTransformToRigSpace(this,param_2,param_3);
        if (param_3 == LocalSpace) {
          iVar2 = URigHierarchy::GetFirstParent
                            ((pUVar3->DynamicHierarchy).field0_0x0.DebugPtr,iVar1);
          if (iVar2 != -1) {
            URigHierarchy::GetGlobalTransformByIndex
                      ((pUVar3->DynamicHierarchy).field0_0x0.DebugPtr,&local_98,iVar2,true);
            local_f8.Rotation.XY.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
            local_f8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0]
            ;
            local_f8.Rotation.XY.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
            local_f8.Rotation.ZW.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
            local_f8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2]
            ;
            local_f8.Rotation.ZW.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
            local_f8.Translation.XY.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
            local_f8.Translation.XY.m128d_f64[0] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[0];
            local_f8.Translation.XY.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
            local_f8.Translation.ZW.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
            local_f8.Translation.ZW.m128d_f64[0] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[2];
            local_f8.Translation.ZW.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
            local_f8.Scale3D.XY.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
            local_f8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
            local_f8.Scale3D.XY.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
            local_f8.Scale3D.ZW.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
            local_f8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
            local_f8.Scale3D.ZW.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
            UE::Math::TTransform<double>::Multiply(&local_f8,param_2,&local_98);
            (param_2->Rotation).XY.m128d_f64[0] = local_f8.Rotation.XY.m128d_f64[0];
            (param_2->Rotation).XY.m128d_f64[1] = local_f8.Rotation.XY.m128d_f64[1];
            (param_2->Rotation).ZW.m128d_f64[0] = local_f8.Rotation.ZW.m128d_f64[0];
            (param_2->Rotation).ZW.m128d_f64[1] = local_f8.Rotation.ZW.m128d_f64[1];
            (param_2->Translation).XY.m128d_f64[0] = local_f8.Translation.XY.m128d_f64[0];
            (param_2->Translation).XY.m128d_f64[1] = local_f8.Translation.XY.m128d_f64[1];
            (param_2->Translation).ZW.m128d_f64[0] = local_f8.Translation.ZW.m128d_f64[0];
            (param_2->Translation).ZW.m128d_f64[1] = local_f8.Translation.ZW.m128d_f64[1];
            (param_2->Scale3D).XY.m128d_f64[0] = local_f8.Scale3D.XY.m128d_f64[0];
            (param_2->Scale3D).XY.m128d_f64[1] = local_f8.Scale3D.XY.m128d_f64[1];
            (param_2->Scale3D).ZW.m128d_f64[0] = local_f8.Scale3D.ZW.m128d_f64[0];
            (param_2->Scale3D).ZW.m128d_f64[1] = local_f8.Scale3D.ZW.m128d_f64[1];
          }
        }
        local_f8.Rotation.XY.m128d_f64 = *&(param_2->Rotation).XY.m128d_f64;
        local_f8.Rotation.ZW.m128d_f64 = *&(param_2->Rotation).ZW.m128d_f64;
        local_f8.Translation.XY.m128d_f64 = *&(param_2->Translation).XY.m128d_f64;
        local_f8.Translation.ZW.m128d_f64 = *&(param_2->Translation).ZW.m128d_f64;
        local_f8.Scale3D.XY.m128d_f64 = *&(param_2->Scale3D).XY.m128d_f64;
        local_f8.Scale3D.ZW.m128d_f64 = *&(param_2->Scale3D).ZW.m128d_f64;
        URigHierarchy::SetGlobalTransformByIndex
                  ((pUVar3->DynamicHierarchy).field0_0x0.DebugPtr,iVar1,&local_f8,true,param_4,false
                   ,false);
      }
    }
  }
  return;
}

// SetInitialSpaceTransform @ 14a294270

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UControlRigComponent::SetInitialSpaceTransform
          (UControlRigComponent *this,FName param_1,TTransform<double> *param_2,
          EControlRigComponentSpace param_3)

{
  UControlRig *pUVar1;
  FRigNullElement *pFVar2;
  Type TVar3;
  FRigElementKey local_28;
  
  pUVar1 = SetupControlRigIfRequired(this);
  if (pUVar1 != (UControlRig *)0x0) {
    local_28.Type = Control;
    local_28.Name = param_1;
    pFVar2 = URigHierarchy::Find<FRigNullElement>
                       ((pUVar1->DynamicHierarchy).field0_0x0.DebugPtr,&local_28);
    if (pFVar2 != (FRigNullElement *)0x0) {
      if (param_3 == LocalSpace) {
        TVar3 = InitialLocal;
      }
      else {
        ConvertTransformToRigSpace(this,param_2,param_3);
        TVar3 = InitialGlobal;
      }
      URigHierarchy::SetTransform
                ((pUVar1->DynamicHierarchy).field0_0x0.DebugPtr,(FRigTransformElement *)pFVar2,
                 param_2,TVar3,true,false,false,false);
    }
  }
  return;
}

// SetMappedElements @ 14a2946c0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UControlRigComponent::SetMappedElements
          (UControlRigComponent *this,
          TArray<FControlRigComponentMappedElement,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  UControlRig *pUVar2;
  int iVar3;
  wchar_t *pwVar4;
  FString local_28;
  FString local_18;
  
  pUVar2 = SetupControlRigIfRequired(this);
  if (pUVar2 == (UControlRig *)0x0) {
LAB_14a2947ea:
    TArray<FControlRigComponentMappedElement,TSizedDefaultAllocator<32>_>::operator=
              (&this->MappedElements,param_1);
    ValidateMappingData(this);
    Initialize(this);
    iVar3 = param_1->ArrayNum;
  }
  else {
    if (pUVar2->PreConstructionBracket < 1) {
      if (pUVar2->PostConstructionBracket < 1) {
        if (*(int *)((longlong)&pUVar2->_padding_ + 4) < 1) {
          if ((int)pUVar2->_padding_ < 1) goto LAB_14a2947ea;
          pwVar4 = 
          L"%s cannot be called during the ForwardsSolveEvent - use ConstructionScript instead.";
        }
        else {
          pwVar4 = L"%s cannot be called during the InitEvent - use ConstructionScript instead.";
        }
      }
      else {
        pwVar4 = 
        L"%s cannot be called during the PostConstructionEvent - use ConstructionScript instead.";
      }
      ::FString::PrintfImpl(&local_28,pwVar4);
      ReportError(this,&local_28);
    }
    else {
      ::FString::PrintfImpl
                (&local_28,
                 L"%s cannot be called during the PreConstructionEvent - use ConstructionScript instead."
                );
      if (2 < (byte)LogControlRig._0_1_) {
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_18,(UObject *)0x0);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogControlRig);
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
      }
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    iVar3 = param_1->ArrayNum;
  }
  DestructItems<FControlRigComponentMappedElement,int>
            ((FControlRigComponentMappedElement *)(param_1->AllocatorInstance).Data,iVar3);
  pFVar1 = (param_1->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// SetObjectBinding @ 14a295010

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall UControlRigComponent::SetObjectBinding(UControlRigComponent *this,UObject *param_1)

{
  TSharedPtr<IControlRigObjectBinding,1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<FControlRigObjectBinding,1> *pTVar4;
  UControlRig *this_00;
  FControlRigObjectBinding *local_38;
  FSharedReferencer<1> local_30;
  TSharedPtr<IControlRigObjectBinding,1> local_28;
  TSharedRef<FControlRigObjectBinding,1> local_18;
  
  pTVar1 = &this->ObjectBinding;
  if (pTVar1->Object == (IControlRigObjectBinding *)0x0) {
    pTVar4 = MakeShared<FControlRigObjectBinding,1>(&local_18);
    local_30.ReferenceController = (pTVar4->SharedReferenceCount).ReferenceController;
    local_38 = pTVar4->Object;
    if (local_30.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_30.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_30.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pTVar1 != (TSharedPtr<IControlRigObjectBinding,1> *)&local_38) {
      pTVar1->Object = (IControlRigObjectBinding *)local_38;
      local_38 = (FControlRigObjectBinding *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->ObjectBinding).SharedReferenceCount,&local_30);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_30.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    if (pTVar1->Object == (IControlRigObjectBinding *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  (**(code **)*pTVar1->Object)(pTVar1->Object,param_1);
  this_00 = SetupControlRigIfRequired(this);
  if (this_00 != (UControlRig *)0x0) {
    local_28.Object = pTVar1->Object;
    local_28.SharedReferenceCount.ReferenceController =
         (this->ObjectBinding).SharedReferenceCount.ReferenceController;
    if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UControlRig::SetObjectBinding(this_00,&local_28);
  }
  return;
}

// SetupControlRigIfRequired @ 14a295e20

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UControlRig * __thiscall UControlRigComponent::SetupControlRigIfRequired(UControlRigComponent *this)

{
  undefined1 *puVar1;
  FControlRigComponentEvent *this_00;
  int iVar2;
  UClass *pUVar3;
  longlong lVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  uint uVar10;
  UClass *pUVar11;
  UClass *pUVar12;
  UControlRig *pUVar13;
  UClass *pUVar14;
  uint uVar15;
  longlong lVar16;
  FDestructionSentinel local_48;
  
  pUVar14 = (UClass *)0x0;
  if ((this->ControlRig).field0_0x0.DebugPtr != (UControlRig *)0x0) {
    pUVar3 = (this->ControlRigClass).Class.field0_0x0.DebugPtr;
    pUVar12 = pUVar14;
    if ((pUVar3 != (UClass *)0x0) &&
       (pUVar11 = UControlRig::StaticClass(), pUVar11 != (UClass *)0x0)) {
      iVar2 = (int)pUVar11->_padding_;
      if (((int)pUVar3->_padding_ < iVar2) ||
         ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar2 * 8) !=
          &pUVar11->_padding_)) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      if (bVar7) {
        pUVar12 = (this->ControlRigClass).Class.field0_0x0.DebugPtr;
      }
    }
    pUVar13 = (this->ControlRig).field0_0x0.DebugPtr;
    if ((UClass *)pUVar13->_padding_ == pUVar12) {
      return pUVar13;
    }
    SetControlRig(this,(UControlRig *)0x0);
  }
  pUVar3 = (this->ControlRigClass).Class.field0_0x0.DebugPtr;
  if ((pUVar3 != (UClass *)0x0) && (pUVar12 = UControlRig::StaticClass(), pUVar12 != (UClass *)0x0))
  {
    iVar2 = (int)pUVar12->_padding_;
    if (((int)pUVar3->_padding_ < iVar2) ||
       ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar2 * 8) != &pUVar12->_padding_
       )) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if ((bVar7) &&
       (pUVar3 = (this->ControlRigClass).Class.field0_0x0.DebugPtr, pUVar3 != (UClass *)0x0)) {
      pUVar12 = UControlRig::StaticClass();
      if (pUVar12 != (UClass *)0x0) {
        iVar2 = (int)pUVar12->_padding_;
        if (((int)pUVar3->_padding_ < iVar2) ||
           ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar2 * 8) !=
            &pUVar12->_padding_)) {
          bVar7 = false;
        }
        else {
          bVar7 = true;
        }
        if (bVar7) {
          pUVar14 = (this->ControlRigClass).Class.field0_0x0.DebugPtr;
        }
      }
      pUVar13 = NewObject<UControlRig>
                          ((UObject *)this,pUVar14,(FName)0x0,RF_NoFlags,(UObject *)0x0,false,
                           (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
      SetControlRig(this,pUVar13);
      this_00 = &this->ControlRigCreatedEvent;
      bVar7 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                        ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00);
      if (bVar7) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
                   (FWriteAccessScope *)&local_48);
        puVar1 = &(this->ControlRigCreatedEvent).field_0x1c;
        *(int *)puVar1 = *(int *)puVar1 + 1;
        bVar7 = false;
        uVar15 = *(int *)&(this->ControlRigCreatedEvent).field_0x10 - 1;
        if (-1 < (int)uVar15) {
          lVar16 = (longlong)(int)uVar15 << 4;
          bVar7 = false;
          do {
            uVar10 = 0;
            if ((int)uVar15 < *(int *)&(this->ControlRigCreatedEvent).field_0x10) {
              uVar10 = ~uVar15 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar6 = (code *)swi(3);
              pUVar13 = (UControlRig *)(*pcVar6)();
              return pUVar13;
            }
            lVar4 = *(longlong *)&(this->ControlRigCreatedEvent).field_0x8;
            if (((*(int *)(lVar16 + 8 + lVar4) == 0) ||
                (plVar5 = *(longlong **)(lVar16 + lVar4), plVar5 == (longlong *)0x0)) ||
               (cVar9 = (**(code **)(*plVar5 + 0x68))(), cVar9 == '\0')) {
              bVar7 = true;
            }
            lVar16 = lVar16 + -0x10;
            uVar15 = uVar15 - 1;
          } while (-1 < (int)uVar15);
        }
        puVar1 = &(this->ControlRigCreatedEvent).field_0x1c;
        *(int *)puVar1 = *(int *)puVar1 + -1;
        if (bVar7) {
          TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,false);
        }
        if (local_48.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
        }
      }
      ValidateMappingData(this);
    }
  }
  return (this->ControlRig).field0_0x0.DebugPtr;
}

// StaticRegisterNativesUControlRigComponent @ 14a297fd0

void __cdecl UControlRigComponent::StaticRegisterNativesUControlRigComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x2f;
  local_18.DataPtr = Z_Construct_UClass_UControlRigComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// TickComponent @ 14a29bee0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
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
UControlRigComponent::TickComponent
          (UControlRigComponent *this,float param_1,ELevelTick param_2,
          FActorComponentTickFunction *param_3)

{
  int *piVar1;
  FWeakObjectPtr FVar2;
  FWeakObjectPtr *pFVar3;
  int iVar4;
  UControlRig *pUVar5;
  USkeletalMeshComponent *pUVar6;
  FWeakObjectPtr *pFVar7;
  longlong lVar8;
  ForAnyElementType *pFVar9;
  FWeakObjectPtr *this_00;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_68;
  FWeakObjectPtr *local_60;
  TArray<FControlRigComponentMappedCurve,TSizedDefaultAllocator<32>_> local_58;
  TArray<FControlRigComponentMappedBone,TSizedDefaultAllocator<32>_> local_48 [2];
  
  if (this->bNeedToInitialize != false) {
    Initialize(this);
    this->bNeedToInitialize = false;
  }
  if (this->bUpdateRigOnTick != false) {
    pUVar5 = SetupControlRigIfRequired(this);
    if (pUVar5 != (UControlRig *)0x0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&gPendingSkeletalMeshesLock);
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      local_68.ObjectIndex = 0;
      local_68.ObjectSerialNumber = 0;
      local_res8 = (FWeakObjectPtr)this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=(&local_68,(FObjectPtr)&local_res8);
      local_res8 = local_68;
      iVar4 = TSet<TTuple<TWeakObjectPtr<UControlRigComponent,FWeakObjectPtr>,TArray<FSkeletalMeshToMap,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UControlRigComponent,FWeakObjectPtr>,TArray<FSkeletalMeshToMap,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              ::FindIndexByHash<TWeakObjectPtr<UControlRigComponent_const_,FWeakObjectPtr>_>
                        ((TSet<TTuple<TWeakObjectPtr<UControlRigComponent,FWeakObjectPtr>,TArray<FSkeletalMeshToMap,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UControlRigComponent,FWeakObjectPtr>,TArray<FSkeletalMeshToMap,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                          *)&gPendingSkeletalMeshes,
                         local_68.ObjectSerialNumber ^ local_68.ObjectIndex,
                         (TWeakObjectPtr<UControlRigComponent_const_,FWeakObjectPtr> *)&local_res8);
      if (iVar4 != -1) {
        lVar8 = (longlong)iVar4 * 0x20 + gPendingSkeletalMeshes._0_8_;
        pFVar9 = (ForAnyElementType *)(lVar8 + 8);
        if (lVar8 == 0) {
          pFVar9 = (ForAnyElementType *)0x0;
        }
        if (pFVar9 != (ForAnyElementType *)0x0) {
          iVar4 = *(int *)&pFVar9[1].Data;
          if (0 < iVar4) {
            this_00 = (FWeakObjectPtr *)pFVar9->Data;
            local_60 = this_00 + (longlong)iVar4 * 5;
            pFVar7 = this_00 + 2;
            while( true ) {
              pFVar3 = local_60;
              if (*(int *)&pFVar9[1].Data != iVar4) {
                `TCheckedPointerIterator<FSkeletalMeshToMap,int,0>::operator!='::__l2::<lambda_1>::
                operator()(&local_res8);
              }
              if (this_00 == pFVar3) break;
              local_58.ArrayNum = pFVar7[2].ObjectIndex;
              lVar8 = (longlong)local_58.ArrayNum;
              FVar2 = pFVar7[1];
              local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              if (local_58.ArrayNum == 0) {
                local_58.ArrayMax = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x10,4,local_58.ArrayNum,0,&local_58.AllocatorInstance,local_58.ArrayNum,
                           &local_58.ArrayMax);
                memcpy(local_58.AllocatorInstance.Data,(void *)FVar2,lVar8 << 4);
              }
              local_48[0].ArrayNum = pFVar7->ObjectIndex;
              lVar8 = (longlong)local_48[0].ArrayNum;
              FVar2 = pFVar7[-1];
              local_48[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              if (local_48[0].ArrayNum == 0) {
                local_48[0].ArrayMax = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x10,4,local_48[0].ArrayNum,0,&local_48[0].AllocatorInstance,
                           local_48[0].ArrayNum,&local_48[0].ArrayMax);
                memcpy(local_48[0].AllocatorInstance.Data,(void *)FVar2,lVar8 << 4);
              }
              pUVar6 = (USkeletalMeshComponent *)FWeakObjectPtr::Get(this_00);
              AddMappedSkeletalMesh(this,pUVar6,local_48,&local_58,Output);
              this_00 = this_00 + 5;
              pFVar7 = pFVar7 + 5;
            }
            piVar1 = (int *)((longlong)&pFVar9[1].Data + 4);
            if (*(int *)((longlong)&pFVar9[1].Data + 4) < 0) {
              DestructItems<FSkeletalMeshToMap,int>
                        ((FSkeletalMeshToMap *)pFVar9->Data,*(int *)&pFVar9[1].Data);
              *(undefined4 *)&pFVar9[1].Data = 0;
              if (*piVar1 != 0) {
                UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x28,8,0,pFVar9,0,piVar1);
              }
            }
            else {
              DestructItems<FSkeletalMeshToMap,int>
                        ((FSkeletalMeshToMap *)pFVar9->Data,*(int *)&pFVar9[1].Data);
              *(undefined4 *)&pFVar9[1].Data = 0;
            }
          }
        }
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)&gPendingSkeletalMeshesLock);
    }
    Update(this,param_1);
  }
  return;
}

// TransferInputs @ 14a29c630

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall UControlRigComponent::TransferInputs(UControlRigComponent *this)

{
  int *piVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar3;
  UControlRig *pUVar4;
  UInstancedStaticMeshComponent *this_00;
  URigHierarchy *pUVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  UClass *pUVar12;
  TTransform<double> *pTVar13;
  TTransform<double> *pTVar14;
  ulonglong uVar15;
  longlong lVar16;
  int *piVar17;
  uint uVar18;
  FScriptContainerElement *pFVar19;
  longlong lVar20;
  FScriptContainerElement *pFVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auStackY_3d8 [32];
  undefined1 local_388 [8];
  FScriptContainerElement *local_380;
  uint local_378;
  FScriptContainerElement *local_370;
  TTransform<double> local_368;
  TTransform<double> local_308;
  TTransform<double> local_2a8;
  TTransform<double> local_248;
  TTransform<double> local_1e8;
  TTransform<double> local_188;
  TTransform<double> local_128;
  TTransform<double> local_c8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_3d8;
  pUVar4 = (this->ControlRig).field0_0x0.DebugPtr;
  this->bNeedsEvaluation = true;
  if (pUVar4 != (UControlRig *)0x0) {
    pTVar2 = &this->InputElementIndices;
    piVar1 = &(this->InputElementIndices).ArrayMax;
    (this->InputElementIndices).ArrayNum = 0;
    if ((this->InputElementIndices).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&pTVar2->AllocatorInstance,0,piVar1);
    }
    pTVar3 = &this->InputTransforms;
    (this->InputTransforms).ArrayNum = 0;
    if ((this->InputTransforms).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,0x10,0,&pTVar3->AllocatorInstance,0,&(this->InputTransforms).ArrayMax);
    }
    local_378 = (this->MappedElements).ArrayNum;
    uVar15 = (ulonglong)(int)local_378;
    pFVar21 = (this->MappedElements).AllocatorInstance.Data;
    pFVar19 = pFVar21 + 0xd8;
    pFVar11 = pFVar21 + uVar15 * 0xf0;
    local_380 = pFVar11;
    while( true ) {
      local_370 = pFVar21;
      if ((this->MappedElements).ArrayNum != (int)uVar15) {
        local_388[0] = 0;
        `TCheckedPointerIterator<FControlRigComponentMappedElement,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_388);
        pFVar11 = local_380;
      }
      if (pFVar21 == pFVar11) break;
      if ((((*(int *)&pFVar19[8].field_0x0 != -1) && (pFVar19[-0x78].field_0x0 != '\x01')) &&
          (pFVar11 = local_380, *(longlong *)pFVar19 != 0)) &&
         ((*(uint *)(*(longlong *)pFVar19 + 8) >> 0x1e & 1) == 0)) {
        local_308.Rotation.XY.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
        local_308.Rotation.ZW.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
        local_308.Translation.XY.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
        local_308.Translation.ZW.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
        local_308.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64
        ;
        local_308.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64
        ;
        if (*(int *)(pFVar19 + 0xc) < 0) {
          lVar16 = *(longlong *)pFVar19;
          local_308.Rotation.XY.m128d_f64 = *(double (*) [2])(lVar16 + 0x1f0);
          local_308.Rotation.ZW.m128d_f64 = *(double (*) [2])(lVar16 + 0x200);
          local_308.Translation.XY.m128d_f64 = *(double (*) [2])(lVar16 + 0x210);
          local_308.Translation.ZW.m128d_f64 = *(double (*) [2])(lVar16 + 0x220);
          local_308.Scale3D.XY.m128d_f64 = *(double (*) [2])(lVar16 + 0x230);
          local_308.Scale3D.ZW.m128d_f64 = *(double (*) [2])(lVar16 + 0x240);
        }
        else if (*(longlong *)pFVar19 != 0) {
          pUVar12 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
          bVar7 = FObjectPtr::IsA((FObjectPtr *)pFVar19,pUVar12);
          if ((bVar7) && (*(USkinnedMeshComponent **)pFVar19 != (USkinnedMeshComponent *)0x0)) {
            pTVar13 = USkinnedMeshComponent::GetBoneTransform
                                (*(USkinnedMeshComponent **)pFVar19,&local_1e8,
                                 *(int *)(pFVar19 + 0xc),&UE::Math::TTransform<double>::Identity);
            local_308.Rotation.XY.m128d_f64 = *&(pTVar13->Rotation).XY.m128d_f64;
            local_308.Rotation.ZW.m128d_f64 = *&(pTVar13->Rotation).ZW.m128d_f64;
            local_308.Translation.XY.m128d_f64 = *&(pTVar13->Translation).XY.m128d_f64;
            local_308.Translation.ZW.m128d_f64 = *&(pTVar13->Translation).ZW.m128d_f64;
            local_308.Scale3D.XY.m128d_f64 = *&(pTVar13->Scale3D).XY.m128d_f64;
            local_308.Scale3D.ZW.m128d_f64 = *&(pTVar13->Scale3D).ZW.m128d_f64;
            if (pFVar19[-4] == (FScriptContainerElement)0x0) {
              local_2a8.Rotation.XY.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float0001.m128_f32[0];
              local_2a8.Rotation.XY.m128d_f64[1] =
                   (double)GlobalVectorConstants::Float0001.m128_f32[1];
              local_2a8.Rotation.ZW.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float0001.m128_f32[2];
              local_2a8.Rotation.ZW.m128d_f64[1] =
                   (double)GlobalVectorConstants::Float0001.m128_f32[3];
              local_2a8.Translation.ZW.m128d_f64[0] =
                   (double)GlobalVectorConstants::FloatZero.m128_f32[2];
              local_2a8.Translation.ZW.m128d_f64[1] =
                   (double)GlobalVectorConstants::FloatZero.m128_f32[3];
              local_2a8.Translation.XY.m128d_f64[1]._0_4_ =
                   SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
              local_2a8.Translation.XY.m128d_f64[0] =
                   (double)GlobalVectorConstants::FloatZero.m128_f32[0];
              local_2a8.Translation.XY.m128d_f64[1]._4_4_ =
                   (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
              local_2a8.Scale3D.ZW.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float1110.m128_f32[2];
              local_2a8.Scale3D.ZW.m128d_f64[1] =
                   (double)GlobalVectorConstants::Float1110.m128_f32[3];
              local_2a8.Scale3D.XY.m128d_f64[1]._0_4_ =
                   SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
              local_2a8.Scale3D.XY.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float1110.m128_f32[0];
              local_2a8.Scale3D.XY.m128d_f64[1]._4_4_ =
                   (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
              UE::Math::TTransform<double>::Multiply
                        (&local_2a8,&local_308,(TTransform<double> *)(*(longlong *)pFVar19 + 0x1f0))
              ;
              local_308.Rotation.XY.m128d_f64[1] = local_2a8.Rotation.XY.m128d_f64[1];
              local_308.Rotation.XY.m128d_f64[0] = local_2a8.Rotation.XY.m128d_f64[0];
              local_308.Rotation.ZW.m128d_f64[1] = local_2a8.Rotation.ZW.m128d_f64[1];
              local_308.Rotation.ZW.m128d_f64[0] = local_2a8.Rotation.ZW.m128d_f64[0];
              local_308.Translation.XY.m128d_f64[0] = local_2a8.Translation.XY.m128d_f64[0];
              local_308.Translation.XY.m128d_f64[1] = local_2a8.Translation.XY.m128d_f64[1];
              local_308.Translation.ZW.m128d_f64[1] = local_2a8.Translation.ZW.m128d_f64[1];
              local_308.Translation.ZW.m128d_f64[0] = local_2a8.Translation.ZW.m128d_f64[0];
              local_308.Scale3D.XY.m128d_f64[0] = local_2a8.Scale3D.XY.m128d_f64[0];
              local_308.Scale3D.XY.m128d_f64[1] = local_2a8.Scale3D.XY.m128d_f64[1];
              local_308.Scale3D.ZW.m128d_f64[1] = local_2a8.Scale3D.ZW.m128d_f64[1];
              local_308.Scale3D.ZW.m128d_f64[0] = local_2a8.Scale3D.ZW.m128d_f64[0];
            }
          }
          else if (*(longlong *)pFVar19 != 0) {
            pUVar12 = Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
            bVar7 = FObjectPtr::IsA((FObjectPtr *)pFVar19,pUVar12);
            if ((bVar7) &&
               (this_00 = *(UInstancedStaticMeshComponent **)pFVar19,
               this_00 != (UInstancedStaticMeshComponent *)0x0)) {
              iVar9 = *(int *)(pFVar19 + 0xc);
              iVar8 = (**(code **)(this_00->_padding_ + 0xc68))(this_00);
              pFVar11 = local_380;
              pFVar21 = local_370;
              if (iVar8 <= iVar9) goto LAB_14a29cc0d;
              UInstancedStaticMeshComponent::GetInstanceTransform(this_00,iVar9,&local_308,true);
              pFVar21 = local_370;
            }
          }
        }
        piVar17 = &(this->InputTransforms).ArrayMax;
        local_248.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_248.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
        local_248.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_248.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
        local_248.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2]
        ;
        local_248.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3]
        ;
        local_248.Translation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
        local_248.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0]
        ;
        local_248.Translation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
        local_248.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_248.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
        local_248.Scale3D.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
        local_248.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_248.Scale3D.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
        UE::Math::TTransform<double>::Multiply
                  (&local_248,&local_308,(TTransform<double> *)(pFVar19 + -0x68));
        local_308.Rotation.XY.m128d_f64[1] = local_248.Rotation.XY.m128d_f64[1];
        local_308.Rotation.XY.m128d_f64[0] = local_248.Rotation.XY.m128d_f64[0];
        local_308.Rotation.ZW.m128d_f64[1] = local_248.Rotation.ZW.m128d_f64[1];
        local_308.Rotation.ZW.m128d_f64[0] = local_248.Rotation.ZW.m128d_f64[0];
        local_308.Translation.XY.m128d_f64[0] = local_248.Translation.XY.m128d_f64[0];
        local_308.Translation.XY.m128d_f64[1] = local_248.Translation.XY.m128d_f64[1];
        local_308.Translation.ZW.m128d_f64[1] = local_248.Translation.ZW.m128d_f64[1];
        local_308.Translation.ZW.m128d_f64[0] = local_248.Translation.ZW.m128d_f64[0];
        local_308.Scale3D.XY.m128d_f64[0] = local_248.Scale3D.XY.m128d_f64[0];
        local_308.Scale3D.XY.m128d_f64[1] = local_248.Scale3D.XY.m128d_f64[1];
        local_308.Scale3D.ZW.m128d_f64[1] = local_248.Scale3D.ZW.m128d_f64[1];
        local_308.Scale3D.ZW.m128d_f64[0] = local_248.Scale3D.ZW.m128d_f64[0];
        if (pFVar19[-4] == (FScriptContainerElement)0x0) {
          pTVar14 = (TTransform<double> *)&this->_padding_;
          pTVar13 = &local_c8;
LAB_14a29ca5b:
          pTVar13 = UE::Math::TTransform<double>::GetRelativeTransform(&local_308,pTVar13,pTVar14);
          local_308.Rotation.XY.m128d_f64 = *&(pTVar13->Rotation).XY.m128d_f64;
          local_308.Rotation.ZW.m128d_f64 = *&(pTVar13->Rotation).ZW.m128d_f64;
          local_308.Translation.XY.m128d_f64 = *&(pTVar13->Translation).XY.m128d_f64;
          local_308.Translation.ZW.m128d_f64 = *&(pTVar13->Translation).ZW.m128d_f64;
          local_308.Scale3D.XY.m128d_f64 = *&(pTVar13->Scale3D).XY.m128d_f64;
          local_308.Scale3D.ZW.m128d_f64 = *&(pTVar13->Scale3D).ZW.m128d_f64;
        }
        else if (pFVar19[-4] == (FScriptContainerElement)0x1) {
          pTVar14 = USceneComponent::GetRelativeTransform((USceneComponent *)this,&local_188);
          pTVar13 = &local_128;
          goto LAB_14a29ca5b;
        }
        pFVar11 = (pTVar2->AllocatorInstance).Data;
        if (((pFVar11 <= pFVar19 + 8) && (pFVar19 + 8 < pFVar11 + (longlong)*piVar1 * 4)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar9 = (this->InputElementIndices).ArrayNum;
        if (iVar9 == *piVar1) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&pTVar2->AllocatorInstance,piVar1);
        }
        (this->InputElementIndices).ArrayNum = iVar9 + 1;
        *(undefined4 *)((pTVar2->AllocatorInstance).Data + (longlong)iVar9 * 4) =
             *(undefined4 *)(pFVar19 + 8);
        pTVar13 = (TTransform<double> *)(pTVar3->AllocatorInstance).Data;
        if (((pTVar13 <= &local_308) && (&local_308 < pTVar13 + *piVar17)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar9 = (this->InputTransforms).ArrayNum;
        if (iVar9 == *piVar17) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x1060,&pTVar3->AllocatorInstance,piVar17);
        }
        (this->InputTransforms).ArrayNum = iVar9 + 1;
        pFVar11 = (pTVar3->AllocatorInstance).Data;
        lVar16 = (longlong)iVar9 * 0x60;
        *(double *)(pFVar11 + lVar16) = local_308.Rotation.XY.m128d_f64[0];
        *(double *)(pFVar11 + lVar16 + 8) = local_308.Rotation.XY.m128d_f64[1];
        *(double *)(pFVar11 + lVar16 + 0x10) = local_308.Rotation.ZW.m128d_f64[0];
        *(double *)(pFVar11 + lVar16 + 0x10 + 8) = local_308.Rotation.ZW.m128d_f64[1];
        *(double *)(pFVar11 + lVar16 + 0x20) = local_308.Translation.XY.m128d_f64[0];
        *(double *)(pFVar11 + lVar16 + 0x20 + 8) = local_308.Translation.XY.m128d_f64[1];
        *(double *)(pFVar11 + lVar16 + 0x30) = local_308.Translation.ZW.m128d_f64[0];
        *(double *)(pFVar11 + lVar16 + 0x30 + 8) = local_308.Translation.ZW.m128d_f64[1];
        *(double *)(pFVar11 + lVar16 + 0x40) = local_308.Scale3D.XY.m128d_f64[0];
        *(double *)(pFVar11 + lVar16 + 0x40 + 8) = local_308.Scale3D.XY.m128d_f64[1];
        *(double *)(pFVar11 + lVar16 + 0x50) = local_308.Scale3D.ZW.m128d_f64[0];
        *(double *)(pFVar11 + lVar16 + 0x50 + 8) = local_308.Scale3D.ZW.m128d_f64[1];
        pFVar11 = local_380;
      }
LAB_14a29cc0d:
      uVar15 = (ulonglong)local_378;
      pFVar21 = pFVar21 + 0xf0;
      pFVar19 = pFVar19 + 0xf0;
    }
    if ((this->bEnableLazyEvaluation != false) &&
       (iVar9 = (this->InputTransforms).ArrayNum, 0 < iVar9)) {
      if ((this->LastInputTransforms).ArrayNum == iVar9) {
        uVar18 = 0;
        fVar22 = (float)((uint)this->LazyEvaluationPositionThreshold &
                        __xmm_7fffffff7fffffff7fffffff7fffffff);
        fVar23 = (float)((uint)this->LazyEvaluationRotationThreshold &
                        __xmm_7fffffff7fffffff7fffffff7fffffff);
        fVar24 = (float)((uint)this->LazyEvaluationScaleThreshold &
                        __xmm_7fffffff7fffffff7fffffff7fffffff);
        this->bNeedsEvaluation = false;
        if (0 < (this->InputElementIndices).ArrayNum) {
          do {
            uVar10 = 0;
            if ((int)uVar18 < (this->LastInputTransforms).ArrayNum) {
              uVar10 = ~uVar18 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pFVar19 = (this->LastInputTransforms).AllocatorInstance.Data;
            uVar10 = 0;
            if ((int)uVar18 < (this->InputTransforms).ArrayNum) {
              uVar10 = ~uVar18 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            bVar7 = FRigUnit_PoseGetDelta::AreTransformsEqual
                              ((TTransform<double> *)
                               ((this->InputTransforms).AllocatorInstance.Data +
                               (longlong)(int)uVar18 * 0x60),
                               (TTransform<double> *)(pFVar19 + (longlong)(int)uVar18 * 0x60),fVar22
                               ,fVar23,fVar24);
            if (!bVar7) {
              this->bNeedsEvaluation = true;
              break;
            }
            uVar18 = uVar18 + 1;
          } while ((int)uVar18 < (this->InputElementIndices).ArrayNum);
        }
      }
      pTVar3 = &this->LastInputTransforms;
      if (pTVar3 != &this->InputTransforms) {
        iVar9 = (this->InputTransforms).ArrayNum;
        piVar1 = &(this->LastInputTransforms).ArrayMax;
        pFVar19 = (this->InputTransforms).AllocatorInstance.Data;
        (this->LastInputTransforms).ArrayNum = iVar9;
        if ((iVar9 == 0) && (*piVar1 == 0)) {
          *piVar1 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x60,0x10,iVar9,*piVar1,&pTVar3->AllocatorInstance,iVar9,piVar1);
          if (iVar9 != 0) {
            memcpy((pTVar3->AllocatorInstance).Data,pFVar19,(longlong)iVar9 * 0x60);
          }
        }
      }
    }
    if ((this->bNeedsEvaluation != false) && (uVar18 = 0, 0 < (this->InputElementIndices).ArrayNum))
    {
      lVar20 = 0;
      lVar16 = 0;
      do {
        pUVar5 = (((this->ControlRig).field0_0x0.DebugPtr)->DynamicHierarchy).field0_0x0.DebugPtr;
        uVar10 = 0;
        if ((int)uVar18 < (this->InputTransforms).ArrayNum) {
          uVar10 = ~uVar18 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar19 = (this->InputTransforms).AllocatorInstance.Data;
        uVar10 = 0;
        if ((int)uVar18 < (this->InputElementIndices).ArrayNum) {
          uVar10 = ~uVar18 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        local_368.Rotation.XY.m128d_f64[0] = *(double *)(pFVar19 + lVar16);
        local_368.Rotation.XY.m128d_f64[1] = *(double *)(pFVar19 + lVar16 + 8);
        local_368.Rotation.ZW.m128d_f64[0] = *(double *)(pFVar19 + lVar16 + 0x10);
        local_368.Rotation.ZW.m128d_f64[1] = *(double *)(pFVar19 + lVar16 + 0x10 + 8);
        local_368.Translation.XY.m128d_f64[0] = *(double *)(pFVar19 + lVar16 + 0x20);
        local_368.Translation.XY.m128d_f64[1] = *(double *)(pFVar19 + lVar16 + 0x20 + 8);
        local_368.Translation.ZW.m128d_f64[0] = *(double *)(pFVar19 + lVar16 + 0x30);
        local_368.Translation.ZW.m128d_f64[1] = *(double *)(pFVar19 + lVar16 + 0x30 + 8);
        local_368.Scale3D.XY.m128d_f64[0] = *(double *)(pFVar19 + lVar16 + 0x40);
        local_368.Scale3D.XY.m128d_f64[1] = *(double *)(pFVar19 + lVar16 + 0x40 + 8);
        local_368.Scale3D.ZW.m128d_f64[0] = *(double *)(pFVar19 + lVar16 + 0x50);
        local_368.Scale3D.ZW.m128d_f64[1] = *(double *)(pFVar19 + lVar16 + 0x50 + 8);
        URigHierarchy::SetGlobalTransformByIndex
                  (pUVar5,*(int *)((this->InputElementIndices).AllocatorInstance.Data + lVar20 * 4),
                   &local_368,false,true,false,false);
        uVar18 = uVar18 + 1;
        lVar20 = lVar20 + 1;
        lVar16 = lVar16 + 0x60;
      } while ((int)uVar18 < (this->InputElementIndices).ArrayNum);
    }
    pUVar5 = (((this->ControlRig).field0_0x0.DebugPtr)->DynamicHierarchy).field0_0x0.DebugPtr;
    if (pUVar5 != (URigHierarchy *)0x0) {
      URigHierarchy::ResetChangedCurveIndices(pUVar5);
    }
  }
  return;
}

// TransferOutputs @ 14a29cfc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall UControlRigComponent::TransferOutputs(UControlRigComponent *this)

{
  __m128d *p_Var1;
  ERigElementType EVar2;
  int iVar3;
  UControlRig *pUVar4;
  FScriptContainerElement *pFVar5;
  USceneComponent *pUVar6;
  FName FVar7;
  UInstancedStaticMeshComponent *this_00;
  code *pcVar8;
  double *pdVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  char cVar23;
  bool bVar24;
  uint uVar25;
  uint uVar26;
  int iVar27;
  UClass *pUVar28;
  longlong lVar29;
  FControlRigAnimInstanceProxy *pFVar30;
  float *pfVar31;
  TTransform<double> *pTVar32;
  ulonglong uVar33;
  FControlRigComponentMappedElement *pFVar34;
  FControlRigComponentMappedElement *pFVar35;
  FControlRigAnimInstanceProxy *pFVar36;
  FControlRigAnimInstanceProxy *pFVar37;
  float fVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  undefined4 uVar57;
  undefined4 uVar58;
  undefined4 uVar59;
  undefined4 uVar60;
  undefined4 uVar61;
  undefined4 uVar62;
  undefined1 auStack_558 [32];
  undefined1 local_528;
  undefined1 local_527;
  undefined1 local_526 [6];
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_520;
  FMeshPoseBoneIndex local_510 [2];
  FControlRigComponentMappedElement *local_508;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_500;
  USkeletalMeshComponent *local_4f0;
  USkeletalMesh *local_4e8;
  TTransform<double> local_4d8;
  TTransform<double> local_478;
  TTransform<double> local_418;
  TTransform<double> local_3b8;
  TTransform<double> local_358;
  TTransform<double> local_2f8;
  TTransform<double> local_298;
  TTransform<double> local_238;
  TTransform<double> local_1d8;
  TTransform<double> local_178;
  TTransform<double> local_118;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStack_558;
  pUVar4 = (this->ControlRig).field0_0x0.DebugPtr;
  if (pUVar4 != (UControlRig *)0x0) {
    cVar23 = (**(code **)(pUVar4->_padding_ + 0x490))();
    if (cVar23 == '\0') {
      iVar3 = (this->MappedElements).ArrayNum;
      pFVar30 = (FControlRigAnimInstanceProxy *)0x0;
      pFVar34 = (FControlRigComponentMappedElement *)(this->MappedElements).AllocatorInstance.Data;
      pFVar35 = pFVar34 + iVar3;
      pFVar37 = pFVar30;
      while( true ) {
        if ((this->MappedElements).ArrayNum != iVar3) {
          `TCheckedPointerIterator<FControlRigComponentMappedElement,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_527);
        }
        fVar10 = __real_3f800000;
        if (pFVar34 == pFVar35) break;
        pFVar36 = (FControlRigAnimInstanceProxy *)(pFVar34->SceneComponent).field0_0x0.DebugPtr;
        if (pFVar36 == (FControlRigAnimInstanceProxy *)0x0) {
          bVar24 = pFVar37 == (FControlRigAnimInstanceProxy *)0x0;
        }
        else {
          bVar24 = pFVar36 == pFVar37;
        }
        if (((!bVar24) || (pFVar30 == (FControlRigAnimInstanceProxy *)0x0)) &&
           (pFVar30 = FControlRigComponentMappedElement::GetAnimProxyOnGameThread(pFVar34),
           pFVar30 != (FControlRigAnimInstanceProxy *)0x0)) {
          TSet<TTuple<FMeshPoseBoneIndex,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<FMeshPoseBoneIndex,UE::Math::TTransform<double>,0>,FDefaultSetAllocator>
          ::Reset((TSet<TTuple<FMeshPoseBoneIndex,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<FMeshPoseBoneIndex,UE::Math::TTransform<double>,0>,FDefaultSetAllocator>
                   *)&pFVar30->StoredTransforms);
          TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
          ::Reset((TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
                   *)&pFVar30->StoredCurves);
          UE::Anim::TAttributeContainer<FMeshPoseBoneIndex,TSizedDefaultAllocator<32>_>::Empty
                    ((TAttributeContainer<FMeshPoseBoneIndex,TSizedDefaultAllocator<32>_> *)
                     &pFVar30->StoredAttributes);
          pFVar37 = (FControlRigAnimInstanceProxy *)(pFVar34->SceneComponent).field0_0x0.DebugPtr;
        }
        pFVar34 = pFVar34 + 1;
      }
      iVar3 = (this->MappedElements).ArrayNum;
      uVar33 = (ulonglong)iVar3;
      pFVar34 = (FControlRigComponentMappedElement *)(this->MappedElements).AllocatorInstance.Data;
      local_508 = (FControlRigComponentMappedElement *)CONCAT44(local_508._4_4_,iVar3);
      pFVar35 = pFVar34 + uVar33;
LAB_14a29d400:
      if ((this->MappedElements).ArrayNum != (int)uVar33) {
        `TCheckedPointerIterator<FControlRigComponentMappedElement,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_526);
      }
      if (pFVar34 == pFVar35) {
        if (pFVar30 == (FControlRigAnimInstanceProxy *)0x0) {
          return;
        }
        UE::Anim::TAttributeContainer<FMeshPoseBoneIndex,TSizedDefaultAllocator<32>_>::CopyFrom
                  ((TAttributeContainer<FMeshPoseBoneIndex,TSizedDefaultAllocator<32>_> *)
                   &pFVar30->StoredAttributes,
                   (TAttributeContainer<FMeshPoseBoneIndex,TSizedDefaultAllocator<32>_> *)
                   &this->TempAttributeContainer);
        return;
      }
      if ((((pFVar34->ElementIndex != -1) && (pFVar34->Direction != Input)) &&
          (pUVar6 = (pFVar34->SceneComponent).field0_0x0.DebugPtr, pUVar6 != (USceneComponent *)0x0)
          ) && (((uint)pUVar6->_padding_ >> 0x1e & 1) == 0)) {
        EVar2 = pFVar34->ElementType;
        if ((EVar2 != Bone) && ((EVar2 - Null & 0xfd) != 0)) {
          if ((EVar2 != Curve) || (pFVar34->ElementIndex < 0)) goto LAB_14a29da62;
          pFVar36 = (FControlRigAnimInstanceProxy *)(pFVar34->SceneComponent).field0_0x0.DebugPtr;
          if (pFVar36 == (FControlRigAnimInstanceProxy *)0x0) {
            bVar24 = pFVar37 == (FControlRigAnimInstanceProxy *)0x0;
          }
          else {
            bVar24 = pFVar36 == pFVar37;
          }
          if ((!bVar24) || (pFVar30 == (FControlRigAnimInstanceProxy *)0x0)) {
            pFVar30 = FControlRigComponentMappedElement::GetAnimProxyOnGameThread(pFVar34);
            if (pFVar30 == (FControlRigAnimInstanceProxy *)0x0) goto LAB_14a29da62;
            pFVar37 = (FControlRigAnimInstanceProxy *)(pFVar34->SceneComponent).field0_0x0.DebugPtr;
          }
          fVar38 = URigHierarchy::GetCurveValueByIndex
                             ((((this->ControlRig).field0_0x0.DebugPtr)->DynamicHierarchy).
                              field0_0x0.DebugPtr,pFVar34->ElementIndex);
          FVar7 = pFVar34->TransformName;
          uVar26 = ::GetTypeHash(FVar7.ComparisonIndex.Value);
          pfVar31 = TMapBase<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>
                    ::FindOrAddImpl<FName_const_&>
                              ((TMapBase<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>
                                *)&pFVar30->StoredCurves,uVar26 + FVar7.Number,
                               &pFVar34->TransformName);
          uVar33 = (ulonglong)local_508 & 0xffffffff;
          pFVar34 = pFVar34 + 1;
          *pfVar31 = fVar38;
          goto LAB_14a29d400;
        }
        URigHierarchy::GetGlobalTransformByIndex
                  ((((this->ControlRig).field0_0x0.DebugPtr)->DynamicHierarchy).field0_0x0.DebugPtr,
                   &local_4d8,pFVar34->ElementIndex,false);
        if (pFVar34->Space == WorldSpace) {
          local_418.Rotation.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
          local_418.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
          local_418.Rotation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
          local_418.Rotation.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
          local_418.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
          local_418.Rotation.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
          local_418.Translation.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
          local_418.Translation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          local_418.Translation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
          local_418.Translation.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
          local_418.Translation.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[2];
          local_418.Translation.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
          local_418.Scale3D.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
          local_418.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          local_418.Scale3D.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
          local_418.Scale3D.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
          local_418.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          local_418.Scale3D.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
          UE::Math::TTransform<double>::Multiply
                    (&local_418,&local_4d8,(TTransform<double> *)&this->_padding_);
          local_4d8.Rotation.XY.m128d_f64[0] = local_418.Rotation.XY.m128d_f64[0];
          local_4d8.Rotation.XY.m128d_f64[1] = local_418.Rotation.XY.m128d_f64[1];
          local_4d8.Rotation.ZW.m128d_f64[0] = local_418.Rotation.ZW.m128d_f64[0];
          local_4d8.Rotation.ZW.m128d_f64[1] = local_418.Rotation.ZW.m128d_f64[1];
          local_4d8.Translation.XY.m128d_f64[0] = local_418.Translation.XY.m128d_f64[0];
          local_4d8.Translation.XY.m128d_f64[1] = local_418.Translation.XY.m128d_f64[1];
          local_4d8.Translation.ZW.m128d_f64[0] = local_418.Translation.ZW.m128d_f64[0];
          local_4d8.Translation.ZW.m128d_f64[1] = local_418.Translation.ZW.m128d_f64[1];
          uVar39 = local_418.Scale3D.XY.m128d_f64[0]._0_4_;
          uVar40 = local_418.Scale3D.XY.m128d_f64[0]._4_4_;
          uVar41 = local_418.Scale3D.XY.m128d_f64[1]._0_4_;
          uVar42 = local_418.Scale3D.XY.m128d_f64[1]._4_4_;
          uVar43 = local_418.Scale3D.ZW.m128d_f64[0]._0_4_;
          uVar44 = local_418.Scale3D.ZW.m128d_f64[0]._4_4_;
          uVar45 = local_418.Scale3D.ZW.m128d_f64[1]._0_4_;
          uVar46 = local_418.Scale3D.ZW.m128d_f64[1]._4_4_;
LAB_14a29d668:
          local_4d8.Scale3D.ZW.m128d_f64[0] = (double)CONCAT44(uVar44,uVar43);
          local_4d8.Scale3D.ZW.m128d_f64[1] = (double)CONCAT44(uVar46,uVar45);
          local_4d8.Scale3D.XY.m128d_f64[0] = (double)CONCAT44(uVar40,uVar39);
          local_4d8.Scale3D.XY.m128d_f64[1] = (double)CONCAT44(uVar42,uVar41);
        }
        else if (pFVar34->Space == ActorSpace) {
          pTVar32 = USceneComponent::GetRelativeTransform((USceneComponent *)this,&local_238);
          local_478.Rotation.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
          local_478.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
          local_478.Rotation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
          local_478.Rotation.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
          local_478.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
          local_478.Rotation.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
          local_478.Translation.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
          local_478.Translation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          local_478.Translation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
          local_478.Translation.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
          local_478.Translation.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[2];
          local_478.Translation.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
          local_478.Scale3D.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
          local_478.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          local_478.Scale3D.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
          local_478.Scale3D.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
          local_478.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          local_478.Scale3D.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
          UE::Math::TTransform<double>::Multiply(&local_478,&local_4d8,pTVar32);
          local_4d8.Rotation.XY.m128d_f64[0] = local_478.Rotation.XY.m128d_f64[0];
          local_4d8.Rotation.XY.m128d_f64[1] = local_478.Rotation.XY.m128d_f64[1];
          local_4d8.Rotation.ZW.m128d_f64[0] = local_478.Rotation.ZW.m128d_f64[0];
          local_4d8.Rotation.ZW.m128d_f64[1] = local_478.Rotation.ZW.m128d_f64[1];
          local_4d8.Translation.XY.m128d_f64[0] = local_478.Translation.XY.m128d_f64[0];
          local_4d8.Translation.XY.m128d_f64[1] = local_478.Translation.XY.m128d_f64[1];
          local_4d8.Translation.ZW.m128d_f64[0] = local_478.Translation.ZW.m128d_f64[0];
          local_4d8.Translation.ZW.m128d_f64[1] = local_478.Translation.ZW.m128d_f64[1];
          uVar39 = local_478.Scale3D.XY.m128d_f64[0]._0_4_;
          uVar40 = local_478.Scale3D.XY.m128d_f64[0]._4_4_;
          uVar41 = local_478.Scale3D.XY.m128d_f64[1]._0_4_;
          uVar42 = local_478.Scale3D.XY.m128d_f64[1]._4_4_;
          uVar43 = local_478.Scale3D.ZW.m128d_f64[0]._0_4_;
          uVar44 = local_478.Scale3D.ZW.m128d_f64[0]._4_4_;
          uVar45 = local_478.Scale3D.ZW.m128d_f64[1]._0_4_;
          uVar46 = local_478.Scale3D.ZW.m128d_f64[1]._4_4_;
          goto LAB_14a29d668;
        }
        local_3b8.Rotation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
        local_3b8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_3b8.Rotation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
        local_3b8.Rotation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
        local_3b8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_3b8.Rotation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
        local_3b8.Translation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
        local_3b8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0]
        ;
        local_3b8.Translation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
        local_3b8.Translation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
        local_3b8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2]
        ;
        local_3b8.Translation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
        local_3b8.Scale3D.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
        local_3b8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_3b8.Scale3D.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
        local_3b8.Scale3D.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
        local_3b8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_3b8.Scale3D.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
        UE::Math::TTransform<double>::Multiply(&local_3b8,&local_4d8,&pFVar34->Offset);
        local_4d8.Rotation.XY.m128d_f64[0] = local_3b8.Rotation.XY.m128d_f64[0];
        local_4d8.Rotation.XY.m128d_f64[1] = local_3b8.Rotation.XY.m128d_f64[1];
        local_4d8.Rotation.ZW.m128d_f64[0] = local_3b8.Rotation.ZW.m128d_f64[0];
        local_4d8.Rotation.ZW.m128d_f64[1] = local_3b8.Rotation.ZW.m128d_f64[1];
        local_4d8.Translation.XY.m128d_f64[0] = local_3b8.Translation.XY.m128d_f64[0];
        local_4d8.Translation.XY.m128d_f64[1] = local_3b8.Translation.XY.m128d_f64[1];
        local_4d8.Translation.ZW.m128d_f64[0] = local_3b8.Translation.ZW.m128d_f64[0];
        local_4d8.Translation.ZW.m128d_f64[1] = local_3b8.Translation.ZW.m128d_f64[1];
        local_4d8.Scale3D.XY.m128d_f64[0] = local_3b8.Scale3D.XY.m128d_f64[0];
        local_4d8.Scale3D.XY.m128d_f64[1] = local_3b8.Scale3D.XY.m128d_f64[1];
        local_4d8.Scale3D.ZW.m128d_f64[0] = local_3b8.Scale3D.ZW.m128d_f64[0];
        local_4d8.Scale3D.ZW.m128d_f64[1] = local_3b8.Scale3D.ZW.m128d_f64[1];
        if (pFVar34->SubIndex < 0) {
          fVar38 = pFVar34->Weight;
          if (fVar38 < fVar10) {
            pUVar6 = (pFVar34->SceneComponent).field0_0x0.DebugPtr;
            if (fVar10 <= fVar38) {
              fVar38 = fVar10;
            }
            local_298.Rotation.XY.m128d_f64[0] = (pUVar6->ComponentToWorld).Rotation.XY.m128d_f64[0]
            ;
            local_298.Rotation.XY.m128d_f64[1] = (pUVar6->ComponentToWorld).Rotation.XY.m128d_f64[1]
            ;
            if (fVar38 <= 0.0) {
              fVar38 = 0.0;
            }
            local_298.Rotation.ZW.m128d_f64[0] = (pUVar6->ComponentToWorld).Rotation.ZW.m128d_f64[0]
            ;
            local_298.Rotation.ZW.m128d_f64[1] = (pUVar6->ComponentToWorld).Rotation.ZW.m128d_f64[1]
            ;
            local_298.Translation.XY.m128d_f64[0] =
                 (pUVar6->ComponentToWorld).Translation.XY.m128d_f64[0];
            local_298.Translation.XY.m128d_f64[1] =
                 (pUVar6->ComponentToWorld).Translation.XY.m128d_f64[1];
            local_298.Translation.ZW.m128d_f64[0] =
                 (pUVar6->ComponentToWorld).Translation.ZW.m128d_f64[0];
            local_298.Translation.ZW.m128d_f64[1] =
                 (pUVar6->ComponentToWorld).Translation.ZW.m128d_f64[1];
            local_298.Scale3D.XY.m128d_f64[0] = (pUVar6->ComponentToWorld).Scale3D.XY.m128d_f64[0];
            local_298.Scale3D.XY.m128d_f64[1] = (pUVar6->ComponentToWorld).Scale3D.XY.m128d_f64[1];
            local_298.Scale3D.ZW.m128d_f64[0] = (pUVar6->ComponentToWorld).Scale3D.ZW.m128d_f64[0];
            local_298.Scale3D.ZW.m128d_f64[1] = (pUVar6->ComponentToWorld).Scale3D.ZW.m128d_f64[1];
            pTVar32 = FRigVMMathLibrary::LerpTransform(&local_118,&local_298,&local_4d8,fVar38);
            local_4d8.Rotation.XY.m128d_f64[0] = (pTVar32->Rotation).XY.m128d_f64[0];
            local_4d8.Rotation.XY.m128d_f64[1] = (pTVar32->Rotation).XY.m128d_f64[1];
            local_4d8.Rotation.ZW.m128d_f64[0] = (pTVar32->Rotation).ZW.m128d_f64[0];
            local_4d8.Rotation.ZW.m128d_f64[1] = (pTVar32->Rotation).ZW.m128d_f64[1];
            local_4d8.Translation.XY.m128d_f64[0] = (pTVar32->Translation).XY.m128d_f64[0];
            local_4d8.Translation.XY.m128d_f64[1] = (pTVar32->Translation).XY.m128d_f64[1];
            local_4d8.Translation.ZW.m128d_f64[0] = (pTVar32->Translation).ZW.m128d_f64[0];
            local_4d8.Translation.ZW.m128d_f64[1] = (pTVar32->Translation).ZW.m128d_f64[1];
            local_4d8.Scale3D.XY.m128d_f64[0] = (pTVar32->Scale3D).XY.m128d_f64[0];
            local_4d8.Scale3D.XY.m128d_f64[1] = (pTVar32->Scale3D).XY.m128d_f64[1];
            local_4d8.Scale3D.ZW.m128d_f64[0] = (pTVar32->Scale3D).ZW.m128d_f64[0];
            local_4d8.Scale3D.ZW.m128d_f64[1] = (pTVar32->Scale3D).ZW.m128d_f64[1];
          }
          USceneComponent::SetWorldTransform
                    ((pFVar34->SceneComponent).field0_0x0.DebugPtr,&local_4d8,false,
                     (FHitResult *)0x0,None);
          goto LAB_14a29da62;
        }
        pFVar36 = (FControlRigAnimInstanceProxy *)(pFVar34->SceneComponent).field0_0x0.DebugPtr;
        if (pFVar36 == (FControlRigAnimInstanceProxy *)0x0) {
          bVar24 = pFVar37 == (FControlRigAnimInstanceProxy *)0x0;
        }
        else {
          bVar24 = pFVar36 == pFVar37;
        }
        if ((bVar24) &&
           (uVar39 = local_3b8.Rotation.XY.m128d_f64[0]._0_4_,
           uVar40 = local_3b8.Rotation.XY.m128d_f64[0]._4_4_,
           uVar41 = local_3b8.Rotation.XY.m128d_f64[1]._0_4_,
           uVar42 = local_3b8.Rotation.XY.m128d_f64[1]._4_4_,
           uVar43 = local_3b8.Rotation.ZW.m128d_f64[0]._0_4_,
           uVar44 = local_3b8.Rotation.ZW.m128d_f64[0]._4_4_,
           uVar45 = local_3b8.Rotation.ZW.m128d_f64[1]._0_4_,
           uVar46 = local_3b8.Rotation.ZW.m128d_f64[1]._4_4_,
           uVar47 = local_3b8.Translation.XY.m128d_f64[0]._0_4_,
           uVar48 = local_3b8.Translation.XY.m128d_f64[0]._4_4_,
           uVar49 = local_3b8.Translation.XY.m128d_f64[1]._0_4_,
           uVar50 = local_3b8.Translation.XY.m128d_f64[1]._4_4_,
           uVar51 = local_3b8.Translation.ZW.m128d_f64[0]._0_4_,
           uVar52 = local_3b8.Translation.ZW.m128d_f64[0]._4_4_,
           uVar53 = local_3b8.Translation.ZW.m128d_f64[1]._0_4_,
           uVar54 = local_3b8.Translation.ZW.m128d_f64[1]._4_4_,
           uVar55 = local_3b8.Scale3D.XY.m128d_f64[0]._0_4_,
           uVar56 = local_3b8.Scale3D.XY.m128d_f64[0]._4_4_,
           uVar57 = local_3b8.Scale3D.XY.m128d_f64[1]._0_4_,
           uVar58 = local_3b8.Scale3D.XY.m128d_f64[1]._4_4_,
           uVar59 = local_3b8.Scale3D.ZW.m128d_f64[0]._0_4_,
           uVar60 = local_3b8.Scale3D.ZW.m128d_f64[0]._4_4_,
           uVar61 = local_3b8.Scale3D.ZW.m128d_f64[1]._0_4_,
           uVar62 = local_3b8.Scale3D.ZW.m128d_f64[1]._4_4_,
           pFVar30 != (FControlRigAnimInstanceProxy *)0x0)) {
LAB_14a29d78f:
          if (pFVar36 != (FControlRigAnimInstanceProxy *)0x0) {
            if (pFVar34->Space == WorldSpace) {
              pTVar32 = UE::Math::TTransform<double>::GetRelativeTransform
                                  (&local_4d8,&local_1d8,(TTransform<double> *)&pFVar36->field_0x1f0
                                  );
              uVar39 = *(undefined4 *)(pTVar32->Rotation).XY.m128d_f64;
              uVar40 = *(undefined4 *)((longlong)(pTVar32->Rotation).XY.m128d_f64 + 4);
              local_4d8.Rotation.XY.m128d_f64[0] = (pTVar32->Rotation).XY.m128d_f64[0];
              pdVar9 = (pTVar32->Rotation).XY.m128d_f64 + 1;
              uVar41 = *(undefined4 *)pdVar9;
              uVar42 = *(undefined4 *)((longlong)(pTVar32->Rotation).XY.m128d_f64 + 0xc);
              local_4d8.Rotation.XY.m128d_f64[1] = *pdVar9;
              p_Var1 = &(pTVar32->Rotation).ZW;
              uVar43 = *(undefined4 *)p_Var1->m128d_f64;
              uVar44 = *(undefined4 *)((longlong)(pTVar32->Rotation).ZW.m128d_f64 + 4);
              local_4d8.Rotation.ZW.m128d_f64[0] = p_Var1->m128d_f64[0];
              pdVar9 = (pTVar32->Rotation).ZW.m128d_f64 + 1;
              uVar45 = *(undefined4 *)pdVar9;
              uVar46 = *(undefined4 *)((longlong)(pTVar32->Rotation).ZW.m128d_f64 + 0xc);
              local_4d8.Rotation.ZW.m128d_f64[1] = *pdVar9;
              uVar47 = *(undefined4 *)(pTVar32->Translation).XY.m128d_f64;
              uVar48 = *(undefined4 *)((longlong)(pTVar32->Translation).XY.m128d_f64 + 4);
              local_4d8.Translation.XY.m128d_f64[0] = (pTVar32->Translation).XY.m128d_f64[0];
              pdVar9 = (pTVar32->Translation).XY.m128d_f64 + 1;
              uVar49 = *(undefined4 *)pdVar9;
              uVar50 = *(undefined4 *)((longlong)(pTVar32->Translation).XY.m128d_f64 + 0xc);
              local_4d8.Translation.XY.m128d_f64[1] = *pdVar9;
              p_Var1 = &(pTVar32->Translation).ZW;
              uVar51 = *(undefined4 *)p_Var1->m128d_f64;
              uVar52 = *(undefined4 *)((longlong)(pTVar32->Translation).ZW.m128d_f64 + 4);
              local_4d8.Translation.ZW.m128d_f64[0] = p_Var1->m128d_f64[0];
              pdVar9 = (pTVar32->Translation).ZW.m128d_f64 + 1;
              uVar53 = *(undefined4 *)pdVar9;
              uVar54 = *(undefined4 *)((longlong)(pTVar32->Translation).ZW.m128d_f64 + 0xc);
              local_4d8.Translation.ZW.m128d_f64[1] = *pdVar9;
              uVar55 = *(undefined4 *)(pTVar32->Scale3D).XY.m128d_f64;
              uVar56 = *(undefined4 *)((longlong)(pTVar32->Scale3D).XY.m128d_f64 + 4);
              local_4d8.Scale3D.XY.m128d_f64[0] = (pTVar32->Scale3D).XY.m128d_f64[0];
              pdVar9 = (pTVar32->Scale3D).XY.m128d_f64 + 1;
              uVar57 = *(undefined4 *)pdVar9;
              uVar58 = *(undefined4 *)((longlong)(pTVar32->Scale3D).XY.m128d_f64 + 0xc);
              local_4d8.Scale3D.XY.m128d_f64[1] = *pdVar9;
              p_Var1 = &(pTVar32->Scale3D).ZW;
              uVar59 = *(undefined4 *)p_Var1->m128d_f64;
              uVar60 = *(undefined4 *)((longlong)(pTVar32->Scale3D).ZW.m128d_f64 + 4);
              local_4d8.Scale3D.ZW.m128d_f64[0] = p_Var1->m128d_f64[0];
              pdVar9 = (pTVar32->Scale3D).ZW.m128d_f64 + 1;
              uVar61 = *(undefined4 *)pdVar9;
              uVar62 = *(undefined4 *)((longlong)(pTVar32->Scale3D).ZW.m128d_f64 + 0xc);
              local_4d8.Scale3D.ZW.m128d_f64[1] = *pdVar9;
            }
            local_510[0] = (FMeshPoseBoneIndex)pFVar34->SubIndex;
            pTVar32 = TMapBase<FMeshPoseBoneIndex,UE::Math::TTransform<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMeshPoseBoneIndex,UE::Math::TTransform<double>,0>_>
                      ::FindOrAddImpl<FMeshPoseBoneIndex>
                                ((TMapBase<FMeshPoseBoneIndex,UE::Math::TTransform<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMeshPoseBoneIndex,UE::Math::TTransform<double>,0>_>
                                  *)&pFVar30->StoredTransforms,(uint)local_510[0],local_510);
            uVar33 = (ulonglong)local_508 & 0xffffffff;
            pFVar34 = pFVar34 + 1;
            *(undefined4 *)(pTVar32->Rotation).XY.m128d_f64 = uVar39;
            *(undefined4 *)((longlong)(pTVar32->Rotation).XY.m128d_f64 + 4) = uVar40;
            *(undefined4 *)((pTVar32->Rotation).XY.m128d_f64 + 1) = uVar41;
            *(undefined4 *)((longlong)(pTVar32->Rotation).XY.m128d_f64 + 0xc) = uVar42;
            *(undefined4 *)(pTVar32->Rotation).ZW.m128d_f64 = uVar43;
            *(undefined4 *)((longlong)(pTVar32->Rotation).ZW.m128d_f64 + 4) = uVar44;
            *(undefined4 *)((pTVar32->Rotation).ZW.m128d_f64 + 1) = uVar45;
            *(undefined4 *)((longlong)(pTVar32->Rotation).ZW.m128d_f64 + 0xc) = uVar46;
            *(undefined4 *)(pTVar32->Translation).XY.m128d_f64 = uVar47;
            *(undefined4 *)((longlong)(pTVar32->Translation).XY.m128d_f64 + 4) = uVar48;
            *(undefined4 *)((pTVar32->Translation).XY.m128d_f64 + 1) = uVar49;
            *(undefined4 *)((longlong)(pTVar32->Translation).XY.m128d_f64 + 0xc) = uVar50;
            *(undefined4 *)(pTVar32->Translation).ZW.m128d_f64 = uVar51;
            *(undefined4 *)((longlong)(pTVar32->Translation).ZW.m128d_f64 + 4) = uVar52;
            *(undefined4 *)((pTVar32->Translation).ZW.m128d_f64 + 1) = uVar53;
            *(undefined4 *)((longlong)(pTVar32->Translation).ZW.m128d_f64 + 0xc) = uVar54;
            *(undefined4 *)(pTVar32->Scale3D).XY.m128d_f64 = uVar55;
            *(undefined4 *)((longlong)(pTVar32->Scale3D).XY.m128d_f64 + 4) = uVar56;
            *(undefined4 *)((pTVar32->Scale3D).XY.m128d_f64 + 1) = uVar57;
            *(undefined4 *)((longlong)(pTVar32->Scale3D).XY.m128d_f64 + 0xc) = uVar58;
            *(undefined4 *)(pTVar32->Scale3D).ZW.m128d_f64 = uVar59;
            *(undefined4 *)((longlong)(pTVar32->Scale3D).ZW.m128d_f64 + 4) = uVar60;
            *(undefined4 *)((pTVar32->Scale3D).ZW.m128d_f64 + 1) = uVar61;
            *(undefined4 *)((longlong)(pTVar32->Scale3D).ZW.m128d_f64 + 0xc) = uVar62;
            goto LAB_14a29d400;
          }
        }
        else {
          pFVar30 = FControlRigComponentMappedElement::GetAnimProxyOnGameThread(pFVar34);
          if (pFVar30 != (FControlRigAnimInstanceProxy *)0x0) {
            pFVar36 = (FControlRigAnimInstanceProxy *)(pFVar34->SceneComponent).field0_0x0.DebugPtr;
            pFVar37 = pFVar36;
            uVar39 = local_4d8.Rotation.XY.m128d_f64[0]._0_4_;
            uVar40 = local_4d8.Rotation.XY.m128d_f64[0]._4_4_;
            uVar41 = local_4d8.Rotation.XY.m128d_f64[1]._0_4_;
            uVar42 = local_4d8.Rotation.XY.m128d_f64[1]._4_4_;
            uVar43 = local_4d8.Rotation.ZW.m128d_f64[0]._0_4_;
            uVar44 = local_4d8.Rotation.ZW.m128d_f64[0]._4_4_;
            uVar45 = local_4d8.Rotation.ZW.m128d_f64[1]._0_4_;
            uVar46 = local_4d8.Rotation.ZW.m128d_f64[1]._4_4_;
            uVar47 = local_4d8.Translation.XY.m128d_f64[0]._0_4_;
            uVar48 = local_4d8.Translation.XY.m128d_f64[0]._4_4_;
            uVar49 = local_4d8.Translation.XY.m128d_f64[1]._0_4_;
            uVar50 = local_4d8.Translation.XY.m128d_f64[1]._4_4_;
            uVar51 = local_4d8.Translation.ZW.m128d_f64[0]._0_4_;
            uVar52 = local_4d8.Translation.ZW.m128d_f64[0]._4_4_;
            uVar53 = local_4d8.Translation.ZW.m128d_f64[1]._0_4_;
            uVar54 = local_4d8.Translation.ZW.m128d_f64[1]._4_4_;
            uVar55 = local_4d8.Scale3D.XY.m128d_f64[0]._0_4_;
            uVar56 = local_4d8.Scale3D.XY.m128d_f64[0]._4_4_;
            uVar57 = local_4d8.Scale3D.XY.m128d_f64[1]._0_4_;
            uVar58 = local_4d8.Scale3D.XY.m128d_f64[1]._4_4_;
            uVar59 = local_4d8.Scale3D.ZW.m128d_f64[0]._0_4_;
            uVar60 = local_4d8.Scale3D.ZW.m128d_f64[0]._4_4_;
            uVar61 = local_4d8.Scale3D.ZW.m128d_f64[1]._0_4_;
            uVar62 = local_4d8.Scale3D.ZW.m128d_f64[1]._4_4_;
            goto LAB_14a29d78f;
          }
        }
        if ((pFVar34->SceneComponent).field0_0x0.DebugPtr == (USceneComponent *)0x0)
        goto LAB_14a29da62;
        pUVar28 = Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
        bVar24 = FObjectPtr::IsA((FObjectPtr *)&pFVar34->SceneComponent,pUVar28);
        if ((bVar24) &&
           (this_00 = (UInstancedStaticMeshComponent *)(pFVar34->SceneComponent).field0_0x0.DebugPtr
           , this_00 != (UInstancedStaticMeshComponent *)0x0)) {
          iVar3 = pFVar34->SubIndex;
          iVar27 = (**(code **)(this_00->_padding_ + 0xc68))(this_00);
          if (iVar3 < iVar27) {
            if (pFVar34->Weight <= fVar10 && fVar10 != pFVar34->Weight) {
              local_358.Rotation.XY.m128d_f64 =
                   UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
              local_358.Rotation.ZW.m128d_f64 =
                   UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
              local_358.Translation.XY.m128d_f64 =
                   UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
              local_358.Translation.ZW.m128d_f64 =
                   UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
              local_358.Scale3D.XY.m128d_f64 =
                   UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
              local_358.Scale3D.ZW.m128d_f64 =
                   UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
              UInstancedStaticMeshComponent::GetInstanceTransform(this_00,iVar3,&local_358,true);
              fVar38 = pFVar34->Weight;
              if (fVar10 <= pFVar34->Weight) {
                fVar38 = fVar10;
              }
              if (fVar38 <= 0.0) {
                fVar38 = 0.0;
              }
              pTVar32 = FRigVMMathLibrary::LerpTransform(&local_178,&local_358,&local_4d8,fVar38);
              local_4d8.Rotation.XY.m128d_f64[0] = (pTVar32->Rotation).XY.m128d_f64[0];
              local_4d8.Rotation.XY.m128d_f64[1] = (pTVar32->Rotation).XY.m128d_f64[1];
              local_4d8.Rotation.ZW.m128d_f64[0] = (pTVar32->Rotation).ZW.m128d_f64[0];
              local_4d8.Rotation.ZW.m128d_f64[1] = (pTVar32->Rotation).ZW.m128d_f64[1];
              local_4d8.Translation.XY.m128d_f64[0] = (pTVar32->Translation).XY.m128d_f64[0];
              local_4d8.Translation.XY.m128d_f64[1] = (pTVar32->Translation).XY.m128d_f64[1];
              local_4d8.Translation.ZW.m128d_f64[0] = (pTVar32->Translation).ZW.m128d_f64[0];
              local_4d8.Translation.ZW.m128d_f64[1] = (pTVar32->Translation).ZW.m128d_f64[1];
              local_4d8.Scale3D.XY.m128d_f64[0] = (pTVar32->Scale3D).XY.m128d_f64[0];
              local_4d8.Scale3D.XY.m128d_f64[1] = (pTVar32->Scale3D).XY.m128d_f64[1];
              local_4d8.Scale3D.ZW.m128d_f64[0] = (pTVar32->Scale3D).ZW.m128d_f64[0];
              local_4d8.Scale3D.ZW.m128d_f64[1] = (pTVar32->Scale3D).ZW.m128d_f64[1];
            }
            (**(code **)(this_00->_padding_ + 0xbf0))(this_00,pFVar34->SubIndex,&local_4d8);
            uVar33 = (ulonglong)local_508 & 0xffffffff;
            pFVar34 = pFVar34 + 1;
            goto LAB_14a29d400;
          }
        }
      }
LAB_14a29da62:
      uVar33 = (ulonglong)local_508 & 0xffffffff;
      pFVar34 = pFVar34 + 1;
      goto LAB_14a29d400;
    }
    if ((0 < (this->MappedElements).ArrayNum) &&
       (pFVar5 = (this->MappedElements).AllocatorInstance.Data, *(longlong *)(pFVar5 + 0xd8) != 0))
    {
      pUVar28 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
      bVar24 = FObjectPtr::IsA((FObjectPtr *)(pFVar5 + 0xd8),pUVar28);
      if ((bVar24) &&
         ((local_4f0 = *(USkeletalMeshComponent **)(pFVar5 + 0xd8),
          local_4f0 != (USkeletalMeshComponent *)0x0 &&
          (local_4e8 = USkeletalMeshComponent::GetSkeletalMeshAsset(local_4f0),
          local_4e8 != (USkeletalMesh *)0x0)))) {
        pFVar30 = (FControlRigAnimInstanceProxy *)0x0;
        local_520.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_520.ArrayNum = 0;
        local_520.ArrayMax = 0;
        lVar29 = (**(code **)(local_4e8->_padding_ + 800))(local_4e8);
        TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                  (&local_520,*(int *)(lVar29 + 0x28),Default);
        iVar3 = (this->MappedElements).ArrayNum;
        pFVar34 = (FControlRigComponentMappedElement *)(this->MappedElements).AllocatorInstance.Data
        ;
        pFVar35 = pFVar34 + iVar3;
        pFVar37 = pFVar30;
        local_508 = pFVar35;
        while( true ) {
          if ((this->MappedElements).ArrayNum != iVar3) {
            local_528 = 0;
            `TCheckedPointerIterator<FControlRigComponentMappedElement,int,0>::operator!='::__l2::
            <lambda_1>::operator()(&local_528);
          }
          if (pFVar34 == pFVar35) break;
          pFVar36 = (FControlRigAnimInstanceProxy *)(pFVar34->SceneComponent).field0_0x0.DebugPtr;
          if (pFVar36 == (FControlRigAnimInstanceProxy *)0x0) {
            bVar24 = pFVar37 == (FControlRigAnimInstanceProxy *)0x0;
          }
          else {
            bVar24 = pFVar36 == pFVar37;
          }
          if (((!bVar24) || (pFVar30 == (FControlRigAnimInstanceProxy *)0x0)) &&
             (pFVar30 = FControlRigComponentMappedElement::GetAnimProxyOnGameThread(pFVar34),
             pFVar30 != (FControlRigAnimInstanceProxy *)0x0)) {
            TSet<TTuple<FMeshPoseBoneIndex,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<FMeshPoseBoneIndex,UE::Math::TTransform<double>,0>,FDefaultSetAllocator>
            ::Reset((TSet<TTuple<FMeshPoseBoneIndex,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<FMeshPoseBoneIndex,UE::Math::TTransform<double>,0>,FDefaultSetAllocator>
                     *)&pFVar30->StoredTransforms);
            TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
            ::Reset((TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
                     *)&pFVar30->StoredCurves);
            UE::Anim::TAttributeContainer<FMeshPoseBoneIndex,TSizedDefaultAllocator<32>_>::Empty
                      ((TAttributeContainer<FMeshPoseBoneIndex,TSizedDefaultAllocator<32>_> *)
                       &pFVar30->StoredAttributes);
            pFVar37 = (FControlRigAnimInstanceProxy *)(pFVar34->SceneComponent).field0_0x0.DebugPtr;
          }
          if ((((pFVar34->ElementIndex != -1) && (pFVar34->Direction != Input)) &&
              ((pFVar34->ElementType == Bone || ((pFVar34->ElementType - Null & 0xfd) == 0)))) &&
             ((-1 < pFVar34->SubIndex && (pFVar34->SubIndex < local_520.ArrayNum)))) {
            URigHierarchy::GetLocalTransformByIndex
                      ((((this->ControlRig).field0_0x0.DebugPtr)->DynamicHierarchy).field0_0x0.
                       DebugPtr,&local_2f8,pFVar34->ElementIndex,false);
            dVar22 = local_2f8.Scale3D.ZW.m128d_f64[1];
            dVar21 = local_2f8.Scale3D.ZW.m128d_f64[0];
            dVar20 = local_2f8.Scale3D.XY.m128d_f64[1];
            dVar19 = local_2f8.Scale3D.XY.m128d_f64[0];
            dVar18 = local_2f8.Translation.ZW.m128d_f64[1];
            dVar17 = local_2f8.Translation.ZW.m128d_f64[0];
            dVar16 = local_2f8.Translation.XY.m128d_f64[1];
            dVar15 = local_2f8.Translation.XY.m128d_f64[0];
            dVar14 = local_2f8.Rotation.ZW.m128d_f64[1];
            dVar13 = local_2f8.Rotation.ZW.m128d_f64[0];
            dVar12 = local_2f8.Rotation.XY.m128d_f64[1];
            dVar11 = local_2f8.Rotation.XY.m128d_f64[0];
            uVar26 = pFVar34->SubIndex;
            uVar25 = 0;
            if ((int)uVar26 < local_520.ArrayNum) {
              uVar25 = ~uVar26 >> 0x1f;
            }
            if ((uVar25 == 0) &&
               (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar24)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            lVar29 = (longlong)(int)uVar26 * 0x60;
            *(double *)(local_520.AllocatorInstance.Data + lVar29) = dVar11;
            *(double *)(local_520.AllocatorInstance.Data + lVar29 + 8) = dVar12;
            *(double *)(local_520.AllocatorInstance.Data + lVar29 + 0x10) = dVar13;
            *(double *)(local_520.AllocatorInstance.Data + lVar29 + 0x10 + 8) = dVar14;
            *(double *)(local_520.AllocatorInstance.Data + lVar29 + 0x20) = dVar15;
            *(double *)(local_520.AllocatorInstance.Data + lVar29 + 0x20 + 8) = dVar16;
            *(double *)(local_520.AllocatorInstance.Data + lVar29 + 0x30) = dVar17;
            *(double *)(local_520.AllocatorInstance.Data + lVar29 + 0x30 + 8) = dVar18;
            *(double *)(local_520.AllocatorInstance.Data + lVar29 + 0x40) = dVar19;
            *(double *)(local_520.AllocatorInstance.Data + lVar29 + 0x40 + 8) = dVar20;
            *(double *)(local_520.AllocatorInstance.Data + lVar29 + 0x50) = dVar21;
            *(double *)(local_520.AllocatorInstance.Data + lVar29 + 0x50 + 8) = dVar22;
            pFVar35 = local_508;
          }
          pFVar34 = pFVar34 + 1;
        }
        local_500.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_500.ArrayNum = 0;
        local_500.ArrayMax = 0;
        TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                  (&local_500,local_520.ArrayNum,Default);
        USkinnedAsset::FillComponentSpaceTransforms
                  ((USkinnedAsset *)local_4e8,&local_520,
                   &local_4f0->FillComponentSpaceTransformsRequiredBones,
                   (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
                   (&local_4f0->_padding_ +
                   (longlong)*(int *)((longlong)&local_4f0->_padding_ + 4) * 2));
        if (pFVar30 != (FControlRigAnimInstanceProxy *)0x0) {
          UE::Anim::TAttributeContainer<FMeshPoseBoneIndex,TSizedDefaultAllocator<32>_>::CopyFrom
                    ((TAttributeContainer<FMeshPoseBoneIndex,TSizedDefaultAllocator<32>_> *)
                     &pFVar30->StoredAttributes,
                     (TAttributeContainer<FMeshPoseBoneIndex,TSizedDefaultAllocator<32>_> *)
                     &this->TempAttributeContainer);
        }
        if (local_500.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_500.AllocatorInstance.Data);
        }
        if (local_520.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_520.AllocatorInstance.Data);
        }
      }
    }
  }
  return;
}

// Update @ 14a2a1a40

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UControlRigComponent::Update(UControlRigComponent *this,float param_1)

{
  char cVar1;
  int iVar2;
  UControlRig *this_00;
  UControlRig *pUVar3;
  FString local_38;
  FString local_28 [2];
  
  this_00 = SetupControlRigIfRequired(this);
  if ((((this_00 != (UControlRig *)0x0) &&
       (iVar2 = (**(code **)(*(longlong *)CVarControlRigDisableExecutionComponent._padding_ + 200))
                          (), iVar2 == 0)) &&
      (pUVar3 = SetupControlRigIfRequired(this), pUVar3 != (UControlRig *)0x0)) &&
     (cVar1 = (**(code **)(pUVar3->_padding_ + 0x2b8))(pUVar3), cVar1 != '\0')) {
    if (((int)this_00->_padding_ < 1) && (*(int *)((longlong)&this_00->_padding_ + 4) < 1)) {
      URigVMHost::SetDeltaTime((URigVMHost *)this_00,param_1);
      this_00->bResetInitialTransformsBeforeConstruction = this->bResetInitialsBeforeConstruction;
      if (this->bResetTransformBeforeTick != false) {
        URigHierarchy::ResetPoseToInitial((this_00->DynamicHierarchy).field0_0x0.DebugPtr,Bone);
      }
      TransferInputs(this);
      if (this->bNeedsEvaluation != false) {
        cVar1 = (**(code **)(this_00->_padding_ + 0x490))(this_00);
        if ((cVar1 != '\0') && (0.0 < param_1)) {
          UControlRig::ClearPoseBeforeBackwardsSolve(this_00);
        }
        UE::Anim::TAttributeContainer<FMeshPoseBoneIndex,TSizedDefaultAllocator<32>_>::Empty
                  ((TAttributeContainer<FMeshPoseBoneIndex,TSizedDefaultAllocator<32>_> *)
                   &this->TempAttributeContainer);
        this_00->ExternalAnimAttributeContainer = &this->TempAttributeContainer;
        (**(code **)(this_00->_padding_ + 0x2d0))(this_00);
        this_00->ExternalAnimAttributeContainer = (FMeshAttributeContainer *)0x0;
      }
    }
    else {
      ::FString::FString(&local_38,L"Update is being called recursively.");
      if (2 < (byte)LogControlRig._0_1_) {
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,local_28,(UObject *)0x0);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogControlRig);
        if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
        }
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    if ((this->bShowDebugDrawing != false) && (0 < (int)this_00->_padding_)) {
      UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
    }
  }
  return;
}

// ValidateMappingData @ 14a2ac990

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UControlRigComponent::ValidateMappingData(UControlRigComponent *this)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  UControlRigComponent *pUVar5;
  code *pcVar6;
  undefined1 *puVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 uVar10;
  TMap<USkeletalMeshComponent_*,UControlRigComponent::FCachedSkeletalMeshComponentSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<USkeletalMeshComponent_*,UControlRigComponent::FCachedSkeletalMeshComponentSettings,0>_>
  *pTVar11;
  float fVar12;
  USkeletalMeshComponent *this_00;
  undefined4 uVar13;
  bool bVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  UObject *pUVar18;
  UClass *pUVar19;
  FName FVar20;
  FName FVar21;
  FString *pFVar22;
  UActorComponent *pUVar23;
  USkeletalMesh *this_01;
  UAnimInstance *pUVar24;
  void *pvVar25;
  ulonglong uVar26;
  ForElementType<FSetElementId> FVar27;
  longlong lVar28;
  TMap<USkeletalMeshComponent_*,UControlRigComponent::FCachedSkeletalMeshComponentSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<USkeletalMeshComponent_*,UControlRigComponent::FCachedSkeletalMeshComponentSettings,0>_>
  *pTVar29;
  uint uVar30;
  void *_Dst;
  FSoftComponentReference *this_02;
  undefined1 *puVar31;
  uint *puVar32;
  FSoftComponentReference *pFVar33;
  FName FVar34;
  undefined1 auStackY_238 [32];
  undefined1 local_1f8 [8];
  USkeletalMeshComponent *local_1f0;
  undefined1 local_1e8 [4];
  uint local_1e4;
  FWeakObjectPtr local_1e0;
  undefined1 local_1d8 [16];
  longlong local_1c8;
  longlong lStack_1c0;
  FName local_1b8;
  undefined1 local_1b0 [40];
  FName local_188;
  UControlRigComponent *local_180;
  TMap<USkeletalMeshComponent_*,UControlRigComponent::FCachedSkeletalMeshComponentSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<USkeletalMeshComponent_*,UControlRigComponent::FCachedSkeletalMeshComponentSettings,0>_>
  *local_178;
  int iStack_170;
  uint uStack_16c;
  undefined1 *local_168;
  undefined4 uStack_160;
  int iStack_15c;
  int local_158;
  int iStack_154;
  int iStack_150;
  undefined4 uStack_14c;
  TPairInitializer<USkeletalMeshComponent_*_const_&,UControlRigComponent::FCachedSkeletalMeshComponentSettings_const_&>
  local_148;
  UControlRigComponent *local_138;
  FRigElementKey local_130;
  TMap<USkeletalMeshComponent_*,UControlRigComponent::FCachedSkeletalMeshComponentSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<USkeletalMeshComponent_*,UControlRigComponent::FCachedSkeletalMeshComponentSettings,0>_>
  *local_120;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_118;
  undefined8 uStack_f8;
  undefined8 local_f0;
  UClass *local_e8;
  byte local_e0;
  FString local_d8;
  USkeletalMeshComponent **local_c8;
  undefined8 *local_c0;
  FString local_b8;
  FString local_a8;
  undefined1 local_98 [32];
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  undefined1 local_60 [8];
  ForElementType<FSetElementId> local_58;
  uint local_50;
  ulonglong local_48;
  
  fVar12 = __real_322bcc77;
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_238;
  local_98._0_8_ = (void *)0x0;
  local_98._8_8_ = 0;
  local_78 = 0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_58 = (ForElementType<FSetElementId>)0x0;
  local_50 = 0;
  local_180 = this;
  if ((this->ControlRig).field0_0x0.DebugPtr != (UControlRig *)0x0) {
    this_02 = (FSoftComponentReference *)(this->MappedElements).AllocatorInstance.Data;
    local_1e4 = (this->MappedElements).ArrayNum;
    uVar26 = (ulonglong)(int)local_1e4;
    pFVar33 = (FSoftComponentReference *)((longlong)this_02 + uVar26 * 0xf0);
    while( true ) {
      FVar34.ComparisonIndex.Value = 0;
      FVar34.Number = 0;
      if ((this->MappedElements).ArrayNum != (int)uVar26) {
        local_1f8[0] = 0;
        `TCheckedPointerIterator<FControlRigComponentMappedElement,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_1f8);
      }
      if (this_02 == pFVar33) break;
      this_02[3]._padding_ = -1;
      pUVar18 = TPersistentObjectPtr<FSoftObjectPath>::Get
                          ((TPersistentObjectPtr<FSoftObjectPath> *)&this_02->OtherActor);
      if (pUVar18 == (UObject *)0x0) {
LAB_14a2acaed:
        FVar20 = (FName)this->_padding_;
      }
      else {
        pUVar19 = Z_Construct_UClass_AActor_NoRegister();
        iVar15 = (int)pUVar19->_padding_;
        if ((*(int *)(*(longlong *)&pUVar18->field_0x10 + 0x38) < iVar15) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar18->field_0x10 + 0x30) + (longlong)iVar15 * 8) !=
            &pUVar19->_padding_)) goto LAB_14a2acaed;
        FVar20 = (FName)TPersistentObjectPtr<FSoftObjectPath>::Get
                                  ((TPersistentObjectPtr<FSoftObjectPath> *)&this_02->OtherActor);
        if (FVar20 == (FName)0x0) {
LAB_14a2acae8:
          FVar20 = FVar34;
        }
        else {
          pUVar19 = Z_Construct_UClass_AActor_NoRegister();
          iVar15 = (int)pUVar19->_padding_;
          if ((*(int *)(*(longlong *)((longlong)FVar20 + 0x10) + 0x38) < iVar15) ||
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)((longlong)FVar20 + 0x10) + 0x30) + (longlong)iVar15 * 8)
              != &pUVar19->_padding_)) goto LAB_14a2acae8;
        }
      }
      FVar21 = (FName)FSoftComponentReference::GetComponent(this_02,(AActor *)FVar20);
      if (FVar21 == (FName)0x0) {
LAB_14a2acb2a:
        FVar21 = FVar34;
      }
      else {
        pUVar19 = Z_Construct_UClass_USceneComponent_NoRegister();
        iVar15 = (int)pUVar19->_padding_;
        if ((*(int *)(*(longlong *)((longlong)FVar21 + 0x10) + 0x38) < iVar15) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)((longlong)FVar21 + 0x10) + 0x30) + (longlong)iVar15 * 8)
            != &pUVar19->_padding_)) goto LAB_14a2acb2a;
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar21 != (FName)0x0)) {
        UE::GC::MarkAsReachable((UObject *)FVar21);
      }
      this_02[3]._padding_ = (longlong)FVar21;
      if (FVar21 == (FName)0x0) {
        local_1c8 = 0;
        lStack_1c0 = 0;
        local_1d8._8_8_ = (FScriptContainerElement *)0x0;
        local_1b0._16_8_ = (FScriptContainerElement *)0x0;
        local_1d8._0_8_ = FVar21;
        local_1b8 = FVar21;
        local_1b0._0_8_ = FVar21;
        local_1b0._8_8_ = FVar21;
        local_1b0._24_8_ = FVar21;
        local_188 = FVar21;
        FUtf8String::Reset((FUtf8String *)(local_1b0 + 0x10),0);
        local_148.Value = (FCachedSkeletalMeshComponentSettings *)0x0;
        FSoftObjectPtr::operator=((FSoftObjectPtr *)&local_1b8,(FObjectPtr)&local_148.Value);
        pFVar22 = ::FName::ToString((FName *)this_02,&local_b8);
        if ((FString *)(local_1d8 + 8) != pFVar22) {
          if ((FScriptContainerElement *)local_1d8._8_8_ != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_1d8._8_8_);
          }
          local_1d8._8_8_ = (pFVar22->Data).AllocatorInstance.Data;
          (pFVar22->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_1c8._0_4_ = (pFVar22->Data).ArrayNum;
          local_1c8._4_4_ = (pFVar22->Data).ArrayMax;
          (pFVar22->Data).ArrayNum = 0;
          (pFVar22->Data).ArrayMax = 0;
        }
        if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b8.Data.AllocatorInstance.Data);
        }
        pUVar23 = FSoftComponentReference::GetComponent
                            ((FSoftComponentReference *)local_1d8,(AActor *)FVar20);
        if (pUVar23 != (UActorComponent *)0x0) {
          pUVar19 = Z_Construct_UClass_USceneComponent_NoRegister();
          uVar10 = local_1d8._8_8_;
          iVar15 = (int)pUVar19->_padding_;
          if ((iVar15 <= *(int *)(pUVar23->_padding_ + 0x38)) &&
             ((longlong *)
              *(undefined1 **)(*(longlong *)(pUVar23->_padding_ + 0x30) + (longlong)iVar15 * 8) ==
              &pUVar19->_padding_)) {
            plVar9 = &this_02->_padding_;
            this_02->_padding_ = local_1d8._0_8_;
            if (plVar9 != (longlong *)(local_1d8 + 8)) {
              iVar16 = (int)local_1c8;
              lVar28 = (longlong)(int)local_1c8;
              piVar1 = (int *)((longlong)&this_02->_padding_ + 4);
              iVar15 = *piVar1;
              *(int *)&this_02->_padding_ = (int)local_1c8;
              if (((int)local_1c8 == 0) && (iVar15 == 0)) {
                *piVar1 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,(int)local_1c8,iVar15,(ForAnyElementType *)plVar9,(int)local_1c8,
                           piVar1);
                if (iVar16 != 0) {
                  memcpy((void *)*plVar9,(void *)uVar10,lVar28 * 2);
                }
              }
            }
            this_02->_padding_ = lStack_1c0;
            *(uint *)&(this_02->OtherActor).SoftObjectPtr.field_0x0 =
                 local_1b8.ComparisonIndex.Value;
            *(uint *)&(this_02->OtherActor).SoftObjectPtr.field_0x4 = local_1b8.Number;
            FSoftObjectPath::operator=
                      ((FSoftObjectPath *)&(this_02->OtherActor).SoftObjectPtr.field_0x8,
                       (FSoftObjectPath *)local_1b0);
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)pUVar23);
            }
            this_02[3]._padding_ = (longlong)pUVar23;
            this = local_180;
          }
        }
        if ((FScriptContainerElement *)local_1b0._16_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_1b0._16_8_);
        }
        if ((FScriptContainerElement *)local_1d8._8_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_1d8._8_8_);
        }
      }
      pUVar5 = (UControlRigComponent *)this_02[3]._padding_;
      if (((pUVar5 == (UControlRigComponent *)0x0) || (pUVar5 == this)) ||
         (this_02[1]._padding_ == 0)) {
LAB_14a2ad075:
        uVar26 = (ulonglong)local_1e4;
        this_02 = (FSoftComponentReference *)&this_02[3]._padding_;
      }
      else {
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (UE::GC::MarkAsReachable((UObject *)pUVar5),
           UE::GC::GIsIncrementalReachabilityPending != false)) {
          UE::GC::MarkAsReachable((UObject *)pUVar5);
        }
        local_1e0.ObjectIndex = 0;
        local_1e0.ObjectSerialNumber = 0;
        local_138 = pUVar5;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar5);
        }
        FWeakObjectPtr::operator=(&local_1e0,(FObjectPtr)&local_138);
        this_02->_padding_ = (longlong)local_1e0;
        if (((char)this_02[1]._padding_ == '\x01') &&
           (*(float *)&this_02[2].OtherActor.SoftObjectPtr.field_0x20 <= fVar12))
        goto LAB_14a2ad075;
        local_130.Type = *(ERigElementType *)((longlong)&this_02[1]._padding_ + 4);
        local_130.Name = (FName)this_02[1]._padding_;
        iVar15 = URigHierarchy::GetIndex
                           ((((this->ControlRig).field0_0x0.DebugPtr)->DynamicHierarchy).field0_0x0.
                            DebugPtr,&local_130,true);
        *(int *)&this_02[3]._padding_ = iVar15;
        *(int *)((longlong)&this_02[3]._padding_ + 4) = (int)this_02[1]._padding_;
        if (this_02[3]._padding_ == 0) {
LAB_14a2ad070:
          local_1f0 = (USkeletalMeshComponent *)0x0;
          goto LAB_14a2ad075;
        }
        pUVar19 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
        bVar14 = FObjectPtr::IsA((FObjectPtr *)(this_02 + 3),pUVar19);
        if (!bVar14) goto LAB_14a2ad070;
        local_1f0 = (USkeletalMeshComponent *)this_02[3]._padding_;
        if (local_1f0 == (USkeletalMeshComponent *)0x0) goto LAB_14a2ad075;
        lVar28 = this_02[1]._padding_;
        *(undefined4 *)((longlong)&this_02[3]._padding_ + 4) = 0xffffffff;
        if ((int)lVar28 < 0) {
LAB_14a2ace3f:
          if (*(longlong *)((longlong)&this_02[1]._padding_ + 4) == 0) goto LAB_14a2acf1f;
          this_01 = USkeletalMeshComponent::GetSkeletalMeshAsset(local_1f0);
          if (this_01 != (USkeletalMesh *)0x0) {
            lVar28 = (**(code **)(this_01->_padding_ + 0x408))(this_01);
            if (lVar28 == 0) {
              UObjectBaseUtility::GetPathName
                        ((UObjectBaseUtility *)this_01,&local_a8,(UObject *)0x0);
              ::FString::PrintfImpl(&local_d8,L"%s does not have a Skeleton set.");
              ReportError(this,&local_d8);
              if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_d8.Data.AllocatorInstance.Data);
              }
              if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_a8.Data.AllocatorInstance.Data);
              }
            }
            else {
              if (*(char *)((longlong)&this_02[1]._padding_ + 4) == '\b') goto LAB_14a2acf1f;
              iVar15 = USkinnedMeshComponent::GetBoneIndex
                                 ((USkinnedMeshComponent *)local_1f0,
                                  *(FName *)((longlong)&this_02[1]._padding_ + 4));
              *(int *)((longlong)&this_02[3]._padding_ + 4) = iVar15;
            }
          }
          if ((*(char *)((longlong)&this_02[1]._padding_ + 4) == '\b') ||
             (*(int *)((longlong)&this_02[3]._padding_ + 4) != -1)) goto LAB_14a2acf1f;
          uVar26 = (ulonglong)local_1e4;
          *(undefined4 *)&this_02[3]._padding_ = 0xffffffff;
          this_02 = (FSoftComponentReference *)&this_02[3]._padding_;
        }
        else {
          iVar16 = USkinnedMeshComponent::GetNumBones((USkinnedMeshComponent *)local_1f0);
          iVar15 = (int)this_02[1]._padding_;
          if (iVar16 <= iVar15) goto LAB_14a2ace3f;
          *(int *)((longlong)&this_02[3]._padding_ + 4) = iVar15;
LAB_14a2acf1f:
          this_00 = local_1f0;
          if ((char)this_02[1]._padding_ != '\x01') goto LAB_14a2ad075;
          uVar17 = ((uint)((ulonglong)local_1f0 >> 0x14) & 0xffff ^
                   (uint)((ulonglong)local_1f0 >> 4)) * -0x7a143595;
          uVar17 = (uVar17 >> 0xd ^ uVar17) * -0x3d4d51cb;
          if (local_98._8_4_ != local_64) {
            FVar27 = (ForElementType<FSetElementId>)local_60;
            if (local_58 != (ForElementType<FSetElementId>)0x0) {
              FVar27 = local_58;
            }
            for (iVar15 = *(int *)((longlong)FVar27 +
                                  (ulonglong)(local_50 - 1 & (uVar17 >> 0x10 ^ uVar17)) * 4);
                iVar15 != -1; iVar15 = *(int *)(local_98._0_8_ + (longlong)iVar15 * 0x28 + 0x20)) {
              if (*(USkeletalMeshComponent **)(local_98._0_8_ + (longlong)iVar15 * 0x28) ==
                  local_1f0) {
                if (iVar15 != -1) goto LAB_14a2ad01d;
                break;
              }
            }
          }
          local_f0 = 0;
          pUVar24 = USkeletalMeshComponent::GetAnimInstance(local_1f0);
          if (pUVar24 != (UAnimInstance *)0x0) {
            local_f0 = *(undefined8 *)&pUVar24->field_0x10;
          }
          local_e8 = USkeletalMeshComponent::GetAnimClass(this_00);
          local_e0 = *(byte *)((longlong)&this_00->_padding_ + 2) >> 1 & 1;
          local_c8 = &local_1f0;
          local_c0 = &local_f0;
          TSet<TTuple<USkeletalMeshComponent_*,UControlRigComponent::FCachedSkeletalMeshComponentSettings>,TDefaultMapHashableKeyFuncs<USkeletalMeshComponent_*,UControlRigComponent::FCachedSkeletalMeshComponentSettings,0>,FDefaultSetAllocator>
          ::
          Emplace<TPairInitializer<USkeletalMeshComponent_*_const_&,UControlRigComponent::FCachedSkeletalMeshComponentSettings_const_&>_>
                    ((TSet<TTuple<USkeletalMeshComponent_*,UControlRigComponent::FCachedSkeletalMeshComponentSettings>,TDefaultMapHashableKeyFuncs<USkeletalMeshComponent_*,UControlRigComponent::FCachedSkeletalMeshComponentSettings,0>,FDefaultSetAllocator>
                      *)local_98,&local_148,(bool *)&local_c8);
LAB_14a2ad01d:
          pUVar24 = USkeletalMeshComponent::GetAnimInstance(local_1f0);
          if (pUVar24 != (UAnimInstance *)0x0) {
            pUVar19 = Z_Construct_UClass_USequencerAnimationSupport_NoRegister();
            pvVar25 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)pUVar24,pUVar19)
            ;
            if (pvVar25 != (void *)0x0) goto LAB_14a2ad075;
          }
          pcVar6 = *(code **)(local_1f0->_padding_ + 0xc70);
          UControlRigAnimInstance::StaticClass();
          (*pcVar6)(local_1f0);
          uVar26 = (ulonglong)local_1e4;
          this_02 = (FSoftComponentReference *)&this_02[3]._padding_;
        }
      }
    }
  }
  pTVar29 = &this->CachedSkeletalMeshComponentSettings;
  iStack_170 = 0;
  iVar15 = *(int *)&(this->CachedSkeletalMeshComponentSettings).field_0x28;
  local_168 = &(this->CachedSkeletalMeshComponentSettings).field_0x10;
  uStack_16c = 1;
  local_158 = 0;
  iStack_15c = 0;
  if (iVar15 != 0) {
    puVar32 = *(uint **)&(this->CachedSkeletalMeshComponentSettings).field_0x20;
    if (puVar32 == (uint *)0x0) {
      puVar32 = (uint *)local_168;
    }
    uVar17 = *puVar32;
    local_158 = 0;
    while (uVar17 == 0) {
      iStack_170 = iStack_170 + 1;
      local_158 = local_158 + 0x20;
      iStack_15c = iVar15;
      if ((int)(iVar15 + -1 + (iVar15 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_170) goto LAB_14a2ad11f;
      uVar17 = puVar32[iStack_170];
    }
    uStack_16c = -uVar17 & uVar17;
    uVar26 = (ulonglong)uStack_16c * 2 + 1;
    lVar28 = 0x3f;
    if (uVar26 != 0) {
      for (; uVar26 >> lVar28 == 0; lVar28 = lVar28 + -1) {
      }
    }
    local_1e4 = (uint)lVar28;
    iStack_15c = local_158 + -1 + local_1e4;
    if (iVar15 < iStack_15c) {
      iStack_15c = iVar15;
    }
  }
LAB_14a2ad11f:
  uVar17 = *(uint *)&(this->CachedSkeletalMeshComponentSettings).field_0x28;
  puVar2 = &(this->CachedSkeletalMeshComponentSettings).field_0x10;
  uVar30 = uVar17 & 0xffffffe0;
  iStack_150 = *(int *)&(this->CachedSkeletalMeshComponentSettings).field_0x8 -
               *(int *)&(this->CachedSkeletalMeshComponentSettings).field_0x34;
  uStack_160 = 0xffffffff;
  TStack_118.CurrentBitIndex = iStack_15c;
  TStack_118.UnvisitedBitMask = 0xffffffff;
  TStack_118._padding_ = CONCAT44(uStack_16c,iStack_170);
  iVar15 = (int)uVar17 >> 5;
  TStack_118._28_4_ = iStack_15c;
  TStack_118.BaseBitIndex = local_158;
  uStack_f8 = CONCAT44(uStack_14c,iStack_150);
  local_178 = pTVar29;
  iStack_154 = iStack_15c;
  local_120 = pTVar29;
  TStack_118.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_168;
  if ((((int)uVar17 < 0) ||
      (*(int *)&(this->CachedSkeletalMeshComponentSettings).field_0x28 < (int)uVar17)) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar14)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar4 = *(uint *)&(this->CachedSkeletalMeshComponentSettings).field_0x28;
  if (uVar17 != uVar4) {
    puVar7 = *(undefined1 **)&(this->CachedSkeletalMeshComponentSettings).field_0x20;
    puVar31 = puVar2;
    if (puVar7 != (undefined1 *)0x0) {
      puVar31 = puVar7;
    }
    uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar31 + (longlong)iVar15 * 4);
    while (uVar17 == 0) {
      iVar15 = iVar15 + 1;
      uVar30 = uVar30 + 0x20;
      uVar17 = uVar4;
      if ((int)(((int)(uVar4 - 1) >> 0x1f & 0x1fU) + (uVar4 - 1)) >> 5 < iVar15) goto LAB_14a2ad220;
      uVar17 = *(uint *)(puVar31 + (longlong)iVar15 * 4);
    }
    uVar26 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar28 = 0x3f;
    if (uVar26 != 0) {
      for (; uVar26 >> lVar28 == 0; lVar28 = lVar28 + -1) {
      }
    }
    uVar17 = (uVar30 - 1) + (int)lVar28;
    if ((int)uVar4 < (int)uVar17) {
      uVar17 = uVar4;
    }
  }
LAB_14a2ad220:
  while( true ) {
    pTVar11 = local_120;
    if (*(int *)&local_120->field_0x8 - *(int *)&local_120->field_0x34 != (int)uStack_f8) {
      `TSparseArray<TSparseSetElement<TTuple<USkeletalMeshComponent_*,UControlRigComponent::FCachedSkeletalMeshComponentSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_1e8);
    }
    uVar30 = local_50;
    pUVar5 = local_180;
    lVar28 = (longlong)TStack_118.CurrentBitIndex;
    if (((TStack_118.CurrentBitIndex == uVar17) &&
        (TStack_118.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) &&
       (pTVar11 == pTVar29)) break;
    lVar8 = *(longlong *)pTVar11;
    plVar9 = *(longlong **)(lVar8 + lVar28 * 0x28);
    uVar30 = ((uint)((ulonglong)plVar9 >> 0x14) & 0xffff ^ (uint)((ulonglong)plVar9 >> 4)) *
             -0x7a143595;
    uVar30 = (uVar30 >> 0xd ^ uVar30) * -0x3d4d51cb;
    if (local_98._8_4_ != local_64) {
      FVar27 = (ForElementType<FSetElementId>)local_60;
      if (local_58 != (ForElementType<FSetElementId>)0x0) {
        FVar27 = local_58;
      }
      for (iVar15 = *(int *)((longlong)FVar27 +
                            (ulonglong)(local_50 - 1 & (uVar30 >> 0x10 ^ uVar30)) * 4); iVar15 != -1
          ; iVar15 = *(int *)(local_98._0_8_ + (longlong)iVar15 * 0x28 + 0x20)) {
        if (*(longlong **)(local_98._0_8_ + (longlong)iVar15 * 0x28) == plVar9) {
          if (((iVar15 != -1) &&
              (pvVar25 = (void *)(local_98._0_8_ + (longlong)iVar15 * 0x28), pvVar25 != (void *)0x0)
              ) && ((undefined8 *)((longlong)pvVar25 + 8) != (undefined8 *)0x0)) {
            puVar3 = (undefined8 *)(lVar8 + 8 + lVar28 * 0x28);
            uVar10 = puVar3[1];
            *(undefined8 *)((longlong)pvVar25 + 8) = *puVar3;
            *(undefined8 *)((longlong)pvVar25 + 0x10) = uVar10;
            *(undefined8 *)((longlong)pvVar25 + 0x18) =
                 *(undefined8 *)(lVar8 + 0x18 + lVar28 * 0x28);
            goto LAB_14a2ad305;
          }
          break;
        }
      }
    }
    (**(code **)(*plVar9 + 0xc70))(plVar9);
    *(byte *)((longlong)plVar9 + 0x42U) =
         *(byte *)((longlong)plVar9 + 0x42U) ^
         (*(char *)(lVar8 + 0x18 + lVar28 * 0x28) * '\x02' ^ *(byte *)((longlong)plVar9 + 0x42)) & 2
    ;
LAB_14a2ad305:
    TStack_118.UnvisitedBitMask = TStack_118.UnvisitedBitMask & ~TStack_118._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_118);
  }
  pTVar29 = &local_180->CachedSkeletalMeshComponentSettings;
  if (pTVar29 ==
      (TMap<USkeletalMeshComponent_*,UControlRigComponent::FCachedSkeletalMeshComponentSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<USkeletalMeshComponent_*,UControlRigComponent::FCachedSkeletalMeshComponentSettings,0>_>
       *)local_98) goto LAB_14a2ad46e;
  lVar28 = (longlong)(int)local_50;
  pTVar11 = &local_180->CachedSkeletalMeshComponentSettings;
  uVar17 = local_50;
  if (local_50 < 2) {
    if (*(longlong *)&(local_180->CachedSkeletalMeshComponentSettings).field_0x40 != 0) {
      uVar17 = 0;
      goto LAB_14a2ad3a4;
    }
  }
  else {
LAB_14a2ad3a4:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(local_180->CachedSkeletalMeshComponentSettings).field_0x40,0,
               uVar17,4);
  }
  pvVar25 = *(void **)&(pUVar5->CachedSkeletalMeshComponentSettings).field_0x40;
  FVar27 = (ForElementType<FSetElementId>)local_60;
  if (local_58 != (ForElementType<FSetElementId>)0x0) {
    FVar27 = local_58;
  }
  _Dst = &pTVar11->field_0x38;
  if (pvVar25 != (void *)0x0) {
    _Dst = pvVar25;
  }
  if (uVar30 != 0) {
    memcpy(_Dst,(void *)FVar27,lVar28 << 2);
  }
  uVar13 = local_98._8_4_;
  lVar28 = (longlong)(int)local_98._8_4_;
  *(uint *)&(pUVar5->CachedSkeletalMeshComponentSettings).field_0x48 = uVar30;
  TSparseArray<TSparseSetElement<TTuple<USkeletalMeshComponent_*,UControlRigComponent::FCachedSkeletalMeshComponentSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Empty((TSparseArray<TSparseSetElement<TTuple<USkeletalMeshComponent_*,UControlRigComponent::FCachedSkeletalMeshComponentSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *)pTVar29,local_98._8_4_);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x28,8,uVar13,(ForAnyElementType *)pTVar29,
             (int *)&(pUVar5->CachedSkeletalMeshComponentSettings).field_0x8,
             (int *)&(pUVar5->CachedSkeletalMeshComponentSettings).field_0xc);
  puVar2 = &(pUVar5->CachedSkeletalMeshComponentSettings).field_0x10;
  *(undefined4 *)&(pUVar5->CachedSkeletalMeshComponentSettings).field_0x30 = local_68;
  *(int *)&(pUVar5->CachedSkeletalMeshComponentSettings).field_0x34 = local_64;
  if (puVar2 != local_98 + 0x10) {
    TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
              ((TBitArray<FDefaultBitArrayAllocator> *)puVar2,
               (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10));
  }
  if (uVar13 != 0) {
    memcpy(*(void **)pTVar29,(void *)local_98._0_8_,lVar28 * 0x28);
  }
LAB_14a2ad46e:
  local_50 = 0;
  if (local_58 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_58);
  }
  TSparseArray<TSparseSetElement<TTuple<USkeletalMeshComponent_*,UControlRigComponent::FCachedSkeletalMeshComponentSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<USkeletalMeshComponent_*,UControlRigComponent::FCachedSkeletalMeshComponentSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<USkeletalMeshComponent_*,UControlRigComponent::FCachedSkeletalMeshComponentSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  return;
}

// execAddMappedCompleteSkeletalMesh @ 14a2ae540

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
UControlRigComponent::execAddMappedCompleteSkeletalMesh
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  EControlRigComponentMapDirection local_res10 [8];
  USkeletalMeshComponent *local_res20;
  TArray<FControlRigComponentMappedCurve,TSizedDefaultAllocator<32>_> local_28;
  TArray<FControlRigComponentMappedBone,TSizedDefaultAllocator<32>_> local_18;
  
  local_res20 = (USkeletalMeshComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = Input;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  AddMappedSkeletalMesh
            ((UControlRigComponent *)param_1,local_res20,&local_18,&local_28,local_res10[0]);
  return;
}

// execAddMappedComponents @ 14a2ae640

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
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
UControlRigComponent::execAddMappedComponents(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FControlRigComponentMappedComponent *pFVar2;
  int iVar3;
  FControlRigComponentMappedComponent *local_28;
  undefined8 local_20;
  TArray<FControlRigComponentMappedComponent,TSizedDefaultAllocator<32>_> local_18;
  
  local_28 = (FControlRigComponentMappedComponent *)0x0;
  local_20 = 0;
  FArrayProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pFVar2 = local_28;
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar3 = (int)local_20;
  local_18.ArrayNum = (int)local_20;
  if ((int)local_20 == 0) {
    local_18.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,(int)local_20,0,&local_18.AllocatorInstance,(int)local_20,&local_18.ArrayMax);
    ConstructItems<FControlRigComponentMappedComponent,FControlRigComponentMappedComponent,int>
              (local_18.AllocatorInstance.Data,pFVar2,iVar3);
  }
  AddMappedComponents((UControlRigComponent *)param_1,&local_18);
  if (local_28 != (FControlRigComponentMappedComponent *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

// execAddMappedElements @ 14a2ae750

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
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
UControlRigComponent::execAddMappedElements(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FControlRigComponentMappedElement *pFVar2;
  int iVar3;
  FControlRigComponentMappedElement *local_28;
  undefined8 local_20;
  TArray<FControlRigComponentMappedElement,TSizedDefaultAllocator<32>_> local_18;
  
  local_28 = (FControlRigComponentMappedElement *)0x0;
  local_20 = 0;
  FArrayProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pFVar2 = local_28;
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar3 = (int)local_20;
  local_18.ArrayNum = (int)local_20;
  if ((int)local_20 == 0) {
    local_18.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xf0,0x10,(int)local_20,0,&local_18.AllocatorInstance,(int)local_20,
               &local_18.ArrayMax);
    ConstructItems<FControlRigComponentMappedElement,FControlRigComponentMappedElement,int>
              (local_18.AllocatorInstance.Data,pFVar2,iVar3);
  }
  AddMappedElements((UControlRigComponent *)param_1,&local_18);
  DestructItems<FControlRigComponentMappedElement,int>(local_28,(int)local_20);
  if (local_28 != (FControlRigComponentMappedElement *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

// execAddMappedSkeletalMesh @ 14a2ae870

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
UControlRigComponent::execAddMappedSkeletalMesh(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  EControlRigComponentMapDirection EVar2;
  void *pvVar3;
  longlong lVar4;
  EControlRigComponentMapDirection local_res10 [16];
  USkeletalMeshComponent *local_res20;
  void *local_68;
  undefined8 local_60;
  void *local_58;
  undefined8 local_50;
  TArray<FControlRigComponentMappedCurve,TSizedDefaultAllocator<32>_> local_48;
  TArray<FControlRigComponentMappedBone,TSizedDefaultAllocator<32>_> local_38;
  
  local_res20 = (USkeletalMeshComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_58 = (void *)0x0;
  local_50 = 0;
  FArrayProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_68 = (void *)0x0;
  local_60 = 0;
  FArrayProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_res10[0] = Input;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pvVar3 = local_68;
  EVar2 = local_res10[0];
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar4 = (longlong)(int)local_60;
  local_48.ArrayNum = (int)local_60;
  if ((int)local_60 == 0) {
    local_48.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,(int)local_60,0,&local_48.AllocatorInstance,(int)local_60,&local_48.ArrayMax);
    memcpy(local_48.AllocatorInstance.Data,pvVar3,lVar4 << 4);
  }
  pvVar3 = local_58;
  lVar4 = (longlong)(int)local_50;
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = (int)local_50;
  if ((int)local_50 == 0) {
    local_38.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,(int)local_50,0,&local_38.AllocatorInstance,(int)local_50,&local_38.ArrayMax);
    memcpy(local_38.AllocatorInstance.Data,pvVar3,lVar4 << 4);
  }
  AddMappedSkeletalMesh((UControlRigComponent *)param_1,local_res20,&local_38,&local_48,EVar2);
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  return;
}

// execCanExecute @ 14a2af8b0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl UControlRigComponent::execCanExecute(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  int iVar2;
  UControlRig *pUVar3;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar2 = (**(code **)(*(longlong *)CVarControlRigDisableExecutionComponent._padding_ + 200))();
  if (iVar2 == 0) {
    pUVar3 = SetupControlRigIfRequired((UControlRigComponent *)param_1);
    if (pUVar3 != (UControlRig *)0x0) {
      uVar1 = (**(code **)(pUVar3->_padding_ + 0x2b8))(pUVar3);
      *(undefined1 *)param_3 = uVar1;
      return;
    }
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execClearMappedElements @ 14a2afa00

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
UControlRigComponent::execClearMappedElements(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ClearMappedElements((UControlRigComponent *)param_1);
  return;
}

// execDoesElementExist @ 14a2b0790

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
UControlRigComponent::execDoesElementExist(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  ERigElementType EVar2;
  undefined8 uVar3;
  int iVar4;
  UControlRig *pUVar5;
  ERigElementType local_res10 [8];
  undefined8 local_res18;
  undefined8 local_res20;
  FRigElementKey local_28;
  
  local_res18 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10[0] = None;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  uVar3 = local_res18;
  EVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_res20 = local_res18;
  pUVar5 = SetupControlRigIfRequired((UControlRigComponent *)param_1);
  if (pUVar5 != (UControlRig *)0x0) {
    local_28.Name.Number = local_res20._4_4_;
    local_28.Type = EVar2;
    local_28.Name.ComparisonIndex.Value = (uint)uVar3;
    iVar4 = URigHierarchy::GetIndex((pUVar5->DynamicHierarchy).field0_0x0.DebugPtr,&local_28,true);
    *(bool *)param_3 = iVar4 != -1;
    return;
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execGetAbsoluteTime @ 14a2b11c0

void __cdecl
UControlRigComponent::execGetAbsoluteTime(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)(param_1 + 0x27) != 0) {
    *(undefined4 *)param_3 = *(undefined4 *)(*(longlong *)(param_1 + 0x27) + 0x4c);
    return;
  }
  *(undefined4 *)param_3 = 0;
  return;
}

// execGetBoneTransform @ 14a2b12c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
UControlRigComponent::execGetBoneTransform(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  URigHierarchy *this;
  EControlRigComponentSpace EVar2;
  undefined8 uVar3;
  int iVar4;
  UControlRig *pUVar5;
  undefined1 auStack_148 [32];
  EControlRigComponentSpace local_128 [8];
  undefined8 local_120;
  FRigElementKey local_118;
  undefined8 local_108;
  TTransform<double> local_f8;
  TTransform<double> local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_148;
  local_120 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_120,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_120);
  }
  local_128[0] = WorldSpace;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_128,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_128);
  }
  uVar3 = local_120;
  EVar2 = local_128[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_108 = local_120;
  pUVar5 = SetupControlRigIfRequired((UControlRigComponent *)param_1);
  if (pUVar5 != (UControlRig *)0x0) {
    local_118.Name.Number = local_108._4_4_;
    local_118.Type = Bone;
    local_118.Name.ComparisonIndex.Value = (uint)uVar3;
    iVar4 = URigHierarchy::GetIndex((pUVar5->DynamicHierarchy).field0_0x0.DebugPtr,&local_118,true);
    if (iVar4 != -1) {
      this = (pUVar5->DynamicHierarchy).field0_0x0.DebugPtr;
      if (EVar2 == LocalSpace) {
        URigHierarchy::GetLocalTransformByIndex(this,&local_98,iVar4,false);
      }
      else {
        URigHierarchy::GetGlobalTransformByIndex(this,&local_f8,iVar4,false);
        ConvertTransformFromRigSpace((UControlRigComponent *)param_1,&local_f8,EVar2);
        local_98.Scale3D.ZW.m128d_f64[0]._0_4_ = local_f8.Scale3D.ZW.m128d_f64[0]._0_4_;
        local_98.Scale3D.ZW.m128d_f64[0]._4_4_ = local_f8.Scale3D.ZW.m128d_f64[0]._4_4_;
        local_98.Scale3D.ZW.m128d_f64[1]._0_4_ = local_f8.Scale3D.ZW.m128d_f64[1]._0_4_;
        local_98.Scale3D.ZW.m128d_f64[1]._4_4_ = local_f8.Scale3D.ZW.m128d_f64[1]._4_4_;
        local_98.Scale3D.XY.m128d_f64[0]._0_4_ = local_f8.Scale3D.XY.m128d_f64[0]._0_4_;
        local_98.Scale3D.XY.m128d_f64[0]._4_4_ = local_f8.Scale3D.XY.m128d_f64[0]._4_4_;
        local_98.Scale3D.XY.m128d_f64[1]._0_4_ = local_f8.Scale3D.XY.m128d_f64[1]._0_4_;
        local_98.Scale3D.XY.m128d_f64[1]._4_4_ = local_f8.Scale3D.XY.m128d_f64[1]._4_4_;
        local_98.Translation.ZW.m128d_f64[0]._0_4_ = local_f8.Translation.ZW.m128d_f64[0]._0_4_;
        local_98.Translation.ZW.m128d_f64[0]._4_4_ = local_f8.Translation.ZW.m128d_f64[0]._4_4_;
        local_98.Translation.ZW.m128d_f64[1]._0_4_ = local_f8.Translation.ZW.m128d_f64[1]._0_4_;
        local_98.Translation.ZW.m128d_f64[1]._4_4_ = local_f8.Translation.ZW.m128d_f64[1]._4_4_;
        local_98.Translation.XY.m128d_f64[0]._0_4_ = local_f8.Translation.XY.m128d_f64[0]._0_4_;
        local_98.Translation.XY.m128d_f64[0]._4_4_ = local_f8.Translation.XY.m128d_f64[0]._4_4_;
        local_98.Translation.XY.m128d_f64[1]._0_4_ = local_f8.Translation.XY.m128d_f64[1]._0_4_;
        local_98.Translation.XY.m128d_f64[1]._4_4_ = local_f8.Translation.XY.m128d_f64[1]._4_4_;
        local_98.Rotation.ZW.m128d_f64[0]._0_4_ = local_f8.Rotation.ZW.m128d_f64[0]._0_4_;
        local_98.Rotation.ZW.m128d_f64[0]._4_4_ = local_f8.Rotation.ZW.m128d_f64[0]._4_4_;
        local_98.Rotation.ZW.m128d_f64[1]._0_4_ = local_f8.Rotation.ZW.m128d_f64[1]._0_4_;
        local_98.Rotation.ZW.m128d_f64[1]._4_4_ = local_f8.Rotation.ZW.m128d_f64[1]._4_4_;
        local_98.Rotation.XY.m128d_f64[0]._0_4_ = local_f8.Rotation.XY.m128d_f64[0]._0_4_;
        local_98.Rotation.XY.m128d_f64[0]._4_4_ = local_f8.Rotation.XY.m128d_f64[0]._4_4_;
        local_98.Rotation.XY.m128d_f64[1]._0_4_ = local_f8.Rotation.XY.m128d_f64[1]._0_4_;
        local_98.Rotation.XY.m128d_f64[1]._4_4_ = local_f8.Rotation.XY.m128d_f64[1]._4_4_;
      }
      goto LAB_14a2b1467;
    }
  }
  local_98.Rotation.XY.m128d_f64[0]._0_4_ =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._0_4_;
  local_98.Rotation.XY.m128d_f64[0]._4_4_ =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._4_4_;
  local_98.Rotation.XY.m128d_f64[1]._0_4_ =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._0_4_;
  local_98.Rotation.XY.m128d_f64[1]._4_4_ =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._4_4_;
  local_98.Rotation.ZW.m128d_f64[0]._0_4_ =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._0_4_;
  local_98.Rotation.ZW.m128d_f64[0]._4_4_ =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._4_4_;
  local_98.Rotation.ZW.m128d_f64[1]._0_4_ =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._0_4_;
  local_98.Rotation.ZW.m128d_f64[1]._4_4_ =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._4_4_;
  local_98.Translation.XY.m128d_f64[0]._0_4_ =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._0_4_;
  local_98.Translation.XY.m128d_f64[0]._4_4_ =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._4_4_;
  local_98.Translation.XY.m128d_f64[1]._0_4_ =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._0_4_;
  local_98.Translation.XY.m128d_f64[1]._4_4_ =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._4_4_;
  local_98.Translation.ZW.m128d_f64[0]._0_4_ =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._0_4_;
  local_98.Translation.ZW.m128d_f64[0]._4_4_ =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._4_4_;
  local_98.Translation.ZW.m128d_f64[1]._0_4_ =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._0_4_;
  local_98.Translation.ZW.m128d_f64[1]._4_4_ =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._4_4_;
  local_98.Scale3D.XY.m128d_f64[0]._0_4_ =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._0_4_;
  local_98.Scale3D.XY.m128d_f64[0]._4_4_ =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._4_4_;
  local_98.Scale3D.XY.m128d_f64[1]._0_4_ =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._0_4_;
  local_98.Scale3D.XY.m128d_f64[1]._4_4_ =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._4_4_;
  local_98.Scale3D.ZW.m128d_f64[0]._0_4_ =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._0_4_;
  local_98.Scale3D.ZW.m128d_f64[0]._4_4_ =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._4_4_;
  local_98.Scale3D.ZW.m128d_f64[1]._0_4_ =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._0_4_;
  local_98.Scale3D.ZW.m128d_f64[1]._4_4_ =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._4_4_;
LAB_14a2b1467:
  *(undefined4 *)param_3 = local_98.Rotation.XY.m128d_f64[0]._0_4_;
  *(undefined4 *)((longlong)param_3 + 4) = local_98.Rotation.XY.m128d_f64[0]._4_4_;
  *(undefined4 *)((longlong)param_3 + 8) = local_98.Rotation.XY.m128d_f64[1]._0_4_;
  *(undefined4 *)((longlong)param_3 + 0xc) = local_98.Rotation.XY.m128d_f64[1]._4_4_;
  *(undefined4 *)((longlong)param_3 + 0x10) = local_98.Rotation.ZW.m128d_f64[0]._0_4_;
  *(undefined4 *)((longlong)param_3 + 0x14) = local_98.Rotation.ZW.m128d_f64[0]._4_4_;
  *(undefined4 *)((longlong)param_3 + 0x18) = local_98.Rotation.ZW.m128d_f64[1]._0_4_;
  *(undefined4 *)((longlong)param_3 + 0x1c) = local_98.Rotation.ZW.m128d_f64[1]._4_4_;
  *(undefined4 *)((longlong)param_3 + 0x20) = local_98.Translation.XY.m128d_f64[0]._0_4_;
  *(undefined4 *)((longlong)param_3 + 0x24) = local_98.Translation.XY.m128d_f64[0]._4_4_;
  *(undefined4 *)((longlong)param_3 + 0x28) = local_98.Translation.XY.m128d_f64[1]._0_4_;
  *(undefined4 *)((longlong)param_3 + 0x2c) = local_98.Translation.XY.m128d_f64[1]._4_4_;
  *(undefined4 *)((longlong)param_3 + 0x30) = local_98.Translation.ZW.m128d_f64[0]._0_4_;
  *(undefined4 *)((longlong)param_3 + 0x34) = local_98.Translation.ZW.m128d_f64[0]._4_4_;
  *(undefined4 *)((longlong)param_3 + 0x38) = local_98.Translation.ZW.m128d_f64[1]._0_4_;
  *(undefined4 *)((longlong)param_3 + 0x3c) = local_98.Translation.ZW.m128d_f64[1]._4_4_;
  *(undefined4 *)((longlong)param_3 + 0x40) = local_98.Scale3D.XY.m128d_f64[0]._0_4_;
  *(undefined4 *)((longlong)param_3 + 0x44) = local_98.Scale3D.XY.m128d_f64[0]._4_4_;
  *(undefined4 *)((longlong)param_3 + 0x48) = local_98.Scale3D.XY.m128d_f64[1]._0_4_;
  *(undefined4 *)((longlong)param_3 + 0x4c) = local_98.Scale3D.XY.m128d_f64[1]._4_4_;
  *(undefined4 *)((longlong)param_3 + 0x50) = local_98.Scale3D.ZW.m128d_f64[0]._0_4_;
  *(undefined4 *)((longlong)param_3 + 0x54) = local_98.Scale3D.ZW.m128d_f64[0]._4_4_;
  *(undefined4 *)((longlong)param_3 + 0x58) = local_98.Scale3D.ZW.m128d_f64[1]._0_4_;
  *(undefined4 *)((longlong)param_3 + 0x5c) = local_98.Scale3D.ZW.m128d_f64[1]._4_4_;
  return;
}

// execGetControlBool @ 14a2b1590

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
UControlRigComponent::execGetControlBool(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  UControlRig *pUVar3;
  FRigControlElement *pFVar4;
  FRigControlValue *pFVar5;
  undefined8 local_res10;
  undefined8 local_res18;
  FRigElementKey local_a8;
  FRigControlValue local_9c;
  
  local_res10 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  uVar2 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_res18 = local_res10;
  pUVar3 = SetupControlRigIfRequired((UControlRigComponent *)param_1);
  if (pUVar3 != (UControlRig *)0x0) {
    local_a8.Name.Number = local_res18._4_4_;
    local_a8.Type = Control;
    local_a8.Name.ComparisonIndex.Value = (uint)uVar2;
    pFVar4 = URigHierarchy::Find<FRigControlElement>
                       ((pUVar3->DynamicHierarchy).field0_0x0.DebugPtr,&local_a8);
    if ((pFVar4 != (FRigControlElement *)0x0) && ((pFVar4->Settings).ControlType == Bool)) {
      pFVar5 = URigHierarchy::GetControlValue
                         ((pUVar3->DynamicHierarchy).field0_0x0.DebugPtr,&local_9c,pFVar4,Current,
                          true);
      *(undefined1 *)param_3 = *(undefined1 *)&(pFVar5->FloatStorage).Float00;
      return;
    }
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execGetControlFloat @ 14a2b16a0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
UControlRigComponent::execGetControlFloat(UObject *param_1,FFrame *param_2,void *param_3)

{
  ERigControlType EVar1;
  FProperty *pFVar2;
  undefined8 uVar3;
  UControlRig *pUVar4;
  FRigControlElement *pFVar5;
  FRigControlValue *pFVar6;
  float fVar7;
  undefined8 local_res10;
  undefined8 local_res18;
  FRigElementKey local_a8;
  FRigControlValue local_9c;
  
  local_res10 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  uVar3 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_res18 = local_res10;
  pUVar4 = SetupControlRigIfRequired((UControlRigComponent *)param_1);
  if (pUVar4 != (UControlRig *)0x0) {
    local_a8.Name.Number = local_res18._4_4_;
    local_a8.Type = Control;
    local_a8.Name.ComparisonIndex.Value = (uint)uVar3;
    pFVar5 = URigHierarchy::Find<FRigControlElement>
                       ((pUVar4->DynamicHierarchy).field0_0x0.DebugPtr,&local_a8);
    if ((pFVar5 != (FRigControlElement *)0x0) &&
       ((EVar1 = (pFVar5->Settings).ControlType, EVar1 == Float || (EVar1 == ScaleFloat)))) {
      pFVar6 = URigHierarchy::GetControlValue
                         ((pUVar4->DynamicHierarchy).field0_0x0.DebugPtr,&local_9c,pFVar5,Current,
                          true);
      fVar7 = (pFVar6->FloatStorage).Float00;
      goto LAB_14a2b1794;
    }
  }
  fVar7 = 0.0;
LAB_14a2b1794:
  *(float *)param_3 = fVar7;
  return;
}

// execGetControlInt @ 14a2b17c0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl UControlRigComponent::execGetControlInt(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  UControlRig *pUVar3;
  FRigControlElement *pFVar4;
  FRigControlValue *pFVar5;
  undefined8 local_res10;
  undefined8 local_res18;
  FRigElementKey local_98;
  FRigControlValue local_8c;
  
  local_res10 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  uVar2 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_res18 = local_res10;
  pUVar3 = SetupControlRigIfRequired((UControlRigComponent *)param_1);
  if (pUVar3 != (UControlRig *)0x0) {
    local_98.Name.Number = local_res18._4_4_;
    local_98.Type = Control;
    local_98.Name.ComparisonIndex.Value = (uint)uVar2;
    pFVar4 = URigHierarchy::Find<FRigControlElement>
                       ((pUVar3->DynamicHierarchy).field0_0x0.DebugPtr,&local_98);
    if ((pFVar4 != (FRigControlElement *)0x0) && ((pFVar4->Settings).ControlType == Integer)) {
      pFVar5 = URigHierarchy::GetControlValue
                         ((pUVar3->DynamicHierarchy).field0_0x0.DebugPtr,&local_8c,pFVar4,Current,
                          true);
      *(float *)param_3 = (pFVar5->FloatStorage).Float00;
      return;
    }
  }
  *(undefined4 *)param_3 = 0;
  return;
}

// execGetControlOffset @ 14a2b18e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
UControlRigComponent::execGetControlOffset(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  URigHierarchy *this;
  EControlRigComponentSpace EVar2;
  undefined8 uVar3;
  UControlRig *pUVar4;
  FRigControlElement *pFVar5;
  undefined1 auStack_148 [32];
  EControlRigComponentSpace local_128 [8];
  undefined8 local_120;
  FRigElementKey local_118;
  undefined8 local_108;
  TTransform<double> local_f8;
  TTransform<double> local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_148;
  local_120 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_120,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_120);
  }
  local_128[0] = WorldSpace;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_128,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_128);
  }
  uVar3 = local_120;
  EVar2 = local_128[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_108 = local_120;
  pUVar4 = SetupControlRigIfRequired((UControlRigComponent *)param_1);
  if (pUVar4 != (UControlRig *)0x0) {
    local_118.Name.Number = local_108._4_4_;
    local_118.Type = Control;
    local_118.Name.ComparisonIndex.Value = (uint)uVar3;
    pFVar5 = URigHierarchy::Find<FRigControlElement>
                       ((pUVar4->DynamicHierarchy).field0_0x0.DebugPtr,&local_118);
    if (pFVar5 != (FRigControlElement *)0x0) {
      this = (pUVar4->DynamicHierarchy).field0_0x0.DebugPtr;
      if (EVar2 == LocalSpace) {
        URigHierarchy::GetControlOffsetTransform(this,&local_98,pFVar5,CurrentLocal);
      }
      else {
        URigHierarchy::GetControlOffsetTransform(this,&local_f8,pFVar5,CurrentGlobal);
        ConvertTransformFromRigSpace((UControlRigComponent *)param_1,&local_f8,EVar2);
        local_98.Scale3D.ZW.m128d_f64[0]._0_4_ = local_f8.Scale3D.ZW.m128d_f64[0]._0_4_;
        local_98.Scale3D.ZW.m128d_f64[0]._4_4_ = local_f8.Scale3D.ZW.m128d_f64[0]._4_4_;
        local_98.Scale3D.ZW.m128d_f64[1]._0_4_ = local_f8.Scale3D.ZW.m128d_f64[1]._0_4_;
        local_98.Scale3D.ZW.m128d_f64[1]._4_4_ = local_f8.Scale3D.ZW.m128d_f64[1]._4_4_;
        local_98.Scale3D.XY.m128d_f64[0]._0_4_ = local_f8.Scale3D.XY.m128d_f64[0]._0_4_;
        local_98.Scale3D.XY.m128d_f64[0]._4_4_ = local_f8.Scale3D.XY.m128d_f64[0]._4_4_;
        local_98.Scale3D.XY.m128d_f64[1]._0_4_ = local_f8.Scale3D.XY.m128d_f64[1]._0_4_;
        local_98.Scale3D.XY.m128d_f64[1]._4_4_ = local_f8.Scale3D.XY.m128d_f64[1]._4_4_;
        local_98.Translation.ZW.m128d_f64[0]._0_4_ = local_f8.Translation.ZW.m128d_f64[0]._0_4_;
        local_98.Translation.ZW.m128d_f64[0]._4_4_ = local_f8.Translation.ZW.m128d_f64[0]._4_4_;
        local_98.Translation.ZW.m128d_f64[1]._0_4_ = local_f8.Translation.ZW.m128d_f64[1]._0_4_;
        local_98.Translation.ZW.m128d_f64[1]._4_4_ = local_f8.Translation.ZW.m128d_f64[1]._4_4_;
        local_98.Translation.XY.m128d_f64[0]._0_4_ = local_f8.Translation.XY.m128d_f64[0]._0_4_;
        local_98.Translation.XY.m128d_f64[0]._4_4_ = local_f8.Translation.XY.m128d_f64[0]._4_4_;
        local_98.Translation.XY.m128d_f64[1]._0_4_ = local_f8.Translation.XY.m128d_f64[1]._0_4_;
        local_98.Translation.XY.m128d_f64[1]._4_4_ = local_f8.Translation.XY.m128d_f64[1]._4_4_;
        local_98.Rotation.ZW.m128d_f64[0]._0_4_ = local_f8.Rotation.ZW.m128d_f64[0]._0_4_;
        local_98.Rotation.ZW.m128d_f64[0]._4_4_ = local_f8.Rotation.ZW.m128d_f64[0]._4_4_;
        local_98.Rotation.ZW.m128d_f64[1]._0_4_ = local_f8.Rotation.ZW.m128d_f64[1]._0_4_;
        local_98.Rotation.ZW.m128d_f64[1]._4_4_ = local_f8.Rotation.ZW.m128d_f64[1]._4_4_;
        local_98.Rotation.XY.m128d_f64[0]._0_4_ = local_f8.Rotation.XY.m128d_f64[0]._0_4_;
        local_98.Rotation.XY.m128d_f64[0]._4_4_ = local_f8.Rotation.XY.m128d_f64[0]._4_4_;
        local_98.Rotation.XY.m128d_f64[1]._0_4_ = local_f8.Rotation.XY.m128d_f64[1]._0_4_;
        local_98.Rotation.XY.m128d_f64[1]._4_4_ = local_f8.Rotation.XY.m128d_f64[1]._4_4_;
      }
      goto LAB_14a2b1a8d;
    }
  }
  local_98.Rotation.XY.m128d_f64[0]._0_4_ =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._0_4_;
  local_98.Rotation.XY.m128d_f64[0]._4_4_ =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._4_4_;
  local_98.Rotation.XY.m128d_f64[1]._0_4_ =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._0_4_;
  local_98.Rotation.XY.m128d_f64[1]._4_4_ =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._4_4_;
  local_98.Rotation.ZW.m128d_f64[0]._0_4_ =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._0_4_;
  local_98.Rotation.ZW.m128d_f64[0]._4_4_ =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._4_4_;
  local_98.Rotation.ZW.m128d_f64[1]._0_4_ =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._0_4_;
  local_98.Rotation.ZW.m128d_f64[1]._4_4_ =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._4_4_;
  local_98.Translation.XY.m128d_f64[0]._0_4_ =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._0_4_;
  local_98.Translation.XY.m128d_f64[0]._4_4_ =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._4_4_;
  local_98.Translation.XY.m128d_f64[1]._0_4_ =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._0_4_;
  local_98.Translation.XY.m128d_f64[1]._4_4_ =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._4_4_;
  local_98.Translation.ZW.m128d_f64[0]._0_4_ =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._0_4_;
  local_98.Translation.ZW.m128d_f64[0]._4_4_ =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._4_4_;
  local_98.Translation.ZW.m128d_f64[1]._0_4_ =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._0_4_;
  local_98.Translation.ZW.m128d_f64[1]._4_4_ =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._4_4_;
  local_98.Scale3D.XY.m128d_f64[0]._0_4_ =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._0_4_;
  local_98.Scale3D.XY.m128d_f64[0]._4_4_ =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._4_4_;
  local_98.Scale3D.XY.m128d_f64[1]._0_4_ =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._0_4_;
  local_98.Scale3D.XY.m128d_f64[1]._4_4_ =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._4_4_;
  local_98.Scale3D.ZW.m128d_f64[0]._0_4_ =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._0_4_;
  local_98.Scale3D.ZW.m128d_f64[0]._4_4_ =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._4_4_;
  local_98.Scale3D.ZW.m128d_f64[1]._0_4_ =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._0_4_;
  local_98.Scale3D.ZW.m128d_f64[1]._4_4_ =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._4_4_;
LAB_14a2b1a8d:
  *(undefined4 *)param_3 = local_98.Rotation.XY.m128d_f64[0]._0_4_;
  *(undefined4 *)((longlong)param_3 + 4) = local_98.Rotation.XY.m128d_f64[0]._4_4_;
  *(undefined4 *)((longlong)param_3 + 8) = local_98.Rotation.XY.m128d_f64[1]._0_4_;
  *(undefined4 *)((longlong)param_3 + 0xc) = local_98.Rotation.XY.m128d_f64[1]._4_4_;
  *(undefined4 *)((longlong)param_3 + 0x10) = local_98.Rotation.ZW.m128d_f64[0]._0_4_;
  *(undefined4 *)((longlong)param_3 + 0x14) = local_98.Rotation.ZW.m128d_f64[0]._4_4_;
  *(undefined4 *)((longlong)param_3 + 0x18) = local_98.Rotation.ZW.m128d_f64[1]._0_4_;
  *(undefined4 *)((longlong)param_3 + 0x1c) = local_98.Rotation.ZW.m128d_f64[1]._4_4_;
  *(undefined4 *)((longlong)param_3 + 0x20) = local_98.Translation.XY.m128d_f64[0]._0_4_;
  *(undefined4 *)((longlong)param_3 + 0x24) = local_98.Translation.XY.m128d_f64[0]._4_4_;
  *(undefined4 *)((longlong)param_3 + 0x28) = local_98.Translation.XY.m128d_f64[1]._0_4_;
  *(undefined4 *)((longlong)param_3 + 0x2c) = local_98.Translation.XY.m128d_f64[1]._4_4_;
  *(undefined4 *)((longlong)param_3 + 0x30) = local_98.Translation.ZW.m128d_f64[0]._0_4_;
  *(undefined4 *)((longlong)param_3 + 0x34) = local_98.Translation.ZW.m128d_f64[0]._4_4_;
  *(undefined4 *)((longlong)param_3 + 0x38) = local_98.Translation.ZW.m128d_f64[1]._0_4_;
  *(undefined4 *)((longlong)param_3 + 0x3c) = local_98.Translation.ZW.m128d_f64[1]._4_4_;
  *(undefined4 *)((longlong)param_3 + 0x40) = local_98.Scale3D.XY.m128d_f64[0]._0_4_;
  *(undefined4 *)((longlong)param_3 + 0x44) = local_98.Scale3D.XY.m128d_f64[0]._4_4_;
  *(undefined4 *)((longlong)param_3 + 0x48) = local_98.Scale3D.XY.m128d_f64[1]._0_4_;
  *(undefined4 *)((longlong)param_3 + 0x4c) = local_98.Scale3D.XY.m128d_f64[1]._4_4_;
  *(undefined4 *)((longlong)param_3 + 0x50) = local_98.Scale3D.ZW.m128d_f64[0]._0_4_;
  *(undefined4 *)((longlong)param_3 + 0x54) = local_98.Scale3D.ZW.m128d_f64[0]._4_4_;
  *(undefined4 *)((longlong)param_3 + 0x58) = local_98.Scale3D.ZW.m128d_f64[1]._0_4_;
  *(undefined4 *)((longlong)param_3 + 0x5c) = local_98.Scale3D.ZW.m128d_f64[1]._4_4_;
  return;
}

// execGetControlPosition @ 14a2b1ad0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
UControlRigComponent::execGetControlPosition(UObject *param_1,FFrame *param_2,void *param_3)

{
  double dVar1;
  FProperty *pFVar2;
  double dVar3;
  TTransform<double> *pTVar4;
  EControlRigComponentSpace local_88 [8];
  FName local_80;
  TTransform<double> local_78;
  
  local_80.ComparisonIndex.Value = 0;
  local_80.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_80,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_80);
  }
  local_88[0] = WorldSpace;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_88,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_88);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar4 = GetControlTransform((UControlRigComponent *)param_1,&local_78,local_80,local_88[0]);
  dVar3 = (pTVar4->Translation).XY.m128d_f64[1];
  dVar1 = (pTVar4->Translation).ZW.m128d_f64[0];
  *(double *)param_3 = (pTVar4->Translation).XY.m128d_f64[0];
  *(double *)((longlong)param_3 + 8) = dVar3;
  *(double *)((longlong)param_3 + 0x10) = dVar1;
  return;
}

// execGetControlRig @ 14a2b1bc0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl UControlRigComponent::execGetControlRig(UObject *param_1,FFrame *param_2,void *param_3)

{
  UControlRig *pUVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar1 = SetupControlRigIfRequired((UControlRigComponent *)param_1);
  *(UControlRig **)param_3 = pUVar1;
  return;
}

// execGetControlRotator @ 14a2b1c00

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
UControlRigComponent::execGetControlRotator(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TTransform<double> *pTVar2;
  EControlRigComponentSpace local_c8 [8];
  FName local_c0;
  TRotator<double> local_b8;
  TQuat<double> local_98;
  TTransform<double> local_78;
  
  local_c0.ComparisonIndex.Value = 0;
  local_c0.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c0);
  }
  local_c8[0] = WorldSpace;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_c8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_c8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar2 = GetControlTransform((UControlRigComponent *)param_1,&local_78,local_c0,local_c8[0]);
  local_98.X = (pTVar2->Rotation).XY.m128d_f64[0];
  local_98.Y = (pTVar2->Rotation).XY.m128d_f64[1];
  local_98.Z = (pTVar2->Rotation).ZW.m128d_f64[0];
  local_98.W = (pTVar2->Rotation).ZW.m128d_f64[1];
  UE::Math::TQuat<double>::Rotator(&local_98,&local_b8);
  *(double *)param_3 = local_b8.Pitch;
  *(double *)((longlong)param_3 + 8) = local_b8.Yaw;
  *(double *)((longlong)param_3 + 0x10) = local_b8.Roll;
  return;
}

// execGetControlScale @ 14a2b1d10

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
UControlRigComponent::execGetControlScale(UObject *param_1,FFrame *param_2,void *param_3)

{
  double dVar1;
  FProperty *pFVar2;
  double dVar3;
  TTransform<double> *pTVar4;
  EControlRigComponentSpace local_88 [8];
  FName local_80;
  TTransform<double> local_78;
  
  local_80.ComparisonIndex.Value = 0;
  local_80.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_80,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_80);
  }
  local_88[0] = WorldSpace;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_88,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_88);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar4 = GetControlTransform((UControlRigComponent *)param_1,&local_78,local_80,local_88[0]);
  dVar3 = (pTVar4->Scale3D).XY.m128d_f64[1];
  dVar1 = (pTVar4->Scale3D).ZW.m128d_f64[0];
  *(double *)param_3 = (pTVar4->Scale3D).XY.m128d_f64[0];
  *(double *)((longlong)param_3 + 8) = dVar3;
  *(double *)((longlong)param_3 + 0x10) = dVar1;
  return;
}

// execGetControlTransform @ 14a2b1e00

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
UControlRigComponent::execGetControlTransform(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  double dVar2;
  TTransform<double> *pTVar3;
  EControlRigComponentSpace local_res10 [8];
  FName local_res18 [2];
  TTransform<double> local_78;
  
  local_res18[0].ComparisonIndex.Value = 0;
  local_res18[0].Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = WorldSpace;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar3 = GetControlTransform((UControlRigComponent *)param_1,&local_78,local_res18[0],
                               local_res10[0]);
  dVar2 = (pTVar3->Rotation).XY.m128d_f64[1];
  *(double *)param_3 = (pTVar3->Rotation).XY.m128d_f64[0];
  *(double *)((longlong)param_3 + 8) = dVar2;
  dVar2 = (pTVar3->Rotation).ZW.m128d_f64[1];
  *(double *)((longlong)param_3 + 0x10) = (pTVar3->Rotation).ZW.m128d_f64[0];
  *(double *)((longlong)param_3 + 0x18) = dVar2;
  dVar2 = (pTVar3->Translation).XY.m128d_f64[1];
  *(double *)((longlong)param_3 + 0x20) = (pTVar3->Translation).XY.m128d_f64[0];
  *(double *)((longlong)param_3 + 0x28) = dVar2;
  dVar2 = (pTVar3->Translation).ZW.m128d_f64[1];
  *(double *)((longlong)param_3 + 0x30) = (pTVar3->Translation).ZW.m128d_f64[0];
  *(double *)((longlong)param_3 + 0x38) = dVar2;
  dVar2 = (pTVar3->Scale3D).XY.m128d_f64[1];
  *(double *)((longlong)param_3 + 0x40) = (pTVar3->Scale3D).XY.m128d_f64[0];
  *(double *)((longlong)param_3 + 0x48) = dVar2;
  dVar2 = (pTVar3->Scale3D).ZW.m128d_f64[1];
  *(double *)((longlong)param_3 + 0x50) = (pTVar3->Scale3D).ZW.m128d_f64[0];
  *(double *)((longlong)param_3 + 0x58) = dVar2;
  return;
}

// execGetControlVector2D @ 14a2b1f30

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
UControlRigComponent::execGetControlVector2D(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  FProperty *pFVar3;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  UControlRig *pUVar6;
  FRigControlElement *pFVar7;
  FRigControlValue *pFVar8;
  double dVar9;
  double dVar10;
  undefined8 local_res10;
  undefined8 local_res18;
  FRigElementKey local_b8;
  FRigControlValue local_a8;
  
  local_res10 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  uVar5 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_res18 = local_res10;
  pUVar6 = SetupControlRigIfRequired((UControlRigComponent *)param_1);
  if (pUVar6 != (UControlRig *)0x0) {
    local_b8.Name.Number = local_res18._4_4_;
    local_b8.Type = Control;
    local_b8.Name.ComparisonIndex.Value = (uint)uVar5;
    pFVar7 = URigHierarchy::Find<FRigControlElement>
                       ((pUVar6->DynamicHierarchy).field0_0x0.DebugPtr,&local_b8);
    if ((pFVar7 != (FRigControlElement *)0x0) && ((pFVar7->Settings).ControlType == Vector2D)) {
      pFVar8 = URigHierarchy::GetControlValue
                         ((pUVar6->DynamicHierarchy).field0_0x0.DebugPtr,&local_a8,pFVar7,Current,
                          true);
      uVar1 = (pFVar8->FloatStorage).Float00;
      uVar2 = (pFVar8->FloatStorage).Float01;
      dVar10 = (double)(float)uVar1;
      dVar9 = (double)(float)uVar2;
      goto LAB_14a2b2039;
    }
  }
  dVar10 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._0_8_;
  dVar9 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._8_8_;
LAB_14a2b2039:
  auVar4._8_4_ = SUB84(dVar9,0);
  auVar4._0_8_ = dVar10;
  auVar4._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  *(undefined1 (*) [16])param_3 = auVar4;
  return;
}

// execGetElementNames @ 14a2b2060

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
UControlRigComponent::execGetElementNames(UObject *param_1,FFrame *param_2,void *param_3)

{
  FScriptContainerElement *pFVar1;
  byte bVar2;
  int iVar3;
  FProperty *pFVar4;
  URigHierarchy *pUVar5;
  code *pcVar6;
  byte bVar7;
  bool bVar8;
  int iVar9;
  UControlRig *pUVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  byte local_res10 [8];
  ForAnyElementType *local_res18;
  byte local_res20 [8];
  ForAnyElementType local_48;
  undefined8 local_40;
  
  local_res10[0] = 0;
  local_res18 = param_3;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_res20[0] = local_res10[0];
  pUVar10 = SetupControlRigIfRequired((UControlRigComponent *)param_1);
  bVar7 = local_res20[0];
  if (pUVar10 != (UControlRig *)0x0) {
    pUVar5 = (pUVar10->DynamicHierarchy).field0_0x0.DebugPtr;
    pFVar11 = (pUVar5->Elements).AllocatorInstance.Data;
    iVar3 = (pUVar5->Elements).ArrayNum;
    pFVar1 = pFVar11 + (longlong)iVar3 * 8;
    while( true ) {
      if ((pUVar5->Elements).ArrayNum != iVar3) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<FRigBaseElement_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res20);
      }
      param_3 = local_res18;
      if (pFVar11 == pFVar1) break;
      bVar2 = *(byte *)(*(longlong *)pFVar11 + 0x10);
      if ((bVar7 & bVar2) == bVar2) {
        pFVar12 = (FScriptContainerElement *)(*(longlong *)pFVar11 + 0x14);
        if (((local_48.Data <= pFVar12) && (pFVar12 < local_48.Data + (longlong)local_40._4_4_ * 8))
           && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar9 = (int)local_40;
        if ((int)local_40 == local_40._4_4_) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,&local_48,(int *)((longlong)&local_40 + 4));
        }
        local_40 = CONCAT44(local_40._4_4_,iVar9 + 1);
        *(undefined8 *)(local_48.Data + (longlong)iVar9 * 8) = *(undefined8 *)pFVar12;
      }
      pFVar11 = pFVar11 + 8;
    }
  }
  if (param_3 != &local_48) {
    if (((ForAnyElementType *)param_3)->Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(((ForAnyElementType *)param_3)->Data);
    }
    ((ForAnyElementType *)param_3)->Data = local_48.Data;
    *(int *)&((ForAnyElementType *)((longlong)param_3 + 8))->Data = (int)local_40;
    *(int *)((longlong)&((ForAnyElementType *)((longlong)param_3 + 8))->Data + 4) = local_40._4_4_;
    local_40 = 0;
    local_48.Data = (FScriptContainerElement *)0x0;
  }
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  return;
}

// execGetInitialBoneTransform @ 14a2b2950

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
UControlRigComponent::execGetInitialBoneTransform(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  URigHierarchy *this;
  EControlRigComponentSpace EVar2;
  undefined8 uVar3;
  int iVar4;
  UControlRig *pUVar5;
  undefined1 auStack_148 [32];
  EControlRigComponentSpace local_128 [8];
  undefined8 local_120;
  FRigElementKey local_118;
  undefined8 local_108;
  TTransform<double> local_f8;
  TTransform<double> local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_148;
  local_120 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_120,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_120);
  }
  local_128[0] = WorldSpace;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_128,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_128);
  }
  uVar3 = local_120;
  EVar2 = local_128[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_108 = local_120;
  pUVar5 = SetupControlRigIfRequired((UControlRigComponent *)param_1);
  if (pUVar5 != (UControlRig *)0x0) {
    local_118.Name.Number = local_108._4_4_;
    local_118.Type = Bone;
    local_118.Name.ComparisonIndex.Value = (uint)uVar3;
    iVar4 = URigHierarchy::GetIndex((pUVar5->DynamicHierarchy).field0_0x0.DebugPtr,&local_118,true);
    if (iVar4 != -1) {
      this = (pUVar5->DynamicHierarchy).field0_0x0.DebugPtr;
      if (EVar2 == LocalSpace) {
        URigHierarchy::GetLocalTransformByIndex(this,&local_98,iVar4,true);
      }
      else {
        URigHierarchy::GetGlobalTransformByIndex(this,&local_f8,iVar4,true);
        ConvertTransformFromRigSpace((UControlRigComponent *)param_1,&local_f8,EVar2);
        local_98.Scale3D.ZW.m128d_f64[0]._0_4_ = local_f8.Scale3D.ZW.m128d_f64[0]._0_4_;
        local_98.Scale3D.ZW.m128d_f64[0]._4_4_ = local_f8.Scale3D.ZW.m128d_f64[0]._4_4_;
        local_98.Scale3D.ZW.m128d_f64[1]._0_4_ = local_f8.Scale3D.ZW.m128d_f64[1]._0_4_;
        local_98.Scale3D.ZW.m128d_f64[1]._4_4_ = local_f8.Scale3D.ZW.m128d_f64[1]._4_4_;
        local_98.Scale3D.XY.m128d_f64[0]._0_4_ = local_f8.Scale3D.XY.m128d_f64[0]._0_4_;
        local_98.Scale3D.XY.m128d_f64[0]._4_4_ = local_f8.Scale3D.XY.m128d_f64[0]._4_4_;
        local_98.Scale3D.XY.m128d_f64[1]._0_4_ = local_f8.Scale3D.XY.m128d_f64[1]._0_4_;
        local_98.Scale3D.XY.m128d_f64[1]._4_4_ = local_f8.Scale3D.XY.m128d_f64[1]._4_4_;
        local_98.Translation.ZW.m128d_f64[0]._0_4_ = local_f8.Translation.ZW.m128d_f64[0]._0_4_;
        local_98.Translation.ZW.m128d_f64[0]._4_4_ = local_f8.Translation.ZW.m128d_f64[0]._4_4_;
        local_98.Translation.ZW.m128d_f64[1]._0_4_ = local_f8.Translation.ZW.m128d_f64[1]._0_4_;
        local_98.Translation.ZW.m128d_f64[1]._4_4_ = local_f8.Translation.ZW.m128d_f64[1]._4_4_;
        local_98.Translation.XY.m128d_f64[0]._0_4_ = local_f8.Translation.XY.m128d_f64[0]._0_4_;
        local_98.Translation.XY.m128d_f64[0]._4_4_ = local_f8.Translation.XY.m128d_f64[0]._4_4_;
        local_98.Translation.XY.m128d_f64[1]._0_4_ = local_f8.Translation.XY.m128d_f64[1]._0_4_;
        local_98.Translation.XY.m128d_f64[1]._4_4_ = local_f8.Translation.XY.m128d_f64[1]._4_4_;
        local_98.Rotation.ZW.m128d_f64[0]._0_4_ = local_f8.Rotation.ZW.m128d_f64[0]._0_4_;
        local_98.Rotation.ZW.m128d_f64[0]._4_4_ = local_f8.Rotation.ZW.m128d_f64[0]._4_4_;
        local_98.Rotation.ZW.m128d_f64[1]._0_4_ = local_f8.Rotation.ZW.m128d_f64[1]._0_4_;
        local_98.Rotation.ZW.m128d_f64[1]._4_4_ = local_f8.Rotation.ZW.m128d_f64[1]._4_4_;
        local_98.Rotation.XY.m128d_f64[0]._0_4_ = local_f8.Rotation.XY.m128d_f64[0]._0_4_;
        local_98.Rotation.XY.m128d_f64[0]._4_4_ = local_f8.Rotation.XY.m128d_f64[0]._4_4_;
        local_98.Rotation.XY.m128d_f64[1]._0_4_ = local_f8.Rotation.XY.m128d_f64[1]._0_4_;
        local_98.Rotation.XY.m128d_f64[1]._4_4_ = local_f8.Rotation.XY.m128d_f64[1]._4_4_;
      }
      goto LAB_14a2b2af7;
    }
  }
  local_98.Rotation.XY.m128d_f64[0]._0_4_ =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._0_4_;
  local_98.Rotation.XY.m128d_f64[0]._4_4_ =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._4_4_;
  local_98.Rotation.XY.m128d_f64[1]._0_4_ =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._0_4_;
  local_98.Rotation.XY.m128d_f64[1]._4_4_ =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._4_4_;
  local_98.Rotation.ZW.m128d_f64[0]._0_4_ =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._0_4_;
  local_98.Rotation.ZW.m128d_f64[0]._4_4_ =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._4_4_;
  local_98.Rotation.ZW.m128d_f64[1]._0_4_ =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._0_4_;
  local_98.Rotation.ZW.m128d_f64[1]._4_4_ =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._4_4_;
  local_98.Translation.XY.m128d_f64[0]._0_4_ =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._0_4_;
  local_98.Translation.XY.m128d_f64[0]._4_4_ =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._4_4_;
  local_98.Translation.XY.m128d_f64[1]._0_4_ =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._0_4_;
  local_98.Translation.XY.m128d_f64[1]._4_4_ =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._4_4_;
  local_98.Translation.ZW.m128d_f64[0]._0_4_ =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._0_4_;
  local_98.Translation.ZW.m128d_f64[0]._4_4_ =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._4_4_;
  local_98.Translation.ZW.m128d_f64[1]._0_4_ =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._0_4_;
  local_98.Translation.ZW.m128d_f64[1]._4_4_ =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._4_4_;
  local_98.Scale3D.XY.m128d_f64[0]._0_4_ =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._0_4_;
  local_98.Scale3D.XY.m128d_f64[0]._4_4_ =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._4_4_;
  local_98.Scale3D.XY.m128d_f64[1]._0_4_ =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._0_4_;
  local_98.Scale3D.XY.m128d_f64[1]._4_4_ =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._4_4_;
  local_98.Scale3D.ZW.m128d_f64[0]._0_4_ =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._0_4_;
  local_98.Scale3D.ZW.m128d_f64[0]._4_4_ =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._4_4_;
  local_98.Scale3D.ZW.m128d_f64[1]._0_4_ =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._0_4_;
  local_98.Scale3D.ZW.m128d_f64[1]._4_4_ =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._4_4_;
LAB_14a2b2af7:
  *(undefined4 *)param_3 = local_98.Rotation.XY.m128d_f64[0]._0_4_;
  *(undefined4 *)((longlong)param_3 + 4) = local_98.Rotation.XY.m128d_f64[0]._4_4_;
  *(undefined4 *)((longlong)param_3 + 8) = local_98.Rotation.XY.m128d_f64[1]._0_4_;
  *(undefined4 *)((longlong)param_3 + 0xc) = local_98.Rotation.XY.m128d_f64[1]._4_4_;
  *(undefined4 *)((longlong)param_3 + 0x10) = local_98.Rotation.ZW.m128d_f64[0]._0_4_;
  *(undefined4 *)((longlong)param_3 + 0x14) = local_98.Rotation.ZW.m128d_f64[0]._4_4_;
  *(undefined4 *)((longlong)param_3 + 0x18) = local_98.Rotation.ZW.m128d_f64[1]._0_4_;
  *(undefined4 *)((longlong)param_3 + 0x1c) = local_98.Rotation.ZW.m128d_f64[1]._4_4_;
  *(undefined4 *)((longlong)param_3 + 0x20) = local_98.Translation.XY.m128d_f64[0]._0_4_;
  *(undefined4 *)((longlong)param_3 + 0x24) = local_98.Translation.XY.m128d_f64[0]._4_4_;
  *(undefined4 *)((longlong)param_3 + 0x28) = local_98.Translation.XY.m128d_f64[1]._0_4_;
  *(undefined4 *)((longlong)param_3 + 0x2c) = local_98.Translation.XY.m128d_f64[1]._4_4_;
  *(undefined4 *)((longlong)param_3 + 0x30) = local_98.Translation.ZW.m128d_f64[0]._0_4_;
  *(undefined4 *)((longlong)param_3 + 0x34) = local_98.Translation.ZW.m128d_f64[0]._4_4_;
  *(undefined4 *)((longlong)param_3 + 0x38) = local_98.Translation.ZW.m128d_f64[1]._0_4_;
  *(undefined4 *)((longlong)param_3 + 0x3c) = local_98.Translation.ZW.m128d_f64[1]._4_4_;
  *(undefined4 *)((longlong)param_3 + 0x40) = local_98.Scale3D.XY.m128d_f64[0]._0_4_;
  *(undefined4 *)((longlong)param_3 + 0x44) = local_98.Scale3D.XY.m128d_f64[0]._4_4_;
  *(undefined4 *)((longlong)param_3 + 0x48) = local_98.Scale3D.XY.m128d_f64[1]._0_4_;
  *(undefined4 *)((longlong)param_3 + 0x4c) = local_98.Scale3D.XY.m128d_f64[1]._4_4_;
  *(undefined4 *)((longlong)param_3 + 0x50) = local_98.Scale3D.ZW.m128d_f64[0]._0_4_;
  *(undefined4 *)((longlong)param_3 + 0x54) = local_98.Scale3D.ZW.m128d_f64[0]._4_4_;
  *(undefined4 *)((longlong)param_3 + 0x58) = local_98.Scale3D.ZW.m128d_f64[1]._0_4_;
  *(undefined4 *)((longlong)param_3 + 0x5c) = local_98.Scale3D.ZW.m128d_f64[1]._4_4_;
  return;
}

// execGetInitialSpaceTransform @ 14a2b2b40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
UControlRigComponent::execGetInitialSpaceTransform(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  URigHierarchy *this;
  EControlRigComponentSpace EVar2;
  undefined8 uVar3;
  UControlRig *pUVar4;
  FRigNullElement *pFVar5;
  undefined1 auStack_148 [32];
  EControlRigComponentSpace local_128 [8];
  undefined8 local_120;
  FRigElementKey local_118;
  undefined8 local_108;
  TTransform<double> local_f8;
  TTransform<double> local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_148;
  local_120 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_120,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_120);
  }
  local_128[0] = WorldSpace;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_128,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_128);
  }
  uVar3 = local_120;
  EVar2 = local_128[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_108 = local_120;
  pUVar4 = SetupControlRigIfRequired((UControlRigComponent *)param_1);
  if (pUVar4 != (UControlRig *)0x0) {
    local_118.Name.Number = local_108._4_4_;
    local_118.Type = Control;
    local_118.Name.ComparisonIndex.Value = (uint)uVar3;
    pFVar5 = URigHierarchy::Find<FRigNullElement>
                       ((pUVar4->DynamicHierarchy).field0_0x0.DebugPtr,&local_118);
    if (pFVar5 != (FRigNullElement *)0x0) {
      this = (pUVar4->DynamicHierarchy).field0_0x0.DebugPtr;
      if (EVar2 == LocalSpace) {
        URigHierarchy::GetTransform(this,&local_98,(FRigTransformElement *)pFVar5,InitialLocal);
      }
      else {
        URigHierarchy::GetTransform(this,&local_f8,(FRigTransformElement *)pFVar5,InitialGlobal);
        ConvertTransformFromRigSpace((UControlRigComponent *)param_1,&local_f8,EVar2);
        local_98.Scale3D.ZW.m128d_f64[0]._0_4_ = local_f8.Scale3D.ZW.m128d_f64[0]._0_4_;
        local_98.Scale3D.ZW.m128d_f64[0]._4_4_ = local_f8.Scale3D.ZW.m128d_f64[0]._4_4_;
        local_98.Scale3D.ZW.m128d_f64[1]._0_4_ = local_f8.Scale3D.ZW.m128d_f64[1]._0_4_;
        local_98.Scale3D.ZW.m128d_f64[1]._4_4_ = local_f8.Scale3D.ZW.m128d_f64[1]._4_4_;
        local_98.Scale3D.XY.m128d_f64[0]._0_4_ = local_f8.Scale3D.XY.m128d_f64[0]._0_4_;
        local_98.Scale3D.XY.m128d_f64[0]._4_4_ = local_f8.Scale3D.XY.m128d_f64[0]._4_4_;
        local_98.Scale3D.XY.m128d_f64[1]._0_4_ = local_f8.Scale3D.XY.m128d_f64[1]._0_4_;
        local_98.Scale3D.XY.m128d_f64[1]._4_4_ = local_f8.Scale3D.XY.m128d_f64[1]._4_4_;
        local_98.Translation.ZW.m128d_f64[0]._0_4_ = local_f8.Translation.ZW.m128d_f64[0]._0_4_;
        local_98.Translation.ZW.m128d_f64[0]._4_4_ = local_f8.Translation.ZW.m128d_f64[0]._4_4_;
        local_98.Translation.ZW.m128d_f64[1]._0_4_ = local_f8.Translation.ZW.m128d_f64[1]._0_4_;
        local_98.Translation.ZW.m128d_f64[1]._4_4_ = local_f8.Translation.ZW.m128d_f64[1]._4_4_;
        local_98.Translation.XY.m128d_f64[0]._0_4_ = local_f8.Translation.XY.m128d_f64[0]._0_4_;
        local_98.Translation.XY.m128d_f64[0]._4_4_ = local_f8.Translation.XY.m128d_f64[0]._4_4_;
        local_98.Translation.XY.m128d_f64[1]._0_4_ = local_f8.Translation.XY.m128d_f64[1]._0_4_;
        local_98.Translation.XY.m128d_f64[1]._4_4_ = local_f8.Translation.XY.m128d_f64[1]._4_4_;
        local_98.Rotation.ZW.m128d_f64[0]._0_4_ = local_f8.Rotation.ZW.m128d_f64[0]._0_4_;
        local_98.Rotation.ZW.m128d_f64[0]._4_4_ = local_f8.Rotation.ZW.m128d_f64[0]._4_4_;
        local_98.Rotation.ZW.m128d_f64[1]._0_4_ = local_f8.Rotation.ZW.m128d_f64[1]._0_4_;
        local_98.Rotation.ZW.m128d_f64[1]._4_4_ = local_f8.Rotation.ZW.m128d_f64[1]._4_4_;
        local_98.Rotation.XY.m128d_f64[0]._0_4_ = local_f8.Rotation.XY.m128d_f64[0]._0_4_;
        local_98.Rotation.XY.m128d_f64[0]._4_4_ = local_f8.Rotation.XY.m128d_f64[0]._4_4_;
        local_98.Rotation.XY.m128d_f64[1]._0_4_ = local_f8.Rotation.XY.m128d_f64[1]._0_4_;
        local_98.Rotation.XY.m128d_f64[1]._4_4_ = local_f8.Rotation.XY.m128d_f64[1]._4_4_;
      }
      goto LAB_14a2b2cea;
    }
  }
  local_98.Rotation.XY.m128d_f64[0]._0_4_ =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._0_4_;
  local_98.Rotation.XY.m128d_f64[0]._4_4_ =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._4_4_;
  local_98.Rotation.XY.m128d_f64[1]._0_4_ =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._0_4_;
  local_98.Rotation.XY.m128d_f64[1]._4_4_ =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._4_4_;
  local_98.Rotation.ZW.m128d_f64[0]._0_4_ =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._0_4_;
  local_98.Rotation.ZW.m128d_f64[0]._4_4_ =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._4_4_;
  local_98.Rotation.ZW.m128d_f64[1]._0_4_ =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._0_4_;
  local_98.Rotation.ZW.m128d_f64[1]._4_4_ =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._4_4_;
  local_98.Translation.XY.m128d_f64[0]._0_4_ =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._0_4_;
  local_98.Translation.XY.m128d_f64[0]._4_4_ =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._4_4_;
  local_98.Translation.XY.m128d_f64[1]._0_4_ =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._0_4_;
  local_98.Translation.XY.m128d_f64[1]._4_4_ =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._4_4_;
  local_98.Translation.ZW.m128d_f64[0]._0_4_ =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._0_4_;
  local_98.Translation.ZW.m128d_f64[0]._4_4_ =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._4_4_;
  local_98.Translation.ZW.m128d_f64[1]._0_4_ =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._0_4_;
  local_98.Translation.ZW.m128d_f64[1]._4_4_ =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._4_4_;
  local_98.Scale3D.XY.m128d_f64[0]._0_4_ =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._0_4_;
  local_98.Scale3D.XY.m128d_f64[0]._4_4_ =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._4_4_;
  local_98.Scale3D.XY.m128d_f64[1]._0_4_ =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._0_4_;
  local_98.Scale3D.XY.m128d_f64[1]._4_4_ =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._4_4_;
  local_98.Scale3D.ZW.m128d_f64[0]._0_4_ =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._0_4_;
  local_98.Scale3D.ZW.m128d_f64[0]._4_4_ =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._4_4_;
  local_98.Scale3D.ZW.m128d_f64[1]._0_4_ =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._0_4_;
  local_98.Scale3D.ZW.m128d_f64[1]._4_4_ =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._4_4_;
LAB_14a2b2cea:
  *(undefined4 *)param_3 = local_98.Rotation.XY.m128d_f64[0]._0_4_;
  *(undefined4 *)((longlong)param_3 + 4) = local_98.Rotation.XY.m128d_f64[0]._4_4_;
  *(undefined4 *)((longlong)param_3 + 8) = local_98.Rotation.XY.m128d_f64[1]._0_4_;
  *(undefined4 *)((longlong)param_3 + 0xc) = local_98.Rotation.XY.m128d_f64[1]._4_4_;
  *(undefined4 *)((longlong)param_3 + 0x10) = local_98.Rotation.ZW.m128d_f64[0]._0_4_;
  *(undefined4 *)((longlong)param_3 + 0x14) = local_98.Rotation.ZW.m128d_f64[0]._4_4_;
  *(undefined4 *)((longlong)param_3 + 0x18) = local_98.Rotation.ZW.m128d_f64[1]._0_4_;
  *(undefined4 *)((longlong)param_3 + 0x1c) = local_98.Rotation.ZW.m128d_f64[1]._4_4_;
  *(undefined4 *)((longlong)param_3 + 0x20) = local_98.Translation.XY.m128d_f64[0]._0_4_;
  *(undefined4 *)((longlong)param_3 + 0x24) = local_98.Translation.XY.m128d_f64[0]._4_4_;
  *(undefined4 *)((longlong)param_3 + 0x28) = local_98.Translation.XY.m128d_f64[1]._0_4_;
  *(undefined4 *)((longlong)param_3 + 0x2c) = local_98.Translation.XY.m128d_f64[1]._4_4_;
  *(undefined4 *)((longlong)param_3 + 0x30) = local_98.Translation.ZW.m128d_f64[0]._0_4_;
  *(undefined4 *)((longlong)param_3 + 0x34) = local_98.Translation.ZW.m128d_f64[0]._4_4_;
  *(undefined4 *)((longlong)param_3 + 0x38) = local_98.Translation.ZW.m128d_f64[1]._0_4_;
  *(undefined4 *)((longlong)param_3 + 0x3c) = local_98.Translation.ZW.m128d_f64[1]._4_4_;
  *(undefined4 *)((longlong)param_3 + 0x40) = local_98.Scale3D.XY.m128d_f64[0]._0_4_;
  *(undefined4 *)((longlong)param_3 + 0x44) = local_98.Scale3D.XY.m128d_f64[0]._4_4_;
  *(undefined4 *)((longlong)param_3 + 0x48) = local_98.Scale3D.XY.m128d_f64[1]._0_4_;
  *(undefined4 *)((longlong)param_3 + 0x4c) = local_98.Scale3D.XY.m128d_f64[1]._4_4_;
  *(undefined4 *)((longlong)param_3 + 0x50) = local_98.Scale3D.ZW.m128d_f64[0]._0_4_;
  *(undefined4 *)((longlong)param_3 + 0x54) = local_98.Scale3D.ZW.m128d_f64[0]._4_4_;
  *(undefined4 *)((longlong)param_3 + 0x58) = local_98.Scale3D.ZW.m128d_f64[1]._0_4_;
  *(undefined4 *)((longlong)param_3 + 0x5c) = local_98.Scale3D.ZW.m128d_f64[1]._4_4_;
  return;
}

// execGetSpaceTransform @ 14a2b38d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
UControlRigComponent::execGetSpaceTransform(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  URigHierarchy *this;
  EControlRigComponentSpace EVar2;
  undefined8 uVar3;
  UControlRig *pUVar4;
  FRigNullElement *pFVar5;
  undefined1 auStack_148 [32];
  EControlRigComponentSpace local_128 [8];
  undefined8 local_120;
  FRigElementKey local_118;
  undefined8 local_108;
  TTransform<double> local_f8;
  TTransform<double> local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_148;
  local_120 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_120,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_120);
  }
  local_128[0] = WorldSpace;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_128,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_128);
  }
  uVar3 = local_120;
  EVar2 = local_128[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_108 = local_120;
  pUVar4 = SetupControlRigIfRequired((UControlRigComponent *)param_1);
  if (pUVar4 != (UControlRig *)0x0) {
    local_118.Name.Number = local_108._4_4_;
    local_118.Type = Control;
    local_118.Name.ComparisonIndex.Value = (uint)uVar3;
    pFVar5 = URigHierarchy::Find<FRigNullElement>
                       ((pUVar4->DynamicHierarchy).field0_0x0.DebugPtr,&local_118);
    if (pFVar5 != (FRigNullElement *)0x0) {
      this = (pUVar4->DynamicHierarchy).field0_0x0.DebugPtr;
      if (EVar2 == LocalSpace) {
        URigHierarchy::GetTransform(this,&local_98,(FRigTransformElement *)pFVar5,CurrentLocal);
      }
      else {
        URigHierarchy::GetTransform(this,&local_f8,(FRigTransformElement *)pFVar5,CurrentGlobal);
        ConvertTransformFromRigSpace((UControlRigComponent *)param_1,&local_f8,EVar2);
        local_98.Scale3D.ZW.m128d_f64[0]._0_4_ = local_f8.Scale3D.ZW.m128d_f64[0]._0_4_;
        local_98.Scale3D.ZW.m128d_f64[0]._4_4_ = local_f8.Scale3D.ZW.m128d_f64[0]._4_4_;
        local_98.Scale3D.ZW.m128d_f64[1]._0_4_ = local_f8.Scale3D.ZW.m128d_f64[1]._0_4_;
        local_98.Scale3D.ZW.m128d_f64[1]._4_4_ = local_f8.Scale3D.ZW.m128d_f64[1]._4_4_;
        local_98.Scale3D.XY.m128d_f64[0]._0_4_ = local_f8.Scale3D.XY.m128d_f64[0]._0_4_;
        local_98.Scale3D.XY.m128d_f64[0]._4_4_ = local_f8.Scale3D.XY.m128d_f64[0]._4_4_;
        local_98.Scale3D.XY.m128d_f64[1]._0_4_ = local_f8.Scale3D.XY.m128d_f64[1]._0_4_;
        local_98.Scale3D.XY.m128d_f64[1]._4_4_ = local_f8.Scale3D.XY.m128d_f64[1]._4_4_;
        local_98.Translation.ZW.m128d_f64[0]._0_4_ = local_f8.Translation.ZW.m128d_f64[0]._0_4_;
        local_98.Translation.ZW.m128d_f64[0]._4_4_ = local_f8.Translation.ZW.m128d_f64[0]._4_4_;
        local_98.Translation.ZW.m128d_f64[1]._0_4_ = local_f8.Translation.ZW.m128d_f64[1]._0_4_;
        local_98.Translation.ZW.m128d_f64[1]._4_4_ = local_f8.Translation.ZW.m128d_f64[1]._4_4_;
        local_98.Translation.XY.m128d_f64[0]._0_4_ = local_f8.Translation.XY.m128d_f64[0]._0_4_;
        local_98.Translation.XY.m128d_f64[0]._4_4_ = local_f8.Translation.XY.m128d_f64[0]._4_4_;
        local_98.Translation.XY.m128d_f64[1]._0_4_ = local_f8.Translation.XY.m128d_f64[1]._0_4_;
        local_98.Translation.XY.m128d_f64[1]._4_4_ = local_f8.Translation.XY.m128d_f64[1]._4_4_;
        local_98.Rotation.ZW.m128d_f64[0]._0_4_ = local_f8.Rotation.ZW.m128d_f64[0]._0_4_;
        local_98.Rotation.ZW.m128d_f64[0]._4_4_ = local_f8.Rotation.ZW.m128d_f64[0]._4_4_;
        local_98.Rotation.ZW.m128d_f64[1]._0_4_ = local_f8.Rotation.ZW.m128d_f64[1]._0_4_;
        local_98.Rotation.ZW.m128d_f64[1]._4_4_ = local_f8.Rotation.ZW.m128d_f64[1]._4_4_;
        local_98.Rotation.XY.m128d_f64[0]._0_4_ = local_f8.Rotation.XY.m128d_f64[0]._0_4_;
        local_98.Rotation.XY.m128d_f64[0]._4_4_ = local_f8.Rotation.XY.m128d_f64[0]._4_4_;
        local_98.Rotation.XY.m128d_f64[1]._0_4_ = local_f8.Rotation.XY.m128d_f64[1]._0_4_;
        local_98.Rotation.XY.m128d_f64[1]._4_4_ = local_f8.Rotation.XY.m128d_f64[1]._4_4_;
      }
      goto LAB_14a2b3a7d;
    }
  }
  local_98.Rotation.XY.m128d_f64[0]._0_4_ =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._0_4_;
  local_98.Rotation.XY.m128d_f64[0]._4_4_ =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._4_4_;
  local_98.Rotation.XY.m128d_f64[1]._0_4_ =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._0_4_;
  local_98.Rotation.XY.m128d_f64[1]._4_4_ =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._4_4_;
  local_98.Rotation.ZW.m128d_f64[0]._0_4_ =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._0_4_;
  local_98.Rotation.ZW.m128d_f64[0]._4_4_ =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._4_4_;
  local_98.Rotation.ZW.m128d_f64[1]._0_4_ =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._0_4_;
  local_98.Rotation.ZW.m128d_f64[1]._4_4_ =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._4_4_;
  local_98.Translation.XY.m128d_f64[0]._0_4_ =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._0_4_;
  local_98.Translation.XY.m128d_f64[0]._4_4_ =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._4_4_;
  local_98.Translation.XY.m128d_f64[1]._0_4_ =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._0_4_;
  local_98.Translation.XY.m128d_f64[1]._4_4_ =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._4_4_;
  local_98.Translation.ZW.m128d_f64[0]._0_4_ =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._0_4_;
  local_98.Translation.ZW.m128d_f64[0]._4_4_ =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._4_4_;
  local_98.Translation.ZW.m128d_f64[1]._0_4_ =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._0_4_;
  local_98.Translation.ZW.m128d_f64[1]._4_4_ =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._4_4_;
  local_98.Scale3D.XY.m128d_f64[0]._0_4_ =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._0_4_;
  local_98.Scale3D.XY.m128d_f64[0]._4_4_ =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._4_4_;
  local_98.Scale3D.XY.m128d_f64[1]._0_4_ =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._0_4_;
  local_98.Scale3D.XY.m128d_f64[1]._4_4_ =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._4_4_;
  local_98.Scale3D.ZW.m128d_f64[0]._0_4_ =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._0_4_;
  local_98.Scale3D.ZW.m128d_f64[0]._4_4_ =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._4_4_;
  local_98.Scale3D.ZW.m128d_f64[1]._0_4_ =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._0_4_;
  local_98.Scale3D.ZW.m128d_f64[1]._4_4_ =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._4_4_;
LAB_14a2b3a7d:
  *(undefined4 *)param_3 = local_98.Rotation.XY.m128d_f64[0]._0_4_;
  *(undefined4 *)((longlong)param_3 + 4) = local_98.Rotation.XY.m128d_f64[0]._4_4_;
  *(undefined4 *)((longlong)param_3 + 8) = local_98.Rotation.XY.m128d_f64[1]._0_4_;
  *(undefined4 *)((longlong)param_3 + 0xc) = local_98.Rotation.XY.m128d_f64[1]._4_4_;
  *(undefined4 *)((longlong)param_3 + 0x10) = local_98.Rotation.ZW.m128d_f64[0]._0_4_;
  *(undefined4 *)((longlong)param_3 + 0x14) = local_98.Rotation.ZW.m128d_f64[0]._4_4_;
  *(undefined4 *)((longlong)param_3 + 0x18) = local_98.Rotation.ZW.m128d_f64[1]._0_4_;
  *(undefined4 *)((longlong)param_3 + 0x1c) = local_98.Rotation.ZW.m128d_f64[1]._4_4_;
  *(undefined4 *)((longlong)param_3 + 0x20) = local_98.Translation.XY.m128d_f64[0]._0_4_;
  *(undefined4 *)((longlong)param_3 + 0x24) = local_98.Translation.XY.m128d_f64[0]._4_4_;
  *(undefined4 *)((longlong)param_3 + 0x28) = local_98.Translation.XY.m128d_f64[1]._0_4_;
  *(undefined4 *)((longlong)param_3 + 0x2c) = local_98.Translation.XY.m128d_f64[1]._4_4_;
  *(undefined4 *)((longlong)param_3 + 0x30) = local_98.Translation.ZW.m128d_f64[0]._0_4_;
  *(undefined4 *)((longlong)param_3 + 0x34) = local_98.Translation.ZW.m128d_f64[0]._4_4_;
  *(undefined4 *)((longlong)param_3 + 0x38) = local_98.Translation.ZW.m128d_f64[1]._0_4_;
  *(undefined4 *)((longlong)param_3 + 0x3c) = local_98.Translation.ZW.m128d_f64[1]._4_4_;
  *(undefined4 *)((longlong)param_3 + 0x40) = local_98.Scale3D.XY.m128d_f64[0]._0_4_;
  *(undefined4 *)((longlong)param_3 + 0x44) = local_98.Scale3D.XY.m128d_f64[0]._4_4_;
  *(undefined4 *)((longlong)param_3 + 0x48) = local_98.Scale3D.XY.m128d_f64[1]._0_4_;
  *(undefined4 *)((longlong)param_3 + 0x4c) = local_98.Scale3D.XY.m128d_f64[1]._4_4_;
  *(undefined4 *)((longlong)param_3 + 0x50) = local_98.Scale3D.ZW.m128d_f64[0]._0_4_;
  *(undefined4 *)((longlong)param_3 + 0x54) = local_98.Scale3D.ZW.m128d_f64[0]._4_4_;
  *(undefined4 *)((longlong)param_3 + 0x58) = local_98.Scale3D.ZW.m128d_f64[1]._0_4_;
  *(undefined4 *)((longlong)param_3 + 0x5c) = local_98.Scale3D.ZW.m128d_f64[1]._4_4_;
  return;
}

// execInitialize @ 14a2b3d00

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl UControlRigComponent::execInitialize(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  Initialize((UControlRigComponent *)param_1);
  return;
}

// execOnPostConstruction @ 14a2b40f0

void __cdecl
UControlRigComponent::execOnPostConstruction(UObject *param_1,FFrame *param_2,void *param_3)

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
  (**(code **)(*(longlong *)param_1 + 0xaa0))(param_1,local_res8);
  return;
}

// execOnPostForwardsSolve @ 14a2b4180

void __cdecl
UControlRigComponent::execOnPostForwardsSolve(UObject *param_1,FFrame *param_2,void *param_3)

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

// execOnPostInitialize @ 14a2b4210

void __cdecl
UControlRigComponent::execOnPostInitialize(UObject *param_1,FFrame *param_2,void *param_3)

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
  (**(code **)(*(longlong *)param_1 + 0xab0))(param_1,local_res8);
  return;
}

// execOnPreConstruction @ 14a2b42a0

void __cdecl
UControlRigComponent::execOnPreConstruction(UObject *param_1,FFrame *param_2,void *param_3)

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
  (**(code **)(*(longlong *)param_1 + 0xaa8))(param_1,local_res8);
  return;
}

// execOnPreForwardsSolve @ 14a2b4330

void __cdecl
UControlRigComponent::execOnPreForwardsSolve(UObject *param_1,FFrame *param_2,void *param_3)

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
  (**(code **)(*(longlong *)param_1 + 0xa98))(param_1,local_res8);
  return;
}

// execOnPreInitialize @ 14a2b43c0

void __cdecl
UControlRigComponent::execOnPreInitialize(UObject *param_1,FFrame *param_2,void *param_3)

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
  (**(code **)(*(longlong *)param_1 + 0xab8))(param_1,local_res8);
  return;
}

// execSetBoneInitialTransformsFromSkeletalMesh @ 14a2b4cc0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
UControlRigComponent::execSetBoneInitialTransformsFromSkeletalMesh
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  UControlRig *pUVar3;
  longlong local_res10;
  
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  lVar2 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 != 0) {
    pUVar3 = SetupControlRigIfRequired((UControlRigComponent *)param_1);
    if (pUVar3 != (UControlRig *)0x0) {
      (**(code **)(pUVar3->_padding_ + 0x470))(pUVar3,lVar2);
      param_1[0x26].field_0x21 = 0;
    }
  }
  return;
}

// execSetBoneTransform @ 14a2b4d70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
UControlRigComponent::execSetBoneTransform(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  float fVar3;
  EControlRigComponentSpace EVar4;
  float fVar5;
  undefined8 uVar6;
  int iVar7;
  UControlRig *pUVar8;
  URigHierarchy *this;
  bool bVar9;
  undefined1 auStackY_228 [32];
  EControlRigComponentSpace local_1f8 [4];
  int local_1f4;
  float local_1f0 [2];
  undefined8 local_1e8;
  FRigElementKey local_1e0;
  undefined8 local_1d0;
  TTransform<double> local_1c8;
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  TTransform<double> local_108;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_228;
  local_1e8 = 0;
  FNameProperty::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1e8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1e8);
  }
  local_168._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_168._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_168._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_158._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_158._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_158._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_148._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_148._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_148._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_138._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_138._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_138._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_128._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_128._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_128._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_118._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_118._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_118._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_168,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_168);
  }
  local_1f8[0] = WorldSpace;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_1f8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_1f8);
  }
  local_1f0[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_1f0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_1f0);
  }
  local_1f4 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1f4,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1f4);
  }
  uVar6 = local_1e8;
  fVar5 = local_1f0[0];
  EVar4 = local_1f8[0];
  fVar3 = __real_322bcc77;
  bVar9 = local_1f4 != 0;
  local_1c8.Rotation.XY.m128d_f64[0] = (double)local_168._0_8_;
  local_1c8.Rotation.XY.m128d_f64[1] = (double)local_168._8_8_;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_1d0 = local_1e8;
  local_1c8.Rotation.ZW.m128d_f64[0] = (double)local_158._0_8_;
  local_1c8.Rotation.ZW.m128d_f64[1] = (double)local_158._8_8_;
  local_1c8.Translation.XY.m128d_f64[0] = (double)local_148._0_8_;
  local_1c8.Translation.XY.m128d_f64[1] = (double)local_148._8_8_;
  local_1c8.Translation.ZW.m128d_f64[0] = (double)local_138._0_8_;
  local_1c8.Translation.ZW.m128d_f64[1] = (double)local_138._8_8_;
  local_1c8.Scale3D.XY.m128d_f64[0] = (double)local_128._0_8_;
  local_1c8.Scale3D.XY.m128d_f64[1] = (double)local_128._8_8_;
  local_1c8.Scale3D.ZW.m128d_f64[0] = (double)local_118._0_8_;
  local_1c8.Scale3D.ZW.m128d_f64[1] = (double)local_118._8_8_;
  if (fVar3 < local_1f0[0]) {
    pUVar8 = SetupControlRigIfRequired((UControlRigComponent *)param_1);
    if (pUVar8 != (UControlRig *)0x0) {
      local_1e0.Name.Number = local_1d0._4_4_;
      local_1e0.Type = Bone;
      local_1e0.Name.ComparisonIndex.Value = (uint)uVar6;
      iVar7 = URigHierarchy::GetIndex
                        ((pUVar8->DynamicHierarchy).field0_0x0.DebugPtr,&local_1e0,true);
      if (iVar7 != -1) {
        ConvertTransformToRigSpace((UControlRigComponent *)param_1,&local_1c8,EVar4);
        this = (pUVar8->DynamicHierarchy).field0_0x0.DebugPtr;
        if (EVar4 == LocalSpace) {
          if (fVar5 < __real_3f800000) {
            URigHierarchy::GetLocalTransformByIndex(this,&local_108,iVar7,false);
            FRigVMMathLibrary::LerpTransform(&local_a8,&local_108,&local_1c8,fVar5);
            URigHierarchy::SetLocalTransform
                      ((pUVar8->DynamicHierarchy).field0_0x0.DebugPtr,iVar7,&local_1c8,bVar9,false,
                       false);
          }
          else {
            URigHierarchy::SetLocalTransform(this,iVar7,&local_1c8,bVar9,false,false);
          }
        }
        else {
          if (fVar5 < __real_3f800000) {
            URigHierarchy::GetGlobalTransformByIndex(this,&local_108,iVar7,false);
            FRigVMMathLibrary::LerpTransform(&local_a8,&local_108,&local_1c8,fVar5);
            this = (pUVar8->DynamicHierarchy).field0_0x0.DebugPtr;
          }
          URigHierarchy::SetGlobalTransform(this,iVar7,&local_1c8,bVar9,false);
        }
      }
    }
  }
  return;
}

// execSetControlBool @ 14a2b5280

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
UControlRigComponent::execSetControlBool(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UControlRig *pUVar2;
  bool bVar3;
  int local_res10 [2];
  undefined8 local_res20;
  undefined1 local_c8 [4];
  undefined4 local_c4;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined1 local_b4;
  undefined8 local_b0;
  ulonglong local_a8 [16];
  undefined4 local_28;
  
  local_res20 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar3 = local_res10[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_b0 = local_res20;
  pUVar2 = SetupControlRigIfRequired((UControlRigComponent *)param_1);
  if (pUVar2 != (UControlRig *)0x0) {
    local_a8[1] = 0;
    local_c8[0] = 0;
    local_c4 = 0x1ff;
    local_c0 = 0x7f7fffff;
    local_b8 = 0;
    local_b4 = 0;
    local_a8[2] = 0;
    local_a8[3] = 0;
    local_28 = 1;
    local_a8[4] = 0;
    local_a8[5] = 0;
    local_a8[0] = (ulonglong)bVar3;
    local_a8[6] = 0;
    local_a8[7] = 0;
    local_a8[8] = 0;
    local_a8[9] = 0;
    local_a8[10] = 0;
    local_a8[0xb] = 0;
    local_a8[0xc] = 0;
    local_a8[0xd] = 0;
    local_a8[0xe] = 0;
    local_a8[0xf] = 0;
    (**(code **)(pUVar2->_padding_ + 0x3f0))(pUVar2,&local_b0,local_a8,1,local_c8,1,0,0);
  }
  return;
}

// execSetControlFloat @ 14a2b53f0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
UControlRigComponent::execSetControlFloat(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uint uVar2;
  UControlRig *pUVar3;
  uint local_res10 [4];
  undefined8 local_res20;
  undefined1 local_d8 [4];
  undefined4 local_d4;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined1 local_c4;
  undefined8 local_c0;
  ulonglong local_b8 [16];
  undefined4 local_38;
  
  local_res20 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  uVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_c0 = local_res20;
  pUVar3 = SetupControlRigIfRequired((UControlRigComponent *)param_1);
  if (pUVar3 != (UControlRig *)0x0) {
    local_b8[1] = 0;
    local_b8[0] = (ulonglong)uVar2;
    local_d8[0] = 0;
    local_d4 = 0x1ff;
    local_d0 = 0x7f7fffff;
    local_c8 = 0;
    local_c4 = 0;
    local_b8[2] = 0;
    local_b8[3] = 0;
    local_38 = 1;
    local_b8[4] = 0;
    local_b8[5] = 0;
    local_b8[6] = 0;
    local_b8[7] = 0;
    local_b8[8] = 0;
    local_b8[9] = 0;
    local_b8[10] = 0;
    local_b8[0xb] = 0;
    local_b8[0xc] = 0;
    local_b8[0xd] = 0;
    local_b8[0xe] = 0;
    local_b8[0xf] = 0;
    (**(code **)(pUVar3->_padding_ + 0x3f0))(pUVar3,&local_c0,local_b8,1,local_d8,1,0,0);
  }
  return;
}

// execSetControlInt @ 14a2b5560

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl UControlRigComponent::execSetControlInt(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uint uVar2;
  UControlRig *pUVar3;
  uint local_res10 [4];
  undefined8 local_res20;
  undefined1 local_c8 [4];
  undefined4 local_c4;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined1 local_b4;
  undefined8 local_b0;
  ulonglong local_a8 [16];
  undefined4 local_28;
  
  local_res20 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  uVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_b0 = local_res20;
  pUVar3 = SetupControlRigIfRequired((UControlRigComponent *)param_1);
  if (pUVar3 != (UControlRig *)0x0) {
    local_a8[1] = 0;
    local_c8[0] = 0;
    local_c4 = 0x1ff;
    local_c0 = 0x7f7fffff;
    local_b8 = 0;
    local_b4 = 0;
    local_a8[2] = 0;
    local_a8[3] = 0;
    local_28 = 1;
    local_a8[4] = 0;
    local_a8[5] = 0;
    local_a8[0] = (ulonglong)uVar2;
    local_a8[6] = 0;
    local_a8[7] = 0;
    local_a8[8] = 0;
    local_a8[9] = 0;
    local_a8[10] = 0;
    local_a8[0xb] = 0;
    local_a8[0xc] = 0;
    local_a8[0xd] = 0;
    local_a8[0xe] = 0;
    local_a8[0xf] = 0;
    (**(code **)(pUVar3->_padding_ + 0x3f0))(pUVar3,&local_b0,local_a8,1,local_c8,1,0,0);
  }
  return;
}

// execSetControlOffset @ 14a2b56b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
UControlRigComponent::execSetControlOffset(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  EControlRigComponentSpace EVar2;
  undefined8 uVar3;
  UControlRig *pUVar4;
  FRigControlElement *pFVar5;
  Type TVar6;
  undefined1 auStackY_158 [32];
  EControlRigComponentSpace local_118 [8];
  undefined8 local_110;
  FRigElementKey local_108;
  undefined8 local_f8;
  TTransform<double> local_e8;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_158;
  local_110 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_110,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_110);
  }
  local_88._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_88._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_88._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_78._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_78._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_78._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_68._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_68._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_68._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_58._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_58._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_58._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_48._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_48._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_48._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_38._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_38._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_38._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_88);
  }
  local_118[0] = WorldSpace;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_118,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_118);
  }
  uVar3 = local_110;
  EVar2 = local_118[0];
  local_e8.Rotation.XY.m128d_f64[0] = (double)local_88._0_8_;
  local_e8.Rotation.XY.m128d_f64[1] = (double)local_88._8_8_;
  local_e8.Rotation.ZW.m128d_f64[0] = (double)local_78._0_8_;
  local_e8.Rotation.ZW.m128d_f64[1] = (double)local_78._8_8_;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_e8.Translation.XY.m128d_f64[0] = (double)local_68._0_8_;
  local_e8.Translation.XY.m128d_f64[1] = (double)local_68._8_8_;
  local_e8.Translation.ZW.m128d_f64[0] = (double)local_58._0_8_;
  local_e8.Translation.ZW.m128d_f64[1] = (double)local_58._8_8_;
  local_f8 = local_110;
  local_e8.Scale3D.XY.m128d_f64[0] = (double)local_48._0_8_;
  local_e8.Scale3D.XY.m128d_f64[1] = (double)local_48._8_8_;
  local_e8.Scale3D.ZW.m128d_f64[0] = (double)local_38._0_8_;
  local_e8.Scale3D.ZW.m128d_f64[1] = (double)local_38._8_8_;
  pUVar4 = SetupControlRigIfRequired((UControlRigComponent *)param_1);
  if (pUVar4 != (UControlRig *)0x0) {
    local_108.Name.Number = local_f8._4_4_;
    local_108.Type = Control;
    local_108.Name.ComparisonIndex.Value = (uint)uVar3;
    pFVar5 = URigHierarchy::Find<FRigControlElement>
                       ((pUVar4->DynamicHierarchy).field0_0x0.DebugPtr,&local_108);
    if (pFVar5 != (FRigControlElement *)0x0) {
      if (EVar2 != LocalSpace) {
        ConvertTransformToRigSpace((UControlRigComponent *)param_1,&local_e8,EVar2);
      }
      TVar6 = CurrentGlobal;
      if (EVar2 == LocalSpace) {
        TVar6 = CurrentLocal;
      }
      URigHierarchy::SetControlOffsetTransform
                ((pUVar4->DynamicHierarchy).field0_0x0.DebugPtr,pFVar5,&local_e8,TVar6,true,false,
                 false,false);
    }
  }
  return;
}

// execSetControlPosition @ 14a2b58f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
UControlRigComponent::execSetControlPosition(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  URigHierarchy *this;
  EControlRigComponentSpace EVar2;
  undefined8 uVar3;
  uint uVar4;
  UControlRig *pUVar5;
  FRigControlElement *pFVar6;
  TTransform<double> *pTVar7;
  Type TVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined1 auStackY_218 [32];
  EControlRigComponentSpace local_1d8 [4];
  FRigElementKey local_1d4;
  undefined8 local_1c8;
  undefined8 local_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  TTransform<double> local_198;
  TTransform<double> local_138;
  TTransform<double> local_d8;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_218;
  local_1c8 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1c8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1c8);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1b8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1b8);
  }
  local_1d8[0] = WorldSpace;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_1d8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_1d8);
  }
  uVar3 = local_1c8;
  EVar2 = local_1d8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_1c0 = local_1c8;
  pUVar5 = SetupControlRigIfRequired((UControlRigComponent *)param_1);
  if (pUVar5 != (UControlRig *)0x0) {
    uVar4 = local_1c0._4_4_;
    local_1d4.Name.Number = local_1c0._4_4_;
    local_1d4.Type = Control;
    local_1d4.Name.ComparisonIndex.Value = (uint)uVar3;
    pFVar6 = URigHierarchy::Find<FRigControlElement>
                       ((pUVar5->DynamicHierarchy).field0_0x0.DebugPtr,&local_1d4);
    if (pFVar6 != (FRigControlElement *)0x0) {
      this = (pUVar5->DynamicHierarchy).field0_0x0.DebugPtr;
      local_138.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64
      ;
      local_138.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
      local_138.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64
      ;
      local_138.Translation.ZW.m128d_f64[0] = local_1a8;
      local_138.Translation.ZW.m128d_f64[1] = 0.0;
      local_138.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
      local_138.Translation.XY.m128d_f64[0] = local_1b8;
      local_138.Translation.XY.m128d_f64[1] = dStack_1b0;
      if (EVar2 == LocalSpace) {
        pTVar7 = URigHierarchy::GetTransform
                           (this,&local_d8,(FRigTransformElement *)pFVar6,CurrentLocal);
        uVar9 = *(undefined4 *)(pTVar7->Rotation).XY.m128d_f64;
        uVar10 = *(undefined4 *)((longlong)(pTVar7->Rotation).XY.m128d_f64 + 4);
        uVar11 = *(undefined4 *)((pTVar7->Rotation).XY.m128d_f64 + 1);
        uVar12 = *(undefined4 *)((longlong)(pTVar7->Rotation).XY.m128d_f64 + 0xc);
        uVar13 = *(undefined4 *)(pTVar7->Rotation).ZW.m128d_f64;
        uVar14 = *(undefined4 *)((longlong)(pTVar7->Rotation).ZW.m128d_f64 + 4);
        uVar15 = *(undefined4 *)((pTVar7->Rotation).ZW.m128d_f64 + 1);
        uVar16 = *(undefined4 *)((longlong)(pTVar7->Rotation).ZW.m128d_f64 + 0xc);
        uVar17 = *(undefined4 *)(pTVar7->Scale3D).XY.m128d_f64;
        uVar18 = *(undefined4 *)((longlong)(pTVar7->Scale3D).XY.m128d_f64 + 4);
        uVar19 = *(undefined4 *)((pTVar7->Scale3D).XY.m128d_f64 + 1);
        uVar20 = *(undefined4 *)((longlong)(pTVar7->Scale3D).XY.m128d_f64 + 0xc);
        uVar21 = *(undefined4 *)(pTVar7->Scale3D).ZW.m128d_f64;
        uVar22 = *(undefined4 *)((longlong)(pTVar7->Scale3D).ZW.m128d_f64 + 4);
        uVar23 = *(undefined4 *)((pTVar7->Scale3D).ZW.m128d_f64 + 1);
        uVar24 = *(undefined4 *)((longlong)(pTVar7->Scale3D).ZW.m128d_f64 + 0xc);
      }
      else {
        pTVar7 = URigHierarchy::GetTransform
                           (this,&local_d8,(FRigTransformElement *)pFVar6,CurrentGlobal);
        local_198.Translation.XY.m128d_f64[0] = (pTVar7->Translation).XY.m128d_f64[0];
        local_198.Translation.XY.m128d_f64[1] = (pTVar7->Translation).XY.m128d_f64[1];
        local_198.Translation.ZW.m128d_f64[0] = (pTVar7->Translation).ZW.m128d_f64[0];
        local_198.Translation.ZW.m128d_f64[1] = (pTVar7->Translation).ZW.m128d_f64[1];
        uVar9 = *(undefined4 *)(pTVar7->Rotation).XY.m128d_f64;
        uVar10 = *(undefined4 *)((longlong)(pTVar7->Rotation).XY.m128d_f64 + 4);
        uVar11 = *(undefined4 *)((pTVar7->Rotation).XY.m128d_f64 + 1);
        uVar12 = *(undefined4 *)((longlong)(pTVar7->Rotation).XY.m128d_f64 + 0xc);
        uVar13 = *(undefined4 *)(pTVar7->Rotation).ZW.m128d_f64;
        uVar14 = *(undefined4 *)((longlong)(pTVar7->Rotation).ZW.m128d_f64 + 4);
        uVar15 = *(undefined4 *)((pTVar7->Rotation).ZW.m128d_f64 + 1);
        uVar16 = *(undefined4 *)((longlong)(pTVar7->Rotation).ZW.m128d_f64 + 0xc);
        uVar17 = *(undefined4 *)(pTVar7->Scale3D).XY.m128d_f64;
        uVar18 = *(undefined4 *)((longlong)(pTVar7->Scale3D).XY.m128d_f64 + 4);
        uVar19 = *(undefined4 *)((pTVar7->Scale3D).XY.m128d_f64 + 1);
        uVar20 = *(undefined4 *)((longlong)(pTVar7->Scale3D).XY.m128d_f64 + 0xc);
        uVar21 = *(undefined4 *)(pTVar7->Scale3D).ZW.m128d_f64;
        uVar22 = *(undefined4 *)((longlong)(pTVar7->Scale3D).ZW.m128d_f64 + 4);
        uVar23 = *(undefined4 *)((pTVar7->Scale3D).ZW.m128d_f64 + 1);
        uVar24 = *(undefined4 *)((longlong)(pTVar7->Scale3D).ZW.m128d_f64 + 0xc);
        ConvertTransformToRigSpace((UControlRigComponent *)param_1,&local_138,EVar2);
      }
      local_198.Translation.XY.m128d_f64[0] = local_138.Translation.XY.m128d_f64[0];
      local_198.Translation.XY.m128d_f64[1] = local_138.Translation.XY.m128d_f64[1];
      local_198.Translation.ZW.m128d_f64[0] = local_138.Translation.ZW.m128d_f64[0];
      local_198.Translation.ZW.m128d_f64[1] = 0.0;
      local_198.Rotation.XY.m128d_f64[0]._0_4_ = uVar9;
      local_198.Rotation.XY.m128d_f64[0]._4_4_ = uVar10;
      local_198.Rotation.XY.m128d_f64[1]._0_4_ = uVar11;
      local_198.Rotation.XY.m128d_f64[1]._4_4_ = uVar12;
      local_198.Rotation.ZW.m128d_f64[0]._0_4_ = uVar13;
      local_198.Rotation.ZW.m128d_f64[0]._4_4_ = uVar14;
      local_198.Rotation.ZW.m128d_f64[1]._0_4_ = uVar15;
      local_198.Rotation.ZW.m128d_f64[1]._4_4_ = uVar16;
      local_198.Scale3D.XY.m128d_f64[0]._0_4_ = uVar17;
      local_198.Scale3D.XY.m128d_f64[0]._4_4_ = uVar18;
      local_198.Scale3D.XY.m128d_f64[1]._0_4_ = uVar19;
      local_198.Scale3D.XY.m128d_f64[1]._4_4_ = uVar20;
      local_198.Scale3D.ZW.m128d_f64[0]._0_4_ = uVar21;
      local_198.Scale3D.ZW.m128d_f64[0]._4_4_ = uVar22;
      local_198.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar23;
      local_198.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar24;
      pUVar5 = SetupControlRigIfRequired((UControlRigComponent *)param_1);
      if (pUVar5 != (UControlRig *)0x0) {
        local_1d4.Type = Control;
        local_1d4.Name.Number = uVar4;
        local_1d4.Name.ComparisonIndex.Value = (uint)uVar3;
        pFVar6 = URigHierarchy::Find<FRigControlElement>
                           ((pUVar5->DynamicHierarchy).field0_0x0.DebugPtr,&local_1d4);
        if (pFVar6 != (FRigControlElement *)0x0) {
          if (EVar2 == LocalSpace) {
            TVar8 = CurrentLocal;
          }
          else {
            ConvertTransformToRigSpace((UControlRigComponent *)param_1,&local_198,EVar2);
            TVar8 = CurrentGlobal;
          }
          URigHierarchy::SetTransform
                    ((pUVar5->DynamicHierarchy).field0_0x0.DebugPtr,(FRigTransformElement *)pFVar6,
                     &local_198,TVar8,true,false,false,false);
        }
      }
    }
  }
  return;
}

// execSetControlRigClass @ 14a2b5dd0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
UControlRigComponent::execSetControlRigClass(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  longlong lVar3;
  bool bVar4;
  UObject *pUVar5;
  UClass *pUVar6;
  UObject *pUVar7;
  UObject *pUVar8;
  UObject *local_res8;
  
  pUVar8 = (UObject *)0x0;
  local_res8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  pUVar5 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  lVar3 = *(longlong *)&param_1[0x21].field_0x20;
  pUVar7 = pUVar8;
  if ((lVar3 != 0) && (pUVar6 = UControlRig::StaticClass(), pUVar6 != (UClass *)0x0)) {
    iVar1 = (int)pUVar6->_padding_;
    if ((*(int *)(lVar3 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar6->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      pUVar7 = *(UObject **)&param_1[0x21].field_0x20;
    }
  }
  if ((pUVar5 != (UObject *)0x0) && (pUVar6 = UControlRig::StaticClass(), pUVar6 != (UClass *)0x0))
  {
    iVar1 = (int)pUVar6->_padding_;
    if ((*(int *)&pUVar5[1].field_0x10 < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)&pUVar5[1].field_0x8 + (longlong)iVar1 * 8) !=
        &pUVar6->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      pUVar8 = pUVar5;
    }
  }
  if (pUVar7 != pUVar8) {
    SetControlRig((UControlRigComponent *)param_1,(UControlRig *)0x0);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    *(UObject **)&param_1[0x21].field_0x20 = pUVar5;
    Initialize((UControlRigComponent *)param_1);
  }
  return;
}

// execSetControlRotator @ 14a2b5f30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
UControlRigComponent::execSetControlRotator(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  URigHierarchy *this;
  EControlRigComponentSpace EVar2;
  undefined8 uVar3;
  uint uVar4;
  UControlRig *pUVar5;
  FRigControlElement *pFVar6;
  TQuat<double> *pTVar7;
  TTransform<double> *pTVar8;
  Type TVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined1 auStackY_258 [32];
  EControlRigComponentSpace local_218 [4];
  FRigElementKey local_214;
  undefined8 local_208;
  undefined8 local_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  TTransform<double> local_1d8;
  TRotator<double> local_178;
  TQuat<double> local_158;
  TTransform<double> local_138;
  TTransform<double> local_d8;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_258;
  local_208 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_208,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_208);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1f8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1f8);
  }
  local_218[0] = WorldSpace;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_218,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_218);
  }
  uVar3 = local_208;
  EVar2 = local_218[0];
  local_178.Pitch = local_1f8;
  local_178.Yaw = dStack_1f0;
  local_178.Roll = local_1e8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_200 = local_208;
  pUVar5 = SetupControlRigIfRequired((UControlRigComponent *)param_1);
  if (pUVar5 != (UControlRig *)0x0) {
    uVar4 = local_200._4_4_;
    local_214.Name.Number = local_200._4_4_;
    local_214.Type = Control;
    local_214.Name.ComparisonIndex.Value = (uint)uVar3;
    pFVar6 = URigHierarchy::Find<FRigControlElement>
                       ((pUVar5->DynamicHierarchy).field0_0x0.DebugPtr,&local_214);
    if (pFVar6 != (FRigControlElement *)0x0) {
      local_138.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64
      ;
      local_138.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64
      ;
      local_138.Translation.XY.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
      local_138.Translation.ZW.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
      local_138.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
      local_138.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
      pTVar7 = UE::Math::TRotator<double>::Quaternion(&local_178,&local_158);
      this = (pUVar5->DynamicHierarchy).field0_0x0.DebugPtr;
      local_138.Rotation.XY.m128d_f64[0] = pTVar7->X;
      local_138.Rotation.XY.m128d_f64[1] = pTVar7->Y;
      local_138.Rotation.ZW.m128d_f64[0] = pTVar7->Z;
      local_138.Rotation.ZW.m128d_f64[1] = pTVar7->W;
      if (EVar2 == LocalSpace) {
        pTVar8 = URigHierarchy::GetTransform
                           (this,&local_d8,(FRigTransformElement *)pFVar6,CurrentLocal);
        uVar10 = *(undefined4 *)(pTVar8->Translation).XY.m128d_f64;
        uVar11 = *(undefined4 *)((longlong)(pTVar8->Translation).XY.m128d_f64 + 4);
        uVar12 = *(undefined4 *)((pTVar8->Translation).XY.m128d_f64 + 1);
        uVar13 = *(undefined4 *)((longlong)(pTVar8->Translation).XY.m128d_f64 + 0xc);
        uVar14 = *(undefined4 *)(pTVar8->Translation).ZW.m128d_f64;
        uVar15 = *(undefined4 *)((longlong)(pTVar8->Translation).ZW.m128d_f64 + 4);
        uVar16 = *(undefined4 *)((pTVar8->Translation).ZW.m128d_f64 + 1);
        uVar17 = *(undefined4 *)((longlong)(pTVar8->Translation).ZW.m128d_f64 + 0xc);
        uVar18 = *(undefined4 *)(pTVar8->Scale3D).XY.m128d_f64;
        uVar19 = *(undefined4 *)((longlong)(pTVar8->Scale3D).XY.m128d_f64 + 4);
        uVar20 = *(undefined4 *)((pTVar8->Scale3D).XY.m128d_f64 + 1);
        uVar21 = *(undefined4 *)((longlong)(pTVar8->Scale3D).XY.m128d_f64 + 0xc);
        uVar22 = *(undefined4 *)(pTVar8->Scale3D).ZW.m128d_f64;
        uVar23 = *(undefined4 *)((longlong)(pTVar8->Scale3D).ZW.m128d_f64 + 4);
        uVar24 = *(undefined4 *)((pTVar8->Scale3D).ZW.m128d_f64 + 1);
        uVar25 = *(undefined4 *)((longlong)(pTVar8->Scale3D).ZW.m128d_f64 + 0xc);
      }
      else {
        pTVar8 = URigHierarchy::GetTransform
                           (this,&local_d8,(FRigTransformElement *)pFVar6,CurrentGlobal);
        local_1d8.Rotation.XY.m128d_f64[0] = (pTVar8->Rotation).XY.m128d_f64[0];
        local_1d8.Rotation.XY.m128d_f64[1] = (pTVar8->Rotation).XY.m128d_f64[1];
        local_1d8.Rotation.ZW.m128d_f64[0] = (pTVar8->Rotation).ZW.m128d_f64[0];
        local_1d8.Rotation.ZW.m128d_f64[1] = (pTVar8->Rotation).ZW.m128d_f64[1];
        uVar10 = *(undefined4 *)(pTVar8->Translation).XY.m128d_f64;
        uVar11 = *(undefined4 *)((longlong)(pTVar8->Translation).XY.m128d_f64 + 4);
        uVar12 = *(undefined4 *)((pTVar8->Translation).XY.m128d_f64 + 1);
        uVar13 = *(undefined4 *)((longlong)(pTVar8->Translation).XY.m128d_f64 + 0xc);
        uVar14 = *(undefined4 *)(pTVar8->Translation).ZW.m128d_f64;
        uVar15 = *(undefined4 *)((longlong)(pTVar8->Translation).ZW.m128d_f64 + 4);
        uVar16 = *(undefined4 *)((pTVar8->Translation).ZW.m128d_f64 + 1);
        uVar17 = *(undefined4 *)((longlong)(pTVar8->Translation).ZW.m128d_f64 + 0xc);
        uVar18 = *(undefined4 *)(pTVar8->Scale3D).XY.m128d_f64;
        uVar19 = *(undefined4 *)((longlong)(pTVar8->Scale3D).XY.m128d_f64 + 4);
        uVar20 = *(undefined4 *)((pTVar8->Scale3D).XY.m128d_f64 + 1);
        uVar21 = *(undefined4 *)((longlong)(pTVar8->Scale3D).XY.m128d_f64 + 0xc);
        uVar22 = *(undefined4 *)(pTVar8->Scale3D).ZW.m128d_f64;
        uVar23 = *(undefined4 *)((longlong)(pTVar8->Scale3D).ZW.m128d_f64 + 4);
        uVar24 = *(undefined4 *)((pTVar8->Scale3D).ZW.m128d_f64 + 1);
        uVar25 = *(undefined4 *)((longlong)(pTVar8->Scale3D).ZW.m128d_f64 + 0xc);
        ConvertTransformToRigSpace((UControlRigComponent *)param_1,&local_138,EVar2);
      }
      local_1d8.Rotation.XY.m128d_f64[0] = local_138.Rotation.XY.m128d_f64[0];
      local_1d8.Rotation.XY.m128d_f64[1] = local_138.Rotation.XY.m128d_f64[1];
      local_1d8.Rotation.ZW.m128d_f64[0] = local_138.Rotation.ZW.m128d_f64[0];
      local_1d8.Rotation.ZW.m128d_f64[1] = local_138.Rotation.ZW.m128d_f64[1];
      local_1d8.Translation.XY.m128d_f64[0]._0_4_ = uVar10;
      local_1d8.Translation.XY.m128d_f64[0]._4_4_ = uVar11;
      local_1d8.Translation.XY.m128d_f64[1]._0_4_ = uVar12;
      local_1d8.Translation.XY.m128d_f64[1]._4_4_ = uVar13;
      local_1d8.Translation.ZW.m128d_f64[0]._0_4_ = uVar14;
      local_1d8.Translation.ZW.m128d_f64[0]._4_4_ = uVar15;
      local_1d8.Translation.ZW.m128d_f64[1]._0_4_ = uVar16;
      local_1d8.Translation.ZW.m128d_f64[1]._4_4_ = uVar17;
      local_1d8.Scale3D.XY.m128d_f64[0]._0_4_ = uVar18;
      local_1d8.Scale3D.XY.m128d_f64[0]._4_4_ = uVar19;
      local_1d8.Scale3D.XY.m128d_f64[1]._0_4_ = uVar20;
      local_1d8.Scale3D.XY.m128d_f64[1]._4_4_ = uVar21;
      local_1d8.Scale3D.ZW.m128d_f64[0]._0_4_ = uVar22;
      local_1d8.Scale3D.ZW.m128d_f64[0]._4_4_ = uVar23;
      local_1d8.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar24;
      local_1d8.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar25;
      pUVar5 = SetupControlRigIfRequired((UControlRigComponent *)param_1);
      if (pUVar5 != (UControlRig *)0x0) {
        local_214.Type = Control;
        local_214.Name.Number = uVar4;
        local_214.Name.ComparisonIndex.Value = (uint)uVar3;
        pFVar6 = URigHierarchy::Find<FRigControlElement>
                           ((pUVar5->DynamicHierarchy).field0_0x0.DebugPtr,&local_214);
        if (pFVar6 != (FRigControlElement *)0x0) {
          if (EVar2 == LocalSpace) {
            TVar9 = CurrentLocal;
          }
          else {
            ConvertTransformToRigSpace((UControlRigComponent *)param_1,&local_1d8,EVar2);
            TVar9 = CurrentGlobal;
          }
          URigHierarchy::SetTransform
                    ((pUVar5->DynamicHierarchy).field0_0x0.DebugPtr,(FRigTransformElement *)pFVar6,
                     &local_1d8,TVar9,true,false,false,false);
        }
      }
    }
  }
  return;
}

// execSetControlScale @ 14a2b62a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
UControlRigComponent::execSetControlScale(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  URigHierarchy *this;
  EControlRigComponentSpace EVar2;
  undefined8 uVar3;
  uint uVar4;
  UControlRig *pUVar5;
  FRigControlElement *pFVar6;
  TTransform<double> *pTVar7;
  Type TVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined1 auStackY_218 [32];
  EControlRigComponentSpace local_1d8 [4];
  FRigElementKey local_1d4;
  undefined8 local_1c8;
  undefined8 local_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  TTransform<double> local_198;
  TTransform<double> local_138;
  TTransform<double> local_d8;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_218;
  local_1c8 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1c8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1c8);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1b8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1b8);
  }
  local_1d8[0] = WorldSpace;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_1d8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_1d8);
  }
  uVar3 = local_1c8;
  EVar2 = local_1d8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_1c0 = local_1c8;
  pUVar5 = SetupControlRigIfRequired((UControlRigComponent *)param_1);
  if (pUVar5 != (UControlRig *)0x0) {
    uVar4 = local_1c0._4_4_;
    local_1d4.Name.Number = local_1c0._4_4_;
    local_1d4.Type = Control;
    local_1d4.Name.ComparisonIndex.Value = (uint)uVar3;
    pFVar6 = URigHierarchy::Find<FRigControlElement>
                       ((pUVar5->DynamicHierarchy).field0_0x0.DebugPtr,&local_1d4);
    if (pFVar6 != (FRigControlElement *)0x0) {
      this = (pUVar5->DynamicHierarchy).field0_0x0.DebugPtr;
      local_138.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64
      ;
      local_138.Translation.XY.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
      local_138.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64
      ;
      local_138.Scale3D.ZW.m128d_f64[0] = local_1a8;
      local_138.Scale3D.ZW.m128d_f64[1] = 0.0;
      local_138.Translation.ZW.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
      local_138.Scale3D.XY.m128d_f64[0] = local_1b8;
      local_138.Scale3D.XY.m128d_f64[1] = dStack_1b0;
      if (EVar2 == LocalSpace) {
        pTVar7 = URigHierarchy::GetTransform
                           (this,&local_d8,(FRigTransformElement *)pFVar6,CurrentLocal);
        uVar9 = *(undefined4 *)(pTVar7->Rotation).XY.m128d_f64;
        uVar10 = *(undefined4 *)((longlong)(pTVar7->Rotation).XY.m128d_f64 + 4);
        uVar11 = *(undefined4 *)((pTVar7->Rotation).XY.m128d_f64 + 1);
        uVar12 = *(undefined4 *)((longlong)(pTVar7->Rotation).XY.m128d_f64 + 0xc);
        uVar13 = *(undefined4 *)(pTVar7->Rotation).ZW.m128d_f64;
        uVar14 = *(undefined4 *)((longlong)(pTVar7->Rotation).ZW.m128d_f64 + 4);
        uVar15 = *(undefined4 *)((pTVar7->Rotation).ZW.m128d_f64 + 1);
        uVar16 = *(undefined4 *)((longlong)(pTVar7->Rotation).ZW.m128d_f64 + 0xc);
        uVar17 = *(undefined4 *)(pTVar7->Translation).XY.m128d_f64;
        uVar18 = *(undefined4 *)((longlong)(pTVar7->Translation).XY.m128d_f64 + 4);
        uVar19 = *(undefined4 *)((pTVar7->Translation).XY.m128d_f64 + 1);
        uVar20 = *(undefined4 *)((longlong)(pTVar7->Translation).XY.m128d_f64 + 0xc);
        uVar21 = *(undefined4 *)(pTVar7->Translation).ZW.m128d_f64;
        uVar22 = *(undefined4 *)((longlong)(pTVar7->Translation).ZW.m128d_f64 + 4);
        uVar23 = *(undefined4 *)((pTVar7->Translation).ZW.m128d_f64 + 1);
        uVar24 = *(undefined4 *)((longlong)(pTVar7->Translation).ZW.m128d_f64 + 0xc);
      }
      else {
        pTVar7 = URigHierarchy::GetTransform
                           (this,&local_d8,(FRigTransformElement *)pFVar6,CurrentGlobal);
        local_198.Scale3D.XY.m128d_f64[0] = (pTVar7->Scale3D).XY.m128d_f64[0];
        local_198.Scale3D.XY.m128d_f64[1] = (pTVar7->Scale3D).XY.m128d_f64[1];
        local_198.Scale3D.ZW.m128d_f64[0] = (pTVar7->Scale3D).ZW.m128d_f64[0];
        local_198.Scale3D.ZW.m128d_f64[1] = (pTVar7->Scale3D).ZW.m128d_f64[1];
        uVar9 = *(undefined4 *)(pTVar7->Rotation).XY.m128d_f64;
        uVar10 = *(undefined4 *)((longlong)(pTVar7->Rotation).XY.m128d_f64 + 4);
        uVar11 = *(undefined4 *)((pTVar7->Rotation).XY.m128d_f64 + 1);
        uVar12 = *(undefined4 *)((longlong)(pTVar7->Rotation).XY.m128d_f64 + 0xc);
        uVar13 = *(undefined4 *)(pTVar7->Rotation).ZW.m128d_f64;
        uVar14 = *(undefined4 *)((longlong)(pTVar7->Rotation).ZW.m128d_f64 + 4);
        uVar15 = *(undefined4 *)((pTVar7->Rotation).ZW.m128d_f64 + 1);
        uVar16 = *(undefined4 *)((longlong)(pTVar7->Rotation).ZW.m128d_f64 + 0xc);
        uVar17 = *(undefined4 *)(pTVar7->Translation).XY.m128d_f64;
        uVar18 = *(undefined4 *)((longlong)(pTVar7->Translation).XY.m128d_f64 + 4);
        uVar19 = *(undefined4 *)((pTVar7->Translation).XY.m128d_f64 + 1);
        uVar20 = *(undefined4 *)((longlong)(pTVar7->Translation).XY.m128d_f64 + 0xc);
        uVar21 = *(undefined4 *)(pTVar7->Translation).ZW.m128d_f64;
        uVar22 = *(undefined4 *)((longlong)(pTVar7->Translation).ZW.m128d_f64 + 4);
        uVar23 = *(undefined4 *)((pTVar7->Translation).ZW.m128d_f64 + 1);
        uVar24 = *(undefined4 *)((longlong)(pTVar7->Translation).ZW.m128d_f64 + 0xc);
        ConvertTransformToRigSpace((UControlRigComponent *)param_1,&local_138,EVar2);
      }
      local_198.Scale3D.XY.m128d_f64[0] = local_138.Scale3D.XY.m128d_f64[0];
      local_198.Scale3D.XY.m128d_f64[1] = local_138.Scale3D.XY.m128d_f64[1];
      local_198.Scale3D.ZW.m128d_f64[0] = local_138.Scale3D.ZW.m128d_f64[0];
      local_198.Scale3D.ZW.m128d_f64[1] = 0.0;
      local_198.Rotation.XY.m128d_f64[0]._0_4_ = uVar9;
      local_198.Rotation.XY.m128d_f64[0]._4_4_ = uVar10;
      local_198.Rotation.XY.m128d_f64[1]._0_4_ = uVar11;
      local_198.Rotation.XY.m128d_f64[1]._4_4_ = uVar12;
      local_198.Rotation.ZW.m128d_f64[0]._0_4_ = uVar13;
      local_198.Rotation.ZW.m128d_f64[0]._4_4_ = uVar14;
      local_198.Rotation.ZW.m128d_f64[1]._0_4_ = uVar15;
      local_198.Rotation.ZW.m128d_f64[1]._4_4_ = uVar16;
      local_198.Translation.XY.m128d_f64[0]._0_4_ = uVar17;
      local_198.Translation.XY.m128d_f64[0]._4_4_ = uVar18;
      local_198.Translation.XY.m128d_f64[1]._0_4_ = uVar19;
      local_198.Translation.XY.m128d_f64[1]._4_4_ = uVar20;
      local_198.Translation.ZW.m128d_f64[0]._0_4_ = uVar21;
      local_198.Translation.ZW.m128d_f64[0]._4_4_ = uVar22;
      local_198.Translation.ZW.m128d_f64[1]._0_4_ = uVar23;
      local_198.Translation.ZW.m128d_f64[1]._4_4_ = uVar24;
      pUVar5 = SetupControlRigIfRequired((UControlRigComponent *)param_1);
      if (pUVar5 != (UControlRig *)0x0) {
        local_1d4.Type = Control;
        local_1d4.Name.Number = uVar4;
        local_1d4.Name.ComparisonIndex.Value = (uint)uVar3;
        pFVar6 = URigHierarchy::Find<FRigControlElement>
                           ((pUVar5->DynamicHierarchy).field0_0x0.DebugPtr,&local_1d4);
        if (pFVar6 != (FRigControlElement *)0x0) {
          if (EVar2 == LocalSpace) {
            TVar8 = CurrentLocal;
          }
          else {
            ConvertTransformToRigSpace((UControlRigComponent *)param_1,&local_198,EVar2);
            TVar8 = CurrentGlobal;
          }
          URigHierarchy::SetTransform
                    ((pUVar5->DynamicHierarchy).field0_0x0.DebugPtr,(FRigTransformElement *)pFVar6,
                     &local_198,TVar8,true,false,false,false);
        }
      }
    }
  }
  return;
}

// execSetControlTransform @ 14a2b65d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
UControlRigComponent::execSetControlTransform(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  EControlRigComponentSpace EVar2;
  undefined8 uVar3;
  UControlRig *pUVar4;
  FRigControlElement *pFVar5;
  Type TVar6;
  undefined1 auStackY_158 [32];
  EControlRigComponentSpace local_118 [8];
  undefined8 local_110;
  FRigElementKey local_108;
  undefined8 local_f8;
  TTransform<double> local_e8;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_158;
  local_110 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_110,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_110);
  }
  local_88._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_88._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_88._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_78._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_78._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_78._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_68._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_68._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_68._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_58._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_58._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_58._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_48._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_48._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_48._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_38._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_38._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_38._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_88);
  }
  local_118[0] = WorldSpace;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_118,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_118);
  }
  uVar3 = local_110;
  EVar2 = local_118[0];
  local_e8.Rotation.XY.m128d_f64[0] = (double)local_88._0_8_;
  local_e8.Rotation.XY.m128d_f64[1] = (double)local_88._8_8_;
  local_e8.Rotation.ZW.m128d_f64[0] = (double)local_78._0_8_;
  local_e8.Rotation.ZW.m128d_f64[1] = (double)local_78._8_8_;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_e8.Translation.XY.m128d_f64[0] = (double)local_68._0_8_;
  local_e8.Translation.XY.m128d_f64[1] = (double)local_68._8_8_;
  local_e8.Translation.ZW.m128d_f64[0] = (double)local_58._0_8_;
  local_e8.Translation.ZW.m128d_f64[1] = (double)local_58._8_8_;
  local_f8 = local_110;
  local_e8.Scale3D.XY.m128d_f64[0] = (double)local_48._0_8_;
  local_e8.Scale3D.XY.m128d_f64[1] = (double)local_48._8_8_;
  local_e8.Scale3D.ZW.m128d_f64[0] = (double)local_38._0_8_;
  local_e8.Scale3D.ZW.m128d_f64[1] = (double)local_38._8_8_;
  pUVar4 = SetupControlRigIfRequired((UControlRigComponent *)param_1);
  if (pUVar4 != (UControlRig *)0x0) {
    local_108.Name.Number = local_f8._4_4_;
    local_108.Type = Control;
    local_108.Name.ComparisonIndex.Value = (uint)uVar3;
    pFVar5 = URigHierarchy::Find<FRigControlElement>
                       ((pUVar4->DynamicHierarchy).field0_0x0.DebugPtr,&local_108);
    if (pFVar5 != (FRigControlElement *)0x0) {
      if (EVar2 == LocalSpace) {
        TVar6 = CurrentLocal;
      }
      else {
        ConvertTransformToRigSpace((UControlRigComponent *)param_1,&local_e8,EVar2);
        TVar6 = CurrentGlobal;
      }
      URigHierarchy::SetTransform
                ((pUVar4->DynamicHierarchy).field0_0x0.DebugPtr,(FRigTransformElement *)pFVar5,
                 &local_e8,TVar6,true,false,false,false);
    }
  }
  return;
}

// execSetControlVector2D @ 14a2b6810

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
UControlRigComponent::execSetControlVector2D(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UControlRig *pUVar2;
  undefined8 local_res10 [2];
  undefined8 local_res20;
  undefined1 local_e8 [4];
  undefined4 local_e4;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined1 local_d4;
  double local_c8;
  double dStack_c0;
  float local_b8;
  float fStack_b4;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  local_res10[0] = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_res20 = local_res10[0];
  pUVar2 = SetupControlRigIfRequired((UControlRigComponent *)param_1);
  if (pUVar2 != (UControlRig *)0x0) {
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = 0;
    uStack_90 = 0;
    uStack_b0 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_e8[0] = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_e4 = 0x1ff;
    local_48 = 0;
    uStack_40 = 0;
    local_e0 = 0x7f7fffff;
    local_d8 = 0;
    local_d4 = 0;
    local_38 = 1;
    _local_b8 = CONCAT44((float)dStack_c0,(float)local_c8);
    (**(code **)(pUVar2->_padding_ + 0x3f0))(pUVar2,&local_res20,&local_b8,1,local_e8,1,0,0);
  }
  return;
}

// execSetInitialBoneTransform @ 14a2b6c10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
UControlRigComponent::execSetInitialBoneTransform(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  EControlRigComponentSpace EVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  UControlRig *pUVar7;
  bool bVar8;
  undefined1 auStackY_228 [32];
  EControlRigComponentSpace local_1e8 [4];
  int local_1e4;
  undefined8 local_1e0;
  undefined1 local_1d8 [8];
  uint local_1d0;
  undefined8 local_1c8;
  TTransform<double> local_1b8;
  TTransform<double> local_158;
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  TTransform<double> local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_228;
  local_1e0 = 0;
  FNameProperty::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1e0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1e0);
  }
  local_f8._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_f8._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_f8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_e8._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_e8._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_e8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_d8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_d8._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_d8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_c8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_c8._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_c8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_b8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_b8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_b8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_a8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_a8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_a8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_f8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_f8);
  }
  local_1e8[0] = WorldSpace;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_1e8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_1e8);
  }
  local_1e4 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1e4,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1e4);
  }
  uVar4 = local_1e0;
  EVar3 = local_1e8[0];
  bVar8 = local_1e4 != 0;
  local_1b8.Rotation.XY.m128d_f64[0] = (double)local_f8._0_8_;
  local_1b8.Rotation.XY.m128d_f64[1] = (double)local_f8._8_8_;
  local_1b8.Rotation.ZW.m128d_f64[0] = (double)local_e8._0_8_;
  local_1b8.Rotation.ZW.m128d_f64[1] = (double)local_e8._8_8_;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_1b8.Translation.XY.m128d_f64[0] = (double)local_d8._0_8_;
  local_1b8.Translation.XY.m128d_f64[1] = (double)local_d8._8_8_;
  local_1b8.Translation.ZW.m128d_f64[0] = (double)local_c8._0_8_;
  local_1b8.Translation.ZW.m128d_f64[1] = (double)local_c8._8_8_;
  local_1c8 = local_1e0;
  local_1b8.Scale3D.XY.m128d_f64[0] = (double)local_b8._0_8_;
  local_1b8.Scale3D.XY.m128d_f64[1] = (double)local_b8._8_8_;
  local_1b8.Scale3D.ZW.m128d_f64[0] = (double)local_a8._0_8_;
  local_1b8.Scale3D.ZW.m128d_f64[1] = (double)local_a8._8_8_;
  pUVar7 = SetupControlRigIfRequired((UControlRigComponent *)param_1);
  if (pUVar7 == (UControlRig *)0x0) {
    return;
  }
  local_1d0 = local_1c8._4_4_;
  local_1d8[0] = Bone;
  local_1d8._4_4_ = (undefined4)uVar4;
  iVar5 = URigHierarchy::GetIndex
                    ((pUVar7->DynamicHierarchy).field0_0x0.DebugPtr,(FRigElementKey *)local_1d8,true
                    );
  if (iVar5 == -1) {
    return;
  }
  if ((pUVar7->PreConstructionBracket < 1) && (pUVar7->PostConstructionBracket < 1)) {
    ::FString::FString((FString *)local_1d8,
                       L"SetInitialBoneTransform should only be called during OnPreConstruction / OnPostConstruction."
                      );
    ReportError((UControlRigComponent *)param_1,(FString *)local_1d8);
    if ((void *)CONCAT44(local_1d8._4_4_,local_1d8._0_4_) == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)CONCAT44(local_1d8._4_4_,local_1d8._0_4_));
    return;
  }
  ConvertTransformToRigSpace((UControlRigComponent *)param_1,&local_1b8,EVar3);
  if ((EVar3 == LocalSpace) &&
     (iVar6 = URigHierarchy::GetFirstParent((pUVar7->DynamicHierarchy).field0_0x0.DebugPtr,iVar5),
     iVar6 != -1)) {
    URigHierarchy::GetGlobalTransformByIndex
              ((pUVar7->DynamicHierarchy).field0_0x0.DebugPtr,&local_98,iVar6,true);
    local_158.Rotation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    local_158.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_158.Rotation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    local_158.Rotation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    local_158.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_158.Rotation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    local_158.Translation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    local_158.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_158.Translation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    local_158.Translation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
    local_158.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_158.Translation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
    local_158.Scale3D.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    local_158.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_158.Scale3D.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    local_158.Scale3D.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    local_158.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_158.Scale3D.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
    UE::Math::TTransform<double>::Multiply(&local_158,&local_1b8,&local_98);
    local_1b8.Rotation.XY.m128d_f64[0] = local_158.Rotation.XY.m128d_f64[0];
    local_1b8.Rotation.XY.m128d_f64[1] = local_158.Rotation.XY.m128d_f64[1];
    local_1b8.Rotation.ZW.m128d_f64[0] = local_158.Rotation.ZW.m128d_f64[0];
    local_1b8.Rotation.ZW.m128d_f64[1] = local_158.Rotation.ZW.m128d_f64[1];
    local_1b8.Translation.XY.m128d_f64[0] = local_158.Translation.XY.m128d_f64[0];
    local_1b8.Translation.XY.m128d_f64[1] = local_158.Translation.XY.m128d_f64[1];
    local_1b8.Translation.ZW.m128d_f64[0] = local_158.Translation.ZW.m128d_f64[0];
    local_1b8.Translation.ZW.m128d_f64[1] = local_158.Translation.ZW.m128d_f64[1];
    local_1b8.Scale3D.XY.m128d_f64[0] = local_158.Scale3D.XY.m128d_f64[0];
    local_1b8.Scale3D.XY.m128d_f64[1] = local_158.Scale3D.XY.m128d_f64[1];
    local_1b8.Scale3D.ZW.m128d_f64[0] = local_158.Scale3D.ZW.m128d_f64[0];
    local_1b8.Scale3D.ZW.m128d_f64[1] = local_158.Scale3D.ZW.m128d_f64[1];
  }
  else {
    local_158.Rotation.XY.m128d_f64[0]._0_4_ = local_1b8.Rotation.XY.m128d_f64[0]._0_4_;
    local_158.Rotation.XY.m128d_f64[0]._4_4_ = local_1b8.Rotation.XY.m128d_f64[0]._4_4_;
    local_158.Rotation.XY.m128d_f64[1]._0_4_ = local_1b8.Rotation.XY.m128d_f64[1]._0_4_;
    local_158.Rotation.XY.m128d_f64[1]._4_4_ = local_1b8.Rotation.XY.m128d_f64[1]._4_4_;
    local_158.Rotation.ZW.m128d_f64[0]._0_4_ = local_1b8.Rotation.ZW.m128d_f64[0]._0_4_;
    local_158.Rotation.ZW.m128d_f64[0]._4_4_ = local_1b8.Rotation.ZW.m128d_f64[0]._4_4_;
    local_158.Rotation.ZW.m128d_f64[1]._0_4_ = local_1b8.Rotation.ZW.m128d_f64[1]._0_4_;
    local_158.Rotation.ZW.m128d_f64[1]._4_4_ = local_1b8.Rotation.ZW.m128d_f64[1]._4_4_;
    local_158.Translation.XY.m128d_f64[0]._0_4_ = local_1b8.Translation.XY.m128d_f64[0]._0_4_;
    local_158.Translation.XY.m128d_f64[0]._4_4_ = local_1b8.Translation.XY.m128d_f64[0]._4_4_;
    local_158.Translation.XY.m128d_f64[1]._0_4_ = local_1b8.Translation.XY.m128d_f64[1]._0_4_;
    local_158.Translation.XY.m128d_f64[1]._4_4_ = local_1b8.Translation.XY.m128d_f64[1]._4_4_;
    local_158.Translation.ZW.m128d_f64[0]._0_4_ = local_1b8.Translation.ZW.m128d_f64[0]._0_4_;
    local_158.Translation.ZW.m128d_f64[0]._4_4_ = local_1b8.Translation.ZW.m128d_f64[0]._4_4_;
    local_158.Translation.ZW.m128d_f64[1]._0_4_ = local_1b8.Translation.ZW.m128d_f64[1]._0_4_;
    local_158.Translation.ZW.m128d_f64[1]._4_4_ = local_1b8.Translation.ZW.m128d_f64[1]._4_4_;
    local_158.Scale3D.XY.m128d_f64[0]._0_4_ = local_1b8.Scale3D.XY.m128d_f64[0]._0_4_;
    local_158.Scale3D.XY.m128d_f64[0]._4_4_ = local_1b8.Scale3D.XY.m128d_f64[0]._4_4_;
    local_158.Scale3D.XY.m128d_f64[1]._0_4_ = local_1b8.Scale3D.XY.m128d_f64[1]._0_4_;
    local_158.Scale3D.XY.m128d_f64[1]._4_4_ = local_1b8.Scale3D.XY.m128d_f64[1]._4_4_;
    local_158.Scale3D.ZW.m128d_f64[0]._0_4_ = local_1b8.Scale3D.ZW.m128d_f64[0]._0_4_;
    local_158.Scale3D.ZW.m128d_f64[0]._4_4_ = local_1b8.Scale3D.ZW.m128d_f64[0]._4_4_;
    local_158.Scale3D.ZW.m128d_f64[1]._0_4_ = local_1b8.Scale3D.ZW.m128d_f64[1]._0_4_;
    local_158.Scale3D.ZW.m128d_f64[1]._4_4_ = local_1b8.Scale3D.ZW.m128d_f64[1]._4_4_;
  }
  URigHierarchy::SetGlobalTransformByIndex
            ((pUVar7->DynamicHierarchy).field0_0x0.DebugPtr,iVar5,&local_158,true,bVar8,false,false)
  ;
  return;
}

// execSetInitialSpaceTransform @ 14a2b6fc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
UControlRigComponent::execSetInitialSpaceTransform(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  EControlRigComponentSpace EVar2;
  undefined8 uVar3;
  UControlRig *pUVar4;
  FRigNullElement *pFVar5;
  Type TVar6;
  undefined1 auStackY_158 [32];
  EControlRigComponentSpace local_118 [8];
  undefined8 local_110;
  FRigElementKey local_108;
  undefined8 local_f8;
  TTransform<double> local_e8;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_158;
  local_110 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_110,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_110);
  }
  local_88._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_88._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_88._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_78._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_78._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_78._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_68._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_68._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_68._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_58._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_58._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_58._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_48._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_48._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_48._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_38._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_38._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_38._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_88);
  }
  local_118[0] = WorldSpace;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_118,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_118);
  }
  uVar3 = local_110;
  EVar2 = local_118[0];
  local_e8.Rotation.XY.m128d_f64[0] = (double)local_88._0_8_;
  local_e8.Rotation.XY.m128d_f64[1] = (double)local_88._8_8_;
  local_e8.Rotation.ZW.m128d_f64[0] = (double)local_78._0_8_;
  local_e8.Rotation.ZW.m128d_f64[1] = (double)local_78._8_8_;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_e8.Translation.XY.m128d_f64[0] = (double)local_68._0_8_;
  local_e8.Translation.XY.m128d_f64[1] = (double)local_68._8_8_;
  local_e8.Translation.ZW.m128d_f64[0] = (double)local_58._0_8_;
  local_e8.Translation.ZW.m128d_f64[1] = (double)local_58._8_8_;
  local_f8 = local_110;
  local_e8.Scale3D.XY.m128d_f64[0] = (double)local_48._0_8_;
  local_e8.Scale3D.XY.m128d_f64[1] = (double)local_48._8_8_;
  local_e8.Scale3D.ZW.m128d_f64[0] = (double)local_38._0_8_;
  local_e8.Scale3D.ZW.m128d_f64[1] = (double)local_38._8_8_;
  pUVar4 = SetupControlRigIfRequired((UControlRigComponent *)param_1);
  if (pUVar4 != (UControlRig *)0x0) {
    local_108.Name.Number = local_f8._4_4_;
    local_108.Type = Control;
    local_108.Name.ComparisonIndex.Value = (uint)uVar3;
    pFVar5 = URigHierarchy::Find<FRigNullElement>
                       ((pUVar4->DynamicHierarchy).field0_0x0.DebugPtr,&local_108);
    if (pFVar5 != (FRigNullElement *)0x0) {
      if (EVar2 == LocalSpace) {
        TVar6 = InitialLocal;
      }
      else {
        ConvertTransformToRigSpace((UControlRigComponent *)param_1,&local_e8,EVar2);
        TVar6 = InitialGlobal;
      }
      URigHierarchy::SetTransform
                ((pUVar4->DynamicHierarchy).field0_0x0.DebugPtr,(FRigTransformElement *)pFVar5,
                 &local_e8,TVar6,true,false,false,false);
    }
  }
  return;
}

// execSetMappedElements @ 14a2b7300

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
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
UControlRigComponent::execSetMappedElements(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FControlRigComponentMappedElement *pFVar2;
  int iVar3;
  FControlRigComponentMappedElement *local_28;
  undefined8 local_20;
  TArray<FControlRigComponentMappedElement,TSizedDefaultAllocator<32>_> local_18;
  
  local_28 = (FControlRigComponentMappedElement *)0x0;
  local_20 = 0;
  FArrayProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pFVar2 = local_28;
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar3 = (int)local_20;
  local_18.ArrayNum = (int)local_20;
  if ((int)local_20 == 0) {
    local_18.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xf0,0x10,(int)local_20,0,&local_18.AllocatorInstance,(int)local_20,
               &local_18.ArrayMax);
    ConstructItems<FControlRigComponentMappedElement,FControlRigComponentMappedElement,int>
              (local_18.AllocatorInstance.Data,pFVar2,iVar3);
  }
  SetMappedElements((UControlRigComponent *)param_1,&local_18);
  DestructItems<FControlRigComponentMappedElement,int>(local_28,(int)local_20);
  if (local_28 != (FControlRigComponentMappedElement *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

// execSetObjectBinding @ 14a2b74e0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
UControlRigComponent::execSetObjectBinding(UObject *param_1,FFrame *param_2,void *param_3)

{
  UObject *pUVar1;
  FProperty *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  TSharedRef<FControlRigObjectBinding,1> *pTVar6;
  UControlRig *this;
  undefined8 local_res8;
  FControlRigObjectBinding *local_38;
  FSharedReferencer<1> local_30;
  TSharedPtr<IControlRigObjectBinding,1> local_28;
  TSharedRef<FControlRigObjectBinding,1> local_18;
  
  local_res8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  uVar4 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar1 = param_1 + 0x2d;
  if (*(longlong *)pUVar1 == 0) {
    pTVar6 = MakeShared<FControlRigObjectBinding,1>(&local_18);
    local_30.ReferenceController = (pTVar6->SharedReferenceCount).ReferenceController;
    local_38 = pTVar6->Object;
    if (local_30.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_30.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_30.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pUVar1 != (UObject *)&local_38) {
      *(FControlRigObjectBinding **)pUVar1 = local_38;
      local_38 = (FControlRigObjectBinding *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&param_1[0x2d].field_0x8,&local_30);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_30.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    if (*(longlong *)pUVar1 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
  (**(code **)**(undefined8 **)pUVar1)(*(undefined8 **)pUVar1,uVar4);
  this = SetupControlRigIfRequired((UControlRigComponent *)param_1);
  if (this != (UControlRig *)0x0) {
    local_28.Object = *(IControlRigObjectBinding **)pUVar1;
    local_28.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)&param_1[0x2d].field_0x8;
    if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UControlRig::SetObjectBinding(this,&local_28);
  }
  return;
}

// execUpdate @ 14a2b8030

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl UControlRigComponent::execUpdate(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float local_res10 [6];
  
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  Update((UControlRigComponent *)param_1,local_res10[0]);
  return;
}

