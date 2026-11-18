// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 9

// StaticClass @ 1467241e0

UClass * __cdecl UMovieSceneEnumSection::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneEnumSection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneEnumSection",
               &Z_Registration_Info_UClass_UMovieSceneEnumSection.InnerSingleton,
               StaticRegisterNativesUMovieSceneEnumSection,0x240,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieSceneEnumSection>,
               InternalVTableHelperCtorCaller<UMovieSceneEnumSection>,local_res8,
               UMovieSceneSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneEnumSection.InnerSingleton;
}

// UMovieSceneEnumSection @ 146764a50

UMovieSceneEnumSection * __thiscall
UMovieSceneEnumSection::UMovieSceneEnumSection(UMovieSceneEnumSection *this,FVTableHelper *param_1)

{
  UMovieSceneSection::UMovieSceneSection((UMovieSceneSection *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneSection__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneEntityProvider__;
  FMovieSceneByteChannel::FMovieSceneByteChannel(&this->EnumCurve);
  return this;
}

// UMovieSceneEnumSection @ 146764aa0

UMovieSceneEnumSection * __thiscall
UMovieSceneEnumSection::UMovieSceneEnumSection
          (UMovieSceneEnumSection *this,FObjectInitializer *param_1)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  TReferenceControllerBase<1> *pTVar7;
  UMovieSceneEnumSection *pUVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *local_38;
  FSharedReferencer<1> local_30;
  FGuid local_28;
  FGuid local_18;
  
  UMovieSceneSection::UMovieSceneSection((UMovieSceneSection *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneSection__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneEntityProvider__;
  FMovieSceneByteChannel::FMovieSceneByteChannel(&this->EnumCurve);
  local_28 = FSequencerObjectVersion::GUID;
  iVar6 = UObjectBaseUtility::GetLinkerCustomVersion((UObjectBaseUtility *)this,&local_28);
  if (iVar6 < 4) {
    cVar4 = '\0';
  }
  else {
    local_18 = FSequencerObjectVersion::GUID;
    iVar6 = UObjectBaseUtility::GetLinkerCustomVersion((UObjectBaseUtility *)this,&local_18);
    cVar4 = (5 < iVar6) + '\x01';
  }
  *(undefined1 *)&this->_padding_ = 1;
  *(char *)((longlong)&this->_padding_ + 1) = cVar4;
  *(undefined1 *)&this->_padding_ = 1;
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
    FMovieSceneChannelProxy::FMovieSceneChannelProxy<FMovieSceneByteChannel>
              ((FMovieSceneChannelProxy *)(pTVar7 + 1),&this->EnumCurve);
    pTVar9 = pTVar7 + 1;
    if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pUVar8 = (UMovieSceneEnumSection *)(*pcVar3)();
        return pUVar8;
      }
      goto LAB_146764c1e;
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
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar2 + 8))(plVar2,1);
        }
      }
      *(TReferenceControllerBase<1> **)&pTVar9->SharedReferenceCount = pTVar7;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  }
LAB_146764c1e:
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38 = pTVar9;
  local_30.ReferenceController = pTVar7;
  if ((TReferenceControllerBase<1> **)&this->_padding_ != &local_38) {
    this->_padding_ = (longlong)pTVar9;
    local_38 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&this->_padding_,&local_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return this;
}

// ~UMovieSceneEnumSection @ 14676a630

void __thiscall UMovieSceneEnumSection::~UMovieSceneEnumSection(UMovieSceneEnumSection *this)

{
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneSection__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneEntityProvider__;
  FMovieSceneByteChannel::~FMovieSceneByteChannel(&this->EnumCurve);
  this->_padding_ = (longlong)&___7IMovieSceneEntityProvider__6B_;
  UMovieSceneSection::~UMovieSceneSection((UMovieSceneSection *)this);
  return;
}

// GetPrivateStaticClass @ 1467989e0

UClass * __cdecl UMovieSceneEnumSection::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneEnumSection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneEnumSection",
               &Z_Registration_Info_UClass_UMovieSceneEnumSection.InnerSingleton,
               StaticRegisterNativesUMovieSceneEnumSection,0x240,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieSceneEnumSection>,
               InternalVTableHelperCtorCaller<UMovieSceneEnumSection>,local_res8,
               UMovieSceneSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneEnumSection.InnerSingleton;
}

// ImportEntityImpl @ 14679ee00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieSceneEnumSection::ImportEntityImpl
          (UMovieSceneEnumSection *this,UMovieSceneEntitySystemLinker *param_1,
          FEntityImportParams *param_2,FImportedEntity *param_3)

{
  FBuiltInComponentTypes *pFVar1;
  FMovieSceneTracksComponentTypes *pFVar2;
  undefined **local_48;
  ushort local_40;
  TComponentTypeID<UE::MovieScene::FSourceByteChannel> local_38;
  longlong *local_30;
  undefined1 local_28;
  undefined1 local_20;
  FComponentTypeID local_18;
  
  if (((int)this->_padding_ != 0) || (*(char *)((longlong)&this->_padding_ + 1) == '\x01')) {
    pFVar1 = UE::MovieScene::FBuiltInComponentTypes::Get();
    pFVar2 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
    local_28 = 1;
    local_20 = 0;
    local_40 = (pFVar2->Enum).PropertyTag.Value;
    local_38 = pFVar1->ByteChannel;
    local_48 = &
               ___7__TEntityBuilder_UFAdd_MovieScene_UE__U__TAdd_UFSourceByteChannel_MovieScene_UE___23__MovieScene_UE__6B_
    ;
    local_30 = &this->_padding_;
    local_18.Value = local_40;
    UE::MovieScene::
    TPropertyTrackEntityImportHelperImpl<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceByteChannel>_>
    ::Commit((TPropertyTrackEntityImportHelperImpl<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceByteChannel>_>
              *)&local_48,(UMovieSceneSection *)&this[-1].EnumCurve._padding_,param_2,param_3);
  }
  return;
}

// PopulateEvaluationFieldImpl @ 1467b1330

bool __thiscall
UMovieSceneEnumSection::PopulateEvaluationFieldImpl
          (UMovieSceneEnumSection *this,TRange<FFrameNumber> *param_1,
          FMovieSceneEvaluationFieldEntityMetaData *param_2,
          FMovieSceneEntityComponentFieldBuilder *param_3)

{
  FMovieScenePropertyTrackEntityImportHelper::PopulateEvaluationField
            ((UMovieSceneSection *)&this[-1].EnumCurve._padding_,param_1,param_2,param_3);
  return true;
}

// StaticRegisterNativesUMovieSceneEnumSection @ 1467c28f0

void __cdecl UMovieSceneEnumSection::StaticRegisterNativesUMovieSceneEnumSection(void)

{
  return;
}

// _getUObject @ 1467ca790

UObject * __thiscall UMovieSceneEnumSection::_getUObject(UMovieSceneEnumSection *this)

{
  return (UObject *)&this[-1].EnumCurve._padding_;
}

