// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 6

// StaticClass @ 146e7a1f0

UClass * __cdecl UAIResourceInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAIResourceInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"AIResourceInterface",
               &Z_Registration_Info_UClass_UAIResourceInterface.InnerSingleton,
               StaticRegisterNativesUAIResourceInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UAIResourceInterface>,
               InternalVTableHelperCtorCaller<UAIResourceInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAIResourceInterface.InnerSingleton;
}

// UAIResourceInterface @ 146e80800

UAIResourceInterface * __thiscall
UAIResourceInterface::UAIResourceInterface(UAIResourceInterface *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UAIResourceInterface__6B_;
  return this;
}

// UAIResourceInterface @ 146e80830

UAIResourceInterface * __thiscall
UAIResourceInterface::UAIResourceInterface(UAIResourceInterface *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UAIResourceInterface__6B_;
  return this;
}

// ~UAIResourceInterface @ 146e81b20

void __thiscall UAIResourceInterface::~UAIResourceInterface(UAIResourceInterface *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 146e8e8b0

UClass * __cdecl UAIResourceInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAIResourceInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"AIResourceInterface",
               &Z_Registration_Info_UClass_UAIResourceInterface.InnerSingleton,
               StaticRegisterNativesUAIResourceInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UAIResourceInterface>,
               InternalVTableHelperCtorCaller<UAIResourceInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAIResourceInterface.InnerSingleton;
}

// StaticRegisterNativesUAIResourceInterface @ 146ea00c0

void __cdecl UAIResourceInterface::StaticRegisterNativesUAIResourceInterface(void)

{
  return;
}

