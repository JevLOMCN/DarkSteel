// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 6

// StaticClass @ 1461e9400

UClass * __cdecl UMovieSceneNameableTrack::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneNameableTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneNameableTrack",
               &Z_Registration_Info_UClass_UMovieSceneNameableTrack.InnerSingleton,
               StaticRegisterNativesUMovieSceneNameableTrack,0x118,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneNameableTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneNameableTrack>,local_res8,
               UMovieSceneTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneNameableTrack.InnerSingleton;
}

// UMovieSceneNameableTrack @ 1461fdcf0

UMovieSceneNameableTrack * __thiscall
UMovieSceneNameableTrack::UMovieSceneNameableTrack
          (UMovieSceneNameableTrack *this,FVTableHelper *param_1)

{
  UMovieSceneTrack::UMovieSceneTrack((UMovieSceneTrack *)this,param_1);
  *(undefined ***)this = &_vftable__for__UMovieSceneDecorationContainerObject__;
  *(undefined ***)&this->field_0x70 = &_vftable__for__IMovieSceneTrackVirtualAPI__;
  return this;
}

// UMovieSceneNameableTrack @ 1461fdd30

UMovieSceneNameableTrack * __thiscall
UMovieSceneNameableTrack::UMovieSceneNameableTrack
          (UMovieSceneNameableTrack *this,FObjectInitializer *param_1)

{
  UMovieSceneTrack::UMovieSceneTrack((UMovieSceneTrack *)this,param_1);
  *(undefined ***)this = &_vftable__for__UMovieSceneDecorationContainerObject__;
  *(undefined ***)&this->field_0x70 = &_vftable__for__IMovieSceneTrackVirtualAPI__;
  return this;
}

// ~UMovieSceneNameableTrack @ 1461ffcd0

void __thiscall UMovieSceneNameableTrack::~UMovieSceneNameableTrack(UMovieSceneNameableTrack *this)

{
  *(undefined ***)this = &_vftable__for__UMovieSceneDecorationContainerObject__;
  *(undefined ***)&this->field_0x70 = &_vftable__for__IMovieSceneTrackVirtualAPI__;
  UMovieSceneTrack::~UMovieSceneTrack((UMovieSceneTrack *)this);
  return;
}

// GetPrivateStaticClass @ 14621bc20

UClass * __cdecl UMovieSceneNameableTrack::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneNameableTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneNameableTrack",
               &Z_Registration_Info_UClass_UMovieSceneNameableTrack.InnerSingleton,
               StaticRegisterNativesUMovieSceneNameableTrack,0x118,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneNameableTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneNameableTrack>,local_res8,
               UMovieSceneTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneNameableTrack.InnerSingleton;
}

// StaticRegisterNativesUMovieSceneNameableTrack @ 146237c40

void __cdecl UMovieSceneNameableTrack::StaticRegisterNativesUMovieSceneNameableTrack(void)

{
  return;
}

