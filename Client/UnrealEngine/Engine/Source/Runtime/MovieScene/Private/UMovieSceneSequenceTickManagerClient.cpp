// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 6

// StaticClass @ 146055690

UClass * __cdecl UMovieSceneSequenceTickManagerClient::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneSequenceTickManagerClient.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneSequenceTickManagerClient",
               &Z_Registration_Info_UClass_UMovieSceneSequenceTickManagerClient.InnerSingleton,
               StaticRegisterNativesUMovieSceneSequenceTickManagerClient,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneSequenceTickManagerClient>,
               InternalVTableHelperCtorCaller<UMovieSceneSequenceTickManagerClient>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneSequenceTickManagerClient.InnerSingleton;
}

// UMovieSceneSequenceTickManagerClient @ 1460593f0

UMovieSceneSequenceTickManagerClient * __thiscall
UMovieSceneSequenceTickManagerClient::UMovieSceneSequenceTickManagerClient
          (UMovieSceneSequenceTickManagerClient *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UMovieSceneSequenceTickManagerClient__6B_;
  return this;
}

// UMovieSceneSequenceTickManagerClient @ 146059420

UMovieSceneSequenceTickManagerClient * __thiscall
UMovieSceneSequenceTickManagerClient::UMovieSceneSequenceTickManagerClient
          (UMovieSceneSequenceTickManagerClient *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UMovieSceneSequenceTickManagerClient__6B_;
  return this;
}

// ~UMovieSceneSequenceTickManagerClient @ 146059700

void __thiscall
UMovieSceneSequenceTickManagerClient::~UMovieSceneSequenceTickManagerClient
          (UMovieSceneSequenceTickManagerClient *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14605be40

UClass * __cdecl UMovieSceneSequenceTickManagerClient::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneSequenceTickManagerClient.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneSequenceTickManagerClient",
               &Z_Registration_Info_UClass_UMovieSceneSequenceTickManagerClient.InnerSingleton,
               StaticRegisterNativesUMovieSceneSequenceTickManagerClient,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneSequenceTickManagerClient>,
               InternalVTableHelperCtorCaller<UMovieSceneSequenceTickManagerClient>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneSequenceTickManagerClient.InnerSingleton;
}

// StaticRegisterNativesUMovieSceneSequenceTickManagerClient @ 14605d090

void __cdecl
UMovieSceneSequenceTickManagerClient::StaticRegisterNativesUMovieSceneSequenceTickManagerClient
          (void)

{
  return;
}

