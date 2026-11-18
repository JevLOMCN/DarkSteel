// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 6

// StaticClass @ 14b403670

UClass * __cdecl UDS_GroggyAbilityContext::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_GroggyAbilityContext.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_GroggyAbilityContext",
               &Z_Registration_Info_UClass_UDS_GroggyAbilityContext.InnerSingleton,
               StaticRegisterNativesUDS_GroggyAbilityContext,0x30,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_GroggyAbilityContext>,
               InternalVTableHelperCtorCaller<UDS_GroggyAbilityContext>,local_res8,
               UDS_AbilityContext::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_GroggyAbilityContext.InnerSingleton;
}

// UDS_GroggyAbilityContext @ 14b406ff0

UDS_GroggyAbilityContext * __thiscall
UDS_GroggyAbilityContext::UDS_GroggyAbilityContext
          (UDS_GroggyAbilityContext *this,FVTableHelper *param_1)

{
  UWN_AbilityContext::UWN_AbilityContext((UWN_AbilityContext *)this,param_1);
  this->EndTime = 0.0;
  this->_padding_ = (longlong)&___7UDS_GroggyAbilityContext__6B_;
  return this;
}

// UDS_GroggyAbilityContext @ 14b407020

UDS_GroggyAbilityContext * __thiscall
UDS_GroggyAbilityContext::UDS_GroggyAbilityContext
          (UDS_GroggyAbilityContext *this,FObjectInitializer *param_1)

{
  UWN_AbilityContext::UWN_AbilityContext((UWN_AbilityContext *)this,param_1);
  this->EndTime = 0.0;
  this->_padding_ = (longlong)&___7UDS_GroggyAbilityContext__6B_;
  return this;
}

// ~UDS_GroggyAbilityContext @ 14b407fb0

void __thiscall UDS_GroggyAbilityContext::~UDS_GroggyAbilityContext(UDS_GroggyAbilityContext *this)

{
  this->_padding_ = (longlong)&___7UWN_AbilityContext__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14b40a200

UClass * __cdecl UDS_GroggyAbilityContext::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_GroggyAbilityContext.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_GroggyAbilityContext",
               &Z_Registration_Info_UClass_UDS_GroggyAbilityContext.InnerSingleton,
               StaticRegisterNativesUDS_GroggyAbilityContext,0x30,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_GroggyAbilityContext>,
               InternalVTableHelperCtorCaller<UDS_GroggyAbilityContext>,local_res8,
               UDS_AbilityContext::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_GroggyAbilityContext.InnerSingleton;
}

// StaticRegisterNativesUDS_GroggyAbilityContext @ 14b40ae80

void __cdecl UDS_GroggyAbilityContext::StaticRegisterNativesUDS_GroggyAbilityContext(void)

{
  return;
}

