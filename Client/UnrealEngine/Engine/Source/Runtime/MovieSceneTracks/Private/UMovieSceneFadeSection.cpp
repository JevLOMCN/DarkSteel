// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 8

// StaticClass @ 146726010

UClass * __cdecl UMovieSceneFadeSection::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneFadeSection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneFadeSection",
               &Z_Registration_Info_UClass_UMovieSceneFadeSection.InnerSingleton,
               StaticRegisterNativesUMovieSceneFadeSection,600,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieSceneFadeSection>,
               InternalVTableHelperCtorCaller<UMovieSceneFadeSection>,local_res8,
               UMovieSceneSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneFadeSection.InnerSingleton;
}

// UMovieSceneFadeSection @ 146765190

UMovieSceneFadeSection * __thiscall
UMovieSceneFadeSection::UMovieSceneFadeSection(UMovieSceneFadeSection *this)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  FLinearColor FVar4;
  bool bVar5;
  int iVar6;
  FObjectInitializer *pFVar7;
  TReferenceControllerBase<1> *pTVar8;
  UMovieSceneFadeSection *pUVar9;
  TReferenceControllerBase<1> *pTVar10;
  uint local_res8;
  uint local_res10;
  TReferenceControllerBase<1> *local_48;
  FSharedReferencer<1> local_40;
  TRange<FFrameNumber> local_38;
  FGuid local_28;
  
  pFVar7 = FObjectInitializer::Get();
  UMovieSceneSection::UMovieSceneSection((UMovieSceneSection *)this,pFVar7);
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneSection__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneEntityProvider__;
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(&this->FloatCurve);
  FVar4 = FLinearColor::Black;
  this->bFadeAudio = 0;
  local_res8 = CONCAT31(local_res8._1_3_,2);
  local_38.LowerBound.Value.Value = 0;
  local_38.LowerBound._0_4_ = local_res8;
  local_res10 = CONCAT31(local_res10._1_3_,2);
  local_38.UpperBound.Value.Value = 0;
  local_38.UpperBound._0_4_ = local_res10;
  (this->FadeColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar4.field0_0x0;
  UMovieSceneSection::SetRange((UMovieSceneSection *)this,&local_38);
  local_28 = FSequencerObjectVersion::GUID;
  iVar6 = UObjectBaseUtility::GetLinkerCustomVersion((UObjectBaseUtility *)this,&local_28);
  *(undefined1 *)&this->_padding_ = 1;
  *(char *)((longlong)&this->_padding_ + 1) = (5 < iVar6) + '\x01';
  *(undefined2 *)((longlong)&this->_padding_ + 1) = 0x101;
  *(undefined1 *)&this->_padding_ = 1;
  pTVar8 = ::operator_new(0x68);
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)&DAT_00000010;
    pTVar8 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFMovieSceneChannelProxy___00_SharedPointerInternals__6B_
    ;
    FMovieSceneChannelProxy::FMovieSceneChannelProxy<FMovieSceneFloatChannel>
              ((FMovieSceneChannelProxy *)(pTVar8 + 1),&this->FloatCurve);
    pTVar10 = pTVar8 + 1;
    if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pUVar9 = (UMovieSceneFadeSection *)(*pcVar3)();
        return pUVar9;
      }
      goto LAB_14676534e;
    }
  }
  if (((pTVar10->_padding_ == 0) || (*(longlong *)&pTVar10->SharedReferenceCount == 0)) ||
     (*(int *)(*(longlong *)&pTVar10->SharedReferenceCount + 8) < 1)) {
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar10->_padding_ = (longlong)pTVar10;
    if (pTVar8 != *(TReferenceControllerBase<1> **)&pTVar10->SharedReferenceCount) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar2 = *(longlong **)&pTVar10->SharedReferenceCount;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar2 + 8))(plVar2,1);
        }
      }
      *(TReferenceControllerBase<1> **)&pTVar10->SharedReferenceCount = pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
LAB_14676534e:
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_48 = pTVar10;
  local_40.ReferenceController = pTVar8;
  if ((TReferenceControllerBase<1> **)&this->_padding_ != &local_48) {
    this->_padding_ = (longlong)pTVar10;
    local_48 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&this->_padding_,&local_40);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_40.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return this;
}

// UMovieSceneFadeSection @ 1467653d0

UMovieSceneFadeSection * __thiscall
UMovieSceneFadeSection::UMovieSceneFadeSection(UMovieSceneFadeSection *this,FVTableHelper *param_1)

{
  UMovieSceneSection::UMovieSceneSection((UMovieSceneSection *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneSection__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneEntityProvider__;
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(&this->FloatCurve);
  return this;
}

// ~UMovieSceneFadeSection @ 14676a800

void __thiscall UMovieSceneFadeSection::~UMovieSceneFadeSection(UMovieSceneFadeSection *this)

{
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneSection__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneEntityProvider__;
  FMovieSceneFloatChannel::~FMovieSceneFloatChannel(&this->FloatCurve);
  this->_padding_ = (longlong)&___7IMovieSceneEntityProvider__6B_;
  UMovieSceneSection::~UMovieSceneSection((UMovieSceneSection *)this);
  return;
}

// GetPrivateStaticClass @ 146798da0

UClass * __cdecl UMovieSceneFadeSection::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneFadeSection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneFadeSection",
               &Z_Registration_Info_UClass_UMovieSceneFadeSection.InnerSingleton,
               StaticRegisterNativesUMovieSceneFadeSection,600,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieSceneFadeSection>,
               InternalVTableHelperCtorCaller<UMovieSceneFadeSection>,local_res8,
               UMovieSceneSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneFadeSection.InnerSingleton;
}

// ImportEntityImpl @ 14679f670

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieSceneFadeSection::ImportEntityImpl
          (UMovieSceneFadeSection *this,UMovieSceneEntitySystemLinker *param_1,
          FEntityImportParams *param_2,FImportedEntity *param_3)

{
  FBuiltInComponentTypes *pFVar1;
  FMovieSceneTracksComponentTypes *pFVar2;
  uint local_68;
  undefined **local_60;
  ushort local_58;
  TComponentTypeID<UE::MovieScene::FSourceFloatChannel> local_50;
  longlong *local_48;
  undefined1 local_40;
  TComponentTypeID<UE::MovieScene::FFadeComponentData> local_38;
  longlong local_34;
  longlong lStack_2c;
  uint local_24;
  undefined1 local_20;
  undefined1 local_18;
  
  if (((int)this->_padding_ != 0) || (*(char *)((longlong)&this->_padding_ + 4) == '\x01')) {
    pFVar1 = UE::MovieScene::FBuiltInComponentTypes::Get();
    pFVar2 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
    local_58 = (pFVar1->Tags).Root.Value;
    local_34 = (this->FloatCurve)._padding_;
    lStack_2c = (this->FloatCurve)._padding_;
    local_68 = CONCAT31(local_68._1_3_,(char)(this->FloatCurve)._padding_) & 0xffffff01;
    local_38 = pFVar2->Fade;
    local_50 = pFVar1->FloatChannel[0];
    local_24 = local_68;
    local_60 = &
               ___7__TEntityBuilder_UFAdd_MovieScene_UE__U__TAdd_UFSourceFloatChannel_MovieScene_UE___23_U__TAdd_UFFadeComponentData_MovieScene_UE___23__MovieScene_UE__6B_
    ;
    local_40 = 1;
    local_20 = 1;
    local_18 = 0;
    local_48 = &this->_padding_;
    UE::MovieScene::FImportedEntity::
    AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAdd<UE::MovieScene::FFadeComponentData>_>_>
              (param_3,(TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAdd<UE::MovieScene::FFadeComponentData>_>
                        *)&local_60);
  }
  return;
}

// StaticRegisterNativesUMovieSceneFadeSection @ 1467c2940

void __cdecl UMovieSceneFadeSection::StaticRegisterNativesUMovieSceneFadeSection(void)

{
  return;
}

// _getUObject @ 1467ca7c0

UObject * __thiscall UMovieSceneFadeSection::_getUObject(UMovieSceneFadeSection *this)

{
  return (UObject *)&this[-1].FloatCurve._padding_;
}

