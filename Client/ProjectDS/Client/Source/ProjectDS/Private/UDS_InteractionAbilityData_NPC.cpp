// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 7

// StaticClass @ 14b4bc9c0

UClass * __cdecl UDS_InteractionAbilityData_NPC::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_InteractionAbilityData_NPC.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_InteractionAbilityData_NPC",
               &Z_Registration_Info_UClass_UDS_InteractionAbilityData_NPC.InnerSingleton,
               StaticRegisterNativesUDS_InteractionAbilityData_NPC,0x68,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_InteractionAbilityData_NPC>,
               InternalVTableHelperCtorCaller<UDS_InteractionAbilityData_NPC>,local_res8,
               UDS_InteractionAbilityData_Base::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_InteractionAbilityData_NPC.InnerSingleton;
}

// UDS_InteractionAbilityData_NPC @ 14b4c0790

UDS_InteractionAbilityData_NPC * __thiscall
UDS_InteractionAbilityData_NPC::UDS_InteractionAbilityData_NPC
          (UDS_InteractionAbilityData_NPC *this,FVTableHelper *param_1)

{
  UDS_AbilityData::UDS_AbilityData((UDS_AbilityData *)this,param_1);
  *(undefined8 *)&this->field_0x58 = 0;
  *(undefined4 *)&this->field_0x60 = 0;
  *(undefined ***)this = &___7UDS_InteractionAbilityData_NPC__6B_;
  return this;
}

// UDS_InteractionAbilityData_NPC @ 14b4c07c0

UDS_InteractionAbilityData_NPC * __thiscall
UDS_InteractionAbilityData_NPC::UDS_InteractionAbilityData_NPC
          (UDS_InteractionAbilityData_NPC *this,FObjectInitializer *param_1)

{
  UDS_AbilityData::UDS_AbilityData((UDS_AbilityData *)this,param_1);
  *(undefined8 *)&this->field_0x58 = 0;
  *(undefined4 *)&this->field_0x60 = 0;
  *(undefined ***)this = &___7UDS_InteractionAbilityData_NPC__6B_;
  return this;
}

// ~UDS_InteractionAbilityData_NPC @ 14b4c2090

void __thiscall
UDS_InteractionAbilityData_NPC::~UDS_InteractionAbilityData_NPC
          (UDS_InteractionAbilityData_NPC *this)

{
  *(undefined ***)this = &___7UDS_InteractionAbilityData_Base__6B_;
  UDS_AbilityData::~UDS_AbilityData((UDS_AbilityData *)this);
  return;
}

// GetPrivateStaticClass @ 14b4c3e20

UClass * __cdecl UDS_InteractionAbilityData_NPC::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_InteractionAbilityData_NPC.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_InteractionAbilityData_NPC",
               &Z_Registration_Info_UClass_UDS_InteractionAbilityData_NPC.InnerSingleton,
               StaticRegisterNativesUDS_InteractionAbilityData_NPC,0x68,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_InteractionAbilityData_NPC>,
               InternalVTableHelperCtorCaller<UDS_InteractionAbilityData_NPC>,local_res8,
               UDS_InteractionAbilityData_Base::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_InteractionAbilityData_NPC.InnerSingleton;
}

// StaticRegisterNativesUDS_InteractionAbilityData_NPC @ 14b4c5580

void __cdecl
UDS_InteractionAbilityData_NPC::StaticRegisterNativesUDS_InteractionAbilityData_NPC(void)

{
  return;
}

// ResetData @ 14ba188c0

void __thiscall UDS_InteractionAbilityData_NPC::ResetData(UDS_InteractionAbilityData_NPC *this)

{
  *(undefined8 *)&this->field_0x58 = 0;
  *(undefined4 *)&this->field_0x60 = 0;
  return;
}

