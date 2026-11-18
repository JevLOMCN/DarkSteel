// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 205

// AddConditional<TObjectPtr<UMovieSceneCondition_const_>,UMovieSceneCondition_const_*> @ 146069c90

TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAddConditional,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TAddConditional<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TAddConditional<TObjectPtr<UMovieSceneCondition_const_>_>_>
* __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAddConditional,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TAddConditional<UE::MovieScene::FInstanceHandle>_>
::AddConditional<TObjectPtr<UMovieSceneCondition_const_>,UMovieSceneCondition_const_*>
          (TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAddConditional,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TAddConditional<UE::MovieScene::FInstanceHandle>_>
           *this,TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAddConditional,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TAddConditional<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TAddConditional<TObjectPtr<UMovieSceneCondition_const_>_>_>
                 *__return_storage_ptr__,
          TComponentTypeID<TObjectPtr<UMovieSceneCondition_const_>_> param_1,
          UMovieSceneCondition **param_2,bool param_3)

{
  bool bVar1;
  char cVar2;
  UMovieSceneCondition *pUVar3;
  undefined4 local_28;
  
  pUVar3 = *param_2;
  local_28 = CONCAT22(CONCAT11(local_28._3_1_,param_3),param_1);
  if (GC::GIsIncrementalReachabilityPending) {
    if (pUVar3 != (UMovieSceneCondition *)0x0) {
      GC::MarkAsReachable((UObject *)pUVar3);
    }
    if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UMovieSceneCondition *)0x0))
    {
      GC::MarkAsReachable((UObject *)pUVar3);
    }
  }
  bVar1 = this->bAddMutualComponents;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02_03_04_05__UFAdd_MovieScene_UE__U234_UFAddConditional_34_U__TAddConditional_UFMovieSceneSequenceID___34_U__TAddConditional_UFRootInstanceHandle_MovieScene_UE___34_U__TAddConditional_UFInstanceHandle_MovieScene_UE___34_U__TAddConditional_U__TObjectPtr___CBVUMovieSceneCondition_____34__MovieScene_UE__6B_
  ;
  *(undefined2 *)&__return_storage_ptr__->field_0x8 = *(undefined2 *)&this->Payload;
  *(undefined2 *)&__return_storage_ptr__->field_0xa = *(undefined2 *)&(this->Payload).field_0x2;
  *(undefined4 *)&__return_storage_ptr__->field_0xc = *(undefined4 *)&(this->Payload).field_0x4;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = *(undefined4 *)&(this->Payload).field_0x8;
  __return_storage_ptr__->field_0x18 = 0;
  cVar2 = (this->Payload).field_0x10;
  __return_storage_ptr__->field_0x18 = cVar2;
  if (cVar2 != '\0') {
    *(undefined4 *)&__return_storage_ptr__->field_0x14 = *(undefined4 *)&(this->Payload).field_0xc;
  }
  *(undefined4 *)&__return_storage_ptr__->field_0x1c = *(undefined4 *)&(this->Payload).field_0x14;
  __return_storage_ptr__->field_0x24 = 0;
  cVar2 = (this->Payload).field_0x1c;
  __return_storage_ptr__->field_0x24 = cVar2;
  if (cVar2 != '\0') {
    *(undefined4 *)&__return_storage_ptr__->field_0x20 = *(undefined4 *)&(this->Payload).field_0x18;
  }
  *(undefined4 *)&__return_storage_ptr__->field_0x26 = *(undefined4 *)&(this->Payload).field_0x1e;
  __return_storage_ptr__->field_0x2e = 0;
  cVar2 = (this->Payload).field_0x26;
  __return_storage_ptr__->field_0x2e = cVar2;
  if (cVar2 != '\0') {
    *(undefined4 *)&__return_storage_ptr__->field_0x2a = *(undefined4 *)&(this->Payload).field_0x22;
  }
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = local_28;
  __return_storage_ptr__->field_0x40 = 1;
  *(UMovieSceneCondition **)&__return_storage_ptr__->field_0x38 = pUVar3;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UMovieSceneCondition *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar3);
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilder_UFAdd_MovieScene_UE__U123_UFAddConditional_23_U__TAddConditional_UFMovieSceneSequenceID___23_U__TAddConditional_UFRootInstanceHandle_MovieScene_UE___23_U__TAddConditional_UFInstanceHandle_MovieScene_UE___23_U__TAddConditional_U__TObjectPtr___CBVUMovieSceneCondition_____23__MovieScene_UE__6B_
  ;
  __return_storage_ptr__->field_0x48 = bVar1;
  return __return_storage_ptr__;
}

// AddConditional<UE::MovieScene::FInstanceHandle,UE::MovieScene::FInstanceHandle_const_&> @ 146069dc0

TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAddConditional,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TAddConditional<UE::MovieScene::FInstanceHandle>_>
* __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAddConditional,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FRootInstanceHandle>_>
::AddConditional<UE::MovieScene::FInstanceHandle,UE::MovieScene::FInstanceHandle_const_&>
          (TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAddConditional,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FRootInstanceHandle>_>
           *this,TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAddConditional,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TAddConditional<UE::MovieScene::FInstanceHandle>_>
                 *__return_storage_ptr__,TComponentTypeID<UE::MovieScene::FInstanceHandle> param_1,
          FInstanceHandle *param_2,bool param_3)

{
  bool bVar1;
  char cVar2;
  ushort uVar3;
  ushort uVar4;
  undefined4 local_18;
  
  uVar3 = param_2->InstanceID;
  uVar4 = param_2->InstanceSerial;
  bVar1 = this->bAddMutualComponents;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02_03_04__UFAdd_MovieScene_UE__U234_UFAddConditional_34_U__TAddConditional_UFMovieSceneSequenceID___34_U__TAddConditional_UFRootInstanceHandle_MovieScene_UE___34_U__TAddConditional_UFInstanceHandle_MovieScene_UE___34__MovieScene_UE__6B_
  ;
  local_18 = CONCAT22(CONCAT11(local_18._3_1_,param_3),param_1);
  *(undefined2 *)&__return_storage_ptr__->field_0x8 = *(undefined2 *)&this->Payload;
  *(undefined2 *)&__return_storage_ptr__->field_0xa = *(undefined2 *)&(this->Payload).field_0x2;
  *(undefined4 *)&__return_storage_ptr__->field_0xc = *(undefined4 *)&(this->Payload).field_0x4;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = *(undefined4 *)&(this->Payload).field_0x8;
  __return_storage_ptr__->field_0x18 = 0;
  cVar2 = (this->Payload).field_0x10;
  __return_storage_ptr__->field_0x18 = cVar2;
  if (cVar2 != '\0') {
    *(undefined4 *)&__return_storage_ptr__->field_0x14 = *(undefined4 *)&(this->Payload).field_0xc;
  }
  *(undefined4 *)&__return_storage_ptr__->field_0x1c = *(undefined4 *)&(this->Payload).field_0x14;
  __return_storage_ptr__->field_0x24 = 0;
  cVar2 = (this->Payload).field_0x1c;
  __return_storage_ptr__->field_0x24 = cVar2;
  if (cVar2 != '\0') {
    *(undefined4 *)&__return_storage_ptr__->field_0x20 = *(undefined4 *)&(this->Payload).field_0x18;
  }
  *(undefined4 *)&__return_storage_ptr__->field_0x26 = local_18;
  __return_storage_ptr__->field_0x2e = 1;
  *(ushort *)&__return_storage_ptr__->field_0x2a = uVar3;
  *(ushort *)&__return_storage_ptr__->field_0x2c = uVar4;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilder_UFAdd_MovieScene_UE__U123_UFAddConditional_23_U__TAddConditional_UFMovieSceneSequenceID___23_U__TAddConditional_UFRootInstanceHandle_MovieScene_UE___23_U__TAddConditional_UFInstanceHandle_MovieScene_UE___23__MovieScene_UE__6B_
  ;
  __return_storage_ptr__->field_0x30 = bVar1;
  return __return_storage_ptr__;
}

// AddConditional<FMovieSceneSequenceID,FMovieSceneSequenceID_const_&> @ 146069e70

TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAddConditional,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>_>
* __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAddConditional>
::AddConditional<FMovieSceneSequenceID,FMovieSceneSequenceID_const_&>
          (TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAddConditional>
           *this,TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAddConditional,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>_>
                 *__return_storage_ptr__,TComponentTypeID<FMovieSceneSequenceID> param_1,
          FMovieSceneSequenceID *param_2,bool param_3)

{
  bool bVar1;
  uint uVar2;
  undefined4 local_18;
  
  local_18 = CONCAT22(CONCAT11(local_18._3_1_,param_3),param_1);
  uVar2 = param_2->Value;
  bVar1 = this->bAddMutualComponents;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02__UFAdd_MovieScene_UE__U234_UFAddConditional_34_U__TAddConditional_UFMovieSceneSequenceID___34__MovieScene_UE__6B_
  ;
  *(undefined2 *)&__return_storage_ptr__->field_0x8 = *(undefined2 *)&this->Payload;
  *(undefined2 *)&__return_storage_ptr__->field_0xa = *(undefined2 *)&(this->Payload).field_0x2;
  *(undefined4 *)&__return_storage_ptr__->field_0xc = *(undefined4 *)&(this->Payload).field_0x4;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = local_18;
  __return_storage_ptr__->field_0x18 = 1;
  *(uint *)&__return_storage_ptr__->field_0x14 = uVar2;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilder_UFAdd_MovieScene_UE__U123_UFAddConditional_23_U__TAddConditional_UFMovieSceneSequenceID___23__MovieScene_UE__6B_
  ;
  __return_storage_ptr__->field_0x1c = bVar1;
  return __return_storage_ptr__;
}

// AddConditional<UE::MovieScene::FRootInstanceHandle,UE::MovieScene::FRootInstanceHandle_const_&> @ 146069ee0

TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAddConditional,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FRootInstanceHandle>_>
* __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAddConditional,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>_>
::AddConditional<UE::MovieScene::FRootInstanceHandle,UE::MovieScene::FRootInstanceHandle_const_&>
          (TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAddConditional,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>_>
           *this,TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAddConditional,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FRootInstanceHandle>_>
                 *__return_storage_ptr__,
          TComponentTypeID<UE::MovieScene::FRootInstanceHandle> param_1,FRootInstanceHandle *param_2
          ,bool param_3)

{
  bool bVar1;
  char cVar2;
  FRootInstanceHandle FVar3;
  undefined4 local_18;
  
  FVar3 = *param_2;
  bVar1 = this->bAddMutualComponents;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02_03__UFAdd_MovieScene_UE__U234_UFAddConditional_34_U__TAddConditional_UFMovieSceneSequenceID___34_U__TAddConditional_UFRootInstanceHandle_MovieScene_UE___34__MovieScene_UE__6B_
  ;
  local_18 = CONCAT22(CONCAT11(local_18._3_1_,param_3),param_1);
  *(undefined2 *)&__return_storage_ptr__->field_0x8 = *(undefined2 *)&this->Payload;
  *(undefined2 *)&__return_storage_ptr__->field_0xa = *(undefined2 *)&(this->Payload).field_0x2;
  *(undefined4 *)&__return_storage_ptr__->field_0xc = *(undefined4 *)&(this->Payload).field_0x4;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = *(undefined4 *)&(this->Payload).field_0x8;
  __return_storage_ptr__->field_0x18 = 0;
  cVar2 = (this->Payload).field_0x10;
  __return_storage_ptr__->field_0x18 = cVar2;
  if (cVar2 != '\0') {
    *(undefined4 *)&__return_storage_ptr__->field_0x14 = *(undefined4 *)&(this->Payload).field_0xc;
  }
  *(undefined4 *)&__return_storage_ptr__->field_0x1c = local_18;
  __return_storage_ptr__->field_0x24 = 1;
  *(FRootInstanceHandle *)&__return_storage_ptr__->field_0x20 = FVar3;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilder_UFAdd_MovieScene_UE__U123_UFAddConditional_23_U__TAddConditional_UFMovieSceneSequenceID___23_U__TAddConditional_UFRootInstanceHandle_MovieScene_UE___23__MovieScene_UE__6B_
  ;
  __return_storage_ptr__->field_0x28 = bVar1;
  return __return_storage_ptr__;
}

// AddTag @ 1460a9dc0

TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::FAdd> * __thiscall
UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::FAdd>::AddTag
          (TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::FAdd> *this,
          TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::FAdd> *__return_storage_ptr__,
          FComponentTypeID param_1)

{
  bool bVar1;
  
  bVar1 = this->bAddMutualComponents;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00__UFAdd_MovieScene_UE__U234__MovieScene_UE__6B_
  ;
  *(TTuple<UE::MovieScene::FAdd> *)&__return_storage_ptr__->field_0x8 = this->Payload;
  *(ushort *)&__return_storage_ptr__->field_0xa = param_1.Value;
  *(undefined ***)__return_storage_ptr__ =
       &___7__TEntityBuilder_UFAdd_MovieScene_UE__U123__MovieScene_UE__6B_;
  __return_storage_ptr__->field_0xc = bVar1;
  return __return_storage_ptr__;
}

// AddTagConditional @ 1460a9e00

TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAddConditional> *
__thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>::
AddTagConditional(TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
                  *this,TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAddConditional>
                        *__return_storage_ptr__,FComponentTypeID param_1,bool param_2)

{
  bool bVar1;
  undefined4 local_res20;
  
  bVar1 = this->bAddMutualComponents;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01__UFAdd_MovieScene_UE__U234_UFAddConditional_34__MovieScene_UE__6B_
  ;
  *(undefined2 *)&__return_storage_ptr__->field_0x8 = *(undefined2 *)&this->Payload;
  *(undefined2 *)&__return_storage_ptr__->field_0xa = *(undefined2 *)&(this->Payload).field_0x2;
  local_res20._0_3_ = CONCAT12(param_2,param_1.Value);
  *(undefined4 *)&__return_storage_ptr__->field_0xc = local_res20;
  *(undefined ***)__return_storage_ptr__ =
       &___7__TEntityBuilder_UFAdd_MovieScene_UE__U123_UFAddConditional_23__MovieScene_UE__6B_;
  __return_storage_ptr__->field_0x10 = bVar1;
  return __return_storage_ptr__;
}

// Create @ 1460b8f20

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneEntityID __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAddConditional,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TAddConditional<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TAddConditional<TObjectPtr<UMovieSceneCondition_const_>_>_>
::Create(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAddConditional,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TAddConditional<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TAddConditional<TObjectPtr<UMovieSceneCondition_const_>_>_>
         *this,FEntityManager *param_1)

{
  FComponentMask *in_R8;
  
  FEntityBuilderImplBase::CreateEntity((FEntityBuilderImplBase *)this,param_1,in_R8);
  return (FMovieSceneEntityID)(ushort)param_1;
}

// Create @ 1460b8f60

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneEntityID __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAddConditional,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TAddConditional<UE::MovieScene::FInstanceHandle>_>
::Create(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAddConditional,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TAddConditional<UE::MovieScene::FInstanceHandle>_>
         *this,FEntityManager *param_1)

{
  FComponentMask *in_R8;
  
  FEntityBuilderImplBase::CreateEntity((FEntityBuilderImplBase *)this,param_1,in_R8);
  return (FMovieSceneEntityID)(ushort)param_1;
}

// Create @ 1460b8fa0

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneEntityID __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAddConditional,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FRootInstanceHandle>_>
::Create(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAddConditional,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FRootInstanceHandle>_>
         *this,FEntityManager *param_1)

{
  FComponentMask *in_R8;
  
  FEntityBuilderImplBase::CreateEntity((FEntityBuilderImplBase *)this,param_1,in_R8);
  return (FMovieSceneEntityID)(ushort)param_1;
}

// Create @ 1460b8fe0

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneEntityID __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAddConditional,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>_>
::Create(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAddConditional,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>_>
         *this,FEntityManager *param_1)

{
  FComponentMask *in_R8;
  
  FEntityBuilderImplBase::CreateEntity((FEntityBuilderImplBase *)this,param_1,in_R8);
  return (FMovieSceneEntityID)(ushort)param_1;
}

// Create @ 1460b9020

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneEntityID __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAddConditional>
::Create(TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAddConditional>
         *this,FEntityManager *param_1)

{
  FComponentMask *in_R8;
  
  FEntityBuilderImplBase::CreateEntity((FEntityBuilderImplBase *)this,param_1,in_R8);
  return (FMovieSceneEntityID)(ushort)param_1;
}

// Create @ 1460b9060

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneEntityID __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>::Create
          (TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
           *this,FEntityManager *param_1)

{
  FComponentMask *in_R8;
  
  FEntityBuilderImplBase::CreateEntity((FEntityBuilderImplBase *)this,param_1,in_R8);
  return (FMovieSceneEntityID)(ushort)param_1;
}

// Create @ 1460b90a0

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneEntityID __thiscall
UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::FAdd>::Create
          (TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::FAdd> *this,
          FEntityManager *param_1)

{
  FComponentMask *in_R8;
  
  FEntityBuilderImplBase::CreateEntity((FEntityBuilderImplBase *)this,param_1,in_R8);
  return (FMovieSceneEntityID)(ushort)param_1;
}

// GenerateType @ 1460c87e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAddConditional,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TAddConditional<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TAddConditional<TObjectPtr<UMovieSceneCondition_const_>_>_>
::GenerateType(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAddConditional,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TAddConditional<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TAddConditional<TObjectPtr<UMovieSceneCondition_const_>_>_>
               *this,FEntityManager *param_1,FComponentMask *param_2,bool *param_3)

{
  <lambda_1> local_res8;
  
  local_res8.OutMask = param_2;
  Core::Private::Tuple::TVisitTupleElements_Impl<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6>_>::
  Do<_UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAddConditional,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TAddConditional<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TAddConditional<TObjectPtr<UMovieSceneCondition_const_>_>_>::GenerateType_::__l2::<lambda_1>,TTuple<UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAddConditional,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TAddConditional<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TAddConditional<TObjectPtr<UMovieSceneCondition_const_>_>_>_&>
            (&local_res8,&this->Payload);
  if (this->bAddMutualComponents != false) {
    *param_3 = true;
  }
  return;
}

// GenerateType @ 1460c8820

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAddConditional,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TAddConditional<UE::MovieScene::FInstanceHandle>_>
::GenerateType(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAddConditional,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TAddConditional<UE::MovieScene::FInstanceHandle>_>
               *this,FEntityManager *param_1,FComponentMask *param_2,bool *param_3)

{
  <lambda_1> local_res8;
  
  local_res8.OutMask = param_2;
  Core::Private::Tuple::TVisitTupleElements_Impl<TIntegerSequence<unsigned_int,0,1,2,3,4,5>_>::
  Do<_UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAddConditional,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TAddConditional<UE::MovieScene::FInstanceHandle>_>::GenerateType_::__l2::<lambda_1>,TTuple<UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAddConditional,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TAddConditional<UE::MovieScene::FInstanceHandle>_>_&>
            (&local_res8,&this->Payload);
  if (this->bAddMutualComponents != false) {
    *param_3 = true;
  }
  return;
}

// GenerateType @ 1460c8860

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAddConditional,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FRootInstanceHandle>_>
::GenerateType(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAddConditional,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FRootInstanceHandle>_>
               *this,FEntityManager *param_1,FComponentMask *param_2,bool *param_3)

{
  <lambda_1> local_res8;
  
  local_res8.OutMask = param_2;
  Core::Private::Tuple::TVisitTupleElements_Impl<TIntegerSequence<unsigned_int,0,1,2,3,4>_>::
  Do<_UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAddConditional,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FRootInstanceHandle>_>::GenerateType_::__l2::<lambda_1>,TTuple<UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAddConditional,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FRootInstanceHandle>_>_&>
            (&local_res8,&this->Payload);
  if (this->bAddMutualComponents != false) {
    *param_3 = true;
  }
  return;
}

// GenerateType @ 1460c88a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAddConditional,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>_>
::GenerateType(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAddConditional,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>_>
               *this,FEntityManager *param_1,FComponentMask *param_2,bool *param_3)

{
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&this->Payload);
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&(this->Payload).field_0x2);
  if ((this->Payload).field_0x6 != '\0') {
    FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&(this->Payload).field_0x4);
  }
  if ((this->Payload).field_0xa != '\0') {
    FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&(this->Payload).field_0x8);
  }
  if (this->bAddMutualComponents != false) {
    *param_3 = true;
  }
  return;
}

// GenerateType @ 1460c8920

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAddConditional>
::GenerateType(TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAddConditional>
               *this,FEntityManager *param_1,FComponentMask *param_2,bool *param_3)

{
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&this->Payload);
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&(this->Payload).field_0x2);
  if ((this->Payload).field_0x6 != '\0') {
    FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&(this->Payload).field_0x4);
  }
  if (this->bAddMutualComponents != false) {
    *param_3 = true;
  }
  return;
}

// GenerateType @ 1460c8990

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>::
GenerateType(TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
             *this,FEntityManager *param_1,FComponentMask *param_2,bool *param_3)

{
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&this->Payload);
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&(this->Payload).field_0x2);
  if (this->bAddMutualComponents != false) {
    *param_3 = true;
  }
  return;
}

// GenerateType @ 1460c89e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::FAdd>::GenerateType
          (TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::FAdd> *this,
          FEntityManager *param_1,FComponentMask *param_2,bool *param_3)

{
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&this->Payload);
  if (this->bAddMutualComponents != false) {
    *param_3 = true;
  }
  return;
}

// Initialize @ 1460d1ea0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAddConditional,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TAddConditional<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TAddConditional<TObjectPtr<UMovieSceneCondition_const_>_>_>
::Initialize(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAddConditional,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TAddConditional<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TAddConditional<TObjectPtr<UMovieSceneCondition_const_>_>_>
             *this,FEntityManager *param_1,FEntityInfo *param_2)

{
  int iVar1;
  FEntityAllocation *pFVar2;
  
  if ((param_2->Data).Allocation != (FEntityAllocation *)0x0) {
    pFVar2 = (param_2->Data).Allocation;
    iVar1 = (param_2->Data).ComponentOffset;
    TAddConditional<FMovieSceneSequenceID>::Apply
              ((TAddConditional<FMovieSceneSequenceID> *)&(this->Payload).field_0x8,pFVar2,iVar1);
    TAddConditional<UE::MovieScene::FRootInstanceHandle>::Apply
              ((TAddConditional<UE::MovieScene::FRootInstanceHandle> *)&(this->Payload).field_0x14,
               pFVar2,iVar1);
    TAddConditional<UE::MovieScene::FInstanceHandle>::Apply
              ((TAddConditional<UE::MovieScene::FInstanceHandle> *)&(this->Payload).field_0x1e,
               pFVar2,iVar1);
    TAddConditional<TObjectPtr<UMovieSceneCondition_const_>_>::Apply
              ((TAddConditional<TObjectPtr<UMovieSceneCondition_const_>_> *)
               &(this->Payload).field_0x28,pFVar2,iVar1);
  }
  return;
}

// Initialize @ 1460d1f20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAddConditional,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TAddConditional<UE::MovieScene::FInstanceHandle>_>
::Initialize(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAddConditional,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TAddConditional<UE::MovieScene::FInstanceHandle>_>
             *this,FEntityManager *param_1,FEntityInfo *param_2)

{
  int iVar1;
  FEntityAllocation *pFVar2;
  
  if ((param_2->Data).Allocation != (FEntityAllocation *)0x0) {
    pFVar2 = (param_2->Data).Allocation;
    iVar1 = (param_2->Data).ComponentOffset;
    TAddConditional<FMovieSceneSequenceID>::Apply
              ((TAddConditional<FMovieSceneSequenceID> *)&(this->Payload).field_0x8,pFVar2,iVar1);
    TAddConditional<UE::MovieScene::FRootInstanceHandle>::Apply
              ((TAddConditional<UE::MovieScene::FRootInstanceHandle> *)&(this->Payload).field_0x14,
               pFVar2,iVar1);
    TAddConditional<UE::MovieScene::FInstanceHandle>::Apply
              ((TAddConditional<UE::MovieScene::FInstanceHandle> *)&(this->Payload).field_0x1e,
               pFVar2,iVar1);
  }
  return;
}

// Initialize @ 1460d1f90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAddConditional,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FRootInstanceHandle>_>
::Initialize(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAddConditional,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FRootInstanceHandle>_>
             *this,FEntityManager *param_1,FEntityInfo *param_2)

{
  int iVar1;
  FEntityAllocation *pFVar2;
  
  if ((param_2->Data).Allocation != (FEntityAllocation *)0x0) {
    pFVar2 = (param_2->Data).Allocation;
    iVar1 = (param_2->Data).ComponentOffset;
    TAddConditional<FMovieSceneSequenceID>::Apply
              ((TAddConditional<FMovieSceneSequenceID> *)&(this->Payload).field_0x8,pFVar2,iVar1);
    TAddConditional<UE::MovieScene::FRootInstanceHandle>::Apply
              ((TAddConditional<UE::MovieScene::FRootInstanceHandle> *)&(this->Payload).field_0x14,
               pFVar2,iVar1);
  }
  return;
}

// Initialize @ 1460d1ff0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAddConditional,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>_>
::Initialize(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAddConditional,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>_>
             *this,FEntityManager *param_1,FEntityInfo *param_2)

{
  if ((param_2->Data).Allocation != (FEntityAllocation *)0x0) {
    TAddConditional<FMovieSceneSequenceID>::Apply
              ((TAddConditional<FMovieSceneSequenceID> *)&(this->Payload).field_0x8,
               (param_2->Data).Allocation,(param_2->Data).ComponentOffset);
    return;
  }
  return;
}

// Initialize @ 1460d2020

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAddConditional>
::Initialize(TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAddConditional>
             *this,FEntityManager *param_1,FEntityInfo *param_2)

{
  return;
}

// Initialize @ 1460d2030

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>::Initialize
          (TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
           *this,FEntityManager *param_1,FEntityInfo *param_2)

{
  return;
}

// Initialize @ 1460d2040

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::FAdd>::Initialize
          (TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::FAdd> *this,
          FEntityManager *param_1,FEntityInfo *param_2)

{
  return;
}

// Add<double,double_&> @ 146168fd0

TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>_>
* __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAdd<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::TAdd<double>_>
::Add<double,double_&>
          (TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAdd<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::TAdd<double>_>
           *this,TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>_>
                 *__return_storage_ptr__,TComponentTypeID<double> param_1,double *param_2)

{
  double dVar1;
  bool bVar2;
  char cVar3;
  
  dVar1 = *param_2;
  bVar2 = this->bAddMutualComponents;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02__U__TAdd_UFRootInstanceHandle_MovieScene_UE___MovieScene_UE__U__TAdd_UFMovieSceneSequenceID___34_U__TAdd_N_34_U634__MovieScene_UE__6B_
  ;
  *(undefined2 *)&__return_storage_ptr__->field_0x8 = *(undefined2 *)&this->Payload;
  __return_storage_ptr__->field_0xe = 0;
  cVar3 = (this->Payload).field_0x6;
  __return_storage_ptr__->field_0xe = cVar3;
  if (cVar3 != '\0') {
    *(undefined4 *)&__return_storage_ptr__->field_0xa = *(undefined4 *)&(this->Payload).field_0x2;
  }
  *(undefined2 *)&__return_storage_ptr__->field_0x10 = *(undefined2 *)&(this->Payload).field_0x8;
  __return_storage_ptr__->field_0x18 = 0;
  cVar3 = (this->Payload).field_0x10;
  __return_storage_ptr__->field_0x18 = cVar3;
  if (cVar3 != '\0') {
    *(undefined4 *)&__return_storage_ptr__->field_0x14 = *(undefined4 *)&(this->Payload).field_0xc;
  }
  *(undefined2 *)&__return_storage_ptr__->field_0x20 = *(undefined2 *)&(this->Payload).field_0x18;
  __return_storage_ptr__->field_0x30 = 0;
  cVar3 = (this->Payload).field_0x28;
  __return_storage_ptr__->field_0x30 = cVar3;
  if (cVar3 != '\0') {
    *(undefined8 *)&__return_storage_ptr__->field_0x28 = *(undefined8 *)&(this->Payload).field_0x20;
  }
  *(TComponentTypeID<double> *)&__return_storage_ptr__->field_0x38 = param_1;
  __return_storage_ptr__->field_0x48 = 1;
  *(double *)&__return_storage_ptr__->field_0x40 = dVar1;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilder_U__TAdd_UFRootInstanceHandle_MovieScene_UE___MovieScene_UE__U__TAdd_UFMovieSceneSequenceID___23_U__TAdd_N_23_U523__MovieScene_UE__6B_
  ;
  __return_storage_ptr__->field_0x50 = bVar2;
  return __return_storage_ptr__;
}

// Add<double,double_&> @ 146169070

TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::TAdd<double>_>
* __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TAdd<FMovieSceneSequenceID>_>
::Add<double,double_&>
          (TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TAdd<FMovieSceneSequenceID>_>
           *this,TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::TAdd<double>_>
                 *__return_storage_ptr__,TComponentTypeID<double> param_1,double *param_2)

{
  double dVar1;
  bool bVar2;
  char cVar3;
  
  dVar1 = *param_2;
  bVar2 = this->bAddMutualComponents;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01__U__TAdd_UFRootInstanceHandle_MovieScene_UE___MovieScene_UE__U__TAdd_UFMovieSceneSequenceID___34_U__TAdd_N_34__MovieScene_UE__6B_
  ;
  *(undefined2 *)&__return_storage_ptr__->field_0x8 = *(undefined2 *)&this->Payload;
  __return_storage_ptr__->field_0xe = 0;
  cVar3 = (this->Payload).field_0x6;
  __return_storage_ptr__->field_0xe = cVar3;
  if (cVar3 != '\0') {
    *(undefined4 *)&__return_storage_ptr__->field_0xa = *(undefined4 *)&(this->Payload).field_0x2;
  }
  *(undefined2 *)&__return_storage_ptr__->field_0x10 = *(undefined2 *)&(this->Payload).field_0x8;
  __return_storage_ptr__->field_0x18 = 0;
  cVar3 = (this->Payload).field_0x10;
  __return_storage_ptr__->field_0x18 = cVar3;
  if (cVar3 != '\0') {
    *(undefined4 *)&__return_storage_ptr__->field_0x14 = *(undefined4 *)&(this->Payload).field_0xc;
  }
  *(TComponentTypeID<double> *)&__return_storage_ptr__->field_0x20 = param_1;
  __return_storage_ptr__->field_0x30 = 1;
  *(double *)&__return_storage_ptr__->field_0x28 = dVar1;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilder_U__TAdd_UFRootInstanceHandle_MovieScene_UE___MovieScene_UE__U__TAdd_UFMovieSceneSequenceID___23_U__TAdd_N_23__MovieScene_UE__6B_
  ;
  __return_storage_ptr__->field_0x38 = bVar2;
  return __return_storage_ptr__;
}

// Add<FMovieSceneSequenceID,FMovieSceneSequenceID_&> @ 1461690f0

TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TAdd<FMovieSceneSequenceID>_>
* __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAdd<UE::MovieScene::FRootInstanceHandle>_>
::Add<FMovieSceneSequenceID,FMovieSceneSequenceID_&>
          (TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAdd<UE::MovieScene::FRootInstanceHandle>_>
           *this,TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TAdd<FMovieSceneSequenceID>_>
                 *__return_storage_ptr__,TComponentTypeID<FMovieSceneSequenceID> param_1,
          FMovieSceneSequenceID *param_2)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  
  bVar1 = this->bAddMutualComponents;
  uVar3 = param_2->Value;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00__U__TAdd_UFRootInstanceHandle_MovieScene_UE___MovieScene_UE__U__TAdd_UFMovieSceneSequenceID___34__MovieScene_UE__6B_
  ;
  *(undefined2 *)&__return_storage_ptr__->field_0x8 = *(undefined2 *)&this->Payload;
  __return_storage_ptr__->field_0xe = 0;
  cVar2 = (this->Payload).field_0x6;
  __return_storage_ptr__->field_0xe = cVar2;
  if (cVar2 != '\0') {
    *(undefined4 *)&__return_storage_ptr__->field_0xa = *(undefined4 *)&(this->Payload).field_0x2;
  }
  *(TComponentTypeID<FMovieSceneSequenceID> *)&__return_storage_ptr__->field_0x10 = param_1;
  __return_storage_ptr__->field_0x18 = 1;
  *(uint *)&__return_storage_ptr__->field_0x14 = uVar3;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilder_U__TAdd_UFRootInstanceHandle_MovieScene_UE___MovieScene_UE__U__TAdd_UFMovieSceneSequenceID___23__MovieScene_UE__6B_
  ;
  __return_storage_ptr__->field_0x1c = bVar1;
  return __return_storage_ptr__;
}

// Add<UE::MovieScene::FRootInstanceHandle,UE::MovieScene::FRootInstanceHandle_&> @ 146169150

TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FRootInstanceHandle>_> * __thiscall
UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int>_>::
Add<UE::MovieScene::FRootInstanceHandle,UE::MovieScene::FRootInstanceHandle_&>
          (TEntityBuilderImpl<TIntegerSequence<int>_> *this,
          TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FRootInstanceHandle>_>
          *__return_storage_ptr__,TComponentTypeID<UE::MovieScene::FRootInstanceHandle> param_1,
          FRootInstanceHandle *param_2)

{
  FRootInstanceHandle FVar1;
  
  FVar1 = *param_2;
  *(TComponentTypeID<UE::MovieScene::FRootInstanceHandle> *)&__return_storage_ptr__->field_0x8 =
       param_1;
  __return_storage_ptr__->field_0xe = 1;
  *(FRootInstanceHandle *)&__return_storage_ptr__->field_0xa = FVar1;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilder_U__TAdd_UFRootInstanceHandle_MovieScene_UE___MovieScene_UE___MovieScene_UE__6B_
  ;
  __return_storage_ptr__->field_0x10 = 0;
  return __return_storage_ptr__;
}

// AddTag @ 146190540

TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::FAdd>
* __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TAdd<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>_>
::AddTag(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TAdd<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>_>
         *this,TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::FAdd>
               *__return_storage_ptr__,FComponentTypeID param_1)

{
  bool bVar1;
  char cVar2;
  
  bVar1 = this->bAddMutualComponents;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02_03__U__TAdd_UFRootInstanceHandle_MovieScene_UE___MovieScene_UE__U__TAdd_UFMovieSceneSequenceID___34_U__TAdd_N_34_U634_UFAdd_34__MovieScene_UE__6B_
  ;
  *(undefined2 *)&__return_storage_ptr__->field_0x8 = *(undefined2 *)&this->Payload;
  __return_storage_ptr__->field_0xe = 0;
  cVar2 = (this->Payload).field_0x6;
  __return_storage_ptr__->field_0xe = cVar2;
  if (cVar2 != '\0') {
    *(undefined4 *)&__return_storage_ptr__->field_0xa = *(undefined4 *)&(this->Payload).field_0x2;
  }
  *(undefined2 *)&__return_storage_ptr__->field_0x10 = *(undefined2 *)&(this->Payload).field_0x8;
  __return_storage_ptr__->field_0x18 = 0;
  cVar2 = (this->Payload).field_0x10;
  __return_storage_ptr__->field_0x18 = cVar2;
  if (cVar2 != '\0') {
    *(undefined4 *)&__return_storage_ptr__->field_0x14 = *(undefined4 *)&(this->Payload).field_0xc;
  }
  *(undefined2 *)&__return_storage_ptr__->field_0x20 = *(undefined2 *)&(this->Payload).field_0x18;
  __return_storage_ptr__->field_0x30 = 0;
  cVar2 = (this->Payload).field_0x28;
  __return_storage_ptr__->field_0x30 = cVar2;
  if (cVar2 != '\0') {
    *(undefined8 *)&__return_storage_ptr__->field_0x28 = *(undefined8 *)&(this->Payload).field_0x20;
  }
  *(undefined2 *)&__return_storage_ptr__->field_0x38 = *(undefined2 *)&(this->Payload).field_0x30;
  __return_storage_ptr__->field_0x48 = 0;
  cVar2 = (this->Payload).field_0x40;
  __return_storage_ptr__->field_0x48 = cVar2;
  if (cVar2 != '\0') {
    *(undefined8 *)&__return_storage_ptr__->field_0x40 = *(undefined8 *)&(this->Payload).field_0x38;
  }
  *(ushort *)&__return_storage_ptr__->field_0x50 = param_1.Value;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilder_U__TAdd_UFRootInstanceHandle_MovieScene_UE___MovieScene_UE__U__TAdd_UFMovieSceneSequenceID___23_U__TAdd_N_23_U523_UFAdd_23__MovieScene_UE__6B_
  ;
  __return_storage_ptr__->field_0x58 = bVar1;
  return __return_storage_ptr__;
}

// Create @ 14619a670

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneEntityID __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::FAdd>
::Create(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::FAdd>
         *this,FEntityManager *param_1)

{
  FComponentMask *in_R8;
  
  FEntityBuilderImplBase::CreateEntity((FEntityBuilderImplBase *)this,param_1,in_R8);
  return (FMovieSceneEntityID)(ushort)param_1;
}

// Create @ 14619a6b0

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneEntityID __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TAdd<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>_>
::Create(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TAdd<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>_>
         *this,FEntityManager *param_1)

{
  FComponentMask *in_R8;
  
  FEntityBuilderImplBase::CreateEntity((FEntityBuilderImplBase *)this,param_1,in_R8);
  return (FMovieSceneEntityID)(ushort)param_1;
}

// Create @ 14619a6f0

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneEntityID __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAdd<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::TAdd<double>_>
::Create(TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAdd<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::TAdd<double>_>
         *this,FEntityManager *param_1)

{
  FComponentMask *in_R8;
  
  FEntityBuilderImplBase::CreateEntity((FEntityBuilderImplBase *)this,param_1,in_R8);
  return (FMovieSceneEntityID)(ushort)param_1;
}

// Create @ 14619a730

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneEntityID __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TAdd<FMovieSceneSequenceID>_>
::Create(TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TAdd<FMovieSceneSequenceID>_>
         *this,FEntityManager *param_1)

{
  FComponentMask *in_R8;
  
  FEntityBuilderImplBase::CreateEntity((FEntityBuilderImplBase *)this,param_1,in_R8);
  return (FMovieSceneEntityID)(ushort)param_1;
}

// Create @ 14619a770

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneEntityID __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAdd<UE::MovieScene::FRootInstanceHandle>_>
::Create(TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAdd<UE::MovieScene::FRootInstanceHandle>_>
         *this,FEntityManager *param_1)

{
  FComponentMask *in_R8;
  
  FEntityBuilderImplBase::CreateEntity((FEntityBuilderImplBase *)this,param_1,in_R8);
  return (FMovieSceneEntityID)(ushort)param_1;
}

// GenerateType @ 1461af740

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::FAdd>
::GenerateType(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::FAdd>
               *this,FEntityManager *param_1,FComponentMask *param_2,bool *param_3)

{
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&this->Payload);
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&(this->Payload).field_0x8);
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&(this->Payload).field_0x18);
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&(this->Payload).field_0x30);
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&(this->Payload).field_0x48);
  if (this->bAddMutualComponents != false) {
    *param_3 = true;
  }
  return;
}

// GenerateType @ 1461af7c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TAdd<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>_>
::GenerateType(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TAdd<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>_>
               *this,FEntityManager *param_1,FComponentMask *param_2,bool *param_3)

{
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&this->Payload);
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&(this->Payload).field_0x8);
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&(this->Payload).field_0x18);
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&(this->Payload).field_0x30);
  if (this->bAddMutualComponents != false) {
    *param_3 = true;
  }
  return;
}

// GenerateType @ 1461af830

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAdd<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::TAdd<double>_>
::GenerateType(TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAdd<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::TAdd<double>_>
               *this,FEntityManager *param_1,FComponentMask *param_2,bool *param_3)

{
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&this->Payload);
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&(this->Payload).field_0x8);
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&(this->Payload).field_0x18);
  if (this->bAddMutualComponents != false) {
    *param_3 = true;
  }
  return;
}

// GenerateType @ 1461af890

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TAdd<FMovieSceneSequenceID>_>
::GenerateType(TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TAdd<FMovieSceneSequenceID>_>
               *this,FEntityManager *param_1,FComponentMask *param_2,bool *param_3)

{
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&this->Payload);
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&(this->Payload).field_0x8);
  if (this->bAddMutualComponents != false) {
    *param_3 = true;
  }
  return;
}

// GenerateType @ 1461af8e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAdd<UE::MovieScene::FRootInstanceHandle>_>
::GenerateType(TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAdd<UE::MovieScene::FRootInstanceHandle>_>
               *this,FEntityManager *param_1,FComponentMask *param_2,bool *param_3)

{
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&this->Payload);
  if (this->bAddMutualComponents != false) {
    *param_3 = true;
  }
  return;
}

// Initialize @ 1461b56b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::FAdd>
::Initialize(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::FAdd>
             *this,FEntityManager *param_1,FEntityInfo *param_2)

{
  int iVar1;
  FEntityAllocation *pFVar2;
  
  if ((param_2->Data).Allocation != (FEntityAllocation *)0x0) {
    pFVar2 = (param_2->Data).Allocation;
    iVar1 = (param_2->Data).ComponentOffset;
    TAdd<UE::MovieScene::FRootInstanceHandle>::Apply
              ((TAdd<UE::MovieScene::FRootInstanceHandle> *)&this->Payload,pFVar2,iVar1);
    TAdd<FMovieSceneSequenceID>::Apply
              ((TAdd<FMovieSceneSequenceID> *)&(this->Payload).field_0x8,pFVar2,iVar1);
    TAdd<double>::Apply((TAdd<double> *)&(this->Payload).field_0x18,pFVar2,iVar1);
    TAdd<double>::Apply((TAdd<double> *)&(this->Payload).field_0x30,pFVar2,iVar1);
  }
  return;
}

// Initialize @ 1461b5730

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TAdd<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>_>
::Initialize(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TAdd<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>_>
             *this,FEntityManager *param_1,FEntityInfo *param_2)

{
  int iVar1;
  FEntityAllocation *pFVar2;
  
  if ((param_2->Data).Allocation != (FEntityAllocation *)0x0) {
    pFVar2 = (param_2->Data).Allocation;
    iVar1 = (param_2->Data).ComponentOffset;
    TAdd<UE::MovieScene::FRootInstanceHandle>::Apply
              ((TAdd<UE::MovieScene::FRootInstanceHandle> *)&this->Payload,pFVar2,iVar1);
    TAdd<FMovieSceneSequenceID>::Apply
              ((TAdd<FMovieSceneSequenceID> *)&(this->Payload).field_0x8,pFVar2,iVar1);
    TAdd<double>::Apply((TAdd<double> *)&(this->Payload).field_0x18,pFVar2,iVar1);
    TAdd<double>::Apply((TAdd<double> *)&(this->Payload).field_0x30,pFVar2,iVar1);
  }
  return;
}

// Initialize @ 1461b57b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAdd<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::TAdd<double>_>
::Initialize(TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAdd<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::TAdd<double>_>
             *this,FEntityManager *param_1,FEntityInfo *param_2)

{
  int iVar1;
  FEntityAllocation *pFVar2;
  
  if ((param_2->Data).Allocation != (FEntityAllocation *)0x0) {
    pFVar2 = (param_2->Data).Allocation;
    iVar1 = (param_2->Data).ComponentOffset;
    TAdd<UE::MovieScene::FRootInstanceHandle>::Apply
              ((TAdd<UE::MovieScene::FRootInstanceHandle> *)&this->Payload,pFVar2,iVar1);
    TAdd<FMovieSceneSequenceID>::Apply
              ((TAdd<FMovieSceneSequenceID> *)&(this->Payload).field_0x8,pFVar2,iVar1);
    TAdd<double>::Apply((TAdd<double> *)&(this->Payload).field_0x18,pFVar2,iVar1);
  }
  return;
}

// Initialize @ 1461b5820

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TAdd<FMovieSceneSequenceID>_>
::Initialize(TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TAdd<FMovieSceneSequenceID>_>
             *this,FEntityManager *param_1,FEntityInfo *param_2)

{
  int iVar1;
  FEntityAllocation *pFVar2;
  
  if ((param_2->Data).Allocation != (FEntityAllocation *)0x0) {
    pFVar2 = (param_2->Data).Allocation;
    iVar1 = (param_2->Data).ComponentOffset;
    TAdd<UE::MovieScene::FRootInstanceHandle>::Apply
              ((TAdd<UE::MovieScene::FRootInstanceHandle> *)&this->Payload,pFVar2,iVar1);
    TAdd<FMovieSceneSequenceID>::Apply
              ((TAdd<FMovieSceneSequenceID> *)&(this->Payload).field_0x8,pFVar2,iVar1);
  }
  return;
}

// Initialize @ 1461b5890

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAdd<UE::MovieScene::FRootInstanceHandle>_>
::Initialize(TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAdd<UE::MovieScene::FRootInstanceHandle>_>
             *this,FEntityManager *param_1,FEntityInfo *param_2)

{
  if ((param_2->Data).Allocation != (FEntityAllocation *)0x0) {
    TAdd<UE::MovieScene::FRootInstanceHandle>::Apply
              ((TAdd<UE::MovieScene::FRootInstanceHandle> *)&this->Payload,
               (param_2->Data).Allocation,(param_2->Data).ComponentOffset);
    return;
  }
  return;
}

// operator()<UE::MovieScene::TAdd<FFrameTime>_> @ 1461ea670

void __thiscall
`UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAdd<FFrameTime>_>::
Initialize'::__l5::<lambda_1>::operator()<UE::MovieScene::TAdd<FFrameTime>_>
          (void *this,TAdd<FFrameTime> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  FFrameTime *pFVar8;
  FComponentHeader *this_00;
  FComponentHeader *pFVar9;
  
  lVar5 = *(longlong *)this;
  iVar3 = *(int *)((longlong)this + 8);
  this_00 = *(FComponentHeader **)(lVar5 + 0x28);
  pFVar9 = this_00 + *(ushort *)(lVar5 + 0xc);
  for (; this_00 != pFVar9; this_00 = this_00 + 1) {
    if ((this_00->ComponentType).Value == (ushort)param_1->_padding_) goto LAB_1461ea6e9;
  }
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("Header",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                     ,0x2db,L"");
  this_00 = (FComponentHeader *)0x0;
  if (bVar7) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
LAB_1461ea6e9:
  if ((this_00->Sizeof == '\0') &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Header.IsTag()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntityBuilder.h"
                         ,0x1fb,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar4 = *(int *)(lVar5 + 0x14);
  if (iVar4 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)&this_00->ReadWriteLock);
  }
  LOCK();
  paVar1 = &this_00->ScheduledAccessCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + 1);
  UNLOCK();
  if ((aVar2 != (atomic<int>)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("PreviousAccessCount == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                         ,0x487,
                         L"Component header is still in use when it is being opened for write!"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar8 = UE::MovieScene::FComponentHeader::GetValuePtr(this_00,iVar3);
  if (((param_1->Payload).bIsSet == false) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  *pFVar8 = (param_1->Payload).TypedValue;
  if ((param_1->Payload).bIsSet != false) {
    (param_1->Payload).bIsSet = false;
  }
  pFVar9 = (FComponentHeader *)0x0;
  if ((FComponentHeader *)this_00->SerialNumber != (FComponentHeader *)0x0) {
    pFVar9 = (FComponentHeader *)this_00->SerialNumber;
  }
  this_00->SerialNumber = (ulong64)pFVar9;
  LOCK();
  this_00->ScheduledAccessCount = (atomic<int>)((int)this_00->ScheduledAccessCount + -1);
  UNLOCK();
  if (iVar4 == 1) {
    ReleaseSRWLockExclusive((PSRWLOCK)&this_00->ReadWriteLock);
  }
  return;
}

// Add<FFrameTime,FFrameNumber_const_&> @ 1461ea7f0

TEntityBuilder<UE::MovieScene::TAdd<FFrameTime>_> * __thiscall
UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int>_>::Add<FFrameTime,FFrameNumber_const_&>
          (TEntityBuilderImpl<TIntegerSequence<int>_> *this,
          TEntityBuilder<UE::MovieScene::TAdd<FFrameTime>_> *__return_storage_ptr__,
          TComponentTypeID<FFrameTime> param_1,FFrameNumber *param_2)

{
  uint uVar1;
  
  uVar1 = param_2->Value;
  *(TComponentTypeID<FFrameTime> *)&__return_storage_ptr__->field_0x8 = param_1;
  __return_storage_ptr__->field_0x14 = 1;
  *(ulonglong *)&__return_storage_ptr__->field_0xc = (ulonglong)uVar1;
  *(undefined ***)__return_storage_ptr__ =
       &___7__TEntityBuilder_U__TAdd_UFFrameTime___MovieScene_UE___MovieScene_UE__6B_;
  __return_storage_ptr__->field_0x18 = 0;
  return __return_storage_ptr__;
}

// Add<FGuid,FGuid> @ 1461ea830

TEntityBuilder<UE::MovieScene::TAdd<FGuid>_> * __thiscall
UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int>_>::Add<FGuid,FGuid>
          (TEntityBuilderImpl<TIntegerSequence<int>_> *this,
          TEntityBuilder<UE::MovieScene::TAdd<FGuid>_> *__return_storage_ptr__,
          TComponentTypeID<FGuid> param_1,FGuid *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = param_2->A;
  uVar2 = param_2->B;
  uVar3 = param_2->C;
  uVar4 = param_2->D;
  *(TComponentTypeID<FGuid> *)&__return_storage_ptr__->field_0x8 = param_1;
  __return_storage_ptr__->field_0x1c = 1;
  *(uint *)&__return_storage_ptr__->field_0xc = uVar1;
  *(uint *)&__return_storage_ptr__->field_0x10 = uVar2;
  *(uint *)&__return_storage_ptr__->field_0x14 = uVar3;
  *(uint *)&__return_storage_ptr__->field_0x18 = uVar4;
  *(undefined ***)__return_storage_ptr__ =
       &___7__TEntityBuilder_U__TAdd_UFGuid___MovieScene_UE___MovieScene_UE__6B_;
  __return_storage_ptr__->field_0x20 = 0;
  return __return_storage_ptr__;
}

// Add<FMovieSceneEvaluationHookComponent,FMovieSceneEvaluationHookComponent_&> @ 1461ea860

TEntityBuilder<UE::MovieScene::TAdd<FMovieSceneEvaluationHookComponent>_> * __thiscall
UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int>_>::
Add<FMovieSceneEvaluationHookComponent,FMovieSceneEvaluationHookComponent_&>
          (TEntityBuilderImpl<TIntegerSequence<int>_> *this,
          TEntityBuilder<UE::MovieScene::TAdd<FMovieSceneEvaluationHookComponent>_>
          *__return_storage_ptr__,TComponentTypeID<FMovieSceneEvaluationHookComponent> param_1,
          FMovieSceneEvaluationHookComponent *param_2)

{
  UObject *pUVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  pUVar1 = *(UObject **)&param_2->Interface;
  if ((GC::GIsIncrementalReachabilityPending) && (pUVar1 != (UObject *)0x0)) {
    GC::MarkAsReachable(pUVar1);
  }
  uVar3 = (param_2->ObjectBindingID).A;
  uVar4 = (param_2->ObjectBindingID).B;
  uVar5 = (param_2->ObjectBindingID).C;
  uVar6 = (param_2->ObjectBindingID).D;
  uVar2 = *(undefined8 *)&(param_2->Interface).field_0x8;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A___U__TAdd_UFMovieSceneEvaluationHookComponent___MovieScene_UE___MovieScene_UE__6B_
  ;
  *(TComponentTypeID<FMovieSceneEvaluationHookComponent> *)&__return_storage_ptr__->field_0x8 =
       param_1;
  __return_storage_ptr__->field_0x30 = 1;
  *(UObject **)&__return_storage_ptr__->field_0x10 = pUVar1;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    GC::MarkAsReachable(pUVar1);
  }
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = uVar2;
  *(uint *)&__return_storage_ptr__->field_0x20 = uVar3;
  *(uint *)&__return_storage_ptr__->field_0x24 = uVar4;
  *(uint *)&__return_storage_ptr__->field_0x28 = uVar5;
  *(uint *)&__return_storage_ptr__->field_0x2c = uVar6;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilder_U__TAdd_UFMovieSceneEvaluationHookComponent___MovieScene_UE___MovieScene_UE__6B_
  ;
  __return_storage_ptr__->field_0x38 = 0;
  return __return_storage_ptr__;
}

// AddConditional<short,int_const_&> @ 1461f0770

TEntityBuilder<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>_>
* __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>_>
::AddConditional<short,int_const_&>
          (TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>_>
           *this,TEntityBuilder<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>_>
                 *__return_storage_ptr__,TComponentTypeID<short> param_1,int *param_2,bool param_3)

{
  bool bVar1;
  char cVar2;
  UObject *pUVar3;
  int iVar4;
  undefined4 local_res8;
  
  iVar4 = *param_2;
  bVar1 = this->bAddMutualComponents;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02__U__TAddConditional_V__TSubclassOf_VUMovieSceneBlenderSystem_____MovieScene_UE__U__TAddConditional_H_34_U__TAddConditional_UFEasingComponentData___34_U__TAddConditional_F_34__MovieScene_UE__6B_
  ;
  *(undefined4 *)&__return_storage_ptr__->field_0x8 = *(undefined4 *)&this->Payload;
  __return_storage_ptr__->field_0x18 = 0;
  cVar2 = (this->Payload).field_0x10;
  local_res8 = CONCAT22(CONCAT11(local_res8._3_1_,param_3),param_1);
  __return_storage_ptr__->field_0x18 = cVar2;
  if (cVar2 != '\0') {
    pUVar3 = *(UObject **)&(this->Payload).field_0x8;
    *(UObject **)&__return_storage_ptr__->field_0x10 = pUVar3;
    if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar3);
    }
  }
  *(undefined4 *)&__return_storage_ptr__->field_0x20 = *(undefined4 *)&(this->Payload).field_0x18;
  __return_storage_ptr__->field_0x28 = 0;
  cVar2 = (this->Payload).field_0x20;
  __return_storage_ptr__->field_0x28 = cVar2;
  if (cVar2 != '\0') {
    *(undefined4 *)&__return_storage_ptr__->field_0x24 = *(undefined4 *)&(this->Payload).field_0x1c;
  }
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = *(undefined4 *)&(this->Payload).field_0x28;
  __return_storage_ptr__->field_0x40 = 0;
  cVar2 = (this->Payload).field_0x38;
  __return_storage_ptr__->field_0x40 = cVar2;
  if (cVar2 != '\0') {
    pUVar3 = *(UObject **)&(this->Payload).field_0x30;
    *(UObject **)&__return_storage_ptr__->field_0x38 = pUVar3;
    if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar3);
    }
  }
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = local_res8;
  __return_storage_ptr__->field_0x4e = 1;
  *(short *)&__return_storage_ptr__->field_0x4c = (short)iVar4;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilder_U__TAddConditional_V__TSubclassOf_VUMovieSceneBlenderSystem_____MovieScene_UE__U__TAddConditional_H_23_U__TAddConditional_UFEasingComponentData___23_U__TAddConditional_F_23__MovieScene_UE__6B_
  ;
  __return_storage_ptr__->field_0x50 = bVar1;
  return __return_storage_ptr__;
}

// AddConditional<int,int_&> @ 1461f0870

TEntityBuilder<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>_>
* __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>_>
::AddConditional<int,int_&>
          (TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>_>
           *this,TEntityBuilder<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>_>
                 *__return_storage_ptr__,TComponentTypeID<int> param_1,int *param_2,bool param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  UObject *pUVar4;
  undefined4 local_18;
  
  iVar3 = *param_2;
  bVar1 = this->bAddMutualComponents;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00__U__TAddConditional_V__TSubclassOf_VUMovieSceneBlenderSystem_____MovieScene_UE__U__TAddConditional_H_34__MovieScene_UE__6B_
  ;
  *(undefined4 *)&__return_storage_ptr__->field_0x8 = *(undefined4 *)&this->Payload;
  __return_storage_ptr__->field_0x18 = 0;
  cVar2 = (this->Payload).field_0x10;
  local_18 = CONCAT22(CONCAT11(local_18._3_1_,param_3),param_1);
  __return_storage_ptr__->field_0x18 = cVar2;
  if (cVar2 != '\0') {
    pUVar4 = *(UObject **)&(this->Payload).field_0x8;
    *(UObject **)&__return_storage_ptr__->field_0x10 = pUVar4;
    if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar4);
    }
  }
  *(undefined4 *)&__return_storage_ptr__->field_0x20 = local_18;
  __return_storage_ptr__->field_0x28 = 1;
  *(int *)&__return_storage_ptr__->field_0x24 = iVar3;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilder_U__TAddConditional_V__TSubclassOf_VUMovieSceneBlenderSystem_____MovieScene_UE__U__TAddConditional_H_23__MovieScene_UE__6B_
  ;
  __return_storage_ptr__->field_0x30 = bVar1;
  return __return_storage_ptr__;
}

// AddConditional<FEasingComponentData,FEasingComponentData> @ 1461f0910

TEntityBuilder<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>_>
* __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>_>
::AddConditional<FEasingComponentData,FEasingComponentData>
          (TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>_>
           *this,TEntityBuilder<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>_>
                 *__return_storage_ptr__,TComponentTypeID<FEasingComponentData> param_1,
          FEasingComponentData *param_2,bool param_3)

{
  bool bVar1;
  char cVar2;
  UMovieSceneSection *pUVar3;
  UObject *pUVar4;
  undefined4 local_28;
  
  pUVar3 = (param_2->Section).field0_0x0.DebugPtr;
  local_28 = CONCAT22(CONCAT11(local_28._3_1_,param_3),param_1);
  if ((GC::GIsIncrementalReachabilityPending) && (pUVar3 != (UMovieSceneSection *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar3);
  }
  bVar1 = this->bAddMutualComponents;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01__U__TAddConditional_V__TSubclassOf_VUMovieSceneBlenderSystem_____MovieScene_UE__U__TAddConditional_H_34_U__TAddConditional_UFEasingComponentData___34__MovieScene_UE__6B_
  ;
  *(undefined4 *)&__return_storage_ptr__->field_0x8 = *(undefined4 *)&this->Payload;
  __return_storage_ptr__->field_0x18 = 0;
  cVar2 = (this->Payload).field_0x10;
  __return_storage_ptr__->field_0x18 = cVar2;
  if (cVar2 != '\0') {
    pUVar4 = *(UObject **)&(this->Payload).field_0x8;
    *(UObject **)&__return_storage_ptr__->field_0x10 = pUVar4;
    if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar4);
    }
  }
  *(undefined4 *)&__return_storage_ptr__->field_0x20 = *(undefined4 *)&(this->Payload).field_0x18;
  __return_storage_ptr__->field_0x28 = 0;
  cVar2 = (this->Payload).field_0x20;
  __return_storage_ptr__->field_0x28 = cVar2;
  if (cVar2 != '\0') {
    *(undefined4 *)&__return_storage_ptr__->field_0x24 = *(undefined4 *)&(this->Payload).field_0x1c;
  }
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = local_28;
  __return_storage_ptr__->field_0x40 = 1;
  *(UMovieSceneSection **)&__return_storage_ptr__->field_0x38 = pUVar3;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UMovieSceneSection *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar3);
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilder_U__TAddConditional_V__TSubclassOf_VUMovieSceneBlenderSystem_____MovieScene_UE__U__TAddConditional_H_23_U__TAddConditional_UFEasingComponentData___23__MovieScene_UE__6B_
  ;
  __return_storage_ptr__->field_0x48 = bVar1;
  return __return_storage_ptr__;
}

// AddConditional<FFrameTime,FFrameNumber_const_> @ 1461f0a00

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

TEntityBuilder<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>_>
* __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>_>
::AddConditional<FFrameTime,FFrameNumber_const_>
          (TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>_>
           *this,TEntityBuilder<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>_>
                 *__return_storage_ptr__,TComponentTypeID<FFrameTime> param_1,FFrameNumber *param_2,
          bool param_3)

{
  bool bVar1;
  TComponentTypeID<FFrameTime> local_18;
  bool local_16;
  FFrameTime local_14;
  bool local_c;
  
  bVar1 = this->bAddMutualComponents;
  local_16 = param_3;
  local_14.SubFrame = 0.0;
  local_14.FrameNumber.Value = param_2->Value;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02_03_04_05__U__TAddConditional_V__TSubclassOf_VUMovieSceneBlenderSystem_____MovieScene_UE__U__TAddConditional_H_34_U__TAddConditional_UFEasingComponentData___34_U__TAddConditional_F_34_U__TAddConditional_UFInterrogationKey_MovieScene_UE___34_U__TAddConditional_UFInterrogationInstance_MovieScene_UE___34_U__TAddConditional_UFFrameTime___34__MovieScene_UE__6B_
  ;
  local_c = true;
  local_18 = param_1;
  Core::Private::Tuple::
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>_>
  ::
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>_><UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>_>
            ((TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>_>
              *)&__return_storage_ptr__->field_0x8,ForwardingConstructor,
             (TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_> *)&this->Payload,
             (TAddConditional<int> *)&(this->Payload).field_0x18,
             (TAddConditional<FEasingComponentData> *)&(this->Payload).field_0x28,
             (TAddConditional<short> *)&(this->Payload).field_0x40,
             (TAddConditional<UE::MovieScene::FInterrogationKey> *)&(this->Payload).field_0x48,
             (TAddConditional<UE::MovieScene::FInterrogationInstance> *)&(this->Payload).field_0x58,
             (TAddConditional<FFrameTime> *)&local_18);
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilder_U__TAddConditional_V__TSubclassOf_VUMovieSceneBlenderSystem_____MovieScene_UE__U__TAddConditional_H_23_U__TAddConditional_UFEasingComponentData___23_U__TAddConditional_F_23_U__TAddConditional_UFInterrogationKey_MovieScene_UE___23_U__TAddConditional_UFInterrogationInstance_MovieScene_UE___23_U__TAddConditional_UFFrameTime___23__MovieScene_UE__6B_
  ;
  __return_storage_ptr__->field_0x88 = bVar1;
  return __return_storage_ptr__;
}

// AddConditional<FGuid,FGuid> @ 1461f0ac0

TEntityBuilder<UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAddConditional<FGuid>_> * __thiscall
UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAdd<FGuid>_>::
AddConditional<FGuid,FGuid>
          (TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAdd<FGuid>_> *this,
          TEntityBuilder<UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAddConditional<FGuid>_>
          *__return_storage_ptr__,TComponentTypeID<FGuid> param_1,FGuid *param_2,bool param_3)

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
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00__U__TAdd_UFGuid___MovieScene_UE__U__TAddConditional_UFGuid___34__MovieScene_UE__6B_
  ;
  *(undefined2 *)&__return_storage_ptr__->field_0x8 = *(undefined2 *)&this->Payload;
  __return_storage_ptr__->field_0x1c = 0;
  cVar2 = (this->Payload).field_0x14;
  __return_storage_ptr__->field_0x1c = cVar2;
  if (cVar2 != '\0') {
    uVar3 = *(undefined8 *)&(this->Payload).field_0xc;
    *(undefined8 *)&__return_storage_ptr__->field_0xc = *(undefined8 *)&(this->Payload).field_0x4;
    *(undefined8 *)&__return_storage_ptr__->field_0x14 = uVar3;
  }
  *(undefined4 *)&__return_storage_ptr__->field_0x20 = local_28;
  __return_storage_ptr__->field_0x34 = 1;
  *(uint *)&__return_storage_ptr__->field_0x24 = uVar4;
  *(uint *)&__return_storage_ptr__->field_0x28 = uVar5;
  *(uint *)&__return_storage_ptr__->field_0x2c = uVar6;
  *(uint *)&__return_storage_ptr__->field_0x30 = uVar7;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilder_U__TAdd_UFGuid___MovieScene_UE__U__TAddConditional_UFGuid___23__MovieScene_UE__6B_
  ;
  __return_storage_ptr__->field_0x38 = bVar1;
  return __return_storage_ptr__;
}

// AddConditional<UE::MovieScene::FInterrogationInstance,UE::MovieScene::FInterrogationInstance_const_&> @ 1461f0b30

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

TEntityBuilder<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>_>
* __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>_>
::
AddConditional<UE::MovieScene::FInterrogationInstance,UE::MovieScene::FInterrogationInstance_const_&>
          (TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>_>
           *this,TEntityBuilder<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>_>
                 *__return_storage_ptr__,
          TComponentTypeID<UE::MovieScene::FInterrogationInstance> param_1,
          FInterrogationInstance *param_2,bool param_3)

{
  TComponentTypeID<UE::MovieScene::FInterrogationInstance> local_28;
  bool local_26;
  FInterrogationInstance local_20;
  bool local_18;
  
  local_26 = param_3;
  local_20 = (FInterrogationInstance)param_2->Sequence;
  local_18 = true;
  local_28 = param_1;
  TEntityBuilder<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>_>
  ::
  TEntityBuilder<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>_><UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,bool_&>
            (__return_storage_ptr__,
             (TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_> *)&this->Payload,
             (TAddConditional<int> *)&(this->Payload).field_0x18,
             (TAddConditional<FEasingComponentData> *)&(this->Payload).field_0x28,
             (TAddConditional<short> *)&(this->Payload).field_0x40,
             (TAddConditional<UE::MovieScene::FInterrogationKey> *)&(this->Payload).field_0x48,
             (TAddConditional<UE::MovieScene::FInterrogationInstance> *)&local_28,
             &this->bAddMutualComponents);
  return __return_storage_ptr__;
}

// AddConditional<UE::MovieScene::FInterrogationKey,UE::MovieScene::FInterrogationKey_const_&> @ 1461f0ba0

TEntityBuilder<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>_>
* __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>_>
::AddConditional<UE::MovieScene::FInterrogationKey,UE::MovieScene::FInterrogationKey_const_&>
          (TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>_>
           *this,TEntityBuilder<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>_>
                 *__return_storage_ptr__,TComponentTypeID<UE::MovieScene::FInterrogationKey> param_1
          ,FInterrogationKey *param_2,bool param_3)

{
  bool bVar1;
  char cVar2;
  UObject *pUVar3;
  FInterrogationChannel FVar4;
  int iVar5;
  undefined4 local_18;
  
  FVar4.Value = (param_2->Channel).Value;
  iVar5 = param_2->InterrogationIndex;
  bVar1 = this->bAddMutualComponents;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02_03__U__TAddConditional_V__TSubclassOf_VUMovieSceneBlenderSystem_____MovieScene_UE__U__TAddConditional_H_34_U__TAddConditional_UFEasingComponentData___34_U__TAddConditional_F_34_U__TAddConditional_UFInterrogationKey_MovieScene_UE___34__MovieScene_UE__6B_
  ;
  *(undefined4 *)&__return_storage_ptr__->field_0x8 = *(undefined4 *)&this->Payload;
  __return_storage_ptr__->field_0x18 = 0;
  cVar2 = (this->Payload).field_0x10;
  local_18 = CONCAT22(CONCAT11(local_18._3_1_,param_3),param_1);
  __return_storage_ptr__->field_0x18 = cVar2;
  if (cVar2 != '\0') {
    pUVar3 = *(UObject **)&(this->Payload).field_0x8;
    *(UObject **)&__return_storage_ptr__->field_0x10 = pUVar3;
    if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar3);
    }
  }
  *(undefined4 *)&__return_storage_ptr__->field_0x20 = *(undefined4 *)&(this->Payload).field_0x18;
  __return_storage_ptr__->field_0x28 = 0;
  cVar2 = (this->Payload).field_0x20;
  __return_storage_ptr__->field_0x28 = cVar2;
  if (cVar2 != '\0') {
    *(undefined4 *)&__return_storage_ptr__->field_0x24 = *(undefined4 *)&(this->Payload).field_0x1c;
  }
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = *(undefined4 *)&(this->Payload).field_0x28;
  __return_storage_ptr__->field_0x40 = 0;
  cVar2 = (this->Payload).field_0x38;
  __return_storage_ptr__->field_0x40 = cVar2;
  if (cVar2 != '\0') {
    pUVar3 = *(UObject **)&(this->Payload).field_0x30;
    *(UObject **)&__return_storage_ptr__->field_0x38 = pUVar3;
    if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar3);
    }
  }
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = *(undefined4 *)&(this->Payload).field_0x40;
  __return_storage_ptr__->field_0x4e = 0;
  cVar2 = (this->Payload).field_0x46;
  __return_storage_ptr__->field_0x4e = cVar2;
  if (cVar2 != '\0') {
    *(undefined2 *)&__return_storage_ptr__->field_0x4c = *(undefined2 *)&(this->Payload).field_0x44;
  }
  *(undefined4 *)&__return_storage_ptr__->field_0x50 = local_18;
  __return_storage_ptr__->field_0x5c = 1;
  *(int *)&__return_storage_ptr__->field_0x54 = FVar4.Value;
  *(int *)&__return_storage_ptr__->field_0x58 = iVar5;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilder_U__TAddConditional_V__TSubclassOf_VUMovieSceneBlenderSystem_____MovieScene_UE__U__TAddConditional_H_23_U__TAddConditional_UFEasingComponentData___23_U__TAddConditional_F_23_U__TAddConditional_UFInterrogationKey_MovieScene_UE___23__MovieScene_UE__6B_
  ;
  __return_storage_ptr__->field_0x60 = bVar1;
  return __return_storage_ptr__;
}

// AddConditional<UE::MovieScene::FMovieSceneBindingLifetimeComponentData,UE::MovieScene::FMovieSceneBindingLifetimeComponentData> @ 1461f0cb0

TEntityBuilder<UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FMovieSceneBindingLifetimeComponentData>_>
* __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAddConditional<FGuid>_>
::
AddConditional<UE::MovieScene::FMovieSceneBindingLifetimeComponentData,UE::MovieScene::FMovieSceneBindingLifetimeComponentData>
          (TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAddConditional<FGuid>_>
           *this,TEntityBuilder<UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FMovieSceneBindingLifetimeComponentData>_>
                 *__return_storage_ptr__,
          TComponentTypeID<UE::MovieScene::FMovieSceneBindingLifetimeComponentData> param_1,
          FMovieSceneBindingLifetimeComponentData *param_2,bool param_3)

{
  EMovieSceneBindingLifetimeState EVar1;
  bool bVar2;
  char cVar3;
  undefined8 uVar4;
  undefined4 local_res8;
  
  EVar1 = param_2->BindingLifetimeState;
  bVar2 = this->bAddMutualComponents;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01__U__TAdd_UFGuid___MovieScene_UE__U__TAddConditional_UFGuid___34_U__TAddConditional_UFMovieSceneBindingLifetimeComponentData_MovieScene_UE___34__MovieScene_UE__6B_
  ;
  local_res8 = CONCAT22(CONCAT11(local_res8._3_1_,param_3),param_1);
  *(undefined2 *)&__return_storage_ptr__->field_0x8 = *(undefined2 *)&this->Payload;
  __return_storage_ptr__->field_0x1c = 0;
  cVar3 = (this->Payload).field_0x14;
  __return_storage_ptr__->field_0x1c = cVar3;
  if (cVar3 != '\0') {
    uVar4 = *(undefined8 *)&(this->Payload).field_0xc;
    *(undefined8 *)&__return_storage_ptr__->field_0xc = *(undefined8 *)&(this->Payload).field_0x4;
    *(undefined8 *)&__return_storage_ptr__->field_0x14 = uVar4;
  }
  *(undefined4 *)&__return_storage_ptr__->field_0x20 = *(undefined4 *)&(this->Payload).field_0x18;
  __return_storage_ptr__->field_0x34 = 0;
  cVar3 = (this->Payload).field_0x2c;
  __return_storage_ptr__->field_0x34 = cVar3;
  if (cVar3 != '\0') {
    uVar4 = *(undefined8 *)&(this->Payload).field_0x24;
    *(undefined8 *)&__return_storage_ptr__->field_0x24 = *(undefined8 *)&(this->Payload).field_0x1c;
    *(undefined8 *)&__return_storage_ptr__->field_0x2c = uVar4;
  }
  *(undefined4 *)&__return_storage_ptr__->field_0x38 = local_res8;
  __return_storage_ptr__->field_0x3d = 1;
  __return_storage_ptr__->field_0x3c = EVar1;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilder_U__TAdd_UFGuid___MovieScene_UE__U__TAddConditional_UFGuid___23_U__TAddConditional_UFMovieSceneBindingLifetimeComponentData_MovieScene_UE___23__MovieScene_UE__6B_
  ;
  __return_storage_ptr__->field_0x40 = bVar2;
  return __return_storage_ptr__;
}

// AddConditional<TSubclassOf<UMovieSceneBlenderSystem>,TSubclassOf<UMovieSceneBlenderSystem>_&> @ 1461f0d40

TEntityBuilder<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>_> *
__thiscall
UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int>_>::
AddConditional<TSubclassOf<UMovieSceneBlenderSystem>,TSubclassOf<UMovieSceneBlenderSystem>_&>
          (TEntityBuilderImpl<TIntegerSequence<int>_> *this,
          TEntityBuilder<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>_>
          *__return_storage_ptr__,TComponentTypeID<TSubclassOf<UMovieSceneBlenderSystem>_> param_1,
          TSubclassOf<UMovieSceneBlenderSystem> *param_2,bool param_3)

{
  UClass *pUVar1;
  undefined4 local_28;
  
  pUVar1 = (param_2->Class).field0_0x0.DebugPtr;
  local_28 = CONCAT22(CONCAT11(local_28._3_1_,param_3),param_1);
  if ((GC::GIsIncrementalReachabilityPending) && (pUVar1 != (UClass *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar1);
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A___U__TAddConditional_V__TSubclassOf_VUMovieSceneBlenderSystem_____MovieScene_UE___MovieScene_UE__6B_
  ;
  *(undefined4 *)&__return_storage_ptr__->field_0x8 = local_28;
  __return_storage_ptr__->field_0x18 = 1;
  *(UClass **)&__return_storage_ptr__->field_0x10 = pUVar1;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar1);
  }
  __return_storage_ptr__->field_0x20 = 0;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilder_U__TAddConditional_V__TSubclassOf_VUMovieSceneBlenderSystem_____MovieScene_UE___MovieScene_UE__6B_
  ;
  return __return_storage_ptr__;
}

// AddMutualComponents @ 1462055e0

TEntityBuilder<UE::MovieScene::TAdd<FMovieSceneEvaluationHookComponent>_> * __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAdd<FMovieSceneEvaluationHookComponent>_>
::AddMutualComponents
          (TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAdd<FMovieSceneEvaluationHookComponent>_>
           *this,TEntityBuilder<UE::MovieScene::TAdd<FMovieSceneEvaluationHookComponent>_>
                 *__return_storage_ptr__)

{
  char cVar1;
  UObject *pUVar2;
  undefined8 uVar3;
  
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A___U__TAdd_UFMovieSceneEvaluationHookComponent___MovieScene_UE___MovieScene_UE__6B_
  ;
  *(undefined2 *)&__return_storage_ptr__->field_0x8 = *(undefined2 *)&this->Payload;
  __return_storage_ptr__->field_0x30 = 0;
  cVar1 = (this->Payload).field_0x28;
  __return_storage_ptr__->field_0x30 = cVar1;
  if (cVar1 != '\0') {
    pUVar2 = *(UObject **)&(this->Payload).field_0x8;
    *(UObject **)&__return_storage_ptr__->field_0x10 = pUVar2;
    if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar2);
    }
    *(undefined8 *)&__return_storage_ptr__->field_0x18 = *(undefined8 *)&(this->Payload).field_0x10;
    uVar3 = *(undefined8 *)&(this->Payload).field_0x20;
    *(undefined8 *)&__return_storage_ptr__->field_0x20 = *(undefined8 *)&(this->Payload).field_0x18;
    *(undefined8 *)&__return_storage_ptr__->field_0x28 = uVar3;
  }
  __return_storage_ptr__->field_0x38 = 1;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilder_U__TAdd_UFMovieSceneEvaluationHookComponent___MovieScene_UE___MovieScene_UE__6B_
  ;
  return __return_storage_ptr__;
}

// AddTagConditional @ 146206710

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

TEntityBuilder<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
* __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11,12>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
::AddTagConditional(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11,12>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
                    *this,TEntityBuilder<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
                          *__return_storage_ptr__,FComponentTypeID param_1,bool param_2)

{
  FAddConditional local_res18 [2];
  undefined1 local_res20;
  
  local_res20 = this->bAddMutualComponents;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02_03_04_05_06_07_08_09_0L__0M__0N___U__TAddConditional_V__TSubclassOf_VUMovieSceneBlenderSystem_____MovieScene_UE__U__TAddConditional_H_34_U__TAddConditional_UFEasingComponentData___34_U__TAddConditional_F_34_U__TAddConditional_UFInterrogationKey_MovieScene_UE___34_U__TAddConditional_UFInterrogationInstance_MovieScene_UE___34_U__TAddConditional_UFFrameTime___34_UFAddConditional_34_UFAddConditional_34_UFAddConditional_34_UFAddConditional_34_UFAddConditional_34_UFAddConditional_34_UFAddConditional_34__MovieScene_UE__6B_
  ;
  local_res18[0].ComponentTypeID.Value = param_1.Value;
  local_res18[0].bCondition = param_2;
  Core::Private::Tuple::
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11,12,13>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
  ::
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11,12,13>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional><UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
            ((TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11,12,13>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
              *)&__return_storage_ptr__->field_0x8,ForwardingConstructor,
             (TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_> *)&this->Payload,
             (TAddConditional<int> *)&(this->Payload).field_0x18,
             (TAddConditional<FEasingComponentData> *)&(this->Payload).field_0x28,
             (TAddConditional<short> *)&(this->Payload).field_0x40,
             (TAddConditional<UE::MovieScene::FInterrogationKey> *)&(this->Payload).field_0x48,
             (TAddConditional<UE::MovieScene::FInterrogationInstance> *)&(this->Payload).field_0x58,
             (TAddConditional<FFrameTime> *)&(this->Payload).field_0x70,
             (FAddConditional *)&(this->Payload).field_0x80,
             (FAddConditional *)&(this->Payload).field_0x84,
             (FAddConditional *)&(this->Payload).field_0x88,
             (FAddConditional *)&(this->Payload).field_0x8c,
             (FAddConditional *)&(this->Payload).field_0x90,
             (FAddConditional *)&(this->Payload).field_0x94,local_res18);
  __return_storage_ptr__->field_0xa8 = local_res20;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilder_U__TAddConditional_V__TSubclassOf_VUMovieSceneBlenderSystem_____MovieScene_UE__U__TAddConditional_H_23_U__TAddConditional_UFEasingComponentData___23_U__TAddConditional_F_23_U__TAddConditional_UFInterrogationKey_MovieScene_UE___23_U__TAddConditional_UFInterrogationInstance_MovieScene_UE___23_U__TAddConditional_UFFrameTime___23_UFAddConditional_23_UFAddConditional_23_UFAddConditional_23_UFAddConditional_23_UFAddConditional_23_UFAddConditional_23_UFAddConditional_23__MovieScene_UE__6B_
  ;
  return __return_storage_ptr__;
}

// AddTagConditional @ 146206840

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

TEntityBuilder<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
* __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
::AddTagConditional(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
                    *this,TEntityBuilder<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
                          *__return_storage_ptr__,FComponentTypeID param_1,bool param_2)

{
  FAddConditional local_res18 [2];
  undefined1 local_res20;
  
  local_res20 = this->bAddMutualComponents;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02_03_04_05_06_07_08_09_0L__0M___U__TAddConditional_V__TSubclassOf_VUMovieSceneBlenderSystem_____MovieScene_UE__U__TAddConditional_H_34_U__TAddConditional_UFEasingComponentData___34_U__TAddConditional_F_34_U__TAddConditional_UFInterrogationKey_MovieScene_UE___34_U__TAddConditional_UFInterrogationInstance_MovieScene_UE___34_U__TAddConditional_UFFrameTime___34_UFAddConditional_34_UFAddConditional_34_UFAddConditional_34_UFAddConditional_34_UFAddConditional_34_UFAddConditional_34__MovieScene_UE__6B_
  ;
  local_res18[0].ComponentTypeID.Value = param_1.Value;
  local_res18[0].bCondition = param_2;
  Core::Private::Tuple::
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11,12>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
  ::
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11,12>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional><UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
            ((TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11,12>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
              *)&__return_storage_ptr__->field_0x8,ForwardingConstructor,
             (TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_> *)&this->Payload,
             (TAddConditional<int> *)&(this->Payload).field_0x18,
             (TAddConditional<FEasingComponentData> *)&(this->Payload).field_0x28,
             (TAddConditional<short> *)&(this->Payload).field_0x40,
             (TAddConditional<UE::MovieScene::FInterrogationKey> *)&(this->Payload).field_0x48,
             (TAddConditional<UE::MovieScene::FInterrogationInstance> *)&(this->Payload).field_0x58,
             (TAddConditional<FFrameTime> *)&(this->Payload).field_0x70,
             (FAddConditional *)&(this->Payload).field_0x80,
             (FAddConditional *)&(this->Payload).field_0x84,
             (FAddConditional *)&(this->Payload).field_0x88,
             (FAddConditional *)&(this->Payload).field_0x8c,
             (FAddConditional *)&(this->Payload).field_0x90,local_res18);
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilder_U__TAddConditional_V__TSubclassOf_VUMovieSceneBlenderSystem_____MovieScene_UE__U__TAddConditional_H_23_U__TAddConditional_UFEasingComponentData___23_U__TAddConditional_F_23_U__TAddConditional_UFInterrogationKey_MovieScene_UE___23_U__TAddConditional_UFInterrogationInstance_MovieScene_UE___23_U__TAddConditional_UFFrameTime___23_UFAddConditional_23_UFAddConditional_23_UFAddConditional_23_UFAddConditional_23_UFAddConditional_23_UFAddConditional_23__MovieScene_UE__6B_
  ;
  __return_storage_ptr__->field_0xa0 = local_res20;
  return __return_storage_ptr__;
}

// AddTagConditional @ 146206950

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

TEntityBuilder<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
* __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
::AddTagConditional(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
                    *this,TEntityBuilder<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
                          *__return_storage_ptr__,FComponentTypeID param_1,bool param_2)

{
  bool bVar1;
  FAddConditional local_res20 [2];
  
  bVar1 = this->bAddMutualComponents;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02_03_04_05_06_07_08_09_0L___U__TAddConditional_V__TSubclassOf_VUMovieSceneBlenderSystem_____MovieScene_UE__U__TAddConditional_H_34_U__TAddConditional_UFEasingComponentData___34_U__TAddConditional_F_34_U__TAddConditional_UFInterrogationKey_MovieScene_UE___34_U__TAddConditional_UFInterrogationInstance_MovieScene_UE___34_U__TAddConditional_UFFrameTime___34_UFAddConditional_34_UFAddConditional_34_UFAddConditional_34_UFAddConditional_34_UFAddConditional_34__MovieScene_UE__6B_
  ;
  local_res20[0].ComponentTypeID.Value = param_1.Value;
  local_res20[0].bCondition = param_2;
  Core::Private::Tuple::
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
  ::
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional><UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
            ((TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
              *)&__return_storage_ptr__->field_0x8,ForwardingConstructor,
             (TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_> *)&this->Payload,
             (TAddConditional<int> *)&(this->Payload).field_0x18,
             (TAddConditional<FEasingComponentData> *)&(this->Payload).field_0x28,
             (TAddConditional<short> *)&(this->Payload).field_0x40,
             (TAddConditional<UE::MovieScene::FInterrogationKey> *)&(this->Payload).field_0x48,
             (TAddConditional<UE::MovieScene::FInterrogationInstance> *)&(this->Payload).field_0x58,
             (TAddConditional<FFrameTime> *)&(this->Payload).field_0x70,
             (FAddConditional *)&(this->Payload).field_0x80,
             (FAddConditional *)&(this->Payload).field_0x84,
             (FAddConditional *)&(this->Payload).field_0x88,
             (FAddConditional *)&(this->Payload).field_0x8c,local_res20);
  __return_storage_ptr__->field_0xa0 = bVar1;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilder_U__TAddConditional_V__TSubclassOf_VUMovieSceneBlenderSystem_____MovieScene_UE__U__TAddConditional_H_23_U__TAddConditional_UFEasingComponentData___23_U__TAddConditional_F_23_U__TAddConditional_UFInterrogationKey_MovieScene_UE___23_U__TAddConditional_UFInterrogationInstance_MovieScene_UE___23_U__TAddConditional_UFFrameTime___23_UFAddConditional_23_UFAddConditional_23_UFAddConditional_23_UFAddConditional_23_UFAddConditional_23__MovieScene_UE__6B_
  ;
  return __return_storage_ptr__;
}

// AddTagConditional @ 146206a50

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

TEntityBuilder<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
* __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
::AddTagConditional(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
                    *this,TEntityBuilder<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
                          *__return_storage_ptr__,FComponentTypeID param_1,bool param_2)

{
  bool bVar1;
  FAddConditional local_res20 [2];
  
  bVar1 = this->bAddMutualComponents;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02_03_04_05_06_07_08_09__U__TAddConditional_V__TSubclassOf_VUMovieSceneBlenderSystem_____MovieScene_UE__U__TAddConditional_H_34_U__TAddConditional_UFEasingComponentData___34_U__TAddConditional_F_34_U__TAddConditional_UFInterrogationKey_MovieScene_UE___34_U__TAddConditional_UFInterrogationInstance_MovieScene_UE___34_U__TAddConditional_UFFrameTime___34_UFAddConditional_34_UFAddConditional_34_UFAddConditional_34_UFAddConditional_34__MovieScene_UE__6B_
  ;
  local_res20[0].ComponentTypeID.Value = param_1.Value;
  local_res20[0].bCondition = param_2;
  Core::Private::Tuple::
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
  ::
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional><UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
            ((TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
              *)&__return_storage_ptr__->field_0x8,ForwardingConstructor,
             (TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_> *)&this->Payload,
             (TAddConditional<int> *)&(this->Payload).field_0x18,
             (TAddConditional<FEasingComponentData> *)&(this->Payload).field_0x28,
             (TAddConditional<short> *)&(this->Payload).field_0x40,
             (TAddConditional<UE::MovieScene::FInterrogationKey> *)&(this->Payload).field_0x48,
             (TAddConditional<UE::MovieScene::FInterrogationInstance> *)&(this->Payload).field_0x58,
             (TAddConditional<FFrameTime> *)&(this->Payload).field_0x70,
             (FAddConditional *)&(this->Payload).field_0x80,
             (FAddConditional *)&(this->Payload).field_0x84,
             (FAddConditional *)&(this->Payload).field_0x88,local_res20);
  __return_storage_ptr__->field_0x98 = bVar1;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilder_U__TAddConditional_V__TSubclassOf_VUMovieSceneBlenderSystem_____MovieScene_UE__U__TAddConditional_H_23_U__TAddConditional_UFEasingComponentData___23_U__TAddConditional_F_23_U__TAddConditional_UFInterrogationKey_MovieScene_UE___23_U__TAddConditional_UFInterrogationInstance_MovieScene_UE___23_U__TAddConditional_UFFrameTime___23_UFAddConditional_23_UFAddConditional_23_UFAddConditional_23_UFAddConditional_23__MovieScene_UE__6B_
  ;
  return __return_storage_ptr__;
}

// AddTagConditional @ 146206b30

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

TEntityBuilder<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
* __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
::AddTagConditional(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
                    *this,TEntityBuilder<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
                          *__return_storage_ptr__,FComponentTypeID param_1,bool param_2)

{
  bool bVar1;
  FAddConditional local_res20 [2];
  
  bVar1 = this->bAddMutualComponents;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02_03_04_05_06_07_08__U__TAddConditional_V__TSubclassOf_VUMovieSceneBlenderSystem_____MovieScene_UE__U__TAddConditional_H_34_U__TAddConditional_UFEasingComponentData___34_U__TAddConditional_F_34_U__TAddConditional_UFInterrogationKey_MovieScene_UE___34_U__TAddConditional_UFInterrogationInstance_MovieScene_UE___34_U__TAddConditional_UFFrameTime___34_UFAddConditional_34_UFAddConditional_34_UFAddConditional_34__MovieScene_UE__6B_
  ;
  local_res20[0].ComponentTypeID.Value = param_1.Value;
  local_res20[0].bCondition = param_2;
  Core::Private::Tuple::
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
  ::
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional><UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
            ((TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
              *)&__return_storage_ptr__->field_0x8,ForwardingConstructor,
             (TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_> *)&this->Payload,
             (TAddConditional<int> *)&(this->Payload).field_0x18,
             (TAddConditional<FEasingComponentData> *)&(this->Payload).field_0x28,
             (TAddConditional<short> *)&(this->Payload).field_0x40,
             (TAddConditional<UE::MovieScene::FInterrogationKey> *)&(this->Payload).field_0x48,
             (TAddConditional<UE::MovieScene::FInterrogationInstance> *)&(this->Payload).field_0x58,
             (TAddConditional<FFrameTime> *)&(this->Payload).field_0x70,
             (FAddConditional *)&(this->Payload).field_0x80,
             (FAddConditional *)&(this->Payload).field_0x84,local_res20);
  __return_storage_ptr__->field_0x98 = bVar1;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilder_U__TAddConditional_V__TSubclassOf_VUMovieSceneBlenderSystem_____MovieScene_UE__U__TAddConditional_H_23_U__TAddConditional_UFEasingComponentData___23_U__TAddConditional_F_23_U__TAddConditional_UFInterrogationKey_MovieScene_UE___23_U__TAddConditional_UFInterrogationInstance_MovieScene_UE___23_U__TAddConditional_UFFrameTime___23_UFAddConditional_23_UFAddConditional_23_UFAddConditional_23__MovieScene_UE__6B_
  ;
  return __return_storage_ptr__;
}

// AddTagConditional @ 146206c00

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

TEntityBuilder<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
* __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional>
::AddTagConditional(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional>
                    *this,TEntityBuilder<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
                          *__return_storage_ptr__,FComponentTypeID param_1,bool param_2)

{
  bool bVar1;
  FAddConditional local_res20 [2];
  
  bVar1 = this->bAddMutualComponents;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02_03_04_05_06_07__U__TAddConditional_V__TSubclassOf_VUMovieSceneBlenderSystem_____MovieScene_UE__U__TAddConditional_H_34_U__TAddConditional_UFEasingComponentData___34_U__TAddConditional_F_34_U__TAddConditional_UFInterrogationKey_MovieScene_UE___34_U__TAddConditional_UFInterrogationInstance_MovieScene_UE___34_U__TAddConditional_UFFrameTime___34_UFAddConditional_34_UFAddConditional_34__MovieScene_UE__6B_
  ;
  local_res20[0].ComponentTypeID.Value = param_1.Value;
  local_res20[0].bCondition = param_2;
  Core::Private::Tuple::
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
  ::
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional><UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
            ((TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
              *)&__return_storage_ptr__->field_0x8,ForwardingConstructor,
             (TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_> *)&this->Payload,
             (TAddConditional<int> *)&(this->Payload).field_0x18,
             (TAddConditional<FEasingComponentData> *)&(this->Payload).field_0x28,
             (TAddConditional<short> *)&(this->Payload).field_0x40,
             (TAddConditional<UE::MovieScene::FInterrogationKey> *)&(this->Payload).field_0x48,
             (TAddConditional<UE::MovieScene::FInterrogationInstance> *)&(this->Payload).field_0x58,
             (TAddConditional<FFrameTime> *)&(this->Payload).field_0x70,
             (FAddConditional *)&(this->Payload).field_0x80,local_res20);
  __return_storage_ptr__->field_0x90 = bVar1;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilder_U__TAddConditional_V__TSubclassOf_VUMovieSceneBlenderSystem_____MovieScene_UE__U__TAddConditional_H_23_U__TAddConditional_UFEasingComponentData___23_U__TAddConditional_F_23_U__TAddConditional_UFInterrogationKey_MovieScene_UE___23_U__TAddConditional_UFInterrogationInstance_MovieScene_UE___23_U__TAddConditional_UFFrameTime___23_UFAddConditional_23_UFAddConditional_23__MovieScene_UE__6B_
  ;
  return __return_storage_ptr__;
}

// AddTagConditional @ 146206cc0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

TEntityBuilder<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional>
* __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>_>
::AddTagConditional(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>_>
                    *this,TEntityBuilder<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional>
                          *__return_storage_ptr__,FComponentTypeID param_1,bool param_2)

{
  bool bVar1;
  FAddConditional local_res20 [2];
  
  bVar1 = this->bAddMutualComponents;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02_03_04_05_06__U__TAddConditional_V__TSubclassOf_VUMovieSceneBlenderSystem_____MovieScene_UE__U__TAddConditional_H_34_U__TAddConditional_UFEasingComponentData___34_U__TAddConditional_F_34_U__TAddConditional_UFInterrogationKey_MovieScene_UE___34_U__TAddConditional_UFInterrogationInstance_MovieScene_UE___34_U__TAddConditional_UFFrameTime___34_UFAddConditional_34__MovieScene_UE__6B_
  ;
  local_res20[0].ComponentTypeID.Value = param_1.Value;
  local_res20[0].bCondition = param_2;
  Core::Private::Tuple::
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional>
  ::
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional><UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional>
            ((TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional>
              *)&__return_storage_ptr__->field_0x8,ForwardingConstructor,
             (TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_> *)&this->Payload,
             (TAddConditional<int> *)&(this->Payload).field_0x18,
             (TAddConditional<FEasingComponentData> *)&(this->Payload).field_0x28,
             (TAddConditional<short> *)&(this->Payload).field_0x40,
             (TAddConditional<UE::MovieScene::FInterrogationKey> *)&(this->Payload).field_0x48,
             (TAddConditional<UE::MovieScene::FInterrogationInstance> *)&(this->Payload).field_0x58,
             (TAddConditional<FFrameTime> *)&(this->Payload).field_0x70,local_res20);
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilder_U__TAddConditional_V__TSubclassOf_VUMovieSceneBlenderSystem_____MovieScene_UE__U__TAddConditional_H_23_U__TAddConditional_UFEasingComponentData___23_U__TAddConditional_F_23_U__TAddConditional_UFInterrogationKey_MovieScene_UE___23_U__TAddConditional_UFInterrogationInstance_MovieScene_UE___23_U__TAddConditional_UFFrameTime___23_UFAddConditional_23__MovieScene_UE__6B_
  ;
  __return_storage_ptr__->field_0x90 = bVar1;
  return __return_storage_ptr__;
}

// Create @ 14620c710

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneEntityID __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11,12,13>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
::Create(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11,12,13>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
         *this,FEntityManager *param_1)

{
  FComponentMask *in_R8;
  
  FEntityBuilderImplBase::CreateEntity((FEntityBuilderImplBase *)this,param_1,in_R8);
  return (FMovieSceneEntityID)(ushort)param_1;
}

// Create @ 14620c750

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneEntityID __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11,12>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
::Create(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11,12>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
         *this,FEntityManager *param_1)

{
  FComponentMask *in_R8;
  
  FEntityBuilderImplBase::CreateEntity((FEntityBuilderImplBase *)this,param_1,in_R8);
  return (FMovieSceneEntityID)(ushort)param_1;
}

// Create @ 14620c790

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneEntityID __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
::Create(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
         *this,FEntityManager *param_1)

{
  FComponentMask *in_R8;
  
  FEntityBuilderImplBase::CreateEntity((FEntityBuilderImplBase *)this,param_1,in_R8);
  return (FMovieSceneEntityID)(ushort)param_1;
}

// Create @ 14620c7d0

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneEntityID __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
::Create(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
         *this,FEntityManager *param_1)

{
  FComponentMask *in_R8;
  
  FEntityBuilderImplBase::CreateEntity((FEntityBuilderImplBase *)this,param_1,in_R8);
  return (FMovieSceneEntityID)(ushort)param_1;
}

// Create @ 14620c810

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneEntityID __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
::Create(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
         *this,FEntityManager *param_1)

{
  FComponentMask *in_R8;
  
  FEntityBuilderImplBase::CreateEntity((FEntityBuilderImplBase *)this,param_1,in_R8);
  return (FMovieSceneEntityID)(ushort)param_1;
}

// Create @ 14620c850

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneEntityID __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
::Create(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
         *this,FEntityManager *param_1)

{
  FComponentMask *in_R8;
  
  FEntityBuilderImplBase::CreateEntity((FEntityBuilderImplBase *)this,param_1,in_R8);
  return (FMovieSceneEntityID)(ushort)param_1;
}

// Create @ 14620c890

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneEntityID __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional>
::Create(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional>
         *this,FEntityManager *param_1)

{
  FComponentMask *in_R8;
  
  FEntityBuilderImplBase::CreateEntity((FEntityBuilderImplBase *)this,param_1,in_R8);
  return (FMovieSceneEntityID)(ushort)param_1;
}

// Create @ 14620c8d0

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneEntityID __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>_>
::Create(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>_>
         *this,FEntityManager *param_1)

{
  FComponentMask *in_R8;
  
  FEntityBuilderImplBase::CreateEntity((FEntityBuilderImplBase *)this,param_1,in_R8);
  return (FMovieSceneEntityID)(ushort)param_1;
}

// Create @ 14620c910

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneEntityID __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>_>
::Create(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>_>
         *this,FEntityManager *param_1)

{
  FComponentMask *in_R8;
  
  FEntityBuilderImplBase::CreateEntity((FEntityBuilderImplBase *)this,param_1,in_R8);
  return (FMovieSceneEntityID)(ushort)param_1;
}

// Create @ 14620c950

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneEntityID __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>_>
::Create(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>_>
         *this,FEntityManager *param_1)

{
  FComponentMask *in_R8;
  
  FEntityBuilderImplBase::CreateEntity((FEntityBuilderImplBase *)this,param_1,in_R8);
  return (FMovieSceneEntityID)(ushort)param_1;
}

// Create @ 14620c990

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneEntityID __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>_>
::Create(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>_>
         *this,FEntityManager *param_1)

{
  FComponentMask *in_R8;
  
  FEntityBuilderImplBase::CreateEntity((FEntityBuilderImplBase *)this,param_1,in_R8);
  return (FMovieSceneEntityID)(ushort)param_1;
}

// Create @ 14620c9d0

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneEntityID __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FMovieSceneBindingLifetimeComponentData>_>
::Create(TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FMovieSceneBindingLifetimeComponentData>_>
         *this,FEntityManager *param_1)

{
  FComponentMask *in_R8;
  
  FEntityBuilderImplBase::CreateEntity((FEntityBuilderImplBase *)this,param_1,in_R8);
  return (FMovieSceneEntityID)(ushort)param_1;
}

// Create @ 14620ca10

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneEntityID __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>_>
::Create(TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>_>
         *this,FEntityManager *param_1)

{
  FComponentMask *in_R8;
  
  FEntityBuilderImplBase::CreateEntity((FEntityBuilderImplBase *)this,param_1,in_R8);
  return (FMovieSceneEntityID)(ushort)param_1;
}

// Create @ 14620ca50

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneEntityID __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAddConditional<FGuid>_>
::Create(TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAddConditional<FGuid>_>
         *this,FEntityManager *param_1)

{
  FComponentMask *in_R8;
  
  FEntityBuilderImplBase::CreateEntity((FEntityBuilderImplBase *)this,param_1,in_R8);
  return (FMovieSceneEntityID)(ushort)param_1;
}

// Create @ 14620ca90

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneEntityID __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>_>
::Create(TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>_>
         *this,FEntityManager *param_1)

{
  FComponentMask *in_R8;
  
  FEntityBuilderImplBase::CreateEntity((FEntityBuilderImplBase *)this,param_1,in_R8);
  return (FMovieSceneEntityID)(ushort)param_1;
}

// Create @ 14620cad0

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneEntityID __thiscall
UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAdd<FFrameTime>_>::
Create(TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAdd<FFrameTime>_> *this,
      FEntityManager *param_1)

{
  FComponentMask *in_R8;
  
  FEntityBuilderImplBase::CreateEntity((FEntityBuilderImplBase *)this,param_1,in_R8);
  return (FMovieSceneEntityID)(ushort)param_1;
}

// Create @ 14620cb10

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneEntityID __thiscall
UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAdd<FGuid>_>::Create
          (TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAdd<FGuid>_> *this,
          FEntityManager *param_1)

{
  FComponentMask *in_R8;
  
  FEntityBuilderImplBase::CreateEntity((FEntityBuilderImplBase *)this,param_1,in_R8);
  return (FMovieSceneEntityID)(ushort)param_1;
}

// Create @ 14620cb50

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneEntityID __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAdd<FMovieSceneEvaluationHookComponent>_>
::Create(TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAdd<FMovieSceneEvaluationHookComponent>_>
         *this,FEntityManager *param_1)

{
  FComponentMask *in_R8;
  
  FEntityBuilderImplBase::CreateEntity((FEntityBuilderImplBase *)this,param_1,in_R8);
  return (FMovieSceneEntityID)(ushort)param_1;
}

// Create @ 14620cb90

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneEntityID __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>_>
::Create(TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>_>
         *this,FEntityManager *param_1)

{
  FComponentMask *in_R8;
  
  FEntityBuilderImplBase::CreateEntity((FEntityBuilderImplBase *)this,param_1,in_R8);
  return (FMovieSceneEntityID)(ushort)param_1;
}

// GenerateType @ 1462154a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11,12,13>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
::GenerateType(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11,12,13>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
               *this,FEntityManager *param_1,FComponentMask *param_2,bool *param_3)

{
  <lambda_1> local_res8;
  
  local_res8.OutMask = param_2;
  Core::Private::Tuple::
  TVisitTupleElements_Impl<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11,12,13>_>::
  Do<_UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11,12,13>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>::GenerateType_::__l2::<lambda_1>,TTuple<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>_&>
            (&local_res8,&this->Payload);
  if (this->bAddMutualComponents != false) {
    *param_3 = true;
  }
  return;
}

// GenerateType @ 1462154e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11,12>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
::GenerateType(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11,12>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
               *this,FEntityManager *param_1,FComponentMask *param_2,bool *param_3)

{
  <lambda_1> local_res8;
  
  local_res8.OutMask = param_2;
  Core::Private::Tuple::
  TVisitTupleElements_Impl<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11,12>_>::
  Do<_UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11,12>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>::GenerateType_::__l2::<lambda_1>,TTuple<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>_&>
            (&local_res8,&this->Payload);
  if (this->bAddMutualComponents != false) {
    *param_3 = true;
  }
  return;
}

// GenerateType @ 146215520

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
::GenerateType(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
               *this,FEntityManager *param_1,FComponentMask *param_2,bool *param_3)

{
  <lambda_1> local_res8;
  
  local_res8.OutMask = param_2;
  Core::Private::Tuple::
  TVisitTupleElements_Impl<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11>_>::
  Do<_UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>::GenerateType_::__l2::<lambda_1>,TTuple<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>_&>
            (&local_res8,&this->Payload);
  if (this->bAddMutualComponents != false) {
    *param_3 = true;
  }
  return;
}

// GenerateType @ 146215560

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
::GenerateType(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
               *this,FEntityManager *param_1,FComponentMask *param_2,bool *param_3)

{
  <lambda_1> local_res8;
  
  local_res8.OutMask = param_2;
  Core::Private::Tuple::
  TVisitTupleElements_Impl<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10>_>::
  Do<_UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>::GenerateType_::__l2::<lambda_1>,TTuple<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>_&>
            (&local_res8,&this->Payload);
  if (this->bAddMutualComponents != false) {
    *param_3 = true;
  }
  return;
}

// GenerateType @ 1462155a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
::GenerateType(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
               *this,FEntityManager *param_1,FComponentMask *param_2,bool *param_3)

{
  <lambda_1> local_res8;
  
  local_res8.OutMask = param_2;
  Core::Private::Tuple::
  TVisitTupleElements_Impl<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9>_>::
  Do<_UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>::GenerateType_::__l2::<lambda_1>,TTuple<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>_&>
            (&local_res8,&this->Payload);
  if (this->bAddMutualComponents != false) {
    *param_3 = true;
  }
  return;
}

// GenerateType @ 1462155e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
::GenerateType(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
               *this,FEntityManager *param_1,FComponentMask *param_2,bool *param_3)

{
  <lambda_1> local_res8;
  
  local_res8.OutMask = param_2;
  Core::Private::Tuple::TVisitTupleElements_Impl<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8>_>
  ::
  Do<_UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>::GenerateType_::__l2::<lambda_1>,TTuple<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>_&>
            (&local_res8,&this->Payload);
  if (this->bAddMutualComponents != false) {
    *param_3 = true;
  }
  return;
}

// GenerateType @ 146215620

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional>
::GenerateType(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional>
               *this,FEntityManager *param_1,FComponentMask *param_2,bool *param_3)

{
  <lambda_1> local_res8;
  
  local_res8.OutMask = param_2;
  Core::Private::Tuple::TVisitTupleElements_Impl<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7>_>::
  Do<_UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional>::GenerateType_::__l2::<lambda_1>,TTuple<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional>_&>
            (&local_res8,&this->Payload);
  if (this->bAddMutualComponents != false) {
    *param_3 = true;
  }
  return;
}

// GenerateType @ 146215660

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>_>
::GenerateType(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>_>
               *this,FEntityManager *param_1,FComponentMask *param_2,bool *param_3)

{
  <lambda_1> local_res8;
  
  local_res8.OutMask = param_2;
  Core::Private::Tuple::TVisitTupleElements_Impl<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6>_>::
  Do<_UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>_>::GenerateType_::__l2::<lambda_1>,TTuple<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>_>_&>
            (&local_res8,&this->Payload);
  if (this->bAddMutualComponents != false) {
    *param_3 = true;
  }
  return;
}

// GenerateType @ 1462156a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>_>
::GenerateType(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>_>
               *this,FEntityManager *param_1,FComponentMask *param_2,bool *param_3)

{
  <lambda_1> local_res8;
  
  local_res8.OutMask = param_2;
  Core::Private::Tuple::TVisitTupleElements_Impl<TIntegerSequence<unsigned_int,0,1,2,3,4,5>_>::
  Do<_UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>_>::GenerateType_::__l2::<lambda_1>,TTuple<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>_>_&>
            (&local_res8,&this->Payload);
  if (this->bAddMutualComponents != false) {
    *param_3 = true;
  }
  return;
}

// GenerateType @ 1462156e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>_>
::GenerateType(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>_>
               *this,FEntityManager *param_1,FComponentMask *param_2,bool *param_3)

{
  <lambda_1> local_res8;
  
  local_res8.OutMask = param_2;
  Core::Private::Tuple::TVisitTupleElements_Impl<TIntegerSequence<unsigned_int,0,1,2,3,4>_>::
  Do<_UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>_>::GenerateType_::__l2::<lambda_1>,TTuple<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>_>_&>
            (&local_res8,&this->Payload);
  if (this->bAddMutualComponents != false) {
    *param_3 = true;
  }
  return;
}

// GenerateType @ 146215720

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>_>
::GenerateType(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>_>
               *this,FEntityManager *param_1,FComponentMask *param_2,bool *param_3)

{
  if ((this->Payload).field_0x2 != '\0') {
    FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&this->Payload);
  }
  if ((this->Payload).field_0x1a != '\0') {
    FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&(this->Payload).field_0x18);
  }
  if ((this->Payload).field_0x2a != '\0') {
    FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&(this->Payload).field_0x28);
  }
  if ((this->Payload).field_0x42 != '\0') {
    FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&(this->Payload).field_0x40);
  }
  if (this->bAddMutualComponents != false) {
    *param_3 = true;
  }
  return;
}

// GenerateType @ 1462157a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FMovieSceneBindingLifetimeComponentData>_>
::GenerateType(TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FMovieSceneBindingLifetimeComponentData>_>
               *this,FEntityManager *param_1,FComponentMask *param_2,bool *param_3)

{
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&this->Payload);
  if ((this->Payload).field_0x1a != '\0') {
    FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&(this->Payload).field_0x18);
  }
  if ((this->Payload).field_0x32 != '\0') {
    FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&(this->Payload).field_0x30);
  }
  if (this->bAddMutualComponents != false) {
    *param_3 = true;
  }
  return;
}

// GenerateType @ 146215810

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>_>
::GenerateType(TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>_>
               *this,FEntityManager *param_1,FComponentMask *param_2,bool *param_3)

{
  if ((this->Payload).field_0x2 != '\0') {
    FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&this->Payload);
  }
  if ((this->Payload).field_0x1a != '\0') {
    FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&(this->Payload).field_0x18);
  }
  if ((this->Payload).field_0x2a != '\0') {
    FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&(this->Payload).field_0x28);
  }
  if (this->bAddMutualComponents != false) {
    *param_3 = true;
  }
  return;
}

// GenerateType @ 146215880

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAddConditional<FGuid>_>
::GenerateType(TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAddConditional<FGuid>_>
               *this,FEntityManager *param_1,FComponentMask *param_2,bool *param_3)

{
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&this->Payload);
  if ((this->Payload).field_0x1a != '\0') {
    FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&(this->Payload).field_0x18);
  }
  if (this->bAddMutualComponents != false) {
    *param_3 = true;
  }
  return;
}

// GenerateType @ 1462158e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>_>
::GenerateType(TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>_>
               *this,FEntityManager *param_1,FComponentMask *param_2,bool *param_3)

{
  if ((this->Payload).field_0x2 != '\0') {
    FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&this->Payload);
  }
  if ((this->Payload).field_0x1a != '\0') {
    FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&(this->Payload).field_0x18);
  }
  if (this->bAddMutualComponents != false) {
    *param_3 = true;
  }
  return;
}

// GenerateType @ 146215940

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAdd<FFrameTime>_>::
GenerateType(TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAdd<FFrameTime>_> *this,
            FEntityManager *param_1,FComponentMask *param_2,bool *param_3)

{
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&this->Payload);
  if (this->bAddMutualComponents != false) {
    *param_3 = true;
  }
  return;
}

// GenerateType @ 146215980

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAdd<FGuid>_>::
GenerateType(TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAdd<FGuid>_> *this,
            FEntityManager *param_1,FComponentMask *param_2,bool *param_3)

{
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&this->Payload);
  if (this->bAddMutualComponents != false) {
    *param_3 = true;
  }
  return;
}

// GenerateType @ 1462159c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAdd<FMovieSceneEvaluationHookComponent>_>
::GenerateType(TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAdd<FMovieSceneEvaluationHookComponent>_>
               *this,FEntityManager *param_1,FComponentMask *param_2,bool *param_3)

{
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&this->Payload);
  if (this->bAddMutualComponents != false) {
    *param_3 = true;
  }
  return;
}

// GenerateType @ 146215a00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>_>
::GenerateType(TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>_>
               *this,FEntityManager *param_1,FComponentMask *param_2,bool *param_3)

{
  if ((this->Payload).field_0x2 != '\0') {
    FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&this->Payload);
  }
  if (this->bAddMutualComponents != false) {
    *param_3 = true;
  }
  return;
}

// Initialize @ 14621f320

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11,12,13>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
::Initialize(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11,12,13>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
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
    TVisitTupleElements_Impl<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11,12,13>_>::
    Do<_UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11,12,13>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>::Initialize_::__l5::<lambda_1>,TTuple<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>_&>
              (&local_28,&this->Payload);
  }
  return;
}

// Initialize @ 14621f360

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11,12>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
::Initialize(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11,12>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
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
    TVisitTupleElements_Impl<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11,12>_>::
    Do<_UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11,12>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>::Initialize_::__l5::<lambda_1>,TTuple<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>_&>
              (&local_28,&this->Payload);
  }
  return;
}

// Initialize @ 14621f3a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
::Initialize(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
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
    TVisitTupleElements_Impl<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11>_>::
    Do<_UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>::Initialize_::__l5::<lambda_1>,TTuple<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>_&>
              (&local_28,&this->Payload);
  }
  return;
}

// Initialize @ 14621f3e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
::Initialize(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
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
    TVisitTupleElements_Impl<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10>_>::
    Do<_UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>::Initialize_::__l5::<lambda_1>,TTuple<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>_&>
              (&local_28,&this->Payload);
  }
  return;
}

// Initialize @ 14621f420

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
::Initialize(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
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
    Do<_UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>::Initialize_::__l5::<lambda_1>,TTuple<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>_&>
              (&local_28,&this->Payload);
  }
  return;
}

// Initialize @ 14621f460

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
::Initialize(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
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
    Do<_UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>::Initialize_::__l5::<lambda_1>,TTuple<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>_&>
              (&local_28,&this->Payload);
  }
  return;
}

// Initialize @ 14621f4a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional>
::Initialize(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional>
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
    Do<_UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional>::Initialize_::__l5::<lambda_1>,TTuple<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional>_&>
              (&local_28,&this->Payload);
  }
  return;
}

// Initialize @ 14621f4e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>_>
::Initialize(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>_>
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
    Do<_UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>_>::Initialize_::__l5::<lambda_1>,TTuple<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>_>_&>
              (&local_28,&this->Payload);
  }
  return;
}

// Initialize @ 14621f520

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>_>
::Initialize(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>_>
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
    Do<_UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>_>::Initialize_::__l5::<lambda_1>,TTuple<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>_>_&>
              (&local_28,&this->Payload);
  }
  return;
}

// Initialize @ 14621f560

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>_>
::Initialize(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>_>
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
    Do<_UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>_>::Initialize_::__l5::<lambda_1>,TTuple<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>_>_&>
              (&local_28,&this->Payload);
  }
  return;
}

// Initialize @ 14621f5a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>_>
::Initialize(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>_>
             *this,FEntityManager *param_1,FEntityInfo *param_2)

{
  int iVar1;
  FEntityAllocation *pFVar2;
  
  if ((param_2->Data).Allocation != (FEntityAllocation *)0x0) {
    pFVar2 = (param_2->Data).Allocation;
    iVar1 = (param_2->Data).ComponentOffset;
    TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>::Apply
              ((TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_> *)&this->Payload,pFVar2,
               iVar1);
    TAddConditional<int>::Apply((TAddConditional<int> *)&(this->Payload).field_0x18,pFVar2,iVar1);
    TAddConditional<FEasingComponentData>::Apply
              ((TAddConditional<FEasingComponentData> *)&(this->Payload).field_0x28,pFVar2,iVar1);
    TAddConditional<short>::Apply
              ((TAddConditional<short> *)&(this->Payload).field_0x40,pFVar2,iVar1);
  }
  return;
}

// Initialize @ 14621f620

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FMovieSceneBindingLifetimeComponentData>_>
::Initialize(TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FMovieSceneBindingLifetimeComponentData>_>
             *this,FEntityManager *param_1,FEntityInfo *param_2)

{
  int iVar1;
  FEntityAllocation *pFVar2;
  
  if ((param_2->Data).Allocation != (FEntityAllocation *)0x0) {
    pFVar2 = (param_2->Data).Allocation;
    iVar1 = (param_2->Data).ComponentOffset;
    TAdd<FGuid>::Apply((TAdd<FGuid> *)&this->Payload,pFVar2,iVar1);
    TAddConditional<FGuid>::Apply
              ((TAddConditional<FGuid> *)&(this->Payload).field_0x18,pFVar2,iVar1);
    TAddConditional<UE::MovieScene::FMovieSceneBindingLifetimeComponentData>::Apply
              ((TAddConditional<UE::MovieScene::FMovieSceneBindingLifetimeComponentData> *)
               &(this->Payload).field_0x30,pFVar2,iVar1);
  }
  return;
}

// Initialize @ 14621f690

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>_>
::Initialize(TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>_>
             *this,FEntityManager *param_1,FEntityInfo *param_2)

{
  int iVar1;
  FEntityAllocation *pFVar2;
  
  if ((param_2->Data).Allocation != (FEntityAllocation *)0x0) {
    pFVar2 = (param_2->Data).Allocation;
    iVar1 = (param_2->Data).ComponentOffset;
    TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>::Apply
              ((TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_> *)&this->Payload,pFVar2,
               iVar1);
    TAddConditional<int>::Apply((TAddConditional<int> *)&(this->Payload).field_0x18,pFVar2,iVar1);
    TAddConditional<FEasingComponentData>::Apply
              ((TAddConditional<FEasingComponentData> *)&(this->Payload).field_0x28,pFVar2,iVar1);
  }
  return;
}

// Initialize @ 14621f700

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAddConditional<FGuid>_>
::Initialize(TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAddConditional<FGuid>_>
             *this,FEntityManager *param_1,FEntityInfo *param_2)

{
  int iVar1;
  FEntityAllocation *pFVar2;
  
  if ((param_2->Data).Allocation != (FEntityAllocation *)0x0) {
    pFVar2 = (param_2->Data).Allocation;
    iVar1 = (param_2->Data).ComponentOffset;
    TAdd<FGuid>::Apply((TAdd<FGuid> *)&this->Payload,pFVar2,iVar1);
    TAddConditional<FGuid>::Apply
              ((TAddConditional<FGuid> *)&(this->Payload).field_0x18,pFVar2,iVar1);
  }
  return;
}

// Initialize @ 14621f770

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>_>
::Initialize(TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>_>
             *this,FEntityManager *param_1,FEntityInfo *param_2)

{
  int iVar1;
  FEntityAllocation *pFVar2;
  
  if ((param_2->Data).Allocation != (FEntityAllocation *)0x0) {
    pFVar2 = (param_2->Data).Allocation;
    iVar1 = (param_2->Data).ComponentOffset;
    TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>::Apply
              ((TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_> *)&this->Payload,pFVar2,
               iVar1);
    TAddConditional<int>::Apply((TAddConditional<int> *)&(this->Payload).field_0x18,pFVar2,iVar1);
  }
  return;
}

// Initialize @ 14621f7e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAdd<FFrameTime>_>::
Initialize(TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAdd<FFrameTime>_> *this,
          FEntityManager *param_1,FEntityInfo *param_2)

{
  FEntityAllocation *local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  if ((param_2->Data).Allocation != (FEntityAllocation *)0x0) {
    local_28 = (param_2->Data).Allocation;
    uStack_20 = *(undefined8 *)&(param_2->Data).ComponentOffset;
    local_18 = *(undefined8 *)&param_2->EntityID;
    `UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAdd<FFrameTime>_>::
    Initialize'::__l5::<lambda_1>::operator()<UE::MovieScene::TAdd<FFrameTime>_>
              (&local_28,(TAdd<FFrameTime> *)&this->Payload);
  }
  return;
}

// Initialize @ 14621f820

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAdd<FGuid>_>::Initialize
          (TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAdd<FGuid>_> *this,
          FEntityManager *param_1,FEntityInfo *param_2)

{
  if ((param_2->Data).Allocation != (FEntityAllocation *)0x0) {
    TAdd<FGuid>::Apply((TAdd<FGuid> *)&this->Payload,(param_2->Data).Allocation,
                       (param_2->Data).ComponentOffset);
    return;
  }
  return;
}

// Initialize @ 14621f850

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAdd<FMovieSceneEvaluationHookComponent>_>
::Initialize(TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAdd<FMovieSceneEvaluationHookComponent>_>
             *this,FEntityManager *param_1,FEntityInfo *param_2)

{
  if ((param_2->Data).Allocation != (FEntityAllocation *)0x0) {
    TAdd<FMovieSceneEvaluationHookComponent>::Apply
              ((TAdd<FMovieSceneEvaluationHookComponent> *)&this->Payload,(param_2->Data).Allocation
               ,(param_2->Data).ComponentOffset);
    return;
  }
  return;
}

// Initialize @ 14621f880

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>_>
::Initialize(TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>_>
             *this,FEntityManager *param_1,FEntityInfo *param_2)

{
  if ((param_2->Data).Allocation != (FEntityAllocation *)0x0) {
    TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>::Apply
              ((TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_> *)&this->Payload,
               (param_2->Data).Allocation,(param_2->Data).ComponentOffset);
    return;
  }
  return;
}

// Add<int,int> @ 146272f00

TEntityBuilder<UE::MovieScene::TAdd<int>_> * __thiscall
UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int>_>::Add<int,int>
          (TEntityBuilderImpl<TIntegerSequence<int>_> *this,
          TEntityBuilder<UE::MovieScene::TAdd<int>_> *__return_storage_ptr__,
          TComponentTypeID<int> param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  *(TComponentTypeID<int> *)&__return_storage_ptr__->field_0x8 = param_1;
  __return_storage_ptr__->field_0x10 = 1;
  *(int *)&__return_storage_ptr__->field_0xc = iVar1;
  *(undefined ***)__return_storage_ptr__ =
       &___7__TEntityBuilder_U__TAdd_H_MovieScene_UE___MovieScene_UE__6B_;
  __return_storage_ptr__->field_0x14 = 0;
  return __return_storage_ptr__;
}

// Add<float,float> @ 146272f30

TEntityBuilder<UE::MovieScene::TAdd<int>,UE::MovieScene::TAdd<float>_> * __thiscall
UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAdd<int>_>::
Add<float,float>(TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAdd<int>_> *this,
                TEntityBuilder<UE::MovieScene::TAdd<int>,UE::MovieScene::TAdd<float>_>
                *__return_storage_ptr__,TComponentTypeID<float> param_1,float *param_2)

{
  float fVar1;
  bool bVar2;
  char cVar3;
  
  fVar1 = *param_2;
  bVar2 = this->bAddMutualComponents;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00__U__TAdd_H_MovieScene_UE__U__TAdd_M_34__MovieScene_UE__6B_
  ;
  *(undefined2 *)&__return_storage_ptr__->field_0x8 = *(undefined2 *)&this->Payload;
  __return_storage_ptr__->field_0x10 = 0;
  cVar3 = (this->Payload).field_0x8;
  __return_storage_ptr__->field_0x10 = cVar3;
  if (cVar3 != '\0') {
    *(undefined4 *)&__return_storage_ptr__->field_0xc = *(undefined4 *)&(this->Payload).field_0x4;
  }
  *(TComponentTypeID<float> *)&__return_storage_ptr__->field_0x14 = param_1;
  __return_storage_ptr__->field_0x1c = 1;
  *(float *)&__return_storage_ptr__->field_0x18 = fVar1;
  *(undefined ***)__return_storage_ptr__ =
       &___7__TEntityBuilder_U__TAdd_H_MovieScene_UE__U__TAdd_M_23__MovieScene_UE__6B_;
  __return_storage_ptr__->field_0x20 = bVar2;
  return __return_storage_ptr__;
}

// Add<double,double> @ 146272f90

TEntityBuilder<UE::MovieScene::TAdd<int>,UE::MovieScene::TAdd<double>_> * __thiscall
UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAdd<int>_>::
Add<double,double>(TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAdd<int>_> *this,
                  TEntityBuilder<UE::MovieScene::TAdd<int>,UE::MovieScene::TAdd<double>_>
                  *__return_storage_ptr__,TComponentTypeID<double> param_1,double *param_2)

{
  double dVar1;
  bool bVar2;
  char cVar3;
  
  dVar1 = *param_2;
  bVar2 = this->bAddMutualComponents;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00__U__TAdd_H_MovieScene_UE__U__TAdd_N_34__MovieScene_UE__6B_
  ;
  *(undefined2 *)&__return_storage_ptr__->field_0x8 = *(undefined2 *)&this->Payload;
  __return_storage_ptr__->field_0x10 = 0;
  cVar3 = (this->Payload).field_0x8;
  __return_storage_ptr__->field_0x10 = cVar3;
  if (cVar3 != '\0') {
    *(undefined4 *)&__return_storage_ptr__->field_0xc = *(undefined4 *)&(this->Payload).field_0x4;
  }
  *(TComponentTypeID<double> *)&__return_storage_ptr__->field_0x18 = param_1;
  __return_storage_ptr__->field_0x28 = 1;
  *(double *)&__return_storage_ptr__->field_0x20 = dVar1;
  *(undefined ***)__return_storage_ptr__ =
       &___7__TEntityBuilder_U__TAdd_H_MovieScene_UE__U__TAdd_N_23__MovieScene_UE__6B_;
  __return_storage_ptr__->field_0x30 = bVar2;
  return __return_storage_ptr__;
}

// Add<FMovieSceneSequenceID,FMovieSceneSequenceID_&> @ 146272ff0

TEntityBuilder<UE::MovieScene::TAdd<FMovieSceneSequenceID>_> * __thiscall
UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int>_>::
Add<FMovieSceneSequenceID,FMovieSceneSequenceID_&>
          (TEntityBuilderImpl<TIntegerSequence<int>_> *this,
          TEntityBuilder<UE::MovieScene::TAdd<FMovieSceneSequenceID>_> *__return_storage_ptr__,
          TComponentTypeID<FMovieSceneSequenceID> param_1,FMovieSceneSequenceID *param_2)

{
  uint uVar1;
  
  uVar1 = param_2->Value;
  *(TComponentTypeID<FMovieSceneSequenceID> *)&__return_storage_ptr__->field_0x8 = param_1;
  __return_storage_ptr__->field_0x10 = 1;
  *(uint *)&__return_storage_ptr__->field_0xc = uVar1;
  *(undefined ***)__return_storage_ptr__ =
       &___7__TEntityBuilder_U__TAdd_UFMovieSceneSequenceID___MovieScene_UE___MovieScene_UE__6B_;
  __return_storage_ptr__->field_0x14 = 0;
  return __return_storage_ptr__;
}

// Add<FString,FString> @ 146273020

TEntityBuilder<UE::MovieScene::TAdd<int>,UE::MovieScene::TAdd<float>,UE::MovieScene::TAdd<FString>_>
* __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<int>,UE::MovieScene::TAdd<float>_>
::Add<FString,FString>
          (TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<int>,UE::MovieScene::TAdd<float>_>
           *this,TEntityBuilder<UE::MovieScene::TAdd<int>,UE::MovieScene::TAdd<float>,UE::MovieScene::TAdd<FString>_>
                 *__return_storage_ptr__,TComponentTypeID<FString> param_1,FString *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  TEntityBuilder<UE::MovieScene::TAdd<int>,UE::MovieScene::TAdd<float>,UE::MovieScene::TAdd<FString>_>
  *pTVar7;
  
  pFVar4 = (param_2->Data).AllocatorInstance.Data;
  (param_2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar2 = (param_2->Data).ArrayMax;
  iVar3 = (param_2->Data).ArrayNum;
  (param_2->Data).ArrayNum = 0;
  (param_2->Data).ArrayMax = 0;
  if (iVar2 == -1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TEntityBuilder<UE::MovieScene::TAdd<int>,UE::MovieScene::TAdd<float>,UE::MovieScene::TAdd<FString>_>
                *)(*pcVar5)();
      return pTVar7;
    }
  }
  bVar6 = this->bAddMutualComponents;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01__U__TAdd_H_MovieScene_UE__U__TAdd_M_34_U__TAdd_VFString___34__MovieScene_UE__6B_
  ;
  *(undefined2 *)&__return_storage_ptr__->field_0x8 = *(undefined2 *)&this->Payload;
  __return_storage_ptr__->field_0x10 = 0;
  cVar1 = (this->Payload).field_0x8;
  __return_storage_ptr__->field_0x10 = cVar1;
  if (cVar1 != '\0') {
    *(undefined4 *)&__return_storage_ptr__->field_0xc = *(undefined4 *)&(this->Payload).field_0x4;
  }
  *(undefined2 *)&__return_storage_ptr__->field_0x14 = *(undefined2 *)&(this->Payload).field_0xc;
  __return_storage_ptr__->field_0x1c = 0;
  cVar1 = (this->Payload).field_0x14;
  __return_storage_ptr__->field_0x1c = cVar1;
  if (cVar1 != '\0') {
    *(undefined4 *)&__return_storage_ptr__->field_0x18 = *(undefined4 *)&(this->Payload).field_0x10;
  }
  *(TComponentTypeID<FString> *)&__return_storage_ptr__->field_0x20 = param_1;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0xffffffff;
  if (iVar2 != -1) {
    *(FScriptContainerElement **)&__return_storage_ptr__->field_0x28 = pFVar4;
    *(int *)&__return_storage_ptr__->field_0x30 = iVar3;
    *(int *)&__return_storage_ptr__->field_0x34 = iVar2;
  }
  __return_storage_ptr__->field_0x38 = bVar6;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilder_U__TAdd_H_MovieScene_UE__U__TAdd_M_23_U__TAdd_VFString___23__MovieScene_UE__6B_
  ;
  return __return_storage_ptr__;
}

// Add<FString,FString> @ 146273130

TEntityBuilder<UE::MovieScene::TAdd<int>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<FString>_>
* __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<int>,UE::MovieScene::TAdd<double>_>
::Add<FString,FString>
          (TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<int>,UE::MovieScene::TAdd<double>_>
           *this,TEntityBuilder<UE::MovieScene::TAdd<int>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<FString>_>
                 *__return_storage_ptr__,TComponentTypeID<FString> param_1,FString *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  TEntityBuilder<UE::MovieScene::TAdd<int>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<FString>_>
  *pTVar7;
  
  pFVar4 = (param_2->Data).AllocatorInstance.Data;
  (param_2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar2 = (param_2->Data).ArrayMax;
  iVar3 = (param_2->Data).ArrayNum;
  (param_2->Data).ArrayNum = 0;
  (param_2->Data).ArrayMax = 0;
  if (iVar2 == -1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TEntityBuilder<UE::MovieScene::TAdd<int>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<FString>_>
                *)(*pcVar5)();
      return pTVar7;
    }
  }
  bVar6 = this->bAddMutualComponents;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01__U__TAdd_H_MovieScene_UE__U__TAdd_N_34_U__TAdd_VFString___34__MovieScene_UE__6B_
  ;
  *(undefined2 *)&__return_storage_ptr__->field_0x8 = *(undefined2 *)&this->Payload;
  __return_storage_ptr__->field_0x10 = 0;
  cVar1 = (this->Payload).field_0x8;
  __return_storage_ptr__->field_0x10 = cVar1;
  if (cVar1 != '\0') {
    *(undefined4 *)&__return_storage_ptr__->field_0xc = *(undefined4 *)&(this->Payload).field_0x4;
  }
  *(undefined2 *)&__return_storage_ptr__->field_0x18 = *(undefined2 *)&(this->Payload).field_0x10;
  __return_storage_ptr__->field_0x28 = 0;
  cVar1 = (this->Payload).field_0x20;
  __return_storage_ptr__->field_0x28 = cVar1;
  if (cVar1 != '\0') {
    *(undefined8 *)&__return_storage_ptr__->field_0x20 = *(undefined8 *)&(this->Payload).field_0x18;
  }
  *(TComponentTypeID<FString> *)&__return_storage_ptr__->field_0x30 = param_1;
  *(undefined8 *)&__return_storage_ptr__->field_0x38 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x44 = 0xffffffff;
  if (iVar2 != -1) {
    *(FScriptContainerElement **)&__return_storage_ptr__->field_0x38 = pFVar4;
    *(int *)&__return_storage_ptr__->field_0x40 = iVar3;
    *(int *)&__return_storage_ptr__->field_0x44 = iVar2;
  }
  __return_storage_ptr__->field_0x48 = bVar6;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilder_U__TAdd_H_MovieScene_UE__U__TAdd_N_23_U__TAdd_VFString___23__MovieScene_UE__6B_
  ;
  return __return_storage_ptr__;
}

// AddConditional<int,int_&> @ 14627c600

TEntityBuilder<UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<int>_> *
__thiscall
UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAddConditional<int>_>::
AddConditional<int,int_&>
          (TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAddConditional<int>_> *this,
          TEntityBuilder<UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<int>_>
          *__return_storage_ptr__,TComponentTypeID<int> param_1,int *param_2,bool param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 local_18;
  
  local_18 = CONCAT22(CONCAT11(local_18._3_1_,param_3),param_1);
  iVar3 = *param_2;
  bVar1 = this->bAddMutualComponents;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00__U__TAddConditional_H_MovieScene_UE__U234__MovieScene_UE__6B_
  ;
  *(undefined4 *)&__return_storage_ptr__->field_0x8 = *(undefined4 *)&this->Payload;
  __return_storage_ptr__->field_0x10 = 0;
  cVar2 = (this->Payload).field_0x8;
  __return_storage_ptr__->field_0x10 = cVar2;
  if (cVar2 != '\0') {
    *(undefined4 *)&__return_storage_ptr__->field_0xc = *(undefined4 *)&(this->Payload).field_0x4;
  }
  *(undefined4 *)&__return_storage_ptr__->field_0x14 = local_18;
  __return_storage_ptr__->field_0x1c = 1;
  *(int *)&__return_storage_ptr__->field_0x18 = iVar3;
  *(undefined ***)__return_storage_ptr__ =
       &___7__TEntityBuilder_U__TAddConditional_H_MovieScene_UE__U123__MovieScene_UE__6B_;
  __return_storage_ptr__->field_0x20 = bVar1;
  return __return_storage_ptr__;
}

// AddConditional<int,int_&> @ 14627c670

TEntityBuilder<UE::MovieScene::TAddConditional<int>_> * __thiscall
UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int>_>::AddConditional<int,int_&>
          (TEntityBuilderImpl<TIntegerSequence<int>_> *this,
          TEntityBuilder<UE::MovieScene::TAddConditional<int>_> *__return_storage_ptr__,
          TComponentTypeID<int> param_1,int *param_2,bool param_3)

{
  int iVar1;
  undefined4 local_18;
  
  iVar1 = *param_2;
  local_18 = CONCAT22(CONCAT11(local_18._3_1_,param_3),param_1);
  *(undefined4 *)&__return_storage_ptr__->field_0x8 = local_18;
  __return_storage_ptr__->field_0x10 = 1;
  *(int *)&__return_storage_ptr__->field_0xc = iVar1;
  *(undefined ***)__return_storage_ptr__ =
       &___7__TEntityBuilder_U__TAddConditional_H_MovieScene_UE___MovieScene_UE__6B_;
  __return_storage_ptr__->field_0x14 = 0;
  return __return_storage_ptr__;
}

// AddConditional<UE::MovieScene::FMovieSceneBindingLifetimeComponentData,UE::MovieScene::FMovieSceneBindingLifetimeComponentData> @ 14627c6b0

TEntityBuilder<UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FMovieSceneBindingLifetimeComponentData>_>
* __thiscall
UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAdd<FGuid>_>::
AddConditional<UE::MovieScene::FMovieSceneBindingLifetimeComponentData,UE::MovieScene::FMovieSceneBindingLifetimeComponentData>
          (TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAdd<FGuid>_> *this,
          TEntityBuilder<UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FMovieSceneBindingLifetimeComponentData>_>
          *__return_storage_ptr__,
          TComponentTypeID<UE::MovieScene::FMovieSceneBindingLifetimeComponentData> param_1,
          FMovieSceneBindingLifetimeComponentData *param_2,bool param_3)

{
  EMovieSceneBindingLifetimeState EVar1;
  bool bVar2;
  char cVar3;
  undefined8 uVar4;
  undefined4 local_res8;
  
  EVar1 = param_2->BindingLifetimeState;
  bVar2 = this->bAddMutualComponents;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00__U__TAdd_UFGuid___MovieScene_UE__U__TAddConditional_UFMovieSceneBindingLifetimeComponentData_MovieScene_UE___34__MovieScene_UE__6B_
  ;
  local_res8 = CONCAT22(CONCAT11(local_res8._3_1_,param_3),param_1);
  *(undefined2 *)&__return_storage_ptr__->field_0x8 = *(undefined2 *)&this->Payload;
  __return_storage_ptr__->field_0x1c = 0;
  cVar3 = (this->Payload).field_0x14;
  __return_storage_ptr__->field_0x1c = cVar3;
  if (cVar3 != '\0') {
    uVar4 = *(undefined8 *)&(this->Payload).field_0xc;
    *(undefined8 *)&__return_storage_ptr__->field_0xc = *(undefined8 *)&(this->Payload).field_0x4;
    *(undefined8 *)&__return_storage_ptr__->field_0x14 = uVar4;
  }
  *(undefined4 *)&__return_storage_ptr__->field_0x20 = local_res8;
  __return_storage_ptr__->field_0x25 = 1;
  __return_storage_ptr__->field_0x24 = EVar1;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilder_U__TAdd_UFGuid___MovieScene_UE__U__TAddConditional_UFMovieSceneBindingLifetimeComponentData_MovieScene_UE___23__MovieScene_UE__6B_
  ;
  __return_storage_ptr__->field_0x28 = bVar2;
  return __return_storage_ptr__;
}

// AddConditional<FMovieSceneSequenceID,FMovieSceneSequenceID_&> @ 14627c720

TEntityBuilder<UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>_>
* __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::FAdd>
::AddConditional<FMovieSceneSequenceID,FMovieSceneSequenceID_&>
          (TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::FAdd>
           *this,TEntityBuilder<UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>_>
                 *__return_storage_ptr__,TComponentTypeID<FMovieSceneSequenceID> param_1,
          FMovieSceneSequenceID *param_2,bool param_3)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  undefined4 local_18;
  
  uVar3 = param_2->Value;
  bVar1 = this->bAddMutualComponents;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01__U__TAdd_UFMovieSceneSequenceID___MovieScene_UE__UFAdd_34_U__TAddConditional_UFMovieSceneSequenceID___34__MovieScene_UE__6B_
  ;
  local_18 = CONCAT22(CONCAT11(local_18._3_1_,param_3),param_1);
  *(undefined2 *)&__return_storage_ptr__->field_0x8 = *(undefined2 *)&this->Payload;
  __return_storage_ptr__->field_0x10 = 0;
  cVar2 = (this->Payload).field_0x8;
  __return_storage_ptr__->field_0x10 = cVar2;
  if (cVar2 != '\0') {
    *(undefined4 *)&__return_storage_ptr__->field_0xc = *(undefined4 *)&(this->Payload).field_0x4;
  }
  *(undefined2 *)&__return_storage_ptr__->field_0x14 = *(undefined2 *)&(this->Payload).field_0xc;
  *(undefined4 *)&__return_storage_ptr__->field_0x18 = local_18;
  __return_storage_ptr__->field_0x20 = 1;
  *(uint *)&__return_storage_ptr__->field_0x1c = uVar3;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilder_U__TAdd_UFMovieSceneSequenceID___MovieScene_UE__UFAdd_23_U__TAddConditional_UFMovieSceneSequenceID___23__MovieScene_UE__6B_
  ;
  __return_storage_ptr__->field_0x24 = bVar1;
  return __return_storage_ptr__;
}

// AddConditional<UE::MovieScene::FSourceDoubleChannel,FMovieSceneDoubleChannel_const_*> @ 14627c7a0

TEntityBuilder<UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>
* __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>
::AddConditional<UE::MovieScene::FSourceDoubleChannel,FMovieSceneDoubleChannel_const_*>
          (TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>
           *this,TEntityBuilder<UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>
                 *__return_storage_ptr__,
          TComponentTypeID<UE::MovieScene::FSourceDoubleChannel> param_1,
          FMovieSceneDoubleChannel **param_2,bool param_3)

{
  bool bVar1;
  TComponentTypeID<UE::MovieScene::FSourceDoubleChannel> local_28;
  bool local_26;
  FSourceDoubleChannel local_20;
  bool local_18;
  
  bVar1 = this->bAddMutualComponents;
  local_26 = param_3;
  local_20.Source = *param_2;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02_03_04_05_06_07__U__TAdd_UFMovieSceneSequenceID___MovieScene_UE__UFAdd_34_U__TAddConditional_UFMovieSceneSequenceID___34_U__TAddConditional_UFSourceDoubleChannel_MovieScene_UE___34_U734_U734_U734_U734_U734__MovieScene_UE__6B_
  ;
  local_18 = true;
  local_28 = param_1;
  Core::Private::Tuple::
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>
  ::
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_><UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>
            ((TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>
              *)&__return_storage_ptr__->field_0x8,ForwardingConstructor,
             (TAdd<FMovieSceneSequenceID> *)&this->Payload,(FAdd *)&(this->Payload).field_0xc,
             (TAddConditional<FMovieSceneSequenceID> *)&(this->Payload).field_0x10,
             (TAddConditional<UE::MovieScene::FSourceDoubleChannel> *)&(this->Payload).field_0x20,
             (TAddConditional<UE::MovieScene::FSourceDoubleChannel> *)&(this->Payload).field_0x38,
             (TAddConditional<UE::MovieScene::FSourceDoubleChannel> *)&(this->Payload).field_0x50,
             (TAddConditional<UE::MovieScene::FSourceDoubleChannel> *)&(this->Payload).field_0x68,
             (TAddConditional<UE::MovieScene::FSourceDoubleChannel> *)&(this->Payload).field_0x80,
             (TAddConditional<UE::MovieScene::FSourceDoubleChannel> *)&local_28);
  __return_storage_ptr__->field_0xb8 = bVar1;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilder_U__TAdd_UFMovieSceneSequenceID___MovieScene_UE__UFAdd_23_U__TAddConditional_UFMovieSceneSequenceID___23_U__TAddConditional_UFSourceDoubleChannel_MovieScene_UE___23_U623_U623_U623_U623_U623__MovieScene_UE__6B_
  ;
  return __return_storage_ptr__;
}

// AddConditional<UE::MovieScene::FSourceDoubleChannel,FMovieSceneDoubleChannel_const_*> @ 14627c880

TEntityBuilder<UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>
* __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>
::AddConditional<UE::MovieScene::FSourceDoubleChannel,FMovieSceneDoubleChannel_const_*>
          (TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>
           *this,TEntityBuilder<UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>
                 *__return_storage_ptr__,
          TComponentTypeID<UE::MovieScene::FSourceDoubleChannel> param_1,
          FMovieSceneDoubleChannel **param_2,bool param_3)

{
  bool bVar1;
  char cVar2;
  FMovieSceneDoubleChannel *pFVar3;
  undefined4 local_28;
  
  local_28 = CONCAT22(CONCAT11(local_28._3_1_,param_3),param_1);
  pFVar3 = *param_2;
  bVar1 = this->bAddMutualComponents;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02_03_04_05_06__U__TAdd_UFMovieSceneSequenceID___MovieScene_UE__UFAdd_34_U__TAddConditional_UFMovieSceneSequenceID___34_U__TAddConditional_UFSourceDoubleChannel_MovieScene_UE___34_U734_U734_U734_U734__MovieScene_UE__6B_
  ;
  *(undefined2 *)&__return_storage_ptr__->field_0x8 = *(undefined2 *)&this->Payload;
  __return_storage_ptr__->field_0x10 = 0;
  cVar2 = (this->Payload).field_0x8;
  __return_storage_ptr__->field_0x10 = cVar2;
  if (cVar2 != '\0') {
    *(undefined4 *)&__return_storage_ptr__->field_0xc = *(undefined4 *)&(this->Payload).field_0x4;
  }
  *(undefined2 *)&__return_storage_ptr__->field_0x14 = *(undefined2 *)&(this->Payload).field_0xc;
  *(undefined4 *)&__return_storage_ptr__->field_0x18 = *(undefined4 *)&(this->Payload).field_0x10;
  __return_storage_ptr__->field_0x20 = 0;
  cVar2 = (this->Payload).field_0x18;
  __return_storage_ptr__->field_0x20 = cVar2;
  if (cVar2 != '\0') {
    *(undefined4 *)&__return_storage_ptr__->field_0x1c = *(undefined4 *)&(this->Payload).field_0x14;
  }
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = *(undefined4 *)&(this->Payload).field_0x20;
  __return_storage_ptr__->field_0x38 = 0;
  cVar2 = (this->Payload).field_0x30;
  __return_storage_ptr__->field_0x38 = cVar2;
  if (cVar2 != '\0') {
    *(undefined8 *)&__return_storage_ptr__->field_0x30 = *(undefined8 *)&(this->Payload).field_0x28;
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
  *(FMovieSceneDoubleChannel **)&__return_storage_ptr__->field_0x90 = pFVar3;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilder_U__TAdd_UFMovieSceneSequenceID___MovieScene_UE__UFAdd_23_U__TAddConditional_UFMovieSceneSequenceID___23_U__TAddConditional_UFSourceDoubleChannel_MovieScene_UE___23_U623_U623_U623_U623__MovieScene_UE__6B_
  ;
  __return_storage_ptr__->field_0xa0 = bVar1;
  return __return_storage_ptr__;
}

// AddConditional<UE::MovieScene::FSourceDoubleChannel,FMovieSceneDoubleChannel_const_*> @ 14627c9a0

TEntityBuilder<UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>
* __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>
::AddConditional<UE::MovieScene::FSourceDoubleChannel,FMovieSceneDoubleChannel_const_*>
          (TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>
           *this,TEntityBuilder<UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>
                 *__return_storage_ptr__,
          TComponentTypeID<UE::MovieScene::FSourceDoubleChannel> param_1,
          FMovieSceneDoubleChannel **param_2,bool param_3)

{
  bool bVar1;
  char cVar2;
  FMovieSceneDoubleChannel *pFVar3;
  undefined4 local_28;
  
  local_28 = CONCAT22(CONCAT11(local_28._3_1_,param_3),param_1);
  pFVar3 = *param_2;
  bVar1 = this->bAddMutualComponents;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02_03_04_05__U__TAdd_UFMovieSceneSequenceID___MovieScene_UE__UFAdd_34_U__TAddConditional_UFMovieSceneSequenceID___34_U__TAddConditional_UFSourceDoubleChannel_MovieScene_UE___34_U734_U734_U734__MovieScene_UE__6B_
  ;
  *(undefined2 *)&__return_storage_ptr__->field_0x8 = *(undefined2 *)&this->Payload;
  __return_storage_ptr__->field_0x10 = 0;
  cVar2 = (this->Payload).field_0x8;
  __return_storage_ptr__->field_0x10 = cVar2;
  if (cVar2 != '\0') {
    *(undefined4 *)&__return_storage_ptr__->field_0xc = *(undefined4 *)&(this->Payload).field_0x4;
  }
  *(undefined2 *)&__return_storage_ptr__->field_0x14 = *(undefined2 *)&(this->Payload).field_0xc;
  *(undefined4 *)&__return_storage_ptr__->field_0x18 = *(undefined4 *)&(this->Payload).field_0x10;
  __return_storage_ptr__->field_0x20 = 0;
  cVar2 = (this->Payload).field_0x18;
  __return_storage_ptr__->field_0x20 = cVar2;
  if (cVar2 != '\0') {
    *(undefined4 *)&__return_storage_ptr__->field_0x1c = *(undefined4 *)&(this->Payload).field_0x14;
  }
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = *(undefined4 *)&(this->Payload).field_0x20;
  __return_storage_ptr__->field_0x38 = 0;
  cVar2 = (this->Payload).field_0x30;
  __return_storage_ptr__->field_0x38 = cVar2;
  if (cVar2 != '\0') {
    *(undefined8 *)&__return_storage_ptr__->field_0x30 = *(undefined8 *)&(this->Payload).field_0x28;
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
  *(FMovieSceneDoubleChannel **)&__return_storage_ptr__->field_0x78 = pFVar3;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilder_U__TAdd_UFMovieSceneSequenceID___MovieScene_UE__UFAdd_23_U__TAddConditional_UFMovieSceneSequenceID___23_U__TAddConditional_UFSourceDoubleChannel_MovieScene_UE___23_U623_U623_U623__MovieScene_UE__6B_
  ;
  __return_storage_ptr__->field_0x88 = bVar1;
  return __return_storage_ptr__;
}

// AddConditional<UE::MovieScene::FSourceDoubleChannel,FMovieSceneDoubleChannel_const_*> @ 14627ca90

TEntityBuilder<UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>
* __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>
::AddConditional<UE::MovieScene::FSourceDoubleChannel,FMovieSceneDoubleChannel_const_*>
          (TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>
           *this,TEntityBuilder<UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>
                 *__return_storage_ptr__,
          TComponentTypeID<UE::MovieScene::FSourceDoubleChannel> param_1,
          FMovieSceneDoubleChannel **param_2,bool param_3)

{
  bool bVar1;
  char cVar2;
  FMovieSceneDoubleChannel *pFVar3;
  undefined4 local_28;
  
  local_28 = CONCAT22(CONCAT11(local_28._3_1_,param_3),param_1);
  pFVar3 = *param_2;
  bVar1 = this->bAddMutualComponents;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02_03_04__U__TAdd_UFMovieSceneSequenceID___MovieScene_UE__UFAdd_34_U__TAddConditional_UFMovieSceneSequenceID___34_U__TAddConditional_UFSourceDoubleChannel_MovieScene_UE___34_U734_U734__MovieScene_UE__6B_
  ;
  *(undefined2 *)&__return_storage_ptr__->field_0x8 = *(undefined2 *)&this->Payload;
  __return_storage_ptr__->field_0x10 = 0;
  cVar2 = (this->Payload).field_0x8;
  __return_storage_ptr__->field_0x10 = cVar2;
  if (cVar2 != '\0') {
    *(undefined4 *)&__return_storage_ptr__->field_0xc = *(undefined4 *)&(this->Payload).field_0x4;
  }
  *(undefined2 *)&__return_storage_ptr__->field_0x14 = *(undefined2 *)&(this->Payload).field_0xc;
  *(undefined4 *)&__return_storage_ptr__->field_0x18 = *(undefined4 *)&(this->Payload).field_0x10;
  __return_storage_ptr__->field_0x20 = 0;
  cVar2 = (this->Payload).field_0x18;
  __return_storage_ptr__->field_0x20 = cVar2;
  if (cVar2 != '\0') {
    *(undefined4 *)&__return_storage_ptr__->field_0x1c = *(undefined4 *)&(this->Payload).field_0x14;
  }
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = *(undefined4 *)&(this->Payload).field_0x20;
  __return_storage_ptr__->field_0x38 = 0;
  cVar2 = (this->Payload).field_0x30;
  __return_storage_ptr__->field_0x38 = cVar2;
  if (cVar2 != '\0') {
    *(undefined8 *)&__return_storage_ptr__->field_0x30 = *(undefined8 *)&(this->Payload).field_0x28;
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
  *(FMovieSceneDoubleChannel **)&__return_storage_ptr__->field_0x60 = pFVar3;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilder_U__TAdd_UFMovieSceneSequenceID___MovieScene_UE__UFAdd_23_U__TAddConditional_UFMovieSceneSequenceID___23_U__TAddConditional_UFSourceDoubleChannel_MovieScene_UE___23_U623_U623__MovieScene_UE__6B_
  ;
  __return_storage_ptr__->field_0x70 = bVar1;
  return __return_storage_ptr__;
}

// AddConditional<UE::MovieScene::FSourceDoubleChannel,FMovieSceneDoubleChannel_const_*> @ 14627cb60

TEntityBuilder<UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>
* __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>
::AddConditional<UE::MovieScene::FSourceDoubleChannel,FMovieSceneDoubleChannel_const_*>
          (TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>
           *this,TEntityBuilder<UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>
                 *__return_storage_ptr__,
          TComponentTypeID<UE::MovieScene::FSourceDoubleChannel> param_1,
          FMovieSceneDoubleChannel **param_2,bool param_3)

{
  bool bVar1;
  char cVar2;
  FMovieSceneDoubleChannel *pFVar3;
  undefined4 local_28;
  
  local_28 = CONCAT22(CONCAT11(local_28._3_1_,param_3),param_1);
  pFVar3 = *param_2;
  bVar1 = this->bAddMutualComponents;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02_03__U__TAdd_UFMovieSceneSequenceID___MovieScene_UE__UFAdd_34_U__TAddConditional_UFMovieSceneSequenceID___34_U__TAddConditional_UFSourceDoubleChannel_MovieScene_UE___34_U734__MovieScene_UE__6B_
  ;
  *(undefined2 *)&__return_storage_ptr__->field_0x8 = *(undefined2 *)&this->Payload;
  __return_storage_ptr__->field_0x10 = 0;
  cVar2 = (this->Payload).field_0x8;
  __return_storage_ptr__->field_0x10 = cVar2;
  if (cVar2 != '\0') {
    *(undefined4 *)&__return_storage_ptr__->field_0xc = *(undefined4 *)&(this->Payload).field_0x4;
  }
  *(undefined2 *)&__return_storage_ptr__->field_0x14 = *(undefined2 *)&(this->Payload).field_0xc;
  *(undefined4 *)&__return_storage_ptr__->field_0x18 = *(undefined4 *)&(this->Payload).field_0x10;
  __return_storage_ptr__->field_0x20 = 0;
  cVar2 = (this->Payload).field_0x18;
  __return_storage_ptr__->field_0x20 = cVar2;
  if (cVar2 != '\0') {
    *(undefined4 *)&__return_storage_ptr__->field_0x1c = *(undefined4 *)&(this->Payload).field_0x14;
  }
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = *(undefined4 *)&(this->Payload).field_0x20;
  __return_storage_ptr__->field_0x38 = 0;
  cVar2 = (this->Payload).field_0x30;
  __return_storage_ptr__->field_0x38 = cVar2;
  if (cVar2 != '\0') {
    *(undefined8 *)&__return_storage_ptr__->field_0x30 = *(undefined8 *)&(this->Payload).field_0x28;
  }
  *(undefined4 *)&__return_storage_ptr__->field_0x40 = local_28;
  __return_storage_ptr__->field_0x50 = 1;
  *(FMovieSceneDoubleChannel **)&__return_storage_ptr__->field_0x48 = pFVar3;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilder_U__TAdd_UFMovieSceneSequenceID___MovieScene_UE__UFAdd_23_U__TAddConditional_UFMovieSceneSequenceID___23_U__TAddConditional_UFSourceDoubleChannel_MovieScene_UE___23_U623__MovieScene_UE__6B_
  ;
  __return_storage_ptr__->field_0x58 = bVar1;
  return __return_storage_ptr__;
}

// AddConditional<UE::MovieScene::FSourceDoubleChannel,FMovieSceneDoubleChannel_const_*> @ 14627cc10

TEntityBuilder<UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>
* __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>_>
::AddConditional<UE::MovieScene::FSourceDoubleChannel,FMovieSceneDoubleChannel_const_*>
          (TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>_>
           *this,TEntityBuilder<UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>
                 *__return_storage_ptr__,
          TComponentTypeID<UE::MovieScene::FSourceDoubleChannel> param_1,
          FMovieSceneDoubleChannel **param_2,bool param_3)

{
  bool bVar1;
  char cVar2;
  FMovieSceneDoubleChannel *pFVar3;
  undefined4 local_28;
  
  local_28 = CONCAT22(CONCAT11(local_28._3_1_,param_3),param_1);
  pFVar3 = *param_2;
  bVar1 = this->bAddMutualComponents;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02__U__TAdd_UFMovieSceneSequenceID___MovieScene_UE__UFAdd_34_U__TAddConditional_UFMovieSceneSequenceID___34_U__TAddConditional_UFSourceDoubleChannel_MovieScene_UE___34__MovieScene_UE__6B_
  ;
  *(undefined2 *)&__return_storage_ptr__->field_0x8 = *(undefined2 *)&this->Payload;
  __return_storage_ptr__->field_0x10 = 0;
  cVar2 = (this->Payload).field_0x8;
  __return_storage_ptr__->field_0x10 = cVar2;
  if (cVar2 != '\0') {
    *(undefined4 *)&__return_storage_ptr__->field_0xc = *(undefined4 *)&(this->Payload).field_0x4;
  }
  *(undefined2 *)&__return_storage_ptr__->field_0x14 = *(undefined2 *)&(this->Payload).field_0xc;
  *(undefined4 *)&__return_storage_ptr__->field_0x18 = *(undefined4 *)&(this->Payload).field_0x10;
  __return_storage_ptr__->field_0x20 = 0;
  cVar2 = (this->Payload).field_0x18;
  __return_storage_ptr__->field_0x20 = cVar2;
  if (cVar2 != '\0') {
    *(undefined4 *)&__return_storage_ptr__->field_0x1c = *(undefined4 *)&(this->Payload).field_0x14;
  }
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = local_28;
  __return_storage_ptr__->field_0x38 = 1;
  *(FMovieSceneDoubleChannel **)&__return_storage_ptr__->field_0x30 = pFVar3;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilder_U__TAdd_UFMovieSceneSequenceID___MovieScene_UE__UFAdd_23_U__TAddConditional_UFMovieSceneSequenceID___23_U__TAddConditional_UFSourceDoubleChannel_MovieScene_UE___23__MovieScene_UE__6B_
  ;
  __return_storage_ptr__->field_0x40 = bVar1;
  return __return_storage_ptr__;
}

// AddConditional<FString,FString_&> @ 14627cca0

TEntityBuilder<UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FString>,UE::MovieScene::TAddConditional<FString>_>
* __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FString>_>
::AddConditional<FString,FString_&>
          (TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FString>_>
           *this,TEntityBuilder<UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FString>,UE::MovieScene::TAddConditional<FString>_>
                 *__return_storage_ptr__,TComponentTypeID<FString> param_1,FString *param_2,
          bool param_3)

{
  char cVar1;
  code *pcVar2;
  bool bVar3;
  TEntityBuilder<UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FString>,UE::MovieScene::TAddConditional<FString>_>
  *pTVar4;
  undefined4 local_28;
  FString local_20;
  
  local_28 = CONCAT22(CONCAT11(local_28._3_1_,param_3),param_1);
  ::FString::FString(&local_20,param_2);
  if ((local_20.Data.ArrayMax == -1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TEntityBuilder<UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FString>,UE::MovieScene::TAddConditional<FString>_>
              *)(*pcVar2)();
    return pTVar4;
  }
  bVar3 = this->bAddMutualComponents;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02__U__TAddConditional_H_MovieScene_UE__U234_U__TAddConditional_VFString___34_U534__MovieScene_UE__6B_
  ;
  *(undefined4 *)&__return_storage_ptr__->field_0x8 = *(undefined4 *)&this->Payload;
  __return_storage_ptr__->field_0x10 = 0;
  cVar1 = (this->Payload).field_0x8;
  __return_storage_ptr__->field_0x10 = cVar1;
  if (cVar1 != '\0') {
    *(undefined4 *)&__return_storage_ptr__->field_0xc = *(undefined4 *)&(this->Payload).field_0x4;
  }
  *(undefined4 *)&__return_storage_ptr__->field_0x14 = *(undefined4 *)&(this->Payload).field_0xc;
  __return_storage_ptr__->field_0x1c = 0;
  cVar1 = (this->Payload).field_0x14;
  __return_storage_ptr__->field_0x1c = cVar1;
  if (cVar1 != '\0') {
    *(undefined4 *)&__return_storage_ptr__->field_0x18 = *(undefined4 *)&(this->Payload).field_0x10;
  }
  *(undefined4 *)&__return_storage_ptr__->field_0x20 = *(undefined4 *)&(this->Payload).field_0x18;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0xffffffff;
  if (*(int *)&(this->Payload).field_0x2c != -1) {
    *(undefined8 *)&__return_storage_ptr__->field_0x28 = *(undefined8 *)&(this->Payload).field_0x20;
    *(undefined8 *)&(this->Payload).field_0x20 = 0;
    *(undefined4 *)&__return_storage_ptr__->field_0x30 = *(undefined4 *)&(this->Payload).field_0x28;
    *(undefined4 *)&__return_storage_ptr__->field_0x34 = *(undefined4 *)&(this->Payload).field_0x2c;
    *(undefined8 *)&(this->Payload).field_0x28 = 0;
  }
  *(undefined4 *)&__return_storage_ptr__->field_0x38 = local_28;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x4c = 0xffffffff;
  if (local_20.Data.ArrayMax != -1) {
    *(FScriptContainerElement **)&__return_storage_ptr__->field_0x40 =
         local_20.Data.AllocatorInstance.Data;
    *(int *)&__return_storage_ptr__->field_0x48 = local_20.Data.ArrayNum;
    *(int *)&__return_storage_ptr__->field_0x4c = local_20.Data.ArrayMax;
  }
  __return_storage_ptr__->field_0x50 = bVar3;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilder_U__TAddConditional_H_MovieScene_UE__U123_U__TAddConditional_VFString___23_U423__MovieScene_UE__6B_
  ;
  return __return_storage_ptr__;
}

// AddConditional<FString,FString_&> @ 14627cdd0

TEntityBuilder<UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FString>_>
* __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<int>_>
::AddConditional<FString,FString_&>
          (TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<int>_>
           *this,TEntityBuilder<UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FString>_>
                 *__return_storage_ptr__,TComponentTypeID<FString> param_1,FString *param_2,
          bool param_3)

{
  char cVar1;
  code *pcVar2;
  bool bVar3;
  TEntityBuilder<UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FString>_>
  *pTVar4;
  undefined4 local_28;
  FString local_20;
  
  local_28 = CONCAT22(CONCAT11(local_28._3_1_,param_3),param_1);
  ::FString::FString(&local_20,param_2);
  if ((local_20.Data.ArrayMax == -1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TEntityBuilder<UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FString>_>
              *)(*pcVar2)();
    return pTVar4;
  }
  bVar3 = this->bAddMutualComponents;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01__U__TAddConditional_H_MovieScene_UE__U234_U__TAddConditional_VFString___34__MovieScene_UE__6B_
  ;
  *(undefined4 *)&__return_storage_ptr__->field_0x8 = *(undefined4 *)&this->Payload;
  __return_storage_ptr__->field_0x10 = 0;
  cVar1 = (this->Payload).field_0x8;
  __return_storage_ptr__->field_0x10 = cVar1;
  if (cVar1 != '\0') {
    *(undefined4 *)&__return_storage_ptr__->field_0xc = *(undefined4 *)&(this->Payload).field_0x4;
  }
  *(undefined4 *)&__return_storage_ptr__->field_0x14 = *(undefined4 *)&(this->Payload).field_0xc;
  __return_storage_ptr__->field_0x1c = 0;
  cVar1 = (this->Payload).field_0x14;
  __return_storage_ptr__->field_0x1c = cVar1;
  if (cVar1 != '\0') {
    *(undefined4 *)&__return_storage_ptr__->field_0x18 = *(undefined4 *)&(this->Payload).field_0x10;
  }
  *(undefined4 *)&__return_storage_ptr__->field_0x20 = local_28;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0xffffffff;
  if (local_20.Data.ArrayMax != -1) {
    *(FScriptContainerElement **)&__return_storage_ptr__->field_0x28 =
         local_20.Data.AllocatorInstance.Data;
    *(int *)&__return_storage_ptr__->field_0x30 = local_20.Data.ArrayNum;
    *(int *)&__return_storage_ptr__->field_0x34 = local_20.Data.ArrayMax;
  }
  __return_storage_ptr__->field_0x38 = bVar3;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilder_U__TAddConditional_H_MovieScene_UE__U123_U__TAddConditional_VFString___23__MovieScene_UE__6B_
  ;
  return __return_storage_ptr__;
}

// AddTag @ 1462a32c0

TEntityBuilder<UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::FAdd> * __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAdd<FMovieSceneSequenceID>_>::AddTag
          (TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAdd<FMovieSceneSequenceID>_>
           *this,TEntityBuilder<UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::FAdd>
                 *__return_storage_ptr__,FComponentTypeID param_1)

{
  bool bVar1;
  char cVar2;
  
  bVar1 = this->bAddMutualComponents;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00__U__TAdd_UFMovieSceneSequenceID___MovieScene_UE__UFAdd_34__MovieScene_UE__6B_
  ;
  *(undefined2 *)&__return_storage_ptr__->field_0x8 = *(undefined2 *)&this->Payload;
  __return_storage_ptr__->field_0x10 = 0;
  cVar2 = (this->Payload).field_0x8;
  __return_storage_ptr__->field_0x10 = cVar2;
  if (cVar2 != '\0') {
    *(undefined4 *)&__return_storage_ptr__->field_0xc = *(undefined4 *)&(this->Payload).field_0x4;
  }
  *(ushort *)&__return_storage_ptr__->field_0x14 = param_1.Value;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilder_U__TAdd_UFMovieSceneSequenceID___MovieScene_UE__UFAdd_23__MovieScene_UE__6B_
  ;
  __return_storage_ptr__->field_0x18 = bVar1;
  return __return_storage_ptr__;
}

// AddTagConditional @ 1462a3310

TEntityBuilder<UE::MovieScene::TAdd<FGuid>,UE::MovieScene::FAddConditional> * __thiscall
UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAdd<FGuid>_>::
AddTagConditional(TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAdd<FGuid>_> *this,
                 TEntityBuilder<UE::MovieScene::TAdd<FGuid>,UE::MovieScene::FAddConditional>
                 *__return_storage_ptr__,FComponentTypeID param_1,bool param_2)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  undefined4 local_res20;
  
  bVar1 = this->bAddMutualComponents;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00__U__TAdd_UFGuid___MovieScene_UE__UFAddConditional_34__MovieScene_UE__6B_
  ;
  *(undefined2 *)&__return_storage_ptr__->field_0x8 = *(undefined2 *)&this->Payload;
  __return_storage_ptr__->field_0x1c = 0;
  cVar2 = (this->Payload).field_0x14;
  local_res20._0_3_ = CONCAT12(param_2,param_1.Value);
  __return_storage_ptr__->field_0x1c = cVar2;
  if (cVar2 != '\0') {
    uVar3 = *(undefined8 *)&(this->Payload).field_0xc;
    *(undefined8 *)&__return_storage_ptr__->field_0xc = *(undefined8 *)&(this->Payload).field_0x4;
    *(undefined8 *)&__return_storage_ptr__->field_0x14 = uVar3;
  }
  *(undefined4 *)&__return_storage_ptr__->field_0x20 = local_res20;
  *(undefined ***)__return_storage_ptr__ =
       &___7__TEntityBuilder_U__TAdd_UFGuid___MovieScene_UE__UFAddConditional_23__MovieScene_UE__6B_
  ;
  __return_storage_ptr__->field_0x24 = bVar1;
  return __return_storage_ptr__;
}

// Create @ 1462aabb0

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneEntityID __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>
::Create(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>
         *this,FEntityManager *param_1)

{
  FComponentMask *in_R8;
  
  FEntityBuilderImplBase::CreateEntity((FEntityBuilderImplBase *)this,param_1,in_R8);
  return (FMovieSceneEntityID)(ushort)param_1;
}

// Create @ 1462aabf0

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneEntityID __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>
::Create(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>
         *this,FEntityManager *param_1)

{
  FComponentMask *in_R8;
  
  FEntityBuilderImplBase::CreateEntity((FEntityBuilderImplBase *)this,param_1,in_R8);
  return (FMovieSceneEntityID)(ushort)param_1;
}

// Create @ 1462aac30

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneEntityID __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>
::Create(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>
         *this,FEntityManager *param_1)

{
  FComponentMask *in_R8;
  
  FEntityBuilderImplBase::CreateEntity((FEntityBuilderImplBase *)this,param_1,in_R8);
  return (FMovieSceneEntityID)(ushort)param_1;
}

// Create @ 1462aac70

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneEntityID __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>
::Create(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>
         *this,FEntityManager *param_1)

{
  FComponentMask *in_R8;
  
  FEntityBuilderImplBase::CreateEntity((FEntityBuilderImplBase *)this,param_1,in_R8);
  return (FMovieSceneEntityID)(ushort)param_1;
}

// Create @ 1462aacb0

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneEntityID __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>
::Create(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>
         *this,FEntityManager *param_1)

{
  FComponentMask *in_R8;
  
  FEntityBuilderImplBase::CreateEntity((FEntityBuilderImplBase *)this,param_1,in_R8);
  return (FMovieSceneEntityID)(ushort)param_1;
}

// Create @ 1462aacf0

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneEntityID __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>
::Create(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>
         *this,FEntityManager *param_1)

{
  FComponentMask *in_R8;
  
  FEntityBuilderImplBase::CreateEntity((FEntityBuilderImplBase *)this,param_1,in_R8);
  return (FMovieSceneEntityID)(ushort)param_1;
}

// Create @ 1462aad30

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneEntityID __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FString>,UE::MovieScene::TAddConditional<FString>_>
::Create(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FString>,UE::MovieScene::TAddConditional<FString>_>
         *this,FEntityManager *param_1)

{
  FComponentMask *in_R8;
  
  FEntityBuilderImplBase::CreateEntity((FEntityBuilderImplBase *)this,param_1,in_R8);
  return (FMovieSceneEntityID)(ushort)param_1;
}

// Create @ 1462aad70

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneEntityID __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAdd<int>,UE::MovieScene::TAdd<float>,UE::MovieScene::TAdd<FString>_>
::Create(TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAdd<int>,UE::MovieScene::TAdd<float>,UE::MovieScene::TAdd<FString>_>
         *this,FEntityManager *param_1)

{
  FComponentMask *in_R8;
  
  FEntityBuilderImplBase::CreateEntity((FEntityBuilderImplBase *)this,param_1,in_R8);
  return (FMovieSceneEntityID)(ushort)param_1;
}

// Create @ 1462aadb0

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneEntityID __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAdd<int>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<FString>_>
::Create(TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAdd<int>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<FString>_>
         *this,FEntityManager *param_1)

{
  FComponentMask *in_R8;
  
  FEntityBuilderImplBase::CreateEntity((FEntityBuilderImplBase *)this,param_1,in_R8);
  return (FMovieSceneEntityID)(ushort)param_1;
}

// Create @ 1462aadf0

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneEntityID __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>_>
::Create(TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>_>
         *this,FEntityManager *param_1)

{
  FComponentMask *in_R8;
  
  FEntityBuilderImplBase::CreateEntity((FEntityBuilderImplBase *)this,param_1,in_R8);
  return (FMovieSceneEntityID)(ushort)param_1;
}

// Create @ 1462aae30

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneEntityID __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FString>_>
::Create(TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FString>_>
         *this,FEntityManager *param_1)

{
  FComponentMask *in_R8;
  
  FEntityBuilderImplBase::CreateEntity((FEntityBuilderImplBase *)this,param_1,in_R8);
  return (FMovieSceneEntityID)(ushort)param_1;
}

// Create @ 1462aae70

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneEntityID __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<int>,UE::MovieScene::TAdd<float>_>
::Create(TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<int>,UE::MovieScene::TAdd<float>_>
         *this,FEntityManager *param_1)

{
  FComponentMask *in_R8;
  
  FEntityBuilderImplBase::CreateEntity((FEntityBuilderImplBase *)this,param_1,in_R8);
  return (FMovieSceneEntityID)(ushort)param_1;
}

// Create @ 1462aaeb0

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneEntityID __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<int>,UE::MovieScene::TAdd<double>_>
::Create(TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<int>,UE::MovieScene::TAdd<double>_>
         *this,FEntityManager *param_1)

{
  FComponentMask *in_R8;
  
  FEntityBuilderImplBase::CreateEntity((FEntityBuilderImplBase *)this,param_1,in_R8);
  return (FMovieSceneEntityID)(ushort)param_1;
}

// Create @ 1462aaef0

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneEntityID __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FMovieSceneBindingLifetimeComponentData>_>
::Create(TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FMovieSceneBindingLifetimeComponentData>_>
         *this,FEntityManager *param_1)

{
  FComponentMask *in_R8;
  
  FEntityBuilderImplBase::CreateEntity((FEntityBuilderImplBase *)this,param_1,in_R8);
  return (FMovieSceneEntityID)(ushort)param_1;
}

// Create @ 1462aaf30

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneEntityID __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::FAddConditional>
::Create(TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::FAddConditional>
         *this,FEntityManager *param_1)

{
  FComponentMask *in_R8;
  
  FEntityBuilderImplBase::CreateEntity((FEntityBuilderImplBase *)this,param_1,in_R8);
  return (FMovieSceneEntityID)(ushort)param_1;
}

// Create @ 1462aaf70

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneEntityID __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::FAdd>
::Create(TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::FAdd>
         *this,FEntityManager *param_1)

{
  FComponentMask *in_R8;
  
  FEntityBuilderImplBase::CreateEntity((FEntityBuilderImplBase *)this,param_1,in_R8);
  return (FMovieSceneEntityID)(ushort)param_1;
}

// Create @ 1462aafb0

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneEntityID __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<int>_>
::Create(TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<int>_>
         *this,FEntityManager *param_1)

{
  FComponentMask *in_R8;
  
  FEntityBuilderImplBase::CreateEntity((FEntityBuilderImplBase *)this,param_1,in_R8);
  return (FMovieSceneEntityID)(ushort)param_1;
}

// Create @ 1462aaff0

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneEntityID __thiscall
UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAdd<int>_>::Create
          (TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAdd<int>_> *this,
          FEntityManager *param_1)

{
  FComponentMask *in_R8;
  
  FEntityBuilderImplBase::CreateEntity((FEntityBuilderImplBase *)this,param_1,in_R8);
  return (FMovieSceneEntityID)(ushort)param_1;
}

// Create @ 1462ab030

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneEntityID __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAdd<FMovieSceneSequenceID>_>::Create
          (TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAdd<FMovieSceneSequenceID>_>
           *this,FEntityManager *param_1)

{
  FComponentMask *in_R8;
  
  FEntityBuilderImplBase::CreateEntity((FEntityBuilderImplBase *)this,param_1,in_R8);
  return (FMovieSceneEntityID)(ushort)param_1;
}

// Create @ 1462ab070

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneEntityID __thiscall
UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAddConditional<int>_>::
Create(TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAddConditional<int>_> *this,
      FEntityManager *param_1)

{
  FComponentMask *in_R8;
  
  FEntityBuilderImplBase::CreateEntity((FEntityBuilderImplBase *)this,param_1,in_R8);
  return (FMovieSceneEntityID)(ushort)param_1;
}

// GenerateType @ 1462add70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>
::GenerateType(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>
               *this,FEntityManager *param_1,FComponentMask *param_2,bool *param_3)

{
  <lambda_1> local_res8;
  
  local_res8.OutMask = param_2;
  Core::Private::Tuple::TVisitTupleElements_Impl<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8>_>
  ::
  Do<_UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>::GenerateType_::__l2::<lambda_1>,TTuple<UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>_&>
            (&local_res8,&this->Payload);
  if (this->bAddMutualComponents != false) {
    *param_3 = true;
  }
  return;
}

// GenerateType @ 1462addb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>
::GenerateType(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>
               *this,FEntityManager *param_1,FComponentMask *param_2,bool *param_3)

{
  <lambda_1> local_res8;
  
  local_res8.OutMask = param_2;
  Core::Private::Tuple::TVisitTupleElements_Impl<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7>_>::
  Do<_UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>::GenerateType_::__l2::<lambda_1>,TTuple<UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>_&>
            (&local_res8,&this->Payload);
  if (this->bAddMutualComponents != false) {
    *param_3 = true;
  }
  return;
}

// GenerateType @ 1462addf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>
::GenerateType(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>
               *this,FEntityManager *param_1,FComponentMask *param_2,bool *param_3)

{
  <lambda_1> local_res8;
  
  local_res8.OutMask = param_2;
  Core::Private::Tuple::TVisitTupleElements_Impl<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6>_>::
  Do<_UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>::GenerateType_::__l2::<lambda_1>,TTuple<UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>_&>
            (&local_res8,&this->Payload);
  if (this->bAddMutualComponents != false) {
    *param_3 = true;
  }
  return;
}

// GenerateType @ 1462ade30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>
::GenerateType(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>
               *this,FEntityManager *param_1,FComponentMask *param_2,bool *param_3)

{
  <lambda_1> local_res8;
  
  local_res8.OutMask = param_2;
  Core::Private::Tuple::TVisitTupleElements_Impl<TIntegerSequence<unsigned_int,0,1,2,3,4,5>_>::
  Do<_UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>::GenerateType_::__l2::<lambda_1>,TTuple<UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>_&>
            (&local_res8,&this->Payload);
  if (this->bAddMutualComponents != false) {
    *param_3 = true;
  }
  return;
}

// GenerateType @ 1462ade70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>
::GenerateType(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>
               *this,FEntityManager *param_1,FComponentMask *param_2,bool *param_3)

{
  <lambda_1> local_res8;
  
  local_res8.OutMask = param_2;
  Core::Private::Tuple::TVisitTupleElements_Impl<TIntegerSequence<unsigned_int,0,1,2,3,4>_>::
  Do<_UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>::GenerateType_::__l2::<lambda_1>,TTuple<UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>_&>
            (&local_res8,&this->Payload);
  if (this->bAddMutualComponents != false) {
    *param_3 = true;
  }
  return;
}

// GenerateType @ 1462adeb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>
::GenerateType(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>
               *this,FEntityManager *param_1,FComponentMask *param_2,bool *param_3)

{
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&this->Payload);
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&(this->Payload).field_0xc);
  if ((this->Payload).field_0x12 != '\0') {
    FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&(this->Payload).field_0x10);
  }
  if ((this->Payload).field_0x22 != '\0') {
    FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&(this->Payload).field_0x20);
  }
  if (this->bAddMutualComponents != false) {
    *param_3 = true;
  }
  return;
}

// GenerateType @ 1462adf30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FString>,UE::MovieScene::TAddConditional<FString>_>
::GenerateType(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FString>,UE::MovieScene::TAddConditional<FString>_>
               *this,FEntityManager *param_1,FComponentMask *param_2,bool *param_3)

{
  if ((this->Payload).field_0x2 != '\0') {
    FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&this->Payload);
  }
  if ((this->Payload).field_0xe != '\0') {
    FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&(this->Payload).field_0xc);
  }
  if ((this->Payload).field_0x1a != '\0') {
    FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&(this->Payload).field_0x18);
  }
  if ((this->Payload).field_0x32 != '\0') {
    FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&(this->Payload).field_0x30);
  }
  if (this->bAddMutualComponents != false) {
    *param_3 = true;
  }
  return;
}

// GenerateType @ 1462adfb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAdd<int>,UE::MovieScene::TAdd<float>,UE::MovieScene::TAdd<FString>_>
::GenerateType(TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAdd<int>,UE::MovieScene::TAdd<float>,UE::MovieScene::TAdd<FString>_>
               *this,FEntityManager *param_1,FComponentMask *param_2,bool *param_3)

{
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&this->Payload);
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&(this->Payload).field_0xc);
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&(this->Payload).field_0x18);
  if (this->bAddMutualComponents != false) {
    *param_3 = true;
  }
  return;
}

// GenerateType @ 1462ae010

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAdd<int>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<FString>_>
::GenerateType(TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAdd<int>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<FString>_>
               *this,FEntityManager *param_1,FComponentMask *param_2,bool *param_3)

{
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&this->Payload);
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&(this->Payload).field_0x10);
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&(this->Payload).field_0x28);
  if (this->bAddMutualComponents != false) {
    *param_3 = true;
  }
  return;
}

// GenerateType @ 1462ae070

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>_>
::GenerateType(TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>_>
               *this,FEntityManager *param_1,FComponentMask *param_2,bool *param_3)

{
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&this->Payload);
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&(this->Payload).field_0xc);
  if ((this->Payload).field_0x12 != '\0') {
    FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&(this->Payload).field_0x10);
  }
  if (this->bAddMutualComponents != false) {
    *param_3 = true;
  }
  return;
}

// GenerateType @ 1462ae0e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FString>_>
::GenerateType(TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FString>_>
               *this,FEntityManager *param_1,FComponentMask *param_2,bool *param_3)

{
  if ((this->Payload).field_0x2 != '\0') {
    FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&this->Payload);
  }
  if ((this->Payload).field_0xe != '\0') {
    FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&(this->Payload).field_0xc);
  }
  if ((this->Payload).field_0x1a != '\0') {
    FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&(this->Payload).field_0x18);
  }
  if (this->bAddMutualComponents != false) {
    *param_3 = true;
  }
  return;
}

// GenerateType @ 1462ae150

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<int>,UE::MovieScene::TAdd<float>_>
::GenerateType(TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<int>,UE::MovieScene::TAdd<float>_>
               *this,FEntityManager *param_1,FComponentMask *param_2,bool *param_3)

{
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&this->Payload);
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&(this->Payload).field_0xc);
  if (this->bAddMutualComponents != false) {
    *param_3 = true;
  }
  return;
}

// GenerateType @ 1462ae1a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<int>,UE::MovieScene::TAdd<double>_>
::GenerateType(TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<int>,UE::MovieScene::TAdd<double>_>
               *this,FEntityManager *param_1,FComponentMask *param_2,bool *param_3)

{
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&this->Payload);
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&(this->Payload).field_0x10);
  if (this->bAddMutualComponents != false) {
    *param_3 = true;
  }
  return;
}

// GenerateType @ 1462ae1f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FMovieSceneBindingLifetimeComponentData>_>
::GenerateType(TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FMovieSceneBindingLifetimeComponentData>_>
               *this,FEntityManager *param_1,FComponentMask *param_2,bool *param_3)

{
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&this->Payload);
  if ((this->Payload).field_0x1a != '\0') {
    FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&(this->Payload).field_0x18);
  }
  if (this->bAddMutualComponents != false) {
    *param_3 = true;
  }
  return;
}

// GenerateType @ 1462ae250

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::FAddConditional>
::GenerateType(TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::FAddConditional>
               *this,FEntityManager *param_1,FComponentMask *param_2,bool *param_3)

{
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&this->Payload);
  if ((this->Payload).field_0x1a != '\0') {
    FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&(this->Payload).field_0x18);
  }
  if (this->bAddMutualComponents != false) {
    *param_3 = true;
  }
  return;
}

// GenerateType @ 1462ae2b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::FAdd>
::GenerateType(TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::FAdd>
               *this,FEntityManager *param_1,FComponentMask *param_2,bool *param_3)

{
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&this->Payload);
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&(this->Payload).field_0xc);
  if (this->bAddMutualComponents != false) {
    *param_3 = true;
  }
  return;
}

// GenerateType @ 1462ae300

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<int>_>
::GenerateType(TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<int>_>
               *this,FEntityManager *param_1,FComponentMask *param_2,bool *param_3)

{
  if ((this->Payload).field_0x2 != '\0') {
    FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&this->Payload);
  }
  if ((this->Payload).field_0xe != '\0') {
    FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&(this->Payload).field_0xc);
  }
  if (this->bAddMutualComponents != false) {
    *param_3 = true;
  }
  return;
}

// GenerateType @ 1462ae360

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAdd<int>_>::GenerateType
          (TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAdd<int>_> *this,
          FEntityManager *param_1,FComponentMask *param_2,bool *param_3)

{
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&this->Payload);
  if (this->bAddMutualComponents != false) {
    *param_3 = true;
  }
  return;
}

// GenerateType @ 1462ae3a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAdd<FMovieSceneSequenceID>_>::
GenerateType(TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAdd<FMovieSceneSequenceID>_>
             *this,FEntityManager *param_1,FComponentMask *param_2,bool *param_3)

{
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&this->Payload);
  if (this->bAddMutualComponents != false) {
    *param_3 = true;
  }
  return;
}

// GenerateType @ 1462ae3e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAddConditional<int>_>::
GenerateType(TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAddConditional<int>_> *this
            ,FEntityManager *param_1,FComponentMask *param_2,bool *param_3)

{
  if ((this->Payload).field_0x2 != '\0') {
    FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&this->Payload);
  }
  if (this->bAddMutualComponents != false) {
    *param_3 = true;
  }
  return;
}

// Initialize @ 1462b21b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>
::Initialize(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>
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
    Do<_UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>::Initialize_::__l5::<lambda_1>,TTuple<UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>_&>
              (&local_28,&this->Payload);
  }
  return;
}

// Initialize @ 1462b21f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>
::Initialize(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>
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
    Do<_UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>::Initialize_::__l5::<lambda_1>,TTuple<UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>_&>
              (&local_28,&this->Payload);
  }
  return;
}

// Initialize @ 1462b2230

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>
::Initialize(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>
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
    Do<_UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>::Initialize_::__l5::<lambda_1>,TTuple<UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>_&>
              (&local_28,&this->Payload);
  }
  return;
}

// Initialize @ 1462b2270

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>
::Initialize(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>
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
    Do<_UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>::Initialize_::__l5::<lambda_1>,TTuple<UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>_&>
              (&local_28,&this->Payload);
  }
  return;
}

// Initialize @ 1462b22b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>
::Initialize(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>
             *this,FEntityManager *param_1,FEntityInfo *param_2)

{
  int iVar1;
  FEntityAllocation *pFVar2;
  
  if ((param_2->Data).Allocation != (FEntityAllocation *)0x0) {
    pFVar2 = (param_2->Data).Allocation;
    iVar1 = (param_2->Data).ComponentOffset;
    TAdd<FMovieSceneSequenceID>::Apply((TAdd<FMovieSceneSequenceID> *)&this->Payload,pFVar2,iVar1);
    TAddConditional<FMovieSceneSequenceID>::Apply
              ((TAddConditional<FMovieSceneSequenceID> *)&(this->Payload).field_0x10,pFVar2,iVar1);
    TAddConditional<UE::MovieScene::FSourceDoubleChannel>::Apply
              ((TAddConditional<UE::MovieScene::FSourceDoubleChannel> *)&(this->Payload).field_0x20,
               pFVar2,iVar1);
    TAddConditional<UE::MovieScene::FSourceDoubleChannel>::Apply
              ((TAddConditional<UE::MovieScene::FSourceDoubleChannel> *)&(this->Payload).field_0x38,
               pFVar2,iVar1);
  }
  return;
}

// Initialize @ 1462b2330

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>
::Initialize(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>
             *this,FEntityManager *param_1,FEntityInfo *param_2)

{
  int iVar1;
  FEntityAllocation *pFVar2;
  
  if ((param_2->Data).Allocation != (FEntityAllocation *)0x0) {
    pFVar2 = (param_2->Data).Allocation;
    iVar1 = (param_2->Data).ComponentOffset;
    TAdd<FMovieSceneSequenceID>::Apply((TAdd<FMovieSceneSequenceID> *)&this->Payload,pFVar2,iVar1);
    TAddConditional<FMovieSceneSequenceID>::Apply
              ((TAddConditional<FMovieSceneSequenceID> *)&(this->Payload).field_0x10,pFVar2,iVar1);
    TAddConditional<UE::MovieScene::FSourceDoubleChannel>::Apply
              ((TAddConditional<UE::MovieScene::FSourceDoubleChannel> *)&(this->Payload).field_0x20,
               pFVar2,iVar1);
  }
  return;
}

// Initialize @ 1462b23a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FString>,UE::MovieScene::TAddConditional<FString>_>
::Initialize(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FString>,UE::MovieScene::TAddConditional<FString>_>
             *this,FEntityManager *param_1,FEntityInfo *param_2)

{
  int iVar1;
  FEntityAllocation *pFVar2;
  
  if ((param_2->Data).Allocation != (FEntityAllocation *)0x0) {
    pFVar2 = (param_2->Data).Allocation;
    iVar1 = (param_2->Data).ComponentOffset;
    TAddConditional<int>::Apply((TAddConditional<int> *)&this->Payload,pFVar2,iVar1);
    TAddConditional<int>::Apply((TAddConditional<int> *)&(this->Payload).field_0xc,pFVar2,iVar1);
    TAddConditional<FString>::Apply
              ((TAddConditional<FString> *)&(this->Payload).field_0x18,pFVar2,iVar1);
    TAddConditional<FString>::Apply
              ((TAddConditional<FString> *)&(this->Payload).field_0x30,pFVar2,iVar1);
  }
  return;
}

// Initialize @ 1462b2420

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAdd<int>,UE::MovieScene::TAdd<float>,UE::MovieScene::TAdd<FString>_>
::Initialize(TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAdd<int>,UE::MovieScene::TAdd<float>,UE::MovieScene::TAdd<FString>_>
             *this,FEntityManager *param_1,FEntityInfo *param_2)

{
  int iVar1;
  FEntityAllocation *pFVar2;
  
  if ((param_2->Data).Allocation != (FEntityAllocation *)0x0) {
    pFVar2 = (param_2->Data).Allocation;
    iVar1 = (param_2->Data).ComponentOffset;
    TAdd<int>::Apply((TAdd<int> *)&this->Payload,pFVar2,iVar1);
    TAdd<float>::Apply((TAdd<float> *)&(this->Payload).field_0xc,pFVar2,iVar1);
    TAdd<FString>::Apply((TAdd<FString> *)&(this->Payload).field_0x18,pFVar2,iVar1);
  }
  return;
}

// Initialize @ 1462b2490

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAdd<int>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<FString>_>
::Initialize(TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAdd<int>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<FString>_>
             *this,FEntityManager *param_1,FEntityInfo *param_2)

{
  int iVar1;
  FEntityAllocation *pFVar2;
  
  if ((param_2->Data).Allocation != (FEntityAllocation *)0x0) {
    pFVar2 = (param_2->Data).Allocation;
    iVar1 = (param_2->Data).ComponentOffset;
    TAdd<int>::Apply((TAdd<int> *)&this->Payload,pFVar2,iVar1);
    TAdd<double>::Apply((TAdd<double> *)&(this->Payload).field_0x10,pFVar2,iVar1);
    TAdd<FString>::Apply((TAdd<FString> *)&(this->Payload).field_0x28,pFVar2,iVar1);
  }
  return;
}

// Initialize @ 1462b2500

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>_>
::Initialize(TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>_>
             *this,FEntityManager *param_1,FEntityInfo *param_2)

{
  int iVar1;
  FEntityAllocation *pFVar2;
  
  if ((param_2->Data).Allocation != (FEntityAllocation *)0x0) {
    pFVar2 = (param_2->Data).Allocation;
    iVar1 = (param_2->Data).ComponentOffset;
    TAdd<FMovieSceneSequenceID>::Apply((TAdd<FMovieSceneSequenceID> *)&this->Payload,pFVar2,iVar1);
    TAddConditional<FMovieSceneSequenceID>::Apply
              ((TAddConditional<FMovieSceneSequenceID> *)&(this->Payload).field_0x10,pFVar2,iVar1);
  }
  return;
}

// Initialize @ 1462b2570

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FString>_>
::Initialize(TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FString>_>
             *this,FEntityManager *param_1,FEntityInfo *param_2)

{
  int iVar1;
  FEntityAllocation *pFVar2;
  
  if ((param_2->Data).Allocation != (FEntityAllocation *)0x0) {
    pFVar2 = (param_2->Data).Allocation;
    iVar1 = (param_2->Data).ComponentOffset;
    TAddConditional<int>::Apply((TAddConditional<int> *)&this->Payload,pFVar2,iVar1);
    TAddConditional<int>::Apply((TAddConditional<int> *)&(this->Payload).field_0xc,pFVar2,iVar1);
    TAddConditional<FString>::Apply
              ((TAddConditional<FString> *)&(this->Payload).field_0x18,pFVar2,iVar1);
  }
  return;
}

// Initialize @ 1462b25e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<int>,UE::MovieScene::TAdd<float>_>
::Initialize(TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<int>,UE::MovieScene::TAdd<float>_>
             *this,FEntityManager *param_1,FEntityInfo *param_2)

{
  int iVar1;
  FEntityAllocation *pFVar2;
  
  if ((param_2->Data).Allocation != (FEntityAllocation *)0x0) {
    pFVar2 = (param_2->Data).Allocation;
    iVar1 = (param_2->Data).ComponentOffset;
    TAdd<int>::Apply((TAdd<int> *)&this->Payload,pFVar2,iVar1);
    TAdd<float>::Apply((TAdd<float> *)&(this->Payload).field_0xc,pFVar2,iVar1);
  }
  return;
}

// Initialize @ 1462b2650

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<int>,UE::MovieScene::TAdd<double>_>
::Initialize(TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<int>,UE::MovieScene::TAdd<double>_>
             *this,FEntityManager *param_1,FEntityInfo *param_2)

{
  int iVar1;
  FEntityAllocation *pFVar2;
  
  if ((param_2->Data).Allocation != (FEntityAllocation *)0x0) {
    pFVar2 = (param_2->Data).Allocation;
    iVar1 = (param_2->Data).ComponentOffset;
    TAdd<int>::Apply((TAdd<int> *)&this->Payload,pFVar2,iVar1);
    TAdd<double>::Apply((TAdd<double> *)&(this->Payload).field_0x10,pFVar2,iVar1);
  }
  return;
}

// Initialize @ 1462b26c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FMovieSceneBindingLifetimeComponentData>_>
::Initialize(TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FMovieSceneBindingLifetimeComponentData>_>
             *this,FEntityManager *param_1,FEntityInfo *param_2)

{
  int iVar1;
  FEntityAllocation *pFVar2;
  
  if ((param_2->Data).Allocation != (FEntityAllocation *)0x0) {
    pFVar2 = (param_2->Data).Allocation;
    iVar1 = (param_2->Data).ComponentOffset;
    TAdd<FGuid>::Apply((TAdd<FGuid> *)&this->Payload,pFVar2,iVar1);
    TAddConditional<UE::MovieScene::FMovieSceneBindingLifetimeComponentData>::Apply
              ((TAddConditional<UE::MovieScene::FMovieSceneBindingLifetimeComponentData> *)
               &(this->Payload).field_0x18,pFVar2,iVar1);
  }
  return;
}

// Initialize @ 1462b2730

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::FAddConditional>
::Initialize(TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::FAddConditional>
             *this,FEntityManager *param_1,FEntityInfo *param_2)

{
  if ((param_2->Data).Allocation != (FEntityAllocation *)0x0) {
    TAdd<FGuid>::Apply((TAdd<FGuid> *)&this->Payload,(param_2->Data).Allocation,
                       (param_2->Data).ComponentOffset);
    return;
  }
  return;
}

// Initialize @ 1462b2760

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::FAdd>
::Initialize(TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::FAdd>
             *this,FEntityManager *param_1,FEntityInfo *param_2)

{
  if ((param_2->Data).Allocation != (FEntityAllocation *)0x0) {
    TAdd<FMovieSceneSequenceID>::Apply
              ((TAdd<FMovieSceneSequenceID> *)&this->Payload,(param_2->Data).Allocation,
               (param_2->Data).ComponentOffset);
    return;
  }
  return;
}

// Initialize @ 1462b2790

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<int>_>
::Initialize(TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<int>_>
             *this,FEntityManager *param_1,FEntityInfo *param_2)

{
  int iVar1;
  FEntityAllocation *pFVar2;
  
  if ((param_2->Data).Allocation != (FEntityAllocation *)0x0) {
    pFVar2 = (param_2->Data).Allocation;
    iVar1 = (param_2->Data).ComponentOffset;
    TAddConditional<int>::Apply((TAddConditional<int> *)&this->Payload,pFVar2,iVar1);
    TAddConditional<int>::Apply((TAddConditional<int> *)&(this->Payload).field_0xc,pFVar2,iVar1);
  }
  return;
}

// Initialize @ 1462b2800

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAdd<int>_>::Initialize
          (TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAdd<int>_> *this,
          FEntityManager *param_1,FEntityInfo *param_2)

{
  if ((param_2->Data).Allocation != (FEntityAllocation *)0x0) {
    TAdd<int>::Apply((TAdd<int> *)&this->Payload,(param_2->Data).Allocation,
                     (param_2->Data).ComponentOffset);
    return;
  }
  return;
}

// Initialize @ 1462b2830

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAdd<FMovieSceneSequenceID>_>::Initialize
          (TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAdd<FMovieSceneSequenceID>_>
           *this,FEntityManager *param_1,FEntityInfo *param_2)

{
  if ((param_2->Data).Allocation != (FEntityAllocation *)0x0) {
    TAdd<FMovieSceneSequenceID>::Apply
              ((TAdd<FMovieSceneSequenceID> *)&this->Payload,(param_2->Data).Allocation,
               (param_2->Data).ComponentOffset);
    return;
  }
  return;
}

// Initialize @ 1462b2860

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAddConditional<int>_>::
Initialize(TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAddConditional<int>_> *this,
          FEntityManager *param_1,FEntityInfo *param_2)

{
  if ((param_2->Data).Allocation != (FEntityAllocation *)0x0) {
    TAddConditional<int>::Apply
              ((TAddConditional<int> *)&this->Payload,(param_2->Data).Allocation,
               (param_2->Data).ComponentOffset);
    return;
  }
  return;
}

