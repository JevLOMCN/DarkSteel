// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 9

// StaticClass @ 1467288d0

UClass * __cdecl UMovieSceneByteSection::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneByteSection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneByteSection",
               &Z_Registration_Info_UClass_UMovieSceneByteSection.InnerSingleton,
               StaticRegisterNativesUMovieSceneByteSection,0x240,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieSceneByteSection>,
               InternalVTableHelperCtorCaller<UMovieSceneByteSection>,local_res8,
               UMovieSceneSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneByteSection.InnerSingleton;
}

// UMovieSceneByteSection @ 146761db0

UMovieSceneByteSection * __thiscall
UMovieSceneByteSection::UMovieSceneByteSection(UMovieSceneByteSection *this,FVTableHelper *param_1)

{
  UMovieSceneSection::UMovieSceneSection((UMovieSceneSection *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneSection__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneEntityProvider__;
  FMovieSceneByteChannel::FMovieSceneByteChannel(&this->ByteCurve);
  return this;
}

// UMovieSceneByteSection @ 146761e00

UMovieSceneByteSection * __thiscall
UMovieSceneByteSection::UMovieSceneByteSection
          (UMovieSceneByteSection *this,FObjectInitializer *param_1)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  TReferenceControllerBase<1> *pTVar7;
  UMovieSceneByteSection *pUVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *local_38;
  FSharedReferencer<1> local_30;
  FGuid local_28;
  FGuid local_18;
  
  UMovieSceneSection::UMovieSceneSection((UMovieSceneSection *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneSection__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneEntityProvider__;
  FMovieSceneByteChannel::FMovieSceneByteChannel(&this->ByteCurve);
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
              ((FMovieSceneChannelProxy *)(pTVar7 + 1),&this->ByteCurve);
    pTVar9 = pTVar7 + 1;
    if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pUVar8 = (UMovieSceneByteSection *)(*pcVar3)();
        return pUVar8;
      }
      goto LAB_146761f7e;
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
LAB_146761f7e:
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

// ~UMovieSceneByteSection @ 146769da0

void __thiscall UMovieSceneByteSection::~UMovieSceneByteSection(UMovieSceneByteSection *this)

{
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneSection__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneEntityProvider__;
  FMovieSceneByteChannel::~FMovieSceneByteChannel(&this->ByteCurve);
  this->_padding_ = (longlong)&___7IMovieSceneEntityProvider__6B_;
  UMovieSceneSection::~UMovieSceneSection((UMovieSceneSection *)this);
  return;
}

// GetPrivateStaticClass @ 1467977e0

UClass * __cdecl UMovieSceneByteSection::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneByteSection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneByteSection",
               &Z_Registration_Info_UClass_UMovieSceneByteSection.InnerSingleton,
               StaticRegisterNativesUMovieSceneByteSection,0x240,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieSceneByteSection>,
               InternalVTableHelperCtorCaller<UMovieSceneByteSection>,local_res8,
               UMovieSceneSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneByteSection.InnerSingleton;
}

// ImportEntityImpl @ 14679ce80

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneByteSection::ImportEntityImpl
          (UMovieSceneByteSection *this,UMovieSceneEntitySystemLinker *param_1,
          FEntityImportParams *param_2,FImportedEntity *param_3)

{
  longlong *this_00;
  ushort uVar1;
  TComponentTypeID<UE::MovieScene::FSourceByteChannel> TVar2;
  TComponentTypeID<TSubclassOf<UMovieSceneBlenderSystem>_> TVar3;
  UClass *pUVar4;
  UMovieSceneByteTrack *this_01;
  UEnum *pUVar5;
  FBuiltInComponentTypes *pFVar6;
  FMovieSceneTracksComponentTypes *pFVar7;
  undefined1 local_78 [24];
  longlong *local_60;
  undefined1 local_58;
  TComponentTypeID<TSubclassOf<UMovieSceneBlenderSystem>_> local_50;
  UClass *local_48;
  undefined1 local_40;
  undefined1 local_38;
  FComponentTypeID local_30;
  
  if (((int)this->_padding_ != 0) || (*(char *)((longlong)&this->_padding_ + 1) == '\x01')) {
    pUVar4 = Z_Construct_UClass_UMovieSceneByteTrack_NoRegister();
    this_00 = &this[-1].ByteCurve._padding_;
    this_01 = (UMovieSceneByteTrack *)
              UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this_00,pUVar4);
    if (this_01 == (UMovieSceneByteTrack *)0x0) {
      pUVar5 = (UEnum *)0x0;
    }
    else {
      pUVar5 = UMovieSceneByteTrack::GetEnum(this_01);
    }
    pFVar6 = UE::MovieScene::FBuiltInComponentTypes::Get();
    pFVar7 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
    local_60 = &this->_padding_;
    if (pUVar5 == (UEnum *)0x0) {
      uVar1 = (pFVar7->Byte).PropertyTag.Value;
      TVar2 = pFVar6->ByteChannel;
      pUVar4 = Z_Construct_UClass_UMovieScenePiecewiseByteBlenderSystem_NoRegister();
      TVar3 = pFVar6->BlenderType;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (pUVar4 != (UClass *)0x0) {
          UE::GC::MarkAsReachable((UObject *)pUVar4);
        }
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          if (pUVar4 != (UClass *)0x0) {
            UE::GC::MarkAsReachable((UObject *)pUVar4);
          }
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UClass *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar4);
          }
        }
      }
      local_58 = 1;
      local_40 = 1;
      local_78._8_2_ = uVar1;
      local_78._16_2_ = TVar2;
      local_50 = TVar3;
      local_48 = pUVar4;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar4);
      }
      local_38 = 0;
      local_78._0_8_ =
           &
           ___7__TEntityBuilder_UFAdd_MovieScene_UE__U__TAdd_UFSourceByteChannel_MovieScene_UE___23_U__TAdd_V__TSubclassOf_VUMovieSceneBlenderSystem_____23__MovieScene_UE__6B_
      ;
      local_30.Value = uVar1;
      UE::MovieScene::
      TPropertyTrackEntityImportHelperImpl<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceByteChannel>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>_>
      ::Commit((TPropertyTrackEntityImportHelperImpl<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceByteChannel>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>_>
                *)local_78,(UMovieSceneSection *)this_00,param_2,param_3);
    }
    else {
      local_78._8_2_ = (pFVar7->Enum).PropertyTag.Value;
      local_78._16_2_ = pFVar6->ByteChannel;
      local_48 = (UClass *)CONCAT62(local_48._2_6_,local_78._8_2_);
      local_78._0_8_ =
           &
           ___7__TEntityBuilder_UFAdd_MovieScene_UE__U__TAdd_UFSourceByteChannel_MovieScene_UE___23__MovieScene_UE__6B_
      ;
      local_58 = 1;
      local_50 = (TComponentTypeID<TSubclassOf<UMovieSceneBlenderSystem>_>)
                 ((ushort)(byte)local_50._1_1_ << 8);
      UE::MovieScene::
      TPropertyTrackEntityImportHelperImpl<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceByteChannel>_>
      ::Commit((TPropertyTrackEntityImportHelperImpl<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceByteChannel>_>
                *)local_78,(UMovieSceneSection *)this_00,param_2,param_3);
    }
  }
  return;
}

// PopulateEvaluationFieldImpl @ 1467b1050

bool __thiscall
UMovieSceneByteSection::PopulateEvaluationFieldImpl
          (UMovieSceneByteSection *this,TRange<FFrameNumber> *param_1,
          FMovieSceneEvaluationFieldEntityMetaData *param_2,
          FMovieSceneEntityComponentFieldBuilder *param_3)

{
  FMovieScenePropertyTrackEntityImportHelper::PopulateEvaluationField
            ((UMovieSceneSection *)&this[-1].ByteCurve._padding_,param_1,param_2,param_3);
  return true;
}

// StaticRegisterNativesUMovieSceneByteSection @ 1467c2680

void __cdecl UMovieSceneByteSection::StaticRegisterNativesUMovieSceneByteSection(void)

{
  return;
}

// _getUObject @ 1467ca6b0

UObject * __thiscall UMovieSceneByteSection::_getUObject(UMovieSceneByteSection *this)

{
  return (UObject *)&this[-1].ByteCurve._padding_;
}

