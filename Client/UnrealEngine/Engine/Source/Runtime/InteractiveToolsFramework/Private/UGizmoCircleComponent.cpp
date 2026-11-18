// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 9

// StaticClass @ 14962de90

UClass * __cdecl UGizmoCircleComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoCircleComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoCircleComponent",
               &Z_Registration_Info_UClass_UGizmoCircleComponent.InnerSingleton,
               StaticRegisterNativesUGizmoCircleComponent,0x5b0,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UGizmoCircleComponent>,
               InternalVTableHelperCtorCaller<UGizmoCircleComponent>,local_res8,
               UGizmoBaseComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoCircleComponent.InnerSingleton;
}

// UGizmoCircleComponent @ 14963a920

UGizmoCircleComponent * __thiscall
UGizmoCircleComponent::UGizmoCircleComponent(UGizmoCircleComponent *this,FVTableHelper *param_1)

{
  UGizmoBaseComponent::UGizmoBaseComponent((UGizmoBaseComponent *)this,param_1);
  this->Radius = 100.0;
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  *(undefined ***)&this->field_0x548 = &___7UGizmoCircleComponent__6B_;
  (this->Normal).field0_0x0._s_0.X = 0.0;
  (this->Normal).field0_0x0._s_0.Y = 0.0;
  (this->Normal).field0_0x0._s_0.Z = 1.0;
  this->Thickness = 2.0;
  this->NumSides = 0x40;
  this->bViewAligned = false;
  this->bDrawFullCircle = false;
  this->bOnlyAllowFrontFacingHits = true;
  return this;
}

// UGizmoCircleComponent @ 14963a9f0

UGizmoCircleComponent * __thiscall
UGizmoCircleComponent::UGizmoCircleComponent(UGizmoCircleComponent *this)

{
  UGizmoBaseComponent::UGizmoBaseComponent((UGizmoBaseComponent *)this);
  this->Radius = 100.0;
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  *(undefined ***)&this->field_0x548 = &___7UGizmoCircleComponent__6B_;
  (this->Normal).field0_0x0._s_0.X = 0.0;
  (this->Normal).field0_0x0._s_0.Y = 0.0;
  (this->Normal).field0_0x0._s_0.Z = 1.0;
  this->Thickness = 2.0;
  this->NumSides = 0x40;
  this->bViewAligned = false;
  this->bDrawFullCircle = false;
  this->bOnlyAllowFrontFacingHits = true;
  return this;
}

// ~UGizmoCircleComponent @ 14963e920

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UGizmoCircleComponent::~UGizmoCircleComponent(UGizmoCircleComponent *this)

{
  *(undefined ***)this = &UGizmoBaseComponent::_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 =
       &UGizmoBaseComponent::_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 =
       &UGizmoBaseComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &UGizmoBaseComponent::_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 =
       &UGizmoBaseComponent::_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &UGizmoBaseComponent::_vftable__for__IPhysicsComponent__;
  *(undefined ***)&this->field_0x548 = &___7IGizmoBaseComponentInterface__6B_;
  UPrimitiveComponent::~UPrimitiveComponent((UPrimitiveComponent *)this);
  return;
}

// CalcBounds @ 14964bec0

TBoxSphereBounds<double,double> * __thiscall
UGizmoCircleComponent::CalcBounds
          (UGizmoCircleComponent *this,TBoxSphereBounds<double,double> *__return_storage_ptr__,
          TTransform<double> *param_1)

{
  double dVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  double dVar4;
  TSphere<double> *pTVar5;
  TVector<double>_u_0 local_48;
  double local_30;
  TSphere<double> local_28;
  
  local_30 = (double)this->Radius;
  local_48._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_48._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_48._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  pTVar5 = UE::Math::TSphere<double>::TransformBy
                     ((TSphere<double> *)&local_48._s_0,&local_28,param_1);
  dVar4 = (pTVar5->Center).field0_0x0._s_0.Y;
  dVar1 = (pTVar5->Center).field0_0x0._s_0.Z;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.X = (pTVar5->Center).field0_0x0._s_0.X;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = dVar4;
  uVar2 = *(undefined4 *)&pTVar5->W;
  uVar3 = *(undefined4 *)((longlong)&pTVar5->W + 4);
  *(undefined4 *)&__return_storage_ptr__->SphereRadius = uVar2;
  *(undefined4 *)((longlong)&__return_storage_ptr__->SphereRadius + 4) = uVar3;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = dVar1;
  *(undefined4 *)&(__return_storage_ptr__->BoxExtent).field0_0x0 = uVar2;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->BoxExtent).field0_0x0 + 4) = uVar3;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->BoxExtent).field0_0x0 + 8) = uVar2;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->BoxExtent).field0_0x0 + 0xc) = uVar3;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->BoxExtent).field0_0x0 + 0x10) = uVar2;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->BoxExtent).field0_0x0 + 0x14) = uVar3;
  return __return_storage_ptr__;
}

// CreateSceneProxy @ 149650330

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
UGizmoCircleComponent::CreateSceneProxy(UGizmoCircleComponent *this)

{
  longlong lVar1;
  double dVar2;
  FPrimitiveSceneProxy *this_00;
  
  this_00 = ::operator_new(0x2e0);
  if (this_00 == (FPrimitiveSceneProxy *)0x0) {
    this_00 = (FPrimitiveSceneProxy *)0x0;
  }
  else {
    FPrimitiveSceneProxy::FPrimitiveSceneProxy(this_00,(UPrimitiveComponent *)this,(FName)0x0);
    this_00->_padding_ = (longlong)&___7FGizmoCircleComponentSceneProxy__6B_;
    lVar1 = *(longlong *)&this->field_0x558;
    this_00[1]._padding_ = *(longlong *)&this->field_0x550;
    this_00[1]._padding_ = lVar1;
    dVar2 = (this->Normal).field0_0x0._s_0.Y;
    this_00[1].DebugMassData.AllocatorInstance.Data =
         (FScriptContainerElement *)(this->Normal).field0_0x0._s_0.X;
    *(double *)&this_00[1].DebugMassData.ArrayNum = dVar2;
    this_00[1].SimpleStreamableAssetManagerIndex.Object = (int *)(this->Normal).field0_0x0._s_0.Z;
    *(float *)&this_00[1].SimpleStreamableAssetManagerIndex.SharedReferenceCount.ReferenceController
         = this->Radius;
    *(float *)((longlong)
               &this_00[1].SimpleStreamableAssetManagerIndex.SharedReferenceCount.
                ReferenceController + 4) = this->Thickness;
    this_00[1].WireframeColor.field0_0x0._s_0.R = (float)this->NumSides;
    *(bool *)((longlong)&this_00[1].WireframeColor.field0_0x0 + 4) = this->bViewAligned;
    *(bool *)((longlong)&this_00[1].WireframeColor.field0_0x0 + 5) = this->bDrawFullCircle;
    this_00[1].WireframeColor.field0_0x0._s_0.B = *(float *)&this->field_0x560;
  }
  *(undefined1 **)&this_00[1].PrimitiveColor.field0_0x0 = &this->field_0x568;
  *(undefined1 **)((longlong)&this_00[1].PrimitiveColor.field0_0x0 + 8) = &this->field_0x569;
  this_00[1].CustomPrimitiveData.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)&this->field_0x578;
  return this_00;
}

// GetPrivateStaticClass @ 149656480

UClass * __cdecl UGizmoCircleComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoCircleComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoCircleComponent",
               &Z_Registration_Info_UClass_UGizmoCircleComponent.InnerSingleton,
               StaticRegisterNativesUGizmoCircleComponent,0x5b0,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UGizmoCircleComponent>,
               InternalVTableHelperCtorCaller<UGizmoCircleComponent>,local_res8,
               UGizmoBaseComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoCircleComponent.InnerSingleton;
}

// LineTraceComponent @ 14965c530

bool __thiscall
UGizmoCircleComponent::LineTraceComponent
          (UGizmoCircleComponent *this,FHitResult *param_1,TVector<double> *param_2,
          TVector<double> *param_3,FCollisionQueryParams *param_4)

{
  undefined1 auVar1 [16];
  double dVar2;
  undefined1 auVar3 [12];
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double dVar7;
  char cVar8;
  TVector<double>_u_0 *pTVar9;
  longlong lVar10;
  ISceneViewInterface *pIVar11;
  bool bVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  double dVar20;
  double dVar21;
  double dVar25;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  double dVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined4 uVar36;
  double dVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  double dVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  double dVar47;
  undefined1 auVar46 [16];
  float fVar48;
  UGizmoCircleComponent *local_res8;
  bool local_178 [8];
  TVector<double>_u_0 local_170;
  TVector<double>_u_0 local_158;
  TVector<double>_u_0 local_140;
  TVector<double>_u_0 local_128;
  TVector<double>_u_0 local_110;
  TVector<double>_u_0 local_f8;
  undefined1 local_d8 [16];
  double local_c8;
  TVector<double>_u_0 local_b8;
  TVector<double>_u_0 local_a0 [5];
  
  auVar23 = *(undefined1 (*) [16])&this->field_0x200;
  dVar7 = *(double *)&this->field_0x208;
  dVar37 = *(double *)&this->field_0x230 * UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dVar47 = *(double *)&this->field_0x238 * UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar36 = (undefined4)((ulonglong)dVar47 >> 0x20);
  local_d8 = *(undefined1 (*) [16])&this->field_0x1f0;
  auVar42._8_4_ = SUB84(dVar47,0);
  auVar42._0_8_ = dVar37;
  auVar42._12_4_ = uVar36;
  dVar41 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z * *(double *)&this->field_0x240;
  dVar2 = *(double *)&this->field_0x248 * 0.0;
  auVar27 = blendpd(local_d8,auVar23,2);
  dVar20 = auVar23._0_8_;
  dVar25 = auVar23._8_8_;
  auVar43._0_8_ = auVar42._8_8_ * local_d8._0_8_ - local_d8._8_8_ * dVar37;
  auVar43._8_8_ = dVar41 * local_d8._8_8_ - dVar20 * dVar47;
  auVar44._8_4_ = SUB84(dVar47,0);
  auVar44._0_8_ = dVar37;
  auVar44._12_4_ = uVar36;
  auVar14._8_4_ = SUB84(dVar2,0);
  auVar14._0_8_ = dVar41;
  auVar14._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  auVar14 = blendpd(auVar44,auVar14,2);
  auVar15._0_8_ = auVar14._0_8_ * dVar20 - auVar27._0_8_ * dVar41;
  auVar15._8_8_ = auVar14._8_8_ * dVar25 - auVar27._8_8_ * dVar2;
  auVar14 = *(undefined1 (*) [16])&this->field_0x1f0;
  auVar44 = blendpd(auVar43,auVar15,2);
  dVar26 = auVar43._8_8_ + auVar43._8_8_;
  dVar21 = auVar15._0_8_ + auVar15._0_8_;
  uVar36 = (undefined4)((ulonglong)dVar21 >> 0x20);
  auVar45._0_8_ = auVar44._0_8_ + auVar44._0_8_;
  auVar45._8_8_ = auVar44._8_8_ + auVar44._8_8_;
  auVar32._8_4_ = SUB84(dVar21,0);
  auVar32._0_8_ = dVar26;
  auVar32._12_4_ = uVar36;
  auVar28._8_4_ = SUB84(dVar21,0);
  auVar28._0_8_ = dVar26;
  auVar28._12_4_ = uVar36;
  auVar44 = blendpd(auVar28,auVar45,2);
  auVar33._0_8_ = auVar32._8_8_ * auVar14._0_8_ - auVar14._8_8_ * dVar26;
  auVar33._8_8_ = auVar45._0_8_ * auVar14._8_8_ - dVar20 * dVar21;
  auVar27._8_4_ = SUB84(auVar33._8_8_,0);
  auVar27._0_8_ = auVar33._0_8_;
  auVar27._12_4_ = (int)((ulonglong)auVar33._8_8_ >> 0x20);
  auVar14 = blendpd(auVar14,auVar23,2);
  auVar29._0_8_ = auVar44._0_8_ * dVar20 - auVar14._0_8_ * auVar45._0_8_;
  auVar29._8_8_ = auVar44._8_8_ * dVar25 - auVar14._8_8_ * auVar45._8_8_;
  auVar14 = blendpd(auVar33,auVar29,2);
  dVar21 = dVar21 * dVar7 + dVar47 + auVar29._0_8_ + *(double *)&this->field_0x218;
  local_110._s_0.Z = auVar45._0_8_ * dVar7 + dVar41 + auVar14._0_8_ + *(double *)&this->field_0x220;
  dVar47 = auVar45._8_8_ * dVar7 + dVar2 + auVar14._8_8_ + *(double *)&this->field_0x228;
  local_110._8_4_ = SUB84(dVar21,0);
  local_110._s_0.X = dVar26 * dVar7 + dVar37 + auVar27._8_8_ + *(double *)&this->field_0x210;
  local_110._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
  if (this->field_0x569 == '\0') {
    dVar26 = (this->Normal).field0_0x0._s_0.Z * *(double *)&this->field_0x240;
    dVar21 = *(double *)&this->field_0x248 * 0.0;
    dVar41 = *(double *)&this->field_0x230 * (this->Normal).field0_0x0._s_0.X;
    dVar47 = *(double *)&this->field_0x238 * (this->Normal).field0_0x0._s_0.Y;
    local_d8 = *(undefined1 (*) [16])&this->field_0x1f0;
    auVar44 = blendpd(local_d8,auVar23,2);
    auVar38._8_4_ = SUB84(dVar47,0);
    auVar38._0_8_ = dVar41;
    uVar36 = (undefined4)((ulonglong)dVar47 >> 0x20);
    auVar38._12_4_ = uVar36;
    auVar39._0_8_ = auVar38._8_8_ * local_d8._0_8_ - local_d8._8_8_ * dVar41;
    auVar39._8_8_ = dVar26 * local_d8._8_8_ - dVar20 * dVar47;
    auVar16._8_4_ = SUB84(dVar47,0);
    auVar16._0_8_ = dVar41;
    auVar16._12_4_ = uVar36;
    auVar1._8_4_ = SUB84(dVar21,0);
    auVar1._0_8_ = dVar26;
    auVar1._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
    auVar14 = blendpd(auVar16,auVar1,2);
    auVar17._0_8_ = auVar14._0_8_ * dVar20 - auVar44._0_8_ * dVar26;
    auVar17._8_8_ = auVar14._8_8_ * dVar25 - auVar44._8_8_ * dVar21;
    auVar14 = *(undefined1 (*) [16])&this->field_0x1f0;
    auVar44 = blendpd(auVar39,auVar17,2);
    dVar21 = auVar39._8_8_ + auVar39._8_8_;
    dVar37 = auVar17._0_8_ + auVar17._0_8_;
    uVar36 = (undefined4)((ulonglong)dVar37 >> 0x20);
    auVar40._0_8_ = auVar44._0_8_ + auVar44._0_8_;
    auVar40._8_8_ = auVar44._8_8_ + auVar44._8_8_;
    auVar34._8_4_ = SUB84(dVar37,0);
    auVar34._0_8_ = dVar21;
    auVar34._12_4_ = uVar36;
    auVar30._8_4_ = SUB84(dVar37,0);
    auVar30._0_8_ = dVar21;
    auVar30._12_4_ = uVar36;
    auVar44 = blendpd(auVar30,auVar40,2);
    auVar35._0_8_ = auVar34._8_8_ * auVar14._0_8_ - auVar14._8_8_ * dVar21;
    auVar35._8_8_ = auVar40._0_8_ * auVar14._8_8_ - dVar20 * dVar37;
    auVar14 = blendpd(auVar14,auVar23,2);
    auVar23._8_4_ = SUB84(auVar35._8_8_,0);
    auVar23._0_8_ = auVar35._0_8_;
    auVar23._12_4_ = (int)((ulonglong)auVar35._8_8_ >> 0x20);
    auVar31._0_8_ = auVar44._0_8_ * dVar20 - auVar14._0_8_ * auVar40._0_8_;
    auVar31._8_8_ = auVar44._8_8_ * dVar25 - auVar14._8_8_ * auVar40._8_8_;
    auVar14 = blendpd(auVar35,auVar31,2);
    local_f8._s_0.Z = auVar40._0_8_ * dVar25 + dVar26 + auVar14._0_8_;
    dVar26 = dVar21 * dVar25 + dVar41 + auVar23._8_8_;
    dVar21 = dVar37 * dVar25 + dVar47 + auVar31._0_8_;
  }
  else {
    dVar26 = (this->Normal).field0_0x0._s_0.X;
    dVar21 = *(double *)((longlong)&(this->Normal).field0_0x0 + 8);
    local_f8._s_0.Z = (this->Normal).field0_0x0._s_0.Z;
  }
  bVar12 = false;
  local_f8._8_4_ = SUB84(dVar21,0);
  local_f8._s_0.X = dVar26;
  local_f8._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
  fVar13 = __real_3f800000;
  if (this->field_0x578 != '\0') {
    cVar8 = (**(code **)(*(longlong *)(*(longlong *)&this->field_0x570 + 0x28) + 0x40))();
    lVar10 = *(longlong *)&this->field_0x570;
    if (cVar8 == '\0') {
      pTVar9 = (TVector<double>_u_0 *)
               (**(code **)(*(longlong *)(lVar10 + 0x28) + 0x18))(lVar10 + 0x28,local_d8);
      lVar10 = *(longlong *)&this->field_0x570;
    }
    else {
      pTVar9 = &local_170;
      local_170._s_0.X = local_110._s_0.X - *(double *)(lVar10 + 0x2c0);
      local_170._s_0.Y = local_110._s_0.Y - *(double *)(lVar10 + 0x2c8);
      local_170._s_0.Z = local_110._s_0.Z - *(double *)(lVar10 + 0x2d0);
    }
    auVar23 = *(undefined1 (*) [16])pTVar9;
    dVar37 = auVar23._0_8_;
    local_c8 = *(double *)*(undefined1 (*) [16])((longlong)pTVar9 + 0x10);
    auVar3._4_8_ = dVar47;
    auVar3._0_4_ = auVar23._4_4_;
    auVar46._0_8_ = auVar3._0_8_ << 0x20;
    auVar46._8_4_ = auVar23._8_4_;
    auVar46._12_4_ = auVar23._12_4_;
    dVar47 = auVar46._8_8_;
    dVar21 = dVar47 * dVar47 + dVar37 * dVar37 + local_c8 * local_c8;
    dVar26 = local_c8;
    if (__real_3e45798ee0000000 < dVar21) {
      local_res8 = (UGizmoCircleComponent *)(__real_3ff0000000000000 / SQRT(dVar21));
      dVar37 = dVar37 * (double)local_res8;
      dVar47 = dVar47 * (double)local_res8;
      dVar26 = local_c8 * (double)local_res8;
    }
    (**(code **)(*(longlong *)(lVar10 + 0x28) + 0x18))(lVar10 + 0x28);
    dVar21 = local_170._s_0.Y * local_f8._s_0.Y + local_170._s_0.X * local_f8._s_0.X +
             local_170._s_0.Z * local_f8._s_0.Z;
    dVar26 = local_f8._s_0.Y * dVar47 + local_f8._s_0.X * dVar37 + local_f8._s_0.Z * dVar26;
    bVar12 = __real_3fee666666666666 <=
             (double)CONCAT44((uint)((ulonglong)dVar21 >> 0x20) &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              SUB84(dVar21,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    if ((double)CONCAT44((uint)((ulonglong)dVar26 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar26,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <
        __real_3fa999999999999a) {
      return false;
    }
    local_170._s_0.Y = (double)((ulonglong)local_170._s_0.Y & 0xffffffffffffff00);
    pIVar11 = (ISceneViewInterface *)(*(longlong *)&this->field_0x570 + 0x28);
    if (*(longlong *)&this->field_0x570 == 0) {
      pIVar11 = (ISceneViewInterface *)0x0;
    }
    fVar13 = UE::GizmoRenderingUtil::CalculateLocalPixelToWorldScale
                       (pIVar11,(TVector<double> *)&local_110._s_0,false,
                        (TOptional<double> *)&local_170._s_0);
  }
  local_158._s_0.X = (param_2->field0_0x0)._s_0.X;
  local_158._s_0.Y = (param_2->field0_0x0)._s_0.Y;
  local_158._s_0.Z = (param_2->field0_0x0)._s_0.Z;
  dVar26 = (param_3->field0_0x0)._s_0.X;
  dVar21 = (param_3->field0_0x0)._s_0.Y;
  dVar37 = (param_3->field0_0x0)._s_0.Z;
  fVar48 = fVar13 * this->Radius;
  local_140._s_0.X = dVar26 - (param_2->field0_0x0)._s_0.X;
  local_140._s_0.Y = dVar21 - (param_2->field0_0x0)._s_0.Y;
  local_140._s_0.Z = dVar37 - (param_2->field0_0x0)._s_0.Z;
  UE::Math::TVector<double>::Normalize((TVector<double> *)&local_140._s_0,__real_3e45798ee0000000);
  GizmoMath::RayPlaneIntersectionPoint
            ((TVector<double> *)&local_110._s_0,(TVector<double> *)&local_f8._s_0,
             (TVector<double> *)&local_158._s_0,(TVector<double> *)&local_140._s_0,local_178,
             (TVector<double> *)&local_b8._s_0);
  if ((local_178[0] != false) &&
     ((local_b8._s_0.Y - local_158._s_0.Y) * local_140._s_0.Y +
      (local_b8._s_0.X - local_158._s_0.X) * local_140._s_0.X +
      (local_b8._s_0.Z - local_158._s_0.Z) * local_140._s_0.Z <=
      (dVar21 - local_158._s_0.Y) * local_140._s_0.Y +
      (dVar26 - local_158._s_0.X) * local_140._s_0.X +
      (dVar37 - local_158._s_0.Z) * local_140._s_0.Z)) {
    GizmoMath::ClosetPointOnCircle
              ((TVector<double> *)&local_b8._s_0,(TVector<double> *)&local_110._s_0,
               (TVector<double> *)&local_f8._s_0,fVar48,(TVector<double> *)&local_128._s_0);
    dVar26 = (local_128._s_0.Y - local_158._s_0.Y) * local_140._s_0.Y +
             (local_128._s_0.X - local_158._s_0.X) * local_140._s_0.X +
             (local_128._s_0.Z - local_158._s_0.Z) * local_140._s_0.Z;
    uVar4 = local_158._s_0.X;
    uVar5 = local_158._s_0.Y;
    uVar6 = local_158._s_0.Z;
    if (0.0 <= dVar26) {
      uVar4 = local_158._s_0.X + dVar26 * local_140._s_0.X;
      uVar5 = local_158._s_0.Y + dVar26 * local_140._s_0.Y;
      uVar6 = dVar26 * local_140._s_0.Z + local_158._s_0.Z;
    }
    auVar22._0_8_ = ((double)uVar4 - local_128._s_0.X) * ((double)uVar4 - local_128._s_0.X);
    auVar22._8_8_ = 0;
    auVar18._0_8_ =
         ((double)uVar5 - local_128._s_0.Y) * ((double)uVar5 - local_128._s_0.Y) + auVar22._0_8_ +
         ((double)uVar6 - local_128._s_0.Z) * ((double)uVar6 - local_128._s_0.Z);
    auVar18._8_8_ = 0;
    auVar23 = sqrtpd(auVar22,auVar18);
    if (auVar23._0_8_ <= (double)(fVar13 * *(float *)&this->field_0x564)) {
      local_c8 = (double)uVar6;
      if ((this->bOnlyAllowFrontFacingHits != false) && (!bVar12)) {
        local_res8 = (UGizmoCircleComponent *)((ulonglong)local_res8 & 0xffffffffffffff00);
        local_170._s_0.X = local_128._s_0.X - local_158._s_0.X;
        local_170._s_0.Y = local_128._s_0.Y - local_158._s_0.Y;
        local_170._s_0.Z = local_128._s_0.Z - local_158._s_0.Z;
        UE::Math::TVector<double>::Normalize
                  ((TVector<double> *)&local_170._s_0,__real_3e45798ee0000000);
        GizmoMath::RaySphereIntersection
                  ((TVector<double> *)&local_110._s_0,fVar48,(TVector<double> *)&local_158._s_0,
                   (TVector<double> *)&local_170._s_0,(bool *)&local_res8,
                   (TVector<double> *)&local_a0[0]._s_0);
        if (((char)local_res8 != '\0') &&
           ((double)(fVar48 * __real_3dcccccd) <
            (local_128._s_0.Y - (double)local_a0[0]._8_8_) *
            (local_128._s_0.Y - (double)local_a0[0]._8_8_) +
            (local_128._s_0.X - (double)local_a0[0]._0_8_) *
            (local_128._s_0.X - (double)local_a0[0]._0_8_) +
            (local_128._s_0.Z - (double)local_a0[0]._16_8_) *
            (local_128._s_0.Z - (double)local_a0[0]._16_8_))) {
          return false;
        }
      }
      local_res8 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=(&(param_1->Component).WeakPtr,(FObjectPtr)&local_res8);
      dVar37 = (double)uVar6 - (param_2->field0_0x0)._s_0.Z;
      dVar26 = (double)uVar4 - (param_2->field0_0x0)._s_0.X;
      dVar21 = (double)uVar5 - (param_2->field0_0x0)._s_0.Y;
      auVar19._0_8_ = dVar26 * dVar26;
      auVar19._8_8_ = 0;
      auVar24._0_8_ = dVar21 * dVar21 + auVar19._0_8_ + dVar37 * dVar37;
      auVar24._8_8_ = 0;
      auVar23 = sqrtpd(auVar19,auVar24);
      *(undefined8 *)&param_1->ImpactPoint = uVar4;
      *(undefined8 *)&(param_1->ImpactPoint).field_0x8 = uVar5;
      param_1->Distance = (float)auVar23._0_8_;
      *(double *)&(param_1->ImpactPoint).field_0x10 = local_c8;
      return true;
    }
  }
  return false;
}

// StaticRegisterNativesUGizmoCircleComponent @ 149664af0

void __cdecl UGizmoCircleComponent::StaticRegisterNativesUGizmoCircleComponent(void)

{
  return;
}

