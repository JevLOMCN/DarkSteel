// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 44

// StaticClass @ 146723a50

UClass * __cdecl UMovieSceneSkeletalAnimationSection::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneSkeletalAnimationSection.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneSkeletalAnimationSection",
               &Z_Registration_Info_UClass_UMovieSceneSkeletalAnimationSection.InnerSingleton,
               StaticRegisterNativesUMovieSceneSkeletalAnimationSection,0x3b0,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneSkeletalAnimationSection>,
               InternalVTableHelperCtorCaller<UMovieSceneSkeletalAnimationSection>,local_res8,
               UMovieSceneSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneSkeletalAnimationSection.InnerSingleton;
}

// UMovieSceneSkeletalAnimationSection @ 146766c10

UMovieSceneSkeletalAnimationSection * __thiscall
UMovieSceneSkeletalAnimationSection::UMovieSceneSkeletalAnimationSection
          (UMovieSceneSkeletalAnimationSection *this,FVTableHelper *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  UMovieSceneSection::UMovieSceneSection((UMovieSceneSection *)this,param_1);
  *(undefined ***)this = &_vftable__for__UMovieSceneSection__;
  *(undefined ***)&this->field_0x110 = &_vftable__for__IMovieSceneEntityProvider__;
  FMovieSceneSkeletalAnimationParams::FMovieSceneSkeletalAnimationParams(&this->Params);
  (this->AnimSequence_DEPRECATED).field0_0x0.DebugPtr = (UAnimSequence *)0x0;
  (this->Animation_DEPRECATED).field0_0x0.DebugPtr = (UAnimSequenceBase *)0x0;
  (this->SlotName_DEPRECATED).ComparisonIndex = 0;
  (this->SlotName_DEPRECATED).Number = 0;
  (this->MatchedBoneName).ComparisonIndex = 0;
  (this->MatchedBoneName).Number = 0;
  FInstancedStruct::FInstancedStruct(&(this->MixedAnimationTarget).InstancedStruct);
  this->MixedAnimationPriority = 0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->PreviousTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->PreviousTransform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->PreviousTransform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->PreviousTransform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->PreviousTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->PreviousTransform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->PreviousTransform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->PreviousTransform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->PreviousTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->PreviousTransform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->PreviousTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->PreviousTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  (this->TempRootBoneIndex).bIsSet = false;
  return this;
}

// UMovieSceneSkeletalAnimationSection @ 146766cf0

UMovieSceneSkeletalAnimationSection * __thiscall
UMovieSceneSkeletalAnimationSection::UMovieSceneSkeletalAnimationSection
          (UMovieSceneSkeletalAnimationSection *this,FObjectInitializer *param_1)

{
  TInstancedStruct<FMovieSceneMixedAnimationTarget> *this_00;
  undefined1 *puVar1;
  undefined1 *puVar2;
  byte bVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined8 uVar12;
  double dVar13;
  int iVar14;
  UScriptStruct *pUVar15;
  TObjectPtr<UScriptStruct_const_>_u_0 local_28;
  uchar *puStack_20;
  FGuid local_18;
  
  UMovieSceneSection::UMovieSceneSection((UMovieSceneSection *)this,param_1);
  *(undefined ***)this = &_vftable__for__UMovieSceneSection__;
  *(undefined ***)&this->field_0x110 = &_vftable__for__IMovieSceneEntityProvider__;
  FMovieSceneSkeletalAnimationParams::FMovieSceneSkeletalAnimationParams(&this->Params);
  this_00 = &this->MixedAnimationTarget;
  (this->AnimSequence_DEPRECATED).field0_0x0.DebugPtr = (UAnimSequence *)0x0;
  (this->Animation_DEPRECATED).field0_0x0.DebugPtr = (UAnimSequenceBase *)0x0;
  (this->SlotName_DEPRECATED).ComparisonIndex = 0;
  (this->SlotName_DEPRECATED).Number = 0;
  (this->MatchedBoneName).ComparisonIndex = 0;
  (this->MatchedBoneName).Number = 0;
  FInstancedStruct::FInstancedStruct(&this_00->InstancedStruct);
  this->MixedAnimationPriority = 0;
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar5 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar6._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar6._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar6._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->PreviousTransform).Rotation.XY.m128d_f64 = auVar6;
  auVar7._8_4_ = SUB84((double)fVar5,0);
  auVar7._0_8_ = (double)fVar4;
  auVar7._12_4_ = (int)((ulonglong)(double)fVar5 >> 0x20);
  *(undefined1 (*) [16])(this->PreviousTransform).Rotation.ZW.m128d_f64 = auVar7;
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar5 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar8._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->PreviousTransform).Translation.XY.m128d_f64 = auVar8;
  auVar9._8_4_ = SUB84((double)fVar5,0);
  auVar9._0_8_ = (double)fVar4;
  auVar9._12_4_ = (int)((ulonglong)(double)fVar5 >> 0x20);
  *(undefined1 (*) [16])(this->PreviousTransform).Translation.ZW.m128d_f64 = auVar9;
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar5 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar10._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar10._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar10._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->PreviousTransform).Scale3D.XY.m128d_f64 = auVar10;
  auVar11._8_4_ = SUB84((double)fVar5,0);
  auVar11._0_8_ = (double)fVar4;
  auVar11._12_4_ = (int)((ulonglong)(double)fVar5 >> 0x20);
  *(undefined1 (*) [16])(this->PreviousTransform).Scale3D.ZW.m128d_f64 = auVar11;
  this->bReverse_DEPRECATED = 0;
  (this->TempRootBoneIndex).bIsSet = false;
  (this->AnimSequence_DEPRECATED).field0_0x0.DebugPtr = (UAnimSequence *)0x0;
  (this->Animation_DEPRECATED).field0_0x0.DebugPtr = (UAnimSequenceBase *)0x0;
  this->StartOffset_DEPRECATED = 0.0;
  this->EndOffset_DEPRECATED = 0.0;
  this->PlayRate_DEPRECATED = 1.0;
  this->SlotName_DEPRECATED = DefaultSlotName;
  *(undefined2 *)&this->field_0xf1 = 0x101;
  local_18 = FSequencerObjectVersion::GUID;
  iVar14 = UObjectBaseUtility::GetLinkerCustomVersion((UObjectBaseUtility *)this,&local_18);
  this->field_0x70 = 1;
  this->field_0x71 = (5 < iVar14) + '\x01';
  uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->StartLocationOffset).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->StartLocationOffset).field0_0x0._s_0.Y = (double)uVar12;
  (this->StartLocationOffset).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar13 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->StartRotationOffset).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->StartRotationOffset).Yaw = dVar13;
  dVar13 = UE::Math::TRotator<double>::ZeroRotator.Roll;
  this->bMatchWithPrevious = '\x01';
  (this->StartRotationOffset).Roll = dVar13;
  (this->MatchedBoneName).ComparisonIndex = 0;
  uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->MatchedBoneName).Number = 0;
  (this->MatchedLocationOffset).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->MatchedLocationOffset).field0_0x0._s_0.Y = (double)uVar12;
  (this->MatchedLocationOffset).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar13 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->MatchedRotationOffset).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->MatchedRotationOffset).Yaw = dVar13;
  dVar13 = UE::Math::TRotator<double>::ZeroRotator.Roll;
  puVar2 = &this->field_0x320;
  this->bMatchTranslation = '\x01';
  this->bDebugForceTickPose = '\0';
  this->bMatchRotationRoll = '\0';
  this->bMatchRotationPitch = '\0';
  this->bMatchRotationYaw = '\x01';
  this->bMatchIncludeZHeight = '\0';
  (this->MatchedRotationOffset).Roll = dVar13;
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)&local_28.ObjectPtr);
  pUVar15 = FMovieSceneMixedAnimationTarget::StaticStruct();
  FInstancedStruct::InitializeAs((FInstancedStruct *)&local_28.ObjectPtr,pUVar15,(uchar *)0x0);
  if ((TObjectPtr<UScriptStruct_const_>_u_0 *)this_00 != &local_28) {
    FInstancedStruct::Reset(&this_00->InstancedStruct);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_28.DebugPtr != (UScriptStruct *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_28.DebugPtr);
    }
    (this_00->InstancedStruct).ScriptStruct.field0_0x0.DebugPtr = (UScriptStruct *)local_28;
    (this->MixedAnimationTarget).InstancedStruct.StructMemory = puStack_20;
    local_28.DebugPtr = (UScriptStruct *)0x0;
    puStack_20 = (uchar *)0x0;
  }
  FInstancedStruct::Reset((FInstancedStruct *)&local_28.ObjectPtr);
  return this;
}

// ~UMovieSceneSkeletalAnimationSection @ 14676ad80

void __thiscall
UMovieSceneSkeletalAnimationSection::~UMovieSceneSkeletalAnimationSection
          (UMovieSceneSkeletalAnimationSection *this)

{
  *(undefined ***)this = &_vftable__for__UMovieSceneSection__;
  *(undefined ***)&this->field_0x110 = &_vftable__for__IMovieSceneEntityProvider__;
  FInstancedStruct::Reset(&(this->MixedAnimationTarget).InstancedStruct);
  FMovieSceneFloatChannel::~FMovieSceneFloatChannel(&(this->Params).Weight);
  *(undefined ***)&this->field_0x110 = &___7IMovieSceneEntityProvider__6B_;
  UMovieSceneSection::~UMovieSceneSection((UMovieSceneSection *)this);
  return;
}

// operator() @ 14676d340

bool __thiscall
`UMovieSceneSkeletalAnimationSection::GetSnapTimes'::__l2::<lambda_1>::operator()
          (void *this,FFrameTime param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  float fStackX_14;
  int local_18 [4];
  
  fStackX_14 = param_1.SubFrame;
  pFVar2 = *(ForAnyElementType **)this;
  if (__real_3f000000 <= fStackX_14) {
    param_1.FrameNumber.Value = param_1.FrameNumber.Value.Value + 1;
    param_1.SubFrame = 0.0;
  }
  local_18[0] = (int)param_1.FrameNumber.Value;
  if ((pFVar2->Data <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 <
      pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 4)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  iVar6 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar6 + 1;
  *(int *)(pFVar2->Data + (longlong)iVar6 * 4) = local_18[0];
  return true;
}

// CacheChannelProxy @ 14677e7f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

EMovieSceneChannelProxyType __thiscall
UMovieSceneSkeletalAnimationSection::CacheChannelProxy(UMovieSceneSkeletalAnimationSection *this)

{
  TObjectPtr<UObject> this_00;
  uchar uVar1;
  UMovieSceneTimeWarpGetter *pUVar2;
  longlong lVar3;
  UClass *pUVar4;
  longlong *plVar5;
  TSharedRef<FMovieSceneChannelProxy,1> *pTVar6;
  ForElementType<FMovieSceneChannelEntry> FVar7;
  TObjectPtr<UObject>_u_0 *pTVar8;
  undefined1 auStack_78 [32];
  FMovieSceneChannelProxy *local_58;
  FSharedReferencer<1> local_50;
  TArrayView<TObjectPtr<UObject>_const_,int> local_48;
  FMovieSceneChannelProxyData local_38;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_38.Entries.AllocatorInstance.SecondaryData = (ForElementType<FMovieSceneChannelEntry>)0x0;
  local_38.Entries.ArrayNum = 0;
  local_38.Entries.ArrayMax = 1;
  if ((((*(ulonglong *)(this->Params).PlayRate.Variant.Data & 0xfff8000000000000) ==
        0xfff8000000000000) &&
      (uVar1 = FMovieSceneNumericVariant::GetTypeBits(&(this->Params).PlayRate.Variant),
      uVar1 == '\0')) &&
     (pUVar2 = FMovieSceneTimeWarpVariant::AsCustom(&(this->Params).PlayRate),
     pUVar2 != (UMovieSceneTimeWarpGetter *)0x0)) {
    (**(code **)(pUVar2->_padding_ + 0x2f0))(pUVar2,&local_38,1);
  }
  FMovieSceneDecorationContainer::GetDecorations
            ((FMovieSceneDecorationContainer *)&this->field_0x60,&local_48);
  lVar3 = (longlong)local_48.ArrayNum;
  for (pTVar8 = &(local_48.DataPtr)->field0_0x0; pTVar8 != &local_48.DataPtr[lVar3].field0_0x0;
      pTVar8 = pTVar8 + 1) {
    this_00.field0_0x0 = (TObjectPtr<UObject>_u_0)pTVar8->DebugPtr;
    if (this_00.field0_0x0 != (UObject *)0x0) {
      pUVar4 = Z_Construct_UClass_UMovieSceneChannelDecoration_NoRegister();
      plVar5 = UObjectBaseUtility::GetInterfaceAddress
                         ((UObjectBaseUtility *)this_00.field0_0x0,pUVar4);
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x10))(plVar5,&local_38);
      }
    }
  }
  FMovieSceneChannelProxyData::AddInternal<FMovieSceneFloatChannel>
            (&local_38,&(this->Params).Weight);
  pTVar6 = MakeShared<FMovieSceneChannelProxy,1,FMovieSceneChannelProxyData>
                     ((TSharedRef<FMovieSceneChannelProxy,1> *)&local_48,&local_38);
  local_50.ReferenceController = (pTVar6->SharedReferenceCount).ReferenceController;
  local_58 = pTVar6->Object;
  if (local_50.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_50.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_50.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((FMovieSceneChannelProxy **)&this->field_0xf8 != &local_58) {
    *(FMovieSceneChannelProxy **)&this->field_0xf8 = local_58;
    local_58 = (FMovieSceneChannelProxy *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&this->field_0x100,&local_50);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_50.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)CONCAT44(local_48._12_4_,local_48.ArrayNum));
  FVar7 = (ForElementType<FMovieSceneChannelEntry>)&local_38;
  if (local_38.Entries.AllocatorInstance.SecondaryData !=
      (ForElementType<FMovieSceneChannelEntry>)0x0) {
    FVar7 = local_38.Entries.AllocatorInstance.SecondaryData;
  }
  DestructItems<FMovieSceneChannelEntry,int>
            ((FMovieSceneChannelEntry *)FVar7,local_38.Entries.ArrayNum);
  if (local_38.Entries.AllocatorInstance.SecondaryData !=
      (ForElementType<FMovieSceneChannelEntry>)0x0) {
    FMemory::Free((void *)local_38.Entries.AllocatorInstance.SecondaryData);
  }
  return Dynamic;
}

// ClearMatchedOffsetTransforms @ 1467812e0

void __thiscall
UMovieSceneSkeletalAnimationSection::ClearMatchedOffsetTransforms
          (UMovieSceneSkeletalAnimationSection *this)

{
  double dVar1;
  double dVar2;
  undefined1 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  double dVar9;
  UClass *pUVar10;
  UObject *pUVar11;
  undefined1 *puVar12;
  TRotator<double> local_48;
  TVector<double>_u_0 local_28;
  
  uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  dVar4 = (this->MatchedLocationOffset).field0_0x0._s_0.X;
  dVar5 = (this->MatchedLocationOffset).field0_0x0._s_0.Y;
  dVar1 = (this->MatchedLocationOffset).field0_0x0._s_0.Z;
  dVar6 = (this->MatchedRotationOffset).Pitch;
  dVar7 = (this->MatchedRotationOffset).Yaw;
  dVar2 = (this->MatchedRotationOffset).Roll;
  (this->MatchedLocationOffset).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->MatchedLocationOffset).field0_0x0._s_0.Y = (double)uVar8;
  (this->MatchedLocationOffset).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar9 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->MatchedRotationOffset).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->MatchedRotationOffset).Yaw = dVar9;
  (this->MatchedRotationOffset).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  if (this->bMatchWithPrevious == 0) {
    local_48.Pitch = dVar6;
    local_48.Yaw = dVar7;
    local_48.Roll = dVar2;
    local_28._s_0.X = dVar4;
    local_28._s_0.Y = dVar5;
    local_28._s_0.Z = dVar1;
    MultiplyOutInverseOnNextClips(this,(TVector<double> *)&local_28._s_0,&local_48);
  }
  this->bMatchWithPrevious = '\x01';
  (this->MatchedBoneName).ComparisonIndex = 0;
  (this->MatchedBoneName).Number = 0;
  pUVar10 = Z_Construct_UClass_UMovieSceneCommonAnimationTrack_NoRegister();
  pUVar11 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar10);
  puVar12 = &pUVar11[7].field_0x18;
  if (pUVar11 == (UObject *)0x0) {
    puVar12 = (undefined1 *)0x0;
  }
  if (puVar12 != (undefined1 *)0x0) {
    pUVar10 = Z_Construct_UClass_UMovieSceneCommonAnimationTrack_NoRegister();
    pUVar11 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar10);
    puVar12 = &pUVar11[8].field_0x8;
    if (pUVar11 == (UObject *)0x0) {
      puVar12 = &DAT_00000018;
    }
    *puVar12 = 1;
  }
  return;
}

// DeleteChannels @ 1467875f0

void __thiscall
UMovieSceneSkeletalAnimationSection::DeleteChannels
          (UMovieSceneSkeletalAnimationSection *this,TArrayView<FName_const_,int> *param_1)

{
  FName *pFVar1;
  uchar uVar2;
  bool bVar3;
  byte bVar4;
  UMovieSceneTimeWarpGetter *pUVar5;
  FName *pFVar6;
  byte bVar7;
  undefined8 local_28;
  FSharedReferencer<1> FStack_20;
  
  bVar7 = 0;
  if (((((*(ulonglong *)(this->Params).PlayRate.Variant.Data & 0xfff8000000000000) ==
         0xfff8000000000000) &&
       (uVar2 = FMovieSceneNumericVariant::GetTypeBits(&(this->Params).PlayRate.Variant),
       uVar2 == '\0')) &&
      (bVar3 = UMovieSceneSection::TryModify((UMovieSceneSection *)this,true), bVar3)) &&
     (pUVar5 = FMovieSceneTimeWarpVariant::AsCustom(&(this->Params).PlayRate),
     pUVar5 != (UMovieSceneTimeWarpGetter *)0x0)) {
    pFVar6 = param_1->DataPtr;
    pFVar1 = pFVar6 + param_1->ArrayNum;
    if (pFVar6 != pFVar1) {
      do {
        bVar4 = (**(code **)(pUVar5->_padding_ + 0x2f8))(pUVar5,&(this->Params).PlayRate,*pFVar6);
        bVar7 = bVar7 | bVar4;
        pFVar6 = pFVar6 + 1;
      } while (pFVar6 != pFVar1);
      if (bVar7 != 0) {
        local_28 = 0;
        FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        if ((undefined8 *)&this->field_0xf8 != &local_28) {
          *(undefined8 *)&this->field_0xf8 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    ((FSharedReferencer<1> *)&this->field_0x100,&FStack_20);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FStack_20.ReferenceController);
      }
    }
  }
  return;
}

// GetAnimation @ 146793fa0

UAnimSequenceBase * __thiscall
UMovieSceneSkeletalAnimationSection::GetAnimation(UMovieSceneSkeletalAnimationSection *this)

{
  return (this->Params).Animation.field0_0x0.DebugPtr;
}

// GetAutoSizeRange @ 146794410

TOptional<TRange<FFrameNumber>_> * __thiscall
UMovieSceneSkeletalAnimationSection::GetAutoSizeRange
          (UMovieSceneSkeletalAnimationSection *this,
          TOptional<TRange<FFrameNumber>_> *__return_storage_ptr__)

{
  UAnimSequenceBase *pUVar1;
  FFrameTime FVar2;
  code *pcVar3;
  FFrameTime FVar4;
  FFrameRate FVar5;
  char cVar6;
  bool bVar7;
  FFrameNumber FVar8;
  UClass *pUVar9;
  UObject *pUVar10;
  FMovieSceneSequenceTransform *this_00;
  TOptional<FFrameTime> *pTVar11;
  TOptional<TRange<FFrameNumber>_> *pTVar12;
  int iVar13;
  TOptional<FFrameTime> *pTVar14;
  FFrameNumber FVar15;
  float fVar16;
  double dVar17;
  double dVar18;
  undefined1 in_XMM3 [16];
  undefined1 auVar19 [16];
  undefined1 local_res18 [12];
  float fStackX_24;
  TRangeBound<FFrameNumber> local_b8;
  undefined4 uStack_b0;
  FFrameRate local_a8;
  FFrameTime local_a0;
  TRange<FFrameNumber> local_98;
  FMovieSceneSequenceTransform local_88;
  FMovieSceneInverseSequenceTransform local_68;
  TOptional<FFrameTime> local_48;
  TOptional<FFrameTime> local_3c [3];
  
  pUVar9 = Z_Construct_UClass_UMovieScene_NoRegister();
  pUVar10 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar9);
  if (pUVar10 == (UObject *)0x0) {
    __return_storage_ptr__->bIsSet = false;
  }
  else {
    local_98.LowerBound.Type.Value = this->field_0xb0;
    local_98.LowerBound._1_3_ = *(undefined3 *)&this->field_0xb1;
    local_98.LowerBound.Value.Value = *(int *)&this->field_0xb4;
    local_98.UpperBound.Type.Value = this->field_0xb8;
    local_98.UpperBound._1_3_ = *(undefined3 *)&this->field_0xb9;
    local_98.UpperBound.Value.Value = *(int *)&this->field_0xbc;
    local_a8.Numerator = *(int *)&pUVar10[7].field_0x20;
    local_a8.Denominator = *(int *)&pUVar10[7].field_0x24;
    this_00 = FMovieSceneSkeletalAnimationParams::MakeTransform
                        (&this->Params,&local_88,&local_a8,&local_98,(UAnimSequenceBase *)0x0,true,
                         false);
    FMovieSceneSequenceTransform::Inverse(this_00,&local_68);
    DestructItems<FMovieSceneNestedSequenceTransform,int>
              ((FMovieSceneNestedSequenceTransform *)
               local_88.NestedTransforms.AllocatorInstance.Data,local_88.NestedTransforms.ArrayNum);
    if ((FMovieSceneNestedSequenceTransform *)local_88.NestedTransforms.AllocatorInstance.Data !=
        (FMovieSceneNestedSequenceTransform *)0x0) {
      FMemory::Free(local_88.NestedTransforms.AllocatorInstance.Data);
    }
    FVar5 = local_a8;
    pUVar1 = (this->Params).Animation.field0_0x0.DebugPtr;
    if (pUVar1 == (UAnimSequenceBase *)0x0) {
      fVar16 = 0.0;
    }
    else {
      fVar16 = (float)(**(code **)(pUVar1->_padding_ + 0x2c0))();
    }
    dVar17 = ((double)FVar5.Numerator * (double)fVar16) / (double)FVar5.Denominator;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = dVar17;
    auVar19 = roundpd(in_XMM3,auVar19,1);
    dVar18 = auVar19._0_8_;
    dVar17 = dVar17 - dVar18;
    if (__real_41dfffffffc00000 <= dVar18) {
      dVar18 = __real_41dfffffffc00000;
    }
    if (dVar18 <= __real_c1e0000000000000) {
      dVar18 = __real_c1e0000000000000;
    }
    iVar13 = (int)dVar17;
    fVar16 = (float)dVar17 - (float)iVar13;
    if ((0.0 < fVar16) && (::FFrameTime::MaxSubframe <= fVar16)) {
      fVar16 = ::FFrameTime::MaxSubframe;
    }
    if (::FFrameTime::MaxSubframe <= fVar16) {
      fVar16 = ::FFrameTime::MaxSubframe;
    }
    local_res18._0_4_ =
         (this->Params).StartFrameOffset.Value + (this->Params).FirstLoopStartFrameOffset.Value;
    local_res18._4_4_ = 0.0;
    FVar2.SubFrame = 0.0;
    FVar2.FrameNumber.Value = local_res18._0_4_;
    if (fVar16 <= 0.0) {
      fVar16 = 0.0;
    }
    fStackX_24 = 0.0;
    local_res18._8_4_ =
         ((int)(fVar16 + __real_3f000000) + (int)dVar18 + iVar13 + 1) -
         (this->Params).EndFrameOffset.Value;
    pTVar11 = FMovieSceneInverseSequenceTransform::TryTransformTime(&local_68,&local_48,FVar2);
    FVar4.SubFrame = fStackX_24;
    FVar4.FrameNumber.Value = local_res18._8_4_;
    pTVar14 = (TOptional<FFrameTime> *)local_res18;
    if (pTVar11->bIsSet != false) {
      pTVar14 = pTVar11;
    }
    FVar2 = pTVar14->TypedValue;
    pTVar11 = FMovieSceneInverseSequenceTransform::TryTransformTime(&local_68,local_3c,FVar4);
    pTVar14 = (TOptional<FFrameTime> *)(local_res18 + 8);
    if (pTVar11->bIsSet != false) {
      pTVar14 = pTVar11;
    }
    local_a0 = pTVar14->TypedValue;
    FVar8 = local_a0.FrameNumber.Value;
    FVar15 = FVar2.FrameNumber.Value;
    local_b8.Value.Value = (int)FVar2.SubFrame;
    auVar19 = roundps(ZEXT416((uint)(local_a0.SubFrame - (float)local_b8.Value.Value)),
                      ZEXT416((uint)(local_a0.SubFrame - (float)local_b8.Value.Value)),1);
    iVar13 = (int)((ulonglong)*(undefined8 *)&this->field_0xb0 >> 0x20);
    cVar6 = (char)*(undefined8 *)&this->field_0xb0;
    if (cVar6 != '\x01') {
      if (cVar6 == '\x02') {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Type != ERangeBoundTypes::Open",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                           ,99,L"");
        if (bVar7) {
          pcVar3 = (code *)swi(3);
          pTVar12 = (TOptional<TRange<FFrameNumber>_> *)(*pcVar3)();
          return pTVar12;
        }
      }
      iVar13 = iVar13 + 1;
    }
    local_b8.Value.Value = (int)((ulonglong)*(undefined8 *)&this->field_0xb0 >> 0x20);
    cVar6 = (char)*(undefined8 *)&this->field_0xb0;
    if (cVar6 != '\x01') {
      if (cVar6 == '\x02') {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Type != ERangeBoundTypes::Open",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                           ,99,L"");
        if (bVar7) {
          pcVar3 = (code *)swi(3);
          pTVar12 = (TOptional<TRange<FFrameNumber>_> *)(*pcVar3)();
          return pTVar12;
        }
      }
      local_b8.Value.Value = local_b8.Value.Value + 1;
    }
    local_b8._0_4_ = FVar15.Value;
    local_b8.Type.Value = '\x01';
    __return_storage_ptr__->bIsSet = true;
    (__return_storage_ptr__->TypedValue).LowerBound = local_b8;
    (__return_storage_ptr__->TypedValue).UpperBound =
         (TRangeBound<FFrameNumber>)
         (CONCAT44((int)auVar19._0_4_ + (FVar8.Value - FVar15.Value) + iVar13,uStack_b0) &
         0xffffffffffffff00);
    if (local_68.NestedTransforms.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.NestedTransforms.AllocatorInstance.Data);
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// GetOffsetTime @ 1467962f0

TOptional<FFrameTime> * __thiscall
UMovieSceneSkeletalAnimationSection::GetOffsetTime
          (UMovieSceneSkeletalAnimationSection *this,TOptional<FFrameTime> *__return_storage_ptr__)

{
  FFrameTime FVar1;
  
  FVar1.SubFrame = 0.0;
  FVar1.FrameNumber.Value = (this->Params).FirstLoopStartFrameOffset.Value;
  __return_storage_ptr__->TypedValue = FVar1;
  __return_storage_ptr__->bIsSet = true;
  return __return_storage_ptr__;
}

// GetPlaybackAnimation @ 146796e10

UAnimSequenceBase * __thiscall
UMovieSceneSkeletalAnimationSection::GetPlaybackAnimation(UMovieSceneSkeletalAnimationSection *this)

{
  int iVar1;
  UAnimSequenceBase *pUVar2;
  UClass *pUVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  FString local_28;
  FString local_18;
  
  pUVar2 = (this->Params).Animation.field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar2 != (UAnimSequenceBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  pUVar2 = (UAnimSequenceBase *)
           UMovieSceneLanguagePreviewDecoration::FindLocalizedAsset
                     ((UObject *)pUVar2,(UMovieSceneSection *)this);
  if (pUVar2 == (UAnimSequenceBase *)0x0) {
    pUVar2 = (UAnimSequenceBase *)0x0;
  }
  else {
    pUVar3 = Z_Construct_UClass_UAnimSequenceBase_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(pUVar2->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar3->_padding_)) {
      pFVar4 = GetTypeName<UAnimSequenceBase>(&local_28);
      pwVar6 = L"";
      if ((pFVar4->Data).ArrayNum == 0) {
        pwVar5 = L"";
      }
      else {
        pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
      pFVar4 = GetFullNameForCastLogError<UObject>(&local_18,(UObject *)pUVar2);
      if ((pFVar4->Data).ArrayNum != 0) {
        pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar6,pwVar5);
    }
  }
  return pUVar2;
}

// GetPrivateStaticClass @ 1467995e0

UClass * __cdecl UMovieSceneSkeletalAnimationSection::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneSkeletalAnimationSection.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneSkeletalAnimationSection",
               &Z_Registration_Info_UClass_UMovieSceneSkeletalAnimationSection.InnerSingleton,
               StaticRegisterNativesUMovieSceneSkeletalAnimationSection,0x3b0,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneSkeletalAnimationSection>,
               InternalVTableHelperCtorCaller<UMovieSceneSkeletalAnimationSection>,local_res8,
               UMovieSceneSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneSkeletalAnimationSection.InnerSingleton;
}

// GetRootMotion @ 146799a60

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UMovieSceneSkeletalAnimationSection::GetRootMotion
          (UMovieSceneSkeletalAnimationSection *this,FFrameTime param_1,FRootMotionParams *param_2)

{
  double dVar1;
  int iVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  UMovieSceneCommonAnimationTrack *this_00;
  TOptional<UE::Math::TTransform<double>_> *pTVar5;
  undefined1 *puVar6;
  TOptional<UE::Math::TTransform<double>_> local_78;
  
  pUVar3 = Z_Construct_UClass_UMovieSceneCommonAnimationTrack_NoRegister();
  pUVar4 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar3);
  puVar6 = &pUVar4[7].field_0x18;
  if (pUVar4 == (UObject *)0x0) {
    puVar6 = (undefined1 *)0x0;
  }
  if (puVar6 != (undefined1 *)0x0) {
    pUVar3 = Z_Construct_UClass_UMovieSceneCommonAnimationTrack_NoRegister();
    this_00 = (UMovieSceneCommonAnimationTrack *)
              UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar3);
    if (this_00 != (UMovieSceneCommonAnimationTrack *)0x0) {
      pTVar5 = UMovieSceneCommonAnimationTrack::GetRootMotion(this_00,&local_78,param_1);
      if (pTVar5 != &param_2->Transform) {
        if (pTVar5->bIsSet == false) {
          if ((param_2->Transform).bIsSet != false) {
            (param_2->Transform).bIsSet = false;
          }
        }
        else {
          dVar1 = (pTVar5->TypedValue).Rotation.XY.m128d_f64[1];
          (param_2->Transform).TypedValue.Rotation.XY.m128d_f64[0] =
               (pTVar5->TypedValue).Rotation.XY.m128d_f64[0];
          (param_2->Transform).TypedValue.Rotation.XY.m128d_f64[1] = dVar1;
          dVar1 = (pTVar5->TypedValue).Rotation.ZW.m128d_f64[1];
          (param_2->Transform).TypedValue.Rotation.ZW.m128d_f64[0] =
               (pTVar5->TypedValue).Rotation.ZW.m128d_f64[0];
          (param_2->Transform).TypedValue.Rotation.ZW.m128d_f64[1] = dVar1;
          dVar1 = (pTVar5->TypedValue).Translation.XY.m128d_f64[1];
          (param_2->Transform).TypedValue.Translation.XY.m128d_f64[0] =
               (pTVar5->TypedValue).Translation.XY.m128d_f64[0];
          (param_2->Transform).TypedValue.Translation.XY.m128d_f64[1] = dVar1;
          dVar1 = (pTVar5->TypedValue).Translation.ZW.m128d_f64[1];
          (param_2->Transform).TypedValue.Translation.ZW.m128d_f64[0] =
               (pTVar5->TypedValue).Translation.ZW.m128d_f64[0];
          (param_2->Transform).TypedValue.Translation.ZW.m128d_f64[1] = dVar1;
          dVar1 = (pTVar5->TypedValue).Scale3D.XY.m128d_f64[1];
          (param_2->Transform).TypedValue.Scale3D.XY.m128d_f64[0] =
               (pTVar5->TypedValue).Scale3D.XY.m128d_f64[0];
          (param_2->Transform).TypedValue.Scale3D.XY.m128d_f64[1] = dVar1;
          dVar1 = (pTVar5->TypedValue).Scale3D.ZW.m128d_f64[1];
          (param_2->Transform).TypedValue.Scale3D.ZW.m128d_f64[0] =
               (pTVar5->TypedValue).Scale3D.ZW.m128d_f64[0];
          (param_2->Transform).TypedValue.Scale3D.ZW.m128d_f64[1] = dVar1;
          (param_2->Transform).bIsSet = true;
        }
      }
      if ((this->TempRootBoneIndex).bIsSet == false) {
        iVar2 = -1;
      }
      else {
        iVar2 = (this->TempRootBoneIndex).TypedValue;
      }
      param_2->ChildBoneIndex = iVar2;
      param_2->bBlendFirstChildOfRoot = this_00->bBlendFirstChildOfRoot;
      if ((TOptional<UE::Math::TTransform<double>_> *)&this->PreviousTransform !=
          &param_2->PreviousTransform) {
        dVar1 = (this->PreviousTransform).Rotation.XY.m128d_f64[1];
        (param_2->PreviousTransform).TypedValue.Rotation.XY.m128d_f64[0] =
             (this->PreviousTransform).Rotation.XY.m128d_f64[0];
        (param_2->PreviousTransform).TypedValue.Rotation.XY.m128d_f64[1] = dVar1;
        dVar1 = (this->PreviousTransform).Rotation.ZW.m128d_f64[1];
        (param_2->PreviousTransform).TypedValue.Rotation.ZW.m128d_f64[0] =
             (this->PreviousTransform).Rotation.ZW.m128d_f64[0];
        (param_2->PreviousTransform).TypedValue.Rotation.ZW.m128d_f64[1] = dVar1;
        dVar1 = (this->PreviousTransform).Translation.XY.m128d_f64[1];
        (param_2->PreviousTransform).TypedValue.Translation.XY.m128d_f64[0] =
             (this->PreviousTransform).Translation.XY.m128d_f64[0];
        (param_2->PreviousTransform).TypedValue.Translation.XY.m128d_f64[1] = dVar1;
        dVar1 = (this->PreviousTransform).Translation.ZW.m128d_f64[1];
        (param_2->PreviousTransform).TypedValue.Translation.ZW.m128d_f64[0] =
             (this->PreviousTransform).Translation.ZW.m128d_f64[0];
        (param_2->PreviousTransform).TypedValue.Translation.ZW.m128d_f64[1] = dVar1;
        dVar1 = (this->PreviousTransform).Scale3D.XY.m128d_f64[1];
        (param_2->PreviousTransform).TypedValue.Scale3D.XY.m128d_f64[0] =
             (this->PreviousTransform).Scale3D.XY.m128d_f64[0];
        (param_2->PreviousTransform).TypedValue.Scale3D.XY.m128d_f64[1] = dVar1;
        dVar1 = (this->PreviousTransform).Scale3D.ZW.m128d_f64[1];
        (param_2->PreviousTransform).TypedValue.Scale3D.ZW.m128d_f64[0] =
             (this->PreviousTransform).Scale3D.ZW.m128d_f64[0];
        (param_2->PreviousTransform).TypedValue.Scale3D.ZW.m128d_f64[1] = dVar1;
        (param_2->PreviousTransform).bIsSet = true;
      }
    }
  }
  return;
}

// GetRootMotionParams @ 146799bb0

FMovieSceneSkeletalAnimRootMotionTrackParams * __thiscall
UMovieSceneSkeletalAnimationSection::GetRootMotionParams(UMovieSceneSkeletalAnimationSection *this)

{
  UClass *pUVar1;
  UObject *pUVar2;
  FMovieSceneSkeletalAnimRootMotionTrackParams *pFVar3;
  
  pUVar1 = Z_Construct_UClass_UMovieSceneCommonAnimationTrack_NoRegister();
  pUVar2 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar1);
  pFVar3 = (FMovieSceneSkeletalAnimRootMotionTrackParams *)0x0;
  if (pUVar2 != (UObject *)0x0) {
    pFVar3 = (FMovieSceneSkeletalAnimRootMotionTrackParams *)&pUVar2[7].field_0x18;
  }
  return pFVar3;
}

// GetRootMotionStartOffset @ 146799bf0

TTransform<double> * __thiscall
UMovieSceneSkeletalAnimationSection::GetRootMotionStartOffset
          (UMovieSceneSkeletalAnimationSection *this,TTransform<double> *__return_storage_ptr__)

{
  UAnimSequence *this_00;
  FFrameRate FVar1;
  double dVar2;
  bool bVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  FAnimExtractContext local_68;
  
  if ((this->Params).Animation.field0_0x0.DebugPtr != (UAnimSequenceBase *)0x0) {
    pUVar4 = Z_Construct_UClass_UAnimSequence_NoRegister();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)&this->Params,pUVar4);
    if ((((bVar3) &&
         (this_00 = (UAnimSequence *)(this->Params).Animation.field0_0x0.DebugPtr,
         this_00 != (UAnimSequence *)0x0)) && ((this->TempRootBoneIndex).bIsSet != false)) &&
       ((this->TempRootBoneIndex).TypedValue != 0)) {
      pUVar4 = Z_Construct_UClass_UMovieScene_NoRegister();
      pUVar5 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar4);
      if (pUVar5 == (UObject *)0x0) {
        uVar6 = 0;
        uVar7 = 0;
      }
      else {
        FVar1.Numerator = *(int *)&pUVar5[7].field_0x20;
        FVar1.Denominator = *(int *)&pUVar5[7].field_0x24;
        dVar2 = MapTimeToAnimation(this,(FFrameTime)0x0,FVar1);
        uVar6 = SUB84(dVar2,0);
        uVar7 = (undefined4)((ulonglong)dVar2 >> 0x20);
      }
      local_68.CurrentTime = (double)CONCAT44(uVar7,uVar6);
      local_68.bExtractRootMotion = false;
      local_68.DeltaTimeRecord.Delta = 0.0;
      local_68.DeltaTimeRecord.Previous = 0.0;
      local_68.DeltaTimeRecord.bPreviousIsValid = false;
      local_68.DeltaTimeRecord._9_3_ = 0;
      local_68.bLooping = false;
      local_68.PoseCurves.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_68.PoseCurves.ArrayNum = 0;
      local_68.PoseCurves.ArrayMax = 0;
      local_68.BonesRequired.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_68.BonesRequired.ArrayNum = 0;
      local_68.BonesRequired.ArrayMax = 0;
      local_68.InterpolationOverride.bIsSet = false;
      UAnimSequence::ExtractRootTrackTransform
                (this_00,__return_storage_ptr__,&local_68,(FBoneContainer *)0x0);
      if (local_68.BonesRequired.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.BonesRequired.AllocatorInstance.Data);
      }
      if (local_68.PoseCurves.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return __return_storage_ptr__;
      }
      FMemory::Free(local_68.PoseCurves.AllocatorInstance.Data);
      return __return_storage_ptr__;
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
  *&(__return_storage_ptr__->Scale3D).ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  return __return_storage_ptr__;
}

// GetRootMotionTransform @ 146799d90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
UMovieSceneSkeletalAnimationSection::GetRootMotionTransform
          (UMovieSceneSkeletalAnimationSection *this,FAnimationPoseData *param_1,
          FRootMotionTransformParam *param_2)

{
  FMovieSceneSkeletalAnimationParams *this_00;
  double *pdVar1;
  UAnimSequence *this_01;
  FFrameRate FVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  TConsoleVariableData<bool> *pTVar9;
  bool bVar10;
  undefined1 uVar11;
  int iVar12;
  undefined4 extraout_EAX;
  UClass *pUVar13;
  TQuat<double> *pTVar14;
  UObject *pUVar15;
  FCompactPose *pFVar16;
  TTransform<double> *pTVar17;
  uint uVar18;
  ForAnyElementType FVar19;
  UAnimSequence *this_02;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  float fVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  double dVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  double dVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  double dVar42;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined4 uVar45;
  undefined4 uVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  double dVar49;
  undefined1 auVar50 [16];
  double dVar51;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined4 uVar56;
  undefined4 uVar57;
  undefined4 uVar58;
  undefined4 uVar59;
  uint uVar60;
  uint uVar61;
  uint uVar62;
  uint uVar63;
  undefined1 auStackY_8b8 [32];
  float local_888 [2];
  undefined8 local_880;
  undefined4 local_878;
  undefined8 local_870;
  undefined4 local_868;
  undefined8 local_860;
  undefined4 local_858;
  undefined8 local_850;
  undefined4 local_848;
  undefined8 local_840;
  undefined8 local_838;
  FCompactPose *local_830;
  double local_828;
  undefined1 local_820;
  undefined8 local_81c;
  undefined4 local_814;
  undefined1 local_810;
  FScriptContainerElement *local_808;
  undefined8 local_800;
  void *local_7f8;
  undefined8 local_7f0;
  undefined1 local_7e7;
  FAnimExtractContext local_7d8;
  FAnimExtractContext local_790;
  FAnimExtractContext local_748;
  double local_6f8;
  double dStack_6f0;
  double local_6e8;
  double dStack_6e0;
  double local_6d8;
  double dStack_6d0;
  double local_6c8;
  double dStack_6c0;
  TQuat<double> local_6b8;
  TQuat<double> local_698;
  TTransform<double> local_678;
  TTransform<double> local_618;
  TTransform<double> local_5b8;
  TTransform<double> local_558;
  TTransform<double> local_4f8;
  TTransform<double> local_498;
  TTransform<double> local_438;
  TTransform<double> local_3d8;
  TTransform<double> local_378;
  TTransform<double> local_318;
  TTransform<double> local_2b8;
  TTransform<double> local_258;
  TTransform<double> local_1f8;
  TTransform<double> local_198;
  TTransform<double> local_138;
  ulonglong local_d8;
  uint uVar41;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_8b8;
  this_00 = &this->Params;
  this_02 = (UAnimSequence *)0x0;
  if ((this_00->Animation).field0_0x0.DebugPtr != (UAnimSequenceBase *)0x0) {
    pUVar13 = Z_Construct_UClass_UAnimSequence_NoRegister();
    bVar10 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar13);
    if (bVar10) {
      this_02 = (UAnimSequence *)(this_00->Animation).field0_0x0.DebugPtr;
    }
  }
  pTVar14 = UE::Math::TRotator<double>::Quaternion(&this->StartRotationOffset,&local_6b8);
  dVar36 = _UNK_150689688;
  dVar31 = ___xmm_3ff00000000000003ff0000000000000;
  dVar25 = _UNK_150689518;
  dVar24 = ___xmm_00000000000000003ff0000000000000;
  dVar26 = 0.0;
  local_6f8 = pTVar14->X;
  dStack_6f0 = pTVar14->Y;
  local_6e8 = pTVar14->Z;
  dStack_6e0 = pTVar14->W;
  local_438.Translation.XY.m128d_f64[0] = (this->StartLocationOffset).field0_0x0._s_0.X;
  local_438.Translation.XY.m128d_f64[1] = (this->StartLocationOffset).field0_0x0._s_0.Y;
  local_438.Translation.ZW.m128d_f64[0] = (this->StartLocationOffset).field0_0x0._s_0.Z;
  local_438.Translation.ZW.m128d_f64[1] = 0.0;
  local_438.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
  local_438.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
  local_438.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
  local_438.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
  local_438.Rotation.XY.m128d_f64[0] = local_6f8;
  local_438.Rotation.XY.m128d_f64[1] = dStack_6f0;
  local_438.Rotation.ZW.m128d_f64[0] = local_6e8;
  local_438.Rotation.ZW.m128d_f64[1] = dStack_6e0;
  pTVar14 = UE::Math::TRotator<double>::Quaternion(&this->MatchedRotationOffset,&local_698);
  local_3d8.Translation.ZW.m128d_f64[0] = (this->MatchedLocationOffset).field0_0x0._s_0.Z;
  local_6d8 = pTVar14->X;
  dStack_6d0 = pTVar14->Y;
  local_6c8 = pTVar14->Z;
  dStack_6c0 = pTVar14->W;
  local_3d8.Translation.ZW.m128d_f64[1] = 0.0;
  local_3d8.Scale3D.XY.m128d_f64[0] = dVar31;
  local_3d8.Scale3D.XY.m128d_f64[1] = dVar36;
  local_3d8.Scale3D.ZW.m128d_f64[0] = dVar24;
  local_3d8.Scale3D.ZW.m128d_f64[1] = dVar25;
  local_3d8.Translation.XY.m128d_f64[0] = (this->MatchedLocationOffset).field0_0x0._s_0.X;
  local_3d8.Translation.XY.m128d_f64[1] = (this->MatchedLocationOffset).field0_0x0._s_0.Y;
  local_3d8.Rotation.XY.m128d_f64[0] = local_6d8;
  local_3d8.Rotation.XY.m128d_f64[1] = dStack_6d0;
  local_3d8.Rotation.ZW.m128d_f64[0] = local_6c8;
  local_3d8.Rotation.ZW.m128d_f64[1] = dStack_6c0;
  if (this_02 == (UAnimSequence *)0x0) {
    local_498.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_498.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
    local_498.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_498.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
    local_498.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_498.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
    local_498.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_498.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
    local_498.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_498.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
    local_498.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_498.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
    UE::Math::TTransform<double>::Multiply(&local_498,&local_438,&local_3d8);
    (param_2->OutParentTransform).Rotation.XY.m128d_f64[0] = local_498.Rotation.XY.m128d_f64[0];
    (param_2->OutParentTransform).Rotation.XY.m128d_f64[1] = local_498.Rotation.XY.m128d_f64[1];
    (param_2->OutTransform).Rotation.XY.m128d_f64[0] = local_498.Rotation.XY.m128d_f64[0];
    (param_2->OutTransform).Rotation.XY.m128d_f64[1] = local_498.Rotation.XY.m128d_f64[1];
    (param_2->OutParentTransform).Rotation.ZW.m128d_f64[0] = local_498.Rotation.ZW.m128d_f64[0];
    (param_2->OutParentTransform).Rotation.ZW.m128d_f64[1] = local_498.Rotation.ZW.m128d_f64[1];
    (param_2->OutTransform).Rotation.ZW.m128d_f64[0] = local_498.Rotation.ZW.m128d_f64[0];
    (param_2->OutTransform).Rotation.ZW.m128d_f64[1] = local_498.Rotation.ZW.m128d_f64[1];
    (param_2->OutParentTransform).Translation.XY.m128d_f64[0] =
         local_498.Translation.XY.m128d_f64[0];
    (param_2->OutParentTransform).Translation.XY.m128d_f64[1] =
         local_498.Translation.XY.m128d_f64[1];
    (param_2->OutTransform).Translation.XY.m128d_f64[0] = local_498.Translation.XY.m128d_f64[0];
    (param_2->OutTransform).Translation.XY.m128d_f64[1] = local_498.Translation.XY.m128d_f64[1];
    (param_2->OutParentTransform).Translation.ZW.m128d_f64[0] =
         local_498.Translation.ZW.m128d_f64[0];
    (param_2->OutParentTransform).Translation.ZW.m128d_f64[1] =
         local_498.Translation.ZW.m128d_f64[1];
    (param_2->OutTransform).Translation.ZW.m128d_f64[0] = local_498.Translation.ZW.m128d_f64[0];
    (param_2->OutTransform).Translation.ZW.m128d_f64[1] = local_498.Translation.ZW.m128d_f64[1];
    (param_2->OutParentTransform).Scale3D.XY.m128d_f64[0] = local_498.Scale3D.XY.m128d_f64[0];
    (param_2->OutParentTransform).Scale3D.XY.m128d_f64[1] = local_498.Scale3D.XY.m128d_f64[1];
    (param_2->OutTransform).Scale3D.XY.m128d_f64[0] = local_498.Scale3D.XY.m128d_f64[0];
    (param_2->OutTransform).Scale3D.XY.m128d_f64[1] = local_498.Scale3D.XY.m128d_f64[1];
    (param_2->OutParentTransform).Scale3D.ZW.m128d_f64[0] = local_498.Scale3D.ZW.m128d_f64[0];
    (param_2->OutParentTransform).Scale3D.ZW.m128d_f64[1] = local_498.Scale3D.ZW.m128d_f64[1];
    (param_2->OutTransform).Scale3D.ZW.m128d_f64[0] = local_498.Scale3D.ZW.m128d_f64[0];
    (param_2->OutTransform).Scale3D.ZW.m128d_f64[1] = local_498.Scale3D.ZW.m128d_f64[1];
    *&(param_2->OutPoseTransform).Rotation.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    *&(param_2->OutPoseTransform).Rotation.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    *&(param_2->OutPoseTransform).Translation.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    *&(param_2->OutPoseTransform).Translation.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    *&(param_2->OutPoseTransform).Scale3D.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    *&(param_2->OutPoseTransform).Scale3D.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    return true;
  }
  local_888[0] = 1.0;
  FMovieSceneFloatChannel::Evaluate(&(this->Params).Weight,param_2->CurrentTime,local_888);
  fVar23 = UMovieSceneSection::EvaluateEasing((UMovieSceneSection *)this,param_2->CurrentTime);
  param_2->bOutIsAdditive = false;
  param_2->OutWeight = fVar23 * local_888[0];
  dVar24 = MapTimeToAnimation(this,param_2->CurrentTime,param_2->FrameRate);
  local_840 = 0;
  dVar25 = MapTimeToAnimation(this,(FFrameTime)0x0,param_2->FrameRate);
  iVar12 = (**(code **)(this_02->_padding_ + 0x3b8))(this_02);
  param_2->bOutIsAdditive = iVar12 != 0;
  local_678.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_678.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_678.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_678.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_678.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_678.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  local_678.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_678.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_678.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_678.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_678.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_678.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  if ((this_00->Animation).field0_0x0.DebugPtr != (UAnimSequenceBase *)0x0) {
    pUVar13 = Z_Construct_UClass_UAnimSequence_NoRegister();
    bVar10 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar13);
    if ((((bVar10) &&
         (this_01 = (UAnimSequence *)(this_00->Animation).field0_0x0.DebugPtr,
         this_01 != (UAnimSequence *)0x0)) && ((this->TempRootBoneIndex).bIsSet != false)) &&
       ((this->TempRootBoneIndex).TypedValue != 0)) {
      pUVar13 = Z_Construct_UClass_UMovieScene_NoRegister();
      pUVar15 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar13);
      if (pUVar15 != (UObject *)0x0) {
        FVar2.Numerator = *(int *)&pUVar15[7].field_0x20;
        FVar2.Denominator = *(int *)&pUVar15[7].field_0x24;
        local_838 = 0;
        dVar26 = MapTimeToAnimation(this,(FFrameTime)0x0,FVar2);
      }
      local_878 = 0;
      local_7d8.bExtractRootMotion = false;
      local_7d8.DeltaTimeRecord.bPreviousIsValid = false;
      local_7d8.DeltaTimeRecord._9_3_ = 0;
      local_880 = 0;
      local_7d8.DeltaTimeRecord.Delta = 0.0;
      local_7d8.DeltaTimeRecord.Previous = 0.0;
      local_7d8.bLooping = false;
      local_7d8.PoseCurves.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_7d8.PoseCurves.ArrayNum = 0;
      local_7d8.PoseCurves.ArrayMax = 0;
      local_7d8.BonesRequired.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_7d8.BonesRequired.ArrayNum = 0;
      local_7d8.BonesRequired.ArrayMax = 0;
      local_7d8.InterpolationOverride.bIsSet = false;
      local_7d8.CurrentTime = dVar26;
      UAnimSequence::ExtractRootTrackTransform(this_01,&local_618,&local_7d8,(FBoneContainer *)0x0);
      if (local_7d8.BonesRequired.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_7d8.BonesRequired.AllocatorInstance.Data);
      }
      if (local_7d8.PoseCurves.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_7d8.PoseCurves.AllocatorInstance.Data);
      }
      goto LAB_14679a0f7;
    }
  }
  local_618.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  local_618.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  local_618.Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  local_618.Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  local_618.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  local_618.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
LAB_14679a0f7:
  (param_2->OutRootStartTransform).Rotation.XY.m128d_f64[0] = local_618.Rotation.XY.m128d_f64[0];
  (param_2->OutRootStartTransform).Rotation.XY.m128d_f64[1] = local_618.Rotation.XY.m128d_f64[1];
  (param_2->OutRootStartTransform).Rotation.ZW.m128d_f64[0] = local_618.Rotation.ZW.m128d_f64[0];
  (param_2->OutRootStartTransform).Rotation.ZW.m128d_f64[1] = local_618.Rotation.ZW.m128d_f64[1];
  (param_2->OutRootStartTransform).Translation.XY.m128d_f64[0] =
       local_618.Translation.XY.m128d_f64[0];
  (param_2->OutRootStartTransform).Translation.XY.m128d_f64[1] =
       local_618.Translation.XY.m128d_f64[1];
  (param_2->OutRootStartTransform).Translation.ZW.m128d_f64[0] =
       local_618.Translation.ZW.m128d_f64[0];
  (param_2->OutRootStartTransform).Translation.ZW.m128d_f64[1] =
       local_618.Translation.ZW.m128d_f64[1];
  (param_2->OutRootStartTransform).Scale3D.XY.m128d_f64[0] = local_618.Scale3D.XY.m128d_f64[0];
  (param_2->OutRootStartTransform).Scale3D.XY.m128d_f64[1] = local_618.Scale3D.XY.m128d_f64[1];
  (param_2->OutRootStartTransform).Scale3D.ZW.m128d_f64[0] = local_618.Scale3D.ZW.m128d_f64[0];
  (param_2->OutRootStartTransform).Scale3D.ZW.m128d_f64[1] = local_618.Scale3D.ZW.m128d_f64[1];
  if (((this->TempRootBoneIndex).bIsSet == false) || ((this->TempRootBoneIndex).TypedValue == 0)) {
    local_858 = 0;
    local_790.bExtractRootMotion = false;
    local_790.DeltaTimeRecord.bPreviousIsValid = false;
    local_790.DeltaTimeRecord._9_3_ = 0;
    local_860 = 0;
    local_790.DeltaTimeRecord.Delta = 0.0;
    local_790.DeltaTimeRecord.Previous = 0.0;
    local_790.bLooping = false;
    local_790.PoseCurves.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_790.PoseCurves.ArrayNum = 0;
    local_790.PoseCurves.ArrayMax = 0;
    local_790.BonesRequired.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_790.BonesRequired.ArrayNum = 0;
    local_790.BonesRequired.ArrayMax = 0;
    local_790.InterpolationOverride.bIsSet = false;
    local_790.CurrentTime = dVar25;
    pTVar17 = UAnimSequence::ExtractRootTrackTransform
                        (this_02,&local_1f8,&local_790,(FBoneContainer *)0x0);
    local_678.Rotation.XY.m128d_f64[0] = (pTVar17->Rotation).XY.m128d_f64[0];
    local_678.Rotation.XY.m128d_f64[1] = (pTVar17->Rotation).XY.m128d_f64[1];
    local_678.Rotation.ZW.m128d_f64[0] = (pTVar17->Rotation).ZW.m128d_f64[0];
    local_678.Rotation.ZW.m128d_f64[1] = (pTVar17->Rotation).ZW.m128d_f64[1];
    local_678.Translation.XY.m128d_f64[0] = (pTVar17->Translation).XY.m128d_f64[0];
    local_678.Translation.XY.m128d_f64[1] = (pTVar17->Translation).XY.m128d_f64[1];
    local_678.Translation.ZW.m128d_f64[0] = (pTVar17->Translation).ZW.m128d_f64[0];
    local_678.Translation.ZW.m128d_f64[1] = (pTVar17->Translation).ZW.m128d_f64[1];
    local_678.Scale3D.XY.m128d_f64[0] = (pTVar17->Scale3D).XY.m128d_f64[0];
    local_678.Scale3D.XY.m128d_f64[1] = (pTVar17->Scale3D).XY.m128d_f64[1];
    local_678.Scale3D.ZW.m128d_f64[0] = (pTVar17->Scale3D).ZW.m128d_f64[0];
    local_678.Scale3D.ZW.m128d_f64[1] = (pTVar17->Scale3D).ZW.m128d_f64[1];
    if (local_790.BonesRequired.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_790.BonesRequired.AllocatorInstance.Data);
    }
    if (local_790.PoseCurves.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_790.PoseCurves.AllocatorInstance.Data);
    }
    local_848 = 0;
    local_748.bExtractRootMotion = false;
    local_748.DeltaTimeRecord.bPreviousIsValid = false;
    local_748.DeltaTimeRecord._9_3_ = 0;
    local_850 = 0;
    local_748.DeltaTimeRecord.Delta = 0.0;
    local_748.DeltaTimeRecord.Previous = 0.0;
    local_748.bLooping = false;
    local_748.PoseCurves.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_748.PoseCurves.ArrayNum = 0;
    local_748.PoseCurves.ArrayMax = 0;
    local_748.BonesRequired.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_748.BonesRequired.ArrayNum = 0;
    local_748.BonesRequired.ArrayMax = 0;
    local_748.InterpolationOverride.bIsSet = false;
    local_748.CurrentTime = dVar24;
    pTVar17 = UAnimSequence::ExtractRootTrackTransform
                        (this_02,&local_198,&local_748,(FBoneContainer *)0x0);
    dVar24 = (pTVar17->Rotation).XY.m128d_f64[1];
    (param_2->OutPoseTransform).Rotation.XY.m128d_f64[0] = (pTVar17->Rotation).XY.m128d_f64[0];
    (param_2->OutPoseTransform).Rotation.XY.m128d_f64[1] = dVar24;
    dVar24 = (pTVar17->Rotation).ZW.m128d_f64[1];
    (param_2->OutPoseTransform).Rotation.ZW.m128d_f64[0] = (pTVar17->Rotation).ZW.m128d_f64[0];
    (param_2->OutPoseTransform).Rotation.ZW.m128d_f64[1] = dVar24;
    dVar24 = (pTVar17->Translation).XY.m128d_f64[1];
    (param_2->OutPoseTransform).Translation.XY.m128d_f64[0] = (pTVar17->Translation).XY.m128d_f64[0]
    ;
    (param_2->OutPoseTransform).Translation.XY.m128d_f64[1] = dVar24;
    dVar24 = (pTVar17->Translation).ZW.m128d_f64[1];
    (param_2->OutPoseTransform).Translation.ZW.m128d_f64[0] = (pTVar17->Translation).ZW.m128d_f64[0]
    ;
    (param_2->OutPoseTransform).Translation.ZW.m128d_f64[1] = dVar24;
    dVar24 = (pTVar17->Scale3D).XY.m128d_f64[1];
    (param_2->OutPoseTransform).Scale3D.XY.m128d_f64[0] = (pTVar17->Scale3D).XY.m128d_f64[0];
    (param_2->OutPoseTransform).Scale3D.XY.m128d_f64[1] = dVar24;
    dVar24 = (pTVar17->Scale3D).ZW.m128d_f64[1];
    (param_2->OutPoseTransform).Scale3D.ZW.m128d_f64[0] = (pTVar17->Scale3D).ZW.m128d_f64[0];
    (param_2->OutPoseTransform).Scale3D.ZW.m128d_f64[1] = dVar24;
    FVar19.Data = local_748.PoseCurves.AllocatorInstance.Data;
    if (local_748.BonesRequired.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_748.BonesRequired.AllocatorInstance.Data);
      FVar19.Data = local_748.PoseCurves.AllocatorInstance.Data;
    }
  }
  else {
    pFVar16 = FAnimationPoseData::GetPose(param_1);
    lVar21 = *(longlong *)&pFVar16->field_0x10;
    if (((this->TempRootBoneIndex).bIsSet == false) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar10)) {
      pcVar3 = (code *)swi(3);
      uVar11 = (*pcVar3)();
      return (bool)uVar11;
    }
    uVar18 = (this->TempRootBoneIndex).TypedValue;
    if (((int)uVar18 < 0) || (*(int *)(lVar21 + 0x88) <= (int)uVar18)) {
      bVar10 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<8192494858347217512>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\BoneContainer.h"
                          ,0x268,"SkeletonToCompactPose.IsValidIndex(SkeletonIndex)");
      if (bVar10) {
        pcVar3 = (code *)swi(3);
        uVar11 = (*pcVar3)();
        return (bool)uVar11;
      }
      uVar18 = 0xffffffff;
    }
    else {
      uVar41 = 0;
      if ((int)uVar18 < *(int *)(lVar21 + 0x88)) {
        uVar41 = ~uVar18 >> 0x1f;
      }
      if ((uVar41 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar3 = (code *)swi(3);
        uVar11 = (*pcVar3)();
        return (bool)uVar11;
      }
      uVar18 = *(uint *)(*(longlong *)(lVar21 + 0x80) + (longlong)(int)uVar18 * 4);
    }
    local_868 = 0;
    local_820 = 0;
    local_814 = 0;
    local_870 = 0;
    local_81c = 0;
    local_810 = 0;
    local_808 = (FScriptContainerElement *)0x0;
    local_800 = 0;
    local_7f8 = (void *)0x0;
    local_7f0 = 0;
    local_7e7 = 0;
    local_828 = dVar25;
    (**(code **)(this_02->_padding_ + 0x330))(this_02,param_1,&local_828);
    local_830 = FAnimationPoseData::GetPose(param_1);
    uVar41 = 0;
    if ((int)uVar18 < *(int *)&local_830->field_0x8) {
      uVar41 = ~uVar18 >> 0x1f;
    }
    if ((uVar41 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar3 = (code *)swi(3);
      uVar11 = (*pcVar3)();
      return (bool)uVar11;
    }
    lVar20 = (longlong)(int)uVar18 * 0x60;
    lVar21 = *(longlong *)local_830;
    local_678.Rotation.XY.m128d_f64[0] = *(double *)(lVar20 + lVar21);
    local_678.Rotation.XY.m128d_f64[1] = ((double *)(lVar20 + lVar21))[1];
    pdVar1 = (double *)(lVar20 + 0x10 + lVar21);
    local_678.Rotation.ZW.m128d_f64[0] = *pdVar1;
    local_678.Rotation.ZW.m128d_f64[1] = pdVar1[1];
    pdVar1 = (double *)(lVar20 + 0x20 + lVar21);
    local_678.Translation.XY.m128d_f64[0] = *pdVar1;
    local_678.Translation.XY.m128d_f64[1] = pdVar1[1];
    pdVar1 = (double *)(lVar20 + 0x30 + lVar21);
    local_678.Translation.ZW.m128d_f64[0] = *pdVar1;
    local_678.Translation.ZW.m128d_f64[1] = pdVar1[1];
    pdVar1 = (double *)(lVar20 + 0x40 + lVar21);
    local_678.Scale3D.XY.m128d_f64[0] = *pdVar1;
    local_678.Scale3D.XY.m128d_f64[1] = pdVar1[1];
    pdVar1 = (double *)(lVar20 + 0x50 + lVar21);
    local_678.Scale3D.ZW.m128d_f64[0] = *pdVar1;
    local_678.Scale3D.ZW.m128d_f64[1] = pdVar1[1];
    local_828 = dVar24;
    (**(code **)(this_02->_padding_ + 0x330))(this_02,param_1,&local_828);
    pFVar16 = FAnimationPoseData::GetPose(param_1);
    uVar41 = 0;
    if ((int)uVar18 < *(int *)&pFVar16->field_0x8) {
      uVar41 = ~uVar18 >> 0x1f;
    }
    if ((uVar41 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar3 = (code *)swi(3);
      uVar11 = (*pcVar3)();
      return (bool)uVar11;
    }
    lVar21 = *(longlong *)pFVar16;
    dVar24 = ((double *)(lVar21 + lVar20))[1];
    (param_2->OutPoseTransform).Rotation.XY.m128d_f64[0] = *(double *)(lVar21 + lVar20);
    (param_2->OutPoseTransform).Rotation.XY.m128d_f64[1] = dVar24;
    pdVar1 = (double *)(lVar21 + 0x10 + lVar20);
    dVar24 = pdVar1[1];
    (param_2->OutPoseTransform).Rotation.ZW.m128d_f64[0] = *pdVar1;
    (param_2->OutPoseTransform).Rotation.ZW.m128d_f64[1] = dVar24;
    pdVar1 = (double *)(lVar21 + 0x20 + lVar20);
    dVar24 = pdVar1[1];
    (param_2->OutPoseTransform).Translation.XY.m128d_f64[0] = *pdVar1;
    (param_2->OutPoseTransform).Translation.XY.m128d_f64[1] = dVar24;
    pdVar1 = (double *)(lVar21 + 0x30 + lVar20);
    dVar24 = pdVar1[1];
    (param_2->OutPoseTransform).Translation.ZW.m128d_f64[0] = *pdVar1;
    (param_2->OutPoseTransform).Translation.ZW.m128d_f64[1] = dVar24;
    pdVar1 = (double *)(lVar21 + 0x40 + lVar20);
    dVar24 = pdVar1[1];
    (param_2->OutPoseTransform).Scale3D.XY.m128d_f64[0] = *pdVar1;
    (param_2->OutPoseTransform).Scale3D.XY.m128d_f64[1] = dVar24;
    pdVar1 = (double *)(lVar21 + 0x50 + lVar20);
    dVar24 = pdVar1[1];
    (param_2->OutPoseTransform).Scale3D.ZW.m128d_f64[0] = *pdVar1;
    (param_2->OutPoseTransform).Scale3D.ZW.m128d_f64[1] = dVar24;
    FVar19.Data = local_808;
    if (local_7f8 != (void *)0x0) {
      FMemory::Free(local_7f8);
      FVar19.Data = local_808;
    }
  }
  if (FVar19.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar19.Data);
  }
  pTVar9 = CVarStartTransformOffsetInBoneSpace.Ref;
  if (param_2->bOutIsAdditive == false) {
    bVar10 = IsInParallelGameThread();
    if (((!bVar10) && (bVar10 = IsInGameThread(), !bVar10)) &&
       (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<6409875433831007945>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                            ,0x6c9,"GetShadowIndex() == 0"), bVar10)) {
      pcVar3 = (code *)swi(3);
      uVar11 = (*pcVar3)();
      return (bool)uVar11;
    }
    if (pTVar9->ShadowedValue[0] == false) {
      local_258.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_258.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
      local_258.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_258.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
      local_258.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_258.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
      local_258.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_258.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
      local_258.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_258.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
      local_258.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_258.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
      UE::Math::TTransform<double>::Multiply(&local_258,&param_2->OutPoseTransform,&local_438);
      local_4f8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_4f8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
      local_4f8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_4f8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
      local_4f8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_4f8.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
      local_4f8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_4f8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
      local_4f8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_4f8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
      local_4f8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_4f8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
      UE::Math::TTransform<double>::Multiply(&local_4f8,&local_258,&local_3d8);
      (param_2->OutTransform).Rotation.XY.m128d_f64[0] = local_4f8.Rotation.XY.m128d_f64[0];
      (param_2->OutTransform).Rotation.XY.m128d_f64[1] = local_4f8.Rotation.XY.m128d_f64[1];
      (param_2->OutTransform).Rotation.ZW.m128d_f64[0] = local_4f8.Rotation.ZW.m128d_f64[0];
      (param_2->OutTransform).Rotation.ZW.m128d_f64[1] = local_4f8.Rotation.ZW.m128d_f64[1];
      (param_2->OutTransform).Translation.XY.m128d_f64[0] = local_4f8.Translation.XY.m128d_f64[0];
      (param_2->OutTransform).Translation.XY.m128d_f64[1] = local_4f8.Translation.XY.m128d_f64[1];
      (param_2->OutTransform).Translation.ZW.m128d_f64[0] = local_4f8.Translation.ZW.m128d_f64[0];
      (param_2->OutTransform).Translation.ZW.m128d_f64[1] = local_4f8.Translation.ZW.m128d_f64[1];
      dVar24 = local_4f8.Scale3D.XY.m128d_f64[0];
      dVar25 = local_4f8.Scale3D.XY.m128d_f64[1];
      dVar31 = local_4f8.Scale3D.ZW.m128d_f64[0];
      dVar36 = local_4f8.Scale3D.ZW.m128d_f64[1];
    }
    else {
      local_318.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_318.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
      pTVar17 = &local_318;
      local_318.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_318.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
      local_318.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_318.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
      local_318.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_318.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
      local_318.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_318.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
      local_318.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_318.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
      UE::Math::TTransform<double>::Multiply(pTVar17,&local_678,&local_3d8);
      auVar33._8_8_ = local_678.Scale3D.XY.m128d_f64[1];
      auVar33._0_8_ = local_678.Scale3D.XY.m128d_f64[0];
      uVar41 = (uint)((ulonglong)local_678.Scale3D.ZW.m128d_f64[0] >> 0x20);
      auVar37._0_8_ =
           (double)CONCAT44(uVar41 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(local_678.Scale3D.ZW.m128d_f64[0],0) &
                            (uint)__xmm_7fffffffffffffff7fffffffffffffff);
      auVar37._8_4_ = SUB84(local_678.Scale3D.ZW.m128d_f64[1],0) & _UNK_15061cc88;
      auVar37._12_4_ = (uint)((ulonglong)local_678.Scale3D.ZW.m128d_f64[1] >> 0x20) & _UNK_15061cc8c
      ;
      uVar60 = SUB84(local_678.Scale3D.XY.m128d_f64[0],0) &
               (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar61 = (uint)((ulonglong)local_678.Scale3D.XY.m128d_f64[0] >> 0x20) &
               __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      uVar62 = SUB84(local_678.Scale3D.XY.m128d_f64[1],0) & _UNK_15061cc88;
      uVar63 = (uint)((ulonglong)local_678.Scale3D.XY.m128d_f64[1] >> 0x20) & _UNK_15061cc8c;
      auVar32._8_8_ =
           -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[3] < auVar37._8_8_);
      auVar32._0_8_ =
           -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[2] < auVar37._0_8_);
      uVar18 = movmskpd((int)pTVar17,auVar32);
      auVar48._8_8_ =
           -(ulonglong)
            ((double)GlobalVectorConstants::SmallNumber.m128_f32[1] <
            (double)CONCAT44(uVar63,uVar62));
      auVar48._0_8_ =
           -(ulonglong)
            ((double)GlobalVectorConstants::SmallNumber.m128_f32[0] <
            (double)CONCAT44(uVar61,uVar60));
      iVar12 = movmskpd(extraout_EAX,auVar48);
      if ((uVar18 & 0x3fffffff) == 0 && iVar12 == 0) {
        local_5b8.Rotation.XY.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
        local_5b8.Rotation.ZW.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
        local_5b8.Translation.XY.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
        local_5b8.Translation.ZW.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
        local_5b8.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64
        ;
        local_5b8.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64
        ;
      }
      else {
        dVar36 = local_678.Rotation.ZW.m128d_f64[0] *
                 GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
        dVar26 = local_678.Rotation.ZW.m128d_f64[1] *
                 GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
        uVar56 = SUB84(dVar26,0);
        uVar57 = (undefined4)((ulonglong)dVar26 >> 0x20);
        lVar21 = -(ulonglong)
                  ((double)CONCAT44(uVar41 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                    SUB84(local_678.Scale3D.ZW.m128d_f64[0],0) &
                                    (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
                  (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
        auVar33 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar33);
        auVar52._8_4_ = uVar56;
        auVar52._0_8_ = dVar36;
        auVar52._12_4_ = uVar57;
        lVar20 = -(ulonglong)
                  ((double)CONCAT44(uVar61,uVar60) <=
                  (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
        lVar22 = -(ulonglong)
                  ((double)CONCAT44(uVar63,uVar62) <=
                  (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
        local_5b8.Scale3D.XY.m128d_f64[0]._0_4_ = ~(uint)lVar20 & auVar33._0_4_;
        local_5b8.Scale3D.XY.m128d_f64[0]._4_4_ = ~(uint)((ulonglong)lVar20 >> 0x20) & auVar33._4_4_
        ;
        local_5b8.Scale3D.XY.m128d_f64[1]._0_4_ = ~(uint)lVar22 & auVar33._8_4_;
        local_5b8.Scale3D.XY.m128d_f64[1]._4_4_ =
             ~(uint)((ulonglong)lVar22 >> 0x20) & auVar33._12_4_;
        auVar4._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
        auVar4._0_8_ = local_678.Scale3D.ZW.m128d_f64[0];
        auVar4._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
        auVar33 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar4);
        auVar50._0_8_ =
             (double)CONCAT44(local_5b8.Scale3D.XY.m128d_f64[0]._4_4_,
                              local_5b8.Scale3D.XY.m128d_f64[0]._0_4_);
        auVar50._8_4_ = local_5b8.Scale3D.XY.m128d_f64[1]._0_4_;
        auVar50._12_4_ = local_5b8.Scale3D.XY.m128d_f64[1]._4_4_;
        dVar49 = auVar50._0_8_ * local_678.Translation.XY.m128d_f64[0];
        dVar51 = auVar50._8_8_ * local_678.Translation.XY.m128d_f64[1];
        dVar7 = local_678.Rotation.XY.m128d_f64[0] *
                GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
        dVar8 = local_678.Rotation.XY.m128d_f64[1] *
                GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
        uVar58 = SUB84(dVar8,0);
        uVar59 = (undefined4)((ulonglong)dVar8 >> 0x20);
        local_5b8.Scale3D.ZW.m128d_f64[0] =
             (double)CONCAT44(~(uint)((ulonglong)lVar21 >> 0x20) & auVar33._4_4_,
                              ~(uint)lVar21 & auVar33._0_4_);
        auVar38._8_4_ = uVar58;
        auVar38._0_8_ = dVar7;
        auVar38._12_4_ = uVar59;
        dVar42 = auVar38._8_8_;
        dVar31 = local_5b8.Scale3D.ZW.m128d_f64[0] * local_678.Translation.ZW.m128d_f64[0];
        dVar24 = local_678.Translation.ZW.m128d_f64[1] * 0.0;
        auVar27._8_4_ = SUB84(dVar36,0);
        auVar27._0_8_ = dVar42;
        auVar27._12_4_ = (int)((ulonglong)dVar36 >> 0x20);
        auVar53._8_4_ = SUB84(dVar51,0);
        auVar53._0_8_ = dVar49;
        uVar45 = (undefined4)((ulonglong)dVar51 >> 0x20);
        auVar53._12_4_ = uVar45;
        auVar47._8_4_ = uVar58;
        auVar47._0_8_ = dVar7;
        auVar47._12_4_ = uVar59;
        auVar6._8_4_ = uVar56;
        auVar6._0_8_ = dVar36;
        auVar6._12_4_ = uVar57;
        auVar48 = blendpd(auVar47,auVar6,2);
        auVar54._0_8_ = auVar53._8_8_ * dVar7 - dVar42 * dVar49;
        auVar54._8_8_ = dVar31 * dVar8 - auVar27._8_8_ * dVar51;
        auVar34._8_4_ = SUB84(dVar51,0);
        auVar34._0_8_ = dVar49;
        auVar34._12_4_ = uVar45;
        auVar5._8_4_ = SUB84(dVar24,0);
        auVar5._0_8_ = dVar31;
        auVar5._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
        auVar33 = blendpd(auVar34,auVar5,2);
        auVar35._0_8_ = auVar33._0_8_ * dVar36 - auVar48._0_8_ * dVar31;
        auVar35._8_8_ = auVar33._8_8_ * dVar26 - auVar48._8_8_ * dVar24;
        dVar24 = auVar54._8_8_ + auVar54._8_8_;
        dVar25 = auVar35._0_8_ + auVar35._0_8_;
        uVar45 = SUB84(dVar25,0);
        uVar46 = (undefined4)((ulonglong)dVar25 >> 0x20);
        auVar33 = blendpd(auVar54,auVar35,2);
        auVar55._0_8_ = auVar33._0_8_ + auVar33._0_8_;
        auVar55._8_8_ = auVar33._8_8_ + auVar33._8_8_;
        auVar43._8_4_ = uVar45;
        auVar43._0_8_ = dVar24;
        auVar43._12_4_ = uVar46;
        auVar28._8_4_ = uVar45;
        auVar28._0_8_ = dVar24;
        auVar28._12_4_ = uVar46;
        auVar39._8_4_ = uVar45;
        auVar39._0_8_ = dVar24;
        auVar39._12_4_ = uVar46;
        auVar33 = blendpd(auVar39,auVar55,2);
        auVar44._0_8_ = auVar43._8_8_ * dVar7 - dVar24 * dVar42;
        auVar44._8_8_ = auVar55._0_8_ * dVar8 - auVar28._8_8_ * dVar36;
        auVar29._8_4_ = SUB84(auVar55._8_8_,0);
        auVar29._0_8_ = auVar55._0_8_;
        auVar29._12_4_ = (int)((ulonglong)auVar55._8_8_ >> 0x20);
        auVar40._0_8_ = auVar33._0_8_ * dVar36 - auVar55._0_8_ * auVar48._0_8_;
        auVar40._8_8_ = auVar33._8_8_ * dVar26 - auVar29._8_8_ * auVar48._8_8_;
        auVar30._8_4_ = SUB84(auVar44._8_8_,0);
        auVar30._0_8_ = auVar44._0_8_;
        auVar30._12_4_ = (int)((ulonglong)auVar44._8_8_ >> 0x20);
        auVar33 = blendpd(auVar44,auVar40,2);
        local_5b8.Rotation.XY.m128d_f64[1]._0_4_ = uVar58;
        local_5b8.Rotation.XY.m128d_f64[0] = dVar7;
        local_5b8.Rotation.XY.m128d_f64[1]._4_4_ = uVar59;
        local_5b8.Rotation.ZW.m128d_f64[1]._0_4_ = uVar56;
        local_5b8.Rotation.ZW.m128d_f64[0] = dVar36;
        local_5b8.Rotation.ZW.m128d_f64[1]._4_4_ = uVar57;
        local_5b8.Translation.ZW.m128d_f64[1] = 0.0;
        local_5b8.Translation.ZW.m128d_f64[0] =
             0.0 - (auVar55._0_8_ * auVar52._8_8_ + dVar31 + auVar33._0_8_);
        local_5b8.Scale3D.ZW.m128d_f64[1] = 0.0;
        local_5b8.Translation.XY.m128d_f64[1] = 0.0 - (dVar25 * dVar26 + dVar51 + auVar40._0_8_);
        local_5b8.Translation.XY.m128d_f64[0] =
             0.0 - (dVar24 * auVar52._8_8_ + dVar49 + auVar30._8_8_);
      }
      local_378.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_378.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
      local_378.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_378.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
      local_378.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_378.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
      local_378.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_378.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
      local_378.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_378.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
      local_378.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_378.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
      UE::Math::TTransform<double>::Multiply(&local_378,&param_2->OutPoseTransform,&local_5b8);
      local_2b8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_2b8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
      local_2b8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_2b8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
      local_2b8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_2b8.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
      local_2b8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_2b8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
      local_2b8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_2b8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
      local_2b8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_2b8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
      UE::Math::TTransform<double>::Multiply(&local_2b8,&local_378,&local_438);
      local_558.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_558.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
      local_558.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_558.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
      local_558.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_558.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
      local_558.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_558.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
      local_558.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_558.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
      local_558.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_558.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
      UE::Math::TTransform<double>::Multiply(&local_558,&local_2b8,&local_318);
      (param_2->OutTransform).Rotation.XY.m128d_f64[0] = local_558.Rotation.XY.m128d_f64[0];
      (param_2->OutTransform).Rotation.XY.m128d_f64[1] = local_558.Rotation.XY.m128d_f64[1];
      (param_2->OutTransform).Rotation.ZW.m128d_f64[0] = local_558.Rotation.ZW.m128d_f64[0];
      (param_2->OutTransform).Rotation.ZW.m128d_f64[1] = local_558.Rotation.ZW.m128d_f64[1];
      (param_2->OutTransform).Translation.XY.m128d_f64[0] = local_558.Translation.XY.m128d_f64[0];
      (param_2->OutTransform).Translation.XY.m128d_f64[1] = local_558.Translation.XY.m128d_f64[1];
      (param_2->OutTransform).Translation.ZW.m128d_f64[0] = local_558.Translation.ZW.m128d_f64[0];
      (param_2->OutTransform).Translation.ZW.m128d_f64[1] = local_558.Translation.ZW.m128d_f64[1];
      dVar24 = local_558.Scale3D.XY.m128d_f64[0];
      dVar25 = local_558.Scale3D.XY.m128d_f64[1];
      dVar31 = local_558.Scale3D.ZW.m128d_f64[0];
      dVar36 = local_558.Scale3D.ZW.m128d_f64[1];
    }
    (param_2->OutTransform).Scale3D.XY.m128d_f64[0] = dVar24;
    (param_2->OutTransform).Scale3D.XY.m128d_f64[1] = dVar25;
    (param_2->OutTransform).Scale3D.ZW.m128d_f64[0] = dVar31;
    (param_2->OutTransform).Scale3D.ZW.m128d_f64[1] = dVar36;
    pTVar17 = UE::Math::TTransform<double>::GetRelativeTransformReverse
                        (&local_438,&local_138,&param_2->OutTransform);
    dVar24 = (pTVar17->Rotation).XY.m128d_f64[1];
    (param_2->OutParentTransform).Rotation.XY.m128d_f64[0] = (pTVar17->Rotation).XY.m128d_f64[0];
    (param_2->OutParentTransform).Rotation.XY.m128d_f64[1] = dVar24;
    dVar24 = (pTVar17->Rotation).ZW.m128d_f64[1];
    (param_2->OutParentTransform).Rotation.ZW.m128d_f64[0] = (pTVar17->Rotation).ZW.m128d_f64[0];
    (param_2->OutParentTransform).Rotation.ZW.m128d_f64[1] = dVar24;
    dVar24 = (pTVar17->Translation).XY.m128d_f64[1];
    (param_2->OutParentTransform).Translation.XY.m128d_f64[0] =
         (pTVar17->Translation).XY.m128d_f64[0];
    (param_2->OutParentTransform).Translation.XY.m128d_f64[1] = dVar24;
    dVar24 = (pTVar17->Translation).ZW.m128d_f64[1];
    (param_2->OutParentTransform).Translation.ZW.m128d_f64[0] =
         (pTVar17->Translation).ZW.m128d_f64[0];
    (param_2->OutParentTransform).Translation.ZW.m128d_f64[1] = dVar24;
    dVar24 = (pTVar17->Scale3D).XY.m128d_f64[1];
    (param_2->OutParentTransform).Scale3D.XY.m128d_f64[0] = (pTVar17->Scale3D).XY.m128d_f64[0];
    (param_2->OutParentTransform).Scale3D.XY.m128d_f64[1] = dVar24;
    dVar24 = (pTVar17->Scale3D).ZW.m128d_f64[1];
    (param_2->OutParentTransform).Scale3D.ZW.m128d_f64[0] = (pTVar17->Scale3D).ZW.m128d_f64[0];
    (param_2->OutParentTransform).Scale3D.ZW.m128d_f64[1] = dVar24;
  }
  return true;
}

// GetRootMotionVelocity @ 14679adc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UMovieSceneSkeletalAnimationSection::GetRootMotionVelocity
          (UMovieSceneSkeletalAnimationSection *this,FFrameTime param_1,FFrameTime param_2,
          FFrameRate param_3,TTransform<double> *param_4,float *param_5)

{
  UAnimSequence *this_00;
  double dVar1;
  double dVar2;
  bool bVar3;
  UClass *pUVar4;
  TTransform<double> *pTVar5;
  float fVar6;
  undefined1 auStackY_138 [32];
  float local_108 [4];
  undefined4 local_f8;
  FAnimExtractContext local_f0;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_138;
  if ((this->Params).Animation.field0_0x0.DebugPtr != (UAnimSequenceBase *)0x0) {
    pUVar4 = Z_Construct_UClass_UAnimSequence_NoRegister();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)&this->Params,pUVar4);
    if ((bVar3) &&
       (this_00 = (UAnimSequence *)(this->Params).Animation.field0_0x0.DebugPtr,
       this_00 != (UAnimSequence *)0x0)) {
      local_108[0] = 1.0;
      FMovieSceneFloatChannel::Evaluate(&(this->Params).Weight,param_2,local_108);
      fVar6 = UMovieSceneSection::EvaluateEasing((UMovieSceneSection *)this,param_2);
      *param_5 = fVar6 * local_108[0];
      dVar1 = MapTimeToAnimation(this,param_1,param_3);
      local_f0.bLooping = false;
      local_f8 = 0;
      local_f0.bExtractRootMotion = false;
      local_f0.DeltaTimeRecord.bPreviousIsValid = false;
      local_f0.DeltaTimeRecord._9_3_ = 0;
      local_f0.PoseCurves.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_f0.PoseCurves.ArrayNum = 0;
      local_f0.PoseCurves.ArrayMax = 0;
      local_f0.BonesRequired.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_f0.BonesRequired.ArrayNum = 0;
      local_f0.BonesRequired.ArrayMax = 0;
      local_f0.InterpolationOverride.bIsSet = false;
      local_f0.CurrentTime = 0.0;
      local_f0.DeltaTimeRecord.Delta = 0.0;
      local_f0.DeltaTimeRecord.Previous = 0.0;
      dVar2 = MapTimeToAnimation(this,param_2,param_3);
      pTVar5 = UAnimSequence::ExtractRootMotionFromRange
                         (this_00,&local_a8,(double)(float)dVar1,(double)(float)dVar2,&local_f0);
      dVar1 = (pTVar5->Rotation).XY.m128d_f64[1];
      (param_4->Rotation).XY.m128d_f64[0] = (pTVar5->Rotation).XY.m128d_f64[0];
      (param_4->Rotation).XY.m128d_f64[1] = dVar1;
      dVar1 = (pTVar5->Rotation).ZW.m128d_f64[1];
      (param_4->Rotation).ZW.m128d_f64[0] = (pTVar5->Rotation).ZW.m128d_f64[0];
      (param_4->Rotation).ZW.m128d_f64[1] = dVar1;
      dVar1 = (pTVar5->Translation).XY.m128d_f64[1];
      (param_4->Translation).XY.m128d_f64[0] = (pTVar5->Translation).XY.m128d_f64[0];
      (param_4->Translation).XY.m128d_f64[1] = dVar1;
      dVar1 = (pTVar5->Translation).ZW.m128d_f64[1];
      (param_4->Translation).ZW.m128d_f64[0] = (pTVar5->Translation).ZW.m128d_f64[0];
      (param_4->Translation).ZW.m128d_f64[1] = dVar1;
      dVar1 = (pTVar5->Scale3D).XY.m128d_f64[1];
      (param_4->Scale3D).XY.m128d_f64[0] = (pTVar5->Scale3D).XY.m128d_f64[0];
      (param_4->Scale3D).XY.m128d_f64[1] = dVar1;
      dVar1 = (pTVar5->Scale3D).ZW.m128d_f64[1];
      (param_4->Scale3D).ZW.m128d_f64[0] = (pTVar5->Scale3D).ZW.m128d_f64[0];
      (param_4->Scale3D).ZW.m128d_f64[1] = dVar1;
      if (local_f0.BonesRequired.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f0.BonesRequired.AllocatorInstance.Data);
      }
      if (local_f0.PoseCurves.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f0.PoseCurves.AllocatorInstance.Data);
      }
      return true;
    }
  }
  return false;
}

// GetSnapTimes @ 14679b070

void __thiscall
UMovieSceneSkeletalAnimationSection::GetSnapTimes
          (UMovieSceneSkeletalAnimationSection *this,
          TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *param_1,bool param_2)

{
  UAnimSequenceBase *pUVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  UClass *pUVar5;
  UObject *pUVar6;
  uint uVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 in_XMM2 [16];
  undefined1 auVar11 [16];
  FFrameTime local_res8;
  FFrameTime local_res20;
  TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *local_c0;
  FFrameRate local_b8;
  TOptional<FFrameTime> local_b0;
  code *local_a0;
  TArray<FFrameNumber,TSizedDefaultAllocator<32>_> **local_98;
  FMovieSceneSequenceTransform local_90;
  TRange<FFrameNumber> local_70;
  FMovieSceneInverseSequenceTransform local_60;
  
  UMovieSceneSection::GetSnapTimes((UMovieSceneSection *)this,param_1,param_2);
  pUVar5 = Z_Construct_UClass_UMovieScene_NoRegister();
  pUVar6 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar5);
  local_res20.FrameNumber.Value = (int)((ulonglong)*(undefined8 *)&this->field_0xb0 >> 0x20);
  cVar4 = (char)*(undefined8 *)&this->field_0xb0;
  if (cVar4 != '\x01') {
    if (cVar4 == '\x02') {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type != ERangeBoundTypes::Open",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                         ,99,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_res20.FrameNumber.Value = local_res20.FrameNumber.Value + 1;
  }
  uVar7 = (uint)((ulonglong)*(undefined8 *)&this->field_0xb8 >> 0x20);
  cVar4 = (char)*(undefined8 *)&this->field_0xb8;
  if (cVar4 == '\x01') {
    uVar7 = uVar7 + 1;
  }
  else if (cVar4 == '\x02') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Type != ERangeBoundTypes::Open",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                       ,99,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (pUVar6 != (UObject *)0x0) {
    local_70.LowerBound.Type.Value = this->field_0xb0;
    local_70.LowerBound._1_3_ = *(undefined3 *)&this->field_0xb1;
    local_70.LowerBound.Value.Value = *(int *)&this->field_0xb4;
    local_70.UpperBound.Type.Value = this->field_0xb8;
    local_70.UpperBound._1_3_ = *(undefined3 *)&this->field_0xb9;
    local_70.UpperBound.Value.Value = *(int *)&this->field_0xbc;
    local_b8.Numerator = *(int *)&pUVar6[7].field_0x20;
    local_b8.Denominator = *(int *)&pUVar6[7].field_0x24;
    local_c0 = param_1;
    FMovieSceneSkeletalAnimationParams::MakeTransform
              (&this->Params,&local_90,&local_b8,&local_70,(UAnimSequenceBase *)0x0,true,false);
    local_98 = &local_c0;
    local_res8.SubFrame = 0.0;
    local_res8.FrameNumber.Value = uVar7;
    local_res20.SubFrame = 0.0;
    local_a0 = UE::Core::Private::Function::
               TFunctionRefCaller<`UMovieSceneSkeletalAnimationSection::GetSnapTimes'::__l2::<lambda_1>,bool,FFrameTime>
               ::Call;
    bVar3 = FMovieSceneSequenceTransform::ExtractBoundariesWithinRange
                      (&local_90,local_res20,local_res8,
                       (TFunctionRef<bool___cdecl(FFrameTime)> *)&local_a0);
    if (!bVar3) {
      FMovieSceneSequenceTransform::Inverse(&local_90,&local_60);
      pUVar1 = (this->Params).Animation.field0_0x0.DebugPtr;
      if (pUVar1 == (UAnimSequenceBase *)0x0) {
        fVar8 = 0.0;
      }
      else {
        fVar8 = (float)(**(code **)(pUVar1->_padding_ + 0x2c0))();
      }
      auVar11._8_8_ = 0;
      auVar11._0_8_ = (double)fVar8;
      auVar11 = roundpd(in_XMM2,auVar11,1);
      uVar9 = auVar11._0_4_;
      uVar10 = auVar11._4_4_;
      if (__real_41dfffffffc00000 <= auVar11._0_8_) {
        uVar9 = SUB84(__real_41dfffffffc00000,0);
        uVar10 = (undefined4)((ulonglong)__real_41dfffffffc00000 >> 0x20);
      }
      local_res8.SubFrame = (float)((double)fVar8 - auVar11._0_8_);
      if ((double)CONCAT44(uVar10,uVar9) <= __real_c1e0000000000000) {
        uVar9 = SUB84(__real_c1e0000000000000,0);
        uVar10 = (undefined4)((ulonglong)__real_c1e0000000000000 >> 0x20);
      }
      if (::FFrameTime::MaxSubframe <= local_res8.SubFrame) {
        local_res8.SubFrame = ::FFrameTime::MaxSubframe;
      }
      if (local_res8.SubFrame <= 0.0) {
        local_res8.SubFrame = 0.0;
      }
      if (::FFrameTime::MaxSubframe <= local_res8.SubFrame) {
        local_res8.SubFrame = ::FFrameTime::MaxSubframe;
      }
      if (local_res8.SubFrame <= 0.0) {
        local_res8.SubFrame = 0.0;
      }
      local_res8.FrameNumber.Value = (int)(double)CONCAT44(uVar10,uVar9);
      FMovieSceneInverseSequenceTransform::TryTransformTime(&local_60,&local_b0,local_res8);
      if (local_b0.bIsSet != false) {
        if ((local_b0.TypedValue.FrameNumber.Value.Value < (int)uVar7) ||
           ((local_b0.TypedValue.FrameNumber.Value.Value == uVar7 &&
            (local_res8.SubFrame = local_b0.TypedValue.SubFrame, local_res8.SubFrame < 0.0)))) {
          `UMovieSceneSkeletalAnimationSection::GetSnapTimes'::__l2::<lambda_1>::operator()
                    (&local_c0,local_b0.TypedValue);
        }
      }
      if (local_60.NestedTransforms.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.NestedTransforms.AllocatorInstance.Data);
      }
    }
    DestructItems<FMovieSceneNestedSequenceTransform,int>
              ((FMovieSceneNestedSequenceTransform *)
               local_90.NestedTransforms.AllocatorInstance.Data,local_90.NestedTransforms.ArrayNum);
    if ((FMovieSceneNestedSequenceTransform *)local_90.NestedTransforms.AllocatorInstance.Data !=
        (FMovieSceneNestedSequenceTransform *)0x0) {
      FMemory::Free(local_90.NestedTransforms.AllocatorInstance.Data);
    }
  }
  return;
}

// GetSourceObject @ 14679b3c0

UObject * __thiscall
UMovieSceneSkeletalAnimationSection::GetSourceObject(UMovieSceneSkeletalAnimationSection *this)

{
  return (UObject *)(this->Params).Animation.field0_0x0.DebugPtr;
}

// GetTimeWarp @ 14679bac0

FMovieSceneTimeWarpVariant * __thiscall
UMovieSceneSkeletalAnimationSection::GetTimeWarp(UMovieSceneSkeletalAnimationSection *this)

{
  return &(this->Params).PlayRate;
}

// GetTotalWeightValue @ 14679bad0

float __thiscall
UMovieSceneSkeletalAnimationSection::GetTotalWeightValue
          (UMovieSceneSkeletalAnimationSection *this,FFrameTime param_1)

{
  float fVar1;
  float local_res8 [2];
  
  local_res8[0] = 1.0;
  FMovieSceneFloatChannel::Evaluate(&(this->Params).Weight,param_1,local_res8);
  fVar1 = UMovieSceneSection::EvaluateEasing((UMovieSceneSection *)this,param_1);
  return fVar1 * local_res8[0];
}

// ImportEntityImpl @ 1467a1490

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieSceneSkeletalAnimationSection::ImportEntityImpl
          (UMovieSceneSkeletalAnimationSection *this,UMovieSceneEntitySystemLinker *param_1,
          FEntityImportParams *param_2,FImportedEntity *param_3)

{
  float *pfVar1;
  TComponentTypeID<FMovieSceneSkeletalAnimationComponentData> TVar2;
  TComponentTypeID<FGuid> TVar3;
  TComponentTypeID<UObject_*_(__cdecl*)(UObject_*)> TVar4;
  undefined1 uVar5;
  FBuiltInComponentTypes *pFVar6;
  FMovieSceneTracksComponentTypes *pFVar7;
  ushort local_res8;
  undefined1 uStackX_a;
  undefined1 uStackX_b;
  FGuid local_d8;
  undefined **local_c8;
  TComponentTypeID<FMovieSceneSkeletalAnimationComponentData> local_c0;
  float *local_b8;
  undefined1 local_b0;
  TComponentTypeID<FGuid> local_a8;
  undefined8 local_a4;
  undefined8 uStack_9c;
  undefined1 local_94;
  TComponentTypeID<UObject_*_(__cdecl*)(UObject_*)> local_90;
  code *local_88;
  undefined1 local_80;
  undefined4 local_78;
  undefined1 *local_70;
  undefined1 local_68;
  undefined4 local_60;
  undefined1 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  TComponentTypeID<UE::MovieScene::FSourceFloatChannel> local_40;
  undefined1 uStack_3e;
  undefined1 uStack_3d;
  
  pFVar6 = UE::MovieScene::FBuiltInComponentTypes::Get();
  pFVar7 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
  UE::MovieScene::FEntityImportParams::GetObjectBindingID(param_2,&local_d8);
  pfVar1 = &this[-1].StartOffset_DEPRECATED;
  uVar5 = (**(code **)(**(longlong **)&this->field_0x8 + 0x2d0))();
  if (((local_d8.C != 0 || local_d8.B != 0) || local_d8.A != 0) || local_d8.D != 0) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pfVar1 != (float *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pfVar1);
    }
    TVar2 = pFVar7->SkeletalAnimation;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pfVar1 != (float *)0x0) {
        UE::GC::MarkAsReachable((UObject *)pfVar1);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pfVar1 != (float *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pfVar1);
      }
    }
    TVar3 = pFVar6->GenericObjectBinding;
    local_50._4_4_ = local_d8.B;
    local_50._0_4_ = local_d8.A;
    uStack_48._4_4_ = local_d8.D;
    uStack_48._0_4_ = local_d8.C;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pfVar1 != (float *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pfVar1);
    }
    TVar4 = pFVar6->BoundObjectResolver;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pfVar1 != (float *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pfVar1);
    }
    if ((*(int *)&this->field_0xc0 == 0) && (this->field_0xdc != '\x01')) {
      uStack_3e = 0;
    }
    else {
      uStack_3e = 1;
    }
    local_40 = pFVar6->WeightChannel;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pfVar1 != (float *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pfVar1);
    }
    uStackX_a = uVar5;
    local_res8 = (pFVar6->Tags).AdditiveAnimation.Value;
    local_b0 = 1;
    local_c0 = TVar2;
    local_b8 = pfVar1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pfVar1 != (float *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pfVar1);
    }
    local_88 = UMovieSceneSkeletalAnimationSystem::ResolveSkeletalMeshComponentBinding;
    local_78 = _local_40;
    local_60 = _local_res8;
    local_c8 = &
               ___7__TEntityBuilder_U__TAdd_UFMovieSceneSkeletalAnimationComponentData___MovieScene_UE__U__TAdd_UFGuid___23_U__TAdd_P6APEAVUObject__PEAV1__Z_23_U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___23_UFAddConditional_23__MovieScene_UE__6B_
    ;
    local_94 = 1;
    local_a4 = local_50;
    uStack_9c = uStack_48;
    local_80 = 1;
    local_68 = 1;
    local_58 = 0;
    local_a8 = TVar3;
    local_90 = TVar4;
    local_70 = &this->field_0x48;
    UE::MovieScene::FImportedEntity::
    AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<FMovieSceneSkeletalAnimationComponentData>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>_>
              (param_3,(TEntityBuilder<UE::MovieScene::TAdd<FMovieSceneSkeletalAnimationComponentData>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>
                        *)&local_c8);
  }
  return;
}

// MapTimeToAnimation @ 1467a7a10

double __thiscall
UMovieSceneSkeletalAnimationSection::MapTimeToAnimation
          (UMovieSceneSkeletalAnimationSection *this,FFrameTime param_1,FFrameRate param_2)

{
  float fVar1;
  code *pcVar2;
  double dVar3;
  char cVar4;
  bool bVar5;
  FMovieSceneSequenceTransform *this_00;
  FFrameTime FVar6;
  int iVar7;
  int iVar8;
  FFrameRate local_res8;
  undefined1 local_res18 [8];
  TRange<FFrameNumber> local_58;
  FMovieSceneSequenceTransform local_48;
  
  iVar7 = (int)((ulonglong)*(undefined8 *)&this->field_0xb0 >> 0x20);
  cVar4 = (char)*(undefined8 *)&this->field_0xb0;
  if (cVar4 != '\x01') {
    if (cVar4 == '\x02') {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type != ERangeBoundTypes::Open",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                         ,99,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        dVar3 = (double)(*pcVar2)();
        return dVar3;
      }
    }
    iVar7 = iVar7 + 1;
  }
  iVar8 = (int)((ulonglong)*(undefined8 *)&this->field_0xb8 >> 0x20);
  cVar4 = (char)*(undefined8 *)&this->field_0xb8;
  if (cVar4 == '\x01') {
    iVar8 = iVar8 + 1;
  }
  else if (cVar4 == '\x02') {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Type != ERangeBoundTypes::Open",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                       ,99,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      dVar3 = (double)(*pcVar2)();
      return dVar3;
    }
  }
  local_58.LowerBound.Type.Value = '\x01';
  local_58.UpperBound.Type.Value = '\0';
  local_res8 = param_2;
  local_58.LowerBound.Value.Value = iVar7;
  local_58.UpperBound.Value.Value = iVar8;
  this_00 = FMovieSceneSkeletalAnimationParams::MakeTransform
                      (&this->Params,&local_48,&local_res8,&local_58,(UAnimSequenceBase *)0x0,true,
                       false);
  FVar6 = FMovieSceneSequenceTransform::TransformTime(this_00,(FFrameTime)local_res18);
  fVar1 = *(float *)((longlong)FVar6 + 4);
  iVar7 = *(int *)FVar6;
  DestructItems<FMovieSceneNestedSequenceTransform,int>
            ((FMovieSceneNestedSequenceTransform *)local_48.NestedTransforms.AllocatorInstance.Data,
             local_48.NestedTransforms.ArrayNum);
  if ((FMovieSceneNestedSequenceTransform *)local_48.NestedTransforms.AllocatorInstance.Data !=
      (FMovieSceneNestedSequenceTransform *)0x0) {
    FMemory::Free(local_48.NestedTransforms.AllocatorInstance.Data);
  }
  return (double)fVar1 + (double)iVar7;
}

// MatchSectionByBoneTransform @ 1467a7f10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UMovieSceneSkeletalAnimationSection::MatchSectionByBoneTransform
          (UMovieSceneSkeletalAnimationSection *this,USkeletalMeshComponent *param_1,
          FFrameTime param_2,FFrameRate param_3,FName *param_4)

{
  double dVar1;
  double dVar2;
  undefined1 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  UClass *pUVar9;
  UMovieSceneCommonAnimationTrack *this_00;
  TVector<double> *pTVar10;
  TRotator<double> *pTVar11;
  UObject *pUVar12;
  undefined1 *puVar13;
  undefined1 auStackY_198 [32];
  TVector<double>_u_0 local_148;
  TRotator<double> local_128;
  TVector<double> local_108;
  TQuat<double> local_e8;
  TTransform<double> local_c8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_198;
  this->MatchedBoneName = *param_4;
  pUVar9 = Z_Construct_UClass_UMovieSceneCommonAnimationTrack_NoRegister();
  this_00 = (UMovieSceneCommonAnimationTrack *)
            UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar9);
  if (this_00 != (UMovieSceneCommonAnimationTrack *)0x0) {
    dVar4 = (this->MatchedLocationOffset).field0_0x0._s_0.X;
    dVar5 = (this->MatchedLocationOffset).field0_0x0._s_0.Y;
    local_c8.Rotation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    local_c8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_c8.Rotation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    dVar1 = (this->MatchedLocationOffset).field0_0x0._s_0.Z;
    local_c8.Rotation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    local_c8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_c8.Rotation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    dVar6 = (this->MatchedRotationOffset).Pitch;
    dVar7 = (this->MatchedRotationOffset).Yaw;
    local_c8.Translation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    local_c8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_c8.Translation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    local_c8.Translation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
    local_c8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_c8.Translation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
    dVar2 = (this->MatchedRotationOffset).Roll;
    local_c8.Scale3D.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    local_c8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_c8.Scale3D.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
    local_c8.Scale3D.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    local_c8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_c8.Scale3D.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    UMovieSceneCommonAnimationTrack::MatchSectionByBoneTransform
              (this_00,this->bMatchWithPrevious,param_1,this,param_2,param_3,param_4,&local_c8,
               &local_108,&local_e8);
    pTVar10 = &local_108;
    if (this->bMatchTranslation == '\0') {
      pTVar10 = &UE::Math::TVector<double>::ZeroVector;
    }
    dVar8 = (pTVar10->field0_0x0)._s_0.Y;
    (this->MatchedLocationOffset).field0_0x0._s_0.X = (pTVar10->field0_0x0)._s_0.X;
    (this->MatchedLocationOffset).field0_0x0._s_0.Y = dVar8;
    (this->MatchedLocationOffset).field0_0x0._s_0.Z = (pTVar10->field0_0x0)._s_0.Z;
    pTVar11 = UE::Math::TQuat<double>::Rotator(&local_e8,(TRotator<double> *)&local_148._s_0);
    dVar8 = pTVar11->Yaw;
    (this->MatchedRotationOffset).Pitch = pTVar11->Pitch;
    (this->MatchedRotationOffset).Yaw = dVar8;
    (this->MatchedRotationOffset).Roll = pTVar11->Roll;
    if (this->bMatchWithPrevious == 0) {
      local_148._s_0.X = dVar4;
      local_148._s_0.Y = dVar5;
      local_148._s_0.Z = dVar1;
      local_128.Pitch = dVar6;
      local_128.Yaw = dVar7;
      local_128.Roll = dVar2;
      MultiplyOutInverseOnNextClips(this,(TVector<double> *)&local_148._s_0,&local_128);
    }
    pUVar9 = Z_Construct_UClass_UMovieSceneCommonAnimationTrack_NoRegister();
    pUVar12 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar9);
    puVar13 = &pUVar12[7].field_0x18;
    if (pUVar12 == (UObject *)0x0) {
      puVar13 = (undefined1 *)0x0;
    }
    if (puVar13 != (undefined1 *)0x0) {
      pUVar9 = Z_Construct_UClass_UMovieSceneCommonAnimationTrack_NoRegister();
      pUVar12 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar9);
      puVar13 = &pUVar12[8].field_0x8;
      if (pUVar12 == (UObject *)0x0) {
        puVar13 = &DAT_00000018;
      }
      *puVar13 = 1;
    }
  }
  return;
}

// MigrateFrameTimes @ 1467a8190

void __thiscall
UMovieSceneSkeletalAnimationSection::MigrateFrameTimes
          (UMovieSceneSkeletalAnimationSection *this,FFrameRate param_1,FFrameRate param_2)

{
  FFrameRate FVar1;
  FFrameRate FVar2;
  FFrameRate FVar3;
  FFrameTime FVar4;
  uint local_res8 [2];
  
  local_res8[0] = (this->Params).StartFrameOffset.Value;
  if (0 < (int)local_res8[0]) {
    local_res8[1] = 0;
    FVar1.Denominator = 0;
    FVar1.Numerator = local_res8[0];
    FVar4 = ConvertFrameTime((FFrameTime)local_res8,FVar1,param_1);
    (this->Params).StartFrameOffset.Value = *(int *)FVar4;
  }
  local_res8[0] = (this->Params).EndFrameOffset.Value;
  if (0 < (int)local_res8[0]) {
    local_res8[1] = 0;
    FVar2.Denominator = 0;
    FVar2.Numerator = local_res8[0];
    FVar4 = ConvertFrameTime((FFrameTime)local_res8,FVar2,param_1);
    (this->Params).EndFrameOffset.Value = *(int *)FVar4;
  }
  local_res8[0] = (this->Params).FirstLoopStartFrameOffset.Value;
  if (0 < (int)local_res8[0]) {
    local_res8[1] = 0;
    FVar3.Denominator = 0;
    FVar3.Numerator = local_res8[0];
    FVar4 = ConvertFrameTime((FFrameTime)local_res8,FVar3,param_1);
    (this->Params).FirstLoopStartFrameOffset.Value = *(int *)FVar4;
  }
  return;
}

// MultiplyOutInverseOnNextClips @ 1467a8260

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UMovieSceneSkeletalAnimationSection::MultiplyOutInverseOnNextClips
          (UMovieSceneSkeletalAnimationSection *this,TVector<double> *param_1,
          TRotator<double> *param_2)

{
  int iVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  UClass *pUVar9;
  UObject *pUVar10;
  TQuat<double> *pTVar11;
  TRotator<double> *pTVar12;
  uint uVar13;
  UMovieSceneSkeletalAnimationSection *pUVar14;
  longlong lVar15;
  undefined1 auStack_328 [32];
  ulonglong local_308;
  longlong local_300;
  TQuat<double> local_2f8;
  TRotator<double> local_2d8;
  TQuat<double> local_2b8;
  TQuat<double> local_298;
  TQuat<double> local_278;
  TTransform<double> local_258;
  TTransform<double> local_1f8;
  TTransform<double> local_198;
  TTransform<double> local_138;
  TTransform<double> local_d8;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStack_328;
  pUVar9 = Z_Construct_UClass_UMovieSceneCommonAnimationTrack_NoRegister();
  pUVar10 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar9);
  if (pUVar10 != (UObject *)0x0) {
    bVar4 = false;
    pTVar11 = UE::Math::TRotator<double>::Quaternion(param_2,&local_2b8);
    dVar7 = _UNK_150689688;
    dVar6 = ___xmm_3ff00000000000003ff0000000000000;
    dVar5 = _UNK_150689518;
    dVar3 = ___xmm_00000000000000003ff0000000000000;
    local_1f8.Translation.XY.m128d_f64[0] = (param_1->field0_0x0)._s_0.X;
    local_1f8.Translation.XY.m128d_f64[1] = (param_1->field0_0x0)._s_0.Y;
    local_1f8.Rotation.ZW.m128d_f64[0] = pTVar11->Z;
    local_1f8.Rotation.ZW.m128d_f64[1] = pTVar11->W;
    local_1f8.Rotation.XY.m128d_f64[0] = pTVar11->X;
    local_1f8.Rotation.XY.m128d_f64[1] = pTVar11->Y;
    local_1f8.Translation.ZW.m128d_f64[0] = (param_1->field0_0x0)._s_0.Z;
    local_1f8.Translation.ZW.m128d_f64[1] = 0.0;
    local_1f8.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
    local_1f8.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
    local_1f8.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
    local_1f8.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
    pTVar11 = UE::Math::TRotator<double>::Quaternion(&this->MatchedRotationOffset,&local_298);
    local_258.Translation.XY.m128d_f64[0] = (this->MatchedLocationOffset).field0_0x0._s_0.X;
    local_258.Translation.XY.m128d_f64[1] = (this->MatchedLocationOffset).field0_0x0._s_0.Y;
    local_258.Rotation.ZW.m128d_f64[0] = pTVar11->Z;
    local_258.Rotation.ZW.m128d_f64[1] = pTVar11->W;
    local_258.Rotation.XY.m128d_f64[0] = pTVar11->X;
    local_258.Rotation.XY.m128d_f64[1] = pTVar11->Y;
    local_258.Translation.ZW.m128d_f64[0] = (this->MatchedLocationOffset).field0_0x0._s_0.Z;
    local_258.Translation.ZW.m128d_f64[1] = 0.0;
    local_258.Scale3D.XY.m128d_f64[0] = dVar6;
    local_258.Scale3D.XY.m128d_f64[1] = dVar7;
    local_258.Scale3D.ZW.m128d_f64[0] = dVar3;
    local_258.Scale3D.ZW.m128d_f64[1] = dVar5;
    UE::Math::TTransform<double>::GetRelativeTransformReverse(&local_1f8,&local_d8,&local_258);
    uVar13 = *(int *)&pUVar10[7].field_0x8 - 1;
    if (-1 < (int)uVar13) {
      lVar15 = (longlong)(int)uVar13 * 8;
      do {
        if (*(int *)&pUVar10[7].field_0x8 <= (int)uVar13) {
          local_308 = (ulonglong)uVar13;
          local_300 = (longlong)*(int *)&pUVar10[7].field_0x8;
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar8) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        pUVar14 = *(UMovieSceneSkeletalAnimationSection **)(lVar15 + *(longlong *)(pUVar10 + 7));
        if (bVar4) {
          if (pUVar14 != (UMovieSceneSkeletalAnimationSection *)0x0) {
            pUVar9 = StaticClass();
            iVar1 = (int)pUVar9->_padding_;
            if ((iVar1 <= *(int *)(*(longlong *)&pUVar14->field_0x10 + 0x38)) &&
               ((longlong *)
                *(undefined1 **)
                 (*(longlong *)(*(longlong *)&pUVar14->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
                &pUVar9->_padding_)) goto LAB_1467a8435;
          }
          pUVar14 = (UMovieSceneSkeletalAnimationSection *)0x0;
LAB_1467a8435:
          if (pUVar14 == (UMovieSceneSkeletalAnimationSection *)0x0) {
            return;
          }
          pTVar11 = UE::Math::TRotator<double>::Quaternion
                              (&pUVar14->MatchedRotationOffset,&local_278);
          local_198.Translation.XY.m128d_f64[0] = (pUVar14->MatchedLocationOffset).field0_0x0._s_0.X
          ;
          local_198.Translation.XY.m128d_f64[1] = (pUVar14->MatchedLocationOffset).field0_0x0._s_0.Y
          ;
          local_198.Rotation.XY.m128d_f64[0] = pTVar11->X;
          local_198.Rotation.XY.m128d_f64[1] = pTVar11->Y;
          local_198.Rotation.ZW.m128d_f64[0] = pTVar11->Z;
          local_198.Rotation.ZW.m128d_f64[1] = pTVar11->W;
          local_198.Translation.ZW.m128d_f64[0] = (pUVar14->MatchedLocationOffset).field0_0x0._s_0.Z
          ;
          local_198.Translation.ZW.m128d_f64[1] = 0.0;
          local_198.Scale3D.XY.m128d_f64[0] = dVar6;
          local_198.Scale3D.XY.m128d_f64[1] = dVar7;
          local_198.Scale3D.ZW.m128d_f64[0] = dVar3;
          local_198.Scale3D.ZW.m128d_f64[1] = dVar5;
          UE::Math::TTransform<double>::GetRelativeTransformReverse(&local_d8,&local_138,&local_198)
          ;
          (pUVar14->MatchedLocationOffset).field0_0x0._s_0.X = local_138.Translation.XY.m128d_f64[0]
          ;
          (pUVar14->MatchedLocationOffset).field0_0x0._s_0.Y = local_138.Translation.XY.m128d_f64[1]
          ;
          (pUVar14->MatchedLocationOffset).field0_0x0._s_0.Z = local_138.Translation.ZW.m128d_f64[0]
          ;
          local_2f8.X = local_138.Rotation.XY.m128d_f64[0];
          local_2f8.Y = local_138.Rotation.XY.m128d_f64[1];
          local_2f8.Z = local_138.Rotation.ZW.m128d_f64[0];
          local_2f8.W = local_138.Rotation.ZW.m128d_f64[1];
          pTVar12 = UE::Math::TQuat<double>::Rotator(&local_2f8,&local_2d8);
          dVar3 = pTVar12->Yaw;
          (pUVar14->MatchedRotationOffset).Pitch = pTVar12->Pitch;
          (pUVar14->MatchedRotationOffset).Yaw = dVar3;
          (pUVar14->MatchedRotationOffset).Roll = pTVar12->Roll;
          return;
        }
        if (pUVar14 == this) {
          bVar4 = true;
        }
        lVar15 = lVar15 + -8;
        uVar13 = uVar13 - 1;
      } while (-1 < (int)uVar13);
    }
  }
  return;
}

// PopulateEvaluationFieldImpl @ 1467b1b00

bool __thiscall
UMovieSceneSkeletalAnimationSection::PopulateEvaluationFieldImpl
          (UMovieSceneSkeletalAnimationSection *this,TRange<FFrameNumber> *param_1,
          FMovieSceneEvaluationFieldEntityMetaData *param_2,
          FMovieSceneEntityComponentFieldBuilder *param_3)

{
  return *(longlong *)&this->field_0x8 == 0;
}

// PostLoad @ 1467b2620

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneSkeletalAnimationSection::PostLoad(UMovieSceneSkeletalAnimationSection *this)

{
  float fVar1;
  undefined4 uVar2;
  UAnimSequence *pUVar3;
  UAnimSequenceBase *pUVar4;
  FFrameRate FVar5;
  bool bVar6;
  int iVar7;
  UClass *pUVar8;
  UObject *pUVar9;
  FFrameTime FVar10;
  float fVar11;
  double dVar12;
  undefined1 auVar13 [16];
  double dVar14;
  undefined1 in_XMM2 [16];
  undefined1 auVar15 [16];
  double dVar16;
  FName local_res8;
  FGuid local_28 [2];
  
  pUVar3 = (this->AnimSequence_DEPRECATED).field0_0x0.DebugPtr;
  if (pUVar3 != (UAnimSequence *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->Params).Animation.field0_0x0 =
         (TObjectPtr<UAnimSequenceBase>_u_0)(this->AnimSequence_DEPRECATED).field0_0x0;
  }
  pUVar4 = (this->Animation_DEPRECATED).field0_0x0.DebugPtr;
  if (pUVar4 != (UAnimSequenceBase *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->Params).Animation.field0_0x0 = (this->Animation_DEPRECATED).field0_0x0;
  }
  if (this->StartOffset_DEPRECATED != 0.0) {
    (this->Params).StartOffset_DEPRECATED = this->StartOffset_DEPRECATED;
  }
  if (this->EndOffset_DEPRECATED != 0.0) {
    (this->Params).EndOffset_DEPRECATED = this->EndOffset_DEPRECATED;
  }
  if (this->PlayRate_DEPRECATED != __real_3f800000) {
    FMovieSceneTimeWarpVariant::Set(&(this->Params).PlayRate,(double)this->PlayRate_DEPRECATED);
  }
  if (this->bReverse_DEPRECATED != 0) {
    uVar2 = *(undefined4 *)&(this->Params).field_0x28;
    *(uint *)&(this->Params).field_0x28 = (ZPULL(uVar2,0,1) ^ this->bReverse_DEPRECATED) & 1 ^ uVar2
    ;
  }
  if (this->SlotName_DEPRECATED != DefaultSlotName) {
    (this->Params).SlotName = this->SlotName_DEPRECATED;
  }
  pUVar8 = Z_Construct_UClass_UMovieScene_NoRegister();
  pUVar9 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar8);
  if (pUVar9 != (UObject *)0x0) {
    fVar1 = (this->Params).StartOffset_DEPRECATED;
    FVar5.Numerator = *(int *)&pUVar9[8].field_0x0;
    FVar5.Denominator = *(int *)&pUVar9[8].field_0x4;
    fVar11 = SkeletalDeprecatedMagicNumber;
    if (fVar1 != SkeletalDeprecatedMagicNumber) {
      dVar16 = ((double)FVar5.Numerator / (double)FVar5.Denominator) * (double)fVar1;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = dVar16;
      in_XMM2 = roundpd(in_XMM2,auVar15,1);
      dVar14 = in_XMM2._0_8_;
      dVar12 = dVar14;
      if (__real_41dfffffffc00000 <= dVar14) {
        dVar12 = __real_41dfffffffc00000;
      }
      local_res8.Number = (uint)(float)(dVar16 - dVar14);
      if (dVar12 <= __real_c1e0000000000000) {
        dVar12 = __real_c1e0000000000000;
      }
      if (::FFrameTime::MaxSubframe <= (float)local_res8.Number) {
        local_res8.Number = (uint)::FFrameTime::MaxSubframe;
      }
      if ((float)local_res8.Number <= 0.0) {
        local_res8.Number = 0;
      }
      if (::FFrameTime::MaxSubframe <= (float)local_res8.Number) {
        local_res8.Number = (uint)::FFrameTime::MaxSubframe;
      }
      if ((float)local_res8.Number <= 0.0) {
        local_res8.Number = 0;
      }
      local_res8.ComparisonIndex.Value = (int)dVar12;
      FVar10 = ConvertFrameTime((FFrameTime)&local_res8,(FFrameRate)local_res8,FVar5);
      fVar11 = SkeletalDeprecatedMagicNumber;
      iVar7 = *(int *)FVar10;
      (this->Params).StartOffset_DEPRECATED = SkeletalDeprecatedMagicNumber;
      (this->Params).StartFrameOffset.Value = iVar7;
    }
    fVar1 = (this->Params).EndOffset_DEPRECATED;
    if (fVar1 != fVar11) {
      dVar16 = ((double)FVar5.Numerator / (double)FVar5.Denominator) * (double)fVar1;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = dVar16;
      auVar15 = roundpd(in_XMM2,auVar13,1);
      dVar14 = auVar15._0_8_;
      dVar12 = dVar14;
      if (__real_41dfffffffc00000 <= dVar14) {
        dVar12 = __real_41dfffffffc00000;
      }
      local_res8.Number = (uint)(float)(dVar16 - dVar14);
      if (dVar12 <= __real_c1e0000000000000) {
        dVar12 = __real_c1e0000000000000;
      }
      if (::FFrameTime::MaxSubframe <= (float)local_res8.Number) {
        local_res8.Number = (uint)::FFrameTime::MaxSubframe;
      }
      if ((float)local_res8.Number <= 0.0) {
        local_res8.Number = 0;
      }
      if (::FFrameTime::MaxSubframe <= (float)local_res8.Number) {
        local_res8.Number = (uint)::FFrameTime::MaxSubframe;
      }
      if ((float)local_res8.Number <= 0.0) {
        local_res8.Number = 0;
      }
      local_res8.ComparisonIndex.Value = (int)dVar12;
      FVar10 = ConvertFrameTime((FFrameTime)&local_res8,(FFrameRate)local_res8,FVar5);
      iVar7 = *(int *)FVar10;
      (this->Params).EndOffset_DEPRECATED = SkeletalDeprecatedMagicNumber;
      (this->Params).EndFrameOffset.Value = iVar7;
    }
  }
  local_28[0] = FSequencerObjectVersion::GUID;
  iVar7 = UObjectBaseUtility::GetLinkerCustomVersion((UObjectBaseUtility *)this,local_28);
  if ((iVar7 < 2) && ((this->Params).Animation.field0_0x0.DebugPtr != (UAnimSequenceBase *)0x0)) {
    pUVar8 = Z_Construct_UClass_UAnimSequence_NoRegister();
    bVar6 = FObjectPtr::IsA((FObjectPtr *)&this->Params,pUVar8);
    if ((bVar6) &&
       (((pUVar4 = (this->Params).Animation.field0_0x0.DebugPtr, pUVar4 != (UAnimSequenceBase *)0x0
         && (*(undefined1 *)((longlong)&pUVar4[2]._padding_ + 1) != '\0')) &&
        (*(undefined1 *)((longlong)&pUVar4[2]._padding_ + 3) == '\0')))) {
      *(undefined1 *)((longlong)&pUVar4[2]._padding_ + 3) = 1;
      UObjectBaseUtility::MarkPackageDirty((UObjectBaseUtility *)pUVar4);
      if (2 < (byte)LogMovieScene._0_1_) {
        local_res8 = (FName)pUVar4->_padding_;
        ::FName::ToString(&local_res8,(FString *)local_28);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMovieScene);
        if ((void *)local_28[0]._0_8_ != (void *)0x0) {
          FMemory::Free((void *)local_28[0]._0_8_);
        }
      }
    }
  }
  UMovieSceneSignedObject::PostLoad((UMovieSceneSignedObject *)this);
  return;
}

// Serialize @ 1467c1550

void __thiscall
UMovieSceneSkeletalAnimationSection::Serialize
          (UMovieSceneSkeletalAnimationSection *this,FArchive *param_1)

{
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FSequencerObjectVersion::GUID);
  UMovieSceneSection::Serialize((UMovieSceneSection *)this,param_1);
  return;
}

// Serialize @ 1467c1590

void __thiscall
UMovieSceneSkeletalAnimationSection::Serialize
          (UMovieSceneSkeletalAnimationSection *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  (**(code **)(*(longlong *)pFVar1 + 0x230))(pFVar1,&FSequencerObjectVersion::GUID);
  UMovieSceneSection::Serialize((UMovieSceneSection *)this,pFVar1);
  return;
}

// SetBoneIndexForRootMotionCalculations @ 1467c15f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall
UMovieSceneSkeletalAnimationSection::SetBoneIndexForRootMotionCalculations
          (UMovieSceneSkeletalAnimationSection *this,bool param_1)

{
  FSkeletonPoseBoneIndex FVar1;
  UAnimSequence *this_00;
  code *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  undefined4 extraout_EAX;
  undefined4 extraout_EAX_00;
  undefined4 extraout_EAX_01;
  undefined4 uVar13;
  int iVar14;
  UClass *pUVar15;
  int *piVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  ForAnyElementType FVar20;
  ulonglong uVar21;
  uint uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  longlong lVar25;
  float fVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  double dVar39;
  double dVar45;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined4 uVar46;
  undefined4 uVar47;
  undefined1 auStack_1e8 [32];
  uint local_1b8;
  longlong local_190;
  FSkeletonPoseBoneIndex local_188 [2];
  longlong *local_180;
  ulonglong local_178;
  longlong local_170;
  FAnimExtractContext local_168;
  double local_120;
  undefined1 local_118 [8];
  double local_110;
  double local_108;
  TTransform<double> local_f8;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStack_1e8;
  if (param_1) {
    iVar11 = 0;
    if ((this->Params).Animation.field0_0x0.DebugPtr != (UAnimSequenceBase *)0x0) {
      pUVar15 = Z_Construct_UClass_UAnimSequence_NoRegister();
      bVar10 = FObjectPtr::IsA((FObjectPtr *)&this->Params,pUVar15);
      if (((bVar10) &&
          (this_00 = (UAnimSequence *)(this->Params).Animation.field0_0x0.DebugPtr,
          this_00 != (UAnimSequence *)0x0)) &&
         (((this->TempRootBoneIndex).bIsSet == false || ((this->TempRootBoneIndex).TypedValue == -1)
          ))) {
        local_1b8 = 0xffffffff;
        UAnimSequence::GetCompressedData(this_00);
        dVar5 = __real_3f1a36e2e0000000;
        uVar9 = _UNK_15061cc8c;
        uVar8 = _UNK_15061cc88;
        uVar7 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
        uVar6 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
        local_170 = (longlong)(int)local_180[1];
        if (0 < local_170) {
          local_190 = 0;
          uVar21 = 0;
          uVar23 = 0xffffffff;
          do {
            uVar22 = (uint)uVar21;
            uVar17 = 0;
            if ((int)uVar22 < (int)local_180[1]) {
              uVar17 = ~uVar22 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar2 = (code *)swi(3);
              iVar11 = (*pcVar2)();
              return iVar11;
            }
            FVar1 = *(FSkeletonPoseBoneIndex *)(*local_180 + local_190 * 4);
            uVar24 = uVar23;
            uVar17 = local_1b8;
            if (FVar1 != (FSkeletonPoseBoneIndex)0xffffffff) {
              lVar25 = this_00->_padding_;
              uVar17 = 0;
              if ((int)FVar1 < *(int *)(lVar25 + 0x70)) {
                uVar17 = ~(uint)FVar1 >> 0x1f;
              }
              if ((uVar17 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar2 = (code *)swi(3);
                iVar11 = (*pcVar2)();
                return iVar11;
              }
              iVar12 = *(int *)(*(longlong *)(lVar25 + 0x68) + 8 + (longlong)(int)FVar1 * 0xc);
              uVar24 = uVar21;
              uVar17 = uVar22;
              if ((iVar12 != -1) && (uVar24 = uVar23, uVar17 = local_1b8, iVar12 == (int)uVar23)) {
                local_f8.Rotation.XY.m128d_f64[0] =
                     (double)GlobalVectorConstants::Float0001.m128_f32[0];
                local_f8.Rotation.XY.m128d_f64[1] =
                     (double)GlobalVectorConstants::Float0001.m128_f32[1];
                local_f8.Rotation.ZW.m128d_f64[0] =
                     (double)GlobalVectorConstants::Float0001.m128_f32[2];
                local_f8.Rotation.ZW.m128d_f64[1] =
                     (double)GlobalVectorConstants::Float0001.m128_f32[3];
                local_f8.Translation.XY.m128d_f64[0] =
                     (double)GlobalVectorConstants::FloatZero.m128_f32[0];
                local_f8.Translation.XY.m128d_f64[1] =
                     (double)GlobalVectorConstants::FloatZero.m128_f32[1];
                local_f8.Translation.ZW.m128d_f64[0] =
                     (double)GlobalVectorConstants::FloatZero.m128_f32[2];
                local_f8.Translation.ZW.m128d_f64[1] =
                     (double)GlobalVectorConstants::FloatZero.m128_f32[3];
                local_f8.Scale3D.XY.m128d_f64[0] =
                     (double)GlobalVectorConstants::Float1110.m128_f32[0];
                local_f8.Scale3D.XY.m128d_f64[1] =
                     (double)GlobalVectorConstants::Float1110.m128_f32[1];
                local_f8.Scale3D.ZW.m128d_f64[0] =
                     (double)GlobalVectorConstants::Float1110.m128_f32[2];
                local_f8.Scale3D.ZW.m128d_f64[1] =
                     (double)GlobalVectorConstants::Float1110.m128_f32[3];
                iVar12 = (**(code **)(this_00->_padding_ + 0x310))(this_00);
                if (0 < iVar12) {
                  local_120 = dVar5;
                  uVar46 = SUB84(dVar5,0);
                  uVar47 = (undefined4)((ulonglong)dVar5 >> 0x20);
                  uVar21 = 0;
                  do {
                    fVar26 = (float)(**(code **)(this_00->_padding_ + 0x2c0))(this_00);
                    piVar16 = (int *)(**(code **)(this_00->_padding_ + 0x318))(this_00,local_118);
                    local_168.bExtractRootMotion = false;
                    local_168.bLooping = false;
                    local_168.InterpolationOverride.bIsSet = false;
                    local_168.PoseCurves.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                    local_168.PoseCurves.ArrayNum = 0;
                    local_168.PoseCurves.ArrayMax = 0;
                    local_168.BonesRequired.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                    local_168.BonesRequired.ArrayNum = 0;
                    local_168.BonesRequired.ArrayMax = 0;
                    local_168.DeltaTimeRecord.bPreviousIsValid = false;
                    local_168.DeltaTimeRecord._9_3_ = 0;
                    local_168.CurrentTime =
                         ((double)((longlong)(int)uVar21 * (longlong)piVar16[1]) +
                         (double)piVar16[1] * 0.0) / (double)*piVar16;
                    if ((double)fVar26 <= local_168.CurrentTime) {
                      local_168.CurrentTime = (double)fVar26;
                    }
                    local_168.DeltaTimeRecord.Delta = 0.0;
                    local_168.DeltaTimeRecord.Previous = 0.0;
                    if (local_168.CurrentTime <= 0.0) {
                      local_168.CurrentTime = 0.0;
                    }
                    local_178 = uVar21;
                    UAnimSequence::GetBoneTransform(this_00,&local_f8,FVar1,&local_168,false);
                    uVar13 = extraout_EAX;
                    if (local_168.BonesRequired.AllocatorInstance.Data !=
                        (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_168.BonesRequired.AllocatorInstance.Data);
                      uVar13 = extraout_EAX_00;
                    }
                    FVar20.Data = local_168.PoseCurves.AllocatorInstance.Data;
                    if (local_168.PoseCurves.AllocatorInstance.Data !=
                        (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_168.PoseCurves.AllocatorInstance.Data);
                      uVar13 = extraout_EAX_01;
                    }
                    auVar27._8_4_ = uVar46;
                    auVar27._0_8_ = dVar5;
                    auVar27._12_4_ = uVar47;
                    dVar39 = local_f8.Translation.ZW.m128d_f64[0] -
                             UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
                    dVar45 = local_f8.Translation.ZW.m128d_f64[1] -
                             UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
                    auVar40._0_8_ =
                         (double)CONCAT44((uint)((ulonglong)dVar39 >> 0x20) & uVar7,
                                          SUB84(dVar39,0) & uVar6);
                    auVar40._8_4_ = SUB84(dVar45,0) & uVar8;
                    auVar40._12_4_ = (uint)((ulonglong)dVar45 >> 0x20) & uVar9;
                    auVar28._8_8_ = -(ulonglong)(auVar27._8_8_ < auVar40._8_8_);
                    auVar28._0_8_ = -(ulonglong)(dVar5 < auVar40._0_8_);
                    dVar39 = local_f8.Translation.XY.m128d_f64[0] -
                             UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
                    dVar45 = local_f8.Translation.XY.m128d_f64[1] -
                             UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
                    uVar17 = movmskpd((int)FVar20.Data,auVar28);
                    auVar29._8_4_ = uVar46;
                    auVar29._0_8_ = dVar5;
                    auVar29._12_4_ = uVar47;
                    auVar41._0_8_ =
                         (double)CONCAT44((uint)((ulonglong)dVar39 >> 0x20) & uVar7,
                                          SUB84(dVar39,0) & uVar6);
                    auVar41._8_4_ = SUB84(dVar45,0) & uVar8;
                    auVar41._12_4_ = (uint)((ulonglong)dVar45 >> 0x20) & uVar9;
                    auVar30._8_8_ = -(ulonglong)(auVar29._8_8_ < auVar41._8_8_);
                    auVar30._0_8_ = -(ulonglong)(dVar5 < auVar41._0_8_);
                    iVar14 = movmskpd(uVar13,auVar30);
                    if ((uVar17 & 0x3fffffff) != 0 || iVar14 != 0) {
LAB_1467c1a8d:
                      if ((TOptional<int> *)local_188 != &this->TempRootBoneIndex) {
                        (this->TempRootBoneIndex).TypedValue = (int)FVar1;
                        (this->TempRootBoneIndex).bIsSet = true;
                      }
                      break;
                    }
                    auVar42._0_8_ =
                         (double)CONCAT44((uint)((ulonglong)
                                                 (local_f8.Rotation.ZW.m128d_f64[0] -
                                                 UE::Math::TTransform<double>::Identity.Rotation.ZW.
                                                 m128d_f64[0]) >> 0x20) & uVar7,
                                          SUB84(local_f8.Rotation.ZW.m128d_f64[0] -
                                                UE::Math::TTransform<double>::Identity.Rotation.ZW.
                                                m128d_f64[0],0) & uVar6);
                    auVar42._8_4_ =
                         SUB84(local_f8.Rotation.ZW.m128d_f64[1] -
                               UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1],0) &
                         uVar8;
                    auVar42._12_4_ =
                         (uint)((ulonglong)
                                (local_f8.Rotation.ZW.m128d_f64[1] -
                                UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]) >>
                               0x20) & uVar9;
                    local_110 = dVar5;
                    auVar31._8_4_ = uVar46;
                    auVar31._0_8_ = dVar5;
                    auVar31._12_4_ = uVar47;
                    auVar32._8_8_ = -(ulonglong)(auVar31._8_8_ < auVar42._8_8_);
                    auVar32._0_8_ = -(ulonglong)(dVar5 < auVar42._0_8_);
                    iVar18 = movmskpd(0,auVar32);
                    auVar33._8_4_ = uVar46;
                    auVar33._0_8_ = dVar5;
                    auVar33._12_4_ = uVar47;
                    auVar34._8_8_ =
                         -(ulonglong)
                          (auVar33._8_8_ <
                          (double)CONCAT44((uint)((ulonglong)
                                                  (local_f8.Rotation.XY.m128d_f64[1] -
                                                  UE::Math::TTransform<double>::Identity.Rotation.XY
                                                  .m128d_f64[1]) >> 0x20) & uVar9,
                                           SUB84(local_f8.Rotation.XY.m128d_f64[1] -
                                                 UE::Math::TTransform<double>::Identity.Rotation.XY.
                                                 m128d_f64[1],0) & uVar8));
                    auVar34._0_8_ =
                         -(ulonglong)
                          (dVar5 < (double)CONCAT44((uint)((ulonglong)
                                                           (local_f8.Rotation.XY.m128d_f64[0] -
                                                           UE::Math::TTransform<double>::Identity.
                                                           Rotation.XY.m128d_f64[0]) >> 0x20) &
                                                    uVar7,SUB84(local_f8.Rotation.XY.m128d_f64[0] -
                                                                UE::Math::TTransform<double>::
                                                                Identity.Rotation.XY.m128d_f64[0],0)
                                                          & uVar6));
                    uVar17 = movmskpd(iVar14,auVar34);
                    uVar19 = iVar18 << 2 | uVar17;
                    if (uVar19 != 0) {
                      auVar35._8_4_ = uVar46;
                      auVar35._0_8_ = dVar5;
                      auVar35._12_4_ = uVar47;
                      auVar36._8_8_ =
                           -(ulonglong)
                            (auVar35._8_8_ <
                            (double)CONCAT44((uint)((ulonglong)
                                                    (local_f8.Rotation.ZW.m128d_f64[1] +
                                                    UE::Math::TTransform<double>::Identity.Rotation.
                                                    ZW.m128d_f64[1]) >> 0x20) & uVar9,
                                             SUB84(local_f8.Rotation.ZW.m128d_f64[1] +
                                                   UE::Math::TTransform<double>::Identity.Rotation.
                                                   ZW.m128d_f64[1],0) & uVar8));
                      auVar36._0_8_ =
                           -(ulonglong)
                            (dVar5 < (double)CONCAT44((uint)((ulonglong)
                                                             (local_f8.Rotation.ZW.m128d_f64[0] +
                                                             UE::Math::TTransform<double>::Identity.
                                                             Rotation.ZW.m128d_f64[0]) >> 0x20) &
                                                      uVar7,SUB84(local_f8.Rotation.ZW.m128d_f64[0]
                                                                  + UE::Math::TTransform<double>::
                                                                    Identity.Rotation.ZW.m128d_f64
                                                                    [0],0) & uVar6));
                      uVar19 = movmskpd(uVar19,auVar36);
                      lVar25 = -(ulonglong)
                                (dVar5 < (double)CONCAT44((uint)((ulonglong)
                                                                 (local_f8.Rotation.XY.m128d_f64[1]
                                                                 + UE::Math::TTransform<double>::
                                                                   Identity.Rotation.XY.m128d_f64[1]
                                                                 ) >> 0x20) & uVar9,
                                                          SUB84(local_f8.Rotation.XY.m128d_f64[1] +
                                                                UE::Math::TTransform<double>::
                                                                Identity.Rotation.XY.m128d_f64[1],0)
                                                          & uVar8));
                      auVar4._8_4_ = (int)lVar25;
                      auVar4._0_8_ = -(ulonglong)
                                      (dVar5 < (double)CONCAT44((uint)((ulonglong)
                                                                       (local_f8.Rotation.XY.
                                                                        m128d_f64[0] +
                                                                       UE::Math::TTransform<double>
                                                                       ::Identity.Rotation.XY.
                                                                       m128d_f64[0]) >> 0x20) &
                                                                uVar7,SUB84(local_f8.Rotation.XY.
                                                                            m128d_f64[0] +
                                                                            UE::Math::
                                                                            TTransform<double>::
                                                                            Identity.Rotation.XY.
                                                                            m128d_f64[0],0) & uVar6)
                                      );
                      auVar4._12_4_ = (int)((ulonglong)lVar25 >> 0x20);
                      uVar17 = movmskpd(uVar17,auVar4);
                      if ((uVar19 & 0x3fffffff) != 0 || uVar17 != 0) goto LAB_1467c1a8d;
                    }
                    dVar39 = local_f8.Scale3D.ZW.m128d_f64[0] -
                             UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
                    dVar45 = local_f8.Scale3D.ZW.m128d_f64[1] -
                             UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
                    auVar43._0_8_ =
                         (double)CONCAT44((uint)((ulonglong)dVar39 >> 0x20) & uVar7,
                                          SUB84(dVar39,0) & uVar6);
                    auVar43._8_4_ = SUB84(dVar45,0) & uVar8;
                    auVar43._12_4_ = (uint)((ulonglong)dVar45 >> 0x20) & uVar9;
                    local_108 = dVar5;
                    auVar37._8_4_ = uVar46;
                    auVar37._0_8_ = dVar5;
                    auVar37._12_4_ = uVar47;
                    auVar38._8_8_ = -(ulonglong)(auVar37._8_8_ < auVar43._8_8_);
                    auVar38._0_8_ = -(ulonglong)(dVar5 < auVar43._0_8_);
                    dVar39 = local_f8.Scale3D.XY.m128d_f64[0] -
                             UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
                    dVar45 = local_f8.Scale3D.XY.m128d_f64[1] -
                             UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
                    uVar19 = movmskpd(0,auVar38);
                    auVar44._0_8_ =
                         (double)CONCAT44((uint)((ulonglong)dVar39 >> 0x20) & uVar7,
                                          SUB84(dVar39,0) & uVar6);
                    auVar44._8_4_ = SUB84(dVar45,0) & uVar8;
                    auVar44._12_4_ = (uint)((ulonglong)dVar45 >> 0x20) & uVar9;
                    lVar25 = -(ulonglong)(dVar5 < auVar44._8_8_);
                    auVar3._8_4_ = (int)lVar25;
                    auVar3._0_8_ = -(ulonglong)(dVar5 < auVar44._0_8_);
                    auVar3._12_4_ = (int)((ulonglong)lVar25 >> 0x20);
                    iVar14 = movmskpd(uVar17,auVar3);
                    if ((uVar19 & 0x3fffffff) != 0 || iVar14 != 0) goto LAB_1467c1a8d;
                    uVar17 = (int)uVar21 + 1;
                    uVar21 = (ulonglong)uVar17;
                  } while ((int)uVar17 < iVar12);
                }
                if ((this->TempRootBoneIndex).bIsSet != false) break;
                uVar24 = (ulonglong)local_1b8;
                uVar17 = local_1b8;
              }
            }
            local_1b8 = uVar17;
            uVar21 = (ulonglong)(uVar22 + 1);
            local_190 = local_190 + 1;
            uVar23 = uVar24;
          } while (local_190 < local_170);
        }
      }
    }
    if ((this->TempRootBoneIndex).bIsSet != false) {
      iVar11 = (this->TempRootBoneIndex).TypedValue;
    }
  }
  else {
    if ((this->TempRootBoneIndex).bIsSet != false) {
      (this->TempRootBoneIndex).bIsSet = false;
    }
    iVar11 = 0;
  }
  return iVar11;
}

// SetEndFrame @ 1467c1b90

void __thiscall
UMovieSceneSkeletalAnimationSection::SetEndFrame
          (UMovieSceneSkeletalAnimationSection *this,TRangeBound<FFrameNumber> param_1)

{
  UClass *pUVar1;
  UObject *pUVar2;
  undefined1 *puVar3;
  
  UMovieSceneSection::SetEndFrame((UMovieSceneSection *)this,param_1);
  pUVar1 = Z_Construct_UClass_UMovieSceneCommonAnimationTrack_NoRegister();
  pUVar2 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar1);
  puVar3 = &pUVar2[7].field_0x18;
  if (pUVar2 == (UObject *)0x0) {
    puVar3 = (undefined1 *)0x0;
  }
  if (puVar3 != (undefined1 *)0x0) {
    pUVar1 = Z_Construct_UClass_UMovieSceneCommonAnimationTrack_NoRegister();
    pUVar2 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar1);
    puVar3 = &pUVar2[8].field_0x8;
    if (pUVar2 == (UObject *)0x0) {
      puVar3 = &DAT_00000018;
    }
    *puVar3 = 1;
  }
  return;
}

// SetRange @ 1467c22e0

void __thiscall
UMovieSceneSkeletalAnimationSection::SetRange
          (UMovieSceneSkeletalAnimationSection *this,TRange<FFrameNumber> *param_1)

{
  UClass *pUVar1;
  UObject *pUVar2;
  undefined1 *puVar3;
  
  UMovieSceneSection::SetRange((UMovieSceneSection *)this,param_1);
  pUVar1 = Z_Construct_UClass_UMovieSceneCommonAnimationTrack_NoRegister();
  pUVar2 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar1);
  puVar3 = &pUVar2[7].field_0x18;
  if (pUVar2 == (UObject *)0x0) {
    puVar3 = (undefined1 *)0x0;
  }
  if (puVar3 != (undefined1 *)0x0) {
    pUVar1 = Z_Construct_UClass_UMovieSceneCommonAnimationTrack_NoRegister();
    pUVar2 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar1);
    puVar3 = &pUVar2[8].field_0x8;
    if (pUVar2 == (UObject *)0x0) {
      puVar3 = &DAT_00000018;
    }
    *puVar3 = 1;
  }
  return;
}

// SetStartFrame @ 1467c2350

void __thiscall
UMovieSceneSkeletalAnimationSection::SetStartFrame
          (UMovieSceneSkeletalAnimationSection *this,TRangeBound<FFrameNumber> param_1)

{
  UClass *pUVar1;
  UObject *pUVar2;
  undefined1 *puVar3;
  
  UMovieSceneSection::SetStartFrame((UMovieSceneSection *)this,param_1);
  pUVar1 = Z_Construct_UClass_UMovieSceneCommonAnimationTrack_NoRegister();
  pUVar2 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar1);
  puVar3 = &pUVar2[7].field_0x18;
  if (pUVar2 == (UObject *)0x0) {
    puVar3 = (undefined1 *)0x0;
  }
  if (puVar3 != (undefined1 *)0x0) {
    pUVar1 = Z_Construct_UClass_UMovieSceneCommonAnimationTrack_NoRegister();
    pUVar2 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar1);
    puVar3 = &pUVar2[8].field_0x8;
    if (pUVar2 == (UObject *)0x0) {
      puVar3 = &DAT_00000018;
    }
    *puVar3 = 1;
  }
  return;
}

// SplitSection @ 1467c2420

UMovieSceneSection * __thiscall
UMovieSceneSkeletalAnimationSection::SplitSection
          (UMovieSceneSkeletalAnimationSection *this,FQualifiedFrameTime *param_1,bool param_2)

{
  int iVar1;
  int iVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  UMovieSceneSection *pUVar5;
  double dVar6;
  double dVar7;
  undefined1 in_XMM2 [16];
  undefined1 auVar8 [16];
  double dVar9;
  int local_res8;
  float local_resc;
  FFrameRate local_res10;
  TRange<FFrameNumber> local_48;
  FMovieSceneSequenceTransform local_38;
  
  iVar1 = (this->Params).FirstLoopStartFrameOffset.Value;
  pUVar3 = Z_Construct_UClass_UMovieScene_NoRegister();
  pUVar4 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar3);
  local_48.LowerBound.Type.Value = this->field_0xb0;
  local_48.LowerBound._1_3_ = *(undefined3 *)&this->field_0xb1;
  local_48.LowerBound.Value.Value = *(int *)&this->field_0xb4;
  local_48.UpperBound.Type.Value = this->field_0xb8;
  local_48.UpperBound._1_3_ = *(undefined3 *)&this->field_0xb9;
  local_48.UpperBound.Value.Value = *(int *)&this->field_0xbc;
  local_res10.Numerator = *(int *)&pUVar4[7].field_0x20;
  local_res10.Denominator = *(int *)&pUVar4[7].field_0x24;
  FMovieSceneSkeletalAnimationParams::MakeTransform
            (&this->Params,&local_38,&local_res10,&local_48,(UAnimSequenceBase *)0x0,true,false);
  FMovieSceneSequenceTransform::TransformTime(&local_38,(FFrameTime)&local_res8);
  dVar9 = (((double)local_res8 + (double)local_resc) * (double)local_res10.Numerator) /
          (double)local_res10.Denominator;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = dVar9;
  auVar8 = roundpd(in_XMM2,auVar8,1);
  dVar6 = auVar8._0_8_;
  dVar7 = dVar6;
  if (__real_41dfffffffc00000 <= dVar6) {
    dVar7 = __real_41dfffffffc00000;
  }
  if (dVar7 <= __real_c1e0000000000000) {
    dVar7 = __real_c1e0000000000000;
  }
  local_48.LowerBound = *(TRangeBound<FFrameNumber> *)&param_1->Time;
  local_48.UpperBound = *(TRangeBound<FFrameNumber> *)&param_1->Rate;
  pUVar5 = UMovieSceneSection::SplitSection
                     ((UMovieSceneSection *)this,(FQualifiedFrameTime *)&local_48,param_2);
  if (pUVar5 != (UMovieSceneSection *)0x0) {
    pUVar3 = StaticClass();
    iVar2 = (int)pUVar3->_padding_;
    if ((iVar2 <= *(int *)(pUVar5->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar2 * 8)
        == &pUVar3->_padding_)) {
      *(int *)&pUVar5[1]._padding_ = (int)dVar7 + (int)(dVar9 - dVar6);
      goto LAB_1467c256e;
    }
  }
  pUVar5 = (UMovieSceneSection *)0x0;
LAB_1467c256e:
  (this->Params).FirstLoopStartFrameOffset.Value = iVar1;
  DestructItems<FMovieSceneNestedSequenceTransform,int>
            ((FMovieSceneNestedSequenceTransform *)local_38.NestedTransforms.AllocatorInstance.Data,
             local_38.NestedTransforms.ArrayNum);
  if ((FMovieSceneNestedSequenceTransform *)local_38.NestedTransforms.AllocatorInstance.Data !=
      (FMovieSceneNestedSequenceTransform *)0x0) {
    FMemory::Free(local_38.NestedTransforms.AllocatorInstance.Data);
  }
  return pUVar5;
}

// StaticRegisterNativesUMovieSceneSkeletalAnimationSection @ 1467c2a50

void __cdecl
UMovieSceneSkeletalAnimationSection::StaticRegisterNativesUMovieSceneSkeletalAnimationSection(void)

{
  return;
}

// ToggleMatchIncludePitchRotation @ 1467c3dd0

void __thiscall
UMovieSceneSkeletalAnimationSection::ToggleMatchIncludePitchRotation
          (UMovieSceneSkeletalAnimationSection *this)

{
  UClass *pUVar1;
  UObject *pUVar2;
  undefined1 *puVar3;
  
  this->field_0x320 = this->field_0x320 ^ 0x10;
  pUVar1 = Z_Construct_UClass_UMovieSceneCommonAnimationTrack_NoRegister();
  pUVar2 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar1);
  puVar3 = &pUVar2[8].field_0x8;
  if (pUVar2 == (UObject *)0x0) {
    puVar3 = &DAT_00000018;
  }
  *puVar3 = 1;
  return;
}

// ToggleMatchIncludeRollRotation @ 1467c3e20

void __thiscall
UMovieSceneSkeletalAnimationSection::ToggleMatchIncludeRollRotation
          (UMovieSceneSkeletalAnimationSection *this)

{
  UClass *pUVar1;
  UObject *pUVar2;
  undefined1 *puVar3;
  
  this->field_0x320 = this->field_0x320 ^ 0x20;
  pUVar1 = Z_Construct_UClass_UMovieSceneCommonAnimationTrack_NoRegister();
  pUVar2 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar1);
  puVar3 = &pUVar2[8].field_0x8;
  if (pUVar2 == (UObject *)0x0) {
    puVar3 = &DAT_00000018;
  }
  *puVar3 = 1;
  return;
}

// ToggleMatchIncludeYawRotation @ 1467c3e70

void __thiscall
UMovieSceneSkeletalAnimationSection::ToggleMatchIncludeYawRotation
          (UMovieSceneSkeletalAnimationSection *this)

{
  UClass *pUVar1;
  UObject *pUVar2;
  undefined1 *puVar3;
  
  this->field_0x320 = this->field_0x320 ^ 8;
  pUVar1 = Z_Construct_UClass_UMovieSceneCommonAnimationTrack_NoRegister();
  pUVar2 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar1);
  puVar3 = &pUVar2[8].field_0x8;
  if (pUVar2 == (UObject *)0x0) {
    puVar3 = &DAT_00000018;
  }
  *puVar3 = 1;
  return;
}

// ToggleMatchIncludeZHeight @ 1467c3ec0

void __thiscall
UMovieSceneSkeletalAnimationSection::ToggleMatchIncludeZHeight
          (UMovieSceneSkeletalAnimationSection *this)

{
  UClass *pUVar1;
  UObject *pUVar2;
  undefined1 *puVar3;
  
  this->field_0x320 = this->field_0x320 ^ 4;
  pUVar1 = Z_Construct_UClass_UMovieSceneCommonAnimationTrack_NoRegister();
  pUVar2 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar1);
  puVar3 = &pUVar2[8].field_0x8;
  if (pUVar2 == (UObject *)0x0) {
    puVar3 = &DAT_00000018;
  }
  *puVar3 = 1;
  return;
}

// ToggleMatchTranslation @ 1467c3f10

void __thiscall
UMovieSceneSkeletalAnimationSection::ToggleMatchTranslation
          (UMovieSceneSkeletalAnimationSection *this)

{
  UClass *pUVar1;
  UObject *pUVar2;
  undefined1 *puVar3;
  
  this->field_0x320 = this->field_0x320 ^ 2;
  pUVar1 = Z_Construct_UClass_UMovieSceneCommonAnimationTrack_NoRegister();
  pUVar2 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar1);
  puVar3 = &pUVar2[8].field_0x8;
  if (pUVar2 == (UObject *)0x0) {
    puVar3 = &DAT_00000018;
  }
  *puVar3 = 1;
  return;
}

// TrimSection @ 1467c4620

void __thiscall
UMovieSceneSkeletalAnimationSection::TrimSection
          (UMovieSceneSkeletalAnimationSection *this,FQualifiedFrameTime *param_1,bool param_2,
          bool param_3)

{
  bool bVar1;
  UClass *pUVar2;
  UObject *pUVar3;
  double dVar4;
  double dVar5;
  undefined1 in_XMM2 [16];
  undefined1 auVar6 [16];
  double dVar7;
  int local_48;
  float local_44;
  FFrameRate local_40;
  TRange<FFrameNumber> local_38;
  FMovieSceneSequenceTransform local_28;
  
  UObjectBase::AtomicallySetFlags((UObjectBase *)this,RF_Transactional);
  bVar1 = UMovieSceneSection::TryModify((UMovieSceneSection *)this,true);
  if (bVar1) {
    if (param_2) {
      pUVar2 = Z_Construct_UClass_UMovieScene_NoRegister();
      pUVar3 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar2);
      local_38.LowerBound.Type.Value = this->field_0xb0;
      local_38.LowerBound._1_3_ = *(undefined3 *)&this->field_0xb1;
      local_38.LowerBound.Value.Value = *(int *)&this->field_0xb4;
      local_38.UpperBound.Type.Value = this->field_0xb8;
      local_38.UpperBound._1_3_ = *(undefined3 *)&this->field_0xb9;
      local_38.UpperBound.Value.Value = *(int *)&this->field_0xbc;
      local_40.Numerator = *(int *)&pUVar3[7].field_0x20;
      local_40.Denominator = *(int *)&pUVar3[7].field_0x24;
      FMovieSceneSkeletalAnimationParams::MakeTransform
                (&this->Params,&local_28,&local_40,&local_38,(UAnimSequenceBase *)0x0,true,false);
      FMovieSceneSequenceTransform::TransformTime(&local_28,(FFrameTime)&local_48);
      dVar7 = (((double)local_48 + (double)local_44) * (double)local_40.Numerator) /
              (double)local_40.Denominator;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = dVar7;
      auVar6 = roundpd(in_XMM2,auVar6,1);
      dVar4 = auVar6._0_8_;
      dVar5 = dVar4;
      if (__real_41dfffffffc00000 <= dVar4) {
        dVar5 = __real_41dfffffffc00000;
      }
      if (dVar5 <= __real_c1e0000000000000) {
        dVar5 = __real_c1e0000000000000;
      }
      (this->Params).FirstLoopStartFrameOffset.Value = (int)(dVar7 - dVar4) + (int)dVar5;
      DestructItems<FMovieSceneNestedSequenceTransform,int>
                ((FMovieSceneNestedSequenceTransform *)
                 local_28.NestedTransforms.AllocatorInstance.Data,local_28.NestedTransforms.ArrayNum
                );
      if ((FMovieSceneNestedSequenceTransform *)local_28.NestedTransforms.AllocatorInstance.Data !=
          (FMovieSceneNestedSequenceTransform *)0x0) {
        FMemory::Free(local_28.NestedTransforms.AllocatorInstance.Data);
      }
    }
    local_38.LowerBound = *(TRangeBound<FFrameNumber> *)&param_1->Time;
    local_38.UpperBound = *(TRangeBound<FFrameNumber> *)&param_1->Rate;
    UMovieSceneSection::TrimSection
              ((UMovieSceneSection *)this,(FQualifiedFrameTime *)&local_38,param_2,param_3);
  }
  return;
}

// _getUObject @ 1467ca870

UObject * __thiscall
UMovieSceneSkeletalAnimationSection::_getUObject(UMovieSceneSkeletalAnimationSection *this)

{
  return (UObject *)&this[-1].StartOffset_DEPRECATED;
}

