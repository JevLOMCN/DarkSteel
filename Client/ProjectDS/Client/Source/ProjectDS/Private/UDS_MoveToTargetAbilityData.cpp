// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 9

// StaticClass @ 14b4fd110

UClass * __cdecl UDS_MoveToTargetAbilityData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_MoveToTargetAbilityData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_MoveToTargetAbilityData",
               &Z_Registration_Info_UClass_UDS_MoveToTargetAbilityData.InnerSingleton,
               StaticRegisterNativesUDS_MoveToTargetAbilityData,0x68,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_MoveToTargetAbilityData>,
               InternalVTableHelperCtorCaller<UDS_MoveToTargetAbilityData>,local_res8,
               UDS_AbilityData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_MoveToTargetAbilityData.InnerSingleton;
}

// UDS_MoveToTargetAbilityData @ 14b501620

UDS_MoveToTargetAbilityData * __thiscall
UDS_MoveToTargetAbilityData::UDS_MoveToTargetAbilityData
          (UDS_MoveToTargetAbilityData *this,FVTableHelper *param_1)

{
  UDS_AbilityData::UDS_AbilityData((UDS_AbilityData *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_MoveToTargetAbilityData__6B_;
  this->TargetEntityID = 0;
  this->ArrivalDistance = 0.0;
  this->SearchHeight = 0.0;
  return this;
}

// ~UDS_MoveToTargetAbilityData @ 14b502820

void __thiscall
UDS_MoveToTargetAbilityData::~UDS_MoveToTargetAbilityData(UDS_MoveToTargetAbilityData *this)

{
  this->_padding_ = (longlong)&___7UDS_MoveToTargetAbilityData__6B_;
  UDS_AbilityData::~UDS_AbilityData((UDS_AbilityData *)this);
  return;
}

// GetPrivateStaticClass @ 14b504c60

UClass * __cdecl UDS_MoveToTargetAbilityData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_MoveToTargetAbilityData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_MoveToTargetAbilityData",
               &Z_Registration_Info_UClass_UDS_MoveToTargetAbilityData.InnerSingleton,
               StaticRegisterNativesUDS_MoveToTargetAbilityData,0x68,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_MoveToTargetAbilityData>,
               InternalVTableHelperCtorCaller<UDS_MoveToTargetAbilityData>,local_res8,
               UDS_AbilityData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_MoveToTargetAbilityData.InnerSingleton;
}

// StaticRegisterNativesUDS_MoveToTargetAbilityData @ 14b505ba0

void __cdecl UDS_MoveToTargetAbilityData::StaticRegisterNativesUDS_MoveToTargetAbilityData(void)

{
  return;
}

// UDS_MoveToTargetAbilityData @ 14b9d80d0

UDS_MoveToTargetAbilityData * __thiscall
UDS_MoveToTargetAbilityData::UDS_MoveToTargetAbilityData
          (UDS_MoveToTargetAbilityData *this,FObjectInitializer *param_1)

{
  UDS_AbilityData::UDS_AbilityData((UDS_AbilityData *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_MoveToTargetAbilityData__6B_;
  this->TargetEntityID = 0;
  this->ArrivalDistance = 0.0;
  this->SearchHeight = 0.0;
  return this;
}

// ResetData @ 14ba18ba0

void __thiscall UDS_MoveToTargetAbilityData::ResetData(UDS_MoveToTargetAbilityData *this)

{
  this->TargetEntityID = 0;
  this->ArrivalDistance = 0.0;
  return;
}

// SetMoveToTargetDataByInteraction @ 14ba1d3b0

void __thiscall
UDS_MoveToTargetAbilityData::SetMoveToTargetDataByInteraction
          (UDS_MoveToTargetAbilityData *this,ulong64 param_1,float param_2)

{
  this->ArrivalDistance = param_2;
  this->TargetEntityID = param_1;
  return;
}

// SetMoveToTargetDataBySkill @ 14ba1d3c0

void __thiscall
UDS_MoveToTargetAbilityData::SetMoveToTargetDataBySkill
          (UDS_MoveToTargetAbilityData *this,ulong64 param_1,FDS_SkillTableRow *param_2)

{
  if (param_2 != (FDS_SkillTableRow *)0x0) {
    this->TargetEntityID = param_1;
    this->ArrivalDistance = (float)param_2->TargetDistanceMax;
    this->SearchHeight = (float)param_2->TargetHeight;
  }
  return;
}

