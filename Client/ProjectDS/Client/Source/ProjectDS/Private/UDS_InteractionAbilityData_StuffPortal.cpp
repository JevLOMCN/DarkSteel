// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 7

// StaticClass @ 14b4bae70

UClass * __cdecl UDS_InteractionAbilityData_StuffPortal::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_InteractionAbilityData_StuffPortal.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_InteractionAbilityData_StuffPortal",
               &Z_Registration_Info_UClass_UDS_InteractionAbilityData_StuffPortal.InnerSingleton,
               StaticRegisterNativesUDS_InteractionAbilityData_StuffPortal,0x68,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_InteractionAbilityData_StuffPortal>,
               InternalVTableHelperCtorCaller<UDS_InteractionAbilityData_StuffPortal>,local_res8,
               UDS_InteractionAbilityData_Base::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_InteractionAbilityData_StuffPortal.InnerSingleton;
}

// UDS_InteractionAbilityData_StuffPortal @ 14b4c0cb0

UDS_InteractionAbilityData_StuffPortal * __thiscall
UDS_InteractionAbilityData_StuffPortal::UDS_InteractionAbilityData_StuffPortal
          (UDS_InteractionAbilityData_StuffPortal *this,FVTableHelper *param_1)

{
  UDS_AbilityData::UDS_AbilityData((UDS_AbilityData *)this,param_1);
  *(undefined8 *)&this->field_0x58 = 0;
  *(undefined4 *)&this->field_0x60 = 0;
  *(undefined ***)this = &___7UDS_InteractionAbilityData_StuffPortal__6B_;
  return this;
}

// UDS_InteractionAbilityData_StuffPortal @ 14b4c0ce0

UDS_InteractionAbilityData_StuffPortal * __thiscall
UDS_InteractionAbilityData_StuffPortal::UDS_InteractionAbilityData_StuffPortal
          (UDS_InteractionAbilityData_StuffPortal *this,FObjectInitializer *param_1)

{
  UDS_AbilityData::UDS_AbilityData((UDS_AbilityData *)this,param_1);
  *(undefined8 *)&this->field_0x58 = 0;
  *(undefined4 *)&this->field_0x60 = 0;
  *(undefined ***)this = &___7UDS_InteractionAbilityData_StuffPortal__6B_;
  return this;
}

// ~UDS_InteractionAbilityData_StuffPortal @ 14b4c2250

void __thiscall
UDS_InteractionAbilityData_StuffPortal::~UDS_InteractionAbilityData_StuffPortal
          (UDS_InteractionAbilityData_StuffPortal *this)

{
  *(undefined ***)this = &___7UDS_InteractionAbilityData_Base__6B_;
  UDS_AbilityData::~UDS_AbilityData((UDS_AbilityData *)this);
  return;
}

// GetPrivateStaticClass @ 14b4c4420

UClass * __cdecl UDS_InteractionAbilityData_StuffPortal::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_InteractionAbilityData_StuffPortal.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_InteractionAbilityData_StuffPortal",
               &Z_Registration_Info_UClass_UDS_InteractionAbilityData_StuffPortal.InnerSingleton,
               StaticRegisterNativesUDS_InteractionAbilityData_StuffPortal,0x68,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_InteractionAbilityData_StuffPortal>,
               InternalVTableHelperCtorCaller<UDS_InteractionAbilityData_StuffPortal>,local_res8,
               UDS_InteractionAbilityData_Base::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_InteractionAbilityData_StuffPortal.InnerSingleton;
}

// StaticRegisterNativesUDS_InteractionAbilityData_StuffPortal @ 14b4c5600

void __cdecl
UDS_InteractionAbilityData_StuffPortal::StaticRegisterNativesUDS_InteractionAbilityData_StuffPortal
          (void)

{
  return;
}

// ResetData @ 14ba18a20

void __thiscall
UDS_InteractionAbilityData_StuffPortal::ResetData(UDS_InteractionAbilityData_StuffPortal *this)

{
  *(undefined8 *)&this->field_0x58 = 0;
  *(undefined4 *)&this->field_0x60 = 0;
  return;
}

