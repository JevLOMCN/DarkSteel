// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 7

// StaticClass @ 14b4bce40

UClass * __cdecl UDS_InteractionAbilityData_NPCGimmick::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_InteractionAbilityData_NPCGimmick.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_InteractionAbilityData_NPCGimmick",
               &Z_Registration_Info_UClass_UDS_InteractionAbilityData_NPCGimmick.InnerSingleton,
               StaticRegisterNativesUDS_InteractionAbilityData_NPCGimmick,0x68,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_InteractionAbilityData_NPCGimmick>,
               InternalVTableHelperCtorCaller<UDS_InteractionAbilityData_NPCGimmick>,local_res8,
               UDS_InteractionAbilityData_Base::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_InteractionAbilityData_NPCGimmick.InnerSingleton;
}

// UDS_InteractionAbilityData_NPCGimmick @ 14b4c08f0

UDS_InteractionAbilityData_NPCGimmick * __thiscall
UDS_InteractionAbilityData_NPCGimmick::UDS_InteractionAbilityData_NPCGimmick
          (UDS_InteractionAbilityData_NPCGimmick *this,FVTableHelper *param_1)

{
  UDS_AbilityData::UDS_AbilityData((UDS_AbilityData *)this,param_1);
  *(undefined8 *)&this->field_0x58 = 0;
  *(undefined4 *)&this->field_0x60 = 0;
  *(undefined ***)this = &___7UDS_InteractionAbilityData_NPCGimmick__6B_;
  return this;
}

// UDS_InteractionAbilityData_NPCGimmick @ 14b4c0920

UDS_InteractionAbilityData_NPCGimmick * __thiscall
UDS_InteractionAbilityData_NPCGimmick::UDS_InteractionAbilityData_NPCGimmick
          (UDS_InteractionAbilityData_NPCGimmick *this,FObjectInitializer *param_1)

{
  UDS_AbilityData::UDS_AbilityData((UDS_AbilityData *)this,param_1);
  *(undefined8 *)&this->field_0x58 = 0;
  *(undefined4 *)&this->field_0x60 = 0;
  *(undefined ***)this = &___7UDS_InteractionAbilityData_NPCGimmick__6B_;
  return this;
}

// ~UDS_InteractionAbilityData_NPCGimmick @ 14b4c2120

void __thiscall
UDS_InteractionAbilityData_NPCGimmick::~UDS_InteractionAbilityData_NPCGimmick
          (UDS_InteractionAbilityData_NPCGimmick *this)

{
  *(undefined ***)this = &___7UDS_InteractionAbilityData_Base__6B_;
  UDS_AbilityData::~UDS_AbilityData((UDS_AbilityData *)this);
  return;
}

// GetPrivateStaticClass @ 14b4c3fa0

UClass * __cdecl UDS_InteractionAbilityData_NPCGimmick::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_InteractionAbilityData_NPCGimmick.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_InteractionAbilityData_NPCGimmick",
               &Z_Registration_Info_UClass_UDS_InteractionAbilityData_NPCGimmick.InnerSingleton,
               StaticRegisterNativesUDS_InteractionAbilityData_NPCGimmick,0x68,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_InteractionAbilityData_NPCGimmick>,
               InternalVTableHelperCtorCaller<UDS_InteractionAbilityData_NPCGimmick>,local_res8,
               UDS_InteractionAbilityData_Base::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_InteractionAbilityData_NPCGimmick.InnerSingleton;
}

// StaticRegisterNativesUDS_InteractionAbilityData_NPCGimmick @ 14b4c55a0

void __cdecl
UDS_InteractionAbilityData_NPCGimmick::StaticRegisterNativesUDS_InteractionAbilityData_NPCGimmick
          (void)

{
  return;
}

// ResetData @ 14ba18950

void __thiscall
UDS_InteractionAbilityData_NPCGimmick::ResetData(UDS_InteractionAbilityData_NPCGimmick *this)

{
  *(undefined8 *)&this->field_0x58 = 0;
  *(undefined4 *)&this->field_0x60 = 0;
  return;
}

