// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 20

// StaticStruct @ 14b4f3b40

UScriptStruct * __cdecl FDS_MountBaseTableRow::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_MountBaseTableRow.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_MountBaseTableRow.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDS_MountBaseTableRow,(UObject *)pUVar1,
                         L"DS_MountBaseTableRow");
  }
  return Z_Registration_Info_UScriptStruct_FDS_MountBaseTableRow.OuterSingleton;
}

// FDS_MountBaseTableRow @ 14b4f7330

FDS_MountBaseTableRow * __thiscall
FDS_MountBaseTableRow::FDS_MountBaseTableRow(FDS_MountBaseTableRow *this)

{
  undefined8 uVar1;
  
  (this->ID_AttachBuff).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ID_AttachBuff).ArrayNum = 0;
  (this->ID_AttachBuff).ArrayMax = 0;
  (this->ID_AttachCharacterBuff).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ID_AttachCharacterBuff).ArrayNum = 0;
  (this->ID_AttachCharacterBuff).ArrayMax = 0;
  (this->ID_AttachMountBuff).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ID_AttachMountBuff).ArrayNum = 0;
  (this->ID_AttachMountBuff).ArrayMax = 0;
  (this->MountActionType).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MountActionType).ArrayNum = 0;
  (this->MountActionType).ArrayMax = 0;
  (this->MountFoodType).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MountFoodType).ArrayNum = 0;
  (this->MountFoodType).ArrayMax = 0;
  (this->MountFoodGradeType).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MountFoodGradeType).ArrayNum = 0;
  (this->MountFoodGradeType).ArrayMax = 0;
  (this->TamingMountSocketName).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TamingMountSocketName).ArrayNum = 0;
  (this->TamingMountSocketName).ArrayMax = 0;
  (this->CharacterDismountCourseValue).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CharacterDismountCourseValue).ArrayNum = 0;
  (this->CharacterDismountCourseValue).ArrayMax = 0;
  (this->CharacterTamingFailCourseValue).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CharacterTamingFailCourseValue).ArrayNum = 0;
  (this->CharacterTamingFailCourseValue).ArrayMax = 0;
  this->_padding_ = (longlong)&___7FDS_MountBaseTableRow__6B_;
  this->ID = 0;
  this->DataStage = 0;
  this->MountShapeType = Ravanos;
  this->StandardSpeed = 0.0;
  this->StandardSprintSpeed = 0.0;
  this->AirSpeed = 0.0;
  this->AirSprintSpeed = 0.0;
  this->BackMoveSpeed = 0.0;
  this->DashSpeed = 0.0;
  this->DashTime = 0.0;
  this->DashSkill = 0;
  this->AdditionalHeadCount = 0;
  this->IsJump = false;
  this->IsAirSprint = false;
  this->IsGroundSprint = false;
  this->IsWaterSprint = false;
  this->MountRotateAngle = 0.0;
  this->MountHeadRotateConst = 0.0;
  this->TamingGameType = None;
  this->TamingGameTypeValue = 0;
  this->MinThinkTime = 0.0;
  this->MaxThinkTime = 0.0;
  this->MealTime = 0.0;
  this->TamingOffset = 0.0;
  this->TamingMountingTime = 0.0;
  this->MountingTime = 0.0;
  this->DismountingTime = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->MountingLocation).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->MountingLocation).field0_0x0._s_0.Y = (double)uVar1;
  (this->MountingLocation).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->SuccessDismountingTime = 0.0;
  this->FailDismountingTime = 0.0;
  this->LeapHeight = 0.0;
  this->LeapTime = 0.0;
  this->ID_Portrait = 0;
  this->ID_OutGameResourcePreset = 0;
  (this->ID_DefaultName)._padding_ = (longlong)&___7FDS_StringWorldID__6B_;
  (this->ID_DefaultName).ID = 0;
  this->ID_GradeType = None;
  this->CategoryType = None;
  this->RequiredSkill = None;
  this->RequiredSkillValue = 0;
  this->MountBodyType = None;
  (this->MountClimateType).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MountClimateType).ArrayNum = 0;
  (this->MountClimateType).ArrayMax = 0;
  (this->MountFlooringType).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MountFlooringType).ArrayNum = 0;
  (this->MountFlooringType).ArrayMax = 0;
  this->SeaterType = None;
  (this->MountFoodItemType).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MountFoodItemType).ArrayNum = 0;
  (this->MountFoodItemType).ArrayMax = 0;
  (this->StatusType).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StatusType).ArrayNum = 0;
  (this->StatusType).ArrayMax = 0;
  (this->StatusValue).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StatusValue).ArrayNum = 0;
  (this->StatusValue).ArrayMax = 0;
  this->InventorySlot = 0;
  (this->ID_RestoreItem).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ID_RestoreItem).ArrayNum = 0;
  (this->ID_RestoreItem).ArrayMax = 0;
  (this->RestoreItemCount).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RestoreItemCount).ArrayNum = 0;
  (this->RestoreItemCount).ArrayMax = 0;
  this->ID_NpcBase = 0;
  return this;
}

// ~FDS_MountBaseTableRow @ 14b4f8330

void __thiscall FDS_MountBaseTableRow::~FDS_MountBaseTableRow(FDS_MountBaseTableRow *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->RestoreItemCount).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ID_RestoreItem).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->StatusValue).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->StatusType).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MountFoodItemType).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MountFlooringType).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MountClimateType).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CharacterTamingFailCourseValue).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CharacterDismountCourseValue).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->TamingMountSocketName).AllocatorInstance.Data,
             (this->TamingMountSocketName).ArrayNum);
  pFVar1 = (this->TamingMountSocketName).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MountFoodGradeType).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MountFoodType).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MountActionType).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ID_AttachMountBuff).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ID_AttachCharacterBuff).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ID_AttachBuff).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// operator= @ 14b4f8770

FDS_MountBaseTableRow * __thiscall
FDS_MountBaseTableRow::operator=(FDS_MountBaseTableRow *this,FDS_MountBaseTableRow *param_1)

{
  TArray<EDS_MountActionType,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<EDS_MountFoodType,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<EDS_MountFoodGradeType,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<EDS_ClimateType,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<EDS_FlooringType,TSizedDefaultAllocator<32>_> *pTVar7;
  TArray<EDS_ItemType,TSizedDefaultAllocator<32>_> *pTVar8;
  TArray<EDS_StatusType,TSizedDefaultAllocator<32>_> *pTVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  double dVar12;
  
  this->ID = param_1->ID;
  this->DataStage = param_1->DataStage;
  this->MountShapeType = param_1->MountShapeType;
  this->StandardSpeed = param_1->StandardSpeed;
  this->StandardSprintSpeed = param_1->StandardSprintSpeed;
  this->AirSpeed = param_1->AirSpeed;
  this->AirSprintSpeed = param_1->AirSprintSpeed;
  this->BackMoveSpeed = param_1->BackMoveSpeed;
  this->DashSpeed = param_1->DashSpeed;
  this->DashTime = param_1->DashTime;
  this->DashSkill = param_1->DashSkill;
  TArray<int,TSizedDefaultAllocator<32>_>::operator=(&this->ID_AttachBuff,&param_1->ID_AttachBuff);
  TArray<int,TSizedDefaultAllocator<32>_>::operator=
            (&this->ID_AttachCharacterBuff,&param_1->ID_AttachCharacterBuff);
  TArray<int,TSizedDefaultAllocator<32>_>::operator=
            (&this->ID_AttachMountBuff,&param_1->ID_AttachMountBuff);
  pTVar1 = &this->MountActionType;
  if (pTVar1 != &param_1->MountActionType) {
    iVar10 = (param_1->MountActionType).ArrayNum;
    piVar2 = &(this->MountActionType).ArrayMax;
    pFVar11 = (param_1->MountActionType).AllocatorInstance.Data;
    (this->MountActionType).ArrayNum = iVar10;
    if ((iVar10 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,iVar10,*piVar2,&pTVar1->AllocatorInstance,iVar10,piVar2);
      if (iVar10 != 0) {
        memcpy((pTVar1->AllocatorInstance).Data,pFVar11,(longlong)iVar10);
      }
    }
  }
  this->AdditionalHeadCount = param_1->AdditionalHeadCount;
  pTVar3 = &this->MountFoodType;
  this->IsJump = param_1->IsJump;
  this->IsAirSprint = param_1->IsAirSprint;
  this->IsGroundSprint = param_1->IsGroundSprint;
  this->IsWaterSprint = param_1->IsWaterSprint;
  this->MountRotateAngle = param_1->MountRotateAngle;
  this->MountHeadRotateConst = param_1->MountHeadRotateConst;
  this->TamingGameType = param_1->TamingGameType;
  this->TamingGameTypeValue = param_1->TamingGameTypeValue;
  this->MinThinkTime = param_1->MinThinkTime;
  this->MaxThinkTime = param_1->MaxThinkTime;
  this->MealTime = param_1->MealTime;
  if (pTVar3 != &param_1->MountFoodType) {
    iVar10 = (param_1->MountFoodType).ArrayNum;
    piVar2 = &(this->MountFoodType).ArrayMax;
    pFVar11 = (param_1->MountFoodType).AllocatorInstance.Data;
    (this->MountFoodType).ArrayNum = iVar10;
    if ((iVar10 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,iVar10,*piVar2,&pTVar3->AllocatorInstance,iVar10,piVar2);
      if (iVar10 != 0) {
        memcpy((pTVar3->AllocatorInstance).Data,pFVar11,(longlong)iVar10);
      }
    }
  }
  pTVar4 = &this->MountFoodGradeType;
  if (pTVar4 != &param_1->MountFoodGradeType) {
    iVar10 = (param_1->MountFoodGradeType).ArrayNum;
    piVar2 = &(this->MountFoodGradeType).ArrayMax;
    pFVar11 = (param_1->MountFoodGradeType).AllocatorInstance.Data;
    (this->MountFoodGradeType).ArrayNum = iVar10;
    if ((iVar10 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,iVar10,*piVar2,&pTVar4->AllocatorInstance,iVar10,piVar2);
      if (iVar10 != 0) {
        memcpy((pTVar4->AllocatorInstance).Data,pFVar11,(longlong)iVar10);
      }
    }
  }
  pTVar5 = &this->TamingMountSocketName;
  this->TamingOffset = param_1->TamingOffset;
  if (pTVar5 != &param_1->TamingMountSocketName) {
    DestructItems<FString,int>
              ((FString *)(pTVar5->AllocatorInstance).Data,(this->TamingMountSocketName).ArrayNum);
    iVar10 = (param_1->TamingMountSocketName).ArrayNum;
    piVar2 = &(this->TamingMountSocketName).ArrayMax;
    pFVar11 = (param_1->TamingMountSocketName).AllocatorInstance.Data;
    (this->TamingMountSocketName).ArrayNum = iVar10;
    if ((iVar10 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar10,*piVar2,&pTVar5->AllocatorInstance,iVar10,piVar2);
      ConstructItems<FString,FString,int>
                ((pTVar5->AllocatorInstance).Data,(FString *)pFVar11,iVar10);
    }
  }
  TArray<float,TSizedDefaultAllocator<32>_>::operator=
            (&this->CharacterDismountCourseValue,&param_1->CharacterDismountCourseValue);
  TArray<float,TSizedDefaultAllocator<32>_>::operator=
            (&this->CharacterTamingFailCourseValue,&param_1->CharacterTamingFailCourseValue);
  this->TamingMountingTime = param_1->TamingMountingTime;
  pTVar6 = &this->MountClimateType;
  this->MountingTime = param_1->MountingTime;
  this->DismountingTime = param_1->DismountingTime;
  dVar12 = (param_1->MountingLocation).field0_0x0._s_0.Y;
  (this->MountingLocation).field0_0x0._s_0.X = (param_1->MountingLocation).field0_0x0._s_0.X;
  (this->MountingLocation).field0_0x0._s_0.Y = dVar12;
  (this->MountingLocation).field0_0x0._s_0.Z = (param_1->MountingLocation).field0_0x0._s_0.Z;
  this->SuccessDismountingTime = param_1->SuccessDismountingTime;
  this->FailDismountingTime = param_1->FailDismountingTime;
  this->LeapHeight = param_1->LeapHeight;
  this->LeapTime = param_1->LeapTime;
  this->ID_Portrait = param_1->ID_Portrait;
  this->ID_OutGameResourcePreset = param_1->ID_OutGameResourcePreset;
  (this->ID_DefaultName).ID = (param_1->ID_DefaultName).ID;
  this->ID_GradeType = param_1->ID_GradeType;
  this->CategoryType = param_1->CategoryType;
  this->RequiredSkill = param_1->RequiredSkill;
  this->RequiredSkillValue = param_1->RequiredSkillValue;
  this->MountBodyType = param_1->MountBodyType;
  if (pTVar6 != &param_1->MountClimateType) {
    iVar10 = (param_1->MountClimateType).ArrayNum;
    piVar2 = &(this->MountClimateType).ArrayMax;
    pFVar11 = (param_1->MountClimateType).AllocatorInstance.Data;
    (this->MountClimateType).ArrayNum = iVar10;
    if ((iVar10 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,iVar10,*piVar2,&pTVar6->AllocatorInstance,iVar10,piVar2);
      if (iVar10 != 0) {
        memcpy((pTVar6->AllocatorInstance).Data,pFVar11,(longlong)iVar10);
      }
    }
  }
  pTVar7 = &this->MountFlooringType;
  if (pTVar7 != &param_1->MountFlooringType) {
    iVar10 = (param_1->MountFlooringType).ArrayNum;
    piVar2 = &(this->MountFlooringType).ArrayMax;
    pFVar11 = (param_1->MountFlooringType).AllocatorInstance.Data;
    (this->MountFlooringType).ArrayNum = iVar10;
    if ((iVar10 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,iVar10,*piVar2,&pTVar7->AllocatorInstance,iVar10,piVar2);
      if (iVar10 != 0) {
        memcpy((pTVar7->AllocatorInstance).Data,pFVar11,(longlong)iVar10);
      }
    }
  }
  pTVar8 = &this->MountFoodItemType;
  this->SeaterType = param_1->SeaterType;
  if (pTVar8 != &param_1->MountFoodItemType) {
    iVar10 = (param_1->MountFoodItemType).ArrayNum;
    piVar2 = &(this->MountFoodItemType).ArrayMax;
    pFVar11 = (param_1->MountFoodItemType).AllocatorInstance.Data;
    (this->MountFoodItemType).ArrayNum = iVar10;
    if ((iVar10 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar10,*piVar2,&pTVar8->AllocatorInstance,iVar10,piVar2);
      if (iVar10 != 0) {
        memcpy((pTVar8->AllocatorInstance).Data,pFVar11,(longlong)iVar10 << 2);
      }
    }
  }
  pTVar9 = &this->StatusType;
  if (pTVar9 != &param_1->StatusType) {
    iVar10 = (param_1->StatusType).ArrayNum;
    piVar2 = &(this->StatusType).ArrayMax;
    pFVar11 = (param_1->StatusType).AllocatorInstance.Data;
    (this->StatusType).ArrayNum = iVar10;
    if ((iVar10 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar10,*piVar2,&pTVar9->AllocatorInstance,iVar10,piVar2);
      if (iVar10 != 0) {
        memcpy((pTVar9->AllocatorInstance).Data,pFVar11,(longlong)iVar10 << 2);
      }
    }
  }
  TArray<int,TSizedDefaultAllocator<32>_>::operator=(&this->StatusValue,&param_1->StatusValue);
  this->InventorySlot = param_1->InventorySlot;
  TArray<int,TSizedDefaultAllocator<32>_>::operator=(&this->ID_RestoreItem,&param_1->ID_RestoreItem)
  ;
  TArray<int,TSizedDefaultAllocator<32>_>::operator=
            (&this->RestoreItemCount,&param_1->RestoreItemCount);
  this->ID_NpcBase = param_1->ID_NpcBase;
  return this;
}

// DashSkillTable @ 14b93d320

FDS_SkillTableRow * __thiscall FDS_MountBaseTableRow::DashSkillTable(FDS_MountBaseTableRow *this)

{
  FDS_SkillTableRow *pFVar1;
  
  pFVar1 = FDS_SkillTableRow::GetRef((longlong)this->DashSkill,true);
  return pFVar1;
}

// Get @ 14b93fba0

FDS_MountBaseTableRow * __cdecl FDS_MountBaseTableRow::Get(long64 param_1,bool param_2)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  UDS_TableManager *this;
  FDS_MountBaseTableRow *pFVar4;
  UDataTable *this_00;
  FString *pFVar5;
  FName *pFVar6;
  UScriptStruct *pUVar7;
  wchar_t *pwVar8;
  ForAnyElementType FVar9;
  FName local_res18;
  FName local_res20;
  FString local_38;
  FString local_28;
  
  this = UDS_TableManager::GetInst();
  if (this == (UDS_TableManager *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1204754892216860650>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_MountBaseTableRow.cpp"
                       ,0x16,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FDS_MountBaseTableRow *)(*pcVar2)();
      return pFVar4;
    }
  }
  else {
    this_00 = UDS_TableManager::GetDataTable(this,MountBase);
    if (this_00 != (UDataTable *)0x0) {
      local_res18 = (FName)this_00->_padding_;
      ::FName::ToString(&local_res18,&local_38);
      pFVar5 = DS_Util::FromInt64(&local_28,param_1);
      if ((pFVar5->Data).ArrayNum == 0) {
        pwVar8 = L"";
      }
      else {
        pwVar8 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
      }
      pFVar6 = ::FName::FName(&local_res20,pwVar8);
      FVar9.Data = (FScriptContainerElement *)L"";
      if (local_38.Data.ArrayNum != 0) {
        FVar9.Data = local_38.Data.AllocatorInstance.Data;
      }
      FVar1 = *pFVar6;
      pUVar7 = StaticStruct();
      pFVar4 = (FDS_MountBaseTableRow *)
               UDataTable::FindRowInternal(this_00,pUVar7,FVar1,(wchar_t *)FVar9.Data,param_2);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      return pFVar4;
    }
  }
  return (FDS_MountBaseTableRow *)0x0;
}

// GetAll @ 14b941db0

TArray<FDS_MountBaseTableRow_const_*,TSizedDefaultAllocator<32>_> * __cdecl
FDS_MountBaseTableRow::GetAll
          (TArray<FDS_MountBaseTableRow_const_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__
          )

{
  code *pcVar1;
  bool bVar2;
  UDS_TableManager *this;
  TArray<FDS_MountBaseTableRow_const_*,TSizedDefaultAllocator<32>_> *pTVar3;
  UDataTable *this_00;
  ForAnyElementType FVar4;
  FName local_res8;
  FString local_18;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  this = UDS_TableManager::GetInst();
  if (this == (UDS_TableManager *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1204754892216860621>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_MountBaseTableRow.cpp"
                       ,0x33,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArray<FDS_MountBaseTableRow_const_*,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  else {
    this_00 = UDS_TableManager::GetDataTable(this,MountBase);
    if (this_00 != (UDataTable *)0x0) {
      local_res8 = (FName)this_00->_padding_;
      ::FName::ToString(&local_res8,&local_18);
      FVar4.Data = (FScriptContainerElement *)L"";
      if (local_18.Data.ArrayNum != 0) {
        FVar4.Data = local_18.Data.AllocatorInstance.Data;
      }
      UDataTable::GetAllRows<FDS_MountBaseTableRow_const_>
                (this_00,(wchar_t *)FVar4.Data,__return_storage_ptr__);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  return __return_storage_ptr__;
}

// GetRef @ 14b944b50

FDS_MountBaseTableRow * __cdecl FDS_MountBaseTableRow::GetRef(long64 param_1,bool param_2)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  UDS_TableManager *this;
  FDS_MountBaseTableRow *pFVar4;
  UDataTable *this_00;
  FString *pFVar5;
  FName *pFVar6;
  UScriptStruct *pUVar7;
  wchar_t *pwVar8;
  ForAnyElementType FVar9;
  FName local_res8;
  FName local_res18 [2];
  FString local_38;
  FString local_28;
  
  if (param_1 != 0) {
    this = UDS_TableManager::GetInst();
    if (this == (UDS_TableManager *)0x0) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_1204754892216860650>,true,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_MountBaseTableRow.cpp"
                         ,0x16,"false");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FDS_MountBaseTableRow *)(*pcVar2)();
        return pFVar4;
      }
    }
    else {
      this_00 = UDS_TableManager::GetDataTable(this,MountBase);
      if (this_00 != (UDataTable *)0x0) {
        local_res8 = (FName)this_00->_padding_;
        ::FName::ToString(&local_res8,&local_38);
        pFVar5 = DS_Util::FromInt64(&local_28,param_1);
        if ((pFVar5->Data).ArrayNum == 0) {
          pwVar8 = L"";
        }
        else {
          pwVar8 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
        }
        pFVar6 = ::FName::FName(local_res18,pwVar8);
        FVar9.Data = (FScriptContainerElement *)L"";
        if (local_38.Data.ArrayNum != 0) {
          FVar9.Data = local_38.Data.AllocatorInstance.Data;
        }
        FVar1 = *pFVar6;
        pUVar7 = StaticStruct();
        pFVar4 = (FDS_MountBaseTableRow *)
                 UDataTable::FindRowInternal(this_00,pUVar7,FVar1,(wchar_t *)FVar9.Data,param_2);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        if (pFVar4 == (FDS_MountBaseTableRow *)0x0) {
          pFVar4 = &DefaultObject;
        }
        return pFVar4;
      }
    }
  }
  return &DefaultObject;
}

// ID_AttachBuffTables @ 14b945160

TArray<FDS_BuffBaseTableRow_const_*,TSizedDefaultAllocator<32>_> * __thiscall
FDS_MountBaseTableRow::ID_AttachBuffTables
          (FDS_MountBaseTableRow *this,
          TArray<FDS_BuffBaseTableRow_const_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  ForAnyElementType FVar7;
  undefined1 local_res10 [8];
  TArray<FDS_BuffBaseTableRow_const_*,TSizedDefaultAllocator<32>_> local_38;
  
  FDS_BuffBaseTableRow::GetAll(&local_38);
  iVar4 = local_38.ArrayNum;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar1 = local_38.AllocatorInstance.Data + (longlong)local_38.ArrayNum * 8;
  FVar7.Data = local_38.AllocatorInstance.Data;
  do {
    while( true ) {
      if (local_38.ArrayNum != iVar4) {
        `TCheckedPointerIterator<FDS_BuffBaseTableRow_const_*,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res10);
      }
      if (FVar7.Data == pFVar1) {
        if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.AllocatorInstance.Data);
        }
        return __return_storage_ptr__;
      }
      pFVar6 = (this->ID_AttachBuff).AllocatorInstance.Data;
      lVar3 = *(longlong *)FVar7.Data;
      pFVar2 = pFVar6 + (longlong)(this->ID_AttachBuff).ArrayNum * 4;
      if (pFVar6 != pFVar2) break;
LAB_14b94521c:
      FVar7.Data = FVar7.Data + 8;
    }
    do {
      if (*(int *)pFVar6 == *(int *)(lVar3 + 8)) {
        iVar5 = __return_storage_ptr__->ArrayNum;
        if (iVar5 == __return_storage_ptr__->ArrayMax) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar5 + 1;
        *(longlong *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 8) =
             lVar3;
        goto LAB_14b94521c;
      }
      pFVar6 = pFVar6 + 4;
    } while (pFVar6 != pFVar2);
    FVar7.Data = FVar7.Data + 8;
  } while( true );
}

// ID_AttachCharacterBuffTables @ 14b945260

TArray<FDS_BuffBaseTableRow_const_*,TSizedDefaultAllocator<32>_> * __thiscall
FDS_MountBaseTableRow::ID_AttachCharacterBuffTables
          (FDS_MountBaseTableRow *this,
          TArray<FDS_BuffBaseTableRow_const_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  ForAnyElementType FVar7;
  undefined1 local_res10 [8];
  TArray<FDS_BuffBaseTableRow_const_*,TSizedDefaultAllocator<32>_> local_38;
  
  FDS_BuffBaseTableRow::GetAll(&local_38);
  iVar4 = local_38.ArrayNum;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar1 = local_38.AllocatorInstance.Data + (longlong)local_38.ArrayNum * 8;
  FVar7.Data = local_38.AllocatorInstance.Data;
  do {
    while( true ) {
      if (local_38.ArrayNum != iVar4) {
        `TCheckedPointerIterator<FDS_BuffBaseTableRow_const_*,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res10);
      }
      if (FVar7.Data == pFVar1) {
        if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.AllocatorInstance.Data);
        }
        return __return_storage_ptr__;
      }
      pFVar6 = (this->ID_AttachCharacterBuff).AllocatorInstance.Data;
      lVar3 = *(longlong *)FVar7.Data;
      pFVar2 = pFVar6 + (longlong)(this->ID_AttachCharacterBuff).ArrayNum * 4;
      if (pFVar6 != pFVar2) break;
LAB_14b94531c:
      FVar7.Data = FVar7.Data + 8;
    }
    do {
      if (*(int *)pFVar6 == *(int *)(lVar3 + 8)) {
        iVar5 = __return_storage_ptr__->ArrayNum;
        if (iVar5 == __return_storage_ptr__->ArrayMax) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar5 + 1;
        *(longlong *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 8) =
             lVar3;
        goto LAB_14b94531c;
      }
      pFVar6 = pFVar6 + 4;
    } while (pFVar6 != pFVar2);
    FVar7.Data = FVar7.Data + 8;
  } while( true );
}

// ID_AttachMountBuffTables @ 14b945360

TArray<FDS_BuffBaseTableRow_const_*,TSizedDefaultAllocator<32>_> * __thiscall
FDS_MountBaseTableRow::ID_AttachMountBuffTables
          (FDS_MountBaseTableRow *this,
          TArray<FDS_BuffBaseTableRow_const_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  ForAnyElementType FVar7;
  undefined1 local_res10 [8];
  TArray<FDS_BuffBaseTableRow_const_*,TSizedDefaultAllocator<32>_> local_38;
  
  FDS_BuffBaseTableRow::GetAll(&local_38);
  iVar4 = local_38.ArrayNum;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar1 = local_38.AllocatorInstance.Data + (longlong)local_38.ArrayNum * 8;
  FVar7.Data = local_38.AllocatorInstance.Data;
  do {
    while( true ) {
      if (local_38.ArrayNum != iVar4) {
        `TCheckedPointerIterator<FDS_BuffBaseTableRow_const_*,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res10);
      }
      if (FVar7.Data == pFVar1) {
        if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.AllocatorInstance.Data);
        }
        return __return_storage_ptr__;
      }
      pFVar6 = (this->ID_AttachMountBuff).AllocatorInstance.Data;
      lVar3 = *(longlong *)FVar7.Data;
      pFVar2 = pFVar6 + (longlong)(this->ID_AttachMountBuff).ArrayNum * 4;
      if (pFVar6 != pFVar2) break;
LAB_14b94541c:
      FVar7.Data = FVar7.Data + 8;
    }
    do {
      if (*(int *)pFVar6 == *(int *)(lVar3 + 8)) {
        iVar5 = __return_storage_ptr__->ArrayNum;
        if (iVar5 == __return_storage_ptr__->ArrayMax) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar5 + 1;
        *(longlong *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 8) =
             lVar3;
        goto LAB_14b94541c;
      }
      pFVar6 = pFVar6 + 4;
    } while (pFVar6 != pFVar2);
    FVar7.Data = FVar7.Data + 8;
  } while( true );
}

// ID_DefaultNameTable @ 14b945560

FDS_StringWorldTableRow * __thiscall
FDS_MountBaseTableRow::ID_DefaultNameTable(FDS_MountBaseTableRow *this)

{
  FDS_StringWorldTableRow *pFVar1;
  
  pFVar1 = FDS_StringWorldTableRow::GetRef((this->ID_DefaultName).ID,true);
  return pFVar1;
}

// ID_NpcBaseTable @ 14b946660

FDS_NpcBaseTableRow * __thiscall FDS_MountBaseTableRow::ID_NpcBaseTable(FDS_MountBaseTableRow *this)

{
  FDS_NpcBaseTableRow *pFVar1;
  
  pFVar1 = FDS_NpcBaseTableRow::GetRef((longlong)this->ID_NpcBase,true);
  return pFVar1;
}

// ID_OutGameResourcePresetTable @ 14b946780

FDS_ResourcePresetTableRow * __thiscall
FDS_MountBaseTableRow::ID_OutGameResourcePresetTable(FDS_MountBaseTableRow *this)

{
  FDS_ResourcePresetTableRow *pFVar1;
  
  pFVar1 = FDS_ResourcePresetTableRow::GetRef((longlong)this->ID_OutGameResourcePreset,true);
  return pFVar1;
}

// ID_PortraitTable @ 14b9467a0

FDS_ResourceIconTableRow * __thiscall
FDS_MountBaseTableRow::ID_PortraitTable(FDS_MountBaseTableRow *this)

{
  FDS_ResourceIconTableRow *pFVar1;
  
  pFVar1 = FDS_ResourceIconTableRow::GetRef((longlong)this->ID_Portrait,true);
  return pFVar1;
}

// ID_RestoreItemTables @ 14b9467e0

TArray<FDS_ItemBaseTableRow_const_*,TSizedDefaultAllocator<32>_> * __thiscall
FDS_MountBaseTableRow::ID_RestoreItemTables
          (FDS_MountBaseTableRow *this,
          TArray<FDS_ItemBaseTableRow_const_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  ForAnyElementType FVar7;
  undefined1 local_res10 [8];
  TArray<FDS_ItemBaseTableRow_const_*,TSizedDefaultAllocator<32>_> local_38;
  
  FDS_ItemBaseTableRow::GetAll(&local_38);
  iVar4 = local_38.ArrayNum;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar1 = local_38.AllocatorInstance.Data + (longlong)local_38.ArrayNum * 8;
  FVar7.Data = local_38.AllocatorInstance.Data;
  do {
    while( true ) {
      if (local_38.ArrayNum != iVar4) {
        `TCheckedPointerIterator<FDS_ItemBaseTableRow_const_*,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res10);
      }
      if (FVar7.Data == pFVar1) {
        if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.AllocatorInstance.Data);
        }
        return __return_storage_ptr__;
      }
      pFVar6 = (this->ID_RestoreItem).AllocatorInstance.Data;
      lVar3 = *(longlong *)FVar7.Data;
      pFVar2 = pFVar6 + (longlong)(this->ID_RestoreItem).ArrayNum * 4;
      if (pFVar6 != pFVar2) break;
LAB_14b94689f:
      FVar7.Data = FVar7.Data + 8;
    }
    do {
      if (*(int *)pFVar6 == *(int *)(lVar3 + 8)) {
        iVar5 = __return_storage_ptr__->ArrayNum;
        if (iVar5 == __return_storage_ptr__->ArrayMax) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar5 + 1;
        *(longlong *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 8) =
             lVar3;
        goto LAB_14b94689f;
      }
      pFVar6 = pFVar6 + 4;
    } while (pFVar6 != pFVar2);
    FVar7.Data = FVar7.Data + 8;
  } while( true );
}

// IsValid @ 14b946f10

bool __thiscall FDS_MountBaseTableRow::IsValid(FDS_MountBaseTableRow *this)

{
  return this != &DefaultObject;
}

// GetRefByEntityID @ 14b9b2930

FDS_MountBaseTableRow * __cdecl
FDS_MountBaseTableRow::GetRefByEntityID(ulong64 param_1,bool param_2)

{
  bool bVar1;
  int iVar2;
  UDS_NPCMountData *this;
  FDS_MountBaseTableRow *pFVar3;
  FWeakObjectPtr local_res18 [2];
  
  UDS_NPCMountData::GetData((ulong64)local_res18);
  bVar1 = TWeakObjectPtr<UDS_NPCMountData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_NPCMountData,FWeakObjectPtr> *)local_res18,(void *)0x0);
  if (bVar1) {
    return &DefaultObject;
  }
  this = (UDS_NPCMountData *)FWeakObjectPtr::Get(local_res18);
  iVar2 = UDS_NPCMountData::GetMountID(this);
  pFVar3 = GetRef((longlong)iVar2,true);
  return pFVar3;
}

// GetRefByMountNPC @ 14b9b2c80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */

FDS_MountBaseTableRow * __cdecl FDS_MountBaseTableRow::GetRefByMountNPC(ulong64 param_1)

{
  int iVar1;
  bool bVar2;
  FDS_EntityBase *this;
  FWeakObjectPtr *this_00;
  UObject *pUVar3;
  UClass *pUVar4;
  ADS_NPC *this_01;
  FDS_NpcBaseTableRow *this_02;
  FDS_MountBaseTableRow *pFVar5;
  ulong64 local_res8;
  FWeakObjectPtr local_res10;
  UObject *local_res18;
  undefined1 local_res20 [8];
  
  local_res8 = param_1;
  this = FDS_EntityBase::GetEntityBase(&local_res8);
  if (this == (FDS_EntityBase *)0x0) {
    return &DefaultObject;
  }
  bVar2 = FDS_EntityBase::IsMountNPC(this);
  if (!bVar2) {
    return &DefaultObject;
  }
  this_00 = (FWeakObjectPtr *)(**(code **)(this->_padding_ + 0x150))(this,local_res20);
  pUVar3 = FWeakObjectPtr::Get(this_00);
  if (pUVar3 != (UObject *)0x0) {
    pUVar4 = Z_Construct_UClass_ADS_NPC_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) goto LAB_14b9b2cfa;
  }
  pUVar3 = (UObject *)0x0;
LAB_14b9b2cfa:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  local_res18 = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res18);
  bVar2 = TWeakObjectPtr<ADS_NPC,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<ADS_NPC,FWeakObjectPtr> *)&local_res10,(void *)0x0);
  if (bVar2) {
    return &DefaultObject;
  }
  this_01 = (ADS_NPC *)FWeakObjectPtr::Get(&local_res10);
  this_02 = ADS_NPC::GetNpcBaseTable(this_01);
  pFVar5 = FDS_NpcBaseTableRow::ID_MountBaseTable(this_02);
  return pFVar5;
}

// GetRefByTamingNPC @ 14b9b2e60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */

FDS_MountBaseTableRow * __cdecl FDS_MountBaseTableRow::GetRefByTamingNPC(ulong64 param_1)

{
  int iVar1;
  bool bVar2;
  FDS_EntityBase *this;
  FWeakObjectPtr *this_00;
  UObject *pUVar3;
  UClass *pUVar4;
  ADS_NPC *this_01;
  FDS_NpcBaseTableRow *this_02;
  FDS_MountBaseTableRow *pFVar5;
  ulong64 local_res8;
  FWeakObjectPtr local_res10;
  UObject *local_res18;
  undefined1 local_res20 [8];
  
  local_res8 = param_1;
  this = FDS_EntityBase::GetEntityBase(&local_res8);
  if (this == (FDS_EntityBase *)0x0) {
    return &DefaultObject;
  }
  bVar2 = FDS_EntityBase::IsTaming(this);
  if (!bVar2) {
    return &DefaultObject;
  }
  this_00 = (FWeakObjectPtr *)(**(code **)(this->_padding_ + 0x150))(this,local_res20);
  pUVar3 = FWeakObjectPtr::Get(this_00);
  if (pUVar3 != (UObject *)0x0) {
    pUVar4 = Z_Construct_UClass_ADS_NPC_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) goto LAB_14b9b2eda;
  }
  pUVar3 = (UObject *)0x0;
LAB_14b9b2eda:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  local_res18 = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res18);
  bVar2 = TWeakObjectPtr<ADS_NPC,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<ADS_NPC,FWeakObjectPtr> *)&local_res10,(void *)0x0);
  if (bVar2) {
    return &DefaultObject;
  }
  this_01 = (ADS_NPC *)FWeakObjectPtr::Get(&local_res10);
  this_02 = ADS_NPC::GetNpcBaseTable(this_01);
  pFVar5 = FDS_NpcBaseTableRow::ID_MountBaseTable(this_02);
  return pFVar5;
}

