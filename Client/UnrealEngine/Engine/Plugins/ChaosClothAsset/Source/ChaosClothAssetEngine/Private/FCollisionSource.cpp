// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosClothAssetEngine
// Functions: 2

// FCollisionSource @ 14dc346f0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FCollisionSource * __thiscall
UE::Chaos::ClothAsset::FCollisionSources::FCollisionSource::FCollisionSource
          (FCollisionSource *this,USkinnedMeshComponent *param_1,UPhysicsAsset *param_2,bool param_3
          )

{
  USkinnedMeshComponent *pUVar1;
  USkinnedMeshComponent *local_res8;
  
  if ((GC::GIsIncrementalReachabilityPending) && (param_1 != (USkinnedMeshComponent *)0x0)) {
    GC::MarkAsReachable((UObject *)param_1);
  }
  (this->SourceComponent).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = param_1;
  if ((GC::GIsIncrementalReachabilityPending != false) && (param_1 != (USkinnedMeshComponent *)0x0))
  {
    GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)this,(FObjectPtr)&local_res8);
  this->ResolvedSourceComponent = (USkinnedMeshComponent *)0x0;
  if ((GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UPhysicsAsset *)0x0)) {
    GC::MarkAsReachable((UObject *)param_2);
  }
  (this->SourcePhysicsAsset).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = (USkinnedMeshComponent *)param_2;
  if ((GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UPhysicsAsset *)0x0)) {
    GC::MarkAsReachable((UObject *)param_2);
  }
  FWeakObjectPtr::operator=(&(this->SourcePhysicsAsset).WeakPtr,(FObjectPtr)&local_res8);
  (this->CachedSkinnedAsset).WeakPtr = (FWeakObjectPtr)0x0;
  (this->CachedCollisionData).Spheres.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedCollisionData).Spheres.ArrayNum = 0;
  (this->CachedCollisionData).Spheres.ArrayMax = 0;
  (this->CachedCollisionData).SphereConnections.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CachedCollisionData).SphereConnections.ArrayNum = 0;
  (this->CachedCollisionData).SphereConnections.ArrayMax = 0;
  (this->CachedCollisionData).Convexes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedCollisionData).Convexes.ArrayNum = 0;
  (this->CachedCollisionData).Convexes.ArrayMax = 0;
  (this->CachedCollisionData).Boxes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedCollisionData).Boxes.ArrayNum = 0;
  (this->CachedCollisionData).Boxes.ArrayMax = 0;
  (this->CachedUsedBoneIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedUsedBoneIndices).ArrayNum = 0;
  (this->CachedUsedBoneIndices).ArrayMax = 0;
  this->BoneTransformRevisionNumber = 0;
  this->bUseSphylsOnly = param_3;
  if (param_1 != (USkinnedMeshComponent *)0x0) {
    pUVar1 = (USkinnedMeshComponent *)FWeakObjectPtr::Get(&(param_1->LeaderPoseComponent).WeakPtr);
    if (pUVar1 != (USkinnedMeshComponent *)0x0) {
      param_1 = pUVar1;
    }
    this->BoneTransformRevisionNumber = param_1->CurrentBoneTransformRevisionNumber;
  }
  return this;
}

// ExtractCollisionData @ 14dc46060

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
UE::Chaos::ClothAsset::FCollisionSources::FCollisionSource::ExtractCollisionData
          (FCollisionSource *this,USkinnedMeshComponent *param_1,FClothCollisionData *param_2)

{
  FScriptContainerElement *pFVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  ulonglong uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  bool bVar16;
  int iVar17;
  int iVar18;
  USkinnedAsset *pUVar19;
  UPhysicsAsset *pUVar20;
  FReferenceSkeleton *pFVar21;
  UObject *pUVar22;
  USkinnedMeshComponent *this_00;
  TTransform<double> *pTVar23;
  uint uVar24;
  FCollisionSource *pFVar25;
  FScriptContainerElement *pFVar26;
  FClothCollisionData *this_01;
  ulonglong uVar27;
  ulonglong uVar28;
  longlong lVar29;
  longlong lVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  longlong lVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  double dVar50;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined4 uVar54;
  undefined4 uVar55;
  undefined1 auVar56 [16];
  uint uVar57;
  uint uVar58;
  uint uVar59;
  uint uVar60;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auStackY_268 [32];
  TArray<int,TSizedDefaultAllocator<32>_> local_228;
  undefined1 local_218 [8];
  FClothCollisionData *local_210;
  TTransform<double> local_208;
  TTransform<double> local_1a8;
  TTransform<double> local_148;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_268;
  if (this->ResolvedSourceComponent != (USkinnedMeshComponent *)0x0) {
    local_210 = param_2;
    pUVar19 = USkinnedMeshComponent::GetSkinnedAsset(this->ResolvedSourceComponent);
    bVar16 = TWeakObjectPtr<USkinnedAsset_const_,FWeakObjectPtr>::UEOpEquals<USkinnedAsset,bool>
                       (&this->CachedSkinnedAsset,pUVar19);
    this_01 = param_2;
    if (!bVar16) {
      local_228.AllocatorInstance.Data = (FScriptContainerElement *)pUVar19;
      if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar19 != (USkinnedAsset *)0x0)) {
        GC::MarkAsReachable((UObject *)pUVar19);
      }
      FWeakObjectPtr::operator=(&(this->CachedSkinnedAsset).WeakPtr,(FObjectPtr)&local_228);
      FClothCollisionData::Reset(&this->CachedCollisionData);
      (this->CachedUsedBoneIndices).ArrayNum = 0;
      if ((this->CachedUsedBoneIndices).ArrayMax < 0) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,&(this->CachedUsedBoneIndices).AllocatorInstance,0,
                   &(this->CachedUsedBoneIndices).ArrayMax);
      }
      pUVar20 = (UPhysicsAsset *)FWeakObjectPtr::Get(&(this->SourcePhysicsAsset).WeakPtr);
      this_01 = local_210;
      if ((pUVar19 != (USkinnedAsset *)0x0) && (pUVar20 != (UPhysicsAsset *)0x0)) {
        local_208.Rotation.XY.m128d_f64 = (double  [2])ZEXT816(0);
        local_208.Rotation.ZW.m128d_f64 = (double  [2])ZEXT816(0);
        local_208.Translation.XY.m128d_f64 = (double  [2])ZEXT816(0);
        local_208.Translation.ZW.m128d_f64 = (double  [2])ZEXT816(0);
        local_228.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_228.ArrayNum = 0;
        local_228.ArrayMax = 0;
        bVar16 = this->bUseSphylsOnly;
        pFVar21 = (FReferenceSkeleton *)(**(code **)(*(longlong *)pUVar19 + 0x318))(pUVar19);
        ::Chaos::FClothingSimulationCollider::ExtractPhysicsAssetCollision
                  (pUVar20,pFVar21,&this->CachedCollisionData,
                   (FClothCollisionDataExtended *)&local_208,&this->CachedUsedBoneIndices,&local_228
                   ,bVar16,true);
        if ((USkinnedAsset *)local_228.AllocatorInstance.Data != (USkinnedAsset *)0x0) {
          FMemory::Free(local_228.AllocatorInstance.Data);
        }
        DestructItems<Chaos::FSkinnedTriangleMeshCollisionData,int>
                  ((FSkinnedTriangleMeshCollisionData *)local_208.Translation.ZW.m128d_f64[0],
                   local_208.Translation.ZW.m128d_f64[1]._0_4_);
        if ((void *)local_208.Translation.ZW.m128d_f64[0] != (void *)0x0) {
          FMemory::Free((void *)local_208.Translation.ZW.m128d_f64[0]);
        }
        DestructItems<Chaos::FMLLevelSetCollisionData,int>
                  ((FMLLevelSetCollisionData *)local_208.Translation.XY.m128d_f64[0],
                   local_208.Translation.XY.m128d_f64[1]._0_4_);
        if ((void *)local_208.Translation.XY.m128d_f64[0] != (void *)0x0) {
          FMemory::Free((void *)local_208.Translation.XY.m128d_f64[0]);
        }
        DestructItems<Chaos::FSkinnedLevelSetCollisionData,int>
                  ((FSkinnedLevelSetCollisionData *)local_208.Rotation.ZW.m128d_f64[0],
                   local_208.Rotation.ZW.m128d_f64[1]._0_4_);
        if ((void *)local_208.Rotation.ZW.m128d_f64[0] != (void *)0x0) {
          FMemory::Free((void *)local_208.Rotation.ZW.m128d_f64[0]);
        }
        DestructItems<Chaos::FLevelSetCollisionData,int>
                  ((FLevelSetCollisionData *)local_208.Rotation.XY.m128d_f64[0],
                   local_208.Rotation.XY.m128d_f64[1]._0_4_);
        this_01 = local_210;
        if ((void *)local_208.Rotation.XY.m128d_f64[0] != (void *)0x0) {
          FMemory::Free((void *)local_208.Rotation.XY.m128d_f64[0]);
          this_01 = local_210;
        }
      }
    }
    if ((this->CachedUsedBoneIndices).ArrayNum != 0) {
      local_148.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_148.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
      local_148.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_148.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
      local_148.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_148.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
      local_148.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_148.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
      local_148.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_148.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
      local_148.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_148.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
      bVar16 = TWeakObjectPtr<USkinnedMeshComponent,FWeakObjectPtr>::
               UEOpEquals<USkinnedMeshComponent,bool>(&this->SourceComponent,param_1);
      if (!bVar16) {
        dVar7 = (double)param_1->_padding_;
        dVar50 = (double)param_1->_padding_;
        dVar13 = (double)param_1->_padding_;
        dVar14 = (double)param_1->_padding_;
        local_1a8.Scale3D.XY.m128d_f64[0] = (double)param_1->_padding_;
        local_1a8.Scale3D.XY.m128d_f64[1] = (double)param_1->_padding_;
        local_1a8.Scale3D.ZW.m128d_f64[0] = (double)param_1->_padding_;
        local_1a8.Scale3D.ZW.m128d_f64[1] = (double)param_1->_padding_;
        dVar5 = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        uVar57 = (uint)((ulonglong)dVar5 >> 0x20);
        uVar58 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
        uVar59 = (uint)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
        dVar8 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        uVar60 = (uint)((ulonglong)dVar8 >> 0x20);
        fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
        dVar6 = (double)param_1->_padding_;
        dVar15 = (double)param_1->_padding_;
        auVar38._0_8_ = dVar7 * dVar7 + dVar13 * dVar13;
        auVar38._8_8_ = dVar50 * dVar50 + dVar14 * dVar14;
        dVar10 = (double)param_1->_padding_;
        dVar11 = (double)param_1->_padding_;
        auVar39._8_4_ = SUB84(auVar38._8_8_,0);
        auVar39._0_8_ = auVar38._0_8_;
        auVar39._12_4_ = (int)((ulonglong)auVar38._8_8_ >> 0x20);
        auVar41._0_8_ = auVar39._8_8_ + auVar38._0_8_;
        auVar41._8_8_ = auVar38._0_8_ + auVar38._8_8_;
        auVar39 = sqrtpd(auVar38,auVar41);
        uVar27 = -(ulonglong)
                  (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <=
                  auVar41._0_8_);
        uVar31 = -(ulonglong)
                  (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <=
                  auVar41._8_8_);
        auVar65 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar39);
        auVar39 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar39);
        uVar28 = -(ulonglong)
                  (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <=
                  auVar41._0_8_);
        uVar32 = -(ulonglong)
                  (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <=
                  auVar41._8_8_);
        auVar66._0_8_ = uVar27 & (ulonglong)(auVar65._0_8_ * dVar7);
        uVar12 = uVar31 & (ulonglong)(auVar65._8_8_ * dVar50);
        auVar66._8_4_ = (undefined4)uVar12;
        auVar66._12_4_ = (undefined4)(uVar12 >> 0x20);
        auVar64._0_8_ = uVar28 & (ulonglong)(auVar39._0_8_ * dVar13);
        uVar12 = uVar32 & (ulonglong)(auVar39._8_8_ * dVar14);
        auVar64._8_4_ = (undefined4)uVar12;
        auVar64._12_4_ = (undefined4)(uVar12 >> 0x20);
        auVar44._0_4_ = ~(uint)uVar27 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
        auVar44._4_4_ =
             ~(uint)(uVar27 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
        auVar44._8_4_ = ~(uint)uVar31 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
        auVar44._12_4_ =
             ~(uint)(uVar31 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
        auVar51._0_4_ = ~(uint)uVar28 & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
        auVar51._4_4_ =
             ~(uint)(uVar28 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
        auVar51._8_4_ = ~(uint)uVar32 & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
        auVar51._12_4_ =
             ~(uint)(uVar32 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
        pFVar25 = this;
        pUVar22 = FWeakObjectPtr::Get((FWeakObjectPtr *)this);
        auVar45._0_8_ =
             (double)CONCAT44(uVar60 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              SUB84(dVar8,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
        auVar45._8_4_ = SUB84((double)fVar2,0) & _UNK_15061cc88;
        auVar45._12_4_ = (uint)((ulonglong)(double)fVar2 >> 0x20) & _UNK_15061cc8c;
        auVar40._8_8_ =
             -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[3] < auVar45._8_8_);
        auVar40._0_8_ =
             -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[2] < auVar45._0_8_);
        uVar24 = movmskpd((int)pFVar25,auVar40);
        auVar46._0_8_ =
             (double)CONCAT44(uVar57 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              SUB84(dVar5,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
        auVar46._8_4_ = uVar58 & _UNK_15061cc88;
        auVar46._12_4_ = uVar59 & _UNK_15061cc8c;
        auVar65._8_8_ =
             -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[1] < auVar46._8_8_);
        auVar65._0_8_ =
             -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[0] < auVar46._0_8_);
        iVar17 = movmskpd((int)pUVar22,auVar65);
        if ((uVar24 & 0x3fffffff) == 0 && iVar17 == 0) {
          local_208.Rotation.XY.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
          local_208.Rotation.ZW.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
          local_208.Translation.XY.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
          local_208.Translation.ZW.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
          local_208.Scale3D.XY.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
          local_208.Scale3D.ZW.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
        }
        else {
          local_208.Rotation.ZW.m128d_f64[0] =
               SUB168(auVar64 | auVar51,0) *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
          local_208.Rotation.ZW.m128d_f64[1] =
               SUB168(auVar64 | auVar51,8) *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
          local_208.Rotation.XY.m128d_f64[0] =
               SUB168(auVar66 | auVar44,0) *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
          local_208.Rotation.XY.m128d_f64[1] =
               SUB168(auVar66 | auVar44,8) *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
          auVar67._0_8_ =
               (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & uVar57,
                                (uint)__xmm_7fffffffffffffff7fffffffffffffff & SUB84(dVar5,0));
          auVar67._8_4_ = _UNK_15061cc88 & uVar58;
          auVar67._12_4_ = _UNK_15061cc8c & uVar59;
          lVar29 = -(ulonglong)
                    ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & uVar60,
                                      (uint)__xmm_7fffffffffffffff7fffffffffffffff & SUB84(dVar8,0))
                    <= (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
          auVar56._8_4_ = SUB84(local_208.Rotation.XY.m128d_f64[1],0);
          auVar56._0_8_ = local_208.Rotation.XY.m128d_f64[0];
          uVar54 = (undefined4)((ulonglong)local_208.Rotation.XY.m128d_f64[1] >> 0x20);
          auVar56._12_4_ = uVar54;
          lVar30 = -(ulonglong)
                    (auVar67._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
          lVar33 = -(ulonglong)
                    (auVar67._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
          auVar3._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
          auVar3._0_8_ = dVar8;
          auVar3._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
          auVar39 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar3);
          auVar4._8_4_ = uVar58;
          auVar4._0_8_ = dVar5;
          auVar4._12_4_ = uVar59;
          auVar41 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar4);
          local_208.Scale3D.XY.m128d_f64[0] =
               (double)CONCAT44(~(uint)((ulonglong)lVar30 >> 0x20) & auVar41._4_4_,
                                ~(uint)lVar30 & auVar41._0_4_);
          local_208.Scale3D.XY.m128d_f64[1]._0_4_ = ~(uint)lVar33 & auVar41._8_4_;
          local_208.Scale3D.XY.m128d_f64[1]._4_4_ =
               ~(uint)((ulonglong)lVar33 >> 0x20) & auVar41._12_4_;
          auVar41 = blendpd(auVar56,(undefined1  [16])local_208.Rotation.ZW.m128d_f64,2);
          local_208.Scale3D.ZW.m128d_f64[0] =
               (double)CONCAT44(~(uint)((ulonglong)lVar29 >> 0x20) & auVar39._4_4_,
                                ~(uint)lVar29 & auVar39._0_4_);
          auVar47._8_4_ = SUB84(local_208.Rotation.XY.m128d_f64[1],0);
          auVar47._0_8_ = local_208.Rotation.XY.m128d_f64[0];
          auVar47._12_4_ = uVar54;
          dVar50 = auVar47._8_8_;
          dVar6 = local_208.Scale3D.XY.m128d_f64[0] * dVar6;
          dVar7 = (double)CONCAT44(local_208.Scale3D.XY.m128d_f64[1]._4_4_,
                                   local_208.Scale3D.XY.m128d_f64[1]._0_4_);
          dVar7 = dVar7 * dVar15;
          uVar54 = (undefined4)((ulonglong)dVar7 >> 0x20);
          auVar34._8_4_ = SUB84(local_208.Rotation.ZW.m128d_f64[0],0);
          auVar34._0_8_ = dVar50;
          auVar34._12_4_ = (int)((ulonglong)local_208.Rotation.ZW.m128d_f64[0] >> 0x20);
          auVar61._8_4_ = SUB84(dVar7,0);
          auVar61._0_8_ = dVar6;
          auVar61._12_4_ = uVar54;
          dVar10 = local_208.Scale3D.ZW.m128d_f64[0] * dVar10;
          dVar11 = dVar11 * 0.0;
          auVar42._8_4_ = SUB84(dVar7,0);
          auVar42._0_8_ = dVar6;
          auVar42._12_4_ = uVar54;
          auVar9._8_4_ = SUB84(dVar11,0);
          auVar9._0_8_ = dVar10;
          auVar9._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
          auVar39 = blendpd(auVar42,auVar9,2);
          auVar62._0_8_ = auVar61._8_8_ * local_208.Rotation.XY.m128d_f64[0] - dVar50 * dVar6;
          auVar62._8_8_ = dVar10 * local_208.Rotation.XY.m128d_f64[1] - auVar34._8_8_ * dVar7;
          auVar43._0_8_ =
               auVar39._0_8_ * local_208.Rotation.ZW.m128d_f64[0] - auVar41._0_8_ * dVar10;
          auVar43._8_8_ =
               auVar39._8_8_ * local_208.Rotation.ZW.m128d_f64[1] - auVar41._8_8_ * dVar11;
          dVar5 = auVar62._8_8_ + auVar62._8_8_;
          dVar8 = auVar43._0_8_ + auVar43._0_8_;
          uVar54 = SUB84(dVar8,0);
          uVar55 = (undefined4)((ulonglong)dVar8 >> 0x20);
          auVar39 = blendpd(auVar62,auVar43,2);
          auVar63._0_8_ = auVar39._0_8_ + auVar39._0_8_;
          auVar63._8_8_ = auVar39._8_8_ + auVar39._8_8_;
          auVar52._8_4_ = uVar54;
          auVar52._0_8_ = dVar5;
          auVar52._12_4_ = uVar55;
          auVar35._8_4_ = uVar54;
          auVar35._0_8_ = dVar5;
          auVar35._12_4_ = uVar55;
          auVar48._8_4_ = uVar54;
          auVar48._0_8_ = dVar5;
          auVar48._12_4_ = uVar55;
          auVar39 = blendpd(auVar48,auVar63,2);
          auVar53._0_8_ = auVar52._8_8_ * local_208.Rotation.XY.m128d_f64[0] - dVar5 * dVar50;
          auVar53._8_8_ =
               auVar63._0_8_ * local_208.Rotation.XY.m128d_f64[1] -
               auVar35._8_8_ * local_208.Rotation.ZW.m128d_f64[0];
          auVar36._8_4_ = SUB84(auVar63._8_8_,0);
          auVar36._0_8_ = auVar63._0_8_;
          auVar36._12_4_ = (int)((ulonglong)auVar63._8_8_ >> 0x20);
          auVar49._0_8_ =
               auVar39._0_8_ * local_208.Rotation.ZW.m128d_f64[0] - auVar63._0_8_ * auVar41._0_8_;
          auVar49._8_8_ =
               auVar39._8_8_ * local_208.Rotation.ZW.m128d_f64[1] - auVar36._8_8_ * auVar41._8_8_;
          auVar37._8_4_ = SUB84(auVar53._8_8_,0);
          auVar37._0_8_ = auVar53._0_8_;
          auVar37._12_4_ = (int)((ulonglong)auVar53._8_8_ >> 0x20);
          auVar39 = blendpd(auVar53,auVar49,2);
          local_208.Scale3D.ZW.m128d_f64[1] = 0.0;
          local_208.Translation.ZW.m128d_f64[1] = 0.0;
          local_208.Translation.ZW.m128d_f64[0] =
               0.0 - (auVar63._0_8_ * local_208.Rotation.ZW.m128d_f64[1] + dVar10 + auVar39._0_8_);
          local_208.Translation.XY.m128d_f64[1] =
               0.0 - (dVar8 * local_208.Rotation.ZW.m128d_f64[1] + dVar7 + auVar49._0_8_);
          local_208.Translation.XY.m128d_f64[0] =
               0.0 - (dVar5 * local_208.Rotation.ZW.m128d_f64[1] + dVar6 + auVar37._8_8_);
        }
        local_1a8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_1a8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
        local_1a8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_1a8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
        local_1a8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0]
        ;
        local_1a8.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1]
        ;
        local_1a8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2]
        ;
        local_1a8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3]
        ;
        local_1a8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_1a8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
        local_1a8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_1a8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
        UE::Math::TTransform<double>::Multiply
                  (&local_1a8,(TTransform<double> *)&pUVar22[0xc].field_0x10,&local_208);
        local_148.Rotation.XY.m128d_f64[0] = local_1a8.Rotation.XY.m128d_f64[0];
        local_148.Rotation.XY.m128d_f64[1] = local_1a8.Rotation.XY.m128d_f64[1];
        local_148.Rotation.ZW.m128d_f64[0] = local_1a8.Rotation.ZW.m128d_f64[0];
        local_148.Rotation.ZW.m128d_f64[1] = local_1a8.Rotation.ZW.m128d_f64[1];
        local_148.Translation.XY.m128d_f64[0] = local_1a8.Translation.XY.m128d_f64[0];
        local_148.Translation.XY.m128d_f64[1] = local_1a8.Translation.XY.m128d_f64[1];
        local_148.Translation.ZW.m128d_f64[0] = local_1a8.Translation.ZW.m128d_f64[0];
        local_148.Translation.ZW.m128d_f64[1] = local_1a8.Translation.ZW.m128d_f64[1];
        local_148.Scale3D.XY.m128d_f64[0] = local_1a8.Scale3D.XY.m128d_f64[0];
        local_148.Scale3D.XY.m128d_f64[1] = local_1a8.Scale3D.XY.m128d_f64[1];
        local_148.Scale3D.ZW.m128d_f64[0] = local_1a8.Scale3D.ZW.m128d_f64[0];
        local_148.Scale3D.ZW.m128d_f64[1] = local_1a8.Scale3D.ZW.m128d_f64[1];
      }
      uVar24 = (this->CachedUsedBoneIndices).ArrayNum;
      local_228.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_228.ArrayNum = 0;
      local_228.ArrayMax = 0;
      if ((int)uVar24 < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum((ulonglong)uVar24);
      }
      if (0 < (int)uVar24) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x60,0x10,uVar24,&local_228.AllocatorInstance,0,&local_228.ArrayMax);
      }
      pFVar26 = (this->CachedUsedBoneIndices).AllocatorInstance.Data;
      iVar17 = (this->CachedUsedBoneIndices).ArrayNum;
      pFVar1 = pFVar26 + (longlong)iVar17 * 4;
      while( true ) {
        if ((this->CachedUsedBoneIndices).ArrayNum != iVar17) {
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_218);
        }
        if (pFVar26 == pFVar1) break;
        iVar18 = *(int *)pFVar26;
        this_00 = (USkinnedMeshComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)this);
        pTVar23 = USkinnedMeshComponent::GetBoneTransform(this_00,&local_1a8,iVar18,&local_148);
        iVar18 = local_228.ArrayNum;
        if (local_228.ArrayNum == local_228.ArrayMax) {
          iVar18 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x1060,&local_228.AllocatorInstance,&local_228.ArrayMax);
        }
        local_228.ArrayNum = iVar18 + 1;
        dVar5 = (pTVar23->Rotation).XY.m128d_f64[1];
        lVar29 = (longlong)iVar18 * 0x60;
        pFVar26 = pFVar26 + 4;
        *(double *)(local_228.AllocatorInstance.Data + lVar29) = (pTVar23->Rotation).XY.m128d_f64[0]
        ;
        *(double *)(local_228.AllocatorInstance.Data + lVar29 + 8) = dVar5;
        dVar5 = (pTVar23->Rotation).ZW.m128d_f64[1];
        *(double *)(local_228.AllocatorInstance.Data + lVar29 + 0x10) =
             (pTVar23->Rotation).ZW.m128d_f64[0];
        *(double *)(local_228.AllocatorInstance.Data + lVar29 + 0x10 + 8) = dVar5;
        dVar5 = (pTVar23->Translation).XY.m128d_f64[1];
        *(double *)(local_228.AllocatorInstance.Data + lVar29 + 0x20) =
             (pTVar23->Translation).XY.m128d_f64[0];
        *(double *)(local_228.AllocatorInstance.Data + lVar29 + 0x20 + 8) = dVar5;
        dVar5 = (pTVar23->Translation).ZW.m128d_f64[1];
        *(double *)(local_228.AllocatorInstance.Data + lVar29 + 0x30) =
             (pTVar23->Translation).ZW.m128d_f64[0];
        *(double *)(local_228.AllocatorInstance.Data + lVar29 + 0x30 + 8) = dVar5;
        dVar5 = (pTVar23->Scale3D).XY.m128d_f64[1];
        *(double *)(local_228.AllocatorInstance.Data + lVar29 + 0x40) =
             (pTVar23->Scale3D).XY.m128d_f64[0];
        *(double *)(local_228.AllocatorInstance.Data + lVar29 + 0x40 + 8) = dVar5;
        dVar5 = (pTVar23->Scale3D).ZW.m128d_f64[1];
        *(double *)(local_228.AllocatorInstance.Data + lVar29 + 0x50) =
             (pTVar23->Scale3D).ZW.m128d_f64[0];
        *(double *)(local_228.AllocatorInstance.Data + lVar29 + 0x50 + 8) = dVar5;
      }
      FClothCollisionData::AppendTransformed
                (this_01,&this->CachedCollisionData,
                 (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)&local_228);
      if (local_228.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_228.AllocatorInstance.Data);
      }
    }
  }
  return;
}

