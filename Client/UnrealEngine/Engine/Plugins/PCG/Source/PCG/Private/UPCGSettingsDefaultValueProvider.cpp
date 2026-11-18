// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 6

// StaticClass @ 149721980

UClass * __cdecl UPCGSettingsDefaultValueProvider::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGSettingsDefaultValueProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGSettingsDefaultValueProvider",
               &Z_Registration_Info_UClass_UPCGSettingsDefaultValueProvider.InnerSingleton,
               StaticRegisterNativesUPCGSettingsDefaultValueProvider,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGSettingsDefaultValueProvider>,
               InternalVTableHelperCtorCaller<UPCGSettingsDefaultValueProvider>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGSettingsDefaultValueProvider.InnerSingleton;
}

// UPCGSettingsDefaultValueProvider @ 149725a10

UPCGSettingsDefaultValueProvider * __thiscall
UPCGSettingsDefaultValueProvider::UPCGSettingsDefaultValueProvider
          (UPCGSettingsDefaultValueProvider *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UPCGSettingsDefaultValueProvider__6B_;
  return this;
}

// UPCGSettingsDefaultValueProvider @ 149725a40

UPCGSettingsDefaultValueProvider * __thiscall
UPCGSettingsDefaultValueProvider::UPCGSettingsDefaultValueProvider
          (UPCGSettingsDefaultValueProvider *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UPCGSettingsDefaultValueProvider__6B_;
  return this;
}

// ~UPCGSettingsDefaultValueProvider @ 149725fc0

void __thiscall
UPCGSettingsDefaultValueProvider::~UPCGSettingsDefaultValueProvider
          (UPCGSettingsDefaultValueProvider *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 149727670

UClass * __cdecl UPCGSettingsDefaultValueProvider::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGSettingsDefaultValueProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGSettingsDefaultValueProvider",
               &Z_Registration_Info_UClass_UPCGSettingsDefaultValueProvider.InnerSingleton,
               StaticRegisterNativesUPCGSettingsDefaultValueProvider,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGSettingsDefaultValueProvider>,
               InternalVTableHelperCtorCaller<UPCGSettingsDefaultValueProvider>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGSettingsDefaultValueProvider.InnerSingleton;
}

// StaticRegisterNativesUPCGSettingsDefaultValueProvider @ 149728040

void __cdecl
UPCGSettingsDefaultValueProvider::StaticRegisterNativesUPCGSettingsDefaultValueProvider(void)

{
  return;
}

