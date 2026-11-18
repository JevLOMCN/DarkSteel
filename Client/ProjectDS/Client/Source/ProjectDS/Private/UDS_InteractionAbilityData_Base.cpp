// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 7

// StaticClass @ 14b4bbcb0

UClass * __cdecl UDS_InteractionAbilityData_Base::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_InteractionAbilityData_Base.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_InteractionAbilityData_Base",
               &Z_Registration_Info_UClass_UDS_InteractionAbilityData_Base.InnerSingleton,
               StaticRegisterNativesUDS_InteractionAbilityData_Base,0x68,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_InteractionAbilityData_Base>,
               InternalVTableHelperCtorCaller<UDS_InteractionAbilityData_Base>,local_res8,
               UDS_AbilityData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_InteractionAbilityData_Base.InnerSingleton;
}

// UDS_InteractionAbilityData_Base @ 14b4c0470

UDS_InteractionAbilityData_Base * __thiscall
UDS_InteractionAbilityData_Base::UDS_InteractionAbilityData_Base
          (UDS_InteractionAbilityData_Base *this,FVTableHelper *param_1)

{
  UDS_AbilityData::UDS_AbilityData((UDS_AbilityData *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_InteractionAbilityData_Base__6B_;
  this->TargetEntityID = 0;
  this->InteractionID = 0;
  return this;
}

// UDS_InteractionAbilityData_Base @ 14b4c04a0

UDS_InteractionAbilityData_Base * __thiscall
UDS_InteractionAbilityData_Base::UDS_InteractionAbilityData_Base
          (UDS_InteractionAbilityData_Base *this,FObjectInitializer *param_1)

{
  UDS_AbilityData::UDS_AbilityData((UDS_AbilityData *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_InteractionAbilityData_Base__6B_;
  this->TargetEntityID = 0;
  this->InteractionID = 0;
  return this;
}

// ~UDS_InteractionAbilityData_Base @ 14b4c1ed0

void __thiscall
UDS_InteractionAbilityData_Base::~UDS_InteractionAbilityData_Base
          (UDS_InteractionAbilityData_Base *this)

{
  this->_padding_ = (longlong)&___7UDS_InteractionAbilityData_Base__6B_;
  UDS_AbilityData::~UDS_AbilityData((UDS_AbilityData *)this);
  return;
}

// GetPrivateStaticClass @ 14b4c3be0

UClass * __cdecl UDS_InteractionAbilityData_Base::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_InteractionAbilityData_Base.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_InteractionAbilityData_Base",
               &Z_Registration_Info_UClass_UDS_InteractionAbilityData_Base.InnerSingleton,
               StaticRegisterNativesUDS_InteractionAbilityData_Base,0x68,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_InteractionAbilityData_Base>,
               InternalVTableHelperCtorCaller<UDS_InteractionAbilityData_Base>,local_res8,
               UDS_AbilityData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_InteractionAbilityData_Base.InnerSingleton;
}

// StaticRegisterNativesUDS_InteractionAbilityData_Base @ 14b4c5550

void __cdecl
UDS_InteractionAbilityData_Base::StaticRegisterNativesUDS_InteractionAbilityData_Base(void)

{
  return;
}

// ResetData @ 14ba18820

void __thiscall UDS_InteractionAbilityData_Base::ResetData(UDS_InteractionAbilityData_Base *this)

{
  this->TargetEntityID = 0;
  this->InteractionID = 0;
  return;
}

