// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 6

// StaticClass @ 14b400760

UClass * __cdecl UDS_MountAbilityContext::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_MountAbilityContext.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_MountAbilityContext",
               &Z_Registration_Info_UClass_UDS_MountAbilityContext.InnerSingleton,
               StaticRegisterNativesUDS_MountAbilityContext,0x30,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_MountAbilityContext>,
               InternalVTableHelperCtorCaller<UDS_MountAbilityContext>,local_res8,
               UDS_AbilityContext::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_MountAbilityContext.InnerSingleton;
}

// UDS_MountAbilityContext @ 14b4072b0

UDS_MountAbilityContext * __thiscall
UDS_MountAbilityContext::UDS_MountAbilityContext
          (UDS_MountAbilityContext *this,FVTableHelper *param_1)

{
  UWN_AbilityContext::UWN_AbilityContext((UWN_AbilityContext *)this,param_1);
  this->IsDespawn = false;
  this->IsReadyEnd = false;
  this->_padding_ = (longlong)&___7UDS_MountAbilityContext__6B_;
  return this;
}

// UDS_MountAbilityContext @ 14b4072e0

UDS_MountAbilityContext * __thiscall
UDS_MountAbilityContext::UDS_MountAbilityContext
          (UDS_MountAbilityContext *this,FObjectInitializer *param_1)

{
  UWN_AbilityContext::UWN_AbilityContext((UWN_AbilityContext *)this,param_1);
  this->IsDespawn = false;
  this->IsReadyEnd = false;
  this->_padding_ = (longlong)&___7UDS_MountAbilityContext__6B_;
  return this;
}

// ~UDS_MountAbilityContext @ 14b408050

void __thiscall UDS_MountAbilityContext::~UDS_MountAbilityContext(UDS_MountAbilityContext *this)

{
  this->_padding_ = (longlong)&___7UWN_AbilityContext__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14b40a5c0

UClass * __cdecl UDS_MountAbilityContext::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_MountAbilityContext.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_MountAbilityContext",
               &Z_Registration_Info_UClass_UDS_MountAbilityContext.InnerSingleton,
               StaticRegisterNativesUDS_MountAbilityContext,0x30,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_MountAbilityContext>,
               InternalVTableHelperCtorCaller<UDS_MountAbilityContext>,local_res8,
               UDS_AbilityContext::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_MountAbilityContext.InnerSingleton;
}

// StaticRegisterNativesUDS_MountAbilityContext @ 14b40aed0

void __cdecl UDS_MountAbilityContext::StaticRegisterNativesUDS_MountAbilityContext(void)

{
  return;
}

