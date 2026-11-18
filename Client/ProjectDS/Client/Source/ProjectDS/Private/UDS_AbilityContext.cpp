// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 6

// StaticClass @ 14b402960

UClass * __cdecl UDS_AbilityContext::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_AbilityContext.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AbilityContext",
               &Z_Registration_Info_UClass_UDS_AbilityContext.InnerSingleton,
               StaticRegisterNativesUDS_AbilityContext,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_AbilityContext>,
               InternalVTableHelperCtorCaller<UDS_AbilityContext>,local_res8,
               UWN_AbilityContext::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_AbilityContext.InnerSingleton;
}

// UDS_AbilityContext @ 14b406500

UDS_AbilityContext * __thiscall
UDS_AbilityContext::UDS_AbilityContext(UDS_AbilityContext *this,FVTableHelper *param_1)

{
  UWN_AbilityContext::UWN_AbilityContext((UWN_AbilityContext *)this,param_1);
  *(undefined ***)this = &___7UDS_AbilityContext__6B_;
  return this;
}

// UDS_AbilityContext @ 14b406530

UDS_AbilityContext * __thiscall
UDS_AbilityContext::UDS_AbilityContext(UDS_AbilityContext *this,FObjectInitializer *param_1)

{
  UWN_AbilityContext::UWN_AbilityContext((UWN_AbilityContext *)this,param_1);
  *(undefined ***)this = &___7UDS_AbilityContext__6B_;
  return this;
}

// ~UDS_AbilityContext @ 14b407a50

void __thiscall UDS_AbilityContext::~UDS_AbilityContext(UDS_AbilityContext *this)

{
  *(undefined ***)this = &___7UWN_AbilityContext__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14b409600

UClass * __cdecl UDS_AbilityContext::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_AbilityContext.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AbilityContext",
               &Z_Registration_Info_UClass_UDS_AbilityContext.InnerSingleton,
               StaticRegisterNativesUDS_AbilityContext,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_AbilityContext>,
               InternalVTableHelperCtorCaller<UDS_AbilityContext>,local_res8,
               UWN_AbilityContext::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_AbilityContext.InnerSingleton;
}

// StaticRegisterNativesUDS_AbilityContext @ 14b40ad80

void __cdecl UDS_AbilityContext::StaticRegisterNativesUDS_AbilityContext(void)

{
  return;
}

