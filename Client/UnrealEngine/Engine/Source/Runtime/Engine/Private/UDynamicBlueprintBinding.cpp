// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// UDynamicBlueprintBinding @ 147b3ada0

UDynamicBlueprintBinding * __thiscall
UDynamicBlueprintBinding::UDynamicBlueprintBinding
          (UDynamicBlueprintBinding *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UDynamicBlueprintBinding__6B_;
  return this;
}

// UDynamicBlueprintBinding @ 147b3add0

UDynamicBlueprintBinding * __thiscall
UDynamicBlueprintBinding::UDynamicBlueprintBinding
          (UDynamicBlueprintBinding *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UDynamicBlueprintBinding__6B_;
  return this;
}

// ~UDynamicBlueprintBinding @ 147b3d5e0

void __thiscall UDynamicBlueprintBinding::~UDynamicBlueprintBinding(UDynamicBlueprintBinding *this)

{
  *(undefined ***)this = &___7UDynamicBlueprintBinding__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// BindDynamicDelegates @ 147b48760

void __thiscall
UDynamicBlueprintBinding::BindDynamicDelegates(UDynamicBlueprintBinding *this,UObject *param_1)

{
  return;
}

// GetPrivateStaticClass @ 147b6bc30

UClass * __cdecl UDynamicBlueprintBinding::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDynamicBlueprintBinding.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DynamicBlueprintBinding",
               &Z_Registration_Info_UClass_UDynamicBlueprintBinding.InnerSingleton,
               StaticRegisterNativesUDynamicBlueprintBinding,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UDynamicBlueprintBinding>,
               InternalVTableHelperCtorCaller<UDynamicBlueprintBinding>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDynamicBlueprintBinding.InnerSingleton;
}

// StaticRegisterNativesUDynamicBlueprintBinding @ 147b8ebd0

void __cdecl UDynamicBlueprintBinding::StaticRegisterNativesUDynamicBlueprintBinding(void)

{
  return;
}

