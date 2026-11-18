// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 1

// TEntityBuilder<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>_><UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,bool_&> @ 1461e9580

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

TEntityBuilder<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>_>
* __thiscall
UE::MovieScene::
TEntityBuilder<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>_>
::
TEntityBuilder<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>_><UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,bool_&>
          (TEntityBuilder<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>_>
           *this,TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_> *param_1,
          TAddConditional<int> *param_2,TAddConditional<FEasingComponentData> *param_3,
          TAddConditional<short> *param_4,
          TAddConditional<UE::MovieScene::FInterrogationKey> *param_5,
          TAddConditional<UE::MovieScene::FInterrogationInstance> *param_6,bool *param_7)

{
  bool bVar1;
  bool bVar2;
  UClass *pUVar3;
  UMovieSceneSection *pUVar4;
  int iVar5;
  
  bVar1 = *param_7;
  *(undefined ***)this =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02_03_04__U__TAddConditional_V__TSubclassOf_VUMovieSceneBlenderSystem_____MovieScene_UE__U__TAddConditional_H_34_U__TAddConditional_UFEasingComponentData___34_U__TAddConditional_F_34_U__TAddConditional_UFInterrogationKey_MovieScene_UE___34_U__TAddConditional_UFInterrogationInstance_MovieScene_UE___34__MovieScene_UE__6B_
  ;
  *(int *)&this->field_0x8 = (int)param_1->_padding_;
  this->field_0x18 = 0;
  bVar2 = (param_1->Payload).bIsSet;
  this->field_0x18 = bVar2;
  if (bVar2 != false) {
    pUVar3 = (param_1->Payload).TypedValue.Class.field0_0x0.DebugPtr;
    *(UClass **)&this->field_0x10 = pUVar3;
    if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UClass *)0x0)) {
      GC::MarkAsReachable((UObject *)pUVar3);
    }
  }
  *(int *)&this->field_0x20 = param_2->_padding_;
  this->field_0x28 = 0;
  bVar2 = (param_2->Payload).bIsSet;
  this->field_0x28 = bVar2;
  if (bVar2 != false) {
    *(int *)&this->field_0x24 = (param_2->Payload).TypedValue;
  }
  *(int *)&this->field_0x30 = (int)param_3->_padding_;
  this->field_0x40 = 0;
  bVar2 = (param_3->Payload).bIsSet;
  this->field_0x40 = bVar2;
  if (bVar2 != false) {
    pUVar4 = (param_3->Payload).TypedValue.Section.field0_0x0.DebugPtr;
    *(UMovieSceneSection **)&this->field_0x38 = pUVar4;
    if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UMovieSceneSection *)0x0)) {
      GC::MarkAsReachable((UObject *)pUVar4);
    }
  }
  *(int *)&this->field_0x48 = param_4->_padding_;
  this->field_0x4e = 0;
  bVar2 = (param_4->Payload).bIsSet;
  this->field_0x4e = bVar2;
  if (bVar2 != false) {
    *(short *)&this->field_0x4c = (param_4->Payload).TypedValue;
  }
  *(int *)&this->field_0x50 = param_5->_padding_;
  this->field_0x5c = 0;
  bVar2 = (param_5->Payload).bIsSet;
  this->field_0x5c = bVar2;
  if (bVar2 != false) {
    iVar5 = (param_5->Payload).TypedValue.InterrogationIndex;
    *(int *)&this->field_0x54 = (param_5->Payload).TypedValue.Channel.Value;
    *(int *)&this->field_0x58 = iVar5;
  }
  *(int *)&this->field_0x60 = (int)param_6->_padding_;
  this->field_0x70 = 0;
  bVar2 = (param_6->Payload).bIsSet;
  this->field_0x70 = bVar2;
  if (bVar2 != false) {
    *(UMovieSceneSequence **)&this->field_0x68 = (param_6->Payload).TypedValue.Sequence;
  }
  *(undefined ***)this =
       &
       ___7__TEntityBuilder_U__TAddConditional_V__TSubclassOf_VUMovieSceneBlenderSystem_____MovieScene_UE__U__TAddConditional_H_23_U__TAddConditional_UFEasingComponentData___23_U__TAddConditional_F_23_U__TAddConditional_UFInterrogationKey_MovieScene_UE___23_U__TAddConditional_UFInterrogationInstance_MovieScene_UE___23__MovieScene_UE__6B_
  ;
  this->field_0x78 = bVar1;
  return this;
}

