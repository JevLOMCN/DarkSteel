// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_CS
// Functions: 6

// StaticClass @ 14a69dcc0

UClass * __cdecl UWN_CS_CharacterSoul::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_CS_CharacterSoul.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_CS",L"WN_CS_CharacterSoul",
               &Z_Registration_Info_UClass_UWN_CS_CharacterSoul.InnerSingleton,
               StaticRegisterNativesUWN_CS_CharacterSoul,0x30,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UWN_CS_CharacterSoul>,
               InternalVTableHelperCtorCaller<UWN_CS_CharacterSoul>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_CS_CharacterSoul.InnerSingleton;
}

// UWN_CS_CharacterSoul @ 14a6a2610

UWN_CS_CharacterSoul * __thiscall
UWN_CS_CharacterSoul::UWN_CS_CharacterSoul(UWN_CS_CharacterSoul *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UWN_CS_CharacterSoul__6B_;
  (this->Component).field0_0x0.DebugPtr = (USkeletalMeshComponent *)0x0;
  return this;
}

// UWN_CS_CharacterSoul @ 14a6a2640

UWN_CS_CharacterSoul * __thiscall
UWN_CS_CharacterSoul::UWN_CS_CharacterSoul(UWN_CS_CharacterSoul *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UWN_CS_CharacterSoul__6B_;
  (this->Component).field0_0x0.DebugPtr = (USkeletalMeshComponent *)0x0;
  return this;
}

// ~UWN_CS_CharacterSoul @ 14a6a2c90

void __thiscall UWN_CS_CharacterSoul::~UWN_CS_CharacterSoul(UWN_CS_CharacterSoul *this)

{
  this->_padding_ = (longlong)&___7UWN_CS_CharacterSoul__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14a6a8bc0

UClass * __cdecl UWN_CS_CharacterSoul::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_CS_CharacterSoul.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_CS",L"WN_CS_CharacterSoul",
               &Z_Registration_Info_UClass_UWN_CS_CharacterSoul.InnerSingleton,
               StaticRegisterNativesUWN_CS_CharacterSoul,0x30,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UWN_CS_CharacterSoul>,
               InternalVTableHelperCtorCaller<UWN_CS_CharacterSoul>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_CS_CharacterSoul.InnerSingleton;
}

// StaticRegisterNativesUWN_CS_CharacterSoul @ 14a6aad40

void __cdecl UWN_CS_CharacterSoul::StaticRegisterNativesUWN_CS_CharacterSoul(void)

{
  return;
}

