// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_CS
// Functions: 6

// StaticClass @ 14a69d270

UClass * __cdecl UWN_CS_OutGame_CharacterWorkspace::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_CS_OutGame_CharacterWorkspace.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_CS",L"WN_CS_OutGame_CharacterWorkspace",
               &Z_Registration_Info_UClass_UWN_CS_OutGame_CharacterWorkspace.InnerSingleton,
               StaticRegisterNativesUWN_CS_OutGame_CharacterWorkspace,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UWN_CS_OutGame_CharacterWorkspace>,
               InternalVTableHelperCtorCaller<UWN_CS_OutGame_CharacterWorkspace>,local_res8,
               UWN_CS_CharacterWorkspace::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_CS_OutGame_CharacterWorkspace.InnerSingleton;
}

// UWN_CS_OutGame_CharacterWorkspace @ 14a6a26f0

UWN_CS_OutGame_CharacterWorkspace * __thiscall
UWN_CS_OutGame_CharacterWorkspace::UWN_CS_OutGame_CharacterWorkspace
          (UWN_CS_OutGame_CharacterWorkspace *this,FVTableHelper *param_1)

{
  UDataAsset::UDataAsset((UDataAsset *)this,param_1);
  this->field_0x40 = 1;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined ***)this = &___7UWN_CS_OutGame_CharacterWorkspace__6B_;
  return this;
}

// UWN_CS_OutGame_CharacterWorkspace @ 14a6a2730

UWN_CS_OutGame_CharacterWorkspace * __thiscall
UWN_CS_OutGame_CharacterWorkspace::UWN_CS_OutGame_CharacterWorkspace
          (UWN_CS_OutGame_CharacterWorkspace *this,FObjectInitializer *param_1)

{
  UDataAsset::UDataAsset((UDataAsset *)this,param_1);
  this->field_0x40 = 1;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined ***)this = &___7UWN_CS_OutGame_CharacterWorkspace__6B_;
  return this;
}

// ~UWN_CS_OutGame_CharacterWorkspace @ 14a6a2cf0

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */

void __thiscall
UWN_CS_OutGame_CharacterWorkspace::~UWN_CS_OutGame_CharacterWorkspace
          (UWN_CS_OutGame_CharacterWorkspace *this)

{
  *(undefined ***)this = &___7UWN_CS_CharacterWorkspace__6B_;
  DestructItems<FWN_CS_CharacterDesc,int>
            (*(FWN_CS_CharacterDesc **)&this->field_0x30,*(int *)&this->field_0x38);
  if (*(void **)&this->field_0x30 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x30);
  }
  UDataAsset::~UDataAsset((UDataAsset *)this);
  return;
}

// GetPrivateStaticClass @ 14a6a8d30

UClass * __cdecl UWN_CS_OutGame_CharacterWorkspace::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_CS_OutGame_CharacterWorkspace.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_CS",L"WN_CS_OutGame_CharacterWorkspace",
               &Z_Registration_Info_UClass_UWN_CS_OutGame_CharacterWorkspace.InnerSingleton,
               StaticRegisterNativesUWN_CS_OutGame_CharacterWorkspace,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UWN_CS_OutGame_CharacterWorkspace>,
               InternalVTableHelperCtorCaller<UWN_CS_OutGame_CharacterWorkspace>,local_res8,
               UWN_CS_CharacterWorkspace::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_CS_OutGame_CharacterWorkspace.InnerSingleton;
}

// StaticRegisterNativesUWN_CS_OutGame_CharacterWorkspace @ 14a6aad60

void __cdecl
UWN_CS_OutGame_CharacterWorkspace::StaticRegisterNativesUWN_CS_OutGame_CharacterWorkspace(void)

{
  return;
}

