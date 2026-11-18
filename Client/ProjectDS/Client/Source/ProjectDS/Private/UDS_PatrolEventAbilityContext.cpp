// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 6

// StaticClass @ 14b4038c0

UClass * __cdecl UDS_PatrolEventAbilityContext::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_PatrolEventAbilityContext.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_PatrolEventAbilityContext",
               &Z_Registration_Info_UClass_UDS_PatrolEventAbilityContext.InnerSingleton,
               StaticRegisterNativesUDS_PatrolEventAbilityContext,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_PatrolEventAbilityContext>,
               InternalVTableHelperCtorCaller<UDS_PatrolEventAbilityContext>,local_res8,
               UDS_AbilityContext::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_PatrolEventAbilityContext.InnerSingleton;
}

// UDS_PatrolEventAbilityContext @ 14b4073f0

UDS_PatrolEventAbilityContext * __thiscall
UDS_PatrolEventAbilityContext::UDS_PatrolEventAbilityContext
          (UDS_PatrolEventAbilityContext *this,FVTableHelper *param_1)

{
  UWN_AbilityContext::UWN_AbilityContext((UWN_AbilityContext *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_PatrolEventAbilityContext__6B_;
  this->PatrolActionType = 0;
  this->PlayAnimNum = 0;
  this->PlayAnimTime = 0.0;
  return this;
}

// UDS_PatrolEventAbilityContext @ 14b407420

UDS_PatrolEventAbilityContext * __thiscall
UDS_PatrolEventAbilityContext::UDS_PatrolEventAbilityContext
          (UDS_PatrolEventAbilityContext *this,FObjectInitializer *param_1)

{
  UWN_AbilityContext::UWN_AbilityContext((UWN_AbilityContext *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_PatrolEventAbilityContext__6B_;
  this->PatrolActionType = 0;
  this->PlayAnimNum = 0;
  this->PlayAnimTime = 0.0;
  return this;
}

// ~UDS_PatrolEventAbilityContext @ 14b4080b0

void __thiscall
UDS_PatrolEventAbilityContext::~UDS_PatrolEventAbilityContext(UDS_PatrolEventAbilityContext *this)

{
  this->_padding_ = (longlong)&___7UWN_AbilityContext__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14b40a800

UClass * __cdecl UDS_PatrolEventAbilityContext::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_PatrolEventAbilityContext.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_PatrolEventAbilityContext",
               &Z_Registration_Info_UClass_UDS_PatrolEventAbilityContext.InnerSingleton,
               StaticRegisterNativesUDS_PatrolEventAbilityContext,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_PatrolEventAbilityContext>,
               InternalVTableHelperCtorCaller<UDS_PatrolEventAbilityContext>,local_res8,
               UDS_AbilityContext::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_PatrolEventAbilityContext.InnerSingleton;
}

// StaticRegisterNativesUDS_PatrolEventAbilityContext @ 14b40af00

void __cdecl UDS_PatrolEventAbilityContext::StaticRegisterNativesUDS_PatrolEventAbilityContext(void)

{
  return;
}

