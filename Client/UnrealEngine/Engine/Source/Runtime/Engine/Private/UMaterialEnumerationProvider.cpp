// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147eec0a0

UClass * __cdecl UMaterialEnumerationProvider::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialEnumerationProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialEnumerationProvider",
               &Z_Registration_Info_UClass_UMaterialEnumerationProvider.InnerSingleton,
               StaticRegisterNativesUMaterialEnumerationProvider,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMaterialEnumerationProvider>,
               InternalVTableHelperCtorCaller<UMaterialEnumerationProvider>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialEnumerationProvider.InnerSingleton;
}

// UMaterialEnumerationProvider @ 147ef1940

UMaterialEnumerationProvider * __thiscall
UMaterialEnumerationProvider::UMaterialEnumerationProvider
          (UMaterialEnumerationProvider *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UMaterialEnumerationProvider__6B_;
  return this;
}

// UMaterialEnumerationProvider @ 147ef1970

UMaterialEnumerationProvider * __thiscall
UMaterialEnumerationProvider::UMaterialEnumerationProvider
          (UMaterialEnumerationProvider *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UMaterialEnumerationProvider__6B_;
  return this;
}

// ~UMaterialEnumerationProvider @ 147ef2840

void __thiscall
UMaterialEnumerationProvider::~UMaterialEnumerationProvider(UMaterialEnumerationProvider *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 147efd860

UClass * __cdecl UMaterialEnumerationProvider::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialEnumerationProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialEnumerationProvider",
               &Z_Registration_Info_UClass_UMaterialEnumerationProvider.InnerSingleton,
               StaticRegisterNativesUMaterialEnumerationProvider,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMaterialEnumerationProvider>,
               InternalVTableHelperCtorCaller<UMaterialEnumerationProvider>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialEnumerationProvider.InnerSingleton;
}

// StaticRegisterNativesUMaterialEnumerationProvider @ 147f08550

void __cdecl UMaterialEnumerationProvider::StaticRegisterNativesUMaterialEnumerationProvider(void)

{
  return;
}

