// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 5

// FStaticMeshStateStreamImpl @ 1456dd0b0

FStaticMeshStateStreamImpl * __thiscall
FStaticMeshStateStreamImpl::FStaticMeshStateStreamImpl
          (FStaticMeshStateStreamImpl *this,FSceneInterface *param_1)

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
  this->_padding_ = (longlong)&_vftable__for__IStaticMeshStateStream__;
  this->_padding_ = (longlong)&_vftable__for__IStateStreamHandleOwner__;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->Scene = param_1;
  *(undefined4 *)&this->_padding_ = 1;
  return this;
}

// Render_OnCreate @ 14571df60

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

void __thiscall
FStaticMeshStateStreamImpl::Render_OnCreate
          (FStaticMeshStateStreamImpl *this,FStaticMeshStaticState *param_1,
          FStaticMeshDynamicState *param_2,FStaticMeshObject **param_3,bool param_4)

{
  undefined1 *puVar1;
  double dVar2;
  UStaticMesh *this_00;
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  bool bVar14;
  uint uVar15;
  FStaticMeshObject *pFVar16;
  TBoxSphereBounds<double,double> *pTVar17;
  TMatrix<double> *pTVar18;
  FStaticMeshSceneProxy *this_01;
  FStaticMeshSceneProxy *pFVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  Info local_438;
  undefined1 local_420 [16];
  double dStack_410;
  undefined8 local_408;
  double dStack_400;
  double dStack_3f8;
  double local_3f0;
  double local_3e8;
  double dStack_3e0;
  double local_3d8;
  double dStack_3d0;
  double local_3c8;
  double dStack_3c0;
  double local_3b8;
  double local_3b0;
  double dStack_3a8;
  double local_3a0;
  TMatrix<double> local_398;
  undefined1 local_318 [64];
  FCustomPrimitiveData *local_2d8;
  FSceneInterface *local_2d0;
  uint local_2a8;
  uint local_2a4;
  Type local_268;
  FScriptContainerElement *local_258;
  int local_250;
  undefined4 local_24c;
  UStaticMesh *local_218;
  TBoxSphereBounds<double,double> local_188;
  TMatrix<double> local_148 [2];
  
  if (*param_3 != (FStaticMeshObject *)0x0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("!UserData",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\StateStream\\StaticMeshStateStreamImpl.cpp"
                        ,0x39,L"");
    if (bVar14) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  this_00 = (param_2->Mesh).field0_0x0.DebugPtr;
  if (this_00 != (UStaticMesh *)0x0) {
    pFVar16 = ::operator_new(0x1b0);
    if (pFVar16 == (FStaticMeshObject *)0x0) {
      pFVar16 = (FStaticMeshObject *)0x0;
    }
    else {
      *(undefined4 *)((longlong)&pFVar16->_padding_ + 4) = 0;
      memset(&(pFVar16->PrimitiveSceneData).AttachmentCounter,0,0x168);
      (pFVar16->PrimitiveSceneData).LastRenderTime = -1000.0;
      (pFVar16->PrimitiveSceneData).bAlwaysVisible = 0;
      pFVar16->_padding_ = (longlong)&___7FStaticMeshObject__6B_;
      *(undefined4 *)&pFVar16->_padding_ = 0;
      pFVar16->_padding_ = 0;
      pFVar16->_padding_ = 0;
      (pFVar16->TransformObject).Reference = (FTransformObject *)0x0;
      (pFVar16->CustomPrimitiveData).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar16->CustomPrimitiveData).Data.ArrayNum = 0;
      (pFVar16->CustomPrimitiveData).Data.ArrayMax = 0;
      (pFVar16->PrimitiveSceneData).SceneProxy = (FPrimitiveSceneProxy *)0x0;
      (pFVar16->PrimitiveSceneData).LastRenderTimeOnScreen = -1000.0;
      (pFVar16->PrimitiveSceneData).AttachmentCounter.Counter = 0;
      (pFVar16->PrimitiveSceneData).PrimitiveSceneId.PrimIDValue = 0;
      (pFVar16->PrimitiveSceneData).OwnerLastRenderTimePtr = (FActorLastRenderTime *)0x0;
      LOCK();
      UNLOCK();
      uVar15 = FPrimitiveSceneInfoData::NextPrimitiveId.Counter + 1;
      FPrimitiveSceneInfoData::NextPrimitiveId.Counter =
           FPrimitiveSceneInfoData::NextPrimitiveId.Counter + 1;
      (pFVar16->PrimitiveSceneData).PrimitiveSceneId.PrimIDValue = uVar15;
      (pFVar16->PrimitiveSceneDesc).ProxyDesc = (FPrimitiveSceneProxyDesc *)0x0;
      (pFVar16->PrimitiveSceneDesc).PrimitiveComponentInterface = (IPrimitiveComponent *)0x0;
      (pFVar16->PrimitiveSceneDesc).PrimitiveSceneData = (FPrimitiveSceneInfoData *)0x0;
      (pFVar16->PrimitiveSceneDesc).SceneProxy = (FPrimitiveSceneProxy *)0x0;
      (pFVar16->PrimitiveSceneDesc).LightingAttachmentComponentId = 0;
      (pFVar16->PrimitiveSceneDesc).LodParentComponentId = 0;
      (pFVar16->PrimitiveSceneDesc).bShouldAddtoScene = true;
      (pFVar16->PrimitiveSceneDesc).bRecreateProxyOnUpdateTransform = false;
      (pFVar16->PrimitiveSceneDesc).bIsUnreachable = false;
      (pFVar16->PrimitiveSceneDesc).bBulkReregister = false;
      (pFVar16->PrimitiveSceneDesc).Mobility = Movable;
      (pFVar16->PrimitiveSceneDesc).PrimitiveUObject = (UObject *)0x0;
      (pFVar16->PrimitiveSceneDesc).World = (UWorld *)0x0;
    }
    pFVar19 = (FStaticMeshSceneProxy *)0x0;
    LOCK();
    *(int *)&pFVar16->_padding_ = (int)pFVar16->_padding_ + 1;
    UNLOCK();
    SetTransformObject(this,pFVar16,param_2);
    FTransformObject::GetInfo((pFVar16->TransformObject).Reference,&local_438);
    pTVar17 = UStaticMesh::GetBounds(this_00,&local_188);
    dVar8 = (pTVar17->Origin).field0_0x0._s_0.X;
    dVar9 = (pTVar17->Origin).field0_0x0._s_0.Y;
    dVar10 = (pTVar17->Origin).field0_0x0._s_0.Z;
    dVar7 = (pTVar17->BoxExtent).field0_0x0._s_0.X;
    dVar11 = (pTVar17->BoxExtent).field0_0x0._s_0.Y;
    dVar12 = (pTVar17->BoxExtent).field0_0x0._s_0.Z;
    dVar2 = pTVar17->SphereRadius;
    local_3e8 = dVar8;
    dStack_3e0 = dVar9;
    local_3d8 = dVar10;
    dStack_3d0 = dVar7;
    local_3c8 = dVar11;
    dStack_3c0 = dVar12;
    local_3b8 = dVar2;
    pTVar18 = UE::Math::TTransform<double>::ToMatrixWithScale(local_438.WorldTransform,local_148);
    dVar13 = pTVar18->M[0][1];
    (pFVar16->PrimitiveSceneDesc).RenderMatrix.M[0][0] = pTVar18->M[0][0];
    (pFVar16->PrimitiveSceneDesc).RenderMatrix.M[0][1] = dVar13;
    dVar13 = pTVar18->M[0][3];
    (pFVar16->PrimitiveSceneDesc).RenderMatrix.M[0][2] = pTVar18->M[0][2];
    (pFVar16->PrimitiveSceneDesc).RenderMatrix.M[0][3] = dVar13;
    dVar13 = pTVar18->M[1][1];
    (pFVar16->PrimitiveSceneDesc).RenderMatrix.M[1][0] = pTVar18->M[1][0];
    (pFVar16->PrimitiveSceneDesc).RenderMatrix.M[1][1] = dVar13;
    dVar13 = pTVar18->M[1][3];
    (pFVar16->PrimitiveSceneDesc).RenderMatrix.M[1][2] = pTVar18->M[1][2];
    (pFVar16->PrimitiveSceneDesc).RenderMatrix.M[1][3] = dVar13;
    dVar13 = pTVar18->M[2][1];
    (pFVar16->PrimitiveSceneDesc).RenderMatrix.M[2][0] = pTVar18->M[2][0];
    (pFVar16->PrimitiveSceneDesc).RenderMatrix.M[2][1] = dVar13;
    dVar13 = pTVar18->M[2][3];
    (pFVar16->PrimitiveSceneDesc).RenderMatrix.M[2][2] = pTVar18->M[2][2];
    (pFVar16->PrimitiveSceneDesc).RenderMatrix.M[2][3] = dVar13;
    dVar13 = pTVar18->M[3][1];
    (pFVar16->PrimitiveSceneDesc).RenderMatrix.M[3][0] = pTVar18->M[3][0];
    (pFVar16->PrimitiveSceneDesc).RenderMatrix.M[3][1] = dVar13;
    dVar13 = pTVar18->M[3][3];
    (pFVar16->PrimitiveSceneDesc).RenderMatrix.M[3][2] = pTVar18->M[3][2];
    (pFVar16->PrimitiveSceneDesc).RenderMatrix.M[3][3] = dVar13;
    local_3b0 = ((local_438.WorldTransform)->Translation).XY.m128d_f64[0];
    dStack_3a8 = ((local_438.WorldTransform)->Translation).XY.m128d_f64[1];
    local_3a0 = ((local_438.WorldTransform)->Translation).ZW.m128d_f64[0];
    (pFVar16->PrimitiveSceneDesc).LocalBounds.Origin.field0_0x0._s_0.X = dVar8;
    (pFVar16->PrimitiveSceneDesc).LocalBounds.Origin.field0_0x0._s_0.Y = dVar9;
    (pFVar16->PrimitiveSceneDesc).PrimitiveSceneData = &pFVar16->PrimitiveSceneData;
    (pFVar16->PrimitiveSceneDesc).LocalBounds.Origin.field0_0x0._s_0.Z = dVar10;
    (pFVar16->PrimitiveSceneDesc).LocalBounds.BoxExtent.field0_0x0._s_0.X = dVar7;
    (pFVar16->PrimitiveSceneDesc).LocalBounds.BoxExtent.field0_0x0._s_0.Y = dVar11;
    (pFVar16->PrimitiveSceneDesc).LocalBounds.BoxExtent.field0_0x0._s_0.Z = dVar12;
    (pFVar16->PrimitiveSceneDesc).AttachmentRootPosition.field0_0x0._s_0.X = local_3b0;
    (pFVar16->PrimitiveSceneDesc).AttachmentRootPosition.field0_0x0._s_0.Y = dStack_3a8;
    (pFVar16->PrimitiveSceneDesc).LocalBounds.SphereRadius = dVar2;
    (pFVar16->PrimitiveSceneDesc).AttachmentRootPosition.field0_0x0._s_0.Z = local_3a0;
    UE::Math::TTransform<double>::ToMatrixWithScale(local_438.WorldTransform,&local_398);
    dVar7 = (double)CONCAT44((uint)((ulonglong)(local_398.M[1][0] * local_3c8) >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(local_398.M[1][0] * local_3c8,0) &
                             (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
            (double)CONCAT44((uint)((ulonglong)(local_398.M[0][0] * dStack_3d0) >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(local_398.M[0][0] * dStack_3d0,0) &
                             (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
            (double)CONCAT44((uint)((ulonglong)(local_398.M[2][0] * dVar12) >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(local_398.M[2][0] * dVar12,0) &
                             (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    dStack_400 = (double)CONCAT44((uint)((ulonglong)(local_398.M[1][1] * local_3c8) >> 0x20) &
                                  _UNK_15061cc8c,
                                  SUB84(local_398.M[1][1] * local_3c8,0) & _UNK_15061cc88) +
                 (double)CONCAT44((uint)((ulonglong)(local_398.M[0][1] * dStack_3d0) >> 0x20) &
                                  _UNK_15061cc8c,
                                  SUB84(local_398.M[0][1] * dStack_3d0,0) & _UNK_15061cc88) +
                 (double)CONCAT44((uint)((ulonglong)(local_398.M[2][1] * dVar12) >> 0x20) &
                                  _UNK_15061cc8c,
                                  SUB84(local_398.M[2][1] * dVar12,0) & _UNK_15061cc88);
    local_408._0_4_ = SUB84(dVar7,0);
    local_408._4_4_ = (undefined4)((ulonglong)dVar7 >> 0x20);
    dStack_3f8 = (double)CONCAT44((uint)((ulonglong)(local_398.M[1][2] * local_3c8) >> 0x20) &
                                  __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                  SUB84(local_398.M[1][2] * local_3c8,0) &
                                  (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
                 (double)CONCAT44((uint)((ulonglong)(local_398.M[0][2] * dStack_3d0) >> 0x20) &
                                  __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                  SUB84(local_398.M[0][2] * dStack_3d0,0) &
                                  (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
                 (double)CONCAT44((uint)((ulonglong)(local_398.M[2][2] * dVar12) >> 0x20) &
                                  __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                  SUB84(local_398.M[2][2] * dVar12,0) &
                                  (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    local_398.M[3][0] =
         local_398.M[1][0] * dVar9 + local_398.M[0][0] * dVar8 + local_398.M[2][0] * dVar10 +
         local_398.M[3][0];
    local_398.M[3][1] =
         local_398.M[1][1] * dVar9 + local_398.M[0][1] * dVar8 + local_398.M[2][1] * dVar10 +
         local_398.M[3][1];
    uVar20 = SUB84(local_398.M[3][1],0);
    uVar21 = (undefined4)((ulonglong)local_398.M[3][1] >> 0x20);
    auVar22._0_8_ =
         local_398.M[1][0] * local_398.M[1][0] + local_398.M[0][0] * local_398.M[0][0] +
         local_398.M[2][0] * local_398.M[2][0];
    auVar22._8_8_ =
         local_398.M[1][1] * local_398.M[1][1] + local_398.M[0][1] * local_398.M[0][1] +
         local_398.M[2][1] * local_398.M[2][1];
    auVar23._8_4_ = SUB84(auVar22._8_8_,0);
    auVar23._0_8_ = auVar22._8_8_;
    auVar23._12_4_ = (int)((ulonglong)auVar22._8_8_ >> 0x20);
    auVar23 = maxpd(auVar22,auVar23);
    dVar2 = local_398.M[1][2] * local_398.M[1][2] + local_398.M[0][2] * local_398.M[0][2] +
            local_398.M[2][2] * local_398.M[2][2];
    local_3f0 = SQRT(dStack_3f8 * dStack_3f8 + dVar7 * dVar7 + dStack_400 * dStack_400);
    auVar6._8_4_ = SUB84(dVar2,0);
    auVar6._0_8_ = dVar2;
    auVar6._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    auVar23 = maxpd(auVar23,auVar6);
    dStack_410 = local_398.M[1][2] * dVar9 + local_398.M[0][2] * dVar8 + local_398.M[2][2] * dVar10
                 + local_398.M[3][2];
    auVar5._8_4_ = uVar20;
    auVar5._0_8_ = local_398.M[3][0];
    auVar5._12_4_ = uVar21;
    *(undefined1 (*) [16])&(pFVar16->PrimitiveSceneDesc).Bounds.Origin.field0_0x0 = auVar5;
    dVar2 = SQRT(auVar23._0_8_) * local_3b8;
    local_420._8_4_ = uVar20;
    local_420._0_8_ = local_398.M[3][0];
    local_420._12_4_ = uVar21;
    if (dVar2 <= local_3f0) {
      local_3f0 = dVar2;
    }
    auVar4._8_4_ = (undefined4)local_408;
    auVar4._0_8_ = dStack_410;
    auVar4._12_4_ = local_408._4_4_;
    *(undefined1 (*) [16])((longlong)&(pFVar16->PrimitiveSceneDesc).Bounds.Origin.field0_0x0 + 0x10)
         = auVar4;
    *(double *)((longlong)&(pFVar16->PrimitiveSceneDesc).Bounds.BoxExtent.field0_0x0 + 8) =
         dStack_400;
    (pFVar16->PrimitiveSceneDesc).Bounds.BoxExtent.field0_0x0._s_0.Z = dStack_3f8;
    (pFVar16->PrimitiveSceneDesc).Bounds.SphereRadius = local_3f0;
    local_408 = dVar7;
    FStaticMeshSceneProxyDesc::FStaticMeshSceneProxyDesc((FStaticMeshSceneProxyDesc *)local_318);
    local_250 = (param_2->OverrideMaterials).ArrayNum;
    local_258 = (param_2->OverrideMaterials).AllocatorInstance.Data;
    local_218 = this_00;
    if (local_250 < 0) {
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L"");
      if (bVar14) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    local_24c = local_438.BoneTransforms._4_4_;
    local_2d8 = &pFVar16->CustomPrimitiveData;
    local_2d0 = this->Scene;
    local_268 = local_2d0->FeatureLevel;
    local_2a4 = (local_438.bVisible & 1) << 0xb | local_2a4 & 0xfffff7ff;
    local_2a8 = (param_2->bOwnerNoSee * 2 | param_2->bOnlyOwnerSee) << 2 | local_2a8 & 0xfffffff3;
    TArray<unsigned_int,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)(local_318 + 0x30),
               &param_2->Owners);
    this_01 = ::operator_new(0xb90);
    if (this_01 != (FStaticMeshSceneProxy *)0x0) {
      pFVar19 = FStaticMeshSceneProxy::FStaticMeshSceneProxy
                          (this_01,(FStaticMeshSceneProxyDesc *)local_318,false);
    }
    (pFVar16->PrimitiveSceneData).SceneProxy = (FPrimitiveSceneProxy *)pFVar19;
    (**(code **)this->Scene->_padding_)(this->Scene,&pFVar16->PrimitiveSceneDesc);
    *param_3 = pFVar16;
    FStaticMeshSceneProxyDesc::~FStaticMeshSceneProxyDesc((FStaticMeshSceneProxyDesc *)local_318);
  }
  return;
}

// Render_OnDestroy @ 14571e820

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FStaticMeshStateStreamImpl::Render_OnDestroy
          (FStaticMeshStateStreamImpl *this,FStaticMeshStaticState *param_1,
          FStaticMeshDynamicState *param_2,FStaticMeshObject **param_3)

{
  longlong *plVar1;
  FStaticMeshObject *pFVar2;
  longlong lVar3;
  
  pFVar2 = *param_3;
  if (pFVar2 != (FStaticMeshObject *)0x0) {
    plVar1 = &pFVar2->_padding_;
    LOCK();
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar3 == 1) && (plVar1 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014571e847. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(pFVar2->_padding_ + 8))(pFVar2,1);
      return;
    }
  }
  return;
}

// Render_OnUpdate @ 14571e9b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FStaticMeshStateStreamImpl::Render_OnUpdate
          (FStaticMeshStateStreamImpl *this,FStaticMeshStaticState *param_1,
          FStaticMeshDynamicState *param_2,FStaticMeshObject **param_3)

{
  undefined1 *puVar1;
  int iVar2;
  FStaticMeshObject *pFVar3;
  FTransformObject *pFVar4;
  code *pcVar5;
  bool bVar6;
  FTransformObject *pFVar7;
  
  pFVar3 = *param_3;
  if ((pFVar3 != (FStaticMeshObject *)0x0) && ((param_2->ModifiedFlags & 1) != 0)) {
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
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\StateStream\\StaticMeshStateStreamImpl.cpp"
                           ,0x31,L"");
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

// SetTransformObject @ 145721cf0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FStaticMeshStateStreamImpl::SetTransformObject
          (FStaticMeshStateStreamImpl *this,FStaticMeshObject *param_1,
          FStaticMeshDynamicState *param_2)

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
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\StateStream\\StaticMeshStateStreamImpl.cpp"
                         ,0x31,L"");
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

