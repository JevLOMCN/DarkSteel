// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 6

// StaticClass @ 1460562d0

UClass * __cdecl UMovieScenePlaybackClient::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieScenePlaybackClient.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieScenePlaybackClient",
               &Z_Registration_Info_UClass_UMovieScenePlaybackClient.InnerSingleton,
               StaticRegisterNativesUMovieScenePlaybackClient,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieScenePlaybackClient>,
               InternalVTableHelperCtorCaller<UMovieScenePlaybackClient>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieScenePlaybackClient.InnerSingleton;
}

// UMovieScenePlaybackClient @ 146059270

UMovieScenePlaybackClient * __thiscall
UMovieScenePlaybackClient::UMovieScenePlaybackClient
          (UMovieScenePlaybackClient *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UMovieScenePlaybackClient__6B_;
  return this;
}

// UMovieScenePlaybackClient @ 1460592a0

UMovieScenePlaybackClient * __thiscall
UMovieScenePlaybackClient::UMovieScenePlaybackClient
          (UMovieScenePlaybackClient *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UMovieScenePlaybackClient__6B_;
  return this;
}

// ~UMovieScenePlaybackClient @ 1460596b0

void __thiscall
UMovieScenePlaybackClient::~UMovieScenePlaybackClient(UMovieScenePlaybackClient *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14605bb40

UClass * __cdecl UMovieScenePlaybackClient::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieScenePlaybackClient.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieScenePlaybackClient",
               &Z_Registration_Info_UClass_UMovieScenePlaybackClient.InnerSingleton,
               StaticRegisterNativesUMovieScenePlaybackClient,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieScenePlaybackClient>,
               InternalVTableHelperCtorCaller<UMovieScenePlaybackClient>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieScenePlaybackClient.InnerSingleton;
}

// StaticRegisterNativesUMovieScenePlaybackClient @ 14605d050

void __cdecl UMovieScenePlaybackClient::StaticRegisterNativesUMovieScenePlaybackClient(void)

{
  return;
}

