// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 6

// StaticClass @ 14b403430

UClass * __cdecl UDS_NpcLookAtAbilityContext::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_NpcLookAtAbilityContext.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_NpcLookAtAbilityContext",
               &Z_Registration_Info_UClass_UDS_NpcLookAtAbilityContext.InnerSingleton,
               StaticRegisterNativesUDS_NpcLookAtAbilityContext,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_NpcLookAtAbilityContext>,
               InternalVTableHelperCtorCaller<UDS_NpcLookAtAbilityContext>,local_res8,
               UDS_AbilityContext::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_NpcLookAtAbilityContext.InnerSingleton;
}

// UDS_NpcLookAtAbilityContext @ 14b407390

UDS_NpcLookAtAbilityContext * __thiscall
UDS_NpcLookAtAbilityContext::UDS_NpcLookAtAbilityContext
          (UDS_NpcLookAtAbilityContext *this,FVTableHelper *param_1)

{
  UWN_AbilityContext::UWN_AbilityContext((UWN_AbilityContext *)this,param_1);
  this->LookAtChance = 0;
  this->_padding_ = (longlong)&___7UDS_NpcLookAtAbilityContext__6B_;
  return this;
}

// UDS_NpcLookAtAbilityContext @ 14b4073c0

UDS_NpcLookAtAbilityContext * __thiscall
UDS_NpcLookAtAbilityContext::UDS_NpcLookAtAbilityContext
          (UDS_NpcLookAtAbilityContext *this,FObjectInitializer *param_1)

{
  UWN_AbilityContext::UWN_AbilityContext((UWN_AbilityContext *)this,param_1);
  this->LookAtChance = 0;
  this->_padding_ = (longlong)&___7UDS_NpcLookAtAbilityContext__6B_;
  return this;
}

// ~UDS_NpcLookAtAbilityContext @ 14b408090

void __thiscall
UDS_NpcLookAtAbilityContext::~UDS_NpcLookAtAbilityContext(UDS_NpcLookAtAbilityContext *this)

{
  this->_padding_ = (longlong)&___7UWN_AbilityContext__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14b40a740

UClass * __cdecl UDS_NpcLookAtAbilityContext::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_NpcLookAtAbilityContext.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_NpcLookAtAbilityContext",
               &Z_Registration_Info_UClass_UDS_NpcLookAtAbilityContext.InnerSingleton,
               StaticRegisterNativesUDS_NpcLookAtAbilityContext,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_NpcLookAtAbilityContext>,
               InternalVTableHelperCtorCaller<UDS_NpcLookAtAbilityContext>,local_res8,
               UDS_AbilityContext::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_NpcLookAtAbilityContext.InnerSingleton;
}

// StaticRegisterNativesUDS_NpcLookAtAbilityContext @ 14b40aef0

void __cdecl UDS_NpcLookAtAbilityContext::StaticRegisterNativesUDS_NpcLookAtAbilityContext(void)

{
  return;
}

