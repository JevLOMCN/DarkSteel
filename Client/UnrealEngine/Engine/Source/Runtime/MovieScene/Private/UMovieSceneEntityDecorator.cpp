// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 6

// StaticClass @ 1460547b0

UClass * __cdecl UMovieSceneEntityDecorator::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneEntityDecorator.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneEntityDecorator",
               &Z_Registration_Info_UClass_UMovieSceneEntityDecorator.InnerSingleton,
               StaticRegisterNativesUMovieSceneEntityDecorator,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneEntityDecorator>,
               InternalVTableHelperCtorCaller<UMovieSceneEntityDecorator>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneEntityDecorator.InnerSingleton;
}

// UMovieSceneEntityDecorator @ 146059090

UMovieSceneEntityDecorator * __thiscall
UMovieSceneEntityDecorator::UMovieSceneEntityDecorator
          (UMovieSceneEntityDecorator *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UMovieSceneEntityDecorator__6B_;
  return this;
}

// UMovieSceneEntityDecorator @ 1460590c0

UMovieSceneEntityDecorator * __thiscall
UMovieSceneEntityDecorator::UMovieSceneEntityDecorator
          (UMovieSceneEntityDecorator *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UMovieSceneEntityDecorator__6B_;
  return this;
}

// ~UMovieSceneEntityDecorator @ 146059650

void __thiscall
UMovieSceneEntityDecorator::~UMovieSceneEntityDecorator(UMovieSceneEntityDecorator *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14605b780

UClass * __cdecl UMovieSceneEntityDecorator::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneEntityDecorator.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneEntityDecorator",
               &Z_Registration_Info_UClass_UMovieSceneEntityDecorator.InnerSingleton,
               StaticRegisterNativesUMovieSceneEntityDecorator,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneEntityDecorator>,
               InternalVTableHelperCtorCaller<UMovieSceneEntityDecorator>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneEntityDecorator.InnerSingleton;
}

// StaticRegisterNativesUMovieSceneEntityDecorator @ 14605d000

void __cdecl UMovieSceneEntityDecorator::StaticRegisterNativesUMovieSceneEntityDecorator(void)

{
  return;
}

