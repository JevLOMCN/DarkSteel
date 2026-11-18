// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 6

// StaticClass @ 14b403510

UClass * __cdecl UDS_LevelSequencePlayAbilityContext::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_LevelSequencePlayAbilityContext.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_LevelSequencePlayAbilityContext",
               &Z_Registration_Info_UClass_UDS_LevelSequencePlayAbilityContext.InnerSingleton,
               StaticRegisterNativesUDS_LevelSequencePlayAbilityContext,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_LevelSequencePlayAbilityContext>,
               InternalVTableHelperCtorCaller<UDS_LevelSequencePlayAbilityContext>,local_res8,
               UDS_AbilityContext::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_LevelSequencePlayAbilityContext.InnerSingleton;
}

// UDS_LevelSequencePlayAbilityContext @ 14b4071f0

UDS_LevelSequencePlayAbilityContext * __thiscall
UDS_LevelSequencePlayAbilityContext::UDS_LevelSequencePlayAbilityContext
          (UDS_LevelSequencePlayAbilityContext *this,FVTableHelper *param_1)

{
  UWN_AbilityContext::UWN_AbilityContext((UWN_AbilityContext *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_LevelSequencePlayAbilityContext__6B_;
  return this;
}

// UDS_LevelSequencePlayAbilityContext @ 14b407220

UDS_LevelSequencePlayAbilityContext * __thiscall
UDS_LevelSequencePlayAbilityContext::UDS_LevelSequencePlayAbilityContext
          (UDS_LevelSequencePlayAbilityContext *this,FObjectInitializer *param_1)

{
  UWN_AbilityContext::UWN_AbilityContext((UWN_AbilityContext *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_LevelSequencePlayAbilityContext__6B_;
  return this;
}

// ~UDS_LevelSequencePlayAbilityContext @ 14b408010

void __thiscall
UDS_LevelSequencePlayAbilityContext::~UDS_LevelSequencePlayAbilityContext
          (UDS_LevelSequencePlayAbilityContext *this)

{
  this->_padding_ = (longlong)&___7UWN_AbilityContext__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14b40a440

UClass * __cdecl UDS_LevelSequencePlayAbilityContext::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_LevelSequencePlayAbilityContext.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_LevelSequencePlayAbilityContext",
               &Z_Registration_Info_UClass_UDS_LevelSequencePlayAbilityContext.InnerSingleton,
               StaticRegisterNativesUDS_LevelSequencePlayAbilityContext,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_LevelSequencePlayAbilityContext>,
               InternalVTableHelperCtorCaller<UDS_LevelSequencePlayAbilityContext>,local_res8,
               UDS_AbilityContext::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_LevelSequencePlayAbilityContext.InnerSingleton;
}

// StaticRegisterNativesUDS_LevelSequencePlayAbilityContext @ 14b40aeb0

void __cdecl
UDS_LevelSequencePlayAbilityContext::StaticRegisterNativesUDS_LevelSequencePlayAbilityContext(void)

{
  return;
}

