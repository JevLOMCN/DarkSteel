// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147aa9a80

UClass * __cdecl UDeformableInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDeformableInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DeformableInterface",
               &Z_Registration_Info_UClass_UDeformableInterface.InnerSingleton,
               StaticRegisterNativesUDeformableInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UDeformableInterface>,
               InternalVTableHelperCtorCaller<UDeformableInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDeformableInterface.InnerSingleton;
}

// UDeformableInterface @ 147abd330

UDeformableInterface * __thiscall
UDeformableInterface::UDeformableInterface(UDeformableInterface *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UDeformableInterface__6B_;
  return this;
}

// UDeformableInterface @ 147abd360

UDeformableInterface * __thiscall
UDeformableInterface::UDeformableInterface(UDeformableInterface *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UDeformableInterface__6B_;
  return this;
}

// ~UDeformableInterface @ 147abf740

void __thiscall UDeformableInterface::~UDeformableInterface(UDeformableInterface *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 147aeb660

UClass * __cdecl UDeformableInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDeformableInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DeformableInterface",
               &Z_Registration_Info_UClass_UDeformableInterface.InnerSingleton,
               StaticRegisterNativesUDeformableInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UDeformableInterface>,
               InternalVTableHelperCtorCaller<UDeformableInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDeformableInterface.InnerSingleton;
}

// StaticRegisterNativesUDeformableInterface @ 147b172c0

void __cdecl UDeformableInterface::StaticRegisterNativesUDeformableInterface(void)

{
  return;
}

