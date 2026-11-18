// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 16

// StaticClass @ 14773bdb0

UClass * __cdecl UBrushComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBrushComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"BrushComponent",
               &Z_Registration_Info_UClass_UBrushComponent.InnerSingleton,
               StaticRegisterNativesUBrushComponent,0x560,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UBrushComponent>,
               InternalVTableHelperCtorCaller<UBrushComponent>,local_res8,
               UPrimitiveComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBrushComponent.InnerSingleton;
}

// UBrushComponent @ 1477ef9b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UBrushComponent * __thiscall
UBrushComponent::UBrushComponent(UBrushComponent *this,FVTableHelper *param_1)

{
  UPrimitiveComponent::UPrimitiveComponent((UPrimitiveComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  (this->Brush).field0_0x0.DebugPtr = (UModel *)0x0;
  (this->BrushBodySetup).field0_0x0.DebugPtr = (UBodySetup *)0x0;
  return this;
}

// UBrushComponent @ 1477efa30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UBrushComponent * __thiscall
UBrushComponent::UBrushComponent(UBrushComponent *this,FObjectInitializer *param_1)

{
  UPrimitiveComponent::UPrimitiveComponent((UPrimitiveComponent *)this,param_1);
  this->field_0x281 = this->field_0x281 & 0xf3;
  this->field_0x1a9 = this->field_0x1a9 | 8;
  this->field_0x27d = this->field_0x27d | 8;
  this->field_0x281 = this->field_0x281 | 0x10;
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  this->field_0x9a = this->field_0x9a | 0x80;
  (this->Brush).field0_0x0.DebugPtr = (UModel *)0x0;
  (this->BrushBodySetup).field0_0x0.DebugPtr = (UBodySetup *)0x0;
  return this;
}

// ~UBrushComponent @ 1477f4590

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UBrushComponent::~UBrushComponent(UBrushComponent *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  UPrimitiveComponent::~UPrimitiveComponent((UPrimitiveComponent *)this);
  return;
}

// BuildSimpleBrushCollision @ 14780d610

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UBrushComponent::BuildSimpleBrushCollision(UBrushComponent *this)

{
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  UBodySetup *pUVar4;
  longlong *plVar5;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  if (*(longlong *)&this->field_0xa8 == 0) {
    if (2 < (byte)LogBrushComponent._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogBrushComponent);
    }
  }
  else {
    if ((this->BrushBodySetup).field0_0x0.DebugPtr == (UBodySetup *)0x0) {
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)this,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar3 = Z_Construct_UClass_UBodySetup_NoRegister();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_98,pUVar3);
      local_98._8_8_ = this;
      pUVar4 = (UBodySetup *)
               StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
      if (local_98._64_8_ != 0) {
        plVar5 = (longlong *)(local_98 + 0x50);
        if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
          plVar5 = (longlong *)local_98._104_8_;
        }
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar4 == (UBodySetup *)0x0)) {
        (this->BrushBodySetup).field0_0x0.DebugPtr = pUVar4;
        if ((pUVar4 == (UBodySetup *)0x0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("BrushBodySetup",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\BrushComponent.cpp"
                               ,0x2e6,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      else {
        UE::GC::MarkAsReachable((UObject *)pUVar4);
        (this->BrushBodySetup).field0_0x0.DebugPtr = pUVar4;
      }
    }
    *(undefined1 *)((longlong)&((this->BrushBodySetup).field0_0x0.DebugPtr)->_padding_ + 1) = 2;
    UObjectBaseUtility::MarkPackageDirty((UObjectBaseUtility *)this);
  }
  return;
}

// CalcBounds @ 14780e430

TBoxSphereBounds<double,double> * __thiscall
UBrushComponent::CalcBounds
          (UBrushComponent *this,TBoxSphereBounds<double,double> *__return_storage_ptr__,
          TTransform<double> *param_1)

{
  UBodySetup *pUVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  TVector<double>_u_0 local_48;
  double dStack_30;
  double local_28;
  double dStack_20;
  double local_18;
  
  uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  pUVar1 = (this->BrushBodySetup).field0_0x0.DebugPtr;
  if ((pUVar1 != (UBodySetup *)0x0) &&
     (0 < (pUVar1->AggGeom).SkinnedTriangleMeshElems.ArrayNum +
          (pUVar1->AggGeom).MLLevelSetElems.ArrayNum +
          (pUVar1->AggGeom).SkinnedLevelSetElems.ArrayNum + (pUVar1->AggGeom).LevelSetElems.ArrayNum
          + (pUVar1->AggGeom).TaperedCapsuleElems.ArrayNum + (pUVar1->AggGeom).ConvexElems.ArrayNum
          + (pUVar1->AggGeom).SphylElems.ArrayNum + (pUVar1->AggGeom).BoxElems.ArrayNum +
          (pUVar1->AggGeom).SphereElems.ArrayNum)) {
    FKAggregateGeom::CalcBoxSphereBounds
              (&pUVar1->AggGeom,(TBoxSphereBounds<double,double> *)&local_48._s_0,param_1);
    (__return_storage_ptr__->Origin).field0_0x0._s_0.X = local_48._s_0.X;
    (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = local_48._s_0.Y;
    (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = local_48._s_0.Z;
    (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X = dStack_30;
    (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y = local_28;
    (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z = dStack_20;
    __return_storage_ptr__->SphereRadius = local_18;
    return __return_storage_ptr__;
  }
  dVar2 = (param_1->Translation).XY.m128d_f64[0];
  dVar3 = (param_1->Translation).XY.m128d_f64[1];
  __return_storage_ptr__->SphereRadius = 0.0;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.X = dVar2;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = dVar3;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = (param_1->Translation).ZW.m128d_f64[0];
  uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X = (double)uVar4;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y = (double)uVar5;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z = (double)uVar6;
  return __return_storage_ptr__;
}

// CreateSceneProxy @ 14781ad00

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FPrimitiveSceneProxy * __thiscall UBrushComponent::CreateSceneProxy(UBrushComponent *this)

{
  int iVar1;
  char cVar2;
  UClass *pUVar3;
  FBrushSceneProxy *pFVar4;
  ABrush *pAVar5;
  
  if ((this->Brush).field0_0x0.DebugPtr == (UModel *)0x0) {
    return (FPrimitiveSceneProxy *)0x0;
  }
  pAVar5 = *(ABrush **)&this->field_0xa8;
  if (pAVar5 != (ABrush *)0x0) {
    pUVar3 = Z_Construct_UClass_ABrush_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pAVar5->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pAVar5->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      cVar2 = (**(code **)(GEngine->_padding_ + 0x358))(GEngine,pAVar5);
      if (cVar2 == '\0') {
        return (FPrimitiveSceneProxy *)0x0;
      }
      pFVar4 = ::operator_new(0x2c0);
      if (pFVar4 == (FBrushSceneProxy *)0x0) {
        return (FPrimitiveSceneProxy *)0x0;
      }
      goto LAB_14781ad74;
    }
  }
  pFVar4 = ::operator_new(0x2c0);
  if (pFVar4 == (FBrushSceneProxy *)0x0) {
    return (FPrimitiveSceneProxy *)0x0;
  }
  pAVar5 = (ABrush *)0x0;
LAB_14781ad74:
  pFVar4 = FBrushSceneProxy::FBrushSceneProxy(pFVar4,this,pAVar5);
  return (FPrimitiveSceneProxy *)pFVar4;
}

// GetBodySetup @ 1478350d0

UBodySetup * __thiscall UBrushComponent::GetBodySetup(UBrushComponent *this)

{
  return (this->BrushBodySetup).field0_0x0.DebugPtr;
}

// GetPrivateStaticClass @ 14783c320

UClass * __cdecl UBrushComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBrushComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"BrushComponent",
               &Z_Registration_Info_UClass_UBrushComponent.InnerSingleton,
               StaticRegisterNativesUBrushComponent,0x560,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UBrushComponent>,
               InternalVTableHelperCtorCaller<UBrushComponent>,local_res8,
               UPrimitiveComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBrushComponent.InnerSingleton;
}

// GetStaticDepthPriorityGroup @ 14783de70

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ESceneDepthPriorityGroup __thiscall
UBrushComponent::GetStaticDepthPriorityGroup(UBrushComponent *this)

{
  int iVar1;
  AActor *pAVar2;
  bool bVar3;
  UClass *pUVar4;
  
  pAVar2 = *(AActor **)&this->field_0xa8;
  if (pAVar2 != (AActor *)0x0) {
    pUVar4 = Z_Construct_UClass_ABrush_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(pAVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pAVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar4->_padding_)) {
      if ((*(UObject **)&this->field_0xa8 != (UObject *)0x0) &&
         (bVar3 = UObject::IsSelected(*(UObject **)&this->field_0xa8), bVar3)) {
        return SDPG_Foreground;
      }
      bVar3 = FActorEditorUtils::IsABuilderBrush(pAVar2);
      if (bVar3) {
        return SDPG_Foreground;
      }
    }
  }
  return (ESceneDepthPriorityGroup)(byte)this->field_0x274;
}

// GetUsedMaterials @ 14783e3f0

void __thiscall
UBrushComponent::GetUsedMaterials
          (UBrushComponent *this,TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *param_1,
          bool param_2)

{
  return;
}

// IsEditorOnly @ 1478403e0

bool __thiscall UBrushComponent::IsEditorOnly(UBrushComponent *this)

{
  return (bool)((byte)this->field_0x9b >> 1 & 1);
}

// IsShown @ 147840ad0

bool __thiscall UBrushComponent::IsShown(UBrushComponent *this,FEngineShowFlags *param_1)

{
  int iVar1;
  longlong lVar2;
  UClass *pUVar3;
  
  lVar2 = *(longlong *)&this->field_0xa8;
  if (lVar2 == 0) {
    return false;
  }
  pUVar3 = Z_Construct_UClass_AVolume_NoRegister();
  lVar2 = *(longlong *)(lVar2 + 0x10);
  iVar1 = (int)pUVar3->_padding_;
  if ((iVar1 <= *(int *)(lVar2 + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar3->_padding_)) {
    return param_1->Volumes;
  }
  return param_1->BSP;
}

// PostLoad @ 147854c40

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UBrushComponent::PostLoad(UBrushComponent *this)

{
  undefined1 *puVar1;
  UBodySetup *pUVar2;
  FPackageFileVersion FVar3;
  
  UPrimitiveComponent::PostLoad((UPrimitiveComponent *)this);
  FVar3 = UObjectBaseUtility::GetLinkerUEVersion((UObjectBaseUtility *)this);
  if ((*(int *)FVar3 < 0x145) &&
     (pUVar2 = (this->BrushBodySetup).field0_0x0.DebugPtr, pUVar2 != (UBodySetup *)0x0)) {
    pUVar2->bGenerateMirroredCollision = '\0';
  }
  return;
}

// ShouldCollideWhenPlacing @ 14786f280

bool __thiscall UBrushComponent::ShouldCollideWhenPlacing(UBrushComponent *this)

{
  return true;
}

// StaticRegisterNativesUBrushComponent @ 147875a20

void __cdecl UBrushComponent::StaticRegisterNativesUBrushComponent(void)

{
  return;
}

