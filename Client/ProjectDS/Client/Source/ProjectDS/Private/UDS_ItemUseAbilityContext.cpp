// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 6

// StaticClass @ 14b403d30

UClass * __cdecl UDS_ItemUseAbilityContext::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ItemUseAbilityContext.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ItemUseAbilityContext",
               &Z_Registration_Info_UClass_UDS_ItemUseAbilityContext.InnerSingleton,
               StaticRegisterNativesUDS_ItemUseAbilityContext,0x40,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_ItemUseAbilityContext>,
               InternalVTableHelperCtorCaller<UDS_ItemUseAbilityContext>,local_res8,
               UDS_AbilityContext::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ItemUseAbilityContext.InnerSingleton;
}

// UDS_ItemUseAbilityContext @ 14b407170

UDS_ItemUseAbilityContext * __thiscall
UDS_ItemUseAbilityContext::UDS_ItemUseAbilityContext
          (UDS_ItemUseAbilityContext *this,FVTableHelper *param_1)

{
  UWN_AbilityContext::UWN_AbilityContext((UWN_AbilityContext *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_ItemUseAbilityContext__6B_;
  this->EntityID = 0;
  this->EndTime = 0.0;
  this->ItemActionID = 0;
  return this;
}

// UDS_ItemUseAbilityContext @ 14b4071b0

UDS_ItemUseAbilityContext * __thiscall
UDS_ItemUseAbilityContext::UDS_ItemUseAbilityContext
          (UDS_ItemUseAbilityContext *this,FObjectInitializer *param_1)

{
  UWN_AbilityContext::UWN_AbilityContext((UWN_AbilityContext *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_ItemUseAbilityContext__6B_;
  this->EntityID = 0;
  this->EndTime = 0.0;
  this->ItemActionID = 0;
  return this;
}

// ~UDS_ItemUseAbilityContext @ 14b407ff0

void __thiscall
UDS_ItemUseAbilityContext::~UDS_ItemUseAbilityContext(UDS_ItemUseAbilityContext *this)

{
  this->_padding_ = (longlong)&___7UWN_AbilityContext__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14b40a380

UClass * __cdecl UDS_ItemUseAbilityContext::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ItemUseAbilityContext.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ItemUseAbilityContext",
               &Z_Registration_Info_UClass_UDS_ItemUseAbilityContext.InnerSingleton,
               StaticRegisterNativesUDS_ItemUseAbilityContext,0x40,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_ItemUseAbilityContext>,
               InternalVTableHelperCtorCaller<UDS_ItemUseAbilityContext>,local_res8,
               UDS_AbilityContext::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ItemUseAbilityContext.InnerSingleton;
}

// StaticRegisterNativesUDS_ItemUseAbilityContext @ 14b40aea0

void __cdecl UDS_ItemUseAbilityContext::StaticRegisterNativesUDS_ItemUseAbilityContext(void)

{
  return;
}

