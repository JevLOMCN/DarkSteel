// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 8

// StaticStruct @ 1463dc090

UScriptStruct * __cdecl FAnimNode_CCDIK::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_CCDIK.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    Z_Registration_Info_UScriptStruct_FAnimNode_CCDIK.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_CCDIK,(UObject *)pUVar1,
                         L"AnimNode_CCDIK");
  }
  return Z_Registration_Info_UScriptStruct_FAnimNode_CCDIK.OuterSingleton;
}

// FAnimNode_CCDIK @ 1464036c0

FAnimNode_CCDIK * __thiscall FAnimNode_CCDIK::FAnimNode_CCDIK(FAnimNode_CCDIK *this)

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
  undefined8 uVar10;
  
  FAnimNode_SkeletalControlBase::FAnimNode_SkeletalControlBase
            ((FAnimNode_SkeletalControlBase *)this);
  this->_padding_ = (longlong)&___7FAnimNode_CCDIK__6B_;
  uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->EffectorLocation).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->EffectorLocation).field0_0x0._s_0.Y = (double)uVar10;
  (this->EffectorLocation).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->EffectorLocationSpace).Value = '\x01';
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
  this->bStartFromTail = true;
  this->bEnableRotationLimit = false;
  (this->RotationLimitPerJoints).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RotationLimitPerJoints).ArrayNum = 0;
  (this->RotationLimitPerJoints).ArrayMax = 0;
  return this;
}

// EvaluateSkeletalControl_AnyThread @ 14642a970

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FAnimNode_CCDIK::EvaluateSkeletalControl_AnyThread
          (FAnimNode_CCDIK *this,FComponentSpacePoseContext *param_1,
          TArray<FBoneTransform,TSizedDefaultAllocator<32>_> *param_2)

{
  FCSPose<FCompactPose> *this_00;
  __m128d *p_Var1;
  undefined8 *puVar2;
  FCompactPoseBoneIndex FVar3;
  undefined4 uVar4;
  FCompactPoseBoneIndex *pFVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  code *pcVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  ForAnyElementType FVar34;
  undefined4 uVar35;
  bool bVar36;
  int iVar37;
  TTransform<double> *pTVar38;
  longlong lVar39;
  EBoneControlSpace EVar40;
  FWeakObjectPtr FVar41;
  uint uVar42;
  FScriptContainerElement *pFVar43;
  longlong lVar44;
  uint uVar45;
  uint uVar46;
  ulonglong uVar47;
  FReferenceSkeleton *pFVar48;
  longlong lVar49;
  int iVar50;
  undefined1 auStackY_5d8 [32];
  undefined1 local_588 [4];
  uint local_584;
  TArray<FCCDIKChainLink,TSizedDefaultAllocator<32>_> local_580;
  ForAnyElementType local_570;
  ForElementType<unsigned_int> local_568;
  FAnimNode_CCDIK *local_560;
  FWeakObjectPtr local_558;
  FCompactPoseBoneIndex local_550;
  FCompactPoseBoneIndex local_54c;
  FWeakObjectPtr local_548;
  FReferenceSkeleton *local_540;
  ForAnyElementType local_538;
  double dStack_530;
  ForAnyElementType local_528;
  TVector<double>_u_0 local_520;
  ForAnyElementType local_508;
  double dStack_500;
  ForAnyElementType local_4f8;
  TTransform<double> local_4e8;
  TTransform<double> local_488;
  FCompactPoseBoneIndex local_428;
  double local_418;
  double dStack_410;
  double local_408;
  double dStack_400;
  double local_3f8;
  double dStack_3f0;
  double local_3e8;
  double dStack_3e0;
  double local_3d8;
  double dStack_3d0;
  double local_3c8;
  double dStack_3c0;
  undefined4 local_3b8;
  double local_3a8;
  double dStack_3a0;
  double local_398;
  double dStack_390;
  FScriptContainerElement *local_388;
  double dStack_380;
  FScriptContainerElement *local_378;
  double dStack_370;
  double local_368;
  double dStack_360;
  double local_358;
  double dStack_350;
  FCCDIKChainLink local_348;
  FCCDIKChainLink local_268;
  TTransform<double> local_188;
  TTransform<double> local_128;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStackY_5d8;
  local_560 = this;
  local_548 = (FWeakObjectPtr)param_2;
  FStatsHierarchical::BeginMeasurement("FAnimNode_CCDIK::EvaluateSkeletalControl_AnyThread");
  this_00 = &param_1->Pose;
  pTVar38 = (TTransform<double> *)(param_1->_padding_ + 0x20);
  local_488.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_488.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_488.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_488.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_488.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_488.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_488.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_488.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_488.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_488.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_488.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_488.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_488.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_488.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_488.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_488.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_488.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_488.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  EVar40 = (EBoneControlSpace)(this->EffectorLocationSpace).Value;
  if (EVar40 == BCS_BoneSpace) {
    pTVar38 = FBoneSocketTarget::GetTargetTransform<FCompactPose>
                        (&this->EffectorTarget,&local_4e8,&this->EffectorLocation,this_00,pTVar38);
    local_488.Rotation.XY.m128d_f64 = *&(pTVar38->Rotation).XY.m128d_f64;
    local_488.Rotation.ZW.m128d_f64 = *&(pTVar38->Rotation).ZW.m128d_f64;
    local_488.Translation.XY.m128d_f64 = *&(pTVar38->Translation).XY.m128d_f64;
    p_Var1 = &(pTVar38->Translation).ZW;
    local_488.Translation.ZW.m128d_f64 = *&p_Var1->m128d_f64;
    local_488.Scale3D.XY.m128d_f64 = *&(pTVar38->Scale3D).XY.m128d_f64;
    local_488.Scale3D.ZW.m128d_f64 = *&(pTVar38->Scale3D).ZW.m128d_f64;
    local_520._0_4_ = *(int *)(pTVar38->Translation).XY.m128d_f64;
    local_520._4_4_ = *(int *)((longlong)(pTVar38->Translation).XY.m128d_f64 + 4);
    local_520._8_4_ = *(int *)((pTVar38->Translation).XY.m128d_f64 + 1);
    local_520._12_4_ = *(int *)((longlong)(pTVar38->Translation).XY.m128d_f64 + 0xc);
    iVar37 = *(int *)p_Var1->m128d_f64;
    iVar50 = *(int *)((longlong)(pTVar38->Translation).ZW.m128d_f64 + 4);
  }
  else {
    lVar44 = 0x8c;
    local_488.Translation.XY.m128d_f64 = *(double (*) [2])&(this->EffectorLocation).field0_0x0;
    if ((this->EffectorTarget).bUseSocket == false) {
      lVar44 = 0x10;
    }
    local_488.Translation.ZW.m128d_f64[1] = 0.0;
    local_488.Translation.ZW.m128d_f64[0] = (this->EffectorLocation).field0_0x0._s_0.Z;
    FAnimationRuntime::ConvertBoneSpaceTransformToCS
              (pTVar38,this_00,&local_488,
               *(FCompactPoseBoneIndex *)
                ((longlong)
                 (&(this->EffectorTarget).SocketReference.CachedSocketLocalTransform.Rotation + -1)
                + lVar44),EVar40);
    local_520._0_4_ = local_488.Translation.XY.m128d_f64[0]._0_4_;
    local_520._4_4_ = local_488.Translation.XY.m128d_f64[0]._4_4_;
    local_520._8_4_ = local_488.Translation.XY.m128d_f64[1]._0_4_;
    local_520._12_4_ = local_488.Translation.XY.m128d_f64[1]._4_4_;
    iVar37 = local_488.Translation.ZW.m128d_f64[0]._0_4_;
    iVar50 = local_488.Translation.ZW.m128d_f64[0]._4_4_;
  }
  local_520._s_0.Z = (double)CONCAT44(iVar50,iVar37);
  local_570.Data = (FScriptContainerElement *)0x0;
  local_568._0_4_ = 0;
  local_568._4_4_ = 0;
  FBoneReference::GetCompactPoseIndex(&this->RootBone,(FBoneContainer *)&local_54c);
  FBoneReference::GetCompactPoseIndex(&this->TipBone,(FBoneContainer *)local_588);
  do {
    if (((local_570.Data <= (FCompactPoseBoneIndex *)local_588) &&
        ((FScriptContainerElement *)local_588 < local_570.Data + (longlong)(int)local_568._4_4_ * 4)
        ) && (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar36)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if (local_568._0_4_ == local_568._4_4_) {
      local_568._0_4_ =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x404,&local_570,(int *)&local_568.field_0x4);
    }
    lVar44 = (longlong)(int)local_568._0_4_;
    local_568._0_4_ = local_568._0_4_ + 1;
    memmove((FCompactPoseBoneIndex *)(local_570.Data + 4),local_570.Data,lVar44 << 2);
    *(undefined1 (*) [4])local_570.Data = local_588;
    FBoneContainer::GetParentBoneIndex
              (*(FBoneContainer **)&(param_1->Pose).Pose.field_0x10,&local_550);
    local_588 = (undefined1  [4])local_550;
  } while (local_550 != local_54c);
  if (((local_570.Data <= (FCompactPoseBoneIndex *)local_588) &&
      ((FScriptContainerElement *)local_588 < local_570.Data + (longlong)(int)local_568._4_4_ * 4))
     && (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar36)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if (local_568._0_4_ == local_568._4_4_) {
    local_568._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x404,&local_570,(int *)&local_568.field_0x4);
  }
  lVar44 = (longlong)(int)local_568._0_4_;
  local_568._0_4_ = local_568._0_4_ + 1;
  memmove((FCompactPoseBoneIndex *)(local_570.Data + 4),local_570.Data,lVar44 << 2);
  pFVar48 = (FReferenceSkeleton *)&param_2->ArrayNum;
  *(undefined1 (*) [4])local_570.Data = local_588;
  uVar35 = local_568._0_4_;
  uVar47 = (ulonglong)local_568 & 0xffffffff;
  local_540 = pFVar48;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x70,0x10,local_568._0_4_,&param_2->AllocatorInstance,(int *)pFVar48,&param_2->ArrayMax
            );
  local_580.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_580._8_8_ = 0;
  if ((int)uVar35 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar47);
  }
  if (0 < (int)uVar35) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xe0,0x10,uVar35,&local_580.AllocatorInstance,0,&local_580.ArrayMax);
  }
  if (((int)local_568._0_4_ < 1) &&
     (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar36)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  FVar34.Data = local_570.Data;
  FCSPose<FCompactPose>::GetLocalSpaceTransform
            (this_00,&local_188,*(FCompactPoseBoneIndex *)local_570.Data);
  pTVar38 = FCSPose<FCompactPose>::GetComponentSpaceTransform
                      (this_00,*(FCompactPoseBoneIndex *)FVar34.Data);
  FVar3 = *(FCompactPoseBoneIndex *)FVar34.Data;
  dVar11 = (pTVar38->Rotation).XY.m128d_f64[0];
  dVar10 = (pTVar38->Rotation).XY.m128d_f64[1];
  dVar12 = (pTVar38->Rotation).ZW.m128d_f64[0];
  dVar13 = (pTVar38->Rotation).ZW.m128d_f64[1];
  dVar14 = (pTVar38->Translation).XY.m128d_f64[0];
  dVar15 = (pTVar38->Translation).XY.m128d_f64[1];
  dVar16 = (pTVar38->Translation).ZW.m128d_f64[0];
  dVar17 = (pTVar38->Translation).ZW.m128d_f64[1];
  dVar18 = (pTVar38->Scale3D).XY.m128d_f64[0];
  dVar19 = (pTVar38->Scale3D).XY.m128d_f64[1];
  dVar20 = (pTVar38->Scale3D).ZW.m128d_f64[0];
  dVar21 = (pTVar38->Scale3D).ZW.m128d_f64[1];
  local_428 = FVar3;
  local_418 = dVar11;
  dStack_410 = dVar10;
  local_408 = dVar12;
  dStack_400 = dVar13;
  local_3f8 = dVar14;
  dStack_3f0 = dVar15;
  local_3e8 = dVar16;
  dStack_3e0 = dVar17;
  local_3d8 = dVar18;
  dStack_3d0 = dVar19;
  local_3c8 = dVar20;
  dStack_3c0 = dVar21;
  if ((*(int *)pFVar48 < 1) &&
     (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar36)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pFVar5 = (FCompactPoseBoneIndex *)(param_2->AllocatorInstance).Data;
  local_348.CurrentAngleDelta = 0.0;
  local_348.TransformIndex = 0;
  local_348.ChildZeroLengthTransformIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *pFVar5 = FVar3;
  *(double *)(pFVar5 + 4) = dVar11;
  *(double *)(pFVar5 + 6) = dVar10;
  local_348.ChildZeroLengthTransformIndices.ArrayNum = 0;
  local_348.ChildZeroLengthTransformIndices.ArrayMax = 0;
  *(double *)(pFVar5 + 8) = dVar12;
  *(double *)(pFVar5 + 10) = dVar13;
  *(double *)(pFVar5 + 0xc) = dVar14;
  *(double *)(pFVar5 + 0xe) = dVar15;
  *(double *)(pFVar5 + 0x10) = dVar16;
  *(double *)(pFVar5 + 0x12) = dVar17;
  *(double *)(pFVar5 + 0x14) = dVar18;
  *(double *)(pFVar5 + 0x16) = dVar19;
  *(double *)(pFVar5 + 0x18) = dVar20;
  *(double *)(pFVar5 + 0x1a) = dVar21;
  local_348.Transform.Rotation.XY.m128d_f64[0] = (pTVar38->Rotation).XY.m128d_f64[0];
  local_348.Transform.Rotation.XY.m128d_f64[1] = (pTVar38->Rotation).XY.m128d_f64[1];
  local_348.Transform.Rotation.ZW.m128d_f64[0] = (pTVar38->Rotation).ZW.m128d_f64[0];
  local_348.Transform.Rotation.ZW.m128d_f64[1] = (pTVar38->Rotation).ZW.m128d_f64[1];
  local_348.Transform.Translation.XY.m128d_f64[0] = (pTVar38->Translation).XY.m128d_f64[0];
  local_348.Transform.Translation.XY.m128d_f64[1] = (pTVar38->Translation).XY.m128d_f64[1];
  local_348.Transform.Translation.ZW.m128d_f64[0] = (pTVar38->Translation).ZW.m128d_f64[0];
  local_348.Transform.Translation.ZW.m128d_f64[1] = (pTVar38->Translation).ZW.m128d_f64[1];
  local_348.Transform.Scale3D.XY.m128d_f64[0] = (pTVar38->Scale3D).XY.m128d_f64[0];
  local_348.Transform.Scale3D.XY.m128d_f64[1] = (pTVar38->Scale3D).XY.m128d_f64[1];
  local_348.Transform.Scale3D.ZW.m128d_f64[0] = (pTVar38->Scale3D).ZW.m128d_f64[0];
  local_348.Transform.Scale3D.ZW.m128d_f64[1] = (pTVar38->Scale3D).ZW.m128d_f64[1];
  local_348.LocalTransform.Rotation.XY.m128d_f64[0] = local_188.Rotation.XY.m128d_f64[0];
  local_348.LocalTransform.Rotation.XY.m128d_f64[1] = local_188.Rotation.XY.m128d_f64[1];
  local_348.LocalTransform.Rotation.ZW.m128d_f64[0] = local_188.Rotation.ZW.m128d_f64[0];
  local_348.LocalTransform.Rotation.ZW.m128d_f64[1] = local_188.Rotation.ZW.m128d_f64[1];
  local_348.LocalTransform.Translation.XY.m128d_f64[0] = local_188.Translation.XY.m128d_f64[0];
  local_348.LocalTransform.Translation.XY.m128d_f64[1] = local_188.Translation.XY.m128d_f64[1];
  local_348.LocalTransform.Translation.ZW.m128d_f64[0] = local_188.Translation.ZW.m128d_f64[0];
  local_348.LocalTransform.Translation.ZW.m128d_f64[1] = local_188.Translation.ZW.m128d_f64[1];
  local_348.LocalTransform.Scale3D.XY.m128d_f64[0] = local_188.Scale3D.XY.m128d_f64[0];
  local_348.LocalTransform.Scale3D.XY.m128d_f64[1] = local_188.Scale3D.XY.m128d_f64[1];
  local_348.LocalTransform.Scale3D.ZW.m128d_f64[0] = local_188.Scale3D.ZW.m128d_f64[0];
  local_348.LocalTransform.Scale3D.ZW.m128d_f64[1] = local_188.Scale3D.ZW.m128d_f64[1];
  if (((local_580.AllocatorInstance.Data <= &local_348) &&
      (&local_348 <
       (FCCDIKChainLink *)(local_580.AllocatorInstance.Data + (longlong)local_580.ArrayMax * 0xe0)))
     && (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar36)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  iVar37 = local_580.ArrayNum;
  if (local_580.ArrayNum == local_580.ArrayMax) {
    iVar37 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x10e0,&local_580.AllocatorInstance,&local_580.ArrayMax);
  }
  local_580.ArrayNum = iVar37 + 1;
  FCCDIKChainLink::FCCDIKChainLink
            ((FCCDIKChainLink *)(local_580.AllocatorInstance.Data + (longlong)iVar37 * 0xe0),
             &local_348);
  if (local_348.ChildZeroLengthTransformIndices.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_348.ChildZeroLengthTransformIndices.AllocatorInstance.Data);
  }
  dVar11 = __real_3e45798ee2308c3a;
  local_584 = 1;
  if (1 < (int)uVar35) {
    do {
      uVar45 = local_584;
      uVar42 = 0;
      if ((int)local_584 < (int)local_568._0_4_) {
        uVar42 = ~local_584 >> 0x1f;
      }
      if ((uVar42 == 0) &&
         (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar36)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      FVar34.Data = local_570.Data;
      lVar44 = (longlong)(int)uVar45;
      FCSPose<FCompactPose>::GetLocalSpaceTransform
                (this_00,&local_128,*(FCompactPoseBoneIndex *)(local_570.Data + lVar44 * 4));
      pTVar38 = FCSPose<FCompactPose>::GetComponentSpaceTransform
                          (this_00,*(FCompactPoseBoneIndex *)(FVar34.Data + lVar44 * 4));
      uVar4 = *(undefined4 *)(FVar34.Data + lVar44 * 4);
      lVar44 = (longlong)(int)local_584;
      pFVar7 = (FScriptContainerElement *)(pTVar38->Translation).XY.m128d_f64[0];
      dVar12 = (pTVar38->Translation).XY.m128d_f64[1];
      pFVar43 = (FScriptContainerElement *)(pTVar38->Translation).ZW.m128d_f64[0];
      dVar10 = (pTVar38->Translation).ZW.m128d_f64[1];
      dVar13 = (pTVar38->Rotation).XY.m128d_f64[0];
      dVar14 = (pTVar38->Rotation).XY.m128d_f64[1];
      dVar15 = (pTVar38->Rotation).ZW.m128d_f64[0];
      dVar16 = (pTVar38->Rotation).ZW.m128d_f64[1];
      dVar17 = (pTVar38->Scale3D).XY.m128d_f64[0];
      dVar18 = (pTVar38->Scale3D).XY.m128d_f64[1];
      dVar19 = (pTVar38->Scale3D).ZW.m128d_f64[0];
      dVar20 = (pTVar38->Scale3D).ZW.m128d_f64[1];
      uVar45 = 0;
      if ((int)local_584 < *(int *)pFVar48) {
        uVar45 = ~local_584 >> 0x1f;
      }
      local_538.Data = pFVar7;
      dStack_530 = dVar12;
      local_528.Data = pFVar43;
      local_3b8 = uVar4;
      local_3a8 = dVar13;
      dStack_3a0 = dVar14;
      local_398 = dVar15;
      dStack_390 = dVar16;
      local_388 = pFVar7;
      dStack_380 = dVar12;
      local_378 = pFVar43;
      dStack_370 = dVar10;
      local_368 = dVar17;
      dStack_360 = dVar18;
      local_358 = dVar19;
      dStack_350 = dVar20;
      if ((uVar45 == 0) &&
         (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar36)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar6 = (param_2->AllocatorInstance).Data;
      lVar44 = lVar44 * 0x70;
      *(undefined4 *)(pFVar6 + lVar44) = uVar4;
      *(double *)(pFVar6 + lVar44 + 0x10) = dVar13;
      *(double *)(pFVar6 + lVar44 + 0x10 + 8) = dVar14;
      *(double *)(pFVar6 + lVar44 + 0x20) = dVar15;
      *(double *)(pFVar6 + lVar44 + 0x20 + 8) = dVar16;
      *(FScriptContainerElement **)(pFVar6 + lVar44 + 0x30) = pFVar7;
      *(double *)(pFVar6 + lVar44 + 0x30 + 8) = dVar12;
      *(FScriptContainerElement **)(pFVar6 + lVar44 + 0x40) = pFVar43;
      *(double *)(pFVar6 + lVar44 + 0x40 + 8) = dVar10;
      *(double *)(pFVar6 + lVar44 + 0x50) = dVar17;
      *(double *)(pFVar6 + lVar44 + 0x50 + 8) = dVar18;
      *(double *)(pFVar6 + lVar44 + 0x60) = dVar19;
      *(double *)(pFVar6 + lVar44 + 0x60 + 8) = dVar20;
      uVar42 = local_584 - 1;
      uVar45 = 0;
      if ((int)uVar42 < *(int *)pFVar48) {
        uVar45 = ~uVar42 >> 0x1f;
      }
      if ((uVar45 == 0) &&
         (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar36)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar7 = (param_2->AllocatorInstance).Data;
                    /* WARNING: Load size is inaccurate */
      pFVar43 = pFVar7 + (longlong)(int)uVar42 * 0x70 + 0x30;
      local_508.Data = *pFVar43;
      dStack_500 = *(double *)(pFVar43 + 8);
                    /* WARNING: Load size is inaccurate */
      local_4f8.Data = pFVar7[(longlong)(int)uVar42 * 0x70 + 0x40];
      if (SQRT((dStack_500 - dStack_530) * (dStack_500 - dStack_530) +
               ((double)local_508.Data - (double)local_538.Data) *
               ((double)local_508.Data - (double)local_538.Data) +
               ((double)local_4f8.Data - (double)local_528.Data) *
               ((double)local_4f8.Data - (double)local_528.Data)) <= dVar11) {
        uVar42 = local_580.ArrayNum - 1;
        uVar45 = 0;
        if ((int)uVar42 < local_580.ArrayNum) {
          uVar45 = ~uVar42 >> 0x1f;
        }
        if ((uVar45 == 0) &&
           (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar36)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pFVar43 = local_580.AllocatorInstance.Data + (longlong)(int)uVar42 * 0xe0 + 200;
                    /* WARNING: Load size is inaccurate */
        if (((*pFVar43 <= (FScriptContainerElement *)&local_584) &&
            ((FScriptContainerElement *)&local_584 <
             *pFVar43 + (longlong)*(int *)(pFVar43 + 0xc) * 4)) &&
           (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar36)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        iVar37 = *(int *)(pFVar43 + 8);
        if (iVar37 == *(int *)(pFVar43 + 0xc)) {
          iVar37 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,(ForAnyElementType *)pFVar43,(int *)(pFVar43 + 0xc));
        }
        *(int *)(pFVar43 + 8) = iVar37 + 1;
                    /* WARNING: Load size is inaccurate */
        *(uint *)(*pFVar43 + (longlong)iVar37 * 4) = local_584;
      }
      else {
        local_268.Transform.Rotation.XY.m128d_f64[0] = (pTVar38->Rotation).XY.m128d_f64[0];
        local_268.Transform.Rotation.XY.m128d_f64[1] = (pTVar38->Rotation).XY.m128d_f64[1];
        local_268.Transform.Rotation.ZW.m128d_f64[0] = (pTVar38->Rotation).ZW.m128d_f64[0];
        local_268.Transform.Rotation.ZW.m128d_f64[1] = (pTVar38->Rotation).ZW.m128d_f64[1];
        local_268.Transform.Translation.XY.m128d_f64[0] = (pTVar38->Translation).XY.m128d_f64[0];
        local_268.Transform.Translation.XY.m128d_f64[1] = (pTVar38->Translation).XY.m128d_f64[1];
        local_268.Transform.Translation.ZW.m128d_f64[0] = (pTVar38->Translation).ZW.m128d_f64[0];
        local_268.Transform.Translation.ZW.m128d_f64[1] = (pTVar38->Translation).ZW.m128d_f64[1];
        local_268.Transform.Scale3D.XY.m128d_f64[0] = (pTVar38->Scale3D).XY.m128d_f64[0];
        local_268.Transform.Scale3D.XY.m128d_f64[1] = (pTVar38->Scale3D).XY.m128d_f64[1];
        local_268.Transform.Scale3D.ZW.m128d_f64[0] = (pTVar38->Scale3D).ZW.m128d_f64[0];
        local_268.Transform.Scale3D.ZW.m128d_f64[1] = (pTVar38->Scale3D).ZW.m128d_f64[1];
        local_268.LocalTransform.Rotation.XY.m128d_f64[0] = local_128.Rotation.XY.m128d_f64[0];
        local_268.LocalTransform.Rotation.XY.m128d_f64[1] = local_128.Rotation.XY.m128d_f64[1];
        local_268.LocalTransform.Rotation.ZW.m128d_f64[0] = local_128.Rotation.ZW.m128d_f64[0];
        local_268.LocalTransform.Rotation.ZW.m128d_f64[1] = local_128.Rotation.ZW.m128d_f64[1];
        local_268.TransformIndex = local_584;
        local_268.LocalTransform.Translation.XY.m128d_f64[0] = local_128.Translation.XY.m128d_f64[0]
        ;
        local_268.LocalTransform.Translation.XY.m128d_f64[1] = local_128.Translation.XY.m128d_f64[1]
        ;
        local_268.LocalTransform.Translation.ZW.m128d_f64[0] = local_128.Translation.ZW.m128d_f64[0]
        ;
        local_268.LocalTransform.Translation.ZW.m128d_f64[1] = local_128.Translation.ZW.m128d_f64[1]
        ;
        local_268.LocalTransform.Scale3D.XY.m128d_f64[0] = local_128.Scale3D.XY.m128d_f64[0];
        local_268.LocalTransform.Scale3D.XY.m128d_f64[1] = local_128.Scale3D.XY.m128d_f64[1];
        local_268.LocalTransform.Scale3D.ZW.m128d_f64[0] = local_128.Scale3D.ZW.m128d_f64[0];
        local_268.LocalTransform.Scale3D.ZW.m128d_f64[1] = local_128.Scale3D.ZW.m128d_f64[1];
        local_268.CurrentAngleDelta = 0.0;
        local_268.ChildZeroLengthTransformIndices.AllocatorInstance.Data =
             (FScriptContainerElement *)0x0;
        local_268.ChildZeroLengthTransformIndices.ArrayNum = 0;
        local_268.ChildZeroLengthTransformIndices.ArrayMax = 0;
        if (((local_580.AllocatorInstance.Data <= &local_268) &&
            (&local_268 <
             (FCCDIKChainLink *)
             (local_580.AllocatorInstance.Data + (longlong)local_580.ArrayMax * 0xe0))) &&
           (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar36)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        iVar37 = local_580.ArrayNum;
        if (local_580.ArrayNum == local_580.ArrayMax) {
          iVar37 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x10e0,&local_580.AllocatorInstance,&local_580.ArrayMax);
        }
        local_580.ArrayNum = iVar37 + 1;
        FCCDIKChainLink::FCCDIKChainLink
                  ((FCCDIKChainLink *)(local_580.AllocatorInstance.Data + (longlong)iVar37 * 0xe0),
                   &local_268);
        if (local_268.ChildZeroLengthTransformIndices.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_268.ChildZeroLengthTransformIndices.AllocatorInstance.Data);
        }
      }
      local_584 = local_584 + 1;
      this = local_560;
    } while ((int)local_584 < (int)uVar35);
  }
  bVar36 = AnimationCore::SolveCCDIK
                     (&local_580,(TVector<double> *)&local_520._s_0,this->Precision,
                      this->MaxIterations,this->bStartFromTail,this->bEnableRotationLimit,
                      &this->RotationLimitPerJoints);
  if (bVar36) {
    FVar41 = (FWeakObjectPtr)(longlong)local_580.ArrayNum;
    uVar45 = 0;
    local_560 = (FAnimNode_CCDIK *)((ulonglong)local_560 & 0xffffffff00000000);
    local_558 = FVar41;
    if (0 < local_580.ArrayNum) {
      lVar44 = 0;
      do {
        uVar42 = 0;
        if ((int)uVar45 < FVar41.ObjectIndex) {
          uVar42 = ~uVar45 >> 0x1f;
        }
        if ((uVar42 == 0) &&
           (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar36)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        FVar34.Data = local_580.AllocatorInstance.Data;
        uVar42 = *(uint *)(local_580.AllocatorInstance.Data + lVar44 + 0xc0);
        uVar22 = *(undefined8 *)(local_580.AllocatorInstance.Data + lVar44);
        uVar23 = *(undefined8 *)(local_580.AllocatorInstance.Data + lVar44 + 8);
        uVar24 = *(undefined8 *)(local_580.AllocatorInstance.Data + lVar44 + 0x10);
        uVar25 = *(undefined8 *)(local_580.AllocatorInstance.Data + lVar44 + 0x10 + 8);
        uVar26 = *(undefined8 *)(local_580.AllocatorInstance.Data + lVar44 + 0x20);
        uVar27 = *(undefined8 *)(local_580.AllocatorInstance.Data + lVar44 + 0x20 + 8);
        uVar28 = *(undefined8 *)(local_580.AllocatorInstance.Data + lVar44 + 0x30);
        uVar29 = *(undefined8 *)(local_580.AllocatorInstance.Data + lVar44 + 0x30 + 8);
        uVar30 = *(undefined8 *)(local_580.AllocatorInstance.Data + lVar44 + 0x40);
        uVar31 = *(undefined8 *)(local_580.AllocatorInstance.Data + lVar44 + 0x40 + 8);
        uVar46 = 0;
        if ((int)uVar42 < *(int *)&(pFVar48->RawRefBoneInfo).AllocatorInstance.Data) {
          uVar46 = ~uVar42 >> 0x1f;
        }
        uVar32 = *(undefined8 *)(local_580.AllocatorInstance.Data + lVar44 + 0x50);
        uVar33 = *(undefined8 *)(local_580.AllocatorInstance.Data + lVar44 + 0x50 + 8);
        if ((uVar46 == 0) &&
           (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar36)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        FVar41 = local_548;
        lVar8 = *(longlong *)param_2;
        uVar46 = 0;
        lVar39 = (longlong)(int)uVar42 * 0x70;
        lVar49 = 0;
        puVar2 = (undefined8 *)(lVar39 + 0x10 + lVar8);
        *puVar2 = uVar22;
        puVar2[1] = uVar23;
        puVar2 = (undefined8 *)(lVar39 + 0x20 + lVar8);
        *puVar2 = uVar24;
        puVar2[1] = uVar25;
        puVar2 = (undefined8 *)(lVar39 + 0x30 + lVar8);
        *puVar2 = uVar26;
        puVar2[1] = uVar27;
        puVar2 = (undefined8 *)(lVar39 + 0x40 + lVar8);
        *puVar2 = uVar28;
        puVar2[1] = uVar29;
        puVar2 = (undefined8 *)(lVar39 + 0x50 + lVar8);
        *puVar2 = uVar30;
        puVar2[1] = uVar31;
        puVar2 = (undefined8 *)(lVar39 + 0x60 + lVar8);
        *puVar2 = uVar32;
        puVar2[1] = uVar33;
        iVar37 = *(int *)(FVar34.Data + lVar44 + 0xd0);
        if (0 < (longlong)iVar37) {
          do {
            uVar22 = *(undefined8 *)(FVar34.Data + lVar44);
            uVar23 = *(undefined8 *)(FVar34.Data + lVar44 + 8);
            uVar24 = *(undefined8 *)(FVar34.Data + lVar44 + 0x10);
            uVar25 = *(undefined8 *)(FVar34.Data + lVar44 + 0x10 + 8);
            uVar26 = *(undefined8 *)(FVar34.Data + lVar44 + 0x20);
            uVar27 = *(undefined8 *)(FVar34.Data + lVar44 + 0x20 + 8);
            uVar28 = *(undefined8 *)(FVar34.Data + lVar44 + 0x30);
            uVar29 = *(undefined8 *)(FVar34.Data + lVar44 + 0x30 + 8);
            uVar30 = *(undefined8 *)(FVar34.Data + lVar44 + 0x40);
            uVar31 = *(undefined8 *)(FVar34.Data + lVar44 + 0x40 + 8);
            uVar45 = 0;
            if ((int)uVar46 < *(int *)(FVar34.Data + lVar44 + 0xd0)) {
              uVar45 = ~uVar46 >> 0x1f;
            }
            uVar32 = *(undefined8 *)(FVar34.Data + lVar44 + 0x50);
            uVar33 = *(undefined8 *)(FVar34.Data + lVar44 + 0x50 + 8);
            if ((uVar45 == 0) &&
               (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar36)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            uVar45 = *(uint *)(*(longlong *)(FVar34.Data + lVar44 + 200) + lVar49 * 4);
            uVar42 = 0;
            if ((int)uVar45 < *(int *)((longlong)FVar41 + 8)) {
              uVar42 = ~uVar45 >> 0x1f;
            }
            if ((uVar42 == 0) &&
               (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar36)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            lVar8 = *(longlong *)FVar41;
            uVar46 = uVar46 + 1;
            lVar39 = (longlong)(int)uVar45 * 0x70;
            lVar49 = lVar49 + 1;
            puVar2 = (undefined8 *)(lVar39 + 0x10 + lVar8);
            *puVar2 = uVar22;
            puVar2[1] = uVar23;
            puVar2 = (undefined8 *)(lVar39 + 0x20 + lVar8);
            *puVar2 = uVar24;
            puVar2[1] = uVar25;
            puVar2 = (undefined8 *)(lVar39 + 0x30 + lVar8);
            *puVar2 = uVar26;
            puVar2[1] = uVar27;
            puVar2 = (undefined8 *)(lVar39 + 0x40 + lVar8);
            *puVar2 = uVar28;
            puVar2[1] = uVar29;
            puVar2 = (undefined8 *)(lVar39 + 0x50 + lVar8);
            *puVar2 = uVar30;
            puVar2[1] = uVar31;
            puVar2 = (undefined8 *)(lVar39 + 0x60 + lVar8);
            *puVar2 = uVar32;
            puVar2[1] = uVar33;
          } while (lVar49 < iVar37);
          uVar45 = (uint)local_560;
        }
        FVar41 = (FWeakObjectPtr)(local_580._8_8_ & 0xffffffff);
        uVar45 = uVar45 + 1;
        lVar44 = lVar44 + 0xe0;
        local_560 = (FAnimNode_CCDIK *)CONCAT44(local_560._4_4_,uVar45);
        local_558 = (FWeakObjectPtr)((longlong)local_558 - 1);
        param_2 = (TArray<FBoneTransform,TSizedDefaultAllocator<32>_> *)local_548;
        pFVar48 = local_540;
      } while (local_558 != (FWeakObjectPtr)0x0);
    }
  }
  DestructItems<FCCDIKChainLink,int>
            ((FCCDIKChainLink *)local_580.AllocatorInstance.Data,local_580.ArrayNum);
  if ((FCCDIKChainLink *)local_580.AllocatorInstance.Data != (FCCDIKChainLink *)0x0) {
    FMemory::Free(local_580.AllocatorInstance.Data);
  }
  if ((FCompactPoseBoneIndex *)local_570.Data != (FCompactPoseBoneIndex *)0x0) {
    FMemory::Free(local_570.Data);
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// GatherDebugData @ 146442b80

void __thiscall FAnimNode_CCDIK::GatherDebugData(FAnimNode_CCDIK *this,FNodeDebugData *param_1)

{
  ForAnyElementType _Src;
  UPackage *pUVar1;
  FName local_res8;
  FString local_48;
  FString local_38 [2];
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_CCDIK::GatherDebugData");
  if (Z_Registration_Info_UScriptStruct_FAnimNode_CCDIK.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    Z_Registration_Info_UScriptStruct_FAnimNode_CCDIK.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_CCDIK,(UObject *)pUVar1,
                         L"AnimNode_CCDIK");
  }
  local_res8 = (FName)(Z_Registration_Info_UScriptStruct_FAnimNode_CCDIK.OuterSingleton)->_padding_;
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

// GetCurrentLocation @ 1464495d0

TVector<double> * __thiscall
FAnimNode_CCDIK::GetCurrentLocation
          (FAnimNode_CCDIK *this,TVector<double> *__return_storage_ptr__,
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

// GetTargetTransform @ 14644fad0

TTransform<double> * __cdecl
FAnimNode_CCDIK::GetTargetTransform
          (TTransform<double> *__return_storage_ptr__,TTransform<double> *param_1,
          FCSPose<FCompactPose> *param_2,FBoneSocketTarget *param_3,EBoneControlSpace param_4,
          TVector<double> *param_5)

{
  double dVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  TTransform<double> *pTVar11;
  longlong lVar12;
  TTransform<double> local_68;
  
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar4._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar4._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar4._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).XY.m128d_f64 = auVar4;
  auVar5._8_4_ = SUB84((double)fVar3,0);
  auVar5._0_8_ = (double)fVar2;
  auVar5._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).ZW.m128d_f64 = auVar5;
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar6._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar6._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar6._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Translation).XY.m128d_f64 = auVar6;
  auVar7._8_4_ = SUB84((double)fVar3,0);
  auVar7._0_8_ = (double)fVar2;
  auVar7._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Translation).ZW.m128d_f64 = auVar7;
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).XY.m128d_f64 = auVar8;
  auVar9._8_4_ = SUB84((double)fVar3,0);
  auVar9._0_8_ = (double)fVar2;
  auVar9._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).ZW.m128d_f64 = auVar9;
  if (param_4 == BCS_BoneSpace) {
    pTVar11 = FBoneSocketTarget::GetTargetTransform<FCompactPose>
                        (param_3,&local_68,param_5,param_2,param_1);
    dVar1 = (pTVar11->Rotation).XY.m128d_f64[1];
    (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = (pTVar11->Rotation).XY.m128d_f64[0];
    (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar1;
    dVar1 = (pTVar11->Rotation).ZW.m128d_f64[1];
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = (pTVar11->Rotation).ZW.m128d_f64[0];
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar1;
    dVar1 = (pTVar11->Translation).XY.m128d_f64[1];
    (__return_storage_ptr__->Translation).XY.m128d_f64[0] = (pTVar11->Translation).XY.m128d_f64[0];
    (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar1;
    dVar1 = (pTVar11->Translation).ZW.m128d_f64[1];
    (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = (pTVar11->Translation).ZW.m128d_f64[0];
    (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar1;
    dVar1 = (pTVar11->Scale3D).XY.m128d_f64[1];
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = (pTVar11->Scale3D).XY.m128d_f64[0];
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar1;
    dVar1 = (pTVar11->Scale3D).ZW.m128d_f64[1];
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = (pTVar11->Scale3D).ZW.m128d_f64[0];
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar1;
  }
  else {
    dVar10 = (param_5->field0_0x0)._s_0.Y;
    dVar1 = (param_5->field0_0x0)._s_0.Z;
    (__return_storage_ptr__->Translation).XY.m128d_f64[0] = (param_5->field0_0x0)._s_0.X;
    (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar10;
    (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = dVar1;
    (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = 0.0;
    lVar12 = 0x8c;
    if (param_3->bUseSocket == false) {
      lVar12 = 0x10;
    }
    FAnimationRuntime::ConvertBoneSpaceTransformToCS
              (param_1,param_2,__return_storage_ptr__,
               *(FCompactPoseBoneIndex *)
                ((longlong)(&(param_3->SocketReference).CachedSocketLocalTransform.Rotation + -1) +
                lVar12),param_4);
  }
  return __return_storage_ptr__;
}

// InitializeBoneReferences @ 1464561d0

void __thiscall
FAnimNode_CCDIK::InitializeBoneReferences(FAnimNode_CCDIK *this,FBoneContainer *param_1)

{
  undefined1 *puVar1;
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_CCDIK::InitializeBoneReferences");
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

// IsValidToEvaluate @ 14645b5f0

bool __thiscall
FAnimNode_CCDIK::IsValidToEvaluate(FAnimNode_CCDIK *this,USkeleton *param_1,FBoneContainer *param_2)

{
  uchar uVar1;
  bool bVar2;
  
  uVar1 = (this->EffectorLocationSpace).Value;
  if ((uVar1 == '\x02') || (uVar1 == '\x03')) {
    if ((this->EffectorTarget).bUseSocket == false) {
      bVar2 = FBoneReference::IsValidToEvaluate(&(this->EffectorTarget).BoneReference,param_2);
    }
    else {
      bVar2 = (this->EffectorTarget).SocketReference.CachedSocketCompactBoneIndex !=
              (FCompactPoseBoneIndex)0xffffffff;
    }
    if (bVar2 == false) {
      return false;
    }
  }
  bVar2 = FBoneReference::IsValidToEvaluate(&this->TipBone,param_2);
  if ((((bVar2) && (bVar2 = FBoneReference::IsValidToEvaluate(&this->RootBone,param_2), bVar2)) &&
      (0.0 < this->Precision)) &&
     (bVar2 = FBoneContainer::BoneIsChildOf
                        (param_2,(this->TipBone).BoneIndex,(this->RootBone).BoneIndex), bVar2)) {
    return true;
  }
  return false;
}

