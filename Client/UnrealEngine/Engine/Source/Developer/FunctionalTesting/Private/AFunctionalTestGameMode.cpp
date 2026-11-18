// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FunctionalTesting
// Functions: 6

// StaticClass @ 148c72640

UClass * __cdecl AFunctionalTestGameMode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AFunctionalTestGameMode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FunctionalTesting",L"FunctionalTestGameMode",
               &Z_Registration_Info_UClass_AFunctionalTestGameMode.InnerSingleton,
               StaticRegisterNativesAFunctionalTestGameMode,0x358,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Game",
               InternalConstructor<AFunctionalTestGameMode>,
               InternalVTableHelperCtorCaller<AFunctionalTestGameMode>,local_res8,
               AGameModeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AFunctionalTestGameMode.InnerSingleton;
}

// AFunctionalTestGameMode @ 148c7e850

AFunctionalTestGameMode * __thiscall
AFunctionalTestGameMode::AFunctionalTestGameMode
          (AFunctionalTestGameMode *this,FVTableHelper *param_1)

{
  AGameModeBase::AGameModeBase((AGameModeBase *)this,param_1);
  *(undefined ***)this = &___7AFunctionalTestGameMode__6B_;
  return this;
}

// AFunctionalTestGameMode @ 148c7e880

AFunctionalTestGameMode * __thiscall
AFunctionalTestGameMode::AFunctionalTestGameMode
          (AFunctionalTestGameMode *this,FObjectInitializer *param_1)

{
  UClass *pUVar1;
  
  AGameModeBase::AGameModeBase((AGameModeBase *)this,param_1);
  *(undefined ***)this = &___7AFunctionalTestGameMode__6B_;
  pUVar1 = Z_Construct_UClass_ASpectatorPawn_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  *(UClass **)&this->field_0x2f8 = pUVar1;
  return this;
}

// ~AFunctionalTestGameMode @ 148c80a80

void __thiscall AFunctionalTestGameMode::~AFunctionalTestGameMode(AFunctionalTestGameMode *this)

{
  *(undefined ***)this = &___7AFunctionalTestGameMode__6B_;
  AGameModeBase::~AGameModeBase((AGameModeBase *)this);
  return;
}

// GetPrivateStaticClass @ 148c912c0

UClass * __cdecl AFunctionalTestGameMode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AFunctionalTestGameMode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FunctionalTesting",L"FunctionalTestGameMode",
               &Z_Registration_Info_UClass_AFunctionalTestGameMode.InnerSingleton,
               StaticRegisterNativesAFunctionalTestGameMode,0x358,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Game",
               InternalConstructor<AFunctionalTestGameMode>,
               InternalVTableHelperCtorCaller<AFunctionalTestGameMode>,local_res8,
               AGameModeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AFunctionalTestGameMode.InnerSingleton;
}

// StaticRegisterNativesAFunctionalTestGameMode @ 148c9d3b0

void __cdecl AFunctionalTestGameMode::StaticRegisterNativesAFunctionalTestGameMode(void)

{
  return;
}

