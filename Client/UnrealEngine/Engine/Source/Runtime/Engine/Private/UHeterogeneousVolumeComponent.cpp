// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 39

// StaticClass @ 1478912d0

UClass * __cdecl UHeterogeneousVolumeComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UHeterogeneousVolumeComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"HeterogeneousVolumeComponent",
               &Z_Registration_Info_UClass_UHeterogeneousVolumeComponent.InnerSingleton,
               StaticRegisterNativesUHeterogeneousVolumeComponent,0x640,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UHeterogeneousVolumeComponent>,
               InternalVTableHelperCtorCaller<UHeterogeneousVolumeComponent>,local_res8,
               UMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UHeterogeneousVolumeComponent.InnerSingleton;
}

// UHeterogeneousVolumeComponent @ 1478a8f40

UHeterogeneousVolumeComponent * __thiscall
UHeterogeneousVolumeComponent::UHeterogeneousVolumeComponent
          (UHeterogeneousVolumeComponent *this,FVTableHelper *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  UMeshComponent::UMeshComponent((UMeshComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->FrameTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->FrameTransform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->FrameTransform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->FrameTransform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->FrameTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->FrameTransform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->FrameTransform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->FrameTransform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->FrameTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->FrameTransform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->FrameTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->FrameTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  (this->MaterialInstanceDynamic).field0_0x0.DebugPtr = (UMaterialInstanceDynamic *)0x0;
  return this;
}

// UHeterogeneousVolumeComponent @ 1478a9010

UHeterogeneousVolumeComponent * __thiscall
UHeterogeneousVolumeComponent::UHeterogeneousVolumeComponent
          (UHeterogeneousVolumeComponent *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  undefined1 *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  UMeshComponent::UMeshComponent((UMeshComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar5 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->FrameTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->FrameTransform).Rotation.XY.m128d_f64[1] = (double)fVar3;
  (this->FrameTransform).Rotation.ZW.m128d_f64[0] = (double)fVar4;
  (this->FrameTransform).Rotation.ZW.m128d_f64[1] = (double)fVar5;
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar5 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->FrameTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->FrameTransform).Translation.XY.m128d_f64[1] = (double)fVar3;
  (this->FrameTransform).Translation.ZW.m128d_f64[0] = (double)fVar4;
  (this->FrameTransform).Translation.ZW.m128d_f64[1] = (double)fVar5;
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar5 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->FrameTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->FrameTransform).Scale3D.XY.m128d_f64[1] = (double)fVar3;
  (this->FrameTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar4;
  (this->FrameTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar5;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 2;
  *(undefined1 *)&this->_padding_ = 2;
  (this->MaterialInstanceDynamic).field0_0x0.DebugPtr = (UMaterialInstanceDynamic *)0x0;
  (this->VolumeResolution).field0_0x0._s_0.X = 0x80;
  (this->VolumeResolution).field0_0x0._s_0.Y = 0x80;
  (this->VolumeResolution).field0_0x0._s_0.Z = 0x80;
  this->bPlaying = 0;
  this->bLooping = 0;
  this->bIssueBlockingRequests = 0;
  this->bPivotAtCentroid = 0;
  this->Frame = 0.0;
  this->StartFrame = 0.0;
  this->EndFrame = 0.0;
  this->StreamingMipBias = 0.0;
  this->PreviousSVT = (USparseVolumeTexture *)0x0;
  this->FrameRate = 24.0;
  this->StepFactor = 1.0;
  this->ShadowStepFactor = 2.0;
  this->ShadowBiasFactor = 0.5;
  this->LightingDownsampleFactor = 2.0;
  return this;
}

// CalcBounds @ 1478b7710

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TBoxSphereBounds<double,double> * __thiscall
UHeterogeneousVolumeComponent::CalcBounds
          (UHeterogeneousVolumeComponent *this,
          TBoxSphereBounds<double,double> *__return_storage_ptr__,TTransform<double> *param_1)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 unaff_XMM14 [16];
  undefined1 auVar19 [16];
  undefined1 auStack_1c8 [32];
  undefined8 local_1a8;
  TMatrix<double> local_198;
  TTransform<double> local_118;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  local_1a8 = *(undefined8 *)&(this->VolumeResolution).field0_0x0;
  dVar13 = (double)(int)local_1a8;
  dVar9 = (double)(int)((ulonglong)local_1a8 >> 0x20);
  dVar15 = (double)(this->VolumeResolution).field0_0x0._s_0.Z;
  dVar14 = dVar9 * __real_3fe0000000000000;
  dVar3 = dVar13 * __real_3fe0000000000000;
  dVar2 = dVar15 * __real_3fe0000000000000;
  uVar6 = dVar3;
  uVar7 = dVar2;
  uVar8 = dVar14;
  if (this->bPivotAtCentroid != 0) {
    uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  }
  auVar19._0_8_ = (dVar9 * dVar9 + dVar13 * dVar13 + dVar15 * dVar15) * __real_3fd0000000000000;
  auVar19._8_8_ = 0;
  auVar19 = sqrtpd(unaff_XMM14,auVar19);
  local_118.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_118.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_118.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_118.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_118.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_118.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_118.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  local_118.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_118.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_118.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_118.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_118.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_118.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_118.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_118.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  UE::Math::TTransform<double>::Multiply(&local_118,&this->FrameTransform,param_1);
  UE::Math::TTransform<double>::ToMatrixWithScale(&local_118,&local_198);
  auVar10._8_4_ = SUB84(dVar2,0);
  auVar10._0_8_ = dVar2;
  auVar10._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  dVar9 = auVar10._8_8_ * local_198.M[2][1];
  auVar11._0_8_ =
       (double)CONCAT44((uint)((ulonglong)(dVar2 * local_198.M[2][0]) >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar2 * local_198.M[2][0],0) &
                        (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  auVar11._8_4_ = SUB84(dVar9,0) & _UNK_15061cc88;
  auVar11._12_4_ = (uint)((ulonglong)dVar9 >> 0x20) & _UNK_15061cc8c;
  dVar9 = (double)CONCAT44((uint)((ulonglong)(dVar14 * local_198.M[1][0]) >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar14 * local_198.M[1][0],0) &
                           (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
          (double)CONCAT44((uint)((ulonglong)(dVar3 * local_198.M[0][0]) >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar3 * local_198.M[0][0],0) &
                           (uint)__xmm_7fffffffffffffff7fffffffffffffff) + auVar11._0_8_;
  dVar13 = (double)CONCAT44((uint)((ulonglong)(dVar14 * local_198.M[1][1]) >> 0x20) & _UNK_15061cc8c
                            ,SUB84(dVar14 * local_198.M[1][1],0) & _UNK_15061cc88) +
           (double)CONCAT44((uint)((ulonglong)(dVar3 * local_198.M[0][1]) >> 0x20) & _UNK_15061cc8c,
                            SUB84(dVar3 * local_198.M[0][1],0) & _UNK_15061cc88) + auVar11._8_8_;
  auVar12._8_4_ = (int)uVar7;
  auVar12._0_8_ = uVar7;
  auVar12._12_4_ = (int)((ulonglong)uVar7 >> 0x20);
  auVar16._8_4_ = (int)uVar8;
  auVar16._0_8_ = uVar8;
  auVar16._12_4_ = (int)((ulonglong)uVar8 >> 0x20);
  dVar3 = (double)CONCAT44((uint)((ulonglong)(dVar14 * local_198.M[1][2]) >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar14 * local_198.M[1][2],0) &
                           (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
          (double)CONCAT44((uint)((ulonglong)(dVar3 * local_198.M[0][2]) >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar3 * local_198.M[0][2],0) &
                           (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
          (double)CONCAT44((uint)((ulonglong)(dVar2 * local_198.M[2][2]) >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar2 * local_198.M[2][2],0) &
                           (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  auVar5._8_4_ = SUB84(dVar13,0);
  auVar5._0_8_ = dVar9;
  auVar5._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
  local_118.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar9,0);
  local_118.Rotation.ZW.m128d_f64[1]._4_4_ = (undefined4)((ulonglong)dVar9 >> 0x20);
  local_118.Translation.XY.m128d_f64[0] = auVar5._8_8_;
  auVar17._0_8_ =
       local_198.M[1][0] * local_198.M[1][0] + local_198.M[0][0] * local_198.M[0][0] +
       local_198.M[2][0] * local_198.M[2][0];
  auVar17._8_8_ =
       local_198.M[1][1] * local_198.M[1][1] + local_198.M[0][1] * local_198.M[0][1] +
       local_198.M[2][1] * local_198.M[2][1];
  auVar18._8_4_ = SUB84(auVar17._8_8_,0);
  auVar18._0_8_ = auVar17._8_8_;
  auVar18._12_4_ = (int)((ulonglong)auVar17._8_8_ >> 0x20);
  auVar18 = maxpd(auVar17,auVar18);
  dVar2 = local_198.M[1][2] * local_198.M[1][2] + local_198.M[0][2] * local_198.M[0][2] +
          local_198.M[2][2] * local_198.M[2][2];
  auVar4._8_4_ = SUB84(dVar2,0);
  auVar4._0_8_ = dVar2;
  auVar4._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  auVar18 = maxpd(auVar18,auVar4);
  dVar14 = SQRT(dVar3 * dVar3 + dVar9 * dVar9 + dVar13 * dVar13);
  (__return_storage_ptr__->Origin).field0_0x0._s_0.X =
       (double)uVar8 * local_198.M[1][0] + (double)uVar6 * local_198.M[0][0] +
       (double)uVar7 * local_198.M[2][0] + local_198.M[3][0];
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Y =
       auVar16._8_8_ * local_198.M[1][1] + (double)uVar6 * local_198.M[0][1] +
       auVar12._8_8_ * local_198.M[2][1] + local_198.M[3][1];
  dVar2 = SQRT(auVar18._0_8_) * auVar19._0_8_;
  if (dVar2 <= dVar14) {
    dVar14 = dVar2;
  }
  auVar1._8_4_ = local_118.Rotation.ZW.m128d_f64[1]._0_4_;
  auVar1._0_8_ = (double)uVar8 * local_198.M[1][2] + (double)uVar6 * local_198.M[0][2] +
                 (double)uVar7 * local_198.M[2][2] + local_198.M[3][2];
  auVar1._12_4_ = local_118.Rotation.ZW.m128d_f64[1]._4_4_;
  *(undefined1 (*) [16])((longlong)&(__return_storage_ptr__->Origin).field0_0x0 + 0x10) = auVar1;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y = local_118.Translation.XY.m128d_f64[0];
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z = dVar3;
  __return_storage_ptr__->SphereRadius = dVar14;
  return __return_storage_ptr__;
}

// CreateOrCastToMID @ 1478c18e0

UMaterialInstanceDynamic * __cdecl
UHeterogeneousVolumeComponent::CreateOrCastToMID(UMaterialInterface *param_1)

{
  int iVar1;
  UClass *pUVar2;
  UMaterialInstanceDynamic *pUVar3;
  
  pUVar2 = Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    pUVar2 = Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar2->_padding_)) {
      param_1 = (UMaterialInterface *)0x0;
    }
    return (UMaterialInstanceDynamic *)param_1;
  }
  pUVar3 = UMaterialInstanceDynamic::Create(param_1,(UObject *)0x0,(FName)0x0);
  return pUVar3;
}

// CreateSceneProxy @ 1478c1f80

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
UHeterogeneousVolumeComponent::CreateSceneProxy(UHeterogeneousVolumeComponent *this)

{
  FHeterogeneousVolumeSceneProxy *pFVar1;
  
  pFVar1 = ::operator_new(0x700);
  if (pFVar1 != (FHeterogeneousVolumeSceneProxy *)0x0) {
    pFVar1 = FHeterogeneousVolumeSceneProxy::FHeterogeneousVolumeSceneProxy(pFVar1,this);
    return (FPrimitiveSceneProxy *)pFVar1;
  }
  return (FPrimitiveSceneProxy *)0x0;
}

// GetHeterogeneousVolumeMaterial @ 1478d4840

UMaterialInterface * __thiscall
UHeterogeneousVolumeComponent::GetHeterogeneousVolumeMaterial(UHeterogeneousVolumeComponent *this)

{
  UMaterialInterface *pUVar1;
  longlong lVar2;
  
  pUVar1 = (UMaterialInterface *)(**(code **)(this->_padding_ + 0x690))(this,0);
  if (pUVar1 != (UMaterialInterface *)0x0) {
    lVar2 = (**(code **)(pUVar1->_padding_ + 0x2d8))(pUVar1);
    if ((lVar2 != 0) && (*(char *)(lVar2 + 0x148) == '\x03')) {
      (**(code **)(pUVar1->_padding_ + 0x370))(pUVar1,0x15);
      return pUVar1;
    }
  }
  return (UMaterialInterface *)0x0;
}

// GetMaterialIndex @ 1478d6040

int __thiscall
UHeterogeneousVolumeComponent::GetMaterialIndex(UHeterogeneousVolumeComponent *this,FName param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  void *local_18;
  undefined8 local_10;
  
  local_18 = (void *)0x0;
  local_10 = 0;
  (**(code **)(this->_padding_ + 0x7f0))(this,&local_18,0);
  uVar6 = 0;
  if (0 < (int)local_10) {
    lVar5 = 0;
    iVar4 = (int)local_10;
    do {
      uVar3 = 0;
      if ((int)uVar6 < iVar4) {
        uVar3 = ~uVar6 >> 0x1f;
      }
      if (uVar3 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          iVar4 = (*pcVar1)();
          return iVar4;
        }
        iVar4 = (int)local_10;
      }
      if (*(FName *)(*(longlong *)(lVar5 + (longlong)local_18) + 0x18) == param_1)
      goto LAB_1478d60ec;
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 8;
    } while ((int)uVar6 < iVar4);
  }
  uVar6 = 0xffffffff;
LAB_1478d60ec:
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return uVar6;
}

// GetNumMaterials @ 1478d66c0

int __thiscall UHeterogeneousVolumeComponent::GetNumMaterials(UHeterogeneousVolumeComponent *this)

{
  return 1;
}

// GetPrivateStaticClass @ 1478d9230

UClass * __cdecl UHeterogeneousVolumeComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UHeterogeneousVolumeComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"HeterogeneousVolumeComponent",
               &Z_Registration_Info_UClass_UHeterogeneousVolumeComponent.InnerSingleton,
               StaticRegisterNativesUHeterogeneousVolumeComponent,0x640,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UHeterogeneousVolumeComponent>,
               InternalVTableHelperCtorCaller<UHeterogeneousVolumeComponent>,local_res8,
               UMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UHeterogeneousVolumeComponent.InnerSingleton;
}

// GetSparseVolumeTexture @ 1478db900

USparseVolumeTexture * __cdecl
UHeterogeneousVolumeComponent::GetSparseVolumeTexture
          (UMaterialInterface *param_1,int param_2,FName *param_3)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  UClass *pUVar5;
  USparseVolumeTexture *pUVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  USparseVolumeTexture *pUVar9;
  USparseVolumeTexture *local_res8;
  TArray<FMaterialParameterInfo,TSizedDefaultAllocator<32>_> local_58;
  TArray<FGuid,TSizedDefaultAllocator<32>_> local_48;
  FMemoryImageMaterialParameterInfo local_38;
  
  local_res8 = (USparseVolumeTexture *)0x0;
  if (param_1 == (UMaterialInterface *)0x0) {
    return (USparseVolumeTexture *)0x0;
  }
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  UMaterialInterface::GetAllSparseVolumeTextureParameterInfo(param_1,&local_58,&local_48);
  if ((-1 < param_2) && (param_2 < local_58.ArrayNum)) {
    pFVar7 = local_58.AllocatorInstance.Data + (longlong)param_2 * 0x10;
    local_38.Name.ComparisonIndex.Value = (uint)*(undefined8 *)pFVar7;
    local_38.Name.Number = (uint)((ulonglong)*(undefined8 *)pFVar7 >> 0x20);
    local_38.Name.DisplayIndex.Value = 0;
    local_38.Index = *(int *)(pFVar7 + 0xc);
    local_38.Association.Value = *(uchar *)(pFVar7 + 8);
    UMaterialInterface::GetSparseVolumeTextureParameterValue(param_1,&local_38,&local_res8,false);
  }
  pUVar6 = local_res8;
  if (local_res8 == (USparseVolumeTexture *)0x0) goto LAB_1478dbb04;
  pUVar5 = Z_Construct_UClass_USparseVolumeTextureFrame_NoRegister();
  pUVar9 = local_res8;
  iVar1 = (int)pUVar5->_padding_;
  if ((*(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38) < iVar1) ||
     ((longlong *)
      *(undefined1 **)(*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar1 * 8)
      != &pUVar5->_padding_)) {
LAB_1478dba9d:
    if (local_res8 == (USparseVolumeTexture *)0x0) goto LAB_1478dbb04;
  }
  else {
    if (local_res8 == (USparseVolumeTexture *)0x0) {
LAB_1478db9f5:
      pUVar9 = (USparseVolumeTexture *)0x0;
    }
    else {
      pUVar5 = Z_Construct_UClass_USparseVolumeTextureFrame_NoRegister();
      lVar2 = *(longlong *)&pUVar9->field_0x10;
      iVar1 = (int)pUVar5->_padding_;
      if ((*(int *)(lVar2 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) goto LAB_1478db9f5;
    }
    pUVar6 = *(USparseVolumeTexture **)&pUVar9->field_0x20;
    pUVar5 = Z_Construct_UClass_UStreamableSparseVolumeTexture_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if (((*(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38) < iVar1) ||
        ((longlong *)
         *(undefined1 **)
          (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
         &pUVar5->_padding_)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("FrameOuter->IsA<UStreamableSparseVolumeTexture>()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\HeterogeneousVolumeComponent.cpp"
                           ,0x1c2,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pUVar6 = (USparseVolumeTexture *)(*pcVar3)();
      return pUVar6;
    }
    pUVar5 = Z_Construct_UClass_USparseVolumeTexture_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar5->_padding_)) {
      local_res8 = (USparseVolumeTexture *)0x0;
LAB_1478dba77:
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("SparseVolumeTexture",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\HeterogeneousVolumeComponent.cpp"
                         ,0x1c4,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pUVar6 = (USparseVolumeTexture *)(*pcVar3)();
        return pUVar6;
      }
      goto LAB_1478dba9d;
    }
    local_res8 = pUVar6;
    if (pUVar6 == (USparseVolumeTexture *)0x0) goto LAB_1478dba77;
  }
  if (param_3 != (FName *)0x0) {
    uVar8 = 0;
    if (param_2 < local_58.ArrayNum) {
      uVar8 = (uint)~param_2 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      pUVar6 = (USparseVolumeTexture *)(*pcVar3)();
      return pUVar6;
    }
    *param_3 = *(FName *)(local_58.AllocatorInstance.Data + (longlong)param_2 * 0x10);
  }
LAB_1478dbb04:
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  return local_res8;
}

// GetUsedMaterials @ 1478dde40

void __thiscall
UHeterogeneousVolumeComponent::GetUsedMaterials
          (UHeterogeneousVolumeComponent *this,
          TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *param_1,bool param_2)

{
  TObjectPtr<UMaterialInstanceDynamic>_u_0 *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TObjectPtr<UMaterialInstanceDynamic>_u_0 local_18 [2];
  
  UMeshComponent::GetUsedMaterials((UMeshComponent *)this,param_1,param_2);
  local_18[0] = (TObjectPtr<UMaterialInstanceDynamic>_u_0)
                (this->MaterialInstanceDynamic).field0_0x0.DebugPtr;
  if (local_18[0].DebugPtr != (UMaterialInstanceDynamic *)0x0) {
    pTVar1 = (TObjectPtr<UMaterialInstanceDynamic>_u_0 *)(param_1->AllocatorInstance).Data;
    if ((pTVar1 <= local_18) && (local_18 < pTVar1 + param_1->ArrayMax)) {
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
    iVar4 = param_1->ArrayNum;
    if (iVar4 == param_1->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
    }
    param_1->ArrayNum = iVar4 + 1;
    ((TObjectPtr<UMaterialInstanceDynamic>_u_0 *)
    ((param_1->AllocatorInstance).Data + (longlong)iVar4 * 8))->DebugPtr =
         (UMaterialInstanceDynamic *)local_18[0];
  }
  return;
}

// IsMaterialSlotNameValid @ 1478e1300

bool __thiscall
UHeterogeneousVolumeComponent::IsMaterialSlotNameValid
          (UHeterogeneousVolumeComponent *this,FName param_1)

{
  byte extraout_var;
  
  (**(code **)(this->_padding_ + 0x698))();
  return (bool)(extraout_var >> 7 ^ 1);
}

// OnSparseVolumeTextureChanged @ 1478e62a0

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
UHeterogeneousVolumeComponent::OnSparseVolumeTextureChanged
          (UHeterogeneousVolumeComponent *this,USparseVolumeTexture *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  float fVar3;
  float fVar4;
  undefined1 local_18 [16];
  
  if (param_1 != this->PreviousSVT) {
    if (param_1 == (USparseVolumeTexture *)0x0) {
      (this->VolumeResolution).field0_0x0._s_0.X = 0x80;
      (this->VolumeResolution).field0_0x0._s_0.Y = 0x80;
      fVar4 = 0.0;
      (this->VolumeResolution).field0_0x0._s_0.Z = 0x80;
      this->StartFrame = 0.0;
      fVar3 = 0.0;
    }
    else {
      puVar2 = (undefined8 *)(**(code **)(*(longlong *)param_1 + 0x2e0))(param_1,local_18);
      *(undefined8 *)&(this->VolumeResolution).field0_0x0 = *puVar2;
      (this->VolumeResolution).field0_0x0._s_0.Z = *(int *)(puVar2 + 1);
      this->StartFrame = 0.0;
      iVar1 = (**(code **)(*(longlong *)param_1 + 0x2c8))(param_1);
      fVar4 = (float)(iVar1 + -1);
      fVar3 = fVar4;
      if (this->Frame <= fVar4) {
        fVar3 = this->Frame;
      }
      if (fVar3 <= this->StartFrame) {
        fVar3 = this->StartFrame;
      }
    }
    this->EndFrame = fVar4;
    this->Frame = fVar3;
    this->PreviousSVT = param_1;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  }
  return;
}

// Play @ 1478e7390

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UHeterogeneousVolumeComponent::Play(UHeterogeneousVolumeComponent *this)

{
  bool bVar1;
  
  bVar1 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)this);
  if (((!bVar1) && ((this->_padding_ & 1) != 0)) &&
     (*(char *)((longlong)&this->_padding_ + 3) == '\0')) {
    return;
  }
  this->bPlaying = 1;
  this->Frame = 0.0;
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  return;
}

// PostInitProperties @ 1478e7450

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
UHeterogeneousVolumeComponent::PostInitProperties(UHeterogeneousVolumeComponent *this)

{
  bool bVar1;
  UMaterialInterface *pUVar2;
  UMaterialInstanceDynamic *pUVar3;
  
  UActorComponent::PostInitProperties((UActorComponent *)this);
  FBodyInstance::ApplyDeferredCollisionProfileName((FBodyInstance *)&this->_padding_);
  bVar1 = IsInGameThread();
  if (bVar1) {
    (this->MaterialInstanceDynamic).field0_0x0.DebugPtr = (UMaterialInstanceDynamic *)0x0;
    pUVar2 = GetHeterogeneousVolumeMaterial(this);
    if (pUVar2 != (UMaterialInterface *)0x0) {
      pUVar3 = CreateOrCastToMID(pUVar2);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar3 != (UMaterialInstanceDynamic *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      (this->MaterialInstanceDynamic).field0_0x0.DebugPtr = pUVar3;
    }
  }
  return;
}

// PostLoad @ 1478e7590

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UHeterogeneousVolumeComponent::PostLoad(UHeterogeneousVolumeComponent *this)

{
  UMaterialInterface *pUVar1;
  longlong lVar2;
  UMaterialInstanceDynamic *pUVar3;
  
  UPrimitiveComponent::PostLoad((UPrimitiveComponent *)this);
  (this->MaterialInstanceDynamic).field0_0x0.DebugPtr = (UMaterialInstanceDynamic *)0x0;
  pUVar1 = (UMaterialInterface *)(**(code **)(this->_padding_ + 0x690))(this,0);
  if (pUVar1 != (UMaterialInterface *)0x0) {
    lVar2 = (**(code **)(pUVar1->_padding_ + 0x2d8))(pUVar1);
    if ((lVar2 != 0) && (*(char *)(lVar2 + 0x148) == '\x03')) {
      (**(code **)(pUVar1->_padding_ + 0x370))(pUVar1,0x15);
      pUVar3 = CreateOrCastToMID(pUVar1);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar3 != (UMaterialInstanceDynamic *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      (this->MaterialInstanceDynamic).field0_0x0.DebugPtr = pUVar3;
    }
  }
  return;
}

// PostReinitProperties @ 1478e7b10

void __thiscall
UHeterogeneousVolumeComponent::PostReinitProperties(UHeterogeneousVolumeComponent *this)

{
  bool bVar1;
  UMaterialInterface *pUVar2;
  UMaterialInstanceDynamic *pUVar3;
  
  UObject::PostReinitProperties((UObject *)this);
  bVar1 = IsInGameThread();
  if (bVar1) {
    (this->MaterialInstanceDynamic).field0_0x0.DebugPtr = (UMaterialInstanceDynamic *)0x0;
    pUVar2 = GetHeterogeneousVolumeMaterial(this);
    if (pUVar2 != (UMaterialInterface *)0x0) {
      pUVar3 = CreateOrCastToMID(pUVar2);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar3 != (UMaterialInstanceDynamic *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      (this->MaterialInstanceDynamic).field0_0x0.DebugPtr = pUVar3;
    }
  }
  return;
}

// SetEndFrame @ 1478f2280

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
UHeterogeneousVolumeComponent::SetEndFrame(UHeterogeneousVolumeComponent *this,float param_1)

{
  bool bVar1;
  
  bVar1 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)this);
  if ((((bVar1) || ((this->_padding_ & 1) == 0)) ||
      (*(char *)((longlong)&this->_padding_ + 3) != '\0')) && (param_1 != this->EndFrame)) {
    this->EndFrame = param_1;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  }
  return;
}

// SetFrame @ 1478f29d0

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
UHeterogeneousVolumeComponent::SetFrame(UHeterogeneousVolumeComponent *this,float param_1)

{
  bool bVar1;
  
  bVar1 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)this);
  if ((((bVar1) || ((this->_padding_ & 1) == 0)) ||
      (*(char *)((longlong)&this->_padding_ + 3) != '\0')) && (param_1 != this->Frame)) {
    this->Frame = param_1;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  }
  return;
}

// SetFrameRate @ 1478f2a30

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
UHeterogeneousVolumeComponent::SetFrameRate(UHeterogeneousVolumeComponent *this,float param_1)

{
  bool bVar1;
  
  bVar1 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)this);
  if ((((bVar1) || ((this->_padding_ & 1) == 0)) ||
      (*(char *)((longlong)&this->_padding_ + 3) != '\0')) && (param_1 != this->FrameRate)) {
    this->FrameRate = param_1;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  }
  return;
}

// SetLooping @ 1478f3990

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
UHeterogeneousVolumeComponent::SetLooping(UHeterogeneousVolumeComponent *this,bool param_1)

{
  bool bVar1;
  
  bVar1 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)this);
  if ((((bVar1) || ((this->_padding_ & 1) == 0)) ||
      (*(char *)((longlong)&this->_padding_ + 3) != '\0')) &&
     (ZPULL(*(undefined4 *)&this->field_0x610,1,1) != (uint)param_1)) {
    *(uint *)&this->field_0x610 =
         *(undefined4 *)&this->field_0x610 & 0xfffffffd | (uint)param_1 + (uint)param_1;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  }
  return;
}

// SetMaterial @ 1478f3a60

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
UHeterogeneousVolumeComponent::SetMaterial
          (UHeterogeneousVolumeComponent *this,int param_1,UMaterialInterface *param_2)

{
  int iVar1;
  UMaterialInterface *pUVar2;
  UMaterialInstanceDynamic *pUVar3;
  USparseVolumeTexture *pUVar4;
  undefined8 *puVar5;
  float fVar6;
  float fVar7;
  undefined1 local_18 [16];
  
  UMeshComponent::SetMaterial((UMeshComponent *)this,param_1,param_2);
  if ((param_2 != (UMaterialInterface *)0x0) && (param_1 == 0)) {
    (this->MaterialInstanceDynamic).field0_0x0.DebugPtr = (UMaterialInstanceDynamic *)0x0;
    pUVar2 = GetHeterogeneousVolumeMaterial(this);
    if (pUVar2 != (UMaterialInterface *)0x0) {
      pUVar3 = CreateOrCastToMID(pUVar2);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar3 != (UMaterialInstanceDynamic *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      (this->MaterialInstanceDynamic).field0_0x0.DebugPtr = pUVar3;
    }
    pUVar4 = GetSparseVolumeTexture(pUVar2,0,(FName *)0x0);
    if (pUVar4 != this->PreviousSVT) {
      if (pUVar4 == (USparseVolumeTexture *)0x0) {
        (this->VolumeResolution).field0_0x0._s_0.X = 0x80;
        (this->VolumeResolution).field0_0x0._s_0.Y = 0x80;
        fVar7 = 0.0;
        (this->VolumeResolution).field0_0x0._s_0.Z = 0x80;
        this->StartFrame = 0.0;
        fVar6 = 0.0;
      }
      else {
        puVar5 = (undefined8 *)(**(code **)(*(longlong *)pUVar4 + 0x2e0))(pUVar4,local_18);
        *(undefined8 *)&(this->VolumeResolution).field0_0x0 = *puVar5;
        (this->VolumeResolution).field0_0x0._s_0.Z = *(int *)(puVar5 + 1);
        this->StartFrame = 0.0;
        iVar1 = (**(code **)(*(longlong *)pUVar4 + 0x2c8))(pUVar4);
        fVar7 = (float)(iVar1 + -1);
        fVar6 = fVar7;
        if (this->Frame <= fVar7) {
          fVar6 = this->Frame;
        }
        if (fVar6 <= this->StartFrame) {
          fVar6 = this->StartFrame;
        }
      }
      this->EndFrame = fVar7;
      this->Frame = fVar6;
      this->PreviousSVT = pUVar4;
      UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
    }
  }
  return;
}

// SetPlaying @ 1478f47a0

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
UHeterogeneousVolumeComponent::SetPlaying(UHeterogeneousVolumeComponent *this,bool param_1)

{
  bool bVar1;
  
  bVar1 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)this);
  if (((bVar1) || ((this->_padding_ & 1) == 0)) ||
     (*(char *)((longlong)&this->_padding_ + 3) != '\0')) {
    if (ZPULL(*(undefined4 *)&this->field_0x610,0,1) != (uint)param_1) {
      *(uint *)&this->field_0x610 = *(undefined4 *)&this->field_0x610 & 0xfffffffe | (uint)param_1;
      UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
    }
  }
  return;
}

// SetStartFrame @ 1478f54c0

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
UHeterogeneousVolumeComponent::SetStartFrame(UHeterogeneousVolumeComponent *this,float param_1)

{
  bool bVar1;
  
  bVar1 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)this);
  if ((((bVar1) || ((this->_padding_ & 1) == 0)) ||
      (*(char *)((longlong)&this->_padding_ + 3) != '\0')) && (param_1 != this->StartFrame)) {
    this->StartFrame = param_1;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  }
  return;
}

// SetStreamingMipBias @ 1478f5520

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
UHeterogeneousVolumeComponent::SetStreamingMipBias(UHeterogeneousVolumeComponent *this,int param_1)

{
  bool bVar1;
  
  bVar1 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)this);
  if ((((bVar1) || ((this->_padding_ & 1) == 0)) ||
      (*(char *)((longlong)&this->_padding_ + 3) != '\0')) &&
     ((float)param_1 != this->StreamingMipBias)) {
    this->StreamingMipBias = (float)param_1;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  }
  return;
}

// SetVolumeResolution @ 1478f66c0

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
UHeterogeneousVolumeComponent::SetVolumeResolution
          (UHeterogeneousVolumeComponent *this,TIntVector3<int> *param_1)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)this);
  if ((((bVar2) || ((this->_padding_ & 1) == 0)) ||
      (*(char *)((longlong)&this->_padding_ + 3) != '\0')) &&
     ((((this->VolumeResolution).field0_0x0._s_0.X != (param_1->field0_0x0)._s_0.X ||
       ((this->VolumeResolution).field0_0x0._s_0.Y != (param_1->field0_0x0)._s_0.Y)) ||
      ((this->VolumeResolution).field0_0x0._s_0.Z != (param_1->field0_0x0)._s_0.Z)))) {
    iVar1 = (param_1->field0_0x0)._s_0.Z;
    *(undefined8 *)&(this->VolumeResolution).field0_0x0 = *(undefined8 *)&param_1->field0_0x0;
    (this->VolumeResolution).field0_0x0._s_0.Z = iVar1;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  }
  return;
}

// ShouldRenderSelected @ 1478f7520

bool __thiscall
UHeterogeneousVolumeComponent::ShouldRenderSelected(UHeterogeneousVolumeComponent *this)

{
  return true;
}

// StaticRegisterNativesUHeterogeneousVolumeComponent @ 1478f7e90

void __cdecl UHeterogeneousVolumeComponent::StaticRegisterNativesUHeterogeneousVolumeComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 9;
  local_18.DataPtr = Z_Construct_UClass_UHeterogeneousVolumeComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// TickComponent @ 1478f9090

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
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UHeterogeneousVolumeComponent::TickComponent
          (UHeterogeneousVolumeComponent *this,float param_1,ELevelTick param_2,
          FActorComponentTickFunction *param_3)

{
  int *piVar1;
  float fVar2;
  undefined4 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  EShaderPlatform EVar16;
  undefined4 uVar17;
  int iVar18;
  FName *pFVar19;
  FThreadSafeStaticStat<FStat_STAT_HeterogeneousVolumeComponentTick> FVar20;
  UMaterialInterface *pUVar21;
  UMaterialInstanceDynamic *pUVar22;
  UWorld *pUVar23;
  USparseVolumeTexture *this_00;
  USparseVolumeTextureFrame *pUVar24;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  uint uVar25;
  int iVar26;
  uint uVar27;
  USparseVolumeTextureFrame *pUVar28;
  undefined4 uVar29;
  LARGE_INTEGER LVar30;
  longlong lVar31;
  float fVar32;
  float fVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  undefined1 auStackY_1b8 [32];
  LARGE_INTEGER local_158;
  FStatMessage local_150;
  FName local_140;
  LARGE_INTEGER local_138;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  if (!__CsvProfilerStat634) {
    FCsvProfilerTrace::OutputInlineStatExclusive("Effects");
    __CsvProfilerStat634 = true;
  }
  FCsvProfiler::BeginExclusiveStat("Effects","CSV_Effects");
  uVar29 = 0;
  FVar20 = StatPtr_STAT_HeterogeneousVolumeComponentTick;
  if (StatPtr_STAT_HeterogeneousVolumeComponentTick ==
      (FThreadSafeStaticStat<FStat_STAT_HeterogeneousVolumeComponentTick>)0x0) {
    pFVar19 = ::FName::FName(&local_140,"STAT_HeterogeneousVolumeComponentTick");
    FVar20 = (FThreadSafeStaticStat<FStat_STAT_HeterogeneousVolumeComponentTick>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_HeterogeneousVolumeComponentTick,
                        *pFVar19,L"Component Tick","STATGROUP_HeterogeneousVolumesGT",
                        "STATCAT_HeterogeneousVolumes",L"Heterogeneous Volumes GT",true,true,
                        ST_int64,true,false,MCR_Invalid);
  }
  local_138.s.LowPart = 0;
  local_138.s.HighPart = 0;
  LVar30 = *(LARGE_INTEGER *)FVar20;
  bVar12 = false;
  bVar14 = false;
  if ((LVar30.s.LowPart == 0) && (LVar30.s.HighPart == 0)) {
LAB_1478f922c:
    bVar13 = false;
    LVar30 = local_138;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_158.QuadPart = local_158.QuadPart & 0xffffffff00000000;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_158.s,(char *)*(FName *)((longlong)FVar20 + 0x10));
      bVar12 = false;
      bVar14 = true;
      if (-1 < CpuChannel->Enabled) {
        local_158 = LVar30;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_158.s,(wchar_t *)*(FName *)((longlong)FVar20 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\HeterogeneousVolumeComponent.cpp"
                   ,0x27b);
        bVar12 = true;
        bVar14 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1478f922c;
    local_158 = LVar30;
    local_138 = LVar30;
    FThreadStats::AddMessage((FName)LVar30.s,CycleScopeStart);
    bVar13 = true;
    uVar29 = local_138._0_4_;
  }
  UActorComponent::TickComponent((UActorComponent *)this,param_1,param_2,param_3);
  if (((this->MaterialInstanceDynamic).field0_0x0.DebugPtr == (UMaterialInstanceDynamic *)0x0) &&
     (pUVar21 = GetHeterogeneousVolumeMaterial(this), pUVar21 != (UMaterialInterface *)0x0)) {
    pUVar22 = CreateOrCastToMID(pUVar21);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar22 != (UMaterialInstanceDynamic *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar22);
    }
    (this->MaterialInstanceDynamic).field0_0x0.DebugPtr = pUVar22;
  }
  bVar15 = USceneComponent::ShouldRender((USceneComponent *)this);
  if ((!bVar15) && ((this->_padding_ & 0x2000000000000000) == 0)) goto LAB_1478f9664;
  pUVar23 = (UWorld *)this->_padding_;
  if (pUVar23 == (UWorld *)0x0) {
    pUVar23 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
  }
  EVar16 = FSceneInterface::GetShaderPlatform(pUVar23->Scene);
  bVar15 = DoesRuntimeSupportHeterogeneousVolumes(EVar16);
  if ((!bVar15) ||
     ((this->MaterialInstanceDynamic).field0_0x0.DebugPtr == (UMaterialInstanceDynamic *)0x0))
  goto LAB_1478f9664;
  local_158.s.LowPart = 0;
  local_158.s.HighPart = 0;
  pUVar21 = GetHeterogeneousVolumeMaterial(this);
  this_00 = GetSparseVolumeTexture(pUVar21,0,(FName *)&local_158.s);
  if (this_00 == (USparseVolumeTexture *)0x0) goto LAB_1478f9664;
  (**(code **)(*(longlong *)this_00 + 0x2c8))(this_00);
  if (this->bPlaying != 0) {
    this->Frame = param_1 * this->FrameRate + this->Frame;
  }
  fVar32 = this->EndFrame;
  fVar33 = this->Frame;
  fVar2 = this->StartFrame;
  if (this->bLooping == 0) {
    if (fVar32 <= fVar33) {
      fVar33 = fVar32;
    }
    if (fVar33 <= fVar2) {
      fVar33 = fVar2;
    }
  }
  else {
    fVar32 = FGenericPlatformMath::Fmod(fVar33 - fVar2,(fVar32 - fVar2) + __real_3f800000);
    fVar33 = fVar32 + fVar2;
  }
  this->Frame = fVar33;
  fVar32 = USparseVolumeTexture::GetOptimalStreamingMipLevel
                     (this_00,(TBoxSphereBounds<double,double> *)&this->_padding_,
                      this->StreamingMipBias);
  uVar25 = ((uint)((ulonglong)this >> 0x14) & 0xffff ^ (uint)((ulonglong)this >> 4)) * -0x7a143595;
  uVar25 = (uVar25 >> 0xd ^ uVar25) * -0x3d4d51cb;
  pUVar24 = USparseVolumeTextureFrame::GetFrameAndIssueStreamingRequest
                      (this_00,uVar25 >> 0x10 ^ uVar25,this->FrameRate,this->Frame,fVar32,
                       this->bIssueBlockingRequests,this->bPlaying);
  if (pUVar24 != (USparseVolumeTextureFrame *)0x0) {
    (**(code **)(*(longlong *)pUVar24 + 0x2e0))(pUVar24,&local_150);
    if ((((this->VolumeResolution).field0_0x0._s_0.X != local_150.StatData.Pad._0_4_) ||
        ((this->VolumeResolution).field0_0x0._s_0.Y != local_150.StatData.Pad._4_4_)) ||
       ((this->VolumeResolution).field0_0x0._s_0.Z != local_150.NameAndInfo.Index.Value)) {
      *(uchar (*) [8])&(this->VolumeResolution).field0_0x0 = local_150.StatData.Pad;
      (this->VolumeResolution).field0_0x0._s_0.Z = local_150.NameAndInfo.Index.Value;
      UActorComponent::MarkRenderTransformDirty((UActorComponent *)this);
    }
    pUVar28 = pUVar24;
    uVar17 = (**(code **)(*(longlong *)pUVar24 + 0x2d8))(pUVar24,&local_128);
    dVar34 = local_f8 - (this->FrameTransform).Translation.ZW.m128d_f64[0];
    dVar37 = dStack_f0 - (this->FrameTransform).Translation.ZW.m128d_f64[1];
    lVar31 = -(ulonglong)
              (__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar37 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar37,0) & _UNK_15061cc88));
    auVar4._8_4_ = (int)lVar31;
    auVar4._0_8_ = -(ulonglong)
                    (__real_3f1a36e2e0000000 <
                    (double)CONCAT44((uint)((ulonglong)dVar34 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar34,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
                    );
    auVar4._12_4_ = (int)((ulonglong)lVar31 >> 0x20);
    uVar25 = movmskpd((int)pUVar28,auVar4);
    dVar34 = local_108 - (this->FrameTransform).Translation.XY.m128d_f64[0];
    dVar37 = dStack_100 - (this->FrameTransform).Translation.XY.m128d_f64[1];
    lVar31 = -(ulonglong)
              (__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar37 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar37,0) & _UNK_15061cc88));
    auVar9._8_4_ = (int)lVar31;
    auVar9._0_8_ = -(ulonglong)
                    (__real_3f1a36e2e0000000 <
                    (double)CONCAT44((uint)((ulonglong)dVar34 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar34,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
                    );
    auVar9._12_4_ = (int)((ulonglong)lVar31 >> 0x20);
    iVar18 = movmskpd(uVar17,auVar9);
    if ((uVar25 & 0x3fffffff) == 0 && iVar18 == 0) {
      dVar35 = local_118 - (this->FrameTransform).Rotation.ZW.m128d_f64[0];
      dVar38 = dStack_110 - (this->FrameTransform).Rotation.ZW.m128d_f64[1];
      dVar34 = local_128 + (this->FrameTransform).Rotation.XY.m128d_f64[0];
      dVar37 = dStack_120 + (this->FrameTransform).Rotation.XY.m128d_f64[1];
      lVar31 = -(ulonglong)
                (__real_3f1a36e2e0000000 <
                (double)CONCAT44((uint)((ulonglong)dVar38 >> 0x20) & _UNK_15061cc8c,
                                 SUB84(dVar38,0) & _UNK_15061cc88));
      auVar5._8_4_ = (int)lVar31;
      auVar5._0_8_ = -(ulonglong)
                      (__real_3f1a36e2e0000000 <
                      (double)CONCAT44((uint)((ulonglong)dVar35 >> 0x20) &
                                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                       SUB84(dVar35,0) &
                                       (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      auVar5._12_4_ = (int)((ulonglong)lVar31 >> 0x20);
      iVar26 = movmskpd(0,auVar5);
      dVar36 = local_128 - (this->FrameTransform).Rotation.XY.m128d_f64[0];
      dVar39 = dStack_120 - (this->FrameTransform).Rotation.XY.m128d_f64[1];
      dVar35 = local_118 + (this->FrameTransform).Rotation.ZW.m128d_f64[0];
      dVar38 = dStack_110 + (this->FrameTransform).Rotation.ZW.m128d_f64[1];
      lVar31 = -(ulonglong)
                (__real_3f1a36e2e0000000 <
                (double)CONCAT44((uint)((ulonglong)dVar39 >> 0x20) & _UNK_15061cc8c,
                                 SUB84(dVar39,0) & _UNK_15061cc88));
      auVar6._8_4_ = (int)lVar31;
      auVar6._0_8_ = -(ulonglong)
                      (__real_3f1a36e2e0000000 <
                      (double)CONCAT44((uint)((ulonglong)dVar36 >> 0x20) &
                                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                       SUB84(dVar36,0) &
                                       (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      auVar6._12_4_ = (int)((ulonglong)lVar31 >> 0x20);
      uVar25 = movmskpd(iVar18,auVar6);
      uVar27 = iVar26 << 2 | uVar25;
      if (uVar27 != 0) {
        lVar31 = -(ulonglong)
                  (__real_3f1a36e2e0000000 <
                  (double)CONCAT44((uint)((ulonglong)dVar38 >> 0x20) & _UNK_15061cc8c,
                                   SUB84(dVar38,0) & _UNK_15061cc88));
        auVar7._8_4_ = (int)lVar31;
        auVar7._0_8_ = -(ulonglong)
                        (__real_3f1a36e2e0000000 <
                        (double)CONCAT44((uint)((ulonglong)dVar35 >> 0x20) &
                                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                         SUB84(dVar35,0) &
                                         (uint)__xmm_7fffffffffffffff7fffffffffffffff));
        auVar7._12_4_ = (int)((ulonglong)lVar31 >> 0x20);
        uVar27 = movmskpd(uVar27,auVar7);
        lVar31 = -(ulonglong)
                  (__real_3f1a36e2e0000000 <
                  (double)CONCAT44((uint)((ulonglong)dVar37 >> 0x20) & _UNK_15061cc8c,
                                   SUB84(dVar37,0) & _UNK_15061cc88));
        auVar10._8_4_ = (int)lVar31;
        auVar10._0_8_ =
             -(ulonglong)
              (__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar34 >> 0x20) &
                               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                               SUB84(dVar34,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
        auVar10._12_4_ = (int)((ulonglong)lVar31 >> 0x20);
        uVar25 = movmskpd(uVar25,auVar10);
        if ((uVar27 & 0x3fffffff) != 0 || uVar25 != 0) goto LAB_1478f95e3;
      }
      dVar34 = local_d8 - (this->FrameTransform).Scale3D.ZW.m128d_f64[0];
      dVar37 = dStack_d0 - (this->FrameTransform).Scale3D.ZW.m128d_f64[1];
      lVar31 = -(ulonglong)
                (__real_3f1a36e2e0000000 <
                (double)CONCAT44((uint)((ulonglong)dVar37 >> 0x20) & _UNK_15061cc8c,
                                 SUB84(dVar37,0) & _UNK_15061cc88));
      auVar8._8_4_ = (int)lVar31;
      auVar8._0_8_ = -(ulonglong)
                      (__real_3f1a36e2e0000000 <
                      (double)CONCAT44((uint)((ulonglong)dVar34 >> 0x20) &
                                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                       SUB84(dVar34,0) &
                                       (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      auVar8._12_4_ = (int)((ulonglong)lVar31 >> 0x20);
      uVar27 = movmskpd(0,auVar8);
      dVar34 = local_e8 - (this->FrameTransform).Scale3D.XY.m128d_f64[0];
      dVar37 = dStack_e0 - (this->FrameTransform).Scale3D.XY.m128d_f64[1];
      lVar31 = -(ulonglong)
                (__real_3f1a36e2e0000000 <
                (double)CONCAT44((uint)((ulonglong)dVar37 >> 0x20) & _UNK_15061cc8c,
                                 SUB84(dVar37,0) & _UNK_15061cc88));
      auVar11._8_4_ = (int)lVar31;
      auVar11._0_8_ =
           -(ulonglong)
            (__real_3f1a36e2e0000000 <
            (double)CONCAT44((uint)((ulonglong)dVar34 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar34,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      auVar11._12_4_ = (int)((ulonglong)lVar31 >> 0x20);
      iVar18 = movmskpd(uVar25,auVar11);
      if ((uVar27 & 0x3fffffff) == 0 && iVar18 == 0) goto LAB_1478f9650;
    }
LAB_1478f95e3:
    (this->FrameTransform).Rotation.XY.m128d_f64[0] = local_128;
    (this->FrameTransform).Rotation.XY.m128d_f64[1] = dStack_120;
    (this->FrameTransform).Rotation.ZW.m128d_f64[0] = local_118;
    (this->FrameTransform).Rotation.ZW.m128d_f64[1] = dStack_110;
    (this->FrameTransform).Translation.XY.m128d_f64[0] = local_108;
    (this->FrameTransform).Translation.XY.m128d_f64[1] = dStack_100;
    (this->FrameTransform).Translation.ZW.m128d_f64[0] = local_f8;
    (this->FrameTransform).Translation.ZW.m128d_f64[1] = dStack_f0;
    (this->FrameTransform).Scale3D.XY.m128d_f64[0] = local_e8;
    (this->FrameTransform).Scale3D.XY.m128d_f64[1] = dStack_e0;
    (this->FrameTransform).Scale3D.ZW.m128d_f64[0] = local_d8;
    (this->FrameTransform).Scale3D.ZW.m128d_f64[1] = dStack_d0;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  }
LAB_1478f9650:
  UMaterialInstanceDynamic::SetSparseVolumeTextureParameterValue
            ((this->MaterialInstanceDynamic).field0_0x0.DebugPtr,(FName)local_158.s,
             (USparseVolumeTexture *)pUVar24);
LAB_1478f9664:
  if (bVar14) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar13) && ((FName)LVar30.QuadPart != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_150.NameAndInfo.Number = LVar30.s.HighPart & 0xffff6fffU | 0x6000;
      local_150.NameAndInfo.Index.Value = uVar29;
      QueryPerformanceCounter(&local_158);
      local_150.StatData.Pad = (uchar  [8])(local_158.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(this_01,&local_150);
      piVar1 = &this_01->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  FCsvProfiler::EndExclusiveStat("Effects");
  return;
}

// execPlay @ 147907790

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl UHeterogeneousVolumeComponent::execPlay(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)param_1);
  if (((!bVar1) && ((param_1[3].field_0x20 & 1) != 0)) && (param_1[10].field_0x1b == '\0')) {
    return;
  }
  *(uint *)&param_1[0x26].field_0x20 = *(uint *)&param_1[0x26].field_0x20 | 1;
  *(undefined4 *)&param_1[0x26].field_0x10 = 0;
  UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  return;
}

// execSetEndFrame @ 14790c3d0

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
UHeterogeneousVolumeComponent::execSetEndFrame(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  bool bVar3;
  float local_res10 [6];
  
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  fVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar3 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)param_1);
  if ((((bVar3) || ((param_1[3].field_0x20 & 1) == 0)) || (param_1[10].field_0x1b != '\0')) &&
     (fVar2 != *(float *)&param_1[0x26].field_0x1c)) {
    *(float *)&param_1[0x26].field_0x1c = fVar2;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  }
  return;
}

// execSetFrame @ 14790d4f0

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
UHeterogeneousVolumeComponent::execSetFrame(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  bool bVar3;
  float local_res10 [6];
  
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  fVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar3 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)param_1);
  if ((((bVar3) || ((param_1[3].field_0x20 & 1) == 0)) || (param_1[10].field_0x1b != '\0')) &&
     (fVar2 != *(float *)&param_1[0x26].field_0x10)) {
    *(float *)&param_1[0x26].field_0x10 = fVar2;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  }
  return;
}

// execSetFrameRate @ 14790d5b0

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
UHeterogeneousVolumeComponent::execSetFrameRate(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  bool bVar3;
  float local_res10 [6];
  
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  fVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar3 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)param_1);
  if ((((bVar3) || ((param_1[3].field_0x20 & 1) == 0)) || (param_1[10].field_0x1b != '\0')) &&
     (fVar2 != *(float *)&param_1[0x26].field_0x14)) {
    *(float *)&param_1[0x26].field_0x14 = fVar2;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  }
  return;
}

// execSetLooping @ 14790f420

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
UHeterogeneousVolumeComponent::execSetLooping(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  bool bVar3;
  int local_res10 [2];
  
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar3 = local_res10[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)param_1);
  if ((((bVar2) || ((param_1[3].field_0x20 & 1) == 0)) || (param_1[10].field_0x1b != '\0')) &&
     ((*(uint *)&param_1[0x26].field_0x20 >> 1 & 1) != (uint)bVar3)) {
    *(uint *)&param_1[0x26].field_0x20 =
         *(uint *)&param_1[0x26].field_0x20 & 0xfffffffd | (uint)bVar3 + (uint)bVar3;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  }
  return;
}

// execSetPlaying @ 147910c10

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
UHeterogeneousVolumeComponent::execSetPlaying(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  bool bVar3;
  int local_res10 [2];
  
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar3 = local_res10[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)param_1);
  if (((bVar2) || ((param_1[3].field_0x20 & 1) == 0)) || (param_1[10].field_0x1b != '\0')) {
    if ((*(uint *)&param_1[0x26].field_0x20 & 1) != (uint)bVar3) {
      *(uint *)&param_1[0x26].field_0x20 =
           *(uint *)&param_1[0x26].field_0x20 & 0xfffffffe | (uint)bVar3;
      UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
    }
  }
  return;
}

// execSetStartFrame @ 1479122a0

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
UHeterogeneousVolumeComponent::execSetStartFrame(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  bool bVar3;
  float local_res10 [6];
  
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  fVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar3 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)param_1);
  if ((((bVar3) || ((param_1[3].field_0x20 & 1) == 0)) || (param_1[10].field_0x1b != '\0')) &&
     (fVar2 != *(float *)&param_1[0x26].field_0x18)) {
    *(float *)&param_1[0x26].field_0x18 = fVar2;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  }
  return;
}

// execSetStreamingMipBias @ 1479123f0

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
UHeterogeneousVolumeComponent::execSetStreamingMipBias
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  bool bVar3;
  int local_res10 [2];
  
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  iVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar3 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)param_1);
  if ((((bVar3) || ((param_1[3].field_0x20 & 1) == 0)) || (param_1[10].field_0x1b != '\0')) &&
     ((float)iVar2 != *(float *)&param_1[0x26].field_0x24)) {
    *(float *)&param_1[0x26].field_0x24 = (float)iVar2;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  }
  return;
}

// execSetVolumeResolution @ 147913510

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
UHeterogeneousVolumeComponent::execSetVolumeResolution
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  undefined8 local_28;
  int local_20;
  undefined8 local_18;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_18 = local_28;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)param_1);
  if ((((bVar2) || ((param_1[3].field_0x20 & 1) == 0)) || (param_1[10].field_0x1b != '\0')) &&
     (((*(int *)&param_1[0x23].field_0x18 != (int)local_18 ||
       (*(int *)&param_1[0x23].field_0x1c != local_18._4_4_)) ||
      (*(int *)&param_1[0x23].field_0x20 != local_20)))) {
    *(undefined8 *)&param_1[0x23].field_0x18 = local_28;
    *(int *)&param_1[0x23].field_0x20 = local_20;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  }
  return;
}

