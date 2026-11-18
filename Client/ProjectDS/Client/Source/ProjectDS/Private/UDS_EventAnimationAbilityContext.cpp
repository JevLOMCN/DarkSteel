// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 6

// StaticClass @ 14b403b00

UClass * __cdecl UDS_EventAnimationAbilityContext::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_EventAnimationAbilityContext.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_EventAnimationAbilityContext",
               &Z_Registration_Info_UClass_UDS_EventAnimationAbilityContext.InnerSingleton,
               StaticRegisterNativesUDS_EventAnimationAbilityContext,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_EventAnimationAbilityContext>,
               InternalVTableHelperCtorCaller<UDS_EventAnimationAbilityContext>,local_res8,
               UDS_AbilityContext::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_EventAnimationAbilityContext.InnerSingleton;
}

// UDS_EventAnimationAbilityContext @ 14b406f90

UDS_EventAnimationAbilityContext * __thiscall
UDS_EventAnimationAbilityContext::UDS_EventAnimationAbilityContext
          (UDS_EventAnimationAbilityContext *this,FVTableHelper *param_1)

{
  UWN_AbilityContext::UWN_AbilityContext((UWN_AbilityContext *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_EventAnimationAbilityContext__6B_;
  this->PlayAnimNum = 0;
  this->PlayAnimTime = 0.0;
  return this;
}

// UDS_EventAnimationAbilityContext @ 14b406fc0

UDS_EventAnimationAbilityContext * __thiscall
UDS_EventAnimationAbilityContext::UDS_EventAnimationAbilityContext
          (UDS_EventAnimationAbilityContext *this,FObjectInitializer *param_1)

{
  UWN_AbilityContext::UWN_AbilityContext((UWN_AbilityContext *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_EventAnimationAbilityContext__6B_;
  this->PlayAnimNum = 0;
  this->PlayAnimTime = 0.0;
  return this;
}

// ~UDS_EventAnimationAbilityContext @ 14b407f90

void __thiscall
UDS_EventAnimationAbilityContext::~UDS_EventAnimationAbilityContext
          (UDS_EventAnimationAbilityContext *this)

{
  this->_padding_ = (longlong)&___7UWN_AbilityContext__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14b40a140

UClass * __cdecl UDS_EventAnimationAbilityContext::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_EventAnimationAbilityContext.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_EventAnimationAbilityContext",
               &Z_Registration_Info_UClass_UDS_EventAnimationAbilityContext.InnerSingleton,
               StaticRegisterNativesUDS_EventAnimationAbilityContext,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_EventAnimationAbilityContext>,
               InternalVTableHelperCtorCaller<UDS_EventAnimationAbilityContext>,local_res8,
               UDS_AbilityContext::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_EventAnimationAbilityContext.InnerSingleton;
}

// StaticRegisterNativesUDS_EventAnimationAbilityContext @ 14b40ae70

void __cdecl
UDS_EventAnimationAbilityContext::StaticRegisterNativesUDS_EventAnimationAbilityContext(void)

{
  return;
}

