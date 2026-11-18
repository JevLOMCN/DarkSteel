// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 6

// StaticClass @ 146881d30

UClass * __cdecl UMovieSceneDecomposerTestObject::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneDecomposerTestObject.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneDecomposerTestObject",
               &Z_Registration_Info_UClass_UMovieSceneDecomposerTestObject.InnerSingleton,
               StaticRegisterNativesUMovieSceneDecomposerTestObject,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneDecomposerTestObject>,
               InternalVTableHelperCtorCaller<UMovieSceneDecomposerTestObject>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneDecomposerTestObject.InnerSingleton;
}

// UMovieSceneDecomposerTestObject @ 14689d900

UMovieSceneDecomposerTestObject * __thiscall
UMovieSceneDecomposerTestObject::UMovieSceneDecomposerTestObject
          (UMovieSceneDecomposerTestObject *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->FloatProperty = 0.0;
  this->_padding_ = (longlong)&___7UMovieSceneDecomposerTestObject__6B_;
  return this;
}

// UMovieSceneDecomposerTestObject @ 14689d930

UMovieSceneDecomposerTestObject * __thiscall
UMovieSceneDecomposerTestObject::UMovieSceneDecomposerTestObject
          (UMovieSceneDecomposerTestObject *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->FloatProperty = 0.0;
  this->_padding_ = (longlong)&___7UMovieSceneDecomposerTestObject__6B_;
  return this;
}

// ~UMovieSceneDecomposerTestObject @ 1468a0850

void __thiscall
UMovieSceneDecomposerTestObject::~UMovieSceneDecomposerTestObject
          (UMovieSceneDecomposerTestObject *this)

{
  this->_padding_ = (longlong)&___7UMovieSceneDecomposerTestObject__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 1468b7090

UClass * __cdecl UMovieSceneDecomposerTestObject::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneDecomposerTestObject.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneDecomposerTestObject",
               &Z_Registration_Info_UClass_UMovieSceneDecomposerTestObject.InnerSingleton,
               StaticRegisterNativesUMovieSceneDecomposerTestObject,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneDecomposerTestObject>,
               InternalVTableHelperCtorCaller<UMovieSceneDecomposerTestObject>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneDecomposerTestObject.InnerSingleton;
}

// StaticRegisterNativesUMovieSceneDecomposerTestObject @ 1468d0040

void __cdecl
UMovieSceneDecomposerTestObject::StaticRegisterNativesUMovieSceneDecomposerTestObject(void)

{
  return;
}

