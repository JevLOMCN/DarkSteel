// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 6

// StaticClass @ 14b402dd0

UClass * __cdecl UDS_AirWalkAbilityContext::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_AirWalkAbilityContext.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AirWalkAbilityContext",
               &Z_Registration_Info_UClass_UDS_AirWalkAbilityContext.InnerSingleton,
               StaticRegisterNativesUDS_AirWalkAbilityContext,0x30,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_AirWalkAbilityContext>,
               InternalVTableHelperCtorCaller<UDS_AirWalkAbilityContext>,local_res8,
               UDS_AbilityContext::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_AirWalkAbilityContext.InnerSingleton;
}

// UDS_AirWalkAbilityContext @ 14b406e50

UDS_AirWalkAbilityContext * __thiscall
UDS_AirWalkAbilityContext::UDS_AirWalkAbilityContext
          (UDS_AirWalkAbilityContext *this,FVTableHelper *param_1)

{
  UWN_AbilityContext::UWN_AbilityContext((UWN_AbilityContext *)this,param_1);
  this->AirWalkType = None;
  this->_padding_ = (longlong)&___7UDS_AirWalkAbilityContext__6B_;
  return this;
}

// UDS_AirWalkAbilityContext @ 14b406e80

UDS_AirWalkAbilityContext * __thiscall
UDS_AirWalkAbilityContext::UDS_AirWalkAbilityContext
          (UDS_AirWalkAbilityContext *this,FObjectInitializer *param_1)

{
  UWN_AbilityContext::UWN_AbilityContext((UWN_AbilityContext *)this,param_1);
  this->AirWalkType = None;
  this->_padding_ = (longlong)&___7UDS_AirWalkAbilityContext__6B_;
  return this;
}

// ~UDS_AirWalkAbilityContext @ 14b407ed0

void __thiscall
UDS_AirWalkAbilityContext::~UDS_AirWalkAbilityContext(UDS_AirWalkAbilityContext *this)

{
  this->_padding_ = (longlong)&___7UWN_AbilityContext__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14b409f00

UClass * __cdecl UDS_AirWalkAbilityContext::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_AirWalkAbilityContext.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AirWalkAbilityContext",
               &Z_Registration_Info_UClass_UDS_AirWalkAbilityContext.InnerSingleton,
               StaticRegisterNativesUDS_AirWalkAbilityContext,0x30,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_AirWalkAbilityContext>,
               InternalVTableHelperCtorCaller<UDS_AirWalkAbilityContext>,local_res8,
               UDS_AbilityContext::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_AirWalkAbilityContext.InnerSingleton;
}

// StaticRegisterNativesUDS_AirWalkAbilityContext @ 14b40ae40

void __cdecl UDS_AirWalkAbilityContext::StaticRegisterNativesUDS_AirWalkAbilityContext(void)

{
  return;
}

