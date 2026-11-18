// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 16

// StaticStruct @ 147494d20

UScriptStruct * __cdecl FAnimNode_DeadBlending::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_DeadBlending.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FAnimNode_DeadBlending.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_DeadBlending,(UObject *)pUVar1,
                         L"AnimNode_DeadBlending");
  }
  return Z_Registration_Info_UScriptStruct_FAnimNode_DeadBlending.OuterSingleton;
}

// FAnimNode_DeadBlending @ 1474b1200

FAnimNode_DeadBlending * __thiscall
FAnimNode_DeadBlending::FAnimNode_DeadBlending(FAnimNode_DeadBlending *this)

{
  this->DefaultBlendDuration = 0.25;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined ***)this = &_vftable__for__FAnimNode_Base__;
  *(undefined8 *)&this->Source = 0;
  *(undefined ***)&this->field_0x10 = &_vftable__for__IBoneReferenceSkeletonProvider__;
  *(undefined4 *)&(this->Source).field_0x8 = 0xffffffff;
  (this->Source).field_0xc = 0;
  this->bAlwaysUseDefaultBlendSettings = false;
  (this->DefaultBlendProfile).field0_0x0.DebugPtr = (UBlendProfile *)0x0;
  this->DefaultBlendMode = HermiteCubic;
  (this->DefaultCustomBlendCurve).field0_0x0.DebugPtr = (UCurveFloat *)0x0;
  this->BlendTimeMultiplier = 1.0;
  this->bLinearlyInterpolateScales = false;
  (this->FilteredCurves).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FilteredCurves).ArrayNum = 0;
  (this->FilteredCurves).ArrayMax = 0;
  (this->ExtrapolationFilteredCurves).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExtrapolationFilteredCurves).ArrayNum = 0;
  (this->ExtrapolationFilteredCurves).ArrayMax = 0;
  (this->FilteredBones).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FilteredBones).ArrayNum = 0;
  (this->FilteredBones).ArrayMax = 0;
  this->ExtrapolationHalfLife = 1.0;
  this->ExtrapolationHalfLifeMin = 0.05;
  this->ExtrapolationHalfLifeMax = 1.0;
  this->MaximumTranslationVelocity = 500.0;
  this->MaximumRotationVelocity = 360.0;
  this->MaximumScaleVelocity = 4.0;
  this->MaximumCurveVelocity = 100.0;
  this->bResetOnBecomingRelevant = true;
  this->bForwardRequestsThroughSkippedCachedPoseNodes = false;
  (this->Tag).ComparisonIndex = 0;
  (this->Tag).Number = 0;
  (this->CurveFilter)._padding_ = 0;
  (this->CurveFilter)._padding_ = 0;
  *(undefined1 *)&(this->CurveFilter)._padding_ = 0;
  (this->CurveFilter).FilterMode = None;
  (this->ExtrapolatedCurveFilter)._padding_ = 0;
  (this->ExtrapolatedCurveFilter)._padding_ = 0;
  *(undefined1 *)&(this->ExtrapolatedCurveFilter)._padding_ = 0;
  (this->ExtrapolatedCurveFilter).FilterMode = None;
  (this->BoneFilter).AllocatorInstance.SecondaryData = (ForElementType<FCompactPoseBoneIndex>)0x0;
  (this->BoneFilter).ArrayNum = 0;
  (this->BoneFilter).ArrayMax = 8;
  FInertializationSparsePose::FInertializationSparsePose(&this->PrevPoseSnapshot);
  FInertializationSparsePose::FInertializationSparsePose(&this->CurrPoseSnapshot);
  (this->RequestQueue).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RequestQueue).ArrayNum = 0;
  (this->RequestQueue).ArrayMax = 0;
  (this->UpdateCounter).LastSyncronizedFrame = 0xffffffffffffffff;
  (this->UpdateCounter).Counter = -1;
  (this->UpdateCounter).SkipFrames = 0;
  (this->BoneIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoneIndices).ArrayNum = 0;
  (this->BoneIndices).ArrayMax = 0;
  (this->BoneTranslations).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoneTranslations).ArrayNum = 0;
  (this->BoneTranslations).ArrayMax = 0;
  (this->BoneRotations).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoneRotations).ArrayNum = 0;
  (this->BoneRotations).ArrayMax = 0;
  (this->BoneRotationDirections).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoneRotationDirections).ArrayNum = 0;
  (this->BoneRotationDirections).ArrayMax = 0;
  (this->BoneScales).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoneScales).ArrayNum = 0;
  (this->BoneScales).ArrayMax = 0;
  (this->BoneTranslationVelocities).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoneTranslationVelocities).ArrayNum = 0;
  (this->BoneTranslationVelocities).ArrayMax = 0;
  (this->BoneRotationVelocities).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoneRotationVelocities).ArrayNum = 0;
  (this->BoneRotationVelocities).ArrayMax = 0;
  (this->BoneScaleVelocities).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoneScaleVelocities).ArrayNum = 0;
  (this->BoneScaleVelocities).ArrayMax = 0;
  (this->BoneTranslationDecayHalfLives).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoneTranslationDecayHalfLives).ArrayNum = 0;
  (this->BoneTranslationDecayHalfLives).ArrayMax = 0;
  (this->BoneRotationDecayHalfLives).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoneRotationDecayHalfLives).ArrayNum = 0;
  (this->BoneRotationDecayHalfLives).ArrayMax = 0;
  (this->BoneScaleDecayHalfLives).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoneScaleDecayHalfLives).ArrayNum = 0;
  (this->BoneScaleDecayHalfLives).ArrayMax = 0;
  (this->CurveData)._padding_ = 0;
  *(undefined4 *)&(this->CurveData)._padding_ = 0;
  *(undefined4 *)((longlong)&(this->CurveData)._padding_ + 4) = 8;
  *(undefined1 *)&(this->CurveData)._padding_ = 0;
  (this->CurveData).Filter = (FCurveFilter *)0x0;
  (this->PoseCurveData)._padding_ = 0;
  *(undefined4 *)&(this->PoseCurveData)._padding_ = 0;
  *(undefined4 *)((longlong)&(this->PoseCurveData)._padding_ + 4) = 8;
  *(undefined1 *)&(this->PoseCurveData)._padding_ = 0;
  (this->PoseCurveData).Filter = (FCurveFilter *)0x0;
  this->DeltaTime = 0.0;
  this->InertializationState = Inactive;
  this->InertializationTime = 0.0;
  this->InertializationDuration = 0.0;
  *(undefined8 *)&this->InertializationDurationPerBone = 0;
  *(undefined8 *)&(this->InertializationDurationPerBone).field_0x8 = 0;
  this->InertializationMaxDuration = 0.0;
  this->InertializationBlendMode = Linear;
  (this->InertializationCustomBlendCurve).field0_0x0.DebugPtr = (UCurveFloat *)0x0;
  (this->InertializationRequestDescription).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->InertializationRequestDescription).Data.ArrayNum = 0;
  (this->InertializationRequestDescription).Data.ArrayMax = 0;
  (this->InertializationRequestAnimInstance).field0_0x0.DebugPtr = (UObject *)0x0;
  this->InertializationRequestNodeId = -1;
  return this;
}

// ~FAnimNode_DeadBlending @ 1474b4b50

void __thiscall FAnimNode_DeadBlending::~FAnimNode_DeadBlending(FAnimNode_DeadBlending *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  ForElementType<FCompactPoseBoneIndex> FVar3;
  
  pFVar1 = (this->InertializationRequestDescription).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if (*(void **)&this->InertializationDurationPerBone != (void *)0x0) {
    FMemory::Free(*(void **)&this->InertializationDurationPerBone);
  }
  pvVar2 = (void *)(this->PoseCurveData)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pvVar2 = (void *)(this->CurveData)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pFVar1 = (this->BoneScaleDecayHalfLives).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BoneRotationDecayHalfLives).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BoneTranslationDecayHalfLives).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BoneScaleVelocities).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BoneRotationVelocities).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BoneTranslationVelocities).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BoneScales).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BoneRotationDirections).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BoneRotations).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BoneTranslations).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BoneIndices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FInertializationRequest,int>
            ((FInertializationRequest *)(this->RequestQueue).AllocatorInstance.Data,
             (this->RequestQueue).ArrayNum);
  pFVar1 = (this->RequestQueue).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FInertializationSparsePose::~FInertializationSparsePose(&this->CurrPoseSnapshot);
  FInertializationSparsePose::~FInertializationSparsePose(&this->PrevPoseSnapshot);
  FVar3 = (this->BoneFilter).AllocatorInstance.SecondaryData;
  if (FVar3 != (ForElementType<FCompactPoseBoneIndex>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  pvVar2 = (void *)(this->ExtrapolatedCurveFilter)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pvVar2 = (void *)(this->CurveFilter)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pFVar1 = (this->FilteredBones).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ExtrapolationFilteredCurves).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FilteredCurves).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined ***)&this->field_0x10 = &___7IBoneReferenceSkeletonProvider__6B_;
  *(undefined ***)this = &___7FAnimNode_Base__6B_;
  return;
}

// operator= @ 1474b6330

FAnimNode_DeadBlending * __thiscall
FAnimNode_DeadBlending::operator=(FAnimNode_DeadBlending *this,FAnimNode_DeadBlending *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  UBlendProfile *pUVar4;
  UCurveFloat *pUVar5;
  UObject *pUVar6;
  undefined8 uVar7;
  short sVar8;
  short sVar9;
  undefined4 uVar10;
  TBaseBlendedCurve<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,FAnimNode_DeadBlending::FDeadBlendingCurveElement>
  *_Dst;
  TBaseBlendedCurve<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,FAnimNode_DeadBlending::FDeadBlendingCurveElement>
  *_Src;
  
  *(undefined8 *)&this->field_0x8 = *(undefined8 *)&param_1->field_0x8;
  uVar7 = *(undefined8 *)&(param_1->Source).field_0x8;
  *(undefined8 *)&this->Source = *(undefined8 *)&param_1->Source;
  *(undefined8 *)&(this->Source).field_0x8 = uVar7;
  this->bAlwaysUseDefaultBlendSettings = param_1->bAlwaysUseDefaultBlendSettings;
  this->DefaultBlendDuration = param_1->DefaultBlendDuration;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 = (param_1->DefaultBlendProfile).field0_0x0.DebugPtr, pUVar4 != (UBlendProfile *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  (this->DefaultBlendProfile).field0_0x0 = (param_1->DefaultBlendProfile).field0_0x0;
  this->DefaultBlendMode = param_1->DefaultBlendMode;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar5 = (param_1->DefaultCustomBlendCurve).field0_0x0.DebugPtr, pUVar5 != (UCurveFloat *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  (this->DefaultCustomBlendCurve).field0_0x0 = (param_1->DefaultCustomBlendCurve).field0_0x0;
  this->BlendTimeMultiplier = param_1->BlendTimeMultiplier;
  this->bLinearlyInterpolateScales = param_1->bLinearlyInterpolateScales;
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=
            (&this->FilteredCurves,&param_1->FilteredCurves);
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=
            (&this->ExtrapolationFilteredCurves,&param_1->ExtrapolationFilteredCurves);
  TArray<FBoneReference,TSizedDefaultAllocator<32>_>::operator=
            (&this->FilteredBones,&param_1->FilteredBones);
  this->ExtrapolationHalfLife = param_1->ExtrapolationHalfLife;
  this->ExtrapolationHalfLifeMin = param_1->ExtrapolationHalfLifeMin;
  this->ExtrapolationHalfLifeMax = param_1->ExtrapolationHalfLifeMax;
  this->MaximumTranslationVelocity = param_1->MaximumTranslationVelocity;
  this->MaximumRotationVelocity = param_1->MaximumRotationVelocity;
  this->MaximumScaleVelocity = param_1->MaximumScaleVelocity;
  this->MaximumCurveVelocity = param_1->MaximumCurveVelocity;
  this->bResetOnBecomingRelevant = param_1->bResetOnBecomingRelevant;
  this->bForwardRequestsThroughSkippedCachedPoseNodes =
       param_1->bForwardRequestsThroughSkippedCachedPoseNodes;
  this->Tag = param_1->Tag;
  UE::Anim::FCurveFilter::operator=(&this->CurveFilter,&param_1->CurveFilter);
  UE::Anim::FCurveFilter::operator=
            (&this->ExtrapolatedCurveFilter,&param_1->ExtrapolatedCurveFilter);
  TArray<FCompactPoseBoneIndex,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>::operator=
            (&this->BoneFilter,&param_1->BoneFilter);
  FInertializationSparsePose::operator=(&this->PrevPoseSnapshot,&param_1->PrevPoseSnapshot);
  FInertializationSparsePose::operator=(&this->CurrPoseSnapshot,&param_1->CurrPoseSnapshot);
  TArray<FInertializationRequest,TSizedDefaultAllocator<32>_>::operator=
            (&this->RequestQueue,&param_1->RequestQueue);
  sVar8 = (param_1->UpdateCounter).Counter;
  sVar9 = (param_1->UpdateCounter).SkipFrames;
  uVar10 = *(undefined4 *)&(param_1->UpdateCounter).field_0xc;
  (this->UpdateCounter).LastSyncronizedFrame = (param_1->UpdateCounter).LastSyncronizedFrame;
  (this->UpdateCounter).Counter = sVar8;
  (this->UpdateCounter).SkipFrames = sVar9;
  *(undefined4 *)&(this->UpdateCounter).field_0xc = uVar10;
  TArray<int,TSizedDefaultAllocator<32>_>::operator=(&this->BoneIndices,&param_1->BoneIndices);
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::operator=
            (&this->BoneTranslations,&param_1->BoneTranslations);
  TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>::operator=
            (&this->BoneRotations,&param_1->BoneRotations);
  TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>::operator=
            (&this->BoneRotationDirections,&param_1->BoneRotationDirections);
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::operator=
            (&this->BoneScales,&param_1->BoneScales);
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::operator=
            (&this->BoneTranslationVelocities,&param_1->BoneTranslationVelocities);
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::operator=
            (&this->BoneRotationVelocities,&param_1->BoneRotationVelocities);
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::operator=
            (&this->BoneScaleVelocities,&param_1->BoneScaleVelocities);
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::operator=
            (&this->BoneTranslationDecayHalfLives,&param_1->BoneTranslationDecayHalfLives);
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::operator=
            (&this->BoneRotationDecayHalfLives,&param_1->BoneRotationDecayHalfLives);
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::operator=
            (&this->BoneScaleDecayHalfLives,&param_1->BoneScaleDecayHalfLives);
  *(undefined8 *)&(this->RootTranslationVelocity).field0_0x0 =
       *(undefined8 *)&(param_1->RootTranslationVelocity).field0_0x0;
  (this->RootTranslationVelocity).field0_0x0._s_0.Z =
       (param_1->RootTranslationVelocity).field0_0x0._s_0.Z;
  *(undefined8 *)&(this->RootRotationVelocity).field0_0x0 =
       *(undefined8 *)&(param_1->RootRotationVelocity).field0_0x0;
  (this->RootRotationVelocity).field0_0x0._s_0.Z = (param_1->RootRotationVelocity).field0_0x0._s_0.Z
  ;
  *(undefined8 *)&(this->RootScaleVelocity).field0_0x0 =
       *(undefined8 *)&(param_1->RootScaleVelocity).field0_0x0;
  (this->RootScaleVelocity).field0_0x0._s_0.Z = (param_1->RootScaleVelocity).field0_0x0._s_0.Z;
  if (this != param_1) {
    piVar1 = (int *)((longlong)&(this->CurveData)._padding_ + 4);
    _Src = (TBaseBlendedCurve<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,FAnimNode_DeadBlending::FDeadBlendingCurveElement>
            *)(param_1->CurveData)._padding_;
    iVar2 = *piVar1;
    iVar3 = (int)(param_1->CurveData)._padding_;
    if (_Src == (TBaseBlendedCurve<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,FAnimNode_DeadBlending::FDeadBlendingCurveElement>
                 *)0x0) {
      _Src = &param_1->CurveData;
    }
    *(int *)&(this->CurveData)._padding_ = iVar3;
    if ((iVar3 == 0) && (iVar2 == 0)) {
      *piVar1 = 8;
    }
    else {
      UE::Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FAnimNode_DeadBlending::FDeadBlendingCurveElement>_>
                (0x18,4,iVar3,iVar2,
                 (ForElementType<FAnimNode_DeadBlending::FDeadBlendingCurveElement> *)
                 &this->CurveData,iVar3,piVar1);
      _Dst = (TBaseBlendedCurve<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,FAnimNode_DeadBlending::FDeadBlendingCurveElement>
              *)(this->CurveData)._padding_;
      if (iVar3 != 0) {
        if (_Dst == (TBaseBlendedCurve<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,FAnimNode_DeadBlending::FDeadBlendingCurveElement>
                     *)0x0) {
          _Dst = &this->CurveData;
        }
        memcpy(_Dst,_Src,(longlong)iVar3 * 0x18);
      }
    }
  }
  *(char *)&(this->CurveData)._padding_ = (char)(param_1->CurveData)._padding_;
  (this->CurveData).Filter = (param_1->CurveData).Filter;
  TBaseBlendedCurve<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,UE::Anim::FCurveElement>
  ::operator=(&this->PoseCurveData,&param_1->PoseCurveData);
  this->DeltaTime = param_1->DeltaTime;
  this->InertializationState = param_1->InertializationState;
  this->InertializationTime = param_1->InertializationTime;
  this->InertializationDuration = param_1->InertializationDuration;
  TArray<float,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<float,TSizedDefaultAllocator<32>_> *)&this->InertializationDurationPerBone,
             (TArray<float,TSizedDefaultAllocator<32>_> *)&param_1->InertializationDurationPerBone);
  this->InertializationMaxDuration = param_1->InertializationMaxDuration;
  this->InertializationBlendMode = param_1->InertializationBlendMode;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar5 = (param_1->InertializationCustomBlendCurve).field0_0x0.DebugPtr,
     pUVar5 != (UCurveFloat *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  (this->InertializationCustomBlendCurve).field0_0x0 =
       (param_1->InertializationCustomBlendCurve).field0_0x0;
  ::FString::operator=
            (&this->InertializationRequestDescription,&param_1->InertializationRequestDescription);
  this->InertializationRequestNodeId = param_1->InertializationRequestNodeId;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar6 = (param_1->InertializationRequestAnimInstance).field0_0x0.DebugPtr,
     pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  (this->InertializationRequestAnimInstance).field0_0x0 =
       (param_1->InertializationRequestAnimInstance).field0_0x0;
  return this;
}

// operator() @ 1474b70b0

void __thiscall
`FAnimNode_DeadBlending::Update_AnyThread'::__l8::<lambda_1>::operator()
          (void *this,TArrayView<UE::Anim::FMessageStack_const_,int> *param_1)

{
  FMessageStack *this_00;
  FMessageStack *pFVar1;
  code **local_res8;
  code *local_48;
  undefined8 *local_40;
  code *local_38;
  undefined8 **local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  
  if (0 < *(int *)(*(longlong *)this + 0x3c8)) {
    this_00 = param_1->DataPtr;
    pFVar1 = this_00 + param_1->ArrayNum;
    if (this_00 != pFVar1) {
      local_30 = &local_res8;
      local_38 = UE::Core::Private::Function::
                 TFunctionRefCaller<`UE::Anim::FMessageStack::ForEachMessage<UE::Anim::IInertializationRequester>'::__l2::<lambda_1>,enum_UE::Anim::FMessageStack::EEnumerate,UE::Anim::IGraphMessage_&>
                 ::Call;
      do {
        local_28 = *(undefined8 *)this;
        local_20 = *(undefined4 *)((longlong)this + 8);
        local_18 = *(undefined8 *)((longlong)this + 0x10);
        local_40 = &local_28;
        local_res8 = &local_48;
        local_48 = UE::Core::Private::Function::
                   TFunctionRefCaller<``FAnimNode_DeadBlending::Update_AnyThread'::__l8::<lambda_1>::operator()'::__l9::<lambda_1>,enum_UE::Anim::FMessageStack::EEnumerate,UE::Anim::IInertializationRequester_&>
                   ::Call;
        UE::Anim::FMessageStack::ForEachMessage
                  (this_00,UE::Anim::IInertializationRequester::TypeName,
                   (TFunctionRef<UE::Anim::FMessageStack::EEnumerate___cdecl(UE::Anim::IGraphMessage_&)>
                    *)&local_38);
        this_00 = this_00 + 1;
      } while (this_00 != pFVar1);
    }
  }
  return;
}

// ApplyTo @ 1474bdbf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FAnimNode_DeadBlending::ApplyTo
          (FAnimNode_DeadBlending *this,FCompactPose *param_1,FBlendedCurve *param_2,
          FStackAttributeContainer *param_3)

{
  double *pdVar1;
  double *pdVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  EAlphaBlendOption EVar5;
  FCompactPoseBoneIndex FVar6;
  int iVar7;
  ForElementType<FCompactPoseBoneIndex> FVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  UCurveFloat *pUVar11;
  code *pcVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  double dVar15;
  undefined1 auVar16 [16];
  double dVar17;
  undefined1 auVar18 [16];
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  float fVar27;
  float fVar28;
  FCompactPose *this_00;
  FStackAttributeContainer *pFVar29;
  float fVar30;
  bool bVar31;
  char cVar32;
  uint uVar33;
  uint uVar34;
  TVector<double> *pTVar35;
  TTransform<double> *pTVar36;
  TTransform<double> *pTVar37;
  IAnimRootMotionProvider *pIVar38;
  ForElementType<FCompactPoseBoneIndex> FVar39;
  FCompactPoseBoneIndex FVar40;
  longlong lVar41;
  longlong lVar42;
  uint uVar43;
  bool bVar44;
  FCompactPoseBoneIndex FVar45;
  float fVar46;
  undefined4 uVar47;
  float fVar48;
  undefined4 uVar49;
  float fVar50;
  double dVar51;
  double dVar52;
  double dVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  undefined1 auStackY_608 [32];
  FCompactPoseBoneIndex local_5d4;
  FCompactPoseBoneIndex local_5d0;
  longlong local_5c8;
  uint local_5c0;
  longlong local_5b8;
  FCompactPose *local_5b0;
  uint local_5a8;
  longlong local_5a0;
  longlong local_598;
  undefined1 local_588 [16];
  undefined1 local_578 [16];
  TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement> *local_568;
  FStackAttributeContainer *local_560;
  TVector<float>_u_0 local_558;
  TVector<float>_u_0 local_548;
  TVector<float>_u_0 local_538;
  TVector<float>_u_0 local_528;
  TVector<float>_u_0 local_518;
  TVector<float>_u_0 local_508;
  undefined8 local_4f8;
  undefined8 local_4e8;
  double local_4c8;
  undefined4 uStack_4b4;
  FAnimNode_DeadBlending *pFStack_4b0;
  TVector<double>_u_0 local_4a8;
  TVector<double>_u_0 local_488 [2];
  double local_458;
  TQuat<double> local_448;
  undefined1 local_428 [16];
  double local_418;
  double local_410;
  double local_408;
  double dStack_400;
  double local_3f8;
  TVector<double>_u_0 local_3e8;
  TVector<double>_u_0 local_3c8;
  TVector<double>_u_0 local_3a8;
  TVector<double>_u_0 local_388;
  TVector<double>_u_0 local_368;
  double local_348;
  double dStack_340;
  double local_338;
  <lambda_1> local_328;
  TQuat<double> local_318;
  TQuat<double> local_2f8;
  TQuat<double> local_2d8;
  TQuat<double> local_2b8;
  TQuat<double> local_298;
  undefined1 local_278 [16];
  double local_268;
  double local_260;
  double dStack_258;
  double local_250;
  undefined1 local_248 [16];
  double local_238;
  double local_230;
  double dStack_228;
  double local_220;
  TVector<double> local_218;
  double local_1f0;
  TVector<double> local_1e8 [4];
  TVector<double> local_188 [2];
  double local_158 [2];
  double local_148 [2];
  double local_138 [2];
  double local_128 [2];
  double local_118 [2];
  double local_108 [2];
  ulonglong local_f8;
  
  local_f8 = __security_cookie.value ^ (ulonglong)auStackY_608;
  bVar44 = -1 < CpuChannel->Enabled;
  local_5b0 = param_1;
  local_568 = (TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)param_2;
  local_560 = param_3;
  if (bVar44) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId513,"FAnimNode_DeadBlending::ApplyTo",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimNode_DeadBlending.cpp"
               ,0x201);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId513);
  }
  fVar27 = __real_322bcc77;
  lVar41 = *(longlong *)&param_1->field_0x10;
  FVar40 = (FCompactPoseBoneIndex)0x0;
  FVar6 = *(FCompactPoseBoneIndex *)&param_1->field_0x8;
  uVar47 = (undefined4)__real_3fe0000000000000;
  uVar49 = (undefined4)((ulonglong)__real_3fe0000000000000 >> 0x20);
  fVar48 = __real_3f800000;
  local_5b8 = lVar41;
  if (FVar6 != (FCompactPoseBoneIndex)0x0) {
    uVar47 = (undefined4)__real_3ff0000000000000;
    uVar49 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
    local_598 = 0;
    fVar57 = __real_3f317218;
    do {
      lVar42 = local_598;
      uVar33 = 0;
      if ((int)FVar40 < *(int *)(lVar41 + 0x78)) {
        uVar33 = ~(uint)FVar40 >> 0x1f;
      }
      local_5d4 = FVar40;
      if ((uVar33 == 0) &&
         (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar31)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      uVar33 = *(uint *)(lVar42 + *(longlong *)(lVar41 + 0x70));
      lVar42 = (longlong)(int)uVar33;
      local_5a8 = uVar33;
      if (uVar33 != 0xffffffff) {
        local_5c0 = ~uVar33 >> 0x1f;
        uVar34 = 0;
        if ((int)uVar33 < (this->BoneIndices).ArrayNum) {
          uVar34 = local_5c0;
        }
        if ((uVar34 == 0) &&
           (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar31)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        lVar41 = local_5b8;
        local_5a0 = lVar42;
        if (*(int *)((this->BoneIndices).AllocatorInstance.Data + lVar42 * 4) != -1) {
          FVar8 = (this->BoneFilter).AllocatorInstance.SecondaryData;
          FVar39 = (ForElementType<FCompactPoseBoneIndex>)&this->BoneFilter;
          if (FVar8 != (ForElementType<FCompactPoseBoneIndex>)0x0) {
            FVar39 = FVar8;
          }
          FVar8 = (ForElementType<FCompactPoseBoneIndex>)
                  ((longlong)FVar39 + (longlong)(this->BoneFilter).ArrayNum * 4);
          for (; FVar39 != FVar8;
              FVar39 = (ForElementType<FCompactPoseBoneIndex>)((longlong)FVar39 + 4)) {
            if (*(FCompactPoseBoneIndex *)FVar39 == local_5d4) goto LAB_1474bed3f;
          }
          uVar34 = 0;
          if ((int)uVar33 < (this->BoneIndices).ArrayNum) {
            uVar34 = local_5c0;
          }
          if ((uVar34 == 0) &&
             (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar31)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          uVar33 = *(uint *)((this->BoneIndices).AllocatorInstance.Data + lVar42 * 4);
          lVar41 = (longlong)(int)uVar33;
          if ((uVar33 == 0xffffffff) &&
             (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InertializationBoneIndex != INDEX_NONE",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimNode_DeadBlending.cpp"
                                  ,0x20f,L""), bVar31)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          uVar43 = ~uVar33 >> 0x1f;
          uVar34 = 0;
          if ((int)uVar33 < (this->BoneTranslationDecayHalfLives).ArrayNum) {
            uVar34 = uVar43;
          }
          if ((uVar34 == 0) &&
             (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar31)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          pFVar9 = (this->BoneTranslationDecayHalfLives).AllocatorInstance.Data;
          fVar54 = this->InertializationTime;
          uVar3 = *(undefined8 *)(pFVar9 + lVar41 * 0xc);
          local_5d0 = *(FCompactPoseBoneIndex *)(pFVar9 + lVar41 * 0xc + 8);
          uVar34 = 0;
          if ((int)uVar33 < (this->BoneTranslationVelocities).ArrayNum) {
            uVar34 = uVar43;
          }
          if ((uVar34 == 0) &&
             (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar31)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          pFVar9 = (this->BoneTranslationVelocities).AllocatorInstance.Data;
          uVar4 = *(undefined8 *)(pFVar9 + lVar41 * 0xc);
          local_5c8 = CONCAT44(local_5c8._4_4_,*(undefined4 *)(pFVar9 + lVar41 * 0xc + 8));
          uVar34 = 0;
          if ((int)uVar33 < (this->BoneTranslations).ArrayNum) {
            uVar34 = uVar43;
          }
          if ((uVar34 == 0) &&
             (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar31)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          local_558._s_0.Z = (float)local_5d0;
          local_548._s_0.Z = (float)local_5c8;
          pFVar10 = (this->BoneTranslations).AllocatorInstance.Data;
          pFVar9 = pFVar10 + lVar41 * 0x18;
          local_388._s_0.X = (double)*(undefined8 *)pFVar9;
          local_388._s_0.Y = (double)*(undefined8 *)(pFVar9 + 8);
          local_388._s_0.Z = (double)*(undefined8 *)(pFVar10 + lVar41 * 0x18 + 0x10);
          local_558._0_8_ = uVar3;
          local_548._0_8_ = uVar4;
          UE::Anim::DeadBlending::Private::ExtrapolateTranslation
                    ((TVector<double> *)&local_4a8._s_0,(TVector<double> *)&local_388._s_0,
                     (TVector<float> *)&local_548._s_0,fVar54,(TVector<float> *)&local_558._s_0,
                     fVar27);
          uVar34 = 0;
          if ((int)uVar33 < (this->BoneRotationDecayHalfLives).ArrayNum) {
            uVar34 = uVar43;
          }
          if ((uVar34 == 0) &&
             (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar31)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          pFVar9 = (this->BoneRotationDecayHalfLives).AllocatorInstance.Data;
          fVar54 = this->InertializationTime;
          uVar3 = *(undefined8 *)(pFVar9 + lVar41 * 0xc);
          local_5c8 = CONCAT44(local_5c8._4_4_,*(undefined4 *)(pFVar9 + lVar41 * 0xc + 8));
          uVar34 = 0;
          if ((int)uVar33 < (this->BoneRotationVelocities).ArrayNum) {
            uVar34 = uVar43;
          }
          if ((uVar34 == 0) &&
             (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar31)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          pFVar9 = (this->BoneRotationVelocities).AllocatorInstance.Data;
          uVar4 = *(undefined8 *)(pFVar9 + lVar41 * 0xc);
          local_5d0 = *(FCompactPoseBoneIndex *)(pFVar9 + lVar41 * 0xc + 8);
          uVar34 = 0;
          if ((int)uVar33 < (this->BoneRotations).ArrayNum) {
            uVar34 = uVar43;
          }
          if ((uVar34 == 0) &&
             (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar31)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          local_538._s_0.Z = (float)local_5c8;
          local_528._s_0.Z = (float)local_5d0;
          pFVar10 = (this->BoneRotations).AllocatorInstance.Data;
          pFVar9 = pFVar10 + lVar41 * 0x20;
          local_2f8.X = *(double *)pFVar9;
          local_2f8.Y = *(double *)(pFVar9 + 8);
          pFVar10 = pFVar10 + lVar41 * 0x20 + 0x10;
          local_2f8.Z = *(double *)pFVar10;
          local_2f8.W = *(double *)(pFVar10 + 8);
          local_538._0_8_ = uVar3;
          local_528._0_8_ = uVar4;
          UE::Anim::DeadBlending::Private::ExtrapolateRotation
                    (&local_2d8,&local_2f8,(TVector<float> *)&local_528._s_0,fVar54,
                     (TVector<float> *)&local_538._s_0,fVar27);
          iVar7 = (this->BoneScaleDecayHalfLives).ArrayNum;
          if (this->bLinearlyInterpolateScales == false) {
            uVar34 = 0;
            if ((int)uVar33 < iVar7) {
              uVar34 = uVar43;
            }
            if ((uVar34 == 0) &&
               (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar31)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pFVar9 = (this->BoneScaleDecayHalfLives).AllocatorInstance.Data;
            fVar54 = this->InertializationTime;
            local_4e8 = *(undefined8 *)(pFVar9 + lVar41 * 0xc);
            local_5d0 = *(FCompactPoseBoneIndex *)(pFVar9 + lVar41 * 0xc + 8);
            uVar34 = 0;
            if ((int)uVar33 < (this->BoneScaleVelocities).ArrayNum) {
              uVar34 = uVar43;
            }
            if ((uVar34 == 0) &&
               (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar31)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pFVar9 = (this->BoneScaleVelocities).AllocatorInstance.Data;
            local_4f8 = *(undefined8 *)(pFVar9 + lVar41 * 0xc);
            local_5c8 = CONCAT44(local_5c8._4_4_,*(undefined4 *)(pFVar9 + lVar41 * 0xc + 8));
            uVar34 = 0;
            if ((int)uVar33 < (this->BoneScales).ArrayNum) {
              uVar34 = uVar43;
            }
            if ((uVar34 == 0) &&
               (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar31)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pFVar9 = (this->BoneScales).AllocatorInstance.Data;
            fVar30 = local_4f8._4_4_;
            fVar28 = (float)local_5c8;
            local_338 = *(double *)(pFVar9 + lVar41 * 0x18 + 0x10);
            dVar52 = *(double *)(pFVar9 + lVar41 * 0x18);
            dVar15 = *(double *)(pFVar9 + lVar41 * 0x18 + 8);
            local_348 = dVar52;
            dStack_340 = dVar15;
            if (local_4f8._4_4_ * local_4f8._4_4_ + (float)local_4f8 * (float)local_4f8 +
                (float)local_5c8 * (float)local_5c8 <= fVar27) {
              dVar53 = *(double *)(pFVar9 + lVar41 * 0x18 + 0x10);
            }
            else {
              fVar50 = (float)local_4e8;
              if ((float)local_4e8 <= fVar27) {
                fVar50 = fVar27;
              }
              FVar45 = local_5d0;
              if ((float)local_5d0 <= fVar27) {
                FVar45 = (FCompactPoseBoneIndex)fVar27;
              }
              fVar50 = fVar57 / fVar50;
              fVar56 = fVar57 / (float)FVar45;
              fVar46 = local_4e8._4_4_;
              if (local_4e8._4_4_ <= fVar27) {
                fVar46 = fVar27;
              }
              fVar55 = fVar56 * fVar54;
              fVar57 = fVar57 / fVar46;
              fVar46 = fVar50;
              if (fVar50 <= fVar27) {
                fVar46 = fVar27;
              }
              fVar50 = fVar50 * fVar54;
              fVar54 = fVar57 * fVar54;
              dVar53 = exp((double)((UE::Math::TVector<float>::OneVector.field0_0x0._s_0.X -
                                    fVar48 / (((fVar50 * __real_3e83b5ca + __real_3ee6ad0d) * fVar50
                                              + __real_3f80f478) * fVar50 + fVar48)) *
                                   ((float)local_4f8 / fVar46)));
              if (fVar57 <= fVar27) {
                fVar57 = fVar27;
              }
              dVar52 = dVar53 * dVar52;
              dVar53 = exp((double)((UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Y -
                                    fVar48 / (((fVar54 * __real_3e83b5ca + __real_3ee6ad0d) * fVar54
                                              + __real_3f80f478) * fVar54 + fVar48)) *
                                   (fVar30 / fVar57)));
              dVar15 = dVar53 * dVar15;
              if (fVar56 <= fVar27) {
                fVar56 = fVar27;
              }
              dVar53 = exp((double)((UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z -
                                    fVar48 / (((fVar55 * __real_3e83b5ca + __real_3ee6ad0d) * fVar55
                                              + __real_3f80f478) * fVar55 + fVar48)) *
                                   (fVar28 / fVar56)));
              dVar53 = dVar53 * local_338;
              local_1f0 = dVar53;
            }
            uVar47 = (undefined4)__real_3ff0000000000000;
            uVar49 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
          }
          else {
            uVar34 = 0;
            if ((int)uVar33 < iVar7) {
              uVar34 = uVar43;
            }
            if ((uVar34 == 0) &&
               (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar31)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pFVar9 = (this->BoneScaleDecayHalfLives).AllocatorInstance.Data;
            fVar48 = this->InertializationTime;
            uVar3 = *(undefined8 *)(pFVar9 + lVar41 * 0xc);
            local_5c8 = CONCAT44(local_5c8._4_4_,*(undefined4 *)(pFVar9 + lVar41 * 0xc + 8));
            uVar34 = 0;
            if ((int)uVar33 < (this->BoneScaleVelocities).ArrayNum) {
              uVar34 = uVar43;
            }
            if ((uVar34 == 0) &&
               (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar31)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pFVar9 = (this->BoneScaleVelocities).AllocatorInstance.Data;
            uVar4 = *(undefined8 *)(pFVar9 + lVar41 * 0xc);
            local_5d0 = *(FCompactPoseBoneIndex *)(pFVar9 + lVar41 * 0xc + 8);
            uVar34 = 0;
            if ((int)uVar33 < (this->BoneScales).ArrayNum) {
              uVar34 = uVar43;
            }
            if ((uVar34 == 0) &&
               (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar31)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            local_518._s_0.Z = (float)local_5c8;
            local_508._s_0.Z = (float)local_5d0;
            pFVar10 = (this->BoneScales).AllocatorInstance.Data;
            pFVar9 = pFVar10 + lVar41 * 0x18;
            local_368._s_0.X = (double)*(undefined8 *)pFVar9;
            local_368._s_0.Y = (double)*(undefined8 *)(pFVar9 + 8);
            local_368._s_0.Z = (double)*(undefined8 *)(pFVar10 + lVar41 * 0x18 + 0x10);
            local_518._0_8_ = uVar3;
            local_508._0_8_ = uVar4;
            pTVar35 = UE::Anim::DeadBlending::Private::ExtrapolateTranslation
                                (&local_218,(TVector<double> *)&local_368._s_0,
                                 (TVector<float> *)&local_508._s_0,fVar48,
                                 (TVector<float> *)&local_518._s_0,fVar27);
            dVar53 = (pTVar35->field0_0x0)._s_0.Z;
            dVar52 = (pTVar35->field0_0x0)._s_0.X;
            dVar15 = *(double *)((longlong)&pTVar35->field0_0x0 + 8);
          }
          local_5d0 = local_5d4;
          uVar34 = 0;
          if ((int)local_5d4 < *(int *)&param_1->field_0x8) {
            uVar34 = ~(uint)local_5d4 >> 0x1f;
          }
          local_4c8 = dVar53;
          if ((uVar34 == 0) &&
             (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar31)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          pdVar2 = (double *)((longlong)(int)local_5d0 * 0x60 + 0x10 + *(longlong *)param_1);
          pdVar1 = (double *)((longlong)(int)local_5d0 * 0x60 + *(longlong *)param_1);
          dVar20 = *pdVar2 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
          dVar51 = pdVar2[1] * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
          uVar34 = 0;
          if ((int)uVar33 < (this->BoneRotationDirections).ArrayNum) {
            uVar34 = uVar43;
          }
          dVar21 = *pdVar1 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
          dVar22 = pdVar1[1] * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
          dVar17 = local_2d8.X * dVar20 *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                   local_2d8.W * dVar22 +
                   local_2d8.Y * dVar51 *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                   local_2d8.Z * dVar21 *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
          dVar19 = local_2d8.X * dVar21 *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                   local_2d8.W * dVar51 +
                   local_2d8.Y * dVar22 *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                   local_2d8.Z * dVar20 *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
          local_588._8_4_ = SUB84(dVar17,0);
          local_588._0_8_ =
               local_2d8.X * dVar51 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
               local_2d8.W * dVar21 +
               local_2d8.Y * dVar20 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
               local_2d8.Z * dVar22 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
          local_588._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
          local_578._8_4_ = SUB84(dVar19,0);
          local_578._0_8_ =
               local_2d8.X * dVar22 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
               local_2d8.W * dVar20 +
               local_2d8.Y * dVar21 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
               local_2d8.Z * dVar51 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
          local_578._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
          if ((uVar34 == 0) &&
             (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar31)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          pFVar9 = (this->BoneRotationDirections).AllocatorInstance.Data;
          local_5c8 = lVar41 * 0x10;
          if ((double)*(float *)(pFVar9 + local_5c8 + 0xc) * (double)local_578._8_8_ +
              (double)*(float *)(pFVar9 + local_5c8 + 8) * (double)local_578._0_8_ +
              (double)*(float *)(pFVar9 + local_5c8 + 4) * (double)local_588._8_8_ +
              (double)*(float *)(pFVar9 + local_5c8) * (double)local_588._0_8_ < 0.0) {
            uVar47 = (undefined4)__real_bff0000000000000;
            uVar49 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
          }
          dVar20 = (double)local_588._0_8_ * (double)CONCAT44(uVar49,uVar47);
          dVar51 = (double)local_588._8_8_ * (double)CONCAT44(uVar49,uVar47);
          uVar34 = 0;
          if ((int)uVar33 < (this->BoneRotationDirections).ArrayNum) {
            uVar34 = uVar43;
          }
          dVar19 = (double)local_578._0_8_ * (double)CONCAT44(uVar49,uVar47);
          dVar17 = (double)local_578._8_8_ * (double)CONCAT44(uVar49,uVar47);
          local_588._8_8_ = dVar51;
          local_588._0_8_ = dVar20;
          local_578._8_8_ = dVar17;
          local_578._0_8_ = dVar19;
          if ((uVar34 == 0) &&
             (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar31)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          lVar41 = local_5a0;
          pFVar9 = (this->BoneRotationDirections).AllocatorInstance.Data;
          *(float *)(pFVar9 + local_5c8) = (float)dVar20;
          *(float *)(pFVar9 + local_5c8 + 4) = (float)dVar51;
          *(float *)(pFVar9 + local_5c8 + 8) = (float)dVar19;
          *(float *)(pFVar9 + local_5c8 + 0xc) = (float)dVar17;
          pUVar11 = (this->InertializationCustomBlendCurve).field0_0x0.DebugPtr;
          uVar33 = 0;
          if ((int)local_5a8 < *(int *)&(this->InertializationDurationPerBone).field_0x8) {
            uVar33 = local_5c0;
          }
          EVar5 = this->InertializationBlendMode;
          if ((uVar33 == 0) &&
             (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar31)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          fVar57 = __real_3f800000;
          fVar48 = *(float *)(*(longlong *)&this->InertializationDurationPerBone + lVar41 * 4);
          if (fVar48 <= fVar27) {
            fVar48 = fVar27;
          }
          fVar48 = this->InertializationTime / fVar48;
          if (__real_3f800000 <= fVar48) {
            fVar48 = __real_3f800000;
          }
          if (fVar48 <= 0.0) {
            fVar48 = 0.0;
          }
          fVar48 = FAlphaBlend::AlphaToBlendOption(fVar48,EVar5,pUVar11);
          this_00 = local_5b0;
          FVar45 = local_5d4;
          fVar57 = fVar57 - fVar48;
          if (fVar57 != 0.0) {
            lVar41 = (longlong)(int)local_5d4;
            uVar33 = 0;
            if ((int)local_5d4 < *(int *)&local_5b0->field_0x8) {
              uVar33 = ~(uint)local_5d4 >> 0x1f;
            }
            if ((uVar33 == 0) &&
               (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar31)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            lVar41 = lVar41 * 0x60 + *(longlong *)this_00;
            uVar33 = 0;
            if ((int)FVar45 < *(int *)&this_00->field_0x8) {
              uVar33 = ~(uint)FVar45 >> 0x1f;
            }
            if ((uVar33 == 0) &&
               (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar31)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            dVar17 = (double)fVar57;
            pdVar1 = (double *)((longlong)(int)FVar45 * 0x60 + 0x20 + *(longlong *)this_00);
            local_230 = *pdVar1;
            dStack_228 = pdVar1[1];
            local_220 = *(double *)((longlong)(int)FVar45 * 0x60 + 0x30 + *(longlong *)this_00);
            dVar51 = (local_4a8._s_0.X - local_230) * dVar17 + local_230;
            dVar20 = (local_4a8._s_0.Y - dStack_228) * dVar17 + dStack_228;
            uVar47 = SUB84(dVar20,0);
            uVar49 = (undefined4)((ulonglong)dVar20 >> 0x20);
            local_268 = (local_4a8._s_0.Z - local_220) * dVar17 + local_220;
            local_278._8_4_ = uVar47;
            local_278._0_8_ = dVar51;
            local_278._12_4_ = uVar49;
            auVar13._8_4_ = uVar47;
            auVar13._0_8_ = dVar51;
            auVar13._12_4_ = uVar49;
            *(undefined1 (*) [16])(lVar41 + 0x20) = auVar13;
            *(double *)(lVar41 + 0x30) = local_268;
            *(undefined8 *)(lVar41 + 0x38) = 0;
            lVar41 = (longlong)(int)local_5d4;
            uVar33 = 0;
            if ((int)local_5d4 < *(int *)&this_00->field_0x8) {
              uVar33 = ~(uint)local_5d4 >> 0x1f;
            }
            if ((uVar33 == 0) &&
               (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar31)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            lVar42 = *(longlong *)this_00;
            UE::Math::TQuat<double>::Log((TQuat<double> *)local_588,&local_318);
            local_410 = 0.0;
            dVar20 = local_318.Y * _UNK_150689698 * dVar17 * _UNK_150689678;
            local_428._8_4_ = SUB84(dVar20,0);
            local_428._0_8_ =
                 local_318.X * ___xmm_40000000000000004000000000000000 * dVar17 *
                 ___xmm_3fe00000000000003fe0000000000000;
            local_428._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
            local_418 = local_318.Z * ___xmm_40000000000000004000000000000000 * dVar17 *
                        ___xmm_3fe00000000000003fe0000000000000;
            UE::Math::TQuat<double>::Exp((TQuat<double> *)local_428,&local_2b8);
            pTVar36 = FBasePose<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::operator[]
                                ((FBasePose<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *)this_00,
                                 &local_5d4);
            dVar23 = (pTVar36->Rotation).XY.m128d_f64[0];
            dVar24 = (pTVar36->Rotation).XY.m128d_f64[1];
            dVar25 = (pTVar36->Rotation).ZW.m128d_f64[0];
            dVar26 = (pTVar36->Rotation).ZW.m128d_f64[1];
            dVar20 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
            dVar51 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
            dVar19 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
            dVar22 = local_2b8.X * dVar25 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                     local_2b8.W * dVar24 +
                     local_2b8.Y * dVar26 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                     local_2b8.Z * dVar23 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
            dVar21 = local_2b8.X * dVar23 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                     local_2b8.W * dVar26 +
                     local_2b8.Y * dVar24 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                     local_2b8.Z * dVar25 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
            auVar18._8_4_ = SUB84(dVar22,0);
            auVar18._0_8_ =
                 local_2b8.X * dVar26 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                 local_2b8.W * dVar23 +
                 local_2b8.Y * dVar25 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                 local_2b8.Z * dVar24 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
            auVar18._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
            *(undefined1 (*) [16])(lVar41 * 0x60 + lVar42) = auVar18;
            auVar16._8_4_ = SUB84(dVar21,0);
            auVar16._0_8_ =
                 local_2b8.X * dVar24 * dVar20 + local_2b8.W * dVar25 +
                 local_2b8.Y * dVar23 * dVar51 + local_2b8.Z * dVar26 * dVar19;
            auVar16._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
            *(undefined1 (*) [16])(lVar41 * 0x60 + 0x10 + lVar42) = auVar16;
            if (this->bLinearlyInterpolateScales == false) {
              pTVar36 = FBasePose<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::operator[]
                                  ((FBasePose<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *)
                                   this_00,&local_5d4);
              pTVar37 = FBasePose<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::operator[]
                                  ((FBasePose<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *)
                                   this_00,&local_5d4);
              local_3e8._8_4_ = SUB84(dVar15,0);
              local_3e8._0_8_ = dVar52;
              local_3e8._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
              local_4c8 = (pTVar37->Scale3D).ZW.m128d_f64[0];
              local_408 = (pTVar37->Scale3D).XY.m128d_f64[0];
              dStack_400 = (pTVar37->Scale3D).XY.m128d_f64[1];
              local_3f8 = local_4c8;
              local_3e8._s_0.Z = dVar53;
              local_3c8._s_0.X = local_408;
              local_3c8._s_0.Y = dStack_400;
              local_3c8._s_0.Z = local_4c8;
              pTVar35 = UE::Anim::DeadBlending::Private::VectorEerp
                                  (local_1e8,(TVector<double> *)&local_3c8._s_0,
                                   (TVector<double> *)&local_3e8._s_0,fVar57,fVar27);
              dVar15 = (pTVar35->field0_0x0)._s_0.Z;
              dVar52 = (pTVar35->field0_0x0)._s_0.X;
              dVar53 = *(double *)((longlong)&pTVar35->field0_0x0 + 8);
            }
            else {
              pTVar36 = FBasePose<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::operator[]
                                  ((FBasePose<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *)
                                   this_00,&local_5d4);
              pTVar37 = FBasePose<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::operator[]
                                  ((FBasePose<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *)
                                   this_00,&local_5d4);
              local_260 = (pTVar37->Scale3D).XY.m128d_f64[0];
              dStack_258 = (pTVar37->Scale3D).XY.m128d_f64[1];
              local_250 = (pTVar37->Scale3D).ZW.m128d_f64[0];
              dVar52 = (dVar52 - local_260) * dVar17 + local_260;
              dVar53 = (dVar15 - dStack_258) * dVar17 + dStack_258;
              dVar15 = (local_4c8 - local_250) * dVar17 + local_250;
              local_248._8_4_ = SUB84(dVar53,0);
              local_248._0_8_ = dVar52;
              local_248._12_4_ = (int)((ulonglong)dVar53 >> 0x20);
              local_238 = dVar15;
            }
            auVar14._8_4_ = SUB84(dVar53,0);
            auVar14._0_8_ = dVar52;
            auVar14._12_4_ = (int)((ulonglong)dVar53 >> 0x20);
            *(undefined1 (*) [16])(pTVar36->Scale3D).XY.m128d_f64 = auVar14;
            (pTVar36->Scale3D).ZW.m128d_f64[0] = dVar15;
            (pTVar36->Scale3D).ZW.m128d_f64[1] = 0.0;
            param_1 = this_00;
          }
          uVar47 = (undefined4)__real_3ff0000000000000;
          uVar49 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
          lVar41 = local_5b8;
          fVar57 = __real_3f317218;
          fVar48 = __real_3f800000;
        }
      }
LAB_1474bed3f:
      FVar40 = (FCompactPoseBoneIndex)((int)FVar40 + 1);
      local_598 = local_598 + 4;
    } while (FVar40 != FVar6);
    uVar47 = (undefined4)__real_3fe0000000000000;
    uVar49 = (undefined4)((ulonglong)__real_3fe0000000000000 >> 0x20);
    param_2 = (FBlendedCurve *)local_568;
  }
  fVar57 = this->InertializationDuration;
  if (this->InertializationDuration <= fVar27) {
    fVar57 = fVar27;
  }
  fVar57 = this->InertializationTime / fVar57;
  if (fVar48 <= fVar57) {
    fVar57 = fVar48;
  }
  if (fVar57 <= 0.0) {
    fVar57 = 0.0;
  }
  fVar57 = FAlphaBlend::AlphaToBlendOption
                     (fVar57,this->InertializationBlendMode,
                      (this->InertializationCustomBlendCurve).field0_0x0.DebugPtr);
  TBaseBlendedCurve<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,UE::Anim::FCurveElement>
  ::CopyFrom<TMemStackAllocator<0>,UE::Anim::FCurveElement>
            (&this->PoseCurveData,
             (TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)param_2);
  local_328._4_4_ = uStack_4b4;
  pFStack_4b0 = this;
  local_328.CurveAlpha = fVar48 - fVar57;
  local_328.__this = this;
  UE::Anim::FNamedValueArrayUtils::
  Union<_FAnimNode_DeadBlending::ApplyTo_::__l2::<lambda_1>,TMemStackAllocator<0>,UE::Anim::FCurveElement,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,UE::Anim::FCurveElement,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,FAnimNode_DeadBlending::FDeadBlendingCurveElement>
            ((TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)param_2,
             (TNamedValueArray<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,UE::Anim::FCurveElement>
              *)&this->PoseCurveData,
             (TNamedValueArray<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,FAnimNode_DeadBlending::FDeadBlendingCurveElement>
              *)&this->CurveData,&local_328);
  pIVar38 = UE::Anim::IAnimRootMotionProvider::Get();
  if (pIVar38 != (IAnimRootMotionProvider *)0x0) {
    pUVar11 = (this->InertializationCustomBlendCurve).field0_0x0.DebugPtr;
    EVar5 = this->InertializationBlendMode;
    if (*(int *)&(this->InertializationDurationPerBone).field_0x8 < 1) {
      bVar31 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar31) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
    }
    fVar57 = **(float **)&this->InertializationDurationPerBone;
    if (**(float **)&this->InertializationDurationPerBone <= fVar27) {
      fVar57 = fVar27;
    }
    fVar57 = this->InertializationTime / fVar57;
    if (fVar48 <= fVar57) {
      fVar57 = fVar48;
    }
    if (fVar57 <= 0.0) {
      fVar57 = 0.0;
    }
    fVar57 = FAlphaBlend::AlphaToBlendOption(fVar57,EVar5,pUVar11);
    pFVar29 = local_560;
    fVar48 = fVar48 - fVar57;
    if (fVar48 != 0.0) {
      local_158[0] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
      local_158[1] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
      local_148[0] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
      local_148[1] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
      local_138[0] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
      local_138[1] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
      local_128[0] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
      local_128[1] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
      local_118[0] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
      local_118[1] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
      local_108[0] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
      local_108[1] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
      cVar32 = (**(code **)((longlong)*pIVar38 + 0x20))(pIVar38,local_560,local_158);
      if (cVar32 != '\0') {
        dVar52 = (double)this->DeltaTime;
        dVar21 = (double)fVar48;
        local_448.W = 0.0;
        local_128[1] = 0.0;
        local_128[0] = ((double)(this->RootTranslationVelocity).field0_0x0._s_0.Z * dVar52 -
                       local_128[0]) * dVar21 + local_128[0];
        dVar15 = ((double)(this->RootTranslationVelocity).field0_0x0._s_0.Y * dVar52 - local_138[1])
                 * dVar21 + local_138[1];
        local_448.X = (double)(this->RootRotationVelocity).field0_0x0._s_0.X * dVar52 *
                      dVar21 * (double)CONCAT44(uVar49,uVar47);
        local_138[1]._0_4_ = SUB84(dVar15,0);
        local_138[0] = ((double)(this->RootTranslationVelocity).field0_0x0._s_0.X * dVar52 -
                       local_138[0]) * dVar21 + local_138[0];
        local_138[1]._4_4_ = (int)((ulonglong)dVar15 >> 0x20);
        local_448.Y = (double)(this->RootRotationVelocity).field0_0x0._s_0.Y * dVar52 *
                      dVar21 * (double)CONCAT44(uVar49,uVar47);
        local_448.Z = (double)(this->RootRotationVelocity).field0_0x0._s_0.Z * dVar52 *
                      dVar21 * (double)CONCAT44(uVar49,uVar47);
        UE::Math::TQuat<double>::Exp(&local_448,&local_298);
        dVar15 = local_298.Z * local_158[1];
        dVar53 = local_298.X * local_148[0] *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                 local_158[1] * local_298.W +
                 local_148[1] * local_298.Y *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                 local_298.Z * local_158[0] *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
        dVar20 = local_298.X * local_158[1];
        dVar17 = local_158[0] * local_298.Y;
        dVar52 = (double)this->DeltaTime;
        dVar19 = local_298.Z * local_148[1];
        dVar51 = local_298.X * local_158[0] *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                 local_148[1] * local_298.W +
                 local_158[1] * local_298.Y *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                 local_298.Z * local_148[0] *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
        local_158[1]._0_4_ = SUB84(dVar53,0);
        local_158[0] = local_298.X * local_148[1] *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                       local_158[0] * local_298.W +
                       local_148[0] * local_298.Y *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                       dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
        local_158[1]._4_4_ = (int)((ulonglong)dVar53 >> 0x20);
        local_148[1]._0_4_ = SUB84(dVar51,0);
        local_148[0] = dVar20 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                       local_148[0] * local_298.W +
                       dVar17 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                       dVar19 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
        local_148[1]._4_4_ = (int)((ulonglong)dVar51 >> 0x20);
        dVar15 = (double)(this->RootScaleVelocity).field0_0x0._s_0.X * dVar52;
        dVar53 = (double)(this->RootScaleVelocity).field0_0x0._s_0.Y * dVar52;
        dVar52 = (double)(this->RootScaleVelocity).field0_0x0._s_0.Z * dVar52;
        if (this->bLinearlyInterpolateScales == false) {
          local_458 = local_108[0];
          local_3a8._s_0.Z = local_108[0];
          local_3a8._s_0.X = local_118[0];
          local_3a8._s_0.Y = local_118[1];
          local_488[0]._0_8_ = dVar15;
          local_488[0]._8_8_ = dVar53;
          local_488[0]._16_8_ = dVar52;
          pTVar35 = UE::Anim::DeadBlending::Private::VectorEerp
                              (local_188,(TVector<double> *)&local_3a8._s_0,
                               (TVector<double> *)&local_488[0]._s_0,fVar48,fVar27);
          local_118 = *(double (*) [2])&pTVar35->field0_0x0;
          local_108[0] = (pTVar35->field0_0x0)._s_0.Z;
        }
        else {
          local_108[0] = (dVar52 - local_108[0]) * dVar21 + local_108[0];
          dVar52 = (dVar53 - local_118[1]) * dVar21 + local_118[1];
          local_118[1]._0_4_ = SUB84(dVar52,0);
          local_118[0] = (dVar15 - local_118[0]) * dVar21 + local_118[0];
          local_118[1]._4_4_ = (int)((ulonglong)dVar52 >> 0x20);
        }
        local_108[1] = 0.0;
        (**(code **)((longlong)*pIVar38 + 0x18))(pIVar38,local_158,pFVar29);
      }
    }
  }
  if (bVar44) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// CacheBones_AnyThread @ 1474c1b20

void __thiscall
FAnimNode_DeadBlending::CacheBones_AnyThread
          (FAnimNode_DeadBlending *this,FAnimationCacheBonesContext *param_1)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  ForElementType<FCompactPoseBoneIndex> FVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FCompactPoseBoneIndex FVar7;
  undefined4 extraout_var;
  ForElementType<FCompactPoseBoneIndex> FVar8;
  uint uVar9;
  uint uVar10;
  FCompactPoseBoneIndex local_res8 [2];
  FAnimationCacheBonesContext *local_res10;
  longlong local_res20;
  
  local_res10 = param_1;
  FStatsHierarchical::BeginMeasurement("FAnimNode_DeadBlending::CacheBones_AnyThread");
  FPoseLinkBase::CacheBones((FPoseLinkBase *)&this->Source,param_1);
  if ((*(longlong *)(*(longlong *)param_1 + 0x660) == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_res8[0] = (FCompactPoseBoneIndex)0xffffffff;
  TArray<FCompactPoseBoneIndex,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>::Init
            (&this->BoneFilter,local_res8,(this->FilteredBones).ArrayNum);
  uVar9 = 0;
  if (0 < (this->FilteredBones).ArrayNum) {
    local_res20 = 0;
    do {
      uVar10 = ~uVar9 >> 0x1f;
      uVar6 = 0;
      if ((int)uVar9 < (this->FilteredBones).ArrayNum) {
        uVar6 = uVar10;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar1 = *(longlong *)param_1;
      pFVar2 = (this->FilteredBones).AllocatorInstance.Data;
      if ((*(longlong *)(lVar1 + 0x150) == 0) &&
         (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_2821110184175206029>,true,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Animation\\AnimInstanceProxy.h"
                             ,0x173,"Skeleton"), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FBoneReference::Initialize
                ((FBoneReference *)(pFVar2 + (longlong)(int)uVar9 * 0x10),
                 *(USkeleton **)(lVar1 + 0x150));
      uVar6 = 0;
      if ((int)uVar9 < (this->FilteredBones).ArrayNum) {
        uVar6 = uVar10;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar7 = FBoneReference::GetCompactPoseIndex
                        ((FBoneReference *)
                         ((this->FilteredBones).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x10
                         ),(FBoneContainer *)&stack0x00000018);
      uVar6 = 0;
      if ((int)uVar9 < (this->BoneFilter).ArrayNum) {
        uVar6 = uVar10;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar3 = (this->BoneFilter).AllocatorInstance.SecondaryData;
      FVar8 = (ForElementType<FCompactPoseBoneIndex>)&this->BoneFilter;
      if (FVar3 != (ForElementType<FCompactPoseBoneIndex>)0x0) {
        FVar8 = FVar3;
      }
      uVar9 = uVar9 + 1;
      *(undefined4 *)(local_res20 + (longlong)FVar8) = *(undefined4 *)CONCAT44(extraout_var,FVar7);
      local_res20 = local_res20 + 4;
      param_1 = local_res10;
    } while ((int)uVar9 < (this->FilteredBones).ArrayNum);
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// Deactivate @ 1474caf50

void __thiscall FAnimNode_DeadBlending::Deactivate(FAnimNode_DeadBlending *this)

{
  int *piVar1;
  undefined1 *puVar2;
  
  this->InertializationState = Inactive;
  piVar1 = &(this->BoneIndices).ArrayMax;
  (this->BoneIndices).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->BoneIndices).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->BoneTranslations).ArrayMax;
  (this->BoneTranslations).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&(this->BoneTranslations).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->BoneRotations).ArrayMax;
  (this->BoneRotations).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,0x10,0,&(this->BoneRotations).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->BoneRotationDirections).ArrayMax;
  (this->BoneRotationDirections).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,0x10,0,&(this->BoneRotationDirections).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->BoneScales).ArrayMax;
  (this->BoneScales).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&(this->BoneScales).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->BoneTranslationVelocities).ArrayMax;
  (this->BoneTranslationVelocities).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&(this->BoneTranslationVelocities).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->BoneRotationVelocities).ArrayMax;
  (this->BoneRotationVelocities).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&(this->BoneRotationVelocities).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->BoneScaleVelocities).ArrayMax;
  (this->BoneScaleVelocities).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&(this->BoneScaleVelocities).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->BoneTranslationDecayHalfLives).ArrayMax;
  (this->BoneTranslationDecayHalfLives).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&(this->BoneTranslationDecayHalfLives).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->BoneRotationDecayHalfLives).ArrayMax;
  (this->BoneRotationDecayHalfLives).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&(this->BoneRotationDecayHalfLives).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->BoneScaleDecayHalfLives).ArrayMax;
  (this->BoneScaleDecayHalfLives).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&(this->BoneScaleDecayHalfLives).AllocatorInstance,0,piVar1);
  }
  puVar2 = &(this->InertializationDurationPerBone).field_0xc;
  *(undefined4 *)&(this->InertializationDurationPerBone).field_0x8 = 0;
  if (*(int *)puVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)&this->InertializationDurationPerBone,0,(int *)puVar2);
  }
  return;
}

// Evaluate_AnyThread @ 1474cfce0

/* WARNING: Type propagation algorithm not settling */
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
FAnimNode_DeadBlending::Evaluate_AnyThread(FAnimNode_DeadBlending *this,FPoseContext *param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  TTypedIndexRange<FSkeletonPoseBoneIndex,TArray<float,TSizedDefaultAllocator<32>_>_> *this_00;
  FScriptContainerElement *pFVar3;
  float fVar4;
  double adVar5 [2];
  double adVar6 [2];
  int iVar7;
  FInertializationRequest *pFVar8;
  FAnimInstanceProxy *this_01;
  FScriptContainerElement *pFVar9;
  UCurveFloat *pUVar10;
  code *pcVar11;
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  longlong lVar15;
  undefined7 uVar16;
  TConsoleVariableData<int> *pTVar17;
  FInertializationSparsePose *pFVar18;
  double *pdVar19;
  bool bVar20;
  uint uVar21;
  USkeletalMeshComponent *this_02;
  TTransform<double> *pTVar22;
  UObject *pUVar23;
  TTypedIndexRange<FSkeletonPoseBoneIndex,TArrayView<float,int>_> *pTVar24;
  float *pfVar25;
  AActor *pAVar26;
  FName FVar27;
  UPackage *pUVar28;
  UEnum *this_03;
  FInertializationSparsePose *pFVar29;
  FInertializationSparsePose *pFVar30;
  TTypedIndexRange<FSkeletonPoseBoneIndex,TArrayView<float,int>_> *pTVar31;
  FInertializationSparsePose *pFVar32;
  double *pdVar33;
  ulonglong uVar34;
  UBlendProfile *this_04;
  float *pfVar35;
  ForAnyElementType FVar36;
  uint uVar37;
  ulonglong uVar38;
  int iVar39;
  longlong lVar40;
  longlong lVar41;
  ulonglong uVar42;
  float *pfVar43;
  uint uVar44;
  wchar_t *pwVar45;
  float fVar46;
  float fVar47;
  double dVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  double dVar54;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  double dVar65;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  double dVar66;
  undefined4 uVar70;
  undefined1 auVar67 [16];
  double dVar71;
  undefined4 uVar72;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar73 [16];
  double dVar74;
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  double dVar78;
  double dVar79;
  double dVar83;
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  float fVar84;
  undefined1 local_res8 [8];
  FCompactPoseBoneIndex local_res18 [2];
  int local_res20;
  float local_368 [2];
  float *local_360;
  USkeleton *local_358;
  FName local_350;
  FName local_348;
  FString local_340;
  double local_330;
  double dStack_328;
  double local_320;
  TTypedIndexRange<FSkeletonPoseBoneIndex,TArrayView<float,int>_> local_318;
  TTypedIndexRange<FSkeletonPoseBoneIndex,TArrayView<float,int>_> local_308;
  double local_2f8;
  double dStack_2f0;
  double local_2e8;
  undefined1 local_2e0 [16];
  double local_2d0;
  TTransform<double> local_2c8;
  TTypedIndexRange<FSkeletonPoseBoneIndex,TArrayView<float,int>_> local_268;
  TTypedIndexRange<FSkeletonPoseBoneIndex,TArrayView<float,int>_> local_258;
  undefined1 local_248 [16];
  double local_228 [62];
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_DeadBlending::Evaluate_AnyThread");
  FPoseLink::Evaluate(&this->Source,param_1);
  pTVar17 = CVarAnimDeadBlendingEnable.Ref;
  bVar20 = IsInParallelGameThread();
  uVar34 = 0;
  if (bVar20) {
LAB_1474cfd36:
    uVar38 = uVar34;
  }
  else {
    bVar20 = IsInGameThread();
    uVar38 = 4;
    if (bVar20) goto LAB_1474cfd36;
  }
  if (*(int *)((longlong)pTVar17->ShadowedValue + uVar38) == 0) {
    piVar1 = &(this->RequestQueue).ArrayMax;
    pFVar8 = (FInertializationRequest *)(this->RequestQueue).AllocatorInstance.Data;
    iVar39 = (this->RequestQueue).ArrayNum;
    if (*piVar1 < 0) {
      DestructItems<FInertializationRequest,int>(pFVar8,iVar39);
      (this->RequestQueue).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x58,8,0,&(this->RequestQueue).AllocatorInstance,0,piVar1);
      }
    }
    else {
      DestructItems<FInertializationRequest,int>(pFVar8,iVar39);
      (this->RequestQueue).ArrayNum = 0;
    }
    Deactivate(this);
    FInertializationSparsePose::Empty(&this->PrevPoseSnapshot);
    FInertializationSparsePose::Empty(&this->CurrPoseSnapshot);
    this->DeltaTime = 0.0;
    goto LAB_1474d1139;
  }
  this_01 = (FAnimInstanceProxy *)param_1->_padding_;
  dVar13 = (this_01->ComponentTransform).Scale3D.ZW.m128d_f64[0];
  dVar66 = (this_01->ComponentTransform).Scale3D.ZW.m128d_f64[1];
  adVar5 = *&(this_01->ComponentTransform).Rotation.ZW.m128d_f64;
  dVar48 = (this_01->ComponentTransform).Scale3D.XY.m128d_f64[0];
  dVar14 = (this_01->ComponentTransform).Scale3D.XY.m128d_f64[1];
  adVar6 = *&(this_01->ComponentTransform).Rotation.XY.m128d_f64;
  dVar54 = (this_01->ComponentTransform).Translation.XY.m128d_f64[0];
  dVar74 = (this_01->ComponentTransform).Translation.XY.m128d_f64[1];
  dVar78 = (this_01->ComponentTransform).Translation.ZW.m128d_f64[0];
  local_2c8.Translation.ZW.m128d_f64[1] = (this_01->ComponentTransform).Translation.ZW.m128d_f64[1];
  local_2c8.Rotation.XY.m128d_f64 = adVar6;
  local_2c8.Rotation.ZW.m128d_f64 = adVar5;
  local_2c8.Translation.XY.m128d_f64[0] = dVar54;
  local_2c8.Translation.XY.m128d_f64[1] = dVar74;
  local_2c8.Translation.ZW.m128d_f64[0] = dVar78;
  local_2c8.Scale3D.XY.m128d_f64[0] = dVar48;
  local_2c8.Scale3D.XY.m128d_f64[1] = dVar14;
  local_2c8.Scale3D.ZW.m128d_f64[0] = dVar13;
  local_2c8.Scale3D.ZW.m128d_f64[1] = dVar66;
  this_02 = FAnimInstanceProxy::GetSkelMeshComponent(this_01);
  fVar46 = USkeletalMeshComponent::GetTeleportDistanceThreshold(this_02);
  fVar84 = 0.0;
  if (((this->CurrPoseSnapshot).BoneIndices.ArrayNum != 0) && (0.0 < fVar46)) {
    local_res18[0] = (FCompactPoseBoneIndex)0x0;
    pTVar22 = FBasePose<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::operator[]
                        ((FBasePose<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *)&param_1->Pose,
                         local_res18);
    dVar79 = adVar5[0];
    dVar83 = adVar5[1];
    dVar65 = adVar6[1];
    auVar73 = blendpd((undefined1  [16])adVar6,(undefined1  [16])adVar5,2);
    local_2f8 = (pTVar22->Translation).XY.m128d_f64[0];
    dStack_2f0 = (pTVar22->Translation).XY.m128d_f64[1];
    local_2e8 = (pTVar22->Translation).ZW.m128d_f64[0];
    auVar51._8_4_ = adVar5[0]._0_4_;
    auVar51._0_8_ = dVar65;
    auVar51._12_4_ = adVar5[0]._4_4_;
    dVar48 = dVar48 * local_2f8;
    dVar14 = dVar14 * dStack_2f0;
    uVar70 = (undefined4)((ulonglong)dVar14 >> 0x20);
    auVar75._8_4_ = SUB84(dVar14,0);
    auVar75._0_8_ = dVar48;
    auVar75._12_4_ = uVar70;
    auVar55._8_4_ = SUB84(dVar14,0);
    auVar55._0_8_ = dVar48;
    auVar55._12_4_ = uVar70;
    dVar13 = local_2e8 * dVar13;
    dVar66 = dVar66 * 0.0;
    auVar56._8_4_ = SUB84(dVar66,0);
    auVar56._0_8_ = dVar13;
    auVar56._12_4_ = (int)((ulonglong)dVar66 >> 0x20);
    auVar56 = blendpd(auVar55,auVar56,2);
    auVar76._0_8_ = auVar75._8_8_ * adVar6[0] - dVar65 * dVar48;
    auVar76._8_8_ = dVar13 * dVar65 - auVar51._8_8_ * dVar14;
    auVar67._8_4_ = SUB84(auVar76._8_8_,0);
    auVar67._0_8_ = auVar76._0_8_;
    auVar67._12_4_ = (int)((ulonglong)auVar76._8_8_ >> 0x20);
    auVar57._0_8_ = auVar56._0_8_ * dVar79 - auVar73._0_8_ * dVar13;
    auVar57._8_8_ = auVar56._8_8_ * dVar83 - auVar73._8_8_ * dVar66;
    auVar56 = blendpd(auVar76,auVar57,2);
    dVar66 = auVar67._8_8_ + auVar67._8_8_;
    dVar71 = auVar57._0_8_ + auVar57._0_8_;
    auVar77._0_8_ = auVar56._0_8_ + auVar56._0_8_;
    auVar77._8_8_ = auVar56._8_8_ + auVar56._8_8_;
    uVar70 = SUB84(dVar71,0);
    auVar60._8_4_ = uVar70;
    auVar60._0_8_ = dVar66;
    uVar72 = (undefined4)((ulonglong)dVar71 >> 0x20);
    auVar60._12_4_ = uVar72;
    auVar62._8_4_ = uVar70;
    auVar62._0_8_ = dVar66;
    auVar62._12_4_ = uVar72;
    auVar58._8_4_ = uVar70;
    auVar58._0_8_ = dVar66;
    auVar58._12_4_ = uVar72;
    auVar56 = blendpd(auVar58,auVar77,2);
    auVar61._0_8_ = auVar60._8_8_ * adVar6[0] - dVar66 * dVar65;
    auVar61._8_8_ = auVar77._0_8_ * dVar65 - auVar62._8_8_ * dVar79;
    auVar49._8_4_ = SUB84(auVar77._8_8_,0);
    auVar49._0_8_ = auVar77._0_8_;
    auVar49._12_4_ = (int)((ulonglong)auVar77._8_8_ >> 0x20);
    auVar59._0_8_ = auVar56._0_8_ * dVar79 - auVar77._0_8_ * auVar73._0_8_;
    auVar59._8_8_ = auVar56._8_8_ * dVar83 - auVar49._8_8_ * auVar73._8_8_;
    auVar73._8_4_ = SUB84(auVar61._8_8_,0);
    auVar73._0_8_ = auVar61._0_8_;
    auVar73._12_4_ = (int)((ulonglong)auVar61._8_8_ >> 0x20);
    auVar56 = blendpd(auVar61,auVar59,2);
    local_330 = dVar66 * dVar83 + dVar48 + auVar73._8_8_ + dVar54;
    dStack_328 = dVar71 * dVar83 + dVar14 + auVar59._0_8_ + dVar74;
    local_320 = auVar77._0_8_ * dVar83 + dVar13 + auVar56._0_8_ + dVar78;
    if (((this->CurrPoseSnapshot).BoneIndices.ArrayNum < 1) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar20)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    uVar37 = *(uint *)(this->CurrPoseSnapshot).BoneIndices.AllocatorInstance.Data;
    if (uVar37 != 0xffffffff) {
      uVar44 = 0;
      if ((int)uVar37 < (this->CurrPoseSnapshot).BoneTranslations.ArrayNum) {
        uVar44 = ~uVar37 >> 0x1f;
      }
      if ((uVar44 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      auVar56 = *(undefined1 (*) [16])
                 (this->CurrPoseSnapshot).ComponentTransform.Rotation.ZW.m128d_f64;
      dVar54 = auVar56._0_8_;
      pFVar9 = (this->CurrPoseSnapshot).BoneTranslations.AllocatorInstance.Data;
      dVar14 = (this->CurrPoseSnapshot).ComponentTransform.Rotation.ZW.m128d_f64[1];
      pFVar3 = pFVar9 + (longlong)(int)uVar37 * 0x18;
      dVar48 = *(double *)(pFVar9 + (longlong)(int)uVar37 * 0x18 + 0x10) *
               (this->CurrPoseSnapshot).ComponentTransform.Scale3D.ZW.m128d_f64[0];
      dVar13 = (this->CurrPoseSnapshot).ComponentTransform.Scale3D.ZW.m128d_f64[1] * 0.0;
      dVar74 = (this->CurrPoseSnapshot).ComponentTransform.Scale3D.XY.m128d_f64[0] *
               *(double *)pFVar3;
      dVar78 = (this->CurrPoseSnapshot).ComponentTransform.Scale3D.XY.m128d_f64[1] *
               *(double *)(pFVar3 + 8);
      local_248 = *(undefined1 (*) [16])
                   (this->CurrPoseSnapshot).ComponentTransform.Rotation.XY.m128d_f64;
      auVar62 = blendpd(local_248,auVar56,2);
      auVar80._8_4_ = SUB84(dVar78,0);
      auVar80._0_8_ = dVar74;
      uVar70 = (undefined4)((ulonglong)dVar78 >> 0x20);
      auVar80._12_4_ = uVar70;
      auVar81._0_8_ = auVar80._8_8_ * local_248._0_8_ - local_248._8_8_ * dVar74;
      auVar81._8_8_ = dVar48 * local_248._8_8_ - dVar54 * dVar78;
      auVar50._8_4_ = SUB84(dVar78,0);
      auVar50._0_8_ = dVar74;
      auVar50._12_4_ = uVar70;
      auVar12._8_4_ = SUB84(dVar13,0);
      auVar12._0_8_ = dVar48;
      auVar12._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
      auVar51 = blendpd(auVar50,auVar12,2);
      auVar52._0_8_ = auVar51._0_8_ * dVar54 - auVar62._0_8_ * dVar48;
      auVar52._8_8_ = auVar51._8_8_ * auVar56._8_8_ - auVar62._8_8_ * dVar13;
      auVar51 = *(undefined1 (*) [16])
                 (this->CurrPoseSnapshot).ComponentTransform.Rotation.XY.m128d_f64;
      auVar62 = blendpd(auVar81,auVar52,2);
      dVar13 = auVar81._8_8_ + auVar81._8_8_;
      dVar66 = auVar52._0_8_ + auVar52._0_8_;
      uVar70 = (undefined4)((ulonglong)dVar66 >> 0x20);
      auVar82._0_8_ = auVar62._0_8_ + auVar62._0_8_;
      auVar82._8_8_ = auVar62._8_8_ + auVar62._8_8_;
      auVar68._8_4_ = SUB84(dVar66,0);
      auVar68._0_8_ = dVar13;
      auVar68._12_4_ = uVar70;
      auVar63._8_4_ = SUB84(dVar66,0);
      auVar63._0_8_ = dVar13;
      auVar63._12_4_ = uVar70;
      auVar62 = blendpd(auVar63,auVar82,2);
      auVar69._0_8_ = auVar68._8_8_ * auVar51._0_8_ - auVar51._8_8_ * dVar13;
      auVar69._8_8_ = auVar82._0_8_ * auVar51._8_8_ - dVar54 * dVar66;
      auVar51 = blendpd(auVar51,auVar56,2);
      auVar53._8_4_ = SUB84(auVar69._8_8_,0);
      auVar53._0_8_ = auVar69._0_8_;
      auVar53._12_4_ = (int)((ulonglong)auVar69._8_8_ >> 0x20);
      auVar64._0_8_ = auVar62._0_8_ * dVar54 - auVar51._0_8_ * auVar82._0_8_;
      auVar64._8_8_ = auVar62._8_8_ * auVar56._8_8_ - auVar51._8_8_ * auVar82._8_8_;
      auVar56 = blendpd(auVar69,auVar64,2);
      dVar13 = dVar13 * dVar14 + dVar74 + auVar53._8_8_ +
               (this->CurrPoseSnapshot).ComponentTransform.Translation.XY.m128d_f64[0];
      dVar66 = dVar66 * dVar14 + dVar78 + auVar64._0_8_ +
               (this->CurrPoseSnapshot).ComponentTransform.Translation.XY.m128d_f64[1];
      local_2d0 = auVar82._0_8_ * dVar14 + dVar48 + auVar56._0_8_ +
                  (this->CurrPoseSnapshot).ComponentTransform.Translation.ZW.m128d_f64[0];
      dVar48 = dVar13 - local_330;
      local_2e0._8_4_ = SUB84(dVar66,0);
      local_2e0._0_8_ = dVar13;
      local_2e0._12_4_ = (int)((ulonglong)dVar66 >> 0x20);
      if ((double)(fVar46 * fVar46) <
          (dVar66 - dStack_328) * (dVar66 - dStack_328) + dVar48 * dVar48 +
          (local_2d0 - local_320) * (local_2d0 - local_320)) {
        Deactivate(this);
      }
    }
  }
  if (((this->CurrPoseSnapshot).BoneIndices.ArrayNum == 0) &&
     ((this->PrevPoseSnapshot).BoneIndices.ArrayNum == 0)) {
    piVar1 = &(this->RequestQueue).ArrayMax;
    pFVar8 = (FInertializationRequest *)(this->RequestQueue).AllocatorInstance.Data;
    iVar39 = (this->RequestQueue).ArrayNum;
    if (*piVar1 < 0) {
      DestructItems<FInertializationRequest,int>(pFVar8,iVar39);
      (this->RequestQueue).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x58,8,0,&(this->RequestQueue).AllocatorInstance,0,piVar1);
      }
    }
    else {
      DestructItems<FInertializationRequest,int>(pFVar8,iVar39);
      (this->RequestQueue).ArrayNum = 0;
    }
  }
  fVar46 = __real_7f7fffff;
  iVar39 = (this->RequestQueue).ArrayNum;
  if (iVar39 != 0) {
    uVar38 = 0xffffffff;
    uVar42 = uVar34;
    fVar47 = __real_7f7fffff;
    if (0 < iVar39) {
      do {
        uVar44 = (uint)uVar34;
        uVar37 = 0;
        if ((int)uVar44 < (this->RequestQueue).ArrayNum) {
          uVar37 = ~uVar44 >> 0x1f;
        }
        if ((uVar37 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pFVar3 = (this->RequestQueue).AllocatorInstance.Data;
        FVar27 = *(FName *)(pFVar3 + uVar42 + 0x20);
        if (((FVar27 == (FName)0x0) || (FVar27 == this->Tag)) &&
           (fVar4 = *(float *)(pFVar3 + uVar42), fVar4 < fVar47)) {
          uVar38 = uVar34;
          fVar47 = fVar4;
        }
        uVar34 = (ulonglong)(uVar44 + 1);
        uVar42 = uVar42 + 0x58;
      } while ((int)(uVar44 + 1) < (this->RequestQueue).ArrayNum);
      uVar37 = (uint)uVar38;
      if (uVar37 != 0xffffffff) {
        lVar40 = param_1->_padding_;
        if ((*(longlong *)(lVar40 + 0x660) == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x44d,L""), bVar20)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pUVar23 = FWeakObjectPtr::Get((FWeakObjectPtr *)(*(longlong *)(lVar40 + 0x660) + 0x40));
        if ((pUVar23 == (UObject *)0x0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("SkeletonAsset",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimNode_DeadBlending.cpp"
                                ,0x4c,L""), bVar20)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        iVar39 = *(int *)&pUVar23[2].field_0x20;
        this->InertializationTime = 0.0;
        uVar44 = 0;
        if ((int)uVar37 < (this->RequestQueue).ArrayNum) {
          uVar44 = ~uVar37 >> 0x1f;
        }
        local_res20 = iVar39;
        if ((uVar44 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pfVar25 = &this->InertializationDuration;
        local_360 = (float *)((longlong)(int)uVar37 * 0x58);
        this_00 = &this->InertializationDurationPerBone;
        *pfVar25 = *(float *)((this->RequestQueue).AllocatorInstance.Data + (longlong)local_360) *
                   this->BlendTimeMultiplier;
        TArray<float,TSizedDefaultAllocator<32>_>::Init
                  ((TArray<float,TSizedDefaultAllocator<32>_> *)this_00,pfVar25,iVar39);
        lVar40 = param_1->_padding_;
        if ((*(longlong *)(lVar40 + 0x660) == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x44d,L""), bVar20)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        local_358 = (USkeleton *)
                    FWeakObjectPtr::Get((FWeakObjectPtr *)(*(longlong *)(lVar40 + 0x660) + 0x40));
        uVar44 = 0;
        if ((int)uVar37 < (this->RequestQueue).ArrayNum) {
          uVar44 = ~uVar37 >> 0x1f;
        }
        if ((uVar44 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        if (*(longlong *)((this->RequestQueue).AllocatorInstance.Data + (longlong)local_360 + 8) ==
            0) {
          this_04 = (this->DefaultBlendProfile).field0_0x0.DebugPtr;
          if (this_04 != (UBlendProfile *)0x0) {
            fVar47 = *pfVar25;
            pTVar24 = UE::Anim::TTypedIndexRange<FSkeletonPoseBoneIndex,TArrayView<float,int>_>::
                      TTypedIndexRange<FSkeletonPoseBoneIndex,TArrayView<float,int>_><UE::Anim::TTypedIndexRange<FSkeletonPoseBoneIndex,TArray<float,TSizedDefaultAllocator<32>_>_>_&>
                                (&local_258,this_00);
            pTVar31 = &local_308;
            local_308._0_8_ = *(undefined8 *)pTVar24;
            local_308._8_8_ = *(undefined8 *)&pTVar24->field_0x8;
            goto LAB_1474d0581;
          }
        }
        else {
          uVar44 = 0;
          if ((int)uVar37 < (this->RequestQueue).ArrayNum) {
            uVar44 = ~uVar37 >> 0x1f;
          }
          if ((uVar44 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar20)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          fVar47 = this->InertializationDuration;
          this_04 = *(UBlendProfile **)
                     ((this->RequestQueue).AllocatorInstance.Data + (longlong)(int)uVar37 * 0x58 + 8
                     );
          pTVar24 = UE::Anim::TTypedIndexRange<FSkeletonPoseBoneIndex,TArrayView<float,int>_>::
                    TTypedIndexRange<FSkeletonPoseBoneIndex,TArrayView<float,int>_><UE::Anim::TTypedIndexRange<FSkeletonPoseBoneIndex,TArray<float,TSizedDefaultAllocator<32>_>_>_&>
                              (&local_268,&this->InertializationDurationPerBone);
          pTVar31 = &local_318;
          local_318._0_8_ = *(undefined8 *)pTVar24;
          local_318._8_8_ = *(undefined8 *)&pTVar24->field_0x8;
LAB_1474d0581:
          UBlendProfile::FillSkeletonBoneDurationsArray(this_04,pTVar31,fVar47,local_358);
        }
        pfVar35 = *(float **)&this_00->field_0x0;
        pfVar43 = (float *)0x0;
        iVar39 = *(int *)&(this->InertializationDurationPerBone).field_0x8;
        pfVar25 = pfVar35 + iVar39;
        local_360 = pfVar25;
        while( true ) {
          if (*(int *)&(this->InertializationDurationPerBone).field_0x8 != iVar39) {
            local_res8[0] = 0;
            `TCheckedPointerIterator<float,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_res8);
            pfVar25 = local_360;
          }
          if (pfVar35 == pfVar25) break;
          if ((pfVar43 == (float *)0x0) || (*pfVar43 <= *pfVar35 && *pfVar35 != *pfVar43)) {
            pfVar43 = pfVar35;
          }
          pfVar35 = pfVar35 + 1;
        }
        uVar44 = 0;
        fVar47 = this->InertializationDuration;
        if (this->InertializationDuration <= *pfVar43) {
          fVar47 = *pfVar43;
        }
        this->InertializationMaxDuration = fVar47;
        uVar21 = uVar44;
        if ((int)uVar37 < (this->RequestQueue).ArrayNum) {
          uVar21 = ~uVar37 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        if ((this->RequestQueue).AllocatorInstance.Data[(longlong)(int)uVar37 * 0x58 + 0x10] !=
            (FScriptContainerElement)0x0) {
          uVar21 = uVar44;
          if ((int)uVar37 < (this->RequestQueue).ArrayNum) {
            uVar21 = ~uVar37 >> 0x1f;
          }
          if ((uVar21 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar20)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          this->InertializationBlendMode =
               (EAlphaBlendOption)
               (this->RequestQueue).AllocatorInstance.Data[(longlong)(int)uVar37 * 0x58 + 0x11];
          uVar21 = uVar44;
          if ((int)uVar37 < (this->RequestQueue).ArrayNum) {
            uVar21 = ~uVar37 >> 0x1f;
          }
          if ((uVar21 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar20)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          pFVar3 = (this->RequestQueue).AllocatorInstance.Data;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (pUVar23 = *(UObject **)(pFVar3 + (longlong)(int)uVar37 * 0x58 + 0x18),
             pUVar23 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar23);
          }
          (this->InertializationCustomBlendCurve).field0_0x0 =
               *(TObjectPtr<UCurveFloat>_u_0 *)(pFVar3 + (longlong)(int)uVar37 * 0x58 + 0x18);
        }
        uVar21 = uVar44;
        if ((int)uVar37 < (this->RequestQueue).ArrayNum) {
          uVar21 = ~uVar37 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pFVar3 = (this->RequestQueue).AllocatorInstance.Data;
        iVar7 = *(int *)(pFVar3 + (longlong)(int)uVar37 * 0x58 + 0x40);
        iVar39 = iVar7 + -1;
        if (iVar7 == 0) {
          iVar39 = 0;
        }
        ::FString::AssignRange
                  (&this->InertializationRequestDescription,
                   *(wchar_t **)(pFVar3 + (longlong)(int)uVar37 * 0x58 + 0x38),iVar39);
        uVar21 = uVar44;
        if ((int)uVar37 < (this->RequestQueue).ArrayNum) {
          uVar21 = ~uVar37 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        this->InertializationRequestNodeId =
             *(int *)((this->RequestQueue).AllocatorInstance.Data +
                     (longlong)(int)uVar37 * 0x58 + 0x48);
        if ((int)uVar37 < (this->RequestQueue).ArrayNum) {
          uVar44 = ~uVar37 >> 0x1f;
        }
        if ((uVar44 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pFVar3 = (this->RequestQueue).AllocatorInstance.Data;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar23 = *(UObject **)(pFVar3 + (longlong)(int)uVar37 * 0x58 + 0x50),
           pUVar23 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar23);
        }
        (this->InertializationRequestAnimInstance).field0_0x0 =
             *(TObjectPtr<UObject>_u_0 *)(pFVar3 + (longlong)(int)uVar37 * 0x58 + 0x50);
        if (this->bAlwaysUseDefaultBlendSettings != false) {
          local_368[0] = this->BlendTimeMultiplier * this->DefaultBlendDuration;
          this->InertializationDuration = local_368[0];
          TArray<float,TSizedDefaultAllocator<32>_>::Init
                    ((TArray<float,TSizedDefaultAllocator<32>_> *)
                     &this->InertializationDurationPerBone,local_368,local_res20);
          this->InertializationBlendMode = this->DefaultBlendMode;
          this->InertializationMaxDuration = this->BlendTimeMultiplier * this->DefaultBlendDuration;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (pUVar10 = (this->DefaultCustomBlendCurve).field0_0x0.DebugPtr,
             pUVar10 != (UCurveFloat *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar10);
          }
          (this->InertializationCustomBlendCurve).field0_0x0 =
               (this->DefaultCustomBlendCurve).field0_0x0;
        }
        if ((fVar46 == this->InertializationDuration) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("InertializationDuration != 3.402823466e+38F",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimNode_DeadBlending.cpp"
                                ,0x3e6,L""), bVar20)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        if ((fVar46 == this->InertializationMaxDuration) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("InertializationMaxDuration != 3.402823466e+38F",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimNode_DeadBlending.cpp"
                                ,999,L""), bVar20)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        iVar39 = (this->CurrPoseSnapshot).BoneIndices.ArrayNum;
        if ((this->PrevPoseSnapshot).BoneIndices.ArrayNum == 0) {
          if (iVar39 == 0) goto LAB_1474d09e3;
          InitFrom(this,&param_1->Pose,&param_1->Curve,&param_1->CustomAttributes,
                   &this->CurrPoseSnapshot,&this->CurrPoseSnapshot);
        }
        else if (iVar39 == 0) {
LAB_1474d09e3:
          bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("false",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimNode_DeadBlending.cpp"
                              ,0x405,L"");
          if (bVar20) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
        }
        else {
          InitFrom(this,&param_1->Pose,&param_1->Curve,&param_1->CustomAttributes,
                   &this->PrevPoseSnapshot,&this->CurrPoseSnapshot);
        }
        this->InertializationState = Active;
      }
    }
    piVar1 = &(this->RequestQueue).ArrayMax;
    pFVar8 = (FInertializationRequest *)(this->RequestQueue).AllocatorInstance.Data;
    iVar39 = (this->RequestQueue).ArrayNum;
    if ((this->RequestQueue).ArrayMax < 0) {
      DestructItems<FInertializationRequest,int>(pFVar8,iVar39);
      (this->RequestQueue).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x58,8,0,&(this->RequestQueue).AllocatorInstance,0,piVar1);
      }
    }
    else {
      DestructItems<FInertializationRequest,int>(pFVar8,iVar39);
      (this->RequestQueue).ArrayNum = 0;
    }
  }
  if (this->InertializationState == Active) {
    fVar46 = this->DeltaTime + this->InertializationTime;
    this->InertializationTime = fVar46;
    if (this->InertializationMaxDuration <= fVar46) {
      Deactivate(this);
    }
    if (this->InertializationState == Active) {
      ApplyTo(this,&param_1->Pose,&param_1->Curve,&param_1->CustomAttributes);
    }
  }
  lVar40 = param_1->_padding_;
  local_350.ComparisonIndex.Value = 0;
  local_350.Number = 0;
  if ((*(longlong *)(lVar40 + 0x158) == 0) &&
     (bVar20 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_2821110184175206020>,true,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Animation\\AnimInstanceProxy.h"
                          ,0x17c,"SkeletalMeshComponent"), bVar20)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  pAVar26 = *(AActor **)(*(longlong *)(lVar40 + 0x158) + 0xa8);
  FVar27 = local_350;
  if ((pAVar26 != (AActor *)0x0) &&
     (pAVar26 = AActor::GetAttachParentActor(pAVar26), FVar27 = local_350, pAVar26 != (AActor *)0x0)
     ) {
    FVar27 = (FName)pAVar26->_padding_;
  }
  if ((this->CurrPoseSnapshot).BoneIndices.ArrayNum != 0) {
    lVar40 = 2;
    lVar41 = 2;
    pFVar18 = &this->PrevPoseSnapshot;
    pdVar19 = local_228;
    do {
      pdVar33 = pdVar19;
      pFVar30 = pFVar18;
      dVar13 = (pFVar30->ComponentTransform).Rotation.XY.m128d_f64[1];
      dVar66 = (pFVar30->ComponentTransform).Rotation.ZW.m128d_f64[0];
      dVar48 = (pFVar30->ComponentTransform).Rotation.ZW.m128d_f64[1];
      pFVar18 = (FInertializationSparsePose *)&(pFVar30->RootMotionDelta).Rotation.ZW;
      *pdVar33 = (pFVar30->ComponentTransform).Rotation.XY.m128d_f64[0];
      pdVar33[1] = dVar13;
      dVar13 = (pFVar30->ComponentTransform).Translation.XY.m128d_f64[0];
      dVar14 = (pFVar30->ComponentTransform).Translation.XY.m128d_f64[1];
      pdVar33[2] = dVar66;
      pdVar33[3] = dVar48;
      dVar66 = (pFVar30->ComponentTransform).Translation.ZW.m128d_f64[0];
      dVar48 = (pFVar30->ComponentTransform).Translation.ZW.m128d_f64[1];
      pdVar33[4] = dVar13;
      pdVar33[5] = dVar14;
      dVar13 = (pFVar30->ComponentTransform).Scale3D.XY.m128d_f64[0];
      dVar14 = (pFVar30->ComponentTransform).Scale3D.XY.m128d_f64[1];
      pdVar33[6] = dVar66;
      pdVar33[7] = dVar48;
      dVar66 = (pFVar30->ComponentTransform).Scale3D.ZW.m128d_f64[0];
      dVar48 = (pFVar30->ComponentTransform).Scale3D.ZW.m128d_f64[1];
      pdVar33[8] = dVar13;
      pdVar33[9] = dVar14;
      dVar13 = *(double *)&pFVar30->bHasRootMotion;
      dVar14 = (double)pFVar30->_padding_;
      pdVar33[10] = dVar66;
      pdVar33[0xb] = dVar48;
      dVar66 = (pFVar30->RootMotionDelta).Rotation.XY.m128d_f64[0];
      dVar48 = (pFVar30->RootMotionDelta).Rotation.XY.m128d_f64[1];
      pdVar33[0xc] = dVar13;
      pdVar33[0xd] = dVar14;
      pdVar33[0xe] = dVar66;
      pdVar33[0xf] = dVar48;
      lVar41 = lVar41 + -1;
      pdVar19 = pdVar33 + 0x10;
    } while (lVar41 != 0);
    dVar13 = (pFVar30->RootMotionDelta).Rotation.ZW.m128d_f64[1];
    dVar66 = (pFVar30->RootMotionDelta).Translation.XY.m128d_f64[0];
    dVar48 = (pFVar30->RootMotionDelta).Translation.XY.m128d_f64[1];
    pdVar33[0x10] = ((__m128d *)pFVar18)->m128d_f64[0];
    pdVar33[0x11] = dVar13;
    dVar13 = (pFVar30->RootMotionDelta).Translation.ZW.m128d_f64[0];
    dVar14 = (pFVar30->RootMotionDelta).Translation.ZW.m128d_f64[1];
    pdVar33[0x12] = dVar66;
    pdVar33[0x13] = dVar48;
    dVar66 = (pFVar30->RootMotionDelta).Scale3D.XY.m128d_f64[0];
    dVar48 = (pFVar30->RootMotionDelta).Scale3D.XY.m128d_f64[1];
    pdVar33[0x14] = dVar13;
    pdVar33[0x15] = dVar14;
    dVar13 = (pFVar30->RootMotionDelta).Scale3D.ZW.m128d_f64[0];
    dVar14 = (pFVar30->RootMotionDelta).Scale3D.ZW.m128d_f64[1];
    pdVar33[0x16] = dVar66;
    pdVar33[0x17] = dVar48;
    pdVar33[0x18] = dVar13;
    pdVar33[0x19] = dVar14;
    lVar41 = 2;
    pFVar18 = &this->PrevPoseSnapshot;
    pFVar30 = &this->CurrPoseSnapshot;
    do {
      pFVar32 = pFVar30;
      pFVar29 = pFVar18;
      pFVar18 = (FInertializationSparsePose *)&(pFVar29->RootMotionDelta).Rotation.ZW;
      dVar13 = (pFVar32->ComponentTransform).Rotation.XY.m128d_f64[1];
      pFVar30 = (FInertializationSparsePose *)&(pFVar32->RootMotionDelta).Rotation.ZW;
      (pFVar29->ComponentTransform).Rotation.XY.m128d_f64[0] =
           (pFVar32->ComponentTransform).Rotation.XY.m128d_f64[0];
      (pFVar29->ComponentTransform).Rotation.XY.m128d_f64[1] = dVar13;
      dVar13 = (pFVar32->ComponentTransform).Rotation.ZW.m128d_f64[1];
      (pFVar29->ComponentTransform).Rotation.ZW.m128d_f64[0] =
           (pFVar32->ComponentTransform).Rotation.ZW.m128d_f64[0];
      (pFVar29->ComponentTransform).Rotation.ZW.m128d_f64[1] = dVar13;
      dVar13 = (pFVar32->ComponentTransform).Translation.XY.m128d_f64[1];
      (pFVar29->ComponentTransform).Translation.XY.m128d_f64[0] =
           (pFVar32->ComponentTransform).Translation.XY.m128d_f64[0];
      (pFVar29->ComponentTransform).Translation.XY.m128d_f64[1] = dVar13;
      dVar13 = (pFVar32->ComponentTransform).Translation.ZW.m128d_f64[1];
      (pFVar29->ComponentTransform).Translation.ZW.m128d_f64[0] =
           (pFVar32->ComponentTransform).Translation.ZW.m128d_f64[0];
      (pFVar29->ComponentTransform).Translation.ZW.m128d_f64[1] = dVar13;
      dVar13 = (pFVar32->ComponentTransform).Scale3D.XY.m128d_f64[1];
      (pFVar29->ComponentTransform).Scale3D.XY.m128d_f64[0] =
           (pFVar32->ComponentTransform).Scale3D.XY.m128d_f64[0];
      (pFVar29->ComponentTransform).Scale3D.XY.m128d_f64[1] = dVar13;
      dVar13 = (pFVar32->ComponentTransform).Scale3D.ZW.m128d_f64[1];
      (pFVar29->ComponentTransform).Scale3D.ZW.m128d_f64[0] =
           (pFVar32->ComponentTransform).Scale3D.ZW.m128d_f64[0];
      (pFVar29->ComponentTransform).Scale3D.ZW.m128d_f64[1] = dVar13;
      uVar16 = *(undefined7 *)&pFVar32->field_0x61;
      lVar15 = pFVar32->_padding_;
      pFVar29->bHasRootMotion = pFVar32->bHasRootMotion;
      *(undefined7 *)&pFVar29->field_0x61 = uVar16;
      pFVar29->_padding_ = lVar15;
      dVar13 = (pFVar32->RootMotionDelta).Rotation.XY.m128d_f64[1];
      (pFVar29->RootMotionDelta).Rotation.XY.m128d_f64[0] =
           (pFVar32->RootMotionDelta).Rotation.XY.m128d_f64[0];
      (pFVar29->RootMotionDelta).Rotation.XY.m128d_f64[1] = dVar13;
      lVar41 = lVar41 + -1;
    } while (lVar41 != 0);
    dVar13 = (pFVar32->RootMotionDelta).Rotation.ZW.m128d_f64[1];
    ((__m128d *)pFVar18)->m128d_f64[0] = ((__m128d *)pFVar30)->m128d_f64[0];
    (pFVar29->RootMotionDelta).Rotation.ZW.m128d_f64[1] = dVar13;
    dVar13 = (pFVar32->RootMotionDelta).Translation.XY.m128d_f64[1];
    (pFVar29->RootMotionDelta).Translation.XY.m128d_f64[0] =
         (pFVar32->RootMotionDelta).Translation.XY.m128d_f64[0];
    (pFVar29->RootMotionDelta).Translation.XY.m128d_f64[1] = dVar13;
    dVar13 = (pFVar32->RootMotionDelta).Translation.ZW.m128d_f64[1];
    (pFVar29->RootMotionDelta).Translation.ZW.m128d_f64[0] =
         (pFVar32->RootMotionDelta).Translation.ZW.m128d_f64[0];
    (pFVar29->RootMotionDelta).Translation.ZW.m128d_f64[1] = dVar13;
    dVar13 = (pFVar32->RootMotionDelta).Scale3D.XY.m128d_f64[1];
    (pFVar29->RootMotionDelta).Scale3D.XY.m128d_f64[0] =
         (pFVar32->RootMotionDelta).Scale3D.XY.m128d_f64[0];
    (pFVar29->RootMotionDelta).Scale3D.XY.m128d_f64[1] = dVar13;
    dVar13 = (pFVar32->RootMotionDelta).Scale3D.ZW.m128d_f64[1];
    (pFVar29->RootMotionDelta).Scale3D.ZW.m128d_f64[0] =
         (pFVar32->RootMotionDelta).Scale3D.ZW.m128d_f64[0];
    (pFVar29->RootMotionDelta).Scale3D.ZW.m128d_f64[1] = dVar13;
    pFVar18 = &this->CurrPoseSnapshot;
    pdVar19 = local_228;
    do {
      pdVar33 = pdVar19;
      pFVar30 = pFVar18;
      pFVar18 = (FInertializationSparsePose *)&(pFVar30->RootMotionDelta).Rotation.ZW;
      dVar13 = pdVar33[1];
      dVar66 = pdVar33[2];
      dVar48 = pdVar33[3];
      (pFVar30->ComponentTransform).Rotation.XY.m128d_f64[0] = *pdVar33;
      (pFVar30->ComponentTransform).Rotation.XY.m128d_f64[1] = dVar13;
      dVar13 = pdVar33[4];
      dVar14 = pdVar33[5];
      (pFVar30->ComponentTransform).Rotation.ZW.m128d_f64[0] = dVar66;
      (pFVar30->ComponentTransform).Rotation.ZW.m128d_f64[1] = dVar48;
      dVar66 = pdVar33[6];
      dVar48 = pdVar33[7];
      (pFVar30->ComponentTransform).Translation.XY.m128d_f64[0] = dVar13;
      (pFVar30->ComponentTransform).Translation.XY.m128d_f64[1] = dVar14;
      dVar13 = pdVar33[8];
      dVar14 = pdVar33[9];
      (pFVar30->ComponentTransform).Translation.ZW.m128d_f64[0] = dVar66;
      (pFVar30->ComponentTransform).Translation.ZW.m128d_f64[1] = dVar48;
      dVar66 = pdVar33[10];
      dVar48 = pdVar33[0xb];
      (pFVar30->ComponentTransform).Scale3D.XY.m128d_f64[0] = dVar13;
      (pFVar30->ComponentTransform).Scale3D.XY.m128d_f64[1] = dVar14;
      dVar13 = pdVar33[0xc];
      dVar14 = pdVar33[0xd];
      (pFVar30->ComponentTransform).Scale3D.ZW.m128d_f64[0] = dVar66;
      (pFVar30->ComponentTransform).Scale3D.ZW.m128d_f64[1] = dVar48;
      dVar66 = pdVar33[0xe];
      dVar48 = pdVar33[0xf];
      *(double *)&pFVar30->bHasRootMotion = dVar13;
      pFVar30->_padding_ = (longlong)dVar14;
      (pFVar30->RootMotionDelta).Rotation.XY.m128d_f64[0] = dVar66;
      (pFVar30->RootMotionDelta).Rotation.XY.m128d_f64[1] = dVar48;
      lVar40 = lVar40 + -1;
      pdVar19 = pdVar33 + 0x10;
    } while (lVar40 != 0);
    dVar13 = pdVar33[0x11];
    dVar66 = pdVar33[0x12];
    dVar48 = pdVar33[0x13];
    ((__m128d *)pFVar18)->m128d_f64[0] = pdVar33[0x10];
    (pFVar30->RootMotionDelta).Rotation.ZW.m128d_f64[1] = dVar13;
    dVar13 = pdVar33[0x14];
    dVar14 = pdVar33[0x15];
    (pFVar30->RootMotionDelta).Translation.XY.m128d_f64[0] = dVar66;
    (pFVar30->RootMotionDelta).Translation.XY.m128d_f64[1] = dVar48;
    dVar66 = pdVar33[0x16];
    dVar48 = pdVar33[0x17];
    (pFVar30->RootMotionDelta).Translation.ZW.m128d_f64[0] = dVar13;
    (pFVar30->RootMotionDelta).Translation.ZW.m128d_f64[1] = dVar14;
    dVar13 = pdVar33[0x18];
    dVar14 = pdVar33[0x19];
    (pFVar30->RootMotionDelta).Scale3D.XY.m128d_f64[0] = dVar66;
    (pFVar30->RootMotionDelta).Scale3D.XY.m128d_f64[1] = dVar48;
    (pFVar30->RootMotionDelta).Scale3D.ZW.m128d_f64[0] = dVar13;
    (pFVar30->RootMotionDelta).Scale3D.ZW.m128d_f64[1] = dVar14;
  }
  FInertializationSparsePose::InitFrom
            (&this->CurrPoseSnapshot,&param_1->Pose,&param_1->Curve,&param_1->CustomAttributes,
             &local_2c8,FVar27,this->DeltaTime);
  this->DeltaTime = 0.0;
  fVar46 = __real_3f800000;
  if (this->InertializationState == Active) {
    fVar47 = this->InertializationDuration;
    if (this->InertializationDuration <= __real_322bcc77) {
      fVar47 = __real_322bcc77;
    }
    fVar47 = this->InertializationTime / fVar47;
    if (__real_3f800000 <= fVar47) {
      fVar47 = __real_3f800000;
    }
    if (fVar47 <= 0.0) {
      fVar47 = 0.0;
    }
    fVar47 = FAlphaBlend::AlphaToBlendOption
                       (fVar47,this->InertializationBlendMode,
                        (this->InertializationCustomBlendCurve).field0_0x0.DebugPtr);
    fVar46 = fVar46 - fVar47;
  }
  else {
    fVar46 = 0.0;
  }
  this_03 = Z_Registration_Info_UEnum_EInertializationState.OuterSingleton;
  if (Z_Registration_Info_UEnum_EInertializationState.OuterSingleton == (UEnum *)0x0) {
    pUVar28 = Z_Construct_UPackage__Script_Engine();
    this_03 = GetStaticEnum(Z_Construct_UEnum_Engine_EInertializationState,(UObject *)pUVar28,
                            L"EInertializationState");
    Z_Registration_Info_UEnum_EInertializationState.OuterSingleton = this_03;
    if ((this_03 == (UEnum *)0x0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("EnumClass != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                            ,0xca4,L""), bVar20)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  UEnum::GetNameByValue(this_03,(long64)&local_348);
  ::FName::ToString(&local_348,&local_340);
  FVar36.Data = (FScriptContainerElement *)L"";
  if (local_340.Data.ArrayNum != 0) {
    FVar36.Data = local_340.Data.AllocatorInstance.Data;
  }
  if ((*(longlong *)&this->field_0x8 == 0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("NodeData",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                          ,0x3c7,L""), bVar20)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  FAnimTrace::OutputAnimNodeValue
            ((FAnimationBaseContext *)param_1,*(uint *)(*(longlong *)&this->field_0x8 + 0x20),
             L"State",(wchar_t *)FVar36.Data);
  if (local_340.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_340.Data.AllocatorInstance.Data);
  }
  puVar2 = &this->field_0x8;
  fVar47 = this->InertializationTime;
  if ((*(longlong *)puVar2 == 0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("NodeData",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                          ,0x3c7,L""), bVar20)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  FAnimTrace::OutputAnimNodeValue
            ((FAnimationBaseContext *)param_1,*(uint *)(*(longlong *)puVar2 + 0x20),L"Elapsed Time",
             fVar47);
  fVar47 = this->InertializationDuration;
  if ((*(longlong *)puVar2 == 0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("NodeData",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                          ,0x3c7,L""), bVar20)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  FAnimTrace::OutputAnimNodeValue
            ((FAnimationBaseContext *)param_1,*(uint *)(*(longlong *)puVar2 + 0x20),L"Duration",
             fVar47);
  fVar47 = this->InertializationMaxDuration;
  if ((*(longlong *)puVar2 == 0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("NodeData",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                          ,0x3c7,L""), bVar20)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  FAnimTrace::OutputAnimNodeValue
            ((FAnimationBaseContext *)param_1,*(uint *)(*(longlong *)puVar2 + 0x20),L"Max Duration",
             fVar47);
  if (__real_38d1b717 < this->InertializationDuration) {
    fVar84 = this->InertializationTime / this->InertializationDuration;
  }
  if ((*(longlong *)puVar2 == 0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("NodeData",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                          ,0x3c7,L""), bVar20)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  FAnimTrace::OutputAnimNodeValue
            ((FAnimationBaseContext *)param_1,*(uint *)(*(longlong *)puVar2 + 0x20),
             L"Normalized Time",fVar84);
  if ((*(longlong *)puVar2 == 0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("NodeData",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                          ,0x3c7,L""), bVar20)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  FAnimTrace::OutputAnimNodeValue
            ((FAnimationBaseContext *)param_1,*(uint *)(*(longlong *)puVar2 + 0x20),
             L"Inertialization Weight",fVar46);
  if ((this->InertializationRequestDescription).Data.ArrayNum == 0) {
    pwVar45 = L"";
  }
  else {
    pwVar45 = (wchar_t *)(this->InertializationRequestDescription).Data.AllocatorInstance.Data;
  }
  if ((*(longlong *)puVar2 == 0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("NodeData",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                          ,0x3c7,L""), bVar20)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  FAnimTrace::OutputAnimNodeValue
            ((FAnimationBaseContext *)param_1,*(uint *)(*(longlong *)puVar2 + 0x20),
             L"Request Description",pwVar45);
  pUVar23 = (this->InertializationRequestAnimInstance).field0_0x0.DebugPtr;
  iVar39 = this->InertializationRequestNodeId;
  if ((*(longlong *)puVar2 == 0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("NodeData",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                          ,0x3c7,L""), bVar20)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  FAnimTrace::OutputAnimNodeValueAnimNode
            ((FAnimationBaseContext *)param_1,*(uint *)(*(longlong *)puVar2 + 0x20),L"Request Node",
             iVar39,pUVar23);
  if ((*(longlong *)puVar2 == 0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("NodeData",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                          ,0x3c7,L""), bVar20)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  FAnimTrace::OutputInertialization
            ((FAnimInstanceProxy *)param_1->_padding_,*(int *)(*(longlong *)puVar2 + 0x20),fVar46,
             DeadBlending);
LAB_1474d1139:
  FStatsHierarchical::EndMeasurement();
  return;
}

// GatherDebugData @ 1474d50d0

void __thiscall
FAnimNode_DeadBlending::GatherDebugData(FAnimNode_DeadBlending *this,FNodeDebugData *param_1)

{
  longlong *plVar1;
  ForAnyElementType _Src;
  UPackage *pUVar2;
  int iVar3;
  float fVar4;
  FName local_res8;
  FString local_88;
  FString local_78;
  FString local_68 [5];
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_DeadBlending::GatherDebugData");
  if (Z_Registration_Info_UScriptStruct_FAnimNode_DeadBlending.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FAnimNode_DeadBlending.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_DeadBlending,(UObject *)pUVar2,
                         L"AnimNode_DeadBlending");
  }
  local_res8 = (FName)(Z_Registration_Info_UScriptStruct_FAnimNode_DeadBlending.OuterSingleton)->
                      _padding_;
  ::FName::ToString(&local_res8,&local_88);
  ::FString::PrintfImpl(&local_78,L"%s<W:%.1f%%> %s");
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  ::FString::Empty(&param_1->NodeDescription);
  if (this->InertializationState == Active) {
    fVar4 = this->InertializationDuration;
    if (this->InertializationDuration <= __real_322bcc77) {
      fVar4 = __real_322bcc77;
    }
    fVar4 = this->InertializationTime / fVar4;
    if (__real_3f800000 <= fVar4) {
      fVar4 = __real_3f800000;
    }
    if (fVar4 <= 0.0) {
      fVar4 = 0.0;
    }
    FAlphaBlend::AlphaToBlendOption
              (fVar4,this->InertializationBlendMode,
               (this->InertializationCustomBlendCurve).field0_0x0.DebugPtr);
  }
  if (this->InertializationDuration <= __real_38d1b717) {
    UEnum::GetValueAsString<enum_EInertializationState>(local_68,this->InertializationState);
    ::FString::PrintfImpl(&local_88,L"(\'%s\' Time: %.3f / %.3f) Weight: %.3f");
  }
  else {
    UEnum::GetValueAsString<enum_EInertializationState>(local_68,this->InertializationState);
    ::FString::PrintfImpl(&local_88,L"(\'%s\' Time: %.3f / %.3f (%.0f%%) Weight: %.3f");
  }
  iVar3 = local_88.Data.ArrayNum + -1;
  if (local_88.Data.ArrayNum == 0) {
    iVar3 = 0;
  }
  ::FString::AppendChars(&local_78,(wchar_t *)local_88.Data.AllocatorInstance.Data,iVar3);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_68[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68[0].Data.AllocatorInstance.Data);
  }
  _Src.Data = local_78.Data.AllocatorInstance.Data;
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_78.Data.ArrayNum == 0) {
    local_88.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_78.Data.ArrayNum,0,(ForAnyElementType *)&local_88,local_78.Data.ArrayNum,
               &local_88.Data.ArrayMax);
    memcpy(local_88.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_78.Data.ArrayNum * 2);
  }
  FNodeDebugData::AddDebugItem(param_1,&local_88,false);
  plVar1 = *(longlong **)&this->Source;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1,param_1);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// GetSkeleton @ 1474df480

USkeleton * __thiscall
FAnimNode_DeadBlending::GetSkeleton
          (FAnimNode_DeadBlending *this,bool *param_1,IPropertyHandle *param_2)

{
  code *pcVar1;
  bool bVar2;
  USkeleton *pUVar3;
  IAnimClassInterface *pIVar4;
  
  *param_1 = false;
  if (*(longlong *)&this[-1].field_0x688 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NodeData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                       ,0x3ce,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (USkeleton *)(*pcVar1)();
      return pUVar3;
    }
  }
  pIVar4 = FAnimNodeData::GetAnimClassInterface(*(FAnimNodeData **)&this[-1].field_0x688);
  if (pIVar4 != (IAnimClassInterface *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001474df4d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pUVar3 = (USkeleton *)
             (**(code **)((longlong)*pIVar4 + 0x98))(pIVar4,*(code **)((longlong)*pIVar4 + 0x98));
    return pUVar3;
  }
  return (USkeleton *)0x0;
}

// InitFrom @ 1474e1a00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FAnimNode_DeadBlending::InitFrom
          (FAnimNode_DeadBlending *this,FCompactPose *param_1,FBlendedCurve *param_2,
          FStackAttributeContainer *param_3,FInertializationSparsePose *param_4,
          FInertializationSparsePose *param_5)

{
  int *piVar1;
  TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_> *pTVar2;
  TBaseBlendedCurve<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,FAnimNode_DeadBlending::FDeadBlendingCurveElement>
  *pTVar3;
  double *pdVar4;
  float fVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  uint uVar9;
  FBoneContainer *pFVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  code *pcVar13;
  undefined1 auVar14 [16];
  double dVar15;
  undefined1 auVar16 [16];
  double dVar17;
  bool bVar18;
  char cVar19;
  int iVar20;
  uint uVar21;
  IAnimRootMotionProvider *pIVar22;
  float *pfVar23;
  longlong lVar24;
  uint uVar25;
  uint uVar26;
  longlong lVar27;
  <lambda_1> <Var28;
  uint uVar29;
  longlong lVar30;
  ulonglong uVar31;
  uint uVar32;
  uint uVar33;
  <lambda_1> <Var34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined4 uVar46;
  float fVar47;
  float fVar48;
  double dVar49;
  double dVar50;
  undefined4 uVar51;
  float fVar52;
  double dVar53;
  double dVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  undefined4 uVar59;
  undefined4 uVar60;
  undefined4 uVar61;
  undefined1 auStackY_508 [32];
  float local_4b0;
  longlong local_488;
  int local_470 [2];
  FAnimNode_DeadBlending *local_468;
  FCompactPose *local_460;
  double local_458;
  double local_450;
  TVector<float>_u_0 local_448;
  float local_43c;
  float fStack_438;
  float local_434;
  float local_430;
  float local_42c;
  float local_428;
  TVector<float>_u_0 local_424;
  TVector<float>_u_0 local_418;
  TQuat<double> local_408;
  FBlendedCurve *local_3e8;
  FStackAttributeContainer *local_3e0;
  undefined8 local_3d8;
  undefined8 local_3c8;
  undefined8 local_3b8;
  undefined1 local_3a8 [16];
  double local_398;
  double dStack_390;
  undefined1 local_388 [16];
  double local_378;
  double local_368;
  undefined8 local_358;
  undefined8 uStack_350;
  double local_348;
  double dStack_340;
  TQuat<double> local_338;
  undefined8 local_318;
  undefined4 uStack_30c;
  undefined1 local_308 [16];
  <lambda_2> local_2f8;
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  double dStack_2d0;
  TQuat<double> local_2c8;
  TQuat<double> local_2a8;
  TQuat<double> local_288;
  TQuat<double> local_268;
  double local_238;
  double local_220;
  double local_208;
  undefined1 local_200 [16];
  double local_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  undefined1 local_1c8 [16];
  undefined1 local_1b8 [16];
  double local_158 [2];
  double local_148 [2];
  double local_138 [2];
  double local_128 [2];
  double local_118 [2];
  double local_108 [2];
  ulonglong local_f8;
  
  local_f8 = __security_cookie.value ^ (ulonglong)auStackY_508;
  <Var34 = (<lambda_1>)(-1 < CpuChannel->Enabled);
  local_468 = this;
  local_460 = param_1;
  local_3e8 = param_2;
  local_3e0 = param_3;
  if ((bool)<Var34) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId291,"FAnimNode_DeadBlending::InitFrom",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimNode_DeadBlending.cpp"
               ,0x123);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId291);
  }
  if ((((param_4->BoneIndices).ArrayNum == 0) || ((param_5->BoneIndices).ArrayNum == 0)) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("!SrcPosePrev.IsEmpty() && !SrcPoseCurr.IsEmpty()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimNode_DeadBlending.cpp"
                          ,0x125,L""), bVar18)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  pFVar10 = *(FBoneContainer **)&param_1->field_0x10;
  iVar20 = UE::Anim::DeadBlending::Private::GetNumSkeletonBones(pFVar10);
  local_470[0] = -1;
  TArray<int,TSizedDefaultAllocator<32>_>::Init(&this->BoneIndices,local_470,iVar20);
  uVar9 = *(uint *)&param_1->field_0x8;
  uVar26 = 0;
  uVar25 = 0;
  <Var28.__this = this;
  if (uVar9 != 0) {
    lVar27 = 0;
    do {
      uVar21 = 0;
      if ((int)uVar25 < (pFVar10->CompactPoseToSkeletonIndex).ArrayNum) {
        uVar21 = ~uVar25 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      uVar21 = *(uint *)((pFVar10->CompactPoseToSkeletonIndex).AllocatorInstance.Data + lVar27);
      lVar30 = (longlong)(int)uVar21;
      if (uVar21 != 0xffffffff) {
        uVar32 = ~uVar21 >> 0x1f;
        uVar29 = 0;
        if ((int)uVar21 < (param_5->BoneIndices).ArrayNum) {
          uVar29 = uVar32;
        }
        if ((uVar29 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        if (*(int *)((param_5->BoneIndices).AllocatorInstance.Data + lVar30 * 4) != -1) {
          uVar29 = 0;
          if ((int)uVar21 < (param_4->BoneIndices).ArrayNum) {
            uVar29 = uVar32;
          }
          if ((uVar29 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          if (*(int *)((param_4->BoneIndices).AllocatorInstance.Data + lVar30 * 4) != -1) {
            uVar29 = 0;
            if ((int)uVar21 < (this->BoneIndices).ArrayNum) {
              uVar29 = uVar32;
            }
            if ((uVar29 == 0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar18)) {
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            *(uint *)((this->BoneIndices).AllocatorInstance.Data + lVar30 * 4) = uVar26;
            uVar26 = uVar26 + 1;
          }
        }
      }
      uVar25 = uVar25 + 1;
      lVar27 = lVar27 + 4;
      <Var28.__this = local_468;
    } while (uVar25 != uVar9);
  }
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::Init
            (&(<Var28.__this)->BoneTranslations,&UE::Math::TVector<double>::ZeroVector,uVar26);
  TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>::Init
            (&(<Var28.__this)->BoneRotations,&UE::Math::TQuat<double>::Identity,uVar26);
  pTVar2 = &(<Var28.__this)->BoneRotationDirections;
  if ((int)uVar26 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar26);
  }
  piVar1 = &((<Var28.__this)->BoneRotationDirections).ArrayMax;
  ((<Var28.__this)->BoneRotationDirections).ArrayNum = 0;
  if (*piVar1 != uVar26) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,0x10,uVar26,&pTVar2->AllocatorInstance,0,piVar1);
  }
  if (0 < (int)uVar26) {
    uVar31 = (ulonglong)uVar26;
    do {
      pFVar11 = (pTVar2->AllocatorInstance).Data;
      if (((pFVar11 < (FScriptContainerElement *)((longlong)&UE::Math::TQuat<float>::Identity.X + 1)
           ) && (&UE::Math::TQuat<float>::Identity <
                 (TQuat<float> *)(pFVar11 + (longlong)*piVar1 * 0x10))) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar18)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      iVar20 = ((<Var28.__this)->BoneRotationDirections).ArrayNum;
      if (iVar20 == *piVar1) {
        iVar20 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x1010,&pTVar2->AllocatorInstance,piVar1);
      }
      ((<Var28.__this)->BoneRotationDirections).ArrayNum = iVar20 + 1;
      *(TQuat<float> *)((pTVar2->AllocatorInstance).Data + (longlong)iVar20 * 0x10) =
           UE::Math::TQuat<float>::Identity;
      uVar31 = uVar31 - 1;
    } while (uVar31 != 0);
  }
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::Init
            (&(<Var28.__this)->BoneScales,&UE::Math::TVector<double>::OneVector,uVar26);
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::Init
            (&(<Var28.__this)->BoneTranslationVelocities,&UE::Math::TVector<float>::ZeroVector,
             uVar26);
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::Init
            (&(<Var28.__this)->BoneRotationVelocities,&UE::Math::TVector<float>::ZeroVector,uVar26);
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::Init
            (&(<Var28.__this)->BoneScaleVelocities,&UE::Math::TVector<float>::ZeroVector,uVar26);
  fVar52 = (<Var28.__this)->ExtrapolationHalfLifeMin;
  local_424._s_0.X = fVar52 * UE::Math::TVector<float>::OneVector.field0_0x0._s_0.X;
  local_424._s_0.Y = fVar52 * UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Y;
  local_424._s_0.Z = fVar52 * UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::Init
            (&(<Var28.__this)->BoneTranslationDecayHalfLives,(TVector<float> *)&local_424._s_0,
             uVar26);
  fVar52 = (<Var28.__this)->ExtrapolationHalfLifeMin;
  local_418._s_0.X = fVar52 * UE::Math::TVector<float>::OneVector.field0_0x0._s_0.X;
  local_418._s_0.Y = fVar52 * UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Y;
  local_418._s_0.Z = fVar52 * UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::Init
            (&(<Var28.__this)->BoneRotationDecayHalfLives,(TVector<float> *)&local_418._s_0,uVar26);
  fVar52 = (<Var28.__this)->ExtrapolationHalfLifeMin;
  local_448._s_0.X = fVar52 * UE::Math::TVector<float>::OneVector.field0_0x0._s_0.X;
  local_448._s_0.Y = fVar52 * UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Y;
  local_448._s_0.Z = fVar52 * UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::Init
            (&(<Var28.__this)->BoneScaleDecayHalfLives,(TVector<float> *)&local_448._s_0,uVar26);
  fVar58 = __real_b8d1b717;
  fVar52 = __real_38d1b717;
  uVar25 = 0;
  uVar59 = SUB84(__real_3e45798ee0000000,0);
  uVar60 = (undefined4)((ulonglong)__real_3e45798ee0000000 >> 0x20);
  uVar51 = SUB84(__real_4000000000000000,0);
  uVar46 = (undefined4)((ulonglong)__real_4000000000000000 >> 0x20);
  uVar9 = *(uint *)&local_460->field_0x8;
  fVar48 = __real_322bcc77;
  if (uVar9 != 0) {
    local_488 = 0;
    do {
      local_468 = (FAnimNode_DeadBlending *)CONCAT44(local_468._4_4_,~uVar25 >> 0x1f);
      uVar26 = 0;
      if ((int)uVar25 < (pFVar10->CompactPoseToSkeletonIndex).ArrayNum) {
        uVar26 = ~uVar25 >> 0x1f;
      }
      if ((uVar26 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      uVar26 = *(uint *)((pFVar10->CompactPoseToSkeletonIndex).AllocatorInstance.Data +
                        local_488 * 4);
      lVar27 = (longlong)(int)uVar26;
      if (uVar26 != 0xffffffff) {
        uVar29 = ~uVar26 >> 0x1f;
        uVar21 = 0;
        if ((int)uVar26 < (param_5->BoneIndices).ArrayNum) {
          uVar21 = uVar29;
        }
        if ((uVar21 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        if (*(int *)((param_5->BoneIndices).AllocatorInstance.Data + lVar27 * 4) != -1) {
          uVar21 = 0;
          if ((int)uVar26 < (param_4->BoneIndices).ArrayNum) {
            uVar21 = uVar29;
          }
          if ((uVar21 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          if (*(int *)((param_4->BoneIndices).AllocatorInstance.Data + lVar27 * 4) != -1) {
            uVar21 = 0;
            if ((int)uVar26 < ((<Var28.__this)->BoneIndices).ArrayNum) {
              uVar21 = uVar29;
            }
            if ((uVar21 == 0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar18)) {
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            uVar21 = *(uint *)(((<Var28.__this)->BoneIndices).AllocatorInstance.Data + lVar27 * 4);
            lVar30 = (longlong)(int)uVar21;
            uVar32 = 0;
            if ((int)uVar26 < (param_5->BoneIndices).ArrayNum) {
              uVar32 = uVar29;
            }
            if ((uVar32 == 0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar18)) {
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            uVar32 = *(uint *)((param_5->BoneIndices).AllocatorInstance.Data + lVar27 * 4);
            uVar33 = 0;
            if ((int)uVar26 < (param_4->BoneIndices).ArrayNum) {
              uVar33 = uVar29;
            }
            if ((uVar33 == 0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar18)) {
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            uVar26 = *(uint *)((param_4->BoneIndices).AllocatorInstance.Data + lVar27 * 4);
            if ((uVar21 == 0xffffffff) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InertializationBoneIndex != INDEX_NONE",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimNode_DeadBlending.cpp"
                                    ,0x160,L""), bVar18)) {
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            lVar27 = (longlong)(int)uVar32;
            if ((uVar32 == 0xffffffff) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("CurrPoseBoneIndex != INDEX_NONE",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimNode_DeadBlending.cpp"
                                    ,0x161,L""), bVar18)) {
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            if ((uVar26 == 0xffffffff) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("PrevPoseBoneIndex != INDEX_NONE",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimNode_DeadBlending.cpp"
                                    ,0x162,L""), bVar18)) {
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            uVar33 = ~uVar32 >> 0x1f;
            uVar29 = 0;
            if ((int)uVar32 < (param_5->BoneTranslations).ArrayNum) {
              uVar29 = uVar33;
            }
            if ((uVar29 == 0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar18)) {
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            pFVar11 = (param_5->BoneTranslations).AllocatorInstance.Data;
            auVar7 = *(undefined1 (*) [16])(pFVar11 + lVar27 * 0x18);
            dVar40 = *(double *)(pFVar11 + lVar27 * 0x18 + 0x10);
            uVar29 = 0;
            if ((int)uVar32 < (param_5->BoneRotations).ArrayNum) {
              uVar29 = uVar33;
            }
            local_3a8 = auVar7;
            local_378 = dVar40;
            if ((uVar29 == 0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar18)) {
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            pFVar12 = (param_5->BoneRotations).AllocatorInstance.Data;
            pFVar11 = pFVar12 + lVar27 * 0x20;
            local_358 = *(double *)pFVar11;
            uStack_350 = *(double *)(pFVar11 + 8);
            pFVar12 = pFVar12 + lVar27 * 0x20 + 0x10;
            local_348 = *(double *)pFVar12;
            dStack_340 = *(double *)(pFVar12 + 8);
            uVar29 = 0;
            if ((int)uVar32 < (param_5->BoneScales).ArrayNum) {
              uVar29 = uVar33;
            }
            if ((uVar29 == 0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar18)) {
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            pFVar11 = (param_5->BoneScales).AllocatorInstance.Data;
            uVar32 = ~uVar21 >> 0x1f;
            auVar8 = *(undefined1 (*) [16])(pFVar11 + lVar27 * 0x18);
            dVar35 = *(double *)(pFVar11 + lVar27 * 0x18 + 0x10);
            uVar29 = 0;
            if ((int)uVar21 < ((<Var28.__this)->BoneTranslations).ArrayNum) {
              uVar29 = uVar32;
            }
            local_308 = auVar8;
            local_220 = dVar35;
            if ((uVar29 == 0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar18)) {
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            pFVar11 = ((<Var28.__this)->BoneTranslations).AllocatorInstance.Data;
            *(undefined1 (*) [16])(pFVar11 + lVar30 * 0x18) = auVar7;
            *(double *)(pFVar11 + lVar30 * 0x18 + 0x10) = dVar40;
            uVar29 = 0;
            if ((int)uVar21 < ((<Var28.__this)->BoneRotations).ArrayNum) {
              uVar29 = uVar32;
            }
            if ((uVar29 == 0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar18)) {
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            pFVar12 = ((<Var28.__this)->BoneRotations).AllocatorInstance.Data;
            pFVar11 = pFVar12 + lVar30 * 0x20;
            *(undefined4 *)pFVar11 = (undefined4)local_358;
            *(undefined4 *)(pFVar11 + 4) = local_358._4_4_;
            *(undefined4 *)(pFVar11 + 8) = (undefined4)uStack_350;
            *(undefined4 *)(pFVar11 + 0xc) = uStack_350._4_4_;
            pFVar12 = pFVar12 + lVar30 * 0x20 + 0x10;
            *(double *)pFVar12 = local_348;
            *(double *)(pFVar12 + 8) = dStack_340;
            uVar29 = 0;
            if ((int)uVar21 < ((<Var28.__this)->BoneScales).ArrayNum) {
              uVar29 = uVar32;
            }
            if ((uVar29 == 0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar18)) {
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            pFVar11 = ((<Var28.__this)->BoneScales).AllocatorInstance.Data;
            *(undefined1 (*) [16])(pFVar11 + lVar30 * 0x18) = auVar8;
            *(double *)(pFVar11 + lVar30 * 0x18 + 0x10) = dVar35;
            if (fVar48 < param_5->DeltaTime) {
              uVar33 = ~uVar26 >> 0x1f;
              uVar29 = 0;
              if ((int)uVar26 < (param_4->BoneTranslations).ArrayNum) {
                uVar29 = uVar33;
              }
              if ((uVar29 == 0) &&
                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar18)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              lVar27 = (longlong)(int)uVar26;
              pFVar11 = (param_4->BoneTranslations).AllocatorInstance.Data;
              local_238 = *(double *)(pFVar11 + lVar27 * 0x18 + 0x10);
              pFVar11 = pFVar11 + lVar27 * 0x18;
              dVar40 = *(double *)pFVar11;
              dVar35 = *(double *)(pFVar11 + 8);
              uVar29 = 0;
              if ((int)uVar26 < (param_4->BoneRotations).ArrayNum) {
                uVar29 = uVar33;
              }
              if ((uVar29 == 0) &&
                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar18)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              pFVar12 = (param_4->BoneRotations).AllocatorInstance.Data;
              pFVar11 = pFVar12 + (longlong)(int)uVar26 * 0x20;
              dVar15 = *(double *)pFVar11;
              dVar49 = *(double *)(pFVar11 + 8);
              pFVar12 = pFVar12 + (longlong)(int)uVar26 * 0x20 + 0x10;
              dVar39 = *(double *)pFVar12;
              dVar38 = *(double *)(pFVar12 + 8);
              uVar29 = 0;
              if ((int)uVar26 < (param_4->BoneScales).ArrayNum) {
                uVar29 = uVar33;
              }
              local_2e8 = dVar15;
              dStack_2e0 = dVar49;
              local_2d8 = dVar39;
              dStack_2d0 = dVar38;
              if ((uVar29 == 0) &&
                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar18)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              dVar39 = dVar39 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
              dVar38 = dVar38 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
              pFVar11 = (param_4->BoneScales).AllocatorInstance.Data;
              dVar15 = dVar15 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
              dVar49 = dVar49 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
              local_208 = *(double *)(pFVar11 + lVar27 * 0x18 + 0x10);
              auVar44 = *(undefined1 (*) [16])(pFVar11 + lVar27 * 0x18);
              auVar41._0_8_ = auVar7._4_8_ << 0x20;
              auVar41._8_4_ = auVar7._8_4_;
              auVar41._12_4_ = auVar7._12_4_;
              local_398 = auVar41._8_8_;
              dStack_390 = auVar7._8_8_;
              dVar35 = local_398 - dVar35;
              local_450 = local_378;
              dVar36 = local_378 - local_238;
              auVar42._8_4_ = SUB84(dStack_340,0);
              auVar42._0_8_ = dStack_340;
              auVar42._12_4_ = (int)((ulonglong)dStack_340 >> 0x20);
              auVar43._8_4_ = SUB84(local_348,0);
              auVar43._0_8_ = local_348;
              auVar43._12_4_ = (int)((ulonglong)local_348 >> 0x20);
              dVar17 = local_358 * dVar38 *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                       dStack_340 * dVar15 +
                       uStack_350 * dVar39 *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                       local_348 * dVar49 *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
              dVar50 = local_358 * dVar39 *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                       auVar42._8_8_ * dVar49 +
                       uStack_350 * dVar38 *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                       auVar43._8_8_ * dVar15 *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
              uVar46 = (undefined4)((ulonglong)dVar50 >> 0x20);
              local_1c8._8_4_ = SUB84(dVar50,0);
              local_1c8._0_8_ = dVar17;
              local_1c8._12_4_ = uVar46;
              dVar37 = local_358 * dVar49 *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                       dStack_340 * dVar39 +
                       uStack_350 * dVar15 *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                       local_348 * dVar38 *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
              dVar15 = local_358 * dVar15 *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                       dStack_340 * dVar38 +
                       uStack_350 * dVar49 *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                       local_348 * dVar39 *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
              uVar51 = (undefined4)((ulonglong)dVar15 >> 0x20);
              local_1b8._8_4_ = SUB84(dVar15,0);
              local_1b8._0_8_ = dVar37;
              local_1b8._12_4_ = uVar51;
              auVar14._8_4_ = SUB84(dVar15,0);
              auVar14._0_8_ = dVar37;
              auVar14._12_4_ = uVar51;
              auVar16._8_4_ = SUB84(dVar50,0);
              auVar16._0_8_ = dVar17;
              auVar16._12_4_ = uVar46;
              dVar49 = __real_bff0000000000000;
              if (__real_0000000000000000 <=
                  dVar15 * UE::Math::TQuat<double>::Identity.W +
                  dVar37 * UE::Math::TQuat<double>::Identity.Z +
                  dVar50 * UE::Math::TQuat<double>::Identity.Y +
                  dVar17 * UE::Math::TQuat<double>::Identity.X) {
                dVar49 = __real_3ff0000000000000;
              }
              local_408.Y = auVar16._8_8_;
              uVar26 = 0;
              if ((int)uVar21 < ((<Var28.__this)->BoneTranslationVelocities).ArrayNum) {
                uVar26 = uVar32;
              }
              local_368 = local_220;
              dVar15 = auVar8._8_8_;
              local_388._8_4_ = auVar8._8_4_;
              local_388._0_8_ = dVar15;
              local_388._12_4_ = auVar8._12_4_;
              dVar38 = dVar15 - auVar44._8_8_;
              dVar39 = auVar8._0_8_ - auVar44._0_8_;
              local_408.Y = local_408.Y * dVar49;
              local_408.X = dVar17 * dVar49;
              local_408.W = auVar14._8_8_;
              local_408.W = local_408.W * dVar49;
              local_408.Z = dVar37 * dVar49;
              local_458 = local_220 - local_208;
              dVar49 = local_208;
              if (local_208 <= __real_3e45798ee0000000) {
                dVar49 = __real_3e45798ee0000000;
              }
              uVar59 = (undefined4)((ulonglong)__real_3e45798ee0000000 >> 0x20);
              uVar51 = auVar44._8_4_;
              uVar46 = auVar44._12_4_;
              if (auVar44._8_8_ <= __real_3e45798ee0000000) {
                uVar51 = SUB84(__real_3e45798ee0000000,0);
                uVar46 = uVar59;
              }
              uVar60 = auVar44._0_4_;
              uVar61 = auVar44._4_4_;
              if (auVar44._0_8_ <= __real_3e45798ee0000000) {
                uVar60 = SUB84(__real_3e45798ee0000000,0);
                uVar61 = uVar59;
              }
              dVar49 = local_220 / dVar49;
              dVar15 = dVar15 / (double)CONCAT44(uVar46,uVar51);
              dVar37 = __real_3ff0000000000000 / (double)param_5->DeltaTime;
              dVar17 = (double)local_308._0_8_ / (double)CONCAT44(uVar61,uVar60);
              if ((uVar26 == 0) &&
                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar18)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              pFVar11 = ((<Var28.__this)->BoneTranslationVelocities).AllocatorInstance.Data;
              *(float *)(pFVar11 + lVar30 * 0xc) = (float)((auVar7._0_8_ - dVar40) * dVar37);
              *(float *)(pFVar11 + lVar30 * 0xc + 4) = (float)(dVar35 * dVar37);
              *(float *)(pFVar11 + lVar30 * 0xc + 8) = (float)(dVar36 * dVar37);
              UE::Math::TQuat<double>::Log(&local_408,&local_2c8);
              uVar26 = 0;
              if ((int)uVar21 < ((<Var28.__this)->BoneRotationVelocities).ArrayNum) {
                uVar26 = uVar32;
              }
              dVar40 = local_2c8.X * __real_4000000000000000;
              dVar50 = __real_3ff0000000000000 / (double)param_5->DeltaTime;
              dVar37 = local_2c8.Y * __real_4000000000000000;
              dVar35 = local_2c8.Z * __real_4000000000000000;
              if ((uVar26 == 0) &&
                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar18)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              pFVar11 = ((<Var28.__this)->BoneRotationVelocities).AllocatorInstance.Data;
              *(float *)(pFVar11 + lVar30 * 0xc) = (float)(dVar40 * dVar50);
              *(float *)(pFVar11 + lVar30 * 0xc + 4) = (float)(dVar37 * dVar50);
              *(float *)(pFVar11 + lVar30 * 0xc + 8) = (float)(dVar35 * dVar50);
              dVar37 = __real_3e45798ee0000000;
              dVar40 = __real_3ff0000000000000 / (double)param_5->DeltaTime;
              dVar35 = local_458;
              if ((<Var28.__this)->bLinearlyInterpolateScales == false) {
                if (dVar49 <= __real_3e45798ee0000000) {
                  dVar49 = __real_3e45798ee0000000;
                }
                dVar35 = log(dVar49);
                if (dVar15 <= dVar37) {
                  dVar15 = dVar37;
                }
                dVar38 = log(dVar15);
                if (dVar17 <= dVar37) {
                  dVar17 = dVar37;
                }
                dVar39 = log(dVar17);
              }
              uVar26 = 0;
              if ((int)uVar21 < ((<Var28.__this)->BoneScaleVelocities).ArrayNum) {
                uVar26 = uVar32;
              }
              if ((uVar26 == 0) &&
                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar18)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              pFVar11 = ((<Var28.__this)->BoneScaleVelocities).AllocatorInstance.Data;
              *(float *)(pFVar11 + lVar30 * 0xc) = (float)(dVar40 * dVar39);
              *(float *)(pFVar11 + lVar30 * 0xc + 4) = (float)(dVar40 * dVar38);
              *(float *)(pFVar11 + lVar30 * 0xc + 8) = (float)(dVar40 * dVar35);
              uVar26 = 0;
              if ((int)uVar21 < ((<Var28.__this)->BoneTranslationVelocities).ArrayNum) {
                uVar26 = uVar32;
              }
              if ((uVar26 == 0) &&
                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar18)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              fVar5 = __real_3f800000;
              fVar48 = (<Var28.__this)->MaximumTranslationVelocity;
              pFVar11 = ((<Var28.__this)->BoneTranslationVelocities).AllocatorInstance.Data;
              if (fVar52 <= fVar48) {
                fVar55 = *(float *)(pFVar11 + lVar30 * 0xc);
                fVar57 = *(float *)(pFVar11 + lVar30 * 0xc + 4);
                fVar56 = *(float *)(pFVar11 + lVar30 * 0xc + 8);
                fVar47 = fVar57 * fVar57 + fVar55 * fVar55 + fVar56 * fVar56;
                if (fVar47 <= fVar48 * fVar48) {
                  fVar55 = (float)*(undefined8 *)(pFVar11 + lVar30 * 0xc);
                  fVar57 = (float)((ulonglong)*(undefined8 *)(pFVar11 + lVar30 * 0xc) >> 0x20);
                  uVar51 = *(undefined4 *)(pFVar11 + lVar30 * 0xc + 8);
                }
                else {
                  fVar48 = (__real_3f800000 / SQRT(fVar47)) * fVar48;
                  fVar57 = fVar48 * fVar57;
                  fVar55 = fVar48 * fVar55;
                  uVar51 = fVar48 * fVar56;
                }
              }
              else {
                fVar55 = (float)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
                fVar57 = (float)((ulonglong)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ >>
                                0x20);
                uVar51 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
              }
              uVar26 = 0;
              if ((int)uVar21 < ((<Var28.__this)->BoneTranslationVelocities).ArrayNum) {
                uVar26 = uVar32;
              }
              if ((uVar26 == 0) &&
                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar18)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              pFVar11 = ((<Var28.__this)->BoneTranslationVelocities).AllocatorInstance.Data;
              *(ulonglong *)(pFVar11 + lVar30 * 0xc) = CONCAT44(fVar57,fVar55);
              *(undefined4 *)(pFVar11 + lVar30 * 0xc + 8) = uVar51;
              uVar26 = 0;
              if ((int)uVar21 < ((<Var28.__this)->BoneRotationVelocities).ArrayNum) {
                uVar26 = uVar32;
              }
              if ((uVar26 == 0) &&
                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar18)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              fVar48 = (<Var28.__this)->MaximumRotationVelocity;
              pFVar11 = ((<Var28.__this)->BoneRotationVelocities).AllocatorInstance.Data;
              if (fVar52 <= fVar48 * __real_3c8efa35) {
                fVar55 = *(float *)(pFVar11 + lVar30 * 0xc);
                fVar57 = *(float *)(pFVar11 + lVar30 * 0xc + 4);
                fVar56 = *(float *)(pFVar11 + lVar30 * 0xc + 8);
                fVar47 = fVar57 * fVar57 + fVar55 * fVar55 + fVar56 * fVar56;
                if (fVar47 <= fVar48 * fVar48 * ___real_399fb50f) {
                  fVar55 = (float)*(undefined8 *)(pFVar11 + lVar30 * 0xc);
                  fVar57 = (float)((ulonglong)*(undefined8 *)(pFVar11 + lVar30 * 0xc) >> 0x20);
                  local_4b0 = *(float *)(pFVar11 + lVar30 * 0xc + 8);
                }
                else {
                  local_4b0 = (fVar5 / SQRT(fVar47)) * fVar48 * __real_3c8efa35;
                  fVar55 = local_4b0 * fVar55;
                  fVar57 = local_4b0 * fVar57;
                  local_4b0 = local_4b0 * fVar56;
                }
              }
              else {
                fVar55 = (float)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
                fVar57 = (float)((ulonglong)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ >>
                                0x20);
                local_4b0 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
              }
              uVar26 = 0;
              if ((int)uVar21 < ((<Var28.__this)->BoneRotationVelocities).ArrayNum) {
                uVar26 = uVar32;
              }
              if ((uVar26 == 0) &&
                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar18)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              pFVar11 = ((<Var28.__this)->BoneRotationVelocities).AllocatorInstance.Data;
              *(ulonglong *)(pFVar11 + lVar30 * 0xc) = CONCAT44(fVar57,fVar55);
              *(float *)(pFVar11 + lVar30 * 0xc + 8) = local_4b0;
              uVar26 = 0;
              if ((int)uVar21 < ((<Var28.__this)->BoneScaleVelocities).ArrayNum) {
                uVar26 = uVar32;
              }
              if ((uVar26 == 0) &&
                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar18)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              fVar48 = (<Var28.__this)->MaximumScaleVelocity;
              pFVar11 = ((<Var28.__this)->BoneScaleVelocities).AllocatorInstance.Data;
              if (fVar52 <= fVar48) {
                fVar55 = *(float *)(pFVar11 + lVar30 * 0xc);
                fVar57 = *(float *)(pFVar11 + lVar30 * 0xc + 4);
                fVar56 = *(float *)(pFVar11 + lVar30 * 0xc + 8);
                fVar47 = fVar57 * fVar57 + fVar55 * fVar55 + fVar56 * fVar56;
                if (fVar47 <= fVar48 * fVar48) {
                  fVar55 = (float)*(undefined8 *)(pFVar11 + lVar30 * 0xc);
                  fVar48 = (float)((ulonglong)*(undefined8 *)(pFVar11 + lVar30 * 0xc) >> 0x20);
                  uVar51 = *(undefined4 *)(pFVar11 + lVar30 * 0xc + 8);
                }
                else {
                  fVar48 = (fVar5 / SQRT(fVar47)) * fVar48;
                  uVar51 = fVar56 * fVar48;
                  fVar55 = fVar48 * fVar55;
                  fVar48 = fVar48 * fVar57;
                }
              }
              else {
                fVar55 = (float)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
                fVar48 = (float)((ulonglong)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ >>
                                0x20);
                uVar51 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
              }
              uVar26 = 0;
              if ((int)uVar21 < ((<Var28.__this)->BoneScaleVelocities).ArrayNum) {
                uVar26 = uVar32;
              }
              if ((uVar26 == 0) &&
                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar18)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              pFVar11 = ((<Var28.__this)->BoneScaleVelocities).AllocatorInstance.Data;
              *(ulonglong *)(pFVar11 + lVar30 * 0xc) = CONCAT44(fVar48,fVar55);
              *(undefined4 *)(pFVar11 + lVar30 * 0xc + 8) = uVar51;
              iVar20 = 0;
              if ((int)uVar25 < *(int *)&local_460->field_0x8) {
                iVar20 = (int)local_468;
              }
              if (iVar20 == 0) {
                bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar18) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
              }
              dVar53 = local_348 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
              dVar54 = dStack_340 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
              lVar24 = local_488 * 0x60;
              lVar27 = *(longlong *)local_460;
              pdVar4 = (double *)(lVar24 + 0x30 + lVar27);
              local_1f0 = *pdVar4;
              dStack_390 = pdVar4[1];
              dVar37 = *(double *)(lVar24 + lVar27);
              dVar17 = ((double *)(lVar24 + lVar27))[1];
              local_200 = *(undefined1 (*) [16])(lVar24 + 0x20 + lVar27);
              auVar7 = *(undefined1 (*) [16])(lVar24 + 0x10 + lVar27);
              local_458 = local_200._0_8_ - (double)local_3a8._0_8_;
              dVar40 = local_358 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
              dVar35 = uStack_350 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
              pdVar4 = (double *)(lVar24 + 0x40 + lVar27);
              local_1e8 = *pdVar4;
              dStack_1e0 = pdVar4[1];
              dVar36 = auVar7._8_8_;
              auVar8 = *(undefined1 (*) [16])(lVar24 + 0x50 + lVar27);
              dVar50 = local_1f0 - local_450;
              auVar44._8_4_ = auVar7._8_4_;
              auVar44._0_8_ = dVar36;
              auVar44._12_4_ = auVar7._12_4_;
              local_3a8._8_4_ = local_200._8_4_;
              local_3a8._0_8_ = local_200._8_8_ - local_398;
              local_3a8._12_4_ = local_200._12_4_;
              dVar15 = auVar7._0_8_;
              auVar45._8_4_ = auVar7._0_4_;
              auVar45._0_8_ = dVar15;
              auVar45._12_4_ = auVar7._4_4_;
              dVar39 = dVar37 * dVar54 *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                       dVar36 * dVar40 +
                       dVar17 * dVar53 *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                       dVar15 * dVar35 *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
              dVar38 = dVar37 * dVar53 *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                       auVar44._8_8_ * dVar35 +
                       dVar17 * dVar54 *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                       auVar45._8_8_ * dVar40 *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
              dVar49 = dVar37 * dVar35 *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                       dVar36 * dVar53 +
                       dVar17 * dVar40 *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                       dVar15 * dVar54 *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
              dVar40 = dVar37 * dVar40 *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                       dVar36 * dVar54 +
                       dVar17 * dVar35 *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                       dVar15 * dVar53 *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
              dVar35 = __real_bff0000000000000;
              if (__real_0000000000000000 <=
                  dVar40 * UE::Math::TQuat<double>::Identity.W +
                  dVar49 * UE::Math::TQuat<double>::Identity.Z +
                  dVar38 * UE::Math::TQuat<double>::Identity.Y +
                  dVar39 * UE::Math::TQuat<double>::Identity.X) {
                dVar35 = __real_3ff0000000000000;
              }
              uVar26 = 0;
              if ((int)uVar21 < ((<Var28.__this)->BoneTranslationVelocities).ArrayNum) {
                uVar26 = uVar32;
              }
              local_1d8 = auVar8._0_8_;
              fVar48 = (<Var28.__this)->ExtrapolationHalfLifeMin;
              fVar5 = (<Var28.__this)->ExtrapolationHalfLifeMax;
              local_338.Y = dVar38 * dVar35;
              local_338.X = dVar39 * dVar35;
              local_338.W = dVar40 * dVar35;
              local_338.Z = dVar49 * dVar35;
              local_450 = (double)local_308._0_8_;
              if ((double)local_308._0_8_ <= __real_3e45798ee0000000) {
                local_450 = __real_3e45798ee0000000;
              }
              local_450 = local_1e8 / local_450;
              if ((double)local_388._0_8_ <= __real_3e45798ee0000000) {
                local_388._0_8_ = __real_3e45798ee0000000;
              }
              dVar40 = dStack_1e0 / (double)local_388._0_8_;
              dVar35 = local_368;
              if (local_368 <= __real_3e45798ee0000000) {
                dVar35 = __real_3e45798ee0000000;
              }
              local_388._8_4_ = auVar8._8_4_;
              local_388._0_8_ = local_1d8 / dVar35;
              local_388._12_4_ = auVar8._12_4_;
              fVar55 = (<Var28.__this)->ExtrapolationHalfLife;
              local_398 = dVar50;
              if ((uVar26 == 0) &&
                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar18)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              pFVar11 = ((<Var28.__this)->BoneTranslationVelocities).AllocatorInstance.Data;
              uVar6 = *(undefined8 *)(pFVar11 + lVar30 * 0xc);
              fVar57 = *(float *)(pFVar11 + lVar30 * 0xc + 8);
              if (((fVar57 < 0.0) ||
                  ((fVar56 = fVar52, fVar52 <= fVar57 && (fVar56 = fVar57, fVar57 < 0.0)))) &&
                 (fVar56 = fVar57, fVar58 < fVar57)) {
                fVar56 = fVar58;
              }
              local_3d8._4_4_ = (float)((ulonglong)uVar6 >> 0x20);
              fVar57 = ((float)local_398 / fVar56) * fVar55;
              if (fVar5 <= fVar57) {
                fVar57 = fVar5;
              }
              if (fVar57 <= fVar48) {
                fVar57 = fVar48;
              }
              if (((local_3d8._4_4_ < 0.0) ||
                  ((fVar56 = fVar52, fVar52 <= local_3d8._4_4_ &&
                   (fVar56 = local_3d8._4_4_, local_3d8._4_4_ < 0.0)))) &&
                 (fVar56 = local_3d8._4_4_, fVar58 < local_3d8._4_4_)) {
                fVar56 = fVar58;
              }
              local_3d8._0_4_ = (float)uVar6;
              fVar56 = ((float)(double)local_3a8._0_8_ / fVar56) * fVar55;
              if (fVar5 <= fVar56) {
                fVar56 = fVar5;
              }
              if (fVar56 <= fVar48) {
                fVar56 = fVar48;
              }
              if ((((float)local_3d8 < 0.0) ||
                  ((fVar47 = fVar52, fVar52 <= (float)local_3d8 &&
                   (fVar47 = (float)local_3d8, (float)local_3d8 < 0.0)))) &&
                 (fVar47 = (float)local_3d8, fVar58 < (float)local_3d8)) {
                fVar47 = fVar58;
              }
              uVar26 = 0;
              if ((int)uVar21 < ((<Var28.__this)->BoneTranslationDecayHalfLives).ArrayNum) {
                uVar26 = uVar32;
              }
              fVar55 = ((float)local_458 / fVar47) * fVar55;
              if (fVar5 <= fVar55) {
                fVar55 = fVar5;
              }
              if (fVar55 <= fVar48) {
                fVar55 = fVar48;
              }
              local_3d8 = uVar6;
              if ((uVar26 == 0) &&
                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar18)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              pFVar11 = ((<Var28.__this)->BoneTranslationDecayHalfLives).AllocatorInstance.Data;
              *(float *)(pFVar11 + lVar30 * 0xc) = fVar55;
              *(float *)(pFVar11 + lVar30 * 0xc + 4) = fVar56;
              *(float *)(pFVar11 + lVar30 * 0xc + 8) = fVar57;
              fVar48 = (<Var28.__this)->ExtrapolationHalfLifeMax;
              fVar5 = (<Var28.__this)->ExtrapolationHalfLifeMin;
              fVar55 = (<Var28.__this)->ExtrapolationHalfLife;
              uVar26 = 0;
              if ((int)uVar21 < ((<Var28.__this)->BoneRotationVelocities).ArrayNum) {
                uVar26 = uVar32;
              }
              if ((uVar26 == 0) &&
                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar18)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              pFVar11 = ((<Var28.__this)->BoneRotationVelocities).AllocatorInstance.Data;
              local_3c8 = *(undefined8 *)(pFVar11 + lVar30 * 0xc);
              fVar57 = *(float *)(pFVar11 + lVar30 * 0xc + 8);
              UE::Math::TQuat<double>::Log(&local_338,&local_2a8);
              if (((fVar57 < 0.0) ||
                  ((fVar56 = fVar52, fVar52 <= fVar57 && (fVar56 = fVar57, fVar57 < 0.0)))) &&
                 (fVar56 = fVar57, fVar58 < fVar57)) {
                fVar56 = fVar58;
              }
              fVar57 = ((float)(local_2a8.Z * __real_4000000000000000) / fVar56) * fVar55;
              if (fVar48 <= fVar57) {
                fVar57 = fVar48;
              }
              if (fVar57 <= fVar5) {
                fVar57 = fVar5;
              }
              if (((local_3c8._4_4_ < 0.0) ||
                  ((fVar56 = fVar52, fVar52 <= local_3c8._4_4_ &&
                   (fVar56 = local_3c8._4_4_, local_3c8._4_4_ < 0.0)))) &&
                 (fVar56 = local_3c8._4_4_, fVar58 < local_3c8._4_4_)) {
                fVar56 = fVar58;
              }
              fVar56 = ((float)(local_2a8.Y * __real_4000000000000000) / fVar56) * fVar55;
              if (fVar48 <= fVar56) {
                fVar56 = fVar48;
              }
              if (fVar56 <= fVar5) {
                fVar56 = fVar5;
              }
              if ((((float)local_3c8 < 0.0) ||
                  ((fVar47 = fVar52, fVar52 <= (float)local_3c8 &&
                   (fVar47 = (float)local_3c8, (float)local_3c8 < 0.0)))) &&
                 (fVar47 = (float)local_3c8, fVar58 < (float)local_3c8)) {
                fVar47 = fVar58;
              }
              uVar26 = 0;
              if ((int)uVar21 < ((<Var28.__this)->BoneRotationDecayHalfLives).ArrayNum) {
                uVar26 = uVar32;
              }
              fVar55 = ((float)(local_2a8.X * __real_4000000000000000) / fVar47) * fVar55;
              if (fVar48 <= fVar55) {
                fVar55 = fVar48;
              }
              if (fVar55 <= fVar5) {
                fVar55 = fVar5;
              }
              if ((uVar26 == 0) &&
                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar18)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              pFVar11 = ((<Var28.__this)->BoneRotationDecayHalfLives).AllocatorInstance.Data;
              *(float *)(pFVar11 + lVar30 * 0xc) = fVar55;
              *(float *)(pFVar11 + lVar30 * 0xc + 4) = fVar56;
              *(float *)(pFVar11 + lVar30 * 0xc + 8) = fVar57;
              fVar48 = (<Var28.__this)->ExtrapolationHalfLifeMax;
              fVar5 = (<Var28.__this)->ExtrapolationHalfLifeMin;
              fVar55 = (<Var28.__this)->ExtrapolationHalfLife;
              uVar26 = 0;
              if ((int)uVar21 < ((<Var28.__this)->BoneScaleVelocities).ArrayNum) {
                uVar26 = uVar32;
              }
              if ((uVar26 == 0) &&
                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar18)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              pFVar11 = ((<Var28.__this)->BoneScaleVelocities).AllocatorInstance.Data;
              uVar6 = *(undefined8 *)(pFVar11 + lVar30 * 0xc);
              fVar57 = *(float *)(pFVar11 + lVar30 * 0xc + 8);
              if (((fVar57 < 0.0) ||
                  ((fVar56 = fVar52, fVar52 <= fVar57 && (fVar56 = fVar57, fVar57 < 0.0)))) &&
                 (fVar56 = fVar57, fVar58 < fVar57)) {
                fVar56 = fVar58;
              }
              local_3b8._4_4_ = (float)((ulonglong)uVar6 >> 0x20);
              fVar57 = ((float)(double)local_388._0_8_ / fVar56) * fVar55;
              if (fVar48 <= fVar57) {
                fVar57 = fVar48;
              }
              if (fVar57 <= fVar5) {
                fVar57 = fVar5;
              }
              if (((local_3b8._4_4_ < 0.0) ||
                  ((fVar56 = fVar52, fVar52 <= local_3b8._4_4_ &&
                   (fVar56 = local_3b8._4_4_, local_3b8._4_4_ < 0.0)))) &&
                 (fVar56 = local_3b8._4_4_, fVar58 < local_3b8._4_4_)) {
                fVar56 = fVar58;
              }
              local_3b8._0_4_ = (float)uVar6;
              fVar56 = ((float)dVar40 / fVar56) * fVar55;
              if (fVar48 <= fVar56) {
                fVar56 = fVar48;
              }
              if (fVar56 <= fVar5) {
                fVar56 = fVar5;
              }
              if ((((float)local_3b8 < 0.0) ||
                  ((fVar47 = fVar52, fVar52 <= (float)local_3b8 &&
                   (fVar47 = (float)local_3b8, (float)local_3b8 < 0.0)))) &&
                 (fVar47 = (float)local_3b8, fVar58 < (float)local_3b8)) {
                fVar47 = fVar58;
              }
              uVar26 = 0;
              if ((int)uVar21 < ((<Var28.__this)->BoneScaleDecayHalfLives).ArrayNum) {
                uVar26 = uVar32;
              }
              fVar55 = ((float)local_450 / fVar47) * fVar55;
              if (fVar48 <= fVar55) {
                fVar55 = fVar48;
              }
              if (fVar55 <= fVar5) {
                fVar55 = fVar5;
              }
              local_3b8 = uVar6;
              if ((uVar26 == 0) &&
                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar18)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              pFVar11 = ((<Var28.__this)->BoneScaleDecayHalfLives).AllocatorInstance.Data;
              *(float *)(pFVar11 + lVar30 * 0xc) = fVar55;
              *(float *)(pFVar11 + lVar30 * 0xc + 4) = fVar56;
              *(float *)(pFVar11 + lVar30 * 0xc + 8) = fVar57;
              uVar59 = SUB84(__real_3e45798ee0000000,0);
              uVar60 = (undefined4)((ulonglong)__real_3e45798ee0000000 >> 0x20);
              fVar48 = __real_322bcc77;
            }
          }
        }
      }
      uVar25 = uVar25 + 1;
      local_488 = local_488 + 1;
    } while (uVar25 != uVar9);
    uVar51 = SUB84(__real_4000000000000000,0);
    uVar46 = (undefined4)((ulonglong)__real_4000000000000000 >> 0x20);
  }
  fVar58 = __real_3f800000;
  pTVar3 = &(<Var28.__this)->CurveData;
  piVar1 = (int *)((longlong)&((<Var28.__this)->CurveData)._padding_ + 4);
  iVar20 = *piVar1;
  *(undefined4 *)&((<Var28.__this)->CurveData)._padding_ = 0;
  if (iVar20 < 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FAnimNode_DeadBlending::FDeadBlendingCurveElement>_>
              (0x18,4,0,(ForElementType<FAnimNode_DeadBlending::FDeadBlendingCurveElement> *)pTVar3,
               0,piVar1);
  }
  UE::Anim::FNamedValueArrayUtils::
  Union<_TBaseBlendedCurve<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,FAnimNode_DeadBlending::FDeadBlendingCurveElement>::CopyFrom<TSizedDefaultAllocator<32>,UE::Anim::FCurveElement>_::__l3::<lambda_1>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,FAnimNode_DeadBlending::FDeadBlendingCurveElement,TSizedDefaultAllocator<32>,UE::Anim::FCurveElement>
            ((TNamedValueArray<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,FAnimNode_DeadBlending::FDeadBlendingCurveElement>
              *)pTVar3,
             (TNamedValueArray<TSizedDefaultAllocator<32>,UE::Anim::FCurveElement> *)
             &param_5->Curves,<Var34);
  *(undefined1 *)&((<Var28.__this)->CurveData)._padding_ = (param_5->Curves).BlendedCurve.field_0x10
  ;
  UE::Anim::FNamedValueArrayUtils::
  Union<_FAnimNode_DeadBlending::InitFrom_::__l2::<lambda_1>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,FAnimNode_DeadBlending::FDeadBlendingCurveElement,TSizedDefaultAllocator<32>,UE::Anim::FCurveElement>
            ((TNamedValueArray<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,FAnimNode_DeadBlending::FDeadBlendingCurveElement>
              *)pTVar3,
             (TNamedValueArray<TSizedDefaultAllocator<32>,UE::Anim::FCurveElement> *)
             &param_5->Curves,<Var28);
  if (fVar48 < param_5->DeltaTime) {
    local_318._0_4_ = SUB84(<Var28.__this,0);
    local_318._4_4_ = (undefined4)((ulonglong)<Var28.__this >> 0x20);
    local_2f8.__this._0_4_ = (undefined4)local_318;
    local_2f8.__this._4_4_ = local_318._4_4_;
    local_2f8._12_4_ = uStack_30c;
    local_318 = <Var28.__this;
    local_2f8.SrcDeltaTime = param_5->DeltaTime;
    UE::Anim::FNamedValueArrayUtils::
    Union<_FAnimNode_DeadBlending::InitFrom_::__l50::<lambda_2>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,FAnimNode_DeadBlending::FDeadBlendingCurveElement,TSizedDefaultAllocator<32>,UE::Anim::FCurveElement>
              ((TNamedValueArray<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,FAnimNode_DeadBlending::FDeadBlendingCurveElement>
                *)pTVar3,
               (TNamedValueArray<TSizedDefaultAllocator<32>,UE::Anim::FCurveElement> *)
               &param_4->Curves,&local_2f8);
  }
  UE::Anim::FNamedValueArrayUtils::
  Union<_FAnimNode_DeadBlending::InitFrom_::__l2::<lambda_3>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,FAnimNode_DeadBlending::FDeadBlendingCurveElement,TMemStackAllocator<0>,UE::Anim::FCurveElement>
            ((TNamedValueArray<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,FAnimNode_DeadBlending::FDeadBlendingCurveElement>
              *)pTVar3,(TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)local_3e8,
             (<lambda_3>)<Var28.__this);
  if (0 < (int)((<Var28.__this)->CurveFilter)._padding_) {
    UE::Anim::FCurveUtils::
    Filter<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,FAnimNode_DeadBlending::FDeadBlendingCurveElement>
              (pTVar3,&(<Var28.__this)->CurveFilter);
  }
  if (0 < (int)((<Var28.__this)->ExtrapolatedCurveFilter)._padding_) {
    UE::Anim::FCurveUtils::
    Filter<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,FAnimNode_DeadBlending::FDeadBlendingCurveElement>
              (pTVar3,&(<Var28.__this)->ExtrapolatedCurveFilter);
  }
  *(undefined8 *)&((<Var28.__this)->RootTranslationVelocity).field0_0x0 =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  ((<Var28.__this)->RootTranslationVelocity).field0_0x0._s_0.Z =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)&((<Var28.__this)->RootRotationVelocity).field0_0x0 =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  ((<Var28.__this)->RootRotationVelocity).field0_0x0._s_0.Z =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)&((<Var28.__this)->RootScaleVelocity).field0_0x0 =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  ((<Var28.__this)->RootScaleVelocity).field0_0x0._s_0.Z =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  pIVar22 = UE::Anim::IAnimRootMotionProvider::Get();
  if (pIVar22 != (IAnimRootMotionProvider *)0x0) {
    local_158[0] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
    local_158[1] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
    local_148[0] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
    local_148[1] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
    local_138[0] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
    local_138[1] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
    local_128[0] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
    local_128[1] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
    local_118[0] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
    local_118[1] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
    local_108[0] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
    local_108[1] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
    cVar19 = (**(code **)((longlong)*pIVar22 + 0x20))(pIVar22,local_3e0,local_158);
    if (((cVar19 != '\0') && (param_5->bHasRootMotion != false)) && (fVar52 < param_5->DeltaTime)) {
      dVar40 = (param_5->RootMotionDelta).Translation.XY.m128d_f64[1];
      dVar35 = (param_5->RootMotionDelta).Translation.ZW.m128d_f64[0];
      fVar52 = fVar58 / param_5->DeltaTime;
      ((<Var28.__this)->RootTranslationVelocity).field0_0x0._s_0.X =
           (float)(param_5->RootMotionDelta).Translation.XY.m128d_f64[0] * fVar52;
      ((<Var28.__this)->RootTranslationVelocity).field0_0x0._s_0.Y = (float)dVar40 * fVar52;
      ((<Var28.__this)->RootTranslationVelocity).field0_0x0._s_0.Z = (float)dVar35 * fVar52;
      local_268.X = (param_5->RootMotionDelta).Rotation.XY.m128d_f64[0];
      local_268.Y = (param_5->RootMotionDelta).Rotation.XY.m128d_f64[1];
      local_268.Z = (param_5->RootMotionDelta).Rotation.ZW.m128d_f64[0];
      local_268.W = (param_5->RootMotionDelta).Rotation.ZW.m128d_f64[1];
      UE::Math::TQuat<double>::Log(&local_268,&local_288);
      fVar52 = fVar58 / param_5->DeltaTime;
      ((<Var28.__this)->RootRotationVelocity).field0_0x0._s_0.X =
           (float)(local_288.X * (double)CONCAT44(uVar46,uVar51)) * fVar52;
      ((<Var28.__this)->RootRotationVelocity).field0_0x0._s_0.Y =
           (float)(local_288.Y * (double)CONCAT44(uVar46,uVar51)) * fVar52;
      ((<Var28.__this)->RootRotationVelocity).field0_0x0._s_0.Z =
           (float)(local_288.Z * (double)CONCAT44(uVar46,uVar51)) * fVar52;
      fVar58 = fVar58 / param_5->DeltaTime;
      if ((<Var28.__this)->bLinearlyInterpolateScales == false) {
        auVar7 = *(undefined1 (*) [16])(param_5->RootMotionDelta).Scale3D.XY.m128d_f64;
        auVar8 = *(undefined1 (*) [16])(param_5->RootMotionDelta).Scale3D.ZW.m128d_f64;
        dVar40 = auVar7._0_8_;
        if (dVar40 <= (double)CONCAT44(uVar60,uVar59)) {
          dVar40 = (double)CONCAT44(uVar60,uVar59);
        }
        dVar40 = log(dVar40);
        uVar51 = auVar7._8_4_;
        uVar46 = auVar7._12_4_;
        if (auVar7._8_8_ <= (double)CONCAT44(uVar60,uVar59)) {
          uVar51 = uVar59;
          uVar46 = uVar60;
        }
        local_430 = (float)dVar40 * fVar58;
        dVar40 = log((double)CONCAT44(uVar46,uVar51));
        uVar51 = auVar8._0_4_;
        uVar46 = auVar8._4_4_;
        if (auVar8._0_8_ <= (double)CONCAT44(uVar60,uVar59)) {
          uVar51 = uVar59;
          uVar46 = uVar60;
        }
        local_42c = (float)dVar40 * fVar58;
        dVar40 = log((double)CONCAT44(uVar46,uVar51));
        pfVar23 = &local_430;
        local_428 = (float)dVar40 * fVar58;
      }
      else {
        pfVar23 = &local_43c;
        local_43c = (float)(param_5->RootMotionDelta).Scale3D.XY.m128d_f64[0] * fVar58;
        fStack_438 = (float)(param_5->RootMotionDelta).Scale3D.XY.m128d_f64[1] * fVar58;
        local_434 = (float)(param_5->RootMotionDelta).Scale3D.ZW.m128d_f64[0] * fVar58;
      }
      fVar52 = pfVar23[2];
      *(undefined8 *)&((<Var28.__this)->RootScaleVelocity).field0_0x0 = *(undefined8 *)pfVar23;
      ((<Var28.__this)->RootScaleVelocity).field0_0x0._s_0.Z = fVar52;
    }
  }
  if ((bool)<Var34) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Initialize_AnyThread @ 1474e9440

void __thiscall
FAnimNode_DeadBlending::Initialize_AnyThread
          (FAnimNode_DeadBlending *this,FAnimationInitializeContext *param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  int iVar3;
  FName *pFVar4;
  UCurveFloat *pUVar5;
  code *pcVar6;
  bool bVar7;
  FCompactPoseBoneIndex local_res8 [2];
  undefined4 uStack_3c;
  undefined4 uStack_2c;
  TArrayView<FName_const_,int> local_28;
  TArrayView<FName_const_,int> local_18;
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_DeadBlending::Initialize_AnyThread");
  FPoseLinkBase::Initialize((FPoseLinkBase *)&this->Source,param_1);
  piVar2 = (int *)((longlong)&(this->CurveFilter)._padding_ + 4);
  iVar3 = *piVar2;
  *(undefined4 *)&(this->CurveFilter)._padding_ = 0;
  if (iVar3 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)&this->CurveFilter,0,piVar2);
  }
  *(undefined1 *)&(this->CurveFilter)._padding_ = 0;
  (this->CurveFilter).FilterMode = DisallowFiltered;
  pFVar4 = (FName *)(this->FilteredCurves).AllocatorInstance.Data;
  iVar3 = (this->FilteredCurves).ArrayNum;
  if (iVar3 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  local_28._12_4_ = uStack_3c;
  local_28.ArrayNum = iVar3;
  local_28.DataPtr = pFVar4;
  UE::Anim::FCurveFilter::AppendNames(&this->CurveFilter,&local_28);
  piVar2 = (int *)((longlong)&(this->ExtrapolatedCurveFilter)._padding_ + 4);
  iVar3 = *piVar2;
  *(undefined4 *)&(this->ExtrapolatedCurveFilter)._padding_ = 0;
  if (iVar3 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)&this->ExtrapolatedCurveFilter,0,piVar2);
  }
  *(undefined1 *)&(this->ExtrapolatedCurveFilter)._padding_ = 0;
  (this->ExtrapolatedCurveFilter).FilterMode = DisallowFiltered;
  pFVar4 = (FName *)(this->ExtrapolationFilteredCurves).AllocatorInstance.Data;
  iVar3 = (this->ExtrapolationFilteredCurves).ArrayNum;
  if (iVar3 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  local_18._12_4_ = uStack_2c;
  local_18.ArrayNum = iVar3;
  local_18.DataPtr = pFVar4;
  UE::Anim::FCurveFilter::AppendNames(&this->ExtrapolatedCurveFilter,&local_18);
  local_res8[0] = (FCompactPoseBoneIndex)0xffffffff;
  TArray<FCompactPoseBoneIndex,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>::Init
            (&this->BoneFilter,local_res8,(this->FilteredBones).ArrayNum);
  FInertializationSparsePose::Empty(&this->PrevPoseSnapshot);
  FInertializationSparsePose::Empty(&this->CurrPoseSnapshot);
  if ((this->RequestQueue).ArrayMax < 8) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x58,8,8,&(this->RequestQueue).AllocatorInstance,(this->RequestQueue).ArrayNum,
               &(this->RequestQueue).ArrayMax);
  }
  piVar2 = &(this->BoneIndices).ArrayMax;
  (this->BoneIndices).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->BoneIndices).AllocatorInstance,0,piVar2);
  }
  piVar2 = &(this->BoneTranslations).ArrayMax;
  (this->BoneTranslations).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&(this->BoneTranslations).AllocatorInstance,0,piVar2);
  }
  piVar2 = &(this->BoneRotations).ArrayMax;
  (this->BoneRotations).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,0x10,0,&(this->BoneRotations).AllocatorInstance,0,piVar2);
  }
  piVar2 = &(this->BoneRotationDirections).ArrayMax;
  (this->BoneRotationDirections).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,0x10,0,&(this->BoneRotationDirections).AllocatorInstance,0,piVar2);
  }
  piVar2 = &(this->BoneScales).ArrayMax;
  (this->BoneScales).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&(this->BoneScales).AllocatorInstance,0,piVar2);
  }
  piVar2 = &(this->BoneTranslationVelocities).ArrayMax;
  (this->BoneTranslationVelocities).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&(this->BoneTranslationVelocities).AllocatorInstance,0,piVar2);
  }
  piVar2 = &(this->BoneRotationVelocities).ArrayMax;
  (this->BoneRotationVelocities).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&(this->BoneRotationVelocities).AllocatorInstance,0,piVar2);
  }
  piVar2 = &(this->BoneScaleVelocities).ArrayMax;
  (this->BoneScaleVelocities).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&(this->BoneScaleVelocities).AllocatorInstance,0,piVar2);
  }
  piVar2 = &(this->BoneTranslationDecayHalfLives).ArrayMax;
  (this->BoneTranslationDecayHalfLives).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&(this->BoneTranslationDecayHalfLives).AllocatorInstance,0,piVar2);
  }
  piVar2 = &(this->BoneRotationDecayHalfLives).ArrayMax;
  (this->BoneRotationDecayHalfLives).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&(this->BoneRotationDecayHalfLives).AllocatorInstance,0,piVar2);
  }
  piVar2 = &(this->BoneScaleDecayHalfLives).ArrayMax;
  (this->BoneScaleDecayHalfLives).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&(this->BoneScaleDecayHalfLives).AllocatorInstance,0,piVar2);
  }
  piVar2 = (int *)((longlong)&(this->CurveData)._padding_ + 4);
  iVar3 = *piVar2;
  *(undefined4 *)&(this->CurveData)._padding_ = 0;
  if (iVar3 < 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FAnimNode_DeadBlending::FDeadBlendingCurveElement>_>
              (0x18,4,0,(ForElementType<FAnimNode_DeadBlending::FDeadBlendingCurveElement> *)
                        &this->CurveData,0,piVar2);
  }
  *(undefined1 *)&(this->CurveData)._padding_ = 0;
  this->DeltaTime = 0.0;
  puVar1 = &(this->InertializationDurationPerBone).field_0xc;
  this->InertializationState = Inactive;
  this->InertializationTime = 0.0;
  this->InertializationDuration = 0.0;
  *(undefined4 *)&(this->InertializationDurationPerBone).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)&this->InertializationDurationPerBone,0,(int *)puVar1);
  }
  this->InertializationBlendMode = this->DefaultBlendMode;
  this->InertializationMaxDuration = 0.0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar5 = (this->DefaultCustomBlendCurve).field0_0x0.DebugPtr, pUVar5 != (UCurveFloat *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  (this->InertializationCustomBlendCurve).field0_0x0 = (this->DefaultCustomBlendCurve).field0_0x0;
  FStatsHierarchical::EndMeasurement();
  return;
}

// NeedsDynamicReset @ 1474ed890

bool __thiscall FAnimNode_DeadBlending::NeedsDynamicReset(FAnimNode_DeadBlending *this)

{
  return true;
}

// RequestInertialization @ 1474f54f0

void __thiscall
FAnimNode_DeadBlending::RequestInertialization
          (FAnimNode_DeadBlending *this,FInertializationRequest *param_1)

{
  if (0.0 < param_1->Duration || param_1->Duration == 0.0) {
    TArray<FInertializationRequest,TSizedDefaultAllocator<32>_>::
    AddUniqueImpl<FInertializationRequest_const_&>(&this->RequestQueue,param_1);
    return;
  }
  return;
}

// Update_AnyThread @ 147501c40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FAnimNode_DeadBlending::Update_AnyThread
          (FAnimNode_DeadBlending *this,FAnimationUpdateContext *param_1)

{
  int *piVar1;
  int iVar2;
  FInertializationRequest *pFVar3;
  longlong lVar4;
  code *pcVar5;
  undefined4 uVar6;
  bool bVar7;
  short sVar8;
  TReferenceControllerBase<1> *pTVar9;
  short sVar10;
  TReferenceControllerBase<1> *pTVar11;
  FName FVar12;
  FScopedGraphMessage local_b8;
  FScopedGraphMessage local_a8;
  TSharedRef<UE::Anim::IGraphMessage,1> local_98;
  TSharedRef<UE::Anim::IGraphMessage,1> local_88;
  FAnimNode_DeadBlending *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  code *local_58 [5];
  undefined8 *local_30;
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_DeadBlending::Update_AnyThread");
  pTVar11 = (TReferenceControllerBase<1> *)0x0;
  if ((((this->bResetOnBecomingRelevant != false) &&
       (sVar10 = (this->UpdateCounter).Counter, sVar10 != -1)) &&
      ((this->UpdateCounter).LastSyncronizedFrame != 0xffffffffffffffff)) &&
     (sVar10 != *(short *)(param_1->_padding_ + 0x5b0))) {
    sVar8 = (this->UpdateCounter).Counter + 1;
    sVar10 = 0;
    if (sVar8 != -1) {
      sVar10 = sVar8;
    }
    if (((sVar10 == -1) || (GFrameCounter == 0xffffffffffffffff)) ||
       (sVar10 != *(short *)(param_1->_padding_ + 0x5b0))) {
      piVar1 = &(this->RequestQueue).ArrayMax;
      pFVar3 = (FInertializationRequest *)(this->RequestQueue).AllocatorInstance.Data;
      iVar2 = (this->RequestQueue).ArrayNum;
      if (*piVar1 < 0) {
        DestructItems<FInertializationRequest,int>(pFVar3,iVar2);
        (this->RequestQueue).ArrayNum = 0;
        if (*piVar1 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x58,8,0,&(this->RequestQueue).AllocatorInstance,0,piVar1);
        }
      }
      else {
        DestructItems<FInertializationRequest,int>(pFVar3,iVar2);
        (this->RequestQueue).ArrayNum = 0;
      }
      Deactivate(this);
      FInertializationSparsePose::Empty(&this->PrevPoseSnapshot);
      FInertializationSparsePose::Empty(&this->CurrPoseSnapshot);
    }
  }
  lVar4 = param_1->_padding_;
  local_a8.MessageType.ComparisonIndex.Value = 0;
  local_a8.MessageType.Number = 0;
  (this->UpdateCounter).Counter = *(short *)(lVar4 + 0x5b0);
  (this->UpdateCounter).LastSyncronizedFrame = *(ulong64 *)(lVar4 + 0x5a8);
  (this->UpdateCounter).SkipFrames = *(short *)(lVar4 + 0x5b2);
  local_a8.SharedContext = (FAnimationUpdateSharedContext *)param_1->_padding_;
  local_98.SharedReferenceCount.ReferenceController = ::operator_new(0x30);
  if (local_98.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    local_98.Object = (IGraphMessage *)___xmm_00000000000000000000000000000010;
    local_98.SharedReferenceCount.ReferenceController = _UNK_150651568;
    FVar12 = UE::Anim::IInertializationRequester::TypeName;
    pTVar9 = pTVar11;
  }
  else {
    (local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (local_98.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    (local_98.SharedReferenceCount.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFDeadBlendingRequester_Anim_UE___00_SharedPointerInternals__6B_
    ;
    local_98.SharedReferenceCount.ReferenceController[1]._padding_ =
         (longlong)&___7FDeadBlendingRequester_Anim_UE__6B_;
    *(FAnimNode_DeadBlending **)
     &local_98.SharedReferenceCount.ReferenceController[1].SharedReferenceCount = this;
    *(undefined4 *)&local_98.SharedReferenceCount.ReferenceController[2]._padding_ =
         *(undefined4 *)((longlong)&param_1->_padding_ + 4);
    uVar6 = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
    local_98.SharedReferenceCount.ReferenceController[2].SharedReferenceCount =
         (atomic<int>)*(undefined4 *)&param_1->_padding_;
    local_98.SharedReferenceCount.ReferenceController[2].WeakReferenceCount = (atomic<int>)uVar6;
    if (local_98.SharedReferenceCount.ReferenceController + 1 == (TReferenceControllerBase<1> *)0x0)
    {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    FVar12 = UE::Anim::IInertializationRequester::TypeName;
    LOCK();
    (local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    pTVar9 = local_98.SharedReferenceCount.ReferenceController;
    local_98.Object = (IGraphMessage *)(local_98.SharedReferenceCount.ReferenceController + 1);
  }
  UE::Anim::FScopedGraphMessage::PushMessage
            (&local_a8,(FAnimationBaseContext *)param_1,&local_98,FVar12);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  if (this->bForwardRequestsThroughSkippedCachedPoseNodes == false) {
    FPoseLinkBase::Update((FPoseLinkBase *)&this->Source,param_1);
  }
  else {
    uStack_70 = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
    local_68 = param_1->_padding_;
    local_b8.SharedContext = (FAnimationUpdateSharedContext *)param_1->_padding_;
    local_b8.MessageType.ComparisonIndex.Value = 0;
    local_b8.MessageType.Number = 0;
    local_78 = this;
    pTVar9 = ::operator_new(0x50);
    if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
      local_88.Object = (IGraphMessage *)___xmm_00000000000000000000000000000010;
      local_88.SharedReferenceCount.ReferenceController = _UNK_150651568;
      FVar12 = UE::Anim::FCachedPoseSkippedUpdateHandler::TypeName;
    }
    else {
      pTVar9->SharedReferenceCount = (atomic<int>)0x1;
      pTVar9->WeakReferenceCount = (atomic<int>)0x1;
      local_58[0] = (code *)0x0;
      pTVar9->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_VFCachedPoseSkippedUpdateHandler_Anim_UE___00_SharedPointerInternals__6B_
      ;
      local_30 = FMemory::Malloc(0x20,8);
      *local_30 = &UE::Core::Private::Function::
                   TFunction_OwnedObject<`FAnimNode_DeadBlending::Update_AnyThread'::`8'::<lambda_1>,1,1>
                   ::_vftable_;
      local_30[1] = local_78;
      local_30[2] = CONCAT44(uStack_6c,uStack_70);
      local_30[3] = local_68;
      if (local_30 + 1 != (undefined8 *)0x0) {
        local_58[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`FAnimNode_DeadBlending::Update_AnyThread'::__l8::<lambda_1>,void,TArrayView<UE::Anim::FMessageStack_const_,int>_>
                      ::Call;
      }
      UE::Anim::FCachedPoseSkippedUpdateHandler::FCachedPoseSkippedUpdateHandler
                ((FCachedPoseSkippedUpdateHandler *)(pTVar9 + 1),
                 (TUniqueFunction<void___cdecl(TArrayView<UE::Anim::FMessageStack_const_,int>)> *)
                 local_58);
      local_88.Object = (IGraphMessage *)(pTVar9 + 1);
      if ((TReferenceControllerBase<1> *)local_88.Object == (TReferenceControllerBase<1> *)0x0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      FVar12 = UE::Anim::FCachedPoseSkippedUpdateHandler::TypeName;
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
      pTVar11 = pTVar9;
      local_88.SharedReferenceCount.ReferenceController = pTVar9;
    }
    UE::Anim::FScopedGraphMessage::PushMessage
              (&local_b8,(FAnimationBaseContext *)param_1,&local_88,FVar12);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
    FPoseLinkBase::Update((FPoseLinkBase *)&this->Source,param_1);
    UE::Anim::FScopedGraphMessage::PopMessage(&local_b8);
  }
  this->DeltaTime = param_1->DeltaTime + this->DeltaTime;
  UE::Anim::FScopedGraphMessage::PopMessage(&local_a8);
  FStatsHierarchical::EndMeasurement();
  return;
}

