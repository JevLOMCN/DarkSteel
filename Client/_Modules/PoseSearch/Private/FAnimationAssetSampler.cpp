// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 20

// FAnimationAssetSampler @ 14a8aa950

FAnimationAssetSampler * __thiscall
UE::PoseSearch::FAnimationAssetSampler::FAnimationAssetSampler
          (FAnimationAssetSampler *this,UAnimationAsset *param_1,TTransform<double> *param_2,
          TVector<double> *param_3,int param_4,bool param_5,bool param_6)

{
  undefined8 uVar1;
  
  (this->AnimationAssetPtr).WeakPtr = (FWeakObjectPtr)0x0;
  *&(this->RootTransformOrigin).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->RootTransformOrigin).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->RootTransformOrigin).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->RootTransformOrigin).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->RootTransformOrigin).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->RootTransformOrigin).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->BlendParameters).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->BlendParameters).field0_0x0._s_0.Y = (double)uVar1;
  (this->BlendParameters).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->AccumulatedRootTransform).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AccumulatedRootTransform).ArrayNum = 0;
  (this->AccumulatedRootTransform).ArrayMax = 0;
  this->RootTransformSamplingRate = 0x1e;
  this->CachedPlayLength = -1.0;
  this->ExtrapolationSampleTime = 0.033333335;
  this->ExtractionInterval = 0.008333334;
  this->bEnforceCompressedDataSampling = true;
  Init(this,param_1,param_2,param_3,param_4,param_5,param_6);
  return this;
}

// FAnimationAssetSampler @ 14a8aaa30

FAnimationAssetSampler * __thiscall
UE::PoseSearch::FAnimationAssetSampler::FAnimationAssetSampler(FAnimationAssetSampler *this)

{
  undefined8 uVar1;
  
  (this->AnimationAssetPtr).WeakPtr = (FWeakObjectPtr)0x0;
  *&(this->RootTransformOrigin).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->RootTransformOrigin).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->RootTransformOrigin).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->RootTransformOrigin).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->RootTransformOrigin).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->RootTransformOrigin).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->BlendParameters).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->BlendParameters).field0_0x0._s_0.Y = (double)uVar1;
  (this->BlendParameters).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->AccumulatedRootTransform).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AccumulatedRootTransform).ArrayNum = 0;
  (this->AccumulatedRootTransform).ArrayMax = 0;
  this->RootTransformSamplingRate = 0x1e;
  this->CachedPlayLength = -1.0;
  this->ExtrapolationSampleTime = 0.033333335;
  this->ExtractionInterval = 0.008333334;
  this->bEnforceCompressedDataSampling = true;
  Init(this,(UAnimationAsset *)0x0,&UE::Math::TTransform<double>::Identity,
       &UE::Math::TVector<double>::ZeroVector,0x1e,true,true);
  return this;
}

// ~FAnimationAssetSampler @ 14a8ad900

void __thiscall
UE::PoseSearch::FAnimationAssetSampler::~FAnimationAssetSampler(FAnimationAssetSampler *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->AccumulatedRootTransform).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ExtractAnimNotifyStates @ 14a8b4920

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::PoseSearch::FAnimationAssetSampler::ExtractAnimNotifyStates
          (FAnimationAssetSampler *this,float param_1,FAnimNotifyContext *param_2,
          TFunction<bool___cdecl(UAnimNotifyState_*)> *param_3)

{
  TArray<FAnimNotifyEventReference,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FAnimNotifyEventReference *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  ForAnyElementType FVar7;
  bool bVar8;
  char cVar9;
  uint uVar10;
  UBlendSpace *this_00;
  UClass *pUVar11;
  UAnimSequenceBase *this_01;
  undefined8 uVar12;
  longlong *plVar13;
  uint uVar14;
  longlong lVar15;
  FScriptContainerElement *pFVar16;
  float fVar17;
  int local_res8 [2];
  undefined1 local_res10 [8];
  float local_res18 [4];
  float local_88;
  FName local_84;
  longlong local_78;
  TArray<FBlendSampleData,TSizedDefaultAllocator<32>_> local_70;
  FString local_60 [2];
  
  pTVar1 = &param_2->ActiveNotifies;
  piVar2 = &(param_2->ActiveNotifies).ArrayMax;
  param_2->TickRecord = (FAnimTickRecord *)0x0;
  pFVar4 = (FAnimNotifyEventReference *)(pTVar1->AllocatorInstance).Data;
  iVar3 = (param_2->ActiveNotifies).ArrayNum;
  if (*piVar2 < 0) {
    DestructItems<FAnimNotifyEventReference,int>(pFVar4,iVar3);
    (param_2->ActiveNotifies).ArrayNum = 0;
    if (*piVar2 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,0,&pTVar1->AllocatorInstance,0,piVar2);
    }
  }
  else {
    DestructItems<FAnimNotifyEventReference,int>(pFVar4,iVar3);
    (param_2->ActiveNotifies).ArrayNum = 0;
  }
  this_00 = (UBlendSpace *)FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  if (this_00 != (UBlendSpace *)0x0) {
    pUVar11 = Z_Construct_UClass_UBlendSpace_NoRegister();
    iVar3 = (int)pUVar11->_padding_;
    if ((iVar3 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar3 * 8)
        == &pUVar11->_padding_)) {
      if ((this_00->NotifyTriggerMode).Value == '\x01') {
        local_70.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_70.ArrayNum = 0;
        local_70.ArrayMax = 0;
        local_res8[0] = 0;
        bVar8 = UBlendSpace::GetSamplesFromBlendInput
                          (this_00,&this->BlendParameters,&local_70,local_res8,true);
        if (bVar8) {
          uVar10 = GetHighestWeightSample(&local_70);
          uVar14 = 0;
          if ((int)uVar10 < local_70.ArrayNum) {
            uVar14 = ~uVar10 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          FVar7.Data = local_70.AllocatorInstance.Data;
          lVar15 = (longlong)(int)uVar10 * 0x60;
          if (*(longlong **)(local_70.AllocatorInstance.Data + lVar15 + 8) != (longlong *)0x0) {
            if (__real_38d1b717 < this->CachedPlayLength) {
              fVar17 = (float)(**(code **)(**(longlong **)
                                             (local_70.AllocatorInstance.Data + lVar15 + 8) + 0x2c0)
                              )();
              param_1 = (fVar17 / this->CachedPlayLength) * param_1;
            }
            local_res18[0] =
                 (float)(**(code **)(**(longlong **)(FVar7.Data + lVar15 + 8) + 0x2c0))();
            if (param_1 <= local_res18[0]) {
              local_res18[0] = param_1;
            }
            local_res18[0] = local_res18[0] - this->ExtractionInterval * __real_3f000000;
            UAnimSequenceBase::GetAnimNotifies
                      (*(UAnimSequenceBase **)(FVar7.Data + lVar15 + 8),local_res18,
                       &this->ExtractionInterval,param_2);
          }
        }
        DestructItems<FBlendSampleData,int>
                  ((FBlendSampleData *)local_70.AllocatorInstance.Data,local_70.ArrayNum);
        if ((FBlendSampleData *)local_70.AllocatorInstance.Data != (FBlendSampleData *)0x0) {
          FMemory::Free(local_70.AllocatorInstance.Data);
        }
      }
      else if (1 < (byte)LogPoseSearch._0_1_) {
        local_84 = (FName)this_00->_padding_;
        ::FName::ToString(&local_84,local_60);
        Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
        if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
        }
      }
      goto LAB_14a8b4bf0;
    }
  }
  this_01 = (UAnimSequenceBase *)FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  if (this_01 != (UAnimSequenceBase *)0x0) {
    pUVar11 = Z_Construct_UClass_UAnimSequenceBase_NoRegister();
    iVar3 = (int)pUVar11->_padding_;
    if ((iVar3 <= *(int *)(this_01->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar3 * 8)
        == &pUVar11->_padding_)) {
      local_88 = (float)(**(code **)(this_01->_padding_ + 0x2c0))(this_01);
      if (param_1 <= local_88) {
        local_88 = param_1;
      }
      local_88 = local_88 - this->ExtractionInterval * __real_3f000000;
      UAnimSequenceBase::GetAnimNotifies(this_01,&local_88,&this->ExtractionInterval,param_2);
      goto LAB_14a8b4bf0;
    }
  }
  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchAssetSampler.cpp"
                     ,699,L"");
  if (bVar8) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
LAB_14a8b4bf0:
  pFVar5 = (pTVar1->AllocatorInstance).Data;
  iVar3 = (param_2->ActiveNotifies).ArrayNum;
  pFVar16 = pFVar5 + 0x10;
  while( true ) {
    if ((param_2->ActiveNotifies).ArrayNum != iVar3) {
      `TCheckedPointerIterator<FAnimNotifyEventReference,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar16 + -0x10 == pFVar5 + (longlong)iVar3 * 0x30) break;
    if (((*(longlong *)(pFVar16 + 0x10) != 0) && (*(longlong *)pFVar16 != 0)) &&
       (lVar15 = *(longlong *)(*(longlong *)pFVar16 + 0x50), lVar15 != 0)) {
      local_78 = lVar15;
      Core::Private::Function::CheckCallable(*(void **)param_3);
      pcVar6 = *(code **)param_3;
      plVar13 = *(longlong **)&param_3->field_0x28;
      if (*(longlong **)&param_3->field_0x28 == (longlong *)0x0) {
        plVar13 = (longlong *)&param_3->field_0x10;
      }
      uVar12 = (**(code **)(*plVar13 + 8))();
      cVar9 = (*pcVar6)(uVar12,&local_78);
      if (cVar9 == '\0') {
        return;
      }
    }
    pFVar16 = pFVar16 + 0x30;
  }
  return;
}

// ExtractPose @ 14a8b5700

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::PoseSearch::FAnimationAssetSampler::ExtractPose
          (FAnimationAssetSampler *this,FAnimExtractContext *param_1,FAnimationPoseData *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  float fVar4;
  bool bVar5;
  UBlendSpace *this_00;
  UClass *pUVar6;
  UObject *pUVar7;
  FBaseCompactPose<TMemStackAllocator<0>_> *pFVar8;
  longlong lVar9;
  size_t _Size;
  float fVar10;
  int local_res8 [2];
  FName local_res20;
  TArray<FBlendSampleData,TSizedDefaultAllocator<32>_> local_118;
  double local_108;
  undefined1 local_100;
  undefined8 local_fc;
  undefined4 local_f4;
  undefined1 local_f0;
  ForAnyElementType local_e8;
  int local_e0;
  int local_dc;
  ForAnyElementType local_d8;
  int local_d0;
  int local_cc;
  EAnimInterpolationType local_c8;
  char local_c7;
  FName local_b8;
  FName local_b0;
  FString local_a8;
  FString local_98;
  FString local_88 [5];
  
  this_00 = (UBlendSpace *)FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  if (this_00 != (UBlendSpace *)0x0) {
    pUVar6 = Z_Construct_UClass_UBlendSpace_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar6->_padding_)) {
      local_118.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_118.ArrayNum = 0;
      local_118.ArrayMax = 0;
      local_res8[0] = 0;
      bVar5 = UBlendSpace::GetSamplesFromBlendInput
                        (this_00,&this->BlendParameters,&local_118,local_res8,true);
      if (bVar5) {
        bVar5 = param_1->bLooping;
        fVar10 = (float)param_1->CurrentTime;
        if ((__real_38d1b717 < this->CachedPlayLength) &&
           (pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)this), pUVar7 != (UObject *)0x0)) {
          pUVar6 = Z_Construct_UClass_UBlendSpace_NoRegister();
          fVar4 = __real_3f800000;
          iVar1 = (int)pUVar6->_padding_;
          if (((iVar1 <= *(int *)(*(longlong *)&pUVar7->field_0x10 + 0x38)) &&
              ((longlong *)
               *(undefined1 **)
                (*(longlong *)(*(longlong *)&pUVar7->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
               &pUVar6->_padding_)) &&
             ((fVar10 = fVar10 / this->CachedPlayLength, fVar10 < 0.0 || (__real_3f800000 < fVar10))
             )) {
            if (1 < (byte)LogPoseSearch._0_1_) {
              pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)this);
              local_res20.ComparisonIndex.Value = *(uint *)&pUVar7->field_0x18;
              local_res20.Number = *(uint *)&pUVar7->field_0x1c;
              ::FName::ToString(&local_res20,&local_a8);
              Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
              if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_a8.Data.AllocatorInstance.Data);
              }
            }
            if (fVar4 <= fVar10) {
              fVar10 = fVar4;
            }
            if (fVar10 <= 0.0) {
              fVar10 = 0.0;
            }
          }
        }
        UBlendSpace::ResetBlendSamples(this_00,&local_118,fVar10,bVar5,true);
        UBlendSpace::GetAnimationPose(this_00,&local_118,param_1,param_2);
      }
      else {
        if (1 < (byte)LogPoseSearch._0_1_) {
          local_b8 = (FName)this_00->_padding_;
          ::FName::ToString(&local_b8,&local_98);
          Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
          if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_98.Data.AllocatorInstance.Data);
          }
        }
        pFVar8 = (FBaseCompactPose<TMemStackAllocator<0>_> *)FAnimationPoseData::GetPose(param_2);
        FBaseCompactPose<TMemStackAllocator<0>_>::ResetToRefPose(pFVar8,pFVar8->BoneContainer);
      }
      DestructItems<FBlendSampleData,int>
                ((FBlendSampleData *)local_118.AllocatorInstance.Data,local_118.ArrayNum);
      if ((FBlendSampleData *)local_118.AllocatorInstance.Data == (FBlendSampleData *)0x0) {
        return;
      }
      FMemory::Free(local_118.AllocatorInstance.Data);
      return;
    }
  }
  pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  if (pUVar7 != (UObject *)0x0) {
    pUVar6 = Z_Construct_UClass_UAnimMontage_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar7->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar7->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar6->_padding_)) {
      if (*(int *)(pUVar7 + 9) == 1) {
        if ((*(int *)(pUVar7 + 9) < 1) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FAnimTrack::GetAnimationPose
                  ((FAnimTrack *)(*(longlong *)&pUVar7[8].field_0x20 + 8),param_2,param_1);
        return;
      }
      if (1 < (byte)LogPoseSearch._0_1_) {
        local_b0.ComparisonIndex.Value = *(uint *)&pUVar7->field_0x18;
        local_b0.Number = *(uint *)&pUVar7->field_0x1c;
        ::FName::ToString(&local_b0,local_88);
        Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
        if (local_88[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88[0].Data.AllocatorInstance.Data);
        }
      }
      goto LAB_14a8b5a5e;
    }
  }
  pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  if (pUVar7 == (UObject *)0x0) {
LAB_14a8b5b0e:
    pUVar7 = (UObject *)0x0;
  }
  else {
    pUVar6 = Z_Construct_UClass_UAnimSequenceBase_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((*(int *)(*(longlong *)&pUVar7->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar7->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar6->_padding_)) goto LAB_14a8b5b0e;
  }
  if (pUVar7 != (UObject *)0x0) {
    local_100 = param_1->bExtractRootMotion;
    local_108 = param_1->CurrentTime;
    local_e0 = (param_1->PoseCurves).ArrayNum;
    lVar9 = (longlong)local_e0;
    pFVar2 = (param_1->PoseCurves).AllocatorInstance.Data;
    local_f4 = *(undefined4 *)&(param_1->DeltaTimeRecord).bPreviousIsValid;
    local_f0 = param_1->bLooping;
    local_fc._0_4_ = (param_1->DeltaTimeRecord).Delta;
    local_fc._4_4_ = (param_1->DeltaTimeRecord).Previous;
    local_e8.Data = (FScriptContainerElement *)0x0;
    if (local_e0 == 0) {
      local_dc = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,local_e0,0,&local_e8,local_e0,&local_dc);
      memcpy(local_e8.Data,pFVar2,lVar9 << 4);
    }
    local_d0 = (param_1->BonesRequired).ArrayNum;
    _Size = (size_t)local_d0;
    pFVar2 = (param_1->BonesRequired).AllocatorInstance.Data;
    local_d8.Data = (FScriptContainerElement *)0x0;
    if (local_d0 == 0) {
      local_cc = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,local_d0,0,&local_d8,local_d0,&local_cc);
      memcpy(local_d8.Data,pFVar2,_Size);
    }
    local_c7 = (param_1->InterpolationOverride).bIsSet;
    if ((bool)local_c7 != false) {
      local_c8 = (param_1->InterpolationOverride).TypedValue;
    }
    (**(code **)(*(longlong *)pUVar7 + 0x330))(pUVar7,param_2,&local_108);
    if (local_d8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data);
    }
    if (local_e8.Data == (FScriptContainerElement *)0x0) {
      return;
    }
    FMemory::Free(local_e8.Data);
    return;
  }
LAB_14a8b5a5e:
  pFVar8 = (FBaseCompactPose<TMemStackAllocator<0>_> *)FAnimationPoseData::GetPose(param_2);
  FBaseCompactPose<TMemStackAllocator<0>_>::ResetToRefPose(pFVar8,pFVar8->BoneContainer);
  return;
}

// ExtractPose @ 14a8b5c50

void __thiscall
UE::PoseSearch::FAnimationAssetSampler::ExtractPose
          (FAnimationAssetSampler *this,float param_1,FCompactPose *param_2)

{
  TArray<int,TSizedDefaultAllocator<32>_> *local_e8;
  undefined8 local_e0;
  TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *local_d8;
  undefined8 local_d0;
  TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_> *local_c8;
  undefined8 local_c0;
  void *local_b8;
  undefined8 local_b0;
  FAnimExtractContext local_a8;
  FBlendedCurve local_58;
  FAnimationPoseData local_38 [2];
  
  local_e8 = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
  local_e0 = 0;
  local_d8 = (TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)0x0;
  local_d0 = 0;
  local_c8 = (TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>
              *)0x0;
  local_c0 = 0;
  local_b8 = (void *)0x0;
  local_b0 = 0;
  local_58._0_8_ = 0;
  local_58._8_8_ = 0;
  local_58._16_1_ = 0;
  local_58._24_8_ = 0;
  FBlendedCurve::InitFrom(&local_58,*(FBoneContainer **)&param_2->field_0x10);
  FAnimationPoseData::FAnimationPoseData
            (local_38,param_2,&local_58,(FStackAttributeContainer *)&local_e8);
  local_a8.bLooping = IsLoopable(this);
  local_a8.DeltaTimeRecord._9_2_ = local_38[0].Curve._1_2_;
  local_a8.CurrentTime = (double)param_1;
  local_a8.DeltaTimeRecord._11_1_ = local_38[0].Curve._3_1_;
  local_a8.bExtractRootMotion = false;
  local_a8.DeltaTimeRecord.Delta = 0.0;
  local_a8.DeltaTimeRecord.bPreviousIsValid = true;
  local_a8.PoseCurves.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.PoseCurves.ArrayNum = 0;
  local_a8.PoseCurves.ArrayMax = 0;
  local_a8.BonesRequired.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.BonesRequired.ArrayNum = 0;
  local_a8.BonesRequired.ArrayMax = 0;
  local_a8.InterpolationOverride.bIsSet = false;
  local_a8.DeltaTimeRecord.Previous = param_1;
  ExtractPose(this,&local_a8,local_38);
  if (local_a8.BonesRequired.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.BonesRequired.AllocatorInstance.Data);
  }
  if (local_a8.PoseCurves.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.PoseCurves.AllocatorInstance.Data);
  }
  if (local_b8 != (void *)0x0) {
    FMemory::Free(local_b8);
  }
  DestructItems<TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>,int>
            (local_c8,(int)local_c0);
  if (local_c8 !=
      (TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_> *)0x0
     ) {
    FMemory::Free(local_c8);
  }
  DestructItems<TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>,int>
            (local_d8,(int)local_d0);
  if (local_d8 != (TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_d8);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>(local_e8,(int)local_e0);
  if (local_e8 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_e8);
  }
  return;
}

// ExtractPose @ 14a8b5dd0

void __thiscall
UE::PoseSearch::FAnimationAssetSampler::ExtractPose
          (FAnimationAssetSampler *this,float param_1,FCompactPose *param_2,FBlendedCurve *param_3)

{
  TArray<int,TSizedDefaultAllocator<32>_> *local_c8;
  undefined8 local_c0;
  TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *local_b8;
  undefined8 local_b0;
  TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_> *local_a8;
  undefined8 local_a0;
  void *local_98;
  undefined8 local_90;
  FAnimExtractContext local_88;
  FAnimationPoseData local_38 [2];
  
  local_c8 = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
  local_c0 = 0;
  local_b8 = (TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)0x0;
  local_b0 = 0;
  local_a8 = (TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>
              *)0x0;
  local_a0 = 0;
  local_98 = (void *)0x0;
  local_90 = 0;
  FBlendedCurve::InitFrom(param_3,*(FBoneContainer **)&param_2->field_0x10);
  FAnimationPoseData::FAnimationPoseData
            (local_38,param_2,param_3,(FStackAttributeContainer *)&local_c8);
  local_88.bLooping = IsLoopable(this);
  local_88.DeltaTimeRecord._9_2_ = local_38[0].Curve._1_2_;
  local_88.CurrentTime = (double)param_1;
  local_88.DeltaTimeRecord._11_1_ = local_38[0].Curve._3_1_;
  local_88.bExtractRootMotion = false;
  local_88.DeltaTimeRecord.Delta = 0.0;
  local_88.DeltaTimeRecord.bPreviousIsValid = true;
  local_88.PoseCurves.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.PoseCurves.ArrayNum = 0;
  local_88.PoseCurves.ArrayMax = 0;
  local_88.BonesRequired.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.BonesRequired.ArrayNum = 0;
  local_88.BonesRequired.ArrayMax = 0;
  local_88.InterpolationOverride.bIsSet = false;
  local_88.DeltaTimeRecord.Previous = param_1;
  ExtractPose(this,&local_88,local_38);
  if (local_88.BonesRequired.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.BonesRequired.AllocatorInstance.Data);
  }
  if (local_88.PoseCurves.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.PoseCurves.AllocatorInstance.Data);
  }
  if (local_98 != (void *)0x0) {
    FMemory::Free(local_98);
  }
  DestructItems<TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>,int>
            (local_a8,(int)local_a0);
  if (local_a8 !=
      (TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_> *)0x0
     ) {
    FMemory::Free(local_a8);
  }
  DestructItems<TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>,int>
            (local_b8,(int)local_b0);
  if (local_b8 != (TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_b8);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>(local_c8,(int)local_c0);
  if (local_c8 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_c8);
  }
  return;
}

// ExtractPoseSearchNotifyStates @ 14a8b5f40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::PoseSearch::FAnimationAssetSampler::ExtractPoseSearchNotifyStates
          (FAnimationAssetSampler *this,float param_1,
          TFunction<bool___cdecl(UAnimNotifyState_PoseSearchBase_*)> *param_2)

{
  undefined ***pppuVar1;
  undefined1 auStack_88 [32];
  FAnimNotifyContext local_68;
  code *local_48 [2];
  undefined **local_38;
  TFunction<bool___cdecl(UAnimNotifyState_PoseSearchBase_*)> *local_30;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_20 = (undefined ***)0x0;
  local_68.TickRecord = (FAnimTickRecord *)0x0;
  local_68.ActiveNotifies.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ActiveNotifies.ArrayNum = 0;
  local_68.ActiveNotifies.ArrayMax = 0;
  local_38 = &Core::Private::Function::
              TFunction_OwnedObject<`UE::PoseSearch::FAnimationAssetSampler::ExtractPoseSearchNotifyStates'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_48[0] = Core::Private::Function::
                TFunctionRefCaller<`UE::PoseSearch::FAnimationAssetSampler::ExtractPoseSearchNotifyStates'::__l2::<lambda_1>,bool,UAnimNotifyState_*>
                ::Call;
  local_30 = param_2;
  ExtractAnimNotifyStates
            (this,param_1,&local_68,(TFunction<bool___cdecl(UAnimNotifyState_*)> *)local_48);
  if (local_48[0] != (code *)0x0) {
    pppuVar1 = &local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar1 = local_20;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  DestructItems<FAnimNotifyEventReference,int>
            ((FAnimNotifyEventReference *)local_68.ActiveNotifies.AllocatorInstance.Data,
             local_68.ActiveNotifies.ArrayNum);
  if ((FAnimNotifyEventReference *)local_68.ActiveNotifies.AllocatorInstance.Data !=
      (FAnimNotifyEventReference *)0x0) {
    FMemory::Free(local_68.ActiveNotifies.AllocatorInstance.Data);
  }
  return;
}

// ExtractRootTransform @ 14a8b64b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTransform<double> * __thiscall
UE::PoseSearch::FAnimationAssetSampler::ExtractRootTransform
          (FAnimationAssetSampler *this,TTransform<double> *__return_storage_ptr__,float param_1)

{
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [11];
  undefined1 auVar11 [12];
  __m128d _Var12;
  bool bVar13;
  bool bVar14;
  UObject *pUVar15;
  UClass *pUVar16;
  TTransform<double> *pTVar17;
  UAnimMontage *pUVar18;
  double (*padVar19) [2];
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auStackY_308 [32];
  undefined2 local_2bf;
  undefined1 local_2bd;
  TTransform<double> local_2b8;
  undefined1 local_258 [16];
  __m128d local_248;
  __m128d local_238;
  __m128d local_228;
  __m128d local_218;
  __m128d local_208;
  TTransform<double> local_1f8;
  TTransform<double> local_198;
  TTransform<double> local_138;
  TTransform<double> local_d8;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_308;
  local_2b8.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  local_2b8.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  local_2b8.Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  local_2b8.Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  local_2b8.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  local_2b8.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  pUVar15 = FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  if (pUVar15 != (UObject *)0x0) {
    pUVar16 = Z_Construct_UClass_UBlendSpace_NoRegister();
    iVar2 = (int)pUVar16->_padding_;
    if ((iVar2 <= *(int *)(*(longlong *)&pUVar15->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar15->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
        &pUVar16->_padding_)) {
      pTVar1 = &this->AccumulatedRootTransform;
      bVar13 = IsLoopable(this);
      iVar2 = this->RootTransformSamplingRate;
      if (bVar13) {
        pTVar17 = ExtractBlendSpaceRootMotion
                            (&local_d8,0.0,param_1,true,this->CachedPlayLength,pTVar1,iVar2);
        local_2b8.Rotation.XY.m128d_f64 = *&(pTVar17->Rotation).XY.m128d_f64;
        local_2b8.Rotation.ZW.m128d_f64 = *&(pTVar17->Rotation).ZW.m128d_f64;
        local_2b8.Translation.XY.m128d_f64 = *&(pTVar17->Translation).XY.m128d_f64;
        local_2b8.Translation.ZW.m128d_f64 = *&(pTVar17->Translation).ZW.m128d_f64;
        local_2b8.Scale3D.XY.m128d_f64 = *&(pTVar17->Scale3D).XY.m128d_f64;
        local_2b8.Scale3D.ZW.m128d_f64 = *&(pTVar17->Scale3D).ZW.m128d_f64;
      }
      else {
        fVar20 = param_1;
        if (this->CachedPlayLength <= param_1) {
          fVar20 = this->CachedPlayLength;
        }
        if (fVar20 <= 0.0) {
          fVar20 = 0.0;
        }
        fVar21 = param_1 - fVar20;
        if (__real_b22bcc77 <= fVar21) {
          pTVar17 = ExtractBlendSpaceRootMotionFromRange(&local_d8,0.0,fVar20,pTVar1,iVar2);
          local_2b8.Rotation.XY.m128d_f64 = *&(pTVar17->Rotation).XY.m128d_f64;
          local_2b8.Rotation.ZW.m128d_f64 = *&(pTVar17->Rotation).ZW.m128d_f64;
          local_2b8.Translation.XY.m128d_f64 = *&(pTVar17->Translation).XY.m128d_f64;
          local_2b8.Translation.ZW.m128d_f64 = *&(pTVar17->Translation).ZW.m128d_f64;
          local_2b8.Scale3D.XY.m128d_f64 = *&(pTVar17->Scale3D).XY.m128d_f64;
          local_2b8.Scale3D.ZW.m128d_f64 = *&(pTVar17->Scale3D).ZW.m128d_f64;
          if (__real_322bcc77 < fVar21) {
            ExtractBlendSpaceRootMotionFromRange
                      (&local_198,this->CachedPlayLength - this->ExtrapolationSampleTime,
                       this->CachedPlayLength,pTVar1,this->RootTransformSamplingRate);
            local_1f8.Rotation.XY.m128d_f64[1] = local_198.Rotation.XY.m128d_f64[1];
            local_1f8.Rotation.XY.m128d_f64[0] = local_198.Rotation.XY.m128d_f64[0];
            local_1f8.Rotation.ZW.m128d_f64[1] = local_198.Rotation.ZW.m128d_f64[1];
            local_1f8.Rotation.ZW.m128d_f64[0] = local_198.Rotation.ZW.m128d_f64[0];
            local_1f8.Translation.XY.m128d_f64[1] = local_198.Translation.XY.m128d_f64[1];
            local_1f8.Translation.XY.m128d_f64[0] = local_198.Translation.XY.m128d_f64[0];
            local_1f8.Translation.ZW.m128d_f64[1] = local_198.Translation.ZW.m128d_f64[1];
            local_1f8.Translation.ZW.m128d_f64[0] = local_198.Translation.ZW.m128d_f64[0];
            local_1f8.Scale3D.XY.m128d_f64[1] = local_198.Scale3D.XY.m128d_f64[1];
            local_1f8.Scale3D.XY.m128d_f64[0] = local_198.Scale3D.XY.m128d_f64[0];
            local_1f8.Scale3D.ZW.m128d_f64[1] = local_198.Scale3D.ZW.m128d_f64[1];
            local_1f8.Scale3D.ZW.m128d_f64[0] = local_198.Scale3D.ZW.m128d_f64[0];
            ExtrapolateRootMotion
                      (&local_138,&local_1f8,this->CachedPlayLength - this->ExtrapolationSampleTime,
                       this->CachedPlayLength,fVar21);
            local_258._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
            local_258._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
            local_258._12_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
            local_248.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
            local_248.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
            local_248.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
            local_238.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
            local_238.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
            local_238.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
            local_228.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
            local_228.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
            local_228.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
            local_218.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
            local_218.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
            local_218.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
            local_208.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
            local_208.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
            local_208.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
            UE::Math::TTransform<double>::Multiply
                      ((TTransform<double> *)local_258,&local_138,&local_2b8);
            local_2b8.Rotation.XY.m128d_f64[0] = (double)local_258._0_8_;
            local_2b8.Rotation.XY.m128d_f64[1] = (double)local_258._8_8_;
            local_2b8.Rotation.ZW.m128d_f64[0] = local_248.m128d_f64[0];
            local_2b8.Rotation.ZW.m128d_f64[1] = local_248.m128d_f64[1];
            local_2b8.Translation.XY.m128d_f64[0] = local_238.m128d_f64[0];
            local_2b8.Translation.XY.m128d_f64[1] = local_238.m128d_f64[1];
            local_2b8.Translation.ZW.m128d_f64[0] = local_228.m128d_f64[0];
            local_2b8.Translation.ZW.m128d_f64[1] = local_228.m128d_f64[1];
            local_2b8.Scale3D.XY.m128d_f64[0] = local_218.m128d_f64[0];
            local_2b8.Scale3D.XY.m128d_f64[1] = local_218.m128d_f64[1];
            local_2b8.Scale3D.ZW.m128d_f64[0] = local_208.m128d_f64[0];
            local_2b8.Scale3D.ZW.m128d_f64[1] = local_208.m128d_f64[1];
          }
        }
        else {
          ExtractBlendSpaceRootMotionFromRange
                    (&local_1f8,0.0,this->ExtrapolationSampleTime,pTVar1,iVar2);
          local_258._0_8_ = local_1f8.Rotation.XY.m128d_f64[0];
          local_258._8_8_ = local_1f8.Rotation.XY.m128d_f64[1];
          local_248.m128d_f64[0] = local_1f8.Rotation.ZW.m128d_f64[0];
          local_248.m128d_f64[1] = local_1f8.Rotation.ZW.m128d_f64[1];
          local_238.m128d_f64[0] = local_1f8.Translation.XY.m128d_f64[0];
          local_238.m128d_f64[1] = local_1f8.Translation.XY.m128d_f64[1];
          local_228.m128d_f64[0] = local_1f8.Translation.ZW.m128d_f64[0];
          local_228.m128d_f64[1] = local_1f8.Translation.ZW.m128d_f64[1];
          local_218.m128d_f64[0] = local_1f8.Scale3D.XY.m128d_f64[0];
          local_218.m128d_f64[1] = local_1f8.Scale3D.XY.m128d_f64[1];
          local_208.m128d_f64[0] = local_1f8.Scale3D.ZW.m128d_f64[0];
          local_208.m128d_f64[1] = local_1f8.Scale3D.ZW.m128d_f64[1];
          ExtrapolateRootMotion
                    (&local_198,(TTransform<double> *)local_258,0.0,this->ExtrapolationSampleTime,
                     fVar21);
          local_2b8.Rotation.XY.m128d_f64[1] = local_198.Rotation.XY.m128d_f64[1];
          local_2b8.Rotation.XY.m128d_f64[0] = local_198.Rotation.XY.m128d_f64[0];
          local_2b8.Rotation.ZW.m128d_f64[1] = local_198.Rotation.ZW.m128d_f64[1];
          local_2b8.Rotation.ZW.m128d_f64[0] = local_198.Rotation.ZW.m128d_f64[0];
          local_2b8.Translation.XY.m128d_f64[1] = local_198.Translation.XY.m128d_f64[1];
          local_2b8.Translation.XY.m128d_f64[0] = local_198.Translation.XY.m128d_f64[0];
          local_2b8.Translation.ZW.m128d_f64[1] = local_198.Translation.ZW.m128d_f64[1];
          local_2b8.Translation.ZW.m128d_f64[0] = local_198.Translation.ZW.m128d_f64[0];
          local_2b8.Scale3D.XY.m128d_f64[1] = local_198.Scale3D.XY.m128d_f64[1];
          local_2b8.Scale3D.XY.m128d_f64[0] = local_198.Scale3D.XY.m128d_f64[0];
          local_2b8.Scale3D.ZW.m128d_f64[1] = local_198.Scale3D.ZW.m128d_f64[1];
          local_2b8.Scale3D.ZW.m128d_f64[0] = local_198.Scale3D.ZW.m128d_f64[0];
        }
      }
      goto LAB_14a8b6e6b;
    }
  }
  pUVar18 = (UAnimMontage *)FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  if (pUVar18 != (UAnimMontage *)0x0) {
    pUVar16 = Z_Construct_UClass_UAnimMontage_NoRegister();
    iVar2 = (int)pUVar16->_padding_;
    if ((iVar2 <= *(int *)(pUVar18->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar18->_padding_ + 0x30) + (longlong)iVar2 * 8)
        == &pUVar16->_padding_)) {
      bVar14 = IsLoopable(this);
      bVar13 = this->bEnforceCompressedDataSampling;
      if (bVar14) {
        pTVar17 = ExtractRootTransformInternal(&local_d8,pUVar18,0.0,param_1,bVar13);
        local_2b8.Rotation.XY.m128d_f64 = *&(pTVar17->Rotation).XY.m128d_f64;
        local_2b8.Rotation.ZW.m128d_f64 = *&(pTVar17->Rotation).ZW.m128d_f64;
        local_2b8.Translation.XY.m128d_f64 = *&(pTVar17->Translation).XY.m128d_f64;
        local_2b8.Translation.ZW.m128d_f64 = *&(pTVar17->Translation).ZW.m128d_f64;
        local_2b8.Scale3D.XY.m128d_f64 = *&(pTVar17->Scale3D).XY.m128d_f64;
        local_2b8.Scale3D.ZW.m128d_f64 = *&(pTVar17->Scale3D).ZW.m128d_f64;
      }
      else {
        fVar20 = this->CachedPlayLength;
        fVar21 = param_1;
        if (fVar20 <= param_1) {
          fVar21 = fVar20;
        }
        if (fVar21 <= 0.0) {
          fVar21 = 0.0;
        }
        fVar22 = param_1 - fVar21;
        if (__real_b22bcc77 <= fVar22) {
          pTVar17 = ExtractRootTransformInternal(&local_d8,pUVar18,0.0,fVar21,bVar13);
          local_2b8.Rotation.XY.m128d_f64 = *&(pTVar17->Rotation).XY.m128d_f64;
          local_2b8.Rotation.ZW.m128d_f64 = *&(pTVar17->Rotation).ZW.m128d_f64;
          local_2b8.Translation.XY.m128d_f64 = *&(pTVar17->Translation).XY.m128d_f64;
          local_2b8.Translation.ZW.m128d_f64 = *&(pTVar17->Translation).ZW.m128d_f64;
          local_2b8.Scale3D.XY.m128d_f64 = *&(pTVar17->Scale3D).XY.m128d_f64;
          local_2b8.Scale3D.ZW.m128d_f64 = *&(pTVar17->Scale3D).ZW.m128d_f64;
          if (fVar22 <= __real_322bcc77) goto LAB_14a8b6e6b;
          ExtractRootTransformInternal
                    (&local_198,pUVar18,fVar20 - this->ExtrapolationSampleTime,fVar20,
                     this->bEnforceCompressedDataSampling);
          local_1f8.Rotation.XY.m128d_f64[1] = local_198.Rotation.XY.m128d_f64[1];
          local_1f8.Rotation.XY.m128d_f64[0] = local_198.Rotation.XY.m128d_f64[0];
          local_1f8.Rotation.ZW.m128d_f64[1] = local_198.Rotation.ZW.m128d_f64[1];
          local_1f8.Rotation.ZW.m128d_f64[0] = local_198.Rotation.ZW.m128d_f64[0];
          local_1f8.Translation.XY.m128d_f64[1] = local_198.Translation.XY.m128d_f64[1];
          local_1f8.Translation.XY.m128d_f64[0] = local_198.Translation.XY.m128d_f64[0];
          local_1f8.Translation.ZW.m128d_f64[1] = local_198.Translation.ZW.m128d_f64[1];
          local_1f8.Translation.ZW.m128d_f64[0] = local_198.Translation.ZW.m128d_f64[0];
          local_1f8.Scale3D.XY.m128d_f64[1] = local_198.Scale3D.XY.m128d_f64[1];
          local_1f8.Scale3D.XY.m128d_f64[0] = local_198.Scale3D.XY.m128d_f64[0];
          local_1f8.Scale3D.ZW.m128d_f64[1] = local_198.Scale3D.ZW.m128d_f64[1];
          local_1f8.Scale3D.ZW.m128d_f64[0] = local_198.Scale3D.ZW.m128d_f64[0];
          ExtrapolateRootMotion
                    (&local_138,&local_1f8,fVar20 - this->ExtrapolationSampleTime,fVar20,fVar22);
          local_258._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
          local_258._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
          local_258._12_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
          local_248.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
          local_248.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
          local_248.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
          local_238.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
          local_238.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          local_238.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
          local_228.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
          local_228.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
          local_228.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
          local_218.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
          local_218.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          local_218.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
          local_208.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
          local_208.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          local_208.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
          UE::Math::TTransform<double>::Multiply
                    ((TTransform<double> *)local_258,&local_138,&local_2b8);
        }
        else {
          ExtractRootTransformInternal(&local_198,pUVar18,0.0,this->ExtrapolationSampleTime,bVar13);
          local_1f8.Rotation.XY.m128d_f64[1] = local_198.Rotation.XY.m128d_f64[1];
          local_1f8.Rotation.XY.m128d_f64[0] = local_198.Rotation.XY.m128d_f64[0];
          local_1f8.Rotation.ZW.m128d_f64[1] = local_198.Rotation.ZW.m128d_f64[1];
          local_1f8.Rotation.ZW.m128d_f64[0] = local_198.Rotation.ZW.m128d_f64[0];
          local_1f8.Translation.XY.m128d_f64[1] = local_198.Translation.XY.m128d_f64[1];
          local_1f8.Translation.XY.m128d_f64[0] = local_198.Translation.XY.m128d_f64[0];
          local_1f8.Translation.ZW.m128d_f64[1] = local_198.Translation.ZW.m128d_f64[1];
          local_1f8.Translation.ZW.m128d_f64[0] = local_198.Translation.ZW.m128d_f64[0];
          local_1f8.Scale3D.XY.m128d_f64[1] = local_198.Scale3D.XY.m128d_f64[1];
          local_1f8.Scale3D.XY.m128d_f64[0] = local_198.Scale3D.XY.m128d_f64[0];
          local_1f8.Scale3D.ZW.m128d_f64[1] = local_198.Scale3D.ZW.m128d_f64[1];
          local_1f8.Scale3D.ZW.m128d_f64[0] = local_198.Scale3D.ZW.m128d_f64[0];
          ExtrapolateRootMotion
                    ((TTransform<double> *)local_258,&local_1f8,0.0,this->ExtrapolationSampleTime,
                     fVar22);
        }
        local_2b8.Rotation.XY.m128d_f64[0] = (double)local_258._0_8_;
        local_2b8.Rotation.XY.m128d_f64[1] = (double)local_258._8_8_;
        local_2b8.Rotation.ZW.m128d_f64[0] = local_248.m128d_f64[0];
        local_2b8.Rotation.ZW.m128d_f64[1] = local_248.m128d_f64[1];
        local_2b8.Translation.XY.m128d_f64[0] = local_238.m128d_f64[0];
        local_2b8.Translation.XY.m128d_f64[1] = local_238.m128d_f64[1];
        local_2b8.Translation.ZW.m128d_f64[0] = local_228.m128d_f64[0];
        local_2b8.Translation.ZW.m128d_f64[1] = local_228.m128d_f64[1];
        local_2b8.Scale3D.XY.m128d_f64[0] = local_218.m128d_f64[0];
        local_2b8.Scale3D.XY.m128d_f64[1] = local_218.m128d_f64[1];
        local_2b8.Scale3D.ZW.m128d_f64[0] = local_208.m128d_f64[0];
        local_2b8.Scale3D.ZW.m128d_f64[1] = local_208.m128d_f64[1];
      }
      goto LAB_14a8b6e6b;
    }
  }
  pUVar15 = FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  if (pUVar15 == (UObject *)0x0) {
LAB_14a8b6b0c:
    pUVar15 = (UObject *)0x0;
  }
  else {
    pUVar16 = Z_Construct_UClass_UAnimSequenceBase_NoRegister();
    iVar2 = (int)pUVar16->_padding_;
    if ((*(int *)(*(longlong *)&pUVar15->field_0x10 + 0x38) < iVar2) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar15->field_0x10 + 0x30) + (longlong)iVar2 * 8) !=
        &pUVar16->_padding_)) goto LAB_14a8b6b0c;
  }
  _Var12.m128d_f64 = local_248.m128d_f64;
  if (pUVar15 == (UObject *)0x0) goto LAB_14a8b6e6b;
  auVar10._2_9_ = local_248.m128d_f64._7_9_;
  auVar10._0_2_ = local_2bf;
  local_248.m128d_f64[0]._0_7_ = auVar10._0_7_ << 0x28;
  local_248.m128d_f64[1] = _Var12.m128d_f64[1];
  local_248.m128d_f64[0]._7_1_ = local_2bd;
  auVar11._8_4_ = 0;
  auVar11._0_8_ = local_258._8_8_;
  local_258._0_12_ = auVar11 << 0x40;
  local_258._12_4_ = param_1;
  local_258._0_9_ = (unkuint9)1 << 0x40;
  local_248.m128d_f64[0] = (double)(local_248.m128d_f64._5_8_ << 0x28);
  local_248.m128d_f64[1]._1_7_ = _Var12.m128d_f64[1]._1_7_;
  local_248.m128d_f64[1]._0_1_ = 1;
  local_238.m128d_f64 = (double  [2])ZEXT816(0);
  local_228.m128d_f64 = (double  [2])ZEXT816(0);
  local_218.m128d_f64[0]._0_2_ = (ushort)local_218.m128d_f64[0]._0_1_;
  bVar13 = IsLoopable(this);
  if (bVar13) {
    padVar19 = (double (*) [2])
               (**(code **)(*(longlong *)pUVar15 + 0x348))(pUVar15,&local_d8,local_258);
    local_2b8.Rotation.XY.m128d_f64 = *padVar19;
    local_2b8.Rotation.ZW.m128d_f64 = padVar19[1];
    local_2b8.Translation.XY.m128d_f64 = padVar19[2];
    local_2b8.Translation.ZW.m128d_f64 = padVar19[3];
    local_2b8.Scale3D.XY.m128d_f64 = padVar19[4];
    local_2b8.Scale3D.ZW.m128d_f64 = padVar19[5];
  }
  else {
    pcVar3 = *(code **)(*(longlong *)pUVar15 + 0x358);
    fVar20 = this->CachedPlayLength;
    fVar21 = param_1;
    if (fVar20 <= param_1) {
      fVar21 = fVar20;
    }
    if (fVar21 <= 0.0) {
      fVar21 = 0.0;
    }
    fVar22 = param_1 - fVar21;
    if (__real_b22bcc77 <= fVar22) {
      padVar19 = (double (*) [2])(*pcVar3)(pUVar15,&local_d8,pcVar3,(double)fVar21);
      local_2b8.Rotation.XY.m128d_f64 = *padVar19;
      local_2b8.Rotation.ZW.m128d_f64 = padVar19[1];
      local_2b8.Translation.XY.m128d_f64 = padVar19[2];
      local_2b8.Translation.ZW.m128d_f64 = padVar19[3];
      local_2b8.Scale3D.XY.m128d_f64 = padVar19[4];
      local_2b8.Scale3D.ZW.m128d_f64 = padVar19[5];
      if (fVar22 <= __real_322bcc77) goto LAB_14a8b6e3e;
      (**(code **)(*(longlong *)pUVar15 + 0x358))
                (pUVar15,&local_138,(double)(fVar20 - this->ExtrapolationSampleTime),(double)fVar20)
      ;
      local_198.Rotation.XY.m128d_f64[0] = local_138.Rotation.XY.m128d_f64[0];
      local_198.Rotation.XY.m128d_f64[1] = local_138.Rotation.XY.m128d_f64[1];
      local_198.Rotation.ZW.m128d_f64[0] = local_138.Rotation.ZW.m128d_f64[0];
      local_198.Rotation.ZW.m128d_f64[1] = local_138.Rotation.ZW.m128d_f64[1];
      local_198.Translation.XY.m128d_f64[0] = local_138.Translation.XY.m128d_f64[0];
      local_198.Translation.XY.m128d_f64[1] = local_138.Translation.XY.m128d_f64[1];
      local_198.Translation.ZW.m128d_f64[0] = local_138.Translation.ZW.m128d_f64[0];
      local_198.Translation.ZW.m128d_f64[1] = local_138.Translation.ZW.m128d_f64[1];
      ExtrapolateRootMotion
                (&local_d8,&local_198,fVar20 - this->ExtrapolationSampleTime,fVar20,fVar22);
      local_1f8.Rotation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      local_1f8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_1f8.Rotation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
      local_1f8.Rotation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      local_1f8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_1f8.Rotation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
      local_1f8.Translation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_1f8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_1f8.Translation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_1f8.Translation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
      local_1f8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_1f8.Translation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
      local_1f8.Scale3D.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_1f8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_1f8.Scale3D.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      local_1f8.Scale3D.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      local_1f8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_1f8.Scale3D.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
      UE::Math::TTransform<double>::Multiply(&local_1f8,&local_d8,&local_2b8);
      local_2b8.Rotation.XY.m128d_f64[0] = local_1f8.Rotation.XY.m128d_f64[0];
      local_2b8.Rotation.XY.m128d_f64[1] = local_1f8.Rotation.XY.m128d_f64[1];
      local_2b8.Rotation.ZW.m128d_f64[0] = local_1f8.Rotation.ZW.m128d_f64[0];
      local_2b8.Rotation.ZW.m128d_f64[1] = local_1f8.Rotation.ZW.m128d_f64[1];
      local_2b8.Translation.XY.m128d_f64[0] = local_1f8.Translation.XY.m128d_f64[0];
      local_2b8.Translation.XY.m128d_f64[1] = local_1f8.Translation.XY.m128d_f64[1];
      local_2b8.Translation.ZW.m128d_f64[0] = local_1f8.Translation.ZW.m128d_f64[0];
      local_2b8.Translation.ZW.m128d_f64[1] = local_1f8.Translation.ZW.m128d_f64[1];
      local_138.Scale3D.XY.m128d_f64[0]._0_4_ = local_1f8.Scale3D.XY.m128d_f64[0]._0_4_;
      local_138.Scale3D.XY.m128d_f64[0]._4_4_ = local_1f8.Scale3D.XY.m128d_f64[0]._4_4_;
      local_138.Scale3D.XY.m128d_f64[1]._0_4_ = local_1f8.Scale3D.XY.m128d_f64[1]._0_4_;
      local_138.Scale3D.XY.m128d_f64[1]._4_4_ = local_1f8.Scale3D.XY.m128d_f64[1]._4_4_;
      local_138.Scale3D.ZW.m128d_f64[0]._0_4_ = local_1f8.Scale3D.ZW.m128d_f64[0]._0_4_;
      local_138.Scale3D.ZW.m128d_f64[0]._4_4_ = local_1f8.Scale3D.ZW.m128d_f64[0]._4_4_;
      local_138.Scale3D.ZW.m128d_f64[1]._0_4_ = local_1f8.Scale3D.ZW.m128d_f64[1]._0_4_;
      local_138.Scale3D.ZW.m128d_f64[1]._4_4_ = local_1f8.Scale3D.ZW.m128d_f64[1]._4_4_;
    }
    else {
      (*pcVar3)(pUVar15,&local_198,pcVar3,(double)this->ExtrapolationSampleTime);
      local_1f8.Rotation.XY.m128d_f64[1] = local_198.Rotation.XY.m128d_f64[1];
      local_1f8.Rotation.XY.m128d_f64[0] = local_198.Rotation.XY.m128d_f64[0];
      local_1f8.Rotation.ZW.m128d_f64[1] = local_198.Rotation.ZW.m128d_f64[1];
      local_1f8.Rotation.ZW.m128d_f64[0] = local_198.Rotation.ZW.m128d_f64[0];
      local_1f8.Translation.XY.m128d_f64[1] = local_198.Translation.XY.m128d_f64[1];
      local_1f8.Translation.XY.m128d_f64[0] = local_198.Translation.XY.m128d_f64[0];
      local_1f8.Translation.ZW.m128d_f64[1] = local_198.Translation.ZW.m128d_f64[1];
      local_1f8.Translation.ZW.m128d_f64[0] = local_198.Translation.ZW.m128d_f64[0];
      local_1f8.Scale3D.XY.m128d_f64[1] = local_198.Scale3D.XY.m128d_f64[1];
      local_1f8.Scale3D.XY.m128d_f64[0] = local_198.Scale3D.XY.m128d_f64[0];
      local_1f8.Scale3D.ZW.m128d_f64[1] = local_198.Scale3D.ZW.m128d_f64[1];
      local_1f8.Scale3D.ZW.m128d_f64[0] = local_198.Scale3D.ZW.m128d_f64[0];
      ExtrapolateRootMotion(&local_138,&local_1f8,0.0,this->ExtrapolationSampleTime,fVar22);
      local_2b8.Rotation.XY.m128d_f64[1] = local_138.Rotation.XY.m128d_f64[1];
      local_2b8.Rotation.XY.m128d_f64[0] = local_138.Rotation.XY.m128d_f64[0];
      local_2b8.Rotation.ZW.m128d_f64[1] = local_138.Rotation.ZW.m128d_f64[1];
      local_2b8.Rotation.ZW.m128d_f64[0] = local_138.Rotation.ZW.m128d_f64[0];
      local_2b8.Translation.XY.m128d_f64[1] = local_138.Translation.XY.m128d_f64[1];
      local_2b8.Translation.XY.m128d_f64[0] = local_138.Translation.XY.m128d_f64[0];
      local_2b8.Translation.ZW.m128d_f64[1] = local_138.Translation.ZW.m128d_f64[1];
      local_2b8.Translation.ZW.m128d_f64[0] = local_138.Translation.ZW.m128d_f64[0];
    }
    local_2b8.Scale3D.ZW.m128d_f64[0]._4_4_ = local_138.Scale3D.ZW.m128d_f64[0]._4_4_;
    local_2b8.Scale3D.ZW.m128d_f64[0]._0_4_ = local_138.Scale3D.ZW.m128d_f64[0]._0_4_;
    local_2b8.Scale3D.ZW.m128d_f64[1]._0_4_ = local_138.Scale3D.ZW.m128d_f64[1]._0_4_;
    local_2b8.Scale3D.ZW.m128d_f64[1]._4_4_ = local_138.Scale3D.ZW.m128d_f64[1]._4_4_;
    local_2b8.Scale3D.XY.m128d_f64[0]._4_4_ = local_138.Scale3D.XY.m128d_f64[0]._4_4_;
    local_2b8.Scale3D.XY.m128d_f64[0]._0_4_ = local_138.Scale3D.XY.m128d_f64[0]._0_4_;
    local_2b8.Scale3D.XY.m128d_f64[1]._0_4_ = local_138.Scale3D.XY.m128d_f64[1]._0_4_;
    local_2b8.Scale3D.XY.m128d_f64[1]._4_4_ = local_138.Scale3D.XY.m128d_f64[1]._4_4_;
  }
LAB_14a8b6e3e:
  if ((void *)local_228.m128d_f64[0] != (void *)0x0) {
    FMemory::Free((void *)local_228.m128d_f64[0]);
  }
  if ((void *)local_238.m128d_f64[0] != (void *)0x0) {
    FMemory::Free((void *)local_238.m128d_f64[0]);
  }
LAB_14a8b6e6b:
  fVar20 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar21 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar4._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar4._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar4._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).XY.m128d_f64 = auVar4;
  auVar5._8_4_ = SUB84((double)fVar21,0);
  auVar5._0_8_ = (double)fVar20;
  auVar5._12_4_ = (int)((ulonglong)(double)fVar21 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).ZW.m128d_f64 = auVar5;
  fVar20 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar21 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar6._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar6._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar6._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Translation).XY.m128d_f64 = auVar6;
  auVar7._8_4_ = SUB84((double)fVar21,0);
  auVar7._0_8_ = (double)fVar20;
  auVar7._12_4_ = (int)((ulonglong)(double)fVar21 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Translation).ZW.m128d_f64 = auVar7;
  fVar20 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar21 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).XY.m128d_f64 = auVar8;
  auVar9._8_4_ = SUB84((double)fVar21,0);
  auVar9._0_8_ = (double)fVar20;
  auVar9._12_4_ = (int)((ulonglong)(double)fVar21 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).ZW.m128d_f64 = auVar9;
  UE::Math::TTransform<double>::Multiply
            (__return_storage_ptr__,&local_2b8,&this->RootTransformOrigin);
  return __return_storage_ptr__;
}

// GetAllAnimNotifyEvents @ 14a8b9180

/* WARNING: Enum "Type": Some values do not have unique names */

TArrayView<FAnimNotifyEvent_const_,int> * __thiscall
UE::PoseSearch::FAnimationAssetSampler::GetAllAnimNotifyEvents
          (FAnimationAssetSampler *this,
          TArrayView<FAnimNotifyEvent_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  UBlendSpace *this_00;
  UClass *pUVar6;
  TArrayView<FAnimNotifyEvent_const_,int> *pTVar7;
  UObject *pUVar8;
  uint uVar9;
  int local_res8 [2];
  FName local_res18 [2];
  TArray<FBlendSampleData,TSizedDefaultAllocator<32>_> local_38;
  FString local_28;
  
  this_00 = (UBlendSpace *)FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  if (this_00 != (UBlendSpace *)0x0) {
    pUVar6 = Z_Construct_UClass_UBlendSpace_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar6->_padding_)) {
      if ((this_00->NotifyTriggerMode).Value == '\x01') {
        local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_38.ArrayNum = 0;
        local_38.ArrayMax = 0;
        local_res8[0] = 0;
        bVar4 = UBlendSpace::GetSamplesFromBlendInput
                          (this_00,&this->BlendParameters,&local_38,local_res8,true);
        if (bVar4) {
          uVar5 = GetHighestWeightSample(&local_38);
          uVar9 = 0;
          if ((int)uVar5 < local_38.ArrayNum) {
            uVar9 = ~uVar5 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            pTVar7 = (TArrayView<FAnimNotifyEvent_const_,int> *)(*pcVar3)();
            return pTVar7;
          }
          lVar2 = *(longlong *)(local_38.AllocatorInstance.Data + (longlong)(int)uVar5 * 0x60 + 8);
          if (lVar2 != 0) {
            iVar1 = *(int *)(lVar2 + 0x88);
            __return_storage_ptr__->DataPtr = *(FAnimNotifyEvent **)(lVar2 + 0x80);
            if ((iVar1 < 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("InCount >= 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0xeb,L""), bVar4)) {
              pcVar3 = (code *)swi(3);
              pTVar7 = (TArrayView<FAnimNotifyEvent_const_,int> *)(*pcVar3)();
              return pTVar7;
            }
            __return_storage_ptr__->ArrayNum = iVar1;
            DestructItems<FBlendSampleData,int>
                      ((FBlendSampleData *)local_38.AllocatorInstance.Data,local_38.ArrayNum);
            if ((FBlendSampleData *)local_38.AllocatorInstance.Data == (FBlendSampleData *)0x0) {
              return __return_storage_ptr__;
            }
            FMemory::Free(local_38.AllocatorInstance.Data);
            return __return_storage_ptr__;
          }
        }
        DestructItems<FBlendSampleData,int>
                  ((FBlendSampleData *)local_38.AllocatorInstance.Data,local_38.ArrayNum);
        local_28.Data.AllocatorInstance.Data = local_38.AllocatorInstance.Data;
      }
      else {
        if ((byte)LogPoseSearch._0_1_ < 2) goto LAB_14a8b9300;
        local_res18[0] = (FName)this_00->_padding_;
        ::FName::ToString(local_res18,&local_28);
        Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
      }
      if ((FBlendSampleData *)local_28.Data.AllocatorInstance.Data != (FBlendSampleData *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      goto LAB_14a8b9300;
    }
  }
  pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  if (pUVar8 != (UObject *)0x0) {
    pUVar6 = Z_Construct_UClass_UAnimSequenceBase_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar8->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar8->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar6->_padding_)) {
      iVar1 = *(int *)&pUVar8[3].field_0x10;
      __return_storage_ptr__->DataPtr = *(FAnimNotifyEvent **)&pUVar8[3].field_0x8;
      if ((iVar1 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArrayView<FAnimNotifyEvent_const_,int> *)(*pcVar3)();
        return pTVar7;
      }
      __return_storage_ptr__->ArrayNum = iVar1;
      return __return_storage_ptr__;
    }
  }
LAB_14a8b9300:
  __return_storage_ptr__->DataPtr = (FAnimNotifyEvent *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetAsset @ 14a8b9960

UAnimationAsset * __thiscall
UE::PoseSearch::FAnimationAssetSampler::GetAsset(FAnimationAssetSampler *this)

{
  int iVar1;
  FUObjectItem *pFVar2;
  
  if (((this->AnimationAssetPtr).WeakPtr.ObjectSerialNumber != 0) &&
     (iVar1 = (this->AnimationAssetPtr).WeakPtr.ObjectIndex, -1 < iVar1)) {
    pFVar2 = FUObjectArray::IndexToObject(&GUObjectArray,iVar1);
    if ((pFVar2 != (FUObjectItem *)0x0) &&
       ((pFVar2->SerialNumber == (this->AnimationAssetPtr).WeakPtr.ObjectSerialNumber &&
        (((pFVar2->field0_0x0).FlagsAndRefCount >> 0x20 & 0x10200000U) == 0)))) {
      return (UAnimationAsset *)(pFVar2->field1_0x8).Object;
    }
  }
  return (UAnimationAsset *)0x0;
}

// GetPlayLength @ 14a8bbed0

float __thiscall UE::PoseSearch::FAnimationAssetSampler::GetPlayLength(FAnimationAssetSampler *this)

{
  return this->CachedPlayLength;
}

// GetPlayLength @ 14a8bbee0

float __cdecl
UE::PoseSearch::FAnimationAssetSampler::GetPlayLength
          (UAnimationAsset *param_1,TVector<double> *param_2)

{
  int iVar1;
  UClass *pUVar2;
  float fVar3;
  int local_res8 [2];
  TArray<FBlendSampleData,TSizedDefaultAllocator<32>_> local_28 [2];
  
  if (param_1 == (UAnimationAsset *)0x0) {
    return 0.0;
  }
  pUVar2 = Z_Construct_UClass_UBlendSpace_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    local_28[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28[0].ArrayNum = 0;
    local_28[0].ArrayMax = 0;
    local_res8[0] = 0;
    UBlendSpace::GetSamplesFromBlendInput((UBlendSpace *)param_1,param_2,local_28,local_res8,true);
    fVar3 = UBlendSpace::GetAnimationLengthFromSampleData((UBlendSpace *)param_1,local_28);
    DestructItems<FBlendSampleData,int>
              ((FBlendSampleData *)local_28[0].AllocatorInstance.Data,local_28[0].ArrayNum);
    if ((FBlendSampleData *)local_28[0].AllocatorInstance.Data != (FBlendSampleData *)0x0) {
      FMemory::Free(local_28[0].AllocatorInstance.Data);
    }
    return fVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x00014a8bbf9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar3 = (float)(**(code **)(param_1->_padding_ + 0x2c0))(param_1);
  return fVar3;
}

// GetTotalRootTransform @ 14a8bedc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TTransform<double> * __thiscall
UE::PoseSearch::FAnimationAssetSampler::GetTotalRootTransform
          (FAnimationAssetSampler *this,TTransform<double> *__return_storage_ptr__)

{
  int iVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  undefined1 auStack_2a8 [32];
  FName local_288;
  FString local_280;
  TTransform<double> local_268;
  TTransform<double> local_208;
  TTransform<double> local_1a8;
  TTransform<double> local_148;
  TTransform<double> local_e8;
  TTransform<double> local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_2a8;
  pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  if (pUVar2 != (UObject *)0x0) {
    pUVar3 = Z_Construct_UClass_UBlendSpace_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      ExtractBlendSpaceRootTrackTransform
                (&local_1a8,0.0,&this->AccumulatedRootTransform,this->RootTransformSamplingRate);
      ExtractBlendSpaceRootTrackTransform
                (&local_148,this->CachedPlayLength,&this->AccumulatedRootTransform,
                 this->RootTransformSamplingRate);
      UE::Math::TTransform<double>::GetRelativeTransform(&local_148,&local_268,&local_1a8);
      (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = local_268.Rotation.XY.m128d_f64[0];
      (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = local_268.Rotation.XY.m128d_f64[1];
      (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = local_268.Rotation.ZW.m128d_f64[0];
      (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = local_268.Rotation.ZW.m128d_f64[1];
      (__return_storage_ptr__->Translation).XY.m128d_f64[0] = local_268.Translation.XY.m128d_f64[0];
      (__return_storage_ptr__->Translation).XY.m128d_f64[1] = local_268.Translation.XY.m128d_f64[1];
      (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = local_268.Translation.ZW.m128d_f64[0];
      (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = local_268.Translation.ZW.m128d_f64[1];
      (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = local_268.Scale3D.XY.m128d_f64[0];
      (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = local_268.Scale3D.XY.m128d_f64[1];
      goto LAB_14a8bef99;
    }
  }
  pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  if (pUVar2 == (UObject *)0x0) {
LAB_14a8beed8:
    pUVar2 = (UObject *)0x0;
  }
  else {
    pUVar3 = Z_Construct_UClass_UAnimMontage_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar3->_padding_)) goto LAB_14a8beed8;
  }
  if (pUVar2 == (UObject *)0x0) {
    ExtractRootTransform(this,&local_e8,0.0);
    ExtractRootTransform(this,&local_88,this->CachedPlayLength);
    UE::Math::TTransform<double>::GetRelativeTransform(&local_88,&local_208,&local_e8);
    (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = local_208.Rotation.XY.m128d_f64[0];
    (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = local_208.Rotation.XY.m128d_f64[1];
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = local_208.Rotation.ZW.m128d_f64[0];
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = local_208.Rotation.ZW.m128d_f64[1];
    (__return_storage_ptr__->Translation).XY.m128d_f64[0] = local_208.Translation.XY.m128d_f64[0];
    (__return_storage_ptr__->Translation).XY.m128d_f64[1] = local_208.Translation.XY.m128d_f64[1];
    (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = local_208.Translation.ZW.m128d_f64[0];
    (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = local_208.Translation.ZW.m128d_f64[1];
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = local_208.Scale3D.XY.m128d_f64[0];
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = local_208.Scale3D.XY.m128d_f64[1];
    local_268.Scale3D.ZW.m128d_f64[0]._0_4_ = local_208.Scale3D.ZW.m128d_f64[0]._0_4_;
    local_268.Scale3D.ZW.m128d_f64[0]._4_4_ = local_208.Scale3D.ZW.m128d_f64[0]._4_4_;
    local_268.Scale3D.ZW.m128d_f64[1]._0_4_ = local_208.Scale3D.ZW.m128d_f64[1]._0_4_;
    local_268.Scale3D.ZW.m128d_f64[1]._4_4_ = local_208.Scale3D.ZW.m128d_f64[1]._4_4_;
  }
  else if (*(int *)(pUVar2 + 9) == 1) {
    ExtractRootTransform(this,&local_148,0.0);
    ExtractRootTransform(this,&local_1a8,this->CachedPlayLength);
    UE::Math::TTransform<double>::GetRelativeTransform(&local_1a8,&local_268,&local_148);
    (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = local_268.Rotation.XY.m128d_f64[0];
    (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = local_268.Rotation.XY.m128d_f64[1];
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = local_268.Rotation.ZW.m128d_f64[0];
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = local_268.Rotation.ZW.m128d_f64[1];
    (__return_storage_ptr__->Translation).XY.m128d_f64[0] = local_268.Translation.XY.m128d_f64[0];
    (__return_storage_ptr__->Translation).XY.m128d_f64[1] = local_268.Translation.XY.m128d_f64[1];
    (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = local_268.Translation.ZW.m128d_f64[0];
    (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = local_268.Translation.ZW.m128d_f64[1];
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = local_268.Scale3D.XY.m128d_f64[0];
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = local_268.Scale3D.XY.m128d_f64[1];
  }
  else {
    if (1 < (byte)LogPoseSearch._0_1_) {
      local_288.ComparisonIndex.Value = *(uint *)&pUVar2->field_0x18;
      local_288.Number = *(uint *)&pUVar2->field_0x1c;
      ::FName::ToString(&local_288,&local_280);
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
      if (local_280.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_280.Data.AllocatorInstance.Data);
      }
    }
    *&(__return_storage_ptr__->Rotation).XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    *&(__return_storage_ptr__->Rotation).ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    *&(__return_storage_ptr__->Translation).XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    *&(__return_storage_ptr__->Translation).ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    *&(__return_storage_ptr__->Scale3D).XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    local_268.Scale3D.ZW.m128d_f64[0]._0_4_ =
         UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._0_4_;
    local_268.Scale3D.ZW.m128d_f64[0]._4_4_ =
         UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._4_4_;
    local_268.Scale3D.ZW.m128d_f64[1]._0_4_ =
         UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._0_4_;
    local_268.Scale3D.ZW.m128d_f64[1]._4_4_ =
         UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._4_4_;
  }
LAB_14a8bef99:
  *(undefined4 *)(__return_storage_ptr__->Scale3D).ZW.m128d_f64 =
       local_268.Scale3D.ZW.m128d_f64[0]._0_4_;
  *(undefined4 *)((longlong)(__return_storage_ptr__->Scale3D).ZW.m128d_f64 + 4) =
       local_268.Scale3D.ZW.m128d_f64[0]._4_4_;
  *(undefined4 *)((__return_storage_ptr__->Scale3D).ZW.m128d_f64 + 1) =
       local_268.Scale3D.ZW.m128d_f64[1]._0_4_;
  *(undefined4 *)((longlong)(__return_storage_ptr__->Scale3D).ZW.m128d_f64 + 0xc) =
       local_268.Scale3D.ZW.m128d_f64[1]._4_4_;
  return __return_storage_ptr__;
}

// Init @ 14a8c01f0

void __thiscall
UE::PoseSearch::FAnimationAssetSampler::Init
          (FAnimationAssetSampler *this,UAnimationAsset *param_1,TTransform<double> *param_2,
          TVector<double> *param_3,int param_4,bool param_5,bool param_6)

{
  int iVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  bool bVar5;
  UPackage *pUVar6;
  UBlendSpace *pUVar7;
  UClass *pUVar8;
  float fVar9;
  int local_res8 [2];
  UAnimationAsset *local_res10;
  TArray<FBlendSampleData,TSizedDefaultAllocator<32>_> local_38 [2];
  
  if (param_1 != (UAnimationAsset *)0x0) {
    pUVar6 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)param_1);
    if ((pUVar6 == (UPackage *)0x0) || (((uint)param_1->_padding_ >> 0x1e & 1) != 0)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InAnimationAsset || (InAnimationAsset->GetPackage() && !InAnimationAsset->HasAnyFlags(RF_MirroredGarbage))"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchAssetSampler.cpp"
                         ,0x101,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  local_res10 = param_1;
  if ((GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UAnimationAsset *)0x0)) {
    GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)this,(FObjectPtr)&local_res10);
  dVar3 = (param_2->Rotation).XY.m128d_f64[1];
  (this->RootTransformOrigin).Rotation.XY.m128d_f64[0] = (param_2->Rotation).XY.m128d_f64[0];
  (this->RootTransformOrigin).Rotation.XY.m128d_f64[1] = dVar3;
  dVar3 = (param_2->Rotation).ZW.m128d_f64[1];
  (this->RootTransformOrigin).Rotation.ZW.m128d_f64[0] = (param_2->Rotation).ZW.m128d_f64[0];
  (this->RootTransformOrigin).Rotation.ZW.m128d_f64[1] = dVar3;
  dVar3 = (param_2->Translation).XY.m128d_f64[1];
  (this->RootTransformOrigin).Translation.XY.m128d_f64[0] = (param_2->Translation).XY.m128d_f64[0];
  (this->RootTransformOrigin).Translation.XY.m128d_f64[1] = dVar3;
  dVar3 = (param_2->Translation).ZW.m128d_f64[1];
  (this->RootTransformOrigin).Translation.ZW.m128d_f64[0] = (param_2->Translation).ZW.m128d_f64[0];
  (this->RootTransformOrigin).Translation.ZW.m128d_f64[1] = dVar3;
  dVar3 = (param_2->Scale3D).XY.m128d_f64[1];
  (this->RootTransformOrigin).Scale3D.XY.m128d_f64[0] = (param_2->Scale3D).XY.m128d_f64[0];
  (this->RootTransformOrigin).Scale3D.XY.m128d_f64[1] = dVar3;
  dVar3 = (param_2->Scale3D).ZW.m128d_f64[1];
  (this->RootTransformOrigin).Scale3D.ZW.m128d_f64[0] = (param_2->Scale3D).ZW.m128d_f64[0];
  (this->RootTransformOrigin).Scale3D.ZW.m128d_f64[1] = dVar3;
  dVar3 = (param_3->field0_0x0)._s_0.Y;
  (this->BlendParameters).field0_0x0._s_0.X = (param_3->field0_0x0)._s_0.X;
  (this->BlendParameters).field0_0x0._s_0.Y = dVar3;
  (this->BlendParameters).field0_0x0._s_0.Z = (param_3->field0_0x0)._s_0.Z;
  this->RootTransformSamplingRate = param_4;
  pUVar7 = (UBlendSpace *)FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  fVar9 = 0.0;
  if (pUVar7 != (UBlendSpace *)0x0) {
    pUVar8 = Z_Construct_UClass_UBlendSpace_NoRegister();
    iVar1 = (int)pUVar8->_padding_;
    if ((*(int *)(pUVar7->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar7->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar8->_padding_)) {
      fVar9 = (float)(**(code **)(pUVar7->_padding_ + 0x2c0))(pUVar7);
    }
    else {
      local_38[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_38[0].ArrayNum = 0;
      local_38[0].ArrayMax = 0;
      local_res8[0] = 0;
      UBlendSpace::GetSamplesFromBlendInput(pUVar7,&this->BlendParameters,local_38,local_res8,true);
      fVar9 = UBlendSpace::GetAnimationLengthFromSampleData(pUVar7,local_38);
      DestructItems<FBlendSampleData,int>
                ((FBlendSampleData *)local_38[0].AllocatorInstance.Data,local_38[0].ArrayNum);
      if ((FBlendSampleData *)local_38[0].AllocatorInstance.Data != (FBlendSampleData *)0x0) {
        FMemory::Free(local_38[0].AllocatorInstance.Data);
      }
    }
  }
  this->CachedPlayLength = fVar9;
  if (param_5) {
    pUVar7 = (UBlendSpace *)FWeakObjectPtr::Get((FWeakObjectPtr *)this);
    if (pUVar7 != (UBlendSpace *)0x0) {
      pUVar8 = Z_Construct_UClass_UBlendSpace_NoRegister();
      iVar1 = (int)pUVar8->_padding_;
      if ((iVar1 <= *(int *)(pUVar7->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar7->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar8->_padding_)) {
        bVar4 = this->bEnforceCompressedDataSampling;
        bVar5 = IsLoopable(this);
        ProcessRootTransform
                  (pUVar7,&this->BlendParameters,this->CachedPlayLength,
                   this->RootTransformSamplingRate,bVar5,&this->AccumulatedRootTransform,bVar4);
      }
    }
  }
  return;
}

// IsInitialized @ 14a8c0cc0

bool __thiscall UE::PoseSearch::FAnimationAssetSampler::IsInitialized(FAnimationAssetSampler *this)

{
  bool bVar1;
  
  bVar1 = TWeakObjectPtr<UAnimationAsset_const_,FWeakObjectPtr>::UEOpEquals
                    (&this->AnimationAssetPtr,(void *)0x0);
  return !bVar1;
}

// IsLoopable @ 14a8c0d30

bool __thiscall UE::PoseSearch::FAnimationAssetSampler::IsLoopable(FAnimationAssetSampler *this)

{
  int iVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  if (pUVar2 != (UObject *)0x0) {
    pUVar3 = Z_Construct_UClass_UAnimSequenceBase_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      return (bool)pUVar2[4].field_0xc;
    }
  }
  pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  if (pUVar2 != (UObject *)0x0) {
    pUVar3 = Z_Construct_UClass_UBlendSpace_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      return (bool)pUVar2[4].field_0x22;
    }
  }
  return false;
}

// Process @ 14a8c2d70

void __thiscall UE::PoseSearch::FAnimationAssetSampler::Process(FAnimationAssetSampler *this)

{
  bool bVar1;
  int iVar2;
  bool bVar3;
  UBlendSpace *pUVar4;
  UClass *pUVar5;
  
  pUVar4 = (UBlendSpace *)FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  if (pUVar4 != (UBlendSpace *)0x0) {
    pUVar5 = Z_Construct_UClass_UBlendSpace_NoRegister();
    iVar2 = (int)pUVar5->_padding_;
    if ((iVar2 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar2 * 8)
        == &pUVar5->_padding_)) {
      bVar1 = this->bEnforceCompressedDataSampling;
      bVar3 = IsLoopable(this);
      ProcessRootTransform
                (pUVar4,&this->BlendParameters,this->CachedPlayLength,
                 this->RootTransformSamplingRate,bVar3,&this->AccumulatedRootTransform,bVar1);
    }
  }
  return;
}

// ToNormalizedTime @ 14a8ce450

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall
UE::PoseSearch::FAnimationAssetSampler::ToNormalizedTime(FAnimationAssetSampler *this,float param_1)

{
  int iVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  float fVar4;
  FName local_res8;
  FString local_48 [4];
  
  if ((__real_38d1b717 < this->CachedPlayLength) &&
     (pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)this), pUVar2 != (UObject *)0x0)) {
    pUVar3 = Z_Construct_UClass_UBlendSpace_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      fVar4 = param_1 / this->CachedPlayLength;
      if ((fVar4 < 0.0) || (__real_3f800000 < fVar4)) {
        if (1 < (byte)LogPoseSearch._0_1_) {
          pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)this);
          local_res8.ComparisonIndex.Value = *(uint *)&pUVar2->field_0x18;
          local_res8.Number = *(uint *)&pUVar2->field_0x1c;
          ::FName::ToString(&local_res8,local_48);
          Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
          if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
          }
        }
        if (__real_3f800000 <= fVar4) {
          fVar4 = __real_3f800000;
        }
        if (fVar4 <= 0.0) {
          fVar4 = 0.0;
        }
      }
      return fVar4;
    }
  }
  return param_1;
}

// ToRealTime @ 14a8ce5c0

float __thiscall
UE::PoseSearch::FAnimationAssetSampler::ToRealTime(FAnimationAssetSampler *this,float param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  float fVar6;
  
  if (__real_38d1b717 < this->CachedPlayLength) {
    pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)this);
    if (pUVar4 != (UObject *)0x0) {
      pUVar5 = Z_Construct_UClass_UBlendSpace_NoRegister();
      iVar1 = (int)pUVar5->_padding_;
      if ((iVar1 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar5->_padding_)) {
        if ((param_1 < 0.0) || (__real_3f800000 < param_1)) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("NormalizedTime >= 0.f && NormalizedTime <= 1.f",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchAssetSampler.cpp"
                             ,0x140,L"");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            fVar6 = (float)(*pcVar2)();
            return fVar6;
          }
        }
        param_1 = param_1 * this->CachedPlayLength;
      }
    }
  }
  return param_1;
}

