// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 5

// FSkinnedMeshStateStreamImpl @ 1456dcaf0

FSkinnedMeshStateStreamImpl * __thiscall
FSkinnedMeshStateStreamImpl::FSkinnedMeshStateStreamImpl
          (FSkinnedMeshStateStreamImpl *this,FSceneInterface *param_1)

{
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  memset(&this->_padding_,0,0xa8);
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  memset(&this->_padding_,0,0xa8);
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  this->_padding_ = (longlong)&_vftable__for__IStateStream__;
  this->_padding_ = (longlong)&_vftable__for__ISkinnedMeshStateStream__;
  this->_padding_ = (longlong)&_vftable__for__IStateStreamHandleOwner__;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->Scene = param_1;
  *(undefined4 *)&this->_padding_ = 1;
  return this;
}

// Render_OnCreate @ 14571d280

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FSkinnedMeshStateStreamImpl::Render_OnCreate
          (FSkinnedMeshStateStreamImpl *this,FSkinnedMeshStaticState *param_1,
          FSkinnedMeshDynamicState *param_2,FSkinnedMeshObject **param_3,bool param_4)

{
  undefined1 *puVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  USkinnedAsset *pUVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  TTransform<double> *this_00;
  bool bVar12;
  uint uVar13;
  int iVar14;
  FSkinnedMeshObject *pFVar15;
  undefined1 (*pauVar16) [16];
  TMatrix<double> *pTVar17;
  FSkeletalMeshObject *pFVar18;
  FPrimitiveSceneProxy *pFVar19;
  undefined1 auVar20 [16];
  double dVar23;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auStackY_6e8 [32];
  ForAnyElementType local_698;
  undefined8 local_690;
  int local_688;
  TTransform<double> *local_680;
  int iStack_678;
  undefined4 uStack_674;
  void *local_670;
  undefined8 local_668;
  FSkinnedMeshObject **local_660;
  Info local_658;
  double local_640;
  double dStack_638;
  double dStack_630;
  undefined8 local_628;
  double dStack_620;
  double dStack_618;
  double local_610;
  FSkinnedMeshSceneProxyDesc local_608;
  undefined1 local_478 [16];
  undefined1 local_468 [16];
  undefined1 local_458 [16];
  double local_448;
  TMatrix<double> local_438;
  undefined1 local_3b8 [64];
  TMatrix<double> local_378;
  undefined1 local_2f8 [24];
  undefined8 uStack_2e0;
  void *local_2d8;
  undefined4 local_2d0;
  uint local_2cc;
  undefined4 local_2c8;
  undefined4 local_2c4;
  ForElementType<FSetElementId> local_2c0;
  ulonglong local_2b0;
  ForAnyElementType local_2a8;
  undefined8 local_2a0;
  TBitArray<FDefaultBitArrayAllocator> local_298;
  undefined4 local_278;
  undefined4 local_274;
  undefined8 local_270;
  void *local_268;
  ulonglong local_260;
  undefined1 local_258 [24];
  undefined8 uStack_240;
  void *local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  void *local_218;
  ulonglong uStack_210;
  undefined8 local_208;
  FSkinnedMeshSceneProxyDynamicData local_1f8;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_6e8;
  local_660 = param_3;
  if (param_4) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("!IsDestroyedInSameFrame",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\StateStream\\SkinnedMeshStateStreamImpl.cpp"
                        ,0x67,L"");
    if (bVar12) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  if (*param_3 != (FSkinnedMeshObject *)0x0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("!UserData",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\StateStream\\SkinnedMeshStateStreamImpl.cpp"
                        ,0x68,L"");
    if (bVar12) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pUVar5 = (param_2->SkinnedAsset).field0_0x0.DebugPtr;
  if (pUVar5 != (USkinnedAsset *)0x0) {
    pFVar15 = ::operator_new(0x1e0);
    if (pFVar15 == (FSkinnedMeshObject *)0x0) {
      pFVar15 = (FSkinnedMeshObject *)0x0;
    }
    else {
      *(undefined4 *)&pFVar15->field_0x1c = 0;
      pFVar15->SkinnedAsset = (USkinnedAsset *)0x0;
      pFVar15->MeshObject = (FSkeletalMeshObject *)0x0;
      memset(&(pFVar15->PrimitiveSceneData).AttachmentCounter,0,0x188);
      (pFVar15->PrimitiveSceneData).LastRenderTime = -1000.0;
      (pFVar15->PrimitiveSceneData).bAlwaysVisible = 0;
      *(undefined ***)pFVar15 = &___7FSkinnedMeshObject__6B_;
      *(undefined4 *)&pFVar15->field_0x18 = 0;
      *(undefined8 *)&pFVar15->field_0x8 = 0;
      *(undefined8 *)&pFVar15->field_0x10 = 0;
      (pFVar15->TransformObject).Reference = (FTransformObject *)0x0;
      (pFVar15->CustomPrimitiveData).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar15->CustomPrimitiveData).Data.ArrayNum = 0;
      (pFVar15->CustomPrimitiveData).Data.ArrayMax = 0;
      (pFVar15->PrimitiveSceneData).SceneProxy = (FPrimitiveSceneProxy *)0x0;
      (pFVar15->PrimitiveSceneData).LastRenderTimeOnScreen = -1000.0;
      (pFVar15->PrimitiveSceneData).AttachmentCounter.Counter = 0;
      (pFVar15->PrimitiveSceneData).PrimitiveSceneId.PrimIDValue = 0;
      (pFVar15->PrimitiveSceneData).OwnerLastRenderTimePtr = (FActorLastRenderTime *)0x0;
      LOCK();
      UNLOCK();
      uVar13 = FPrimitiveSceneInfoData::NextPrimitiveId.Counter + 1;
      FPrimitiveSceneInfoData::NextPrimitiveId.Counter =
           FPrimitiveSceneInfoData::NextPrimitiveId.Counter + 1;
      (pFVar15->PrimitiveSceneData).PrimitiveSceneId.PrimIDValue = uVar13;
      (pFVar15->PrimitiveSceneDesc).ProxyDesc = (FPrimitiveSceneProxyDesc *)0x0;
      (pFVar15->PrimitiveSceneDesc).PrimitiveComponentInterface = (IPrimitiveComponent *)0x0;
      (pFVar15->PrimitiveSceneDesc).PrimitiveSceneData = (FPrimitiveSceneInfoData *)0x0;
      (pFVar15->PrimitiveSceneDesc).SceneProxy = (FPrimitiveSceneProxy *)0x0;
      (pFVar15->PrimitiveSceneDesc).LightingAttachmentComponentId = 0;
      (pFVar15->PrimitiveSceneDesc).LodParentComponentId = 0;
      (pFVar15->PrimitiveSceneDesc).bShouldAddtoScene = true;
      (pFVar15->PrimitiveSceneDesc).bRecreateProxyOnUpdateTransform = false;
      (pFVar15->PrimitiveSceneDesc).bIsUnreachable = false;
      (pFVar15->PrimitiveSceneDesc).bBulkReregister = false;
      (pFVar15->PrimitiveSceneDesc).Mobility = Movable;
      (pFVar15->PrimitiveSceneDesc).PrimitiveUObject = (UObject *)0x0;
      (pFVar15->PrimitiveSceneDesc).World = (UWorld *)0x0;
      (pFVar15->PrevTransforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar15->PrevTransforms).ArrayNum = 0;
      (pFVar15->PrevTransforms).ArrayMax = 0;
      pFVar15->BoneTransformRevisionNumber = 0;
    }
    LOCK();
    *(int *)&pFVar15->field_0x18 = *(int *)&pFVar15->field_0x18 + 1;
    UNLOCK();
    pFVar15->SkinnedAsset = pUVar5;
    SetTransformObject(this,pFVar15,param_2);
    if ((pFVar15->TransformObject).Reference == (FTransformObject *)0x0) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Object.TransformObject",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\StateStream\\SkinnedMeshStateStreamImpl.cpp"
                          ,0x76,L"");
      if (bVar12) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    FTransformObject::GetInfo((pFVar15->TransformObject).Reference,&local_658);
    this_00 = local_658.WorldTransform;
    pauVar16 = (undefined1 (*) [16])(**(code **)(*(longlong *)pUVar5 + 0x3e0))(pUVar5,local_3b8);
    auVar26 = *pauVar16;
    auVar3 = pauVar16[1];
    auVar4 = pauVar16[2];
    dVar2 = *(double *)pauVar16[3];
    local_478 = auVar26;
    local_468 = auVar3;
    local_458 = auVar4;
    local_448 = dVar2;
    pTVar17 = UE::Math::TTransform<double>::ToMatrixWithScale(this_00,&local_378);
    dVar8 = pTVar17->M[0][1];
    (pFVar15->PrimitiveSceneDesc).RenderMatrix.M[0][0] = pTVar17->M[0][0];
    (pFVar15->PrimitiveSceneDesc).RenderMatrix.M[0][1] = dVar8;
    dVar8 = pTVar17->M[0][3];
    (pFVar15->PrimitiveSceneDesc).RenderMatrix.M[0][2] = pTVar17->M[0][2];
    (pFVar15->PrimitiveSceneDesc).RenderMatrix.M[0][3] = dVar8;
    dVar8 = pTVar17->M[1][1];
    (pFVar15->PrimitiveSceneDesc).RenderMatrix.M[1][0] = pTVar17->M[1][0];
    (pFVar15->PrimitiveSceneDesc).RenderMatrix.M[1][1] = dVar8;
    dVar8 = pTVar17->M[1][3];
    (pFVar15->PrimitiveSceneDesc).RenderMatrix.M[1][2] = pTVar17->M[1][2];
    (pFVar15->PrimitiveSceneDesc).RenderMatrix.M[1][3] = dVar8;
    dVar8 = pTVar17->M[2][1];
    (pFVar15->PrimitiveSceneDesc).RenderMatrix.M[2][0] = pTVar17->M[2][0];
    (pFVar15->PrimitiveSceneDesc).RenderMatrix.M[2][1] = dVar8;
    dVar8 = pTVar17->M[2][3];
    (pFVar15->PrimitiveSceneDesc).RenderMatrix.M[2][2] = pTVar17->M[2][2];
    (pFVar15->PrimitiveSceneDesc).RenderMatrix.M[2][3] = dVar8;
    dVar8 = pTVar17->M[3][1];
    (pFVar15->PrimitiveSceneDesc).RenderMatrix.M[3][0] = pTVar17->M[3][0];
    (pFVar15->PrimitiveSceneDesc).RenderMatrix.M[3][1] = dVar8;
    dVar8 = pTVar17->M[3][2];
    dVar23 = pTVar17->M[3][3];
    *(undefined1 (*) [16])&(pFVar15->PrimitiveSceneDesc).LocalBounds.Origin.field0_0x0 = auVar26;
    (pFVar15->PrimitiveSceneDesc).PrimitiveSceneData = &pFVar15->PrimitiveSceneData;
    *(undefined1 (*) [16])
     ((longlong)&(pFVar15->PrimitiveSceneDesc).LocalBounds.Origin.field0_0x0 + 0x10) = auVar3;
    *(undefined1 (*) [16])
     ((longlong)&(pFVar15->PrimitiveSceneDesc).LocalBounds.BoxExtent.field0_0x0 + 8) = auVar4;
    (pFVar15->PrimitiveSceneDesc).LocalBounds.SphereRadius = dVar2;
    (pFVar15->PrimitiveSceneDesc).RenderMatrix.M[3][2] = dVar8;
    (pFVar15->PrimitiveSceneDesc).RenderMatrix.M[3][3] = dVar23;
    UE::Math::TTransform<double>::ToMatrixWithScale(this_00,&local_438);
    dVar2 = auVar4._8_8_;
    dVar10 = auVar26._0_8_;
    auVar20._8_4_ = auVar4._8_4_;
    auVar20._0_8_ = dVar2;
    auVar20._12_4_ = auVar4._12_4_;
    dVar11 = auVar26._8_8_;
    dVar23 = auVar20._8_8_ * local_438.M[2][1];
    dVar8 = auVar3._0_8_;
    auVar21._0_8_ =
         (double)CONCAT44((uint)((ulonglong)(dVar2 * local_438.M[2][0]) >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar2 * local_438.M[2][0],0) &
                          (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    auVar21._8_4_ = SUB84(dVar23,0) & _UNK_15061cc88;
    auVar21._12_4_ = (uint)((ulonglong)dVar23 >> 0x20) & _UNK_15061cc8c;
    dVar23 = (double)CONCAT44((uint)((ulonglong)((double)local_458._0_8_ * local_438.M[1][0]) >>
                                    0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              SUB84((double)local_458._0_8_ * local_438.M[1][0],0) &
                              (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
             (double)CONCAT44((uint)((ulonglong)((double)local_468._8_8_ * local_438.M[0][0]) >>
                                    0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              SUB84((double)local_468._8_8_ * local_438.M[0][0],0) &
                              (uint)__xmm_7fffffffffffffff7fffffffffffffff) + auVar21._0_8_;
    dVar9 = (double)CONCAT44((uint)((ulonglong)((double)local_458._0_8_ * local_438.M[1][1]) >> 0x20
                                   ) & _UNK_15061cc8c,
                             SUB84((double)local_458._0_8_ * local_438.M[1][1],0) & _UNK_15061cc88)
            + (double)CONCAT44((uint)((ulonglong)((double)local_468._8_8_ * local_438.M[0][1]) >>
                                     0x20) & _UNK_15061cc8c,
                               SUB84((double)local_468._8_8_ * local_438.M[0][1],0) & _UNK_15061cc88
                              ) + auVar21._8_8_;
    auVar4._8_4_ = SUB84(dVar9,0);
    auVar4._0_8_ = dVar23;
    auVar4._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
    local_628._0_4_ = SUB84(dVar23,0);
    local_628._4_4_ = (undefined4)((ulonglong)dVar23 >> 0x20);
    dStack_620 = auVar4._8_8_;
    auVar24._8_4_ = auVar26._8_4_;
    auVar24._0_8_ = dVar11;
    auVar24._12_4_ = auVar26._12_4_;
    auVar22._8_4_ = auVar3._0_4_;
    auVar22._0_8_ = dVar8;
    auVar22._12_4_ = auVar3._4_4_;
    dStack_618 = (double)CONCAT44((uint)((ulonglong)((double)local_458._0_8_ * local_438.M[1][2]) >>
                                        0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                  SUB84((double)local_458._0_8_ * local_438.M[1][2],0) &
                                  (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
                 (double)CONCAT44((uint)((ulonglong)((double)local_468._8_8_ * local_438.M[0][2]) >>
                                        0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                  SUB84((double)local_468._8_8_ * local_438.M[0][2],0) &
                                  (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
                 (double)CONCAT44((uint)((ulonglong)(dVar2 * local_438.M[2][2]) >> 0x20) &
                                  __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                  SUB84(dVar2 * local_438.M[2][2],0) &
                                  (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    auVar25._0_8_ =
         local_438.M[1][0] * local_438.M[1][0] + local_438.M[0][0] * local_438.M[0][0] +
         local_438.M[2][0] * local_438.M[2][0];
    auVar25._8_8_ =
         local_438.M[1][1] * local_438.M[1][1] + local_438.M[0][1] * local_438.M[0][1] +
         local_438.M[2][1] * local_438.M[2][1];
    auVar26._8_4_ = SUB84(auVar25._8_8_,0);
    auVar26._0_8_ = auVar25._8_8_;
    auVar26._12_4_ = (int)((ulonglong)auVar25._8_8_ >> 0x20);
    auVar26 = maxpd(auVar25,auVar26);
    dVar2 = local_438.M[1][2] * local_438.M[1][2] + local_438.M[0][2] * local_438.M[0][2] +
            local_438.M[2][2] * local_438.M[2][2];
    auVar3._8_4_ = SUB84(dVar2,0);
    auVar3._0_8_ = dVar2;
    auVar3._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    auVar26 = maxpd(auVar26,auVar3);
    local_610 = SQRT(dStack_618 * dStack_618 + dVar23 * dVar23 + dVar9 * dVar9);
    dVar2 = SQRT(auVar26._0_8_) * local_448;
    local_640 = dVar11 * local_438.M[1][0] + dVar10 * local_438.M[0][0] + dVar8 * local_438.M[2][0]
                + local_438.M[3][0];
    dStack_638 = auVar24._8_8_ * local_438.M[1][1] + dVar10 * local_438.M[0][1] +
                 auVar22._8_8_ * local_438.M[2][1] + local_438.M[3][1];
    if (dVar2 <= local_610) {
      local_610 = dVar2;
    }
    (pFVar15->PrimitiveSceneDesc).Bounds.Origin.field0_0x0._s_0.X = local_640;
    (pFVar15->PrimitiveSceneDesc).Bounds.Origin.field0_0x0._s_0.Y = dStack_638;
    dStack_630 = dVar11 * local_438.M[1][2] + dVar10 * local_438.M[0][2] + dVar8 * local_438.M[2][2]
                 + local_438.M[3][2];
    auVar7._8_4_ = (undefined4)local_628;
    auVar7._0_8_ = dStack_630;
    auVar7._12_4_ = local_628._4_4_;
    *(undefined1 (*) [16])((longlong)&(pFVar15->PrimitiveSceneDesc).Bounds.Origin.field0_0x0 + 0x10)
         = auVar7;
    (pFVar15->PrimitiveSceneDesc).Bounds.BoxExtent.field0_0x0._s_0.Y = dStack_620;
    (pFVar15->PrimitiveSceneDesc).Bounds.BoxExtent.field0_0x0._s_0.Z = dStack_618;
    (pFVar15->PrimitiveSceneDesc).Bounds.SphereRadius = local_610;
    local_628 = dVar23;
    FPrimitiveSceneProxyDesc::FPrimitiveSceneProxyDesc((FPrimitiveSceneProxyDesc *)&local_608);
    local_608.DebugDrawColor.bIsSet = false;
    local_608.OverlayMaterial = (UMaterialInterface *)0x0;
    local_608.MaterialSlotsOverlayMaterial.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_608._padding_ = (longlong)&___7FSkinnedMeshSceneProxyDesc__6B_;
    local_608.MaterialRelevance.field0_0x0.Raw = (FMaterialRelevance_u_0)0x0;
    local_608.ComponentScale.field0_0x0._s_0.X =
         UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
    local_608.ComponentScale.field0_0x0._s_0.Y =
         UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
    local_608.LODInfo.DataPtr = (FSkelMeshComponentLODInfo *)0x0;
    local_608.LODInfo.ArrayNum = 0;
    local_608.MeshObject = (FSkeletalMeshObject *)0x0;
    local_608.PreviousMeshObject = (FSkeletalMeshObject *)0x0;
    local_608.PhysicsAsset = (UPhysicsAsset *)0x0;
    local_608.MaterialSlotsOverlayMaterial.ArrayNum = 0;
    local_608.MaterialSlotsOverlayMaterial.ArrayMax = 0;
    local_608.MeshDeformerInstances = (FMeshDeformerInstanceSet *)0x0;
    local_608.OverrideMaterials.DataPtr = (TObjectPtr<UMaterialInterface> *)0x0;
    local_608.OverrideMaterials._8_8_ = (ulonglong)(uint)local_608.OverrideMaterials._12_4_ << 0x20;
    local_608.SkinCacheUsage.DataPtr = (ESkinCacheUsage *)0x0;
    local_608.SkinCacheUsage.ArrayNum = 0;
    local_608.PredictedLODLevel = 0;
    local_608.MaxDistanceFactor = 1.0;
    local_608.bSortTriangles = 0;
    local_608.bAllowAlwaysVisible = '\0';
    local_680 = (TTransform<double> *)(param_2->OverrideMaterials).AllocatorInstance.Data;
    iStack_678 = (param_2->OverrideMaterials).ArrayNum;
    local_608.ComponentScale.field0_0x0._s_0.Z =
         UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
    local_608.StreamingDistanceMultiplier = ___xmm_0000000000000000000000003f800000;
    local_608.NanitePixelProgrammableDistance = _UNK_1506894f4;
    local_608.CapsuleIndirectShadowMinVisibility = _UNK_1506894f8;
    local_608.OverlayMaterialMaxDrawDistance = _UNK_1506894fc;
    local_608.bCPUSkinning = '\0';
    local_608.bDrawDebugSkeleton = '\0';
    local_608.bCastCapsuleIndirectShadow = '\0';
    local_608.bCastCapsuleDirectShadow = '\0';
    local_608.bPerBoneMotionBlur = '\0';
    local_608.bRenderStatic = '\0';
    local_608.bCanHighlightSelectedSections = '\0';
    local_608.bForceWireframe = '\0';
    local_608.SkinnedAsset = pUVar5;
    if (iStack_678 < 0) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L"");
      if (bVar12) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    local_608._padding_ = (longlong)&pFVar15->CustomPrimitiveData;
    local_608._padding_ = (longlong)this->Scene;
    local_608.OverrideMaterials._12_4_ = uStack_674;
    local_608.OverrideMaterials.ArrayNum = iStack_678;
    local_608.OverrideMaterials.DataPtr = (TObjectPtr<UMaterialInterface> *)local_680;
    local_608._padding_._0_4_ = ((FSceneInterface *)local_608._padding_)->FeatureLevel;
    local_608.bPerBoneMotionBlur = '\x01';
    local_608._padding_._4_4_ = 0xffffffff;
    local_608._padding_._4_4_ =
         (local_658.bVisible & 1 | 0x40) << 0xb | local_608._padding_._4_4_ & 0xfffff7ff;
    local_608.MaterialRelevance.field0_0x0 = (FMaterialRelevance_u_0)param_1->MaterialRelevance;
    local_608._padding_._0_4_ = (uint)local_608._padding_ & 0xfffffffd | 0x10083001;
    pFVar18 = FSkinnedMeshSceneProxyDesc::CreateMeshObject(&local_608);
    pFVar15->MeshObject = pFVar18;
    local_608.MeshObject = pFVar18;
    pFVar19 = FSkinnedMeshSceneProxyDesc::CreateSceneProxy(&local_608,false,0);
    (pFVar15->PrimitiveSceneData).SceneProxy = pFVar19;
    local_2c0.InlineData[0] = '\0';
    local_2c0.InlineData[1] = '\0';
    local_2c0.InlineData[2] = '\0';
    local_2c0.InlineData[3] = '\0';
    local_2c0._padding_ = 0;
    local_2b0 = 0;
    (pFVar19->PrimitiveColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0
    ;
    local_688 = local_608.PredictedLODLevel;
    local_2f8._16_8_ = 0;
    uStack_2e0 = 0;
    local_698.Data = (FScriptContainerElement *)0x0;
    local_690 = 0;
    local_2f8._0_8_ = (FScriptContainerElement *)0x0;
    local_2f8._8_8_ = 0;
    local_2d8 = (void *)0x0;
    local_2d0 = 0;
    local_2cc = 0x80;
    local_2c8 = 0xffffffff;
    local_2c4 = 0;
    local_2c0.SecondaryData = (ForElementType<FSetElementId>)0x0;
    iVar14 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x850,&local_698,(int *)((longlong)&local_690 + 4));
    local_690 = CONCAT44(local_690._4_4_,iVar14 + 1);
    TSet<TTuple<int,TSharedPtr<FExternalMorphSet,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedPtr<FExternalMorphSet,1>,0>,FDefaultSetAllocator>
    ::
    TSet<TTuple<int,TSharedPtr<FExternalMorphSet,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedPtr<FExternalMorphSet,1>,0>,FDefaultSetAllocator>
              ((TSet<TTuple<int,TSharedPtr<FExternalMorphSet,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedPtr<FExternalMorphSet,1>,0>,FDefaultSetAllocator>
                *)(local_698.Data + (longlong)iVar14 * 0x50),
               (TSet<TTuple<int,TSharedPtr<FExternalMorphSet,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedPtr<FExternalMorphSet,1>,0>,FDefaultSetAllocator>
                *)local_2f8);
    local_2b0 = local_2b0 & 0xffffffff00000000;
    if (local_2c0.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_2c0.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<int,TSharedPtr<FExternalMorphSet,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<int,TSharedPtr<FExternalMorphSet,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_2f8,0,local_2f8._8_4_);
    bVar12 = local_2f8._12_4_ != 0;
    local_2f8._8_8_ = (ulonglong)(uint)local_2f8._12_4_ << 0x20;
    if (bVar12) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,(ForAnyElementType *)local_2f8,0,(int *)(local_2f8 + 0xc));
    }
    local_2c8 = 0xffffffff;
    local_2c4 = 0;
    local_2d0 = 0;
    if (0x80 < local_2cc) {
      local_2cc = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_2f8 + 0x10),0);
    }
    if (local_2d8 != (void *)0x0) {
      FMemory::Free(local_2d8);
    }
    if ((FScriptContainerElement *)local_2f8._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_2f8._0_8_);
    }
    FSkinnedMeshSceneProxyDynamicData::FSkinnedMeshSceneProxyDynamicData(&local_1f8);
    local_680 = (TTransform<double> *)local_698.Data;
    local_1f8.ExternalMorphSets.ArrayNum = (int)local_690;
    if ((int)local_690 < 0) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L"");
      if (bVar12) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    local_1f8.ExternalMorphSets.DataPtr =
         (TMap<int,TSharedPtr<FExternalMorphSet,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedPtr<FExternalMorphSet,1>,0>_>
          *)local_680;
    local_1f8.ExternalMorphSets._12_4_ = local_668._4_4_;
    local_680 = (TTransform<double> *)((local_658.BoneTransforms)->AllocatorInstance).Data;
    iVar14 = (local_658.BoneTransforms)->ArrayNum;
    if (iVar14 < 0) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L"");
      if (bVar12) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    local_1f8.ComponentSpaceTransforms.DataPtr = local_680;
    local_1f8.ComponentSpaceTransforms._12_4_ = local_668._4_4_;
    local_1f8.ComponentWorldTransform.Rotation.XY.m128d_f64[0] =
         ((local_658.WorldTransform)->Rotation).XY.m128d_f64[0];
    local_1f8.ComponentWorldTransform.Rotation.XY.m128d_f64[1] =
         ((local_658.WorldTransform)->Rotation).XY.m128d_f64[1];
    local_1f8.ComponentWorldTransform.Rotation.ZW.m128d_f64[0] =
         ((local_658.WorldTransform)->Rotation).ZW.m128d_f64[0];
    local_1f8.ComponentWorldTransform.Rotation.ZW.m128d_f64[1] =
         ((local_658.WorldTransform)->Rotation).ZW.m128d_f64[1];
    local_1f8.ComponentWorldTransform.Translation.XY.m128d_f64[0] =
         ((local_658.WorldTransform)->Translation).XY.m128d_f64[0];
    local_1f8.ComponentWorldTransform.Translation.XY.m128d_f64[1] =
         ((local_658.WorldTransform)->Translation).XY.m128d_f64[1];
    local_1f8.ComponentWorldTransform.Translation.ZW.m128d_f64[0] =
         ((local_658.WorldTransform)->Translation).ZW.m128d_f64[0];
    local_1f8.ComponentWorldTransform.Translation.ZW.m128d_f64[1] =
         ((local_658.WorldTransform)->Translation).ZW.m128d_f64[1];
    local_1f8.ComponentWorldTransform.Scale3D.XY.m128d_f64[0] =
         ((local_658.WorldTransform)->Scale3D).XY.m128d_f64[0];
    local_1f8.ComponentWorldTransform.Scale3D.XY.m128d_f64[1] =
         ((local_658.WorldTransform)->Scale3D).XY.m128d_f64[1];
    local_1f8.ComponentWorldTransform.Scale3D.ZW.m128d_f64[0] =
         ((local_658.WorldTransform)->Scale3D).ZW.m128d_f64[0];
    local_1f8.ComponentWorldTransform.Scale3D.ZW.m128d_f64[1] =
         ((local_658.WorldTransform)->Scale3D).ZW.m128d_f64[1];
    uStack_220 = 0;
    local_668 = 0;
    local_260 = 0;
    local_2a0 = 0;
    local_238 = (void *)0x0;
    uStack_230 = 0x8000000000;
    local_258._0_8_ = (FScriptContainerElement *)0x0;
    local_258._8_8_ = 0;
    local_258._16_8_ = 0;
    uStack_240 = 0;
    local_228 = 0xffffffff;
    local_218 = (void *)0x0;
    uStack_210 = 0;
    local_208 = 0;
    local_670 = (void *)0x0;
    local_298.AllocatorInstance.InlineData[0] = '\0';
    local_298.AllocatorInstance.InlineData[1] = '\0';
    local_298.AllocatorInstance.InlineData[2] = '\0';
    local_298.AllocatorInstance.InlineData[3] = '\0';
    local_298.AllocatorInstance.InlineData[4] = '\0';
    local_298.AllocatorInstance.InlineData[5] = '\0';
    local_298.AllocatorInstance.InlineData[6] = '\0';
    local_298.AllocatorInstance.InlineData[7] = '\0';
    local_298.AllocatorInstance.InlineData[8] = '\0';
    local_298.AllocatorInstance.InlineData[9] = '\0';
    local_298.AllocatorInstance.InlineData[10] = '\0';
    local_298.AllocatorInstance.InlineData[0xb] = '\0';
    local_298.AllocatorInstance.InlineData[0xc] = '\0';
    local_298.AllocatorInstance.InlineData[0xd] = '\0';
    local_298.AllocatorInstance.InlineData[0xe] = '\0';
    local_298.AllocatorInstance.InlineData[0xf] = '\0';
    local_270 = 0;
    local_2a8.Data = (FScriptContainerElement *)0x0;
    local_298.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_298.NumBits = 0;
    local_298.MaxBits = 0x80;
    local_278 = 0xffffffff;
    local_274 = 0;
    local_268 = (void *)0x0;
    local_1f8.ComponentSpaceTransforms.ArrayNum = iVar14;
    (**(code **)(pFVar18->_padding_ + 0x18))(pFVar18,local_688,&local_1f8,pFVar19);
    local_260 = local_260 & 0xffffffff00000000;
    if (local_268 != (void *)0x0) {
      FMemory::Free(local_268);
    }
    bVar12 = local_2a0._4_4_ != 0;
    local_2a0 = (ulonglong)local_2a0._4_4_ << 0x20;
    if (bVar12) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,&local_2a8,0,(int *)((longlong)&local_2a0 + 4));
    }
    local_278 = 0xffffffff;
    local_274 = 0;
    local_298.NumBits = 0;
    if (0x80 < (uint)local_298.MaxBits) {
      local_298.MaxBits = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_298,0);
    }
    if (local_298.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_298.AllocatorInstance.SecondaryData);
    }
    if (local_2a8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2a8.Data);
    }
    if (local_670 != (void *)0x0) {
      FMemory::Free(local_670);
    }
    uStack_210 = uStack_210 & 0xffffffff00000000;
    if (local_218 != (void *)0x0) {
      FMemory::Free(local_218);
    }
    TSparseArray<TSparseSetElement<TTuple<int,FExternalMorphSetWeights>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<int,FExternalMorphSetWeights>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_258,0,local_258._8_4_);
    bVar12 = local_258._12_4_ != 0;
    local_258._8_8_ = (ulonglong)(uint)local_258._12_4_ << 0x20;
    if (bVar12) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,0,(ForAnyElementType *)local_258,0,(int *)(local_258 + 0xc));
    }
    uVar13 = uStack_230._4_4_;
    uStack_230 = (ulonglong)uStack_230._4_4_ << 0x20;
    local_228 = 0xffffffff;
    if (0x80 < uVar13) {
      uStack_230 = 0x8000000000;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_258 + 0x10),0);
    }
    if (local_238 != (void *)0x0) {
      FMemory::Free(local_238);
    }
    if ((FScriptContainerElement *)local_258._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_258._0_8_);
    }
    (**(code **)this->Scene->_padding_)(this->Scene,&pFVar15->PrimitiveSceneDesc);
    *local_660 = pFVar15;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1f8.RefPoseOverride.SharedReferenceCount.ReferenceController);
    DestructItems<TMap<int,TSharedPtr<FExternalMorphSet,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedPtr<FExternalMorphSet,1>,0>_>,int>
              ((TMap<int,TSharedPtr<FExternalMorphSet,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedPtr<FExternalMorphSet,1>,0>_>
                *)local_698.Data,(int)local_690);
    if ((TMap<int,TSharedPtr<FExternalMorphSet,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedPtr<FExternalMorphSet,1>,0>_>
         *)local_698.Data !=
        (TMap<int,TSharedPtr<FExternalMorphSet,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedPtr<FExternalMorphSet,1>,0>_>
         *)0x0) {
      FMemory::Free(local_698.Data);
    }
    if (local_608.MaterialSlotsOverlayMaterial.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_608.MaterialSlotsOverlayMaterial.AllocatorInstance.Data);
    }
    FPrimitiveSceneProxyDesc::~FPrimitiveSceneProxyDesc((FPrimitiveSceneProxyDesc *)&local_608);
  }
  return;
}

// Render_OnDestroy @ 14571e780

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FSkinnedMeshStateStreamImpl::Render_OnDestroy
          (FSkinnedMeshStateStreamImpl *this,FSkinnedMeshStaticState *param_1,
          FSkinnedMeshDynamicState *param_2,FSkinnedMeshObject **param_3)

{
  undefined1 *puVar1;
  int iVar2;
  FSkinnedMeshObject *pFVar3;
  
  pFVar3 = *param_3;
  if (pFVar3 != (FSkinnedMeshObject *)0x0) {
    puVar1 = &pFVar3->field_0x18;
    LOCK();
    iVar2 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (puVar1 != (undefined1 *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014571e7a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)pFVar3 + 8))(pFVar3,1);
      return;
    }
  }
  return;
}

// Render_OnUpdate @ 14571e8e0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FSkinnedMeshStateStreamImpl::Render_OnUpdate
          (FSkinnedMeshStateStreamImpl *this,FSkinnedMeshStaticState *param_1,
          FSkinnedMeshDynamicState *param_2,FSkinnedMeshObject **param_3)

{
  undefined1 *puVar1;
  int iVar2;
  FSkinnedMeshObject *pFVar3;
  FTransformObject *pFVar4;
  code *pcVar5;
  bool bVar6;
  FTransformObject *pFVar7;
  
  pFVar3 = *param_3;
  if ((pFVar3 != (FSkinnedMeshObject *)0x0) && ((param_2->ModifiedFlags & 1) != 0)) {
    pFVar7 = (pFVar3->TransformObject).Reference;
    if (pFVar7 != (FTransformObject *)0x0) {
      FTransformObject::RemoveListener(pFVar7,(FTransformObjectListener *)pFVar3);
      pFVar7 = (pFVar3->TransformObject).Reference;
      if (pFVar7 != (FTransformObject *)0x0) {
        (pFVar3->TransformObject).Reference = (FTransformObject *)0x0;
        puVar1 = &pFVar7->field_0x18;
        LOCK();
        iVar2 = *(int *)puVar1;
        *(int *)puVar1 = *(int *)puVar1 + -1;
        UNLOCK();
        if ((iVar2 == 1) && (puVar1 != (undefined1 *)0x0)) {
          (**(code **)(*(longlong *)pFVar7 + 8))(pFVar7,1);
        }
      }
    }
    if (*(int *)&(param_2->Transform).field_0xc != 0) {
      pFVar7 = FStateStreamHandle::Render_GetUserData((FStateStreamHandle *)&param_2->Transform);
      if (pFVar7 == (FTransformObject *)0x0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("TransformObject",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\StateStream\\SkinnedMeshStateStreamImpl.cpp"
                           ,0x5f,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      FTransformObject::AddListener(pFVar7,(FTransformObjectListener *)pFVar3);
      pFVar4 = (pFVar3->TransformObject).Reference;
      if (pFVar4 != pFVar7) {
        (pFVar3->TransformObject).Reference = pFVar7;
        if (pFVar7 != (FTransformObject *)0x0) {
          LOCK();
          *(int *)&pFVar7->field_0x18 = *(int *)&pFVar7->field_0x18 + 1;
          UNLOCK();
        }
        if (pFVar4 != (FTransformObject *)0x0) {
          puVar1 = &pFVar4->field_0x18;
          LOCK();
          iVar2 = *(int *)puVar1;
          *(int *)puVar1 = *(int *)puVar1 + -1;
          UNLOCK();
          if ((iVar2 == 1) && (puVar1 != (undefined1 *)0x0)) {
            (**(code **)(*(longlong *)pFVar4 + 8))(pFVar4,1);
          }
        }
      }
    }
    return;
  }
  return;
}

// SetTransformObject @ 145721c00

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FSkinnedMeshStateStreamImpl::SetTransformObject
          (FSkinnedMeshStateStreamImpl *this,FSkinnedMeshObject *param_1,
          FSkinnedMeshDynamicState *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  FTransformObject *pFVar3;
  code *pcVar4;
  bool bVar5;
  FTransformObject *pFVar6;
  
  pFVar6 = (param_1->TransformObject).Reference;
  if (pFVar6 != (FTransformObject *)0x0) {
    FTransformObject::RemoveListener(pFVar6,(FTransformObjectListener *)param_1);
    pFVar6 = (param_1->TransformObject).Reference;
    if (pFVar6 != (FTransformObject *)0x0) {
      (param_1->TransformObject).Reference = (FTransformObject *)0x0;
      puVar1 = &pFVar6->field_0x18;
      LOCK();
      iVar2 = *(int *)puVar1;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UNLOCK();
      if ((iVar2 == 1) && (puVar1 != (undefined1 *)0x0)) {
        (**(code **)(*(longlong *)pFVar6 + 8))(pFVar6,1);
      }
    }
  }
  if (*(int *)&(param_2->Transform).field_0xc != 0) {
    pFVar6 = FStateStreamHandle::Render_GetUserData((FStateStreamHandle *)&param_2->Transform);
    if (pFVar6 == (FTransformObject *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TransformObject",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\StateStream\\SkinnedMeshStateStreamImpl.cpp"
                         ,0x5f,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    FTransformObject::AddListener(pFVar6,(FTransformObjectListener *)param_1);
    pFVar3 = (param_1->TransformObject).Reference;
    if (pFVar3 != pFVar6) {
      (param_1->TransformObject).Reference = pFVar6;
      if (pFVar6 != (FTransformObject *)0x0) {
        LOCK();
        *(int *)&pFVar6->field_0x18 = *(int *)&pFVar6->field_0x18 + 1;
        UNLOCK();
      }
      if (pFVar3 != (FTransformObject *)0x0) {
        puVar1 = &pFVar3->field_0x18;
        LOCK();
        iVar2 = *(int *)puVar1;
        *(int *)puVar1 = *(int *)puVar1 + -1;
        UNLOCK();
        if ((iVar2 == 1) && (puVar1 != (undefined1 *)0x0)) {
          (**(code **)(*(longlong *)pFVar3 + 8))(pFVar3,1);
        }
      }
    }
  }
  return;
}

