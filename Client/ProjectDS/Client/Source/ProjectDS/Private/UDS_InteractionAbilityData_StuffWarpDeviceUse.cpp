// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 7

// StaticClass @ 14b4bb3e0

UClass * __cdecl UDS_InteractionAbilityData_StuffWarpDeviceUse::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_InteractionAbilityData_StuffWarpDeviceUse.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_InteractionAbilityData_StuffWarpDeviceUse",
               &Z_Registration_Info_UClass_UDS_InteractionAbilityData_StuffWarpDeviceUse.
                InnerSingleton,StaticRegisterNativesUDS_InteractionAbilityData_StuffWarpDeviceUse,
               0x68,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_InteractionAbilityData_StuffWarpDeviceUse>,
               InternalVTableHelperCtorCaller<UDS_InteractionAbilityData_StuffWarpDeviceUse>,
               local_res8,UDS_InteractionAbilityData_Base::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_InteractionAbilityData_StuffWarpDeviceUse.InnerSingleton;
}

// UDS_InteractionAbilityData_StuffWarpDeviceUse @ 14b4c0e10

UDS_InteractionAbilityData_StuffWarpDeviceUse * __thiscall
UDS_InteractionAbilityData_StuffWarpDeviceUse::UDS_InteractionAbilityData_StuffWarpDeviceUse
          (UDS_InteractionAbilityData_StuffWarpDeviceUse *this,FVTableHelper *param_1)

{
  UDS_AbilityData::UDS_AbilityData((UDS_AbilityData *)this,param_1);
  *(undefined8 *)&this->field_0x58 = 0;
  *(undefined4 *)&this->field_0x60 = 0;
  *(undefined ***)this = &___7UDS_InteractionAbilityData_StuffWarpDeviceUse__6B_;
  return this;
}

// UDS_InteractionAbilityData_StuffWarpDeviceUse @ 14b4c0e40

UDS_InteractionAbilityData_StuffWarpDeviceUse * __thiscall
UDS_InteractionAbilityData_StuffWarpDeviceUse::UDS_InteractionAbilityData_StuffWarpDeviceUse
          (UDS_InteractionAbilityData_StuffWarpDeviceUse *this,FObjectInitializer *param_1)

{
  UDS_AbilityData::UDS_AbilityData((UDS_AbilityData *)this,param_1);
  *(undefined8 *)&this->field_0x58 = 0;
  *(undefined4 *)&this->field_0x60 = 0;
  *(undefined ***)this = &___7UDS_InteractionAbilityData_StuffWarpDeviceUse__6B_;
  return this;
}

// ~UDS_InteractionAbilityData_StuffWarpDeviceUse @ 14b4c22b0

void __thiscall
UDS_InteractionAbilityData_StuffWarpDeviceUse::~UDS_InteractionAbilityData_StuffWarpDeviceUse
          (UDS_InteractionAbilityData_StuffWarpDeviceUse *this)

{
  *(undefined ***)this = &___7UDS_InteractionAbilityData_Base__6B_;
  UDS_AbilityData::~UDS_AbilityData((UDS_AbilityData *)this);
  return;
}

// GetPrivateStaticClass @ 14b4c4660

UClass * __cdecl UDS_InteractionAbilityData_StuffWarpDeviceUse::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_InteractionAbilityData_StuffWarpDeviceUse.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_InteractionAbilityData_StuffWarpDeviceUse",
               &Z_Registration_Info_UClass_UDS_InteractionAbilityData_StuffWarpDeviceUse.
                InnerSingleton,StaticRegisterNativesUDS_InteractionAbilityData_StuffWarpDeviceUse,
               0x68,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_InteractionAbilityData_StuffWarpDeviceUse>,
               InternalVTableHelperCtorCaller<UDS_InteractionAbilityData_StuffWarpDeviceUse>,
               local_res8,UDS_InteractionAbilityData_Base::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_InteractionAbilityData_StuffWarpDeviceUse.InnerSingleton;
}

// StaticRegisterNativesUDS_InteractionAbilityData_StuffWarpDeviceUse @ 14b4c5630

void __cdecl
UDS_InteractionAbilityData_StuffWarpDeviceUse::
StaticRegisterNativesUDS_InteractionAbilityData_StuffWarpDeviceUse(void)

{
  return;
}

// ResetData @ 14ba18a70

void __thiscall
UDS_InteractionAbilityData_StuffWarpDeviceUse::ResetData
          (UDS_InteractionAbilityData_StuffWarpDeviceUse *this)

{
  *(undefined8 *)&this->field_0x58 = 0;
  *(undefined4 *)&this->field_0x60 = 0;
  return;
}

