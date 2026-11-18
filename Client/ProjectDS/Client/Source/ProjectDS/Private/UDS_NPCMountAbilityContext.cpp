// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 6

// StaticClass @ 14b4006a0

UClass * __cdecl UDS_NPCMountAbilityContext::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_NPCMountAbilityContext.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_NPCMountAbilityContext",
               &Z_Registration_Info_UClass_UDS_NPCMountAbilityContext.InnerSingleton,
               StaticRegisterNativesUDS_NPCMountAbilityContext,0x48,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_NPCMountAbilityContext>,
               InternalVTableHelperCtorCaller<UDS_NPCMountAbilityContext>,local_res8,
               UDS_AbilityContext::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_NPCMountAbilityContext.InnerSingleton;
}

// UDS_NPCMountAbilityContext @ 14b407310

UDS_NPCMountAbilityContext * __thiscall
UDS_NPCMountAbilityContext::UDS_NPCMountAbilityContext
          (UDS_NPCMountAbilityContext *this,FVTableHelper *param_1)

{
  UWN_AbilityContext::UWN_AbilityContext((UWN_AbilityContext *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_NPCMountAbilityContext__6B_;
  (this->AbilityTag).TagName = (FName)0x0;
  this->IsAdd = false;
  this->OwnerEntityID = 0;
  this->DashSkillID = 0;
  this->IsDespawn = false;
  return this;
}

// UDS_NPCMountAbilityContext @ 14b407350

UDS_NPCMountAbilityContext * __thiscall
UDS_NPCMountAbilityContext::UDS_NPCMountAbilityContext
          (UDS_NPCMountAbilityContext *this,FObjectInitializer *param_1)

{
  UWN_AbilityContext::UWN_AbilityContext((UWN_AbilityContext *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_NPCMountAbilityContext__6B_;
  (this->AbilityTag).TagName = (FName)0x0;
  this->IsAdd = false;
  this->OwnerEntityID = 0;
  this->DashSkillID = 0;
  this->IsDespawn = false;
  return this;
}

// ~UDS_NPCMountAbilityContext @ 14b408070

void __thiscall
UDS_NPCMountAbilityContext::~UDS_NPCMountAbilityContext(UDS_NPCMountAbilityContext *this)

{
  this->_padding_ = (longlong)&___7UWN_AbilityContext__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14b40a680

UClass * __cdecl UDS_NPCMountAbilityContext::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_NPCMountAbilityContext.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_NPCMountAbilityContext",
               &Z_Registration_Info_UClass_UDS_NPCMountAbilityContext.InnerSingleton,
               StaticRegisterNativesUDS_NPCMountAbilityContext,0x48,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_NPCMountAbilityContext>,
               InternalVTableHelperCtorCaller<UDS_NPCMountAbilityContext>,local_res8,
               UDS_AbilityContext::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_NPCMountAbilityContext.InnerSingleton;
}

// StaticRegisterNativesUDS_NPCMountAbilityContext @ 14b40aee0

void __cdecl UDS_NPCMountAbilityContext::StaticRegisterNativesUDS_NPCMountAbilityContext(void)

{
  return;
}

