// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 9

// StaticClass @ 14966ddf0

UClass * __cdecl UGizmoLineHandleComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoLineHandleComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoLineHandleComponent",
               &Z_Registration_Info_UClass_UGizmoLineHandleComponent.InnerSingleton,
               StaticRegisterNativesUGizmoLineHandleComponent,0x5c0,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UGizmoLineHandleComponent>,
               InternalVTableHelperCtorCaller<UGizmoLineHandleComponent>,local_res8,
               UGizmoBaseComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoLineHandleComponent.InnerSingleton;
}

// UGizmoLineHandleComponent @ 149685770

UGizmoLineHandleComponent * __thiscall
UGizmoLineHandleComponent::UGizmoLineHandleComponent
          (UGizmoLineHandleComponent *this,FVTableHelper *param_1)

{
  UGizmoBaseComponent::UGizmoBaseComponent((UGizmoBaseComponent *)this,param_1);
  this->HandleSize = 10.0;
  this->Thickness = 2.0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  this->_padding_ = (longlong)&___7UGizmoLineHandleComponent__6B_;
  (this->Normal).field0_0x0._s_0.Z = 1.0;
  (this->Direction).field0_0x0._s_0.Z = 1.0;
  (this->Normal).field0_0x0._s_0.X = 0.0;
  (this->Normal).field0_0x0._s_0.Y = 0.0;
  (this->Direction).field0_0x0._s_0.X = 0.0;
  (this->Direction).field0_0x0._s_0.Y = 0.0;
  this->bImageScale = true;
  return this;
}

// UGizmoLineHandleComponent @ 149685840

UGizmoLineHandleComponent * __thiscall
UGizmoLineHandleComponent::UGizmoLineHandleComponent(UGizmoLineHandleComponent *this)

{
  UGizmoBaseComponent::UGizmoBaseComponent((UGizmoBaseComponent *)this);
  this->HandleSize = 10.0;
  this->Thickness = 2.0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  this->_padding_ = (longlong)&___7UGizmoLineHandleComponent__6B_;
  (this->Normal).field0_0x0._s_0.Z = 1.0;
  (this->Direction).field0_0x0._s_0.Z = 1.0;
  (this->Normal).field0_0x0._s_0.X = 0.0;
  (this->Normal).field0_0x0._s_0.Y = 0.0;
  (this->Direction).field0_0x0._s_0.X = 0.0;
  (this->Direction).field0_0x0._s_0.Y = 0.0;
  this->bImageScale = true;
  return this;
}

// ~UGizmoLineHandleComponent @ 149689e90

void __thiscall
UGizmoLineHandleComponent::~UGizmoLineHandleComponent(UGizmoLineHandleComponent *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  this->_padding_ = (longlong)&___7UGizmoLineHandleComponent__6B_;
  UGizmoBaseComponent::~UGizmoBaseComponent((UGizmoBaseComponent *)this);
  return;
}

// CalcBounds @ 149694a70

TBoxSphereBounds<double,double> * __thiscall
UGizmoLineHandleComponent::CalcBounds
          (UGizmoLineHandleComponent *this,TBoxSphereBounds<double,double> *__return_storage_ptr__,
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
  
  local_48._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_48._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_48._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_30 = (double)SQRT(this->Length * this->Length + this->HandleSize * this->HandleSize);
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

// CreateSceneProxy @ 14969bc80

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
UGizmoLineHandleComponent::CreateSceneProxy(UGizmoLineHandleComponent *this)

{
  longlong lVar1;
  double dVar2;
  FPrimitiveSceneProxy *this_00;
  
  this_00 = ::operator_new(0x2f0);
  if (this_00 == (FPrimitiveSceneProxy *)0x0) {
    this_00 = (FPrimitiveSceneProxy *)0x0;
  }
  else {
    FPrimitiveSceneProxy::FPrimitiveSceneProxy(this_00,(UPrimitiveComponent *)this,(FName)0x0);
    this_00->_padding_ = (longlong)&___7FGizmoLineHandleComponentSceneProxy__6B_;
    lVar1 = this->_padding_;
    this_00[1]._padding_ = this->_padding_;
    this_00[1]._padding_ = lVar1;
    dVar2 = (this->Normal).field0_0x0._s_0.Y;
    this_00[1].DebugMassData.AllocatorInstance.Data =
         (FScriptContainerElement *)(this->Normal).field0_0x0._s_0.X;
    *(double *)&this_00[1].DebugMassData.ArrayNum = dVar2;
    this_00[1].SimpleStreamableAssetManagerIndex.Object = (int *)(this->Normal).field0_0x0._s_0.Z;
    dVar2 = (this->Direction).field0_0x0._s_0.Y;
    this_00[1].SimpleStreamableAssetManagerIndex.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)(this->Direction).field0_0x0._s_0.X;
    *(double *)&this_00[1].WireframeColor.field0_0x0 = dVar2;
    *(double *)((longlong)&this_00[1].WireframeColor.field0_0x0 + 8) =
         (this->Direction).field0_0x0._s_0.Z;
    this_00[1].PrimitiveColor.field0_0x0._s_0.R = this->HandleSize;
    this_00[1].PrimitiveColor.field0_0x0._s_0.G = this->Thickness;
    *(undefined1 *)((longlong)&this_00[1].PrimitiveColor.field0_0x0 + 8) = 0;
    *(bool *)((longlong)&this_00[1].PrimitiveColor.field0_0x0 + 9) = this->bImageScale;
    this_00[1].PrimitiveColor.field0_0x0._s_0.A = *(float *)&this->_padding_;
  }
  this_00[1].CustomPrimitiveData.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)&this->_padding_;
  *(undefined1 **)&this_00[1].CustomPrimitiveData.Data.ArrayNum =
       (undefined1 *)((longlong)&this->_padding_ + 1);
  *(float **)&this_00[1].TranslucencySortPriority = &this->Length;
  *(longlong **)&this_00[1].Mobility = &this->_padding_;
  return this_00;
}

// GetPrivateStaticClass @ 1496a5b70

UClass * __cdecl UGizmoLineHandleComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoLineHandleComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoLineHandleComponent",
               &Z_Registration_Info_UClass_UGizmoLineHandleComponent.InnerSingleton,
               StaticRegisterNativesUGizmoLineHandleComponent,0x5c0,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UGizmoLineHandleComponent>,
               InternalVTableHelperCtorCaller<UGizmoLineHandleComponent>,local_res8,
               UGizmoBaseComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoLineHandleComponent.InnerSingleton;
}

// LineTraceComponent @ 1496b2050

bool __thiscall
UGizmoLineHandleComponent::LineTraceComponent
          (UGizmoLineHandleComponent *this,FHitResult *param_1,TVector<double> *param_2,
          TVector<double> *param_3,FCollisionQueryParams *param_4)

{
  undefined8 uVar7;
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  bool bVar11;
  ISceneViewInterface *pIVar12;
  float fVar13;
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  double dVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  double dVar27;
  undefined1 auVar28 [16];
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
  undefined1 auVar39 [16];
  double dVar44;
  undefined4 uVar45;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  double dVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  double dVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  double dVar58;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  float fVar62;
  UGizmoLineHandleComponent *local_res8;
  TVector<double>_u_0 local_178;
  TVector<double>_u_0 local_158;
  TVector<double>_u_0 local_138;
  TVector<double>_u_0 local_118;
  TVector<double>_u_0 local_f8;
  TVector<double>_u_0 local_d8;
  TVector<double>_u_0 local_b8 [6];
  
  fVar62 = __real_3f800000;
  auVar49._0_8_ = this->_padding_;
  auVar49._8_8_ = this->_padding_;
  dVar14 = (double)this->_padding_ * UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dVar24 = (double)this->_padding_ * UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar45 = (undefined4)((ulonglong)dVar24 >> 0x20);
  local_f8._0_8_ = this->_padding_;
  local_f8._8_8_ = this->_padding_;
  auVar28 = blendpd(local_f8._0_16_,auVar49,2);
  auVar51._8_4_ = SUB84(dVar24,0);
  auVar51._0_8_ = dVar14;
  auVar51._12_4_ = uVar45;
  dVar27 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z * (double)this->_padding_;
  dVar38 = (double)this->_padding_ * 0.0;
  uVar7 = this->_padding_;
  auVar52._0_8_ = auVar51._8_8_ * (double)local_f8._0_8_ - (double)local_f8._8_8_ * dVar14;
  auVar52._8_8_ = dVar27 * (double)local_f8._8_8_ - (double)auVar49._0_8_ * dVar24;
  auVar39._8_4_ = SUB84(auVar52._8_8_,0);
  auVar39._0_8_ = auVar52._0_8_;
  auVar39._12_4_ = (int)((ulonglong)auVar52._8_8_ >> 0x20);
  auVar32._8_4_ = SUB84(dVar24,0);
  auVar32._0_8_ = dVar14;
  auVar32._12_4_ = uVar45;
  auVar53._8_4_ = SUB84(dVar38,0);
  auVar53._0_8_ = dVar27;
  auVar53._12_4_ = (int)((ulonglong)dVar38 >> 0x20);
  auVar15 = blendpd(auVar32,auVar53,2);
  auVar16._0_8_ = auVar15._0_8_ * (double)auVar49._0_8_ - auVar28._0_8_ * dVar27;
  auVar16._8_8_ = auVar15._8_8_ * (double)auVar49._8_8_ - auVar28._8_8_ * dVar38;
  auVar15._0_8_ = this->_padding_;
  auVar15._8_8_ = this->_padding_;
  auVar53 = blendpd(auVar52,auVar16,2);
  dVar38 = auVar39._8_8_ + auVar39._8_8_;
  dVar44 = auVar16._0_8_ + auVar16._0_8_;
  auVar54._0_8_ = auVar53._0_8_ + auVar53._0_8_;
  auVar54._8_8_ = auVar53._8_8_ + auVar53._8_8_;
  auVar47._8_4_ = SUB84(dVar44,0);
  auVar47._0_8_ = dVar38;
  uVar45 = (undefined4)((ulonglong)dVar44 >> 0x20);
  auVar47._12_4_ = uVar45;
  auVar31._8_4_ = SUB84(dVar44,0);
  auVar31._0_8_ = dVar38;
  auVar31._12_4_ = uVar45;
  auVar53 = blendpd(auVar15,auVar49,2);
  auVar32 = blendpd(auVar31,auVar54,2);
  auVar25._8_4_ = (int)uVar7;
  auVar25._0_8_ = uVar7;
  auVar25._12_4_ = (int)((ulonglong)uVar7 >> 0x20);
  auVar48._0_8_ = auVar47._8_8_ * (double)auVar15._0_8_ - (double)auVar15._8_8_ * dVar38;
  auVar48._8_8_ = auVar54._0_8_ * (double)auVar15._8_8_ - (double)auVar49._0_8_ * dVar44;
  auVar28._8_4_ = SUB84(auVar48._8_8_,0);
  auVar28._0_8_ = auVar48._0_8_;
  auVar28._12_4_ = (int)((ulonglong)auVar48._8_8_ >> 0x20);
  auVar33._0_8_ = auVar32._0_8_ * (double)auVar49._0_8_ - auVar53._0_8_ * auVar54._0_8_;
  auVar33._8_8_ = auVar32._8_8_ * (double)auVar49._8_8_ - auVar53._8_8_ * auVar54._8_8_;
  auVar49 = blendpd(auVar48,auVar33,2);
  local_118._s_0.X = (double)uVar7 * dVar38 + dVar14 + auVar28._8_8_ + (double)this->_padding_;
  local_118._s_0.Y = auVar25._8_8_ * dVar44 + dVar24 + auVar33._0_8_ + (double)this->_padding_;
  local_118._s_0.Z =
       (double)uVar7 * auVar54._0_8_ + dVar27 + auVar49._0_8_ + (double)this->_padding_;
  fVar13 = __real_3f800000;
  if ((char)this->_padding_ != '\0') {
    local_138._s_0.Y = (double)((ulonglong)local_138._s_0.Y & 0xffffffffffffff00);
    pIVar12 = (ISceneViewInterface *)(this->_padding_ + 0x28);
    if (this->_padding_ == 0) {
      pIVar12 = (ISceneViewInterface *)0x0;
    }
    fVar13 = UE::GizmoRenderingUtil::CalculateLocalPixelToWorldScale
                       (pIVar12,(TVector<double> *)&local_118._s_0,false,
                        (TOptional<double> *)&local_138._s_0);
  }
  if (this->bImageScale != false) {
    fVar62 = fVar13;
  }
  dVar14 = (double)this->Length;
  if (*(char *)((longlong)&this->_padding_ + 1) == '\0') {
    auVar1._0_8_ = this->_padding_;
    auVar1._8_8_ = this->_padding_;
    auVar2._0_8_ = this->_padding_;
    auVar2._8_8_ = this->_padding_;
    dVar24 = (this->Normal).field0_0x0._s_0.X * (double)this->_padding_;
    dVar27 = (this->Normal).field0_0x0._s_0.Y * (double)this->_padding_;
    uVar45 = (undefined4)((ulonglong)dVar27 >> 0x20);
    dVar38 = (this->Normal).field0_0x0._s_0.Z * (double)this->_padding_;
    dVar44 = (double)this->_padding_ * 0.0;
    dVar50 = (double)this->_padding_;
    auVar55._8_4_ = SUB84(dVar27,0);
    auVar55._0_8_ = dVar24;
    auVar55._12_4_ = uVar45;
    auVar15 = blendpd(auVar2,auVar1,2);
    auVar56._0_8_ = auVar55._8_8_ * (double)auVar2._0_8_ - (double)auVar2._8_8_ * dVar24;
    auVar56._8_8_ = dVar38 * (double)auVar2._8_8_ - (double)auVar1._0_8_ * dVar27;
    auVar17._8_4_ = SUB84(dVar27,0);
    auVar17._0_8_ = dVar24;
    auVar17._12_4_ = uVar45;
    auVar9._8_4_ = SUB84(dVar44,0);
    auVar9._0_8_ = dVar38;
    auVar9._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
    auVar49 = blendpd(auVar17,auVar9,2);
    auVar18._0_8_ = auVar49._0_8_ * (double)auVar1._0_8_ - auVar15._0_8_ * dVar38;
    auVar18._8_8_ = auVar49._8_8_ * (double)auVar1._8_8_ - auVar15._8_8_ * dVar44;
    auVar3._0_8_ = this->_padding_;
    auVar3._8_8_ = this->_padding_;
    auVar49 = blendpd(auVar56,auVar18,2);
    dVar44 = auVar56._8_8_ + auVar56._8_8_;
    dVar10 = auVar18._0_8_ + auVar18._0_8_;
    uVar45 = (undefined4)((ulonglong)dVar10 >> 0x20);
    auVar57._0_8_ = auVar49._0_8_ + auVar49._0_8_;
    auVar57._8_8_ = auVar49._8_8_ + auVar49._8_8_;
    auVar40._8_4_ = SUB84(dVar10,0);
    auVar40._0_8_ = dVar44;
    auVar40._12_4_ = uVar45;
    auVar34._8_4_ = SUB84(dVar10,0);
    auVar34._0_8_ = dVar44;
    auVar34._12_4_ = uVar45;
    auVar15 = blendpd(auVar34,auVar57,2);
    auVar41._0_8_ = auVar40._8_8_ * (double)auVar3._0_8_ - (double)auVar3._8_8_ * dVar44;
    auVar41._8_8_ = auVar57._0_8_ * (double)auVar3._8_8_ - (double)auVar1._0_8_ * dVar10;
    auVar49 = blendpd(auVar3,auVar1,2);
    auVar19._8_4_ = SUB84(auVar41._8_8_,0);
    auVar19._0_8_ = auVar41._0_8_;
    auVar19._12_4_ = (int)((ulonglong)auVar41._8_8_ >> 0x20);
    auVar35._0_8_ = auVar15._0_8_ * (double)auVar1._0_8_ - auVar49._0_8_ * auVar57._0_8_;
    auVar35._8_8_ = auVar15._8_8_ * (double)auVar1._8_8_ - auVar49._8_8_ * auVar57._8_8_;
    auVar49 = blendpd(auVar41,auVar35,2);
    local_158._s_0.Z = auVar57._0_8_ * dVar50 + dVar38 + auVar49._0_8_;
    dVar24 = dVar44 * dVar50 + dVar24 + auVar19._8_8_;
    dVar27 = dVar10 * dVar50 + dVar27 + auVar35._0_8_;
  }
  else {
    local_158._s_0.Z = (this->Normal).field0_0x0._s_0.Z;
    dVar24 = (this->Normal).field0_0x0._s_0.X;
    dVar27 = (this->Normal).field0_0x0._s_0.Y;
  }
  auVar4._0_8_ = this->_padding_;
  auVar4._8_8_ = this->_padding_;
  auVar5._0_8_ = this->_padding_;
  auVar5._8_8_ = this->_padding_;
  dVar38 = dVar14 * (this->Direction).field0_0x0._s_0.Z * (double)this->_padding_;
  dVar44 = (double)this->_padding_ * 0.0;
  dVar10 = (double)this->_padding_;
  auVar15 = blendpd(auVar5,auVar4,2);
  dVar50 = dVar14 * (this->Direction).field0_0x0._s_0.X * (double)this->_padding_;
  dVar58 = dVar14 * (this->Direction).field0_0x0._s_0.Y * (double)this->_padding_;
  auVar59._8_4_ = SUB84(dVar58,0);
  auVar59._0_8_ = dVar50;
  uVar45 = (undefined4)((ulonglong)dVar58 >> 0x20);
  auVar59._12_4_ = uVar45;
  auVar60._0_8_ = auVar59._8_8_ * (double)auVar5._0_8_ - (double)auVar5._8_8_ * dVar50;
  auVar60._8_8_ = dVar38 * (double)auVar5._8_8_ - (double)auVar4._0_8_ * dVar58;
  auVar20._8_4_ = SUB84(dVar58,0);
  auVar20._0_8_ = dVar50;
  auVar20._12_4_ = uVar45;
  auVar8._8_4_ = SUB84(dVar44,0);
  auVar8._0_8_ = dVar38;
  auVar8._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
  auVar49 = blendpd(auVar20,auVar8,2);
  auVar21._0_8_ = auVar49._0_8_ * (double)auVar4._0_8_ - auVar15._0_8_ * dVar38;
  auVar21._8_8_ = auVar49._8_8_ * (double)auVar4._8_8_ - auVar15._8_8_ * dVar44;
  auVar6._0_8_ = this->_padding_;
  auVar6._8_8_ = this->_padding_;
  auVar49 = blendpd(auVar60,auVar21,2);
  dVar14 = auVar60._8_8_ + auVar60._8_8_;
  dVar44 = auVar21._0_8_ + auVar21._0_8_;
  uVar45 = (undefined4)((ulonglong)dVar44 >> 0x20);
  auVar61._0_8_ = auVar49._0_8_ + auVar49._0_8_;
  auVar61._8_8_ = auVar49._8_8_ + auVar49._8_8_;
  auVar42._8_4_ = SUB84(dVar44,0);
  auVar42._0_8_ = dVar14;
  auVar42._12_4_ = uVar45;
  auVar36._8_4_ = SUB84(dVar44,0);
  auVar36._0_8_ = dVar14;
  auVar36._12_4_ = uVar45;
  auVar15 = blendpd(auVar36,auVar61,2);
  auVar43._0_8_ = auVar42._8_8_ * (double)auVar6._0_8_ - (double)auVar6._8_8_ * dVar14;
  auVar43._8_8_ = auVar61._0_8_ * (double)auVar6._8_8_ - (double)auVar4._0_8_ * dVar44;
  auVar22._8_4_ = SUB84(auVar43._8_8_,0);
  auVar22._0_8_ = auVar43._0_8_;
  auVar22._12_4_ = (int)((ulonglong)auVar43._8_8_ >> 0x20);
  auVar49 = blendpd(auVar6,auVar4,2);
  local_b8[0]._16_8_ = (param_3->field0_0x0)._s_0.Z;
  auVar37._0_8_ = auVar15._0_8_ * (double)auVar4._0_8_ - auVar49._0_8_ * auVar61._0_8_;
  auVar37._8_8_ = auVar15._8_8_ * (double)auVar4._8_8_ - auVar49._8_8_ * auVar61._8_8_;
  dVar46 = (double)fVar62;
  auVar49 = blendpd(auVar43,auVar37,2);
  local_b8[0]._0_16_ = *(undefined1 (*) [16])&param_3->field0_0x0;
  local_f8._0_16_ = *(undefined1 (*) [16])&param_2->field0_0x0;
  dVar50 = ((dVar14 * dVar10 + dVar50 + auVar22._8_8_ + (double)this->_padding_) - local_118._s_0.X)
           * dVar46 + local_118._s_0.X;
  dVar14 = ((dVar44 * dVar10 + dVar58 + auVar37._0_8_ + (double)this->_padding_) - local_118._s_0.Y)
           * dVar46 + local_118._s_0.Y;
  dVar38 = ((auVar61._0_8_ * dVar10 + dVar38 + auVar49._0_8_ + (double)this->_padding_) -
           local_118._s_0.Z) * dVar46 + local_118._s_0.Z;
  local_f8._s_0.Z = (param_2->field0_0x0)._s_0.Z;
  local_138._s_0.X = dVar50 - dVar46 * dVar24;
  local_158._s_0.X = dVar46 * dVar24 + dVar50;
  local_138._s_0.Y = dVar14 - dVar46 * dVar27;
  local_158._s_0.Y = dVar46 * dVar27 + dVar14;
  local_138._s_0.Z = dVar38 - dVar46 * local_158._s_0.Z;
  local_158._s_0.Z = dVar46 * local_158._s_0.Z + dVar38;
  FMath::SegmentDistToSegmentSafe<double>
            ((TVector<double> *)&local_158._s_0,(TVector<double> *)&local_138._s_0,
             (TVector<double> *)&local_f8._s_0,(TVector<double> *)&local_b8[0]._s_0,
             (TVector<double> *)&local_d8._s_0,(TVector<double> *)&local_178._s_0);
  auVar26._0_8_ = (local_178._s_0.X - local_d8._s_0.X) * (local_178._s_0.X - local_d8._s_0.X);
  auVar26._8_8_ = 0;
  auVar29._0_8_ =
       (local_178._s_0.Y - local_d8._s_0.Y) * (local_178._s_0.Y - local_d8._s_0.Y) + auVar26._0_8_ +
       (local_178._s_0.Z - local_d8._s_0.Z) * (local_178._s_0.Z - local_d8._s_0.Z);
  auVar29._8_8_ = 0;
  auVar49 = sqrtpd(auVar26,auVar29);
  if (auVar49._0_8_ <= (double)(fVar13 * *(float *)((longlong)&this->_padding_ + 4))) {
    local_res8 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=(&(param_1->Component).WeakPtr,(FObjectPtr)&local_res8);
    bVar11 = true;
    dVar27 = local_178._s_0.Y - (param_2->field0_0x0)._s_0.Y;
    dVar24 = local_178._s_0.X - (param_2->field0_0x0)._s_0.X;
    dVar14 = local_178._s_0.Z - (param_2->field0_0x0)._s_0.Z;
    auVar23._0_8_ = dVar14 * dVar14;
    auVar23._8_8_ = 0;
    auVar30._0_8_ = dVar27 * dVar27 + dVar24 * dVar24 + auVar23._0_8_;
    auVar30._8_8_ = 0;
    auVar49 = sqrtpd(auVar23,auVar30);
    *(double *)&param_1->ImpactPoint = local_178._s_0.X;
    *(double *)&(param_1->ImpactPoint).field_0x8 = local_178._s_0.Y;
    param_1->Distance = (float)auVar49._0_8_;
    *(double *)&(param_1->ImpactPoint).field_0x10 = local_178._s_0.Z;
  }
  else {
    bVar11 = false;
  }
  return bVar11;
}

// StaticRegisterNativesUGizmoLineHandleComponent @ 1496c2a60

void __cdecl UGizmoLineHandleComponent::StaticRegisterNativesUGizmoLineHandleComponent(void)

{
  return;
}

