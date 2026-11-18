// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TemplateSequence
// Functions: 21

// operator()<UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>_> @ 14ac65360

void __thiscall
`UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>_>
::Initialize'::__l5::<lambda_1>::
operator()<UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>_>
          (void *this,TAdd<UE::MovieScene::FSourceFloatChannel> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  undefined8 *puVar8;
  FComponentHeader *this_00;
  FComponentHeader *pFVar9;
  
  lVar5 = *(longlong *)this;
  iVar3 = *(int *)((longlong)this + 8);
  this_00 = *(FComponentHeader **)(lVar5 + 0x28);
  pFVar9 = this_00 + *(ushort *)(lVar5 + 0xc);
  for (; this_00 != pFVar9; this_00 = this_00 + 1) {
    if ((this_00->ComponentType).Value == (ushort)param_1->_padding_) goto LAB_14ac653d9;
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
LAB_14ac653d9:
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
  puVar8 = UE::MovieScene::FComponentHeader::GetValuePtr(this_00,iVar3);
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
  *puVar8 = (param_1->Payload).TypedValue.Source;
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

// operator()<UE::MovieScene::TAdd<UE::MovieScene::FTemplateSequenceComponentData>_> @ 14ac654e0

void __thiscall
`UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<UE::MovieScene::FTemplateSequenceComponentData>_>
::Initialize'::__l5::<lambda_1>::
operator()<UE::MovieScene::TAdd<UE::MovieScene::FTemplateSequenceComponentData>_>
          (void *this,TAdd<UE::MovieScene::FTemplateSequenceComponentData> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  code *pcVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  uint *puVar11;
  FComponentHeader *this_00;
  FComponentHeader *pFVar12;
  
  lVar5 = *(longlong *)this;
  iVar3 = *(int *)((longlong)this + 8);
  this_00 = *(FComponentHeader **)(lVar5 + 0x28);
  pFVar12 = this_00 + *(ushort *)(lVar5 + 0xc);
  for (; this_00 != pFVar12; this_00 = this_00 + 1) {
    if ((this_00->ComponentType).Value == (ushort)param_1->_padding_) goto LAB_14ac65559;
  }
  bVar10 = ::FDebug::CheckVerifyFailedImpl2
                     ("Header",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                      ,0x2db,L"");
  this_00 = (FComponentHeader *)0x0;
  if (bVar10) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
LAB_14ac65559:
  if ((this_00->Sizeof == '\0') &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("!Header.IsTag()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntityBuilder.h"
                          ,0x1fb,L""), bVar10)) {
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
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("PreviousAccessCount == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                          ,0x487,
                          L"Component header is still in use when it is being opened for write!"),
     bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  puVar11 = UE::MovieScene::FComponentHeader::GetValuePtr(this_00,iVar3);
  if (((param_1->Payload).bIsSet == false) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsSet()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                          ,0x1bd,
                          L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                         ), bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar7 = (param_1->Payload).TypedValue.InnerOperand.ObjectBindingID.B;
  uVar8 = (param_1->Payload).TypedValue.InnerOperand.ObjectBindingID.C;
  uVar9 = (param_1->Payload).TypedValue.InnerOperand.ObjectBindingID.D;
  *puVar11 = (param_1->Payload).TypedValue.InnerOperand.ObjectBindingID.A;
  puVar11[1] = uVar7;
  puVar11[2] = uVar8;
  puVar11[3] = uVar9;
  puVar11[4] = (param_1->Payload).TypedValue.InnerOperand.SequenceID.Value;
  if ((param_1->Payload).bIsSet != false) {
    (param_1->Payload).bIsSet = false;
  }
  pFVar12 = (FComponentHeader *)0x0;
  if ((FComponentHeader *)this_00->SerialNumber != (FComponentHeader *)0x0) {
    pFVar12 = (FComponentHeader *)this_00->SerialNumber;
  }
  this_00->SerialNumber = (ulong64)pFVar12;
  LOCK();
  this_00->ScheduledAccessCount = (atomic<int>)((int)this_00->ScheduledAccessCount + -1);
  UNLOCK();
  if (iVar4 == 1) {
    ReleaseSRWLockExclusive((PSRWLOCK)&this_00->ReadWriteLock);
  }
  return;
}

// Add<FGuid,FGuid_const_&> @ 14ac65660

TEntityBuilder<UE::MovieScene::TAdd<FGuid>_> * __thiscall
UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int>_>::Add<FGuid,FGuid_const_&>
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

// Add<UE::MovieScene::FSourceFloatChannel,UE::MovieScene::FSourceFloatChannel> @ 14ac65690

TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>_>
* __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAdd<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>_>
::Add<UE::MovieScene::FSourceFloatChannel,UE::MovieScene::FSourceFloatChannel>
          (TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAdd<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>_>
           *this,TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>_>
                 *__return_storage_ptr__,
          TComponentTypeID<UE::MovieScene::FSourceFloatChannel> param_1,FSourceFloatChannel *param_2
          )

{
  bool bVar1;
  char cVar2;
  FMovieSceneFloatChannel *pFVar3;
  undefined8 uVar4;
  
  bVar1 = this->bAddMutualComponents;
  pFVar3 = param_2->Source;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00__U__TAdd_UFTemplateSequencePropertyScaleComponentData_MovieScene_UE___MovieScene_UE__U__TAdd_UFSourceFloatChannel_MovieScene_UE___34__MovieScene_UE__6B_
  ;
  *(undefined2 *)&__return_storage_ptr__->field_0x8 = *(undefined2 *)&this->Payload;
  __return_storage_ptr__->field_0x38 = 0;
  cVar2 = (this->Payload).field_0x30;
  __return_storage_ptr__->field_0x38 = cVar2;
  if (cVar2 != '\0') {
    uVar4 = *(undefined8 *)&(this->Payload).field_0xc;
    *(undefined8 *)&__return_storage_ptr__->field_0xc = *(undefined8 *)&(this->Payload).field_0x4;
    *(undefined8 *)&__return_storage_ptr__->field_0x14 = uVar4;
    uVar4 = *(undefined8 *)&(this->Payload).field_0x1c;
    *(undefined8 *)&__return_storage_ptr__->field_0x1c = *(undefined8 *)&(this->Payload).field_0x14;
    *(undefined8 *)&__return_storage_ptr__->field_0x24 = uVar4;
    *(undefined8 *)&__return_storage_ptr__->field_0x2c = *(undefined8 *)&(this->Payload).field_0x24;
    *(undefined4 *)&__return_storage_ptr__->field_0x34 = *(undefined4 *)&(this->Payload).field_0x2c;
  }
  *(TComponentTypeID<UE::MovieScene::FSourceFloatChannel> *)&__return_storage_ptr__->field_0x40 =
       param_1;
  __return_storage_ptr__->field_0x50 = 1;
  *(FMovieSceneFloatChannel **)&__return_storage_ptr__->field_0x48 = pFVar3;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilder_U__TAdd_UFTemplateSequencePropertyScaleComponentData_MovieScene_UE___MovieScene_UE__U__TAdd_UFSourceFloatChannel_MovieScene_UE___23__MovieScene_UE__6B_
  ;
  __return_storage_ptr__->field_0x58 = bVar1;
  return __return_storage_ptr__;
}

// Add<UE::MovieScene::FTemplateSequenceComponentData,UE::MovieScene::FTemplateSequenceComponentData_&> @ 14ac65710

TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<UE::MovieScene::FTemplateSequenceComponentData>_>
* __thiscall
UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAddConditional<FGuid>_>
::
Add<UE::MovieScene::FTemplateSequenceComponentData,UE::MovieScene::FTemplateSequenceComponentData_&>
          (TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAddConditional<FGuid>_> *this
          ,TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<UE::MovieScene::FTemplateSequenceComponentData>_>
           *__return_storage_ptr__,
          TComponentTypeID<UE::MovieScene::FTemplateSequenceComponentData> param_1,
          FTemplateSequenceComponentData *param_2)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar5 = (param_2->InnerOperand).ObjectBindingID.A;
  uVar6 = (param_2->InnerOperand).ObjectBindingID.B;
  uVar7 = (param_2->InnerOperand).ObjectBindingID.C;
  uVar8 = (param_2->InnerOperand).ObjectBindingID.D;
  uVar3 = (param_2->InnerOperand).SequenceID.Value;
  bVar1 = this->bAddMutualComponents;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00__U__TAddConditional_UFGuid___MovieScene_UE__U__TAdd_UFTemplateSequenceComponentData_MovieScene_UE___34__MovieScene_UE__6B_
  ;
  *(undefined4 *)&__return_storage_ptr__->field_0x8 = *(undefined4 *)&this->Payload;
  __return_storage_ptr__->field_0x1c = 0;
  cVar2 = (this->Payload).field_0x14;
  __return_storage_ptr__->field_0x1c = cVar2;
  if (cVar2 != '\0') {
    uVar4 = *(undefined8 *)&(this->Payload).field_0xc;
    *(undefined8 *)&__return_storage_ptr__->field_0xc = *(undefined8 *)&(this->Payload).field_0x4;
    *(undefined8 *)&__return_storage_ptr__->field_0x14 = uVar4;
  }
  *(TComponentTypeID<UE::MovieScene::FTemplateSequenceComponentData> *)
   &__return_storage_ptr__->field_0x20 = param_1;
  __return_storage_ptr__->field_0x38 = 1;
  *(uint *)&__return_storage_ptr__->field_0x24 = uVar5;
  *(uint *)&__return_storage_ptr__->field_0x28 = uVar6;
  *(uint *)&__return_storage_ptr__->field_0x2c = uVar7;
  *(uint *)&__return_storage_ptr__->field_0x30 = uVar8;
  *(uint *)&__return_storage_ptr__->field_0x34 = uVar3;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilder_U__TAddConditional_UFGuid___MovieScene_UE__U__TAdd_UFTemplateSequenceComponentData_MovieScene_UE___23__MovieScene_UE__6B_
  ;
  __return_storage_ptr__->field_0x3c = bVar1;
  return __return_storage_ptr__;
}

// Add<UE::MovieScene::FTemplateSequencePropertyScaleComponentData,UE::MovieScene::FTemplateSequencePropertyScaleComponentData> @ 14ac65770

TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>_> *
__thiscall
UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int>_>::
Add<UE::MovieScene::FTemplateSequencePropertyScaleComponentData,UE::MovieScene::FTemplateSequencePropertyScaleComponentData>
          (TEntityBuilderImpl<TIntegerSequence<int>_> *this,
          TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>_>
          *__return_storage_ptr__,
          TComponentTypeID<UE::MovieScene::FTemplateSequencePropertyScaleComponentData> param_1,
          FTemplateSequencePropertyScaleComponentData *param_2)

{
  undefined8 uVar1;
  ETemplateSectionPropertyScaleType EVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  FMovieSceneSequenceID FVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  EVar2 = param_2->PropertyScaleType;
  FVar5.Value = (param_2->SubSequenceID).Value;
  uVar6 = (param_2->ObjectBinding).A;
  uVar7 = (param_2->ObjectBinding).B;
  uVar8 = (param_2->ObjectBinding).C;
  uVar3 = *(undefined8 *)&(param_2->ObjectBinding).D;
  uVar4 = *(undefined8 *)&(param_2->PropertyBinding).PropertyName.Number;
  uVar1 = *(undefined8 *)&(param_2->PropertyBinding).PropertyPath.Number;
  *(TComponentTypeID<UE::MovieScene::FTemplateSequencePropertyScaleComponentData> *)
   &__return_storage_ptr__->field_0x8 = param_1;
  __return_storage_ptr__->field_0x38 = 1;
  *(uint *)&__return_storage_ptr__->field_0xc = FVar5.Value;
  *(uint *)&__return_storage_ptr__->field_0x10 = uVar6;
  *(uint *)&__return_storage_ptr__->field_0x14 = uVar7;
  *(uint *)&__return_storage_ptr__->field_0x18 = uVar8;
  *(undefined8 *)&__return_storage_ptr__->field_0x1c = uVar3;
  *(undefined8 *)&__return_storage_ptr__->field_0x24 = uVar4;
  *(undefined8 *)&__return_storage_ptr__->field_0x2c = uVar1;
  *(ETemplateSectionPropertyScaleType *)&__return_storage_ptr__->field_0x34 = EVar2;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilder_U__TAdd_UFTemplateSequencePropertyScaleComponentData_MovieScene_UE___MovieScene_UE___MovieScene_UE__6B_
  ;
  __return_storage_ptr__->field_0x3c = 0;
  return __return_storage_ptr__;
}

// AddMutualComponents @ 14ac72fd0

TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>_>
* __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>_>
::AddMutualComponents
          (TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>_>
           *this,TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>_>
                 *__return_storage_ptr__)

{
  char cVar1;
  undefined8 uVar2;
  
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00__U__TAdd_UFTemplateSequencePropertyScaleComponentData_MovieScene_UE___MovieScene_UE__U__TAdd_UFSourceFloatChannel_MovieScene_UE___34__MovieScene_UE__6B_
  ;
  *(undefined2 *)&__return_storage_ptr__->field_0x8 = *(undefined2 *)&this->Payload;
  __return_storage_ptr__->field_0x38 = 0;
  cVar1 = (this->Payload).field_0x30;
  __return_storage_ptr__->field_0x38 = cVar1;
  if (cVar1 != '\0') {
    uVar2 = *(undefined8 *)&(this->Payload).field_0xc;
    *(undefined8 *)&__return_storage_ptr__->field_0xc = *(undefined8 *)&(this->Payload).field_0x4;
    *(undefined8 *)&__return_storage_ptr__->field_0x14 = uVar2;
    uVar2 = *(undefined8 *)&(this->Payload).field_0x1c;
    *(undefined8 *)&__return_storage_ptr__->field_0x1c = *(undefined8 *)&(this->Payload).field_0x14;
    *(undefined8 *)&__return_storage_ptr__->field_0x24 = uVar2;
    *(undefined8 *)&__return_storage_ptr__->field_0x2c = *(undefined8 *)&(this->Payload).field_0x24;
    *(undefined4 *)&__return_storage_ptr__->field_0x34 = *(undefined4 *)&(this->Payload).field_0x2c;
  }
  *(undefined2 *)&__return_storage_ptr__->field_0x40 = *(undefined2 *)&(this->Payload).field_0x38;
  __return_storage_ptr__->field_0x50 = 0;
  cVar1 = (this->Payload).field_0x48;
  __return_storage_ptr__->field_0x50 = cVar1;
  if (cVar1 != '\0') {
    *(undefined8 *)&__return_storage_ptr__->field_0x48 = *(undefined8 *)&(this->Payload).field_0x40;
  }
  __return_storage_ptr__->field_0x58 = 1;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilder_U__TAdd_UFTemplateSequencePropertyScaleComponentData_MovieScene_UE___MovieScene_UE__U__TAdd_UFSourceFloatChannel_MovieScene_UE___23__MovieScene_UE__6B_
  ;
  return __return_storage_ptr__;
}

// AddTag @ 14ac73680

TEntityBuilder<UE::MovieScene::TAdd<FGuid>,UE::MovieScene::FAdd> * __thiscall
UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAdd<FGuid>_>::AddTag
          (TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAdd<FGuid>_> *this,
          TEntityBuilder<UE::MovieScene::TAdd<FGuid>,UE::MovieScene::FAdd> *__return_storage_ptr__,
          FComponentTypeID param_1)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  
  bVar1 = this->bAddMutualComponents;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00__U__TAdd_UFGuid___MovieScene_UE__UFAdd_34__MovieScene_UE__6B_
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
  *(ushort *)&__return_storage_ptr__->field_0x20 = param_1.Value;
  *(undefined ***)__return_storage_ptr__ =
       &___7__TEntityBuilder_U__TAdd_UFGuid___MovieScene_UE__UFAdd_23__MovieScene_UE__6B_;
  __return_storage_ptr__->field_0x24 = bVar1;
  return __return_storage_ptr__;
}

// Create @ 14ac73fe0

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneEntityID __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::FAdd>::
Create(TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::FAdd>
       *this,FEntityManager *param_1)

{
  FComponentMask *in_R8;
  
  FEntityBuilderImplBase::CreateEntity((FEntityBuilderImplBase *)this,param_1,in_R8);
  return (FMovieSceneEntityID)(ushort)param_1;
}

// Create @ 14ac74020

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneEntityID __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>_>
::Create(TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>_>
         *this,FEntityManager *param_1)

{
  FComponentMask *in_R8;
  
  FEntityBuilderImplBase::CreateEntity((FEntityBuilderImplBase *)this,param_1,in_R8);
  return (FMovieSceneEntityID)(ushort)param_1;
}

// Create @ 14ac74060

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneEntityID __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<UE::MovieScene::FTemplateSequenceComponentData>_>
::Create(TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<UE::MovieScene::FTemplateSequenceComponentData>_>
         *this,FEntityManager *param_1)

{
  FComponentMask *in_R8;
  
  FEntityBuilderImplBase::CreateEntity((FEntityBuilderImplBase *)this,param_1,in_R8);
  return (FMovieSceneEntityID)(ushort)param_1;
}

// Create @ 14ac740a0

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneEntityID __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAdd<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>_>
::Create(TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAdd<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>_>
         *this,FEntityManager *param_1)

{
  FComponentMask *in_R8;
  
  FEntityBuilderImplBase::CreateEntity((FEntityBuilderImplBase *)this,param_1,in_R8);
  return (FMovieSceneEntityID)(ushort)param_1;
}

// GenerateType @ 14ac76cc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::FAdd>::
GenerateType(TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::FAdd>
             *this,FEntityManager *param_1,FComponentMask *param_2,bool *param_3)

{
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&this->Payload);
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&(this->Payload).field_0x18);
  if (this->bAddMutualComponents != false) {
    *param_3 = true;
  }
  return;
}

// GenerateType @ 14ac76d10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>_>
::GenerateType(TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>_>
               *this,FEntityManager *param_1,FComponentMask *param_2,bool *param_3)

{
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&this->Payload);
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&(this->Payload).field_0x38);
  if (this->bAddMutualComponents != false) {
    *param_3 = true;
  }
  return;
}

// GenerateType @ 14ac76d60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<UE::MovieScene::FTemplateSequenceComponentData>_>
::GenerateType(TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<UE::MovieScene::FTemplateSequenceComponentData>_>
               *this,FEntityManager *param_1,FComponentMask *param_2,bool *param_3)

{
  if ((this->Payload).field_0x2 != '\0') {
    FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&this->Payload);
  }
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&(this->Payload).field_0x18);
  if (this->bAddMutualComponents != false) {
    *param_3 = true;
  }
  return;
}

// GenerateType @ 14ac76dc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAdd<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>_>
::GenerateType(TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAdd<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>_>
               *this,FEntityManager *param_1,FComponentMask *param_2,bool *param_3)

{
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&this->Payload);
  if (this->bAddMutualComponents != false) {
    *param_3 = true;
  }
  return;
}

// Initialize @ 14ac79030

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::FAdd>::
Initialize(TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::FAdd>
           *this,FEntityManager *param_1,FEntityInfo *param_2)

{
  if ((param_2->Data).Allocation != (FEntityAllocation *)0x0) {
    TAdd<FGuid>::Apply((TAdd<FGuid> *)&this->Payload,(param_2->Data).Allocation,
                       (param_2->Data).ComponentOffset);
    return;
  }
  return;
}

// Initialize @ 14ac79060

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>_>
::Initialize(TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>_>
             *this,FEntityManager *param_1,FEntityInfo *param_2)

{
  FEntityAllocation *local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  if ((param_2->Data).Allocation != (FEntityAllocation *)0x0) {
    local_28 = (param_2->Data).Allocation;
    uStack_20 = *(undefined8 *)&(param_2->Data).ComponentOffset;
    local_18 = *(undefined8 *)&param_2->EntityID;
    TAdd<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>::Apply
              ((TAdd<UE::MovieScene::FTemplateSequencePropertyScaleComponentData> *)&this->Payload,
               local_28,(param_2->Data).ComponentOffset);
    `UE::MovieScene::
    TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>_>
    ::Initialize'::__l5::<lambda_1>::
    operator()<UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>_>
              (&local_28,(TAdd<UE::MovieScene::FSourceFloatChannel> *)&(this->Payload).field_0x38);
  }
  return;
}

// Initialize @ 14ac790c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<UE::MovieScene::FTemplateSequenceComponentData>_>
::Initialize(TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<UE::MovieScene::FTemplateSequenceComponentData>_>
             *this,FEntityManager *param_1,FEntityInfo *param_2)

{
  FEntityAllocation *local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  if ((param_2->Data).Allocation != (FEntityAllocation *)0x0) {
    local_28 = (param_2->Data).Allocation;
    uStack_20 = *(undefined8 *)&(param_2->Data).ComponentOffset;
    local_18 = *(undefined8 *)&param_2->EntityID;
    TAddConditional<FGuid>::Apply
              ((TAddConditional<FGuid> *)&this->Payload,local_28,(param_2->Data).ComponentOffset);
    `UE::MovieScene::
    TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<UE::MovieScene::FTemplateSequenceComponentData>_>
    ::Initialize'::__l5::<lambda_1>::
    operator()<UE::MovieScene::TAdd<UE::MovieScene::FTemplateSequenceComponentData>_>
              (&local_28,
               (TAdd<UE::MovieScene::FTemplateSequenceComponentData> *)&(this->Payload).field_0x18);
  }
  return;
}

// Initialize @ 14ac79120

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAdd<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>_>
::Initialize(TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAdd<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>_>
             *this,FEntityManager *param_1,FEntityInfo *param_2)

{
  if ((param_2->Data).Allocation != (FEntityAllocation *)0x0) {
    TAdd<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>::Apply
              ((TAdd<UE::MovieScene::FTemplateSequencePropertyScaleComponentData> *)&this->Payload,
               (param_2->Data).Allocation,(param_2->Data).ComponentOffset);
    return;
  }
  return;
}

// MutateExisting @ 14ac7ab20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::FAdd>::
MutateExisting(TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::FAdd>
               *this,FEntityManager *param_1,FMovieSceneEntityID param_2,FTypelessMutation *param_3)

{
  TTypeCompatibleBytes<unsigned_int> *pTVar1;
  bool bVar2;
  int iVar3;
  TBitArray<TFixedAllocator<12>_> *pTVar4;
  EMutuallyInclusiveComponentType EVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auStack_168 [32];
  <lambda_1> local_148 [8];
  FEntityAllocationWriteContext local_140;
  FEntityRange local_138;
  FEntityInfo local_128;
  FMutualComponentInitializers local_110;
  TBitArray<TFixedAllocator<12>_> local_f0;
  TBitArray<TFixedAllocator<12>_> local_b8;
  TBitArray<TFixedAllocator<12>_> local_80;
  ulonglong local_48;
  ulonglong uVar9;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_168;
  pTVar4 = &FEntityManager::GetEntityType(param_1,param_2)->Bits;
  uVar9 = 0;
  local_80.NumBits = 0;
  local_80.MaxBits = 0;
  TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>(&local_80,pTVar4);
  local_f0.NumBits = 0;
  local_f0.MaxBits = 0x180;
  if (param_3->bRemoveAll == false) {
    TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>(&local_f0,&local_80);
  }
  if ((param_3->RemoveMask).Bits.NumBits != 0) {
    local_b8.NumBits = 0;
    local_b8.MaxBits = 0;
    TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
              (&local_b8,&(param_3->RemoveMask).Bits);
    iVar3 = (int)(local_b8.NumBits + 0x1fU + ((int)(local_b8.NumBits + 0x1fU) >> 0x1f & 0x1fU)) >> 5
    ;
    uVar6 = local_b8.NumBits & 0x8000001f;
    if ((int)uVar6 < 0) {
      uVar6 = (uVar6 - 1 | 0xffffffe0) + 1;
    }
    uVar7 = 0xffffffff >> ((byte)(0x20 - uVar6) & 0x1f);
    if (0x1f < (int)(0x20 - uVar6)) {
      uVar7 = 0xffffffff;
    }
    uVar6 = 0xffffffff;
    if (iVar3 == 1) {
      uVar6 = uVar7;
    }
    if (0 < iVar3) {
      do {
        pTVar1 = local_b8.AllocatorInstance.InlineData + uVar9;
        uVar8 = *(uint *)local_b8.AllocatorInstance.InlineData[uVar9].Pad & uVar6;
        if (uVar6 == 0xffffffff) {
          uVar8 = *(uint *)pTVar1->Pad;
        }
        uVar6 = ~uVar8 & uVar7;
        if ((uint)uVar9 != iVar3 - 1U) {
          uVar6 = ~uVar8;
        }
        uVar8 = (uint)uVar9 + 1;
        uVar9 = (ulonglong)uVar8;
        *(uint *)pTVar1->Pad = uVar6;
        uVar6 = 0xffffffff;
        if (uVar8 == iVar3 - 1U) {
          uVar6 = uVar7;
        }
      } while ((int)uVar8 < iVar3);
    }
    Core::Private::
    BitwiseOperatorImpl<TFixedAllocator<12>,TFixedAllocator<12>,_TBitArray<TFixedAllocator<12>_>::CombineWithBitwiseAND<TFixedAllocator<12>_>_::__l2::<lambda_1>_>
              (&local_b8,&local_f0,OneFillMissingBits|MaintainSize,local_148);
  }
  if ((param_3->AddMask).Bits.NumBits != 0) {
    Core::Private::
    BitwiseOperatorImpl<TFixedAllocator<12>,TFixedAllocator<12>,_TBitArray<TFixedAllocator<12>_>::CombineWithBitwiseOR<TFixedAllocator<12>_>_::__l2::<lambda_1>_>
              ((TBitArray<TFixedAllocator<12>_> *)param_3,&local_f0,MaxSize,(<lambda_1> *)local_148)
    ;
  }
  FComponentMask::Set((FComponentMask *)&local_f0,(FComponentTypeID)*(ushort *)&this->Payload);
  FComponentMask::Set((FComponentMask *)&local_f0,
                      (FComponentTypeID)*(ushort *)&(this->Payload).field_0x18);
  local_110.Initializers.AllocatorInstance.SecondaryData =
       (ForElementType<UE::MovieScene::IMutualComponentInitializer_*>)0x0;
  local_110.Initializers.ArrayNum = 0;
  local_110.Initializers.ArrayMax = 2;
  FEntityAllocationWriteContext::FEntityAllocationWriteContext(&local_140,param_1);
  EVar5 = Mandatory;
  if (this->bAddMutualComponents != false) {
    EVar5 = All;
  }
  FEntityFactories::ComputeMutuallyInclusiveComponents
            (&param_1->ComponentRegistry->Factories,EVar5,(FComponentMask *)&local_f0,&local_110);
  bVar2 = TBitArray<TFixedAllocator<12>_>::CompareSetBits<TFixedAllocator<12>_>
                    (&local_f0,&local_80,false);
  if (!bVar2) {
    FEntityManager::ChangeEntityType(param_1,param_2,(FComponentMask *)&local_f0);
  }
  FEntityManager::GetEntity(param_1,&local_128,param_2);
  if (local_128.Data.Allocation != (FEntityAllocation *)0x0) {
    TAdd<FGuid>::Apply((TAdd<FGuid> *)&this->Payload,local_128.Data.Allocation,
                       local_128.Data.ComponentOffset);
    local_138.Allocation = local_128.Data.Allocation;
    local_138.ComponentStartOffset = local_128.Data.ComponentOffset;
    local_138.Num = 1;
    FMutualComponentInitializers::Execute(&local_110,&local_138,&local_140);
  }
  if (local_110.Initializers.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::MovieScene::IMutualComponentInitializer_*>)0x0) {
    FMemory::Free((void *)local_110.Initializers.AllocatorInstance.SecondaryData);
  }
  return;
}

