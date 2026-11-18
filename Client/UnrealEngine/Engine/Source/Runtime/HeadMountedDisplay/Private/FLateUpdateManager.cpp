// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HeadMountedDisplay
// Functions: 8

// FLateUpdateManager @ 14594e0e0

FLateUpdateManager * __thiscall FLateUpdateManager::FLateUpdateManager(FLateUpdateManager *this)

{
  this->_padding_ = (longlong)&___7FLateUpdateManager__6B_;
  *&(this->PipelinedUpdateStatesGame).ParentToWorld.Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->PipelinedUpdateStatesGame).ParentToWorld.Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->PipelinedUpdateStatesGame).ParentToWorld.Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->PipelinedUpdateStatesGame).ParentToWorld.Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->PipelinedUpdateStatesGame).ParentToWorld.Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->PipelinedUpdateStatesGame).ParentToWorld.Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  *(undefined8 *)&(this->PipelinedUpdateStatesGame).Primitives = 0;
  *(undefined8 *)&(this->PipelinedUpdateStatesGame).Primitives.field_0x8 = 0;
  *(undefined8 *)&(this->PipelinedUpdateStatesGame).Primitives.field_0x20 = 0;
  *(undefined4 *)&(this->PipelinedUpdateStatesGame).Primitives.field_0x28 = 0;
  *(undefined4 *)&(this->PipelinedUpdateStatesGame).Primitives.field_0x2c = 0x80;
  *(undefined4 *)&(this->PipelinedUpdateStatesGame).Primitives.field_0x34 = 0;
  *(undefined4 *)&(this->PipelinedUpdateStatesGame).Primitives.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->PipelinedUpdateStatesGame).Primitives.field_0x40 = 0;
  *(undefined4 *)&(this->PipelinedUpdateStatesGame).Primitives.field_0x48 = 0;
  (this->PipelinedUpdateStatesGame).bSkip = false;
  *&(this->PipelinedUpdateStatesRendering).ParentToWorld.Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->PipelinedUpdateStatesRendering).ParentToWorld.Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->PipelinedUpdateStatesRendering).ParentToWorld.Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->PipelinedUpdateStatesRendering).ParentToWorld.Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->PipelinedUpdateStatesRendering).ParentToWorld.Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->PipelinedUpdateStatesRendering).ParentToWorld.Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  *(undefined8 *)&(this->PipelinedUpdateStatesRendering).Primitives = 0;
  *(undefined8 *)&(this->PipelinedUpdateStatesRendering).Primitives.field_0x8 = 0;
  *(undefined8 *)&(this->PipelinedUpdateStatesRendering).Primitives.field_0x20 = 0;
  *(undefined4 *)&(this->PipelinedUpdateStatesRendering).Primitives.field_0x28 = 0;
  *(undefined4 *)&(this->PipelinedUpdateStatesRendering).Primitives.field_0x2c = 0x80;
  *(undefined4 *)&(this->PipelinedUpdateStatesRendering).Primitives.field_0x34 = 0;
  *(undefined4 *)&(this->PipelinedUpdateStatesRendering).Primitives.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->PipelinedUpdateStatesRendering).Primitives.field_0x40 = 0;
  *(undefined4 *)&(this->PipelinedUpdateStatesRendering).Primitives.field_0x48 = 0;
  (this->PipelinedUpdateStatesRendering).bSkip = false;
  return this;
}

// ~FLateUpdateManager @ 14594ea10

void __thiscall FLateUpdateManager::~FLateUpdateManager(FLateUpdateManager *this)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->PipelinedUpdateStatesRendering).Primitives.field_0x48 = 0;
  this->_padding_ = (longlong)&___7FLateUpdateManager__6B_;
  pvVar1 = *(void **)&(this->PipelinedUpdateStatesRendering).Primitives.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FPrimitiveSceneInfo_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FPrimitiveSceneInfo_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FPrimitiveSceneInfo_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->PipelinedUpdateStatesRendering).Primitives);
  *(undefined4 *)&(this->PipelinedUpdateStatesGame).Primitives.field_0x48 = 0;
  pvVar1 = *(void **)&(this->PipelinedUpdateStatesGame).Primitives.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FPrimitiveSceneInfo_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FPrimitiveSceneInfo_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FPrimitiveSceneInfo_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->PipelinedUpdateStatesGame).Primitives);
  return;
}

// operator() @ 14594eef0

void __thiscall
`FLateUpdateManager::Setup'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)((longlong)this + 8);
  lVar1 = *(longlong *)((longlong)this + 0xc0);
  *(undefined8 *)(lVar1 + 0xd0) = *(undefined8 *)this;
  *(undefined8 *)(lVar1 + 0xd8) = uVar2;
  uVar2 = *(undefined8 *)((longlong)this + 0x18);
  *(undefined8 *)(lVar1 + 0xe0) = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(lVar1 + 0xe8) = uVar2;
  uVar2 = *(undefined8 *)((longlong)this + 0x28);
  *(undefined8 *)(lVar1 + 0xf0) = *(undefined8 *)((longlong)this + 0x20);
  *(undefined8 *)(lVar1 + 0xf8) = uVar2;
  uVar2 = *(undefined8 *)((longlong)this + 0x38);
  *(undefined8 *)(lVar1 + 0x100) = *(undefined8 *)((longlong)this + 0x30);
  *(undefined8 *)(lVar1 + 0x108) = uVar2;
  uVar2 = *(undefined8 *)((longlong)this + 0x48);
  *(undefined8 *)(lVar1 + 0x110) = *(undefined8 *)((longlong)this + 0x40);
  *(undefined8 *)(lVar1 + 0x118) = uVar2;
  uVar2 = *(undefined8 *)((longlong)this + 0x58);
  *(undefined8 *)(lVar1 + 0x120) = *(undefined8 *)((longlong)this + 0x50);
  *(undefined8 *)(lVar1 + 0x128) = uVar2;
  if ((TSet<TTuple<FPrimitiveSceneInfo_*,int>,TDefaultMapHashableKeyFuncs<FPrimitiveSceneInfo_*,int,0>,FDefaultSetAllocator>
       *)(lVar1 + 0x130) !=
      (TSet<TTuple<FPrimitiveSceneInfo_*,int>,TDefaultMapHashableKeyFuncs<FPrimitiveSceneInfo_*,int,0>,FDefaultSetAllocator>
       *)((longlong)this + 0x60)) {
    TSet<TTuple<FPrimitiveSceneInfo_*,int>,TDefaultMapHashableKeyFuncs<FPrimitiveSceneInfo_*,int,0>,FDefaultSetAllocator>
    ::
    Move<TSet<TTuple<FPrimitiveSceneInfo_*,int>,TDefaultMapHashableKeyFuncs<FPrimitiveSceneInfo_*,int,0>,FDefaultSetAllocator>_>
              ((TSet<TTuple<FPrimitiveSceneInfo_*,int>,TDefaultMapHashableKeyFuncs<FPrimitiveSceneInfo_*,int,0>,FDefaultSetAllocator>
                *)(lVar1 + 0x130),
               (TSet<TTuple<FPrimitiveSceneInfo_*,int>,TDefaultMapHashableKeyFuncs<FPrimitiveSceneInfo_*,int,0>,FDefaultSetAllocator>
                *)((longlong)this + 0x60));
  }
  *(undefined1 *)(lVar1 + 0x180) = *(undefined1 *)((longlong)this + 0xb0);
  return;
}

// Apply_RenderThread @ 14594f970

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
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
FLateUpdateManager::Apply_RenderThread
          (FLateUpdateManager *this,FSceneInterface *param_1,TTransform<double> *param_2,
          TTransform<double> *param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong *plVar3;
  undefined1 *puVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [12];
  TMap<FPrimitiveSceneInfo_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveSceneInfo_*,int,0>_>
  *pTVar16;
  FLateUpdateManager *pFVar17;
  TMap<FPrimitiveSceneInfo_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveSceneInfo_*,int,0>_>
  *pTVar18;
  bool bVar19;
  undefined4 extraout_EAX;
  int iVar20;
  FPrimitiveSceneInfo *pFVar21;
  int *piVar22;
  uint uVar23;
  TTransform<double> *pTVar24;
  undefined1 *puVar25;
  int iVar26;
  uint *puVar27;
  uint uVar28;
  longlong lVar29;
  longlong lVar30;
  longlong lVar31;
  double dVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  double dVar36;
  undefined4 uVar37;
  undefined1 auVar35 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined8 in_XMM4_Qb;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined4 uVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  uint uVar57;
  uint uVar58;
  uint uVar59;
  uint uVar60;
  undefined1 auStack_3a8 [32];
  undefined1 local_388 [4];
  int local_384;
  TMap<FPrimitiveSceneInfo_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveSceneInfo_*,int,0>_>
  *local_380;
  FLateUpdateManager *local_378;
  TMap<FPrimitiveSceneInfo_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveSceneInfo_*,int,0>_>
  *local_370;
  int iStack_368;
  uint uStack_364;
  undefined1 *local_360;
  undefined4 uStack_358;
  int iStack_354;
  int local_350;
  undefined4 uStack_34c;
  int iStack_348;
  undefined4 uStack_344;
  TMap<FPrimitiveSceneInfo_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveSceneInfo_*,int,0>_>
  *local_340;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_338;
  undefined8 uStack_318;
  undefined4 local_2f4;
  TTransform<double> local_2e8;
  TTransform<double> local_288;
  TTransform<double> local_228;
  TTransform<double> local_1c8;
  TMatrix<double> local_168;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStack_3a8;
  local_378 = this;
  bVar19 = IsInRenderingThread();
  if ((!bVar19) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInRenderingThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                          ,0x1594,L""), bVar19)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((*(int *)&(this->PipelinedUpdateStatesRendering).Primitives.field_0x8 ==
       *(int *)&(this->PipelinedUpdateStatesRendering).Primitives.field_0x34) ||
     ((this->PipelinedUpdateStatesRendering).bSkip != false)) {
    return;
  }
  local_2e8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_2e8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_2e8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_2e8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_2e8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_2e8.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  local_2e8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_2e8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_2e8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_2e8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_2e8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_2e8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  UE::Math::TTransform<double>::Multiply
            (&local_2e8,param_2,&(this->PipelinedUpdateStatesRendering).ParentToWorld);
  pTVar24 = &local_228;
  local_228.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_228.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_228.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_228.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_228.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_228.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  local_228.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_228.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_228.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_228.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_228.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_228.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  UE::Math::TTransform<double>::Multiply
            (pTVar24,param_3,&(this->PipelinedUpdateStatesRendering).ParentToWorld);
  auVar39._8_8_ = local_2e8.Scale3D.XY.m128d_f64[1];
  auVar39._0_8_ = local_2e8.Scale3D.XY.m128d_f64[0];
  uVar28 = (uint)((ulonglong)local_2e8.Scale3D.ZW.m128d_f64[0] >> 0x20);
  auVar38._8_8_ =
       -(ulonglong)
        ((double)GlobalVectorConstants::SmallNumber.m128_f32[3] <
        (double)CONCAT44(_UNK_15061cc8c &
                         (uint)((ulonglong)local_2e8.Scale3D.ZW.m128d_f64[1] >> 0x20),
                         _UNK_15061cc88 & SUB84(local_2e8.Scale3D.ZW.m128d_f64[1],0)));
  auVar38._0_8_ =
       -(ulonglong)
        ((double)GlobalVectorConstants::SmallNumber.m128_f32[2] <
        (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & uVar28,
                         (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                         SUB84(local_2e8.Scale3D.ZW.m128d_f64[0],0)));
  uVar57 = (uint)__xmm_7fffffffffffffff7fffffffffffffff & SUB84(local_2e8.Scale3D.XY.m128d_f64[0],0)
  ;
  uVar58 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
           (uint)((ulonglong)local_2e8.Scale3D.XY.m128d_f64[0] >> 0x20);
  uVar59 = _UNK_15061cc88 & SUB84(local_2e8.Scale3D.XY.m128d_f64[1],0);
  uVar60 = _UNK_15061cc8c & (uint)((ulonglong)local_2e8.Scale3D.XY.m128d_f64[1] >> 0x20);
  uVar23 = movmskpd((int)pTVar24,auVar38);
  auVar50._8_8_ =
       -(ulonglong)
        ((double)GlobalVectorConstants::SmallNumber.m128_f32[1] < (double)CONCAT44(uVar60,uVar59));
  auVar50._0_8_ =
       -(ulonglong)
        ((double)GlobalVectorConstants::SmallNumber.m128_f32[0] < (double)CONCAT44(uVar58,uVar57));
  iVar20 = movmskpd(extraout_EAX,auVar50);
  if ((uVar23 & 0x3fffffff) == 0 && iVar20 == 0) {
    local_288.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    local_288.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    local_288.Translation.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    local_288.Translation.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    local_288.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    local_288.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  }
  else {
    auVar15._4_8_ = in_XMM4_Qb;
    auVar15._0_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[0]._4_4_;
    auVar45._0_8_ = auVar15._0_8_ << 0x20;
    auVar45._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
    auVar45._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
    auVar46._8_8_ = auVar45._8_8_;
    auVar46._0_8_ = local_2e8.Scale3D.ZW.m128d_f64[0];
    lVar29 = -(ulonglong)
              ((double)CONCAT44(uVar28 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                SUB84(local_2e8.Scale3D.ZW.m128d_f64[0],0) &
                                (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
              (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
    auVar39 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar39);
    lVar30 = -(ulonglong)
              ((double)CONCAT44(uVar58,uVar57) <=
              (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
    lVar31 = -(ulonglong)
              ((double)CONCAT44(uVar60,uVar59) <=
              (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
    local_288.Scale3D.XY.m128d_f64[0]._0_4_ = ~(uint)lVar30 & auVar39._0_4_;
    local_288.Scale3D.XY.m128d_f64[0]._4_4_ = ~(uint)((ulonglong)lVar30 >> 0x20) & auVar39._4_4_;
    local_288.Scale3D.XY.m128d_f64[1]._0_4_ = ~(uint)lVar31 & auVar39._8_4_;
    local_288.Scale3D.XY.m128d_f64[1]._4_4_ = ~(uint)((ulonglong)lVar31 >> 0x20) & auVar39._12_4_;
    auVar39 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar46);
    dVar6 = (double)CONCAT44(local_288.Scale3D.XY.m128d_f64[0]._4_4_,
                             local_288.Scale3D.XY.m128d_f64[0]._0_4_) *
            local_2e8.Translation.XY.m128d_f64[0];
    dVar7 = (double)CONCAT44(local_288.Scale3D.XY.m128d_f64[1]._4_4_,
                             local_288.Scale3D.XY.m128d_f64[1]._0_4_) *
            local_2e8.Translation.XY.m128d_f64[1];
    uVar37 = (undefined4)((ulonglong)dVar7 >> 0x20);
    dVar11 = local_2e8.Rotation.ZW.m128d_f64[0] *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
    dVar12 = local_2e8.Rotation.ZW.m128d_f64[1] *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
    uVar54 = SUB84(dVar12,0);
    uVar55 = (undefined4)((ulonglong)dVar12 >> 0x20);
    local_288.Scale3D.ZW.m128d_f64[0] =
         (double)CONCAT44(~(uint)((ulonglong)lVar29 >> 0x20) & auVar39._4_4_,
                          ~(uint)lVar29 & auVar39._0_4_);
    dVar13 = local_2e8.Rotation.XY.m128d_f64[0] *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
    dVar14 = local_2e8.Rotation.XY.m128d_f64[1] *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
    uVar56 = (undefined4)((ulonglong)dVar14 >> 0x20);
    auVar51._8_4_ = SUB84(dVar7,0);
    auVar51._0_8_ = dVar6;
    auVar51._12_4_ = uVar37;
    dVar9 = local_288.Scale3D.ZW.m128d_f64[0] * local_2e8.Translation.ZW.m128d_f64[0];
    dVar32 = local_2e8.Translation.ZW.m128d_f64[1] * 0.0;
    auVar33._8_4_ = SUB84(dVar11,0);
    auVar33._0_8_ = dVar14;
    auVar33._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
    auVar49._8_4_ = SUB84(dVar14,0);
    auVar49._0_8_ = dVar13;
    auVar49._12_4_ = uVar56;
    auVar40._8_4_ = SUB84(dVar7,0);
    auVar40._0_8_ = dVar6;
    auVar40._12_4_ = uVar37;
    auVar8._8_4_ = SUB84(dVar32,0);
    auVar8._0_8_ = dVar9;
    auVar8._12_4_ = (int)((ulonglong)dVar32 >> 0x20);
    auVar39 = blendpd(auVar40,auVar8,2);
    auVar10._8_4_ = uVar54;
    auVar10._0_8_ = dVar11;
    auVar10._12_4_ = uVar55;
    auVar50 = blendpd(auVar49,auVar10,2);
    auVar52._0_8_ = auVar51._8_8_ * dVar13 - dVar14 * dVar6;
    auVar52._8_8_ = dVar9 * dVar14 - auVar33._8_8_ * dVar7;
    auVar41._0_8_ = auVar39._0_8_ * dVar11 - auVar50._0_8_ * dVar9;
    auVar41._8_8_ = auVar39._8_8_ * dVar12 - auVar50._8_8_ * dVar32;
    auVar34._8_4_ = SUB84(auVar52._8_8_,0);
    auVar34._0_8_ = auVar52._0_8_;
    auVar34._12_4_ = (int)((ulonglong)auVar52._8_8_ >> 0x20);
    dVar32 = auVar34._8_8_ + auVar34._8_8_;
    dVar36 = auVar41._0_8_ + auVar41._0_8_;
    auVar39 = blendpd(auVar52,auVar41,2);
    auVar53._0_8_ = auVar39._0_8_ + auVar39._0_8_;
    auVar53._8_8_ = auVar39._8_8_ + auVar39._8_8_;
    auVar47._8_4_ = SUB84(dVar36,0);
    auVar47._0_8_ = dVar32;
    uVar37 = (undefined4)((ulonglong)dVar36 >> 0x20);
    auVar47._12_4_ = uVar37;
    auVar43._8_4_ = SUB84(dVar36,0);
    auVar43._0_8_ = dVar32;
    auVar43._12_4_ = uVar37;
    auVar42._8_4_ = uVar54;
    auVar42._0_8_ = dVar12;
    auVar42._12_4_ = uVar55;
    auVar39 = blendpd(auVar43,auVar53,2);
    auVar48._0_8_ = auVar47._8_8_ * dVar13 - dVar14 * dVar32;
    auVar48._8_8_ = auVar53._0_8_ * dVar14 - dVar11 * dVar36;
    auVar44._0_8_ = auVar39._0_8_ * dVar11 - auVar50._0_8_ * auVar53._0_8_;
    auVar44._8_8_ = auVar39._8_8_ * dVar12 - auVar50._8_8_ * auVar53._8_8_;
    auVar35._8_4_ = SUB84(auVar48._8_8_,0);
    auVar35._0_8_ = auVar48._0_8_;
    auVar35._12_4_ = (int)((ulonglong)auVar48._8_8_ >> 0x20);
    dVar7 = 0.0 - (auVar42._8_8_ * dVar36 + dVar7 + auVar44._0_8_);
    auVar39 = blendpd(auVar48,auVar44,2);
    local_288.Rotation.XY.m128d_f64[1]._0_4_ = SUB84(dVar14,0);
    local_288.Rotation.XY.m128d_f64[0] = dVar13;
    local_288.Rotation.XY.m128d_f64[1]._4_4_ = uVar56;
    local_288.Rotation.ZW.m128d_f64[1]._0_4_ = uVar54;
    local_288.Rotation.ZW.m128d_f64[0] = dVar11;
    local_288.Rotation.ZW.m128d_f64[1]._4_4_ = uVar55;
    local_288.Translation.ZW.m128d_f64[1] = 0.0;
    local_288.Translation.ZW.m128d_f64[0] = 0.0 - (dVar12 * auVar53._0_8_ + dVar9 + auVar39._0_8_);
    local_288.Scale3D.ZW.m128d_f64[1] = 0.0;
    local_288.Translation.XY.m128d_f64[1]._0_4_ = SUB84(dVar7,0);
    local_288.Translation.XY.m128d_f64[0] = 0.0 - (dVar12 * dVar32 + dVar6 + auVar35._8_8_);
    local_288.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar7 >> 0x20);
  }
  local_1c8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_1c8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_1c8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_1c8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_1c8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_1c8.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  local_1c8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_1c8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_1c8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_1c8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_1c8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_1c8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  UE::Math::TTransform<double>::Multiply(&local_1c8,&local_288,&local_228);
  UE::Math::TTransform<double>::ToMatrixWithScale(&local_1c8,&local_168);
  puVar4 = &(this->PipelinedUpdateStatesRendering).Primitives.field_0x10;
  iVar20 = *(int *)&(this->PipelinedUpdateStatesRendering).Primitives.field_0x28;
  local_380 = &(this->PipelinedUpdateStatesRendering).Primitives;
  iStack_368 = 0;
  local_350 = 0;
  iStack_354 = 0;
  uStack_364 = 1;
  if (iVar20 != 0) {
    puVar27 = *(uint **)&(this->PipelinedUpdateStatesRendering).Primitives.field_0x20;
    if (puVar27 == (uint *)0x0) {
      puVar27 = (uint *)puVar4;
    }
    uStack_364 = *puVar27;
    while (uStack_364 == 0) {
      lVar29 = (longlong)iStack_368;
      local_350 = local_350 + 0x20;
      iStack_368 = iStack_368 + 1;
      iStack_354 = iVar20;
      uStack_364 = 1;
      if ((int)(iVar20 + -1 + (iVar20 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_368) goto LAB_14594fea1;
      uStack_364 = puVar27[lVar29 + 1];
    }
    uStack_364 = -uStack_364 & uStack_364;
    uVar2 = (ulonglong)uStack_364 * 2 + 1;
    lVar29 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar29 == 0; lVar29 = lVar29 + -1) {
      }
    }
    local_384 = (int)lVar29;
    iStack_354 = local_350 + -1 + local_384;
    if (iVar20 < iStack_354) {
      iStack_354 = iVar20;
    }
  }
LAB_14594fea1:
  uStack_34c = local_2f4;
  iStack_348 = *(int *)&(this->PipelinedUpdateStatesRendering).Primitives.field_0x8 -
               *(int *)&(this->PipelinedUpdateStatesRendering).Primitives.field_0x34;
  uVar23 = *(uint *)&(this->PipelinedUpdateStatesRendering).Primitives.field_0x28;
  uStack_358 = 0xffffffff;
  TStack_338._padding_ = CONCAT44(uStack_364,iStack_368);
  uVar28 = uVar23 & 0xffffffe0;
  TStack_338.CurrentBitIndex = iStack_354;
  TStack_338.UnvisitedBitMask = 0xffffffff;
  iVar26 = (int)uVar23 >> 5;
  TStack_338._28_4_ = local_2f4;
  TStack_338.BaseBitIndex = local_350;
  uStack_318 = CONCAT44(uStack_344,iStack_348);
  local_370 = local_380;
  local_360 = puVar4;
  local_340 = local_380;
  TStack_338.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar4;
  if ((((int)uVar23 < 0) || (iVar20 < (int)uVar23)) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar19)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pTVar16 = local_380;
  uVar57 = *(uint *)&(this->PipelinedUpdateStatesRendering).Primitives.field_0x28;
  if (uVar23 != uVar57) {
    puVar25 = *(undefined1 **)&(this->PipelinedUpdateStatesRendering).Primitives.field_0x20;
    if (puVar25 == (undefined1 *)0x0) {
      puVar25 = puVar4;
    }
    uVar23 = -1 << ((byte)uVar23 & 0x1f) & *(uint *)(puVar25 + (longlong)iVar26 * 4);
    while (uVar23 == 0) {
      lVar29 = (longlong)iVar26;
      uVar28 = uVar28 + 0x20;
      iVar26 = iVar26 + 1;
      uVar23 = uVar57;
      if ((int)((uVar57 - 1) + ((int)(uVar57 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar26)
      goto LAB_14594ffc0;
      uVar23 = *(uint *)(puVar25 + lVar29 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar23 & uVar23) * 2 + 1;
    lVar29 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar29 == 0; lVar29 = lVar29 + -1) {
      }
    }
    uVar23 = (uVar28 - 1) + (int)lVar29;
    if ((int)uVar57 < (int)uVar23) {
      uVar23 = uVar57;
    }
  }
LAB_14594ffc0:
  while( true ) {
    pTVar18 = local_340;
    if (*(int *)&local_340->field_0x8 - *(int *)&local_340->field_0x34 != (int)uStack_318) {
      `TSparseArray<TSparseSetElement<TTuple<FPrimitiveSceneInfo_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_388);
    }
    if (((TStack_338.CurrentBitIndex == uVar23) &&
        (TStack_338.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar4)) &&
       (pTVar18 == pTVar16)) {
      return;
    }
    lVar29 = *(longlong *)pTVar18;
    plVar1 = (longlong *)(lVar29 + (longlong)TStack_338.CurrentBitIndex * 0x18);
    lVar30 = (**(code **)(param_1->_padding_ + 0xe0))
                       (param_1,*(undefined4 *)
                                 (lVar29 + 8 + (longlong)TStack_338.CurrentBitIndex * 0x18));
    lVar29 = *plVar1;
    if (lVar29 != lVar30) break;
    plVar3 = *(longlong **)(lVar29 + 8);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x1d8))(plVar3,0x154be5ed0,&local_168);
      *(undefined4 *)(plVar1 + 1) = 0xffffffff;
    }
    TStack_338.UnvisitedBitMask = TStack_338.UnvisitedBitMask & ~TStack_338._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_338);
  }
  pFVar21 = (FPrimitiveSceneInfo *)(**(code **)(param_1->_padding_ + 0xe0))(param_1,0);
  pFVar17 = local_378;
  iVar20 = 1;
  do {
    if (pFVar21 == (FPrimitiveSceneInfo *)0x0) {
      return;
    }
    if ((pFVar21->Proxy != (FPrimitiveSceneProxy *)0x0) &&
       (uVar23 = ((uint)((ulonglong)pFVar21 >> 0x14) & 0xffff ^ (uint)((ulonglong)pFVar21 >> 4)) *
                 -0x7a143595, uVar23 = (uVar23 >> 0xd ^ uVar23) * -0x3d4d51cb,
       *(int *)&(pFVar17->PipelinedUpdateStatesRendering).Primitives.field_0x8 !=
       *(int *)&(pFVar17->PipelinedUpdateStatesRendering).Primitives.field_0x34)) {
      puVar4 = *(undefined1 **)&(pFVar17->PipelinedUpdateStatesRendering).Primitives.field_0x40;
      puVar25 = &(pFVar17->PipelinedUpdateStatesRendering).Primitives.field_0x38;
      if (puVar4 != (undefined1 *)0x0) {
        puVar25 = puVar4;
      }
      iVar26 = *(int *)(puVar25 +
                       (ulonglong)
                       (*(int *)&(pFVar17->PipelinedUpdateStatesRendering).Primitives.field_0x48 -
                        1U & (uVar23 >> 0x10 ^ uVar23)) * 4);
      if (iVar26 != -1) {
        lVar29 = *(longlong *)&(pFVar17->PipelinedUpdateStatesRendering).Primitives;
        do {
          if (*(FPrimitiveSceneInfo **)(lVar29 + (longlong)iVar26 * 0x18) == pFVar21) {
            piVar22 = TMapBase<FPrimitiveSceneInfo_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveSceneInfo_*,int,0>_>
                      ::FindChecked((TMapBase<FPrimitiveSceneInfo_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveSceneInfo_*,int,0>_>
                                     *)&(pFVar17->PipelinedUpdateStatesRendering).Primitives,pFVar21
                                   );
            if (-1 < *piVar22) {
              (**(code **)(pFVar21->Proxy->_padding_ + 0x1d8))
                        (pFVar21->Proxy,0x154be5ed0,&local_168);
            }
            break;
          }
          iVar26 = *(int *)(lVar29 + 0x10 + (longlong)iVar26 * 0x18);
        } while (iVar26 != -1);
      }
    }
    pFVar21 = (FPrimitiveSceneInfo *)(**(code **)(param_1->_padding_ + 0xe0))(param_1,iVar20);
    iVar20 = iVar20 + 1;
  } while( true );
}

// CacheSceneInfo @ 145951550

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FLateUpdateManager::CacheSceneInfo(FLateUpdateManager *this,USceneComponent *param_1)

{
  int iVar1;
  UClass *pUVar2;
  int local_res10 [2];
  TPairInitializer<FPrimitiveSceneInfo_*_&,int_&&> local_res18;
  int **local_18;
  int *local_10;
  
  if (param_1->bAbsoluteLocation != '\0' || param_1->bAbsoluteRotation != '\0') {
    `FLateUpdateManager::CacheSceneInfo'::__l2::<lambda_1>::operator()(local_res10);
  }
  pUVar2 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) && (param_1 != (USceneComponent *)0x0)) &&
     (param_1[2]._padding_ != 0)) {
    local_res18.Value = *(int **)(param_1[2]._padding_ + 0x228);
    if (((local_res18.Value != (int *)0x0) &&
        (local_res10[0] = local_res18.Value[0x62], local_res10[0] != -1)) &&
       (local_res10[0] != 0x7fffffff)) {
      local_18 = &local_res18.Value;
      local_10 = local_res10;
      TSet<TTuple<FPrimitiveSceneInfo_*,int>,TDefaultMapHashableKeyFuncs<FPrimitiveSceneInfo_*,int,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FPrimitiveSceneInfo_*_&,int_&&>_>
                ((TSet<TTuple<FPrimitiveSceneInfo_*,int>,TDefaultMapHashableKeyFuncs<FPrimitiveSceneInfo_*,int,0>,FDefaultSetAllocator>
                  *)&(this->PipelinedUpdateStatesGame).Primitives,&local_res18,(bool *)&local_18);
    }
  }
  return;
}

// GatherLateUpdatePrimitives @ 145952530

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FLateUpdateManager::GatherLateUpdatePrimitives(FLateUpdateManager *this,USceneComponent *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  ForAnyElementType FVar3;
  undefined1 local_res18 [8];
  TArray<USceneComponent_*,TSizedDefaultAllocator<32>_> local_18;
  
  CacheSceneInfo(this,param_1);
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  USceneComponent::GetChildrenComponents(param_1,true,&local_18);
  iVar2 = local_18.ArrayNum;
  pFVar1 = local_18.AllocatorInstance.Data + (longlong)local_18.ArrayNum * 8;
  FVar3.Data = local_18.AllocatorInstance.Data;
  while( true ) {
    if (local_18.ArrayNum != iVar2) {
      `TCheckedPointerIterator<USceneComponent_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if (FVar3.Data == pFVar1) break;
    if (*(USceneComponent **)FVar3.Data != (USceneComponent *)0x0) {
      CacheSceneInfo(this,*(USceneComponent **)FVar3.Data);
    }
    FVar3.Data = FVar3.Data + 8;
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// Setup @ 1459578d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FLateUpdateManager::Setup
          (FLateUpdateManager *this,TTransform<double> *param_1,USceneComponent *param_2,
          bool param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  double dVar3;
  int iVar4;
  TConsoleVariableData<bool> *pTVar5;
  bool bVar6;
  code **ppcVar7;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar8;
  ForAnyElementType FVar9;
  ulonglong uVar10;
  undefined1 auStackY_1c8 [32];
  undefined1 local_198 [8];
  TArray<USceneComponent_*,TSizedDefaultAllocator<32>_> local_190;
  code *local_178 [2];
  code *local_168 [3];
  code **local_150;
  code *local_148;
  code *pcStack_140;
  code *local_138;
  code *pcStack_130;
  code *local_128;
  code *pcStack_120;
  code *local_118;
  code *pcStack_110;
  code *local_108;
  code *pcStack_100;
  code *local_f8;
  code *pcStack_f0;
  undefined1 local_e8 [32];
  void *local_c8;
  undefined4 local_c0;
  uint local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  ForElementType<FSetElementId> local_a8;
  int local_a0;
  undefined1 local_98;
  FLateUpdateManager *local_88;
  undefined1 local_78 [40];
  code **local_50;
  byte local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  bVar6 = IsInGameThread();
  if (!bVar6) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\HeadMountedDisplay\\Private\\LateUpdateManager.cpp"
                       ,0x12,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pTVar5 = CVarXRLateUpdateMangerDisable.Ref;
  if (!param_3) {
    bVar6 = IsInParallelGameThread();
    if (!bVar6) {
      bVar6 = IsInGameThread();
      if (!bVar6) {
        bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6409875433831007945>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x6c9,"GetShadowIndex() == 0");
        if (bVar6) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
    }
    if (pTVar5->ShadowedValue[0] == false) {
      bVar6 = false;
      goto LAB_145957996;
    }
  }
  bVar6 = true;
LAB_145957996:
  TSet<TTuple<FPrimitiveSceneInfo_*,int>,TDefaultMapHashableKeyFuncs<FPrimitiveSceneInfo_*,int,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FPrimitiveSceneInfo_*,int>,TDefaultMapHashableKeyFuncs<FPrimitiveSceneInfo_*,int,0>,FDefaultSetAllocator>
           *)&(this->PipelinedUpdateStatesGame).Primitives);
  dVar3 = (param_1->Rotation).XY.m128d_f64[1];
  (this->PipelinedUpdateStatesGame).ParentToWorld.Rotation.XY.m128d_f64[0] =
       (param_1->Rotation).XY.m128d_f64[0];
  (this->PipelinedUpdateStatesGame).ParentToWorld.Rotation.XY.m128d_f64[1] = dVar3;
  dVar3 = (param_1->Rotation).ZW.m128d_f64[1];
  (this->PipelinedUpdateStatesGame).ParentToWorld.Rotation.ZW.m128d_f64[0] =
       (param_1->Rotation).ZW.m128d_f64[0];
  (this->PipelinedUpdateStatesGame).ParentToWorld.Rotation.ZW.m128d_f64[1] = dVar3;
  dVar3 = (param_1->Translation).XY.m128d_f64[1];
  (this->PipelinedUpdateStatesGame).ParentToWorld.Translation.XY.m128d_f64[0] =
       (param_1->Translation).XY.m128d_f64[0];
  (this->PipelinedUpdateStatesGame).ParentToWorld.Translation.XY.m128d_f64[1] = dVar3;
  dVar3 = (param_1->Translation).ZW.m128d_f64[1];
  (this->PipelinedUpdateStatesGame).ParentToWorld.Translation.ZW.m128d_f64[0] =
       (param_1->Translation).ZW.m128d_f64[0];
  (this->PipelinedUpdateStatesGame).ParentToWorld.Translation.ZW.m128d_f64[1] = dVar3;
  dVar3 = (param_1->Scale3D).XY.m128d_f64[1];
  (this->PipelinedUpdateStatesGame).ParentToWorld.Scale3D.XY.m128d_f64[0] =
       (param_1->Scale3D).XY.m128d_f64[0];
  (this->PipelinedUpdateStatesGame).ParentToWorld.Scale3D.XY.m128d_f64[1] = dVar3;
  dVar3 = (param_1->Scale3D).ZW.m128d_f64[1];
  (this->PipelinedUpdateStatesGame).ParentToWorld.Scale3D.ZW.m128d_f64[0] =
       (param_1->Scale3D).ZW.m128d_f64[0];
  (this->PipelinedUpdateStatesGame).ParentToWorld.Scale3D.ZW.m128d_f64[1] = dVar3;
  CacheSceneInfo(this,param_2);
  local_190.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_190.ArrayNum = 0;
  local_190.ArrayMax = 0;
  USceneComponent::GetChildrenComponents(param_2,true,&local_190);
  iVar4 = local_190.ArrayNum;
  pFVar1 = local_190.AllocatorInstance.Data + (longlong)local_190.ArrayNum * 8;
  FVar9.Data = local_190.AllocatorInstance.Data;
  while( true ) {
    if (local_190.ArrayNum != iVar4) {
      local_198[0] = 0;
      `TCheckedPointerIterator<USceneComponent_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_198);
    }
    if (FVar9.Data == pFVar1) break;
    if (*(USceneComponent **)FVar9.Data != (USceneComponent *)0x0) {
      CacheSceneInfo(this,*(USceneComponent **)FVar9.Data);
    }
    FVar9.Data = FVar9.Data + 8;
  }
  if (local_190.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_190.AllocatorInstance.Data);
  }
  (this->PipelinedUpdateStatesGame).bSkip = bVar6;
  local_148 = (code *)(this->PipelinedUpdateStatesGame).ParentToWorld.Rotation.XY.m128d_f64[0];
  pcStack_140 = (code *)(this->PipelinedUpdateStatesGame).ParentToWorld.Rotation.XY.m128d_f64[1];
  local_e8._0_8_ = (FScriptContainerElement *)0x0;
  local_138 = (code *)(this->PipelinedUpdateStatesGame).ParentToWorld.Rotation.ZW.m128d_f64[0];
  pcStack_130 = (code *)(this->PipelinedUpdateStatesGame).ParentToWorld.Rotation.ZW.m128d_f64[1];
  local_e8._8_8_ = 0;
  local_128 = (code *)(this->PipelinedUpdateStatesGame).ParentToWorld.Translation.XY.m128d_f64[0];
  pcStack_120 = (code *)(this->PipelinedUpdateStatesGame).ParentToWorld.Translation.XY.m128d_f64[1];
  local_c8 = (void *)0x0;
  local_118 = (code *)(this->PipelinedUpdateStatesGame).ParentToWorld.Translation.ZW.m128d_f64[0];
  pcStack_110 = (code *)(this->PipelinedUpdateStatesGame).ParentToWorld.Translation.ZW.m128d_f64[1];
  local_c0 = 0;
  local_108 = (code *)(this->PipelinedUpdateStatesGame).ParentToWorld.Scale3D.XY.m128d_f64[0];
  pcStack_100 = (code *)(this->PipelinedUpdateStatesGame).ParentToWorld.Scale3D.XY.m128d_f64[1];
  local_bc = 0x80;
  local_f8 = (code *)(this->PipelinedUpdateStatesGame).ParentToWorld.Scale3D.ZW.m128d_f64[0];
  pcStack_f0 = (code *)(this->PipelinedUpdateStatesGame).ParentToWorld.Scale3D.ZW.m128d_f64[1];
  local_b8 = 0xffffffff;
  local_b4 = 0;
  local_a8 = (ForElementType<FSetElementId>)0x0;
  local_a0 = 0;
  TSet<TTuple<FPrimitiveSceneInfo_*,int>,TDefaultMapHashableKeyFuncs<FPrimitiveSceneInfo_*,int,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FPrimitiveSceneInfo_*,int>,TDefaultMapHashableKeyFuncs<FPrimitiveSceneInfo_*,int,0>,FDefaultSetAllocator>
               *)local_e8,
              (TSet<TTuple<FPrimitiveSceneInfo_*,int>,TDefaultMapHashableKeyFuncs<FPrimitiveSceneInfo_*,int,0>,FDefaultSetAllocator>
               *)&(this->PipelinedUpdateStatesGame).Primitives);
  local_98 = (this->PipelinedUpdateStatesGame).bSkip;
  local_178[0] = (code *)0x0;
  local_88 = this;
  ppcVar7 = FMemory::Malloc(0xe0,0x10);
  *ppcVar7 = (code *)&UE::Core::Private::Function::
                      TFunction_OwnedObject<`FLateUpdateManager::Setup'::`2'::<lambda_1>,1,1>::
                      _vftable_;
  ppcVar7[2] = local_148;
  ppcVar7[3] = pcStack_140;
  ppcVar7[4] = local_138;
  ppcVar7[5] = pcStack_130;
  ppcVar7[6] = local_128;
  ppcVar7[7] = pcStack_120;
  ppcVar7[8] = local_118;
  ppcVar7[9] = pcStack_110;
  ppcVar7[10] = local_108;
  ppcVar7[0xb] = pcStack_100;
  ppcVar7[0xc] = local_f8;
  ppcVar7[0xd] = pcStack_f0;
  *(undefined8 *)
   &((TSet<TTuple<FPrimitiveSceneInfo_*,int>,TDefaultMapHashableKeyFuncs<FPrimitiveSceneInfo_*,int,0>,FDefaultSetAllocator>
      *)(ppcVar7 + 0xe))->Elements = 0;
  ppcVar7[0xf] = (code *)0x0;
  ppcVar7[0x12] = (code *)0x0;
  *(undefined4 *)(ppcVar7 + 0x13) = 0;
  *(undefined4 *)((longlong)ppcVar7 + 0x9c) = 0x80;
  *(undefined4 *)(ppcVar7 + 0x14) = 0xffffffff;
  *(undefined4 *)((longlong)ppcVar7 + 0xa4) = 0;
  ppcVar7[0x16] = (code *)0x0;
  *(undefined4 *)(ppcVar7 + 0x17) = 0;
  local_150 = ppcVar7;
  TSet<TTuple<FPrimitiveSceneInfo_*,int>,TDefaultMapHashableKeyFuncs<FPrimitiveSceneInfo_*,int,0>,FDefaultSetAllocator>
  ::
  Move<TSet<TTuple<FPrimitiveSceneInfo_*,int>,TDefaultMapHashableKeyFuncs<FPrimitiveSceneInfo_*,int,0>,FDefaultSetAllocator>_>
            ((TSet<TTuple<FPrimitiveSceneInfo_*,int>,TDefaultMapHashableKeyFuncs<FPrimitiveSceneInfo_*,int,0>,FDefaultSetAllocator>
              *)(ppcVar7 + 0xe),
             (TSet<TTuple<FPrimitiveSceneInfo_*,int>,TDefaultMapHashableKeyFuncs<FPrimitiveSceneInfo_*,int,0>,FDefaultSetAllocator>
              *)local_e8);
  *(undefined1 *)(ppcVar7 + 0x18) = local_98;
  ppcVar7[0x1a] = (code *)local_88;
  if (ppcVar7 + 2 != (code **)0x0) {
    local_178[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`FLateUpdateManager::Setup'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                   ::Call;
  }
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FLateUpdateManager::Setup_::__l2::TSTR_UpdateLateUpdateStatesRendering26>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_178);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_78._0_8_ = local_178[0];
    local_50 = local_150;
    local_150 = (code **)0x0;
    local_78._16_8_ = local_168[0];
    local_78._24_8_ = local_168[1];
    local_78._32_8_ = local_168[2];
    local_178[0] = (code *)0x0;
    local_48 = 2;
    pFVar8 = (FRenderCommandTag *)
             TRenderCommandTag<`FLateUpdateManager::Setup'::__l2::TSTR_UpdateLateUpdateStatesRendering26>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_78,pFVar8);
    uVar10 = (ulonglong)local_48;
    if (2 < uVar10) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar10] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_78._0_8_ != (code *)0x0) {
        ppcVar7 = (code **)(local_78 + 0x10);
        if (local_50 != (code **)0x0) {
          ppcVar7 = local_50;
        }
        (**(code **)(*ppcVar7 + 0x10))();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar10])(local_78);
    }
  }
  if (local_178[0] != (code *)0x0) {
    ppcVar7 = local_178 + 2;
    if (local_150 != (code **)0x0) {
      ppcVar7 = local_150;
    }
    (**(code **)(*ppcVar7 + 0x10))();
  }
  local_a0 = 0;
  if (local_a8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_a8);
  }
  iVar4 = SUB84(local_e8._8_8_,4);
  local_e8._8_8_ = local_e8._8_8_ & 0xffffffff00000000;
  if (iVar4 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)local_e8,0,(int *)(local_e8 + 0xc));
  }
  local_b8 = 0xffffffff;
  local_b4 = 0;
  local_c0 = 0;
  if (0x80 < local_bc) {
    local_bc = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10),0);
  }
  if (local_c8 != (void *)0x0) {
    FMemory::Free(local_c8);
  }
  if ((FScriptContainerElement *)local_e8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_e8._0_8_);
  }
  return;
}

// operator() @ 1504d49e0

bool __thiscall `FLateUpdateManager::CacheSceneInfo'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3409466067448233896>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3409466067448233896>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

