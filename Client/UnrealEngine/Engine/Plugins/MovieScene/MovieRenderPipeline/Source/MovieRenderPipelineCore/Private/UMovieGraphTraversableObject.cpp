// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 6

// StaticClass @ 14dc6a500

UClass * __cdecl UMovieGraphTraversableObject::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphTraversableObject.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphTraversableObject",
               &Z_Registration_Info_UClass_UMovieGraphTraversableObject.InnerSingleton,
               StaticRegisterNativesUMovieGraphTraversableObject,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieGraphTraversableObject>,
               InternalVTableHelperCtorCaller<UMovieGraphTraversableObject>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphTraversableObject.InnerSingleton;
}

// UMovieGraphTraversableObject @ 14dc73860

UMovieGraphTraversableObject * __thiscall
UMovieGraphTraversableObject::UMovieGraphTraversableObject
          (UMovieGraphTraversableObject *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UMovieGraphTraversableObject__6B_;
  return this;
}

// UMovieGraphTraversableObject @ 14dc73890

UMovieGraphTraversableObject * __thiscall
UMovieGraphTraversableObject::UMovieGraphTraversableObject
          (UMovieGraphTraversableObject *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UMovieGraphTraversableObject__6B_;
  return this;
}

// ~UMovieGraphTraversableObject @ 14dc74900

void __thiscall
UMovieGraphTraversableObject::~UMovieGraphTraversableObject(UMovieGraphTraversableObject *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14dc82420

UClass * __cdecl UMovieGraphTraversableObject::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphTraversableObject.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphTraversableObject",
               &Z_Registration_Info_UClass_UMovieGraphTraversableObject.InnerSingleton,
               StaticRegisterNativesUMovieGraphTraversableObject,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieGraphTraversableObject>,
               InternalVTableHelperCtorCaller<UMovieGraphTraversableObject>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphTraversableObject.InnerSingleton;
}

// StaticRegisterNativesUMovieGraphTraversableObject @ 14dc89ca0

void __cdecl UMovieGraphTraversableObject::StaticRegisterNativesUMovieGraphTraversableObject(void)

{
  return;
}

