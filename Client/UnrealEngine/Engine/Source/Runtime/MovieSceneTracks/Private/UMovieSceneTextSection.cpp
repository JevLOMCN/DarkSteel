// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 9

// StaticClass @ 146727e00

UClass * __cdecl UMovieSceneTextSection::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneTextSection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneTextSection",
               &Z_Registration_Info_UClass_UMovieSceneTextSection.InnerSingleton,
               StaticRegisterNativesUMovieSceneTextSection,0x240,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieSceneTextSection>,
               InternalVTableHelperCtorCaller<UMovieSceneTextSection>,local_res8,
               UMovieSceneSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneTextSection.InnerSingleton;
}

// UMovieSceneTextSection @ 146767430

UMovieSceneTextSection * __thiscall
UMovieSceneTextSection::UMovieSceneTextSection(UMovieSceneTextSection *this,FVTableHelper *param_1)

{
  UMovieSceneSection::UMovieSceneSection((UMovieSceneSection *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneSection__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneEntityProvider__;
  FMovieSceneTextChannel::FMovieSceneTextChannel(&this->TextChannel);
  return this;
}

// UMovieSceneTextSection @ 146767480

UMovieSceneTextSection * __thiscall
UMovieSceneTextSection::UMovieSceneTextSection
          (UMovieSceneTextSection *this,FObjectInitializer *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  UMovieSceneTextSection *pUVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *local_18;
  FSharedReferencer<1> local_10;
  
  UMovieSceneSection::UMovieSceneSection((UMovieSceneSection *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneSection__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneEntityProvider__;
  FMovieSceneTextChannel::FMovieSceneTextChannel(&this->TextChannel);
  *(undefined1 *)&this->_padding_ = 1;
  *(undefined2 *)&this->_padding_ = 0x201;
  pTVar6 = ::operator_new(0x68);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar8 = (TReferenceControllerBase<1> *)&DAT_00000010;
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFMovieSceneChannelProxy___00_SharedPointerInternals__6B_
    ;
    FMovieSceneChannelProxy::FMovieSceneChannelProxy<FMovieSceneTextChannel>
              ((FMovieSceneChannelProxy *)(pTVar6 + 1),&this->TextChannel);
    pTVar8 = pTVar6 + 1;
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pUVar7 = (UMovieSceneTextSection *)(*pcVar4)();
        return pUVar7;
      }
      goto LAB_1467675b9;
    }
  }
  if (((pTVar8->_padding_ == 0) || (*(longlong *)&pTVar8->SharedReferenceCount == 0)) ||
     (*(int *)(*(longlong *)&pTVar8->SharedReferenceCount + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar8->_padding_ = (longlong)pTVar8;
    if (pTVar6 != *(TReferenceControllerBase<1> **)&pTVar8->SharedReferenceCount) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pTVar8->SharedReferenceCount;
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
      *(TReferenceControllerBase<1> **)&pTVar8->SharedReferenceCount = pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_1467675b9:
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18 = pTVar8;
  local_10.ReferenceController = pTVar6;
  if ((TReferenceControllerBase<1> **)&this->_padding_ != &local_18) {
    this->_padding_ = (longlong)pTVar8;
    local_18 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&this->_padding_,&local_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_10.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return this;
}

// ~UMovieSceneTextSection @ 14676ae80

void __thiscall UMovieSceneTextSection::~UMovieSceneTextSection(UMovieSceneTextSection *this)

{
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneSection__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneEntityProvider__;
  FMovieSceneTextChannel::~FMovieSceneTextChannel(&this->TextChannel);
  this->_padding_ = (longlong)&___7IMovieSceneEntityProvider__6B_;
  UMovieSceneSection::~UMovieSceneSection((UMovieSceneSection *)this);
  return;
}

// GetPrivateStaticClass @ 146799820

UClass * __cdecl UMovieSceneTextSection::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneTextSection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneTextSection",
               &Z_Registration_Info_UClass_UMovieSceneTextSection.InnerSingleton,
               StaticRegisterNativesUMovieSceneTextSection,0x240,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieSceneTextSection>,
               InternalVTableHelperCtorCaller<UMovieSceneTextSection>,local_res8,
               UMovieSceneSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneTextSection.InnerSingleton;
}

// ImportEntityImpl @ 1467a1830

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieSceneTextSection::ImportEntityImpl
          (UMovieSceneTextSection *this,UMovieSceneEntitySystemLinker *param_1,
          FEntityImportParams *param_2,FImportedEntity *param_3)

{
  FBuiltInComponentTypes *pFVar1;
  FMovieSceneTracksComponentTypes *pFVar2;
  undefined **local_48;
  ushort local_40;
  TComponentTypeID<UE::MovieScene::FSourceTextChannel> local_38;
  longlong *local_30;
  undefined1 local_28;
  undefined1 local_20;
  FComponentTypeID local_18;
  
  if (((int)this->_padding_ != 0) || ((char)this->_padding_ == '\x01')) {
    pFVar1 = UE::MovieScene::FBuiltInComponentTypes::Get();
    pFVar2 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
    local_28 = 1;
    local_20 = 0;
    local_40 = (pFVar2->Text).PropertyTag.Value;
    local_38 = pFVar1->TextChannel;
    local_48 = &
               ___7__TEntityBuilder_UFAdd_MovieScene_UE__U__TAdd_UFSourceTextChannel_MovieScene_UE___23__MovieScene_UE__6B_
    ;
    local_30 = &this->_padding_;
    local_18.Value = local_40;
    UE::MovieScene::
    TPropertyTrackEntityImportHelperImpl<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceTextChannel>_>
    ::Commit((TPropertyTrackEntityImportHelperImpl<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceTextChannel>_>
              *)&local_48,(UMovieSceneSection *)&this[-1].TextChannel._padding_,param_2,param_3);
  }
  return;
}

// PopulateEvaluationFieldImpl @ 1467b1b30

bool __thiscall
UMovieSceneTextSection::PopulateEvaluationFieldImpl
          (UMovieSceneTextSection *this,TRange<FFrameNumber> *param_1,
          FMovieSceneEvaluationFieldEntityMetaData *param_2,
          FMovieSceneEntityComponentFieldBuilder *param_3)

{
  FMovieScenePropertyTrackEntityImportHelper::PopulateEvaluationField
            ((UMovieSceneSection *)&this[-1].TextChannel._padding_,param_1,param_2,param_3);
  return true;
}

// StaticRegisterNativesUMovieSceneTextSection @ 1467c2a80

void __cdecl UMovieSceneTextSection::StaticRegisterNativesUMovieSceneTextSection(void)

{
  return;
}

// _getUObject @ 1467ca8a0

UObject * __thiscall UMovieSceneTextSection::_getUObject(UMovieSceneTextSection *this)

{
  return (UObject *)&this[-1].TextChannel._padding_;
}

