// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 6

// StaticClass @ 14b402d00

UClass * __cdecl UDS_SkillModeAbilityContext::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_SkillModeAbilityContext.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_SkillModeAbilityContext",
               &Z_Registration_Info_UClass_UDS_SkillModeAbilityContext.InnerSingleton,
               StaticRegisterNativesUDS_SkillModeAbilityContext,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_SkillModeAbilityContext>,
               InternalVTableHelperCtorCaller<UDS_SkillModeAbilityContext>,local_res8,
               UDS_AbilityContext::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_SkillModeAbilityContext.InnerSingleton;
}

// UDS_SkillModeAbilityContext @ 14b4076d0

UDS_SkillModeAbilityContext * __thiscall
UDS_SkillModeAbilityContext::UDS_SkillModeAbilityContext
          (UDS_SkillModeAbilityContext *this,FVTableHelper *param_1)

{
  UWN_AbilityContext::UWN_AbilityContext((UWN_AbilityContext *)this,param_1);
  this->SkillModeID = 0;
  this->_padding_ = (longlong)&___7UDS_SkillModeAbilityContext__6B_;
  return this;
}

// UDS_SkillModeAbilityContext @ 14b407700

UDS_SkillModeAbilityContext * __thiscall
UDS_SkillModeAbilityContext::UDS_SkillModeAbilityContext
          (UDS_SkillModeAbilityContext *this,FObjectInitializer *param_1)

{
  UWN_AbilityContext::UWN_AbilityContext((UWN_AbilityContext *)this,param_1);
  this->SkillModeID = 0;
  this->_padding_ = (longlong)&___7UDS_SkillModeAbilityContext__6B_;
  return this;
}

// ~UDS_SkillModeAbilityContext @ 14b4080f0

void __thiscall
UDS_SkillModeAbilityContext::~UDS_SkillModeAbilityContext(UDS_SkillModeAbilityContext *this)

{
  this->_padding_ = (longlong)&___7UWN_AbilityContext__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14b40a980

UClass * __cdecl UDS_SkillModeAbilityContext::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_SkillModeAbilityContext.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_SkillModeAbilityContext",
               &Z_Registration_Info_UClass_UDS_SkillModeAbilityContext.InnerSingleton,
               StaticRegisterNativesUDS_SkillModeAbilityContext,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_SkillModeAbilityContext>,
               InternalVTableHelperCtorCaller<UDS_SkillModeAbilityContext>,local_res8,
               UDS_AbilityContext::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_SkillModeAbilityContext.InnerSingleton;
}

// StaticRegisterNativesUDS_SkillModeAbilityContext @ 14b40af20

void __cdecl UDS_SkillModeAbilityContext::StaticRegisterNativesUDS_SkillModeAbilityContext(void)

{
  return;
}

