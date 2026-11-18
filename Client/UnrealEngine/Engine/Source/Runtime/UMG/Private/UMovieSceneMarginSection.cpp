// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 9

// StaticClass @ 1468dba00

UClass * __cdecl UMovieSceneMarginSection::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneMarginSection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"MovieSceneMarginSection",
               &Z_Registration_Info_UClass_UMovieSceneMarginSection.InnerSingleton,
               StaticRegisterNativesUMovieSceneMarginSection,0x5b8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieSceneMarginSection>,
               InternalVTableHelperCtorCaller<UMovieSceneMarginSection>,local_res8,
               UMovieSceneSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneMarginSection.InnerSingleton;
}

// UMovieSceneMarginSection @ 1469019d0

UMovieSceneMarginSection * __thiscall
UMovieSceneMarginSection::UMovieSceneMarginSection
          (UMovieSceneMarginSection *this,FVTableHelper *param_1)

{
  UMovieSceneSection::UMovieSceneSection((UMovieSceneSection *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneSection__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneEntityProvider__;
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(&this->TopCurve);
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(&this->LeftCurve);
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(&this->RightCurve);
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(&this->BottomCurve);
  return this;
}

// UMovieSceneMarginSection @ 146901a40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

UMovieSceneMarginSection * __thiscall
UMovieSceneMarginSection::UMovieSceneMarginSection
          (UMovieSceneMarginSection *this,FObjectInitializer *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  UMovieSceneMarginSection *pUVar7;
  ForElementType<FMovieSceneChannelEntry> FVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  undefined1 auStack_88 [32];
  TReferenceControllerBase<1> *local_68;
  FSharedReferencer<1> local_60;
  FMovieSceneChannelProxyData local_58;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_88;
  UMovieSceneSection::UMovieSceneSection((UMovieSceneSection *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneSection__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneEntityProvider__;
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(&this->TopCurve);
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(&this->LeftCurve);
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(&this->RightCurve);
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(&this->BottomCurve);
  pTVar9 = (TReferenceControllerBase<1> *)0x0;
  *(undefined2 *)&this->_padding_ = 0x201;
  *(undefined2 *)((longlong)&this->_padding_ + 1) = 0x101;
  local_58.Entries.AllocatorInstance.SecondaryData = (ForElementType<FMovieSceneChannelEntry>)0x0;
  local_58.Entries.ArrayNum = 0;
  local_58.Entries.ArrayMax = 1;
  *(undefined1 *)&this->_padding_ = 1;
  FMovieSceneChannelProxyData::AddInternal<FMovieSceneFloatChannel>(&local_58,&this->LeftCurve);
  FMovieSceneChannelProxyData::AddInternal<FMovieSceneFloatChannel>(&local_58,&this->TopCurve);
  FMovieSceneChannelProxyData::AddInternal<FMovieSceneFloatChannel>(&local_58,&this->RightCurve);
  FMovieSceneChannelProxyData::AddInternal<FMovieSceneFloatChannel>(&local_58,&this->BottomCurve);
  pTVar6 = ::operator_new(0x68);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFMovieSceneChannelProxy___00_SharedPointerInternals__6B_
    ;
    pTVar6[1]._padding_ = 0;
    pTVar6[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[2]._padding_ = 0;
    pTVar6[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[3]._padding_ = 0;
    pTVar6[3].SharedReferenceCount = (atomic<int>)0x2;
    pTVar6[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[5].WeakReferenceCount = (atomic<int>)0x0;
    if (local_58.Entries.AllocatorInstance.SecondaryData ==
        (ForElementType<FMovieSceneChannelEntry>)0x0) {
      memmove(pTVar6 + 4,&local_58,0x18);
    }
    if (*(void **)&pTVar6[5].SharedReferenceCount != (void *)0x0) {
      FMemory::Free(*(void **)&pTVar6[5].SharedReferenceCount);
    }
    pTVar10 = pTVar6 + 1;
    *(ForElementType<FMovieSceneChannelEntry> *)&pTVar6[5].SharedReferenceCount =
         local_58.Entries.AllocatorInstance.SecondaryData;
    local_58.Entries.AllocatorInstance.SecondaryData = (ForElementType<FMovieSceneChannelEntry>)0x0;
    *(int *)&pTVar6[6]._padding_ = local_58.Entries.ArrayNum;
    *(int *)((longlong)&pTVar6[6]._padding_ + 4) = local_58.Entries.ArrayMax;
    local_58.Entries.ArrayNum = 0;
    local_58.Entries.ArrayMax = 1;
    pTVar9 = pTVar6;
    if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pUVar7 = (UMovieSceneMarginSection *)(*pcVar4)();
        return pUVar7;
      }
      goto LAB_146901c63;
    }
  }
  if (((pTVar10->_padding_ == 0) || (*(longlong *)&pTVar10->SharedReferenceCount == 0)) ||
     (*(int *)(*(longlong *)&pTVar10->SharedReferenceCount + 8) < 1)) {
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar10->_padding_ = (longlong)pTVar10;
    if (pTVar9 != *(TReferenceControllerBase<1> **)&pTVar10->SharedReferenceCount) {
      if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar9->WeakReferenceCount = (atomic<int>)((int)pTVar9->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pTVar10->SharedReferenceCount;
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
      *(TReferenceControllerBase<1> **)&pTVar10->SharedReferenceCount = pTVar9;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  }
LAB_146901c63:
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_68 = pTVar10;
  local_60.ReferenceController = pTVar9;
  if ((TReferenceControllerBase<1> **)&this->_padding_ != &local_68) {
    this->_padding_ = (longlong)pTVar10;
    local_68 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&this->_padding_,&local_60);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_60.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  FVar8 = (ForElementType<FMovieSceneChannelEntry>)&local_58;
  if (local_58.Entries.AllocatorInstance.SecondaryData !=
      (ForElementType<FMovieSceneChannelEntry>)0x0) {
    FVar8 = local_58.Entries.AllocatorInstance.SecondaryData;
  }
  DestructItems<FMovieSceneChannelEntry,int>
            ((FMovieSceneChannelEntry *)FVar8,local_58.Entries.ArrayNum);
  if (local_58.Entries.AllocatorInstance.SecondaryData !=
      (ForElementType<FMovieSceneChannelEntry>)0x0) {
    FMemory::Free((void *)local_58.Entries.AllocatorInstance.SecondaryData);
  }
  return this;
}

// ~UMovieSceneMarginSection @ 146904b10

void __thiscall UMovieSceneMarginSection::~UMovieSceneMarginSection(UMovieSceneMarginSection *this)

{
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneSection__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneEntityProvider__;
  FMovieSceneFloatChannel::~FMovieSceneFloatChannel(&this->BottomCurve);
  FMovieSceneFloatChannel::~FMovieSceneFloatChannel(&this->RightCurve);
  FMovieSceneFloatChannel::~FMovieSceneFloatChannel(&this->LeftCurve);
  FMovieSceneFloatChannel::~FMovieSceneFloatChannel(&this->TopCurve);
  this->_padding_ = (longlong)&___7IMovieSceneEntityProvider__6B_;
  UMovieSceneSection::~UMovieSceneSection((UMovieSceneSection *)this);
  return;
}

// GetPrivateStaticClass @ 1469226b0

UClass * __cdecl UMovieSceneMarginSection::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneMarginSection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"MovieSceneMarginSection",
               &Z_Registration_Info_UClass_UMovieSceneMarginSection.InnerSingleton,
               StaticRegisterNativesUMovieSceneMarginSection,0x5b8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieSceneMarginSection>,
               InternalVTableHelperCtorCaller<UMovieSceneMarginSection>,local_res8,
               UMovieSceneSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneMarginSection.InnerSingleton;
}

// ImportEntityImpl @ 146929930

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieSceneMarginSection::ImportEntityImpl
          (UMovieSceneMarginSection *this,UMovieSceneEntitySystemLinker *param_1,
          FEntityImportParams *param_2,FImportedEntity *param_3)

{
  FBuiltInComponentTypes *pFVar1;
  FMovieSceneUMGComponentTypes *pFVar2;
  undefined **local_e8;
  ushort local_e0;
  undefined4 local_d8;
  longlong *local_d0;
  undefined1 local_c8;
  undefined4 local_c0;
  longlong *local_b8;
  undefined1 local_b0;
  undefined4 local_a8;
  longlong *local_a0;
  undefined1 local_98;
  undefined4 local_90;
  longlong *local_88;
  undefined1 local_80;
  undefined1 local_78;
  FComponentTypeID local_70;
  TComponentTypeID<UE::MovieScene::FSourceFloatChannel> local_68;
  undefined1 uStack_66;
  undefined1 uStack_65;
  TComponentTypeID<UE::MovieScene::FSourceFloatChannel> local_50;
  undefined1 uStack_4e;
  undefined1 uStack_4d;
  TComponentTypeID<UE::MovieScene::FSourceFloatChannel> local_38;
  undefined2 uStack_36;
  TComponentTypeID<UE::MovieScene::FSourceFloatChannel> local_20;
  undefined1 uStack_1e;
  undefined1 uStack_1d;
  
  pFVar1 = UE::MovieScene::FBuiltInComponentTypes::Get();
  pFVar2 = UE::MovieScene::FMovieSceneUMGComponentTypes::Get();
  local_d0 = &(this->TopCurve)._padding_;
  local_e0 = (pFVar2->Margin).PropertyTag.Value;
  if (((this->TopCurve).DefaultValue == 0.0) && ((this->TopCurve).KeyHandles.field_0x14 != '\x01'))
  {
    uStack_66 = 0;
  }
  else {
    uStack_66 = 1;
  }
  local_b8 = &this->_padding_;
  local_68 = pFVar1->FloatChannel[0];
  if (((int)this->_padding_ == 0) && (*(char *)((longlong)&this->_padding_ + 4) != '\x01')) {
    uStack_4e = 0;
  }
  else {
    uStack_4e = 1;
  }
  local_a0 = &(this->LeftCurve)._padding_;
  local_50 = pFVar1->FloatChannel[1];
  if (((this->LeftCurve).DefaultValue == 0.0) && ((this->LeftCurve).KeyHandles.field_0x14 != '\x01')
     ) {
    uStack_36._0_1_ = 0;
  }
  else {
    uStack_36._0_1_ = 1;
  }
  local_88 = &(this->RightCurve)._padding_;
  local_38 = pFVar1->FloatChannel[2];
  if (((this->RightCurve).DefaultValue == 0.0) &&
     ((this->RightCurve).KeyHandles.field_0x14 != '\x01')) {
    uStack_1e = 0;
  }
  else {
    uStack_1e = 1;
  }
  local_d8 = _local_68;
  local_c0 = _local_50;
  local_20 = pFVar1->FloatChannel[3];
  local_a8 = _local_38;
  local_90 = _local_20;
  local_e8 = &
             ___7__TEntityBuilder_UFAdd_MovieScene_UE__U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___23_U423_U423_U423__MovieScene_UE__6B_
  ;
  local_c8 = 1;
  local_b0 = 1;
  local_98 = 1;
  local_80 = 1;
  local_78 = 0;
  local_70.Value = local_e0;
  UE::MovieScene::
  TPropertyTrackEntityImportHelperImpl<UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
  ::Commit((TPropertyTrackEntityImportHelperImpl<UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
            *)&local_e8,(UMovieSceneSection *)&this[-1].BottomCurve._padding_,param_2,param_3);
  return;
}

// PopulateEvaluationFieldImpl @ 146931ef0

bool __thiscall
UMovieSceneMarginSection::PopulateEvaluationFieldImpl
          (UMovieSceneMarginSection *this,TRange<FFrameNumber> *param_1,
          FMovieSceneEvaluationFieldEntityMetaData *param_2,
          FMovieSceneEntityComponentFieldBuilder *param_3)

{
  FMovieScenePropertyTrackEntityImportHelper::PopulateEvaluationField
            ((UMovieSceneSection *)&this[-1].BottomCurve._padding_,param_1,param_2,param_3);
  return true;
}

// StaticRegisterNativesUMovieSceneMarginSection @ 1469459c0

void __cdecl UMovieSceneMarginSection::StaticRegisterNativesUMovieSceneMarginSection(void)

{
  return;
}

// _getUObject @ 146950650

UObject * __thiscall UMovieSceneMarginSection::_getUObject(UMovieSceneMarginSection *this)

{
  return (UObject *)&this[-1].BottomCurve._padding_;
}

