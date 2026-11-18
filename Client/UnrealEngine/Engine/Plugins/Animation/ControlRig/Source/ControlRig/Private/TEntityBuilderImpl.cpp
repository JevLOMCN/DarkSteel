// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 181

// operator()<UE::MovieScene::TAdd<UE::MovieScene::FSourceByteChannel>_> @ 14a388ab0

void __thiscall
`UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceByteChannel>_>
::Initialize'::__l5::<lambda_1>::
operator()<UE::MovieScene::TAdd<UE::MovieScene::FSourceByteChannel>_>
          (void *this,TAdd<UE::MovieScene::FSourceByteChannel> *param_1)

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
    if ((this_00->ComponentType).Value == (ushort)param_1->_padding_) goto LAB_14a388b29;
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
LAB_14a388b29:
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

// operator()<UE::MovieScene::TAdd<UE::MovieScene::FSourceIntegerChannel>_> @ 14a388c30

void __thiscall
`UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceIntegerChannel>_>
::Initialize'::__l5::<lambda_1>::
operator()<UE::MovieScene::TAdd<UE::MovieScene::FSourceIntegerChannel>_>
          (void *this,TAdd<UE::MovieScene::FSourceIntegerChannel> *param_1)

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
    if ((this_00->ComponentType).Value == (ushort)param_1->_padding_) goto LAB_14a388ca9;
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
LAB_14a388ca9:
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

// Add<FMovieSceneControlRigSpaceChannel_const_*,FMovieSceneControlRigSpaceChannel_const_*> @ 14a388f80

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<FMovieSceneControlRigSpaceChannel_const_*>_>
* __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>_>
::Add<FMovieSceneControlRigSpaceChannel_const_*,FMovieSceneControlRigSpaceChannel_const_*>
          (TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>_>
           *this,TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<FMovieSceneControlRigSpaceChannel_const_*>_>
                 *__return_storage_ptr__,
          TComponentTypeID<FMovieSceneControlRigSpaceChannel_const_*> param_1,
          FMovieSceneControlRigSpaceChannel **param_2)

{
  bool bVar1;
  char cVar2;
  FMovieSceneControlRigSpaceChannel *pFVar3;
  
  pFVar3 = *param_2;
  bVar1 = this->bAddMutualComponents;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01__U__TAdd_UFControlRigSourceData_MovieScene_UE___MovieScene_UE__U__TAdd_VFName___34_U__TAdd_PEBUFMovieSceneControlRigSpaceChannel___34__MovieScene_UE__6B_
  ;
  *(undefined2 *)&__return_storage_ptr__->field_0x8 = *(undefined2 *)&this->Payload;
  __return_storage_ptr__->field_0x18 = 0;
  cVar2 = (this->Payload).field_0x10;
  __return_storage_ptr__->field_0x18 = cVar2;
  if (cVar2 != '\0') {
    *(undefined8 *)&__return_storage_ptr__->field_0x10 = *(undefined8 *)&(this->Payload).field_0x8;
  }
  *(undefined2 *)&__return_storage_ptr__->field_0x20 = *(undefined2 *)&(this->Payload).field_0x18;
  *(undefined4 *)&__return_storage_ptr__->field_0x24 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  if (*(int *)&(this->Payload).field_0x1c != -1) {
    *(undefined8 *)&__return_storage_ptr__->field_0x24 = *(undefined8 *)&(this->Payload).field_0x1c;
  }
  *(TComponentTypeID<FMovieSceneControlRigSpaceChannel_const_*> *)
   &__return_storage_ptr__->field_0x30 = param_1;
  __return_storage_ptr__->field_0x40 = 1;
  *(FMovieSceneControlRigSpaceChannel **)&__return_storage_ptr__->field_0x38 = pFVar3;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilder_U__TAdd_UFControlRigSourceData_MovieScene_UE___MovieScene_UE__U__TAdd_VFName___23_U__TAdd_PEBUFMovieSceneControlRigSpaceChannel___23__MovieScene_UE__6B_
  ;
  __return_storage_ptr__->field_0x48 = bVar1;
  return __return_storage_ptr__;
}

// Add<UE::MovieScene::FBaseControlRigEvalData,UE::MovieScene::FBaseControlRigEvalData> @ 14a389070

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TEntityBuilder<UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<UE::MovieScene::FBaseControlRigEvalData>_>
* __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>_>
::Add<UE::MovieScene::FBaseControlRigEvalData,UE::MovieScene::FBaseControlRigEvalData>
          (TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>_>
           *this,TEntityBuilder<UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<UE::MovieScene::FBaseControlRigEvalData>_>
                 *__return_storage_ptr__,
          TComponentTypeID<UE::MovieScene::FBaseControlRigEvalData> param_1,
          FBaseControlRigEvalData *param_2)

{
  undefined8 uVar1;
  bool bVar2;
  char cVar3;
  UMovieSceneControlRigParameterSection *pUVar4;
  FWeakObjectPtr FVar5;
  undefined8 uVar6;
  
  pUVar4 = param_2->Section;
  FVar5 = (param_2->WeakControlRig).WeakPtr;
  uVar1 = *(undefined8 *)&param_2->field_0x10;
  bVar2 = this->bAddMutualComponents;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02__U__TAdd_UFGuid___MovieScene_UE__U__TAdd_P6APEAVUObject__PEAV1__Z_34_U__TAdd_UFControlRigSourceData_MovieScene_UE___34_U__TAdd_UFBaseControlRigEvalData_MovieScene_UE___34__MovieScene_UE__6B_
  ;
  *(undefined2 *)&__return_storage_ptr__->field_0x8 = *(undefined2 *)&this->Payload;
  __return_storage_ptr__->field_0x1c = 0;
  cVar3 = (this->Payload).field_0x14;
  __return_storage_ptr__->field_0x1c = cVar3;
  if (cVar3 != '\0') {
    uVar6 = *(undefined8 *)&(this->Payload).field_0xc;
    *(undefined8 *)&__return_storage_ptr__->field_0xc = *(undefined8 *)&(this->Payload).field_0x4;
    *(undefined8 *)&__return_storage_ptr__->field_0x14 = uVar6;
  }
  *(undefined2 *)&__return_storage_ptr__->field_0x20 = *(undefined2 *)&(this->Payload).field_0x18;
  __return_storage_ptr__->field_0x30 = 0;
  cVar3 = (this->Payload).field_0x28;
  __return_storage_ptr__->field_0x30 = cVar3;
  if (cVar3 != '\0') {
    *(undefined8 *)&__return_storage_ptr__->field_0x28 = *(undefined8 *)&(this->Payload).field_0x20;
  }
  *(undefined2 *)&__return_storage_ptr__->field_0x38 = *(undefined2 *)&(this->Payload).field_0x30;
  __return_storage_ptr__->field_0x48 = 0;
  cVar3 = (this->Payload).field_0x40;
  __return_storage_ptr__->field_0x48 = cVar3;
  if (cVar3 != '\0') {
    *(undefined8 *)&__return_storage_ptr__->field_0x40 = *(undefined8 *)&(this->Payload).field_0x38;
  }
  *(TComponentTypeID<UE::MovieScene::FBaseControlRigEvalData> *)&__return_storage_ptr__->field_0x50
       = param_1;
  __return_storage_ptr__->field_0x70 = 1;
  *(UMovieSceneControlRigParameterSection **)&__return_storage_ptr__->field_0x58 = pUVar4;
  *(int *)&__return_storage_ptr__->field_0x60 = FVar5.ObjectIndex;
  *(int *)&__return_storage_ptr__->field_0x64 = FVar5.ObjectSerialNumber;
  *(undefined8 *)&__return_storage_ptr__->field_0x68 = uVar1;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilder_U__TAdd_UFGuid___MovieScene_UE__U__TAdd_P6APEAVUObject__PEAV1__Z_23_U__TAdd_UFControlRigSourceData_MovieScene_UE___23_U__TAdd_UFBaseControlRigEvalData_MovieScene_UE___23__MovieScene_UE__6B_
  ;
  __return_storage_ptr__->field_0x78 = bVar2;
  return __return_storage_ptr__;
}

// Add<UE::MovieScene::FControlRigSourceData,UE::MovieScene::FControlRigSourceData_&> @ 14a3893d0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>_>
* __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>_>
::Add<UE::MovieScene::FControlRigSourceData,UE::MovieScene::FControlRigSourceData_&>
          (TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>_>
           *this,TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>_>
                 *__return_storage_ptr__,
          TComponentTypeID<UE::MovieScene::FControlRigSourceData> param_1,
          FControlRigSourceData *param_2)

{
  bool bVar1;
  char cVar2;
  UMovieSceneControlRigParameterTrack *pUVar3;
  
  bVar1 = this->bAddMutualComponents;
  pUVar3 = param_2->Track;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01__U__TAdd_UFControlRigSourceData_MovieScene_UE___MovieScene_UE__U__TAdd_VFName___34_U234__MovieScene_UE__6B_
  ;
  *(undefined2 *)&__return_storage_ptr__->field_0x8 = *(undefined2 *)&this->Payload;
  __return_storage_ptr__->field_0x18 = 0;
  cVar2 = (this->Payload).field_0x10;
  __return_storage_ptr__->field_0x18 = cVar2;
  if (cVar2 != '\0') {
    *(undefined8 *)&__return_storage_ptr__->field_0x10 = *(undefined8 *)&(this->Payload).field_0x8;
  }
  *(undefined2 *)&__return_storage_ptr__->field_0x20 = *(undefined2 *)&(this->Payload).field_0x18;
  *(undefined4 *)&__return_storage_ptr__->field_0x24 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  if (*(int *)&(this->Payload).field_0x1c != -1) {
    *(undefined8 *)&__return_storage_ptr__->field_0x24 = *(undefined8 *)&(this->Payload).field_0x1c;
  }
  *(TComponentTypeID<UE::MovieScene::FControlRigSourceData> *)&__return_storage_ptr__->field_0x30 =
       param_1;
  __return_storage_ptr__->field_0x40 = 1;
  *(UMovieSceneControlRigParameterTrack **)&__return_storage_ptr__->field_0x38 = pUVar3;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilder_U__TAdd_UFControlRigSourceData_MovieScene_UE___MovieScene_UE__U__TAdd_VFName___23_U123__MovieScene_UE__6B_
  ;
  __return_storage_ptr__->field_0x48 = bVar1;
  return __return_storage_ptr__;
}

// Add<UE::MovieScene::FControlRigSourceData,UE::MovieScene::FControlRigSourceData_&> @ 14a389460

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TEntityBuilder<UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>_>
* __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>_>
::Add<UE::MovieScene::FControlRigSourceData,UE::MovieScene::FControlRigSourceData_&>
          (TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>_>
           *this,TEntityBuilder<UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>_>
                 *__return_storage_ptr__,
          TComponentTypeID<UE::MovieScene::FControlRigSourceData> param_1,
          FControlRigSourceData *param_2)

{
  bool bVar1;
  char cVar2;
  UMovieSceneControlRigParameterTrack *pUVar3;
  undefined8 uVar4;
  
  bVar1 = this->bAddMutualComponents;
  pUVar3 = param_2->Track;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01__U__TAdd_UFGuid___MovieScene_UE__U__TAdd_P6APEAVUObject__PEAV1__Z_34_U__TAdd_UFControlRigSourceData_MovieScene_UE___34__MovieScene_UE__6B_
  ;
  *(undefined2 *)&__return_storage_ptr__->field_0x8 = *(undefined2 *)&this->Payload;
  __return_storage_ptr__->field_0x1c = 0;
  cVar2 = (this->Payload).field_0x14;
  __return_storage_ptr__->field_0x1c = cVar2;
  if (cVar2 != '\0') {
    uVar4 = *(undefined8 *)&(this->Payload).field_0xc;
    *(undefined8 *)&__return_storage_ptr__->field_0xc = *(undefined8 *)&(this->Payload).field_0x4;
    *(undefined8 *)&__return_storage_ptr__->field_0x14 = uVar4;
  }
  *(undefined2 *)&__return_storage_ptr__->field_0x20 = *(undefined2 *)&(this->Payload).field_0x18;
  __return_storage_ptr__->field_0x30 = 0;
  cVar2 = (this->Payload).field_0x28;
  __return_storage_ptr__->field_0x30 = cVar2;
  if (cVar2 != '\0') {
    *(undefined8 *)&__return_storage_ptr__->field_0x28 = *(undefined8 *)&(this->Payload).field_0x20;
  }
  *(TComponentTypeID<UE::MovieScene::FControlRigSourceData> *)&__return_storage_ptr__->field_0x38 =
       param_1;
  __return_storage_ptr__->field_0x48 = 1;
  *(UMovieSceneControlRigParameterTrack **)&__return_storage_ptr__->field_0x40 = pUVar3;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilder_U__TAdd_UFGuid___MovieScene_UE__U__TAdd_P6APEAVUObject__PEAV1__Z_23_U__TAdd_UFControlRigSourceData_MovieScene_UE___23__MovieScene_UE__6B_
  ;
  __return_storage_ptr__->field_0x50 = bVar1;
  return __return_storage_ptr__;
}

// Add<UE::MovieScene::FControlRigSourceData,UE::MovieScene::FControlRigSourceData_&> @ 14a3894e0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>_> * __thiscall
UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int>_>::
Add<UE::MovieScene::FControlRigSourceData,UE::MovieScene::FControlRigSourceData_&>
          (TEntityBuilderImpl<TIntegerSequence<int>_> *this,
          TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>_>
          *__return_storage_ptr__,TComponentTypeID<UE::MovieScene::FControlRigSourceData> param_1,
          FControlRigSourceData *param_2)

{
  UMovieSceneControlRigParameterTrack *pUVar1;
  
  pUVar1 = param_2->Track;
  *(TComponentTypeID<UE::MovieScene::FControlRigSourceData> *)&__return_storage_ptr__->field_0x8 =
       param_1;
  __return_storage_ptr__->field_0x18 = 1;
  *(UMovieSceneControlRigParameterTrack **)&__return_storage_ptr__->field_0x10 = pUVar1;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilder_U__TAdd_UFControlRigSourceData_MovieScene_UE___MovieScene_UE___MovieScene_UE__6B_
  ;
  __return_storage_ptr__->field_0x20 = 0;
  return __return_storage_ptr__;
}

// Add<FGuid,FGuid_&> @ 14a3899b0

TEntityBuilder<UE::MovieScene::TAdd<FGuid>_> * __thiscall
UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int>_>::Add<FGuid,FGuid_&>
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

// Add<FMovieSceneBlendChannelID,FMovieSceneBlendChannelID_&> @ 14a3899e0

TEntityBuilder<UE::MovieScene::TAdd<FMovieSceneBlendChannelID>_> * __thiscall
UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int>_>::
Add<FMovieSceneBlendChannelID,FMovieSceneBlendChannelID_&>
          (TEntityBuilderImpl<TIntegerSequence<int>_> *this,
          TEntityBuilder<UE::MovieScene::TAdd<FMovieSceneBlendChannelID>_> *__return_storage_ptr__,
          TComponentTypeID<FMovieSceneBlendChannelID> param_1,FMovieSceneBlendChannelID *param_2)

{
  FMovieSceneBlenderSystemID FVar1;
  undefined1 uVar2;
  ushort uVar3;
  
  FVar1.Value = (param_2->SystemID).Value;
  uVar2 = param_2->field_0x1;
  uVar3 = param_2->ChannelID;
  *(TComponentTypeID<FMovieSceneBlendChannelID> *)&__return_storage_ptr__->field_0x8 = param_1;
  __return_storage_ptr__->field_0xe = 1;
  __return_storage_ptr__->field_0xa = FVar1.Value;
  __return_storage_ptr__->field_0xb = uVar2;
  *(ushort *)&__return_storage_ptr__->field_0xc = uVar3;
  *(undefined ***)__return_storage_ptr__ =
       &___7__TEntityBuilder_U__TAdd_UFMovieSceneBlendChannelID___MovieScene_UE___MovieScene_UE__6B_
  ;
  __return_storage_ptr__->field_0x10 = 0;
  return __return_storage_ptr__;
}

// Add<UE::MovieScene::FSourceBoolChannel,FMovieSceneBoolChannel_const_*> @ 14a389a10

TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>_>
* __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>_>
::Add<UE::MovieScene::FSourceBoolChannel,FMovieSceneBoolChannel_const_*>
          (TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>_>
           *this,TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>_>
                 *__return_storage_ptr__,
          TComponentTypeID<UE::MovieScene::FSourceBoolChannel> param_1,
          FMovieSceneBoolChannel **param_2)

{
  bool bVar1;
  char cVar2;
  FMovieSceneBoolChannel *pFVar3;
  
  pFVar3 = *param_2;
  bVar1 = this->bAddMutualComponents;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01__U__TAdd_UFControlRigSourceData_MovieScene_UE___MovieScene_UE__U__TAdd_VFName___34_U__TAdd_UFSourceBoolChannel_MovieScene_UE___34__MovieScene_UE__6B_
  ;
  *(undefined2 *)&__return_storage_ptr__->field_0x8 = *(undefined2 *)&this->Payload;
  __return_storage_ptr__->field_0x18 = 0;
  cVar2 = (this->Payload).field_0x10;
  __return_storage_ptr__->field_0x18 = cVar2;
  if (cVar2 != '\0') {
    *(undefined8 *)&__return_storage_ptr__->field_0x10 = *(undefined8 *)&(this->Payload).field_0x8;
  }
  *(undefined2 *)&__return_storage_ptr__->field_0x20 = *(undefined2 *)&(this->Payload).field_0x18;
  *(undefined4 *)&__return_storage_ptr__->field_0x24 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  if (*(int *)&(this->Payload).field_0x1c != -1) {
    *(undefined8 *)&__return_storage_ptr__->field_0x24 = *(undefined8 *)&(this->Payload).field_0x1c;
  }
  *(TComponentTypeID<UE::MovieScene::FSourceBoolChannel> *)&__return_storage_ptr__->field_0x30 =
       param_1;
  __return_storage_ptr__->field_0x40 = 1;
  *(FMovieSceneBoolChannel **)&__return_storage_ptr__->field_0x38 = pFVar3;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilder_U__TAdd_UFControlRigSourceData_MovieScene_UE___MovieScene_UE__U__TAdd_VFName___23_U__TAdd_UFSourceBoolChannel_MovieScene_UE___23__MovieScene_UE__6B_
  ;
  __return_storage_ptr__->field_0x48 = bVar1;
  return __return_storage_ptr__;
}

// Add<UE::MovieScene::FSourceByteChannel,FMovieSceneByteChannel_const_*> @ 14a389a90

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceByteChannel>_>
* __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
::Add<UE::MovieScene::FSourceByteChannel,FMovieSceneByteChannel_const_*>
          (TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
           *this,TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceByteChannel>_>
                 *__return_storage_ptr__,
          TComponentTypeID<UE::MovieScene::FSourceByteChannel> param_1,
          FMovieSceneByteChannel **param_2)

{
  TComponentTypeID<UE::MovieScene::FSourceByteChannel> local_28;
  FSourceByteChannel local_20;
  bool local_18;
  
  local_20.Source = *param_2;
  local_18 = true;
  local_28 = param_1;
  TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceByteChannel>_>
  ::
  TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceByteChannel>_>
            ((TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceByteChannel>_>
              *)__return_storage_ptr__,(TAdd<UE::MovieScene::FControlRigSourceData> *)&this->Payload
             ,(TAdd<FName> *)&(this->Payload).field_0x18,
             (TAdd<UE::MovieScene::FControlRigSourceData> *)&(this->Payload).field_0x28,
             (FAdd *)&(this->Payload).field_0x40,(FAdd *)&(this->Payload).field_0x42,
             (TAdd<UE::MovieScene::FSourceByteChannel> *)&local_28,this->bAddMutualComponents);
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilder_U__TAdd_UFControlRigSourceData_MovieScene_UE___MovieScene_UE__U__TAdd_VFName___23_U123_UFAdd_23_U523_U__TAdd_UFSourceByteChannel_MovieScene_UE___23__MovieScene_UE__6B_
  ;
  return __return_storage_ptr__;
}

// Add<UE::MovieScene::FSourceFloatChannel,FMovieSceneFloatChannel_const_*> @ 14a389b00

TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>_>
* __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
::Add<UE::MovieScene::FSourceFloatChannel,FMovieSceneFloatChannel_const_*>
          (TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
           *this,TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>_>
                 *__return_storage_ptr__,
          TComponentTypeID<UE::MovieScene::FSourceFloatChannel> param_1,
          FMovieSceneFloatChannel **param_2)

{
  bool bVar1;
  char cVar2;
  FMovieSceneFloatChannel *pFVar3;
  
  pFVar3 = *param_2;
  bVar1 = this->bAddMutualComponents;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02_03__U__TAdd_UFControlRigSourceData_MovieScene_UE___MovieScene_UE__U__TAdd_VFName___34_UFAdd_34_U634_U__TAdd_UFSourceFloatChannel_MovieScene_UE___34__MovieScene_UE__6B_
  ;
  *(undefined2 *)&__return_storage_ptr__->field_0x8 = *(undefined2 *)&this->Payload;
  __return_storage_ptr__->field_0x18 = 0;
  cVar2 = (this->Payload).field_0x10;
  __return_storage_ptr__->field_0x18 = cVar2;
  if (cVar2 != '\0') {
    *(undefined8 *)&__return_storage_ptr__->field_0x10 = *(undefined8 *)&(this->Payload).field_0x8;
  }
  *(undefined2 *)&__return_storage_ptr__->field_0x20 = *(undefined2 *)&(this->Payload).field_0x18;
  *(undefined4 *)&__return_storage_ptr__->field_0x24 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  if (*(int *)&(this->Payload).field_0x1c != -1) {
    *(undefined8 *)&__return_storage_ptr__->field_0x24 = *(undefined8 *)&(this->Payload).field_0x1c;
  }
  *(undefined2 *)&__return_storage_ptr__->field_0x2c = *(undefined2 *)&(this->Payload).field_0x24;
  *(undefined2 *)&__return_storage_ptr__->field_0x2e = *(undefined2 *)&(this->Payload).field_0x26;
  *(TComponentTypeID<UE::MovieScene::FSourceFloatChannel> *)&__return_storage_ptr__->field_0x30 =
       param_1;
  __return_storage_ptr__->field_0x40 = 1;
  *(FMovieSceneFloatChannel **)&__return_storage_ptr__->field_0x38 = pFVar3;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilder_U__TAdd_UFControlRigSourceData_MovieScene_UE___MovieScene_UE__U__TAdd_VFName___23_UFAdd_23_U523_U__TAdd_UFSourceFloatChannel_MovieScene_UE___23__MovieScene_UE__6B_
  ;
  __return_storage_ptr__->field_0x48 = bVar1;
  return __return_storage_ptr__;
}

// Add<UE::MovieScene::FSourceIntegerChannel,FMovieSceneIntegerChannel_const_*> @ 14a389b90

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceIntegerChannel>_>
* __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
::Add<UE::MovieScene::FSourceIntegerChannel,FMovieSceneIntegerChannel_const_*>
          (TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
           *this,TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceIntegerChannel>_>
                 *__return_storage_ptr__,
          TComponentTypeID<UE::MovieScene::FSourceIntegerChannel> param_1,
          FMovieSceneIntegerChannel **param_2)

{
  TComponentTypeID<UE::MovieScene::FSourceIntegerChannel> local_28;
  FSourceIntegerChannel local_20;
  bool local_18;
  
  local_20.Source = *param_2;
  local_18 = true;
  local_28 = param_1;
  TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceIntegerChannel>_>
  ::
  TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceIntegerChannel>_>
            ((TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceIntegerChannel>_>
              *)__return_storage_ptr__,(TAdd<UE::MovieScene::FControlRigSourceData> *)&this->Payload
             ,(TAdd<FName> *)&(this->Payload).field_0x18,(FAdd *)&(this->Payload).field_0x24,
             (FAdd *)&(this->Payload).field_0x26,
             (TAdd<UE::MovieScene::FSourceIntegerChannel> *)&local_28,this->bAddMutualComponents);
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilder_U__TAdd_UFControlRigSourceData_MovieScene_UE___MovieScene_UE__U__TAdd_VFName___23_UFAdd_23_U523_U__TAdd_UFSourceIntegerChannel_MovieScene_UE___23__MovieScene_UE__6B_
  ;
  return __return_storage_ptr__;
}

// Add<FName,FName_const_&> @ 14a38a050

TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>_>
* __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>_>
::Add<FName,FName_const_&>
          (TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>_>
           *this,TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>_>
                 *__return_storage_ptr__,TComponentTypeID<FName> param_1,FName *param_2)

{
  char cVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>_>
  *pTVar5;
  
  FVar2 = *param_2;
  if (FVar2.ComparisonIndex.Value.Value == 0xffffffff) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>_>
                *)(*pcVar3)();
      return pTVar5;
    }
  }
  bVar4 = this->bAddMutualComponents;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00__U__TAdd_UFControlRigSourceData_MovieScene_UE___MovieScene_UE__U__TAdd_VFName___34__MovieScene_UE__6B_
  ;
  *(undefined2 *)&__return_storage_ptr__->field_0x8 = *(undefined2 *)&this->Payload;
  __return_storage_ptr__->field_0x18 = 0;
  cVar1 = (this->Payload).field_0x10;
  __return_storage_ptr__->field_0x18 = cVar1;
  if (cVar1 != '\0') {
    *(undefined8 *)&__return_storage_ptr__->field_0x10 = *(undefined8 *)&(this->Payload).field_0x8;
  }
  *(TComponentTypeID<FName> *)&__return_storage_ptr__->field_0x20 = param_1;
  *(undefined4 *)&__return_storage_ptr__->field_0x24 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  if (FVar2.ComparisonIndex.Value.Value != 0xffffffff) {
    *(uint *)&__return_storage_ptr__->field_0x24 = FVar2.ComparisonIndex.Value;
    *(uint *)&__return_storage_ptr__->field_0x28 = FVar2.Number;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilder_U__TAdd_UFControlRigSourceData_MovieScene_UE___MovieScene_UE__U__TAdd_VFName___23__MovieScene_UE__6B_
  ;
  __return_storage_ptr__->field_0x30 = bVar4;
  return __return_storage_ptr__;
}

// AddConditional<UE::MovieScene::FSourceFloatChannel,FMovieSceneFloatChannel_*> @ 14a38b1b0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
* __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11,12>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
::AddConditional<UE::MovieScene::FSourceFloatChannel,FMovieSceneFloatChannel_*>
          (TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11,12>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
           *this,TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
                 *__return_storage_ptr__,
          TComponentTypeID<UE::MovieScene::FSourceFloatChannel> param_1,
          FMovieSceneFloatChannel **param_2,bool param_3)

{
  bool bVar1;
  TComponentTypeID<UE::MovieScene::FSourceFloatChannel> local_48;
  bool local_46;
  FSourceFloatChannel local_40;
  bool local_38;
  
  bVar1 = this->bAddMutualComponents;
  local_46 = param_3;
  local_40.Source = *param_2;
  local_38 = true;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02_03_04_05_06_07_08_09_0L__0M__0N___U__TAdd_UFControlRigSourceData_MovieScene_UE___MovieScene_UE__U__TAdd_VFName___34_UFAdd_34_U634_U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___34_U734_U734_U734_U734_U734_U734_U734_U734_U734__MovieScene_UE__6B_
  ;
  local_48 = param_1;
  Core::Private::Tuple::
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11,12,13>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
  ::
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11,12,13>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_><UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
            ((TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11,12,13>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
              *)&__return_storage_ptr__->field_0x8,ForwardingConstructor,
             (TAdd<UE::MovieScene::FControlRigSourceData> *)&this->Payload,
             (TAdd<FName> *)&(this->Payload).field_0x18,(FAdd *)&(this->Payload).field_0x24,
             (FAdd *)&(this->Payload).field_0x26,
             (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&(this->Payload).field_0x28,
             (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&(this->Payload).field_0x40,
             (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&(this->Payload).field_0x58,
             (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&(this->Payload).field_0x70,
             (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&(this->Payload).field_0x88,
             (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&(this->Payload).field_0xa0,
             (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&(this->Payload).field_0xb8,
             (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&(this->Payload).field_0xd0,
             (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&(this->Payload).field_0xe8,
             (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&local_48);
  __return_storage_ptr__->field_0x120 = bVar1;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilder_U__TAdd_UFControlRigSourceData_MovieScene_UE___MovieScene_UE__U__TAdd_VFName___23_UFAdd_23_U523_U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___23_U623_U623_U623_U623_U623_U623_U623_U623_U623__MovieScene_UE__6B_
  ;
  return __return_storage_ptr__;
}

// AddConditional<UE::MovieScene::FSourceFloatChannel,FMovieSceneFloatChannel_*> @ 14a38b2f0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
* __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
::AddConditional<UE::MovieScene::FSourceFloatChannel,FMovieSceneFloatChannel_*>
          (TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
           *this,TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
                 *__return_storage_ptr__,
          TComponentTypeID<UE::MovieScene::FSourceFloatChannel> param_1,
          FMovieSceneFloatChannel **param_2,bool param_3)

{
  TComponentTypeID<UE::MovieScene::FSourceFloatChannel> local_28;
  bool local_26;
  FSourceFloatChannel local_20;
  bool local_18;
  
  local_26 = param_3;
  local_20.Source = *param_2;
  local_18 = true;
  local_28 = param_1;
  TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
  ::
  TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_><UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,bool_&>
            (__return_storage_ptr__,(TAdd<UE::MovieScene::FControlRigSourceData> *)&this->Payload,
             (TAdd<FName> *)&(this->Payload).field_0x18,(FAdd *)&(this->Payload).field_0x24,
             (FAdd *)&(this->Payload).field_0x26,
             (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&(this->Payload).field_0x28,
             (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&(this->Payload).field_0x40,
             (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&(this->Payload).field_0x58,
             (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&local_28,
             &this->bAddMutualComponents);
  return __return_storage_ptr__;
}

// AddConditional<UE::MovieScene::FSourceFloatChannel,FMovieSceneFloatChannel_*> @ 14a38b390

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
* __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>
::AddConditional<UE::MovieScene::FSourceFloatChannel,FMovieSceneFloatChannel_*>
          (TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>
           *this,TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
                 *__return_storage_ptr__,
          TComponentTypeID<UE::MovieScene::FSourceFloatChannel> param_1,
          FMovieSceneFloatChannel **param_2,bool param_3)

{
  TComponentTypeID<UE::MovieScene::FSourceFloatChannel> local_28;
  bool local_26;
  FSourceFloatChannel local_20;
  bool local_18;
  
  local_26 = param_3;
  local_20.Source = *param_2;
  local_18 = true;
  local_28 = param_1;
  TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
  ::
  TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
            ((TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
              *)__return_storage_ptr__,(TAdd<UE::MovieScene::FControlRigSourceData> *)&this->Payload
             ,(TAdd<FName> *)&(this->Payload).field_0x18,(FAdd *)&(this->Payload).field_0x24,
             (FAdd *)&(this->Payload).field_0x26,
             (TAdd<UE::MovieScene::FSourceFloatChannel> *)&(this->Payload).field_0x28,
             (FAddConditional *)&(this->Payload).field_0x40,
             (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&local_28,
             this->bAddMutualComponents);
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilder_U__TAdd_UFControlRigSourceData_MovieScene_UE___MovieScene_UE__U__TAdd_VFName___23_UFAdd_23_U523_U__TAdd_UFSourceFloatChannel_MovieScene_UE___23_UFAddConditional_23_U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___23__MovieScene_UE__6B_
  ;
  return __return_storage_ptr__;
}

// AddConditional<UE::MovieScene::FSourceFloatChannel,FMovieSceneFloatChannel_*> @ 14a38b420

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
* __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
::AddConditional<UE::MovieScene::FSourceFloatChannel,FMovieSceneFloatChannel_*>
          (TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
           *this,TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
                 *__return_storage_ptr__,
          TComponentTypeID<UE::MovieScene::FSourceFloatChannel> param_1,
          FMovieSceneFloatChannel **param_2,bool param_3)

{
  TComponentTypeID<UE::MovieScene::FSourceFloatChannel> local_28;
  bool local_26;
  FSourceFloatChannel local_20;
  bool local_18;
  
  local_26 = param_3;
  local_20.Source = *param_2;
  local_18 = true;
  local_28 = param_1;
  TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
  ::
  TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_><UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,bool_&>
            (__return_storage_ptr__,(TAdd<UE::MovieScene::FControlRigSourceData> *)&this->Payload,
             (TAdd<FName> *)&(this->Payload).field_0x18,(FAdd *)&(this->Payload).field_0x24,
             (FAdd *)&(this->Payload).field_0x26,
             (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&(this->Payload).field_0x28,
             (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&(this->Payload).field_0x40,
             (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&local_28,
             &this->bAddMutualComponents);
  return __return_storage_ptr__;
}

// AddConditional<UE::MovieScene::FSourceFloatChannel,FMovieSceneFloatChannel_*> @ 14a38b4b0

TEntityBuilder<UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<UE::MovieScene::FBaseControlRigEvalData>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
* __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<UE::MovieScene::FBaseControlRigEvalData>_>
::AddConditional<UE::MovieScene::FSourceFloatChannel,FMovieSceneFloatChannel_*>
          (TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<UE::MovieScene::FBaseControlRigEvalData>_>
           *this,TEntityBuilder<UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<UE::MovieScene::FBaseControlRigEvalData>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
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
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02_03__U__TAdd_UFGuid___MovieScene_UE__U__TAdd_P6APEAVUObject__PEAV1__Z_34_U__TAdd_UFControlRigSourceData_MovieScene_UE___34_U__TAdd_UFBaseControlRigEvalData_MovieScene_UE___34_U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___34__MovieScene_UE__6B_
  ;
  *(undefined2 *)&__return_storage_ptr__->field_0x8 = *(undefined2 *)&this->Payload;
  __return_storage_ptr__->field_0x1c = 0;
  cVar2 = (this->Payload).field_0x14;
  __return_storage_ptr__->field_0x1c = cVar2;
  if (cVar2 != '\0') {
    uVar4 = *(undefined8 *)&(this->Payload).field_0xc;
    *(undefined8 *)&__return_storage_ptr__->field_0xc = *(undefined8 *)&(this->Payload).field_0x4;
    *(undefined8 *)&__return_storage_ptr__->field_0x14 = uVar4;
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
  *(undefined2 *)&__return_storage_ptr__->field_0x50 = *(undefined2 *)&(this->Payload).field_0x48;
  __return_storage_ptr__->field_0x70 = 0;
  cVar2 = (this->Payload).field_0x68;
  __return_storage_ptr__->field_0x70 = cVar2;
  if (cVar2 != '\0') {
    uVar4 = *(undefined8 *)&(this->Payload).field_0x58;
    *(undefined8 *)&__return_storage_ptr__->field_0x58 = *(undefined8 *)&(this->Payload).field_0x50;
    *(undefined8 *)&__return_storage_ptr__->field_0x60 = uVar4;
    *(undefined8 *)&__return_storage_ptr__->field_0x68 = *(undefined8 *)&(this->Payload).field_0x60;
  }
  *(undefined4 *)&__return_storage_ptr__->field_0x78 = local_28;
  __return_storage_ptr__->field_0x88 = 1;
  *(FMovieSceneFloatChannel **)&__return_storage_ptr__->field_0x80 = pFVar3;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilder_U__TAdd_UFGuid___MovieScene_UE__U__TAdd_P6APEAVUObject__PEAV1__Z_23_U__TAdd_UFControlRigSourceData_MovieScene_UE___23_U__TAdd_UFBaseControlRigEvalData_MovieScene_UE___23_U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___23__MovieScene_UE__6B_
  ;
  __return_storage_ptr__->field_0x90 = bVar1;
  return __return_storage_ptr__;
}

// AddConditional<UE::MovieScene::FSourceFloatChannel,FMovieSceneFloatChannel_const_*> @ 14a38b590

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
* __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
::AddConditional<UE::MovieScene::FSourceFloatChannel,FMovieSceneFloatChannel_const_*>
          (TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
           *this,TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
                 *__return_storage_ptr__,
          TComponentTypeID<UE::MovieScene::FSourceFloatChannel> param_1,
          FMovieSceneFloatChannel **param_2,bool param_3)

{
  bool bVar1;
  TComponentTypeID<UE::MovieScene::FSourceFloatChannel> local_48;
  bool local_46;
  FSourceFloatChannel local_40;
  bool local_38;
  
  bVar1 = this->bAddMutualComponents;
  local_46 = param_3;
  local_40.Source = *param_2;
  local_38 = true;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02_03_04_05_06_07_08_09_0L__0M___U__TAdd_UFControlRigSourceData_MovieScene_UE___MovieScene_UE__U__TAdd_VFName___34_UFAdd_34_U634_U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___34_U734_U734_U734_U734_U734_U734_U734_U734__MovieScene_UE__6B_
  ;
  local_48 = param_1;
  Core::Private::Tuple::
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11,12>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
  ::
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11,12>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_><UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
            ((TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11,12>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
              *)&__return_storage_ptr__->field_0x8,ForwardingConstructor,
             (TAdd<UE::MovieScene::FControlRigSourceData> *)&this->Payload,
             (TAdd<FName> *)&(this->Payload).field_0x18,(FAdd *)&(this->Payload).field_0x24,
             (FAdd *)&(this->Payload).field_0x26,
             (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&(this->Payload).field_0x28,
             (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&(this->Payload).field_0x40,
             (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&(this->Payload).field_0x58,
             (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&(this->Payload).field_0x70,
             (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&(this->Payload).field_0x88,
             (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&(this->Payload).field_0xa0,
             (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&(this->Payload).field_0xb8,
             (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&(this->Payload).field_0xd0,
             (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&local_48);
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilder_U__TAdd_UFControlRigSourceData_MovieScene_UE___MovieScene_UE__U__TAdd_VFName___23_UFAdd_23_U523_U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___23_U623_U623_U623_U623_U623_U623_U623_U623__MovieScene_UE__6B_
  ;
  __return_storage_ptr__->field_0x108 = bVar1;
  return __return_storage_ptr__;
}

// AddConditional<UE::MovieScene::FSourceFloatChannel,FMovieSceneFloatChannel_const_*> @ 14a38b6c0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
* __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
::AddConditional<UE::MovieScene::FSourceFloatChannel,FMovieSceneFloatChannel_const_*>
          (TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
           *this,TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
                 *__return_storage_ptr__,
          TComponentTypeID<UE::MovieScene::FSourceFloatChannel> param_1,
          FMovieSceneFloatChannel **param_2,bool param_3)

{
  bool bVar1;
  TComponentTypeID<UE::MovieScene::FSourceFloatChannel> local_48;
  bool local_46;
  FSourceFloatChannel local_40;
  bool local_38;
  
  bVar1 = this->bAddMutualComponents;
  local_46 = param_3;
  local_40.Source = *param_2;
  local_38 = true;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02_03_04_05_06_07_08_09_0L___U__TAdd_UFControlRigSourceData_MovieScene_UE___MovieScene_UE__U__TAdd_VFName___34_UFAdd_34_U634_U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___34_U734_U734_U734_U734_U734_U734_U734__MovieScene_UE__6B_
  ;
  local_48 = param_1;
  Core::Private::Tuple::
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
  ::
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_><UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
            ((TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
              *)&__return_storage_ptr__->field_0x8,ForwardingConstructor,
             (TAdd<UE::MovieScene::FControlRigSourceData> *)&this->Payload,
             (TAdd<FName> *)&(this->Payload).field_0x18,(FAdd *)&(this->Payload).field_0x24,
             (FAdd *)&(this->Payload).field_0x26,
             (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&(this->Payload).field_0x28,
             (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&(this->Payload).field_0x40,
             (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&(this->Payload).field_0x58,
             (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&(this->Payload).field_0x70,
             (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&(this->Payload).field_0x88,
             (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&(this->Payload).field_0xa0,
             (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&(this->Payload).field_0xb8,
             (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&local_48);
  __return_storage_ptr__->field_0xf0 = bVar1;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilder_U__TAdd_UFControlRigSourceData_MovieScene_UE___MovieScene_UE__U__TAdd_VFName___23_UFAdd_23_U523_U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___23_U623_U623_U623_U623_U623_U623_U623__MovieScene_UE__6B_
  ;
  return __return_storage_ptr__;
}

// AddConditional<UE::MovieScene::FSourceFloatChannel,FMovieSceneFloatChannel_const_*> @ 14a38b7d0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
* __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
::AddConditional<UE::MovieScene::FSourceFloatChannel,FMovieSceneFloatChannel_const_*>
          (TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
           *this,TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
                 *__return_storage_ptr__,
          TComponentTypeID<UE::MovieScene::FSourceFloatChannel> param_1,
          FMovieSceneFloatChannel **param_2,bool param_3)

{
  bool bVar1;
  TComponentTypeID<UE::MovieScene::FSourceFloatChannel> local_38;
  bool local_36;
  FSourceFloatChannel local_30;
  bool local_28;
  
  bVar1 = this->bAddMutualComponents;
  local_36 = param_3;
  local_30.Source = *param_2;
  local_28 = true;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02_03_04_05_06_07_08_09__U__TAdd_UFControlRigSourceData_MovieScene_UE___MovieScene_UE__U__TAdd_VFName___34_UFAdd_34_U634_U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___34_U734_U734_U734_U734_U734_U734__MovieScene_UE__6B_
  ;
  local_38 = param_1;
  Core::Private::Tuple::
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
  ::
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_><UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
            ((TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
              *)&__return_storage_ptr__->field_0x8,ForwardingConstructor,
             (TAdd<UE::MovieScene::FControlRigSourceData> *)&this->Payload,
             (TAdd<FName> *)&(this->Payload).field_0x18,(FAdd *)&(this->Payload).field_0x24,
             (FAdd *)&(this->Payload).field_0x26,
             (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&(this->Payload).field_0x28,
             (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&(this->Payload).field_0x40,
             (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&(this->Payload).field_0x58,
             (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&(this->Payload).field_0x70,
             (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&(this->Payload).field_0x88,
             (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&(this->Payload).field_0xa0,
             (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&local_38);
  __return_storage_ptr__->field_0xd8 = bVar1;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilder_U__TAdd_UFControlRigSourceData_MovieScene_UE___MovieScene_UE__U__TAdd_VFName___23_UFAdd_23_U523_U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___23_U623_U623_U623_U623_U623_U623__MovieScene_UE__6B_
  ;
  return __return_storage_ptr__;
}

// AddConditional<UE::MovieScene::FSourceFloatChannel,FMovieSceneFloatChannel_const_*> @ 14a38b8d0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
* __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
::AddConditional<UE::MovieScene::FSourceFloatChannel,FMovieSceneFloatChannel_const_*>
          (TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
           *this,TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
                 *__return_storage_ptr__,
          TComponentTypeID<UE::MovieScene::FSourceFloatChannel> param_1,
          FMovieSceneFloatChannel **param_2,bool param_3)

{
  bool bVar1;
  TComponentTypeID<UE::MovieScene::FSourceFloatChannel> local_38;
  bool local_36;
  FSourceFloatChannel local_30;
  bool local_28;
  
  bVar1 = this->bAddMutualComponents;
  local_36 = param_3;
  local_30.Source = *param_2;
  local_28 = true;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02_03_04_05_06_07_08__U__TAdd_UFControlRigSourceData_MovieScene_UE___MovieScene_UE__U__TAdd_VFName___34_UFAdd_34_U634_U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___34_U734_U734_U734_U734_U734__MovieScene_UE__6B_
  ;
  local_38 = param_1;
  Core::Private::Tuple::
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
  ::
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_><UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
            ((TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
              *)&__return_storage_ptr__->field_0x8,ForwardingConstructor,
             (TAdd<UE::MovieScene::FControlRigSourceData> *)&this->Payload,
             (TAdd<FName> *)&(this->Payload).field_0x18,(FAdd *)&(this->Payload).field_0x24,
             (FAdd *)&(this->Payload).field_0x26,
             (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&(this->Payload).field_0x28,
             (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&(this->Payload).field_0x40,
             (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&(this->Payload).field_0x58,
             (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&(this->Payload).field_0x70,
             (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&(this->Payload).field_0x88,
             (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&local_38);
  __return_storage_ptr__->field_0xc0 = bVar1;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilder_U__TAdd_UFControlRigSourceData_MovieScene_UE___MovieScene_UE__U__TAdd_VFName___23_UFAdd_23_U523_U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___23_U623_U623_U623_U623_U623__MovieScene_UE__6B_
  ;
  return __return_storage_ptr__;
}

// AddConditional<UE::MovieScene::FSourceFloatChannel,FMovieSceneFloatChannel_const_*> @ 14a38b9c0

TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
* __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
::AddConditional<UE::MovieScene::FSourceFloatChannel,FMovieSceneFloatChannel_const_*>
          (TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
           *this,TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
                 *__return_storage_ptr__,
          TComponentTypeID<UE::MovieScene::FSourceFloatChannel> param_1,
          FMovieSceneFloatChannel **param_2,bool param_3)

{
  bool bVar1;
  char cVar2;
  FMovieSceneFloatChannel *pFVar3;
  undefined4 local_28;
  
  local_28 = CONCAT22(CONCAT11(local_28._3_1_,param_3),param_1);
  pFVar3 = *param_2;
  bVar1 = this->bAddMutualComponents;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02_03_04_05_06_07__U__TAdd_UFControlRigSourceData_MovieScene_UE___MovieScene_UE__U__TAdd_VFName___34_UFAdd_34_U634_U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___34_U734_U734_U734_U734__MovieScene_UE__6B_
  ;
  *(undefined2 *)&__return_storage_ptr__->field_0x8 = *(undefined2 *)&this->Payload;
  __return_storage_ptr__->field_0x18 = 0;
  cVar2 = (this->Payload).field_0x10;
  __return_storage_ptr__->field_0x18 = cVar2;
  if (cVar2 != '\0') {
    *(undefined8 *)&__return_storage_ptr__->field_0x10 = *(undefined8 *)&(this->Payload).field_0x8;
  }
  *(undefined2 *)&__return_storage_ptr__->field_0x20 = *(undefined2 *)&(this->Payload).field_0x18;
  *(undefined4 *)&__return_storage_ptr__->field_0x24 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  if (*(int *)&(this->Payload).field_0x1c != -1) {
    *(undefined8 *)&__return_storage_ptr__->field_0x24 = *(undefined8 *)&(this->Payload).field_0x1c;
  }
  *(undefined2 *)&__return_storage_ptr__->field_0x2c = *(undefined2 *)&(this->Payload).field_0x24;
  *(undefined2 *)&__return_storage_ptr__->field_0x2e = *(undefined2 *)&(this->Payload).field_0x26;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = *(undefined4 *)&(this->Payload).field_0x28;
  __return_storage_ptr__->field_0x40 = 0;
  cVar2 = (this->Payload).field_0x38;
  __return_storage_ptr__->field_0x40 = cVar2;
  if (cVar2 != '\0') {
    *(undefined8 *)&__return_storage_ptr__->field_0x38 = *(undefined8 *)&(this->Payload).field_0x30;
  }
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = *(undefined4 *)&(this->Payload).field_0x40;
  __return_storage_ptr__->field_0x58 = 0;
  cVar2 = (this->Payload).field_0x50;
  __return_storage_ptr__->field_0x58 = cVar2;
  if (cVar2 != '\0') {
    *(undefined8 *)&__return_storage_ptr__->field_0x50 = *(undefined8 *)&(this->Payload).field_0x48;
  }
  *(undefined4 *)&__return_storage_ptr__->field_0x60 = *(undefined4 *)&(this->Payload).field_0x58;
  __return_storage_ptr__->field_0x70 = 0;
  cVar2 = (this->Payload).field_0x68;
  __return_storage_ptr__->field_0x70 = cVar2;
  if (cVar2 != '\0') {
    *(undefined8 *)&__return_storage_ptr__->field_0x68 = *(undefined8 *)&(this->Payload).field_0x60;
  }
  *(undefined4 *)&__return_storage_ptr__->field_0x78 = *(undefined4 *)&(this->Payload).field_0x70;
  __return_storage_ptr__->field_0x88 = 0;
  cVar2 = (this->Payload).field_0x80;
  __return_storage_ptr__->field_0x88 = cVar2;
  if (cVar2 != '\0') {
    *(undefined8 *)&__return_storage_ptr__->field_0x80 = *(undefined8 *)&(this->Payload).field_0x78;
  }
  *(undefined4 *)&__return_storage_ptr__->field_0x90 = local_28;
  __return_storage_ptr__->field_0xa0 = 1;
  *(FMovieSceneFloatChannel **)&__return_storage_ptr__->field_0x98 = pFVar3;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilder_U__TAdd_UFControlRigSourceData_MovieScene_UE___MovieScene_UE__U__TAdd_VFName___23_UFAdd_23_U523_U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___23_U623_U623_U623_U623__MovieScene_UE__6B_
  ;
  __return_storage_ptr__->field_0xa8 = bVar1;
  return __return_storage_ptr__;
}

// AddConditional<UE::MovieScene::FSourceFloatChannel,FMovieSceneFloatChannel_const_*> @ 14a38bb00

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
* __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
::AddConditional<UE::MovieScene::FSourceFloatChannel,FMovieSceneFloatChannel_const_*>
          (TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
           *this,TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
                 *__return_storage_ptr__,
          TComponentTypeID<UE::MovieScene::FSourceFloatChannel> param_1,
          FMovieSceneFloatChannel **param_2,bool param_3)

{
  TComponentTypeID<UE::MovieScene::FSourceFloatChannel> local_28;
  bool local_26;
  FSourceFloatChannel local_20;
  bool local_18;
  
  local_26 = param_3;
  local_20.Source = *param_2;
  local_18 = true;
  local_28 = param_1;
  TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
  ::
  TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_><UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,bool_&>
            (__return_storage_ptr__,(TAdd<UE::MovieScene::FControlRigSourceData> *)&this->Payload,
             (TAdd<FName> *)&(this->Payload).field_0x18,(FAdd *)&(this->Payload).field_0x24,
             (FAdd *)&(this->Payload).field_0x26,
             (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&(this->Payload).field_0x28,
             (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&(this->Payload).field_0x40,
             (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&(this->Payload).field_0x58,
             (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&local_28,
             &this->bAddMutualComponents);
  return __return_storage_ptr__;
}

// AddConditional<UE::MovieScene::FSourceFloatChannel,FMovieSceneFloatChannel_const_*> @ 14a38bba0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
* __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
::AddConditional<UE::MovieScene::FSourceFloatChannel,FMovieSceneFloatChannel_const_*>
          (TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
           *this,TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
                 *__return_storage_ptr__,
          TComponentTypeID<UE::MovieScene::FSourceFloatChannel> param_1,
          FMovieSceneFloatChannel **param_2,bool param_3)

{
  TComponentTypeID<UE::MovieScene::FSourceFloatChannel> local_28;
  bool local_26;
  FSourceFloatChannel local_20;
  bool local_18;
  
  local_26 = param_3;
  local_20.Source = *param_2;
  local_18 = true;
  local_28 = param_1;
  TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
  ::
  TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_><UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,bool_&>
            (__return_storage_ptr__,(TAdd<UE::MovieScene::FControlRigSourceData> *)&this->Payload,
             (TAdd<FName> *)&(this->Payload).field_0x18,(FAdd *)&(this->Payload).field_0x24,
             (FAdd *)&(this->Payload).field_0x26,
             (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&(this->Payload).field_0x28,
             (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&(this->Payload).field_0x40,
             (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&local_28,
             &this->bAddMutualComponents);
  return __return_storage_ptr__;
}

// AddConditional<UE::MovieScene::FSourceFloatChannel,FMovieSceneFloatChannel_const_*> @ 14a38bc30

TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
* __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
::AddConditional<UE::MovieScene::FSourceFloatChannel,FMovieSceneFloatChannel_const_*>
          (TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
           *this,TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
                 *__return_storage_ptr__,
          TComponentTypeID<UE::MovieScene::FSourceFloatChannel> param_1,
          FMovieSceneFloatChannel **param_2,bool param_3)

{
  bool bVar1;
  char cVar2;
  FMovieSceneFloatChannel *pFVar3;
  undefined4 local_28;
  
  local_28 = CONCAT22(CONCAT11(local_28._3_1_,param_3),param_1);
  pFVar3 = *param_2;
  bVar1 = this->bAddMutualComponents;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02_03_04__U__TAdd_UFControlRigSourceData_MovieScene_UE___MovieScene_UE__U__TAdd_VFName___34_UFAdd_34_U634_U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___34_U734__MovieScene_UE__6B_
  ;
  *(undefined2 *)&__return_storage_ptr__->field_0x8 = *(undefined2 *)&this->Payload;
  __return_storage_ptr__->field_0x18 = 0;
  cVar2 = (this->Payload).field_0x10;
  __return_storage_ptr__->field_0x18 = cVar2;
  if (cVar2 != '\0') {
    *(undefined8 *)&__return_storage_ptr__->field_0x10 = *(undefined8 *)&(this->Payload).field_0x8;
  }
  *(undefined2 *)&__return_storage_ptr__->field_0x20 = *(undefined2 *)&(this->Payload).field_0x18;
  *(undefined4 *)&__return_storage_ptr__->field_0x24 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  if (*(int *)&(this->Payload).field_0x1c != -1) {
    *(undefined8 *)&__return_storage_ptr__->field_0x24 = *(undefined8 *)&(this->Payload).field_0x1c;
  }
  *(undefined2 *)&__return_storage_ptr__->field_0x2c = *(undefined2 *)&(this->Payload).field_0x24;
  *(undefined2 *)&__return_storage_ptr__->field_0x2e = *(undefined2 *)&(this->Payload).field_0x26;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = *(undefined4 *)&(this->Payload).field_0x28;
  __return_storage_ptr__->field_0x40 = 0;
  cVar2 = (this->Payload).field_0x38;
  __return_storage_ptr__->field_0x40 = cVar2;
  if (cVar2 != '\0') {
    *(undefined8 *)&__return_storage_ptr__->field_0x38 = *(undefined8 *)&(this->Payload).field_0x30;
  }
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = local_28;
  __return_storage_ptr__->field_0x58 = 1;
  *(FMovieSceneFloatChannel **)&__return_storage_ptr__->field_0x50 = pFVar3;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilder_U__TAdd_UFControlRigSourceData_MovieScene_UE___MovieScene_UE__U__TAdd_VFName___23_UFAdd_23_U523_U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___23_U623__MovieScene_UE__6B_
  ;
  __return_storage_ptr__->field_0x60 = bVar1;
  return __return_storage_ptr__;
}

// AddConditional<UE::MovieScene::FSourceFloatChannel,FMovieSceneFloatChannel_const_*> @ 14a38bcf0

TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
* __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
::AddConditional<UE::MovieScene::FSourceFloatChannel,FMovieSceneFloatChannel_const_*>
          (TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
           *this,TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
                 *__return_storage_ptr__,
          TComponentTypeID<UE::MovieScene::FSourceFloatChannel> param_1,
          FMovieSceneFloatChannel **param_2,bool param_3)

{
  bool bVar1;
  char cVar2;
  FMovieSceneFloatChannel *pFVar3;
  undefined4 local_28;
  
  local_28 = CONCAT22(CONCAT11(local_28._3_1_,param_3),param_1);
  pFVar3 = *param_2;
  bVar1 = this->bAddMutualComponents;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02_03__U__TAdd_UFControlRigSourceData_MovieScene_UE___MovieScene_UE__U__TAdd_VFName___34_UFAdd_34_U634_U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___34__MovieScene_UE__6B_
  ;
  *(undefined2 *)&__return_storage_ptr__->field_0x8 = *(undefined2 *)&this->Payload;
  __return_storage_ptr__->field_0x18 = 0;
  cVar2 = (this->Payload).field_0x10;
  __return_storage_ptr__->field_0x18 = cVar2;
  if (cVar2 != '\0') {
    *(undefined8 *)&__return_storage_ptr__->field_0x10 = *(undefined8 *)&(this->Payload).field_0x8;
  }
  *(undefined2 *)&__return_storage_ptr__->field_0x20 = *(undefined2 *)&(this->Payload).field_0x18;
  *(undefined4 *)&__return_storage_ptr__->field_0x24 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  if (*(int *)&(this->Payload).field_0x1c != -1) {
    *(undefined8 *)&__return_storage_ptr__->field_0x24 = *(undefined8 *)&(this->Payload).field_0x1c;
  }
  *(undefined2 *)&__return_storage_ptr__->field_0x2c = *(undefined2 *)&(this->Payload).field_0x24;
  *(undefined2 *)&__return_storage_ptr__->field_0x2e = *(undefined2 *)&(this->Payload).field_0x26;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = local_28;
  __return_storage_ptr__->field_0x40 = 1;
  *(FMovieSceneFloatChannel **)&__return_storage_ptr__->field_0x38 = pFVar3;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilder_U__TAdd_UFControlRigSourceData_MovieScene_UE___MovieScene_UE__U__TAdd_VFName___23_UFAdd_23_U523_U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___23__MovieScene_UE__6B_
  ;
  __return_storage_ptr__->field_0x48 = bVar1;
  return __return_storage_ptr__;
}

// TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional> @ 14a3b4b80

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>
* __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>
::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>
          (TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>
           *this,TAdd<UE::MovieScene::FControlRigSourceData> *param_1,TAdd<FName> *param_2,
          FAdd *param_3,FAdd *param_4,TAddConditional<UE::MovieScene::FSourceFloatChannel> *param_5,
          TAddConditional<UE::MovieScene::FSourceFloatChannel> *param_6,
          TAddConditional<UE::MovieScene::FSourceFloatChannel> *param_7,
          TAddConditional<UE::MovieScene::FSourceFloatChannel> *param_8,FAddConditional *param_9,
          bool param_10)

{
  bool bVar1;
  undefined1 uVar2;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02_03_04_05_06_07__U__TAdd_UFControlRigSourceData_MovieScene_UE___MovieScene_UE__U__TAdd_VFName___34_UFAdd_34_U634_U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___34_U734_U734_U734_UFAddConditional_34__MovieScene_UE__6B_
  ;
  *(short *)&this->Payload = (short)param_1->_padding_;
  (this->Payload).field_0x10 = 0;
  bVar1 = (param_1->Payload).bIsSet;
  (this->Payload).field_0x10 = bVar1;
  if (bVar1 != false) {
    *(UMovieSceneControlRigParameterTrack **)&(this->Payload).field_0x8 =
         (param_1->Payload).TypedValue.Track;
  }
  *(short *)&(this->Payload).field_0x18 = (short)param_2->_padding_;
  *(undefined4 *)&(this->Payload).field_0x1c = 0xffffffff;
  *(undefined4 *)&(this->Payload).field_0x20 = 0;
  if ((param_2->Payload).field0_0x0.TypedValue.ComparisonIndex.Value != 0xffffffff) {
    *(TOptional<FName>_u_0 *)&(this->Payload).field_0x1c = (param_2->Payload).field0_0x0;
  }
  *(ushort *)&(this->Payload).field_0x24 = (param_3->ComponentTypeID).Value;
  *(ushort *)&(this->Payload).field_0x26 = (param_4->ComponentTypeID).Value;
  *(int *)&(this->Payload).field_0x28 = (int)param_5->_padding_;
  (this->Payload).field_0x38 = 0;
  bVar1 = (param_5->Payload).bIsSet;
  (this->Payload).field_0x38 = bVar1;
  if (bVar1 != false) {
    *(FMovieSceneFloatChannel **)&(this->Payload).field_0x30 = (param_5->Payload).TypedValue.Source;
  }
  *(int *)&(this->Payload).field_0x40 = (int)param_6->_padding_;
  (this->Payload).field_0x50 = 0;
  bVar1 = (param_6->Payload).bIsSet;
  (this->Payload).field_0x50 = bVar1;
  if (bVar1 != false) {
    *(FMovieSceneFloatChannel **)&(this->Payload).field_0x48 = (param_6->Payload).TypedValue.Source;
  }
  *(int *)&(this->Payload).field_0x58 = (int)param_7->_padding_;
  (this->Payload).field_0x68 = 0;
  bVar1 = (param_7->Payload).bIsSet;
  (this->Payload).field_0x68 = bVar1;
  if (bVar1 != false) {
    *(FMovieSceneFloatChannel **)&(this->Payload).field_0x60 = (param_7->Payload).TypedValue.Source;
  }
  *(int *)&(this->Payload).field_0x70 = (int)param_8->_padding_;
  (this->Payload).field_0x80 = 0;
  bVar1 = (param_8->Payload).bIsSet;
  (this->Payload).field_0x80 = bVar1;
  if (bVar1 != false) {
    *(FMovieSceneFloatChannel **)&(this->Payload).field_0x78 = (param_8->Payload).TypedValue.Source;
  }
  bVar1 = param_9->bCondition;
  uVar2 = param_9->field_0x3;
  *(ushort *)&(this->Payload).field_0x88 = (param_9->ComponentTypeID).Value;
  (this->Payload).field_0x8a = bVar1;
  (this->Payload).field_0x8b = uVar2;
  this->bAddMutualComponents = param_10;
  return this;
}

// TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional> @ 14a3b4cb0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>
* __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>
::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>
          (TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>
           *this,TAdd<UE::MovieScene::FControlRigSourceData> *param_1,TAdd<FName> *param_2,
          FAdd *param_3,FAdd *param_4,TAddConditional<UE::MovieScene::FSourceFloatChannel> *param_5,
          TAddConditional<UE::MovieScene::FSourceFloatChannel> *param_6,
          TAddConditional<UE::MovieScene::FSourceFloatChannel> *param_7,FAddConditional *param_8,
          bool param_9)

{
  bool bVar1;
  undefined1 uVar2;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02_03_04_05_06__U__TAdd_UFControlRigSourceData_MovieScene_UE___MovieScene_UE__U__TAdd_VFName___34_UFAdd_34_U634_U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___34_U734_U734_UFAddConditional_34__MovieScene_UE__6B_
  ;
  *(short *)&this->Payload = (short)param_1->_padding_;
  (this->Payload).field_0x10 = 0;
  bVar1 = (param_1->Payload).bIsSet;
  (this->Payload).field_0x10 = bVar1;
  if (bVar1 != false) {
    *(UMovieSceneControlRigParameterTrack **)&(this->Payload).field_0x8 =
         (param_1->Payload).TypedValue.Track;
  }
  *(short *)&(this->Payload).field_0x18 = (short)param_2->_padding_;
  *(undefined4 *)&(this->Payload).field_0x1c = 0xffffffff;
  *(undefined4 *)&(this->Payload).field_0x20 = 0;
  if ((param_2->Payload).field0_0x0.TypedValue.ComparisonIndex.Value != 0xffffffff) {
    *(TOptional<FName>_u_0 *)&(this->Payload).field_0x1c = (param_2->Payload).field0_0x0;
  }
  *(ushort *)&(this->Payload).field_0x24 = (param_3->ComponentTypeID).Value;
  *(ushort *)&(this->Payload).field_0x26 = (param_4->ComponentTypeID).Value;
  *(int *)&(this->Payload).field_0x28 = (int)param_5->_padding_;
  (this->Payload).field_0x38 = 0;
  bVar1 = (param_5->Payload).bIsSet;
  (this->Payload).field_0x38 = bVar1;
  if (bVar1 != false) {
    *(FMovieSceneFloatChannel **)&(this->Payload).field_0x30 = (param_5->Payload).TypedValue.Source;
  }
  *(int *)&(this->Payload).field_0x40 = (int)param_6->_padding_;
  (this->Payload).field_0x50 = 0;
  bVar1 = (param_6->Payload).bIsSet;
  (this->Payload).field_0x50 = bVar1;
  if (bVar1 != false) {
    *(FMovieSceneFloatChannel **)&(this->Payload).field_0x48 = (param_6->Payload).TypedValue.Source;
  }
  *(int *)&(this->Payload).field_0x58 = (int)param_7->_padding_;
  (this->Payload).field_0x68 = 0;
  bVar1 = (param_7->Payload).bIsSet;
  (this->Payload).field_0x68 = bVar1;
  if (bVar1 != false) {
    *(FMovieSceneFloatChannel **)&(this->Payload).field_0x60 = (param_7->Payload).TypedValue.Source;
  }
  bVar1 = param_8->bCondition;
  uVar2 = param_8->field_0x3;
  *(ushort *)&(this->Payload).field_0x70 = (param_8->ComponentTypeID).Value;
  (this->Payload).field_0x72 = bVar1;
  (this->Payload).field_0x73 = uVar2;
  this->bAddMutualComponents = param_9;
  return this;
}

// TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<UE::MovieScene::FBaseControlRigEvalData>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAdd> @ 14a3b4db0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<UE::MovieScene::FBaseControlRigEvalData>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
* __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<UE::MovieScene::FBaseControlRigEvalData>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<UE::MovieScene::FBaseControlRigEvalData>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
          (TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<UE::MovieScene::FBaseControlRigEvalData>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
           *this,TAdd<FGuid> *param_1,TAdd<UObject_*_(__cdecl*)(UObject_*)> *param_2,
          TAdd<UE::MovieScene::FControlRigSourceData> *param_3,
          TAdd<UE::MovieScene::FBaseControlRigEvalData> *param_4,
          TAddConditional<UE::MovieScene::FSourceFloatChannel> *param_5,FAdd *param_6,FAdd *param_7,
          FAdd *param_8,bool param_9)

{
  bool bVar1;
  FWeakObjectPtr FVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02_03_04_05_06__U__TAdd_UFGuid___MovieScene_UE__U__TAdd_P6APEAVUObject__PEAV1__Z_34_U__TAdd_UFControlRigSourceData_MovieScene_UE___34_U__TAdd_UFBaseControlRigEvalData_MovieScene_UE___34_U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___34_UFAdd_34_U934_U934__MovieScene_UE__6B_
  ;
  *(short *)&this->Payload = (short)param_1->_padding_;
  (this->Payload).field_0x14 = 0;
  bVar1 = (param_1->Payload).bIsSet;
  (this->Payload).field_0x14 = bVar1;
  if (bVar1 != false) {
    uVar3 = (param_1->Payload).TypedValue.B;
    uVar4 = (param_1->Payload).TypedValue.C;
    uVar5 = (param_1->Payload).TypedValue.D;
    *(uint *)&(this->Payload).field_0x4 = (param_1->Payload).TypedValue.A;
    *(uint *)&(this->Payload).field_0x8 = uVar3;
    *(uint *)&(this->Payload).field_0xc = uVar4;
    *(uint *)&(this->Payload).field_0x10 = uVar5;
  }
  *(short *)&(this->Payload).field_0x18 = (short)param_2->_padding_;
  (this->Payload).field_0x28 = 0;
  bVar1 = (param_2->Payload).bIsSet;
  (this->Payload).field_0x28 = bVar1;
  if (bVar1 != false) {
    *(_func___cdecl_UObject_ptr_UObject_ptr **)&(this->Payload).field_0x20 =
         (param_2->Payload).TypedValue;
  }
  *(short *)&(this->Payload).field_0x30 = (short)param_3->_padding_;
  (this->Payload).field_0x40 = 0;
  bVar1 = (param_3->Payload).bIsSet;
  (this->Payload).field_0x40 = bVar1;
  if (bVar1 != false) {
    *(UMovieSceneControlRigParameterTrack **)&(this->Payload).field_0x38 =
         (param_3->Payload).TypedValue.Track;
  }
  *(short *)&(this->Payload).field_0x48 = (short)param_4->_padding_;
  (this->Payload).field_0x68 = 0;
  bVar1 = (param_4->Payload).bIsSet;
  (this->Payload).field_0x68 = bVar1;
  if (bVar1 != false) {
    FVar2 = (param_4->Payload).TypedValue.WeakControlRig.WeakPtr;
    *(UMovieSceneControlRigParameterSection **)&(this->Payload).field_0x50 =
         (param_4->Payload).TypedValue.Section;
    *(int *)&(this->Payload).field_0x58 = FVar2.ObjectIndex;
    *(int *)&(this->Payload).field_0x5c = FVar2.ObjectSerialNumber;
    *(undefined8 *)&(this->Payload).field_0x60 =
         *(undefined8 *)&(param_4->Payload).TypedValue.field_0x10;
  }
  *(int *)&(this->Payload).field_0x70 = (int)param_5->_padding_;
  (this->Payload).field_0x80 = 0;
  bVar1 = (param_5->Payload).bIsSet;
  (this->Payload).field_0x80 = bVar1;
  if (bVar1 != false) {
    *(FMovieSceneFloatChannel **)&(this->Payload).field_0x78 = (param_5->Payload).TypedValue.Source;
  }
  *(ushort *)&(this->Payload).field_0x88 = (param_6->ComponentTypeID).Value;
  *(ushort *)&(this->Payload).field_0x8a = (param_7->ComponentTypeID).Value;
  *(ushort *)&(this->Payload).field_0x8c = (param_8->ComponentTypeID).Value;
  this->bAddMutualComponents = param_9;
  return this;
}

// TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_> @ 14a3b4ec0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
* __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
          (TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
           *this,TAdd<UE::MovieScene::FControlRigSourceData> *param_1,TAdd<FName> *param_2,
          FAdd *param_3,FAdd *param_4,TAdd<UE::MovieScene::FSourceFloatChannel> *param_5,
          FAddConditional *param_6,TAddConditional<UE::MovieScene::FSourceFloatChannel> *param_7,
          bool param_8)

{
  bool bVar1;
  undefined1 uVar2;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02_03_04_05__U__TAdd_UFControlRigSourceData_MovieScene_UE___MovieScene_UE__U__TAdd_VFName___34_UFAdd_34_U634_U__TAdd_UFSourceFloatChannel_MovieScene_UE___34_UFAddConditional_34_U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___34__MovieScene_UE__6B_
  ;
  *(short *)&this->Payload = (short)param_1->_padding_;
  (this->Payload).field_0x10 = 0;
  bVar1 = (param_1->Payload).bIsSet;
  (this->Payload).field_0x10 = bVar1;
  if (bVar1 != false) {
    *(UMovieSceneControlRigParameterTrack **)&(this->Payload).field_0x8 =
         (param_1->Payload).TypedValue.Track;
  }
  *(short *)&(this->Payload).field_0x18 = (short)param_2->_padding_;
  *(undefined4 *)&(this->Payload).field_0x1c = 0xffffffff;
  *(undefined4 *)&(this->Payload).field_0x20 = 0;
  if ((param_2->Payload).field0_0x0.TypedValue.ComparisonIndex.Value != 0xffffffff) {
    *(TOptional<FName>_u_0 *)&(this->Payload).field_0x1c = (param_2->Payload).field0_0x0;
  }
  *(ushort *)&(this->Payload).field_0x24 = (param_3->ComponentTypeID).Value;
  *(ushort *)&(this->Payload).field_0x26 = (param_4->ComponentTypeID).Value;
  *(short *)&(this->Payload).field_0x28 = (short)param_5->_padding_;
  (this->Payload).field_0x38 = 0;
  bVar1 = (param_5->Payload).bIsSet;
  (this->Payload).field_0x38 = bVar1;
  if (bVar1 != false) {
    *(FMovieSceneFloatChannel **)&(this->Payload).field_0x30 = (param_5->Payload).TypedValue.Source;
  }
  bVar1 = param_6->bCondition;
  uVar2 = param_6->field_0x3;
  *(ushort *)&(this->Payload).field_0x40 = (param_6->ComponentTypeID).Value;
  (this->Payload).field_0x42 = bVar1;
  (this->Payload).field_0x43 = uVar2;
  *(int *)&(this->Payload).field_0x48 = (int)param_7->_padding_;
  (this->Payload).field_0x58 = 0;
  bVar1 = (param_7->Payload).bIsSet;
  (this->Payload).field_0x58 = bVar1;
  if (bVar1 != false) {
    *(FMovieSceneFloatChannel **)&(this->Payload).field_0x50 = (param_7->Payload).TypedValue.Source;
  }
  this->bAddMutualComponents = param_8;
  return this;
}

// TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceByteChannel>_> @ 14a3b4f90

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceByteChannel>_>
* __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceByteChannel>_>
::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceByteChannel>_>
          (TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceByteChannel>_>
           *this,TAdd<UE::MovieScene::FControlRigSourceData> *param_1,TAdd<FName> *param_2,
          TAdd<UE::MovieScene::FControlRigSourceData> *param_3,FAdd *param_4,FAdd *param_5,
          TAdd<UE::MovieScene::FSourceByteChannel> *param_6,bool param_7)

{
  bool bVar1;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02_03_04__U__TAdd_UFControlRigSourceData_MovieScene_UE___MovieScene_UE__U__TAdd_VFName___34_U234_UFAdd_34_U634_U__TAdd_UFSourceByteChannel_MovieScene_UE___34__MovieScene_UE__6B_
  ;
  *(short *)&this->Payload = (short)param_1->_padding_;
  (this->Payload).field_0x10 = 0;
  bVar1 = (param_1->Payload).bIsSet;
  (this->Payload).field_0x10 = bVar1;
  if (bVar1 != false) {
    *(UMovieSceneControlRigParameterTrack **)&(this->Payload).field_0x8 =
         (param_1->Payload).TypedValue.Track;
  }
  *(short *)&(this->Payload).field_0x18 = (short)param_2->_padding_;
  *(undefined4 *)&(this->Payload).field_0x1c = 0xffffffff;
  *(undefined4 *)&(this->Payload).field_0x20 = 0;
  if ((param_2->Payload).field0_0x0.TypedValue.ComparisonIndex.Value != 0xffffffff) {
    *(TOptional<FName>_u_0 *)&(this->Payload).field_0x1c = (param_2->Payload).field0_0x0;
  }
  *(short *)&(this->Payload).field_0x28 = (short)param_3->_padding_;
  (this->Payload).field_0x38 = 0;
  bVar1 = (param_3->Payload).bIsSet;
  (this->Payload).field_0x38 = bVar1;
  if (bVar1 != false) {
    *(UMovieSceneControlRigParameterTrack **)&(this->Payload).field_0x30 =
         (param_3->Payload).TypedValue.Track;
  }
  *(ushort *)&(this->Payload).field_0x40 = (param_4->ComponentTypeID).Value;
  *(ushort *)&(this->Payload).field_0x42 = (param_5->ComponentTypeID).Value;
  *(short *)&(this->Payload).field_0x48 = (short)param_6->_padding_;
  (this->Payload).field_0x58 = 0;
  bVar1 = (param_6->Payload).bIsSet;
  (this->Payload).field_0x58 = bVar1;
  if (bVar1 != false) {
    *(FMovieSceneByteChannel **)&(this->Payload).field_0x50 = (param_6->Payload).TypedValue.Source;
  }
  this->bAddMutualComponents = param_7;
  return this;
}

// TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<FMovieSceneControlRigSpaceChannel_const_*>,UE::MovieScene::FAdd,UE::MovieScene::FAdd> @ 14a3b5060

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<FMovieSceneControlRigSpaceChannel_const_*>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
* __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<FMovieSceneControlRigSpaceChannel_const_*>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<FMovieSceneControlRigSpaceChannel_const_*>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
          (TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<FMovieSceneControlRigSpaceChannel_const_*>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
           *this,TAdd<UE::MovieScene::FControlRigSourceData> *param_1,TAdd<FName> *param_2,
          TAdd<FMovieSceneControlRigSpaceChannel_const_*> *param_3,FAdd *param_4,FAdd *param_5,
          bool param_6)

{
  bool bVar1;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02_03__U__TAdd_UFControlRigSourceData_MovieScene_UE___MovieScene_UE__U__TAdd_VFName___34_U__TAdd_PEBUFMovieSceneControlRigSpaceChannel___34_UFAdd_34_U734__MovieScene_UE__6B_
  ;
  *(short *)&this->Payload = (short)param_1->_padding_;
  (this->Payload).field_0x10 = 0;
  bVar1 = (param_1->Payload).bIsSet;
  (this->Payload).field_0x10 = bVar1;
  if (bVar1 != false) {
    *(UMovieSceneControlRigParameterTrack **)&(this->Payload).field_0x8 =
         (param_1->Payload).TypedValue.Track;
  }
  *(short *)&(this->Payload).field_0x18 = (short)param_2->_padding_;
  *(undefined4 *)&(this->Payload).field_0x1c = 0xffffffff;
  *(undefined4 *)&(this->Payload).field_0x20 = 0;
  if ((param_2->Payload).field0_0x0.TypedValue.ComparisonIndex.Value != 0xffffffff) {
    *(TOptional<FName>_u_0 *)&(this->Payload).field_0x1c = (param_2->Payload).field0_0x0;
  }
  *(short *)&(this->Payload).field_0x28 = (short)param_3->_padding_;
  (this->Payload).field_0x38 = 0;
  bVar1 = (param_3->Payload).bIsSet;
  (this->Payload).field_0x38 = bVar1;
  if (bVar1 != false) {
    *(FMovieSceneControlRigSpaceChannel **)&(this->Payload).field_0x30 =
         (param_3->Payload).TypedValue;
  }
  *(ushort *)&(this->Payload).field_0x40 = (param_4->ComponentTypeID).Value;
  *(ushort *)&(this->Payload).field_0x42 = (param_5->ComponentTypeID).Value;
  this->bAddMutualComponents = param_6;
  return this;
}

// TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::FAdd,UE::MovieScene::FAdd> @ 14a3b5100

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
* __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
          (TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
           *this,TAdd<UE::MovieScene::FControlRigSourceData> *param_1,TAdd<FName> *param_2,
          TAdd<UE::MovieScene::FSourceBoolChannel> *param_3,FAdd *param_4,FAdd *param_5,bool param_6
          )

{
  bool bVar1;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02_03__U__TAdd_UFControlRigSourceData_MovieScene_UE___MovieScene_UE__U__TAdd_VFName___34_U__TAdd_UFSourceBoolChannel_MovieScene_UE___34_UFAdd_34_U734__MovieScene_UE__6B_
  ;
  *(short *)&this->Payload = (short)param_1->_padding_;
  (this->Payload).field_0x10 = 0;
  bVar1 = (param_1->Payload).bIsSet;
  (this->Payload).field_0x10 = bVar1;
  if (bVar1 != false) {
    *(UMovieSceneControlRigParameterTrack **)&(this->Payload).field_0x8 =
         (param_1->Payload).TypedValue.Track;
  }
  *(short *)&(this->Payload).field_0x18 = (short)param_2->_padding_;
  *(undefined4 *)&(this->Payload).field_0x1c = 0xffffffff;
  *(undefined4 *)&(this->Payload).field_0x20 = 0;
  if ((param_2->Payload).field0_0x0.TypedValue.ComparisonIndex.Value != 0xffffffff) {
    *(TOptional<FName>_u_0 *)&(this->Payload).field_0x1c = (param_2->Payload).field0_0x0;
  }
  *(short *)&(this->Payload).field_0x28 = (short)param_3->_padding_;
  (this->Payload).field_0x38 = 0;
  bVar1 = (param_3->Payload).bIsSet;
  (this->Payload).field_0x38 = bVar1;
  if (bVar1 != false) {
    *(FMovieSceneBoolChannel **)&(this->Payload).field_0x30 = (param_3->Payload).TypedValue.Source;
  }
  *(ushort *)&(this->Payload).field_0x40 = (param_4->ComponentTypeID).Value;
  *(ushort *)&(this->Payload).field_0x42 = (param_5->ComponentTypeID).Value;
  this->bAddMutualComponents = param_6;
  return this;
}

// TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceIntegerChannel>_> @ 14a3b51a0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceIntegerChannel>_>
* __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceIntegerChannel>_>
::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceIntegerChannel>_>
          (TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceIntegerChannel>_>
           *this,TAdd<UE::MovieScene::FControlRigSourceData> *param_1,TAdd<FName> *param_2,
          FAdd *param_3,FAdd *param_4,TAdd<UE::MovieScene::FSourceIntegerChannel> *param_5,
          bool param_6)

{
  bool bVar1;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02_03__U__TAdd_UFControlRigSourceData_MovieScene_UE___MovieScene_UE__U__TAdd_VFName___34_UFAdd_34_U634_U__TAdd_UFSourceIntegerChannel_MovieScene_UE___34__MovieScene_UE__6B_
  ;
  *(short *)&this->Payload = (short)param_1->_padding_;
  (this->Payload).field_0x10 = 0;
  bVar1 = (param_1->Payload).bIsSet;
  (this->Payload).field_0x10 = bVar1;
  if (bVar1 != false) {
    *(UMovieSceneControlRigParameterTrack **)&(this->Payload).field_0x8 =
         (param_1->Payload).TypedValue.Track;
  }
  *(short *)&(this->Payload).field_0x18 = (short)param_2->_padding_;
  *(undefined4 *)&(this->Payload).field_0x1c = 0xffffffff;
  *(undefined4 *)&(this->Payload).field_0x20 = 0;
  if ((param_2->Payload).field0_0x0.TypedValue.ComparisonIndex.Value != 0xffffffff) {
    *(TOptional<FName>_u_0 *)&(this->Payload).field_0x1c = (param_2->Payload).field0_0x0;
  }
  *(ushort *)&(this->Payload).field_0x24 = (param_3->ComponentTypeID).Value;
  *(ushort *)&(this->Payload).field_0x26 = (param_4->ComponentTypeID).Value;
  *(short *)&(this->Payload).field_0x28 = (short)param_5->_padding_;
  (this->Payload).field_0x38 = 0;
  bVar1 = (param_5->Payload).bIsSet;
  (this->Payload).field_0x38 = bVar1;
  if (bVar1 != false) {
    *(FMovieSceneIntegerChannel **)&(this->Payload).field_0x30 =
         (param_5->Payload).TypedValue.Source;
  }
  this->bAddMutualComponents = param_6;
  return this;
}

// AddDefaulted @ 14a3ddbd0

TEntityBuilder<UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<UE::MovieScene::FBaseControlRigEvalData>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
* __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<UE::MovieScene::FBaseControlRigEvalData>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd>
::AddDefaulted(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<UE::MovieScene::FBaseControlRigEvalData>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd>
               *this,TEntityBuilder<UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<UE::MovieScene::FBaseControlRigEvalData>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
                     *__return_storage_ptr__,FComponentTypeID param_1)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  
  bVar1 = this->bAddMutualComponents;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02_03_04_05__U__TAdd_UFGuid___MovieScene_UE__U__TAdd_P6APEAVUObject__PEAV1__Z_34_U__TAdd_UFControlRigSourceData_MovieScene_UE___34_U__TAdd_UFBaseControlRigEvalData_MovieScene_UE___34_U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___34_UFAdd_34_U934__MovieScene_UE__6B_
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
  *(undefined2 *)&__return_storage_ptr__->field_0x50 = *(undefined2 *)&(this->Payload).field_0x48;
  __return_storage_ptr__->field_0x70 = 0;
  cVar2 = (this->Payload).field_0x68;
  __return_storage_ptr__->field_0x70 = cVar2;
  if (cVar2 != '\0') {
    uVar3 = *(undefined8 *)&(this->Payload).field_0x58;
    *(undefined8 *)&__return_storage_ptr__->field_0x58 = *(undefined8 *)&(this->Payload).field_0x50;
    *(undefined8 *)&__return_storage_ptr__->field_0x60 = uVar3;
    *(undefined8 *)&__return_storage_ptr__->field_0x68 = *(undefined8 *)&(this->Payload).field_0x60;
  }
  *(undefined4 *)&__return_storage_ptr__->field_0x78 = *(undefined4 *)&(this->Payload).field_0x70;
  __return_storage_ptr__->field_0x88 = 0;
  cVar2 = (this->Payload).field_0x80;
  __return_storage_ptr__->field_0x88 = cVar2;
  if (cVar2 != '\0') {
    *(undefined8 *)&__return_storage_ptr__->field_0x80 = *(undefined8 *)&(this->Payload).field_0x78;
  }
  *(undefined2 *)&__return_storage_ptr__->field_0x90 = *(undefined2 *)&(this->Payload).field_0x88;
  *(ushort *)&__return_storage_ptr__->field_0x92 = param_1.Value;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilder_U__TAdd_UFGuid___MovieScene_UE__U__TAdd_P6APEAVUObject__PEAV1__Z_23_U__TAdd_UFControlRigSourceData_MovieScene_UE___23_U__TAdd_UFBaseControlRigEvalData_MovieScene_UE___23_U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___23_UFAdd_23_U823__MovieScene_UE__6B_
  ;
  __return_storage_ptr__->field_0x98 = bVar1;
  return __return_storage_ptr__;
}

// AddDefaulted @ 14a3ddcd0

TEntityBuilder<UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<UE::MovieScene::FBaseControlRigEvalData>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd>
* __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<UE::MovieScene::FBaseControlRigEvalData>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
::AddDefaulted(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<UE::MovieScene::FBaseControlRigEvalData>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
               *this,TEntityBuilder<UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<UE::MovieScene::FBaseControlRigEvalData>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd>
                     *__return_storage_ptr__,FComponentTypeID param_1)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  
  bVar1 = this->bAddMutualComponents;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02_03_04__U__TAdd_UFGuid___MovieScene_UE__U__TAdd_P6APEAVUObject__PEAV1__Z_34_U__TAdd_UFControlRigSourceData_MovieScene_UE___34_U__TAdd_UFBaseControlRigEvalData_MovieScene_UE___34_U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___34_UFAdd_34__MovieScene_UE__6B_
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
  *(undefined2 *)&__return_storage_ptr__->field_0x50 = *(undefined2 *)&(this->Payload).field_0x48;
  __return_storage_ptr__->field_0x70 = 0;
  cVar2 = (this->Payload).field_0x68;
  __return_storage_ptr__->field_0x70 = cVar2;
  if (cVar2 != '\0') {
    uVar3 = *(undefined8 *)&(this->Payload).field_0x58;
    *(undefined8 *)&__return_storage_ptr__->field_0x58 = *(undefined8 *)&(this->Payload).field_0x50;
    *(undefined8 *)&__return_storage_ptr__->field_0x60 = uVar3;
    *(undefined8 *)&__return_storage_ptr__->field_0x68 = *(undefined8 *)&(this->Payload).field_0x60;
  }
  *(undefined4 *)&__return_storage_ptr__->field_0x78 = *(undefined4 *)&(this->Payload).field_0x70;
  __return_storage_ptr__->field_0x88 = 0;
  cVar2 = (this->Payload).field_0x80;
  __return_storage_ptr__->field_0x88 = cVar2;
  if (cVar2 != '\0') {
    *(undefined8 *)&__return_storage_ptr__->field_0x80 = *(undefined8 *)&(this->Payload).field_0x78;
  }
  *(ushort *)&__return_storage_ptr__->field_0x90 = param_1.Value;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilder_U__TAdd_UFGuid___MovieScene_UE__U__TAdd_P6APEAVUObject__PEAV1__Z_23_U__TAdd_UFControlRigSourceData_MovieScene_UE___23_U__TAdd_UFBaseControlRigEvalData_MovieScene_UE___23_U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___23_UFAdd_23__MovieScene_UE__6B_
  ;
  __return_storage_ptr__->field_0x98 = bVar1;
  return __return_storage_ptr__;
}

// AddMutualComponents @ 14a3df0a0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>
* __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>
::AddMutualComponents
          (TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>
           *this,TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>
                 *__return_storage_ptr__)

{
  TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>
            ((TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>
              *)__return_storage_ptr__,(TAdd<UE::MovieScene::FControlRigSourceData> *)&this->Payload
             ,(TAdd<FName> *)&(this->Payload).field_0x18,(FAdd *)&(this->Payload).field_0x24,
             (FAdd *)&(this->Payload).field_0x26,
             (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&(this->Payload).field_0x28,
             (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&(this->Payload).field_0x40,
             (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&(this->Payload).field_0x58,
             (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&(this->Payload).field_0x70,
             (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&(this->Payload).field_0x88,
             (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&(this->Payload).field_0xa0,
             (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&(this->Payload).field_0xb8,
             (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&(this->Payload).field_0xd0,
             (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&(this->Payload).field_0xe8,
             (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&(this->Payload).field_0x100,
             (FAddConditional *)&(this->Payload).field_0x118,true);
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilder_U__TAdd_UFControlRigSourceData_MovieScene_UE___MovieScene_UE__U__TAdd_VFName___23_UFAdd_23_U523_U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___23_U623_U623_U623_U623_U623_U623_U623_U623_U623_UFAddConditional_23__MovieScene_UE__6B_
  ;
  return __return_storage_ptr__;
}

// AddMutualComponents @ 14a3df1a0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>
* __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>
::AddMutualComponents
          (TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>
           *this,TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>
                 *__return_storage_ptr__)

{
  TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>
            ((TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>
              *)__return_storage_ptr__,(TAdd<UE::MovieScene::FControlRigSourceData> *)&this->Payload
             ,(TAdd<FName> *)&(this->Payload).field_0x18,(FAdd *)&(this->Payload).field_0x24,
             (FAdd *)&(this->Payload).field_0x26,
             (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&(this->Payload).field_0x28,
             (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&(this->Payload).field_0x40,
             (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&(this->Payload).field_0x58,
             (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&(this->Payload).field_0x70,
             (FAddConditional *)&(this->Payload).field_0x88,true);
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilder_U__TAdd_UFControlRigSourceData_MovieScene_UE___MovieScene_UE__U__TAdd_VFName___23_UFAdd_23_U523_U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___23_U623_U623_U623_UFAddConditional_23__MovieScene_UE__6B_
  ;
  return __return_storage_ptr__;
}

// AddMutualComponents @ 14a3df240

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>
* __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>
::AddMutualComponents
          (TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>
           *this,TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>
                 *__return_storage_ptr__)

{
  TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>
            ((TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>
              *)__return_storage_ptr__,(TAdd<UE::MovieScene::FControlRigSourceData> *)&this->Payload
             ,(TAdd<FName> *)&(this->Payload).field_0x18,(FAdd *)&(this->Payload).field_0x24,
             (FAdd *)&(this->Payload).field_0x26,
             (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&(this->Payload).field_0x28,
             (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&(this->Payload).field_0x40,
             (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&(this->Payload).field_0x58,
             (FAddConditional *)&(this->Payload).field_0x70,true);
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilder_U__TAdd_UFControlRigSourceData_MovieScene_UE___MovieScene_UE__U__TAdd_VFName___23_UFAdd_23_U523_U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___23_U623_U623_UFAddConditional_23__MovieScene_UE__6B_
  ;
  return __return_storage_ptr__;
}

// AddMutualComponents @ 14a3df2c0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TEntityBuilder<UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<UE::MovieScene::FBaseControlRigEvalData>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
* __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<UE::MovieScene::FBaseControlRigEvalData>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
::AddMutualComponents
          (TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<UE::MovieScene::FBaseControlRigEvalData>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
           *this,TEntityBuilder<UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<UE::MovieScene::FBaseControlRigEvalData>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
                 *__return_storage_ptr__)

{
  TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<UE::MovieScene::FBaseControlRigEvalData>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
            ((TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<UE::MovieScene::FBaseControlRigEvalData>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
              *)__return_storage_ptr__,(TAdd<FGuid> *)&this->Payload,
             (TAdd<UObject_*_(__cdecl*)(UObject_*)> *)&(this->Payload).field_0x18,
             (TAdd<UE::MovieScene::FControlRigSourceData> *)&(this->Payload).field_0x30,
             (TAdd<UE::MovieScene::FBaseControlRigEvalData> *)&(this->Payload).field_0x48,
             (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&(this->Payload).field_0x70,
             (FAdd *)&(this->Payload).field_0x88,(FAdd *)&(this->Payload).field_0x8a,
             (FAdd *)&(this->Payload).field_0x8c,true);
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilder_U__TAdd_UFGuid___MovieScene_UE__U__TAdd_P6APEAVUObject__PEAV1__Z_23_U__TAdd_UFControlRigSourceData_MovieScene_UE___23_U__TAdd_UFBaseControlRigEvalData_MovieScene_UE___23_U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___23_UFAdd_23_U823_U823__MovieScene_UE__6B_
  ;
  return __return_storage_ptr__;
}

// AddMutualComponents @ 14a3df350

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
* __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
::AddMutualComponents
          (TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
           *this,TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
                 *__return_storage_ptr__)

{
  TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
            ((TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
              *)__return_storage_ptr__,(TAdd<UE::MovieScene::FControlRigSourceData> *)&this->Payload
             ,(TAdd<FName> *)&(this->Payload).field_0x18,(FAdd *)&(this->Payload).field_0x24,
             (FAdd *)&(this->Payload).field_0x26,
             (TAdd<UE::MovieScene::FSourceFloatChannel> *)&(this->Payload).field_0x28,
             (FAddConditional *)&(this->Payload).field_0x40,
             (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&(this->Payload).field_0x48,
             true);
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilder_U__TAdd_UFControlRigSourceData_MovieScene_UE___MovieScene_UE__U__TAdd_VFName___23_UFAdd_23_U523_U__TAdd_UFSourceFloatChannel_MovieScene_UE___23_UFAddConditional_23_U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___23__MovieScene_UE__6B_
  ;
  return __return_storage_ptr__;
}

// AddMutualComponents @ 14a3df3c0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceByteChannel>_>
* __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceByteChannel>_>
::AddMutualComponents
          (TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceByteChannel>_>
           *this,TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceByteChannel>_>
                 *__return_storage_ptr__)

{
  TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceByteChannel>_>
            ((TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceByteChannel>_>
              *)__return_storage_ptr__,(TAdd<UE::MovieScene::FControlRigSourceData> *)&this->Payload
             ,(TAdd<FName> *)&(this->Payload).field_0x18,
             (TAdd<UE::MovieScene::FControlRigSourceData> *)&(this->Payload).field_0x28,
             (FAdd *)&(this->Payload).field_0x40,(FAdd *)&(this->Payload).field_0x42,
             (TAdd<UE::MovieScene::FSourceByteChannel> *)&(this->Payload).field_0x48,true);
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilder_U__TAdd_UFControlRigSourceData_MovieScene_UE___MovieScene_UE__U__TAdd_VFName___23_U123_UFAdd_23_U523_U__TAdd_UFSourceByteChannel_MovieScene_UE___23__MovieScene_UE__6B_
  ;
  return __return_storage_ptr__;
}

// AddMutualComponents @ 14a3df420

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<FMovieSceneControlRigSpaceChannel_const_*>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
* __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<FMovieSceneControlRigSpaceChannel_const_*>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
::AddMutualComponents
          (TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<FMovieSceneControlRigSpaceChannel_const_*>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
           *this,TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<FMovieSceneControlRigSpaceChannel_const_*>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
                 *__return_storage_ptr__)

{
  TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<FMovieSceneControlRigSpaceChannel_const_*>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
            ((TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<FMovieSceneControlRigSpaceChannel_const_*>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
              *)__return_storage_ptr__,(TAdd<UE::MovieScene::FControlRigSourceData> *)&this->Payload
             ,(TAdd<FName> *)&(this->Payload).field_0x18,
             (TAdd<FMovieSceneControlRigSpaceChannel_const_*> *)&(this->Payload).field_0x28,
             (FAdd *)&(this->Payload).field_0x40,(FAdd *)&(this->Payload).field_0x42,true);
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilder_U__TAdd_UFControlRigSourceData_MovieScene_UE___MovieScene_UE__U__TAdd_VFName___23_U__TAdd_PEBUFMovieSceneControlRigSpaceChannel___23_UFAdd_23_U623__MovieScene_UE__6B_
  ;
  return __return_storage_ptr__;
}

// AddMutualComponents @ 14a3df470

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
* __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
::AddMutualComponents
          (TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
           *this,TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
                 *__return_storage_ptr__)

{
  TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
            ((TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
              *)__return_storage_ptr__,(TAdd<UE::MovieScene::FControlRigSourceData> *)&this->Payload
             ,(TAdd<FName> *)&(this->Payload).field_0x18,
             (TAdd<UE::MovieScene::FSourceBoolChannel> *)&(this->Payload).field_0x28,
             (FAdd *)&(this->Payload).field_0x40,(FAdd *)&(this->Payload).field_0x42,true);
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilder_U__TAdd_UFControlRigSourceData_MovieScene_UE___MovieScene_UE__U__TAdd_VFName___23_U__TAdd_UFSourceBoolChannel_MovieScene_UE___23_UFAdd_23_U623__MovieScene_UE__6B_
  ;
  return __return_storage_ptr__;
}

// AddMutualComponents @ 14a3df4c0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceIntegerChannel>_>
* __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceIntegerChannel>_>
::AddMutualComponents
          (TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceIntegerChannel>_>
           *this,TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceIntegerChannel>_>
                 *__return_storage_ptr__)

{
  TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceIntegerChannel>_>
            ((TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceIntegerChannel>_>
              *)__return_storage_ptr__,(TAdd<UE::MovieScene::FControlRigSourceData> *)&this->Payload
             ,(TAdd<FName> *)&(this->Payload).field_0x18,(FAdd *)&(this->Payload).field_0x24,
             (FAdd *)&(this->Payload).field_0x26,
             (TAdd<UE::MovieScene::FSourceIntegerChannel> *)&(this->Payload).field_0x28,true);
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilder_U__TAdd_UFControlRigSourceData_MovieScene_UE___MovieScene_UE__U__TAdd_VFName___23_UFAdd_23_U523_U__TAdd_UFSourceIntegerChannel_MovieScene_UE___23__MovieScene_UE__6B_
  ;
  return __return_storage_ptr__;
}

// AddMutualComponents @ 14a3df510

TEntityBuilder<UE::MovieScene::TAdd<FMovieSceneBlendChannelID>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
* __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TAdd<FMovieSceneBlendChannelID>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
::AddMutualComponents
          (TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TAdd<FMovieSceneBlendChannelID>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
           *this,TEntityBuilder<UE::MovieScene::TAdd<FMovieSceneBlendChannelID>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
                 *__return_storage_ptr__)

{
  char cVar1;
  
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02__U__TAdd_UFMovieSceneBlendChannelID___MovieScene_UE__UFAdd_34_U534_U534__MovieScene_UE__6B_
  ;
  *(undefined2 *)&__return_storage_ptr__->field_0x8 = *(undefined2 *)&this->Payload;
  __return_storage_ptr__->field_0xe = 0;
  cVar1 = (this->Payload).field_0x6;
  __return_storage_ptr__->field_0xe = cVar1;
  if (cVar1 != '\0') {
    *(undefined4 *)&__return_storage_ptr__->field_0xa = *(undefined4 *)&(this->Payload).field_0x2;
  }
  *(undefined2 *)&__return_storage_ptr__->field_0x10 = *(undefined2 *)&(this->Payload).field_0x8;
  *(undefined2 *)&__return_storage_ptr__->field_0x12 = *(undefined2 *)&(this->Payload).field_0xa;
  *(undefined2 *)&__return_storage_ptr__->field_0x14 = *(undefined2 *)&(this->Payload).field_0xc;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilder_U__TAdd_UFMovieSceneBlendChannelID___MovieScene_UE__UFAdd_23_U423_U423__MovieScene_UE__6B_
  ;
  __return_storage_ptr__->field_0x16 = 1;
  return __return_storage_ptr__;
}

// AddTag @ 14a3e5340

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TEntityBuilder<UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<UE::MovieScene::FBaseControlRigEvalData>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
* __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<UE::MovieScene::FBaseControlRigEvalData>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
::AddTag(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<UE::MovieScene::FBaseControlRigEvalData>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
         *this,TEntityBuilder<UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<UE::MovieScene::FBaseControlRigEvalData>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
               *__return_storage_ptr__,FComponentTypeID param_1)

{
  FAdd local_res18 [8];
  
  local_res18[0].ComponentTypeID.Value = (FComponentTypeID)(FComponentTypeID)param_1.Value;
  TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<UE::MovieScene::FBaseControlRigEvalData>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
  ::
  TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<UE::MovieScene::FBaseControlRigEvalData>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
            ((TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<UE::MovieScene::FBaseControlRigEvalData>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
              *)__return_storage_ptr__,(TAdd<FGuid> *)&this->Payload,
             (TAdd<UObject_*_(__cdecl*)(UObject_*)> *)&(this->Payload).field_0x18,
             (TAdd<UE::MovieScene::FControlRigSourceData> *)&(this->Payload).field_0x30,
             (TAdd<UE::MovieScene::FBaseControlRigEvalData> *)&(this->Payload).field_0x48,
             (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&(this->Payload).field_0x70,
             (FAdd *)&(this->Payload).field_0x88,(FAdd *)&(this->Payload).field_0x8a,local_res18,
             this->bAddMutualComponents);
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilder_U__TAdd_UFGuid___MovieScene_UE__U__TAdd_P6APEAVUObject__PEAV1__Z_23_U__TAdd_UFControlRigSourceData_MovieScene_UE___23_U__TAdd_UFBaseControlRigEvalData_MovieScene_UE___23_U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___23_UFAdd_23_U823_U823__MovieScene_UE__6B_
  ;
  return __return_storage_ptr__;
}

// AddTag @ 14a3e53d0

TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
* __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::FAdd>
::AddTag(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::FAdd>
         *this,TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
               *__return_storage_ptr__,FComponentTypeID param_1)

{
  bool bVar1;
  char cVar2;
  
  bVar1 = this->bAddMutualComponents;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02_03__U__TAdd_UFControlRigSourceData_MovieScene_UE___MovieScene_UE__U__TAdd_VFName___34_U234_UFAdd_34_U634__MovieScene_UE__6B_
  ;
  *(undefined2 *)&__return_storage_ptr__->field_0x8 = *(undefined2 *)&this->Payload;
  __return_storage_ptr__->field_0x18 = 0;
  cVar2 = (this->Payload).field_0x10;
  __return_storage_ptr__->field_0x18 = cVar2;
  if (cVar2 != '\0') {
    *(undefined8 *)&__return_storage_ptr__->field_0x10 = *(undefined8 *)&(this->Payload).field_0x8;
  }
  *(undefined2 *)&__return_storage_ptr__->field_0x20 = *(undefined2 *)&(this->Payload).field_0x18;
  *(undefined4 *)&__return_storage_ptr__->field_0x24 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  if (*(int *)&(this->Payload).field_0x1c != -1) {
    *(undefined8 *)&__return_storage_ptr__->field_0x24 = *(undefined8 *)&(this->Payload).field_0x1c;
  }
  *(undefined2 *)&__return_storage_ptr__->field_0x30 = *(undefined2 *)&(this->Payload).field_0x28;
  __return_storage_ptr__->field_0x40 = 0;
  cVar2 = (this->Payload).field_0x38;
  __return_storage_ptr__->field_0x40 = cVar2;
  if (cVar2 != '\0') {
    *(undefined8 *)&__return_storage_ptr__->field_0x38 = *(undefined8 *)&(this->Payload).field_0x30;
  }
  *(undefined2 *)&__return_storage_ptr__->field_0x48 = *(undefined2 *)&(this->Payload).field_0x40;
  *(ushort *)&__return_storage_ptr__->field_0x4a = param_1.Value;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilder_U__TAdd_UFControlRigSourceData_MovieScene_UE___MovieScene_UE__U__TAdd_VFName___23_U123_UFAdd_23_U523__MovieScene_UE__6B_
  ;
  __return_storage_ptr__->field_0x50 = bVar1;
  return __return_storage_ptr__;
}

// AddTag @ 14a3e5470

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<FMovieSceneControlRigSpaceChannel_const_*>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
* __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<FMovieSceneControlRigSpaceChannel_const_*>,UE::MovieScene::FAdd>
::AddTag(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<FMovieSceneControlRigSpaceChannel_const_*>,UE::MovieScene::FAdd>
         *this,TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<FMovieSceneControlRigSpaceChannel_const_*>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
               *__return_storage_ptr__,FComponentTypeID param_1)

{
  FAdd local_res18 [8];
  
  local_res18[0].ComponentTypeID.Value = (FComponentTypeID)(FComponentTypeID)param_1.Value;
  TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<FMovieSceneControlRigSpaceChannel_const_*>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
  ::
  TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<FMovieSceneControlRigSpaceChannel_const_*>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
            ((TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<FMovieSceneControlRigSpaceChannel_const_*>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
              *)__return_storage_ptr__,(TAdd<UE::MovieScene::FControlRigSourceData> *)&this->Payload
             ,(TAdd<FName> *)&(this->Payload).field_0x18,
             (TAdd<FMovieSceneControlRigSpaceChannel_const_*> *)&(this->Payload).field_0x28,
             (FAdd *)&(this->Payload).field_0x40,local_res18,this->bAddMutualComponents);
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilder_U__TAdd_UFControlRigSourceData_MovieScene_UE___MovieScene_UE__U__TAdd_VFName___23_U__TAdd_PEBUFMovieSceneControlRigSpaceChannel___23_UFAdd_23_U623__MovieScene_UE__6B_
  ;
  return __return_storage_ptr__;
}

// AddTag @ 14a3e54d0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
* __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::FAdd>
::AddTag(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::FAdd>
         *this,TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
               *__return_storage_ptr__,FComponentTypeID param_1)

{
  FAdd local_res18 [8];
  
  local_res18[0].ComponentTypeID.Value = (FComponentTypeID)(FComponentTypeID)param_1.Value;
  TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
  ::
  TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
            ((TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
              *)__return_storage_ptr__,(TAdd<UE::MovieScene::FControlRigSourceData> *)&this->Payload
             ,(TAdd<FName> *)&(this->Payload).field_0x18,
             (TAdd<UE::MovieScene::FSourceBoolChannel> *)&(this->Payload).field_0x28,
             (FAdd *)&(this->Payload).field_0x40,local_res18,this->bAddMutualComponents);
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilder_U__TAdd_UFControlRigSourceData_MovieScene_UE___MovieScene_UE__U__TAdd_VFName___23_U__TAdd_UFSourceBoolChannel_MovieScene_UE___23_UFAdd_23_U623__MovieScene_UE__6B_
  ;
  return __return_storage_ptr__;
}

// AddTag @ 14a3e5530

TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::FAdd>
* __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>_>
::AddTag(TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>_>
         *this,TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::FAdd>
               *__return_storage_ptr__,FComponentTypeID param_1)

{
  bool bVar1;
  char cVar2;
  
  bVar1 = this->bAddMutualComponents;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02__U__TAdd_UFControlRigSourceData_MovieScene_UE___MovieScene_UE__U__TAdd_VFName___34_U234_UFAdd_34__MovieScene_UE__6B_
  ;
  *(undefined2 *)&__return_storage_ptr__->field_0x8 = *(undefined2 *)&this->Payload;
  __return_storage_ptr__->field_0x18 = 0;
  cVar2 = (this->Payload).field_0x10;
  __return_storage_ptr__->field_0x18 = cVar2;
  if (cVar2 != '\0') {
    *(undefined8 *)&__return_storage_ptr__->field_0x10 = *(undefined8 *)&(this->Payload).field_0x8;
  }
  *(undefined2 *)&__return_storage_ptr__->field_0x20 = *(undefined2 *)&(this->Payload).field_0x18;
  *(undefined4 *)&__return_storage_ptr__->field_0x24 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  if (*(int *)&(this->Payload).field_0x1c != -1) {
    *(undefined8 *)&__return_storage_ptr__->field_0x24 = *(undefined8 *)&(this->Payload).field_0x1c;
  }
  *(undefined2 *)&__return_storage_ptr__->field_0x30 = *(undefined2 *)&(this->Payload).field_0x28;
  __return_storage_ptr__->field_0x40 = 0;
  cVar2 = (this->Payload).field_0x38;
  __return_storage_ptr__->field_0x40 = cVar2;
  if (cVar2 != '\0') {
    *(undefined8 *)&__return_storage_ptr__->field_0x38 = *(undefined8 *)&(this->Payload).field_0x30;
  }
  *(ushort *)&__return_storage_ptr__->field_0x48 = param_1.Value;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilder_U__TAdd_UFControlRigSourceData_MovieScene_UE___MovieScene_UE__U__TAdd_VFName___23_U123_UFAdd_23__MovieScene_UE__6B_
  ;
  __return_storage_ptr__->field_0x50 = bVar1;
  return __return_storage_ptr__;
}

// AddTag @ 14a3e55c0

TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<FMovieSceneControlRigSpaceChannel_const_*>,UE::MovieScene::FAdd>
* __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<FMovieSceneControlRigSpaceChannel_const_*>_>
::AddTag(TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<FMovieSceneControlRigSpaceChannel_const_*>_>
         *this,TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<FMovieSceneControlRigSpaceChannel_const_*>,UE::MovieScene::FAdd>
               *__return_storage_ptr__,FComponentTypeID param_1)

{
  bool bVar1;
  char cVar2;
  
  bVar1 = this->bAddMutualComponents;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02__U__TAdd_UFControlRigSourceData_MovieScene_UE___MovieScene_UE__U__TAdd_VFName___34_U__TAdd_PEBUFMovieSceneControlRigSpaceChannel___34_UFAdd_34__MovieScene_UE__6B_
  ;
  *(undefined2 *)&__return_storage_ptr__->field_0x8 = *(undefined2 *)&this->Payload;
  __return_storage_ptr__->field_0x18 = 0;
  cVar2 = (this->Payload).field_0x10;
  __return_storage_ptr__->field_0x18 = cVar2;
  if (cVar2 != '\0') {
    *(undefined8 *)&__return_storage_ptr__->field_0x10 = *(undefined8 *)&(this->Payload).field_0x8;
  }
  *(undefined2 *)&__return_storage_ptr__->field_0x20 = *(undefined2 *)&(this->Payload).field_0x18;
  *(undefined4 *)&__return_storage_ptr__->field_0x24 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  if (*(int *)&(this->Payload).field_0x1c != -1) {
    *(undefined8 *)&__return_storage_ptr__->field_0x24 = *(undefined8 *)&(this->Payload).field_0x1c;
  }
  *(undefined2 *)&__return_storage_ptr__->field_0x30 = *(undefined2 *)&(this->Payload).field_0x28;
  __return_storage_ptr__->field_0x40 = 0;
  cVar2 = (this->Payload).field_0x38;
  __return_storage_ptr__->field_0x40 = cVar2;
  if (cVar2 != '\0') {
    *(undefined8 *)&__return_storage_ptr__->field_0x38 = *(undefined8 *)&(this->Payload).field_0x30;
  }
  *(ushort *)&__return_storage_ptr__->field_0x48 = param_1.Value;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilder_U__TAdd_UFControlRigSourceData_MovieScene_UE___MovieScene_UE__U__TAdd_VFName___23_U__TAdd_PEBUFMovieSceneControlRigSpaceChannel___23_UFAdd_23__MovieScene_UE__6B_
  ;
  __return_storage_ptr__->field_0x50 = bVar1;
  return __return_storage_ptr__;
}

// AddTag @ 14a3e5650

TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::FAdd>
* __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>_>
::AddTag(TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>_>
         *this,TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::FAdd>
               *__return_storage_ptr__,FComponentTypeID param_1)

{
  bool bVar1;
  char cVar2;
  
  bVar1 = this->bAddMutualComponents;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02__U__TAdd_UFControlRigSourceData_MovieScene_UE___MovieScene_UE__U__TAdd_VFName___34_U__TAdd_UFSourceBoolChannel_MovieScene_UE___34_UFAdd_34__MovieScene_UE__6B_
  ;
  *(undefined2 *)&__return_storage_ptr__->field_0x8 = *(undefined2 *)&this->Payload;
  __return_storage_ptr__->field_0x18 = 0;
  cVar2 = (this->Payload).field_0x10;
  __return_storage_ptr__->field_0x18 = cVar2;
  if (cVar2 != '\0') {
    *(undefined8 *)&__return_storage_ptr__->field_0x10 = *(undefined8 *)&(this->Payload).field_0x8;
  }
  *(undefined2 *)&__return_storage_ptr__->field_0x20 = *(undefined2 *)&(this->Payload).field_0x18;
  *(undefined4 *)&__return_storage_ptr__->field_0x24 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  if (*(int *)&(this->Payload).field_0x1c != -1) {
    *(undefined8 *)&__return_storage_ptr__->field_0x24 = *(undefined8 *)&(this->Payload).field_0x1c;
  }
  *(undefined2 *)&__return_storage_ptr__->field_0x30 = *(undefined2 *)&(this->Payload).field_0x28;
  __return_storage_ptr__->field_0x40 = 0;
  cVar2 = (this->Payload).field_0x38;
  __return_storage_ptr__->field_0x40 = cVar2;
  if (cVar2 != '\0') {
    *(undefined8 *)&__return_storage_ptr__->field_0x38 = *(undefined8 *)&(this->Payload).field_0x30;
  }
  *(ushort *)&__return_storage_ptr__->field_0x48 = param_1.Value;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilder_U__TAdd_UFControlRigSourceData_MovieScene_UE___MovieScene_UE__U__TAdd_VFName___23_U__TAdd_UFSourceBoolChannel_MovieScene_UE___23_UFAdd_23__MovieScene_UE__6B_
  ;
  __return_storage_ptr__->field_0x50 = bVar1;
  return __return_storage_ptr__;
}

// AddTag @ 14a3e56e0

TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
* __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd>
::AddTag(TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd>
         *this,TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
               *__return_storage_ptr__,FComponentTypeID param_1)

{
  bool bVar1;
  char cVar2;
  
  bVar1 = this->bAddMutualComponents;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02__U__TAdd_UFControlRigSourceData_MovieScene_UE___MovieScene_UE__U__TAdd_VFName___34_UFAdd_34_U634__MovieScene_UE__6B_
  ;
  *(undefined2 *)&__return_storage_ptr__->field_0x8 = *(undefined2 *)&this->Payload;
  __return_storage_ptr__->field_0x18 = 0;
  cVar2 = (this->Payload).field_0x10;
  __return_storage_ptr__->field_0x18 = cVar2;
  if (cVar2 != '\0') {
    *(undefined8 *)&__return_storage_ptr__->field_0x10 = *(undefined8 *)&(this->Payload).field_0x8;
  }
  *(undefined2 *)&__return_storage_ptr__->field_0x20 = *(undefined2 *)&(this->Payload).field_0x18;
  *(undefined4 *)&__return_storage_ptr__->field_0x24 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  if (*(int *)&(this->Payload).field_0x1c != -1) {
    *(undefined8 *)&__return_storage_ptr__->field_0x24 = *(undefined8 *)&(this->Payload).field_0x1c;
  }
  *(undefined2 *)&__return_storage_ptr__->field_0x2c = *(undefined2 *)&(this->Payload).field_0x24;
  *(ushort *)&__return_storage_ptr__->field_0x2e = param_1.Value;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilder_U__TAdd_UFControlRigSourceData_MovieScene_UE___MovieScene_UE__U__TAdd_VFName___23_UFAdd_23_U523__MovieScene_UE__6B_
  ;
  __return_storage_ptr__->field_0x30 = bVar1;
  return __return_storage_ptr__;
}

// AddTag @ 14a3e5760

TEntityBuilder<UE::MovieScene::TAdd<FMovieSceneBlendChannelID>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
* __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAdd<FMovieSceneBlendChannelID>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
::AddTag(TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAdd<FMovieSceneBlendChannelID>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
         *this,TEntityBuilder<UE::MovieScene::TAdd<FMovieSceneBlendChannelID>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
               *__return_storage_ptr__,FComponentTypeID param_1)

{
  bool bVar1;
  char cVar2;
  
  bVar1 = this->bAddMutualComponents;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02__U__TAdd_UFMovieSceneBlendChannelID___MovieScene_UE__UFAdd_34_U534_U534__MovieScene_UE__6B_
  ;
  *(undefined2 *)&__return_storage_ptr__->field_0x8 = *(undefined2 *)&this->Payload;
  __return_storage_ptr__->field_0xe = 0;
  cVar2 = (this->Payload).field_0x6;
  __return_storage_ptr__->field_0xe = cVar2;
  if (cVar2 != '\0') {
    *(undefined4 *)&__return_storage_ptr__->field_0xa = *(undefined4 *)&(this->Payload).field_0x2;
  }
  *(undefined2 *)&__return_storage_ptr__->field_0x10 = *(undefined2 *)&(this->Payload).field_0x8;
  *(undefined2 *)&__return_storage_ptr__->field_0x12 = *(undefined2 *)&(this->Payload).field_0xa;
  *(ushort *)&__return_storage_ptr__->field_0x14 = param_1.Value;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilder_U__TAdd_UFMovieSceneBlendChannelID___MovieScene_UE__UFAdd_23_U423_U423__MovieScene_UE__6B_
  ;
  __return_storage_ptr__->field_0x16 = bVar1;
  return __return_storage_ptr__;
}

// AddTag @ 14a3e57c0

TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd>
* __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>_>
::AddTag(TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>_>
         *this,TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd>
               *__return_storage_ptr__,FComponentTypeID param_1)

{
  bool bVar1;
  char cVar2;
  
  bVar1 = this->bAddMutualComponents;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01__U__TAdd_UFControlRigSourceData_MovieScene_UE___MovieScene_UE__U__TAdd_VFName___34_UFAdd_34__MovieScene_UE__6B_
  ;
  *(undefined2 *)&__return_storage_ptr__->field_0x8 = *(undefined2 *)&this->Payload;
  __return_storage_ptr__->field_0x18 = 0;
  cVar2 = (this->Payload).field_0x10;
  __return_storage_ptr__->field_0x18 = cVar2;
  if (cVar2 != '\0') {
    *(undefined8 *)&__return_storage_ptr__->field_0x10 = *(undefined8 *)&(this->Payload).field_0x8;
  }
  *(undefined2 *)&__return_storage_ptr__->field_0x20 = *(undefined2 *)&(this->Payload).field_0x18;
  *(undefined4 *)&__return_storage_ptr__->field_0x24 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  if (*(int *)&(this->Payload).field_0x1c != -1) {
    *(undefined8 *)&__return_storage_ptr__->field_0x24 = *(undefined8 *)&(this->Payload).field_0x1c;
  }
  *(ushort *)&__return_storage_ptr__->field_0x2c = param_1.Value;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilder_U__TAdd_UFControlRigSourceData_MovieScene_UE___MovieScene_UE__U__TAdd_VFName___23_UFAdd_23__MovieScene_UE__6B_
  ;
  __return_storage_ptr__->field_0x30 = bVar1;
  return __return_storage_ptr__;
}

// AddTag @ 14a3e5830

TEntityBuilder<UE::MovieScene::TAdd<FMovieSceneBlendChannelID>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
* __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<FMovieSceneBlendChannelID>,UE::MovieScene::FAdd>
::AddTag(TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<FMovieSceneBlendChannelID>,UE::MovieScene::FAdd>
         *this,TEntityBuilder<UE::MovieScene::TAdd<FMovieSceneBlendChannelID>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
               *__return_storage_ptr__,FComponentTypeID param_1)

{
  bool bVar1;
  char cVar2;
  
  bVar1 = this->bAddMutualComponents;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01__U__TAdd_UFMovieSceneBlendChannelID___MovieScene_UE__UFAdd_34_U534__MovieScene_UE__6B_
  ;
  *(undefined2 *)&__return_storage_ptr__->field_0x8 = *(undefined2 *)&this->Payload;
  __return_storage_ptr__->field_0xe = 0;
  cVar2 = (this->Payload).field_0x6;
  __return_storage_ptr__->field_0xe = cVar2;
  if (cVar2 != '\0') {
    *(undefined4 *)&__return_storage_ptr__->field_0xa = *(undefined4 *)&(this->Payload).field_0x2;
  }
  *(undefined2 *)&__return_storage_ptr__->field_0x10 = *(undefined2 *)&(this->Payload).field_0x8;
  *(ushort *)&__return_storage_ptr__->field_0x12 = param_1.Value;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilder_U__TAdd_UFMovieSceneBlendChannelID___MovieScene_UE__UFAdd_23_U423__MovieScene_UE__6B_
  ;
  __return_storage_ptr__->field_0x14 = bVar1;
  return __return_storage_ptr__;
}

// AddTagConditional @ 14a3e5890

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>
* __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11,12,13>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
::AddTagConditional(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11,12,13>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
                    *this,TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>
                          *__return_storage_ptr__,FComponentTypeID param_1,bool param_2)

{
  FAddConditional local_res20 [2];
  
  local_res20[0].ComponentTypeID.Value = param_1.Value;
  local_res20[0].bCondition = param_2;
  TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>
  ::
  TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>
            ((TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>
              *)__return_storage_ptr__,(TAdd<UE::MovieScene::FControlRigSourceData> *)&this->Payload
             ,(TAdd<FName> *)&(this->Payload).field_0x18,(FAdd *)&(this->Payload).field_0x24,
             (FAdd *)&(this->Payload).field_0x26,
             (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&(this->Payload).field_0x28,
             (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&(this->Payload).field_0x40,
             (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&(this->Payload).field_0x58,
             (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&(this->Payload).field_0x70,
             (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&(this->Payload).field_0x88,
             (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&(this->Payload).field_0xa0,
             (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&(this->Payload).field_0xb8,
             (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&(this->Payload).field_0xd0,
             (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&(this->Payload).field_0xe8,
             (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&(this->Payload).field_0x100,
             local_res20,this->bAddMutualComponents);
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilder_U__TAdd_UFControlRigSourceData_MovieScene_UE___MovieScene_UE__U__TAdd_VFName___23_UFAdd_23_U523_U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___23_U623_U623_U623_U623_U623_U623_U623_U623_U623_UFAddConditional_23__MovieScene_UE__6B_
  ;
  return __return_storage_ptr__;
}

// AddTagConditional @ 14a3e5990

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>
* __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
::AddTagConditional(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
                    *this,TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>
                          *__return_storage_ptr__,FComponentTypeID param_1,bool param_2)

{
  FAddConditional local_res20 [2];
  
  local_res20[0].ComponentTypeID.Value = param_1.Value;
  local_res20[0].bCondition = param_2;
  TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>
  ::
  TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>
            ((TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>
              *)__return_storage_ptr__,(TAdd<UE::MovieScene::FControlRigSourceData> *)&this->Payload
             ,(TAdd<FName> *)&(this->Payload).field_0x18,(FAdd *)&(this->Payload).field_0x24,
             (FAdd *)&(this->Payload).field_0x26,
             (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&(this->Payload).field_0x28,
             (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&(this->Payload).field_0x40,
             (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&(this->Payload).field_0x58,
             (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&(this->Payload).field_0x70,
             local_res20,this->bAddMutualComponents);
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilder_U__TAdd_UFControlRigSourceData_MovieScene_UE___MovieScene_UE__U__TAdd_VFName___23_UFAdd_23_U523_U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___23_U623_U623_U623_UFAddConditional_23__MovieScene_UE__6B_
  ;
  return __return_storage_ptr__;
}

// AddTagConditional @ 14a3e5a40

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>
* __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
::AddTagConditional(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
                    *this,TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>
                          *__return_storage_ptr__,FComponentTypeID param_1,bool param_2)

{
  FAddConditional local_res20 [2];
  
  local_res20[0].ComponentTypeID.Value = param_1.Value;
  local_res20[0].bCondition = param_2;
  TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>
  ::
  TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>
            ((TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>
              *)__return_storage_ptr__,(TAdd<UE::MovieScene::FControlRigSourceData> *)&this->Payload
             ,(TAdd<FName> *)&(this->Payload).field_0x18,(FAdd *)&(this->Payload).field_0x24,
             (FAdd *)&(this->Payload).field_0x26,
             (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&(this->Payload).field_0x28,
             (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&(this->Payload).field_0x40,
             (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&(this->Payload).field_0x58,
             local_res20,this->bAddMutualComponents);
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilder_U__TAdd_UFControlRigSourceData_MovieScene_UE___MovieScene_UE__U__TAdd_VFName___23_UFAdd_23_U523_U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___23_U623_U623_UFAddConditional_23__MovieScene_UE__6B_
  ;
  return __return_storage_ptr__;
}

// AddTagConditional @ 14a3e5ad0

TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>
* __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>_>
::AddTagConditional(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>_>
                    *this,TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>
                          *__return_storage_ptr__,FComponentTypeID param_1,bool param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 local_res20;
  
  bVar1 = this->bAddMutualComponents;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02_03_04__U__TAdd_UFControlRigSourceData_MovieScene_UE___MovieScene_UE__U__TAdd_VFName___34_UFAdd_34_U634_U__TAdd_UFSourceFloatChannel_MovieScene_UE___34_UFAddConditional_34__MovieScene_UE__6B_
  ;
  *(undefined2 *)&__return_storage_ptr__->field_0x8 = *(undefined2 *)&this->Payload;
  __return_storage_ptr__->field_0x18 = 0;
  cVar2 = (this->Payload).field_0x10;
  local_res20._0_3_ = CONCAT12(param_2,param_1.Value);
  __return_storage_ptr__->field_0x18 = cVar2;
  if (cVar2 != '\0') {
    *(undefined8 *)&__return_storage_ptr__->field_0x10 = *(undefined8 *)&(this->Payload).field_0x8;
  }
  *(undefined2 *)&__return_storage_ptr__->field_0x20 = *(undefined2 *)&(this->Payload).field_0x18;
  *(undefined4 *)&__return_storage_ptr__->field_0x24 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  if (*(int *)&(this->Payload).field_0x1c != -1) {
    *(undefined8 *)&__return_storage_ptr__->field_0x24 = *(undefined8 *)&(this->Payload).field_0x1c;
  }
  *(undefined2 *)&__return_storage_ptr__->field_0x2c = *(undefined2 *)&(this->Payload).field_0x24;
  *(undefined2 *)&__return_storage_ptr__->field_0x2e = *(undefined2 *)&(this->Payload).field_0x26;
  *(undefined2 *)&__return_storage_ptr__->field_0x30 = *(undefined2 *)&(this->Payload).field_0x28;
  __return_storage_ptr__->field_0x40 = 0;
  cVar2 = (this->Payload).field_0x38;
  __return_storage_ptr__->field_0x40 = cVar2;
  if (cVar2 != '\0') {
    *(undefined8 *)&__return_storage_ptr__->field_0x38 = *(undefined8 *)&(this->Payload).field_0x30;
  }
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = local_res20;
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TEntityBuilder_U__TAdd_UFControlRigSourceData_MovieScene_UE___MovieScene_UE__U__TAdd_VFName___23_UFAdd_23_U523_U__TAdd_UFSourceFloatChannel_MovieScene_UE___23_UFAddConditional_23__MovieScene_UE__6B_
  ;
  __return_storage_ptr__->field_0x50 = bVar1;
  return __return_storage_ptr__;
}

// Create @ 14a3ff630

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneEntityID __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>
::Create(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>
         *this,FEntityManager *param_1)

{
  FComponentMask *in_R8;
  
  FEntityBuilderImplBase::CreateEntity((FEntityBuilderImplBase *)this,param_1,in_R8);
  return (FMovieSceneEntityID)(ushort)param_1;
}

// Create @ 14a3ff670

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneEntityID __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11,12,13>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
::Create(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11,12,13>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
         *this,FEntityManager *param_1)

{
  FComponentMask *in_R8;
  
  FEntityBuilderImplBase::CreateEntity((FEntityBuilderImplBase *)this,param_1,in_R8);
  return (FMovieSceneEntityID)(ushort)param_1;
}

// Create @ 14a3ff6b0

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneEntityID __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11,12>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
::Create(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11,12>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
         *this,FEntityManager *param_1)

{
  FComponentMask *in_R8;
  
  FEntityBuilderImplBase::CreateEntity((FEntityBuilderImplBase *)this,param_1,in_R8);
  return (FMovieSceneEntityID)(ushort)param_1;
}

// Create @ 14a3ff6f0

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneEntityID __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
::Create(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
         *this,FEntityManager *param_1)

{
  FComponentMask *in_R8;
  
  FEntityBuilderImplBase::CreateEntity((FEntityBuilderImplBase *)this,param_1,in_R8);
  return (FMovieSceneEntityID)(ushort)param_1;
}

// Create @ 14a3ff730

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneEntityID __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
::Create(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
         *this,FEntityManager *param_1)

{
  FComponentMask *in_R8;
  
  FEntityBuilderImplBase::CreateEntity((FEntityBuilderImplBase *)this,param_1,in_R8);
  return (FMovieSceneEntityID)(ushort)param_1;
}

// Create @ 14a3ff770

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneEntityID __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
::Create(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
         *this,FEntityManager *param_1)

{
  FComponentMask *in_R8;
  
  FEntityBuilderImplBase::CreateEntity((FEntityBuilderImplBase *)this,param_1,in_R8);
  return (FMovieSceneEntityID)(ushort)param_1;
}

// Create @ 14a3ff7b0

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneEntityID __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
::Create(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
         *this,FEntityManager *param_1)

{
  FComponentMask *in_R8;
  
  FEntityBuilderImplBase::CreateEntity((FEntityBuilderImplBase *)this,param_1,in_R8);
  return (FMovieSceneEntityID)(ushort)param_1;
}

// Create @ 14a3ff7f0

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneEntityID __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>
::Create(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>
         *this,FEntityManager *param_1)

{
  FComponentMask *in_R8;
  
  FEntityBuilderImplBase::CreateEntity((FEntityBuilderImplBase *)this,param_1,in_R8);
  return (FMovieSceneEntityID)(ushort)param_1;
}

// Create @ 14a3ff830

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneEntityID __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
::Create(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
         *this,FEntityManager *param_1)

{
  FComponentMask *in_R8;
  
  FEntityBuilderImplBase::CreateEntity((FEntityBuilderImplBase *)this,param_1,in_R8);
  return (FMovieSceneEntityID)(ushort)param_1;
}

// Create @ 14a3ff870

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneEntityID __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>
::Create(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>
         *this,FEntityManager *param_1)

{
  FComponentMask *in_R8;
  
  FEntityBuilderImplBase::CreateEntity((FEntityBuilderImplBase *)this,param_1,in_R8);
  return (FMovieSceneEntityID)(ushort)param_1;
}

// Create @ 14a3ff8b0

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneEntityID __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<UE::MovieScene::FBaseControlRigEvalData>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
::Create(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<UE::MovieScene::FBaseControlRigEvalData>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
         *this,FEntityManager *param_1)

{
  FComponentMask *in_R8;
  
  FEntityBuilderImplBase::CreateEntity((FEntityBuilderImplBase *)this,param_1,in_R8);
  return (FMovieSceneEntityID)(ushort)param_1;
}

// Create @ 14a3ff8f0

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneEntityID __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
::Create(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
         *this,FEntityManager *param_1)

{
  FComponentMask *in_R8;
  
  FEntityBuilderImplBase::CreateEntity((FEntityBuilderImplBase *)this,param_1,in_R8);
  return (FMovieSceneEntityID)(ushort)param_1;
}

// Create @ 14a3ff930

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneEntityID __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
::Create(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
         *this,FEntityManager *param_1)

{
  FComponentMask *in_R8;
  
  FEntityBuilderImplBase::CreateEntity((FEntityBuilderImplBase *)this,param_1,in_R8);
  return (FMovieSceneEntityID)(ushort)param_1;
}

// Create @ 14a3ff970

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneEntityID __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<UE::MovieScene::FBaseControlRigEvalData>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
::Create(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<UE::MovieScene::FBaseControlRigEvalData>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
         *this,FEntityManager *param_1)

{
  FComponentMask *in_R8;
  
  FEntityBuilderImplBase::CreateEntity((FEntityBuilderImplBase *)this,param_1,in_R8);
  return (FMovieSceneEntityID)(ushort)param_1;
}

// Create @ 14a3ff9b0

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneEntityID __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceByteChannel>_>
::Create(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceByteChannel>_>
         *this,FEntityManager *param_1)

{
  FComponentMask *in_R8;
  
  FEntityBuilderImplBase::CreateEntity((FEntityBuilderImplBase *)this,param_1,in_R8);
  return (FMovieSceneEntityID)(ushort)param_1;
}

// Create @ 14a3ff9f0

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneEntityID __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>
::Create(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>
         *this,FEntityManager *param_1)

{
  FComponentMask *in_R8;
  
  FEntityBuilderImplBase::CreateEntity((FEntityBuilderImplBase *)this,param_1,in_R8);
  return (FMovieSceneEntityID)(ushort)param_1;
}

// Create @ 14a3ffa30

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneEntityID __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
::Create(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
         *this,FEntityManager *param_1)

{
  FComponentMask *in_R8;
  
  FEntityBuilderImplBase::CreateEntity((FEntityBuilderImplBase *)this,param_1,in_R8);
  return (FMovieSceneEntityID)(ushort)param_1;
}

// Create @ 14a3ffa70

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneEntityID __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<UE::MovieScene::FBaseControlRigEvalData>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd>
::Create(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<UE::MovieScene::FBaseControlRigEvalData>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd>
         *this,FEntityManager *param_1)

{
  FComponentMask *in_R8;
  
  FEntityBuilderImplBase::CreateEntity((FEntityBuilderImplBase *)this,param_1,in_R8);
  return (FMovieSceneEntityID)(ushort)param_1;
}

// Create @ 14a3ffab0

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneEntityID __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
::Create(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
         *this,FEntityManager *param_1)

{
  FComponentMask *in_R8;
  
  FEntityBuilderImplBase::CreateEntity((FEntityBuilderImplBase *)this,param_1,in_R8);
  return (FMovieSceneEntityID)(ushort)param_1;
}

// Create @ 14a3ffaf0

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneEntityID __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<FMovieSceneControlRigSpaceChannel_const_*>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
::Create(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<FMovieSceneControlRigSpaceChannel_const_*>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
         *this,FEntityManager *param_1)

{
  FComponentMask *in_R8;
  
  FEntityBuilderImplBase::CreateEntity((FEntityBuilderImplBase *)this,param_1,in_R8);
  return (FMovieSceneEntityID)(ushort)param_1;
}

// Create @ 14a3ffb30

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneEntityID __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
::Create(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
         *this,FEntityManager *param_1)

{
  FComponentMask *in_R8;
  
  FEntityBuilderImplBase::CreateEntity((FEntityBuilderImplBase *)this,param_1,in_R8);
  return (FMovieSceneEntityID)(ushort)param_1;
}

// Create @ 14a3ffb70

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneEntityID __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>_>
::Create(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>_>
         *this,FEntityManager *param_1)

{
  FComponentMask *in_R8;
  
  FEntityBuilderImplBase::CreateEntity((FEntityBuilderImplBase *)this,param_1,in_R8);
  return (FMovieSceneEntityID)(ushort)param_1;
}

// Create @ 14a3ffbb0

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneEntityID __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceIntegerChannel>_>
::Create(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceIntegerChannel>_>
         *this,FEntityManager *param_1)

{
  FComponentMask *in_R8;
  
  FEntityBuilderImplBase::CreateEntity((FEntityBuilderImplBase *)this,param_1,in_R8);
  return (FMovieSceneEntityID)(ushort)param_1;
}

// Create @ 14a3ffbf0

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneEntityID __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
::Create(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
         *this,FEntityManager *param_1)

{
  FComponentMask *in_R8;
  
  FEntityBuilderImplBase::CreateEntity((FEntityBuilderImplBase *)this,param_1,in_R8);
  return (FMovieSceneEntityID)(ushort)param_1;
}

// Create @ 14a3ffc30

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneEntityID __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<UE::MovieScene::FBaseControlRigEvalData>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
::Create(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<UE::MovieScene::FBaseControlRigEvalData>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
         *this,FEntityManager *param_1)

{
  FComponentMask *in_R8;
  
  FEntityBuilderImplBase::CreateEntity((FEntityBuilderImplBase *)this,param_1,in_R8);
  return (FMovieSceneEntityID)(ushort)param_1;
}

// Create @ 14a3ffc70

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneEntityID __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::FAdd>
::Create(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::FAdd>
         *this,FEntityManager *param_1)

{
  FComponentMask *in_R8;
  
  FEntityBuilderImplBase::CreateEntity((FEntityBuilderImplBase *)this,param_1,in_R8);
  return (FMovieSceneEntityID)(ushort)param_1;
}

// Create @ 14a3ffcb0

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneEntityID __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<FMovieSceneControlRigSpaceChannel_const_*>,UE::MovieScene::FAdd>
::Create(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<FMovieSceneControlRigSpaceChannel_const_*>,UE::MovieScene::FAdd>
         *this,FEntityManager *param_1)

{
  FComponentMask *in_R8;
  
  FEntityBuilderImplBase::CreateEntity((FEntityBuilderImplBase *)this,param_1,in_R8);
  return (FMovieSceneEntityID)(ushort)param_1;
}

// Create @ 14a3ffcf0

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneEntityID __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::FAdd>
::Create(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::FAdd>
         *this,FEntityManager *param_1)

{
  FComponentMask *in_R8;
  
  FEntityBuilderImplBase::CreateEntity((FEntityBuilderImplBase *)this,param_1,in_R8);
  return (FMovieSceneEntityID)(ushort)param_1;
}

// Create @ 14a3ffd30

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneEntityID __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
::Create(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
         *this,FEntityManager *param_1)

{
  FComponentMask *in_R8;
  
  FEntityBuilderImplBase::CreateEntity((FEntityBuilderImplBase *)this,param_1,in_R8);
  return (FMovieSceneEntityID)(ushort)param_1;
}

// Create @ 14a3ffd70

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneEntityID __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<UE::MovieScene::FBaseControlRigEvalData>_>
::Create(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<UE::MovieScene::FBaseControlRigEvalData>_>
         *this,FEntityManager *param_1)

{
  FComponentMask *in_R8;
  
  FEntityBuilderImplBase::CreateEntity((FEntityBuilderImplBase *)this,param_1,in_R8);
  return (FMovieSceneEntityID)(ushort)param_1;
}

// Create @ 14a3ffdb0

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneEntityID __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TAdd<FMovieSceneBlendChannelID>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
::Create(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TAdd<FMovieSceneBlendChannelID>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
         *this,FEntityManager *param_1)

{
  FComponentMask *in_R8;
  
  FEntityBuilderImplBase::CreateEntity((FEntityBuilderImplBase *)this,param_1,in_R8);
  return (FMovieSceneEntityID)(ushort)param_1;
}

// Create @ 14a3ffdf0

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneEntityID __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>_>
::Create(TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>_>
         *this,FEntityManager *param_1)

{
  FComponentMask *in_R8;
  
  FEntityBuilderImplBase::CreateEntity((FEntityBuilderImplBase *)this,param_1,in_R8);
  return (FMovieSceneEntityID)(ushort)param_1;
}

// Create @ 14a3ffe30

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneEntityID __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<FMovieSceneControlRigSpaceChannel_const_*>_>
::Create(TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<FMovieSceneControlRigSpaceChannel_const_*>_>
         *this,FEntityManager *param_1)

{
  FComponentMask *in_R8;
  
  FEntityBuilderImplBase::CreateEntity((FEntityBuilderImplBase *)this,param_1,in_R8);
  return (FMovieSceneEntityID)(ushort)param_1;
}

// Create @ 14a3ffe70

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneEntityID __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>_>
::Create(TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>_>
         *this,FEntityManager *param_1)

{
  FComponentMask *in_R8;
  
  FEntityBuilderImplBase::CreateEntity((FEntityBuilderImplBase *)this,param_1,in_R8);
  return (FMovieSceneEntityID)(ushort)param_1;
}

// Create @ 14a3ffeb0

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneEntityID __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd>
::Create(TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd>
         *this,FEntityManager *param_1)

{
  FComponentMask *in_R8;
  
  FEntityBuilderImplBase::CreateEntity((FEntityBuilderImplBase *)this,param_1,in_R8);
  return (FMovieSceneEntityID)(ushort)param_1;
}

// Create @ 14a3ffef0

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneEntityID __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>_>
::Create(TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>_>
         *this,FEntityManager *param_1)

{
  FComponentMask *in_R8;
  
  FEntityBuilderImplBase::CreateEntity((FEntityBuilderImplBase *)this,param_1,in_R8);
  return (FMovieSceneEntityID)(ushort)param_1;
}

// Create @ 14a3fff30

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneEntityID __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAdd<FMovieSceneBlendChannelID>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
::Create(TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAdd<FMovieSceneBlendChannelID>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
         *this,FEntityManager *param_1)

{
  FComponentMask *in_R8;
  
  FEntityBuilderImplBase::CreateEntity((FEntityBuilderImplBase *)this,param_1,in_R8);
  return (FMovieSceneEntityID)(ushort)param_1;
}

// Create @ 14a3fff70

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneEntityID __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>_>
::Create(TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>_>
         *this,FEntityManager *param_1)

{
  FComponentMask *in_R8;
  
  FEntityBuilderImplBase::CreateEntity((FEntityBuilderImplBase *)this,param_1,in_R8);
  return (FMovieSceneEntityID)(ushort)param_1;
}

// Create @ 14a3fffb0

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneEntityID __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>_>
::Create(TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>_>
         *this,FEntityManager *param_1)

{
  FComponentMask *in_R8;
  
  FEntityBuilderImplBase::CreateEntity((FEntityBuilderImplBase *)this,param_1,in_R8);
  return (FMovieSceneEntityID)(ushort)param_1;
}

// GenerateType @ 14a40f5a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>
::GenerateType(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>
               *this,FEntityManager *param_1,FComponentMask *param_2,bool *param_3)

{
  <lambda_1> local_res8;
  
  local_res8.OutMask = param_2;
  Core::Private::Tuple::
  TVisitTupleElements_Impl<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14>_>::
  Do<_UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>::GenerateType_::__l2::<lambda_1>,TTuple<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>_&>
            (&local_res8,&this->Payload);
  if (this->bAddMutualComponents != false) {
    *param_3 = true;
  }
  return;
}

// GenerateType @ 14a40f5e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11,12,13>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
::GenerateType(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11,12,13>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
               *this,FEntityManager *param_1,FComponentMask *param_2,bool *param_3)

{
  <lambda_1> local_res8;
  
  local_res8.OutMask = param_2;
  Core::Private::Tuple::
  TVisitTupleElements_Impl<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11,12,13>_>::
  Do<_UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11,12,13>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>::GenerateType_::__l2::<lambda_1>,TTuple<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>_&>
            (&local_res8,&this->Payload);
  if (this->bAddMutualComponents != false) {
    *param_3 = true;
  }
  return;
}

// GenerateType @ 14a40f620

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11,12>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
::GenerateType(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11,12>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
               *this,FEntityManager *param_1,FComponentMask *param_2,bool *param_3)

{
  <lambda_1> local_res8;
  
  local_res8.OutMask = param_2;
  Core::Private::Tuple::
  TVisitTupleElements_Impl<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11,12>_>::
  Do<_UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11,12>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>::GenerateType_::__l2::<lambda_1>,TTuple<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>_&>
            (&local_res8,&this->Payload);
  if (this->bAddMutualComponents != false) {
    *param_3 = true;
  }
  return;
}

// GenerateType @ 14a40f660

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
::GenerateType(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
               *this,FEntityManager *param_1,FComponentMask *param_2,bool *param_3)

{
  <lambda_1> local_res8;
  
  local_res8.OutMask = param_2;
  Core::Private::Tuple::
  TVisitTupleElements_Impl<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11>_>::
  Do<_UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>::GenerateType_::__l2::<lambda_1>,TTuple<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>_&>
            (&local_res8,&this->Payload);
  if (this->bAddMutualComponents != false) {
    *param_3 = true;
  }
  return;
}

// GenerateType @ 14a40f6a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
::GenerateType(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
               *this,FEntityManager *param_1,FComponentMask *param_2,bool *param_3)

{
  <lambda_1> local_res8;
  
  local_res8.OutMask = param_2;
  Core::Private::Tuple::
  TVisitTupleElements_Impl<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10>_>::
  Do<_UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>::GenerateType_::__l2::<lambda_1>,TTuple<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>_&>
            (&local_res8,&this->Payload);
  if (this->bAddMutualComponents != false) {
    *param_3 = true;
  }
  return;
}

// GenerateType @ 14a40f6e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
::GenerateType(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
               *this,FEntityManager *param_1,FComponentMask *param_2,bool *param_3)

{
  <lambda_1> local_res8;
  
  local_res8.OutMask = param_2;
  Core::Private::Tuple::
  TVisitTupleElements_Impl<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9>_>::
  Do<_UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>::GenerateType_::__l2::<lambda_1>,TTuple<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>_&>
            (&local_res8,&this->Payload);
  if (this->bAddMutualComponents != false) {
    *param_3 = true;
  }
  return;
}

// GenerateType @ 14a40f720

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
::GenerateType(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
               *this,FEntityManager *param_1,FComponentMask *param_2,bool *param_3)

{
  <lambda_1> local_res8;
  
  local_res8.OutMask = param_2;
  Core::Private::Tuple::TVisitTupleElements_Impl<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8>_>
  ::
  Do<_UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>::GenerateType_::__l2::<lambda_1>,TTuple<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>_&>
            (&local_res8,&this->Payload);
  if (this->bAddMutualComponents != false) {
    *param_3 = true;
  }
  return;
}

// GenerateType @ 14a40f760

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>
::GenerateType(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>
               *this,FEntityManager *param_1,FComponentMask *param_2,bool *param_3)

{
  <lambda_1> local_res8;
  
  local_res8.OutMask = param_2;
  Core::Private::Tuple::TVisitTupleElements_Impl<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8>_>
  ::
  Do<_UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>::GenerateType_::__l2::<lambda_1>,TTuple<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>_&>
            (&local_res8,&this->Payload);
  if (this->bAddMutualComponents != false) {
    *param_3 = true;
  }
  return;
}

// GenerateType @ 14a40f7a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
::GenerateType(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
               *this,FEntityManager *param_1,FComponentMask *param_2,bool *param_3)

{
  <lambda_1> local_res8;
  
  local_res8.OutMask = param_2;
  Core::Private::Tuple::TVisitTupleElements_Impl<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7>_>::
  Do<_UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>::GenerateType_::__l2::<lambda_1>,TTuple<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>_&>
            (&local_res8,&this->Payload);
  if (this->bAddMutualComponents != false) {
    *param_3 = true;
  }
  return;
}

// GenerateType @ 14a40f7e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>
::GenerateType(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>
               *this,FEntityManager *param_1,FComponentMask *param_2,bool *param_3)

{
  <lambda_1> local_res8;
  
  local_res8.OutMask = param_2;
  Core::Private::Tuple::TVisitTupleElements_Impl<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7>_>::
  Do<_UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>::GenerateType_::__l2::<lambda_1>,TTuple<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>_&>
            (&local_res8,&this->Payload);
  if (this->bAddMutualComponents != false) {
    *param_3 = true;
  }
  return;
}

// GenerateType @ 14a40f820

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<UE::MovieScene::FBaseControlRigEvalData>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
::GenerateType(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<UE::MovieScene::FBaseControlRigEvalData>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
               *this,FEntityManager *param_1,FComponentMask *param_2,bool *param_3)

{
  <lambda_1> local_res8;
  
  local_res8.OutMask = param_2;
  Core::Private::Tuple::TVisitTupleElements_Impl<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7>_>::
  Do<_UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<UE::MovieScene::FBaseControlRigEvalData>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAdd>::GenerateType_::__l2::<lambda_1>,TTuple<UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<UE::MovieScene::FBaseControlRigEvalData>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAdd>_&>
            (&local_res8,&this->Payload);
  if (this->bAddMutualComponents != false) {
    *param_3 = true;
  }
  return;
}

// GenerateType @ 14a40f860

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
::GenerateType(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
               *this,FEntityManager *param_1,FComponentMask *param_2,bool *param_3)

{
  <lambda_1> local_res8;
  
  local_res8.OutMask = param_2;
  Core::Private::Tuple::TVisitTupleElements_Impl<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6>_>::
  Do<_UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>::GenerateType_::__l2::<lambda_1>,TTuple<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>_&>
            (&local_res8,&this->Payload);
  if (this->bAddMutualComponents != false) {
    *param_3 = true;
  }
  return;
}

// GenerateType @ 14a40f8a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
::GenerateType(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
               *this,FEntityManager *param_1,FComponentMask *param_2,bool *param_3)

{
  <lambda_1> local_res8;
  
  local_res8.OutMask = param_2;
  Core::Private::Tuple::TVisitTupleElements_Impl<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6>_>::
  Do<_UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>::GenerateType_::__l2::<lambda_1>,TTuple<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>_&>
            (&local_res8,&this->Payload);
  if (this->bAddMutualComponents != false) {
    *param_3 = true;
  }
  return;
}

// GenerateType @ 14a40f8e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<UE::MovieScene::FBaseControlRigEvalData>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
::GenerateType(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<UE::MovieScene::FBaseControlRigEvalData>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
               *this,FEntityManager *param_1,FComponentMask *param_2,bool *param_3)

{
  <lambda_1> local_res8;
  
  local_res8.OutMask = param_2;
  Core::Private::Tuple::TVisitTupleElements_Impl<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6>_>::
  Do<_UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<UE::MovieScene::FBaseControlRigEvalData>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>::GenerateType_::__l2::<lambda_1>,TTuple<UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<UE::MovieScene::FBaseControlRigEvalData>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>_&>
            (&local_res8,&this->Payload);
  if (this->bAddMutualComponents != false) {
    *param_3 = true;
  }
  return;
}

// GenerateType @ 14a40f920

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceByteChannel>_>
::GenerateType(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceByteChannel>_>
               *this,FEntityManager *param_1,FComponentMask *param_2,bool *param_3)

{
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&this->Payload);
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&(this->Payload).field_0x18);
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&(this->Payload).field_0x28);
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&(this->Payload).field_0x40);
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&(this->Payload).field_0x42);
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&(this->Payload).field_0x48);
  if (this->bAddMutualComponents != false) {
    *param_3 = true;
  }
  return;
}

// GenerateType @ 14a40f9a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>
::GenerateType(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>
               *this,FEntityManager *param_1,FComponentMask *param_2,bool *param_3)

{
  <lambda_1> local_res8;
  
  local_res8.OutMask = param_2;
  Core::Private::Tuple::TVisitTupleElements_Impl<TIntegerSequence<unsigned_int,0,1,2,3,4,5>_>::
  Do<_UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>::GenerateType_::__l2::<lambda_1>,TTuple<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>_&>
            (&local_res8,&this->Payload);
  if (this->bAddMutualComponents != false) {
    *param_3 = true;
  }
  return;
}

// GenerateType @ 14a40f9e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
::GenerateType(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
               *this,FEntityManager *param_1,FComponentMask *param_2,bool *param_3)

{
  <lambda_1> local_res8;
  
  local_res8.OutMask = param_2;
  Core::Private::Tuple::TVisitTupleElements_Impl<TIntegerSequence<unsigned_int,0,1,2,3,4,5>_>::
  Do<_UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>::GenerateType_::__l2::<lambda_1>,TTuple<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>_&>
            (&local_res8,&this->Payload);
  if (this->bAddMutualComponents != false) {
    *param_3 = true;
  }
  return;
}

// GenerateType @ 14a40fa20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<UE::MovieScene::FBaseControlRigEvalData>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd>
::GenerateType(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<UE::MovieScene::FBaseControlRigEvalData>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd>
               *this,FEntityManager *param_1,FComponentMask *param_2,bool *param_3)

{
  <lambda_1> local_res8;
  
  local_res8.OutMask = param_2;
  Core::Private::Tuple::TVisitTupleElements_Impl<TIntegerSequence<unsigned_int,0,1,2,3,4,5>_>::
  Do<_UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<UE::MovieScene::FBaseControlRigEvalData>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd>::GenerateType_::__l2::<lambda_1>,TTuple<UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<UE::MovieScene::FBaseControlRigEvalData>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd>_&>
            (&local_res8,&this->Payload);
  if (this->bAddMutualComponents != false) {
    *param_3 = true;
  }
  return;
}

// GenerateType @ 14a40fa60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
::GenerateType(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
               *this,FEntityManager *param_1,FComponentMask *param_2,bool *param_3)

{
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&this->Payload);
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&(this->Payload).field_0x18);
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&(this->Payload).field_0x28);
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&(this->Payload).field_0x40);
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&(this->Payload).field_0x42);
  if (this->bAddMutualComponents != false) {
    *param_3 = true;
  }
  return;
}

// GenerateType @ 14a40fae0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<FMovieSceneControlRigSpaceChannel_const_*>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
::GenerateType(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<FMovieSceneControlRigSpaceChannel_const_*>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
               *this,FEntityManager *param_1,FComponentMask *param_2,bool *param_3)

{
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&this->Payload);
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&(this->Payload).field_0x18);
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&(this->Payload).field_0x28);
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&(this->Payload).field_0x40);
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&(this->Payload).field_0x42);
  if (this->bAddMutualComponents != false) {
    *param_3 = true;
  }
  return;
}

// GenerateType @ 14a40fb60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
::GenerateType(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
               *this,FEntityManager *param_1,FComponentMask *param_2,bool *param_3)

{
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&this->Payload);
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&(this->Payload).field_0x18);
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&(this->Payload).field_0x28);
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&(this->Payload).field_0x40);
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&(this->Payload).field_0x42);
  if (this->bAddMutualComponents != false) {
    *param_3 = true;
  }
  return;
}

// GenerateType @ 14a40fbe0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>_>
::GenerateType(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>_>
               *this,FEntityManager *param_1,FComponentMask *param_2,bool *param_3)

{
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&this->Payload);
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&(this->Payload).field_0x18);
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&(this->Payload).field_0x24);
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&(this->Payload).field_0x26);
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&(this->Payload).field_0x28);
  if (this->bAddMutualComponents != false) {
    *param_3 = true;
  }
  return;
}

// GenerateType @ 14a40fc60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceIntegerChannel>_>
::GenerateType(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceIntegerChannel>_>
               *this,FEntityManager *param_1,FComponentMask *param_2,bool *param_3)

{
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&this->Payload);
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&(this->Payload).field_0x18);
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&(this->Payload).field_0x24);
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&(this->Payload).field_0x26);
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&(this->Payload).field_0x28);
  if (this->bAddMutualComponents != false) {
    *param_3 = true;
  }
  return;
}

// GenerateType @ 14a40fce0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
::GenerateType(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
               *this,FEntityManager *param_1,FComponentMask *param_2,bool *param_3)

{
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&this->Payload);
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&(this->Payload).field_0x18);
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&(this->Payload).field_0x24);
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&(this->Payload).field_0x26);
  if ((this->Payload).field_0x2a != '\0') {
    FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&(this->Payload).field_0x28);
  }
  if (this->bAddMutualComponents != false) {
    *param_3 = true;
  }
  return;
}

// GenerateType @ 14a40fd60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<UE::MovieScene::FBaseControlRigEvalData>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
::GenerateType(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<UE::MovieScene::FBaseControlRigEvalData>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
               *this,FEntityManager *param_1,FComponentMask *param_2,bool *param_3)

{
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&this->Payload);
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&(this->Payload).field_0x18);
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&(this->Payload).field_0x30);
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&(this->Payload).field_0x48);
  if ((this->Payload).field_0x72 != '\0') {
    FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&(this->Payload).field_0x70);
  }
  if (this->bAddMutualComponents != false) {
    *param_3 = true;
  }
  return;
}

// GenerateType @ 14a40fde0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::FAdd>
::GenerateType(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::FAdd>
               *this,FEntityManager *param_1,FComponentMask *param_2,bool *param_3)

{
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&this->Payload);
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&(this->Payload).field_0x18);
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&(this->Payload).field_0x28);
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&(this->Payload).field_0x40);
  if (this->bAddMutualComponents != false) {
    *param_3 = true;
  }
  return;
}

// GenerateType @ 14a40fe50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<FMovieSceneControlRigSpaceChannel_const_*>,UE::MovieScene::FAdd>
::GenerateType(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<FMovieSceneControlRigSpaceChannel_const_*>,UE::MovieScene::FAdd>
               *this,FEntityManager *param_1,FComponentMask *param_2,bool *param_3)

{
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&this->Payload);
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&(this->Payload).field_0x18);
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&(this->Payload).field_0x28);
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&(this->Payload).field_0x40);
  if (this->bAddMutualComponents != false) {
    *param_3 = true;
  }
  return;
}

// GenerateType @ 14a40fec0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::FAdd>
::GenerateType(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::FAdd>
               *this,FEntityManager *param_1,FComponentMask *param_2,bool *param_3)

{
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&this->Payload);
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&(this->Payload).field_0x18);
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&(this->Payload).field_0x28);
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&(this->Payload).field_0x40);
  if (this->bAddMutualComponents != false) {
    *param_3 = true;
  }
  return;
}

// GenerateType @ 14a40ff30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
::GenerateType(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
               *this,FEntityManager *param_1,FComponentMask *param_2,bool *param_3)

{
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&this->Payload);
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&(this->Payload).field_0x18);
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&(this->Payload).field_0x24);
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&(this->Payload).field_0x26);
  if (this->bAddMutualComponents != false) {
    *param_3 = true;
  }
  return;
}

// GenerateType @ 14a40ffa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<UE::MovieScene::FBaseControlRigEvalData>_>
::GenerateType(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<UE::MovieScene::FBaseControlRigEvalData>_>
               *this,FEntityManager *param_1,FComponentMask *param_2,bool *param_3)

{
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&this->Payload);
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&(this->Payload).field_0x18);
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&(this->Payload).field_0x30);
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&(this->Payload).field_0x48);
  if (this->bAddMutualComponents != false) {
    *param_3 = true;
  }
  return;
}

// GenerateType @ 14a410010

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TAdd<FMovieSceneBlendChannelID>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
::GenerateType(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TAdd<FMovieSceneBlendChannelID>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
               *this,FEntityManager *param_1,FComponentMask *param_2,bool *param_3)

{
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&this->Payload);
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&(this->Payload).field_0x8);
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&(this->Payload).field_0xa);
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&(this->Payload).field_0xc);
  if (this->bAddMutualComponents != false) {
    *param_3 = true;
  }
  return;
}

// GenerateType @ 14a410080

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>_>
::GenerateType(TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>_>
               *this,FEntityManager *param_1,FComponentMask *param_2,bool *param_3)

{
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&this->Payload);
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&(this->Payload).field_0x18);
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&(this->Payload).field_0x28);
  if (this->bAddMutualComponents != false) {
    *param_3 = true;
  }
  return;
}

// GenerateType @ 14a4100e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<FMovieSceneControlRigSpaceChannel_const_*>_>
::GenerateType(TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<FMovieSceneControlRigSpaceChannel_const_*>_>
               *this,FEntityManager *param_1,FComponentMask *param_2,bool *param_3)

{
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&this->Payload);
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&(this->Payload).field_0x18);
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&(this->Payload).field_0x28);
  if (this->bAddMutualComponents != false) {
    *param_3 = true;
  }
  return;
}

// GenerateType @ 14a410140

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>_>
::GenerateType(TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>_>
               *this,FEntityManager *param_1,FComponentMask *param_2,bool *param_3)

{
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&this->Payload);
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&(this->Payload).field_0x18);
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&(this->Payload).field_0x28);
  if (this->bAddMutualComponents != false) {
    *param_3 = true;
  }
  return;
}

// GenerateType @ 14a4101a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd>
::GenerateType(TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd>
               *this,FEntityManager *param_1,FComponentMask *param_2,bool *param_3)

{
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&this->Payload);
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&(this->Payload).field_0x18);
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&(this->Payload).field_0x24);
  if (this->bAddMutualComponents != false) {
    *param_3 = true;
  }
  return;
}

// GenerateType @ 14a410200

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>_>
::GenerateType(TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>_>
               *this,FEntityManager *param_1,FComponentMask *param_2,bool *param_3)

{
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&this->Payload);
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&(this->Payload).field_0x18);
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&(this->Payload).field_0x30);
  if (this->bAddMutualComponents != false) {
    *param_3 = true;
  }
  return;
}

// GenerateType @ 14a410260

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAdd<FMovieSceneBlendChannelID>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
::GenerateType(TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAdd<FMovieSceneBlendChannelID>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
               *this,FEntityManager *param_1,FComponentMask *param_2,bool *param_3)

{
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&this->Payload);
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&(this->Payload).field_0x8);
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&(this->Payload).field_0xa);
  if (this->bAddMutualComponents != false) {
    *param_3 = true;
  }
  return;
}

// GenerateType @ 14a4102c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>_>
::GenerateType(TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>_>
               *this,FEntityManager *param_1,FComponentMask *param_2,bool *param_3)

{
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&this->Payload);
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&(this->Payload).field_0x18);
  if (this->bAddMutualComponents != false) {
    *param_3 = true;
  }
  return;
}

// GenerateType @ 14a410310

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>_>
::GenerateType(TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>_>
               *this,FEntityManager *param_1,FComponentMask *param_2,bool *param_3)

{
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&this->Payload);
  if (this->bAddMutualComponents != false) {
    *param_3 = true;
  }
  return;
}

// Initialize @ 14a41e950

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>
::Initialize(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>
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
    TVisitTupleElements_Impl<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14>_>::
    Do<_UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>::Initialize_::__l5::<lambda_1>,TTuple<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>_&>
              (&local_28,&this->Payload);
  }
  return;
}

// Initialize @ 14a41e990

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11,12,13>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
::Initialize(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11,12,13>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
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
    Do<_UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11,12,13>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>::Initialize_::__l5::<lambda_1>,TTuple<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>_&>
              (&local_28,&this->Payload);
  }
  return;
}

// Initialize @ 14a41e9d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11,12>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
::Initialize(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11,12>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
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
    Do<_UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11,12>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>::Initialize_::__l5::<lambda_1>,TTuple<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>_&>
              (&local_28,&this->Payload);
  }
  return;
}

// Initialize @ 14a41ea10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
::Initialize(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
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
    Do<_UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>::Initialize_::__l5::<lambda_1>,TTuple<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>_&>
              (&local_28,&this->Payload);
  }
  return;
}

// Initialize @ 14a41ea50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
::Initialize(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
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
    Do<_UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>::Initialize_::__l5::<lambda_1>,TTuple<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>_&>
              (&local_28,&this->Payload);
  }
  return;
}

// Initialize @ 14a41ea90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
::Initialize(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
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
    Do<_UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>::Initialize_::__l5::<lambda_1>,TTuple<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>_&>
              (&local_28,&this->Payload);
  }
  return;
}

// Initialize @ 14a41ead0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
::Initialize(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
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
    Do<_UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>::Initialize_::__l5::<lambda_1>,TTuple<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>_&>
              (&local_28,&this->Payload);
  }
  return;
}

// Initialize @ 14a41eb10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>
::Initialize(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>
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
    Do<_UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>::Initialize_::__l5::<lambda_1>,TTuple<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>_&>
              (&local_28,&this->Payload);
  }
  return;
}

// Initialize @ 14a41eb50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
::Initialize(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
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
    Do<_UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>::Initialize_::__l5::<lambda_1>,TTuple<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>_&>
              (&local_28,&this->Payload);
  }
  return;
}

// Initialize @ 14a41eb90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>
::Initialize(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>
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
    Do<_UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>::Initialize_::__l5::<lambda_1>,TTuple<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>_&>
              (&local_28,&this->Payload);
  }
  return;
}

// Initialize @ 14a41ebd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<UE::MovieScene::FBaseControlRigEvalData>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
::Initialize(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<UE::MovieScene::FBaseControlRigEvalData>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
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
    Do<_UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<UE::MovieScene::FBaseControlRigEvalData>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAdd>::Initialize_::__l5::<lambda_1>,TTuple<UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<UE::MovieScene::FBaseControlRigEvalData>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAdd>_&>
              (&local_28,&this->Payload);
  }
  return;
}

// Initialize @ 14a41ec10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
::Initialize(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
             *this,FEntityManager *param_1,FEntityInfo *param_2)

{
  int iVar1;
  FEntityAllocation *pFVar2;
  
  if ((param_2->Data).Allocation != (FEntityAllocation *)0x0) {
    pFVar2 = (param_2->Data).Allocation;
    iVar1 = (param_2->Data).ComponentOffset;
    TAdd<UE::MovieScene::FControlRigSourceData>::Apply
              ((TAdd<UE::MovieScene::FControlRigSourceData> *)&this->Payload,pFVar2,iVar1);
    TAdd<FName>::Apply((TAdd<FName> *)&(this->Payload).field_0x18,pFVar2,iVar1);
    TAdd<UE::MovieScene::FSourceFloatChannel>::Apply
              ((TAdd<UE::MovieScene::FSourceFloatChannel> *)&(this->Payload).field_0x28,pFVar2,iVar1
              );
    TAddConditional<UE::MovieScene::FSourceFloatChannel>::Apply
              ((TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&(this->Payload).field_0x48,
               pFVar2,iVar1);
  }
  return;
}

// Initialize @ 14a41ec90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
::Initialize(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
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
    Do<_UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>::Initialize_::__l5::<lambda_1>,TTuple<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>_&>
              (&local_28,&this->Payload);
  }
  return;
}

// Initialize @ 14a41ecd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<UE::MovieScene::FBaseControlRigEvalData>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
::Initialize(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<UE::MovieScene::FBaseControlRigEvalData>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
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
    Do<_UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<UE::MovieScene::FBaseControlRigEvalData>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>::Initialize_::__l5::<lambda_1>,TTuple<UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<UE::MovieScene::FBaseControlRigEvalData>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>_&>
              (&local_28,&this->Payload);
  }
  return;
}

// Initialize @ 14a41ed10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceByteChannel>_>
::Initialize(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceByteChannel>_>
             *this,FEntityManager *param_1,FEntityInfo *param_2)

{
  int iVar1;
  FEntityAllocation *pFVar2;
  FEntityAllocation *local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  if ((param_2->Data).Allocation != (FEntityAllocation *)0x0) {
    pFVar2 = (param_2->Data).Allocation;
    uStack_20 = *(undefined8 *)&(param_2->Data).ComponentOffset;
    local_18 = *(undefined8 *)&param_2->EntityID;
    iVar1 = (param_2->Data).ComponentOffset;
    local_28 = pFVar2;
    TAdd<UE::MovieScene::FControlRigSourceData>::Apply
              ((TAdd<UE::MovieScene::FControlRigSourceData> *)&this->Payload,pFVar2,iVar1);
    TAdd<FName>::Apply((TAdd<FName> *)&(this->Payload).field_0x18,pFVar2,iVar1);
    TAdd<UE::MovieScene::FControlRigSourceData>::Apply
              ((TAdd<UE::MovieScene::FControlRigSourceData> *)&(this->Payload).field_0x28,pFVar2,
               iVar1);
    `UE::MovieScene::
    TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceByteChannel>_>
    ::Initialize'::__l5::<lambda_1>::
    operator()<UE::MovieScene::TAdd<UE::MovieScene::FSourceByteChannel>_>
              (&local_28,(TAdd<UE::MovieScene::FSourceByteChannel> *)&(this->Payload).field_0x48);
  }
  return;
}

// Initialize @ 14a41eda0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>
::Initialize(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>
             *this,FEntityManager *param_1,FEntityInfo *param_2)

{
  int iVar1;
  FEntityAllocation *pFVar2;
  
  if ((param_2->Data).Allocation != (FEntityAllocation *)0x0) {
    pFVar2 = (param_2->Data).Allocation;
    iVar1 = (param_2->Data).ComponentOffset;
    TAdd<UE::MovieScene::FControlRigSourceData>::Apply
              ((TAdd<UE::MovieScene::FControlRigSourceData> *)&this->Payload,pFVar2,iVar1);
    TAdd<FName>::Apply((TAdd<FName> *)&(this->Payload).field_0x18,pFVar2,iVar1);
    TAdd<UE::MovieScene::FSourceFloatChannel>::Apply
              ((TAdd<UE::MovieScene::FSourceFloatChannel> *)&(this->Payload).field_0x28,pFVar2,iVar1
              );
  }
  return;
}

// Initialize @ 14a41ee10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
::Initialize(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
             *this,FEntityManager *param_1,FEntityInfo *param_2)

{
  int iVar1;
  FEntityAllocation *pFVar2;
  
  if ((param_2->Data).Allocation != (FEntityAllocation *)0x0) {
    pFVar2 = (param_2->Data).Allocation;
    iVar1 = (param_2->Data).ComponentOffset;
    TAdd<UE::MovieScene::FControlRigSourceData>::Apply
              ((TAdd<UE::MovieScene::FControlRigSourceData> *)&this->Payload,pFVar2,iVar1);
    TAdd<FName>::Apply((TAdd<FName> *)&(this->Payload).field_0x18,pFVar2,iVar1);
    TAddConditional<UE::MovieScene::FSourceFloatChannel>::Apply
              ((TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&(this->Payload).field_0x28,
               pFVar2,iVar1);
    TAddConditional<UE::MovieScene::FSourceFloatChannel>::Apply
              ((TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&(this->Payload).field_0x40,
               pFVar2,iVar1);
  }
  return;
}

// Initialize @ 14a41ee90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<UE::MovieScene::FBaseControlRigEvalData>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd>
::Initialize(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<UE::MovieScene::FBaseControlRigEvalData>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd>
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
    Do<_UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<UE::MovieScene::FBaseControlRigEvalData>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd>::Initialize_::__l5::<lambda_1>,TTuple<UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<UE::MovieScene::FBaseControlRigEvalData>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd>_&>
              (&local_28,&this->Payload);
  }
  return;
}

// Initialize @ 14a41eed0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
::Initialize(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
             *this,FEntityManager *param_1,FEntityInfo *param_2)

{
  int iVar1;
  FEntityAllocation *pFVar2;
  
  if ((param_2->Data).Allocation != (FEntityAllocation *)0x0) {
    pFVar2 = (param_2->Data).Allocation;
    iVar1 = (param_2->Data).ComponentOffset;
    TAdd<UE::MovieScene::FControlRigSourceData>::Apply
              ((TAdd<UE::MovieScene::FControlRigSourceData> *)&this->Payload,pFVar2,iVar1);
    TAdd<FName>::Apply((TAdd<FName> *)&(this->Payload).field_0x18,pFVar2,iVar1);
    TAdd<UE::MovieScene::FControlRigSourceData>::Apply
              ((TAdd<UE::MovieScene::FControlRigSourceData> *)&(this->Payload).field_0x28,pFVar2,
               iVar1);
  }
  return;
}

// Initialize @ 14a41ef40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<FMovieSceneControlRigSpaceChannel_const_*>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
::Initialize(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<FMovieSceneControlRigSpaceChannel_const_*>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
             *this,FEntityManager *param_1,FEntityInfo *param_2)

{
  int iVar1;
  FEntityAllocation *pFVar2;
  
  if ((param_2->Data).Allocation != (FEntityAllocation *)0x0) {
    pFVar2 = (param_2->Data).Allocation;
    iVar1 = (param_2->Data).ComponentOffset;
    TAdd<UE::MovieScene::FControlRigSourceData>::Apply
              ((TAdd<UE::MovieScene::FControlRigSourceData> *)&this->Payload,pFVar2,iVar1);
    TAdd<FName>::Apply((TAdd<FName> *)&(this->Payload).field_0x18,pFVar2,iVar1);
    TAdd<FMovieSceneControlRigSpaceChannel_const_*>::Apply
              ((TAdd<FMovieSceneControlRigSpaceChannel_const_*> *)&(this->Payload).field_0x28,pFVar2
               ,iVar1);
  }
  return;
}

// Initialize @ 14a41efb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
::Initialize(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
             *this,FEntityManager *param_1,FEntityInfo *param_2)

{
  int iVar1;
  FEntityAllocation *pFVar2;
  
  if ((param_2->Data).Allocation != (FEntityAllocation *)0x0) {
    pFVar2 = (param_2->Data).Allocation;
    iVar1 = (param_2->Data).ComponentOffset;
    TAdd<UE::MovieScene::FControlRigSourceData>::Apply
              ((TAdd<UE::MovieScene::FControlRigSourceData> *)&this->Payload,pFVar2,iVar1);
    TAdd<FName>::Apply((TAdd<FName> *)&(this->Payload).field_0x18,pFVar2,iVar1);
    TAdd<UE::MovieScene::FSourceBoolChannel>::Apply
              ((TAdd<UE::MovieScene::FSourceBoolChannel> *)&(this->Payload).field_0x28,pFVar2,iVar1)
    ;
  }
  return;
}

// Initialize @ 14a41f020

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>_>
::Initialize(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>_>
             *this,FEntityManager *param_1,FEntityInfo *param_2)

{
  int iVar1;
  FEntityAllocation *pFVar2;
  
  if ((param_2->Data).Allocation != (FEntityAllocation *)0x0) {
    pFVar2 = (param_2->Data).Allocation;
    iVar1 = (param_2->Data).ComponentOffset;
    TAdd<UE::MovieScene::FControlRigSourceData>::Apply
              ((TAdd<UE::MovieScene::FControlRigSourceData> *)&this->Payload,pFVar2,iVar1);
    TAdd<FName>::Apply((TAdd<FName> *)&(this->Payload).field_0x18,pFVar2,iVar1);
    TAdd<UE::MovieScene::FSourceFloatChannel>::Apply
              ((TAdd<UE::MovieScene::FSourceFloatChannel> *)&(this->Payload).field_0x28,pFVar2,iVar1
              );
  }
  return;
}

// Initialize @ 14a41f090

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceIntegerChannel>_>
::Initialize(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceIntegerChannel>_>
             *this,FEntityManager *param_1,FEntityInfo *param_2)

{
  int iVar1;
  FEntityAllocation *pFVar2;
  FEntityAllocation *local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  if ((param_2->Data).Allocation != (FEntityAllocation *)0x0) {
    pFVar2 = (param_2->Data).Allocation;
    uStack_20 = *(undefined8 *)&(param_2->Data).ComponentOffset;
    local_18 = *(undefined8 *)&param_2->EntityID;
    iVar1 = (param_2->Data).ComponentOffset;
    local_28 = pFVar2;
    TAdd<UE::MovieScene::FControlRigSourceData>::Apply
              ((TAdd<UE::MovieScene::FControlRigSourceData> *)&this->Payload,pFVar2,iVar1);
    TAdd<FName>::Apply((TAdd<FName> *)&(this->Payload).field_0x18,pFVar2,iVar1);
    `UE::MovieScene::
    TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceIntegerChannel>_>
    ::Initialize'::__l5::<lambda_1>::
    operator()<UE::MovieScene::TAdd<UE::MovieScene::FSourceIntegerChannel>_>
              (&local_28,(TAdd<UE::MovieScene::FSourceIntegerChannel> *)&(this->Payload).field_0x28)
    ;
  }
  return;
}

// Initialize @ 14a41f110

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
::Initialize(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
             *this,FEntityManager *param_1,FEntityInfo *param_2)

{
  int iVar1;
  FEntityAllocation *pFVar2;
  
  if ((param_2->Data).Allocation != (FEntityAllocation *)0x0) {
    pFVar2 = (param_2->Data).Allocation;
    iVar1 = (param_2->Data).ComponentOffset;
    TAdd<UE::MovieScene::FControlRigSourceData>::Apply
              ((TAdd<UE::MovieScene::FControlRigSourceData> *)&this->Payload,pFVar2,iVar1);
    TAdd<FName>::Apply((TAdd<FName> *)&(this->Payload).field_0x18,pFVar2,iVar1);
    TAddConditional<UE::MovieScene::FSourceFloatChannel>::Apply
              ((TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&(this->Payload).field_0x28,
               pFVar2,iVar1);
  }
  return;
}

// Initialize @ 14a41f180

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<UE::MovieScene::FBaseControlRigEvalData>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
::Initialize(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<UE::MovieScene::FBaseControlRigEvalData>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
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
    Do<_UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<UE::MovieScene::FBaseControlRigEvalData>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>::Initialize_::__l5::<lambda_1>,TTuple<UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<UE::MovieScene::FBaseControlRigEvalData>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>_&>
              (&local_28,&this->Payload);
  }
  return;
}

// Initialize @ 14a41f1c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::FAdd>
::Initialize(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::FAdd>
             *this,FEntityManager *param_1,FEntityInfo *param_2)

{
  int iVar1;
  FEntityAllocation *pFVar2;
  
  if ((param_2->Data).Allocation != (FEntityAllocation *)0x0) {
    pFVar2 = (param_2->Data).Allocation;
    iVar1 = (param_2->Data).ComponentOffset;
    TAdd<UE::MovieScene::FControlRigSourceData>::Apply
              ((TAdd<UE::MovieScene::FControlRigSourceData> *)&this->Payload,pFVar2,iVar1);
    TAdd<FName>::Apply((TAdd<FName> *)&(this->Payload).field_0x18,pFVar2,iVar1);
    TAdd<UE::MovieScene::FControlRigSourceData>::Apply
              ((TAdd<UE::MovieScene::FControlRigSourceData> *)&(this->Payload).field_0x28,pFVar2,
               iVar1);
  }
  return;
}

// Initialize @ 14a41f230

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<FMovieSceneControlRigSpaceChannel_const_*>,UE::MovieScene::FAdd>
::Initialize(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<FMovieSceneControlRigSpaceChannel_const_*>,UE::MovieScene::FAdd>
             *this,FEntityManager *param_1,FEntityInfo *param_2)

{
  int iVar1;
  FEntityAllocation *pFVar2;
  
  if ((param_2->Data).Allocation != (FEntityAllocation *)0x0) {
    pFVar2 = (param_2->Data).Allocation;
    iVar1 = (param_2->Data).ComponentOffset;
    TAdd<UE::MovieScene::FControlRigSourceData>::Apply
              ((TAdd<UE::MovieScene::FControlRigSourceData> *)&this->Payload,pFVar2,iVar1);
    TAdd<FName>::Apply((TAdd<FName> *)&(this->Payload).field_0x18,pFVar2,iVar1);
    TAdd<FMovieSceneControlRigSpaceChannel_const_*>::Apply
              ((TAdd<FMovieSceneControlRigSpaceChannel_const_*> *)&(this->Payload).field_0x28,pFVar2
               ,iVar1);
  }
  return;
}

// Initialize @ 14a41f2a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::FAdd>
::Initialize(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::FAdd>
             *this,FEntityManager *param_1,FEntityInfo *param_2)

{
  int iVar1;
  FEntityAllocation *pFVar2;
  
  if ((param_2->Data).Allocation != (FEntityAllocation *)0x0) {
    pFVar2 = (param_2->Data).Allocation;
    iVar1 = (param_2->Data).ComponentOffset;
    TAdd<UE::MovieScene::FControlRigSourceData>::Apply
              ((TAdd<UE::MovieScene::FControlRigSourceData> *)&this->Payload,pFVar2,iVar1);
    TAdd<FName>::Apply((TAdd<FName> *)&(this->Payload).field_0x18,pFVar2,iVar1);
    TAdd<UE::MovieScene::FSourceBoolChannel>::Apply
              ((TAdd<UE::MovieScene::FSourceBoolChannel> *)&(this->Payload).field_0x28,pFVar2,iVar1)
    ;
  }
  return;
}

// Initialize @ 14a41f310

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
::Initialize(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
             *this,FEntityManager *param_1,FEntityInfo *param_2)

{
  int iVar1;
  FEntityAllocation *pFVar2;
  
  if ((param_2->Data).Allocation != (FEntityAllocation *)0x0) {
    pFVar2 = (param_2->Data).Allocation;
    iVar1 = (param_2->Data).ComponentOffset;
    TAdd<UE::MovieScene::FControlRigSourceData>::Apply
              ((TAdd<UE::MovieScene::FControlRigSourceData> *)&this->Payload,pFVar2,iVar1);
    TAdd<FName>::Apply((TAdd<FName> *)&(this->Payload).field_0x18,pFVar2,iVar1);
  }
  return;
}

// Initialize @ 14a41f380

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<UE::MovieScene::FBaseControlRigEvalData>_>
::Initialize(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<UE::MovieScene::FBaseControlRigEvalData>_>
             *this,FEntityManager *param_1,FEntityInfo *param_2)

{
  int iVar1;
  FEntityAllocation *pFVar2;
  
  if ((param_2->Data).Allocation != (FEntityAllocation *)0x0) {
    pFVar2 = (param_2->Data).Allocation;
    iVar1 = (param_2->Data).ComponentOffset;
    TAdd<FGuid>::Apply((TAdd<FGuid> *)&this->Payload,pFVar2,iVar1);
    TAdd<UObject_*_(__cdecl*)(UObject_*)>::Apply
              ((TAdd<UObject_*_(__cdecl*)(UObject_*)> *)&(this->Payload).field_0x18,pFVar2,iVar1);
    TAdd<UE::MovieScene::FControlRigSourceData>::Apply
              ((TAdd<UE::MovieScene::FControlRigSourceData> *)&(this->Payload).field_0x30,pFVar2,
               iVar1);
    TAdd<UE::MovieScene::FBaseControlRigEvalData>::Apply
              ((TAdd<UE::MovieScene::FBaseControlRigEvalData> *)&(this->Payload).field_0x48,pFVar2,
               iVar1);
  }
  return;
}

// Initialize @ 14a41f400

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TAdd<FMovieSceneBlendChannelID>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
::Initialize(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TAdd<FMovieSceneBlendChannelID>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
             *this,FEntityManager *param_1,FEntityInfo *param_2)

{
  if ((param_2->Data).Allocation != (FEntityAllocation *)0x0) {
    TAdd<FMovieSceneBlendChannelID>::Apply
              ((TAdd<FMovieSceneBlendChannelID> *)&this->Payload,(param_2->Data).Allocation,
               (param_2->Data).ComponentOffset);
    return;
  }
  return;
}

// Initialize @ 14a41f430

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>_>
::Initialize(TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>_>
             *this,FEntityManager *param_1,FEntityInfo *param_2)

{
  int iVar1;
  FEntityAllocation *pFVar2;
  
  if ((param_2->Data).Allocation != (FEntityAllocation *)0x0) {
    pFVar2 = (param_2->Data).Allocation;
    iVar1 = (param_2->Data).ComponentOffset;
    TAdd<UE::MovieScene::FControlRigSourceData>::Apply
              ((TAdd<UE::MovieScene::FControlRigSourceData> *)&this->Payload,pFVar2,iVar1);
    TAdd<FName>::Apply((TAdd<FName> *)&(this->Payload).field_0x18,pFVar2,iVar1);
    TAdd<UE::MovieScene::FControlRigSourceData>::Apply
              ((TAdd<UE::MovieScene::FControlRigSourceData> *)&(this->Payload).field_0x28,pFVar2,
               iVar1);
  }
  return;
}

// Initialize @ 14a41f4a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<FMovieSceneControlRigSpaceChannel_const_*>_>
::Initialize(TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<FMovieSceneControlRigSpaceChannel_const_*>_>
             *this,FEntityManager *param_1,FEntityInfo *param_2)

{
  int iVar1;
  FEntityAllocation *pFVar2;
  
  if ((param_2->Data).Allocation != (FEntityAllocation *)0x0) {
    pFVar2 = (param_2->Data).Allocation;
    iVar1 = (param_2->Data).ComponentOffset;
    TAdd<UE::MovieScene::FControlRigSourceData>::Apply
              ((TAdd<UE::MovieScene::FControlRigSourceData> *)&this->Payload,pFVar2,iVar1);
    TAdd<FName>::Apply((TAdd<FName> *)&(this->Payload).field_0x18,pFVar2,iVar1);
    TAdd<FMovieSceneControlRigSpaceChannel_const_*>::Apply
              ((TAdd<FMovieSceneControlRigSpaceChannel_const_*> *)&(this->Payload).field_0x28,pFVar2
               ,iVar1);
  }
  return;
}

// Initialize @ 14a41f510

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>_>
::Initialize(TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>_>
             *this,FEntityManager *param_1,FEntityInfo *param_2)

{
  int iVar1;
  FEntityAllocation *pFVar2;
  
  if ((param_2->Data).Allocation != (FEntityAllocation *)0x0) {
    pFVar2 = (param_2->Data).Allocation;
    iVar1 = (param_2->Data).ComponentOffset;
    TAdd<UE::MovieScene::FControlRigSourceData>::Apply
              ((TAdd<UE::MovieScene::FControlRigSourceData> *)&this->Payload,pFVar2,iVar1);
    TAdd<FName>::Apply((TAdd<FName> *)&(this->Payload).field_0x18,pFVar2,iVar1);
    TAdd<UE::MovieScene::FSourceBoolChannel>::Apply
              ((TAdd<UE::MovieScene::FSourceBoolChannel> *)&(this->Payload).field_0x28,pFVar2,iVar1)
    ;
  }
  return;
}

// Initialize @ 14a41f580

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd>
::Initialize(TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd>
             *this,FEntityManager *param_1,FEntityInfo *param_2)

{
  int iVar1;
  FEntityAllocation *pFVar2;
  
  if ((param_2->Data).Allocation != (FEntityAllocation *)0x0) {
    pFVar2 = (param_2->Data).Allocation;
    iVar1 = (param_2->Data).ComponentOffset;
    TAdd<UE::MovieScene::FControlRigSourceData>::Apply
              ((TAdd<UE::MovieScene::FControlRigSourceData> *)&this->Payload,pFVar2,iVar1);
    TAdd<FName>::Apply((TAdd<FName> *)&(this->Payload).field_0x18,pFVar2,iVar1);
  }
  return;
}

// Initialize @ 14a41f5f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>_>
::Initialize(TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>_>
             *this,FEntityManager *param_1,FEntityInfo *param_2)

{
  int iVar1;
  FEntityAllocation *pFVar2;
  
  if ((param_2->Data).Allocation != (FEntityAllocation *)0x0) {
    pFVar2 = (param_2->Data).Allocation;
    iVar1 = (param_2->Data).ComponentOffset;
    TAdd<FGuid>::Apply((TAdd<FGuid> *)&this->Payload,pFVar2,iVar1);
    TAdd<UObject_*_(__cdecl*)(UObject_*)>::Apply
              ((TAdd<UObject_*_(__cdecl*)(UObject_*)> *)&(this->Payload).field_0x18,pFVar2,iVar1);
    TAdd<UE::MovieScene::FControlRigSourceData>::Apply
              ((TAdd<UE::MovieScene::FControlRigSourceData> *)&(this->Payload).field_0x30,pFVar2,
               iVar1);
  }
  return;
}

// Initialize @ 14a41f660

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAdd<FMovieSceneBlendChannelID>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
::Initialize(TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAdd<FMovieSceneBlendChannelID>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
             *this,FEntityManager *param_1,FEntityInfo *param_2)

{
  if ((param_2->Data).Allocation != (FEntityAllocation *)0x0) {
    TAdd<FMovieSceneBlendChannelID>::Apply
              ((TAdd<FMovieSceneBlendChannelID> *)&this->Payload,(param_2->Data).Allocation,
               (param_2->Data).ComponentOffset);
    return;
  }
  return;
}

// Initialize @ 14a41f690

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>_>
::Initialize(TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>_>
             *this,FEntityManager *param_1,FEntityInfo *param_2)

{
  int iVar1;
  FEntityAllocation *pFVar2;
  
  if ((param_2->Data).Allocation != (FEntityAllocation *)0x0) {
    pFVar2 = (param_2->Data).Allocation;
    iVar1 = (param_2->Data).ComponentOffset;
    TAdd<UE::MovieScene::FControlRigSourceData>::Apply
              ((TAdd<UE::MovieScene::FControlRigSourceData> *)&this->Payload,pFVar2,iVar1);
    TAdd<FName>::Apply((TAdd<FName> *)&(this->Payload).field_0x18,pFVar2,iVar1);
  }
  return;
}

// Initialize @ 14a41f700

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>_>
::Initialize(TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>_>
             *this,FEntityManager *param_1,FEntityInfo *param_2)

{
  if ((param_2->Data).Allocation != (FEntityAllocation *)0x0) {
    TAdd<UE::MovieScene::FControlRigSourceData>::Apply
              ((TAdd<UE::MovieScene::FControlRigSourceData> *)&this->Payload,
               (param_2->Data).Allocation,(param_2->Data).ComponentOffset);
    return;
  }
  return;
}

// MutateExisting @ 14a42e510

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TAdd<FMovieSceneBlendChannelID>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
::MutateExisting(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TAdd<FMovieSceneBlendChannelID>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
                 *this,FEntityManager *param_1,FMovieSceneEntityID param_2,
                FTypelessMutation *param_3)

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
  TBitArray<TFixedAllocator<12>_> local_110;
  FMutualComponentInitializers local_d8;
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
  local_110.NumBits = 0;
  local_110.MaxBits = 0x180;
  if (param_3->bRemoveAll == false) {
    TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>(&local_110,&local_80);
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
              (&local_b8,&local_110,OneFillMissingBits|MaintainSize,local_148);
  }
  if ((param_3->AddMask).Bits.NumBits != 0) {
    Core::Private::
    BitwiseOperatorImpl<TFixedAllocator<12>,TFixedAllocator<12>,_TBitArray<TFixedAllocator<12>_>::CombineWithBitwiseOR<TFixedAllocator<12>_>_::__l2::<lambda_1>_>
              ((TBitArray<TFixedAllocator<12>_> *)param_3,&local_110,MaxSize,(<lambda_1> *)local_148
              );
  }
  FComponentMask::Set((FComponentMask *)&local_110,(FComponentTypeID)*(ushort *)&this->Payload);
  FComponentMask::Set((FComponentMask *)&local_110,
                      (FComponentTypeID)*(ushort *)&(this->Payload).field_0x8);
  FComponentMask::Set((FComponentMask *)&local_110,
                      (FComponentTypeID)*(ushort *)&(this->Payload).field_0xa);
  FComponentMask::Set((FComponentMask *)&local_110,
                      (FComponentTypeID)*(ushort *)&(this->Payload).field_0xc);
  local_d8.Initializers.AllocatorInstance.SecondaryData =
       (ForElementType<UE::MovieScene::IMutualComponentInitializer_*>)0x0;
  local_d8.Initializers.ArrayNum = 0;
  local_d8.Initializers.ArrayMax = 2;
  FEntityAllocationWriteContext::FEntityAllocationWriteContext(&local_140,param_1);
  EVar5 = Mandatory;
  if (this->bAddMutualComponents != false) {
    EVar5 = All;
  }
  FEntityFactories::ComputeMutuallyInclusiveComponents
            (&param_1->ComponentRegistry->Factories,EVar5,(FComponentMask *)&local_110,&local_d8);
  bVar2 = TBitArray<TFixedAllocator<12>_>::CompareSetBits<TFixedAllocator<12>_>
                    (&local_110,&local_80,false);
  if (!bVar2) {
    FEntityManager::ChangeEntityType(param_1,param_2,(FComponentMask *)&local_110);
  }
  FEntityManager::GetEntity(param_1,&local_128,param_2);
  if (local_128.Data.Allocation != (FEntityAllocation *)0x0) {
    TAdd<FMovieSceneBlendChannelID>::Apply
              ((TAdd<FMovieSceneBlendChannelID> *)&this->Payload,local_128.Data.Allocation,
               local_128.Data.ComponentOffset);
    local_138.Allocation = local_128.Data.Allocation;
    local_138.ComponentStartOffset = local_128.Data.ComponentOffset;
    local_138.Num = 1;
    FMutualComponentInitializers::Execute(&local_d8,&local_138,&local_140);
  }
  if (local_d8.Initializers.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::MovieScene::IMutualComponentInitializer_*>)0x0) {
    FMemory::Free((void *)local_d8.Initializers.AllocatorInstance.SecondaryData);
  }
  return;
}

