// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 7

// StaticClass @ 14eca8a00

UClass * __cdecl UOnlineBeaconUnitTestNetDriver::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOnlineBeaconUnitTestNetDriver.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UNetDriver::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"OnlineBeaconUnitTestNetDriver",
               &Z_Registration_Info_UClass_UOnlineBeaconUnitTestNetDriver.InnerSingleton,
               StaticRegisterNativesUOnlineBeaconUnitTestNetDriver,0xb08,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UOnlineBeaconUnitTestNetDriver>,
               InternalVTableHelperCtorCaller<UOnlineBeaconUnitTestNetDriver>,local_res8,
               UIpNetDriver::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOnlineBeaconUnitTestNetDriver.InnerSingleton;
}

// UOnlineBeaconUnitTestNetDriver @ 14ecad480

UOnlineBeaconUnitTestNetDriver * __thiscall
UOnlineBeaconUnitTestNetDriver::UOnlineBeaconUnitTestNetDriver
          (UOnlineBeaconUnitTestNetDriver *this,FVTableHelper *param_1)

{
  UIpNetDriver::UIpNetDriver((UIpNetDriver *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__FExec__;
  return this;
}

// UOnlineBeaconUnitTestNetDriver @ 14ecad4c0

UOnlineBeaconUnitTestNetDriver * __thiscall
UOnlineBeaconUnitTestNetDriver::UOnlineBeaconUnitTestNetDriver
          (UOnlineBeaconUnitTestNetDriver *this,FObjectInitializer *param_1)

{
  UIpNetDriver::UIpNetDriver((UIpNetDriver *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__FExec__;
  return this;
}

// ~UOnlineBeaconUnitTestNetDriver @ 14ecadb20

void __thiscall
UOnlineBeaconUnitTestNetDriver::~UOnlineBeaconUnitTestNetDriver
          (UOnlineBeaconUnitTestNetDriver *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__FExec__;
  UIpNetDriver::~UIpNetDriver((UIpNetDriver *)this);
  return;
}

// GetPrivateStaticClass @ 14ecbb5b0

UClass * __cdecl UOnlineBeaconUnitTestNetDriver::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOnlineBeaconUnitTestNetDriver.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UNetDriver::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"OnlineBeaconUnitTestNetDriver",
               &Z_Registration_Info_UClass_UOnlineBeaconUnitTestNetDriver.InnerSingleton,
               StaticRegisterNativesUOnlineBeaconUnitTestNetDriver,0xb08,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UOnlineBeaconUnitTestNetDriver>,
               InternalVTableHelperCtorCaller<UOnlineBeaconUnitTestNetDriver>,local_res8,
               UIpNetDriver::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOnlineBeaconUnitTestNetDriver.InnerSingleton;
}

// IsEditorOnly @ 14ecbd670

bool __thiscall UOnlineBeaconUnitTestNetDriver::IsEditorOnly(UOnlineBeaconUnitTestNetDriver *this)

{
  return true;
}

// StaticRegisterNativesUOnlineBeaconUnitTestNetDriver @ 14ecca440

void __cdecl
UOnlineBeaconUnitTestNetDriver::StaticRegisterNativesUOnlineBeaconUnitTestNetDriver(void)

{
  return;
}

