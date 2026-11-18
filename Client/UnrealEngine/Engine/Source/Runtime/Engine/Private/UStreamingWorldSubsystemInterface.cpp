// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 14732cce0

UClass * __cdecl UStreamingWorldSubsystemInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UStreamingWorldSubsystemInterface.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"StreamingWorldSubsystemInterface",
               &Z_Registration_Info_UClass_UStreamingWorldSubsystemInterface.InnerSingleton,
               StaticRegisterNativesUStreamingWorldSubsystemInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UStreamingWorldSubsystemInterface>,
               InternalVTableHelperCtorCaller<UStreamingWorldSubsystemInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UStreamingWorldSubsystemInterface.InnerSingleton;
}

// UStreamingWorldSubsystemInterface @ 1473311b0

UStreamingWorldSubsystemInterface * __thiscall
UStreamingWorldSubsystemInterface::UStreamingWorldSubsystemInterface
          (UStreamingWorldSubsystemInterface *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UStreamingWorldSubsystemInterface__6B_;
  return this;
}

// UStreamingWorldSubsystemInterface @ 1473311e0

UStreamingWorldSubsystemInterface * __thiscall
UStreamingWorldSubsystemInterface::UStreamingWorldSubsystemInterface
          (UStreamingWorldSubsystemInterface *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UStreamingWorldSubsystemInterface__6B_;
  return this;
}

// ~UStreamingWorldSubsystemInterface @ 147331540

void __thiscall
UStreamingWorldSubsystemInterface::~UStreamingWorldSubsystemInterface
          (UStreamingWorldSubsystemInterface *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 147332e40

UClass * __cdecl UStreamingWorldSubsystemInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UStreamingWorldSubsystemInterface.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"StreamingWorldSubsystemInterface",
               &Z_Registration_Info_UClass_UStreamingWorldSubsystemInterface.InnerSingleton,
               StaticRegisterNativesUStreamingWorldSubsystemInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UStreamingWorldSubsystemInterface>,
               InternalVTableHelperCtorCaller<UStreamingWorldSubsystemInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UStreamingWorldSubsystemInterface.InnerSingleton;
}

// StaticRegisterNativesUStreamingWorldSubsystemInterface @ 147333480

void __cdecl
UStreamingWorldSubsystemInterface::StaticRegisterNativesUStreamingWorldSubsystemInterface(void)

{
  return;
}

