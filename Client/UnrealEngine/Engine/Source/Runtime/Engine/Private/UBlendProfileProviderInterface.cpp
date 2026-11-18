// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 14750e6d0

UClass * __cdecl UBlendProfileProviderInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBlendProfileProviderInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"BlendProfileProviderInterface",
               &Z_Registration_Info_UClass_UBlendProfileProviderInterface.InnerSingleton,
               StaticRegisterNativesUBlendProfileProviderInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UBlendProfileProviderInterface>,
               InternalVTableHelperCtorCaller<UBlendProfileProviderInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBlendProfileProviderInterface.InnerSingleton;
}

// UBlendProfileProviderInterface @ 147532520

UBlendProfileProviderInterface * __thiscall
UBlendProfileProviderInterface::UBlendProfileProviderInterface
          (UBlendProfileProviderInterface *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UBlendProfileProviderInterface__6B_;
  return this;
}

// UBlendProfileProviderInterface @ 147532550

UBlendProfileProviderInterface * __thiscall
UBlendProfileProviderInterface::UBlendProfileProviderInterface
          (UBlendProfileProviderInterface *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UBlendProfileProviderInterface__6B_;
  return this;
}

// ~UBlendProfileProviderInterface @ 147533c40

void __thiscall
UBlendProfileProviderInterface::~UBlendProfileProviderInterface
          (UBlendProfileProviderInterface *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14755ef90

UClass * __cdecl UBlendProfileProviderInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBlendProfileProviderInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"BlendProfileProviderInterface",
               &Z_Registration_Info_UClass_UBlendProfileProviderInterface.InnerSingleton,
               StaticRegisterNativesUBlendProfileProviderInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UBlendProfileProviderInterface>,
               InternalVTableHelperCtorCaller<UBlendProfileProviderInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBlendProfileProviderInterface.InnerSingleton;
}

// StaticRegisterNativesUBlendProfileProviderInterface @ 14757ad00

void __cdecl
UBlendProfileProviderInterface::StaticRegisterNativesUBlendProfileProviderInterface(void)

{
  return;
}

