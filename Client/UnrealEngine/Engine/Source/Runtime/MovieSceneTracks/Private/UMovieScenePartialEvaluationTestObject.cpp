// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 6

// StaticClass @ 14687de90

UClass * __cdecl UMovieScenePartialEvaluationTestObject::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieScenePartialEvaluationTestObject.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieScenePartialEvaluationTestObject",
               &Z_Registration_Info_UClass_UMovieScenePartialEvaluationTestObject.InnerSingleton,
               StaticRegisterNativesUMovieScenePartialEvaluationTestObject,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieScenePartialEvaluationTestObject>,
               InternalVTableHelperCtorCaller<UMovieScenePartialEvaluationTestObject>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieScenePartialEvaluationTestObject.InnerSingleton;
}

// UMovieScenePartialEvaluationTestObject @ 14689ea00

UMovieScenePartialEvaluationTestObject * __thiscall
UMovieScenePartialEvaluationTestObject::UMovieScenePartialEvaluationTestObject
          (UMovieScenePartialEvaluationTestObject *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->FloatProperty = 0.0;
  this->_padding_ = (longlong)&___7UMovieScenePartialEvaluationTestObject__6B_;
  return this;
}

// UMovieScenePartialEvaluationTestObject @ 14689ea30

UMovieScenePartialEvaluationTestObject * __thiscall
UMovieScenePartialEvaluationTestObject::UMovieScenePartialEvaluationTestObject
          (UMovieScenePartialEvaluationTestObject *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->FloatProperty = 0.0;
  this->_padding_ = (longlong)&___7UMovieScenePartialEvaluationTestObject__6B_;
  return this;
}

// ~UMovieScenePartialEvaluationTestObject @ 1468a0da0

void __thiscall
UMovieScenePartialEvaluationTestObject::~UMovieScenePartialEvaluationTestObject
          (UMovieScenePartialEvaluationTestObject *this)

{
  this->_padding_ = (longlong)&___7UMovieScenePartialEvaluationTestObject__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 1468b7ec0

UClass * __cdecl UMovieScenePartialEvaluationTestObject::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieScenePartialEvaluationTestObject.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieScenePartialEvaluationTestObject",
               &Z_Registration_Info_UClass_UMovieScenePartialEvaluationTestObject.InnerSingleton,
               StaticRegisterNativesUMovieScenePartialEvaluationTestObject,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieScenePartialEvaluationTestObject>,
               InternalVTableHelperCtorCaller<UMovieScenePartialEvaluationTestObject>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieScenePartialEvaluationTestObject.InnerSingleton;
}

// StaticRegisterNativesUMovieScenePartialEvaluationTestObject @ 1468d01a0

void __cdecl
UMovieScenePartialEvaluationTestObject::StaticRegisterNativesUMovieScenePartialEvaluationTestObject
          (void)

{
  return;
}

