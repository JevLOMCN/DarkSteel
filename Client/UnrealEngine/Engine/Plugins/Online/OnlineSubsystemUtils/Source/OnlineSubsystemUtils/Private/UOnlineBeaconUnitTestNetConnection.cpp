// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 7

// StaticClass @ 14eca95d0

UClass * __cdecl UOnlineBeaconUnitTestNetConnection::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOnlineBeaconUnitTestNetConnection.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UNetConnection::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"OnlineBeaconUnitTestNetConnection",
               &Z_Registration_Info_UClass_UOnlineBeaconUnitTestNetConnection.InnerSingleton,
               StaticRegisterNativesUOnlineBeaconUnitTestNetConnection,0x2020,0x10,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UOnlineBeaconUnitTestNetConnection>,
               InternalVTableHelperCtorCaller<UOnlineBeaconUnitTestNetConnection>,local_res8,
               UIpConnection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOnlineBeaconUnitTestNetConnection.InnerSingleton;
}

// UOnlineBeaconUnitTestNetConnection @ 14ecad400

UOnlineBeaconUnitTestNetConnection * __thiscall
UOnlineBeaconUnitTestNetConnection::UOnlineBeaconUnitTestNetConnection
          (UOnlineBeaconUnitTestNetConnection *this,FVTableHelper *param_1)

{
  UIpConnection::UIpConnection((UIpConnection *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__FExec__;
  return this;
}

// UOnlineBeaconUnitTestNetConnection @ 14ecad440

UOnlineBeaconUnitTestNetConnection * __thiscall
UOnlineBeaconUnitTestNetConnection::UOnlineBeaconUnitTestNetConnection
          (UOnlineBeaconUnitTestNetConnection *this,FObjectInitializer *param_1)

{
  UIpConnection::UIpConnection((UIpConnection *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__FExec__;
  return this;
}

// ~UOnlineBeaconUnitTestNetConnection @ 14ecadb00

void __thiscall
UOnlineBeaconUnitTestNetConnection::~UOnlineBeaconUnitTestNetConnection
          (UOnlineBeaconUnitTestNetConnection *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__FExec__;
  UIpConnection::~UIpConnection((UIpConnection *)this);
  return;
}

// GetPrivateStaticClass @ 14ecbb4f0

UClass * __cdecl UOnlineBeaconUnitTestNetConnection::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOnlineBeaconUnitTestNetConnection.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UNetConnection::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"OnlineBeaconUnitTestNetConnection",
               &Z_Registration_Info_UClass_UOnlineBeaconUnitTestNetConnection.InnerSingleton,
               StaticRegisterNativesUOnlineBeaconUnitTestNetConnection,0x2020,0x10,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UOnlineBeaconUnitTestNetConnection>,
               InternalVTableHelperCtorCaller<UOnlineBeaconUnitTestNetConnection>,local_res8,
               UIpConnection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOnlineBeaconUnitTestNetConnection.InnerSingleton;
}

// IsEditorOnly @ 14ecbd660

bool __thiscall
UOnlineBeaconUnitTestNetConnection::IsEditorOnly(UOnlineBeaconUnitTestNetConnection *this)

{
  return true;
}

// StaticRegisterNativesUOnlineBeaconUnitTestNetConnection @ 14ecca430

void __cdecl
UOnlineBeaconUnitTestNetConnection::StaticRegisterNativesUOnlineBeaconUnitTestNetConnection(void)

{
  return;
}

