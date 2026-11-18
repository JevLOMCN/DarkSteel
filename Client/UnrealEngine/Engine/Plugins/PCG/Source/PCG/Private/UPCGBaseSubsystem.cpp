// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 6

// StaticClass @ 149f1b040

UClass * __cdecl UPCGBaseSubsystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UPCGBaseSubsystem.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGBaseSubsystem",
               &Z_Registration_Info_UClass_UPCGBaseSubsystem.InnerSingleton,
               StaticRegisterNativesUPCGBaseSubsystem,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGBaseSubsystem>,
               InternalVTableHelperCtorCaller<UPCGBaseSubsystem>,aFStackX_8,UInterface::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGBaseSubsystem.InnerSingleton;
}

// UPCGBaseSubsystem @ 149f32120

UPCGBaseSubsystem * __thiscall
UPCGBaseSubsystem::UPCGBaseSubsystem(UPCGBaseSubsystem *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UPCGBaseSubsystem__6B_;
  return this;
}

// UPCGBaseSubsystem @ 149f32150

UPCGBaseSubsystem * __thiscall
UPCGBaseSubsystem::UPCGBaseSubsystem(UPCGBaseSubsystem *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UPCGBaseSubsystem__6B_;
  return this;
}

// ~UPCGBaseSubsystem @ 149f34660

void __thiscall UPCGBaseSubsystem::~UPCGBaseSubsystem(UPCGBaseSubsystem *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 149f4ce70

UClass * __cdecl UPCGBaseSubsystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGBaseSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGBaseSubsystem",
               &Z_Registration_Info_UClass_UPCGBaseSubsystem.InnerSingleton,
               StaticRegisterNativesUPCGBaseSubsystem,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGBaseSubsystem>,
               InternalVTableHelperCtorCaller<UPCGBaseSubsystem>,local_res8,UInterface::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGBaseSubsystem.InnerSingleton;
}

// StaticRegisterNativesUPCGBaseSubsystem @ 149f638e0

void __cdecl UPCGBaseSubsystem::StaticRegisterNativesUPCGBaseSubsystem(void)

{
  return;
}

