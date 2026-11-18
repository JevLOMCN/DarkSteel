// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WNAbilityRuntime
// Functions: 6

// StaticClass @ 148db3a40

UClass * __cdecl UWN_AbilityContext::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_AbilityContext.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WNAbilityRuntime",L"WN_AbilityContext",
               &Z_Registration_Info_UClass_UWN_AbilityContext.InnerSingleton,
               StaticRegisterNativesUWN_AbilityContext,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UWN_AbilityContext>,
               InternalVTableHelperCtorCaller<UWN_AbilityContext>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_AbilityContext.InnerSingleton;
}

// UWN_AbilityContext @ 148db6100

UWN_AbilityContext * __thiscall
UWN_AbilityContext::UWN_AbilityContext(UWN_AbilityContext *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UWN_AbilityContext__6B_;
  return this;
}

// UWN_AbilityContext @ 148db6130

UWN_AbilityContext * __thiscall
UWN_AbilityContext::UWN_AbilityContext(UWN_AbilityContext *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UWN_AbilityContext__6B_;
  return this;
}

// ~UWN_AbilityContext @ 148db68f0

void __thiscall UWN_AbilityContext::~UWN_AbilityContext(UWN_AbilityContext *this)

{
  *(undefined ***)this = &___7UWN_AbilityContext__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 148db9a60

UClass * __cdecl UWN_AbilityContext::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_AbilityContext.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WNAbilityRuntime",L"WN_AbilityContext",
               &Z_Registration_Info_UClass_UWN_AbilityContext.InnerSingleton,
               StaticRegisterNativesUWN_AbilityContext,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UWN_AbilityContext>,
               InternalVTableHelperCtorCaller<UWN_AbilityContext>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_AbilityContext.InnerSingleton;
}

// StaticRegisterNativesUWN_AbilityContext @ 148dbb6d0

void __cdecl UWN_AbilityContext::StaticRegisterNativesUWN_AbilityContext(void)

{
  return;
}

