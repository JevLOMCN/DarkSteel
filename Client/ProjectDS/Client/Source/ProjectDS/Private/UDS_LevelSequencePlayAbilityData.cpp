// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 8

// StaticClass @ 14b4dcaa0

UClass * __cdecl UDS_LevelSequencePlayAbilityData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_LevelSequencePlayAbilityData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_LevelSequencePlayAbilityData",
               &Z_Registration_Info_UClass_UDS_LevelSequencePlayAbilityData.InnerSingleton,
               StaticRegisterNativesUDS_LevelSequencePlayAbilityData,0x68,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_LevelSequencePlayAbilityData>,
               InternalVTableHelperCtorCaller<UDS_LevelSequencePlayAbilityData>,local_res8,
               UDS_AbilityData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_LevelSequencePlayAbilityData.InnerSingleton;
}

// UDS_LevelSequencePlayAbilityData @ 14b4dfb70

UDS_LevelSequencePlayAbilityData * __thiscall
UDS_LevelSequencePlayAbilityData::UDS_LevelSequencePlayAbilityData
          (UDS_LevelSequencePlayAbilityData *this,FVTableHelper *param_1)

{
  UDS_AbilityData::UDS_AbilityData((UDS_AbilityData *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_LevelSequencePlayAbilityData__6B_;
  this->LevelSequenceTID = 0;
  this->MaxLoopCnt = 0;
  this->IsQuestMode = false;
  return this;
}

// UDS_LevelSequencePlayAbilityData @ 14b4dfba0

UDS_LevelSequencePlayAbilityData * __thiscall
UDS_LevelSequencePlayAbilityData::UDS_LevelSequencePlayAbilityData
          (UDS_LevelSequencePlayAbilityData *this,FObjectInitializer *param_1)

{
  UDS_AbilityData::UDS_AbilityData((UDS_AbilityData *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_LevelSequencePlayAbilityData__6B_;
  this->LevelSequenceTID = 0;
  this->MaxLoopCnt = 0;
  this->IsQuestMode = false;
  return this;
}

// ~UDS_LevelSequencePlayAbilityData @ 14b4e0350

void __thiscall
UDS_LevelSequencePlayAbilityData::~UDS_LevelSequencePlayAbilityData
          (UDS_LevelSequencePlayAbilityData *this)

{
  this->_padding_ = (longlong)&___7UDS_LevelSequencePlayAbilityData__6B_;
  UDS_AbilityData::~UDS_AbilityData((UDS_AbilityData *)this);
  return;
}

// GetPrivateStaticClass @ 14b4e1f10

UClass * __cdecl UDS_LevelSequencePlayAbilityData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_LevelSequencePlayAbilityData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_LevelSequencePlayAbilityData",
               &Z_Registration_Info_UClass_UDS_LevelSequencePlayAbilityData.InnerSingleton,
               StaticRegisterNativesUDS_LevelSequencePlayAbilityData,0x68,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_LevelSequencePlayAbilityData>,
               InternalVTableHelperCtorCaller<UDS_LevelSequencePlayAbilityData>,local_res8,
               UDS_AbilityData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_LevelSequencePlayAbilityData.InnerSingleton;
}

// StaticRegisterNativesUDS_LevelSequencePlayAbilityData @ 14b4e2840

void __cdecl
UDS_LevelSequencePlayAbilityData::StaticRegisterNativesUDS_LevelSequencePlayAbilityData(void)

{
  return;
}

// InitData @ 14b9f7ea0

bool __thiscall
UDS_LevelSequencePlayAbilityData::InitData
          (UDS_LevelSequencePlayAbilityData *this,int param_1,bool param_2)

{
  FDS_ResourceSequenceTableRow *pFVar1;
  
  pFVar1 = FDS_ResourceSequenceTableRow::Get((longlong)param_1,true);
  if (pFVar1 == (FDS_ResourceSequenceTableRow *)0x0) {
    return false;
  }
  this->IsQuestMode = param_2;
  this->LevelSequenceTID = param_1;
  this->MaxLoopCnt = pFVar1->MaxLoopCnt;
  return true;
}

// ResetData @ 14ba18b30

void __thiscall UDS_LevelSequencePlayAbilityData::ResetData(UDS_LevelSequencePlayAbilityData *this)

{
  this->LevelSequenceTID = 0;
  this->MaxLoopCnt = 0;
  return;
}

