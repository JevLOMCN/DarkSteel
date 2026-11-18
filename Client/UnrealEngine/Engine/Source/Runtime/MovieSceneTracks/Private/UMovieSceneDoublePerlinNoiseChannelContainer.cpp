// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 12

// StaticClass @ 14658df40

UClass * __cdecl UMovieSceneDoublePerlinNoiseChannelContainer::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneDoublePerlinNoiseChannelContainer.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneDoublePerlinNoiseChannelContainer",
               &Z_Registration_Info_UClass_UMovieSceneDoublePerlinNoiseChannelContainer.
                InnerSingleton,StaticRegisterNativesUMovieSceneDoublePerlinNoiseChannelContainer,
               0xe0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneDoublePerlinNoiseChannelContainer>,
               InternalVTableHelperCtorCaller<UMovieSceneDoublePerlinNoiseChannelContainer>,
               local_res8,UMovieSceneChannelOverrideContainer::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneDoublePerlinNoiseChannelContainer.InnerSingleton;
}

// UMovieSceneDoublePerlinNoiseChannelContainer @ 14661b0e0

UMovieSceneDoublePerlinNoiseChannelContainer * __thiscall
UMovieSceneDoublePerlinNoiseChannelContainer::UMovieSceneDoublePerlinNoiseChannelContainer
          (UMovieSceneDoublePerlinNoiseChannelContainer *this,FVTableHelper *param_1)

{
  UMovieSceneChannelOverrideContainer::UMovieSceneChannelOverrideContainer
            ((UMovieSceneChannelOverrideContainer *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneDoublePerlinNoiseChannelContainer__6B_;
  (this->PerlinNoiseChannel)._padding_ = (longlong)&___7FMovieSceneDoublePerlinNoiseChannel__6B_;
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

// UMovieSceneDoublePerlinNoiseChannelContainer @ 14661b190

UMovieSceneDoublePerlinNoiseChannelContainer * __thiscall
UMovieSceneDoublePerlinNoiseChannelContainer::UMovieSceneDoublePerlinNoiseChannelContainer
          (UMovieSceneDoublePerlinNoiseChannelContainer *this,FObjectInitializer *param_1)

{
  UMovieSceneChannelOverrideContainer::UMovieSceneChannelOverrideContainer
            ((UMovieSceneChannelOverrideContainer *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneDoublePerlinNoiseChannelContainer__6B_;
  (this->PerlinNoiseChannel)._padding_ = (longlong)&___7FMovieSceneDoublePerlinNoiseChannel__6B_;
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

// ~UMovieSceneDoublePerlinNoiseChannelContainer @ 146621c30

void __thiscall
UMovieSceneDoublePerlinNoiseChannelContainer::~UMovieSceneDoublePerlinNoiseChannelContainer
          (UMovieSceneDoublePerlinNoiseChannelContainer *this)

{
  this->_padding_ = (longlong)&___7UMovieSceneDoublePerlinNoiseChannelContainer__6B_;
  FMovieSceneChannel::~FMovieSceneChannel((FMovieSceneChannel *)&this->PerlinNoiseChannel);
  UMovieSceneChannelOverrideContainer::~UMovieSceneChannelOverrideContainer
            ((UMovieSceneChannelOverrideContainer *)this);
  return;
}

// AddChannelProxy @ 1466347a0

void __thiscall
UMovieSceneDoublePerlinNoiseChannelContainer::AddChannelProxy
          (UMovieSceneDoublePerlinNoiseChannelContainer *this,FName param_1,
          FMovieSceneChannelProxyData *param_2)

{
  FMovieSceneChannelProxyData::AddInternal<FMovieSceneDoublePerlinNoiseChannel>
            (param_2,&this->PerlinNoiseChannel);
  return;
}

// GetChannel @ 1466894d0

FMovieSceneChannel * __thiscall
UMovieSceneDoublePerlinNoiseChannelContainer::GetChannel
          (UMovieSceneDoublePerlinNoiseChannelContainer *this)

{
  return (FMovieSceneChannel *)&this->PerlinNoiseChannel;
}

// GetChannel @ 1466894e0

FMovieSceneChannel * __thiscall
UMovieSceneDoublePerlinNoiseChannelContainer::GetChannel
          (UMovieSceneDoublePerlinNoiseChannelContainer *this)

{
  return (FMovieSceneChannel *)&this->PerlinNoiseChannel;
}

// GetPrivateStaticClass @ 146696630

UClass * __cdecl UMovieSceneDoublePerlinNoiseChannelContainer::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneDoublePerlinNoiseChannelContainer.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneDoublePerlinNoiseChannelContainer",
               &Z_Registration_Info_UClass_UMovieSceneDoublePerlinNoiseChannelContainer.
                InnerSingleton,StaticRegisterNativesUMovieSceneDoublePerlinNoiseChannelContainer,
               0xe0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneDoublePerlinNoiseChannelContainer>,
               InternalVTableHelperCtorCaller<UMovieSceneDoublePerlinNoiseChannelContainer>,
               local_res8,UMovieSceneChannelOverrideContainer::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneDoublePerlinNoiseChannelContainer.InnerSingleton;
}

// ImportEntityImpl @ 14669c6c0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieSceneDoublePerlinNoiseChannelContainer::ImportEntityImpl
          (UMovieSceneDoublePerlinNoiseChannelContainer *this,
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
  local_50 = pFVar1->DoublePerlinNoiseChannel;
  local_48._0_4_ = (this->PerlinNoiseChannel).PerlinNoiseParams.Frequency;
  local_48._4_4_ = *(undefined4 *)&(this->PerlinNoiseChannel).PerlinNoiseParams.field_0x4;
  dStack_40 = (this->PerlinNoiseChannel).PerlinNoiseParams.Amplitude;
  local_38._0_4_ = (this->PerlinNoiseChannel).PerlinNoiseParams.Offset;
  local_38._4_4_ = *(undefined4 *)&(this->PerlinNoiseChannel).PerlinNoiseParams.field_0x14;
  local_28 = (param_1->ResultComponent).Value;
  local_58 = &
             ___7__TEntityBuilder_U__TAdd_UFPerlinNoiseParams___MovieScene_UE__U__TAdd_N_23__MovieScene_UE__6B_
  ;
  local_20 = __real_7fefffffffffffff;
  local_30 = 1;
  local_18 = 1;
  local_10 = 0;
  UE::MovieScene::FImportedEntity::
  AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<FPerlinNoiseParams>,UE::MovieScene::TAdd<double>_>_>
            (param_3,(TEntityBuilder<UE::MovieScene::TAdd<FPerlinNoiseParams>,UE::MovieScene::TAdd<double>_>
                      *)&local_58);
  return;
}

// InitializeOverride @ 1466a37f0

void __thiscall
UMovieSceneDoublePerlinNoiseChannelContainer::InitializeOverride
          (UMovieSceneDoublePerlinNoiseChannelContainer *this,FMovieSceneChannel *param_1)

{
  uint uVar1;
  
  uVar1 = rand();
  (this->PerlinNoiseChannel).PerlinNoiseParams.Offset = (float)(uVar1 & 0x7fff) * __real_3b480190;
  return;
}

// StaticRegisterNativesUMovieSceneDoublePerlinNoiseChannelContainer @ 1466fe7c0

void __cdecl
UMovieSceneDoublePerlinNoiseChannelContainer::
StaticRegisterNativesUMovieSceneDoublePerlinNoiseChannelContainer(void)

{
  return;
}

// SupportsOverride @ 1466fea80

bool __thiscall
UMovieSceneDoublePerlinNoiseChannelContainer::SupportsOverride
          (UMovieSceneDoublePerlinNoiseChannelContainer *this,FName param_1)

{
  UScriptStruct *pUVar1;
  
  pUVar1 = FMovieSceneDoubleChannel::StaticStruct();
  return (FName)pUVar1->_padding_ == param_1;
}

