// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 9

// StaticClass @ 14962dc90

UClass * __cdecl UGizmoArrowComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoArrowComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoArrowComponent",
               &Z_Registration_Info_UClass_UGizmoArrowComponent.InnerSingleton,
               StaticRegisterNativesUGizmoArrowComponent,0x5b0,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UGizmoArrowComponent>,
               InternalVTableHelperCtorCaller<UGizmoArrowComponent>,local_res8,
               UGizmoBaseComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoArrowComponent.InnerSingleton;
}

// UGizmoArrowComponent @ 14963a350

UGizmoArrowComponent * __thiscall
UGizmoArrowComponent::UGizmoArrowComponent(UGizmoArrowComponent *this,FVTableHelper *param_1)

{
  UGizmoBaseComponent::UGizmoBaseComponent((UGizmoBaseComponent *)this,param_1);
  this->Gap = 5.0;
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  *(undefined ***)&this->field_0x548 = &___7UGizmoArrowComponent__6B_;
  (this->Direction).field0_0x0._s_0.X = 0.0;
  (this->Direction).field0_0x0._s_0.Y = 0.0;
  (this->Direction).field0_0x0._s_0.Z = 1.0;
  this->Length = 60.0;
  this->Thickness = 2.0;
  return this;
}

// UGizmoArrowComponent @ 14963a410

UGizmoArrowComponent * __thiscall
UGizmoArrowComponent::UGizmoArrowComponent(UGizmoArrowComponent *this)

{
  UGizmoBaseComponent::UGizmoBaseComponent((UGizmoBaseComponent *)this);
  this->Gap = 5.0;
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  *(undefined ***)&this->field_0x548 = &___7UGizmoArrowComponent__6B_;
  (this->Direction).field0_0x0._s_0.X = 0.0;
  (this->Direction).field0_0x0._s_0.Y = 0.0;
  (this->Direction).field0_0x0._s_0.Z = 1.0;
  this->Length = 60.0;
  this->Thickness = 2.0;
  return this;
}

// ~UGizmoArrowComponent @ 14963e750

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UGizmoArrowComponent::~UGizmoArrowComponent(UGizmoArrowComponent *this)

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

// CalcBounds @ 14964bd90

TBoxSphereBounds<double,double> * __thiscall
UGizmoArrowComponent::CalcBounds
          (UGizmoArrowComponent *this,TBoxSphereBounds<double,double> *__return_storage_ptr__,
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
  local_30 = (double)(this->Length + this->Gap);
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

// CreateSceneProxy @ 1496500a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FPrimitiveSceneProxy * __thiscall UGizmoArrowComponent::CreateSceneProxy(UGizmoArrowComponent *this)

{
  longlong lVar1;
  double dVar2;
  FPrimitiveSceneProxy *this_00;
  
  this_00 = ::operator_new(0x2d0);
  if (this_00 == (FPrimitiveSceneProxy *)0x0) {
    this_00 = (FPrimitiveSceneProxy *)0x0;
  }
  else {
    FPrimitiveSceneProxy::FPrimitiveSceneProxy(this_00,(UPrimitiveComponent *)this,(FName)0x0);
    this_00->_padding_ = (longlong)&___7FGizmoArrowComponentSceneProxy__6B_;
    lVar1 = *(longlong *)&this->field_0x558;
    this_00[1]._padding_ = *(longlong *)&this->field_0x550;
    this_00[1]._padding_ = lVar1;
    dVar2 = (this->Direction).field0_0x0._s_0.Y;
    this_00[1].DebugMassData.AllocatorInstance.Data =
         (FScriptContainerElement *)(this->Direction).field0_0x0._s_0.X;
    *(double *)&this_00[1].DebugMassData.ArrayNum = dVar2;
    this_00[1].SimpleStreamableAssetManagerIndex.Object = (int *)(this->Direction).field0_0x0._s_0.Z
    ;
    *(float *)&this_00[1].SimpleStreamableAssetManagerIndex.SharedReferenceCount.ReferenceController
         = this->Gap;
    *(float *)((longlong)
               &this_00[1].SimpleStreamableAssetManagerIndex.SharedReferenceCount.
                ReferenceController + 4) = this->Length;
    this_00[1].WireframeColor.field0_0x0._s_0.R = this->Thickness;
    this_00[1].WireframeColor.field0_0x0._s_0.G = *(float *)&this->field_0x560;
  }
  *(undefined1 **)((longlong)&this_00[1].WireframeColor.field0_0x0 + 8) = &this->field_0x568;
  *(undefined1 **)&this_00[1].PrimitiveColor.field0_0x0 = &this->field_0x569;
  *(undefined1 **)((longlong)&this_00[1].PrimitiveColor.field0_0x0 + 8) = &this->field_0x578;
  return this_00;
}

// GetPrivateStaticClass @ 1496560d0

UClass * __cdecl UGizmoArrowComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoArrowComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoArrowComponent",
               &Z_Registration_Info_UClass_UGizmoArrowComponent.InnerSingleton,
               StaticRegisterNativesUGizmoArrowComponent,0x5b0,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UGizmoArrowComponent>,
               InternalVTableHelperCtorCaller<UGizmoArrowComponent>,local_res8,
               UGizmoBaseComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoArrowComponent.InnerSingleton;
}

// LineTraceComponent @ 14965b650

bool __thiscall
UGizmoArrowComponent::LineTraceComponent
          (UGizmoArrowComponent *this,FHitResult *param_1,TVector<double> *param_2,
          TVector<double> *param_3,FCollisionQueryParams *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  double dVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  double dVar11;
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
  undefined1 auVar24 [16];
  UGizmoArrowComponent *local_res8;
  TVector<double>_u_0 local_168;
  TVector<double>_u_0 local_148;
  undefined1 (*local_130) [16];
  TVector<double>_u_0 local_128;
  TVector<double>_u_0 local_108;
  TVector<double>_u_0 local_f0;
  TVector<double>_u_0 local_d8;
  TVector<double>_u_0 local_b8;
  TVector<double>_u_0 local_98 [5];
  
  local_130 = (undefined1 (*) [16])&this->field_0x1f0;
  local_res8 = (UGizmoArrowComponent *)((ulonglong)local_res8 & 0xffffffff00000000);
  local_108._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  auVar19 = *(undefined1 (*) [16])&this->field_0x200;
  dVar9 = auVar19._0_8_;
  local_98[0]._0_16_ = *local_130;
  dVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z * *(double *)&this->field_0x240;
  dVar5 = *(double *)&this->field_0x248 * 0.0;
  dVar3 = *(double *)&this->field_0x208;
  dVar11 = *(double *)&this->field_0x230 * UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dVar1 = *(double *)&this->field_0x238 * UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar20 = (undefined4)((ulonglong)dVar1 >> 0x20);
  auVar12 = blendpd(local_98[0]._0_16_,auVar19,2);
  auVar21._8_4_ = SUB84(dVar1,0);
  auVar21._0_8_ = dVar11;
  auVar21._12_4_ = uVar20;
  local_108._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_108._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  auVar22._0_8_ = auVar21._8_8_ * local_98[0]._0_8_ - local_98[0]._8_8_ * dVar11;
  auVar22._8_8_ = dVar2 * local_98[0]._8_8_ - dVar9 * dVar1;
  auVar23._8_4_ = SUB84(dVar1,0);
  auVar23._0_8_ = dVar11;
  auVar23._12_4_ = uVar20;
  local_168._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  auVar6._8_4_ = SUB84(dVar5,0);
  auVar6._0_8_ = dVar2;
  auVar6._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  auVar6 = blendpd(auVar23,auVar6,2);
  local_168._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_168._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  auVar7._0_8_ = auVar6._0_8_ * dVar9 - auVar12._0_8_ * dVar2;
  auVar7._8_8_ = auVar6._8_8_ * auVar19._8_8_ - auVar12._8_8_ * dVar5;
  auVar6 = *local_130;
  local_128._s_0.Y = (double)&local_130;
  auVar23 = blendpd(auVar22,auVar7,2);
  dVar5 = auVar22._8_8_ + auVar22._8_8_;
  dVar10 = auVar7._0_8_ + auVar7._0_8_;
  uVar20 = (undefined4)((ulonglong)dVar10 >> 0x20);
  local_128._s_0.X =
       (double)UE::Core::Private::Function::
               TFunctionRefCaller<`UGizmoArrowComponent::LineTraceComponent'::__l2::<lambda_1>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&>
               ::Call;
  auVar24._0_8_ = auVar23._0_8_ + auVar23._0_8_;
  auVar24._8_8_ = auVar23._8_8_ + auVar23._8_8_;
  auVar17._8_4_ = SUB84(dVar10,0);
  auVar17._0_8_ = dVar5;
  auVar17._12_4_ = uVar20;
  auVar15._8_4_ = SUB84(dVar10,0);
  auVar15._0_8_ = dVar5;
  auVar15._12_4_ = uVar20;
  auVar23 = blendpd(auVar15,auVar24,2);
  auVar18._0_8_ = auVar17._8_8_ * auVar6._0_8_ - auVar6._8_8_ * dVar5;
  auVar18._8_8_ = auVar24._0_8_ * auVar6._8_8_ - dVar9 * dVar10;
  auVar12._8_4_ = SUB84(auVar18._8_8_,0);
  auVar12._0_8_ = auVar18._0_8_;
  auVar12._12_4_ = (int)((ulonglong)auVar18._8_8_ >> 0x20);
  auVar6 = blendpd(auVar6,auVar19,2);
  auVar16._0_8_ = auVar23._0_8_ * dVar9 - auVar6._0_8_ * auVar24._0_8_;
  auVar16._8_8_ = auVar23._8_8_ * auVar19._8_8_ - auVar6._8_8_ * auVar24._8_8_;
  auVar19 = blendpd(auVar18,auVar16,2);
  dVar10 = dVar10 * dVar3 + dVar1 + auVar16._0_8_ + *(double *)&this->field_0x218;
  local_d8._s_0.Z = auVar24._0_8_ * dVar3 + dVar2 + auVar19._0_8_ + *(double *)&this->field_0x220;
  local_d8._8_4_ = SUB84(dVar10,0);
  local_d8._0_8_ = dVar5 * dVar3 + dVar11 + auVar12._8_8_ + *(double *)&this->field_0x210;
  local_d8._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  bVar4 = GizmoArrowComponentLocals::GetWorldEndpoints<UGizmoViewContext>
                    ((bool)this->field_0x578,*(UGizmoViewContext **)&this->field_0x570,
                     (TVector<double> *)&local_d8._s_0,&this->Direction,this->Gap,this->Length,
                     (bool)this->field_0x569,
                     (TFunctionRef<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)>
                      *)&local_128._s_0,(TVector<double> *)&local_108._s_0,
                     (TVector<double> *)&local_168._s_0,(float *)&local_res8);
  if (bVar4) {
    local_128._s_0.X = (param_3->field0_0x0)._s_0.X;
    local_128._s_0.Y = (param_3->field0_0x0)._s_0.Y;
    local_128._s_0.Z = (param_3->field0_0x0)._s_0.Z;
    local_b8._s_0.X = (param_2->field0_0x0)._s_0.X;
    local_b8._s_0.Y = (param_2->field0_0x0)._s_0.Y;
    local_b8._s_0.Z = (param_2->field0_0x0)._s_0.Z;
    local_98[0]._s_0.Y = local_168._s_0.Y;
    local_98[0]._s_0.X = local_168._s_0.X;
    local_98[0]._s_0.Z = local_168._s_0.Z;
    local_168._s_0.X = local_108._s_0.X;
    local_168._s_0.Y = local_108._s_0.Y;
    local_168._s_0.Z = local_108._s_0.Z;
    FMath::SegmentDistToSegmentSafe<double>
              ((TVector<double> *)&local_168._s_0,(TVector<double> *)&local_98[0]._s_0,
               (TVector<double> *)&local_b8._s_0,(TVector<double> *)&local_128._s_0,
               (TVector<double> *)&local_f0._s_0,(TVector<double> *)&local_148._s_0);
    auVar19._0_8_ = (local_148._s_0.X - local_f0._s_0.X) * (local_148._s_0.X - local_f0._s_0.X);
    auVar19._8_8_ = 0;
    auVar13._0_8_ =
         (local_148._s_0.Y - local_f0._s_0.Y) * (local_148._s_0.Y - local_f0._s_0.Y) + auVar19._0_8_
         + (local_148._s_0.Z - local_f0._s_0.Z) * (local_148._s_0.Z - local_f0._s_0.Z);
    auVar13._8_8_ = 0;
    auVar19 = sqrtpd(auVar19,auVar13);
    if (auVar19._0_8_ <= (double)(local_res8._0_4_ * *(float *)&this->field_0x564)) {
      local_res8 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=(&(param_1->Component).WeakPtr,(FObjectPtr)&local_res8);
      dVar11 = local_148._s_0.Y - (param_2->field0_0x0)._s_0.Y;
      dVar10 = local_148._s_0.X - (param_2->field0_0x0)._s_0.X;
      dVar5 = local_148._s_0.Z - (param_2->field0_0x0)._s_0.Z;
      auVar8._0_8_ = dVar5 * dVar5;
      auVar8._8_8_ = 0;
      auVar14._0_8_ = dVar11 * dVar11 + dVar10 * dVar10 + auVar8._0_8_;
      auVar14._8_8_ = 0;
      auVar19 = sqrtpd(auVar8,auVar14);
      *(double *)&param_1->ImpactPoint = local_148._s_0.X;
      *(double *)&(param_1->ImpactPoint).field_0x8 = local_148._s_0.Y;
      param_1->Distance = (float)auVar19._0_8_;
      *(double *)&(param_1->ImpactPoint).field_0x10 = local_148._s_0.Z;
      return true;
    }
  }
  return false;
}

// StaticRegisterNativesUGizmoArrowComponent @ 149664a70

void __cdecl UGizmoArrowComponent::StaticRegisterNativesUGizmoArrowComponent(void)

{
  return;
}

