// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 12

// StaticClass @ 14658e9a0

UClass * __cdecl UMovieSceneFloatPerlinNoiseChannelContainer::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneFloatPerlinNoiseChannelContainer.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneFloatPerlinNoiseChannelContainer",
               &Z_Registration_Info_UClass_UMovieSceneFloatPerlinNoiseChannelContainer.
                InnerSingleton,StaticRegisterNativesUMovieSceneFloatPerlinNoiseChannelContainer,0xe0
               ,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneFloatPerlinNoiseChannelContainer>,
               InternalVTableHelperCtorCaller<UMovieSceneFloatPerlinNoiseChannelContainer>,
               local_res8,UMovieSceneChannelOverrideContainer::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneFloatPerlinNoiseChannelContainer.InnerSingleton;
}

// UMovieSceneFloatPerlinNoiseChannelContainer @ 14661b240

UMovieSceneFloatPerlinNoiseChannelContainer * __thiscall
UMovieSceneFloatPerlinNoiseChannelContainer::UMovieSceneFloatPerlinNoiseChannelContainer
          (UMovieSceneFloatPerlinNoiseChannelContainer *this,FVTableHelper *param_1)

{
  UMovieSceneChannelOverrideContainer::UMovieSceneChannelOverrideContainer
            ((UMovieSceneChannelOverrideContainer *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneFloatPerlinNoiseChannelContainer__6B_;
  (this->PerlinNoiseChannel)._padding_ = (longlong)&___7FMovieSceneFloatPerlinNoiseChannel__6B_;
  (this->PerlinNoiseChannel).PerlinNoiseParams.Amplitude = 1.0;
  (this->PerlinNoiseChannel)._padding_ = 0;
  (this->PerlinNoiseChannel)._padding_ = 0;
  (this->PerlinNoiseChannel)._padding_ = 0;
  (this->PerlinNoiseChannel)._padding_ = 2;
  (this->PerlinNoiseChannel)._padding_ = 0;
  (this->PerlinNoiseChannel)._padding_ = 0;
  (this->PerlinNoiseChannel)._padding_ = 0;
  (this->PerlinNoiseChannel)._padding_ = 2;
  (this->PerlinNoiseChannel)._padding_ = 0;
  (this->PerlinNoiseChannel)._padding_ = 0;
  (this->PerlinNoiseChannel)._padding_ = 0;
  (this->PerlinNoiseChannel)._padding_ = 2;
  (this->PerlinNoiseChannel).PerlinNoiseParams.Frequency = 4.0;
  (this->PerlinNoiseChannel).PerlinNoiseParams.Offset = 0.0;
  return this;
}

// UMovieSceneFloatPerlinNoiseChannelContainer @ 14661b2f0

UMovieSceneFloatPerlinNoiseChannelContainer * __thiscall
UMovieSceneFloatPerlinNoiseChannelContainer::UMovieSceneFloatPerlinNoiseChannelContainer
          (UMovieSceneFloatPerlinNoiseChannelContainer *this,FObjectInitializer *param_1)

{
  UMovieSceneChannelOverrideContainer::UMovieSceneChannelOverrideContainer
            ((UMovieSceneChannelOverrideContainer *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneFloatPerlinNoiseChannelContainer__6B_;
  (this->PerlinNoiseChannel)._padding_ = (longlong)&___7FMovieSceneFloatPerlinNoiseChannel__6B_;
  (this->PerlinNoiseChannel).PerlinNoiseParams.Amplitude = 1.0;
  (this->PerlinNoiseChannel)._padding_ = 0;
  (this->PerlinNoiseChannel)._padding_ = 0;
  (this->PerlinNoiseChannel)._padding_ = 0;
  (this->PerlinNoiseChannel)._padding_ = 2;
  (this->PerlinNoiseChannel)._padding_ = 0;
  (this->PerlinNoiseChannel)._padding_ = 0;
  (this->PerlinNoiseChannel)._padding_ = 0;
  (this->PerlinNoiseChannel)._padding_ = 2;
  (this->PerlinNoiseChannel)._padding_ = 0;
  (this->PerlinNoiseChannel)._padding_ = 0;
  (this->PerlinNoiseChannel)._padding_ = 0;
  (this->PerlinNoiseChannel)._padding_ = 2;
  (this->PerlinNoiseChannel).PerlinNoiseParams.Frequency = 4.0;
  (this->PerlinNoiseChannel).PerlinNoiseParams.Offset = 0.0;
  return this;
}

// ~UMovieSceneFloatPerlinNoiseChannelContainer @ 146621c60

void __thiscall
UMovieSceneFloatPerlinNoiseChannelContainer::~UMovieSceneFloatPerlinNoiseChannelContainer
          (UMovieSceneFloatPerlinNoiseChannelContainer *this)

{
  this->_padding_ = (longlong)&___7UMovieSceneFloatPerlinNoiseChannelContainer__6B_;
  FMovieSceneChannel::~FMovieSceneChannel((FMovieSceneChannel *)&this->PerlinNoiseChannel);
  UMovieSceneChannelOverrideContainer::~UMovieSceneChannelOverrideContainer
            ((UMovieSceneChannelOverrideContainer *)this);
  return;
}

// AddChannelProxy @ 1466347c0

void __thiscall
UMovieSceneFloatPerlinNoiseChannelContainer::AddChannelProxy
          (UMovieSceneFloatPerlinNoiseChannelContainer *this,FName param_1,
          FMovieSceneChannelProxyData *param_2)

{
  FMovieSceneChannelProxyData::AddInternal<FMovieSceneFloatPerlinNoiseChannel>
            (param_2,&this->PerlinNoiseChannel);
  return;
}

// GetChannel @ 1466894f0

FMovieSceneChannel * __thiscall
UMovieSceneFloatPerlinNoiseChannelContainer::GetChannel
          (UMovieSceneFloatPerlinNoiseChannelContainer *this)

{
  return (FMovieSceneChannel *)&this->PerlinNoiseChannel;
}

// GetChannel @ 146689500

FMovieSceneChannel * __thiscall
UMovieSceneFloatPerlinNoiseChannelContainer::GetChannel
          (UMovieSceneFloatPerlinNoiseChannelContainer *this)

{
  return (FMovieSceneChannel *)&this->PerlinNoiseChannel;
}

// GetPrivateStaticClass @ 1466966f0

UClass * __cdecl UMovieSceneFloatPerlinNoiseChannelContainer::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneFloatPerlinNoiseChannelContainer.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneFloatPerlinNoiseChannelContainer",
               &Z_Registration_Info_UClass_UMovieSceneFloatPerlinNoiseChannelContainer.
                InnerSingleton,StaticRegisterNativesUMovieSceneFloatPerlinNoiseChannelContainer,0xe0
               ,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneFloatPerlinNoiseChannelContainer>,
               InternalVTableHelperCtorCaller<UMovieSceneFloatPerlinNoiseChannelContainer>,
               local_res8,UMovieSceneChannelOverrideContainer::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneFloatPerlinNoiseChannelContainer.InnerSingleton;
}

// ImportEntityImpl @ 14669c770

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieSceneFloatPerlinNoiseChannelContainer::ImportEntityImpl
          (UMovieSceneFloatPerlinNoiseChannelContainer *this,
          FChannelOverrideEntityImportParams *param_1,FEntityImportParams *param_2,
          FImportedEntity *param_3)

{
  FMovieSceneTracksComponentTypes *pFVar1;
  undefined **local_58;
  TComponentTypeID<FPerlinNoiseParams> local_50;
  undefined8 local_48;
  double dStack_40;
  undefined8 local_38;
  undefined1 local_30;
  ushort local_28;
  undefined8 local_20;
  undefined1 local_18;
  undefined1 local_10;
  
  pFVar1 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
  UE::MovieScene::FBuiltInComponentTypes::Get();
  local_50 = pFVar1->FloatPerlinNoiseChannel;
  local_48._0_4_ = (this->PerlinNoiseChannel).PerlinNoiseParams.Frequency;
  local_48._4_4_ = *(undefined4 *)&(this->PerlinNoiseChannel).PerlinNoiseParams.field_0x4;
  dStack_40 = (this->PerlinNoiseChannel).PerlinNoiseParams.Amplitude;
  local_38._0_4_ = (this->PerlinNoiseChannel).PerlinNoiseParams.Offset;
  local_38._4_4_ = *(undefined4 *)&(this->PerlinNoiseChannel).PerlinNoiseParams.field_0x14;
  local_28 = (param_1->ResultComponent).Value;
  local_58 = &
             ___7__TEntityBuilder_U__TAdd_UFPerlinNoiseParams___MovieScene_UE__U__TAdd_N_23__MovieScene_UE__6B_
  ;
  local_20 = __real_47efffffe0000000;
  local_30 = 1;
  local_18 = 1;
  local_10 = 0;
  UE::MovieScene::FImportedEntity::
  AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<FPerlinNoiseParams>,UE::MovieScene::TAdd<double>_>_>
            (param_3,(TEntityBuilder<UE::MovieScene::TAdd<FPerlinNoiseParams>,UE::MovieScene::TAdd<double>_>
                      *)&local_58);
  return;
}

// InitializeOverride @ 1466a3830

void __thiscall
UMovieSceneFloatPerlinNoiseChannelContainer::InitializeOverride
          (UMovieSceneFloatPerlinNoiseChannelContainer *this,FMovieSceneChannel *param_1)

{
  uint uVar1;
  
  uVar1 = rand();
  (this->PerlinNoiseChannel).PerlinNoiseParams.Offset = (float)(uVar1 & 0x7fff) * __real_3b480190;
  return;
}

// StaticRegisterNativesUMovieSceneFloatPerlinNoiseChannelContainer @ 1466fe7d0

void __cdecl
UMovieSceneFloatPerlinNoiseChannelContainer::
StaticRegisterNativesUMovieSceneFloatPerlinNoiseChannelContainer(void)

{
  return;
}

// SupportsOverride @ 1466feab0

bool __thiscall
UMovieSceneFloatPerlinNoiseChannelContainer::SupportsOverride
          (UMovieSceneFloatPerlinNoiseChannelContainer *this,FName param_1)

{
  UScriptStruct *pUVar1;
  
  pUVar1 = FMovieSceneFloatChannel::StaticStruct();
  return (FName)pUVar1->_padding_ == param_1;
}

