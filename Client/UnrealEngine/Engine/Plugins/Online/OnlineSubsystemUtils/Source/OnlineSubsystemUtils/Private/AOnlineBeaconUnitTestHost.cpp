// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 7

// StaticClass @ 14eca8f00

UClass * __cdecl AOnlineBeaconUnitTestHost::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AOnlineBeaconUnitTestHost.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"OnlineBeaconUnitTestHost",
               &Z_Registration_Info_UClass_AOnlineBeaconUnitTestHost.InnerSingleton,
               StaticRegisterNativesAOnlineBeaconUnitTestHost,0x400,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<AOnlineBeaconUnitTestHost>,
               InternalVTableHelperCtorCaller<AOnlineBeaconUnitTestHost>,local_res8,
               AOnlineBeaconHost::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AOnlineBeaconUnitTestHost.InnerSingleton;
}

// AOnlineBeaconUnitTestHost @ 14ecac590

AOnlineBeaconUnitTestHost * __thiscall
AOnlineBeaconUnitTestHost::AOnlineBeaconUnitTestHost
          (AOnlineBeaconUnitTestHost *this,FVTableHelper *param_1)

{
  AOnlineBeaconHost::AOnlineBeaconHost((AOnlineBeaconHost *)this,param_1);
  *(undefined ***)this = &_vftable__for__AActor__;
  *(undefined ***)&this->field_0x2c0 = &_vftable__for__FNetworkNotify__;
  return this;
}

// AOnlineBeaconUnitTestHost @ 14ecac5d0

AOnlineBeaconUnitTestHost * __thiscall
AOnlineBeaconUnitTestHost::AOnlineBeaconUnitTestHost
          (AOnlineBeaconUnitTestHost *this,FObjectInitializer *param_1)

{
  AOnlineBeaconHost::AOnlineBeaconHost((AOnlineBeaconHost *)this,param_1);
  *(undefined ***)this = &_vftable__for__AActor__;
  *(undefined ***)&this->field_0x2c0 = &_vftable__for__FNetworkNotify__;
  return this;
}

// ~AOnlineBeaconUnitTestHost @ 14ecad880

void __thiscall
AOnlineBeaconUnitTestHost::~AOnlineBeaconUnitTestHost(AOnlineBeaconUnitTestHost *this)

{
  *(undefined ***)this = &_vftable__for__AActor__;
  *(undefined ***)&this->field_0x2c0 = &_vftable__for__FNetworkNotify__;
  AOnlineBeaconHost::~AOnlineBeaconHost((AOnlineBeaconHost *)this);
  return;
}

// GetPrivateStaticClass @ 14ecbafb0

UClass * __cdecl AOnlineBeaconUnitTestHost::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AOnlineBeaconUnitTestHost.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"OnlineBeaconUnitTestHost",
               &Z_Registration_Info_UClass_AOnlineBeaconUnitTestHost.InnerSingleton,
               StaticRegisterNativesAOnlineBeaconUnitTestHost,0x400,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<AOnlineBeaconUnitTestHost>,
               InternalVTableHelperCtorCaller<AOnlineBeaconUnitTestHost>,local_res8,
               AOnlineBeaconHost::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AOnlineBeaconUnitTestHost.InnerSingleton;
}

// IsEditorOnly @ 14ecbd640

bool __thiscall AOnlineBeaconUnitTestHost::IsEditorOnly(AOnlineBeaconUnitTestHost *this)

{
  return true;
}

// StaticRegisterNativesAOnlineBeaconUnitTestHost @ 14ecca360

void __cdecl AOnlineBeaconUnitTestHost::StaticRegisterNativesAOnlineBeaconUnitTestHost(void)

{
  return;
}

