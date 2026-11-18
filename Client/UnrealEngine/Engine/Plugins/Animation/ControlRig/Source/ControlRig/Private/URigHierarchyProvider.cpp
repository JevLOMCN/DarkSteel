// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 6

// StaticClass @ 14a2c5100

UClass * __cdecl URigHierarchyProvider::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URigHierarchyProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ControlRig",L"RigHierarchyProvider",
               &Z_Registration_Info_UClass_URigHierarchyProvider.InnerSingleton,
               StaticRegisterNativesURigHierarchyProvider,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<URigHierarchyProvider>,
               InternalVTableHelperCtorCaller<URigHierarchyProvider>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URigHierarchyProvider.InnerSingleton;
}

// URigHierarchyProvider @ 14a2dddb0

URigHierarchyProvider * __thiscall
URigHierarchyProvider::URigHierarchyProvider(URigHierarchyProvider *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7URigHierarchyProvider__6B_;
  return this;
}

// URigHierarchyProvider @ 14a2ddde0

URigHierarchyProvider * __thiscall
URigHierarchyProvider::URigHierarchyProvider
          (URigHierarchyProvider *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7URigHierarchyProvider__6B_;
  return this;
}

// ~URigHierarchyProvider @ 14a2df4f0

void __thiscall URigHierarchyProvider::~URigHierarchyProvider(URigHierarchyProvider *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14a314ad0

UClass * __cdecl URigHierarchyProvider::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URigHierarchyProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ControlRig",L"RigHierarchyProvider",
               &Z_Registration_Info_UClass_URigHierarchyProvider.InnerSingleton,
               StaticRegisterNativesURigHierarchyProvider,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<URigHierarchyProvider>,
               InternalVTableHelperCtorCaller<URigHierarchyProvider>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URigHierarchyProvider.InnerSingleton;
}

// StaticRegisterNativesURigHierarchyProvider @ 14a358f40

void __cdecl URigHierarchyProvider::StaticRegisterNativesURigHierarchyProvider(void)

{
  return;
}

