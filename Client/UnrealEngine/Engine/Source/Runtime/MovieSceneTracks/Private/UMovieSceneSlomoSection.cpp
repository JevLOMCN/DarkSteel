// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 8

// StaticClass @ 1467260d0

UClass * __cdecl UMovieSceneSlomoSection::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneSlomoSection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneSlomoSection",
               &Z_Registration_Info_UClass_UMovieSceneSlomoSection.InnerSingleton,
               StaticRegisterNativesUMovieSceneSlomoSection,0x240,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieSceneSlomoSection>,
               InternalVTableHelperCtorCaller<UMovieSceneSlomoSection>,local_res8,
               UMovieSceneSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneSlomoSection.InnerSingleton;
}

// UMovieSceneSlomoSection @ 146766f60

UMovieSceneSlomoSection * __thiscall
UMovieSceneSlomoSection::UMovieSceneSlomoSection(UMovieSceneSlomoSection *this)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FObjectInitializer *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  UMovieSceneSlomoSection *pUVar8;
  TReferenceControllerBase<1> *pTVar9;
  uint local_res8;
  uint local_res10;
  TReferenceControllerBase<1> *local_48;
  FSharedReferencer<1> local_40;
  TRange<FFrameNumber> local_38;
  FGuid local_28;
  
  pFVar6 = FObjectInitializer::Get();
  UMovieSceneSection::UMovieSceneSection((UMovieSceneSection *)this,pFVar6);
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneSection__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneEntityProvider__;
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(&this->FloatCurve);
  local_res8 = CONCAT31(local_res8._1_3_,2);
  local_38.LowerBound.Value.Value = 0;
  local_38.LowerBound._0_4_ = local_res8;
  local_res10 = CONCAT31(local_res10._1_3_,2);
  local_38.UpperBound.Value.Value = 0;
  local_38.UpperBound._0_4_ = local_res10;
  *(undefined1 *)&this->_padding_ = 1;
  UMovieSceneSection::SetRange((UMovieSceneSection *)this,&local_38);
  (this->FloatCurve).bHasDefaultValue = true;
  (this->FloatCurve).DefaultValue = 1.0;
  local_28 = FSequencerObjectVersion::GUID;
  iVar5 = UObjectBaseUtility::GetLinkerCustomVersion((UObjectBaseUtility *)this,&local_28);
  *(undefined1 *)&this->_padding_ = 1;
  *(char *)((longlong)&this->_padding_ + 1) = (5 < iVar5) + '\x01';
  pTVar7 = ::operator_new(0x68);
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    pTVar9 = (TReferenceControllerBase<1> *)&DAT_00000010;
    pTVar7 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFMovieSceneChannelProxy___00_SharedPointerInternals__6B_
    ;
    FMovieSceneChannelProxy::FMovieSceneChannelProxy<FMovieSceneFloatChannel>
              ((FMovieSceneChannelProxy *)(pTVar7 + 1),&this->FloatCurve);
    pTVar9 = pTVar7 + 1;
    if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pUVar8 = (UMovieSceneSlomoSection *)(*pcVar3)();
        return pUVar8;
      }
      goto LAB_146767110;
    }
  }
  if (((pTVar9->_padding_ == 0) || (*(longlong *)&pTVar9->SharedReferenceCount == 0)) ||
     (*(int *)(*(longlong *)&pTVar9->SharedReferenceCount + 8) < 1)) {
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar9->_padding_ = (longlong)pTVar9;
    if (pTVar7 != *(TReferenceControllerBase<1> **)&pTVar9->SharedReferenceCount) {
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar7->WeakReferenceCount = (atomic<int>)((int)pTVar7->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar2 = *(longlong **)&pTVar9->SharedReferenceCount;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar2 + 8))(plVar2,1);
        }
      }
      *(TReferenceControllerBase<1> **)&pTVar9->SharedReferenceCount = pTVar7;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  }
LAB_146767110:
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_48 = pTVar9;
  local_40.ReferenceController = pTVar7;
  if ((TReferenceControllerBase<1> **)&this->_padding_ != &local_48) {
    this->_padding_ = (longlong)pTVar9;
    local_48 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&this->_padding_,&local_40);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_40.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return this;
}

// UMovieSceneSlomoSection @ 146767190

UMovieSceneSlomoSection * __thiscall
UMovieSceneSlomoSection::UMovieSceneSlomoSection
          (UMovieSceneSlomoSection *this,FVTableHelper *param_1)

{
  UMovieSceneSection::UMovieSceneSection((UMovieSceneSection *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneSection__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneEntityProvider__;
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(&this->FloatCurve);
  return this;
}

// ~UMovieSceneSlomoSection @ 14676ade0

void __thiscall UMovieSceneSlomoSection::~UMovieSceneSlomoSection(UMovieSceneSlomoSection *this)

{
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneSection__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneEntityProvider__;
  FMovieSceneFloatChannel::~FMovieSceneFloatChannel(&this->FloatCurve);
  this->_padding_ = (longlong)&___7IMovieSceneEntityProvider__6B_;
  UMovieSceneSection::~UMovieSceneSection((UMovieSceneSection *)this);
  return;
}

// GetPrivateStaticClass @ 1467996a0

UClass * __cdecl UMovieSceneSlomoSection::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneSlomoSection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneSlomoSection",
               &Z_Registration_Info_UClass_UMovieSceneSlomoSection.InnerSingleton,
               StaticRegisterNativesUMovieSceneSlomoSection,0x240,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieSceneSlomoSection>,
               InternalVTableHelperCtorCaller<UMovieSceneSlomoSection>,local_res8,
               UMovieSceneSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneSlomoSection.InnerSingleton;
}

// ImportEntityImpl @ 1467a16d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieSceneSlomoSection::ImportEntityImpl
          (UMovieSceneSlomoSection *this,UMovieSceneEntitySystemLinker *param_1,
          FEntityImportParams *param_2,FImportedEntity *param_3)

{
  FBuiltInComponentTypes *pFVar1;
  FMovieSceneTracksComponentTypes *pFVar2;
  undefined **local_38;
  ushort local_30;
  ushort local_2e;
  TComponentTypeID<UE::MovieScene::FSourceFloatChannel> local_28;
  longlong *local_20;
  undefined1 local_18;
  undefined1 local_10;
  
  if (((int)this->_padding_ != 0) || (*(char *)((longlong)&this->_padding_ + 4) == '\x01')) {
    pFVar1 = UE::MovieScene::FBuiltInComponentTypes::Get();
    pFVar2 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
    local_30 = (pFVar1->Tags).Root.Value;
    local_18 = 1;
    local_2e = (pFVar2->Tags).Slomo.Value;
    local_28 = pFVar1->FloatChannel[0];
    local_38 = &
               ___7__TEntityBuilder_UFAdd_MovieScene_UE__U123_U__TAdd_UFSourceFloatChannel_MovieScene_UE___23__MovieScene_UE__6B_
    ;
    local_10 = 0;
    local_20 = &this->_padding_;
    UE::MovieScene::FImportedEntity::
    AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>_>_>
              (param_3,(TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>_>
                        *)&local_38);
  }
  return;
}

// StaticRegisterNativesUMovieSceneSlomoSection @ 1467c2a60

void __cdecl UMovieSceneSlomoSection::StaticRegisterNativesUMovieSceneSlomoSection(void)

{
  return;
}

// _getUObject @ 1467ca880

UObject * __thiscall UMovieSceneSlomoSection::_getUObject(UMovieSceneSlomoSection *this)

{
  return (UObject *)&this[-1].FloatCurve._padding_;
}

