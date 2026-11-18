// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 6

// StaticClass @ 1497207b0

UClass * __cdecl UPCGNodeSourceTextProvider::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGNodeSourceTextProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGNodeSourceTextProvider",
               &Z_Registration_Info_UClass_UPCGNodeSourceTextProvider.InnerSingleton,
               StaticRegisterNativesUPCGNodeSourceTextProvider,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGNodeSourceTextProvider>,
               InternalVTableHelperCtorCaller<UPCGNodeSourceTextProvider>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGNodeSourceTextProvider.InnerSingleton;
}

// UPCGNodeSourceTextProvider @ 149725930

UPCGNodeSourceTextProvider * __thiscall
UPCGNodeSourceTextProvider::UPCGNodeSourceTextProvider
          (UPCGNodeSourceTextProvider *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UPCGNodeSourceTextProvider__6B_;
  return this;
}

// UPCGNodeSourceTextProvider @ 149725960

UPCGNodeSourceTextProvider * __thiscall
UPCGNodeSourceTextProvider::UPCGNodeSourceTextProvider
          (UPCGNodeSourceTextProvider *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UPCGNodeSourceTextProvider__6B_;
  return this;
}

// ~UPCGNodeSourceTextProvider @ 149725f70

void __thiscall
UPCGNodeSourceTextProvider::~UPCGNodeSourceTextProvider(UPCGNodeSourceTextProvider *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 149727500

UClass * __cdecl UPCGNodeSourceTextProvider::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGNodeSourceTextProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGNodeSourceTextProvider",
               &Z_Registration_Info_UClass_UPCGNodeSourceTextProvider.InnerSingleton,
               StaticRegisterNativesUPCGNodeSourceTextProvider,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGNodeSourceTextProvider>,
               InternalVTableHelperCtorCaller<UPCGNodeSourceTextProvider>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGNodeSourceTextProvider.InnerSingleton;
}

// StaticRegisterNativesUPCGNodeSourceTextProvider @ 149728020

void __cdecl UPCGNodeSourceTextProvider::StaticRegisterNativesUPCGNodeSourceTextProvider(void)

{
  return;
}

