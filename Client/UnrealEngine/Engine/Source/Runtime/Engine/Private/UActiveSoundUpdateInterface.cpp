// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147259d20

UClass * __cdecl UActiveSoundUpdateInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UActiveSoundUpdateInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ActiveSoundUpdateInterface",
               &Z_Registration_Info_UClass_UActiveSoundUpdateInterface.InnerSingleton,
               StaticRegisterNativesUActiveSoundUpdateInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UActiveSoundUpdateInterface>,
               InternalVTableHelperCtorCaller<UActiveSoundUpdateInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UActiveSoundUpdateInterface.InnerSingleton;
}

// UActiveSoundUpdateInterface @ 14725c890

UActiveSoundUpdateInterface * __thiscall
UActiveSoundUpdateInterface::UActiveSoundUpdateInterface
          (UActiveSoundUpdateInterface *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UActiveSoundUpdateInterface__6B_;
  return this;
}

// UActiveSoundUpdateInterface @ 14725c8c0

UActiveSoundUpdateInterface * __thiscall
UActiveSoundUpdateInterface::UActiveSoundUpdateInterface
          (UActiveSoundUpdateInterface *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UActiveSoundUpdateInterface__6B_;
  return this;
}

// ~UActiveSoundUpdateInterface @ 14725dab0

void __thiscall
UActiveSoundUpdateInterface::~UActiveSoundUpdateInterface(UActiveSoundUpdateInterface *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14725fbc0

UClass * __cdecl UActiveSoundUpdateInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UActiveSoundUpdateInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ActiveSoundUpdateInterface",
               &Z_Registration_Info_UClass_UActiveSoundUpdateInterface.InnerSingleton,
               StaticRegisterNativesUActiveSoundUpdateInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UActiveSoundUpdateInterface>,
               InternalVTableHelperCtorCaller<UActiveSoundUpdateInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UActiveSoundUpdateInterface.InnerSingleton;
}

// StaticRegisterNativesUActiveSoundUpdateInterface @ 147260de0

void __cdecl UActiveSoundUpdateInterface::StaticRegisterNativesUActiveSoundUpdateInterface(void)

{
  return;
}

