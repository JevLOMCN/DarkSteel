// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 14758c570

UClass * __cdecl UNodeMappingProviderInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UNodeMappingProviderInterface.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"NodeMappingProviderInterface",
               &Z_Registration_Info_UClass_UNodeMappingProviderInterface.InnerSingleton,
               StaticRegisterNativesUNodeMappingProviderInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNodeMappingProviderInterface>,
               InternalVTableHelperCtorCaller<UNodeMappingProviderInterface>,aFStackX_8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNodeMappingProviderInterface.InnerSingleton;
}

// UNodeMappingProviderInterface @ 1475a7bf0

UNodeMappingProviderInterface * __thiscall
UNodeMappingProviderInterface::UNodeMappingProviderInterface
          (UNodeMappingProviderInterface *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UNodeMappingProviderInterface__6B_;
  return this;
}

// UNodeMappingProviderInterface @ 1475a7c20

UNodeMappingProviderInterface * __thiscall
UNodeMappingProviderInterface::UNodeMappingProviderInterface
          (UNodeMappingProviderInterface *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UNodeMappingProviderInterface__6B_;
  return this;
}

// ~UNodeMappingProviderInterface @ 1475aabd0

void __thiscall
UNodeMappingProviderInterface::~UNodeMappingProviderInterface(UNodeMappingProviderInterface *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 1475dbd10

UClass * __cdecl UNodeMappingProviderInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNodeMappingProviderInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"NodeMappingProviderInterface",
               &Z_Registration_Info_UClass_UNodeMappingProviderInterface.InnerSingleton,
               StaticRegisterNativesUNodeMappingProviderInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNodeMappingProviderInterface>,
               InternalVTableHelperCtorCaller<UNodeMappingProviderInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNodeMappingProviderInterface.InnerSingleton;
}

// StaticRegisterNativesUNodeMappingProviderInterface @ 1475fedc0

void __cdecl UNodeMappingProviderInterface::StaticRegisterNativesUNodeMappingProviderInterface(void)

{
  return;
}

