// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 6

// StaticClass @ 14687df80

UClass * __cdecl UMovieSceneSectionsToKey::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneSectionsToKey.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneSectionsToKey",
               &Z_Registration_Info_UClass_UMovieSceneSectionsToKey.InnerSingleton,
               StaticRegisterNativesUMovieSceneSectionsToKey,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneSectionsToKey>,
               InternalVTableHelperCtorCaller<UMovieSceneSectionsToKey>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneSectionsToKey.InnerSingleton;
}

// UMovieSceneSectionsToKey @ 14689ee60

UMovieSceneSectionsToKey * __thiscall
UMovieSceneSectionsToKey::UMovieSceneSectionsToKey
          (UMovieSceneSectionsToKey *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UMovieSceneSectionsToKey__6B_;
  return this;
}

// UMovieSceneSectionsToKey @ 14689ee90

UMovieSceneSectionsToKey * __thiscall
UMovieSceneSectionsToKey::UMovieSceneSectionsToKey
          (UMovieSceneSectionsToKey *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UMovieSceneSectionsToKey__6B_;
  return this;
}

// ~UMovieSceneSectionsToKey @ 1468a0f70

void __thiscall UMovieSceneSectionsToKey::~UMovieSceneSectionsToKey(UMovieSceneSectionsToKey *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 1468b8330

UClass * __cdecl UMovieSceneSectionsToKey::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneSectionsToKey.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneSectionsToKey",
               &Z_Registration_Info_UClass_UMovieSceneSectionsToKey.InnerSingleton,
               StaticRegisterNativesUMovieSceneSectionsToKey,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneSectionsToKey>,
               InternalVTableHelperCtorCaller<UMovieSceneSectionsToKey>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneSectionsToKey.InnerSingleton;
}

// StaticRegisterNativesUMovieSceneSectionsToKey @ 1468d0200

void __cdecl UMovieSceneSectionsToKey::StaticRegisterNativesUMovieSceneSectionsToKey(void)

{
  return;
}

