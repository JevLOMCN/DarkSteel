// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 7

// StaticClass @ 14b4bcf80

UClass * __cdecl UDS_InteractionAbilityData_NPCLing::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_InteractionAbilityData_NPCLing.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_InteractionAbilityData_NPCLing",
               &Z_Registration_Info_UClass_UDS_InteractionAbilityData_NPCLing.InnerSingleton,
               StaticRegisterNativesUDS_InteractionAbilityData_NPCLing,0x70,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_InteractionAbilityData_NPCLing>,
               InternalVTableHelperCtorCaller<UDS_InteractionAbilityData_NPCLing>,local_res8,
               UDS_InteractionAbilityData_Base::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_InteractionAbilityData_NPCLing.InnerSingleton;
}

// UDS_InteractionAbilityData_NPCLing @ 14b4c0950

UDS_InteractionAbilityData_NPCLing * __thiscall
UDS_InteractionAbilityData_NPCLing::UDS_InteractionAbilityData_NPCLing
          (UDS_InteractionAbilityData_NPCLing *this,FVTableHelper *param_1)

{
  UDS_AbilityData::UDS_AbilityData((UDS_AbilityData *)this,param_1);
  this->NeedSendLingCancelPacket = false;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UDS_InteractionAbilityData_NPCLing__6B_;
  return this;
}

// UDS_InteractionAbilityData_NPCLing @ 14b4c0990

UDS_InteractionAbilityData_NPCLing * __thiscall
UDS_InteractionAbilityData_NPCLing::UDS_InteractionAbilityData_NPCLing
          (UDS_InteractionAbilityData_NPCLing *this,FObjectInitializer *param_1)

{
  UDS_AbilityData::UDS_AbilityData((UDS_AbilityData *)this,param_1);
  this->NeedSendLingCancelPacket = false;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UDS_InteractionAbilityData_NPCLing__6B_;
  return this;
}

// ~UDS_InteractionAbilityData_NPCLing @ 14b4c2140

void __thiscall
UDS_InteractionAbilityData_NPCLing::~UDS_InteractionAbilityData_NPCLing
          (UDS_InteractionAbilityData_NPCLing *this)

{
  this->_padding_ = (longlong)&___7UDS_InteractionAbilityData_Base__6B_;
  UDS_AbilityData::~UDS_AbilityData((UDS_AbilityData *)this);
  return;
}

// GetPrivateStaticClass @ 14b4c4060

UClass * __cdecl UDS_InteractionAbilityData_NPCLing::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_InteractionAbilityData_NPCLing.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_InteractionAbilityData_NPCLing",
               &Z_Registration_Info_UClass_UDS_InteractionAbilityData_NPCLing.InnerSingleton,
               StaticRegisterNativesUDS_InteractionAbilityData_NPCLing,0x70,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_InteractionAbilityData_NPCLing>,
               InternalVTableHelperCtorCaller<UDS_InteractionAbilityData_NPCLing>,local_res8,
               UDS_InteractionAbilityData_Base::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_InteractionAbilityData_NPCLing.InnerSingleton;
}

// StaticRegisterNativesUDS_InteractionAbilityData_NPCLing @ 14b4c55b0

void __cdecl
UDS_InteractionAbilityData_NPCLing::StaticRegisterNativesUDS_InteractionAbilityData_NPCLing(void)

{
  return;
}

// ResetData @ 14ba18960

void __thiscall
UDS_InteractionAbilityData_NPCLing::ResetData(UDS_InteractionAbilityData_NPCLing *this)

{
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->NeedSendLingCancelPacket = false;
  return;
}

