// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 41

// Add<UE::MovieScene::FWidgetMaterialPath,UE::MovieScene::FWidgetMaterialPath> @ 1468e0040

TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FWidgetMaterialPath>_> * __thiscall
UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int>_>::
Add<UE::MovieScene::FWidgetMaterialPath,UE::MovieScene::FWidgetMaterialPath>
          (TEntityBuilderImpl<TIntegerSequence<int>_> *this,
          TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FWidgetMaterialPath>_>
          *__return_storage_ptr__,TComponentTypeID<UE::MovieScene::FWidgetMaterialPath> param_1,
          FWidgetMaterialPath *param_2)

{
  FWidgetMaterialPath local_30;
  char local_10;
  
  FWidgetMaterialPath::FWidgetMaterialPath(&local_30,param_2);
  local_10 = '\x01';
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A___U__TAdd_UFWidgetMaterialPath_MovieScene_UE___MovieScene_UE___MovieScene_UE__6B_
  ;
  *(TComponentTypeID<UE::MovieScene::FWidgetMaterialPath> *)&__return_storage_ptr__->field_0x8 =
       param_1;
  __return_storage_ptr__->field_0x30 = 1;
  FWidgetMaterialPath::FWidgetMaterialPath
            ((FWidgetMaterialPath *)&__return_storage_ptr__->field_0x10,&local_30);
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilder_U__TAdd_UFWidgetMaterialPath_MovieScene_UE___MovieScene_UE___MovieScene_UE__6B_
  ;
  __return_storage_ptr__->field_0x38 = 0;
  if ((local_10 != '\0') &&
     (local_30.Path.AllocatorInstance.SecondaryData != (ForElementType<FName>)0x0)) {
    FMemory::Free((void *)local_30.Path.AllocatorInstance.SecondaryData);
  }
  return __return_storage_ptr__;
}

// AddConditional<FGuid,FGuid_&> @ 1468e2350

TEntityBuilder<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>_>
* __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>_>::
AddConditional<FGuid,FGuid_&>
          (TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>_>
           *this,TEntityBuilder<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>_>
                 *__return_storage_ptr__,TComponentTypeID<FGuid> param_1,FGuid *param_2,bool param_3
          )

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 local_28;
  
  uVar4 = param_2->A;
  uVar5 = param_2->B;
  uVar6 = param_2->C;
  uVar7 = param_2->D;
  local_28 = CONCAT22(CONCAT11(local_28._3_1_,param_3),param_1);
  bVar1 = this->bAddMutualComponents;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00__U__TAdd_UFMovieScenePropertyBinding___MovieScene_UE__U__TAddConditional_UFGuid___34__MovieScene_UE__6B_
  ;
  *(undefined2 *)&__return_storage_ptr__->field_0x8 = *(undefined2 *)&this->Payload;
  __return_storage_ptr__->field_0x20 = 0;
  cVar2 = (this->Payload).field_0x18;
  __return_storage_ptr__->field_0x20 = cVar2;
  if (cVar2 != '\0') {
    uVar3 = *(undefined8 *)&(this->Payload).field_0xc;
    *(undefined8 *)&__return_storage_ptr__->field_0xc = *(undefined8 *)&(this->Payload).field_0x4;
    *(undefined8 *)&__return_storage_ptr__->field_0x14 = uVar3;
    *(undefined4 *)&__return_storage_ptr__->field_0x1c = *(undefined4 *)&(this->Payload).field_0x14;
  }
  *(undefined4 *)&__return_storage_ptr__->field_0x24 = local_28;
  __return_storage_ptr__->field_0x38 = 1;
  *(uint *)&__return_storage_ptr__->field_0x28 = uVar4;
  *(uint *)&__return_storage_ptr__->field_0x2c = uVar5;
  *(uint *)&__return_storage_ptr__->field_0x30 = uVar6;
  *(uint *)&__return_storage_ptr__->field_0x34 = uVar7;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilder_U__TAdd_UFMovieScenePropertyBinding___MovieScene_UE__U__TAddConditional_UFGuid___23__MovieScene_UE__6B_
  ;
  __return_storage_ptr__->field_0x3c = bVar1;
  return __return_storage_ptr__;
}

// AddConditional<UE::MovieScene::FSourceFloatChannel,FMovieSceneFloatChannel_*> @ 1468e23d0

TEntityBuilder<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
* __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
::AddConditional<UE::MovieScene::FSourceFloatChannel,FMovieSceneFloatChannel_*>
          (TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
           *this,TEntityBuilder<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
                 *__return_storage_ptr__,
          TComponentTypeID<UE::MovieScene::FSourceFloatChannel> param_1,
          FMovieSceneFloatChannel **param_2,bool param_3)

{
  bool bVar1;
  TComponentTypeID<UE::MovieScene::FSourceFloatChannel> local_28;
  bool local_26;
  FSourceFloatChannel local_20;
  bool local_18;
  
  bVar1 = this->bAddMutualComponents;
  local_26 = param_3;
  local_20.Source = *param_2;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02_03_04_05_06_07__U__TAdd_UFMovieScenePropertyBinding___MovieScene_UE__U__TAddConditional_UFGuid___34_U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___34_U634_U634_U634_U634_U634_U634__MovieScene_UE__6B_
  ;
  local_18 = true;
  local_28 = param_1;
  Core::Private::Tuple::
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
  ::
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_><UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
            ((TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
              *)&__return_storage_ptr__->field_0x8,ForwardingConstructor,
             (TAdd<FMovieScenePropertyBinding> *)&this->Payload,
             (TAddConditional<FGuid> *)&(this->Payload).field_0x1c,
             (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&(this->Payload).field_0x38,
             (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&(this->Payload).field_0x50,
             (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&(this->Payload).field_0x68,
             (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&(this->Payload).field_0x80,
             (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&(this->Payload).field_0x98,
             (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&(this->Payload).field_0xb0,
             (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&local_28);
  __return_storage_ptr__->field_0xe8 = bVar1;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilder_U__TAdd_UFMovieScenePropertyBinding___MovieScene_UE__U__TAddConditional_UFGuid___23_U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___23_U523_U523_U523_U523_U523_U523__MovieScene_UE__6B_
  ;
  return __return_storage_ptr__;
}

// AddConditional<UE::MovieScene::FSourceFloatChannel,FMovieSceneFloatChannel_*> @ 1468e24c0

TEntityBuilder<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
* __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
::AddConditional<UE::MovieScene::FSourceFloatChannel,FMovieSceneFloatChannel_*>
          (TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
           *this,TEntityBuilder<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
                 *__return_storage_ptr__,
          TComponentTypeID<UE::MovieScene::FSourceFloatChannel> param_1,
          FMovieSceneFloatChannel **param_2,bool param_3)

{
  bool bVar1;
  TComponentTypeID<UE::MovieScene::FSourceFloatChannel> local_28;
  bool local_26;
  FSourceFloatChannel local_20;
  bool local_18;
  
  bVar1 = this->bAddMutualComponents;
  local_26 = param_3;
  local_20.Source = *param_2;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02_03_04_05_06__U__TAdd_UFMovieScenePropertyBinding___MovieScene_UE__U__TAddConditional_UFGuid___34_U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___34_U634_U634_U634_U634_U634__MovieScene_UE__6B_
  ;
  local_18 = true;
  local_28 = param_1;
  Core::Private::Tuple::
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
  ::
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_><UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
            ((TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
              *)&__return_storage_ptr__->field_0x8,ForwardingConstructor,
             (TAdd<FMovieScenePropertyBinding> *)&this->Payload,
             (TAddConditional<FGuid> *)&(this->Payload).field_0x1c,
             (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&(this->Payload).field_0x38,
             (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&(this->Payload).field_0x50,
             (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&(this->Payload).field_0x68,
             (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&(this->Payload).field_0x80,
             (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&(this->Payload).field_0x98,
             (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&local_28);
  __return_storage_ptr__->field_0xd0 = bVar1;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilder_U__TAdd_UFMovieScenePropertyBinding___MovieScene_UE__U__TAddConditional_UFGuid___23_U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___23_U523_U523_U523_U523_U523__MovieScene_UE__6B_
  ;
  return __return_storage_ptr__;
}

// AddConditional<UE::MovieScene::FSourceFloatChannel,FMovieSceneFloatChannel_*> @ 1468e2590

TEntityBuilder<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
* __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
::AddConditional<UE::MovieScene::FSourceFloatChannel,FMovieSceneFloatChannel_*>
          (TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
           *this,TEntityBuilder<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
                 *__return_storage_ptr__,
          TComponentTypeID<UE::MovieScene::FSourceFloatChannel> param_1,
          FMovieSceneFloatChannel **param_2,bool param_3)

{
  bool bVar1;
  char cVar2;
  FMovieSceneFloatChannel *pFVar3;
  undefined8 uVar4;
  undefined4 local_28;
  
  local_28 = CONCAT22(CONCAT11(local_28._3_1_,param_3),param_1);
  pFVar3 = *param_2;
  bVar1 = this->bAddMutualComponents;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02_03_04_05__U__TAdd_UFMovieScenePropertyBinding___MovieScene_UE__U__TAddConditional_UFGuid___34_U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___34_U634_U634_U634_U634__MovieScene_UE__6B_
  ;
  *(undefined2 *)&__return_storage_ptr__->field_0x8 = *(undefined2 *)&this->Payload;
  __return_storage_ptr__->field_0x20 = 0;
  cVar2 = (this->Payload).field_0x18;
  __return_storage_ptr__->field_0x20 = cVar2;
  if (cVar2 != '\0') {
    uVar4 = *(undefined8 *)&(this->Payload).field_0xc;
    *(undefined8 *)&__return_storage_ptr__->field_0xc = *(undefined8 *)&(this->Payload).field_0x4;
    *(undefined8 *)&__return_storage_ptr__->field_0x14 = uVar4;
    *(undefined4 *)&__return_storage_ptr__->field_0x1c = *(undefined4 *)&(this->Payload).field_0x14;
  }
  *(undefined4 *)&__return_storage_ptr__->field_0x24 = *(undefined4 *)&(this->Payload).field_0x1c;
  __return_storage_ptr__->field_0x38 = 0;
  cVar2 = (this->Payload).field_0x30;
  __return_storage_ptr__->field_0x38 = cVar2;
  if (cVar2 != '\0') {
    uVar4 = *(undefined8 *)&(this->Payload).field_0x28;
    *(undefined8 *)&__return_storage_ptr__->field_0x28 = *(undefined8 *)&(this->Payload).field_0x20;
    *(undefined8 *)&__return_storage_ptr__->field_0x30 = uVar4;
  }
  *(undefined4 *)&__return_storage_ptr__->field_0x40 = *(undefined4 *)&(this->Payload).field_0x38;
  __return_storage_ptr__->field_0x50 = 0;
  cVar2 = (this->Payload).field_0x48;
  __return_storage_ptr__->field_0x50 = cVar2;
  if (cVar2 != '\0') {
    *(undefined8 *)&__return_storage_ptr__->field_0x48 = *(undefined8 *)&(this->Payload).field_0x40;
  }
  *(undefined4 *)&__return_storage_ptr__->field_0x58 = *(undefined4 *)&(this->Payload).field_0x50;
  __return_storage_ptr__->field_0x68 = 0;
  cVar2 = (this->Payload).field_0x60;
  __return_storage_ptr__->field_0x68 = cVar2;
  if (cVar2 != '\0') {
    *(undefined8 *)&__return_storage_ptr__->field_0x60 = *(undefined8 *)&(this->Payload).field_0x58;
  }
  *(undefined4 *)&__return_storage_ptr__->field_0x70 = *(undefined4 *)&(this->Payload).field_0x68;
  __return_storage_ptr__->field_0x80 = 0;
  cVar2 = (this->Payload).field_0x78;
  __return_storage_ptr__->field_0x80 = cVar2;
  if (cVar2 != '\0') {
    *(undefined8 *)&__return_storage_ptr__->field_0x78 = *(undefined8 *)&(this->Payload).field_0x70;
  }
  *(undefined4 *)&__return_storage_ptr__->field_0x88 = *(undefined4 *)&(this->Payload).field_0x80;
  __return_storage_ptr__->field_0x98 = 0;
  cVar2 = (this->Payload).field_0x90;
  __return_storage_ptr__->field_0x98 = cVar2;
  if (cVar2 != '\0') {
    *(undefined8 *)&__return_storage_ptr__->field_0x90 = *(undefined8 *)&(this->Payload).field_0x88;
  }
  *(undefined4 *)&__return_storage_ptr__->field_0xa0 = local_28;
  __return_storage_ptr__->field_0xb0 = 1;
  *(FMovieSceneFloatChannel **)&__return_storage_ptr__->field_0xa8 = pFVar3;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilder_U__TAdd_UFMovieScenePropertyBinding___MovieScene_UE__U__TAddConditional_UFGuid___23_U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___23_U523_U523_U523_U523__MovieScene_UE__6B_
  ;
  __return_storage_ptr__->field_0xb8 = bVar1;
  return __return_storage_ptr__;
}

// AddConditional<UE::MovieScene::FSourceFloatChannel,FMovieSceneFloatChannel_*> @ 1468e26d0

TEntityBuilder<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
* __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
::AddConditional<UE::MovieScene::FSourceFloatChannel,FMovieSceneFloatChannel_*>
          (TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
           *this,TEntityBuilder<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
                 *__return_storage_ptr__,
          TComponentTypeID<UE::MovieScene::FSourceFloatChannel> param_1,
          FMovieSceneFloatChannel **param_2,bool param_3)

{
  bool bVar1;
  char cVar2;
  FMovieSceneFloatChannel *pFVar3;
  undefined8 uVar4;
  undefined4 local_28;
  
  local_28 = CONCAT22(CONCAT11(local_28._3_1_,param_3),param_1);
  pFVar3 = *param_2;
  bVar1 = this->bAddMutualComponents;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02_03_04__U__TAdd_UFMovieScenePropertyBinding___MovieScene_UE__U__TAddConditional_UFGuid___34_U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___34_U634_U634_U634__MovieScene_UE__6B_
  ;
  *(undefined2 *)&__return_storage_ptr__->field_0x8 = *(undefined2 *)&this->Payload;
  __return_storage_ptr__->field_0x20 = 0;
  cVar2 = (this->Payload).field_0x18;
  __return_storage_ptr__->field_0x20 = cVar2;
  if (cVar2 != '\0') {
    uVar4 = *(undefined8 *)&(this->Payload).field_0xc;
    *(undefined8 *)&__return_storage_ptr__->field_0xc = *(undefined8 *)&(this->Payload).field_0x4;
    *(undefined8 *)&__return_storage_ptr__->field_0x14 = uVar4;
    *(undefined4 *)&__return_storage_ptr__->field_0x1c = *(undefined4 *)&(this->Payload).field_0x14;
  }
  *(undefined4 *)&__return_storage_ptr__->field_0x24 = *(undefined4 *)&(this->Payload).field_0x1c;
  __return_storage_ptr__->field_0x38 = 0;
  cVar2 = (this->Payload).field_0x30;
  __return_storage_ptr__->field_0x38 = cVar2;
  if (cVar2 != '\0') {
    uVar4 = *(undefined8 *)&(this->Payload).field_0x28;
    *(undefined8 *)&__return_storage_ptr__->field_0x28 = *(undefined8 *)&(this->Payload).field_0x20;
    *(undefined8 *)&__return_storage_ptr__->field_0x30 = uVar4;
  }
  *(undefined4 *)&__return_storage_ptr__->field_0x40 = *(undefined4 *)&(this->Payload).field_0x38;
  __return_storage_ptr__->field_0x50 = 0;
  cVar2 = (this->Payload).field_0x48;
  __return_storage_ptr__->field_0x50 = cVar2;
  if (cVar2 != '\0') {
    *(undefined8 *)&__return_storage_ptr__->field_0x48 = *(undefined8 *)&(this->Payload).field_0x40;
  }
  *(undefined4 *)&__return_storage_ptr__->field_0x58 = *(undefined4 *)&(this->Payload).field_0x50;
  __return_storage_ptr__->field_0x68 = 0;
  cVar2 = (this->Payload).field_0x60;
  __return_storage_ptr__->field_0x68 = cVar2;
  if (cVar2 != '\0') {
    *(undefined8 *)&__return_storage_ptr__->field_0x60 = *(undefined8 *)&(this->Payload).field_0x58;
  }
  *(undefined4 *)&__return_storage_ptr__->field_0x70 = *(undefined4 *)&(this->Payload).field_0x68;
  __return_storage_ptr__->field_0x80 = 0;
  cVar2 = (this->Payload).field_0x78;
  __return_storage_ptr__->field_0x80 = cVar2;
  if (cVar2 != '\0') {
    *(undefined8 *)&__return_storage_ptr__->field_0x78 = *(undefined8 *)&(this->Payload).field_0x70;
  }
  *(undefined4 *)&__return_storage_ptr__->field_0x88 = local_28;
  __return_storage_ptr__->field_0x98 = 1;
  *(FMovieSceneFloatChannel **)&__return_storage_ptr__->field_0x90 = pFVar3;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilder_U__TAdd_UFMovieScenePropertyBinding___MovieScene_UE__U__TAddConditional_UFGuid___23_U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___23_U523_U523_U523__MovieScene_UE__6B_
  ;
  __return_storage_ptr__->field_0xa0 = bVar1;
  return __return_storage_ptr__;
}

// AddConditional<UE::MovieScene::FSourceFloatChannel,FMovieSceneFloatChannel_*> @ 1468e27d0

TEntityBuilder<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
* __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
::AddConditional<UE::MovieScene::FSourceFloatChannel,FMovieSceneFloatChannel_*>
          (TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
           *this,TEntityBuilder<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
                 *__return_storage_ptr__,
          TComponentTypeID<UE::MovieScene::FSourceFloatChannel> param_1,
          FMovieSceneFloatChannel **param_2,bool param_3)

{
  bool bVar1;
  char cVar2;
  FMovieSceneFloatChannel *pFVar3;
  undefined8 uVar4;
  undefined4 local_28;
  
  local_28 = CONCAT22(CONCAT11(local_28._3_1_,param_3),param_1);
  pFVar3 = *param_2;
  bVar1 = this->bAddMutualComponents;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02_03__U__TAdd_UFMovieScenePropertyBinding___MovieScene_UE__U__TAddConditional_UFGuid___34_U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___34_U634_U634__MovieScene_UE__6B_
  ;
  *(undefined2 *)&__return_storage_ptr__->field_0x8 = *(undefined2 *)&this->Payload;
  __return_storage_ptr__->field_0x20 = 0;
  cVar2 = (this->Payload).field_0x18;
  __return_storage_ptr__->field_0x20 = cVar2;
  if (cVar2 != '\0') {
    uVar4 = *(undefined8 *)&(this->Payload).field_0xc;
    *(undefined8 *)&__return_storage_ptr__->field_0xc = *(undefined8 *)&(this->Payload).field_0x4;
    *(undefined8 *)&__return_storage_ptr__->field_0x14 = uVar4;
    *(undefined4 *)&__return_storage_ptr__->field_0x1c = *(undefined4 *)&(this->Payload).field_0x14;
  }
  *(undefined4 *)&__return_storage_ptr__->field_0x24 = *(undefined4 *)&(this->Payload).field_0x1c;
  __return_storage_ptr__->field_0x38 = 0;
  cVar2 = (this->Payload).field_0x30;
  __return_storage_ptr__->field_0x38 = cVar2;
  if (cVar2 != '\0') {
    uVar4 = *(undefined8 *)&(this->Payload).field_0x28;
    *(undefined8 *)&__return_storage_ptr__->field_0x28 = *(undefined8 *)&(this->Payload).field_0x20;
    *(undefined8 *)&__return_storage_ptr__->field_0x30 = uVar4;
  }
  *(undefined4 *)&__return_storage_ptr__->field_0x40 = *(undefined4 *)&(this->Payload).field_0x38;
  __return_storage_ptr__->field_0x50 = 0;
  cVar2 = (this->Payload).field_0x48;
  __return_storage_ptr__->field_0x50 = cVar2;
  if (cVar2 != '\0') {
    *(undefined8 *)&__return_storage_ptr__->field_0x48 = *(undefined8 *)&(this->Payload).field_0x40;
  }
  *(undefined4 *)&__return_storage_ptr__->field_0x58 = *(undefined4 *)&(this->Payload).field_0x50;
  __return_storage_ptr__->field_0x68 = 0;
  cVar2 = (this->Payload).field_0x60;
  __return_storage_ptr__->field_0x68 = cVar2;
  if (cVar2 != '\0') {
    *(undefined8 *)&__return_storage_ptr__->field_0x60 = *(undefined8 *)&(this->Payload).field_0x58;
  }
  *(undefined4 *)&__return_storage_ptr__->field_0x70 = local_28;
  __return_storage_ptr__->field_0x80 = 1;
  *(FMovieSceneFloatChannel **)&__return_storage_ptr__->field_0x78 = pFVar3;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilder_U__TAdd_UFMovieScenePropertyBinding___MovieScene_UE__U__TAddConditional_UFGuid___23_U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___23_U523_U523__MovieScene_UE__6B_
  ;
  __return_storage_ptr__->field_0x88 = bVar1;
  return __return_storage_ptr__;
}

// AddConditional<UE::MovieScene::FSourceFloatChannel,FMovieSceneFloatChannel_*> @ 1468e28a0

TEntityBuilder<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
* __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
::AddConditional<UE::MovieScene::FSourceFloatChannel,FMovieSceneFloatChannel_*>
          (TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
           *this,TEntityBuilder<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
                 *__return_storage_ptr__,
          TComponentTypeID<UE::MovieScene::FSourceFloatChannel> param_1,
          FMovieSceneFloatChannel **param_2,bool param_3)

{
  bool bVar1;
  char cVar2;
  FMovieSceneFloatChannel *pFVar3;
  undefined8 uVar4;
  undefined4 local_28;
  
  local_28 = CONCAT22(CONCAT11(local_28._3_1_,param_3),param_1);
  pFVar3 = *param_2;
  bVar1 = this->bAddMutualComponents;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02__U__TAdd_UFMovieScenePropertyBinding___MovieScene_UE__U__TAddConditional_UFGuid___34_U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___34_U634__MovieScene_UE__6B_
  ;
  *(undefined2 *)&__return_storage_ptr__->field_0x8 = *(undefined2 *)&this->Payload;
  __return_storage_ptr__->field_0x20 = 0;
  cVar2 = (this->Payload).field_0x18;
  __return_storage_ptr__->field_0x20 = cVar2;
  if (cVar2 != '\0') {
    uVar4 = *(undefined8 *)&(this->Payload).field_0xc;
    *(undefined8 *)&__return_storage_ptr__->field_0xc = *(undefined8 *)&(this->Payload).field_0x4;
    *(undefined8 *)&__return_storage_ptr__->field_0x14 = uVar4;
    *(undefined4 *)&__return_storage_ptr__->field_0x1c = *(undefined4 *)&(this->Payload).field_0x14;
  }
  *(undefined4 *)&__return_storage_ptr__->field_0x24 = *(undefined4 *)&(this->Payload).field_0x1c;
  __return_storage_ptr__->field_0x38 = 0;
  cVar2 = (this->Payload).field_0x30;
  __return_storage_ptr__->field_0x38 = cVar2;
  if (cVar2 != '\0') {
    uVar4 = *(undefined8 *)&(this->Payload).field_0x28;
    *(undefined8 *)&__return_storage_ptr__->field_0x28 = *(undefined8 *)&(this->Payload).field_0x20;
    *(undefined8 *)&__return_storage_ptr__->field_0x30 = uVar4;
  }
  *(undefined4 *)&__return_storage_ptr__->field_0x40 = *(undefined4 *)&(this->Payload).field_0x38;
  __return_storage_ptr__->field_0x50 = 0;
  cVar2 = (this->Payload).field_0x48;
  __return_storage_ptr__->field_0x50 = cVar2;
  if (cVar2 != '\0') {
    *(undefined8 *)&__return_storage_ptr__->field_0x48 = *(undefined8 *)&(this->Payload).field_0x40;
  }
  *(undefined4 *)&__return_storage_ptr__->field_0x58 = local_28;
  __return_storage_ptr__->field_0x68 = 1;
  *(FMovieSceneFloatChannel **)&__return_storage_ptr__->field_0x60 = pFVar3;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilder_U__TAdd_UFMovieScenePropertyBinding___MovieScene_UE__U__TAddConditional_UFGuid___23_U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___23_U523__MovieScene_UE__6B_
  ;
  __return_storage_ptr__->field_0x70 = bVar1;
  return __return_storage_ptr__;
}

// AddConditional<UE::MovieScene::FSourceFloatChannel,FMovieSceneFloatChannel_*> @ 1468e2950

TEntityBuilder<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
* __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>_>
::AddConditional<UE::MovieScene::FSourceFloatChannel,FMovieSceneFloatChannel_*>
          (TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>_>
           *this,TEntityBuilder<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
                 *__return_storage_ptr__,
          TComponentTypeID<UE::MovieScene::FSourceFloatChannel> param_1,
          FMovieSceneFloatChannel **param_2,bool param_3)

{
  bool bVar1;
  char cVar2;
  FMovieSceneFloatChannel *pFVar3;
  undefined8 uVar4;
  undefined4 local_28;
  
  local_28 = CONCAT22(CONCAT11(local_28._3_1_,param_3),param_1);
  pFVar3 = *param_2;
  bVar1 = this->bAddMutualComponents;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01__U__TAdd_UFMovieScenePropertyBinding___MovieScene_UE__U__TAddConditional_UFGuid___34_U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___34__MovieScene_UE__6B_
  ;
  *(undefined2 *)&__return_storage_ptr__->field_0x8 = *(undefined2 *)&this->Payload;
  __return_storage_ptr__->field_0x20 = 0;
  cVar2 = (this->Payload).field_0x18;
  __return_storage_ptr__->field_0x20 = cVar2;
  if (cVar2 != '\0') {
    uVar4 = *(undefined8 *)&(this->Payload).field_0xc;
    *(undefined8 *)&__return_storage_ptr__->field_0xc = *(undefined8 *)&(this->Payload).field_0x4;
    *(undefined8 *)&__return_storage_ptr__->field_0x14 = uVar4;
    *(undefined4 *)&__return_storage_ptr__->field_0x1c = *(undefined4 *)&(this->Payload).field_0x14;
  }
  *(undefined4 *)&__return_storage_ptr__->field_0x24 = *(undefined4 *)&(this->Payload).field_0x1c;
  __return_storage_ptr__->field_0x38 = 0;
  cVar2 = (this->Payload).field_0x30;
  __return_storage_ptr__->field_0x38 = cVar2;
  if (cVar2 != '\0') {
    uVar4 = *(undefined8 *)&(this->Payload).field_0x28;
    *(undefined8 *)&__return_storage_ptr__->field_0x28 = *(undefined8 *)&(this->Payload).field_0x20;
    *(undefined8 *)&__return_storage_ptr__->field_0x30 = uVar4;
  }
  *(undefined4 *)&__return_storage_ptr__->field_0x40 = local_28;
  __return_storage_ptr__->field_0x50 = 1;
  *(FMovieSceneFloatChannel **)&__return_storage_ptr__->field_0x48 = pFVar3;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilder_U__TAdd_UFMovieScenePropertyBinding___MovieScene_UE__U__TAddConditional_UFGuid___23_U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___23__MovieScene_UE__6B_
  ;
  __return_storage_ptr__->field_0x58 = bVar1;
  return __return_storage_ptr__;
}

// AddTag @ 14690ae00

TEntityBuilder<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd>
* __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
::AddTag(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
         *this,TEntityBuilder<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd>
               *__return_storage_ptr__,FComponentTypeID param_1)

{
  bool bVar1;
  FAdd local_res18 [4];
  
  bVar1 = this->bAddMutualComponents;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02_03_04_05_06_07_08__U__TAdd_UFMovieScenePropertyBinding___MovieScene_UE__U__TAddConditional_UFGuid___34_U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___34_U634_U634_U634_U634_U634_U634_UFAdd_34__MovieScene_UE__6B_
  ;
  local_res18[0].ComponentTypeID.Value = (FComponentTypeID)(FComponentTypeID)param_1.Value;
  Core::Private::Tuple::
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd>
  ::
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd><UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd>
            ((TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd>
              *)&__return_storage_ptr__->field_0x8,ForwardingConstructor,
             (TAdd<FMovieScenePropertyBinding> *)&this->Payload,
             (TAddConditional<FGuid> *)&(this->Payload).field_0x1c,
             (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&(this->Payload).field_0x38,
             (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&(this->Payload).field_0x50,
             (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&(this->Payload).field_0x68,
             (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&(this->Payload).field_0x80,
             (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&(this->Payload).field_0x98,
             (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&(this->Payload).field_0xb0,
             (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&(this->Payload).field_0xc8,
             local_res18);
  __return_storage_ptr__->field_0xf0 = bVar1;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilder_U__TAdd_UFMovieScenePropertyBinding___MovieScene_UE__U__TAddConditional_UFGuid___23_U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___23_U523_U523_U523_U523_U523_U523_UFAdd_23__MovieScene_UE__6B_
  ;
  return __return_storage_ptr__;
}

// AddTagConditional @ 14690aee0

TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FWidgetMaterialPath>,UE::MovieScene::FAddConditional>
* __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAdd<UE::MovieScene::FWidgetMaterialPath>_>
::AddTagConditional(TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAdd<UE::MovieScene::FWidgetMaterialPath>_>
                    *this,TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FWidgetMaterialPath>,UE::MovieScene::FAddConditional>
                          *__return_storage_ptr__,FComponentTypeID param_1,bool param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 local_res20;
  
  bVar1 = this->bAddMutualComponents;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00__U__TAdd_UFWidgetMaterialPath_MovieScene_UE___MovieScene_UE__UFAddConditional_34__MovieScene_UE__6B_
  ;
  *(undefined2 *)&__return_storage_ptr__->field_0x8 = *(undefined2 *)&this->Payload;
  __return_storage_ptr__->field_0x30 = 0;
  cVar2 = (this->Payload).field_0x28;
  local_res20._0_3_ = CONCAT12(param_2,param_1.Value);
  __return_storage_ptr__->field_0x30 = cVar2;
  if (cVar2 != '\0') {
    FWidgetMaterialPath::FWidgetMaterialPath
              ((FWidgetMaterialPath *)&__return_storage_ptr__->field_0x10,
               (FWidgetMaterialPath *)&(this->Payload).field_0x8);
  }
  *(undefined4 *)&__return_storage_ptr__->field_0x38 = local_res20;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilder_U__TAdd_UFWidgetMaterialPath_MovieScene_UE___MovieScene_UE__UFAddConditional_23__MovieScene_UE__6B_
  ;
  __return_storage_ptr__->field_0x40 = bVar1;
  return __return_storage_ptr__;
}

// Create @ 146910d00

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneEntityID __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd>
::Create(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd>
         *this,FEntityManager *param_1)

{
  FComponentMask *in_R8;
  
  FEntityBuilderImplBase::CreateEntity((FEntityBuilderImplBase *)this,param_1,in_R8);
  return (FMovieSceneEntityID)(ushort)param_1;
}

// Create @ 146910d40

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneEntityID __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
::Create(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
         *this,FEntityManager *param_1)

{
  FComponentMask *in_R8;
  
  FEntityBuilderImplBase::CreateEntity((FEntityBuilderImplBase *)this,param_1,in_R8);
  return (FMovieSceneEntityID)(ushort)param_1;
}

// Create @ 146910d80

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneEntityID __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
::Create(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
         *this,FEntityManager *param_1)

{
  FComponentMask *in_R8;
  
  FEntityBuilderImplBase::CreateEntity((FEntityBuilderImplBase *)this,param_1,in_R8);
  return (FMovieSceneEntityID)(ushort)param_1;
}

// Create @ 146910dc0

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneEntityID __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
::Create(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
         *this,FEntityManager *param_1)

{
  FComponentMask *in_R8;
  
  FEntityBuilderImplBase::CreateEntity((FEntityBuilderImplBase *)this,param_1,in_R8);
  return (FMovieSceneEntityID)(ushort)param_1;
}

// Create @ 146910e00

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneEntityID __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
::Create(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
         *this,FEntityManager *param_1)

{
  FComponentMask *in_R8;
  
  FEntityBuilderImplBase::CreateEntity((FEntityBuilderImplBase *)this,param_1,in_R8);
  return (FMovieSceneEntityID)(ushort)param_1;
}

// Create @ 146910e40

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneEntityID __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
::Create(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
         *this,FEntityManager *param_1)

{
  FComponentMask *in_R8;
  
  FEntityBuilderImplBase::CreateEntity((FEntityBuilderImplBase *)this,param_1,in_R8);
  return (FMovieSceneEntityID)(ushort)param_1;
}

// Create @ 146910e80

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneEntityID __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
::Create(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
         *this,FEntityManager *param_1)

{
  FComponentMask *in_R8;
  
  FEntityBuilderImplBase::CreateEntity((FEntityBuilderImplBase *)this,param_1,in_R8);
  return (FMovieSceneEntityID)(ushort)param_1;
}

// Create @ 146910ec0

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneEntityID __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
::Create(TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
         *this,FEntityManager *param_1)

{
  FComponentMask *in_R8;
  
  FEntityBuilderImplBase::CreateEntity((FEntityBuilderImplBase *)this,param_1,in_R8);
  return (FMovieSceneEntityID)(ushort)param_1;
}

// Create @ 146910f00

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneEntityID __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<UE::MovieScene::FWidgetMaterialPath>,UE::MovieScene::FAddConditional>
::Create(TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<UE::MovieScene::FWidgetMaterialPath>,UE::MovieScene::FAddConditional>
         *this,FEntityManager *param_1)

{
  FComponentMask *in_R8;
  
  FEntityBuilderImplBase::CreateEntity((FEntityBuilderImplBase *)this,param_1,in_R8);
  return (FMovieSceneEntityID)(ushort)param_1;
}

// Create @ 146910f40

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneEntityID __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAdd<UE::MovieScene::FWidgetMaterialPath>_>
::Create(TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAdd<UE::MovieScene::FWidgetMaterialPath>_>
         *this,FEntityManager *param_1)

{
  FComponentMask *in_R8;
  
  FEntityBuilderImplBase::CreateEntity((FEntityBuilderImplBase *)this,param_1,in_R8);
  return (FMovieSceneEntityID)(ushort)param_1;
}

// GenerateType @ 14691cb10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd>
::GenerateType(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd>
               *this,FEntityManager *param_1,FComponentMask *param_2,bool *param_3)

{
  <lambda_1> local_res8;
  
  local_res8.OutMask = param_2;
  Core::Private::Tuple::
  TVisitTupleElements_Impl<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9>_>::
  Do<_UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd>::GenerateType_::__l2::<lambda_1>,TTuple<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd>_&>
            (&local_res8,&this->Payload);
  if (this->bAddMutualComponents != false) {
    *param_3 = true;
  }
  return;
}

// GenerateType @ 14691cb50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
::GenerateType(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
               *this,FEntityManager *param_1,FComponentMask *param_2,bool *param_3)

{
  <lambda_1> local_res8;
  
  local_res8.OutMask = param_2;
  Core::Private::Tuple::TVisitTupleElements_Impl<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8>_>
  ::
  Do<_UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>::GenerateType_::__l2::<lambda_1>,TTuple<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>_&>
            (&local_res8,&this->Payload);
  if (this->bAddMutualComponents != false) {
    *param_3 = true;
  }
  return;
}

// GenerateType @ 14691cb90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
::GenerateType(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
               *this,FEntityManager *param_1,FComponentMask *param_2,bool *param_3)

{
  <lambda_1> local_res8;
  
  local_res8.OutMask = param_2;
  Core::Private::Tuple::TVisitTupleElements_Impl<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7>_>::
  Do<_UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>::GenerateType_::__l2::<lambda_1>,TTuple<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>_&>
            (&local_res8,&this->Payload);
  if (this->bAddMutualComponents != false) {
    *param_3 = true;
  }
  return;
}

// GenerateType @ 14691cbd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
::GenerateType(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
               *this,FEntityManager *param_1,FComponentMask *param_2,bool *param_3)

{
  <lambda_1> local_res8;
  
  local_res8.OutMask = param_2;
  Core::Private::Tuple::TVisitTupleElements_Impl<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6>_>::
  Do<_UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>::GenerateType_::__l2::<lambda_1>,TTuple<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>_&>
            (&local_res8,&this->Payload);
  if (this->bAddMutualComponents != false) {
    *param_3 = true;
  }
  return;
}

// GenerateType @ 14691cc10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
::GenerateType(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
               *this,FEntityManager *param_1,FComponentMask *param_2,bool *param_3)

{
  <lambda_1> local_res8;
  
  local_res8.OutMask = param_2;
  Core::Private::Tuple::TVisitTupleElements_Impl<TIntegerSequence<unsigned_int,0,1,2,3,4,5>_>::
  Do<_UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>::GenerateType_::__l2::<lambda_1>,TTuple<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>_&>
            (&local_res8,&this->Payload);
  if (this->bAddMutualComponents != false) {
    *param_3 = true;
  }
  return;
}

// GenerateType @ 14691cc50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
::GenerateType(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
               *this,FEntityManager *param_1,FComponentMask *param_2,bool *param_3)

{
  <lambda_1> local_res8;
  
  local_res8.OutMask = param_2;
  Core::Private::Tuple::TVisitTupleElements_Impl<TIntegerSequence<unsigned_int,0,1,2,3,4>_>::
  Do<_UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>::GenerateType_::__l2::<lambda_1>,TTuple<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>_&>
            (&local_res8,&this->Payload);
  if (this->bAddMutualComponents != false) {
    *param_3 = true;
  }
  return;
}

// GenerateType @ 14691cc90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
::GenerateType(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
               *this,FEntityManager *param_1,FComponentMask *param_2,bool *param_3)

{
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&this->Payload);
  if ((this->Payload).field_0x1e != '\0') {
    FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&(this->Payload).field_0x1c);
  }
  if ((this->Payload).field_0x3a != '\0') {
    FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&(this->Payload).field_0x38);
  }
  if ((this->Payload).field_0x52 != '\0') {
    FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&(this->Payload).field_0x50);
  }
  if (this->bAddMutualComponents != false) {
    *param_3 = true;
  }
  return;
}

// GenerateType @ 14691cd10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
::GenerateType(TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
               *this,FEntityManager *param_1,FComponentMask *param_2,bool *param_3)

{
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&this->Payload);
  if ((this->Payload).field_0x1e != '\0') {
    FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&(this->Payload).field_0x1c);
  }
  if ((this->Payload).field_0x3a != '\0') {
    FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&(this->Payload).field_0x38);
  }
  if (this->bAddMutualComponents != false) {
    *param_3 = true;
  }
  return;
}

// GenerateType @ 14691cd80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<UE::MovieScene::FWidgetMaterialPath>,UE::MovieScene::FAddConditional>
::GenerateType(TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<UE::MovieScene::FWidgetMaterialPath>,UE::MovieScene::FAddConditional>
               *this,FEntityManager *param_1,FComponentMask *param_2,bool *param_3)

{
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&this->Payload);
  if ((this->Payload).field_0x32 != '\0') {
    FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&(this->Payload).field_0x30);
  }
  if (this->bAddMutualComponents != false) {
    *param_3 = true;
  }
  return;
}

// GenerateType @ 14691cde0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAdd<UE::MovieScene::FWidgetMaterialPath>_>
::GenerateType(TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAdd<UE::MovieScene::FWidgetMaterialPath>_>
               *this,FEntityManager *param_1,FComponentMask *param_2,bool *param_3)

{
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&this->Payload);
  if (this->bAddMutualComponents != false) {
    *param_3 = true;
  }
  return;
}

// Initialize @ 146929cd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd>
::Initialize(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd>
             *this,FEntityManager *param_1,FEntityInfo *param_2)

{
  <lambda_1> local_28;
  
  if ((param_2->Data).Allocation != (FEntityAllocation *)0x0) {
    local_28.Entity.Data.Allocation = (param_2->Data).Allocation;
    local_28.Entity.Data.ComponentOffset = (param_2->Data).ComponentOffset;
    local_28.Entity.Data._12_4_ = *(undefined4 *)&(param_2->Data).field_0xc;
    local_28.Entity.EntityID.Value = (param_2->EntityID).Value;
    local_28.Entity._18_6_ = *(undefined6 *)&param_2->field_0x12;
    Core::Private::Tuple::
    TVisitTupleElements_Impl<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9>_>::
    Do<_UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd>::Initialize_::__l5::<lambda_1>,TTuple<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd>_&>
              (&local_28,&this->Payload);
  }
  return;
}

// Initialize @ 146929d10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
::Initialize(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
             *this,FEntityManager *param_1,FEntityInfo *param_2)

{
  <lambda_1> local_28;
  
  if ((param_2->Data).Allocation != (FEntityAllocation *)0x0) {
    local_28.Entity.Data.Allocation = (param_2->Data).Allocation;
    local_28.Entity.Data.ComponentOffset = (param_2->Data).ComponentOffset;
    local_28.Entity.Data._12_4_ = *(undefined4 *)&(param_2->Data).field_0xc;
    local_28.Entity.EntityID.Value = (param_2->EntityID).Value;
    local_28.Entity._18_6_ = *(undefined6 *)&param_2->field_0x12;
    Core::Private::Tuple::
    TVisitTupleElements_Impl<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8>_>::
    Do<_UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>::Initialize_::__l5::<lambda_1>,TTuple<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>_&>
              (&local_28,&this->Payload);
  }
  return;
}

// Initialize @ 146929d50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
::Initialize(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
             *this,FEntityManager *param_1,FEntityInfo *param_2)

{
  <lambda_1> local_28;
  
  if ((param_2->Data).Allocation != (FEntityAllocation *)0x0) {
    local_28.Entity.Data.Allocation = (param_2->Data).Allocation;
    local_28.Entity.Data.ComponentOffset = (param_2->Data).ComponentOffset;
    local_28.Entity.Data._12_4_ = *(undefined4 *)&(param_2->Data).field_0xc;
    local_28.Entity.EntityID.Value = (param_2->EntityID).Value;
    local_28.Entity._18_6_ = *(undefined6 *)&param_2->field_0x12;
    Core::Private::Tuple::TVisitTupleElements_Impl<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7>_>
    ::
    Do<_UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>::Initialize_::__l5::<lambda_1>,TTuple<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>_&>
              (&local_28,&this->Payload);
  }
  return;
}

// Initialize @ 146929d90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
::Initialize(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
             *this,FEntityManager *param_1,FEntityInfo *param_2)

{
  <lambda_1> local_28;
  
  if ((param_2->Data).Allocation != (FEntityAllocation *)0x0) {
    local_28.Entity.Data.Allocation = (param_2->Data).Allocation;
    local_28.Entity.Data.ComponentOffset = (param_2->Data).ComponentOffset;
    local_28.Entity.Data._12_4_ = *(undefined4 *)&(param_2->Data).field_0xc;
    local_28.Entity.EntityID.Value = (param_2->EntityID).Value;
    local_28.Entity._18_6_ = *(undefined6 *)&param_2->field_0x12;
    Core::Private::Tuple::TVisitTupleElements_Impl<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6>_>::
    Do<_UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>::Initialize_::__l5::<lambda_1>,TTuple<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>_&>
              (&local_28,&this->Payload);
  }
  return;
}

// Initialize @ 146929dd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
::Initialize(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
             *this,FEntityManager *param_1,FEntityInfo *param_2)

{
  <lambda_1> local_28;
  
  if ((param_2->Data).Allocation != (FEntityAllocation *)0x0) {
    local_28.Entity.Data.Allocation = (param_2->Data).Allocation;
    local_28.Entity.Data.ComponentOffset = (param_2->Data).ComponentOffset;
    local_28.Entity.Data._12_4_ = *(undefined4 *)&(param_2->Data).field_0xc;
    local_28.Entity.EntityID.Value = (param_2->EntityID).Value;
    local_28.Entity._18_6_ = *(undefined6 *)&param_2->field_0x12;
    Core::Private::Tuple::TVisitTupleElements_Impl<TIntegerSequence<unsigned_int,0,1,2,3,4,5>_>::
    Do<_UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>::Initialize_::__l5::<lambda_1>,TTuple<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>_&>
              (&local_28,&this->Payload);
  }
  return;
}

// Initialize @ 146929e10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
::Initialize(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
             *this,FEntityManager *param_1,FEntityInfo *param_2)

{
  <lambda_1> local_28;
  
  if ((param_2->Data).Allocation != (FEntityAllocation *)0x0) {
    local_28.Entity.Data.Allocation = (param_2->Data).Allocation;
    local_28.Entity.Data.ComponentOffset = (param_2->Data).ComponentOffset;
    local_28.Entity.Data._12_4_ = *(undefined4 *)&(param_2->Data).field_0xc;
    local_28.Entity.EntityID.Value = (param_2->EntityID).Value;
    local_28.Entity._18_6_ = *(undefined6 *)&param_2->field_0x12;
    Core::Private::Tuple::TVisitTupleElements_Impl<TIntegerSequence<unsigned_int,0,1,2,3,4>_>::
    Do<_UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>::Initialize_::__l5::<lambda_1>,TTuple<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>_&>
              (&local_28,&this->Payload);
  }
  return;
}

// Initialize @ 146929e50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
::Initialize(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
             *this,FEntityManager *param_1,FEntityInfo *param_2)

{
  int iVar1;
  FEntityAllocation *pFVar2;
  
  if ((param_2->Data).Allocation != (FEntityAllocation *)0x0) {
    pFVar2 = (param_2->Data).Allocation;
    iVar1 = (param_2->Data).ComponentOffset;
    TAdd<FMovieScenePropertyBinding>::Apply
              ((TAdd<FMovieScenePropertyBinding> *)&this->Payload,pFVar2,iVar1);
    TAddConditional<FGuid>::Apply
              ((TAddConditional<FGuid> *)&(this->Payload).field_0x1c,pFVar2,iVar1);
    TAddConditional<UE::MovieScene::FSourceFloatChannel>::Apply
              ((TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&(this->Payload).field_0x38,
               pFVar2,iVar1);
    TAddConditional<UE::MovieScene::FSourceFloatChannel>::Apply
              ((TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&(this->Payload).field_0x50,
               pFVar2,iVar1);
  }
  return;
}

// Initialize @ 146929ed0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
::Initialize(TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
             *this,FEntityManager *param_1,FEntityInfo *param_2)

{
  int iVar1;
  FEntityAllocation *pFVar2;
  
  if ((param_2->Data).Allocation != (FEntityAllocation *)0x0) {
    pFVar2 = (param_2->Data).Allocation;
    iVar1 = (param_2->Data).ComponentOffset;
    TAdd<FMovieScenePropertyBinding>::Apply
              ((TAdd<FMovieScenePropertyBinding> *)&this->Payload,pFVar2,iVar1);
    TAddConditional<FGuid>::Apply
              ((TAddConditional<FGuid> *)&(this->Payload).field_0x1c,pFVar2,iVar1);
    TAddConditional<UE::MovieScene::FSourceFloatChannel>::Apply
              ((TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&(this->Payload).field_0x38,
               pFVar2,iVar1);
  }
  return;
}

// Initialize @ 146929f40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<UE::MovieScene::FWidgetMaterialPath>,UE::MovieScene::FAddConditional>
::Initialize(TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<UE::MovieScene::FWidgetMaterialPath>,UE::MovieScene::FAddConditional>
             *this,FEntityManager *param_1,FEntityInfo *param_2)

{
  if ((param_2->Data).Allocation != (FEntityAllocation *)0x0) {
    TAdd<UE::MovieScene::FWidgetMaterialPath>::Apply
              ((TAdd<UE::MovieScene::FWidgetMaterialPath> *)&this->Payload,
               (param_2->Data).Allocation,(param_2->Data).ComponentOffset);
    return;
  }
  return;
}

// Initialize @ 146929f70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAdd<UE::MovieScene::FWidgetMaterialPath>_>
::Initialize(TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAdd<UE::MovieScene::FWidgetMaterialPath>_>
             *this,FEntityManager *param_1,FEntityInfo *param_2)

{
  if ((param_2->Data).Allocation != (FEntityAllocation *)0x0) {
    TAdd<UE::MovieScene::FWidgetMaterialPath>::Apply
              ((TAdd<UE::MovieScene::FWidgetMaterialPath> *)&this->Payload,
               (param_2->Data).Allocation,(param_2->Data).ComponentOffset);
    return;
  }
  return;
}

