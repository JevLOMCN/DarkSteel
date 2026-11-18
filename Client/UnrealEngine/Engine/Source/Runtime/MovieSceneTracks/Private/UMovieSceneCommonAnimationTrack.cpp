// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 26

// StaticClass @ 146881a70

UClass * __cdecl UMovieSceneCommonAnimationTrack::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneCommonAnimationTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneCommonAnimationTrack",
               &Z_Registration_Info_UClass_UMovieSceneCommonAnimationTrack.InnerSingleton,
               StaticRegisterNativesUMovieSceneCommonAnimationTrack,0x1c0,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneCommonAnimationTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneCommonAnimationTrack>,local_res8,
               UMovieSceneNameableTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneCommonAnimationTrack.InnerSingleton;
}

// UMovieSceneCommonAnimationTrack @ 14689d4e0

/* WARNING: Type propagation algorithm not settling */

UMovieSceneCommonAnimationTrack * __thiscall
UMovieSceneCommonAnimationTrack::UMovieSceneCommonAnimationTrack
          (UMovieSceneCommonAnimationTrack *this,FVTableHelper *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  UMovieSceneNameableTrack::UMovieSceneNameableTrack((UMovieSceneNameableTrack *)this,param_1);
  *(undefined ***)this = &_vftable__for__UMovieSceneDecorationContainerObject__;
  *(undefined ***)&this->field_0x70 = &_vftable__for__IMovieSceneTrackVirtualAPI__;
  (this->AnimationSections).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AnimationSections).ArrayNum = 0;
  (this->AnimationSections).ArrayMax = 0;
  (this->RootMotionParams).FrameTick.FrameNumber = 0;
  (this->RootMotionParams).FrameTick.SubFrame = 0.0;
  (this->RootMotionParams).StartFrame.FrameNumber = 0;
  (this->RootMotionParams).StartFrame.SubFrame = 0.0;
  (this->RootMotionParams).EndFrame.FrameNumber = 0;
  (this->RootMotionParams).EndFrame.SubFrame = 0.0;
  (this->RootMotionParams).bRootMotionsDirty = true;
  (this->RootMotionParams).bHaveRootMotion = false;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->RootMotionParams).RootMotionStartOffset.Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->RootMotionParams).RootMotionStartOffset.Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->RootMotionParams).RootMotionStartOffset.Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->RootMotionParams).RootMotionStartOffset.Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->RootMotionParams).RootMotionStartOffset.Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->RootMotionParams).RootMotionStartOffset.Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->RootMotionParams).RootMotionStartOffset.Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->RootMotionParams).RootMotionStartOffset.Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->RootMotionParams).RootMotionStartOffset.Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->RootMotionParams).RootMotionStartOffset.Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->RootMotionParams).RootMotionStartOffset.Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->RootMotionParams).RootMotionStartOffset.Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  return this;
}

// UMovieSceneCommonAnimationTrack @ 14689d5a0

/* WARNING: Type propagation algorithm not settling */

UMovieSceneCommonAnimationTrack * __thiscall
UMovieSceneCommonAnimationTrack::UMovieSceneCommonAnimationTrack
          (UMovieSceneCommonAnimationTrack *this,FObjectInitializer *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  UMovieSceneNameableTrack::UMovieSceneNameableTrack((UMovieSceneNameableTrack *)this,param_1);
  *(undefined ***)this = &_vftable__for__UMovieSceneDecorationContainerObject__;
  *(undefined ***)&this->field_0x70 = &_vftable__for__IMovieSceneTrackVirtualAPI__;
  (this->AnimationSections).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AnimationSections).ArrayNum = 0;
  (this->AnimationSections).ArrayMax = 0;
  (this->RootMotionParams).FrameTick.FrameNumber = 0;
  (this->RootMotionParams).FrameTick.SubFrame = 0.0;
  (this->RootMotionParams).StartFrame.FrameNumber = 0;
  (this->RootMotionParams).StartFrame.SubFrame = 0.0;
  (this->RootMotionParams).EndFrame.FrameNumber = 0;
  (this->RootMotionParams).EndFrame.SubFrame = 0.0;
  (this->RootMotionParams).bRootMotionsDirty = true;
  (this->RootMotionParams).bHaveRootMotion = false;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->RootMotionParams).RootMotionStartOffset.Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->RootMotionParams).RootMotionStartOffset.Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->RootMotionParams).RootMotionStartOffset.Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->RootMotionParams).RootMotionStartOffset.Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->RootMotionParams).RootMotionStartOffset.Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->RootMotionParams).RootMotionStartOffset.Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->RootMotionParams).RootMotionStartOffset.Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->RootMotionParams).RootMotionStartOffset.Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->RootMotionParams).RootMotionStartOffset.Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->RootMotionParams).RootMotionStartOffset.Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->RootMotionParams).RootMotionStartOffset.Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->RootMotionParams).RootMotionStartOffset.Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  this->bBlendFirstChildOfRoot = false;
  return this;
}

// ~UMovieSceneCommonAnimationTrack @ 1468a06d0

void __thiscall
UMovieSceneCommonAnimationTrack::~UMovieSceneCommonAnimationTrack
          (UMovieSceneCommonAnimationTrack *this)

{
  FScriptContainerElement *pFVar1;
  
  *(undefined ***)this = &_vftable__for__UMovieSceneDecorationContainerObject__;
  *(undefined ***)&this->field_0x70 = &_vftable__for__IMovieSceneTrackVirtualAPI__;
  pFVar1 = (this->AnimationSections).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UMovieSceneNameableTrack::~UMovieSceneNameableTrack((UMovieSceneNameableTrack *)this);
  return;
}

// AddNewAnimation @ 1468a6710

UMovieSceneSection * __thiscall
UMovieSceneCommonAnimationTrack::AddNewAnimation
          (UMovieSceneCommonAnimationTrack *this,FFrameNumber param_1,UAnimSequenceBase *param_2)

{
  UMovieSceneSection *pUVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001468a6719. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pUVar1 = (UMovieSceneSection *)(**(code **)(*(longlong *)this + 0x380))();
  return pUVar1;
}

// AddNewAnimationOnRow @ 1468a6730

UMovieSceneSection * __thiscall
UMovieSceneCommonAnimationTrack::AddNewAnimationOnRow
          (UMovieSceneCommonAnimationTrack *this,FFrameNumber param_1,UAnimSequenceBase *param_2,
          int param_3)

{
  undefined8 uVar1;
  FSectionParameter FVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  int iVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  undefined1 in_XMM3 [16];
  undefined1 auVar9 [16];
  
  FVar2.Section = (UMovieSceneSection *)(**(code **)(*(longlong *)this + 0x358))();
  if (FVar2.Section != (UMovieSceneSection *)0x0) {
    pUVar3 = Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_NoRegister();
    iVar5 = (int)pUVar3->_padding_;
    if ((iVar5 <= *(int *)((FVar2.Section)->_padding_ + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)((FVar2.Section)->_padding_ + 0x30) + (longlong)iVar5 * 8) ==
        &pUVar3->_padding_)) goto LAB_1468a6789;
  }
  FVar2.Section = (UMovieSceneSection *)0x0;
LAB_1468a6789:
  pUVar3 = Z_Construct_UClass_UMovieScene_NoRegister();
  pUVar4 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar3);
  uVar1 = *(undefined8 *)&pUVar4[7].field_0x20;
  fVar6 = (float)(**(code **)(param_2->_padding_ + 0x2c0))(param_2);
  dVar7 = ((double)fVar6 * (double)(int)uVar1) / (double)(int)((ulonglong)uVar1 >> 0x20);
  auVar9._8_8_ = 0;
  auVar9._0_8_ = dVar7;
  auVar9 = roundpd(in_XMM3,auVar9,1);
  dVar8 = auVar9._0_8_;
  dVar7 = dVar7 - dVar8;
  if (__real_41dfffffffc00000 <= dVar8) {
    dVar8 = __real_41dfffffffc00000;
  }
  if (dVar8 <= __real_c1e0000000000000) {
    dVar8 = __real_c1e0000000000000;
  }
  iVar5 = (int)dVar7;
  fVar6 = (float)dVar7 - (float)iVar5;
  if ((0.0 < fVar6) && (::FFrameTime::MaxSubframe <= fVar6)) {
    fVar6 = ::FFrameTime::MaxSubframe;
  }
  if (::FFrameTime::MaxSubframe <= fVar6) {
    fVar6 = ::FFrameTime::MaxSubframe;
  }
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  (**(code **)((FVar2.Section)->_padding_ + 0x330))
            (FVar2.Section,&this->AnimationSections,param_1.Value,
             (int)(fVar6 + __real_3f000000) + (int)dVar8 + 1 + iVar5,param_3);
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  FVar2.Section[1]._padding_ = (longlong)param_2;
  UMovieSceneTrack::AddSection((UMovieSceneTrack *)this,FVar2);
  return FVar2.Section;
}

// AddSection @ 1468a8c50

void __thiscall
UMovieSceneCommonAnimationTrack::AddSection
          (UMovieSceneCommonAnimationTrack *this,UMovieSceneSection *param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UMovieSceneSection *local_18 [2];
  
  puVar1 = &this->field_0xa8;
  local_18[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UMovieSceneSection *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  if ((*(UMovieSceneSection ***)puVar1 <= local_18) &&
     (local_18 < *(UMovieSceneSection ***)puVar1 + *(int *)&this->field_0xb4)) {
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
  iVar4 = *(int *)&this->field_0xb0;
  if (iVar4 == *(int *)&this->field_0xb4) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)puVar1,(int *)&this->field_0xb4);
  }
  *(int *)&this->field_0xb0 = iVar4 + 1;
  *(UMovieSceneSection **)(*(longlong *)puVar1 + (longlong)iVar4 * 8) = local_18[0];
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_18[0] != (UMovieSceneSection *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_18[0]);
  }
  SetUpRootMotions((UMovieSceneCommonAnimationTrack *)
                   &this[-1].RootMotionParams.RootMotionStartOffset,true);
  return;
}

// AutoMatchSectionRoot @ 1468ab420

void __thiscall
UMovieSceneCommonAnimationTrack::AutoMatchSectionRoot
          (UMovieSceneCommonAnimationTrack *this,UMovieSceneSkeletalAnimationSection *param_1)

{
  return;
}

// CreateNewSection @ 1468ae1d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieSceneSection * __thiscall
UMovieSceneCommonAnimationTrack::CreateNewSection(UMovieSceneCommonAnimationTrack *this)

{
  UClass *pUVar1;
  UMovieSceneSection *pUVar2;
  longlong *plVar3;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_a8 = 0;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._48_8_ = (FObjectInstancingGraph *)0x0;
  local_98._56_8_ = (UPackage *)0x0;
  local_98._16_4_ = 0;
  local_98._20_4_ = 0;
  local_98._24_4_ = RF_Transactional;
  local_98._40_8_ = (UObject *)0x0;
  local_98[0x20] = false;
  local_98._8_8_ = this;
  pUVar2 = (UMovieSceneSection *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// GetAllSections @ 1468b5720

TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> * __thiscall
UMovieSceneCommonAnimationTrack::GetAllSections(UMovieSceneCommonAnimationTrack *this)

{
  return (TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> *)&this->AnimationSections;
}

// GetPrivateStaticClass @ 1468b6d90

UClass * __cdecl UMovieSceneCommonAnimationTrack::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneCommonAnimationTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneCommonAnimationTrack",
               &Z_Registration_Info_UClass_UMovieSceneCommonAnimationTrack.InnerSingleton,
               StaticRegisterNativesUMovieSceneCommonAnimationTrack,0x1c0,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneCommonAnimationTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneCommonAnimationTrack>,local_res8,
               UMovieSceneNameableTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneCommonAnimationTrack.InnerSingleton;
}

// GetRootMotion @ 1468b8cf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TOptional<UE::Math::TTransform<double>_> * __thiscall
UMovieSceneCommonAnimationTrack::GetRootMotion
          (UMovieSceneCommonAnimationTrack *this,
          TOptional<UE::Math::TTransform<double>_> *__return_storage_ptr__,FFrameTime param_1)

{
  FFrameRate FVar1;
  UMovieSceneSkeletalAnimationSection *this_00;
  UAnimSequenceBase *pUVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  UClass *pUVar7;
  UObject *pUVar8;
  uint *puVar9;
  FTlsAutoCleanup *pFVar10;
  TOptional<UE::Math::TTransform<double>_> *pTVar11;
  ulonglong uVar12;
  FObjectPtr_u_0 *pFVar13;
  longlong lVar14;
  ForAnyElementType FVar15;
  FFrameNumber FVar16;
  uint uVar17;
  FObjectPtr_u_0 *pFVar18;
  FFrameNumber FVar19;
  FScriptContainerElement *this_01;
  FScriptContainerElement *pFVar20;
  undefined1 auStackY_678 [32];
  undefined1 local_628;
  FIdentityFunctor local_627 [7];
  TArray<float,TSizedDefaultAllocator<32>_> local_620;
  undefined1 local_610 [8];
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_608;
  TArray<float,TSizedDefaultAllocator<32>_> local_5f8;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_5e8;
  ForAnyElementType local_5d8;
  int local_5d0 [2];
  FScriptContainerElement *local_5c8;
  uint local_5c0;
  FScriptContainerElement *local_5b8;
  FObjectPtr_u_0 *local_5b0;
  FMemMark local_5a8;
  FObjectPtr_u_0 local_580;
  FObjectPtr_u_0 local_578 [2];
  TArray<int,TSizedDefaultAllocator<32>_> *local_568;
  undefined8 local_560;
  TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *local_558;
  undefined8 local_550;
  TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_> *local_548
  ;
  undefined8 local_540;
  void *local_538;
  undefined8 local_530;
  FMovieSceneTrackEvaluationField *local_528;
  TOptional<UE::Math::TTransform<double>_> *local_520;
  FCurveFilterSettings local_518;
  FBaseCompactPose<TMemStackAllocator<0>_> local_508;
  FBlendedCurve local_4f0;
  code *local_4d0;
  undefined1 *local_4c8;
  TArrayView<unsigned_short_const_,int> local_4c0;
  __m128 local_4a8;
  FAnimationPoseData local_498;
  TTransform<double> local_478;
  undefined1 local_418 [96];
  TTransform<double> local_3b8;
  undefined1 local_358 [32];
  TTransform<double> local_338 [4];
  float local_1b8 [4];
  FBoneContainer local_1a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_678;
  __return_storage_ptr__->bIsSet = false;
  local_520 = __return_storage_ptr__;
  pUVar7 = Z_Construct_UClass_UMovieScene_NoRegister();
  pUVar8 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar7);
  if (pUVar8 != (UObject *)0x0) {
    FVar1.Numerator = *(int *)&pUVar8[7].field_0x20;
    FVar1.Denominator = *(int *)&pUVar8[7].field_0x24;
    if ((this->RootMotionParams).bRootMotionsDirty != false) {
      SetUpRootMotions(this,true);
    }
    if ((this->RootMotionParams).bHaveRootMotion != false) {
      AlgoImpl::
      IntroSortInternal<TObjectPtr<UMovieSceneSection>,int,FIdentityFunctor,TDereferenceWrapper<TObjectPtr<UMovieSceneSection>,_UMovieSceneCommonAnimationTrack::SortSections_::__l2::<lambda_1>_>_>
                ((TObjectPtr<UMovieSceneSection> *)(this->AnimationSections).AllocatorInstance.Data,
                 (this->AnimationSections).ArrayNum,local_627[0],(<lambda_1> *)local_627);
      local_418._0_8_ = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
      local_418._8_8_ = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
      local_418._16_8_ = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
      local_418._24_8_ = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
      local_418._32_8_ = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
      local_418._40_8_ = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
      local_418._48_8_ = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
      local_418._56_8_ = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
      local_418._64_8_ = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
      local_418._72_8_ = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
      local_418._80_8_ = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
      local_418._88_8_ = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
      local_5e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_5e8.ArrayNum = 0;
      local_5e8.ArrayMax = 0;
      local_5f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_5f8.ArrayNum = 0;
      local_5f8.ArrayMax = 0;
      local_608.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_608.ArrayNum = 0;
      local_608.ArrayMax = 0;
      local_620.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_620.ArrayNum = 0;
      local_620.ArrayMax = 0;
      local_528 = UMovieSceneTrack::GetEvaluationField((UMovieSceneTrack *)this);
      local_5c0 = (local_528->Entries).ArrayNum;
      uVar12 = (ulonglong)(int)local_5c0;
      this_01 = (local_528->Entries).AllocatorInstance.Data;
      pFVar20 = this_01 + uVar12 * 0x20;
      pFVar18 = (FObjectPtr_u_0 *)(this_01 + 8);
      local_5c8 = pFVar20;
      while( true ) {
        local_5b8 = this_01;
        local_5b0 = pFVar18;
        if ((local_528->Entries).ArrayNum != (int)uVar12) {
          local_628 = 0;
          `TCheckedPointerIterator<FMovieSceneTrackEvaluationFieldEntry_const_,int,0>::operator!='::
          __l2::<lambda_1>::operator()(&local_628);
        }
        if (this_01 == pFVar20) break;
        local_580._0_1_ = 1;
        FVar16 = param_1.FrameNumber.Value;
        local_580._4_4_ = FVar16.Value;
        if (*(FScriptContainerElement *)pFVar18 == (FScriptContainerElement)0x2) {
LAB_1468b8ea8:
          pFVar13 = pFVar18 + 1;
          local_578[0]._0_1_ = 1;
          local_578[0]._4_4_ = FVar16.Value;
          if (*(FScriptContainerElement *)(pFVar18 + 1) != (FScriptContainerElement)0x2) {
            iVar6 = *(int *)((longlong)pFVar18 + 0xc);
            if (iVar6 <= FVar16.Value) {
              if (iVar6 < FVar16.Value) {
                pFVar13 = local_578;
              }
              if (*(FScriptContainerElement *)(pFVar18 + 1) != (FScriptContainerElement)0x1)
              goto LAB_1468b9668;
            }
            if (*(int *)((longlong)pFVar13 + 4) != iVar6) goto LAB_1468b9668;
          }
          if (*(longlong *)this_01 != 0) {
            pUVar7 = Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_NoRegister();
            bVar4 = FObjectPtr::IsA((FObjectPtr *)this_01,pUVar7);
            if ((bVar4) &&
               (this_00 = *(UMovieSceneSkeletalAnimationSection **)this_01, pFVar20 = local_5c8,
               this_00 != (UMovieSceneSkeletalAnimationSection *)0x0)) {
              pUVar2 = (this_00->Params).Animation.field0_0x0.DebugPtr;
              FVar19.Value = *(int *)(pFVar18 + 2);
              if (*(int *)(pFVar18 + 2) == -0x80000000) {
                FVar19.Value = FVar16.Value;
              }
              if (pUVar2 != (UAnimSequenceBase *)0x0) {
                puVar9 = TThreadSingleton<FMemStack>::GetTlsSlot();
                local_4c8 = local_610;
                local_4d0 = UE::Core::Private::Function::
                            TFunctionRefCaller<`TThreadSingleton<FMemStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                            ::Call;
                pFVar10 = FThreadSingletonInitializer::Get
                                    ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_4d0,
                                     puVar9);
                uVar17 = 0;
                local_5a8.Mem = (FMemStackBase *)(pFVar10 + 2);
                local_5a8.Top = (local_5a8.Mem)->Top;
                local_5a8.SavedChunk = *(FTaggedMemory **)(pFVar10 + 4);
                local_5a8.bPopped = false;
                local_5a8.NextTopmostMark = *(FMemMark **)(pFVar10 + 5);
                pFVar10[5] = (FTlsAutoCleanup)&local_5a8;
                *(int *)(pFVar10 + 6) = *(int *)(pFVar10 + 6) + 1;
                local_508._padding_ = 0;
                local_508._padding_ = 0;
                local_508.BoneContainer = (FBoneContainer *)0x0;
                local_5d8.Data = (FScriptContainerElement *)0x0;
                local_5d0[0] = 0;
                local_5d0[1] = 0;
                UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,*(int *)(pUVar2->_padding_ + 0x70),&local_5d8,local_5d0,local_5d0 + 1
                          );
                iVar6 = local_5d0[0];
                if (0 < local_5d0[0]) {
                  do {
                    uVar5 = 0;
                    if ((int)uVar17 < local_5d0[0]) {
                      uVar5 = ~uVar17 >> 0x1f;
                    }
                    if ((uVar5 == 0) &&
                       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar4)) {
                      pcVar3 = (code *)swi(3);
                      pTVar11 = (TOptional<UE::Math::TTransform<double>_> *)(*pcVar3)();
                      return pTVar11;
                    }
                    *(short *)(local_5d8.Data + (longlong)(int)uVar17 * 2) = (short)uVar17;
                    uVar17 = uVar17 + 1;
                    iVar6 = local_5d0[0];
                  } while ((int)uVar17 < local_5d0[0]);
                }
                pUVar8 = (UObject *)pUVar2->_padding_;
                local_518.FilterCurves = (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0;
                local_518.FilterMode = None;
                local_518.LODIndex = 0;
                local_4c0.DataPtr = (ushort *)local_5d8.Data;
                if ((iVar6 < 0) &&
                   (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                      ("InCount >= 0",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                       ,0xeb,L""), bVar4)) {
                  pcVar3 = (code *)swi(3);
                  pTVar11 = (TOptional<UE::Math::TTransform<double>_> *)(*pcVar3)();
                  return pTVar11;
                }
                local_4c0.ArrayNum = iVar6;
                FBoneContainer::FBoneContainer(&local_1a8,&local_4c0,&local_518,pUVar8);
                FBaseCompactPose<TMemStackAllocator<0>_>::ResetToRefPose(&local_508,&local_1a8);
                local_4f0._0_8_ = 0;
                local_4f0._8_8_ = 0;
                local_4f0._16_1_ = 0;
                local_4f0._24_8_ = 0;
                FBlendedCurve::InitFrom(&local_4f0,&local_1a8);
                local_568 = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
                local_560 = 0;
                local_558 = (TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)0x0;
                local_550 = 0;
                local_548 = (TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>
                             *)0x0;
                local_540 = 0;
                local_538 = (void *)0x0;
                local_530 = 0;
                FAnimationPoseData::FAnimationPoseData
                          (&local_498,(FCompactPose *)&local_508,&local_4f0,
                           (FStackAttributeContainer *)&local_568);
                UMovieSceneSkeletalAnimationSection::FRootMotionTransformParam::
                FRootMotionTransformParam((FRootMotionTransformParam *)local_358);
                local_358._4_4_ = 0.0;
                local_358._0_4_ = FVar19.Value;
                local_358._8_8_ = FVar1;
                bVar4 = UMovieSceneSkeletalAnimationSection::GetRootMotionTransform
                                  (this_00,&local_498,(FRootMotionTransformParam *)local_358);
                if (bVar4) {
                  if (local_358[0x10] == false) {
                    local_3b8.Rotation.XY.m128d_f64[0] =
                         (double)GlobalVectorConstants::Float0001.m128_f32[0];
                    local_3b8.Rotation.XY.m128d_f64[1] =
                         (double)GlobalVectorConstants::Float0001.m128_f32[1];
                    local_3b8.Rotation.ZW.m128d_f64[0] =
                         (double)GlobalVectorConstants::Float0001.m128_f32[2];
                    local_3b8.Rotation.ZW.m128d_f64[1] =
                         (double)GlobalVectorConstants::Float0001.m128_f32[3];
                    local_3b8.Translation.ZW.m128d_f64[0] =
                         (double)GlobalVectorConstants::FloatZero.m128_f32[2];
                    local_3b8.Translation.ZW.m128d_f64[1] =
                         (double)GlobalVectorConstants::FloatZero.m128_f32[3];
                    local_3b8.Translation.XY.m128d_f64[1]._0_4_ =
                         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
                    local_3b8.Translation.XY.m128d_f64[0] =
                         (double)GlobalVectorConstants::FloatZero.m128_f32[0];
                    local_3b8.Translation.XY.m128d_f64[1]._4_4_ =
                         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >>
                              0x20);
                    local_3b8.Scale3D.ZW.m128d_f64[0] =
                         (double)GlobalVectorConstants::Float1110.m128_f32[2];
                    local_3b8.Scale3D.ZW.m128d_f64[1] =
                         (double)GlobalVectorConstants::Float1110.m128_f32[3];
                    local_3b8.Scale3D.XY.m128d_f64[1]._0_4_ =
                         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
                    local_3b8.Scale3D.XY.m128d_f64[0] =
                         (double)GlobalVectorConstants::Float1110.m128_f32[0];
                    local_3b8.Scale3D.XY.m128d_f64[1]._4_4_ =
                         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >>
                              0x20);
                    UE::Math::TTransform<double>::Multiply
                              (&local_3b8,(TTransform<double> *)(local_358 + 0x20),
                               &this_00->PreviousTransform);
                    local_418._8_8_ = local_3b8.Rotation.XY.m128d_f64[1];
                    local_418._0_8_ = local_3b8.Rotation.XY.m128d_f64[0];
                    local_418._24_8_ = local_3b8.Rotation.ZW.m128d_f64[1];
                    local_418._16_8_ = local_3b8.Rotation.ZW.m128d_f64[0];
                    local_418._32_8_ = local_3b8.Translation.XY.m128d_f64[0];
                    local_418._40_8_ = local_3b8.Translation.XY.m128d_f64[1];
                    local_418._56_8_ = local_3b8.Translation.ZW.m128d_f64[1];
                    local_418._48_8_ = local_3b8.Translation.ZW.m128d_f64[0];
                    local_418._64_8_ = local_3b8.Scale3D.XY.m128d_f64[0];
                    local_418._72_8_ = local_3b8.Scale3D.XY.m128d_f64[1];
                    local_418._88_8_ = local_3b8.Scale3D.ZW.m128d_f64[1];
                    local_418._80_8_ = local_3b8.Scale3D.ZW.m128d_f64[0];
                    if (((local_5e8.AllocatorInstance.Data <= (FScriptContainerElement *)local_418)
                        && ((FScriptContainerElement *)local_418 <
                            local_5e8.AllocatorInstance.Data + (longlong)local_5e8.ArrayMax * 0x60))
                       && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x7a5,
                                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                             ), bVar4)) {
                      pcVar3 = (code *)swi(3);
                      pTVar11 = (TOptional<UE::Math::TTransform<double>_> *)(*pcVar3)();
                      return pTVar11;
                    }
                    iVar6 = local_5e8.ArrayNum;
                    if (local_5e8.ArrayNum == local_5e8.ArrayMax) {
                      iVar6 = UE::Core::Private::
                              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                        (0x1060,&local_5e8.AllocatorInstance,&local_5e8.ArrayMax);
                    }
                    local_5e8.ArrayNum = iVar6 + 1;
                    lVar14 = (longlong)iVar6 * 0x60;
                    *(undefined8 *)(local_5e8.AllocatorInstance.Data + lVar14) = local_418._0_8_;
                    *(undefined8 *)(local_5e8.AllocatorInstance.Data + lVar14 + 8) = local_418._8_8_
                    ;
                    *(undefined8 *)(local_5e8.AllocatorInstance.Data + lVar14 + 0x10) =
                         local_418._16_8_;
                    *(undefined8 *)(local_5e8.AllocatorInstance.Data + lVar14 + 0x10 + 8) =
                         local_418._24_8_;
                    *(undefined8 *)(local_5e8.AllocatorInstance.Data + lVar14 + 0x20) =
                         local_418._32_8_;
                    *(undefined8 *)(local_5e8.AllocatorInstance.Data + lVar14 + 0x20 + 8) =
                         local_418._40_8_;
                    *(undefined8 *)(local_5e8.AllocatorInstance.Data + lVar14 + 0x30) =
                         local_418._48_8_;
                    *(undefined8 *)(local_5e8.AllocatorInstance.Data + lVar14 + 0x30 + 8) =
                         local_418._56_8_;
                    *(undefined8 *)(local_5e8.AllocatorInstance.Data + lVar14 + 0x40) =
                         local_418._64_8_;
                    *(undefined8 *)(local_5e8.AllocatorInstance.Data + lVar14 + 0x40 + 8) =
                         local_418._72_8_;
                    *(undefined8 *)(local_5e8.AllocatorInstance.Data + lVar14 + 0x50) =
                         local_418._80_8_;
                    *(undefined8 *)(local_5e8.AllocatorInstance.Data + lVar14 + 0x50 + 8) =
                         local_418._88_8_;
                    if (((local_5f8.AllocatorInstance.Data <= (FScriptContainerElement *)local_1b8)
                        && ((FScriptContainerElement *)local_1b8 <
                            local_5f8.AllocatorInstance.Data + (longlong)local_5f8.ArrayMax * 4)) &&
                       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x7a5,
                                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                          ), bVar4)) {
                      pcVar3 = (code *)swi(3);
                      pTVar11 = (TOptional<UE::Math::TTransform<double>_> *)(*pcVar3)();
                      return pTVar11;
                    }
                    iVar6 = local_5f8.ArrayNum;
                    if (local_5f8.ArrayNum == local_5f8.ArrayMax) {
                      iVar6 = UE::Core::Private::
                              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                        (0x404,&local_5f8.AllocatorInstance,&local_5f8.ArrayMax);
                    }
                    local_5f8.ArrayNum = iVar6 + 1;
                    FVar15.Data = local_5f8.AllocatorInstance.Data;
                  }
                  else {
                    if (((local_608.AllocatorInstance.Data <=
                          (FScriptContainerElement *)(local_358 + 0x20)) &&
                        ((FScriptContainerElement *)(local_358 + 0x20) <
                         local_608.AllocatorInstance.Data + (longlong)local_608.ArrayMax * 0x60)) &&
                       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x7a5,
                                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                          ), bVar4)) {
                      pcVar3 = (code *)swi(3);
                      pTVar11 = (TOptional<UE::Math::TTransform<double>_> *)(*pcVar3)();
                      return pTVar11;
                    }
                    iVar6 = local_608.ArrayNum;
                    if (local_608.ArrayNum == local_608.ArrayMax) {
                      iVar6 = UE::Core::Private::
                              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                        (0x1060,&local_608.AllocatorInstance,&local_608.ArrayMax);
                    }
                    local_608.ArrayNum = iVar6 + 1;
                    lVar14 = (longlong)iVar6 * 0x60;
                    *(double *)(local_608.AllocatorInstance.Data + lVar14) =
                         local_338[0].Rotation.XY.m128d_f64[0];
                    *(double *)(local_608.AllocatorInstance.Data + lVar14 + 8) =
                         local_338[0].Rotation.XY.m128d_f64[1];
                    *(double *)(local_608.AllocatorInstance.Data + lVar14 + 0x10) =
                         local_338[0].Rotation.ZW.m128d_f64[0];
                    *(double *)(local_608.AllocatorInstance.Data + lVar14 + 0x10 + 8) =
                         local_338[0].Rotation.ZW.m128d_f64[1];
                    *(double *)(local_608.AllocatorInstance.Data + lVar14 + 0x20) =
                         local_338[0].Translation.XY.m128d_f64[0];
                    *(double *)(local_608.AllocatorInstance.Data + lVar14 + 0x20 + 8) =
                         local_338[0].Translation.XY.m128d_f64[1];
                    *(double *)(local_608.AllocatorInstance.Data + lVar14 + 0x30) =
                         local_338[0].Translation.ZW.m128d_f64[0];
                    *(double *)(local_608.AllocatorInstance.Data + lVar14 + 0x30 + 8) =
                         local_338[0].Translation.ZW.m128d_f64[1];
                    *(double *)(local_608.AllocatorInstance.Data + lVar14 + 0x40) =
                         local_338[0].Scale3D.XY.m128d_f64[0];
                    *(double *)(local_608.AllocatorInstance.Data + lVar14 + 0x40 + 8) =
                         local_338[0].Scale3D.XY.m128d_f64[1];
                    *(double *)(local_608.AllocatorInstance.Data + lVar14 + 0x50) =
                         local_338[0].Scale3D.ZW.m128d_f64[0];
                    *(double *)(local_608.AllocatorInstance.Data + lVar14 + 0x50 + 8) =
                         local_338[0].Scale3D.ZW.m128d_f64[1];
                    if (((local_620.AllocatorInstance.Data <= (FScriptContainerElement *)local_1b8)
                        && ((FScriptContainerElement *)local_1b8 <
                            local_620.AllocatorInstance.Data + (longlong)local_620.ArrayMax * 4)) &&
                       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x7a5,
                                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                          ), bVar4)) {
                      pcVar3 = (code *)swi(3);
                      pTVar11 = (TOptional<UE::Math::TTransform<double>_> *)(*pcVar3)();
                      return pTVar11;
                    }
                    iVar6 = local_620.ArrayNum;
                    if (local_620.ArrayNum == local_620.ArrayMax) {
                      iVar6 = UE::Core::Private::
                              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                        (0x404,&local_620.AllocatorInstance,&local_620.ArrayMax);
                    }
                    local_620.ArrayNum = iVar6 + 1;
                    FVar15.Data = local_620.AllocatorInstance.Data;
                  }
                  *(float *)(FVar15.Data + (longlong)iVar6 * 4) = local_1b8[0];
                }
                if (local_538 != (void *)0x0) {
                  FMemory::Free(local_538);
                }
                DestructItems<TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>,int>
                          (local_548,(int)local_540);
                if (local_548 !=
                    (TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>
                     *)0x0) {
                  FMemory::Free(local_548);
                }
                DestructItems<TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>,int>
                          (local_558,(int)local_550);
                if (local_558 != (TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)0x0)
                {
                  FMemory::Free(local_558);
                }
                DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>(local_568,(int)local_560)
                ;
                if (local_568 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
                  FMemory::Free(local_568);
                }
                FBoneContainer::~FBoneContainer(&local_1a8);
                if (local_5d8.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_5d8.Data);
                }
                pFVar18 = local_5b0;
                this_01 = local_5b8;
                pFVar20 = local_5c8;
                if (local_5a8.bPopped == false) {
                  if (((local_5a8.Mem)->TopMark != &local_5a8) &&
                     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Mem.TopMark == this",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                                         ,0x215,L""), bVar4)) {
                    pcVar3 = (code *)swi(3);
                    pTVar11 = (TOptional<UE::Math::TTransform<double>_> *)(*pcVar3)();
                    return pTVar11;
                  }
                  local_5a8.bPopped = true;
                  (local_5a8.Mem)->NumMarks = (local_5a8.Mem)->NumMarks + -1;
                  if (local_5a8.SavedChunk != (local_5a8.Mem)->TopChunk) {
                    FMemStackBase::FreeChunks(local_5a8.Mem,local_5a8.SavedChunk);
                  }
                  (local_5a8.Mem)->Top = local_5a8.Top;
                  (local_5a8.Mem)->TopMark = local_5a8.NextTopmostMark;
                  pFVar18 = local_5b0;
                  this_01 = local_5b8;
                  pFVar20 = local_5c8;
                }
              }
            }
          }
        }
        else {
          pFVar13 = pFVar18;
          if (*(int *)((longlong)pFVar18 + 4) < FVar16.Value) {
LAB_1468b8e9c:
            if (*(int *)((longlong)pFVar13 + 4) == *(int *)((longlong)pFVar18 + 4))
            goto LAB_1468b8ea8;
          }
          else {
            if (FVar16.Value < *(int *)((longlong)pFVar18 + 4)) {
              pFVar13 = &local_580;
            }
            if (*(FScriptContainerElement *)pFVar18 == (FScriptContainerElement)0x1)
            goto LAB_1468b8e9c;
          }
        }
LAB_1468b9668:
        this_01 = this_01 + 0x20;
        uVar12 = (ulonglong)local_5c0;
        pFVar18 = pFVar18 + 4;
      }
      BlendTheseTransformsByWeight((TTransform<double> *)local_418,&local_5e8,&local_5f8);
      if (0 < local_620.ArrayNum) {
        local_478.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_478.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
        local_478.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_478.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
        local_478.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2]
        ;
        local_478.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3]
        ;
        local_478.Translation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
        local_478.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0]
        ;
        local_478.Translation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
        local_478.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_478.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
        local_478.Scale3D.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
        local_478.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_478.Scale3D.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
        BlendTheseTransformsByWeight(&local_478,&local_608,&local_620);
        local_4a8.m128_u64[0] = ___xmm_3f8000003f8000003f8000003f800000;
        local_4a8.m128_u64[1] = _UNK_15076b1f8;
        UE::Math::TTransform<double>::BlendFromIdentityAndAccumulate
                  ((TTransform<double> *)local_418,&local_478,(ScalarRegister *)&local_4a8);
      }
      __return_storage_ptr__ = local_520;
      if ((TOptional<UE::Math::TTransform<double>_> *)local_418 != local_520) {
        (local_520->TypedValue).Rotation.XY.m128d_f64[0] = (double)local_418._0_8_;
        (local_520->TypedValue).Rotation.XY.m128d_f64[1] = (double)local_418._8_8_;
        (local_520->TypedValue).Rotation.ZW.m128d_f64[0] = (double)local_418._16_8_;
        (local_520->TypedValue).Rotation.ZW.m128d_f64[1] = (double)local_418._24_8_;
        (local_520->TypedValue).Translation.XY.m128d_f64[0] = (double)local_418._32_8_;
        (local_520->TypedValue).Translation.XY.m128d_f64[1] = (double)local_418._40_8_;
        (local_520->TypedValue).Translation.ZW.m128d_f64[0] = (double)local_418._48_8_;
        (local_520->TypedValue).Translation.ZW.m128d_f64[1] = (double)local_418._56_8_;
        (local_520->TypedValue).Scale3D.XY.m128d_f64[0] = (double)local_418._64_8_;
        (local_520->TypedValue).Scale3D.XY.m128d_f64[1] = (double)local_418._72_8_;
        (local_520->TypedValue).Scale3D.ZW.m128d_f64[0] = (double)local_418._80_8_;
        (local_520->TypedValue).Scale3D.ZW.m128d_f64[1] = (double)local_418._88_8_;
        local_520->bIsSet = true;
      }
      if (local_620.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_620.AllocatorInstance.Data);
      }
      if (local_608.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_608.AllocatorInstance.Data);
      }
      if (local_5f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_5f8.AllocatorInstance.Data);
      }
      if (local_5e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_5e8.AllocatorInstance.Data);
      }
    }
  }
  return __return_storage_ptr__;
}

// HasSection @ 1468ba810

bool __thiscall
UMovieSceneCommonAnimationTrack::HasSection
          (UMovieSceneCommonAnimationTrack *this,UMovieSceneSection *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  
  pFVar2 = (this->AnimationSections).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (longlong)(this->AnimationSections).ArrayNum * 8;
  while( true ) {
    if (pFVar2 == pFVar1) {
      return false;
    }
    if (*(UMovieSceneSection **)pFVar2 == (UMovieSceneSection *)0x0) {
      bVar3 = param_1 == (UMovieSceneSection *)0x0;
    }
    else {
      bVar3 = *(UMovieSceneSection **)pFVar2 == param_1;
    }
    if (bVar3) break;
    pFVar2 = pFVar2 + 8;
  }
  return true;
}

// IsEmpty @ 1468bc7b0

bool __thiscall UMovieSceneCommonAnimationTrack::IsEmpty(UMovieSceneCommonAnimationTrack *this)

{
  return (this->AnimationSections).ArrayNum == 0;
}

// MatchSectionByBoneTransform @ 1468bd850

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __thiscall
UMovieSceneCommonAnimationTrack::MatchSectionByBoneTransform
          (UMovieSceneCommonAnimationTrack *this,bool param_1,USkeletalMeshComponent *param_2,
          UMovieSceneSkeletalAnimationSection *param_3,FFrameTime param_4,FFrameRate param_5,
          FName *param_6,TTransform<double> *param_7,TVector<double> *param_8,TQuat<double> *param_9
          )

{
  undefined1 *puVar1;
  int iVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  uint uVar8;
  UClass *pUVar9;
  TVector<double> *pTVar10;
  TQuat<double> *pTVar11;
  TTransform<double> *pTVar12;
  TTransform<double> *this_00;
  TTransform<double> *__return_storage_ptr__;
  uint uVar13;
  ESkelAnimRotationOrder EVar14;
  UMovieSceneSkeletalAnimationSection *pUVar15;
  UMovieSceneSkeletalAnimationSection *pUVar16;
  UMovieSceneSkeletalAnimationSection *pUVar17;
  UMovieSceneSkeletalAnimationSection *pUVar18;
  UMovieSceneSkeletalAnimationSection *pUVar19;
  UMovieSceneSkeletalAnimationSection *pUVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined1 auStackY_5c8 [32];
  FIdentityFunctor local_597 [3];
  FCompactPoseBoneIndex local_594;
  FCompactPoseBoneIndex local_590 [2];
  FName *local_588;
  TTransform<double> *local_580;
  TVector<double> *local_578;
  TQuat<double> *local_570;
  TRotator<double> local_568;
  USkeletalMeshComponent *local_550;
  TRotator<double> local_548;
  TRotator<double> local_530;
  TQuat<double> local_518;
  TQuat<double> local_4f8;
  TRotator<double> local_4d8;
  TQuat<double> local_4b8;
  TQuat<double> local_498;
  double local_468;
  double local_450;
  TVector<double> local_448;
  TVector<double> local_430;
  TVector<double> local_418 [2];
  TVector<double> local_3e8 [2];
  TVector<double> local_3b8;
  TVector<double> local_3a0 [2];
  TQuat<double> local_368;
  TQuat<double> local_348;
  TTransform<double> local_328;
  TTransform<double> local_2c8;
  TTransform<double> local_268;
  TTransform<double> local_208;
  TTransform<double> local_1a8;
  TTransform<double> local_148;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_5c8;
  local_588 = param_6;
  local_580 = param_7;
  local_578 = param_8;
  local_570 = param_9;
  local_550 = param_2;
  AlgoImpl::
  IntroSortInternal<TObjectPtr<UMovieSceneSection>,int,FIdentityFunctor,TDereferenceWrapper<TObjectPtr<UMovieSceneSection>,_UMovieSceneCommonAnimationTrack::SortSections_::__l2::<lambda_1>_>_>
            ((TObjectPtr<UMovieSceneSection> *)(this->AnimationSections).AllocatorInstance.Data,
             (this->AnimationSections).ArrayNum,local_597[0],(<lambda_1> *)local_597);
  pUVar16 = (UMovieSceneSkeletalAnimationSection *)0x0;
  pUVar15 = pUVar16;
  pUVar17 = pUVar16;
  pUVar18 = pUVar16;
  pUVar19 = pUVar16;
  pUVar20 = pUVar16;
  if (0 < (this->AnimationSections).ArrayNum) {
    do {
      uVar13 = (uint)pUVar15;
      uVar8 = 0;
      if ((int)uVar13 < (this->AnimationSections).ArrayNum) {
        uVar8 = ~uVar13 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar13 = uVar13 + 1;
      pUVar20 = *(UMovieSceneSkeletalAnimationSection **)
                 ((longlong)&pUVar17->field_0x0 +
                 (longlong)(this->AnimationSections).AllocatorInstance.Data);
      pUVar18 = (UMovieSceneSkeletalAnimationSection *)0x0;
      if (pUVar20 == param_3) {
        pUVar20 = pUVar19;
        if ((int)uVar13 < (this->AnimationSections).ArrayNum) {
          uVar8 = 0;
          if ((int)uVar13 < (this->AnimationSections).ArrayNum) {
            uVar8 = ~uVar13 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pUVar18 = *(UMovieSceneSkeletalAnimationSection **)
                     ((this->AnimationSections).AllocatorInstance.Data + (longlong)(int)uVar13 * 8);
        }
        break;
      }
      pUVar15 = (UMovieSceneSkeletalAnimationSection *)(ulonglong)uVar13;
      pUVar17 = (UMovieSceneSkeletalAnimationSection *)&pUVar17->field_0x8;
      pUVar19 = pUVar20;
    } while ((int)uVar13 < (this->AnimationSections).ArrayNum);
  }
  (local_578->field0_0x0)._s_0.X = 0.0;
  (local_578->field0_0x0)._s_0.Y = 0.0;
  (local_578->field0_0x0)._s_0.Z = 0.0;
  dVar4 = UE::Math::TQuat<double>::Identity.Y;
  local_570->X = UE::Math::TQuat<double>::Identity.X;
  local_570->Y = dVar4;
  dVar4 = UE::Math::TQuat<double>::Identity.W;
  local_570->Z = UE::Math::TQuat<double>::Identity.Z;
  local_570->W = dVar4;
  *&(local_580->Rotation).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(local_580->Rotation).ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(local_580->Translation).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(local_580->Translation).ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(local_580->Scale3D).XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(local_580->Scale3D).ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  if (param_1) {
    if (pUVar20 == (UMovieSceneSkeletalAnimationSection *)0x0) {
      return;
    }
    pUVar9 = Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_NoRegister();
    iVar2 = (int)pUVar9->_padding_;
    if ((*(int *)(*(longlong *)&pUVar20->field_0x10 + 0x38) < iVar2) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar20->field_0x10 + 0x30) + (longlong)iVar2 * 8) !=
        &pUVar9->_padding_)) {
      pUVar20 = pUVar16;
    }
    pUVar15 = pUVar16;
    if (*(longlong *)&(pUVar20->Params).Animation != 0) {
      pUVar9 = Z_Construct_UClass_UAnimSequence_NoRegister();
      bVar7 = FObjectPtr::IsA((FObjectPtr *)&pUVar20->Params,pUVar9);
      if (bVar7) {
        pUVar15 = *(UMovieSceneSkeletalAnimationSection **)&(pUVar20->Params).Animation;
      }
    }
    if ((param_3->Params).Animation.field0_0x0.DebugPtr != (UAnimSequenceBase *)0x0) {
      pUVar9 = Z_Construct_UClass_UAnimSequence_NoRegister();
      bVar7 = FObjectPtr::IsA((FObjectPtr *)&param_3->Params,pUVar9);
      if (bVar7) {
        pUVar16 = (UMovieSceneSkeletalAnimationSection *)
                  (param_3->Params).Animation.field0_0x0.DebugPtr;
      }
    }
    if (pUVar15 == (UMovieSceneSkeletalAnimationSection *)0x0) {
      return;
    }
    if (pUVar16 == (UMovieSceneSkeletalAnimationSection *)0x0) {
      return;
    }
    dVar4 = UMovieSceneSkeletalAnimationSection::MapTimeToAnimation(pUVar20,param_4,param_5);
    local_594 = (FCompactPoseBoneIndex)
                UMovieSceneSkeletalAnimationSection::SetBoneIndexForRootMotionCalculations
                          (param_3,this->bBlendFirstChildOfRoot);
    GetTransformForBoneRelativeToIndex
              (&local_328,(UAnimSequence *)pUVar15,local_550,local_588,&local_594,dVar4);
    dVar4 = UMovieSceneSkeletalAnimationSection::MapTimeToAnimation(param_3,param_4,param_5);
    GetTransformForBoneRelativeToIndex
              (&local_268,(UAnimSequence *)pUVar16,local_550,local_588,&local_594,dVar4);
    if (param_3->bMatchRotationYaw == '\0') {
      EVar14 = -(uint)(param_3->bMatchRotationPitch != '\0') & YZX;
    }
    else {
      EVar14 = YXZ;
    }
    local_4b8.Z = local_268.Rotation.ZW.m128d_f64[0];
    local_4b8.W = local_268.Rotation.ZW.m128d_f64[1];
    local_468 = local_268.Translation.ZW.m128d_f64[0];
    local_4b8.X = local_268.Rotation.XY.m128d_f64[0];
    local_4b8.Y = local_268.Rotation.XY.m128d_f64[1];
    if (local_328.Rotation.ZW.m128d_f64[1] * local_268.Rotation.ZW.m128d_f64[1] +
        local_328.Rotation.ZW.m128d_f64[0] * local_268.Rotation.ZW.m128d_f64[0] +
        local_328.Rotation.XY.m128d_f64[1] * local_268.Rotation.XY.m128d_f64[1] +
        local_328.Rotation.XY.m128d_f64[0] * local_268.Rotation.XY.m128d_f64[0] < 0.0) {
      uVar21 = (undefined4)__real_bff0000000000000;
      uVar22 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
    }
    else {
      uVar21 = (undefined4)__real_3ff0000000000000;
      uVar22 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
    }
    local_518.X = local_328.Rotation.XY.m128d_f64[0] * (double)CONCAT44(uVar22,uVar21);
    local_518.Y = local_328.Rotation.XY.m128d_f64[1] * (double)CONCAT44(uVar22,uVar21);
    local_518.Z = local_328.Rotation.ZW.m128d_f64[0] * (double)CONCAT44(uVar22,uVar21);
    local_518.W = local_328.Rotation.ZW.m128d_f64[1] * (double)CONCAT44(uVar22,uVar21);
    pTVar10 = EulerFromQuat(&local_3b8,&local_518,EVar14);
    UE::Math::TRotator<double>::MakeFromEuler(&local_568,pTVar10);
    pTVar10 = EulerFromQuat(local_3a0,&local_4b8,EVar14);
    UE::Math::TRotator<double>::MakeFromEuler(&local_548,pTVar10);
    dVar4 = local_548.Pitch - (__real_4066800000000000 - local_568.Pitch);
    dVar6 = local_548.Yaw - (local_568.Yaw + __real_4066800000000000);
    dVar5 = local_548.Roll - (local_568.Roll + __real_4066800000000000);
    if ((double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar6,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
        (double)CONCAT44((uint)((ulonglong)dVar4 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar4,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
        (double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar5,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <
        (double)CONCAT44((uint)((ulonglong)(local_548.Pitch - local_568.Pitch) >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(local_548.Pitch - local_568.Pitch,0) &
                         (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
        (double)CONCAT44((uint)((ulonglong)(local_548.Yaw - local_568.Yaw) >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(local_548.Yaw - local_568.Yaw,0) &
                         (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
        (double)CONCAT44((uint)((ulonglong)(local_548.Roll - local_568.Roll) >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(local_548.Roll - local_568.Roll,0) &
                         (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
      local_568.Pitch = __real_4066800000000000 - local_568.Pitch;
      local_568.Yaw = local_568.Yaw + __real_4066800000000000;
      local_568.Roll = local_568.Roll + __real_4066800000000000;
    }
    uVar21 = SUB84(local_328.Translation.ZW.m128d_f64[0],0);
    uVar22 = (int)((ulonglong)local_328.Translation.ZW.m128d_f64[0] >> 0x20);
    if (param_3->bMatchTranslation == '\0') {
      uVar21 = SUB84(local_268.Translation.ZW.m128d_f64[0],0);
      uVar22 = (int)((ulonglong)local_268.Translation.ZW.m128d_f64[0] >> 0x20);
    }
    if (param_3->bMatchIncludeZHeight == '\0') {
      uVar21 = SUB84(local_468,0);
      uVar22 = (undefined4)((ulonglong)local_468 >> 0x20);
    }
    local_328.Translation.ZW.m128d_f64[0] = (double)CONCAT44(uVar22,uVar21);
    local_328.Translation.ZW.m128d_f64[1] = 0.0;
    if (param_3->bMatchRotationYaw == '\0') {
      local_568.Yaw = local_548.Yaw;
    }
    if (param_3->bMatchRotationPitch == '\0') {
      local_568.Pitch = local_548.Pitch;
    }
    if (param_3->bMatchRotationRoll == '\0') {
      local_568.Roll = local_548.Roll;
    }
    pTVar10 = UE::Math::TRotator<double>::Euler(&local_568,&local_448);
    pTVar11 = QuatFromEuler(&local_368,pTVar10,EVar14);
    pTVar12 = &local_328;
    __return_storage_ptr__ = &local_1a8;
    this_00 = &local_268;
    local_328.Rotation.XY.m128d_f64[0] = pTVar11->X;
    local_328.Rotation.XY.m128d_f64[1] = pTVar11->Y;
    local_328.Rotation.ZW.m128d_f64[0] = pTVar11->Z;
    local_328.Rotation.ZW.m128d_f64[1] = pTVar11->W;
  }
  else {
    if (pUVar18 == (UMovieSceneSkeletalAnimationSection *)0x0) {
      return;
    }
    pUVar9 = Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_NoRegister();
    iVar2 = (int)pUVar9->_padding_;
    if ((*(int *)(*(longlong *)&pUVar18->field_0x10 + 0x38) < iVar2) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar18->field_0x10 + 0x30) + (longlong)iVar2 * 8) !=
        &pUVar9->_padding_)) {
      pUVar18 = pUVar16;
    }
    pUVar20 = pUVar16;
    if ((param_3->Params).Animation.field0_0x0.DebugPtr != (UAnimSequenceBase *)0x0) {
      pUVar9 = Z_Construct_UClass_UAnimSequence_NoRegister();
      bVar7 = FObjectPtr::IsA((FObjectPtr *)&param_3->Params,pUVar9);
      if (bVar7) {
        pUVar20 = (UMovieSceneSkeletalAnimationSection *)
                  (param_3->Params).Animation.field0_0x0.DebugPtr;
      }
    }
    if ((pUVar18->Params).Animation.field0_0x0.DebugPtr != (UAnimSequenceBase *)0x0) {
      pUVar9 = Z_Construct_UClass_UAnimSequence_NoRegister();
      bVar7 = FObjectPtr::IsA((FObjectPtr *)&pUVar18->Params,pUVar9);
      if (bVar7) {
        pUVar16 = (UMovieSceneSkeletalAnimationSection *)
                  (((FMovieSceneSkeletalAnimationParams *)(&pUVar18->field_0xb0 + 0x68))->Animation)
                  .field0_0x0.DebugPtr;
      }
    }
    if (pUVar20 == (UMovieSceneSkeletalAnimationSection *)0x0) {
      return;
    }
    if (pUVar16 == (UMovieSceneSkeletalAnimationSection *)0x0) {
      return;
    }
    local_590[0] = (FCompactPoseBoneIndex)
                   UMovieSceneSkeletalAnimationSection::SetBoneIndexForRootMotionCalculations
                             (param_3,this->bBlendFirstChildOfRoot);
    dVar4 = UMovieSceneSkeletalAnimationSection::MapTimeToAnimation(param_3,param_4,param_5);
    GetTransformForBoneRelativeToIndex
              (&local_208,(UAnimSequence *)pUVar20,local_550,local_588,local_590,
               (double)(float)dVar4);
    dVar4 = UMovieSceneSkeletalAnimationSection::MapTimeToAnimation(pUVar18,param_4,param_5);
    GetTransformForBoneRelativeToIndex
              (&local_2c8,(UAnimSequence *)pUVar16,local_550,local_588,local_590,
               (double)(float)dVar4);
    if (param_3->bMatchRotationYaw == '\0') {
      EVar14 = -(uint)(param_3->bMatchRotationPitch != '\0') & YZX;
    }
    else {
      EVar14 = YXZ;
    }
    local_498.Z = local_208.Rotation.ZW.m128d_f64[0];
    local_498.W = local_208.Rotation.ZW.m128d_f64[1];
    local_450 = local_208.Translation.ZW.m128d_f64[0];
    local_498.X = local_208.Rotation.XY.m128d_f64[0];
    local_498.Y = local_208.Rotation.XY.m128d_f64[1];
    if (local_2c8.Rotation.ZW.m128d_f64[1] * local_208.Rotation.ZW.m128d_f64[1] +
        local_2c8.Rotation.ZW.m128d_f64[0] * local_208.Rotation.ZW.m128d_f64[0] +
        local_2c8.Rotation.XY.m128d_f64[1] * local_208.Rotation.XY.m128d_f64[1] +
        local_2c8.Rotation.XY.m128d_f64[0] * local_208.Rotation.XY.m128d_f64[0] < 0.0) {
      uVar21 = (undefined4)__real_bff0000000000000;
      uVar22 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
    }
    else {
      uVar21 = (undefined4)__real_3ff0000000000000;
      uVar22 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
    }
    local_4f8.X = local_2c8.Rotation.XY.m128d_f64[0] * (double)CONCAT44(uVar22,uVar21);
    local_4f8.Y = local_2c8.Rotation.XY.m128d_f64[1] * (double)CONCAT44(uVar22,uVar21);
    local_4f8.Z = local_2c8.Rotation.ZW.m128d_f64[0] * (double)CONCAT44(uVar22,uVar21);
    local_4f8.W = local_2c8.Rotation.ZW.m128d_f64[1] * (double)CONCAT44(uVar22,uVar21);
    pTVar10 = EulerFromQuat(&local_430,&local_498,EVar14);
    UE::Math::TRotator<double>::MakeFromEuler(&local_4d8,pTVar10);
    pTVar10 = EulerFromQuat(local_418,&local_4f8,EVar14);
    UE::Math::TRotator<double>::MakeFromEuler(&local_530,pTVar10);
    UE::Math::TRotator<double>::SetClosestToMe(&local_4d8,&local_530);
    uVar21 = SUB84(local_2c8.Translation.ZW.m128d_f64[0],0);
    uVar22 = (int)((ulonglong)local_2c8.Translation.ZW.m128d_f64[0] >> 0x20);
    if (param_3->bMatchTranslation == '\0') {
      uVar21 = SUB84(local_208.Translation.ZW.m128d_f64[0],0);
      uVar22 = (int)((ulonglong)local_208.Translation.ZW.m128d_f64[0] >> 0x20);
    }
    if (param_3->bMatchIncludeZHeight == '\0') {
      uVar21 = SUB84(local_450,0);
      uVar22 = (undefined4)((ulonglong)local_450 >> 0x20);
    }
    local_2c8.Translation.ZW.m128d_f64[0] = (double)CONCAT44(uVar22,uVar21);
    local_2c8.Translation.ZW.m128d_f64[1] = 0.0;
    if (param_3->bMatchRotationYaw == '\0') {
      local_530.Yaw = local_4d8.Yaw;
    }
    if (param_3->bMatchRotationPitch == '\0') {
      local_530.Pitch = local_4d8.Pitch;
    }
    if (param_3->bMatchRotationRoll == '\0') {
      local_530.Roll = local_4d8.Roll;
    }
    pTVar10 = UE::Math::TRotator<double>::Euler(&local_530,local_3e8);
    pTVar11 = QuatFromEuler(&local_348,pTVar10,EVar14);
    pTVar12 = &local_2c8;
    __return_storage_ptr__ = &local_148;
    this_00 = &local_208;
    local_2c8.Rotation.XY.m128d_f64[0] = pTVar11->X;
    local_2c8.Rotation.XY.m128d_f64[1] = pTVar11->Y;
    local_2c8.Rotation.ZW.m128d_f64[0] = pTVar11->Z;
    local_2c8.Rotation.ZW.m128d_f64[1] = pTVar11->W;
  }
  pTVar12 = UE::Math::TTransform<double>::GetRelativeTransformReverse
                      (this_00,__return_storage_ptr__,pTVar12);
  dVar4 = (pTVar12->Rotation).XY.m128d_f64[1];
  (local_580->Rotation).XY.m128d_f64[0] = (pTVar12->Rotation).XY.m128d_f64[0];
  (local_580->Rotation).XY.m128d_f64[1] = dVar4;
  dVar4 = (pTVar12->Rotation).ZW.m128d_f64[1];
  (local_580->Rotation).ZW.m128d_f64[0] = (pTVar12->Rotation).ZW.m128d_f64[0];
  (local_580->Rotation).ZW.m128d_f64[1] = dVar4;
  dVar4 = (pTVar12->Translation).XY.m128d_f64[1];
  (local_580->Translation).XY.m128d_f64[0] = (pTVar12->Translation).XY.m128d_f64[0];
  (local_580->Translation).XY.m128d_f64[1] = dVar4;
  dVar4 = (pTVar12->Translation).ZW.m128d_f64[1];
  (local_580->Translation).ZW.m128d_f64[0] = (pTVar12->Translation).ZW.m128d_f64[0];
  (local_580->Translation).ZW.m128d_f64[1] = dVar4;
  dVar4 = (pTVar12->Scale3D).XY.m128d_f64[1];
  (local_580->Scale3D).XY.m128d_f64[0] = (pTVar12->Scale3D).XY.m128d_f64[0];
  (local_580->Scale3D).XY.m128d_f64[1] = dVar4;
  dVar4 = (pTVar12->Scale3D).ZW.m128d_f64[1];
  (local_580->Scale3D).ZW.m128d_f64[0] = (pTVar12->Scale3D).ZW.m128d_f64[0];
  (local_580->Scale3D).ZW.m128d_f64[1] = dVar4;
  dVar5 = (local_580->Translation).XY.m128d_f64[1];
  dVar4 = (local_580->Translation).ZW.m128d_f64[0];
  (local_578->field0_0x0)._s_0.X = (local_580->Translation).XY.m128d_f64[0];
  (local_578->field0_0x0)._s_0.Y = dVar5;
  (local_578->field0_0x0)._s_0.Z = dVar4;
  dVar4 = (local_580->Rotation).XY.m128d_f64[1];
  dVar5 = (local_580->Rotation).ZW.m128d_f64[0];
  dVar6 = (local_580->Rotation).ZW.m128d_f64[1];
  local_570->X = (local_580->Rotation).XY.m128d_f64[0];
  local_570->Y = dVar4;
  local_570->Z = dVar5;
  local_570->W = dVar6;
  return;
}

// RemoveAllAnimationData @ 1468c8e80

void __thiscall
UMovieSceneCommonAnimationTrack::RemoveAllAnimationData(UMovieSceneCommonAnimationTrack *this)

{
  int *piVar1;
  
  piVar1 = &(this->AnimationSections).ArrayMax;
  (this->AnimationSections).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->AnimationSections).AllocatorInstance,0,piVar1);
  }
  return;
}

// RemoveSection @ 1468c9c30

void __thiscall
UMovieSceneCommonAnimationTrack::RemoveSection
          (UMovieSceneCommonAnimationTrack *this,UMovieSceneSection *param_1)

{
  TObjectPtr<UMovieSceneSection>_u_0 local_res8;
  
  local_res8.DebugPtr = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UMovieSceneSection *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  TArray<TObjectPtr<UMovieSceneSection>,TSizedDefaultAllocator<32>_>::Remove
            ((TArray<TObjectPtr<UMovieSceneSection>,TSizedDefaultAllocator<32>_> *)&this->field_0xa8
             ,(TObjectPtr<UMovieSceneSection> *)&local_res8.ObjectPtr);
  SetUpRootMotions((UMovieSceneCommonAnimationTrack *)
                   &this[-1].RootMotionParams.RootMotionStartOffset,true);
  return;
}

// RemoveSectionAt @ 1468ca550

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UMovieSceneCommonAnimationTrack::RemoveSectionAt(UMovieSceneCommonAnimationTrack *this,int param_1)

{
  TArray<TObjectPtr<UMovieSceneSection>,TSizedDefaultAllocator<32>_>::RemoveAt
            ((TArray<TObjectPtr<UMovieSceneSection>,TSizedDefaultAllocator<32>_> *)&this->field_0xa8
             ,param_1,Default);
  SetUpRootMotions((UMovieSceneCommonAnimationTrack *)
                   &this[-1].RootMotionParams.RootMotionStartOffset,true);
  return;
}

// SetRootMotionsDirty @ 1468cecc0

void __thiscall
UMovieSceneCommonAnimationTrack::SetRootMotionsDirty(UMovieSceneCommonAnimationTrack *this)

{
  (this->RootMotionParams).bRootMotionsDirty = true;
  return;
}

// SetUpRootMotions @ 1468cee70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UMovieSceneCommonAnimationTrack::SetUpRootMotions
          (UMovieSceneCommonAnimationTrack *this,bool param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  UMovieSceneSkeletalAnimationSection *pUVar3;
  FName FVar4;
  UAnimSequenceBase *pUVar5;
  UObject *pUVar6;
  code *pcVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  FFrameTime FVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  uint uVar22;
  uint uVar23;
  uint uVar24;
  FScriptContainerElement *pFVar25;
  int iVar26;
  bool bVar27;
  char cVar28;
  bool bVar29;
  int iVar30;
  uint uVar31;
  UClass *pUVar32;
  TTransform<double> *pTVar33;
  uint *puVar34;
  FTlsAutoCleanup *pFVar35;
  uint uVar36;
  undefined8 uVar37;
  ulonglong uVar38;
  uint uVar39;
  UMovieSceneSkeletalAnimationSection *this_00;
  FScriptContainerElement *pFVar40;
  ulonglong uVar41;
  ulonglong uVar42;
  ulonglong uVar43;
  ulonglong uVar44;
  double dVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  __m128d _Var59;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined4 uVar77;
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  double dVar78;
  double dVar81;
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  double dVar82;
  double dVar85;
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar86 [16];
  double dVar87;
  undefined1 auStackY_718 [32];
  undefined1 local_6c8;
  FIdentityFunctor local_6c7 [7];
  UMovieSceneSkeletalAnimationSection *local_6c0;
  ForAnyElementType local_6b8;
  undefined8 local_6b0;
  undefined1 local_6a8 [8];
  ForAnyElementType local_6a0;
  int local_698 [4];
  int local_688;
  undefined4 uStack_684;
  FMemMark local_680;
  FFrameNumber local_658;
  float fStack_654;
  TArray<int,TSizedDefaultAllocator<32>_> *local_648;
  undefined8 local_640;
  TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *local_638;
  undefined8 local_630;
  TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_> *local_628
  ;
  undefined8 local_620;
  void *local_618;
  undefined8 local_610;
  int local_608;
  UObject *local_600;
  FScriptContainerElement *local_5f8;
  undefined8 local_5f0;
  undefined8 local_5e8;
  FCurveFilterSettings local_5e0;
  FBaseCompactPose<TMemStackAllocator<0>_> local_5d0;
  FBlendedCurve local_5b8;
  code *local_598;
  undefined1 *local_590;
  TArrayView<unsigned_short_const_,int> local_588;
  double local_578;
  double local_570;
  char local_568;
  undefined1 uStack_567;
  undefined1 uStack_566;
  undefined1 uStack_565;
  int iStack_564;
  undefined1 uStack_560;
  undefined1 uStack_55f;
  undefined1 uStack_55e;
  undefined1 uStack_55d;
  undefined1 uStack_55c;
  undefined1 uStack_55b;
  undefined1 uStack_55a;
  undefined1 uStack_559;
  FAnimationPoseData local_558;
  TTransform<double> local_538;
  TTransform<double> local_4d8;
  FRootMotionTransformParam local_478;
  FBoneContainer local_2c8;
  TTransform<double> local_168;
  TTransform<double> local_108;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_718;
  pUVar32 = Z_Construct_UClass_UMovieScene_NoRegister();
  local_600 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar32);
  if ((local_600 != (UObject *)0x0) &&
     ((param_1 || ((this->RootMotionParams).bRootMotionsDirty != false)))) {
    (this->RootMotionParams).bRootMotionsDirty = false;
    (this->RootMotionParams).bHaveRootMotion = false;
    uVar37 = *(undefined8 *)(local_600 + 8);
    local_688 = 0x3c;
    uStack_684 = 1;
    fStack_654 = 0.0;
    if ((double)(int)uVar37 / (double)(int)((ulonglong)uVar37 >> 0x20) < __real_404e000000000000) {
      uVar37 = 0x10000003c;
    }
    dVar82 = (double)(int)*(undefined8 *)&local_600[7].field_0x20 /
             (double)(int)((ulonglong)*(undefined8 *)&local_600[7].field_0x20 >> 0x20);
    auVar72._8_8_ = 0;
    auVar72._0_8_ = dVar82;
    auVar72 = roundpd(in_XMM2,auVar72,1);
    dVar87 = (double)(int)uVar37 / (double)(int)((ulonglong)uVar37 >> 0x20);
    dVar45 = dVar82 - auVar72._0_8_;
    auVar73._0_8_ = (double)(int)dVar45 + dVar82;
    auVar73._8_8_ = 0;
    auVar73 = roundpd(auVar72,auVar73,1);
    dVar82 = auVar73._0_8_;
    if (__real_41dfffffffc00000 <= auVar73._0_8_) {
      dVar82 = __real_41dfffffffc00000;
    }
    auVar46._8_8_ = 0;
    auVar46._0_8_ = dVar87;
    auVar73 = roundpd(ZEXT416((uint)(float)dVar45),auVar46,1);
    dVar45 = dVar87 - auVar73._0_8_;
    if (dVar82 <= __real_c1e0000000000000) {
      dVar82 = __real_c1e0000000000000;
    }
    auVar47._0_8_ = (double)(int)dVar45 + dVar87;
    auVar47._8_8_ = 0;
    auVar73 = roundpd(ZEXT416((uint)(float)dVar45),auVar47,1);
    dVar45 = auVar73._0_8_;
    if (__real_41dfffffffc00000 <= auVar73._0_8_) {
      dVar45 = __real_41dfffffffc00000;
    }
    if (dVar45 <= __real_c1e0000000000000) {
      dVar45 = __real_c1e0000000000000;
    }
    local_658.Value = (int)dVar82 / (int)dVar45;
    if (local_658.Value < 1) {
      local_658.Value = 1;
    }
    if (((this->AnimationSections).ArrayNum != 0) && (local_658.Value != 0)) {
      AlgoImpl::
      IntroSortInternal<TObjectPtr<UMovieSceneSection>,int,FIdentityFunctor,TDereferenceWrapper<TObjectPtr<UMovieSceneSection>,_UMovieSceneCommonAnimationTrack::SortSections_::__l2::<lambda_1>_>_>
                ((TObjectPtr<UMovieSceneSection> *)(this->AnimationSections).AllocatorInstance.Data,
                 (this->AnimationSections).ArrayNum,local_6c7[0],(<lambda_1> *)local_6c7);
      dVar82 = __real_3f1a36e2e0000000;
      uVar24 = _UNK_15061cc8c;
      uVar23 = _UNK_15061cc88;
      uVar22 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      uVar31 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      local_698[2] = (this->AnimationSections).ArrayNum;
      uVar38 = (ulonglong)local_698[2];
      bVar29 = false;
      pFVar40 = (this->AnimationSections).AllocatorInstance.Data;
      local_5f8 = pFVar40 + uVar38 * 8;
      local_4d8.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64
      ;
      local_4d8.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64
      ;
      local_4d8.Translation.XY.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
      local_4d8.Translation.ZW.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
      local_4d8.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
      local_4d8.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
      local_6b8.Data = (FScriptContainerElement *)0x0;
      local_6b0 = 0;
      this_00 = (UMovieSceneSkeletalAnimationSection *)0x0;
      _Var59 = UE::Math::TTransform<double>::Identity.Scale3D.ZW;
      while( true ) {
        pFVar25 = local_5f8;
        uVar39 = 0;
        if ((this->AnimationSections).ArrayNum != (int)uVar38) {
          local_6c8 = 0;
          `TCheckedPointerIterator<TObjectPtr<UMovieSceneSection>,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_6c8);
        }
        if (pFVar40 == pFVar25) break;
        pUVar3 = *(UMovieSceneSkeletalAnimationSection **)pFVar40;
        if (pUVar3 == (UMovieSceneSkeletalAnimationSection *)0x0) {
LAB_1468cfb3b:
          uVar38 = (ulonglong)(uint)local_698[2];
          pFVar40 = pFVar40 + 8;
          local_6c0 = (UMovieSceneSkeletalAnimationSection *)0x0;
        }
        else {
          pUVar32 = Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_NoRegister();
          iVar30 = (int)pUVar32->_padding_;
          if ((*(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38) < iVar30) ||
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar30 * 8) !=
              &pUVar32->_padding_)) goto LAB_1468cfb3b;
          FVar4 = pUVar3->MatchedBoneName;
          local_6c0 = pUVar3;
          if ((local_6b8.Data <= (FScriptContainerElement *)&local_6c0) &&
             (((FScriptContainerElement *)&local_6c0 <
               local_6b8.Data + (longlong)local_6b0._4_4_ * 8 &&
              (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar27)))) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar30 = (int)local_6b0;
          if ((int)local_6b0 == local_6b0._4_4_) {
            iVar30 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&local_6b8,(int *)((longlong)&local_6b0 + 4));
          }
          pUVar3 = local_6c0;
          local_6b0 = CONCAT44(local_6b0._4_4_,iVar30 + 1);
          *(UMovieSceneSkeletalAnimationSection **)(local_6b8.Data + (longlong)iVar30 * 8) =
               local_6c0;
          uVar37 = *(undefined8 *)&(local_6c0->StartLocationOffset).field0_0x0;
          if (((dVar82 < (double)CONCAT44((uint)((ulonglong)uVar37 >> 0x20) & uVar22,
                                          (uint)uVar37 & uVar31)) ||
              (uVar37 = *(undefined8 *)((longlong)&(local_6c0->StartLocationOffset).field0_0x0 + 8),
              dVar82 < (double)CONCAT44((uint)((ulonglong)uVar37 >> 0x20) & uVar22,
                                        (uint)uVar37 & uVar31))) ||
             (uVar37 = *(undefined8 *)
                        ((longlong)&(local_6c0->StartLocationOffset).field0_0x0 + 0x10),
             dVar82 < (double)CONCAT44((uint)((ulonglong)uVar37 >> 0x20) & uVar22,
                                       (uint)uVar37 & uVar31))) {
LAB_1468cf47b:
            bVar29 = true;
          }
          else {
            auVar1._0_8_ = (local_6c0->StartRotationOffset).Pitch;
            auVar1._8_8_ = (local_6c0->StartRotationOffset).Yaw;
            dVar45 = (local_6c0->StartRotationOffset).Roll;
            auVar73 = divpd(auVar1,(undefined1  [16])GlobalVectorConstants::Double360.XY.m128d_f64);
            local_578 = dVar82;
            auVar73 = roundpd((undefined1  [16])_Var59.m128d_f64,auVar73,3);
            dVar87 = GlobalVectorConstants::Double360.XY.m128d_f64[0];
            auVar60._0_8_ = auVar73._0_8_ * dVar87;
            dVar11 = GlobalVectorConstants::Double360.XY.m128d_f64[1];
            auVar60._8_8_ = auVar73._8_8_ * dVar11;
            auVar48._8_8_ = 0;
            auVar48._0_8_ = dVar45;
            dVar78 = (double)auVar1._0_8_ - auVar60._0_8_;
            dVar81 = (double)auVar1._8_8_ - auVar60._8_8_;
            auVar73 = divpd(auVar48,(undefined1  [16])GlobalVectorConstants::Double360.ZW.m128d_f64)
            ;
            auVar73 = roundpd(auVar60,auVar73,3);
            dVar12 = GlobalVectorConstants::Double360.ZW.m128d_f64[0];
            dVar13 = GlobalVectorConstants::Double360.ZW.m128d_f64[1];
            auVar49._8_4_ = SUB84(dVar81,0);
            auVar49._0_8_ = dVar78;
            auVar49._12_4_ = (int)((ulonglong)dVar81 >> 0x20);
            dVar45 = dVar45 - auVar73._0_8_ * dVar12;
            dVar85 = 0.0 - auVar73._8_8_ * dVar13;
            uVar38 = -(ulonglong)(0.0 <= dVar78);
            uVar42 = -(ulonglong)(0.0 <= dVar81);
            auVar61._0_8_ = uVar38 & (ulonglong)dVar78;
            auVar61._8_4_ = (undefined4)(uVar42 & (ulonglong)dVar81);
            auVar61._12_4_ = (undefined4)((uVar42 & (ulonglong)dVar81) >> 0x20);
            dVar81 = auVar49._8_8_ + dVar11;
            uVar41 = -(ulonglong)(0.0 <= dVar45);
            uVar43 = -(ulonglong)(0.0 <= dVar85);
            auVar86._0_4_ = ~(uint)uVar38 & SUB84(dVar78 + dVar87,0);
            auVar86._4_4_ = ~(uint)(uVar38 >> 0x20) & (uint)((ulonglong)(dVar78 + dVar87) >> 0x20);
            auVar86._8_4_ = ~(uint)uVar42 & SUB84(dVar81,0);
            auVar86._12_4_ = ~(uint)(uVar42 >> 0x20) & (uint)((ulonglong)dVar81 >> 0x20);
            auVar86 = auVar86 | auVar61;
            auVar74._0_8_ = uVar41 & (ulonglong)dVar45;
            auVar74._8_4_ = (undefined4)(uVar43 & (ulonglong)dVar85);
            auVar74._12_4_ = (undefined4)((uVar43 & (ulonglong)dVar85) >> 0x20);
            auVar50._8_4_ = SUB84(dVar85,0);
            auVar50._0_8_ = dVar45;
            auVar50._12_4_ = (int)((ulonglong)dVar85 >> 0x20);
            dVar81 = auVar50._8_8_ + dVar13;
            uVar42 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[0] < auVar86._0_8_);
            uVar44 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[1] < auVar86._8_8_);
            auVar79._0_4_ = ~(uint)uVar41 & SUB84(dVar45 + dVar12,0);
            auVar79._4_4_ = ~(uint)(uVar41 >> 0x20) & (uint)((ulonglong)(dVar45 + dVar12) >> 0x20);
            auVar79._8_4_ = ~(uint)uVar43 & SUB84(dVar81,0);
            auVar79._12_4_ = ~(uint)(uVar43 >> 0x20) & (uint)((ulonglong)dVar81 >> 0x20);
            auVar79 = auVar79 | auVar74;
            uVar41 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[0] < auVar79._0_8_);
            uVar43 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[1] < auVar79._8_8_);
            auVar62._0_8_ = uVar41 & (ulonglong)(auVar79._0_8_ - dVar12);
            uVar38 = uVar43 & (ulonglong)(auVar79._8_8_ - dVar13);
            auVar62._8_4_ = (undefined4)uVar38;
            auVar62._12_4_ = (undefined4)(uVar38 >> 0x20);
            auVar51._0_4_ = ~(uint)uVar41 & auVar79._0_4_;
            auVar51._4_4_ = ~(uint)(uVar41 >> 0x20) & auVar79._4_4_;
            auVar51._8_4_ = ~(uint)uVar43 & auVar79._8_4_;
            auVar51._12_4_ = ~(uint)(uVar43 >> 0x20) & auVar79._12_4_;
            auVar62 = auVar62 | auVar51;
            auVar52._8_4_ = SUB84(dVar82,0);
            auVar52._0_8_ = dVar82;
            uVar77 = (undefined4)((ulonglong)dVar82 >> 0x20);
            auVar52._12_4_ = uVar77;
            auVar63._0_8_ = (double)CONCAT44(auVar62._4_4_ & uVar22,auVar62._0_4_ & uVar31);
            auVar63._8_4_ = auVar62._8_4_ & uVar23;
            auVar63._12_4_ = auVar62._12_4_ & uVar24;
            auVar53._8_8_ = -(ulonglong)(auVar52._8_8_ < auVar63._8_8_);
            auVar53._0_8_ = -(ulonglong)(dVar82 < auVar63._0_8_);
            uVar36 = movmskpd(iVar30,auVar53);
            auVar64._0_8_ = (ulonglong)(auVar86._0_8_ - dVar87) & uVar42;
            uVar38 = uVar44 & (ulonglong)(auVar86._8_8_ - dVar11);
            auVar64._8_4_ = (undefined4)uVar38;
            auVar64._12_4_ = (undefined4)(uVar38 >> 0x20);
            auVar83._0_4_ = ~(uint)uVar42 & auVar86._0_4_;
            auVar83._4_4_ = ~(uint)(uVar42 >> 0x20) & auVar86._4_4_;
            auVar83._8_4_ = ~(uint)uVar44 & auVar86._8_4_;
            auVar83._12_4_ = ~(uint)(uVar44 >> 0x20) & auVar86._12_4_;
            auVar64 = auVar64 | auVar83;
            auVar65._0_8_ = (double)CONCAT44(auVar64._4_4_ & uVar22,auVar64._0_4_ & uVar31);
            auVar65._8_4_ = auVar64._8_4_ & uVar23;
            auVar65._12_4_ = auVar64._12_4_ & uVar24;
            auVar75._8_8_ = -(ulonglong)(dVar82 < auVar65._8_8_);
            auVar75._0_8_ = -(ulonglong)(dVar82 < auVar65._0_8_);
            iVar30 = movmskpd((int)local_6c0,auVar75);
            if ((((uVar36 & 0x3fffffff) != 0 || iVar30 != 0) ||
                (uVar37 = *(undefined8 *)&(local_6c0->MatchedLocationOffset).field0_0x0,
                dVar82 < (double)CONCAT44((uint)((ulonglong)uVar37 >> 0x20) & uVar22,
                                          (uint)uVar37 & uVar31))) ||
               ((uVar37 = *(undefined8 *)
                           ((longlong)&(local_6c0->MatchedLocationOffset).field0_0x0 + 8),
                dVar82 < (double)CONCAT44((uint)((ulonglong)uVar37 >> 0x20) & uVar22,
                                          (uint)uVar37 & uVar31) ||
                (uVar37 = *(undefined8 *)
                           ((longlong)&(local_6c0->MatchedLocationOffset).field0_0x0 + 0x10),
                dVar82 < (double)CONCAT44((uint)((ulonglong)uVar37 >> 0x20) & uVar22,
                                          (uint)uVar37 & uVar31))))) goto LAB_1468cf47b;
            auVar2._0_8_ = (local_6c0->MatchedRotationOffset).Pitch;
            auVar2._8_8_ = (local_6c0->MatchedRotationOffset).Yaw;
            dVar45 = (local_6c0->MatchedRotationOffset).Roll;
            local_570 = dVar82;
            auVar73 = divpd(auVar2,(undefined1  [16])GlobalVectorConstants::Double360.XY.m128d_f64);
            auVar73 = roundpd(auVar65,auVar73,3);
            auVar66._0_8_ = auVar73._0_8_ * dVar87;
            auVar66._8_8_ = auVar73._8_8_ * dVar11;
            auVar54._8_8_ = 0;
            auVar54._0_8_ = dVar45;
            dVar78 = (double)auVar2._0_8_ - auVar66._0_8_;
            dVar81 = (double)auVar2._8_8_ - auVar66._8_8_;
            auVar73 = divpd(auVar54,(undefined1  [16])GlobalVectorConstants::Double360.ZW.m128d_f64)
            ;
            auVar73 = roundpd(auVar66,auVar73,3);
            auVar55._8_4_ = SUB84(dVar81,0);
            auVar55._0_8_ = dVar78;
            auVar55._12_4_ = (int)((ulonglong)dVar81 >> 0x20);
            dVar45 = dVar45 - auVar73._0_8_ * dVar12;
            dVar85 = 0.0 - auVar73._8_8_ * dVar13;
            uVar38 = -(ulonglong)(0.0 <= dVar78);
            uVar42 = -(ulonglong)(0.0 <= dVar81);
            auVar67._0_8_ = uVar38 & (ulonglong)dVar78;
            auVar67._8_4_ = (undefined4)(uVar42 & (ulonglong)dVar81);
            auVar67._12_4_ = (undefined4)((uVar42 & (ulonglong)dVar81) >> 0x20);
            dVar81 = auVar55._8_8_ + dVar11;
            uVar41 = -(ulonglong)(0.0 <= dVar45);
            uVar43 = -(ulonglong)(0.0 <= dVar85);
            auVar84._0_4_ = ~(uint)uVar38 & SUB84(dVar78 + dVar87,0);
            auVar84._4_4_ = ~(uint)(uVar38 >> 0x20) & (uint)((ulonglong)(dVar78 + dVar87) >> 0x20);
            auVar84._8_4_ = ~(uint)uVar42 & SUB84(dVar81,0);
            auVar84._12_4_ = ~(uint)(uVar42 >> 0x20) & (uint)((ulonglong)dVar81 >> 0x20);
            auVar84 = auVar84 | auVar67;
            auVar56._8_4_ = SUB84(dVar85,0);
            auVar56._0_8_ = dVar45;
            auVar56._12_4_ = (int)((ulonglong)dVar85 >> 0x20);
            dVar81 = auVar56._8_8_ + dVar13;
            uVar42 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[0] < auVar84._0_8_);
            uVar44 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[1] < auVar84._8_8_);
            auVar80._0_4_ = ~(uint)uVar41 & SUB84(dVar45 + dVar12,0);
            auVar80._4_4_ = ~(uint)(uVar41 >> 0x20) & (uint)((ulonglong)(dVar45 + dVar12) >> 0x20);
            auVar80._8_4_ = ~(uint)uVar43 & SUB84(dVar81,0);
            auVar80._12_4_ = ~(uint)(uVar43 >> 0x20) & (uint)((ulonglong)dVar81 >> 0x20);
            auVar8._8_4_ = (int)(uVar43 & (ulonglong)dVar85);
            auVar8._0_8_ = uVar41 & (ulonglong)dVar45;
            auVar8._12_4_ = (int)((uVar43 & (ulonglong)dVar85) >> 0x20);
            auVar80 = auVar80 | auVar8;
            uVar41 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[0] < auVar80._0_8_);
            uVar43 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[1] < auVar80._8_8_);
            auVar57._8_4_ = SUB84(dVar82,0);
            auVar57._0_8_ = dVar82;
            auVar57._12_4_ = uVar77;
            auVar68._0_8_ = uVar41 & (ulonglong)(auVar80._0_8_ - dVar12);
            uVar38 = uVar43 & (ulonglong)(auVar80._8_8_ - dVar13);
            auVar68._8_4_ = (undefined4)uVar38;
            auVar68._12_4_ = (undefined4)(uVar38 >> 0x20);
            auVar10._4_4_ = ~(uint)(uVar41 >> 0x20) & auVar80._4_4_;
            auVar10._0_4_ = ~(uint)uVar41 & auVar80._0_4_;
            auVar10._8_4_ = ~(uint)uVar43 & auVar80._8_4_;
            auVar10._12_4_ = ~(uint)(uVar43 >> 0x20) & auVar80._12_4_;
            auVar68 = auVar68 | auVar10;
            auVar69._0_8_ = (double)CONCAT44(auVar68._4_4_ & uVar22,auVar68._0_4_ & uVar31);
            auVar69._8_4_ = auVar68._8_4_ & uVar23;
            auVar69._12_4_ = auVar68._12_4_ & uVar24;
            auVar58._8_8_ = -(ulonglong)(auVar57._8_8_ < auVar69._8_8_);
            auVar58._0_8_ = -(ulonglong)(dVar82 < auVar69._0_8_);
            uVar36 = movmskpd(0,auVar58);
            auVar70._0_8_ = uVar42 & (ulonglong)(auVar84._0_8_ - dVar87);
            uVar38 = uVar44 & (ulonglong)(auVar84._8_8_ - dVar11);
            auVar70._8_4_ = (undefined4)uVar38;
            auVar70._12_4_ = (undefined4)(uVar38 >> 0x20);
            auVar9._4_4_ = ~(uint)(uVar42 >> 0x20) & auVar84._4_4_;
            auVar9._0_4_ = ~(uint)uVar42 & auVar84._0_4_;
            auVar9._8_4_ = ~(uint)uVar44 & auVar84._8_4_;
            auVar9._12_4_ = ~(uint)(uVar44 >> 0x20) & auVar84._12_4_;
            auVar70 = auVar70 | auVar9;
            auVar71._0_8_ = (double)CONCAT44(auVar70._4_4_ & uVar22,auVar70._0_4_ & uVar31);
            auVar71._8_4_ = auVar70._8_4_ & uVar23;
            auVar71._12_4_ = auVar70._12_4_ & uVar24;
            auVar76._8_8_ = -(ulonglong)(dVar82 < auVar71._8_8_);
            auVar76._0_8_ = -(ulonglong)(dVar82 < auVar71._0_8_);
            iVar30 = movmskpd(iVar30,auVar76);
            if ((uVar36 & 0x3fffffff) != 0 || iVar30 != 0) goto LAB_1468cf47b;
          }
          if ((this_00 == (UMovieSceneSkeletalAnimationSection *)0x0) || (FVar4 == (FName)0x0)) {
            *&(local_6c0->PreviousTransform).Rotation.XY.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
            *&(local_6c0->PreviousTransform).Rotation.ZW.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
            *&(local_6c0->PreviousTransform).Translation.XY.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
            *&(local_6c0->PreviousTransform).Translation.ZW.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
            *&(local_6c0->PreviousTransform).Scale3D.XY.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
            _Var59 = UE::Math::TTransform<double>::Identity.Scale3D.ZW;
            *&(local_6c0->PreviousTransform).Scale3D.ZW.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
            UMovieSceneSkeletalAnimationSection::SetBoneIndexForRootMotionCalculations
                      (local_6c0,this->bBlendFirstChildOfRoot);
            uVar38 = (ulonglong)(uint)local_698[2];
            pFVar40 = pFVar40 + 8;
            this_00 = pUVar3;
          }
          else {
            pUVar5 = (this_00->Params).Animation.field0_0x0.DebugPtr;
            if ((pUVar5 == (UAnimSequenceBase *)0x0) || (!bVar29)) {
              *&(local_6c0->PreviousTransform).Rotation.XY.m128d_f64 =
                   UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
              *&(local_6c0->PreviousTransform).Rotation.ZW.m128d_f64 =
                   UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
              *&(local_6c0->PreviousTransform).Translation.XY.m128d_f64 =
                   UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
              *&(local_6c0->PreviousTransform).Translation.ZW.m128d_f64 =
                   UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
              *&(local_6c0->PreviousTransform).Scale3D.XY.m128d_f64 =
                   UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
              *&(local_6c0->PreviousTransform).Scale3D.ZW.m128d_f64 =
                   UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
            }
            else {
              pTVar33 = UMovieSceneSkeletalAnimationSection::GetRootMotionStartOffset
                                  (local_6c0,&local_168);
              dVar45 = (pTVar33->Rotation).XY.m128d_f64[1];
              (this->RootMotionParams).RootMotionStartOffset.Rotation.XY.m128d_f64[0] =
                   (pTVar33->Rotation).XY.m128d_f64[0];
              (this->RootMotionParams).RootMotionStartOffset.Rotation.XY.m128d_f64[1] = dVar45;
              dVar45 = (pTVar33->Rotation).ZW.m128d_f64[1];
              (this->RootMotionParams).RootMotionStartOffset.Rotation.ZW.m128d_f64[0] =
                   (pTVar33->Rotation).ZW.m128d_f64[0];
              (this->RootMotionParams).RootMotionStartOffset.Rotation.ZW.m128d_f64[1] = dVar45;
              dVar45 = (pTVar33->Translation).XY.m128d_f64[1];
              (this->RootMotionParams).RootMotionStartOffset.Translation.XY.m128d_f64[0] =
                   (pTVar33->Translation).XY.m128d_f64[0];
              (this->RootMotionParams).RootMotionStartOffset.Translation.XY.m128d_f64[1] = dVar45;
              dVar45 = (pTVar33->Translation).ZW.m128d_f64[1];
              (this->RootMotionParams).RootMotionStartOffset.Translation.ZW.m128d_f64[0] =
                   (pTVar33->Translation).ZW.m128d_f64[0];
              (this->RootMotionParams).RootMotionStartOffset.Translation.ZW.m128d_f64[1] = dVar45;
              dVar45 = (pTVar33->Scale3D).XY.m128d_f64[1];
              (this->RootMotionParams).RootMotionStartOffset.Scale3D.XY.m128d_f64[0] =
                   (pTVar33->Scale3D).XY.m128d_f64[0];
              (this->RootMotionParams).RootMotionStartOffset.Scale3D.XY.m128d_f64[1] = dVar45;
              dVar45 = (pTVar33->Scale3D).ZW.m128d_f64[1];
              (this->RootMotionParams).RootMotionStartOffset.Scale3D.ZW.m128d_f64[0] =
                   (pTVar33->Scale3D).ZW.m128d_f64[0];
              (this->RootMotionParams).RootMotionStartOffset.Scale3D.ZW.m128d_f64[1] = dVar45;
              puVar34 = TThreadSingleton<FMemStack>::GetTlsSlot();
              local_590 = local_6a8;
              local_598 = UE::Core::Private::Function::
                          TFunctionRefCaller<`TThreadSingleton<FMemStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                          ::Call;
              pFVar35 = FThreadSingletonInitializer::Get
                                  ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_598,
                                   puVar34);
              local_680.Mem = (FMemStackBase *)(pFVar35 + 2);
              local_680.Top = (local_680.Mem)->Top;
              local_680.SavedChunk = *(FTaggedMemory **)(pFVar35 + 4);
              local_680.bPopped = false;
              local_680.NextTopmostMark = *(FMemMark **)(pFVar35 + 5);
              pFVar35[5] = (FTlsAutoCleanup)&local_680;
              *(int *)(pFVar35 + 6) = *(int *)(pFVar35 + 6) + 1;
              local_5d0._padding_ = 0;
              local_5d0._padding_ = 0;
              local_5d0.BoneContainer = (FBoneContainer *)0x0;
              local_6a0.Data = (FScriptContainerElement *)0x0;
              local_698[0] = 0;
              local_698[1] = 0;
              UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,*(int *)(pUVar5->_padding_ + 0x70),&local_6a0,local_698,local_698 + 1);
              iVar30 = local_698[0];
              if (0 < local_698[0]) {
                do {
                  uVar36 = 0;
                  if ((int)uVar39 < local_698[0]) {
                    uVar36 = ~uVar39 >> 0x1f;
                  }
                  if ((uVar36 == 0) &&
                     (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar27)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  *(short *)(local_6a0.Data + (longlong)(int)uVar39 * 2) = (short)uVar39;
                  uVar39 = uVar39 + 1;
                  iVar30 = local_698[0];
                } while ((int)uVar39 < local_698[0]);
              }
              pUVar6 = (UObject *)pUVar5->_padding_;
              local_5e0.FilterCurves = (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0;
              local_5e0.FilterMode = None;
              local_5e0.LODIndex = 0;
              local_588.DataPtr = (ushort *)local_6a0.Data;
              if ((iVar30 < 0) &&
                 (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                     ("InCount >= 0",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0xeb,L""), bVar27)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              local_588.ArrayNum = iVar30;
              FBoneContainer::FBoneContainer(&local_2c8,&local_588,&local_5e0,pUVar6);
              FBaseCompactPose<TMemStackAllocator<0>_>::ResetToRefPose(&local_5d0,&local_2c8);
              local_5b8._0_8_ = 0;
              local_5b8._8_8_ = 0;
              local_5b8._16_1_ = 0;
              local_5b8._24_8_ = 0;
              FBlendedCurve::InitFrom(&local_5b8,&local_2c8);
              local_648 = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
              local_640 = 0;
              local_638 = (TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)0x0;
              local_630 = 0;
              local_628 = (TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>
                           *)0x0;
              local_620 = 0;
              local_618 = (void *)0x0;
              local_610 = 0;
              FAnimationPoseData::FAnimationPoseData
                        (&local_558,(FCompactPose *)&local_5d0,&local_5b8,
                         (FStackAttributeContainer *)&local_648);
              UMovieSceneSkeletalAnimationSection::FRootMotionTransformParam::
              FRootMotionTransformParam(&local_478);
              local_478.FrameRate.Numerator = *(int *)&local_600[7].field_0x20;
              local_478.FrameRate.Denominator = *(int *)&local_600[7].field_0x24;
              local_568 = local_6c0->field_0xb0;
              uStack_567 = local_6c0->field_0xb1;
              uStack_566 = local_6c0->field_0xb2;
              uStack_565 = local_6c0->field_0xb3;
              iStack_564 = *(int *)&local_6c0->field_0xb4;
              uStack_560 = local_6c0->field_0xb8;
              uStack_55f = local_6c0->field_0xb9;
              uStack_55e = local_6c0->field_0xba;
              uStack_55d = local_6c0->field_0xbb;
              uStack_55c = local_6c0->field_0xbc;
              uStack_55b = local_6c0->field_0xbd;
              uStack_55a = local_6c0->field_0xbe;
              uStack_559 = local_6c0->field_0xbf;
              if ((local_568 == '\x02') &&
                 (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Type != ERangeBoundTypes::Open",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                      ,99,L""), bVar27)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              local_478.CurrentTime.FrameNumber.Value = iStack_564;
              local_478.CurrentTime.SubFrame = 0.0;
              bVar27 = UMovieSceneSkeletalAnimationSection::GetRootMotionTransform
                                 (this_00,&local_558,&local_478);
              if (bVar27) {
                pTVar33 = UE::Math::TTransform<double>::GetRelativeTransformReverse
                                    (&local_478.OutPoseTransform,&local_108,&local_478.OutTransform)
                ;
                dVar45 = (pTVar33->Rotation).XY.m128d_f64[1];
                dVar87 = (pTVar33->Rotation).ZW.m128d_f64[0];
                dVar11 = (pTVar33->Rotation).ZW.m128d_f64[1];
                dVar12 = (pTVar33->Translation).XY.m128d_f64[0];
                dVar13 = (pTVar33->Translation).XY.m128d_f64[1];
                dVar81 = (pTVar33->Translation).ZW.m128d_f64[0];
                dVar78 = (pTVar33->Translation).ZW.m128d_f64[1];
                dVar85 = (pTVar33->Scale3D).XY.m128d_f64[0];
                dVar14 = (pTVar33->Scale3D).XY.m128d_f64[1];
                dVar15 = (pTVar33->Scale3D).ZW.m128d_f64[0];
                dVar16 = (pTVar33->Scale3D).ZW.m128d_f64[1];
                (local_6c0->PreviousTransform).Rotation.XY.m128d_f64[0] =
                     (pTVar33->Rotation).XY.m128d_f64[0];
                (local_6c0->PreviousTransform).Rotation.XY.m128d_f64[1] = dVar45;
                (local_6c0->PreviousTransform).Rotation.ZW.m128d_f64[0] = dVar87;
                (local_6c0->PreviousTransform).Rotation.ZW.m128d_f64[1] = dVar11;
                (local_6c0->PreviousTransform).Translation.XY.m128d_f64[0] = dVar12;
                (local_6c0->PreviousTransform).Translation.XY.m128d_f64[1] = dVar13;
                (local_6c0->PreviousTransform).Translation.ZW.m128d_f64[0] = dVar81;
                (local_6c0->PreviousTransform).Translation.ZW.m128d_f64[1] = dVar78;
                (local_6c0->PreviousTransform).Scale3D.XY.m128d_f64[0] = dVar85;
                (local_6c0->PreviousTransform).Scale3D.XY.m128d_f64[1] = dVar14;
                (local_6c0->PreviousTransform).Scale3D.ZW.m128d_f64[0] = dVar15;
                (local_6c0->PreviousTransform).Scale3D.ZW.m128d_f64[1] = dVar16;
                local_538.Rotation.XY.m128d_f64[0] =
                     (double)GlobalVectorConstants::Float0001.m128_f32[0];
                local_538.Rotation.XY.m128d_f64[1] =
                     (double)GlobalVectorConstants::Float0001.m128_f32[1];
                local_538.Rotation.ZW.m128d_f64[0] =
                     (double)GlobalVectorConstants::Float0001.m128_f32[2];
                local_538.Rotation.ZW.m128d_f64[1] =
                     (double)GlobalVectorConstants::Float0001.m128_f32[3];
                local_538.Translation.XY.m128d_f64[0] =
                     (double)GlobalVectorConstants::FloatZero.m128_f32[0];
                local_538.Translation.XY.m128d_f64[1] =
                     (double)GlobalVectorConstants::FloatZero.m128_f32[1];
                local_538.Translation.ZW.m128d_f64[0] =
                     (double)GlobalVectorConstants::FloatZero.m128_f32[2];
                local_538.Translation.ZW.m128d_f64[1] =
                     (double)GlobalVectorConstants::FloatZero.m128_f32[3];
                local_538.Scale3D.XY.m128d_f64[0] =
                     (double)GlobalVectorConstants::Float1110.m128_f32[0];
                local_538.Scale3D.XY.m128d_f64[1] =
                     (double)GlobalVectorConstants::Float1110.m128_f32[1];
                local_538.Scale3D.ZW.m128d_f64[0] =
                     (double)GlobalVectorConstants::Float1110.m128_f32[2];
                local_538.Scale3D.ZW.m128d_f64[1] =
                     (double)GlobalVectorConstants::Float1110.m128_f32[3];
                UE::Math::TTransform<double>::Multiply
                          (&local_538,&local_6c0->PreviousTransform,&local_4d8);
                auVar18._8_8_ = local_538.Translation.XY.m128d_f64[1];
                auVar18._0_8_ = local_538.Translation.XY.m128d_f64[0];
                auVar19._8_8_ = local_538.Translation.ZW.m128d_f64[1];
                auVar19._0_8_ = local_538.Translation.ZW.m128d_f64[0];
                auVar20._8_8_ = local_538.Scale3D.XY.m128d_f64[1];
                auVar20._0_8_ = local_538.Scale3D.XY.m128d_f64[0];
                auVar21._8_8_ = local_538.Scale3D.ZW.m128d_f64[1];
                auVar21._0_8_ = local_538.Scale3D.ZW.m128d_f64[0];
                (local_6c0->PreviousTransform).Rotation.XY.m128d_f64[0] =
                     local_538.Rotation.XY.m128d_f64[0];
                (local_6c0->PreviousTransform).Rotation.XY.m128d_f64[1] =
                     local_538.Rotation.XY.m128d_f64[1];
                (local_6c0->PreviousTransform).Rotation.ZW.m128d_f64[0] =
                     local_538.Rotation.ZW.m128d_f64[0];
                (local_6c0->PreviousTransform).Rotation.ZW.m128d_f64[1] =
                     local_538.Rotation.ZW.m128d_f64[1];
                *(undefined1 (*) [16])(local_6c0->PreviousTransform).Translation.XY.m128d_f64 =
                     auVar18;
                *(undefined1 (*) [16])(local_6c0->PreviousTransform).Translation.ZW.m128d_f64 =
                     auVar19;
                *(undefined1 (*) [16])(local_6c0->PreviousTransform).Scale3D.XY.m128d_f64 = auVar20;
                *(undefined1 (*) [16])(local_6c0->PreviousTransform).Scale3D.ZW.m128d_f64 = auVar21;
              }
              else {
                *&(local_6c0->PreviousTransform).Rotation.XY.m128d_f64 =
                     UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
                *&(local_6c0->PreviousTransform).Rotation.ZW.m128d_f64 =
                     UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
                *&(local_6c0->PreviousTransform).Translation.XY.m128d_f64 =
                     UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
                *&(local_6c0->PreviousTransform).Translation.ZW.m128d_f64 =
                     UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
                *&(local_6c0->PreviousTransform).Scale3D.XY.m128d_f64 =
                     UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
                *&(local_6c0->PreviousTransform).Scale3D.ZW.m128d_f64 =
                     UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
              }
              if (local_618 != (void *)0x0) {
                FMemory::Free(local_618);
              }
              DestructItems<TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>,int>
                        (local_628,(int)local_620);
              if (local_628 !=
                  (TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>
                   *)0x0) {
                FMemory::Free(local_628);
              }
              DestructItems<TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>,int>
                        (local_638,(int)local_630);
              if (local_638 != (TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)0x0) {
                FMemory::Free(local_638);
              }
              DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>(local_648,(int)local_640);
              if (local_648 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
                FMemory::Free(local_648);
              }
              FBoneContainer::~FBoneContainer(&local_2c8);
              if (local_6a0.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_6a0.Data);
              }
              if (local_680.bPopped == false) {
                if (((local_680.Mem)->TopMark != &local_680) &&
                   (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Mem.TopMark == this",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                                        ,0x215,L""), bVar27)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                local_680.bPopped = true;
                (local_680.Mem)->NumMarks = (local_680.Mem)->NumMarks + -1;
                if (local_680.SavedChunk != (local_680.Mem)->TopChunk) {
                  FMemStackBase::FreeChunks(local_680.Mem,local_680.SavedChunk);
                }
                (local_680.Mem)->Top = local_680.Top;
                (local_680.Mem)->TopMark = local_680.NextTopmostMark;
                local_680.Top = (uchar *)0x0;
              }
            }
            this_00 = local_6c0;
            local_4d8.Rotation.XY.m128d_f64 = *&(local_6c0->PreviousTransform).Rotation.XY.m128d_f64
            ;
            local_4d8.Rotation.ZW.m128d_f64 = *&(local_6c0->PreviousTransform).Rotation.ZW.m128d_f64
            ;
            local_4d8.Translation.XY.m128d_f64 =
                 *&(local_6c0->PreviousTransform).Translation.XY.m128d_f64;
            local_4d8.Translation.ZW.m128d_f64 =
                 *&(local_6c0->PreviousTransform).Translation.ZW.m128d_f64;
            local_4d8.Scale3D.XY.m128d_f64 = *&(local_6c0->PreviousTransform).Scale3D.XY.m128d_f64;
            _Var59.m128d_f64 = *&(local_6c0->PreviousTransform).Scale3D.ZW.m128d_f64;
            local_4d8.Scale3D.ZW.m128d_f64 = _Var59.m128d_f64;
            UMovieSceneSkeletalAnimationSection::SetBoneIndexForRootMotionCalculations
                      (local_6c0,this->bBlendFirstChildOfRoot);
            uVar38 = (ulonglong)(uint)local_698[2];
            pFVar40 = pFVar40 + 8;
          }
        }
      }
      if (((int)local_6b0 != 0) &&
         ((bVar29 || (cVar28 = (**(code **)(*(longlong *)this + 0x390))(this), cVar28 != '\0')))) {
        (this->RootMotionParams).bHaveRootMotion = true;
        if (((int)local_6b0 < 1) &&
           (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar29)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        local_5f0 = *(undefined8 *)
                     &(*(UMovieSceneSkeletalAnimationSection **)local_6b8.Data)->field_0xb0;
        iVar30 = (int)((ulonglong)local_5f0 >> 0x20);
        iVar26 = iVar30;
        if ((char)local_5f0 != '\x01') {
          if (((char)local_5f0 == '\x02') &&
             (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Type != ERangeBoundTypes::Open",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                  ,99,L""), bVar29)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar30 = iVar30 + 1;
          local_688 = iVar30;
          iVar26 = local_608;
        }
        local_608 = iVar26;
        (this->RootMotionParams).StartFrame.FrameNumber.Value = iVar30;
        (this->RootMotionParams).StartFrame.SubFrame = 0.0;
        uVar31 = 0;
        if ((int)((int)local_6b0 - 1U) < (int)local_6b0) {
          uVar31 = ~((int)local_6b0 - 1U) >> 0x1f;
        }
        if ((uVar31 == 0) &&
           (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar29)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        local_5e8 = *(undefined8 *)
                     (*(longlong *)(local_6b8.Data + (longlong)((int)local_6b0 + -1) * 8) + 0xb8);
        if ((char)local_5e8 == '\x01') {
          iVar30 = (int)((ulonglong)local_5e8 >> 0x20) + 1;
        }
        else {
          if (((char)local_5e8 == '\x02') &&
             (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Type != ERangeBoundTypes::Open",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                  ,99,L""), bVar29)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar30 = local_5e8._4_4_;
        }
        (this->RootMotionParams).EndFrame.SubFrame = 0.0;
        (this->RootMotionParams).EndFrame.FrameNumber.Value = iVar30 + -1;
        FVar17.SubFrame = fStack_654;
        FVar17.FrameNumber.Value = local_658.Value;
        (this->RootMotionParams).FrameTick = FVar17;
      }
      if (local_6b8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_6b8.Data);
      }
    }
  }
  return;
}

// ShouldUseRootMotions @ 1468cfdf0

bool __thiscall
UMovieSceneCommonAnimationTrack::ShouldUseRootMotions(UMovieSceneCommonAnimationTrack *this)

{
  return false;
}

// SortSections @ 1468cfec0

void __thiscall UMovieSceneCommonAnimationTrack::SortSections(UMovieSceneCommonAnimationTrack *this)

{
  FIdentityFunctor local_res8 [32];
  
  AlgoImpl::
  IntroSortInternal<TObjectPtr<UMovieSceneSection>,int,FIdentityFunctor,TDereferenceWrapper<TObjectPtr<UMovieSceneSection>,_UMovieSceneCommonAnimationTrack::SortSections_::__l2::<lambda_1>_>_>
            ((TObjectPtr<UMovieSceneSection> *)(this->AnimationSections).AllocatorInstance.Data,
             (this->AnimationSections).ArrayNum,local_res8[0],(<lambda_1> *)local_res8);
  return;
}

// StaticRegisterNativesUMovieSceneCommonAnimationTrack @ 1468d0000

void __cdecl
UMovieSceneCommonAnimationTrack::StaticRegisterNativesUMovieSceneCommonAnimationTrack(void)

{
  return;
}

// SupportsMultipleRows @ 1468d0c20

bool __thiscall
UMovieSceneCommonAnimationTrack::SupportsMultipleRows(UMovieSceneCommonAnimationTrack *this)

{
  return true;
}

// SupportsType @ 1468d1310

bool __thiscall
UMovieSceneCommonAnimationTrack::SupportsType
          (UMovieSceneCommonAnimationTrack *this,TSubclassOf<UMovieSceneSection> param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  
  lVar2 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar2 != 0) {
    pUVar4 = Z_Construct_UClass_UMovieSceneSection_NoRegister();
    if (pUVar4 != (UClass *)0x0) {
      iVar1 = (int)pUVar4->_padding_;
      if ((*(int *)(lVar2 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        pUVar4 = *(UClass **)param_1.Class.field0_0x0;
        goto LAB_1468d135a;
      }
    }
  }
  pUVar4 = (UClass *)0x0;
LAB_1468d135a:
  pUVar5 = Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_NoRegister();
  return pUVar4 == pUVar5;
}

// UpdateEasing @ 1468d2950

void __thiscall UMovieSceneCommonAnimationTrack::UpdateEasing(UMovieSceneCommonAnimationTrack *this)

{
  UMovieSceneTrack::UpdateEasing((UMovieSceneTrack *)this);
  (this->RootMotionParams).bRootMotionsDirty = true;
  return;
}

