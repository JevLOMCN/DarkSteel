// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 6

// StaticClass @ 14b403800

UClass * __cdecl UDS_LockOnTargetAbilityContext::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_LockOnTargetAbilityContext.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_LockOnTargetAbilityContext",
               &Z_Registration_Info_UClass_UDS_LockOnTargetAbilityContext.InnerSingleton,
               StaticRegisterNativesUDS_LockOnTargetAbilityContext,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_LockOnTargetAbilityContext>,
               InternalVTableHelperCtorCaller<UDS_LockOnTargetAbilityContext>,local_res8,
               UDS_AbilityContext::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_LockOnTargetAbilityContext.InnerSingleton;
}

// UDS_LockOnTargetAbilityContext @ 14b407250

UDS_LockOnTargetAbilityContext * __thiscall
UDS_LockOnTargetAbilityContext::UDS_LockOnTargetAbilityContext
          (UDS_LockOnTargetAbilityContext *this,FVTableHelper *param_1)

{
  UWN_AbilityContext::UWN_AbilityContext((UWN_AbilityContext *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_LockOnTargetAbilityContext__6B_;
  return this;
}

// UDS_LockOnTargetAbilityContext @ 14b407280

UDS_LockOnTargetAbilityContext * __thiscall
UDS_LockOnTargetAbilityContext::UDS_LockOnTargetAbilityContext
          (UDS_LockOnTargetAbilityContext *this,FObjectInitializer *param_1)

{
  UWN_AbilityContext::UWN_AbilityContext((UWN_AbilityContext *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_LockOnTargetAbilityContext__6B_;
  return this;
}

// ~UDS_LockOnTargetAbilityContext @ 14b408030

void __thiscall
UDS_LockOnTargetAbilityContext::~UDS_LockOnTargetAbilityContext
          (UDS_LockOnTargetAbilityContext *this)

{
  this->_padding_ = (longlong)&___7UWN_AbilityContext__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14b40a500

UClass * __cdecl UDS_LockOnTargetAbilityContext::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_LockOnTargetAbilityContext.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_LockOnTargetAbilityContext",
               &Z_Registration_Info_UClass_UDS_LockOnTargetAbilityContext.InnerSingleton,
               StaticRegisterNativesUDS_LockOnTargetAbilityContext,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_LockOnTargetAbilityContext>,
               InternalVTableHelperCtorCaller<UDS_LockOnTargetAbilityContext>,local_res8,
               UDS_AbilityContext::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_LockOnTargetAbilityContext.InnerSingleton;
}

// StaticRegisterNativesUDS_LockOnTargetAbilityContext @ 14b40aec0

void __cdecl
UDS_LockOnTargetAbilityContext::StaticRegisterNativesUDS_LockOnTargetAbilityContext(void)

{
  return;
}

