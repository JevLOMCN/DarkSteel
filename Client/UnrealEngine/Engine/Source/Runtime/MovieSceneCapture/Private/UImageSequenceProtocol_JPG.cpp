// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneCapture
// Functions: 5

// StaticClass @ 146bd0d90

UClass * __cdecl UImageSequenceProtocol_JPG::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UImageSequenceProtocol_JPG.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneCapture",L"ImageSequenceProtocol_JPG",
               &Z_Registration_Info_UClass_UImageSequenceProtocol_JPG.InnerSingleton,
               StaticRegisterNativesUImageSequenceProtocol_JPG,0xe0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"EditorPerProjectUserSettings",
               InternalConstructor<UImageSequenceProtocol_JPG>,
               InternalVTableHelperCtorCaller<UImageSequenceProtocol_JPG>,local_res8,
               UCompressedImageSequenceProtocol::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UImageSequenceProtocol_JPG.InnerSingleton;
}

// UImageSequenceProtocol_JPG @ 146bd85d0

UImageSequenceProtocol_JPG * __thiscall
UImageSequenceProtocol_JPG::UImageSequenceProtocol_JPG
          (UImageSequenceProtocol_JPG *this,FVTableHelper *param_1)

{
  UImageSequenceProtocol::UImageSequenceProtocol((UImageSequenceProtocol *)this,param_1);
  *(undefined ***)this = &___7UImageSequenceProtocol_JPG__6B_;
  return this;
}

// ~UImageSequenceProtocol_JPG @ 146bd95a0

void __thiscall
UImageSequenceProtocol_JPG::~UImageSequenceProtocol_JPG(UImageSequenceProtocol_JPG *this)

{
  *(undefined ***)this = &___7UCompressedImageSequenceProtocol__6B_;
  UImageSequenceProtocol::~UImageSequenceProtocol((UImageSequenceProtocol *)this);
  return;
}

// GetPrivateStaticClass @ 146be07e0

UClass * __cdecl UImageSequenceProtocol_JPG::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UImageSequenceProtocol_JPG.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneCapture",L"ImageSequenceProtocol_JPG",
               &Z_Registration_Info_UClass_UImageSequenceProtocol_JPG.InnerSingleton,
               StaticRegisterNativesUImageSequenceProtocol_JPG,0xe0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"EditorPerProjectUserSettings",
               InternalConstructor<UImageSequenceProtocol_JPG>,
               InternalVTableHelperCtorCaller<UImageSequenceProtocol_JPG>,local_res8,
               UCompressedImageSequenceProtocol::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UImageSequenceProtocol_JPG.InnerSingleton;
}

// StaticRegisterNativesUImageSequenceProtocol_JPG @ 146be8d10

void __cdecl UImageSequenceProtocol_JPG::StaticRegisterNativesUImageSequenceProtocol_JPG(void)

{
  return;
}

