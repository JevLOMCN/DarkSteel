// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 7

// StaticClass @ 146168660

UClass * __cdecl UMovieSceneNodeGroupCollection::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneNodeGroupCollection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneNodeGroupCollection",
               &Z_Registration_Info_UClass_UMovieSceneNodeGroupCollection.InnerSingleton,
               StaticRegisterNativesUMovieSceneNodeGroupCollection,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneNodeGroupCollection>,
               InternalVTableHelperCtorCaller<UMovieSceneNodeGroupCollection>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneNodeGroupCollection.InnerSingleton;
}

// UMovieSceneNodeGroupCollection @ 1461833a0

UMovieSceneNodeGroupCollection * __thiscall
UMovieSceneNodeGroupCollection::UMovieSceneNodeGroupCollection
          (UMovieSceneNodeGroupCollection *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UMovieSceneNodeGroupCollection__6B_;
  return this;
}

// UMovieSceneNodeGroupCollection @ 1461833d0

UMovieSceneNodeGroupCollection * __thiscall
UMovieSceneNodeGroupCollection::UMovieSceneNodeGroupCollection
          (UMovieSceneNodeGroupCollection *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UMovieSceneNodeGroupCollection__6B_;
  return this;
}

// ~UMovieSceneNodeGroupCollection @ 146185e00

void __thiscall
UMovieSceneNodeGroupCollection::~UMovieSceneNodeGroupCollection
          (UMovieSceneNodeGroupCollection *this)

{
  *(undefined ***)this = &___7UMovieSceneNodeGroupCollection__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 1461b2f70

UClass * __cdecl UMovieSceneNodeGroupCollection::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneNodeGroupCollection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneNodeGroupCollection",
               &Z_Registration_Info_UClass_UMovieSceneNodeGroupCollection.InnerSingleton,
               StaticRegisterNativesUMovieSceneNodeGroupCollection,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneNodeGroupCollection>,
               InternalVTableHelperCtorCaller<UMovieSceneNodeGroupCollection>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneNodeGroupCollection.InnerSingleton;
}

// IsEditorOnly @ 1461bbba0

bool __thiscall UMovieSceneNodeGroupCollection::IsEditorOnly(UMovieSceneNodeGroupCollection *this)

{
  return true;
}

// StaticRegisterNativesUMovieSceneNodeGroupCollection @ 1461d4960

void __cdecl
UMovieSceneNodeGroupCollection::StaticRegisterNativesUMovieSceneNodeGroupCollection(void)

{
  return;
}

