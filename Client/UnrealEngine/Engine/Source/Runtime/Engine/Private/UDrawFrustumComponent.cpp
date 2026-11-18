// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// StaticClass @ 14788bc00

UClass * __cdecl UDrawFrustumComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDrawFrustumComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DrawFrustumComponent",
               &Z_Registration_Info_UClass_UDrawFrustumComponent.InnerSingleton,
               StaticRegisterNativesUDrawFrustumComponent,0x570,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UDrawFrustumComponent>,
               InternalVTableHelperCtorCaller<UDrawFrustumComponent>,local_res8,
               UPrimitiveComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDrawFrustumComponent.InnerSingleton;
}

// UDrawFrustumComponent @ 1478a8950

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UDrawFrustumComponent * __thiscall
UDrawFrustumComponent::UDrawFrustumComponent(UDrawFrustumComponent *this,FVTableHelper *param_1)

{
  UPrimitiveComponent::UPrimitiveComponent((UPrimitiveComponent *)this,param_1);
  this->bFrustumEnabled = true;
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  (this->Texture).field0_0x0.DebugPtr = (UTexture *)0x0;
  return this;
}

// UDrawFrustumComponent @ 1478a89d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UDrawFrustumComponent * __thiscall
UDrawFrustumComponent::UDrawFrustumComponent
          (UDrawFrustumComponent *this,FObjectInitializer *param_1)

{
  UPrimitiveComponent::UPrimitiveComponent((UPrimitiveComponent *)this,param_1);
  this->bFrustumEnabled = true;
  *(undefined ***)this = &_vftable__for__UObject__;
  (this->Texture).field0_0x0.DebugPtr = (UTexture *)0x0;
  this->field_0x281 = this->field_0x281 | 0x10;
  this->field_0x1a9 = this->field_0x1a9 | 8;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  this->FrustumAngle = 90.0;
  this->FrustumAspectRatio = 1.333333;
  this->FrustumStartDist = 100.0;
  this->FrustumEndDist = 1000.0;
  (this->FrustumColor).field0_0x0.Bits = 0xffff00ff;
  UPrimitiveComponent::SetCollisionProfileName
            ((UPrimitiveComponent *)this,UCollisionProfile::NoCollision_ProfileName,true);
  if ((this->field_0x27b & 8) != 0) {
    this->field_0x27b = this->field_0x27b & 0xf7;
    if (*(code **)(*(longlong *)this + 0xa10) == UPrimitiveComponent::OnGenerateOverlapEventsChanged
       ) {
      USceneComponent::ClearSkipUpdateOverlaps((USceneComponent *)this);
      return this;
    }
    (**(code **)(*(longlong *)this + 0xa10))();
  }
  return this;
}

// ~UDrawFrustumComponent @ 1478abb40

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UDrawFrustumComponent::~UDrawFrustumComponent(UDrawFrustumComponent *this)

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

// CalcBounds @ 1478b75a0

TBoxSphereBounds<double,double> * __thiscall
UDrawFrustumComponent::CalcBounds
          (UDrawFrustumComponent *this,TBoxSphereBounds<double,double> *__return_storage_ptr__,
          TTransform<double> *param_1)

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined4 uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined4 uVar24;
  
  auVar2 = *(undefined1 (*) [16])(param_1->Rotation).ZW.m128d_f64;
  dVar10 = (param_1->Rotation).ZW.m128d_f64[1];
  dVar4 = (param_1->Scale3D).XY.m128d_f64[0] *
          UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dVar5 = (param_1->Scale3D).XY.m128d_f64[1] *
          UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar20 = (undefined4)((ulonglong)dVar5 >> 0x20);
  auVar12 = *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64;
  auVar21._8_4_ = SUB84(dVar5,0);
  auVar21._0_8_ = dVar4;
  auVar21._12_4_ = uVar20;
  dVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z *
          (param_1->Scale3D).ZW.m128d_f64[0];
  dVar7 = (param_1->Scale3D).ZW.m128d_f64[1] * 0.0;
  dVar1 = auVar2._0_8_;
  auVar15 = blendpd(auVar12,auVar2,2);
  auVar22._0_8_ = auVar21._8_8_ * auVar12._0_8_ - auVar12._8_8_ * dVar4;
  auVar22._8_8_ = dVar6 * auVar12._8_8_ - dVar1 * dVar5;
  auVar11._8_4_ = SUB84(dVar5,0);
  auVar11._0_8_ = dVar4;
  auVar11._12_4_ = uVar20;
  auVar12._8_4_ = SUB84(dVar7,0);
  auVar12._0_8_ = dVar6;
  auVar12._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  auVar12 = blendpd(auVar11,auVar12,2);
  dVar9 = (double)this->FrustumEndDist;
  auVar13._0_8_ = auVar12._0_8_ * dVar1 - auVar15._0_8_ * dVar6;
  auVar13._8_8_ = auVar12._8_8_ * auVar2._8_8_ - auVar15._8_8_ * dVar7;
  auVar12 = *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64;
  auVar15 = blendpd(auVar22,auVar13,2);
  auVar23._0_8_ = auVar15._0_8_ + auVar15._0_8_;
  auVar23._8_8_ = auVar15._8_8_ + auVar15._8_8_;
  dVar7 = auVar22._8_8_ + auVar22._8_8_;
  dVar3 = auVar13._0_8_ + auVar13._0_8_;
  uVar20 = (undefined4)((ulonglong)dVar3 >> 0x20);
  auVar18._8_4_ = SUB84(dVar3,0);
  auVar18._0_8_ = dVar7;
  auVar18._12_4_ = uVar20;
  uVar24 = (undefined4)((ulonglong)dVar9 >> 0x20);
  auVar16._8_4_ = SUB84(dVar3,0);
  auVar16._0_8_ = dVar7;
  auVar16._12_4_ = uVar20;
  auVar15 = blendpd(auVar16,auVar23,2);
  auVar19._0_8_ = auVar18._8_8_ * auVar12._0_8_ - auVar12._8_8_ * dVar7;
  auVar19._8_8_ = auVar23._0_8_ * auVar12._8_8_ - dVar1 * dVar3;
  auVar14._8_4_ = SUB84(auVar19._8_8_,0);
  auVar14._0_8_ = auVar19._0_8_;
  auVar14._12_4_ = (int)((ulonglong)auVar19._8_8_ >> 0x20);
  auVar12 = blendpd(auVar12,auVar2,2);
  auVar17._0_8_ = auVar15._0_8_ * dVar1 - auVar12._0_8_ * auVar23._0_8_;
  auVar17._8_8_ = auVar15._8_8_ * auVar2._8_8_ - auVar12._8_8_ * auVar23._8_8_;
  auVar12 = blendpd(auVar19,auVar17,2);
  dVar1 = (param_1->Translation).ZW.m128d_f64[0];
  dVar3 = dVar3 * dVar10 + dVar5 + auVar17._0_8_ + (param_1->Translation).XY.m128d_f64[1];
  auVar2._8_4_ = SUB84(dVar3,0);
  auVar2._0_8_ = dVar7 * dVar10 + dVar4 + auVar14._8_8_ + (param_1->Translation).XY.m128d_f64[0];
  auVar2._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  *(undefined1 (*) [16])&(__return_storage_ptr__->Origin).field0_0x0 = auVar2;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Z =
       auVar23._0_8_ * dVar10 + dVar6 + auVar12._0_8_ + dVar1;
  auVar15._8_4_ = SUB84(dVar9,0);
  auVar15._0_8_ = dVar9;
  auVar15._12_4_ = uVar24;
  *(undefined1 (*) [16])&(__return_storage_ptr__->BoxExtent).field0_0x0 = auVar15;
  auVar8._8_4_ = SUB84(dVar9,0);
  auVar8._0_8_ = dVar9;
  auVar8._12_4_ = uVar24;
  *(undefined1 (*) [16])((longlong)&(__return_storage_ptr__->BoxExtent).field0_0x0 + 0x10) = auVar8;
  return __return_storage_ptr__;
}

// CreateSceneProxy @ 1478c1ed0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FPrimitiveSceneProxy * __thiscall
UDrawFrustumComponent::CreateSceneProxy(UDrawFrustumComponent *this)

{
  float fVar1;
  FPrimitiveSceneProxy *this_00;
  
  this_00 = ::operator_new(0x2a0);
  if (this_00 != (FPrimitiveSceneProxy *)0x0) {
    FPrimitiveSceneProxy::FPrimitiveSceneProxy(this_00,(UPrimitiveComponent *)this,(FName)0x0);
    this_00->_padding_ = (longlong)&___7FDrawFrustumSceneProxy__6B_;
    *(bool *)&this_00[1]._padding_ = this->bFrustumEnabled;
    *(FColor_u_0 *)((longlong)&this_00[1]._padding_ + 4) = (this->FrustumColor).field0_0x0;
    *(float *)&this_00[1]._padding_ = this->FrustumAngle;
    *(float *)((longlong)&this_00[1]._padding_ + 4) = this->FrustumAspectRatio;
    *(float *)&this_00[1].DebugMassData.AllocatorInstance.Data = this->FrustumStartDist;
    fVar1 = this->FrustumEndDist;
    this_00->bWillEverBeLit = '\0';
    *(float *)((longlong)&this_00[1].DebugMassData.AllocatorInstance.Data + 4) = fVar1;
    return this_00;
  }
  return (FPrimitiveSceneProxy *)0x0;
}

// GetIgnoreBoundsForEditorFocus @ 1478d48a0

bool __thiscall UDrawFrustumComponent::GetIgnoreBoundsForEditorFocus(UDrawFrustumComponent *this)

{
  return true;
}

// GetPrivateStaticClass @ 1478d8f30

UClass * __cdecl UDrawFrustumComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDrawFrustumComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DrawFrustumComponent",
               &Z_Registration_Info_UClass_UDrawFrustumComponent.InnerSingleton,
               StaticRegisterNativesUDrawFrustumComponent,0x570,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UDrawFrustumComponent>,
               InternalVTableHelperCtorCaller<UDrawFrustumComponent>,local_res8,
               UPrimitiveComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDrawFrustumComponent.InnerSingleton;
}

// StaticRegisterNativesUDrawFrustumComponent @ 1478f7df0

void __cdecl UDrawFrustumComponent::StaticRegisterNativesUDrawFrustumComponent(void)

{
  return;
}

