// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 7

// StaticClass @ 1499013a0

UClass * __cdecl UPCGControlFlowSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGControlFlowSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGControlFlowSettings",
               &Z_Registration_Info_UClass_UPCGControlFlowSettings.InnerSingleton,
               StaticRegisterNativesUPCGControlFlowSettings,200,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGControlFlowSettings>,
               InternalVTableHelperCtorCaller<UPCGControlFlowSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGControlFlowSettings.InnerSingleton;
}

// UPCGControlFlowSettings @ 1499c3400

UPCGControlFlowSettings * __thiscall
UPCGControlFlowSettings::UPCGControlFlowSettings
          (UPCGControlFlowSettings *this,FVTableHelper *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  *(undefined ***)this = &___7UPCGControlFlowSettings__6B_;
  return this;
}

// UPCGControlFlowSettings @ 1499c3430

UPCGControlFlowSettings * __thiscall
UPCGControlFlowSettings::UPCGControlFlowSettings
          (UPCGControlFlowSettings *this,FObjectInitializer *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  *(undefined ***)this = &___7UPCGControlFlowSettings__6B_;
  return this;
}

// ~UPCGControlFlowSettings @ 1499c6350

void __thiscall UPCGControlFlowSettings::~UPCGControlFlowSettings(UPCGControlFlowSettings *this)

{
  *(undefined ***)this = &___7UPCGControlFlowSettings__6B_;
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// GetPrivateStaticClass @ 1499fad90

UClass * __cdecl UPCGControlFlowSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGControlFlowSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGControlFlowSettings",
               &Z_Registration_Info_UClass_UPCGControlFlowSettings.InnerSingleton,
               StaticRegisterNativesUPCGControlFlowSettings,200,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGControlFlowSettings>,
               InternalVTableHelperCtorCaller<UPCGControlFlowSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGControlFlowSettings.InnerSingleton;
}

// HasExecutionDependencyPin @ 1499fe530

bool __thiscall UPCGControlFlowSettings::HasExecutionDependencyPin(UPCGControlFlowSettings *this)

{
  return false;
}

// StaticRegisterNativesUPCGControlFlowSettings @ 149a0ff90

void __cdecl UPCGControlFlowSettings::StaticRegisterNativesUPCGControlFlowSettings(void)

{
  return;
}

