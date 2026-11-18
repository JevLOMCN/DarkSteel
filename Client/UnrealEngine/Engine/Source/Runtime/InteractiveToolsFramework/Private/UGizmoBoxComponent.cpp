// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 10

// StaticClass @ 14962e050

UClass * __cdecl UGizmoBoxComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoBoxComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoBoxComponent",
               &Z_Registration_Info_UClass_UGizmoBoxComponent.InnerSingleton,
               StaticRegisterNativesUGizmoBoxComponent,0x5e0,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UGizmoBoxComponent>,
               InternalVTableHelperCtorCaller<UGizmoBoxComponent>,local_res8,
               UGizmoBaseComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoBoxComponent.InnerSingleton;
}

// UGizmoBoxComponent @ 14963a760

UGizmoBoxComponent * __thiscall
UGizmoBoxComponent::UGizmoBoxComponent(UGizmoBoxComponent *this,FVTableHelper *param_1)

{
  double dVar1;
  
  UGizmoBaseComponent::UGizmoBaseComponent((UGizmoBaseComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  this->_padding_ = (longlong)&___7UGizmoBoxComponent__6B_;
  (this->Origin).field0_0x0._s_0.X = 0.0;
  (this->Origin).field0_0x0._s_0.Y = 0.0;
  (this->Origin).field0_0x0._s_0.Z = 0.0;
  dVar1 = UE::Math::TQuat<double>::Identity.Y;
  (this->Rotation).X = UE::Math::TQuat<double>::Identity.X;
  (this->Rotation).Y = dVar1;
  dVar1 = UE::Math::TQuat<double>::Identity.W;
  (this->Rotation).Z = UE::Math::TQuat<double>::Identity.Z;
  (this->Rotation).W = dVar1;
  (this->Dimensions).field0_0x0._s_0.X = 20.0;
  (this->Dimensions).field0_0x0._s_0.Y = 20.0;
  (this->Dimensions).field0_0x0._s_0.Z = 20.0;
  this->LineThickness = 2.0;
  this->bRemoveHiddenLines = true;
  this->bEnableAxisFlip = true;
  return this;
}

// UGizmoBoxComponent @ 14963a840

UGizmoBoxComponent * __thiscall UGizmoBoxComponent::UGizmoBoxComponent(UGizmoBoxComponent *this)

{
  double dVar1;
  
  UGizmoBaseComponent::UGizmoBaseComponent((UGizmoBaseComponent *)this);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  this->_padding_ = (longlong)&___7UGizmoBoxComponent__6B_;
  (this->Origin).field0_0x0._s_0.X = 0.0;
  (this->Origin).field0_0x0._s_0.Y = 0.0;
  (this->Origin).field0_0x0._s_0.Z = 0.0;
  dVar1 = UE::Math::TQuat<double>::Identity.Y;
  (this->Rotation).X = UE::Math::TQuat<double>::Identity.X;
  (this->Rotation).Y = dVar1;
  dVar1 = UE::Math::TQuat<double>::Identity.W;
  (this->Rotation).Z = UE::Math::TQuat<double>::Identity.Z;
  (this->Rotation).W = dVar1;
  (this->Dimensions).field0_0x0._s_0.X = 20.0;
  (this->Dimensions).field0_0x0._s_0.Y = 20.0;
  (this->Dimensions).field0_0x0._s_0.Z = 20.0;
  this->LineThickness = 2.0;
  this->bRemoveHiddenLines = true;
  this->bEnableAxisFlip = true;
  return this;
}

// ~UGizmoBoxComponent @ 14963e8b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UGizmoBoxComponent::~UGizmoBoxComponent(UGizmoBoxComponent *this)

{
  this->_padding_ = (longlong)&UGizmoBaseComponent::_vftable__for__UObject__;
  this->_padding_ = (longlong)&UGizmoBaseComponent::_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&UGizmoBaseComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&UGizmoBaseComponent::_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&UGizmoBaseComponent::_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&UGizmoBaseComponent::_vftable__for__IPhysicsComponent__;
  this->_padding_ = (longlong)&___7IGizmoBaseComponentInterface__6B_;
  UPrimitiveComponent::~UPrimitiveComponent((UPrimitiveComponent *)this);
  return;
}

// CalcBounds @ 14964be20

TBoxSphereBounds<double,double> * __thiscall
UGizmoBoxComponent::CalcBounds
          (UGizmoBoxComponent *this,TBoxSphereBounds<double,double> *__return_storage_ptr__,
          TTransform<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  TSphere<double> *pTVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  TVector<double>_u_0 local_48;
  undefined8 local_30;
  TSphere<double> local_28;
  
  local_48._s_0.X = (this->Origin).field0_0x0._s_0.X;
  local_48._s_0.Y = (this->Origin).field0_0x0._s_0.Y;
  local_48._s_0.Z = (this->Origin).field0_0x0._s_0.Z;
  dVar1 = (this->Dimensions).field0_0x0._s_0.Z;
  dVar2 = (this->Dimensions).field0_0x0._s_0.Y;
  dVar3 = (this->Dimensions).field0_0x0._s_0.X;
  auVar5._0_8_ = dVar3 * dVar3;
  auVar5._8_8_ = 0;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = dVar2 * dVar2 + auVar5._0_8_ + dVar1 * dVar1;
  auVar6 = sqrtpd(auVar5,auVar6);
  local_30 = auVar6._0_8_;
  pTVar4 = UE::Math::TSphere<double>::TransformBy
                     ((TSphere<double> *)&local_48._s_0,&local_28,param_1);
  dVar2 = (pTVar4->Center).field0_0x0._s_0.Y;
  dVar1 = (pTVar4->Center).field0_0x0._s_0.Z;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.X = (pTVar4->Center).field0_0x0._s_0.X;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = dVar2;
  dVar2 = pTVar4->W;
  __return_storage_ptr__->SphereRadius = dVar2;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = dVar1;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X = dVar2;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y = dVar2;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z = dVar2;
  return __return_storage_ptr__;
}

// CreateSceneProxy @ 149650190

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FPrimitiveSceneProxy * __thiscall UGizmoBoxComponent::CreateSceneProxy(UGizmoBoxComponent *this)

{
  longlong lVar1;
  double dVar2;
  FPrimitiveSceneProxy *this_00;
  TVector<double>_u_0 local_38 [2];
  
  this_00 = ::operator_new(0x330);
  if (this_00 == (FPrimitiveSceneProxy *)0x0) {
    this_00 = (FPrimitiveSceneProxy *)0x0;
  }
  else {
    FPrimitiveSceneProxy::FPrimitiveSceneProxy(this_00,(UPrimitiveComponent *)this,(FName)0x0);
    this_00->_padding_ = (longlong)&___7FGizmoBoxComponentSceneProxy__6B_;
    lVar1 = this->_padding_;
    local_38[0]._s_0.Z = 0.0;
    this_00[1]._padding_ = this->_padding_;
    this_00[1]._padding_ = lVar1;
    dVar2 = (this->Origin).field0_0x0._s_0.Y;
    this_00[1].DebugMassData.AllocatorInstance.Data =
         (FScriptContainerElement *)(this->Origin).field0_0x0._s_0.X;
    *(double *)&this_00[1].DebugMassData.ArrayNum = dVar2;
    local_38[0]._8_8_ = _UNK_150689518;
    local_38[0]._0_8_ = ___xmm_00000000000000003ff0000000000000;
    this_00[1].SimpleStreamableAssetManagerIndex.Object = (int *)(this->Origin).field0_0x0._s_0.Z;
    UE::Math::TQuat<double>::RotateVector
              (&this->Rotation,
               (TVector<double> *)&this_00[1].SimpleStreamableAssetManagerIndex.SharedReferenceCount
               ,(TVector<double> *)&local_38[0]._s_0);
    local_38[0]._s_0.X = ___xmm_3ff00000000000000000000000000000;
    local_38[0]._s_0.Y = _UNK_15061cbc8;
    local_38[0]._s_0.Z = 0.0;
    UE::Math::TQuat<double>::RotateVector
              (&this->Rotation,(TVector<double> *)&this_00[1].PrimitiveColor,
               (TVector<double> *)&local_38[0]._s_0);
    local_38[0]._s_0.Z = __real_3ff0000000000000;
    local_38[0]._s_0.X = 0.0;
    local_38[0]._s_0.Y = 0.0;
    UE::Math::TQuat<double>::RotateVector
              (&this->Rotation,(TVector<double> *)&this_00[1].CustomPrimitiveData.Data.ArrayNum,
               (TVector<double> *)&local_38[0]._s_0);
    dVar2 = (this->Dimensions).field0_0x0._s_0.Y;
    this_00[1].StatId.StatIdPtr = (TStatIdData *)(this->Dimensions).field0_0x0._s_0.X;
    *(double *)&this_00[1].field_0x78 = dVar2;
    *(double *)&this_00[1].field_0x80 = (this->Dimensions).field0_0x0._s_0.Z;
    *(float *)&this_00[1].CustomDepthStencilWriteMask = this->LineThickness;
    this_00[1].RayTracingGroupId = (int)this->_padding_;
    this_00[1].RayTracingGroupCullingPriority = this->bEnableAxisFlip;
    this_00[1].field_0x91 = this->bRemoveHiddenLines;
  }
  this_00[1].InstanceSceneDataBuffersInternal = (FInstanceSceneDataBuffers *)&this->_padding_;
  this_00[1].CombinedMaterialRelevance.field0_0x0.Raw = (ulong64)((longlong)&this->_padding_ + 1);
  *(longlong **)&this_00[1].IndirectLightingCacheQuality = &this->_padding_;
  return this_00;
}

// GetPrivateStaticClass @ 1496563c0

UClass * __cdecl UGizmoBoxComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoBoxComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoBoxComponent",
               &Z_Registration_Info_UClass_UGizmoBoxComponent.InnerSingleton,
               StaticRegisterNativesUGizmoBoxComponent,0x5e0,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UGizmoBoxComponent>,
               InternalVTableHelperCtorCaller<UGizmoBoxComponent>,local_res8,
               UGizmoBaseComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoBoxComponent.InnerSingleton;
}

// GetUsedMaterials @ 149658b60

void __thiscall
UGizmoBoxComponent::GetUsedMaterials
          (UGizmoBoxComponent *this,
          TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *param_1,bool param_2)

{
  return;
}

// LineTraceComponent @ 14965b9f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
UGizmoBoxComponent::LineTraceComponent
          (UGizmoBoxComponent *this,FHitResult *param_1,TVector<double> *param_2,
          TVector<double> *param_3,FCollisionQueryParams *param_4)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [12];
  undefined1 auVar10 [12];
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  bool bVar15;
  bool bVar16;
  ISceneViewInterface *pIVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  float fVar22;
  double dVar23;
  double dVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  double dVar41;
  undefined1 auVar27 [16];
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
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  double dVar53;
  undefined4 uVar59;
  undefined1 auVar54 [16];
  double dVar60;
  undefined4 uVar61;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  double dVar62;
  double dVar63;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  double dVar70;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  double dVar71;
  double dVar72;
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  double dVar79;
  undefined8 in_XMM5_Qb;
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  double dVar85;
  double dVar86;
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  double dVar90;
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  uint uVar101;
  uint uVar102;
  uint uVar103;
  uint uVar104;
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined4 uVar107;
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auStackY_368 [32];
  bool local_2e8;
  bool local_2e7;
  bool local_2e6 [14];
  undefined1 local_2d8 [32];
  UGizmoBoxComponent *local_2b8;
  double dStack_2b0;
  code *local_2a8 [4];
  TVector<double>_u_0 local_288;
  float local_270 [2];
  double local_268;
  double dStack_260;
  undefined8 local_258;
  TVector<double>_u_0 local_250;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  double local_218;
  double dStack_210;
  double local_208;
  longlong lStack_200;
  TVector<double> local_1f8;
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [16];
  TVector<double>_u_0 local_1b8;
  TVector<double> local_1a0;
  TVector<double> local_188;
  TVector<double> local_170;
  TVector<double>_u_0 local_158;
  TVector<double> local_138;
  TVector<double> local_120;
  TVector<double>_u_0 local_108;
  double local_f0;
  double local_e8;
  double local_e0;
  undefined1 local_d8;
  ulonglong local_d0;
  
  local_d0 = __security_cookie.value ^ (ulonglong)auStackY_368;
  bVar16 = *(bool *)((longlong)&this->_padding_ + 1);
  local_218 = (double)this->_padding_;
  dStack_210 = (double)this->_padding_;
  local_208 = (double)this->_padding_;
  lStack_200 = this->_padding_;
  local_1d8._0_8_ = this->_padding_;
  local_1d8._8_8_ = this->_padding_;
  local_1c8._0_8_ = this->_padding_;
  local_1c8._8_8_ = this->_padding_;
  local_238 = (int)this->_padding_;
  uStack_234 = *(undefined4 *)((longlong)&this->_padding_ + 4);
  uStack_230 = (int)this->_padding_;
  uStack_22c = *(undefined4 *)((longlong)&this->_padding_ + 4);
  local_228 = (int)this->_padding_;
  uStack_224 = *(undefined4 *)((longlong)&this->_padding_ + 4);
  uStack_220 = (int)this->_padding_;
  uStack_21c = *(undefined4 *)((longlong)&this->_padding_ + 4);
  if (bVar16 != false) {
    local_238 = UE::Math::TQuat<double>::Identity.Z._0_4_;
    uStack_234 = UE::Math::TQuat<double>::Identity.Z._4_4_;
    uStack_230 = UE::Math::TQuat<double>::Identity.W._0_4_;
    uStack_22c = UE::Math::TQuat<double>::Identity.W._4_4_;
    local_228 = UE::Math::TQuat<double>::Identity.X._0_4_;
    uStack_224 = UE::Math::TQuat<double>::Identity.X._4_4_;
    uStack_220 = UE::Math::TQuat<double>::Identity.Y._0_4_;
    uStack_21c = UE::Math::TQuat<double>::Identity.Y._4_4_;
  }
  dVar63 = (double)CONCAT44(uStack_234,local_238) *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  local_2a8[1] = (code *)((double)CONCAT44(uStack_22c,uStack_230) *
                         GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1]);
  uVar61 = SUB84(local_2a8[1],0);
  uVar107 = (undefined4)((ulonglong)local_2a8[1] >> 0x20);
  dVar79 = (double)CONCAT44(uStack_224,local_228) *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar90 = (double)CONCAT44(uStack_21c,uStack_220) *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  auVar9._4_8_ = in_XMM5_Qb;
  auVar9._0_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[0]._4_4_;
  auVar80._0_8_ = auVar9._0_8_ << 0x20;
  auVar80._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
  auVar80._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
  dVar86 = (param_2->field0_0x0)._s_0.X - local_218;
  dVar72 = (param_2->field0_0x0)._s_0.Y - dStack_210;
  uVar59 = (undefined4)((ulonglong)dVar72 >> 0x20);
  auVar81._8_8_ = auVar80._8_8_;
  auVar81._0_8_ = local_1c8._0_8_;
  dVar23 = (param_2->field0_0x0)._s_0.Z - local_208;
  auVar64._8_4_ = SUB84(dVar72,0);
  auVar64._0_8_ = dVar86;
  auVar64._12_4_ = uVar59;
  auVar7._8_4_ = uVar61;
  auVar7._0_8_ = dVar63;
  auVar7._12_4_ = uVar107;
  auVar42._8_4_ = SUB84(dVar72,0);
  auVar42._0_8_ = dVar86;
  auVar42._12_4_ = uVar59;
  auVar93._8_8_ = 0;
  auVar93._0_8_ = dVar23;
  auVar43 = blendpd(auVar42,auVar93,2);
  auVar25._8_4_ = uVar61;
  auVar25._0_8_ = dVar63;
  auVar25._12_4_ = uVar107;
  local_2a8[0] = auVar25._8_8_;
  auVar105._0_8_ =
       (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                        (uint)((ulonglong)local_1d8._0_8_ >> 0x20),
                        (uint)__xmm_7fffffffffffffff7fffffffffffffff & (uint)local_1d8._0_8_);
  auVar105._8_4_ = _UNK_15061cc88 & (uint)local_1d8._8_8_;
  auVar105._12_4_ = _UNK_15061cc8c & (uint)((ulonglong)local_1d8._8_8_ >> 0x20);
  auVar108._8_4_ = SUB84(dVar90,0);
  auVar108._0_8_ = dVar79;
  auVar108._12_4_ = (int)((ulonglong)dVar90 >> 0x20);
  auVar8._8_4_ = uVar61;
  auVar8._0_8_ = dVar63;
  auVar8._12_4_ = uVar107;
  auVar109 = blendpd(auVar108,auVar8,2);
  auVar26._8_4_ = SUB84(dVar63,0);
  auVar26._0_8_ = dVar90;
  auVar26._12_4_ = (int)((ulonglong)dVar63 >> 0x20);
  auVar73._0_8_ =
       (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                        (uint)((ulonglong)local_1c8._0_8_ >> 0x20),
                        (uint)__xmm_7fffffffffffffff7fffffffffffffff & (uint)local_1c8._0_8_);
  auVar73._8_4_ = _UNK_15061cc88 & GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
  auVar73._12_4_ = _UNK_15061cc8c & GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
  auVar65._0_8_ = auVar64._8_8_ * dVar79 - dVar90 * dVar86;
  auVar65._8_8_ = dVar23 * dVar90 - auVar26._8_8_ * dVar72;
  dVar85 = auVar109._0_8_;
  dVar41 = auVar109._8_8_;
  auVar54._8_4_ = SUB84(auVar65._8_8_,0);
  auVar54._0_8_ = auVar65._0_8_;
  auVar54._12_4_ = (int)((ulonglong)auVar65._8_8_ >> 0x20);
  auVar44._0_8_ = auVar43._0_8_ * dVar63 - dVar85 * dVar23;
  auVar44._8_8_ = auVar43._8_8_ * (double)local_2a8[1] - dVar41 * 0.0;
  auVar43 = blendpd(auVar65,auVar44,2);
  auVar66._0_8_ = auVar43._0_8_ + auVar43._0_8_;
  auVar66._8_8_ = auVar43._8_8_ + auVar43._8_8_;
  dVar53 = auVar54._8_8_ + auVar54._8_8_;
  dVar60 = auVar44._0_8_ + auVar44._0_8_;
  uVar59 = SUB84(dVar60,0);
  auVar91._8_4_ = uVar59;
  auVar91._0_8_ = dVar53;
  uVar61 = (undefined4)((ulonglong)dVar60 >> 0x20);
  auVar91._12_4_ = uVar61;
  auVar27._8_4_ = uVar59;
  auVar27._0_8_ = dVar53;
  auVar27._12_4_ = uVar61;
  auVar87._8_4_ = uVar59;
  auVar87._0_8_ = dVar53;
  auVar87._12_4_ = uVar61;
  auVar43 = blendpd(auVar87,auVar66,2);
  auVar92._0_8_ = auVar91._8_8_ * dVar79 - dVar53 * dVar90;
  auVar92._8_8_ = auVar66._0_8_ * dVar90 - auVar27._8_8_ * dVar63;
  auVar28._8_4_ = SUB84(auVar66._8_8_,0);
  auVar28._0_8_ = auVar66._0_8_;
  auVar28._12_4_ = (int)((ulonglong)auVar66._8_8_ >> 0x20);
  auVar88._0_8_ = auVar43._0_8_ * dVar63 - auVar66._0_8_ * dVar85;
  auVar88._8_8_ = auVar43._8_8_ * (double)local_2a8[1] - auVar28._8_8_ * dVar41;
  lVar18 = -(ulonglong)(auVar73._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
  lVar20 = -(ulonglong)(auVar73._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[3]);
  auVar43 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,local_1d8);
  lVar19 = -(ulonglong)(auVar105._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
  lVar21 = -(ulonglong)(auVar105._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
  auVar106._0_8_ =
       (double)CONCAT44(~(uint)((ulonglong)lVar19 >> 0x20) & auVar43._4_4_,
                        ~(uint)lVar19 & auVar43._0_4_);
  auVar106._8_4_ = ~(uint)lVar21 & auVar43._8_4_;
  auVar106._12_4_ = ~(uint)((ulonglong)lVar21 >> 0x20) & auVar43._12_4_;
  auVar43 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar81);
  uVar101 = ~(uint)lVar18 & auVar43._0_4_;
  uVar102 = ~(uint)((ulonglong)lVar18 >> 0x20) & auVar43._4_4_;
  uVar103 = ~(uint)lVar20 & auVar43._8_4_;
  uVar104 = ~(uint)((ulonglong)lVar20 >> 0x20) & auVar43._12_4_;
  auVar29._8_4_ = SUB84(auVar92._8_8_,0);
  auVar29._0_8_ = auVar92._0_8_;
  auVar29._12_4_ = (int)((ulonglong)auVar92._8_8_ >> 0x20);
  local_288._s_0.X = (dVar53 * (double)local_2a8[0] + dVar86 + auVar29._8_8_) * auVar106._0_8_;
  local_288._s_0.Y = (dVar60 * (double)local_2a8[1] + dVar72 + auVar88._0_8_) * auVar106._8_8_;
  auVar43._4_4_ = uVar102;
  auVar43._0_4_ = uVar101;
  auVar43._8_4_ = uVar103;
  auVar43._12_4_ = uVar104;
  auVar109._4_4_ = uVar102;
  auVar109._0_4_ = uVar101;
  auVar109._8_4_ = uVar103;
  auVar109._12_4_ = uVar104;
  dVar62 = (param_3->field0_0x0)._s_0.X - local_218;
  dVar70 = (param_3->field0_0x0)._s_0.Y - dStack_210;
  auVar93 = blendpd(auVar92,auVar88,2);
  dVar53 = (this->Rotation).X * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar60 = (this->Rotation).Y * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  uVar59 = SUB84(dVar70,0);
  auVar74._8_4_ = uVar59;
  auVar74._0_8_ = dVar62;
  uVar61 = (undefined4)((ulonglong)dVar70 >> 0x20);
  auVar74._12_4_ = uVar61;
  local_2b8 = (UGizmoBoxComponent *)
              ((auVar66._0_8_ * (double)local_2a8[0] + dVar23 + auVar93._0_8_) *
              SUB168(ZEXT816(0) | auVar43,0));
  dStack_2b0 = (auVar66._8_8_ * (double)local_2a8[1] + 0.0 + auVar93._8_8_) *
               SUB168(ZEXT816(0) | auVar43,8);
  dVar24 = (param_3->field0_0x0)._s_0.Z - local_208;
  auVar45._8_4_ = uVar59;
  auVar45._0_8_ = dVar62;
  auVar45._12_4_ = uVar61;
  auVar89._8_8_ = 0;
  auVar89._0_8_ = dVar24;
  auVar30._8_4_ = uVar59;
  auVar30._0_8_ = dVar62;
  auVar30._12_4_ = uVar61;
  auVar43 = blendpd(auVar45,auVar89,2);
  auVar75._0_8_ = auVar74._8_8_ * dVar79 - dVar62 * dVar90;
  auVar75._8_8_ = dVar24 * dVar90 - auVar30._8_8_ * dVar63;
  auVar46._0_8_ = auVar43._0_8_ * dVar63 - dVar24 * dVar85;
  auVar46._8_8_ = auVar43._8_8_ * (double)local_2a8[1] - dVar41 * 0.0;
  auVar43 = blendpd(auVar75,auVar46,2);
  auVar76._0_8_ = auVar43._0_8_ + auVar43._0_8_;
  auVar76._8_8_ = auVar43._8_8_ + auVar43._8_8_;
  dVar23 = auVar75._8_8_ + auVar75._8_8_;
  dVar71 = auVar46._0_8_ + auVar46._0_8_;
  uVar59 = SUB84(dVar71,0);
  uVar61 = (undefined4)((ulonglong)dVar71 >> 0x20);
  auVar55._8_4_ = uVar59;
  auVar55._0_8_ = dVar23;
  auVar55._12_4_ = uVar61;
  auVar31._8_4_ = uVar59;
  auVar31._0_8_ = dVar23;
  auVar31._12_4_ = uVar61;
  auVar47._8_4_ = uVar59;
  auVar47._0_8_ = dVar23;
  auVar47._12_4_ = uVar61;
  auVar43 = blendpd(auVar47,auVar76,2);
  local_2d8._8_8_ = auVar7._8_8_;
  auVar56._0_8_ = auVar55._8_8_ * dVar79 - dVar23 * dVar90;
  auVar56._8_8_ = auVar76._0_8_ * dVar90 - auVar31._8_8_ * dVar63;
  auVar32._8_4_ = SUB84(auVar76._8_8_,0);
  auVar32._0_8_ = auVar76._0_8_;
  auVar32._12_4_ = (int)((ulonglong)auVar76._8_8_ >> 0x20);
  dVar86 = (this->Rotation).Z * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar72 = (this->Rotation).W * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  uVar59 = SUB84(dVar72,0);
  uVar61 = (undefined4)((ulonglong)dVar72 >> 0x20);
  auVar48._0_8_ = auVar43._0_8_ * dVar63 - auVar76._0_8_ * dVar85;
  auVar48._8_8_ = auVar43._8_8_ * (double)local_2d8._8_8_ - auVar32._8_8_ * dVar41;
  auVar33._8_4_ = SUB84(auVar56._8_8_,0);
  auVar33._0_8_ = auVar56._0_8_;
  auVar33._12_4_ = (int)((ulonglong)auVar56._8_8_ >> 0x20);
  auVar43 = blendpd(auVar56,auVar48,2);
  local_2d8._0_8_ =
       (auVar76._0_8_ * (double)local_2a8[0] + dVar24 + auVar43._0_8_) *
       SUB168(ZEXT816(0) | auVar109,0);
  dVar72 = (dVar23 * (double)local_2a8[0] + dVar62 + auVar33._8_8_) * auVar106._0_8_;
  dVar63 = (dVar71 * (double)local_2a8[1] + dVar70 + auVar48._0_8_) * auVar106._8_8_;
  local_2d8._8_8_ =
       (auVar76._8_8_ * (double)local_2a8[1] + 0.0 + auVar43._8_8_) *
       SUB168(ZEXT816(0) | auVar109,8);
  auVar10._4_8_ = dVar70;
  auVar10._0_4_ = (int)((ulonglong)local_288._s_0.X >> 0x20);
  auVar67._0_8_ = auVar10._0_8_ << 0x20;
  auVar67._8_4_ = SUB84(local_288._s_0.Y,0);
  auVar67._12_4_ = (int)((ulonglong)local_288._s_0.Y >> 0x20);
  dVar23 = auVar67._8_8_;
  auVar82._8_4_ = uVar59;
  auVar82._0_8_ = dVar86;
  auVar82._12_4_ = uVar61;
  dVar85 = dVar60 * (double)local_2b8 - dVar86 * dVar23;
  dVar79 = dVar86 * local_288._s_0.X - dVar53 * (double)local_2b8;
  dVar85 = dVar85 + dVar85;
  dVar79 = dVar79 + dVar79;
  auVar11._4_8_ = auVar93._8_8_;
  auVar11._0_4_ = (int)((ulonglong)dVar86 >> 0x20);
  auVar94._0_8_ = auVar11._0_8_ << 0x20;
  auVar94._8_4_ = uVar59;
  auVar94._12_4_ = uVar61;
  dVar24 = auVar94._8_8_;
  dVar71 = dVar53 * dVar23 - dVar60 * local_288._s_0.X;
  dVar71 = dVar71 + dVar71;
  local_250._s_0.X = (dVar60 * dVar71 - dVar86 * dVar79) + dVar24 * dVar85 + local_288._s_0.X;
  auVar12._4_8_ = auVar82._8_8_;
  auVar12._0_4_ = (int)((ulonglong)dVar72 >> 0x20);
  auVar83._0_8_ = auVar12._0_8_ << 0x20;
  auVar83._8_4_ = SUB84(dVar63,0);
  auVar83._12_4_ = (int)((ulonglong)dVar63 >> 0x20);
  dVar90 = auVar83._8_8_;
  local_250._s_0.Y = (dVar86 * dVar85 - dVar53 * dVar71) + dVar24 * dVar79 + dVar23;
  local_250._s_0.Z = (dVar53 * dVar79 - dVar60 * dVar85) + dVar24 * dVar71 + (double)local_2b8;
  dVar71 = dVar60 * (double)local_2d8._0_8_ - dVar86 * dVar90;
  dVar71 = dVar71 + dVar71;
  dVar23 = dVar86 * dVar72 - dVar53 * (double)local_2d8._0_8_;
  dVar23 = dVar23 + dVar23;
  dVar63 = dVar53 * dVar90 - dVar60 * dVar72;
  dVar63 = dVar63 + dVar63;
  dStack_260 = (dVar86 * dVar71 - dVar53 * dVar63) + dVar24 * dVar23 + dVar90;
  local_268 = (dVar60 * dVar63 - dVar86 * dVar23) + dVar24 * dVar71 + dVar72;
  local_2e8 = false;
  local_2e7 = false;
  local_2e6[0] = false;
  local_258 = (dVar53 * dVar23 - dVar60 * dVar71) + dVar24 * dVar63 + (double)local_2d8._0_8_;
  if ((char)this->_padding_ != '\0') {
    auVar2._0_8_ = this->_padding_;
    auVar2._8_8_ = this->_padding_;
    local_2b8 = (UGizmoBoxComponent *)&this->_padding_;
    dVar63 = (double)this->_padding_;
    dVar53 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z * (double)this->_padding_;
    dVar60 = (double)this->_padding_ * 0.0;
    dVar86 = (double)this->_padding_ * UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dVar72 = (double)this->_padding_ * UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    uVar59 = (undefined4)((ulonglong)dVar72 >> 0x20);
    local_158._0_8_ = this->_padding_;
    local_158._8_8_ = this->_padding_;
    auVar109 = blendpd(local_158._0_16_,auVar2,2);
    auVar95._8_4_ = SUB84(dVar72,0);
    auVar95._0_8_ = dVar86;
    auVar95._12_4_ = uVar59;
    auVar96._0_8_ = auVar95._8_8_ * (double)local_158._0_8_ - (double)local_158._8_8_ * dVar86;
    auVar96._8_8_ = dVar53 * (double)local_158._8_8_ - (double)auVar2._0_8_ * dVar72;
    auVar34._8_4_ = SUB84(dVar72,0);
    auVar34._0_8_ = dVar86;
    auVar34._12_4_ = uVar59;
    auVar5._8_4_ = SUB84(dVar60,0);
    auVar5._0_8_ = dVar53;
    auVar5._12_4_ = (int)((ulonglong)dVar60 >> 0x20);
    auVar43 = blendpd(auVar34,auVar5,2);
    auVar84._8_4_ = SUB84(auVar96._8_8_,0);
    auVar84._0_8_ = auVar96._0_8_;
    auVar84._12_4_ = (int)((ulonglong)auVar96._8_8_ >> 0x20);
    auVar35._0_8_ = auVar43._0_8_ * (double)auVar2._0_8_ - auVar109._0_8_ * dVar53;
    auVar35._8_8_ = auVar43._8_8_ * (double)auVar2._8_8_ - auVar109._8_8_ * dVar60;
    auVar3._0_8_ = this->_padding_;
    auVar3._8_8_ = this->_padding_;
    local_2a8[1] = (code *)&local_2b8;
    auVar43 = blendpd(auVar96,auVar35,2);
    dVar60 = auVar84._8_8_ + auVar84._8_8_;
    dVar23 = auVar35._0_8_ + auVar35._0_8_;
    local_2a8[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`UGizmoBoxComponent::LineTraceComponent'::__l8::<lambda_1>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&>
                   ::Call;
    auVar97._0_8_ = auVar43._0_8_ + auVar43._0_8_;
    auVar97._8_8_ = auVar43._8_8_ + auVar43._8_8_;
    auVar77._8_4_ = SUB84(dVar23,0);
    auVar77._0_8_ = dVar60;
    uVar59 = (undefined4)((ulonglong)dVar23 >> 0x20);
    auVar77._12_4_ = uVar59;
    auVar68._8_4_ = SUB84(dVar23,0);
    auVar68._0_8_ = dVar60;
    auVar68._12_4_ = uVar59;
    auVar109 = blendpd(auVar68,auVar97,2);
    auVar78._0_8_ = auVar77._8_8_ * (double)auVar3._0_8_ - (double)auVar3._8_8_ * dVar60;
    auVar78._8_8_ = auVar97._0_8_ * (double)auVar3._8_8_ - (double)auVar2._0_8_ * dVar23;
    auVar43 = blendpd(auVar3,auVar2,2);
    auVar36._8_4_ = SUB84(auVar78._8_8_,0);
    auVar36._0_8_ = auVar78._0_8_;
    auVar36._12_4_ = (int)((ulonglong)auVar78._8_8_ >> 0x20);
    auVar69._0_8_ = auVar109._0_8_ * (double)auVar2._0_8_ - auVar43._0_8_ * auVar97._0_8_;
    auVar69._8_8_ = auVar109._8_8_ * (double)auVar2._8_8_ - auVar43._8_8_ * auVar97._8_8_;
    auVar43 = blendpd(auVar78,auVar69,2);
    local_288._s_0.X = dVar60 * dVar63 + dVar86 + auVar36._8_8_ + (double)this->_padding_;
    local_288._s_0.Y = dVar23 * dVar63 + dVar72 + auVar69._0_8_ + (double)this->_padding_;
    local_2d8._16_8_ = __real_3ff0000000000000;
    local_288._s_0.Z = auVar97._0_8_ * dVar63 + dVar53 + auVar43._0_8_ + (double)this->_padding_;
    local_2d8._0_16_ = ZEXT816(0);
    UE::Math::TQuat<double>::RotateVector(&this->Rotation,&local_188,(TVector<double> *)local_2d8);
    local_2d8._0_8_ = ___xmm_3ff00000000000000000000000000000;
    local_2d8._8_8_ = _UNK_15061cbc8;
    local_2d8._16_8_ = 0.0;
    UE::Math::TQuat<double>::RotateVector(&this->Rotation,&local_170,(TVector<double> *)local_2d8);
    local_2d8._8_8_ = _UNK_150689518;
    local_2d8._0_8_ = ___xmm_00000000000000003ff0000000000000;
    local_2d8._16_8_ = 0.0;
    UE::Math::TQuat<double>::RotateVector(&this->Rotation,&local_1f8,(TVector<double> *)local_2d8);
    GizmoBoxComponentLocals::GetBoxDirections<UGizmoViewContext>
              (SUB81(this->_padding_,0),(UGizmoViewContext *)this->_padding_,
               (TVector<double> *)&local_288._s_0,&local_1f8,&local_170,&local_188,
               this->bEnableAxisFlip,bVar16,
               (TFunctionRef<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *
               )local_2a8,(TVector<double> *)&local_158._s_0,&local_138,(TVector<double> *)local_2d8
               ,&local_2e8,&local_2e7,local_2e6);
  }
  bVar16 = this->bEnableAxisFlip;
  uVar101 = (uint)__xmm_80000000000000008000000000000000;
  uVar102 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  if ((bVar16 == false) || (local_2e6[0] == false)) {
    uVar1 = *(undefined8 *)((longlong)&(this->Origin).field0_0x0 + 0x10);
    uVar103 = (uint)uVar1;
    uVar104 = (uint)((ulonglong)uVar1 >> 0x20);
    if (bVar16 != false) goto LAB_14965c1a1;
LAB_14965c1b2:
    dVar86 = (this->Origin).field0_0x0._s_0.Y;
    if (bVar16 != false) goto LAB_14965c1be;
  }
  else {
    uVar1 = *(undefined8 *)((longlong)&(this->Origin).field0_0x0 + 0x10);
    uVar103 = (uint)uVar1 ^ uVar101;
    uVar104 = (uint)((ulonglong)uVar1 >> 0x20) ^ uVar102;
LAB_14965c1a1:
    if (local_2e7 == false) goto LAB_14965c1b2;
    uVar1 = *(undefined8 *)((longlong)&(this->Origin).field0_0x0 + 8);
    dVar86 = (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) ^ uVar102,(uint)uVar1 ^ uVar101);
LAB_14965c1be:
    if (local_2e8 != false) {
      uVar1 = *(undefined8 *)&(this->Origin).field0_0x0;
      uVar101 = (uint)uVar1 ^ uVar101;
      uVar102 = (uint)((ulonglong)uVar1 >> 0x20) ^ uVar102;
      goto LAB_14965c1db;
    }
  }
  uVar1 = *(undefined8 *)&(this->Origin).field0_0x0;
  uVar101 = (uint)uVar1;
  uVar102 = (uint)((ulonglong)uVar1 >> 0x20);
LAB_14965c1db:
  fVar22 = __real_3f800000;
  if ((char)this->_padding_ != '\0') {
    local_2d8[8] = 0;
    pIVar17 = (ISceneViewInterface *)(this->_padding_ + 0x28);
    if (this->_padding_ == 0) {
      pIVar17 = (ISceneViewInterface *)0x0;
    }
    fVar22 = UE::GizmoRenderingUtil::CalculateLocalPixelToWorldScale
                       (pIVar17,(TVector<double> *)&local_288._s_0,false,
                        (TOptional<double> *)local_2d8);
  }
  local_d8 = 1;
  dVar60 = (double)fVar22;
  dVar72 = dVar60 * (double)CONCAT44(uVar102,uVar101);
  dVar53 = dVar60 * (double)CONCAT44(uVar104,uVar103);
  local_f0 = dVar60 * (this->Dimensions).field0_0x0._s_0.X * __real_3fe0000000000000;
  local_e8 = dVar60 * (this->Dimensions).field0_0x0._s_0.Y * __real_3fe0000000000000;
  local_e0 = dVar60 * (this->Dimensions).field0_0x0._s_0.Z * __real_3fe0000000000000;
  local_108._s_0.X = dVar72 - local_f0;
  local_108._s_0.Y = dVar60 * dVar86 - local_e8;
  local_f0 = local_f0 + dVar72;
  local_e8 = local_e8 + dVar60 * dVar86;
  local_108._s_0.Z = dVar53 - local_e0;
  local_e0 = local_e0 + dVar53;
  local_1b8._s_0.X = ___xmm_3e45798ee00000003e45798ee0000000;
  local_1b8._s_0.Y = _UNK_150689618;
  local_1b8._s_0.Z = __real_3e45798ee0000000;
  bVar15 = FMath::LineExtentBoxIntersection
                     ((TBox<double> *)&local_108._s_0,(TVector<double> *)&local_250._s_0,
                      (TVector<double> *)&local_268,(TVector<double> *)&local_1b8._s_0,&local_1a0,
                      &local_120,local_270);
  bVar16 = false;
  if (bVar15) {
    local_2d8._16_8_ = local_1a0.field0_0x0._s_0.Z;
    UE::Math::TQuat<double>::RotateVector
              (&this->Rotation,(TVector<double> *)local_2a8,(TVector<double> *)local_2d8);
    dVar63 = (double)CONCAT44(uStack_234,local_238);
    auVar13._8_4_ = uStack_230;
    auVar13._0_8_ = dVar63;
    auVar13._12_4_ = uStack_22c;
    dVar23 = (double)CONCAT44(uStack_224,local_228);
    auVar14._8_4_ = uStack_220;
    auVar14._0_8_ = dVar23;
    auVar14._12_4_ = uStack_21c;
    local_2b8 = this;
    dVar79 = (double)local_2a8[0] * (double)local_1d8._0_8_;
    dVar90 = (double)local_2a8[1] * (double)local_1d8._8_8_;
    dVar86 = (double)local_2a8[2] * (double)local_1c8._0_8_;
    dVar72 = (double)local_1c8._8_8_ * 0.0;
    dVar71 = auVar14._8_8_;
    auVar98._8_4_ = SUB84(dVar90,0);
    auVar98._0_8_ = dVar79;
    uVar59 = (undefined4)((ulonglong)dVar90 >> 0x20);
    auVar98._12_4_ = uVar59;
    auVar37._8_4_ = local_238;
    auVar37._0_8_ = dVar71;
    auVar37._12_4_ = uStack_234;
    dVar60 = auVar13._8_8_;
    auVar99._0_8_ = auVar98._8_8_ * dVar23 - dVar71 * dVar79;
    auVar99._8_8_ = dVar86 * dVar71 - auVar37._8_8_ * dVar90;
    auVar109 = blendpd(auVar14,auVar13,2);
    auVar49._8_4_ = SUB84(dVar90,0);
    auVar49._0_8_ = dVar79;
    auVar49._12_4_ = uVar59;
    auVar4._8_4_ = SUB84(dVar72,0);
    auVar4._0_8_ = dVar86;
    auVar4._12_4_ = (int)((ulonglong)dVar72 >> 0x20);
    auVar43 = blendpd(auVar49,auVar4,2);
    auVar50._0_8_ = auVar43._0_8_ * dVar63 - auVar109._0_8_ * dVar86;
    auVar50._8_8_ = auVar43._8_8_ * dVar60 - auVar109._8_8_ * dVar72;
    auVar43 = blendpd(auVar99,auVar50,2);
    dVar72 = auVar99._8_8_ + auVar99._8_8_;
    dVar53 = auVar50._0_8_ + auVar50._0_8_;
    uVar59 = SUB84(dVar53,0);
    uVar61 = (undefined4)((ulonglong)dVar53 >> 0x20);
    auVar100._0_8_ = auVar43._0_8_ + auVar43._0_8_;
    auVar100._8_8_ = auVar43._8_8_ + auVar43._8_8_;
    auVar57._8_4_ = uVar59;
    auVar57._0_8_ = dVar72;
    auVar57._12_4_ = uVar61;
    auVar38._8_4_ = uVar59;
    auVar38._0_8_ = dVar72;
    auVar38._12_4_ = uVar61;
    auVar51._8_4_ = uVar59;
    auVar51._0_8_ = dVar72;
    auVar51._12_4_ = uVar61;
    auVar43 = blendpd(auVar51,auVar100,2);
    auVar58._0_8_ = auVar57._8_8_ * dVar23 - dVar72 * dVar71;
    auVar58._8_8_ = auVar100._0_8_ * dVar71 - auVar38._8_8_ * dVar63;
    auVar39._8_4_ = SUB84(auVar100._8_8_,0);
    auVar39._0_8_ = auVar100._0_8_;
    auVar39._12_4_ = (int)((ulonglong)auVar100._8_8_ >> 0x20);
    auVar52._0_8_ = auVar43._0_8_ * dVar63 - auVar100._0_8_ * auVar109._0_8_;
    auVar52._8_8_ = auVar43._8_8_ * dVar60 - auVar39._8_8_ * auVar109._8_8_;
    auVar40._8_4_ = SUB84(auVar58._8_8_,0);
    auVar40._0_8_ = auVar58._0_8_;
    auVar40._12_4_ = (int)((ulonglong)auVar58._8_8_ >> 0x20);
    auVar43 = blendpd(auVar58,auVar52,2);
    dVar63 = auVar100._0_8_ * dVar60 + dVar86 + auVar43._0_8_ + local_208;
    dVar86 = dVar72 * dVar60 + dVar79 + auVar40._8_8_ + local_218;
    dVar72 = dVar53 * dVar60 + dVar90 + auVar52._0_8_ + dStack_210;
    local_1f8.field0_0x0._s_0.Z = dVar63;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=(&(param_1->Component).WeakPtr,(FObjectPtr)&local_2b8);
    dVar53 = local_1f8.field0_0x0._s_0.Z - (param_2->field0_0x0)._s_0.Z;
    dVar60 = dVar86 - (param_2->field0_0x0)._s_0.X;
    auVar6._8_4_ = SUB84(dVar72,0);
    auVar6._0_8_ = dVar86;
    auVar6._12_4_ = (int)((ulonglong)dVar72 >> 0x20);
    *(undefined1 (*) [16])&param_1->ImpactPoint = auVar6;
    bVar16 = true;
    dVar72 = dVar72 - (param_2->field0_0x0)._s_0.Y;
    *(double *)&(param_1->ImpactPoint).field_0x10 = dVar63;
    param_1->Distance = (float)SQRT(dVar72 * dVar72 + dVar60 * dVar60 + dVar53 * dVar53);
  }
  return bVar16;
}

// StaticRegisterNativesUGizmoBoxComponent @ 149664ae0

void __cdecl UGizmoBoxComponent::StaticRegisterNativesUGizmoBoxComponent(void)

{
  return;
}

