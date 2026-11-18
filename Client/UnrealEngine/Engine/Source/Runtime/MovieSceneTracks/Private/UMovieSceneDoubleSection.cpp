// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 10

// StaticClass @ 146722810

UClass * __cdecl UMovieSceneDoubleSection::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneDoubleSection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneDoubleSection",
               &Z_Registration_Info_UClass_UMovieSceneDoubleSection.InnerSingleton,
               StaticRegisterNativesUMovieSceneDoubleSection,0x248,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieSceneDoubleSection>,
               InternalVTableHelperCtorCaller<UMovieSceneDoubleSection>,local_res8,
               UMovieSceneSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneDoubleSection.InnerSingleton;
}

// UMovieSceneDoubleSection @ 146763fe0

UMovieSceneDoubleSection * __thiscall
UMovieSceneDoubleSection::UMovieSceneDoubleSection
          (UMovieSceneDoubleSection *this,FObjectInitializer *param_1)

{
  UMovieSceneSection::UMovieSceneSection((UMovieSceneSection *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneSection__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneEntityProvider__;
  FMovieSceneDoubleChannel::FMovieSceneDoubleChannel(&this->DoubleCurve);
  *(undefined2 *)&this->_padding_ = 0x201;
  *(undefined2 *)((longlong)&this->_padding_ + 1) = 0x101;
  *(undefined1 *)&this->_padding_ = 1;
  return this;
}

// UMovieSceneDoubleSection @ 146764040

UMovieSceneDoubleSection * __thiscall
UMovieSceneDoubleSection::UMovieSceneDoubleSection
          (UMovieSceneDoubleSection *this,FVTableHelper *param_1)

{
  UMovieSceneSection::UMovieSceneSection((UMovieSceneSection *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneSection__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneEntityProvider__;
  FMovieSceneDoubleChannel::FMovieSceneDoubleChannel(&this->DoubleCurve);
  return this;
}

// ~UMovieSceneDoubleSection @ 14676a400

void __thiscall UMovieSceneDoubleSection::~UMovieSceneDoubleSection(UMovieSceneDoubleSection *this)

{
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneSection__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneEntityProvider__;
  FMovieSceneDoubleChannel::~FMovieSceneDoubleChannel(&this->DoubleCurve);
  this->_padding_ = (longlong)&___7IMovieSceneEntityProvider__6B_;
  UMovieSceneSection::~UMovieSceneSection((UMovieSceneSection *)this);
  return;
}

// CacheChannelProxy @ 14677e610

EMovieSceneChannelProxyType __thiscall
UMovieSceneDoubleSection::CacheChannelProxy(UMovieSceneDoubleSection *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  EMovieSceneChannelProxyType EVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *local_18;
  FSharedReferencer<1> local_10;
  
  pTVar7 = ::operator_new(0x68);
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    pTVar8 = (TReferenceControllerBase<1> *)&DAT_00000010;
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
    FMovieSceneChannelProxy::FMovieSceneChannelProxy<FMovieSceneDoubleChannel>
              ((FMovieSceneChannelProxy *)(pTVar7 + 1),&this->DoubleCurve);
    pTVar8 = pTVar7 + 1;
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        EVar6 = (*pcVar4)();
        return EVar6;
      }
      goto LAB_14677e710;
    }
  }
  if (((pTVar8->_padding_ == 0) || (*(longlong *)&pTVar8->SharedReferenceCount == 0)) ||
     (*(int *)(*(longlong *)&pTVar8->SharedReferenceCount + 8) < 1)) {
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar8->_padding_ = (longlong)pTVar8;
    if (pTVar7 != *(TReferenceControllerBase<1> **)&pTVar8->SharedReferenceCount) {
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar7->WeakReferenceCount = (atomic<int>)((int)pTVar7->WeakReferenceCount + 1);
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
      *(TReferenceControllerBase<1> **)&pTVar8->SharedReferenceCount = pTVar7;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  }
LAB_14677e710:
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18 = pTVar8;
  local_10.ReferenceController = pTVar7;
  if ((TReferenceControllerBase<1> **)&this->_padding_ != &local_18) {
    this->_padding_ = (longlong)pTVar8;
    local_18 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&this->_padding_,&local_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_10.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return Static;
}

// GetPrivateStaticClass @ 146798860

UClass * __cdecl UMovieSceneDoubleSection::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneDoubleSection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneDoubleSection",
               &Z_Registration_Info_UClass_UMovieSceneDoubleSection.InnerSingleton,
               StaticRegisterNativesUMovieSceneDoubleSection,0x248,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieSceneDoubleSection>,
               InternalVTableHelperCtorCaller<UMovieSceneDoubleSection>,local_res8,
               UMovieSceneSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneDoubleSection.InnerSingleton;
}

// ImportEntityImpl @ 14679eae0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieSceneDoubleSection::ImportEntityImpl
          (UMovieSceneDoubleSection *this,UMovieSceneEntitySystemLinker *param_1,
          FEntityImportParams *param_2,FImportedEntity *param_3)

{
  FBuiltInComponentTypes *pFVar1;
  FMovieSceneTracksComponentTypes *pFVar2;
  undefined **local_48;
  ushort local_40;
  TComponentTypeID<UE::MovieScene::FSourceDoubleChannel> local_38;
  longlong *local_30;
  undefined1 local_28;
  undefined1 local_20;
  FComponentTypeID local_18;
  
  if (((int)this->_padding_ != 0) || ((char)this->_padding_ == '\x01')) {
    pFVar1 = UE::MovieScene::FBuiltInComponentTypes::Get();
    pFVar2 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
    local_28 = 1;
    local_20 = 0;
    local_40 = (pFVar2->Double).PropertyTag.Value;
    local_38 = pFVar1->DoubleChannel[0];
    local_48 = &
               ___7__TEntityBuilder_UFAdd_MovieScene_UE__U__TAdd_UFSourceDoubleChannel_MovieScene_UE___23__MovieScene_UE__6B_
    ;
    local_30 = &this->_padding_;
    local_18.Value = local_40;
    UE::MovieScene::
    TPropertyTrackEntityImportHelperImpl<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceDoubleChannel>_>
    ::Commit((TPropertyTrackEntityImportHelperImpl<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceDoubleChannel>_>
              *)&local_48,(UMovieSceneSection *)&this[-1].DoubleCurve._padding_,param_2,param_3);
  }
  return;
}

// PopulateEvaluationFieldImpl @ 1467b12f0

bool __thiscall
UMovieSceneDoubleSection::PopulateEvaluationFieldImpl
          (UMovieSceneDoubleSection *this,TRange<FFrameNumber> *param_1,
          FMovieSceneEvaluationFieldEntityMetaData *param_2,
          FMovieSceneEntityComponentFieldBuilder *param_3)

{
  FMovieScenePropertyTrackEntityImportHelper::PopulateEvaluationField
            ((UMovieSceneSection *)&this[-1].DoubleCurve._padding_,param_1,param_2,param_3);
  return true;
}

// StaticRegisterNativesUMovieSceneDoubleSection @ 1467c28d0

void __cdecl UMovieSceneDoubleSection::StaticRegisterNativesUMovieSceneDoubleSection(void)

{
  return;
}

// _getUObject @ 1467ca770

UObject * __thiscall UMovieSceneDoubleSection::_getUObject(UMovieSceneDoubleSection *this)

{
  return (UObject *)&this[-1].DoubleCurve._padding_;
}

