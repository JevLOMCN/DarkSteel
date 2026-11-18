// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneCapture
// Functions: 5

// StaticClass @ 146bd0b60

UClass * __cdecl UImageSequenceProtocol_BMP::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UImageSequenceProtocol_BMP.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneCapture",L"ImageSequenceProtocol_BMP",
               &Z_Registration_Info_UClass_UImageSequenceProtocol_BMP.InnerSingleton,
               StaticRegisterNativesUImageSequenceProtocol_BMP,0xd8,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"EditorPerProjectUserSettings",InternalConstructor<UImageSequenceProtocol_BMP>,
               InternalVTableHelperCtorCaller<UImageSequenceProtocol_BMP>,local_res8,
               UImageSequenceProtocol::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UImageSequenceProtocol_BMP.InnerSingleton;
}

// UImageSequenceProtocol_BMP @ 146bd8530

UImageSequenceProtocol_BMP * __thiscall
UImageSequenceProtocol_BMP::UImageSequenceProtocol_BMP
          (UImageSequenceProtocol_BMP *this,FVTableHelper *param_1)

{
  UImageSequenceProtocol::UImageSequenceProtocol((UImageSequenceProtocol *)this,param_1);
  *(undefined ***)this = &___7UImageSequenceProtocol_BMP__6B_;
  return this;
}

// ~UImageSequenceProtocol_BMP @ 146bd9560

void __thiscall
UImageSequenceProtocol_BMP::~UImageSequenceProtocol_BMP(UImageSequenceProtocol_BMP *this)

{
  *(undefined ***)this = &___7UImageSequenceProtocol_BMP__6B_;
  UImageSequenceProtocol::~UImageSequenceProtocol((UImageSequenceProtocol *)this);
  return;
}

// GetPrivateStaticClass @ 146be0660

UClass * __cdecl UImageSequenceProtocol_BMP::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UImageSequenceProtocol_BMP.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneCapture",L"ImageSequenceProtocol_BMP",
               &Z_Registration_Info_UClass_UImageSequenceProtocol_BMP.InnerSingleton,
               StaticRegisterNativesUImageSequenceProtocol_BMP,0xd8,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"EditorPerProjectUserSettings",InternalConstructor<UImageSequenceProtocol_BMP>,
               InternalVTableHelperCtorCaller<UImageSequenceProtocol_BMP>,local_res8,
               UImageSequenceProtocol::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UImageSequenceProtocol_BMP.InnerSingleton;
}

// StaticRegisterNativesUImageSequenceProtocol_BMP @ 146be8cf0

void __cdecl UImageSequenceProtocol_BMP::StaticRegisterNativesUImageSequenceProtocol_BMP(void)

{
  return;
}

