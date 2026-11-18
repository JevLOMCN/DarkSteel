// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 124

// StaticClass @ 146a45250

UClass * __cdecl UWidgetComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWidgetComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"WidgetComponent",
               &Z_Registration_Info_UClass_UWidgetComponent.InnerSingleton,
               StaticRegisterNativesUWidgetComponent,0x750,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UWidgetComponent>,
               InternalVTableHelperCtorCaller<UWidgetComponent>,local_res8,
               UMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWidgetComponent.InnerSingleton;
}

// UWidgetComponent @ 146a56e70

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

UWidgetComponent * __thiscall
UWidgetComponent::UWidgetComponent(UWidgetComponent *this,FVTableHelper *param_1)

{
  UMeshComponent::UMeshComponent((UMeshComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  *(undefined8 *)&this->OnMaterialInstanceUpdated = 0;
  *(undefined8 *)&(this->OnMaterialInstanceUpdated).field_0x8 = 0;
  *(undefined8 *)&(this->OnMaterialInstanceUpdated).field_0x10 = 0;
  (this->WidgetClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->OwnerPlayer).field0_0x0.DebugPtr = (ULocalPlayer *)0x0;
  (this->BodySetup).field0_0x0.DebugPtr = (UBodySetup *)0x0;
  (this->TranslucentMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->TranslucentMaterial_OneSided).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->OpaqueMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->OpaqueMaterial_OneSided).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->MaskedMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->MaskedMaterial_OneSided).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->RenderTarget).field0_0x0.DebugPtr = (UTextureRenderTarget2D *)0x0;
  (this->MaterialInstance).field0_0x0.DebugPtr = (UMaterialInstanceDynamic *)0x0;
  (this->SharedLayerName).ComparisonIndex = 0;
  (this->SharedLayerName).Number = 0;
  (this->SlateWindow).Object = (SVirtualWindow *)0x0;
  (this->SlateWindow).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->Widget).field0_0x0.DebugPtr = (UUserWidget *)0x0;
  (this->SlateWidget).Object = (SWidget *)0x0;
  (this->SlateWidget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&(this->UsersEnteredWorldWidget).Elements = 0;
  *(undefined8 *)&(this->UsersEnteredWorldWidget).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->UsersEnteredWorldWidget).Elements.field_0x20 = 0;
  *(undefined8 *)&(this->OnMaterialInstanceUpdated).field_0x18 = 2;
  *(undefined4 *)&(this->UsersEnteredWorldWidget).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->UsersEnteredWorldWidget).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->UsersEnteredWorldWidget).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->UsersEnteredWorldWidget).Elements.field_0x30 = 0xffffffff;
  (this->UsersEnteredWorldWidget).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->UsersEnteredWorldWidget).HashSize = 0;
  (this->CurrentSlateWidget).Object = (SWidget *)0x0;
  (this->CurrentSlateWidget).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// UWidgetComponent @ 146a56fc0

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

UWidgetComponent * __thiscall
UWidgetComponent::UWidgetComponent(UWidgetComponent *this,FObjectInitializer *param_1)

{
  longlong lVar1;
  FLinearColor FVar2;
  TVector2<double> TVar3;
  FName *pFVar4;
  bool bVar5;
  FName local_res8;
  TRotator<double> local_28;
  
  UMeshComponent::UMeshComponent((UMeshComponent *)this,param_1);
  this->bManuallyRedraw = false;
  this->bRedrawRequested = true;
  this->RedrawTime = 0.0;
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined8 *)&this->OnMaterialInstanceUpdated = 0;
  *(undefined8 *)&(this->OnMaterialInstanceUpdated).field_0x8 = 0;
  *(undefined8 *)&(this->OnMaterialInstanceUpdated).field_0x10 = 0;
  *(undefined8 *)&(this->OnMaterialInstanceUpdated).field_0x18 = 2;
  (this->WidgetClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->DrawSize).field0_0x0._s_0.X = 500;
  (this->DrawSize).field0_0x0._s_0.Y = 500;
  (this->CurrentDrawSize).field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->OwnerPlayer).field0_0x0.DebugPtr = (ULocalPlayer *)0x0;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  this->LastWidgetRenderTime = 0.0;
  this->bUseInvalidationInWorldSpace = false;
  this->bReceiveHardwareInput = false;
  this->bWindowFocusable = true;
  this->WindowVisibility = SelfHitTestInvisible;
  this->bApplyGammaCorrection = false;
  (this->BackgroundColor).field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::Transparent.field0_0x0;
  FVar2 = FLinearColor::White;
  this->OpacityFromTexture = 1.0;
  this->BlendMode = Masked;
  this->bIsTwoSided = false;
  (this->TintColorAndOpacity).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar2.field0_0x0;
  (this->BodySetup).field0_0x0.DebugPtr = (UBodySetup *)0x0;
  (this->TranslucentMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->TranslucentMaterial_OneSided).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->OpaqueMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->OpaqueMaterial_OneSided).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->MaskedMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->MaskedMaterial_OneSided).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->RenderTarget).field0_0x0.DebugPtr = (UTextureRenderTarget2D *)0x0;
  (this->MaterialInstance).field0_0x0.DebugPtr = (UMaterialInstanceDynamic *)0x0;
  this->TickWhenOffscreen = false;
  ::FName::FName(&this->SharedLayerName,L"WidgetComponentScreenLayer");
  this->LayerZOrder = -100;
  this->CylinderArcAngle = 180.0;
  this->GeometryMode = Plane;
  bVar5 = bUseAutomaticTickModeByDefault != false;
  (this->SlateWindow).Object = (SVirtualWindow *)0x0;
  (this->SlateWindow).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->Widget).field0_0x0.DebugPtr = (UUserWidget *)0x0;
  (this->SlateWidget).Object = (SWidget *)0x0;
  (this->SlateWidget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&(this->UsersEnteredWorldWidget).Elements = 0;
  *(undefined8 *)&(this->UsersEnteredWorldWidget).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->UsersEnteredWorldWidget).Elements.field_0x20 = 0;
  this->TickMode = bVar5 + Enabled;
  *(undefined4 *)&(this->UsersEnteredWorldWidget).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->UsersEnteredWorldWidget).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->UsersEnteredWorldWidget).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->UsersEnteredWorldWidget).Elements.field_0x34 = 0;
  (this->UsersEnteredWorldWidget).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->UsersEnteredWorldWidget).HashSize = 0;
  this->field_0x42 = this->field_0x42 | 2;
  this->field_0x99 = this->field_0x99 | 0x80;
  (this->CurrentSlateWidget).Object = (SWidget *)0x0;
  (this->CurrentSlateWidget).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->bRenderCleared = false;
  this->bOnWidgetVisibilityChangedRegistered = false;
  local_28.Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  local_28.Yaw = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  local_28.Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  USceneComponent::SetRelativeRotation
            ((USceneComponent *)this,&local_28,false,(FHitResult *)0x0,None);
  pFVar4 = ::FName::FName(&local_res8,L"UI");
  FBodyInstance::SetCollisionProfileName((FBodyInstance *)&this->field_0x390,*pFVar4);
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(int *)(lVar1 + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ConstructorHelpers::FObjectFinder<UMaterialInterface>::FObjectFinder<UMaterialInterface>
                (&TranslucentMaterial_Finder,
                 L"/Engine/EngineMaterials/Widget3DPassThrough_Translucent",0);
      atexit(`UWidgetComponent::UWidgetComponent'::__l2::
             _dynamic_atexit_destructor_for__TranslucentMaterial_Finder__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (*(int *)(lVar1 + 0x9d4c) < ::_TSS1) {
    _Init_thread_header(&::_TSS1);
    if (::_TSS1 == -1) {
      ConstructorHelpers::FObjectFinder<UMaterialInterface>::FObjectFinder<UMaterialInterface>
                (&TranslucentMaterial_OneSided_Finder,
                 L"/Engine/EngineMaterials/Widget3DPassThrough_Translucent_OneSided",0);
      atexit(`UWidgetComponent::UWidgetComponent'::__l2::
             _dynamic_atexit_destructor_for__TranslucentMaterial_OneSided_Finder__);
      _Init_thread_footer(&::_TSS1);
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (TranslucentMaterial_Finder.Object.field0_0x0 != (UMaterialInterface *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)TranslucentMaterial_Finder.Object.field0_0x0);
  }
  (this->TranslucentMaterial).field0_0x0.ObjectPtr.field0_0x0 =
       (FObjectPtr_u_0)TranslucentMaterial_Finder.Object.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (TranslucentMaterial_OneSided_Finder.Object.field0_0x0 != (UMaterialInterface *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)TranslucentMaterial_OneSided_Finder.Object.field0_0x0);
  }
  (this->TranslucentMaterial_OneSided).field0_0x0.ObjectPtr.field0_0x0 =
       (FObjectPtr_u_0)TranslucentMaterial_OneSided_Finder.Object.field0_0x0;
  if (*(int *)(lVar1 + 0x9d4c) < ::_TSS2) {
    _Init_thread_header(&::_TSS2);
    if (::_TSS2 == -1) {
      ConstructorHelpers::FObjectFinder<UMaterialInterface>::FObjectFinder<UMaterialInterface>
                (&OpaqueMaterial_Finder,L"/Engine/EngineMaterials/Widget3DPassThrough_Opaque",0);
      atexit(`UWidgetComponent::UWidgetComponent'::__l2::
             _dynamic_atexit_destructor_for__OpaqueMaterial_Finder__);
      _Init_thread_footer(&::_TSS2);
    }
  }
  if (*(int *)(lVar1 + 0x9d4c) < ::_TSS3) {
    _Init_thread_header(&::_TSS3);
    if (::_TSS3 == -1) {
      ConstructorHelpers::FObjectFinder<UMaterialInterface>::FObjectFinder<UMaterialInterface>
                (&OpaqueMaterial_OneSided_Finder,
                 L"/Engine/EngineMaterials/Widget3DPassThrough_Opaque_OneSided",0);
      atexit(`UWidgetComponent::UWidgetComponent'::__l2::
             _dynamic_atexit_destructor_for__OpaqueMaterial_OneSided_Finder__);
      _Init_thread_footer(&::_TSS3);
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (OpaqueMaterial_Finder.Object.field0_0x0 != (UMaterialInterface *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)OpaqueMaterial_Finder.Object.field0_0x0);
  }
  (this->OpaqueMaterial).field0_0x0.ObjectPtr.field0_0x0 =
       (FObjectPtr_u_0)OpaqueMaterial_Finder.Object.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (OpaqueMaterial_OneSided_Finder.Object.field0_0x0 != (UMaterialInterface *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)OpaqueMaterial_OneSided_Finder.Object.field0_0x0);
  }
  (this->OpaqueMaterial_OneSided).field0_0x0.ObjectPtr.field0_0x0 =
       (FObjectPtr_u_0)OpaqueMaterial_OneSided_Finder.Object.field0_0x0;
  if (*(int *)(lVar1 + 0x9d4c) < ::_TSS4) {
    _Init_thread_header(&::_TSS4);
    if (::_TSS4 == -1) {
      ConstructorHelpers::FObjectFinder<UMaterialInterface>::FObjectFinder<UMaterialInterface>
                (&MaskedMaterial_Finder,L"/Engine/EngineMaterials/Widget3DPassThrough_Masked",0);
      atexit(`UWidgetComponent::UWidgetComponent'::__l2::
             _dynamic_atexit_destructor_for__MaskedMaterial_Finder__);
      _Init_thread_footer(&::_TSS4);
    }
  }
  if (*(int *)(lVar1 + 0x9d4c) < ::_TSS5) {
    _Init_thread_header(&::_TSS5);
    if (::_TSS5 == -1) {
      ConstructorHelpers::FObjectFinder<UMaterialInterface>::FObjectFinder<UMaterialInterface>
                (&MaskedMaterial_OneSided_Finder,
                 L"/Engine/EngineMaterials/Widget3DPassThrough_Masked_OneSided",0);
      atexit(`UWidgetComponent::UWidgetComponent'::__l2::
             _dynamic_atexit_destructor_for__MaskedMaterial_OneSided_Finder__);
      _Init_thread_footer(&::_TSS5);
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (MaskedMaterial_Finder.Object.field0_0x0 != (UMaterialInterface *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)MaskedMaterial_Finder.Object.field0_0x0);
  }
  (this->MaskedMaterial).field0_0x0.ObjectPtr.field0_0x0 =
       (FObjectPtr_u_0)MaskedMaterial_Finder.Object.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (MaskedMaterial_OneSided_Finder.Object.field0_0x0 != (UMaterialInterface *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)MaskedMaterial_OneSided_Finder.Object.field0_0x0);
  }
  (this->MaskedMaterial_OneSided).field0_0x0.ObjectPtr.field0_0x0 =
       (FObjectPtr_u_0)MaskedMaterial_OneSided_Finder.Object.field0_0x0;
  TVar3 = UE::Math::TVector2<double>::ZeroVector;
  this->field_0x281 = this->field_0x281 & 0xef;
  this->Space = World;
  this->TimingPolicy = RealTime;
  (this->LastLocalHitLocation).field0_0x0._s_0 = (TVector2<double>_u_0_s_0)TVar3.field0_0x0;
  (this->Pivot).field0_0x0._s_0.X = 0.5;
  (this->Pivot).field0_0x0._s_0.Y = 0.5;
  this->bAddedToScreen = false;
  return this;
}

// ~UWidgetComponent @ 146a58b30

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

void __thiscall UWidgetComponent::~UWidgetComponent(UWidgetComponent *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  ForElementType<FSetElementId> FVar4;
  void *pvVar5;
  
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  pTVar3 = (this->CurrentSlateWidget).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  (this->UsersEnteredWorldWidget).HashSize = 0;
  FVar4 = (this->UsersEnteredWorldWidget).Hash.SecondaryData;
  if (FVar4 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar4);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->UsersEnteredWorldWidget).Elements);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SlateWidget).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SlateWindow).SharedReferenceCount.ReferenceController);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnMaterialInstanceUpdated).field_0x8,
             *(int *)&(this->OnMaterialInstanceUpdated).field_0x10);
  pvVar5 = *(void **)&(this->OnMaterialInstanceUpdated).field_0x8;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnMaterialInstanceUpdated);
  UMeshComponent::~UMeshComponent((UMeshComponent *)this);
  return;
}

// AddWidgetToScreen @ 146a5d920

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

void __thiscall UWidgetComponent::AddWidgetToScreen(UWidgetComponent *this,ULocalPlayer *param_1)

{
  int iVar1;
  IGameLayerManager *pIVar2;
  IGameLayerManager IVar3;
  TReferenceControllerBase<1> *pTVar4;
  SWorldWidgetScreenLayer *this_00;
  UUserWidget *this_01;
  code *pcVar5;
  atomic<int> aVar6;
  bool bVar7;
  atomic<int> aVar8;
  UWorld *this_02;
  UGameViewportClient *pUVar9;
  FWorldWidgetScreenLayer *pFVar10;
  TSharedRef<SWidget,1> *pTVar11;
  atomic<int> *paVar12;
  TReferenceControllerBase<1> *pTVar13;
  TReferenceControllerBase<1> *pTVar14;
  FWeakObjectPtr local_res8;
  ULocalPlayer *local_res10;
  TRawPtrProxy<FWorldWidgetScreenLayer> local_res18;
  UWidgetComponent *local_res20;
  FWorldWidgetScreenLayer *local_e8;
  FSharedReferencer<1> local_e0;
  undefined8 local_d8;
  FSharedReferencer<1> local_d0;
  undefined8 local_c8;
  FSharedReferencer<1> local_c0;
  FWorldWidgetScreenLayer *local_b8;
  TReferenceControllerBase<1> *local_b0;
  FLocalPlayerContext local_a8;
  TSharedRef<FWorldWidgetScreenLayer,1> local_98;
  FWorldWidgetScreenLayer *local_88;
  TReferenceControllerBase<1> *pTStack_80;
  TSharedRef<SWidget,1> local_78;
  TSharedRef<SWidget,1> local_68 [2];
  
  if (((((this->Widget).field0_0x0.DebugPtr != (UUserWidget *)0x0) ||
       ((this->SlateWidget).Object != (SWidget *)0x0)) &&
      ((this_02 = *(UWorld **)&this->field_0xb0, local_res10 = param_1, this_02 != (UWorld *)0x0 ||
       (this_02 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
       this_02 != (UWorld *)0x0)))) &&
     ((bVar7 = UWorld::IsGameWorld(this_02), bVar7 &&
      (pUVar9 = UWorld::GetGameViewport(this_02), pUVar9 != (UGameViewportClient *)0x0)))) {
    pTVar14 = (pUVar9->GameLayerManagerPtr).WeakReferenceCount.ReferenceController;
    if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
      aVar6 = pTVar14->SharedReferenceCount;
      do {
        if (aVar6 == (atomic<int>)0x0) {
          pTVar14 = (TReferenceControllerBase<1> *)0x0;
          goto LAB_146a5d9dc;
        }
        LOCK();
        aVar8 = pTVar14->SharedReferenceCount;
        bVar7 = aVar6 == aVar8;
        if (bVar7) {
          pTVar14->SharedReferenceCount = (atomic<int>)((int)aVar6 + 1);
          aVar8 = aVar6;
        }
        UNLOCK();
        aVar6 = aVar8;
      } while (!bVar7);
      pIVar2 = (pUVar9->GameLayerManagerPtr).Object;
      if (pIVar2 != (IGameLayerManager *)0x0) {
        local_e0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        FLocalPlayerContext::FLocalPlayerContext(&local_a8,param_1,this_02);
        (**(code **)((longlong)*pIVar2 + 0x48))(pIVar2,&local_b8,param_1,&this->SharedLayerName);
        if (local_b8 == (FWorldWidgetScreenLayer *)0x0) {
          pFVar10 = ::operator_new(0x48);
          if (pFVar10 == (FWorldWidgetScreenLayer *)0x0) {
            pFVar10 = (FWorldWidgetScreenLayer *)0x0;
          }
          else {
            pFVar10->_padding_ = 0;
            pFVar10->_padding_ = 0;
            pFVar10->_padding_ = (longlong)&___7FWorldWidgetScreenLayer__6B_;
            FLocalPlayerContext::FLocalPlayerContext(&pFVar10->OwningPlayer);
            (pFVar10->ScreenLayerPtr).Object = (SWorldWidgetScreenLayer *)0x0;
            (pFVar10->ScreenLayerPtr).WeakReferenceCount.ReferenceController =
                 (TReferenceControllerBase<1> *)0x0;
            (pFVar10->Components).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            (pFVar10->Components).ArrayNum = 0;
            (pFVar10->Components).ArrayMax = 0;
            (pFVar10->OwningPlayer).LocalPlayer.WeakPtr = local_a8.LocalPlayer.WeakPtr;
            (pFVar10->OwningPlayer).World.WeakPtr = local_a8.World.WeakPtr;
            if ((((pFVar10->_padding_ != 0) && (pFVar10->_padding_ != 0)) &&
                (0 < *(int *)(pFVar10->_padding_ + 8))) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("!InObject || !InObject->DoesSharedInstanceExist()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x7a5,L"Trying to share an already-shared object"), bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          local_res18.Object = pFVar10;
          TSharedRef<FWorldWidgetScreenLayer,1>::
          TSharedRef<FWorldWidgetScreenLayer,1><FWorldWidgetScreenLayer>(&local_98,&local_res18);
          IVar3 = *pIVar2;
          iVar1 = this->LayerZOrder;
          local_88 = local_98.Object;
          pTStack_80 = local_98.SharedReferenceCount.ReferenceController;
          if (local_98.SharedReferenceCount.ReferenceController ==
              (TReferenceControllerBase<1> *)0x0) {
            paVar12 = (atomic<int> *)&DAT_00000008;
          }
          else {
            paVar12 = &(local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
            LOCK();
            *paVar12 = (atomic<int>)((int)*paVar12 + 1);
            UNLOCK();
          }
          (**(code **)((longlong)IVar3 + 0x50))
                    (pIVar2,local_res10,&this->SharedLayerName,&local_88,iVar1);
          local_d0.ReferenceController = local_98.SharedReferenceCount.ReferenceController;
          if (local_98.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            *paVar12 = (atomic<int>)((int)*paVar12 + 1);
            UNLOCK();
          }
          local_e8 = local_98.Object;
          local_d8 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(&local_e0,&local_d0);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_d0.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_98.SharedReferenceCount.ReferenceController);
        }
        else {
          local_c0.ReferenceController = local_b0;
          if (local_b0 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            local_b0->SharedReferenceCount = (atomic<int>)((int)local_b0->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_e8 = local_b8;
          local_c8 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(&local_e0,&local_c0);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_c0.ReferenceController);
        }
        this->bAddedToScreen = true;
        if ((local_e8 == (FWorldWidgetScreenLayer *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        local_res8.ObjectIndex = 0;
        local_res8.ObjectSerialNumber = 0;
        local_res20 = this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res20);
        TArray<TWeakObjectPtr<UWidgetComponent,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::
        AddUniqueImpl<TWeakObjectPtr<UWidgetComponent,FWeakObjectPtr>_>
                  (&local_e8->Components,
                   (TWeakObjectPtr<UWidgetComponent,FWeakObjectPtr> *)&local_res8);
        pTVar4 = (local_e8->ScreenLayerPtr).WeakReferenceCount.ReferenceController;
        pTVar13 = pTVar4;
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          aVar6 = pTVar4->SharedReferenceCount;
          do {
            pTVar13 = (TReferenceControllerBase<1> *)0x0;
            if (aVar6 == (atomic<int>)0x0) goto LAB_146a5dc61;
            LOCK();
            aVar8 = pTVar4->SharedReferenceCount;
            bVar7 = aVar6 == aVar8;
            if (bVar7) {
              pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar6 + 1);
              aVar8 = aVar6;
            }
            UNLOCK();
            aVar6 = aVar8;
          } while (!bVar7);
          this_00 = (local_e8->ScreenLayerPtr).Object;
          pTVar13 = pTVar4;
          if (this_00 != (SWorldWidgetScreenLayer *)0x0) {
            this_01 = (this->Widget).field0_0x0.DebugPtr;
            if (this_01 == (UUserWidget *)0x0) {
              if ((this->SlateWidget).Object != (SWidget *)0x0) {
                pTVar11 = TSharedPtr<SWidget,1>::ToSharedRef(&this->SlateWidget,local_68);
                SWorldWidgetScreenLayer::AddComponent(this_00,(USceneComponent *)this,pTVar11);
              }
            }
            else {
              pTVar11 = UWidget::TakeWidget((UWidget *)this_01,&local_78);
              SWorldWidgetScreenLayer::AddComponent(this_00,(USceneComponent *)this,pTVar11);
            }
          }
        }
LAB_146a5dc61:
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13)
        ;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_b0);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_e0.ReferenceController);
      }
    }
LAB_146a5d9dc:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
  }
  return;
}

// ApplyComponentInstanceData @ 146a5dea0

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
UWidgetComponent::ApplyComponentInstanceData
          (UWidgetComponent *this,FWidgetComponentInstanceData *param_1)

{
  int iVar1;
  UTextureRenderTarget2D *pUVar2;
  UMaterialInstanceDynamic *this_00;
  code *pcVar3;
  bool bVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  FName *pFVar7;
  UClass *pUVar8;
  UClass *pUVar9;
  FName local_res8;
  
  if (param_1 == (FWidgetComponentInstanceData *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("WidgetInstanceData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\WidgetComponent.cpp"
                       ,0x63d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pUVar8 = (this->WidgetClass).Class.field0_0x0.DebugPtr;
  pUVar9 = (UClass *)0x0;
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar8 != (UClass *)0x0) goto LAB_146a5df09;
  }
  else if (pUVar8 != (UClass *)0x0) {
    UE::GC::MarkAsReachable((UObject *)pUVar8);
LAB_146a5df09:
    pUVar5 = UUserWidget::StaticClass();
    if (pUVar5 != (UClass *)0x0) {
      iVar1 = (int)pUVar5->_padding_;
      if (((int)pUVar8->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) goto LAB_146a5df3a;
    }
  }
  pUVar8 = pUVar9;
LAB_146a5df3a:
  pUVar5 = (param_1->WidgetClass).Class.field0_0x0.DebugPtr;
  if (pUVar5 != (UClass *)0x0) {
    pUVar6 = UUserWidget::StaticClass();
    if (pUVar6 != (UClass *)0x0) {
      iVar1 = (int)pUVar6->_padding_;
      if (((int)pUVar5->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar6->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        pUVar9 = (param_1->WidgetClass).Class.field0_0x0.DebugPtr;
      }
    }
  }
  if (pUVar8 == pUVar9) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar2 = (param_1->RenderTarget).field0_0x0.DebugPtr,
       pUVar2 != (UTextureRenderTarget2D *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    pUVar2 = (param_1->RenderTarget).field0_0x0.DebugPtr;
    (this->RenderTarget).field0_0x0.DebugPtr = pUVar2;
    this_00 = (this->MaterialInstance).field0_0x0.DebugPtr;
    if ((this_00 != (UMaterialInstanceDynamic *)0x0) && (pUVar2 != (UTextureRenderTarget2D *)0x0)) {
      pFVar7 = ::FName::FName(&local_res8,"SlateUI");
      UMaterialInstanceDynamic::SetTextureParameterValue(this_00,*pFVar7,(UTexture *)pUVar2);
    }
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  }
  return;
}

// BeginPlay @ 146a5e920

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

void __thiscall UWidgetComponent::BeginPlay(UWidgetComponent *this)

{
  (**(code **)(*(longlong *)this + 0x420))(this,this->TickMode != Disabled);
  (**(code **)(*(longlong *)this + 0xb28))(this);
  UPrimitiveComponent::BeginPlay((UPrimitiveComponent *)this);
  (this->CurrentDrawSize).field0_0x0 = (this->DrawSize).field0_0x0;
  UpdateBodySetup(this,true);
  UActorComponent::RecreatePhysicsState((UActorComponent *)this);
  return;
}

// CalcBounds @ 146a5fcb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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

TBoxSphereBounds<double,double> * __thiscall
UWidgetComponent::CalcBounds
          (UWidgetComponent *this,TBoxSphereBounds<double,double> *__return_storage_ptr__,
          TTransform<double> *param_1)

{
  int iVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  double dVar10;
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  undefined1 in_XMM1 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar19;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar20;
  double dVar21;
  double dVar22;
  undefined1 auVar23 [16];
  undefined4 uVar24;
  TVector<double>_u_0 local_198;
  undefined1 local_180 [16];
  undefined8 uStack_170;
  undefined8 local_168;
  double dStack_138;
  TMatrix<double> local_128 [2];
  
  if (this->Space == Screen) {
    local_168 = 0;
    local_198._s_0.Z = 0.0;
    local_198._s_0.X = 0.0;
    local_198._s_0.Y = 0.0;
    local_180 = ZEXT816(0);
    uStack_170 = 0;
    UE::Math::TTransform<double>::ToMatrixWithScale(param_1,local_128);
    UE::Math::TBoxSphereBounds<double,double>::TransformBy
              ((TBoxSphereBounds<double,double> *)&local_198._s_0,__return_storage_ptr__,local_128);
  }
  else {
    iVar1 = (this->CurrentDrawSize).field0_0x0._s_0.X;
    dVar22 = (double)((float)iVar1 * __real_3f000000);
    iVar2 = (this->CurrentDrawSize).field0_0x0._s_0.Y;
    dVar10 = (double)iVar1 * (this->Pivot).field0_0x0._s_0.X - dVar22;
    dVar8 = (double)((float)iVar2 * __real_3f000000);
    dVar7 = (double)iVar2 * (this->Pivot).field0_0x0._s_0.Y - dVar8;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = (double)((longlong)iVar1 * (longlong)iVar1 + (longlong)iVar2 * (longlong)iVar2);
    auVar14 = sqrtpd(in_XMM1,auVar14);
    fVar20 = (float)(int)auVar14._0_8_ * __real_3f000000;
    UE::Math::TTransform<double>::ToMatrixWithScale(param_1,local_128);
    auVar15._8_4_ = SUB84(dVar8,0);
    auVar15._0_8_ = dVar8;
    auVar15._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
    dVar19 = auVar15._8_8_ * local_128[0].M[2][1];
    auVar16._0_8_ =
         (double)CONCAT44((uint)((ulonglong)(dVar8 * local_128[0].M[2][0]) >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar8 * local_128[0].M[2][0],0) &
                          (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    auVar16._8_4_ = SUB84(dVar19,0) & _UNK_15061cc88;
    auVar16._12_4_ = (uint)((ulonglong)dVar19 >> 0x20) & _UNK_15061cc8c;
    dVar12 = (double)CONCAT44((uint)((ulonglong)(dVar22 * local_128[0].M[1][0]) >> 0x20) &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              SUB84(dVar22 * local_128[0].M[1][0],0) &
                              (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
             (double)CONCAT44((uint)((ulonglong)(__real_3ff0000000000000 * local_128[0].M[0][0]) >>
                                    0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              SUB84(__real_3ff0000000000000 * local_128[0].M[0][0],0) &
                              (uint)__xmm_7fffffffffffffff7fffffffffffffff) + auVar16._0_8_;
    dVar13 = (double)CONCAT44((uint)((ulonglong)(dVar22 * local_128[0].M[1][1]) >> 0x20) &
                              _UNK_15061cc8c,SUB84(dVar22 * local_128[0].M[1][1],0) & _UNK_15061cc88
                             ) +
             (double)CONCAT44((uint)((ulonglong)(__real_3ff0000000000000 * local_128[0].M[0][1]) >>
                                    0x20) & _UNK_15061cc8c,
                              SUB84(__real_3ff0000000000000 * local_128[0].M[0][1],0) &
                              _UNK_15061cc88) + auVar16._8_8_;
    uVar24 = (undefined4)((ulonglong)dVar13 >> 0x20);
    dVar22 = (double)CONCAT44((uint)((ulonglong)(dVar22 * local_128[0].M[1][2]) >> 0x20) &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              SUB84(dVar22 * local_128[0].M[1][2],0) &
                              (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
             (double)CONCAT44((uint)((ulonglong)(__real_3ff0000000000000 * local_128[0].M[0][2]) >>
                                    0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              SUB84(__real_3ff0000000000000 * local_128[0].M[0][2],0) &
                              (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
             (double)CONCAT44((uint)((ulonglong)(dVar8 * local_128[0].M[2][2]) >> 0x20) &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              SUB84(dVar8 * local_128[0].M[2][2],0) &
                              (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    dVar19 = __real_3fe0000000000000 * local_128[0].M[0][2];
    auVar17._8_4_ = SUB84(dVar7,0);
    auVar17._0_8_ = dVar7;
    auVar17._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
    local_128[0].M[3][1] =
         __real_3fe0000000000000 * local_128[0].M[0][1] + dVar10 * local_128[0].M[1][1] +
         auVar17._8_8_ * local_128[0].M[2][1] + local_128[0].M[3][1];
    auVar18._8_4_ = SUB84(dVar13,0);
    auVar18._0_8_ = dVar12;
    auVar18._12_4_ = uVar24;
    dVar8 = local_128[0].M[1][2] * local_128[0].M[1][2] +
            local_128[0].M[0][2] * local_128[0].M[0][2] +
            local_128[0].M[2][2] * local_128[0].M[2][2];
    auVar23._0_8_ =
         local_128[0].M[1][0] * local_128[0].M[1][0] + local_128[0].M[0][0] * local_128[0].M[0][0] +
         local_128[0].M[2][0] * local_128[0].M[2][0];
    auVar23._8_8_ =
         local_128[0].M[1][1] * local_128[0].M[1][1] + local_128[0].M[0][1] * local_128[0].M[0][1] +
         local_128[0].M[2][1] * local_128[0].M[2][1];
    auVar3._8_4_ = SUB84(auVar23._8_8_,0);
    auVar3._0_8_ = auVar23._8_8_;
    auVar3._12_4_ = (int)((ulonglong)auVar23._8_8_ >> 0x20);
    auVar14 = maxpd(auVar23,auVar3);
    auVar9._8_4_ = SUB84(dVar8,0);
    auVar9._0_8_ = dVar8;
    auVar9._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
    auVar14 = maxpd(auVar14,auVar9);
    dVar21 = SQRT(dVar22 * dVar22 + dVar12 * dVar12 + auVar18._8_8_ * dVar13);
    dVar8 = SQRT(auVar14._0_8_) * (double)fVar20;
    auVar11._8_4_ = SUB84(dVar13,0);
    auVar11._0_8_ = dVar12;
    auVar11._12_4_ = uVar24;
    local_180._8_8_ = auVar11._8_8_;
    if (dVar8 <= dVar21) {
      dVar21 = dVar8;
    }
    dVar8 = (double)*(float *)&this->field_0x324;
    auVar6._8_4_ = SUB84(local_128[0].M[3][1],0);
    auVar6._0_8_ = __real_3fe0000000000000 * local_128[0].M[0][0] + dVar10 * local_128[0].M[1][0] +
                   dVar7 * local_128[0].M[2][0] + local_128[0].M[3][0];
    auVar6._12_4_ = (int)((ulonglong)local_128[0].M[3][1] >> 0x20);
    *(undefined1 (*) [16])&(__return_storage_ptr__->Origin).field0_0x0 = auVar6;
    auVar4._8_4_ = SUB84(dVar22,0);
    auVar4._0_8_ = local_180._8_8_;
    auVar4._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
    dStack_138 = auVar4._8_8_;
    (__return_storage_ptr__->Origin).field0_0x0._s_0.Z =
         dVar10 * local_128[0].M[1][2] + dVar19 + dVar7 * local_128[0].M[2][2] +
         local_128[0].M[3][2];
    (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X = dVar12 * dVar8;
    auVar5._8_4_ = SUB84(dStack_138 * dVar8,0);
    auVar5._0_8_ = (double)local_180._8_8_ * dVar8;
    auVar5._12_4_ = (int)((ulonglong)(dStack_138 * dVar8) >> 0x20);
    *(undefined1 (*) [16])((longlong)&(__return_storage_ptr__->BoxExtent).field0_0x0 + 8) = auVar5;
    __return_storage_ptr__->SphereRadius = dVar21 * dVar8;
  }
  return __return_storage_ptr__;
}

// CanBeInCluster @ 146a604f0

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

bool __thiscall UWidgetComponent::CanBeInCluster(UWidgetComponent *this)

{
  return false;
}

// CanReceiveHardwareInput @ 146a60570

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

bool __thiscall UWidgetComponent::CanReceiveHardwareInput(UWidgetComponent *this)

{
  if ((this->bReceiveHardwareInput != false) && (this->GeometryMode == Plane)) {
    return true;
  }
  return false;
}

// CollectPSOPrecacheData @ 146a60fe0

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
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __thiscall
UWidgetComponent::CollectPSOPrecacheData
          (UWidgetComponent *this,FPSOPrecacheParams *param_1,
          TArray<FMaterialInterfacePSOPrecacheParams,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  undefined1 *puVar1;
  uchar *puVar2;
  ForElementType<FMaterialInterfacePSOPrecacheParams> FVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined8 uVar10;
  TArray<FVertexElement,TFixedAllocator<17>_> *pTVar11;
  TArray<FVertexElement,TFixedAllocator<17>_> *pTVar12;
  longlong lVar13;
  undefined1 *puVar14;
  ForElementType<FMaterialInterfacePSOPrecacheParams> FVar15;
  ulonglong uVar16;
  undefined1 auStack_198 [32];
  TArray<FVertexElement,TFixedAllocator<17>_> *local_178;
  TArray<FVertexElement,TFixedAllocator<17>_> *local_170;
  longlong local_168;
  longlong local_160;
  undefined8 local_158;
  undefined1 local_148 [10];
  uchar auStack_13e [6];
  undefined1 local_138 [10];
  uchar auStack_12e [6];
  undefined1 local_128 [10];
  uchar auStack_11e [6];
  undefined1 local_118 [10];
  uchar auStack_10e [6];
  undefined1 local_108 [10];
  uchar auStack_fe [6];
  undefined1 local_f8 [10];
  uchar auStack_ee [6];
  undefined1 local_e8 [32];
  TArray<FVertexElement,TFixedAllocator<17>_> local_c8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_198;
  if ((this->MaterialInstance).field0_0x0.DebugPtr != (UMaterialInstanceDynamic *)0x0) {
    uVar6 = param_2->ArrayNum;
    if (uVar6 == param_2->ArrayMax) {
      uVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FMaterialInterfacePSOPrecacheParams>_>
                        (0x848,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = uVar6 + 1;
    FVar3 = (param_2->AllocatorInstance).SecondaryData;
    FVar15 = (ForElementType<FMaterialInterfacePSOPrecacheParams>)param_2;
    if (FVar3 != (ForElementType<FMaterialInterfacePSOPrecacheParams>)0x0) {
      FVar15 = FVar3;
    }
    lVar13 = (longlong)(int)uVar6 * 0x48;
    DefaultConstructItems<FMaterialInterfacePSOPrecacheParams,int>
              ((void *)(lVar13 + (longlong)FVar15),1);
    uVar9 = 0;
    uVar7 = uVar9;
    if ((int)uVar6 < param_2->ArrayNum) {
      uVar7 = ~uVar6 >> 0x1f;
    }
    if (uVar7 == 0) {
      local_178 = (TArray<FVertexElement,TFixedAllocator<17>_> *)(longlong)(int)uVar6;
      local_170 = (TArray<FVertexElement,TFixedAllocator<17>_> *)(longlong)param_2->ArrayNum;
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    FVar3 = (param_2->AllocatorInstance).SecondaryData;
    if (FVar3 != (ForElementType<FMaterialInterfacePSOPrecacheParams>)0x0) {
      param_2 = (TArray<FMaterialInterfacePSOPrecacheParams,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                 *)FVar3;
    }
    puVar1 = (undefined1 *)((longlong)param_2 + lVar13);
    *puVar1 = 1;
    *(TObjectPtr<UMaterialInstanceDynamic>_u_0 *)(puVar1 + 8) = (this->MaterialInstance).field0_0x0;
    ((FPSOPrecacheParams_u_0 *)(puVar1 + 0x10))->_s_0 =
         (FPSOPrecacheParams_u_0_s_0)param_1->field0_0x0;
    uVar16 = (ulonglong)GMaxRHIShaderPlatform;
    if (FGenericDataDrivenShaderPlatformInfo::Infos[uVar16].bContainsValidPlatformInfo == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid(Platform)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                         ,0x2ce,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if (FGenericDataDrivenShaderPlatformInfo::Infos[uVar16].bSupportsManualVertexFetch == 0) {
      local_c8.ArrayMax = 0x11;
      local_c8.ArrayNum = 0;
      local_148[0] = '\0';
      local_148[1] = '\0';
      local_148[2] = '\x03';
      local_148[3] = '\0';
      local_148[4] = '\f';
      local_148[5] = '\0';
      local_148[6] = '\0';
      local_148[7] = '\0';
      if ((&local_c8 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)local_148) &&
         (local_148 < &local_c8.ArrayNum)) {
        local_158 = 8;
        local_170 = &local_c8;
        local_160 = 0;
        local_168 = 0x11;
        local_178 = (TArray<FVertexElement,TFixedAllocator<17>_> *)local_148;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar9 = local_c8.ArrayNum;
        if (local_c8.ArrayNum == local_c8.ArrayMax) {
          uVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                            (0x208,&local_c8.AllocatorInstance,&local_c8.ArrayMax);
        }
      }
      local_c8.ArrayNum = uVar9 + 1;
      local_148[8] = '\x01';
      local_148[9] = '\0';
      builtin_memcpy(auStack_13e,"\x05\x01\b",4);
      auStack_13e[4] = '\0';
      auStack_13e[5] = '\0';
      *(ulonglong *)local_c8.AllocatorInstance.InlineData[(int)uVar9].Pad =
           CONCAT26(local_148._6_2_,CONCAT42(local_148._2_4_,local_148._0_2_));
      if ((&local_c8 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)(local_148 + 8)) &&
         (local_148 + 8 < local_c8.AllocatorInstance.InlineData + local_c8.ArrayMax)) {
        local_160 = (longlong)local_c8.ArrayNum;
        local_158 = 8;
        local_170 = &local_c8;
        local_178 = (TArray<FVertexElement,TFixedAllocator<17>_> *)(local_148 + 8);
        local_168 = (longlong)local_c8.ArrayMax;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      if (local_c8.ArrayNum == local_c8.ArrayMax) {
        local_c8.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                       (0x208,&local_c8.AllocatorInstance,&local_c8.ArrayMax);
      }
      local_138[0] = '\x01';
      local_138[1] = '\x04';
      lVar13 = (longlong)local_c8.ArrayNum;
      local_138[2] = '\x05';
      local_138[3] = '\x02';
      local_138[4] = '\b';
      local_138[5] = '\0';
      local_138[6] = '\0';
      local_138[7] = '\0';
      local_c8.ArrayNum = local_c8.ArrayNum + 1;
      *(ulonglong *)local_c8.AllocatorInstance.InlineData[lVar13].Pad =
           CONCAT26(auStack_13e._4_2_,CONCAT42(auStack_13e._0_4_,local_148._8_2_));
      if ((&local_c8 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)local_138) &&
         (local_138 < local_c8.AllocatorInstance.InlineData + local_c8.ArrayMax)) {
        local_160 = (longlong)local_c8.ArrayNum;
        local_158 = 8;
        local_170 = &local_c8;
        local_178 = (TArray<FVertexElement,TFixedAllocator<17>_> *)local_138;
        local_168 = (longlong)local_c8.ArrayMax;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      if (local_c8.ArrayNum == local_c8.ArrayMax) {
        local_c8.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                       (0x208,&local_c8.AllocatorInstance,&local_c8.ArrayMax);
      }
      local_138[8] = '\x02';
      local_138[9] = '\0';
      lVar13 = (longlong)local_c8.ArrayNum;
      builtin_memcpy(auStack_12e,"\b\x03\x04",4);
      auStack_12e[4] = '\0';
      auStack_12e[5] = '\0';
      local_c8.ArrayNum = local_c8.ArrayNum + 1;
      *(ulonglong *)local_c8.AllocatorInstance.InlineData[lVar13].Pad =
           CONCAT26(local_138._6_2_,CONCAT42(local_138._2_4_,local_138._0_2_));
      if ((&local_c8 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)(local_138 + 8)) &&
         (local_138 + 8 < local_c8.AllocatorInstance.InlineData + local_c8.ArrayMax)) {
        local_160 = (longlong)local_c8.ArrayNum;
        local_158 = 8;
        local_170 = &local_c8;
        local_178 = (TArray<FVertexElement,TFixedAllocator<17>_> *)(local_138 + 8);
        local_168 = (longlong)local_c8.ArrayMax;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      if (local_c8.ArrayNum == local_c8.ArrayMax) {
        local_c8.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                       (0x208,&local_c8.AllocatorInstance,&local_c8.ArrayMax);
      }
      local_128[0] = '\x03';
      local_128[1] = '\0';
      lVar13 = (longlong)local_c8.ArrayNum;
      local_128[2] = '\x02';
      local_128[3] = '\x04';
      local_128[4] = '\b';
      local_128[5] = '\0';
      local_128[6] = '\0';
      local_128[7] = '\0';
      local_c8.ArrayNum = local_c8.ArrayNum + 1;
      *(ulonglong *)local_c8.AllocatorInstance.InlineData[lVar13].Pad =
           CONCAT26(auStack_12e._4_2_,CONCAT42(auStack_12e._0_4_,local_138._8_2_));
      if ((&local_c8 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)local_128) &&
         (local_128 < local_c8.AllocatorInstance.InlineData + local_c8.ArrayMax)) {
        local_160 = (longlong)local_c8.ArrayNum;
        local_158 = 8;
        local_170 = &local_c8;
        local_178 = (TArray<FVertexElement,TFixedAllocator<17>_> *)local_128;
        local_168 = (longlong)local_c8.ArrayMax;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      if (local_c8.ArrayNum == local_c8.ArrayMax) {
        local_c8.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                       (0x208,&local_c8.AllocatorInstance,&local_c8.ArrayMax);
      }
      local_128[8] = '\x03';
      local_128[9] = '\0';
      lVar13 = (longlong)local_c8.ArrayNum;
      builtin_memcpy(auStack_11e,"\x02\x05\b",4);
      auStack_11e[4] = '\0';
      auStack_11e[5] = '\0';
      local_c8.ArrayNum = local_c8.ArrayNum + 1;
      *(ulonglong *)local_c8.AllocatorInstance.InlineData[lVar13].Pad =
           CONCAT26(local_128._6_2_,CONCAT42(local_128._2_4_,local_128._0_2_));
      if ((&local_c8 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)(local_128 + 8)) &&
         (local_128 + 8 < local_c8.AllocatorInstance.InlineData + local_c8.ArrayMax)) {
        local_160 = (longlong)local_c8.ArrayNum;
        local_158 = 8;
        local_170 = &local_c8;
        local_178 = (TArray<FVertexElement,TFixedAllocator<17>_> *)(local_128 + 8);
        local_168 = (longlong)local_c8.ArrayMax;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      if (local_c8.ArrayNum == local_c8.ArrayMax) {
        local_c8.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                       (0x208,&local_c8.AllocatorInstance,&local_c8.ArrayMax);
      }
      local_118[0] = '\x03';
      local_118[1] = '\0';
      lVar13 = (longlong)local_c8.ArrayNum;
      local_118[2] = '\x02';
      local_118[3] = '\x06';
      local_118[4] = '\b';
      local_118[5] = '\0';
      local_118[6] = '\0';
      local_118[7] = '\0';
      local_c8.ArrayNum = local_c8.ArrayNum + 1;
      *(ulonglong *)local_c8.AllocatorInstance.InlineData[lVar13].Pad =
           CONCAT26(auStack_11e._4_2_,CONCAT42(auStack_11e._0_4_,local_128._8_2_));
      if ((&local_c8 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)local_118) &&
         (local_118 < local_c8.AllocatorInstance.InlineData + local_c8.ArrayMax)) {
        local_160 = (longlong)local_c8.ArrayNum;
        local_158 = 8;
        local_170 = &local_c8;
        local_178 = (TArray<FVertexElement,TFixedAllocator<17>_> *)local_118;
        local_168 = (longlong)local_c8.ArrayMax;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      if (local_c8.ArrayNum == local_c8.ArrayMax) {
        local_c8.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                       (0x208,&local_c8.AllocatorInstance,&local_c8.ArrayMax);
      }
      local_118[8] = '\x03';
      local_118[9] = '\0';
      lVar13 = (longlong)local_c8.ArrayNum;
      builtin_memcpy(auStack_10e,"\x02\a\b",4);
      auStack_10e[4] = '\0';
      auStack_10e[5] = '\0';
      local_c8.ArrayNum = local_c8.ArrayNum + 1;
      *(ulonglong *)local_c8.AllocatorInstance.InlineData[lVar13].Pad =
           CONCAT26(local_118._6_2_,CONCAT42(local_118._2_4_,local_118._0_2_));
      if ((&local_c8 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)(local_118 + 8)) &&
         (local_118 + 8 < local_c8.AllocatorInstance.InlineData + local_c8.ArrayMax)) {
        local_160 = (longlong)local_c8.ArrayNum;
        local_158 = 8;
        local_170 = &local_c8;
        local_178 = (TArray<FVertexElement,TFixedAllocator<17>_> *)(local_118 + 8);
        local_168 = (longlong)local_c8.ArrayMax;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      if (local_c8.ArrayNum == local_c8.ArrayMax) {
        local_c8.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                       (0x208,&local_c8.AllocatorInstance,&local_c8.ArrayMax);
      }
      local_108[0] = '\x03';
      local_108[1] = '\0';
      lVar13 = (longlong)local_c8.ArrayNum;
      local_108[2] = '\x02';
      local_108[3] = '\x0f';
      local_108[4] = '\b';
      local_108[5] = '\0';
      local_108[6] = '\0';
      local_108[7] = '\0';
      local_c8.ArrayNum = local_c8.ArrayNum + 1;
      *(ulonglong *)local_c8.AllocatorInstance.InlineData[lVar13].Pad =
           CONCAT26(auStack_10e._4_2_,CONCAT42(auStack_10e._0_4_,local_118._8_2_));
      if ((&local_c8 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)local_108) &&
         (local_108 < local_c8.AllocatorInstance.InlineData + local_c8.ArrayMax)) {
        local_160 = (longlong)local_c8.ArrayNum;
        local_158 = 8;
        local_170 = &local_c8;
        local_178 = (TArray<FVertexElement,TFixedAllocator<17>_> *)local_108;
        local_168 = (longlong)local_c8.ArrayMax;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      if (local_c8.ArrayNum == local_c8.ArrayMax) {
        local_c8.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                       (0x208,&local_c8.AllocatorInstance,&local_c8.ArrayMax);
      }
      lVar13 = (longlong)local_c8.ArrayNum;
      local_c8.ArrayNum = local_c8.ArrayNum + 1;
      *(ulonglong *)local_c8.AllocatorInstance.InlineData[lVar13].Pad =
           CONCAT26(local_108._6_2_,CONCAT42(local_108._2_4_,local_108._0_2_));
      bVar5 = IsGPUSkinPassThroughSupported(GMaxRHIShaderPlatform);
      if (bVar5) {
        local_108[8] = '\x04';
        local_108[9] = '\0';
        auStack_fe[0] = '\x04';
        auStack_fe[1] = '\x0e';
        auStack_fe[2] = '\0';
        auStack_fe[3] = '\0';
        auStack_fe[4] = '\0';
        auStack_fe[5] = '\0';
        if ((&local_c8 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)(local_108 + 8)) &&
           (local_108 + 8 < local_c8.AllocatorInstance.InlineData + local_c8.ArrayMax)) {
          local_160 = (longlong)local_c8.ArrayNum;
          local_158 = 8;
          local_170 = &local_c8;
          local_178 = (TArray<FVertexElement,TFixedAllocator<17>_> *)(local_108 + 8);
          local_168 = (longlong)local_c8.ArrayMax;
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        if (local_c8.ArrayNum == local_c8.ArrayMax) {
          local_c8.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                         (0x208,&local_c8.AllocatorInstance,&local_c8.ArrayMax);
        }
        local_f8[0] = '\x05';
        local_f8[1] = '\0';
        lVar13 = (longlong)local_c8.ArrayNum;
        local_f8[2] = '\x14';
        local_f8[3] = '\r';
        local_f8[4] = '\0';
        local_f8[5] = '\0';
        local_c8.ArrayNum = local_c8.ArrayNum + 1;
        *(ulonglong *)local_c8.AllocatorInstance.InlineData[lVar13].Pad =
             CONCAT26(auStack_fe._4_2_,CONCAT42(auStack_fe._0_4_,local_108._8_2_));
        local_f8[6] = '\x01';
        local_f8[7] = '\0';
        if ((&local_c8 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)local_f8) &&
           (local_f8 < local_c8.AllocatorInstance.InlineData + local_c8.ArrayMax)) {
          local_160 = (longlong)local_c8.ArrayNum;
          local_158 = 8;
          local_170 = &local_c8;
          local_178 = (TArray<FVertexElement,TFixedAllocator<17>_> *)local_f8;
          local_168 = (longlong)local_c8.ArrayMax;
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        if (local_c8.ArrayNum == local_c8.ArrayMax) {
          local_c8.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                         (0x208,&local_c8.AllocatorInstance,&local_c8.ArrayMax);
        }
        uVar10 = CONCAT26(local_f8._6_2_,CONCAT42(local_f8._2_4_,local_f8._0_2_));
        uVar6 = local_c8.ArrayNum;
      }
      else {
        local_f8[8] = '\x04';
        local_f8[9] = '\0';
        auStack_ee[4] = '\x01';
        auStack_ee[5] = '\0';
        auStack_ee[0] = '\x14';
        auStack_ee[1] = '\r';
        auStack_ee[2] = '\0';
        auStack_ee[3] = '\0';
        if ((&local_c8 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)(local_f8 + 8)) &&
           (local_f8 + 8 < local_c8.AllocatorInstance.InlineData + local_c8.ArrayMax)) {
          local_160 = (longlong)local_c8.ArrayNum;
          local_158 = 8;
          local_170 = &local_c8;
          local_178 = (TArray<FVertexElement,TFixedAllocator<17>_> *)(local_f8 + 8);
          local_168 = (longlong)local_c8.ArrayMax;
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        if (local_c8.ArrayNum == local_c8.ArrayMax) {
          local_c8.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                         (0x208,&local_c8.AllocatorInstance,&local_c8.ArrayMax);
        }
        uVar10 = CONCAT26(auStack_ee._4_2_,CONCAT42(auStack_ee._0_4_,local_f8._8_2_));
        uVar6 = local_c8.ArrayNum;
      }
      local_c8.ArrayNum = uVar6 + 1;
      *(undefined8 *)local_c8.AllocatorInstance.InlineData[(int)uVar6].Pad = uVar10;
      pTVar11 = (TArray<FVertexElement,TFixedAllocator<17>_> *)
                FPSOPrecacheVertexFactoryData::FPSOPrecacheVertexFactoryData
                          ((FPSOPrecacheVertexFactoryData *)(local_e8 + 0x10),
                           &FLocalVertexFactory::StaticType,&local_c8);
      pTVar12 = *(TArray<FVertexElement,TFixedAllocator<17>_> **)(puVar1 + 0x38);
      if (*(TArray<FVertexElement,TFixedAllocator<17>_> **)(puVar1 + 0x38) ==
          (TArray<FVertexElement,TFixedAllocator<17>_> *)0x0) {
        pTVar12 = (TArray<FVertexElement,TFixedAllocator<17>_> *)(puVar1 + 0x18);
      }
      if ((pTVar12 <= pTVar11) &&
         (pTVar11 < (TArray<FVertexElement,TFixedAllocator<17>_> *)
                    ((pTVar12->AllocatorInstance).InlineData + (longlong)*(int *)(puVar1 + 0x44) * 2
                    ))) {
        local_160 = (longlong)*(int *)(puVar1 + 0x40);
        local_158 = 0x10;
        local_178 = pTVar11;
        local_170 = pTVar12;
        local_168 = (longlong)*(int *)(puVar1 + 0x44);
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar8 = *(int *)(puVar1 + 0x40);
      if (iVar8 == *(int *)(puVar1 + 0x44)) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FPSOPrecacheVertexFactoryData>_>
                          (0x810,(ForElementType<FPSOPrecacheVertexFactoryData> *)(puVar1 + 0x18),
                           (int *)(puVar1 + 0x44));
      }
      *(int *)(puVar1 + 0x40) = iVar8 + 1;
      local_e8._0_4_ = *(undefined4 *)(pTVar11->AllocatorInstance).InlineData[0].Pad;
      local_e8._4_4_ = *(undefined4 *)((pTVar11->AllocatorInstance).InlineData[0].Pad + 4);
      local_e8._8_4_ = *(undefined4 *)(pTVar11->AllocatorInstance).InlineData[1].Pad;
      local_e8._12_4_ = *(undefined4 *)((pTVar11->AllocatorInstance).InlineData[1].Pad + 4);
    }
    else {
      local_e8[8] = '\0';
      local_e8[9] = '\0';
      local_e8[10] = '\0';
      local_e8[0xb] = '\0';
      local_e8[0xc] = '\0';
      local_e8[0xd] = '\0';
      local_e8[0xe] = '\0';
      local_e8[0xf] = '\0';
      pTVar12 = *(TArray<FVertexElement,TFixedAllocator<17>_> **)(puVar1 + 0x38);
      if (*(TArray<FVertexElement,TFixedAllocator<17>_> **)(puVar1 + 0x38) ==
          (TArray<FVertexElement,TFixedAllocator<17>_> *)0x0) {
        pTVar12 = (TArray<FVertexElement,TFixedAllocator<17>_> *)(puVar1 + 0x18);
      }
      local_e8._0_8_ = &FLocalVertexFactory::StaticType;
      if ((pTVar12 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)local_e8) &&
         (local_e8 < (pTVar12->AllocatorInstance).InlineData + (longlong)*(int *)(puVar1 + 0x44) * 2
         )) {
        local_160 = (longlong)*(int *)(puVar1 + 0x40);
        local_158 = 0x10;
        local_178 = (TArray<FVertexElement,TFixedAllocator<17>_> *)local_e8;
        local_170 = pTVar12;
        local_168 = (longlong)*(int *)(puVar1 + 0x44);
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar8 = *(int *)(puVar1 + 0x40);
      if (iVar8 == *(int *)(puVar1 + 0x44)) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FPSOPrecacheVertexFactoryData>_>
                          (0x810,(ForElementType<FPSOPrecacheVertexFactoryData> *)(puVar1 + 0x18),
                           (int *)(puVar1 + 0x44));
      }
      *(int *)(puVar1 + 0x40) = iVar8 + 1;
    }
    puVar14 = *(undefined1 **)(puVar1 + 0x38);
    if (*(undefined1 **)(puVar1 + 0x38) == (undefined1 *)0x0) {
      puVar14 = puVar1 + 0x18;
    }
    puVar2 = puVar14 + (longlong)iVar8 * 0x10;
    *(undefined4 *)puVar2 = local_e8._0_4_;
    *(undefined4 *)(puVar2 + 4) = local_e8._4_4_;
    *(undefined4 *)(puVar2 + 8) = local_e8._8_4_;
    *(undefined4 *)(puVar2 + 0xc) = local_e8._12_4_;
  }
  return;
}

// ComputeComponentWidth @ 146a61b50

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

double __thiscall UWidgetComponent::ComputeComponentWidth(UWidgetComponent *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  if ((this->GeometryMode != Plane) && (this->GeometryMode == Cylinder)) {
    dVar1 = (double)(this->CurrentDrawSize).field0_0x0._s_0.X;
    dVar2 = this->CylinderArcAngle * __real_3f91df46a2529d39;
    dVar3 = sin(dVar2 * __real_3fe0000000000000);
    return dVar3 * ((dVar1 + dVar1) / dVar2);
  }
  return (double)(this->CurrentDrawSize).field0_0x0._s_0.X;
}

// ConvertWindowVisibilityToVisibility @ 146a62de0

/* WARNING: Type propagation algorithm not settling */

EVisibility __cdecl UWidgetComponent::ConvertWindowVisibilityToVisibility(EWindowVisibility param_1)

{
  code *pcVar1;
  bool bVar2;
  TEnumAsByte<EVisibility::Private> TVar3;
  undefined7 in_register_00000009;
  char in_DL;
  
  if (in_DL == '\0') {
    ((TEnumAsByte<EVisibility::Private> *)CONCAT71(in_register_00000009,param_1))->Value =
         (uchar)EVisibility::Visible.Value.Value;
    return (TEnumAsByte<EVisibility::Private>)(TEnumAsByte<EVisibility::Private>)param_1;
  }
  if (in_DL != '\x01') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\WidgetComponent.cpp"
                       ,0x3ed,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar3.Value = (*pcVar1)();
      return (TEnumAsByte<EVisibility::Private>)(TEnumAsByte<EVisibility::Private>)TVar3.Value;
    }
  }
  ((TEnumAsByte<EVisibility::Private> *)CONCAT71(in_register_00000009,param_1))->Value =
       (uchar)EVisibility::SelfHitTestInvisible.Value.Value;
  return (TEnumAsByte<EVisibility::Private>)(TEnumAsByte<EVisibility::Private>)param_1;
}

// CreateSceneProxy @ 146a69cc0

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
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FPrimitiveSceneProxy * __thiscall UWidgetComponent::CreateSceneProxy(UWidgetComponent *this)

{
  TReferenceControllerBase<1> *pTVar1;
  ISlate3DRenderer *pIVar2;
  UMaterialInterface *this_00;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  FPrimitiveSceneProxy *this_01;
  undefined8 uVar6;
  FMaterialRelevance FVar7;
  FPrimitiveSceneProxy *pFVar8;
  undefined8 local_res8;
  
  if ((((this->Space != Screen) && (this->WidgetRenderer != (FWidgetRenderer *)0x0)) &&
      ((this->CurrentSlateWidget).Object != (SWidget *)0x0)) &&
     (((pTVar1 = (this->CurrentSlateWidget).WeakReferenceCount.ReferenceController,
       pTVar1 != (TReferenceControllerBase<1> *)0x0 && (0 < (int)pTVar1->SharedReferenceCount)) &&
      (pIVar2 = (this->WidgetRenderer->Renderer).Object, pIVar2 != (ISlate3DRenderer *)0x0)))) {
    (**(code **)(*(longlong *)this + 0xb70))();
    pFVar8 = (FPrimitiveSceneProxy *)0x0;
    this->LastWidgetRenderTime = 0.0;
    this_01 = ::operator_new(0x2e0);
    if (this_01 != (FPrimitiveSceneProxy *)0x0) {
      local_res8 = 0;
      FPrimitiveSceneProxy::FPrimitiveSceneProxy(this_01,(UPrimitiveComponent *)this,(FName)0x0);
      this_01->_padding_ = (longlong)&___7FWidget3DSceneProxy__6B_;
      *(double *)&this_01[1].DebugMassData.ArrayNum =
           this->CylinderArcAngle * __real_3f91df46a2529d39;
      uVar3 = *(undefined4 *)((longlong)&(this->Pivot).field0_0x0 + 4);
      uVar4 = *(undefined4 *)((longlong)&(this->Pivot).field0_0x0 + 8);
      uVar5 = *(undefined4 *)((longlong)&(this->Pivot).field0_0x0 + 0xc);
      *(undefined4 *)&this_01[1].SimpleStreamableAssetManagerIndex.Object =
           *(undefined4 *)&(this->Pivot).field0_0x0;
      *(undefined4 *)((longlong)&this_01[1].SimpleStreamableAssetManagerIndex.Object + 4) = uVar3;
      *(undefined4 *)
       &this_01[1].SimpleStreamableAssetManagerIndex.SharedReferenceCount.ReferenceController =
           uVar4;
      *(undefined4 *)
       ((longlong)
        &this_01[1].SimpleStreamableAssetManagerIndex.SharedReferenceCount.ReferenceController + 4)
           = uVar5;
      *(ISlate3DRenderer **)&this_01[1].WireframeColor.field0_0x0 = pIVar2;
      *(TObjectPtr<UTextureRenderTarget2D>_u_0 *)
       ((longlong)&this_01[1].WireframeColor.field0_0x0 + 8) = (this->RenderTarget).field0_0x0;
      *(TObjectPtr<UMaterialInstanceDynamic>_u_0 *)&this_01[1].PrimitiveColor.field0_0x0 =
           (this->MaterialInstance).field0_0x0;
      *(undefined8 *)((longlong)&this_01[1].PrimitiveColor.field0_0x0 + 8) = 0;
      *(EWidgetBlendMode *)&this_01[1].CustomPrimitiveData.Data.AllocatorInstance.Data =
           this->BlendMode;
      *(EWidgetGeometryMode *)
       ((longlong)&this_01[1].CustomPrimitiveData.Data.AllocatorInstance.Data + 1) =
           this->GeometryMode;
      uVar6 = (**(code **)(*(longlong *)this + 0x800))(this);
      this_01->bWillEverBeLit = '\0';
      this_00 = *(UMaterialInterface **)&this_01[1].PrimitiveColor.field0_0x0;
      this_01[1].CustomPrimitiveData.Data.ArrayNum = (int)uVar6;
      this_01[1].CustomPrimitiveData.Data.ArrayMax = (int)((ulonglong)uVar6 >> 0x20);
      pFVar8 = this_01;
      if (this_00 != (UMaterialInterface *)0x0) {
        FSceneInterface::GetShaderPlatform(this_01->Scene);
        FVar7 = UMaterialInterface::GetRelevance_Concurrent(this_00,(EShaderPlatform)&local_res8);
        *(undefined8 *)((longlong)&this_01[1].PrimitiveColor.field0_0x0 + 8) =
             *(undefined8 *)FVar7.field0_0x0;
        return this_01;
      }
    }
    return pFVar8;
  }
  return (FPrimitiveSceneProxy *)0x0;
}

// DestroyComponent @ 146a6a9d0

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

void __thiscall UWidgetComponent::DestroyComponent(UWidgetComponent *this,bool param_1)

{
  USceneComponent::DestroyComponent((USceneComponent *)this,param_1);
                    /* WARNING: Could not recover jumptable at 0x000146a6a9e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0xb30))(this);
  return;
}

// DrawWidgetToRenderTarget @ 146a6db20

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
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall UWidgetComponent::DrawWidgetToRenderTarget(UWidgetComponent *this,float param_1)

{
  TSharedPtr<SVirtualWindow,1> *this_00;
  FWidgetRenderer *pFVar1;
  TIntPoint<int>_u_0_s_0 TVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  double dVar5;
  undefined1 auVar6 [16];
  TIntPoint<int>_u_0 TVar7;
  FDeprecateVector2DParameter FVar8;
  float fVar9;
  atomic<double> aVar10;
  bool bVar11;
  bool bVar12;
  char cVar13;
  int iVar14;
  SVirtualWindow *pSVar15;
  FDeprecateSlateVector2D FVar16;
  FHittestGrid *pFVar17;
  TSharedRef<SVirtualWindow,1> *pTVar18;
  SVirtualWindow *pSVar19;
  FTextureRenderTargetResource *pFVar20;
  IConsoleManager *pIVar21;
  UTextureRenderTarget2D *this_01;
  FRenderTarget *pFVar22;
  longlong lVar23;
  int iVar24;
  longlong lVar25;
  float fVar26;
  double dVar27;
  float fVar28;
  undefined1 unaff_XMM7 [16];
  undefined1 auVar29 [16];
  undefined1 unaff_XMM8 [16];
  undefined1 auVar30 [16];
  TSharedRef<SWindow,1> local_138;
  TIntPoint<int>_u_0_s_0 local_128;
  TVector2<double>_u_0 local_118;
  TSharedRef<SVirtualWindow,1> local_108;
  TVector2<double>_u_0 local_f8;
  TSharedRef<SVirtualWindow,1> local_e0;
  FPaintArgs local_d0;
  FPaintArgs local_98;
  
  fVar9 = __real_3f800000;
  if (GRHIGlobals.UsingNullRHI) {
    return;
  }
  this_00 = &this->SlateWindow;
  if (this_00->Object == (SVirtualWindow *)0x0) {
    return;
  }
  pFVar1 = this->WidgetRenderer;
  if (pFVar1 == (FWidgetRenderer *)0x0) {
    return;
  }
  iVar14 = (this->DrawSize).field0_0x0._s_0.X;
  if (iVar14 < 1) {
    return;
  }
  iVar24 = (this->DrawSize).field0_0x0._s_0.Y;
  if (iVar24 < 1) {
    return;
  }
  if (GRHIGlobals.MaxTextureDimensions.Value < iVar14) {
    return;
  }
  if (GRHIGlobals.MaxTextureDimensions.Value < iVar24) {
    return;
  }
  bVar12 = this->bUseInvalidationInWorldSpace;
  TVar2 = (this->CurrentDrawSize).field0_0x0._s_0;
  (this->CurrentDrawSize).field0_0x0 = (this->DrawSize).field0_0x0;
  local_128 = TVar2;
  if (bVar12 == false) {
    if (this->bDrawAtDesiredSize != false) goto LAB_146a6dbe8;
    pFVar1->bPrepassNeeded = true;
  }
  else {
    pSVar15 = TSharedPtr<SVirtualWindow,1>::operator->(this_00);
    SWindow::ProcessWindowInvalidation((SWindow *)pSVar15);
LAB_146a6dbe8:
    pSVar15 = TSharedPtr<SVirtualWindow,1>::operator->(this_00);
    SWidget::SlatePrepass((SWidget *)pSVar15,fVar9);
    this->WidgetRenderer->bPrepassNeeded = false;
  }
  bVar12 = true;
  if (this->bDrawAtDesiredSize != false) {
    pSVar15 = TSharedPtr<SVirtualWindow,1>::operator->(this_00);
    FVar16 = SWidget::GetDesiredSize((SWidget *)pSVar15);
    auVar29._8_8_ = 0;
    auVar29._0_8_ = (double)(*(float *)FVar16 + __real_3f000000);
    auVar30 = roundpd(unaff_XMM8,auVar29,1);
    auVar6._8_8_ = 0;
    auVar6._0_8_ = (double)(*(float *)((longlong)FVar16 + 4) + __real_3f000000);
    auVar29 = roundpd(unaff_XMM7,auVar6,1);
    dVar27 = auVar29._0_8_;
    dVar5 = auVar30._0_8_;
    lVar25 = (longlong)ROUND(dVar27 + dVar27 + __real_3fe0000000000000) >> 1;
    lVar23 = (longlong)ROUND(dVar5 + dVar5 + __real_3fe0000000000000) >> 1;
    iVar14 = (int)lVar23;
    if ((lVar23 != iVar14) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IntFitsIn<OutType>(In)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                            ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar11
       )) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar24 = (int)lVar25;
    if ((lVar25 != iVar24) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IntFitsIn<OutType>(In)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                            ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar11
       )) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    TVar7._s_0.Y = iVar24;
    TVar7._s_0.X = iVar14;
    (this->CurrentDrawSize).field0_0x0 = TVar7;
    if ((dVar5 <= 0.0) || (dVar27 <= 0.0)) {
      bVar12 = false;
    }
  }
  if (((this->CurrentDrawSize).field0_0x0._s_0.X != TVar2.X) ||
     ((this->CurrentDrawSize).field0_0x0._s_0.Y != local_128.Y)) {
    if (bVar12) {
      UpdateBodySetup(this,true);
      UActorComponent::RecreatePhysicsState((UActorComponent *)this);
    }
    else {
      UActorComponent::DestroyPhysicsState((UActorComponent *)this);
    }
  }
  (**(code **)(*(longlong *)this + 0xb40))(this,(this->CurrentDrawSize).field0_0x0);
  if ((this->RenderTarget).field0_0x0.DebugPtr == (UTextureRenderTarget2D *)0x0) {
    return;
  }
  this->bRedrawRequested = false;
  if (this->bUseInvalidationInWorldSpace == false) {
    TVar2 = (this->CurrentDrawSize).field0_0x0._s_0;
    pFVar1 = this->WidgetRenderer;
    pTVar18 = TSharedPtr<SVirtualWindow,1>::ToSharedRef(this_00,&local_e0);
    pTVar3 = (pTVar18->SharedReferenceCount).ReferenceController;
    pSVar15 = pTVar18->Object;
    if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
      pSVar19 = TSharedPtr<SVirtualWindow,1>::operator->(this_00);
      pFVar17 = SWindow::GetHittestGrid((SWindow *)pSVar19);
      this_01 = (this->RenderTarget).field0_0x0.DebugPtr;
    }
    else {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
      pSVar19 = TSharedPtr<SVirtualWindow,1>::operator->(this_00);
      pFVar17 = SWindow::GetHittestGrid((SWindow *)pSVar19);
      this_01 = (this->RenderTarget).field0_0x0.DebugPtr;
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_138.Object = (SWindow *)pSVar15;
    local_138.SharedReferenceCount.ReferenceController = pTVar3;
    pFVar20 = UTextureRenderTarget::GameThread_GetRenderTargetResource
                        ((UTextureRenderTarget *)this_01);
    pFVar22 = (FRenderTarget *)&pFVar20->_padding_;
    if (pFVar20 == (FTextureRenderTargetResource *)0x0) {
      pFVar22 = (FRenderTarget *)0x0;
    }
    local_f8._s_0.X = (double)TVar2.X;
    local_f8._s_0.Y = (double)TVar2.Y;
    FWidgetRenderer::DrawWindow
              (pFVar1,pFVar22,pFVar17,&local_138,fVar9,(TVector2<double> *)&local_f8._s_0,param_1,
               false);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    local_108.SharedReferenceCount.ReferenceController =
         local_e0.SharedReferenceCount.ReferenceController;
    goto LAB_146a6dff8;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pIVar21 = IConsoleManager::Get();
    ::CVar = (IConsoleVariable *)
             (**(code **)((longlong)*pIVar21 + 0xc0))
                       (pIVar21,L"Slate.DeferRetainedRenderingRenderThread",1);
    _Init_thread_footer(&::_TSS0);
  }
  if (::CVar == (IConsoleVariable *)0x0) {
    bVar12 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<4348376515700852154>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\WidgetComponent.cpp"
                        ,0x5ba,"CVar");
    if (bVar12) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (::CVar != (IConsoleVariable *)0x0) goto LAB_146a6de31;
    bVar12 = false;
  }
  else {
LAB_146a6de31:
    iVar14 = (**(code **)(*(longlong *)::CVar + 200))();
    bVar12 = iVar14 != 0;
  }
  aVar10 = FApp::CurrentTime;
  fVar26 = (float)UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.X;
  fVar28 = (float)UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.Y;
  pSVar15 = TSharedPtr<SVirtualWindow,1>::operator->(this_00);
  pFVar17 = SWindow::GetHittestGrid((SWindow *)pSVar15);
  FVar8._4_4_ = fVar28;
  FVar8._0_4_ = fVar26;
  FPaintArgs::FPaintArgs(&local_d0,(SWidget *)0x0,pFVar17,FVar8,(double)aVar10,param_1);
  TSharedPtr<SVirtualWindow,1>::ToSharedRef(this_00,&local_108);
  TVar2 = (this->CurrentDrawSize).field0_0x0._s_0;
  local_118._s_0.X = (double)TVar2.X;
  local_98.RootGrid = local_d0.RootGrid;
  local_98.CurrentGrid = local_d0.CurrentGrid;
  local_118._s_0.Y = (double)TVar2.Y;
  local_98.CurrentTime = local_d0.CurrentTime;
  local_98.DeltaTime = local_d0.DeltaTime;
  local_98._44_4_ = local_d0._44_4_;
  local_98.WindowOffset.field0_0x0 = local_d0.WindowOffset.field0_0x0;
  local_98.PaintParentPtr = local_d0.PaintParentPtr;
  FWidgetRenderer::DrawInvalidationRoot
            (this->WidgetRenderer,&local_108,(this->RenderTarget).field0_0x0.DebugPtr,&local_98,
             fVar9,(TVector2<double> *)&local_118._s_0,bVar12);
LAB_146a6dff8:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_108.SharedReferenceCount.ReferenceController);
  dVar27 = GetCurrentTime(this);
  this->LastWidgetRenderTime = dVar27;
  if ((this->TickMode == Disabled) &&
     (cVar13 = (**(code **)(*(longlong *)this + 0x430))(this), cVar13 != '\0')) {
    (**(code **)(*(longlong *)this + 0x420))(this,0);
  }
  return;
}

// EndPlay @ 146a70460

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

void __thiscall UWidgetComponent::EndPlay(UWidgetComponent *this,Type param_1)

{
  USceneComponent::EndPlay((USceneComponent *)this,param_1);
                    /* WARNING: Could not recover jumptable at 0x000146a70479. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0xb30))(this);
  return;
}

// GetBodySetup @ 146a733b0

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

UBodySetup * __thiscall UWidgetComponent::GetBodySetup(UWidgetComponent *this)

{
  UpdateBodySetup(this,false);
  return (this->BodySetup).field0_0x0.DebugPtr;
}

// GetCollisionShape @ 146a73b80

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

FCollisionShape * __thiscall
UWidgetComponent::GetCollisionShape
          (UWidgetComponent *this,FCollisionShape *__return_storage_ptr__,float param_1)

{
  undefined8 uVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  undefined4 uVar7;
  
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  if (this->Space == Screen) {
    fVar2 = (float)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    __return_storage_ptr__->ShapeType = Box;
    (__return_storage_ptr__->field1_0x4).Box.HalfExtentX = fVar2;
    fVar2 = (float)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    (__return_storage_ptr__->field1_0x4).Box.HalfExtentY = (float)(double)uVar1;
    (__return_storage_ptr__->field1_0x4).Box.HalfExtentZ = fVar2;
    return __return_storage_ptr__;
  }
  fVar6 = (float)(*(double *)&this->field_0x230 * __real_3f847ae140000000);
  fVar4 = (float)((double)((float)(this->CurrentDrawSize).field0_0x0._s_0.X * __real_3f000000) *
                 *(double *)&this->field_0x238);
  fVar2 = (float)((double)((float)(this->CurrentDrawSize).field0_0x0._s_0.Y * __real_3f000000) *
                 *(double *)&this->field_0x240);
  if (param_1 == 0.0) {
    *(ulonglong *)__return_storage_ptr__ = CONCAT44(fVar6,1);
    *(ulonglong *)((longlong)&__return_storage_ptr__->field1_0x4 + 4) = CONCAT44(fVar2,fVar4);
    return __return_storage_ptr__;
  }
  uVar7 = fVar6 + param_1;
  __return_storage_ptr__->ShapeType = Box;
  uVar5 = fVar4 + param_1;
  uVar3 = fVar2 + param_1;
  if ((float)uVar7 <= UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X) {
    uVar7 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
  }
  if ((float)uVar5 <= UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y) {
    uVar5 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
  }
  if ((float)uVar3 <= UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z) {
    uVar3 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  }
  (__return_storage_ptr__->field1_0x4).Box.HalfExtentX = (float)uVar7;
  (__return_storage_ptr__->field1_0x4).Box.HalfExtentY = (float)uVar5;
  (__return_storage_ptr__->field1_0x4).Box.HalfExtentZ = (float)uVar3;
  return __return_storage_ptr__;
}

// GetComponentInstanceData @ 146a73e00

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

TStructOnScope<FActorComponentInstanceData> * __thiscall
UWidgetComponent::GetComponentInstanceData
          (UWidgetComponent *this,
          TStructOnScope<FActorComponentInstanceData> *__return_storage_ptr__)

{
  UClass *pUVar1;
  UTextureRenderTarget2D *pUVar2;
  UScriptStruct *pUVar3;
  uint uVar4;
  UPackage *pUVar5;
  FSceneComponentInstanceData *this_00;
  int iVar6;
  uint uVar7;
  UScriptStruct *local_res8;
  
  FStructOnScope::FStructOnScope((FStructOnScope *)__return_storage_ptr__);
  *(undefined ***)__return_storage_ptr__ = &___7__TStructOnScope_UFActorComponentInstanceData____6B_
  ;
  FStructOnScope::Destroy((FStructOnScope *)__return_storage_ptr__);
  if (Z_Registration_Info_UScriptStruct_FWidgetComponentInstanceData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_UMG();
    Z_Registration_Info_UScriptStruct_FWidgetComponentInstanceData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FWidgetComponentInstanceData,(UObject *)pUVar5,
                         L"WidgetComponentInstanceData");
    if (Z_Registration_Info_UScriptStruct_FWidgetComponentInstanceData.OuterSingleton ==
        (UScriptStruct *)0x0) {
      return __return_storage_ptr__;
    }
  }
  pUVar3 = Z_Registration_Info_UScriptStruct_FWidgetComponentInstanceData.OuterSingleton;
  local_res8 = Z_Registration_Info_UScriptStruct_FWidgetComponentInstanceData.OuterSingleton;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable
              ((UObject *)
               Z_Registration_Info_UScriptStruct_FWidgetComponentInstanceData.OuterSingleton);
  }
  FWeakObjectPtr::operator=
            ((FWeakObjectPtr *)&__return_storage_ptr__->field_0x8,(FObjectPtr)&local_res8);
  iVar6 = (int)*(short *)((longlong)&pUVar3->_padding_ + 4);
  uVar7 = (int)pUVar3->_padding_ + -1 + iVar6 & ~(iVar6 - 1U);
  uVar4 = 1;
  if (uVar7 != 0) {
    uVar4 = uVar7;
  }
  this_00 = FMemory::Malloc((longlong)(int)uVar4,0);
  *(FSceneComponentInstanceData **)&__return_storage_ptr__->field_0x10 = this_00;
  FSceneComponentInstanceData::FSceneComponentInstanceData(this_00,(USceneComponent *)this);
  this_00->_padding_ = (longlong)&___7FWidgetComponentInstanceData__6B_;
  pUVar1 = (this->WidgetClass).Class.field0_0x0.DebugPtr;
  this_00[1]._padding_ = (longlong)pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  pUVar2 = (this->RenderTarget).field0_0x0.DebugPtr;
  this_00[1]._padding_ = (longlong)pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar2 != (UTextureRenderTarget2D *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  __return_storage_ptr__->field_0x20 = 1;
  return __return_storage_ptr__;
}

// GetCurrentDrawSize @ 146a74070

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

TVector2<double> * __thiscall
UWidgetComponent::GetCurrentDrawSize
          (UWidgetComponent *this,TVector2<double> *__return_storage_ptr__)

{
  TIntPoint<int>_u_0_s_0 TVar1;
  
  TVar1 = (this->CurrentDrawSize).field0_0x0._s_0;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)TVar1.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)TVar1.Y;
  return __return_storage_ptr__;
}

// GetCurrentTime @ 146a740a0

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

double __thiscall UWidgetComponent::GetCurrentTime(UWidgetComponent *this)

{
  UWorld *pUVar1;
  
  if (this->TimingPolicy == RealTime) {
    return (double)FApp::CurrentTime;
  }
  pUVar1 = *(UWorld **)&this->field_0xb0;
  if (pUVar1 == (UWorld *)0x0) {
    pUVar1 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
  }
  return pUVar1->TimeSeconds;
}

// GetCylinderHitLocation @ 146a740f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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

TTuple<UE::Math::TVector<double>,UE::Math::TVector2<double>_> * __thiscall
UWidgetComponent::GetCylinderHitLocation
          (UWidgetComponent *this,
          TTuple<UE::Math::TVector<double>,UE::Math::TVector2<double>_> *__return_storage_ptr__,
          TVector<double> *param_1,TVector<double> *param_2)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [12];
  undefined1 auVar7 [12];
  undefined8 uVar8;
  bool bVar9;
  TTuple<UE::Math::TVector<double>,UE::Math::TVector2<double>_> *pTVar10;
  TVector<double> *pTVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  float fVar16;
  double dVar17;
  double extraout_XMM0_Qa;
  double dVar18;
  double dVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  double extraout_XMM0_Qb;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  double dVar32;
  undefined1 auVar31 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  double dVar39;
  double dVar44;
  undefined4 uVar45;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  uint uVar46;
  double dVar47;
  uint uVar51;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  double dVar52;
  undefined4 uVar53;
  double dVar54;
  undefined1 auVar55 [16];
  double dVar58;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  double dVar63;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  double dVar72;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar73 [16];
  double dStack_140;
  TVector<double>_u_0 local_120;
  double local_108;
  double dStack_100;
  TVector<double>_u_0 local_f8 [2];
  double local_c8;
  
  if (this->GeometryMode != Cylinder) {
    bVar9 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4348376515700852772>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\WidgetComponent.cpp"
                       ,0x824,"GeometryMode == EWidgetGeometryMode::Cylinder");
    if (bVar9) {
      pcVar3 = (code *)swi(3);
      pTVar10 = (TTuple<UE::Math::TVector<double>,UE::Math::TVector2<double>_> *)(*pcVar3)();
      return pTVar10;
    }
  }
  dVar19 = __real_3fe0000000000000;
  dVar39 = *(double *)&this->field_0x1f0 *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar44 = *(double *)&this->field_0x1f8 *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  dVar18 = *(double *)&this->field_0x200 *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar4 = *(double *)&this->field_0x208 *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  auVar30._8_4_ = SUB84(dVar44,0);
  auVar30._0_8_ = dVar39;
  uVar45 = (undefined4)((ulonglong)dVar44 >> 0x20);
  auVar30._12_4_ = uVar45;
  dVar17 = (param_1->field0_0x0)._s_0.Z - *(double *)&this->field_0x220;
  dVar63 = (param_1->field0_0x0)._s_0.X - *(double *)&this->field_0x210;
  dVar5 = (param_1->field0_0x0)._s_0.Y - *(double *)&this->field_0x218;
  uVar53 = (undefined4)((ulonglong)dVar5 >> 0x20);
  dVar32 = auVar30._8_8_;
  auVar33._8_4_ = SUB84(dVar44,0);
  auVar33._0_8_ = dVar39;
  auVar33._12_4_ = uVar45;
  auVar27._8_4_ = SUB84(dVar4,0);
  auVar27._0_8_ = dVar18;
  auVar27._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  auVar34 = blendpd(auVar33,auVar27,2);
  auVar36._8_4_ = SUB84(dVar18,0);
  auVar36._0_8_ = dVar32;
  auVar36._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
  auVar64._8_4_ = SUB84(dVar5,0);
  auVar64._0_8_ = dVar63;
  auVar64._12_4_ = uVar53;
  auVar26._8_4_ = SUB84(dVar5,0);
  auVar26._0_8_ = dVar63;
  auVar26._12_4_ = uVar53;
  auVar21._8_8_ = 0;
  auVar21._0_8_ = dVar17;
  auVar27 = blendpd(auVar26,auVar21,2);
  auVar65._0_8_ = auVar64._8_8_ * dVar39 - dVar32 * dVar63;
  auVar65._8_8_ = dVar17 * dVar44 - auVar36._8_8_ * dVar5;
  auVar55._8_4_ = SUB84(auVar65._8_8_,0);
  auVar55._0_8_ = auVar65._0_8_;
  auVar55._12_4_ = (int)((ulonglong)auVar65._8_8_ >> 0x20);
  auVar28._0_8_ = auVar27._0_8_ * dVar18 - auVar34._0_8_ * dVar17;
  auVar28._8_8_ = auVar27._8_8_ * dVar4 - auVar34._8_8_ * 0.0;
  dVar54 = auVar55._8_8_ + auVar55._8_8_;
  dVar58 = auVar28._0_8_ + auVar28._0_8_;
  auVar66 = blendpd(auVar65,auVar28,2);
  uVar45 = SUB84(dVar58,0);
  auVar59._8_4_ = uVar45;
  auVar59._0_8_ = dVar54;
  uVar53 = (undefined4)((ulonglong)dVar58 >> 0x20);
  auVar59._12_4_ = uVar53;
  local_108 = (double)GlobalVectorConstants::SmallNumber.m128_f32[0];
  dStack_100 = (double)GlobalVectorConstants::SmallNumber.m128_f32[1];
  auVar61._8_4_ = uVar45;
  auVar61._0_8_ = dVar54;
  auVar61._12_4_ = uVar53;
  auVar27 = *(undefined1 (*) [16])&this->field_0x230;
  auVar48._8_4_ = uVar45;
  auVar48._0_8_ = dVar54;
  auVar48._12_4_ = uVar53;
  auVar67._0_8_ = auVar66._0_8_ + auVar66._0_8_;
  auVar67._8_8_ = auVar66._8_8_ + auVar66._8_8_;
  auVar6._4_8_ = dVar44;
  auVar6._0_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[0]._4_4_;
  auVar40._0_8_ = auVar6._0_8_ << 0x20;
  auVar40._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
  auVar40._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
  auVar60._0_8_ = auVar59._8_8_ * dVar39 - dVar54 * dVar32;
  auVar60._8_8_ = auVar67._0_8_ * dVar44 - auVar61._8_8_ * dVar18;
  auVar66 = blendpd(auVar48,auVar67,2);
  auVar73._8_4_ = SUB84(auVar67._8_8_,0);
  auVar73._0_8_ = auVar67._0_8_;
  auVar73._12_4_ = (int)((ulonglong)auVar67._8_8_ >> 0x20);
  auVar49._0_8_ = auVar66._0_8_ * dVar18 - auVar67._0_8_ * auVar34._0_8_;
  auVar49._8_8_ = auVar66._8_8_ * dVar4 - auVar73._8_8_ * auVar34._8_8_;
  auVar34 = *(undefined1 (*) [16])&this->field_0x240;
  auVar41._8_8_ = auVar40._8_8_;
  auVar41._0_8_ = auVar34._0_8_;
  local_f8[0]._s_0.X = 0.0;
  local_f8[0]._s_0.Y = 0.0;
  auVar66 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar27);
  lVar12 = -(ulonglong)
            ((double)CONCAT44(auVar27._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              auVar27._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
            local_108);
  lVar14 = -(ulonglong)
            ((double)CONCAT44(auVar27._12_4_ & _UNK_15061cc8c,auVar27._8_4_ & _UNK_15061cc88) <=
            dStack_100);
  auVar20._8_4_ = SUB84(auVar60._8_8_,0);
  auVar20._0_8_ = auVar60._0_8_;
  auVar20._12_4_ = (int)((ulonglong)auVar60._8_8_ >> 0x20);
  lVar13 = -(ulonglong)
            ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & auVar34._4_4_,
                              (uint)__xmm_7fffffffffffffff7fffffffffffffff & auVar34._0_4_) <=
            (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
  dVar63 = (double)CONCAT44(~(uint)((ulonglong)lVar12 >> 0x20) & auVar66._4_4_,
                            ~(uint)lVar12 & auVar66._0_4_) *
           (dVar54 * dVar4 + dVar63 + auVar20._8_8_);
  dVar18 = (double)CONCAT44(~(uint)((ulonglong)lVar14 >> 0x20) & auVar66._12_4_,
                            ~(uint)lVar14 & auVar66._8_4_) *
           (dVar58 * dVar4 + dVar5 + auVar49._0_8_);
  auVar21 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar41);
  auVar66._8_4_ = SUB84(dVar18,0);
  auVar66._0_8_ = dVar63;
  auVar66._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
  dVar18 = (param_2->field0_0x0)._s_0.Z;
  dVar54 = *(double *)&this->field_0x1f0 *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar58 = *(double *)&this->field_0x1f8 *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  dVar5 = *(double *)&this->field_0x200 *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar32 = *(double *)&this->field_0x208 *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  auVar35._8_4_ = SUB84(dVar58,0);
  auVar35._0_8_ = dVar54;
  uVar45 = (undefined4)((ulonglong)dVar58 >> 0x20);
  auVar35._12_4_ = uVar45;
  auVar61 = blendpd(auVar60,auVar49,2);
  auVar27 = *(undefined1 (*) [16])&param_2->field0_0x0;
  auVar34._8_4_ = SUB84(dVar32,0);
  auVar34._0_8_ = dVar5;
  auVar34._12_4_ = (int)((ulonglong)dVar32 >> 0x20);
  auVar36 = blendpd(auVar35,auVar34,2);
  dVar72 = auVar27._8_8_;
  auVar31._8_4_ = SUB84(dVar58,0);
  auVar31._0_8_ = dVar54;
  auVar31._12_4_ = uVar45;
  dVar44 = auVar31._8_8_;
  auVar22._8_4_ = SUB84(dVar5,0);
  auVar22._0_8_ = dVar44;
  auVar22._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  auVar69._8_8_ = 0;
  auVar69._0_8_ = dVar18;
  auVar34 = blendpd(auVar27,auVar69,2);
  auVar68._0_8_ = dVar72 * dVar54 - dVar44 * auVar27._0_8_;
  auVar68._8_8_ = dVar18 * dVar58 - auVar22._8_8_ * dVar72;
  dVar39 = auVar36._8_8_;
  auVar50._8_4_ = SUB84(auVar68._8_8_,0);
  auVar50._0_8_ = auVar68._0_8_;
  auVar50._12_4_ = (int)((ulonglong)auVar68._8_8_ >> 0x20);
  auVar29._0_8_ = auVar34._0_8_ * dVar5 - auVar36._0_8_ * dVar18;
  auVar29._8_8_ = auVar34._8_8_ * dVar32 - dVar39 * 0.0;
  dVar47 = auVar50._8_8_ + auVar50._8_8_;
  dVar52 = auVar29._0_8_ + auVar29._0_8_;
  auVar69 = blendpd(auVar68,auVar29,2);
  auVar34 = *(undefined1 (*) [16])&this->field_0x230;
  uVar45 = SUB84(dVar52,0);
  auVar56._8_4_ = uVar45;
  auVar56._0_8_ = dVar47;
  uVar53 = (undefined4)((ulonglong)dVar52 >> 0x20);
  auVar56._12_4_ = uVar53;
  auVar70._0_8_ = auVar69._0_8_ + auVar69._0_8_;
  auVar70._8_8_ = auVar69._8_8_ + auVar69._8_8_;
  auVar23._8_4_ = uVar45;
  auVar23._0_8_ = dVar47;
  auVar23._12_4_ = uVar53;
  lVar12 = -(ulonglong)
            ((double)CONCAT44(auVar34._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              auVar34._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
            local_108);
  lVar15 = -(ulonglong)
            ((double)CONCAT44(auVar34._12_4_ & _UNK_15061cc8c,auVar34._8_4_ & _UNK_15061cc88) <=
            dStack_100);
  auVar42._8_4_ = uVar45;
  auVar42._0_8_ = dVar47;
  auVar42._12_4_ = uVar53;
  auVar57._0_8_ = auVar56._8_8_ * dVar54 - dVar47 * dVar44;
  auVar57._8_8_ = auVar70._0_8_ * dVar58 - auVar23._8_8_ * dVar5;
  auVar69 = blendpd(auVar42,auVar70,2);
  auVar24._8_4_ = SUB84(auVar70._8_8_,0);
  auVar24._0_8_ = auVar70._0_8_;
  auVar24._12_4_ = (int)((ulonglong)auVar70._8_8_ >> 0x20);
  auVar7._4_8_ = dVar39;
  auVar7._0_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[0]._4_4_;
  auVar37._0_8_ = auVar7._0_8_ << 0x20;
  auVar37._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
  auVar37._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
  auVar73 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar34);
  auVar43._0_8_ = auVar69._0_8_ * dVar5 - auVar70._0_8_ * auVar36._0_8_;
  auVar43._8_8_ = auVar69._8_8_ * dVar32 - auVar24._8_8_ * dVar39;
  auVar34 = *(undefined1 (*) [16])&this->field_0x240;
  auVar38._8_8_ = auVar37._8_8_;
  auVar38._0_8_ = auVar34._0_8_;
  auVar25._8_4_ = SUB84(auVar57._8_8_,0);
  auVar25._0_8_ = auVar57._0_8_;
  auVar25._12_4_ = (int)((ulonglong)auVar57._8_8_ >> 0x20);
  auVar69 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar38);
  lVar14 = -(ulonglong)
            ((double)CONCAT44(auVar34._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              auVar34._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
            (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
  auVar34 = blendpd(auVar57,auVar43,2);
  auVar71._0_8_ = auVar70._0_8_ * dVar32 + dVar18 + auVar34._0_8_;
  auVar71._8_8_ = auVar70._8_8_ * dVar32 + 0.0 + auVar34._8_8_;
  local_c8 = (double)CONCAT44(~(uint)((ulonglong)lVar14 >> 0x20) & auVar69._4_4_,
                              ~(uint)lVar14 & auVar69._0_4_) * auVar71._0_8_;
  dVar5 = (double)CONCAT44(~(uint)((ulonglong)lVar12 >> 0x20) & auVar73._4_4_,
                           ~(uint)lVar12 & auVar73._0_4_) *
          (dVar47 * dVar32 + auVar27._0_8_ + auVar25._8_8_);
  dVar32 = (double)CONCAT44(~(uint)((ulonglong)lVar15 >> 0x20) & auVar73._12_4_,
                            ~(uint)lVar15 & auVar73._8_4_) *
           (dVar52 * dVar32 + dVar72 + auVar43._0_8_);
  dVar18 = (double)(this->CurrentDrawSize).field0_0x0._s_0.X /
           (this->CylinderArcAngle * __real_3f91df46a2529d39);
  __libm_sse2_sincos_();
  uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  dStack_140 = auVar66._8_8_;
  dVar58 = (double)CONCAT44((uint)((ulonglong)(extraout_XMM0_Qb * dVar18) >> 0x20) ^
                            __xmm_80000000000000008000000000000000._4_4_,
                            SUB84(extraout_XMM0_Qb * dVar18,0) ^
                            (uint)__xmm_80000000000000008000000000000000);
  dVar39 = (dVar19 - (this->Pivot).field0_0x0._s_0.X) * (dVar18 + dVar18) * extraout_XMM0_Qa +
           dStack_140;
  dVar54 = dVar5 * dVar5 + dVar32 * dVar32;
  dVar44 = dVar39 * dVar32 + dVar58 * dVar5;
  dVar44 = dVar44 + dVar44;
  auVar62._0_8_ =
       dVar44 * dVar44 -
       ((dVar58 * dVar58 + dVar39 * dVar39) - (double)((float)dVar18 * (float)dVar18)) * dVar54 *
       __real_4010000000000000;
  auVar62._8_8_ = 0;
  if (auVar62._0_8_ < 0.0) {
    *(double *)__return_storage_ptr__ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    *(undefined8 *)&__return_storage_ptr__->field_0x8 = uVar8;
    *(double *)&__return_storage_ptr__->field_0x10 =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    *(TVector2<double>_u_0 *)&__return_storage_ptr__->field_0x18 =
         (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  }
  else {
    auVar27 = sqrtpd(auVar71,auVar62);
    dVar54 = (auVar27._0_8_ - dVar44) * (dVar19 / dVar54);
    dVar44 = FGenericPlatformMath::Atan2(dVar18 * __real_bff0000000000000 * extraout_XMM0_Qa,dVar58)
    ;
    dVar19 = __real_401921fb60000000;
    dVar44 = FGenericPlatformMath::Fmod(dVar44 + __real_401921fb60000000,__real_401921fb60000000);
    dVar18 = FGenericPlatformMath::Atan2(dVar18 * extraout_XMM0_Qa,dVar58);
    dVar19 = FGenericPlatformMath::Fmod(dVar18 + dVar19,dVar19);
    local_120._s_0.X = dVar54 * dVar5 + dVar63;
    dVar63 = dVar54 * local_c8 +
             (double)CONCAT44(~(uint)((ulonglong)lVar13 >> 0x20) & auVar21._4_4_,
                              ~(uint)lVar13 & auVar21._0_4_) *
             (auVar67._0_8_ * dVar4 + dVar17 + auVar61._0_8_);
    local_120._s_0.Y = dVar54 * dVar32 + dStack_140;
    local_120._s_0.Z = dVar63;
    dVar18 = FGenericPlatformMath::Atan2(dVar54 * dVar32 + dVar39,dVar54 * dVar5 + dVar58);
    fVar16 = FGenericPlatformMath::Fmod((float)dVar18 + __real_40c90fdb,__real_40c90fdb);
    dVar18 = dVar19;
    if (dVar44 <= dVar19) {
      dVar18 = dVar44;
    }
    iVar1 = (this->CurrentDrawSize).field0_0x0._s_0.X;
    uVar46 = SUB84(dVar19 - dVar44,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar51 = (uint)((ulonglong)(dVar19 - dVar44) >> 0x20) &
             __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    iVar2 = (this->CurrentDrawSize).field0_0x0._s_0.Y;
    dVar5 = (this->Pivot).field0_0x0._s_0.Y;
    pTVar11 = UE::Math::TTransform<double>::TransformPosition
                        ((TTransform<double> *)&this->field_0x1f0,
                         (TVector<double> *)&local_f8[0]._s_0,(TVector<double> *)&local_120._s_0);
    dVar4 = (pTVar11->field0_0x0)._s_0.Y;
    *(double *)__return_storage_ptr__ = (pTVar11->field0_0x0)._s_0.X;
    *(double *)&__return_storage_ptr__->field_0x8 = dVar4;
    *(double *)&__return_storage_ptr__->field_0x10 = (pTVar11->field0_0x0)._s_0.Z;
    *(double *)&__return_storage_ptr__->field_0x18 =
         (double)iVar1 * (((double)fVar16 - dVar18) / (double)CONCAT44(uVar51,uVar46));
    *(double *)&__return_storage_ptr__->field_0x20 = (double)iVar2 * dVar5 - dVar63;
  }
  return __return_storage_ptr__;
}

// GetDrawSize @ 146a74c50

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

TVector2<double> * __thiscall
UWidgetComponent::GetDrawSize(UWidgetComponent *this,TVector2<double> *__return_storage_ptr__)

{
  TIntPoint<int>_u_0_s_0 TVar1;
  
  TVar1 = (this->DrawSize).field0_0x0._s_0;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)TVar1.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)TVar1.Y;
  return __return_storage_ptr__;
}

// GetHitWidgetPath @ 146a76760

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

TArray<FWidgetAndPointer,TSizedDefaultAllocator<32>_> * __thiscall
UWidgetComponent::GetHitWidgetPath
          (UWidgetComponent *this,
          TArray<FWidgetAndPointer,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TVector2<double> *param_1,bool param_2,float param_3)

{
  double dVar1;
  double dVar2;
  int iVar3;
  SVirtualWindow *this_00;
  double dVar4;
  FDeprecateVector2DParameter FVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  FHittestGrid *this_01;
  TArray<FWidgetAndPointer,TSizedDefaultAllocator<32>_> *pTVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  float fVar12;
  float fVar13;
  float local_res8;
  float fStackX_c;
  float local_res10;
  float fStackX_14;
  TArray<FWidgetAndPointer,TSizedDefaultAllocator<32>_> local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  FScriptContainerElement local_58 [64];
  
  dVar1 = (this->LastLocalHitLocation).field0_0x0._s_0.Y;
  local_res10 = (float)(this->LastLocalHitLocation).field0_0x0._s_0.X;
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  dVar4 = (param_1->field0_0x0)._s_0.Y;
  fVar12 = (float)(param_1->field0_0x0)._s_0.X;
  (this->LastLocalHitLocation).field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
  (this->LastLocalHitLocation).field0_0x0._s_0.Y = dVar4;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  fVar13 = (float)dVar2;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  this_00 = (this->SlateWindow).Object;
  local_68 = CONCAT44(fVar13,fVar12);
  fStackX_14 = (float)dVar1;
  uStack_60 = CONCAT44(fStackX_14,local_res10);
  if (this_00 != (SVirtualWindow *)0x0) {
    local_res8 = fVar12;
    fStackX_c = fVar13;
    this_01 = SWindow::GetHittestGrid((SWindow *)this_00);
    FVar5._4_4_ = fVar13;
    FVar5._0_4_ = fVar12;
    local_res8 = fVar12;
    fStackX_c = fVar13;
    pTVar8 = FHittestGrid::GetBubblePath(this_01,&local_78,FVar5,param_3,param_2,-1);
    if (__return_storage_ptr__ != pTVar8) {
      DestructItems<FWidgetAndPointer,int>
                ((FWidgetAndPointer *)(__return_storage_ptr__->AllocatorInstance).Data,
                 __return_storage_ptr__->ArrayNum);
      pFVar9 = (__return_storage_ptr__->AllocatorInstance).Data;
      if (pFVar9 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar9);
      }
      (__return_storage_ptr__->AllocatorInstance).Data = (pTVar8->AllocatorInstance).Data;
      (pTVar8->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      __return_storage_ptr__->ArrayNum = pTVar8->ArrayNum;
      __return_storage_ptr__->ArrayMax = pTVar8->ArrayMax;
      pTVar8->ArrayNum = 0;
      pTVar8->ArrayMax = 0;
    }
    DestructItems<FWidgetAndPointer,int>
              ((FWidgetAndPointer *)local_78.AllocatorInstance.Data,local_78.ArrayNum);
    if ((FWidgetAndPointer *)local_78.AllocatorInstance.Data != (FWidgetAndPointer *)0x0) {
      FMemory::Free(local_78.AllocatorInstance.Data);
    }
    uVar7 = uStack_60;
    uVar6 = local_68;
    pFVar11 = (__return_storage_ptr__->AllocatorInstance).Data;
    iVar3 = __return_storage_ptr__->ArrayNum;
    pFVar9 = pFVar11 + 0x48;
    pFVar10 = pFVar11 + (longlong)iVar3 * 0x60;
    while( true ) {
      if (__return_storage_ptr__->ArrayNum != iVar3) {
        `TCheckedPointerIterator<FWidgetAndPointer,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_res8);
      }
      if (pFVar11 == pFVar10) break;
      if (local_58 != pFVar9) {
        *(undefined8 *)pFVar9 = uVar6;
        *(undefined8 *)(pFVar9 + 8) = uVar7;
        pFVar9[0x10] = (FScriptContainerElement)0x1;
      }
      pFVar11 = pFVar11 + 0x60;
      pFVar9 = pFVar9 + 0x60;
    }
  }
  return __return_storage_ptr__;
}

// GetHitWidgetPath @ 146a76930

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

TArray<FWidgetAndPointer,TSizedDefaultAllocator<32>_> * __thiscall
UWidgetComponent::GetHitWidgetPath
          (UWidgetComponent *this,
          TArray<FWidgetAndPointer,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TVector<double> *param_1,bool param_2,float param_3)

{
  code *pcVar1;
  bool bVar2;
  TArray<FWidgetAndPointer,TSizedDefaultAllocator<32>_> *pTVar3;
  double local_48;
  double dStack_40;
  TVector2<double>_u_0 local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  double local_18;
  
  if (this->GeometryMode != Plane) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4348376515700852877>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\WidgetComponent.cpp"
                       ,0x88d,"GeometryMode == EWidgetGeometryMode::Plane");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArray<FWidgetAndPointer,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  local_28 = *(undefined4 *)&param_1->field0_0x0;
  uStack_24 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 4);
  uStack_20 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 8);
  uStack_1c = *(undefined4 *)((longlong)&param_1->field0_0x0 + 0xc);
  local_18 = (param_1->field0_0x0)._s_0.Z;
  (**(code **)(*(longlong *)this + 0xb48))(this,&local_28,&local_48);
  local_38._s_0.X = local_48;
  local_38._s_0.Y = dStack_40;
  GetHitWidgetPath(this,__return_storage_ptr__,(TVector2<double> *)&local_38._s_0,param_2,param_3);
  return __return_storage_ptr__;
}

// GetLocalHitLocation @ 146a76d50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
UWidgetComponent::GetLocalHitLocation
          (UWidgetComponent *this,TVector<double> *param_1,TVector2<double> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  longlong lVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  double dVar20;
  undefined4 uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined4 uVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [32];
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (this->GeometryMode != Plane) {
    `UWidgetComponent::GetLocalHitLocation'::__l2::<lambda_1>::operator()(local_c8);
  }
  dVar20 = *(double *)&this->field_0x1f0 *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar10 = *(double *)&this->field_0x1f8 *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  uVar21 = (undefined4)((ulonglong)dVar10 >> 0x20);
  dVar17 = *(double *)&this->field_0x200 *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar1 = *(double *)&this->field_0x208 *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  auVar15._8_4_ = SUB84(dVar10,0);
  auVar15._0_8_ = dVar20;
  auVar15._12_4_ = uVar21;
  dVar7 = (param_1->field0_0x0)._s_0.Z - *(double *)&this->field_0x220;
  dVar3 = (param_1->field0_0x0)._s_0.X - *(double *)&this->field_0x210;
  dVar4 = (param_1->field0_0x0)._s_0.Y - *(double *)&this->field_0x218;
  uVar25 = (undefined4)((ulonglong)dVar4 >> 0x20);
  auVar18._8_4_ = SUB84(dVar10,0);
  auVar18._0_8_ = dVar20;
  auVar18._12_4_ = uVar21;
  auVar12._8_4_ = SUB84(dVar1,0);
  auVar12._0_8_ = dVar17;
  auVar12._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  auVar19 = blendpd(auVar18,auVar12,2);
  dVar16 = auVar15._8_8_;
  auVar28._8_4_ = SUB84(dVar4,0);
  auVar28._0_8_ = dVar3;
  auVar28._12_4_ = uVar25;
  auVar14._8_4_ = SUB84(dVar17,0);
  auVar14._0_8_ = dVar16;
  auVar14._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
  auVar11._8_4_ = SUB84(dVar4,0);
  auVar11._0_8_ = dVar3;
  auVar11._12_4_ = uVar25;
  auVar29._0_8_ = auVar28._8_8_ * dVar20 - dVar16 * dVar3;
  auVar29._8_8_ = dVar7 * dVar10 - auVar14._8_8_ * dVar4;
  auVar23._8_8_ = 0;
  auVar23._0_8_ = dVar7;
  auVar12 = blendpd(auVar11,auVar23,2);
  auVar13._0_8_ = auVar12._0_8_ * dVar17 - auVar19._0_8_ * dVar7;
  auVar13._8_8_ = auVar12._8_8_ * dVar1 - auVar19._8_8_ * 0.0;
  auVar12 = blendpd(auVar29,auVar13,2);
  dVar3 = auVar29._8_8_ + auVar29._8_8_;
  dVar2 = auVar13._0_8_ + auVar13._0_8_;
  uVar21 = SUB84(dVar2,0);
  uVar25 = (undefined4)((ulonglong)dVar2 >> 0x20);
  auVar30._0_8_ = auVar12._0_8_ + auVar12._0_8_;
  auVar30._8_8_ = auVar12._8_8_ + auVar12._8_8_;
  auVar26._8_4_ = uVar21;
  auVar26._0_8_ = dVar3;
  auVar26._12_4_ = uVar25;
  auVar8._8_4_ = uVar21;
  auVar8._0_8_ = dVar3;
  auVar8._12_4_ = uVar25;
  auVar22._8_4_ = uVar21;
  auVar22._0_8_ = dVar3;
  auVar22._12_4_ = uVar25;
  auVar23 = blendpd(auVar22,auVar30,2);
  auVar12 = *(undefined1 (*) [16])&this->field_0x230;
  auVar27._0_8_ = auVar26._8_8_ * dVar20 - dVar3 * dVar16;
  auVar27._8_8_ = auVar30._0_8_ * dVar10 - auVar8._8_8_ * dVar17;
  auVar9._8_4_ = SUB84(auVar30._8_8_,0);
  auVar9._0_8_ = auVar30._0_8_;
  auVar9._12_4_ = (int)((ulonglong)auVar30._8_8_ >> 0x20);
  auVar24._0_8_ = auVar23._0_8_ * dVar17 - auVar30._0_8_ * auVar19._0_8_;
  auVar24._8_8_ = auVar23._8_8_ * dVar1 - auVar9._8_8_ * auVar19._8_8_;
  auVar23 = *(undefined1 (*) [16])&this->field_0x240;
  lVar5 = -(ulonglong)
           ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & auVar23._4_4_,
                             (uint)__xmm_7fffffffffffffff7fffffffffffffff & auVar23._0_4_) <=
           (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
  lVar6 = -(ulonglong)
           ((double)CONCAT44(auVar12._12_4_ & _UNK_15061cc8c,auVar12._8_4_ & _UNK_15061cc88) <=
           (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
  auVar14 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar12);
  auVar19._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
  auVar19._0_8_ = auVar23._0_8_;
  auVar19._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
  auVar12 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar19);
  auVar23 = blendpd(auVar27,auVar24,2);
  dVar20 = (double)CONCAT44(~(uint)((ulonglong)lVar6 >> 0x20) & auVar14._12_4_,
                            ~(uint)lVar6 & auVar14._8_4_) * (dVar2 * dVar1 + dVar4 + auVar24._0_8_);
  dVar17 = (double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) ^
                            __xmm_80000000000000008000000000000000._4_4_,
                            SUB84(dVar20,0) ^ (uint)__xmm_80000000000000008000000000000000);
  dVar20 = (double)CONCAT44(~(uint)((ulonglong)lVar5 >> 0x20) & auVar12._4_4_,
                            ~(uint)lVar5 & auVar12._0_4_) *
           (auVar30._0_8_ * dVar1 + dVar7 + auVar23._0_8_);
  dVar10 = (double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) ^
                            __xmm_80000000000000008000000000000000._4_4_,
                            SUB84(dVar20,0) ^ (uint)__xmm_80000000000000008000000000000000);
  (param_2->field0_0x0)._s_0.X = dVar17;
  (param_2->field0_0x0)._s_0.Y = dVar10;
  (param_2->field0_0x0)._s_0.X =
       (double)(this->CurrentDrawSize).field0_0x0._s_0.X * (this->Pivot).field0_0x0._s_0.X + dVar17;
  dVar10 = (double)(this->CurrentDrawSize).field0_0x0._s_0.Y * (this->Pivot).field0_0x0._s_0.Y +
           dVar10;
  (param_2->field0_0x0)._s_0.Y = dVar10;
  dVar20 = (double)(this->CurrentDrawSize).field0_0x0._s_0.Y;
  (param_2->field0_0x0)._s_0.Y = (dVar10 / dVar20) * dVar20;
  return;
}

// GetMaterial @ 146a77100

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

UMaterialInterface * __thiscall UWidgetComponent::GetMaterial(UWidgetComponent *this,int param_1)

{
  EWidgetBlendMode EVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  UMaterialInterface *pUVar5;
  longlong lVar6;
  longlong lVar7;
  
  if ((-1 < param_1) && (param_1 < *(int *)&this->field_0x550)) {
    uVar4 = 0;
    if (param_1 < *(int *)&this->field_0x550) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      pUVar5 = (UMaterialInterface *)(*pcVar2)();
      return pUVar5;
    }
    if (*(longlong *)(*(longlong *)&this->field_0x548 + (longlong)param_1 * 8) != 0) {
      uVar4 = 0;
      if (param_1 < *(int *)&this->field_0x550) {
        uVar4 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pUVar5 = (UMaterialInterface *)(*pcVar2)();
        return pUVar5;
      }
      return *(UMaterialInterface **)(*(longlong *)&this->field_0x548 + (longlong)param_1 * 8);
    }
  }
  EVar1 = this->BlendMode;
  if (EVar1 == Opaque) {
    lVar6 = 0x648;
    lVar7 = 0x650;
  }
  else if (EVar1 == Masked) {
    lVar6 = 0x658;
    lVar7 = 0x660;
  }
  else {
    if (EVar1 != Transparent) {
      return (UMaterialInterface *)0x0;
    }
    lVar6 = 0x638;
    lVar7 = 0x640;
  }
  if (this->bIsTwoSided == false) {
    lVar6 = lVar7;
  }
  return *(UMaterialInterface **)(&this->field_0x0 + lVar6);
}

// GetMaterialInstance @ 146a77250

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

UMaterialInstanceDynamic * __thiscall UWidgetComponent::GetMaterialInstance(UWidgetComponent *this)

{
  return (this->MaterialInstance).field0_0x0.DebugPtr;
}

// GetNumMaterials @ 146a77400

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

int __thiscall UWidgetComponent::GetNumMaterials(UWidgetComponent *this)

{
  int iVar1;
  
  iVar1 = 1;
  if (1 < *(int *)&this->field_0x550) {
    iVar1 = *(int *)&this->field_0x550;
  }
  return iVar1;
}

// GetOwnerPlayer @ 146a77870

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

ULocalPlayer * __thiscall UWidgetComponent::GetOwnerPlayer(UWidgetComponent *this)

{
  int iVar1;
  longlong lVar2;
  APlayerController *this_00;
  UGameInstance *this_01;
  UClass *pUVar3;
  ULocalPlayer *pUVar4;
  UWorld *pUVar5;
  
  pUVar4 = (this->OwnerPlayer).field0_0x0.DebugPtr;
  if (pUVar4 == (ULocalPlayer *)0x0) {
    lVar2 = *(longlong *)&this->field_0xa8;
    if (lVar2 != 0) {
      pUVar3 = Z_Construct_UClass_APawn_NoRegister();
      iVar1 = (int)pUVar3->_padding_;
      if (((iVar1 <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)iVar1 * 8)
           == &pUVar3->_padding_)) &&
         (this_00 = *(APlayerController **)(lVar2 + 0x2f0), this_00 != (APlayerController *)0x0)) {
        pUVar3 = Z_Construct_UClass_APlayerController_NoRegister();
        iVar1 = (int)pUVar3->_padding_;
        if (((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
            ((longlong *)
             *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
             &pUVar3->_padding_)) &&
           (pUVar4 = APlayerController::GetLocalPlayer(this_00), pUVar4 != (ULocalPlayer *)0x0)) {
          return pUVar4;
        }
      }
    }
    pUVar5 = *(UWorld **)&this->field_0xb0;
    if (((pUVar5 != (UWorld *)0x0) ||
        (pUVar5 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
        pUVar5 != (UWorld *)0x0)) &&
       (this_01 = (pUVar5->OwningGameInstance).field0_0x0.DebugPtr, this_01 != (UGameInstance *)0x0)
       ) {
      pUVar4 = UGameInstance::GetFirstGamePlayer(this_01);
      return pUVar4;
    }
    pUVar4 = (ULocalPlayer *)0x0;
  }
  return pUVar4;
}

// GetPrivateStaticClass @ 146a78390

UClass * __cdecl UWidgetComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWidgetComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"WidgetComponent",
               &Z_Registration_Info_UClass_UWidgetComponent.InnerSingleton,
               StaticRegisterNativesUWidgetComponent,0x750,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UWidgetComponent>,
               InternalVTableHelperCtorCaller<UWidgetComponent>,local_res8,
               UMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWidgetComponent.InnerSingleton;
}

// GetRenderTarget @ 146a79130

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

UTextureRenderTarget2D * __thiscall UWidgetComponent::GetRenderTarget(UWidgetComponent *this)

{
  return (this->RenderTarget).field0_0x0.DebugPtr;
}

// GetSlateWidget @ 146a79310

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

TSharedPtr<SWidget,1> * __thiscall UWidgetComponent::GetSlateWidget(UWidgetComponent *this)

{
  return &this->SlateWidget;
}

// GetSlateWindow @ 146a793b0

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

TSharedPtr<SWindow,1> * __thiscall
UWidgetComponent::GetSlateWindow
          (UWidgetComponent *this,TSharedPtr<SWindow,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (SWindow *)(this->SlateWindow).Object;
  pTVar1 = (this->SlateWindow).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetUsedMaterials @ 146a79720

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
UWidgetComponent::GetUsedMaterials
          (UWidgetComponent *this,TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *param_1,
          bool param_2)

{
  TObjectPtr<UMaterialInstanceDynamic>_u_0 local_res8 [4];
  
  local_res8[0] =
       (TObjectPtr<UMaterialInstanceDynamic>_u_0)(this->MaterialInstance).field0_0x0.DebugPtr;
  if (local_res8[0].DebugPtr != (UMaterialInstanceDynamic *)0x0) {
    TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<UMaterialInterface_*>
              (param_1,(UMaterialInterface **)&local_res8[0].DebugPtr);
  }
  return;
}

// GetUserWidgetObject @ 146a79750

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

UUserWidget * __thiscall UWidgetComponent::GetUserWidgetObject(UWidgetComponent *this)

{
  return (this->Widget).field0_0x0.DebugPtr;
}

// GetVirtualWindow @ 146a798f0

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

TSharedPtr<SWindow,1> * __thiscall
UWidgetComponent::GetVirtualWindow
          (UWidgetComponent *this,TSharedPtr<SWindow,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (SWindow *)(this->SlateWindow).Object;
  pTVar1 = (this->SlateWindow).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetWidget @ 146a79920

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

UUserWidget * __thiscall UWidgetComponent::GetWidget(UWidgetComponent *this)

{
  return (this->Widget).field0_0x0.DebugPtr;
}

// InitWidget @ 146a7a0e0

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

void __thiscall UWidgetComponent::InitWidget(UWidgetComponent *this)

{
  int iVar1;
  UClass *pUVar2;
  bool bVar3;
  UWorld *pUVar4;
  UClass *pUVar5;
  UUserWidget *pUVar6;
  UClass *local_res18;
  
  if ((FSlateApplication::CurrentApplication.Object != (FSlateApplication *)0x0) &&
     ((((pUVar4 = *(UWorld **)&this->field_0xb0, pUVar4 != (UWorld *)0x0 ||
        (pUVar4 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
        pUVar4 != (UWorld *)0x0)) &&
       (pUVar2 = (this->WidgetClass).Class.field0_0x0.DebugPtr, pUVar2 != (UClass *)0x0)) &&
      (pUVar5 = UUserWidget::StaticClass(), pUVar5 != (UClass *)0x0)))) {
    iVar1 = (int)pUVar5->_padding_;
    if (((int)pUVar2->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) != &pUVar5->_padding_)
       ) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (((bVar3) &&
        (local_res18 = (this->WidgetClass).Class.field0_0x0.DebugPtr, local_res18 != (UClass *)0x0))
       && (((this->Widget).field0_0x0.DebugPtr == (UUserWidget *)0x0 &&
           (pUVar4->bIsTearingDown == '\0')))) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)local_res18);
      }
      pUVar6 = CreateWidget<UUserWidget,UWorld_*>
                         (pUVar4,(TSubclassOf<UUserWidget>)&local_res18,(FName)0x0);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UUserWidget *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar6);
      }
      (this->Widget).field0_0x0.DebugPtr = pUVar6;
      (**(code **)(*(longlong *)this + 0x420))(this,this->TickMode != Disabled);
    }
  }
  return;
}

// IsWidgetVisible @ 146a7c7a0

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

bool __thiscall UWidgetComponent::IsWidgetVisible(UWidgetComponent *this)

{
  SVirtualWindow *pSVar1;
  UUserWidget *this_00;
  SWidget *pSVar2;
  char cVar3;
  bool bVar4;
  
  if (this->Space == World) {
    cVar3 = (**(code **)(*(longlong *)this + 0x560))();
    if (cVar3 == '\0') {
      return false;
    }
    pSVar1 = (this->SlateWindow).Object;
    if (pSVar1 == (SVirtualWindow *)0x0) {
      return false;
    }
    if ((pSVar1->_padding_ & 0x1900) == 0) {
      return false;
    }
  }
  this_00 = (this->Widget).field0_0x0.DebugPtr;
  if (this_00 != (UUserWidget *)0x0) {
    bVar4 = UWidget::IsVisible((UWidget *)this_00);
    return bVar4;
  }
  pSVar2 = (this->SlateWidget).Object;
  if ((pSVar2 != (SWidget *)0x0) && (((byte)pSVar2->VisibilityAttribute & 0x19) != 0)) {
    return true;
  }
  return false;
}

// ModifyProjectedLocalPosition @ 146a7d1d0

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

TVector2<double> * __thiscall
UWidgetComponent::ModifyProjectedLocalPosition
          (UWidgetComponent *this,TVector2<double> *__return_storage_ptr__,FGeometry *param_1,
          TVector2<double> *param_2)

{
  double dVar1;
  
  dVar1 = (param_2->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (param_2->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
  return __return_storage_ptr__;
}

// OnHiddenInGameChanged @ 146a83680

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

void __thiscall UWidgetComponent::OnHiddenInGameChanged(UWidgetComponent *this)

{
  USceneComponent::OnHiddenInGameChanged((USceneComponent *)this);
  if (((this->field_0x1a9 & 8) == 0) &&
     ((this->TickMode != Disabled || (this->bRedrawRequested != false)))) {
                    /* WARNING: Could not recover jumptable at 0x000146a836b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)this + 0x420))(this,1);
    return;
  }
  return;
}

// OnLevelRemovedFromWorld @ 146a83eb0

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
UWidgetComponent::OnLevelRemovedFromWorld(UWidgetComponent *this,ULevel *param_1,UWorld *param_2)

{
  UWorld *pUVar1;
  
  if (param_1 == (ULevel *)0x0) {
    pUVar1 = *(UWorld **)&this->field_0xb0;
    if (pUVar1 == (UWorld *)0x0) {
      pUVar1 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    }
    if (param_2 == pUVar1) {
      (**(code **)(*(longlong *)this + 0xb30))(this);
    }
  }
  return;
}

// OnRegister @ 146a86380

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
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall UWidgetComponent::OnRegister(UWidgetComponent *this)

{
  bool bVar1;
  UWorld *this_00;
  FWidgetRenderer *this_01;
  FWidgetRenderer *pFVar2;
  SViewport *local_28;
  undefined8 uStack_20;
  TSharedPtr<SViewport,1> local_18;
  
  (this->CurrentDrawSize).field0_0x0 = (this->DrawSize).field0_0x0;
  UPrimitiveComponent::OnRegister((UPrimitiveComponent *)this);
  pFVar2 = (FWidgetRenderer *)0x0;
  uStack_20 = (TReferenceControllerBase<1> *)((ulonglong)uStack_20._4_4_ << 0x20);
  local_28 = (SViewport *)OnLevelRemovedFromWorld;
  TMulticastDelegateRegistration<void___cdecl(ULevel_*,UWorld_*),FDefaultDelegateUserPolicy>::
  AddUObject<UWidgetComponent>
            ((TMulticastDelegateRegistration<void___cdecl(ULevel_*,UWorld_*),FDefaultDelegateUserPolicy>
              *)&FWorldDelegates::LevelRemovedFromWorld,(UWidgetComponent *)&stack0x00000008,
             (pmf_06f1b69c *)this);
  this_00 = *(UWorld **)&this->field_0xb0;
  if (this_00 == (UWorld *)0x0) {
    this_00 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
  }
  bVar1 = UWorld::IsGameWorld(this_00);
  if (this->Space != Screen) {
    if (((this->bReceiveHardwareInput != false) && (this->GeometryMode == Plane)) && (bVar1)) {
      (**(code **)(GEngine->_padding_ + 1000))(GEngine,&local_28);
      local_18.Object = local_28;
      local_18.SharedReferenceCount.ReferenceController = uStack_20;
      if (uStack_20 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        uStack_20->SharedReferenceCount = (atomic<int>)((int)uStack_20->SharedReferenceCount + 1);
        UNLOCK();
      }
      RegisterHitTesterWithViewport(this,&local_18);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(uStack_20)
      ;
    }
    if ((this->WidgetRenderer == (FWidgetRenderer *)0x0) && (GRHIGlobals.UsingNullRHI == false)) {
      this_01 = ::operator_new(0x40);
      if (this_01 != (FWidgetRenderer *)0x0) {
        pFVar2 = FWidgetRenderer::FWidgetRenderer(this_01,this->bApplyGammaCorrection,true);
      }
      this->WidgetRenderer = pFVar2;
    }
  }
  (this->BodySetup).field0_0x0.DebugPtr = (UBodySetup *)0x0;
  return;
}

// OnUnregister @ 146a874a0

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

void __thiscall UWidgetComponent::OnUnregister(UWidgetComponent *this)

{
  code *pcVar1;
  FSharedReferencer<1> FVar2;
  bool bVar3;
  UWorld *this_00;
  SViewport *this_01;
  TSharedPtr<SViewport,1> local_48;
  TSharedPtr<ICustomHitTestPath,1> local_38;
  SViewport *local_28;
  TReferenceControllerBase<1> *local_20;
  TSharedPtr<ICustomHitTestPath,1> local_18;
  
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FWorldDelegates::LevelRemovedFromWorld,this);
  this_00 = *(UWorld **)&this->field_0xb0;
  if (this_00 == (UWorld *)0x0) {
    this_00 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
  }
  bVar3 = UWorld::IsGameWorld(this_00);
  if (bVar3) {
    (**(code **)(GEngine->_padding_ + 1000))(GEngine,&local_28);
    if (local_28 != (SViewport *)0x0) {
      local_48.Object = local_28;
      local_48.SharedReferenceCount.ReferenceController = local_20;
      if (local_20 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_20->SharedReferenceCount = (atomic<int>)((int)local_20->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((this->bReceiveHardwareInput != false) && (this->GeometryMode == Plane)) {
        if (local_28 == (SViewport *)0x0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          if (bVar3) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        SViewport::GetCustomHitTestPath(local_28,&local_38);
        FVar2.ReferenceController = local_38.SharedReferenceCount.ReferenceController;
        if ((FWidget3DHitTester *)local_38.Object != (FWidget3DHitTester *)0x0) {
          if (local_38.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          if ((FWidget3DHitTester *)local_38.Object == (FWidget3DHitTester *)0x0) {
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L"");
            if (bVar3) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
          }
          FWidget3DHitTester::UnregisterWidgetComponent((FWidget3DHitTester *)local_38.Object,this);
          if ((FWidget3DHitTester *)local_38.Object == (FWidget3DHitTester *)0x0) {
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L"");
            if (bVar3) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
          }
          if (((TArray<TWeakObjectPtr<UWidgetComponent,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
                *)((longlong)local_38.Object + 8))->ArrayNum == 0) {
            this_01 = TSharedPtr<SViewport,1>::operator->(&local_48);
            local_18.Object = (ICustomHitTestPath *)0x0;
            local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
            SViewport::SetCustomHitTestPath(this_01,&local_18);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar2.ReferenceController);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_38.SharedReferenceCount.ReferenceController);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_48.SharedReferenceCount.ReferenceController);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
  }
  UPrimitiveComponent::OnUnregister((UPrimitiveComponent *)this);
  return;
}

// OnWidgetVisibilityChanged @ 146a876d0

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
UWidgetComponent::OnWidgetVisibilityChanged(UWidgetComponent *this,ESlateVisibility param_1)

{
  UUserWidget *pUVar1;
  code *pcVar2;
  bool bVar3;
  
  if (this->TickMode == Enabled) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4348376515700851700>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\WidgetComponent.cpp"
                       ,0x3f4,"TickMode != ETickMode::Enabled");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((this->Widget).field0_0x0.DebugPtr == (UUserWidget *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4348376515700851701>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\WidgetComponent.cpp"
                       ,0x3f5,"Widget");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (this->bOnWidgetVisibilityChangedRegistered == false) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4348376515700851702>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\WidgetComponent.cpp"
                       ,0x3f6,"bOnWidgetVisibilityChangedRegistered");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (1 < (byte)(param_1 - Collapsed)) {
    if ((this->TickMode != Disabled) || (this->bRedrawRequested != false)) {
      (**(code **)(*(longlong *)this + 0x420))(this,1);
    }
    if (this->bOnWidgetVisibilityChangedRegistered != false) {
      pUVar1 = (this->Widget).field0_0x0.DebugPtr;
      if (pUVar1 != (UUserWidget *)0x0) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &pUVar1->OnNativeVisibilityChanged,this);
      }
      this->bOnWidgetVisibilityChangedRegistered = false;
    }
  }
  return;
}

// OnWorldUserEntered @ 146a877f0

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

void __thiscall UWidgetComponent::OnWorldUserEntered(UWidgetComponent *this,int param_1)

{
  int local_res8 [2];
  int local_res10 [6];
  
  local_res10[0] = param_1;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
            (&this->UsersEnteredWorldWidget,local_res8,(bool *)local_res10);
  return;
}

// PostLoad @ 146a8a250

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

void __thiscall UWidgetComponent::PostLoad(UWidgetComponent *this)

{
  UPrimitiveComponent::PostLoad((UPrimitiveComponent *)this);
                    /* WARNING: Could not recover jumptable at 0x000146a8a269. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x378))(this);
  return;
}

// RegisterHitTesterWithViewport @ 146a8d540

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
UWidgetComponent::RegisterHitTesterWithViewport
          (UWidgetComponent *this,TSharedPtr<SViewport,1> *param_1)

{
  SViewport *this_00;
  code *pcVar1;
  FSharedReferencer<1> FVar2;
  bool bVar3;
  FWidget3DHitTester *pFVar4;
  UWorld *pUVar5;
  UWorld *pUVar6;
  ICustomHitTestPath *pIVar7;
  FWidget3DHitTester *pFVar8;
  FWeakObjectPtr local_res10;
  UWorld *local_res18;
  TRawPtrProxy<FWidget3DHitTester> local_res20;
  UWidgetComponent *local_88 [2];
  TSharedPtr<ICustomHitTestPath,1> local_78;
  TSharedPtr<ICustomHitTestPath,1> local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined1 uStack_3c;
  undefined2 uStack_3b;
  undefined1 uStack_39;
  
  if (param_1->Object != (SViewport *)0x0) {
    SViewport::GetCustomHitTestPath(param_1->Object,&local_78);
    pFVar8 = (FWidget3DHitTester *)0x0;
    pIVar7 = local_78.Object;
    if (local_78.Object == (ICustomHitTestPath *)0x0) {
      pFVar4 = ::operator_new(0x138);
      if (pFVar4 != (FWidget3DHitTester *)0x0) {
        local_res18 = *(UWorld **)&this->field_0xb0;
        if (local_res18 == (UWorld *)0x0) {
          local_res18 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
        }
        (pFVar4->RegisteredComponents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        pFVar4->_padding_ = (longlong)&___7FWidget3DHitTester__6B_;
        (pFVar4->RegisteredComponents).ArrayNum = 0;
        (pFVar4->RegisteredComponents).ArrayMax = 0;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18 != (UWorld *)0x0))
        {
          UE::GC::MarkAsReachable((UObject *)local_res18);
        }
        (pFVar4->World).WeakPtr = (FWeakObjectPtr)0x0;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18 != (UWorld *)0x0))
        {
          UE::GC::MarkAsReachable((UObject *)local_res18);
        }
        FWeakObjectPtr::operator=(&(pFVar4->World).WeakPtr,(FObjectPtr)&local_res18);
        pFVar4->CachedFrame = -1;
        memset(&pFVar4->CachedHitResult,0,0x100);
        uStack_3b = 0;
        (pFVar4->CachedHitResult).HitObjectHandle.ReferenceObject.WeakPtr = (FWeakObjectPtr)0x0;
        (pFVar4->CachedHitResult).HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr =
             (FWeakObjectPtr)0x0;
        uStack_39 = 0;
        local_58 = 0;
        uStack_50 = 0;
        local_48 = 0;
        uStack_40 = 0xffffffff;
        uStack_3c = 0;
        (pFVar4->CachedHitResult).Time = 1.0;
        (pFVar4->CachedHitResult).MyItem = -1;
        (pFVar4->CachedHitResult).HitObjectHandle.ManagerInterface.InterfaceInstance =
             (IActorInstanceManagerInterface *)0x0;
        (pFVar4->CachedHitResult).HitObjectHandle.InstanceIndex = -1;
        (pFVar4->CachedHitResult).HitObjectHandle.ResolutionStatus = Invalid;
        *(undefined3 *)&(pFVar4->CachedHitResult).HitObjectHandle.field_0x1d = 0;
        pFVar8 = pFVar4;
      }
      local_res20.Object = pFVar8;
      TSharedPtr<ICustomHitTestPath,1>::operator=<FWidget3DHitTester>(&local_78,&local_res20);
      if ((param_1->Object == (SViewport *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      this_00 = param_1->Object;
      local_68.Object = local_78.Object;
      local_68.SharedReferenceCount.ReferenceController =
           local_78.SharedReferenceCount.ReferenceController;
      if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      SViewport::SetCustomHitTestPath(this_00,&local_68);
      pIVar7 = local_78.Object;
    }
    FVar2.ReferenceController = local_78.SharedReferenceCount.ReferenceController;
    if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pIVar7 == (ICustomHitTestPath *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pUVar5 = (UWorld *)FWeakObjectPtr::Get((FWeakObjectPtr *)(pIVar7 + 3));
    pUVar6 = *(UWorld **)&this->field_0xb0;
    if (pUVar6 == (UWorld *)0x0) {
      pUVar6 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    }
    if (pUVar5 == pUVar6) {
      if ((pIVar7 == (ICustomHitTestPath *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      local_res10.ObjectIndex = 0;
      local_res10.ObjectSerialNumber = 0;
      local_88[0] = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)local_88);
      TArray<TWeakObjectPtr<UWidgetComponent,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::
      AddUniqueImpl<TWeakObjectPtr<UWidgetComponent,FWeakObjectPtr>_>
                ((TArray<TWeakObjectPtr<UWidgetComponent,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
                  *)(pIVar7 + 1),(TWeakObjectPtr<UWidgetComponent,FWeakObjectPtr> *)&local_res10);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar2.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_78.SharedReferenceCount.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// RegisterWindow @ 146a8d840

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

void __thiscall UWidgetComponent::RegisterWindow(UWidgetComponent *this)

{
  TSharedPtr<SVirtualWindow,1> *this_00;
  UGameInstance *this_01;
  bool bVar1;
  FSlateApplication *this_02;
  TSharedRef<SVirtualWindow,1> *pTVar2;
  UWorld *this_03;
  UGameViewportClient *this_04;
  SVirtualWindow *this_05;
  TSharedPtr<SViewport,1> *pTVar3;
  TSharedRef<SWindow,1> local_28;
  TSharedRef<SVirtualWindow,1> local_18;
  
  this_00 = &this->SlateWindow;
  if (this_00->Object != (SVirtualWindow *)0x0) {
    if (((this->bReceiveHardwareInput == false) || (this->GeometryMode != Plane)) &&
       (FSlateApplication::CurrentApplication.Object != (FSlateApplication *)0x0)) {
      this_02 = FSlateApplication::Get();
      pTVar2 = TSharedPtr<SVirtualWindow,1>::ToSharedRef(this_00,&local_18);
      local_28.Object = (SWindow *)pTVar2->Object;
      local_28.SharedReferenceCount.ReferenceController =
           (pTVar2->SharedReferenceCount).ReferenceController;
      if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      FSlateApplication::RegisterVirtualWindow(this_02,&local_28);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
    }
    if (((((this->Widget).field0_0x0.DebugPtr != (UUserWidget *)0x0) &&
         ((this_03 = *(UWorld **)&this->field_0xb0, this_03 != (UWorld *)0x0 ||
          (this_03 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
          this_03 != (UWorld *)0x0)))) && (bVar1 = UWorld::IsGameWorld(this_03), bVar1)) &&
       ((this_01 = (this_03->OwningGameInstance).field0_0x0.DebugPtr,
        this_01 != (UGameInstance *)0x0 &&
        (this_04 = UGameInstance::GetGameViewportClient(this_01),
        this_04 != (UGameViewportClient *)0x0)))) {
      this_05 = TSharedPtr<SVirtualWindow,1>::operator->(this_00);
      pTVar3 = UGameViewportClient::GetGameViewportWidget
                         (this_04,(TSharedPtr<SViewport,1> *)&local_18);
      local_28.Object = (SWindow *)pTVar3->Object;
      local_28.SharedReferenceCount.ReferenceController =
           (pTVar3->SharedReferenceCount).ReferenceController;
      if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      SWidget::AssignParentWidget((SWidget *)this_05,(TSharedPtr<SWidget,1> *)&local_28);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
    }
  }
  return;
}

// ReleaseResources @ 146a8e970

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

void __thiscall UWidgetComponent::ReleaseResources(UWidgetComponent *this)

{
  TSharedPtr<SWidget,1> *pTVar1;
  TSharedPtr<SVirtualWindow,1> *this_00;
  FSlateApplication *this_01;
  TSharedRef<SVirtualWindow,1> *pTVar2;
  longlong local_48;
  FSharedReferencer<1> FStack_40;
  TSharedPtr<SVirtualWindow,1> local_38;
  TSharedRef<SWindow,1> local_28;
  TSharedRef<SVirtualWindow,1> local_18;
  
  if ((this->Widget).field0_0x0.DebugPtr != (UUserWidget *)0x0) {
    RemoveWidgetFromScreen(this);
    if (this->bOnWidgetVisibilityChangedRegistered != false) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &((this->Widget).field0_0x0.DebugPtr)->OnNativeVisibilityChanged,this);
      this->bOnWidgetVisibilityChangedRegistered = false;
    }
    (this->Widget).field0_0x0.DebugPtr = (UUserWidget *)0x0;
  }
  pTVar1 = &this->SlateWidget;
  if (pTVar1->Object != (SWidget *)0x0) {
    RemoveWidgetFromScreen(this);
    local_48 = 0;
    FStack_40.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar1 != (TSharedPtr<SWidget,1> *)&local_48) {
      pTVar1->Object = (SWidget *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->SlateWidget).SharedReferenceCount,&FStack_40);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_40.ReferenceController);
  }
  if (this->WidgetRenderer != (FWidgetRenderer *)0x0) {
    BeginCleanup((FDeferredCleanupInterface *)this->WidgetRenderer);
    this->WidgetRenderer = (FWidgetRenderer *)0x0;
  }
  this_00 = &this->SlateWindow;
  if (this_00->Object != (SVirtualWindow *)0x0) {
    if (((this->bReceiveHardwareInput == false) || (this->GeometryMode != Plane)) &&
       (FSlateApplication::CurrentApplication.Object != (FSlateApplication *)0x0)) {
      this_01 = FSlateApplication::Get();
      pTVar2 = TSharedPtr<SVirtualWindow,1>::ToSharedRef(this_00,&local_18);
      local_28.Object = (SWindow *)pTVar2->Object;
      local_28.SharedReferenceCount.ReferenceController =
           (pTVar2->SharedReferenceCount).ReferenceController;
      if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      FSlateApplication::UnregisterVirtualWindow(this_01,&local_28);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
    }
    local_38.Object = (SVirtualWindow *)0x0;
    local_38.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (this_00 != &local_38) {
      this_00->Object = (SVirtualWindow *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->SlateWindow).SharedReferenceCount,&local_38.SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
  }
  return;
}

// RemoveWidgetFromScreen @ 146a90530

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
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UWidgetComponent::RemoveWidgetFromScreen(UWidgetComponent *this)

{
  TSharedPtr<SVirtualWindow,1> *pTVar1;
  SVirtualWindow *this_00;
  IGameLayerManager *pIVar2;
  code *pcVar3;
  atomic<int> aVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  atomic<int> aVar7;
  UWorld *this_01;
  UGameViewportClient *pUVar8;
  ULocalPlayer *pUVar9;
  TReferenceControllerBase<1> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  FWeakObjectPtr local_res10;
  UWidgetComponent *local_res18;
  longlong local_48;
  FSharedReferencer<1> FStack_40;
  longlong local_38;
  TReferenceControllerBase<1> *local_30;
  TSharedRef<SWidget,1> local_28;
  
  pTVar1 = &this->SlateWindow;
  if (pTVar1->Object != (SVirtualWindow *)0x0) {
    ResetWorldUserFocusOnWidget(this);
    if (this->Space == World) {
      if ((pTVar1->Object == (SVirtualWindow *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      this_00 = pTVar1->Object;
      local_28.Object = SNullWidget::NullWidget.Object;
      local_28.SharedReferenceCount.ReferenceController =
           SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
      if (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      SWindow::SetContent((SWindow *)this_00,&local_28);
    }
    local_48 = 0;
    FStack_40.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar1 != (TSharedPtr<SVirtualWindow,1> *)&local_48) {
      pTVar1->Object = (SVirtualWindow *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->SlateWindow).SharedReferenceCount,&FStack_40);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_40.ReferenceController);
  }
  this_01 = *(UWorld **)&this->field_0xb0;
  this->bAddedToScreen = false;
  if ((((this_01 != (UWorld *)0x0) ||
       (this_01 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
       this_01 != (UWorld *)0x0)) &&
      (pUVar8 = UWorld::GetGameViewport(this_01), pUVar8 != (UGameViewportClient *)0x0)) &&
     (pUVar9 = GetOwnerPlayer(this), pUVar9 != (ULocalPlayer *)0x0)) {
    pTVar11 = (pUVar8->GameLayerManagerPtr).WeakReferenceCount.ReferenceController;
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
      aVar4 = pTVar11->SharedReferenceCount;
      do {
        if (aVar4 == (atomic<int>)0x0) {
          pTVar11 = (TReferenceControllerBase<1> *)0x0;
          goto LAB_146a90650;
        }
        LOCK();
        aVar7 = pTVar11->SharedReferenceCount;
        bVar6 = aVar4 == aVar7;
        if (bVar6) {
          pTVar11->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
          aVar7 = aVar4;
        }
        UNLOCK();
        aVar4 = aVar7;
      } while (!bVar6);
      pIVar2 = (pUVar8->GameLayerManagerPtr).Object;
      if (pIVar2 != (IGameLayerManager *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x48))(pIVar2,&local_38,pUVar9,&this->SharedLayerName);
        pTVar5 = local_30;
        if (local_38 != 0) {
          if (local_30 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            local_30->SharedReferenceCount = (atomic<int>)((int)local_30->SharedReferenceCount + 1);
            UNLOCK();
          }
          if ((local_38 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          local_res10.ObjectIndex = 0;
          local_res10.ObjectSerialNumber = 0;
          local_res18 = this;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res18);
          TArray<TWeakObjectPtr<UWidgetComponent,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::
          RemoveSwap((TArray<TWeakObjectPtr<UWidgetComponent,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
                      *)(local_38 + 0x38),
                     (TWeakObjectPtr<UWidgetComponent,FWeakObjectPtr> *)&local_res10,Default);
          pTVar10 = *(TReferenceControllerBase<1> **)(local_38 + 0x30);
          if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
            aVar4 = pTVar10->SharedReferenceCount;
            do {
              if (aVar4 == (atomic<int>)0x0) {
                pTVar10 = (TReferenceControllerBase<1> *)0x0;
                goto LAB_146a90750;
              }
              LOCK();
              aVar7 = pTVar10->SharedReferenceCount;
              bVar6 = aVar4 == aVar7;
              if (bVar6) {
                pTVar10->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
                aVar7 = aVar4;
              }
              UNLOCK();
              aVar4 = aVar7;
            } while (!bVar6);
            if (*(SWorldWidgetScreenLayer **)(local_38 + 0x28) != (SWorldWidgetScreenLayer *)0x0) {
              SWorldWidgetScreenLayer::RemoveComponent
                        (*(SWorldWidgetScreenLayer **)(local_38 + 0x28),(USceneComponent *)this);
            }
          }
LAB_146a90750:
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar10);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar5);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_30);
      }
    }
LAB_146a90650:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  }
  return;
}

// RequestRedraw @ 146a90ac0

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

void __thiscall UWidgetComponent::RequestRedraw(UWidgetComponent *this)

{
  this->bRedrawRequested = true;
  return;
}

// RequestRenderUpdate @ 146a90af0

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

void __thiscall UWidgetComponent::RequestRenderUpdate(UWidgetComponent *this)

{
  this->bRedrawRequested = true;
  if (this->TickMode == Disabled) {
                    /* WARNING: Could not recover jumptable at 0x000146a90b05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)this + 0x420))(this,1);
    return;
  }
  return;
}

// ResetWorldUserFocusOnWidget @ 146a90d20

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

void __thiscall UWidgetComponent::ResetWorldUserFocusOnWidget(UWidgetComponent *this)

{
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *this_00;
  ulonglong uVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  atomic<int> aVar8;
  FSlateApplication *pFVar9;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar10;
  bool bVar11;
  bool bVar12;
  uint uVar13;
  atomic<int> aVar14;
  undefined8 *puVar15;
  longlong lVar16;
  int iVar17;
  FSlateUser *this_01;
  uint uVar18;
  uint uVar19;
  undefined1 *puVar20;
  SVirtualWindow *pSVar21;
  uint *puVar22;
  uint local_res8 [2];
  int local_res10;
  int local_res18;
  TSharedPtr<SWidget,1> local_d8;
  undefined8 local_c8;
  FSharedReferencer<1> local_c0;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_b8;
  int iStack_b0;
  uint uStack_ac;
  undefined1 *local_a8;
  undefined4 uStack_a0;
  int iStack_9c;
  int local_98;
  int iStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_88;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  undefined8 uStack_60;
  undefined8 local_58;
  TReferenceControllerBase<1> *local_50;
  undefined8 local_48;
  TReferenceControllerBase<1> *local_40;
  
  local_res8[0] = 0;
  this_00 = &this->UsersEnteredWorldWidget;
  iVar2 = *(int *)&(this->UsersEnteredWorldWidget).Elements.field_0x28;
  bVar7 = false;
  bVar12 = false;
  iStack_b0 = 0;
  uStack_ac = 1;
  local_98 = 0;
  iStack_9c = 0;
  if (iVar2 != 0) {
    puVar22 = *(uint **)&(this->UsersEnteredWorldWidget).Elements.field_0x20;
    if (puVar22 == (uint *)0x0) {
      puVar22 = (uint *)&(this->UsersEnteredWorldWidget).Elements.field_0x10;
    }
    uVar19 = *puVar22;
    local_98 = 0;
    while (uVar19 == 0) {
      lVar16 = (longlong)iStack_b0;
      local_98 = local_98 + 0x20;
      iStack_b0 = iStack_b0 + 1;
      iStack_9c = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_b0) goto LAB_146a90de4;
      uVar19 = puVar22[lVar16 + 1];
    }
    uStack_ac = -uVar19 & uVar19;
    uVar1 = (ulonglong)uStack_ac * 2 + 1;
    lVar16 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    local_res10 = (int)lVar16;
    iStack_9c = local_98 + -1 + local_res10;
    if (iVar2 < iStack_9c) {
      iStack_9c = iVar2;
    }
  }
LAB_146a90de4:
  local_a8 = &(this->UsersEnteredWorldWidget).Elements.field_0x10;
  uVar19 = *(uint *)&(this->UsersEnteredWorldWidget).Elements.field_0x28;
  uVar18 = uVar19 & 0xffffffe0;
  iStack_90 = *(int *)&(this->UsersEnteredWorldWidget).Elements.field_0x8 -
              *(int *)&(this->UsersEnteredWorldWidget).Elements.field_0x34;
  uStack_a0 = 0xffffffff;
  TStack_80._padding_ = CONCAT44(uStack_ac,iStack_b0);
  TStack_80.CurrentBitIndex = iStack_9c;
  TStack_80.UnvisitedBitMask = 0xffffffff;
  iVar17 = (int)uVar19 >> 5;
  TStack_80._28_4_ = iStack_9c;
  TStack_80.BaseBitIndex = local_98;
  uStack_60 = CONCAT44(uStack_8c,iStack_90);
  local_b8 = this_00;
  iStack_94 = iStack_9c;
  local_88 = this_00;
  TStack_80.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_a8;
  if ((((int)uVar19 < 0) || (iVar2 < (int)uVar19)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar13 = *(uint *)&(this->UsersEnteredWorldWidget).Elements.field_0x28;
  bVar11 = false;
  bVar6 = false;
  if (uVar19 != uVar13) {
    puVar20 = *(undefined1 **)&(this->UsersEnteredWorldWidget).Elements.field_0x20;
    if (puVar20 == (undefined1 *)0x0) {
      puVar20 = &(this->UsersEnteredWorldWidget).Elements.field_0x10;
    }
    uVar19 = -1 << ((byte)uVar19 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar17 * 4);
    while (bVar11 = bVar12, bVar6 = bVar7, uVar19 == 0) {
      lVar16 = (longlong)iVar17;
      uVar18 = uVar18 + 0x20;
      iVar17 = iVar17 + 1;
      uVar19 = uVar13;
      if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
      goto LAB_146a90ef0;
      uVar19 = *(uint *)(puVar20 + lVar16 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
    lVar16 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    local_res18 = (int)lVar16;
    uVar19 = local_res18 + -1 + uVar18;
    if ((int)uVar13 < (int)uVar19) {
      uVar19 = uVar13;
    }
  }
LAB_146a90ef0:
  do {
    pTVar10 = local_88;
    if (*(int *)&(local_88->Elements).field_0x8 - *(int *)&(local_88->Elements).field_0x34 !=
        (int)uStack_60) {
      local_res8[0] = local_res8[0] & 0xffffff00;
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_80.CurrentBitIndex == uVar19) &&
        (TStack_80.Array ==
         (TBitArray<FDefaultBitArrayAllocator> *)
         &(this->UsersEnteredWorldWidget).Elements.field_0x10)) && (pTVar10 == this_00)) {
      if (*(int *)&(this->UsersEnteredWorldWidget).Elements.field_0x8 !=
          *(int *)&(this->UsersEnteredWorldWidget).Elements.field_0x34) {
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::UnhashElements(this_00);
        iVar2 = *(int *)&(this->UsersEnteredWorldWidget).Elements.field_0xc;
        *(undefined4 *)&(this->UsersEnteredWorldWidget).Elements.field_0x8 = 0;
        if (iVar2 < 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xc,4,0,(ForAnyElementType *)this_00,0,
                     (int *)&(this->UsersEnteredWorldWidget).Elements.field_0xc);
        }
        *(undefined4 *)&(this->UsersEnteredWorldWidget).Elements.field_0x30 = 0xffffffff;
        *(undefined4 *)&(this->UsersEnteredWorldWidget).Elements.field_0x34 = 0;
        *(undefined4 *)&(this->UsersEnteredWorldWidget).Elements.field_0x28 = 0;
      }
      return;
    }
    uVar18 = *(uint *)(*(longlong *)&pTVar10->Elements + (longlong)TStack_80.CurrentBitIndex * 0xc);
    if ((FSlateApplication::CurrentApplication.Object == (FSlateApplication *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("CurrentApplication.IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Framework\\Application\\SlateApplication.h"
                            ,0x141,L""), bVar12)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    bVar12 = IsInGameThread();
    if ((((!bVar12) && (bVar12 = IsInSlateThread(), !bVar12)) &&
        (bVar12 = (*IsInAsyncLoadingThread)(), !bVar12)) &&
       ((bVar12 = IsInParallelLoadingThread(), !bVar12 &&
        (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInGameThread() || IsInSlateThread() || IsInAsyncLoadingThread() || IsInParallelLoadingThread()"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Framework\\Application\\SlateApplication.h"
                             ,0x142,L""), bVar12)))) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((FSlateApplication::CurrentApplication.Object == (FSlateApplication *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x44d,L""), bVar12)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar9 = FSlateApplication::CurrentApplication.Object;
    if (((int)uVar18 < 0) ||
       (((FSlateApplication::CurrentApplication.Object)->Users).ArrayNum <= (int)uVar18)) {
      bVar11 = true;
      local_50 = (TReferenceControllerBase<1> *)0x0;
      this_01 = (FSlateUser *)0x0;
      puVar15 = &local_58;
    }
    else {
      bVar6 = true;
      uVar13 = 0;
      if ((int)uVar18 < ((FSlateApplication::CurrentApplication.Object)->Users).ArrayNum) {
        uVar13 = ~uVar18 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar3 = (pFVar9->Users).AllocatorInstance.Data;
      local_40 = *(TReferenceControllerBase<1> **)(pFVar3 + (longlong)(int)uVar18 * 0x10 + 8);
      this_01 = *(FSlateUser **)(pFVar3 + (longlong)(int)uVar18 * 0x10);
      if (local_40 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_40->SharedReferenceCount = (atomic<int>)((int)local_40->SharedReferenceCount + 1);
        UNLOCK();
      }
      puVar15 = &local_48;
    }
    pTVar4 = (TReferenceControllerBase<1> *)puVar15[1];
    puVar15[1] = 0;
    *puVar15 = 0;
    if (bVar11) {
      bVar11 = false;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_50);
    }
    if (bVar6) {
      bVar6 = false;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
    }
    if (this_01 != (FSlateUser *)0x0) {
      FSlateUser::GetFocusedWidget(this_01,&local_d8);
      while ((SVirtualWindow *)local_d8.Object != (SVirtualWindow *)0x0) {
        if ((SVirtualWindow *)local_d8.Object == (this->SlateWindow).Object) {
          if ((FSlateApplication::CurrentApplication.Object == (FSlateApplication *)0x0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("CurrentApplication.IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Framework\\Application\\SlateApplication.h"
                                  ,0x141,L""), bVar12)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          bVar12 = IsInGameThread();
          if ((((!bVar12) && (bVar12 = IsInSlateThread(), !bVar12)) &&
              (bVar12 = (*IsInAsyncLoadingThread)(), !bVar12)) &&
             ((bVar12 = IsInParallelLoadingThread(), !bVar12 &&
              (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsInGameThread() || IsInSlateThread() || IsInAsyncLoadingThread() || IsInParallelLoadingThread()"
                                   ,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Framework\\Application\\SlateApplication.h"
                                   ,0x142,L""), bVar12)))) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if ((FSlateApplication::CurrentApplication.Object == (FSlateApplication *)0x0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x44d,L""), bVar12)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          FSlateApplication::ClearUserFocus
                    (FSlateApplication::CurrentApplication.Object,uVar18,SetDirectly);
          break;
        }
        if (((SVirtualWindow *)local_d8.Object == (SVirtualWindow *)0x0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar12)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        local_c0.ReferenceController =
             (TReferenceControllerBase<1> *)((SVirtualWindow *)local_d8.Object)->_padding_;
        pSVar21 = (SVirtualWindow *)0x0;
        if (local_c0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          aVar8 = (local_c0.ReferenceController)->SharedReferenceCount;
          do {
            if (aVar8 == (atomic<int>)0x0) {
              local_c0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
              pSVar21 = (SVirtualWindow *)0x0;
              goto LAB_146a91152;
            }
            LOCK();
            aVar14 = (local_c0.ReferenceController)->SharedReferenceCount;
            bVar12 = aVar8 == aVar14;
            if (bVar12) {
              (local_c0.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar8 + 1);
              aVar14 = aVar8;
            }
            UNLOCK();
            aVar8 = aVar14;
          } while (!bVar12);
          pSVar21 = (SVirtualWindow *)((SVirtualWindow *)local_d8.Object)->_padding_;
        }
LAB_146a91152:
        local_c8 = 0;
        local_d8.Object = (SWidget *)pSVar21;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&local_d8.SharedReferenceCount,&local_c0);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_c0.ReferenceController);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_d8.SharedReferenceCount.ReferenceController);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
  } while( true );
}

// Serialize @ 146a922a0

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

void __thiscall UWidgetComponent::Serialize(UWidgetComponent *this,FArchive *param_1)

{
  int iVar1;
  
  UPrimitiveComponent::Serialize((UPrimitiveComponent *)this,param_1);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FEditorObjectVersion::GUID);
  iVar1 = FArchiveState::CustomVer((FArchiveState *)param_1,&FEditorObjectVersion::GUID);
  if (iVar1 < 0x1f) {
    this->WindowVisibility = Visible;
  }
  return;
}

// Serialize @ 146a92300

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

void __thiscall UWidgetComponent::Serialize(UWidgetComponent *this,FStructuredArchiveRecord param_1)

{
  int iVar1;
  FArchiveState *this_00;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  this_00 = (FArchiveState *)
            UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  UPrimitiveComponent::Serialize((UPrimitiveComponent *)this,(FArchive *)this_00);
  (**(code **)(this_00->_padding_ + 0x230))(this_00,&FEditorObjectVersion::GUID);
  iVar1 = FArchiveState::CustomVer(this_00,&FEditorObjectVersion::GUID);
  if (iVar1 < 0x1f) {
    this->WindowVisibility = Visible;
  }
  return;
}

// SetBackgroundColor @ 146a92870

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

void __thiscall UWidgetComponent::SetBackgroundColor(UWidgetComponent *this,FLinearColor *param_1)

{
  undefined8 uVar1;
  
  if (((((this->BackgroundColor).field0_0x0._s_0.R == (param_1->field0_0x0)._s_0.R) &&
       ((this->BackgroundColor).field0_0x0._s_0.G == (param_1->field0_0x0)._s_0.G)) &&
      ((this->BackgroundColor).field0_0x0._s_0.B == (param_1->field0_0x0)._s_0.B)) &&
     ((this->BackgroundColor).field0_0x0._s_0.A == (param_1->field0_0x0)._s_0.A)) {
    return;
  }
  uVar1 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
  *(undefined8 *)&(this->BackgroundColor).field0_0x0 = *(undefined8 *)&param_1->field0_0x0;
  *(undefined8 *)((longlong)&(this->BackgroundColor).field0_0x0 + 8) = uVar1;
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  return;
}

// SetBlendMode @ 146a928e0

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

void __thiscall UWidgetComponent::SetBlendMode(UWidgetComponent *this,EWidgetBlendMode param_1)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  UWorld *pUVar6;
  FUObjectItem *pFVar7;
  longlong lVar8;
  uint uVar9;
  FDestructionSentinel FStack_28;
  
  if ((param_1 == this->BlendMode) || (this->BlendMode = param_1, (this->field_0x98 & 1) == 0)) {
    return;
  }
  if (((this->field_0x98 & 3) == 3) &&
     (((this->field_0x99 & 1) == 0 ||
      (pUVar6 = UActorComponent::GetWorld((UActorComponent *)this), pUVar6 == (UWorld *)0x0)))) {
    this->field_0x99 = this->field_0x99 | 1;
    if ((this->field_0x9a & 1) == 0) {
      pUVar6 = UActorComponent::GetWorld((UActorComponent *)this);
      if (pUVar6 == (UWorld *)0x0) {
        pFVar7 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&this->field_0xc);
        if (((uint)((ulonglong)(pFVar7->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0) {
          UActorComponent::DoDeferredRenderUpdates_Concurrent((UActorComponent *)this);
        }
      }
      else {
        bVar2 = (bool)(**(code **)(*(longlong *)this + 0x458))(this);
        UWorld::MarkActorComponentForNeededEndOfFrameUpdate(pUVar6,(UActorComponent *)this,bVar2);
      }
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &UActorComponent::MarkRenderStateDirtyEvent,(FWriteAccessScope *)&FStack_28);
    bVar2 = false;
    UActorComponent::MarkRenderStateDirtyEvent._28_4_ =
         UActorComponent::MarkRenderStateDirtyEvent._28_4_ + 1;
    uVar9 = UActorComponent::MarkRenderStateDirtyEvent._16_4_ - 1;
    if (-1 < (int)uVar9) {
      lVar8 = (longlong)(int)uVar9 << 4;
      bVar2 = false;
      do {
        uVar5 = 0;
        if ((int)uVar9 < (int)UActorComponent::MarkRenderStateDirtyEvent._16_4_) {
          uVar5 = ~uVar9 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (((*(int *)(lVar8 + 8 + UActorComponent::MarkRenderStateDirtyEvent._8_8_) == 0) ||
            (*(longlong **)(lVar8 + UActorComponent::MarkRenderStateDirtyEvent._8_8_) ==
             (longlong *)0x0)) ||
           (cVar4 = (**(code **)(**(longlong **)
                                   (lVar8 + UActorComponent::MarkRenderStateDirtyEvent._8_8_) + 0x68
                                ))(), cVar4 == '\0')) {
          bVar2 = true;
        }
        lVar8 = lVar8 + -0x10;
        uVar9 = uVar9 - 1;
      } while (-1 < (int)uVar9);
    }
    UActorComponent::MarkRenderStateDirtyEvent._28_4_ =
         UActorComponent::MarkRenderStateDirtyEvent._28_4_ + -1;
    if (bVar2) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &UActorComponent::MarkRenderStateDirtyEvent,false);
    }
    if (FStack_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_28.Accessor,&FStack_28);
    }
  }
  return;
}

// SetDrawSize @ 146a935c0

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

void __thiscall UWidgetComponent::SetDrawSize(UWidgetComponent *this,TVector2<double> *param_1)

{
  TIntPoint<int>_u_0 TVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (int)(param_1->field0_0x0)._s_0.X;
  iVar3 = (int)(param_1->field0_0x0)._s_0.Y;
  if ((iVar2 == (this->DrawSize).field0_0x0._s_0.X) && (iVar3 == (this->DrawSize).field0_0x0._s_0.Y)
     ) {
    return;
  }
  TVar1._s_0.Y = iVar3;
  TVar1._s_0.X = iVar2;
  (this->DrawSize).field0_0x0 = TVar1;
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  return;
}

// SetManuallyRedraw @ 146a93e60

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

void __thiscall UWidgetComponent::SetManuallyRedraw(UWidgetComponent *this,bool param_1)

{
  this->bManuallyRedraw = param_1;
  return;
}

// SetMaterial @ 146a93e70

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
UWidgetComponent::SetMaterial(UWidgetComponent *this,int param_1,UMaterialInterface *param_2)

{
  UMeshComponent::SetMaterial((UMeshComponent *)this,param_1,param_2);
  UpdateMaterialInstance(this);
  return;
}

// SetOpacityFromTexture @ 146a93ff0

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

void __thiscall UWidgetComponent::SetOpacityFromTexture(UWidgetComponent *this,float param_1)

{
  if (param_1 != this->OpacityFromTexture) {
    this->OpacityFromTexture = param_1;
    UpdateMaterialInstanceParameters(this);
    return;
  }
  return;
}

// SetOwnerPlayer @ 146a94030

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

void __thiscall UWidgetComponent::SetOwnerPlayer(UWidgetComponent *this,ULocalPlayer *param_1)

{
  ULocalPlayer *pUVar1;
  bool bVar2;
  
  pUVar1 = (this->OwnerPlayer).field0_0x0.DebugPtr;
  if (pUVar1 == (ULocalPlayer *)0x0) {
    bVar2 = param_1 == (ULocalPlayer *)0x0;
  }
  else {
    bVar2 = pUVar1 == param_1;
  }
  if (!bVar2) {
    RemoveWidgetFromScreen(this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (ULocalPlayer *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    (this->OwnerPlayer).field0_0x0.DebugPtr = param_1;
  }
  return;
}

// SetSlateWidget @ 146a94b90

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
UWidgetComponent::SetSlateWidget(UWidgetComponent *this,TSharedPtr<SWidget,1> *param_1)

{
  TSharedPtr<SWidget,1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  SWidget *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  longlong local_18;
  FSharedReferencer<1> FStack_10;
  
  if ((this->Widget).field0_0x0.DebugPtr != (UUserWidget *)0x0) {
    (**(code **)(*(longlong *)this + 0xb58))(this,0);
  }
  pTVar1 = &this->SlateWidget;
  if (pTVar1->Object != (SWidget *)0x0) {
    RemoveWidgetFromScreen(this);
    local_18 = 0;
    FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar1 != (TSharedPtr<SWidget,1> *)&local_18) {
      pTVar1->Object = (SWidget *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->SlateWidget).SharedReferenceCount,&FStack_10);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_10.ReferenceController);
  }
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  pSVar3 = param_1->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = (this->SlateWidget).SharedReferenceCount.ReferenceController;
  pTVar1->Object = pSVar3;
  (this->SlateWidget).SharedReferenceCount.ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
                    /* WARNING: Could not recover jumptable at 0x000146a94c3f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0xb38))(this);
  return;
}

// SetTickMode @ 146a94c70

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

void __thiscall UWidgetComponent::SetTickMode(UWidgetComponent *this,ETickMode param_1)

{
  this->TickMode = param_1;
                    /* WARNING: Could not recover jumptable at 0x000146a94c7e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x420))(this,param_1 != Disabled);
  return;
}

// SetTintColorAndOpacity @ 146a94c90

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
UWidgetComponent::SetTintColorAndOpacity(UWidgetComponent *this,FLinearColor *param_1)

{
  undefined8 uVar1;
  
  if (((((this->TintColorAndOpacity).field0_0x0._s_0.R == (param_1->field0_0x0)._s_0.R) &&
       ((this->TintColorAndOpacity).field0_0x0._s_0.G == (param_1->field0_0x0)._s_0.G)) &&
      ((this->TintColorAndOpacity).field0_0x0._s_0.B == (param_1->field0_0x0)._s_0.B)) &&
     ((this->TintColorAndOpacity).field0_0x0._s_0.A == (param_1->field0_0x0)._s_0.A)) {
    return;
  }
  uVar1 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
  *(undefined8 *)&(this->TintColorAndOpacity).field0_0x0 = *(undefined8 *)&param_1->field0_0x0;
  *(undefined8 *)((longlong)&(this->TintColorAndOpacity).field0_0x0 + 8) = uVar1;
  UpdateMaterialInstanceParameters(this);
  return;
}

// SetTwoSided @ 146a94ce0

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

void __thiscall UWidgetComponent::SetTwoSided(UWidgetComponent *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  UWorld *pUVar6;
  FUObjectItem *pFVar7;
  longlong lVar8;
  uint uVar9;
  FDestructionSentinel FStack_28;
  
  if ((param_1 == this->bIsTwoSided) || (this->bIsTwoSided = param_1, (this->field_0x98 & 1) == 0))
  {
    return;
  }
  if (((this->field_0x98 & 3) == 3) &&
     (((this->field_0x99 & 1) == 0 ||
      (pUVar6 = UActorComponent::GetWorld((UActorComponent *)this), pUVar6 == (UWorld *)0x0)))) {
    this->field_0x99 = this->field_0x99 | 1;
    if ((this->field_0x9a & 1) == 0) {
      pUVar6 = UActorComponent::GetWorld((UActorComponent *)this);
      if (pUVar6 == (UWorld *)0x0) {
        pFVar7 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&this->field_0xc);
        if (((uint)((ulonglong)(pFVar7->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0) {
          UActorComponent::DoDeferredRenderUpdates_Concurrent((UActorComponent *)this);
        }
      }
      else {
        bVar2 = (bool)(**(code **)(*(longlong *)this + 0x458))(this);
        UWorld::MarkActorComponentForNeededEndOfFrameUpdate(pUVar6,(UActorComponent *)this,bVar2);
      }
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &UActorComponent::MarkRenderStateDirtyEvent,(FWriteAccessScope *)&FStack_28);
    bVar2 = false;
    UActorComponent::MarkRenderStateDirtyEvent._28_4_ =
         UActorComponent::MarkRenderStateDirtyEvent._28_4_ + 1;
    uVar9 = UActorComponent::MarkRenderStateDirtyEvent._16_4_ - 1;
    if (-1 < (int)uVar9) {
      lVar8 = (longlong)(int)uVar9 << 4;
      bVar2 = false;
      do {
        uVar5 = 0;
        if ((int)uVar9 < (int)UActorComponent::MarkRenderStateDirtyEvent._16_4_) {
          uVar5 = ~uVar9 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (((*(int *)(lVar8 + 8 + UActorComponent::MarkRenderStateDirtyEvent._8_8_) == 0) ||
            (*(longlong **)(lVar8 + UActorComponent::MarkRenderStateDirtyEvent._8_8_) ==
             (longlong *)0x0)) ||
           (cVar4 = (**(code **)(**(longlong **)
                                   (lVar8 + UActorComponent::MarkRenderStateDirtyEvent._8_8_) + 0x68
                                ))(), cVar4 == '\0')) {
          bVar2 = true;
        }
        lVar8 = lVar8 + -0x10;
        uVar9 = uVar9 - 1;
      } while (-1 < (int)uVar9);
    }
    UActorComponent::MarkRenderStateDirtyEvent._28_4_ =
         UActorComponent::MarkRenderStateDirtyEvent._28_4_ + -1;
    if (bVar2) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &UActorComponent::MarkRenderStateDirtyEvent,false);
    }
    if (FStack_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_28.Accessor,&FStack_28);
    }
  }
  return;
}

// SetWidget @ 146a95330

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

void __thiscall UWidgetComponent::SetWidget(UWidgetComponent *this,UUserWidget *param_1)

{
  undefined8 local_18;
  TReferenceControllerBase<1> *pTStack_10;
  
  if (param_1 != (UUserWidget *)0x0) {
    local_18 = 0;
    pTStack_10 = (TReferenceControllerBase<1> *)0x0;
    (**(code **)(*(longlong *)this + 0xb60))(0,&local_18);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_10);
  }
  if ((this->Widget).field0_0x0.DebugPtr != (UUserWidget *)0x0) {
    RemoveWidgetFromScreen(this);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UUserWidget *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->Widget).field0_0x0.DebugPtr = param_1;
                    /* WARNING: Could not recover jumptable at 0x000146a953a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0xb38))(this);
  return;
}

// SetWidgetClass @ 146a953c0

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
UWidgetComponent::SetWidgetClass(UWidgetComponent *this,TSubclassOf<UUserWidget> param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  UClass *pUVar4;
  UWorld *pUVar5;
  UUserWidget *pUVar6;
  UClass *pUVar7;
  UClass *local_res10;
  
  pUVar7 = (this->WidgetClass).Class.field0_0x0.DebugPtr;
  if (pUVar7 == (UClass *)0x0) {
LAB_146a95415:
    pUVar7 = (UClass *)0x0;
  }
  else {
    pUVar4 = UUserWidget::StaticClass();
    if (pUVar4 == (UClass *)0x0) goto LAB_146a95415;
    iVar1 = (int)pUVar4->_padding_;
    if (((int)pUVar7->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar7->_padding_ + (longlong)iVar1 * 8) != &pUVar4->_padding_)
       ) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_146a95415;
    pUVar7 = (this->WidgetClass).Class.field0_0x0.DebugPtr;
  }
  lVar2 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar2 != 0) {
    pUVar4 = UUserWidget::StaticClass();
    if (pUVar4 != (UClass *)0x0) {
      iVar1 = (int)pUVar4->_padding_;
      if ((*(int *)(lVar2 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        pUVar4 = *(UClass **)param_1.Class.field0_0x0;
        goto LAB_146a95454;
      }
    }
  }
  pUVar4 = (UClass *)0x0;
LAB_146a95454:
  if (pUVar7 != pUVar4) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (*(UObject **)param_1.Class.field0_0x0 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(*(UObject **)param_1.Class.field0_0x0);
    }
    (this->WidgetClass).Class.field0_0x0 = *(TObjectPtr<UClass>_u_0 *)param_1.Class.field0_0x0;
    if ((FSlateApplication::CurrentApplication.Object != (FSlateApplication *)0x0) &&
       ((this->field_0x9b & 0x20) != 0)) {
      pUVar5 = *(UWorld **)&this->field_0xb0;
      if (pUVar5 == (UWorld *)0x0) {
        pUVar5 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
      }
      if (pUVar5->bIsTearingDown == '\0') {
        pUVar7 = (this->WidgetClass).Class.field0_0x0.DebugPtr;
        if (pUVar7 != (UClass *)0x0) {
          pUVar4 = UUserWidget::StaticClass();
          if (pUVar4 != (UClass *)0x0) {
            iVar1 = (int)pUVar4->_padding_;
            if (((int)pUVar7->_padding_ < iVar1) ||
               ((longlong *)*(undefined1 **)(pUVar7->_padding_ + (longlong)iVar1 * 8) !=
                &pUVar4->_padding_)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if ((bVar3) &&
               (local_res10 = (this->WidgetClass).Class.field0_0x0.DebugPtr,
               local_res10 != (UClass *)0x0)) {
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable((UObject *)local_res10);
              }
              pUVar5 = *(UWorld **)&this->field_0xb0;
              if (pUVar5 == (UWorld *)0x0) {
                pUVar5 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
              }
              pUVar6 = CreateWidget<UUserWidget,UWorld_*>
                                 (pUVar5,(TSubclassOf<UUserWidget>)&local_res10,(FName)0x0);
                    /* WARNING: Could not recover jumptable at 0x000146a95565. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(*(longlong *)this + 0xb58))
                        (this,pUVar6,*(code **)(*(longlong *)this + 0xb58));
              return;
            }
          }
        }
        (**(code **)(*(longlong *)this + 0xb58))(this,0);
      }
    }
  }
  return;
}

// SetWindowFocusable @ 146a956f0

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

void __thiscall UWidgetComponent::SetWindowFocusable(UWidgetComponent *this,bool param_1)

{
  SVirtualWindow *pSVar1;
  
  this->bWindowFocusable = param_1;
  pSVar1 = (this->SlateWindow).Object;
  if (pSVar1 == (SVirtualWindow *)0x0) {
    return;
  }
  pSVar1->bIsFocusable = param_1;
  return;
}

// SetWindowVisibility @ 146a95a00

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
UWidgetComponent::SetWindowVisibility(UWidgetComponent *this,EWindowVisibility param_1)

{
  SVirtualWindow *pSVar1;
  UUserWidget *pUVar2;
  SWidget *pSVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  byte bVar7;
  TAttribute<EVisibility> local_28;
  
  if (((this->Widget).field0_0x0.DebugPtr == (UUserWidget *)0x0) &&
     (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4348376515700851724>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\WidgetComponent.cpp"
                         ,0x40c,"Widget"), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pSVar1 = (this->SlateWindow).Object;
  this->WindowVisibility = param_1;
  if (pSVar1 != (SVirtualWindow *)0x0) {
    local_28.Value = EVisibility::Visible;
    if (((param_1 != Visible) &&
        (local_28.Value = EVisibility::SelfHitTestInvisible, param_1 != SelfHitTestInvisible)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("!\"Enclosing block should never be called\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\WidgetComponent.cpp"
                           ,0x3ed,L""), local_28.Value = EVisibility::SelfHitTestInvisible, bVar5))
    {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_28.bIsSet = true;
    local_28.Getter._16_8_ = 0;
    local_28.Getter._0_8_ = 0;
    local_28.Getter._8_8_ = 0;
    SCompoundWidget::SetVisibility((SCompoundWidget *)pSVar1,&local_28);
    if (this->bUseInvalidationInWorldSpace != false) {
      if (((this->SlateWindow).Object == (SVirtualWindow *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FSlateInvalidationRoot::InvalidateRootLayout
                ((FSlateInvalidationRoot *)&((this->SlateWindow).Object)->_padding_,(SWidget *)0x0);
    }
  }
  if ((this->Space != World) ||
     (((cVar6 = (**(code **)(*(longlong *)this + 0x560))(this), cVar6 != '\0' &&
       (pSVar1 = (this->SlateWindow).Object, pSVar1 != (SVirtualWindow *)0x0)) &&
      ((pSVar1->_padding_ & 0x1900) != 0)))) {
    pUVar2 = (this->Widget).field0_0x0.DebugPtr;
    if (pUVar2 == (UUserWidget *)0x0) {
      pSVar3 = (this->SlateWidget).Object;
      if (pSVar3 == (SWidget *)0x0) {
        return;
      }
      bVar7 = (byte)pSVar3->VisibilityAttribute & 0x19;
    }
    else {
      bVar7 = UWidget::IsVisible((UWidget *)pUVar2);
    }
    if (bVar7 != 0) {
      if ((this->TickMode != Disabled) || (this->bRedrawRequested != false)) {
        (**(code **)(*(longlong *)this + 0x420))(this,1);
      }
      if (this->bOnWidgetVisibilityChangedRegistered != false) {
        pUVar2 = (this->Widget).field0_0x0.DebugPtr;
        if (pUVar2 != (UUserWidget *)0x0) {
          TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                     &pUVar2->OnNativeVisibilityChanged,this);
        }
        this->bOnWidgetVisibilityChangedRegistered = false;
      }
    }
  }
  return;
}

// ShouldDrawWidget @ 146a95ca0

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

bool __thiscall UWidgetComponent::ShouldDrawWidget(UWidgetComponent *this)

{
  atomic<double> aVar1;
  char cVar2;
  bool bVar3;
  UWorld *pUVar4;
  
  cVar2 = (**(code **)(*(longlong *)this + 0x560))();
  if ((cVar2 != '\0') &&
     (((this->TickWhenOffscreen != false ||
       (bVar3 = UPrimitiveComponent::WasRecentlyRendered
                          ((UPrimitiveComponent *)this,__real_3f000000), bVar3)) ||
      (this->LastWidgetRenderTime == 0.0)))) {
    aVar1 = FApp::CurrentTime;
    if (this->TimingPolicy != RealTime) {
      pUVar4 = *(UWorld **)&this->field_0xb0;
      if (pUVar4 == (UWorld *)0x0) {
        pUVar4 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
      }
      aVar1 = (atomic<double>)pUVar4->TimeSeconds;
    }
    if ((double)this->RedrawTime <= (double)aVar1 - this->LastWidgetRenderTime) {
      if (this->bManuallyRedraw == false) {
        return true;
      }
      return this->bRedrawRequested;
    }
  }
  return false;
}

// ShouldReenableComponentTickWhenWidgetBecomesVisible @ 146a95d60

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

bool __thiscall
UWidgetComponent::ShouldReenableComponentTickWhenWidgetBecomesVisible(UWidgetComponent *this)

{
  if ((this->TickMode == Disabled) && (this->bRedrawRequested == false)) {
    return false;
  }
  return true;
}

// StaticRegisterNativesUWidgetComponent @ 146a96910

void __cdecl UWidgetComponent::StaticRegisterNativesUWidgetComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x26;
  local_18.DataPtr = Z_Construct_UClass_UWidgetComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// TickComponent @ 146a99350

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
UWidgetComponent::TickComponent
          (UWidgetComponent *this,float param_1,ELevelTick param_2,
          FActorComponentTickFunction *param_3)

{
  double dVar1;
  double dVar2;
  bool bVar3;
  char cVar4;
  code *local_38;
  undefined4 uStack_30;
  uint uStack_2c;
  code *local_28;
  longlong lStack_20;
  
  UActorComponent::TickComponent((UActorComponent *)this,param_1,param_2,param_3);
  (**(code **)(*(longlong *)this + 0xb38))(this);
  if ((this->Widget).field0_0x0.DebugPtr == (UUserWidget *)0x0) {
    if (((this->SlateWidget).Object == (SWidget *)0x0) && (this->bRenderCleared != false)) {
      return;
    }
  }
  else if (((this->TickMode != Enabled) && (bVar3 = IsWidgetVisible(this), !bVar3)) &&
          ((**(code **)(*(longlong *)this + 0x420))(this,0),
          this->bOnWidgetVisibilityChangedRegistered == false)) {
    local_38 = OnWidgetVisibilityChanged;
    uStack_30 = 0;
    lStack_20 = (ulonglong)uStack_2c << 0x20;
    local_28 = OnWidgetVisibilityChanged;
    TMulticastDelegateRegistration<void___cdecl(enum_ESlateVisibility),FDefaultDelegateUserPolicy>::
    AddUObject<UWidgetComponent>
              (&((this->Widget).field0_0x0.DebugPtr)->OnNativeVisibilityChanged,
               (UWidgetComponent *)&local_38,(pmf_9d8b8863 *)this);
    this->bOnWidgetVisibilityChangedRegistered = true;
  }
  if ((this->TickMode == Disabled) && (this->bRedrawRequested == false)) {
                    /* WARNING: Could not recover jumptable at 0x000146a99422. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)this + 0x420))(this,0);
    return;
  }
  if ((this->Space == World) &&
     (cVar4 = (**(code **)(*(longlong *)this + 0xb80))(this), cVar4 != '\0')) {
    dVar2 = 0.0;
    dVar1 = this->LastWidgetRenderTime;
    if (dVar1 != 0.0) {
      dVar2 = GetCurrentTime(this);
      dVar2 = dVar2 - dVar1;
    }
    (**(code **)(*(longlong *)this + 0xb88))(this,(float)dVar2);
    if (((this->Widget).field0_0x0.DebugPtr == (UUserWidget *)0x0) &&
       ((this->SlateWidget).Object == (SWidget *)0x0)) {
      this->bRenderCleared = true;
    }
  }
  return;
}

// UnregisterHitTesterWithViewport @ 146a99ed0

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
UWidgetComponent::UnregisterHitTesterWithViewport
          (UWidgetComponent *this,TSharedPtr<SViewport,1> *param_1)

{
  code *pcVar1;
  FSharedReferencer<1> FVar2;
  bool bVar3;
  SViewport *this_00;
  TSharedPtr<ICustomHitTestPath,1> local_28;
  TSharedPtr<ICustomHitTestPath,1> local_18;
  
  if ((this->bReceiveHardwareInput != false) && (this->GeometryMode == Plane)) {
    if (param_1->Object == (SViewport *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    SViewport::GetCustomHitTestPath(param_1->Object,&local_28);
    FVar2.ReferenceController = local_28.SharedReferenceCount.ReferenceController;
    if ((FWidget3DHitTester *)local_28.Object != (FWidget3DHitTester *)0x0) {
      if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((FWidget3DHitTester *)local_28.Object == (FWidget3DHitTester *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      FWidget3DHitTester::UnregisterWidgetComponent((FWidget3DHitTester *)local_28.Object,this);
      if ((FWidget3DHitTester *)local_28.Object == (FWidget3DHitTester *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      if (((TArray<TWeakObjectPtr<UWidgetComponent,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *)
          ((longlong)local_28.Object + 8))->ArrayNum == 0) {
        this_00 = TSharedPtr<SViewport,1>::operator->(param_1);
        local_18.Object = (ICustomHitTestPath *)0x0;
        local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        SViewport::SetCustomHitTestPath(this_00,&local_18);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar2.ReferenceController);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// UnregisterWindow @ 146a9a1f0

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

void __thiscall UWidgetComponent::UnregisterWindow(UWidgetComponent *this)

{
  TSharedPtr<SVirtualWindow,1> *this_00;
  FSlateApplication *this_01;
  TSharedRef<SVirtualWindow,1> *pTVar1;
  TSharedPtr<SVirtualWindow,1> local_38;
  TSharedRef<SWindow,1> local_28;
  TSharedRef<SVirtualWindow,1> local_18;
  
  this_00 = &this->SlateWindow;
  if (this_00->Object != (SVirtualWindow *)0x0) {
    if (((this->bReceiveHardwareInput == false) || (this->GeometryMode != Plane)) &&
       (FSlateApplication::CurrentApplication.Object != (FSlateApplication *)0x0)) {
      this_01 = FSlateApplication::Get();
      pTVar1 = TSharedPtr<SVirtualWindow,1>::ToSharedRef(this_00,&local_18);
      local_28.Object = (SWindow *)pTVar1->Object;
      local_28.SharedReferenceCount.ReferenceController =
           (pTVar1->SharedReferenceCount).ReferenceController;
      if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      FSlateApplication::UnregisterVirtualWindow(this_01,&local_28);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
    }
    local_38.Object = (SVirtualWindow *)0x0;
    local_38.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (this_00 != &local_38) {
      this_00->Object = (SVirtualWindow *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->SlateWindow).SharedReferenceCount,&local_38.SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
    return;
  }
  return;
}

// UpdateBodySetup @ 146a9a2c0

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
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UWidgetComponent::UpdateBodySetup(UWidgetComponent *this,bool param_1)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  int iVar8;
  UClass *pUVar9;
  UBodySetup *pUVar10;
  longlong *plVar11;
  FScriptContainerElement *pFVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auStackY_1b8 [32];
  undefined1 local_168 [25];
  FScriptContainerElement local_14f;
  undefined4 local_148;
  undefined1 *local_140;
  TVector<double>_u_0 local_138;
  double local_120;
  double dStack_118;
  double local_110;
  float local_108;
  float local_104;
  float local_100;
  TRotator<double> local_f8;
  double local_d8 [2];
  double local_c8 [2];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  if (this->Space == Screen) {
    (this->BodySetup).field0_0x0.DebugPtr = (UBodySetup *)0x0;
  }
  else if (((this->BodySetup).field0_0x0.DebugPtr == (UBodySetup *)0x0) || (param_1)) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar9 = Z_Construct_UClass_UBodySetup_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_b8,pUVar9);
    local_b8._8_8_ = this;
    pUVar10 = (UBodySetup *)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
    if (local_b8._64_8_ != 0) {
      plVar11 = (longlong *)(local_b8 + 0x50);
      if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
        plVar11 = (longlong *)local_b8._104_8_;
      }
      (**(code **)(*plVar11 + 0x10))();
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UBodySetup *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar10);
    }
    local_168[0x18] = local_168[0x18] | 1;
    (this->BodySetup).field0_0x0.DebugPtr = pUVar10;
    *(undefined1 *)((longlong)&pUVar10->_padding_ + 1) = 2;
    pUVar10 = (this->BodySetup).field0_0x0.DebugPtr;
    local_168._16_4_ = 0;
    local_140 = local_168;
    local_138._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_138._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_138._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_110 = UE::Math::TRotator<double>::ZeroRotator.Roll;
    local_168._8_4_ = 0;
    local_168._12_4_ = 0;
    local_168._20_4_ = 1;
    local_14f = (FScriptContainerElement)0x3;
    local_148 = 6;
    local_168._0_8_ = &___7FKBoxElem__6B_;
    local_120 = UE::Math::TRotator<double>::ZeroRotator.Pitch;
    dStack_118 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
    local_108 = 1.0;
    local_104 = 1.0;
    local_100 = 1.0;
    pFVar12 = (pUVar10->AggGeom).BoxElems.AllocatorInstance.Data;
    if ((pFVar12 <= (FScriptContainerElement *)local_168) &&
       ((FScriptContainerElement *)local_168 <
        pFVar12 + (longlong)(pUVar10->AggGeom).BoxElems.ArrayMax * 0x70)) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar7) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar8 = (pUVar10->AggGeom).BoxElems.ArrayNum;
    piVar1 = &(pUVar10->AggGeom).BoxElems.ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x870,&(pUVar10->AggGeom).BoxElems.AllocatorInstance,piVar1);
    }
    (pUVar10->AggGeom).BoxElems.ArrayNum = iVar8 + 1;
    pFVar12 = (pUVar10->AggGeom).BoxElems.AllocatorInstance.Data + (longlong)iVar8 * 0x70;
    *(undefined ***)pFVar12 = &___7FKShapeElem__6B_;
    *(undefined4 *)(pFVar12 + 8) = local_168._8_4_;
    *(ulonglong *)(pFVar12 + 0xc) = CONCAT44(local_168._16_4_,local_168._12_4_);
    *(undefined4 *)(pFVar12 + 0x14) = local_168._20_4_;
    pFVar12[0x18] =
         (FScriptContainerElement)
         ((byte)pFVar12[0x18] ^ ((byte)pFVar12[0x18] ^ local_168[0x18]) & 1);
    pFVar12[0x19] = local_14f;
    *(undefined4 *)(pFVar12 + 0x20) = 6;
    *(FScriptContainerElement **)(pFVar12 + 0x28) = pFVar12;
    *(undefined ***)pFVar12 = &___7FKBoxElem__6B_;
    *(double *)(pFVar12 + 0x30) = local_138._s_0.X;
    *(double *)(pFVar12 + 0x38) = local_138._s_0.Y;
    *(double *)(pFVar12 + 0x40) = local_138._s_0.Z;
    *(double *)(pFVar12 + 0x48) = local_120;
    *(double *)(pFVar12 + 0x50) = dStack_118;
    *(double *)(pFVar12 + 0x58) = local_110;
    *(float *)(pFVar12 + 0x60) = local_108;
    *(float *)(pFVar12 + 100) = local_104;
    *(float *)(pFVar12 + 0x68) = local_100;
    FKBoxElem::~FKBoxElem((FKBoxElem *)local_168);
    lVar2 = *(longlong *)((longlong)(this->BodySetup).field0_0x0 + 0x48);
    if ((this->GeometryMode == Plane) || (this->GeometryMode != Cylinder)) {
      dVar14 = (double)(this->CurrentDrawSize).field0_0x0._s_0.X;
    }
    else {
      dVar6 = this->CylinderArcAngle * __real_3f91df46a2529d39;
      dVar15 = (double)(this->CurrentDrawSize).field0_0x0._s_0.X;
      dVar14 = sin(dVar6 * __real_3fe0000000000000);
      dVar14 = dVar14 * ((dVar15 + dVar15) / dVar6);
    }
    iVar8 = (this->CurrentDrawSize).field0_0x0._s_0.Y;
    dVar13 = (double)iVar8;
    dVar4 = dVar14 * __real_3fe0000000000000;
    dVar6 = (this->Pivot).field0_0x0._s_0.X;
    dVar15 = (this->Pivot).field0_0x0._s_0.Y;
    *(undefined4 *)(lVar2 + 0x60) = 0x3c23d70a;
    dVar5 = dVar13 * __real_3fe0000000000000;
    *(float *)(lVar2 + 0x68) = (float)iVar8;
    *(float *)(lVar2 + 100) = (float)dVar14;
    bVar7 = UE::Math::TTransform<double>::IsValid(&UE::Math::TTransform<double>::Identity);
    if (!bVar7) {
      bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<8441893820995469421>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\PhysicsEngine\\BoxElem.h"
                         ,0x6d,"InTransform.IsValid()");
      if (bVar7) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    local_d8[0] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
    local_d8[1] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
    local_c8[0] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
    local_c8[1] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
    UE::Math::TQuat<double>::Rotator((TQuat<double> *)local_d8,&local_f8);
    *(double *)(lVar2 + 0x48) = local_f8.Pitch;
    *(double *)(lVar2 + 0x50) = local_f8.Yaw;
    *(double *)(lVar2 + 0x58) = local_f8.Roll;
    *(undefined8 *)(lVar2 + 0x30) = 0x3fe0000000000000;
    *(double *)(lVar2 + 0x38) = dVar14 * dVar6 - dVar4;
    *(double *)(lVar2 + 0x40) = dVar13 * dVar15 - dVar5;
  }
  return;
}

// UpdateMaterialInstance @ 146a9a930

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

void __thiscall UWidgetComponent::UpdateMaterialInstance(UWidgetComponent *this)

{
  float fVar1;
  UTextureRenderTarget2D *pUVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  UMaterialInterface *pUVar5;
  UMaterialInstanceDynamic *pUVar6;
  FName *pFVar7;
  FName local_res8;
  FLinearColor_u_0 local_28 [2];
  
  (this->MaterialInstance).field0_0x0.DebugPtr = (UMaterialInstanceDynamic *)0x0;
  if (this->Space == Screen) {
    return;
  }
  pUVar5 = (UMaterialInterface *)(**(code **)(*(longlong *)this + 0x690))(this,0);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  pUVar6 = UMaterialInstanceDynamic::Create(pUVar5,(UObject *)this,(FName)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
     (pUVar6 == (UMaterialInstanceDynamic *)0x0)) {
    (this->MaterialInstance).field0_0x0.DebugPtr = pUVar6;
    if (pUVar6 == (UMaterialInstanceDynamic *)0x0) goto LAB_146a9a9b2;
  }
  else {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
    (this->MaterialInstance).field0_0x0.DebugPtr = pUVar6;
  }
  UObjectBaseUtility::AddToCluster((UObjectBaseUtility *)pUVar6,(UObjectBaseUtility *)this,false);
LAB_146a9a9b2:
  pUVar6 = (this->MaterialInstance).field0_0x0.DebugPtr;
  if (pUVar6 != (UMaterialInstanceDynamic *)0x0) {
    pUVar2 = (this->RenderTarget).field0_0x0.DebugPtr;
    pFVar7 = ::FName::FName(&local_res8,"SlateUI");
    UMaterialInstanceDynamic::SetTextureParameterValue(pUVar6,*pFVar7,(UTexture *)pUVar2);
    pUVar6 = (this->MaterialInstance).field0_0x0.DebugPtr;
    uVar3 = *(undefined8 *)&(this->TintColorAndOpacity).field0_0x0;
    uVar4 = *(undefined8 *)((longlong)&(this->TintColorAndOpacity).field0_0x0 + 8);
    pFVar7 = ::FName::FName(&local_res8,"TintColorAndOpacity");
    local_28[0]._0_8_ = uVar3;
    local_28[0]._8_8_ = uVar4;
    UMaterialInstanceDynamic::SetVectorParameterValue
              (pUVar6,*pFVar7,(FLinearColor *)&local_28[0]._s_0);
    pUVar6 = (this->MaterialInstance).field0_0x0.DebugPtr;
    fVar1 = this->OpacityFromTexture;
    pFVar7 = ::FName::FName(&local_res8,"OpacityFromTexture");
    UMaterialInstanceDynamic::SetScalarParameterValue(pUVar6,*pFVar7,fVar1);
  }
  (**(code **)(*(longlong *)this + 0x378))(this);
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&this->OnMaterialInstanceUpdated);
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  return;
}

// UpdateMaterialInstanceParameters @ 146a9aa90

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

void __thiscall UWidgetComponent::UpdateMaterialInstanceParameters(UWidgetComponent *this)

{
  float fVar1;
  UMaterialInstanceDynamic *pUVar2;
  UTextureRenderTarget2D *pUVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  FName *pFVar6;
  FName local_res8;
  FLinearColor_u_0 local_28 [2];
  
  pUVar2 = (this->MaterialInstance).field0_0x0.DebugPtr;
  if (pUVar2 != (UMaterialInstanceDynamic *)0x0) {
    pUVar3 = (this->RenderTarget).field0_0x0.DebugPtr;
    pFVar6 = ::FName::FName(&local_res8,"SlateUI");
    UMaterialInstanceDynamic::SetTextureParameterValue(pUVar2,*pFVar6,(UTexture *)pUVar3);
    pUVar2 = (this->MaterialInstance).field0_0x0.DebugPtr;
    uVar4 = *(undefined8 *)&(this->TintColorAndOpacity).field0_0x0;
    uVar5 = *(undefined8 *)((longlong)&(this->TintColorAndOpacity).field0_0x0 + 8);
    pFVar6 = ::FName::FName(&local_res8,"TintColorAndOpacity");
    local_28[0]._0_8_ = uVar4;
    local_28[0]._8_8_ = uVar5;
    UMaterialInstanceDynamic::SetVectorParameterValue
              (pUVar2,*pFVar6,(FLinearColor *)&local_28[0]._s_0);
    pUVar2 = (this->MaterialInstance).field0_0x0.DebugPtr;
    fVar1 = this->OpacityFromTexture;
    pFVar6 = ::FName::FName(&local_res8,"OpacityFromTexture");
    UMaterialInstanceDynamic::SetScalarParameterValue(pUVar2,*pFVar6,fVar1);
  }
  return;
}

// UpdateRenderTarget @ 146a9b490

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

void __thiscall UWidgetComponent::UpdateRenderTarget(UWidgetComponent *this,TIntPoint<int> param_1)

{
  UMaterialInstanceDynamic *pUVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  bool bVar8;
  float fVar9;
  EPixelFormat EVar10;
  FSlateApplication *pFVar11;
  UTextureRenderTarget2D *pUVar12;
  FName *pFVar13;
  uint uVar14;
  float fVar15;
  TIntPoint<int>_u_0 local_res10;
  undefined1 local_48 [12];
  float fStack_3c;
  
  fVar2 = (this->BackgroundColor).field0_0x0._s_0.R;
  fVar3 = (this->BackgroundColor).field0_0x0._s_0.G;
  fVar4 = (this->BackgroundColor).field0_0x0._s_0.B;
  fVar15 = (this->BackgroundColor).field0_0x0._s_0.A;
  local_48._8_4_ = *(float *)((longlong)&(this->BackgroundColor).field0_0x0 + 8);
  fStack_3c = *(float *)((longlong)&(this->BackgroundColor).field0_0x0 + 0xc);
  bVar7 = false;
  fVar9 = __real_3f800000;
  if (this->BlendMode == Opaque) {
LAB_146a9b501:
    fVar15 = fVar9;
    fStack_3c = fVar15;
    local_48._8_4_ = fVar4;
  }
  else if (this->BlendMode == Masked) {
    fVar9 = 0.0;
    goto LAB_146a9b501;
  }
  local_48._0_8_ = *(undefined8 *)&(this->BackgroundColor).field0_0x0;
  uVar14 = param_1.field0_0x0._0_4_;
  local_res10 = param_1.field0_0x0;
  bVar8 = false;
  if ((uVar14 != 0) && (param_1.field0_0x0._4_4_ != 0)) {
    pFVar11 = FSlateApplication::Get();
    EVar10 = (**(code **)(**(longlong **)&pFVar11->field_0x60 + 0x1a8))();
    pUVar12 = (this->RenderTarget).field0_0x0.DebugPtr;
    if (pUVar12 == (UTextureRenderTarget2D *)0x0) {
      pUVar12 = NewObject<UTextureRenderTarget2D>((UObject *)this);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar12 != (UTextureRenderTarget2D *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar12);
      }
      (this->RenderTarget).field0_0x0.DebugPtr = pUVar12;
      (pUVar12->ClearColor).field0_0x0._s_0.R = fVar2;
      (pUVar12->ClearColor).field0_0x0._s_0.G = fVar3;
      (pUVar12->ClearColor).field0_0x0._s_0.B = fVar4;
      (pUVar12->ClearColor).field0_0x0._s_0.A = fVar15;
      UTextureRenderTarget2D::InitCustomFormat
                ((this->RenderTarget).field0_0x0.DebugPtr,uVar14,local_res10._s_0.Y,EVar10,false);
      pUVar1 = (this->MaterialInstance).field0_0x0.DebugPtr;
      bVar7 = true;
      bVar8 = true;
      if (pUVar1 != (UMaterialInstanceDynamic *)0x0) {
        pUVar12 = (this->RenderTarget).field0_0x0.DebugPtr;
        pFVar13 = ::FName::FName((FName *)&local_res10._s_0,"SlateUI");
        UMaterialInstanceDynamic::SetTextureParameterValue(pUVar1,*pFVar13,(UTexture *)pUVar12);
        bVar7 = true;
      }
    }
    else {
      if ((((fVar2 == (pUVar12->ClearColor).field0_0x0._s_0.R) &&
           (fVar3 == (pUVar12->ClearColor).field0_0x0._s_0.G)) &&
          (fVar4 == (pUVar12->ClearColor).field0_0x0._s_0.B)) &&
         (fVar15 == (pUVar12->ClearColor).field0_0x0._s_0.A)) {
        if ((pUVar12->SizeX == uVar14) && (bVar8 = false, pUVar12->SizeY == local_res10._s_0.Y))
        goto LAB_146a9b665;
      }
      else {
        bVar7 = true;
      }
      (pUVar12->ClearColor).field0_0x0._s_0.R = fVar2;
      (pUVar12->ClearColor).field0_0x0._s_0.G = fVar3;
      (pUVar12->ClearColor).field0_0x0._s_0.B = fVar4;
      (pUVar12->ClearColor).field0_0x0._s_0.A = fVar15;
      UTextureRenderTarget2D::InitCustomFormat
                ((this->RenderTarget).field0_0x0.DebugPtr,uVar14,local_res10._s_0.Y,PF_B8G8R8A8,
                 false);
      UTextureRenderTarget2D::UpdateResourceImmediate((this->RenderTarget).field0_0x0.DebugPtr,true)
      ;
      bVar8 = true;
    }
  }
LAB_146a9b665:
  pUVar12 = (this->RenderTarget).field0_0x0.DebugPtr;
  if (pUVar12 != (UTextureRenderTarget2D *)0x0) {
    if ((bVar7) &&
       (pUVar1 = (this->MaterialInstance).field0_0x0.DebugPtr,
       pUVar1 != (UMaterialInstanceDynamic *)0x0)) {
      uVar5 = *(undefined8 *)&(pUVar12->ClearColor).field0_0x0;
      uVar6 = *(undefined8 *)((longlong)&(pUVar12->ClearColor).field0_0x0 + 8);
      pFVar13 = ::FName::FName((FName *)&local_res10._s_0,"BackColor");
      local_48._0_8_ = uVar5;
      unique0x100007b7 = uVar6;
      UMaterialInstanceDynamic::SetVectorParameterValue(pUVar1,*pFVar13,(FLinearColor *)local_48);
    }
    if (bVar8) {
      UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
    }
  }
  return;
}

// UpdateWidget @ 146a9b6e0

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

void __thiscall UWidgetComponent::UpdateWidget(UWidgetComponent *this)

{
  atomic<int> *paVar1;
  TSharedPtr<SVirtualWindow,1> *this_00;
  TWeakPtr<SWidget,1> *this_01;
  atomic<int> aVar2;
  int iVar3;
  UUserWidget *this_02;
  TIntPoint<int>_u_0_s_0 TVar4;
  UGameInstance *this_03;
  SWidget *pSVar5;
  TReferenceControllerBase<1> *pTVar6;
  code *pcVar7;
  FDeprecateVector2DParameter FVar8;
  bool bVar9;
  double dVar10;
  bool bVar11;
  bool bVar12;
  char cVar13;
  int iVar14;
  TSharedRef<SWidget,1> *pTVar15;
  FArguments *pFVar16;
  TSharedRef<SVirtualWindow,1> *pTVar17;
  SVirtualWindow *pSVar18;
  FSlateApplication *this_04;
  UWorld *pUVar19;
  UGameViewportClient *this_05;
  TSharedPtr<SViewport,1> *pTVar20;
  ULocalPlayer *pUVar21;
  SWidget *pSVar22;
  FSharedReferencer<1> FVar23;
  SWidget *pSVar24;
  uint uVar25;
  uint uVar26;
  T0RequiredArgs local_res20 [8];
  SWidget *local_388;
  FSharedReferencer<1> FStack_380;
  FLLMScope local_378 [2];
  float local_370;
  float fStack_36c;
  TSharedPtr<SVirtualWindow,1> local_368;
  FName local_358;
  FMemScope local_350;
  undefined8 local_348;
  FSharedReferencer<1> local_340;
  TAttribute<EVisibility> local_338;
  TSharedRef<SWindow,1> local_318;
  TSharedPtr<SWidget,1> local_308;
  TSharedRef<SWidget,1> local_2f8;
  TSharedRef<SWidget,1> local_2e8;
  TSharedRef<SWidget,1> local_2d8;
  TSharedRef<SVirtualWindow,1> local_2c8;
  TSharedRef<SVirtualWindow,1> local_2b8;
  TSharedPtr<SViewport,1> local_2a8;
  TSlateDecl<SVirtualWindow,RequiredArgs::T0RequiredArgs> local_298;
  TSharedRef<SWidget,1> local_280;
  FArguments local_270;
  
  if (FSlateApplication::CurrentApplication.Object == (FSlateApplication *)0x0) {
    return;
  }
  if ((this == (UWidgetComponent *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Test",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Object.h"
                          ,0x760,L""), bVar11)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((*(uint *)&this->field_0x8 >> 0x1e & 1) != 0) {
    return;
  }
  if (this->Space != World) goto LAB_146a9bec4;
  this_02 = (this->Widget).field0_0x0.DebugPtr;
  pSVar24 = (SWidget *)0x0;
  local_388 = (SWidget *)0x0;
  FStack_380.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (this_02 != (UUserWidget *)0x0) {
    pTVar15 = UWidget::TakeWidget((UWidget *)this_02,&local_2d8);
    local_340.ReferenceController = (pTVar15->SharedReferenceCount).ReferenceController;
    local_388 = pTVar15->Object;
    if (local_340.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_340.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_340.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_348 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_380,&local_340);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_340.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2d8.SharedReferenceCount.ReferenceController);
  }
  bVar11 = false;
  this_00 = &this->SlateWindow;
  bVar9 = false;
  if (this_00->Object == (SVirtualWindow *)0x0) {
    UpdateMaterialInstance(this);
    pFVar16 = SVirtualWindow::FArguments::FArguments(&local_270);
    TVar4 = (this->CurrentDrawSize).field0_0x0._s_0;
    (pFVar16->_Size).field0_0x0._s_0.X = (double)TVar4.X;
    (pFVar16->_Size).field0_0x0._s_0.Y = (double)TVar4.Y;
    FLLMScope::FLLMScope(local_378,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_358 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_350,&local_358,true);
    TSlateDecl<SVirtualWindow,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<SVirtualWindow,RequiredArgs::T0RequiredArgs>
              (&local_298,"SVirtualWindow",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\WidgetComponent.cpp"
               ,0x758,local_res20);
    FMemScope::~FMemScope(&local_350);
    FLLMScope::~FLLMScope(local_378);
    pTVar17 = TSlateDecl<SVirtualWindow,RequiredArgs::T0RequiredArgs>::operator<<=
                        (&local_298,&local_2c8,pFVar16);
    local_368.SharedReferenceCount.ReferenceController =
         (pTVar17->SharedReferenceCount).ReferenceController;
    local_368.Object = pTVar17->Object;
    if (local_368.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_368.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_368.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (this_00 != &local_368) {
      this_00->Object = local_368.Object;
      local_368.Object = (SVirtualWindow *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->SlateWindow).SharedReferenceCount,&local_368.SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_368.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2c8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_298._Widget.SharedReferenceCount.ReferenceController);
    FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_270);
    pSVar18 = TSharedPtr<SVirtualWindow,1>::operator->(this_00);
    SVirtualWindow::SetIsFocusable(pSVar18,this->bWindowFocusable);
    pSVar18 = TSharedPtr<SVirtualWindow,1>::operator->(this_00);
    SWindow::SetAllowFastUpdate((SWindow *)pSVar18,this->bUseInvalidationInWorldSpace);
    pSVar18 = TSharedPtr<SVirtualWindow,1>::operator->(this_00);
    local_338.Value = EVisibility::Visible;
    if (((this->WindowVisibility != Visible) &&
        (local_338.Value = EVisibility::SelfHitTestInvisible,
        this->WindowVisibility != SelfHitTestInvisible)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("!\"Enclosing block should never be called\"",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\WidgetComponent.cpp"
                            ,0x3ed,L""), local_338.Value = EVisibility::SelfHitTestInvisible, bVar11
       )) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    local_338.bIsSet = true;
    local_338.Getter._16_8_ = 0;
    local_338.Getter._0_8_ = 0;
    local_338.Getter._8_8_ = 0;
    SCompoundWidget::SetVisibility((SCompoundWidget *)pSVar18,&local_338);
    if (this_00->Object != (SVirtualWindow *)0x0) {
      if (((this->bReceiveHardwareInput == false) || (this->GeometryMode != Plane)) &&
         (FSlateApplication::CurrentApplication.Object != (FSlateApplication *)0x0)) {
        this_04 = FSlateApplication::Get();
        pTVar17 = TSharedPtr<SVirtualWindow,1>::ToSharedRef(this_00,&local_2b8);
        local_318.Object = (SWindow *)pTVar17->Object;
        local_318.SharedReferenceCount.ReferenceController =
             (pTVar17->SharedReferenceCount).ReferenceController;
        if (local_318.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_318.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_318.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        FSlateApplication::RegisterVirtualWindow(this_04,&local_318);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_2b8.SharedReferenceCount.ReferenceController);
      }
      if ((((this->Widget).field0_0x0.DebugPtr != (UUserWidget *)0x0) &&
          ((pUVar19 = *(UWorld **)&this->field_0xb0, pUVar19 != (UWorld *)0x0 ||
           (pUVar19 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
           pUVar19 != (UWorld *)0x0)))) &&
         ((bVar11 = UWorld::IsGameWorld(pUVar19), bVar11 &&
          ((this_03 = (pUVar19->OwningGameInstance).field0_0x0.DebugPtr,
           this_03 != (UGameInstance *)0x0 &&
           (this_05 = UGameInstance::GetGameViewportClient(this_03),
           this_05 != (UGameViewportClient *)0x0)))))) {
        pSVar18 = TSharedPtr<SVirtualWindow,1>::operator->(this_00);
        pTVar20 = UGameViewportClient::GetGameViewportWidget(this_05,&local_2a8);
        local_308.Object = (SWidget *)pTVar20->Object;
        local_308.SharedReferenceCount.ReferenceController =
             (pTVar20->SharedReferenceCount).ReferenceController;
        if (local_308.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_308.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_308.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        SWidget::AssignParentWidget((SWidget *)pSVar18,&local_308);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_2a8.SharedReferenceCount.ReferenceController);
      }
    }
    bVar11 = true;
    bVar9 = true;
  }
  pSVar18 = TSharedPtr<SVirtualWindow,1>::operator->(this_00);
  dVar10 = __real_3ff0000000000000;
  iVar3 = (this->CurrentDrawSize).field0_0x0._s_0.Y;
  uVar25 = SUB84((double)iVar3 - (double)iVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar26 = (uint)((ulonglong)((double)iVar3 - (double)iVar3) >> 0x20) &
           __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if ((__real_3ff0000000000000 <= (double)CONCAT44(uVar26,uVar25) &&
       (double)CONCAT44(uVar26,uVar25) != __real_3ff0000000000000) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("FloatFitsIn<OutType>(In, Precision)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                          ,0xc0,L"Loss of data caused by narrowing conversion"), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar14 = (this->CurrentDrawSize).field0_0x0._s_0.X;
  uVar25 = SUB84((double)iVar14 - (double)iVar14,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar26 = (uint)((ulonglong)((double)iVar14 - (double)iVar14) >> 0x20) &
           __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if ((dVar10 <= (double)CONCAT44(uVar26,uVar25) && (double)CONCAT44(uVar26,uVar25) != dVar10) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("FloatFitsIn<OutType>(In, Precision)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                          ,0xc0,L"Loss of data caused by narrowing conversion"), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FVar8._4_4_ = (float)iVar3;
  FVar8._0_4_ = (float)iVar14;
  local_370 = (float)iVar14;
  fStack_36c = (float)iVar3;
  SWindow::Resize((SWindow *)pSVar18,FVar8);
  this_01 = &this->CurrentSlateWidget;
  pSVar5 = (SWidget *)(this->CurrentSlateWidget).WeakReferenceCount.ReferenceController;
  if (local_388 == (SWidget *)0x0) {
    if ((this->SlateWidget).Object == (SWidget *)0x0) {
      pSVar22 = pSVar5;
      if (pSVar5 != (SWidget *)0x0) {
        iVar3 = (int)pSVar5->_padding_;
        do {
          pSVar22 = pSVar24;
          if (iVar3 == 0) goto LAB_146a9be05;
          LOCK();
          iVar14 = (int)pSVar5->_padding_;
          bVar11 = iVar3 == iVar14;
          if (bVar11) {
            *(int *)&pSVar5->_padding_ = iVar3 + 1;
            iVar14 = iVar3;
          }
          UNLOCK();
          iVar3 = iVar14;
        } while (!bVar11);
        pSVar24 = this_01->Object;
        pSVar22 = pSVar5;
      }
LAB_146a9be05:
      bVar11 = SNullWidget::NullWidget.Object != pSVar24;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pSVar22);
      if (bVar11) {
        TWeakPtr<SWidget,1>::operator=<SWidget>(this_01,&SNullWidget::NullWidget);
        this->bRenderCleared = false;
      }
      pSVar18 = TSharedPtr<SVirtualWindow,1>::operator->(this_00);
      local_2e8.Object = SNullWidget::NullWidget.Object;
      local_2e8.SharedReferenceCount.ReferenceController =
           SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
      if (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      SWindow::SetContent((SWindow *)pSVar18,&local_2e8);
      FVar23.ReferenceController = FStack_380.ReferenceController;
    }
    else {
      pSVar22 = pSVar5;
      if (pSVar5 != (SWidget *)0x0) {
        iVar3 = (int)pSVar5->_padding_;
        do {
          pSVar22 = pSVar24;
          if (iVar3 == 0) goto LAB_146a9bd68;
          LOCK();
          iVar14 = (int)pSVar5->_padding_;
          bVar11 = iVar3 == iVar14;
          if (bVar11) {
            *(int *)&pSVar5->_padding_ = iVar3 + 1;
            iVar14 = iVar3;
          }
          UNLOCK();
          iVar3 = iVar14;
        } while (!bVar11);
        pSVar24 = this_01->Object;
        pSVar22 = pSVar5;
      }
LAB_146a9bd68:
      pSVar5 = (this->SlateWidget).Object;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pSVar22);
      if ((pSVar5 == pSVar24) &&
         (FVar23.ReferenceController = FStack_380.ReferenceController, !bVar9)) goto LAB_146a9be94;
      TWeakPtr<SWidget,1>::operator=<SWidget>(this_01,&this->SlateWidget);
      pSVar18 = TSharedPtr<SVirtualWindow,1>::operator->(this_00);
      pTVar15 = TSharedPtr<SWidget,1>::ToSharedRef(&this->SlateWidget,&local_280);
      SWindow::SetContent((SWindow *)pSVar18,pTVar15);
      this->bRenderCleared = false;
      bVar11 = true;
      FVar23.ReferenceController = FStack_380.ReferenceController;
    }
LAB_146a9be74:
    if ((bVar9) || (bVar11)) {
      UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
      (**(code **)(*(longlong *)this + 0x420))(this,1);
    }
  }
  else {
    pSVar22 = pSVar5;
    if (pSVar5 != (SWidget *)0x0) {
      iVar3 = (int)pSVar5->_padding_;
      do {
        pSVar22 = pSVar24;
        if (iVar3 == 0) goto LAB_146a9bc1c;
        LOCK();
        iVar14 = (int)pSVar5->_padding_;
        bVar12 = iVar3 == iVar14;
        if (bVar12) {
          *(int *)&pSVar5->_padding_ = iVar3 + 1;
          iVar14 = iVar3;
        }
        UNLOCK();
        iVar3 = iVar14;
      } while (!bVar12);
      pSVar24 = this_01->Object;
      pSVar22 = pSVar5;
    }
LAB_146a9bc1c:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar22);
    FVar23.ReferenceController = FStack_380.ReferenceController;
    if ((local_388 != pSVar24) || (bVar11)) {
      (this->CurrentSlateWidget).Object = local_388;
      if (FStack_380.ReferenceController !=
          (this->CurrentSlateWidget).WeakReferenceCount.ReferenceController) {
        if (FStack_380.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (FStack_380.ReferenceController)->WeakReferenceCount =
               (atomic<int>)((int)(FStack_380.ReferenceController)->WeakReferenceCount + 1);
          UNLOCK();
        }
        pTVar6 = (this->CurrentSlateWidget).WeakReferenceCount.ReferenceController;
        if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar1 = &pTVar6->WeakReferenceCount;
          aVar2 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar2 == (atomic<int>)0x1) {
            (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
          }
        }
        (this->CurrentSlateWidget).WeakReferenceCount.ReferenceController =
             FVar23.ReferenceController;
      }
      pSVar18 = TSharedPtr<SVirtualWindow,1>::operator->(this_00);
      if ((local_388 == (SWidget *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x408,L""), bVar11)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_2f8.Object = local_388;
      local_2f8.SharedReferenceCount.ReferenceController = FStack_380.ReferenceController;
      if (FVar23.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (FVar23.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(FVar23.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((local_388 == (SWidget *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x25d,L""), bVar11)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      SWindow::SetContent((SWindow *)pSVar18,&local_2f8);
      this->bRenderCleared = false;
      bVar11 = true;
      goto LAB_146a9be74;
    }
  }
LAB_146a9be94:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar23.ReferenceController);
LAB_146a9bec4:
  if ((((((((this->Widget).field0_0x0.DebugPtr == (UUserWidget *)0x0) &&
          ((this->SlateWidget).Object == (SWidget *)0x0)) || (this->Space != Screen)) ||
        ((pUVar19 = *(UWorld **)&this->field_0xb0, pUVar19 == (UWorld *)0x0 &&
         (pUVar19 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
         pUVar19 == (UWorld *)0x0)))) ||
       ((bVar11 = UWorld::IsGameWorld(pUVar19), !bVar11 ||
        ((pUVar21 = GetOwnerPlayer(this), pUVar21 == (ULocalPlayer *)0x0 ||
         (pUVar21->_padding_ == 0)))))) ||
      (cVar13 = (**(code **)(*(longlong *)this + 0x560))(this), cVar13 == '\0')) ||
     (*(char *)(*(longlong *)&this->field_0xa8 + 0x58) < '\0')) {
    if (this->bAddedToScreen != false) {
      RemoveWidgetFromScreen(this);
    }
  }
  else if (this->bAddedToScreen == false) {
    AddWidgetToScreen(this,pUVar21);
    return;
  }
  return;
}

// UpdateWidgetOnScreen @ 146a9bfa0

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

void __thiscall UWidgetComponent::UpdateWidgetOnScreen(UWidgetComponent *this)

{
  bool bVar1;
  char cVar2;
  UWorld *this_00;
  ULocalPlayer *pUVar3;
  
  if (((((((this->Widget).field0_0x0.DebugPtr != (UUserWidget *)0x0) ||
         ((this->SlateWidget).Object != (SWidget *)0x0)) && (this->Space == Screen)) &&
       ((this_00 = *(UWorld **)&this->field_0xb0, this_00 != (UWorld *)0x0 ||
        (this_00 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
        this_00 != (UWorld *)0x0)))) &&
      ((bVar1 = UWorld::IsGameWorld(this_00), bVar1 &&
       ((pUVar3 = GetOwnerPlayer(this), pUVar3 != (ULocalPlayer *)0x0 && (pUVar3->_padding_ != 0))))
      )) && ((cVar2 = (**(code **)(*(longlong *)this + 0x560))(this), cVar2 != '\0' &&
             (-1 < *(char *)(*(longlong *)&this->field_0xa8 + 0x58))))) {
    if (this->bAddedToScreen != false) {
      return;
    }
    AddWidgetToScreen(this,pUVar3);
    return;
  }
  if (this->bAddedToScreen != false) {
    RemoveWidgetFromScreen(this);
  }
  return;
}

// execGetCurrentDrawSize @ 146aa1690

void __cdecl
UWidgetComponent::execGetCurrentDrawSize(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = *(undefined8 *)&param_1[0x25].field_0x10;
  *(double *)param_3 = (double)(int)uVar1;
  *(double *)((longlong)param_3 + 8) = (double)(int)((ulonglong)uVar1 >> 0x20);
  return;
}

// execGetCylinderArcAngle @ 146aa16e0

void __cdecl
UWidgetComponent::execGetCylinderArcAngle(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)(param_1 + 0x2a);
  return;
}

// execGetDrawAtDesiredSize @ 146aa1830

void __cdecl
UWidgetComponent::execGetDrawAtDesiredSize(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[0x25].field_0x19;
  return;
}

// execGetDrawSize @ 146aa1860

void __cdecl UWidgetComponent::execGetDrawSize(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = *(undefined8 *)&param_1[0x24].field_0x20;
  *(double *)param_3 = (double)(int)uVar1;
  *(double *)((longlong)param_3 + 8) = (double)(int)((ulonglong)uVar1 >> 0x20);
  return;
}

// execGetGeometryMode @ 146aa1b90

void __cdecl UWidgetComponent::execGetGeometryMode(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[0x29].field_0x20;
  return;
}

// execGetManuallyRedraw @ 146aa2590

void __cdecl UWidgetComponent::execGetManuallyRedraw(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = *(undefined1 *)(param_1 + 0x25);
  return;
}

// execGetMaterialInstance @ 146aa25c0

void __cdecl
UWidgetComponent::execGetMaterialInstance(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[0x29].field_0x8;
  return;
}

// execGetOwnerPlayer @ 146aa26e0

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

void __cdecl UWidgetComponent::execGetOwnerPlayer(UObject *param_1,FFrame *param_2,void *param_3)

{
  ULocalPlayer *pUVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar1 = GetOwnerPlayer((UWidgetComponent *)param_1);
  *(ULocalPlayer **)param_3 = pUVar1;
  return;
}

// execGetPivot @ 146aa27e0

void __cdecl UWidgetComponent::execGetPivot(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = *(undefined8 *)(param_1 + 0x26);
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[0x25].field_0x20;
  *(undefined8 *)((longlong)param_3 + 8) = uVar1;
  return;
}

// execGetRedrawTime @ 146aa2810

void __cdecl UWidgetComponent::execGetRedrawTime(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[0x25].field_0x4;
  return;
}

// execGetRenderTarget @ 146aa2840

void __cdecl UWidgetComponent::execGetRenderTarget(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)(param_1 + 0x29);
  return;
}

// execGetTickWhenOffscreen @ 146aa2ab0

void __cdecl
UWidgetComponent::execGetTickWhenOffscreen(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[0x27].field_0x16;
  return;
}

// execGetTwoSided @ 146aa2ae0

void __cdecl UWidgetComponent::execGetTwoSided(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[0x27].field_0x15;
  return;
}

// execGetUserWidgetObject @ 146aa2b10

void __cdecl
UWidgetComponent::execGetUserWidgetObject(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[0x2b].field_0x10;
  return;
}

// execGetWidget @ 146aa2b40

void __cdecl UWidgetComponent::execGetWidget(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0xb50))();
  *(undefined8 *)param_3 = uVar1;
  return;
}

// execGetWidgetSpace @ 146aa2c80

void __cdecl UWidgetComponent::execGetWidgetSpace(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[0x24].field_0x10;
  return;
}

// execGetWindowFocusable @ 146aa2cb0

void __cdecl
UWidgetComponent::execGetWindowFocusable(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[0x26].field_0x9;
  return;
}

// execGetWindowVisiblility @ 146aa2ce0

void __cdecl
UWidgetComponent::execGetWindowVisiblility(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[0x26].field_0xa;
  return;
}

// execIsWidgetVisible @ 146aa3480

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

void __cdecl UWidgetComponent::execIsWidgetVisible(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsWidgetVisible((UWidgetComponent *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execRequestRedraw @ 146aa66f0

void __cdecl UWidgetComponent::execRequestRedraw(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x000146aa6708. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0xb68))();
  return;
}

// execRequestRenderUpdate @ 146aa6720

void __cdecl
UWidgetComponent::execRequestRenderUpdate(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x000146aa6738. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0xb70))();
  return;
}

// execSetBackgroundColor @ 146aa77b0

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
UWidgetComponent::execSetBackgroundColor(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((((local_18 != *(float *)&param_1[0x26].field_0x18) ||
       (fStack_14 != *(float *)&param_1[0x26].field_0x1c)) ||
      (fStack_10 != *(float *)&param_1[0x26].field_0x20)) ||
     (fStack_c != *(float *)&param_1[0x26].field_0x24)) {
    *(float *)&param_1[0x26].field_0x18 = local_18;
    *(float *)&param_1[0x26].field_0x1c = fStack_14;
    *(float *)&param_1[0x26].field_0x20 = fStack_10;
    *(float *)&param_1[0x26].field_0x24 = fStack_c;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  }
  return;
}

// execSetCylinderArcAngle @ 146aa7e30

void __cdecl
UWidgetComponent::execSetCylinderArcAngle(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res8;
  
  local_res8 = 0;
  FDoubleProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)(param_1 + 0x2a) = local_res8;
  return;
}

// execSetDrawAtDesiredSize @ 146aa81d0

void __cdecl
UWidgetComponent::execSetDrawAtDesiredSize(UObject *param_1,FFrame *param_2,void *param_3)

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
  param_1[0x25].field_0x19 = local_res8[0] != 0;
  return;
}

// execSetDrawSize @ 146aa8260

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl UWidgetComponent::execSetDrawSize(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  double local_18;
  double local_10;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (((int)local_18 != *(int *)&param_1[0x24].field_0x20) ||
     ((int)local_10 != *(int *)&param_1[0x24].field_0x24)) {
    *(ulonglong *)&param_1[0x24].field_0x20 = CONCAT44((int)local_10,(int)local_18);
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  }
  return;
}

// execSetGeometryMode @ 146aa8610

void __cdecl UWidgetComponent::execSetGeometryMode(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res8 [8];
  
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
  param_1[0x29].field_0x20 = local_res8[0];
  return;
}

// execSetManuallyRedraw @ 146aa9270

void __cdecl UWidgetComponent::execSetManuallyRedraw(UObject *param_1,FFrame *param_2,void *param_3)

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
  *(bool *)(param_1 + 0x25) = local_res8[0] != 0;
  return;
}

// execSetOwnerPlayer @ 146aa9640

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

void __cdecl UWidgetComponent::execSetOwnerPlayer(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  bool bVar3;
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
  pUVar2 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(UObject **)&param_1[0x26].field_0x10 == (UObject *)0x0) {
    bVar3 = local_res8 == (UObject *)0x0;
  }
  else {
    bVar3 = *(UObject **)&param_1[0x26].field_0x10 == local_res8;
  }
  if (!bVar3) {
    RemoveWidgetFromScreen((UWidgetComponent *)param_1);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar2);
    }
    *(UObject **)&param_1[0x26].field_0x10 = pUVar2;
  }
  return;
}

// execSetPivot @ 146aa9b30

void __cdecl UWidgetComponent::execSetPivot(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar uVar2;
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  uchar uVar10;
  uchar uVar11;
  uchar uVar12;
  uchar uVar13;
  uchar uVar14;
  uchar uVar15;
  uchar uVar16;
  uchar *puVar17;
  uchar local_18 [16];
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_18);
  }
  puVar17 = local_18;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar17 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = puVar17[1];
  uVar3 = puVar17[2];
  uVar4 = puVar17[3];
  uVar5 = puVar17[4];
  uVar6 = puVar17[5];
  uVar7 = puVar17[6];
  uVar8 = puVar17[7];
  uVar9 = puVar17[8];
  uVar10 = puVar17[9];
  uVar11 = puVar17[10];
  uVar12 = puVar17[0xb];
  uVar13 = puVar17[0xc];
  uVar14 = puVar17[0xd];
  uVar15 = puVar17[0xe];
  uVar16 = puVar17[0xf];
  param_1[0x25].field_0x20 = puVar17[0];
  param_1[0x25].field_0x21 = uVar2;
  param_1[0x25].field_0x22 = uVar3;
  param_1[0x25].field_0x23 = uVar4;
  param_1[0x25].field_0x24 = uVar5;
  param_1[0x25].field_0x25 = uVar6;
  param_1[0x25].field_0x26 = uVar7;
  param_1[0x25].field_0x27 = uVar8;
  param_1[0x26].field_0x0 = uVar9;
  param_1[0x26].field_0x1 = uVar10;
  param_1[0x26].field_0x2 = uVar11;
  param_1[0x26].field_0x3 = uVar12;
  param_1[0x26].field_0x4 = uVar13;
  param_1[0x26].field_0x5 = uVar14;
  param_1[0x26].field_0x6 = uVar15;
  param_1[0x26].field_0x7 = uVar16;
  return;
}

// execSetRedrawTime @ 146aa9f40

void __cdecl UWidgetComponent::execSetRedrawTime(UObject *param_1,FFrame *param_2,void *param_3)

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
  *(undefined4 *)&param_1[0x25].field_0x4 = local_res8[0];
  return;
}

// execSetTickMode @ 146aa9fd0

void __cdecl UWidgetComponent::execSetTickMode(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  char local_res8 [8];
  
  local_res8[0] = '\0';
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
  param_1[0x2a].field_0x8 = local_res8[0];
  (**(code **)(*(longlong *)param_1 + 0x420))(param_1,local_res8[0] != '\0');
  return;
}

// execSetTickWhenOffscreen @ 146aaa060

void __cdecl
UWidgetComponent::execSetTickWhenOffscreen(UObject *param_1,FFrame *param_2,void *param_3)

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
  param_1[0x27].field_0x16 = local_res8[0] != 0;
  return;
}

// execSetTintColorAndOpacity @ 146aaa0f0

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

void __cdecl
UWidgetComponent::execSetTintColorAndOpacity(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((((local_18 != *(float *)(param_1 + 0x27)) ||
       (fStack_14 != *(float *)&param_1[0x27].field_0x4)) ||
      (fStack_10 != *(float *)&param_1[0x27].field_0x8)) ||
     (fStack_c != *(float *)&param_1[0x27].field_0xc)) {
    *(float *)(param_1 + 0x27) = local_18;
    *(float *)&param_1[0x27].field_0x4 = fStack_14;
    *(float *)&param_1[0x27].field_0x8 = fStack_10;
    *(float *)&param_1[0x27].field_0xc = fStack_c;
    UpdateMaterialInstanceParameters((UWidgetComponent *)param_1);
  }
  return;
}

// execSetTwoSided @ 146aaa1b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl UWidgetComponent::execSetTwoSided(UObject *param_1,FFrame *param_2,void *param_3)

{
  byte bVar1;
  FProperty *pFVar2;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (((local_res8[0] != 0) != (bool)param_1[0x27].field_0x15) &&
     (bVar1 = param_1[3].field_0x20, param_1[0x27].field_0x15 = local_res8[0] != 0, (bVar1 & 1) != 0
     )) {
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  }
  return;
}

// execSetWidget @ 146aaa730

void __cdecl UWidgetComponent::execSetWidget(UObject *param_1,FFrame *param_2,void *param_3)

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
  (**(code **)(*(longlong *)param_1 + 0xb58))(param_1,local_res8);
  return;
}

// execSetWidgetSpace @ 146aaa7c0

void __cdecl UWidgetComponent::execSetWidgetSpace(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res8 [8];
  
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
  param_1[0x24].field_0x10 = local_res8[0];
  return;
}

// execSetWindowFocusable @ 146aaa840

void __cdecl
UWidgetComponent::execSetWindowFocusable(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  SVirtualWindow *this;
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
  this = *(SVirtualWindow **)&param_1[0x2a].field_0x10;
  param_1[0x26].field_0x9 = local_res8[0] != 0;
  if (this != (SVirtualWindow *)0x0) {
    SVirtualWindow::SetIsFocusable(this,local_res8[0] != 0);
  }
  return;
}

// execSetWindowVisibility @ 146aaade0

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

void __cdecl
UWidgetComponent::execSetWindowVisibility(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  EWindowVisibility local_res10 [24];
  
  local_res10[0] = Visible;
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
  SetWindowVisibility((UWidgetComponent *)param_1,local_res10[0]);
  return;
}

// operator() @ 1504f7730

bool __thiscall `UWidgetComponent::GetLocalHitLocation'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<4348376515700852722>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4348376515700852722>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

