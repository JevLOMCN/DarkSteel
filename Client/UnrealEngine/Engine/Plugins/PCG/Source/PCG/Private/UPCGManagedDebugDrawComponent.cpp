// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 6

// StaticClass @ 149ede740

UClass * __cdecl UPCGManagedDebugDrawComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGManagedDebugDrawComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGManagedDebugDrawComponent",
               &Z_Registration_Info_UClass_UPCGManagedDebugDrawComponent.InnerSingleton,
               StaticRegisterNativesUPCGManagedDebugDrawComponent,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGManagedDebugDrawComponent>,
               InternalVTableHelperCtorCaller<UPCGManagedDebugDrawComponent>,local_res8,
               UPCGManagedComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGManagedDebugDrawComponent.InnerSingleton;
}

// UPCGManagedDebugDrawComponent @ 149eeef40

UPCGManagedDebugDrawComponent * __thiscall
UPCGManagedDebugDrawComponent::UPCGManagedDebugDrawComponent
          (UPCGManagedDebugDrawComponent *this,FVTableHelper *param_1)

{
  UPCGManagedComponent::UPCGManagedComponent((UPCGManagedComponent *)this,param_1);
  *(undefined ***)this = &___7UPCGManagedDebugDrawComponent__6B_;
  return this;
}

// UPCGManagedDebugDrawComponent @ 149eeef70

UPCGManagedDebugDrawComponent * __thiscall
UPCGManagedDebugDrawComponent::UPCGManagedDebugDrawComponent
          (UPCGManagedDebugDrawComponent *this,FObjectInitializer *param_1)

{
  UPCGManagedComponent::UPCGManagedComponent((UPCGManagedComponent *)this,param_1);
  *(undefined ***)this = &___7UPCGManagedDebugDrawComponent__6B_;
  return this;
}

// ~UPCGManagedDebugDrawComponent @ 149ef0030

void __thiscall
UPCGManagedDebugDrawComponent::~UPCGManagedDebugDrawComponent(UPCGManagedDebugDrawComponent *this)

{
  *(undefined ***)this = &___7UPCGManagedDebugDrawComponent__6B_;
  UPCGManagedComponent::~UPCGManagedComponent((UPCGManagedComponent *)this);
  return;
}

// GetPrivateStaticClass @ 149f04840

UClass * __cdecl UPCGManagedDebugDrawComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGManagedDebugDrawComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGManagedDebugDrawComponent",
               &Z_Registration_Info_UClass_UPCGManagedDebugDrawComponent.InnerSingleton,
               StaticRegisterNativesUPCGManagedDebugDrawComponent,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGManagedDebugDrawComponent>,
               InternalVTableHelperCtorCaller<UPCGManagedDebugDrawComponent>,local_res8,
               UPCGManagedComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGManagedDebugDrawComponent.InnerSingleton;
}

// StaticRegisterNativesUPCGManagedDebugDrawComponent @ 149f140f0

void __cdecl UPCGManagedDebugDrawComponent::StaticRegisterNativesUPCGManagedDebugDrawComponent(void)

{
  return;
}

