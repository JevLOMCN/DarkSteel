// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 114

// StaticClass @ 14dfe4710

UClass * __cdecl UGroomComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGroomComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/HairStrandsCore",L"GroomComponent",
               &Z_Registration_Info_UClass_UGroomComponent.InnerSingleton,
               StaticRegisterNativesUGroomComponent,0x7f0,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UGroomComponent>,
               InternalVTableHelperCtorCaller<UGroomComponent>,local_res8,
               UMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGroomComponent.InnerSingleton;
}

// UGroomComponent @ 14dff0760

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

UGroomComponent * __thiscall
UGroomComponent::UGroomComponent(UGroomComponent *this,FVTableHelper *param_1)

{
  undefined1 *this_00;
  undefined8 local_res8;
  
  UMeshComponent::UMeshComponent((UMeshComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  (this->GroomAsset).field0_0x0.DebugPtr = (UGroomAsset *)0x0;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  *(undefined ***)&this->field_0x590 = &_vftable__for__ILODSyncInterface__;
  *(undefined ***)&this->field_0x598 = &_vftable__for__INiagaraPhysicsAssetDICollectorInterface__;
  (this->GroomCache).field0_0x0.DebugPtr = (UGroomCache *)0x0;
  (this->NiagaraComponents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NiagaraComponents).ArrayNum = 0;
  (this->NiagaraComponents).ArrayMax = 0;
  (this->SourceSkeletalMesh).field0_0x0.DebugPtr = (USkeletalMesh *)0x0;
  (this->BindingAsset).field0_0x0.DebugPtr = (UGroomBindingAsset *)0x0;
  (this->PhysicsAsset).field0_0x0.DebugPtr = (UPhysicsAsset *)0x0;
  (this->CollisionComponents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CollisionComponents).ArrayNum = 0;
  (this->CollisionComponents).ArrayMax = 0;
  FHairSimulationSettings::FHairSimulationSettings(&this->SimulationSettings);
  (this->MeshDeformer).field0_0x0.DebugPtr = (UMeshDeformer *)0x0;
  this_00 = &(this->GroomSolver).SoftObjectPtr.field_0x18;
  (this->MeshDeformerInstance).field0_0x0.DebugPtr = (UMeshDeformerInstance *)0x0;
  (this->MeshDeformerInstanceSettings).field0_0x0.DebugPtr = (UMeshDeformerInstanceSettings *)0x0;
  (this->Strands_DebugMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->Strands_DefaultMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->Cards_DefaultMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->Meshes_DefaultMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->AngularSpringsSystem).field0_0x0.DebugPtr = (UNiagaraSystem *)0x0;
  (this->CosseratRodsSystem).field0_0x0.DebugPtr = (UNiagaraSystem *)0x0;
  (this->AttachmentName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AttachmentName).Data.ArrayNum = 0;
  (this->AttachmentName).Data.ArrayMax = 0;
  (this->GroomGroupsDesc).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GroomGroupsDesc).ArrayNum = 0;
  (this->GroomGroupsDesc).ArrayMax = 0;
  this->bUseCards = false;
  (this->GroomCacheBuffers).Object = (IGroomCacheBuffers *)0x0;
  (this->GroomCacheBuffers).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->HairGroupInstances).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HairGroupInstances).ArrayNum = 0;
  (this->HairGroupInstances).ArrayMax = 0;
  this->bValidationEnable = true;
  this->bPreviewMode = false;
  this->LODSelectionType = Immediate;
  this->LODPredictedIndex = -1.0;
  this->LODForcedIndex = -1.0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->GroomSolver).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->GroomSolver).SoftObjectPtr = 0;
  *(undefined8 *)&(this->GroomSolver).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->GroomSolver).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  local_res8 = 0;
  FSoftObjectPtr::operator=(&(this->GroomSolver).SoftObjectPtr,(FObjectPtr)&local_res8);
  return this;
}

// UGroomComponent @ 14dff0930

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UGroomComponent * __thiscall
UGroomComponent::UGroomComponent(UGroomComponent *this,FObjectInitializer *param_1)

{
  int *piVar1;
  undefined1 *this_00;
  longlong lVar2;
  int iVar3;
  undefined8 local_res8;
  
  UMeshComponent::UMeshComponent((UMeshComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  piVar1 = &(this->NiagaraComponents).ArrayMax;
  (this->GroomAsset).field0_0x0.DebugPtr = (UGroomAsset *)0x0;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  (this->GroomCache).field0_0x0.DebugPtr = (UGroomCache *)0x0;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  *(undefined ***)&this->field_0x590 = &_vftable__for__ILODSyncInterface__;
  *(undefined ***)&this->field_0x598 = &_vftable__for__INiagaraPhysicsAssetDICollectorInterface__;
  (this->NiagaraComponents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NiagaraComponents).ArrayNum = 0;
  *piVar1 = 0;
  (this->SourceSkeletalMesh).field0_0x0.DebugPtr = (USkeletalMesh *)0x0;
  (this->BindingAsset).field0_0x0.DebugPtr = (UGroomBindingAsset *)0x0;
  (this->PhysicsAsset).field0_0x0.DebugPtr = (UPhysicsAsset *)0x0;
  (this->CollisionComponents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CollisionComponents).ArrayNum = 0;
  (this->CollisionComponents).ArrayMax = 0;
  FHairSimulationSettings::FHairSimulationSettings(&this->SimulationSettings);
  (this->MeshDeformer).field0_0x0.DebugPtr = (UMeshDeformer *)0x0;
  this_00 = &(this->GroomSolver).SoftObjectPtr.field_0x18;
  (this->MeshDeformerInstance).field0_0x0.DebugPtr = (UMeshDeformerInstance *)0x0;
  (this->MeshDeformerInstanceSettings).field0_0x0.DebugPtr = (UMeshDeformerInstanceSettings *)0x0;
  (this->Strands_DebugMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->Strands_DefaultMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->Cards_DefaultMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->Meshes_DefaultMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->AngularSpringsSystem).field0_0x0.DebugPtr = (UNiagaraSystem *)0x0;
  (this->CosseratRodsSystem).field0_0x0.DebugPtr = (UNiagaraSystem *)0x0;
  (this->AttachmentName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AttachmentName).Data.ArrayNum = 0;
  (this->AttachmentName).Data.ArrayMax = 0;
  (this->GroomGroupsDesc).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GroomGroupsDesc).ArrayNum = 0;
  (this->GroomGroupsDesc).ArrayMax = 0;
  (this->GroomCacheBuffers).Object = (IGroomCacheBuffers *)0x0;
  (this->GroomCacheBuffers).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->HairGroupInstances).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HairGroupInstances).ArrayNum = 0;
  (this->HairGroupInstances).ArrayMax = 0;
  this->bUseCards = false;
  this->bValidationEnable = true;
  this->bPreviewMode = false;
  this->LODSelectionType = Immediate;
  this->LODPredictedIndex = -1.0;
  this->LODForcedIndex = -1.0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->GroomSolver).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->GroomSolver).SoftObjectPtr = 0;
  *(undefined8 *)&(this->GroomSolver).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->GroomSolver).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  local_res8 = 0;
  FSoftObjectPtr::operator=(&(this->GroomSolver).SoftObjectPtr,(FObjectPtr)&local_res8);
  this->field_0x42 = this->field_0x42 | 2;
  this->field_0x99 = this->field_0x99 | 0x80;
  this->field_0x9a = this->field_0x9a | 8;
  this->field_0x27d = this->field_0x27d | 0x10;
  this->RegisteredMeshComponent = (UMeshComponent *)0x0;
  this->InitializedResources = (void *)0x0;
  this->field_0x1ab = 2;
  (this->SourceSkeletalMesh).field0_0x0.DebugPtr = (USkeletalMesh *)0x0;
  this->bIsGroomAssetCallbackRegistered = false;
  this->bIsGroomBindingAssetCallbackRegistered = false;
  (this->NiagaraComponents).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->NiagaraComponents).AllocatorInstance,0,piVar1);
  }
  this->field_0x9a = this->field_0x9a & 0x7f;
  (this->PhysicsAsset).field0_0x0.DebugPtr = (UPhysicsAsset *)0x0;
  iVar3 = GHairBindingValidationEnable;
  this->bRunning = true;
  this->bLooping = true;
  this->bManualTick = false;
  this->bValidationEnable = 0 < iVar3;
  this->ElapsedTime = 0.0;
  UPrimitiveComponent::SetGenerateOverlapEvents((UPrimitiveComponent *)this,false);
  UPrimitiveComponent::SetCollisionProfileName
            ((UPrimitiveComponent *)this,UCollisionProfile::PhysicsActor_ProfileName,true);
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(int *)(lVar2 + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ConstructorHelpers::FObjectFinder<UMaterialInterface>::FObjectFinder<UMaterialInterface>
                (&Strands_DebugMaterialRef,
                 L"/HairStrands/Materials/HairDebugMaterial.HairDebugMaterial",0);
      atexit(`UGroomComponent::UGroomComponent'::__l2::
             _dynamic_atexit_destructor_for__Strands_DebugMaterialRef__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (*(int *)(lVar2 + 0x9d4c) < ::_TSS1) {
    _Init_thread_header(&::_TSS1);
    if (::_TSS1 == -1) {
      ConstructorHelpers::FObjectFinder<UMaterialInterface>::FObjectFinder<UMaterialInterface>
                (&Strands_DefaultMaterialRef,
                 L"/HairStrands/Materials/HairDefaultMaterial.HairDefaultMaterial",0);
      atexit(`UGroomComponent::UGroomComponent'::__l2::
             _dynamic_atexit_destructor_for__Strands_DefaultMaterialRef__);
      _Init_thread_footer(&::_TSS1);
    }
  }
  if (*(int *)(lVar2 + 0x9d4c) < ::_TSS2) {
    _Init_thread_header(&::_TSS2);
    if (::_TSS2 == -1) {
      ConstructorHelpers::FObjectFinder<UMaterialInterface>::FObjectFinder<UMaterialInterface>
                (&Cards_DefaultMaterialRef,
                 L"/HairStrands/Materials/HairCardsDefaultMaterial.HairCardsDefaultMaterial",0);
      atexit(`UGroomComponent::UGroomComponent'::__l2::
             _dynamic_atexit_destructor_for__Cards_DefaultMaterialRef__);
      _Init_thread_footer(&::_TSS2);
    }
  }
  if (*(int *)(lVar2 + 0x9d4c) < ::_TSS3) {
    _Init_thread_header(&::_TSS3);
    if (::_TSS3 == -1) {
      ConstructorHelpers::FObjectFinder<UMaterialInterface>::FObjectFinder<UMaterialInterface>
                (&Meshes_DefaultMaterialRef,
                 L"/HairStrands/Materials/HairMeshesDefaultMaterial.HairMeshesDefaultMaterial",0);
      atexit(`UGroomComponent::UGroomComponent'::__l2::
             _dynamic_atexit_destructor_for__Meshes_DefaultMaterialRef__);
      _Init_thread_footer(&::_TSS3);
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (Strands_DebugMaterialRef.Object.field0_0x0 != (UMaterialInterface *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)Strands_DebugMaterialRef.Object.field0_0x0);
  }
  (this->Strands_DebugMaterial).field0_0x0.ObjectPtr.field0_0x0 =
       (FObjectPtr_u_0)Strands_DebugMaterialRef.Object.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (Strands_DefaultMaterialRef.Object.field0_0x0 != (UMaterialInterface *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)Strands_DefaultMaterialRef.Object.field0_0x0);
  }
  (this->Strands_DefaultMaterial).field0_0x0.ObjectPtr.field0_0x0 =
       (FObjectPtr_u_0)Strands_DefaultMaterialRef.Object.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (Cards_DefaultMaterialRef.Object.field0_0x0 != (UMaterialInterface *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)Cards_DefaultMaterialRef.Object.field0_0x0);
  }
  (this->Cards_DefaultMaterial).field0_0x0.ObjectPtr.field0_0x0 =
       (FObjectPtr_u_0)Cards_DefaultMaterialRef.Object.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (Meshes_DefaultMaterialRef.Object.field0_0x0 != (UMaterialInterface *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)Meshes_DefaultMaterialRef.Object.field0_0x0);
  }
  (this->Meshes_DefaultMaterial).field0_0x0.ObjectPtr.field0_0x0 =
       (FObjectPtr_u_0)Meshes_DefaultMaterialRef.Object.field0_0x0;
  (this->AngularSpringsSystem).field0_0x0.DebugPtr = (UNiagaraSystem *)0x0;
  (this->CosseratRodsSystem).field0_0x0.DebugPtr = (UNiagaraSystem *)0x0;
  return this;
}

// ~UGroomComponent @ 14dff2dc0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UGroomComponent::~UGroomComponent(UGroomComponent *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  *(undefined ***)&this->field_0x590 = &_vftable__for__ILODSyncInterface__;
  *(undefined ***)&this->field_0x598 = &_vftable__for__INiagaraPhysicsAssetDICollectorInterface__;
  pvVar1 = *(void **)&(this->GroomSolver).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  DestructItems<TRefCountPtr<FHairGroupInstance>,int>
            ((TRefCountPtr<FHairGroupInstance> *)(this->HairGroupInstances).AllocatorInstance.Data,
             (this->HairGroupInstances).ArrayNum);
  pFVar2 = (this->HairGroupInstances).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->GroomCacheBuffers).SharedReferenceCount.ReferenceController);
  pFVar2 = (this->GroomGroupsDesc).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->AttachmentName).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->SimulationSettings).SimulationSetup.LocalBone.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->CollisionComponents).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->NiagaraComponents).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined ***)&this->field_0x598 = &___7INiagaraPhysicsAssetDICollectorInterface__6B_;
  *(undefined ***)&this->field_0x590 = &___7ILODSyncInterface__6B_;
  UMeshComponent::~UMeshComponent((UMeshComponent *)this);
  return;
}

// operator() @ 14dff5430

void __thiscall
`UGroomComponent::SendRenderDynamicData_Concurrent'::__l5::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  longlong *plVar15;
  undefined1 local_res8 [8];
  
  plVar15 = *(longlong **)this;
  iVar2 = *(int *)((longlong)this + 8);
  plVar1 = plVar15 + iVar2;
  while( true ) {
    if (*(int *)((longlong)this + 8) != iVar2) {
      `TCheckedPointerIterator<TRefCountPtr<FHairGroupInstance>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (plVar15 == plVar1) break;
    lVar3 = *plVar15;
    *(undefined8 *)(lVar3 + 0x380) = *(undefined8 *)(lVar3 + 0x2c0);
    *(undefined8 *)(lVar3 + 0x388) = *(undefined8 *)(lVar3 + 0x2c8);
    *(undefined8 *)(lVar3 + 0x390) = *(undefined8 *)(lVar3 + 0x2d0);
    *(undefined8 *)(lVar3 + 0x398) = *(undefined8 *)(lVar3 + 0x2d8);
    *(undefined8 *)(lVar3 + 0x3a0) = *(undefined8 *)(lVar3 + 0x2e0);
    *(undefined8 *)(lVar3 + 0x3a8) = *(undefined8 *)(lVar3 + 0x2e8);
    *(undefined8 *)(lVar3 + 0x3b0) = *(undefined8 *)(lVar3 + 0x2f0);
    *(undefined8 *)(lVar3 + 0x3b8) = *(undefined8 *)(lVar3 + 0x2f8);
    *(undefined8 *)(lVar3 + 0x3c0) = *(undefined8 *)(lVar3 + 0x300);
    *(undefined8 *)(lVar3 + 0x3c8) = *(undefined8 *)(lVar3 + 0x308);
    *(undefined8 *)(lVar3 + 0x3d0) = *(undefined8 *)(lVar3 + 0x310);
    *(undefined8 *)(lVar3 + 0x3d8) = *(undefined8 *)(lVar3 + 0x318);
    lVar3 = *plVar15;
    uVar4 = *(undefined8 *)((longlong)this + 0x18);
    uVar5 = *(undefined8 *)((longlong)this + 0x20);
    uVar6 = *(undefined8 *)((longlong)this + 0x28);
    uVar7 = *(undefined8 *)((longlong)this + 0x30);
    uVar8 = *(undefined8 *)((longlong)this + 0x38);
    uVar9 = *(undefined8 *)((longlong)this + 0x40);
    uVar10 = *(undefined8 *)((longlong)this + 0x48);
    uVar11 = *(undefined8 *)((longlong)this + 0x50);
    uVar12 = *(undefined8 *)((longlong)this + 0x58);
    uVar13 = *(undefined8 *)((longlong)this + 0x60);
    uVar14 = *(undefined8 *)((longlong)this + 0x68);
    *(undefined8 *)(lVar3 + 0x2c0) = *(undefined8 *)((longlong)this + 0x10);
    *(undefined8 *)(lVar3 + 0x2c8) = uVar4;
    *(undefined8 *)(lVar3 + 0x2d0) = uVar5;
    *(undefined8 *)(lVar3 + 0x2d8) = uVar6;
    *(undefined8 *)(lVar3 + 0x2e0) = uVar7;
    *(undefined8 *)(lVar3 + 0x2e8) = uVar8;
    *(undefined8 *)(lVar3 + 0x2f0) = uVar9;
    *(undefined8 *)(lVar3 + 0x2f8) = uVar10;
    *(undefined8 *)(lVar3 + 0x300) = uVar11;
    *(undefined8 *)(lVar3 + 0x308) = uVar12;
    *(undefined8 *)(lVar3 + 0x310) = uVar13;
    *(undefined8 *)(lVar3 + 0x318) = uVar14;
    lVar3 = *(longlong *)(*plVar15 + 0x20);
    if (lVar3 != 0) {
      *(int *)(lVar3 + 0x198) = 1 - *(int *)(lVar3 + 0x198);
    }
    lVar3 = *(longlong *)(*plVar15 + 0x48);
    if (lVar3 != 0) {
      *(int *)(lVar3 + 0x198) = 1 - *(int *)(lVar3 + 0x198);
    }
    plVar15 = plVar15 + 1;
  }
  return;
}

// operator() @ 14dff5570

void __thiscall
`UGroomComponent::UpdateSimulatedGroups'::__l5::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  EGroomInterpolationType EVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  undefined1 uVar9;
  longlong *plVar10;
  uint uVar11;
  undefined1 local_res8 [8];
  
  plVar10 = *(longlong **)this;
  iVar2 = *(int *)((longlong)this + 8);
  plVar1 = plVar10 + iVar2;
  do {
    if (*(int *)((longlong)this + 8) != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TRefCountPtr<FHairGroupInstance>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (plVar10 == plVar1) {
      return;
    }
    uVar11 = 0;
    *(undefined4 *)(*plVar10 + 0x108) = 0;
    if ((*(char *)((longlong)this + 0x24) != '\0') &&
       (*(UGroomAsset **)((longlong)this + 0x10) != (UGroomAsset *)0x0)) {
      EVar5 = UGroomAsset::GetHairInterpolationType(*(UGroomAsset **)((longlong)this + 0x10));
      uVar8 = uVar11;
      if (EVar5 != None) {
        if (EVar5 == RigidTransform) {
          uVar8 = 1;
        }
        else if (EVar5 == OffsetTransform) {
          uVar8 = 2;
        }
        else {
          uVar8 = 3;
          if (EVar5 != SmoothTransform) {
            uVar8 = 0;
          }
        }
      }
      *(uint *)(*plVar10 + 0x108) = uVar8;
    }
    if (*(longlong *)(*plVar10 + 0x18) != 0) {
      if ((*(longlong *)(*plVar10 + 0x460) == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Instance->HairGroupPublicData",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomComponent.cpp"
                             ,0x99f,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar8 = *(uint *)((longlong)this + 0x28);
      lVar3 = *(longlong *)(*plVar10 + 0x460);
      if (((int)uVar8 < 0) || (*(int *)(lVar3 + 0x4c8) <= (int)uVar8)) {
        uVar9 = 0;
      }
      else {
        uVar7 = uVar11;
        if ((int)uVar8 < *(int *)(lVar3 + 0x4c8)) {
          uVar7 = ~uVar8 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar9 = *(undefined1 *)((longlong)(int)uVar8 + *(longlong *)(lVar3 + 0x4c0));
      }
      *(undefined1 *)(*plVar10 + 0x38) = uVar9;
      uVar8 = *(uint *)((longlong)this + 0x28);
      lVar3 = *(longlong *)(*plVar10 + 0x460);
      if (((int)uVar8 < 0) || (*(int *)(lVar3 + 0x4d8) <= (int)uVar8)) {
        uVar9 = 0;
      }
      else {
        if ((int)uVar8 < *(int *)(lVar3 + 0x4d8)) {
          uVar11 = ~uVar8 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar9 = *(undefined1 *)((longlong)(int)uVar8 + *(longlong *)(lVar3 + 0x4d0));
      }
      *(undefined1 *)(*plVar10 + 0x3a) = uVar9;
      *(undefined1 *)(*plVar10 + 0x39) = *(undefined1 *)(*(longlong *)(*plVar10 + 0x460) + 0x4f0);
      *(bool *)(*plVar10 + 0x3b) = *(char *)(*plVar10 + 0x165) == '\x02';
    }
    plVar10 = plVar10 + 1;
  } while( true );
}

// operator() @ 14dff5a10

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
`UGroomComponent::SetForcedLOD'::__l28::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 local_res8 [8];
  
  lVar3 = *(longlong *)this;
  plVar4 = *(longlong **)(lVar3 + 0x288);
  iVar2 = *(int *)(lVar3 + 0x290);
  plVar1 = plVar4 + iVar2;
  while( true ) {
    if (*(int *)(lVar3 + 0x290) != iVar2) {
      `TCheckedPointerIterator<TRefCountPtr<FHairGroupInstance>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (plVar4 == plVar1) break;
    *(float *)(*plVar4 + 0x158) = (float)*(int *)((longlong)this + 8);
    *(undefined4 *)(*plVar4 + 0x15c) = *(undefined4 *)((longlong)this + 0xc);
    if (*(char *)((longlong)this + 0x10) != '\0') {
      AddHairStreamingRequest((FHairGroupInstance *)*plVar4,*(int *)((longlong)this + 8));
    }
    if (*(char *)((longlong)this + 0x11) != '\0') {
      AddHairStreamingRequest((FHairGroupInstance *)*plVar4,*(int *)((longlong)this + 8) + -1);
    }
    plVar4 = plVar4 + 1;
  }
  return;
}

// operator() @ 14dff5e70

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
`UGroomComponent::TickComponent'::__l58::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  longlong *plVar15;
  undefined1 local_res8 [8];
  
  plVar15 = *(longlong **)((longlong)this + 8);
  iVar2 = *(int *)((longlong)this + 0x10);
  plVar1 = plVar15 + iVar2;
  while( true ) {
    if (*(int *)((longlong)this + 0x10) != iVar2) {
      `TCheckedPointerIterator<TRefCountPtr<FHairGroupInstance>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (plVar15 == plVar1) break;
    *(undefined4 *)(*plVar15 + 0x158) = *(undefined4 *)((longlong)this + 0x18);
    *(undefined4 *)(*plVar15 + 0x15c) = *(undefined4 *)((longlong)this + 0x1c);
    if ((*(int *)((longlong)this + 0x1c) == 1) && (0.0 <= *(float *)((longlong)this + 0x18))) {
      AddHairStreamingRequest((FHairGroupInstance *)*plVar15,(int)*(float *)((longlong)this + 0x18))
      ;
    }
    if (*(char *)((longlong)this + 0x20) != '\0') {
      lVar3 = *plVar15;
      *(undefined8 *)(lVar3 + 0x380) = *(undefined8 *)(lVar3 + 0x2c0);
      *(undefined8 *)(lVar3 + 0x388) = *(undefined8 *)(lVar3 + 0x2c8);
      *(undefined8 *)(lVar3 + 0x390) = *(undefined8 *)(lVar3 + 0x2d0);
      *(undefined8 *)(lVar3 + 0x398) = *(undefined8 *)(lVar3 + 0x2d8);
      *(undefined8 *)(lVar3 + 0x3a0) = *(undefined8 *)(lVar3 + 0x2e0);
      *(undefined8 *)(lVar3 + 0x3a8) = *(undefined8 *)(lVar3 + 0x2e8);
      *(undefined8 *)(lVar3 + 0x3b0) = *(undefined8 *)(lVar3 + 0x2f0);
      *(undefined8 *)(lVar3 + 0x3b8) = *(undefined8 *)(lVar3 + 0x2f8);
      *(undefined8 *)(lVar3 + 0x3c0) = *(undefined8 *)(lVar3 + 0x300);
      *(undefined8 *)(lVar3 + 0x3c8) = *(undefined8 *)(lVar3 + 0x308);
      *(undefined8 *)(lVar3 + 0x3d0) = *(undefined8 *)(lVar3 + 0x310);
      *(undefined8 *)(lVar3 + 0x3d8) = *(undefined8 *)(lVar3 + 0x318);
      lVar3 = *plVar15;
      uVar4 = *(undefined8 *)((longlong)this + 0x38);
      uVar5 = *(undefined8 *)((longlong)this + 0x40);
      uVar6 = *(undefined8 *)((longlong)this + 0x48);
      uVar7 = *(undefined8 *)((longlong)this + 0x50);
      uVar8 = *(undefined8 *)((longlong)this + 0x58);
      uVar9 = *(undefined8 *)((longlong)this + 0x60);
      uVar10 = *(undefined8 *)((longlong)this + 0x68);
      uVar11 = *(undefined8 *)((longlong)this + 0x70);
      uVar12 = *(undefined8 *)((longlong)this + 0x78);
      uVar13 = *(undefined8 *)((longlong)this + 0x80);
      uVar14 = *(undefined8 *)((longlong)this + 0x88);
      *(undefined8 *)(lVar3 + 0x2c0) = *(undefined8 *)((longlong)this + 0x30);
      *(undefined8 *)(lVar3 + 0x2c8) = uVar4;
      *(undefined8 *)(lVar3 + 0x2d0) = uVar5;
      *(undefined8 *)(lVar3 + 0x2d8) = uVar6;
      *(undefined8 *)(lVar3 + 0x2e0) = uVar7;
      *(undefined8 *)(lVar3 + 0x2e8) = uVar8;
      *(undefined8 *)(lVar3 + 0x2f0) = uVar9;
      *(undefined8 *)(lVar3 + 0x2f8) = uVar10;
      *(undefined8 *)(lVar3 + 0x300) = uVar11;
      *(undefined8 *)(lVar3 + 0x308) = uVar12;
      *(undefined8 *)(lVar3 + 0x310) = uVar13;
      *(undefined8 *)(lVar3 + 0x318) = uVar14;
      lVar3 = *(longlong *)(*plVar15 + 0x20);
      if (lVar3 != 0) {
        *(int *)(lVar3 + 0x198) = 1 - *(int *)(lVar3 + 0x198);
      }
      lVar3 = *(longlong *)(*plVar15 + 0x48);
      if (lVar3 != 0) {
        *(int *)(lVar3 + 0x198) = 1 - *(int *)(lVar3 + 0x198);
      }
    }
    plVar15 = plVar15 + 1;
  }
  return;
}

// AddCollisionComponent @ 14dff7510

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UGroomComponent::AddCollisionComponent(UGroomComponent *this,USkeletalMeshComponent *param_1)

{
  int *piVar1;
  TArray<TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  FWeakObjectPtr *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FScriptContainerElement *this_00;
  FWeakObjectPtr local_res10;
  USkeletalMeshComponent *local_res18;
  USkeletalMeshComponent *local_res20;
  FWeakObjectPtr local_38 [2];
  
  if (param_1 != (USkeletalMeshComponent *)0x0) {
    pTVar2 = &this->CollisionComponents;
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
    local_res18 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res18);
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    iVar7 = (this->CollisionComponents).ArrayNum;
    for (this_00 = pFVar3; this_00 != pFVar3 + (longlong)iVar7 * 8; this_00 = this_00 + 8) {
      bVar6 = TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>::
              UEOpEquals<USkeletalMeshComponent,bool>
                        ((TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr> *)this_00,
                         (TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr> *)&local_res10);
      if (bVar6) {
        if ((int)((longlong)this_00 - (longlong)pFVar3 >> 3) != -1) {
          return;
        }
        break;
      }
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_38[0].ObjectIndex = 0;
    local_38[0].ObjectSerialNumber = 0;
    local_res20 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(local_38,(FObjectPtr)&local_res20);
    pFVar4 = (FWeakObjectPtr *)(pTVar2->AllocatorInstance).Data;
    if (((pFVar4 <= local_38) && (local_38 < pFVar4 + (this->CollisionComponents).ArrayMax)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar7 = (this->CollisionComponents).ArrayNum;
    piVar1 = &(this->CollisionComponents).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->CollisionComponents).ArrayNum = iVar7 + 1;
    *(FWeakObjectPtr *)((pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_38[0];
  }
  return;
}

// BeginDestroy @ 14dff86b0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall UGroomComponent::BeginDestroy(UGroomComponent *this)

{
  ReleaseResources(this);
  UMeshComponent::BeginDestroy((UMeshComponent *)this);
  return;
}

// BuildAndCollect @ 14dff8cc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPhysicsAsset * __thiscall
UGroomComponent::BuildAndCollect
          (UGroomComponent *this,TTransform<double> *param_1,
          TArray<TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
          *param_2,TArray<TWeakObjectPtr<UPhysicsAsset,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
                   *param_3)

{
  FWeakObjectPtr *pFVar1;
  USkeletalMeshComponent *this_00;
  FWeakObjectPtr *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  int iVar7;
  UClass *pUVar8;
  USkeletalMesh *pUVar9;
  longlong lVar10;
  FName *pFVar11;
  int *piVar12;
  TTransform<double> *pTVar13;
  USkinnedMeshComponent *pUVar14;
  UPhysicsAsset *pUVar15;
  int iVar16;
  FWeakObjectPtr *this_01;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined1 auStack_138 [32];
  FWeakObjectPtr *local_118;
  FWeakObjectPtr *local_110;
  longlong local_108;
  longlong local_100;
  undefined8 local_f8;
  undefined1 local_e8 [4];
  FWeakObjectPtr local_e4;
  undefined8 local_dc;
  UPhysicsAsset *local_d0;
  FName local_c8 [2];
  TTransform<double> local_b8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_138;
  *&(param_1->Rotation).XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(param_1->Rotation).ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(param_1->Translation).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(param_1->Translation).ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(param_1->Scale3D).XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(param_1->Scale3D).ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  if (this->field_0x5a == '\0') goto LAB_14dff8e77;
  this_00 = *(USkeletalMeshComponent **)&this->field_0x208;
  if (this_00 == (USkeletalMeshComponent *)0x0) {
LAB_14dff8e36:
    dVar5 = *(double *)&this[-1].field_0x450;
    (param_1->Rotation).XY.m128d_f64[0] = *(double *)&this[-1].field_0x448;
    (param_1->Rotation).XY.m128d_f64[1] = dVar5;
    dVar5 = *(double *)&this[-1].field_0x460;
    (param_1->Rotation).ZW.m128d_f64[0] = *(double *)&this[-1].field_0x458;
    (param_1->Rotation).ZW.m128d_f64[1] = dVar5;
    dVar5 = *(double *)&this[-1].field_0x470;
    (param_1->Translation).XY.m128d_f64[0] = *(double *)&this[-1].field_0x468;
    (param_1->Translation).XY.m128d_f64[1] = dVar5;
    dVar5 = *(double *)&this[-1].field_0x480;
    (param_1->Translation).ZW.m128d_f64[0] = *(double *)&this[-1].field_0x478;
    (param_1->Translation).ZW.m128d_f64[1] = dVar5;
    dVar5 = *(double *)&this[-1].field_0x490;
    (param_1->Scale3D).XY.m128d_f64[0] = *(double *)&this[-1].field_0x488;
    (param_1->Scale3D).XY.m128d_f64[1] = dVar5;
    uVar17 = *(undefined4 *)&this[-1].field_0x498;
    uVar18 = *(undefined4 *)&this[-1].field_0x49c;
    uVar19 = *(undefined4 *)&this[-1].field_0x4a0;
    uVar20 = *(undefined4 *)&this[-1].field_0x4a4;
  }
  else {
    pUVar8 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
    iVar16 = (int)pUVar8->_padding_;
    if ((*(int *)(this_00->_padding_ + 0x38) < iVar16) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar16 * 8) !=
        &pUVar8->_padding_)) goto LAB_14dff8e36;
    pUVar9 = USkeletalMeshComponent::GetSkeletalMeshAsset(this_00);
    if ((pUVar9 == (USkeletalMesh *)0x0) || (*(int *)&this->field_0x70 < 2)) goto LAB_14dff8e36;
    pUVar9 = USkeletalMeshComponent::GetSkeletalMeshAsset(this_00);
    lVar10 = (**(code **)(pUVar9->_padding_ + 800))(pUVar9);
    iVar16 = *(int *)&this->field_0x70 + -1;
    if (*(int *)&this->field_0x70 == 0) {
      iVar16 = 0;
    }
    pFVar11 = ::FName::FName(local_c8,iVar16,*(wchar_t **)&this->field_0x68,FNAME_Add);
    iVar16 = -1;
    local_dc = 0;
    if (*pFVar11 != (FName)0x0) {
      piVar12 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::
                Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                      *)(lVar10 + 0x90),*pFVar11);
      if (piVar12 != (int *)0x0) {
        iVar16 = *piVar12;
      }
    }
    pTVar13 = USkinnedMeshComponent::GetBoneTransform
                        ((USkinnedMeshComponent *)this_00,&local_b8,iVar16);
    dVar5 = (pTVar13->Rotation).XY.m128d_f64[1];
    (param_1->Rotation).XY.m128d_f64[0] = (pTVar13->Rotation).XY.m128d_f64[0];
    (param_1->Rotation).XY.m128d_f64[1] = dVar5;
    dVar5 = (pTVar13->Rotation).ZW.m128d_f64[1];
    (param_1->Rotation).ZW.m128d_f64[0] = (pTVar13->Rotation).ZW.m128d_f64[0];
    (param_1->Rotation).ZW.m128d_f64[1] = dVar5;
    dVar5 = (pTVar13->Translation).XY.m128d_f64[1];
    (param_1->Translation).XY.m128d_f64[0] = (pTVar13->Translation).XY.m128d_f64[0];
    (param_1->Translation).XY.m128d_f64[1] = dVar5;
    dVar5 = (pTVar13->Translation).ZW.m128d_f64[1];
    (param_1->Translation).ZW.m128d_f64[0] = (pTVar13->Translation).ZW.m128d_f64[0];
    (param_1->Translation).ZW.m128d_f64[1] = dVar5;
    dVar5 = (pTVar13->Scale3D).XY.m128d_f64[1];
    (param_1->Scale3D).XY.m128d_f64[0] = (pTVar13->Scale3D).XY.m128d_f64[0];
    (param_1->Scale3D).XY.m128d_f64[1] = dVar5;
    uVar17 = *(undefined4 *)(pTVar13->Scale3D).ZW.m128d_f64;
    uVar18 = *(undefined4 *)((longlong)(pTVar13->Scale3D).ZW.m128d_f64 + 4);
    uVar19 = *(undefined4 *)((pTVar13->Scale3D).ZW.m128d_f64 + 1);
    uVar20 = *(undefined4 *)((longlong)(pTVar13->Scale3D).ZW.m128d_f64 + 0xc);
  }
  *(undefined4 *)(param_1->Scale3D).ZW.m128d_f64 = uVar17;
  *(undefined4 *)((longlong)(param_1->Scale3D).ZW.m128d_f64 + 4) = uVar18;
  *(undefined4 *)((param_1->Scale3D).ZW.m128d_f64 + 1) = uVar19;
  *(undefined4 *)((longlong)(param_1->Scale3D).ZW.m128d_f64 + 0xc) = uVar20;
LAB_14dff8e77:
  this_01 = *(FWeakObjectPtr **)&this->field_0x40;
  iVar16 = *(int *)&this->field_0x48;
  pFVar1 = this_01 + iVar16;
  while( true ) {
    if (*(int *)&this->field_0x48 != iVar16) {
      local_e8[0] = 0;
      `TCheckedPointerIterator<TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_e8);
    }
    if (this_01 == pFVar1) break;
    bVar6 = FWeakObjectPtr::IsValid(this_01);
    if (bVar6) {
      pUVar14 = (USkinnedMeshComponent *)FWeakObjectPtr::Get(this_01);
      pUVar15 = USkinnedMeshComponent::GetPhysicsAsset(pUVar14);
      if (pUVar15 != (UPhysicsAsset *)0x0) {
        pFVar2 = (FWeakObjectPtr *)(param_2->AllocatorInstance).Data;
        if ((pFVar2 <= this_01) && (this_01 < pFVar2 + param_2->ArrayMax)) {
          local_100 = (longlong)param_2->ArrayNum;
          local_f8 = 8;
          local_118 = this_01;
          local_110 = pFVar2;
          local_108 = (longlong)param_2->ArrayMax;
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar6) {
            pcVar4 = (code *)swi(3);
            pUVar15 = (UPhysicsAsset *)(*pcVar4)();
            return pUVar15;
          }
        }
        iVar7 = param_2->ArrayNum;
        if (iVar7 == param_2->ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,&param_2->AllocatorInstance,&param_2->ArrayMax);
        }
        pFVar3 = (param_2->AllocatorInstance).Data;
        param_2->ArrayNum = iVar7 + 1;
        *(FWeakObjectPtr *)(pFVar3 + (longlong)iVar7 * 8) = *this_01;
        pUVar14 = (USkinnedMeshComponent *)FWeakObjectPtr::Get(this_01);
        pUVar15 = USkinnedMeshComponent::GetPhysicsAsset(pUVar14);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar15 != (UPhysicsAsset *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar15);
        }
        local_e4.ObjectIndex = 0;
        local_e4.ObjectSerialNumber = 0;
        local_d0 = pUVar15;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar15 != (UPhysicsAsset *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar15);
        }
        FWeakObjectPtr::operator=(&local_e4,(FObjectPtr)&local_d0);
        pFVar2 = (FWeakObjectPtr *)(param_3->AllocatorInstance).Data;
        if ((pFVar2 <= &local_e4) && (&local_e4 < pFVar2 + param_3->ArrayMax)) {
          local_100 = (longlong)param_3->ArrayNum;
          local_f8 = 8;
          local_118 = &local_e4;
          local_110 = pFVar2;
          local_108 = (longlong)param_3->ArrayMax;
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar6) {
            pcVar4 = (code *)swi(3);
            pUVar15 = (UPhysicsAsset *)(*pcVar4)();
            return pUVar15;
          }
        }
        iVar7 = param_3->ArrayNum;
        if (iVar7 == param_3->ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,&param_3->AllocatorInstance,&param_3->ArrayMax);
        }
        pFVar3 = (param_3->AllocatorInstance).Data;
        param_3->ArrayNum = iVar7 + 1;
        *(FWeakObjectPtr *)(pFVar3 + (longlong)iVar7 * 8) = local_e4;
      }
    }
    this_01 = this_01 + 1;
  }
  return *(UPhysicsAsset **)&this->field_0x38;
}

// BuildSimulationTransform @ 14e0031a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UGroomComponent::BuildSimulationTransform(UGroomComponent *this,TTransform<double> *param_1)

{
  int iVar1;
  USkeletalMeshComponent *this_00;
  double dVar2;
  UClass *pUVar3;
  USkeletalMesh *pUVar4;
  longlong lVar5;
  FName *pFVar6;
  int *piVar7;
  TTransform<double> *pTVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 auStack_b8 [32];
  FName local_98 [2];
  TTransform<double> local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_b8;
  *&(param_1->Rotation).XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(param_1->Rotation).ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(param_1->Translation).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(param_1->Translation).ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(param_1->Scale3D).XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(param_1->Scale3D).ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  if ((this->SimulationSettings).SimulationSetup.bLocalSimulation == false) {
    return;
  }
  this_00 = (USkeletalMeshComponent *)this->RegisteredMeshComponent;
  if (this_00 != (USkeletalMeshComponent *)0x0) {
    pUVar3 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
    iVar9 = (int)pUVar3->_padding_;
    if ((((iVar9 <= *(int *)(this_00->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar9 * 8) ==
          &pUVar3->_padding_)) &&
        (pUVar4 = USkeletalMeshComponent::GetSkeletalMeshAsset(this_00),
        pUVar4 != (USkeletalMesh *)0x0)) &&
       (1 < (this->SimulationSettings).SimulationSetup.LocalBone.Data.ArrayNum)) {
      pUVar4 = USkeletalMeshComponent::GetSkeletalMeshAsset(this_00);
      lVar5 = (**(code **)(pUVar4->_padding_ + 800))(pUVar4);
      iVar1 = (this->SimulationSettings).SimulationSetup.LocalBone.Data.ArrayNum;
      iVar9 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar9 = 0;
      }
      pFVar6 = ::FName::FName(local_98,iVar9,
                              (wchar_t *)
                              (this->SimulationSettings).SimulationSetup.LocalBone.Data.
                              AllocatorInstance.Data,FNAME_Add);
      iVar9 = -1;
      local_98[0].ComparisonIndex.Value = 0;
      local_98[0].Number = 0;
      if ((*pFVar6 != (FName)0x0) &&
         (piVar7 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                   ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                           *)(lVar5 + 0x90),*pFVar6), piVar7 != (int *)0x0)) {
        iVar9 = *piVar7;
      }
      pTVar8 = USkinnedMeshComponent::GetBoneTransform
                         ((USkinnedMeshComponent *)this_00,&local_88,iVar9);
      dVar2 = (pTVar8->Rotation).XY.m128d_f64[1];
      (param_1->Rotation).XY.m128d_f64[0] = (pTVar8->Rotation).XY.m128d_f64[0];
      (param_1->Rotation).XY.m128d_f64[1] = dVar2;
      dVar2 = (pTVar8->Rotation).ZW.m128d_f64[1];
      (param_1->Rotation).ZW.m128d_f64[0] = (pTVar8->Rotation).ZW.m128d_f64[0];
      (param_1->Rotation).ZW.m128d_f64[1] = dVar2;
      dVar2 = (pTVar8->Translation).XY.m128d_f64[1];
      (param_1->Translation).XY.m128d_f64[0] = (pTVar8->Translation).XY.m128d_f64[0];
      (param_1->Translation).XY.m128d_f64[1] = dVar2;
      dVar2 = (pTVar8->Translation).ZW.m128d_f64[1];
      (param_1->Translation).ZW.m128d_f64[0] = (pTVar8->Translation).ZW.m128d_f64[0];
      (param_1->Translation).ZW.m128d_f64[1] = dVar2;
      dVar2 = (pTVar8->Scale3D).XY.m128d_f64[1];
      (param_1->Scale3D).XY.m128d_f64[0] = (pTVar8->Scale3D).XY.m128d_f64[0];
      (param_1->Scale3D).XY.m128d_f64[1] = dVar2;
      uVar10 = *(undefined4 *)(pTVar8->Scale3D).ZW.m128d_f64;
      uVar11 = *(undefined4 *)((longlong)(pTVar8->Scale3D).ZW.m128d_f64 + 4);
      uVar12 = *(undefined4 *)((pTVar8->Scale3D).ZW.m128d_f64 + 1);
      uVar13 = *(undefined4 *)((longlong)(pTVar8->Scale3D).ZW.m128d_f64 + 0xc);
      goto LAB_14e003374;
    }
  }
  dVar2 = *(double *)&this->field_0x1f8;
  (param_1->Rotation).XY.m128d_f64[0] = *(double *)&this->field_0x1f0;
  (param_1->Rotation).XY.m128d_f64[1] = dVar2;
  dVar2 = *(double *)&this->field_0x208;
  (param_1->Rotation).ZW.m128d_f64[0] = *(double *)&this->field_0x200;
  (param_1->Rotation).ZW.m128d_f64[1] = dVar2;
  dVar2 = *(double *)&this->field_0x218;
  (param_1->Translation).XY.m128d_f64[0] = *(double *)&this->field_0x210;
  (param_1->Translation).XY.m128d_f64[1] = dVar2;
  dVar2 = *(double *)&this->field_0x228;
  (param_1->Translation).ZW.m128d_f64[0] = *(double *)&this->field_0x220;
  (param_1->Translation).ZW.m128d_f64[1] = dVar2;
  dVar2 = *(double *)&this->field_0x238;
  (param_1->Scale3D).XY.m128d_f64[0] = *(double *)&this->field_0x230;
  (param_1->Scale3D).XY.m128d_f64[1] = dVar2;
  uVar10 = *(undefined4 *)&this->field_0x240;
  uVar11 = *(undefined4 *)&this->field_0x244;
  uVar12 = *(undefined4 *)&this->field_0x248;
  uVar13 = *(undefined4 *)&this->field_0x24c;
LAB_14e003374:
  *(undefined4 *)(param_1->Scale3D).ZW.m128d_f64 = uVar10;
  *(undefined4 *)((longlong)(param_1->Scale3D).ZW.m128d_f64 + 4) = uVar11;
  *(undefined4 *)((param_1->Scale3D).ZW.m128d_f64 + 1) = uVar12;
  *(undefined4 *)((longlong)(param_1->Scale3D).ZW.m128d_f64 + 0xc) = uVar13;
  return;
}

// CalcBounds @ 14e0033a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TBoxSphereBounds<double,double> * __thiscall
UGroomComponent::CalcBounds
          (UGroomComponent *this,TBoxSphereBounds<double,double> *__return_storage_ptr__,
          TTransform<double> *param_1)

{
  UGroomAsset *this_00;
  FGroomCacheBuffers *this_01;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [8];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  double dVar15;
  undefined8 uVar16;
  undefined1 auVar17 [12];
  undefined8 uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  bool bVar23;
  char cVar24;
  int iVar25;
  TArray<FHairGroupPlatformData,TSizedDefaultAllocator<32>_> *pTVar26;
  TBoxSphereBounds<double,double> *pTVar27;
  FHairGroupDesc *pFVar28;
  TBox<double> *pTVar29;
  double *pdVar30;
  TMatrix<double> *pTVar31;
  UClass *pUVar32;
  FScriptContainerElement *pFVar33;
  USkinnedMeshComponent *this_02;
  FScriptContainerElement *pFVar34;
  longlong lVar35;
  uint uVar36;
  longlong lVar37;
  uint uVar38;
  ulonglong uVar39;
  undefined4 uVar47;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined4 uVar48;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  double dVar49;
  double dVar50;
  undefined4 uVar53;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined4 uVar54;
  double dVar55;
  double dVar56;
  undefined1 in_XMM2 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined4 uVar60;
  undefined4 uVar61;
  undefined4 uVar62;
  undefined4 uVar63;
  float fVar64;
  double dVar65;
  uint uVar66;
  uint uVar67;
  uint uVar68;
  uint uVar69;
  uint uVar70;
  uint uVar71;
  uint uVar72;
  uint uVar73;
  double dVar74;
  undefined1 auVar75 [16];
  float fVar76;
  undefined1 auStack_908 [32];
  longlong local_8e8;
  longlong local_8e0;
  undefined1 local_8d8;
  undefined1 local_8d7;
  undefined1 local_8d6;
  undefined1 local_8d5;
  uint local_8d4;
  UGroomComponent *local_8d0;
  undefined1 local_8c8 [16];
  undefined1 local_8b8 [16];
  double local_8a8;
  TTransform<double> *local_8a0;
  undefined1 local_898 [16];
  undefined1 local_888 [16];
  undefined4 local_878;
  undefined4 uStack_874;
  undefined4 uStack_870;
  undefined4 uStack_86c;
  ulonglong local_868;
  undefined1 local_860 [16];
  undefined1 local_850 [16];
  undefined4 local_840;
  undefined4 uStack_83c;
  undefined4 uStack_838;
  undefined4 uStack_834;
  ulonglong local_830;
  undefined1 local_828 [16];
  undefined1 local_818 [16];
  undefined4 local_808;
  undefined4 uStack_804;
  undefined4 uStack_800;
  undefined4 uStack_7fc;
  ulonglong local_7f8;
  undefined1 local_7f0 [16];
  undefined1 local_7e0 [16];
  undefined4 local_7d0;
  undefined4 uStack_7cc;
  undefined4 uStack_7c8;
  undefined4 uStack_7c4;
  ulonglong local_7c0;
  TBoxSphereBounds<double,double> *local_7b8;
  TVector<double>_u_0 local_7b0;
  double local_798;
  double local_790;
  double local_788;
  TVector<double>_u_0 local_778;
  double local_760;
  double local_758;
  double local_750;
  double local_748;
  TVector<double>_u_0 local_740;
  double local_728;
  double local_720;
  double local_718;
  undefined4 uStack_6f4;
  undefined4 local_6f0;
  undefined4 uStack_6ec;
  double dStack_6e8;
  undefined8 local_6a8;
  double dStack_6a0;
  double local_698;
  undefined8 uStack_690;
  TMatrix<double> local_678;
  undefined8 local_5d8;
  undefined8 uStack_5d0;
  undefined8 local_5c8;
  undefined8 uStack_5c0;
  undefined1 local_5b8 [112];
  undefined1 local_548 [56];
  TBoxSphereBounds<double,double> local_510;
  undefined1 local_4d8 [168];
  FHairGroupDesc local_430;
  undefined1 local_3f0 [16];
  undefined1 local_3e0 [8];
  undefined1 auStack_3d8 [12];
  undefined4 uStack_3cc;
  undefined8 uStack_3c8;
  ulonglong local_3c0;
  undefined1 local_3b8 [24];
  double dStack_3a0;
  double local_398;
  undefined8 uStack_390;
  uchar local_388;
  uchar local_387 [7];
  TVector<double>_u_0 local_380;
  double local_368;
  double local_360;
  double local_358;
  undefined1 local_350;
  TVector<double>_u_0 local_348;
  double local_330;
  double local_328;
  double local_320;
  TVector<double>_u_0 local_310;
  double local_2f8;
  double local_2f0;
  double local_2e8;
  TBox<double> local_2d8;
  TBox<double> local_2a0;
  TMatrix<double> local_268;
  TMatrix<double> local_1e8;
  TMatrix<double> local_168;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStack_908;
  this_00 = (this->GroomAsset).field0_0x0.DebugPtr;
  local_8d0 = this;
  local_8a0 = param_1;
  local_7b8 = __return_storage_ptr__;
  if ((this_00 == (UGroomAsset *)0x0) ||
     (iVar25 = UGroomAsset::GetNumHairGroups(this_00), iVar25 < 1)) {
    local_6a8 = 0;
    dStack_6a0 = 0.0;
    local_698 = 0.0;
    uStack_690 = 0;
    UE::Math::TTransform<double>::ToMatrixWithScale(param_1,&local_678);
    local_678.M[3][1] =
         local_678.M[1][1] * 0.0 + local_678.M[0][1] * 0.0 + local_678.M[2][1] * 0.0 +
         local_678.M[3][1];
    auVar43._0_8_ =
         (double)CONCAT44((uint)((ulonglong)(local_678.M[2][0] * 0.0) >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(local_678.M[2][0] * 0.0,0) &
                          (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    auVar43._8_4_ = SUB84(local_678.M[2][1] * 0.0,0) & _UNK_15061cc88;
    auVar43._12_4_ = (uint)((ulonglong)(local_678.M[2][1] * 0.0) >> 0x20) & _UNK_15061cc8c;
    dVar56 = (double)CONCAT44((uint)((ulonglong)(local_678.M[1][0] * local_698) >> 0x20) &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              SUB84(local_678.M[1][0] * local_698,0) &
                              (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
             (double)CONCAT44((uint)((ulonglong)(local_678.M[0][0] * dStack_6a0) >> 0x20) &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              SUB84(local_678.M[0][0] * dStack_6a0,0) &
                              (uint)__xmm_7fffffffffffffff7fffffffffffffff) + auVar43._0_8_;
    dVar50 = (double)CONCAT44((uint)((ulonglong)(local_678.M[1][1] * local_698) >> 0x20) &
                              _UNK_15061cc8c,SUB84(local_678.M[1][1] * local_698,0) & _UNK_15061cc88
                             ) +
             (double)CONCAT44((uint)((ulonglong)(local_678.M[0][1] * dStack_6a0) >> 0x20) &
                              _UNK_15061cc8c,
                              SUB84(local_678.M[0][1] * dStack_6a0,0) & _UNK_15061cc88) +
             auVar43._8_8_;
    auVar58._8_4_ = SUB84(dVar50,0);
    auVar58._0_8_ = dVar56;
    auVar58._12_4_ = (int)((ulonglong)dVar50 >> 0x20);
    auVar44._0_8_ =
         (double)CONCAT44((uint)((ulonglong)(local_678.M[0][2] * dStack_6a0) >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(local_678.M[0][2] * dStack_6a0,0) &
                          (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    auVar44._8_4_ = SUB84(local_678.M[0][3] * dStack_6a0,0) & _UNK_15061cc88;
    auVar44._12_4_ = (uint)((ulonglong)(local_678.M[0][3] * dStack_6a0) >> 0x20) & _UNK_15061cc8c;
    dStack_6e8 = auVar58._8_8_;
    dVar49 = (double)CONCAT44((uint)((ulonglong)(local_678.M[1][2] * local_698) >> 0x20) &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              SUB84(local_678.M[1][2] * local_698,0) &
                              (uint)__xmm_7fffffffffffffff7fffffffffffffff) + auVar44._0_8_ +
             (double)CONCAT44((uint)((ulonglong)(local_678.M[2][2] * 0.0) >> 0x20) &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              SUB84(local_678.M[2][2] * 0.0,0) &
                              (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    dVar12 = (double)CONCAT44((uint)((ulonglong)(local_678.M[1][3] * local_698) >> 0x20) &
                              _UNK_15061cc8c,SUB84(local_678.M[1][3] * local_698,0) & _UNK_15061cc88
                             ) + auVar44._8_8_ +
             (double)CONCAT44((uint)((ulonglong)(local_678.M[2][3] * 0.0) >> 0x20) & _UNK_15061cc8c,
                              SUB84(local_678.M[2][3] * 0.0,0) & _UNK_15061cc88);
    auVar11._8_4_ = SUB84(local_678.M[3][1],0);
    auVar11._0_8_ =
         local_678.M[1][0] * 0.0 + local_678.M[0][0] * 0.0 + local_678.M[2][0] * 0.0 +
         local_678.M[3][0];
    auVar11._12_4_ = (int)((ulonglong)local_678.M[3][1] >> 0x20);
    *(undefined1 (*) [16])&(__return_storage_ptr__->Origin).field0_0x0 = auVar11;
    auVar45._8_4_ = SUB84(dVar12,0);
    auVar45._0_8_ = dVar49;
    auVar45._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
    dVar55 = SQRT(dVar49 * dVar49 + dVar56 * dVar56 + dVar50 * dVar50);
    local_6f0 = SUB84(dVar56,0);
    uStack_6ec = (undefined4)((ulonglong)dVar56 >> 0x20);
    auVar17._4_8_ = auVar45._8_8_ * dVar12 + dVar50 * dVar50 + dVar56 * dVar56;
    auVar17._0_4_ = uStack_6f4;
    auVar46._0_8_ = auVar17._0_8_ << 0x20;
    auVar46._8_4_ = local_6f0;
    auVar46._12_4_ = uStack_6ec;
    if (0.0 <= dVar55) {
      dVar55 = 0.0;
    }
    (__return_storage_ptr__->Origin).field0_0x0._s_0.Z =
         local_678.M[1][2] * 0.0 + local_678.M[0][2] * 0.0 + local_678.M[2][2] * 0.0 +
         local_678.M[3][2];
    (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X = auVar46._8_8_;
    (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y = dStack_6e8;
    (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z = dVar49;
  }
  else {
    this_01 = (FGroomCacheBuffers *)(this->GroomCacheBuffers).Object;
    _local_3e0 = ZEXT816(0);
    local_3c0 = 0;
    local_3f0 = ZEXT816(0);
    stack0xfffffffffffffc30 = ZEXT816(0);
    if (this_01 == (FGroomCacheBuffers *)0x0) {
      pTVar26 = UGroomAsset::GetHairGroupsPlatformData((this->GroomAsset).field0_0x0.DebugPtr);
      uVar22 = _UNK_15061cc8c;
      uVar21 = _UNK_15061cc88;
      uVar20 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      uVar19 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      fVar76 = __real_3f800000;
      uVar36 = 0;
      uVar38 = pTVar26->ArrayNum;
      local_8d4 = uVar38;
      if (uVar38 == 0) {
        uVar47 = local_3e0._0_4_;
        uVar53 = local_3e0._4_4_;
        uVar54 = 0;
        uVar61 = 0;
        uVar48 = local_3f0._8_4_;
        uVar60 = local_3f0._12_4_;
        uVar62 = 0;
        uVar63 = 0;
        auVar58 = stack0xfffffffffffffc30;
        goto LAB_14e003e2f;
      }
      uVar53 = 0;
      uVar54 = 0;
      uVar47 = 0;
      uVar48 = 0;
      local_8b8._8_8_ = 0;
      local_8b8._0_8_ = local_3e0;
      local_8c8._8_8_ = 0;
      local_8c8._0_8_ = local_3f0._8_8_;
      auVar9 = local_3e0;
      dVar49 = (double)local_3f0._8_8_;
      dVar12 = (double)local_3f0._0_8_;
      uVar18 = stack0xfffffffffffffc30;
      uVar16 = uStack_3c8;
      dVar56 = (double)auStack_3d8._0_8_;
      do {
        pTVar26 = UGroomAsset::GetHairGroupsPlatformData((this->GroomAsset).field0_0x0.DebugPtr);
        uVar66 = 0;
        if ((int)uVar36 < pTVar26->ArrayNum) {
          uVar66 = ~uVar36 >> 0x1f;
        }
        if (uVar66 == 0) {
          local_8e8 = (longlong)(int)uVar36;
          local_8e0 = (longlong)pTVar26->ArrayNum;
          bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar23) {
            pcVar2 = (code *)swi(3);
            pTVar27 = (TBoxSphereBounds<double,double> *)(*pcVar2)();
            return pTVar27;
          }
        }
        pFVar1 = (pTVar26->AllocatorInstance).Data;
        bVar23 = IsHairStrandsEnabled(Strands,SP_NumPlatforms);
        if ((bVar23) && (*(int *)(pFVar1 + (longlong)(int)uVar36 * 2000 + 0x2cc) != 0)) {
          uVar70 = *(uint *)(param_1->Scale3D).XY.m128d_f64 & uVar19;
          uVar71 = *(uint *)((longlong)(param_1->Scale3D).XY.m128d_f64 + 4) & uVar20;
          uVar72 = *(uint *)((param_1->Scale3D).XY.m128d_f64 + 1) & uVar21;
          uVar73 = *(uint *)((longlong)(param_1->Scale3D).XY.m128d_f64 + 0xc) & uVar22;
          uVar66 = *(uint *)(param_1->Scale3D).ZW.m128d_f64 & uVar19;
          uVar67 = *(uint *)((longlong)(param_1->Scale3D).ZW.m128d_f64 + 4) & uVar20;
          uVar68 = *(uint *)((param_1->Scale3D).ZW.m128d_f64 + 1) & uVar21;
          uVar69 = *(uint *)((longlong)(param_1->Scale3D).ZW.m128d_f64 + 0xc) & uVar22;
          pFVar28 = GetGroomGroupsDesc(&local_430,(this->GroomAsset).field0_0x0.DebugPtr,this,uVar36
                                      );
          auVar57._4_4_ = uVar71;
          auVar57._0_4_ = uVar70;
          auVar57._8_4_ = uVar72;
          auVar57._12_4_ = uVar73;
          local_5d8._0_1_ = pFVar28->HairShadowDensity_Override;
          local_5d8._1_3_ = *(undefined3 *)&pFVar28->field_0x21;
          local_5d8._4_4_ = pFVar28->HairRaytracingRadiusScale;
          uStack_5d0._0_1_ = pFVar28->HairRaytracingRadiusScale_Override;
          uStack_5d0._1_1_ = pFVar28->bUseHairRaytracingGeometry;
          uStack_5d0._2_1_ = pFVar28->bUseHairRaytracingGeometry_Override;
          uStack_5d0._3_1_ = pFVar28->field_0x2b;
          uStack_5d0._4_4_ = pFVar28->LODBias;
          local_5c8._0_1_ = pFVar28->bUseStableRasterization;
          local_5c8._1_1_ = pFVar28->bUseStableRasterization_Override;
          local_5c8._2_1_ = pFVar28->bScatterSceneLighting;
          local_5c8._3_1_ = pFVar28->bScatterSceneLighting_Override;
          local_5c8._4_1_ = pFVar28->bSupportVoxelization;
          local_5c8._5_1_ = pFVar28->bSupportVoxelization_Override;
          local_5c8._6_2_ = *(undefined2 *)&pFVar28->field_0x36;
          uStack_5c0._0_4_ = pFVar28->HairLengthScale;
          uStack_5c0._4_1_ = pFVar28->HairLengthScale_Override;
          uStack_5c0._5_3_ = *(undefined3 *)&pFVar28->field_0x3d;
          auVar40._4_4_ = uVar71;
          auVar40._0_4_ = uVar70;
          auVar40._8_4_ = uVar72;
          auVar40._12_4_ = uVar73;
          auVar41._12_4_ = uVar67;
          auVar41._8_4_ = uVar66;
          auVar41._0_8_ = auVar40._8_8_;
          fVar64 = pFVar28->HairRootScale;
          if (pFVar28->HairRootScale <= fVar76) {
            fVar64 = fVar76;
          }
          auVar51._4_4_ = uVar67;
          auVar51._0_4_ = uVar66;
          auVar51._12_4_ = uVar71;
          auVar51._8_4_ = uVar70;
          auVar58 = maxpd(auVar57,auVar41);
          auVar42._4_4_ = uVar71;
          auVar42._0_4_ = uVar70;
          auVar42._8_4_ = uVar72;
          auVar42._12_4_ = uVar73;
          if (fVar64 <= pFVar28->HairTipScale) {
            fVar64 = pFVar28->HairTipScale;
          }
          in_XMM2 = maxpd(auVar58,auVar51);
          auVar7._4_4_ = uVar67;
          auVar7._0_4_ = uVar66;
          auVar7._8_4_ = uVar68;
          auVar7._12_4_ = uVar69;
          auVar58 = blendpd(auVar42,auVar7,2);
          auVar52._4_4_ = uVar67;
          auVar52._0_4_ = uVar66;
          auVar52._8_4_ = uVar68;
          auVar52._12_4_ = uVar69;
          auVar8._4_4_ = uVar73;
          auVar8._0_4_ = uVar72;
          auVar58 = maxpd(auVar52,auVar58);
          auVar8._8_4_ = uVar68;
          auVar8._12_4_ = uVar69;
          maxpd(auVar58,auVar8);
          dVar50 = (double)((fVar64 * pFVar28->HairWidth * __real_3f000000) / (float)in_XMM2._0_8_);
          dVar55 = dVar49;
          dVar74 = (double)auVar9;
          dVar13 = dVar56;
          dVar15 = (double)uVar18;
          dVar65 = (double)uVar16;
          if ((uchar)local_3c0 == '\0') {
            if (pFVar1[(longlong)(int)uVar36 * 2000 + 0x318] != (FScriptContainerElement)0x0) {
              local_3f0 = *(undefined1 (*) [16])(pFVar1 + (longlong)(int)uVar36 * 2000 + 0x2e8);
              dVar12 = local_3f0._0_8_;
              uVar47 = local_3f0._8_4_;
              uVar48 = local_3f0._12_4_;
              dVar55 = local_3f0._8_8_;
              _local_3e0 = *(undefined1 (*) [16])(pFVar1 + (longlong)(int)uVar36 * 2000 + 0x2f8);
              dVar74 = local_3e0;
              uVar53 = local_3e0._8_4_;
              uVar54 = local_3e0._12_4_;
              dVar13 = local_3e0._8_8_;
              unique0x0000d600 =
                   *(undefined1 (*) [16])(pFVar1 + (longlong)(int)uVar36 * 2000 + 0x308);
              dVar15 = auStack_3d8._8_8_;
              local_3c0 = *(ulonglong *)(pFVar1 + (longlong)(int)uVar36 * 2000 + 0x318);
              dVar65 = auStack_3d8._16_8_;
            }
          }
          else if (pFVar1[(longlong)(int)uVar36 * 2000 + 0x318] != (FScriptContainerElement)0x0) {
            dVar55 = *(double *)(pFVar1 + (longlong)(int)uVar36 * 2000 + 0x2f0);
            if (dVar49 <= *(double *)(pFVar1 + (longlong)(int)uVar36 * 2000 + 0x2f0)) {
              dVar55 = dVar49;
            }
            if (*(double *)(pFVar1 + (longlong)(int)uVar36 * 2000 + 0x2e8) <= dVar12) {
              dVar12 = *(double *)(pFVar1 + (longlong)(int)uVar36 * 2000 + 0x2e8);
            }
            dVar74 = *(double *)(pFVar1 + (longlong)(int)uVar36 * 2000 + 0x2f8);
            if ((double)auVar9 <= *(double *)(pFVar1 + (longlong)(int)uVar36 * 2000 + 0x2f8)) {
              dVar74 = (double)auVar9;
            }
            uVar47 = 0;
            uVar48 = 0;
            dVar13 = *(double *)(pFVar1 + (longlong)(int)uVar36 * 2000 + 0x300);
            if (*(double *)(pFVar1 + (longlong)(int)uVar36 * 2000 + 0x300) <= dVar56) {
              dVar13 = dVar56;
            }
            uVar53 = 0;
            uVar54 = 0;
            dVar15 = *(double *)(pFVar1 + (longlong)(int)uVar36 * 2000 + 0x308);
            if (*(double *)(pFVar1 + (longlong)(int)uVar36 * 2000 + 0x308) <= (double)uVar18) {
              dVar15 = (double)uVar18;
            }
            dVar65 = *(double *)(pFVar1 + (longlong)(int)uVar36 * 2000 + 0x310);
            if (*(double *)(pFVar1 + (longlong)(int)uVar36 * 2000 + 0x310) <= (double)uVar16) {
              dVar65 = (double)uVar16;
            }
          }
          if (*(uint *)(pFVar1 + (longlong)(int)uVar36 * 2000 + 0x2c8) < 2) {
            bVar23 = FHairGroupPlatformData::FCards::HasValidData
                               ((FCards *)(pFVar1 + (longlong)(int)uVar36 * 2000 + 0x760));
            if (bVar23) {
              iVar25 = *(int *)(pFVar1 + (longlong)(int)uVar36 * 2000 + 0x768);
              lVar35 = *(longlong *)(pFVar1 + (longlong)(int)uVar36 * 2000 + 0x760);
              lVar37 = (longlong)iVar25 * 0x428 + lVar35;
              while( true ) {
                if (*(int *)(pFVar1 + (longlong)(int)uVar36 * 2000 + 0x768) != iVar25) {
                  local_8d8 = 0;
                  `TCheckedPointerIterator<FHairGroupPlatformData::FCards::FLOD_const_,int,0>::
                  operator!='::__l2::<lambda_1>::operator()(&local_8d8);
                }
                if (lVar35 == lVar37) {
                  cVar24 = '\0';
                  local_830 = local_830 & 0xffffffffffffff00;
                  goto LAB_14e003816;
                }
                if (0 < *(int *)(lVar35 + 0x28)) break;
                lVar35 = lVar35 + 0x428;
              }
              local_860 = *(undefined1 (*) [16])(lVar35 + 0x80);
              local_850 = *(undefined1 (*) [16])(lVar35 + 0x90);
              local_840 = *(undefined4 *)(lVar35 + 0xa0);
              uStack_83c = *(undefined4 *)(lVar35 + 0xa4);
              uStack_838 = *(undefined4 *)(lVar35 + 0xa8);
              uStack_834 = *(undefined4 *)(lVar35 + 0xac);
              local_830 = *(ulonglong *)(lVar35 + 0xb0);
              cVar24 = (char)local_830;
LAB_14e003816:
              in_XMM2 = local_850;
              uVar38 = local_8d4;
              if ((uchar)local_3c0 == '\0') {
                if (cVar24 != '\0') {
                  uVar53 = local_850._8_4_;
                  uVar54 = local_850._12_4_;
                  uVar47 = local_860._8_4_;
                  uVar48 = local_860._12_4_;
                  uStack_3cc = uStack_83c;
                  auStack_3d8._8_4_ = local_840;
                  uStack_3c8._0_4_ = uStack_838;
                  uStack_3c8._4_4_ = uStack_834;
                  dVar74 = (double)local_850._0_8_;
                  dVar55 = (double)local_860._8_8_;
                  dVar12 = (double)local_860._0_8_;
                  dVar15 = (double)CONCAT44(uStack_83c,local_840);
                  dVar65 = (double)CONCAT44(uStack_834,uStack_838);
                  dVar13 = (double)local_850._8_8_;
                  local_3f0 = local_860;
                  _local_3e0 = local_850;
                  local_3c0 = local_830;
                }
              }
              else if (cVar24 != '\0') {
                if ((double)local_860._0_8_ <= dVar12) {
                  dVar12 = (double)local_860._0_8_;
                }
                if ((double)local_860._8_8_ <= dVar55) {
                  dVar55 = (double)local_860._8_8_;
                }
                if ((double)local_850._0_8_ <= dVar74) {
                  dVar74 = (double)local_850._0_8_;
                }
                if (dVar13 <= (double)local_850._8_8_) {
                  dVar13 = (double)local_850._8_8_;
                }
                if (dVar15 <= (double)CONCAT44(uStack_83c,local_840)) {
                  dVar15 = (double)CONCAT44(uStack_83c,local_840);
                }
                if (dVar65 <= (double)CONCAT44(uStack_834,uStack_838)) {
                  dVar65 = (double)CONCAT44(uStack_834,uStack_838);
                }
              }
            }
            bVar23 = FHairGroupPlatformData::FMeshes::HasValidData
                               ((FMeshes *)(pFVar1 + (longlong)(int)uVar36 * 2000 + 0x770));
            if (bVar23) {
              iVar25 = *(int *)(pFVar1 + (longlong)(int)uVar36 * 2000 + 0x778);
              pFVar33 = (((TArray<FHairGroupPlatformData::FMeshes::FLOD,TSizedDefaultAllocator<32>_>
                           *)&pFVar1[(longlong)(int)uVar36 * 2000 + 0x770].field_0x0)->
                        AllocatorInstance).Data;
              pFVar34 = pFVar33 + (longlong)iVar25 * 0x98;
              while( true ) {
                if (*(int *)(pFVar1 + (longlong)(int)uVar36 * 2000 + 0x778) != iVar25) {
                  local_8d7 = 0;
                  `TCheckedPointerIterator<FHairGroupPlatformData::FMeshes::FLOD_const_,int,0>::
                  operator!='::__l2::<lambda_1>::operator()(&local_8d7);
                }
                if (pFVar33 == pFVar34) {
                  cVar24 = '\0';
                  local_7f8 = local_7f8 & 0xffffffffffffff00;
                  goto LAB_14e00392a;
                }
                if (0 < *(int *)(pFVar33 + 8)) break;
                pFVar33 = pFVar33 + 0x98;
              }
              local_828 = *(undefined1 (*) [16])(pFVar33 + 0x50);
              local_818 = *(undefined1 (*) [16])(pFVar33 + 0x60);
              local_808 = *(undefined4 *)(pFVar33 + 0x70);
              uStack_804 = *(undefined4 *)(pFVar33 + 0x74);
              uStack_800 = *(undefined4 *)(pFVar33 + 0x78);
              uStack_7fc = *(undefined4 *)(pFVar33 + 0x7c);
              local_7f8 = *(ulonglong *)(pFVar33 + 0x80);
              cVar24 = (char)local_7f8;
LAB_14e00392a:
              in_XMM2 = local_818;
              if ((uchar)local_3c0 == '\0') {
                if (cVar24 != '\0') {
                  uVar53 = local_818._8_4_;
                  uVar54 = local_818._12_4_;
                  uVar47 = local_828._8_4_;
                  uVar48 = local_828._12_4_;
                  dVar74 = (double)local_818._0_8_;
                  dVar55 = (double)local_828._8_8_;
                  dVar12 = (double)local_828._0_8_;
                  dVar15 = (double)CONCAT44(uStack_804,local_808);
                  dVar65 = (double)CONCAT44(uStack_7fc,uStack_800);
                  dVar13 = (double)local_818._8_8_;
                  local_3c0 = local_7f8;
                }
              }
              else if (cVar24 != '\0') {
                if ((double)local_828._0_8_ <= dVar12) {
                  dVar12 = (double)local_828._0_8_;
                }
                if ((double)local_828._8_8_ <= dVar55) {
                  dVar55 = (double)local_828._8_8_;
                }
                if ((double)local_818._0_8_ <= dVar74) {
                  dVar74 = (double)local_818._0_8_;
                }
                if (dVar13 <= (double)local_818._8_8_) {
                  dVar13 = (double)local_818._8_8_;
                }
                if (dVar15 <= (double)CONCAT44(uStack_804,local_808)) {
                  dVar15 = (double)CONCAT44(uStack_804,local_808);
                }
                if (dVar65 <= (double)CONCAT44(uStack_7fc,uStack_800)) {
                  dVar65 = (double)CONCAT44(uStack_7fc,uStack_800);
                }
              }
            }
          }
          dVar12 = dVar12 - dVar50;
          dVar49 = dVar55 - dVar50;
          auVar9 = (undefined1  [8])(dVar74 - dVar50);
          dVar56 = dVar13 + dVar50;
          unique0x100018c4 = dVar15 + dVar50;
          uVar16 = dVar65 + dVar50;
          local_3f0._8_8_ = dVar49;
          local_3f0._0_8_ = dVar12;
          auStack_3d8._0_8_ = dVar56;
          local_3e0 = auVar9;
LAB_14e0039f0:
          uStack_3c8 = uVar16;
          this = local_8d0;
          uVar18 = stack0xfffffffffffffc30;
        }
        else {
          bVar23 = IsHairStrandsEnabled(Cards,SP_NumPlatforms);
          unique0x10004b34 = uVar18;
          if (bVar23) {
            bVar23 = FHairGroupPlatformData::FCards::HasValidData
                               ((FCards *)(pFVar1 + (longlong)(int)uVar36 * 2000 + 0x760));
            if (!bVar23) goto LAB_14e003b9e;
            iVar25 = *(int *)(pFVar1 + (longlong)(int)uVar36 * 2000 + 0x768);
            pFVar33 = (((TArray<FHairGroupPlatformData::FCards::FLOD,TSizedDefaultAllocator<32>_> *)
                       &pFVar1[(longlong)(int)uVar36 * 2000 + 0x760].field_0x0)->AllocatorInstance).
                      Data;
            pFVar34 = pFVar33 + (longlong)iVar25 * 0x428;
            while( true ) {
              if (*(int *)(pFVar1 + (longlong)(int)uVar36 * 2000 + 0x768) != iVar25) {
                local_8d6 = 0;
                `TCheckedPointerIterator<FHairGroupPlatformData::FCards::FLOD_const_,int,0>::
                operator!='::__l2::<lambda_1>::operator()(&local_8d6);
              }
              if (pFVar33 == pFVar34) {
                cVar24 = '\0';
                local_7c0 = local_7c0 & 0xffffffffffffff00;
                goto LAB_14e003ae6;
              }
              if (0 < *(int *)(pFVar33 + 0x28)) break;
              pFVar33 = pFVar33 + 0x428;
            }
            local_7f0 = *(undefined1 (*) [16])(pFVar33 + 0x80);
            local_7e0 = *(undefined1 (*) [16])(pFVar33 + 0x90);
            local_7d0 = *(undefined4 *)(pFVar33 + 0xa0);
            uStack_7cc = *(undefined4 *)(pFVar33 + 0xa4);
            uStack_7c8 = *(undefined4 *)(pFVar33 + 0xa8);
            uStack_7c4 = *(undefined4 *)(pFVar33 + 0xac);
            local_7c0 = *(ulonglong *)(pFVar33 + 0xb0);
            cVar24 = (char)local_7c0;
LAB_14e003ae6:
            auVar58 = local_7f0;
            in_XMM2 = local_7e0;
            uVar60 = local_7d0;
            uVar61 = uStack_7cc;
            uVar62 = uStack_7c8;
            uVar63 = uStack_7c4;
            uVar39 = local_7c0;
            if ((uchar)local_3c0 == '\0') {
LAB_14e003b4d:
              this = local_8d0;
              if (cVar24 != '\0') {
                uVar53 = in_XMM2._8_4_;
                uVar54 = in_XMM2._12_4_;
                uVar16 = CONCAT44(uVar63,uVar62);
                uVar47 = auVar58._8_4_;
                uVar48 = auVar58._12_4_;
                dVar56 = in_XMM2._8_8_;
                dVar49 = auVar58._8_8_;
                uStack_3cc = uVar61;
                auStack_3d8._8_4_ = uVar60;
                uStack_3c8._0_4_ = uVar62;
                uStack_3c8._4_4_ = uVar63;
                auVar9 = in_XMM2._0_8_;
                dVar12 = auVar58._0_8_;
                uVar18 = CONCAT44(uVar61,uVar60);
                local_3f0 = auVar58;
                _local_3e0 = in_XMM2;
                local_3c0 = uVar39;
              }
            }
            else {
              this = local_8d0;
              if (cVar24 != '\0') {
                if ((double)local_7f0._0_8_ <= dVar12) {
                  dVar12 = (double)local_7f0._0_8_;
                }
                if ((double)local_7f0._8_8_ <= dVar49) {
                  dVar49 = (double)local_7f0._8_8_;
                }
                if ((double)local_7e0._0_8_ <= (double)auVar9) {
                  auVar9 = (undefined1  [8])local_7e0._0_8_;
                }
                if (dVar56 <= (double)local_7e0._8_8_) {
                  dVar56 = (double)local_7e0._8_8_;
                }
                if ((double)uVar18 <= (double)CONCAT44(uStack_7cc,local_7d0)) {
                  unique0x10004700 = CONCAT44(uStack_7cc,local_7d0);
                }
                if ((double)uVar16 <= (double)CONCAT44(uStack_7c4,uStack_7c8)) {
                  uVar16 = CONCAT44(uStack_7c4,uStack_7c8);
                }
                local_3f0._8_8_ = dVar49;
                local_3f0._0_8_ = dVar12;
                auStack_3d8._0_8_ = dVar56;
                local_3e0 = auVar9;
                goto LAB_14e0039f0;
              }
            }
          }
          else {
LAB_14e003b9e:
            bVar23 = IsHairStrandsEnabled(Meshes,SP_NumPlatforms);
            if (bVar23) {
              bVar23 = FHairGroupPlatformData::FMeshes::HasValidData
                                 ((FMeshes *)(pFVar1 + (longlong)(int)uVar36 * 2000 + 0x770));
              if (bVar23) {
                iVar25 = *(int *)(pFVar1 + (longlong)(int)uVar36 * 2000 + 0x778);
                pFVar33 = (((TArray<FHairGroupPlatformData::FMeshes::FLOD,TSizedDefaultAllocator<32>_>
                             *)&pFVar1[(longlong)(int)uVar36 * 2000 + 0x770].field_0x0)->
                          AllocatorInstance).Data;
                pFVar34 = pFVar33 + (longlong)iVar25 * 0x98;
                while( true ) {
                  if (*(int *)(pFVar1 + (longlong)(int)uVar36 * 2000 + 0x778) != iVar25) {
                    local_8d5 = 0;
                    `TCheckedPointerIterator<FHairGroupPlatformData::FMeshes::FLOD_const_,int,0>::
                    operator!='::__l2::<lambda_1>::operator()(&local_8d5);
                  }
                  if (pFVar33 == pFVar34) {
                    cVar24 = '\0';
                    local_868 = local_868 & 0xffffffffffffff00;
                    goto LAB_14e003c4c;
                  }
                  if (0 < *(int *)(pFVar33 + 8)) break;
                  pFVar33 = pFVar33 + 0x98;
                }
                local_898 = *(undefined1 (*) [16])(pFVar33 + 0x50);
                local_888 = *(undefined1 (*) [16])(pFVar33 + 0x60);
                local_878 = *(undefined4 *)(pFVar33 + 0x70);
                uStack_874 = *(undefined4 *)(pFVar33 + 0x74);
                uStack_870 = *(undefined4 *)(pFVar33 + 0x78);
                uStack_86c = *(undefined4 *)(pFVar33 + 0x7c);
                local_868 = *(ulonglong *)(pFVar33 + 0x80);
                cVar24 = (char)local_868;
LAB_14e003c4c:
                auVar58 = local_898;
                in_XMM2 = local_888;
                uVar60 = local_878;
                uVar61 = uStack_874;
                uVar62 = uStack_870;
                uVar63 = uStack_86c;
                uVar39 = local_868;
                if ((uchar)local_3c0 == '\0') goto LAB_14e003b4d;
                this = local_8d0;
                if (cVar24 == '\0') goto LAB_14e0039fe;
                if ((double)local_898._0_8_ <= dVar12) {
                  dVar12 = (double)local_898._0_8_;
                }
                if ((double)local_898._8_8_ <= dVar49) {
                  dVar49 = (double)local_898._8_8_;
                }
                if ((double)local_888._0_8_ <= (double)auVar9) {
                  auVar9 = (undefined1  [8])local_888._0_8_;
                }
                if (dVar56 <= (double)local_888._8_8_) {
                  dVar56 = (double)local_888._8_8_;
                }
                if ((double)uVar18 <= (double)CONCAT44(uStack_874,local_878)) {
                  unique0x10004880 = CONCAT44(uStack_874,local_878);
                }
                if ((double)uVar16 <= (double)CONCAT44(uStack_86c,uStack_870)) {
                  uVar16 = CONCAT44(uStack_86c,uStack_870);
                }
                local_3f0._8_8_ = dVar49;
                local_3f0._0_8_ = dVar12;
                auStack_3d8._0_8_ = dVar56;
                local_3e0 = auVar9;
                goto LAB_14e0039f0;
              }
            }
            if (*(int *)(pFVar1 + (longlong)(int)uVar36 * 2000 + 0xc) != 0) {
              if ((uchar)local_3c0 == '\0') {
                if (pFVar1[(longlong)(int)uVar36 * 2000 + 0x58] != (FScriptContainerElement)0x0) {
                  local_3f0 = *(undefined1 (*) [16])(pFVar1 + (longlong)(int)uVar36 * 2000 + 0x28);
                  dVar12 = local_3f0._0_8_;
                  uVar47 = local_3f0._8_4_;
                  uVar48 = local_3f0._12_4_;
                  _local_3e0 = *(undefined1 (*) [16])(pFVar1 + (longlong)(int)uVar36 * 2000 + 0x38);
                  uVar53 = local_3e0._8_4_;
                  uVar54 = local_3e0._12_4_;
                  unique0x0000d600 =
                       *(undefined1 (*) [16])(pFVar1 + (longlong)(int)uVar36 * 2000 + 0x48);
                  dVar56 = local_3e0._8_8_;
                  uVar16 = auStack_3d8._16_8_;
                  dVar49 = local_3f0._8_8_;
                  auVar9 = local_3e0;
                  in_XMM2 = unique0x0000d600;
                  uVar18 = auStack_3d8._8_8_;
                  local_3c0 = *(ulonglong *)(pFVar1 + (longlong)(int)uVar36 * 2000 + 0x58);
                }
              }
              else if (pFVar1[(longlong)(int)uVar36 * 2000 + 0x58] != (FScriptContainerElement)0x0)
              {
                local_3f0._8_8_ = *(double *)(pFVar1 + (longlong)(int)uVar36 * 2000 + 0x30);
                if (dVar49 <= *(double *)(pFVar1 + (longlong)(int)uVar36 * 2000 + 0x30)) {
                  local_3f0._8_8_ = dVar49;
                }
                if (*(double *)(pFVar1 + (longlong)(int)uVar36 * 2000 + 0x28) <= dVar12) {
                  dVar12 = *(double *)(pFVar1 + (longlong)(int)uVar36 * 2000 + 0x28);
                }
                local_3e0 = (undefined1  [8])
                            *(double *)(pFVar1 + (longlong)(int)uVar36 * 2000 + 0x38);
                if ((double)auVar9 <= *(double *)(pFVar1 + (longlong)(int)uVar36 * 2000 + 0x38)) {
                  local_3e0 = auVar9;
                }
                uVar47 = 0;
                uVar48 = 0;
                auStack_3d8._0_8_ = *(double *)(pFVar1 + (longlong)(int)uVar36 * 2000 + 0x40);
                if (*(double *)(pFVar1 + (longlong)(int)uVar36 * 2000 + 0x40) <= dVar56) {
                  auStack_3d8._0_8_ = dVar56;
                }
                uVar53 = 0;
                uVar54 = 0;
                local_3f0._0_8_ = dVar12;
                unique0x10004350 = *(double *)(pFVar1 + (longlong)(int)uVar36 * 2000 + 0x48);
                if (*(double *)(pFVar1 + (longlong)(int)uVar36 * 2000 + 0x48) <= (double)uVar18) {
                  unique0x10004358 = uVar18;
                }
                uStack_3c8 = *(double *)(pFVar1 + (longlong)(int)uVar36 * 2000 + 0x50);
                if (*(double *)(pFVar1 + (longlong)(int)uVar36 * 2000 + 0x50) <= (double)uVar16) {
                  uStack_3c8 = uVar16;
                }
                auVar9 = local_3e0;
                dVar49 = (double)local_3f0._8_8_;
                uVar18 = unique0x10001f41;
                uVar16 = uStack_3c8;
                dVar56 = (double)auStack_3d8._0_8_;
              }
            }
          }
        }
LAB_14e0039fe:
        uVar36 = uVar36 + 1;
      } while (uVar36 < uVar38);
      local_8c8._8_4_ = uVar47;
      local_8c8._0_8_ = dVar49;
      local_8c8._12_4_ = uVar48;
      local_8b8._8_4_ = uVar53;
      local_8b8._0_8_ = auVar9;
      local_8b8._12_4_ = uVar54;
      param_1 = local_8a0;
      __return_storage_ptr__ = local_7b8;
    }
    else {
      pTVar29 = FGroomCacheBuffers::GetBoundingBox(this_01,&local_2a0);
      local_3f0 = *(undefined1 (*) [16])&(pTVar29->Min).field0_0x0;
      uVar48 = local_3f0._8_4_;
      uVar60 = local_3f0._12_4_;
      _local_3e0 = *(undefined1 (*) [16])((longlong)&(pTVar29->Min).field0_0x0 + 0x10);
      uVar47 = local_3e0._0_4_;
      uVar53 = local_3e0._4_4_;
      uVar54 = local_3e0._8_4_;
      uVar61 = local_3e0._12_4_;
      in_XMM2 = *(undefined1 (*) [16])((longlong)&(pTVar29->Max).field0_0x0 + 8);
      local_3c0._0_1_ = pTVar29->IsValid;
      local_3c0._1_1_ = pTVar29->Pad[0];
      local_3c0._2_1_ = pTVar29->Pad[1];
      local_3c0._3_1_ = pTVar29->Pad[2];
      local_3c0._4_1_ = pTVar29->Pad[3];
      local_3c0._5_1_ = pTVar29->Pad[4];
      local_3c0._6_1_ = pTVar29->Pad[5];
      local_3c0._7_1_ = pTVar29->Pad[6];
      uStack_3c8 = in_XMM2._8_8_;
      unique0x100025de = in_XMM2._0_8_;
      uVar62 = uVar48;
      uVar63 = uVar60;
      auVar58 = in_XMM2;
LAB_14e003e2f:
      stack0xfffffffffffffc30 = auVar58;
      dVar49 = (double)CONCAT44(uVar60,uVar48);
      local_8c8._8_4_ = uVar62;
      local_8c8._0_8_ = dVar49;
      local_8c8._12_4_ = uVar63;
      auVar9 = (undefined1  [8])CONCAT44(uVar53,uVar47);
      local_8b8._8_4_ = uVar54;
      local_8b8._0_8_ = auVar9;
      local_8b8._12_4_ = uVar61;
      dVar12 = (double)local_3f0._0_8_;
      uVar18 = unique0x100025d6;
      uVar16 = uStack_3c8;
      dVar56 = (double)auStack_3d8._0_8_;
    }
    this_02 = (USkinnedMeshComponent *)this->RegisteredMeshComponent;
    if (this_02 == (USkinnedMeshComponent *)0x0) {
LAB_14e004589:
      pTVar31 = UE::Math::TTransform<double>::ToMatrixWithScale(param_1,&local_168);
      UE::Math::TBox<double>::TransformBy
                ((TBox<double> *)local_3f0,(TBox<double> *)&local_310._s_0,pTVar31);
      local_2f0 = local_2f0 - local_310._s_0.Y;
      local_2f8 = local_2f8 - local_310._s_0.X;
      local_2e8 = local_2e8 - local_310._s_0.Z;
      dVar56 = local_2f0 * __real_3fe0000000000000;
      dVar12 = local_2f8 * __real_3fe0000000000000;
      dVar49 = local_2e8 * __real_3fe0000000000000;
      (__return_storage_ptr__->Origin).field0_0x0._s_0.X = dVar12 + local_310._s_0.X;
      (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = dVar56 + local_310._s_0.Y;
      auVar4._8_4_ = SUB84(dVar12,0);
      auVar4._0_8_ = dVar49 + local_310._s_0.Z;
      auVar4._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
      *(undefined1 (*) [16])((longlong)&(__return_storage_ptr__->Origin).field0_0x0 + 0x10) = auVar4
      ;
      dVar12 = (local_2f0 * local_2f0 + local_2f8 * local_2f8 + local_2e8 * local_2e8) *
               __real_3fd0000000000000;
      (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y = dVar56;
      (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z = dVar49;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = dVar12;
      auVar58 = sqrtpd(in_XMM2,auVar10);
      dVar55 = auVar58._0_8_;
    }
    else if (GHairStrands_BoundsMode == 1) {
      dVar74 = __real_3ff0000000000000 / *(double *)&this->field_0x188;
      dVar56 = __real_3ff0000000000000 / *(double *)&this->field_0x178;
      dVar12 = __real_3ff0000000000000 / *(double *)&this->field_0x180;
      pdVar30 = (double *)(**(code **)(this_02->_padding_ + 0x598))(this_02,local_5b8,param_1);
      dVar49 = (pdVar30[1] - pdVar30[4]) * dVar12;
      dVar55 = (*pdVar30 - pdVar30[3]) * dVar56;
      dVar15 = (pdVar30[4] + pdVar30[1]) * dVar12 - dVar49;
      dVar12 = (pdVar30[2] - pdVar30[5]) * dVar74;
      dVar13 = (pdVar30[3] + *pdVar30) * dVar56 - dVar55;
      dVar50 = dVar15 * __real_3fe0000000000000;
      dVar74 = (pdVar30[5] + pdVar30[2]) * dVar74 - dVar12;
      dVar56 = dVar13 * __real_3fe0000000000000;
      dVar49 = dVar50 + dVar49;
      dVar65 = dVar74 * __real_3fe0000000000000;
      dVar74 = (dVar15 * dVar15 + dVar13 * dVar13 + dVar74 * dVar74) * __real_3fd0000000000000;
      auVar5._8_4_ = SUB84(dVar49,0);
      auVar5._0_8_ = dVar56 + dVar55;
      auVar5._12_4_ = (int)((ulonglong)dVar49 >> 0x20);
      *(undefined1 (*) [16])&(__return_storage_ptr__->Origin).field0_0x0 = auVar5;
      auVar3._8_4_ = SUB84(dVar56,0);
      auVar3._0_8_ = dVar65 + dVar12;
      auVar3._12_4_ = (int)((ulonglong)dVar56 >> 0x20);
      *(undefined1 (*) [16])((longlong)&(__return_storage_ptr__->Origin).field0_0x0 + 0x10) = auVar3
      ;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = dVar74;
      auVar58 = sqrtpd(in_XMM2,auVar14);
      dVar55 = auVar58._0_8_;
      (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y = dVar50;
      (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z = dVar65;
    }
    else {
      if (GHairStrands_BoundsMode == 2) {
        dVar50 = __real_3ff0000000000000 / *(double *)&this->field_0x188;
        dVar49 = __real_3ff0000000000000 / *(double *)&this->field_0x178;
        dVar74 = __real_3ff0000000000000 / *(double *)&this->field_0x180;
        pdVar30 = (double *)
                  (**(code **)(this_02->_padding_ + 0x598))
                            (this_02,local_548,&UE::Math::TTransform<double>::Identity);
        dVar55 = ((double)uVar18 - (double)local_8c8._0_8_) * __real_3fe0000000000000;
        local_350 = 1;
        dVar56 = (dVar56 - dVar12) * __real_3fe0000000000000;
        dVar12 = ((double)uVar16 - (double)local_8b8._0_8_) * __real_3fe0000000000000;
        if (dVar55 <= dVar56) {
          dVar55 = dVar56;
        }
        if (dVar55 <= dVar12) {
          dVar55 = dVar12;
        }
        if (dVar55 <= 0.0) {
          dVar55 = 0.0;
        }
        local_358 = (double)(float)dVar55;
        local_380._s_0.X = (*pdVar30 - pdVar30[3]) * dVar49 - local_358;
        local_368 = (pdVar30[3] + *pdVar30) * dVar49 + local_358;
        local_380._s_0.Y = (pdVar30[1] - pdVar30[4]) * dVar74 - local_358;
        local_360 = (pdVar30[4] + pdVar30[1]) * dVar74 + local_358;
        local_380._s_0.Z = (pdVar30[2] - pdVar30[5]) * dVar50 - local_358;
        local_358 = (pdVar30[5] + pdVar30[2]) * dVar50 + local_358;
        pTVar31 = UE::Math::TTransform<double>::ToMatrixWithScale(param_1,&local_268);
        UE::Math::TBox<double>::TransformBy((TBox<double> *)&local_380._s_0,&local_2d8,pTVar31);
        pTVar27 = UE::Math::TBoxSphereBounds<double,double>::TBoxSphereBounds<double,double>
                            (&local_510,&local_2d8);
        dVar49 = (pTVar27->Origin).field0_0x0._s_0.Y;
        (__return_storage_ptr__->Origin).field0_0x0._s_0.X = (pTVar27->Origin).field0_0x0._s_0.X;
        (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = dVar49;
        dVar49 = (pTVar27->BoxExtent).field0_0x0._s_0.X;
        (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = (pTVar27->Origin).field0_0x0._s_0.Z;
        (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X = dVar49;
        dVar49 = (pTVar27->BoxExtent).field0_0x0._s_0.Z;
        (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y =
             (pTVar27->BoxExtent).field0_0x0._s_0.Y;
        (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z = dVar49;
        __return_storage_ptr__->SphereRadius = pTVar27->SphereRadius;
        goto LAB_14e004802;
      }
      if (1 < (this->AttachmentName).Data.ArrayNum) goto LAB_14e004589;
      fVar76 = 0.0;
      pUVar32 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
      dVar50 = __real_3fe0000000000000;
      iVar25 = (int)pUVar32->_padding_;
      if ((*(int *)(this_02->_padding_ + 0x38) < iVar25) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_02->_padding_ + 0x30) + (longlong)iVar25 * 8) !=
          &pUVar32->_padding_)) {
        this_02 = (USkinnedMeshComponent *)0x0;
      }
      if (this_02 != (USkinnedMeshComponent *)0x0) {
        USkinnedMeshComponent::GetPreSkinnedLocalBounds
                  (this_02,(TBoxSphereBounds<double,double> *)&local_7b0._s_0);
        dVar55 = (double)uVar18 - dVar49;
        dVar56 = dVar56 - dVar12;
        dVar74 = (double)uVar16 - (double)auVar9;
        local_750 = dVar74 * dVar50;
        local_760 = dVar56 * dVar50;
        local_778._s_0.Z = (double)auVar9 + local_750;
        local_758 = dVar55 * dVar50;
        local_778._s_0.X = dVar12 + local_760;
        local_778._s_0.Y = dVar49 + local_758;
        local_748 = SQRT((dVar55 * dVar55 + dVar56 * dVar56 + dVar74 * dVar74) *
                         __real_3fd0000000000000);
        UE::Math::TBoxSphereBounds<double,double>::operator+
                  ((TBoxSphereBounds<double,double> *)&local_7b0._s_0,
                   (TBoxSphereBounds<double,double> *)&local_740._s_0,
                   (TBoxSphereBounds<double,double> *)&local_778._s_0);
        dVar56 = (local_7b0._s_0.Y - local_790) - (local_740._s_0.Y - local_720);
        dVar12 = (local_720 + local_740._s_0.Y) - (local_790 + local_7b0._s_0.Y);
        dVar50 = (local_7b0._s_0.X - local_798) - (local_740._s_0.X - local_728);
        dVar49 = (local_740._s_0.X + local_728) - (local_7b0._s_0.X + local_798);
        if (dVar56 <= dVar50) {
          dVar56 = dVar50;
        }
        dVar55 = (local_7b0._s_0.Z - local_788) - (local_740._s_0.Z - local_718);
        dVar50 = (local_718 + local_740._s_0.Z) - (local_788 + local_7b0._s_0.Z);
        if (dVar12 <= dVar49) {
          dVar12 = dVar49;
        }
        if (dVar56 <= dVar55) {
          dVar56 = dVar55;
        }
        if (dVar12 <= dVar50) {
          dVar12 = dVar50;
        }
        if (dVar56 <= 0.0) {
          dVar56 = 0.0;
        }
        if (dVar56 <= dVar12) {
          dVar56 = dVar12;
        }
        fVar76 = (float)dVar56;
      }
      dVar49 = __real_3ff0000000000000 / *(double *)&this->field_0x188;
      dVar12 = __real_3ff0000000000000 / *(double *)&this->field_0x178;
      dVar50 = __real_3ff0000000000000 / *(double *)&this->field_0x180;
      pdVar30 = (double *)
                (**(code **)(this->RegisteredMeshComponent->_padding_ + 0x598))
                          (this->RegisteredMeshComponent,local_4d8,
                           &UE::Math::TTransform<double>::Identity);
      local_8a8 = (double)fVar76;
      local_387[0] = '\0';
      local_387[1] = '\0';
      local_387[2] = '\0';
      local_387[3] = '\0';
      local_387[4] = '\0';
      local_387[5] = '\0';
      local_387[6] = '\0';
      local_388 = '\x01';
      dStack_3a0 = (*pdVar30 - pdVar30[3]) * dVar12 - local_8a8;
      local_398 = (pdVar30[1] - pdVar30[4]) * dVar50 - local_8a8;
      dVar56 = dVar12 * (*pdVar30 + pdVar30[3]) + local_8a8;
      dVar50 = dVar50 * (pdVar30[1] + pdVar30[4]) + local_8a8;
      dVar12 = dVar49 * (pdVar30[2] + pdVar30[5]) + local_8a8;
      local_8a8 = (pdVar30[2] - pdVar30[5]) * dVar49 - local_8a8;
      auVar59._8_4_ = SUB84(local_398,0);
      auVar59._0_8_ = dStack_3a0;
      auVar59._12_4_ = (int)((ulonglong)local_398 >> 0x20);
      if (dVar56 <= dStack_3a0) {
        auVar59._0_8_ = dVar56;
      }
      local_3b8._8_8_ = local_398;
      if (dVar50 <= local_398) {
        local_3b8._8_8_ = dVar50;
      }
      if (local_398 <= dVar50) {
        local_398 = dVar50;
      }
      if (dStack_3a0 <= dVar56) {
        dStack_3a0 = dVar56;
      }
      local_3b8._16_8_ = local_8a8;
      if (dVar12 <= local_8a8) {
        local_3b8._16_8_ = dVar12;
      }
      local_3b8._0_8_ = auVar59._0_8_;
      uStack_390 = local_8a8;
      if (local_8a8 <= dVar12) {
        uStack_390 = dVar12;
      }
      pTVar31 = UE::Math::TTransform<double>::ToMatrixWithScale(param_1,&local_1e8);
      UE::Math::TBox<double>::TransformBy
                ((TBox<double> *)local_3b8,(TBox<double> *)&local_348._s_0,pTVar31);
      local_330 = local_330 - local_348._s_0.X;
      local_328 = local_328 - local_348._s_0.Y;
      local_320 = local_320 - local_348._s_0.Z;
      dVar12 = local_330 * __real_3fe0000000000000;
      dVar49 = local_320 * __real_3fe0000000000000;
      dVar56 = local_328 * __real_3fe0000000000000;
      auVar75._0_8_ =
           (local_328 * local_328 + local_330 * local_330 + local_320 * local_320) *
           __real_3fd0000000000000;
      auVar75._8_8_ = 0;
      (__return_storage_ptr__->Origin).field0_0x0._s_0.X = dVar12 + local_348._s_0.X;
      (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = dVar56 + local_348._s_0.Y;
      auVar6._8_4_ = SUB84(dVar12,0);
      auVar6._0_8_ = dVar49 + local_348._s_0.Z;
      auVar6._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
      *(undefined1 (*) [16])((longlong)&(__return_storage_ptr__->Origin).field0_0x0 + 0x10) = auVar6
      ;
      auVar58 = sqrtpd(auVar59,auVar75);
      dVar55 = auVar58._0_8_;
      (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y = dVar56;
      (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z = dVar49;
    }
  }
  __return_storage_ptr__->SphereRadius = dVar55;
LAB_14e004802:
  dVar12 = (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y;
  dVar56 = (double)*(float *)&this->field_0x324;
  dVar49 = (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X =
       (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X * dVar56;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y = dVar12 * dVar56;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z = dVar56 * dVar49;
  __return_storage_ptr__->SphereRadius =
       (double)*(float *)&this->field_0x324 * __return_storage_ptr__->SphereRadius;
  return __return_storage_ptr__;
}

// CheckHairStrandsUsage @ 14e004c30

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UGroomComponent::CheckHairStrandsUsage(UGroomComponent *this,int param_1)

{
  UGroomAsset *this_00;
  code *pcVar1;
  bool bVar2;
  char cVar3;
  UMaterialInterface *this_01;
  TArray<FHairGroupsMaterial,TSizedDefaultAllocator<32>_> *pTVar4;
  uint uVar5;
  UMaterialInterface *pUVar6;
  FString local_18;
  
  this_01 = UMeshComponent::GetMaterial((UMeshComponent *)this,param_1);
  pUVar6 = this_01;
  if (this_01 == (UMaterialInterface *)0x0) {
    this_00 = (this->GroomAsset).field0_0x0.DebugPtr;
    if ((this_00 != (UGroomAsset *)0x0) &&
       (pTVar4 = UGroomAsset::GetHairGroupsMaterials(this_00), param_1 < pTVar4->ArrayNum)) {
      pTVar4 = UGroomAsset::GetHairGroupsMaterials((this->GroomAsset).field0_0x0.DebugPtr);
      uVar5 = 0;
      if (param_1 < pTVar4->ArrayNum) {
        uVar5 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pUVar6 = *(UMaterialInterface **)((pTVar4->AllocatorInstance).Data + (longlong)param_1 * 0x10)
      ;
      if (pUVar6 != (UMaterialInterface *)0x0) goto LAB_14e004ce0;
    }
  }
  else {
LAB_14e004ce0:
    cVar3 = (**(code **)(pUVar6->_padding_ + 0x378))(pUVar6,0xf);
    this_01 = pUVar6;
    if (cVar3 != '\0') {
      bVar2 = true;
      goto LAB_14e004cfb;
    }
  }
  bVar2 = false;
LAB_14e004cfb:
  if ((((this_01 == (UMaterialInterface *)0x0) || (!bVar2)) && (2 < (byte)LogHairStrands._0_1_)) &&
     ((this_01 != (UMaterialInterface *)0x0 && (!bVar2)))) {
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this_01,&local_18,(UObject *)0x0);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHairStrands);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// CollectPSOPrecacheData @ 14e005050

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UGroomComponent::CollectPSOPrecacheData
          (UGroomComponent *this,FPSOPrecacheParams *param_1,
          TArray<FMaterialInterfacePSOPrecacheParams,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  int *piVar1;
  EHairGeometryType EVar2;
  UGroomAsset *this_00;
  ForElementType<FMaterialInterfacePSOPrecacheParams> FVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  UMaterialInterface *pUVar10;
  ulonglong uVar11;
  int iVar12;
  ForElementType<FMaterialInterfacePSOPrecacheParams> FVar13;
  ulong64 uVar14;
  ForElementType<FPSOPrecacheVertexFactoryData> _Dst;
  FScriptContainerElement *pFVar15;
  FHairVertexFactoryTypesPerMaterialData *pFVar16;
  undefined1 *puVar17;
  ForElementType<FPSOPrecacheVertexFactoryData> _Src;
  undefined1 local_res20 [8];
  TArray<FHairVertexFactoryTypesPerMaterialData,TSizedDefaultAllocator<32>_> local_50;
  
  this_00 = (this->GroomAsset).field0_0x0.DebugPtr;
  if (this_00 != (UGroomAsset *)0x0) {
    UGroomAsset::CollectVertexFactoryTypesPerMaterialData(this_00,&local_50,GMaxRHIShaderPlatform);
    iVar5 = local_50.ArrayNum;
    uVar11 = (ulonglong)local_50.ArrayNum;
    uVar14 = (param_1->field0_0x0).Data;
    pFVar16 = (FHairVertexFactoryTypesPerMaterialData *)
              (local_50.AllocatorInstance.Data + uVar11 * 0x38);
    pFVar15 = local_50.AllocatorInstance.Data + 4;
    while( true ) {
      if (local_50.ArrayNum != (uint)uVar11) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<FHairVertexFactoryTypesPerMaterialData,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res20);
      }
      if ((FHairVertexFactoryTypesPerMaterialData *)(pFVar15 + -4) == pFVar16) break;
      iVar7 = (int)((FHairVertexFactoryTypesPerMaterialData *)(pFVar15 + -4))->MaterialIndex;
      iVar12 = 0;
      if (iVar7 != -1) {
        iVar12 = iVar7;
      }
      pUVar10 = GetMaterial(this,iVar12,*(EHairGeometryType *)pFVar15,true);
      if (pUVar10 != (UMaterialInterface *)0x0) {
        if (*(EHairGeometryType *)pFVar15 == Strands) {
          bVar6 = GetHairStrandsUsesTriangleStrips();
          if (!bVar6) goto LAB_14e005125;
          uVar11 = 1;
        }
        else {
LAB_14e005125:
          uVar11 = 0;
        }
        uVar8 = param_2->ArrayNum;
        uVar14 = uVar14 & 0xffffffffffffffc0 | uVar11;
        if (uVar8 == param_2->ArrayMax) {
          uVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FMaterialInterfacePSOPrecacheParams>_>
                            (0x848,&param_2->AllocatorInstance,&param_2->ArrayMax);
        }
        param_2->ArrayNum = uVar8 + 1;
        FVar3 = (param_2->AllocatorInstance).SecondaryData;
        FVar13 = (ForElementType<FMaterialInterfacePSOPrecacheParams>)param_2;
        if (FVar3 != (ForElementType<FMaterialInterfacePSOPrecacheParams>)0x0) {
          FVar13 = FVar3;
        }
        DefaultConstructItems<FMaterialInterfacePSOPrecacheParams,int>
                  ((void *)((longlong)(int)uVar8 * 0x48 + (longlong)FVar13),1);
        uVar9 = 0;
        if ((int)uVar8 < param_2->ArrayNum) {
          uVar9 = ~uVar8 >> 0x1f;
        }
        if (uVar9 == 0) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar6) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        FVar3 = (param_2->AllocatorInstance).SecondaryData;
        FVar13 = (ForElementType<FMaterialInterfacePSOPrecacheParams>)param_2;
        if (FVar3 != (ForElementType<FMaterialInterfacePSOPrecacheParams>)0x0) {
          FVar13 = FVar3;
        }
        puVar17 = (undefined1 *)((longlong)FVar13 + (longlong)(int)uVar8 * 0x48);
        _Dst = (ForElementType<FPSOPrecacheVertexFactoryData>)((longlong)puVar17 + 0x18);
        *(UMaterialInterface **)(puVar17 + 8) = pUVar10;
        if (_Dst != (ForElementType<FPSOPrecacheVertexFactoryData>)((longlong)pFVar15 + 4)) {
          piVar1 = (int *)(puVar17 + 0x44);
          EVar2 = *(EHairGeometryType *)(pFVar15 + 0x2c);
          _Src = (ForElementType<FPSOPrecacheVertexFactoryData>)((longlong)pFVar15 + 4);
          if (*(ForElementType<FPSOPrecacheVertexFactoryData> *)(pFVar15 + 0x24) !=
              (ForElementType<FPSOPrecacheVertexFactoryData>)0x0) {
            _Src = *(ForElementType<FPSOPrecacheVertexFactoryData> *)(pFVar15 + 0x24);
          }
          *(EHairGeometryType *)(puVar17 + 0x40) = EVar2;
          if ((EVar2 == Strands) && (*piVar1 == 0)) {
            *piVar1 = 2;
          }
          else {
            UE::Core::Private::
            ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FPSOPrecacheVertexFactoryData>_>
                      (0x10,8,EVar2,*piVar1,(ForElementType<FPSOPrecacheVertexFactoryData> *)_Dst,
                       EVar2,piVar1);
            if (*(ForElementType<FPSOPrecacheVertexFactoryData> *)(puVar17 + 0x38) !=
                (ForElementType<FPSOPrecacheVertexFactoryData>)0x0) {
              _Dst = *(ForElementType<FPSOPrecacheVertexFactoryData> *)(puVar17 + 0x38);
            }
            if (EVar2 != Strands) {
              memcpy((void *)_Dst,(void *)_Src,(longlong)(int)EVar2 << 4);
            }
          }
        }
        *(ulong64 *)(puVar17 + 0x10) = uVar14;
        *puVar17 = 1;
      }
      uVar11 = (ulonglong)(uint)iVar5;
      pFVar15 = pFVar15 + 0x38;
    }
    DestructItems<FHairVertexFactoryTypesPerMaterialData,int>
              ((FHairVertexFactoryTypesPerMaterialData *)local_50.AllocatorInstance.Data,
               local_50.ArrayNum);
    if ((FHairVertexFactoryTypesPerMaterialData *)local_50.AllocatorInstance.Data !=
        (FHairVertexFactoryTypesPerMaterialData *)0x0) {
      FMemory::Free(local_50.AllocatorInstance.Data);
    }
  }
  return;
}

// CreateHairSimulation @ 14e005d60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall UGroomComponent::CreateHairSimulation(UGroomComponent *this,int param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UGroomAsset *this_00;
  FName FVar3;
  UActorComponent *this_01;
  FScriptContainerElement *pFVar4;
  USceneComponent *this_02;
  UNiagaraComponent *this_03;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  TArray<FHairGroupsPhysics,TSizedDefaultAllocator<32>_> *pTVar8;
  TArray<FHairGroupsLOD,TSizedDefaultAllocator<32>_> *pTVar9;
  void *pvVar10;
  FName *pFVar11;
  UClass *pUVar12;
  UObject *pUVar13;
  UWorld *pUVar14;
  UNiagaraSystem *pUVar15;
  uint uVar16;
  longlong *plVar17;
  uint uVar18;
  longlong lVar19;
  undefined1 auStackY_9f8 [32];
  FName local_9a0;
  wchar_t *local_998;
  undefined8 uStack_990;
  wchar_t *local_988;
  undefined8 uStack_980;
  wchar_t *local_978;
  int iStack_970;
  undefined4 uStack_96c;
  wchar_t *local_968;
  int iStack_960;
  undefined4 uStack_95c;
  FName local_958 [2];
  TStringView<wchar_t> local_948;
  TStringView<wchar_t> local_938;
  TStringView<wchar_t> local_928;
  TStringView<wchar_t> local_918;
  undefined1 local_908 [128];
  TStringBuilderBase<wchar_t> local_888;
  wchar_t local_868 [1035];
  wchar_t local_52 [5];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_9f8;
  lVar19 = (longlong)param_1;
  if ((this->NiagaraComponents).ArrayNum <= param_1) {
    return;
  }
  uVar18 = (uint)~param_1 >> 0x1f;
  uVar7 = 0;
  if (param_1 < (this->NiagaraComponents).ArrayNum) {
    uVar7 = uVar18;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  this_00 = (this->GroomAsset).field0_0x0.DebugPtr;
  pFVar1 = (this->NiagaraComponents).AllocatorInstance.Data + lVar19 * 8;
  if ((this_00 == (UGroomAsset *)0x0) ||
     (pTVar8 = UGroomAsset::GetHairGroupsPhysics(this_00), pTVar8->ArrayNum <= param_1)) {
LAB_14e0063aa:
    this_03 = *(UNiagaraComponent **)pFVar1;
    if ((this_03 != (UNiagaraComponent *)0x0) && ((this_03->_padding_ & 0x40000000) == 0)) {
      UNiagaraComponent::SetAsset(this_03,(UNiagaraSystem *)0x0,true);
      (**(code **)(**(longlong **)pFVar1 + 0xaf8))();
    }
    return;
  }
  pTVar9 = UGroomAsset::GetHairGroupsLOD((this->GroomAsset).field0_0x0.DebugPtr);
  uVar7 = 0;
  if (param_1 < pTVar9->ArrayNum) {
    uVar7 = uVar18;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((*(int *)((pTVar9->AllocatorInstance).Data + lVar19 * 0x18 + 0x10) <= param_2) ||
     (bVar6 = IsSimulationEnable(this,param_1,param_2), !bVar6)) goto LAB_14e0063aa;
  if (*(longlong *)pFVar1 == 0) {
    local_888.Base = local_868;
    local_888.bIsDynamic = false;
    local_888.bIsExternal = false;
    local_888.CurPos = local_868;
    local_888.End = local_52;
    pvVar10 = FGenericPlatformString::Memcpy(local_868,L"NiagaraComponent_",0x22);
    local_888.CurPos = (wchar_t *)((longlong)pvVar10 + 0x22);
    local_9a0.ComparisonIndex.Value = *(uint *)&this->field_0x18;
    local_9a0.Number = *(uint *)&this->field_0x1c;
    ::FName::AppendString(&local_9a0,&local_888);
    TStringBuilderBase<wchar_t>::AppendfImpl(&local_888,L"_%d_%d");
    if (local_888.End < local_888.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_888,1);
    }
    *local_888.CurPos = L'\0';
    pFVar11 = ::FName::FName(local_958,local_888.Base);
    FVar3 = *pFVar11;
    if (FVar3 == (FName)0x0) {
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)this,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
    }
    pUVar12 = Z_Construct_UClass_UNiagaraComponent_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_908,pUVar12);
    local_908._48_8_ = (FObjectInstancingGraph *)0x0;
    local_908._56_8_ = (UPackage *)0x0;
    local_908._24_4_ = RF_Transient;
    local_908._40_8_ = (UObject *)0x0;
    local_908[0x20] = false;
    local_908._8_8_ = this;
    local_908._16_8_ = FVar3;
    pUVar13 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_908);
    if (local_908._64_8_ != 0) {
      plVar17 = (longlong *)(local_908 + 0x50);
      if ((longlong *)local_908._104_8_ != (longlong *)0x0) {
        plVar17 = (longlong *)local_908._104_8_;
      }
      (**(code **)(*plVar17 + 0x10))();
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar13 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar13);
    }
    *(UObject **)pFVar1 = pUVar13;
    pUVar13[10].field_0x19 = pUVar13[10].field_0x19 | 0x20;
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_888);
  }
  if ((*(longlong *)&this->field_0xb0 == 0) &&
     (pUVar14 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
     pUVar14 == (UWorld *)0x0)) {
    return;
  }
  pUVar14 = *(UWorld **)&this->field_0xb0;
  if (pUVar14 == (UWorld *)0x0) {
    pUVar14 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
  }
  if (pUVar14->bIsWorldInitialized == '\0') {
    return;
  }
  plVar17 = *(longlong **)pFVar1;
  if ((*(byte *)(plVar17 + 0x13) & 1) == 0) {
    (**(code **)(*plVar17 + 0x508))
              (plVar17,this,&FAttachmentTransformRules::KeepRelativeTransform,0);
    pUVar14 = *(UWorld **)&this->field_0xb0;
    this_01 = *(UActorComponent **)pFVar1;
    if (pUVar14 == (UWorld *)0x0) {
      pUVar14 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    }
    UActorComponent::RegisterComponentWithWorld(this_01,pUVar14,(FRegisterComponentContext *)0x0);
  }
  if ((this->AngularSpringsSystem).field0_0x0.DebugPtr == (UNiagaraSystem *)0x0) {
    uStack_990._0_4_ = 0;
    uStack_990._4_4_ = 0;
    local_978 = L"/HairStrands/Emitters/StableSpringsSystem.StableSpringsSystem";
    local_998 = (wchar_t *)0x0;
    iStack_970 = 0x3d;
    pUVar12 = Z_Construct_UClass_UNiagaraSystem_NoRegister();
    local_938._12_4_ = uStack_96c;
    local_938.Size = iStack_970;
    local_948.DataPtr = local_998;
    local_948.Size = (int)uStack_990;
    local_948._12_4_ = uStack_990._4_4_;
    local_938.DataPtr = local_978;
    pUVar15 = (UNiagaraSystem *)
              StaticLoadObject(pUVar12,(UObject *)0x0,&local_938,&local_948,0,(UPackageMap *)0x0,
                               true,(FLinkerInstancingContext *)0x0);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar15 != (UNiagaraSystem *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar15);
    }
    (this->AngularSpringsSystem).field0_0x0.DebugPtr = pUVar15;
  }
  if ((this->CosseratRodsSystem).field0_0x0.DebugPtr == (UNiagaraSystem *)0x0) {
    uStack_980._0_4_ = 0;
    uStack_980._4_4_ = 0;
    local_968 = L"/HairStrands/Emitters/StableRodsSystem.StableRodsSystem";
    local_988 = (wchar_t *)0x0;
    iStack_960 = 0x37;
    pUVar12 = Z_Construct_UClass_UNiagaraSystem_NoRegister();
    local_918._12_4_ = uStack_95c;
    local_918.Size = iStack_960;
    local_928.DataPtr = local_988;
    local_928.Size = (int)uStack_980;
    local_928._12_4_ = uStack_980._4_4_;
    local_918.DataPtr = local_968;
    pUVar15 = (UNiagaraSystem *)
              StaticLoadObject(pUVar12,(UObject *)0x0,&local_918,&local_928,0,(UPackageMap *)0x0,
                               true,(FLinkerInstancingContext *)0x0);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar15 != (UNiagaraSystem *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar15);
    }
    (this->CosseratRodsSystem).field0_0x0.DebugPtr = pUVar15;
  }
  pTVar8 = UGroomAsset::GetHairGroupsPhysics((this->GroomAsset).field0_0x0.DebugPtr);
  uVar16 = 0;
  uVar7 = uVar16;
  if (param_1 < pTVar8->ArrayNum) {
    uVar7 = uVar18;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar19 = lVar19 * 0x2e8;
  if ((pTVar8->AllocatorInstance).Data[lVar19 + 2] == (FScriptContainerElement)0x4) {
    pUVar15 = (this->AngularSpringsSystem).field0_0x0.DebugPtr;
  }
  else {
    pTVar8 = UGroomAsset::GetHairGroupsPhysics((this->GroomAsset).field0_0x0.DebugPtr);
    uVar7 = uVar16;
    if (param_1 < pTVar8->ArrayNum) {
      uVar7 = uVar18;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((pTVar8->AllocatorInstance).Data[lVar19 + 2] == (FScriptContainerElement)0x2) {
      pUVar15 = (this->CosseratRodsSystem).field0_0x0.DebugPtr;
    }
    else {
      pTVar8 = UGroomAsset::GetHairGroupsPhysics((this->GroomAsset).field0_0x0.DebugPtr);
      uVar7 = uVar16;
      if (param_1 < pTVar8->ArrayNum) {
        uVar7 = uVar18;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar4 = (pTVar8->AllocatorInstance).Data;
      pUVar15 = (UNiagaraSystem *)
                TPersistentObjectPtr<FSoftObjectPath>::Get
                          ((TPersistentObjectPtr<FSoftObjectPath> *)(pFVar4 + lVar19 + 8));
      if (pUVar15 == (UNiagaraSystem *)0x0) {
        if ((((FSoftObjectPath *)(pFVar4 + lVar19 + 0x10))->AssetPath).PackageName != (FName)0x0) {
          FSoftObjectPath::TryLoad
                    ((FSoftObjectPath *)(pFVar4 + lVar19 + 0x10),(FUObjectSerializeContext *)0x0);
          pUVar15 = (UNiagaraSystem *)
                    TPersistentObjectPtr<FSoftObjectPath>::Get
                              ((TPersistentObjectPtr<FSoftObjectPath> *)(pFVar4 + lVar19 + 8));
          goto LAB_14e0062e5;
        }
      }
      else {
LAB_14e0062e5:
        if (pUVar15 != (UNiagaraSystem *)0x0) {
          pUVar12 = Z_Construct_UClass_UNiagaraSystem_NoRegister();
          iVar2 = (int)pUVar12->_padding_;
          if ((iVar2 <= *(int *)(pUVar15->_padding_ + 0x38)) &&
             ((longlong *)
              *(undefined1 **)(*(longlong *)(pUVar15->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
              &pUVar12->_padding_)) goto LAB_14e006315;
        }
      }
      pUVar15 = (UNiagaraSystem *)0x0;
    }
  }
LAB_14e006315:
  this_02 = *(USceneComponent **)pFVar1;
  if ((this->SimulationSettings).SimulationSetup.bDebugSimulation == false) {
    pTVar8 = UGroomAsset::GetHairGroupsPhysics((this->GroomAsset).field0_0x0.DebugPtr);
    if (param_1 < pTVar8->ArrayNum) {
      uVar16 = uVar18;
    }
    if ((uVar16 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((pTVar8->AllocatorInstance).Data[lVar19 + 0x3c] == (FScriptContainerElement)0x0) {
      bVar6 = false;
      goto LAB_14e006385;
    }
  }
  bVar6 = true;
LAB_14e006385:
  USceneComponent::SetVisibility(this_02,bVar6,DirtyOnly);
  UNiagaraComponent::SetAsset(*(UNiagaraComponent **)pFVar1,pUVar15,true);
  UNiagaraComponent::ReinitializeSystem(*(UNiagaraComponent **)pFVar1);
  return;
}

// CreateRenderState_Concurrent @ 14e007820

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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
UGroomComponent::CreateRenderState_Concurrent
          (UGroomComponent *this,FRegisterComponentContext *param_1)

{
  UMeshDeformerInstance *pUVar1;
  
  pUVar1 = (this->MeshDeformerInstance).field0_0x0.DebugPtr;
  if (pUVar1 != (UMeshDeformerInstance *)0x0) {
    (**(code **)(*(longlong *)pUVar1 + 0x2b0))();
  }
  UPrimitiveComponent::CreateRenderState_Concurrent((UPrimitiveComponent *)this,param_1);
  return;
}

// CreateSceneProxy @ 14e007970

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FPrimitiveSceneProxy * __thiscall UGroomComponent::CreateSceneProxy(UGroomComponent *this)

{
  FScriptContainerElement *pFVar1;
  UGroomAsset *this_00;
  UGroomBindingAsset *pUVar2;
  longlong lVar3;
  char cVar4;
  bool bVar5;
  EPSOPrecacheProxyCreationStrategy EVar6;
  bool bVar7;
  int iVar8;
  TArray<FHairGroupPlatformData,TSizedDefaultAllocator<32>_> *pTVar9;
  FHairStrandsSceneProxy *pFVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res8 [8];
  FString local_28;
  
  this_00 = (this->GroomAsset).field0_0x0.DebugPtr;
  if ((((this_00 != (UGroomAsset *)0x0) &&
       (iVar8 = UGroomAsset::GetNumHairGroups(this_00), iVar8 != 0)) &&
      ((this->HairGroupInstances).ArrayNum != 0)) &&
     ((pUVar2 = (this->BindingAsset).field0_0x0.DebugPtr, pUVar2 == (UGroomBindingAsset *)0x0 ||
      (cVar4 = (**(code **)(pUVar2->_padding_ + 0x10))(&pUVar2->_padding_), cVar4 == '\0')))) {
    bVar5 = UPrimitiveComponent::CheckPSOPrecachingAndBoostPriority
                      ((UPrimitiveComponent *)this,High);
    if ((bVar5) && (EVar6 = GetPSOPrecacheProxyCreationStrategy(), EVar6 == DelayUntilPSOPrecached))
    {
      if (5 < (byte)LogHairStrands._0_1_) {
        UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_28,(UObject *)0x0,None);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogHairStrands);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
      }
    }
    else {
      pTVar9 = UGroomAsset::GetHairGroupsPlatformData((this->GroomAsset).field0_0x0.DebugPtr);
      iVar8 = (this->HairGroupInstances).ArrayNum;
      if (pTVar9->ArrayNum == iVar8) {
        pFVar11 = (this->HairGroupInstances).AllocatorInstance.Data;
        bVar5 = false;
        pFVar1 = pFVar11 + (longlong)iVar8 * 8;
        while( true ) {
          if ((this->HairGroupInstances).ArrayNum != iVar8) {
            `TCheckedPointerIterator<TRefCountPtr<FHairGroupInstance>,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_res8);
          }
          if (pFVar11 == pFVar1) break;
          lVar3 = *(longlong *)pFVar11;
          bVar7 = FHairGroupInstance::FMeshes::IsValid((FMeshes *)(lVar3 + 0x120));
          if (((bVar7) ||
              (bVar7 = FHairGroupInstance::FCards::IsValid((FCards *)(lVar3 + 0x110)), bVar7)) ||
             (*(longlong *)(lVar3 + 0x40) != 0)) {
            bVar5 = true;
            pFVar11 = pFVar11 + 8;
          }
          else {
            pFVar11 = pFVar11 + 8;
          }
        }
        if ((bVar5) && (pFVar10 = ::operator_new(0x2c0), pFVar10 != (FHairStrandsSceneProxy *)0x0))
        {
          pFVar10 = FHairStrandsSceneProxy::FHairStrandsSceneProxy(pFVar10,this);
          return (FPrimitiveSceneProxy *)pFVar10;
        }
      }
    }
  }
  return (FPrimitiveSceneProxy *)0x0;
}

// DestroyRenderState_Concurrent @ 14e00a430

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UGroomComponent::DestroyRenderState_Concurrent(UGroomComponent *this)

{
  UMeshDeformerInstance *pUVar1;
  
  UPrimitiveComponent::DestroyRenderState_Concurrent((UPrimitiveComponent *)this);
  pUVar1 = (this->MeshDeformerInstance).field0_0x0.DebugPtr;
  if (pUVar1 != (UMeshDeformerInstance *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014e00a452. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar1 + 0x2b8))();
    return;
  }
  return;
}

// DetachFromComponent @ 14e00a6b0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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
UGroomComponent::DetachFromComponent(UGroomComponent *this,FDetachmentTransformRules *param_1)

{
  FDetachmentTransformRules local_res10 [6];
  
  local_res10[0] = (FDetachmentTransformRules)((uint)*param_1 & 0xffffff);
  USceneComponent::DetachFromComponent((USceneComponent *)this,local_res10);
  return;
}

// FinishDestroy @ 14e012540

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall UGroomComponent::FinishDestroy(UGroomComponent *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (*(int *)&this->field_0x340 != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SceneData.AttachmentCounter.GetValue() == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\PrimitiveComponent.cpp"
                       ,0x79d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  UObject::FinishDestroy((UObject *)this);
  return;
}

// GetAnimationTime @ 14e013330

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

float __thiscall UGroomComponent::GetAnimationTime(UGroomComponent *this)

{
  return this->ElapsedTime;
}

// GetBestAvailableLOD @ 14e0135c0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

int __thiscall UGroomComponent::GetBestAvailableLOD(UGroomComponent *this)

{
  return 0;
}

// GetDesiredSyncLOD @ 14e014750

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

int __thiscall UGroomComponent::GetDesiredSyncLOD(UGroomComponent *this)

{
  return (int)*(float *)&this->field_0x228;
}

// GetForceRenderedLOD @ 14e015d80

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

int __thiscall UGroomComponent::GetForceRenderedLOD(UGroomComponent *this)

{
  return (int)*(float *)&this->field_0x22c;
}

// GetForceStreamedLOD @ 14e015d90

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

int __thiscall UGroomComponent::GetForceStreamedLOD(UGroomComponent *this)

{
  return -1;
}

// GetForcedLOD @ 14e015da0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

int __thiscall UGroomComponent::GetForcedLOD(UGroomComponent *this)

{
  return (int)this->LODForcedIndex;
}

// GetGroomCacheDuration @ 14e016380

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

float __thiscall UGroomComponent::GetGroomCacheDuration(UGroomComponent *this)

{
  UGroomCache *pUVar1;
  float fVar2;
  
  pUVar1 = (this->GroomCache).field0_0x0.DebugPtr;
  if (pUVar1 != (UGroomCache *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014e016394. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    fVar2 = (float)(**(code **)(pUVar1->_padding_ + 0x10))(&pUVar1->_padding_);
    return fVar2;
  }
  return 0.0;
}

// GetGroupInstance @ 14e016bf0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FHairGroupInstance * __thiscall UGroomComponent::GetGroupInstance(UGroomComponent *this,int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  FHairGroupInstance *pFVar5;
  FHairGroupInstance *pFVar6;
  
  if ((-1 < param_1) && (param_1 < (this->HairGroupInstances).ArrayNum)) {
    if (param_1 < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FHairGroupInstance *)(*pcVar3)();
        return pFVar5;
      }
    }
    pFVar5 = *(FHairGroupInstance **)
              ((this->HairGroupInstances).AllocatorInstance.Data + (longlong)param_1 * 8);
    if (pFVar5 != (FHairGroupInstance *)0x0) {
      LOCK();
      *(int *)&pFVar5->field_0x8 = *(int *)&pFVar5->field_0x8 + 1;
      UNLOCK();
      if (pFVar5 != (FHairGroupInstance *)0x0) {
        puVar1 = &pFVar5->field_0x8;
        LOCK();
        iVar2 = *(int *)puVar1;
        *(int *)puVar1 = *(int *)puVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          pFVar6 = pFVar5;
          if (puVar1 == (undefined1 *)0x0) {
            pFVar6 = (FHairGroupInstance *)0x0;
          }
          if (pFVar6 != (FHairGroupInstance *)0x0) {
            (*(code *)**(undefined8 **)pFVar6)(pFVar6,1);
          }
        }
      }
    }
    return pFVar5;
  }
  return (FHairGroupInstance *)0x0;
}

// GetGuideStrandsDeformedResource @ 14e016cd0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FHairStrandsDeformedResource * __thiscall
UGroomComponent::GetGuideStrandsDeformedResource(UGroomComponent *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FHairStrandsDeformedResource *pFVar4;
  uint uVar5;
  
  uVar5 = (this->HairGroupInstances).ArrayNum;
  if (param_1 < uVar5) {
    uVar3 = 0;
    if ((int)param_1 < (int)uVar5) {
      uVar3 = ~param_1 >> 0x1f;
    }
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FHairStrandsDeformedResource *)(*pcVar1)();
      return pFVar4;
    }
    if (*(longlong *)
         (*(longlong *)
           ((this->HairGroupInstances).AllocatorInstance.Data + (longlong)(int)param_1 * 8) + 0x18)
        != 0) {
      uVar5 = 0;
      if ((int)param_1 < (this->HairGroupInstances).ArrayNum) {
        uVar5 = ~param_1 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FHairStrandsDeformedResource *)(*pcVar1)();
        return pFVar4;
      }
      return *(FHairStrandsDeformedResource **)
              (*(longlong *)
                ((this->HairGroupInstances).AllocatorInstance.Data + (longlong)(int)param_1 * 8) +
              0x20);
    }
  }
  return (FHairStrandsDeformedResource *)0x0;
}

// GetGuideStrandsDeformedRootResource @ 14e016dd0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FHairStrandsDeformedRootResource * __thiscall
UGroomComponent::GetGuideStrandsDeformedRootResource(UGroomComponent *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FHairStrandsDeformedRootResource *pFVar4;
  uint uVar5;
  
  uVar5 = (this->HairGroupInstances).ArrayNum;
  if (param_1 < uVar5) {
    uVar3 = 0;
    if ((int)param_1 < (int)uVar5) {
      uVar3 = ~param_1 >> 0x1f;
    }
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FHairStrandsDeformedRootResource *)(*pcVar1)();
      return pFVar4;
    }
    if (*(longlong *)
         (*(longlong *)
           ((this->HairGroupInstances).AllocatorInstance.Data + (longlong)(int)param_1 * 8) + 0x18)
        != 0) {
      uVar5 = 0;
      if ((int)param_1 < (this->HairGroupInstances).ArrayNum) {
        uVar5 = ~param_1 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FHairStrandsDeformedRootResource *)(*pcVar1)();
        return pFVar4;
      }
      return *(FHairStrandsDeformedRootResource **)
              (*(longlong *)
                ((this->HairGroupInstances).AllocatorInstance.Data + (longlong)(int)param_1 * 8) +
              0x30);
    }
  }
  return (FHairStrandsDeformedRootResource *)0x0;
}

// GetGuideStrandsRestResource @ 14e016ed0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FHairStrandsRestResource * __thiscall
UGroomComponent::GetGuideStrandsRestResource(UGroomComponent *this,uint param_1)

{
  UGroomAsset *this_00;
  code *pcVar1;
  bool bVar2;
  TArray<FHairGroupResources,TSizedDefaultAllocator<32>_> *pTVar3;
  FHairStrandsRestResource *pFVar4;
  uint uVar5;
  
  this_00 = (this->GroomAsset).field0_0x0.DebugPtr;
  if (((this_00 != (UGroomAsset *)0x0) &&
      (pTVar3 = UGroomAsset::GetHairGroupsResources(this_00), -1 < (int)param_1)) &&
     ((int)param_1 < pTVar3->ArrayNum)) {
    pTVar3 = UGroomAsset::GetHairGroupsResources((this->GroomAsset).field0_0x0.DebugPtr);
    uVar5 = 0;
    if ((int)param_1 < pTVar3->ArrayNum) {
      uVar5 = ~param_1 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FHairStrandsRestResource *)(*pcVar1)();
      return pFVar4;
    }
    if (*(longlong *)((pTVar3->AllocatorInstance).Data + (longlong)(int)param_1 * 0x58) != 0) {
      pTVar3 = UGroomAsset::GetHairGroupsResources((this->GroomAsset).field0_0x0.DebugPtr);
      uVar5 = 0;
      if ((int)param_1 < pTVar3->ArrayNum) {
        uVar5 = ~param_1 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FHairStrandsRestResource *)(*pcVar1)();
        return pFVar4;
      }
      return *(FHairStrandsRestResource **)
              ((pTVar3->AllocatorInstance).Data + (longlong)(int)param_1 * 0x58);
    }
  }
  return (FHairStrandsRestResource *)0x0;
}

// GetGuideStrandsRestRootResource @ 14e017000

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FHairStrandsRestRootResource * __thiscall
UGroomComponent::GetGuideStrandsRestRootResource(UGroomComponent *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FHairStrandsRestRootResource *pFVar4;
  uint uVar5;
  
  uVar5 = (this->HairGroupInstances).ArrayNum;
  if (param_1 < uVar5) {
    uVar3 = 0;
    if ((int)param_1 < (int)uVar5) {
      uVar3 = ~param_1 >> 0x1f;
    }
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FHairStrandsRestRootResource *)(*pcVar1)();
      return pFVar4;
    }
    if (*(longlong *)
         (*(longlong *)
           ((this->HairGroupInstances).AllocatorInstance.Data + (longlong)(int)param_1 * 8) + 0x18)
        != 0) {
      uVar5 = 0;
      if ((int)param_1 < (this->HairGroupInstances).ArrayNum) {
        uVar5 = ~param_1 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FHairStrandsRestRootResource *)(*pcVar1)();
        return pFVar4;
      }
      return *(FHairStrandsRestRootResource **)
              (*(longlong *)
                ((this->HairGroupInstances).AllocatorInstance.Data + (longlong)(int)param_1 * 8) +
              0x28);
    }
  }
  return (FHairStrandsRestRootResource *)0x0;
}

// GetIsHairLengthScaleEnabled @ 14e018070

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall UGroomComponent::GetIsHairLengthScaleEnabled(UGroomComponent *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  bool bVar7;
  undefined1 local_res8 [8];
  
  iVar2 = (this->GroomGroupsDesc).ArrayNum;
  pFVar3 = (this->GroomGroupsDesc).AllocatorInstance.Data;
  pFVar5 = pFVar3;
  bVar4 = true;
  while( true ) {
    bVar7 = bVar4;
    if ((this->GroomGroupsDesc).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FHairGroupDesc,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar5 == pFVar3 + (longlong)iVar2 * 0x40) break;
    pFVar6 = pFVar5 + 0x40;
    pFVar1 = pFVar5 + 0x3c;
    pFVar5 = pFVar6;
    bVar4 = false;
    if (*pFVar1 != (FScriptContainerElement)0x0) {
      bVar4 = bVar7;
    }
  }
  return bVar7;
}

// GetManualTick @ 14e018130

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall UGroomComponent::GetManualTick(UGroomComponent *this)

{
  return this->bManualTick;
}

// GetMaterial @ 14e018140

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UMaterialInterface * __thiscall
UGroomComponent::GetMaterial
          (UGroomComponent *this,int param_1,EHairGeometryType param_2,bool param_3)

{
  UGroomAsset *this_00;
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  EShaderPlatform EVar4;
  UMaterialInterface *this_01;
  TArray<FHairGroupsMaterial,TSizedDefaultAllocator<32>_> *pTVar5;
  UMaterialInterface *pUVar6;
  FSceneInterface *pFVar7;
  byte *pbVar8;
  uint uVar9;
  undefined1 local_res20 [8];
  undefined4 local_38;
  uint uStack_34;
  
  this_01 = UMeshComponent::GetMaterial((UMeshComponent *)this,param_1);
  bVar2 = false;
  pUVar6 = this_01;
  if (((this_01 == (UMaterialInterface *)0x0) &&
      (this_00 = (this->GroomAsset).field0_0x0.DebugPtr, this_00 != (UGroomAsset *)0x0)) &&
     (pTVar5 = UGroomAsset::GetHairGroupsMaterials(this_00), param_1 < pTVar5->ArrayNum)) {
    pTVar5 = UGroomAsset::GetHairGroupsMaterials((this->GroomAsset).field0_0x0.DebugPtr);
    uVar9 = 0;
    if (param_1 < pTVar5->ArrayNum) {
      uVar9 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar1 = (code *)swi(3);
      pUVar6 = (UMaterialInterface *)(*pcVar1)();
      return pUVar6;
    }
    pUVar6 = *(UMaterialInterface **)((pTVar5->AllocatorInstance).Data + (longlong)param_1 * 0x10);
    if (pUVar6 != (UMaterialInterface *)0x0) goto LAB_14e018206;
    if (!param_3) {
      return (UMaterialInterface *)0x0;
    }
    bVar3 = true;
LAB_14e01820b:
    bVar2 = bVar3;
    pFVar7 = UActorComponent::GetScene((UActorComponent *)this);
    if (pFVar7 == (FSceneInterface *)0x0) goto LAB_14e018280;
    pFVar7 = UActorComponent::GetScene((UActorComponent *)this);
    EVar4 = FSceneInterface::GetShaderPlatform(pFVar7);
    if (EVar4 == SP_NumPlatforms) goto LAB_14e018280;
    if (this_01 != (UMaterialInterface *)0x0) {
      if ((param_2 == Strands) &&
         (((UMaterialInterface::GetRelevance_Concurrent(this_01,(EShaderPlatform)&local_38),
           CONCAT44(uStack_34,local_38) != 0 && ((uStack_34 & 0x20) == 0)) ||
          ((pbVar8 = (byte *)(**(code **)(this_01->_padding_ + 0x468))(this_01,local_res20),
           (*pbVar8 & 0x80) == 0 || (bVar3 = IsOpaqueOrMaskedBlendMode(this_01), !bVar3))))))
      goto LAB_14e018289;
      goto LAB_14e018280;
    }
  }
  else {
LAB_14e018206:
    this_01 = pUVar6;
    bVar3 = false;
    if (param_3) goto LAB_14e01820b;
LAB_14e018280:
    if (!bVar2) {
      return this_01;
    }
  }
  if (param_2 != Strands) {
    if (param_2 == Cards) {
      return (this->Cards_DefaultMaterial).field0_0x0.DebugPtr;
    }
    if (param_2 != Meshes) {
      return this_01;
    }
    return (this->Meshes_DefaultMaterial).field0_0x0.DebugPtr;
  }
LAB_14e018289:
  return (this->Strands_DefaultMaterial).field0_0x0.DebugPtr;
}

// GetMaterial @ 14e018310

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

UMaterialInterface * __thiscall UGroomComponent::GetMaterial(UGroomComponent *this,int param_1)

{
  EHairGeometryType EVar1;
  UMaterialInterface *pUVar2;
  
  EVar1 = GetMaterialGeometryType(this,param_1);
  pUVar2 = GetMaterial(this,param_1,EVar1,true);
  return pUVar2;
}

// GetMaterialGeometryType @ 14e018350

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

EHairGeometryType __thiscall
UGroomComponent::GetMaterialGeometryType(UGroomComponent *this,int param_1)

{
  int iVar1;
  UGroomAsset *this_00;
  code *pcVar2;
  bool bVar3;
  EShaderPlatform EVar4;
  EHairGeometryType EVar5;
  int iVar6;
  int iVar7;
  FSceneInterface *pFVar8;
  TArray<FHairGroupsRendering,TSizedDefaultAllocator<32>_> *pTVar9;
  TArray<FHairGroupPlatformData,TSizedDefaultAllocator<32>_> *pTVar10;
  TArray<FHairGroupsCardsSourceDescription,TSizedDefaultAllocator<32>_> *pTVar11;
  TArray<FHairGroupsMeshesSourceDescription,TSizedDefaultAllocator<32>_> *pTVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  FScriptContainerElement *pFVar16;
  FScriptContainerElement *pFVar17;
  uint uVar18;
  uint uVar19;
  longlong lVar20;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_68;
  undefined1 local_67 [3];
  uint local_64;
  uint local_60;
  uint local_5c;
  FScriptContainerElement *local_58;
  longlong local_50;
  
  if ((this->GroomAsset).field0_0x0.DebugPtr != (UGroomAsset *)0x0) {
    pFVar8 = UActorComponent::GetScene((UActorComponent *)this);
    if (pFVar8 == (FSceneInterface *)0x0) {
      uVar19 = 0x9b;
    }
    else {
      pFVar8 = UActorComponent::GetScene((UActorComponent *)this);
      EVar4 = FSceneInterface::GetShaderPlatform(pFVar8);
      uVar19 = (uint)EVar4;
    }
    uVar18 = 0;
    local_64 = uVar19;
    pTVar9 = UGroomAsset::GetHairGroupsRendering((this->GroomAsset).field0_0x0.DebugPtr);
    local_5c = pTVar9->ArrayNum;
    if (local_5c != 0) {
      do {
        pTVar10 = UGroomAsset::GetHairGroupsPlatformData((this->GroomAsset).field0_0x0.DebugPtr);
        uVar13 = 0;
        if ((int)uVar18 < pTVar10->ArrayNum) {
          uVar13 = ~uVar18 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          EVar5 = (*pcVar2)();
          return EVar5;
        }
        pFVar17 = (pTVar10->AllocatorInstance).Data + (longlong)(int)uVar18 * 2000;
        local_58 = pFVar17;
        bVar3 = IsHairStrandsEnabled(Strands,(EShaderPlatform)uVar19);
        if (bVar3) {
          this_00 = (this->GroomAsset).field0_0x0.DebugPtr;
          pTVar9 = UGroomAsset::GetHairGroupsRendering(this_00);
          uVar13 = 0;
          if ((int)uVar18 < pTVar9->ArrayNum) {
            uVar13 = ~uVar18 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            EVar5 = (*pcVar2)();
            return EVar5;
          }
          iVar6 = UGroomAsset::GetMaterialIndex
                            (this_00,*(FName *)((pTVar9->AllocatorInstance).Data +
                                               (longlong)(int)uVar18 * 0x30));
          if (iVar6 == param_1) {
            return Strands;
          }
        }
        bVar3 = IsHairStrandsEnabled(Cards,(EShaderPlatform)uVar19);
        if (bVar3) {
          local_60 = *(uint *)(pFVar17 + 0x768);
          uVar14 = (ulonglong)(int)local_60;
          iVar6 = 0;
          lVar20 = *(longlong *)(pFVar17 + 0x760);
          lVar15 = uVar14 * 0x428 + lVar20;
          local_50 = lVar15;
          while( true ) {
            if (*(int *)(pFVar17 + 0x768) != (int)uVar14) {
              local_res18[0] = 0;
              `TCheckedPointerIterator<FHairGroupPlatformData::FCards::FLOD_const_,int,0>::
              operator!='::__l2::<lambda_1>::operator()(local_res18);
            }
            uVar19 = local_64;
            if (lVar20 == lVar15) break;
            if (0 < *(int *)(lVar20 + 0x28)) {
              iVar7 = -1;
              pTVar11 = UGroomAsset::GetHairGroupsCards((this->GroomAsset).field0_0x0.DebugPtr);
              iVar1 = pTVar11->ArrayNum;
              pFVar17 = (pTVar11->AllocatorInstance).Data;
              pFVar16 = pFVar17 + (longlong)iVar1 * 0xa0;
              while( true ) {
                if (pTVar11->ArrayNum != iVar1) {
                  local_res20[0] = 0;
                  `TCheckedPointerIterator<FHairGroupsCardsSourceDescription,int,0>::operator!='::
                  __l2::<lambda_1>::operator()(local_res20);
                }
                if (pFVar17 == pFVar16) goto LAB_14e0185b6;
                if ((*(uint *)(pFVar17 + 0x80) == uVar18) && (*(int *)(pFVar17 + 0x84) == iVar6))
                break;
                pFVar17 = pFVar17 + 0xa0;
              }
              iVar7 = UGroomAsset::GetMaterialIndex
                                ((this->GroomAsset).field0_0x0.DebugPtr,*(FName *)(pFVar17 + 8));
LAB_14e0185b6:
              lVar15 = local_50;
              pFVar17 = local_58;
              if (iVar7 == param_1) {
                return Cards;
              }
            }
            uVar14 = (ulonglong)local_60;
            iVar6 = iVar6 + 1;
            lVar20 = lVar20 + 0x428;
          }
        }
        bVar3 = IsHairStrandsEnabled(Meshes,(EShaderPlatform)uVar19);
        if (bVar3) {
          local_60 = *(uint *)(pFVar17 + 0x778);
          uVar14 = (ulonglong)(int)local_60;
          iVar6 = 0;
          lVar20 = *(longlong *)(pFVar17 + 0x770);
          lVar15 = uVar14 * 0x98 + lVar20;
          local_50 = lVar15;
          while( true ) {
            if (*(int *)(pFVar17 + 0x778) != (int)uVar14) {
              local_68 = 0;
              `TCheckedPointerIterator<FHairGroupPlatformData::FMeshes::FLOD_const_,int,0>::
              operator!='::__l2::<lambda_1>::operator()(&local_68);
            }
            uVar19 = local_64;
            if (lVar20 == lVar15) break;
            if (0 < *(int *)(lVar20 + 8)) {
              iVar7 = -1;
              pTVar12 = UGroomAsset::GetHairGroupsMeshes((this->GroomAsset).field0_0x0.DebugPtr);
              iVar1 = pTVar12->ArrayNum;
              pFVar17 = (pTVar12->AllocatorInstance).Data;
              pFVar16 = pFVar17 + (longlong)iVar1 * 0x80;
              while( true ) {
                if (pTVar12->ArrayNum != iVar1) {
                  local_67[0] = 0;
                  `TCheckedPointerIterator<FHairGroupsMeshesSourceDescription,int,0>::operator!='::
                  __l2::<lambda_1>::operator()(local_67);
                }
                if (pFVar17 == pFVar16) goto LAB_14e0186c9;
                if ((*(uint *)(pFVar17 + 0x68) == uVar18) && (*(int *)(pFVar17 + 0x6c) == iVar6))
                break;
                pFVar17 = pFVar17 + 0x80;
              }
              iVar7 = UGroomAsset::GetMaterialIndex
                                ((this->GroomAsset).field0_0x0.DebugPtr,*(FName *)(pFVar17 + 8));
LAB_14e0186c9:
              lVar15 = local_50;
              pFVar17 = local_58;
              if (iVar7 == param_1) {
                return Meshes;
              }
            }
            uVar14 = (ulonglong)local_60;
            iVar6 = iVar6 + 1;
            lVar20 = lVar20 + 0x98;
          }
        }
        uVar18 = uVar18 + 1;
      } while (uVar18 < local_5c);
    }
  }
  return Strands;
}

// GetMaterialIndex @ 14e018740

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

int __thiscall UGroomComponent::GetMaterialIndex(UGroomComponent *this,FName param_1)

{
  UGroomAsset *pUVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  
  pUVar1 = (this->GroomAsset).field0_0x0.DebugPtr;
  if (pUVar1 == (UGroomAsset *)0x0) {
    return -1;
  }
  lVar9 = (longlong)(pUVar1->HairGroupsMaterials).ArrayNum;
  uVar8 = 0;
  if (0 < lVar9) {
    lVar6 = 0;
    lVar7 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar8 < (pUVar1->HairGroupsMaterials).ArrayNum) {
        uVar4 = ~uVar8 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
      if (*(FName *)((pUVar1->HairGroupsMaterials).AllocatorInstance.Data + lVar7 + 8) == param_1) {
        return uVar8;
      }
      uVar8 = uVar8 + 1;
      lVar6 = lVar6 + 1;
      lVar7 = lVar7 + 0x10;
    } while (lVar6 < lVar9);
  }
  return -1;
}

// GetMaterialSlotNames @ 14e018780

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
UGroomComponent::GetMaterialSlotNames
          (UGroomComponent *this,TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  UGroomAsset *this_00;
  FScriptContainerElement *pFVar1;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FName,TSizedDefaultAllocator<32>_> local_18;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  this_00 = (this->GroomAsset).field0_0x0.DebugPtr;
  if (this_00 != (UGroomAsset *)0x0) {
    pTVar2 = UGroomAsset::GetMaterialSlotNames(this_00,&local_18);
    if (__return_storage_ptr__ != pTVar2) {
      pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (__return_storage_ptr__->AllocatorInstance).Data = (pTVar2->AllocatorInstance).Data;
      (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      __return_storage_ptr__->ArrayNum = pTVar2->ArrayNum;
      __return_storage_ptr__->ArrayMax = pTVar2->ArrayMax;
      pTVar2->ArrayNum = 0;
      pTVar2->ArrayMax = 0;
    }
    if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// GetNumLODs @ 14e0188d0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

int __thiscall UGroomComponent::GetNumLODs(UGroomComponent *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UGroomAsset *pUVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  undefined1 auStackX_8 [8];
  
  pUVar3 = (this->GroomAsset).field0_0x0.DebugPtr;
  if (pUVar3 == (UGroomAsset *)0x0) {
    return 0;
  }
  iVar2 = (pUVar3->HairGroupsLOD).ArrayNum;
  pFVar5 = (pUVar3->HairGroupsLOD).AllocatorInstance.Data;
  pFVar1 = pFVar5 + (longlong)iVar2 * 0x18;
  iVar6 = -1;
  while( true ) {
    if ((pUVar3->HairGroupsLOD).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FHairGroupsLOD_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(auStackX_8);
    }
    if (pFVar5 == pFVar1) break;
    iVar4 = *(int *)(pFVar5 + 0x10);
    if (*(int *)(pFVar5 + 0x10) < iVar6) {
      iVar4 = iVar6;
    }
    pFVar5 = pFVar5 + 0x18;
    iVar6 = iVar4;
  }
  return iVar6;
}

// GetNumMaterials @ 14e0188f0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

int __thiscall UGroomComponent::GetNumMaterials(UGroomComponent *this)

{
  UGroomAsset *this_00;
  int iVar1;
  TArray<FHairGroupsMaterial,TSizedDefaultAllocator<32>_> *pTVar2;
  
  this_00 = (this->GroomAsset).field0_0x0.DebugPtr;
  if (this_00 != (UGroomAsset *)0x0) {
    pTVar2 = UGroomAsset::GetHairGroupsMaterials(this_00);
    iVar1 = 1;
    if (1 < pTVar2->ArrayNum) {
      iVar1 = pTVar2->ArrayNum;
    }
    return iVar1;
  }
  return 1;
}

// GetNumSyncLODs @ 14e018970

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

int __thiscall UGroomComponent::GetNumSyncLODs(UGroomComponent *this)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStackX_8 [8];
  
  lVar3 = *(longlong *)&this->field_0x10;
  if (lVar3 == 0) {
    return 0;
  }
  iVar2 = *(int *)(lVar3 + 0x120);
  lVar5 = *(longlong *)(lVar3 + 0x118);
  lVar1 = lVar5 + (longlong)iVar2 * 0x18;
  iVar6 = -1;
  while( true ) {
    if (*(int *)(lVar3 + 0x120) != iVar2) {
      `TCheckedPointerIterator<FHairGroupsLOD_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(auStackX_8);
    }
    if (lVar5 == lVar1) break;
    iVar4 = *(int *)(lVar5 + 0x10);
    if (*(int *)(lVar5 + 0x10) < iVar6) {
      iVar4 = iVar6;
    }
    lVar5 = lVar5 + 0x18;
    iVar6 = iVar4;
  }
  return iVar6;
}

// GetPrivateStaticClass @ 14e018c80

UClass * __cdecl UGroomComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGroomComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/HairStrandsCore",L"GroomComponent",
               &Z_Registration_Info_UClass_UGroomComponent.InnerSingleton,
               StaticRegisterNativesUGroomComponent,0x7f0,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UGroomComponent>,
               InternalVTableHelperCtorCaller<UGroomComponent>,local_res8,
               UMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGroomComponent.InnerSingleton;
}

// GetResourceSizeEx @ 14e018fe0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UGroomComponent::GetResourceSizeEx(UGroomComponent *this,FResourceSizeEx *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  
  pFVar10 = (this->HairGroupInstances).AllocatorInstance.Data;
  iVar2 = (this->HairGroupInstances).ArrayNum;
  pFVar1 = pFVar10 + (longlong)iVar2 * 8;
LAB_14e019011:
  if ((this->HairGroupInstances).ArrayNum != iVar2) {
    `TCheckedPointerIterator<TRefCountPtr<FHairGroupInstance>,int,0>::operator!='::__l2::<lambda_1>
    ::operator()(local_res8);
  }
  if (pFVar10 == pFVar1) {
    return;
  }
  if (*(FHairStrandsDeformedResource **)(*(longlong *)pFVar10 + 0x20) !=
      (FHairStrandsDeformedResource *)0x0) {
    uVar7 = FHairStrandsDeformedResource::GetResourcesSize
                      (*(FHairStrandsDeformedResource **)(*(longlong *)pFVar10 + 0x20));
    FResourceSizeEx::AddDedicatedVideoMemoryBytes(param_1,(ulonglong)uVar7);
  }
  if (*(FHairStrandsDeformedRootResource **)(*(longlong *)pFVar10 + 0x30) !=
      (FHairStrandsDeformedRootResource *)0x0) {
    uVar7 = FHairStrandsDeformedRootResource::GetResourcesSize
                      (*(FHairStrandsDeformedRootResource **)(*(longlong *)pFVar10 + 0x30));
    FResourceSizeEx::AddDedicatedVideoMemoryBytes(param_1,(ulonglong)uVar7);
  }
  if (*(FHairStrandsDeformedResource **)(*(longlong *)pFVar10 + 0x48) !=
      (FHairStrandsDeformedResource *)0x0) {
    uVar7 = FHairStrandsDeformedResource::GetResourcesSize
                      (*(FHairStrandsDeformedResource **)(*(longlong *)pFVar10 + 0x48));
    FResourceSizeEx::AddDedicatedVideoMemoryBytes(param_1,(ulonglong)uVar7);
  }
  if (*(FHairStrandsDeformedRootResource **)(*(longlong *)pFVar10 + 0x70) !=
      (FHairStrandsDeformedRootResource *)0x0) {
    uVar7 = FHairStrandsDeformedRootResource::GetResourcesSize
                      (*(FHairStrandsDeformedRootResource **)(*(longlong *)pFVar10 + 0x70));
    FResourceSizeEx::AddDedicatedVideoMemoryBytes(param_1,(ulonglong)uVar7);
  }
  lVar4 = *(longlong *)pFVar10;
  iVar3 = *(int *)(lVar4 + 0x118);
  lVar8 = *(longlong *)(lVar4 + 0x110);
  lVar9 = (longlong)iVar3 * 0x68 + lVar8;
LAB_14e0190b1:
  do {
    if (*(int *)(lVar4 + 0x118) != iVar3) {
      `TCheckedPointerIterator<FHairGroupInstance::FCards::FLOD,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (lVar8 == lVar9) break;
    lVar5 = *(longlong *)(lVar8 + 8);
    if (lVar5 != 0) {
      lVar6 = *(longlong *)(lVar5 + 0x60);
      if (lVar6 == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = *(int *)(lVar6 + 0x14) * *(int *)(lVar6 + 0x10);
      }
      lVar5 = *(longlong *)(lVar5 + 0x80);
      if (lVar5 != 0) {
        FResourceSizeEx::AddDedicatedVideoMemoryBytes
                  (param_1,(ulonglong)(uVar7 + *(int *)(lVar5 + 0x14) * *(int *)(lVar5 + 0x10)));
        lVar8 = lVar8 + 0x68;
        goto LAB_14e0190b1;
      }
      FResourceSizeEx::AddDedicatedVideoMemoryBytes(param_1,(ulonglong)uVar7);
    }
    lVar8 = lVar8 + 0x68;
  } while( true );
  lVar4 = *(longlong *)pFVar10;
  iVar3 = *(int *)(lVar4 + 0x128);
  lVar8 = *(longlong *)(lVar4 + 0x120);
  lVar9 = (longlong)iVar3 * 0x30 + lVar8;
LAB_14e019140:
  do {
    if (*(int *)(lVar4 + 0x128) != iVar3) {
      `TCheckedPointerIterator<FHairGroupInstance::FMeshes::FLOD,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (lVar8 == lVar9) break;
    lVar5 = *(longlong *)(lVar8 + 8);
    if (lVar5 != 0) {
      lVar6 = *(longlong *)(lVar5 + 0x60);
      if (lVar6 == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = *(int *)(lVar6 + 0x14) * *(int *)(lVar6 + 0x10);
      }
      lVar5 = *(longlong *)(lVar5 + 0x80);
      if (lVar5 != 0) {
        FResourceSizeEx::AddDedicatedVideoMemoryBytes
                  (param_1,(ulonglong)(*(int *)(lVar5 + 0x14) * *(int *)(lVar5 + 0x10) + uVar7));
        lVar8 = lVar8 + 0x30;
        goto LAB_14e019140;
      }
      FResourceSizeEx::AddDedicatedVideoMemoryBytes(param_1,(ulonglong)uVar7);
    }
    lVar8 = lVar8 + 0x30;
  } while( true );
  pFVar10 = pFVar10 + 8;
  goto LAB_14e019011;
}

// GetResourcesSize @ 14e019370

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

uint __thiscall UGroomComponent::GetResourcesSize(UGroomComponent *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FGroomComponentMemoryStats *pFVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined1 local_res8 [8];
  FGroomComponentMemoryStats local_38;
  
  pFVar4 = (this->HairGroupInstances).AllocatorInstance.Data;
  iVar5 = 0;
  iVar2 = (this->HairGroupInstances).ArrayNum;
  iVar8 = 0;
  iVar6 = 0;
  iVar7 = 0;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->HairGroupInstances).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TRefCountPtr<FHairGroupInstance>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    pFVar3 = FGroomComponentMemoryStats::Get(&local_38,*(FHairGroupInstance **)pFVar4);
    iVar5 = iVar5 + pFVar3->Guides;
    iVar8 = iVar8 + pFVar3->Strands;
    iVar6 = iVar6 + pFVar3->Cards;
    iVar7 = iVar7 + pFVar3->Meshes;
    pFVar4 = pFVar4 + 8;
  }
  return iVar5 + iVar8 + iVar6 + iVar7;
}

// GetUsedMaterials @ 14e0199f0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UGroomComponent::GetUsedMaterials
          (UGroomComponent *this,TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *param_1,
          bool param_2)

{
  TObjectPtr<UMaterialInterface>_u_0 *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  TObjectPtr<UMaterialInterface>_u_0 local_28;
  TObjectPtr<UMaterialInterface>_u_0 local_20;
  TObjectPtr<UMaterialInterface>_u_0 local_18;
  TObjectPtr<UMaterialInterface>_u_0 local_10;
  
  UMeshComponent::GetUsedMaterials((UMeshComponent *)this,param_1,param_2);
  if ((param_2) && (bVar3 = IsHairStrandsEnabled(Tool,SP_NumPlatforms), bVar3)) {
    local_28 = (this->Strands_DebugMaterial).field0_0x0;
    pTVar1 = (TObjectPtr<UMaterialInterface>_u_0 *)(param_1->AllocatorInstance).Data;
    if ((pTVar1 <= &local_28) &&
       ((&local_28 < pTVar1 + param_1->ArrayMax &&
        (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar3)))) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar4 = param_1->ArrayNum;
    if (iVar4 == param_1->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
    }
    param_1->ArrayNum = iVar4 + 1;
    *(TObjectPtr<UMaterialInterface>_u_0 *)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 8)
         = local_28;
  }
  bVar3 = IsHairStrandsEnabled(Strands,SP_NumPlatforms);
  if (bVar3) {
    local_20 = (this->Strands_DefaultMaterial).field0_0x0;
    pTVar1 = (TObjectPtr<UMaterialInterface>_u_0 *)(param_1->AllocatorInstance).Data;
    if (((pTVar1 <= &local_20) && (&local_20 < pTVar1 + param_1->ArrayMax)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar4 = param_1->ArrayNum;
    if (iVar4 == param_1->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
    }
    param_1->ArrayNum = iVar4 + 1;
    *(TObjectPtr<UMaterialInterface>_u_0 *)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 8)
         = local_20;
  }
  piVar5 = &param_1->ArrayMax;
  bVar3 = IsHairStrandsEnabled(Cards,SP_NumPlatforms);
  if (bVar3) {
    local_18 = (this->Cards_DefaultMaterial).field0_0x0;
    pTVar1 = (TObjectPtr<UMaterialInterface>_u_0 *)(param_1->AllocatorInstance).Data;
    if (((pTVar1 <= &local_18) && (&local_18 < pTVar1 + *piVar5)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar4 = param_1->ArrayNum;
    if (iVar4 == *piVar5) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&param_1->AllocatorInstance,piVar5);
    }
    param_1->ArrayNum = iVar4 + 1;
    *(TObjectPtr<UMaterialInterface>_u_0 *)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 8)
         = local_18;
  }
  piVar5 = &param_1->ArrayMax;
  bVar3 = IsHairStrandsEnabled(Meshes,SP_NumPlatforms);
  if (bVar3) {
    local_10 = (this->Meshes_DefaultMaterial).field0_0x0;
    pTVar1 = (TObjectPtr<UMaterialInterface>_u_0 *)(param_1->AllocatorInstance).Data;
    if (((pTVar1 <= &local_10) && (&local_10 < pTVar1 + *piVar5)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar4 = param_1->ArrayNum;
    if (iVar4 == *piVar5) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&param_1->AllocatorInstance,piVar5);
    }
    param_1->ArrayNum = iVar4 + 1;
    *(TObjectPtr<UMaterialInterface>_u_0 *)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 8)
         = local_10;
  }
  return;
}

// InitIfDependenciesReady @ 14e01a3e0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall UGroomComponent::InitIfDependenciesReady(UGroomComponent *this,bool param_1)

{
  UGroomAsset *pUVar1;
  UMeshDeformer *pUVar2;
  IGroomCacheStreamingManager *pIVar3;
  UObject *pUVar4;
  
  UpdateHairGroupsDesc(this);
  pUVar1 = (this->GroomAsset).field0_0x0.DebugPtr;
  if ((pUVar1 != (UGroomAsset *)0x0) && (pUVar1->bIsInitialized != false)) {
    InitResources(this,false);
    if (param_1) {
      UpdateHairSimulation(this);
    }
    if ((this->field_0x98 & 1) != 0) {
      if (GUseGroomCacheStreaming != false) {
        pIVar3 = IGroomCacheStreamingManager::Get();
        (**(code **)(*(longlong *)pIVar3 + 0x98))(pIVar3,this);
      }
      pUVar2 = (this->MeshDeformer).field0_0x0.DebugPtr;
      if (pUVar2 == (UMeshDeformer *)0x0) {
        pUVar4 = (UObject *)0x0;
      }
      else {
        pUVar4 = (UObject *)
                 (**(code **)(*(longlong *)pUVar2 + 0x2b8))
                           (pUVar2,this,(this->MeshDeformerInstanceSettings).field0_0x0.DebugPtr);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar4);
      }
      (this->MeshDeformerInstance).field0_0x0.DebugPtr = (UMeshDeformerInstance *)pUVar4;
    }
  }
  return;
}

// InitResources @ 14e01a4b0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UGroomComponent::InitResources(UGroomComponent *this,bool param_1)

{
  int *piVar1;
  FString *pFVar2;
  FHairGroupPublicData **ppFVar3;
  EHairViewRayTracingMask *pEVar4;
  UGroomAsset *pUVar5;
  UGroomBindingAsset *pUVar6;
  UGroomCache *pUVar7;
  IGroomCacheBuffers *pIVar8;
  TReferenceControllerBase<1> *pTVar9;
  UTexture2D *pUVar10;
  FHairStrandsClusterResource *pFVar11;
  FScriptContainerElement *pFVar12;
  code *pcVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined8 uVar18;
  undefined3 uVar19;
  float fVar20;
  undefined3 uVar21;
  float fVar22;
  bool bVar23;
  undefined3 uVar24;
  float fVar25;
  bool bVar26;
  undefined3 uVar27;
  float fVar28;
  bool bVar29;
  bool bVar30;
  bool bVar31;
  undefined1 uVar32;
  float fVar33;
  bool bVar34;
  bool bVar35;
  bool bVar36;
  bool bVar37;
  bool bVar38;
  bool bVar39;
  undefined2 uVar40;
  float fVar41;
  bool bVar42;
  undefined3 uVar43;
  longlong lVar44;
  ForAnyElementType FVar45;
  UGroomComponent *pUVar46;
  FHairGroupInstance *pFVar47;
  char cVar48;
  EGroomGeometryType EVar49;
  EGroomBindingType EVar50;
  bool bVar51;
  char cVar52;
  bool bVar53;
  FScriptContainerElement FVar54;
  EGroomBindingMeshType EVar55;
  bool bVar56;
  bool bVar57;
  EGroomCacheType EVar58;
  EGroomInterpolationType EVar59;
  EGroomGuideType EVar60;
  EGroomLODMode EVar61;
  EShaderPlatform EVar62;
  int iVar63;
  uint uVar64;
  EHairInterpolationType EVar65;
  UWorld *pUVar66;
  TArray<FHairGroupPlatformData,TSizedDefaultAllocator<32>_> *pTVar67;
  USkeletalMeshComponent *pUVar68;
  USkeletalMesh *pUVar69;
  UGeometryCacheComponent *pUVar70;
  longlong lVar71;
  longlong lVar72;
  TArray<UGroomBindingAsset::FHairGroupResource,TSizedDefaultAllocator<32>_> *pTVar73;
  UGroomComponent *pUVar74;
  UGroomComponent *pUVar75;
  FHairGroupInstance *pFVar76;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar77;
  FString *pFVar78;
  TTransform<double> *pTVar79;
  TArray<FHairGroupResources,TSizedDefaultAllocator<32>_> *pTVar80;
  FHairGroupPublicData *this_00;
  FHairGroupPublicData *pFVar81;
  FLinearColor *pFVar82;
  TArray<FHairGroupsLOD,TSizedDefaultAllocator<32>_> *pTVar83;
  UObject *pUVar84;
  UClass *pUVar85;
  TArray<UGroomBindingAsset::FHairGroupPlatformData,TSizedDefaultAllocator<32>_> *pTVar86;
  FHairStrandsRestResource *pFVar87;
  FHairGroupDesc *pFVar88;
  FHairStrandsInterpolationResource *pFVar89;
  FHairStrandsRaytracingResource *pFVar90;
  FHairStrandsDeformedRootResource *pFVar91;
  FHairStrandsDeformedRootResource *pFVar92;
  FHairStrandsDeformedResource *pFVar93;
  FHairStrandsDeformedResource *pFVar94;
  FHairStrandsCullingResource *this_01;
  FHairStrandsCullingResource *pFVar95;
  FHairCardsDeformedResource *pFVar96;
  FHairMeshesDeformedResource *pFVar97;
  longlong *plVar98;
  TConsoleVariableData<int> *pTVar99;
  EHairLODSelectionType EVar100;
  UGroomComponent **ppUVar101;
  FScriptContainerElement FVar102;
  uint uVar103;
  ulonglong uVar104;
  TArray<EHairBindingType,TSizedDefaultAllocator<32>_> *pTVar105;
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar106;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar107;
  TArray<EHairGeometryType,TSizedDefaultAllocator<32>_> *pTVar108;
  char cVar109;
  uint uVar110;
  USkeletalMeshComponent *pUVar111;
  UMeshComponent *pUVar112;
  FHairCardsBulkData *pFVar113;
  ulonglong uVar114;
  TArray<TRefCountPtr<FHairGroupInstance>,TSizedDefaultAllocator<32>_> *pTVar115;
  size_t _Size;
  longlong lVar116;
  FHairGroupPublicData *pFVar117;
  FCards *pFVar118;
  FHairMeshesBulkData *pFVar119;
  UGroomComponent *pUVar120;
  uint uVar121;
  FHairStrandsBulkData *pFVar122;
  FScriptContainerElement *pFVar123;
  char cVar124;
  float fVar125;
  uint local_res18;
  FHairResourceName local_res20 [8];
  FScriptContainerElement local_228;
  FScriptContainerElement local_227 [3];
  uint local_224;
  char local_220;
  char local_21f;
  char local_21e;
  FHairResourceName local_21d;
  int local_21c;
  FHairGroupInstance *local_218;
  bool local_210;
  bool local_20f;
  bool local_20e;
  FHairResourceName local_20d;
  bool local_20c [4];
  uint local_208;
  uint local_204;
  FCards *local_200;
  int local_1f8;
  EHairInterpolationType local_1f4;
  USkeletalMeshComponent *local_1f0;
  UMeshComponent *local_1e8;
  longlong local_1e0;
  longlong local_1d8;
  ForAnyElementType local_1d0;
  undefined8 local_1c8;
  ForAnyElementType local_1c0;
  undefined8 local_1b8;
  ForAnyElementType local_1b0;
  undefined8 local_1a8;
  FHairStrandsBulkData *local_1a0;
  FHairCardsBulkData *local_198;
  undefined4 local_190;
  FName local_188;
  TArray<bool,TSizedDefaultAllocator<32>_> local_180;
  FHairGroupInstance *local_170;
  FScriptContainerElement *local_168;
  TArray<bool,TSizedDefaultAllocator<32>_> local_160;
  TArray<bool,TSizedDefaultAllocator<32>_> local_150;
  FLLMScope local_140 [2];
  FName local_138;
  FString local_130;
  uint local_120;
  IGroomCacheBuffers *local_118;
  UGroomComponent *pUStack_110;
  FName local_108;
  IGroomCacheBuffers *local_100;
  FSharedReferencer<1> local_f8;
  IGroomCacheBuffers *local_f0;
  UGroomComponent *pUStack_e8;
  FName local_e0;
  FName local_d8;
  FMemScope local_d0;
  undefined8 local_c8;
  FSharedReferencer<1> FStack_c0;
  IGroomCacheBuffers *local_b8;
  TReferenceControllerBase<1> *pTStack_b0;
  FString local_a8;
  FLinearColor local_98;
  FHairGroupDesc local_88;
  
  uVar104 = 0;
  FLLMScope::FLLMScope(local_140,LLMTagDeclaration_Groom.UniqueName,false,None,Default,true);
  local_e0 = LLMTagDeclaration_Groom.UniqueName;
  FMemScope::FMemScope(&local_d0,&local_e0,true);
  ReleaseResources(this);
  this->bResetSimulation = true;
  this->bInitSimulation = true;
  UpdateHairGroupsDesc(this);
  pUVar5 = (this->GroomAsset).field0_0x0.DebugPtr;
  if ((pUVar5 == (UGroomAsset *)0x0) ||
     (iVar63 = UGroomAsset::GetNumHairGroups(pUVar5), iVar63 == 0)) goto LAB_14e01d778;
  this->InitializedResources = (void *)(this->GroomAsset).field0_0x0;
  if ((*(longlong *)&this->field_0xb0 == 0) &&
     (pUVar66 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
     pUVar66 == (UWorld *)0x0)) {
LAB_14e01a5df:
    local_190 = 0x9b;
  }
  else {
    pUVar66 = *(UWorld **)&this->field_0xb0;
    if (pUVar66 == (UWorld *)0x0) {
      pUVar66 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    }
    if (pUVar66->Scene == (FSceneInterface *)0x0) goto LAB_14e01a5df;
    pUVar66 = *(UWorld **)&this->field_0xb0;
    if (pUVar66 == (UWorld *)0x0) {
      pUVar66 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    }
    EVar62 = FSceneInterface::GetShaderPlatform(pUVar66->Scene);
    local_190 = CONCAT22(local_190._2_2_,EVar62);
  }
  bVar56 = false;
  cVar52 = '\0';
  local_160.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_160.ArrayNum = 0;
  local_160.ArrayMax = 0;
  local_180.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_180.ArrayNum = 0;
  local_180.ArrayMax = 0;
  local_150.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_150.ArrayNum = 0;
  local_150.ArrayMax = 0;
  pTVar67 = UGroomAsset::GetHairGroupsPlatformData((this->GroomAsset).field0_0x0.DebugPtr);
  local_20c[0] = false;
  TArray<bool,TSizedDefaultAllocator<32>_>::Init(&local_160,local_20c,pTVar67->ArrayNum);
  pTVar67 = UGroomAsset::GetHairGroupsPlatformData((this->GroomAsset).field0_0x0.DebugPtr);
  local_210 = false;
  TArray<bool,TSizedDefaultAllocator<32>_>::Init(&local_180,&local_210,pTVar67->ArrayNum);
  pTVar67 = UGroomAsset::GetHairGroupsPlatformData((this->GroomAsset).field0_0x0.DebugPtr);
  local_20f = false;
  TArray<bool,TSizedDefaultAllocator<32>_>::Init(&local_150,&local_20f,pTVar67->ArrayNum);
  cVar124 = '\0';
  local_220 = '\0';
  local_21e = '\0';
  bVar53 = false;
  pTVar67 = UGroomAsset::GetHairGroupsPlatformData((this->GroomAsset).field0_0x0.DebugPtr);
  local_1d8 = (longlong)pTVar67->ArrayNum;
  uVar114 = uVar104;
  cVar48 = '\0';
  cVar109 = '\0';
  bVar51 = false;
  if (local_1d8 < 1) {
LAB_14e01aad1:
    bVar53 = false;
  }
  else {
    do {
      bVar56 = bVar51;
      cVar124 = cVar48;
      local_204 = UGroomAsset::GetLODCount((this->GroomAsset).field0_0x0.DebugPtr);
      uVar110 = 0;
      uVar103 = (uint)uVar104;
      if (local_204 != 0) {
        uVar121 = ~uVar103 >> 0x1f;
        do {
          EVar49 = UGroomAsset::GetGeometryType
                             ((this->GroomAsset).field0_0x0.DebugPtr,uVar103,uVar110);
          if (EVar49 == Strands) {
            IsHairStrandsEnabled(Strands,(EShaderPlatform)local_190);
          }
          EVar50 = UGroomAsset::GetBindingType
                             ((this->GroomAsset).field0_0x0.DebugPtr,uVar103,uVar110);
          if ((bVar56) || (bVar56 = false, EVar50 == Rigid)) {
            bVar56 = true;
          }
          if ((cVar52 != '\0') || (local_21f = cVar52, EVar50 == Skinning)) {
            local_21f = '\x01';
          }
          uVar64 = 0;
          if ((int)uVar103 < local_180.ArrayNum) {
            uVar64 = uVar121;
          }
          iVar63 = local_180.ArrayNum;
          if (uVar64 == 0) {
            bVar51 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar51) {
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            iVar63 = local_180.ArrayNum;
          }
          if (local_180.AllocatorInstance.Data[uVar114] == (FScriptContainerElement)0x0) {
            pUVar5 = (this->GroomAsset).field0_0x0.DebugPtr;
            cVar52 = false;
            if (pUVar5 != (UGroomAsset *)0x0) {
              cVar52 = UGroomAsset::IsSimulationEnable(pUVar5,uVar103,uVar110);
              iVar63 = local_180.ArrayNum;
            }
            if ((this->SimulationSettings).bOverrideSettings == false) {
LAB_14e01a7df:
              if (cVar52 != '\0') goto LAB_14e01a7e6;
            }
            else if ((bool)cVar52 != false) {
              cVar52 = (this->SimulationSettings).SolverSettings.bEnableSimulation;
              goto LAB_14e01a7df;
            }
            FVar54 = (FScriptContainerElement)0x0;
          }
          else {
LAB_14e01a7e6:
            FVar54 = (FScriptContainerElement)0x1;
          }
          uVar64 = 0;
          if ((int)uVar103 < iVar63) {
            uVar64 = uVar121;
          }
          if ((uVar64 == 0) &&
             (bVar51 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar51)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          local_180.AllocatorInstance.Data[uVar114] = FVar54;
          uVar64 = 0;
          if ((int)uVar103 < local_160.ArrayNum) {
            uVar64 = uVar121;
          }
          if ((uVar64 == 0) &&
             (bVar51 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar51)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          if ((local_160.AllocatorInstance.Data[uVar114] != (FScriptContainerElement)0x0) ||
             ((EVar50 == Skinning &&
              (bVar51 = UGroomAsset::IsGlobalInterpolationEnable
                                  ((this->GroomAsset).field0_0x0.DebugPtr,uVar103,uVar110), bVar51))
             )) {
            FVar54 = (FScriptContainerElement)0x1;
          }
          else {
            FVar54 = (FScriptContainerElement)0x0;
          }
          uVar64 = 0;
          if ((int)uVar103 < local_160.ArrayNum) {
            uVar64 = uVar121;
          }
          if ((uVar64 == 0) &&
             (bVar51 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar51)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          local_160.AllocatorInstance.Data[uVar114] = FVar54;
          if (local_220 == '\0') {
            uVar64 = 0;
            if ((int)uVar103 < local_180.ArrayNum) {
              uVar64 = uVar121;
            }
            if ((uVar64 == 0) &&
               (bVar51 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar51)) {
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            if (local_180.AllocatorInstance.Data[uVar114] != (FScriptContainerElement)0x0)
            goto LAB_14e01a95d;
            cVar124 = '\0';
          }
          else {
LAB_14e01a95d:
            cVar124 = '\x01';
          }
          local_220 = cVar124;
          if (bVar53) {
LAB_14e01a9c0:
            bVar53 = true;
          }
          else {
            uVar64 = 0;
            if ((int)uVar103 < local_160.ArrayNum) {
              uVar64 = uVar121;
            }
            if ((uVar64 == 0) &&
               (bVar53 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar53)) {
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            if (local_160.AllocatorInstance.Data[uVar114] != (FScriptContainerElement)0x0)
            goto LAB_14e01a9c0;
            bVar53 = false;
          }
          uVar110 = uVar110 + 1;
          cVar52 = local_21f;
        } while (uVar110 < local_204);
      }
      FVar54 = (FScriptContainerElement)IsDeformationEnable(this,uVar103);
      uVar110 = 0;
      if ((int)uVar103 < local_150.ArrayNum) {
        uVar110 = ~uVar103 >> 0x1f;
      }
      if ((uVar110 == 0) &&
         (bVar51 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar51)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      local_150.AllocatorInstance.Data[uVar114] = FVar54;
      if (local_21e == '\0') {
        uVar110 = 0;
        if ((int)uVar103 < local_150.ArrayNum) {
          uVar110 = ~uVar103 >> 0x1f;
        }
        if ((uVar110 == 0) &&
           (bVar51 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar51)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        if (local_150.AllocatorInstance.Data[uVar114] != (FScriptContainerElement)0x0)
        goto LAB_14e01aa9b;
        local_21e = '\0';
      }
      else {
LAB_14e01aa9b:
        local_21e = '\x01';
      }
      uVar104 = (ulonglong)(uVar103 + 1);
      uVar114 = uVar114 + 1;
      cVar48 = cVar124;
      bVar51 = bVar56;
    } while ((longlong)uVar114 < local_1d8);
    cVar109 = local_21e;
    if ((cVar52 == '\0') && (!bVar53)) goto LAB_14e01aad1;
    bVar53 = true;
  }
  if (this->LODForcedIndex <= 0.0 && this->LODForcedIndex != 0.0) {
    if ((cVar124 == '\0') && (cVar109 == '\0')) {
      EVar100 = Immediate;
    }
    else {
      EVar100 = Predicted;
    }
  }
  else {
    EVar100 = Forced;
  }
  this->LODSelectionType = EVar100;
  pUVar111 = *(USkeletalMeshComponent **)&this->field_0xd0;
  if (pUVar111 == (USkeletalMeshComponent *)0x0) {
    pUVar68 = (USkeletalMeshComponent *)0x0;
  }
  else {
    bVar51 = UObjectBaseUtility::IsA<UMeshComponent>((UObjectBaseUtility *)pUVar111);
    pUVar68 = (USkeletalMeshComponent *)0x0;
    if (bVar51) {
      pUVar68 = pUVar111;
    }
  }
  local_1f0 = (USkeletalMeshComponent *)0x0;
  pUVar111 = (USkeletalMeshComponent *)0x0;
  if ((bVar53) && (pUVar68 != (USkeletalMeshComponent *)0x0)) {
    pUVar5 = (this->GroomAsset).field0_0x0.DebugPtr;
    bVar56 = this->bValidationEnable;
    pUVar6 = (this->BindingAsset).field0_0x0.DebugPtr;
    if ((pUVar5 == (UGroomAsset *)0x0) || (pUVar6 == (UGroomBindingAsset *)0x0)) {
LAB_14e01ac47:
      local_1f0 = (USkeletalMeshComponent *)0x0;
      pUVar111 = (USkeletalMeshComponent *)0x0;
    }
    else {
      EVar55 = UGroomBindingAsset::GetGroomBindingType(pUVar6);
      if (EVar55 == SkeletalMesh) {
        local_1f0 = Cast<USkeletalMeshComponent,UMeshComponent>((UMeshComponent *)pUVar68);
        if (bVar56 != false) {
          local_1f0 = ValidateBindingAsset_SkeletalMesh
                                (pUVar5,pUVar6,local_1f0,param_1,(USceneComponent *)this);
        }
      }
      else {
        EVar55 = UGroomBindingAsset::GetGroomBindingType(pUVar6);
        if (EVar55 != GeometryCache) goto LAB_14e01ac47;
        local_1f0 = (USkeletalMeshComponent *)
                    Cast<UGeometryCacheComponent,UMeshComponent>((UMeshComponent *)pUVar68);
        if (bVar56 != false) {
          local_1f0 = (USkeletalMeshComponent *)
                      ValidateBindingAsset_GeometryCache
                                (pUVar5,pUVar6,(UGeometryCacheComponent *)local_1f0,param_1,
                                 (USceneComponent *)this);
        }
      }
      pUVar111 = local_1f0;
      if ((local_1f0 != (USkeletalMeshComponent *)0x0) &&
         (pUVar6 = (this->BindingAsset).field0_0x0.DebugPtr, pUVar6 != (UGroomBindingAsset *)0x0)) {
        EVar55 = UGroomBindingAsset::GetGroomBindingType(pUVar6);
        if (EVar55 == SkeletalMesh) {
          pUVar68 = Cast<USkeletalMeshComponent,UMeshComponent>((UMeshComponent *)pUVar111);
          pUVar69 = USkeletalMeshComponent::GetSkeletalMeshAsset(pUVar68);
          if (pUVar69 == (USkeletalMesh *)0x0) goto LAB_14e01ac47;
        }
        EVar55 = UGroomBindingAsset::GetGroomBindingType((this->BindingAsset).field0_0x0.DebugPtr);
        if ((EVar55 == GeometryCache) &&
           (pUVar70 = Cast<UGeometryCacheComponent,UMeshComponent>((UMeshComponent *)pUVar111),
           (pUVar70->GeometryCache).field0_0x0.DebugPtr == (UGeometryCache *)0x0))
        goto LAB_14e01ac47;
      }
    }
  }
  else if ((bVar56) &&
          (((pUVar68 != (USkeletalMeshComponent *)0x0 &&
            (bVar56 = UObjectBaseUtility::IsA<USkeletalMeshComponent>((UObjectBaseUtility *)pUVar68)
            , bVar56)) &&
           (pUVar69 = USkeletalMeshComponent::GetSkeletalMeshAsset(pUVar68),
           pUVar111 = (USkeletalMeshComponent *)0x0, local_1f0 = (USkeletalMeshComponent *)0x0,
           pUVar69 != (USkeletalMesh *)0x0)))) {
    pUVar111 = pUVar68;
    local_1f0 = pUVar68;
  }
  pUVar5 = (this->GroomAsset).field0_0x0.DebugPtr;
  if ((pUVar5 != (UGroomAsset *)0x0) &&
     (pUVar69 = UGroomAsset::GetRiggedSkeletalMesh(pUVar5), pUVar69 != (USkeletalMesh *)0x0)) {
    pUVar69 = UGroomAsset::GetRiggedSkeletalMesh((this->GroomAsset).field0_0x0.DebugPtr);
    lVar71 = (**(code **)(pUVar69->_padding_ + 0x408))(pUVar69);
    this->DeformedMeshComponent = (UMeshComponent *)0x0;
    pUVar68 = (USkeletalMeshComponent *)this;
    do {
      bVar56 = UObjectBaseUtility::IsA<USkeletalMeshComponent>((UObjectBaseUtility *)pUVar68);
      if (((bVar56) && (pUVar68 != (USkeletalMeshComponent *)0x0)) &&
         (pUVar69 = USkeletalMeshComponent::GetSkeletalMeshAsset(pUVar68),
         pUVar69 != (USkeletalMesh *)0x0)) {
        pUVar69 = USkeletalMeshComponent::GetSkeletalMeshAsset(pUVar68);
        lVar72 = (**(code **)(pUVar69->_padding_ + 0x408))(pUVar69);
        if (lVar72 == lVar71) {
          this->DeformedMeshComponent = (UMeshComponent *)pUVar68;
          break;
        }
      }
      pUVar68 = (USkeletalMeshComponent *)pUVar68->_padding_;
    } while (pUVar68 != (USkeletalMeshComponent *)0x0);
    if (this->DeformedMeshComponent != (UMeshComponent *)0x0) {
      (**(code **)(*(longlong *)this + 0x4c0))(this);
    }
  }
  local_1e8 = (UMeshComponent *)0x0;
  if (pUVar111 == (USkeletalMeshComponent *)0x0) {
LAB_14e01b0dc:
    pTVar67 = UGroomAsset::GetHairGroupsPlatformData((this->GroomAsset).field0_0x0.DebugPtr);
    local_20e = false;
    TArray<bool,TSizedDefaultAllocator<32>_>::Init(&local_160,&local_20e,pTVar67->ArrayNum);
  }
  else {
    this->RegisteredMeshComponent = (UMeshComponent *)pUVar111;
    (**(code **)(*(longlong *)this + 0x4c0))(this);
    this->field_0x1a9 = this->field_0x1a9 & 0xdf;
    if ((!bVar53) ||
       (pUVar112 = (UMeshComponent *)(this->BindingAsset).field0_0x0.DebugPtr, local_1e8 = pUVar112,
       pUVar112 == (UMeshComponent *)0x0)) goto LAB_14e01b0dc;
    pTVar67 = UGroomAsset::GetHairGroupsPlatformData((this->GroomAsset).field0_0x0.DebugPtr);
    iVar63 = pTVar67->ArrayNum;
    pTVar73 = UGroomBindingAsset::GetHairGroupResources((UGroomBindingAsset *)pUVar112);
    if (pTVar73->ArrayNum != iVar63) {
      local_1e8 = (UMeshComponent *)0x0;
      goto LAB_14e01b0dc;
    }
    pTVar73 = UGroomBindingAsset::GetHairGroupResources((UGroomBindingAsset *)pUVar112);
    uVar103 = pTVar73->ArrayNum;
    local_208 = uVar103;
    pTVar80 = UGroomAsset::GetHairGroupsResources((this->GroomAsset).field0_0x0.DebugPtr);
    if ((uVar103 != pTVar80->ArrayNum) &&
       (bVar53 = ::FDebug::CheckVerifyFailedImpl2
                           ("NumGroup == GroomAsset->GetHairGroupsResources().Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomComponent.cpp"
                            ,0xb0f,L""), bVar53)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    local_res18 = 0;
    if (uVar103 != 0) {
      do {
        pTVar73 = UGroomBindingAsset::GetHairGroupResources((UGroomBindingAsset *)pUVar112);
        uVar103 = 0;
        if ((int)local_res18 < pTVar73->ArrayNum) {
          uVar103 = ~local_res18 >> 0x1f;
        }
        if ((uVar103 == 0) &&
           (bVar53 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar53)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        pFVar123 = (pTVar73->AllocatorInstance).Data + (longlong)(int)local_res18 * 0x20;
        pTVar80 = UGroomAsset::GetHairGroupsResources((this->GroomAsset).field0_0x0.DebugPtr);
        uVar103 = 0;
        if ((int)local_res18 < pTVar80->ArrayNum) {
          uVar103 = ~local_res18 >> 0x1f;
        }
        if ((uVar103 == 0) &&
           (bVar53 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar53)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        pFVar12 = (pTVar80->AllocatorInstance).Data;
        lVar71 = (longlong)(int)local_res18 * 0x58;
        bVar53 = UGroomAsset::NeedsInterpolationData
                           ((this->GroomAsset).field0_0x0.DebugPtr,local_res18);
        bVar56 = UGroomAsset::HasGeometryType
                           ((this->GroomAsset).field0_0x0.DebugPtr,local_res18,Strands);
        bVar51 = UGroomAsset::HasGeometryType
                           ((this->GroomAsset).field0_0x0.DebugPtr,local_res18,Cards);
        if ((((*(longlong *)(pFVar12 + lVar71) != 0) && (bVar53)) &&
            ((*(longlong *)pFVar123 == 0 || (*(int *)(*(longlong *)pFVar123 + 8) == 0)))) ||
           (((*(longlong *)(pFVar12 + lVar71 + 8) != 0 && (bVar56)) &&
            ((*(longlong *)(pFVar123 + 8) == 0 || (*(int *)(*(longlong *)(pFVar123 + 8) + 8) == 0)))
            ))) {
LAB_14e01b0cd:
          local_1e8 = (UMeshComponent *)0x0;
          goto LAB_14e01b0dc;
        }
        local_204 = *(uint *)(pFVar12 + lVar71 + 0x38);
        if ((0 < (int)local_204) && (bVar51)) {
          if (local_204 != *(uint *)(pFVar123 + 0x18)) goto LAB_14e01b0cd;
          uVar103 = 0;
          bVar53 = true;
          if (local_204 != 0) {
            do {
              uVar110 = 0;
              if ((int)uVar103 < *(int *)(pFVar12 + lVar71 + 0x38)) {
                uVar110 = ~uVar103 >> 0x1f;
              }
              if ((uVar110 == 0) &&
                 (bVar56 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar56)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              lVar72 = (longlong)(int)uVar103;
              if (*(longlong *)(*(longlong *)(pFVar12 + lVar71 + 0x30) + lVar72 * 0x30) != 0) {
                if (bVar53) {
                  uVar110 = 0;
                  if ((int)uVar103 < *(int *)(pFVar123 + 0x18)) {
                    uVar110 = ~uVar103 >> 0x1f;
                  }
                  if ((uVar110 == 0) &&
                     (bVar53 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar53)) {
                    pcVar13 = (code *)swi(3);
                    (*pcVar13)();
                    return;
                  }
                  if (*(longlong *)(*(longlong *)(pFVar123 + 0x10) + lVar72 * 8) != 0) {
                    uVar110 = 0;
                    if ((int)uVar103 < *(int *)(pFVar123 + 0x18)) {
                      uVar110 = ~uVar103 >> 0x1f;
                    }
                    if ((uVar110 == 0) &&
                       (bVar53 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar53)) {
                      pcVar13 = (code *)swi(3);
                      (*pcVar13)();
                      return;
                    }
                    if (*(int *)(*(longlong *)(*(longlong *)(pFVar123 + 0x10) + lVar72 * 8) + 8) !=
                        0) {
                      bVar53 = true;
                      goto LAB_14e01b095;
                    }
                  }
                }
                bVar53 = false;
              }
LAB_14e01b095:
              uVar103 = uVar103 + 1;
            } while (uVar103 < local_204);
            if (!bVar53) goto LAB_14e01b0cd;
          }
        }
        local_res18 = local_res18 + 1;
        pUVar112 = local_1e8;
      } while (local_res18 < local_208);
    }
  }
  pUVar120 = (UGroomComponent *)0x0;
  if ((this->GroomCache).field0_0x0.DebugPtr == (UGroomCache *)0x0) {
    local_c8 = 0;
    FStack_c0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&this->GroomCacheBuffers != (TSharedPtr<IGroomCacheBuffers,1> *)&local_c8) {
      (this->GroomCacheBuffers).Object = (IGroomCacheBuffers *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->GroomCacheBuffers).SharedReferenceCount,&FStack_c0);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_c0.ReferenceController);
  }
  else {
    if (GUseGroomCacheStreaming == false) {
      bVar51 = false;
      bVar56 = false;
      bVar53 = true;
      pUVar75 = ::operator_new(0x88);
      if (pUVar75 == (UGroomComponent *)0x0) {
        local_118 = ___xmm_00000000000000000000000000000010;
        pUStack_110 = _UNK_150651568;
        pUVar75 = _UNK_150651568;
        local_100 = ___xmm_00000000000000000000000000000010;
      }
      else {
        *(undefined4 *)&pUVar75->field_0x8 = 1;
        *(undefined4 *)&pUVar75->field_0xc = 1;
        *(undefined ***)pUVar75 =
             &
             ___7__TIntrusiveReferenceController_VFGroomCacheBuffers___00_SharedPointerInternals__6B_
        ;
        FGroomCacheBuffers::FGroomCacheBuffers
                  ((FGroomCacheBuffers *)&pUVar75->field_0x10,(this->GroomCache).field0_0x0.DebugPtr
                  );
        local_100 = (IGroomCacheBuffers *)&pUVar75->field_0x10;
        pUStack_110 = pUVar75;
        local_118 = local_100;
        if ((local_100 == (IGroomCacheBuffers *)0x0) &&
           (bVar57 = ::FDebug::CheckVerifyFailedImpl2
                               ("InObject != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x246,L""), bVar57)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
      }
      ppUVar101 = &pUStack_110;
      pUVar74 = this;
    }
    else {
      bVar51 = true;
      bVar56 = true;
      bVar53 = false;
      pUVar74 = ::operator_new(0x98);
      if (pUVar74 == (UGroomComponent *)0x0) {
        ppUVar101 = &pUStack_e8;
        local_100 = (IGroomCacheBuffers *)&DAT_00000010;
        local_f0 = ___xmm_00000000000000000000000000000010;
        pUStack_e8 = _UNK_150651568;
        pUVar75 = pUStack_110;
        pUVar74 = pUVar120;
      }
      else {
        *(undefined4 *)&pUVar74->field_0x8 = 1;
        *(undefined4 *)&pUVar74->field_0xc = 1;
        *(undefined ***)pUVar74 =
             &
             ___7__TIntrusiveReferenceController_VFGroomCacheStreamedBuffers___00_SharedPointerInternals__6B_
        ;
        FGroomCacheBuffers::FGroomCacheBuffers
                  ((FGroomCacheBuffers *)&pUVar74->field_0x10,(this->GroomCache).field0_0x0.DebugPtr
                  );
        local_100 = (IGroomCacheBuffers *)&pUVar74->field_0x10;
        *(undefined8 *)&pUVar74->field_0x88 = 0;
        *(undefined8 *)&pUVar74->field_0x90 = 0;
        *(undefined ***)&pUVar74->field_0x10 = &___7FGroomCacheStreamedBuffers__6B_;
        if ((local_100 == (IGroomCacheBuffers *)0x0) &&
           (bVar57 = ::FDebug::CheckVerifyFailedImpl2
                               ("InObject != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x246,L""), bVar57)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        local_f0 = local_100;
        pUStack_e8 = pUVar74;
        LOCK();
        *(int *)&pUVar74->field_0x8 = *(int *)&pUVar74->field_0x8 + 1;
        UNLOCK();
        ppUVar101 = &pUStack_e8;
        pUVar75 = pUStack_110;
      }
    }
    pUVar46 = pUStack_e8;
    local_f8.ReferenceController = (TReferenceControllerBase<1> *)*ppUVar101;
    if ((UGroomComponent *)local_f8.ReferenceController != (UGroomComponent *)0x0) {
      LOCK();
      *(int *)&((UGroomComponent *)local_f8.ReferenceController)->field_0x8 =
           *(int *)&((UGroomComponent *)local_f8.ReferenceController)->field_0x8 + 1;
      UNLOCK();
    }
    if (&this->GroomCacheBuffers != (TSharedPtr<IGroomCacheBuffers,1> *)&local_100) {
      (this->GroomCacheBuffers).Object = local_100;
      local_100 = (IGroomCacheBuffers *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->GroomCacheBuffers).SharedReferenceCount,&local_f8);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_f8.ReferenceController);
    if (bVar53) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pUVar75);
    }
    if (bVar56) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pUVar46);
    }
    if (bVar51) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pUVar74);
    }
    UpdateGroomCache(this,this->ElapsedTime);
  }
  local_224 = 0;
  pTVar67 = UGroomAsset::GetHairGroupsPlatformData((this->GroomAsset).field0_0x0.DebugPtr);
  local_204 = pTVar67->ArrayNum;
  if (0 < (int)local_204) {
    local_1e0 = 0;
    do {
      lVar71 = local_1e0;
      pTVar115 = &this->HairGroupInstances;
      pFVar76 = ::operator_new(0x490);
      if (pFVar76 == (FHairGroupInstance *)0x0) {
        local_170 = (FHairGroupInstance *)0x0;
      }
      else {
        memset(pFVar76,0,0x490);
        local_170 = FHairGroupInstance::FHairGroupInstance(pFVar76);
        if (local_170 != (FHairGroupInstance *)0x0) {
          LOCK();
          *(int *)&local_170->field_0x8 = *(int *)&local_170->field_0x8 + 1;
          UNLOCK();
        }
      }
      pFVar76 = local_170;
      pFVar123 = (pTVar115->AllocatorInstance).Data;
      local_218 = local_170;
      if (((pFVar123 <= (FScriptContainerElement *)&local_170) &&
          ((FScriptContainerElement *)&local_170 <
           pFVar123 + (longlong)(this->HairGroupInstances).ArrayMax * 8)) &&
         (bVar53 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar53)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      iVar63 = (this->HairGroupInstances).ArrayNum;
      if (iVar63 == (this->HairGroupInstances).ArrayMax) {
        iVar63 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&pTVar115->AllocatorInstance,&(this->HairGroupInstances).ArrayMax)
        ;
      }
      (this->HairGroupInstances).ArrayNum = iVar63 + 1;
      pFVar123 = (pTVar115->AllocatorInstance).Data;
      *(undefined8 *)(pFVar123 + (longlong)iVar63 * 8) = 0;
      *(FHairGroupInstance **)(pFVar123 + (longlong)iVar63 * 8) = local_170;
      (pFVar76->Debug).GroupCount = local_204;
      uVar103 = (uint)pUVar120;
      (pFVar76->Debug).GroupIndex = uVar103;
      local_170 = (FHairGroupInstance *)0x0;
      (pFVar76->Debug).GroomAssetHash = ((this->GroomAsset).field0_0x0.DebugPtr)->AssetNameHash;
      local_d8 = (FName)((this->GroomAsset).field0_0x0.DebugPtr)->_padding_;
      ::FName::ToString(&local_d8,&local_130);
      pFVar2 = &(pFVar76->Debug).GroomAssetName;
      if (pFVar2 == &local_130) {
        if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_130.Data.AllocatorInstance.Data);
        }
      }
      else {
        pFVar123 = (pFVar2->Data).AllocatorInstance.Data;
        if (pFVar123 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar123);
        }
        (pFVar2->Data).AllocatorInstance.Data = local_130.Data.AllocatorInstance.Data;
        (pFVar76->Debug).GroomAssetName.Data.ArrayNum = local_130.Data.ArrayNum;
        (pFVar76->Debug).GroomAssetName.Data.ArrayMax = local_130.Data.ArrayMax;
        local_130.Data.ArrayNum = 0;
        local_130.Data.ArrayMax = 0;
        local_130.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      (pFVar76->Debug).MeshComponentForDebug = this->RegisteredMeshComponent;
      (pFVar76->Debug).GroomComponentForDebug = this;
      pUVar6 = (this->BindingAsset).field0_0x0.DebugPtr;
      if (pUVar6 == (UGroomBindingAsset *)0x0) {
        EVar55 = SkeletalMesh;
      }
      else {
        EVar55 = UGroomBindingAsset::GetGroomBindingType(pUVar6);
      }
      (pFVar76->Debug).GroomBindingType = EVar55;
      pUVar7 = (this->GroomCache).field0_0x0.DebugPtr;
      pUVar5 = (this->GroomAsset).field0_0x0.DebugPtr;
      if ((pUVar7 == (UGroomCache *)0x0) || (pUVar5 == (UGroomAsset *)0x0)) {
        EVar58 = None;
      }
      else {
        EVar58 = (pUVar7->GroomCacheInfo).Type;
        if (EVar58 == Guides) {
          bVar53 = UGroomAsset::GetEnableSimulationCache(pUVar5);
          EVar58 = bVar53 * '\x02';
        }
      }
      (pFVar76->Debug).GroomCacheType = EVar58;
      pUVar6 = (this->BindingAsset).field0_0x0.DebugPtr;
      if (pUVar6 == (UGroomBindingAsset *)0x0) {
        uVar110 = 0;
      }
      else {
        uVar110 = pUVar6->AssetNameHash;
      }
      (pFVar76->Debug).GroomBindingAssetHash = uVar110;
      pIVar8 = (this->GroomCacheBuffers).Object;
      pTVar9 = (this->GroomCacheBuffers).SharedReferenceCount.ReferenceController;
      if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_b8 = (pFVar76->Debug).GroomCacheBuffers.Object;
      pTStack_b0 = (pFVar76->Debug).GroomCacheBuffers.SharedReferenceCount.ReferenceController;
      (pFVar76->Debug).GroomCacheBuffers.Object = pIVar8;
      (pFVar76->Debug).GroomCacheBuffers.SharedReferenceCount.ReferenceController = pTVar9;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_b0);
      (pFVar76->Debug).LODForcedIndex = this->LODForcedIndex;
      (pFVar76->Debug).LODPredictedIndex = this->LODPredictedIndex;
      (pFVar76->Debug).LODSelectionTypeForDebug = this->LODSelectionType;
      pFVar76->DeformedComponent = this->DeformedMeshComponent;
      pTVar77 = UGroomAsset::GetDeformedGroupSections((this->GroomAsset).field0_0x0.DebugPtr);
      if ((int)uVar103 < pTVar77->ArrayNum) {
        pTVar77 = UGroomAsset::GetDeformedGroupSections((this->GroomAsset).field0_0x0.DebugPtr);
        if ((pTVar77->ArrayNum <= (int)uVar103) &&
           (bVar53 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar53)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        iVar63 = *(int *)((pTVar77->AllocatorInstance).Data + lVar71 * 4);
      }
      else {
        iVar63 = -1;
      }
      pFVar76->DeformedSection = iVar63;
      pFVar117 = (FHairGroupPublicData *)0x0;
      EVar65 = NoneSkinning;
      if (local_1f0 != (USkeletalMeshComponent *)0x0) {
        EVar65 = *(EHairInterpolationType *)((longlong)&local_1f0->_padding_ + 4);
      }
      (pFVar76->Debug).MeshComponentId.PrimIDValue = EVar65;
      (pFVar76->Debug).CachedMeshPersistentPrimitiveIndex.Index = -1;
      if (this->RegisteredMeshComponent != (UMeshComponent *)0x0) {
        pFVar78 = UObjectBaseUtility::GetPathName
                            ((UObjectBaseUtility *)this->RegisteredMeshComponent,&local_a8,
                             (UObject *)0x0);
        pFVar2 = &(pFVar76->Debug).MeshComponentName;
        if (pFVar2 != pFVar78) {
          pFVar123 = (pFVar2->Data).AllocatorInstance.Data;
          if (pFVar123 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar123);
          }
          (pFVar2->Data).AllocatorInstance.Data = (pFVar78->Data).AllocatorInstance.Data;
          (pFVar78->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pFVar76->Debug).MeshComponentName.Data.ArrayNum = (pFVar78->Data).ArrayNum;
          (pFVar76->Debug).MeshComponentName.Data.ArrayMax = (pFVar78->Data).ArrayMax;
          (pFVar78->Data).ArrayNum = 0;
          (pFVar78->Data).ArrayMax = 0;
        }
        if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.Data.AllocatorInstance.Data);
        }
      }
      pFVar76->GeometryType = NoneGeometry;
      pFVar76->BindingType = NoneBinding;
      if (this->RegisteredMeshComponent == (UMeshComponent *)0x0) {
        pTVar79 = &UE::Math::TTransform<double>::Identity;
      }
      else {
        pTVar79 = (TTransform<double> *)&this->RegisteredMeshComponent->_padding_;
      }
      dVar14 = (pTVar79->Rotation).XY.m128d_f64[1];
      (pFVar76->Debug).SkinningCurrentLocalToWorld.Rotation.XY.m128d_f64[0] =
           (pTVar79->Rotation).XY.m128d_f64[0];
      (pFVar76->Debug).SkinningCurrentLocalToWorld.Rotation.XY.m128d_f64[1] = dVar14;
      dVar14 = (pTVar79->Rotation).ZW.m128d_f64[1];
      (pFVar76->Debug).SkinningCurrentLocalToWorld.Rotation.ZW.m128d_f64[0] =
           (pTVar79->Rotation).ZW.m128d_f64[0];
      (pFVar76->Debug).SkinningCurrentLocalToWorld.Rotation.ZW.m128d_f64[1] = dVar14;
      dVar14 = (pTVar79->Translation).XY.m128d_f64[1];
      (pFVar76->Debug).SkinningCurrentLocalToWorld.Translation.XY.m128d_f64[0] =
           (pTVar79->Translation).XY.m128d_f64[0];
      (pFVar76->Debug).SkinningCurrentLocalToWorld.Translation.XY.m128d_f64[1] = dVar14;
      dVar14 = (pTVar79->Translation).ZW.m128d_f64[1];
      (pFVar76->Debug).SkinningCurrentLocalToWorld.Translation.ZW.m128d_f64[0] =
           (pTVar79->Translation).ZW.m128d_f64[0];
      (pFVar76->Debug).SkinningCurrentLocalToWorld.Translation.ZW.m128d_f64[1] = dVar14;
      dVar14 = (pTVar79->Scale3D).XY.m128d_f64[1];
      (pFVar76->Debug).SkinningCurrentLocalToWorld.Scale3D.XY.m128d_f64[0] =
           (pTVar79->Scale3D).XY.m128d_f64[0];
      (pFVar76->Debug).SkinningCurrentLocalToWorld.Scale3D.XY.m128d_f64[1] = dVar14;
      dVar14 = (pTVar79->Scale3D).ZW.m128d_f64[1];
      (pFVar76->Debug).SkinningCurrentLocalToWorld.Scale3D.ZW.m128d_f64[0] =
           (pTVar79->Scale3D).ZW.m128d_f64[0];
      (pFVar76->Debug).SkinningCurrentLocalToWorld.Scale3D.ZW.m128d_f64[1] = dVar14;
      dVar14 = (pFVar76->Debug).SkinningCurrentLocalToWorld.Rotation.XY.m128d_f64[1];
      dVar15 = (pFVar76->Debug).SkinningCurrentLocalToWorld.Rotation.ZW.m128d_f64[0];
      dVar16 = (pFVar76->Debug).SkinningCurrentLocalToWorld.Rotation.ZW.m128d_f64[1];
      (pFVar76->Debug).SkinningRestLocalToWorld.Rotation.XY.m128d_f64[0] =
           (pFVar76->Debug).SkinningCurrentLocalToWorld.Rotation.XY.m128d_f64[0];
      (pFVar76->Debug).SkinningRestLocalToWorld.Rotation.XY.m128d_f64[1] = dVar14;
      dVar14 = (pFVar76->Debug).SkinningCurrentLocalToWorld.Translation.XY.m128d_f64[0];
      dVar17 = (pFVar76->Debug).SkinningCurrentLocalToWorld.Translation.XY.m128d_f64[1];
      (pFVar76->Debug).SkinningRestLocalToWorld.Rotation.ZW.m128d_f64[0] = dVar15;
      (pFVar76->Debug).SkinningRestLocalToWorld.Rotation.ZW.m128d_f64[1] = dVar16;
      dVar15 = (pFVar76->Debug).SkinningCurrentLocalToWorld.Translation.ZW.m128d_f64[0];
      dVar16 = (pFVar76->Debug).SkinningCurrentLocalToWorld.Translation.ZW.m128d_f64[1];
      (pFVar76->Debug).SkinningRestLocalToWorld.Translation.XY.m128d_f64[0] = dVar14;
      (pFVar76->Debug).SkinningRestLocalToWorld.Translation.XY.m128d_f64[1] = dVar17;
      dVar14 = (pFVar76->Debug).SkinningCurrentLocalToWorld.Scale3D.XY.m128d_f64[0];
      dVar17 = (pFVar76->Debug).SkinningCurrentLocalToWorld.Scale3D.XY.m128d_f64[1];
      (pFVar76->Debug).SkinningRestLocalToWorld.Translation.ZW.m128d_f64[0] = dVar15;
      (pFVar76->Debug).SkinningRestLocalToWorld.Translation.ZW.m128d_f64[1] = dVar16;
      dVar15 = (pFVar76->Debug).SkinningCurrentLocalToWorld.Scale3D.ZW.m128d_f64[0];
      dVar16 = (pFVar76->Debug).SkinningCurrentLocalToWorld.Scale3D.ZW.m128d_f64[1];
      (pFVar76->Debug).SkinningRestLocalToWorld.Scale3D.XY.m128d_f64[0] = dVar14;
      (pFVar76->Debug).SkinningRestLocalToWorld.Scale3D.XY.m128d_f64[1] = dVar17;
      dVar14 = (pFVar76->Debug).SkinningCurrentLocalToWorld.Rotation.XY.m128d_f64[0];
      dVar17 = (pFVar76->Debug).SkinningCurrentLocalToWorld.Rotation.XY.m128d_f64[1];
      (pFVar76->Debug).SkinningRestLocalToWorld.Scale3D.ZW.m128d_f64[0] = dVar15;
      (pFVar76->Debug).SkinningRestLocalToWorld.Scale3D.ZW.m128d_f64[1] = dVar16;
      dVar15 = (pFVar76->Debug).SkinningCurrentLocalToWorld.Rotation.ZW.m128d_f64[0];
      dVar16 = (pFVar76->Debug).SkinningCurrentLocalToWorld.Rotation.ZW.m128d_f64[1];
      (pFVar76->Debug).SkinningPreviousLocalToWorld.Rotation.XY.m128d_f64[0] = dVar14;
      (pFVar76->Debug).SkinningPreviousLocalToWorld.Rotation.XY.m128d_f64[1] = dVar17;
      dVar14 = (pFVar76->Debug).SkinningCurrentLocalToWorld.Translation.XY.m128d_f64[0];
      dVar17 = (pFVar76->Debug).SkinningCurrentLocalToWorld.Translation.XY.m128d_f64[1];
      (pFVar76->Debug).SkinningPreviousLocalToWorld.Rotation.ZW.m128d_f64[0] = dVar15;
      (pFVar76->Debug).SkinningPreviousLocalToWorld.Rotation.ZW.m128d_f64[1] = dVar16;
      dVar15 = (pFVar76->Debug).SkinningCurrentLocalToWorld.Translation.ZW.m128d_f64[0];
      dVar16 = (pFVar76->Debug).SkinningCurrentLocalToWorld.Translation.ZW.m128d_f64[1];
      (pFVar76->Debug).SkinningPreviousLocalToWorld.Translation.XY.m128d_f64[0] = dVar14;
      (pFVar76->Debug).SkinningPreviousLocalToWorld.Translation.XY.m128d_f64[1] = dVar17;
      dVar14 = (pFVar76->Debug).SkinningCurrentLocalToWorld.Scale3D.XY.m128d_f64[0];
      dVar17 = (pFVar76->Debug).SkinningCurrentLocalToWorld.Scale3D.XY.m128d_f64[1];
      (pFVar76->Debug).SkinningPreviousLocalToWorld.Translation.ZW.m128d_f64[0] = dVar15;
      (pFVar76->Debug).SkinningPreviousLocalToWorld.Translation.ZW.m128d_f64[1] = dVar16;
      dVar15 = (pFVar76->Debug).SkinningCurrentLocalToWorld.Scale3D.ZW.m128d_f64[0];
      dVar16 = (pFVar76->Debug).SkinningCurrentLocalToWorld.Scale3D.ZW.m128d_f64[1];
      (pFVar76->Debug).SkinningPreviousLocalToWorld.Scale3D.XY.m128d_f64[0] = dVar14;
      (pFVar76->Debug).SkinningPreviousLocalToWorld.Scale3D.XY.m128d_f64[1] = dVar17;
      (pFVar76->Debug).SkinningPreviousLocalToWorld.Scale3D.ZW.m128d_f64[0] = dVar15;
      (pFVar76->Debug).SkinningPreviousLocalToWorld.Scale3D.ZW.m128d_f64[1] = dVar16;
      dVar14 = *(double *)&this->field_0x1f8;
      (pFVar76->Debug).RigidCurrentLocalToWorld.Rotation.XY.m128d_f64[0] =
           *(double *)&this->field_0x1f0;
      (pFVar76->Debug).RigidCurrentLocalToWorld.Rotation.XY.m128d_f64[1] = dVar14;
      dVar14 = *(double *)&this->field_0x208;
      (pFVar76->Debug).RigidCurrentLocalToWorld.Rotation.ZW.m128d_f64[0] =
           *(double *)&this->field_0x200;
      (pFVar76->Debug).RigidCurrentLocalToWorld.Rotation.ZW.m128d_f64[1] = dVar14;
      dVar14 = *(double *)&this->field_0x218;
      (pFVar76->Debug).RigidCurrentLocalToWorld.Translation.XY.m128d_f64[0] =
           *(double *)&this->field_0x210;
      (pFVar76->Debug).RigidCurrentLocalToWorld.Translation.XY.m128d_f64[1] = dVar14;
      dVar14 = *(double *)&this->field_0x228;
      (pFVar76->Debug).RigidCurrentLocalToWorld.Translation.ZW.m128d_f64[0] =
           *(double *)&this->field_0x220;
      (pFVar76->Debug).RigidCurrentLocalToWorld.Translation.ZW.m128d_f64[1] = dVar14;
      dVar14 = *(double *)&this->field_0x238;
      (pFVar76->Debug).RigidCurrentLocalToWorld.Scale3D.XY.m128d_f64[0] =
           *(double *)&this->field_0x230;
      (pFVar76->Debug).RigidCurrentLocalToWorld.Scale3D.XY.m128d_f64[1] = dVar14;
      dVar14 = *(double *)&this->field_0x248;
      (pFVar76->Debug).RigidCurrentLocalToWorld.Scale3D.ZW.m128d_f64[0] =
           *(double *)&this->field_0x240;
      (pFVar76->Debug).RigidCurrentLocalToWorld.Scale3D.ZW.m128d_f64[1] = dVar14;
      dVar14 = (pFVar76->Debug).RigidCurrentLocalToWorld.Rotation.XY.m128d_f64[1];
      dVar15 = (pFVar76->Debug).RigidCurrentLocalToWorld.Rotation.ZW.m128d_f64[0];
      dVar16 = (pFVar76->Debug).RigidCurrentLocalToWorld.Rotation.ZW.m128d_f64[1];
      (pFVar76->Debug).RigidRestLocalToWorld.Rotation.XY.m128d_f64[0] =
           (pFVar76->Debug).RigidCurrentLocalToWorld.Rotation.XY.m128d_f64[0];
      (pFVar76->Debug).RigidRestLocalToWorld.Rotation.XY.m128d_f64[1] = dVar14;
      dVar14 = (pFVar76->Debug).RigidCurrentLocalToWorld.Translation.XY.m128d_f64[0];
      dVar17 = (pFVar76->Debug).RigidCurrentLocalToWorld.Translation.XY.m128d_f64[1];
      (pFVar76->Debug).RigidRestLocalToWorld.Rotation.ZW.m128d_f64[0] = dVar15;
      (pFVar76->Debug).RigidRestLocalToWorld.Rotation.ZW.m128d_f64[1] = dVar16;
      dVar15 = (pFVar76->Debug).RigidCurrentLocalToWorld.Translation.ZW.m128d_f64[0];
      dVar16 = (pFVar76->Debug).RigidCurrentLocalToWorld.Translation.ZW.m128d_f64[1];
      (pFVar76->Debug).RigidRestLocalToWorld.Translation.XY.m128d_f64[0] = dVar14;
      (pFVar76->Debug).RigidRestLocalToWorld.Translation.XY.m128d_f64[1] = dVar17;
      dVar14 = (pFVar76->Debug).RigidCurrentLocalToWorld.Scale3D.XY.m128d_f64[0];
      dVar17 = (pFVar76->Debug).RigidCurrentLocalToWorld.Scale3D.XY.m128d_f64[1];
      (pFVar76->Debug).RigidRestLocalToWorld.Translation.ZW.m128d_f64[0] = dVar15;
      (pFVar76->Debug).RigidRestLocalToWorld.Translation.ZW.m128d_f64[1] = dVar16;
      dVar15 = (pFVar76->Debug).RigidCurrentLocalToWorld.Scale3D.ZW.m128d_f64[0];
      dVar16 = (pFVar76->Debug).RigidCurrentLocalToWorld.Scale3D.ZW.m128d_f64[1];
      (pFVar76->Debug).RigidRestLocalToWorld.Scale3D.XY.m128d_f64[0] = dVar14;
      (pFVar76->Debug).RigidRestLocalToWorld.Scale3D.XY.m128d_f64[1] = dVar17;
      dVar14 = (pFVar76->Debug).RigidCurrentLocalToWorld.Rotation.XY.m128d_f64[0];
      dVar17 = (pFVar76->Debug).RigidCurrentLocalToWorld.Rotation.XY.m128d_f64[1];
      (pFVar76->Debug).RigidRestLocalToWorld.Scale3D.ZW.m128d_f64[0] = dVar15;
      (pFVar76->Debug).RigidRestLocalToWorld.Scale3D.ZW.m128d_f64[1] = dVar16;
      dVar15 = (pFVar76->Debug).RigidCurrentLocalToWorld.Rotation.ZW.m128d_f64[0];
      dVar16 = (pFVar76->Debug).RigidCurrentLocalToWorld.Rotation.ZW.m128d_f64[1];
      (pFVar76->Debug).RigidPreviousLocalToWorld.Rotation.XY.m128d_f64[0] = dVar14;
      (pFVar76->Debug).RigidPreviousLocalToWorld.Rotation.XY.m128d_f64[1] = dVar17;
      dVar14 = (pFVar76->Debug).RigidCurrentLocalToWorld.Translation.XY.m128d_f64[0];
      dVar17 = (pFVar76->Debug).RigidCurrentLocalToWorld.Translation.XY.m128d_f64[1];
      (pFVar76->Debug).RigidPreviousLocalToWorld.Rotation.ZW.m128d_f64[0] = dVar15;
      (pFVar76->Debug).RigidPreviousLocalToWorld.Rotation.ZW.m128d_f64[1] = dVar16;
      dVar15 = (pFVar76->Debug).RigidCurrentLocalToWorld.Translation.ZW.m128d_f64[0];
      dVar16 = (pFVar76->Debug).RigidCurrentLocalToWorld.Translation.ZW.m128d_f64[1];
      (pFVar76->Debug).RigidPreviousLocalToWorld.Translation.XY.m128d_f64[0] = dVar14;
      (pFVar76->Debug).RigidPreviousLocalToWorld.Translation.XY.m128d_f64[1] = dVar17;
      dVar14 = (pFVar76->Debug).RigidCurrentLocalToWorld.Scale3D.XY.m128d_f64[0];
      dVar17 = (pFVar76->Debug).RigidCurrentLocalToWorld.Scale3D.XY.m128d_f64[1];
      (pFVar76->Debug).RigidPreviousLocalToWorld.Translation.ZW.m128d_f64[0] = dVar15;
      (pFVar76->Debug).RigidPreviousLocalToWorld.Translation.ZW.m128d_f64[1] = dVar16;
      dVar15 = (pFVar76->Debug).RigidCurrentLocalToWorld.Scale3D.ZW.m128d_f64[0];
      dVar16 = (pFVar76->Debug).RigidCurrentLocalToWorld.Scale3D.ZW.m128d_f64[1];
      (pFVar76->Debug).RigidPreviousLocalToWorld.Scale3D.XY.m128d_f64[0] = dVar14;
      (pFVar76->Debug).RigidPreviousLocalToWorld.Scale3D.XY.m128d_f64[1] = dVar17;
      (pFVar76->Debug).RigidPreviousLocalToWorld.Scale3D.ZW.m128d_f64[0] = dVar15;
      (pFVar76->Debug).RigidPreviousLocalToWorld.Scale3D.ZW.m128d_f64[1] = dVar16;
      dVar14 = (pFVar76->Debug).RigidCurrentLocalToWorld.Rotation.XY.m128d_f64[1];
      (pFVar76->LocalToWorld).Rotation.XY.m128d_f64[0] =
           (pFVar76->Debug).RigidCurrentLocalToWorld.Rotation.XY.m128d_f64[0];
      (pFVar76->LocalToWorld).Rotation.XY.m128d_f64[1] = dVar14;
      dVar14 = (pFVar76->Debug).RigidCurrentLocalToWorld.Rotation.ZW.m128d_f64[1];
      (pFVar76->LocalToWorld).Rotation.ZW.m128d_f64[0] =
           (pFVar76->Debug).RigidCurrentLocalToWorld.Rotation.ZW.m128d_f64[0];
      (pFVar76->LocalToWorld).Rotation.ZW.m128d_f64[1] = dVar14;
      dVar14 = (pFVar76->Debug).RigidCurrentLocalToWorld.Translation.XY.m128d_f64[1];
      (pFVar76->LocalToWorld).Translation.XY.m128d_f64[0] =
           (pFVar76->Debug).RigidCurrentLocalToWorld.Translation.XY.m128d_f64[0];
      (pFVar76->LocalToWorld).Translation.XY.m128d_f64[1] = dVar14;
      dVar14 = (pFVar76->Debug).RigidCurrentLocalToWorld.Translation.ZW.m128d_f64[1];
      (pFVar76->LocalToWorld).Translation.ZW.m128d_f64[0] =
           (pFVar76->Debug).RigidCurrentLocalToWorld.Translation.ZW.m128d_f64[0];
      (pFVar76->LocalToWorld).Translation.ZW.m128d_f64[1] = dVar14;
      dVar14 = (pFVar76->Debug).RigidCurrentLocalToWorld.Scale3D.XY.m128d_f64[1];
      (pFVar76->LocalToWorld).Scale3D.XY.m128d_f64[0] =
           (pFVar76->Debug).RigidCurrentLocalToWorld.Scale3D.XY.m128d_f64[0];
      (pFVar76->LocalToWorld).Scale3D.XY.m128d_f64[1] = dVar14;
      dVar14 = (pFVar76->Debug).RigidCurrentLocalToWorld.Scale3D.ZW.m128d_f64[1];
      (pFVar76->LocalToWorld).Scale3D.ZW.m128d_f64[0] =
           (pFVar76->Debug).RigidCurrentLocalToWorld.Scale3D.ZW.m128d_f64[0];
      (pFVar76->LocalToWorld).Scale3D.ZW.m128d_f64[1] = dVar14;
      pTVar67 = UGroomAsset::GetHairGroupsPlatformData((this->GroomAsset).field0_0x0.DebugPtr);
      if ((pTVar67->ArrayNum <= (int)uVar103) &&
         (bVar53 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar53)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      local_1a0 = (FHairStrandsBulkData *)((pTVar67->AllocatorInstance).Data + lVar71 * 2000);
      pTVar80 = UGroomAsset::GetHairGroupsResources((this->GroomAsset).field0_0x0.DebugPtr);
      if ((pTVar80->ArrayNum <= (int)uVar103) &&
         (bVar53 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar53)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      local_168 = (pTVar80->AllocatorInstance).Data + lVar71 * 0x58;
      EVar59 = UGroomAsset::GetHairInterpolationType((this->GroomAsset).field0_0x0.DebugPtr);
      if (EVar59 == None) {
        local_1f4 = NoneSkinning;
      }
      else if (EVar59 == RigidTransform) {
        local_1f4 = RigidSkinning;
      }
      else if (EVar59 == OffsetTransform) {
        local_1f4 = OffsetSkinning;
      }
      else {
        local_1f4 = SmoothSkinning;
        if (EVar59 != SmoothTransform) {
          local_1f4 = NoneSkinning;
        }
      }
      UGroomAsset::GetAssetPathName((this->GroomAsset).field0_0x0.DebugPtr,(int)&local_188);
      bVar53 = false;
      this_00 = ::operator_new(0x5a0);
      pFVar81 = pFVar117;
      if (this_00 != (FHairGroupPublicData *)0x0) {
        pFVar81 = FHairGroupPublicData::FHairGroupPublicData(this_00,uVar103,&local_188);
      }
      uVar103 = local_224;
      ppFVar3 = &pFVar76->HairGroupPublicData;
      *ppFVar3 = pFVar81;
      pFVar81->Instance = (FHairStrandsInstance *)pFVar76;
      (*ppFVar3)->bDebugDrawLODInfo = this->bPreviewMode;
      (*ppFVar3)->DebugScreenSize = 0.0;
      pFVar82 = GetHairGroupDebugColor(&local_98,local_224);
      uVar18 = *(undefined8 *)((longlong)&pFVar82->field0_0x0 + 8);
      pFVar81 = *ppFVar3;
      *(undefined8 *)&(pFVar81->DebugGroupColor).field0_0x0 = *(undefined8 *)&pFVar82->field0_0x0;
      *(undefined8 *)((longlong)&(pFVar81->DebugGroupColor).field0_0x0 + 8) = uVar18;
      local_1b0.Data = (FScriptContainerElement *)0x0;
      local_1a8 = 0;
      local_1c0.Data = (FScriptContainerElement *)0x0;
      local_1b8 = 0;
      local_1d0.Data = (FScriptContainerElement *)0x0;
      local_1c8 = 0;
      pTVar83 = UGroomAsset::GetHairGroupsLOD((this->GroomAsset).field0_0x0.DebugPtr);
      if ((pTVar83->ArrayNum <= (int)uVar103) &&
         (bVar56 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar56)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      local_198 = (FHairCardsBulkData *)(pTVar83->AllocatorInstance).Data;
      local_1d8 = lVar71 * 3;
      local_208 = *(uint *)((longlong)
                            &(((FDebug *)&local_198->CoverageTexture)->RigidRestLocalToWorld).
                             Rotation.XY + lVar71 * 0x18 + -0x70);
      pFVar47 = local_218;
      if (local_208 != 0) {
        do {
          lVar71 = local_1d8;
          uVar110 = (uint)pFVar117;
          uVar103 = 0;
          if ((int)uVar110 <
              *(int *)((longlong)
                       (&(((FDebug *)&local_198->CoverageTexture)->RigidRestLocalToWorld).Rotation.
                         XY + -7) + local_1d8 * 8)) {
            uVar103 = ~uVar110 >> 0x1f;
          }
          if ((uVar103 == 0) &&
             (bVar56 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar56)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          pUVar10 = (&local_198->TangentTexture)[lVar71];
          EVar50 = UGroomAsset::GetBindingType
                             ((this->GroomAsset).field0_0x0.DebugPtr,local_224,uVar110);
          if (EVar50 == NoneBinding) {
LAB_14e01bc82:
            local_21c = 0;
          }
          else {
            if (EVar50 == Rigid) {
              pUVar112 = this->RegisteredMeshComponent;
              local_21c = 1;
            }
            else {
              if (EVar50 != Skinning) goto LAB_14e01bc82;
              local_21c = 2;
              pUVar112 = local_1e8;
            }
            if (pUVar112 == (UMeshComponent *)0x0) goto LAB_14e01bc82;
          }
          bVar56 = this->bUseCards;
          EVar49 = UGroomAsset::GetGeometryType
                             ((this->GroomAsset).field0_0x0.DebugPtr,local_224,uVar110);
          if (EVar49 == Strands) {
            bVar51 = IsHairStrandsEnabled(Strands,(EShaderPlatform)local_190);
            if ((!bVar51) || (bVar56 != false)) {
              EVar49 = Cards;
            }
          }
          uVar103 = local_224;
          if (EVar49 == Strands) {
            local_1f8 = 0;
          }
          else {
            local_1f8 = 1;
            if (EVar49 != Cards) {
              if (EVar49 == Meshes) {
                local_1f8 = 2;
              }
              else {
                local_1f8 = 3;
              }
            }
          }
          pUVar5 = (this->GroomAsset).field0_0x0.DebugPtr;
          if (pUVar5 == (UGroomAsset *)0x0) {
            local_228 = (FScriptContainerElement)0x0;
          }
          else {
            local_228 = (FScriptContainerElement)
                        UGroomAsset::IsSimulationEnable(pUVar5,local_224,uVar110);
          }
          if ((this->SimulationSettings).bOverrideSettings != false) {
            if ((local_228 == (FScriptContainerElement)0x0) ||
               ((this->SimulationSettings).SolverSettings.bEnableSimulation == false)) {
              local_228 = (FScriptContainerElement)0x0;
            }
            else {
              local_228 = (FScriptContainerElement)0x1;
            }
          }
          if (((local_1e8 == (UMeshComponent *)0x0) || (local_21c != 2)) ||
             (bVar56 = UGroomAsset::IsGlobalInterpolationEnable
                                 ((this->GroomAsset).field0_0x0.DebugPtr,uVar103,uVar110), !bVar56))
          {
            local_227[0] = (FScriptContainerElement)0x0;
          }
          else {
            local_227[0] = (FScriptContainerElement)0x1;
          }
          if ((bVar53) || (bVar53 = false, local_1f8 == 0)) {
            bVar53 = true;
          }
          pFVar123 = (FScriptContainerElement *)
                     ((longlong)&pUVar10->_padding_ + (longlong)(int)uVar110 * 0x1c + 4);
          if (((local_1b0.Data <= pFVar123) &&
              (pFVar123 < local_1b0.Data + (longlong)local_1a8._4_4_ * 4)) &&
             (bVar56 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar56)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          iVar63 = (int)local_1a8;
          if ((int)local_1a8 == local_1a8._4_4_) {
            iVar63 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&local_1b0,(int *)((longlong)&local_1a8 + 4));
          }
          local_1a8 = CONCAT44(local_1a8._4_4_,iVar63 + 1);
          pFVar12 = (FScriptContainerElement *)
                    ((longlong)&pUVar10->_padding_ + (longlong)(int)uVar110 * 0x1c + 4);
          *(undefined4 *)(local_1b0.Data + (longlong)iVar63 * 4) = *(undefined4 *)pFVar123;
          if (((local_1c0.Data <= pFVar12) && (pFVar12 < local_1c0.Data + local_1b8._4_4_)) &&
             (bVar56 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar56)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          iVar63 = (int)local_1b8;
          if ((int)local_1b8 == local_1b8._4_4_) {
            iVar63 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x101,&local_1c0,(int *)((longlong)&local_1b8 + 4));
          }
          local_1b8 = CONCAT44(local_1b8._4_4_,iVar63 + 1);
          local_1c0.Data[iVar63] = *pFVar12;
          if (((local_1d0.Data <= (FScriptContainerElement *)&local_1f8) &&
              ((FScriptContainerElement *)&local_1f8 <
               local_1d0.Data + (longlong)local_1c8._4_4_ * 4)) &&
             (bVar56 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar56)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          iVar63 = (int)local_1c8;
          if ((int)local_1c8 == local_1c8._4_4_) {
            iVar63 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&local_1d0,(int *)((longlong)&local_1c8 + 4));
          }
          local_1c8 = CONCAT44(local_1c8._4_4_,iVar63 + 1);
          *(int *)(local_1d0.Data + (longlong)iVar63 * 4) = local_1f8;
          pFVar117 = *ppFVar3;
          pTVar105 = &pFVar117->BindingTypes;
          pFVar123 = (pTVar105->AllocatorInstance).Data;
          if (((pFVar123 <= (FScriptContainerElement *)&local_21c) &&
              ((FScriptContainerElement *)&local_21c <
               pFVar123 + (longlong)(pFVar117->BindingTypes).ArrayMax * 4)) &&
             (bVar56 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar56)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          iVar63 = (pFVar117->BindingTypes).ArrayNum;
          piVar1 = &(pFVar117->BindingTypes).ArrayMax;
          if (iVar63 == *piVar1) {
            iVar63 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&pTVar105->AllocatorInstance,piVar1);
          }
          (pFVar117->BindingTypes).ArrayNum = iVar63 + 1;
          *(int *)((pTVar105->AllocatorInstance).Data + (longlong)iVar63 * 4) = local_21c;
          pFVar117 = *ppFVar3;
          pTVar106 = &pFVar117->LODSimulations;
          pFVar123 = (pTVar106->AllocatorInstance).Data;
          if (((pFVar123 <= &local_228) &&
              (&local_228 < pFVar123 + (pFVar117->LODSimulations).ArrayMax)) &&
             (bVar56 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar56)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          iVar63 = (pFVar117->LODSimulations).ArrayNum;
          piVar1 = &(pFVar117->LODSimulations).ArrayMax;
          if (iVar63 == *piVar1) {
            iVar63 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x101,&pTVar106->AllocatorInstance,piVar1);
          }
          (pFVar117->LODSimulations).ArrayNum = iVar63 + 1;
          (pTVar106->AllocatorInstance).Data[iVar63] = local_228;
          pFVar117 = *ppFVar3;
          pTVar106 = &pFVar117->LODGlobalInterpolations;
          pFVar123 = (pTVar106->AllocatorInstance).Data;
          if (((pFVar123 <= local_227) &&
              (local_227 < pFVar123 + (pFVar117->LODGlobalInterpolations).ArrayMax)) &&
             (bVar56 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar56)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          iVar63 = (pFVar117->LODGlobalInterpolations).ArrayNum;
          piVar1 = &(pFVar117->LODGlobalInterpolations).ArrayMax;
          if (iVar63 == *piVar1) {
            iVar63 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x101,&pTVar106->AllocatorInstance,piVar1);
          }
          (pFVar117->LODGlobalInterpolations).ArrayNum = iVar63 + 1;
          pFVar117 = (FHairGroupPublicData *)(ulonglong)(uVar110 + 1);
          (pTVar106->AllocatorInstance).Data[iVar63] = local_227[0];
          pFVar47 = pFVar76;
        } while (uVar110 + 1 < local_208);
      }
      local_218 = pFVar47;
      uVar103 = local_224;
      pFVar76->HairGroupPublicData->bIsSimulationCacheEnable =
           (pFVar76->Debug).GroomCacheType == Guides;
      bVar56 = UGroomAsset::IsDeformationEnable((this->GroomAsset).field0_0x0.DebugPtr,local_224);
      if (bVar56) {
        pUVar84 = TPersistentObjectPtr<FSoftObjectPath>::Get
                            ((TPersistentObjectPtr<FSoftObjectPath> *)&this->GroomSolver);
        if (pUVar84 == (UObject *)0x0) {
LAB_14e01c199:
          if (((this->MeshDeformer).field0_0x0.DebugPtr == (UMeshDeformer *)0x0) &&
             (EVar60 = UGroomAsset::GetGuideType((this->GroomAsset).field0_0x0.DebugPtr,uVar103),
             EVar60 != Rigged)) goto LAB_14e01c1ba;
          bVar56 = true;
        }
        else {
          pUVar85 = Z_Construct_UClass_UMeshComponent_NoRegister();
          iVar63 = (int)pUVar85->_padding_;
          if ((*(int *)(*(longlong *)&pUVar84->field_0x10 + 0x38) < iVar63) ||
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&pUVar84->field_0x10 + 0x30) + (longlong)iVar63 * 8) !=
              &pUVar85->_padding_)) goto LAB_14e01c199;
          bVar56 = true;
          local_218 = pFVar76;
        }
      }
      else {
LAB_14e01c1ba:
        bVar56 = false;
      }
      FVar45.Data = local_1b0.Data;
      pFVar76->HairGroupPublicData->bIsDeformationEnable = bVar56;
      pFVar117 = pFVar76->HairGroupPublicData;
      pTVar107 = &pFVar117->LODScreenSizes;
      if (pTVar107 != (TArray<float,TSizedDefaultAllocator<32>_> *)&local_1b0) {
        iVar63 = (int)local_1a8;
        lVar71 = (longlong)(int)local_1a8;
        piVar1 = &(pFVar117->LODScreenSizes).ArrayMax;
        (pFVar117->LODScreenSizes).ArrayNum = (int)local_1a8;
        if (((int)local_1a8 == 0) && (*piVar1 == 0)) {
          *piVar1 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,(int)local_1a8,*piVar1,&pTVar107->AllocatorInstance,(int)local_1a8,piVar1);
          if (iVar63 != 0) {
            memcpy((pTVar107->AllocatorInstance).Data,FVar45.Data,lVar71 << 2);
          }
        }
      }
      FVar45.Data = local_1c0.Data;
      pFVar117 = pFVar76->HairGroupPublicData;
      pTVar106 = &pFVar117->LODVisibilities;
      if (pTVar106 != (TArray<bool,TSizedDefaultAllocator<32>_> *)&local_1c0) {
        iVar63 = (int)local_1b8;
        _Size = (size_t)(int)local_1b8;
        piVar1 = &(pFVar117->LODVisibilities).ArrayMax;
        (pFVar117->LODVisibilities).ArrayNum = (int)local_1b8;
        if (((int)local_1b8 == 0) && (*piVar1 == 0)) {
          *piVar1 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,(int)local_1b8,*piVar1,&pTVar106->AllocatorInstance,(int)local_1b8,piVar1);
          if (iVar63 != 0) {
            memcpy((pTVar106->AllocatorInstance).Data,FVar45.Data,_Size);
          }
        }
      }
      FVar45.Data = local_1d0.Data;
      pFVar117 = pFVar76->HairGroupPublicData;
      pTVar108 = &pFVar117->LODGeometryTypes;
      if (pTVar108 != (TArray<EHairGeometryType,TSizedDefaultAllocator<32>_> *)&local_1d0) {
        iVar63 = (int)local_1c8;
        lVar71 = (longlong)(int)local_1c8;
        piVar1 = &(pFVar117->LODGeometryTypes).ArrayMax;
        (pFVar117->LODGeometryTypes).ArrayNum = (int)local_1c8;
        if (((int)local_1c8 == 0) && (*piVar1 == 0)) {
          *piVar1 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,(int)local_1c8,*piVar1,&pTVar108->AllocatorInstance,(int)local_1c8,piVar1);
          if (iVar63 != 0) {
            memcpy((pTVar108->AllocatorInstance).Data,FVar45.Data,lVar71 << 2);
          }
        }
      }
      EVar61 = UGroomAsset::GetLODMode((this->GroomAsset).field0_0x0.DebugPtr);
      pFVar76->HairGroupPublicData->bAutoLOD = EVar61 == Auto;
      fVar125 = UGroomAsset::GetAutoLODBias((this->GroomAsset).field0_0x0.DebugPtr,uVar103);
      pUVar112 = local_1e8;
      pFVar76->HairGroupPublicData->AutoLODBias = fVar125;
      pFVar76->HairGroupPublicData->BindingMinMeshLOD = -1;
      if ((local_1e8 != (UMeshComponent *)0x0) &&
         (pTVar86 = UGroomBindingAsset::GetHairGroupsPlatformData((UGroomBindingAsset *)local_1e8),
         (int)uVar103 < pTVar86->ArrayNum)) {
        pFVar76->HairGroupPublicData->BindingMinMeshLOD =
             *(int *)((pTVar86->AllocatorInstance).Data + local_1e0 * 0x38 + 0x30);
      }
      lVar71 = local_1e0;
      if (local_1d0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1d0.Data);
      }
      if (local_1c0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1c0.Data);
      }
      if (local_1b0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1b0.Data);
      }
      pFVar122 = local_1a0;
      if ((local_1a0->Header).PointCount == 0) {
LAB_14e01c4a0:
        if (pFVar76->HairGroupPublicData->bIsSimulationCacheEnable != false) goto LAB_14e01c4b8;
        bVar56 = false;
      }
      else {
        if ((local_180.ArrayNum <= (int)uVar103) &&
           (bVar56 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar56)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        if (local_180.AllocatorInstance.Data[lVar71] == (FScriptContainerElement)0x0) {
          if ((local_160.ArrayNum <= (int)uVar103) &&
             (bVar56 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar56)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          if (local_160.AllocatorInstance.Data[lVar71] == (FScriptContainerElement)0x0) {
            if ((local_150.ArrayNum <= (int)uVar103) &&
               (bVar56 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar56)) {
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            if (local_150.AllocatorInstance.Data[lVar71] == (FScriptContainerElement)0x0)
            goto LAB_14e01c4a0;
          }
        }
LAB_14e01c4b8:
        bVar56 = true;
        if (pUVar112 != (UMeshComponent *)0x0) {
          if ((this->RegisteredMeshComponent == (UMeshComponent *)0x0) &&
             (bVar51 = ::FDebug::CheckVerifyFailedImpl2
                                 ("RegisteredMeshComponent",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomComponent.cpp"
                                  ,0xbc6,L""), bVar51)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          pTVar73 = UGroomBindingAsset::GetHairGroupResources((UGroomBindingAsset *)pUVar112);
          if ((pTVar73->ArrayNum <= (int)uVar103) &&
             (bVar51 = ::FDebug::CheckVerifyFailedImpl2
                                 ("GroupIt < LocalBindingAsset->GetHairGroupResources().Num()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomComponent.cpp"
                                  ,0xbc8,L""), bVar51)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          pTVar73 = UGroomBindingAsset::GetHairGroupResources((UGroomBindingAsset *)pUVar112);
          if ((pTVar73->ArrayNum <= (int)uVar103) &&
             (bVar51 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar51)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          (pFVar76->Guides).RestRootResource =
               *(FHairStrandsRestRootResource **)
                ((pTVar73->AllocatorInstance).Data + local_1e0 * 0x20);
          pFVar91 = ::operator_new(0x18);
          pFVar92 = (FHairStrandsDeformedRootResource *)0x0;
          if (pFVar91 != (FHairStrandsDeformedRootResource *)0x0) {
            pFVar92 = FHairStrandsDeformedRootResource::FHairStrandsDeformedRootResource
                                (pFVar91,(pFVar76->Guides).RestRootResource,Guides,local_res20,
                                 &local_188);
          }
          (pFVar76->Guides).DeformedRootResource = pFVar92;
        }
        pFVar87 = UGroomAsset::AllocateGuidesResources
                            ((this->GroomAsset).field0_0x0.DebugPtr,uVar103);
        (pFVar76->Guides).RestResource = pFVar87;
        if ((*(longlong *)local_168 == 0) &&
           (bVar51 = ::FDebug::CheckVerifyFailedImpl2
                               ("GroupResources.Guides.RestResource",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomComponent.cpp"
                                ,0xbd6,L""), bVar51)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        pFVar93 = ::operator_new(0x1f8);
        pFVar94 = (FHairStrandsDeformedResource *)0x0;
        if (pFVar93 != (FHairStrandsDeformedResource *)0x0) {
          pFVar94 = FHairStrandsDeformedResource::FHairStrandsDeformedResource
                              (pFVar93,pFVar122,Guides,local_res20,&local_188);
        }
        (pFVar76->Guides).DeformedResource = pFVar94;
        bVar51 = IsSimulationEnable(this,uVar103,-1);
        (pFVar76->Guides).bIsSimulationEnable = bVar51;
        if ((pUVar112 == (UMeshComponent *)0x0) ||
           (bVar51 = UGroomAsset::IsGlobalInterpolationEnable
                               ((this->GroomAsset).field0_0x0.DebugPtr,uVar103,-1), !bVar51)) {
          bVar51 = false;
        }
        else {
          bVar51 = true;
        }
        (pFVar76->Guides).bHasGlobalInterpolation = bVar51;
        bVar51 = IsDeformationEnable(this,uVar103);
        (pFVar76->Guides).bIsDeformationEnable = bVar51;
        (pFVar76->Guides).bIsSimulationCacheEnable =
             pFVar76->HairGroupPublicData->bIsSimulationCacheEnable;
      }
      pFVar88 = GetGroomGroupsDesc(&local_88,(this->GroomAsset).field0_0x0.DebugPtr,this,uVar103);
      fVar125 = pFVar88->HairWidth;
      bVar51 = pFVar88->HairWidth_Override;
      uVar19 = *(undefined3 *)&pFVar88->field_0x9;
      fVar20 = pFVar88->HairRootScale;
      bVar57 = pFVar88->HairRootScale_Override;
      uVar21 = *(undefined3 *)&pFVar88->field_0x11;
      fVar22 = pFVar88->HairTipScale;
      bVar23 = pFVar88->HairTipScale_Override;
      uVar24 = *(undefined3 *)&pFVar88->field_0x19;
      fVar25 = pFVar88->HairShadowDensity;
      bVar26 = pFVar88->HairShadowDensity_Override;
      uVar27 = *(undefined3 *)&pFVar88->field_0x21;
      fVar28 = pFVar88->HairRaytracingRadiusScale;
      bVar29 = pFVar88->HairRaytracingRadiusScale_Override;
      bVar30 = pFVar88->bUseHairRaytracingGeometry;
      bVar31 = pFVar88->bUseHairRaytracingGeometry_Override;
      uVar32 = pFVar88->field_0x2b;
      fVar33 = pFVar88->LODBias;
      bVar34 = pFVar88->bUseStableRasterization;
      bVar35 = pFVar88->bUseStableRasterization_Override;
      bVar36 = pFVar88->bScatterSceneLighting;
      bVar37 = pFVar88->bScatterSceneLighting_Override;
      bVar38 = pFVar88->bSupportVoxelization;
      bVar39 = pFVar88->bSupportVoxelization_Override;
      uVar40 = *(undefined2 *)&pFVar88->field_0x36;
      fVar41 = pFVar88->HairLengthScale;
      bVar42 = pFVar88->HairLengthScale_Override;
      uVar43 = *(undefined3 *)&pFVar88->field_0x3d;
      (pFVar76->Strands).Modifier.HairLength = pFVar88->HairLength;
      (pFVar76->Strands).Modifier.HairWidth = fVar125;
      (pFVar76->Strands).Modifier.HairWidth_Override = bVar51;
      *(undefined3 *)&(pFVar76->Strands).Modifier.field_0x9 = uVar19;
      (pFVar76->Strands).Modifier.HairRootScale = fVar20;
      (pFVar76->Strands).Modifier.HairRootScale_Override = bVar57;
      *(undefined3 *)&(pFVar76->Strands).Modifier.field_0x11 = uVar21;
      (pFVar76->Strands).Modifier.HairTipScale = fVar22;
      (pFVar76->Strands).Modifier.HairTipScale_Override = bVar23;
      *(undefined3 *)&(pFVar76->Strands).Modifier.field_0x19 = uVar24;
      (pFVar76->Strands).Modifier.HairShadowDensity = fVar25;
      (pFVar76->Strands).Modifier.HairShadowDensity_Override = bVar26;
      *(undefined3 *)&(pFVar76->Strands).Modifier.field_0x21 = uVar27;
      (pFVar76->Strands).Modifier.HairRaytracingRadiusScale = fVar28;
      (pFVar76->Strands).Modifier.HairRaytracingRadiusScale_Override = bVar29;
      (pFVar76->Strands).Modifier.bUseHairRaytracingGeometry = bVar30;
      (pFVar76->Strands).Modifier.bUseHairRaytracingGeometry_Override = bVar31;
      (pFVar76->Strands).Modifier.field_0x2b = uVar32;
      (pFVar76->Strands).Modifier.LODBias = fVar33;
      (pFVar76->Strands).Modifier.bUseStableRasterization = bVar34;
      (pFVar76->Strands).Modifier.bUseStableRasterization_Override = bVar35;
      (pFVar76->Strands).Modifier.bScatterSceneLighting = bVar36;
      (pFVar76->Strands).Modifier.bScatterSceneLighting_Override = bVar37;
      (pFVar76->Strands).Modifier.bSupportVoxelization = bVar38;
      (pFVar76->Strands).Modifier.bSupportVoxelization_Override = bVar39;
      *(undefined2 *)&(pFVar76->Strands).Modifier.field_0x36 = uVar40;
      (pFVar76->Strands).Modifier.HairLengthScale = fVar41;
      (pFVar76->Strands).Modifier.HairLengthScale_Override = bVar42;
      *(undefined3 *)&(pFVar76->Strands).Modifier.field_0x3d = uVar43;
      if ((bVar53) && (pFVar122[1].Header.PointCount != 0)) {
        if (((this->GroomGroupsDesc).ArrayNum <= (int)uVar103) &&
           (bVar53 = ::FDebug::CheckVerifyFailedImpl2
                               ("GroupIt < GroomGroupsDesc.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomComponent.cpp"
                                ,0xbe9,L""), bVar53)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        pFVar76->HairGroupPublicData->RestPointCount = pFVar122[1].Header.PointCount;
        pFVar76->HairGroupPublicData->RestCurveCount = pFVar122[1].Header.CurveCount;
        pFVar76->HairGroupPublicData->ClusterCount = 0;
        pFVar76->HairGroupPublicData->ClusterScale = 0.0;
        if (bVar56) {
          pFVar89 = UGroomAsset::AllocateInterpolationResources
                              ((this->GroomAsset).field0_0x0.DebugPtr,uVar103);
          (pFVar76->Strands).InterpolationResource = pFVar89;
          if ((pFVar89 == (FHairStrandsInterpolationResource *)0x0) &&
             (bVar53 = ::FDebug::CheckVerifyFailedImpl2
                                 ("HairGroupInstance->Strands.InterpolationResource",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomComponent.cpp"
                                  ,0xbf4,L""), bVar53)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
        }
        bVar53 = false;
        bVar56 = false;
        pTVar83 = UGroomAsset::GetHairGroupsLOD((this->GroomAsset).field0_0x0.DebugPtr);
        if ((pTVar83->ArrayNum <= (int)uVar103) &&
           (bVar51 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar51)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        uVar110 = *(uint *)((pTVar83->AllocatorInstance).Data + local_1e0 * 0x18 + 0x10);
        uVar121 = 0;
        bVar51 = false;
        if (uVar110 != 0) {
          do {
            bVar53 = bVar51;
            if (((-1 < (int)uVar121) &&
                ((int)uVar121 < (pFVar76->HairGroupPublicData->LODGeometryTypes).ArrayNum)) &&
               (*(int *)((pFVar76->HairGroupPublicData->LODGeometryTypes).AllocatorInstance.Data +
                        (longlong)(int)uVar121 * 4) == 0)) {
              if (local_1e8 == (UMeshComponent *)0x0) {
LAB_14e01c8a1:
                if (((pFVar76->HairGroupPublicData->LODSimulations).ArrayNum <= (int)uVar121) ||
                   ((pFVar76->HairGroupPublicData->LODSimulations).AllocatorInstance.Data
                    [(int)uVar121] == (FScriptContainerElement)0x0)) goto LAB_14e01c8c3;
              }
              else {
                if ((((int)uVar121 < (pFVar76->HairGroupPublicData->BindingTypes).ArrayNum) &&
                    (*(int *)((pFVar76->HairGroupPublicData->BindingTypes).AllocatorInstance.Data +
                             (longlong)(int)uVar121 * 4) == 2)) ||
                   (((int)uVar121 < (pFVar76->HairGroupPublicData->LODGlobalInterpolations).ArrayNum
                    && ((pFVar76->HairGroupPublicData->LODGlobalInterpolations).AllocatorInstance.
                        Data[(int)uVar121] != (FScriptContainerElement)0x0)))) {
                  bVar53 = true;
                }
                if (((pFVar76->HairGroupPublicData->BindingTypes).ArrayNum <= (int)uVar121) ||
                   (*(int *)((pFVar76->HairGroupPublicData->BindingTypes).AllocatorInstance.Data +
                            (longlong)(int)uVar121 * 4) != 2)) goto LAB_14e01c8a1;
              }
              bVar56 = true;
            }
LAB_14e01c8c3:
            uVar121 = uVar121 + 1;
            pFVar122 = local_1a0;
            bVar51 = bVar53;
          } while (uVar121 < uVar110);
        }
        if (((this->GroomGroupsDesc).ArrayNum <= (int)uVar103) &&
           (bVar51 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar51)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        if ((this->GroomGroupsDesc).AllocatorInstance.Data[local_1e0 * 0x40 + 0x3c] !=
            (FScriptContainerElement)0x0) {
          bVar56 = true;
        }
        if ((pFVar76->Debug).GroomCacheType != None) {
          bVar56 = true;
        }
        if (pFVar76->HairGroupPublicData->bIsDeformationEnable != false) {
          bVar56 = true;
        }
        if ((this->MeshDeformer).field0_0x0.DebugPtr == (UMeshDeformer *)0x0) {
          pUVar84 = TPersistentObjectPtr<FSoftObjectPath>::Get
                              ((TPersistentObjectPtr<FSoftObjectPath> *)&this->GroomSolver);
          if (pUVar84 != (UObject *)0x0) {
            pUVar85 = Z_Construct_UClass_UMeshComponent_NoRegister();
            iVar63 = (int)pUVar85->_padding_;
            if ((iVar63 <= *(int *)(*(longlong *)&pUVar84->field_0x10 + 0x38)) &&
               ((longlong *)
                *(undefined1 **)
                 (*(longlong *)(*(longlong *)&pUVar84->field_0x10 + 0x30) + (longlong)iVar63 * 8) ==
                &pUVar85->_padding_)) goto LAB_14e01c995;
          }
        }
        else {
LAB_14e01c995:
          bVar56 = true;
          pFVar76->bSupportStreaming = false;
        }
        pTVar99 = (TConsoleVariableData<int> *)0x0;
        (pFVar76->Strands).ViewRayTracingMask = None;
        bVar51 = IsHairRayTracingEnabled();
        if ((bVar51) && ((this->field_0x27c & 8) != 0)) {
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
               < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
            if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
                (IConsoleManager::SetupSingleton(),
                IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
               (bVar51 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Singleton != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                    ,0x4fb,L""), bVar51)) {
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            plVar98 = (longlong *)(**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))();
            if (plVar98 != (longlong *)0x0) {
              pTVar99 = (TConsoleVariableData<int> *)(**(code **)(*plVar98 + 0x68))(plVar98);
            }
            CVarLocalVariablePathTracing = pTVar99;
            _Init_thread_footer(&::_TSS0);
          }
          pTVar99 = CVarLocalVariablePathTracing;
          if (CVarLocalVariablePathTracing != (TConsoleVariableData<int> *)0x0) {
            bVar51 = IsInParallelGameThread();
            if ((bVar51) || (bVar51 = IsInGameThread(), bVar51)) {
              lVar71 = 0;
            }
            else {
              lVar71 = 4;
            }
            if (*(int *)((longlong)pTVar99->ShadowedValue + lVar71) != 0) {
              pEVar4 = &(pFVar76->Strands).ViewRayTracingMask;
              *pEVar4 = *pEVar4 | PathTracing;
            }
          }
          if ((pFVar76->Strands).Modifier.bUseHairRaytracingGeometry != false) {
            pEVar4 = &(pFVar76->Strands).ViewRayTracingMask;
            *pEVar4 = *pEVar4 | RayTracing;
          }
          if ((pFVar76->Strands).ViewRayTracingMask != None) {
            if (bVar56) {
              pFVar90 = ::operator_new(0x1b0);
              if (pFVar90 == (FHairStrandsRaytracingResource *)0x0) {
                (pFVar76->Strands).RenRaytracingResource = (FHairStrandsRaytracingResource *)0x0;
                (pFVar76->Strands).RenRaytracingResourceOwned = true;
              }
              else {
                pFVar90 = FHairStrandsRaytracingResource::FHairStrandsRaytracingResource
                                    (pFVar90,pFVar122 + 1,local_res20,&local_188);
                (pFVar76->Strands).RenRaytracingResource = pFVar90;
                (pFVar76->Strands).RenRaytracingResourceOwned = true;
              }
            }
            else {
              (pFVar76->Strands).RenRaytracingResourceOwned = false;
              pFVar90 = UGroomAsset::AllocateStrandsRaytracingResources
                                  ((this->GroomAsset).field0_0x0.DebugPtr,uVar103);
              (pFVar76->Strands).RenRaytracingResource = pFVar90;
              if ((pFVar90 == (FHairStrandsRaytracingResource *)0x0) &&
                 (bVar51 = ::FDebug::CheckVerifyFailedImpl2
                                     ("HairGroupInstance->Strands.RenRaytracingResource",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomComponent.cpp"
                                      ,0xc4c,L""), bVar51)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
            }
          }
        }
        pUVar112 = local_1e8;
        if (bVar53) {
          if ((local_1e8 == (UMeshComponent *)0x0) &&
             (bVar53 = ::FDebug::CheckVerifyFailedImpl2
                                 ("LocalBindingAsset",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomComponent.cpp"
                                  ,0xc54,L""), bVar53)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          if ((this->RegisteredMeshComponent == (UMeshComponent *)0x0) &&
             (bVar53 = ::FDebug::CheckVerifyFailedImpl2
                                 ("RegisteredMeshComponent",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomComponent.cpp"
                                  ,0xc55,L""), bVar53)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          pTVar73 = UGroomBindingAsset::GetHairGroupResources((UGroomBindingAsset *)pUVar112);
          if ((pTVar73->ArrayNum <= (int)uVar103) &&
             (bVar53 = ::FDebug::CheckVerifyFailedImpl2
                                 ("GroupIt < LocalBindingAsset->GetHairGroupResources().Num()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomComponent.cpp"
                                  ,0xc56,L""), bVar53)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          pTVar73 = UGroomBindingAsset::GetHairGroupResources((UGroomBindingAsset *)pUVar112);
          if ((pTVar73->ArrayNum <= (int)uVar103) &&
             (bVar53 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar53)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          (pFVar76->Strands).RestRootResource =
               *(FHairStrandsRestRootResource **)
                ((pTVar73->AllocatorInstance).Data + local_1e0 * 0x20 + 8);
          pFVar91 = ::operator_new(0x18);
          pFVar92 = (FHairStrandsDeformedRootResource *)0x0;
          if (pFVar91 != (FHairStrandsDeformedRootResource *)0x0) {
            pFVar92 = FHairStrandsDeformedRootResource::FHairStrandsDeformedRootResource
                                (pFVar91,(pFVar76->Strands).RestRootResource,Strands,local_res20,
                                 &local_188);
          }
          (pFVar76->Strands).DeformedRootResource = pFVar92;
        }
        pFVar123 = local_168;
        (pFVar76->Strands).RestResource = *(FHairStrandsRestResource **)(local_168 + 8);
        if (bVar56) {
          pFVar93 = ::operator_new(0x1f8);
          pFVar94 = (FHairStrandsDeformedResource *)0x0;
          if (pFVar93 != (FHairStrandsDeformedResource *)0x0) {
            pFVar94 = FHairStrandsDeformedResource::FHairStrandsDeformedResource
                                (pFVar93,pFVar122 + 1,Strands,local_res20,&local_188);
          }
          (pFVar76->Strands).DeformedResource = pFVar94;
        }
        pFVar11 = *(FHairStrandsClusterResource **)(pFVar123 + 0x18);
        (pFVar76->Strands).ClusterResource = pFVar11;
        if (pFVar11 != (FHairStrandsClusterResource *)0x0) {
          if ((pFVar76->HairGroupPublicData == (FHairGroupPublicData *)0x0) &&
             (bVar53 = ::FDebug::CheckVerifyFailedImpl2
                                 ("HairGroupInstance->HairGroupPublicData",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomComponent.cpp"
                                  ,0xc6d,L""), bVar53)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          pFVar117 = pFVar76->HairGroupPublicData;
          iVar63 = *(int *)(*(longlong *)(*(longlong *)(pFVar123 + 0x18) + 0xc0) + 0x18);
          if (((pFVar117->LODScreenSizes).ArrayNum < iVar63) &&
             (bVar53 = ::FDebug::CheckVerifyFailedImpl2
                                 ("StrandsLODCount <= LODScreenSizes.Num()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomComponent.cpp"
                                  ,0xc71,L""), bVar53)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          if (((pFVar117->LODVisibilities).ArrayNum < iVar63) &&
             (bVar53 = ::FDebug::CheckVerifyFailedImpl2
                                 ("StrandsLODCount <= LODVisibilities.Num()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomComponent.cpp"
                                  ,0xc72,L""), bVar53)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          pFVar76->HairGroupPublicData->ClusterCount =
               (((pFVar76->Strands).ClusterResource)->BulkData->Header).ClusterCount;
          pFVar76->HairGroupPublicData->ClusterScale =
               (((pFVar76->Strands).ClusterResource)->BulkData->Header).ClusterScale;
        }
        this_01 = ::operator_new(0xf8);
        pFVar95 = (FHairStrandsCullingResource *)0x0;
        if (this_01 != (FHairStrandsCullingResource *)0x0) {
          pFVar117 = pFVar76->HairGroupPublicData;
          pFVar95 = FHairStrandsCullingResource::FHairStrandsCullingResource
                              (this_01,pFVar117->RestPointCount,pFVar117->RestCurveCount,
                               pFVar117->ClusterCount,local_res20,&local_188);
        }
        (pFVar76->Strands).CullingResource = pFVar95;
        pFVar76->HairGroupPublicData->Culling = &pFVar95->Resources;
        (pFVar76->Strands).HairInterpolationType = local_1f4;
      }
      local_208 = 0;
      local_120 = *(uint *)&local_1a0[2].Data.PointToCurve.Data;
      if (local_120 != 0) {
        pFVar118 = &pFVar76->Cards;
        local_200 = pFVar118;
        do {
          uVar103 = local_208;
          uVar121 = ~local_208;
          uVar110 = 0;
          if ((int)local_208 < *(int *)&local_1a0[2].Data.PointToCurve.Data) {
            uVar110 = uVar121 >> 0x1f;
          }
          if ((uVar110 == 0) &&
             (bVar53 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar53)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          lVar71 = (longlong)(int)uVar103;
          pFVar113 = (FHairCardsBulkData *)
                     (lVar71 * 0x428 + *(longlong *)&local_1a0[2].Data.PointToCurve);
          uVar110 = 0;
          if ((int)uVar103 < *(int *)(local_168 + 0x38)) {
            uVar110 = uVar121 >> 0x1f;
          }
          local_198 = pFVar113;
          if ((uVar110 == 0) &&
             (bVar53 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar53)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          uVar103 = (pFVar76->Cards).LODs.ArrayNum;
          lVar72 = (longlong)(int)uVar103;
          local_1d8 = *(longlong *)(local_168 + 0x30);
          iVar63 = (pFVar118->LODs).ArrayNum;
          if (iVar63 == (pFVar118->LODs).ArrayMax) {
            iVar63 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x868,(ForAnyElementType *)pFVar118,&(pFVar118->LODs).ArrayMax);
          }
          (pFVar118->LODs).ArrayNum = iVar63 + 1;
          pFVar123 = (pFVar118->LODs).AllocatorInstance.Data + (longlong)iVar63 * 0x68;
          DefaultConstructItems<FHairGroupInstance::FCards::FLOD,int>(pFVar123,1);
          if (0 < (pFVar113->Positions).ArrayNum) {
            UGroomAsset::GetAssetPathName((this->GroomAsset).field0_0x0.DebugPtr,(int)&local_138);
            pFVar117 = pFVar76->HairGroupPublicData;
            if (((int)uVar103 < 0) || ((pFVar117->BindingTypes).ArrayNum <= (int)uVar103)) {
              iVar63 = 0;
              if (-1 < (int)uVar103) goto LAB_14e01cf4a;
LAB_14e01cfbb:
              pFVar81 = pFVar76->HairGroupPublicData;
              FVar54 = (FScriptContainerElement)0x0;
              cVar52 = pFVar81->bIsDeformationEnable;
              if (-1 < (int)uVar103) goto LAB_14e01cfd1;
LAB_14e01d030:
              FVar102 = (FScriptContainerElement)0x0;
            }
            else {
              if (((pFVar117->BindingTypes).ArrayNum <= (int)uVar103) &&
                 (bVar53 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar53)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              pTVar105 = &pFVar117->BindingTypes;
              pFVar117 = pFVar76->HairGroupPublicData;
              iVar63 = *(int *)((pTVar105->AllocatorInstance).Data + lVar72 * 4);
LAB_14e01cf4a:
              if ((pFVar117->LODSimulations).ArrayNum <= (int)uVar103) goto LAB_14e01cfbb;
              uVar110 = 0;
              if ((int)uVar103 < (pFVar117->LODSimulations).ArrayNum) {
                uVar110 = ~uVar103 >> 0x1f;
              }
              if ((uVar110 == 0) &&
                 (bVar53 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar53)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              pFVar81 = pFVar76->HairGroupPublicData;
              FVar54 = (pFVar117->LODSimulations).AllocatorInstance.Data[lVar72];
              cVar52 = pFVar81->bIsDeformationEnable;
LAB_14e01cfd1:
              if ((pFVar81->LODGlobalInterpolations).ArrayNum <= (int)uVar103) goto LAB_14e01d030;
              uVar110 = 0;
              if ((int)uVar103 < (pFVar81->LODGlobalInterpolations).ArrayNum) {
                uVar110 = ~uVar103 >> 0x1f;
              }
              if ((uVar110 == 0) &&
                 (bVar53 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar53)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              FVar102 = (pFVar81->LODGlobalInterpolations).AllocatorInstance.Data[lVar72];
            }
            if ((FVar54 == (FScriptContainerElement)0x0) && (cVar52 == '\0')) {
              if (FVar102 != (FScriptContainerElement)0x0) goto LAB_14e01d0ad;
              if (iVar63 == 2) goto LAB_14e01d04f;
              bVar53 = false;
LAB_14e01d058:
              bVar56 = false;
            }
            else {
              if (FVar102 == (FScriptContainerElement)0x0) {
LAB_14e01d04f:
                bVar53 = true;
                if (iVar63 != 2) goto LAB_14e01d058;
              }
LAB_14e01d0ad:
              bVar56 = true;
              bVar53 = true;
              if (((FVar102 != (FScriptContainerElement)0x0) && (iVar63 != 2)) &&
                 (bVar51 = ::FDebug::CheckVerifyFailedImpl2
                                     ("BindingType == EHairBindingType::Skinning",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomComponent.cpp"
                                      ,0xc99,L""), bVar51)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
            }
            lVar44 = local_1d8;
            *(longlong *)pFVar123 = *(longlong *)(local_1d8 + lVar71 * 0x30);
            *(longlong *)(pFVar123 + 0x10) = *(longlong *)(local_1d8 + 8 + lVar71 * 0x30);
            pFVar113 = local_198;
            if (bVar53) {
              pFVar96 = ::operator_new(0xd0);
              pFVar113 = local_198;
              if (pFVar96 == (FHairCardsDeformedResource *)0x0) {
                *(longlong *)(pFVar123 + 8) = 0;
              }
              else {
                pFVar96 = FHairCardsDeformedResource::FHairCardsDeformedResource
                                    (pFVar96,local_198,false,&local_21d,&local_138);
                *(FHairCardsDeformedResource **)(pFVar123 + 8) = pFVar96;
              }
            }
            bVar51 = IsHairRayTracingEnabled();
            if (((bVar51) && (bVar51 = IsRayTracingAllowed(), bVar51)) &&
               ((this->field_0x27c & 8) != 0)) {
              if (bVar53) {
                pFVar90 = ::operator_new(0x1b0);
                if (pFVar90 == (FHairStrandsRaytracingResource *)0x0) {
                  *(longlong *)(pFVar123 + 0x18) = 0;
                  pFVar123[0x20] = (FScriptContainerElement)0x1;
                }
                else {
                  pFVar90 = FHairStrandsRaytracingResource::FHairStrandsRaytracingResource
                                      (pFVar90,*(FHairCardsBulkData **)
                                                (*(longlong *)pFVar123 + 0x1d8),&local_21d,
                                       &local_138);
                  *(FHairStrandsRaytracingResource **)(pFVar123 + 0x18) = pFVar90;
                  pFVar123[0x20] = (FScriptContainerElement)0x1;
                }
LAB_14e01d1e4:
                pUVar112 = local_1e8;
                *(longlong *)(pFVar123 + 0x48) = *(longlong *)(lVar44 + 0x18 + lVar71 * 0x30);
                if (bVar56) {
                  if ((local_1e8 == (UMeshComponent *)0x0) &&
                     (bVar53 = ::FDebug::CheckVerifyFailedImpl2
                                         ("LocalBindingAsset",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomComponent.cpp"
                                          ,0xcbe,L""), bVar53)) {
                    pcVar13 = (code *)swi(3);
                    (*pcVar13)();
                    return;
                  }
                  pTVar73 = UGroomBindingAsset::GetHairGroupResources
                                      ((UGroomBindingAsset *)pUVar112);
                  uVar110 = local_224;
                  if ((pTVar73->ArrayNum <= (int)local_224) &&
                     (bVar53 = ::FDebug::CheckVerifyFailedImpl2
                                         ("GroupIt < LocalBindingAsset->GetHairGroupResources().Num()"
                                          ,
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomComponent.cpp"
                                          ,0xcbf,L""), bVar53)) {
                    pcVar13 = (code *)swi(3);
                    (*pcVar13)();
                    return;
                  }
                  pTVar73 = UGroomBindingAsset::GetHairGroupResources
                                      ((UGroomBindingAsset *)pUVar112);
                  if ((pTVar73->ArrayNum <= (int)uVar110) &&
                     (bVar53 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar53)) {
                    pcVar13 = (code *)swi(3);
                    (*pcVar13)();
                    return;
                  }
                  pFVar12 = (pTVar73->AllocatorInstance).Data;
                  lVar116 = local_1e0 * 0x20;
                  uVar110 = 0;
                  if ((int)uVar103 < *(int *)(pFVar12 + lVar116 + 0x18)) {
                    uVar110 = ~uVar103 >> 0x1f;
                  }
                  if ((uVar110 == 0) &&
                     (bVar53 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar53)) {
                    pcVar13 = (code *)swi(3);
                    (*pcVar13)();
                    return;
                  }
                  *(longlong *)(pFVar123 + 0x38) =
                       *(longlong *)(*(longlong *)(pFVar12 + lVar116 + 0x10) + lVar72 * 8);
                  pFVar91 = ::operator_new(0x18);
                  pFVar92 = (FHairStrandsDeformedRootResource *)0x0;
                  if (pFVar91 != (FHairStrandsDeformedRootResource *)0x0) {
                    pFVar92 = FHairStrandsDeformedRootResource::FHairStrandsDeformedRootResource
                                        (pFVar91,*(FHairStrandsRestRootResource **)(pFVar123 + 0x38)
                                         ,Cards,&local_21d,&local_138);
                  }
                  *(FHairStrandsDeformedRootResource **)(pFVar123 + 0x40) = pFVar92;
                }
                *(longlong *)(pFVar123 + 0x28) = *(longlong *)(lVar44 + 0x10 + lVar71 * 0x30);
                pFVar93 = ::operator_new(0x1f8);
                pFVar94 = (FHairStrandsDeformedResource *)0x0;
                if (pFVar93 != (FHairStrandsDeformedResource *)0x0) {
                  pFVar94 = FHairStrandsDeformedResource::FHairStrandsDeformedResource
                                      (pFVar93,(FHairStrandsBulkData *)&pFVar113[1].CoverageTexture,
                                       Cards,&local_21d,&local_138);
                }
                *(FHairStrandsDeformedResource **)(pFVar123 + 0x30) = pFVar94;
                *(EHairInterpolationType *)(pFVar123 + 0x50) = local_1f4;
                pFVar118 = local_200;
                pFVar76 = local_218;
              }
              else {
                pFVar123[0x20] = (FScriptContainerElement)0x0;
                pFVar90 = UGroomAsset::AllocateCardsRaytracingResources
                                    ((this->GroomAsset).field0_0x0.DebugPtr,local_224,uVar103);
                *(FHairStrandsRaytracingResource **)(pFVar123 + 0x18) = pFVar90;
                pFVar118 = local_200;
                pFVar76 = local_218;
                if ((pFVar90 == (FHairStrandsRaytracingResource *)0x0) &&
                   (bVar53 = ::FDebug::CheckVerifyFailedImpl2
                                       ("InstanceLOD.RaytracingResource",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomComponent.cpp"
                                        ,0xcb2,L""), pFVar118 = local_200, pFVar76 = local_218,
                   bVar53)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
              }
            }
            else {
              pFVar118 = local_200;
              pFVar76 = local_218;
              if (bVar53) goto LAB_14e01d1e4;
            }
          }
          local_208 = local_208 + 1;
          uVar103 = local_224;
        } while (local_208 < local_120);
      }
      uVar110 = *(uint *)&local_1a0[2].Data.PointToCurve.Data.field_0x10;
      uVar121 = 0;
      if (uVar110 != 0) {
        local_198 = (FHairCardsBulkData *)&local_218->Meshes;
        pFVar118 = (FCards *)&(local_218->Meshes).LODs.ArrayMax;
        local_200 = pFVar118;
        do {
          pFVar113 = local_198;
          uVar103 = 0;
          if ((int)uVar121 < *(int *)&local_1a0[2].Data.PointToCurve.Data.field_0x10) {
            uVar103 = ~uVar121 >> 0x1f;
          }
          if ((uVar103 == 0) &&
             (bVar53 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar53)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          lVar71 = (longlong)(int)uVar121;
          pFVar119 = (FHairMeshesBulkData *)
                     (lVar71 * 0x98 + *(longlong *)&local_1a0[2].Data.PointToCurve.Data.field_0x8);
          uVar103 = 0;
          if ((int)uVar121 < *(int *)(local_168 + 0x48)) {
            uVar103 = ~uVar121 >> 0x1f;
          }
          if ((uVar103 == 0) &&
             (bVar53 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar53)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          local_1d8 = *(longlong *)(local_168 + 0x40);
          uVar64 = (local_218->Meshes).LODs.ArrayNum;
          iVar63 = *(int *)&pFVar113->TangentTexture;
          if (iVar63 == *(int *)&(pFVar118->LODs).AllocatorInstance.Data) {
            iVar63 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x830,(ForAnyElementType *)pFVar113,(int *)pFVar118);
          }
          *(int *)&pFVar113->TangentTexture = iVar63 + 1;
          pFVar123 = (((TArray<FHairGroupInstance::FMeshes::FLOD,TSizedDefaultAllocator<32>_> *)
                      &pFVar113->DepthTexture)->AllocatorInstance).Data + (longlong)iVar63 * 0x30;
          DefaultConstructItems<FHairGroupInstance::FMeshes::FLOD,int>(pFVar123,1);
          uVar103 = local_224;
          if (0 < (pFVar119->Positions).ArrayNum) {
            UGroomAsset::GetAssetPathName((this->GroomAsset).field0_0x0.DebugPtr,(int)&local_108);
            pFVar117 = local_218->HairGroupPublicData;
            if (((int)uVar64 < 0) || ((pFVar117->BindingTypes).ArrayNum <= (int)uVar64)) {
              iVar63 = 0;
              if (-1 < (int)uVar64) goto LAB_14e01d584;
LAB_14e01d630:
              bVar53 = false;
              *(undefined8 *)pFVar123 = *(undefined8 *)(local_1d8 + lVar71 * 0x18);
            }
            else {
              if (((pFVar117->BindingTypes).ArrayNum <= (int)uVar64) &&
                 (bVar53 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar53)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              iVar63 = *(int *)((pFVar117->BindingTypes).AllocatorInstance.Data +
                               (longlong)(int)uVar64 * 4);
              pFVar117 = local_218->HairGroupPublicData;
LAB_14e01d584:
              if ((pFVar117->LODGlobalInterpolations).ArrayNum <= (int)uVar64) goto LAB_14e01d630;
              uVar103 = 0;
              if ((int)uVar64 < (pFVar117->LODGlobalInterpolations).ArrayNum) {
                uVar103 = ~uVar64 >> 0x1f;
              }
              if ((uVar103 == 0) &&
                 (bVar53 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar53)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              if (((pFVar117->LODGlobalInterpolations).AllocatorInstance.Data[(int)uVar64] ==
                   (FScriptContainerElement)0x0) || (iVar63 != 2)) goto LAB_14e01d630;
              bVar53 = true;
              *(undefined8 *)pFVar123 = *(undefined8 *)(local_1d8 + lVar71 * 0x18);
              pFVar97 = ::operator_new(0xb0);
              if (pFVar97 == (FHairMeshesDeformedResource *)0x0) {
                *(undefined8 *)(pFVar123 + 8) = 0;
              }
              else {
                pFVar97 = FHairMeshesDeformedResource::FHairMeshesDeformedResource
                                    (pFVar97,pFVar119,true,&local_20d,&local_108);
                *(FHairMeshesDeformedResource **)(pFVar123 + 8) = pFVar97;
              }
            }
            bVar56 = IsHairRayTracingEnabled();
            pFVar118 = local_200;
            uVar103 = local_224;
            if (((bVar56) &&
                (bVar56 = IsRayTracingAllowed(), uVar103 = local_224, pFVar118 = local_200, bVar56))
               && ((this->field_0x27c & 8) != 0)) {
              if (bVar53) {
                pFVar90 = ::operator_new(0x1b0);
                if (pFVar90 == (FHairStrandsRaytracingResource *)0x0) {
                  *(undefined8 *)(pFVar123 + 0x10) = 0;
                  pFVar123[0x18] = (FScriptContainerElement)0x1;
                  pFVar118 = local_200;
                  uVar103 = local_224;
                }
                else {
                  pFVar90 = FHairStrandsRaytracingResource::FHairStrandsRaytracingResource
                                      (pFVar90,pFVar119,&local_20d,&local_108);
                  *(FHairStrandsRaytracingResource **)(pFVar123 + 0x10) = pFVar90;
                  pFVar123[0x18] = (FScriptContainerElement)0x1;
                  pFVar118 = local_200;
                  uVar103 = local_224;
                }
              }
              else {
                pFVar123[0x18] = (FScriptContainerElement)0x0;
                pFVar90 = UGroomAsset::AllocateMeshesRaytracingResources
                                    ((this->GroomAsset).field0_0x0.DebugPtr,local_224,uVar64);
                *(FHairStrandsRaytracingResource **)(pFVar123 + 0x10) = pFVar90;
                pFVar118 = local_200;
              }
            }
          }
          uVar121 = uVar121 + 1;
        } while (uVar121 < uVar110);
      }
      local_1e0 = local_1e0 + 1;
      local_224 = uVar103 + 1;
      pUVar120 = (UGroomComponent *)(ulonglong)local_224;
    } while ((int)local_224 < (int)local_204);
  }
  if (local_150.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_150.AllocatorInstance.Data);
  }
  if (local_180.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_180.AllocatorInstance.Data);
  }
  if (local_160.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_160.AllocatorInstance.Data);
  }
LAB_14e01d778:
  FMemScope::~FMemScope(&local_d0);
  FLLMScope::~FLLMScope(local_140);
  return;
}

// IsCompiling @ 14e020aa0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall UGroomComponent::IsCompiling(UGroomComponent *this)

{
  longlong lVar1;
  char cVar2;
  
  lVar1 = *(longlong *)&this->field_0x370;
  if (lVar1 != 0) {
    cVar2 = (**(code **)(*(longlong *)(lVar1 + 0x28) + 0x10))(lVar1 + 0x28);
    if (cVar2 != '\0') {
      return true;
    }
  }
  return false;
}

// IsDeformationEnable @ 14e020ae0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall UGroomComponent::IsDeformationEnable(UGroomComponent *this,int param_1)

{
  int iVar1;
  bool bVar2;
  EGroomGuideType EVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  
  bVar2 = UGroomAsset::IsDeformationEnable((this->GroomAsset).field0_0x0.DebugPtr,param_1);
  if (!bVar2) {
    return false;
  }
  pUVar4 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->GroomSolver);
  if (pUVar4 != (UObject *)0x0) {
    pUVar5 = Z_Construct_UClass_UMeshComponent_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) {
      return true;
    }
  }
  if (((this->MeshDeformer).field0_0x0.DebugPtr == (UMeshDeformer *)0x0) &&
     (EVar3 = UGroomAsset::GetGuideType((this->GroomAsset).field0_0x0.DebugPtr,param_1),
     EVar3 != Rigged)) {
    return false;
  }
  return true;
}

// IsMaterialSlotNameValid @ 14e020c20

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall UGroomComponent::IsMaterialSlotNameValid(UGroomComponent *this,FName param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(longlong *)this + 0x698))();
  return iVar1 != -1;
}

// IsSimulationEnable @ 14e020c70

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall UGroomComponent::IsSimulationEnable(UGroomComponent *this,int param_1,int param_2)

{
  UGroomAsset *this_00;
  bool bVar1;
  
  this_00 = (this->GroomAsset).field0_0x0.DebugPtr;
  if (this_00 == (UGroomAsset *)0x0) {
    bVar1 = false;
  }
  else {
    bVar1 = UGroomAsset::IsSimulationEnable(this_00,param_1,param_2);
  }
  if ((this->SimulationSettings).bOverrideSettings != false) {
    if ((bVar1 != false) && ((this->SimulationSettings).SolverSettings.bEnableSimulation != false))
    {
      return true;
    }
    bVar1 = false;
  }
  return bVar1;
}

// OnAttachmentChanged @ 14e021370

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UGroomComponent::OnAttachmentChanged(UGroomComponent *this)

{
  int iVar1;
  UClass *pUVar2;
  UMeshComponent *pUVar3;
  
  UPrimitiveComponent::OnAttachmentChanged((UPrimitiveComponent *)this);
  if ((this->GroomAsset).field0_0x0.DebugPtr == (UGroomAsset *)0x0) {
    return;
  }
  if ((this->field_0x9b & 0x40) != 0) {
    return;
  }
  if ((this->field_0x9b & 4) == 0) {
    return;
  }
  if ((*(uint *)&this->field_0x8 >> 0x1e & 1) != 0) {
    return;
  }
  pUVar3 = *(UMeshComponent **)&this->field_0xd0;
  if (pUVar3 != (UMeshComponent *)0x0) {
    pUVar2 = Z_Construct_UClass_UMeshComponent_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) goto LAB_14e0213d7;
  }
  pUVar3 = (UMeshComponent *)0x0;
LAB_14e0213d7:
  if (this->RegisteredMeshComponent == pUVar3) {
    return;
  }
  InitResources(this,false);
  return;
}

// OnComponentDestroyed @ 14e021400

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UGroomComponent::OnComponentDestroyed(UGroomComponent *this,bool param_1)

{
  ReleaseResources(this);
  UPrimitiveComponent::OnComponentDestroyed((UPrimitiveComponent *)this,param_1);
  return;
}

// OnRegister @ 14e021a90

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UGroomComponent::OnRegister(UGroomComponent *this)

{
  int iVar1;
  UGroomAsset *pUVar2;
  UMeshDeformer *pUVar3;
  IGroomCacheStreamingManager *pIVar4;
  UClass *pUVar5;
  UObject *pUVar6;
  UMeshComponent *pUVar7;
  
  UPrimitiveComponent::OnRegister((UPrimitiveComponent *)this);
  UpdateHairGroupsDesc(this);
  if (GUseGroomCacheStreaming != false) {
    pIVar4 = IGroomCacheStreamingManager::Get();
    (**(code **)(*(longlong *)pIVar4 + 0x98))(pIVar4);
  }
  pUVar7 = *(UMeshComponent **)&this->field_0xd0;
  if (pUVar7 != (UMeshComponent *)0x0) {
    pUVar5 = Z_Construct_UClass_UMeshComponent_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(pUVar7->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar7->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar5->_padding_)) goto LAB_14e021b09;
  }
  pUVar7 = (UMeshComponent *)0x0;
LAB_14e021b09:
  pUVar6 = (UObject *)0x0;
  if ((((this->InitializedResources == (UGroomAsset *)0x0) ||
       (pUVar2 = (this->GroomAsset).field0_0x0.DebugPtr, pUVar2 == (UGroomAsset *)0x0)) ||
      (pUVar2 != this->InitializedResources)) || (pUVar7 != this->RegisteredMeshComponent)) {
    InitResources(this,false);
  }
  else if ((this->GroomCache).field0_0x0.DebugPtr != (UGroomCache *)0x0) {
    UpdateGroomCache(this,this->ElapsedTime);
  }
  UpdateHairSimulation(this);
  pUVar3 = (this->MeshDeformer).field0_0x0.DebugPtr;
  if (pUVar3 != (UMeshDeformer *)0x0) {
    pUVar6 = (UObject *)
             (**(code **)(*(longlong *)pUVar3 + 0x2b8))
                       (pUVar3,this,(this->MeshDeformerInstanceSettings).field0_0x0.DebugPtr);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  (this->MeshDeformerInstance).field0_0x0.DebugPtr = (UMeshDeformerInstance *)pUVar6;
  return;
}

// OnUnregister @ 14e021cf0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UGroomComponent::OnUnregister(UGroomComponent *this)

{
  int *piVar1;
  IGroomCacheBuffers *pIVar2;
  IGroomCacheStreamingManager *pIVar3;
  int iVar4;
  
  UPrimitiveComponent::OnUnregister((UPrimitiveComponent *)this);
  iVar4 = 0;
  if (0 < (this->NiagaraComponents).ArrayNum) {
    do {
      ReleaseHairSimulation(this,iVar4);
      iVar4 = iVar4 + 1;
    } while (iVar4 < (this->NiagaraComponents).ArrayNum);
  }
  piVar1 = &(this->NiagaraComponents).ArrayMax;
  (this->NiagaraComponents).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->NiagaraComponents).AllocatorInstance,0,piVar1);
  }
  if (GUseGroomCacheStreaming != false) {
    pIVar2 = (this->GroomCacheBuffers).Object;
    if (pIVar2 != (IGroomCacheBuffers *)0x0) {
      (**(code **)(pIVar2->_padding_ + 0x30))();
    }
    pIVar3 = IGroomCacheStreamingManager::Get();
    (**(code **)(*(longlong *)pIVar3 + 0xa0))(pIVar3,this);
  }
  (this->MeshDeformerInstance).field0_0x0.DebugPtr = (UMeshDeformerInstance *)0x0;
  return;
}

// PostCompilation @ 14e0224e0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall UGroomComponent::PostCompilation(UGroomComponent *this)

{
  InitIfDependenciesReady(this,true);
  return;
}

// PostLoad @ 14e0224f0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UGroomComponent::PostLoad(UGroomComponent *this)

{
  UGroomAsset *pUVar1;
  UGroomBindingAsset *this_00;
  UGroomCache *pUVar2;
  bool bVar3;
  FLLMScope local_res8 [2];
  FName local_res10;
  FMemScope local_res18 [2];
  FString local_18;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_Groom.UniqueName,false,None,Default,true);
  local_res10 = LLMTagDeclaration_Groom.UniqueName;
  FMemScope::FMemScope(local_res18,&local_res10,true);
  UPrimitiveComponent::PostLoad((UPrimitiveComponent *)this);
  pUVar1 = (this->GroomAsset).field0_0x0.DebugPtr;
  if (pUVar1 != (UGroomAsset *)0x0) {
    UObject::ConditionalPostLoad((UObject *)pUVar1);
  }
  this_00 = (this->BindingAsset).field0_0x0.DebugPtr;
  if (this_00 != (UGroomBindingAsset *)0x0) {
    UObject::ConditionalPostLoad((UObject *)this_00);
  }
  SetGroomAsset(this,(this->GroomAsset).field0_0x0.DebugPtr,(this->BindingAsset).field0_0x0.DebugPtr
                ,false);
  (**(code **)(*(longlong *)this + 0x378))(this);
  pUVar1 = (this->GroomAsset).field0_0x0.DebugPtr;
  if ((((pUVar1 != (UGroomAsset *)0x0) &&
       (pUVar2 = (this->GroomCache).field0_0x0.DebugPtr, pUVar2 != (UGroomCache *)0x0)) &&
      ((pUVar2->GroomCacheInfo).Type == Guides)) &&
     ((bVar3 = UGroomAsset::GetEnableSimulationCache(pUVar1), !bVar3 &&
      (2 < (byte)LogHairStrands._0_1_)))) {
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_18,(UObject *)0x0);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHairStrands);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// ReleaseHairSimulation @ 14e024ec0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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

void __thiscall UGroomComponent::ReleaseHairSimulation(UGroomComponent *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  UObjectBase *this_00;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  UWorld *pUVar5;
  FUObjectItem *pFVar6;
  UPackage *pUVar7;
  uint uVar8;
  longlong *plVar9;
  
  if ((this->NiagaraComponents).ArrayNum <= param_1) {
    return;
  }
  if ((param_1 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar1 = (this->NiagaraComponents).AllocatorInstance.Data;
  plVar9 = *(longlong **)(pFVar1 + (longlong)param_1 * 8);
  pFVar1 = pFVar1 + (longlong)param_1 * 8;
  if (plVar9 == (longlong *)0x0) {
    return;
  }
  if ((*(byte *)((longlong)plVar9 + 0x9b) & 0x40) != 0) {
    return;
  }
  if (*(longlong *)&this->field_0xb0 == 0) {
    pUVar5 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    plVar9 = *(longlong **)pFVar1;
    if (pUVar5 == (UWorld *)0x0) goto LAB_14e024f88;
  }
  if ((*(byte *)(plVar9 + 0x13) & 1) != 0) {
    (**(code **)(*plVar9 + 0x518))(plVar9,&FDetachmentTransformRules::KeepRelativeTransform);
    UActorComponent::UnregisterComponent(*(UActorComponent **)pFVar1);
  }
LAB_14e024f88:
  (**(code **)(**(longlong **)pFVar1 + 0x4a0))(*(longlong **)pFVar1,0);
  this_00 = *(UObjectBase **)pFVar1;
  pFVar6 = FUObjectArray::IndexToObject(&GUObjectArray,this_00->InternalIndex);
  if ((((uint)((ulonglong)(pFVar6->field0_0x0).FlagsAndRefCount >> 0x3e) & 1) != 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsRooted()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectBaseUtility.h"
                         ,0xb8,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  UObjectBase::AtomicallySetFlags(this_00,RF_MirroredGarbage);
  pFVar6 = FUObjectArray::IndexToObject(&GUObjectArray,this_00->InternalIndex);
  do {
    lVar2 = (pFVar6->field0_0x0).FlagsAndRefCount;
    uVar8 = (uint)((ulonglong)lVar2 >> 0x20);
    if ((uVar8 >> 0x15 & 1) != 0) break;
    if (((ulonglong)pFVar6 & 7) != 0) {
      FWindowsPlatformAtomics::HandleAtomicsFailure
                (L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                );
    }
    LOCK();
    bVar4 = lVar2 == (pFVar6->field0_0x0).FlagsAndRefCount;
    if (bVar4) {
      (pFVar6->field0_0x0).FlagsAndRefCount =
           (longlong)(int)uVar8 << 0x20 | (longlong)(int)lVar2 | 0x20000000000000;
    }
    UNLOCK();
  } while (!bVar4);
  pFVar6 = FUObjectArray::IndexToObject(&GUObjectArray,this_00->InternalIndex);
  FUObjectItem::ClearRootFlags(pFVar6,Async);
  plVar9 = *(longlong **)pFVar1;
  pcVar3 = *(code **)(*plVar9 + 0x170);
  pUVar7 = GetTransientPackage();
  (*pcVar3)(plVar9,0,pUVar7,0x34);
  *(undefined8 *)pFVar1 = 0;
  return;
}

// ReleaseHairSimulation @ 14e0250c0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall UGroomComponent::ReleaseHairSimulation(UGroomComponent *this)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < (this->NiagaraComponents).ArrayNum) {
    do {
      ReleaseHairSimulation(this,iVar1);
      iVar1 = iVar1 + 1;
    } while (iVar1 < (this->NiagaraComponents).ArrayNum);
  }
  (this->NiagaraComponents).ArrayNum = 0;
  if ((this->NiagaraComponents).ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->NiagaraComponents).AllocatorInstance,0,
               &(this->NiagaraComponents).ArrayMax);
  }
  return;
}

// ReleaseResources @ 14e025140

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UGroomComponent::ReleaseResources(UGroomComponent *this)

{
  int *piVar1;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  this->InitializedResources = (void *)0x0;
  DestructItems<TRefCountPtr<FHairGroupInstance>,int>
            ((TRefCountPtr<FHairGroupInstance> *)(this->HairGroupInstances).AllocatorInstance.Data,
             (this->HairGroupInstances).ArrayNum);
  piVar1 = &(this->HairGroupInstances).ArrayMax;
  (this->HairGroupInstances).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->HairGroupInstances).AllocatorInstance,0,piVar1);
  }
  if (this->RegisteredMeshComponent != (UMeshComponent *)0x0) {
    (**(code **)(*(longlong *)this + 0x4d0))(this);
  }
  this->RegisteredMeshComponent = (UMeshComponent *)0x0;
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->GroomCacheBuffers != (TSharedPtr<IGroomCacheBuffers,1> *)&local_18) {
    (this->GroomCacheBuffers).Object = (IGroomCacheBuffers *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->GroomCacheBuffers).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  return;
}

// RequiresGameThreadEndOfFrameRecreate @ 14e025fa0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall UGroomComponent::RequiresGameThreadEndOfFrameRecreate(UGroomComponent *this)

{
  return true;
}

// ResetAnimationTime @ 14e026140

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall UGroomComponent::ResetAnimationTime(UGroomComponent *this)

{
  UGroomCache *pUVar1;
  IGroomCacheStreamingManager *pIVar2;
  
  pUVar1 = (this->GroomCache).field0_0x0.DebugPtr;
  this->ElapsedTime = 0.0;
  if (((pUVar1 != (UGroomCache *)0x0) && (this->bRunning != false)) &&
     (GUseGroomCacheStreaming != false)) {
    pIVar2 = IGroomCacheStreamingManager::Get();
    (**(code **)(*(longlong *)pIVar2 + 0xa8))(pIVar2,this);
  }
  UpdateGroomCache(this,this->ElapsedTime);
  return;
}

// ResetCollisionComponents @ 14e0261b0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall UGroomComponent::ResetCollisionComponents(UGroomComponent *this)

{
  (this->CollisionComponents).ArrayNum = 0;
  if ((this->CollisionComponents).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&(this->CollisionComponents).AllocatorInstance,0,
               &(this->CollisionComponents).ArrayMax);
  }
  return;
}

// ResetSimulation @ 14e026300

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall UGroomComponent::ResetSimulation(UGroomComponent *this)

{
  this->bResetSimulation = true;
  this->bInitSimulation = true;
  return;
}

// SendRenderDynamicData_Concurrent @ 14e0273f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UGroomComponent::SendRenderDynamicData_Concurrent(UGroomComponent *this)

{
  int iVar1;
  UMeshComponent *pUVar2;
  FScriptContainerElement *pFVar3;
  UMeshDeformerInstance *pUVar4;
  code *pcVar5;
  ForAnyElementType FVar6;
  bool bVar7;
  EHairBufferSwapType EVar8;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar9;
  code **ppcVar10;
  ulonglong uVar11;
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
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined1 auStackY_208 [32];
  ForAnyElementType local_1c8;
  int local_1c0;
  int local_1bc;
  FSceneInterface *local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  longlong local_1a8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_1a0;
  ForAnyElementType FStack_198;
  int local_190;
  FDestructionSentinel local_188;
  code *local_168 [2];
  code *local_158 [3];
  code **local_140;
  ForAnyElementType local_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined1 local_c8 [40];
  code **local_a0;
  byte local_98;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_208;
  UActorComponent::SendRenderDynamicData_Concurrent((UActorComponent *)this);
  EVar8 = GetHairSwapBufferType();
  if (EVar8 == RenderFrame) {
    pUVar2 = this->RegisteredMeshComponent;
    uVar12 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._0_4_;
    uVar13 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._4_4_;
    uVar14 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._0_4_;
    uVar15 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._4_4_;
    uVar16 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._0_4_;
    uVar17 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._4_4_;
    uVar18 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._0_4_;
    uVar19 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._4_4_;
    uVar20 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._0_4_;
    uVar21 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._4_4_;
    uVar22 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._0_4_;
    uVar23 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._4_4_;
    uVar24 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._0_4_;
    uVar25 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._4_4_;
    uVar26 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._0_4_;
    uVar27 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._4_4_;
    uVar28 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._0_4_;
    uVar29 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._4_4_;
    uVar30 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._0_4_;
    uVar31 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._4_4_;
    uVar32 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._0_4_;
    uVar33 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._4_4_;
    uVar34 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._0_4_;
    uVar35 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._4_4_;
    if (pUVar2 != (UMeshComponent *)0x0) {
      uVar12 = (undefined4)pUVar2->_padding_;
      uVar13 = *(undefined4 *)((longlong)&pUVar2->_padding_ + 4);
      uVar14 = (undefined4)pUVar2->_padding_;
      uVar15 = *(undefined4 *)((longlong)&pUVar2->_padding_ + 4);
      uVar16 = (undefined4)pUVar2->_padding_;
      uVar17 = *(undefined4 *)((longlong)&pUVar2->_padding_ + 4);
      uVar18 = (undefined4)pUVar2->_padding_;
      uVar19 = *(undefined4 *)((longlong)&pUVar2->_padding_ + 4);
      uVar20 = (undefined4)pUVar2->_padding_;
      uVar21 = *(undefined4 *)((longlong)&pUVar2->_padding_ + 4);
      uVar22 = (undefined4)pUVar2->_padding_;
      uVar23 = *(undefined4 *)((longlong)&pUVar2->_padding_ + 4);
      uVar24 = (undefined4)pUVar2->_padding_;
      uVar25 = *(undefined4 *)((longlong)&pUVar2->_padding_ + 4);
      uVar26 = (undefined4)pUVar2->_padding_;
      uVar27 = *(undefined4 *)((longlong)&pUVar2->_padding_ + 4);
      uVar28 = (undefined4)pUVar2->_padding_;
      uVar29 = *(undefined4 *)((longlong)&pUVar2->_padding_ + 4);
      uVar30 = (undefined4)pUVar2->_padding_;
      uVar31 = *(undefined4 *)((longlong)&pUVar2->_padding_ + 4);
      uVar32 = (undefined4)pUVar2->_padding_;
      uVar33 = *(undefined4 *)((longlong)&pUVar2->_padding_ + 4);
      uVar34 = (undefined4)pUVar2->_padding_;
      uVar35 = *(undefined4 *)((longlong)&pUVar2->_padding_ + 4);
    }
    iVar1 = (this->HairGroupInstances).ArrayNum;
    pFVar3 = (this->HairGroupInstances).AllocatorInstance.Data;
    local_1c8.Data = (FScriptContainerElement *)0x0;
    local_1c0 = iVar1;
    if (iVar1 == 0) {
      local_1bc = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar1,0,&local_1c8,iVar1,&local_1bc);
      ConstructItems<TRefCountPtr<FHairGroupInstance>,TRefCountPtr<FHairGroupInstance>,int>
                (local_1c8.Data,(TRefCountPtr<FHairGroupInstance> *)pFVar3,iVar1);
    }
    iVar1 = local_1c0;
    FVar6.Data = local_1c8.Data;
    local_138.Data = (FScriptContainerElement *)0x0;
    local_130 = CONCAT44(local_130._4_4_,local_1c0);
    if (local_1c0 == 0) {
      local_130 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,local_1c0,0,&local_138,local_1c0,(int *)((longlong)&local_130 + 4));
      ConstructItems<TRefCountPtr<FHairGroupInstance>,TRefCountPtr<FHairGroupInstance>,int>
                (local_138.Data,(TRefCountPtr<FHairGroupInstance> *)FVar6.Data,iVar1);
    }
    local_168[0] = (code *)0x0;
    local_128 = uVar12;
    uStack_124 = uVar13;
    uStack_120 = uVar14;
    uStack_11c = uVar15;
    local_118 = uVar16;
    uStack_114 = uVar17;
    uStack_110 = uVar18;
    uStack_10c = uVar19;
    local_108 = uVar20;
    uStack_104 = uVar21;
    uStack_100 = uVar22;
    uStack_fc = uVar23;
    local_f8 = uVar24;
    uStack_f4 = uVar25;
    uStack_f0 = uVar26;
    uStack_ec = uVar27;
    local_e8 = uVar28;
    uStack_e4 = uVar29;
    uStack_e0 = uVar30;
    uStack_dc = uVar31;
    local_d8 = uVar32;
    uStack_d4 = uVar33;
    uStack_d0 = uVar34;
    uStack_cc = uVar35;
    local_140 = FMemory::Malloc(0x80,0x10);
    local_140[2] = (code *)0x0;
    *local_140 = (code *)&UE::Core::Private::Function::
                          TFunction_OwnedObject<`UGroomComponent::SendRenderDynamicData_Concurrent'::`5'::<lambda_1>,1,1>
                          ::_vftable_;
    local_140[2] = (code *)local_138.Data;
    local_138.Data = (FScriptContainerElement *)0x0;
    *(int *)(local_140 + 3) = (int)local_130;
    *(undefined4 *)((longlong)local_140 + 0x1c) = local_130._4_4_;
    local_130 = 0;
    local_140[4] = (code *)CONCAT44(uStack_124,local_128);
    local_140[5] = (code *)CONCAT44(uStack_11c,uStack_120);
    local_140[6] = (code *)CONCAT44(uStack_114,local_118);
    local_140[7] = (code *)CONCAT44(uStack_10c,uStack_110);
    local_140[8] = (code *)CONCAT44(uStack_104,local_108);
    local_140[9] = (code *)CONCAT44(uStack_fc,uStack_100);
    local_140[10] = (code *)CONCAT44(uStack_f4,local_f8);
    local_140[0xb] = (code *)CONCAT44(uStack_ec,uStack_f0);
    local_140[0xc] = (code *)CONCAT44(uStack_e4,local_e8);
    local_140[0xd] = (code *)CONCAT44(uStack_dc,uStack_e0);
    local_140[0xe] = (code *)CONCAT44(uStack_d4,local_d8);
    local_140[0xf] = (code *)CONCAT44(uStack_cc,uStack_d0);
    if (local_140 + 2 != (code **)0x0) {
      local_168[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<`UGroomComponent::SendRenderDynamicData_Concurrent'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
                     ::Call;
    }
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_UGroomComponent::SendRenderDynamicData_Concurrent_::__l5::TSTR_FHairStrandsTick_TransformUpdate3885>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_168);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_c8._0_8_ = local_168[0];
      local_a0 = local_140;
      local_140 = (code **)0x0;
      local_c8._16_8_ = local_158[0];
      local_c8._24_8_ = local_158[1];
      local_c8._32_8_ = local_158[2];
      local_168[0] = (code *)0x0;
      local_98 = 2;
      pFVar9 = (FRenderCommandTag *)
               TRenderCommandTag<`UGroomComponent::SendRenderDynamicData_Concurrent'::__l5::TSTR_FHairStrandsTick_TransformUpdate3885>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_c8,pFVar9);
      uVar11 = (ulonglong)local_98;
      if (2 < uVar11) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar11] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_c8._0_8_ != (code *)0x0) {
          ppcVar10 = (code **)(local_c8 + 0x10);
          if (local_a0 != (code **)0x0) {
            ppcVar10 = local_a0;
          }
          (**(code **)(*ppcVar10 + 0x10))();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar11])(local_c8);
      }
    }
    if (local_168[0] != (code *)0x0) {
      ppcVar10 = local_168 + 2;
      if (local_140 != (code **)0x0) {
        ppcVar10 = local_140;
      }
      (**(code **)(*ppcVar10 + 0x10))();
    }
    DestructItems<TRefCountPtr<FHairGroupInstance>,int>
              ((TRefCountPtr<FHairGroupInstance> *)local_138.Data,(int)local_130);
    if (local_138.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.Data);
    }
    DestructItems<TRefCountPtr<FHairGroupInstance>,int>
              ((TRefCountPtr<FHairGroupInstance> *)local_1c8.Data,local_1c0);
    if (local_1c8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8.Data);
    }
  }
  if (((this->MeshDeformerInstance).field0_0x0.DebugPtr != (UMeshDeformerInstance *)0x0) &&
     ((this->GroomAsset).field0_0x0.DebugPtr != (UGroomAsset *)0x0)) {
    local_1b0 = 2;
    local_190 = 0;
    local_1a0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_198.Data = (FScriptContainerElement *)0x0;
    local_1b8 = UActorComponent::GetScene((UActorComponent *)this);
    local_1a8 = ((this->GroomAsset).field0_0x0.DebugPtr)->_padding_;
    pUVar4 = (this->MeshDeformerInstance).field0_0x0.DebugPtr;
    local_1ac = 3;
    (**(code **)(*(longlong *)pUVar4 + 0x2c0))(pUVar4,&local_1b8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_1a0,(FWriteAccessScope *)&local_188);
    if ((local_190 != 0) && (FStack_198.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_198.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_198,0,0,0x10);
      local_190 = 0;
    }
    if (local_188.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_188.Accessor,&local_188);
    }
    if (FStack_198.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_198.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_1a0.AccessDetector);
  }
  return;
}

// SetBinding @ 14e028250

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall UGroomComponent::SetBinding(UGroomComponent *this,UGroomBindingAsset *param_1)

{
  SetGroomAsset(this,(this->GroomAsset).field0_0x0.DebugPtr,param_1,true);
  return;
}

// SetBindingAsset @ 14e028270

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall UGroomComponent::SetBindingAsset(UGroomComponent *this,UGroomBindingAsset *param_1)

{
  SetGroomAsset(this,(this->GroomAsset).field0_0x0.DebugPtr,param_1,true);
  return;
}

// SetEnableSimulation @ 14e0282a0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UGroomComponent::SetEnableSimulation(UGroomComponent *this,bool param_1)

{
  FString local_18;
  
  if ((this->SimulationSettings).bOverrideSettings == false) {
    if (2 < (byte)LogHairStrands._0_1_) {
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_18,(UObject *)0x0);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHairStrands);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  else if ((this->SimulationSettings).SolverSettings.bEnableSimulation != param_1) {
    (this->SimulationSettings).SolverSettings.bEnableSimulation = param_1;
    ReleaseResources(this);
    UpdateHairGroupsDesc(this);
    InitResources(this,false);
    UpdateHairSimulation(this);
    return;
  }
  return;
}

// SetForceRenderedLOD @ 14e028340

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall UGroomComponent::SetForceRenderedLOD(UGroomComponent *this,int param_1)

{
  SetForcedLOD((UGroomComponent *)&this[-1].field_0x260,param_1);
  return;
}

// SetForceStreamedLOD @ 14e028360

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall UGroomComponent::SetForceStreamedLOD(UGroomComponent *this,int param_1)

{
  return;
}

// SetForcedLOD @ 14e028370

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall UGroomComponent::SetForcedLOD(UGroomComponent *this,int param_1)

{
  int iVar1;
  UGroomAsset *pUVar2;
  code *pcVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  TArray<FHairGroupPlatformData,TSizedDefaultAllocator<32>_> *pTVar9;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar10;
  code **ppcVar11;
  ulonglong uVar12;
  EHairLODSelectionType EVar13;
  uint uVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_108 [32];
  code *local_e8;
  int iStack_e0;
  EHairLODSelectionType EStack_dc;
  undefined1 local_d8;
  undefined1 uStack_d7;
  undefined6 uStack_d6;
  code *local_c8 [2];
  code *local_b8 [3];
  code **local_a0;
  undefined1 local_98 [40];
  code **local_70;
  byte local_68;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_108;
  if (this->LODSelectionType == Forced) {
    fVar16 = this->LODForcedIndex;
  }
  else {
    fVar16 = __real_bf800000;
    if (this->LODSelectionType == Predicted) {
      fVar16 = this->LODPredictedIndex;
    }
  }
  pUVar2 = (this->GroomAsset).field0_0x0.DebugPtr;
  EVar13 = Forced;
  if (pUVar2 != (UGroomAsset *)0x0) {
    iVar7 = UGroomAsset::GetLODCount(pUVar2);
    iVar1 = iVar7 + -1;
    if (param_1 < iVar7 + -1) {
      iVar1 = param_1;
    }
    param_1 = -1;
    if (-1 < iVar1) {
      param_1 = iVar1;
    }
  }
  if (param_1 < 0) {
    pUVar2 = (this->GroomAsset).field0_0x0.DebugPtr;
    bVar4 = 0;
    if (pUVar2 != (UGroomAsset *)0x0) {
      pTVar9 = UGroomAsset::GetHairGroupsPlatformData(pUVar2);
      iVar7 = 0;
      iVar1 = pTVar9->ArrayNum;
      bVar4 = 0;
      if (0 < iVar1) {
        do {
          uVar14 = 0;
          uVar8 = UGroomAsset::GetLODCount((this->GroomAsset).field0_0x0.DebugPtr);
          if (uVar8 != 0) {
            do {
              pUVar2 = (this->GroomAsset).field0_0x0.DebugPtr;
              if (pUVar2 == (UGroomAsset *)0x0) {
                cVar5 = false;
              }
              else {
                cVar5 = UGroomAsset::IsSimulationEnable(pUVar2,iVar7,uVar14);
              }
              if ((this->SimulationSettings).bOverrideSettings == false) {
LAB_14e028493:
                if (cVar5 != '\0') {
                  bVar4 = 1;
                  break;
                }
              }
              else if ((bool)cVar5 != false) {
                cVar5 = (this->SimulationSettings).SolverSettings.bEnableSimulation;
                goto LAB_14e028493;
              }
              uVar14 = uVar14 + 1;
            } while (uVar14 < uVar8);
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < iVar1);
      }
    }
    EVar13 = (EHairLODSelectionType)bVar4;
  }
  SwitchSimulationLOD(this,(int)fVar16,param_1,EVar13);
  fVar15 = (float)param_1;
  local_d8 = fVar15 != fVar16;
  this->LODForcedIndex = fVar15;
  this->LODSelectionType = EVar13;
  if ((((GHairStrands_Streaming_Prediction == false) || (!(bool)local_d8)) || (param_1 < 1)) ||
     (fVar16 <= fVar15)) {
    uStack_d7 = 0;
  }
  else {
    uStack_d7 = 1;
  }
  local_e8 = *(code **)&this->field_0x530;
  if (local_e8 != (code *)0x0) {
    local_c8[0] = (code *)0x0;
    iStack_e0 = param_1;
    EStack_dc = EVar13;
    local_a0 = FMemory::Malloc(0x20,8);
    *local_a0 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`UGroomComponent::SetForcedLOD'::`28'::<lambda_1>,1,1>
                         ::_vftable_;
    local_a0[1] = local_e8;
    local_a0[2] = (code *)CONCAT44(EStack_dc,iStack_e0);
    local_a0[3] = (code *)CONCAT62(uStack_d6,CONCAT11(uStack_d7,local_d8));
    if (local_a0 + 1 != (code **)0x0) {
      local_c8[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`UGroomComponent::SetForcedLOD'::__l28::<lambda_1>,void,FRHICommandListImmediate_&>
                    ::Call;
    }
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_UGroomComponent::SetForcedLOD_::__l28::TSTR_FHairComponentSendLODIndex1879>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_c8);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_98._0_8_ = local_c8[0];
      local_70 = local_a0;
      local_a0 = (code **)0x0;
      local_98._16_8_ = local_b8[0];
      local_98._24_8_ = local_b8[1];
      local_98._32_8_ = local_b8[2];
      local_c8[0] = (code *)0x0;
      local_68 = 2;
      pFVar10 = (FRenderCommandTag *)
                TRenderCommandTag<`UGroomComponent::SetForcedLOD'::__l28::TSTR_FHairComponentSendLODIndex1879>
                ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_98,pFVar10);
      uVar12 = (ulonglong)local_68;
      if ((2 < uVar12) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar12] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_98._0_8_ != (code *)0x0) {
          ppcVar11 = (code **)(local_98 + 0x10);
          if (local_70 != (code **)0x0) {
            ppcVar11 = local_70;
          }
          (**(code **)(*ppcVar11 + 0x10))();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar12])(local_98);
      }
    }
    if (local_c8[0] != (code *)0x0) {
      ppcVar11 = local_c8 + 2;
      if (local_a0 != (code **)0x0) {
        ppcVar11 = local_a0;
      }
      (**(code **)(*ppcVar11 + 0x10))();
    }
  }
  return;
}

// SetGroomAsset @ 14e0286e0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall UGroomComponent::SetGroomAsset(UGroomComponent *this,UGroomAsset *param_1)

{
  SetGroomAsset(this,param_1,(this->BindingAsset).field0_0x0.DebugPtr,true);
  return;
}

// SetGroomAsset @ 14e028700

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UGroomComponent::SetGroomAsset
          (UGroomComponent *this,UGroomAsset *param_1,UGroomBindingAsset *param_2,bool param_3)

{
  int *piVar1;
  TArray<FHairGroupDesc,TSizedDefaultAllocator<32>_> *pTVar2;
  UGroomBindingAsset *pUVar3;
  UGroomAsset *pUVar4;
  FScriptContainerElement *pFVar5;
  UMeshDeformer *pUVar6;
  code *pcVar7;
  float fVar8;
  int iVar9;
  uint uVar10;
  IGroomCacheStreamingManager *pIVar11;
  UObject *pUVar12;
  longlong lVar13;
  ulonglong uVar14;
  bool bVar15;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined2 uStack_30;
  undefined1 uStack_2e;
  undefined1 uStack_2d;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined2 uStack_24;
  undefined2 uStack_22;
  undefined8 uStack_20;
  
  ReleaseResources(this);
  pUVar12 = (UObject *)0x0;
  if ((param_1 == (UGroomAsset *)0x0) || (param_1->bIsInitialized == false)) {
    (this->GroomAsset).field0_0x0.DebugPtr = (UGroomAsset *)0x0;
  }
  else {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    (this->GroomAsset).field0_0x0.DebugPtr = param_1;
    iVar9 = UGroomAsset::GetLODCount(param_1);
    fVar8 = (float)(iVar9 + -1);
    if (this->LODForcedIndex <= (float)(iVar9 + -1)) {
      fVar8 = this->LODForcedIndex;
    }
    if (fVar8 <= __real_bf800000) {
      fVar8 = __real_bf800000;
    }
    this->LODForcedIndex = fVar8;
  }
  pUVar3 = (this->BindingAsset).field0_0x0.DebugPtr;
  if (pUVar3 == (UGroomBindingAsset *)0x0) {
    bVar15 = param_2 == (UGroomBindingAsset *)0x0;
  }
  else {
    bVar15 = pUVar3 == param_2;
  }
  if (!bVar15) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_2 != (UGroomBindingAsset *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    (this->BindingAsset).field0_0x0.DebugPtr = param_2;
  }
  pUVar4 = (this->GroomAsset).field0_0x0.DebugPtr;
  pTVar2 = &this->GroomGroupsDesc;
  if (pUVar4 == (UGroomAsset *)0x0) {
    piVar1 = &(this->GroomGroupsDesc).ArrayMax;
    (this->GroomGroupsDesc).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,4,0,&pTVar2->AllocatorInstance,0,piVar1);
    }
  }
  else {
    uVar10 = UGroomAsset::GetNumHairGroups(pUVar4);
    uVar14 = (ulonglong)uVar10;
    if (uVar10 != (this->GroomGroupsDesc).ArrayNum) {
      uStack_2d = 0;
      local_38 = 0x3f80000000000000;
      uStack_30 = 0;
      uStack_2e = 0;
      local_58 = 0x3dcccccd00000000;
      uStack_50 = 0x3f80000000000000;
      local_48 = 0x3f80000000000000;
      uStack_40 = 0x3f80000000000000;
      uStack_22 = 0;
      uStack_2c = 0;
      uStack_28 = 0;
      uStack_24 = 1;
      uStack_20 = 0x3f800000;
      if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum(uVar14);
      }
      piVar1 = &(this->GroomGroupsDesc).ArrayMax;
      (this->GroomGroupsDesc).ArrayNum = 0;
      if (*piVar1 != uVar10) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x40,4,uVar10,&pTVar2->AllocatorInstance,0,piVar1);
      }
      if (0 < (int)uVar10) {
        do {
          pFVar5 = (pTVar2->AllocatorInstance).Data;
          if (((pFVar5 <= (FScriptContainerElement *)&local_58) &&
              ((FScriptContainerElement *)&local_58 < pFVar5 + (longlong)*piVar1 * 0x40)) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar15)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar9 = (this->GroomGroupsDesc).ArrayNum;
          if (iVar9 == *piVar1) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x440,&pTVar2->AllocatorInstance,piVar1);
          }
          (this->GroomGroupsDesc).ArrayNum = iVar9 + 1;
          pFVar5 = (pTVar2->AllocatorInstance).Data;
          lVar13 = (longlong)iVar9 * 0x40;
          *(undefined8 *)(pFVar5 + lVar13) = local_58;
          *(undefined8 *)(pFVar5 + lVar13 + 8) = uStack_50;
          *(undefined8 *)(pFVar5 + lVar13 + 0x10) = local_48;
          *(undefined8 *)(pFVar5 + lVar13 + 0x10 + 8) = uStack_40;
          *(undefined8 *)(pFVar5 + lVar13 + 0x20) = local_38;
          *(ulonglong *)(pFVar5 + lVar13 + 0x20 + 8) =
               CONCAT44(uStack_2c,CONCAT13(uStack_2d,CONCAT12(uStack_2e,uStack_30)));
          *(ulonglong *)(pFVar5 + lVar13 + 0x30) = CONCAT26(uStack_22,CONCAT24(uStack_24,uStack_28))
          ;
          *(undefined8 *)(pFVar5 + lVar13 + 0x30 + 8) = uStack_20;
          uVar14 = uVar14 - 1;
        } while (uVar14 != 0);
      }
    }
  }
  pUVar4 = (this->GroomAsset).field0_0x0.DebugPtr;
  if ((pUVar4 != (UGroomAsset *)0x0) && (pUVar4->bIsInitialized != false)) {
    InitResources(this,false);
    if (param_3) {
      UpdateHairSimulation(this);
    }
    if ((this->field_0x98 & 1) != 0) {
      if (GUseGroomCacheStreaming != false) {
        pIVar11 = IGroomCacheStreamingManager::Get();
        (**(code **)(*(longlong *)pIVar11 + 0x98))(pIVar11,this);
      }
      pUVar6 = (this->MeshDeformer).field0_0x0.DebugPtr;
      if (pUVar6 != (UMeshDeformer *)0x0) {
        pUVar12 = (UObject *)
                  (**(code **)(*(longlong *)pUVar6 + 0x2b8))
                            (pUVar6,this,(this->MeshDeformerInstanceSettings).field0_0x0.DebugPtr);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar12 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar12);
      }
      (this->MeshDeformerInstance).field0_0x0.DebugPtr = (UMeshDeformerInstance *)pUVar12;
    }
  }
  return;
}

// SetGroomCache @ 14e028a70

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall UGroomComponent::SetGroomCache(UGroomComponent *this,UGroomCache *param_1)

{
  UGroomCache *pUVar1;
  IGroomCacheStreamingManager *pIVar2;
  bool bVar3;
  
  pUVar1 = (this->GroomCache).field0_0x0.DebugPtr;
  if (pUVar1 == (UGroomCache *)0x0) {
    bVar3 = param_1 == (UGroomCache *)0x0;
  }
  else {
    bVar3 = pUVar1 == param_1;
  }
  if (!bVar3) {
    ReleaseResources(this);
    pUVar1 = (this->GroomCache).field0_0x0.DebugPtr;
    this->ElapsedTime = 0.0;
    if (((pUVar1 != (UGroomCache *)0x0) && (this->bRunning != false)) &&
       (GUseGroomCacheStreaming != false)) {
      pIVar2 = IGroomCacheStreamingManager::Get();
      (**(code **)(*(longlong *)pIVar2 + 0xa8))(pIVar2);
    }
    UpdateGroomCache(this,this->ElapsedTime);
    if (GUseGroomCacheStreaming == false) {
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UGroomCache *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      (this->GroomCache).field0_0x0.DebugPtr = param_1;
    }
    else {
      pIVar2 = IGroomCacheStreamingManager::Get();
      (**(code **)(*(longlong *)pIVar2 + 0xa0))(pIVar2,this);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UGroomCache *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      (this->GroomCache).field0_0x0.DebugPtr = param_1;
      pIVar2 = IGroomCacheStreamingManager::Get();
      (**(code **)(*(longlong *)pIVar2 + 0x98))(pIVar2);
    }
    InitResources(this,false);
  }
  return;
}

// SetHairLengthScale @ 14e028b90

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall UGroomComponent::SetHairLengthScale(UGroomComponent *this,float param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->GroomGroupsDesc).ArrayNum;
  pFVar2 = (this->GroomGroupsDesc).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x40;
  while( true ) {
    if ((this->GroomGroupsDesc).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FHairGroupDesc,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar2 == pFVar3) break;
    *(float *)(pFVar2 + 0x38) = param_1;
    pFVar2 = pFVar2 + 0x40;
  }
  UpdateHairGroupsDescAndInvalidateRenderState(this,false);
  return;
}

// SetHairLengthScaleEnable @ 14e028c20

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall UGroomComponent::SetHairLengthScaleEnable(UGroomComponent *this,bool param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->GroomGroupsDesc).ArrayNum;
  pFVar2 = (this->GroomGroupsDesc).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x40;
  while( true ) {
    if ((this->GroomGroupsDesc).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FHairGroupDesc,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar2 == pFVar3) break;
    pFVar2[0x3c] = (FScriptContainerElement)param_1;
    pFVar2 = pFVar2 + 0x40;
  }
  UpdateHairGroupsDescAndInvalidateRenderState(this,true);
  InitResources(this,false);
  return;
}

// SetHairRootScale @ 14e028ca0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall UGroomComponent::SetHairRootScale(UGroomComponent *this,float param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res10 [8];
  
  iVar1 = (this->GroomGroupsDesc).ArrayNum;
  pFVar2 = (this->GroomGroupsDesc).AllocatorInstance.Data;
  if (__real_41200000 <= param_1) {
    param_1 = __real_41200000;
  }
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x40;
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  while( true ) {
    if ((this->GroomGroupsDesc).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FHairGroupDesc,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar2 == pFVar3) break;
    *(float *)(pFVar2 + 0xc) = param_1;
    pFVar2[0x10] = (FScriptContainerElement)0x1;
    pFVar2 = pFVar2 + 0x40;
  }
  UpdateHairGroupsDescAndInvalidateRenderState(this,true);
  return;
}

// SetHairWidth @ 14e028d40

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall UGroomComponent::SetHairWidth(UGroomComponent *this,float param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->GroomGroupsDesc).ArrayNum;
  pFVar2 = (this->GroomGroupsDesc).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x40;
  while( true ) {
    if ((this->GroomGroupsDesc).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FHairGroupDesc,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar2 == pFVar3) break;
    *(float *)(pFVar2 + 4) = param_1;
    pFVar2[8] = (FScriptContainerElement)0x1;
    pFVar2 = pFVar2 + 0x40;
  }
  UpdateHairGroupsDescAndInvalidateRenderState(this,true);
  return;
}

// SetManualTick @ 14e028dd0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall UGroomComponent::SetManualTick(UGroomComponent *this,bool param_1)

{
  this->bManualTick = param_1;
  return;
}

// SetMeshDeformer @ 14e028de0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UGroomComponent::SetMeshDeformer(UGroomComponent *this,UMeshDeformer *param_1)

{
  UMeshDeformer *pUVar1;
  UObject *pUVar2;
  
  (this->MeshDeformer).field0_0x0.DebugPtr = param_1;
  pUVar2 = (UObject *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  (this->MeshDeformerInstanceSettings).field0_0x0.DebugPtr = (UMeshDeformerInstanceSettings *)pUVar2
  ;
  pUVar1 = (this->MeshDeformer).field0_0x0.DebugPtr;
  if (pUVar1 == (UMeshDeformer *)0x0) {
    pUVar2 = (UObject *)0x0;
  }
  else {
    pUVar2 = (UObject *)(**(code **)(*(longlong *)pUVar1 + 0x2b8))(pUVar1,this,pUVar2);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  (this->MeshDeformerInstance).field0_0x0.DebugPtr = (UMeshDeformerInstance *)pUVar2;
  UActorComponent::MarkRenderDynamicDataDirty((UActorComponent *)this);
  return;
}

// SetPhysicsAsset @ 14e029240

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall UGroomComponent::SetPhysicsAsset(UGroomComponent *this,UPhysicsAsset *param_1)

{
  UPhysicsAsset *pUVar1;
  
  if ((param_1 != (UPhysicsAsset *)0x0) &&
     ((pUVar1 = (this->PhysicsAsset).field0_0x0.DebugPtr, pUVar1 == (UPhysicsAsset *)0x0 ||
      (pUVar1 != param_1)))) {
    (this->PhysicsAsset).field0_0x0.DebugPtr = param_1;
    ReleaseResources(this);
    UpdateHairGroupsDesc(this);
    InitResources(this,false);
    UpdateHairSimulation(this);
  }
  return;
}

// SetScatterSceneLighting @ 14e0292a0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall UGroomComponent::SetScatterSceneLighting(UGroomComponent *this,bool param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->GroomGroupsDesc).ArrayNum;
  pFVar2 = (this->GroomGroupsDesc).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x40;
  while( true ) {
    if ((this->GroomGroupsDesc).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FHairGroupDesc,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar2 == pFVar3) break;
    pFVar2[0x32] = (FScriptContainerElement)param_1;
    pFVar2[0x33] = (FScriptContainerElement)0x1;
    pFVar2 = pFVar2 + 0x40;
  }
  UpdateHairGroupsDescAndInvalidateRenderState(this,true);
  return;
}

// SetStableRasterization @ 14e029320

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall UGroomComponent::SetStableRasterization(UGroomComponent *this,bool param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->GroomGroupsDesc).ArrayNum;
  pFVar2 = (this->GroomGroupsDesc).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x40;
  while( true ) {
    if ((this->GroomGroupsDesc).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FHairGroupDesc,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar2 == pFVar3) break;
    pFVar2[0x30] = (FScriptContainerElement)param_1;
    pFVar2[0x31] = (FScriptContainerElement)0x1;
    pFVar2 = pFVar2 + 0x40;
  }
  UpdateHairGroupsDescAndInvalidateRenderState(this,true);
  return;
}

// SetUseCards @ 14e0293a0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall UGroomComponent::SetUseCards(UGroomComponent *this,bool param_1)

{
  this->bUseCards = param_1;
  this->bResetSimulation = true;
  this->bInitSimulation = true;
  UpdateHairGroupsDescAndInvalidateRenderState(this,true);
  return;
}

// StaticRegisterNativesUGroomComponent @ 14e029a50

void __cdecl UGroomComponent::StaticRegisterNativesUGroomComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0xd;
  local_18.DataPtr = Z_Construct_UClass_UGroomComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// SwitchSimulationLOD @ 14e029a90

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UGroomComponent::SwitchSimulationLOD
          (UGroomComponent *this,int param_1,int param_2,EHairLODSelectionType param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  TArray<FHairGroupPlatformData,TSizedDefaultAllocator<32>_> *pTVar6;
  UGroomAsset *pUVar7;
  int iVar8;
  
  pUVar7 = (this->GroomAsset).field0_0x0.DebugPtr;
  if ((pUVar7 != (UGroomAsset *)0x0) && (param_1 != param_2)) {
    bVar5 = false;
    pTVar6 = UGroomAsset::GetHairGroupsPlatformData(pUVar7);
    iVar8 = 0;
    iVar1 = pTVar6->ArrayNum;
    if (0 < iVar1) {
      do {
        pUVar7 = (this->GroomAsset).field0_0x0.DebugPtr;
        if (pUVar7 == (UGroomAsset *)0x0) {
          bVar3 = false;
          pUVar7 = (UGroomAsset *)0x0;
        }
        else {
          bVar3 = UGroomAsset::IsSimulationEnable(pUVar7,iVar8,param_1);
          pUVar7 = (this->GroomAsset).field0_0x0.DebugPtr;
        }
        if ((this->SimulationSettings).bOverrideSettings != false) {
          if ((bVar3 == false) ||
             ((this->SimulationSettings).SolverSettings.bEnableSimulation == false)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
        }
        if (pUVar7 == (UGroomAsset *)0x0) {
          bVar4 = false;
        }
        else {
          bVar4 = UGroomAsset::IsSimulationEnable(pUVar7,iVar8,param_2);
        }
        if ((this->SimulationSettings).bOverrideSettings != false) {
          if ((bVar4 == false) ||
             ((this->SimulationSettings).SolverSettings.bEnableSimulation == false)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
        }
        if (bVar3 != bVar4) {
          if ((param_3 == Immediate) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("InLODSelectionType != EHairLODSelectionType::Immediate",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomComponent.cpp"
                                 ,0x65f,L""), bVar5)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          CreateHairSimulation(this,iVar8,param_2);
          bVar5 = true;
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < iVar1);
      if (bVar5) {
        UpdateSimulatedGroups(this);
      }
    }
  }
  return;
}

// TickAtThisTime @ 14e029bf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UGroomComponent::TickAtThisTime
          (UGroomComponent *this,float param_1,bool param_2,bool param_3,bool param_4)

{
  bool bVar1;
  UGroomPluginSettings *pUVar2;
  IGroomCacheStreamingManager *pIVar3;
  FRenderCommandList *this_00;
  undefined ***pppuVar4;
  float fVar5;
  undefined1 auStack_c8 [48];
  code *local_98 [2];
  undefined **local_88;
  UGroomComponent *pUStack_80;
  float local_78;
  undefined4 uStack_74;
  undefined ***local_70;
  code *local_68 [2];
  undefined **local_58;
  UGroomComponent *pUStack_50;
  undefined8 local_48;
  undefined ***local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_c8;
  if ((((this->GroomCache).field0_0x0.DebugPtr != (UGroomCache *)0x0) && (this->bRunning != false))
     && (this->bManualTick != false)) {
    fVar5 = param_1 - this->ElapsedTime;
    if ((!GUseGroomCacheStreaming) ||
       ((pUVar2 = GetDefault<UGroomPluginSettings>(),
        fVar5 < pUVar2->GroomCacheLookAheadBuffer || fVar5 == pUVar2->GroomCacheLookAheadBuffer &&
        (0.0 <= fVar5)))) {
      local_88 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`UGroomComponent::TickAtThisTime'::`5'::<lambda_1>,1,0>::
                  _vftable_;
      uStack_74 = auStack_c8._44_4_;
      local_98[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`UGroomComponent::TickAtThisTime'::__l5::<lambda_1>,void,FRHICommandList_&>
                    ::Call;
      local_70 = (undefined ***)0x0;
      pUStack_80 = this;
      local_78 = param_1;
      this_00 = FRenderCommandList::GetInstanceTLS();
      if (this_00 == (FRenderCommandList *)0x0) {
        if ((GRenderCommandPipeMode != All) ||
           (bVar1 = FRenderCommandPipe::
                    Enqueue<TRenderCommandTag<_UGroomComponent::TickAtThisTime_::__l5::TSTR_FGroomCacheUpdate3669>_>
                              (&UE::RenderCommandPipe::Groom,
                               (TUniqueFunction<void___cdecl(FRHICommandList_&)> *)local_98), !bVar1
           )) {
          local_48 = CONCAT44(uStack_74,local_78);
          local_68[0] = local_98[0];
          local_40 = local_70;
          local_70 = (undefined ***)0x0;
          local_58 = local_88;
          pUStack_50 = pUStack_80;
          local_98[0] = (code *)0x0;
          FRenderThreadCommandPipe::
          Enqueue<TRenderCommandTag<_UGroomComponent::TickAtThisTime_::__l5::TSTR_FGroomCacheUpdate3669>,_FRenderCommandDispatcher::Enqueue<TRenderCommandTag<_UGroomComponent::TickAtThisTime_::__l5::TSTR_FGroomCacheUpdate3669>_>_::__l2::<lambda_1>_>
                    ((<lambda_1> *)local_68);
          if (local_68[0] != (code *)0x0) {
            pppuVar4 = &local_58;
            if (local_40 != (undefined ***)0x0) {
              pppuVar4 = local_40;
            }
            (*(code *)(*pppuVar4)[2])();
          }
        }
      }
      else {
        FRenderCommandList::
        Enqueue<TRenderCommandTag<_UGroomComponent::TickAtThisTime_::__l5::TSTR_FGroomCacheUpdate3669>,TUniqueFunction<void___cdecl(FRHICommandList_&)>_>
                  (this_00,&UE::RenderCommandPipe::Groom,
                   (TUniqueFunction<void___cdecl(FRHICommandList_&)> *)local_98);
      }
      if (local_98[0] != (code *)0x0) {
        pppuVar4 = &local_88;
        if (local_70 != (undefined ***)0x0) {
          pppuVar4 = local_70;
        }
        (*(code *)(*pppuVar4)[2])();
      }
    }
    else {
      this->ElapsedTime = param_1;
      pIVar3 = IGroomCacheStreamingManager::Get();
      (**(code **)(*(longlong *)pIVar3 + 0xa8))(pIVar3,this);
      UpdateGroomCache(this,param_1);
    }
  }
  return;
}

// TickComponent @ 14e029db0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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
UGroomComponent::TickComponent
          (UGroomComponent *this,float param_1,ELevelTick param_2,
          FActorComponentTickFunction *param_3)

{
  float fVar1;
  undefined4 uVar2;
  EHairLODSelectionType EVar3;
  USkeletalMeshComponent *this_00;
  FName FVar4;
  FName FVar5;
  USkinnedMeshComponent *this_01;
  UMeshComponent *pUVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auVar14 [12];
  ForAnyElementType FVar15;
  float fVar16;
  char cVar17;
  bool bVar18;
  int iVar19;
  uint uVar20;
  EHairBufferSwapType EVar21;
  UWorld *pUVar22;
  UClass *pUVar23;
  USkeletalMesh *pUVar24;
  FName *pFVar25;
  TQuat<double> *pTVar26;
  FRenderCommandList *this_02;
  FCommandList *this_03;
  FRenderCommandTag *pFVar27;
  TMatrix<double> *this_04;
  double *pdVar28;
  int iVar29;
  FScriptContainerElement *pFVar30;
  ulonglong uVar31;
  uint uVar32;
  longlong lVar33;
  longlong lVar34;
  longlong lVar35;
  double dVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  double dVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  double dVar54;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined4 uVar59;
  undefined1 auVar58 [16];
  double dVar60;
  double dVar61;
  undefined4 uVar62;
  undefined4 uVar63;
  undefined4 uVar64;
  undefined4 uVar65;
  undefined4 uVar66;
  undefined4 uVar67;
  undefined4 uVar68;
  float fVar69;
  undefined4 uVar70;
  undefined4 uVar71;
  undefined4 uVar72;
  undefined4 uVar73;
  undefined4 uVar74;
  undefined4 uVar75;
  undefined4 uVar76;
  undefined4 uVar77;
  undefined4 uVar78;
  undefined4 uVar79;
  undefined4 uVar80;
  undefined4 uVar81;
  uint uVar82;
  undefined4 uVar83;
  uint uVar84;
  undefined4 uVar85;
  uint uVar86;
  undefined4 uVar87;
  uint uVar88;
  undefined4 uVar89;
  undefined1 auStackY_478 [32];
  undefined1 local_438;
  undefined4 local_437 [3];
  ForAnyElementType local_428;
  undefined8 uStack_420;
  TVector<double>_u_0 local_418;
  FName local_3f8;
  undefined1 local_3f0 [16];
  double local_3e0;
  TRotator<double> local_3d8;
  TVector<double>_u_0 local_3b8;
  TQuat<double> local_398;
  undefined1 local_378 [16];
  undefined1 local_368 [16];
  undefined4 local_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  double local_348;
  TQuat<double> local_338;
  code *local_318 [2];
  double local_308;
  double dStack_300;
  double local_2f8;
  double *local_2f0;
  undefined4 local_2e8;
  uint local_2e4;
  ForAnyElementType local_2e0;
  undefined8 local_2d8;
  float local_2d0;
  EHairLODSelectionType local_2cc;
  undefined1 local_2c8;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined4 local_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined4 local_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 local_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 local_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined1 local_258 [16];
  double local_248 [2];
  double local_238 [2];
  double local_228 [2];
  double local_218 [2];
  double local_208 [2];
  TMatrix<double> local_1f8;
  TMatrix<double> local_178;
  ulonglong local_f8;
  
  local_f8 = __security_cookie.value ^ (ulonglong)auStackY_478;
  UActorComponent::TickComponent((UActorComponent *)this,param_1,param_2,param_3);
  uVar2 = *(undefined4 *)&this->field_0x344;
  if ((*(longlong *)&this->field_0xb0 == 0) &&
     (pUVar22 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
     pUVar22 == (UWorld *)0x0)) {
    uVar32 = 5;
  }
  else {
    pUVar22 = *(UWorld **)&this->field_0xb0;
    if (pUVar22 == (UWorld *)0x0) {
      pUVar22 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    }
    uVar32 = (uint)(pUVar22->FeatureLevel).Value;
  }
  this_00 = (USkeletalMeshComponent *)this->RegisteredMeshComponent;
  if (this_00 != (USkeletalMeshComponent *)0x0) {
    pUVar23 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
    iVar19 = (int)pUVar23->_padding_;
    if ((((iVar19 <= *(int *)(this_00->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar19 * 8) ==
          &pUVar23->_padding_)) &&
        (pUVar24 = USkeletalMeshComponent::GetSkeletalMeshAsset(this_00),
        pUVar24 != (USkeletalMesh *)0x0)) && (1 < (this->AttachmentName).Data.ArrayNum)) {
      iVar19 = (this->AttachmentName).Data.ArrayNum;
      iVar29 = iVar19 + -1;
      if (iVar19 == 0) {
        iVar29 = 0;
      }
      pFVar25 = ::FName::FName(&local_3f8,iVar29,
                               (wchar_t *)(this->AttachmentName).Data.AllocatorInstance.Data,
                               FNAME_Add);
      FVar4 = *pFVar25;
      FVar5.ComparisonIndex.Value = *(uint *)&this->field_0xd8;
      FVar5.Number = *(uint *)&this->field_0xdc;
      if ((FVar5 != FVar4) &&
         (iVar19 = USkinnedMeshComponent::GetBoneIndex((USkinnedMeshComponent *)this_00,FVar4),
         iVar19 != -1)) {
        local_437[0] = 0;
        (**(code **)(*(longlong *)this + 0x508))(this,this_00,local_437,FVar4);
        pUVar24 = USkeletalMeshComponent::GetSkeletalMeshAsset(this_00);
        (**(code **)(pUVar24->_padding_ + 0x350))(pUVar24,&local_178,iVar19);
        this_04 = &local_178;
        pTVar26 = UE::Math::TMatrix<double>::ToQuat(this_04,&local_398);
        uVar82 = (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                 UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._0_4_;
        uVar84 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                 UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._4_4_;
        uVar86 = _UNK_15061cc88 &
                 UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._0_4_;
        uVar88 = _UNK_15061cc8c &
                 UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._4_4_;
        dVar11 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
        dVar12 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
        auVar45._0_8_ =
             (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                              UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._4_4_,
                              (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                              UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._0_4_);
        auVar45._8_4_ =
             _UNK_15061cc88 & UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._0_4_;
        auVar45._12_4_ =
             _UNK_15061cc8c & UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._4_4_;
        dVar60 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
        dVar61 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
        local_418._s_0.Z =
             (double)UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
        local_348 = local_178.M[3][2];
        dVar36 = (double)GlobalVectorConstants::SmallNumber.m128_f32[0];
        dVar44 = (double)GlobalVectorConstants::SmallNumber.m128_f32[1];
        local_428.Data =
             (FScriptContainerElement *)(double)GlobalVectorConstants::SmallNumber.m128_f32[2];
        uStack_420 = (double)GlobalVectorConstants::SmallNumber.m128_f32[3];
        local_258._0_8_ = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
        local_258._8_8_ = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
        auVar38._8_4_ = SUB84(dVar44,0);
        auVar38._0_8_ = dVar36;
        auVar38._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
        auVar39._8_8_ = -(ulonglong)(auVar38._8_8_ < (double)CONCAT44(uVar88,uVar86));
        auVar39._0_8_ = -(ulonglong)(dVar36 < (double)CONCAT44(uVar84,uVar82));
        iVar19 = movmskpd((int)this_04,auVar39);
        auVar37._8_8_ = -(ulonglong)(uStack_420 < auVar45._8_8_);
        auVar37._0_8_ = -(ulonglong)((double)local_428.Data < auVar45._0_8_);
        uVar20 = movmskpd((int)pTVar26,auVar37);
        local_248[0] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
        local_248[1] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
        local_238[0] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
        local_238[1] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
        local_228[0] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
        local_228[1] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
        local_358 = local_178.M[3][0]._0_4_;
        uStack_354 = local_178.M[3][0]._4_4_;
        uStack_350 = local_178.M[3][1]._0_4_;
        uStack_34c = local_178.M[3][1]._4_4_;
        dVar54 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
        if ((uVar20 & 0x3fffffff) == 0 && iVar19 == 0) {
          dVar13 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
          local_218[0] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
          local_218[1] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
          local_208[0] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
          local_208[1] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
        }
        else {
          dVar11 = local_398.Z * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
          dVar12 = local_398.W * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
          auVar14._4_8_ = dVar54;
          auVar14._0_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[0]._4_4_;
          auVar50._0_8_ = auVar14._0_8_ << 0x20;
          auVar50._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
          auVar50._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
          dVar13 = local_398.X * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
          dVar54 = local_398.Y * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
          auVar38 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                          (undefined1  [16])
                          UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64);
          auVar51._8_8_ = auVar50._8_8_;
          auVar51._0_8_ = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
          auVar55._8_4_ = SUB84(dVar54,0);
          auVar55._0_8_ = dVar13;
          auVar55._12_4_ = (int)((ulonglong)dVar54 >> 0x20);
          lVar33 = -(ulonglong)
                    ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                                      UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]
                                      ._4_4_,(uint)__xmm_7fffffffffffffff7fffffffffffffff &
                                             UE::Math::TTransform<double>::Identity.Scale3D.ZW.
                                             m128d_f64[0]._0_4_) <= (double)local_428.Data);
          lVar34 = -(ulonglong)((double)CONCAT44(uVar84,uVar82) <= dVar36);
          lVar35 = -(ulonglong)((double)CONCAT44(uVar88,uVar86) <= dVar44);
          auVar39 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar51);
          dVar36 = (double)CONCAT44(~(uint)((ulonglong)lVar34 >> 0x20) & auVar38._4_4_,
                                    ~(uint)lVar34 & auVar38._0_4_) *
                   (double)CONCAT44(local_178.M[3][0]._4_4_,local_178.M[3][0]._0_4_);
          dVar44 = (double)CONCAT44(~(uint)((ulonglong)lVar35 >> 0x20) & auVar38._12_4_,
                                    ~(uint)lVar35 & auVar38._8_4_) *
                   (double)CONCAT44(local_178.M[3][1]._4_4_,local_178.M[3][1]._0_4_);
          uVar59 = (undefined4)((ulonglong)dVar44 >> 0x20);
          auVar58._8_4_ = SUB84(dVar44,0);
          auVar58._0_8_ = dVar36;
          auVar58._12_4_ = uVar59;
          local_178.M[3][2] =
               (double)CONCAT44(~(uint)((ulonglong)lVar33 >> 0x20) & auVar39._4_4_,
                                ~(uint)lVar33 & auVar39._0_4_) * local_178.M[3][2];
          auVar10._8_4_ = SUB84(dVar12,0);
          auVar10._0_8_ = dVar11;
          auVar10._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
          auVar39 = blendpd(auVar55,auVar10,2);
          auVar40._8_4_ = SUB84(dVar11,0);
          auVar40._0_8_ = dVar54;
          auVar40._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
          auVar46._8_4_ = SUB84(dVar44,0);
          auVar46._0_8_ = dVar36;
          auVar46._12_4_ = uVar59;
          dVar60 = local_178.M[3][2] * dVar54 - auVar40._8_8_ * dVar44;
          auVar9._8_8_ = 0;
          auVar9._0_8_ = local_178.M[3][2];
          auVar38 = blendpd(auVar46,auVar9,2);
          auVar56._8_4_ = SUB84(dVar60,0);
          auVar56._0_8_ = auVar58._8_8_ * dVar13 - dVar54 * dVar36;
          auVar56._12_4_ = (int)((ulonglong)dVar60 >> 0x20);
          auVar47._0_8_ = auVar38._0_8_ * dVar11 - auVar39._0_8_ * local_178.M[3][2];
          auVar47._8_8_ = auVar38._8_8_ * dVar12 - auVar39._8_8_ * 0.0;
          auVar38 = blendpd(auVar56,auVar47,2);
          dVar60 = dVar60 + dVar60;
          dVar61 = auVar47._0_8_ + auVar47._0_8_;
          auVar57._0_8_ = auVar38._0_8_ + auVar38._0_8_;
          auVar57._8_8_ = auVar38._8_8_ + auVar38._8_8_;
          uVar59 = SUB84(dVar61,0);
          auVar52._8_4_ = uVar59;
          auVar52._0_8_ = dVar60;
          uVar62 = (undefined4)((ulonglong)dVar61 >> 0x20);
          auVar52._12_4_ = uVar62;
          auVar41._8_4_ = uVar59;
          auVar41._0_8_ = dVar60;
          auVar41._12_4_ = uVar62;
          auVar48._8_4_ = uVar59;
          auVar48._0_8_ = dVar60;
          auVar48._12_4_ = uVar62;
          auVar38 = blendpd(auVar48,auVar57,2);
          auVar53._0_8_ = auVar52._8_8_ * dVar13 - dVar60 * dVar54;
          auVar53._8_8_ = auVar57._0_8_ * dVar54 - auVar41._8_8_ * dVar11;
          auVar42._8_4_ = SUB84(auVar57._8_8_,0);
          auVar42._0_8_ = auVar57._0_8_;
          auVar42._12_4_ = (int)((ulonglong)auVar57._8_8_ >> 0x20);
          auVar49._0_8_ = auVar38._0_8_ * dVar11 - auVar57._0_8_ * auVar39._0_8_;
          auVar49._8_8_ = auVar38._8_8_ * dVar12 - auVar42._8_8_ * auVar39._8_8_;
          auVar43._8_4_ = SUB84(auVar53._8_8_,0);
          auVar43._0_8_ = auVar53._0_8_;
          auVar43._12_4_ = (int)((ulonglong)auVar53._8_8_ >> 0x20);
          auVar38 = blendpd(auVar53,auVar49,2);
          local_418._s_0.Z = 0.0 - (auVar57._0_8_ * dVar12 + local_178.M[3][2] + auVar38._0_8_);
          dVar60 = 0.0 - (dVar60 * dVar12 + dVar36 + auVar43._8_8_);
          dVar61 = 0.0 - (dVar61 * dVar12 + dVar44 + auVar49._0_8_);
        }
        uVar59 = (undefined4)((ulonglong)dVar61 >> 0x20);
        local_3d8.Pitch = *(double *)&this->field_0x160;
        local_3d8.Yaw = *(double *)&this->field_0x168;
        local_3d8.Roll = *(double *)&this->field_0x170;
        local_3f0._8_4_ = SUB84(dVar61,0);
        local_3f0._0_8_ = dVar60;
        local_3f0._12_4_ = uVar59;
        local_3e0 = local_418._s_0.Z;
        pTVar26 = FRotationConversionCache::RotatorToQuat
                            ((FRotationConversionCache *)&this->field_0x1e8,&local_338,&local_3d8);
        local_3b8._s_0.Z = local_418._s_0.Z;
        local_3b8._8_4_ = SUB84(dVar61,0);
        local_3b8._0_8_ = dVar60;
        local_3b8._12_4_ = uVar59;
        USceneComponent::SetRelativeLocationAndRotation
                  ((USceneComponent *)this,(TVector<double> *)&local_3b8._s_0,pTVar26,false,
                   (FHitResult *)0x0,None);
        local_418._s_0.X = (double)*(undefined8 *)&this->field_0x148;
        local_418._s_0.Y = (double)*(undefined8 *)&this->field_0x150;
        local_418._s_0.Z = (double)*(undefined8 *)&this->field_0x158;
        local_378._8_4_ = SUB84(dVar54,0);
        local_378._0_8_ = dVar13;
        local_378._12_4_ = (int)((ulonglong)dVar54 >> 0x20);
        local_368._8_4_ = SUB84(dVar12,0);
        local_368._0_8_ = dVar11;
        local_368._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
        USceneComponent::SetRelativeLocationAndRotation
                  ((USceneComponent *)this,(TVector<double> *)&local_418._s_0,
                   (TQuat<double> *)local_378,false,(FHitResult *)0x0,None);
      }
    }
  }
  this->bResetSimulation = this->bInitSimulation;
  if (this->bInitSimulation == false) {
    if (((((this->SimulationSettings).SimulationSetup.bLocalSimulation == false) ||
         ((this->SimulationSettings).SimulationSetup.LinearVelocityScale != 0.0)) ||
        ((this->SimulationSettings).SimulationSetup.AngularVelocityScale != 0.0)) &&
       (this_01 = *(USkinnedMeshComponent **)&this->field_0xd0,
       this_01 != (USkinnedMeshComponent *)0x0)) {
      pUVar23 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
      iVar19 = (int)pUVar23->_padding_;
      if (((iVar19 <= *(int *)(this_01->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar19 * 8) ==
           &pUVar23->_padding_)) &&
         (iVar19 = USkinnedMeshComponent::GetNumBones(this_01), 0 < iVar19)) {
        iVar19 = USkinnedMeshComponent::GetNumBones(this_01);
        iVar19 = iVar19 + -1;
        if (1 < iVar19) {
          iVar19 = 1;
        }
        USkinnedMeshComponent::GetBoneMatrix(this_01,&local_1f8,iVar19);
        fVar69 = (this->SimulationSettings).SimulationSetup.TeleportDistance;
        dVar44 = local_1f8.M[3][0] - (this->PrevBoneMatrix).M[3][0];
        dVar36 = local_1f8.M[3][1] - (this->PrevBoneMatrix).M[3][1];
        dVar60 = local_1f8.M[3][2] - (this->PrevBoneMatrix).M[3][2];
        if ((0.0 < fVar69) &&
           (fVar69 * fVar69 < (float)(dVar36 * dVar36 + dVar44 * dVar44 + dVar60 * dVar60))) {
          this->bResetSimulation = true;
        }
        (this->PrevBoneMatrix).M[0][0] = local_1f8.M[0][0];
        (this->PrevBoneMatrix).M[0][1] = local_1f8.M[0][1];
        (this->PrevBoneMatrix).M[0][2] = local_1f8.M[0][2];
        (this->PrevBoneMatrix).M[0][3] = local_1f8.M[0][3];
        (this->PrevBoneMatrix).M[1][0] = local_1f8.M[1][0];
        (this->PrevBoneMatrix).M[1][1] = local_1f8.M[1][1];
        (this->PrevBoneMatrix).M[1][2] = local_1f8.M[1][2];
        (this->PrevBoneMatrix).M[1][3] = local_1f8.M[1][3];
        (this->PrevBoneMatrix).M[2][0] = local_1f8.M[2][0];
        (this->PrevBoneMatrix).M[2][1] = local_1f8.M[2][1];
        *(undefined4 *)((this->PrevBoneMatrix).M[2] + 2) = local_1f8.M[2][2]._0_4_;
        *(undefined4 *)((longlong)(this->PrevBoneMatrix).M[2] + 0x14) = local_1f8.M[2][2]._4_4_;
        *(undefined4 *)((this->PrevBoneMatrix).M[2] + 3) = local_1f8.M[2][3]._0_4_;
        *(undefined4 *)((longlong)(this->PrevBoneMatrix).M[2] + 0x1c) = local_1f8.M[2][3]._4_4_;
        (this->PrevBoneMatrix).M[3][0] = local_1f8.M[3][0];
        (this->PrevBoneMatrix).M[3][1] = local_1f8.M[3][1];
        (this->PrevBoneMatrix).M[3][2] = local_1f8.M[3][2];
        (this->PrevBoneMatrix).M[3][3] = local_1f8.M[3][3];
      }
    }
    this->bResetSimulation =
         (bool)(this->bResetSimulation | (this->SimulationSettings).SimulationSetup.bResetSimulation
               );
    cVar17 = (**(code **)(*(longlong *)this + 0x560))(this);
    if ((cVar17 == '\0') ||
       ((*(longlong *)&this->field_0xa8 != 0 &&
        (*(char *)(*(longlong *)&this->field_0xa8 + 0x58) < '\0')))) {
      this->bResetSimulation = true;
    }
  }
  this->bInitSimulation = false;
  if ((this->HairGroupInstances).ArrayNum != 0) {
    if (this->RegisteredMeshComponent != (UMeshComponent *)0x0) {
      UActorComponent::MarkRenderTransformDirty((UActorComponent *)this);
    }
    if ((this->GroomCache).field0_0x0.DebugPtr != (UGroomCache *)0x0) {
      pUVar22 = *(UWorld **)&this->field_0xb0;
      if (pUVar22 == (UWorld *)0x0) {
        pUVar22 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
      }
      bVar18 = UWorld::AreActorsInitialized(pUVar22);
      if (((bVar18) && (this->bRunning != false)) && (this->bManualTick == false)) {
        fVar69 = param_1 + this->ElapsedTime;
        this->ElapsedTime = fVar69;
        UpdateGroomCache(this,fVar69);
      }
    }
    fVar69 = __real_bf800000;
    if (this->LODSelectionType == Predicted) {
      pFVar30 = (this->HairGroupInstances).AllocatorInstance.Data;
      iVar19 = (this->HairGroupInstances).ArrayNum;
      pFVar7 = pFVar30 + (longlong)iVar19 * 8;
      while( true ) {
        if ((this->HairGroupInstances).ArrayNum != iVar19) {
          local_438 = 0;
          `TCheckedPointerIterator<TRefCountPtr<FHairGroupInstance>,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_438);
        }
        if (pFVar30 == pFVar7) break;
        fVar1 = *(float *)(*(longlong *)pFVar30 + 0x154);
        fVar16 = fVar69;
        if (((0.0 < fVar1) && (fVar16 = fVar1, 0.0 <= fVar69)) && (fVar69 <= fVar1)) {
          fVar16 = fVar69;
        }
        fVar69 = fVar16;
        pFVar30 = pFVar30 + 8;
      }
      SwitchSimulationLOD(this,(int)this->LODPredictedIndex,(int)fVar69,this->LODSelectionType);
      this->LODPredictedIndex = fVar69;
    }
    else if (this->LODSelectionType == Forced) {
      fVar69 = this->LODForcedIndex;
    }
    EVar21 = GetHairSwapBufferType();
    uVar59 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._0_4_;
    uVar63 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._4_4_;
    uVar64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._0_4_;
    uVar65 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._4_4_;
    pUVar6 = this->RegisteredMeshComponent;
    uVar62 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._0_4_;
    uVar66 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._4_4_;
    uVar67 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._0_4_;
    uVar68 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._4_4_;
    uVar70 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._0_4_;
    uVar71 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._4_4_;
    uVar72 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._0_4_;
    uVar73 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._4_4_;
    uVar74 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._0_4_;
    uVar75 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._4_4_;
    uVar76 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._0_4_;
    uVar77 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._4_4_;
    uVar78 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._0_4_;
    uVar79 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._4_4_;
    uVar80 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._0_4_;
    uVar81 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._4_4_;
    uVar83 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._0_4_;
    uVar85 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._4_4_;
    uVar87 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._0_4_;
    uVar89 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._4_4_;
    if (pUVar6 != (UMeshComponent *)0x0) {
      uVar59 = (undefined4)pUVar6->_padding_;
      uVar63 = *(undefined4 *)((longlong)&pUVar6->_padding_ + 4);
      uVar64 = (undefined4)pUVar6->_padding_;
      uVar65 = *(undefined4 *)((longlong)&pUVar6->_padding_ + 4);
      uVar62 = (undefined4)pUVar6->_padding_;
      uVar66 = *(undefined4 *)((longlong)&pUVar6->_padding_ + 4);
      uVar67 = (undefined4)pUVar6->_padding_;
      uVar68 = *(undefined4 *)((longlong)&pUVar6->_padding_ + 4);
      uVar70 = (undefined4)pUVar6->_padding_;
      uVar71 = *(undefined4 *)((longlong)&pUVar6->_padding_ + 4);
      uVar72 = (undefined4)pUVar6->_padding_;
      uVar73 = *(undefined4 *)((longlong)&pUVar6->_padding_ + 4);
      uVar74 = (undefined4)pUVar6->_padding_;
      uVar75 = *(undefined4 *)((longlong)&pUVar6->_padding_ + 4);
      uVar76 = (undefined4)pUVar6->_padding_;
      uVar77 = *(undefined4 *)((longlong)&pUVar6->_padding_ + 4);
      uVar78 = (undefined4)pUVar6->_padding_;
      uVar79 = *(undefined4 *)((longlong)&pUVar6->_padding_ + 4);
      uVar80 = (undefined4)pUVar6->_padding_;
      uVar81 = *(undefined4 *)((longlong)&pUVar6->_padding_ + 4);
      uVar83 = (undefined4)pUVar6->_padding_;
      uVar85 = *(undefined4 *)((longlong)&pUVar6->_padding_ + 4);
      uVar87 = (undefined4)pUVar6->_padding_;
      uVar89 = *(undefined4 *)((longlong)&pUVar6->_padding_ + 4);
    }
    if (uVar32 != 5) {
      iVar19 = (this->HairGroupInstances).ArrayNum;
      pFVar7 = (this->HairGroupInstances).AllocatorInstance.Data;
      local_428.Data = (FScriptContainerElement *)0x0;
      uStack_420 = (double)CONCAT44(uStack_420._4_4_,iVar19);
      if (iVar19 == 0) {
        uStack_420 = 0.0;
        iVar19 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,iVar19,0,&local_428,iVar19,(int *)((longlong)&uStack_420 + 4));
        ConstructItems<TRefCountPtr<FHairGroupInstance>,TRefCountPtr<FHairGroupInstance>,int>
                  (local_428.Data,(TRefCountPtr<FHairGroupInstance> *)pFVar7,iVar19);
        iVar19 = (int)uStack_420;
      }
      FVar15.Data = local_428.Data;
      EVar3 = this->LODSelectionType;
      local_2e0.Data = (FScriptContainerElement *)0x0;
      local_2d8 = CONCAT44(local_2d8._4_4_,iVar19);
      local_2e8 = uVar2;
      local_2e4 = uVar32;
      if (iVar19 == 0) {
        local_2d8 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,iVar19,0,&local_2e0,iVar19,(int *)((longlong)&local_2d8 + 4));
        ConstructItems<TRefCountPtr<FHairGroupInstance>,TRefCountPtr<FHairGroupInstance>,int>
                  (local_2e0.Data,(TRefCountPtr<FHairGroupInstance> *)FVar15.Data,iVar19);
      }
      local_318[0] = (code *)0x0;
      local_2d0 = fVar69;
      local_2cc = EVar3;
      local_2c8 = EVar21 == Tick;
      local_2b8 = uVar59;
      uStack_2b4 = uVar63;
      uStack_2b0 = uVar64;
      uStack_2ac = uVar65;
      local_2a8 = uVar62;
      uStack_2a4 = uVar66;
      uStack_2a0 = uVar67;
      uStack_29c = uVar68;
      local_298 = uVar70;
      uStack_294 = uVar71;
      uStack_290 = uVar72;
      uStack_28c = uVar73;
      local_288 = uVar74;
      uStack_284 = uVar75;
      uStack_280 = uVar76;
      uStack_27c = uVar77;
      local_278 = uVar78;
      uStack_274 = uVar79;
      uStack_270 = uVar80;
      uStack_26c = uVar81;
      local_268 = uVar83;
      uStack_264 = uVar85;
      uStack_260 = uVar87;
      uStack_25c = uVar89;
      local_2f0 = FMemory::Malloc(0xa0,0x10);
      *local_2f0 = (double)&UE::Core::Private::Function::
                            TFunction_OwnedObject<`UGroomComponent::TickComponent'::`58'::<lambda_1>,1,1>
                            ::_vftable_;
      *(undefined4 *)(local_2f0 + 2) = local_2e8;
      local_2f0[3] = 0.0;
      *(uint *)((longlong)local_2f0 + 0x14) = local_2e4;
      local_2f0[3] = (double)local_2e0.Data;
      local_2e0.Data = (FScriptContainerElement *)0x0;
      *(int *)(local_2f0 + 4) = (int)local_2d8;
      *(undefined4 *)((longlong)local_2f0 + 0x24) = local_2d8._4_4_;
      local_2d8 = 0;
      *(float *)(local_2f0 + 5) = local_2d0;
      *(EHairLODSelectionType *)((longlong)local_2f0 + 0x2c) = local_2cc;
      *(undefined1 *)(local_2f0 + 6) = local_2c8;
      local_2f0[8] = (double)CONCAT44(uStack_2b4,local_2b8);
      local_2f0[9] = (double)CONCAT44(uStack_2ac,uStack_2b0);
      local_2f0[10] = (double)CONCAT44(uStack_2a4,local_2a8);
      local_2f0[0xb] = (double)CONCAT44(uStack_29c,uStack_2a0);
      local_2f0[0xc] = (double)CONCAT44(uStack_294,local_298);
      local_2f0[0xd] = (double)CONCAT44(uStack_28c,uStack_290);
      local_2f0[0xe] = (double)CONCAT44(uStack_284,local_288);
      local_2f0[0xf] = (double)CONCAT44(uStack_27c,uStack_280);
      local_2f0[0x10] = (double)CONCAT44(uStack_274,local_278);
      local_2f0[0x11] = (double)CONCAT44(uStack_26c,uStack_270);
      local_2f0[0x12] = (double)CONCAT44(uStack_264,local_268);
      local_2f0[0x13] = (double)CONCAT44(uStack_25c,uStack_260);
      if (local_2f0 + 2 != (double *)0x0) {
        local_318[0] = UE::Core::Private::Function::
                       TFunctionRefCaller<`UGroomComponent::TickComponent'::__l58::<lambda_1>,void,FRHICommandListImmediate_&>
                       ::Call;
      }
      this_02 = FRenderCommandList::GetInstanceTLS();
      if (this_02 == (FRenderCommandList *)0x0) {
        FRenderThreadCommandPipe::
        Enqueue<TRenderCommandTag<_UGroomComponent::TickComponent_::__l58::TSTR_FHairStrandsTick_TransformUpdate3839>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                  ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_318);
      }
      else {
        this_03 = FRenderCommandList::GetRenderThread(this_02);
        local_238[1] = (double)local_2f0;
        local_258._0_8_ = local_318[0];
        local_318[0] = (code *)0x0;
        local_2f0 = (double *)0x0;
        local_248[1] = dStack_300;
        local_248[0] = local_308;
        local_238[0] = local_2f8;
        local_228[0]._0_1_ = 2;
        pFVar27 = (FRenderCommandTag *)
                  TRenderCommandTag<`UGroomComponent::TickComponent'::__l58::TSTR_FHairStrandsTick_TransformUpdate3839>
                  ::Get();
        UE::RenderCommandPipe::FCommandList::Enqueue
                  (this_03,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                            *)local_258,pFVar27);
        uVar31 = (ulonglong)local_228[0]._0_1_;
        if ((2 < uVar31) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                ,0xd4,L""), bVar18)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar31] ==
            UE::Core::Private::
            TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct)
        {
          if ((double)local_258._0_8_ != 0.0) {
            pdVar28 = local_248;
            if ((double *)local_238[1] != (double *)0x0) {
              pdVar28 = (double *)local_238[1];
            }
            (**(code **)((longlong)*pdVar28 + 0x10))();
          }
        }
        else {
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar31])(local_258);
        }
      }
      if (local_318[0] != (code *)0x0) {
        pdVar28 = &local_308;
        if (local_2f0 != (double *)0x0) {
          pdVar28 = local_2f0;
        }
        (**(code **)((longlong)*pdVar28 + 0x10))();
      }
      DestructItems<TRefCountPtr<FHairGroupInstance>,int>
                ((TRefCountPtr<FHairGroupInstance> *)local_2e0.Data,(int)local_2d8);
      if (local_2e0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2e0.Data);
      }
      DestructItems<TRefCountPtr<FHairGroupInstance>,int>
                ((TRefCountPtr<FHairGroupInstance> *)local_428.Data,(int)uStack_420);
      if (local_428.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_428.Data);
      }
    }
    EVar21 = GetHairSwapBufferType();
    if ((EVar21 == RenderFrame) ||
       ((this->MeshDeformerInstance).field0_0x0.DebugPtr != (UMeshDeformerInstance *)0x0)) {
      UActorComponent::MarkRenderDynamicDataDirty((UActorComponent *)this);
    }
  }
  return;
}

// UpdateGroomCache @ 14e02bc40

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UGroomComponent::UpdateGroomCache(UGroomComponent *this,float param_1)

{
  IGroomCacheBuffers *pIVar1;
  bool bVar2;
  undefined8 in_RDX;
  FWeakObjectPtr local_res8 [2];
  UGroomComponent *local_res18 [2];
  code *local_38 [2];
  undefined **local_28;
  FWeakObjectPtr local_20;
  undefined8 local_10;
  
  if ((((this->GroomCache).field0_0x0.DebugPtr != (UGroomCache *)0x0) &&
      (pIVar1 = (this->GroomCacheBuffers).Object, pIVar1 != (IGroomCacheBuffers *)0x0)) &&
     (this->bRunning != false)) {
    (**(code **)(pIVar1->_padding_ + 0x38))(pIVar1,in_RDX,this->bLooping);
    bVar2 = IsInGameThread();
    if (bVar2) {
      UActorComponent::MarkRenderTransformDirty((UActorComponent *)this);
      return;
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    local_res8[0].ObjectIndex = 0;
    local_res8[0].ObjectSerialNumber = 0;
    local_res18[0] = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=(local_res8,(FObjectPtr)local_res18);
    local_10 = 0;
    local_28 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UGroomComponent::UpdateGroomCache'::`10'::<lambda_1>,1,0>::
                _vftable_;
    local_20 = local_res8[0];
    local_38[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UGroomComponent::UpdateGroomCache'::__l10::<lambda_1>,void>::
                  Call;
    AsyncTask(GameThread,(TUniqueFunction<void___cdecl(void)> *)local_38);
  }
  return;
}

// UpdateHairGroupsDesc @ 14e02bd30

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall UGroomComponent::UpdateHairGroupsDesc(UGroomComponent *this)

{
  int *piVar1;
  TArray<FHairGroupDesc,TSizedDefaultAllocator<32>_> *pTVar2;
  UGroomAsset *this_00;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined2 uStack_20;
  undefined1 uStack_1e;
  undefined1 uStack_1d;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined8 uStack_10;
  
  this_00 = (this->GroomAsset).field0_0x0.DebugPtr;
  pTVar2 = &this->GroomGroupsDesc;
  if (this_00 == (UGroomAsset *)0x0) {
    piVar1 = &(this->GroomGroupsDesc).ArrayMax;
    (this->GroomGroupsDesc).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,4,0,&pTVar2->AllocatorInstance,0,piVar1);
      return;
    }
  }
  else {
    uVar6 = UGroomAsset::GetNumHairGroups(this_00);
    uVar9 = (ulonglong)uVar6;
    if (uVar6 != (this->GroomGroupsDesc).ArrayNum) {
      uStack_1d = 0;
      local_28 = 0x3f80000000000000;
      uStack_20 = 0;
      uStack_1e = 0;
      local_48 = 0x3dcccccd00000000;
      uStack_40 = 0x3f80000000000000;
      local_38 = 0x3f80000000000000;
      uStack_30 = 0x3f80000000000000;
      uStack_12 = 0;
      uStack_1c = 0;
      uStack_18 = 0;
      uStack_14 = 1;
      uStack_10 = 0x3f800000;
      if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum(uVar9);
      }
      piVar1 = &(this->GroomGroupsDesc).ArrayMax;
      (this->GroomGroupsDesc).ArrayNum = 0;
      if (*piVar1 != uVar6) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x40,4,uVar6,&pTVar2->AllocatorInstance,0,piVar1);
      }
      if (0 < (int)uVar6) {
        do {
          pFVar3 = (pTVar2->AllocatorInstance).Data;
          if (((pFVar3 <= (FScriptContainerElement *)&local_48) &&
              ((FScriptContainerElement *)&local_48 < pFVar3 + (longlong)*piVar1 * 0x40)) &&
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
          iVar7 = (this->GroomGroupsDesc).ArrayNum;
          if (iVar7 == *piVar1) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x440,&pTVar2->AllocatorInstance,piVar1);
          }
          (this->GroomGroupsDesc).ArrayNum = iVar7 + 1;
          pFVar3 = (pTVar2->AllocatorInstance).Data;
          lVar8 = (longlong)iVar7 * 0x40;
          *(undefined8 *)(pFVar3 + lVar8) = local_48;
          *(undefined8 *)(pFVar3 + lVar8 + 8) = uStack_40;
          *(undefined8 *)(pFVar3 + lVar8 + 0x10) = local_38;
          *(undefined8 *)(pFVar3 + lVar8 + 0x10 + 8) = uStack_30;
          *(undefined8 *)(pFVar3 + lVar8 + 0x20) = local_28;
          *(ulonglong *)(pFVar3 + lVar8 + 0x20 + 8) =
               CONCAT44(uStack_1c,CONCAT13(uStack_1d,CONCAT12(uStack_1e,uStack_20)));
          *(ulonglong *)(pFVar3 + lVar8 + 0x30) = CONCAT26(uStack_12,CONCAT24(uStack_14,uStack_18));
          *(undefined8 *)(pFVar3 + lVar8 + 0x30 + 8) = uStack_10;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
    }
  }
  return;
}

// UpdateHairGroupsDescAndInvalidateRenderState @ 14e02bf60

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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
UGroomComponent::UpdateHairGroupsDescAndInvalidateRenderState(UGroomComponent *this,bool param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  FHairGroupDesc *pFVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  undefined1 local_res10 [8];
  FHairGroupDesc local_58;
  
  UpdateHairGroupsDesc(this);
  pFVar12 = (this->HairGroupInstances).AllocatorInstance.Data;
  uVar13 = 0;
  iVar2 = (this->HairGroupInstances).ArrayNum;
  pFVar1 = pFVar12 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->HairGroupInstances).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TRefCountPtr<FHairGroupInstance>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar12 == pFVar1) break;
    pFVar11 = GetGroomGroupsDesc(&local_58,(this->GroomAsset).field0_0x0.DebugPtr,this,uVar13);
    uVar13 = uVar13 + 1;
    uVar4 = *(undefined8 *)&pFVar11->HairWidth_Override;
    uVar5 = *(undefined8 *)&pFVar11->HairRootScale_Override;
    uVar6 = *(undefined8 *)&pFVar11->HairTipScale_Override;
    uVar7 = *(undefined8 *)&pFVar11->HairShadowDensity_Override;
    uVar8 = *(undefined8 *)&pFVar11->HairRaytracingRadiusScale_Override;
    uVar9 = *(undefined8 *)&pFVar11->bUseStableRasterization;
    uVar10 = *(undefined8 *)&pFVar11->HairLengthScale;
    lVar3 = *(longlong *)pFVar12;
    pFVar12 = pFVar12 + 8;
    *(undefined8 *)(lVar3 + 0xb8) = *(undefined8 *)pFVar11;
    *(undefined8 *)(lVar3 + 0xc0) = uVar4;
    *(undefined8 *)(lVar3 + 200) = uVar5;
    *(undefined8 *)(lVar3 + 0xd0) = uVar6;
    *(undefined8 *)(lVar3 + 0xd8) = uVar7;
    *(undefined8 *)(lVar3 + 0xe0) = uVar8;
    *(undefined8 *)(lVar3 + 0xe8) = uVar9;
    *(undefined8 *)(lVar3 + 0xf0) = uVar10;
  }
  if (param_1) {
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  }
  return;
}

// UpdateHairSimulation @ 14e02c040

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall UGroomComponent::UpdateHairSimulation(UGroomComponent *this)

{
  TArray<TObjectPtr<UNiagaraComponent>,TSizedDefaultAllocator<32>_> *pTVar1;
  longlong *plVar2;
  UGroomAsset *this_00;
  longlong lVar3;
  UObject *pUVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  TArray<FHairGroupsPhysics,TSizedDefaultAllocator<32>_> *pTVar9;
  UClass *pUVar10;
  uint uVar11;
  ulonglong uVar12;
  int iVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  uint uVar17;
  ulonglong uVar18;
  int *piVar19;
  longlong *plVar20;
  float fVar21;
  undefined1 local_res8 [8];
  uint local_res10;
  uint local_res18;
  int *local_res20;
  
  uVar16 = 0;
  this_00 = (this->GroomAsset).field0_0x0.DebugPtr;
  uVar11 = 0;
  if (this_00 != (UGroomAsset *)0x0) {
    pTVar9 = UGroomAsset::GetHairGroupsPhysics(this_00);
    uVar11 = pTVar9->ArrayNum;
  }
  uVar15 = (this->NiagaraComponents).ArrayNum;
  pTVar1 = &this->NiagaraComponents;
  iVar13 = (this->NiagaraComponents).ArrayNum;
  piVar19 = &(this->NiagaraComponents).ArrayNum;
  if ((int)uVar15 < (int)uVar11) {
    uVar15 = uVar11;
  }
  local_res18 = uVar15;
  local_res20 = piVar19;
  if (iVar13 < (int)uVar15) {
    iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,uVar15 - iVar13,&pTVar1->AllocatorInstance,piVar19,
                       &(this->NiagaraComponents).ArrayMax);
    memset((pTVar1->AllocatorInstance).Data + (longlong)iVar8 * 8,0,
           (longlong)(int)(uVar15 - iVar13) << 3);
  }
  else {
    if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
    }
    if ((int)uVar15 < iVar13) {
      iVar13 = iVar13 - uVar15;
      if (iVar13 < 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      else if (iVar13 == 0) goto LAB_14e02c17a;
      pFVar5 = (pTVar1->AllocatorInstance).Data + (longlong)(int)uVar15 * 8;
      iVar8 = (*piVar19 - iVar13) - uVar15;
      if (iVar8 != 0) {
        memmove(pFVar5,pFVar5 + (longlong)iVar13 * 8,(longlong)iVar8 << 3);
      }
      *piVar19 = *piVar19 - iVar13;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,&pTVar1->AllocatorInstance,*piVar19,&(this->NiagaraComponents).ArrayMax);
    }
  }
LAB_14e02c17a:
  uVar11 = uVar15;
  if (GHairStrands_UseAttachedSimulationComponents == 1) {
    local_res10 = *(uint *)&this->field_0xf0;
    uVar12 = (ulonglong)(int)local_res10;
    plVar20 = *(longlong **)&this->field_0xe8;
    plVar2 = plVar20 + uVar12;
    uVar14 = uVar16;
    uVar18 = uVar16;
    while( true ) {
      if (*(int *)&this->field_0xf0 != (int)uVar12) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TObjectPtr<USceneComponent>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      uVar11 = local_res18;
      if (plVar20 == plVar2) break;
      lVar3 = *plVar20;
      pUVar10 = Z_Construct_UClass_UNiagaraComponent_NoRegister();
      iVar13 = (int)pUVar10->_padding_;
      if (((iVar13 <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
          ((longlong *)
           *(undefined1 **)
            (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)iVar13 * 8) ==
           &pUVar10->_padding_)) && ((longlong)uVar14 < (longlong)(int)uVar15)) {
        uVar17 = (uint)uVar18;
        uVar11 = 0;
        if ((int)uVar17 < *piVar19) {
          uVar11 = ~uVar17 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        lVar3 = uVar14 * 8;
        piVar19 = local_res20;
        if (*(longlong *)((this->NiagaraComponents).AllocatorInstance.Data + lVar3) == 0) {
          pUVar4 = (UObject *)*plVar20;
          uVar11 = 0;
          if ((int)uVar17 < *local_res20) {
            uVar11 = ~uVar17 >> 0x1f;
          }
          if ((uVar11 == 0) &&
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
          pFVar5 = (this->NiagaraComponents).AllocatorInstance.Data;
          uVar18 = (ulonglong)(uVar17 + 1);
          uVar14 = uVar14 + 1;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar4);
          }
          *(UObject **)(pFVar5 + lVar3) = pUVar4;
          piVar19 = local_res20;
        }
      }
      uVar12 = (ulonglong)local_res10;
      plVar20 = plVar20 + 1;
    }
  }
  fVar21 = this->LODForcedIndex;
  if ((fVar21 == __real_bf800000) && (fVar21 = this->LODPredictedIndex, fVar21 == __real_bf800000))
  {
    fVar21 = 0.0;
  }
  if (0 < (int)uVar11) {
    do {
      CreateHairSimulation(this,(int)uVar16,(int)fVar21);
      uVar15 = (int)uVar16 + 1;
      uVar16 = (ulonglong)uVar15;
    } while ((int)uVar15 < (int)uVar11);
  }
  UpdateSimulatedGroups(this);
  return;
}

// UpdateSimulatedGroups @ 14e02c850

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UGroomComponent::UpdateSimulatedGroups(UGroomComponent *this)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  TObjectPtr<UGroomAsset>_u_0 TVar5;
  TObjectPtr<UGroomBindingAsset>_u_0 TVar6;
  code *pcVar7;
  ForAnyElementType FVar8;
  bool bVar9;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar10;
  code **ppcVar11;
  ulonglong uVar12;
  undefined1 auStackY_128 [32];
  ForAnyElementType local_e8;
  int local_e0;
  int local_dc;
  ForAnyElementType local_d8;
  undefined8 local_d0;
  TObjectPtr<UGroomAsset>_u_0 local_c8;
  TObjectPtr<UGroomBindingAsset>_u_0 local_c0;
  undefined4 local_b8;
  undefined1 local_b4;
  int local_b0;
  code *local_a8 [2];
  code *local_98 [3];
  code **local_80;
  undefined1 local_78 [40];
  code **local_50;
  byte local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_128;
  if (0 < (this->HairGroupInstances).ArrayNum) {
    uVar2 = *(undefined4 *)&this->field_0x344;
    bVar9 = IsHairStrandsEnabled(Strands,SP_NumPlatforms);
    iVar3 = (this->HairGroupInstances).ArrayNum;
    fVar1 = this->LODForcedIndex;
    pFVar4 = (this->HairGroupInstances).AllocatorInstance.Data;
    local_e8.Data = (FScriptContainerElement *)0x0;
    local_e0 = iVar3;
    if (iVar3 == 0) {
      local_dc = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar3,0,&local_e8,iVar3,&local_dc);
      ConstructItems<TRefCountPtr<FHairGroupInstance>,TRefCountPtr<FHairGroupInstance>,int>
                (local_e8.Data,(TRefCountPtr<FHairGroupInstance> *)pFVar4,iVar3);
    }
    iVar3 = local_e0;
    FVar8.Data = local_e8.Data;
    TVar5 = (this->GroomAsset).field0_0x0;
    TVar6 = (this->BindingAsset).field0_0x0;
    local_d8.Data = (FScriptContainerElement *)0x0;
    local_d0 = CONCAT44(local_d0._4_4_,local_e0);
    if (local_e0 == 0) {
      local_d0 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,local_e0,0,&local_d8,local_e0,(int *)((longlong)&local_d0 + 4));
      ConstructItems<TRefCountPtr<FHairGroupInstance>,TRefCountPtr<FHairGroupInstance>,int>
                (local_d8.Data,(TRefCountPtr<FHairGroupInstance> *)FVar8.Data,iVar3);
    }
    local_a8[0] = (code *)0x0;
    local_c8 = TVar5;
    local_c0 = TVar6;
    local_b8 = uVar2;
    local_b4 = bVar9;
    local_b0 = (int)fVar1;
    local_80 = FMemory::Malloc(0x38,8);
    local_80[1] = (code *)0x0;
    *local_80 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`UGroomComponent::UpdateSimulatedGroups'::`5'::<lambda_1>,1,1>
                         ::_vftable_;
    local_80[1] = (code *)local_d8.Data;
    local_d8.Data = (FScriptContainerElement *)0x0;
    *(int *)(local_80 + 2) = (int)local_d0;
    *(undefined4 *)((longlong)local_80 + 0x14) = local_d0._4_4_;
    local_d0 = 0;
    *(TObjectPtr<UGroomAsset>_u_0 *)(local_80 + 3) = local_c8;
    *(TObjectPtr<UGroomBindingAsset>_u_0 *)(local_80 + 4) = local_c0;
    *(undefined4 *)(local_80 + 5) = local_b8;
    *(undefined1 *)((longlong)local_80 + 0x2c) = local_b4;
    *(int *)(local_80 + 6) = local_b0;
    if (local_80 + 1 != (code **)0x0) {
      local_a8[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`UGroomComponent::UpdateSimulatedGroups'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
                    ::Call;
    }
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_UGroomComponent::UpdateSimulatedGroups_::__l5::TSTR_FHairStrandsTick_UEnableSimulatedGroups2450>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_a8);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_78._0_8_ = local_a8[0];
      local_50 = local_80;
      local_80 = (code **)0x0;
      local_78._16_8_ = local_98[0];
      local_78._24_8_ = local_98[1];
      local_78._32_8_ = local_98[2];
      local_a8[0] = (code *)0x0;
      local_48 = 2;
      pFVar10 = (FRenderCommandTag *)
                TRenderCommandTag<`UGroomComponent::UpdateSimulatedGroups'::__l5::TSTR_FHairStrandsTick_UEnableSimulatedGroups2450>
                ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_78,pFVar10);
      uVar12 = (ulonglong)local_48;
      if (2 < uVar12) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar9) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar12] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_78._0_8_ != (code *)0x0) {
          ppcVar11 = (code **)(local_78 + 0x10);
          if (local_50 != (code **)0x0) {
            ppcVar11 = local_50;
          }
          (**(code **)(*ppcVar11 + 0x10))();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar12])(local_78);
      }
    }
    if (local_a8[0] != (code *)0x0) {
      ppcVar11 = local_a8 + 2;
      if (local_80 != (code **)0x0) {
        ppcVar11 = local_80;
      }
      (**(code **)(*ppcVar11 + 0x10))();
    }
    DestructItems<TRefCountPtr<FHairGroupInstance>,int>
              ((TRefCountPtr<FHairGroupInstance> *)local_d8.Data,(int)local_d0);
    if (local_d8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data);
    }
    DestructItems<TRefCountPtr<FHairGroupInstance>,int>
              ((TRefCountPtr<FHairGroupInstance> *)local_e8.Data,local_e0);
    if (local_e8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data);
    }
  }
  return;
}

// _getUObject @ 14e030100

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

UObject * __thiscall UGroomComponent::_getUObject(UGroomComponent *this)

{
  return (UObject *)&this[-1].GroomSolver.SoftObjectPtr.field_0x8;
}

// _getUObject`adjustor{552}' @ 14e03010c

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UGroomComponent::_getUObject`adjustor{552}' (void)const __ptr64 */

UObject * __thiscall UGroomComponent::_getUObject_adjustor_552__(UGroomComponent *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UGroomComponent *)&this[-1].BindingAsset);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{560}' @ 14e030120

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UGroomComponent::_getUObject`adjustor{560}' (void)const __ptr64 */

UObject * __thiscall UGroomComponent::_getUObject_adjustor_560__(UGroomComponent *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UGroomComponent *)&this[-1].SourceSkeletalMesh);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{568}' @ 14e030134

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UGroomComponent::_getUObject`adjustor{568}' (void)const __ptr64 */

UObject * __thiscall UGroomComponent::_getUObject_adjustor_568__(UGroomComponent *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UGroomComponent *)&this[-1].NiagaraComponents.ArrayNum);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{1384}' @ 14e030148

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UGroomComponent::_getUObject`adjustor{1384}' (void)const __ptr64 */

UObject * __thiscall UGroomComponent::_getUObject_adjustor_1384__(UGroomComponent *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UGroomComponent *)&this[-1].field_0x288);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{1392}' @ 14e03015c

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UGroomComponent::_getUObject`adjustor{1392}' (void)const __ptr64 */

UObject * __thiscall UGroomComponent::_getUObject_adjustor_1392__(UGroomComponent *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UGroomComponent *)&this[-1].field_0x280);
  return (UObject *)pUVar1;
}

// execAddCollisionComponent @ 14e030170

void __cdecl
UGroomComponent::execAddCollisionComponent(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr> *pTVar2;
  code *pcVar3;
  UObject *pUVar4;
  bool bVar5;
  int iVar6;
  TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr> *this;
  undefined1 *puVar7;
  UObject *local_res10 [2];
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_48;
  UObject *local_40;
  UObject *local_38 [2];
  
  local_res10[0] = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pUVar4 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10[0] != (UObject *)0x0) {
    puVar7 = &param_1[0x25].field_0x10;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(local_res10[0]);
    }
    local_res20.ObjectIndex = 0;
    local_res20.ObjectSerialNumber = 0;
    local_40 = pUVar4;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_40);
    pTVar2 = *(TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr> **)puVar7;
    iVar6 = *(int *)&param_1[0x25].field_0x18;
    for (this = pTVar2; this != pTVar2 + iVar6; this = this + 1) {
      bVar5 = TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>::
              UEOpEquals<USkeletalMeshComponent,bool>
                        (this,(TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr> *)&local_res20)
      ;
      if (bVar5) {
        if ((int)((longlong)this - (longlong)pTVar2 >> 3) != -1) {
          return;
        }
        break;
      }
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    local_48.ObjectIndex = 0;
    local_48.ObjectSerialNumber = 0;
    local_38[0] = pUVar4;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    FWeakObjectPtr::operator=(&local_48,(FObjectPtr)local_38);
    if (((*(FWeakObjectPtr **)puVar7 <= &local_48) &&
        (&local_48 < *(FWeakObjectPtr **)puVar7 + *(int *)&param_1[0x25].field_0x1c)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar6 = *(int *)&param_1[0x25].field_0x18;
    if (iVar6 == *(int *)&param_1[0x25].field_0x1c) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,(ForAnyElementType *)puVar7,(int *)&param_1[0x25].field_0x1c);
    }
    *(int *)&param_1[0x25].field_0x18 = iVar6 + 1;
    *(FWeakObjectPtr *)(*(longlong *)puVar7 + (longlong)iVar6 * 8) = local_48;
  }
  return;
}

// execGetIsHairLengthScaleEnabled @ 14e030a10

void __cdecl
UGroomComponent::execGetIsHairLengthScaleEnabled(UObject *param_1,FFrame *param_2,void *param_3)

{
  char *pcVar1;
  int iVar2;
  longlong lVar3;
  undefined1 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 uVar7;
  undefined1 local_res8 [8];
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar2 = *(int *)&param_1[0x2f].field_0x10;
  lVar3 = *(longlong *)&param_1[0x2f].field_0x8;
  lVar5 = lVar3;
  uVar4 = 1;
  while( true ) {
    uVar7 = uVar4;
    if (*(int *)&param_1[0x2f].field_0x10 != iVar2) {
      `TCheckedPointerIterator<FHairGroupDesc,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (lVar5 == (longlong)iVar2 * 0x40 + lVar3) break;
    lVar6 = lVar5 + 0x40;
    pcVar1 = (char *)(lVar5 + 0x3c);
    lVar5 = lVar6;
    uVar4 = 0;
    if (*pcVar1 != '\0') {
      uVar4 = uVar7;
    }
  }
  *(undefined1 *)param_3 = uVar7;
  return;
}

// execGetNiagaraComponent @ 14e030ac0

void __cdecl
UGroomComponent::execGetNiagaraComponent(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  code *pcVar3;
  bool bVar4;
  longlong lVar5;
  uint uVar6;
  uint local_res8 [2];
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar5 = (longlong)(int)local_res8[0];
  if (((int)local_res8[0] < 0) || (*(int *)&param_1[0x24].field_0x18 <= (int)local_res8[0])) {
    *(undefined8 *)param_3 = 0;
  }
  else {
    uVar6 = 0;
    if ((int)local_res8[0] < *(int *)&param_1[0x24].field_0x18) {
      uVar6 = ~local_res8[0] >> 0x1f;
    }
    if (uVar6 == 0) {
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
    pUVar2 = *(UObject **)(*(longlong *)&param_1[0x24].field_0x10 + lVar5 * 8);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar2);
    }
    *(UObject **)param_3 = pUVar2;
  }
  return;
}

// execResetCollisionComponents @ 14e030ca0

void __cdecl
UGroomComponent::execResetCollisionComponents(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)&param_1[0x25].field_0x18 = 0;
  if (*(int *)&param_1[0x25].field_0x1c < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,(ForAnyElementType *)&param_1[0x25].field_0x10,0,
               (int *)&param_1[0x25].field_0x1c);
  }
  return;
}

// execResetSimulation @ 14e030d00

void __cdecl UGroomComponent::execResetSimulation(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined2 *)&param_1[0x2b].field_0x18 = 0x101;
  return;
}

// execSetBindingAsset @ 14e030d30

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl UGroomComponent::execSetBindingAsset(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UGroomBindingAsset *local_res8;
  
  local_res8 = (UGroomBindingAsset *)0x0;
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
  SetGroomAsset((UGroomComponent *)param_1,*(UGroomAsset **)(param_1 + 0x24),local_res8,true);
  return;
}

// execSetEnableSimulation @ 14e030dd0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGroomComponent::execSetEnableSimulation(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  FString local_18;
  
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
  if (param_1[0x25].field_0x20 == '\0') {
    if (2 < (byte)LogHairStrands._0_1_) {
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_18,(UObject *)0x0);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHairStrands);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  else if ((bool)*(char *)(param_1 + 0x27) != (local_res8[0] != 0)) {
    *(bool *)(param_1 + 0x27) = local_res8[0] != 0;
    ReleaseResources((UGroomComponent *)param_1);
    UpdateHairGroupsDesc((UGroomComponent *)param_1);
    InitResources((UGroomComponent *)param_1,false);
    UpdateHairSimulation((UGroomComponent *)param_1);
    return;
  }
  return;
}

// execSetGroomAsset @ 14e030ef0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl UGroomComponent::execSetGroomAsset(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UGroomAsset *local_res8;
  
  local_res8 = (UGroomAsset *)0x0;
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
  SetGroomAsset((UGroomComponent *)param_1,local_res8,*(UGroomBindingAsset **)(param_1 + 0x25),true)
  ;
  return;
}

// execSetGroomCache @ 14e030f90

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl UGroomComponent::execSetGroomCache(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  UObject *pUVar3;
  IGroomCacheStreamingManager *pIVar4;
  bool bVar5;
  UObject *local_res8;
  
  local_res8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  pUVar3 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(UObject **)&param_1[0x24].field_0x8 == (UObject *)0x0) {
    bVar5 = local_res8 == (UObject *)0x0;
  }
  else {
    bVar5 = *(UObject **)&param_1[0x24].field_0x8 == local_res8;
  }
  if (!bVar5) {
    ReleaseResources((UGroomComponent *)param_1);
    lVar2 = *(longlong *)&param_1[0x24].field_0x8;
    *(undefined4 *)&param_1[0x2f].field_0x1c = 0;
    if (((lVar2 != 0) && (param_1[0x2f].field_0x19 != '\0')) && (GUseGroomCacheStreaming != false))
    {
      pIVar4 = IGroomCacheStreamingManager::Get();
      (**(code **)(*(longlong *)pIVar4 + 0xa8))(pIVar4);
    }
    UpdateGroomCache((UGroomComponent *)param_1,*(float *)&param_1[0x2f].field_0x1c);
    if (GUseGroomCacheStreaming == false) {
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar3);
      }
      *(UObject **)&param_1[0x24].field_0x8 = pUVar3;
    }
    else {
      pIVar4 = IGroomCacheStreamingManager::Get();
      (**(code **)(*(longlong *)pIVar4 + 0xa0))(pIVar4,param_1);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar3);
      }
      *(UObject **)&param_1[0x24].field_0x8 = pUVar3;
      pIVar4 = IGroomCacheStreamingManager::Get();
      (**(code **)(*(longlong *)pIVar4 + 0x98))(pIVar4);
    }
    InitResources((UGroomComponent *)param_1,false);
  }
  return;
}

// execSetHairLengthScale @ 14e031110

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl UGroomComponent::execSetHairLengthScale(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  undefined4 local_res10 [2];
  
  local_res10[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  uVar3 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = *(int *)&param_1[0x2f].field_0x10;
  lVar4 = *(longlong *)&param_1[0x2f].field_0x8;
  lVar5 = (longlong)iVar1 * 0x40 + lVar4;
  while( true ) {
    if (*(int *)&param_1[0x2f].field_0x10 != iVar1) {
      `TCheckedPointerIterator<FHairGroupDesc,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (lVar4 == lVar5) break;
    *(undefined4 *)(lVar4 + 0x38) = uVar3;
    lVar4 = lVar4 + 0x40;
  }
  UpdateHairGroupsDescAndInvalidateRenderState((UGroomComponent *)param_1,false);
  return;
}

// execSetHairLengthScaleEnable @ 14e0311f0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
UGroomComponent::execSetHairLengthScaleEnable(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 local_res8 [8];
  int local_res10 [2];
  
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar5 = local_res10[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = *(int *)&param_1[0x2f].field_0x10;
  lVar3 = *(longlong *)&param_1[0x2f].field_0x8;
  lVar4 = (longlong)iVar1 * 0x40 + lVar3;
  while( true ) {
    if (*(int *)&param_1[0x2f].field_0x10 != iVar1) {
      `TCheckedPointerIterator<FHairGroupDesc,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (lVar3 == lVar4) break;
    *(bool *)(lVar3 + 0x3c) = bVar5;
    lVar3 = lVar3 + 0x40;
  }
  UpdateHairGroupsDescAndInvalidateRenderState((UGroomComponent *)param_1,true);
  InitResources((UGroomComponent *)param_1,false);
  return;
}

// execSetMeshDeformer @ 14e0312d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl UGroomComponent::execSetMeshDeformer(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong *plVar2;
  UObject *pUVar3;
  UObject *pUVar4;
  longlong *local_res8;
  
  pUVar4 = (UObject *)0x0;
  local_res8 = (longlong *)0x0;
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
  *(longlong **)&param_1[0x29].field_0x10 = local_res8;
  pUVar3 = (UObject *)(**(code **)(*local_res8 + 0x2b0))(local_res8,param_1);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  *(UObject **)&param_1[0x29].field_0x20 = pUVar3;
  plVar2 = *(longlong **)&param_1[0x29].field_0x10;
  if (plVar2 != (longlong *)0x0) {
    pUVar4 = (UObject *)(**(code **)(*plVar2 + 0x2b8))(plVar2,param_1,pUVar3);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  *(UObject **)&param_1[0x29].field_0x18 = pUVar4;
  UActorComponent::MarkRenderDynamicDataDirty((UActorComponent *)param_1);
  return;
}

// execSetPhysicsAsset @ 14e0313d0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl UGroomComponent::execSetPhysicsAsset(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 != 0) {
    if (*(longlong *)&param_1[0x25].field_0x8 == 0) {
      bVar2 = local_res10 == 0;
    }
    else {
      bVar2 = *(longlong *)&param_1[0x25].field_0x8 == local_res10;
    }
    if (!bVar2) {
      *(longlong *)&param_1[0x25].field_0x8 = local_res10;
      ReleaseResources((UGroomComponent *)param_1);
      UpdateHairGroupsDesc((UGroomComponent *)param_1);
      InitResources((UGroomComponent *)param_1,false);
      UpdateHairSimulation((UGroomComponent *)param_1);
    }
  }
  return;
}

