// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 7

// StaticClass @ 14b4bd540

UClass * __cdecl UDS_InteractionAbilityData_StuffGather::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_InteractionAbilityData_StuffGather.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_InteractionAbilityData_StuffGather",
               &Z_Registration_Info_UClass_UDS_InteractionAbilityData_StuffGather.InnerSingleton,
               StaticRegisterNativesUDS_InteractionAbilityData_StuffGather,0x78,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_InteractionAbilityData_StuffGather>,
               InternalVTableHelperCtorCaller<UDS_InteractionAbilityData_StuffGather>,local_res8,
               UDS_InteractionAbilityData_Base::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_InteractionAbilityData_StuffGather.InnerSingleton;
}

// UDS_InteractionAbilityData_StuffGather @ 14b4c0bd0

UDS_InteractionAbilityData_StuffGather * __thiscall
UDS_InteractionAbilityData_StuffGather::UDS_InteractionAbilityData_StuffGather
          (UDS_InteractionAbilityData_StuffGather *this,FVTableHelper *param_1)

{
  UDS_AbilityData::UDS_AbilityData((UDS_AbilityData *)this,param_1);
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UDS_InteractionAbilityData_StuffGather__6B_;
  (this->InteractionStateTag).TagName = FGameplayTag::EmptyTag.TagName;
  this->bIsNeedRequestStuffGatherCancel = false;
  return this;
}

// UDS_InteractionAbilityData_StuffGather @ 14b4c0c10

UDS_InteractionAbilityData_StuffGather * __thiscall
UDS_InteractionAbilityData_StuffGather::UDS_InteractionAbilityData_StuffGather
          (UDS_InteractionAbilityData_StuffGather *this,FObjectInitializer *param_1)

{
  UDS_AbilityData::UDS_AbilityData((UDS_AbilityData *)this,param_1);
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UDS_InteractionAbilityData_StuffGather__6B_;
  (this->InteractionStateTag).TagName = FGameplayTag::EmptyTag.TagName;
  this->bIsNeedRequestStuffGatherCancel = false;
  return this;
}

// ~UDS_InteractionAbilityData_StuffGather @ 14b4c2210

void __thiscall
UDS_InteractionAbilityData_StuffGather::~UDS_InteractionAbilityData_StuffGather
          (UDS_InteractionAbilityData_StuffGather *this)

{
  this->_padding_ = (longlong)&___7UDS_InteractionAbilityData_Base__6B_;
  UDS_AbilityData::~UDS_AbilityData((UDS_AbilityData *)this);
  return;
}

// GetPrivateStaticClass @ 14b4c42a0

UClass * __cdecl UDS_InteractionAbilityData_StuffGather::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_InteractionAbilityData_StuffGather.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_InteractionAbilityData_StuffGather",
               &Z_Registration_Info_UClass_UDS_InteractionAbilityData_StuffGather.InnerSingleton,
               StaticRegisterNativesUDS_InteractionAbilityData_StuffGather,0x78,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_InteractionAbilityData_StuffGather>,
               InternalVTableHelperCtorCaller<UDS_InteractionAbilityData_StuffGather>,local_res8,
               UDS_InteractionAbilityData_Base::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_InteractionAbilityData_StuffGather.InnerSingleton;
}

// StaticRegisterNativesUDS_InteractionAbilityData_StuffGather @ 14b4c55e0

void __cdecl
UDS_InteractionAbilityData_StuffGather::StaticRegisterNativesUDS_InteractionAbilityData_StuffGather
          (void)

{
  return;
}

// ResetData @ 14ba189f0

void __thiscall
UDS_InteractionAbilityData_StuffGather::ResetData(UDS_InteractionAbilityData_StuffGather *this)

{
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  (this->InteractionStateTag).TagName = FGameplayTag::EmptyTag.TagName;
  this->bIsNeedRequestStuffGatherCancel = false;
  return;
}

