// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// FClothCollisionSource @ 14861fbf0

FClothCollisionSource * __thiscall
FClothCollisionSource::FClothCollisionSource
          (FClothCollisionSource *this,USkeletalMeshComponent *param_1,UPhysicsAsset *param_2,
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_3)

{
  bool bVar1;
  ulong64 *puVar2;
  USkeletalMeshComponent *local_res8;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (USkeletalMeshComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->SourceComponent).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (USkeletalMeshComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)this,(FObjectPtr)&local_res8);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UPhysicsAsset *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  (this->SourcePhysicsAsset).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = (USkeletalMeshComponent *)param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UPhysicsAsset *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  FWeakObjectPtr::operator=(&(this->SourcePhysicsAsset).WeakPtr,(FObjectPtr)&local_res8);
  (this->OnBoneTransformsFinalizedHandle).ID = 0;
  (this->CachedSkeletalMesh).WeakPtr = (FWeakObjectPtr)0x0;
  (this->CachedSpheres).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedSpheres).ArrayNum = 0;
  (this->CachedSpheres).ArrayMax = 0;
  (this->CachedSphereConnections).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedSphereConnections).ArrayNum = 0;
  (this->CachedSphereConnections).ArrayMax = 0;
  this->bCached = false;
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this);
  if (bVar1) {
    puVar2 = (ulong64 *)(**(code **)(param_1->_padding_ + 0xc50))(param_1,&local_res8,param_3);
    (this->OnBoneTransformsFinalizedHandle).ID = *puVar2;
  }
  return this;
}

// ~FClothCollisionSource @ 148624d60

void __thiscall FClothCollisionSource::~FClothCollisionSource(FClothCollisionSource *this)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  UObject *pUVar3;
  
  bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this);
  if ((bVar2) && ((this->OnBoneTransformsFinalizedHandle).ID != 0)) {
    pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)this);
    (**(code **)(*(longlong *)pUVar3 + 0xc58))(pUVar3,&this->OnBoneTransformsFinalizedHandle);
  }
  pFVar1 = (this->CachedSphereConnections).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CachedSpheres).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  FMemory::Free(pFVar1);
  return;
}

// ExtractCollisions @ 14863ecf0

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
FClothCollisionSource::ExtractCollisions
          (FClothCollisionSource *this,USkeletalMeshComponent *param_1,FClothCollisionData *param_2)

{
  TArray<FClothCollisionPrim_Sphere,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  undefined1 auVar8 [12];
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  FClothCollisionData *pFVar15;
  TArray<FClothCollisionPrim_SphereConnection,TSizedDefaultAllocator<32>_> *pTVar16;
  bool bVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  USkeletalMeshComponent *this_00;
  UObject *pUVar21;
  USkeletalMesh *pUVar22;
  USkeletalMesh *pUVar23;
  int *piVar24;
  TVector<double> *pTVar25;
  TTransform<double> *pTVar26;
  uint uVar27;
  USkeletalMeshComponent *pUVar28;
  ulonglong uVar29;
  FClothCollisionData *pFVar30;
  FScriptContainerElement *pFVar31;
  uint uVar32;
  longlong *plVar33;
  FClothCollisionSource *pFVar34;
  longlong *plVar35;
  FScriptContainerElement *pFVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  longlong lVar39;
  longlong lVar40;
  ulonglong uVar41;
  ulonglong uVar42;
  longlong lVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined4 uVar51;
  undefined1 auVar50 [16];
  double dVar52;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  double dVar59;
  double dVar68;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined4 uVar76;
  undefined4 uVar77;
  uint uVar78;
  uint uVar80;
  uint uVar81;
  uint uVar82;
  undefined1 auVar79 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  double dVar90;
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  uint uVar94;
  uint uVar95;
  uint uVar96;
  uint uVar97;
  uint uVar98;
  undefined4 uVar99;
  undefined1 auStackY_588 [32];
  undefined1 local_538;
  undefined1 local_537;
  undefined1 local_536;
  undefined1 local_535;
  undefined1 local_534;
  undefined1 local_533 [3];
  uint local_530;
  longlong local_528;
  uint local_520;
  FClothCollisionSource *local_518;
  USkeletalMeshComponent *local_510;
  FClothCollisionData *local_508;
  int local_500;
  undefined4 uStack_4fc;
  double dStack_4f8;
  double dStack_4f0;
  double dStack_4e8;
  int local_4e0;
  undefined4 uStack_4dc;
  double dStack_4d8;
  double dStack_4d0;
  double dStack_4c8;
  int local_4c0;
  undefined4 uStack_4bc;
  double dStack_4b8;
  double dStack_4b0;
  double dStack_4a8;
  int local_4a0;
  undefined4 uStack_49c;
  double dStack_498;
  double dStack_490;
  double dStack_488;
  longlong *local_480;
  UObject *local_478;
  undefined1 local_468 [16];
  USkeletalMesh *local_458;
  double dStack_450;
  int local_448;
  undefined4 uStack_444;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  TArray<FClothCollisionPrim_SphereConnection,TSizedDefaultAllocator<32>_> *local_428;
  TVector<double>_u_0 local_420;
  TVector<double>_u_0 local_408;
  TVector<double>_u_0 local_3f0;
  TVector<double>_u_0 local_3d8;
  double local_3c0;
  double dStack_3b8;
  double local_3b0;
  double local_3a8;
  double dStack_3a0;
  double local_398;
  double local_388;
  double dStack_380;
  double local_378;
  double dStack_370;
  double local_368;
  double dStack_360;
  longlong local_358;
  longlong lStack_350;
  longlong local_348;
  longlong lStack_340;
  undefined1 local_338 [16];
  TVector<double> local_328;
  int local_310;
  int iStack_30c;
  double dStack_308;
  double dStack_300;
  double dStack_2f8;
  int local_2f0;
  int iStack_2ec;
  double dStack_2e8;
  double dStack_2e0;
  double dStack_2d8;
  TTransform<double> local_2c8;
  TTransform<double> local_268;
  TTransform<double> local_208;
  TTransform<double> local_1a8;
  TTransform<double> local_148;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_588;
  local_518 = this;
  local_508 = param_2;
  this_00 = (USkeletalMeshComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  local_510 = this_00;
  pUVar21 = FWeakObjectPtr::Get(&(this->SourcePhysicsAsset).WeakPtr);
  if (this_00 == (USkeletalMeshComponent *)0x0) {
    return;
  }
  pUVar28 = this_00;
  local_478 = pUVar21;
  pUVar22 = USkeletalMeshComponent::GetSkeletalMeshAsset(this_00);
  if (pUVar22 == (USkeletalMesh *)0x0) {
    return;
  }
  if (pUVar21 == (UObject *)0x0) {
    return;
  }
  uVar51 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  uVar99 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_2c8.Rotation.XY.m128d_f64[1]._0_4_ = uVar51;
  local_2c8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_2c8.Rotation.XY.m128d_f64[1]._4_4_ = uVar99;
  local_2c8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_2c8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_2c8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_2c8.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  local_2c8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_2c8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  dVar7 = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  uVar32 = (uint)((ulonglong)dVar7 >> 0x20);
  uVar94 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  uVar95 = (uint)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_2c8.Scale3D.XY.m128d_f64[1]._0_4_ = uVar94;
  local_2c8.Scale3D.XY.m128d_f64[0] = dVar7;
  local_2c8.Scale3D.XY.m128d_f64[1]._4_4_ = uVar95;
  dVar52 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  uVar96 = (uint)((ulonglong)dVar52 >> 0x20);
  uVar97 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  uVar98 = (uint)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  local_2c8.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar97;
  local_2c8.Scale3D.ZW.m128d_f64[0] = dVar52;
  local_2c8.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar98;
  if (this_00 != param_1) {
    local_388 = (double)param_1->_padding_;
    dStack_380 = (double)param_1->_padding_;
    local_378 = (double)param_1->_padding_;
    dStack_370 = (double)param_1->_padding_;
    local_358 = param_1->_padding_;
    lStack_350 = param_1->_padding_;
    local_338._0_8_ = param_1->_padding_;
    local_338._8_8_ = param_1->_padding_;
    local_368 = (double)param_1->_padding_;
    dStack_360 = (double)param_1->_padding_;
    local_348 = param_1->_padding_;
    lStack_340 = param_1->_padding_;
    dVar59 = local_388 * local_388 + local_378 * local_378;
    dVar68 = dStack_380 * dStack_380 + dStack_370 * dStack_370;
    auVar53._8_4_ = SUB84(dVar68,0);
    auVar53._0_8_ = dVar59;
    auVar53._12_4_ = (int)((ulonglong)dVar68 >> 0x20);
    auVar89._0_8_ = auVar53._8_8_ + dVar59;
    auVar89._8_8_ = dVar59 + dVar68;
    auVar53 = sqrtpd(local_338,auVar89);
    uVar37 = -(ulonglong)
              (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <= auVar89._0_8_);
    uVar41 = -(ulonglong)
              (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <= auVar89._8_8_);
    auVar92 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar53);
    auVar53 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar53);
    uVar38 = -(ulonglong)
              (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= auVar89._0_8_);
    uVar42 = -(ulonglong)
              (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <= auVar89._8_8_);
    auVar93._0_8_ = uVar37 & (ulonglong)(auVar92._0_8_ * local_388);
    uVar29 = uVar41 & (ulonglong)(auVar92._8_8_ * dStack_380);
    auVar93._8_4_ = (undefined4)uVar29;
    auVar93._12_4_ = (undefined4)(uVar29 >> 0x20);
    auVar60._0_4_ = ~(uint)uVar37 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
    auVar60._4_4_ =
         ~(uint)(uVar37 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
    auVar60._8_4_ = ~(uint)uVar41 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
    auVar60._12_4_ =
         ~(uint)(uVar41 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
    auVar91._0_8_ = uVar38 & (ulonglong)(auVar53._0_8_ * local_378);
    uVar29 = uVar42 & (ulonglong)(auVar53._8_8_ * dStack_370);
    auVar91._8_4_ = (undefined4)uVar29;
    auVar91._12_4_ = (undefined4)(uVar29 >> 0x20);
    auVar69._0_4_ = ~(uint)uVar38 & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
    auVar69._4_4_ =
         ~(uint)(uVar38 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
    auVar69._8_4_ = ~(uint)uVar42 & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
    auVar69._12_4_ =
         ~(uint)(uVar42 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
    uVar78 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar80 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    auVar61._0_8_ = (double)CONCAT44(uVar96 & uVar80,SUB84(dVar52,0) & uVar78);
    uVar81 = __xmm_7fffffffffffffff7fffffffffffffff._8_4_;
    auVar61._8_4_ = uVar97 & uVar81;
    uVar82 = __xmm_7fffffffffffffff7fffffffffffffff._12_4_;
    auVar61._12_4_ = uVar98 & uVar82;
    auVar54._8_8_ =
         -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[3] < auVar61._8_8_);
    auVar54._0_8_ =
         -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[2] < auVar61._0_8_);
    uVar27 = movmskpd((int)pUVar28,auVar54);
    auVar62._0_8_ = (double)CONCAT44(uVar80 & uVar32,uVar78 & SUB84(dVar7,0));
    auVar62._8_4_ = uVar81 & uVar94;
    auVar62._12_4_ = uVar82 & uVar95;
    auVar92._8_8_ =
         -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[1] < auVar62._8_8_);
    auVar92._0_8_ =
         -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[0] < auVar62._0_8_);
    iVar18 = movmskpd((int)pUVar22,auVar92);
    if ((uVar27 & 0x3fffffff) == 0 && iVar18 == 0) {
      local_208.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64
      ;
      local_208.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64
      ;
      local_208.Translation.XY.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
      local_208.Translation.ZW.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
      local_208.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
      local_208.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    }
    else {
      local_208.Rotation.ZW.m128d_f64[0] =
           SUB168(auVar91 | auVar69,0) *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
      local_208.Rotation.ZW.m128d_f64[1] =
           SUB168(auVar91 | auVar69,8) *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
      auVar8._4_8_ = auVar69._8_8_;
      auVar8._0_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[0]._4_4_;
      auVar70._0_8_ = auVar8._0_8_ << 0x20;
      auVar70._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
      auVar70._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
      local_208.Rotation.XY.m128d_f64[0] =
           SUB168(auVar93 | auVar60,0) *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
      local_208.Rotation.XY.m128d_f64[1] =
           SUB168(auVar93 | auVar60,8) *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
      auVar71._8_8_ = auVar70._8_8_;
      auVar71._0_8_ = dVar52;
      auVar89 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar71);
      auVar6._8_4_ = uVar94;
      auVar6._0_8_ = dVar7;
      auVar6._12_4_ = uVar95;
      auVar53 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar6);
      lVar39 = -(ulonglong)
                ((double)CONCAT44(uVar80 & uVar96,uVar78 & SUB84(dVar52,0)) <=
                (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
      lVar40 = -(ulonglong)
                ((double)CONCAT44(uVar32 & uVar80,SUB84(dVar7,0) & uVar78) <=
                (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
      lVar43 = -(ulonglong)
                ((double)CONCAT44(uVar95 & uVar82,uVar94 & uVar81) <=
                (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
      local_208.Scale3D.XY.m128d_f64[0]._0_4_ = ~(uint)lVar40 & auVar53._0_4_;
      local_208.Scale3D.XY.m128d_f64[0]._4_4_ = ~(uint)((ulonglong)lVar40 >> 0x20) & auVar53._4_4_;
      local_208.Scale3D.XY.m128d_f64[1]._0_4_ = ~(uint)lVar43 & auVar53._8_4_;
      local_208.Scale3D.XY.m128d_f64[1]._4_4_ = ~(uint)((ulonglong)lVar43 >> 0x20) & auVar53._12_4_;
      local_458 = (USkeletalMesh *)
                  (local_368 *
                  (double)CONCAT44(local_208.Scale3D.XY.m128d_f64[0]._4_4_,
                                   local_208.Scale3D.XY.m128d_f64[0]._0_4_));
      dStack_450 = dStack_360 *
                   (double)CONCAT44(local_208.Scale3D.XY.m128d_f64[1]._4_4_,
                                    local_208.Scale3D.XY.m128d_f64[1]._0_4_);
      auVar79._8_4_ = SUB84(local_208.Rotation.XY.m128d_f64[1],0);
      auVar79._0_8_ = local_208.Rotation.XY.m128d_f64[0];
      uVar76 = (undefined4)((ulonglong)local_208.Rotation.XY.m128d_f64[1] >> 0x20);
      auVar79._12_4_ = uVar76;
      auVar11._8_8_ = dStack_450;
      auVar11._0_8_ = local_458;
      local_208.Scale3D.ZW.m128d_f64[0] =
           (double)CONCAT44(~(uint)((ulonglong)lVar39 >> 0x20) & auVar89._4_4_,
                            ~(uint)lVar39 & auVar89._0_4_);
      auVar83._8_4_ = SUB84(local_208.Rotation.ZW.m128d_f64[1],0);
      auVar83._0_8_ = local_208.Rotation.ZW.m128d_f64[0];
      auVar83._12_4_ = (int)((ulonglong)local_208.Rotation.ZW.m128d_f64[1] >> 0x20);
      auVar89 = blendpd(auVar79,(undefined1  [16])local_208.Rotation.ZW.m128d_f64,2);
      auVar63._8_4_ = SUB84(local_208.Rotation.XY.m128d_f64[1],0);
      auVar63._0_8_ = local_208.Rotation.XY.m128d_f64[0];
      auVar63._12_4_ = uVar76;
      dVar90 = auVar63._8_8_;
      local_468._0_8_ = (double)param_1->_padding_ * local_208.Scale3D.ZW.m128d_f64[0];
      local_468._8_8_ = (double)param_1->_padding_ * 0.0;
      auVar44._8_4_ = SUB84(local_208.Rotation.ZW.m128d_f64[0],0);
      auVar44._0_8_ = dVar90;
      auVar44._12_4_ = (int)((ulonglong)local_208.Rotation.ZW.m128d_f64[0] >> 0x20);
      auVar53 = blendpd(auVar11,local_468,2);
      auVar87._0_8_ = dStack_450 * local_208.Rotation.XY.m128d_f64[0] - dVar90 * (double)local_458;
      auVar87._8_8_ =
           (double)local_468._0_8_ * local_208.Rotation.XY.m128d_f64[1] - auVar44._8_8_ * dStack_450
      ;
      auVar55._0_8_ =
           auVar53._0_8_ * local_208.Rotation.ZW.m128d_f64[0] -
           auVar89._0_8_ * (double)local_468._0_8_;
      auVar55._8_8_ =
           auVar53._8_8_ * local_208.Rotation.ZW.m128d_f64[1] -
           auVar89._8_8_ * (double)local_468._8_8_;
      dVar59 = auVar87._8_8_ + auVar87._8_8_;
      dVar68 = auVar55._0_8_ + auVar55._0_8_;
      uVar76 = SUB84(dVar68,0);
      uVar77 = (undefined4)((ulonglong)dVar68 >> 0x20);
      auVar53 = blendpd(auVar87,auVar55,2);
      auVar88._0_8_ = auVar53._0_8_ + auVar53._0_8_;
      auVar88._8_8_ = auVar53._8_8_ + auVar53._8_8_;
      auVar72._8_4_ = uVar76;
      auVar72._0_8_ = dVar59;
      auVar72._12_4_ = uVar77;
      auVar45._8_4_ = uVar76;
      auVar45._0_8_ = dVar59;
      auVar45._12_4_ = uVar77;
      auVar64._8_4_ = uVar76;
      auVar64._0_8_ = dVar59;
      auVar64._12_4_ = uVar77;
      auVar53 = blendpd(auVar64,auVar88,2);
      auVar73._0_8_ = auVar72._8_8_ * local_208.Rotation.XY.m128d_f64[0] - dVar59 * dVar90;
      auVar73._8_8_ =
           auVar88._0_8_ * local_208.Rotation.XY.m128d_f64[1] -
           auVar45._8_8_ * local_208.Rotation.ZW.m128d_f64[0];
      auVar46._8_4_ = SUB84(auVar88._8_8_,0);
      auVar46._0_8_ = auVar88._0_8_;
      auVar46._12_4_ = (int)((ulonglong)auVar88._8_8_ >> 0x20);
      auVar65._0_8_ =
           auVar53._0_8_ * local_208.Rotation.ZW.m128d_f64[0] - auVar88._0_8_ * auVar89._0_8_;
      auVar65._8_8_ =
           auVar53._8_8_ * local_208.Rotation.ZW.m128d_f64[1] - auVar46._8_8_ * auVar89._8_8_;
      auVar47._8_4_ = SUB84(auVar73._8_8_,0);
      auVar47._0_8_ = auVar73._0_8_;
      auVar47._12_4_ = (int)((ulonglong)auVar73._8_8_ >> 0x20);
      auVar53 = blendpd(auVar73,auVar65,2);
      local_208.Translation.XY.m128d_f64[1] =
           0.0 - (dVar68 * local_208.Rotation.ZW.m128d_f64[1] + dStack_450 + auVar65._0_8_);
      local_208.Translation.XY.m128d_f64[0] =
           0.0 - (dVar59 * auVar83._8_8_ + (double)local_458 + auVar47._8_8_);
      local_208.Translation.ZW.m128d_f64[1] = 0.0;
      local_208.Translation.ZW.m128d_f64[0] =
           0.0 - (auVar88._0_8_ * auVar83._8_8_ + (double)local_468._0_8_ + auVar53._0_8_);
      local_208.Scale3D.ZW.m128d_f64[1] = 0.0;
    }
    local_1a8.Rotation.XY.m128d_f64[1]._0_4_ = uVar51;
    local_1a8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_1a8.Rotation.XY.m128d_f64[1]._4_4_ = uVar99;
    local_1a8.Scale3D.XY.m128d_f64[1]._0_4_ = uVar94;
    local_1a8.Scale3D.XY.m128d_f64[0] = dVar7;
    local_1a8.Scale3D.XY.m128d_f64[1]._4_4_ = uVar95;
    local_1a8.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar97;
    local_1a8.Scale3D.ZW.m128d_f64[0] = dVar52;
    local_1a8.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar98;
    local_1a8.Rotation.ZW.m128d_f64[0] = local_2c8.Rotation.ZW.m128d_f64[0];
    local_1a8.Rotation.ZW.m128d_f64[1] = local_2c8.Rotation.ZW.m128d_f64[1];
    local_1a8.Translation.XY.m128d_f64[0] = local_2c8.Translation.XY.m128d_f64[0];
    local_1a8.Translation.XY.m128d_f64[1] = local_2c8.Translation.XY.m128d_f64[1];
    local_1a8.Translation.ZW.m128d_f64[0] = local_2c8.Translation.ZW.m128d_f64[0];
    local_1a8.Translation.ZW.m128d_f64[1] = local_2c8.Translation.ZW.m128d_f64[1];
    UE::Math::TTransform<double>::Multiply
              (&local_1a8,(TTransform<double> *)&this_00->_padding_,&local_208);
    local_2c8.Rotation.XY.m128d_f64[0] = local_1a8.Rotation.XY.m128d_f64[0];
    local_2c8.Rotation.XY.m128d_f64[1] = local_1a8.Rotation.XY.m128d_f64[1];
    local_2c8.Rotation.ZW.m128d_f64[0] = local_1a8.Rotation.ZW.m128d_f64[0];
    local_2c8.Rotation.ZW.m128d_f64[1] = local_1a8.Rotation.ZW.m128d_f64[1];
    local_2c8.Translation.XY.m128d_f64[0] = local_1a8.Translation.XY.m128d_f64[0];
    local_2c8.Translation.XY.m128d_f64[1] = local_1a8.Translation.XY.m128d_f64[1];
    local_2c8.Translation.ZW.m128d_f64[0] = local_1a8.Translation.ZW.m128d_f64[0];
    local_2c8.Translation.ZW.m128d_f64[1] = local_1a8.Translation.ZW.m128d_f64[1];
    local_2c8.Scale3D.XY.m128d_f64[0] = local_1a8.Scale3D.XY.m128d_f64[0];
    local_2c8.Scale3D.XY.m128d_f64[1] = local_1a8.Scale3D.XY.m128d_f64[1];
    local_2c8.Scale3D.ZW.m128d_f64[0] = local_1a8.Scale3D.ZW.m128d_f64[0];
    local_2c8.Scale3D.ZW.m128d_f64[1] = local_1a8.Scale3D.ZW.m128d_f64[1];
  }
  if (this->bCached != false) {
    pUVar22 = (USkeletalMesh *)FWeakObjectPtr::Get(&(this->CachedSkeletalMesh).WeakPtr);
    pUVar23 = USkeletalMeshComponent::GetSkeletalMeshAsset(this_00);
    pFVar34 = this;
    if (pUVar22 == pUVar23) goto LAB_14863fbe6;
  }
  pTVar1 = &this->CachedSpheres;
  piVar2 = &(this->CachedSpheres).ArrayMax;
  (this->CachedSpheres).ArrayNum = 0;
  if ((this->CachedSpheres).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,&pTVar1->AllocatorInstance,0,piVar2);
  }
  local_428 = &this->CachedSphereConnections;
  (this->CachedSphereConnections).ArrayNum = 0;
  if ((this->CachedSphereConnections).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,&local_428->AllocatorInstance,0,&(this->CachedSphereConnections).ArrayMax);
  }
  fVar14 = __real_3f000000;
  dVar7 = __real_3ff0000000000000;
  local_520 = *(uint *)(local_478 + 2);
  uVar29 = (ulonglong)(int)local_520;
  plVar35 = *(longlong **)&local_478[1].field_0x20;
  local_468._0_8_ = plVar35 + uVar29;
  plVar33 = plVar35 + uVar29;
  while( true ) {
    local_480 = plVar35;
    if (*(int *)(local_478 + 2) != (int)uVar29) {
      local_538 = 0;
      `TCheckedPointerIterator<TObjectPtr<USkeletalBodySetup>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_538);
    }
    pFVar34 = local_518;
    if (plVar35 == plVar33) break;
    lVar39 = *plVar35;
    pUVar22 = USkeletalMeshComponent::GetSkeletalMeshAsset(this_00);
    lVar40 = (**(code **)(pUVar22->_padding_ + 800))(pUVar22);
    if (((*(FName *)(lVar39 + 0x28) != (FName)0x0) &&
        (piVar24 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                   ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                           *)(lVar40 + 0x90),*(FName *)(lVar39 + 0x28)), piVar24 != (int *)0x0)) &&
       (iVar18 = *piVar24, this_00 = local_510, iVar18 != -1)) {
      iVar20 = *(int *)(lVar39 + 0x40);
      lVar40 = *(longlong *)(lVar39 + 0x38);
      lVar43 = (longlong)iVar20 * 0x50 + lVar40;
      while( true ) {
        if (*(int *)(lVar39 + 0x40) != iVar20) {
          local_537 = 0;
          `TCheckedPointerIterator<FKSphereElem_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_537);
        }
        pTVar16 = local_428;
        if (lVar40 == lVar43) break;
        uStack_440 = *(undefined8 *)(lVar40 + 0x30);
        uStack_438 = *(undefined8 *)(lVar40 + 0x38);
        pFVar31 = (pTVar1->AllocatorInstance).Data;
        uStack_430 = *(undefined8 *)(lVar40 + 0x40);
        uStack_444 = *(undefined4 *)(lVar40 + 0x48);
        local_448 = iVar18;
        if (((pFVar31 <= (FScriptContainerElement *)&local_448) &&
            ((FScriptContainerElement *)&local_448 < pFVar31 + (longlong)*piVar2 * 0x20)) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar17)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar19 = (this->CachedSpheres).ArrayNum;
        if (iVar19 == *piVar2) {
          iVar19 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x820,&pTVar1->AllocatorInstance,piVar2);
        }
        (this->CachedSpheres).ArrayNum = iVar19 + 1;
        pFVar36 = (pTVar1->AllocatorInstance).Data;
        lVar40 = lVar40 + 0x50;
        pFVar31 = pFVar36 + (longlong)iVar19 * 0x20;
        *(ulonglong *)pFVar31 = CONCAT44(uStack_444,local_448);
        *(undefined8 *)(pFVar31 + 8) = uStack_440;
        pFVar36 = pFVar36 + (longlong)iVar19 * 0x20 + 0x10;
        *(undefined8 *)pFVar36 = uStack_438;
        *(undefined8 *)(pFVar36 + 8) = uStack_430;
      }
      local_530 = *(uint *)(lVar39 + 0x60);
      uVar29 = (ulonglong)(int)local_530;
      lVar40 = *(longlong *)(lVar39 + 0x58);
      local_528 = uVar29 * 0x68 + lVar40;
      while( true ) {
        if (*(int *)(lVar39 + 0x60) != (int)uVar29) {
          local_536 = 0;
          `TCheckedPointerIterator<FKSphylElem_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_536);
        }
        if (lVar40 == local_528) break;
        local_500 = 0xffffffff;
        dStack_4e8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        dStack_4c8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_3f0._s_0.X = 0.0;
        local_3f0._s_0.Y = 0.0;
        uStack_4fc = 0;
        local_3f0._s_0.Z = dVar7;
        dStack_4f8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        dStack_4f0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_4e0 = 0xffffffff;
        uStack_4dc = 0;
        dStack_4d8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        dStack_4d0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        UE::Math::TRotator<double>::RotateVector
                  ((TRotator<double> *)(lVar40 + 0x48),(TVector<double> *)&local_408._s_0,
                   (TVector<double> *)&local_3f0._s_0);
        pFVar31 = (pTVar1->AllocatorInstance).Data;
        dVar52 = (double)(*(float *)(lVar40 + 100) * fVar14);
        dStack_4f8 = *(double *)(lVar40 + 0x30) - local_408._s_0.X * dVar52;
        dStack_4d8 = *(double *)(lVar40 + 0x30) + local_408._s_0.X * dVar52;
        dStack_4f0 = *(double *)(lVar40 + 0x38) - local_408._s_0.Y * dVar52;
        dStack_4d0 = *(double *)(lVar40 + 0x38) + local_408._s_0.Y * dVar52;
        dStack_4e8 = *(double *)(lVar40 + 0x40) - local_408._s_0.Z * dVar52;
        dStack_4c8 = *(double *)(lVar40 + 0x40) + local_408._s_0.Z * dVar52;
        uStack_4fc = *(undefined4 *)(lVar40 + 0x60);
        local_500 = iVar18;
        local_4e0 = iVar18;
        uStack_4dc = uStack_4fc;
        if (((pFVar31 <= (FScriptContainerElement *)&local_500) &&
            ((FScriptContainerElement *)&local_500 < pFVar31 + (longlong)*piVar2 * 0x20)) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar17)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar20 = (this->CachedSpheres).ArrayNum;
        if (iVar20 == *piVar2) {
          iVar20 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x820,&pTVar1->AllocatorInstance,piVar2);
        }
        (this->CachedSpheres).ArrayNum = iVar20 + 1;
        pFVar36 = (pTVar1->AllocatorInstance).Data;
        pFVar31 = pFVar36 + (longlong)iVar20 * 0x20;
        *(ulonglong *)pFVar31 = CONCAT44(uStack_4fc,local_500);
        *(double *)(pFVar31 + 8) = dStack_4f8;
        pFVar36 = pFVar36 + (longlong)iVar20 * 0x20 + 0x10;
        *(double *)pFVar36 = dStack_4f0;
        *(double *)(pFVar36 + 8) = dStack_4e8;
        pFVar31 = (pTVar1->AllocatorInstance).Data;
        if (((pFVar31 <= (FScriptContainerElement *)&local_4e0) &&
            ((FScriptContainerElement *)&local_4e0 < pFVar31 + (longlong)*piVar2 * 0x20)) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar17)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar20 = (this->CachedSpheres).ArrayNum;
        if (iVar20 == *piVar2) {
          iVar20 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x820,&pTVar1->AllocatorInstance,piVar2);
        }
        (this->CachedSpheres).ArrayNum = iVar20 + 1;
        pFVar36 = (pTVar1->AllocatorInstance).Data;
        pFVar31 = pFVar36 + (longlong)iVar20 * 0x20;
        *(ulonglong *)pFVar31 = CONCAT44(uStack_4dc,local_4e0);
        *(double *)(pFVar31 + 8) = dStack_4d8;
        pFVar36 = pFVar36 + (longlong)iVar20 * 0x20 + 0x10;
        *(double *)pFVar36 = dStack_4d0;
        *(double *)(pFVar36 + 8) = dStack_4c8;
        iStack_2ec = (local_518->CachedSpheres).ArrayNum;
        dStack_2e8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        dStack_2e0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_2f0 = iStack_2ec + -2;
        dStack_2d8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        iStack_2ec = iStack_2ec + -1;
        pFVar31 = (pTVar16->AllocatorInstance).Data;
        if (((pFVar31 <= (FScriptContainerElement *)&local_2f0) &&
            ((FScriptContainerElement *)&local_2f0 < pFVar31 + (longlong)pTVar16->ArrayMax * 0x20))
           && (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar17)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar20 = pTVar16->ArrayNum;
        if (iVar20 == pTVar16->ArrayMax) {
          iVar20 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x820,&pTVar16->AllocatorInstance,&pTVar16->ArrayMax);
        }
        pTVar16->ArrayNum = iVar20 + 1;
        pFVar36 = (pTVar16->AllocatorInstance).Data;
        lVar40 = lVar40 + 0x68;
        pFVar31 = pFVar36 + (longlong)iVar20 * 0x20;
        *(ulonglong *)pFVar31 = CONCAT44(iStack_2ec,local_2f0);
        *(double *)(pFVar31 + 8) = dStack_2e8;
        pFVar36 = pFVar36 + (longlong)iVar20 * 0x20 + 0x10;
        *(double *)pFVar36 = dStack_2e0;
        *(double *)(pFVar36 + 8) = dStack_2d8;
        uVar29 = (ulonglong)local_530;
      }
      local_530 = *(uint *)(lVar39 + 0x80);
      uVar29 = (ulonglong)(int)local_530;
      lVar40 = *(longlong *)(lVar39 + 0x78);
      local_528 = uVar29 * 0x70 + lVar40;
      while( true ) {
        if (*(int *)(lVar39 + 0x80) != (int)uVar29) {
          local_535 = 0;
          `TCheckedPointerIterator<FKTaperedCapsuleElem_const_,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(&local_535);
        }
        this_00 = local_510;
        plVar35 = local_480;
        if (lVar40 == local_528) break;
        local_4c0 = 0xffffffff;
        dStack_4a8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        dStack_488 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_3d8._s_0.X = 0.0;
        local_3d8._s_0.Y = 0.0;
        uStack_4bc = 0;
        local_3d8._s_0.Z = dVar7;
        dStack_4b8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        dStack_4b0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_4a0 = 0xffffffff;
        uStack_49c = 0;
        dStack_498 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        dStack_490 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        UE::Math::TRotator<double>::RotateVector
                  ((TRotator<double> *)(lVar40 + 0x48),(TVector<double> *)&local_420._s_0,
                   (TVector<double> *)&local_3d8._s_0);
        pFVar31 = (pTVar1->AllocatorInstance).Data;
        dVar52 = (double)(*(float *)(lVar40 + 0x68) * fVar14);
        dStack_4b8 = *(double *)(lVar40 + 0x30) + local_420._s_0.X * dVar52;
        dStack_498 = *(double *)(lVar40 + 0x30) - local_420._s_0.X * dVar52;
        dStack_4b0 = *(double *)(lVar40 + 0x38) + local_420._s_0.Y * dVar52;
        dStack_490 = *(double *)(lVar40 + 0x38) - local_420._s_0.Y * dVar52;
        dStack_4a8 = *(double *)(lVar40 + 0x40) + local_420._s_0.Z * dVar52;
        dStack_488 = *(double *)(lVar40 + 0x40) - local_420._s_0.Z * dVar52;
        uStack_49c = *(undefined4 *)(lVar40 + 100);
        uStack_4bc = *(undefined4 *)(lVar40 + 0x60);
        local_4c0 = iVar18;
        local_4a0 = iVar18;
        if (((pFVar31 <= (FScriptContainerElement *)&local_4c0) &&
            ((FScriptContainerElement *)&local_4c0 < pFVar31 + (longlong)*piVar2 * 0x20)) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar17)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar20 = (this->CachedSpheres).ArrayNum;
        if (iVar20 == *piVar2) {
          iVar20 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x820,&pTVar1->AllocatorInstance,piVar2);
        }
        (this->CachedSpheres).ArrayNum = iVar20 + 1;
        pFVar36 = (pTVar1->AllocatorInstance).Data;
        pFVar31 = pFVar36 + (longlong)iVar20 * 0x20;
        *(ulonglong *)pFVar31 = CONCAT44(uStack_4bc,local_4c0);
        *(double *)(pFVar31 + 8) = dStack_4b8;
        pFVar36 = pFVar36 + (longlong)iVar20 * 0x20 + 0x10;
        *(double *)pFVar36 = dStack_4b0;
        *(double *)(pFVar36 + 8) = dStack_4a8;
        pFVar31 = (pTVar1->AllocatorInstance).Data;
        if (((pFVar31 <= (FScriptContainerElement *)&local_4a0) &&
            ((FScriptContainerElement *)&local_4a0 < pFVar31 + (longlong)*piVar2 * 0x20)) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar17)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar20 = (this->CachedSpheres).ArrayNum;
        if (iVar20 == *piVar2) {
          iVar20 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x820,&pTVar1->AllocatorInstance,piVar2);
        }
        (this->CachedSpheres).ArrayNum = iVar20 + 1;
        pFVar36 = (pTVar1->AllocatorInstance).Data;
        pFVar31 = pFVar36 + (longlong)iVar20 * 0x20;
        *(ulonglong *)pFVar31 = CONCAT44(uStack_49c,local_4a0);
        *(double *)(pFVar31 + 8) = dStack_498;
        pFVar36 = pFVar36 + (longlong)iVar20 * 0x20 + 0x10;
        *(double *)pFVar36 = dStack_490;
        *(double *)(pFVar36 + 8) = dStack_488;
        iStack_30c = (local_518->CachedSpheres).ArrayNum;
        dStack_308 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        dStack_300 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_310 = iStack_30c + -2;
        dStack_2f8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        iStack_30c = iStack_30c + -1;
        if (*(char *)(lVar40 + 0x6c) != '\0') {
          pTVar25 = UE::Math::TRotator<double>::RotateVector
                              ((TRotator<double> *)(lVar40 + 0x48),&local_328,
                               &UE::Math::TVector<double>::ForwardVector);
          dStack_308 = (pTVar25->field0_0x0)._s_0.X;
          dStack_300 = (pTVar25->field0_0x0)._s_0.Y;
          dStack_2f8 = (pTVar25->field0_0x0)._s_0.Z;
        }
        pFVar31 = (pTVar16->AllocatorInstance).Data;
        if (((pFVar31 <= (FScriptContainerElement *)&local_310) &&
            ((FScriptContainerElement *)&local_310 < pFVar31 + (longlong)pTVar16->ArrayMax * 0x20))
           && (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar17)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar20 = pTVar16->ArrayNum;
        if (iVar20 == pTVar16->ArrayMax) {
          iVar20 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x820,&pTVar16->AllocatorInstance,&pTVar16->ArrayMax);
        }
        pTVar16->ArrayNum = iVar20 + 1;
        pFVar36 = (pTVar16->AllocatorInstance).Data;
        lVar40 = lVar40 + 0x70;
        pFVar31 = pFVar36 + (longlong)iVar20 * 0x20;
        *(ulonglong *)pFVar31 = CONCAT44(iStack_30c,local_310);
        *(double *)(pFVar31 + 8) = dStack_308;
        pFVar36 = pFVar36 + (longlong)iVar20 * 0x20 + 0x10;
        *(double *)pFVar36 = dStack_300;
        *(double *)(pFVar36 + 8) = dStack_2f8;
        uVar29 = (ulonglong)local_530;
      }
    }
    plVar35 = plVar35 + 1;
    uVar29 = (ulonglong)local_520;
    plVar33 = (longlong *)local_468._0_8_;
  }
  local_458 = USkeletalMeshComponent::GetSkeletalMeshAsset(this_00);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_458 != (USkeletalMesh *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_458);
  }
  FWeakObjectPtr::operator=(&(pFVar34->CachedSkeletalMesh).WeakPtr,(FObjectPtr)&local_458);
  pFVar34->bCached = true;
LAB_14863fbe6:
  pFVar30 = local_508;
  iVar18 = (local_508->Spheres).ArrayNum;
  uVar32 = (pFVar34->CachedSpheres).ArrayNum + iVar18;
  if ((int)uVar32 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar32);
  }
  piVar2 = &(local_508->Spheres).ArrayMax;
  if ((local_508->Spheres).ArrayMax < (int)uVar32) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,uVar32,(ForAnyElementType *)local_508,iVar18,piVar2);
  }
  iVar18 = (pFVar30->SphereConnections).ArrayNum;
  uVar32 = (pFVar34->CachedSphereConnections).ArrayNum + iVar18;
  if (-1 < (int)uVar32) {
    piVar24 = &(pFVar30->SphereConnections).ArrayMax;
    local_468._0_8_ = piVar24;
    if (*piVar24 < (int)uVar32) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,uVar32,&(pFVar30->SphereConnections).AllocatorInstance,iVar18,piVar24);
    }
    iVar18 = (pFVar34->CachedSpheres).ArrayNum;
    pFVar31 = (pFVar34->CachedSpheres).AllocatorInstance.Data;
    pFVar36 = pFVar31 + (longlong)iVar18 * 0x20;
    while( true ) {
      if ((pFVar34->CachedSpheres).ArrayNum != iVar18) {
        local_534 = 0;
        `TCheckedPointerIterator<FClothCollisionPrim_Sphere,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_534);
      }
      pFVar15 = local_508;
      if (pFVar31 == pFVar36) break;
      pFVar3 = (pFVar30->Spheres).AllocatorInstance.Data;
      if (((pFVar3 <= pFVar31) && (pFVar31 < pFVar3 + (longlong)*piVar2 * 0x20)) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar17)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar20 = (pFVar30->Spheres).ArrayNum;
      if (iVar20 == *piVar2) {
        iVar20 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x820,(ForAnyElementType *)pFVar30,piVar2);
      }
      (pFVar30->Spheres).ArrayNum = iVar20 + 1;
      pFVar3 = (pFVar30->Spheres).AllocatorInstance.Data;
      uVar9 = *(undefined8 *)(pFVar31 + 8);
      lVar39 = (longlong)iVar20 * 0x20;
      *(undefined8 *)(pFVar3 + lVar39) = *(undefined8 *)pFVar31;
      *(undefined8 *)(pFVar3 + lVar39 + 8) = uVar9;
      uVar9 = *(undefined8 *)(pFVar31 + 0x18);
      *(undefined8 *)(pFVar3 + lVar39 + 0x10) = *(undefined8 *)(pFVar31 + 0x10);
      *(undefined8 *)(pFVar3 + lVar39 + 0x10 + 8) = uVar9;
      pTVar26 = USkinnedMeshComponent::GetBoneTransform
                          ((USkinnedMeshComponent *)local_510,&local_148,*(int *)(pFVar3 + lVar39),
                           &UE::Math::TTransform<double>::Identity);
      local_268.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_268.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
      local_268.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_268.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
      local_268.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_268.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
      local_268.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_268.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
      local_268.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_268.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
      local_268.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_268.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
      UE::Math::TTransform<double>::Multiply(&local_268,pTVar26,&local_2c8);
      auVar13._8_8_ = local_268.Rotation.ZW.m128d_f64[1];
      auVar13._0_8_ = local_268.Rotation.ZW.m128d_f64[0];
      auVar12._8_8_ = local_268.Rotation.XY.m128d_f64[1];
      auVar12._0_8_ = local_268.Rotation.XY.m128d_f64[0];
      dVar7 = *(double *)(pFVar3 + lVar39 + 0x18) * local_268.Scale3D.ZW.m128d_f64[0];
      dVar52 = local_268.Scale3D.ZW.m128d_f64[1] * 0.0;
      dVar68 = local_268.Scale3D.XY.m128d_f64[0] * *(double *)(pFVar3 + lVar39 + 8);
      dVar90 = local_268.Scale3D.XY.m128d_f64[1] * *(double *)(pFVar3 + lVar39 + 8 + 8);
      auVar48._8_4_ = SUB84(local_268.Rotation.ZW.m128d_f64[0],0);
      auVar48._0_8_ = local_268.Rotation.XY.m128d_f64[1];
      auVar48._12_4_ = (int)((ulonglong)local_268.Rotation.ZW.m128d_f64[0] >> 0x20);
      auVar89 = blendpd(auVar12,auVar13,2);
      auVar84._8_4_ = SUB84(dVar90,0);
      auVar84._0_8_ = dVar68;
      uVar51 = (undefined4)((ulonglong)dVar90 >> 0x20);
      auVar84._12_4_ = uVar51;
      auVar56._8_4_ = SUB84(dVar90,0);
      auVar56._0_8_ = dVar68;
      auVar56._12_4_ = uVar51;
      auVar5._8_4_ = SUB84(dVar52,0);
      auVar5._0_8_ = dVar7;
      auVar5._12_4_ = (int)((ulonglong)dVar52 >> 0x20);
      auVar53 = blendpd(auVar56,auVar5,2);
      auVar85._0_8_ =
           auVar84._8_8_ * local_268.Rotation.XY.m128d_f64[0] -
           local_268.Rotation.XY.m128d_f64[1] * dVar68;
      auVar85._8_8_ = dVar7 * local_268.Rotation.XY.m128d_f64[1] - auVar48._8_8_ * dVar90;
      auVar57._0_8_ = auVar53._0_8_ * local_268.Rotation.ZW.m128d_f64[0] - auVar89._0_8_ * dVar7;
      auVar57._8_8_ = auVar53._8_8_ * local_268.Rotation.ZW.m128d_f64[1] - auVar89._8_8_ * dVar52;
      auVar49._8_4_ = SUB84(auVar85._8_8_,0);
      auVar49._0_8_ = auVar85._0_8_;
      auVar49._12_4_ = (int)((ulonglong)auVar85._8_8_ >> 0x20);
      dVar52 = auVar49._8_8_ + auVar49._8_8_;
      dVar59 = auVar57._0_8_ + auVar57._0_8_;
      auVar53 = blendpd(auVar85,auVar57,2);
      auVar86._0_8_ = auVar53._0_8_ + auVar53._0_8_;
      auVar86._8_8_ = auVar53._8_8_ + auVar53._8_8_;
      auVar74._8_4_ = SUB84(dVar59,0);
      auVar74._0_8_ = dVar52;
      uVar51 = (undefined4)((ulonglong)dVar59 >> 0x20);
      auVar74._12_4_ = uVar51;
      auVar58._8_4_ = SUB84(local_268.Rotation.ZW.m128d_f64[1],0);
      auVar58._0_8_ = local_268.Rotation.ZW.m128d_f64[1];
      auVar58._12_4_ = (int)((ulonglong)local_268.Rotation.ZW.m128d_f64[1] >> 0x20);
      auVar66._8_4_ = SUB84(dVar59,0);
      auVar66._0_8_ = dVar52;
      auVar66._12_4_ = uVar51;
      auVar53 = blendpd(auVar66,auVar86,2);
      auVar75._0_8_ =
           auVar74._8_8_ * local_268.Rotation.XY.m128d_f64[0] -
           local_268.Rotation.XY.m128d_f64[1] * dVar52;
      auVar75._8_8_ =
           auVar86._0_8_ * local_268.Rotation.XY.m128d_f64[1] -
           local_268.Rotation.ZW.m128d_f64[0] * dVar59;
      auVar67._0_8_ =
           auVar53._0_8_ * local_268.Rotation.ZW.m128d_f64[0] - auVar89._0_8_ * auVar86._0_8_;
      auVar67._8_8_ =
           auVar53._8_8_ * local_268.Rotation.ZW.m128d_f64[1] - auVar89._8_8_ * auVar86._8_8_;
      auVar50._8_4_ = SUB84(auVar75._8_8_,0);
      auVar50._0_8_ = auVar75._0_8_;
      auVar50._12_4_ = (int)((ulonglong)auVar75._8_8_ >> 0x20);
      pFVar31 = pFVar31 + 0x20;
      local_3c0 = local_268.Rotation.ZW.m128d_f64[1] * dVar52 + dVar68 + auVar50._8_8_ +
                  local_268.Translation.XY.m128d_f64[0];
      dStack_3b8 = auVar58._8_8_ * dVar59 + dVar90 + auVar67._0_8_ +
                   local_268.Translation.XY.m128d_f64[1];
      auVar53 = blendpd(auVar75,auVar67,2);
      local_3b0 = local_268.Rotation.ZW.m128d_f64[1] * auVar86._0_8_ + dVar7 + auVar53._0_8_ +
                  local_268.Translation.ZW.m128d_f64[0];
      *(double *)(pFVar3 + lVar39 + 8) = local_3c0;
      *(double *)(pFVar3 + lVar39 + 8 + 8) = dStack_3b8;
      *(double *)(pFVar3 + lVar39 + 0x18) = local_3b0;
      local_3a8 = local_268.Scale3D.XY.m128d_f64[0];
      dStack_3a0 = local_268.Scale3D.XY.m128d_f64[1];
      local_398 = local_268.Scale3D.ZW.m128d_f64[0];
      *(undefined4 *)(pFVar3 + lVar39) = 0xffffffff;
      *(float *)(pFVar3 + lVar39 + 4) =
           (float)((double)*(float *)(pFVar3 + lVar39 + 4) * local_268.Scale3D.XY.m128d_f64[0]);
      pFVar30 = local_508;
    }
    iVar18 = (pFVar34->CachedSphereConnections).ArrayNum;
    iVar20 = (pFVar30->SphereConnections).ArrayNum;
    pFVar31 = (pFVar34->CachedSphereConnections).AllocatorInstance.Data;
    uVar9 = local_468._0_8_;
    pFVar36 = pFVar31 + (longlong)iVar18 * 0x20;
    while( true ) {
      if ((pFVar34->CachedSphereConnections).ArrayNum != iVar18) {
        local_533[0] = 0;
        `TCheckedPointerIterator<FClothCollisionPrim_SphereConnection,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_533);
      }
      if (pFVar31 == pFVar36) break;
      pFVar3 = (pFVar15->SphereConnections).AllocatorInstance.Data;
      if (((pFVar3 <= pFVar31) &&
          (pFVar31 < pFVar3 + (longlong)(pFVar15->SphereConnections).ArrayMax * 0x20)) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar17)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar19 = (pFVar15->SphereConnections).ArrayNum;
      if (iVar19 == (pFVar15->SphereConnections).ArrayMax) {
        iVar19 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x820,&(pFVar15->SphereConnections).AllocatorInstance,(int *)uVar9);
      }
      (pFVar15->SphereConnections).ArrayNum = iVar19 + 1;
      uVar10 = *(undefined8 *)(pFVar31 + 8);
      pFVar3 = (pFVar15->SphereConnections).AllocatorInstance.Data;
      lVar39 = (longlong)iVar19 * 0x20;
      *(undefined8 *)(pFVar3 + lVar39) = *(undefined8 *)pFVar31;
      *(undefined8 *)(pFVar3 + lVar39 + 8) = uVar10;
      uVar10 = *(undefined8 *)(pFVar31 + 0x18);
      *(undefined8 *)(pFVar3 + lVar39 + 0x10) = *(undefined8 *)(pFVar31 + 0x10);
      *(undefined8 *)(pFVar3 + lVar39 + 0x10 + 8) = uVar10;
      *(int *)(pFVar3 + lVar39) = *(int *)(pFVar3 + lVar39) + iVar20;
      *(int *)(pFVar3 + lVar39 + 4) = *(int *)(pFVar3 + lVar39 + 4) + iVar20;
      pFVar31 = pFVar31 + 0x20;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar32);
}

