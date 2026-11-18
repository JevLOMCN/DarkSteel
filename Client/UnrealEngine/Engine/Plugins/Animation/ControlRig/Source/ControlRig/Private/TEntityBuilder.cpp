// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 1

// TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_><UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,bool_&> @ 14a383c10

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
* __thiscall
UE::MovieScene::
TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
::
TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_><UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,bool_&>
          (TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
           *this,TAdd<UE::MovieScene::FControlRigSourceData> *param_1,TAdd<FName> *param_2,
          FAdd *param_3,FAdd *param_4,TAddConditional<UE::MovieScene::FSourceFloatChannel> *param_5,
          TAddConditional<UE::MovieScene::FSourceFloatChannel> *param_6,
          TAddConditional<UE::MovieScene::FSourceFloatChannel> *param_7,bool *param_8)

{
  bool bVar1;
  bool bVar2;
  
  bVar1 = *param_8;
  *(undefined ***)this =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02_03_04_05__U__TAdd_UFControlRigSourceData_MovieScene_UE___MovieScene_UE__U__TAdd_VFName___34_UFAdd_34_U634_U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___34_U734_U734__MovieScene_UE__6B_
  ;
  *(short *)&this->field_0x8 = (short)param_1->_padding_;
  this->field_0x18 = 0;
  bVar2 = (param_1->Payload).bIsSet;
  this->field_0x18 = bVar2;
  if (bVar2 != false) {
    *(UMovieSceneControlRigParameterTrack **)&this->field_0x10 = (param_1->Payload).TypedValue.Track
    ;
  }
  *(short *)&this->field_0x20 = (short)param_2->_padding_;
  *(undefined4 *)&this->field_0x24 = 0xffffffff;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((param_2->Payload).field0_0x0.TypedValue.ComparisonIndex.Value != 0xffffffff) {
    *(TOptional<FName>_u_0 *)&this->field_0x24 = (param_2->Payload).field0_0x0;
  }
  *(ushort *)&this->field_0x2c = (param_3->ComponentTypeID).Value;
  *(ushort *)&this->field_0x2e = (param_4->ComponentTypeID).Value;
  *(int *)&this->field_0x30 = (int)param_5->_padding_;
  this->field_0x40 = 0;
  bVar2 = (param_5->Payload).bIsSet;
  this->field_0x40 = bVar2;
  if (bVar2 != false) {
    *(FMovieSceneFloatChannel **)&this->field_0x38 = (param_5->Payload).TypedValue.Source;
  }
  *(int *)&this->field_0x48 = (int)param_6->_padding_;
  this->field_0x58 = 0;
  bVar2 = (param_6->Payload).bIsSet;
  this->field_0x58 = bVar2;
  if (bVar2 != false) {
    *(FMovieSceneFloatChannel **)&this->field_0x50 = (param_6->Payload).TypedValue.Source;
  }
  *(int *)&this->field_0x60 = (int)param_7->_padding_;
  this->field_0x70 = 0;
  bVar2 = (param_7->Payload).bIsSet;
  this->field_0x70 = bVar2;
  if (bVar2 != false) {
    *(FMovieSceneFloatChannel **)&this->field_0x68 = (param_7->Payload).TypedValue.Source;
  }
  this->field_0x78 = bVar1;
  *(undefined ***)this =
       &
       ___7__TEntityBuilder_U__TAdd_UFControlRigSourceData_MovieScene_UE___MovieScene_UE__U__TAdd_VFName___23_UFAdd_23_U523_U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___23_U623_U623__MovieScene_UE__6B_
  ;
  return this;
}

