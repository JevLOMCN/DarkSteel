// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 6

// StaticClass @ 14b403370

UClass * __cdecl UDS_DeathAbilityContext::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_DeathAbilityContext.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_DeathAbilityContext",
               &Z_Registration_Info_UClass_UDS_DeathAbilityContext.InnerSingleton,
               StaticRegisterNativesUDS_DeathAbilityContext,0x30,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_DeathAbilityContext>,
               InternalVTableHelperCtorCaller<UDS_DeathAbilityContext>,local_res8,
               UDS_AbilityContext::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_DeathAbilityContext.InnerSingleton;
}

// UDS_DeathAbilityContext @ 14b406f30

UDS_DeathAbilityContext * __thiscall
UDS_DeathAbilityContext::UDS_DeathAbilityContext
          (UDS_DeathAbilityContext *this,FVTableHelper *param_1)

{
  UWN_AbilityContext::UWN_AbilityContext((UWN_AbilityContext *)this,param_1);
  this->IsDeadAbnormal = false;
  this->_padding_ = (longlong)&___7UDS_DeathAbilityContext__6B_;
  return this;
}

// UDS_DeathAbilityContext @ 14b406f60

UDS_DeathAbilityContext * __thiscall
UDS_DeathAbilityContext::UDS_DeathAbilityContext
          (UDS_DeathAbilityContext *this,FObjectInitializer *param_1)

{
  UWN_AbilityContext::UWN_AbilityContext((UWN_AbilityContext *)this,param_1);
  this->IsDeadAbnormal = false;
  this->_padding_ = (longlong)&___7UDS_DeathAbilityContext__6B_;
  return this;
}

// ~UDS_DeathAbilityContext @ 14b407f70

void __thiscall UDS_DeathAbilityContext::~UDS_DeathAbilityContext(UDS_DeathAbilityContext *this)

{
  this->_padding_ = (longlong)&___7UWN_AbilityContext__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14b40a080

UClass * __cdecl UDS_DeathAbilityContext::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_DeathAbilityContext.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_DeathAbilityContext",
               &Z_Registration_Info_UClass_UDS_DeathAbilityContext.InnerSingleton,
               StaticRegisterNativesUDS_DeathAbilityContext,0x30,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_DeathAbilityContext>,
               InternalVTableHelperCtorCaller<UDS_DeathAbilityContext>,local_res8,
               UDS_AbilityContext::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_DeathAbilityContext.InnerSingleton;
}

// StaticRegisterNativesUDS_DeathAbilityContext @ 14b40ae60

void __cdecl UDS_DeathAbilityContext::StaticRegisterNativesUDS_DeathAbilityContext(void)

{
  return;
}

