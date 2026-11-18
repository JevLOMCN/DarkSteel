// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 6

// StaticClass @ 146269880

UClass * __cdecl UTestMovieSceneObject::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTestMovieSceneObject.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"TestMovieSceneObject",
               &Z_Registration_Info_UClass_UTestMovieSceneObject.InnerSingleton,
               StaticRegisterNativesUTestMovieSceneObject,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UTestMovieSceneObject>,
               InternalVTableHelperCtorCaller<UTestMovieSceneObject>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTestMovieSceneObject.InnerSingleton;
}

// UTestMovieSceneObject @ 14629b310

UTestMovieSceneObject * __thiscall
UTestMovieSceneObject::UTestMovieSceneObject(UTestMovieSceneObject *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UTestMovieSceneObject__6B_;
  return this;
}

// UTestMovieSceneObject @ 14629b340

UTestMovieSceneObject * __thiscall
UTestMovieSceneObject::UTestMovieSceneObject
          (UTestMovieSceneObject *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UTestMovieSceneObject__6B_;
  return this;
}

// ~UTestMovieSceneObject @ 14629c070

void __thiscall UTestMovieSceneObject::~UTestMovieSceneObject(UTestMovieSceneObject *this)

{
  *(undefined ***)this = &___7UTestMovieSceneObject__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 1462affa0

UClass * __cdecl UTestMovieSceneObject::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTestMovieSceneObject.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"TestMovieSceneObject",
               &Z_Registration_Info_UClass_UTestMovieSceneObject.InnerSingleton,
               StaticRegisterNativesUTestMovieSceneObject,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UTestMovieSceneObject>,
               InternalVTableHelperCtorCaller<UTestMovieSceneObject>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTestMovieSceneObject.InnerSingleton;
}

// StaticRegisterNativesUTestMovieSceneObject @ 1462bdec0

void __cdecl UTestMovieSceneObject::StaticRegisterNativesUTestMovieSceneObject(void)

{
  return;
}

