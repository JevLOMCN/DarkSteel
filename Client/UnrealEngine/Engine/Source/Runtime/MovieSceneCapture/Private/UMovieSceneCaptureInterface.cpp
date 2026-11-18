// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneCapture
// Functions: 6

// StaticClass @ 146bd37f0

UClass * __cdecl UMovieSceneCaptureInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneCaptureInterface.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneCapture",L"MovieSceneCaptureInterface",
               &Z_Registration_Info_UClass_UMovieSceneCaptureInterface.InnerSingleton,
               StaticRegisterNativesUMovieSceneCaptureInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneCaptureInterface>,
               InternalVTableHelperCtorCaller<UMovieSceneCaptureInterface>,aFStackX_8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneCaptureInterface.InnerSingleton;
}

// UMovieSceneCaptureInterface @ 146bd8ca0

UMovieSceneCaptureInterface * __thiscall
UMovieSceneCaptureInterface::UMovieSceneCaptureInterface
          (UMovieSceneCaptureInterface *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UMovieSceneCaptureInterface__6B_;
  return this;
}

// UMovieSceneCaptureInterface @ 146bd8cd0

UMovieSceneCaptureInterface * __thiscall
UMovieSceneCaptureInterface::UMovieSceneCaptureInterface
          (UMovieSceneCaptureInterface *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UMovieSceneCaptureInterface__6B_;
  return this;
}

// ~UMovieSceneCaptureInterface @ 146bd9820

void __thiscall
UMovieSceneCaptureInterface::~UMovieSceneCaptureInterface(UMovieSceneCaptureInterface *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 146be0d00

UClass * __cdecl UMovieSceneCaptureInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneCaptureInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneCapture",L"MovieSceneCaptureInterface",
               &Z_Registration_Info_UClass_UMovieSceneCaptureInterface.InnerSingleton,
               StaticRegisterNativesUMovieSceneCaptureInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneCaptureInterface>,
               InternalVTableHelperCtorCaller<UMovieSceneCaptureInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneCaptureInterface.InnerSingleton;
}

// StaticRegisterNativesUMovieSceneCaptureInterface @ 146be8de0

void __cdecl UMovieSceneCaptureInterface::StaticRegisterNativesUMovieSceneCaptureInterface(void)

{
  return;
}

