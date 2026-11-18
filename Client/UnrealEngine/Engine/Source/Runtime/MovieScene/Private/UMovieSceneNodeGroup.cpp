// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 7

// StaticClass @ 1461683a0

UClass * __cdecl UMovieSceneNodeGroup::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneNodeGroup.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneNodeGroup",
               &Z_Registration_Info_UClass_UMovieSceneNodeGroup.InnerSingleton,
               StaticRegisterNativesUMovieSceneNodeGroup,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieSceneNodeGroup>,
               InternalVTableHelperCtorCaller<UMovieSceneNodeGroup>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneNodeGroup.InnerSingleton;
}

// UMovieSceneNodeGroup @ 146183340

UMovieSceneNodeGroup * __thiscall
UMovieSceneNodeGroup::UMovieSceneNodeGroup(UMovieSceneNodeGroup *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UMovieSceneNodeGroup__6B_;
  return this;
}

// UMovieSceneNodeGroup @ 146183370

UMovieSceneNodeGroup * __thiscall
UMovieSceneNodeGroup::UMovieSceneNodeGroup(UMovieSceneNodeGroup *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UMovieSceneNodeGroup__6B_;
  return this;
}

// ~UMovieSceneNodeGroup @ 146185de0

void __thiscall UMovieSceneNodeGroup::~UMovieSceneNodeGroup(UMovieSceneNodeGroup *this)

{
  *(undefined ***)this = &___7UMovieSceneNodeGroup__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 1461b2ec0

UClass * __cdecl UMovieSceneNodeGroup::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneNodeGroup.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneNodeGroup",
               &Z_Registration_Info_UClass_UMovieSceneNodeGroup.InnerSingleton,
               StaticRegisterNativesUMovieSceneNodeGroup,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieSceneNodeGroup>,
               InternalVTableHelperCtorCaller<UMovieSceneNodeGroup>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneNodeGroup.InnerSingleton;
}

// IsEditorOnly @ 1461bbb90

bool __thiscall UMovieSceneNodeGroup::IsEditorOnly(UMovieSceneNodeGroup *this)

{
  return true;
}

// StaticRegisterNativesUMovieSceneNodeGroup @ 1461d4950

void __cdecl UMovieSceneNodeGroup::StaticRegisterNativesUMovieSceneNodeGroup(void)

{
  return;
}

