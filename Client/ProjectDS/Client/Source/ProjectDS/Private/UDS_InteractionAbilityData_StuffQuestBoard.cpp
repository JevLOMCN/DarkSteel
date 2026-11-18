// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 7

// StaticClass @ 14b4baff0

UClass * __cdecl UDS_InteractionAbilityData_StuffQuestBoard::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_InteractionAbilityData_StuffQuestBoard.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_InteractionAbilityData_StuffQuestBoard",
               &Z_Registration_Info_UClass_UDS_InteractionAbilityData_StuffQuestBoard.InnerSingleton
               ,StaticRegisterNativesUDS_InteractionAbilityData_StuffQuestBoard,0x70,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_InteractionAbilityData_StuffQuestBoard>,
               InternalVTableHelperCtorCaller<UDS_InteractionAbilityData_StuffQuestBoard>,local_res8
               ,UDS_InteractionAbilityData_Base::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_InteractionAbilityData_StuffQuestBoard.InnerSingleton;
}

// UDS_InteractionAbilityData_StuffQuestBoard @ 14b4c0d10

UDS_InteractionAbilityData_StuffQuestBoard * __thiscall
UDS_InteractionAbilityData_StuffQuestBoard::UDS_InteractionAbilityData_StuffQuestBoard
          (UDS_InteractionAbilityData_StuffQuestBoard *this,FVTableHelper *param_1)

{
  UDS_AbilityData::UDS_AbilityData((UDS_AbilityData *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_InteractionAbilityData_StuffQuestBoard__6B_;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->QuestDailySuggestTableID = 0;
  return this;
}

// UDS_InteractionAbilityData_StuffQuestBoard @ 14b4c0d50

UDS_InteractionAbilityData_StuffQuestBoard * __thiscall
UDS_InteractionAbilityData_StuffQuestBoard::UDS_InteractionAbilityData_StuffQuestBoard
          (UDS_InteractionAbilityData_StuffQuestBoard *this,FObjectInitializer *param_1)

{
  UDS_AbilityData::UDS_AbilityData((UDS_AbilityData *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_InteractionAbilityData_StuffQuestBoard__6B_;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->QuestDailySuggestTableID = 0;
  return this;
}

// ~UDS_InteractionAbilityData_StuffQuestBoard @ 14b4c2270

void __thiscall
UDS_InteractionAbilityData_StuffQuestBoard::~UDS_InteractionAbilityData_StuffQuestBoard
          (UDS_InteractionAbilityData_StuffQuestBoard *this)

{
  this->_padding_ = (longlong)&___7UDS_InteractionAbilityData_Base__6B_;
  UDS_AbilityData::~UDS_AbilityData((UDS_AbilityData *)this);
  return;
}

// GetPrivateStaticClass @ 14b4c44e0

UClass * __cdecl UDS_InteractionAbilityData_StuffQuestBoard::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_InteractionAbilityData_StuffQuestBoard.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_InteractionAbilityData_StuffQuestBoard",
               &Z_Registration_Info_UClass_UDS_InteractionAbilityData_StuffQuestBoard.InnerSingleton
               ,StaticRegisterNativesUDS_InteractionAbilityData_StuffQuestBoard,0x70,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_InteractionAbilityData_StuffQuestBoard>,
               InternalVTableHelperCtorCaller<UDS_InteractionAbilityData_StuffQuestBoard>,local_res8
               ,UDS_InteractionAbilityData_Base::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_InteractionAbilityData_StuffQuestBoard.InnerSingleton;
}

// StaticRegisterNativesUDS_InteractionAbilityData_StuffQuestBoard @ 14b4c5610

void __cdecl
UDS_InteractionAbilityData_StuffQuestBoard::
StaticRegisterNativesUDS_InteractionAbilityData_StuffQuestBoard(void)

{
  return;
}

// ResetData @ 14ba18a30

void __thiscall
UDS_InteractionAbilityData_StuffQuestBoard::ResetData
          (UDS_InteractionAbilityData_StuffQuestBoard *this)

{
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->QuestDailySuggestTableID = 0;
  return;
}

