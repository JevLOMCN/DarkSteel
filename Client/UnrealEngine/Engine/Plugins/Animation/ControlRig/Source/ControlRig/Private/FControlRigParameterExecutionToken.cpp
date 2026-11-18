// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 4

// FControlRigParameterExecutionToken @ 14a3b5d50

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FControlRigParameterExecutionToken * __thiscall
FControlRigParameterExecutionToken::FControlRigParameterExecutionToken
          (FControlRigParameterExecutionToken *this,FControlRigParameterExecutionToken *param_1)

{
  ForElementType<FBoolParameterStringAndValue> FVar1;
  ForElementType<FIntegerParameterStringAndValue> FVar2;
  ForElementType<FControlSpaceAndValue> FVar3;
  ForElementType<FConstraintAndActiveValue> FVar4;
  
  this->_padding_ = (longlong)&___7FControlRigParameterExecutionToken__6B_;
  this->Section = param_1->Section;
  (this->BoolValues).AllocatorInstance.SecondaryData =
       (ForElementType<FBoolParameterStringAndValue>)0x0;
  if ((param_1->BoolValues).AllocatorInstance.SecondaryData ==
      (ForElementType<FBoolParameterStringAndValue>)0x0) {
    memmove(&this->BoolValues,&param_1->BoolValues,0x18);
  }
  FVar1 = (this->BoolValues).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<FBoolParameterStringAndValue>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  (this->BoolValues).AllocatorInstance.SecondaryData =
       (param_1->BoolValues).AllocatorInstance.SecondaryData;
  (param_1->BoolValues).AllocatorInstance.SecondaryData =
       (ForElementType<FBoolParameterStringAndValue>)0x0;
  (this->BoolValues).ArrayNum = (param_1->BoolValues).ArrayNum;
  (this->BoolValues).ArrayMax = (param_1->BoolValues).ArrayMax;
  (param_1->BoolValues).ArrayNum = 0;
  (param_1->BoolValues).ArrayMax = 2;
  (this->IntegerValues).AllocatorInstance.SecondaryData =
       (ForElementType<FIntegerParameterStringAndValue>)0x0;
  if ((param_1->IntegerValues).AllocatorInstance.SecondaryData ==
      (ForElementType<FIntegerParameterStringAndValue>)0x0) {
    memmove(&this->IntegerValues,&param_1->IntegerValues,0x18);
  }
  FVar2 = (this->IntegerValues).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<FIntegerParameterStringAndValue>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  (this->IntegerValues).AllocatorInstance.SecondaryData =
       (param_1->IntegerValues).AllocatorInstance.SecondaryData;
  (param_1->IntegerValues).AllocatorInstance.SecondaryData =
       (ForElementType<FIntegerParameterStringAndValue>)0x0;
  (this->IntegerValues).ArrayNum = (param_1->IntegerValues).ArrayNum;
  (this->IntegerValues).ArrayMax = (param_1->IntegerValues).ArrayMax;
  (param_1->IntegerValues).ArrayNum = 0;
  (param_1->IntegerValues).ArrayMax = 2;
  (this->SpaceValues).AllocatorInstance.SecondaryData = (ForElementType<FControlSpaceAndValue>)0x0;
  if ((param_1->SpaceValues).AllocatorInstance.SecondaryData ==
      (ForElementType<FControlSpaceAndValue>)0x0) {
    memmove(&this->SpaceValues,&param_1->SpaceValues,0x30);
  }
  FVar3 = (this->SpaceValues).AllocatorInstance.SecondaryData;
  if (FVar3 != (ForElementType<FControlSpaceAndValue>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  (this->SpaceValues).AllocatorInstance.SecondaryData =
       (param_1->SpaceValues).AllocatorInstance.SecondaryData;
  (param_1->SpaceValues).AllocatorInstance.SecondaryData =
       (ForElementType<FControlSpaceAndValue>)0x0;
  (this->SpaceValues).ArrayNum = (param_1->SpaceValues).ArrayNum;
  (this->SpaceValues).ArrayMax = (param_1->SpaceValues).ArrayMax;
  (param_1->SpaceValues).ArrayNum = 0;
  (param_1->SpaceValues).ArrayMax = 2;
  (this->ConstraintsValues).AllocatorInstance.SecondaryData =
       (ForElementType<FConstraintAndActiveValue>)0x0;
  if ((param_1->ConstraintsValues).AllocatorInstance.SecondaryData ==
      (ForElementType<FConstraintAndActiveValue>)0x0) {
    memmove(&this->ConstraintsValues,&param_1->ConstraintsValues,0x18);
  }
  FVar4 = (this->ConstraintsValues).AllocatorInstance.SecondaryData;
  if (FVar4 != (ForElementType<FConstraintAndActiveValue>)0x0) {
    FMemory::Free((void *)FVar4);
  }
  (this->ConstraintsValues).AllocatorInstance.SecondaryData =
       (param_1->ConstraintsValues).AllocatorInstance.SecondaryData;
  (param_1->ConstraintsValues).AllocatorInstance.SecondaryData =
       (ForElementType<FConstraintAndActiveValue>)0x0;
  (this->ConstraintsValues).ArrayNum = (param_1->ConstraintsValues).ArrayNum;
  (this->ConstraintsValues).ArrayMax = (param_1->ConstraintsValues).ArrayMax;
  (param_1->ConstraintsValues).ArrayNum = 0;
  (param_1->ConstraintsValues).ArrayMax = 2;
  this->Template = param_1->Template;
  return this;
}

// FControlRigParameterExecutionToken @ 14a3b5f20

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FControlRigParameterExecutionToken * __thiscall
FControlRigParameterExecutionToken::FControlRigParameterExecutionToken
          (FControlRigParameterExecutionToken *this,UMovieSceneControlRigParameterSection *param_1,
          FEvaluatedControlRigParameterSectionValues *param_2,
          FMovieSceneControlRigParameterTemplate *param_3)

{
  int *piVar1;
  ForElementType<FScalarParameterStringAndValue> *pFVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  ForElementType<FBoolParameterStringAndValue> _Dst;
  ForElementType<FIntegerParameterStringAndValue> _Dst_00;
  ForElementType<FControlSpaceAndValue> _Dst_01;
  ForElementType<FConstraintAndActiveValue> _Dst_02;
  ForElementType<FBoolParameterStringAndValue> _Src;
  ForElementType<FConstraintAndActiveValue> _Src_00;
  ForElementType<FIntegerParameterStringAndValue> _Src_01;
  ForElementType<FControlSpaceAndValue> _Src_02;
  
  this->Section = param_1;
  this->_padding_ = (longlong)&___7FControlRigParameterExecutionToken__6B_;
  (this->BoolValues).AllocatorInstance.SecondaryData =
       (ForElementType<FBoolParameterStringAndValue>)0x0;
  piVar1 = &(this->IntegerValues).ArrayMax;
  (this->BoolValues).ArrayNum = 0;
  (this->BoolValues).ArrayMax = 2;
  piVar3 = &(this->SpaceValues).ArrayMax;
  (this->IntegerValues).AllocatorInstance.SecondaryData =
       (ForElementType<FIntegerParameterStringAndValue>)0x0;
  piVar4 = &(this->ConstraintsValues).ArrayMax;
  (this->IntegerValues).ArrayNum = 0;
  *piVar1 = 2;
  (this->SpaceValues).AllocatorInstance.SecondaryData = (ForElementType<FControlSpaceAndValue>)0x0;
  (this->SpaceValues).ArrayNum = 0;
  *piVar3 = 2;
  (this->ConstraintsValues).AllocatorInstance.SecondaryData =
       (ForElementType<FConstraintAndActiveValue>)0x0;
  (this->ConstraintsValues).ArrayNum = 0;
  pFVar2 = &(param_2->ScalarValues).AllocatorInstance.SecondaryData;
  *piVar4 = 2;
  this->Template = param_3;
  if (this == (FControlRigParameterExecutionToken *)pFVar2) {
LAB_14a3b6029:
    if (this != (FControlRigParameterExecutionToken *)pFVar2) goto LAB_14a3b603d;
LAB_14a3b60c1:
    if (this == (FControlRigParameterExecutionToken *)
                &(param_2->ScalarValues).AllocatorInstance.SecondaryData) goto LAB_14a3b6145;
  }
  else {
    _Src = (param_2->BoolValues).AllocatorInstance.SecondaryData;
    iVar5 = (param_2->BoolValues).ArrayNum;
    if (_Src == (ForElementType<FBoolParameterStringAndValue>)0x0) {
      _Src = (ForElementType<FBoolParameterStringAndValue>)&param_2->BoolValues;
    }
    (this->BoolValues).ArrayNum = iVar5;
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FBoolParameterStringAndValue>_>
              (0xc,4,iVar5,2,&(this->BoolValues).AllocatorInstance,iVar5,
               &(this->BoolValues).ArrayMax);
    _Dst = (this->BoolValues).AllocatorInstance.SecondaryData;
    if (iVar5 == 0) goto LAB_14a3b6029;
    if (_Dst == (ForElementType<FBoolParameterStringAndValue>)0x0) {
      _Dst = (ForElementType<FBoolParameterStringAndValue>)&this->BoolValues;
    }
    memcpy((void *)_Dst,(void *)_Src,(longlong)iVar5 * 0xc);
LAB_14a3b603d:
    _Src_01 = (param_2->IntegerValues).AllocatorInstance.SecondaryData;
    iVar5 = (param_2->IntegerValues).ArrayNum;
    if (_Src_01 == (ForElementType<FIntegerParameterStringAndValue>)0x0) {
      _Src_01 = (ForElementType<FIntegerParameterStringAndValue>)&param_2->IntegerValues;
    }
    (this->IntegerValues).ArrayNum = iVar5;
    if ((iVar5 == 0) && (*piVar1 == 0)) {
      *piVar1 = 2;
    }
    else {
      UE::Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FIntegerParameterStringAndValue>_>
                (0xc,4,iVar5,*piVar1,&(this->IntegerValues).AllocatorInstance,iVar5,piVar1);
      _Dst_00 = (this->IntegerValues).AllocatorInstance.SecondaryData;
      if (iVar5 == 0) goto LAB_14a3b60c1;
      if (_Dst_00 == (ForElementType<FIntegerParameterStringAndValue>)0x0) {
        _Dst_00 = (ForElementType<FIntegerParameterStringAndValue>)&this->IntegerValues;
      }
      memcpy((void *)_Dst_00,(void *)_Src_01,(longlong)iVar5 * 0xc);
    }
  }
  _Src_02 = (param_2->SpaceValues).AllocatorInstance.SecondaryData;
  iVar5 = (param_2->SpaceValues).ArrayNum;
  if (_Src_02 == (ForElementType<FControlSpaceAndValue>)0x0) {
    _Src_02 = (ForElementType<FControlSpaceAndValue>)&param_2->SpaceValues;
  }
  (this->SpaceValues).ArrayNum = iVar5;
  if ((iVar5 == 0) && (*piVar3 == 0)) {
    *piVar3 = 2;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FControlSpaceAndValue>_>
              (0x18,4,iVar5,*piVar3,&(this->SpaceValues).AllocatorInstance,iVar5,piVar3);
    _Dst_01 = (this->SpaceValues).AllocatorInstance.SecondaryData;
    if (iVar5 != 0) {
      if (_Dst_01 == (ForElementType<FControlSpaceAndValue>)0x0) {
        _Dst_01 = (ForElementType<FControlSpaceAndValue>)&this->SpaceValues;
      }
      memcpy((void *)_Dst_01,(void *)_Src_02,(longlong)iVar5 * 0x18);
    }
  }
LAB_14a3b6145:
  if (this != (FControlRigParameterExecutionToken *)
              ((param_2->TransformValues).AllocatorInstance.InlineData + 0x10)) {
    iVar5 = (param_2->ConstraintsValues).ArrayNum;
    _Src_00 = (param_2->ConstraintsValues).AllocatorInstance.SecondaryData;
    (this->ConstraintsValues).ArrayNum = iVar5;
    if (_Src_00 == (ForElementType<FConstraintAndActiveValue>)0x0) {
      _Src_00 = (ForElementType<FConstraintAndActiveValue>)&param_2->ConstraintsValues;
    }
    if ((iVar5 == 0) && (*piVar4 == 0)) {
      *piVar4 = 2;
      return this;
    }
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FConstraintAndActiveValue>_>
              (0xc,4,iVar5,*piVar4,&(this->ConstraintsValues).AllocatorInstance,iVar5,piVar4);
    _Dst_02 = (this->ConstraintsValues).AllocatorInstance.SecondaryData;
    if (iVar5 != 0) {
      if (_Dst_02 == (ForElementType<FConstraintAndActiveValue>)0x0) {
        _Dst_02 = (ForElementType<FConstraintAndActiveValue>)&this->ConstraintsValues;
      }
      memcpy((void *)_Dst_02,(void *)_Src_00,(longlong)iVar5 * 0xc);
    }
  }
  return this;
}

// Execute @ 14a408000

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FControlRigParameterExecutionToken::Execute
          (FControlRigParameterExecutionToken *this,FMovieSceneContext *param_1,
          FMovieSceneEvaluationOperand *param_2,FPersistentEvaluationData *param_3,
          IMovieScenePlayer *param_4)

{
  int *piVar1;
  FName *pFVar2;
  uchar uVar3;
  undefined2 uVar4;
  int iVar5;
  TReferenceControllerBase<1> *pTVar6;
  ForElementType<FControlSpaceAndValue> FVar7;
  ForElementType<FSetElementId> FVar8;
  longlong lVar9;
  URigHierarchy *this_00;
  ForElementType<FBoolParameterStringAndValue> FVar10;
  ForElementType<FIntegerParameterStringAndValue> FVar11;
  ForElementType<FConstraintAndActiveValue> FVar12;
  UControlRig *pUVar13;
  code *pcVar14;
  bool bVar15;
  bool bVar16;
  char cVar17;
  uint uVar18;
  int iVar19;
  FMovieSceneEvaluationState *this_01;
  UMovieSceneSequence *pUVar20;
  UObject *pUVar21;
  longlong lVar22;
  UWorld *pUVar23;
  UClass *pUVar24;
  UMovieSceneControlRigParameterTrack *pUVar25;
  UControlRig *pUVar26;
  TSharedRef<FControlRigObjectBinding,1> *pTVar27;
  UObject *pUVar28;
  UObject *pUVar29;
  IControlRigObjectBinding *pIVar30;
  FMovieSceneAnimTypeID FVar31;
  USkeletalMeshComponent *this_02;
  UAnimInstance *this_03;
  FFrameTime FVar32;
  ulonglong uVar33;
  FRigElementKey *pFVar34;
  FConstraintsManagerController *pFVar35;
  UTickableConstraint *pUVar36;
  FWeakObjectPtr *this_04;
  USceneComponent *pUVar37;
  ulonglong uVar38;
  ForElementType<FSetElementId> FVar39;
  FName *pFVar40;
  FName *pFVar41;
  ulonglong uVar42;
  UMovieSceneControlRigParameterSection *pUVar43;
  FName *pFVar44;
  ForElementType<FConstraintAndActiveValue> this_05;
  UMovieSceneControlRigParameterSection **ppUVar45;
  ForElementType<FControlSpaceAndValue> FVar46;
  ForElementType<FBoolParameterStringAndValue> FVar47;
  ForElementType<FIntegerParameterStringAndValue> FVar48;
  float fVar49;
  ulonglong in_stack_fffffffffffffcc0;
  undefined1 local_327 [3];
  IMovieScenePreAnimatedTokenProducer local_324;
  undefined1 local_31c [4];
  UObject *local_318;
  float local_310 [2];
  undefined8 local_308;
  FName *local_300;
  uint local_2f8;
  FRigElementKey local_2f0;
  uint local_2e0;
  undefined4 uStack_2dc;
  IMovieScenePreAnimatedTokenProducer local_2d8;
  uint local_2d0;
  undefined4 local_2cc;
  TArrayView<TWeakObjectPtr<UObject,FWeakObjectPtr>,int> local_2c8;
  undefined1 local_2b8 [4];
  undefined4 local_2b4;
  undefined8 local_2b0;
  undefined4 local_2a8;
  undefined1 local_2a4;
  undefined1 local_2a0 [4];
  undefined4 local_29c;
  undefined8 local_298;
  undefined4 local_290;
  undefined1 local_28c;
  FName *local_288;
  uint local_280;
  TSharedRef<UE::MovieScene::FSharedPlaybackState,1> local_278;
  undefined8 local_268;
  FRigElementKey local_258;
  IMovieScenePreAnimatedTokenProducer local_248;
  uint local_240;
  void *local_238;
  undefined8 local_230;
  void *local_228;
  undefined8 local_220;
  void *local_218;
  undefined8 local_210;
  void *local_208;
  undefined8 local_200;
  void *local_1f8;
  undefined8 local_1f0;
  void *local_1e8;
  undefined8 local_1e0;
  void *local_1d8;
  undefined8 local_1d0;
  TSharedPtr<IControlRigObjectBinding,1> local_1c8;
  TSharedPtr<IControlRigObjectBinding,1> local_1b8;
  TSharedRef<FControlRigObjectBinding,1> local_1a8;
  FSharedPlaybackState *local_198;
  TReferenceControllerBase<1> *pTStack_190;
  undefined1 local_188 [24];
  ulonglong local_170 [16];
  undefined4 local_f0;
  ulonglong local_ec [16];
  undefined4 local_6c;
  FRigElementKey local_68;
  FRigElementKey local_5c [3];
  
  IMovieScenePlayer::FindBoundObjects
            (param_4,&local_2c8,&param_2->ObjectBindingID,&param_2->SequenceID);
  this_01 = IMovieScenePlayer::GetEvaluationState(param_4);
  pUVar20 = FMovieSceneEvaluationState::FindSequence(this_01,&param_2->SequenceID);
  pUVar26 = (UControlRig *)0x0;
  if (local_2c8.ArrayNum < 1) {
    pUVar21 = (UObject *)0x0;
  }
  else {
    pUVar21 = FWeakObjectPtr::Get(&(local_2c8.DataPtr)->WeakPtr);
  }
  local_318 = pUVar21;
  if ((pUVar20 == (UMovieSceneSequence *)0x0) || (pUVar21 == (UObject *)0x0)) goto LAB_14a408773;
  lVar22 = (**(code **)(*(longlong *)pUVar21 + 0x180))(pUVar21);
  if (lVar22 == 0) {
LAB_14a40810e:
    pUVar43 = this->Section;
    pUVar23 = (UWorld *)0x0;
LAB_14a408119:
    pUVar26 = (pUVar43->ControlRig).field0_0x0.DebugPtr;
  }
  else {
    pUVar23 = (UWorld *)(**(code **)(*(longlong *)pUVar21 + 0x180))(pUVar21);
    bVar15 = UWorld::IsGameWorld(pUVar23);
    if (!bVar15) goto LAB_14a40810e;
    pUVar23 = (UWorld *)(**(code **)(*(longlong *)pUVar21 + 0x180))(pUVar21);
    pUVar43 = this->Section;
    if (pUVar23 == (UWorld *)0x0) goto LAB_14a408119;
    pUVar24 = UMovieSceneControlRigParameterTrack::StaticClass();
    pUVar25 = (UMovieSceneControlRigParameterTrack *)
              UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)pUVar43,pUVar24);
    if (pUVar25 == (UMovieSceneControlRigParameterTrack *)0x0) {
      return;
    }
    pUVar26 = UMovieSceneControlRigParameterTrack::GetGameWorldControlRig(pUVar25,pUVar23);
  }
  ppUVar45 = &this->Section;
  if (pUVar26 == (UControlRig *)0x0) {
    return;
  }
  pTVar6 = (pUVar26->ObjectBinding).SharedReferenceCount.ReferenceController;
  pIVar30 = (pUVar26->ObjectBinding).Object;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  if (pIVar30 == (IControlRigObjectBinding *)0x0) {
    pTVar27 = MakeShared<FControlRigObjectBinding,1>(&local_1a8);
    local_1c8.Object = (IControlRigObjectBinding *)pTVar27->Object;
    local_1c8.SharedReferenceCount.ReferenceController =
         (pTVar27->SharedReferenceCount).ReferenceController;
    if (local_1c8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_1c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_1c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UControlRig::SetObjectBinding(pUVar26,&local_1c8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1a8.SharedReferenceCount.ReferenceController);
  }
  pTVar6 = (pUVar26->ObjectBinding).SharedReferenceCount.ReferenceController;
  pIVar30 = (pUVar26->ObjectBinding).Object;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pIVar30 == (IControlRigObjectBinding *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar15)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  pUVar28 = (UObject *)(**(code **)((longlong)*pIVar30 + 0x28))(pIVar30);
  pUVar29 = FControlRigObjectBinding::GetBindableObject(local_318);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  pUVar21 = local_318;
  if (pUVar28 != pUVar29) {
    pTVar6 = (pUVar26->ObjectBinding).SharedReferenceCount.ReferenceController;
    local_1b8.Object = (pUVar26->ObjectBinding).Object;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_1b8.SharedReferenceCount.ReferenceController = pTVar6;
    pIVar30 = TSharedPtr<IControlRigObjectBinding,1>::operator->(&local_1b8);
    pUVar21 = local_318;
    (**(code **)*pIVar30)(pIVar30,local_318);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    (**(code **)(pUVar26->_padding_ + 0x438))(pUVar26,&local_300);
    (**(code **)(pUVar26->_padding_ + 0x2c0))(pUVar26,1);
    pUVar28 = FControlRigObjectBinding::GetBindableObject(pUVar21);
    if (pUVar28 != (UObject *)0x0) {
      pUVar24 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
      iVar5 = (int)pUVar24->_padding_;
      if ((iVar5 <= *(int *)(*(longlong *)&pUVar28->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar28->field_0x10 + 0x30) + (longlong)iVar5 * 8) ==
          &pUVar24->_padding_)) {
        (**(code **)(pUVar26->_padding_ + 0x318))(pUVar26);
        (**(code **)(pUVar26->_padding_ + 0x468))(pUVar26,pUVar28,1);
        (**(code **)(pUVar26->_padding_ + 0x2d0))(pUVar26);
      }
    }
    if ((pUVar23 == (UWorld *)0x0) &&
       (bVar15 = UObjectBaseUtility::IsA<UFKControlRig>((UObjectBaseUtility *)pUVar26), bVar15)) {
      pUVar43 = *ppUVar45;
      pUVar24 = UMovieSceneControlRigParameterTrack::StaticClass();
      pUVar25 = (UMovieSceneControlRigParameterTrack *)
                UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)pUVar43,pUVar24);
      if (pUVar25 != (UMovieSceneControlRigParameterTrack *)0x0) {
        UMovieSceneControlRigParameterTrack::ReplaceControlRig(pUVar25,pUVar26,true);
      }
    }
    (**(code **)(pUVar26->_padding_ + 0x438))(pUVar26,&local_288);
    pFVar44 = local_288;
    pFVar41 = local_300;
    if ((local_2f8 != local_280) ||
       (bVar15 = CompareItems<FName,int>(local_300,local_288,local_2f8), !bVar15)) {
      (**(code **)(pUVar26->_padding_ + 0x430))(pUVar26,0);
      uVar18 = local_2f8;
      uVar38 = (ulonglong)(int)local_2f8;
      pFVar2 = local_300 + uVar38;
      pFVar40 = local_300;
      while( true ) {
        if ((uint)uVar38 != uVar18) {
          local_327[0] = 0;
          `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_327);
        }
        pFVar41 = local_300;
        pFVar44 = local_288;
        if (pFVar40 == pFVar2) break;
        (**(code **)(pUVar26->_padding_ + 0x428))(pUVar26,pFVar40,1,0);
        uVar38 = (ulonglong)local_2f8;
        pFVar40 = pFVar40 + 1;
      }
    }
    if (pFVar44 != (FName *)0x0) {
      FMemory::Free(pFVar44);
      pFVar41 = local_300;
    }
    if (pFVar41 != (FName *)0x0) {
      FMemory::Free(pFVar41);
    }
  }
  uVar38 = (ulonglong)local_2c8.ArrayNum;
  if ((local_2c8.ArrayNum < 1) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     in_stack_fffffffffffffcc0 = uVar38, bVar15)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  pUVar28 = FWeakObjectPtr::Get(&(local_2c8.DataPtr)->WeakPtr);
  pUVar26 = GetControlRig(*ppUVar45,pUVar28);
  if (pUVar26 == (UControlRig *)0x0) {
    return;
  }
  local_248 = (IMovieScenePreAnimatedTokenProducer)
              &___7FControlRigParameterPreAnimatedTokenProducer__6B_;
  local_238 = (void *)0x0;
  local_240 = (param_2->SequenceID).Value;
  local_230 = 0;
  local_228 = (void *)0x0;
  local_220 = 0;
  local_218 = (void *)0x0;
  local_210 = 0;
  local_208 = (void *)0x0;
  local_200 = 0;
  local_1f8 = (void *)0x0;
  local_1f0 = 0;
  local_1e8 = (void *)0x0;
  local_1e0 = 0;
  local_1d8 = (void *)0x0;
  local_1d0 = 0;
  FVar31.ID = TMovieSceneAnimTypeID<FMovieSceneControlRigParameterTemplate,0>::CachedID;
  if (TMovieSceneAnimTypeID<FMovieSceneControlRigParameterTemplate,0>::CachedID == 0) {
    FVar31.ID = FMovieSceneAnimTypeID::Initialize
                          (&TMovieSceneAnimTypeID<FMovieSceneControlRigParameterTemplate,0>::
                            CachedID,0);
  }
  FMovieScenePreAnimatedState::SavePreAnimatedState
            (&param_4->PreAnimatedState,(UObject *)pUVar26,FVar31,&local_248);
  if (local_1d8 != (void *)0x0) {
    FMemory::Free(local_1d8);
  }
  if (local_1e8 != (void *)0x0) {
    FMemory::Free(local_1e8);
  }
  if (local_1f8 != (void *)0x0) {
    FMemory::Free(local_1f8);
  }
  if (local_208 != (void *)0x0) {
    FMemory::Free(local_208);
  }
  if (local_218 != (void *)0x0) {
    FMemory::Free(local_218);
  }
  if (local_228 != (void *)0x0) {
    FMemory::Free(local_228);
  }
  if (local_238 != (void *)0x0) {
    FMemory::Free(local_238);
  }
  local_248 = (IMovieScenePreAnimatedTokenProducer)&___7IMovieScenePreAnimatedTokenProducer__6B_;
  pUVar28 = FControlRigObjectBinding::GetBindableObject(pUVar21);
  if (pUVar28 != (UObject *)0x0) {
    pUVar24 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
    iVar5 = (int)pUVar24->_padding_;
    if ((iVar5 <= *(int *)(*(longlong *)&pUVar28->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar28->field_0x10 + 0x30) + (longlong)iVar5 * 8) ==
        &pUVar24->_padding_)) {
      local_2d8 = (IMovieScenePreAnimatedTokenProducer)
                  &___7FControlRigSkeletalMeshComponentBindingTokenProducer__6B_;
      local_2d0 = (param_2->SequenceID).Value;
      local_2cc = *(undefined4 *)((longlong)&pUVar26->_padding_ + 4);
      FVar31.ID = TMovieSceneAnimTypeID<FControlRigSkeletalMeshComponentBindingTokenProducer,0>::
                  CachedID;
      if (TMovieSceneAnimTypeID<FControlRigSkeletalMeshComponentBindingTokenProducer,0>::CachedID ==
          0) {
        FVar31.ID = FMovieSceneAnimTypeID::Initialize
                              (&TMovieSceneAnimTypeID<FControlRigSkeletalMeshComponentBindingTokenProducer,0>
                                ::CachedID,0);
      }
      FMovieScenePreAnimatedState::SavePreAnimatedState
                (&param_4->PreAnimatedState,pUVar28,FVar31,&local_2d8);
      local_2d8 = (IMovieScenePreAnimatedTokenProducer)&___7IMovieScenePreAnimatedTokenProducer__6B_
      ;
    }
  }
  FControlRigBindingHelper::BindToSequencerInstance(pUVar26);
  pTVar6 = (pUVar26->ObjectBinding).SharedReferenceCount.ReferenceController;
  pIVar30 = (pUVar26->ObjectBinding).Object;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  if (pIVar30 != (IControlRigObjectBinding *)0x0) {
    pTVar6 = (pUVar26->ObjectBinding).SharedReferenceCount.ReferenceController;
    pIVar30 = (pUVar26->ObjectBinding).Object;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pIVar30 == (IControlRigObjectBinding *)0x0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar15)) {
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
    this_02 = (USkeletalMeshComponent *)(**(code **)((longlong)*pIVar30 + 0x28))(pIVar30);
    if (this_02 != (USkeletalMeshComponent *)0x0) {
      pUVar24 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
      iVar5 = (int)pUVar24->_padding_;
      if ((iVar5 <= *(int *)(this_02->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_02->_padding_ + 0x30) + (longlong)iVar5 * 8) ==
          &pUVar24->_padding_)) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
        this_03 = USkeletalMeshComponent::GetAnimInstance(this_02);
        if (this_03 != (UAnimInstance *)0x0) {
          pUVar24 = UControlRigLayerInstance::StaticClass();
          iVar5 = (int)pUVar24->_padding_;
          if ((iVar5 <= *(int *)(*(longlong *)&this_03->field_0x10 + 0x38)) &&
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&this_03->field_0x10 + 0x30) + (longlong)iVar5 * 8) ==
              &pUVar24->_padding_)) {
            pUVar43 = *ppUVar45;
            FVar32 = FMovieSceneEvaluationRange::GetTime((FMovieSceneEvaluationRange *)param_1);
            fVar49 = UMovieSceneSection::EvaluateEasing
                               ((UMovieSceneSection *)pUVar43,*(FFrameTime *)FVar32);
            pUVar43 = *ppUVar45;
            if (((pUVar43->TransformMask).Mask >> 9 & 1) != 0) {
              local_310[0] = 1.0;
              FVar32 = FMovieSceneEvaluationRange::GetTime((FMovieSceneEvaluationRange *)param_1);
              FMovieSceneFloatChannel::Evaluate(&pUVar43->Weight,*(FFrameTime *)FVar32,local_310);
              fVar49 = fVar49 * local_310[0];
            }
            local_324._0_2_ = 0x101;
            uVar4 = *(undefined2 *)((longlong)&(*ppUVar45)->_padding_ + 1);
            if (((char)((ushort)uVar4 >> 8) != '\0') && ((char)uVar4 == '\x01')) {
              UControlRigLayerInstance::UpdateControlRigTrack
                        ((UControlRigLayerInstance *)this_03,
                         *(int *)((longlong)&pUVar26->_padding_ + 4),fVar49,
                         (FControlRigIOSettings *)&local_324,true);
            }
          }
        }
        goto LAB_14a408773;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    pUVar26 = GetControlRig(*ppUVar45,pUVar21);
  }
LAB_14a408773:
  uVar4 = *(undefined2 *)((longlong)&this->Section->_padding_ + 1);
  if (((char)((ushort)uVar4 >> 8) != '\0') && ((char)uVar4 == '\x02')) {
    return;
  }
  bVar15 = this->Section->bDoNotKey;
  this->Section->bDoNotKey = true;
  if (pUVar26 != (UControlRig *)0x0) {
    local_268 = param_1->_padding_;
    uVar18 = *(uint *)((longlong)&param_1->_padding_ + 4);
    uVar38 = local_268 >> 0x20;
    if (uVar18 == 0x80000000) {
      uVar42 = local_268 & 0xffffffff;
      if ((int)param_1->_padding_ == 0) {
        param_1 = (FMovieSceneContext *)((longlong)&param_1->_padding_ + 4);
      }
      if (((char)param_1->_padding_ == '\x02') &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("Type != ERangeBoundTypes::Open",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                              ,99,L""), bVar16)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      uVar33 = *(ulonglong *)((longlong)&param_1->_padding_ + 4);
    }
    else {
      uStack_2dc = 0;
      uVar33 = (ulonglong)uVar18;
      uVar42 = local_268;
      local_2e0 = uVar18;
    }
    local_308._4_4_ = (float)(uVar33 >> 0x20);
    fVar49 = local_308._4_4_ * (float)(int)uVar38;
    local_308 = (ForElementType<FConstraintAndActiveValue>)uVar33;
    URigVMHost::SetAbsoluteTime
              ((URigVMHost *)pUVar26,
               ((float)((longlong)(int)uVar33 * (longlong)local_268._4_4_) + fVar49) /
               (float)(int)uVar42,false);
    iVar5 = (this->SpaceValues).ArrayNum;
    FVar46 = (ForElementType<FControlSpaceAndValue>)&this->SpaceValues;
    FVar7 = (this->SpaceValues).AllocatorInstance.SecondaryData;
    if (FVar7 != (ForElementType<FControlSpaceAndValue>)0x0) {
      FVar46 = FVar7;
    }
    FVar7 = (ForElementType<FControlSpaceAndValue>)((longlong)FVar46 + (longlong)iVar5 * 0x18);
    while( true ) {
      if ((this->SpaceValues).ArrayNum != iVar5) {
        `TCheckedPointerIterator<FControlSpaceAndValue,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_324.field_0x4);
      }
      if (FVar46 == FVar7) break;
      pUVar43 = this->Section;
      if (*(int *)&(pUVar43->ControlsToSet).Elements.field_0x8 ==
          *(int *)&(pUVar43->ControlsToSet).Elements.field_0x34) {
LAB_14a40894d:
        this_00 = (pUVar26->DynamicHierarchy).field0_0x0.DebugPtr;
        if ((this_00 != (URigHierarchy *)0x0) &&
           (lVar22 = (**(code **)(pUVar26->_padding_ + 0x3c8))(pUVar26,FVar46), lVar22 != 0)) {
          uVar3 = *(uchar *)((longlong)FVar46 + 8);
          local_2f0._0_8_ = *(undefined8 *)(lVar22 + 0x10);
          local_2f0.Name.Number = *(uint *)(lVar22 + 0x18);
          if (uVar3 == '\0') {
            local_258._0_8_ = local_2f0._0_8_;
            local_258.Name.Number = local_2f0.Name.Number;
            pFVar34 = URigHierarchy::GetDefaultParent(this_00,local_5c,&local_258);
          }
          else if (uVar3 == '\x01') {
            pFVar34 = URigHierarchy::GetWorldSpaceReferenceKey(&local_68);
          }
          else {
            if (uVar3 != '\x02') goto LAB_14a4089d8;
            pFVar34 = (FRigElementKey *)((longlong)FVar46 + 0xc);
          }
          UControlRig::SwitchToParent(pUVar26,&local_2f0,pFVar34,false,true);
        }
LAB_14a4089d8:
        FVar46 = (ForElementType<FControlSpaceAndValue>)((longlong)FVar46 + 0x18);
      }
      else {
        lVar22 = *(longlong *)FVar46;
        uVar18 = ::GetTypeHash((FNameEntryId)(uint)lVar22);
        if (*(int *)&(pUVar43->ControlsToSet).Elements.field_0x8 ==
            *(int *)&(pUVar43->ControlsToSet).Elements.field_0x34) goto LAB_14a4089d8;
        FVar8 = (pUVar43->ControlsToSet).Hash.SecondaryData;
        FVar39 = (ForElementType<FSetElementId>)&(pUVar43->ControlsToSet).Hash;
        if (FVar8 != (ForElementType<FSetElementId>)0x0) {
          FVar39 = FVar8;
        }
        iVar19 = *(int *)((longlong)FVar39 +
                         (ulonglong)
                         ((pUVar43->ControlsToSet).HashSize - 1U &
                         (int)((ulonglong)lVar22 >> 0x20) + uVar18) * 4);
        if (iVar19 == -1) goto LAB_14a4089d8;
        lVar9 = *(longlong *)&(pUVar43->ControlsToSet).Elements;
        do {
          if (*(longlong *)(lVar9 + (longlong)iVar19 * 0x10) == lVar22) goto LAB_14a40894d;
          iVar19 = *(int *)(lVar9 + 8 + (longlong)iVar19 * 0x10);
        } while (iVar19 != -1);
        FVar46 = (ForElementType<FControlSpaceAndValue>)((longlong)FVar46 + 0x18);
      }
    }
    FVar10 = (this->BoolValues).AllocatorInstance.SecondaryData;
    FVar47 = (ForElementType<FBoolParameterStringAndValue>)&this->BoolValues;
    iVar5 = (this->BoolValues).ArrayNum;
    if (FVar10 != (ForElementType<FBoolParameterStringAndValue>)0x0) {
      FVar47 = FVar10;
    }
    FVar10 = (ForElementType<FBoolParameterStringAndValue>)
             ((longlong)FVar47 + (longlong)iVar5 * 0xc);
    while( true ) {
      if ((this->BoolValues).ArrayNum != iVar5) {
        `TCheckedPointerIterator<FBoolParameterStringAndValue,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(&local_324.field_0x5);
      }
      if (FVar47 == FVar10) break;
      pUVar43 = this->Section;
      if (*(int *)&(pUVar43->ControlsToSet).Elements.field_0x8 ==
          *(int *)&(pUVar43->ControlsToSet).Elements.field_0x34) {
LAB_14a408aad:
        lVar22 = (**(code **)(pUVar26->_padding_ + 0x3c8))(pUVar26,FVar47);
        if (((lVar22 != 0) && (*(char *)(lVar22 + 0x230) != '\x02')) &&
           ((*(char *)(lVar22 + 0x230) != '\x03' && (*(char *)(lVar22 + 0x231) == '\0')))) {
          local_2a8 = 0;
          local_2a4 = 0;
          local_170[1] = 0;
          local_170[0] = (ulonglong)*(byte *)((longlong)FVar47 + 8);
          in_stack_fffffffffffffcc0 = in_stack_fffffffffffffcc0 & 0xffffffffffffff00;
          local_2b8[0] = 2;
          local_2b4 = 0x1ff;
          local_2b0 = 0x7f7fffff;
          local_170[2] = 0;
          local_170[3] = 0;
          local_f0 = 1;
          local_170[4] = 0;
          local_170[5] = 0;
          local_170[6] = 0;
          local_170[7] = 0;
          local_170[8] = 0;
          local_170[9] = 0;
          local_170[10] = 0;
          local_170[0xb] = 0;
          local_170[0xc] = 0;
          local_170[0xd] = 0;
          local_170[0xe] = 0;
          local_170[0xf] = 0;
          (**(code **)(pUVar26->_padding_ + 0x3f0))
                    (pUVar26,FVar47,local_170,1,local_2b8,in_stack_fffffffffffffcc0,0,0);
        }
LAB_14a408b8a:
        FVar47 = (ForElementType<FBoolParameterStringAndValue>)((longlong)FVar47 + 0xc);
      }
      else {
        lVar22 = *(longlong *)FVar47;
        uVar18 = ::GetTypeHash((FNameEntryId)(uint)lVar22);
        if (*(int *)&(pUVar43->ControlsToSet).Elements.field_0x8 ==
            *(int *)&(pUVar43->ControlsToSet).Elements.field_0x34) goto LAB_14a408b8a;
        FVar8 = (pUVar43->ControlsToSet).Hash.SecondaryData;
        FVar39 = (ForElementType<FSetElementId>)&(pUVar43->ControlsToSet).Hash;
        if (FVar8 != (ForElementType<FSetElementId>)0x0) {
          FVar39 = FVar8;
        }
        iVar19 = *(int *)((longlong)FVar39 +
                         (ulonglong)
                         ((pUVar43->ControlsToSet).HashSize - 1U &
                         (int)((ulonglong)lVar22 >> 0x20) + uVar18) * 4);
        if (iVar19 == -1) goto LAB_14a408b8a;
        lVar9 = *(longlong *)&(pUVar43->ControlsToSet).Elements;
        do {
          if (*(longlong *)(lVar9 + (longlong)iVar19 * 0x10) == lVar22) goto LAB_14a408aad;
          iVar19 = *(int *)(lVar9 + 8 + (longlong)iVar19 * 0x10);
        } while (iVar19 != -1);
        FVar47 = (ForElementType<FBoolParameterStringAndValue>)((longlong)FVar47 + 0xc);
      }
    }
    FVar11 = (this->IntegerValues).AllocatorInstance.SecondaryData;
    FVar48 = (ForElementType<FIntegerParameterStringAndValue>)&this->IntegerValues;
    iVar5 = (this->IntegerValues).ArrayNum;
    if (FVar11 != (ForElementType<FIntegerParameterStringAndValue>)0x0) {
      FVar48 = FVar11;
    }
    FVar11 = (ForElementType<FIntegerParameterStringAndValue>)
             ((longlong)FVar48 + (longlong)iVar5 * 0xc);
    while( true ) {
      if ((this->IntegerValues).ArrayNum != iVar5) {
        `TCheckedPointerIterator<FIntegerParameterStringAndValue,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_324.field_0x6);
      }
      if (FVar48 == FVar11) break;
      pUVar43 = this->Section;
      if (*(int *)&(pUVar43->ControlsToSet).Elements.field_0x8 ==
          *(int *)&(pUVar43->ControlsToSet).Elements.field_0x34) {
LAB_14a408c61:
        lVar22 = (**(code **)(pUVar26->_padding_ + 0x3c8))(pUVar26,FVar48);
        if ((((lVar22 != 0) && (*(char *)(lVar22 + 0x230) != '\x02')) &&
            (*(char *)(lVar22 + 0x230) != '\x03')) && (*(char *)(lVar22 + 0x231) == '\x02')) {
          local_290 = 0;
          local_28c = 0;
          local_ec[1] = 0;
          local_ec[0] = (ulonglong)*(uint *)((longlong)FVar48 + 8);
          in_stack_fffffffffffffcc0 = in_stack_fffffffffffffcc0 & 0xffffffffffffff00;
          local_2a0[0] = 2;
          local_29c = 0x1ff;
          local_298 = 0x7f7fffff;
          local_ec[2] = 0;
          local_ec[3] = 0;
          local_6c = 1;
          local_ec[4] = 0;
          local_ec[5] = 0;
          local_ec[6] = 0;
          local_ec[7] = 0;
          local_ec[8] = 0;
          local_ec[9] = 0;
          local_ec[10] = 0;
          local_ec[0xb] = 0;
          local_ec[0xc] = 0;
          local_ec[0xd] = 0;
          local_ec[0xe] = 0;
          local_ec[0xf] = 0;
          (**(code **)(pUVar26->_padding_ + 0x3f0))
                    (pUVar26,FVar48,local_ec,1,local_2a0,in_stack_fffffffffffffcc0,0,0);
        }
LAB_14a408d3d:
        FVar48 = (ForElementType<FIntegerParameterStringAndValue>)((longlong)FVar48 + 0xc);
      }
      else {
        lVar22 = *(longlong *)FVar48;
        uVar18 = ::GetTypeHash((FNameEntryId)(uint)lVar22);
        if (*(int *)&(pUVar43->ControlsToSet).Elements.field_0x8 ==
            *(int *)&(pUVar43->ControlsToSet).Elements.field_0x34) goto LAB_14a408d3d;
        FVar8 = (pUVar43->ControlsToSet).Hash.SecondaryData;
        FVar39 = (ForElementType<FSetElementId>)&(pUVar43->ControlsToSet).Hash;
        if (FVar8 != (ForElementType<FSetElementId>)0x0) {
          FVar39 = FVar8;
        }
        iVar19 = *(int *)((longlong)FVar39 +
                         (ulonglong)
                         ((pUVar43->ControlsToSet).HashSize - 1U &
                         (int)((ulonglong)lVar22 >> 0x20) + uVar18) * 4);
        if (iVar19 == -1) goto LAB_14a408d3d;
        lVar9 = *(longlong *)&(pUVar43->ControlsToSet).Elements;
        do {
          if (*(longlong *)(lVar9 + (longlong)iVar19 * 0x10) == lVar22) goto LAB_14a408c61;
          iVar19 = *(int *)(lVar9 + 8 + (longlong)iVar19 * 0x10);
        } while (iVar19 != -1);
        FVar48 = (ForElementType<FIntegerParameterStringAndValue>)((longlong)FVar48 + 0xc);
      }
    }
    this_05 = (ForElementType<FConstraintAndActiveValue>)&this->ConstraintsValues;
    piVar1 = &(this->ConstraintsValues).ArrayNum;
    if (local_318 == (UObject *)0x0) {
      FVar12 = (this->ConstraintsValues).AllocatorInstance.SecondaryData;
      iVar5 = *piVar1;
      if (FVar12 != (ForElementType<FConstraintAndActiveValue>)0x0) {
        this_05 = FVar12;
      }
      FVar12 = (ForElementType<FConstraintAndActiveValue>)
               ((longlong)this_05 + (longlong)iVar5 * 0xc);
      while( true ) {
        if (*piVar1 != iVar5) {
          `TCheckedPointerIterator<FConstraintAndActiveValue,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_31c);
        }
        if (this_05 == FVar12) break;
        bVar16 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this_05);
        if (bVar16) {
          pUVar21 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_05);
          (**(code **)(*(longlong *)pUVar21 + 0x2c8))
                    (pUVar21,*(undefined1 *)((longlong)this_05 + 8));
        }
        this_05 = (ForElementType<FConstraintAndActiveValue>)((longlong)this_05 + 0xc);
      }
    }
    else {
      pUVar23 = (UWorld *)(**(code **)(*(longlong *)local_318 + 0x180))(local_318);
      IMovieScenePlayer::GetSharedPlaybackState(param_4,&local_278);
      FVar12 = (this->ConstraintsValues).AllocatorInstance.SecondaryData;
      iVar5 = *piVar1;
      if (FVar12 != (ForElementType<FConstraintAndActiveValue>)0x0) {
        this_05 = FVar12;
      }
      local_308 = (ForElementType<FConstraintAndActiveValue>)
                  ((longlong)this_05 + (longlong)iVar5 * 0xc);
      while( true ) {
        FVar12 = local_308;
        if (*piVar1 != iVar5) {
          `TCheckedPointerIterator<FConstraintAndActiveValue,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_324.field_0x7);
        }
        if (this_05 == FVar12) break;
        pUVar43 = this->Section;
        pUVar21 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_05);
        if ((pUVar21 != (UObject *)0x0) && (pUVar23 != (UWorld *)0x0)) {
          pFVar35 = FConstraintsManagerController::Get(pUVar23);
          pUVar36 = FConstraintsManagerController::GetConstraint
                              (pFVar35,(FGuid *)&pUVar21[1].field_0x4);
          if (pUVar36 == (UTickableConstraint *)0x0) {
            pFVar35 = FConstraintsManagerController::Get(pUVar23);
            pUVar36 = (UTickableConstraint *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_05);
            FConstraintsManagerController::AddConstraint(pFVar35,pUVar36);
            pUVar13 = (pUVar43->ControlRig).field0_0x0.DebugPtr;
            if ((pUVar13 != (UControlRig *)0x0) &&
               (lVar22 = (**(code **)(pUVar13->_padding_ + 0x180))(), lVar22 != 0)) {
              (**(code **)(pUVar43->_padding_ + 0x3a8))(pUVar43);
              UMovieSceneSignedObject::MarkAsChanged((UMovieSceneSignedObject *)pUVar43);
            }
          }
        }
        bVar16 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this_05);
        if (bVar16) {
          pUVar21 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_05);
          if (pUVar21 == (UObject *)0x0) {
LAB_14a408e95:
            pUVar21 = (UObject *)0x0;
          }
          else {
            pUVar24 = Z_Construct_UClass_UTickableTransformConstraint_NoRegister();
            iVar19 = (int)pUVar24->_padding_;
            if ((*(int *)(*(longlong *)&pUVar21->field_0x10 + 0x38) < iVar19) ||
               ((longlong *)
                *(undefined1 **)
                 (*(longlong *)(*(longlong *)&pUVar21->field_0x10 + 0x30) + (longlong)iVar19 * 8) !=
                &pUVar24->_padding_)) goto LAB_14a408e95;
            (**(code **)(*(longlong *)pUVar21 + 0x300))(pUVar21,pUVar23);
          }
          pUVar28 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_05);
          local_198 = local_278.Object;
          pTStack_190 = local_278.SharedReferenceCount.ReferenceController;
          pcVar14 = *(code **)(*(longlong *)pUVar28 + 0x2e0);
          if (local_278.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_278.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_278.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
          (*pcVar14)(pUVar28,(param_2->SequenceID).Value,&local_198,pUVar26);
          pUVar28 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_05);
          (**(code **)(*(longlong *)pUVar28 + 0x2c8))
                    (pUVar28,*(undefined1 *)((longlong)this_05 + 8));
          if ((((pUVar21 != (UObject *)0x0) && (*(char *)((longlong)this_05 + 8) != '\0')) &&
              (bVar16 = TransformableHandleUtils::SkipTicking(), bVar16)) &&
             (*(longlong *)&pUVar21[3].field_0x18 != 0)) {
            pUVar24 = Z_Construct_UClass_UTransformableComponentHandle_NoRegister();
            bVar16 = FObjectPtr::IsA((FObjectPtr *)&pUVar21[3].field_0x18,pUVar24);
            if ((bVar16) && (*(longlong *)&pUVar21[3].field_0x18 != 0)) {
              if (((*(uint *)(*(longlong *)&pUVar21[3].field_0x18 + 8) >> 0x1e & 1) == 0) &&
                 (cVar17 = (**(code **)(**(longlong **)&pUVar21[3].field_0x18 + 0x2b0))
                                     (*(longlong **)&pUVar21[3].field_0x18,1), cVar17 != '\0')) {
                this_04 = (FWeakObjectPtr *)
                          (**(code **)(**(longlong **)&pUVar21[3].field_0x18 + 0x330))
                                    (*(longlong **)&pUVar21[3].field_0x18,local_188);
                pUVar37 = (USceneComponent *)FWeakObjectPtr::Get(this_04);
                if (pUVar37 == (USceneComponent *)0x0) goto LAB_14a408fbe;
                pUVar24 = Z_Construct_UClass_USceneComponent_NoRegister();
                iVar19 = (int)pUVar24->_padding_;
                if ((*(int *)(pUVar37->_padding_ + 0x38) < iVar19) ||
                   ((longlong *)
                    *(undefined1 **)
                     (*(longlong *)(pUVar37->_padding_ + 0x30) + (longlong)iVar19 * 8) !=
                    &pUVar24->_padding_)) goto LAB_14a408fbe;
              }
              else {
LAB_14a408fbe:
                pUVar37 = (USceneComponent *)0x0;
              }
              TransformableHandleUtils::MarkComponentForEvaluation(pUVar37,true);
            }
          }
        }
        this_05 = (ForElementType<FConstraintAndActiveValue>)((longlong)this_05 + 0xc);
      }
      ResolveParentHandles(this,local_318,pUVar26,param_2,&local_278);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_278.SharedReferenceCount.ReferenceController);
    }
  }
  this->Section->bDoNotKey = bVar15;
  return;
}

// ResolveParentHandles @ 14a4510e0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FControlRigParameterExecutionToken::ResolveParentHandles
          (FControlRigParameterExecutionToken *this,UObject *param_1,UControlRig *param_2,
          FMovieSceneEvaluationOperand *param_3,
          TSharedRef<UE::MovieScene::FSharedPlaybackState,1> *param_4)

{
  UTransformableHandle *this_00;
  int iVar1;
  UMovieSceneControlRigParameterSection *this_01;
  UControlRig *pUVar2;
  FWeakObjectPtr *pFVar3;
  bool bVar4;
  UWorld *pUVar5;
  longlong lVar6;
  UWorld *this_02;
  UClass *pUVar7;
  UMovieSceneControlRigParameterTrack *pUVar8;
  FConstraintsManagerController *this_03;
  UTickableTransformConstraint *this_04;
  UObject *pUVar9;
  UControlRig *pUVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  FSharedPlaybackState **ppFVar13;
  code *pcVar14;
  ForAnyElementType this_05;
  UTransformableHandle *pUVar15;
  bool local_res10;
  undefined1 local_c8 [8];
  UMovieSceneControlRigParameterTrack *local_c0;
  uint local_b8;
  undefined8 local_b4;
  UWorld *local_a8;
  TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_a0;
  undefined1 local_90 [8];
  FSoftObjectPath local_88;
  UControlRig *local_68;
  FWeakObjectPtr *local_60;
  FSharedPlaybackState *local_58;
  TReferenceControllerBase<1> *local_50;
  FSharedPlaybackState *local_48;
  TReferenceControllerBase<1> *local_40;
  
  if (param_1 != (UObject *)0x0) {
    pUVar5 = (UWorld *)(**(code **)(*(longlong *)param_1 + 0x180))(param_1);
    local_a8 = pUVar5;
    lVar6 = (**(code **)(*(longlong *)param_1 + 0x180))(param_1);
    if (lVar6 == 0) {
      local_res10 = false;
    }
    else {
      this_02 = (UWorld *)(**(code **)(*(longlong *)param_1 + 0x180))(param_1);
      local_res10 = UWorld::IsGameWorld(this_02);
    }
    this_01 = this->Section;
    pUVar7 = UMovieSceneControlRigParameterTrack::StaticClass();
    pUVar8 = (UMovieSceneControlRigParameterTrack *)
             UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this_01,pUVar7);
    pUVar2 = (this->Section->ControlRig).field0_0x0.DebugPtr;
    local_c0 = pUVar8;
    this_03 = FConstraintsManagerController::Get(pUVar5);
    FConstraintsManagerController::GetAllConstraints(this_03,&local_a0,false);
    uVar11 = (ulonglong)local_a0.ArrayNum;
    local_b8 = local_a0.ArrayNum;
    local_60 = (FWeakObjectPtr *)(local_a0.AllocatorInstance.Data + uVar11 * 8);
    uVar12 = uVar11;
    this_05.Data = local_a0.AllocatorInstance.Data;
    while( true ) {
      pFVar3 = local_60;
      if ((int)uVar12 != (int)uVar11) {
        `TCheckedPointerIterator<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>_const_,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_c8);
      }
      if ((FWeakObjectPtr *)this_05.Data == pFVar3) break;
      this_04 = (UTickableTransformConstraint *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_05.Data);
      if (this_04 != (UTickableTransformConstraint *)0x0) {
        pUVar7 = Z_Construct_UClass_UTickableTransformConstraint_NoRegister();
        iVar1 = (int)pUVar7->_padding_;
        if ((iVar1 <= *(int *)(this_04->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(this_04->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
            &pUVar7->_padding_)) {
          if ((this_04->ParentTRSHandle).field0_0x0.DebugPtr == (UTransformableHandle *)0x0) {
LAB_14a451240:
            pUVar15 = (UTransformableHandle *)0x0;
          }
          else {
            pUVar7 = Z_Construct_UClass_UTransformableControlHandle_NoRegister();
            bVar4 = FObjectPtr::IsA((FObjectPtr *)&this_04->ParentTRSHandle,pUVar7);
            if (!bVar4) goto LAB_14a451240;
            pUVar15 = (this_04->ParentTRSHandle).field0_0x0.DebugPtr;
          }
          if (pUVar15 != (UTransformableHandle *)0x0) {
            this_00 = pUVar15 + 1;
            if (pUVar8 == (UMovieSceneControlRigParameterTrack *)0x0) {
              pUVar8 = (UMovieSceneControlRigParameterTrack *)0x0;
            }
            else {
              pUVar9 = TPersistentObjectPtr<FSoftObjectPath>::Get
                                 ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
              pUVar8 = local_c0;
              if (pUVar9 != (UObject *)0x0) {
                pUVar7 = Z_Construct_UClass_UControlRig_NoRegister();
                iVar1 = (int)pUVar7->_padding_;
                pUVar8 = local_c0;
                if ((iVar1 <= *(int *)(*(longlong *)&pUVar9->field_0x10 + 0x38)) &&
                   ((longlong *)
                    *(undefined1 **)
                     (*(longlong *)(*(longlong *)&pUVar9->field_0x10 + 0x30) + (longlong)iVar1 * 8)
                    == &pUVar7->_padding_)) {
                  pUVar9 = TPersistentObjectPtr<FSoftObjectPath>::Get
                                     ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
                  if (pUVar9 == (UObject *)0x0) {
LAB_14a4512c6:
                    pUVar9 = (UObject *)0x0;
                  }
                  else {
                    pUVar7 = Z_Construct_UClass_UControlRig_NoRegister();
                    iVar1 = (int)pUVar7->_padding_;
                    if ((*(int *)(*(longlong *)&pUVar9->field_0x10 + 0x38) < iVar1) ||
                       ((longlong *)
                        *(undefined1 **)
                         (*(longlong *)(*(longlong *)&pUVar9->field_0x10 + 0x30) +
                         (longlong)iVar1 * 8) != &pUVar7->_padding_)) goto LAB_14a4512c6;
                  }
                  bVar4 = UObjectBaseUtility::IsInOuter
                                    ((UObjectBaseUtility *)pUVar9,(UObject *)local_c0);
                  pUVar8 = local_c0;
                  if (!bVar4) goto LAB_14a451432;
                }
              }
            }
            if (local_res10 == false) {
              pUVar10 = (UControlRig *)
                        TPersistentObjectPtr<FSoftObjectPath>::Get
                                  ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
              if (pUVar10 == (UControlRig *)0x0) {
LAB_14a4513d2:
                pUVar10 = (UControlRig *)0x0;
              }
              else {
                pUVar7 = Z_Construct_UClass_UControlRig_NoRegister();
                iVar1 = (int)pUVar7->_padding_;
                if ((*(int *)(pUVar10->_padding_ + 0x38) < iVar1) ||
                   ((longlong *)
                    *(undefined1 **)(*(longlong *)(pUVar10->_padding_ + 0x30) + (longlong)iVar1 * 8)
                    != &pUVar7->_padding_)) goto LAB_14a4513d2;
              }
              if ((pUVar8 == (UMovieSceneControlRigParameterTrack *)0x0) ||
                 (bVar4 = UMovieSceneControlRigParameterTrack::IsAGameInstance(pUVar8,pUVar10,false)
                 , !bVar4)) goto LAB_14a451432;
              pcVar14 = *(code **)(pUVar15->_padding_ + 0x2e0);
              local_48 = param_4->Object;
              local_40 = (param_4->SharedReferenceCount).ReferenceController;
              if (local_40 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                local_40->SharedReferenceCount =
                     (atomic<int>)((int)local_40->SharedReferenceCount + 1);
                UNLOCK();
              }
              ppFVar13 = &local_48;
            }
            else {
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (pUVar2 != (UControlRig *)0x0)) {
                UE::GC::MarkAsReachable((UObject *)pUVar2);
              }
              local_88.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_88.SubPathString.Data.ArrayNum = 0;
              local_88.SubPathString.Data.ArrayMax = 0;
              local_90 = (undefined1  [8])0x0;
              local_b4 = 0;
              local_88.AssetPath.AssetName.ComparisonIndex.Value = 0;
              local_88.AssetPath.AssetName.Number = 0;
              local_88.AssetPath.PackageName.ComparisonIndex.Value = 0;
              local_88.AssetPath.PackageName.Number = 0;
              FUtf8String::Reset(&local_88.SubPathString,0);
              local_68 = pUVar2;
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (pUVar2 != (UControlRig *)0x0)) {
                UE::GC::MarkAsReachable((UObject *)pUVar2);
              }
              FSoftObjectPtr::operator=((FSoftObjectPtr *)local_90,(FObjectPtr)&local_68);
              bVar4 = FSoftObjectPath::operator==
                                ((FSoftObjectPath *)&pUVar15[1]._padding_,&local_88);
              if (local_88.SubPathString.Data.AllocatorInstance.Data !=
                  (FScriptContainerElement *)0x0) {
                FMemory::Free(local_88.SubPathString.Data.AllocatorInstance.Data);
              }
              if (!bVar4) goto LAB_14a451432;
              pcVar14 = *(code **)(pUVar15->_padding_ + 0x2e0);
              local_58 = param_4->Object;
              local_50 = (param_4->SharedReferenceCount).ReferenceController;
              if (local_50 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                local_50->SharedReferenceCount =
                     (atomic<int>)((int)local_50->SharedReferenceCount + 1);
                UNLOCK();
              }
              ppFVar13 = &local_58;
            }
            (*pcVar14)(pUVar15,(param_3->SequenceID).Value,ppFVar13,param_2);
            UTickableTransformConstraint::EnsurePrimaryDependency(this_04,local_a8);
          }
        }
      }
LAB_14a451432:
      uVar12 = (ulonglong)(uint)local_a0.ArrayNum;
      this_05.Data = this_05.Data + 8;
      uVar11 = (ulonglong)local_b8;
      pUVar8 = local_c0;
    }
    if ((FWeakObjectPtr *)local_a0.AllocatorInstance.Data != (FWeakObjectPtr *)0x0) {
      FMemory::Free(local_a0.AllocatorInstance.Data);
    }
  }
  return;
}

