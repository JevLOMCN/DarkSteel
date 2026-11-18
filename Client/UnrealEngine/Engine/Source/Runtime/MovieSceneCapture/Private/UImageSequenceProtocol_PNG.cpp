// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneCapture
// Functions: 5

// StaticClass @ 146bd0cd0

UClass * __cdecl UImageSequenceProtocol_PNG::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UImageSequenceProtocol_PNG.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneCapture",L"ImageSequenceProtocol_PNG",
               &Z_Registration_Info_UClass_UImageSequenceProtocol_PNG.InnerSingleton,
               StaticRegisterNativesUImageSequenceProtocol_PNG,0xe0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"EditorPerProjectUserSettings",
               InternalConstructor<UImageSequenceProtocol_PNG>,
               InternalVTableHelperCtorCaller<UImageSequenceProtocol_PNG>,local_res8,
               UCompressedImageSequenceProtocol::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UImageSequenceProtocol_PNG.InnerSingleton;
}

// UImageSequenceProtocol_PNG @ 146bd8600

UImageSequenceProtocol_PNG * __thiscall
UImageSequenceProtocol_PNG::UImageSequenceProtocol_PNG
          (UImageSequenceProtocol_PNG *this,FVTableHelper *param_1)

{
  UImageSequenceProtocol::UImageSequenceProtocol((UImageSequenceProtocol *)this,param_1);
  *(undefined ***)this = &___7UImageSequenceProtocol_PNG__6B_;
  return this;
}

// ~UImageSequenceProtocol_PNG @ 146bd95c0

void __thiscall
UImageSequenceProtocol_PNG::~UImageSequenceProtocol_PNG(UImageSequenceProtocol_PNG *this)

{
  *(undefined ***)this = &___7UCompressedImageSequenceProtocol__6B_;
  UImageSequenceProtocol::~UImageSequenceProtocol((UImageSequenceProtocol *)this);
  return;
}

// GetPrivateStaticClass @ 146be08a0

UClass * __cdecl UImageSequenceProtocol_PNG::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UImageSequenceProtocol_PNG.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneCapture",L"ImageSequenceProtocol_PNG",
               &Z_Registration_Info_UClass_UImageSequenceProtocol_PNG.InnerSingleton,
               StaticRegisterNativesUImageSequenceProtocol_PNG,0xe0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"EditorPerProjectUserSettings",
               InternalConstructor<UImageSequenceProtocol_PNG>,
               InternalVTableHelperCtorCaller<UImageSequenceProtocol_PNG>,local_res8,
               UCompressedImageSequenceProtocol::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UImageSequenceProtocol_PNG.InnerSingleton;
}

// StaticRegisterNativesUImageSequenceProtocol_PNG @ 146be8d20

void __cdecl UImageSequenceProtocol_PNG::StaticRegisterNativesUImageSequenceProtocol_PNG(void)

{
  return;
}

