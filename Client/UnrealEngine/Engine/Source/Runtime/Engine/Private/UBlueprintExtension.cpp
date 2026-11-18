// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472586a0

UClass * __cdecl UBlueprintExtension::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBlueprintExtension.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"BlueprintExtension",
               &Z_Registration_Info_UClass_UBlueprintExtension.InnerSingleton,
               StaticRegisterNativesUBlueprintExtension,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UBlueprintExtension>,
               InternalVTableHelperCtorCaller<UBlueprintExtension>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBlueprintExtension.InnerSingleton;
}

// UBlueprintExtension @ 14725d3f0

UBlueprintExtension * __thiscall
UBlueprintExtension::UBlueprintExtension(UBlueprintExtension *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UBlueprintExtension__6B_;
  return this;
}

// UBlueprintExtension @ 14725d420

UBlueprintExtension * __thiscall
UBlueprintExtension::UBlueprintExtension(UBlueprintExtension *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UBlueprintExtension__6B_;
  return this;
}

// ~UBlueprintExtension @ 14725df70

void __thiscall UBlueprintExtension::~UBlueprintExtension(UBlueprintExtension *this)

{
  *(undefined ***)this = &___7UBlueprintExtension__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 147260a70

UClass * __cdecl UBlueprintExtension::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBlueprintExtension.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"BlueprintExtension",
               &Z_Registration_Info_UClass_UBlueprintExtension.InnerSingleton,
               StaticRegisterNativesUBlueprintExtension,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UBlueprintExtension>,
               InternalVTableHelperCtorCaller<UBlueprintExtension>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBlueprintExtension.InnerSingleton;
}

// StaticRegisterNativesUBlueprintExtension @ 147260fb0

void __cdecl UBlueprintExtension::StaticRegisterNativesUBlueprintExtension(void)

{
  return;
}

