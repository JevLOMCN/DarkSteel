// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 6

// StaticClass @ 146e78780

UClass * __cdecl UAIResource_Logic::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAIResource_Logic.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"AIResource_Logic",
               &Z_Registration_Info_UClass_UAIResource_Logic.InnerSingleton,
               StaticRegisterNativesUAIResource_Logic,0x38,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Game",InternalConstructor<UAIResource_Logic>,
               InternalVTableHelperCtorCaller<UAIResource_Logic>,local_res8,
               UGameplayTaskResource::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAIResource_Logic.InnerSingleton;
}

// UAIResource_Logic @ 146e80860

UAIResource_Logic * __thiscall
UAIResource_Logic::UAIResource_Logic(UAIResource_Logic *this,FVTableHelper *param_1)

{
  UGameplayTaskResource::UGameplayTaskResource((UGameplayTaskResource *)this,param_1);
  *(undefined ***)this = &___7UAIResource_Logic__6B_;
  return this;
}

// UAIResource_Logic @ 146e80890

UAIResource_Logic * __thiscall
UAIResource_Logic::UAIResource_Logic(UAIResource_Logic *this,FObjectInitializer *param_1)

{
  UGameplayTaskResource::UGameplayTaskResource((UGameplayTaskResource *)this,param_1);
  *(undefined ***)this = &___7UAIResource_Logic__6B_;
  return this;
}

// ~UAIResource_Logic @ 146e81b30

void __thiscall UAIResource_Logic::~UAIResource_Logic(UAIResource_Logic *this)

{
  *(undefined ***)this = &___7UAIResource_Logic__6B_;
  UGameplayTaskResource::~UGameplayTaskResource((UGameplayTaskResource *)this);
  return;
}

// GetPrivateStaticClass @ 146e8e970

UClass * __cdecl UAIResource_Logic::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAIResource_Logic.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"AIResource_Logic",
               &Z_Registration_Info_UClass_UAIResource_Logic.InnerSingleton,
               StaticRegisterNativesUAIResource_Logic,0x38,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Game",InternalConstructor<UAIResource_Logic>,
               InternalVTableHelperCtorCaller<UAIResource_Logic>,local_res8,
               UGameplayTaskResource::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAIResource_Logic.InnerSingleton;
}

// StaticRegisterNativesUAIResource_Logic @ 146ea00d0

void __cdecl UAIResource_Logic::StaticRegisterNativesUAIResource_Logic(void)

{
  return;
}

