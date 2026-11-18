// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 9

// StaticClass @ 14d5e5450

UClass * __cdecl UMovieSceneCameraFramingZoneSection::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneCameraFramingZoneSection.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"MovieSceneCameraFramingZoneSection",
               &Z_Registration_Info_UClass_UMovieSceneCameraFramingZoneSection.InnerSingleton,
               StaticRegisterNativesUMovieSceneCameraFramingZoneSection,0x5d8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneCameraFramingZoneSection>,
               InternalVTableHelperCtorCaller<UMovieSceneCameraFramingZoneSection>,local_res8,
               UMovieSceneSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneCameraFramingZoneSection.InnerSingleton;
}

// UMovieSceneCameraFramingZoneSection @ 14d5fede0

UMovieSceneCameraFramingZoneSection * __thiscall
UMovieSceneCameraFramingZoneSection::UMovieSceneCameraFramingZoneSection
          (UMovieSceneCameraFramingZoneSection *this,FVTableHelper *param_1)

{
  UMovieSceneSection::UMovieSceneSection((UMovieSceneSection *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneSection__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneEntityProvider__;
  FMovieSceneDoubleChannel::FMovieSceneDoubleChannel(&this->LeftMarginCurve);
  FMovieSceneDoubleChannel::FMovieSceneDoubleChannel(&this->TopMarginCurve);
  FMovieSceneDoubleChannel::FMovieSceneDoubleChannel(&this->RightMarginCurve);
  FMovieSceneDoubleChannel::FMovieSceneDoubleChannel(&this->BottomMarginCurve);
  return this;
}

// UMovieSceneCameraFramingZoneSection @ 14d5fee50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

UMovieSceneCameraFramingZoneSection * __thiscall
UMovieSceneCameraFramingZoneSection::UMovieSceneCameraFramingZoneSection
          (UMovieSceneCameraFramingZoneSection *this,FObjectInitializer *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  UMovieSceneCameraFramingZoneSection *pUVar7;
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
  FMovieSceneDoubleChannel::FMovieSceneDoubleChannel(&this->LeftMarginCurve);
  FMovieSceneDoubleChannel::FMovieSceneDoubleChannel(&this->TopMarginCurve);
  FMovieSceneDoubleChannel::FMovieSceneDoubleChannel(&this->RightMarginCurve);
  FMovieSceneDoubleChannel::FMovieSceneDoubleChannel(&this->BottomMarginCurve);
  pTVar9 = (TReferenceControllerBase<1> *)0x0;
  *(undefined2 *)&this->_padding_ = 0x201;
  *(undefined2 *)((longlong)&this->_padding_ + 1) = 0x101;
  local_58.Entries.AllocatorInstance.SecondaryData = (ForElementType<FMovieSceneChannelEntry>)0x0;
  local_58.Entries.ArrayNum = 0;
  local_58.Entries.ArrayMax = 1;
  *(undefined1 *)&this->_padding_ = 1;
  FMovieSceneChannelProxyData::AddInternal<FMovieSceneDoubleChannel>
            (&local_58,&this->LeftMarginCurve);
  FMovieSceneChannelProxyData::AddInternal<FMovieSceneDoubleChannel>
            (&local_58,&this->TopMarginCurve);
  FMovieSceneChannelProxyData::AddInternal<FMovieSceneDoubleChannel>
            (&local_58,&this->RightMarginCurve);
  FMovieSceneChannelProxyData::AddInternal<FMovieSceneDoubleChannel>
            (&local_58,&this->BottomMarginCurve);
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
        pUVar7 = (UMovieSceneCameraFramingZoneSection *)(*pcVar4)();
        return pUVar7;
      }
      goto LAB_14d5ff073;
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
LAB_14d5ff073:
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

// ~UMovieSceneCameraFramingZoneSection @ 14d600d80

void __thiscall
UMovieSceneCameraFramingZoneSection::~UMovieSceneCameraFramingZoneSection
          (UMovieSceneCameraFramingZoneSection *this)

{
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneSection__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneEntityProvider__;
  FMovieSceneDoubleChannel::~FMovieSceneDoubleChannel(&this->BottomMarginCurve);
  FMovieSceneDoubleChannel::~FMovieSceneDoubleChannel(&this->RightMarginCurve);
  FMovieSceneDoubleChannel::~FMovieSceneDoubleChannel(&this->TopMarginCurve);
  FMovieSceneDoubleChannel::~FMovieSceneDoubleChannel(&this->LeftMarginCurve);
  this->_padding_ = (longlong)&___7IMovieSceneEntityProvider__6B_;
  UMovieSceneSection::~UMovieSceneSection((UMovieSceneSection *)this);
  return;
}

// GetPrivateStaticClass @ 14d61cde0

UClass * __cdecl UMovieSceneCameraFramingZoneSection::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneCameraFramingZoneSection.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"MovieSceneCameraFramingZoneSection",
               &Z_Registration_Info_UClass_UMovieSceneCameraFramingZoneSection.InnerSingleton,
               StaticRegisterNativesUMovieSceneCameraFramingZoneSection,0x5d8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneCameraFramingZoneSection>,
               InternalVTableHelperCtorCaller<UMovieSceneCameraFramingZoneSection>,local_res8,
               UMovieSceneSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneCameraFramingZoneSection.InnerSingleton;
}

// ImportEntityImpl @ 14d61f4d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieSceneCameraFramingZoneSection::ImportEntityImpl
          (UMovieSceneCameraFramingZoneSection *this,UMovieSceneEntitySystemLinker *param_1,
          FEntityImportParams *param_2,FImportedEntity *param_3)

{
  FBuiltInComponentTypes *pFVar1;
  FMovieSceneGameplayCamerasComponentTypes *pFVar2;
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
  TComponentTypeID<UE::MovieScene::FSourceDoubleChannel> local_68;
  undefined1 uStack_66;
  undefined1 uStack_65;
  TComponentTypeID<UE::MovieScene::FSourceDoubleChannel> local_50;
  undefined1 uStack_4e;
  undefined1 uStack_4d;
  TComponentTypeID<UE::MovieScene::FSourceDoubleChannel> local_38;
  undefined2 uStack_36;
  TComponentTypeID<UE::MovieScene::FSourceDoubleChannel> local_20;
  undefined1 uStack_1e;
  undefined1 uStack_1d;
  
  pFVar1 = UE::MovieScene::FBuiltInComponentTypes::Get();
  pFVar2 = UE::Cameras::FMovieSceneGameplayCamerasComponentTypes::Get();
  local_d0 = &this->_padding_;
  local_e0 = (pFVar2->CameraFramingZone).PropertyTag.Value;
  if (((int)this->_padding_ == 0) && ((char)this->_padding_ != '\x01')) {
    uStack_66 = 0;
  }
  else {
    uStack_66 = 1;
  }
  local_b8 = &(this->LeftMarginCurve)._padding_;
  local_68 = pFVar1->DoubleChannel[0];
  if ((*(int *)&(this->LeftMarginCurve).bHasDefaultValue == 0) &&
     ((this->LeftMarginCurve).KeyHandles.field_0x18 != '\x01')) {
    uStack_4e = 0;
  }
  else {
    uStack_4e = 1;
  }
  local_a0 = &(this->TopMarginCurve)._padding_;
  local_50 = pFVar1->DoubleChannel[1];
  if ((*(int *)&(this->TopMarginCurve).bHasDefaultValue == 0) &&
     ((this->TopMarginCurve).KeyHandles.field_0x18 != '\x01')) {
    uStack_36._0_1_ = 0;
  }
  else {
    uStack_36._0_1_ = 1;
  }
  local_88 = &(this->RightMarginCurve)._padding_;
  local_38 = pFVar1->DoubleChannel[2];
  if ((*(int *)&(this->RightMarginCurve).bHasDefaultValue == 0) &&
     ((this->RightMarginCurve).KeyHandles.field_0x18 != '\x01')) {
    uStack_1e = 0;
  }
  else {
    uStack_1e = 1;
  }
  local_d8 = _local_68;
  local_c0 = _local_50;
  local_20 = pFVar1->DoubleChannel[3];
  local_a8 = _local_38;
  local_90 = _local_20;
  local_e8 = &
             ___7__TEntityBuilder_UFAdd_MovieScene_UE__U__TAddConditional_UFSourceDoubleChannel_MovieScene_UE___23_U423_U423_U423__MovieScene_UE__6B_
  ;
  local_c8 = 1;
  local_b0 = 1;
  local_98 = 1;
  local_80 = 1;
  local_78 = 0;
  local_70.Value = local_e0;
  UE::MovieScene::
  TPropertyTrackEntityImportHelperImpl<UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>
  ::Commit((TPropertyTrackEntityImportHelperImpl<UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>
            *)&local_e8,(UMovieSceneSection *)&this[-1].BottomMarginCurve._padding_,param_2,param_3)
  ;
  return;
}

// PopulateEvaluationFieldImpl @ 14d62e360

bool __thiscall
UMovieSceneCameraFramingZoneSection::PopulateEvaluationFieldImpl
          (UMovieSceneCameraFramingZoneSection *this,TRange<FFrameNumber> *param_1,
          FMovieSceneEvaluationFieldEntityMetaData *param_2,
          FMovieSceneEntityComponentFieldBuilder *param_3)

{
  FMovieScenePropertyTrackEntityImportHelper::PopulateEvaluationField
            ((UMovieSceneSection *)&this[-1].BottomMarginCurve._padding_,param_1,param_2,param_3);
  return true;
}

// StaticRegisterNativesUMovieSceneCameraFramingZoneSection @ 14d6393b0

void __cdecl
UMovieSceneCameraFramingZoneSection::StaticRegisterNativesUMovieSceneCameraFramingZoneSection(void)

{
  return;
}

// _getUObject @ 14d63f330

UObject * __thiscall
UMovieSceneCameraFramingZoneSection::_getUObject(UMovieSceneCameraFramingZoneSection *this)

{
  return (UObject *)&this[-1].BottomMarginCurve._padding_;
}

