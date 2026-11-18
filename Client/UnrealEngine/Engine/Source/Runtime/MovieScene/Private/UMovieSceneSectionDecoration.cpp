// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 6

// StaticClass @ 146056570

UClass * __cdecl UMovieSceneSectionDecoration::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneSectionDecoration.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneSectionDecoration",
               &Z_Registration_Info_UClass_UMovieSceneSectionDecoration.InnerSingleton,
               StaticRegisterNativesUMovieSceneSectionDecoration,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneSectionDecoration>,
               InternalVTableHelperCtorCaller<UMovieSceneSectionDecoration>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneSectionDecoration.InnerSingleton;
}

// UMovieSceneSectionDecoration @ 146059330

UMovieSceneSectionDecoration * __thiscall
UMovieSceneSectionDecoration::UMovieSceneSectionDecoration
          (UMovieSceneSectionDecoration *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UMovieSceneSectionDecoration__6B_;
  return this;
}

// UMovieSceneSectionDecoration @ 146059360

UMovieSceneSectionDecoration * __thiscall
UMovieSceneSectionDecoration::UMovieSceneSectionDecoration
          (UMovieSceneSectionDecoration *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UMovieSceneSectionDecoration__6B_;
  return this;
}

// ~UMovieSceneSectionDecoration @ 1460596e0

void __thiscall
UMovieSceneSectionDecoration::~UMovieSceneSectionDecoration(UMovieSceneSectionDecoration *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14605bcc0

UClass * __cdecl UMovieSceneSectionDecoration::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneSectionDecoration.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneSectionDecoration",
               &Z_Registration_Info_UClass_UMovieSceneSectionDecoration.InnerSingleton,
               StaticRegisterNativesUMovieSceneSectionDecoration,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneSectionDecoration>,
               InternalVTableHelperCtorCaller<UMovieSceneSectionDecoration>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneSectionDecoration.InnerSingleton;
}

// StaticRegisterNativesUMovieSceneSectionDecoration @ 14605d070

void __cdecl UMovieSceneSectionDecoration::StaticRegisterNativesUMovieSceneSectionDecoration(void)

{
  return;
}

