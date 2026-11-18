// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 10

// StaticStruct @ 1463f0b90

UScriptStruct * __cdecl FAnimNode_Fabrik::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_Fabrik.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    Z_Registration_Info_UScriptStruct_FAnimNode_Fabrik.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_Fabrik,(UObject *)pUVar1,
                         L"AnimNode_Fabrik");
  }
  return Z_Registration_Info_UScriptStruct_FAnimNode_Fabrik.OuterSingleton;
}

// FAnimNode_Fabrik @ 146403bd0

FAnimNode_Fabrik * __thiscall FAnimNode_Fabrik::FAnimNode_Fabrik(FAnimNode_Fabrik *this)

{
  undefined1 *puVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  FAnimNode_SkeletalControlBase::FAnimNode_SkeletalControlBase
            ((FAnimNode_SkeletalControlBase *)this);
  this->_padding_ = (longlong)&___7FAnimNode_Fabrik__6B_;
  *&(this->EffectorTransform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->EffectorTransform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->EffectorTransform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->EffectorTransform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->EffectorTransform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->EffectorTransform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  (this->EffectorTarget).BoneReference.BoneName.ComparisonIndex = 0;
  (this->EffectorTarget).BoneReference.BoneName.Number = 0;
  puVar1 = &(this->EffectorTarget).BoneReference.field_0x8;
  (this->EffectorTarget).BoneReference.BoneIndex = -1;
  (this->EffectorTarget).BoneReference.bUseSkeletonIndex = 0;
  (this->EffectorTarget).BoneReference.CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar4._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar4._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar4._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])
   (this->EffectorTarget).SocketReference.CachedSocketLocalTransform.Rotation.XY.m128d_f64 = auVar4;
  auVar5._8_4_ = SUB84((double)fVar3,0);
  auVar5._0_8_ = (double)fVar2;
  auVar5._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])
   (this->EffectorTarget).SocketReference.CachedSocketLocalTransform.Rotation.ZW.m128d_f64 = auVar5;
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar6._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar6._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar6._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])
   (this->EffectorTarget).SocketReference.CachedSocketLocalTransform.Translation.XY.m128d_f64 =
       auVar6;
  auVar7._8_4_ = SUB84((double)fVar3,0);
  auVar7._0_8_ = (double)fVar2;
  auVar7._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])
   (this->EffectorTarget).SocketReference.CachedSocketLocalTransform.Translation.ZW.m128d_f64 =
       auVar7;
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])
   (this->EffectorTarget).SocketReference.CachedSocketLocalTransform.Scale3D.XY.m128d_f64 = auVar8;
  auVar9._8_4_ = SUB84((double)fVar3,0);
  auVar9._0_8_ = (double)fVar2;
  auVar9._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])
   (this->EffectorTarget).SocketReference.CachedSocketLocalTransform.Scale3D.ZW.m128d_f64 = auVar9;
  (this->EffectorTarget).SocketReference.SocketName.ComparisonIndex = 0;
  (this->EffectorTarget).SocketReference.SocketName.Number = 0;
  (this->EffectorTarget).SocketReference.CachedSocketMeshBoneIndex = (FMeshPoseBoneIndex)0xffffffff;
  (this->EffectorTarget).SocketReference.CachedSocketCompactBoneIndex =
       (FCompactPoseBoneIndex)0xffffffff;
  (this->EffectorTarget).bUseSocket = false;
  (this->EffectorTarget).BoneReference.BoneName.ComparisonIndex = 0;
  (this->EffectorTarget).BoneReference.BoneName.Number = 0;
  (this->TipBone).BoneName.ComparisonIndex = 0;
  (this->TipBone).BoneName.Number = 0;
  puVar1 = &(this->TipBone).field_0x8;
  (this->TipBone).BoneIndex = -1;
  (this->TipBone).bUseSkeletonIndex = 0;
  (this->TipBone).CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
  (this->RootBone).BoneName.ComparisonIndex = 0;
  (this->RootBone).BoneName.Number = 0;
  puVar1 = &(this->RootBone).field_0x8;
  (this->RootBone).BoneIndex = -1;
  (this->RootBone).bUseSkeletonIndex = 0;
  (this->RootBone).CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
  this->Precision = 1.0;
  this->MaxIterations = 10;
  this->EffectorTransformSpace = '\x01';
  this->EffectorRotationSource = '\x01';
  return this;
}

// ConditionalDebugDraw @ 1464200d0

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
FAnimNode_Fabrik::ConditionalDebugDraw
          (FAnimNode_Fabrik *this,FPrimitiveDrawInterface *param_1,USkeletalMeshComponent *param_2)

{
  return;
}

// EvaluateSkeletalControl_AnyThread @ 14642cb80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014642d209) */
/* WARNING: Removing unreachable block (ram,0x00014642d5a8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FAnimNode_Fabrik::EvaluateSkeletalControl_AnyThread
          (FAnimNode_Fabrik *this,FComponentSpacePoseContext *param_1,
          TArray<FBoneTransform,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  uchar uVar3;
  FCompactPoseBoneIndex FVar4;
  FCompactPoseBoneIndex *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined1 auVar22 [12];
  undefined8 uVar23;
  double *pdVar24;
  double dVar25;
  double dVar26;
  ForAnyElementType FVar27;
  bool bVar28;
  int iVar29;
  int iVar30;
  uint uVar31;
  longlong lVar32;
  TTransform<double> *pTVar33;
  EBoneControlSpace EVar34;
  uint uVar35;
  TArray<FBoneTransform,TSizedDefaultAllocator<32>_> *pTVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  TArray<FBoneTransform,TSizedDefaultAllocator<32>_> *pTVar40;
  TArray<FBoneTransform,TSizedDefaultAllocator<32>_> *pTVar41;
  TArray<FBoneTransform,TSizedDefaultAllocator<32>_> *pTVar42;
  ulonglong uVar43;
  longlong lVar44;
  FScriptContainerElement *pFVar45;
  ulonglong uVar46;
  ulonglong uVar47;
  ulonglong uVar48;
  ulonglong uVar49;
  double extraout_XMM0_Qa;
  undefined1 extraout_XMM0 [16];
  undefined1 auVar50 [16];
  undefined1 extraout_XMM0_00 [16];
  double extraout_XMM0_Qb;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  double dVar62;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined4 uVar69;
  undefined4 uVar70;
  undefined4 uVar71;
  undefined4 uVar72;
  double dVar73;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  double dVar76;
  double dVar77;
  undefined1 auStackY_568 [32];
  TArray<FFABRIKChainLink,TSizedDefaultAllocator<32>_> local_518;
  uint local_508;
  undefined1 local_504 [12];
  TArray<FCompactPoseBoneIndex,TSizedDefaultAllocator<32>_> local_4f8;
  uint local_4e8;
  TTransform<double> *local_4e0;
  FCSPose<FCompactPose> *local_4d8;
  FCompactPoseBoneIndex local_4d0;
  FCompactPoseBoneIndex local_4cc;
  TArray<FBoneTransform,TSizedDefaultAllocator<32>_> *local_4c8;
  longlong local_4c0;
  FAnimNode_Fabrik *local_4b8;
  TVector<double>_u_0 local_4b0;
  undefined8 local_498;
  FCompactPoseBoneIndex local_490;
  int local_48c;
  undefined8 local_488;
  undefined8 uStack_480;
  undefined8 local_478;
  undefined8 local_470;
  undefined8 local_468;
  TVector<double>_u_0 local_460;
  double local_448;
  int local_440;
  uint local_43c;
  undefined8 local_438;
  undefined8 uStack_430;
  undefined8 local_428;
  undefined8 local_420;
  undefined8 local_418;
  undefined1 local_410 [16];
  double local_400;
  double local_3f8;
  double dStack_3f0;
  double local_3e8;
  double dStack_3e0;
  double local_3d8;
  double local_3d0;
  double local_3c8;
  TVector<double>_u_0 local_3c0;
  double local_3a8;
  double dStack_3a0;
  double local_398;
  double local_390;
  double dStack_388;
  double local_380;
  double local_378;
  double dStack_370;
  double local_368;
  double local_360;
  double dStack_358;
  double local_350;
  TTransform<double> local_348;
  TTransform<double> local_2e8;
  TTransform<double> local_288;
  FCompactPoseBoneIndex local_228;
  double local_218;
  double dStack_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  double dStack_1c0;
  undefined4 local_1b8;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  double dStack_190;
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  double local_168;
  double dStack_160;
  double local_158;
  double dStack_150;
  TTransform<double> local_148;
  ulonglong local_e8;
  undefined8 uVar61;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_568;
  local_4c8 = param_2;
  local_4b8 = this;
  FStatsHierarchical::BeginMeasurement("FAnimNode_Fabrik::EvaluateSkeletalControl_AnyThread");
  local_4d8 = &param_1->Pose;
  pTVar33 = (TTransform<double> *)(param_1->_padding_ + 0x20);
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
  EVar34 = (EBoneControlSpace)(this->EffectorTransformSpace).Value;
  if (EVar34 == BCS_BoneSpace) {
    pTVar33 = FBoneSocketTarget::GetTargetTransform<FCompactPose>
                        (&this->EffectorTarget,&local_348,&this->EffectorTransform,local_4d8,pTVar33
                        );
    local_2e8.Rotation.XY.m128d_f64[0] = (pTVar33->Rotation).XY.m128d_f64[0];
    local_2e8.Rotation.XY.m128d_f64[1] = (pTVar33->Rotation).XY.m128d_f64[1];
    local_2e8.Rotation.ZW.m128d_f64[0] = (pTVar33->Rotation).ZW.m128d_f64[0];
    local_2e8.Rotation.ZW.m128d_f64[1] = (pTVar33->Rotation).ZW.m128d_f64[1];
    local_2e8.Translation.XY.m128d_f64[0] = (pTVar33->Translation).XY.m128d_f64[0];
    local_2e8.Translation.XY.m128d_f64[1] = (pTVar33->Translation).XY.m128d_f64[1];
    local_2e8.Translation.ZW.m128d_f64[0] = (pTVar33->Translation).ZW.m128d_f64[0];
    local_2e8.Translation.ZW.m128d_f64[1] = (pTVar33->Translation).ZW.m128d_f64[1];
    local_2e8.Scale3D.XY.m128d_f64[0] = (pTVar33->Scale3D).XY.m128d_f64[0];
    pdVar24 = (pTVar33->Scale3D).XY.m128d_f64 + 1;
    local_2e8.Scale3D.XY.m128d_f64[1] = *pdVar24;
    local_2e8.Scale3D.ZW.m128d_f64[0] = (pTVar33->Scale3D).ZW.m128d_f64[0];
    local_2e8.Scale3D.ZW.m128d_f64[1] = (pTVar33->Scale3D).ZW.m128d_f64[1];
    uVar72 = *(undefined4 *)(pTVar33->Scale3D).XY.m128d_f64;
    uVar69 = *(undefined4 *)((longlong)(pTVar33->Scale3D).XY.m128d_f64 + 4);
    uVar70 = *(undefined4 *)pdVar24;
    uVar71 = *(undefined4 *)((longlong)(pTVar33->Scale3D).XY.m128d_f64 + 0xc);
  }
  else {
    local_2e8.Rotation.XY.m128d_f64[0] = (this->EffectorTransform).Rotation.XY.m128d_f64[0];
    local_2e8.Rotation.XY.m128d_f64[1] = (this->EffectorTransform).Rotation.XY.m128d_f64[1];
    local_2e8.Rotation.ZW.m128d_f64[0] = (this->EffectorTransform).Rotation.ZW.m128d_f64[0];
    local_2e8.Rotation.ZW.m128d_f64[1] = (this->EffectorTransform).Rotation.ZW.m128d_f64[1];
    lVar32 = 0x8c;
    local_2e8.Translation.XY.m128d_f64[0] = (this->EffectorTransform).Translation.XY.m128d_f64[0];
    local_2e8.Translation.XY.m128d_f64[1] = (this->EffectorTransform).Translation.XY.m128d_f64[1];
    if ((this->EffectorTarget).bUseSocket == false) {
      lVar32 = 0x10;
    }
    local_2e8.Translation.ZW.m128d_f64[0] = (this->EffectorTransform).Translation.ZW.m128d_f64[0];
    local_2e8.Translation.ZW.m128d_f64[1] = (this->EffectorTransform).Translation.ZW.m128d_f64[1];
    local_2e8.Scale3D.XY.m128d_f64[0] = (this->EffectorTransform).Scale3D.XY.m128d_f64[0];
    local_2e8.Scale3D.XY.m128d_f64[1] = (this->EffectorTransform).Scale3D.XY.m128d_f64[1];
    local_2e8.Scale3D.ZW.m128d_f64[0] = (this->EffectorTransform).Scale3D.ZW.m128d_f64[0];
    local_2e8.Scale3D.ZW.m128d_f64[1] = (this->EffectorTransform).Scale3D.ZW.m128d_f64[1];
    FAnimationRuntime::ConvertBoneSpaceTransformToCS
              (pTVar33,local_4d8,&local_2e8,
               *(FCompactPoseBoneIndex *)
                ((longlong)
                 (&(this->EffectorTarget).SocketReference.CachedSocketLocalTransform.Rotation + -1)
                + lVar32),EVar34);
    uVar72 = local_2e8.Scale3D.XY.m128d_f64[0]._0_4_;
    uVar69 = local_2e8.Scale3D.XY.m128d_f64[0]._4_4_;
    uVar70 = local_2e8.Scale3D.XY.m128d_f64[1]._0_4_;
    uVar71 = local_2e8.Scale3D.XY.m128d_f64[1]._4_4_;
  }
  pTVar41 = (TArray<FBoneTransform,TSizedDefaultAllocator<32>_> *)0x0;
  local_4f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_4f8.ArrayNum = 0;
  local_4f8.ArrayMax = 0;
  local_288.Scale3D.XY.m128d_f64[0] = (double)CONCAT44(uVar69,uVar72);
  local_288.Scale3D.XY.m128d_f64[1] = (double)CONCAT44(uVar71,uVar70);
  local_3f8 = local_2e8.Rotation.XY.m128d_f64[0];
  dStack_3f0 = local_2e8.Rotation.XY.m128d_f64[1];
  local_3e8 = local_2e8.Rotation.ZW.m128d_f64[0];
  dStack_3e0 = local_2e8.Rotation.ZW.m128d_f64[1];
  local_3c0._s_0.X = local_2e8.Translation.XY.m128d_f64[0];
  local_3c0._s_0.Y = local_2e8.Translation.XY.m128d_f64[1];
  local_3c0._s_0.Z = local_2e8.Translation.ZW.m128d_f64[0];
  local_288.Translation.XY.m128d_f64[0] = local_2e8.Translation.XY.m128d_f64[0];
  local_288.Translation.XY.m128d_f64[1] = local_2e8.Translation.XY.m128d_f64[1];
  local_288.Translation.ZW.m128d_f64[0] = local_2e8.Translation.ZW.m128d_f64[0];
  local_288.Translation.ZW.m128d_f64[1] = local_2e8.Translation.ZW.m128d_f64[1];
  local_288.Scale3D.ZW.m128d_f64[0] = local_2e8.Scale3D.ZW.m128d_f64[0];
  local_288.Scale3D.ZW.m128d_f64[1] = local_2e8.Scale3D.ZW.m128d_f64[1];
  FBoneReference::GetCompactPoseIndex(&this->RootBone,(FBoneContainer *)&local_4cc);
  FBoneReference::GetCompactPoseIndex(&this->TipBone,(FBoneContainer *)local_504);
  do {
    if (((local_4f8.AllocatorInstance.Data <= (FCompactPoseBoneIndex *)local_504) &&
        ((FScriptContainerElement *)local_504 <
         local_4f8.AllocatorInstance.Data + (longlong)local_4f8.ArrayMax * 4)) &&
       (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar28)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar29 = local_4f8.ArrayNum;
    if (local_4f8.ArrayNum == local_4f8.ArrayMax) {
      iVar29 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&local_4f8.AllocatorInstance,&local_4f8.ArrayMax);
    }
    local_4f8.ArrayNum = iVar29 + 1;
    memmove((FCompactPoseBoneIndex *)(local_4f8.AllocatorInstance.Data + 4),
            local_4f8.AllocatorInstance.Data,(longlong)iVar29 << 2);
    *(undefined4 *)local_4f8.AllocatorInstance.Data = local_504._0_4_;
    FBoneContainer::GetParentBoneIndex
              (*(FBoneContainer **)&(param_1->Pose).Pose.field_0x10,&local_4d0);
    local_504._0_4_ = local_4d0;
  } while (local_4d0 != local_4cc);
  TArray<FCompactPoseBoneIndex,TSizedDefaultAllocator<32>_>::Insert
            (&local_4f8,(FCompactPoseBoneIndex *)local_504,0);
  iVar29 = local_4f8.ArrayNum;
  uVar43 = local_4f8._8_8_ & 0xffffffff;
  piVar1 = &param_2->ArrayNum;
  local_504._4_4_ = local_4f8.ArrayNum;
  dVar20 = 0.0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x70,0x10,local_4f8.ArrayNum,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
  local_518.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_518.ArrayNum = 0;
  local_518.ArrayMax = 0;
  if (iVar29 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar43);
  }
  if (0 < iVar29) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x50,8,iVar29,&local_518.AllocatorInstance,0,&local_518.ArrayMax);
  }
  if ((local_4f8.ArrayNum < 1) &&
     (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar28)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FVar27.Data = local_4f8.AllocatorInstance.Data;
  pTVar33 = FCSPose<FCompactPose>::GetComponentSpaceTransform
                      (local_4d8,*(FCompactPoseBoneIndex *)local_4f8.AllocatorInstance.Data);
  FVar4 = *(FCompactPoseBoneIndex *)FVar27.Data;
  dVar62 = (pTVar33->Rotation).XY.m128d_f64[0];
  dVar73 = (pTVar33->Rotation).XY.m128d_f64[1];
  dVar77 = (pTVar33->Rotation).ZW.m128d_f64[0];
  dVar14 = (pTVar33->Rotation).ZW.m128d_f64[1];
  dVar15 = (pTVar33->Translation).XY.m128d_f64[0];
  dVar16 = (pTVar33->Translation).XY.m128d_f64[1];
  dVar17 = (pTVar33->Translation).ZW.m128d_f64[0];
  dVar18 = (pTVar33->Translation).ZW.m128d_f64[1];
  dVar19 = (pTVar33->Scale3D).XY.m128d_f64[0];
  dVar21 = (pTVar33->Scale3D).XY.m128d_f64[1];
  dVar76 = (pTVar33->Scale3D).ZW.m128d_f64[0];
  dVar25 = (pTVar33->Scale3D).ZW.m128d_f64[1];
  local_228 = FVar4;
  local_218 = dVar62;
  dStack_210 = dVar73;
  local_208 = dVar77;
  dStack_200 = dVar14;
  local_1f8 = dVar15;
  dStack_1f0 = dVar16;
  local_1e8 = dVar17;
  dStack_1e0 = dVar18;
  local_1d8 = dVar19;
  dStack_1d0 = dVar21;
  local_1c8 = dVar76;
  dStack_1c0 = dVar25;
  if ((*piVar1 < 1) &&
     (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar28)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar23 = _UNK_15076ad98;
  uVar2 = ___xmm_0000000000000000bff0000000000000;
  pFVar5 = (FCompactPoseBoneIndex *)(param_2->AllocatorInstance).Data;
  local_498._0_4_ = 0;
  local_498._4_4_ = 0;
  local_478 = 0;
  *pFVar5 = FVar4;
  *(double *)(pFVar5 + 4) = dVar62;
  *(double *)(pFVar5 + 6) = dVar73;
  local_48c = 0;
  *(double *)(pFVar5 + 8) = dVar77;
  *(double *)(pFVar5 + 10) = dVar14;
  local_470 = 0;
  *(double *)(pFVar5 + 0xc) = dVar15;
  *(double *)(pFVar5 + 0xe) = dVar16;
  local_468 = 0;
  *(double *)(pFVar5 + 0x10) = dVar17;
  *(double *)(pFVar5 + 0x12) = dVar18;
  *(double *)(pFVar5 + 0x14) = dVar19;
  *(double *)(pFVar5 + 0x16) = dVar21;
  *(double *)(pFVar5 + 0x18) = dVar76;
  *(double *)(pFVar5 + 0x1a) = dVar25;
  local_490 = *(FCompactPoseBoneIndex *)FVar27.Data;
  local_4b0._s_0.X = (pTVar33->Translation).XY.m128d_f64[0];
  local_4b0._s_0.Y = (pTVar33->Translation).XY.m128d_f64[1];
  local_4b0._s_0.Z = (pTVar33->Translation).ZW.m128d_f64[0];
  local_488 = uVar2;
  uStack_480 = uVar23;
  local_3a8 = local_4b0._s_0.X;
  dStack_3a0 = local_4b0._s_0.Y;
  local_398 = local_4b0._s_0.Z;
  if (((local_518.AllocatorInstance.Data <= &local_4b0) &&
      (&local_4b0 <
       (TVector<double>_u_0 *)
       (local_518.AllocatorInstance.Data + (longlong)local_518.ArrayMax * 0x50))) &&
     (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar28)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar30 = local_518.ArrayNum;
  if (local_518.ArrayNum == local_518.ArrayMax) {
    iVar30 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x850,&local_518.AllocatorInstance,&local_518.ArrayMax);
  }
  lVar32 = (longlong)iVar30;
  local_518.ArrayNum = iVar30 + 1;
  *(double *)&local_518.AllocatorInstance.Data[lVar32 * 0x50].field_0x0 = local_4b0._s_0.X;
  *(double *)(local_518.AllocatorInstance.Data + lVar32 * 0x50 + 8) = local_4b0._s_0.Y;
  *(double *)(local_518.AllocatorInstance.Data + lVar32 * 0x50 + 0x10) = local_4b0._s_0.Z;
  *(undefined8 *)(local_518.AllocatorInstance.Data + lVar32 * 0x50 + 0x18) = local_498;
  *(FCompactPoseBoneIndex *)(local_518.AllocatorInstance.Data + lVar32 * 0x50 + 0x20) = local_490;
  *(int *)(local_518.AllocatorInstance.Data + lVar32 * 0x50 + 0x24) = local_48c;
  *(undefined8 *)(local_518.AllocatorInstance.Data + lVar32 * 0x50 + 0x28) = local_488;
  *(undefined8 *)(local_518.AllocatorInstance.Data + lVar32 * 0x50 + 0x28 + 8) = uStack_480;
  *(undefined8 *)(local_518.AllocatorInstance.Data + lVar32 * 0x50 + 0x38) = local_478;
  *(undefined8 *)(local_518.AllocatorInstance.Data + lVar32 * 0x50 + 0x40) = 0;
  *(undefined8 *)(local_518.AllocatorInstance.Data + lVar32 * 0x50 + 0x40) = local_470;
  *(int *)(local_518.AllocatorInstance.Data + lVar32 * 0x50 + 0x48) = (int)local_468;
  *(int *)(local_518.AllocatorInstance.Data + lVar32 * 0x50 + 0x4c) = local_468._4_4_;
  local_468 = 0;
  local_470 = 0;
  local_508 = 1;
  dVar62 = 0.0;
  if (1 < iVar29) {
    do {
      dVar20 = dVar62;
      uVar39 = local_508;
      uVar35 = 0;
      uVar37 = uVar35;
      if ((int)local_508 < local_4f8.ArrayNum) {
        uVar37 = ~local_508 >> 0x1f;
      }
      if ((uVar37 == 0) &&
         (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar28)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      FVar27.Data = local_4f8.AllocatorInstance.Data;
      lVar44 = (longlong)(int)uVar39;
      pTVar33 = FCSPose<FCompactPose>::GetComponentSpaceTransform
                          (local_4d8,
                           *(FCompactPoseBoneIndex *)(local_4f8.AllocatorInstance.Data + lVar44 * 4)
                          );
      lVar32 = (longlong)(int)local_508;
      uVar72 = *(undefined4 *)(FVar27.Data + lVar44 * 4);
      auVar55 = *(undefined1 (*) [16])(pTVar33->Translation).XY.m128d_f64;
      auVar66 = *(undefined1 (*) [16])(pTVar33->Translation).ZW.m128d_f64;
      dVar62 = (pTVar33->Rotation).XY.m128d_f64[0];
      dVar73 = (pTVar33->Rotation).XY.m128d_f64[1];
      dVar77 = (pTVar33->Rotation).ZW.m128d_f64[0];
      dVar14 = (pTVar33->Rotation).ZW.m128d_f64[1];
      dVar15 = (pTVar33->Scale3D).XY.m128d_f64[0];
      dVar16 = (pTVar33->Scale3D).XY.m128d_f64[1];
      dVar17 = (pTVar33->Scale3D).ZW.m128d_f64[0];
      dVar18 = (pTVar33->Scale3D).ZW.m128d_f64[1];
      local_400 = auVar66._0_8_;
      uVar39 = uVar35;
      if ((int)local_508 < *piVar1) {
        uVar39 = ~local_508 >> 0x1f;
      }
      auVar50 = auVar66;
      local_410 = auVar55;
      local_1b8 = uVar72;
      local_1a8 = dVar62;
      dStack_1a0 = dVar73;
      local_198 = dVar77;
      dStack_190 = dVar14;
      local_188 = auVar55;
      local_178 = auVar66;
      local_168 = dVar15;
      dStack_160 = dVar16;
      local_158 = dVar17;
      dStack_150 = dVar18;
      if ((uVar39 == 0) &&
         (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         auVar50 = extraout_XMM0, bVar28)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar61 = auVar50._8_8_;
      pFVar45 = (param_2->AllocatorInstance).Data;
      lVar32 = lVar32 * 0x70;
      *(undefined4 *)(pFVar45 + lVar32) = uVar72;
      *(double *)(pFVar45 + lVar32 + 0x10) = dVar62;
      *(double *)(pFVar45 + lVar32 + 0x10 + 8) = dVar73;
      *(double *)(pFVar45 + lVar32 + 0x20) = dVar77;
      *(double *)(pFVar45 + lVar32 + 0x20 + 8) = dVar14;
      *(undefined1 (*) [16])(pFVar45 + lVar32 + 0x30) = auVar55;
      *(undefined1 (*) [16])(pFVar45 + lVar32 + 0x40) = auVar66;
      *(double *)(pFVar45 + lVar32 + 0x50) = dVar15;
      *(double *)(pFVar45 + lVar32 + 0x50 + 8) = dVar16;
      *(double *)(pFVar45 + lVar32 + 0x60) = dVar17;
      *(double *)(pFVar45 + lVar32 + 0x60 + 8) = dVar18;
      uVar37 = local_508 - 1;
      uVar39 = uVar35;
      if ((int)uVar37 < *piVar1) {
        uVar39 = ~uVar37 >> 0x1f;
      }
      if (uVar39 == 0) {
        bVar28 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        uVar61 = extraout_XMM0_00._8_8_;
        if (bVar28) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      auVar22._4_8_ = uVar61;
      auVar22._0_4_ = auVar55._4_4_;
      auVar66._0_8_ = auVar22._0_8_ << 0x20;
      auVar66._8_4_ = auVar55._8_4_;
      auVar66._12_4_ = auVar55._12_4_;
      pFVar6 = (param_2->AllocatorInstance).Data;
      pFVar45 = pFVar6 + (longlong)(int)uVar37 * 0x70 + 0x30;
      local_390 = *(double *)pFVar45;
      dStack_388 = *(double *)(pFVar45 + 8);
      local_380 = *(double *)(pFVar6 + (longlong)(int)uVar37 * 0x70 + 0x40);
      dVar62 = local_390 - auVar55._0_8_;
      dVar73 = dStack_388 - auVar66._8_8_;
      dVar62 = SQRT(dVar73 * dVar73 + dVar62 * dVar62 +
                    (local_380 - local_400) * (local_380 - local_400));
      if (dVar62 <= __real_3e45798ee2308c3a) {
        uVar39 = local_518.ArrayNum - 1;
        if ((int)uVar39 < local_518.ArrayNum) {
          uVar35 = ~uVar39 >> 0x1f;
        }
        if ((uVar35 == 0) &&
           (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar28)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        FVar27.Data = local_518.AllocatorInstance.Data;
        if (((*(uint **)&local_518.AllocatorInstance.Data[(longlong)(int)uVar39 * 0x50 + 0x40].
                         field_0x0 <= &local_508) &&
            (&local_508 <
             *(uint **)&local_518.AllocatorInstance.Data[(longlong)(int)uVar39 * 0x50 + 0x40].
                        field_0x0 +
             *(int *)(local_518.AllocatorInstance.Data + (longlong)(int)uVar39 * 0x50 + 0x4c))) &&
           (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar28)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar29 = *(int *)(FVar27.Data + (longlong)(int)uVar39 * 0x50 + 0x48);
        if (iVar29 == *(int *)(FVar27.Data + (longlong)(int)uVar39 * 0x50 + 0x4c)) {
          iVar29 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,(ForAnyElementType *)
                                    (FVar27.Data + (longlong)(int)uVar39 * 0x50 + 0x40),
                              (int *)(FVar27.Data + (longlong)(int)uVar39 * 0x50 + 0x4c));
        }
        *(int *)(FVar27.Data + (longlong)(int)uVar39 * 0x50 + 0x48) = iVar29 + 1;
        *(uint *)(*(longlong *)&FVar27.Data[(longlong)(int)uVar39 * 0x50 + 0x40].field_0x0 +
                 (longlong)iVar29 * 4) = local_508;
      }
      else {
        local_440 = *(int *)(FVar27.Data + lVar44 * 4);
        local_43c = local_508;
        local_428 = 0;
        local_460._s_0.Z = local_400;
        local_420 = 0;
        local_418 = 0;
        local_438 = uVar2;
        uStack_430 = uVar23;
        local_460._0_16_ = auVar55;
        local_448 = dVar62;
        if (((local_518.AllocatorInstance.Data <= &local_460) &&
            (&local_460 <
             (TVector<double>_u_0 *)
             (local_518.AllocatorInstance.Data + (longlong)local_518.ArrayMax * 0x50))) &&
           (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar28)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar29 = local_518.ArrayNum;
        if (local_518.ArrayNum == local_518.ArrayMax) {
          iVar29 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x850,&local_518.AllocatorInstance,&local_518.ArrayMax);
        }
        lVar32 = (longlong)iVar29;
        local_518.ArrayNum = iVar29 + 1;
        *(double *)&local_518.AllocatorInstance.Data[lVar32 * 0x50].field_0x0 = local_460._s_0.X;
        *(double *)(local_518.AllocatorInstance.Data + lVar32 * 0x50 + 8) = local_460._s_0.Y;
        *(double *)(local_518.AllocatorInstance.Data + lVar32 * 0x50 + 0x10) = local_460._s_0.Z;
        *(double *)(local_518.AllocatorInstance.Data + lVar32 * 0x50 + 0x18) = local_448;
        *(int *)(local_518.AllocatorInstance.Data + lVar32 * 0x50 + 0x20) = local_440;
        *(uint *)(local_518.AllocatorInstance.Data + lVar32 * 0x50 + 0x24) = local_43c;
        *(undefined8 *)(local_518.AllocatorInstance.Data + lVar32 * 0x50 + 0x28) = local_438;
        *(undefined8 *)(local_518.AllocatorInstance.Data + lVar32 * 0x50 + 0x28 + 8) = uStack_430;
        *(undefined8 *)(local_518.AllocatorInstance.Data + lVar32 * 0x50 + 0x38) = local_428;
        *(undefined8 *)(local_518.AllocatorInstance.Data + lVar32 * 0x50 + 0x40) = 0;
        *(undefined8 *)(local_518.AllocatorInstance.Data + lVar32 * 0x50 + 0x40) = local_420;
        *(undefined4 *)(local_518.AllocatorInstance.Data + lVar32 * 0x50 + 0x48) =
             (undefined4)local_418;
        *(undefined4 *)(local_518.AllocatorInstance.Data + lVar32 * 0x50 + 0x4c) = local_418._4_4_;
        local_418 = 0;
        local_420 = 0;
        dVar20 = dVar20 + dVar62;
      }
      local_508 = local_508 + 1;
      dVar62 = dVar20;
    } while ((int)local_508 < (int)local_504._4_4_);
  }
  uVar39 = local_518.ArrayNum;
  lVar32 = (longlong)local_518.ArrayNum;
  local_4e8 = local_518.ArrayNum;
  bVar28 = AnimationCore::SolveFabrik
                     (&local_518,(TVector<double> *)&local_3c0._s_0,dVar20,
                      (double)local_4b8->Precision,local_4b8->MaxIterations);
  uVar37 = 0;
  if (bVar28) {
    uVar35 = 0;
    local_504._4_4_ = 0;
    pTVar36 = pTVar41;
    pTVar40 = pTVar41;
    local_4c0 = lVar32;
    if (0 < (int)uVar39) {
      do {
        uVar39 = uVar35;
        if ((int)(uint)pTVar36 < local_518.ArrayNum) {
          uVar39 = ~(uint)pTVar36 >> 0x1f;
        }
        if ((uVar39 == 0) &&
           (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar28)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        FVar27.Data = local_518.AllocatorInstance.Data;
        uVar39 = *(uint *)((undefined1 *)((longlong)&pTVar40[2].AllocatorInstance.Data + 4) +
                          (longlong)local_518.AllocatorInstance.Data);
        uVar38 = uVar35;
        if ((int)uVar39 < *piVar1) {
          uVar38 = ~uVar39 >> 0x1f;
        }
        if ((uVar38 == 0) &&
           (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar28)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar6 = (param_2->AllocatorInstance).Data;
        uVar23 = *(undefined8 *)(FVar27.Data + (longlong)&pTVar40->AllocatorInstance + 8);
        uVar2 = *(undefined8 *)(FVar27.Data + (longlong)&pTVar40[1].AllocatorInstance);
        pFVar45 = pFVar6 + (longlong)(int)uVar39 * 0x70 + 0x30;
        *(undefined8 *)pFVar45 =
             *(undefined8 *)(FVar27.Data + (longlong)&pTVar40->AllocatorInstance);
        *(undefined8 *)(pFVar45 + 8) = uVar23;
        pFVar6 = pFVar6 + (longlong)(int)uVar39 * 0x70 + 0x40;
        *(undefined8 *)pFVar6 = uVar2;
        *(undefined8 *)(pFVar6 + 8) = 0;
        local_4e0 = (TTransform<double> *)
                    (longlong)*(int *)((longlong)&pTVar40[4].ArrayNum + FVar27.Data);
        pTVar36 = pTVar41;
        pTVar42 = pTVar41;
        if (0 < (longlong)local_4e0) {
          do {
            uVar38 = (uint)pTVar36;
            uVar39 = uVar35;
            if ((int)uVar38 < *(int *)((longlong)&pTVar40[4].ArrayNum + FVar27.Data)) {
              uVar39 = ~uVar38 >> 0x1f;
            }
            if ((uVar39 == 0) &&
               (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar28)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            uVar39 = *(uint *)(*(longlong *)(FVar27.Data + (longlong)&pTVar40[4].AllocatorInstance)
                              + (longlong)pTVar42 * 4);
            uVar31 = uVar37;
            if ((int)uVar39 < *piVar1) {
              uVar31 = ~uVar39 >> 0x1f;
            }
            if ((uVar31 == 0) &&
               (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar28)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            uVar23 = *(undefined8 *)(FVar27.Data + (longlong)&pTVar40->AllocatorInstance + 8);
            pTVar36 = (TArray<FBoneTransform,TSizedDefaultAllocator<32>_> *)(ulonglong)(uVar38 + 1);
            pTVar42 = (TArray<FBoneTransform,TSizedDefaultAllocator<32>_> *)
                      ((longlong)&(pTVar42->AllocatorInstance).Data + 1);
            uVar2 = *(undefined8 *)(FVar27.Data + (longlong)&pTVar40[1].AllocatorInstance);
            pFVar6 = (local_4c8->AllocatorInstance).Data;
            pFVar45 = pFVar6 + (longlong)(int)uVar39 * 0x70 + 0x30;
            *(undefined8 *)pFVar45 =
                 *(undefined8 *)(FVar27.Data + (longlong)&pTVar40->AllocatorInstance);
            *(undefined8 *)(pFVar45 + 8) = uVar23;
            pFVar6 = pFVar6 + (longlong)(int)uVar39 * 0x70 + 0x40;
            *(undefined8 *)pFVar6 = uVar2;
            *(undefined8 *)(pFVar6 + 8) = 0;
            param_2 = local_4c8;
          } while ((longlong)pTVar42 < (longlong)local_4e0);
        }
        local_504._4_4_ = local_504._4_4_ + 1;
        local_4c0 = local_4c0 + -1;
        pTVar36 = (TArray<FBoneTransform,TSizedDefaultAllocator<32>_> *)
                  (ulonglong)(uint)local_504._4_4_;
        pTVar40 = pTVar40 + 5;
      } while (local_4c0 != 0);
      local_4c0 = 0;
      uVar39 = local_4e8;
    }
    dVar62 = __real_bff0000000000000;
    dVar20 = __real_3ff0000000000000;
    local_504._4_4_ = uVar39 - 1;
    pTVar36 = pTVar41;
    pTVar40 = pTVar41;
    if (0 < (int)local_504._4_4_) {
      do {
        uVar38 = (uint)pTVar36;
        uVar39 = uVar37;
        if ((int)uVar38 < local_518.ArrayNum) {
          uVar39 = ~uVar38 >> 0x1f;
        }
        if (uVar39 == 0) {
          bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar28) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        local_4e8 = uVar38 + 1;
        pFVar45 = local_518.AllocatorInstance.Data + (longlong)pTVar40;
        uVar39 = uVar35;
        if ((int)local_4e8 < local_518.ArrayNum) {
          uVar39 = ~local_4e8 >> 0x1f;
        }
        if ((uVar39 == 0) &&
           (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar28)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        FVar27.Data = local_518.AllocatorInstance.Data;
        pTVar40 = pTVar40 + 5;
        local_4c8 = pTVar40;
        pTVar33 = FCSPose<FCompactPose>::GetComponentSpaceTransform
                            (local_4d8,
                             *(FCompactPoseBoneIndex *)
                              (local_518.AllocatorInstance.Data + 0x20 + (longlong)pTVar40));
        dVar76 = (pTVar33->Translation).XY.m128d_f64[0];
        dVar18 = (pTVar33->Translation).XY.m128d_f64[1];
        dVar25 = (pTVar33->Translation).ZW.m128d_f64[0];
        local_378 = dVar76;
        dStack_370 = dVar18;
        pTVar33 = FCSPose<FCompactPose>::GetComponentSpaceTransform
                            (local_4d8,*(FCompactPoseBoneIndex *)(pFVar45 + 0x20));
        dVar21 = *(double *)(FVar27.Data + (longlong)pTVar40) - *(double *)pFVar45;
        local_360 = (pTVar33->Translation).XY.m128d_f64[0];
        dStack_358 = (pTVar33->Translation).XY.m128d_f64[1];
        local_350 = (pTVar33->Translation).ZW.m128d_f64[0];
        dVar76 = dVar76 - local_360;
        dVar17 = *(double *)(FVar27.Data + 8 + (longlong)pTVar40) - *(double *)(pFVar45 + 8);
        dVar19 = *(double *)(FVar27.Data + 0x10 + (longlong)pTVar40) - *(double *)(pFVar45 + 0x10);
        dVar18 = dVar18 - dStack_358;
        dVar77 = dVar25 - local_350;
        local_3d8 = dVar20 / SQRT(dVar18 * dVar18 + dVar76 * dVar76 + dVar77 * dVar77);
        dVar18 = dVar18 * local_3d8;
        dVar77 = dVar77 * local_3d8;
        dVar76 = dVar76 * local_3d8;
        local_3d0 = dVar20 / SQRT(dVar17 * dVar17 + dVar21 * dVar21 + dVar19 * dVar19);
        dVar19 = dVar19 * local_3d0;
        dVar17 = dVar17 * local_3d0;
        dVar21 = dVar21 * local_3d0;
        dVar14 = dVar19 * dVar18 - dVar17 * dVar77;
        dVar15 = dVar21 * dVar77 - dVar76 * dVar19;
        dVar16 = dVar76 * dVar17 - dVar21 * dVar18;
        dVar73 = dVar15 * dVar15 + dVar14 * dVar14 + dVar16 * dVar16;
        uVar2 = dVar14;
        uVar23 = dVar15;
        uVar61 = dVar16;
        if ((dVar73 != __real_3ff0000000000000) &&
           (uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
           uVar23 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
           uVar61 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
           __real_3e45798ee0000000 <= dVar73)) {
          local_3c8 = dVar20 / SQRT(dVar73);
          uVar2 = dVar14 * local_3c8;
          uVar23 = dVar15 * local_3c8;
          uVar61 = dVar16 * local_3c8;
        }
        dVar77 = dVar76 * dVar21 + dVar17 * dVar18 + dVar77 * dVar19;
        dVar73 = dVar62;
        if ((dVar62 <= dVar77) && (dVar73 = dVar77, __real_3ff0000000000000 <= dVar77)) {
          dVar73 = __real_3ff0000000000000;
        }
        local_368 = dVar25;
        acos(dVar73);
        __libm_sse2_sincos_();
        uVar39 = *(uint *)(pFVar45 + 0x24);
        dVar73 = (double)uVar2 * extraout_XMM0_Qa;
        dVar77 = (double)uVar23 * extraout_XMM0_Qa;
        uVar38 = uVar35;
        if ((int)uVar39 < *piVar1) {
          uVar38 = ~uVar39 >> 0x1f;
        }
        dVar14 = (double)uVar61 * extraout_XMM0_Qa;
        if ((uVar38 == 0) &&
           (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar28)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar6 = (param_2->AllocatorInstance).Data;
        lVar32 = (longlong)(int)uVar39 * 0x70;
        uVar69 = (undefined4)((ulonglong)dVar14 >> 0x20);
        dVar21 = *(double *)(pFVar6 + lVar32 + 0x10);
        dVar76 = *(double *)(pFVar6 + lVar32 + 0x10 + 8);
        dVar25 = *(double *)(pFVar6 + lVar32 + 0x20);
        dVar26 = *(double *)(pFVar6 + lVar32 + 0x20 + 8);
        auVar51._8_4_ = SUB84(dVar14,0);
        auVar51._0_8_ = dVar14;
        auVar51._12_4_ = uVar69;
        dVar18 = dVar73 * dVar76 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                 dVar25 * extraout_XMM0_Qb +
                 dVar21 * dVar77 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                 dVar14 * dVar26 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
        dVar19 = dVar73 * dVar21 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                 dVar26 * extraout_XMM0_Qb +
                 dVar76 * dVar77 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                 auVar51._8_8_ * dVar25 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
        uVar72 = (undefined4)((ulonglong)dVar19 >> 0x20);
        dVar15 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1];
        auVar63._8_4_ = SUB84(dVar73,0);
        auVar63._0_8_ = dVar73;
        auVar63._12_4_ = (int)((ulonglong)dVar73 >> 0x20);
        auVar52._8_4_ = SUB84(dVar14,0);
        auVar52._0_8_ = dVar14;
        auVar52._12_4_ = uVar69;
        dVar16 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
        dVar17 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1];
        *(double *)(pFVar6 + lVar32 + 0x10) =
             dVar73 * dVar26 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
             dVar21 * extraout_XMM0_Qb +
             dVar25 * dVar77 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
             dVar14 * dVar76 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
        *(double *)(pFVar6 + lVar32 + 0x10 + 8) =
             auVar63._8_8_ * dVar25 * dVar17 + dVar76 * extraout_XMM0_Qb + dVar26 * dVar77 * dVar15
             + auVar52._8_8_ * dVar21 * dVar16;
        auVar55._8_4_ = SUB84(dVar19,0);
        auVar55._0_8_ = dVar18;
        auVar55._12_4_ = uVar72;
        *(undefined1 (*) [16])(pFVar6 + lVar32 + 0x20) = auVar55;
        dVar15 = *(double *)(pFVar6 + lVar32 + 0x10);
        dVar16 = *(double *)(pFVar6 + lVar32 + 0x10 + 8);
        auVar64._8_4_ = SUB84(dVar19,0);
        auVar64._0_8_ = dVar18;
        auVar64._12_4_ = uVar72;
        auVar65._0_8_ = dVar18 * dVar18 + dVar15 * dVar15;
        auVar65._8_8_ = auVar64._8_8_ * dVar19 + dVar16 * dVar16;
        auVar53._8_4_ = SUB84(auVar65._8_8_,0);
        auVar53._0_8_ = auVar65._0_8_;
        auVar53._12_4_ = (int)((ulonglong)auVar65._8_8_ >> 0x20);
        auVar54._0_8_ = auVar53._8_8_ + auVar65._0_8_;
        auVar54._8_8_ = auVar65._0_8_ + auVar65._8_8_;
        auVar66 = sqrtpd(auVar65,auVar54);
        uVar46 = -(ulonglong)
                  (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <=
                  auVar54._0_8_);
        uVar48 = -(ulonglong)
                  (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <=
                  auVar54._8_8_);
        uVar47 = -(ulonglong)
                  (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <=
                  auVar54._0_8_);
        uVar49 = -(ulonglong)
                  (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <=
                  auVar54._8_8_);
        auVar55 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar66);
        auVar66 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar66);
        auVar56._0_8_ = uVar47 & (ulonglong)(auVar55._0_8_ * dVar15);
        uVar43 = uVar49 & (ulonglong)(auVar55._8_8_ * dVar16);
        auVar56._8_4_ = (undefined4)uVar43;
        auVar56._12_4_ = (undefined4)(uVar43 >> 0x20);
        auVar74._0_8_ = uVar46 & (ulonglong)(auVar66._0_8_ * dVar18);
        uVar43 = uVar48 & (ulonglong)(auVar66._8_8_ * dVar19);
        auVar74._8_4_ = (undefined4)uVar43;
        auVar74._12_4_ = (undefined4)(uVar43 >> 0x20);
        auVar11._4_4_ =
             ~(uint)(uVar47 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
        auVar11._0_4_ = ~(uint)uVar47 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
        auVar11._8_4_ = ~(uint)uVar49 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
        auVar11._12_4_ =
             ~(uint)(uVar49 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
        uVar39 = GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
        uVar38 = GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
        uVar31 = GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
        uVar8 = GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
        *(undefined1 (*) [16])(pFVar6 + lVar32 + 0x10) = auVar56 | auVar11;
        auVar50._4_4_ = ~(uint)(uVar46 >> 0x20) & uVar38;
        auVar50._0_4_ = ~(uint)uVar46 & uVar39;
        auVar50._8_4_ = ~(uint)uVar48 & uVar31;
        auVar50._12_4_ = ~(uint)(uVar48 >> 0x20) & uVar8;
        *(undefined1 (*) [16])(pFVar6 + lVar32 + 0x20) = auVar74 | auVar50;
        local_4e0 = (TTransform<double> *)(longlong)*(int *)(pFVar45 + 0x48);
        pTVar36 = pTVar41;
        pTVar40 = pTVar41;
        if (0 < (longlong)local_4e0) {
          do {
            uVar38 = (uint)pTVar36;
            uVar39 = uVar35;
            if ((int)uVar38 < *(int *)(pFVar45 + 0x48)) {
              uVar39 = ~uVar38 >> 0x1f;
            }
            if ((uVar39 == 0) &&
               (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar28)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            uVar39 = *(uint *)((longlong)*(double *)(pFVar45 + 0x40) + (longlong)pTVar40 * 4);
            uVar31 = uVar35;
            if ((int)uVar39 < *piVar1) {
              uVar31 = ~uVar39 >> 0x1f;
            }
            if ((uVar31 == 0) &&
               (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar28)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pFVar6 = (param_2->AllocatorInstance).Data;
            lVar32 = (longlong)(int)uVar39 * 0x70;
            pTVar40 = (TArray<FBoneTransform,TSizedDefaultAllocator<32>_> *)
                      ((longlong)&(pTVar40->AllocatorInstance).Data + 1);
            dVar21 = *(double *)(pFVar6 + lVar32 + 0x10);
            dVar76 = *(double *)(pFVar6 + lVar32 + 0x10 + 8);
            auVar55 = *(undefined1 (*) [16])(pFVar6 + lVar32 + 0x20);
            dVar19 = auVar55._0_8_;
            dVar17 = auVar55._8_8_;
            auVar57._8_4_ = auVar55._0_4_;
            auVar57._0_8_ = dVar17;
            auVar57._12_4_ = auVar55._4_4_;
            dVar15 = dVar76 * dVar73 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                     dVar19 * extraout_XMM0_Qb +
                     dVar21 * dVar77 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                     dVar17 * dVar14 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
            dVar16 = dVar21 * dVar73 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                     dVar17 * extraout_XMM0_Qb +
                     dVar76 * dVar77 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                     auVar57._8_8_ * dVar14 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
            uVar72 = (undefined4)((ulonglong)dVar16 >> 0x20);
            auVar67._8_4_ = SUB84(dVar16,0);
            auVar67._0_8_ = dVar15;
            auVar67._12_4_ = uVar72;
            dVar18 = dVar19 * dVar73 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                     dVar76 * extraout_XMM0_Qb +
                     dVar17 * dVar77 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                     dVar21 * dVar14 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
            auVar12._8_4_ = SUB84(dVar18,0);
            auVar12._0_8_ =
                 dVar17 * dVar73 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                 dVar21 * extraout_XMM0_Qb +
                 dVar19 * dVar77 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                 dVar76 * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
            auVar12._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
            *(undefined1 (*) [16])(pFVar6 + lVar32 + 0x10) = auVar12;
            auVar9._8_4_ = SUB84(dVar16,0);
            auVar9._0_8_ = dVar15;
            auVar9._12_4_ = uVar72;
            *(undefined1 (*) [16])(pFVar6 + lVar32 + 0x20) = auVar9;
            dVar17 = *(double *)(pFVar6 + lVar32 + 0x10);
            dVar18 = *(double *)(pFVar6 + lVar32 + 0x10 + 8);
            auVar68._0_8_ = dVar15 * dVar15 + dVar17 * dVar17;
            auVar68._8_8_ = auVar67._8_8_ * dVar16 + dVar18 * dVar18;
            auVar58._8_4_ = SUB84(auVar68._8_8_,0);
            auVar58._0_8_ = auVar68._0_8_;
            auVar58._12_4_ = (int)((ulonglong)auVar68._8_8_ >> 0x20);
            auVar59._0_8_ = auVar58._8_8_ + auVar68._0_8_;
            auVar59._8_8_ = auVar68._0_8_ + auVar68._8_8_;
            auVar66 = sqrtpd(auVar68,auVar59);
            uVar46 = -(ulonglong)
                      (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <=
                      auVar59._0_8_);
            uVar48 = -(ulonglong)
                      (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <=
                      auVar59._8_8_);
            uVar47 = -(ulonglong)
                      (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <=
                      auVar59._0_8_);
            uVar49 = -(ulonglong)
                      (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <=
                      auVar59._8_8_);
            auVar55 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar66)
            ;
            auVar66 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar66)
            ;
            auVar60._0_8_ = uVar47 & (ulonglong)(auVar55._0_8_ * dVar17);
            uVar43 = uVar49 & (ulonglong)(auVar55._8_8_ * dVar18);
            auVar60._8_4_ = (undefined4)uVar43;
            auVar60._12_4_ = (undefined4)(uVar43 >> 0x20);
            auVar75._0_8_ = uVar46 & (ulonglong)(auVar66._0_8_ * dVar15);
            uVar43 = uVar48 & (ulonglong)(auVar66._8_8_ * dVar16);
            auVar75._8_4_ = (undefined4)uVar43;
            auVar75._12_4_ = (undefined4)(uVar43 >> 0x20);
            auVar13._4_4_ =
                 ~(uint)(uVar47 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
            auVar13._0_4_ = ~(uint)uVar47 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
            auVar13._8_4_ = ~(uint)uVar49 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
            auVar13._12_4_ =
                 ~(uint)(uVar49 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
            auVar10._4_4_ =
                 ~(uint)(uVar46 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
            auVar10._0_4_ = ~(uint)uVar46 & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
            auVar10._8_4_ = ~(uint)uVar48 & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
            auVar10._12_4_ =
                 ~(uint)(uVar48 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
            *(undefined1 (*) [16])(pFVar6 + lVar32 + 0x10) = auVar60 | auVar13;
            *(undefined1 (*) [16])(pFVar6 + lVar32 + 0x20) = auVar75 | auVar10;
            pTVar36 = (TArray<FBoneTransform,TSizedDefaultAllocator<32>_> *)(ulonglong)(uVar38 + 1);
          } while ((longlong)pTVar40 < (longlong)local_4e0);
        }
        pTVar36 = (TArray<FBoneTransform,TSizedDefaultAllocator<32>_> *)(ulonglong)local_4e8;
        pTVar40 = local_4c8;
      } while ((int)local_4e8 < (int)local_504._4_4_);
    }
  }
  iVar29 = *piVar1;
  uVar3 = (local_4b8->EffectorRotationSource).Value;
  uVar39 = iVar29 - 1;
  if (uVar3 == '\x01') {
    uVar35 = uVar37;
    if ((int)uVar39 < local_4f8.ArrayNum) {
      uVar35 = ~uVar39 >> 0x1f;
    }
    if ((uVar35 == 0) &&
       (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar28)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    local_4e0 = FCSPose<FCompactPose>::GetLocalSpaceTransform
                          (local_4d8,&local_148,
                           *(FCompactPoseBoneIndex *)
                            (local_4f8.AllocatorInstance.Data + (longlong)(int)uVar39 * 4));
    uVar35 = iVar29 - 2;
    if ((int)uVar35 < *piVar1) {
      uVar37 = ~uVar35 >> 0x1f;
    }
    if ((uVar37 == 0) &&
       (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar28)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    local_288.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_288.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
    local_288.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_288.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
    local_288.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_288.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
    local_288.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_288.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
    local_288.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_288.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
    local_288.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_288.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
    UE::Math::TTransform<double>::Multiply
              (&local_288,local_4e0,
               (TTransform<double> *)
               ((param_2->AllocatorInstance).Data + (longlong)(int)uVar35 * 0x70 + 0x10));
    dVar76 = local_288.Scale3D.ZW.m128d_f64[1];
    dVar21 = local_288.Scale3D.ZW.m128d_f64[0];
    dVar19 = local_288.Scale3D.XY.m128d_f64[1];
    dVar18 = local_288.Scale3D.XY.m128d_f64[0];
    dVar17 = local_288.Translation.ZW.m128d_f64[1];
    dVar16 = local_288.Translation.ZW.m128d_f64[0];
    dVar15 = local_288.Translation.XY.m128d_f64[1];
    dVar14 = local_288.Translation.XY.m128d_f64[0];
    dVar77 = local_288.Rotation.ZW.m128d_f64[1];
    dVar73 = local_288.Rotation.ZW.m128d_f64[0];
    dVar62 = local_288.Rotation.XY.m128d_f64[1];
    dVar20 = local_288.Rotation.XY.m128d_f64[0];
    uVar37 = 0;
    if ((int)uVar39 < *piVar1) {
      uVar37 = ~uVar39 >> 0x1f;
    }
    if ((uVar37 == 0) &&
       (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar28)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar45 = (param_2->AllocatorInstance).Data;
    lVar32 = (longlong)(int)uVar39 * 0x70;
    *(double *)(pFVar45 + lVar32 + 0x10) = dVar20;
    *(double *)(pFVar45 + lVar32 + 0x10 + 8) = dVar62;
    *(double *)(pFVar45 + lVar32 + 0x20) = dVar73;
    *(double *)(pFVar45 + lVar32 + 0x20 + 8) = dVar77;
    *(double *)(pFVar45 + lVar32 + 0x30) = dVar14;
    *(double *)(pFVar45 + lVar32 + 0x30 + 8) = dVar15;
    *(double *)(pFVar45 + lVar32 + 0x40) = dVar16;
    *(double *)(pFVar45 + lVar32 + 0x40 + 8) = dVar17;
    *(double *)(pFVar45 + lVar32 + 0x50) = dVar18;
    *(double *)(pFVar45 + lVar32 + 0x50 + 8) = dVar19;
    *(double *)(pFVar45 + lVar32 + 0x60) = dVar21;
    *(double *)(pFVar45 + lVar32 + 0x60 + 8) = dVar76;
  }
  else if (uVar3 == '\x02') {
    if ((int)uVar39 < iVar29) {
      uVar37 = ~uVar39 >> 0x1f;
    }
    if ((uVar37 == 0) &&
       (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar28)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar6 = (param_2->AllocatorInstance).Data;
    pFVar45 = pFVar6 + (longlong)(int)uVar39 * 0x70 + 0x10;
    *(double *)pFVar45 = local_3f8;
    *(double *)(pFVar45 + 8) = dStack_3f0;
    pFVar6 = pFVar6 + (longlong)(int)uVar39 * 0x70 + 0x20;
    *(double *)pFVar6 = local_3e8;
    *(double *)(pFVar6 + 8) = dStack_3e0;
  }
  DestructItems<FFABRIKChainLink,int>
            ((FFABRIKChainLink *)local_518.AllocatorInstance.Data,local_518.ArrayNum);
  if ((TVector<double>_u_0 *)local_518.AllocatorInstance.Data != (TVector<double>_u_0 *)0x0) {
    FMemory::Free(local_518.AllocatorInstance.Data);
  }
  if ((FCompactPoseBoneIndex *)local_4f8.AllocatorInstance.Data != (FCompactPoseBoneIndex *)0x0) {
    FMemory::Free(local_4f8.AllocatorInstance.Data);
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// GatherDebugData @ 146443870

void __thiscall FAnimNode_Fabrik::GatherDebugData(FAnimNode_Fabrik *this,FNodeDebugData *param_1)

{
  ForAnyElementType _Src;
  UPackage *pUVar1;
  FName local_res8;
  FString local_48;
  FString local_38 [2];
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_Fabrik::GatherDebugData");
  if (Z_Registration_Info_UScriptStruct_FAnimNode_Fabrik.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    Z_Registration_Info_UScriptStruct_FAnimNode_Fabrik.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_Fabrik,(UObject *)pUVar1,
                         L"AnimNode_Fabrik");
  }
  local_res8 = (FName)(Z_Registration_Info_UScriptStruct_FAnimNode_Fabrik.OuterSingleton)->_padding_
  ;
  ::FName::ToString(&local_res8,&local_48);
  ::FString::PrintfImpl(local_38,L"%s<W:%.1f%%> %s");
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  ::FString::Empty(&param_1->NodeDescription);
  _Src.Data = local_38[0].Data.AllocatorInstance.Data;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_38[0].Data.ArrayNum == 0) {
    local_48.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_38[0].Data.ArrayNum,0,(ForAnyElementType *)&local_48,
               local_38[0].Data.ArrayNum,&local_48.Data.ArrayMax);
    memcpy(local_48.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_38[0].Data.ArrayNum * 2);
  }
  FNodeDebugData::AddDebugItem(param_1,&local_48,false);
  FPoseLinkBase::GatherDebugData((FPoseLinkBase *)&this->_padding_,param_1);
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// GetCurrentLocation @ 146449610

TVector<double> * __thiscall
FAnimNode_Fabrik::GetCurrentLocation
          (FAnimNode_Fabrik *this,TVector<double> *__return_storage_ptr__,
          FCSPose<FCompactPose> *param_1,FCompactPoseBoneIndex *param_2)

{
  double dVar1;
  double dVar2;
  TTransform<double> *pTVar3;
  
  pTVar3 = FCSPose<FCompactPose>::GetComponentSpaceTransform(param_1,*param_2);
  dVar2 = (pTVar3->Translation).XY.m128d_f64[1];
  dVar1 = (pTVar3->Translation).ZW.m128d_f64[0];
  (__return_storage_ptr__->field0_0x0)._s_0.X = (pTVar3->Translation).XY.m128d_f64[0];
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// GetTargetTransform @ 14644fbf0

TTransform<double> * __cdecl
FAnimNode_Fabrik::GetTargetTransform
          (TTransform<double> *__return_storage_ptr__,TTransform<double> *param_1,
          FCSPose<FCompactPose> *param_2,FBoneSocketTarget *param_3,EBoneControlSpace param_4,
          TTransform<double> *param_5)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  TTransform<double> *pTVar10;
  longlong lVar11;
  TTransform<double> local_68;
  
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar3._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar3._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).XY.m128d_f64 = auVar3;
  auVar4._8_4_ = SUB84((double)fVar2,0);
  auVar4._0_8_ = (double)fVar1;
  auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).ZW.m128d_f64 = auVar4;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Translation).XY.m128d_f64 = auVar5;
  auVar6._8_4_ = SUB84((double)fVar2,0);
  auVar6._0_8_ = (double)fVar1;
  auVar6._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Translation).ZW.m128d_f64 = auVar6;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).XY.m128d_f64 = auVar7;
  auVar8._8_4_ = SUB84((double)fVar2,0);
  auVar8._0_8_ = (double)fVar1;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).ZW.m128d_f64 = auVar8;
  if (param_4 == BCS_BoneSpace) {
    pTVar10 = FBoneSocketTarget::GetTargetTransform<FCompactPose>
                        (param_3,&local_68,param_5,param_2,param_1);
    dVar9 = (pTVar10->Rotation).XY.m128d_f64[1];
    (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = (pTVar10->Rotation).XY.m128d_f64[0];
    (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar9;
    dVar9 = (pTVar10->Rotation).ZW.m128d_f64[1];
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = (pTVar10->Rotation).ZW.m128d_f64[0];
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar9;
    dVar9 = (pTVar10->Translation).XY.m128d_f64[1];
    (__return_storage_ptr__->Translation).XY.m128d_f64[0] = (pTVar10->Translation).XY.m128d_f64[0];
    (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar9;
    dVar9 = (pTVar10->Translation).ZW.m128d_f64[1];
    (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = (pTVar10->Translation).ZW.m128d_f64[0];
    (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar9;
    dVar9 = (pTVar10->Scale3D).XY.m128d_f64[1];
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = (pTVar10->Scale3D).XY.m128d_f64[0];
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar9;
    dVar9 = (pTVar10->Scale3D).ZW.m128d_f64[1];
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = (pTVar10->Scale3D).ZW.m128d_f64[0];
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar9;
  }
  else {
    dVar9 = (param_5->Rotation).XY.m128d_f64[1];
    (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = (param_5->Rotation).XY.m128d_f64[0];
    (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar9;
    dVar9 = (param_5->Rotation).ZW.m128d_f64[1];
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = (param_5->Rotation).ZW.m128d_f64[0];
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar9;
    dVar9 = (param_5->Translation).XY.m128d_f64[1];
    (__return_storage_ptr__->Translation).XY.m128d_f64[0] = (param_5->Translation).XY.m128d_f64[0];
    (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar9;
    dVar9 = (param_5->Translation).ZW.m128d_f64[1];
    (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = (param_5->Translation).ZW.m128d_f64[0];
    (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar9;
    dVar9 = (param_5->Scale3D).XY.m128d_f64[1];
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = (param_5->Scale3D).XY.m128d_f64[0];
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar9;
    dVar9 = (param_5->Scale3D).ZW.m128d_f64[1];
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = (param_5->Scale3D).ZW.m128d_f64[0];
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar9;
    lVar11 = 0x8c;
    if (param_3->bUseSocket == false) {
      lVar11 = 0x10;
    }
    FAnimationRuntime::ConvertBoneSpaceTransformToCS
              (param_1,param_2,__return_storage_ptr__,
               *(FCompactPoseBoneIndex *)
                ((longlong)(&(param_3->SocketReference).CachedSocketLocalTransform.Rotation + -1) +
                lVar11),param_4);
  }
  return __return_storage_ptr__;
}

// InitializeBoneReferences @ 1464568c0

void __thiscall
FAnimNode_Fabrik::InitializeBoneReferences(FAnimNode_Fabrik *this,FBoneContainer *param_1)

{
  undefined1 *puVar1;
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_Fabrik::InitializeBoneReferences");
  FBoneReference::Initialize(&this->TipBone,param_1);
  FBoneReference::Initialize(&this->RootBone,param_1);
  if ((this->EffectorTarget).bUseSocket == false) {
    FBoneReference::Initialize(&(this->EffectorTarget).BoneReference,param_1);
    (this->EffectorTarget).SocketReference.CachedSocketMeshBoneIndex =
         (FMeshPoseBoneIndex)0xffffffff;
    (this->EffectorTarget).SocketReference.CachedSocketCompactBoneIndex =
         (FCompactPoseBoneIndex)0xffffffff;
  }
  else {
    FSocketReference::InitialzeCompactBoneIndex(&(this->EffectorTarget).SocketReference,param_1);
    (this->EffectorTarget).BoneReference.BoneIndex = -1;
    (this->EffectorTarget).BoneReference.CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// Initialize_AnyThread @ 1464597e0

void __thiscall
FAnimNode_Fabrik::Initialize_AnyThread(FAnimNode_Fabrik *this,FAnimationInitializeContext *param_1)

{
  FStatsHierarchical::BeginMeasurement("FAnimNode_Fabrik::Initialize_AnyThread");
  FStatsHierarchical::BeginMeasurement("FAnimNode_SkeletalControlBase::Initialize_AnyThread");
  FAnimNode_Base::Initialize_AnyThread((FAnimNode_Base *)this,param_1);
  FPoseLinkBase::Initialize((FPoseLinkBase *)&this->_padding_,param_1);
  *(undefined1 *)((longlong)&this->_padding_ + 1) = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 3) = 0;
  FStatsHierarchical::EndMeasurement();
  if ((this->EffectorTarget).bUseSocket != false) {
    FSocketReference::InitializeSocketInfo
              (&(this->EffectorTarget).SocketReference,*(FAnimInstanceProxy **)param_1);
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// IsValidToEvaluate @ 14645b940

bool __thiscall
FAnimNode_Fabrik::IsValidToEvaluate
          (FAnimNode_Fabrik *this,USkeleton *param_1,FBoneContainer *param_2)

{
  bool bVar1;
  
  bVar1 = FBoneReference::IsValidToEvaluate(&this->TipBone,param_2);
  if (bVar1) {
    bVar1 = FBoneReference::IsValidToEvaluate(&this->RootBone,param_2);
    if ((bVar1) && (0.0 < this->Precision)) {
      bVar1 = FBoneContainer::BoneIsChildOf
                        (param_2,(this->TipBone).BoneIndex,(this->RootBone).BoneIndex);
      if (bVar1) {
        return true;
      }
    }
  }
  return false;
}

