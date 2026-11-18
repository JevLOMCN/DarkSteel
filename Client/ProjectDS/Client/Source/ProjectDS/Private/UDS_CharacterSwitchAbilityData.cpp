// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 7

// StaticClass @ 14b440c10

UClass * __cdecl UDS_CharacterSwitchAbilityData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CharacterSwitchAbilityData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CharacterSwitchAbilityData",
               &Z_Registration_Info_UClass_UDS_CharacterSwitchAbilityData.InnerSingleton,
               StaticRegisterNativesUDS_CharacterSwitchAbilityData,0x78,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_CharacterSwitchAbilityData>,
               InternalVTableHelperCtorCaller<UDS_CharacterSwitchAbilityData>,local_res8,
               UDS_AbilityData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CharacterSwitchAbilityData.InnerSingleton;
}

// UDS_CharacterSwitchAbilityData @ 14b4439f0

UDS_CharacterSwitchAbilityData * __thiscall
UDS_CharacterSwitchAbilityData::UDS_CharacterSwitchAbilityData
          (UDS_CharacterSwitchAbilityData *this,FVTableHelper *param_1)

{
  UDS_AbilityData::UDS_AbilityData((UDS_AbilityData *)this,param_1);
  this->bIsNeedRemoveMapping = false;
  this->_padding_ = (longlong)&___7UDS_CharacterSwitchAbilityData__6B_;
  *(undefined8 *)&this->CharacterSwitchCompleteDelegate = 0;
  *(undefined8 *)&(this->CharacterSwitchCompleteDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->CharacterSwitchCompleteDelegate).field_0x10 = 0;
  return this;
}

// UDS_CharacterSwitchAbilityData @ 14b443a30

UDS_CharacterSwitchAbilityData * __thiscall
UDS_CharacterSwitchAbilityData::UDS_CharacterSwitchAbilityData
          (UDS_CharacterSwitchAbilityData *this,FObjectInitializer *param_1)

{
  UDS_AbilityData::UDS_AbilityData((UDS_AbilityData *)this,param_1);
  this->bIsNeedRemoveMapping = false;
  this->_padding_ = (longlong)&___7UDS_CharacterSwitchAbilityData__6B_;
  *(undefined8 *)&this->CharacterSwitchCompleteDelegate = 0;
  *(undefined8 *)&(this->CharacterSwitchCompleteDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->CharacterSwitchCompleteDelegate).field_0x10 = 0;
  return this;
}

// ~UDS_CharacterSwitchAbilityData @ 14b4442b0

void __thiscall
UDS_CharacterSwitchAbilityData::~UDS_CharacterSwitchAbilityData
          (UDS_CharacterSwitchAbilityData *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UDS_CharacterSwitchAbilityData__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->CharacterSwitchCompleteDelegate);
  pvVar1 = *(void **)&(this->CharacterSwitchCompleteDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->CharacterSwitchCompleteDelegate);
  UDS_AbilityData::~UDS_AbilityData((UDS_AbilityData *)this);
  return;
}

// GetPrivateStaticClass @ 14b444fb0

UClass * __cdecl UDS_CharacterSwitchAbilityData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CharacterSwitchAbilityData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CharacterSwitchAbilityData",
               &Z_Registration_Info_UClass_UDS_CharacterSwitchAbilityData.InnerSingleton,
               StaticRegisterNativesUDS_CharacterSwitchAbilityData,0x78,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_CharacterSwitchAbilityData>,
               InternalVTableHelperCtorCaller<UDS_CharacterSwitchAbilityData>,local_res8,
               UDS_AbilityData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CharacterSwitchAbilityData.InnerSingleton;
}

// StaticRegisterNativesUDS_CharacterSwitchAbilityData @ 14b445630

void __cdecl
UDS_CharacterSwitchAbilityData::StaticRegisterNativesUDS_CharacterSwitchAbilityData(void)

{
  return;
}

// ResetData @ 14ba186d0

void __thiscall UDS_CharacterSwitchAbilityData::ResetData(UDS_CharacterSwitchAbilityData *this)

{
  this->bIsNeedRemoveMapping = false;
  return;
}

