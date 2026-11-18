// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 30

// StaticClass @ 147993b60

UClass * __cdecl UStereoLayerComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UStereoLayerComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"StereoLayerComponent",
               &Z_Registration_Info_UClass_UStereoLayerComponent.InnerSingleton,
               StaticRegisterNativesUStereoLayerComponent,0x350,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UStereoLayerComponent>,
               InternalVTableHelperCtorCaller<UStereoLayerComponent>,local_res8,
               USceneComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UStereoLayerComponent.InnerSingleton;
}

// UStereoLayerComponent @ 1479a7b30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UStereoLayerComponent * __thiscall
UStereoLayerComponent::UStereoLayerComponent(UStereoLayerComponent *this,FVTableHelper *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  USceneComponent::USceneComponent((USceneComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  (this->Texture).field0_0x0.DebugPtr = (UTexture *)0x0;
  (this->LeftTexture).field0_0x0.DebugPtr = (UTexture *)0x0;
  (this->AdditionalFlags).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AdditionalFlags).ArrayNum = 0;
  (this->AdditionalFlags).ArrayMax = 0;
  (this->Shape).field0_0x0.DebugPtr = (UStereoLayerShape *)0x0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->LastTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->LastTransform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->LastTransform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->LastTransform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->LastTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->LastTransform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->LastTransform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->LastTransform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->LastTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->LastTransform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->LastTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->LastTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  return this;
}

// UStereoLayerComponent @ 1479a7bf0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UStereoLayerComponent * __thiscall
UStereoLayerComponent::UStereoLayerComponent
          (UStereoLayerComponent *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  __m128d _Var2;
  
  USceneComponent::USceneComponent((USceneComponent *)this,param_1);
  this->bLiveTexture = 0;
  this->bNoAlphaChannel = 0;
  this->bSupportsDepth = 0;
  this->bQuadPreserveTextureRatio = 0;
  *(undefined ***)this = &_vftable__for__UObject__;
  (this->Texture).field0_0x0.DebugPtr = (UTexture *)0x0;
  (this->LeftTexture).field0_0x0.DebugPtr = (UTexture *)0x0;
  (this->AdditionalFlags).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AdditionalFlags).ArrayNum = 0;
  (this->AdditionalFlags).ArrayMax = 0;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  (this->QuadSize).field0_0x0._s_0.X = 100.0;
  (this->QuadSize).field0_0x0._s_0.Y = 100.0;
  (this->UVRect).Min.field0_0x0._s_0.X = 0.0;
  (this->UVRect).Min.field0_0x0._s_0.Y = 0.0;
  (this->UVRect).Max.field0_0x0._s_0.X = 1.0;
  (this->UVRect).Max.field0_0x0._s_0.Y = 1.0;
  (this->UVRect).bIsValid = true;
  (this->StereoLayerType).Value = '\x02';
  (this->Shape).field0_0x0.DebugPtr = (UStereoLayerShape *)0x0;
  this->Priority = 0;
  this->LayerId = 0;
  this->bIsDirty = true;
  this->bTextureNeedsUpdate = false;
  *&(this->LastTransform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->LastTransform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->LastTransform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->LastTransform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->LastTransform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  _Var2 = UE::Math::TTransform<double>::Identity.Scale3D.ZW;
  this->field_0x42 = this->field_0x42 | 2;
  *&(this->LastTransform).Scale3D.ZW.m128d_f64 = _Var2.m128d_f64;
  this->bLastVisible = false;
  this->field_0x40 = 0;
  return this;
}

// ~UStereoLayerComponent @ 1479a9aa0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UStereoLayerComponent::~UStereoLayerComponent(UStereoLayerComponent *this)

{
  FScriptContainerElement *pFVar1;
  
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  pFVar1 = (this->AdditionalFlags).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  USceneComponent::~USceneComponent((USceneComponent *)this);
  return;
}

// EndPlay @ 1479bfee0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UStereoLayerComponent::EndPlay(UStereoLayerComponent *this,Type param_1)

{
  USceneComponent::EndPlay((USceneComponent *)this,param_1);
  if ((param_1 - EndPlayInEditor & 0xfffffffd) == 0) {
    FStereoLayerAdditionalFlagsManager::Destroy();
    return;
  }
  return;
}

// GetPrivateStaticClass @ 1479ce270

UClass * __cdecl UStereoLayerComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UStereoLayerComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"StereoLayerComponent",
               &Z_Registration_Info_UClass_UStereoLayerComponent.InnerSingleton,
               StaticRegisterNativesUStereoLayerComponent,0x350,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UStereoLayerComponent>,
               InternalVTableHelperCtorCaller<UStereoLayerComponent>,local_res8,
               USceneComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UStereoLayerComponent.InnerSingleton;
}

// MarkStereoLayerDirty @ 1479db1b0

void __thiscall UStereoLayerComponent::MarkStereoLayerDirty(UStereoLayerComponent *this)

{
  this->bIsDirty = true;
  return;
}

// MarkTextureForUpdate @ 1479db280

void __thiscall UStereoLayerComponent::MarkTextureForUpdate(UStereoLayerComponent *this)

{
  this->bTextureNeedsUpdate = true;
  return;
}

// OnUnregister @ 1479dcb40

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UStereoLayerComponent::OnUnregister(UStereoLayerComponent *this)

{
  IStereoRendering *pIVar1;
  longlong *plVar2;
  
  USceneComponent::OnUnregister((USceneComponent *)this);
  if ((this->LayerId != 0) &&
     (pIVar1 = (GEngine->StereoRenderingDevice).Object, pIVar1 != (IStereoRendering *)0x0)) {
    plVar2 = (longlong *)(**(code **)((longlong)*pIVar1 + 0x88))();
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,this->LayerId);
      this->LayerId = 0;
    }
  }
  return;
}

// PostLoad @ 1479de280

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UStereoLayerComponent::PostLoad(UStereoLayerComponent *this)

{
  UStereoLayerShapeQuad *pUVar1;
  
  UActorComponent::PostLoad((UActorComponent *)this);
  if ((this->Shape).field0_0x0.DebugPtr == (UStereoLayerShape *)0x0) {
    pUVar1 = NewObject<UStereoLayerShapeQuad>
                       ((UObject *)this,(FName)0x0,RF_Public,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 != (UStereoLayerShapeQuad *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    (this->Shape).field0_0x0.DebugPtr = (UStereoLayerShape *)pUVar1;
  }
  return;
}

// SetEquirectProps @ 1479e80e0

void __thiscall
UStereoLayerComponent::SetEquirectProps(UStereoLayerComponent *this,FEquirectProps *param_1)

{
  TObjectPtr<UStereoLayerShape> *this_00;
  int iVar1;
  UStereoLayerShape *pUVar2;
  longlong lVar3;
  bool bVar4;
  UClass *pUVar5;
  UStereoLayerShapeEquirect *this_01;
  TVector2<double>_u_0 local_a8;
  double local_98;
  double dStack_90;
  undefined8 local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  undefined8 uStack_60;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  double local_38;
  double dStack_30;
  double local_28;
  double dStack_20;
  undefined8 local_18;
  
  this_00 = &this->Shape;
  pUVar2 = (this_00->field0_0x0).DebugPtr;
  pUVar5 = UStereoLayerShapeEquirect::StaticClass();
  lVar3 = *(longlong *)&pUVar2->field_0x10;
  iVar1 = (int)pUVar5->_padding_;
  if ((*(int *)(lVar3 + 0x38) < iVar1) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar5->_padding_)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (!bVar4) {
    return;
  }
  if ((this_00->field0_0x0).DebugPtr != (UStereoLayerShape *)0x0) {
    pUVar5 = UStereoLayerShapeEquirect::StaticClass();
    bVar4 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar5);
    if (bVar4) {
      this_01 = (UStereoLayerShapeEquirect *)(this_00->field0_0x0).DebugPtr;
      goto LAB_1479e8151;
    }
  }
  this_01 = (UStereoLayerShapeEquirect *)0x0;
LAB_1479e8151:
  local_a8._s_0.X = (param_1->LeftUVRect).Min.field0_0x0._s_0.X;
  local_a8._s_0.Y = (param_1->LeftUVRect).Min.field0_0x0._s_0.Y;
  local_98 = (param_1->LeftUVRect).Max.field0_0x0._s_0.X;
  dStack_90 = (param_1->LeftUVRect).Max.field0_0x0._s_0.Y;
  local_88 = *(undefined8 *)&(param_1->LeftUVRect).bIsValid;
  dStack_80 = (param_1->RightUVRect).Min.field0_0x0._s_0.X;
  local_78 = (param_1->RightUVRect).Min.field0_0x0._s_0.Y;
  dStack_70 = (param_1->RightUVRect).Max.field0_0x0._s_0.X;
  local_68 = (param_1->RightUVRect).Max.field0_0x0._s_0.Y;
  uStack_60 = *(undefined8 *)&(param_1->RightUVRect).bIsValid;
  local_58 = (param_1->LeftScale).field0_0x0._s_0.X;
  dStack_50 = (param_1->LeftScale).field0_0x0._s_0.Y;
  local_48 = (param_1->RightScale).field0_0x0._s_0.X;
  dStack_40 = (param_1->RightScale).field0_0x0._s_0.Y;
  local_38 = (param_1->LeftBias).field0_0x0._s_0.X;
  dStack_30 = (param_1->LeftBias).field0_0x0._s_0.Y;
  local_28 = (param_1->RightBias).field0_0x0._s_0.X;
  dStack_20 = (param_1->RightBias).field0_0x0._s_0.Y;
  local_18 = *(undefined8 *)&param_1->Radius;
  UStereoLayerShapeEquirect::SetEquirectProps(this_01,(FEquirectProps *)&local_a8._s_0);
  return;
}

// SetLeftTexture @ 1479e8d40

void __thiscall UStereoLayerComponent::SetLeftTexture(UStereoLayerComponent *this,UTexture *param_1)

{
  UTexture *pUVar1;
  bool bVar2;
  
  pUVar1 = (this->LeftTexture).field0_0x0.DebugPtr;
  if (pUVar1 == (UTexture *)0x0) {
    bVar2 = param_1 == (UTexture *)0x0;
  }
  else {
    bVar2 = pUVar1 == param_1;
  }
  if (!bVar2) {
    if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UTexture *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    (this->LeftTexture).field0_0x0.DebugPtr = param_1;
    this->bIsDirty = true;
  }
  return;
}

// SetPriority @ 1479e9f40

void __thiscall UStereoLayerComponent::SetPriority(UStereoLayerComponent *this,int param_1)

{
  if (this->Priority != param_1) {
    this->Priority = param_1;
    this->bIsDirty = true;
  }
  return;
}

// SetQuadSize @ 1479e9f70

void __thiscall
UStereoLayerComponent::SetQuadSize(UStereoLayerComponent *this,TVector2<double> *param_1)

{
  double dVar1;
  double dVar2;
  
  if (((param_1->field0_0x0)._s_0.X != (this->QuadSize).field0_0x0._s_0.X) ||
     ((param_1->field0_0x0)._s_0.Y != (this->QuadSize).field0_0x0._s_0.Y)) {
    dVar1 = (param_1->field0_0x0)._s_0.X;
    dVar2 = (param_1->field0_0x0)._s_0.Y;
    this->bIsDirty = true;
    (this->QuadSize).field0_0x0._s_0.X = dVar1;
    (this->QuadSize).field0_0x0._s_0.Y = dVar2;
  }
  return;
}

// SetTexture @ 1479eca50

void __thiscall UStereoLayerComponent::SetTexture(UStereoLayerComponent *this,UTexture *param_1)

{
  UTexture *pUVar1;
  bool bVar2;
  
  pUVar1 = (this->Texture).field0_0x0.DebugPtr;
  if (pUVar1 == (UTexture *)0x0) {
    bVar2 = param_1 == (UTexture *)0x0;
  }
  else {
    bVar2 = pUVar1 == param_1;
  }
  if (!bVar2) {
    if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UTexture *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    (this->Texture).field0_0x0.DebugPtr = param_1;
    this->bIsDirty = true;
  }
  return;
}

// SetUVRect @ 1479ecc30

void __thiscall UStereoLayerComponent::SetUVRect(UStereoLayerComponent *this,TBox2<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  undefined7 uVar6;
  
  if (((((param_1->Min).field0_0x0._s_0.X != (this->UVRect).Min.field0_0x0._s_0.X) ||
       ((param_1->Min).field0_0x0._s_0.Y != (this->UVRect).Min.field0_0x0._s_0.Y)) ||
      ((param_1->Max).field0_0x0._s_0.X != (this->UVRect).Max.field0_0x0._s_0.X)) ||
     ((param_1->Max).field0_0x0._s_0.Y != (this->UVRect).Max.field0_0x0._s_0.Y)) {
    dVar1 = (param_1->Min).field0_0x0._s_0.X;
    dVar2 = (param_1->Min).field0_0x0._s_0.Y;
    this->bIsDirty = true;
    dVar3 = (param_1->Max).field0_0x0._s_0.X;
    dVar4 = (param_1->Max).field0_0x0._s_0.Y;
    (this->UVRect).Min.field0_0x0._s_0.X = dVar1;
    (this->UVRect).Min.field0_0x0._s_0.Y = dVar2;
    bVar5 = param_1->bIsValid;
    uVar6 = *(undefined7 *)&param_1->field_0x21;
    (this->UVRect).Max.field0_0x0._s_0.X = dVar3;
    (this->UVRect).Max.field0_0x0._s_0.Y = dVar4;
    (this->UVRect).bIsValid = bVar5;
    *(undefined7 *)&(this->UVRect).field_0x21 = uVar6;
  }
  return;
}

// StaticRegisterNativesUStereoLayerComponent @ 1479ee030

void __cdecl UStereoLayerComponent::StaticRegisterNativesUStereoLayerComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0xc;
  local_18.DataPtr = Z_Construct_UClass_UStereoLayerComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// TickComponent @ 1479ee5f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
UStereoLayerComponent::TickComponent
          (UStereoLayerComponent *this,float param_1,ELevelTick param_2,
          FActorComponentTickFunction *param_3)

{
  FName *pFVar1;
  uchar uVar2;
  IStereoRendering *pIVar3;
  UTexture *pUVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  longlong *plVar12;
  TTransform<double> *pTVar13;
  FTextureResource *pFVar14;
  longlong lVar15;
  UStereoLayerShapeQuad *pUVar16;
  FName *pFVar17;
  bool bVar18;
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
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined1 auStackY_2e8 [32];
  undefined1 local_2a8 [4];
  FWeakObjectPtr local_2a4;
  FWeakObjectPtr local_29c;
  undefined8 local_290;
  UTexture *local_288;
  UTexture *local_280;
  TSharedPtr<FStereoLayerAdditionalFlagsManager,1> local_278;
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 local_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  FLayerDesc local_208;
  TTransform<double> local_118;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
  UActorComponent::TickComponent((UActorComponent *)this,param_1,param_2,param_3);
  pIVar3 = (GEngine->StereoRenderingDevice).Object;
  if ((pIVar3 != (IStereoRendering *)0x0) &&
     (plVar12 = (longlong *)(**(code **)((longlong)*pIVar3 + 0x88))(), plVar12 != (longlong *)0x0))
  {
    if ((this->StereoLayerType).Value == '\0') {
      uVar35 = *(undefined4 *)&this->field_0x1f0;
      uVar36 = *(undefined4 *)&this->field_0x1f4;
      uVar37 = *(undefined4 *)&this->field_0x1f8;
      uVar38 = *(undefined4 *)&this->field_0x1fc;
      uVar31 = *(undefined4 *)&this->field_0x200;
      uVar32 = *(undefined4 *)&this->field_0x204;
      uVar33 = *(undefined4 *)&this->field_0x208;
      uVar34 = *(undefined4 *)&this->field_0x20c;
      uVar19 = *(undefined4 *)&this->field_0x210;
      uVar20 = *(undefined4 *)&this->field_0x214;
      uVar21 = *(undefined4 *)&this->field_0x218;
      uVar22 = *(undefined4 *)&this->field_0x21c;
      uVar23 = *(undefined4 *)&this->field_0x220;
      uVar24 = *(undefined4 *)&this->field_0x224;
      uVar25 = *(undefined4 *)&this->field_0x228;
      uVar26 = *(undefined4 *)&this->field_0x22c;
      uVar27 = *(undefined4 *)&this->field_0x230;
      uVar28 = *(undefined4 *)&this->field_0x234;
      uVar29 = *(undefined4 *)&this->field_0x238;
      uVar30 = *(undefined4 *)&this->field_0x23c;
      uVar39 = *(undefined4 *)&this->field_0x240;
      uVar40 = *(undefined4 *)&this->field_0x244;
      uVar41 = *(undefined4 *)&this->field_0x248;
      uVar42 = *(undefined4 *)&this->field_0x24c;
    }
    else {
      pTVar13 = USceneComponent::GetRelativeTransform((USceneComponent *)this,&local_118);
      uVar35 = *(undefined4 *)(pTVar13->Rotation).XY.m128d_f64;
      uVar36 = *(undefined4 *)((longlong)(pTVar13->Rotation).XY.m128d_f64 + 4);
      uVar37 = *(undefined4 *)((pTVar13->Rotation).XY.m128d_f64 + 1);
      uVar38 = *(undefined4 *)((longlong)(pTVar13->Rotation).XY.m128d_f64 + 0xc);
      uVar31 = *(undefined4 *)(pTVar13->Rotation).ZW.m128d_f64;
      uVar32 = *(undefined4 *)((longlong)(pTVar13->Rotation).ZW.m128d_f64 + 4);
      uVar33 = *(undefined4 *)((pTVar13->Rotation).ZW.m128d_f64 + 1);
      uVar34 = *(undefined4 *)((longlong)(pTVar13->Rotation).ZW.m128d_f64 + 0xc);
      uVar19 = *(undefined4 *)(pTVar13->Translation).XY.m128d_f64;
      uVar20 = *(undefined4 *)((longlong)(pTVar13->Translation).XY.m128d_f64 + 4);
      uVar21 = *(undefined4 *)((pTVar13->Translation).XY.m128d_f64 + 1);
      uVar22 = *(undefined4 *)((longlong)(pTVar13->Translation).XY.m128d_f64 + 0xc);
      uVar23 = *(undefined4 *)(pTVar13->Translation).ZW.m128d_f64;
      uVar24 = *(undefined4 *)((longlong)(pTVar13->Translation).ZW.m128d_f64 + 4);
      uVar25 = *(undefined4 *)((pTVar13->Translation).ZW.m128d_f64 + 1);
      uVar26 = *(undefined4 *)((longlong)(pTVar13->Translation).ZW.m128d_f64 + 0xc);
      uVar27 = *(undefined4 *)(pTVar13->Scale3D).XY.m128d_f64;
      uVar28 = *(undefined4 *)((longlong)(pTVar13->Scale3D).XY.m128d_f64 + 4);
      uVar29 = *(undefined4 *)((pTVar13->Scale3D).XY.m128d_f64 + 1);
      uVar30 = *(undefined4 *)((longlong)(pTVar13->Scale3D).XY.m128d_f64 + 0xc);
      uVar39 = *(undefined4 *)(pTVar13->Scale3D).ZW.m128d_f64;
      uVar40 = *(undefined4 *)((longlong)(pTVar13->Scale3D).ZW.m128d_f64 + 4);
      uVar41 = *(undefined4 *)((pTVar13->Scale3D).ZW.m128d_f64 + 1);
      uVar42 = *(undefined4 *)((longlong)(pTVar13->Scale3D).ZW.m128d_f64 + 0xc);
    }
    local_268 = uVar35;
    uStack_264 = uVar36;
    uStack_260 = uVar37;
    uStack_25c = uVar38;
    local_258 = uVar31;
    uStack_254 = uVar32;
    uStack_250 = uVar33;
    uStack_24c = uVar34;
    local_248 = uVar19;
    uStack_244 = uVar20;
    uStack_240 = uVar21;
    uStack_23c = uVar22;
    local_238 = uVar23;
    uStack_234 = uVar24;
    uStack_230 = uVar25;
    uStack_22c = uVar26;
    local_228 = uVar27;
    uStack_224 = uVar28;
    uStack_220 = uVar29;
    uStack_21c = uVar30;
    local_218 = uVar39;
    uStack_214 = uVar40;
    uStack_210 = uVar41;
    uStack_20c = uVar42;
    if ((this->bIsDirty == false) &&
       ((this->bLastVisible != (bool)((byte)this->field_0x1a8 >> 5 & 1) ||
        (iVar10 = memcmp(&this->LastTransform,&local_268,0x60), iVar10 != 0)))) {
      this->bIsDirty = true;
    }
    pUVar4 = (this->Texture).field0_0x0.DebugPtr;
    bVar18 = (bool)((byte)this->field_0x1a8 >> 5 & 1);
    if ((pUVar4 == (UTexture *)0x0) ||
       (pFVar14 = UTexture::GetResource(pUVar4), pFVar14 == (FTextureResource *)0x0)) {
      bVar18 = false;
    }
    if (this->bIsDirty != false) {
      IStereoLayers::FLayerDesc::FLayerDesc(&local_208);
      fVar8 = __real_41f00000;
      local_208.QuadSize.field0_0x0._s_0.X = (this->QuadSize).field0_0x0._s_0.X;
      local_208.QuadSize.field0_0x0._s_0.Y = (this->QuadSize).field0_0x0._s_0.Y;
      local_208.Priority = this->Priority;
      local_208.UVRect.Min.field0_0x0._s_0.X = (this->UVRect).Min.field0_0x0._s_0.X;
      local_208.UVRect.Min.field0_0x0._s_0.Y = (this->UVRect).Min.field0_0x0._s_0.Y;
      local_208.UVRect.Max.field0_0x0._s_0.X = (this->UVRect).Max.field0_0x0._s_0.X;
      local_208.UVRect.Max.field0_0x0._s_0.Y = (this->UVRect).Max.field0_0x0._s_0.Y;
      local_208.UVRect.bIsValid = (this->UVRect).bIsValid;
      local_208.UVRect._33_7_ = *(undefined7 *)&(this->UVRect).field_0x21;
      local_208.Transform.Rotation.XY.m128d_f64[0]._4_4_ = uVar36;
      local_208.Transform.Rotation.XY.m128d_f64[0]._0_4_ = uVar35;
      local_208.Transform.Rotation.XY.m128d_f64[1]._0_4_ = uVar37;
      local_208.Transform.Rotation.XY.m128d_f64[1]._4_4_ = uVar38;
      local_208.Transform.Rotation.ZW.m128d_f64[0]._4_4_ = uVar32;
      local_208.Transform.Rotation.ZW.m128d_f64[0]._0_4_ = uVar31;
      local_208.Transform.Rotation.ZW.m128d_f64[1]._0_4_ = uVar33;
      local_208.Transform.Rotation.ZW.m128d_f64[1]._4_4_ = uVar34;
      if (UE::XRStereoLayerCVars::bUseLegacyFacing == false) {
        dVar6 = (double)CONCAT44(uVar36,uVar35) * ___xmm_00000000000000003ff0000000000000 *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                (double)CONCAT44(uVar34,uVar33) * 0.0 +
                _UNK_150689518 * (double)CONCAT44(uVar38,uVar37) *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                (double)CONCAT44(uVar32,uVar31) * 0.0 *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
        dVar7 = (double)CONCAT44(uVar36,uVar35) * 0.0 *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                _UNK_150689518 * (double)CONCAT44(uVar34,uVar33) +
                (double)CONCAT44(uVar38,uVar37) * 0.0 *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                (double)CONCAT44(uVar32,uVar31) * ___xmm_00000000000000003ff0000000000000 *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
        local_208.Transform.Rotation.XY.m128d_f64[1]._0_4_ = SUB84(dVar6,0);
        local_208.Transform.Rotation.XY.m128d_f64[0] =
             (double)CONCAT44(uVar36,uVar35) * _UNK_150689518 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
             (double)CONCAT44(uVar34,uVar33) * 0.0 +
             ___xmm_00000000000000003ff0000000000000 * (double)CONCAT44(uVar38,uVar37) *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
             (double)CONCAT44(uVar32,uVar31) * 0.0 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
        local_208.Transform.Rotation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar6 >> 0x20);
        local_208.Transform.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar7,0);
        local_208.Transform.Rotation.ZW.m128d_f64[0] =
             (double)CONCAT44(uVar36,uVar35) * 0.0 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
             ___xmm_00000000000000003ff0000000000000 * (double)CONCAT44(uVar34,uVar33) +
             (double)CONCAT44(uVar38,uVar37) * 0.0 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
             (double)CONCAT44(uVar32,uVar31) * _UNK_150689518 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
        local_208.Transform.Rotation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar7 >> 0x20);
      }
      pUVar4 = (this->Texture).field0_0x0.DebugPtr;
      uVar11 = 0;
      local_208.Transform.Translation.XY.m128d_f64[0]._0_4_ = uVar19;
      local_208.Transform.Translation.XY.m128d_f64[0]._4_4_ = uVar20;
      local_208.Transform.Translation.XY.m128d_f64[1]._0_4_ = uVar21;
      local_208.Transform.Translation.XY.m128d_f64[1]._4_4_ = uVar22;
      local_208.Transform.Translation.ZW.m128d_f64[0]._0_4_ = uVar23;
      local_208.Transform.Translation.ZW.m128d_f64[0]._4_4_ = uVar24;
      local_208.Transform.Translation.ZW.m128d_f64[1]._0_4_ = uVar25;
      local_208.Transform.Translation.ZW.m128d_f64[1]._4_4_ = uVar26;
      local_208.Transform.Scale3D.XY.m128d_f64[0]._0_4_ = uVar27;
      local_208.Transform.Scale3D.XY.m128d_f64[0]._4_4_ = uVar28;
      local_208.Transform.Scale3D.XY.m128d_f64[1]._0_4_ = uVar29;
      local_208.Transform.Scale3D.XY.m128d_f64[1]._4_4_ = uVar30;
      local_208.Transform.Scale3D.ZW.m128d_f64[0]._0_4_ = uVar39;
      local_208.Transform.Scale3D.ZW.m128d_f64[0]._4_4_ = uVar40;
      local_208.Transform.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar41;
      local_208.Transform.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar42;
      if (pUVar4 != (UTexture *)0x0) {
        UStreamableRenderAsset::SetForceMipLevelsToBeResident
                  ((UStreamableRenderAsset *)pUVar4,__real_41f00000,0);
        pUVar4 = (this->Texture).field0_0x0.DebugPtr;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          if (pUVar4 != (UTexture *)0x0) {
            UE::GC::MarkAsReachable((UObject *)pUVar4);
          }
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UTexture *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar4);
          }
        }
        local_2a4.ObjectIndex = 0;
        local_2a4.ObjectSerialNumber = 0;
        local_288 = pUVar4;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UTexture *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar4);
        }
        FWeakObjectPtr::operator=(&local_2a4,(FObjectPtr)&local_288);
        local_208.TextureObj.WeakPtr = local_2a4;
        lVar15 = (**(code **)(((this->Texture).field0_0x0.DebugPtr)->_padding_ + 0x340))();
        if (lVar15 == 0x1000) {
          uVar11 = 0x10;
        }
        local_208.Flags = local_208.Flags | uVar11;
      }
      pUVar4 = (this->LeftTexture).field0_0x0.DebugPtr;
      if (pUVar4 != (UTexture *)0x0) {
        UStreamableRenderAsset::SetForceMipLevelsToBeResident
                  ((UStreamableRenderAsset *)pUVar4,fVar8,0);
        pUVar4 = (this->LeftTexture).field0_0x0.DebugPtr;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          if (pUVar4 != (UTexture *)0x0) {
            UE::GC::MarkAsReachable((UObject *)pUVar4);
          }
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UTexture *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar4);
          }
        }
        local_29c.ObjectIndex = 0;
        local_29c.ObjectSerialNumber = 0;
        local_280 = pUVar4;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UTexture *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar4);
        }
        FWeakObjectPtr::operator=(&local_29c,(FObjectPtr)&local_280);
        local_208.LeftTextureObj.WeakPtr = local_29c;
      }
      uVar35 = *(undefined4 *)&this->field_0x250;
      local_208.Flags =
           local_208.Flags |
           this->bQuadPreserveTextureRatio << 2 | (bVar18 ^ 1) << 5 | (uint)uVar35 >> 1 & 2 |
           (uVar35 & 2) << 2 | ZPULL(uVar35,0,1);
      FStereoLayerAdditionalFlagsManager::Get(&local_278);
      pFVar17 = (FName *)(this->AdditionalFlags).AllocatorInstance.Data;
      iVar10 = (this->AdditionalFlags).ArrayNum;
      pFVar1 = pFVar17 + iVar10;
      while( true ) {
        if ((this->AdditionalFlags).ArrayNum != iVar10) {
          local_2a8[0] = 0;
          `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_2a8);
        }
        if (pFVar17 == pFVar1) break;
        if ((local_278.Object == (FStereoLayerAdditionalFlagsManager *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar11 = FStereoLayerAdditionalFlagsManager::GetFlagValue(local_278.Object,*pFVar17);
        local_208.Flags = local_208.Flags | uVar11;
        pFVar17 = pFVar17 + 1;
      }
      uVar2 = (this->StereoLayerType).Value;
      if (uVar2 == '\0') {
        local_208.PositionType = WorldLocked;
      }
      else if (uVar2 == '\x01') {
        local_208.PositionType = TrackerLocked;
      }
      else if (uVar2 == '\x02') {
        local_208.PositionType = FaceLocked;
      }
      pUVar16 = (UStereoLayerShapeQuad *)(this->Shape).field0_0x0.DebugPtr;
      if (pUVar16 == (UStereoLayerShapeQuad *)0x0) {
        local_290 = 0;
        pUVar16 = NewObject<UStereoLayerShapeQuad>
                            ((UObject *)this,(FName)0x0,RF_Public,(UObject *)0x0,false,
                             (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar16 != (UStereoLayerShapeQuad *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar16);
        }
        (this->Shape).field0_0x0.DebugPtr = (UStereoLayerShape *)pUVar16;
      }
      (**(code **)(*(longlong *)pUVar16 + 0x2b0))(pUVar16,&local_208);
      if (this->LayerId == 0) {
        uVar11 = (**(code **)(*plVar12 + 8))(plVar12,&local_208);
        this->LayerId = uVar11;
      }
      else {
        (**(code **)(*plVar12 + 0x48))(plVar12,this->LayerId,&local_208);
      }
      (this->LastTransform).Rotation.XY.m128d_f64[0] = (double)CONCAT44(uStack_264,local_268);
      (this->LastTransform).Rotation.XY.m128d_f64[1] = (double)CONCAT44(uStack_25c,uStack_260);
      this->bLastVisible = bVar18;
      (this->LastTransform).Rotation.ZW.m128d_f64[0] = (double)CONCAT44(uStack_254,local_258);
      (this->LastTransform).Rotation.ZW.m128d_f64[1] = (double)CONCAT44(uStack_24c,uStack_250);
      this->bIsDirty = false;
      (this->LastTransform).Translation.XY.m128d_f64[0] = (double)CONCAT44(uStack_244,local_248);
      (this->LastTransform).Translation.XY.m128d_f64[1] = (double)CONCAT44(uStack_23c,uStack_240);
      (this->LastTransform).Translation.ZW.m128d_f64[0] = (double)CONCAT44(uStack_234,local_238);
      (this->LastTransform).Translation.ZW.m128d_f64[1] = (double)CONCAT44(uStack_22c,uStack_230);
      (this->LastTransform).Scale3D.XY.m128d_f64[0] = (double)CONCAT44(uStack_224,local_228);
      (this->LastTransform).Scale3D.XY.m128d_f64[1] = (double)CONCAT44(uStack_21c,uStack_220);
      (this->LastTransform).Scale3D.ZW.m128d_f64[0] = (double)CONCAT44(uStack_214,local_218);
      (this->LastTransform).Scale3D.ZW.m128d_f64[1] = (double)CONCAT44(uStack_20c,uStack_210);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_278.SharedReferenceCount.ReferenceController);
      if (local_208.Shape.Wrapped.Ptr != (IStereoLayerShape *)0x0) {
        (**(code **)((longlong)*(IStereoLayerShape *)local_208.Shape.Wrapped.Ptr + 0x10))
                  (local_208.Shape.Wrapped.Ptr,1);
      }
      if (local_208.LeftTexture.Reference != (FRHITexture *)0x0) {
        FRHIResource::Release((FRHIResource *)local_208.LeftTexture.Reference);
      }
      if (local_208.Texture.Reference != (FRHITexture *)0x0) {
        FRHIResource::Release((FRHIResource *)local_208.Texture.Reference);
      }
    }
    if ((this->bTextureNeedsUpdate != false) && (this->LayerId != 0)) {
      (**(code **)(*plVar12 + 0x60))(plVar12);
      this->bTextureNeedsUpdate = false;
    }
  }
  return;
}

// execGetLeftTexture @ 1479fc050

void __cdecl
UStereoLayerComponent::execGetLeftTexture(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[0xf].field_0x8;
  return;
}

// execGetPriority @ 1479fd340

void __cdecl UStereoLayerComponent::execGetPriority(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[0x11].field_0x20;
  return;
}

// execGetQuadSize @ 1479fd370

void __cdecl UStereoLayerComponent::execGetQuadSize(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = *(undefined8 *)&param_1[0x10].field_0x8;
  *(undefined8 *)param_3 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)((longlong)param_3 + 8) = uVar1;
  return;
}

// execGetTexture @ 147a00b90

void __cdecl UStereoLayerComponent::execGetTexture(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)(param_1 + 0xf);
  return;
}

// execGetUVRect @ 147a013f0

void __cdecl UStereoLayerComponent::execGetUVRect(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = *(undefined8 *)&param_1[0x10].field_0x18;
  uVar3 = *(undefined8 *)&param_1[0x10].field_0x20;
  uVar4 = *(undefined8 *)(param_1 + 0x11);
  uVar1 = *(undefined8 *)&param_1[0x11].field_0x8;
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[0x10].field_0x10;
  *(undefined8 *)((longlong)param_3 + 8) = uVar2;
  *(undefined8 *)((longlong)param_3 + 0x10) = uVar3;
  *(undefined8 *)((longlong)param_3 + 0x18) = uVar4;
  *(undefined8 *)((longlong)param_3 + 0x20) = uVar1;
  return;
}

// execMarkTextureForUpdate @ 147a03320

void __cdecl
UStereoLayerComponent::execMarkTextureForUpdate(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[0x12].field_0x1 = 1;
  return;
}

// execSetEquirectProps @ 147a04f70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UStereoLayerComponent::execSetEquirectProps(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  bool bVar23;
  UClass *pUVar24;
  UStereoLayerShapeEquirect *this;
  double local_1e8;
  double dStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined1 local_1c8;
  undefined7 uStack_1c7;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined1 uStack_1a0;
  undefined7 uStack_19f;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined4 local_158;
  undefined4 uStack_154;
  TVector2<double>_u_0 local_148;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  
  uStack_1c0 = 0;
  local_1e8 = 0.0;
  dStack_1e0 = 0.0;
  local_1a8 = __real_3ff0000000000000;
  local_1b8 = ___xmm_3ff00000000000000000000000000000;
  uStack_1b0 = _UNK_15061cbc8;
  local_1d8 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_1d0 = _UNK_150689688;
  local_1c8 = 1;
  uStack_1a0 = 1;
  local_198 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_190 = _UNK_150689688;
  local_188 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_180 = _UNK_150689688;
  local_178 = 0;
  uStack_170 = 0;
  local_168 = 0;
  uStack_160 = 0;
  local_158 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1e8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1e8);
  }
  uVar22 = uStack_160;
  uVar21 = local_168;
  uVar20 = uStack_170;
  uVar19 = local_178;
  uVar18 = uStack_180;
  uVar17 = local_188;
  uVar16 = uStack_190;
  uVar15 = local_198;
  uVar14 = local_1a8;
  uVar13 = uStack_1b0;
  uVar12 = local_1b8;
  uVar11 = uStack_1c0;
  uVar10 = uStack_1d0;
  uVar9 = local_1d8;
  dVar8 = dStack_1e0;
  dVar7 = local_1e8;
  this = (UStereoLayerShapeEquirect *)0x0;
  uVar4 = CONCAT71(uStack_1c7,local_1c8);
  uVar5 = CONCAT71(uStack_19f,uStack_1a0);
  uVar6 = CONCAT44(uStack_154,local_158);
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar3 = *(longlong *)&param_1[0x11].field_0x18;
  pUVar24 = UStereoLayerShapeEquirect::StaticClass();
  lVar3 = *(longlong *)(lVar3 + 0x10);
  iVar1 = (int)pUVar24->_padding_;
  if ((*(int *)(lVar3 + 0x38) < iVar1) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar24->_padding_)) {
    bVar23 = false;
  }
  else {
    bVar23 = true;
  }
  if (bVar23) {
    if (*(longlong *)&param_1[0x11].field_0x18 != 0) {
      pUVar24 = UStereoLayerShapeEquirect::StaticClass();
      bVar23 = FObjectPtr::IsA((FObjectPtr *)&param_1[0x11].field_0x18,pUVar24);
      if (bVar23) {
        this = *(UStereoLayerShapeEquirect **)&param_1[0x11].field_0x18;
      }
    }
    local_148._s_0.X = dVar7;
    local_148._s_0.Y = dVar8;
    local_138 = uVar9;
    uStack_130 = uVar10;
    uStack_120 = uVar11;
    local_118 = uVar12;
    uStack_110 = uVar13;
    local_108 = uVar14;
    local_f8 = uVar15;
    uStack_f0 = uVar16;
    local_e8 = uVar17;
    uStack_e0 = uVar18;
    local_d8 = uVar19;
    uStack_d0 = uVar20;
    local_c8 = uVar21;
    uStack_c0 = uVar22;
    local_128 = uVar4;
    uStack_100 = uVar5;
    local_b8 = uVar6;
    UStereoLayerShapeEquirect::SetEquirectProps(this,(FEquirectProps *)&local_148._s_0);
  }
  return;
}

// execSetLeftTexture @ 147a068d0

void __cdecl
UStereoLayerComponent::execSetLeftTexture(UObject *param_1,FFrame *param_2,void *param_3)

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
  if (*(UObject **)&param_1[0xf].field_0x8 == (UObject *)0x0) {
    bVar3 = local_res8 == (UObject *)0x0;
  }
  else {
    bVar3 = *(UObject **)&param_1[0xf].field_0x8 == local_res8;
  }
  if (!bVar3) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res8);
    }
    *(UObject **)&param_1[0xf].field_0x8 = pUVar2;
    *(undefined1 *)(param_1 + 0x12) = 1;
  }
  return;
}

// execSetPriority @ 147a07c60

void __cdecl UStereoLayerComponent::execSetPriority(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
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
  if (*(int *)&param_1[0x11].field_0x20 != local_res8[0]) {
    *(int *)&param_1[0x11].field_0x20 = local_res8[0];
    *(undefined1 *)(param_1 + 0x12) = 1;
  }
  return;
}

// execSetQuadSize @ 147a07d00

void __cdecl UStereoLayerComponent::execSetQuadSize(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  double local_18;
  double dStack_10;
  
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
  if ((local_18 != *(double *)(param_1 + 0x10)) ||
     (dStack_10 != *(double *)&param_1[0x10].field_0x8)) {
    *(undefined1 *)(param_1 + 0x12) = 1;
    *(double *)(param_1 + 0x10) = local_18;
    *(double *)&param_1[0x10].field_0x8 = dStack_10;
  }
  return;
}

// execSetTexture @ 147a0a7b0

void __cdecl UStereoLayerComponent::execSetTexture(UObject *param_1,FFrame *param_2,void *param_3)

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
  if (*(UObject **)(param_1 + 0xf) == (UObject *)0x0) {
    bVar3 = local_res8 == (UObject *)0x0;
  }
  else {
    bVar3 = *(UObject **)(param_1 + 0xf) == local_res8;
  }
  if (!bVar3) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res8);
    }
    *(UObject **)(param_1 + 0xf) = pUVar2;
    *(undefined1 *)(param_1 + 0x12) = 1;
  }
  return;
}

// execSetUVRect @ 147a0ab80

void __cdecl UStereoLayerComponent::execSetUVRect(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  double local_38;
  double dStack_30;
  double local_28;
  double dStack_20;
  undefined8 local_18;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((((local_38 != *(double *)&param_1[0x10].field_0x10) ||
       (dStack_30 != *(double *)&param_1[0x10].field_0x18)) ||
      (local_28 != *(double *)&param_1[0x10].field_0x20)) ||
     (dStack_20 != *(double *)(param_1 + 0x11))) {
    *(undefined1 *)(param_1 + 0x12) = 1;
    *(double *)&param_1[0x10].field_0x10 = local_38;
    *(double *)&param_1[0x10].field_0x18 = dStack_30;
    *(double *)&param_1[0x10].field_0x20 = local_28;
    *(double *)(param_1 + 0x11) = dStack_20;
    *(undefined8 *)&param_1[0x11].field_0x8 = local_18;
  }
  return;
}

