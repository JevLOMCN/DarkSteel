// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 6

// FParticleSystemStateStreamCascade @ 1456dc7b0

FParticleSystemStateStreamCascade * __thiscall
FParticleSystemStateStreamCascade::FParticleSystemStateStreamCascade
          (FParticleSystemStateStreamCascade *this,FSceneInterface *param_1)

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
  this->_padding_ = (longlong)&_vftable__for__IParticleSystemStateStream__;
  this->_padding_ = (longlong)&_vftable__for__IStateStreamHandleOwner__;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->Scene = param_1;
  (this->Objects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Objects).ArrayNum = 0;
  (this->Objects).ArrayMax = 0;
  *(undefined4 *)&this->_padding_ = 1;
  return this;
}

// Render_OnCreate @ 14571cc20

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
FParticleSystemStateStreamCascade::Render_OnCreate
          (FParticleSystemStateStreamCascade *this,FParticleSystemStaticState *param_1,
          FParticleSystemDynamicState *param_2,FParticleSystemObjectCascade **param_3,bool param_4)

{
  undefined1 *puVar1;
  int *piVar2;
  TArray<FParticleSystemObjectCascade_*,TSizedDefaultAllocator<32>_> *pTVar3;
  TObjectPtr<UFXSystemAsset>_u_0 TVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  double dVar8;
  undefined1 auVar9 [16];
  double dVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  FParticleSystemObjectCascade *this_00;
  TMatrix<double> *pTVar14;
  FParticleSystemSceneProxy *this_01;
  FParticleSystemSceneProxy *pFVar15;
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined4 uVar20;
  undefined4 uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  FParticleSystemObjectCascade *local_378;
  FParticleSystemStaticState *local_370;
  double local_368;
  double dStack_360;
  double local_358;
  double dStack_350;
  double local_348;
  double dStack_340;
  double local_338;
  Info local_330;
  undefined1 local_318 [16];
  double dStack_308;
  double local_300;
  undefined8 uStack_2f8;
  double dStack_2f0;
  double local_2e8;
  double local_2e0;
  double dStack_2d8;
  double local_2d0;
  TMatrix<double> local_2c8;
  FParticleSystemSceneProxyDesc local_248;
  TMatrix<double> local_158 [2];
  
  local_370 = param_1;
  if (*param_3 != (FParticleSystemObjectCascade *)0x0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("!UserData",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\StateStream\\ParticleSystemStateStreamImpl.cpp"
                        ,0x140,L"");
    if (bVar11) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  this_00 = ::operator_new(0x200);
  if (this_00 == (FParticleSystemObjectCascade *)0x0) {
    this_00 = (FParticleSystemObjectCascade *)0x0;
  }
  else {
    *(undefined4 *)&this_00->field_0x24 = 0;
    memset(&(this_00->PrimitiveSceneData).AttachmentCounter,0,0x1b0);
    (this_00->PrimitiveSceneData).LastRenderTime = -1000.0;
    (this_00->PrimitiveSceneData).bAlwaysVisible = 0;
    *(undefined ***)this_00 =
         &FParticleSystemObjectCascade::_vftable__for__FTransformObjectListener__;
    *(undefined ***)&this_00->field_0x18 =
         &FParticleSystemObjectCascade::_vftable__for__IParticleEmitterInstanceOwner__;
    *(undefined4 *)&this_00->field_0x20 = 0;
    *(undefined8 *)&this_00->field_0x8 = 0;
    *(undefined8 *)&this_00->field_0x10 = 0;
    (this_00->TransformObject).Reference = (FTransformObject *)0x0;
    (this_00->CustomPrimitiveData).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this_00->CustomPrimitiveData).Data.ArrayNum = 0;
    (this_00->CustomPrimitiveData).Data.ArrayMax = 0;
    (this_00->PrimitiveSceneData).SceneProxy = (FPrimitiveSceneProxy *)0x0;
    (this_00->PrimitiveSceneData).LastRenderTimeOnScreen = -1000.0;
    (this_00->PrimitiveSceneData).AttachmentCounter.Counter = 0;
    (this_00->PrimitiveSceneData).PrimitiveSceneId.PrimIDValue = 0;
    (this_00->PrimitiveSceneData).OwnerLastRenderTimePtr = (FActorLastRenderTime *)0x0;
    LOCK();
    UNLOCK();
    uVar12 = FPrimitiveSceneInfoData::NextPrimitiveId.Counter + 1;
    FPrimitiveSceneInfoData::NextPrimitiveId.Counter =
         FPrimitiveSceneInfoData::NextPrimitiveId.Counter + 1;
    (this_00->PrimitiveSceneData).PrimitiveSceneId.PrimIDValue = uVar12;
    (this_00->PrimitiveSceneDesc).ProxyDesc = (FPrimitiveSceneProxyDesc *)0x0;
    (this_00->PrimitiveSceneDesc).PrimitiveComponentInterface = (IPrimitiveComponent *)0x0;
    (this_00->PrimitiveSceneDesc).PrimitiveSceneData = (FPrimitiveSceneInfoData *)0x0;
    (this_00->PrimitiveSceneDesc).SceneProxy = (FPrimitiveSceneProxy *)0x0;
    (this_00->PrimitiveSceneDesc).LightingAttachmentComponentId = 0;
    (this_00->PrimitiveSceneDesc).LodParentComponentId = 0;
    (this_00->PrimitiveSceneDesc).bShouldAddtoScene = true;
    (this_00->PrimitiveSceneDesc).bRecreateProxyOnUpdateTransform = false;
    (this_00->PrimitiveSceneDesc).bIsUnreachable = false;
    (this_00->PrimitiveSceneDesc).bBulkReregister = false;
    (this_00->PrimitiveSceneDesc).Mobility = Movable;
    (this_00->PrimitiveSceneDesc).PrimitiveUObject = (UObject *)0x0;
    (this_00->PrimitiveSceneDesc).World = (UWorld *)0x0;
    (this_00->EmitterInstances).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this_00->EmitterInstances).ArrayNum = 0;
    (this_00->EmitterInstances).ArrayMax = 0;
    (this_00->RandomStream).InitialSeed = 0;
    (this_00->RandomStream).Seed = 0;
    *(undefined8 *)&(this_00->LWCTile).field0_0x0 =
         UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    (this_00->LWCTile).field0_0x0._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    this_00->bJustRegistered = true;
    this_00->LODLevel = 0;
  }
  pFVar15 = (FParticleSystemSceneProxy *)0x0;
  LOCK();
  *(int *)&this_00->field_0x20 = *(int *)&this_00->field_0x20 + 1;
  UNLOCK();
  SetTransformObject(this,this_00,param_2);
  FTransformObject::GetInfo((this_00->TransformObject).Reference,&local_330);
  dVar16 = __real_408f400000000000;
  local_368 = ___xmm_c08f400000000000c08f400000000000;
  dStack_360 = _UNK_151003248;
  local_348 = ___xmm_408f400000000000408f400000000000;
  dStack_340 = _UNK_151003208;
  local_338 = __real_408f400000000000;
  local_358 = ___xmm_408f400000000000c08f400000000000;
  dStack_350 = _UNK_151003218;
  pTVar14 = UE::Math::TTransform<double>::ToMatrixWithScale(local_330.WorldTransform,local_158);
  dVar8 = pTVar14->M[0][1];
  (this_00->PrimitiveSceneDesc).RenderMatrix.M[0][0] = pTVar14->M[0][0];
  (this_00->PrimitiveSceneDesc).RenderMatrix.M[0][1] = dVar8;
  dVar8 = pTVar14->M[0][3];
  (this_00->PrimitiveSceneDesc).RenderMatrix.M[0][2] = pTVar14->M[0][2];
  (this_00->PrimitiveSceneDesc).RenderMatrix.M[0][3] = dVar8;
  dVar8 = pTVar14->M[1][1];
  (this_00->PrimitiveSceneDesc).RenderMatrix.M[1][0] = pTVar14->M[1][0];
  (this_00->PrimitiveSceneDesc).RenderMatrix.M[1][1] = dVar8;
  dVar8 = pTVar14->M[1][3];
  (this_00->PrimitiveSceneDesc).RenderMatrix.M[1][2] = pTVar14->M[1][2];
  (this_00->PrimitiveSceneDesc).RenderMatrix.M[1][3] = dVar8;
  dVar8 = pTVar14->M[2][1];
  (this_00->PrimitiveSceneDesc).RenderMatrix.M[2][0] = pTVar14->M[2][0];
  (this_00->PrimitiveSceneDesc).RenderMatrix.M[2][1] = dVar8;
  dVar8 = pTVar14->M[2][3];
  (this_00->PrimitiveSceneDesc).RenderMatrix.M[2][2] = pTVar14->M[2][2];
  (this_00->PrimitiveSceneDesc).RenderMatrix.M[2][3] = dVar8;
  dVar8 = pTVar14->M[3][1];
  (this_00->PrimitiveSceneDesc).RenderMatrix.M[3][0] = pTVar14->M[3][0];
  (this_00->PrimitiveSceneDesc).RenderMatrix.M[3][1] = dVar8;
  dVar8 = pTVar14->M[3][3];
  (this_00->PrimitiveSceneDesc).RenderMatrix.M[3][2] = pTVar14->M[3][2];
  (this_00->PrimitiveSceneDesc).RenderMatrix.M[3][3] = dVar8;
  local_2e0 = ((local_330.WorldTransform)->Translation).XY.m128d_f64[0];
  dStack_2d8 = ((local_330.WorldTransform)->Translation).XY.m128d_f64[1];
  local_2d0 = ((local_330.WorldTransform)->Translation).ZW.m128d_f64[0];
  (this_00->PrimitiveSceneDesc).PrimitiveSceneData = &this_00->PrimitiveSceneData;
  (this_00->PrimitiveSceneDesc).AttachmentRootPosition.field0_0x0._s_0.X = local_2e0;
  (this_00->PrimitiveSceneDesc).AttachmentRootPosition.field0_0x0._s_0.Y = dStack_2d8;
  (this_00->PrimitiveSceneDesc).AttachmentRootPosition.field0_0x0._s_0.Z = local_2d0;
  (this_00->PrimitiveSceneDesc).LocalBounds.Origin.field0_0x0._s_0.X = -1000.0;
  (this_00->PrimitiveSceneDesc).LocalBounds.Origin.field0_0x0._s_0.Y = -1000.0;
  (this_00->PrimitiveSceneDesc).LocalBounds.Origin.field0_0x0._s_0.Z = -1000.0;
  (this_00->PrimitiveSceneDesc).LocalBounds.BoxExtent.field0_0x0._s_0.X = 1000.0;
  (this_00->PrimitiveSceneDesc).LocalBounds.BoxExtent.field0_0x0._s_0.Y = 1000.0;
  (this_00->PrimitiveSceneDesc).LocalBounds.BoxExtent.field0_0x0._s_0.Z = 1000.0;
  (this_00->PrimitiveSceneDesc).LocalBounds.SphereRadius = 1000.0;
  UE::Math::TTransform<double>::ToMatrixWithScale(local_330.WorldTransform,&local_2c8);
  auVar23._0_8_ =
       (double)CONCAT44((uint)((ulonglong)(local_2c8.M[0][0] * dStack_350) >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(local_2c8.M[0][0] * dStack_350,0) &
                        (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  auVar23._8_4_ = SUB84(local_2c8.M[0][1] * dStack_350,0) & _UNK_15061cc88;
  auVar23._12_4_ = (uint)((ulonglong)(local_2c8.M[0][1] * dStack_350) >> 0x20) & _UNK_15061cc8c;
  auVar17._0_8_ =
       (double)CONCAT44((uint)((ulonglong)(local_2c8.M[2][0] * dStack_340) >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(local_2c8.M[2][0] * dStack_340,0) &
                        (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  auVar17._8_4_ = SUB84(local_2c8.M[2][1] * dStack_340,0) & _UNK_15061cc88;
  auVar17._12_4_ = (uint)((ulonglong)(local_2c8.M[2][1] * dStack_340) >> 0x20) & _UNK_15061cc8c;
  local_300 = (double)CONCAT44((uint)((ulonglong)(local_2c8.M[1][0] * local_348) >> 0x20) &
                               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                               SUB84(local_2c8.M[1][0] * local_348,0) &
                               (uint)__xmm_7fffffffffffffff7fffffffffffffff) + auVar23._0_8_ +
              auVar17._0_8_;
  dVar10 = (double)CONCAT44((uint)((ulonglong)(local_2c8.M[1][1] * local_348) >> 0x20) &
                            _UNK_15061cc8c,SUB84(local_2c8.M[1][1] * local_348,0) & _UNK_15061cc88)
           + auVar23._8_8_ + auVar17._8_8_;
  auVar9._8_4_ = SUB84(dVar10,0);
  auVar9._0_8_ = local_300;
  auVar9._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  dStack_2f0 = (double)CONCAT44((uint)((ulonglong)(local_2c8.M[1][2] * local_348) >> 0x20) &
                                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                SUB84(local_2c8.M[1][2] * local_348,0) &
                                (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
               (double)CONCAT44((uint)((ulonglong)(local_2c8.M[0][2] * dStack_350) >> 0x20) &
                                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                SUB84(local_2c8.M[0][2] * dStack_350,0) &
                                (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
               (double)CONCAT44((uint)((ulonglong)(local_2c8.M[2][2] * dStack_340) >> 0x20) &
                                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                SUB84(local_2c8.M[2][2] * dStack_340,0) &
                                (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  local_2c8.M[3][0] =
       local_2c8.M[1][0] * dStack_360 + local_2c8.M[0][0] * local_368 +
       local_2c8.M[2][0] * local_358 + local_2c8.M[3][0];
  local_2c8.M[3][1] =
       local_2c8.M[1][1] * dStack_360 + local_2c8.M[0][1] * local_368 +
       local_2c8.M[2][1] * local_358 + local_2c8.M[3][1];
  uVar20 = SUB84(local_2c8.M[3][1],0);
  uVar21 = (undefined4)((ulonglong)local_2c8.M[3][1] >> 0x20);
  auVar22._0_8_ =
       local_2c8.M[1][0] * local_2c8.M[1][0] + local_2c8.M[0][0] * local_2c8.M[0][0] +
       local_2c8.M[2][0] * local_2c8.M[2][0];
  auVar22._8_8_ =
       local_2c8.M[1][1] * local_2c8.M[1][1] + local_2c8.M[0][1] * local_2c8.M[0][1] +
       local_2c8.M[2][1] * local_2c8.M[2][1];
  auVar18._8_4_ = SUB84(auVar22._8_8_,0);
  auVar18._0_8_ = auVar22._0_8_;
  auVar18._12_4_ = (int)((ulonglong)auVar22._8_8_ >> 0x20);
  auVar19._8_8_ = auVar22._8_8_;
  auVar19._0_8_ = auVar18._8_8_;
  auVar23 = maxpd(auVar22,auVar19);
  dVar8 = local_2c8.M[1][2] * local_2c8.M[1][2] + local_2c8.M[0][2] * local_2c8.M[0][2] +
          local_2c8.M[2][2] * local_2c8.M[2][2];
  auVar24._8_4_ = uVar20;
  auVar24._0_8_ = local_2c8.M[3][0];
  auVar24._12_4_ = uVar21;
  *(undefined1 (*) [16])&(this_00->PrimitiveSceneDesc).Bounds.Origin.field0_0x0 = auVar24;
  local_2e8 = SQRT(dStack_2f0 * dStack_2f0 + local_300 * local_300 + dVar10 * dVar10);
  auVar7._8_4_ = SUB84(dVar8,0);
  auVar7._0_8_ = dVar8;
  auVar7._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  auVar24 = maxpd(auVar23,auVar7);
  uStack_2f8 = auVar9._8_8_;
  dStack_308 = local_2c8.M[1][2] * dStack_360 + local_2c8.M[0][2] * local_368 +
               local_2c8.M[2][2] * local_358 + local_2c8.M[3][2];
  dVar16 = SQRT(auVar24._0_8_) * dVar16;
  local_318._8_4_ = uVar20;
  local_318._0_8_ = local_2c8.M[3][0];
  local_318._12_4_ = uVar21;
  if (dVar16 <= local_2e8) {
    local_2e8 = dVar16;
  }
  (this_00->PrimitiveSceneDesc).Bounds.Origin.field0_0x0._s_0.Z = dStack_308;
  (this_00->PrimitiveSceneDesc).Bounds.BoxExtent.field0_0x0._s_0.X = local_300;
  *(undefined8 *)((longlong)&(this_00->PrimitiveSceneDesc).Bounds.BoxExtent.field0_0x0 + 8) =
       uStack_2f8;
  (this_00->PrimitiveSceneDesc).Bounds.BoxExtent.field0_0x0._s_0.Z = dStack_2f0;
  (this_00->PrimitiveSceneDesc).Bounds.SphereRadius = local_2e8;
  TVar4 = (param_2->SystemAsset).field0_0x0;
  FParticleSystemSceneProxyDesc::FParticleSystemSceneProxyDesc(&local_248);
  local_248._padding_ = (longlong)&this_00->CustomPrimitiveData;
  local_248._padding_ = (longlong)this->Scene;
  local_248._padding_._0_4_ = ((FSceneInterface *)local_248._padding_)->FeatureLevel;
  local_248._padding_._4_4_ =
       (local_330.bVisible & 1) << 0xb | local_248._padding_._4_4_ & 0xfffff7ff;
  this_00->Template = (UParticleSystem *)TVar4;
  local_248.SystemAsset = (UParticleSystem *)TVar4;
  FParticleSystemObjectCascade::InitializeSystem(this_00,&local_248,local_370,param_2);
  this_01 = ::operator_new(0x3b0);
  if (this_01 != (FParticleSystemSceneProxy *)0x0) {
    pFVar15 = FParticleSystemSceneProxy::FParticleSystemSceneProxy(this_01,&local_248);
  }
  (this_00->PrimitiveSceneData).SceneProxy = (FPrimitiveSceneProxy *)pFVar15;
  (**(code **)this->Scene->_padding_)(this->Scene,&this_00->PrimitiveSceneDesc);
  pTVar3 = &this->Objects;
  *param_3 = this_00;
  pFVar5 = (pTVar3->AllocatorInstance).Data;
  local_378 = this_00;
  if ((pFVar5 <= (FScriptContainerElement *)&local_378) &&
     ((FScriptContainerElement *)&local_378 < pFVar5 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar11) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  iVar13 = (this->Objects).ArrayNum;
  piVar2 = &(this->Objects).ArrayMax;
  if (iVar13 == *piVar2) {
    iVar13 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar3->AllocatorInstance,piVar2);
  }
  (this->Objects).ArrayNum = iVar13 + 1;
  *(FParticleSystemObjectCascade **)((pTVar3->AllocatorInstance).Data + (longlong)iVar13 * 8) =
       local_378;
  FPrimitiveSceneProxyDesc::~FPrimitiveSceneProxyDesc((FPrimitiveSceneProxyDesc *)&local_248);
  return;
}

// Render_OnDestroy @ 14571e5d0

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
FParticleSystemStateStreamCascade::Render_OnDestroy
          (FParticleSystemStateStreamCascade *this,FParticleSystemStaticState *param_1,
          FParticleSystemDynamicState *param_2,FParticleSystemObjectCascade **param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  undefined1 *puVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  if (*param_3 != (FParticleSystemObjectCascade *)0x0) {
    pFVar1 = (this->Objects).AllocatorInstance.Data;
    if ((pFVar1 <= param_3) && (param_3 < pFVar1 + (longlong)(this->Objects).ArrayMax * 8)) {
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
    iVar7 = (this->Objects).ArrayNum;
    lVar4 = (longlong)iVar7;
    if (iVar7 != 0) {
      iVar9 = 0;
      pFVar1 = (this->Objects).AllocatorInstance.Data;
      bVar3 = *(FParticleSystemObjectCascade **)pFVar1 != *param_3;
      lVar6 = 0;
      iVar7 = 0;
      do {
        lVar6 = lVar6 + 1;
        iVar8 = iVar7 + 1;
        if (lVar6 < lVar4) {
          do {
            if (bVar3 != (*(FParticleSystemObjectCascade **)(pFVar1 + lVar6 * 8) != *param_3))
            break;
            iVar8 = iVar8 + 1;
            lVar6 = lVar6 + 1;
          } while (lVar6 < lVar4);
        }
        if (bVar3 != false) {
          if (iVar9 != iVar7) {
            memmove(pFVar1 + (longlong)iVar9 * 8,pFVar1 + (longlong)iVar7 * 8,
                    (longlong)(iVar8 - iVar7) << 3);
          }
          iVar9 = iVar9 + (iVar8 - iVar7);
        }
        bVar3 = (bool)(bVar3 ^ 1);
        iVar7 = iVar8;
      } while (lVar6 < lVar4);
      (this->Objects).ArrayNum = iVar9;
    }
    puVar5 = &(*param_3)->field_0x20;
    LOCK();
    iVar7 = *(int *)puVar5;
    *(int *)puVar5 = *(int *)puVar5 + -1;
    UNLOCK();
    if (iVar7 == 1) {
      TRefCountingMixin<FParticleSystemObjectCascade,1>::StaticDestroyMixin
                ((TTransactionalAtomicRefCount<unsigned_int> *)puVar5);
    }
    *param_3 = (FParticleSystemObjectCascade *)0x0;
  }
  return;
}

// Render_OnUpdate @ 14571e8c0

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
FParticleSystemStateStreamCascade::Render_OnUpdate
          (FParticleSystemStateStreamCascade *this,FParticleSystemStaticState *param_1,
          FParticleSystemDynamicState *param_2,FParticleSystemObjectCascade **param_3)

{
  undefined1 *puVar1;
  int iVar2;
  FParticleSystemObjectCascade *pFVar3;
  FTransformObject *pFVar4;
  code *pcVar5;
  bool bVar6;
  FTransformObject *pFVar7;
  
  pFVar3 = *param_3;
  if ((pFVar3 != (FParticleSystemObjectCascade *)0x0) && ((param_2->ModifiedFlags & 1) != 0)) {
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
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\StateStream\\ParticleSystemStateStreamImpl.cpp"
                           ,0x138,L"");
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

// Render_PostUpdate @ 14571f090

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
FParticleSystemStateStreamCascade::Render_PostUpdate(FParticleSystemStateStreamCascade *this)

{
  longlong *plVar1;
  longlong *plVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  longlong *plVar11;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  plVar1 = &this->_padding_;
  iVar5 = (int)this->_padding_;
  plVar4 = &this->_padding_;
  plVar11 = (longlong *)*plVar1;
  plVar2 = plVar11 + iVar5;
  while( true ) {
    if ((int)*plVar4 != iVar5) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TStateStream<FParticleSystemStateStreamSettingsCascade>::FInstance_*,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (plVar11 == plVar2) break;
    lVar6 = *plVar11;
    if (*(char *)(lVar6 + 0x30) == '\0') {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    (**(code **)(this->_padding_ + 0x70))(this,lVar6,lVar6 + 0x10,lVar6 + 0x38);
    if (*(char *)(lVar6 + 0x30) != '\0') {
      FStateStreamHandle::~FStateStreamHandle((FStateStreamHandle *)(lVar6 + 0x18));
      *(undefined1 *)(lVar6 + 0x30) = 0;
    }
    plVar11 = plVar11 + 1;
  }
  iVar5 = (int)*plVar4;
  if (iVar5 < 0) {
    iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,-iVar5,(ForAnyElementType *)plVar1,(int *)plVar4,
                       (int *)((longlong)&this->_padding_ + 4));
    memset((void *)(*plVar1 + (longlong)iVar9 * 8),0,(longlong)-iVar5 << 3);
  }
  else if (0 < iVar5) {
    *(int *)plVar4 = (int)*plVar4 - iVar5;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,(ForAnyElementType *)plVar1,(int)*plVar4,(int *)((longlong)&this->_padding_ + 4))
    ;
  }
  pFVar10 = (this->Objects).AllocatorInstance.Data;
  iVar5 = (this->Objects).ArrayNum;
  pFVar3 = pFVar10 + (longlong)iVar5 * 8;
  while( true ) {
    if ((this->Objects).ArrayNum != iVar5) {
      `TCheckedPointerIterator<FParticleSystemObjectCascade_*,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res10);
    }
    if (pFVar10 == pFVar3) break;
    FParticleSystemObjectCascade::Update(*(FParticleSystemObjectCascade **)pFVar10);
    pFVar10 = pFVar10 + 8;
  }
  return;
}

// SetTransformObject @ 145721b10

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
FParticleSystemStateStreamCascade::SetTransformObject
          (FParticleSystemStateStreamCascade *this,FParticleSystemObjectCascade *param_1,
          FParticleSystemDynamicState *param_2)

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
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\StateStream\\ParticleSystemStateStreamImpl.cpp"
                         ,0x138,L"");
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

