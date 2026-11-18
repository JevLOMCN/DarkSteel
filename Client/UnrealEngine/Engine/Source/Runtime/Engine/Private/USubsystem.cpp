// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticClass @ 1487dc8d0

UClass * __cdecl USubsystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"Subsystem",&Z_Registration_Info_UClass_USubsystem.InnerSingleton,
               StaticRegisterNativesUSubsystem,0x30,8,CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,
               L"Engine",InternalConstructor<USubsystem>,InternalVTableHelperCtorCaller<USubsystem>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USubsystem.InnerSingleton;
}

// USubsystem @ 148809fc0

USubsystem * __thiscall USubsystem::USubsystem(USubsystem *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7USubsystem__6B_;
  return this;
}

// USubsystem @ 148809ff0

USubsystem * __thiscall USubsystem::USubsystem(USubsystem *this)

{
  UObject::UObject((UObject *)this);
  this->_padding_ = (longlong)&___7USubsystem__6B_;
  return this;
}

// ~USubsystem @ 14880d3d0

void __thiscall USubsystem::~USubsystem(USubsystem *this)

{
  this->_padding_ = (longlong)&___7USubsystem__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetFunctionCallspace @ 14883e110

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __thiscall USubsystem::GetFunctionCallspace(USubsystem *this,UFunction *param_1,FFrame *param_2)

{
  int iVar1;
  
  iVar1 = UEngine::GetGlobalFunctionCallspace(GEngine,param_1,(UObject *)this,param_2);
  return iVar1;
}

// GetPrivateStaticClass @ 148840910

UClass * __cdecl USubsystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"Subsystem",&Z_Registration_Info_UClass_USubsystem.InnerSingleton,
               StaticRegisterNativesUSubsystem,0x30,8,CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,
               L"Engine",InternalConstructor<USubsystem>,InternalVTableHelperCtorCaller<USubsystem>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USubsystem.InnerSingleton;
}

// StaticRegisterNativesUSubsystem @ 14885ac70

void __cdecl USubsystem::StaticRegisterNativesUSubsystem(void)

{
  return;
}

