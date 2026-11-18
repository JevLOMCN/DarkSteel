// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 8

// StaticStruct @ 1463d5220

UScriptStruct * __cdecl FAnimNode_ScaleChainLength::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_ScaleChainLength.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    Z_Registration_Info_UScriptStruct_FAnimNode_ScaleChainLength.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength,(UObject *)pUVar1,
                         L"AnimNode_ScaleChainLength");
  }
  return Z_Registration_Info_UScriptStruct_FAnimNode_ScaleChainLength.OuterSingleton;
}

// FAnimNode_ScaleChainLength @ 146405950

FAnimNode_ScaleChainLength * __thiscall
FAnimNode_ScaleChainLength::FAnimNode_ScaleChainLength(FAnimNode_ScaleChainLength *this)

{
  undefined1 *puVar1;
  
  *(undefined4 *)&(this->InputPose).field_0x8 = 0xffffffff;
  this->_padding_ = (longlong)&___7FAnimNode_ScaleChainLength__6B_;
  *(undefined8 *)&this->InputPose = 0;
  (this->InputPose).field_0xc = 0;
  this->_padding_ = 0;
  this->DefaultChainLength = 0.0;
  (this->ChainStartBone).BoneName.ComparisonIndex = 0;
  (this->ChainStartBone).BoneName.Number = 0;
  puVar1 = &(this->ChainStartBone).field_0x8;
  (this->ChainStartBone).BoneIndex = -1;
  (this->ChainStartBone).bUseSkeletonIndex = 0;
  (this->ChainStartBone).CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
  (this->ChainEndBone).BoneName.ComparisonIndex = 0;
  (this->ChainEndBone).BoneName.Number = 0;
  puVar1 = &(this->ChainEndBone).field_0x8;
  (this->ChainEndBone).BoneIndex = -1;
  (this->ChainEndBone).bUseSkeletonIndex = 0;
  (this->ChainEndBone).CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
  (this->TargetLocation).field0_0x0._s_0.X = 0.0;
  (this->TargetLocation).field0_0x0._s_0.Y = 0.0;
  (this->TargetLocation).field0_0x0._s_0.Z = 0.0;
  this->Alpha = 1.0;
  this->ActualAlpha = 0.0;
  (this->AlphaScaleBias).Scale = 1.0;
  (this->AlphaScaleBias).Bias = 0.0;
  this->ChainInitialLength = FixedDefaultLengthValue;
  this->bBoneIndicesCached = false;
  (this->ChainBoneIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChainBoneIndices).ArrayNum = 0;
  (this->ChainBoneIndices).ArrayMax = 0;
  return this;
}

// CacheBones_AnyThread @ 14641a260

void __thiscall
FAnimNode_ScaleChainLength::CacheBones_AnyThread
          (FAnimNode_ScaleChainLength *this,FAnimationCacheBonesContext *param_1)

{
  FStatsHierarchical::BeginMeasurement("FAnimNode_ScaleChainLength::CacheBones_AnyThread");
  FPoseLinkBase::CacheBones((FPoseLinkBase *)&this->InputPose,param_1);
  this->bBoneIndicesCached = false;
  FStatsHierarchical::EndMeasurement();
  return;
}

// Evaluate_AnyThread @ 14643deb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FAnimNode_ScaleChainLength::Evaluate_AnyThread
          (FAnimNode_ScaleChainLength *this,FPoseContext *param_1)

{
  FCompactPose *this_00;
  int *piVar1;
  FCompactPoseBoneIndex *pFVar2;
  FBoneContainer *this_01;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  bool bVar8;
  FCompactPoseBoneIndex FVar9;
  FCompactPoseBoneIndex FVar10;
  int iVar11;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  TTransform<double> *pTVar12;
  FCompactPoseBoneIndex *pFVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  double dVar17;
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  double dVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  double dVar29;
  double dVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined4 uVar36;
  undefined4 uVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 local_1e8 [16];
  FPoseContext *local_1d8;
  undefined1 local_1d0 [8];
  FCompactPoseBoneIndex local_1c8 [2];
  double local_1c0;
  FWeakObjectPtr FStack_1b8;
  FWeakObjectPtr local_1b0;
  FWeakObjectPtr local_1a8;
  FWeakObjectPtr local_1a0;
  FWeakObjectPtr local_198;
  FWeakObjectPtr FStack_190;
  ForAnyElementType local_188;
  ForAnyElementType local_180;
  ForAnyElementType local_178;
  ForElementType<FCompactPoseBoneIndex> local_170;
  ForAnyElementType local_168;
  
  local_1d8 = param_1;
  FStatsHierarchical::BeginMeasurement("FAnimNode_ScaleChainLength::Evaluate_AnyThread");
  FPoseLink::Evaluate(&this->InputPose,param_1);
  if (__real_3727c5ac < this->ActualAlpha) {
    this_01 = *(FBoneContainer **)&(param_1->Pose).field_0x10;
    this_00 = &param_1->Pose;
    if (this->bBoneIndicesCached == false) {
      this->bBoneIndicesCached = true;
      FBoneReference::Initialize(&this->ChainStartBone,this_01);
      FBoneReference::Initialize(&this->ChainEndBone,this_01);
      piVar1 = &(this->ChainBoneIndices).ArrayMax;
      (this->ChainBoneIndices).ArrayNum = 0;
      if (*piVar1 < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,&(this->ChainBoneIndices).AllocatorInstance,0,piVar1);
      }
      bVar8 = FBoneReference::IsValidToEvaluate(&this->ChainStartBone,this_01);
      if ((bVar8) && (bVar8 = FBoneReference::IsValidToEvaluate(&this->ChainEndBone,this_01), bVar8)
         ) {
        FVar9 = FBoneReference::GetCompactPoseIndex
                          (&this->ChainStartBone,(FBoneContainer *)local_1d0);
        FVar10 = FBoneReference::GetCompactPoseIndex
                           (&this->ChainEndBone,(FBoneContainer *)(local_1d0 + 4));
        bVar8 = FBoneContainer::BoneIsChildOf
                          (this_01,(FCompactPoseBoneIndex *)CONCAT44(extraout_var_00,FVar10),
                           (FCompactPoseBoneIndex *)CONCAT44(extraout_var,FVar9));
        param_1 = local_1d8;
        if (bVar8) {
          FBoneReference::GetCompactPoseIndex
                    (&this->ChainStartBone,(FBoneContainer *)(local_1e8 + 0xc));
          FBoneReference::GetCompactPoseIndex(&this->ChainEndBone,(FBoneContainer *)local_1e8);
          pFVar3 = (this->ChainBoneIndices).AllocatorInstance.Data;
          if (((pFVar3 <= (FScriptContainerElement *)local_1e8) &&
              ((FScriptContainerElement *)local_1e8 < pFVar3 + (longlong)*piVar1 * 4)) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar8)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar11 = (this->ChainBoneIndices).ArrayNum;
          if (iVar11 == *piVar1) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&(this->ChainBoneIndices).AllocatorInstance,piVar1);
          }
          (this->ChainBoneIndices).ArrayNum = iVar11 + 1;
          *(undefined4 *)((this->ChainBoneIndices).AllocatorInstance.Data + (longlong)iVar11 * 4) =
               local_1e8._0_4_;
          param_1 = local_1d8;
          if ((FCompactPoseBoneIndex)local_1e8._0_4_ != (FCompactPoseBoneIndex)0xffffffff) {
            FBoneContainer::GetParentBoneIndex(this_01,(FCompactPoseBoneIndex *)(local_1e8 + 8));
            FVar9 = (FCompactPoseBoneIndex)local_1e8._0_4_;
            local_1e8._0_4_ = local_1e8._8_4_;
            while ((local_1e8._8_4_ = local_1e8._0_4_,
                   (FCompactPoseBoneIndex)local_1e8._0_4_ != (FCompactPoseBoneIndex)0xffffffff &&
                   (local_1e8._0_4_ != local_1e8._12_4_))) {
              FVar9 = FBoneContainer::GetParentBoneIndex(this_01,local_1c8);
              local_1e8._8_4_ = *(FCompactPoseBoneIndex *)CONCAT44(extraout_var_01,FVar9);
              TArray<FCompactPoseBoneIndex,TSizedDefaultAllocator<32>_>::Insert
                        (&this->ChainBoneIndices,(FCompactPoseBoneIndex *)local_1e8,0);
              FVar9 = (FCompactPoseBoneIndex)local_1e8._0_4_;
              local_1e8._0_4_ = local_1e8._8_4_;
            }
            local_1e8._0_4_ = FVar9;
            TArray<FCompactPoseBoneIndex,TSizedDefaultAllocator<32>_>::Insert
                      (&this->ChainBoneIndices,(FCompactPoseBoneIndex *)(local_1e8 + 0xc),0);
            param_1 = local_1d8;
          }
        }
      }
    }
    if (1 < (this->ChainBoneIndices).ArrayNum) {
      lVar15 = param_1->_padding_;
      dVar17 = (this->TargetLocation).field0_0x0._s_0.Z - *(double *)(lVar15 + 0x50);
      dVar29 = *(double *)(lVar15 + 0x20) *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
      dVar30 = *(double *)(lVar15 + 0x28) *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
      auVar31._0_8_ =
           *(double *)(lVar15 + 0x30) * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0]
      ;
      auVar31._8_8_ =
           *(double *)(lVar15 + 0x38) * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1]
      ;
      auVar27._8_4_ = SUB84(dVar30,0);
      auVar27._0_8_ = dVar29;
      auVar27._12_4_ = (int)((ulonglong)dVar30 >> 0x20);
      auVar28 = blendpd(auVar27,auVar31,2);
      dVar26 = (this->TargetLocation).field0_0x0._s_0.X - *(double *)(lVar15 + 0x40);
      dVar18 = (this->TargetLocation).field0_0x0._s_0.Y - *(double *)(lVar15 + 0x48);
      uVar36 = (undefined4)((ulonglong)dVar18 >> 0x20);
      auVar19._8_4_ = SUB84(auVar31._0_8_,0);
      auVar19._0_8_ = dVar30;
      auVar19._12_4_ = (int)((ulonglong)auVar31._0_8_ >> 0x20);
      auVar40._8_4_ = SUB84(dVar18,0);
      auVar40._0_8_ = dVar26;
      auVar40._12_4_ = uVar36;
      auVar23._8_4_ = SUB84(dVar18,0);
      auVar23._0_8_ = dVar26;
      auVar23._12_4_ = uVar36;
      auVar24._8_8_ = 0;
      auVar24._0_8_ = dVar17;
      auVar24 = blendpd(auVar23,auVar24,2);
      auVar41._0_8_ = auVar40._8_8_ * dVar29 - dVar30 * dVar26;
      auVar41._8_8_ = dVar17 * dVar30 - auVar19._8_8_ * dVar18;
      auVar25._0_8_ = auVar24._0_8_ * auVar31._0_8_ - dVar17 * auVar28._0_8_;
      auVar25._8_8_ = auVar24._8_8_ * auVar31._8_8_ - auVar28._8_8_ * 0.0;
      dVar6 = auVar41._8_8_ + auVar41._8_8_;
      dVar7 = auVar25._0_8_ + auVar25._0_8_;
      uVar36 = SUB84(dVar7,0);
      uVar37 = (undefined4)((ulonglong)dVar7 >> 0x20);
      auVar24 = blendpd(auVar41,auVar25,2);
      auVar38._8_4_ = uVar36;
      auVar38._0_8_ = dVar6;
      auVar38._12_4_ = uVar37;
      auVar20._8_4_ = uVar36;
      auVar20._0_8_ = dVar6;
      auVar20._12_4_ = uVar37;
      auVar34._8_4_ = uVar36;
      auVar34._0_8_ = dVar6;
      auVar34._12_4_ = uVar37;
      auVar42._0_8_ = auVar24._0_8_ + auVar24._0_8_;
      auVar42._8_8_ = auVar24._8_8_ + auVar24._8_8_;
      auVar24 = blendpd(auVar34,auVar42,2);
      auVar39._0_8_ = auVar38._8_8_ * dVar29 - dVar6 * dVar30;
      auVar39._8_8_ = auVar42._0_8_ * dVar30 - auVar20._8_8_ * auVar31._0_8_;
      auVar21._8_4_ = SUB84(auVar42._8_8_,0);
      auVar21._0_8_ = auVar42._0_8_;
      auVar21._12_4_ = (int)((ulonglong)auVar42._8_8_ >> 0x20);
      auVar32._0_8_ =
           (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & *(uint *)(lVar15 + 100),
                            (uint)__xmm_7fffffffffffffff7fffffffffffffff & *(uint *)(lVar15 + 0x60))
      ;
      auVar32._8_4_ = _UNK_15061cc88 & *(uint *)(lVar15 + 0x68);
      auVar32._12_4_ = _UNK_15061cc8c & *(uint *)(lVar15 + 0x6c);
      auVar35._0_8_ = auVar24._0_8_ * auVar31._0_8_ - auVar42._0_8_ * auVar28._0_8_;
      auVar35._8_8_ = auVar24._8_8_ * auVar31._8_8_ - auVar21._8_8_ * auVar28._8_8_;
      auVar24 = *(undefined1 (*) [16])(lVar15 + 0x70);
      lVar14 = -(ulonglong)
                ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & auVar24._4_4_,
                                  (uint)__xmm_7fffffffffffffff7fffffffffffffff & auVar24._0_4_) <=
                (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
      auVar28 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                      *(undefined1 (*) [16])(lVar15 + 0x60));
      lVar15 = -(ulonglong)(auVar32._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0])
      ;
      lVar16 = -(ulonglong)(auVar32._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1])
      ;
      auVar22._8_4_ = SUB84(auVar39._8_8_,0);
      auVar22._0_8_ = auVar39._0_8_;
      auVar22._12_4_ = (int)((ulonglong)auVar39._8_8_ >> 0x20);
      auVar33._0_8_ =
           (double)CONCAT44(~(uint)((ulonglong)lVar15 >> 0x20) & auVar28._4_4_,
                            ~(uint)lVar15 & auVar28._0_4_);
      auVar33._8_4_ = ~(uint)lVar16 & auVar28._8_4_;
      auVar33._12_4_ = ~(uint)((ulonglong)lVar16 >> 0x20) & auVar28._12_4_;
      local_1c0 = auVar33._0_8_ * (dVar6 * auVar31._8_8_ + dVar26 + auVar22._8_8_);
      FStack_1b8 = (FWeakObjectPtr)
                   (auVar33._8_8_ * (dVar7 * auVar31._8_8_ + dVar18 + auVar35._0_8_));
      auVar28._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
      auVar28._0_8_ = auVar24._0_8_;
      auVar28._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
      auVar24 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar28);
      local_1a8.ObjectIndex = 0;
      local_1a8.ObjectSerialNumber = 0;
      local_1a0.ObjectIndex = 0;
      local_1a0.ObjectSerialNumber = 0;
      local_188.Data = (FScriptContainerElement *)0x0;
      local_180.Data = (FScriptContainerElement *)0x0;
      local_178.Data = (FScriptContainerElement *)0x0;
      local_170.Data = (FCompactPoseBoneIndex *)0x0;
      local_168.Data = (FScriptContainerElement *)0x0;
      auVar28 = blendpd(auVar39,auVar35,2);
      local_1b0 = (FWeakObjectPtr)
                  ((double)CONCAT44(~(uint)((ulonglong)lVar14 >> 0x20) & auVar24._4_4_,
                                    ~(uint)lVar14 & auVar24._0_4_) *
                  (auVar42._0_8_ * auVar31._8_8_ + dVar17 + auVar28._0_8_));
      local_198.ObjectIndex = 0;
      local_198.ObjectSerialNumber = 0;
      FStack_190.ObjectIndex = 0;
      FStack_190.ObjectSerialNumber = 0;
      FCSPose<FCompactPose>::InitPose((FCSPose<FCompactPose> *)&local_1a8,this_00);
      if (((this->ChainBoneIndices).ArrayNum < 1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pTVar12 = FCSPose<FCompactPose>::GetComponentSpaceTransform
                          ((FCSPose<FCompactPose> *)&local_1a8,
                           *(FCompactPoseBoneIndex *)(this->ChainBoneIndices).AllocatorInstance.Data
                          );
      auVar24 = *(undefined1 (*) [16])(pTVar12->Translation).ZW.m128d_f64;
      dVar6 = local_1c0 - (pTVar12->Translation).XY.m128d_f64[0];
      dVar17 = (double)local_1b0 - auVar24._0_8_;
      dVar7 = (double)FStack_1b8 - (pTVar12->Translation).XY.m128d_f64[1];
      dVar18 = GetInitialChainLength(this,this_00,(FCSPose<FCompactPose> *)&local_1a8);
      dVar26 = __real_3ff0000000000000;
      if (__real_3e45798ee2308c3a <
          (double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar18,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
        auVar5._8_8_ = 0;
        auVar5._0_8_ = dVar6 * dVar6 + dVar7 * dVar7 + dVar17 * dVar17;
        auVar24 = sqrtpd(auVar24,auVar5);
        dVar26 = auVar24._0_8_ * (__real_3ff0000000000000 / dVar18);
      }
      dVar6 = (double)this->ActualAlpha * dVar26 + (double)(__real_3f800000 - this->ActualAlpha);
      if (__real_3e45798ee2308c3a <
          (double)CONCAT44((uint)((ulonglong)(dVar6 - __real_3ff0000000000000) >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar6 - __real_3ff0000000000000,0) &
                           (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
        pFVar13 = (FCompactPoseBoneIndex *)(this->ChainBoneIndices).AllocatorInstance.Data;
        iVar11 = (this->ChainBoneIndices).ArrayNum;
        pFVar2 = pFVar13 + iVar11;
        while( true ) {
          if ((this->ChainBoneIndices).ArrayNum != iVar11) {
            `TCheckedPointerIterator<FCompactPoseBoneIndex,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_1e8 + 4);
          }
          if (pFVar13 == pFVar2) break;
          pTVar12 = FBasePose<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::operator[]
                              ((FBasePose<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *)this_00,
                               pFVar13);
          pFVar13 = pFVar13 + 1;
          dVar7 = (pTVar12->Translation).XY.m128d_f64[1];
          dVar26 = (pTVar12->Translation).ZW.m128d_f64[0];
          dVar18 = (pTVar12->Translation).ZW.m128d_f64[1];
          (pTVar12->Translation).XY.m128d_f64[0] = dVar6 * (pTVar12->Translation).XY.m128d_f64[0];
          (pTVar12->Translation).XY.m128d_f64[1] = dVar6 * dVar7;
          (pTVar12->Translation).ZW.m128d_f64[0] = dVar6 * dVar26;
          (pTVar12->Translation).ZW.m128d_f64[1] = dVar18 * 0.0;
        }
      }
    }
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// GatherDebugData @ 146446180

void __thiscall
FAnimNode_ScaleChainLength::GatherDebugData
          (FAnimNode_ScaleChainLength *this,FNodeDebugData *param_1)

{
  ForAnyElementType _Src;
  UPackage *pUVar1;
  int iVar2;
  FName local_res8;
  FString local_48;
  FString local_38 [2];
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_ScaleChainLength::GatherDebugData");
  if (Z_Registration_Info_UScriptStruct_FAnimNode_ScaleChainLength.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    Z_Registration_Info_UScriptStruct_FAnimNode_ScaleChainLength.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength,(UObject *)pUVar1,
                         L"AnimNode_ScaleChainLength");
  }
  local_res8 = (FName)(Z_Registration_Info_UScriptStruct_FAnimNode_ScaleChainLength.OuterSingleton)
                      ->_padding_;
  ::FName::ToString(&local_res8,&local_48);
  ::FString::PrintfImpl(local_38,L"%s<W:%.1f%%> %s");
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  ::FString::Empty(&param_1->NodeDescription);
  ::FString::PrintfImpl(&local_48,L"Alpha (%.1f%%)");
  iVar2 = local_48.Data.ArrayNum + -1;
  if (local_48.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  ::FString::AppendChars(local_38,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar2);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
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
  FPoseLinkBase::GatherDebugData((FPoseLinkBase *)&this->InputPose,param_1);
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// GetInitialChainLength @ 14644b120

double __thiscall
FAnimNode_ScaleChainLength::GetInitialChainLength
          (FAnimNode_ScaleChainLength *this,FCompactPose *param_1,FCSPose<FCompactPose> *param_2)

{
  FScriptContainerElement *pFVar1;
  double *pdVar2;
  int iVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  TTransform<double> *pTVar8;
  uint uVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  double dVar12;
  double dVar13;
  undefined1 local_res8 [8];
  
  if (this->ChainInitialLength == Distance) {
    if ((this->ChainBoneIndices).ArrayNum < 1) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        dVar5 = (double)(*pcVar4)();
        return dVar5;
      }
    }
    pTVar8 = FCSPose<FCompactPose>::GetComponentSpaceTransform
                       (param_2,*(FCompactPoseBoneIndex *)
                                 (this->ChainBoneIndices).AllocatorInstance.Data);
    iVar3 = (this->ChainBoneIndices).ArrayNum;
    dVar5 = (pTVar8->Translation).XY.m128d_f64[0];
    dVar13 = (pTVar8->Translation).XY.m128d_f64[1];
    dVar12 = (pTVar8->Translation).ZW.m128d_f64[0];
    uVar9 = iVar3 - 1;
    uVar10 = 0;
    if ((int)uVar9 < iVar3) {
      uVar10 = ~uVar9 >> 0x1f;
    }
    if (uVar10 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        dVar5 = (double)(*pcVar4)();
        return dVar5;
      }
    }
    pTVar8 = FCSPose<FCompactPose>::GetComponentSpaceTransform
                       (param_2,*(FCompactPoseBoneIndex *)
                                 ((this->ChainBoneIndices).AllocatorInstance.Data +
                                 (longlong)(this->ChainBoneIndices).ArrayNum * 4 + -4));
    dVar5 = (pTVar8->Translation).XY.m128d_f64[0] - dVar5;
    dVar12 = (pTVar8->Translation).ZW.m128d_f64[0] - dVar12;
    dVar13 = (pTVar8->Translation).XY.m128d_f64[1] - dVar13;
    return SQRT(dVar13 * dVar13 + dVar5 * dVar5 + dVar12 * dVar12);
  }
  if (this->ChainInitialLength != ChainLength) {
    return (double)this->DefaultChainLength;
  }
  pFVar11 = (this->ChainBoneIndices).AllocatorInstance.Data;
  iVar3 = (this->ChainBoneIndices).ArrayNum;
  dVar5 = 0.0;
  pFVar1 = pFVar11 + (longlong)iVar3 * 4;
  while( true ) {
    if ((this->ChainBoneIndices).ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FCompactPoseBoneIndex_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar11 == pFVar1) break;
    uVar10 = *(uint *)pFVar11;
    uVar9 = 0;
    if ((int)uVar10 < *(int *)&param_1->field_0x8) {
      uVar9 = ~uVar10 >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        dVar5 = (double)(*pcVar4)();
        return dVar5;
      }
    }
    pFVar11 = pFVar11 + 4;
    pdVar2 = (double *)((longlong)(int)uVar10 * 0x60 + 0x20 + *(longlong *)param_1);
    dVar12 = *pdVar2;
    dVar13 = pdVar2[1];
    dVar6 = *(double *)((longlong)(int)uVar10 * 0x60 + 0x30 + *(longlong *)param_1);
    dVar5 = dVar5 + SQRT(dVar12 * dVar12 + dVar13 * dVar13 + dVar6 * dVar6);
  }
  return dVar5;
}

// Initialize_AnyThread @ 14645a570

void __thiscall
FAnimNode_ScaleChainLength::Initialize_AnyThread
          (FAnimNode_ScaleChainLength *this,FAnimationInitializeContext *param_1)

{
  FStatsHierarchical::BeginMeasurement("FAnimNode_ScaleChainLength::Initialize_AnyThread");
  FAnimNode_Base::Initialize_AnyThread((FAnimNode_Base *)this,param_1);
  FPoseLinkBase::Initialize((FPoseLinkBase *)&this->InputPose,param_1);
  FStatsHierarchical::EndMeasurement();
  return;
}

// Update_AnyThread @ 146478f90

void __thiscall
FAnimNode_ScaleChainLength::Update_AnyThread
          (FAnimNode_ScaleChainLength *this,FAnimationUpdateContext *param_1)

{
  FExposedValueHandler *this_00;
  float fVar1;
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_ScaleChainLength::Update_AnyThread");
  this_00 = FAnimNode_Base::GetEvaluateGraphExposedInputs((FAnimNode_Base *)this);
  FExposedValueHandler::Execute(this_00,(FAnimationBaseContext *)param_1);
  FPoseLinkBase::Update((FPoseLinkBase *)&this->InputPose,param_1);
  fVar1 = FInputScaleBias::ApplyTo(&this->AlphaScaleBias,this->Alpha);
  this->ActualAlpha = fVar1;
  FStatsHierarchical::EndMeasurement();
  return;
}

