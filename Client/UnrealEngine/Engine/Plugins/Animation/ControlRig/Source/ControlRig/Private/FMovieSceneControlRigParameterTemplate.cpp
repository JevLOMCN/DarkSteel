// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 9

// StaticStruct @ 14a37dc80

UScriptStruct * __cdecl FMovieSceneControlRigParameterTemplate::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneControlRigParameterTemplate.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FMovieSceneControlRigParameterTemplate.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneControlRigParameterTemplate,
                         (UObject *)pUVar1,L"MovieSceneControlRigParameterTemplate");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneControlRigParameterTemplate.OuterSingleton;
}

// GetScriptStructImpl @ 14a37dcc0

UScriptStruct * __thiscall
FMovieSceneControlRigParameterTemplate::GetScriptStructImpl
          (FMovieSceneControlRigParameterTemplate *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneControlRigParameterTemplate.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FMovieSceneControlRigParameterTemplate.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneControlRigParameterTemplate,
                         (UObject *)pUVar1,L"MovieSceneControlRigParameterTemplate");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneControlRigParameterTemplate.OuterSingleton;
}

// Evaluate @ 14a37dd00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FMovieSceneControlRigParameterTemplate::Evaluate
          (FMovieSceneControlRigParameterTemplate *this,FMovieSceneEvaluationOperand *param_1,
          FMovieSceneContext *param_2,FPersistentEvaluationData *param_3,
          FMovieSceneExecutionTokens *param_4)

{
  int *piVar1;
  ForElementType<FScalarParameterStringAndValue> FVar2;
  FName FVar3;
  FName FVar4;
  FOptionalMovieSceneBlendType FVar5;
  TMap<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,0>_>
  *this_00;
  undefined1 *puVar6;
  longlong *plVar7;
  code *pcVar8;
  FTransformParameterNameAndCurves *pFVar9;
  undefined8 uVar10;
  FColorParameterNameAndCurves *pFVar11;
  undefined8 uVar12;
  FVectorParameterNameAndCurves *pFVar13;
  undefined8 uVar14;
  FVector2DParameterNameAndCurves *pFVar15;
  undefined8 uVar16;
  FEnumParameterNameAndCurve *pFVar17;
  undefined8 uVar18;
  FIntegerParameterNameAndCurve *pFVar19;
  undefined8 uVar20;
  FMovieSceneAnimTypeID FVar21;
  UControlRig *pUVar22;
  FMovieSceneBlendingActuatorID FVar23;
  FSharedReferencer<1> FVar24;
  bool bVar25;
  UMovieSceneControlRigParameterSection *this_01;
  FWeakObjectPtr *pFVar26;
  UObject *pUVar27;
  longlong lVar28;
  UWorld *pUVar29;
  TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_> *pTVar30;
  FEvaluatedControlRigParameterSectionChannelMasks *pFVar31;
  TArrayView<FTransformParameterNameAndCurves_const_,int> *pTVar32;
  TArrayView<FColorParameterNameAndCurves_const_,int> *pTVar33;
  TArrayView<FVectorParameterNameAndCurves_const_,int> *pTVar34;
  TArrayView<FVector2DParameterNameAndCurves_const_,int> *pTVar35;
  TArrayView<FEnumParameterNameAndCurve_const_,int> *pTVar36;
  TArrayView<FIntegerParameterNameAndCurve_const_,int> *pTVar37;
  TArrayView<FBoolParameterNameAndCurve_const_,int> *pTVar38;
  TArrayView<FScalarParameterNameAndCurve_const_,int> *pTVar39;
  UMovieSceneTrack *pUVar40;
  FFrameTime FVar41;
  FName *pFVar42;
  TMovieSceneBlendingActuator<FControlRigTrackTokenFloat> *pTVar43;
  TSharedRef<TControlRigParameterActuatorFloat,1> *pTVar44;
  TBlendableToken<FControlRigTrackTokenFloat> *pTVar45;
  TMovieSceneBlendingActuator<FControlRigTrackTokenVector> *pTVar46;
  TSharedRef<TControlRigParameterActuatorVector,1> *pTVar47;
  TBlendableToken<FControlRigTrackTokenVector> *pTVar48;
  IData *pIVar49;
  ulong64 *puVar50;
  TReferenceControllerBase<1> *pTVar51;
  TBlendableToken<FControlRigTrackTokenVector2D> *pTVar52;
  undefined **ppuVar53;
  FMovieSceneBlendingActuatorID *pFVar54;
  TBlendableToken<FControlRigTrackTokenVector2D> *pTVar55;
  ForElementType<FEulerTransformParameterStringAndValue> FVar56;
  undefined **ppuVar57;
  undefined1 *puVar58;
  TReferenceControllerBase<1> *pTVar59;
  ForElementType<FVector2DParameterStringAndValue> FVar60;
  ForElementType<FScalarParameterStringAndValue> FVar61;
  ForElementType<FVectorParameterStringAndValue> FVar62;
  int iVar63;
  ulonglong uVar64;
  ForElementType<FVectorParameterStringAndValue> FVar65;
  uint uVar66;
  FMovieSceneBlendingActuatorID *pFVar67;
  ForElementType<FVector2DParameterStringAndValue> FVar68;
  uchar *puVar69;
  ForElementType<FEulerTransformParameterStringAndValue> *pFVar70;
  TReferenceControllerBase<1> *pTVar71;
  float fVar72;
  undefined1 auStackY_868 [32];
  EMovieSceneBlendType local_818;
  UMovieSceneControlRigParameterSection *local_810;
  undefined1 local_808;
  undefined1 local_807;
  undefined1 local_806;
  undefined1 local_805;
  uint local_804;
  int local_800;
  FOptionalMovieSceneBlendType local_7fc [2];
  uint local_7f8;
  ForElementType<FVector2DParameterStringAndValue> local_7f0;
  UControlRig *local_7e8;
  float local_7e0 [2];
  TSharedPtr<FControlRigAnimTypeIDs,1> local_7d8;
  TMultiChannelValue<float,3> local_7c8;
  TArrayView<TWeakObjectPtr<UObject,FWeakObjectPtr>,int> local_7b8;
  TReferenceControllerBase<1> *local_7a8;
  TReferenceControllerBase<1> *local_7a0;
  FEvaluatedControlRigParameterSectionChannelMasks *local_798;
  FMovieSceneAnimTypeID local_790;
  FMovieSceneAnimTypeID local_788;
  float local_780;
  float fStack_77c;
  float fStack_778;
  float fStack_774;
  float local_770;
  float fStack_76c;
  float fStack_768;
  float fStack_764;
  undefined8 local_760;
  undefined1 local_758 [8];
  undefined1 local_750 [8];
  TPairInitializer<FMovieSceneBlendingActuatorID_const_&,TSharedRef<IMovieSceneBlendingActuator,1>_const_&>
  local_748;
  FMovieSceneBlendingActuatorID local_738;
  FMovieSceneBlendingActuatorID local_730;
  UMovieSceneControlRigParameterSection *local_728;
  FMovieSceneBlendingActuatorID local_720;
  FMovieSceneBlendingActuatorID local_718;
  FMovieSceneBlendingActuatorID local_710;
  UMovieSceneControlRigParameterSection *local_708;
  TControlRigParameterActuatorFloat *local_700;
  TReferenceControllerBase<1> *local_6f8;
  TControlRigParameterActuatorVector *local_6f0;
  TReferenceControllerBase<1> *local_6e8;
  FMovieSceneBlendingActuatorID *local_6e0;
  TControlRigParameterActuatorVector **local_6d8;
  FMovieSceneBlendingActuatorID *local_6d0;
  TControlRigParameterActuatorVector2D **local_6c8;
  TControlRigParameterActuatorVector2D *local_6b8;
  TReferenceControllerBase<1> *pTStack_6b0;
  FMovieSceneBlendingActuatorID *local_6a8;
  TReferenceControllerBase<1> **local_6a0;
  FMovieSceneEvaluationKey *local_698;
  FEvaluatedControlRigParameterSectionChannelMasks **local_690;
  TSharedRef<IMovieSceneBlendingActuator,1> **local_688;
  TControlRigParameterActuatorFloat **local_680;
  undefined1 local_660 [8];
  TArrayView<FTransformParameterNameAndCurves_const_,int> local_658;
  TArrayView<FColorParameterNameAndCurves_const_,int> local_648;
  TArrayView<FVectorParameterNameAndCurves_const_,int> local_638;
  TArrayView<FVector2DParameterNameAndCurves_const_,int> local_628;
  TArrayView<FEnumParameterNameAndCurve_const_,int> local_618;
  TArrayView<FIntegerParameterNameAndCurve_const_,int> local_608;
  TArrayView<FBoolParameterNameAndCurve_const_,int> local_5f8;
  TArrayView<FScalarParameterNameAndCurve_const_,int> local_5e8;
  TSharedRef<TControlRigParameterActuatorFloat,1> local_5d8;
  TSharedRef<TControlRigParameterActuatorVector,1> local_5c8;
  TSharedRef<TControlRigParameterActuatorVector2D,1> local_5b8;
  undefined1 local_5a8 [16];
  TBlendableToken<FControlRigTrackTokenVector2D> *local_598;
  uint local_590;
  TArrayView<FColorParameterNameAndCurves_const_,int> local_588;
  TArrayView<FVectorParameterNameAndCurves_const_,int> local_578;
  TArrayView<FVector2DParameterNameAndCurves_const_,int> local_568;
  TArrayView<FEnumParameterNameAndCurve_const_,int> local_558;
  TArrayView<FIntegerParameterNameAndCurve_const_,int> local_548;
  TArrayView<FBoolParameterNameAndCurve_const_,int> local_538;
  TArrayView<FScalarParameterNameAndCurve_const_,int> local_528;
  TArrayView<FTransformParameterNameAndCurves_const_,int> local_518;
  TBlendableToken<FControlRigTrackTokenVector2D> *local_508 [2];
  byte local_4f8;
  FMovieSceneEvaluationKey local_4f0;
  EMovieSceneCompletionMode local_4e4;
  int local_4e0;
  float local_4dc;
  EMovieSceneBlendType local_4d8;
  int local_4d4;
  undefined1 local_4d0 [12];
  float fStack_4c4;
  float fStack_4c0;
  float fStack_4bc;
  float local_4b8;
  float fStack_4b4;
  float fStack_4b0;
  float fStack_4ac;
  ulonglong local_4a8;
  byte local_488;
  FMovieSceneEvaluationKey local_480;
  EMovieSceneCompletionMode local_474;
  int local_470;
  float local_46c;
  EMovieSceneBlendType local_468;
  int local_464;
  TBlendableToken<FControlRigTrackTokenVector> local_460;
  TBlendableToken<FControlRigTrackTokenFloat> local_420;
  FEvaluatedControlRigParameterSectionValues local_3f0;
  FControlRigParameterExecutionToken local_188;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_868;
  if ((!UE::MovieScene::GUseLegacyControlRigTemplate) &&
     (bVar25 = UMovieSceneEntitySystem::IsCustomSchedulingEnabled(), bVar25)) {
    return;
  }
  FMovieSceneEvaluationRange::GetTime((FMovieSceneEvaluationRange *)param_2);
  this_01 = (UMovieSceneControlRigParameterSection *)
            FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&this->_padding_ + 4));
  if (this_01 == (UMovieSceneControlRigParameterSection *)0x0) {
    return;
  }
  bVar25 = UObjectBaseUtility::IsA<UMovieSceneControlRigParameterSection>
                     ((UObjectBaseUtility *)this_01);
  if (!bVar25) {
    return;
  }
  local_7e8 = (this_01->ControlRig).field0_0x0.DebugPtr;
  if (local_7e8 == (UControlRig *)0x0) {
    return;
  }
  local_810 = this_01;
  if (((((param_1->ObjectBindingID).D != 0 || (param_1->ObjectBindingID).C != 0) ||
       (param_1->ObjectBindingID).B != 0) || (param_1->ObjectBindingID).A != 0) &&
     (IMovieScenePlayer::FindBoundObjects
                (param_3->Player,&local_7b8,&param_1->ObjectBindingID,&param_1->SequenceID),
     0 < local_7b8.ArrayNum)) {
    pFVar26 = &TArrayView<TWeakObjectPtr<UObject,FWeakObjectPtr>,int>::operator[](&local_7b8,0)->
               WeakPtr;
    bVar25 = FWeakObjectPtr::IsValid(pFVar26);
    if (bVar25) {
      pFVar26 = &TArrayView<TWeakObjectPtr<UObject,FWeakObjectPtr>,int>::operator[](&local_7b8,0)->
                 WeakPtr;
      pUVar27 = FWeakObjectPtr::Get(pFVar26);
      lVar28 = (**(code **)(*(longlong *)pUVar27 + 0x180))(pUVar27);
      if (lVar28 != 0) {
        pFVar26 = &TArrayView<TWeakObjectPtr<UObject,FWeakObjectPtr>,int>::operator[](&local_7b8,0)
                   ->WeakPtr;
        pUVar27 = FWeakObjectPtr::Get(pFVar26);
        pUVar29 = (UWorld *)(**(code **)(*(longlong *)pUVar27 + 0x180))(pUVar27);
        bVar25 = UWorld::IsGameWorld(pUVar29);
        if (bVar25) {
          pFVar26 = &TArrayView<TWeakObjectPtr<UObject,FWeakObjectPtr>,int>::operator[]
                               (&local_7b8,0)->WeakPtr;
          pUVar27 = FWeakObjectPtr::Get(pFVar26);
          pUVar29 = (UWorld *)(**(code **)(*(longlong *)pUVar27 + 0x180))(pUVar27);
          local_7e8 = UMovieSceneControlRigParameterSection::GetControlRig(this_01,pUVar29);
          if (local_7e8 == (UControlRig *)0x0) {
            return;
          }
        }
      }
    }
  }
  if (param_3->EntityData ==
      (TMap<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,0>_>
       *)0x0) {
    bVar25 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<2208776142733705528>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PersistentEvaluationData.h"
                        ,0x138,"EntityData");
    if (bVar25) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  else {
    pTVar30 = TMapBase<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,0>_>
              ::Find((TMapBase<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,0>_>
                      *)param_3->EntityData,&param_3->SectionKey);
    if ((pTVar30 !=
         (TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_> *)0x0) &&
       (pFVar31 = (FEvaluatedControlRigParameterSectionChannelMasks *)pTVar30->Ptr,
       pFVar31 != (FEvaluatedControlRigParameterSectionChannelMasks *)0x0)) goto LAB_14a37e14a;
  }
  if ((param_3->EntityData ==
       (TMap<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,0>_>
        *)0x0) &&
     (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                         ("EntityData",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PersistentEvaluationData.h"
                          ,0x11d,L""), bVar25)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  this_00 = param_3->EntityData;
  pTVar30 = TMapBase<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,0>_>
            ::Find((TMapBase<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,0>_>
                    *)this_00,&param_3->SectionKey);
  if (pTVar30 ==
      (TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_> *)0x0) {
    if ((this_00 ==
         (TMap<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,0>_>
          *)0x0) &&
       (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                           ("EntityData",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PersistentEvaluationData.h"
                            ,300,L""), bVar25)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pFVar31 = ::operator_new(0x108);
    if (pFVar31 == (FEvaluatedControlRigParameterSectionChannelMasks *)0x0) {
      pFVar31 = (FEvaluatedControlRigParameterSectionChannelMasks *)0x0;
    }
    else {
      pFVar31 = FEvaluatedControlRigParameterSectionChannelMasks::
                FEvaluatedControlRigParameterSectionChannelMasks(pFVar31);
    }
    local_690 = &local_798;
    local_798 = pFVar31;
    local_698 = &param_3->SectionKey;
    TSet<TTuple<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<FMovieSceneEvaluationKey_const_&,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_&&>_>
              ((TSet<TTuple<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,0>,FDefaultSetAllocator>
                *)param_3->EntityData,
               (TPairInitializer<FMovieSceneEvaluationKey_const_&,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_&&>
                *)local_758,(bool *)&local_698);
    if (local_798 != (FEvaluatedControlRigParameterSectionChannelMasks *)0x0) {
      (**(code **)local_798->_padding_)(local_798,1);
    }
  }
  else {
    pFVar31 = (FEvaluatedControlRigParameterSectionChannelMasks *)pTVar30->Ptr;
  }
  pTVar32 = TArrayView<FTransformParameterNameAndCurves_const_,int>::
            TArrayView<FTransformParameterNameAndCurves_const_,int><TArray<FTransformParameterNameAndCurves,TSizedDefaultAllocator<32>_>_const_&,TArray<FTransformParameterNameAndCurves,TSizedDefaultAllocator<32>_>_>
                      (&local_518,
                       (TArray<FTransformParameterNameAndCurves,TSizedDefaultAllocator<32>_> *)
                       &this->_padding_);
  pFVar9 = pTVar32->DataPtr;
  uVar10._0_4_ = pTVar32->ArrayNum;
  uVar10._4_4_ = *(undefined4 *)&pTVar32->field_0xc;
  pTVar33 = TArrayView<FColorParameterNameAndCurves_const_,int>::
            TArrayView<FColorParameterNameAndCurves_const_,int><TArray<FColorParameterNameAndCurves,TSizedDefaultAllocator<32>_>_const_&,TArray<FColorParameterNameAndCurves,TSizedDefaultAllocator<32>_>_>
                      (&local_588,
                       (TArray<FColorParameterNameAndCurves,TSizedDefaultAllocator<32>_> *)
                       &this->_padding_);
  pFVar11 = pTVar33->DataPtr;
  uVar12._0_4_ = pTVar33->ArrayNum;
  uVar12._4_4_ = *(undefined4 *)&pTVar33->field_0xc;
  pTVar34 = TArrayView<FVectorParameterNameAndCurves_const_,int>::
            TArrayView<FVectorParameterNameAndCurves_const_,int><TArray<FVectorParameterNameAndCurves,TSizedDefaultAllocator<32>_>_const_&,TArray<FVectorParameterNameAndCurves,TSizedDefaultAllocator<32>_>_>
                      (&local_578,
                       (TArray<FVectorParameterNameAndCurves,TSizedDefaultAllocator<32>_> *)
                       &this->_padding_);
  pFVar13 = pTVar34->DataPtr;
  uVar14._0_4_ = pTVar34->ArrayNum;
  uVar14._4_4_ = *(undefined4 *)&pTVar34->field_0xc;
  pTVar35 = TArrayView<FVector2DParameterNameAndCurves_const_,int>::
            TArrayView<FVector2DParameterNameAndCurves_const_,int><TArray<FVector2DParameterNameAndCurves,TSizedDefaultAllocator<32>_>_const_&,TArray<FVector2DParameterNameAndCurves,TSizedDefaultAllocator<32>_>_>
                      (&local_568,
                       (TArray<FVector2DParameterNameAndCurves,TSizedDefaultAllocator<32>_> *)
                       &this->_padding_);
  pFVar15 = pTVar35->DataPtr;
  uVar16._0_4_ = pTVar35->ArrayNum;
  uVar16._4_4_ = *(undefined4 *)&pTVar35->field_0xc;
  pTVar36 = TArrayView<FEnumParameterNameAndCurve_const_,int>::
            TArrayView<FEnumParameterNameAndCurve_const_,int><TArray<FEnumParameterNameAndCurve,TSizedDefaultAllocator<32>_>_const_&,TArray<FEnumParameterNameAndCurve,TSizedDefaultAllocator<32>_>_>
                      (&local_558,&this->Enums);
  pFVar17 = pTVar36->DataPtr;
  uVar18._0_4_ = pTVar36->ArrayNum;
  uVar18._4_4_ = *(undefined4 *)&pTVar36->field_0xc;
  pTVar37 = TArrayView<FIntegerParameterNameAndCurve_const_,int>::
            TArrayView<FIntegerParameterNameAndCurve_const_,int><TArray<FIntegerParameterNameAndCurve,TSizedDefaultAllocator<32>_>_const_&,TArray<FIntegerParameterNameAndCurve,TSizedDefaultAllocator<32>_>_>
                      (&local_548,&this->Integers);
  pFVar19 = pTVar37->DataPtr;
  uVar20._0_4_ = pTVar37->ArrayNum;
  uVar20._4_4_ = *(undefined4 *)&pTVar37->field_0xc;
  pTVar38 = TArrayView<FBoolParameterNameAndCurve_const_,int>::
            TArrayView<FBoolParameterNameAndCurve_const_,int><TArray<FBoolParameterNameAndCurve,TSizedDefaultAllocator<32>_>_const_&,TArray<FBoolParameterNameAndCurve,TSizedDefaultAllocator<32>_>_>
                      (&local_538,
                       (TArray<FBoolParameterNameAndCurve,TSizedDefaultAllocator<32>_> *)
                       &this->_padding_);
  local_5f8.DataPtr = pTVar38->DataPtr;
  local_5f8.ArrayNum = pTVar38->ArrayNum;
  local_5f8._12_4_ = *(undefined4 *)&pTVar38->field_0xc;
  local_658.DataPtr = pFVar9;
  local_658._8_8_ = uVar10;
  local_648.DataPtr = pFVar11;
  local_648._8_8_ = uVar12;
  local_638.DataPtr = pFVar13;
  local_638._8_8_ = uVar14;
  local_628.DataPtr = pFVar15;
  local_628._8_8_ = uVar16;
  local_618.DataPtr = pFVar17;
  local_618._8_8_ = uVar18;
  local_608.DataPtr = pFVar19;
  local_608._8_8_ = uVar20;
  pTVar39 = TArrayView<FScalarParameterNameAndCurve_const_,int>::
            TArrayView<FScalarParameterNameAndCurve_const_,int><TArray<FScalarParameterNameAndCurve,TSizedDefaultAllocator<32>_>_const_&,TArray<FScalarParameterNameAndCurve,TSizedDefaultAllocator<32>_>_>
                      (&local_528,
                       (TArray<FScalarParameterNameAndCurve,TSizedDefaultAllocator<32>_> *)
                       &this->_padding_);
  local_5e8.DataPtr = pTVar39->DataPtr;
  local_5e8.ArrayNum = pTVar39->ArrayNum;
  local_5e8._12_4_ = *(undefined4 *)&pTVar39->field_0xc;
  FEvaluatedControlRigParameterSectionChannelMasks::Initialize
            (pFVar31,this_01,&local_5e8,&local_5f8,&local_608,&local_618,&local_628,&local_638,
             &local_648,&local_658);
LAB_14a37e14a:
  pUVar40 = Cast<UMovieSceneTrack,UObject>((UObject *)this_01->_padding_);
  if (pUVar40 != (UMovieSceneTrack *)0x0) {
    local_800 = UMovieSceneSection::GetBlendingOrder((UMovieSceneSection *)this_01);
    FEvaluatedControlRigParameterSectionValues::FEvaluatedControlRigParameterSectionValues
              (&local_3f0);
    EvaluateCurvesWithMasks(this,param_2,pFVar31,&local_3f0);
    FVar41 = FMovieSceneEvaluationRange::GetTime((FMovieSceneEvaluationRange *)param_2);
    fVar72 = FMovieSceneEvalTemplate::EvaluateEasing
                       ((FMovieSceneEvalTemplate *)this,*(FFrameTime *)FVar41);
    if (((this_01->TransformMask).Mask & 0x200) != 0) {
      local_7e0[0] = 1.0;
      FVar41 = FMovieSceneEvaluationRange::GetTime((FMovieSceneEvaluationRange *)param_2);
      FMovieSceneFloatChannel::Evaluate(&this_01->Weight,*(FFrameTime *)FVar41,local_7e0);
      fVar72 = fVar72 * local_7e0[0];
    }
    FControlRigParameterExecutionToken::FControlRigParameterExecutionToken
              (&local_188,this_01,&local_3f0,this);
    FMovieSceneExecutionTokens::Add<FControlRigParameterExecutionToken>(param_4,&local_188);
    FVar5 = *(FOptionalMovieSceneBlendType *)((longlong)&this_01->_padding_ + 1);
    if (FVar5.bIsValid == false) {
      local_818 = Absolute;
    }
    else {
      local_7fc[0] = FVar5;
      local_818 = FOptionalMovieSceneBlendType::Get(local_7fc);
    }
    FControlRigAnimTypeIDs::Get(&local_7d8,local_7e8);
    iVar63 = local_3f0.ScalarValues.ArrayNum;
    FVar61 = (ForElementType<FScalarParameterStringAndValue>)&local_3f0;
    if (local_3f0.ScalarValues.AllocatorInstance.SecondaryData !=
        (ForElementType<FScalarParameterStringAndValue>)0x0) {
      FVar61 = local_3f0.ScalarValues.AllocatorInstance.SecondaryData;
    }
    FVar2 = (ForElementType<FScalarParameterStringAndValue>)
            ((longlong)FVar61 + (longlong)iVar63 * 0xc);
    while( true ) {
      if (local_3f0.ScalarValues.ArrayNum != iVar63) {
        local_808 = 0;
        `TCheckedPointerIterator<FScalarParameterStringAndValue,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_808);
      }
      if (FVar61 == FVar2) break;
      pFVar42 = TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Find
                          (&this_01->ControlNameMask,*(FName *)FVar61);
      if (pFVar42 == (FName *)0x0) {
        if ((local_7d8.Object == (FControlRigAnimTypeIDs *)0x0) &&
           (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar25)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        FControlRigAnimTypeIDs::FindImpl
                  ((FName)&local_790,
                   *(TSortedMap<FName,FMovieSceneAnimTypeID,TSizedDefaultAllocator<32>,FNameFastLess>
                     **)FVar61);
        FVar21.ID = local_790.ID;
        pTVar43 = FMovieSceneBlendingAccumulator::FindActuator<FControlRigTrackTokenFloat>
                            (&param_4->BlendingAccumulator,
                             (FMovieSceneBlendingActuatorID)local_790.ID);
        if (pTVar43 == (TMovieSceneBlendingActuator<FControlRigTrackTokenFloat> *)0x0) {
          pTVar44 = MakeShared<TControlRigParameterActuatorFloat,1,FMovieSceneAnimTypeID_&,FName_const_&,UMovieSceneControlRigParameterSection_const_*_&>
                              (&local_5d8,&local_790,(FName *)FVar61,&local_810);
          local_700 = pTVar44->Object;
          local_6f8 = (pTVar44->SharedReferenceCount).ReferenceController;
          if (local_6f8 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            local_6f8->SharedReferenceCount =
                 (atomic<int>)((int)local_6f8->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_688 = &local_748.Value;
          local_748.Value = (TSharedRef<IMovieSceneBlendingActuator,1> *)FVar21.ID;
          local_680 = &local_700;
          TSet<TTuple<FMovieSceneBlendingActuatorID,TSharedRef<IMovieSceneBlendingActuator,1>_>,TDefaultMapHashableKeyFuncs<FMovieSceneBlendingActuatorID,TSharedRef<IMovieSceneBlendingActuator,1>,0>,FDefaultSetAllocator>
          ::
          Emplace<TPairInitializer<FMovieSceneBlendingActuatorID_const_&,TSharedRef<IMovieSceneBlendingActuator,1>_const_&>_>
                    ((TSet<TTuple<FMovieSceneBlendingActuatorID,TSharedRef<IMovieSceneBlendingActuator,1>_>,TDefaultMapHashableKeyFuncs<FMovieSceneBlendingActuatorID,TSharedRef<IMovieSceneBlendingActuator,1>,0>,FDefaultSetAllocator>
                      *)&param_4->BlendingAccumulator,
                     (TPairInitializer<FMovieSceneBlendingActuatorID_const_&,TSharedRef<IMovieSceneBlendingActuator,1>_const_&>
                      *)(local_758 + 4),(bool *)&local_688);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_6f8);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_5d8.SharedReferenceCount.ReferenceController);
        }
        pTVar45 = TBlendableToken<FControlRigTrackTokenFloat>::
                  TBlendableToken<FControlRigTrackTokenFloat><float_const_&>
                            (&local_420,(float *)((longlong)FVar61 + 8),local_818,fVar72,local_800);
        FMovieSceneBlendingAccumulator::BlendToken<FControlRigTrackTokenFloat>
                  (&param_4->BlendingAccumulator,&param_4->Operand,
                   (FMovieSceneBlendingActuatorID)FVar21.ID,&param_4->Scope,&param_4->Context,
                   pTVar45);
        TInlineValue<TBlendableToken<FControlRigTrackTokenFloat>::IData,4,8>::
        ~TInlineValue<TBlendableToken<FControlRigTrackTokenFloat>::IData,4,8>(&local_420.Value);
      }
      FVar61 = (ForElementType<FScalarParameterStringAndValue>)((longlong)FVar61 + 0xc);
    }
    local_804 = local_3f0.VectorValues.ArrayNum;
    uVar64 = (ulonglong)(int)local_804;
    local_7c8.Mask = 0;
    FVar62 = (ForElementType<FVectorParameterStringAndValue>)&local_3f0.VectorValues;
    if (local_3f0.VectorValues.AllocatorInstance.SecondaryData !=
        (ForElementType<FVectorParameterStringAndValue>)0x0) {
      FVar62 = local_3f0.VectorValues.AllocatorInstance.SecondaryData;
    }
    FVar65 = (ForElementType<FVectorParameterStringAndValue>)(uVar64 * 0x20 + (longlong)FVar62);
    while( true ) {
      if (local_3f0.VectorValues.ArrayNum != (int)uVar64) {
        local_807 = 0;
        `TCheckedPointerIterator<FVectorParameterStringAndValue,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_807);
      }
      if (FVar62 == FVar65) break;
      pFVar42 = TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Find
                          (&this_01->ControlNameMask,*(FName *)FVar62);
      if (pFVar42 == (FName *)0x0) {
        if ((local_7d8.Object == (FControlRigAnimTypeIDs *)0x0) &&
           (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar25)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        FControlRigAnimTypeIDs::FindImpl
                  ((FName)&local_788,
                   (TSortedMap<FName,FMovieSceneAnimTypeID,TSizedDefaultAllocator<32>,FNameFastLess>
                    *)*(FName *)FVar62);
        FVar21.ID = local_788.ID;
        pTVar46 = FMovieSceneBlendingAccumulator::FindActuator<FControlRigTrackTokenVector>
                            (&param_4->BlendingAccumulator,
                             (FMovieSceneBlendingActuatorID)local_788.ID);
        if (pTVar46 == (TMovieSceneBlendingActuator<FControlRigTrackTokenVector> *)0x0) {
          pTVar47 = MakeShared<TControlRigParameterActuatorVector,1,FMovieSceneAnimTypeID_&,FName_const_&,UMovieSceneControlRigParameterSection_const_*_&>
                              (&local_5c8,&local_788,(FName *)FVar62,&local_810);
          local_6f0 = pTVar47->Object;
          local_6e8 = (pTVar47->SharedReferenceCount).ReferenceController;
          if (local_6e8 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            local_6e8->SharedReferenceCount =
                 (atomic<int>)((int)local_6e8->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_6e0 = &local_738;
          local_738 = (FMovieSceneBlendingActuatorID)FVar21.ID;
          local_6d8 = &local_6f0;
          TSet<TTuple<FMovieSceneBlendingActuatorID,TSharedRef<IMovieSceneBlendingActuator,1>_>,TDefaultMapHashableKeyFuncs<FMovieSceneBlendingActuatorID,TSharedRef<IMovieSceneBlendingActuator,1>,0>,FDefaultSetAllocator>
          ::
          Emplace<TPairInitializer<FMovieSceneBlendingActuatorID_const_&,TSharedRef<IMovieSceneBlendingActuator,1>_const_&>_>
                    ((TSet<TTuple<FMovieSceneBlendingActuatorID,TSharedRef<IMovieSceneBlendingActuator,1>_>,TDefaultMapHashableKeyFuncs<FMovieSceneBlendingActuatorID,TSharedRef<IMovieSceneBlendingActuator,1>,0>,FDefaultSetAllocator>
                      *)&param_4->BlendingAccumulator,
                     (TPairInitializer<FMovieSceneBlendingActuatorID_const_&,TSharedRef<IMovieSceneBlendingActuator,1>_const_&>
                      *)local_750,(bool *)&local_6e0);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_6e8);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_5c8.SharedReferenceCount.ReferenceController);
        }
        local_7c8.Channels[0] = (float)(double)*(FName *)((longlong)FVar62 + 8);
        local_7c8.Mask = 7;
        local_7c8.Channels[1] = (float)(double)*(FName *)((longlong)FVar62 + 0x10);
        local_7c8.Channels[2] = (float)(double)*(FName *)((longlong)FVar62 + 0x18);
        pTVar48 = TBlendableToken<FControlRigTrackTokenVector>::
                  TBlendableToken<FControlRigTrackTokenVector><UE::MovieScene::TMultiChannelValue<float,3>_&>
                            (&local_460,&local_7c8,local_818,fVar72,local_800);
        FMovieSceneBlendingAccumulator::BlendToken<FControlRigTrackTokenVector>
                  (&param_4->BlendingAccumulator,&param_4->Operand,
                   (FMovieSceneBlendingActuatorID)FVar21.ID,&param_4->Scope,&param_4->Context,
                   pTVar48);
        if (local_460.Value.bIsValid) {
          pIVar49 = TInlineValue<TBlendableToken<FControlRigTrackTokenVector>::IData,24,8>::GetValue
                              (&local_460.Value);
          local_460.Value._24_1_ = local_460.Value._24_1_ & 0xfe;
          (**(code **)*pIVar49)(pIVar49,0);
          if (!local_460.Value.bInline) {
            FMemory::Free((void *)local_460.Value.Data.Pad._0_8_);
          }
        }
      }
      FVar62 = (ForElementType<FVectorParameterStringAndValue>)((longlong)FVar62 + 0x20);
      uVar64 = (ulonglong)local_804;
    }
    local_7f8 = local_3f0.Vector2DValues.ArrayNum;
    uVar64 = (ulonglong)(int)local_7f8;
    local_804 = 0;
    FVar68 = (ForElementType<FVector2DParameterStringAndValue>)&local_3f0.Vector2DValues;
    if (local_3f0.Vector2DValues.AllocatorInstance.SecondaryData !=
        (ForElementType<FVector2DParameterStringAndValue>)0x0) {
      FVar68 = local_3f0.Vector2DValues.AllocatorInstance.SecondaryData;
    }
    FVar60 = (ForElementType<FVector2DParameterStringAndValue>)((longlong)FVar68 + uVar64 * 0x18);
    local_7f0 = FVar60;
    while( true ) {
      if (local_3f0.Vector2DValues.ArrayNum != (int)uVar64) {
        local_806 = 0;
        `TCheckedPointerIterator<FVector2DParameterStringAndValue,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_806);
      }
      if (FVar68 == FVar60) break;
      pFVar42 = TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Find
                          (&this_01->ControlNameMask,*(FName *)FVar68);
      if (pFVar42 == (FName *)0x0) {
        if ((local_7d8.Object == (FControlRigAnimTypeIDs *)0x0) &&
           (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar25)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        FControlRigAnimTypeIDs::FindImpl
                  ((FName)&local_730,
                   (TSortedMap<FName,FMovieSceneAnimTypeID,TSizedDefaultAllocator<32>,FNameFastLess>
                    *)*(FName *)FVar68);
        FVar23 = local_730;
        if (*(int *)&(param_4->BlendingAccumulator).Actuators.field_0x8 !=
            *(int *)&(param_4->BlendingAccumulator).Actuators.field_0x34) {
          puVar6 = *(undefined1 **)&(param_4->BlendingAccumulator).Actuators.field_0x40;
          puVar58 = &(param_4->BlendingAccumulator).Actuators.field_0x38;
          if (puVar6 != (undefined1 *)0x0) {
            puVar58 = puVar6;
          }
          iVar63 = *(int *)(puVar58 +
                           (ulonglong)
                           (*(int *)&(param_4->BlendingAccumulator).Actuators.field_0x48 - 1U &
                           local_730._4_4_ * 0x17 + local_730._0_4_) * 4);
          if (iVar63 != -1) {
            do {
              pFVar54 = (FMovieSceneBlendingActuatorID *)
                        ((longlong)iVar63 * 0x20 +
                        *(longlong *)&(param_4->BlendingAccumulator).Actuators);
              if (*pFVar54 == local_730) {
                pFVar67 = pFVar54 + 1;
                if (pFVar54 == (FMovieSceneBlendingActuatorID *)0x0) {
                  pFVar67 = (FMovieSceneBlendingActuatorID *)0x0;
                }
                if (pFVar67 != (FMovieSceneBlendingActuatorID *)0x0) {
                  if ((*(int *)(*(longlong *)
                                 ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1))
                  {
                    FMovieSceneAnimTypeID::Unique();
                    _Init_thread_footer(&::_TSS0);
                  }
                  FVar21.ID = ::TypeId.ID;
                  puVar50 = (ulong64 *)(**(code **)(*(longlong *)*pFVar67 + 8))(*pFVar67,local_5a8);
                  if ((*puVar50 == FVar21.ID) && (*pFVar67 != (FMovieSceneBlendingActuatorID)0x0))
                  goto LAB_14a37e8ba;
                }
                break;
              }
              iVar63 = *(int *)(pFVar54 + 3);
            } while (iVar63 != -1);
          }
        }
        pTVar59 = (TReferenceControllerBase<1> *)0x0;
        pTVar51 = ::operator_new(0x50);
        if (pTVar51 != (TReferenceControllerBase<1> *)0x0) {
          pTVar51->SharedReferenceCount = (atomic<int>)0x1;
          pTVar51->WeakReferenceCount = (atomic<int>)0x1;
          pTVar51->_padding_ =
               (longlong)
               &
               ___7__TIntrusiveReferenceController_UTControlRigParameterActuatorVector2D___00_SharedPointerInternals__6B_
          ;
          pTVar51[1].SharedReferenceCount = (atomic<int>)0x0;
          pTVar51[1].WeakReferenceCount = (atomic<int>)0x0;
          pTVar51[2]._padding_ = 0;
          pTVar51[2].SharedReferenceCount = (atomic<int>)0x0;
          pTVar51[2].WeakReferenceCount = (atomic<int>)0x0;
          pTVar51[3]._padding_ = 0;
          pTVar51[1]._padding_ = (longlong)&___7TControlRigParameterActuatorVector2D__6B_;
          *(FMovieSceneBlendingActuatorID *)&pTVar51[3].SharedReferenceCount = FVar23;
          pTVar51[4]._padding_ = (longlong)*(FName *)FVar68;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (this_01 != (UMovieSceneControlRigParameterSection *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)this_01);
          }
          pTVar51[4].SharedReferenceCount = (atomic<int>)0x0;
          pTVar51[4].WeakReferenceCount = (atomic<int>)0x0;
          local_728 = this_01;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (this_01 != (UMovieSceneControlRigParameterSection *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)this_01);
          }
          FWeakObjectPtr::operator=
                    ((FWeakObjectPtr *)&pTVar51[4].SharedReferenceCount,(FObjectPtr)&local_728);
          pTVar59 = pTVar51;
        }
        TSharedRef<TControlRigParameterActuatorVector2D,1>::
        TSharedRef<TControlRigParameterActuatorVector2D,1>
                  (&local_5b8,(TControlRigParameterActuatorVector2D *)(pTVar59 + 1),pTVar59);
        FVar24.ReferenceController = local_5b8.SharedReferenceCount.ReferenceController;
        local_6b8 = local_5b8.Object;
        pTStack_6b0 = local_5b8.SharedReferenceCount.ReferenceController;
        if (local_5b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_5b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_5b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        local_6d0 = &local_720;
        local_720 = FVar23;
        local_6c8 = &local_6b8;
        TSet<TTuple<FMovieSceneBlendingActuatorID,TSharedRef<IMovieSceneBlendingActuator,1>_>,TDefaultMapHashableKeyFuncs<FMovieSceneBlendingActuatorID,TSharedRef<IMovieSceneBlendingActuator,1>,0>,FDefaultSetAllocator>
        ::
        Emplace<TPairInitializer<FMovieSceneBlendingActuatorID_const_&,TSharedRef<IMovieSceneBlendingActuator,1>_const_&>_>
                  ((TSet<TTuple<FMovieSceneBlendingActuatorID,TSharedRef<IMovieSceneBlendingActuator,1>_>,TDefaultMapHashableKeyFuncs<FMovieSceneBlendingActuatorID,TSharedRef<IMovieSceneBlendingActuator,1>,0>,FDefaultSetAllocator>
                    *)&param_4->BlendingAccumulator,
                   (TPairInitializer<FMovieSceneBlendingActuatorID_const_&,TSharedRef<IMovieSceneBlendingActuator,1>_const_&>
                    *)(local_750 + 4),(bool *)&local_6d0);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pTStack_6b0);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar24.ReferenceController);
LAB_14a37e8ba:
        FVar3 = *(FName *)((longlong)FVar68 + 8);
        uVar66 = local_804 | 3;
        FVar4 = *(FName *)((longlong)FVar68 + 0x10);
        local_4f8 = local_4f8 & 0xfc;
        local_804 = uVar66;
        local_590 = uVar66;
        local_508[0] = FMemory::Malloc(0x18,8);
        pTVar55 = (TBlendableToken<FControlRigTrackTokenVector2D> *)local_508;
        if ((local_4f8 & 2) == 0) {
          pTVar55 = local_508[0];
        }
        local_598 = (TBlendableToken<FControlRigTrackTokenVector2D> *)
                    CONCAT44((float)(double)FVar4,(float)(double)FVar3);
        local_4f8 = local_4f8 | 1;
        *(TBlendableToken<FControlRigTrackTokenVector2D> **)((pTVar55->Value).Data.Pad + 8) =
             local_598;
        *(uint *)&(pTVar55->Value).field_0x10 = uVar66;
        *(undefined ***)(pTVar55->Value).Data.Pad =
             &
             ___7__TData_U__TMultiChannelValue_M_01_MovieScene_UE_____TBlendableToken_UFControlRigTrackTokenVector2D____6B_
        ;
        if (((local_4f8 & 1) == 0) &&
           (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                               ("bIsValid",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                                ,0x97,
                                L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                               ), bVar25)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pTVar55 = (TBlendableToken<FControlRigTrackTokenVector2D> *)local_508;
        if ((local_4f8 & 2) == 0) {
          pTVar55 = local_508[0];
        }
        if (((local_4f8 & 1) == 0) &&
           (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                               ("bIsValid",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                                ,0x97,
                                L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                               ), bVar25)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pTVar52 = (TBlendableToken<FControlRigTrackTokenVector2D> *)local_508;
        if ((local_4f8 & 2) == 0) {
          pTVar52 = local_508[0];
        }
        if ((pTVar55 != pTVar52) &&
           (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                                ,0xce,
                                L"TInlineValue cannot operate with multiple inheritance objects."),
           bVar25)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        local_4d8 = local_818;
        local_4d4 = local_800;
        local_4f0.SequenceID.Value = 0xffffffff;
        local_4f0.TrackIdentifier.Value = 0xffffffff;
        local_4f0.SectionIndex = 0xffffffff;
        local_4e4 = KeepState;
        local_4e0 = 0;
        local_4dc = fVar72;
        FMovieSceneBlendingAccumulator::BlendToken<FControlRigTrackTokenVector2D>
                  (&param_4->BlendingAccumulator,&param_4->Operand,FVar23,&param_4->Scope,
                   &param_4->Context,(TBlendableToken<FControlRigTrackTokenVector2D> *)local_508);
        FVar60 = local_7f0;
        if ((local_4f8 & 1) != 0) {
          pTVar55 = (TBlendableToken<FControlRigTrackTokenVector2D> *)local_508;
          if ((local_4f8 & 2) == 0) {
            pTVar55 = local_508[0];
          }
          local_4f8 = local_4f8 & 0xfe;
          (**(code **)((*(TBlendableToken<FControlRigTrackTokenVector2D> **)
                         (pTVar55->Value).Data.Pad)->Value).Data.Pad)(pTVar55,0);
          FVar60 = local_7f0;
          if ((local_4f8 & 2) == 0) {
            FMemory::Free(local_508[0]);
            FVar60 = local_7f0;
          }
        }
      }
      FVar68 = (ForElementType<FVector2DParameterStringAndValue>)((longlong)FVar68 + 0x18);
      uVar64 = (ulonglong)local_7f8;
    }
    local_804 = local_3f0.TransformValues.ArrayNum;
    uVar64 = (ulonglong)(int)local_804;
    local_760 = local_760 & 0xffffffff;
    FVar56 = (ForElementType<FEulerTransformParameterStringAndValue>)&local_3f0.TransformValues;
    if (local_3f0.TransformValues.AllocatorInstance.SecondaryData !=
        (ForElementType<FEulerTransformParameterStringAndValue>)0x0) {
      FVar56 = local_3f0.TransformValues.AllocatorInstance.SecondaryData;
    }
    local_7f0 = (ForElementType<FVector2DParameterStringAndValue>)(uVar64 * 0x50 + (longlong)FVar56)
    ;
    puVar69 = (uchar *)((longlong)FVar56 + 0x10);
    FVar68 = local_7f0;
    while( true ) {
      local_7f8 = local_760._4_4_;
      local_7e8 = (UControlRig *)puVar69;
      if (local_3f0.TransformValues.ArrayNum != (int)uVar64) {
        local_805 = 0;
        `TCheckedPointerIterator<FEulerTransformParameterStringAndValue,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_805);
      }
      pFVar70 = (ForElementType<FEulerTransformParameterStringAndValue> *)(puVar69 + -0x10);
      if ((ForElementType<FVector2DParameterStringAndValue>)pFVar70 == FVar68) break;
      pFVar42 = TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Find
                          (&this_01->ControlNameMask,*(FName *)pFVar70->InlineData);
      if (pFVar42 == (FName *)0x0) {
        if ((local_7d8.Object == (FControlRigAnimTypeIDs *)0x0) &&
           (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar25)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        FControlRigAnimTypeIDs::FindImpl
                  ((FName)&local_718,
                   *(TSortedMap<FName,FMovieSceneAnimTypeID,TSizedDefaultAllocator<32>,FNameFastLess>
                     **)pFVar70->InlineData);
        FVar23 = local_718;
        if (*(int *)&(param_4->BlendingAccumulator).Actuators.field_0x8 !=
            *(int *)&(param_4->BlendingAccumulator).Actuators.field_0x34) {
          puVar6 = *(undefined1 **)&(param_4->BlendingAccumulator).Actuators.field_0x40;
          puVar58 = &(param_4->BlendingAccumulator).Actuators.field_0x38;
          if (puVar6 != (undefined1 *)0x0) {
            puVar58 = puVar6;
          }
          iVar63 = *(int *)(puVar58 +
                           (ulonglong)
                           (*(int *)&(param_4->BlendingAccumulator).Actuators.field_0x48 - 1U &
                           local_718._4_4_ * 0x17 + local_718._0_4_) * 4);
          if (iVar63 != -1) {
            do {
              pFVar54 = (FMovieSceneBlendingActuatorID *)
                        ((longlong)iVar63 * 0x20 +
                        *(longlong *)&(param_4->BlendingAccumulator).Actuators);
              if (*pFVar54 == local_718) {
                pFVar67 = pFVar54 + 1;
                if (pFVar54 == (FMovieSceneBlendingActuatorID *)0x0) {
                  pFVar67 = (FMovieSceneBlendingActuatorID *)0x0;
                }
                if (pFVar67 != (FMovieSceneBlendingActuatorID *)0x0) {
                  if ((*(int *)(*(longlong *)
                                 ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1))
                  {
                    FMovieSceneAnimTypeID::Unique();
                    _Init_thread_footer(&::_TSS0);
                  }
                  FVar21.ID = ::TypeId.ID;
                  puVar50 = (ulong64 *)(**(code **)(*(longlong *)*pFVar67 + 8))(*pFVar67,local_660);
                  if ((*puVar50 == FVar21.ID) && (*pFVar67 != (FMovieSceneBlendingActuatorID)0x0))
                  goto LAB_14a37ee2b;
                }
                break;
              }
              iVar63 = *(int *)(pFVar54 + 3);
            } while (iVar63 != -1);
          }
        }
        pTVar59 = (TReferenceControllerBase<1> *)0x0;
        pTVar51 = ::operator_new(0x50);
        if (pTVar51 == (TReferenceControllerBase<1> *)0x0) {
          pTVar71 = (TReferenceControllerBase<1> *)&DAT_00000010;
LAB_14a37ed6b:
          lVar28._0_4_ = pTVar71->SharedReferenceCount;
          lVar28._4_4_ = pTVar71->WeakReferenceCount;
          if (((lVar28 == 0) || (pTVar71[1]._padding_ == 0)) ||
             (*(int *)(pTVar71[1]._padding_ + 8) < 1)) {
            if (pTVar59 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar59->SharedReferenceCount = (atomic<int>)((int)pTVar59->SharedReferenceCount + 1);
              UNLOCK();
            }
            *(TReferenceControllerBase<1> **)&pTVar71->SharedReferenceCount = pTVar71;
            if (pTVar59 != (TReferenceControllerBase<1> *)pTVar71[1]._padding_) {
              if (pTVar59 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                pTVar59->WeakReferenceCount = (atomic<int>)((int)pTVar59->WeakReferenceCount + 1);
                UNLOCK();
              }
              plVar7 = (longlong *)pTVar71[1]._padding_;
              if (plVar7 != (longlong *)0x0) {
                LOCK();
                piVar1 = (int *)((longlong)plVar7 + 0xc);
                iVar63 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar63 == 1) {
                  (**(code **)(*plVar7 + 8))(plVar7,1);
                }
              }
              pTVar71[1]._padding_ = (longlong)pTVar59;
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar59);
          }
        }
        else {
          pTVar51->SharedReferenceCount = (atomic<int>)0x1;
          pTVar51->WeakReferenceCount = (atomic<int>)0x1;
          pTVar51->_padding_ =
               (longlong)
               &
               ___7__TIntrusiveReferenceController_UTControlRigParameterActuatorTransform___00_SharedPointerInternals__6B_
          ;
          pTVar51[1].SharedReferenceCount = (atomic<int>)0x0;
          pTVar51[1].WeakReferenceCount = (atomic<int>)0x0;
          pTVar51[2]._padding_ = 0;
          pTVar51[2].SharedReferenceCount = (atomic<int>)0x0;
          pTVar51[2].WeakReferenceCount = (atomic<int>)0x0;
          pTVar51[3]._padding_ = 0;
          pTVar51[1]._padding_ = (longlong)&___7TControlRigParameterActuatorTransform__6B_;
          *(FMovieSceneBlendingActuatorID *)&pTVar51[3].SharedReferenceCount = FVar23;
          pTVar51[4]._padding_ = (longlong)*(double *)pFVar70->InlineData;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (this_01 != (UMovieSceneControlRigParameterSection *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)this_01);
          }
          pTVar51[4].SharedReferenceCount = (atomic<int>)0x0;
          pTVar51[4].WeakReferenceCount = (atomic<int>)0x0;
          local_708 = this_01;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (this_01 != (UMovieSceneControlRigParameterSection *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)this_01);
          }
          FWeakObjectPtr::operator=
                    ((FWeakObjectPtr *)&pTVar51[4].SharedReferenceCount,(FObjectPtr)&local_708);
          pTVar71 = pTVar51 + 1;
          pTVar59 = pTVar51;
          if (pTVar71 != (TReferenceControllerBase<1> *)0x0) goto LAB_14a37ed6b;
          bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("InObject != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x246,L"");
          if (bVar25) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
        }
        if (pTVar59 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar59->SharedReferenceCount = (atomic<int>)((int)pTVar59->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_6a8 = &local_710;
        local_710 = FVar23;
        local_6a0 = &local_7a8;
        local_7a8 = pTVar71;
        local_7a0 = pTVar59;
        TSet<TTuple<FMovieSceneBlendingActuatorID,TSharedRef<IMovieSceneBlendingActuator,1>_>,TDefaultMapHashableKeyFuncs<FMovieSceneBlendingActuatorID,TSharedRef<IMovieSceneBlendingActuator,1>,0>,FDefaultSetAllocator>
        ::
        Emplace<TPairInitializer<FMovieSceneBlendingActuatorID_const_&,TSharedRef<IMovieSceneBlendingActuator,1>_const_&>_>
                  ((TSet<TTuple<FMovieSceneBlendingActuatorID,TSharedRef<IMovieSceneBlendingActuator,1>_>,TDefaultMapHashableKeyFuncs<FMovieSceneBlendingActuatorID,TSharedRef<IMovieSceneBlendingActuator,1>,0>,FDefaultSetAllocator>
                    *)&param_4->BlendingAccumulator,&local_748,(bool *)&local_6a8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_7a0);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar59)
        ;
LAB_14a37ee2b:
        pUVar22 = local_7e8;
        local_488 = local_488 | 3;
        local_780 = (float)*(double *)((longlong)local_7e8 + -8);
        local_4d0._0_8_ =
             &
             ___7__TData_U__TMultiChannelValue_M_08_MovieScene_UE_____TBlendableToken_UFControlRigTrackTokenTransform____6B_
        ;
        local_770 = (float)*(double *)((longlong)local_7e8 + 0x10);
        fStack_77c = (float)*(double *)local_7e8;
        fStack_76c = (float)*(double *)((longlong)local_7e8 + 0x18);
        fStack_778 = (float)*(double *)((longlong)local_7e8 + 8);
        fStack_768 = (float)*(double *)((longlong)local_7e8 + 0x28);
        fStack_774 = (float)*(double *)((longlong)local_7e8 + 0x20);
        fStack_764 = (float)*(double *)((longlong)local_7e8 + 0x30);
        local_760 = CONCAT44(local_7f8,(float)*(double *)((longlong)local_7e8 + 0x38)) |
                    0x1ff00000000;
        local_4d0._8_4_ = local_780;
        fStack_4c4 = fStack_77c;
        fStack_4c0 = fStack_778;
        fStack_4bc = fStack_774;
        local_4b8 = local_770;
        fStack_4b4 = fStack_76c;
        fStack_4b0 = fStack_768;
        fStack_4ac = fStack_764;
        local_4a8 = local_760;
        if (((local_488 & 1) == 0) &&
           (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                               ("bIsValid",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                                ,0x97,
                                L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                               ), bVar25)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        ppuVar57 = (undefined **)local_4d0;
        if ((local_488 & 2) == 0) {
          ppuVar57 = (undefined **)local_4d0._0_8_;
        }
        if (((local_488 & 1) == 0) &&
           (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                               ("bIsValid",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                                ,0x97,
                                L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                               ), bVar25)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        ppuVar53 = (undefined **)local_4d0;
        if ((local_488 & 2) == 0) {
          ppuVar53 = (undefined **)local_4d0._0_8_;
        }
        if ((ppuVar57 != ppuVar53) &&
           (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                                ,0xce,
                                L"TInlineValue cannot operate with multiple inheritance objects."),
           bVar25)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        local_468 = local_818;
        local_464 = local_800;
        local_480.SequenceID.Value = 0xffffffff;
        local_480.TrackIdentifier.Value = 0xffffffff;
        local_480.SectionIndex = 0xffffffff;
        local_474 = KeepState;
        local_470 = 0;
        local_46c = fVar72;
        FMovieSceneBlendingAccumulator::BlendToken<FControlRigTrackTokenTransform>
                  (&param_4->BlendingAccumulator,&param_4->Operand,FVar23,&param_4->Scope,
                   &param_4->Context,(TBlendableToken<FControlRigTrackTokenTransform> *)local_4d0);
        if ((local_488 & 1) != 0) {
          ppuVar57 = (undefined **)local_4d0;
          if ((local_488 & 2) == 0) {
            ppuVar57 = (undefined **)local_4d0._0_8_;
          }
          local_488 = local_488 & 0xfe;
          (**(code **)*ppuVar57)(ppuVar57,0);
          if ((local_488 & 2) == 0) {
            FMemory::Free((void *)local_4d0._0_8_);
          }
        }
        puVar69 = (uchar *)((longlong)pUVar22 + 0x50);
        uVar64 = (ulonglong)local_804;
        FVar68 = local_7f0;
      }
      else {
        puVar69 = (uchar *)((longlong)local_7e8 + 0x50);
        uVar64 = (ulonglong)local_804;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_7d8.SharedReferenceCount.ReferenceController);
    if (local_188.ConstraintsValues.AllocatorInstance.SecondaryData !=
        (ForElementType<FConstraintAndActiveValue>)0x0) {
      FMemory::Free((void *)local_188.ConstraintsValues.AllocatorInstance.SecondaryData);
    }
    if (local_188.SpaceValues.AllocatorInstance.SecondaryData !=
        (ForElementType<FControlSpaceAndValue>)0x0) {
      FMemory::Free((void *)local_188.SpaceValues.AllocatorInstance.SecondaryData);
    }
    if (local_188.IntegerValues.AllocatorInstance.SecondaryData !=
        (ForElementType<FIntegerParameterStringAndValue>)0x0) {
      FMemory::Free((void *)local_188.IntegerValues.AllocatorInstance.SecondaryData);
    }
    if (local_188.BoolValues.AllocatorInstance.SecondaryData !=
        (ForElementType<FBoolParameterStringAndValue>)0x0) {
      FMemory::Free((void *)local_188.BoolValues.AllocatorInstance.SecondaryData);
    }
    local_188._padding_ = (longlong)&___7IMovieSceneExecutionToken__6B_;
    FEvaluatedControlRigParameterSectionValues::~FEvaluatedControlRigParameterSectionValues
              (&local_3f0);
  }
  return;
}

// Interrogate @ 14a37f1f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FMovieSceneControlRigParameterTemplate::Interrogate
          (FMovieSceneControlRigParameterTemplate *this,FMovieSceneContext *param_1,
          FMovieSceneInterrogationData *param_2,UObject *param_3)

{
  int *piVar1;
  ForElementType<FScalarParameterStringAndValue> FVar2;
  ForElementType<FVector2DParameterStringAndValue> FVar3;
  FName FVar4;
  FName FVar5;
  FName FVar6;
  FOptionalMovieSceneBlendType FVar7;
  undefined1 *puVar8;
  longlong lVar9;
  longlong *plVar10;
  code *pcVar11;
  FTransformParameterNameAndCurves *pFVar12;
  undefined8 uVar13;
  FColorParameterNameAndCurves *pFVar14;
  undefined8 uVar15;
  FVectorParameterNameAndCurves *pFVar16;
  undefined8 uVar17;
  FVector2DParameterNameAndCurves *pFVar18;
  undefined8 uVar19;
  FEnumParameterNameAndCurve *pFVar20;
  undefined8 uVar21;
  FIntegerParameterNameAndCurve *pFVar22;
  undefined8 uVar23;
  FMovieSceneAnimTypeID FVar24;
  TSharedRef<IMovieSceneBlendingActuator,1> *pTVar25;
  FMovieSceneBlendingActuatorID FVar26;
  FSharedReferencer<1> FVar27;
  bool bVar28;
  uint uVar29;
  int iVar30;
  UMovieSceneControlRigParameterSection *this_00;
  TArrayView<FTransformParameterNameAndCurves_const_,int> *pTVar31;
  TArrayView<FColorParameterNameAndCurves_const_,int> *pTVar32;
  TArrayView<FVectorParameterNameAndCurves_const_,int> *pTVar33;
  TArrayView<FVector2DParameterNameAndCurves_const_,int> *pTVar34;
  TArrayView<FEnumParameterNameAndCurve_const_,int> *pTVar35;
  TArrayView<FIntegerParameterNameAndCurve_const_,int> *pTVar36;
  TArrayView<FBoolParameterNameAndCurve_const_,int> *pTVar37;
  TArrayView<FScalarParameterNameAndCurve_const_,int> *pTVar38;
  FFrameTime FVar39;
  FName *pFVar40;
  FMovieSceneBlendingAccumulator *pFVar41;
  TMovieSceneBlendingActuator<FControlRigTrackTokenFloat> *pTVar42;
  TSharedRef<TControlRigParameterActuatorFloat,1> *pTVar43;
  TBlendableToken<FControlRigTrackTokenFloat> *pTVar44;
  TMovieSceneBlendingActuator<FControlRigTrackTokenVector> *pTVar45;
  TSharedRef<TControlRigParameterActuatorVector2D,1> *pTVar46;
  TBlendableToken<FControlRigTrackTokenVector2D> *pTVar47;
  ulong64 *puVar48;
  TReferenceControllerBase<1> *pTVar49;
  IData *pIVar50;
  IData *pIVar51;
  FMovieSceneAccumulatedBlendState *pFVar52;
  undefined **ppuVar53;
  TMovieSceneBlendingActuator<FControlRigTrackTokenTransform> *pTVar54;
  FMovieSceneBlendingActuatorID *pFVar55;
  TBlendableToken<FControlRigTrackTokenVector> *pTVar56;
  TBlendableToken<FControlRigTrackTokenTransform> *pTVar57;
  undefined **ppuVar58;
  undefined1 *puVar59;
  ForElementType<FVectorParameterStringAndValue> FVar60;
  TReferenceControllerBase<1> *pTVar61;
  ForElementType<FEulerTransformParameterStringAndValue> FVar62;
  ulonglong uVar63;
  ForElementType<FEulerTransformParameterStringAndValue> FVar64;
  ForElementType<FScalarParameterStringAndValue> FVar65;
  ForElementType<FVector2DParameterStringAndValue> FVar66;
  FMovieSceneBlendingActuatorID *pFVar67;
  ForElementType<FVectorParameterStringAndValue> FVar68;
  TReferenceControllerBase<1> *pTVar69;
  FMovieSceneInterrogationData *this_01;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  undefined1 auStackY_a18 [32];
  EMovieSceneBlendType local_9c8;
  undefined1 local_9c7;
  undefined1 local_9c6;
  undefined1 local_9c5;
  undefined1 local_9c4 [4];
  UMovieSceneControlRigParameterSection *local_9c0;
  int local_9b8;
  FMovieSceneInterrogationData *local_9b0;
  FOptionalMovieSceneBlendType local_9a8 [2];
  uint local_9a4;
  float local_9a0 [2];
  ForElementType<FVectorParameterStringAndValue> local_998;
  TSharedPtr<FControlRigAnimTypeIDs,1> local_990;
  TMultiChannelValue<float,2> local_980;
  FMovieSceneContext *local_970;
  ForElementType<FEulerTransformParameterStringAndValue> local_968;
  TReferenceControllerBase<1> *local_960;
  TReferenceControllerBase<1> *local_958;
  FMovieSceneAnimTypeID local_950;
  FMovieSceneAnimTypeID local_948;
  FMovieSceneEvaluationOperand local_940;
  FMovieSceneEvaluationOperand local_92c;
  float local_918;
  float fStack_914;
  float fStack_910;
  float fStack_90c;
  float local_908;
  float fStack_904;
  float fStack_900;
  float fStack_8fc;
  undefined8 local_8f8;
  FMovieSceneEvaluationScope local_8f0;
  FMovieSceneEvaluationScope local_8e0;
  FMovieSceneEvaluationKey local_8d0;
  uint uStack_8c4;
  FMovieSceneEvaluationKey local_8c0;
  uint uStack_8b4;
  FMovieSceneEvaluationOperand local_8b0;
  FMovieSceneEvaluationOperand local_89c;
  undefined1 local_888 [8];
  TPairInitializer<FMovieSceneBlendingActuatorID_const_&,TSharedRef<IMovieSceneBlendingActuator,1>_const_&>
  local_880;
  UMovieSceneControlRigParameterSection *local_870;
  FMovieSceneBlendingActuatorID local_868;
  TControlRigParameterActuatorFloat *local_860;
  TReferenceControllerBase<1> *local_858;
  UMovieSceneControlRigParameterSection *local_850;
  FMovieSceneBlendingActuatorID local_848;
  FMovieSceneBlendingActuatorID local_840;
  TControlRigParameterActuatorVector2D *local_838;
  TReferenceControllerBase<1> *local_830;
  FMovieSceneBlendingActuatorID local_828;
  FMovieSceneBlendingActuatorID local_820;
  TPairInitializer<FMovieSceneBlendingActuatorID_const_&,TSharedRef<IMovieSceneBlendingActuator,1>_const_&>
  local_818;
  float local_808;
  float fStack_804;
  float fStack_800;
  undefined4 uStack_7fc;
  FMovieSceneBlendingActuatorID *local_7f8;
  TControlRigParameterActuatorFloat **local_7f0;
  FMovieSceneBlendingActuatorID *local_7e8;
  TControlRigParameterActuatorVector2D **local_7e0;
  FMovieSceneBlendingActuatorID *local_7d8;
  TControlRigParameterActuatorVector **local_7d0;
  TControlRigParameterActuatorVector *local_7c8;
  TReferenceControllerBase<1> *pTStack_7c0;
  FMovieSceneBlendingActuatorID *local_7b8;
  TReferenceControllerBase<1> **local_7b0;
  TArrayView<FColorParameterNameAndCurves_const_,int> local_7a8;
  TArrayView<FVectorParameterNameAndCurves_const_,int> local_798;
  TArrayView<FVector2DParameterNameAndCurves_const_,int> local_788;
  TArrayView<FEnumParameterNameAndCurve_const_,int> local_778;
  TArrayView<FIntegerParameterNameAndCurve_const_,int> local_768;
  TArrayView<FBoolParameterNameAndCurve_const_,int> local_758;
  TArrayView<FScalarParameterNameAndCurve_const_,int> local_748;
  TSharedRef<TControlRigParameterActuatorFloat,1> local_738;
  TSharedRef<TControlRigParameterActuatorVector2D,1> local_728;
  TSharedRef<TControlRigParameterActuatorVector,1> local_718;
  undefined1 local_700 [8];
  undefined1 local_6f8 [32];
  TArrayView<FTransformParameterNameAndCurves_const_,int> local_6d8;
  TArrayView<FBoolParameterNameAndCurve_const_,int> local_6c8;
  TArrayView<FScalarParameterNameAndCurve_const_,int> local_6b8;
  TArrayView<FTransformParameterNameAndCurves_const_,int> local_6a8;
  TArrayView<FVectorParameterNameAndCurves_const_,int> local_698;
  TArrayView<FVector2DParameterNameAndCurves_const_,int> local_688;
  TArrayView<FColorParameterNameAndCurves_const_,int> local_678;
  TArrayView<FEnumParameterNameAndCurve_const_,int> local_668;
  TArrayView<FIntegerParameterNameAndCurve_const_,int> local_658;
  TBlendableToken<FControlRigTrackTokenVector> local_648;
  undefined1 local_608 [12];
  float fStack_5fc;
  float fStack_5f8;
  float fStack_5f4;
  float local_5f0;
  float fStack_5ec;
  float fStack_5e8;
  float fStack_5e4;
  ulonglong local_5e0;
  byte local_5c0;
  undefined1 local_5b8 [16];
  int local_5a8;
  float local_5a4;
  EMovieSceneBlendType local_5a0;
  int local_59c;
  undefined1 local_598 [24];
  TBlendableToken<FControlRigTrackTokenVector> local_580;
  undefined1 local_540 [24];
  TBlendableToken<FControlRigTrackTokenTransform> local_528;
  TBlendableToken<FControlRigTrackTokenFloat> local_4b8;
  FEvaluatedControlRigParameterSectionChannelMasks local_488;
  FEvaluatedControlRigParameterSectionValues local_378;
  TBlendableToken<FControlRigTrackTokenVector2D> local_118;
  ulonglong local_e0;
  
  local_e0 = __security_cookie.value ^ (ulonglong)auStackY_a18;
  local_9b0 = param_2;
  local_970 = param_1;
  if ((UE::MovieScene::GUseLegacyControlRigTemplate) ||
     (bVar28 = UMovieSceneEntitySystem::IsCustomSchedulingEnabled(), !bVar28)) {
    FMovieSceneEvaluationRange::GetTime((FMovieSceneEvaluationRange *)param_1);
    this_00 = (UMovieSceneControlRigParameterSection *)
              FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&this->_padding_ + 4));
    if ((this_00 != (UMovieSceneControlRigParameterSection *)0x0) &&
       (((bVar28 = UObjectBaseUtility::IsA<UMovieSceneControlRigParameterSection>
                             ((UObjectBaseUtility *)this_00), bVar28 &&
         ((this_00->ControlRig).field0_0x0.DebugPtr != (UControlRig *)0x0)) &&
        (local_9c0 = this_00,
        bVar28 = MovieSceneHelpers::IsSectionKeyable((UMovieSceneSection *)this_00), bVar28)))) {
      FEvaluatedControlRigParameterSectionChannelMasks::
      FEvaluatedControlRigParameterSectionChannelMasks(&local_488);
      pTVar31 = TArrayView<FTransformParameterNameAndCurves_const_,int>::
                TArrayView<FTransformParameterNameAndCurves_const_,int><TArray<FTransformParameterNameAndCurves,TSizedDefaultAllocator<32>_>_const_&,TArray<FTransformParameterNameAndCurves,TSizedDefaultAllocator<32>_>_>
                          (&local_6a8,
                           (TArray<FTransformParameterNameAndCurves,TSizedDefaultAllocator<32>_> *)
                           &this->_padding_);
      pFVar12 = pTVar31->DataPtr;
      uVar13._0_4_ = pTVar31->ArrayNum;
      uVar13._4_4_ = *(undefined4 *)&pTVar31->field_0xc;
      pTVar32 = TArrayView<FColorParameterNameAndCurves_const_,int>::
                TArrayView<FColorParameterNameAndCurves_const_,int><TArray<FColorParameterNameAndCurves,TSizedDefaultAllocator<32>_>_const_&,TArray<FColorParameterNameAndCurves,TSizedDefaultAllocator<32>_>_>
                          (&local_678,
                           (TArray<FColorParameterNameAndCurves,TSizedDefaultAllocator<32>_> *)
                           &this->_padding_);
      pFVar14 = pTVar32->DataPtr;
      uVar15._0_4_ = pTVar32->ArrayNum;
      uVar15._4_4_ = *(undefined4 *)&pTVar32->field_0xc;
      pTVar33 = TArrayView<FVectorParameterNameAndCurves_const_,int>::
                TArrayView<FVectorParameterNameAndCurves_const_,int><TArray<FVectorParameterNameAndCurves,TSizedDefaultAllocator<32>_>_const_&,TArray<FVectorParameterNameAndCurves,TSizedDefaultAllocator<32>_>_>
                          (&local_698,
                           (TArray<FVectorParameterNameAndCurves,TSizedDefaultAllocator<32>_> *)
                           &this->_padding_);
      pFVar16 = pTVar33->DataPtr;
      uVar17._0_4_ = pTVar33->ArrayNum;
      uVar17._4_4_ = *(undefined4 *)&pTVar33->field_0xc;
      pTVar34 = TArrayView<FVector2DParameterNameAndCurves_const_,int>::
                TArrayView<FVector2DParameterNameAndCurves_const_,int><TArray<FVector2DParameterNameAndCurves,TSizedDefaultAllocator<32>_>_const_&,TArray<FVector2DParameterNameAndCurves,TSizedDefaultAllocator<32>_>_>
                          (&local_688,
                           (TArray<FVector2DParameterNameAndCurves,TSizedDefaultAllocator<32>_> *)
                           &this->_padding_);
      pFVar18 = pTVar34->DataPtr;
      uVar19._0_4_ = pTVar34->ArrayNum;
      uVar19._4_4_ = *(undefined4 *)&pTVar34->field_0xc;
      pTVar35 = TArrayView<FEnumParameterNameAndCurve_const_,int>::
                TArrayView<FEnumParameterNameAndCurve_const_,int><TArray<FEnumParameterNameAndCurve,TSizedDefaultAllocator<32>_>_const_&,TArray<FEnumParameterNameAndCurve,TSizedDefaultAllocator<32>_>_>
                          (&local_668,&this->Enums);
      pFVar20 = pTVar35->DataPtr;
      uVar21._0_4_ = pTVar35->ArrayNum;
      uVar21._4_4_ = *(undefined4 *)&pTVar35->field_0xc;
      pTVar36 = TArrayView<FIntegerParameterNameAndCurve_const_,int>::
                TArrayView<FIntegerParameterNameAndCurve_const_,int><TArray<FIntegerParameterNameAndCurve,TSizedDefaultAllocator<32>_>_const_&,TArray<FIntegerParameterNameAndCurve,TSizedDefaultAllocator<32>_>_>
                          (&local_658,&this->Integers);
      pFVar22 = pTVar36->DataPtr;
      uVar23._0_4_ = pTVar36->ArrayNum;
      uVar23._4_4_ = *(undefined4 *)&pTVar36->field_0xc;
      pTVar37 = TArrayView<FBoolParameterNameAndCurve_const_,int>::
                TArrayView<FBoolParameterNameAndCurve_const_,int><TArray<FBoolParameterNameAndCurve,TSizedDefaultAllocator<32>_>_const_&,TArray<FBoolParameterNameAndCurve,TSizedDefaultAllocator<32>_>_>
                          (&local_6c8,
                           (TArray<FBoolParameterNameAndCurve,TSizedDefaultAllocator<32>_> *)
                           &this->_padding_);
      local_758.DataPtr = pTVar37->DataPtr;
      local_758.ArrayNum = pTVar37->ArrayNum;
      local_758._12_4_ = *(undefined4 *)&pTVar37->field_0xc;
      local_7a8.DataPtr = pFVar14;
      local_7a8._8_8_ = uVar15;
      local_798.DataPtr = pFVar16;
      local_798._8_8_ = uVar17;
      local_788.DataPtr = pFVar18;
      local_788._8_8_ = uVar19;
      local_778.DataPtr = pFVar20;
      local_778._8_8_ = uVar21;
      local_768.DataPtr = pFVar22;
      local_768._8_8_ = uVar23;
      local_6d8.DataPtr = pFVar12;
      local_6d8._8_8_ = uVar13;
      pTVar38 = TArrayView<FScalarParameterNameAndCurve_const_,int>::
                TArrayView<FScalarParameterNameAndCurve_const_,int><TArray<FScalarParameterNameAndCurve,TSizedDefaultAllocator<32>_>_const_&,TArray<FScalarParameterNameAndCurve,TSizedDefaultAllocator<32>_>_>
                          (&local_6b8,
                           (TArray<FScalarParameterNameAndCurve,TSizedDefaultAllocator<32>_> *)
                           &this->_padding_);
      local_748.DataPtr = pTVar38->DataPtr;
      local_748.ArrayNum = pTVar38->ArrayNum;
      local_748._12_4_ = *(undefined4 *)&pTVar38->field_0xc;
      FEvaluatedControlRigParameterSectionChannelMasks::Initialize
                (&local_488,this_00,&local_748,&local_758,&local_768,&local_778,&local_788,
                 &local_798,&local_7a8,&local_6d8);
      FEvaluatedControlRigParameterSectionValues::FEvaluatedControlRigParameterSectionValues
                (&local_378);
      EvaluateCurvesWithMasks(this,param_1,&local_488,&local_378);
      FControlRigAnimTypeIDs::Get(&local_990,(this_00->ControlRig).field0_0x0.DebugPtr);
      FVar7 = *(FOptionalMovieSceneBlendType *)((longlong)&this_00->_padding_ + 1);
      if (FVar7.bIsValid == false) {
        local_9c8 = Absolute;
      }
      else {
        local_9a8[0] = FVar7;
        local_9c8 = FOptionalMovieSceneBlendType::Get(local_9a8);
      }
      local_9b8 = UMovieSceneSection::GetBlendingOrder((UMovieSceneSection *)this_00);
      FVar39 = FMovieSceneEvaluationRange::GetTime((FMovieSceneEvaluationRange *)param_1);
      fVar70 = FMovieSceneEvalTemplate::EvaluateEasing
                         ((FMovieSceneEvalTemplate *)this,*(FFrameTime *)FVar39);
      if (((this_00->TransformMask).Mask & 0x200) != 0) {
        local_9a0[0] = 1.0;
        FVar39 = FMovieSceneEvaluationRange::GetTime((FMovieSceneEvaluationRange *)param_1);
        FMovieSceneFloatChannel::Evaluate(&this_00->Weight,*(FFrameTime *)FVar39,local_9a0);
        fVar70 = fVar70 * local_9a0[0];
      }
      iVar30 = local_378.ScalarValues.ArrayNum;
      FVar65 = (ForElementType<FScalarParameterStringAndValue>)&local_378;
      if (local_378.ScalarValues.AllocatorInstance.SecondaryData !=
          (ForElementType<FScalarParameterStringAndValue>)0x0) {
        FVar65 = local_378.ScalarValues.AllocatorInstance.SecondaryData;
      }
      FVar2 = (ForElementType<FScalarParameterStringAndValue>)
              ((longlong)FVar65 + (longlong)iVar30 * 0xc);
      while( true ) {
        if (local_378.ScalarValues.ArrayNum != iVar30) {
          local_9c7 = 0;
          `TCheckedPointerIterator<FScalarParameterStringAndValue,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_9c7);
        }
        if (FVar65 == FVar2) break;
        pFVar40 = TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Find
                            (&this_00->ControlNameMask,*(FName *)FVar65);
        if (pFVar40 == (FName *)0x0) {
          if ((local_990.Object == (FControlRigAnimTypeIDs *)0x0) &&
             (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar28)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          FControlRigAnimTypeIDs::FindImpl
                    ((FName)&local_950,
                     *(TSortedMap<FName,FMovieSceneAnimTypeID,TSizedDefaultAllocator<32>,FNameFastLess>
                       **)FVar65);
          pFVar41 = FMovieSceneInterrogationData::GetAccumulator(param_2);
          FVar24.ID = local_950.ID;
          pTVar42 = FMovieSceneBlendingAccumulator::FindActuator<FControlRigTrackTokenFloat>
                              (pFVar41,(FMovieSceneBlendingActuatorID)local_950.ID);
          if (pTVar42 == (TMovieSceneBlendingActuator<FControlRigTrackTokenFloat> *)0x0) {
            pFVar41 = FMovieSceneInterrogationData::GetAccumulator(param_2);
            pTVar43 = MakeShared<TControlRigParameterActuatorFloat,1,FMovieSceneAnimTypeID_&,FName_const_&,UMovieSceneControlRigParameterSection_const_*_&>
                                (&local_738,&local_950,(FName *)FVar65,&local_9c0);
            local_860 = pTVar43->Object;
            local_858 = (pTVar43->SharedReferenceCount).ReferenceController;
            if (local_858 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              local_858->SharedReferenceCount =
                   (atomic<int>)((int)local_858->SharedReferenceCount + 1);
              UNLOCK();
            }
            local_7f8 = &local_820;
            local_820 = (FMovieSceneBlendingActuatorID)FVar24.ID;
            local_7f0 = &local_860;
            TSet<TTuple<FMovieSceneBlendingActuatorID,TSharedRef<IMovieSceneBlendingActuator,1>_>,TDefaultMapHashableKeyFuncs<FMovieSceneBlendingActuatorID,TSharedRef<IMovieSceneBlendingActuator,1>,0>,FDefaultSetAllocator>
            ::
            Emplace<TPairInitializer<FMovieSceneBlendingActuatorID_const_&,TSharedRef<IMovieSceneBlendingActuator,1>_const_&>_>
                      ((TSet<TTuple<FMovieSceneBlendingActuatorID,TSharedRef<IMovieSceneBlendingActuator,1>_>,TDefaultMapHashableKeyFuncs<FMovieSceneBlendingActuatorID,TSharedRef<IMovieSceneBlendingActuator,1>,0>,FDefaultSetAllocator>
                        *)pFVar41,
                       (TPairInitializer<FMovieSceneBlendingActuatorID_const_&,TSharedRef<IMovieSceneBlendingActuator,1>_const_&>
                        *)local_888,(bool *)&local_7f8);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_858);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_738.SharedReferenceCount.ReferenceController);
            param_2 = local_9b0;
          }
          pFVar41 = FMovieSceneInterrogationData::GetAccumulator(param_2);
          pTVar44 = TBlendableToken<FControlRigTrackTokenFloat>::
                    TBlendableToken<FControlRigTrackTokenFloat><float_const_&>
                              (&local_4b8,(float *)((longlong)FVar65 + 8),local_9c8,fVar70,local_9b8
                              );
          local_89c.ObjectBindingID.A = 0;
          local_89c.ObjectBindingID.B = 0;
          local_89c.ObjectBindingID.C = 0;
          local_89c.ObjectBindingID.D = 0;
          local_89c.SequenceID.Value = 0;
          local_8f0.Key.SequenceID.Value = 0xffffffff;
          local_8f0.Key.TrackIdentifier.Value = 0xffffffff;
          local_8f0.Key.SectionIndex = 0xffffffff;
          local_8f0.CompletionMode = KeepState;
          FMovieSceneBlendingAccumulator::BlendToken<FControlRigTrackTokenFloat>
                    (pFVar41,&local_89c,(FMovieSceneBlendingActuatorID)FVar24.ID,&local_8f0,param_1,
                     pTVar44);
          TInlineValue<TBlendableToken<FControlRigTrackTokenFloat>::IData,4,8>::
          ~TInlineValue<TBlendableToken<FControlRigTrackTokenFloat>::IData,4,8>(&local_4b8.Value);
          param_2 = local_9b0;
        }
        FVar65 = (ForElementType<FScalarParameterStringAndValue>)((longlong)FVar65 + 0xc);
      }
      iVar30 = local_378.Vector2DValues.ArrayNum;
      local_980.Mask = 0;
      FVar66 = (ForElementType<FVector2DParameterStringAndValue>)&local_378.Vector2DValues;
      if (local_378.Vector2DValues.AllocatorInstance.SecondaryData !=
          (ForElementType<FVector2DParameterStringAndValue>)0x0) {
        FVar66 = local_378.Vector2DValues.AllocatorInstance.SecondaryData;
      }
      FVar3 = (ForElementType<FVector2DParameterStringAndValue>)
              ((longlong)FVar66 + (longlong)iVar30 * 0x18);
      while( true ) {
        if (local_378.Vector2DValues.ArrayNum != iVar30) {
          local_9c6 = 0;
          `TCheckedPointerIterator<FVector2DParameterStringAndValue,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_9c6);
        }
        if (FVar66 == FVar3) break;
        pFVar40 = TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Find
                            (&this_00->ControlNameMask,*(FName *)FVar66);
        if (pFVar40 == (FName *)0x0) {
          if ((local_990.Object == (FControlRigAnimTypeIDs *)0x0) &&
             (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar28)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          FControlRigAnimTypeIDs::FindImpl
                    ((FName)&local_948,
                     (TSortedMap<FName,FMovieSceneAnimTypeID,TSizedDefaultAllocator<32>,FNameFastLess>
                      *)*(FName *)FVar66);
          pFVar41 = FMovieSceneInterrogationData::GetAccumulator(param_2);
          FVar24.ID = local_948.ID;
          pTVar45 = FMovieSceneBlendingAccumulator::FindActuator<FControlRigTrackTokenVector>
                              (pFVar41,(FMovieSceneBlendingActuatorID)local_948.ID);
          if (pTVar45 == (TMovieSceneBlendingActuator<FControlRigTrackTokenVector> *)0x0) {
            pFVar41 = FMovieSceneInterrogationData::GetAccumulator(param_2);
            pTVar46 = MakeShared<TControlRigParameterActuatorVector2D,1,FMovieSceneAnimTypeID_&,FName_const_&,UMovieSceneControlRigParameterSection_const_*_&>
                                (&local_728,&local_948,(FName *)FVar66,&local_9c0);
            local_838 = pTVar46->Object;
            local_830 = (pTVar46->SharedReferenceCount).ReferenceController;
            if (local_830 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              local_830->SharedReferenceCount =
                   (atomic<int>)((int)local_830->SharedReferenceCount + 1);
              UNLOCK();
            }
            local_7e8 = &local_840;
            local_840 = (FMovieSceneBlendingActuatorID)FVar24.ID;
            local_7e0 = &local_838;
            TSet<TTuple<FMovieSceneBlendingActuatorID,TSharedRef<IMovieSceneBlendingActuator,1>_>,TDefaultMapHashableKeyFuncs<FMovieSceneBlendingActuatorID,TSharedRef<IMovieSceneBlendingActuator,1>,0>,FDefaultSetAllocator>
            ::
            Emplace<TPairInitializer<FMovieSceneBlendingActuatorID_const_&,TSharedRef<IMovieSceneBlendingActuator,1>_const_&>_>
                      ((TSet<TTuple<FMovieSceneBlendingActuatorID,TSharedRef<IMovieSceneBlendingActuator,1>_>,TDefaultMapHashableKeyFuncs<FMovieSceneBlendingActuatorID,TSharedRef<IMovieSceneBlendingActuator,1>,0>,FDefaultSetAllocator>
                        *)pFVar41,
                       (TPairInitializer<FMovieSceneBlendingActuatorID_const_&,TSharedRef<IMovieSceneBlendingActuator,1>_const_&>
                        *)(local_888 + 4),(bool *)&local_7e8);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_830);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_728.SharedReferenceCount.ReferenceController);
            param_2 = local_9b0;
          }
          local_980.Channels[0] = (float)(double)*(FName *)((longlong)FVar66 + 8);
          local_980.Mask = 3;
          local_980.Channels[1] = (float)(double)*(FName *)((longlong)FVar66 + 0x10);
          pFVar41 = FMovieSceneInterrogationData::GetAccumulator(param_2);
          pTVar47 = TBlendableToken<FControlRigTrackTokenVector2D>::
                    TBlendableToken<FControlRigTrackTokenVector2D><UE::MovieScene::TMultiChannelValue<float,2>_&>
                              (&local_118,&local_980,local_9c8,fVar70,local_9b8);
          local_8b0.ObjectBindingID.A = 0;
          local_8b0.ObjectBindingID.B = 0;
          local_8b0.ObjectBindingID.C = 0;
          local_8b0.ObjectBindingID.D = 0;
          local_8b0.SequenceID.Value = 0;
          local_8e0.Key.SequenceID.Value = 0xffffffff;
          local_8e0.Key.TrackIdentifier.Value = 0xffffffff;
          local_8e0.Key.SectionIndex = 0xffffffff;
          local_8e0.CompletionMode = KeepState;
          FMovieSceneBlendingAccumulator::BlendToken<FControlRigTrackTokenVector2D>
                    (pFVar41,&local_8b0,(FMovieSceneBlendingActuatorID)FVar24.ID,&local_8e0,
                     local_970,pTVar47);
          TInlineValue<TBlendableToken<FControlRigTrackTokenVector2D>::IData,16,8>::
          ~TInlineValue<TBlendableToken<FControlRigTrackTokenVector2D>::IData,16,8>
                    (&local_118.Value);
          param_2 = local_9b0;
        }
        FVar66 = (ForElementType<FVector2DParameterStringAndValue>)((longlong)FVar66 + 0x18);
      }
      local_9a4 = local_378.VectorValues.ArrayNum;
      uVar63 = (ulonglong)(int)local_9a4;
      FVar68 = (ForElementType<FVectorParameterStringAndValue>)&local_378.VectorValues;
      if (local_378.VectorValues.AllocatorInstance.SecondaryData !=
          (ForElementType<FVectorParameterStringAndValue>)0x0) {
        FVar68 = local_378.VectorValues.AllocatorInstance.SecondaryData;
      }
      FVar60 = (ForElementType<FVectorParameterStringAndValue>)(uVar63 * 0x20 + (longlong)FVar68);
      local_998 = FVar60;
      while( true ) {
        if (local_378.VectorValues.ArrayNum != (int)uVar63) {
          local_9c5 = 0;
          `TCheckedPointerIterator<FVectorParameterStringAndValue,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_9c5);
        }
        if (FVar68 == FVar60) break;
        pFVar40 = TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Find
                            (&this_00->ControlNameMask,*(FName *)FVar68);
        if (pFVar40 == (FName *)0x0) {
          if ((local_990.Object == (FControlRigAnimTypeIDs *)0x0) &&
             (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar28)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          FControlRigAnimTypeIDs::FindImpl
                    ((FName)&local_848,
                     (TSortedMap<FName,FMovieSceneAnimTypeID,TSizedDefaultAllocator<32>,FNameFastLess>
                      *)*(FName *)FVar68);
          FVar26 = local_848;
          pFVar41 = FMovieSceneInterrogationData::GetAccumulator(local_9b0);
          if (*(int *)&(pFVar41->Actuators).field_0x8 != *(int *)&(pFVar41->Actuators).field_0x34) {
            puVar8 = *(undefined1 **)&(pFVar41->Actuators).field_0x40;
            puVar59 = &(pFVar41->Actuators).field_0x38;
            if (puVar8 != (undefined1 *)0x0) {
              puVar59 = puVar8;
            }
            iVar30 = *(int *)(puVar59 +
                             (ulonglong)
                             (*(int *)&(pFVar41->Actuators).field_0x48 - 1U &
                             FVar26._4_4_ * 0x17 + FVar26._0_4_) * 4);
            if (iVar30 != -1) {
              do {
                pFVar55 = (FMovieSceneBlendingActuatorID *)
                          ((longlong)iVar30 * 0x20 + *(longlong *)&pFVar41->Actuators);
                if (*pFVar55 == FVar26) {
                  pFVar67 = pFVar55 + 1;
                  if (pFVar55 == (FMovieSceneBlendingActuatorID *)0x0) {
                    pFVar67 = (FMovieSceneBlendingActuatorID *)0x0;
                  }
                  if (pFVar67 != (FMovieSceneBlendingActuatorID *)0x0) {
                    if ((*(int *)(*(longlong *)
                                   ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                                 + 0x9d4c) < ::_TSS0) &&
                       (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
                      FMovieSceneAnimTypeID::Unique();
                      _Init_thread_footer(&::_TSS0);
                    }
                    FVar24.ID = ::TypeId.ID;
                    puVar48 = (ulong64 *)
                              (**(code **)(*(longlong *)*pFVar67 + 8))(*pFVar67,local_700);
                    if ((*puVar48 == FVar24.ID) && (*pFVar67 != (FMovieSceneBlendingActuatorID)0x0))
                    goto LAB_14a37fc33;
                  }
                  break;
                }
                iVar30 = *(int *)(pFVar55 + 3);
              } while (iVar30 != -1);
            }
          }
          pTVar61 = (TReferenceControllerBase<1> *)0x0;
          pFVar41 = FMovieSceneInterrogationData::GetAccumulator(local_9b0);
          pTVar49 = ::operator_new(0x50);
          if (pTVar49 != (TReferenceControllerBase<1> *)0x0) {
            pTVar49->SharedReferenceCount = (atomic<int>)0x1;
            pTVar49->WeakReferenceCount = (atomic<int>)0x1;
            pTVar49->_padding_ =
                 (longlong)
                 &
                 ___7__TIntrusiveReferenceController_UTControlRigParameterActuatorVector___00_SharedPointerInternals__6B_
            ;
            pTVar49[1].SharedReferenceCount = (atomic<int>)0x0;
            pTVar49[1].WeakReferenceCount = (atomic<int>)0x0;
            pTVar49[2]._padding_ = 0;
            pTVar49[2].SharedReferenceCount = (atomic<int>)0x0;
            pTVar49[2].WeakReferenceCount = (atomic<int>)0x0;
            pTVar49[3]._padding_ = 0;
            pTVar49[1]._padding_ = (longlong)&___7TControlRigParameterActuatorVector__6B_;
            *(FMovieSceneBlendingActuatorID *)&pTVar49[3].SharedReferenceCount = FVar26;
            pTVar49[4]._padding_ = (longlong)*(FName *)FVar68;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (this_00 != (UMovieSceneControlRigParameterSection *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)this_00);
            }
            pTVar49[4].SharedReferenceCount = (atomic<int>)0x0;
            pTVar49[4].WeakReferenceCount = (atomic<int>)0x0;
            local_850 = this_00;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (this_00 != (UMovieSceneControlRigParameterSection *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)this_00);
            }
            FWeakObjectPtr::operator=
                      ((FWeakObjectPtr *)&pTVar49[4].SharedReferenceCount,(FObjectPtr)&local_850);
            pTVar61 = pTVar49;
          }
          TSharedRef<TControlRigParameterActuatorVector,1>::
          TSharedRef<TControlRigParameterActuatorVector,1>
                    (&local_718,(TControlRigParameterActuatorVector *)(pTVar61 + 1),pTVar61);
          FVar27.ReferenceController = local_718.SharedReferenceCount.ReferenceController;
          local_7c8 = local_718.Object;
          pTStack_7c0 = local_718.SharedReferenceCount.ReferenceController;
          if (local_718.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_718.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_718.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
          local_7d8 = &local_828;
          local_828 = FVar26;
          local_7d0 = &local_7c8;
          TSet<TTuple<FMovieSceneBlendingActuatorID,TSharedRef<IMovieSceneBlendingActuator,1>_>,TDefaultMapHashableKeyFuncs<FMovieSceneBlendingActuatorID,TSharedRef<IMovieSceneBlendingActuator,1>,0>,FDefaultSetAllocator>
          ::
          Emplace<TPairInitializer<FMovieSceneBlendingActuatorID_const_&,TSharedRef<IMovieSceneBlendingActuator,1>_const_&>_>
                    ((TSet<TTuple<FMovieSceneBlendingActuatorID,TSharedRef<IMovieSceneBlendingActuator,1>_>,TDefaultMapHashableKeyFuncs<FMovieSceneBlendingActuatorID,TSharedRef<IMovieSceneBlendingActuator,1>,0>,FDefaultSetAllocator>
                      *)pFVar41,&local_880,(bool *)&local_7d8);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTStack_7c0);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar27.ReferenceController);
LAB_14a37fc33:
          FVar4 = *(FName *)((longlong)FVar68 + 8);
          FVar5 = *(FName *)((longlong)FVar68 + 0x10);
          FVar6 = *(FName *)((longlong)FVar68 + 0x18);
          pFVar41 = FMovieSceneInterrogationData::GetAccumulator(local_9b0);
          local_648.Value._24_1_ = local_648.Value._24_1_ | 3;
          uStack_7fc = 7;
          pIVar50 = TInlineValue<TBlendableToken<FControlRigTrackTokenVector>::IData,24,8>::GetValue
                              (&local_648.Value);
          *pIVar50 = (IData)&
                            ___7__TData_U__TMultiChannelValue_M_02_MovieScene_UE_____TBlendableToken_UFControlRigTrackTokenVector____6B_
          ;
          *(float *)(pIVar50 + 1) = (float)(double)FVar4;
          *(float *)&pIVar50[1].field_0x4 = (float)(double)FVar5;
          *(float *)(pIVar50 + 2) = (float)(double)FVar6;
          *(undefined4 *)&pIVar50[2].field_0x4 = uStack_7fc;
          local_808 = (float)(double)FVar4;
          fStack_804 = (float)(double)FVar5;
          fStack_800 = (float)(double)FVar6;
          pIVar50 = TInlineValue<TBlendableToken<FControlRigTrackTokenVector>::IData,24,8>::GetValue
                              (&local_648.Value);
          pIVar51 = TInlineValue<TBlendableToken<FControlRigTrackTokenVector>::IData,24,8>::GetValue
                              (&local_648.Value);
          if ((pIVar50 != pIVar51) &&
             (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                                  ,0xce,
                                  L"TInlineValue cannot operate with multiple inheritance objects.")
             , bVar28)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          local_648.HierarchicalBias = 0;
          local_648.BlendType = local_9c8;
          uStack_8c4 = uStack_8c4 & 0xffffff00;
          local_92c.ObjectBindingID.A = 0;
          local_92c.ObjectBindingID.B = 0;
          local_92c.ObjectBindingID.C = 0;
          local_92c.ObjectBindingID.D = 0;
          local_92c.SequenceID.Value = 0;
          local_648.BlendingOrder = local_9b8;
          local_648.AnimatingScope.Key.SequenceID.Value = 0xffffffff;
          local_648.AnimatingScope.Key.TrackIdentifier.Value = 0xffffffff;
          local_648.AnimatingScope.Key.SectionIndex = 0xffffffff;
          local_648.AnimatingScope.CompletionMode = KeepState;
          local_8d0.SequenceID.Value = 0xffffffff;
          local_8d0.TrackIdentifier.Value = 0xffffffff;
          local_8d0.SectionIndex = 0xffffffff;
          local_648.Weight = fVar70;
          pTVar45 = FMovieSceneBlendingAccumulator::FindActuator<FControlRigTrackTokenVector>
                              (pFVar41,FVar26);
          if ((pTVar45 == (TMovieSceneBlendingActuator<FControlRigTrackTokenVector> *)0x0) &&
             (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                 ("FindActuator<ActuatorDataType>(InActuatorTypeID)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\Blending\\MovieSceneBlendingAccumulator.h"
                                  ,0x42,L""), bVar28)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          local_648.AnimatingScope._12_4_ = uStack_8c4;
          local_648.AnimatingScope.Key.SectionIndex = local_8d0.SectionIndex;
          local_648.HierarchicalBias = local_970->HierarchicalBias;
          local_648.AnimatingScope.Key.SequenceID.Value = local_8d0.SequenceID.Value;
          local_648.AnimatingScope.Key.TrackIdentifier.Value = local_8d0.TrackIdentifier.Value;
          uVar29 = ::GetTypeHash(&local_92c);
          pFVar52 = TMapBase<FMovieSceneEvaluationOperand,FMovieSceneAccumulatedBlendState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationOperand,FMovieSceneAccumulatedBlendState,0>_>
                    ::FindOrAddImpl<FMovieSceneEvaluationOperand_const_&>
                              ((TMapBase<FMovieSceneEvaluationOperand,FMovieSceneAccumulatedBlendState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationOperand,FMovieSceneAccumulatedBlendState,0>_>
                                *)&pFVar41->OperandToBlendState,uVar29,&local_92c);
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
               < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
            FMovieSceneAnimTypeID::Unique();
            _Init_thread_footer(&::_TSS0);
          }
          local_598._16_8_ = ::TypeId.ID;
          local_598._8_8_ = FVar26;
          local_598._0_8_ =
               &
               ___7__TTokenEntry_UFControlRigTrackTokenVector___FMovieSceneAccumulatedBlendState__6B_
          ;
          TBlendableToken<FControlRigTrackTokenVector>::TBlendableToken<FControlRigTrackTokenVector>
                    (&local_580,&local_648);
          iVar30 = (pFVar52->TokensToBlend).ArrayNum;
          piVar1 = &(pFVar52->TokensToBlend).ArrayMax;
          if (iVar30 == *piVar1) {
            iVar30 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x888,(ForAnyElementType *)pFVar52,piVar1);
          }
          (pFVar52->TokensToBlend).ArrayNum = iVar30 + 1;
          TInlineValue<FMovieSceneAccumulatedBlendState::FTokenEntry,128,8>::
          TInlineValue<FMovieSceneAccumulatedBlendState::FTokenEntry,128,8><FMovieSceneAccumulatedBlendState::TTokenEntry<FControlRigTrackTokenVector>,void>
                    ((TInlineValue<FMovieSceneAccumulatedBlendState::FTokenEntry,128,8> *)
                     ((pFVar52->TokensToBlend).AllocatorInstance.Data + (longlong)iVar30 * 0x88),
                     (TTokenEntry<FControlRigTrackTokenVector> *)local_598);
          if (local_580.Value.bIsValid) {
            pTVar56 = &local_580;
            if (!local_580.Value.bInline) {
              pTVar56 = (TBlendableToken<FControlRigTrackTokenVector> *)
                        local_580.Value.Data.Pad._0_8_;
            }
            local_580.Value.bIsValid = false;
            (*(code *)**(undefined8 **)(pTVar56->Value).Data.Pad)(pTVar56,0);
            if (!local_580.Value.bInline) {
              FMemory::Free((void *)local_580.Value.Data.Pad._0_8_);
            }
          }
          local_598._0_8_ = &___7FTokenEntry_FMovieSceneAccumulatedBlendState__6B_;
          FVar60 = local_998;
          if (local_648.Value.bIsValid) {
            pTVar56 = &local_648;
            if (!local_648.Value.bInline) {
              pTVar56 = (TBlendableToken<FControlRigTrackTokenVector> *)
                        local_648.Value.Data.Pad._0_8_;
            }
            local_648.Value.bIsValid = false;
            (**(code **)&(*(TBlendableToken<FControlRigTrackTokenVector> **)
                           (pTVar56->Value).Data.Pad)->Value)(pTVar56,0);
            FVar60 = local_998;
            if (!local_648.Value.bInline) {
              FMemory::Free((void *)local_648.Value.Data.Pad._0_8_);
              FVar60 = local_998;
            }
          }
        }
        FVar68 = (ForElementType<FVectorParameterStringAndValue>)((longlong)FVar68 + 0x20);
        uVar63 = (ulonglong)local_9a4;
      }
      uVar63 = (ulonglong)local_378.TransformValues.ArrayNum;
      FVar64 = (ForElementType<FEulerTransformParameterStringAndValue>)&local_378.TransformValues;
      if (local_378.TransformValues.AllocatorInstance.SecondaryData !=
          (ForElementType<FEulerTransformParameterStringAndValue>)0x0) {
        FVar64 = local_378.TransformValues.AllocatorInstance.SecondaryData;
      }
      local_8f8 = local_8f8 & 0xffffffff;
      local_998._0_4_ = local_378.TransformValues.ArrayNum;
      FVar62 = (ForElementType<FEulerTransformParameterStringAndValue>)
               (uVar63 * 0x50 + (longlong)FVar64);
      local_968 = FVar62;
      while( true ) {
        uVar29 = local_8f8._4_4_;
        local_9a4 = local_8f8._4_4_;
        if (local_378.TransformValues.ArrayNum != (int)uVar63) {
          local_9c4[0] = 0;
          `TCheckedPointerIterator<FEulerTransformParameterStringAndValue,int,0>::operator!='::__l2
          ::<lambda_1>::operator()(local_9c4);
        }
        if (FVar64 == FVar62) break;
        pFVar40 = TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Find
                            (&this_00->ControlNameMask,*(FName *)FVar64);
        if (pFVar40 == (FName *)0x0) {
          if ((local_990.Object == (FControlRigAnimTypeIDs *)0x0) &&
             (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar28)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          FControlRigAnimTypeIDs::FindImpl
                    ((FName)&local_880.Value,
                     (TSortedMap<FName,FMovieSceneAnimTypeID,TSizedDefaultAllocator<32>,FNameFastLess>
                      *)*(FName *)FVar64);
          pTVar25 = local_880.Value;
          this_01 = local_9b0;
          pFVar41 = FMovieSceneInterrogationData::GetAccumulator(local_9b0);
          if (*(int *)&(pFVar41->Actuators).field_0x8 != *(int *)&(pFVar41->Actuators).field_0x34) {
            puVar8 = *(undefined1 **)&(pFVar41->Actuators).field_0x40;
            puVar59 = &(pFVar41->Actuators).field_0x38;
            if (puVar8 != (undefined1 *)0x0) {
              puVar59 = puVar8;
            }
            iVar30 = *(int *)(puVar59 +
                             (ulonglong)
                             (*(int *)&(pFVar41->Actuators).field_0x48 - 1U &
                             (int)((ulonglong)pTVar25 >> 0x20) * 0x17 + (int)pTVar25) * 4);
            if (iVar30 != -1) {
              do {
                pFVar55 = (FMovieSceneBlendingActuatorID *)
                          ((longlong)iVar30 * 0x20 + *(longlong *)&pFVar41->Actuators);
                if (*pFVar55 == (FMovieSceneBlendingActuatorID)pTVar25) {
                  pFVar67 = pFVar55 + 1;
                  if (pFVar55 == (FMovieSceneBlendingActuatorID *)0x0) {
                    pFVar67 = (FMovieSceneBlendingActuatorID *)0x0;
                  }
                  if (pFVar67 != (FMovieSceneBlendingActuatorID *)0x0) {
                    if ((*(int *)(*(longlong *)
                                   ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                                 + 0x9d4c) < ::_TSS0) &&
                       (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
                      FMovieSceneAnimTypeID::Unique();
                      _Init_thread_footer(&::_TSS0);
                    }
                    FVar24.ID = ::TypeId.ID;
                    puVar48 = (ulong64 *)
                              (**(code **)(*(longlong *)*pFVar67 + 8))(*pFVar67,local_6f8);
                    if ((*puVar48 == FVar24.ID) && (*pFVar67 != (FMovieSceneBlendingActuatorID)0x0))
                    goto LAB_14a3802fb;
                  }
                  break;
                }
                iVar30 = *(int *)(pFVar55 + 3);
              } while (iVar30 != -1);
            }
          }
          pTVar61 = (TReferenceControllerBase<1> *)0x0;
          pFVar41 = FMovieSceneInterrogationData::GetAccumulator(this_01);
          pTVar49 = ::operator_new(0x50);
          if (pTVar49 == (TReferenceControllerBase<1> *)0x0) {
            pTVar69 = (TReferenceControllerBase<1> *)&DAT_00000010;
LAB_14a380229:
            lVar9._0_4_ = pTVar69->SharedReferenceCount;
            lVar9._4_4_ = pTVar69->WeakReferenceCount;
            if (((lVar9 == 0) || (pTVar69[1]._padding_ == 0)) ||
               (*(int *)(pTVar69[1]._padding_ + 8) < 1)) {
              if (pTVar61 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                pTVar61->SharedReferenceCount =
                     (atomic<int>)((int)pTVar61->SharedReferenceCount + 1);
                UNLOCK();
              }
              *(TReferenceControllerBase<1> **)&pTVar69->SharedReferenceCount = pTVar69;
              if (pTVar61 != (TReferenceControllerBase<1> *)pTVar69[1]._padding_) {
                if (pTVar61 != (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  pTVar61->WeakReferenceCount = (atomic<int>)((int)pTVar61->WeakReferenceCount + 1);
                  UNLOCK();
                }
                plVar10 = (longlong *)pTVar69[1]._padding_;
                if (plVar10 != (longlong *)0x0) {
                  LOCK();
                  piVar1 = (int *)((longlong)plVar10 + 0xc);
                  iVar30 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar30 == 1) {
                    (**(code **)(*plVar10 + 8))(plVar10,1);
                  }
                }
                pTVar69[1]._padding_ = (longlong)pTVar61;
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar61);
            }
          }
          else {
            pTVar49->SharedReferenceCount = (atomic<int>)0x1;
            pTVar49->WeakReferenceCount = (atomic<int>)0x1;
            pTVar49->_padding_ =
                 (longlong)
                 &
                 ___7__TIntrusiveReferenceController_UTControlRigParameterActuatorTransform___00_SharedPointerInternals__6B_
            ;
            pTVar49[1].SharedReferenceCount = (atomic<int>)0x0;
            pTVar49[1].WeakReferenceCount = (atomic<int>)0x0;
            pTVar49[2]._padding_ = 0;
            pTVar49[2].SharedReferenceCount = (atomic<int>)0x0;
            pTVar49[2].WeakReferenceCount = (atomic<int>)0x0;
            pTVar49[3]._padding_ = 0;
            pTVar49[1]._padding_ = (longlong)&___7TControlRigParameterActuatorTransform__6B_;
            *(TSharedRef<IMovieSceneBlendingActuator,1> **)&pTVar49[3].SharedReferenceCount =
                 pTVar25;
            pTVar49[4]._padding_ = (longlong)*(FName *)FVar64;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (this_00 != (UMovieSceneControlRigParameterSection *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)this_00);
            }
            pTVar49[4].SharedReferenceCount = (atomic<int>)0x0;
            pTVar49[4].WeakReferenceCount = (atomic<int>)0x0;
            local_870 = this_00;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (this_00 != (UMovieSceneControlRigParameterSection *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)this_00);
            }
            FWeakObjectPtr::operator=
                      ((FWeakObjectPtr *)&pTVar49[4].SharedReferenceCount,(FObjectPtr)&local_870);
            pTVar69 = pTVar49 + 1;
            pTVar61 = pTVar49;
            if (pTVar69 != (TReferenceControllerBase<1> *)0x0) goto LAB_14a380229;
            bVar28 = ::FDebug::CheckVerifyFailedImpl2
                               ("InObject != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x246,L"");
            if (bVar28) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
          }
          if (pTVar61 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar61->SharedReferenceCount = (atomic<int>)((int)pTVar61->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_7b8 = &local_868;
          local_868 = (FMovieSceneBlendingActuatorID)pTVar25;
          local_7b0 = &local_960;
          local_960 = pTVar69;
          local_958 = pTVar61;
          TSet<TTuple<FMovieSceneBlendingActuatorID,TSharedRef<IMovieSceneBlendingActuator,1>_>,TDefaultMapHashableKeyFuncs<FMovieSceneBlendingActuatorID,TSharedRef<IMovieSceneBlendingActuator,1>,0>,FDefaultSetAllocator>
          ::
          Emplace<TPairInitializer<FMovieSceneBlendingActuatorID_const_&,TSharedRef<IMovieSceneBlendingActuator,1>_const_&>_>
                    ((TSet<TTuple<FMovieSceneBlendingActuatorID,TSharedRef<IMovieSceneBlendingActuator,1>_>,TDefaultMapHashableKeyFuncs<FMovieSceneBlendingActuatorID,TSharedRef<IMovieSceneBlendingActuator,1>,0>,FDefaultSetAllocator>
                      *)pFVar41,&local_818,(bool *)&local_7b8);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_958);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar61);
          this_01 = local_9b0;
          uVar29 = local_9a4;
LAB_14a3802fb:
          FVar4 = *(FName *)((longlong)FVar64 + 0x48);
          fVar75 = (float)(double)*(FName *)((longlong)FVar64 + 8);
          local_8f8 = CONCAT44(uVar29,(undefined4)local_8f8) | 0x1ff00000000;
          fVar71 = (float)(double)*(FName *)((longlong)FVar64 + 0x10);
          fVar72 = (float)(double)*(FName *)((longlong)FVar64 + 0x18);
          fVar73 = (float)(double)*(FName *)((longlong)FVar64 + 0x30);
          fVar78 = (float)(double)*(FName *)((longlong)FVar64 + 0x20);
          fVar74 = (float)(double)*(FName *)((longlong)FVar64 + 0x28);
          fVar76 = (float)(double)*(FName *)((longlong)FVar64 + 0x38);
          fVar77 = (float)(double)*(FName *)((longlong)FVar64 + 0x40);
          pFVar41 = FMovieSceneInterrogationData::GetAccumulator(this_01);
          local_5c0 = local_5c0 | 3;
          local_608._0_8_ =
               &
               ___7__TData_U__TMultiChannelValue_M_08_MovieScene_UE_____TBlendableToken_UFControlRigTrackTokenTransform____6B_
          ;
          local_8f8 = CONCAT44((int)(local_8f8 >> 0x20),(float)(double)FVar4);
          local_918 = fVar75;
          fStack_914 = fVar71;
          fStack_910 = fVar72;
          fStack_90c = fVar73;
          local_908 = fVar78;
          fStack_904 = fVar74;
          fStack_900 = fVar76;
          fStack_8fc = fVar77;
          local_608._8_4_ = fVar75;
          fStack_5fc = fVar71;
          fStack_5f8 = fVar72;
          fStack_5f4 = fVar73;
          local_5f0 = fVar78;
          fStack_5ec = fVar74;
          fStack_5e8 = fVar76;
          fStack_5e4 = fVar77;
          local_5e0 = local_8f8;
          if (((local_5c0 & 1) == 0) &&
             (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                 ("bIsValid",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                                  ,0x97,
                                  L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                                 ), bVar28)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          ppuVar58 = (undefined **)local_608;
          if ((local_5c0 & 2) == 0) {
            ppuVar58 = (undefined **)local_608._0_8_;
          }
          if (((local_5c0 & 1) == 0) &&
             (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                 ("bIsValid",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                                  ,0x97,
                                  L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                                 ), bVar28)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          ppuVar53 = (undefined **)local_608;
          if ((local_5c0 & 2) == 0) {
            ppuVar53 = (undefined **)local_608._0_8_;
          }
          if ((ppuVar58 != ppuVar53) &&
             (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                                  ,0xce,
                                  L"TInlineValue cannot operate with multiple inheritance objects.")
             , bVar28)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          local_5a8 = 0;
          local_5a0 = local_9c8;
          uStack_8b4 = uStack_8b4 & 0xffffff00;
          local_940.ObjectBindingID.A = 0;
          local_940.ObjectBindingID.B = 0;
          local_940.ObjectBindingID.C = 0;
          local_940.ObjectBindingID.D = 0;
          local_940.SequenceID.Value = 0;
          local_59c = local_9b8;
          local_5b8._0_4_ = 0xffffffff;
          local_5b8._4_4_ = 0xffffffff;
          local_5b8._8_5_ = 0xffffffff;
          local_8c0.SequenceID.Value = 0xffffffff;
          local_8c0.TrackIdentifier.Value = 0xffffffff;
          local_8c0.SectionIndex = 0xffffffff;
          local_5a4 = fVar70;
          pTVar54 = FMovieSceneBlendingAccumulator::FindActuator<FControlRigTrackTokenTransform>
                              (pFVar41,(FMovieSceneBlendingActuatorID)pTVar25);
          if ((pTVar54 == (TMovieSceneBlendingActuator<FControlRigTrackTokenTransform> *)0x0) &&
             (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                 ("FindActuator<ActuatorDataType>(InActuatorTypeID)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\Blending\\MovieSceneBlendingAccumulator.h"
                                  ,0x42,L""), bVar28)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          local_5b8._12_4_ = uStack_8b4;
          local_5b8._8_4_ = local_8c0.SectionIndex;
          local_5a8 = local_970->HierarchicalBias;
          local_5b8._0_4_ = local_8c0.SequenceID.Value;
          local_5b8._4_4_ = local_8c0.TrackIdentifier.Value;
          uVar29 = ::GetTypeHash(&local_940);
          pFVar52 = TMapBase<FMovieSceneEvaluationOperand,FMovieSceneAccumulatedBlendState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationOperand,FMovieSceneAccumulatedBlendState,0>_>
                    ::FindOrAddImpl<FMovieSceneEvaluationOperand_const_&>
                              ((TMapBase<FMovieSceneEvaluationOperand,FMovieSceneAccumulatedBlendState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationOperand,FMovieSceneAccumulatedBlendState,0>_>
                                *)&pFVar41->OperandToBlendState,uVar29,&local_940);
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
               < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
            FMovieSceneAnimTypeID::Unique();
            _Init_thread_footer(&::_TSS0);
          }
          local_540._16_8_ = ::TypeId.ID;
          local_540._8_8_ = pTVar25;
          local_540._0_8_ =
               &
               ___7__TTokenEntry_UFControlRigTrackTokenTransform___FMovieSceneAccumulatedBlendState__6B_
          ;
          TBlendableToken<FControlRigTrackTokenTransform>::
          TBlendableToken<FControlRigTrackTokenTransform>
                    (&local_528,(TBlendableToken<FControlRigTrackTokenTransform> *)local_608);
          iVar30 = (pFVar52->TokensToBlend).ArrayNum;
          piVar1 = &(pFVar52->TokensToBlend).ArrayMax;
          if (iVar30 == *piVar1) {
            iVar30 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x888,(ForAnyElementType *)pFVar52,piVar1);
          }
          (pFVar52->TokensToBlend).ArrayNum = iVar30 + 1;
          TInlineValue<FMovieSceneAccumulatedBlendState::FTokenEntry,128,8>::
          TInlineValue<FMovieSceneAccumulatedBlendState::FTokenEntry,128,8><FMovieSceneAccumulatedBlendState::TTokenEntry<FControlRigTrackTokenTransform>,void>
                    ((TInlineValue<FMovieSceneAccumulatedBlendState::FTokenEntry,128,8> *)
                     ((pFVar52->TokensToBlend).AllocatorInstance.Data + (longlong)iVar30 * 0x88),
                     (TTokenEntry<FControlRigTrackTokenTransform> *)local_540);
          if (local_528.Value.bIsValid) {
            pTVar57 = &local_528;
            if (!local_528.Value.bInline) {
              pTVar57 = (TBlendableToken<FControlRigTrackTokenTransform> *)
                        local_528.Value.Data.Pad._0_8_;
            }
            local_528.Value.bIsValid = false;
            (*(code *)**(undefined8 **)(pTVar57->Value).Data.Pad)(pTVar57,0);
            if (!local_528.Value.bInline) {
              FMemory::Free((void *)local_528.Value.Data.Pad._0_8_);
            }
          }
          local_540._0_8_ = &___7FTokenEntry_FMovieSceneAccumulatedBlendState__6B_;
          FVar62 = local_968;
          if ((local_5c0 & 1) != 0) {
            ppuVar58 = (undefined **)local_608;
            if ((local_5c0 & 2) == 0) {
              ppuVar58 = (undefined **)local_608._0_8_;
            }
            local_5c0 = local_5c0 & 0xfe;
            (**(code **)*ppuVar58)(ppuVar58,0);
            FVar62 = local_968;
            if ((local_5c0 & 2) == 0) {
              FMemory::Free((void *)local_608._0_8_);
              FVar62 = local_968;
            }
          }
        }
        FVar64 = (ForElementType<FEulerTransformParameterStringAndValue>)((longlong)FVar64 + 0x50);
        uVar63 = (ulonglong)local_998 & 0xffffffff;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_990.SharedReferenceCount.ReferenceController);
      FEvaluatedControlRigParameterSectionValues::~FEvaluatedControlRigParameterSectionValues
                (&local_378);
      if (local_488.TransformCurveMask.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_488.TransformCurveMask.AllocatorInstance.SecondaryData);
      }
      if (local_488.ColorCurveMask.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_488.ColorCurveMask.AllocatorInstance.SecondaryData);
      }
      if (local_488.VectorCurveMask.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_488.VectorCurveMask.AllocatorInstance.SecondaryData);
      }
      if (local_488.Vector2DCurveMask.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_488.Vector2DCurveMask.AllocatorInstance.SecondaryData);
      }
      if (local_488.EnumCurveMask.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_488.EnumCurveMask.AllocatorInstance.SecondaryData);
      }
      if (local_488.IntegerCurveMask.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_488.IntegerCurveMask.AllocatorInstance.SecondaryData);
      }
      if (local_488.BoolCurveMask.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_488.BoolCurveMask.AllocatorInstance.SecondaryData);
      }
      if (local_488.ScalarCurveMask.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_488.ScalarCurveMask.AllocatorInstance.SecondaryData);
      }
    }
  }
  return;
}

// FMovieSceneControlRigParameterTemplate @ 14a3b71c0

FMovieSceneControlRigParameterTemplate * __thiscall
FMovieSceneControlRigParameterTemplate::FMovieSceneControlRigParameterTemplate
          (FMovieSceneControlRigParameterTemplate *this,
          FMovieSceneControlRigParameterTemplate *param_1)

{
  this->_padding_ = (longlong)&___7FMovieSceneEvalTemplateBase__6B_;
  *(char *)&this->_padding_ = (char)param_1->_padding_;
  this->_padding_ = (longlong)&___7FMovieSceneEvalTemplate__6B_;
  *(char *)&this->_padding_ = (char)param_1->_padding_;
  *(undefined8 *)((longlong)&this->_padding_ + 4) =
       *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  this->_padding_ = (longlong)&___7FMovieSceneParameterSectionTemplate__6B_;
  this->_padding_ = 0;
  this->_padding_ = param_1->_padding_;
  param_1->_padding_ = 0;
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  param_1->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = param_1->_padding_;
  param_1->_padding_ = 0;
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  param_1->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = param_1->_padding_;
  param_1->_padding_ = 0;
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  param_1->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = param_1->_padding_;
  param_1->_padding_ = 0;
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  param_1->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = param_1->_padding_;
  param_1->_padding_ = 0;
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  param_1->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = param_1->_padding_;
  param_1->_padding_ = 0;
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  param_1->_padding_ = 0;
  this->_padding_ = (longlong)&___7FMovieSceneControlRigParameterTemplate__6B_;
  (this->Enums).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Enums).AllocatorInstance.Data = (param_1->Enums).AllocatorInstance.Data;
  (param_1->Enums).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Enums).ArrayNum = (param_1->Enums).ArrayNum;
  (this->Enums).ArrayMax = (param_1->Enums).ArrayMax;
  (param_1->Enums).ArrayNum = 0;
  (param_1->Enums).ArrayMax = 0;
  (this->Integers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Integers).AllocatorInstance.Data = (param_1->Integers).AllocatorInstance.Data;
  (param_1->Integers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Integers).ArrayNum = (param_1->Integers).ArrayNum;
  (this->Integers).ArrayMax = (param_1->Integers).ArrayMax;
  (param_1->Integers).ArrayNum = 0;
  (param_1->Integers).ArrayMax = 0;
  (this->Spaces).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Spaces).AllocatorInstance.Data = (param_1->Spaces).AllocatorInstance.Data;
  (param_1->Spaces).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Spaces).ArrayNum = (param_1->Spaces).ArrayNum;
  (this->Spaces).ArrayMax = (param_1->Spaces).ArrayMax;
  (param_1->Spaces).ArrayNum = 0;
  (param_1->Spaces).ArrayMax = 0;
  (this->Constraints).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Constraints).AllocatorInstance.Data = (param_1->Constraints).AllocatorInstance.Data;
  (param_1->Constraints).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Constraints).ArrayNum = (param_1->Constraints).ArrayNum;
  (this->Constraints).ArrayMax = (param_1->Constraints).ArrayMax;
  (param_1->Constraints).ArrayNum = 0;
  (param_1->Constraints).ArrayMax = 0;
  return this;
}

// FMovieSceneControlRigParameterTemplate @ 14a3b73c0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FMovieSceneControlRigParameterTemplate * __thiscall
FMovieSceneControlRigParameterTemplate::FMovieSceneControlRigParameterTemplate
          (FMovieSceneControlRigParameterTemplate *this,
          UMovieSceneControlRigParameterSection *param_1,
          UMovieSceneControlRigParameterTrack *param_2)

{
  int *piVar1;
  TArray<FEnumParameterNameAndCurve,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FIntegerParameterNameAndCurve,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FSpaceControlNameAndChannel,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<FConstraintAndActiveChannel,TSizedDefaultAllocator<32>_> *pTVar5;
  int iVar6;
  FEnumParameterNameAndCurve *pFVar7;
  FIntegerParameterNameAndCurve *pFVar8;
  FSpaceControlNameAndChannel *pFVar9;
  FConstraintAndActiveChannel *pFVar10;
  
  FMovieSceneParameterSectionTemplate::FMovieSceneParameterSectionTemplate
            ((FMovieSceneParameterSectionTemplate *)this,(UMovieSceneParameterSection *)param_1);
  pTVar2 = &this->Enums;
  this->_padding_ = (longlong)&___7FMovieSceneControlRigParameterTemplate__6B_;
  piVar1 = &(this->Enums).ArrayMax;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar6 = (param_1->EnumParameterNamesAndCurves).ArrayNum;
  pFVar7 = (FEnumParameterNameAndCurve *)
           (param_1->EnumParameterNamesAndCurves).AllocatorInstance.Data;
  (this->Enums).ArrayNum = iVar6;
  if (iVar6 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x130,8,iVar6,0,&pTVar2->AllocatorInstance,iVar6,piVar1);
    ConstructItems<FEnumParameterNameAndCurve,FEnumParameterNameAndCurve,int>
              ((pTVar2->AllocatorInstance).Data,pFVar7,iVar6);
  }
  pTVar3 = &this->Integers;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Integers).ArrayMax;
  iVar6 = (param_1->IntegerParameterNamesAndCurves).ArrayNum;
  pFVar8 = (FIntegerParameterNameAndCurve *)
           (param_1->IntegerParameterNamesAndCurves).AllocatorInstance.Data;
  (this->Integers).ArrayNum = iVar6;
  if (iVar6 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x128,8,iVar6,0,&pTVar3->AllocatorInstance,iVar6,piVar1);
    ConstructItems<FIntegerParameterNameAndCurve,FIntegerParameterNameAndCurve,int>
              ((pTVar3->AllocatorInstance).Data,pFVar8,iVar6);
  }
  pTVar4 = &this->Spaces;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Spaces).ArrayMax;
  iVar6 = (param_1->SpaceChannels).ArrayNum;
  pFVar9 = (FSpaceControlNameAndChannel *)(param_1->SpaceChannels).AllocatorInstance.Data;
  (this->Spaces).ArrayNum = iVar6;
  if (iVar6 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x150,8,iVar6,0,&pTVar4->AllocatorInstance,iVar6,piVar1);
    ConstructItems<FSpaceControlNameAndChannel,FSpaceControlNameAndChannel,int>
              ((pTVar4->AllocatorInstance).Data,pFVar9,iVar6);
  }
  pTVar5 = &this->Constraints;
  (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Constraints).ArrayMax;
  iVar6 = (param_1->ConstraintsChannels).ArrayNum;
  pFVar10 = (FConstraintAndActiveChannel *)(param_1->ConstraintsChannels).AllocatorInstance.Data;
  (this->Constraints).ArrayNum = iVar6;
  if (iVar6 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x128,8,iVar6,0,&pTVar5->AllocatorInstance,iVar6,piVar1);
    ConstructItems<FConstraintAndActiveChannel,FConstraintAndActiveChannel,int>
              ((pTVar5->AllocatorInstance).Data,pFVar10,iVar6);
  }
  return this;
}

// ~FMovieSceneControlRigParameterTemplate @ 14a3bcb20

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FMovieSceneControlRigParameterTemplate::~FMovieSceneControlRigParameterTemplate
          (FMovieSceneControlRigParameterTemplate *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FConstraintAndActiveChannel,int>
            ((FConstraintAndActiveChannel *)(this->Constraints).AllocatorInstance.Data,
             (this->Constraints).ArrayNum);
  pFVar1 = (this->Constraints).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FSpaceControlNameAndChannel,int>
            ((FSpaceControlNameAndChannel *)(this->Spaces).AllocatorInstance.Data,
             (this->Spaces).ArrayNum);
  pFVar1 = (this->Spaces).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FIntegerParameterNameAndCurve,int>
            ((FIntegerParameterNameAndCurve *)(this->Integers).AllocatorInstance.Data,
             (this->Integers).ArrayNum);
  pFVar1 = (this->Integers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FEnumParameterNameAndCurve,int>
            ((FEnumParameterNameAndCurve *)(this->Enums).AllocatorInstance.Data,
             (this->Enums).ArrayNum);
  pFVar1 = (this->Enums).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FMovieSceneParameterSectionTemplate::~FMovieSceneParameterSectionTemplate
            ((FMovieSceneParameterSectionTemplate *)this);
  return;
}

// EvaluateCurvesWithMasks @ 14a405490

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FMovieSceneControlRigParameterTemplate::EvaluateCurvesWithMasks
          (FMovieSceneControlRigParameterTemplate *this,FMovieSceneContext *param_1,
          FEvaluatedControlRigParameterSectionChannelMasks *param_2,
          FEvaluatedControlRigParameterSectionValues *param_3)

{
  int *piVar1;
  int *piVar2;
  undefined8 *puVar3;
  FOptionalMovieSceneBlendType FVar4;
  ForElementType<unsigned_int> FVar5;
  ForElementType<FScalarParameterStringAndValue> FVar6;
  undefined8 uVar7;
  ForElementType<FConstraintAndActiveValue> FVar8;
  ForElementType<FVector2DParameterStringAndValue> FVar9;
  ForElementType<FVectorParameterStringAndValue> FVar10;
  ForElementType<FColorParameterStringAndValue> FVar11;
  ForElementType<FEulerTransformParameterStringAndValue> FVar12;
  code *pcVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  FFrameTime FVar17;
  FScriptContainerElement FVar18;
  uchar uVar19;
  bool bVar20;
  EMovieSceneBlendType EVar21;
  bool bVar22;
  int iVar23;
  FFrameNumber FVar24;
  uint uVar25;
  UObject *pUVar26;
  float *pfVar27;
  longlong lVar28;
  longlong *plVar29;
  longlong lVar30;
  ForElementType<unsigned_int> FVar31;
  ForElementType<FScalarParameterStringAndValue> FVar32;
  ForElementType<FControlSpaceAndValue> FVar33;
  ForElementType<FIntegerParameterStringAndValue> FVar34;
  ForElementType<FVector2DParameterStringAndValue> FVar35;
  ForElementType<FVectorParameterStringAndValue> FVar36;
  ForElementType<FColorParameterStringAndValue> FVar37;
  ForElementType<FEulerTransformParameterStringAndValue> FVar38;
  FScriptContainerElement *pFVar39;
  FFrameTime FVar40;
  uint uVar41;
  ForElementType<FBoolParameterStringAndValue> FVar42;
  ForElementType<FControlSpaceAndValue> FVar43;
  undefined4 uVar44;
  longlong lVar45;
  ForElementType<FConstraintAndActiveValue> FVar46;
  uint uVar47;
  int *piVar48;
  undefined1 local_197;
  FScriptContainerElement local_196;
  char local_195;
  FFrameNumber local_190;
  float fStack_18c;
  uchar local_188 [8];
  undefined8 local_180;
  float local_178 [2];
  float local_170 [4];
  float local_160 [4];
  FOptionalMovieSceneBlendType local_150 [2];
  float local_14c;
  uint local_148;
  float local_140 [6];
  uint local_128;
  undefined4 uStack_124;
  ForElementType<FIntegerParameterStringAndValue> local_120;
  undefined1 local_118 [4];
  float fStack_114;
  undefined8 uStack_110;
  FWeakObjectPtr local_108;
  UObject *local_100;
  TOptional<float> local_f8;
  ForElementType<FBoolParameterStringAndValue> local_f0;
  long64 local_e8;
  FMovieSceneControlRigSpaceBaseKey local_e0;
  ForElementType<FControlSpaceAndValue> local_d0;
  UObject *local_c8 [2];
  undefined8 local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  
  FMovieSceneEvaluationRange::GetTime((FMovieSceneEvaluationRange *)param_1);
  pUVar26 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&this->_padding_ + 4));
  if (pUVar26 == (UObject *)0x0) {
    return;
  }
  local_100 = pUVar26;
  bVar20 = UObjectBaseUtility::IsA<UMovieSceneControlRigParameterSection>
                     ((UObjectBaseUtility *)pUVar26);
  if (!bVar20) {
    return;
  }
  uVar41 = (uint)this->_padding_;
  if ((int)uVar41 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar41);
  }
  piVar1 = &(param_3->ScalarValues).ArrayMax;
  if ((param_3->ScalarValues).ArrayMax < (int)uVar41) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FScalarParameterStringAndValue>_>
              (0xc,4,uVar41,(ForElementType<FScalarParameterStringAndValue> *)param_3,
               (param_3->ScalarValues).ArrayNum,piVar1);
  }
  uVar41 = (uint)this->_padding_;
  local_f0 = (ForElementType<FBoolParameterStringAndValue>)&param_3->BoolValues;
  if ((int)uVar41 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar41);
  }
  piVar48 = &(param_3->BoolValues).ArrayMax;
  if (*piVar48 < (int)uVar41) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FBoolParameterStringAndValue>_>
              (0xc,4,uVar41,(ForElementType<FBoolParameterStringAndValue> *)local_f0,
               (param_3->BoolValues).ArrayNum,piVar48);
  }
  uVar41 = (this->Spaces).ArrayNum;
  FVar43 = (ForElementType<FControlSpaceAndValue>)&param_3->SpaceValues;
  local_d0 = FVar43;
  if ((int)uVar41 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar41);
  }
  piVar48 = &(param_3->SpaceValues).ArrayMax;
  if ((param_3->SpaceValues).ArrayMax < (int)uVar41) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FControlSpaceAndValue>_>
              (0x18,4,uVar41,(ForElementType<FControlSpaceAndValue> *)FVar43,
               (param_3->SpaceValues).ArrayNum,piVar48);
  }
  local_120 = (ForElementType<FIntegerParameterStringAndValue>)&param_3->IntegerValues;
  uVar41 = (this->Integers).ArrayNum + (this->Enums).ArrayNum;
  if ((int)uVar41 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar41);
  }
  if ((param_3->IntegerValues).ArrayMax < (int)uVar41) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FIntegerParameterStringAndValue>_>
              (0xc,4,uVar41,(ForElementType<FIntegerParameterStringAndValue> *)local_120,
               (param_3->IntegerValues).ArrayNum,&(param_3->IntegerValues).ArrayMax);
  }
  uVar41 = (uint)this->_padding_;
  if ((int)uVar41 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar41);
  }
  if ((param_3->Vector2DValues).ArrayMax < (int)uVar41) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FVector2DParameterStringAndValue>_>
              (0x18,8,uVar41,&(param_3->Vector2DValues).AllocatorInstance,
               (param_3->Vector2DValues).ArrayNum,&(param_3->Vector2DValues).ArrayMax);
  }
  uVar41 = (uint)this->_padding_;
  if ((int)uVar41 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar41);
  }
  if ((param_3->VectorValues).ArrayMax < (int)uVar41) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FVectorParameterStringAndValue>_>
              (0x20,8,uVar41,&(param_3->VectorValues).AllocatorInstance,
               (param_3->VectorValues).ArrayNum,&(param_3->VectorValues).ArrayMax);
  }
  uVar41 = (uint)this->_padding_;
  if ((int)uVar41 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar41);
  }
  if ((param_3->ColorValues).ArrayMax < (int)uVar41) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FColorParameterStringAndValue>_>
              (0x18,4,uVar41,&(param_3->ColorValues).AllocatorInstance,
               (param_3->ColorValues).ArrayNum,&(param_3->ColorValues).ArrayMax);
  }
  uVar41 = (uint)this->_padding_;
  if ((int)uVar41 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar41);
  }
  piVar2 = &(param_3->TransformValues).ArrayMax;
  if (*piVar2 < (int)uVar41) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FEulerTransformParameterStringAndValue>_>
              (0x50,8,uVar41,&(param_3->TransformValues).AllocatorInstance,
               (param_3->TransformValues).ArrayNum,piVar2);
  }
  uVar41 = (this->Constraints).ArrayNum;
  if ((int)uVar41 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar41);
  }
  piVar2 = &(param_3->ConstraintsValues).ArrayMax;
  if (*piVar2 < (int)uVar41) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FConstraintAndActiveValue>_>
              (0xc,4,uVar41,&(param_3->ConstraintsValues).AllocatorInstance,
               (param_3->ConstraintsValues).ArrayNum,piVar2);
  }
  FVar4.BlendType = pUVar26[6].field_0x1;
  FVar4.bIsValid = (bool)pUVar26[6].field_0x2;
  if ((FVar4.bIsValid == false) || (FVar4.BlendType != Additive)) {
    local_195 = '\0';
    if (FVar4.bIsValid != false) goto LAB_14a405758;
  }
  else {
    local_195 = '\x01';
LAB_14a405758:
    local_150[0] = FVar4;
    EVar21 = FOptionalMovieSceneBlendType::Get(local_150);
    bVar20 = true;
    if (EVar21 == Absolute) goto LAB_14a405775;
  }
  bVar20 = false;
LAB_14a405775:
  FVar24.Value = local_190.Value;
  uVar41 = 0;
  FVar40.SubFrame = fStack_18c;
  FVar40.FrameNumber.Value = local_190.Value;
  local_148 = 1;
  if (0 < (int)this->_padding_) {
    local_128 = 1;
    lVar45 = 0;
    do {
      uVar47 = 0;
      if ((int)uVar41 < (int)this->_padding_) {
        uVar47 = ~uVar41 >> 0x1f;
      }
      if ((uVar47 == 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      lVar30 = this->_padding_;
      local_14c = 0.0;
      if ((((int)uVar41 < 0) || ((param_2->ScalarCurveMask).NumBits <= (int)uVar41)) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5be,L""), bVar22)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      FVar5 = (param_2->ScalarCurveMask).AllocatorInstance.SecondaryData;
      FVar31 = (ForElementType<unsigned_int>)&param_2->ScalarCurveMask;
      if (FVar5 != (ForElementType<unsigned_int>)0x0) {
        FVar31 = FVar5;
      }
      uVar47 = uVar41;
      if ((int)uVar41 < 0) {
        uVar47 = uVar41 + 0x1f;
      }
      if ((*(uint *)((longlong)FVar31 + (longlong)((int)uVar47 >> 5) * 4) & local_128) == 0) {
        if ((bVar20) && (*(char *)(lVar45 + 0x9c + lVar30) != '\0')) {
          local_f8.TypedValue = *(float *)(lVar45 + 0x98 + lVar30);
          local_f8.bIsSet = true;
          pfVar27 = TOptional<float>::GetValue(&local_f8);
          local_14c = *pfVar27;
        }
        else {
          local_14c = 0.0;
        }
      }
      else {
        FMovieSceneFloatChannel::Evaluate
                  ((FMovieSceneFloatChannel *)(lVar30 + 8 + lVar45),FVar40,&local_14c);
      }
      iVar23 = (param_3->ScalarValues).ArrayNum;
      if (iVar23 == *piVar1) {
        iVar23 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FScalarParameterStringAndValue>_>
                           (0x40c,(ForElementType<FScalarParameterStringAndValue> *)param_3,piVar1);
      }
      (param_3->ScalarValues).ArrayNum = iVar23 + 1;
      FVar6 = (param_3->ScalarValues).AllocatorInstance.SecondaryData;
      FVar32 = (ForElementType<FScalarParameterStringAndValue>)param_3;
      if (FVar6 != (ForElementType<FScalarParameterStringAndValue>)0x0) {
        FVar32 = FVar6;
      }
      local_128 = local_128 << 1 | (uint)((int)local_128 < 0);
      uVar41 = uVar41 + 1;
      uVar7 = *(undefined8 *)(lVar45 + lVar30);
      lVar45 = lVar45 + 0x130;
      *(float *)((uchar *)((longlong)FVar32 + 8) + (longlong)iVar23 * 0xc) = local_14c;
      *(undefined8 *)((longlong)FVar32 + (longlong)iVar23 * 0xc) = uVar7;
    } while ((int)uVar41 < (int)this->_padding_);
    piVar48 = (int *)((longlong)local_d0 + 0x3c);
    FVar43 = local_d0;
  }
  if (__real_3f000000 <= fStack_18c) {
    FVar24.Value = FVar24.Value + 1;
  }
  uVar41 = 0;
  uStack_124 = 0;
  FVar17.SubFrame = 0.0;
  FVar17.FrameNumber.Value = FVar24.Value;
  local_128 = FVar24.Value;
  if (0 < (this->Spaces).ArrayNum) {
    lVar45 = 0;
    do {
      local_e0._0_4_ = local_e0._0_4_ & 0xffffff00;
      local_e0.ControlRigElement._0_4_ = local_e0.ControlRigElement._0_4_ & 0xffffff00;
      local_e0.ControlRigElement.Name.ComparisonIndex.Value = 0;
      local_e0.ControlRigElement.Name.Number = 0;
      uVar47 = 0;
      if ((int)uVar41 < (this->Spaces).ArrayNum) {
        uVar47 = ~uVar41 >> 0x1f;
      }
      if ((uVar47 == 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      pFVar39 = (this->Spaces).AllocatorInstance.Data;
      FMovieSceneControlRigSpaceChannel::Evaluate
                ((FMovieSceneControlRigSpaceChannel *)(pFVar39 + lVar45 + 8),FVar17,&local_e0);
      iVar23 = *(int *)((ForElementType<FControlSpaceAndValue> *)((longlong)FVar43 + 0x38))->
                       InlineData;
      if (iVar23 == *piVar48) {
        iVar23 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FControlSpaceAndValue>_>
                           (0x418,(ForElementType<FControlSpaceAndValue> *)FVar43,piVar48);
      }
      *(int *)((ForElementType<FControlSpaceAndValue> *)((longlong)FVar43 + 0x38))->InlineData =
           iVar23 + 1;
      FVar33 = FVar43;
      if (*(ForElementType<FControlSpaceAndValue> *)((longlong)FVar43 + 0x30) !=
          (ForElementType<FControlSpaceAndValue>)0x0) {
        FVar33 = *(ForElementType<FControlSpaceAndValue> *)((longlong)FVar43 + 0x30);
      }
      uVar41 = uVar41 + 1;
      pFVar39 = pFVar39 + lVar45;
      lVar45 = lVar45 + 0x150;
      *(undefined8 *)((longlong)FVar33 + (longlong)iVar23 * 0x18) = *(undefined8 *)pFVar39;
      puVar3 = (undefined8 *)((longlong)FVar33 + 8 + (longlong)iVar23 * 0x18);
      *puVar3 = CONCAT44(local_e0.ControlRigElement._0_4_,local_e0._0_4_);
      *(FName *)(puVar3 + 1) = local_e0.ControlRigElement.Name;
    } while ((int)uVar41 < (this->Spaces).ArrayNum);
    FVar40.SubFrame = fStack_18c;
    FVar40.FrameNumber.Value = local_190.Value;
  }
  uVar41 = 0;
  if (0 < (this->Constraints).ArrayNum) {
    lVar45 = 0;
    do {
      local_188[0] = '\0';
      uVar47 = 0;
      if ((int)uVar41 < (this->Constraints).ArrayNum) {
        uVar47 = ~uVar41 >> 0x1f;
      }
      if ((uVar47 == 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      pFVar39 = (this->Constraints).AllocatorInstance.Data + lVar45;
      (**(code **)(*(longlong *)pFVar39 + 0xa0))(pFVar39,FVar17,local_188);
      pUVar26 = *(UObject **)(pFVar39 + 0x120);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar26 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar26);
      }
      iVar23 = (param_3->ConstraintsValues).ArrayNum;
      if (iVar23 == (param_3->ConstraintsValues).ArrayMax) {
        iVar23 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FConstraintAndActiveValue>_>
                           (0x40c,&(param_3->ConstraintsValues).AllocatorInstance,
                            &(param_3->ConstraintsValues).ArrayMax);
      }
      uVar19 = local_188[0];
      (param_3->ConstraintsValues).ArrayNum = iVar23 + 1;
      FVar8 = (param_3->ConstraintsValues).AllocatorInstance.SecondaryData;
      FVar46 = (ForElementType<FConstraintAndActiveValue>)&param_3->ConstraintsValues;
      if (FVar8 != (ForElementType<FConstraintAndActiveValue>)0x0) {
        FVar46 = FVar8;
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar26 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar26);
      }
      local_108.ObjectIndex = 0;
      local_108.ObjectSerialNumber = 0;
      local_c8[0] = pUVar26;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar26 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar26);
      }
      FWeakObjectPtr::operator=(&local_108,(FObjectPtr)local_c8);
      uVar41 = uVar41 + 1;
      ((uchar *)((longlong)FVar46 + 8))[(longlong)iVar23 * 0xc] = uVar19;
      lVar45 = lVar45 + 0x128;
      *(FWeakObjectPtr *)((longlong)FVar46 + (longlong)iVar23 * 0xc) = local_108;
    } while ((int)uVar41 < (this->Constraints).ArrayNum);
    FVar40.SubFrame = fStack_18c;
    FVar40.FrameNumber.Value = local_190.Value;
  }
  uVar41 = 0;
  if (0 < (int)this->_padding_) {
    uVar47 = 1;
    lVar45 = 0;
    do {
      local_197 = 0;
      uVar25 = 0;
      if ((int)uVar41 < (int)this->_padding_) {
        uVar25 = ~uVar41 >> 0x1f;
      }
      if ((uVar25 == 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      lVar30 = this->_padding_;
      if ((((int)uVar41 < 0) || ((param_2->BoolCurveMask).NumBits <= (int)uVar41)) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5be,L""), bVar22)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      FVar5 = (param_2->BoolCurveMask).AllocatorInstance.SecondaryData;
      FVar31 = (ForElementType<unsigned_int>)&param_2->BoolCurveMask;
      if (FVar5 != (ForElementType<unsigned_int>)0x0) {
        FVar31 = FVar5;
      }
      uVar25 = uVar41;
      if ((int)uVar41 < 0) {
        uVar25 = uVar41 + 0x1f;
      }
      if ((*(uint *)((longlong)FVar31 + (longlong)((int)uVar25 >> 5) * 4) & uVar47) == 0) {
        if ((bVar20) && (*(char *)(lVar45 + 0x89 + lVar30) != '\0')) {
          local_197 = *(undefined1 *)(lVar45 + 0x88 + lVar30);
        }
        else {
          local_197 = 0;
        }
      }
      else {
        plVar29 = (longlong *)(lVar30 + 8 + lVar45);
        (**(code **)(*plVar29 + 0xa0))(plVar29,FVar40,&local_197);
      }
      iVar23 = *(int *)((longlong)local_f0 + 0x20);
      if (iVar23 == *(int *)((longlong)local_f0 + 0x24)) {
        iVar23 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FBoolParameterStringAndValue>_>
                           (0x40c,(ForElementType<FBoolParameterStringAndValue> *)local_f0,
                            (int *)((longlong)local_f0 + 0x24));
      }
      *(int *)((longlong)local_f0 + 0x20) = iVar23 + 1;
      FVar42 = local_f0;
      if (*(ForElementType<FBoolParameterStringAndValue> *)((longlong)local_f0 + 0x18) !=
          (ForElementType<FBoolParameterStringAndValue>)0x0) {
        FVar42 = *(ForElementType<FBoolParameterStringAndValue> *)((longlong)local_f0 + 0x18);
      }
      uVar41 = uVar41 + 1;
      uVar47 = uVar47 << 1 | (uint)((int)uVar47 < 0);
      puVar3 = (undefined8 *)(lVar45 + lVar30);
      lVar45 = lVar45 + 0x128;
      *(undefined8 *)((longlong)FVar42 + (longlong)iVar23 * 0xc) = *puVar3;
      *(undefined1 *)((longlong)FVar42 + 8 + (longlong)iVar23 * 0xc) = local_197;
    } while ((int)uVar41 < (int)this->_padding_);
  }
  uVar41 = 0;
  if (0 < (this->Integers).ArrayNum) {
    uVar47 = 1;
    lVar45 = 0;
    do {
      uVar25 = 0;
      if ((int)uVar41 < (this->Integers).ArrayNum) {
        uVar25 = ~uVar41 >> 0x1f;
      }
      if ((uVar25 == 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      pFVar39 = (this->Integers).AllocatorInstance.Data;
      if ((((int)uVar41 < 0) || ((param_2->IntegerCurveMask).NumBits <= (int)uVar41)) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5be,L""), bVar22)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      FVar5 = (param_2->IntegerCurveMask).AllocatorInstance.SecondaryData;
      FVar31 = (ForElementType<unsigned_int>)&param_2->IntegerCurveMask;
      if (FVar5 != (ForElementType<unsigned_int>)0x0) {
        FVar31 = FVar5;
      }
      uVar25 = uVar41;
      if ((int)uVar41 < 0) {
        uVar25 = uVar41 + 0x1f;
      }
      uVar44 = 0;
      if ((*(uint *)((longlong)FVar31 + (longlong)((int)uVar25 >> 5) * 4) & uVar47) == 0) {
        if ((bVar20) && (uVar44 = 0, pFVar39[lVar45 + 0x8c] != (FScriptContainerElement)0x0)) {
          uVar44 = *(undefined4 *)(pFVar39 + lVar45 + 0x88);
        }
      }
      else {
        local_e8 = 0;
        bVar22 = FMovieSceneIntegerChannel::Evaluate
                           ((FMovieSceneIntegerChannel *)(pFVar39 + lVar45 + 8),FVar40,&local_e8);
        if (bVar22) {
          uVar44 = (int)local_e8;
        }
      }
      iVar23 = *(int *)((longlong)local_120 + 0x20);
      if (iVar23 == *(int *)((longlong)local_120 + 0x24)) {
        iVar23 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FIntegerParameterStringAndValue>_>
                           (0x40c,(ForElementType<FIntegerParameterStringAndValue> *)local_120,
                            (int *)((longlong)local_120 + 0x24));
      }
      *(int *)((longlong)local_120 + 0x20) = iVar23 + 1;
      FVar34 = local_120;
      if (*(ForElementType<FIntegerParameterStringAndValue> *)((longlong)local_120 + 0x18) !=
          (ForElementType<FIntegerParameterStringAndValue>)0x0) {
        FVar34 = *(ForElementType<FIntegerParameterStringAndValue> *)((longlong)local_120 + 0x18);
      }
      uVar41 = uVar41 + 1;
      uVar47 = uVar47 << 1 | (uint)((int)uVar47 < 0);
      pFVar39 = pFVar39 + lVar45;
      lVar45 = lVar45 + 0x128;
      *(undefined8 *)((longlong)FVar34 + (longlong)iVar23 * 0xc) = *(undefined8 *)pFVar39;
      *(undefined4 *)((longlong)FVar34 + 8 + (longlong)iVar23 * 0xc) = uVar44;
    } while ((int)uVar41 < (this->Integers).ArrayNum);
  }
  uVar41 = 0;
  if (0 < (this->Enums).ArrayNum) {
    uVar47 = 1;
    lVar45 = 0;
    do {
      local_196 = (FScriptContainerElement)0x0;
      uVar25 = 0;
      if ((int)uVar41 < (this->Enums).ArrayNum) {
        uVar25 = ~uVar41 >> 0x1f;
      }
      if ((uVar25 == 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      pFVar39 = (this->Enums).AllocatorInstance.Data;
      if ((((int)uVar41 < 0) || ((param_2->EnumCurveMask).NumBits <= (int)uVar41)) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5be,L""), bVar22)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      FVar5 = (param_2->EnumCurveMask).AllocatorInstance.SecondaryData;
      FVar31 = (ForElementType<unsigned_int>)&param_2->EnumCurveMask;
      if (FVar5 != (ForElementType<unsigned_int>)0x0) {
        FVar31 = FVar5;
      }
      uVar25 = uVar41;
      if ((int)uVar41 < 0) {
        uVar25 = uVar41 + 0x1f;
      }
      if ((*(uint *)((longlong)FVar31 + (longlong)((int)uVar25 >> 5) * 4) & uVar47) == 0) {
        if ((bVar20) && (pFVar39[lVar45 + 0x89] != (FScriptContainerElement)0x0)) {
          local_196 = pFVar39[lVar45 + 0x88];
        }
        else {
          local_196 = (FScriptContainerElement)0x0;
        }
      }
      else {
        FMovieSceneByteChannel::Evaluate
                  ((FMovieSceneByteChannel *)(pFVar39 + lVar45 + 8),FVar40,(uchar *)&local_196);
      }
      FVar18 = local_196;
      iVar23 = *(int *)((longlong)local_120 + 0x20);
      if (iVar23 == *(int *)((longlong)local_120 + 0x24)) {
        iVar23 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FIntegerParameterStringAndValue>_>
                           (0x40c,(ForElementType<FIntegerParameterStringAndValue> *)local_120,
                            (int *)((longlong)local_120 + 0x24));
      }
      *(int *)((longlong)local_120 + 0x20) = iVar23 + 1;
      FVar34 = local_120;
      if (*(ForElementType<FIntegerParameterStringAndValue> *)((longlong)local_120 + 0x18) !=
          (ForElementType<FIntegerParameterStringAndValue>)0x0) {
        FVar34 = *(ForElementType<FIntegerParameterStringAndValue> *)((longlong)local_120 + 0x18);
      }
      uVar41 = uVar41 + 1;
      uVar47 = uVar47 << 1 | (uint)((int)uVar47 < 0);
      pFVar39 = pFVar39 + lVar45;
      lVar45 = lVar45 + 0x130;
      *(undefined8 *)((longlong)FVar34 + (longlong)iVar23 * 0xc) = *(undefined8 *)pFVar39;
      *(uint *)((longlong)FVar34 + 8 + (longlong)iVar23 * 0xc) = (uint)(byte)FVar18;
    } while ((int)uVar41 < (this->Enums).ArrayNum);
  }
  uVar41 = 0;
  if (0 < (int)this->_padding_) {
    uVar47 = 1;
    lVar45 = 0;
    do {
      local_140[0] = 0.0;
      local_140[1] = 0.0;
      uVar25 = 0;
      if ((int)uVar41 < (int)this->_padding_) {
        uVar25 = ~uVar41 >> 0x1f;
      }
      if ((uVar25 == 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      lVar30 = this->_padding_;
      if ((((int)uVar41 < 0) || ((param_2->Vector2DCurveMask).NumBits <= (int)uVar41)) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5be,L""), bVar22)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      FVar5 = (param_2->Vector2DCurveMask).AllocatorInstance.SecondaryData;
      FVar31 = (ForElementType<unsigned_int>)&param_2->Vector2DCurveMask;
      if (FVar5 != (ForElementType<unsigned_int>)0x0) {
        FVar31 = FVar5;
      }
      uVar25 = uVar41;
      if ((int)uVar41 < 0) {
        uVar25 = uVar41 + 0x1f;
      }
      if ((*(uint *)((longlong)FVar31 + (longlong)((int)uVar25 >> 5) * 4) & uVar47) == 0) {
        if (bVar20) {
          if (*(char *)(lVar45 + 0x9c + lVar30) != '\0') {
            local_140[0] = (float)*(undefined4 *)(lVar45 + 0x98 + lVar30);
          }
          if (*(char *)(lVar45 + 0x1c4 + lVar30) != '\0') {
            local_140[1] = (float)*(undefined4 *)(lVar45 + 0x1c0 + lVar30);
          }
        }
      }
      else {
        FMovieSceneFloatChannel::Evaluate
                  ((FMovieSceneFloatChannel *)(lVar30 + 8 + lVar45),FVar40,local_140);
        FMovieSceneFloatChannel::Evaluate
                  ((FMovieSceneFloatChannel *)(lVar30 + 0x130 + lVar45),FVar40,local_140 + 1);
      }
      piVar1 = &(param_3->Vector2DValues).ArrayMax;
      iVar23 = (param_3->Vector2DValues).ArrayNum;
      dVar14 = (double)local_140[0];
      dVar15 = (double)local_140[1];
      if (iVar23 == *piVar1) {
        iVar23 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FVector2DParameterStringAndValue>_>
                           (0x818,&(param_3->Vector2DValues).AllocatorInstance,piVar1);
      }
      (param_3->Vector2DValues).ArrayNum = iVar23 + 1;
      FVar9 = (param_3->Vector2DValues).AllocatorInstance.SecondaryData;
      lVar28 = (longlong)iVar23;
      FVar35 = (ForElementType<FVector2DParameterStringAndValue>)&param_3->Vector2DValues;
      if (FVar9 != (ForElementType<FVector2DParameterStringAndValue>)0x0) {
        FVar35 = FVar9;
      }
      uVar41 = uVar41 + 1;
      uVar47 = uVar47 << 1 | (uint)((int)uVar47 < 0);
      puVar3 = (undefined8 *)(lVar45 + lVar30);
      lVar45 = lVar45 + 600;
      *(undefined8 *)((longlong)FVar35 + lVar28 * 0x18) = *puVar3;
      *(double *)((uchar *)((longlong)FVar35 + 8) + lVar28 * 0x18) = dVar14;
      *(double *)((uchar *)((longlong)FVar35 + 0x10) + lVar28 * 0x18) = dVar15;
      FVar40.SubFrame = fStack_18c;
      FVar40.FrameNumber.Value = local_190.Value;
    } while ((int)uVar41 < (int)this->_padding_);
  }
  uVar41 = 0;
  if (0 < (int)this->_padding_) {
    uVar47 = 1;
    lVar45 = 0;
    do {
      local_140[2] = 0.0;
      local_140[3] = 0.0;
      local_140[4] = 0.0;
      uVar25 = 0;
      if ((int)uVar41 < (int)this->_padding_) {
        uVar25 = ~uVar41 >> 0x1f;
      }
      if ((uVar25 == 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      lVar30 = this->_padding_;
      if ((((int)uVar41 < 0) || ((param_2->VectorCurveMask).NumBits <= (int)uVar41)) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5be,L""), bVar22)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      FVar5 = (param_2->VectorCurveMask).AllocatorInstance.SecondaryData;
      FVar31 = (ForElementType<unsigned_int>)&param_2->VectorCurveMask;
      if (FVar5 != (ForElementType<unsigned_int>)0x0) {
        FVar31 = FVar5;
      }
      uVar25 = uVar41;
      if ((int)uVar41 < 0) {
        uVar25 = uVar41 + 0x1f;
      }
      if ((*(uint *)((longlong)FVar31 + (longlong)((int)uVar25 >> 5) * 4) & uVar47) == 0) {
        if (bVar20) {
          if (*(char *)(lVar45 + 0x9c + lVar30) != '\0') {
            local_140[2] = (float)*(undefined4 *)(lVar45 + 0x98 + lVar30);
          }
          if (*(char *)(lVar45 + 0x1c4 + lVar30) != '\0') {
            local_140[3] = (float)*(undefined4 *)(lVar45 + 0x1c0 + lVar30);
          }
          if (*(char *)(lVar45 + 0x2ec + lVar30) != '\0') {
            local_140[4] = *(float *)(lVar45 + 0x2e8 + lVar30);
          }
        }
      }
      else {
        FMovieSceneFloatChannel::Evaluate
                  ((FMovieSceneFloatChannel *)(lVar30 + 8 + lVar45),FVar40,local_140 + 2);
        FMovieSceneFloatChannel::Evaluate
                  ((FMovieSceneFloatChannel *)(lVar30 + 0x130 + lVar45),FVar40,local_140 + 3);
        FMovieSceneFloatChannel::Evaluate
                  ((FMovieSceneFloatChannel *)(lVar30 + 600 + lVar45),FVar40,local_140 + 4);
      }
      piVar1 = &(param_3->VectorValues).ArrayMax;
      iVar23 = (param_3->VectorValues).ArrayNum;
      dVar14 = (double)local_140[2];
      dVar15 = (double)local_140[3];
      dVar16 = (double)local_140[4];
      if (iVar23 == *piVar1) {
        iVar23 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FVectorParameterStringAndValue>_>
                           (0x820,&(param_3->VectorValues).AllocatorInstance,piVar1);
      }
      (param_3->VectorValues).ArrayNum = iVar23 + 1;
      FVar10 = (param_3->VectorValues).AllocatorInstance.SecondaryData;
      FVar36 = (ForElementType<FVectorParameterStringAndValue>)&param_3->VectorValues;
      if (FVar10 != (ForElementType<FVectorParameterStringAndValue>)0x0) {
        FVar36 = FVar10;
      }
      puVar3 = (undefined8 *)(lVar45 + lVar30);
      uVar41 = uVar41 + 1;
      lVar30 = (longlong)iVar23 * 0x20;
      lVar45 = lVar45 + 0x380;
      uVar47 = uVar47 << 1 | (uint)((int)uVar47 < 0);
      *(undefined8 *)(lVar30 + (longlong)FVar36) = *puVar3;
      *(double *)(lVar30 + 8 + (longlong)FVar36) = dVar14;
      *(double *)(lVar30 + 0x10 + (longlong)FVar36) = dVar15;
      *(double *)(lVar30 + 0x18 + (longlong)FVar36) = dVar16;
      FVar40.SubFrame = fStack_18c;
      FVar40.FrameNumber.Value = local_190.Value;
    } while ((int)uVar41 < (int)this->_padding_);
  }
  uVar41 = 0;
  if (0 < (int)this->_padding_) {
    uVar47 = 1;
    lVar45 = 0;
    do {
      _local_118 = FLinearColor::White.field0_0x0;
      uVar25 = 0;
      if ((int)uVar41 < (int)this->_padding_) {
        uVar25 = ~uVar41 >> 0x1f;
      }
      if ((uVar25 == 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      lVar30 = this->_padding_;
      if ((((int)uVar41 < 0) || ((param_2->ColorCurveMask).NumBits <= (int)uVar41)) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5be,L""), bVar22)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      FVar5 = (param_2->ColorCurveMask).AllocatorInstance.SecondaryData;
      FVar31 = (ForElementType<unsigned_int>)&param_2->ColorCurveMask;
      if (FVar5 != (ForElementType<unsigned_int>)0x0) {
        FVar31 = FVar5;
      }
      uVar25 = uVar41;
      if ((int)uVar41 < 0) {
        uVar25 = uVar41 + 0x1f;
      }
      if ((*(uint *)((longlong)FVar31 + (longlong)((int)uVar25 >> 5) * 4) & uVar47) == 0) {
        if (bVar20) {
          if (*(char *)(lVar45 + 0x9c + lVar30) != '\0') {
            local_118 = (undefined1  [4])*(undefined4 *)(lVar45 + 0x98 + lVar30);
          }
          if (*(char *)(lVar45 + 0x1c4 + lVar30) != '\0') {
            fStack_114 = (float)*(undefined4 *)(lVar45 + 0x1c0 + lVar30);
          }
          if (*(char *)(lVar45 + 0x2ec + lVar30) != '\0') {
            uStack_110._0_4_ = *(undefined4 *)(lVar45 + 0x2e8 + lVar30);
          }
          if (*(char *)(lVar45 + 0x414 + lVar30) != '\0') {
            uStack_110._4_4_ = *(undefined4 *)(lVar45 + 0x410 + lVar30);
          }
        }
      }
      else {
        FMovieSceneFloatChannel::Evaluate
                  ((FMovieSceneFloatChannel *)(lVar30 + 8 + lVar45),FVar40,(float *)local_118);
        FMovieSceneFloatChannel::Evaluate
                  ((FMovieSceneFloatChannel *)(lVar30 + 0x130 + lVar45),FVar40,
                   (float *)(local_118 + 4));
        FMovieSceneFloatChannel::Evaluate
                  ((FMovieSceneFloatChannel *)(lVar30 + 600 + lVar45),FVar40,
                   (float *)(local_118 + 8));
        FMovieSceneFloatChannel::Evaluate
                  ((FMovieSceneFloatChannel *)(lVar30 + 0x380 + lVar45),FVar40,
                   (float *)(local_118 + 0xc));
      }
      iVar23 = (param_3->ColorValues).ArrayNum;
      piVar1 = &(param_3->ColorValues).ArrayMax;
      if (iVar23 == *piVar1) {
        iVar23 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FColorParameterStringAndValue>_>
                           (0x418,&(param_3->ColorValues).AllocatorInstance,piVar1);
      }
      (param_3->ColorValues).ArrayNum = iVar23 + 1;
      FVar11 = (param_3->ColorValues).AllocatorInstance.SecondaryData;
      FVar37 = (ForElementType<FColorParameterStringAndValue>)&param_3->ColorValues;
      if (FVar11 != (ForElementType<FColorParameterStringAndValue>)0x0) {
        FVar37 = FVar11;
      }
      uVar41 = uVar41 + 1;
      uVar47 = uVar47 << 1 | (uint)((int)uVar47 < 0);
      puVar3 = (undefined8 *)(lVar45 + lVar30);
      lVar45 = lVar45 + 0x4a8;
      *(undefined8 *)((longlong)FVar37 + (longlong)iVar23 * 0x18) = *puVar3;
      *(undefined8 *)((uchar *)((longlong)FVar37 + 8) + (longlong)iVar23 * 0x18) = _local_118;
      *(undefined8 *)((uchar *)((longlong)FVar37 + 8) + (longlong)iVar23 * 0x18 + 8) = uStack_110;
    } while ((int)uVar41 < (int)this->_padding_);
  }
  uVar47 = 0;
  uVar41 = *(uint *)&local_100[0xe].field_0x10;
  if (0 < (int)this->_padding_) {
    lVar45 = 0;
    do {
      local_180 = UE::Math::TVector<float>::OneVector.field0_0x0._0_8_;
      local_170[0] = 0.0;
      local_170[1] = 0.0;
      local_170[2] = 0.0;
      local_178[0] = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z;
      if (local_195 != '\0') {
        local_180 = 0;
        local_178[0] = 0.0;
      }
      local_160[0] = 0.0;
      local_160[1] = 0.0;
      local_160[2] = 0.0;
      uVar25 = 0;
      if ((int)uVar47 < (int)this->_padding_) {
        uVar25 = ~uVar47 >> 0x1f;
      }
      if ((uVar25 == 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      lVar30 = this->_padding_;
      if ((((int)uVar47 < 0) || ((param_2->TransformCurveMask).NumBits <= (int)uVar47)) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5be,L""), bVar22)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      FVar5 = (param_2->TransformCurveMask).AllocatorInstance.SecondaryData;
      FVar31 = (ForElementType<unsigned_int>)&param_2->TransformCurveMask;
      if (FVar5 != (ForElementType<unsigned_int>)0x0) {
        FVar31 = FVar5;
      }
      uVar25 = uVar47;
      if ((int)uVar47 < 0) {
        uVar25 = uVar47 + 0x1f;
      }
      if ((*(uint *)((longlong)FVar31 + (longlong)((int)uVar25 >> 5) * 4) & local_148) == 0) {
        if (bVar20) {
          if (*(char *)(lVar45 + 0x9c + lVar30) != '\0') {
            local_170[0] = (float)*(undefined4 *)(lVar45 + 0x98 + lVar30);
          }
          if (*(char *)(lVar45 + 0x1c4 + lVar30) != '\0') {
            local_170[1] = (float)*(undefined4 *)(lVar45 + 0x1c0 + lVar30);
          }
          if (*(char *)(lVar45 + 0x2ec + lVar30) != '\0') {
            local_170[2] = *(float *)(lVar45 + 0x2e8 + lVar30);
          }
          if (*(char *)(lVar45 + 0x414 + lVar30) != '\0') {
            local_160[2] = *(float *)(lVar45 + 0x410 + lVar30);
          }
          if (*(char *)(lVar45 + 0x53c + lVar30) != '\0') {
            local_160[0] = (float)*(undefined4 *)(lVar45 + 0x538 + lVar30);
          }
          if (*(char *)(lVar45 + 0x664 + lVar30) != '\0') {
            local_160[1] = (float)*(undefined4 *)(lVar45 + 0x660 + lVar30);
          }
          if (*(char *)(lVar45 + 0x78c + lVar30) != '\0') {
            local_180 = CONCAT44(local_180._4_4_,*(undefined4 *)(lVar45 + 0x788 + lVar30));
          }
          if (*(char *)(lVar45 + 0x8b4 + lVar30) != '\0') {
            local_180 = CONCAT44(*(undefined4 *)(lVar45 + 0x8b0 + lVar30),(float)local_180);
          }
LAB_14a406b03:
          if (*(char *)(lVar45 + 0x9dc + lVar30) != '\0') {
            local_178[0] = *(float *)(lVar45 + 0x9d8 + lVar30);
          }
        }
      }
      else {
        if ((uVar41 & 1) == 0) {
          if ((bVar20) && (*(char *)(lVar45 + 0x9c + lVar30) != '\0')) {
            local_170[0] = (float)*(undefined4 *)(lVar45 + 0x98 + lVar30);
          }
        }
        else {
          FMovieSceneFloatChannel::Evaluate
                    ((FMovieSceneFloatChannel *)(lVar30 + 8 + lVar45),FVar40,local_170);
        }
        if ((uVar41 & 2) == 0) {
          if ((bVar20) && (*(char *)(lVar45 + 0x1c4 + lVar30) != '\0')) {
            local_170[1] = (float)*(undefined4 *)(lVar45 + 0x1c0 + lVar30);
          }
        }
        else {
          FMovieSceneFloatChannel::Evaluate
                    ((FMovieSceneFloatChannel *)(lVar30 + 0x130 + lVar45),FVar40,local_170 + 1);
        }
        if ((uVar41 & 4) == 0) {
          if ((bVar20) && (*(char *)(lVar45 + 0x2ec + lVar30) != '\0')) {
            local_170[2] = *(float *)(lVar45 + 0x2e8 + lVar30);
          }
        }
        else {
          FMovieSceneFloatChannel::Evaluate
                    ((FMovieSceneFloatChannel *)(lVar30 + 600 + lVar45),FVar40,local_170 + 2);
        }
        if ((uVar41 & 8) == 0) {
          if ((bVar20) && (*(char *)(lVar45 + 0x414 + lVar30) != '\0')) {
            local_160[2] = *(float *)(lVar45 + 0x410 + lVar30);
          }
        }
        else {
          FMovieSceneFloatChannel::Evaluate
                    ((FMovieSceneFloatChannel *)(lVar30 + 0x380 + lVar45),FVar40,local_160 + 2);
        }
        if ((uVar41 & 0x10) == 0) {
          if ((bVar20) && (*(char *)(lVar45 + 0x53c + lVar30) != '\0')) {
            local_160[0] = (float)*(undefined4 *)(lVar45 + 0x538 + lVar30);
          }
        }
        else {
          FMovieSceneFloatChannel::Evaluate
                    ((FMovieSceneFloatChannel *)(lVar30 + 0x4a8 + lVar45),FVar40,local_160);
        }
        if ((uVar41 & 0x20) == 0) {
          if ((bVar20) && (*(char *)(lVar45 + 0x664 + lVar30) != '\0')) {
            local_160[1] = (float)*(undefined4 *)(lVar45 + 0x660 + lVar30);
          }
        }
        else {
          FMovieSceneFloatChannel::Evaluate
                    ((FMovieSceneFloatChannel *)(lVar30 + 0x5d0 + lVar45),FVar40,local_160 + 1);
        }
        if ((uVar41 & 0x40) == 0) {
          if ((bVar20) && (*(char *)(lVar45 + 0x78c + lVar30) != '\0')) {
            local_180 = CONCAT44(local_180._4_4_,*(undefined4 *)(lVar45 + 0x788 + lVar30));
          }
        }
        else {
          FMovieSceneFloatChannel::Evaluate
                    ((FMovieSceneFloatChannel *)(lVar30 + 0x6f8 + lVar45),FVar40,(float *)&local_180
                    );
        }
        if ((char)uVar41 < '\0') {
          FMovieSceneFloatChannel::Evaluate
                    ((FMovieSceneFloatChannel *)(lVar30 + 0x820 + lVar45),FVar40,
                     (float *)((longlong)&local_180 + 4));
        }
        else if ((bVar20) && (*(char *)(lVar45 + 0x8b4 + lVar30) != '\0')) {
          local_180 = CONCAT44(*(undefined4 *)(lVar45 + 0x8b0 + lVar30),(float)local_180);
        }
        if ((uVar41 >> 8 & 1) == 0) {
          if (bVar20) goto LAB_14a406b03;
        }
        else {
          FMovieSceneFloatChannel::Evaluate
                    ((FMovieSceneFloatChannel *)(lVar30 + 0x948 + lVar45),FVar40,local_178);
        }
      }
      local_b8 = *(undefined8 *)(lVar45 + lVar30);
      dStack_b0 = (double)local_170[0];
      iVar23 = (param_3->TransformValues).ArrayNum;
      local_a8 = (double)local_170[1];
      dStack_a0 = (double)local_170[2];
      dStack_90 = (double)local_160[1];
      local_98 = (double)local_160[0];
      dStack_80 = (double)(float)local_180;
      local_88 = (double)local_160[2];
      dStack_70 = (double)local_178[0];
      local_78 = (double)local_180._4_4_;
      if (iVar23 == (param_3->TransformValues).ArrayMax) {
        iVar23 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FEulerTransformParameterStringAndValue>_>
                           (0x850,&(param_3->TransformValues).AllocatorInstance,
                            &(param_3->TransformValues).ArrayMax);
      }
      (param_3->TransformValues).ArrayNum = iVar23 + 1;
      FVar12 = (param_3->TransformValues).AllocatorInstance.SecondaryData;
      lVar30 = (longlong)iVar23;
      FVar38 = (ForElementType<FEulerTransformParameterStringAndValue>)&param_3->TransformValues;
      if (FVar12 != (ForElementType<FEulerTransformParameterStringAndValue>)0x0) {
        FVar38 = FVar12;
      }
      uVar47 = uVar47 + 1;
      lVar45 = lVar45 + 0xa70;
      local_148 = local_148 << 1 | (uint)((int)local_148 < 0);
      puVar3 = (undefined8 *)((longlong)FVar38 + lVar30 * 0x50);
      *puVar3 = local_b8;
      puVar3[1] = dStack_b0;
      *(double *)((uchar *)((longlong)FVar38 + 0x10) + lVar30 * 0x50) = local_a8;
      *(double *)((uchar *)((longlong)FVar38 + 0x10) + lVar30 * 0x50 + 8) = dStack_a0;
      *(double *)((uchar *)((longlong)FVar38 + 0x20) + lVar30 * 0x50) = local_98;
      *(double *)((uchar *)((longlong)FVar38 + 0x20) + lVar30 * 0x50 + 8) = dStack_90;
      *(double *)((uchar *)((longlong)FVar38 + 0x30) + lVar30 * 0x50) = local_88;
      *(double *)((uchar *)((longlong)FVar38 + 0x30) + lVar30 * 0x50 + 8) = dStack_80;
      *(double *)((uchar *)((longlong)FVar38 + 0x40) + lVar30 * 0x50) = local_78;
      *(double *)((uchar *)((longlong)FVar38 + 0x40) + lVar30 * 0x50 + 8) = dStack_70;
    } while ((int)uVar47 < (int)this->_padding_);
  }
  return;
}

// GetAnimTypeID @ 14a411120

FMovieSceneAnimTypeID __cdecl FMovieSceneControlRigParameterTemplate::GetAnimTypeID(void)

{
  ulong64 uVar1;
  ulong64 *in_RCX;
  
  if (TMovieSceneAnimTypeID<FMovieSceneControlRigParameterTemplate,0>::CachedID != 0) {
    *in_RCX = TMovieSceneAnimTypeID<FMovieSceneControlRigParameterTemplate,0>::CachedID;
    return (FMovieSceneAnimTypeID)(ulong64)in_RCX;
  }
  uVar1 = FMovieSceneAnimTypeID::Initialize
                    (&TMovieSceneAnimTypeID<FMovieSceneControlRigParameterTemplate,0>::CachedID,0);
  *in_RCX = uVar1;
  return (FMovieSceneAnimTypeID)(ulong64)in_RCX;
}

