// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 87

// StaticClass @ 1461e8f50

UClass * __cdecl UMovieSceneSection::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneSection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneSection",
               &Z_Registration_Info_UClass_UMovieSceneSection.InnerSingleton,
               StaticRegisterNativesUMovieSceneSection,0x110,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneSection>,
               InternalVTableHelperCtorCaller<UMovieSceneSection>,local_res8,
               UMovieSceneDecorationContainerObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneSection.InnerSingleton;
}

// UMovieSceneSection @ 1461fdd70

UMovieSceneSection * __thiscall
UMovieSceneSection::UMovieSceneSection(UMovieSceneSection *this,FVTableHelper *param_1)

{
  TRangeBound<FFrameNumber> TVar1;
  TRangeBound<FFrameNumber> TVar2;
  uint local_res8;
  uint local_res18;
  
  UMovieSceneDecorationContainerObject::UMovieSceneDecorationContainerObject
            ((UMovieSceneDecorationContainerObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneSection__6B_;
  (this->EvalOptions).bCanEditCompletionMode = false;
  (this->EvalOptions).CompletionMode = KeepState;
  (this->Easing).AutoEaseInDuration = 0;
  (this->Easing).AutoEaseOutDuration = 0;
  *(undefined8 *)&(this->Easing).EaseIn = 0;
  *(undefined8 *)&(this->Easing).EaseIn.field_0x8 = 0;
  (this->Easing).bManualEaseIn = false;
  (this->Easing).ManualEaseInDuration = 0;
  *(undefined8 *)&(this->Easing).EaseOut = 0;
  *(undefined8 *)&(this->Easing).EaseOut.field_0x8 = 0;
  (this->Easing).bManualEaseOut = false;
  (this->Easing).ManualEaseOutDuration = 0;
  local_res8 = local_res8 & 0xffffff00;
  TVar1.Value.Value = 0;
  TVar1._0_4_ = local_res8;
  (this->SectionRange).Value.LowerBound = TVar1;
  local_res18 = local_res18 & 0xffffff00;
  TVar2.Value.Value = 0;
  TVar2._0_4_ = local_res18;
  (this->SectionRange).Value.UpperBound = TVar2;
  (this->ConditionContainer).Condition.field0_0x0.DebugPtr = (UMovieSceneCondition *)0x0;
  this->PreRollFrames = 0;
  this->PostRollFrames = 0;
  (this->BlendType).BlendType = Absolute;
  (this->BlendType).bIsValid = false;
  (this->ChannelProxy).Object = (FMovieSceneChannelProxy *)0x0;
  (this->ChannelProxy).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  return this;
}

// UMovieSceneSection @ 1461fde30

UMovieSceneSection * __thiscall
UMovieSceneSection::UMovieSceneSection(UMovieSceneSection *this,FObjectInitializer *param_1)

{
  uint uVar1;
  FName FVar2;
  TRangeBound<FFrameNumber> TVar3;
  TRangeBound<FFrameNumber> TVar4;
  FName *pFVar5;
  UClass *pUVar6;
  UObjectBase *pUVar7;
  UObjectBase *pUVar8;
  FName local_res8;
  uint local_28;
  uint uStack_20;
  
  UMovieSceneDecorationContainerObject::UMovieSceneDecorationContainerObject
            ((UMovieSceneDecorationContainerObject *)this,param_1);
  local_28 = CONCAT31(local_28._1_3_,1);
  this->_padding_ = (longlong)&___7UMovieSceneSection__6B_;
  (this->EvalOptions).bCanEditCompletionMode = false;
  (this->EvalOptions).CompletionMode = KeepState;
  (this->Easing).AutoEaseInDuration = 0;
  (this->Easing).AutoEaseOutDuration = 0;
  *(undefined8 *)&(this->Easing).EaseIn = 0;
  *(undefined8 *)&(this->Easing).EaseIn.field_0x8 = 0;
  (this->Easing).bManualEaseIn = false;
  (this->Easing).ManualEaseInDuration = 0;
  *(undefined8 *)&(this->Easing).EaseOut = 0;
  *(undefined8 *)&(this->Easing).EaseOut.field_0x8 = 0;
  (this->Easing).bManualEaseOut = false;
  (this->Easing).ManualEaseOutDuration = 0;
  this->bIsInfinite_DEPRECATED = 0;
  (this->ConditionContainer).Condition.field0_0x0.DebugPtr = (UMovieSceneCondition *)0x0;
  this->PreRollFrames = 0;
  this->PostRollFrames = 0;
  (this->BlendType).bIsValid = false;
  (this->ChannelProxy).Object = (FMovieSceneChannelProxy *)0x0;
  (this->ChannelProxy).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  uStack_20 = CONCAT31(uStack_20._1_3_,1);
  TVar3.Value.Value = 0;
  TVar3._0_4_ = local_28;
  TVar4.Value.Value = 0;
  TVar4._0_4_ = uStack_20;
  this->bIsActive = 1;
  this->bIsLocked = 0;
  this->RowIndex = 0;
  this->OverlapPriority = 0;
  this->StartTime_DEPRECATED = 0.0;
  this->EndTime_DEPRECATED = 0.0;
  this->PreRollTime_DEPRECATED = 0.0;
  this->PostRollTime_DEPRECATED = 0.0;
  this->bSupportsInfiniteRange = false;
  (this->BlendType).BlendType = Absolute;
  (this->SectionRange).Value.LowerBound = TVar3;
  (this->SectionRange).Value.UpperBound = TVar4;
  pFVar5 = ::FName::FName(&local_res8,"EaseInFunction");
  FVar2 = *pFVar5;
  pUVar6 = Z_Construct_UClass_UMovieSceneBuiltInEasingFunction_NoRegister();
  pUVar7 = (UObjectBase *)
           FObjectInitializer::CreateDefaultSubobject
                     (param_1,(UObject *)this,FVar2,pUVar6,pUVar6,true,false);
  UObjectBase::AtomicallySetFlags(pUVar7,RF_Public);
  *(undefined1 *)&pUVar7[1].ObjectFlags = RF_Transactional|RF_Standalone;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObjectBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  pUVar8 = pUVar7 + 1;
  if (pUVar7 == (UObjectBase *)0x0) {
    pUVar8 = (UObjectBase *)0x0;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObjectBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  *(UObjectBase **)&(this->Easing).EaseIn = pUVar7;
  *(UObjectBase **)&(this->Easing).EaseIn.field_0x8 = pUVar8;
  pFVar5 = ::FName::FName(&local_res8,"EaseOutFunction");
  FVar2 = *pFVar5;
  pUVar6 = Z_Construct_UClass_UMovieSceneBuiltInEasingFunction_NoRegister();
  pUVar7 = (UObjectBase *)
           FObjectInitializer::CreateDefaultSubobject
                     (param_1,(UObject *)this,FVar2,pUVar6,pUVar6,true,false);
  UObjectBase::AtomicallySetFlags(pUVar7,RF_Public);
  *(undefined1 *)&pUVar7[1].ObjectFlags = RF_Transactional|RF_Standalone;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObjectBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  pUVar8 = pUVar7 + 1;
  if (pUVar7 == (UObjectBase *)0x0) {
    pUVar8 = (UObjectBase *)0x0;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObjectBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  *(UObjectBase **)&(this->Easing).EaseOut = pUVar7;
  *(UObjectBase **)&(this->Easing).EaseOut.field_0x8 = pUVar8;
  this->ChannelProxyType = Static;
  return this;
}

// ~UMovieSceneSection @ 1461ffcf0

void __thiscall UMovieSceneSection::~UMovieSceneSection(UMovieSceneSection *this)

{
  this->_padding_ = (longlong)&___7UMovieSceneSection__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ChannelProxy).SharedReferenceCount.ReferenceController);
  UMovieSceneDecorationContainerObject::~UMovieSceneDecorationContainerObject
            ((UMovieSceneDecorationContainerObject *)this);
  return;
}

// BuildDefaultComponents @ 146208b00

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneSection::BuildDefaultComponents
          (UMovieSceneSection *this,UMovieSceneEntitySystemLinker *param_1,
          FEntityImportParams *param_2,FImportedEntity *param_3)

{
  undefined1 *puVar1;
  FOptionalMovieSceneBlendType *this_00;
  EMovieSceneSubSectionFlags EVar2;
  EMovieSceneCompletionMode EVar3;
  undefined1 uVar4;
  FMovieSceneEvaluationFieldEntityMetaData *pFVar5;
  bool bVar6;
  undefined1 uVar7;
  FImportedEntity *this_01;
  EMovieSceneBlendType EVar8;
  FBuiltInComponentTypes *pFVar9;
  longlong lVar10;
  UClass *pUVar11;
  longlong *plVar12;
  UObjectBaseUtility *this_02;
  undefined8 *puVar13;
  UObject *pUVar14;
  TRangeBound<FFrameNumber> TVar15;
  undefined1 uVar16;
  int iVar17;
  FFrameNumber FVar18;
  TObjectPtr<UClass>_u_0 TVar19;
  TObjectPtr<UClass>_u_0 TVar20;
  ushort uVar21;
  uint uVar22;
  undefined8 local_res8;
  FAddConditional local_res18 [2];
  FImportedEntity *local_res20;
  bool local_6f8;
  bool local_6f7;
  FAddConditional local_6f4;
  FAddConditional local_6f0;
  FAddConditional local_6ec;
  FAddConditional local_6e8;
  FAddConditional local_6e4;
  undefined4 local_6e0;
  undefined4 local_6d8;
  int iStack_6d4;
  TComponentTypeID<FFrameTime> local_6d0;
  undefined1 local_6ce;
  FFrameTime local_6cc;
  bool local_6c4;
  undefined4 local_6c0;
  undefined **local_6b0;
  TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_> local_6a8;
  TAddConditional<int> local_690;
  TAddConditional<FEasingComponentData> local_680;
  TAddConditional<short> local_668;
  TAddConditional<UE::MovieScene::FInterrogationKey> local_660;
  bool local_650 [8];
  TComponentTypeID<UE::MovieScene::FInterrogationInstance> local_648;
  undefined1 local_646;
  FInterrogationInstance local_640;
  bool local_638;
  undefined4 local_630;
  undefined **local_620;
  TComponentTypeID<FFrameTime> local_618;
  ulonglong local_614;
  undefined1 local_60c;
  undefined1 local_608;
  undefined1 local_600 [8];
  char local_5f8;
  undefined1 uStack_5f7;
  undefined1 uStack_5f6;
  undefined1 uStack_5f5;
  uint uStack_5f4;
  undefined1 uStack_5f0;
  undefined1 uStack_5ef;
  undefined1 uStack_5ee;
  undefined1 uStack_5ed;
  undefined1 uStack_5ec;
  undefined1 uStack_5eb;
  undefined1 uStack_5ea;
  undefined1 uStack_5e9;
  undefined4 local_5e8;
  undefined4 local_5d0;
  undefined **local_5b8;
  undefined1 local_5b0 [40];
  TAddConditional<FEasingComponentData> local_588;
  TAddConditional<short> local_570;
  TAddConditional<UE::MovieScene::FInterrogationKey> local_568;
  TAddConditional<UE::MovieScene::FInterrogationInstance> local_558;
  TAddConditional<FFrameTime> local_540;
  FAddConditional local_530;
  FAddConditional local_52c;
  FAddConditional local_528;
  FAddConditional local_524;
  FAddConditional local_520;
  FAddConditional local_51c [3];
  undefined **local_510;
  undefined1 local_508 [40];
  TAddConditional<FEasingComponentData> local_4e0;
  TAddConditional<short> local_4c8;
  TAddConditional<UE::MovieScene::FInterrogationKey> local_4c0;
  TAddConditional<UE::MovieScene::FInterrogationInstance> local_4b0;
  TAddConditional<FFrameTime> local_498;
  FAddConditional local_488;
  FAddConditional local_484;
  FAddConditional local_480;
  FAddConditional local_47c;
  FAddConditional local_478 [4];
  undefined **local_468;
  undefined1 local_460 [40];
  TAddConditional<FEasingComponentData> local_438;
  TAddConditional<short> local_420;
  TAddConditional<UE::MovieScene::FInterrogationKey> local_418;
  TAddConditional<UE::MovieScene::FInterrogationInstance> local_408;
  TAddConditional<FFrameTime> local_3f0;
  FAddConditional local_3e0;
  FAddConditional local_3dc;
  FAddConditional local_3d8;
  FAddConditional local_3d4 [3];
  undefined **local_3c8;
  undefined1 local_3c0 [40];
  TAddConditional<FEasingComponentData> local_398;
  TAddConditional<short> local_380;
  TAddConditional<UE::MovieScene::FInterrogationKey> local_378;
  TAddConditional<UE::MovieScene::FInterrogationInstance> local_368;
  TAddConditional<FFrameTime> local_350;
  FAddConditional local_340;
  FAddConditional local_33c;
  FAddConditional local_338 [4];
  undefined **local_328;
  undefined1 local_320 [40];
  TAddConditional<FEasingComponentData> local_2f8;
  TAddConditional<short> local_2e0;
  TAddConditional<UE::MovieScene::FInterrogationKey> local_2d8;
  TAddConditional<UE::MovieScene::FInterrogationInstance> local_2c8;
  TAddConditional<FFrameTime> local_2b0;
  FAddConditional local_2a0;
  FAddConditional local_29c [3];
  undefined **local_290;
  undefined1 local_288 [40];
  TAddConditional<FEasingComponentData> local_260;
  TAddConditional<short> local_248;
  TAddConditional<UE::MovieScene::FInterrogationKey> local_240;
  TAddConditional<UE::MovieScene::FInterrogationInstance> local_230;
  TAddConditional<FFrameTime> local_218;
  FAddConditional local_208 [4];
  undefined **local_1f8;
  undefined1 local_1f0 [40];
  TAddConditional<FEasingComponentData> local_1c8;
  TAddConditional<short> local_1b0;
  TAddConditional<UE::MovieScene::FInterrogationKey> local_1a8;
  TAddConditional<UE::MovieScene::FInterrogationInstance> local_198;
  TAddConditional<FFrameTime> local_180;
  undefined1 local_170;
  undefined **local_168;
  TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_> local_160;
  TAddConditional<int> local_148;
  TAddConditional<FEasingComponentData> local_138;
  TAddConditional<short> local_120;
  TAddConditional<UE::MovieScene::FInterrogationKey> local_118;
  TAddConditional<UE::MovieScene::FInterrogationInstance> local_108;
  undefined1 local_f0;
  undefined **local_e8;
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11,12,13>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
  local_e0;
  undefined1 local_40;
  
  local_res20 = param_3;
  pFVar9 = UE::MovieScene::FBuiltInComponentTypes::Get();
  this_00 = &this->BlendType;
  uVar21 = 0xffff;
  if ((this->BlendType).bIsValid != false) {
    if (this_00->BlendType == Absolute) {
      uVar21 = (pFVar9->Tags).AbsoluteBlend.Value;
    }
    else if (this_00->BlendType == Relative) {
      uVar21 = (pFVar9->Tags).RelativeBlend.Value;
    }
    else {
      EVar8 = FOptionalMovieSceneBlendType::Get(this_00);
      if (EVar8 == Additive) {
        uVar21 = (pFVar9->Tags).AdditiveBlend.Value;
      }
      else {
        EVar8 = FOptionalMovieSceneBlendType::Get(this_00);
        if (EVar8 == AdditiveFromBase) {
          uVar21 = (pFVar9->Tags).AdditiveFromBaseBlend.Value;
        }
        else {
          EVar8 = FOptionalMovieSceneBlendType::Get(this_00);
          if (EVar8 == Override) {
            uVar21 = (pFVar9->Tags).OverrideBlend.Value;
          }
        }
      }
    }
  }
  local_6f4 = (FAddConditional)GetBlendingOrder(this);
  if ((this->Easing).bManualEaseIn == false) {
    iVar17 = (this->Easing).AutoEaseInDuration;
  }
  else {
    iVar17 = (this->Easing).ManualEaseInDuration;
  }
  if (iVar17 < 1) {
    lVar10 = 0xac;
    if ((this->Easing).bManualEaseOut == false) {
      lVar10 = 0x7c;
    }
    local_res8 = (FInterrogationKey)((ulonglong)local_res8 & 0xffffffffffffff00);
    if (0 < *(int *)((longlong)&this->_padding_ + lVar10)) goto LAB_146208be4;
  }
  else {
LAB_146208be4:
    local_res8 = (FInterrogationKey)CONCAT71(local_res8._1_7_,1);
  }
  EVar2 = (param_2->Sequence).SubSectionFlags;
  if (((EVar2 & OverrideKeepState) == None) &&
     ((((EVar2 & OverrideRestoreState) != None ||
       (EVar3 = (this->EvalOptions).CompletionMode, EVar3 == RestoreState)) ||
      ((EVar3 == ProjectDefault && ((param_2->Sequence).DefaultCompletionMode == RestoreState))))))
  {
    local_6f8 = true;
  }
  else {
    local_6f8 = false;
  }
  pFVar5 = param_2->EntityMetaData;
  if ((pFVar5 == (FMovieSceneEvaluationFieldEntityMetaData *)0x0) ||
     ((pFVar5->ForcedTime).Value == -0x80000000)) {
    local_res18[0].ComponentTypeID.Value = (ushort)local_res18[0].ComponentTypeID.Value._1_1_ << 8;
    if (pFVar5 != (FMovieSceneEvaluationFieldEntityMetaData *)0x0) goto LAB_146208c3b;
LAB_146208c45:
    local_6f7 = false;
  }
  else {
    local_res18[0].ComponentTypeID.Value._0_1_ = 1;
LAB_146208c3b:
    local_6f7 = true;
    if ((pFVar5->Flags & (PostRoll|PreRoll)) == None) goto LAB_146208c45;
  }
  uVar22 = 0;
  if (this == (UMovieSceneSection *)0x0) {
LAB_146208c76:
    pUVar11 = Z_Construct_UClass_UMovieSceneBlenderSystemSupport_NoRegister();
    this_02 = UObjectBaseUtility::GetImplementingOuterObject((UObjectBaseUtility *)this,pUVar11);
    TVar20.DebugPtr = (UClass *)0x0;
    if ((this_02 != (UObjectBaseUtility *)0x0) &&
       (plVar12 = UObjectBaseUtility::GetInterfaceAddress(this_02,pUVar11),
       TVar20.DebugPtr = (UClass *)0x0, plVar12 != (longlong *)0x0)) goto LAB_146208ca1;
  }
  else {
    pUVar11 = Z_Construct_UClass_UMovieSceneBlenderSystemSupport_NoRegister();
    plVar12 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this,pUVar11);
    if (plVar12 == (longlong *)0x0) goto LAB_146208c76;
LAB_146208ca1:
    puVar13 = (undefined8 *)(**(code **)(*plVar12 + 0x10))(plVar12,local_600);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UObject *)*puVar13 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)*puVar13);
    }
    TVar20.DebugPtr = (UClass *)*puVar13;
  }
  if ((TVar20.DebugPtr != (UClass *)0x0) &&
     (pUVar11 = Z_Construct_UClass_UMovieSceneBlenderSystem_NoRegister(), pUVar11 != (UClass *)0x0))
  {
    iVar17 = (int)pUVar11->_padding_;
    if (((int)(TVar20.DebugPtr)->_padding_ < iVar17) ||
       ((longlong *)*(undefined1 **)((TVar20.DebugPtr)->_padding_ + (longlong)iVar17 * 8) !=
        &pUVar11->_padding_)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    TVar19 = TVar20;
    if (bVar6) goto LAB_146208d00;
  }
  TVar19.DebugPtr = (UClass *)0x0;
LAB_146208d00:
  local_5e8._0_3_ = CONCAT12(TVar19.DebugPtr != (UClass *)0x0,pFVar9->BlenderType);
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (TVar20.DebugPtr != (UClass *)0x0) {
      UE::GC::MarkAsReachable((UObject *)TVar20.DebugPtr);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar20.DebugPtr != (UClass *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)TVar20.DebugPtr);
    }
  }
  local_6c0 = CONCAT22(CONCAT11(local_6c0._3_1_,local_6f4 != (FAddConditional)0xffffffff),
                       pFVar9->BlendingOrder);
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (TVar20.DebugPtr != (UClass *)0x0) {
      UE::GC::MarkAsReachable((UObject *)TVar20.DebugPtr);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UMovieSceneSection *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)this);
    }
  }
  local_5d0._0_3_ = CONCAT12((undefined1)local_res8,pFVar9->Easing);
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (this != (UMovieSceneSection *)0x0) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (TVar20.DebugPtr != (UClass *)0x0) {
        UE::GC::MarkAsReachable((UObject *)TVar20.DebugPtr);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UMovieSceneSection *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
    }
  }
  iVar17 = (param_2->Sequence).HierarchicalBias;
  local_6e0 = CONCAT22(CONCAT11(local_6e0._3_1_,iVar17 != 0),pFVar9->HierarchicalBias);
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (TVar20.DebugPtr != (UClass *)0x0) {
      UE::GC::MarkAsReachable((UObject *)TVar20.DebugPtr);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UMovieSceneSection *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)this);
    }
  }
  if (((param_2->InterrogationKey).Channel.Value == -1) ||
     ((param_2->InterrogationKey).InterrogationIndex == -1)) {
    uVar16 = 0;
  }
  else {
    uVar16 = 1;
  }
  local_res8 = param_2->InterrogationKey;
  local_6a8._padding_._0_4_ = local_5e8;
  local_630._0_3_ = CONCAT12(uVar16,(pFVar9->Interrogation).InputKey);
  local_6a8.Payload.bIsSet = true;
  local_6a8.Payload.TypedValue.Class.field0_0x0 = (TObjectPtr<UClass>)(TObjectPtr<UClass>)TVar20;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar20.DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)TVar20.DebugPtr);
  }
  local_690._padding_ = local_6c0;
  local_690.Payload.TypedValue._0_2_ = local_6f4.ComponentTypeID.Value;
  local_690.Payload.TypedValue._2_1_ = local_6f4.bCondition;
  local_690.Payload.TypedValue._3_1_ = local_6f4._3_1_;
  local_680._padding_._0_4_ = local_5d0;
  local_690.Payload.bIsSet = true;
  local_680.Payload.bIsSet = true;
  local_680.Payload.TypedValue.Section.field0_0x0 =
       (TObjectPtr<UMovieSceneSection>)(TObjectPtr<UMovieSceneSection>)this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UMovieSceneSection *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  local_668._padding_ = local_6e0;
  local_660._padding_ = local_630;
  local_660.Payload.TypedValue = local_res8;
  local_6b0 = &
              ___7__TEntityBuilder_U__TAddConditional_V__TSubclassOf_VUMovieSceneBlenderSystem_____MovieScene_UE__U__TAddConditional_H_23_U__TAddConditional_UFEasingComponentData___23_U__TAddConditional_F_23_U__TAddConditional_UFInterrogationKey_MovieScene_UE___23__MovieScene_UE__6B_
  ;
  local_648 = (pFVar9->Interrogation).Instance;
  local_640.Sequence = (param_2->InterrogationInstance).Sequence;
  local_646 = local_640.Sequence != (UMovieSceneSequence *)0x0;
  local_668.Payload.bIsSet = true;
  local_668.Payload.TypedValue = (short)iVar17;
  local_660.Payload.bIsSet = true;
  local_650[0] = false;
  local_638 = true;
  UE::MovieScene::
  TEntityBuilder<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>_>
  ::
  TEntityBuilder<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>_><UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,bool_&>
            ((TEntityBuilder<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>_>
              *)&local_168,&local_6a8,&local_690,&local_680,&local_668,&local_660,
             (TAddConditional<UE::MovieScene::FInterrogationInstance> *)&local_648,local_650);
  if (param_2->EntityMetaData != (FMovieSceneEvaluationFieldEntityMetaData *)0x0) {
    uVar22 = (param_2->EntityMetaData->ForcedTime).Value;
  }
  local_6d0 = pFVar9->EvalTime;
  uVar16 = (undefined1)local_res18[0].ComponentTypeID.Value;
  local_res8._4_4_ = 0.0;
  local_res8._0_4_ = uVar22;
  local_6cc = (FFrameTime)local_res8;
  local_1f8 = &
              ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02_03_04_05__U__TAddConditional_V__TSubclassOf_VUMovieSceneBlenderSystem_____MovieScene_UE__U__TAddConditional_H_34_U__TAddConditional_UFEasingComponentData___34_U__TAddConditional_F_34_U__TAddConditional_UFInterrogationKey_MovieScene_UE___34_U__TAddConditional_UFInterrogationInstance_MovieScene_UE___34_U__TAddConditional_UFFrameTime___34__MovieScene_UE__6B_
  ;
  local_6ce = (undefined1)local_res18[0].ComponentTypeID.Value;
  local_6c4 = true;
  UE::Core::Private::Tuple::
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>_>
  ::
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>_><UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>_>
            ((TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>_>
              *)local_1f0,ForwardingConstructor,&local_160,&local_148,&local_138,&local_120,
             &local_118,&local_108,(TAddConditional<FFrameTime> *)&local_6d0);
  local_170 = local_f0;
  local_1f8 = &
              ___7__TEntityBuilder_U__TAddConditional_V__TSubclassOf_VUMovieSceneBlenderSystem_____MovieScene_UE__U__TAddConditional_H_23_U__TAddConditional_UFEasingComponentData___23_U__TAddConditional_F_23_U__TAddConditional_UFInterrogationKey_MovieScene_UE___23_U__TAddConditional_UFInterrogationInstance_MovieScene_UE___23_U__TAddConditional_UFFrameTime___23__MovieScene_UE__6B_
  ;
  local_res8._0_3_ = CONCAT12(local_6f8,(pFVar9->Tags).RestoreState.Value);
  local_290 = &
              ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02_03_04_05_06__U__TAddConditional_V__TSubclassOf_VUMovieSceneBlenderSystem_____MovieScene_UE__U__TAddConditional_H_34_U__TAddConditional_UFEasingComponentData___34_U__TAddConditional_F_34_U__TAddConditional_UFInterrogationKey_MovieScene_UE___34_U__TAddConditional_UFInterrogationInstance_MovieScene_UE___34_U__TAddConditional_UFFrameTime___34_UFAddConditional_34__MovieScene_UE__6B_
  ;
  UE::Core::Private::Tuple::
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional>
  ::
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional><UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional>
            ((TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional>
              *)local_288,ForwardingConstructor,
             (TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_> *)local_1f0,
             (TAddConditional<int> *)(local_1f0 + 0x18),&local_1c8,&local_1b0,&local_1a8,&local_198,
             &local_180,(FAddConditional *)&local_res8);
  local_208[2].ComponentTypeID.Value._0_1_ = local_f0;
  local_290 = &
              ___7__TEntityBuilder_U__TAddConditional_V__TSubclassOf_VUMovieSceneBlenderSystem_____MovieScene_UE__U__TAddConditional_H_23_U__TAddConditional_UFEasingComponentData___23_U__TAddConditional_F_23_U__TAddConditional_UFInterrogationKey_MovieScene_UE___23_U__TAddConditional_UFInterrogationInstance_MovieScene_UE___23_U__TAddConditional_UFFrameTime___23_UFAddConditional_23__MovieScene_UE__6B_
  ;
  local_res18[0].ComponentTypeID.Value = (pFVar9->Tags).IgnoreHierarchicalBias.Value;
  local_res18[0].bCondition = (bool)((param_2->Sequence).SubSectionFlags >> 2 & 1);
  local_328 = &
              ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02_03_04_05_06_07__U__TAddConditional_V__TSubclassOf_VUMovieSceneBlenderSystem_____MovieScene_UE__U__TAddConditional_H_34_U__TAddConditional_UFEasingComponentData___34_U__TAddConditional_F_34_U__TAddConditional_UFInterrogationKey_MovieScene_UE___34_U__TAddConditional_UFInterrogationInstance_MovieScene_UE___34_U__TAddConditional_UFFrameTime___34_UFAddConditional_34_UFAddConditional_34__MovieScene_UE__6B_
  ;
  UE::Core::Private::Tuple::
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
  ::
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional><UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
            ((TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
              *)local_320,ForwardingConstructor,
             (TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_> *)local_288,
             (TAddConditional<int> *)(local_288 + 0x18),&local_260,&local_248,&local_240,&local_230,
             &local_218,local_208,local_res18);
  local_29c[1].ComponentTypeID.Value._0_1_ = local_f0;
  local_328 = &
              ___7__TEntityBuilder_U__TAddConditional_V__TSubclassOf_VUMovieSceneBlenderSystem_____MovieScene_UE__U__TAddConditional_H_23_U__TAddConditional_UFEasingComponentData___23_U__TAddConditional_F_23_U__TAddConditional_UFInterrogationKey_MovieScene_UE___23_U__TAddConditional_UFInterrogationInstance_MovieScene_UE___23_U__TAddConditional_UFFrameTime___23_UFAddConditional_23_UFAddConditional_23__MovieScene_UE__6B_
  ;
  local_6f4 = (FAddConditional)
              (CONCAT13(local_6f4._3_1_,
                        CONCAT12((param_2->Sequence).SubSectionFlags >> 3,
                                 (pFVar9->Tags).BlendHierarchicalBias.Value)) & 0xff01ffff);
  local_3c8 = &
              ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02_03_04_05_06_07_08__U__TAddConditional_V__TSubclassOf_VUMovieSceneBlenderSystem_____MovieScene_UE__U__TAddConditional_H_34_U__TAddConditional_UFEasingComponentData___34_U__TAddConditional_F_34_U__TAddConditional_UFInterrogationKey_MovieScene_UE___34_U__TAddConditional_UFInterrogationInstance_MovieScene_UE___34_U__TAddConditional_UFFrameTime___34_UFAddConditional_34_UFAddConditional_34_UFAddConditional_34__MovieScene_UE__6B_
  ;
  UE::Core::Private::Tuple::
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
  ::
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional><UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
            ((TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
              *)local_3c0,ForwardingConstructor,
             (TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_> *)local_320,
             (TAddConditional<int> *)(local_320 + 0x18),&local_2f8,&local_2e0,&local_2d8,&local_2c8,
             &local_2b0,&local_2a0,local_29c,&local_6f4);
  local_338[2].ComponentTypeID.Value._0_1_ = local_f0;
  local_3c8 = &
              ___7__TEntityBuilder_U__TAddConditional_V__TSubclassOf_VUMovieSceneBlenderSystem_____MovieScene_UE__U__TAddConditional_H_23_U__TAddConditional_UFEasingComponentData___23_U__TAddConditional_F_23_U__TAddConditional_UFInterrogationKey_MovieScene_UE___23_U__TAddConditional_UFInterrogationInstance_MovieScene_UE___23_U__TAddConditional_UFFrameTime___23_UFAddConditional_23_UFAddConditional_23_UFAddConditional_23__MovieScene_UE__6B_
  ;
  local_6f0.ComponentTypeID.Value = (pFVar9->Tags).FixedTime.Value;
  local_6f0.bCondition = (bool)uVar16;
  local_468 = &
              ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02_03_04_05_06_07_08_09__U__TAddConditional_V__TSubclassOf_VUMovieSceneBlenderSystem_____MovieScene_UE__U__TAddConditional_H_34_U__TAddConditional_UFEasingComponentData___34_U__TAddConditional_F_34_U__TAddConditional_UFInterrogationKey_MovieScene_UE___34_U__TAddConditional_UFInterrogationInstance_MovieScene_UE___34_U__TAddConditional_UFFrameTime___34_UFAddConditional_34_UFAddConditional_34_UFAddConditional_34_UFAddConditional_34__MovieScene_UE__6B_
  ;
  UE::Core::Private::Tuple::
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
  ::
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional><UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
            ((TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
              *)local_460,ForwardingConstructor,
             (TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_> *)local_3c0,
             (TAddConditional<int> *)(local_3c0 + 0x18),&local_398,&local_380,&local_378,&local_368,
             &local_350,&local_340,&local_33c,local_338,&local_6f0);
  local_468 = &
              ___7__TEntityBuilder_U__TAddConditional_V__TSubclassOf_VUMovieSceneBlenderSystem_____MovieScene_UE__U__TAddConditional_H_23_U__TAddConditional_UFEasingComponentData___23_U__TAddConditional_F_23_U__TAddConditional_UFInterrogationKey_MovieScene_UE___23_U__TAddConditional_UFInterrogationInstance_MovieScene_UE___23_U__TAddConditional_UFFrameTime___23_UFAddConditional_23_UFAddConditional_23_UFAddConditional_23_UFAddConditional_23__MovieScene_UE__6B_
  ;
  local_6ec.ComponentTypeID.Value = (pFVar9->Tags).SectionPreRoll.Value;
  local_510 = &
              ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02_03_04_05_06_07_08_09_0L___U__TAddConditional_V__TSubclassOf_VUMovieSceneBlenderSystem_____MovieScene_UE__U__TAddConditional_H_34_U__TAddConditional_UFEasingComponentData___34_U__TAddConditional_F_34_U__TAddConditional_UFInterrogationKey_MovieScene_UE___34_U__TAddConditional_UFInterrogationInstance_MovieScene_UE___34_U__TAddConditional_UFFrameTime___34_UFAddConditional_34_UFAddConditional_34_UFAddConditional_34_UFAddConditional_34_UFAddConditional_34__MovieScene_UE__6B_
  ;
  local_3d4[1].ComponentTypeID.Value._0_1_ = local_f0;
  local_6ec.bCondition = local_6f7;
  UE::Core::Private::Tuple::
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
  ::
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional><UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
            ((TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
              *)local_508,ForwardingConstructor,
             (TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_> *)local_460,
             (TAddConditional<int> *)(local_460 + 0x18),&local_438,&local_420,&local_418,&local_408,
             &local_3f0,&local_3e0,&local_3dc,&local_3d8,local_3d4,&local_6ec);
  local_478[2].ComponentTypeID.Value._0_1_ = local_f0;
  local_510 = &
              ___7__TEntityBuilder_U__TAddConditional_V__TSubclassOf_VUMovieSceneBlenderSystem_____MovieScene_UE__U__TAddConditional_H_23_U__TAddConditional_UFEasingComponentData___23_U__TAddConditional_F_23_U__TAddConditional_UFInterrogationKey_MovieScene_UE___23_U__TAddConditional_UFInterrogationInstance_MovieScene_UE___23_U__TAddConditional_UFFrameTime___23_UFAddConditional_23_UFAddConditional_23_UFAddConditional_23_UFAddConditional_23_UFAddConditional_23__MovieScene_UE__6B_
  ;
  if (((bool)(param_2->Sequence).bPreRoll || (bool)(param_2->Sequence).bPostRoll) ||
     (local_6f7 != false)) {
    local_6e8.bCondition = true;
  }
  else {
    local_6e8.bCondition = false;
  }
  local_6e8.ComponentTypeID.Value = (pFVar9->Tags).PreRoll.Value;
  local_5b8 = &
              ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02_03_04_05_06_07_08_09_0L__0M___U__TAddConditional_V__TSubclassOf_VUMovieSceneBlenderSystem_____MovieScene_UE__U__TAddConditional_H_34_U__TAddConditional_UFEasingComponentData___34_U__TAddConditional_F_34_U__TAddConditional_UFInterrogationKey_MovieScene_UE___34_U__TAddConditional_UFInterrogationInstance_MovieScene_UE___34_U__TAddConditional_UFFrameTime___34_UFAddConditional_34_UFAddConditional_34_UFAddConditional_34_UFAddConditional_34_UFAddConditional_34_UFAddConditional_34__MovieScene_UE__6B_
  ;
  UE::Core::Private::Tuple::
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11,12>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
  ::
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11,12>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional><UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
            ((TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11,12>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
              *)local_5b0,ForwardingConstructor,
             (TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_> *)local_508,
             (TAddConditional<int> *)(local_508 + 0x18),&local_4e0,&local_4c8,&local_4c0,&local_4b0,
             &local_498,&local_488,&local_484,&local_480,&local_47c,local_478,&local_6e8);
  local_51c[1].ComponentTypeID.Value._0_1_ = local_f0;
  local_5b8 = &
              ___7__TEntityBuilder_U__TAddConditional_V__TSubclassOf_VUMovieSceneBlenderSystem_____MovieScene_UE__U__TAddConditional_H_23_U__TAddConditional_UFEasingComponentData___23_U__TAddConditional_F_23_U__TAddConditional_UFInterrogationKey_MovieScene_UE___23_U__TAddConditional_UFInterrogationInstance_MovieScene_UE___23_U__TAddConditional_UFFrameTime___23_UFAddConditional_23_UFAddConditional_23_UFAddConditional_23_UFAddConditional_23_UFAddConditional_23_UFAddConditional_23__MovieScene_UE__6B_
  ;
  local_6e4.bCondition = uVar21 != 0xffff;
  local_e8 = &
             ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02_03_04_05_06_07_08_09_0L__0M__0N___U__TAddConditional_V__TSubclassOf_VUMovieSceneBlenderSystem_____MovieScene_UE__U__TAddConditional_H_34_U__TAddConditional_UFEasingComponentData___34_U__TAddConditional_F_34_U__TAddConditional_UFInterrogationKey_MovieScene_UE___34_U__TAddConditional_UFInterrogationInstance_MovieScene_UE___34_U__TAddConditional_UFFrameTime___34_UFAddConditional_34_UFAddConditional_34_UFAddConditional_34_UFAddConditional_34_UFAddConditional_34_UFAddConditional_34_UFAddConditional_34__MovieScene_UE__6B_
  ;
  local_6e4.ComponentTypeID.Value = uVar21;
  UE::Core::Private::Tuple::
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11,12,13>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
  ::
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11,12,13>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional><UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
            (&local_e0,ForwardingConstructor,
             (TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_> *)local_5b0,
             (TAddConditional<int> *)(local_5b0 + 0x18),&local_588,&local_570,&local_568,&local_558,
             &local_540,&local_530,&local_52c,&local_528,&local_524,&local_520,local_51c,&local_6e4)
  ;
  this_01 = local_res20;
  local_e8 = &
             ___7__TEntityBuilder_U__TAddConditional_V__TSubclassOf_VUMovieSceneBlenderSystem_____MovieScene_UE__U__TAddConditional_H_23_U__TAddConditional_UFEasingComponentData___23_U__TAddConditional_F_23_U__TAddConditional_UFInterrogationKey_MovieScene_UE___23_U__TAddConditional_UFInterrogationInstance_MovieScene_UE___23_U__TAddConditional_UFFrameTime___23_UFAddConditional_23_UFAddConditional_23_UFAddConditional_23_UFAddConditional_23_UFAddConditional_23_UFAddConditional_23_UFAddConditional_23__MovieScene_UE__6B_
  ;
  local_40 = local_f0;
  UE::MovieScene::FImportedEntity::
  AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>_>
            (local_res20,
             (TEntityBuilder<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
              *)&local_e8);
  local_e8 = &___7IEntityBuilder_MovieScene_UE__6B_;
  local_5b8 = &___7IEntityBuilder_MovieScene_UE__6B_;
  local_510 = &___7IEntityBuilder_MovieScene_UE__6B_;
  local_468 = &___7IEntityBuilder_MovieScene_UE__6B_;
  local_3c8 = &___7IEntityBuilder_MovieScene_UE__6B_;
  local_328 = &___7IEntityBuilder_MovieScene_UE__6B_;
  local_290 = &___7IEntityBuilder_MovieScene_UE__6B_;
  local_1f8 = &___7IEntityBuilder_MovieScene_UE__6B_;
  local_168 = &___7IEntityBuilder_MovieScene_UE__6B_;
  local_6b0 = &___7IEntityBuilder_MovieScene_UE__6B_;
  if (uVar21 == (pFVar9->Tags).AdditiveFromBaseBlend.Value) {
    pUVar11 = Z_Construct_UClass_UMovieScene_NoRegister();
    pUVar14 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar11);
    local_5f8 = pUVar14[7].field_0x10;
    uStack_5f7 = pUVar14[7].field_0x11;
    uStack_5f6 = pUVar14[7].field_0x12;
    uStack_5f5 = pUVar14[7].field_0x13;
    uStack_5f4 = *(uint *)&pUVar14[7].field_0x14;
    uStack_5f0 = pUVar14[7].field_0x18;
    uStack_5ef = pUVar14[7].field_0x19;
    uStack_5ee = pUVar14[7].field_0x1a;
    uStack_5ed = pUVar14[7].field_0x1b;
    uStack_5ec = pUVar14[7].field_0x1c;
    uStack_5eb = pUVar14[7].field_0x1d;
    uStack_5ea = pUVar14[7].field_0x1e;
    uStack_5e9 = pUVar14[7].field_0x1f;
    TVar15 = (this->SectionRange).Value.LowerBound;
    if (TVar15.Type.Value.Value == '\0') {
      iStack_6d4 = TVar15.Value.Value.Value + 1;
      local_6d8 = CONCAT31(local_6d8._1_3_,1);
      TVar15.Value.Value = iStack_6d4;
      TVar15._0_4_ = local_6d8;
    }
    FVar18.Value = TVar15.Value.Value.Value;
    if ((TVar15.Type.Value.Value == '\x02') && (FVar18.Value = 0, local_5f8 != '\x02')) {
      FVar18.Value = uStack_5f4;
    }
    local_618 = pFVar9->BaseValueEvalTime;
    local_res8 = (FInterrogationKey)(ulonglong)(uint)FVar18.Value;
    local_614 = (ulonglong)local_res8;
    local_620 = &___7__TEntityBuilder_U__TAdd_UFFrameTime___MovieScene_UE___MovieScene_UE__6B_;
    local_60c = 1;
    local_608 = 0;
    UE::MovieScene::FImportedEntity::
    AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<FFrameTime>_>_>
              (this_01,(TEntityBuilder<UE::MovieScene::TAdd<FFrameTime>_> *)&local_620);
  }
  return;
}

// CacheChannelProxy @ 146209670

EMovieSceneChannelProxyType __thiscall
UMovieSceneSection::CacheChannelProxy(UMovieSceneSection *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  EMovieSceneChannelProxyType EVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  FMovieSceneChannelProxy *pFVar9;
  FMovieSceneChannelProxy *local_28;
  FSharedReferencer<1> local_20;
  
  pTVar7 = ::operator_new(0x68);
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    pFVar9 = (FMovieSceneChannelProxy *)&DAT_00000010;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pFVar9 = (FMovieSceneChannelProxy *)(pTVar7 + 1);
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFMovieSceneChannelProxy___00_SharedPointerInternals__6B_
    ;
    pTVar7[1]._padding_ = 0;
    pTVar7[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[2]._padding_ = 0;
    pTVar7[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[3]._padding_ = 0;
    pTVar7[3].SharedReferenceCount = (atomic<int>)0x2;
    pTVar7[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[5].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar7[6]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar7[6]._padding_ + 4) = 1;
    pTVar8 = pTVar7;
    if (pFVar9 == (FMovieSceneChannelProxy *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        EVar6 = (*pcVar4)();
        return EVar6;
      }
      goto LAB_146209790;
    }
  }
  if (((pFVar9->_padding_ == 0) || (pFVar9->_padding_ == 0)) ||
     (*(int *)(pFVar9->_padding_ + 8) < 1)) {
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar9->_padding_ = (longlong)pFVar9;
    if (pTVar8 != (TReferenceControllerBase<1> *)pFVar9->_padding_) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)pFVar9->_padding_;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
      pFVar9->_padding_ = (longlong)pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
LAB_146209790:
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28 = pFVar9;
  local_20.ReferenceController = pTVar8;
  if (&this->ChannelProxy != (TSharedPtr<FMovieSceneChannelProxy,1> *)&local_28) {
    (this->ChannelProxy).Object = pFVar9;
    local_28 = (FMovieSceneChannelProxy *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ChannelProxy).SharedReferenceCount,&local_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return Static;
}

// CanHaveOpenLowerBound @ 14620a800

bool __thiscall UMovieSceneSection::CanHaveOpenLowerBound(UMovieSceneSection *this)

{
  longlong *plVar1;
  UMovieSceneSection *pUVar2;
  code *pcVar3;
  longlong lVar4;
  FFrameNumber FVar5;
  bool bVar6;
  undefined1 uVar7;
  UClass *pUVar8;
  UObject *pUVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined1 local_res8 [8];
  TRange<FFrameNumber> local_68;
  TRange<FFrameNumber> local_58;
  TRangeBound<FFrameNumber> local_48;
  TRangeBound<FFrameNumber> TStack_40;
  TRangeBound<FFrameNumber> local_38;
  TRangeBound<FFrameNumber> TStack_30;
  
  if ((this->BlendType).bIsValid == false) {
    pUVar8 = UMovieSceneTrack::StaticClass();
    pUVar9 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar8);
    if (pUVar9 != (UObject *)0x0) {
      local_68.LowerBound.Type.Value = (this->SectionRange).Value.LowerBound.Type.Value;
      local_68.LowerBound._1_3_ = *(undefined3 *)&(this->SectionRange).Value.LowerBound.field_0x1;
      local_68.LowerBound.Value.Value = (this->SectionRange).Value.LowerBound.Value.Value;
      local_68.UpperBound.Type.Value = (this->SectionRange).Value.UpperBound.Type.Value;
      local_68.UpperBound._1_3_ = *(undefined3 *)&(this->SectionRange).Value.UpperBound.field_0x1;
      local_68.UpperBound.Value.Value = (this->SectionRange).Value.UpperBound.Value.Value;
      if (local_68.LowerBound.Type.Value != '\x02') {
        plVar10 = (longlong *)(**(code **)(*(longlong *)pUVar9 + 0x360))(pUVar9);
        plVar11 = (longlong *)*plVar10;
        lVar4 = plVar10[1];
        plVar1 = plVar11 + (int)lVar4;
        do {
          if ((int)plVar10[1] != (int)lVar4) {
            local_res8[0] = 0;
            `TCheckedPointerIterator<UMovieSceneSection_*_const,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_res8);
          }
          if (plVar11 == plVar1) {
            return true;
          }
          pUVar2 = (UMovieSceneSection *)*plVar11;
          if (((pUVar2 != (UMovieSceneSection *)0x0) && (pUVar2 != this)) &&
             (pUVar2->RowIndex == this->RowIndex)) {
            local_58.LowerBound = (pUVar2->SectionRange).Value.LowerBound;
            local_58.UpperBound = (pUVar2->SectionRange).Value.UpperBound;
            bVar6 = TRange<FFrameNumber>::Overlaps(&local_58,&local_68);
            if (bVar6) {
              return false;
            }
            local_38 = (pUVar2->SectionRange).Value.LowerBound;
            TStack_30 = (pUVar2->SectionRange).Value.UpperBound;
            if ((pUVar2->SectionRange).Value.UpperBound.Type.Value != '\x02') {
              if ((local_68.LowerBound.Type.Value == '\x02') &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Type != ERangeBoundTypes::Open",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                     ,99,L""), bVar6)) {
                pcVar3 = (code *)swi(3);
                uVar7 = (*pcVar3)();
                return (bool)uVar7;
              }
              FVar5.Value = local_68.LowerBound.Value.Value;
              local_48 = (pUVar2->SectionRange).Value.LowerBound;
              TStack_40 = (pUVar2->SectionRange).Value.UpperBound;
              if (((pUVar2->SectionRange).Value.UpperBound.Type.Value == '\x02') &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Type != ERangeBoundTypes::Open",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                     ,99,L""), bVar6)) {
                pcVar3 = (code *)swi(3);
                uVar7 = (*pcVar3)();
                return (bool)uVar7;
              }
              if (TStack_40.Value.Value <= FVar5.Value) {
                return false;
              }
            }
          }
          plVar11 = plVar11 + 1;
        } while( true );
      }
    }
  }
  return true;
}

// CanHaveOpenUpperBound @ 14620a9a0

/* WARNING: Type propagation algorithm not settling */

bool __thiscall UMovieSceneSection::CanHaveOpenUpperBound(UMovieSceneSection *this)

{
  longlong *plVar1;
  UMovieSceneSection *pUVar2;
  code *pcVar3;
  longlong lVar4;
  FFrameNumber FVar5;
  bool bVar6;
  undefined1 uVar7;
  UClass *pUVar8;
  UObject *pUVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined1 local_res8 [8];
  TRange<FFrameNumber> local_68;
  TRange<FFrameNumber> local_58;
  uchar local_48;
  undefined1 uStack_47;
  undefined1 uStack_46;
  undefined1 uStack_45;
  int iStack_44;
  uchar uStack_40;
  undefined1 uStack_3f;
  undefined1 uStack_3e;
  undefined1 uStack_3d;
  undefined1 uStack_3c;
  undefined1 uStack_3b;
  undefined1 uStack_3a;
  undefined1 uStack_39;
  uchar local_38;
  undefined1 uStack_37;
  undefined1 uStack_36;
  undefined1 uStack_35;
  undefined1 uStack_34;
  undefined1 uStack_33;
  undefined1 uStack_32;
  undefined1 uStack_31;
  uchar uStack_30;
  undefined1 uStack_2f;
  undefined1 uStack_2e;
  undefined1 uStack_2d;
  undefined1 uStack_2c;
  undefined1 uStack_2b;
  undefined1 uStack_2a;
  undefined1 uStack_29;
  
  if ((this->BlendType).bIsValid == false) {
    pUVar8 = UMovieSceneTrack::StaticClass();
    pUVar9 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar8);
    if (pUVar9 != (UObject *)0x0) {
      local_68.LowerBound.Type.Value = (this->SectionRange).Value.LowerBound.Type.Value;
      local_68.LowerBound._1_3_ = *(undefined3 *)&(this->SectionRange).Value.LowerBound.field_0x1;
      local_68.LowerBound.Value.Value = (this->SectionRange).Value.LowerBound.Value.Value;
      local_68.UpperBound.Type.Value = (this->SectionRange).Value.UpperBound.Type.Value;
      local_68.UpperBound._1_3_ = *(undefined3 *)&(this->SectionRange).Value.UpperBound.field_0x1;
      local_68.UpperBound.Value.Value = (this->SectionRange).Value.UpperBound.Value.Value;
      if ((this->SectionRange).Value.UpperBound.Type.Value != '\x02') {
        plVar10 = (longlong *)(**(code **)(*(longlong *)pUVar9 + 0x360))(pUVar9);
        plVar11 = (longlong *)*plVar10;
        lVar4 = plVar10[1];
        plVar1 = plVar11 + (int)lVar4;
        do {
          if ((int)plVar10[1] != (int)lVar4) {
            local_res8[0] = 0;
            `TCheckedPointerIterator<UMovieSceneSection_*_const,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_res8);
          }
          if (plVar11 == plVar1) {
            return true;
          }
          pUVar2 = (UMovieSceneSection *)*plVar11;
          if (((pUVar2 != (UMovieSceneSection *)0x0) && (pUVar2 != this)) &&
             (pUVar2->RowIndex == this->RowIndex)) {
            local_58.LowerBound = (pUVar2->SectionRange).Value.LowerBound;
            local_58.UpperBound = (pUVar2->SectionRange).Value.UpperBound;
            bVar6 = TRange<FFrameNumber>::Overlaps(&local_58,&local_68);
            if (bVar6) {
              return false;
            }
            local_38 = (pUVar2->SectionRange).Value.LowerBound.Type.Value;
            uStack_37 = (pUVar2->SectionRange).Value.LowerBound.field_0x1;
            uStack_36 = (pUVar2->SectionRange).Value.LowerBound.field_0x2;
            uStack_35 = (pUVar2->SectionRange).Value.LowerBound.field_0x3;
            uStack_34 = (undefined1)(pUVar2->SectionRange).Value.LowerBound.Value.Value;
            uStack_33 = *(undefined1 *)
                         ((longlong)&(pUVar2->SectionRange).Value.LowerBound.Value.Value + 1);
            uStack_32 = *(undefined1 *)
                         ((longlong)&(pUVar2->SectionRange).Value.LowerBound.Value.Value + 2);
            uStack_31 = *(undefined1 *)
                         ((longlong)&(pUVar2->SectionRange).Value.LowerBound.Value.Value + 3);
            uStack_30 = (pUVar2->SectionRange).Value.UpperBound.Type.Value;
            uStack_2f = (pUVar2->SectionRange).Value.UpperBound.field_0x1;
            uStack_2e = (pUVar2->SectionRange).Value.UpperBound.field_0x2;
            uStack_2d = (pUVar2->SectionRange).Value.UpperBound.field_0x3;
            uStack_2c = (undefined1)(pUVar2->SectionRange).Value.UpperBound.Value.Value;
            uStack_2b = *(undefined1 *)
                         ((longlong)&(pUVar2->SectionRange).Value.UpperBound.Value.Value + 1);
            uStack_2a = *(undefined1 *)
                         ((longlong)&(pUVar2->SectionRange).Value.UpperBound.Value.Value + 2);
            uStack_29 = *(undefined1 *)
                         ((longlong)&(pUVar2->SectionRange).Value.UpperBound.Value.Value + 3);
            if (local_38 != '\x02') {
              if ((local_68.UpperBound.Type.Value == '\x02') &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Type != ERangeBoundTypes::Open",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                     ,99,L""), bVar6)) {
                pcVar3 = (code *)swi(3);
                uVar7 = (*pcVar3)();
                return (bool)uVar7;
              }
              FVar5.Value = local_68.UpperBound.Value.Value;
              local_48 = (pUVar2->SectionRange).Value.LowerBound.Type.Value;
              uStack_47 = (pUVar2->SectionRange).Value.LowerBound.field_0x1;
              uStack_46 = (pUVar2->SectionRange).Value.LowerBound.field_0x2;
              uStack_45 = (pUVar2->SectionRange).Value.LowerBound.field_0x3;
              iStack_44 = (pUVar2->SectionRange).Value.LowerBound.Value.Value;
              uStack_40 = (pUVar2->SectionRange).Value.UpperBound.Type.Value;
              uStack_3f = (pUVar2->SectionRange).Value.UpperBound.field_0x1;
              uStack_3e = (pUVar2->SectionRange).Value.UpperBound.field_0x2;
              uStack_3d = (pUVar2->SectionRange).Value.UpperBound.field_0x3;
              uStack_3c = (undefined1)(pUVar2->SectionRange).Value.UpperBound.Value.Value;
              uStack_3b = *(undefined1 *)
                           ((longlong)&(pUVar2->SectionRange).Value.UpperBound.Value.Value + 1);
              uStack_3a = *(undefined1 *)
                           ((longlong)&(pUVar2->SectionRange).Value.UpperBound.Value.Value + 2);
              uStack_39 = *(undefined1 *)
                           ((longlong)&(pUVar2->SectionRange).Value.UpperBound.Value.Value + 3);
              if ((local_48 == '\x02') &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Type != ERangeBoundTypes::Open",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                     ,99,L""), bVar6)) {
                pcVar3 = (code *)swi(3);
                uVar7 = (*pcVar3)();
                return (bool)uVar7;
              }
              if (FVar5.Value <= iStack_44) {
                return false;
              }
            }
          }
          plVar11 = plVar11 + 1;
        } while( true );
      }
    }
  }
  return true;
}

// ComputeEffectiveRange @ 14620b620

TRange<FFrameNumber> * __thiscall
UMovieSceneSection::ComputeEffectiveRange
          (UMovieSceneSection *this,TRange<FFrameNumber> *__return_storage_ptr__)

{
  TRangeBound<FFrameNumber> *pTVar1;
  ForElementType<FMovieSceneChannelEntry> FVar2;
  undefined8 *puVar3;
  int iVar4;
  code *pcVar5;
  TRangeBound<FFrameNumber> TVar6;
  TRangeBound<FFrameNumber> TVar7;
  FFrameNumber FVar8;
  bool bVar9;
  FMovieSceneChannelProxy *pFVar10;
  TRange<FFrameNumber> *pTVar11;
  FFrameNumber *pFVar12;
  TRangeBound<FFrameNumber> TVar13;
  char cVar14;
  TRangeBound<FFrameNumber> *pTVar15;
  TRange<FFrameNumber> *pTVar16;
  undefined8 *puVar17;
  FMovieSceneFrameRange *this_00;
  ForElementType<FMovieSceneChannelEntry> FVar18;
  uint local_res8;
  uint local_res18;
  uint local_res20;
  uint local_88;
  uint local_80;
  uint local_78;
  TRange<FFrameNumber> local_68;
  TRangeBound<FFrameNumber> local_58;
  TRangeBound<FFrameNumber> TStack_50;
  undefined1 local_48 [16];
  
  if (((this->SectionRange).Value.LowerBound.Type.Value != '\x02') &&
     ((this->SectionRange).Value.UpperBound.Type.Value != '\x02')) {
    TVar13 = (this->SectionRange).Value.UpperBound;
    __return_storage_ptr__->LowerBound = (this->SectionRange).Value.LowerBound;
    __return_storage_ptr__->UpperBound = TVar13;
    return __return_storage_ptr__;
  }
  local_res8 = local_res8 & 0xffffff00;
  local_68.LowerBound._0_4_ = local_res8;
  local_68.LowerBound.Value.Value = 0;
  local_res18 = local_res18 & 0xffffff00;
  local_68.UpperBound._0_4_ = local_res18;
  local_68.UpperBound.Value.Value = 0;
  pFVar10 = GetChannelProxy(this);
  iVar4 = (pFVar10->Entries).ArrayNum;
  FVar18 = (pFVar10->Entries).AllocatorInstance.SecondaryData;
  if (FVar18 == (ForElementType<FMovieSceneChannelEntry>)0x0) {
    FVar18 = (ForElementType<FMovieSceneChannelEntry>)&pFVar10->Entries;
  }
  if ((iVar4 < 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    pTVar11 = (TRange<FFrameNumber> *)(*pcVar5)();
    return pTVar11;
  }
  FVar2 = (ForElementType<FMovieSceneChannelEntry>)((longlong)FVar18 + (longlong)iVar4 * 0x18);
  FVar8.Value = local_68.UpperBound.Value.Value;
  for (; local_68.UpperBound.Value.Value = FVar8.Value, FVar18 != FVar2;
      FVar18 = (ForElementType<FMovieSceneChannelEntry>)((longlong)FVar18 + 0x18)) {
    iVar4 = *(int *)((longlong)FVar18 + 0x10);
    puVar17 = *(undefined8 **)((longlong)FVar18 + 8);
    if ((iVar4 < 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      pTVar11 = (TRange<FFrameNumber> *)(*pcVar5)();
      return pTVar11;
    }
    puVar3 = puVar17 + iVar4;
    for (; puVar17 != puVar3; puVar17 = puVar17 + 1) {
      pTVar11 = (TRange<FFrameNumber> *)
                (**(code **)(*(longlong *)*puVar17 + 0x48))((longlong *)*puVar17,local_48);
      FVar8.Value = local_68.UpperBound.Value.Value;
      cVar14 = local_68.LowerBound.Type.Value;
      if ((cVar14 == '\x02') || (local_68.UpperBound.Type.Value == '\x02')) {
LAB_14620b7c4:
        if (((pTVar11->LowerBound).Type.Value == '\x02') ||
           ((pTVar11->UpperBound).Type.Value == '\x02')) {
LAB_14620b7fd:
          pTVar1 = &pTVar11->UpperBound;
          if (local_68.UpperBound.Type.Value == '\x02') {
            pTVar15 = &local_68.UpperBound;
          }
          else {
            pTVar15 = pTVar1;
            if ((pTVar1->Type).Value != '\x02') {
              iVar4 = (pTVar11->UpperBound).Value.Value;
              if (iVar4 < local_68.UpperBound.Value.Value) {
                pTVar15 = &local_68.UpperBound;
              }
              else if ((iVar4 <= local_68.UpperBound.Value.Value) &&
                      (pTVar15 = &local_68.UpperBound, local_68.UpperBound.Type.Value != '\x01')) {
                pTVar15 = pTVar1;
              }
            }
          }
          if (cVar14 == '\x02') {
            pTVar16 = &local_68;
          }
          else {
            pTVar16 = pTVar11;
            if ((pTVar11->LowerBound).Type.Value != '\x02') {
              iVar4 = (pTVar11->LowerBound).Value.Value;
              if (local_68.LowerBound.Value.Value < iVar4) {
                pTVar16 = &local_68;
              }
              else if ((local_68.LowerBound.Value.Value <= iVar4) &&
                      (pTVar16 = &local_68, cVar14 != '\x01')) {
                pTVar16 = pTVar11;
              }
            }
          }
          local_58 = pTVar16->LowerBound;
          TVar13 = local_58;
          TStack_50 = *pTVar15;
          local_68.LowerBound._0_4_ = local_58._0_4_;
          local_68.LowerBound.Value.Value = local_58.Value.Value;
          local_68.UpperBound._0_4_ = TStack_50._0_4_;
          local_68.UpperBound.Value.Value = TStack_50.Value.Value;
          local_58 = TVar13;
        }
        else {
          if ((pTVar11->LowerBound).Value.Value <= (pTVar11->UpperBound).Value.Value) {
            pFVar12 = TRangeBound<FFrameNumber>::GetValue(&pTVar11->UpperBound);
            iVar4 = pFVar12->Value;
            pFVar12 = TRangeBound<FFrameNumber>::GetValue((TRangeBound<FFrameNumber> *)pTVar11);
            if ((pFVar12->Value != iVar4) ||
               (((pTVar11->LowerBound).Type.Value != '\0' &&
                ((pTVar11->UpperBound).Type.Value != '\0')))) {
              cVar14 = local_68.LowerBound.Type.Value;
              goto LAB_14620b7fd;
            }
          }
          local_58.Value.Value = local_68.LowerBound.Value.Value;
          local_58.Type.Value = local_68.LowerBound.Type.Value;
          local_58._1_3_ = local_68.LowerBound._1_3_;
          TStack_50.Value.Value = local_68.UpperBound.Value.Value;
          TStack_50.Type.Value = local_68.UpperBound.Type.Value;
          TStack_50._1_3_ = local_68.UpperBound._1_3_;
        }
      }
      else {
        if ((cVar14 == '\x02') &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Type != ERangeBoundTypes::Open",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                               ,99,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TRange<FFrameNumber> *)(*pcVar5)();
          return pTVar11;
        }
        if (local_68.LowerBound.Value.Value <= FVar8.Value) {
          pFVar12 = TRangeBound<FFrameNumber>::GetValue(&local_68.UpperBound);
          iVar4 = pFVar12->Value;
          pFVar12 = TRangeBound<FFrameNumber>::GetValue(&local_68.LowerBound);
          cVar14 = local_68.LowerBound.Type.Value;
          if ((pFVar12->Value != iVar4) ||
             ((cVar14 != '\0' && (local_68.UpperBound.Type.Value != '\0')))) goto LAB_14620b7c4;
        }
        TStack_50 = pTVar11->UpperBound;
        local_68.LowerBound._0_4_ = *(uint *)&pTVar11->LowerBound;
        local_68.LowerBound.Value.Value = (pTVar11->LowerBound).Value.Value;
        local_68.UpperBound._0_4_ = *(uint *)&pTVar11->UpperBound;
        local_68.UpperBound.Value.Value = (pTVar11->UpperBound).Value.Value;
        local_58 = pTVar11->LowerBound;
      }
    }
    FVar8.Value = local_68.UpperBound.Value.Value;
  }
  this_00 = &this->SectionRange;
  if (((char)local_68.LowerBound._0_4_ == '\x02') || (local_68.UpperBound.Type.Value == '\x02')) {
LAB_14620b936:
    bVar9 = TRange<FFrameNumber>::IsEmpty(&this_00->Value);
    if (bVar9) {
      local_80 = local_80 & 0xffffff00;
      TVar7.Value.Value = 0;
      TVar7._0_4_ = local_80;
      local_78 = local_78 & 0xffffff00;
      __return_storage_ptr__->LowerBound = TVar7;
      TVar13.Value.Value = 0;
      TVar13._0_4_ = local_78;
    }
    else {
      pTVar1 = &(this->SectionRange).Value.UpperBound;
      pTVar15 = pTVar1;
      if (local_68.UpperBound.Type.Value != '\x02') {
        if ((pTVar1->Type).Value == '\x02') {
          pTVar15 = &local_68.UpperBound;
        }
        else {
          iVar4 = (this->SectionRange).Value.UpperBound.Value.Value;
          if (local_68.UpperBound.Value.Value < iVar4) {
            pTVar15 = &local_68.UpperBound;
          }
          else if ((local_68.UpperBound.Value.Value <= iVar4) &&
                  (pTVar15 = &local_68.UpperBound, local_68.UpperBound.Type.Value != '\0')) {
            pTVar15 = pTVar1;
          }
        }
      }
      pTVar11 = &this_00->Value;
      if (local_68.LowerBound.Type.Value != '\x02') {
        if (((this_00->Value).LowerBound.Type.Value == '\x02') ||
           (iVar4 = (this->SectionRange).Value.LowerBound.Value.Value,
           iVar4 < local_68.LowerBound.Value.Value)) {
          pTVar11 = &local_68;
        }
        else if ((iVar4 <= local_68.LowerBound.Value.Value) &&
                (pTVar11 = &local_68, local_68.LowerBound.Type.Value != '\0')) {
          pTVar11 = &this_00->Value;
        }
      }
      __return_storage_ptr__->LowerBound =
           ((TRange<FFrameNumber> *)&pTVar11->LowerBound)->LowerBound;
      TVar13 = *pTVar15;
    }
  }
  else {
    if (((char)local_68.LowerBound._0_4_ == '\x02') &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Type != ERangeBoundTypes::Open",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                           ,99,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      pTVar11 = (TRange<FFrameNumber> *)(*pcVar5)();
      return pTVar11;
    }
    if (local_68.LowerBound.Value.Value <= FVar8.Value) {
      pFVar12 = TRangeBound<FFrameNumber>::GetValue(&local_68.UpperBound);
      iVar4 = pFVar12->Value;
      pFVar12 = TRangeBound<FFrameNumber>::GetValue(&local_68.LowerBound);
      if ((pFVar12->Value != iVar4) ||
         ((local_68.LowerBound.Type.Value != '\0' && (local_68.UpperBound.Type.Value != '\0'))))
      goto LAB_14620b936;
    }
    local_res20 = local_res20 & 0xffffff00;
    TVar6.Value.Value = 0;
    TVar6._0_4_ = local_res20;
    local_88 = local_88 & 0xffffff00;
    __return_storage_ptr__->LowerBound = TVar6;
    TVar13.Value.Value = 0;
    TVar13._0_4_ = local_88;
  }
  __return_storage_ptr__->UpperBound = TVar13;
  return __return_storage_ptr__;
}

// EvaluateEasing @ 14620f650

float __thiscall UMovieSceneSection::EvaluateEasing(UMovieSceneSection *this,FFrameTime param_1)

{
  TRangeBound<FFrameNumber> TVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  FMovieSceneEasingSettings *pFVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  double dVar13;
  FFrameNumber FStackX_c;
  float fStackX_14;
  FFrameNumber FStackX_1c;
  
  fVar10 = __real_3f800000;
  dVar3 = __real_3ff0000000000000;
  TVar1 = (this->SectionRange).Value.LowerBound;
  fStackX_14 = param_1.SubFrame;
  fVar11 = fVar10;
  if (TVar1.Type.Value.Value != '\x02') {
    if ((this->Easing).bManualEaseIn == false) {
      iVar6 = (this->Easing).AutoEaseInDuration;
    }
    else {
      iVar6 = (this->Easing).ManualEaseInDuration;
    }
    if ((0 < iVar6) && (*(longlong *)&(this->Easing).EaseIn != 0)) {
      uVar7 = TVar1._0_4_ & 0xff;
      FStackX_c = TVar1.Value.Value;
      if (TVar1.Type.Value.Value == '\x01') {
        if ((uVar7 == 2) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Type != ERangeBoundTypes::Open",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                               ,99,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          fVar10 = (float)(*pcVar2)();
          return fVar10;
        }
      }
      else {
        if ((uVar7 == 2) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Type != ERangeBoundTypes::Open",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                               ,99,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          fVar10 = (float)(*pcVar2)();
          return fVar10;
        }
        FStackX_c.Value = FStackX_c.Value + 1;
      }
      pFVar5 = (FMovieSceneEasingSettings *)&(this->Easing).ManualEaseInDuration;
      if ((this->Easing).bManualEaseIn == false) {
        pFVar5 = &this->Easing;
      }
      dVar13 = ((double)fStackX_14 + (double)(param_1.FrameNumber.Value.Value - FStackX_c.Value)) /
               (double)pFVar5->AutoEaseInDuration;
      if (0.0 <= dVar13) {
        if (dVar13 <= dVar3) {
          fVar11 = IMovieSceneEasingFunction::EvaluateWith(&(this->Easing).EaseIn,(float)dVar13);
        }
      }
      else {
        fVar11 = 0.0;
      }
    }
  }
  TVar1 = (this->SectionRange).Value.UpperBound;
  if (TVar1.Type.Value.Value != '\x02') {
    lVar9 = 0xac;
    lVar8 = 0xac;
    if ((this->Easing).bManualEaseOut == false) {
      lVar8 = 0x7c;
    }
    iVar6 = *(int *)((longlong)&this->_padding_ + lVar8);
    if ((0 < iVar6) && (*(longlong *)&(this->Easing).EaseOut != 0)) {
      uVar7 = TVar1._0_4_ & 0xff;
      FStackX_1c = TVar1.Value.Value;
      if (TVar1.Type.Value.Value == '\x01') {
        if ((uVar7 == 2) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Type != ERangeBoundTypes::Open",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                               ,99,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          fVar10 = (float)(*pcVar2)();
          return fVar10;
        }
        FStackX_1c.Value = FStackX_1c.Value + 1;
      }
      else if ((uVar7 == 2) &&
              (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Type != ERangeBoundTypes::Open",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                  ,99,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        fVar10 = (float)(*pcVar2)();
        return fVar10;
      }
      if ((this->Easing).bManualEaseOut == false) {
        lVar9 = 0x7c;
      }
      dVar13 = ((double)((iVar6 - FStackX_1c.Value) + param_1.FrameNumber.Value.Value) +
               (double)fStackX_14) / (double)*(int *)((longlong)&this->_padding_ + lVar9);
      if (0.0 <= dVar13) {
        if (dVar13 <= dVar3) {
          fVar12 = IMovieSceneEasingFunction::EvaluateWith(&(this->Easing).EaseOut,(float)dVar13);
          fVar10 = fVar10 - fVar12;
        }
        else {
          fVar10 = 0.0;
        }
      }
    }
  }
  return fVar10 * fVar11;
}

// EvaluateEasing @ 14620f910

void __thiscall
UMovieSceneSection::EvaluateEasing
          (UMovieSceneSection *this,FFrameTime param_1,TOptional<float> *param_2,
          TOptional<float> *param_3,float *param_4,float *param_5)

{
  TRangeBound<FFrameNumber> TVar1;
  code *pcVar2;
  float fVar3;
  bool bVar4;
  TEnumAsByte<ERangeBoundTypes::Type> TVar5;
  TRange<FFrameNumber> *pTVar6;
  int iVar7;
  FFrameNumber FVar8;
  longlong lVar9;
  longlong lVar10;
  float fVar11;
  FFrameTime local_res10;
  undefined1 local_68 [8];
  TRange<FFrameNumber> local_60;
  TRange<FFrameNumber> local_50 [2];
  
  local_res10 = param_1;
  if (((this->SectionRange).Value.LowerBound.Type.Value != '\x02') &&
     (*(longlong *)&(this->Easing).EaseIn != 0)) {
    pTVar6 = GetEaseInRange(this,&local_60);
    bVar4 = TRange<FFrameNumber>::Contains(pTVar6,&local_res10.FrameNumber);
    if (bVar4) {
      TVar1 = (this->SectionRange).Value.LowerBound;
      FVar8 = TVar1.Value.Value;
      TVar5 = TVar1.Type.Value;
      if (TVar5.Value != '\x01') {
        if (TVar5.Value == '\x02') {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type != ERangeBoundTypes::Open",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                             ,99,L"");
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        FVar8.Value = FVar8.Value + 1;
      }
      if ((this->Easing).bManualEaseIn == false) {
        iVar7 = (this->Easing).AutoEaseInDuration;
      }
      else {
        iVar7 = (this->Easing).ManualEaseInDuration;
      }
      fVar3 = (local_res10.SubFrame + (float)(param_1.FrameNumber.Value.Value - FVar8.Value)) /
              (float)iVar7;
      fVar11 = IMovieSceneEasingFunction::EvaluateWith(&(this->Easing).EaseIn,fVar3);
      if ((TOptional<float> *)local_68 != param_2) {
        param_2->TypedValue = fVar11;
        param_2->bIsSet = true;
      }
      if (param_4 != (float *)0x0) {
        *param_4 = fVar3;
      }
    }
  }
  if (((this->SectionRange).Value.UpperBound.Type.Value != '\x02') &&
     (*(longlong *)&(this->Easing).EaseOut != 0)) {
    pTVar6 = GetEaseOutRange(this,local_50);
    bVar4 = TRange<FFrameNumber>::Contains(pTVar6,&local_res10.FrameNumber);
    if (bVar4) {
      TVar1 = (this->SectionRange).Value.UpperBound;
      lVar10 = 0xac;
      lVar9 = 0xac;
      if ((this->Easing).bManualEaseOut == false) {
        lVar9 = 0x7c;
      }
      FVar8 = TVar1.Value.Value;
      iVar7 = *(int *)((longlong)&this->_padding_ + lVar9);
      TVar5 = TVar1.Type.Value;
      if (TVar5.Value == '\x01') {
        FVar8.Value = FVar8.Value + 1;
      }
      else if (TVar5.Value == '\x02') {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Type != ERangeBoundTypes::Open",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                           ,99,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if ((this->Easing).bManualEaseOut == false) {
        lVar10 = 0x7c;
      }
      fVar3 = ((float)((iVar7 - FVar8.Value) + param_1.FrameNumber.Value.Value) +
              local_res10.SubFrame) / (float)*(int *)((longlong)&this->_padding_ + lVar10);
      fVar11 = IMovieSceneEasingFunction::EvaluateWith(&(this->Easing).EaseOut,fVar3);
      if ((TOptional<float> *)(local_68 + 4) != param_3) {
        param_3->TypedValue = __real_3f800000 - fVar11;
        param_3->bIsSet = true;
      }
      if (param_5 != (float *)0x0) {
        *param_5 = fVar3;
      }
    }
  }
  return;
}

// FixupRelativeKeyframes @ 146214a90

void __thiscall
UMovieSceneSection::FixupRelativeKeyframes(UMovieSceneSection *this,FFrameNumber param_1)

{
  return;
}

// GetAutoSizeRange @ 1462163c0

TOptional<TRange<FFrameNumber>_> * __thiscall
UMovieSceneSection::GetAutoSizeRange
          (UMovieSceneSection *this,TOptional<TRange<FFrameNumber>_> *__return_storage_ptr__)

{
  ForElementType<FMovieSceneChannelEntry> FVar1;
  undefined8 *puVar2;
  int iVar3;
  FMovieSceneChannelProxy *pFVar4;
  code *pcVar5;
  TRangeBound<FFrameNumber> TVar6;
  TRangeBound<FFrameNumber> TVar7;
  FFrameNumber FVar8;
  EMovieSceneChannelProxyType EVar9;
  bool bVar10;
  TOptional<TRange<FFrameNumber>_> *pTVar11;
  TRangeBound<FFrameNumber> *this_00;
  FFrameNumber *pFVar12;
  char cVar13;
  TRangeBound<FFrameNumber> *pTVar14;
  TRangeBound<FFrameNumber> *pTVar15;
  undefined8 *puVar16;
  ForElementType<FMovieSceneChannelEntry> FVar17;
  uint local_res8;
  uint local_res18;
  TRangeBound<FFrameNumber> local_68;
  TRangeBound<FFrameNumber> TStack_60;
  TRangeBound<FFrameNumber> local_58;
  TRangeBound<FFrameNumber> TStack_50;
  undefined1 local_48 [16];
  
  local_res18 = local_res18 & 0xffffff00;
  local_res8 = local_res8 & 0xffffff00;
  local_68._0_4_ = local_res8;
  local_68.Value.Value = 0;
  TStack_60._0_4_ = local_res18;
  TStack_60.Value.Value = 0;
  if ((this->ChannelProxy).Object == (FMovieSceneChannelProxy *)0x0) {
    EVar9 = (**(code **)(this->_padding_ + 0x3a0))();
    this->ChannelProxyType = EVar9;
  }
  pFVar4 = (this->ChannelProxy).Object;
  if ((pFVar4 == (FMovieSceneChannelProxy *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Proxy",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\MovieSceneSection.cpp"
                          ,0x13c,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    pTVar11 = (TOptional<TRange<FFrameNumber>_> *)(*pcVar5)();
    return pTVar11;
  }
  FVar17 = (pFVar4->Entries).AllocatorInstance.SecondaryData;
  iVar3 = (pFVar4->Entries).ArrayNum;
  if (FVar17 == (ForElementType<FMovieSceneChannelEntry>)0x0) {
    FVar17 = (ForElementType<FMovieSceneChannelEntry>)&pFVar4->Entries;
  }
  if ((iVar3 < 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    pTVar11 = (TOptional<TRange<FFrameNumber>_> *)(*pcVar5)();
    return pTVar11;
  }
  FVar1 = (ForElementType<FMovieSceneChannelEntry>)((longlong)FVar17 + (longlong)iVar3 * 0x18);
  FVar8.Value = TStack_60.Value.Value;
  do {
    TStack_60.Value.Value = FVar8.Value;
    if (FVar17 == FVar1) {
      if (((char)local_68._0_4_ == '\x02') || (TStack_60.Type.Value == '\x02')) {
        __return_storage_ptr__->bIsSet = false;
      }
      else {
        if (((char)local_68._0_4_ == '\x02') &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Type != ERangeBoundTypes::Open",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                ,99,L""), bVar10)) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TOptional<TRange<FFrameNumber>_> *)(*pcVar5)();
          return pTVar11;
        }
        if (FVar8.Value < local_68.Value.Value) {
          __return_storage_ptr__->bIsSet = false;
          return __return_storage_ptr__;
        }
        pFVar12 = TRangeBound<FFrameNumber>::GetValue(&TStack_60);
        iVar3 = pFVar12->Value;
        pFVar12 = TRangeBound<FFrameNumber>::GetValue(&local_68);
        if ((pFVar12->Value == iVar3) &&
           ((local_68.Type.Value == '\0' || (TStack_60.Type.Value == '\0')))) {
          bVar10 = true;
        }
        else {
          bVar10 = false;
        }
        __return_storage_ptr__->bIsSet = false;
        if (bVar10) {
          return __return_storage_ptr__;
        }
      }
      TVar6.Value.Value = local_68.Value.Value;
      TVar6.Type.Value = local_68.Type.Value;
      TVar6._1_3_ = local_68._1_3_;
      TVar7.Value.Value = TStack_60.Value.Value;
      TVar7.Type.Value = TStack_60.Type.Value;
      TVar7._1_3_ = TStack_60._1_3_;
      (__return_storage_ptr__->TypedValue).LowerBound = TVar6;
      (__return_storage_ptr__->TypedValue).UpperBound = TVar7;
      __return_storage_ptr__->bIsSet = true;
      return __return_storage_ptr__;
    }
    iVar3 = *(int *)((longlong)FVar17 + 0x10);
    puVar16 = *(undefined8 **)((longlong)FVar17 + 8);
    if ((iVar3 < 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar10)) {
      pcVar5 = (code *)swi(3);
      pTVar11 = (TOptional<TRange<FFrameNumber>_> *)(*pcVar5)();
      return pTVar11;
    }
    puVar2 = puVar16 + iVar3;
    for (; puVar16 != puVar2; puVar16 = puVar16 + 1) {
      this_00 = (TRangeBound<FFrameNumber> *)
                (**(code **)(*(longlong *)*puVar16 + 0x48))((longlong *)*puVar16,local_48);
      FVar8.Value = TStack_60.Value.Value;
      cVar13 = local_68.Type.Value;
      if ((cVar13 == '\x02') || (TStack_60.Type.Value == '\x02')) {
LAB_146216574:
        if (((this_00->Type).Value == '\x02') || (this_00[1].Type.Value == '\x02')) {
LAB_1462165ad:
          pTVar15 = this_00 + 1;
          if (TStack_60.Type.Value == '\x02') {
            pTVar14 = &TStack_60;
          }
          else {
            pTVar14 = pTVar15;
            if ((pTVar15->Type).Value != '\x02') {
              iVar3 = this_00[1].Value.Value;
              if (iVar3 < TStack_60.Value.Value) {
                pTVar14 = &TStack_60;
              }
              else if ((iVar3 <= TStack_60.Value.Value) &&
                      (pTVar14 = &TStack_60, TStack_60.Type.Value != '\x01')) {
                pTVar14 = pTVar15;
              }
            }
          }
          if (cVar13 == '\x02') {
            pTVar15 = &local_68;
          }
          else {
            pTVar15 = this_00;
            if ((this_00->Type).Value != '\x02') {
              iVar3 = (this_00->Value).Value;
              if (local_68.Value.Value < iVar3) {
                pTVar15 = &local_68;
              }
              else if ((local_68.Value.Value <= iVar3) && (pTVar15 = &local_68, cVar13 != '\x01')) {
                pTVar15 = this_00;
              }
            }
          }
          local_58 = *pTVar15;
          TVar6 = local_58;
          TStack_50 = *pTVar14;
          local_68._0_4_ = local_58._0_4_;
          local_68.Value.Value = local_58.Value.Value;
          TStack_60._0_4_ = TStack_50._0_4_;
          TStack_60.Value.Value = TStack_50.Value.Value;
          local_58 = TVar6;
        }
        else {
          if ((this_00->Value).Value <= this_00[1].Value.Value) {
            pFVar12 = TRangeBound<FFrameNumber>::GetValue(this_00 + 1);
            iVar3 = pFVar12->Value;
            pFVar12 = TRangeBound<FFrameNumber>::GetValue(this_00);
            if ((pFVar12->Value != iVar3) ||
               (((this_00->Type).Value != '\0' && (this_00[1].Type.Value != '\0')))) {
              cVar13 = local_68.Type.Value;
              goto LAB_1462165ad;
            }
          }
          local_58.Value.Value = local_68.Value.Value;
          local_58.Type.Value = local_68.Type.Value;
          local_58._1_3_ = local_68._1_3_;
          TStack_50.Value.Value = TStack_60.Value.Value;
          TStack_50.Type.Value = TStack_60.Type.Value;
          TStack_50._1_3_ = TStack_60._1_3_;
        }
      }
      else {
        if ((cVar13 == '\x02') &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Type != ERangeBoundTypes::Open",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                ,99,L""), bVar10)) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TOptional<TRange<FFrameNumber>_> *)(*pcVar5)();
          return pTVar11;
        }
        if (local_68.Value.Value <= FVar8.Value) {
          pFVar12 = TRangeBound<FFrameNumber>::GetValue(&TStack_60);
          iVar3 = pFVar12->Value;
          pFVar12 = TRangeBound<FFrameNumber>::GetValue(&local_68);
          cVar13 = local_68.Type.Value;
          if ((pFVar12->Value != iVar3) || ((cVar13 != '\0' && (TStack_60.Type.Value != '\0'))))
          goto LAB_146216574;
        }
        TStack_50 = this_00[1];
        local_68._0_4_ = *(uint *)this_00;
        local_68.Value.Value = (this_00->Value).Value;
        TStack_60._0_4_ = *(uint *)(this_00 + 1);
        TStack_60.Value.Value = this_00[1].Value.Value;
        local_58 = *this_00;
      }
    }
    FVar17 = (ForElementType<FMovieSceneChannelEntry>)((longlong)FVar17 + 0x18);
    FVar8.Value = TStack_60.Value.Value;
  } while( true );
}

// GetBlendingOrder @ 146216790

int __thiscall UMovieSceneSection::GetBlendingOrder(UMovieSceneSection *this)

{
  undefined2 uVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  UClass *pUVar7;
  UObject *pUVar8;
  longlong *plVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  FMovieSceneBlendTypeField local_res8 [8];
  
  bVar3 = false;
  if (((this->BlendType).bIsValid == false) ||
     (uVar10 = 0xffffffff, (this->BlendType).BlendType != Absolute)) {
    pUVar7 = UMovieSceneTrack::StaticClass();
    pUVar8 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar7);
    uVar5 = 0xffffffff;
    if (pUVar8 != (UObject *)0x0) {
      local_res8[0].BlendTypeField = pUVar8[3].field_0x10;
      bVar4 = FMovieSceneBlendTypeField::Contains(local_res8,Override);
      uVar5 = 0xffffffff;
      if (bVar4) {
        plVar9 = (longlong *)(**(code **)(*(longlong *)pUVar8 + 0x360))(pUVar8);
        uVar10 = 0;
        iVar6 = (int)plVar9[1];
        uVar5 = 0xffffffff;
        if (0 < iVar6) {
          lVar12 = 0;
          uVar11 = 0xffffffff;
          do {
            if (!bVar3) {
              uVar5 = 0;
              if ((int)uVar10 < iVar6) {
                uVar5 = ~uVar10 >> 0x1f;
              }
              if ((uVar5 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar2 = (code *)swi(3);
                iVar6 = (*pcVar2)();
                return iVar6;
              }
              if (*(char *)(*(longlong *)(lVar12 + *plVar9) + 0xf2) != '\0') {
                uVar5 = 0;
                if ((int)uVar10 < (int)plVar9[1]) {
                  uVar5 = ~uVar10 >> 0x1f;
                }
                if ((uVar5 == 0) &&
                   (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar4)) {
                  pcVar2 = (code *)swi(3);
                  iVar6 = (*pcVar2)();
                  return iVar6;
                }
                uVar1 = *(undefined2 *)(*(longlong *)(lVar12 + *plVar9) + 0xf1);
                if (((char)((ushort)uVar1 >> 8) != '\0') && ((char)uVar1 == '\x10')) {
                  bVar3 = true;
                }
              }
            }
            uVar5 = 0;
            if ((int)uVar10 < (int)plVar9[1]) {
              uVar5 = ~uVar10 >> 0x1f;
            }
            if ((uVar5 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar2 = (code *)swi(3);
              iVar6 = (*pcVar2)();
              return iVar6;
            }
            uVar5 = uVar10;
            if (*(UMovieSceneSection **)(lVar12 + *plVar9) != this) {
              uVar5 = uVar11;
            }
            if ((bVar3) && (uVar5 != 0xffffffff)) break;
            iVar6 = (int)plVar9[1];
            uVar10 = uVar10 + 1;
            lVar12 = lVar12 + 8;
            uVar11 = uVar5;
          } while ((int)uVar10 < iVar6);
        }
      }
    }
    uVar10 = 0xffffffff;
    if (bVar3) {
      uVar10 = uVar5;
    }
  }
  return uVar10;
}

// GetChannelProxy @ 146217250

FMovieSceneChannelProxy * __thiscall UMovieSceneSection::GetChannelProxy(UMovieSceneSection *this)

{
  code *pcVar1;
  EMovieSceneChannelProxyType EVar2;
  bool bVar3;
  FMovieSceneChannelProxy *pFVar4;
  
  if ((this->ChannelProxy).Object == (FMovieSceneChannelProxy *)0x0) {
    EVar2 = (**(code **)(this->_padding_ + 0x3a0))();
    this->ChannelProxyType = EVar2;
  }
  pFVar4 = (this->ChannelProxy).Object;
  if (pFVar4 == (FMovieSceneChannelProxy *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Proxy",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\MovieSceneSection.cpp"
                       ,0x13c,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FMovieSceneChannelProxy *)(*pcVar1)();
      return pFVar4;
    }
  }
  return pFVar4;
}

// GetColorTint @ 146217350

FColor __thiscall UMovieSceneSection::GetColorTint(UMovieSceneSection *this)

{
  undefined4 *in_RDX;
  
  *in_RDX = 0;
  return (FColor)SUB84(in_RDX,0);
}

// GetEaseInRange @ 146218320

TRange<FFrameNumber> * __thiscall
UMovieSceneSection::GetEaseInRange
          (UMovieSceneSection *this,TRange<FFrameNumber> *__return_storage_ptr__)

{
  code *pcVar1;
  TRangeBound<FFrameNumber> TVar2;
  TRangeBound<FFrameNumber> TVar3;
  TRangeBound<FFrameNumber> TVar4;
  TRangeBound<FFrameNumber> TVar5;
  TRangeBound<FFrameNumber> TVar6;
  bool bVar7;
  TEnumAsByte<ERangeBoundTypes::Type> TVar8;
  TRange<FFrameNumber> *pTVar9;
  FMovieSceneEasingSettings *pFVar10;
  int iVar11;
  uint uVar12;
  TRangeBound<FFrameNumber> TVar13;
  FFrameNumber FVar14;
  undefined4 local_res8;
  FFrameNumber FStackX_1c;
  undefined4 local_res20;
  uint local_28;
  uint local_20;
  
  TVar13 = (this->SectionRange).Value.LowerBound;
  if (TVar13.Type.Value.Value != '\x02') {
    if ((this->Easing).bManualEaseIn == false) {
      iVar11 = (this->Easing).AutoEaseInDuration;
    }
    else {
      iVar11 = (this->Easing).ManualEaseInDuration;
    }
    if (0 < iVar11) {
      uVar12 = TVar13._0_4_ & 0xff;
      FStackX_1c = TVar13.Value.Value;
      if (TVar13.Type.Value.Value == '\x01') {
        if ((uVar12 == 2) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Type != ERangeBoundTypes::Open",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                               ,99,L""), bVar7)) {
          pcVar1 = (code *)swi(3);
          pTVar9 = (TRange<FFrameNumber> *)(*pcVar1)();
          return pTVar9;
        }
      }
      else {
        if ((uVar12 == 2) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Type != ERangeBoundTypes::Open",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                               ,99,L""), bVar7)) {
          pcVar1 = (code *)swi(3);
          pTVar9 = (TRange<FFrameNumber> *)(*pcVar1)();
          return pTVar9;
        }
        FStackX_1c.Value = FStackX_1c.Value + 1;
      }
      pFVar10 = (FMovieSceneEasingSettings *)&(this->Easing).ManualEaseInDuration;
      if ((this->Easing).bManualEaseIn == false) {
        pFVar10 = &this->Easing;
      }
      local_res20 = CONCAT31(local_res20._1_3_,1);
      iVar11 = pFVar10->AutoEaseInDuration;
      TVar13 = (this->SectionRange).Value.LowerBound;
      FVar14 = TVar13.Value.Value;
      TVar8 = TVar13.Type.Value;
      if (TVar8.Value != '\x01') {
        if ((TVar8.Value == '\x02') &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Type != ERangeBoundTypes::Open",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                               ,99,L""), bVar7)) {
          pcVar1 = (code *)swi(3);
          pTVar9 = (TRange<FFrameNumber> *)(*pcVar1)();
          return pTVar9;
        }
        FVar14.Value = FVar14.Value + 1;
      }
      TVar13 = (this->SectionRange).Value.UpperBound;
      FVar14.Value = iVar11 + FVar14.Value;
      local_res8 = CONCAT31(local_res8._1_3_,1);
      if (TVar13.Type.Value.Value != '\x02') {
        TVar4.Value.Value = FStackX_1c.Value;
        TVar4._0_4_ = local_res20;
        __return_storage_ptr__->LowerBound = TVar4;
        TVar2.Value.Value = FVar14.Value;
        TVar2._0_4_ = local_res8;
        if (FVar14.Value < TVar13.Value.Value.Value) {
          TVar13 = TVar2;
        }
        __return_storage_ptr__->UpperBound = TVar13;
        return __return_storage_ptr__;
      }
      TVar3.Value.Value = FStackX_1c.Value;
      TVar3._0_4_ = local_res20;
      TVar13.Value.Value = FVar14.Value;
      TVar13._0_4_ = local_res8;
      __return_storage_ptr__->LowerBound = TVar3;
      __return_storage_ptr__->UpperBound = TVar13;
      return __return_storage_ptr__;
    }
  }
  local_20 = local_20 & 0xffffff00;
  local_28 = local_28 & 0xffffff00;
  TVar5.Value.Value = 0;
  TVar5._0_4_ = local_28;
  __return_storage_ptr__->LowerBound = TVar5;
  TVar6.Value.Value = 0;
  TVar6._0_4_ = local_20;
  __return_storage_ptr__->UpperBound = TVar6;
  return __return_storage_ptr__;
}

// GetEaseOutRange @ 1462184c0

TRange<FFrameNumber> * __thiscall
UMovieSceneSection::GetEaseOutRange
          (UMovieSceneSection *this,TRange<FFrameNumber> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  TRangeBound<FFrameNumber> TVar3;
  TRangeBound<FFrameNumber> TVar4;
  TRangeBound<FFrameNumber> TVar5;
  TRangeBound<FFrameNumber> TVar6;
  TRangeBound<FFrameNumber> TVar7;
  bool bVar8;
  TEnumAsByte<ERangeBoundTypes::Type> TVar9;
  TRange<FFrameNumber> *pTVar10;
  TRangeBound<FFrameNumber> TVar11;
  uint uVar12;
  longlong lVar13;
  FFrameNumber FVar14;
  undefined4 local_res8;
  FFrameNumber FStackX_1c;
  undefined4 local_res20;
  uint local_28;
  uint local_20;
  
  TVar11 = (this->SectionRange).Value.UpperBound;
  if (TVar11.Type.Value.Value != '\x02') {
    lVar13 = 0xac;
    uVar12 = 0xac;
    if ((this->Easing).bManualEaseOut == false) {
      uVar12 = 0x7c;
    }
    if (0 < *(int *)((longlong)&this->_padding_ + (ulonglong)uVar12)) {
      uVar12 = TVar11._0_4_ & 0xff;
      FStackX_1c = TVar11.Value.Value;
      if (TVar11.Type.Value.Value == '\x01') {
        if ((uVar12 == 2) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Type != ERangeBoundTypes::Open",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                               ,99,L""), bVar8)) {
          pcVar2 = (code *)swi(3);
          pTVar10 = (TRange<FFrameNumber> *)(*pcVar2)();
          return pTVar10;
        }
        FStackX_1c.Value = FStackX_1c.Value + 1;
      }
      else if ((uVar12 == 2) &&
              (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Type != ERangeBoundTypes::Open",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                  ,99,L""), bVar8)) {
        pcVar2 = (code *)swi(3);
        pTVar10 = (TRange<FFrameNumber> *)(*pcVar2)();
        return pTVar10;
      }
      TVar11 = (this->SectionRange).Value.UpperBound;
      if ((this->Easing).bManualEaseOut == false) {
        lVar13 = 0x7c;
      }
      local_res20 = CONCAT31(local_res20._1_3_,1);
      FVar14 = TVar11.Value.Value;
      iVar1 = *(int *)((longlong)&this->_padding_ + lVar13);
      TVar9 = TVar11.Type.Value;
      if (TVar9.Value == '\x01') {
        FVar14.Value = FVar14.Value + 1;
      }
      else if ((TVar9.Value == '\x02') &&
              (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Type != ERangeBoundTypes::Open",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                  ,99,L""), bVar8)) {
        pcVar2 = (code *)swi(3);
        pTVar10 = (TRange<FFrameNumber> *)(*pcVar2)();
        return pTVar10;
      }
      TVar11 = (this->SectionRange).Value.LowerBound;
      FVar14.Value = FVar14.Value - iVar1;
      local_res8 = CONCAT31(local_res8._1_3_,1);
      if (TVar11.Type.Value.Value != '\x02') {
        TVar3.Value.Value = FVar14.Value;
        TVar3._0_4_ = local_res8;
        if (TVar11.Value.Value.Value < FVar14.Value) {
          TVar11 = TVar3;
        }
        __return_storage_ptr__->LowerBound = TVar11;
        TVar5.Value.Value = FStackX_1c.Value;
        TVar5._0_4_ = local_res20;
        __return_storage_ptr__->UpperBound = TVar5;
        return __return_storage_ptr__;
      }
      TVar11.Value.Value = FVar14.Value;
      TVar11._0_4_ = local_res8;
      __return_storage_ptr__->LowerBound = TVar11;
      TVar4.Value.Value = FStackX_1c.Value;
      TVar4._0_4_ = local_res20;
      __return_storage_ptr__->UpperBound = TVar4;
      return __return_storage_ptr__;
    }
  }
  local_28 = local_28 & 0xffffff00;
  TVar6.Value.Value = 0;
  TVar6._0_4_ = local_28;
  __return_storage_ptr__->LowerBound = TVar6;
  local_20 = local_20 & 0xffffff00;
  TVar7.Value.Value = 0;
  TVar7._0_4_ = local_20;
  __return_storage_ptr__->UpperBound = TVar7;
  return __return_storage_ptr__;
}

// GetImplicitObjectOwner @ 146218b00

UObject * __thiscall UMovieSceneSection::GetImplicitObjectOwner(UMovieSceneSection *this)

{
  bool bVar1;
  UClass *pUVar2;
  UMovieSceneTrack *this_00;
  UMovieScene *this_01;
  FMovieSceneSpawnable *pFVar3;
  FGuid local_18;
  
  pUVar2 = UMovieSceneTrack::StaticClass();
  this_00 = (UMovieSceneTrack *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar2)
  ;
  if (this_00 != (UMovieSceneTrack *)0x0) {
    pUVar2 = Z_Construct_UClass_UMovieScene_NoRegister();
    this_01 = (UMovieScene *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this_00,pUVar2)
    ;
    if (this_01 != (UMovieScene *)0x0) {
      local_18.A = 0;
      local_18.B = 0;
      local_18.C = 0;
      local_18.D = 0;
      bVar1 = UMovieScene::FindTrackBinding(this_01,this_00,&local_18);
      if (bVar1) {
        pFVar3 = UMovieScene::FindSpawnable(this_01,&local_18);
        if (pFVar3 != (FMovieSceneSpawnable *)0x0) {
          return (pFVar3->ObjectTemplate).field0_0x0.DebugPtr;
        }
        UMovieScene::FindPossessable(this_01,&local_18);
      }
    }
  }
  return (UObject *)0x0;
}

// GetKeyStruct @ 146218cb0

TSharedPtr<FStructOnScope,1> * __thiscall
UMovieSceneSection::GetKeyStruct
          (UMovieSceneSection *this,TSharedPtr<FStructOnScope,1> *__return_storage_ptr__,
          TArrayView<FKeyHandle_const_,int> *param_1)

{
  __return_storage_ptr__->Object = (FStructOnScope *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetOffsetTime @ 146219f60

TOptional<FFrameTime> * __thiscall
UMovieSceneSection::GetOffsetTime
          (UMovieSceneSection *this,TOptional<FFrameTime> *__return_storage_ptr__)

{
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// GetOverlappingSections @ 14621a170

void __thiscall
UMovieSceneSection::GetOverlappingSections
          (UMovieSceneSection *this,
          TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> *param_1,bool param_2,
          bool param_3)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  int iVar6;
  UClass *pUVar7;
  UObject *pUVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined1 local_58 [8];
  UMovieSceneSection *local_50;
  TRange<FFrameNumber> local_48;
  TRange<FFrameNumber> local_38;
  
  pUVar7 = UMovieSceneTrack::StaticClass();
  pUVar8 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar7);
  if (pUVar8 != (UObject *)0x0) {
    local_48.LowerBound.Type.Value = (this->SectionRange).Value.LowerBound.Type.Value;
    local_48.LowerBound._1_3_ = *(undefined3 *)&(this->SectionRange).Value.LowerBound.field_0x1;
    local_48.LowerBound.Value.Value = (this->SectionRange).Value.LowerBound.Value.Value;
    local_48.UpperBound.Type.Value = (this->SectionRange).Value.UpperBound.Type.Value;
    local_48.UpperBound._1_3_ = *(undefined3 *)&(this->SectionRange).Value.UpperBound.field_0x1;
    local_48.UpperBound.Value.Value = (this->SectionRange).Value.UpperBound.Value.Value;
    plVar9 = (longlong *)(**(code **)(*(longlong *)pUVar8 + 0x360))(pUVar8);
    plVar10 = (longlong *)*plVar9;
    lVar4 = plVar9[1];
    plVar1 = plVar10 + (int)lVar4;
    while( true ) {
      if ((int)plVar9[1] != (int)lVar4) {
        local_58[0] = 0;
        `TCheckedPointerIterator<UMovieSceneSection_*_const,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_58);
      }
      if (plVar10 == plVar1) break;
      local_50 = (UMovieSceneSection *)*plVar10;
      if (((local_50 != (UMovieSceneSection *)0x0) && ((param_3 || (local_50 != this)))) &&
         ((!param_2 || (local_50->RowIndex == this->RowIndex)))) {
        local_38.LowerBound = (local_50->SectionRange).Value.LowerBound;
        local_38.UpperBound = (local_50->SectionRange).Value.UpperBound;
        bVar5 = TRange<FFrameNumber>::Overlaps(&local_38,&local_48);
        if (bVar5) {
          pFVar2 = (param_1->AllocatorInstance).Data;
          if (((pFVar2 <= (FScriptContainerElement *)&local_50) &&
              ((FScriptContainerElement *)&local_50 < pFVar2 + (longlong)param_1->ArrayMax * 8)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar6 = param_1->ArrayNum;
          if (iVar6 == param_1->ArrayMax) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
          }
          param_1->ArrayNum = iVar6 + 1;
          *(UMovieSceneSection **)((param_1->AllocatorInstance).Data + (longlong)iVar6 * 8) =
               local_50;
        }
      }
      plVar10 = plVar10 + 1;
    }
  }
  return;
}

// GetPrivateStaticClass @ 14621bce0

UClass * __cdecl UMovieSceneSection::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneSection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneSection",
               &Z_Registration_Info_UClass_UMovieSceneSection.InnerSingleton,
               StaticRegisterNativesUMovieSceneSection,0x110,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneSection>,
               InternalVTableHelperCtorCaller<UMovieSceneSection>,local_res8,
               UMovieSceneDecorationContainerObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneSection.InnerSingleton;
}

// GetRange @ 14621c130

TRange<FFrameNumber> * __thiscall
UMovieSceneSection::GetRange(UMovieSceneSection *this,TRange<FFrameNumber> *__return_storage_ptr__)

{
  TRangeBound<FFrameNumber> TVar1;
  
  TVar1 = (this->SectionRange).Value.UpperBound;
  __return_storage_ptr__->LowerBound = (this->SectionRange).Value.LowerBound;
  __return_storage_ptr__->UpperBound = TVar1;
  return __return_storage_ptr__;
}

// GetReferencedBindings @ 14621c270

void __thiscall
UMovieSceneSection::GetReferencedBindings
          (UMovieSceneSection *this,TArray<FGuid,TSizedDefaultAllocator<32>_> *param_1)

{
  return;
}

// GetSnapTimes @ 14621d1e0

void __thiscall
UMovieSceneSection::GetSnapTimes
          (UMovieSceneSection *this,TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *param_1,
          bool param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FFrameNumber *pFVar5;
  int *piVar6;
  int *piVar7;
  
  if (param_2) {
    if ((this->SectionRange).Value.LowerBound.Type.Value != '\x02') {
      pFVar5 = &(this->SectionRange).Value.LowerBound.Value;
      pFVar1 = (param_1->AllocatorInstance).Data;
      if (((pFVar1 <= pFVar5) && (pFVar5 < pFVar1 + (longlong)param_1->ArrayMax * 4)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar4 = param_1->ArrayNum;
      if (iVar4 == param_1->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      param_1->ArrayNum = iVar4 + 1;
      *(int *)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 4) = pFVar5->Value;
    }
    piVar6 = &param_1->ArrayMax;
    if ((this->SectionRange).Value.UpperBound.Type.Value != '\x02') {
      pFVar1 = (param_1->AllocatorInstance).Data;
      pFVar5 = &(this->SectionRange).Value.UpperBound.Value;
      if (((pFVar1 <= pFVar5) && (pFVar5 < pFVar1 + (longlong)*piVar6 * 4)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      piVar7 = &param_1->ArrayNum;
      iVar4 = *piVar7;
      if (iVar4 == *piVar6) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&param_1->AllocatorInstance,piVar6);
        *piVar7 = iVar4;
      }
      *piVar7 = iVar4 + 1;
      *(int *)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 4) = pFVar5->Value;
    }
  }
  return;
}

// GetSourceObject @ 14621d3e0

UObject * __thiscall UMovieSceneSection::GetSourceObject(UMovieSceneSection *this)

{
  return (UObject *)0x0;
}

// GetSupportedBlendTypes @ 14621d670

FMovieSceneBlendTypeField __thiscall
UMovieSceneSection::GetSupportedBlendTypes(UMovieSceneSection *this)

{
  FMovieSceneBlendTypeField FVar1;
  UClass *pUVar2;
  UObject *pUVar3;
  undefined7 extraout_var;
  undefined1 *in_RDX;
  
  pUVar2 = UMovieSceneTrack::StaticClass();
  pUVar3 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar2);
  if (pUVar3 != (UObject *)0x0) {
    *in_RDX = pUVar3[3].field_0x10;
    return (FMovieSceneBlendTypeField)(EMovieSceneBlendType)in_RDX;
  }
  FVar1 = FMovieSceneBlendTypeField::None();
  *in_RDX = *(undefined1 *)CONCAT71(extraout_var,FVar1.BlendTypeField);
  return (FMovieSceneBlendTypeField)(EMovieSceneBlendType)in_RDX;
}

// GetTimeWarp @ 14621d710

FMovieSceneTimeWarpVariant * __thiscall UMovieSceneSection::GetTimeWarp(UMovieSceneSection *this)

{
  return (FMovieSceneTimeWarpVariant *)0x0;
}

// GetTotalWeightValue @ 14621d720

float __thiscall
UMovieSceneSection::GetTotalWeightValue(UMovieSceneSection *this,FFrameTime param_1)

{
  TRangeBound<FFrameNumber> TVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  FMovieSceneEasingSettings *pFVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  double dVar13;
  FFrameNumber FStackX_c;
  float fStackX_14;
  FFrameNumber FStackX_1c;
  
  fVar10 = __real_3f800000;
  dVar3 = __real_3ff0000000000000;
  TVar1 = (this->SectionRange).Value.LowerBound;
  fStackX_14 = param_1.SubFrame;
  fVar11 = fVar10;
  if (TVar1.Type.Value.Value != '\x02') {
    if ((this->Easing).bManualEaseIn == false) {
      iVar6 = (this->Easing).AutoEaseInDuration;
    }
    else {
      iVar6 = (this->Easing).ManualEaseInDuration;
    }
    if ((0 < iVar6) && (*(longlong *)&(this->Easing).EaseIn != 0)) {
      uVar7 = TVar1._0_4_ & 0xff;
      FStackX_c = TVar1.Value.Value;
      if (TVar1.Type.Value.Value == '\x01') {
        if ((uVar7 == 2) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Type != ERangeBoundTypes::Open",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                               ,99,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          fVar10 = (float)(*pcVar2)();
          return fVar10;
        }
      }
      else {
        if ((uVar7 == 2) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Type != ERangeBoundTypes::Open",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                               ,99,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          fVar10 = (float)(*pcVar2)();
          return fVar10;
        }
        FStackX_c.Value = FStackX_c.Value + 1;
      }
      pFVar5 = (FMovieSceneEasingSettings *)&(this->Easing).ManualEaseInDuration;
      if ((this->Easing).bManualEaseIn == false) {
        pFVar5 = &this->Easing;
      }
      dVar13 = ((double)fStackX_14 + (double)(param_1.FrameNumber.Value.Value - FStackX_c.Value)) /
               (double)pFVar5->AutoEaseInDuration;
      if (0.0 <= dVar13) {
        if (dVar13 <= dVar3) {
          fVar11 = IMovieSceneEasingFunction::EvaluateWith(&(this->Easing).EaseIn,(float)dVar13);
        }
      }
      else {
        fVar11 = 0.0;
      }
    }
  }
  TVar1 = (this->SectionRange).Value.UpperBound;
  if (TVar1.Type.Value.Value != '\x02') {
    lVar9 = 0xac;
    lVar8 = 0xac;
    if ((this->Easing).bManualEaseOut == false) {
      lVar8 = 0x7c;
    }
    iVar6 = *(int *)((longlong)&this->_padding_ + lVar8);
    if ((0 < iVar6) && (*(longlong *)&(this->Easing).EaseOut != 0)) {
      uVar7 = TVar1._0_4_ & 0xff;
      FStackX_1c = TVar1.Value.Value;
      if (TVar1.Type.Value.Value == '\x01') {
        if ((uVar7 == 2) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Type != ERangeBoundTypes::Open",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                               ,99,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          fVar10 = (float)(*pcVar2)();
          return fVar10;
        }
        FStackX_1c.Value = FStackX_1c.Value + 1;
      }
      else if ((uVar7 == 2) &&
              (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Type != ERangeBoundTypes::Open",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                  ,99,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        fVar10 = (float)(*pcVar2)();
        return fVar10;
      }
      if ((this->Easing).bManualEaseOut == false) {
        lVar9 = 0x7c;
      }
      dVar13 = ((double)((iVar6 - FStackX_1c.Value) + param_1.FrameNumber.Value.Value) +
               (double)fStackX_14) / (double)*(int *)((longlong)&this->_padding_ + lVar9);
      if (0.0 <= dVar13) {
        if (dVar13 <= dVar3) {
          fVar12 = IMovieSceneEasingFunction::EvaluateWith(&(this->Easing).EaseOut,(float)dVar13);
          fVar10 = fVar10 - fVar12;
        }
        else {
          fVar10 = 0.0;
        }
      }
    }
  }
  return fVar10 * fVar11;
}

// InitialPlacement @ 14621efc0

void __thiscall
UMovieSceneSection::InitialPlacement
          (UMovieSceneSection *this,
          TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> *param_1,FFrameNumber param_2,
          int param_3,bool param_4)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  TRangeBound<FFrameNumber> TVar5;
  bool bVar6;
  longlong lVar7;
  UClass *pUVar8;
  UObject *pUVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res18 [8];
  undefined4 in_stack_ffffffffffffffc8;
  undefined4 uVar12;
  uint in_stack_ffffffffffffffd0;
  uint uVar13;
  undefined8 uVar14;
  
  if ((param_3 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Duration >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\MovieSceneSection.cpp"
                         ,0x30e,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  this->RowIndex = 0;
  uVar12 = CONCAT31((int3)((uint)in_stack_ffffffffffffffc8 >> 8),1);
  uVar13 = in_stack_ffffffffffffffd0 & 0xffffff00;
  TVar5.Value.Value = param_2.Value;
  TVar5._0_4_ = uVar12;
  (this->SectionRange).Value.LowerBound = TVar5;
  (this->SectionRange).Value.UpperBound =
       (TRangeBound<FFrameNumber>)
       (CONCAT44(param_2.Value + param_3,in_stack_ffffffffffffffd0) & 0xffffffffffffff00);
  pFVar11 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar11 + (longlong)iVar2 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<UMovieSceneSection_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if (pFVar11 == pFVar1) break;
    iVar10 = *(int *)(*(longlong *)pFVar11 + 0xd4) + 1;
    iVar4 = this->OverlapPriority;
    if (this->OverlapPriority < iVar10) {
      iVar4 = iVar10;
    }
    pFVar11 = pFVar11 + 8;
    this->OverlapPriority = iVar4;
  }
  lVar7 = (**(code **)(this->_padding_ + 800))(this,param_1,0,0);
  if (param_4) {
    while (lVar7 != 0) {
      this->RowIndex = this->RowIndex + 1;
      lVar7 = (**(code **)(this->_padding_ + 800))(this,param_1,0,0);
    }
  }
  else {
    while (lVar7 != 0) {
      uVar14 = *(undefined8 *)(lVar7 + 0xb0);
      if ((char)*(undefined8 *)(lVar7 + 0xb8) == '\x02') {
        this->OverlapPriority = this->OverlapPriority + 1;
        break;
      }
      MoveSectionImpl(this,(FFrameNumber)
                           ((int)((ulonglong)*(undefined8 *)(lVar7 + 0xb8) >> 0x20) - param_2.Value)
                     );
      lVar7 = (**(code **)(this->_padding_ + 800))(this,param_1,0,0,uVar12,uVar13,uVar14);
    }
  }
  pUVar8 = UMovieSceneTrack::StaticClass();
  pUVar9 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar8);
  if (pUVar9 != (UObject *)0x0) {
    (**(code **)(*(longlong *)pUVar9 + 0x2d8))(pUVar9);
  }
  return;
}

// InitialPlacementOnRow @ 14621f170

void __thiscall
UMovieSceneSection::InitialPlacementOnRow
          (UMovieSceneSection *this,
          TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> *param_1,FFrameNumber param_2,
          int param_3,int param_4)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UMovieSceneSection *pUVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  longlong lVar7;
  UClass *pUVar8;
  UObject *pUVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined4 local_28;
  uint uStack_20;
  
  if ((param_3 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Duration >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\MovieSceneSection.cpp"
                         ,0x340,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_28 = CONCAT31(local_28._1_3_,1);
  uStack_20 = uStack_20 & 0xffffff00;
  this->RowIndex = param_4;
  *(undefined4 *)&(this->SectionRange).Value.LowerBound = local_28;
  (this->SectionRange).Value.LowerBound.Value.Value = param_2.Value;
  *(uint *)&(this->SectionRange).Value.UpperBound = uStack_20;
  (this->SectionRange).Value.UpperBound.Value.Value = param_2.Value + param_3;
  if (param_4 == -1) {
    this->RowIndex = 0;
    lVar7 = (**(code **)(this->_padding_ + 800))(this,param_1,0,0);
    while (lVar7 != 0) {
      this->RowIndex = this->RowIndex + 1;
      lVar7 = (**(code **)(this->_padding_ + 800))(this,param_1,0,0);
    }
  }
  pFVar11 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar11 + (longlong)iVar2 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<UMovieSceneSection_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if (pFVar11 == pFVar1) break;
    iVar10 = *(int *)(*(longlong *)pFVar11 + 0xd4) + 1;
    iVar5 = this->OverlapPriority;
    if (this->OverlapPriority < iVar10) {
      iVar5 = iVar10;
    }
    pFVar11 = pFVar11 + 8;
    this->OverlapPriority = iVar5;
  }
  lVar7 = (**(code **)(this->_padding_ + 800))(this,param_1,0,0);
  if (lVar7 != 0) {
    pFVar11 = (param_1->AllocatorInstance).Data;
    iVar2 = param_1->ArrayNum;
    pFVar1 = pFVar11 + (longlong)iVar2 * 8;
    while( true ) {
      if (param_1->ArrayNum != iVar2) {
        `TCheckedPointerIterator<UMovieSceneSection_*_const,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res20);
      }
      if (pFVar11 == pFVar1) break;
      pUVar3 = *(UMovieSceneSection **)pFVar11;
      if (((pUVar3 != (UMovieSceneSection *)0x0) && (pUVar3 != this)) &&
         (this->RowIndex <= pUVar3->RowIndex)) {
        pUVar3->RowIndex = pUVar3->RowIndex + 1;
      }
      pFVar11 = pFVar11 + 8;
    }
  }
  pUVar8 = UMovieSceneTrack::StaticClass();
  pUVar9 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar8);
  if (pUVar9 != (UObject *)0x0) {
    (**(code **)(*(longlong *)pUVar9 + 0x2d8))(pUVar9);
  }
  return;
}

// InvalidateChannelProxy @ 1462219a0

void __thiscall UMovieSceneSection::InvalidateChannelProxy(UMovieSceneSection *this)

{
  undefined8 local_18;
  FSharedReferencer<1> aFStack_10 [2];
  
  this->ChannelProxyType = Dynamic;
  local_18 = 0;
  aFStack_10[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->ChannelProxy != (TSharedPtr<FMovieSceneChannelProxy,1> *)&local_18) {
    (this->ChannelProxy).Object = (FMovieSceneChannelProxy *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ChannelProxy).SharedReferenceCount,aFStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (aFStack_10[0].ReferenceController);
  return;
}

// IsPostLoadThreadSafe @ 146222700

bool __thiscall UMovieSceneSection::IsPostLoadThreadSafe(UMovieSceneSection *this)

{
  return true;
}

// IsReadOnly @ 146222730

bool __thiscall UMovieSceneSection::IsReadOnly(UMovieSceneSection *this)

{
  return this->bIsLocked;
}

// MigrateFrameTimes @ 146225580

void __thiscall
UMovieSceneSection::MigrateFrameTimes(UMovieSceneSection *this,IRetimingInterface *param_1)

{
  return;
}

// MigrateFrameTimes @ 146225590

void __thiscall
UMovieSceneSection::MigrateFrameTimes
          (UMovieSceneSection *this,FFrameRate param_1,FFrameRate param_2)

{
  return;
}

// MoveSection @ 1462255a0

void __thiscall UMovieSceneSection::MoveSection(UMovieSceneSection *this,FFrameNumber param_1)

{
  ForElementType<FMovieSceneChannelEntry> FVar1;
  undefined8 *puVar2;
  int iVar3;
  TRangeBound<FFrameNumber> TVar4;
  code *pcVar5;
  bool bVar6;
  FMovieSceneChannelProxy *pFVar7;
  ForElementType<FMovieSceneChannelEntry> FVar8;
  undefined8 *puVar9;
  
  if (this->bIsLocked == 0) {
    TVar4 = (this->SectionRange).Value.LowerBound;
    if (TVar4.Type.Value.Value != '\x02') {
      (this->SectionRange).Value.LowerBound.Value.Value = TVar4.Value.Value.Value + param_1.Value;
    }
    TVar4 = (this->SectionRange).Value.UpperBound;
    if (TVar4.Type.Value.Value != '\x02') {
      (this->SectionRange).Value.UpperBound.Value.Value = TVar4.Value.Value.Value + param_1.Value;
    }
    pFVar7 = GetChannelProxy(this);
    iVar3 = (pFVar7->Entries).ArrayNum;
    FVar8 = (pFVar7->Entries).AllocatorInstance.SecondaryData;
    if (FVar8 == (ForElementType<FMovieSceneChannelEntry>)0x0) {
      FVar8 = (ForElementType<FMovieSceneChannelEntry>)&pFVar7->Entries;
    }
    if ((iVar3 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FVar1 = (ForElementType<FMovieSceneChannelEntry>)((longlong)FVar8 + (longlong)iVar3 * 0x18);
    for (; FVar8 != FVar1; FVar8 = (ForElementType<FMovieSceneChannelEntry>)((longlong)FVar8 + 0x18)
        ) {
      iVar3 = *(int *)((longlong)FVar8 + 0x10);
      puVar9 = *(undefined8 **)((longlong)FVar8 + 8);
      if ((iVar3 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      puVar2 = puVar9 + iVar3;
      for (; puVar9 != puVar2; puVar9 = puVar9 + 1) {
        (**(code **)(*(longlong *)*puVar9 + 0x60))((longlong *)*puVar9,param_1.Value);
      }
    }
  }
  return;
}

// MoveSectionImpl @ 1462255b0

void __thiscall UMovieSceneSection::MoveSectionImpl(UMovieSceneSection *this,FFrameNumber param_1)

{
  ForElementType<FMovieSceneChannelEntry> FVar1;
  undefined8 *puVar2;
  int iVar3;
  TRangeBound<FFrameNumber> TVar4;
  code *pcVar5;
  bool bVar6;
  FMovieSceneChannelProxy *pFVar7;
  ForElementType<FMovieSceneChannelEntry> FVar8;
  undefined8 *puVar9;
  
  if (this->bIsLocked == 0) {
    TVar4 = (this->SectionRange).Value.LowerBound;
    if (TVar4.Type.Value.Value != '\x02') {
      (this->SectionRange).Value.LowerBound.Value.Value = TVar4.Value.Value.Value + param_1.Value;
    }
    TVar4 = (this->SectionRange).Value.UpperBound;
    if (TVar4.Type.Value.Value != '\x02') {
      (this->SectionRange).Value.UpperBound.Value.Value = TVar4.Value.Value.Value + param_1.Value;
    }
    pFVar7 = GetChannelProxy(this);
    iVar3 = (pFVar7->Entries).ArrayNum;
    FVar8 = (pFVar7->Entries).AllocatorInstance.SecondaryData;
    if (FVar8 == (ForElementType<FMovieSceneChannelEntry>)0x0) {
      FVar8 = (ForElementType<FMovieSceneChannelEntry>)&pFVar7->Entries;
    }
    if ((iVar3 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FVar1 = (ForElementType<FMovieSceneChannelEntry>)((longlong)FVar8 + (longlong)iVar3 * 0x18);
    for (; FVar8 != FVar1; FVar8 = (ForElementType<FMovieSceneChannelEntry>)((longlong)FVar8 + 0x18)
        ) {
      iVar3 = *(int *)((longlong)FVar8 + 0x10);
      puVar9 = *(undefined8 **)((longlong)FVar8 + 8);
      if ((iVar3 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      puVar2 = puVar9 + iVar3;
      for (; puVar9 != puVar2; puVar9 = puVar9 + 1) {
        (**(code **)(*(longlong *)*puVar9 + 0x60))((longlong *)*puVar9,param_1.Value);
      }
    }
  }
  return;
}

// OnAddedToTrack @ 146225880

void __thiscall
UMovieSceneSection::OnAddedToTrack(UMovieSceneSection *this,UMovieSceneTrack *param_1)

{
  TObjectPtr<UObject> this_00;
  UClass *pUVar1;
  UObject *pUVar2;
  longlong *plVar3;
  TObjectPtr<UObject>_u_0 *pTVar4;
  TArrayView<TObjectPtr<UObject>_const_,int> local_18;
  
  (**(code **)(this->_padding_ + 0x380))();
  pUVar1 = Z_Construct_UClass_UMovieScene_NoRegister();
  pUVar2 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)param_1,pUVar1);
  if (pUVar2 != (UObject *)0x0) {
    FMovieSceneDecorationContainer::GetDecorations
              ((FMovieSceneDecorationContainer *)&this->_padding_,&local_18);
    for (pTVar4 = &(local_18.DataPtr)->field0_0x0;
        pTVar4 != &local_18.DataPtr[local_18.ArrayNum].field0_0x0; pTVar4 = pTVar4 + 1) {
      this_00.field0_0x0 = (TObjectPtr<UObject>_u_0)pTVar4->DebugPtr;
      if (this_00.field0_0x0 != (UObject *)0x0) {
        pUVar1 = Z_Construct_UClass_UMovieSceneLifetimeDecoration_NoRegister();
        plVar3 = UObjectBaseUtility::GetInterfaceAddress
                           ((UObjectBaseUtility *)this_00.field0_0x0,pUVar1);
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x10))(plVar3,pUVar2);
        }
      }
    }
  }
  return;
}

// OnAddedToTrackImpl @ 146225940

void __thiscall
UMovieSceneSection::OnAddedToTrackImpl(UMovieSceneSection *this,UMovieSceneTrack *param_1)

{
  return;
}

// OnBindingIDsUpdated @ 146225950

void __thiscall
UMovieSceneSection::OnBindingIDsUpdated
          (UMovieSceneSection *this,
          TMap<UE::MovieScene::FFixedObjectBindingID,UE::MovieScene::FFixedObjectBindingID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FFixedObjectBindingID,UE::MovieScene::FFixedObjectBindingID,0>_>
          *param_1,FMovieSceneSequenceID param_2,
          TSharedRef<UE::MovieScene::FSharedPlaybackState,1> *param_3)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return;
}

// OnDecorationAdded @ 146225a60

void __thiscall UMovieSceneSection::OnDecorationAdded(UMovieSceneSection *this,UObject *param_1)

{
  UClass *pUVar1;
  UObject *pUVar2;
  longlong *plVar3;
  
  pUVar1 = Z_Construct_UClass_UMovieScene_NoRegister();
  pUVar2 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar1);
  if (param_1 == (UObject *)0x0) {
    plVar3 = (longlong *)0x0;
  }
  else {
    pUVar1 = Z_Construct_UClass_UMovieSceneLifetimeDecoration_NoRegister();
    plVar3 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)param_1,pUVar1);
  }
  if ((pUVar2 != (UObject *)0x0) && (plVar3 != (longlong *)0x0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3,pUVar2);
  }
  if (param_1 != (UObject *)0x0) {
    pUVar1 = Z_Construct_UClass_UMovieSceneSectionDecoration_NoRegister();
    plVar3 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)param_1,pUVar1);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,this);
    }
  }
  return;
}

// OnDecorationRemoved @ 146225b50

void __thiscall UMovieSceneSection::OnDecorationRemoved(UMovieSceneSection *this,UObject *param_1)

{
  UClass *pUVar1;
  longlong *plVar2;
  UObject *pUVar3;
  
  if (param_1 == (UObject *)0x0) {
    pUVar1 = Z_Construct_UClass_UMovieScene_NoRegister();
    pUVar3 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar1);
    plVar2 = (longlong *)0x0;
  }
  else {
    pUVar1 = Z_Construct_UClass_UMovieSceneSectionDecoration_NoRegister();
    plVar2 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)param_1,pUVar1);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
    pUVar1 = Z_Construct_UClass_UMovieScene_NoRegister();
    pUVar3 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar1);
    pUVar1 = Z_Construct_UClass_UMovieSceneLifetimeDecoration_NoRegister();
    plVar2 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)param_1,pUVar1);
  }
  if ((pUVar3 != (UObject *)0x0) && (plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x18))(plVar2,pUVar3);
  }
  return;
}

// OnDilated @ 146225c30

void __thiscall
UMovieSceneSection::OnDilated(UMovieSceneSection *this,float param_1,FFrameNumber param_2)

{
  return;
}

// OnMoved @ 146225c50

void __thiscall UMovieSceneSection::OnMoved(UMovieSceneSection *this,int param_1)

{
  return;
}

// OnRemovedFromTrack @ 146225e00

void __thiscall UMovieSceneSection::OnRemovedFromTrack(UMovieSceneSection *this)

{
  TObjectPtr<UObject> this_00;
  UClass *pUVar1;
  UObject *pUVar2;
  longlong *plVar3;
  TObjectPtr<UObject>_u_0 *pTVar4;
  TArrayView<TObjectPtr<UObject>_const_,int> local_18;
  
  (**(code **)(this->_padding_ + 0x388))();
  pUVar1 = Z_Construct_UClass_UMovieScene_NoRegister();
  pUVar2 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar1);
  if (pUVar2 != (UObject *)0x0) {
    FMovieSceneDecorationContainer::GetDecorations
              ((FMovieSceneDecorationContainer *)&this->_padding_,&local_18);
    for (pTVar4 = &(local_18.DataPtr)->field0_0x0;
        pTVar4 != &local_18.DataPtr[local_18.ArrayNum].field0_0x0; pTVar4 = pTVar4 + 1) {
      this_00.field0_0x0 = (TObjectPtr<UObject>_u_0)pTVar4->DebugPtr;
      if (this_00.field0_0x0 != (UObject *)0x0) {
        pUVar1 = Z_Construct_UClass_UMovieSceneLifetimeDecoration_NoRegister();
        plVar3 = UObjectBaseUtility::GetInterfaceAddress
                           ((UObjectBaseUtility *)this_00.field0_0x0,pUVar1);
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x18))(plVar3,pUVar2);
        }
      }
    }
  }
  return;
}

// OnRemovedFromTrackImpl @ 146225ec0

void __thiscall UMovieSceneSection::OnRemovedFromTrackImpl(UMovieSceneSection *this)

{
  return;
}

// OverlapsWithSections @ 146226ec0

UMovieSceneSection * __thiscall
UMovieSceneSection::OverlapsWithSections
          (UMovieSceneSection *this,
          TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> *param_1,int param_2,int param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  code *pcVar6;
  bool bVar7;
  FFrameNumber FVar8;
  bool bVar9;
  UMovieSceneSection *pUVar10;
  FFrameNumber *pFVar11;
  ulonglong uVar12;
  FScriptContainerElement *pFVar13;
  undefined1 local_res18 [8];
  TRangeBound<FFrameNumber> local_58;
  TRangeBound<FFrameNumber> TStack_50;
  TRangeBound<FFrameNumber> local_48;
  TRangeBound<FFrameNumber> TStack_40;
  
  iVar2 = this->RowIndex;
  local_58 = (this->SectionRange).Value.LowerBound;
  TStack_50 = (this->SectionRange).Value.UpperBound;
  uVar3 = param_1->ArrayNum;
  uVar12 = (ulonglong)(int)uVar3;
  pFVar13 = (param_1->AllocatorInstance).Data;
  pFVar1 = pFVar13 + uVar12 * 8;
  do {
    if (param_1->ArrayNum != (int)uVar12) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<UMovieSceneSection_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if (pFVar13 == pFVar1) {
      return (UMovieSceneSection *)0x0;
    }
    pUVar10 = *(UMovieSceneSection **)pFVar13;
    if ((pUVar10 == (UMovieSceneSection *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Section",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\MovieSceneSection.cpp"
                           ,0x2fd,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      pUVar10 = (UMovieSceneSection *)(*pcVar6)();
      return pUVar10;
    }
    if ((this != pUVar10) && (pUVar10->RowIndex == iVar2 + param_2)) {
      local_48 = (pUVar10->SectionRange).Value.LowerBound;
      TStack_40 = (pUVar10->SectionRange).Value.UpperBound;
      if ((local_58.Type.Value == '\x02') || (TStack_50.Type.Value == '\x02')) {
LAB_146226fed:
        if ((local_48.Type.Value == '\x02') || (TStack_40.Type.Value == '\x02')) {
LAB_14622705f:
          if ((TStack_50.Type.Value == '\x02') || (local_48.Type.Value == '\x02')) {
            bVar9 = true;
          }
          else {
            bVar9 = false;
          }
          if ((local_58.Type.Value == '\x02') || (TStack_40.Type.Value == '\x02')) {
            bVar7 = true;
          }
          else {
            bVar7 = false;
          }
          bVar5 = true;
          if (!bVar9) {
            if ((local_48.Type.Value == '\x02') &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Type != ERangeBoundTypes::Open",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                   ,99,L""), bVar9)) {
              pcVar6 = (code *)swi(3);
              pUVar10 = (UMovieSceneSection *)(*pcVar6)();
              return pUVar10;
            }
            FVar8.Value = local_48.Value.Value;
            if ((TStack_50.Type.Value == '\x02') &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Type != ERangeBoundTypes::Open",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                   ,99,L""), bVar9)) {
              pcVar6 = (code *)swi(3);
              pUVar10 = (UMovieSceneSection *)(*pcVar6)();
              return pUVar10;
            }
            bVar5 = FVar8.Value < TStack_50.Value.Value;
            pFVar11 = TRangeBound<FFrameNumber>::GetValue(&local_48);
            iVar4 = pFVar11->Value;
            pFVar11 = TRangeBound<FFrameNumber>::GetValue(&TStack_50);
            if ((TStack_50.Type.Value == '\x01') && (local_48.Type.Value == '\x01')) {
              bVar9 = true;
            }
            else {
              bVar9 = false;
            }
            if (bVar9) {
              bVar5 = iVar4 <= pFVar11->Value;
            }
          }
          bVar9 = true;
          if (!bVar7) {
            if ((TStack_40.Type.Value == '\x02') &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Type != ERangeBoundTypes::Open",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                   ,99,L""), bVar9)) {
              pcVar6 = (code *)swi(3);
              pUVar10 = (UMovieSceneSection *)(*pcVar6)();
              return pUVar10;
            }
            FVar8.Value = TStack_40.Value.Value;
            if ((local_58.Type.Value == '\x02') &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Type != ERangeBoundTypes::Open",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                   ,99,L""), bVar9)) {
              pcVar6 = (code *)swi(3);
              pUVar10 = (UMovieSceneSection *)(*pcVar6)();
              return pUVar10;
            }
            bVar9 = local_58.Value.Value < FVar8.Value;
            pFVar11 = TRangeBound<FFrameNumber>::GetValue(&TStack_40);
            iVar4 = pFVar11->Value;
            pFVar11 = TRangeBound<FFrameNumber>::GetValue(&local_58);
            if ((local_58.Type.Value == '\x01') && (TStack_40.Type.Value == '\x01')) {
              bVar7 = true;
            }
            else {
              bVar7 = false;
            }
            if (bVar7) {
              bVar9 = pFVar11->Value <= iVar4;
            }
          }
          if ((bVar5) && (bVar9)) {
            return pUVar10;
          }
        }
        else {
          FVar8.Value = TStack_40.Value.Value;
          if ((local_48.Type.Value == '\x02') &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Type != ERangeBoundTypes::Open",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                 ,99,L""), bVar9)) {
            pcVar6 = (code *)swi(3);
            pUVar10 = (UMovieSceneSection *)(*pcVar6)();
            return pUVar10;
          }
          if (local_48.Value.Value <= FVar8.Value) {
            pFVar11 = TRangeBound<FFrameNumber>::GetValue(&TStack_40);
            iVar4 = pFVar11->Value;
            pFVar11 = TRangeBound<FFrameNumber>::GetValue(&local_48);
            if ((pFVar11->Value != iVar4) ||
               ((local_48.Type.Value != '\0' && (TStack_40.Type.Value != '\0'))))
            goto LAB_14622705f;
          }
        }
      }
      else {
        FVar8.Value = TStack_50.Value.Value;
        if ((local_58.Type.Value == '\x02') &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Type != ERangeBoundTypes::Open",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                               ,99,L""), bVar9)) {
          pcVar6 = (code *)swi(3);
          pUVar10 = (UMovieSceneSection *)(*pcVar6)();
          return pUVar10;
        }
        if (local_58.Value.Value <= FVar8.Value) {
          pFVar11 = TRangeBound<FFrameNumber>::GetValue(&TStack_50);
          iVar4 = pFVar11->Value;
          pFVar11 = TRangeBound<FFrameNumber>::GetValue(&local_58);
          if ((pFVar11->Value != iVar4) ||
             ((local_58.Type.Value != '\0' && (TStack_50.Type.Value != '\0')))) goto LAB_146226fed;
        }
      }
    }
    uVar12 = (ulonglong)uVar3;
    pFVar13 = pFVar13 + 8;
  } while( true );
}

// PostDuplicate @ 146228240

void __thiscall UMovieSceneSection::PostDuplicate(UMovieSceneSection *this,bool param_1)

{
  undefined8 local_18;
  FSharedReferencer<1> aFStack_10 [2];
  
  if (this->ChannelProxyType == Dynamic) {
    local_18 = 0;
    aFStack_10[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&this->ChannelProxy != (TSharedPtr<FMovieSceneChannelProxy,1> *)&local_18) {
      (this->ChannelProxy).Object = (FMovieSceneChannelProxy *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->ChannelProxy).SharedReferenceCount,aFStack_10);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (aFStack_10[0].ReferenceController);
    return;
  }
  return;
}

// PostEditImport @ 146228330

void __thiscall UMovieSceneSection::PostEditImport(UMovieSceneSection *this)

{
  undefined8 local_18;
  FSharedReferencer<1> aFStack_10 [2];
  
  if (this->ChannelProxyType == Dynamic) {
    local_18 = 0;
    aFStack_10[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&this->ChannelProxy != (TSharedPtr<FMovieSceneChannelProxy,1> *)&local_18) {
      (this->ChannelProxy).Object = (FMovieSceneChannelProxy *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->ChannelProxy).SharedReferenceCount,aFStack_10);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (aFStack_10[0].ReferenceController);
    return;
  }
  return;
}

// PostInitProperties @ 1462286b0

void __thiscall UMovieSceneSection::PostInitProperties(UMovieSceneSection *this)

{
  UObjectBase::AtomicallySetFlags((UObjectBase *)this,RF_Transactional);
  if ((*(uint *)(this->_padding_ + 8) & 0x30) != 0) {
    UObjectBase::AtomicallySetFlags
              ((UObjectBase *)this,
               *(EObjectFlags *)(this->_padding_ + 8) &
               (RF_Transient|RF_ArchetypeObject|RF_Transactional|RF_Public));
  }
  UMovieSceneSignedObject::PostInitProperties((UMovieSceneSignedObject *)this);
  return;
}

// PostRename @ 146229910

void __thiscall
UMovieSceneSection::PostRename(UMovieSceneSection *this,UObject *param_1,FName param_2)

{
  TObjectPtr<UObject> this_00;
  UClass *pUVar1;
  UObject *pUVar2;
  UObject *pUVar3;
  longlong *plVar4;
  TObjectPtr<UObject>_u_0 *pTVar5;
  undefined8 local_38;
  FSharedReferencer<1> FStack_30;
  TArrayView<TObjectPtr<UObject>_const_,int> local_28;
  
  if (this->ChannelProxyType == Dynamic) {
    local_38 = 0;
    FStack_30.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&this->ChannelProxy != (TSharedPtr<FMovieSceneChannelProxy,1> *)&local_38) {
      (this->ChannelProxy).Object = (FMovieSceneChannelProxy *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->ChannelProxy).SharedReferenceCount,&FStack_30);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_30.ReferenceController);
  }
  pUVar1 = Z_Construct_UClass_UMovieScene_NoRegister();
  pUVar2 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar1);
  if (pUVar2 != (UObject *)0x0) {
    pUVar1 = Z_Construct_UClass_UMovieScene_NoRegister();
    pUVar3 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)param_1,pUVar1);
    if (pUVar2 != pUVar3) {
      FMovieSceneDecorationContainer::GetDecorations
                ((FMovieSceneDecorationContainer *)&this->_padding_,&local_28);
      for (pTVar5 = &(local_28.DataPtr)->field0_0x0;
          pTVar5 != &local_28.DataPtr[local_28.ArrayNum].field0_0x0; pTVar5 = pTVar5 + 1) {
        this_00.field0_0x0 = (TObjectPtr<UObject>_u_0)pTVar5->DebugPtr;
        if (this_00.field0_0x0 != (UObject *)0x0) {
          pUVar1 = Z_Construct_UClass_UMovieSceneLifetimeDecoration_NoRegister();
          plVar4 = UObjectBaseUtility::GetInterfaceAddress
                             ((UObjectBaseUtility *)this_00.field0_0x0,pUVar1);
          if (plVar4 != (longlong *)0x0) {
            (**(code **)(*plVar4 + 0x10))(plVar4,pUVar2);
          }
        }
      }
    }
  }
  UObject::PostRename((UObject *)this,param_1,param_2);
  return;
}

// Serialize @ 146233ed0

void __thiscall UMovieSceneSection::Serialize(UMovieSceneSection *this,FArchive *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  TRangeBound<FFrameNumber> TVar3;
  TRangeBound<FFrameNumber> TVar4;
  TRangeBound<FFrameNumber> TVar5;
  int iVar6;
  undefined1 in_XMM1 [16];
  undefined1 auVar7 [16];
  double in_XMM2_Qa;
  double dVar8;
  undefined1 auVar9 [16];
  double dVar10;
  FFrameNumber local_res10;
  uint local_res18;
  int local_res20;
  int iStackX_24;
  undefined4 local_48;
  undefined4 uStack_40;
  undefined8 local_38;
  FSharedReferencer<1> aFStack_30 [5];
  
  if (((param_1->field_0x28 & 1) != 0) && (this->ChannelProxyType == Dynamic)) {
    local_38 = 0;
    aFStack_30[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&this->ChannelProxy != (TSharedPtr<FMovieSceneChannelProxy,1> *)&local_38) {
      (this->ChannelProxy).Object = (FMovieSceneChannelProxy *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->ChannelProxy).SharedReferenceCount,aFStack_30);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (aFStack_30[0].ReferenceController);
  }
  UMovieSceneDecorationContainerObject::Serialize
            ((UMovieSceneDecorationContainerObject *)this,param_1);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FSequencerObjectVersion::GUID);
  iVar6 = FArchiveState::CustomVer((FArchiveState *)param_1,&FSequencerObjectVersion::GUID);
  if (iVar6 < 7) {
    GetLegacyConversionFrameRate();
    if ((this->bIsInfinite_DEPRECATED == 0) || (this->bSupportsInfiniteRange == false)) {
      UpgradeLegacyMovieSceneTime((UObject *)&local_res10,(FFrameRate)this,in_XMM2_Qa);
      UpgradeLegacyMovieSceneTime((UObject *)&local_res18,(FFrameRate)this,in_XMM2_Qa);
      local_48 = CONCAT31(local_48._1_3_,1);
      TVar5.Value.Value = local_res10.Value;
      TVar5._0_4_ = local_48;
      (this->SectionRange).Value.LowerBound = TVar5;
      (this->SectionRange).Value.UpperBound =
           (TRangeBound<FFrameNumber>)(CONCAT44(local_res18 + 1,uStack_40) & 0xffffffffffffff00);
    }
    else {
      local_res10.Value._0_1_ = 2;
      TVar3.Value.Value = 0;
      TVar3._0_4_ = local_res10.Value;
      local_res18 = CONCAT31(local_res18._1_3_,2);
      (this->SectionRange).Value.LowerBound = TVar3;
      TVar4.Value.Value = 0;
      TVar4._0_4_ = local_res18;
      (this->SectionRange).Value.UpperBound = TVar4;
    }
    dVar10 = (double)this->PreRollTime_DEPRECATED * (double)local_res20 *
             (__real_3ff0000000000000 / (double)iStackX_24);
    auVar7._8_8_ = 0;
    auVar7._0_8_ = dVar10;
    auVar7 = roundpd(in_XMM1,auVar7,1);
    dVar8 = dVar10 - auVar7._0_8_;
    auVar9._8_8_ = 0;
    auVar9._0_8_ = (double)(int)dVar8 + dVar10;
    auVar9 = roundpd(ZEXT416((uint)(float)dVar8),auVar9,1);
    dVar8 = auVar9._0_8_;
    if (__real_41dfffffffc00000 <= auVar9._0_8_) {
      dVar8 = __real_41dfffffffc00000;
    }
    if (dVar8 <= __real_c1e0000000000000) {
      dVar8 = __real_c1e0000000000000;
    }
    dVar10 = (double)this->PostRollTime_DEPRECATED * (double)local_res20 *
             (__real_3ff0000000000000 / (double)iStackX_24);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = dVar10;
    auVar7 = roundpd(auVar7,auVar1,1);
    (this->PreRollFrames).Value = (int)dVar8;
    dVar8 = dVar10 - auVar7._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = (double)(int)dVar8 + dVar10;
    auVar7 = roundpd(ZEXT416((uint)(float)dVar8),auVar2,1);
    dVar8 = auVar7._0_8_;
    if (__real_41dfffffffc00000 <= auVar7._0_8_) {
      dVar8 = __real_41dfffffffc00000;
    }
    if (dVar8 <= __real_c1e0000000000000) {
      dVar8 = __real_c1e0000000000000;
    }
    (this->PostRollFrames).Value = (int)dVar8;
  }
  return;
}

// Serialize @ 146234120

void __thiscall
UMovieSceneSection::Serialize(UMovieSceneSection *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  Serialize(this,pFVar1);
  return;
}

// SetBlendType @ 146234830

void __thiscall
UMovieSceneSection::SetBlendType(UMovieSceneSection *this,EMovieSceneBlendType param_1)

{
  FMovieSceneBlendTypeField FVar1;
  bool bVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  undefined7 extraout_var;
  FMovieSceneBlendTypeField local_res18 [16];
  EMovieSceneBlendType *pEVar5;
  
  pUVar3 = UMovieSceneTrack::StaticClass();
  pUVar4 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar3);
  if (pUVar4 == (UObject *)0x0) {
    FVar1 = FMovieSceneBlendTypeField::None();
    pEVar5 = (EMovieSceneBlendType *)CONCAT71(extraout_var,FVar1.BlendTypeField);
  }
  else {
    pEVar5 = &pUVar4[3].field_0x10;
  }
  local_res18[0].BlendTypeField = *pEVar5;
  bVar2 = FMovieSceneBlendTypeField::Contains(local_res18,param_1);
  if (bVar2) {
    (this->BlendType).bIsValid = true;
    (this->BlendType).BlendType = param_1;
  }
  return;
}

// SetColorTint @ 1462348a0

void __thiscall UMovieSceneSection::SetColorTint(UMovieSceneSection *this,FColor *param_1)

{
  return;
}

// SetEndFrame @ 146234990

void __thiscall
UMovieSceneSection::SetEndFrame(UMovieSceneSection *this,TRangeBound<FFrameNumber> param_1)

{
  bool bVar1;
  TRangeBound<FFrameNumber> TVar2;
  int local_res8 [2];
  TRangeBound<FFrameNumber> local_res10;
  
  if (this->bIsLocked == 0) {
    TVar2 = (this->SectionRange).Value.LowerBound;
    if (((TVar2.Type.Value.Value != '\x02') && (param_1.Type.Value.Value != '\x02')) &&
       (local_res10.Value = param_1.Value.Value, local_res10.Value.Value < TVar2.Value.Value.Value))
    {
      local_res10 = param_1;
      bVar1 = `UMovieSceneSection::SetEndFrame'::__l5::<lambda_1>::operator()(local_res8);
      if (!bVar1) {
        TVar2 = (this->SectionRange).Value.LowerBound;
        if (TVar2.Type.Value.Value == '\0') {
          local_res8[0] = CONCAT31(local_res8[0]._1_3_,1);
        }
        else {
          if (TVar2.Type.Value.Value != '\x01') goto LAB_146234a01;
          local_res8[0] = (uint)local_res8[0]._1_3_ << 8;
        }
        TVar2.Value.Value = TVar2.Value.Value.Value;
        TVar2._0_4_ = local_res8[0];
LAB_146234a01:
        (this->SectionRange).Value.UpperBound = TVar2;
        return;
      }
    }
    (this->SectionRange).Value.UpperBound = param_1;
  }
  return;
}

// SetRange @ 146235470

void __thiscall UMovieSceneSection::SetRange(UMovieSceneSection *this,TRange<FFrameNumber> *param_1)

{
  FMovieSceneFrameRange *this_00;
  uchar uVar1;
  int iVar2;
  code *pcVar3;
  TRangeBound<FFrameNumber> TVar4;
  bool bVar5;
  FFrameNumber *pFVar6;
  byte bVar7;
  
  this_00 = &this->SectionRange;
  bVar5 = TRange<FFrameNumber>::IsEmpty(param_1);
  if ((bVar5) && (bVar5 = TRange<FFrameNumber>::IsEmpty(&this_00->Value), bVar5)) {
    bVar5 = false;
  }
  else {
    uVar1 = (param_1->LowerBound).Type.Value;
    if ((uVar1 == (this_00->Value).LowerBound.Type.Value) &&
       ((((uVar1 == '\x02' ||
          ((param_1->LowerBound).Value.Value == (this->SectionRange).Value.LowerBound.Value.Value))
         && (uVar1 = (param_1->UpperBound).Type.Value,
            uVar1 == (this->SectionRange).Value.UpperBound.Type.Value)) &&
        ((uVar1 == '\x02' ||
         ((param_1->UpperBound).Value.Value == (this->SectionRange).Value.UpperBound.Value.Value))))
       )) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
  }
  if (this->bIsLocked != 0) {
    return;
  }
  if (!bVar5) {
    return;
  }
  bVar7 = 1;
  if (((uint)this->_padding_ >> 9 & 1) == 0) {
    bVar7 = ~this->bIsLocked & 1;
  }
  if (((param_1->LowerBound).Type.Value != '\x02') && ((param_1->UpperBound).Type.Value != '\x02'))
  {
    pFVar6 = TRange<FFrameNumber>::GetUpperBoundValue(param_1);
    iVar2 = pFVar6->Value;
    pFVar6 = TRange<FFrameNumber>::GetLowerBoundValue(param_1);
    if (iVar2 < pFVar6->Value) {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_8526041700726996656>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\MovieSceneSection.h"
                         ,0x150,
                         "NewRange.GetLowerBound().IsOpen() || NewRange.GetUpperBound().IsOpen() || NewRange.GetLowerBoundValue() <= NewRange.GetUpperBoundValue()"
                        );
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      bVar5 = false;
      goto LAB_146235563;
    }
  }
  bVar5 = true;
LAB_146235563:
  if ((bVar7 != 0) && (bVar5)) {
    TVar4 = param_1->UpperBound;
    (this_00->Value).LowerBound = param_1->LowerBound;
    (this->SectionRange).Value.UpperBound = TVar4;
  }
  return;
}

// SetRowIndex @ 146235730

void __thiscall UMovieSceneSection::SetRowIndex(UMovieSceneSection *this,int param_1)

{
  this->RowIndex = param_1;
  return;
}

// SetStartFrame @ 146235750

void __thiscall
UMovieSceneSection::SetStartFrame(UMovieSceneSection *this,TRangeBound<FFrameNumber> param_1)

{
  bool bVar1;
  TRangeBound<FFrameNumber> TVar2;
  int local_res8 [2];
  TRangeBound<FFrameNumber> local_res10;
  
  if (this->bIsLocked == 0) {
    TVar2 = (this->SectionRange).Value.UpperBound;
    if (((TVar2.Type.Value.Value != '\x02') && (param_1.Type.Value.Value != '\x02')) &&
       (local_res10.Value = param_1.Value.Value, TVar2.Value.Value.Value < local_res10.Value.Value))
    {
      local_res10 = param_1;
      bVar1 = `UMovieSceneSection::SetStartFrame'::__l5::<lambda_1>::operator()(local_res8);
      if (!bVar1) {
        TVar2 = (this->SectionRange).Value.UpperBound;
        if (TVar2.Type.Value.Value == '\0') {
          local_res8[0] = CONCAT31(local_res8[0]._1_3_,1);
        }
        else {
          if (TVar2.Type.Value.Value != '\x01') goto LAB_1462357c1;
          local_res8[0] = (uint)local_res8[0]._1_3_ << 8;
        }
        TVar2.Value.Value = TVar2.Value.Value.Value;
        TVar2._0_4_ = local_res8[0];
LAB_1462357c1:
        (this->SectionRange).Value.LowerBound = TVar2;
        return;
      }
    }
    (this->SectionRange).Value.LowerBound = param_1;
  }
  return;
}

// ShouldUpgradeEntityData @ 1462366d0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UMovieSceneSection::ShouldUpgradeEntityData(UMovieSceneSection *this,FArchive *param_1,Type param_2)

{
  int iVar1;
  FGuid local_18;
  
  if (((param_1->field_0x28 & 1) != 0) && ((*(uint *)&param_1->field_0x34 & 0x401000) == 0)) {
    local_18 = FMovieSceneEvaluationCustomVersion::GUID;
    iVar1 = UObjectBaseUtility::GetLinkerCustomVersion((UObjectBaseUtility *)this,&local_18);
    if (iVar1 < (int)param_2) {
      return true;
    }
  }
  return false;
}

// ShowCurveForChannel @ 146236720

bool __thiscall UMovieSceneSection::ShowCurveForChannel(UMovieSceneSection *this,void *param_1)

{
  return true;
}

// SplitSection @ 146237330

UMovieSceneSection * __thiscall
UMovieSceneSection::SplitSection(UMovieSceneSection *this,FQualifiedFrameTime *param_1,bool param_2)

{
  uchar uVar1;
  int iVar2;
  UObjectBaseUtility *this_00;
  TObjectPtr<UObject> this_01;
  code *pcVar3;
  bool bVar4;
  UClass *pUVar5;
  UMovieSceneSection *pUVar6;
  UObject *pUVar7;
  longlong *plVar8;
  FString *pFVar9;
  TRange<FFrameNumber> *pTVar10;
  TObjectPtr<UObject>_u_0 *pTVar11;
  wchar_t *pwVar12;
  wchar_t *pwVar13;
  TRange<FFrameNumber> local_a8;
  TArrayView<TObjectPtr<UObject>_const_,int> local_98;
  int local_88;
  float fStack_84;
  int iStack_80;
  int iStack_7c;
  int local_78;
  float fStack_74;
  int iStack_70;
  int iStack_6c;
  FString local_68;
  FString local_58;
  FString local_48;
  
  local_a8.LowerBound.Value.Value = (param_1->Time).FrameNumber.Value;
  pTVar10 = &(this->SectionRange).Value;
  uVar1 = (((FMovieSceneFrameRange *)pTVar10)->Value).LowerBound.Type.Value;
  local_a8.LowerBound.Type.Value = '\x01';
  if ((uVar1 != '\x02') &&
     (iVar2 = (this->SectionRange).Value.LowerBound.Value.Value,
     local_a8.LowerBound.Value.Value <= iVar2)) {
    if (local_a8.LowerBound.Value.Value < iVar2) {
      pTVar10 = &local_a8;
    }
    if (uVar1 != '\x01') {
      return (UMovieSceneSection *)0x0;
    }
  }
  if (((((TRange<FFrameNumber> *)&pTVar10->LowerBound)->LowerBound).Type.Value != '\x02') &&
     ((((TRange<FFrameNumber> *)&pTVar10->LowerBound)->LowerBound).Value.Value !=
      (this->SectionRange).Value.LowerBound.Value.Value)) {
    return (UMovieSceneSection *)0x0;
  }
  uVar1 = (this->SectionRange).Value.UpperBound.Type.Value;
  local_a8.UpperBound.Type.Value = '\x01';
  local_a8.UpperBound.Value.Value = local_a8.LowerBound.Value.Value;
  if ((uVar1 != '\x02') &&
     (iVar2 = (this->SectionRange).Value.UpperBound.Value.Value,
     iVar2 <= local_a8.LowerBound.Value.Value)) {
    if (iVar2 < local_a8.LowerBound.Value.Value) {
      pTVar10 = &local_a8;
      if (uVar1 != '\x01') {
        return (UMovieSceneSection *)0x0;
      }
      goto LAB_1462373d2;
    }
    if (uVar1 != '\x01') {
      return (UMovieSceneSection *)0x0;
    }
  }
  pTVar10 = &(this->SectionRange).Value;
LAB_1462373d2:
  if ((((pTVar10->UpperBound).Type.Value != '\x02') &&
      ((pTVar10->UpperBound).Value.Value != (this->SectionRange).Value.UpperBound.Value.Value)) ||
     (UObjectBase::AtomicallySetFlags((UObjectBase *)this,RF_Transactional), this->bIsLocked != 0))
  {
    return (UMovieSceneSection *)0x0;
  }
  this_00 = (UObjectBaseUtility *)this->_padding_;
  if (this_00 == (UObjectBaseUtility *)0x0) {
    pFVar9 = GetTypeName<UMovieSceneTrack>(&local_68);
    if ((pFVar9->Data).ArrayNum == 0) {
      pwVar12 = L"";
    }
    else {
      pwVar12 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar12);
  }
  pUVar5 = UMovieSceneTrack::StaticClass();
  iVar2 = (int)pUVar5->_padding_;
  if ((iVar2 <= *(int *)(*(longlong *)&this_00->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&this_00->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
      &pUVar5->_padding_)) {
    pUVar5 = StaticClass();
    pUVar6 = (UMovieSceneSection *)
             DuplicateObject_Internal(pUVar5,(UObject *)this,(UObject *)this_00,(FName)0x0);
    if ((pUVar6 == (UMovieSceneSection *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("NewSection",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\MovieSceneSection.cpp"
                           ,0x38b,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pUVar6 = (UMovieSceneSection *)(*pcVar3)();
      return pUVar6;
    }
    (*(code *)**(undefined8 **)&this_00[2].field_0x20)(&this_00[2].field_0x20,pUVar6);
    (**(code **)(pUVar6->_padding_ + 0x380))(pUVar6,this_00);
    pUVar5 = Z_Construct_UClass_UMovieScene_NoRegister();
    pUVar7 = UObjectBaseUtility::GetTypedOuter(this_00,pUVar5);
    if (pUVar7 != (UObject *)0x0) {
      FMovieSceneDecorationContainer::GetDecorations
                ((FMovieSceneDecorationContainer *)&pUVar6->_padding_,&local_98);
      for (pTVar11 = &(local_98.DataPtr)->field0_0x0;
          pTVar11 != &local_98.DataPtr[local_98.ArrayNum].field0_0x0; pTVar11 = pTVar11 + 1) {
        this_01.field0_0x0 = (TObjectPtr<UObject>_u_0)pTVar11->DebugPtr;
        if (this_01.field0_0x0 != (UObject *)0x0) {
          pUVar5 = Z_Construct_UClass_UMovieSceneLifetimeDecoration_NoRegister();
          plVar8 = UObjectBaseUtility::GetInterfaceAddress
                             ((UObjectBaseUtility *)this_01.field0_0x0,pUVar5);
          if (plVar8 != (longlong *)0x0) {
            (**(code **)(*plVar8 + 0x10))(plVar8,pUVar7);
          }
        }
      }
    }
    (**(code **)(*(longlong *)this_00 + 0x370))(this_00,pUVar6);
    local_88 = (param_1->Time).FrameNumber.Value;
    fStack_84 = (param_1->Time).SubFrame;
    iStack_80 = (param_1->Rate).Numerator;
    iStack_7c = (param_1->Rate).Denominator;
    (**(code **)(this->_padding_ + 0x300))(this,&local_88,0,param_2);
    local_78 = (param_1->Time).FrameNumber.Value;
    fStack_74 = (param_1->Time).SubFrame;
    iStack_70 = (param_1->Rate).Numerator;
    iStack_6c = (param_1->Rate).Denominator;
    (this->Easing).AutoEaseOutDuration = 0;
    (this->Easing).bManualEaseOut = false;
    (this->Easing).ManualEaseOutDuration = 0;
    (**(code **)(pUVar6->_padding_ + 0x300))(pUVar6,&local_78,1,param_2);
    (pUVar6->Easing).AutoEaseInDuration = 0;
    (pUVar6->Easing).ManualEaseInDuration = 0;
    (pUVar6->Easing).bManualEaseIn = false;
    return pUVar6;
  }
  pFVar9 = GetTypeName<UMovieSceneTrack>(&local_58);
  pwVar12 = L"";
  if ((pFVar9->Data).ArrayNum == 0) {
    pwVar13 = L"";
  }
  else {
    pwVar13 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
  }
  pFVar9 = GetFullNameForCastLogError<UObject>(&local_48,(UObject *)this_00);
  if ((pFVar9->Data).ArrayNum != 0) {
    pwVar12 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar12,pwVar13);
}

// StaticRegisterNativesUMovieSceneSection @ 146237c50

void __cdecl UMovieSceneSection::StaticRegisterNativesUMovieSceneSection(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x12;
  local_18.DataPtr = Z_Construct_UClass_UMovieSceneSection_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// TrimSection @ 146239a10

void __thiscall
UMovieSceneSection::TrimSection
          (UMovieSceneSection *this,FQualifiedFrameTime *param_1,bool param_2,bool param_3)

{
  FMovieSceneFrameRange *pFVar1;
  ForElementType<FMovieSceneChannelEntry> FVar2;
  undefined8 *puVar3;
  uchar uVar4;
  FFrameNumber FVar5;
  int iVar6;
  code *pcVar7;
  TRangeBound<FFrameNumber> TVar8;
  bool bVar9;
  FMovieSceneChannelProxy *pFVar10;
  TRange<FFrameNumber> *pTVar11;
  ForElementType<FMovieSceneChannelEntry> FVar12;
  undefined8 *puVar13;
  undefined4 local_res8;
  undefined4 local_res10;
  TRange<FFrameNumber> local_38;
  
  FVar5.Value = (param_1->Time).FrameNumber.Value;
  pFVar1 = &this->SectionRange;
  uVar4 = (pFVar1->Value).LowerBound.Type.Value;
  local_38.LowerBound.Type.Value = '\x01';
  local_38.LowerBound.Value.Value = FVar5.Value;
  if (uVar4 != '\x02') {
    iVar6 = (this->SectionRange).Value.LowerBound.Value.Value;
    pTVar11 = &pFVar1->Value;
    if (FVar5.Value <= iVar6) {
      if (FVar5.Value < iVar6) {
        pTVar11 = &local_38;
      }
      if (uVar4 != '\x01') {
        return;
      }
    }
    if ((((TRange<FFrameNumber> *)&pTVar11->LowerBound)->LowerBound).Value.Value !=
        (this->SectionRange).Value.LowerBound.Value.Value) {
      return;
    }
  }
  uVar4 = (this->SectionRange).Value.UpperBound.Type.Value;
  local_38.UpperBound.Type.Value = '\x01';
  local_38.UpperBound.Value.Value = FVar5.Value;
  if (uVar4 == '\x02') goto LAB_146239ac0;
  iVar6 = (this->SectionRange).Value.UpperBound.Value.Value;
  if (FVar5.Value < iVar6) {
LAB_146239ab0:
    pTVar11 = &(this->SectionRange).Value;
  }
  else {
    if (FVar5.Value <= iVar6) {
      if (uVar4 != '\x01') {
        return;
      }
      goto LAB_146239ab0;
    }
    pTVar11 = &local_38;
    if (uVar4 != '\x01') {
      return;
    }
  }
  if ((pTVar11->UpperBound).Value.Value != (this->SectionRange).Value.UpperBound.Value.Value) {
    return;
  }
LAB_146239ac0:
  UObjectBase::AtomicallySetFlags((UObjectBase *)this,RF_Transactional);
  if (this->bIsLocked == 0) {
    if (param_2) {
      local_res8 = CONCAT31(local_res8._1_3_,1);
      TVar8.Value.Value = FVar5.Value;
      TVar8._0_4_ = local_res8;
      (pFVar1->Value).LowerBound = TVar8;
    }
    else {
      (this->SectionRange).Value.UpperBound =
           (TRangeBound<FFrameNumber>)(CONCAT44(FVar5.Value,local_res10) & 0xffffffffffffff00);
    }
    if (param_3) {
      pFVar10 = GetChannelProxy(this);
      iVar6 = (pFVar10->Entries).ArrayNum;
      FVar12 = (pFVar10->Entries).AllocatorInstance.SecondaryData;
      if (FVar12 == (ForElementType<FMovieSceneChannelEntry>)0x0) {
        FVar12 = (ForElementType<FMovieSceneChannelEntry>)&pFVar10->Entries;
      }
      if ((iVar6 < 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      FVar2 = (ForElementType<FMovieSceneChannelEntry>)((longlong)FVar12 + (longlong)iVar6 * 0x18);
      for (; FVar12 != FVar2;
          FVar12 = (ForElementType<FMovieSceneChannelEntry>)((longlong)FVar12 + 0x18)) {
        iVar6 = *(int *)((longlong)FVar12 + 0x10);
        puVar13 = *(undefined8 **)((longlong)FVar12 + 8);
        if ((iVar6 < 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        puVar3 = puVar13 + iVar6;
        if (puVar13 != puVar3) {
          iVar6 = (param_1->Time).FrameNumber.Value;
          do {
            (**(code **)(*(longlong *)*puVar13 + 0x30))((longlong *)*puVar13,iVar6,param_2);
            puVar13 = puVar13 + 1;
          } while (puVar13 != puVar3);
        }
      }
    }
  }
  return;
}

// TryModify @ 14623a120

bool __thiscall UMovieSceneSection::TryModify(UMovieSceneSection *this,bool param_1)

{
  return (bool)(~this->bIsLocked & 1);
}

// execGetBlendType @ 1462422a0

void __cdecl UMovieSceneSection::execGetBlendType(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined2 *)param_3 = *(undefined2 *)&param_1[6].field_0x1;
  return;
}

// execGetColorTint @ 1462423d0

void __cdecl UMovieSceneSection::execGetColorTint(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = 0;
  return;
}

// execGetCompletionMode @ 146242400

void __cdecl
UMovieSceneSection::execGetCompletionMode(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[2].field_0x21;
  return;
}

// execGetOverlapPriority @ 146242950

void __cdecl
UMovieSceneSection::execGetOverlapPriority(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[5].field_0xc;
  return;
}

// execGetPostRollFrames @ 1462429b0

void __cdecl
UMovieSceneSection::execGetPostRollFrames(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[5].field_0x4;
  return;
}

// execGetPreRollFrames @ 1462429e0

void __cdecl
UMovieSceneSection::execGetPreRollFrames(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)(param_1 + 5);
  return;
}

// execGetRowIndex @ 146242a10

void __cdecl UMovieSceneSection::execGetRowIndex(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[5].field_0x8;
  return;
}

// execIsActive @ 146242cc0

void __cdecl UMovieSceneSection::execIsActive(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(byte *)param_3 = param_1[5].field_0x10 & 1;
  return;
}

// execIsLocked @ 146242cf0

void __cdecl UMovieSceneSection::execIsLocked(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(byte *)param_3 = (byte)(*(uint *)&param_1[5].field_0x10 >> 1) & 1;
  return;
}

// execSetBlendType @ 1462439c0

void __cdecl UMovieSceneSection::execSetBlendType(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res8 [8];
  
  local_res8[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x2e8))(param_1,local_res8[0]);
  return;
}

// execSetColorTint @ 146243a50

void __cdecl UMovieSceneSection::execSetColorTint(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res10 [24];
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  return;
}

// execSetCompletionMode @ 146243ac0

void __cdecl
UMovieSceneSection::execSetCompletionMode(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res8 [8];
  
  local_res8[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[2].field_0x21 = local_res8[0];
  return;
}

// execSetIsActive @ 146243f70

void __cdecl UMovieSceneSection::execSetIsActive(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((*(uint *)&param_1[5].field_0x10 >> 1 & 1) == 0) {
    *(uint *)&param_1[5].field_0x10 =
         *(uint *)&param_1[5].field_0x10 & 0xfffffffe | (uint)(local_res8[0] != 0);
  }
  return;
}

// execSetIsLocked @ 146244010

void __cdecl UMovieSceneSection::execSetIsLocked(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(uint *)&param_1[5].field_0x10 = *(uint *)&param_1[5].field_0x10 & 0xfffffffd;
  *(uint *)&param_1[5].field_0x10 =
       *(uint *)&param_1[5].field_0x10 | -(uint)(local_res8[0] != 0) & 2;
  return;
}

// execSetOverlapPriority @ 1462441e0

void __cdecl
UMovieSceneSection::execSetOverlapPriority(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)&param_1[5].field_0xc = local_res8[0];
  return;
}

// execSetPostRollFrames @ 146244470

void __cdecl
UMovieSceneSection::execSetPostRollFrames(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)&param_1[5].field_0x4 = local_res8[0];
  return;
}

// execSetPreRollFrames @ 146244500

void __cdecl
UMovieSceneSection::execSetPreRollFrames(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)(param_1 + 5) = local_res8[0];
  return;
}

// execSetRowIndex @ 146244590

void __cdecl UMovieSceneSection::execSetRowIndex(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)&param_1[5].field_0x8 = local_res8[0];
  return;
}

// operator() @ 1504e7180

bool __thiscall `UMovieSceneSection::SetEndFrame'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<911732453549277473>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<911732453549277473>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504e71c0

bool __thiscall `UMovieSceneSection::SetStartFrame'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<911732453549277455>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<911732453549277455>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

