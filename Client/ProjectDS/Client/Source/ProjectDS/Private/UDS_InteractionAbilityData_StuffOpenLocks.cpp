// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 7

// StaticClass @ 14b4bad70

UClass * __cdecl UDS_InteractionAbilityData_StuffOpenLocks::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_InteractionAbilityData_StuffOpenLocks.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_InteractionAbilityData_StuffOpenLocks",
               &Z_Registration_Info_UClass_UDS_InteractionAbilityData_StuffOpenLocks.InnerSingleton,
               StaticRegisterNativesUDS_InteractionAbilityData_StuffOpenLocks,0x68,8,CLASS_Intrinsic
               ,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_InteractionAbilityData_StuffOpenLocks>,
               InternalVTableHelperCtorCaller<UDS_InteractionAbilityData_StuffOpenLocks>,local_res8,
               UDS_InteractionAbilityData_Base::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_InteractionAbilityData_StuffOpenLocks.InnerSingleton;
}

// UDS_InteractionAbilityData_StuffOpenLocks @ 14b4c0c50

UDS_InteractionAbilityData_StuffOpenLocks * __thiscall
UDS_InteractionAbilityData_StuffOpenLocks::UDS_InteractionAbilityData_StuffOpenLocks
          (UDS_InteractionAbilityData_StuffOpenLocks *this,FVTableHelper *param_1)

{
  UDS_AbilityData::UDS_AbilityData((UDS_AbilityData *)this,param_1);
  *(undefined8 *)&this->field_0x58 = 0;
  *(undefined4 *)&this->field_0x60 = 0;
  *(undefined ***)this = &___7UDS_InteractionAbilityData_StuffOpenLocks__6B_;
  return this;
}

// UDS_InteractionAbilityData_StuffOpenLocks @ 14b4c0c80

UDS_InteractionAbilityData_StuffOpenLocks * __thiscall
UDS_InteractionAbilityData_StuffOpenLocks::UDS_InteractionAbilityData_StuffOpenLocks
          (UDS_InteractionAbilityData_StuffOpenLocks *this,FObjectInitializer *param_1)

{
  UDS_AbilityData::UDS_AbilityData((UDS_AbilityData *)this,param_1);
  *(undefined8 *)&this->field_0x58 = 0;
  *(undefined4 *)&this->field_0x60 = 0;
  *(undefined ***)this = &___7UDS_InteractionAbilityData_StuffOpenLocks__6B_;
  return this;
}

// ~UDS_InteractionAbilityData_StuffOpenLocks @ 14b4c2230

void __thiscall
UDS_InteractionAbilityData_StuffOpenLocks::~UDS_InteractionAbilityData_StuffOpenLocks
          (UDS_InteractionAbilityData_StuffOpenLocks *this)

{
  *(undefined ***)this = &___7UDS_InteractionAbilityData_Base__6B_;
  UDS_AbilityData::~UDS_AbilityData((UDS_AbilityData *)this);
  return;
}

// GetPrivateStaticClass @ 14b4c4360

UClass * __cdecl UDS_InteractionAbilityData_StuffOpenLocks::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_InteractionAbilityData_StuffOpenLocks.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_InteractionAbilityData_StuffOpenLocks",
               &Z_Registration_Info_UClass_UDS_InteractionAbilityData_StuffOpenLocks.InnerSingleton,
               StaticRegisterNativesUDS_InteractionAbilityData_StuffOpenLocks,0x68,8,CLASS_Intrinsic
               ,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_InteractionAbilityData_StuffOpenLocks>,
               InternalVTableHelperCtorCaller<UDS_InteractionAbilityData_StuffOpenLocks>,local_res8,
               UDS_InteractionAbilityData_Base::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_InteractionAbilityData_StuffOpenLocks.InnerSingleton;
}

// StaticRegisterNativesUDS_InteractionAbilityData_StuffOpenLocks @ 14b4c55f0

void __cdecl
UDS_InteractionAbilityData_StuffOpenLocks::
StaticRegisterNativesUDS_InteractionAbilityData_StuffOpenLocks(void)

{
  return;
}

// ResetData @ 14ba18a10

void __thiscall
UDS_InteractionAbilityData_StuffOpenLocks::ResetData
          (UDS_InteractionAbilityData_StuffOpenLocks *this)

{
  *(undefined8 *)&this->field_0x58 = 0;
  *(undefined4 *)&this->field_0x60 = 0;
  return;
}

