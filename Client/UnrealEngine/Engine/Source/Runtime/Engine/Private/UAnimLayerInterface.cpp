// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147255630

UClass * __cdecl UAnimLayerInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimLayerInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimLayerInterface",
               &Z_Registration_Info_UClass_UAnimLayerInterface.InnerSingleton,
               StaticRegisterNativesUAnimLayerInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UAnimLayerInterface>,
               InternalVTableHelperCtorCaller<UAnimLayerInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimLayerInterface.InnerSingleton;
}

// UAnimLayerInterface @ 14725ccb0

UAnimLayerInterface * __thiscall
UAnimLayerInterface::UAnimLayerInterface(UAnimLayerInterface *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UAnimLayerInterface__6B_;
  return this;
}

// UAnimLayerInterface @ 14725cce0

UAnimLayerInterface * __thiscall
UAnimLayerInterface::UAnimLayerInterface(UAnimLayerInterface *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UAnimLayerInterface__6B_;
  return this;
}

// ~UAnimLayerInterface @ 14725db90

void __thiscall UAnimLayerInterface::~UAnimLayerInterface(UAnimLayerInterface *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14725ff70

UClass * __cdecl UAnimLayerInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimLayerInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimLayerInterface",
               &Z_Registration_Info_UClass_UAnimLayerInterface.InnerSingleton,
               StaticRegisterNativesUAnimLayerInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UAnimLayerInterface>,
               InternalVTableHelperCtorCaller<UAnimLayerInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimLayerInterface.InnerSingleton;
}

// StaticRegisterNativesUAnimLayerInterface @ 147260e30

void __cdecl UAnimLayerInterface::StaticRegisterNativesUAnimLayerInterface(void)

{
  return;
}

