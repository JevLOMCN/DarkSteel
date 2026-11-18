// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FastGeoStreaming
// Functions: 6

// CalcBounds<FFastGeoInstancedSkinnedMeshComponent> @ 14da0b790

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TBoxSphereBounds<double,double> * __cdecl
FInstancedSkinnedMeshComponentHelper::CalcBounds<FFastGeoInstancedSkinnedMeshComponent>
          (TBoxSphereBounds<double,double> *__return_storage_ptr__,
          FFastGeoInstancedSkinnedMeshComponent *param_1,TTransform<double> *param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  double dVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  bool bVar13;
  uint uVar14;
  FSkinnedMeshSceneProxyDesc *this;
  USkinnedAsset *pUVar15;
  double *pdVar16;
  TBoxSphereBounds<double,double> *pTVar17;
  TMatrix<double> *pTVar18;
  TVector<double>_u_0 *pTVar19;
  uint uVar20;
  longlong lVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  double dVar24;
  undefined1 auStackY_418 [32];
  TVector<double>_u_0 local_3e8;
  double dStack_3d0;
  double local_3c8;
  double dStack_3c0;
  double local_3b8;
  char local_3b0;
  TVector<double>_u_0 local_3a8;
  double local_390;
  double local_388;
  double local_380;
  double local_378;
  TVector<double>_u_0 local_370;
  undefined8 uStack_358;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined8 local_340;
  undefined1 local_338 [56];
  TBoxSphereBounds<double,double> local_300;
  TMatrix<double> local_2c8;
  TVector<double>_u_0 local_248;
  double local_230;
  double local_228;
  double local_220;
  undefined1 local_218;
  TVector<double>_u_0 local_210;
  double local_1f8;
  double local_1f0;
  double local_1e8;
  TTransform<double> local_1d8;
  TTransform<double> local_178;
  TMatrix<double> local_118;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_418;
  this = (FSkinnedMeshSceneProxyDesc *)(**(code **)(param_1->_padding_ + 0x118))(param_1);
  pUVar15 = FSkinnedMeshSceneProxyDesc::GetSkinnedAsset(this);
  if ((pUVar15 == (USkinnedAsset *)0x0) || ((param_1->InstanceData).ArrayNum < 1)) {
    FFastGeoSkinnedMeshComponentBase::CalcMeshBound
              ((FFastGeoSkinnedMeshComponentBase *)param_1,__return_storage_ptr__,
               &UE::Math::TVector<float>::ZeroVector,false,param_2);
  }
  else {
    UE::Math::TTransform<double>::ToMatrixWithScale(param_2,&local_2c8);
    local_3b0 = '\0';
    UInstancedSkinnedMeshComponent::ShouldUseAnimationBounds();
    pdVar16 = (double *)(**(code **)(*(longlong *)pUVar15 + 0x3e0))(pUVar15,local_338);
    dVar12 = __real_3fd0000000000000;
    dVar3 = __real_3fe0000000000000;
    uVar20 = 0;
    local_218 = 1;
    local_248._s_0.X = *pdVar16 - pdVar16[3];
    local_248._s_0.Y = pdVar16[1] - pdVar16[4];
    local_230 = pdVar16[3] + *pdVar16;
    local_228 = pdVar16[4] + pdVar16[1];
    local_248._s_0.Z = pdVar16[2] - pdVar16[5];
    local_220 = pdVar16[5] + pdVar16[2];
    if (0 < (param_1->InstanceData).ArrayNum) {
      lVar21 = 0;
      do {
        uVar14 = 0;
        if ((int)uVar20 < (param_1->InstanceData).ArrayNum) {
          uVar14 = ~uVar20 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar5 = (code *)swi(3);
          pTVar17 = (TBoxSphereBounds<double,double> *)(*pcVar5)();
          return pTVar17;
        }
        pFVar4 = (param_1->InstanceData).AllocatorInstance.Data;
        pFVar1 = pFVar4 + lVar21;
        pFVar2 = pFVar4 + lVar21 + 0x20;
        pFVar4 = pFVar4 + lVar21 + 0x10;
        local_178.Rotation.XY.m128d_f64[0] = (double)*(float *)pFVar1;
        local_178.Rotation.XY.m128d_f64[1] = (double)*(float *)(pFVar1 + 4);
        local_178.Rotation.ZW.m128d_f64[0] = (double)*(float *)(pFVar1 + 8);
        local_178.Rotation.ZW.m128d_f64[1] = (double)*(float *)(pFVar1 + 0xc);
        local_178.Translation.ZW.m128d_f64[0] = (double)*(float *)(pFVar4 + 8);
        local_178.Translation.ZW.m128d_f64[1] = (double)*(float *)(pFVar4 + 0xc);
        local_178.Translation.XY.m128d_f64[1]._0_4_ = SUB84((double)*(float *)(pFVar4 + 4),0);
        local_178.Translation.XY.m128d_f64[0] = (double)*(float *)pFVar4;
        local_178.Translation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)*(float *)(pFVar4 + 4) >> 0x20);
        local_178.Scale3D.ZW.m128d_f64[0] = (double)*(float *)(pFVar2 + 8);
        local_178.Scale3D.ZW.m128d_f64[1] = (double)*(float *)(pFVar2 + 0xc);
        local_178.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84((double)*(float *)(pFVar2 + 4),0);
        local_178.Scale3D.XY.m128d_f64[0] = (double)*(float *)pFVar2;
        local_178.Scale3D.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)*(float *)(pFVar2 + 4) >> 0x20);
        local_1d8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_1d8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
        local_1d8.Rotation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
        local_1d8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_1d8.Rotation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
        local_1d8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2]
        ;
        local_1d8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3]
        ;
        local_1d8.Translation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
        local_1d8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0]
        ;
        local_1d8.Translation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
        local_1d8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_1d8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
        local_1d8.Scale3D.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
        local_1d8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_1d8.Scale3D.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
        UE::Math::TTransform<double>::Multiply(&local_1d8,&local_178,param_2);
        pTVar18 = UE::Math::TTransform<double>::ToMatrixWithScale(&local_1d8,&local_118);
        UE::Math::TBox<double>::TransformBy
                  ((TBox<double> *)&local_248._s_0,(TBox<double> *)&local_210._s_0,pTVar18);
        dVar24 = local_1f8 - local_210._s_0.X;
        dVar6 = local_1f0 - local_210._s_0.Y;
        local_380 = local_1e8 - local_210._s_0.Z;
        local_390 = dVar24 * dVar3;
        auVar22._0_8_ = local_380 * local_380;
        auVar22._8_8_ = 0;
        local_388 = dVar6 * dVar3;
        local_380 = local_380 * dVar3;
        local_3a8._s_0.X = local_210._s_0.X + local_390;
        local_3a8._s_0.Y = local_210._s_0.Y + local_388;
        local_3a8._s_0.Z = local_210._s_0.Z + local_380;
        auVar23._8_8_ = 0;
        auVar23._0_8_ = (dVar6 * dVar6 + dVar24 * dVar24 + auVar22._0_8_) * dVar12;
        auVar23 = sqrtpd(auVar22,auVar23);
        local_378 = auVar23._0_8_;
        if (local_3b0 == '\0') {
          local_3e8._s_0.X = local_210._s_0.X + local_390;
          local_3e8._s_0.Y = local_210._s_0.Y + local_388;
          local_3e8._s_0.Z = local_210._s_0.Z + local_380;
          dStack_3d0 = local_390;
          local_3c8 = local_388;
          dStack_3c0 = local_380;
          local_3b8 = auVar23._0_8_;
          local_3b0 = '\x01';
        }
        else {
          pTVar17 = UE::Math::TBoxSphereBounds<double,double>::operator+
                              ((TBoxSphereBounds<double,double> *)&local_3e8._s_0,&local_300,
                               (TBoxSphereBounds<double,double> *)&local_3a8._s_0);
          dVar24 = (pTVar17->Origin).field0_0x0._s_0.X;
          dVar7 = (pTVar17->Origin).field0_0x0._s_0.Y;
          dVar8 = (pTVar17->Origin).field0_0x0._s_0.Z;
          dVar9 = (pTVar17->BoxExtent).field0_0x0._s_0.X;
          dVar10 = (pTVar17->BoxExtent).field0_0x0._s_0.Y;
          dVar11 = (pTVar17->BoxExtent).field0_0x0._s_0.Z;
          dVar6 = pTVar17->SphereRadius;
          if ((local_3b0 == '\0') &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsSet()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                  ,0x1bd,
                                  L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                 ), bVar13)) {
            pcVar5 = (code *)swi(3);
            pTVar17 = (TBoxSphereBounds<double,double> *)(*pcVar5)();
            return pTVar17;
          }
          local_3e8._s_0.X = dVar24;
          local_3e8._s_0.Y = dVar7;
          local_3e8._s_0.Z = dVar8;
          dStack_3d0 = dVar9;
          local_3c8 = dVar10;
          dStack_3c0 = dVar11;
          local_3b8 = dVar6;
        }
        uVar20 = uVar20 + 1;
        lVar21 = lVar21 + 0x40;
      } while ((int)uVar20 < (param_1->InstanceData).ArrayNum);
    }
    pTVar19 = &local_3e8;
    if (local_3b0 == '\0') {
      pTVar19 = &local_370;
    }
    local_340 = 0;
    local_370._s_0.X = 0.0;
    local_370._s_0.Y = 0.0;
    local_350 = 0;
    uStack_348 = 0;
    local_370._s_0.Z = 0.0;
    uStack_358 = 0;
    dVar3 = pTVar19->XYZ[1];
    dVar12 = pTVar19->XYZ[2];
    dVar6 = pTVar19->XYZ[3];
    (__return_storage_ptr__->Origin).field0_0x0._s_0.X = (pTVar19->_s_0).X;
    (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = dVar3;
    dVar24 = pTVar19->XYZ[4];
    dVar7 = pTVar19->XYZ[5];
    (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = dVar12;
    (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X = dVar6;
    dVar3 = pTVar19->XYZ[6];
    (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y = dVar24;
    (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z = dVar7;
    __return_storage_ptr__->SphereRadius = dVar3;
  }
  return __return_storage_ptr__;
}

// CreateMeshObject<FFastGeoInstancedSkinnedMeshComponent> @ 14da0e8f0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FSkeletalMeshObject * __cdecl
FInstancedSkinnedMeshComponentHelper::CreateMeshObject<FFastGeoInstancedSkinnedMeshComponent>
          (FFastGeoInstancedSkinnedMeshComponent *param_1,
          FInstancedSkinnedMeshSceneProxyDesc *param_2)

{
  Type TVar1;
  UWorld *pUVar2;
  FSkeletalMeshRenderData *pFVar3;
  FSkeletalMeshObject *pFVar4;
  FSceneInterface *pFVar5;
  
  pUVar2 = FFastGeoComponent::GetWorld((FFastGeoComponent *)param_1);
  if (pUVar2 == (UWorld *)0x0) {
    pFVar5 = (FSceneInterface *)0x0;
  }
  else {
    pFVar5 = pUVar2->Scene;
  }
  TVar1 = pFVar5->FeatureLevel;
  pFVar3 = FSkinnedMeshComponentHelper::
           GetSkeletalMeshRenderData<FFastGeoInstancedSkinnedMeshComponent>(param_1);
  pFVar4 = FInstancedSkinnedMeshSceneProxyDesc::CreateMeshObject(param_2,pFVar3,TVar1);
  return pFVar4;
}

// CreateSceneProxy<FFastGeoInstancedSkinnedMeshComponent> @ 14da0e950

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FPrimitiveSceneProxy * __cdecl
FInstancedSkinnedMeshComponentHelper::CreateSceneProxy<FFastGeoInstancedSkinnedMeshComponent>
          (FFastGeoInstancedSkinnedMeshComponent *param_1,
          FInstancedSkinnedMeshSceneProxyDesc *param_2)

{
  bool bVar1;
  EShaderPlatform EVar2;
  int iVar3;
  FSkinnedMeshSceneProxyDesc *pFVar4;
  USkinnedAsset *pUVar5;
  FSkeletalMeshRenderData *pFVar6;
  UWorld *pUVar7;
  longlong lVar8;
  UClass *pUVar9;
  FPrimitiveSceneProxy *pFVar10;
  int iVar11;
  int iVar12;
  FSceneInterface *this;
  bool bVar13;
  
  pFVar4 = (FSkinnedMeshSceneProxyDesc *)(**(code **)(param_1->_padding_ + 0x118))();
  pUVar5 = FSkinnedMeshSceneProxyDesc::GetSkinnedAsset(pFVar4);
  iVar3 = (**(code **)(*(longlong *)pUVar5 + 0x448))(pUVar5,0);
  if (((param_1->_padding_ & 1) != 0) &&
     (iVar11 = *(int *)((longlong)&param_1->_padding_ + 4), iVar3 < iVar11)) {
    iVar3 = iVar11;
  }
  this = (FSceneInterface *)0x0;
  pFVar6 = FSkinnedMeshComponentHelper::
           GetSkeletalMeshRenderData<FFastGeoInstancedSkinnedMeshComponent>(param_1);
  iVar11 = 0;
  if (pFVar6 != (FSkeletalMeshRenderData *)0x0) {
    iVar11 = (pFVar6->LODRenderData).Array.ArrayNum;
  }
  pFVar6 = FSkinnedMeshComponentHelper::
           GetSkeletalMeshRenderData<FFastGeoInstancedSkinnedMeshComponent>(param_1);
  if (pFVar6 == (FSkeletalMeshRenderData *)0x0) {
    iVar3 = -1;
  }
  else {
    iVar3 = FSkeletalMeshRenderData::GetFirstValidLODIdx(pFVar6,iVar3);
  }
  iVar12 = iVar11 + -1;
  if (iVar3 < iVar11 + -1) {
    iVar12 = iVar3;
  }
  iVar3 = 0;
  if (0 < iVar12) {
    iVar3 = iVar12;
  }
  pUVar7 = FFastGeoComponent::GetWorld((FFastGeoComponent *)param_1);
  EVar2 = GMaxRHIShaderPlatform;
  if ((pUVar7 != (UWorld *)0x0) && (pUVar7->Scene != (FSceneInterface *)0x0)) {
    pUVar7 = FFastGeoComponent::GetWorld((FFastGeoComponent *)param_1);
    if (pUVar7 != (UWorld *)0x0) {
      this = pUVar7->Scene;
    }
    EVar2 = FSceneInterface::GetShaderPlatform(this);
  }
  bVar1 = USkinnedMeshComponent::ShouldRenderNaniteSkinnedMeshes();
  if ((bVar1) && (bVar1 = UseNanite(EVar2,true,true), bVar1)) {
    pFVar4 = (FSkinnedMeshSceneProxyDesc *)(**(code **)(param_1->_padding_ + 0x118))(param_1);
    pUVar5 = FSkinnedMeshSceneProxyDesc::GetSkinnedAsset(pFVar4);
    if (pUVar5 == (USkinnedAsset *)0x0) goto LAB_14da0eabc;
    pFVar4 = (FSkinnedMeshSceneProxyDesc *)(**(code **)(param_1->_padding_ + 0x118))(param_1);
    pUVar5 = FSkinnedMeshSceneProxyDesc::GetSkinnedAsset(pFVar4);
    lVar8 = (**(code **)(*(longlong *)pUVar5 + 0x398))(pUVar5);
    if (lVar8 == 0) goto LAB_14da0eabc;
    pFVar4 = (FSkinnedMeshSceneProxyDesc *)(**(code **)(param_1->_padding_ + 0x118))(param_1);
    pUVar5 = FSkinnedMeshSceneProxyDesc::GetSkinnedAsset(pFVar4);
    lVar8 = (**(code **)(*(longlong *)pUVar5 + 0x398))(pUVar5);
    if ((*(longlong *)(lVar8 + 0x10) == 0) || (*(int *)(*(longlong *)(lVar8 + 0x10) + 0x70) < 1))
    goto LAB_14da0eabc;
    bVar1 = true;
  }
  else {
LAB_14da0eabc:
    bVar1 = false;
  }
  pFVar4 = (FSkinnedMeshSceneProxyDesc *)(**(code **)(param_1->_padding_ + 0x118))(param_1);
  pUVar5 = FSkinnedMeshSceneProxyDesc::GetSkinnedAsset(pFVar4);
  if (pUVar5 != (USkinnedAsset *)0x0) {
    pUVar9 = Z_Construct_UClass_USkeletalMesh_NoRegister();
    iVar11 = (int)pUVar9->_padding_;
    if (((iVar11 <= *(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38)) &&
        ((longlong *)
         *(undefined1 **)
          (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar11 * 8) ==
         &pUVar9->_padding_)) &&
       (lVar8 = (**(code **)(*(longlong *)pUVar5 + 0x398))(pUVar5), lVar8 != 0)) {
      bVar13 = 0 < (param_1->InstanceData).ArrayNum;
      goto LAB_14da0eb1f;
    }
  }
  bVar13 = false;
LAB_14da0eb1f:
  pFVar10 = FInstancedSkinnedMeshSceneProxyDesc::CreateSceneProxy
                      (param_2,(bool)(*(byte *)((longlong)&param_1->_padding_ + 2) & 1),bVar1,bVar13
                       ,iVar3);
  return pFVar10;
}

// GetComponentDesc<FFastGeoInstancedSkinnedMeshComponent,0> @ 14da12530

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FInstanceDataManagerSourceDataDesc * __cdecl
FInstancedSkinnedMeshComponentHelper::GetComponentDesc<FFastGeoInstancedSkinnedMeshComponent,0>
          (FInstanceDataManagerSourceDataDesc *__return_storage_ptr__,
          FFastGeoInstancedSkinnedMeshComponent *param_1,EShaderPlatform param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  longlong *plVar15;
  code *pcVar16;
  undefined8 uVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  FPrimitiveMaterialPropertyDescriptor *pFVar21;
  FSkinnedMeshSceneProxyDesc *this;
  USkinnedAsset *pUVar22;
  double *pdVar23;
  longlong lVar24;
  undefined8 *puVar25;
  longlong *plVar26;
  ushort uVar27;
  undefined1 auStack_188 [32];
  TMatrix<double> local_168;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined2 local_d8;
  undefined6 uStack_d6;
  undefined8 uStack_d0;
  FPrimitiveMaterialPropertyDescriptor local_c8;
  code *local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStack_188;
  __return_storage_ptr__->ComponentMobility = Movable;
  (__return_storage_ptr__->Flags).Packed = 0;
  (__return_storage_ptr__->MeshBounds).Min.field0_0x0._s_0.X = 3.4028235e+38;
  (__return_storage_ptr__->MeshBounds).Min.field0_0x0._s_0.Y = 3.4028235e+38;
  (__return_storage_ptr__->MeshBounds).Min.field0_0x0._s_0.Z = 3.4028235e+38;
  (__return_storage_ptr__->MeshBounds).Max.field0_0x0._s_0.X = -3.4028235e+38;
  (__return_storage_ptr__->MeshBounds).Max.field0_0x0._s_0.Y = -3.4028235e+38;
  (__return_storage_ptr__->MeshBounds).Max.field0_0x0._s_0.Z = -3.4028235e+38;
  (__return_storage_ptr__->PrimitiveMaterialDesc).MinMaxMaterialDisplacement.field0_0x0._s_0 =
       (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  (__return_storage_ptr__->PrimitiveMaterialDesc).MaxWorldPositionOffsetDisplacement = 0.0;
  (__return_storage_ptr__->PrimitiveMaterialDesc).bAnyMaterialHasWorldPositionOffset = false;
  (__return_storage_ptr__->PrimitiveMaterialDesc).bAnyMaterialHasPixelAnimation = false;
  (__return_storage_ptr__->PrimitiveMaterialDesc).bAnyMaterialHasPerInstanceCustomData = false;
  (__return_storage_ptr__->PrimitiveMaterialDesc).bAnyMaterialHasPerInstanceRandom = false;
  __return_storage_ptr__->NumInstances = -1;
  __return_storage_ptr__->NumCustomDataFloats = 0;
  *(undefined8 *)&__return_storage_ptr__->BuildChangeSet = 0;
  *(undefined8 *)&(__return_storage_ptr__->BuildChangeSet).field_0x28 = 0;
  pFVar21 = FPrimitiveComponentHelper::
            GetUsedMaterialPropertyDesc<FFastGeoInstancedSkinnedMeshComponent>
                      (&local_c8,param_1,param_2);
  fVar8 = (pFVar21->MinMaxMaterialDisplacement).field0_0x0._s_0.Y;
  fVar9 = pFVar21->MaxWorldPositionOffsetDisplacement;
  bVar7 = pFVar21->bAnyMaterialHasWorldPositionOffset;
  bVar18 = pFVar21->bAnyMaterialHasPixelAnimation;
  bVar19 = pFVar21->bAnyMaterialHasPerInstanceCustomData;
  bVar20 = pFVar21->bAnyMaterialHasPerInstanceRandom;
  (__return_storage_ptr__->PrimitiveMaterialDesc).MinMaxMaterialDisplacement.field0_0x0._s_0.X =
       (pFVar21->MinMaxMaterialDisplacement).field0_0x0._s_0.X;
  (__return_storage_ptr__->PrimitiveMaterialDesc).MinMaxMaterialDisplacement.field0_0x0._s_0.Y =
       fVar8;
  (__return_storage_ptr__->PrimitiveMaterialDesc).MaxWorldPositionOffsetDisplacement = fVar9;
  (__return_storage_ptr__->PrimitiveMaterialDesc).bAnyMaterialHasWorldPositionOffset = bVar7;
  (__return_storage_ptr__->PrimitiveMaterialDesc).bAnyMaterialHasPixelAnimation = bVar18;
  (__return_storage_ptr__->PrimitiveMaterialDesc).bAnyMaterialHasPerInstanceCustomData = bVar19;
  (__return_storage_ptr__->PrimitiveMaterialDesc).bAnyMaterialHasPerInstanceRandom = bVar20;
  bVar7 = (__return_storage_ptr__->PrimitiveMaterialDesc).bAnyMaterialHasPerInstanceRandom;
  if (((__return_storage_ptr__->PrimitiveMaterialDesc).bAnyMaterialHasPerInstanceCustomData == false
      ) || (uVar27 = 10, param_1->NumCustomDataFloats == 0)) {
    uVar27 = 8;
  }
  this = (FSkinnedMeshSceneProxyDesc *)(**(code **)(param_1->_padding_ + 0x118))(param_1);
  pUVar22 = FSkinnedMeshSceneProxyDesc::GetSkinnedAsset(this);
  UInstancedSkinnedMeshComponent::ShouldForceRefPose();
  (__return_storage_ptr__->Flags).Packed = bVar7 & 1 | uVar27;
  pdVar23 = (double *)(**(code **)(*(longlong *)pUVar22 + 0x3e0))(pUVar22,&local_b8);
  dVar1 = pdVar23[3];
  dVar2 = pdVar23[4];
  dVar3 = pdVar23[5];
  dVar4 = *pdVar23;
  dVar5 = pdVar23[1];
  dVar6 = pdVar23[2];
  (__return_storage_ptr__->MeshBounds).Min.field0_0x0._s_0.X = (float)(dVar4 - dVar1);
  (__return_storage_ptr__->MeshBounds).Min.field0_0x0._s_0.Y = (float)(dVar5 - dVar2);
  (__return_storage_ptr__->MeshBounds).Min.field0_0x0._s_0.Z = (float)(dVar6 - dVar3);
  (__return_storage_ptr__->MeshBounds).Max.field0_0x0._s_0.X = (float)(dVar1 + dVar4);
  (__return_storage_ptr__->MeshBounds).Max.field0_0x0._s_0.Y = (float)(dVar2 + dVar5);
  (__return_storage_ptr__->MeshBounds).Max.field0_0x0._s_0.Z = (float)(dVar3 + dVar6);
  __return_storage_ptr__->NumCustomDataFloats = param_1->NumCustomDataFloats;
  __return_storage_ptr__->NumInstances = (param_1->InstanceData).ArrayNum;
  UE::Math::TTransform<double>::ToMatrixWithScale
            ((TTransform<double> *)&param_1->_padding_,&local_168);
  (__return_storage_ptr__->PrimitiveLocalToWorld).M[0][0] = local_168.M[0][0];
  (__return_storage_ptr__->PrimitiveLocalToWorld).M[0][1] = local_168.M[0][1];
  (__return_storage_ptr__->PrimitiveLocalToWorld).M[0][2] = local_168.M[0][2];
  (__return_storage_ptr__->PrimitiveLocalToWorld).M[0][3] = local_168.M[0][3];
  (__return_storage_ptr__->PrimitiveLocalToWorld).M[1][0] = local_168.M[1][0];
  (__return_storage_ptr__->PrimitiveLocalToWorld).M[1][1] = local_168.M[1][1];
  (__return_storage_ptr__->PrimitiveLocalToWorld).M[1][2] = local_168.M[1][2];
  (__return_storage_ptr__->PrimitiveLocalToWorld).M[1][3] = local_168.M[1][3];
  (__return_storage_ptr__->PrimitiveLocalToWorld).M[2][0] = local_168.M[2][0];
  (__return_storage_ptr__->PrimitiveLocalToWorld).M[2][1] = local_168.M[2][1];
  (__return_storage_ptr__->PrimitiveLocalToWorld).M[2][2] = local_168.M[2][2];
  (__return_storage_ptr__->PrimitiveLocalToWorld).M[2][3] = local_168.M[2][3];
  *(undefined4 *)(__return_storage_ptr__->PrimitiveLocalToWorld).M[3] = local_168.M[3][0]._0_4_;
  *(undefined4 *)((longlong)(__return_storage_ptr__->PrimitiveLocalToWorld).M[3] + 4) =
       local_168.M[3][0]._4_4_;
  *(undefined4 *)((__return_storage_ptr__->PrimitiveLocalToWorld).M[3] + 1) =
       local_168.M[3][1]._0_4_;
  *(undefined4 *)((longlong)(__return_storage_ptr__->PrimitiveLocalToWorld).M[3] + 0xc) =
       local_168.M[3][1]._4_4_;
  *(undefined4 *)((__return_storage_ptr__->PrimitiveLocalToWorld).M[3] + 2) =
       local_168.M[3][2]._0_4_;
  *(undefined4 *)((longlong)(__return_storage_ptr__->PrimitiveLocalToWorld).M[3] + 0x14) =
       local_168.M[3][2]._4_4_;
  *(undefined4 *)((__return_storage_ptr__->PrimitiveLocalToWorld).M[3] + 3) =
       local_168.M[3][3]._0_4_;
  *(undefined4 *)((longlong)(__return_storage_ptr__->PrimitiveLocalToWorld).M[3] + 0x1c) =
       local_168.M[3][3]._4_4_;
  lVar24 = (**(code **)(param_1->_padding_ + 0xa0))(param_1);
  __return_storage_ptr__->ComponentMobility = (uint)*(byte *)(lVar24 + 0x88);
  local_168.M[0][2] = (double)param_1->_padding_;
  local_168.M[0][3] = (double)param_1->_padding_;
  local_168.M[1][0] = (double)param_1->_padding_;
  local_168.M[1][1] = (double)param_1->_padding_;
  local_168.M[1][2] = (double)param_1->_padding_;
  local_168.M[1][3] = (double)param_1->_padding_;
  local_168.M[2][0] = (double)param_1->_padding_;
  local_168.M[2][1] = (double)param_1->_padding_;
  local_168.M[2][2] = (double)param_1->_padding_;
  local_168.M[2][3] = (double)param_1->_padding_;
  local_168.M[3][0] = (double)param_1->_padding_;
  local_168.M[3][1] = (double)param_1->_padding_;
  local_168.M[3][3] = *(double *)&(__return_storage_ptr__->MeshBounds).Min.field0_0x0;
  local_e8 = *(undefined8 *)((longlong)&(__return_storage_ptr__->MeshBounds).Min.field0_0x0 + 8);
  local_d8 = 0;
  uStack_e0 = *(undefined8 *)((longlong)&(__return_storage_ptr__->MeshBounds).Max.field0_0x0 + 4);
  local_168.M[3][2] = 0.0;
  local_b8 = (code *)0x0;
  local_168.M[0][0] = (double)param_1;
  puVar25 = FMemory::Malloc(0xb0,0x10);
  *puVar25 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__1____GetComponentDesc_VFFastGeoInstancedSkinnedMeshComponent___0A__FInstancedSkinnedMeshComponentHelper__SA_AUFInstanceDataManagerSourceDataDesc__AEAVFFastGeoInstancedSkinnedMeshComponent__W4EShaderPlatform___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  puVar25[2] = local_168.M[0][0];
  puVar25[3] = local_168.M[0][1];
  puVar25[4] = local_168.M[0][2];
  puVar25[5] = local_168.M[0][3];
  puVar25[6] = local_168.M[1][0];
  puVar25[7] = local_168.M[1][1];
  puVar25[8] = local_168.M[1][2];
  puVar25[9] = local_168.M[1][3];
  puVar25[10] = local_168.M[2][0];
  puVar25[0xb] = local_168.M[2][1];
  puVar25[0xc] = local_168.M[2][2];
  puVar25[0xd] = local_168.M[2][3];
  puVar25[0xe] = local_168.M[3][0];
  puVar25[0xf] = local_168.M[3][1];
  puVar25[0x10] = local_168.M[3][2];
  puVar25[0x11] = local_168.M[3][3];
  puVar25[0x12] = local_e8;
  puVar25[0x13] = uStack_e0;
  puVar25[0x14] = CONCAT62(uStack_d6,local_d8);
  puVar25[0x15] = uStack_d0;
  pcVar16 = *(code **)&__return_storage_ptr__->BuildChangeSet;
  uVar17 = *(undefined8 *)&(__return_storage_ptr__->BuildChangeSet).field_0x8;
  if (puVar25 + 2 != (undefined8 *)0x0) {
    local_b8 = UE::Core::Private::Function::
               TFunctionRefCaller<`FInstancedSkinnedMeshComponentHelper::GetComponentDesc<FFastGeoInstancedSkinnedMeshComponent,0>'::__l2::<lambda_1>,void,FInstanceUpdateChangeSet_&>
               ::Call;
  }
  uVar10 = *(undefined4 *)&(__return_storage_ptr__->BuildChangeSet).field_0x10;
  uVar11 = *(undefined4 *)&(__return_storage_ptr__->BuildChangeSet).field_0x14;
  uVar12 = *(undefined4 *)&(__return_storage_ptr__->BuildChangeSet).field_0x18;
  uVar13 = *(undefined4 *)&(__return_storage_ptr__->BuildChangeSet).field_0x1c;
  uVar14 = *(undefined8 *)&(__return_storage_ptr__->BuildChangeSet).field_0x20;
  plVar15 = *(longlong **)&(__return_storage_ptr__->BuildChangeSet).field_0x28;
  *(code **)&__return_storage_ptr__->BuildChangeSet = local_b8;
  *(undefined8 *)&(__return_storage_ptr__->BuildChangeSet).field_0x8 = uStack_b0;
  uStack_90._0_4_ = SUB84(puVar25,0);
  uStack_90._4_4_ = (undefined4)((ulonglong)puVar25 >> 0x20);
  *(undefined4 *)&(__return_storage_ptr__->BuildChangeSet).field_0x10 = local_a8;
  *(undefined4 *)&(__return_storage_ptr__->BuildChangeSet).field_0x14 = uStack_a4;
  *(undefined4 *)&(__return_storage_ptr__->BuildChangeSet).field_0x18 = uStack_a0;
  *(undefined4 *)&(__return_storage_ptr__->BuildChangeSet).field_0x1c = uStack_9c;
  *(undefined4 *)&(__return_storage_ptr__->BuildChangeSet).field_0x20 = (undefined4)local_98;
  *(undefined4 *)&(__return_storage_ptr__->BuildChangeSet).field_0x24 = local_98._4_4_;
  *(undefined4 *)&(__return_storage_ptr__->BuildChangeSet).field_0x28 = (undefined4)uStack_90;
  *(undefined4 *)&(__return_storage_ptr__->BuildChangeSet).field_0x2c = uStack_90._4_4_;
  local_a8 = uVar10;
  uStack_a4 = uVar11;
  uStack_a0 = uVar12;
  uStack_9c = uVar13;
  local_98 = uVar14;
  uStack_90 = plVar15;
  if (pcVar16 != (code *)0x0) {
    plVar26 = (longlong *)&local_a8;
    if (plVar15 != (longlong *)0x0) {
      plVar26 = plVar15;
    }
    local_b8 = pcVar16;
    uStack_b0 = uVar17;
    (**(code **)(*plVar26 + 0x10))();
  }
  return __return_storage_ptr__;
}

// IsEnabled<FFastGeoInstancedSkinnedMeshComponent> @ 14da15cd0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
FInstancedSkinnedMeshComponentHelper::IsEnabled<FFastGeoInstancedSkinnedMeshComponent>
          (FFastGeoInstancedSkinnedMeshComponent *param_1)

{
  int iVar1;
  FSkinnedMeshSceneProxyDesc *this;
  USkinnedAsset *pUVar2;
  UClass *pUVar3;
  longlong lVar4;
  
  this = (FSkinnedMeshSceneProxyDesc *)(**(code **)(param_1->_padding_ + 0x118))();
  pUVar2 = FSkinnedMeshSceneProxyDesc::GetSkinnedAsset(this);
  if (pUVar2 != (USkinnedAsset *)0x0) {
    pUVar3 = Z_Construct_UClass_USkeletalMesh_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      lVar4 = (**(code **)(*(longlong *)pUVar2 + 0x398))(pUVar2);
      if (lVar4 != 0) {
        return 0 < (param_1->InstanceData).ArrayNum;
      }
    }
  }
  return false;
}

// operator() @ 14da1c8e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`FInstancedSkinnedMeshComponentHelper::GetComponentDesc<FFastGeoInstancedSkinnedMeshComponent,0>'::
__l2::<lambda_1>::operator()(void *this,FInstanceUpdateChangeSet *param_1)

{
  int *piVar1;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FRenderBounds,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  code *pcVar10;
  undefined8 uVar11;
  bool bVar12;
  int iVar13;
  byte bVar14;
  byte bVar15;
  ulonglong uVar16;
  undefined1 auStackY_2a8 [32];
  undefined4 local_258 [2];
  undefined8 local_250;
  FInstanceUpdateChangeSet *pFStack_248;
  int local_240;
  int iStack_23c;
  FInstanceUpdateChangeSet *pFStack_238;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *local_230;
  FIdentityDeltaRange FStack_228;
  int iStack_224;
  uint local_220;
  int iStack_21c;
  TArray<FRenderBounds,TSizedDefaultAllocator<32>_> *local_218;
  FIdentityDeltaRange FStack_210;
  int iStack_20c;
  uint local_208;
  int iStack_204;
  TArray<float,TSizedDefaultAllocator<32>_> *local_200;
  ulonglong uStack_1f8;
  FInstanceUpdateChangeSet *pFStack_1f0;
  int iStack_1e8;
  uint uStack_1e4;
  int local_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  TArray<FRenderTransform,TSizedDefaultAllocator<32>_> *local_1d0;
  FDeltaRange<1> FStack_1c8;
  int iStack_1b8;
  undefined4 uStack_1b4;
  int local_1b0;
  undefined4 uStack_1ac;
  code *local_1a8;
  undefined8 *local_1a0;
  float *local_198;
  int iStack_190;
  undefined4 uStack_18c;
  code *local_188;
  undefined8 *local_180;
  code *local_178;
  undefined8 *local_170;
  TArrayView<float,int> local_168;
  FWriter local_158;
  FWriter local_140;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  FWriter local_100;
  FWriter local_d8;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  local_1b0 = param_1->NumSourceInstances;
  if (((param_1->bNeedFullUpdate == false) && (param_1->bUpdateAllInstanceTransforms == false)) &&
     (iStack_23c = (param_1->InstanceAttributeTracker).NumChanged[0] +
                   (param_1->InstanceAttributeTracker).NumChanged[1], iStack_23c != local_1b0)) {
    local_240 = (uint)local_240._1_3_ << 8;
  }
  else {
    local_240 = CONCAT31(local_240._1_3_,1);
    iStack_23c = local_1b0;
  }
  local_1d0 = &param_1->Transforms;
  FStack_1c8.NumItems = iStack_23c;
  FStack_1c8._0_4_ = local_240;
  iStack_1b8 = 1;
  uStack_1b4 = CONCAT31(uStack_1b4._1_3_,1);
  pFStack_238 = param_1;
  FStack_1c8.Tracker = &param_1->InstanceAttributeTracker;
  if (((param_1->Transforms).ArrayNum != 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("!bIsEnabled || DeltaDataArray.IsEmpty()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\InstanceData\\InstanceUpdateChangeSet.h"
                          ,0x113,L""), bVar12)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  local_1d8 = *(undefined8 *)this;
  local_1a0 = &local_1d8;
  local_100.Setup._28_4_ = uStack_1b4;
  local_100.Setup.ElementStride = iStack_1b8;
  local_100.Setup.DeltaDataArray = local_1d0;
  local_100.Setup.Delta.bFullUpdate = FStack_1c8.bFullUpdate;
  local_100.Setup.Delta._1_3_ = FStack_1c8._1_3_;
  local_100.Setup.Delta.NumItems = FStack_1c8.NumItems;
  local_100.Setup._36_4_ = uStack_1ac;
  local_100.Setup.NumInstances = local_1b0;
  local_1a8 = UE::Core::Private::Function::
              TFunctionRefCaller<``FInstancedSkinnedMeshComponentHelper::GetComponentDesc<FFastGeoInstancedSkinnedMeshComponent,0>'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,FRenderTransform,int>
              ::Call;
  local_100.Setup.Delta.Tracker = FStack_1c8.Tracker;
  TDeltaSetup<FRenderTransform,FInstanceAttributeTracker::FDeltaRange<1>_>::FWriter::Gather
            (&local_100,(TFunctionRef<FRenderTransform___cdecl(int)> *)&local_1a8);
  iStack_1e8 = param_1->NumCustomDataFloats;
  bVar15 = *(byte *)&param_1->Flags >> 1;
  if ((bVar15 & 1) == 0) {
    local_200 = &param_1->PerInstanceCustomData;
    local_250 = 1;
    pFStack_248 = (FInstanceUpdateChangeSet *)0x0;
    local_1e0 = param_1->NumSourceInstances;
    uStack_1f8 = 1;
    pFStack_1f0 = (FInstanceUpdateChangeSet *)0x0;
    uStack_1e4 = CONCAT31(uStack_1e4._1_3_,bVar15) & 0xffffff01;
  }
  else {
    local_1e0 = param_1->NumSourceInstances;
    if (((param_1->bNeedFullUpdate == false) && ((*(byte *)&param_1->ForceFullFlags >> 1 & 1) == 0))
       && (iVar13 = (param_1->InstanceAttributeTracker).NumChanged[0] +
                    (param_1->InstanceAttributeTracker).NumChanged[2], iVar13 != local_1e0)) {
      local_250 = CONCAT44(iVar13,(undefined4)local_250) & 0xffffffffffffff00;
    }
    else {
      local_250 = CONCAT44(local_1e0,(undefined4)local_250);
      local_250 = CONCAT71(local_250._1_7_,1);
    }
    local_200 = &param_1->PerInstanceCustomData;
    uStack_1e4 = CONCAT31(uStack_1e4._1_3_,bVar15) & 0xffffff01;
    uStack_1f8 = local_250;
    pFStack_248 = param_1;
    pFStack_1f0 = param_1;
    if (((param_1->PerInstanceCustomData).ArrayNum != 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("!bIsEnabled || DeltaDataArray.IsEmpty()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\InstanceData\\InstanceUpdateChangeSet.h"
                            ,0x113,L""), bVar12)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  lVar7 = *(longlong *)this;
  local_d8.Setup._28_4_ = uStack_1e4;
  local_d8.Setup.ElementStride = iStack_1e8;
  local_198 = *(float **)(lVar7 + 0x418);
  iVar13 = *(int *)(lVar7 + 0x420);
  iVar5 = *(int *)(lVar7 + 0x410);
  local_d8.Setup.DeltaDataArray = local_200;
  local_d8.Setup.Delta.bFullUpdate = (bool)(undefined1)uStack_1f8;
  local_d8.Setup.Delta._1_3_ = uStack_1f8._1_3_;
  local_d8.Setup.Delta.NumItems = uStack_1f8._4_4_;
  local_d8.Setup._36_4_ = uStack_1dc;
  local_d8.Setup.NumInstances = local_1e0;
  local_d8.Setup.Delta.Tracker = &pFStack_1f0->InstanceAttributeTracker;
  if ((iVar13 < 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar12)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  local_168._12_4_ = uStack_18c;
  local_168.ArrayNum = iVar13;
  local_168.DataPtr = local_198;
  iStack_190 = iVar13;
  TDeltaSetup<float,FInstanceAttributeTracker::FDeltaRange<2>_>::FWriter::Gather<float>
            (&local_d8,&local_168,iVar5);
  bVar15 = *(byte *)&param_1->Flags >> 3;
  bVar14 = bVar15 & 1;
  if (*(longlong *)((longlong)this + 0x70) == 0) {
    if (bVar14 == 0) {
      local_258[0] = 0;
    }
    else {
      uVar6 = param_1->NumSourceInstances;
      pTVar2 = &param_1->InstanceSkinningData;
      uVar16 = (ulonglong)uVar6;
      if (((param_1->InstanceSkinningData).ArrayNum != 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("!bIsEnabled || DeltaDataArray.IsEmpty()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\InstanceData\\InstanceUpdateChangeSet.h"
                              ,0x113,L""), bVar12)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      local_258[0] = 0;
      if (uVar6 == 0) {
        (param_1->InstanceSkinningData).ArrayNum = 0;
        if ((param_1->InstanceSkinningData).ArrayMax < 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,0,&pTVar2->AllocatorInstance,0,&(param_1->InstanceSkinningData).ArrayMax);
        }
      }
      else {
        if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
        }
        piVar1 = &(param_1->InstanceSkinningData).ArrayMax;
        (param_1->InstanceSkinningData).ArrayNum = 0;
        if (*piVar1 != uVar6) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,uVar6,&pTVar2->AllocatorInstance,0,piVar1);
        }
        if (0 < (int)uVar6) {
          do {
            pFVar4 = (pTVar2->AllocatorInstance).Data;
            if (((pFVar4 <= (FScriptContainerElement *)local_258) &&
                ((FScriptContainerElement *)local_258 < pFVar4 + (longlong)*piVar1 * 4)) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar12)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            iVar13 = (param_1->InstanceSkinningData).ArrayNum;
            if (iVar13 == *piVar1) {
              iVar13 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&pTVar2->AllocatorInstance,piVar1);
              (param_1->InstanceSkinningData).ArrayNum = iVar13;
            }
            (param_1->InstanceSkinningData).ArrayNum = iVar13 + 1;
            *(undefined4 *)((pTVar2->AllocatorInstance).Data + (longlong)iVar13 * 4) = local_258[0];
            uVar16 = uVar16 - 1;
          } while (uVar16 != 0);
        }
      }
    }
  }
  else {
    iStack_224 = 1;
    local_230 = &param_1->InstanceSkinningData;
    iStack_21c = param_1->NumSourceInstances;
    local_220 = CONCAT31(local_220._1_3_,bVar15) & 0xffffff01;
    if (bVar14 == 0) {
      FStack_228.NumItems = 0;
    }
    else {
      FStack_228.NumItems = iStack_21c;
      if (((param_1->InstanceSkinningData).ArrayNum != 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("!bIsEnabled || DeltaDataArray.IsEmpty()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\InstanceData\\InstanceUpdateChangeSet.h"
                              ,0x113,L""), bVar12)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    local_158.Setup.ElementStride = iStack_224;
    local_158.Setup.Delta.NumItems = FStack_228.NumItems;
    local_a8 = *(undefined8 *)this;
    local_158.Setup.NumInstances = iStack_21c;
    local_158.Setup._16_4_ = local_220;
    local_158.Setup.DeltaDataArray = local_230;
    local_98 = *(undefined8 *)((longlong)this + 0x10);
    uStack_90 = *(undefined8 *)((longlong)this + 0x18);
    local_a0 = *(undefined8 *)((longlong)this + 0x70);
    local_88 = *(undefined8 *)((longlong)this + 0x20);
    uStack_80 = *(undefined8 *)((longlong)this + 0x28);
    local_78 = *(undefined8 *)((longlong)this + 0x30);
    uStack_70 = *(undefined8 *)((longlong)this + 0x38);
    local_180 = &local_a8;
    local_68 = *(undefined8 *)((longlong)this + 0x40);
    uStack_60 = *(undefined8 *)((longlong)this + 0x48);
    local_58 = *(undefined8 *)((longlong)this + 0x50);
    uStack_50 = *(undefined8 *)((longlong)this + 0x58);
    local_48 = *(undefined8 *)((longlong)this + 0x60);
    uStack_40 = *(undefined8 *)((longlong)this + 0x68);
    local_188 = UE::Core::Private::Function::
                TFunctionRefCaller<``FInstancedSkinnedMeshComponentHelper::GetComponentDesc<FFastGeoInstancedSkinnedMeshComponent,0>'::__l2::<lambda_1>::operator()'::__l5::<lambda_2>,unsigned_int,int>
                ::Call;
    TDeltaSetup<unsigned_int,FIdentityDeltaRange>::FWriter::Gather
              (&local_158,(TFunctionRef<unsigned_int___cdecl(int)> *)&local_188);
  }
  if ((*(longlong *)((longlong)this + 0x70) == 0) || (*(short *)((longlong)this + 0x90) == 0)) {
    if ((*(byte *)&param_1->Flags >> 5 & 1) != 0) {
      uVar6 = param_1->NumSourceInstances;
      pTVar3 = &param_1->InstanceLocalBounds;
      uVar16 = (ulonglong)uVar6;
      if (((param_1->InstanceLocalBounds).ArrayNum != 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("!bIsEnabled || DeltaDataArray.IsEmpty()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\InstanceData\\InstanceUpdateChangeSet.h"
                              ,0x113,L""), bVar12)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pFVar4 = (FScriptContainerElement *)((longlong)this + 0x78);
      if (uVar6 == 0) {
        (param_1->InstanceLocalBounds).ArrayNum = 0;
        if ((param_1->InstanceLocalBounds).ArrayMax < 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,4,0,&pTVar3->AllocatorInstance,0,&(param_1->InstanceLocalBounds).ArrayMax)
          ;
        }
      }
      else {
        if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
        }
        piVar1 = &(param_1->InstanceLocalBounds).ArrayMax;
        (param_1->InstanceLocalBounds).ArrayNum = 0;
        if (*piVar1 != uVar6) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,4,uVar6,&pTVar3->AllocatorInstance,0,piVar1);
        }
        if (0 < (int)uVar6) {
          do {
            pFVar8 = (pTVar3->AllocatorInstance).Data;
            if (((pFVar8 <= pFVar4) && (pFVar4 < pFVar8 + (longlong)*piVar1 * 0x18)) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar12)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            iVar13 = (param_1->InstanceLocalBounds).ArrayNum;
            if (iVar13 == *piVar1) {
              iVar13 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x418,&pTVar3->AllocatorInstance,piVar1);
              (param_1->InstanceLocalBounds).ArrayNum = iVar13;
            }
            (param_1->InstanceLocalBounds).ArrayNum = iVar13 + 1;
            uVar11 = *(undefined8 *)((longlong)this + 0x80);
            pFVar9 = (pTVar3->AllocatorInstance).Data;
            pFVar8 = pFVar9 + (longlong)iVar13 * 0x18;
            *(undefined8 *)pFVar8 = *(undefined8 *)pFVar4;
            *(undefined8 *)(pFVar8 + 8) = uVar11;
            *(undefined8 *)(pFVar9 + (longlong)iVar13 * 0x18 + 0x10) =
                 *(undefined8 *)((longlong)this + 0x88);
            uVar16 = uVar16 - 1;
          } while (uVar16 != 0);
        }
      }
    }
  }
  else {
    local_218 = &param_1->InstanceLocalBounds;
    bVar15 = *(byte *)&param_1->Flags >> 5;
    iStack_204 = param_1->NumSourceInstances;
    local_208 = CONCAT31(local_208._1_3_,bVar15) & 0xffffff01;
    iStack_20c = 1;
    if ((bVar15 & 1) == 0) {
      FStack_210.NumItems = 0;
    }
    else {
      FStack_210.NumItems = iStack_204;
      if (((param_1->InstanceLocalBounds).ArrayNum != 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("!bIsEnabled || DeltaDataArray.IsEmpty()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\InstanceData\\InstanceUpdateChangeSet.h"
                              ,0x113,L""), bVar12)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    local_128 = *(undefined8 *)this;
    local_140.Setup.ElementStride = iStack_20c;
    local_140.Setup.Delta.NumItems = FStack_210.NumItems;
    local_140.Setup.NumInstances = iStack_204;
    local_140.Setup._16_4_ = local_208;
    local_120 = *(undefined8 *)((longlong)this + 0x70);
    local_170 = &local_128;
    local_140.Setup.DeltaDataArray = local_218;
    local_118 = *(undefined8 *)((longlong)this + 0x78);
    uStack_110 = *(undefined8 *)((longlong)this + 0x80);
    local_178 = UE::Core::Private::Function::
                TFunctionRefCaller<``FInstancedSkinnedMeshComponentHelper::GetComponentDesc<FFastGeoInstancedSkinnedMeshComponent,0>'::__l2::<lambda_1>::operator()'::__l10::<lambda_3>,FRenderBounds,int>
                ::Call;
    local_108 = *(undefined8 *)((longlong)this + 0x88);
    TDeltaSetup<FRenderBounds,FIdentityDeltaRange>::FWriter::Gather
              (&local_140,(TFunctionRef<FRenderBounds___cdecl(int)> *)&local_178);
  }
  return;
}

