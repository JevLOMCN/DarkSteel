// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_Common
// Functions: 42

// StaticClass @ 149482790

UClass * __cdecl UWN_VolumeComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_VolumeComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_Common",L"WN_VolumeComponent",
               &Z_Registration_Info_UClass_UWN_VolumeComponent.InnerSingleton,
               StaticRegisterNativesUWN_VolumeComponent,0x6a0,0x10,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UWN_VolumeComponent>,
               InternalVTableHelperCtorCaller<UWN_VolumeComponent>,local_res8,
               UPrimitiveComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_VolumeComponent.InnerSingleton;
}

// UWN_VolumeComponent @ 14948f090

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UWN_VolumeComponent * __thiscall
UWN_VolumeComponent::UWN_VolumeComponent(UWN_VolumeComponent *this,FVTableHelper *param_1)

{
  undefined8 local_res8;
  
  UPrimitiveComponent::UPrimitiveComponent((UPrimitiveComponent *)this,param_1);
  this->bIsShapeEditable = true;
  this->bOverrideNeedRendering = false;
  this->bDisplayShadedVolume = false;
  this->bShowDebugShape = true;
  this->bValid = true;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->bIgnoreDepth = false;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  local_res8 = 0;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  (this->CommonSubsystem).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->CommonSubsystem).WeakPtr,(FObjectPtr)&local_res8);
  *(undefined8 *)&this->OnEnter = 0;
  *(undefined8 *)&(this->OnEnter).field_0x8 = 0;
  *(undefined8 *)&(this->OnEnter).field_0x10 = 0;
  *(undefined8 *)&this->OnLeave = 0;
  *(undefined8 *)&(this->OnLeave).field_0x8 = 0;
  *(undefined8 *)&(this->OnLeave).field_0x10 = 0;
  *(undefined8 *)&(this->OverlapVolumeComps).Elements = 0;
  *(undefined8 *)&(this->OverlapVolumeComps).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->OverlapVolumeComps).Elements.field_0x20 = 0;
  this->IndexInSubsystem = -1;
  *(undefined4 *)&(this->OverlapVolumeComps).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->OverlapVolumeComps).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->OverlapVolumeComps).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->OverlapVolumeComps).Elements.field_0x34 = 0;
  (this->OverlapVolumeComps).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->OverlapVolumeComps).HashSize = 0;
  (this->WireComponent).field0_0x0.DebugPtr = (UWN_VolumeWireComponent *)0x0;
  (this->FaceComponent).field0_0x0.DebugPtr = (UWN_VolumeFaceComponent *)0x0;
  (this->WireMaterial).field0_0x0.DebugPtr = (UMaterial *)0x0;
  (this->FaceMaterial).field0_0x0.DebugPtr = (UMaterial *)0x0;
  (this->FaceMaterialNoDepthTest).field0_0x0.DebugPtr = (UMaterial *)0x0;
  *(undefined8 *)&this->ObserverInfo = 0;
  *(undefined8 *)&(this->ObserverInfo).field_0x8 = 0;
  *(undefined8 *)&(this->ObserverInfo).field_0x20 = 0;
  this->bCanOverlapVolume = true;
  this->bIsVolumeOverlap = false;
  *(undefined4 *)&(this->ObserverInfo).field_0x28 = 0;
  *(undefined4 *)&(this->ObserverInfo).field_0x2c = 0x80;
  *(undefined4 *)&(this->ObserverInfo).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ObserverInfo).field_0x34 = 0;
  *(undefined8 *)&(this->ObserverInfo).field_0x40 = 0;
  *(undefined4 *)&(this->ObserverInfo).field_0x48 = 0;
  this->bUseInfiniteVolume = true;
  this->bIsInfiniteVolume = false;
  return this;
}

// UWN_VolumeComponent @ 14948f220

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UWN_VolumeComponent * __thiscall
UWN_VolumeComponent::UWN_VolumeComponent(UWN_VolumeComponent *this,FObjectInitializer *param_1)

{
  longlong lVar1;
  void *pvVar2;
  ulonglong uVar3;
  undefined8 local_res8;
  
  UPrimitiveComponent::UPrimitiveComponent((UPrimitiveComponent *)this,param_1);
  this->bIsShapeEditable = true;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->bOverrideNeedRendering = false;
  this->bDisplayShadedVolume = false;
  this->bShowDebugShape = true;
  this->bValid = true;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->bIgnoreDepth = false;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  local_res8 = 0;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  (this->VolumeExtent).field0_0x0._s_0.X = 100.0;
  (this->VolumeExtent).field0_0x0._s_0.Y = 100.0;
  (this->VolumeExtent).field0_0x0._s_0.Z = 100.0;
  this->Radius = 100.0;
  (this->CommonSubsystem).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->CommonSubsystem).WeakPtr,(FObjectPtr)&local_res8);
  pvVar2 = ThreadLocalStoragePointer;
  uVar3 = (ulonglong)_tls_index;
  *(undefined8 *)&this->OnEnter = 0;
  *(undefined8 *)&(this->OnEnter).field_0x8 = 0;
  *(undefined8 *)&(this->OnEnter).field_0x10 = 0;
  *(undefined8 *)&this->OnLeave = 0;
  *(undefined8 *)&(this->OnLeave).field_0x8 = 0;
  *(undefined8 *)&(this->OnLeave).field_0x10 = 0;
  *(undefined8 *)&(this->OverlapVolumeComps).Elements = 0;
  *(undefined8 *)&(this->OverlapVolumeComps).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->OverlapVolumeComps).Elements.field_0x20 = 0;
  this->IndexInSubsystem = -1;
  *(undefined4 *)&(this->OverlapVolumeComps).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->OverlapVolumeComps).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->OverlapVolumeComps).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->OverlapVolumeComps).Elements.field_0x30 = 0xffffffff;
  (this->OverlapVolumeComps).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->OverlapVolumeComps).HashSize = 0;
  (this->WireComponent).field0_0x0.DebugPtr = (UWN_VolumeWireComponent *)0x0;
  (this->FaceComponent).field0_0x0.DebugPtr = (UWN_VolumeFaceComponent *)0x0;
  (this->WireMaterial).field0_0x0.DebugPtr = (UMaterial *)0x0;
  (this->FaceMaterial).field0_0x0.DebugPtr = (UMaterial *)0x0;
  (this->FaceMaterialNoDepthTest).field0_0x0.DebugPtr = (UMaterial *)0x0;
  *(undefined8 *)&this->ObserverInfo = 0;
  *(undefined8 *)&(this->ObserverInfo).field_0x8 = 0;
  *(undefined8 *)&(this->ObserverInfo).field_0x20 = 0;
  this->bCanOverlapVolume = true;
  this->bIsVolumeOverlap = false;
  *(undefined4 *)&(this->ObserverInfo).field_0x28 = 0;
  *(undefined4 *)&(this->ObserverInfo).field_0x2c = 0x80;
  *(undefined4 *)&(this->ObserverInfo).field_0x34 = 0;
  *(undefined4 *)&(this->ObserverInfo).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ObserverInfo).field_0x40 = 0;
  *(undefined4 *)&(this->ObserverInfo).field_0x48 = 0;
  lVar1 = *(longlong *)((longlong)pvVar2 + uVar3 * 8);
  this->bUseInfiniteVolume = true;
  this->bIsInfiniteVolume = false;
  if (*(int *)(lVar1 + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ConstructorHelpers::FObjectFinder<UMaterial>::FObjectFinder<UMaterial>
                (&FaceMaterialRef,
                 L"/Game/EngineOverrides/Materials/GeomMaterialOverride_TwoSided.GeomMaterialOverride_TwoSided"
                 ,0);
      atexit(`UWN_VolumeComponent::UWN_VolumeComponent'::__l2::
             _dynamic_atexit_destructor_for__FaceMaterialRef__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (FaceMaterialRef.Object.field0_0x0 == (UMaterial *)0x0) {
    if (1 < (byte)Common._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&Common);
    }
  }
  else {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)FaceMaterialRef.Object.field0_0x0);
    }
    (this->FaceMaterial).field0_0x0.ObjectPtr.field0_0x0 =
         (FObjectPtr_u_0)FaceMaterialRef.Object.field0_0x0;
  }
  if (*(int *)(lVar1 + 0x9d4c) < ::_TSS1) {
    _Init_thread_header(&::_TSS1);
    if (::_TSS1 == -1) {
      ConstructorHelpers::FObjectFinder<UMaterial>::FObjectFinder<UMaterial>
                (&FaceMaterialNoDepthTestRef,
                 L"/Game/EngineOverrides/Materials/GeomMaterialOverride_DisableDepthTest.GeomMaterialOverride_DisableDepthTest"
                 ,0);
      atexit(`UWN_VolumeComponent::UWN_VolumeComponent'::__l2::
             _dynamic_atexit_destructor_for__FaceMaterialNoDepthTestRef__);
      _Init_thread_footer(&::_TSS1);
    }
  }
  if (FaceMaterialNoDepthTestRef.Object.field0_0x0 == (UMaterial *)0x0) {
    if (1 < (byte)Common._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&Common);
    }
  }
  else {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)FaceMaterialNoDepthTestRef.Object.field0_0x0);
    }
    (this->FaceMaterialNoDepthTest).field0_0x0.ObjectPtr.field0_0x0 =
         (FObjectPtr_u_0)FaceMaterialNoDepthTestRef.Object.field0_0x0;
  }
  if (*(int *)(lVar1 + 0x9d4c) < ::_TSS2) {
    _Init_thread_header(&::_TSS2);
    if (::_TSS2 == -1) {
      ConstructorHelpers::FObjectFinder<UMaterial>::FObjectFinder<UMaterial>
                (&WireMaterialRef,
                 L"/Engine/EngineDebugMaterials/LevelColorationUnlitMaterial.LevelColorationUnlitMaterial"
                 ,0);
      atexit(`UWN_VolumeComponent::UWN_VolumeComponent'::__l2::
             _dynamic_atexit_destructor_for__WireMaterialRef__);
      _Init_thread_footer(&::_TSS2);
    }
  }
  if (WireMaterialRef.Object.field0_0x0 == (UMaterial *)0x0) {
    if (1 < (byte)Common._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&Common);
    }
  }
  else {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)WireMaterialRef.Object.field0_0x0);
    }
    (this->WireMaterial).field0_0x0.ObjectPtr.field0_0x0 =
         (FObjectPtr_u_0)WireMaterialRef.Object.field0_0x0;
  }
  (this->VolumeColor).field0_0x0._s_0.R = 0.1;
  (this->VolumeColor).field0_0x0._s_0.G = 1.0;
  (this->VolumeColor).field0_0x0._s_0.B = 0.5;
  (this->VolumeColor).field0_0x0._s_0.A = 0.1;
  this->ShapeType = Box;
  return this;
}

// ~UWN_VolumeComponent @ 149490c70

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UWN_VolumeComponent::~UWN_VolumeComponent(UWN_VolumeComponent *this)

{
  void *pvVar1;
  ForElementType<FSetElementId> FVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  *(undefined4 *)&(this->ObserverInfo).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ObserverInfo).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EWN_VolumeObserverMode,FWN_VolumeObserverInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EWN_VolumeObserverMode,FWN_VolumeObserverInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->ObserverInfo);
  (this->OverlapVolumeComps).HashSize = 0;
  FVar2 = (this->OverlapVolumeComps).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->OverlapVolumeComps).Elements);
  pvVar1 = *(void **)&(this->OnLeave).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnLeave);
  pvVar1 = *(void **)&(this->OnEnter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnEnter);
  UPrimitiveComponent::~UPrimitiveComponent((UPrimitiveComponent *)this);
  return;
}

// operator() @ 149491f70

bool __thiscall
`UWN_VolumeComponent::CheckOverlapVolume'::__l38::<lambda_1>::operator()
          (void *this,TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  dVar5 = *(double *)((longlong)this + 0xa8);
  dVar6 = *(double *)((longlong)this + 0xc0);
  dVar7 = *(double *)((longlong)this + 0xb0);
  dVar8 = *(double *)((longlong)this + 200);
  dVar9 = *(double *)((longlong)this + 0xb8);
  dVar1 = *(double *)((longlong)this + 0xd0);
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  dVar3 = (param_1->field0_0x0)._s_0.X;
  dVar4 = (param_1->field0_0x0)._s_0.Z;
  dVar10 = dVar2 * *(double *)((longlong)this + 8) + dVar3 * *(double *)this +
           dVar4 * *(double *)((longlong)this + 0x10);
  dVar5 = dVar5 * *(double *)((longlong)this + 0x20) * dVar2 +
          dVar5 * *(double *)((longlong)this + 0x18) * dVar3 +
          dVar5 * *(double *)((longlong)this + 0x28) * dVar4;
  dVar11 = dVar6 * *(double *)((longlong)this + 0x68) * dVar2 +
           dVar6 * *(double *)((longlong)this + 0x60) * dVar3 +
           dVar6 * *(double *)((longlong)this + 0x70) * dVar4;
  dVar6 = dVar7 * *(double *)((longlong)this + 0x38) * dVar2 +
          dVar7 * *(double *)((longlong)this + 0x30) * dVar3 +
          dVar7 * *(double *)((longlong)this + 0x40) * dVar4;
  dVar7 = dVar8 * *(double *)((longlong)this + 0x80) * dVar2 +
          dVar8 * *(double *)((longlong)this + 0x78) * dVar3 +
          dVar8 * *(double *)((longlong)this + 0x88) * dVar4;
  dVar8 = dVar9 * *(double *)((longlong)this + 0x50) * dVar2 +
          dVar9 * *(double *)((longlong)this + 0x48) * dVar3 +
          dVar9 * *(double *)((longlong)this + 0x58) * dVar4;
  dVar9 = dVar1 * *(double *)((longlong)this + 0x98) * dVar2 +
          dVar1 * *(double *)((longlong)this + 0x90) * dVar3 +
          dVar1 * *(double *)((longlong)this + 0xa0) * dVar4;
  return (float)((double)(float)((double)(float)((double)(float)((double)(float)((double)(float)(
                                                  double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) &
                                                                                                                                    
                                                  __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                                  SUB84(dVar5,0) &
                                                  (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
                                                  (double)CONCAT44((uint)((ulonglong)dVar11 >> 0x20)
                                                                   & 
                                                  __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                                  SUB84(dVar11,0) &
                                                  (uint)__xmm_7fffffffffffffff7fffffffffffffff)) +
                                                  (double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20)
                                                                   & 
                                                  __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                                  SUB84(dVar6,0) &
                                                  (uint)__xmm_7fffffffffffffff7fffffffffffffff)) +
                                                (double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) &
                                                                                                                                  
                                                  __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                                  SUB84(dVar7,0) &
                                                  (uint)__xmm_7fffffffffffffff7fffffffffffffff)) +
                                (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) &
                                                 __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                                 SUB84(dVar8,0) &
                                                 (uint)__xmm_7fffffffffffffff7fffffffffffffff)) +
                (double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) &
                                 __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                 SUB84(dVar9,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) <
         (float)(double)CONCAT44((uint)((ulonglong)dVar10 >> 0x20) &
                                 __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                 SUB84(dVar10,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
}

// AddOverlapVolume @ 149494d40

void __thiscall
UWN_VolumeComponent::AddOverlapVolume
          (UWN_VolumeComponent *this,TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr> param_1)

{
  FWeakObjectPtr local_res10 [3];
  
  local_res10[0] = param_1.WeakPtr;
  TSet<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  ::FindOrAddByHash<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>_const_&>
            (&this->OverlapVolumeComps,
             param_1.WeakPtr.ObjectIndex ^ param_1.WeakPtr.ObjectSerialNumber,
             (TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr> *)local_res10,(bool *)0x0);
  if ((this->bIsVolumeOverlap == false) &&
     (0 < *(int *)&(this->OverlapVolumeComps).Elements.field_0x8 -
          *(int *)&(this->OverlapVolumeComps).Elements.field_0x34)) {
    this->bIsVolumeOverlap = true;
  }
  return;
}

// BeginPlay @ 149496470

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UWN_VolumeComponent::BeginPlay(UWN_VolumeComponent *this)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  
  UActorComponent::BeginPlay((UActorComponent *)this);
  lVar3 = (**(code **)(this->_padding_ + 0x818))(this,0,0,0xffffffff);
  if (((lVar3 != 0) && ((*(byte *)(lVar3 + 8) & 1) != 0)) && (*(longlong *)(lVar3 + 0x108) == 0)) {
    bVar1 = *(byte *)((longlong)&this->_padding_ + 2);
    *(byte *)((longlong)&this->_padding_ + 2) = bVar1 | 4;
    (**(code **)(this->_padding_ + 0x518))(this,&FDetachmentTransformRules::KeepWorldTransform);
    bVar2 = *(byte *)((longlong)&this->_padding_ + 2);
    *(byte *)((longlong)&this->_padding_ + 2) = (bVar2 ^ bVar1) & 4 ^ bVar2;
  }
  return;
}

// CalcBounds @ 149496630

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TBoxSphereBounds<double,double> * __thiscall
UWN_VolumeComponent::CalcBounds
          (UWN_VolumeComponent *this,TBoxSphereBounds<double,double> *__return_storage_ptr__,
          TTransform<double> *param_1)

{
  double dVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  double dVar12;
  uint uVar13;
  uint uVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  uint uVar18;
  uint uVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  TMatrix<double> local_128 [2];
  
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  if (this->ShapeType == Box) {
    uVar13 = (uint)__xmm_80000000000000008000000000000000;
    uVar14 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    uVar2 = *(undefined8 *)&(this->VolumeExtent).field0_0x0;
    uVar3 = *(undefined8 *)((longlong)&(this->VolumeExtent).field0_0x0 + 8);
    uVar4 = *(undefined8 *)((longlong)&(this->VolumeExtent).field0_0x0 + 0x10);
    uVar18 = (uint)uVar2 ^ uVar13;
    uVar19 = (uint)((ulonglong)uVar2 >> 0x20) ^ uVar14;
    dVar1 = (this->VolumeExtent).field0_0x0._s_0.X - (double)CONCAT44(uVar19,uVar18);
    dVar16 = (double)CONCAT44((uint)((ulonglong)uVar3 >> 0x20) ^ uVar14,(uint)uVar3 ^ uVar13);
    dVar11 = (this->VolumeExtent).field0_0x0._s_0.Y - dVar16;
    dVar17 = (double)CONCAT44((uint)((ulonglong)uVar4 >> 0x20) ^ uVar14,(uint)uVar4 ^ uVar13);
    dVar20 = (this->VolumeExtent).field0_0x0._s_0.Z - dVar17;
    dVar15 = dVar1 * __real_3fe0000000000000;
    dVar21 = dVar11 * __real_3fe0000000000000;
    dVar22 = dVar20 * __real_3fe0000000000000;
    dVar10 = dVar15 + (double)CONCAT44(uVar19,uVar18);
    dVar16 = dVar21 + dVar16;
    dVar17 = dVar22 + dVar17;
    dVar11 = (dVar11 * dVar11 + dVar1 * dVar1 + dVar20 * dVar20) * __real_3fd0000000000000;
    UE::Math::TTransform<double>::ToMatrixWithScale(param_1,local_128);
    dVar20 = (double)CONCAT44((uint)((ulonglong)(local_128[0].M[1][0] * dVar21) >> 0x20) &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              SUB84(local_128[0].M[1][0] * dVar21,0) &
                              (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
             (double)CONCAT44((uint)((ulonglong)(local_128[0].M[0][0] * dVar15) >> 0x20) &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              SUB84(local_128[0].M[0][0] * dVar15,0) &
                              (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
             (double)CONCAT44((uint)((ulonglong)(local_128[0].M[2][0] * dVar22) >> 0x20) &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              SUB84(local_128[0].M[2][0] * dVar22,0) &
                              (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    dVar12 = (double)CONCAT44((uint)((ulonglong)(local_128[0].M[1][1] * dVar21) >> 0x20) &
                              _UNK_15061cc8c,SUB84(local_128[0].M[1][1] * dVar21,0) & _UNK_15061cc88
                             ) +
             (double)CONCAT44((uint)((ulonglong)(local_128[0].M[0][1] * dVar15) >> 0x20) &
                              _UNK_15061cc8c,SUB84(local_128[0].M[0][1] * dVar15,0) & _UNK_15061cc88
                             ) +
             (double)CONCAT44((uint)((ulonglong)(local_128[0].M[2][1] * dVar22) >> 0x20) &
                              _UNK_15061cc8c,SUB84(local_128[0].M[2][1] * dVar22,0) & _UNK_15061cc88
                             );
    dVar22 = (double)CONCAT44((uint)((ulonglong)(local_128[0].M[1][2] * dVar21) >> 0x20) &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              SUB84(local_128[0].M[1][2] * dVar21,0) &
                              (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
             (double)CONCAT44((uint)((ulonglong)(local_128[0].M[0][2] * dVar15) >> 0x20) &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              SUB84(local_128[0].M[0][2] * dVar15,0) &
                              (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
             (double)CONCAT44((uint)((ulonglong)(local_128[0].M[2][2] * dVar22) >> 0x20) &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              SUB84(local_128[0].M[2][2] * dVar22,0) &
                              (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    local_128[0].M[3][0] =
         local_128[0].M[1][0] * dVar16 + local_128[0].M[0][0] * dVar10 +
         local_128[0].M[2][0] * dVar17 + local_128[0].M[3][0];
    local_128[0].M[3][1] =
         local_128[0].M[1][1] * dVar16 + local_128[0].M[0][1] * dVar10 +
         local_128[0].M[2][1] * dVar17 + local_128[0].M[3][1];
    auVar25._0_8_ =
         local_128[0].M[1][0] * local_128[0].M[1][0] + local_128[0].M[0][0] * local_128[0].M[0][0] +
         local_128[0].M[2][0] * local_128[0].M[2][0];
    auVar25._8_8_ =
         local_128[0].M[1][1] * local_128[0].M[1][1] + local_128[0].M[0][1] * local_128[0].M[0][1] +
         local_128[0].M[2][1] * local_128[0].M[2][1];
    auVar24._8_4_ = SUB84(auVar25._8_8_,0);
    auVar24._0_8_ = auVar25._8_8_;
    auVar24._12_4_ = (int)((ulonglong)auVar25._8_8_ >> 0x20);
    auVar24 = maxpd(auVar25,auVar24);
    dVar1 = local_128[0].M[1][2] * local_128[0].M[1][2] +
            local_128[0].M[0][2] * local_128[0].M[0][2] +
            local_128[0].M[2][2] * local_128[0].M[2][2];
    dVar15 = SQRT(dVar22 * dVar22 + dVar20 * dVar20 + dVar12 * dVar12);
    auVar9._8_4_ = SUB84(dVar1,0);
    auVar9._0_8_ = dVar1;
    auVar9._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
    auVar24 = maxpd(auVar24,auVar9);
    local_128[0].M[3][2] =
         local_128[0].M[1][2] * dVar16 + local_128[0].M[0][2] * dVar10 +
         local_128[0].M[2][2] * dVar17 + local_128[0].M[3][2];
    dVar1 = SQRT(auVar24._0_8_) * SQRT(dVar11);
    if (dVar1 <= dVar15) {
      dVar15 = dVar1;
    }
  }
  else {
    if (this->ShapeType != Sphere) {
      dVar17 = (param_1->Translation).XY.m128d_f64[1];
      dVar1 = (param_1->Translation).ZW.m128d_f64[0];
      (__return_storage_ptr__->Origin).field0_0x0._s_0.X = (param_1->Translation).XY.m128d_f64[0];
      (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = dVar17;
      (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = dVar1;
      uVar2 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
      (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X =
           UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
      (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y = (double)uVar2;
      (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z =
           UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
      __return_storage_ptr__->SphereRadius = 1.0;
      return __return_storage_ptr__;
    }
    dVar1 = this->Radius;
    UE::Math::TTransform<double>::ToMatrixWithScale(param_1,local_128);
    dVar20 = (double)CONCAT44((uint)((ulonglong)(dVar1 * local_128[0].M[0][0]) >> 0x20) &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              SUB84(dVar1 * local_128[0].M[0][0],0) &
                              (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
             (double)CONCAT44((uint)((ulonglong)(local_128[0].M[1][0] * dVar1) >> 0x20) &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              SUB84(local_128[0].M[1][0] * dVar1,0) &
                              (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
             (double)CONCAT44((uint)((ulonglong)(local_128[0].M[2][0] * dVar1) >> 0x20) &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              SUB84(local_128[0].M[2][0] * dVar1,0) &
                              (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    dVar12 = (double)CONCAT44((uint)((ulonglong)(dVar1 * local_128[0].M[0][1]) >> 0x20) &
                              _UNK_15061cc8c,SUB84(dVar1 * local_128[0].M[0][1],0) & _UNK_15061cc88)
             + (double)CONCAT44((uint)((ulonglong)(local_128[0].M[1][1] * dVar1) >> 0x20) &
                                _UNK_15061cc8c,
                                SUB84(local_128[0].M[1][1] * dVar1,0) & _UNK_15061cc88) +
             (double)CONCAT44((uint)((ulonglong)(local_128[0].M[2][1] * dVar1) >> 0x20) &
                              _UNK_15061cc8c,SUB84(local_128[0].M[2][1] * dVar1,0) & _UNK_15061cc88)
    ;
    dVar22 = (double)CONCAT44((uint)((ulonglong)(dVar1 * local_128[0].M[0][2]) >> 0x20) &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              SUB84(dVar1 * local_128[0].M[0][2],0) &
                              (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
             (double)CONCAT44((uint)((ulonglong)(local_128[0].M[1][2] * dVar1) >> 0x20) &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              SUB84(local_128[0].M[1][2] * dVar1,0) &
                              (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
             (double)CONCAT44((uint)((ulonglong)(local_128[0].M[2][2] * dVar1) >> 0x20) &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              SUB84(local_128[0].M[2][2] * dVar1,0) &
                              (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    auVar23._0_8_ =
         local_128[0].M[1][0] * local_128[0].M[1][0] + local_128[0].M[0][0] * local_128[0].M[0][0] +
         local_128[0].M[2][0] * local_128[0].M[2][0];
    auVar23._8_8_ =
         local_128[0].M[1][1] * local_128[0].M[1][1] + local_128[0].M[0][1] * local_128[0].M[0][1] +
         local_128[0].M[2][1] * local_128[0].M[2][1];
    auVar5._8_4_ = SUB84(auVar23._8_8_,0);
    auVar5._0_8_ = auVar23._8_8_;
    auVar5._12_4_ = (int)((ulonglong)auVar23._8_8_ >> 0x20);
    auVar24 = maxpd(auVar23,auVar5);
    dVar17 = local_128[0].M[1][2] * local_128[0].M[1][2] +
             local_128[0].M[0][2] * local_128[0].M[0][2] +
             local_128[0].M[2][2] * local_128[0].M[2][2];
    local_128[0].M[3][0] =
         (double)uVar3 * local_128[0].M[1][0] + (double)uVar2 * local_128[0].M[0][0] +
         (double)uVar4 * local_128[0].M[2][0] + local_128[0].M[3][0];
    local_128[0].M[3][1] =
         (double)uVar3 * local_128[0].M[1][1] + (double)uVar2 * local_128[0].M[0][1] +
         (double)uVar4 * local_128[0].M[2][1] + local_128[0].M[3][1];
    local_128[0].M[3][2] =
         (double)uVar3 * local_128[0].M[1][2] + (double)uVar2 * local_128[0].M[0][2] +
         (double)uVar4 * local_128[0].M[2][2] + local_128[0].M[3][2];
    auVar8._8_4_ = SUB84(dVar17,0);
    auVar8._0_8_ = dVar17;
    auVar8._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
    auVar24 = maxpd(auVar24,auVar8);
    dVar15 = SQRT(dVar22 * dVar22 + dVar20 * dVar20 + dVar12 * dVar12);
    dVar1 = SQRT(auVar24._0_8_) * dVar1;
    if (dVar1 <= dVar15) {
      dVar15 = dVar1;
    }
  }
  auVar7._8_4_ = SUB84(local_128[0].M[3][1],0);
  auVar7._0_8_ = local_128[0].M[3][0];
  auVar7._12_4_ = (int)((ulonglong)local_128[0].M[3][1] >> 0x20);
  *(undefined1 (*) [16])&(__return_storage_ptr__->Origin).field0_0x0 = auVar7;
  auVar6._8_4_ = SUB84(dVar20,0);
  auVar6._0_8_ = local_128[0].M[3][2];
  auVar6._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
  *(undefined1 (*) [16])((longlong)&(__return_storage_ptr__->Origin).field0_0x0 + 0x10) = auVar6;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y = dVar12;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z = dVar22;
  __return_storage_ptr__->SphereRadius = dVar15;
  return __return_storage_ptr__;
}

// CalculateDistanceToNearPlane @ 149496cd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __thiscall
UWN_VolumeComponent::CalculateDistanceToNearPlane
          (UWN_VolumeComponent *this,TVector<double> *param_1)

{
  undefined8 uVar1;
  undefined8 uVar4;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [12];
  undefined1 auVar9 [12];
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  float fVar14;
  double dVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar27;
  double dVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  double dVar38;
  double dVar39;
  uint uVar46;
  undefined1 auVar40 [16];
  double dVar47;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  double dVar48;
  uint uVar49;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  uint uVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  uint uVar53;
  double dVar54;
  double dVar57;
  undefined4 uVar58;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined4 uVar59;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  uint uVar65;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  double dVar66;
  double dVar70;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  uint uVar71;
  uint uVar72;
  uint uVar76;
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  uint uVar77;
  uint uVar78;
  double local_118;
  double dStack_110;
  
  dVar54 = (double)this->_padding_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar57 = (double)this->_padding_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  dVar28 = (double)this->_padding_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar39 = (double)this->_padding_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  auVar40._8_4_ = SUB84(dVar57,0);
  auVar40._0_8_ = dVar54;
  uVar58 = (undefined4)((ulonglong)dVar57 >> 0x20);
  auVar40._12_4_ = uVar58;
  dVar15 = (param_1->field0_0x0)._s_0.Z - (double)this->_padding_;
  auVar51._8_4_ = SUB84(dVar57,0);
  auVar51._0_8_ = dVar54;
  auVar51._12_4_ = uVar58;
  dVar47 = auVar40._8_8_;
  dVar66 = (param_1->field0_0x0)._s_0.X - (double)this->_padding_;
  dVar70 = (param_1->field0_0x0)._s_0.Y - (double)this->_padding_;
  auVar73._8_4_ = SUB84(dVar70,0);
  auVar73._0_8_ = dVar66;
  uVar58 = (undefined4)((ulonglong)dVar70 >> 0x20);
  auVar73._12_4_ = uVar58;
  auVar33._0_8_ = this->_padding_;
  auVar33._8_8_ = this->_padding_;
  uVar78 = (uint)((ulonglong)auVar33._0_8_ >> 0x20);
  uVar5 = (uint)auVar33._8_8_;
  uVar6 = (uint)((ulonglong)auVar33._8_8_ >> 0x20);
  auVar16._8_4_ = SUB84(dVar28,0);
  auVar16._0_8_ = dVar47;
  auVar16._12_4_ = (int)((ulonglong)dVar28 >> 0x20);
  uVar1 = this->_padding_;
  uVar4 = this->_padding_;
  uVar50 = (uint)((ulonglong)uVar1 >> 0x20);
  auVar29._8_4_ = SUB84(dVar70,0);
  auVar29._0_8_ = dVar66;
  auVar29._12_4_ = uVar58;
  auVar30._8_4_ = SUB84(dVar39,0);
  auVar30._0_8_ = dVar28;
  auVar30._12_4_ = (int)((ulonglong)dVar39 >> 0x20);
  auVar52 = blendpd(auVar51,auVar30,2);
  auVar7._8_8_ = 0;
  auVar7._0_8_ = dVar15;
  auVar30 = blendpd(auVar29,auVar7,2);
  auVar74._0_8_ = auVar73._8_8_ * dVar54 - dVar47 * dVar66;
  auVar74._8_8_ = dVar15 * dVar57 - auVar16._8_8_ * dVar70;
  auVar31._0_8_ = auVar30._0_8_ * dVar28 - auVar52._0_8_ * dVar15;
  auVar31._8_8_ = auVar30._8_8_ * dVar39 - auVar52._8_8_ * 0.0;
  dVar38 = auVar74._8_8_ + auVar74._8_8_;
  dVar48 = auVar31._0_8_ + auVar31._0_8_;
  uVar58 = SUB84(dVar48,0);
  uVar59 = (undefined4)((ulonglong)dVar48 >> 0x20);
  auVar30 = blendpd(auVar74,auVar31,2);
  auVar62._8_4_ = uVar58;
  auVar62._0_8_ = dVar38;
  auVar62._12_4_ = uVar59;
  auVar17._8_4_ = uVar58;
  auVar17._0_8_ = dVar38;
  auVar17._12_4_ = uVar59;
  auVar60._8_4_ = uVar58;
  auVar60._0_8_ = dVar38;
  auVar60._12_4_ = uVar59;
  auVar75._0_8_ = auVar30._0_8_ + auVar30._0_8_;
  auVar75._8_8_ = auVar30._8_8_ + auVar30._8_8_;
  auVar30 = blendpd(auVar60,auVar75,2);
  auVar63._0_8_ = auVar62._8_8_ * dVar54 - dVar38 * dVar47;
  auVar63._8_8_ = auVar75._0_8_ * dVar57 - auVar17._8_8_ * dVar28;
  auVar18._8_4_ = SUB84(auVar75._8_8_,0);
  auVar18._0_8_ = auVar75._0_8_;
  auVar18._12_4_ = (int)((ulonglong)auVar75._8_8_ >> 0x20);
  auVar61._0_8_ = auVar30._0_8_ * dVar28 - auVar75._0_8_ * auVar52._0_8_;
  auVar61._8_8_ = auVar30._8_8_ * dVar39 - auVar18._8_8_ * auVar52._8_8_;
  auVar55._0_8_ =
       (double)CONCAT44(uVar50 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  auVar55._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_ & _UNK_15061cc88;
  auVar55._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_ & _UNK_15061cc8c;
  lVar10 = -(ulonglong)(auVar55._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
  lVar12 = -(ulonglong)(auVar55._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[3]);
  auVar30 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar33);
  auVar41._0_8_ =
       (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & uVar78,
                        (uint)__xmm_7fffffffffffffff7fffffffffffffff & (uint)auVar33._0_8_);
  auVar41._8_4_ = _UNK_15061cc88 & uVar5;
  auVar41._12_4_ = _UNK_15061cc8c & uVar6;
  lVar11 = -(ulonglong)(auVar41._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
  lVar13 = -(ulonglong)(auVar41._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
  auVar19._8_4_ = SUB84(auVar63._8_8_,0);
  auVar19._0_8_ = auVar63._0_8_;
  auVar19._12_4_ = (int)((ulonglong)auVar63._8_8_ >> 0x20);
  auVar42._0_8_ =
       (double)CONCAT44(~(uint)((ulonglong)lVar11 >> 0x20) & auVar30._4_4_,
                        ~(uint)lVar11 & auVar30._0_4_);
  auVar42._8_4_ = ~(uint)lVar13 & auVar30._8_4_;
  auVar42._12_4_ = ~(uint)((ulonglong)lVar13 >> 0x20) & auVar30._12_4_;
  dVar38 = auVar42._0_8_ * (dVar38 * dVar39 + dVar66 + auVar19._8_8_);
  dVar48 = auVar42._8_8_ * (dVar48 * dVar39 + dVar70 + auVar61._0_8_);
  auVar52._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
  auVar52._0_8_ = uVar1;
  auVar52._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
  auVar30 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar52);
  auVar56._0_4_ = ~(uint)lVar10 & auVar30._0_4_;
  auVar56._4_4_ = ~(uint)((ulonglong)lVar10 >> 0x20) & auVar30._4_4_;
  auVar56._8_4_ = ~(uint)lVar12 & auVar30._8_4_;
  auVar56._12_4_ = ~(uint)((ulonglong)lVar12 >> 0x20) & auVar30._12_4_;
  auVar30 = blendpd(auVar63,auVar61,2);
  dVar28 = SUB168(ZEXT816(0) | auVar56,0) * (auVar75._0_8_ * dVar39 + dVar15 + auVar30._0_8_);
  uVar77 = (uint)((ulonglong)dVar38 >> 0x20);
  uVar46 = SUB84(dVar48,0);
  uVar49 = (uint)((ulonglong)dVar48 >> 0x20);
  if (this->ShapeType == Box) {
    uVar71 = (uint)__xmm_80000000000000008000000000000000;
    uVar72 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    local_118 = (this->VolumeExtent).field0_0x0._s_0.X;
    dStack_110 = (this->VolumeExtent).field0_0x0._s_0.Y;
    dVar39 = (this->VolumeExtent).field0_0x0._s_0.Z;
    dVar47 = (double)CONCAT44((uint)((ulonglong)local_118 >> 0x20) ^ uVar72,
                              SUB84(local_118,0) ^ uVar71);
    uVar50 = SUB84(dStack_110,0);
    uVar76 = (uint)((ulonglong)dStack_110 >> 0x20);
    dVar54 = (double)CONCAT44(uVar76 ^ uVar72,uVar50 ^ uVar71);
    uVar53 = SUB84(dVar39,0);
    uVar65 = (uint)((ulonglong)dVar39 >> 0x20);
    dVar15 = (double)CONCAT44(uVar65 ^ uVar72,uVar53 ^ uVar71);
    auVar20._0_8_ =
         (double)CONCAT44(uVar49 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          uVar46 & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    auVar20._8_4_ = uVar46 & _UNK_15061cc88;
    auVar20._12_4_ = uVar49 & _UNK_15061cc8c;
    if (((((dVar38 <= dVar47) || ((this->VolumeExtent).field0_0x0._s_0.X <= dVar38)) ||
         (dVar48 <= dVar54)) ||
        (((this->VolumeExtent).field0_0x0._s_0.Y <= dVar48 || (dVar28 <= dVar15)))) ||
       ((this->VolumeExtent).field0_0x0._s_0.Z <= dVar28)) {
      if ((dVar38 <= local_118) && (local_118 = dVar38, dVar38 < dVar47)) {
        local_118 = dVar47;
      }
      if ((dVar48 <= dStack_110) &&
         (dStack_110 = dVar48, dVar48 < (double)CONCAT44(uVar76 ^ uVar72,uVar50 ^ uVar71))) {
        dStack_110 = dVar54;
      }
      if ((dVar28 <= dVar39) &&
         (dVar39 = dVar28, dVar28 < (double)CONCAT44(uVar65 ^ uVar72,uVar53 ^ uVar71))) {
        dVar39 = dVar15;
      }
      auVar2._0_8_ = this->_padding_;
      auVar2._8_8_ = this->_padding_;
      auVar3._0_8_ = this->_padding_;
      auVar3._8_8_ = this->_padding_;
      auVar64._0_8_ = dVar39 * (double)uVar1;
      auVar64._8_8_ = (double)uVar4 * 0.0;
      local_118 = local_118 * (double)auVar33._0_8_;
      dStack_110 = dStack_110 * (double)auVar33._8_8_;
      uVar58 = (undefined4)((ulonglong)dStack_110 >> 0x20);
      auVar67._8_4_ = SUB84(dStack_110,0);
      auVar67._0_8_ = local_118;
      auVar67._12_4_ = uVar58;
      auVar22._8_4_ = (int)auVar2._0_8_;
      auVar22._0_8_ = auVar3._8_8_;
      auVar22._12_4_ = (int)((ulonglong)auVar2._0_8_ >> 0x20);
      auVar30 = blendpd(auVar3,auVar2,2);
      auVar68._0_8_ = auVar67._8_8_ * (double)auVar3._0_8_ - (double)auVar3._8_8_ * local_118;
      auVar68._8_8_ = auVar64._0_8_ * (double)auVar3._8_8_ - auVar22._8_8_ * dStack_110;
      auVar32._8_4_ = SUB84(dStack_110,0);
      auVar32._0_8_ = local_118;
      auVar32._12_4_ = uVar58;
      auVar33 = blendpd(auVar32,auVar64,2);
      auVar34._0_8_ = auVar33._0_8_ * (double)auVar2._0_8_ - auVar30._0_8_ * auVar64._0_8_;
      auVar34._8_8_ = auVar33._8_8_ * (double)auVar2._8_8_ - auVar30._8_8_ * auVar64._8_8_;
      auVar33 = blendpd(auVar68,auVar34,2);
      dVar28 = auVar68._8_8_ + auVar68._8_8_;
      dVar39 = auVar34._0_8_ + auVar34._0_8_;
      uVar58 = SUB84(dVar39,0);
      uVar59 = (undefined4)((ulonglong)dVar39 >> 0x20);
      auVar69._0_8_ = auVar33._0_8_ + auVar33._0_8_;
      auVar69._8_8_ = auVar33._8_8_ + auVar33._8_8_;
      auVar43._8_4_ = uVar58;
      auVar43._0_8_ = dVar28;
      auVar43._12_4_ = uVar59;
      auVar23._8_4_ = uVar58;
      auVar23._0_8_ = dVar28;
      auVar23._12_4_ = uVar59;
      auVar35._8_4_ = uVar58;
      auVar35._0_8_ = dVar28;
      auVar35._12_4_ = uVar59;
      auVar33 = blendpd(auVar35,auVar69,2);
      auVar44._0_8_ = auVar43._8_8_ * (double)auVar3._0_8_ - dVar28 * (double)auVar3._8_8_;
      auVar44._8_8_ = auVar69._0_8_ * (double)auVar3._8_8_ - auVar23._8_8_ * (double)auVar2._0_8_;
      auVar24._8_4_ = SUB84(auVar69._8_8_,0);
      auVar24._0_8_ = auVar69._0_8_;
      auVar24._12_4_ = (int)((ulonglong)auVar69._8_8_ >> 0x20);
      auVar36._0_8_ = auVar33._0_8_ * (double)auVar2._0_8_ - auVar69._0_8_ * auVar30._0_8_;
      auVar36._8_8_ = auVar33._8_8_ * (double)auVar2._8_8_ - auVar24._8_8_ * auVar30._8_8_;
      auVar25._8_4_ = SUB84(auVar44._8_8_,0);
      auVar25._0_8_ = auVar44._0_8_;
      auVar25._12_4_ = (int)((ulonglong)auVar44._8_8_ >> 0x20);
      auVar33 = blendpd(auVar44,auVar36,2);
      dVar38 = (param_1->field0_0x0)._s_0.X -
               (dVar28 * (double)auVar2._8_8_ + local_118 + auVar25._8_8_ + (double)this->_padding_)
      ;
      dVar39 = (param_1->field0_0x0)._s_0.Y -
               (dVar39 * (double)auVar2._8_8_ + dStack_110 + auVar36._0_8_ + (double)this->_padding_
               );
      dVar28 = (param_1->field0_0x0)._s_0.Z -
               (auVar69._0_8_ * (double)auVar2._8_8_ + auVar64._0_8_ + auVar33._0_8_ +
               (double)this->_padding_);
      auVar26._0_8_ = dVar28 * dVar28;
      auVar26._8_8_ = 0;
      auVar45._0_8_ = dVar39 * dVar39 + dVar38 * dVar38 + auVar26._0_8_;
      auVar45._8_8_ = 0;
      auVar33 = sqrtpd(auVar26,auVar45);
      fVar14 = (float)auVar33._0_8_;
    }
    else {
      auVar8._4_8_ = auVar20._8_8_;
      auVar8._0_4_ = uVar78;
      auVar21._0_8_ = auVar8._0_8_ << 0x20;
      auVar21._8_4_ = uVar5;
      auVar21._12_4_ = uVar6;
      fVar14 = (float)((dStack_110 - auVar20._0_8_) * auVar21._8_8_);
      fVar27 = (float)((local_118 -
                       (double)CONCAT44(uVar77 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                        SUB84(dVar38,0) &
                                        (uint)__xmm_7fffffffffffffff7fffffffffffffff)) *
                      (double)auVar33._0_8_);
      if (fVar27 <= fVar14) {
        fVar14 = fVar27;
      }
      fVar27 = (float)((dVar39 - (double)CONCAT44((uint)((ulonglong)dVar28 >> 0x20) &
                                                  __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                                  SUB84(dVar28,0) &
                                                  (uint)__xmm_7fffffffffffffff7fffffffffffffff)) *
                      (double)uVar1);
      if (fVar27 <= fVar14) {
        fVar14 = fVar27;
      }
    }
  }
  else {
    fVar14 = __real_bf800000;
    if (this->ShapeType == Sphere) {
      auVar9._4_8_ = SUB168(ZEXT816(0) | auVar56,8) * (auVar75._8_8_ * dVar39 + 0.0 + auVar30._8_8_)
      ;
      auVar9._0_4_ = uVar77;
      auVar37._0_8_ = auVar9._0_8_ << 0x20;
      auVar37._8_4_ = uVar46;
      auVar37._12_4_ = uVar49;
      uVar77 = (uint)auVar33._0_8_;
      if ((double)auVar33._0_8_ <= (double)auVar33._8_8_) {
        uVar77 = uVar5;
        uVar78 = uVar6;
      }
      if ((double)CONCAT44(uVar78,uVar77) <= (double)uVar1) {
        uVar77 = (uint)uVar1;
        uVar78 = uVar50;
      }
      dVar28 = this->Radius -
               (double)(float)SQRT(auVar37._8_8_ * auVar37._8_8_ + dVar38 * dVar38 + dVar28 * dVar28
                                  );
      fVar14 = (float)((double)CONCAT44((uint)((ulonglong)dVar28 >> 0x20) &
                                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                        SUB84(dVar28,0) &
                                        (uint)__xmm_7fffffffffffffff7fffffffffffffff) *
                      (double)CONCAT44(uVar78,uVar77));
    }
  }
  return fVar14;
}

// CheckModeStateChange @ 149499cb0

void __thiscall
UWN_VolumeComponent::CheckModeStateChange
          (UWN_VolumeComponent *this,EWN_VolumeObserverMode param_1,TVector<double> *param_2,
          TArray<FWN_VolumeStateChange,TSizedDefaultAllocator<32>_> *param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FWN_VolumeObserverInfo *pFVar5;
  longlong lVar6;
  float fVar7;
  undefined1 local_res8 [8];
  EWN_VolumeObserverMode local_res10 [8];
  UWN_VolumeComponent *local_48;
  EWN_VolumeObserverMode EStack_40;
  undefined7 uStack_3f;
  double local_38;
  double dStack_30;
  double local_28;
  char cStack_20;
  undefined7 uStack_1f;
  
  local_res10[0] = param_1;
  pFVar5 = TMapBase<enum_EWN_VolumeObserverMode,FWN_VolumeObserverInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EWN_VolumeObserverMode,FWN_VolumeObserverInfo,0>_>
           ::FindOrAddImpl<enum_EWN_VolumeObserverMode_const_&>
                     (&this->ObserverInfo,(uint)param_1,local_res10);
  bVar3 = pFVar5->bIsInVolume;
  cStack_20 = (**(code **)(this->_padding_ + 0xa90))(this,param_2,local_res8);
  if ((bool)cStack_20 == bVar3) {
    if (cStack_20 != '\0') {
      fVar7 = CalculateDistanceToNearPlane(this,param_2);
      pFVar5->DistanceToNearPlane = fVar7;
    }
  }
  else {
    local_38 = (param_2->field0_0x0)._s_0.X;
    dStack_30 = (param_2->field0_0x0)._s_0.Y;
    pFVar1 = (param_3->AllocatorInstance).Data;
    local_28 = (param_2->field0_0x0)._s_0.Z;
    EStack_40 = local_res10[0];
    local_48 = this;
    if ((pFVar1 <= (FScriptContainerElement *)&local_48) &&
       ((FScriptContainerElement *)&local_48 < pFVar1 + (longlong)param_3->ArrayMax * 0x30)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar4 = param_3->ArrayNum;
    if (iVar4 == param_3->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x830,&param_3->AllocatorInstance,&param_3->ArrayMax);
    }
    lVar6 = (longlong)iVar4;
    param_3->ArrayNum = iVar4 + 1;
    pFVar1 = (param_3->AllocatorInstance).Data;
    *(UWN_VolumeComponent **)(pFVar1 + lVar6 * 0x30) = local_48;
    *(ulonglong *)(pFVar1 + lVar6 * 0x30 + 8) = CONCAT71(uStack_3f,EStack_40);
    *(double *)(pFVar1 + lVar6 * 0x30 + 0x10) = local_38;
    *(double *)(pFVar1 + lVar6 * 0x30 + 0x10 + 8) = dStack_30;
    *(double *)(pFVar1 + lVar6 * 0x30 + 0x20) = local_28;
    *(ulonglong *)(pFVar1 + lVar6 * 0x30 + 0x20 + 8) = CONCAT71(uStack_1f,cStack_20);
  }
  return;
}

// CheckOverlapVolume @ 149499e30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
UWN_VolumeComponent::CheckOverlapVolume(UWN_VolumeComponent *this,UWN_VolumeComponent *param_1)

{
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  EWN_VolumeShape EVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  char cVar12;
  bool bVar13;
  int iVar14;
  double *pdVar15;
  longlong lVar16;
  double *pdVar17;
  bool bVar18;
  float fVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined4 uVar29;
  double dVar32;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auStack_358 [32];
  float local_338 [2];
  TVector<double>_u_0 local_330;
  double local_318;
  TVector<double>_u_0 local_310;
  TVector<double>_u_0 local_2f8;
  undefined1 local_2d8 [8];
  double dStack_2d0;
  double local_2c8;
  undefined1 auStack_2c0 [16];
  double dStack_2b0;
  TVector<double>_u_0 local_2a8;
  TTransform<double> local_288;
  undefined1 local_228 [24];
  TVector<double>_u_0 TStack_210;
  TVector<double>_u_0 local_1f8;
  undefined1 local_1d8 [16];
  double local_1b8;
  double local_1a8;
  double local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  double local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  double dStack_168;
  double local_160;
  double dStack_158;
  double local_150;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStack_358;
  if (param_1 == (UWN_VolumeComponent *)0x0) {
    return false;
  }
  local_2f8._s_0.X = (double)param_1->_padding_;
  local_2f8._s_0.Y = (double)param_1->_padding_;
  local_310._s_0.X = (param_1->VolumeExtent).field0_0x0._s_0.X;
  local_310._s_0.Y = (param_1->VolumeExtent).field0_0x0._s_0.Y;
  EVar5 = param_1->ShapeType;
  local_330._s_0.X = (double)this->_padding_;
  local_330._s_0.Y = (double)this->_padding_;
  uVar3 = this->_padding_;
  uVar4 = this->_padding_;
  local_2f8._s_0.Z = (double)param_1->_padding_;
  dVar1 = param_1->Radius;
  local_1b8 = (param_1->VolumeExtent).field0_0x0._s_0.Z;
  local_318 = local_330._s_0.X - local_2f8._s_0.X;
  dVar8 = local_330._s_0.Y - local_2f8._s_0.Y;
  local_1d8._8_4_ = (int)uVar4;
  local_1d8._0_8_ = (double)uVar3 - local_2f8._s_0.Z;
  local_1d8._12_4_ = (int)((ulonglong)uVar4 >> 0x20);
  local_330._s_0.Z = (double)uVar3;
  cVar12 = (**(code **)(this->_padding_ + 0xa90))(SUB84(local_318,0),&local_2f8,local_338);
  if (cVar12 == '\x01') {
    return true;
  }
  if (this->ShapeType == Sphere) {
    if (EVar5 != Sphere) {
      if (EVar5 != Box) {
        return false;
      }
      fVar19 = CalculateDistanceToNearPlane(param_1,(TVector<double> *)&local_330._s_0);
      bVar13 = (double)fVar19 == this->Radius;
      bVar18 = (double)fVar19 < this->Radius;
      goto LAB_149499f3b;
    }
  }
  else {
    if (this->ShapeType != Box) {
      return false;
    }
    if (EVar5 != Sphere) {
      if (EVar5 != Box) {
        return false;
      }
      local_288.Translation.XY.m128d_f64[0] = (double)this->_padding_;
      local_288.Translation.XY.m128d_f64[1] = (double)this->_padding_;
      local_288.Translation.ZW.m128d_f64[0] = (double)this->_padding_;
      local_288.Translation.ZW.m128d_f64[1] = (double)this->_padding_;
      auVar20 = blendpd(___xmm_00000000000000003ff0000000000000,ZEXT816(0),2);
      dVar32 = __xmm_00000000000000003ff0000000000000._8_8_;
      local_288.Rotation.XY.m128d_f64[0] = (double)this->_padding_;
      local_288.Rotation.XY.m128d_f64[1] = (double)this->_padding_;
      local_288.Rotation.ZW.m128d_f64[0] = (double)this->_padding_;
      local_288.Rotation.ZW.m128d_f64[1] = (double)this->_padding_;
      auVar35 = blendpd((undefined1  [16])local_288.Rotation.XY.m128d_f64,
                        (undefined1  [16])local_288.Rotation.ZW.m128d_f64,2);
      dVar9 = (double)this->_padding_;
      dVar10 = (double)this->_padding_;
      auVar30._0_8_ =
           dVar32 * local_288.Rotation.XY.m128d_f64[0] -
           local_288.Rotation.XY.m128d_f64[1] * (double)__xmm_00000000000000003ff0000000000000;
      auVar30._8_8_ =
           local_288.Rotation.XY.m128d_f64[1] * 0.0 - local_288.Rotation.ZW.m128d_f64[0] * dVar32;
      dVar11 = (double)this->_padding_;
      local_288.Scale3D.ZW.m128d_f64[1] = (double)this->_padding_;
      dVar1 = auVar35._0_8_;
      dVar2 = auVar35._8_8_;
      auVar35._0_8_ = auVar20._0_8_ * local_288.Rotation.ZW.m128d_f64[0] - dVar1 * 0.0;
      auVar35._8_8_ = auVar20._8_8_ * local_288.Rotation.ZW.m128d_f64[1] - dVar2 * 0.0;
      auVar20 = blendpd(auVar30,auVar35,2);
      dVar6 = auVar30._8_8_ + auVar30._8_8_;
      dVar7 = auVar35._0_8_ + auVar35._0_8_;
      uVar29 = (undefined4)((ulonglong)dVar7 >> 0x20);
      auVar31._0_8_ = auVar20._0_8_ + auVar20._0_8_;
      auVar31._8_8_ = auVar20._8_8_ + auVar20._8_8_;
      auVar25._8_4_ = SUB84(dVar7,0);
      auVar25._0_8_ = dVar6;
      auVar25._12_4_ = uVar29;
      auVar20._8_4_ = SUB84(dVar7,0);
      auVar20._0_8_ = dVar6;
      auVar20._12_4_ = uVar29;
      auVar20 = blendpd(auVar20,auVar31,2);
      auVar26._0_8_ =
           auVar25._8_8_ * local_288.Rotation.XY.m128d_f64[0] -
           dVar6 * local_288.Rotation.XY.m128d_f64[1];
      auVar26._8_8_ =
           auVar31._0_8_ * local_288.Rotation.XY.m128d_f64[1] -
           dVar7 * local_288.Rotation.ZW.m128d_f64[0];
      auVar21._0_8_ = auVar20._0_8_ * local_288.Rotation.ZW.m128d_f64[0] - auVar31._0_8_ * dVar1;
      auVar21._8_8_ = auVar20._8_8_ * local_288.Rotation.ZW.m128d_f64[1] - auVar31._8_8_ * dVar2;
      dVar7 = dVar7 * local_288.Rotation.ZW.m128d_f64[1] + dVar32 + auVar21._0_8_;
      auVar20 = blendpd(auVar26,auVar21,2);
      local_2c8 = auVar31._0_8_ * local_288.Rotation.ZW.m128d_f64[1] + auVar20._0_8_;
      unique0x10000532 = SUB84(dVar7,0);
      local_2d8 = (undefined1  [8])
                  (dVar6 * local_288.Rotation.ZW.m128d_f64[1] +
                   (double)__xmm_00000000000000003ff0000000000000 + auVar26._8_8_);
      unique0x10000536 = (int)((ulonglong)dVar7 >> 0x20);
      dVar32 = __xmm_3ff00000000000000000000000000000._8_8_;
      auVar20 = blendpd(___xmm_3ff00000000000000000000000000000,ZEXT816(0),2);
      auVar33._0_8_ =
           dVar32 * local_288.Rotation.XY.m128d_f64[0] -
           local_288.Rotation.XY.m128d_f64[1] * (double)__xmm_3ff00000000000000000000000000000;
      auVar33._8_8_ =
           local_288.Rotation.XY.m128d_f64[1] * 0.0 - local_288.Rotation.ZW.m128d_f64[0] * dVar32;
      auVar22._0_8_ = auVar20._0_8_ * local_288.Rotation.ZW.m128d_f64[0] - dVar1 * 0.0;
      auVar22._8_8_ = auVar20._8_8_ * local_288.Rotation.ZW.m128d_f64[1] - dVar2 * 0.0;
      auVar20 = blendpd(auVar33,auVar22,2);
      dVar6 = auVar33._8_8_ + auVar33._8_8_;
      dVar7 = auVar22._0_8_ + auVar22._0_8_;
      uVar29 = (undefined4)((ulonglong)dVar7 >> 0x20);
      auVar34._0_8_ = auVar20._0_8_ + auVar20._0_8_;
      auVar34._8_8_ = auVar20._8_8_ + auVar20._8_8_;
      auVar27._8_4_ = SUB84(dVar7,0);
      auVar27._0_8_ = dVar6;
      auVar27._12_4_ = uVar29;
      auVar23._8_4_ = SUB84(dVar7,0);
      auVar23._0_8_ = dVar6;
      auVar23._12_4_ = uVar29;
      auVar20 = blendpd(auVar23,auVar34,2);
      auVar28._0_8_ =
           auVar27._8_8_ * local_288.Rotation.XY.m128d_f64[0] -
           dVar6 * local_288.Rotation.XY.m128d_f64[1];
      auVar28._8_8_ =
           auVar34._0_8_ * local_288.Rotation.XY.m128d_f64[1] -
           dVar7 * local_288.Rotation.ZW.m128d_f64[0];
      auVar24._0_8_ = auVar20._0_8_ * local_288.Rotation.ZW.m128d_f64[0] - auVar34._0_8_ * dVar1;
      auVar24._8_8_ = auVar20._8_8_ * local_288.Rotation.ZW.m128d_f64[1] - auVar34._8_8_ * dVar2;
      auVar20 = blendpd(auVar28,auVar24,2);
      dVar1 = dVar7 * local_288.Rotation.ZW.m128d_f64[1] + dVar32 + auVar24._0_8_;
      dStack_2b0 = auVar34._0_8_ * local_288.Rotation.ZW.m128d_f64[1] + auVar20._0_8_;
      local_330._s_0.X = 0.0;
      local_330._s_0.Y = 0.0;
      auStack_2c0._8_4_ = SUB84(dVar1,0);
      auStack_2c0._0_8_ =
           dVar6 * local_288.Rotation.ZW.m128d_f64[1] +
           (double)__xmm_3ff00000000000000000000000000000 + auVar28._8_8_;
      auStack_2c0._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
      local_330._s_0.Z = __real_3ff0000000000000;
      local_288.Scale3D.XY.m128d_f64[0] = dVar9;
      local_288.Scale3D.XY.m128d_f64[1] = dVar10;
      local_288.Scale3D.ZW.m128d_f64[0] = dVar11;
      UE::Math::TTransform<double>::TransformVectorNoScale
                (&local_288,(TVector<double> *)&local_2a8._s_0,(TVector<double> *)&local_330._s_0);
      local_288.Rotation.XY.m128d_f64[0] = (double)param_1->_padding_;
      local_288.Rotation.XY.m128d_f64[1] = (double)param_1->_padding_;
      local_288.Rotation.ZW.m128d_f64[0] = (double)param_1->_padding_;
      local_288.Rotation.ZW.m128d_f64[1] = (double)param_1->_padding_;
      dVar1 = (double)param_1->_padding_;
      dVar2 = (double)param_1->_padding_;
      dVar6 = (double)param_1->_padding_;
      local_288.Scale3D.ZW.m128d_f64[1] = (double)param_1->_padding_;
      local_288.Translation.XY.m128d_f64[0] = (double)param_1->_padding_;
      local_288.Translation.XY.m128d_f64[1] = (double)param_1->_padding_;
      local_288.Translation.ZW.m128d_f64[0] = (double)param_1->_padding_;
      local_288.Translation.ZW.m128d_f64[1] = (double)param_1->_padding_;
      local_288.Scale3D.XY.m128d_f64[0] = dVar1;
      local_288.Scale3D.XY.m128d_f64[1] = dVar2;
      local_288.Scale3D.ZW.m128d_f64[0] = dVar6;
      UE::Math::TTransform<double>::GetUnitAxis(&local_288,(TVector<double> *)local_228,X);
      UE::Math::TTransform<double>::GetUnitAxis(&local_288,(TVector<double> *)&TStack_210._s_0,Y);
      UE::Math::TTransform<double>::GetUnitAxis(&local_288,(TVector<double> *)&local_1f8._s_0,Z);
      local_1a8 = local_318;
      local_198 = local_1d8._0_8_;
      local_190 = local_2d8;
      uStack_188 = dStack_2d0;
      local_170 = auStack_2c0._8_8_;
      dStack_168 = dStack_2b0;
      local_180 = local_2c8;
      uStack_178 = auStack_2c0._0_8_;
      local_150 = local_2a8._s_0.Z;
      local_160 = local_2a8._s_0.X;
      dStack_158 = local_2a8._s_0.Y;
      local_138 = (double)local_228._16_8_;
      dStack_130 = TStack_210._s_0.X;
      local_148 = (double)local_228._0_8_;
      dStack_140 = (double)local_228._8_8_;
      local_118 = local_1f8._s_0.X;
      dStack_110 = local_1f8._s_0.Y;
      local_128 = TStack_210._s_0.Y;
      dStack_120 = TStack_210._s_0.Z;
      pdVar17 = (double *)(local_2d8 + 8);
      local_f0 = dVar11 * (this->VolumeExtent).field0_0x0._s_0.Z;
      iVar14 = 0;
      local_100 = dVar9 * (this->VolumeExtent).field0_0x0._s_0.X;
      local_108 = local_1f8._s_0.Z;
      local_f8 = dVar10 * (this->VolumeExtent).field0_0x0._s_0.Y;
      local_e8 = local_310._s_0.X * dVar1;
      local_e0 = local_310._s_0.Y * dVar2;
      local_d8 = local_1b8 * dVar6;
      local_1a0 = dVar8;
      do {
        lVar16 = (longlong)iVar14 * 3;
        bVar13 = `UWN_VolumeComponent::CheckOverlapVolume'::__l38::<lambda_1>::operator()
                           (&local_1a8,(TVector<double> *)(local_2d8 + (longlong)iVar14 * 0x18));
        if (bVar13) {
          return false;
        }
        bVar13 = `UWN_VolumeComponent::CheckOverlapVolume'::__l38::<lambda_1>::operator()
                           (&local_1a8,(TVector<double> *)(local_228 + lVar16 * 8));
        if (bVar13) {
          return false;
        }
        dVar1 = pdVar17[1];
        pdVar15 = (double *)(local_228 + 0x10);
        dVar8 = *pdVar17;
        lVar16 = 0;
        dVar2 = pdVar17[-1];
        do {
          local_310._s_0.X = *pdVar15 * dVar8 - pdVar15[-1] * dVar1;
          local_310._s_0.Y = pdVar15[-2] * dVar1 - dVar2 * *pdVar15;
          local_310._s_0.Z = dVar2 * pdVar15[-1] - pdVar15[-2] * dVar8;
          bVar13 = `UWN_VolumeComponent::CheckOverlapVolume'::__l38::<lambda_1>::operator()
                             (&local_1a8,(TVector<double> *)&local_310._s_0);
          if (bVar13) {
            return false;
          }
          lVar16 = lVar16 + 1;
          pdVar15 = pdVar15 + 3;
        } while (lVar16 < 3);
        iVar14 = iVar14 + 1;
        pdVar17 = pdVar17 + 3;
      } while (iVar14 < 3);
      return true;
    }
    local_338[0] = CalculateDistanceToNearPlane(this,(TVector<double> *)&local_2f8._s_0);
  }
  bVar13 = local_338[0] == (float)dVar1;
  bVar18 = local_338[0] < (float)dVar1;
LAB_149499f3b:
  if (bVar18 || bVar13) {
    return true;
  }
  return false;
}

// CheckVolumeOverlap @ 14949a900

void __thiscall UWN_VolumeComponent::CheckVolumeOverlap(UWN_VolumeComponent *this)

{
  bool bVar1;
  UWN_CommonSubsystem *this_00;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->CommonSubsystem).WeakPtr);
  if (bVar1) {
    this_00 = (UWN_CommonSubsystem *)FWeakObjectPtr::Get(&(this->CommonSubsystem).WeakPtr);
    UWN_CommonSubsystem::CheckVolumeOverlap(this_00,this);
  }
  return;
}

// CollectStateChanges @ 14949a9f0

void __thiscall
UWN_VolumeComponent::CollectStateChanges
          (UWN_VolumeComponent *this,TVector<double> *param_1,TVector<double> *param_2,
          TVector<double> *param_3,TVector<double> *param_4,
          TArray<FWN_VolumeStateChange,TSizedDefaultAllocator<32>_> *param_5)

{
  CheckModeStateChange(this,Player,param_1,param_5);
  CheckModeStateChange(this,PlayerCamera,param_2,param_5);
  CheckModeStateChange(this,View,param_3,param_5);
  CheckModeStateChange(this,Custom,param_4,param_5);
  return;
}

// EndPlay @ 14949df20

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

void __thiscall UWN_VolumeComponent::EndPlay(UWN_VolumeComponent *this,Type param_1)

{
  ForElementType<USceneComponent_*> FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  UObject *pUVar6;
  UObject *pUVar7;
  uint uVar8;
  ForElementType<USceneComponent_*> FVar9;
  longlong lVar10;
  undefined1 auStack_158 [32];
  UObjectBaseUtility **ppUStack_138;
  ForElementType<USceneComponent_*> FStack_130;
  longlong lStack_128;
  longlong lStack_120;
  undefined8 uStack_118;
  undefined1 auStack_108 [8];
  UObjectBaseUtility *pUStack_100;
  ForElementType<USceneComponent_*> FStack_f8;
  int iStack_30;
  int iStack_2c;
  ulonglong uStack_28;
  
  uStack_28 = __security_cookie.value ^ (ulonglong)auStack_158;
  UActorComponent::EndPlay((UActorComponent *)this,param_1);
  if ((param_1 == RemovedFromWorld) && ((this->_padding_ & 0x8000000) == 0)) {
    pUVar6 = UObjectBaseUtility::GetOutermostObject((UObjectBaseUtility *)this);
    if (((UObjectBaseUtility *)this->_padding_ != (UObjectBaseUtility *)0x0) &&
       (pUVar7 = UObjectBaseUtility::GetOutermostObject((UObjectBaseUtility *)this->_padding_),
       pUVar7 != pUVar6)) {
      (**(code **)(this->_padding_ + 0x518))(this,&FDetachmentTransformRules::KeepWorldTransform);
    }
    uVar8 = 0;
    FStack_f8.SecondaryData = (ForElementType<USceneComponent_*>)0x0;
    iStack_30 = 0;
    iStack_2c = 0x18;
    if (0 < (int)this->_padding_) {
      lVar10 = 0;
      do {
        iVar5 = (int)this->_padding_;
        uVar4 = 0;
        if ((int)uVar8 < iVar5) {
          uVar4 = ~uVar8 >> 0x1f;
        }
        if (uVar4 == 0) {
          ppUStack_138 = (UObjectBaseUtility **)(longlong)(int)uVar8;
          FStack_130 = (ForElementType<USceneComponent_*>)(longlong)iVar5;
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
        pUStack_100 = *(UObjectBaseUtility **)(lVar10 + this->_padding_);
        if ((pUStack_100 != (UObjectBaseUtility *)0x0) &&
           (pUVar7 = UObjectBaseUtility::GetOutermostObject(pUStack_100), pUVar7 != pUVar6)) {
          FVar9 = (ForElementType<USceneComponent_*>)&FStack_f8;
          if (FStack_f8.SecondaryData != (ForElementType<USceneComponent_*>)0x0) {
            FVar9 = FStack_f8.SecondaryData;
          }
          if ((ulonglong)FVar9 <= &pUStack_100) {
            FVar9 = (ForElementType<USceneComponent_*>)&FStack_f8;
            if (FStack_f8.SecondaryData != (ForElementType<USceneComponent_*>)0x0) {
              FVar9 = FStack_f8.SecondaryData;
            }
            if (&pUStack_100 < (UObjectBaseUtility **)((longlong)FVar9 + (longlong)iStack_2c * 8)) {
              lStack_120 = (longlong)iStack_30;
              uStack_118 = 8;
              ppUStack_138 = &pUStack_100;
              FStack_130 = (ForElementType<USceneComponent_*>)&FStack_f8;
              if (FStack_f8.SecondaryData != (ForElementType<USceneComponent_*>)0x0) {
                FStack_130 = FStack_f8.SecondaryData;
              }
              lStack_128 = (longlong)iStack_2c;
              bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                );
              if (bVar3) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
            }
          }
          iVar5 = iStack_30;
          if (iStack_30 == iStack_2c) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<USceneComponent_*>_>
                              (0x808,&FStack_f8,&iStack_2c);
          }
          iStack_30 = iVar5 + 1;
          FVar9 = (ForElementType<USceneComponent_*>)&FStack_f8;
          if (FStack_f8.SecondaryData != (ForElementType<USceneComponent_*>)0x0) {
            FVar9 = FStack_f8.SecondaryData;
          }
          *(UObjectBaseUtility **)((longlong)FVar9 + (longlong)iVar5 * 8) = pUStack_100;
        }
        uVar8 = uVar8 + 1;
        lVar10 = lVar10 + 8;
      } while ((int)uVar8 < (int)this->_padding_);
    }
    iVar5 = iStack_30;
    FVar9 = (ForElementType<USceneComponent_*>)&FStack_f8;
    if (FStack_f8.SecondaryData != (ForElementType<USceneComponent_*>)0x0) {
      FVar9 = FStack_f8.SecondaryData;
    }
    FVar1 = (ForElementType<USceneComponent_*>)((longlong)FVar9 + (longlong)iStack_30 * 8);
    while( true ) {
      if (iStack_30 != iVar5) {
        `TCheckedPointerIterator<USceneComponent_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (auStack_108);
      }
      if (FVar9 == FVar1) break;
      (**(code **)(**(longlong **)FVar9 + 0x518))
                (*(longlong **)FVar9,&FDetachmentTransformRules::KeepWorldTransform);
      FVar9 = (ForElementType<USceneComponent_*>)((longlong)FVar9 + 8);
    }
    if (FStack_f8.SecondaryData != (ForElementType<USceneComponent_*>)0x0) {
      FMemory::Free((void *)FStack_f8.SecondaryData);
    }
  }
  return;
}

// GetDistanceFromNearPlane @ 1494a06a0

float __thiscall
UWN_VolumeComponent::GetDistanceFromNearPlane
          (UWN_VolumeComponent *this,EWN_VolumeObserverMode param_1)

{
  FWN_VolumeObserverInfo *pFVar1;
  
  pFVar1 = TMapBase<enum_EWN_VolumeObserverMode,FWN_VolumeObserverInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EWN_VolumeObserverMode,FWN_VolumeObserverInfo,0>_>
           ::Find(&this->ObserverInfo,param_1);
  if ((pFVar1 != (FWN_VolumeObserverInfo *)0x0) && (pFVar1->bIsInVolume != false)) {
    return pFVar1->DistanceToNearPlane;
  }
  return __real_bf800000;
}

// GetPrivateStaticClass @ 1494a2370

UClass * __cdecl UWN_VolumeComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_VolumeComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_Common",L"WN_VolumeComponent",
               &Z_Registration_Info_UClass_UWN_VolumeComponent.InnerSingleton,
               StaticRegisterNativesUWN_VolumeComponent,0x6a0,0x10,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UWN_VolumeComponent>,
               InternalVTableHelperCtorCaller<UWN_VolumeComponent>,local_res8,
               UPrimitiveComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_VolumeComponent.InnerSingleton;
}

// GetTimeEnter @ 1494a3070

double __thiscall
UWN_VolumeComponent::GetTimeEnter(UWN_VolumeComponent *this,EWN_VolumeObserverMode param_1)

{
  FWN_VolumeObserverInfo *pFVar1;
  
  pFVar1 = TMapBase<enum_EWN_VolumeObserverMode,FWN_VolumeObserverInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EWN_VolumeObserverMode,FWN_VolumeObserverInfo,0>_>
           ::Find(&this->ObserverInfo,param_1);
  if ((pFVar1 != (FWN_VolumeObserverInfo *)0x0) && (pFVar1->bIsInVolume == true)) {
    return pFVar1->EnterTime;
  }
  return __real_bff0000000000000;
}

// GetTimeLeave @ 1494a3150

double __thiscall
UWN_VolumeComponent::GetTimeLeave(UWN_VolumeComponent *this,EWN_VolumeObserverMode param_1)

{
  FWN_VolumeObserverInfo *pFVar1;
  
  pFVar1 = TMapBase<enum_EWN_VolumeObserverMode,FWN_VolumeObserverInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EWN_VolumeObserverMode,FWN_VolumeObserverInfo,0>_>
           ::Find(&this->ObserverInfo,param_1);
  if ((pFVar1 != (FWN_VolumeObserverInfo *)0x0) && (pFVar1->bIsInVolume == false)) {
    return pFVar1->LeaveTime;
  }
  return __real_bff0000000000000;
}

// GetTimeSinceEnter @ 1494a31d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

double __thiscall
UWN_VolumeComponent::GetTimeSinceEnter(UWN_VolumeComponent *this,EWN_VolumeObserverMode param_1)

{
  FWN_VolumeObserverInfo *pFVar1;
  UWorld *pUVar2;
  
  pFVar1 = TMapBase<enum_EWN_VolumeObserverMode,FWN_VolumeObserverInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EWN_VolumeObserverMode,FWN_VolumeObserverInfo,0>_>
           ::Find(&this->ObserverInfo,param_1);
  if ((pFVar1 != (FWN_VolumeObserverInfo *)0x0) && (pFVar1->bIsInVolume == true)) {
    pUVar2 = (UWorld *)this->_padding_;
    if (pUVar2 == (UWorld *)0x0) {
      pUVar2 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    }
    return pUVar2->TimeSeconds - pFVar1->EnterTime;
  }
  return __real_bff0000000000000;
}

// GetTimeSinceLeave @ 1494a3280

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

double __thiscall
UWN_VolumeComponent::GetTimeSinceLeave(UWN_VolumeComponent *this,EWN_VolumeObserverMode param_1)

{
  FWN_VolumeObserverInfo *pFVar1;
  UWorld *pUVar2;
  
  pFVar1 = TMapBase<enum_EWN_VolumeObserverMode,FWN_VolumeObserverInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EWN_VolumeObserverMode,FWN_VolumeObserverInfo,0>_>
           ::Find(&this->ObserverInfo,param_1);
  if ((pFVar1 != (FWN_VolumeObserverInfo *)0x0) && (pFVar1->bIsInVolume == false)) {
    pUVar2 = (UWorld *)this->_padding_;
    if (pUVar2 == (UWorld *)0x0) {
      pUVar2 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    }
    return pUVar2->TimeSeconds - pFVar1->LeaveTime;
  }
  return __real_bff0000000000000;
}

// IsInVolume @ 1494a58f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
UWN_VolumeComponent::IsInVolume(UWN_VolumeComponent *this,TVector<double> *param_1,float *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  float fVar9;
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  double dVar15;
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  uint uVar21;
  uint uVar22;
  double dVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  double dVar28;
  double dVar29;
  double dVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined4 uVar37;
  undefined4 uVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  
  if (param_2 != (float *)0x0) {
    fVar9 = CalculateDistanceToNearPlane(this,param_1);
    *param_2 = fVar9;
  }
  if (this->ShapeType == Box) {
    dVar29 = (double)this->_padding_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
    dVar30 = (double)this->_padding_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
    dVar15 = (double)this->_padding_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
    dVar16 = (double)this->_padding_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
    dVar10 = (param_1->field0_0x0)._s_0.Z - (double)this->_padding_;
    auVar24._8_4_ = SUB84(dVar30,0);
    auVar24._0_8_ = dVar29;
    auVar24._12_4_ = (int)((ulonglong)dVar30 >> 0x20);
    auVar18._8_4_ = SUB84(dVar16,0);
    auVar18._0_8_ = dVar15;
    auVar18._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
    auVar25 = blendpd(auVar24,auVar18,2);
    uVar2 = this->_padding_;
    auVar20._0_8_ = this->_padding_;
    auVar20._8_8_ = this->_padding_;
    dVar3 = (param_1->field0_0x0)._s_0.X - (double)this->_padding_;
    dVar4 = (param_1->field0_0x0)._s_0.Y - (double)this->_padding_;
    uVar37 = (undefined4)((ulonglong)dVar4 >> 0x20);
    auVar17._8_4_ = SUB84(dVar4,0);
    auVar17._0_8_ = dVar3;
    auVar17._12_4_ = uVar37;
    auVar41._8_4_ = SUB84(dVar4,0);
    auVar41._0_8_ = dVar3;
    auVar41._12_4_ = uVar37;
    auVar11._8_4_ = SUB84(dVar15,0);
    auVar11._0_8_ = dVar30;
    auVar11._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
    auVar5._8_8_ = 0;
    auVar5._0_8_ = dVar10;
    auVar18 = blendpd(auVar17,auVar5,2);
    auVar42._0_8_ = auVar41._8_8_ * dVar29 - dVar30 * dVar3;
    auVar42._8_8_ = dVar10 * dVar30 - auVar11._8_8_ * dVar4;
    auVar19._0_8_ = auVar18._0_8_ * dVar15 - auVar25._0_8_ * dVar10;
    auVar19._8_8_ = auVar18._8_8_ * dVar16 - auVar25._8_8_ * 0.0;
    dVar23 = auVar42._8_8_ + auVar42._8_8_;
    dVar28 = auVar19._0_8_ + auVar19._0_8_;
    uVar37 = SUB84(dVar28,0);
    uVar38 = (undefined4)((ulonglong)dVar28 >> 0x20);
    auVar18 = blendpd(auVar42,auVar19,2);
    auVar39._8_4_ = uVar37;
    auVar39._0_8_ = dVar23;
    auVar39._12_4_ = uVar38;
    auVar12._8_4_ = uVar37;
    auVar12._0_8_ = dVar23;
    auVar12._12_4_ = uVar38;
    auVar35._8_4_ = uVar37;
    auVar35._0_8_ = dVar23;
    auVar35._12_4_ = uVar38;
    auVar43._0_8_ = auVar18._0_8_ + auVar18._0_8_;
    auVar43._8_8_ = auVar18._8_8_ + auVar18._8_8_;
    auVar18 = blendpd(auVar35,auVar43,2);
    auVar40._0_8_ = auVar39._8_8_ * dVar29 - dVar23 * dVar30;
    auVar40._8_8_ = auVar43._0_8_ * dVar30 - auVar12._8_8_ * dVar15;
    auVar13._8_4_ = SUB84(auVar43._8_8_,0);
    auVar13._0_8_ = auVar43._0_8_;
    auVar13._12_4_ = (int)((ulonglong)auVar43._8_8_ >> 0x20);
    auVar36._0_8_ = auVar18._0_8_ * dVar15 - auVar43._0_8_ * auVar25._0_8_;
    auVar36._8_8_ = auVar18._8_8_ * dVar16 - auVar13._8_8_ * auVar25._8_8_;
    lVar6 = -(ulonglong)
             ((double)CONCAT44((uint)((ulonglong)uVar2 >> 0x20) &
                               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                               (uint)uVar2 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
             (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
    auVar26._0_8_ =
         (double)CONCAT44((uint)((ulonglong)auVar20._0_8_ >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          (uint)auVar20._0_8_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    auVar26._8_4_ = (uint)auVar20._8_8_ & _UNK_15061cc88;
    auVar26._12_4_ = (uint)((ulonglong)auVar20._8_8_ >> 0x20) & _UNK_15061cc8c;
    auVar20 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar20);
    lVar7 = -(ulonglong)(auVar26._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
    lVar8 = -(ulonglong)(auVar26._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
    auVar14._8_4_ = SUB84(auVar40._8_8_,0);
    auVar14._0_8_ = auVar40._0_8_;
    auVar14._12_4_ = (int)((ulonglong)auVar40._8_8_ >> 0x20);
    auVar27._0_8_ =
         (double)CONCAT44(~(uint)((ulonglong)lVar7 >> 0x20) & auVar20._4_4_,
                          ~(uint)lVar7 & auVar20._0_4_);
    auVar27._8_4_ = ~(uint)lVar8 & auVar20._8_4_;
    auVar27._12_4_ = ~(uint)((ulonglong)lVar8 >> 0x20) & auVar20._12_4_;
    dVar23 = auVar27._0_8_ * (dVar23 * dVar16 + dVar3 + auVar14._8_8_);
    dVar28 = auVar27._8_8_ * (dVar28 * dVar16 + dVar4 + auVar36._0_8_);
    auVar25._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
    auVar25._0_8_ = uVar2;
    auVar25._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
    auVar20 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar25);
    uVar1 = *(undefined8 *)((longlong)&(this->VolumeExtent).field0_0x0 + 8);
    uVar21 = (uint)__xmm_80000000000000008000000000000000;
    uVar33 = (uint)uVar1 ^ uVar21;
    uVar22 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    uVar34 = (uint)((ulonglong)uVar1 >> 0x20) ^ uVar22;
    auVar18 = blendpd(auVar40,auVar36,2);
    uVar1 = *(undefined8 *)((longlong)&(this->VolumeExtent).field0_0x0 + 0x10);
    dVar15 = (double)CONCAT44(~(uint)((ulonglong)lVar6 >> 0x20) & auVar20._4_4_,
                              ~(uint)lVar6 & auVar20._0_4_) *
             (auVar43._0_8_ * dVar16 + dVar10 + auVar18._0_8_);
    uVar31 = (uint)uVar1 ^ uVar21;
    uVar32 = (uint)((ulonglong)uVar1 >> 0x20) ^ uVar22;
    uVar1 = *(undefined8 *)&(this->VolumeExtent).field0_0x0;
    if (((((double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) ^ uVar22,(uint)uVar1 ^ uVar21) < dVar23
          ) && (dVar23 < (this->VolumeExtent).field0_0x0._s_0.X)) &&
        ((double)CONCAT44(uVar34,uVar33) <= dVar28 && dVar28 != (double)CONCAT44(uVar34,uVar33))) &&
       (((dVar28 < (this->VolumeExtent).field0_0x0._s_0.Y &&
         ((double)CONCAT44(uVar32,uVar31) <= dVar15 && dVar15 != (double)CONCAT44(uVar32,uVar31)))
        && (dVar15 < (this->VolumeExtent).field0_0x0._s_0.Z)))) {
      return true;
    }
    return false;
  }
  if (this->ShapeType == Sphere) {
    dVar16 = (param_1->field0_0x0)._s_0.X - (double)this->_padding_;
    dVar15 = (param_1->field0_0x0)._s_0.Z - (double)this->_padding_;
    dVar23 = (param_1->field0_0x0)._s_0.Y - (double)this->_padding_;
    return (double)(float)(dVar23 * dVar23 + dVar16 * dVar16 + dVar15 * dVar15) <
           this->Radius * this->Radius;
  }
  if (param_2 != (float *)0x0) {
    *param_2 = -1.0;
  }
  return false;
}

// OnRegister @ 1494a85a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UWN_VolumeComponent::OnRegister(UWN_VolumeComponent *this)

{
  UWN_VolumeComponent *pUVar1;
  bool bVar2;
  int iVar3;
  UObject *pUVar4;
  UWN_CommonSubsystem *this_00;
  uint uVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  TObjectPtr<UWN_VolumeComponent_const_>_u_0 local_res8;
  
  UPrimitiveComponent::OnRegister((UPrimitiveComponent *)this);
  bVar2 = FWeakObjectPtr::IsValid(&(this->CommonSubsystem).WeakPtr);
  if (bVar2) {
    pUVar4 = FWeakObjectPtr::Get(&(this->CommonSubsystem).WeakPtr);
    local_res8.DebugPtr = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (this != (UWN_VolumeComponent *)0x0) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UWN_VolumeComponent *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
    }
    uVar5 = ((uint)((ulonglong)this >> 0x14) & 0xffff ^ (uint)((ulonglong)this >> 4)) * -0x7a143595;
    uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
    iVar3 = TSet<TObjectPtr<UWN_VolumeComponent>,DefaultKeyFuncs<TObjectPtr<UWN_VolumeComponent>,0>,FDefaultSetAllocator>
            ::FindIndexByHash<TObjectPtr<UWN_VolumeComponent_const_>_>
                      ((TSet<TObjectPtr<UWN_VolumeComponent>,DefaultKeyFuncs<TObjectPtr<UWN_VolumeComponent>,0>,FDefaultSetAllocator>
                        *)&pUVar4[8].field_0x20,uVar5 ^ uVar5 >> 0x10,
                       (TObjectPtr<UWN_VolumeComponent_const_> *)&local_res8.ObjectPtr);
    if (iVar3 != -1) {
      pUVar4 = FWeakObjectPtr::Get(&(this->CommonSubsystem).WeakPtr);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UWN_VolumeComponent *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      if (*(int *)(pUVar4 + 9) != *(int *)&pUVar4[10].field_0x4) {
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this != (UWN_VolumeComponent *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar6 = *(undefined1 **)&pUVar4[10].field_0x10;
        if (*(undefined1 **)&pUVar4[10].field_0x10 == (undefined1 *)0x0) {
          puVar6 = &pUVar4[10].field_0x8;
        }
        iVar3 = *(int *)(puVar6 + (((longlong)(int)uVar5 ^ (ulonglong)(uVar5 >> 0x10)) &
                                  (longlong)*(int *)&pUVar4[10].field_0x18 - 1U) * 4);
        while (iVar3 != -1) {
          puVar7 = (undefined8 *)((longlong)iVar3 * 0x10 + *(longlong *)&pUVar4[8].field_0x20);
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (this != (UWN_VolumeComponent *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          pUVar1 = (UWN_VolumeComponent *)*puVar7;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (pUVar1 != (UWN_VolumeComponent *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar1);
          }
          if (pUVar1 == this) {
            TSet<TObjectPtr<UWN_VolumeComponent>,DefaultKeyFuncs<TObjectPtr<UWN_VolumeComponent>,0>,FDefaultSetAllocator>
            ::RemoveByIndex((TSet<TObjectPtr<UWN_VolumeComponent>,DefaultKeyFuncs<TObjectPtr<UWN_VolumeComponent>,0>,FDefaultSetAllocator>
                             *)&pUVar4[8].field_0x20,iVar3);
            break;
          }
          iVar3 = *(int *)(puVar7 + 1);
        }
      }
    }
  }
  bVar2 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  if (!bVar2) {
    RegisterWireFaceComponent(this);
    (**(code **)(this->_padding_ + 0xaa8))(this);
    if ((this->bCanOverlapVolume == false) &&
       (bVar2 = FWeakObjectPtr::IsValid(&(this->CommonSubsystem).WeakPtr), bVar2)) {
      this_00 = (UWN_CommonSubsystem *)FWeakObjectPtr::Get(&(this->CommonSubsystem).WeakPtr);
      UWN_CommonSubsystem::CheckVolumeOverlap(this_00,this);
      return;
    }
  }
  return;
}

// OnUnregister @ 1494a9080

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UWN_VolumeComponent::OnUnregister(UWN_VolumeComponent *this)

{
  longlong lVar1;
  UWN_VolumeWireComponent *this_00;
  UWN_VolumeFaceComponent *this_01;
  bool bVar2;
  UObject *pUVar3;
  TObjectPtr<UWN_VolumeComponent> local_res8;
  UWN_VolumeComponent *local_res10;
  
  bVar2 = FWeakObjectPtr::IsValid(&(this->CommonSubsystem).WeakPtr);
  if (bVar2) {
    lVar1 = this->_padding_;
    if ((lVar1 == 0) ||
       ((((*(byte *)(lVar1 + 0x5d) & 2) == 0 && ((*(uint *)(lVar1 + 8) >> 0x1e & 1) == 0)) &&
        ((*(byte *)(this->_padding_ + 0x5d) & 2) == 0)))) {
      pUVar3 = FWeakObjectPtr::Get(&(this->CommonSubsystem).WeakPtr);
      local_res10 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      TSet<TObjectPtr<UWN_VolumeComponent>,DefaultKeyFuncs<TObjectPtr<UWN_VolumeComponent>,0>,FDefaultSetAllocator>
      ::Emplace<TObjectPtr<UWN_VolumeComponent>_>
                ((TSet<TObjectPtr<UWN_VolumeComponent>,DefaultKeyFuncs<TObjectPtr<UWN_VolumeComponent>,0>,FDefaultSetAllocator>
                  *)&pUVar3[8].field_0x20,&local_res8,(bool *)&local_res10);
    }
    else {
      (**(code **)(this->_padding_ + 0xab0))(this);
      this_00 = (this->WireComponent).field0_0x0.DebugPtr;
      if ((this_00 != (UWN_VolumeWireComponent *)0x0) && ((this_00->_padding_ & 1) != 0)) {
        UActorComponent::UnregisterComponent((UActorComponent *)this_00);
      }
      this_01 = (this->FaceComponent).field0_0x0.DebugPtr;
      if ((this_01 != (UWN_VolumeFaceComponent *)0x0) && ((this_01->_padding_ & 1) != 0)) {
        UActorComponent::UnregisterComponent((UActorComponent *)this_01);
        UPrimitiveComponent::OnUnregister((UPrimitiveComponent *)this);
        return;
      }
    }
  }
  UPrimitiveComponent::OnUnregister((UPrimitiveComponent *)this);
  return;
}

// ProcessEnterEvent @ 1494a97b0

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
UWN_VolumeComponent::ProcessEnterEvent
          (UWN_VolumeComponent *this,EWN_VolumeObserverMode param_1,TVector<double> *param_2)

{
  FWN_VolumeObserverInfo *pFVar1;
  UWorld *pUVar2;
  EWN_VolumeObserverMode local_res10 [8];
  UWN_VolumeComponent *local_38;
  EWN_VolumeObserverMode local_30;
  double local_28;
  double dStack_20;
  double local_18;
  
  local_res10[0] = param_1;
  pFVar1 = TMapBase<enum_EWN_VolumeObserverMode,FWN_VolumeObserverInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EWN_VolumeObserverMode,FWN_VolumeObserverInfo,0>_>
           ::FindOrAddImpl<enum_EWN_VolumeObserverMode_const_&>
                     (&this->ObserverInfo,(uint)param_1,local_res10);
  pFVar1->bIsInVolume = true;
  pUVar2 = (UWorld *)this->_padding_;
  if (pUVar2 == (UWorld *)0x0) {
    pUVar2 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
  }
  pFVar1->EnterTime = pUVar2->TimeSeconds;
  local_28 = (param_2->field0_0x0)._s_0.X;
  dStack_20 = (param_2->field0_0x0)._s_0.Y;
  local_18 = (param_2->field0_0x0)._s_0.Z;
  local_30 = local_res10[0];
  local_38 = this;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnEnter,&local_38);
  return;
}

// ProcessLeaveEvent @ 1494a9850

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
UWN_VolumeComponent::ProcessLeaveEvent(UWN_VolumeComponent *this,EWN_VolumeObserverMode param_1)

{
  FWN_VolumeObserverInfo *pFVar1;
  UWorld *pUVar2;
  EWN_VolumeObserverMode local_res10 [24];
  UWN_VolumeComponent *local_18;
  EWN_VolumeObserverMode local_10;
  
  local_res10[0] = param_1;
  pFVar1 = TMapBase<enum_EWN_VolumeObserverMode,FWN_VolumeObserverInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EWN_VolumeObserverMode,FWN_VolumeObserverInfo,0>_>
           ::FindOrAddImpl<enum_EWN_VolumeObserverMode_const_&>
                     (&this->ObserverInfo,(uint)param_1,local_res10);
  pFVar1->bIsInVolume = false;
  pUVar2 = (UWorld *)this->_padding_;
  if (pUVar2 == (UWorld *)0x0) {
    pUVar2 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
  }
  pFVar1->LeaveTime = pUVar2->TimeSeconds;
  pFVar1->DistanceToNearPlane = -1.0;
  local_10 = local_res10[0];
  local_18 = this;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnLeave,&local_18);
  return;
}

// RegisterSubsystem @ 1494a9930

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UWN_VolumeComponent::RegisterSubsystem(UWN_VolumeComponent *this)

{
  int iVar1;
  bool bVar2;
  UWorld *pUVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  UWN_CommonSubsystem *this_00;
  USubsystem *local_res8;
  
  if (this->IndexInSubsystem != -1) {
    return;
  }
  pUVar3 = (UWorld *)this->_padding_;
  if ((pUVar3 == (UWorld *)0x0) &&
     (pUVar3 = UActorComponent::GetWorld_Uncached((UActorComponent *)this), pUVar3 == (UWorld *)0x0)
     ) {
    return;
  }
  pUVar4 = UWN_CommonSubsystem::StaticClass();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar4 != (UClass *)0x0) goto LAB_1494a9997;
  }
  else if (pUVar4 != (UClass *)0x0) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
LAB_1494a9997:
    pUVar5 = UWN_CommonSubsystem::StaticClass();
    if (pUVar5 != (UClass *)0x0) {
      iVar1 = (int)pUVar5->_padding_;
      if (((int)pUVar4->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) goto LAB_1494a99c7;
    }
  }
  pUVar4 = (UClass *)0x0;
LAB_1494a99c7:
  local_res8 = FSubsystemCollectionBase::GetSubsystemInternal
                         ((FSubsystemCollectionBase *)&pUVar3->SubsystemCollection,pUVar4);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (USubsystem *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  FWeakObjectPtr::operator=(&(this->CommonSubsystem).WeakPtr,(FObjectPtr)&local_res8);
  bVar2 = FWeakObjectPtr::IsValid(&(this->CommonSubsystem).WeakPtr);
  if (bVar2) {
    this_00 = (UWN_CommonSubsystem *)FWeakObjectPtr::Get(&(this->CommonSubsystem).WeakPtr);
    UWN_CommonSubsystem::RegisterVolume(this_00,this);
  }
  return;
}

// RegisterWireFaceComponent @ 1494a9e40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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

void __thiscall UWN_VolumeComponent::RegisterWireFaceComponent(UWN_VolumeComponent *this)

{
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  UWN_VolumeWireComponent *pUVar4;
  UWN_VolumeFaceComponent *pUVar5;
  longlong *plVar6;
  undefined1 auStack_c8 [32];
  FName local_a8 [2];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  pUVar4 = (this->WireComponent).field0_0x0.DebugPtr;
  if ((pUVar4 == (UWN_VolumeWireComponent *)0x0) || (((uint)pUVar4->_padding_ >> 0x1e & 1) != 0)) {
    pFVar2 = ::FName::FName(local_a8,L"WireComponent");
    FVar1 = *pFVar2;
    if (FVar1 == (FName)0x0) {
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)this,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
    }
    pUVar3 = UWN_VolumeWireComponent::StaticClass();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_98,pUVar3);
    local_98._48_8_ = (FObjectInstancingGraph *)0x0;
    local_98._56_8_ = (UPackage *)0x0;
    local_98._24_4_ = RF_Transient;
    local_98._40_8_ = (UObject *)0x0;
    local_98[0x20] = false;
    local_98._8_8_ = this;
    local_98._16_8_ = FVar1;
    pUVar4 = (UWN_VolumeWireComponent *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar6 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar6 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar6 + 0x10))(plVar6);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar4 != (UWN_VolumeWireComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->WireComponent).field0_0x0.DebugPtr = pUVar4;
  }
  pUVar4 = (this->WireComponent).field0_0x0.DebugPtr;
  if ((pUVar4 != (UWN_VolumeWireComponent *)0x0) && (((uint)pUVar4->_padding_ >> 0x1e & 1) == 0)) {
    pUVar4 = (this->WireComponent).field0_0x0.DebugPtr;
    local_a8[0] = (FName)this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=(&(pUVar4->OwnerVolumeComponent).WeakPtr,(FObjectPtr)local_a8);
    UActorComponent::RegisterComponent((UActorComponent *)(this->WireComponent).field0_0x0.DebugPtr)
    ;
    pUVar4 = (this->WireComponent).field0_0x0.DebugPtr;
    local_a8[0].ComparisonIndex.Value = 0;
    local_a8[0].Number = 0;
    (**(code **)(pUVar4->_padding_ + 0x508))
              (pUVar4,this,&FAttachmentTransformRules::KeepRelativeTransform,0);
  }
  pUVar5 = (this->FaceComponent).field0_0x0.DebugPtr;
  if ((pUVar5 == (UWN_VolumeFaceComponent *)0x0) || (((uint)pUVar5->_padding_ >> 0x1e & 1) != 0)) {
    pFVar2 = ::FName::FName(local_a8,L"FaceComponent");
    FVar1 = *pFVar2;
    if (FVar1 == (FName)0x0) {
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)this,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
    }
    pUVar3 = UWN_VolumeFaceComponent::StaticClass();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_98,pUVar3);
    local_98._48_8_ = (FObjectInstancingGraph *)0x0;
    local_98._56_8_ = (UPackage *)0x0;
    local_98._24_4_ = RF_Transient;
    local_98._40_8_ = (UObject *)0x0;
    local_98[0x20] = false;
    local_98._8_8_ = this;
    local_98._16_8_ = FVar1;
    pUVar5 = (UWN_VolumeFaceComponent *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar6 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar6 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar6 + 0x10))(plVar6);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar5 != (UWN_VolumeFaceComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    (this->FaceComponent).field0_0x0.DebugPtr = pUVar5;
  }
  pUVar5 = (this->FaceComponent).field0_0x0.DebugPtr;
  if ((pUVar5 != (UWN_VolumeFaceComponent *)0x0) && (((uint)pUVar5->_padding_ >> 0x1e & 1) == 0)) {
    pUVar5 = (this->FaceComponent).field0_0x0.DebugPtr;
    local_a8[0] = (FName)this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=(&(pUVar5->OwnerVolumeComponent).WeakPtr,(FObjectPtr)local_a8);
    UActorComponent::RegisterComponent((UActorComponent *)(this->FaceComponent).field0_0x0.DebugPtr)
    ;
    pUVar5 = (this->FaceComponent).field0_0x0.DebugPtr;
    local_a8[0].ComparisonIndex.Value = 0;
    local_a8[0].Number = 0;
    (**(code **)(pUVar5->_padding_ + 0x508))
              (pUVar5,this,&FAttachmentTransformRules::KeepRelativeTransform,0);
    UActorComponent::MarkRenderStateDirty
              ((UActorComponent *)(this->WireComponent).field0_0x0.DebugPtr);
    UActorComponent::MarkRenderStateDirty
              ((UActorComponent *)(this->FaceComponent).field0_0x0.DebugPtr);
  }
  return;
}

// RemoveOverlapVolume @ 1494ab470

void __thiscall
UWN_VolumeComponent::RemoveOverlapVolume
          (UWN_VolumeComponent *this,TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr> param_1)

{
  FWeakObjectPtr local_res8 [4];
  
  if (*(int *)&(this->OverlapVolumeComps).Elements.field_0x8 !=
      *(int *)&(this->OverlapVolumeComps).Elements.field_0x34) {
    local_res8[0] = param_1.WeakPtr;
    TSet<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
    ::RemoveImpl<TWeakObjectPtr<UWN_VolumeComponent_const_,FWeakObjectPtr>_>
              (&this->OverlapVolumeComps,
               param_1.WeakPtr.ObjectIndex ^ param_1.WeakPtr.ObjectSerialNumber,
               (TWeakObjectPtr<UWN_VolumeComponent_const_,FWeakObjectPtr> *)local_res8);
  }
  if ((this->bIsVolumeOverlap == true) &&
     (*(int *)&(this->OverlapVolumeComps).Elements.field_0x8 ==
      *(int *)&(this->OverlapVolumeComps).Elements.field_0x34)) {
    this->bIsVolumeOverlap = false;
  }
  return;
}

// SetRadius @ 1494ad680

void __thiscall UWN_VolumeComponent::SetRadius(UWN_VolumeComponent *this,float param_1)

{
  this->Radius = (double)param_1;
  return;
}

// SetShapeType @ 1494ad780

void __thiscall UWN_VolumeComponent::SetShapeType(UWN_VolumeComponent *this,EWN_VolumeShape param_1)

{
  this->ShapeType = param_1;
  return;
}

// SetVolumeColor @ 1494ad790

void __thiscall UWN_VolumeComponent::SetVolumeColor(UWN_VolumeComponent *this,FLinearColor *param_1)

{
  FLinearColor *pFVar1;
  bool bVar2;
  undefined8 uVar3;
  FLinearColor_u_0 *pFVar4;
  FLinearColor_u_0 local_18;
  
  uVar3 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
  bVar2 = this->bValid;
  pFVar1 = &this->VolumeColor;
  *(undefined8 *)&pFVar1->field0_0x0 = *(undefined8 *)&param_1->field0_0x0;
  *(undefined8 *)((longlong)&(this->VolumeColor).field0_0x0 + 8) = uVar3;
  pFVar4 = &local_18;
  if (bVar2 != false) {
    pFVar4 = &pFVar1->field0_0x0;
  }
  local_18 = FLinearColor::Red.field0_0x0;
  uVar3 = *(undefined8 *)((longlong)&((FLinearColor *)pFVar4)->field0_0x0 + 8);
  *(undefined8 *)&pFVar1->field0_0x0 = *(undefined8 *)&((FLinearColor *)pFVar4)->field0_0x0;
  *(undefined8 *)((longlong)&(this->VolumeColor).field0_0x0 + 8) = uVar3;
  return;
}

// SetVolumeExtent @ 1494ad7d0

void __thiscall
UWN_VolumeComponent::SetVolumeExtent(UWN_VolumeComponent *this,TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  dVar3 = (param_1->field0_0x0)._s_0.X;
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  if (dVar1 <= __real_3ff0000000000000) {
    dVar1 = __real_3ff0000000000000;
  }
  if (dVar3 <= __real_3ff0000000000000) {
    dVar3 = __real_3ff0000000000000;
  }
  if (dVar2 <= __real_3ff0000000000000) {
    dVar2 = __real_3ff0000000000000;
  }
  (param_1->field0_0x0)._s_0.Z = dVar1;
  (param_1->field0_0x0)._s_0.X = dVar3;
  (param_1->field0_0x0)._s_0.Y = dVar2;
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  (this->VolumeExtent).field0_0x0._s_0.X = dVar3;
  (this->VolumeExtent).field0_0x0._s_0.Y = dVar2;
  (this->VolumeExtent).field0_0x0._s_0.Z = dVar1;
  return;
}

// StaticRegisterNativesUWN_VolumeComponent @ 1494ae390

void __cdecl UWN_VolumeComponent::StaticRegisterNativesUWN_VolumeComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 7;
  local_18.DataPtr = Z_Construct_UClass_UWN_VolumeComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UnRegisterSubsystem @ 1494af1f0

void __thiscall UWN_VolumeComponent::UnRegisterSubsystem(UWN_VolumeComponent *this)

{
  TMap<EWN_VolumeObserverMode,FWN_VolumeObserverInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EWN_VolumeObserverMode,FWN_VolumeObserverInfo,0>_>
  *pTVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  code *pcVar7;
  TMap<EWN_VolumeObserverMode,FWN_VolumeObserverInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EWN_VolumeObserverMode,FWN_VolumeObserverInfo,0>_>
  *pTVar8;
  bool bVar9;
  UWN_CommonSubsystem *this_00;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  undefined1 *puVar13;
  uint *puVar14;
  uint uVar15;
  undefined1 local_res8 [8];
  int local_res10;
  UWN_VolumeComponent *local_a8;
  undefined1 local_a0;
  TMap<EWN_VolumeObserverMode,FWN_VolumeObserverInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EWN_VolumeObserverMode,FWN_VolumeObserverInfo,0>_>
  *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TMap<EWN_VolumeObserverMode,FWN_VolumeObserverInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EWN_VolumeObserverMode,FWN_VolumeObserverInfo,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  bVar9 = FWeakObjectPtr::IsValid(&(this->CommonSubsystem).WeakPtr);
  if (bVar9) {
    iStack_90 = 0;
    uStack_8c = 1;
    pTVar1 = &this->ObserverInfo;
    puVar2 = &(this->ObserverInfo).field_0x10;
    iVar4 = *(int *)&(this->ObserverInfo).field_0x28;
    local_78 = 0;
    iStack_7c = 0;
    if (iVar4 != 0) {
      puVar14 = *(uint **)&(this->ObserverInfo).field_0x20;
      if (puVar14 == (uint *)0x0) {
        puVar14 = (uint *)puVar2;
      }
      uVar12 = *puVar14;
      while (uVar12 == 0) {
        lVar10 = (longlong)iStack_90;
        local_78 = local_78 + 0x20;
        iStack_90 = iStack_90 + 1;
        iStack_7c = iVar4;
        if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_1494af2cd;
        uVar12 = puVar14[lVar10 + 1];
      }
      uStack_8c = -uVar12 & uVar12;
      uVar3 = (ulonglong)uStack_8c * 2 + 1;
      lVar10 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_res10 = (int)lVar10;
      iStack_7c = local_res10 + -1 + local_78;
      if (iVar4 < iStack_7c) {
        iStack_7c = iVar4;
      }
    }
LAB_1494af2cd:
    uVar12 = *(uint *)&(this->ObserverInfo).field_0x28;
    uVar15 = uVar12 & 0xffffffe0;
    iStack_70 = *(int *)&(this->ObserverInfo).field_0x8 - *(int *)&(this->ObserverInfo).field_0x34;
    uStack_80 = 0xffffffff;
    TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
    TStack_60.CurrentBitIndex = iStack_7c;
    TStack_60.UnvisitedBitMask = 0xffffffff;
    iVar11 = (int)uVar12 >> 5;
    TStack_60._28_4_ = iStack_7c;
    TStack_60.BaseBitIndex = local_78;
    uStack_40 = CONCAT44(uStack_6c,iStack_70);
    local_98 = pTVar1;
    local_88 = puVar2;
    iStack_74 = iStack_7c;
    local_68 = pTVar1;
    TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
    if ((((int)uVar12 < 0) || (iVar4 < (int)uVar12)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar5 = *(uint *)&(this->ObserverInfo).field_0x28;
    if (uVar12 != uVar5) {
      puVar13 = *(undefined1 **)&(this->ObserverInfo).field_0x20;
      if (puVar13 == (undefined1 *)0x0) {
        puVar13 = puVar2;
      }
      uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar11 * 4);
      while (uVar12 == 0) {
        lVar10 = (longlong)iVar11;
        uVar15 = uVar15 + 0x20;
        iVar11 = iVar11 + 1;
        uVar12 = uVar5;
        if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11)
        goto LAB_1494af3e0;
        uVar12 = *(uint *)(puVar13 + lVar10 * 4 + 4);
      }
      uVar3 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
      lVar10 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      uVar12 = (int)lVar10 + -1 + uVar15;
      if ((int)uVar5 < (int)uVar12) {
        uVar12 = uVar5;
      }
    }
LAB_1494af3e0:
    while( true ) {
      pTVar8 = local_68;
      if (*(int *)&local_68->field_0x8 - *(int *)&local_68->field_0x34 != (int)uStack_40) {
        `TSparseArray<TSparseSetElement<TTuple<enum_EWN_VolumeObserverMode,FWN_VolumeObserverInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      lVar10 = (longlong)TStack_60.CurrentBitIndex;
      if (((TStack_60.CurrentBitIndex == uVar12) &&
          (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) && (pTVar8 == pTVar1)
         ) break;
      lVar6 = *(longlong *)pTVar8;
      if (*(char *)(lVar6 + 8 + lVar10 * 0x30) != '\0') {
        local_a0 = *(undefined1 *)(lVar6 + lVar10 * 0x30);
        local_a8 = this;
        TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
                  ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnLeave,&local_a8)
        ;
      }
      *(undefined1 *)(lVar6 + 8 + lVar10 * 0x30) = 0;
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      *(undefined4 *)(lVar6 + 0x20 + lVar10 * 0x30) = 0xbf800000;
      *(undefined8 *)(lVar6 + 0x10 + lVar10 * 0x30) = 0xbff0000000000000;
      *(undefined8 *)(lVar6 + 0x18 + lVar10 * 0x30) = 0xbff0000000000000;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    }
    this_00 = (UWN_CommonSubsystem *)FWeakObjectPtr::Get(&(this->CommonSubsystem).WeakPtr);
    UWN_CommonSubsystem::UnRegisterVolume(this_00,this);
  }
  return;
}

// UpdateVolumeColor @ 1494b1040

void __thiscall UWN_VolumeComponent::UpdateVolumeColor(UWN_VolumeComponent *this)

{
  undefined8 uVar1;
  FLinearColor_u_0 *pFVar2;
  FLinearColor_u_0 local_18;
  
  local_18 = FLinearColor::Red.field0_0x0;
  pFVar2 = &(this->VolumeColor).field0_0x0;
  if (this->bValid == false) {
    pFVar2 = &local_18;
  }
  uVar1 = *(undefined8 *)((longlong)&((FLinearColor *)pFVar2)->field0_0x0 + 8);
  *(undefined8 *)&(this->VolumeColor).field0_0x0 =
       *(undefined8 *)&((FLinearColor *)pFVar2)->field0_0x0;
  *(undefined8 *)((longlong)&(this->VolumeColor).field0_0x0 + 8) = uVar1;
  return;
}

// execGetDisplayShadedVolume @ 1494b2f00

void __cdecl
UWN_VolumeComponent::execGetDisplayShadedVolume(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[0x23].field_0x9;
  return;
}

// execGetDistanceFromNearPlane @ 1494b2f30

void __cdecl
UWN_VolumeComponent::execGetDistanceFromNearPlane(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  byte local_res8 [8];
  
  local_res8[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar6 = __real_bf800000;
  if (*(int *)&param_1[0x28].field_0x10 != *(int *)&param_1[0x29].field_0x14) {
    puVar5 = *(undefined1 **)&param_1[0x29].field_0x20;
    if (*(undefined1 **)&param_1[0x29].field_0x20 == (undefined1 *)0x0) {
      puVar5 = &param_1[0x29].field_0x18;
    }
    iVar2 = *(int *)(puVar5 + ((ulonglong)(*(int *)(param_1 + 0x2a) - 1) & (ulonglong)local_res8[0])
                              * 4);
    if (iVar2 != -1) {
      do {
        pbVar3 = (byte *)((longlong)iVar2 * 0x30 + *(longlong *)&param_1[0x28].field_0x8);
        if (*pbVar3 == local_res8[0]) {
          pbVar4 = pbVar3 + 8;
          if (pbVar3 == (byte *)0x0) {
            pbVar4 = (byte *)0x0;
          }
          if ((pbVar4 != (byte *)0x0) && (*pbVar4 != 0)) {
            uVar6 = *(undefined4 *)(pbVar4 + 0x18);
          }
          break;
        }
        iVar2 = *(int *)(pbVar3 + 0x28);
      } while (iVar2 != -1);
    }
  }
  *(undefined4 *)param_3 = uVar6;
  return;
}

// execGetTimeEnter @ 1494b33b0

void __cdecl UWN_VolumeComponent::execGetTimeEnter(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  byte local_res8 [8];
  
  local_res8[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar6 = __real_bff0000000000000;
  if (*(int *)&param_1[0x28].field_0x10 != *(int *)&param_1[0x29].field_0x14) {
    puVar5 = *(undefined1 **)&param_1[0x29].field_0x20;
    if (*(undefined1 **)&param_1[0x29].field_0x20 == (undefined1 *)0x0) {
      puVar5 = &param_1[0x29].field_0x18;
    }
    iVar2 = *(int *)(puVar5 + ((ulonglong)(*(int *)(param_1 + 0x2a) - 1) & (ulonglong)local_res8[0])
                              * 4);
    if (iVar2 != -1) {
      do {
        pbVar3 = (byte *)((longlong)iVar2 * 0x30 + *(longlong *)&param_1[0x28].field_0x8);
        if (*pbVar3 == local_res8[0]) {
          pbVar4 = pbVar3 + 8;
          if (pbVar3 == (byte *)0x0) {
            pbVar4 = (byte *)0x0;
          }
          if ((pbVar4 != (byte *)0x0) && (*pbVar4 == 1)) {
            uVar6 = *(undefined8 *)(pbVar4 + 8);
          }
          break;
        }
        iVar2 = *(int *)(pbVar3 + 0x28);
      } while (iVar2 != -1);
    }
  }
  *(undefined8 *)param_3 = uVar6;
  return;
}

// execGetTimeLeave @ 1494b3730

void __cdecl UWN_VolumeComponent::execGetTimeLeave(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  byte local_res8 [8];
  
  local_res8[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar6 = __real_bff0000000000000;
  if (*(int *)&param_1[0x28].field_0x10 != *(int *)&param_1[0x29].field_0x14) {
    puVar5 = *(undefined1 **)&param_1[0x29].field_0x20;
    if (*(undefined1 **)&param_1[0x29].field_0x20 == (undefined1 *)0x0) {
      puVar5 = &param_1[0x29].field_0x18;
    }
    iVar2 = *(int *)(puVar5 + ((ulonglong)(*(int *)(param_1 + 0x2a) - 1) & (ulonglong)local_res8[0])
                              * 4);
    if (iVar2 != -1) {
      do {
        pbVar3 = (byte *)((longlong)iVar2 * 0x30 + *(longlong *)&param_1[0x28].field_0x8);
        if (*pbVar3 == local_res8[0]) {
          pbVar4 = pbVar3 + 8;
          if (pbVar3 == (byte *)0x0) {
            pbVar4 = (byte *)0x0;
          }
          if ((pbVar4 != (byte *)0x0) && (*pbVar4 == 0)) {
            uVar6 = *(undefined8 *)(pbVar4 + 0x10);
          }
          break;
        }
        iVar2 = *(int *)(pbVar3 + 0x28);
      } while (iVar2 != -1);
    }
  }
  *(undefined8 *)param_3 = uVar6;
  return;
}

// execGetTimeSinceEnter @ 1494b3af0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UWN_VolumeComponent::execGetTimeSinceEnter(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  byte *pbVar3;
  UWorld *pUVar4;
  undefined1 *puVar5;
  byte *pbVar6;
  double dVar7;
  byte local_res8 [8];
  
  local_res8[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  dVar7 = __real_bff0000000000000;
  if (*(int *)&param_1[0x28].field_0x10 != *(int *)&param_1[0x29].field_0x14) {
    puVar5 = *(undefined1 **)&param_1[0x29].field_0x20;
    if (*(undefined1 **)&param_1[0x29].field_0x20 == (undefined1 *)0x0) {
      puVar5 = &param_1[0x29].field_0x18;
    }
    iVar2 = *(int *)(puVar5 + ((ulonglong)(*(int *)(param_1 + 0x2a) - 1) & (ulonglong)local_res8[0])
                              * 4);
    if (iVar2 != -1) {
      do {
        pbVar3 = (byte *)((longlong)iVar2 * 0x30 + *(longlong *)&param_1[0x28].field_0x8);
        if (*pbVar3 == local_res8[0]) {
          pbVar6 = pbVar3 + 8;
          if (pbVar3 == (byte *)0x0) {
            pbVar6 = (byte *)0x0;
          }
          if ((pbVar6 != (byte *)0x0) && (*pbVar6 == 1)) {
            pUVar4 = *(UWorld **)&param_1[4].field_0x10;
            if (pUVar4 == (UWorld *)0x0) {
              pUVar4 = UActorComponent::GetWorld_Uncached((UActorComponent *)param_1);
            }
            dVar7 = pUVar4->TimeSeconds - *(double *)(pbVar6 + 8);
          }
          break;
        }
        iVar2 = *(int *)(pbVar3 + 0x28);
      } while (iVar2 != -1);
    }
  }
  *(double *)param_3 = dVar7;
  return;
}

// execGetTimeSinceLeave @ 1494b3ed0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UWN_VolumeComponent::execGetTimeSinceLeave(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  byte *pbVar3;
  UWorld *pUVar4;
  undefined1 *puVar5;
  byte *pbVar6;
  double dVar7;
  byte local_res8 [8];
  
  local_res8[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  dVar7 = __real_bff0000000000000;
  if (*(int *)&param_1[0x28].field_0x10 != *(int *)&param_1[0x29].field_0x14) {
    puVar5 = *(undefined1 **)&param_1[0x29].field_0x20;
    if (*(undefined1 **)&param_1[0x29].field_0x20 == (undefined1 *)0x0) {
      puVar5 = &param_1[0x29].field_0x18;
    }
    iVar2 = *(int *)(puVar5 + ((ulonglong)(*(int *)(param_1 + 0x2a) - 1) & (ulonglong)local_res8[0])
                              * 4);
    if (iVar2 != -1) {
      do {
        pbVar3 = (byte *)((longlong)iVar2 * 0x30 + *(longlong *)&param_1[0x28].field_0x8);
        if (*pbVar3 == local_res8[0]) {
          pbVar6 = pbVar3 + 8;
          if (pbVar3 == (byte *)0x0) {
            pbVar6 = (byte *)0x0;
          }
          if ((pbVar6 != (byte *)0x0) && (*pbVar6 == 0)) {
            pUVar4 = *(UWorld **)&param_1[4].field_0x10;
            if (pUVar4 == (UWorld *)0x0) {
              pUVar4 = UActorComponent::GetWorld_Uncached((UActorComponent *)param_1);
            }
            dVar7 = pUVar4->TimeSeconds - *(double *)(pbVar6 + 0x10);
          }
          break;
        }
        iVar2 = *(int *)(pbVar3 + 0x28);
      } while (iVar2 != -1);
    }
  }
  *(double *)param_3 = dVar7;
  return;
}

// execGetVolumeColor @ 1494b4010

void __cdecl UWN_VolumeComponent::execGetVolumeColor(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = *(undefined8 *)(param_1 + 0x23);
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[0x22].field_0x20;
  *(undefined8 *)((longlong)param_3 + 8) = uVar1;
  return;
}

