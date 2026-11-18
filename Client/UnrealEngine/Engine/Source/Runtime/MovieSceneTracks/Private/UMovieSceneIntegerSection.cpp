// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 9

// StaticClass @ 146727710

UClass * __cdecl UMovieSceneIntegerSection::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneIntegerSection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneIntegerSection",
               &Z_Registration_Info_UClass_UMovieSceneIntegerSection.InnerSingleton,
               StaticRegisterNativesUMovieSceneIntegerSection,0x238,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UMovieSceneIntegerSection>,
               InternalVTableHelperCtorCaller<UMovieSceneIntegerSection>,local_res8,
               UMovieSceneSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneIntegerSection.InnerSingleton;
}

// UMovieSceneIntegerSection @ 146765690

UMovieSceneIntegerSection * __thiscall
UMovieSceneIntegerSection::UMovieSceneIntegerSection
          (UMovieSceneIntegerSection *this,FVTableHelper *param_1)

{
  UMovieSceneSection::UMovieSceneSection((UMovieSceneSection *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneSection__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneEntityProvider__;
  FMovieSceneIntegerChannel::FMovieSceneIntegerChannel(&this->IntegerCurve);
  return this;
}

// UMovieSceneIntegerSection @ 1467656e0

UMovieSceneIntegerSection * __thiscall
UMovieSceneIntegerSection::UMovieSceneIntegerSection
          (UMovieSceneIntegerSection *this,FObjectInitializer *param_1)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  TReferenceControllerBase<1> *pTVar7;
  UMovieSceneIntegerSection *pUVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *local_38;
  FSharedReferencer<1> local_30;
  FGuid local_28;
  FGuid local_18;
  
  UMovieSceneSection::UMovieSceneSection((UMovieSceneSection *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneSection__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneEntityProvider__;
  FMovieSceneIntegerChannel::FMovieSceneIntegerChannel(&this->IntegerCurve);
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
  *(undefined2 *)((longlong)&this->_padding_ + 1) = 0x101;
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
    FMovieSceneChannelProxy::FMovieSceneChannelProxy<FMovieSceneIntegerChannel>
              ((FMovieSceneChannelProxy *)(pTVar7 + 1),&this->IntegerCurve);
    pTVar9 = pTVar7 + 1;
    if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pUVar8 = (UMovieSceneIntegerSection *)(*pcVar3)();
        return pUVar8;
      }
      goto LAB_146765868;
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
LAB_146765868:
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

// ~UMovieSceneIntegerSection @ 14676a940

void __thiscall
UMovieSceneIntegerSection::~UMovieSceneIntegerSection(UMovieSceneIntegerSection *this)

{
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneSection__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneEntityProvider__;
  FMovieSceneIntegerChannel::~FMovieSceneIntegerChannel(&this->IntegerCurve);
  this->_padding_ = (longlong)&___7IMovieSceneEntityProvider__6B_;
  UMovieSceneSection::~UMovieSceneSection((UMovieSceneSection *)this);
  return;
}

// GetPrivateStaticClass @ 146798fe0

UClass * __cdecl UMovieSceneIntegerSection::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneIntegerSection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneIntegerSection",
               &Z_Registration_Info_UClass_UMovieSceneIntegerSection.InnerSingleton,
               StaticRegisterNativesUMovieSceneIntegerSection,0x238,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UMovieSceneIntegerSection>,
               InternalVTableHelperCtorCaller<UMovieSceneIntegerSection>,local_res8,
               UMovieSceneSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneIntegerSection.InnerSingleton;
}

// ImportEntityImpl @ 14679fd50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieSceneIntegerSection::ImportEntityImpl
          (UMovieSceneIntegerSection *this,UMovieSceneEntitySystemLinker *param_1,
          FEntityImportParams *param_2,FImportedEntity *param_3)

{
  longlong *plVar1;
  TComponentTypeID<UE::MovieScene::FSourceIntegerChannel> TVar2;
  ushort uVar3;
  TComponentTypeID<TSubclassOf<UMovieSceneBlenderSystem>_> TVar4;
  FBuiltInComponentTypes *pFVar5;
  FMovieSceneTracksComponentTypes *pFVar6;
  UClass *pUVar7;
  undefined **local_78;
  ushort local_70;
  TComponentTypeID<UE::MovieScene::FSourceIntegerChannel> local_68;
  longlong *local_60;
  undefined1 local_58;
  TComponentTypeID<TSubclassOf<UMovieSceneBlenderSystem>_> local_50;
  UClass *local_48;
  undefined1 local_40;
  undefined1 local_38;
  FComponentTypeID local_30;
  
  plVar1 = &this->_padding_;
  if (((int)this->_padding_ != 0) || (*(char *)((longlong)&this->_padding_ + 4) == '\x01')) {
    pFVar5 = UE::MovieScene::FBuiltInComponentTypes::Get();
    pFVar6 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
    TVar2 = pFVar5->IntegerChannel;
    uVar3 = (pFVar6->Integer).PropertyTag.Value;
    pUVar7 = Z_Construct_UClass_UMovieScenePiecewiseIntegerBlenderSystem_NoRegister();
    TVar4 = pFVar5->BlenderType;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar7 != (UClass *)0x0) {
        UE::GC::MarkAsReachable((UObject *)pUVar7);
      }
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (pUVar7 != (UClass *)0x0) {
          UE::GC::MarkAsReachable((UObject *)pUVar7);
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UClass *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar7);
        }
      }
    }
    local_58 = 1;
    local_40 = 1;
    local_70 = uVar3;
    local_68 = TVar2;
    local_60 = plVar1;
    local_50 = TVar4;
    local_48 = pUVar7;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar7);
    }
    local_38 = 0;
    local_78 = &
               ___7__TEntityBuilder_UFAdd_MovieScene_UE__U__TAdd_UFSourceIntegerChannel_MovieScene_UE___23_U__TAdd_V__TSubclassOf_VUMovieSceneBlenderSystem_____23__MovieScene_UE__6B_
    ;
    local_30.Value = uVar3;
    UE::MovieScene::
    TPropertyTrackEntityImportHelperImpl<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceIntegerChannel>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>_>
    ::Commit((TPropertyTrackEntityImportHelperImpl<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceIntegerChannel>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>_>
              *)&local_78,(UMovieSceneSection *)&this[-1].IntegerCurve._padding_,param_2,param_3);
  }
  return;
}

// PopulateEvaluationFieldImpl @ 1467b1640

bool __thiscall
UMovieSceneIntegerSection::PopulateEvaluationFieldImpl
          (UMovieSceneIntegerSection *this,TRange<FFrameNumber> *param_1,
          FMovieSceneEvaluationFieldEntityMetaData *param_2,
          FMovieSceneEntityComponentFieldBuilder *param_3)

{
  FMovieScenePropertyTrackEntityImportHelper::PopulateEvaluationField
            ((UMovieSceneSection *)&this[-1].IntegerCurve._padding_,param_1,param_2,param_3);
  return true;
}

// StaticRegisterNativesUMovieSceneIntegerSection @ 1467c2970

void __cdecl UMovieSceneIntegerSection::StaticRegisterNativesUMovieSceneIntegerSection(void)

{
  return;
}

// _getUObject @ 1467ca800

UObject * __thiscall UMovieSceneIntegerSection::_getUObject(UMovieSceneIntegerSection *this)

{
  return (UObject *)&this[-1].IntegerCurve._padding_;
}

