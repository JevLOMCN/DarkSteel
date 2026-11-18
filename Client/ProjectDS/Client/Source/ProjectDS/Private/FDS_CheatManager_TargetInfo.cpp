// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 8

// StaticStruct @ 14b448b10

UScriptStruct * __cdecl FDS_CheatManager_TargetInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_CheatManager_TargetInfo.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_CheatManager_TargetInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDS_CheatManager_TargetInfo,(UObject *)pUVar1,
                         L"DS_CheatManager_TargetInfo");
  }
  return Z_Registration_Info_UScriptStruct_FDS_CheatManager_TargetInfo.OuterSingleton;
}

// FDS_CheatManager_TargetInfo @ 14b44c790

FDS_CheatManager_TargetInfo * __thiscall
FDS_CheatManager_TargetInfo::FDS_CheatManager_TargetInfo(FDS_CheatManager_TargetInfo *this)

{
  ::FString::FString(&this->Str_EntityName,L"EntityName");
  ::FString::FString(&this->Str_EntityID,L"0");
  ::FString::FString(&this->Str_FixedInfo,"");
  ::FString::FString(&this->Str_TickInfo,"");
  *(undefined8 *)&this->NormalAttackList = 0;
  *(undefined8 *)&(this->NormalAttackList).field_0x8 = 0;
  *(undefined8 *)&(this->NormalAttackList).field_0x20 = 0;
  *(undefined4 *)&(this->NormalAttackList).field_0x28 = 0;
  *(undefined4 *)&(this->NormalAttackList).field_0x2c = 0x80;
  *(undefined4 *)&(this->NormalAttackList).field_0x34 = 0;
  *(undefined4 *)&(this->NormalAttackList).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->NormalAttackList).field_0x40 = 0;
  *(undefined4 *)&(this->NormalAttackList).field_0x48 = 0;
  *(undefined8 *)&this->SkillAttackList = 0;
  *(undefined8 *)&(this->SkillAttackList).field_0x8 = 0;
  *(undefined8 *)&(this->SkillAttackList).field_0x20 = 0;
  *(undefined4 *)&(this->SkillAttackList).field_0x28 = 0;
  *(undefined4 *)&(this->SkillAttackList).field_0x2c = 0x80;
  *(undefined4 *)&(this->SkillAttackList).field_0x34 = 0;
  *(undefined4 *)&(this->SkillAttackList).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->SkillAttackList).field_0x40 = 0;
  *(undefined4 *)&(this->SkillAttackList).field_0x48 = 0;
  *(undefined8 *)&this->EventActionSkillList = 0;
  *(undefined8 *)&(this->EventActionSkillList).field_0x8 = 0;
  *(undefined8 *)&(this->EventActionSkillList).field_0x20 = 0;
  *(undefined4 *)&(this->EventActionSkillList).field_0x28 = 0;
  *(undefined4 *)&(this->EventActionSkillList).field_0x2c = 0x80;
  *(undefined4 *)&(this->EventActionSkillList).field_0x34 = 0;
  *(undefined4 *)&(this->EventActionSkillList).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->EventActionSkillList).field_0x40 = 0;
  *(undefined4 *)&(this->EventActionSkillList).field_0x48 = 0;
  this->TargetEntityID = 0;
  return this;
}

// ~FDS_CheatManager_TargetInfo @ 14b44f9e0

void __thiscall
FDS_CheatManager_TargetInfo::~FDS_CheatManager_TargetInfo(FDS_CheatManager_TargetInfo *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined4 *)&(this->EventActionSkillList).field_0x48 = 0;
  pvVar1 = *(void **)&(this->EventActionSkillList).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FDS_CheatManager_SkillInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FDS_CheatManager_SkillInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FDS_CheatManager_SkillInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->EventActionSkillList);
  *(undefined4 *)&(this->SkillAttackList).field_0x48 = 0;
  pvVar1 = *(void **)&(this->SkillAttackList).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FDS_CheatManager_SkillInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FDS_CheatManager_SkillInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FDS_CheatManager_SkillInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SkillAttackList);
  *(undefined4 *)&(this->NormalAttackList).field_0x48 = 0;
  pvVar1 = *(void **)&(this->NormalAttackList).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FDS_CheatManager_SkillInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FDS_CheatManager_SkillInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FDS_CheatManager_SkillInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->NormalAttackList);
  pFVar2 = (this->Str_TickInfo).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Str_FixedInfo).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Str_EntityID).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Str_EntityName).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// ResetInfo @ 14bac9ff0

void __thiscall FDS_CheatManager_TargetInfo::ResetInfo(FDS_CheatManager_TargetInfo *this)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  FString local_28;
  FString local_18;
  
  this->TargetEntityID = 0;
  ::FString::operator=(&this->Str_EntityName,L"EntityName");
  ::FString::operator=(&this->Str_EntityID,L"0");
  ::FString::FString(&local_28,"");
  pFVar1 = &this->Str_FixedInfo;
  if (pFVar1 != &local_28) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
    (this->Str_FixedInfo).Data.ArrayNum = local_28.Data.ArrayNum;
    (this->Str_FixedInfo).Data.ArrayMax = local_28.Data.ArrayMax;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,"");
  pFVar1 = &this->Str_TickInfo;
  if (pFVar1 != &local_18) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
    (this->Str_TickInfo).Data.ArrayNum = local_18.Data.ArrayNum;
    (this->Str_TickInfo).Data.ArrayMax = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  TSet<TTuple<int,FDS_CheatManager_SkillInfo>,TDefaultMapHashableKeyFuncs<int,FDS_CheatManager_SkillInfo,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<int,FDS_CheatManager_SkillInfo>,TDefaultMapHashableKeyFuncs<int,FDS_CheatManager_SkillInfo,0>,FDefaultSetAllocator>
           *)&this->NormalAttackList);
  TSet<TTuple<int,FDS_CheatManager_SkillInfo>,TDefaultMapHashableKeyFuncs<int,FDS_CheatManager_SkillInfo,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<int,FDS_CheatManager_SkillInfo>,TDefaultMapHashableKeyFuncs<int,FDS_CheatManager_SkillInfo,0>,FDefaultSetAllocator>
           *)&this->SkillAttackList);
  TSet<TTuple<int,FDS_CheatManager_SkillInfo>,TDefaultMapHashableKeyFuncs<int,FDS_CheatManager_SkillInfo,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<int,FDS_CheatManager_SkillInfo>,TDefaultMapHashableKeyFuncs<int,FDS_CheatManager_SkillInfo,0>,FDefaultSetAllocator>
           *)&this->EventActionSkillList);
  return;
}

// UpdateFixedInfo @ 14bad80c0

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

void __thiscall FDS_CheatManager_TargetInfo::UpdateFixedInfo(FDS_CheatManager_TargetInfo *this)

{
  FString *pFVar1;
  EDS_EntityType EVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  FDS_EntityBase *pFVar5;
  UObject *pUVar6;
  int iVar7;
  int iVar8;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10;
  FName local_res18;
  undefined1 local_78 [64];
  FString local_38;
  
  if ((this->TargetEntityID != 0) &&
     (pFVar5 = FDS_EntityBase::GetEntityBase(&this->TargetEntityID), pFVar5 != (FDS_EntityBase *)0x0
     )) {
    (**(code **)(pFVar5->_padding_ + 0x150))(pFVar5);
    bVar4 = TWeakObjectPtr<AActor,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<AActor,FWeakObjectPtr> *)&local_res10,(void *)0x0);
    if (!bVar4) {
      UDS_EntityDataSet::GetEntityDataSet((ulong64)&local_res8);
      bVar4 = TWeakObjectPtr<UDS_EntityDataSet,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_EntityDataSet,FWeakObjectPtr> *)&local_res8,(void *)0x0
                        );
      if (!bVar4) {
        pUVar6 = FWeakObjectPtr::Get(&local_res8);
        (**(code **)(*(longlong *)pUVar6 + 0x2d0))(pUVar6);
        ::FString::PrintfImpl((FString *)local_78,L"%s");
        if (this != (FDS_CheatManager_TargetInfo *)local_78) {
          pFVar3 = (this->Str_EntityName).Data.AllocatorInstance.Data;
          if (pFVar3 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar3);
          }
          (this->Str_EntityName).Data.AllocatorInstance.Data =
               (FScriptContainerElement *)local_78._0_8_;
          (this->Str_EntityName).Data.ArrayNum = local_78._8_4_;
          (this->Str_EntityName).Data.ArrayMax = local_78._12_4_;
          local_78._8_4_ = 0;
          local_78._12_4_ = 0;
          local_78._0_8_ = (FScriptContainerElement *)0x0;
        }
        if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_78._0_8_);
        }
        ::FString::PrintfImpl((FString *)(local_78 + 0x10),L"%llu");
        pFVar1 = &this->Str_EntityID;
        if (pFVar1 != (FString *)(local_78 + 0x10)) {
          pFVar3 = (pFVar1->Data).AllocatorInstance.Data;
          if (pFVar3 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar3);
          }
          (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)local_78._16_8_;
          (this->Str_EntityID).Data.ArrayNum = local_78._24_4_;
          (this->Str_EntityID).Data.ArrayMax = local_78._28_4_;
          local_78._24_4_ = 0;
          local_78._28_4_ = 0;
          local_78._16_8_ = (FScriptContainerElement *)0x0;
        }
        if ((FScriptContainerElement *)local_78._16_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_78._16_8_);
        }
        ::FString::PrintfImpl((FString *)(local_78 + 0x20),L"[EntityID] %llu");
        ::FString::AppendChars((FString *)(local_78 + 0x20),L"\r\n",2);
        pFVar1 = &this->Str_FixedInfo;
        iVar7 = local_78._40_4_ + -1;
        if (local_78._40_4_ == 0) {
          iVar7 = 0;
        }
        ::FString::AppendChars(pFVar1,(wchar_t *)local_78._32_8_,iVar7);
        if ((FScriptContainerElement *)local_78._32_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_78._32_8_);
        }
        ::FString::PrintfImpl((FString *)(local_78 + 0x20),L"[TableID] %llu");
        ::FString::AppendChars((FString *)(local_78 + 0x20),L"\r\n",2);
        iVar8 = 0;
        iVar7 = local_78._40_4_ + -1;
        if (local_78._40_4_ == 0) {
          iVar7 = iVar8;
        }
        ::FString::AppendChars(pFVar1,(wchar_t *)local_78._32_8_,iVar7);
        if ((FScriptContainerElement *)local_78._32_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_78._32_8_);
        }
        EVar2 = pFVar5->EntityType;
        ::FString::FString((FString *)(local_78 + 0x20),"EDS_EntityType");
        DS_Util::GetEnumToString
                  ((FString *)(local_78 + 0x30),(FString *)(local_78 + 0x20),(ulonglong)EVar2);
        if ((FScriptContainerElement *)local_78._32_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_78._32_8_);
        }
        ::FString::PrintfImpl((FString *)(local_78 + 0x20),L"[EntityType] %s");
        ::FString::AppendChars((FString *)(local_78 + 0x20),L"\r\n",2);
        iVar7 = local_78._40_4_ + -1;
        if (local_78._40_4_ == 0) {
          iVar7 = iVar8;
        }
        ::FString::AppendChars(pFVar1,(wchar_t *)local_78._32_8_,iVar7);
        if ((FScriptContainerElement *)local_78._32_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_78._32_8_);
        }
        pUVar6 = FWeakObjectPtr::Get(&local_res10);
        local_res18.ComparisonIndex.Value = *(uint *)&pUVar6->field_0x18;
        local_res18.Number = *(uint *)&pUVar6->field_0x1c;
        ::FName::ToString(&local_res18,&local_38);
        pUVar6 = FWeakObjectPtr::Get(&local_res8);
        (**(code **)(*(longlong *)pUVar6 + 0x2d0))(pUVar6);
        ::FString::PrintfImpl((FString *)(local_78 + 0x20),L"[Name] %s (%s)");
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        ::FString::AppendChars((FString *)(local_78 + 0x20),L"\r\n",2);
        iVar7 = local_78._40_4_ + -1;
        if (local_78._40_4_ == 0) {
          iVar7 = iVar8;
        }
        ::FString::AppendChars(pFVar1,(wchar_t *)local_78._32_8_,iVar7);
        if ((FScriptContainerElement *)local_78._32_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_78._32_8_);
        }
        if ((FScriptContainerElement *)local_78._48_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_78._48_8_);
        }
      }
    }
  }
  return;
}

// UpdateInfo @ 14bad8450

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

void __thiscall FDS_CheatManager_TargetInfo::UpdateInfo(FDS_CheatManager_TargetInfo *this)

{
  UpdateFixedInfo(this);
  if (this->TargetEntityID != 0) {
    FDS_EntityBase::GetEntityBase(&this->TargetEntityID);
  }
  UpdateSkillInfo(this);
  return;
}

// UpdateSkillInfo @ 14bad9fe0

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

void __thiscall FDS_CheatManager_TargetInfo::UpdateSkillInfo(FDS_CheatManager_TargetInfo *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FDS_CheatManager_TargetInfo *pFVar5;
  FDS_CheatManager_TargetInfo *pFVar6;
  FDS_EntityBase *pFVar7;
  FDS_NpcBaseTableRow *pFVar8;
  FDS_NpcBattleTableRow *pFVar9;
  FDS_SkillTableRow *pFVar10;
  FString *pFVar11;
  FScriptContainerElement *pFVar12;
  FDS_CheatManager_TargetInfo *local_res8;
  TPairInitializer<int_const_&,FDS_CheatManager_SkillInfo_&> local_res10;
  FString local_e8;
  FScriptContainerElement *local_d8;
  int *local_d0;
  int local_c8 [2];
  FString local_c0;
  FString local_b0;
  undefined1 local_a0;
  int local_98 [2];
  FString local_90;
  FString local_80;
  undefined1 local_70;
  int local_68 [2];
  FString local_60;
  FString local_50;
  undefined1 local_40;
  
  if (((((this->TargetEntityID != 0) &&
        (local_res8 = this, pFVar7 = FDS_EntityBase::GetEntityBase(&this->TargetEntityID),
        pFVar7 != (FDS_EntityBase *)0x0)) && (pFVar7->EntityType == NPC)) &&
      ((pFVar8 = FDS_NpcBaseTableRow::Get(pFVar7->TableID,true),
       pFVar8 != (FDS_NpcBaseTableRow *)0x0 && (0 < pFVar8->ID_NpcBattle)))) &&
     (pFVar9 = FDS_NpcBattleTableRow::Get((longlong)pFVar8->ID_NpcBattle,true),
     pFVar9 != (FDS_NpcBattleTableRow *)0x0)) {
    TSet<TTuple<int,FDS_CheatManager_SkillInfo>,TDefaultMapHashableKeyFuncs<int,FDS_CheatManager_SkillInfo,0>,FDefaultSetAllocator>
    ::Reserve((TSet<TTuple<int,FDS_CheatManager_SkillInfo>,TDefaultMapHashableKeyFuncs<int,FDS_CheatManager_SkillInfo,0>,FDefaultSetAllocator>
               *)&this->NormalAttackList,(pFVar9->ID_NormalAttack).ArrayNum);
    pFVar12 = (pFVar9->ID_NormalAttack).AllocatorInstance.Data;
    iVar2 = (pFVar9->ID_NormalAttack).ArrayNum;
    pFVar1 = pFVar12 + (longlong)iVar2 * 4;
    while( true ) {
      if ((pFVar9->ID_NormalAttack).ArrayNum != iVar2) {
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_res10);
      }
      pFVar5 = local_res8;
      if (pFVar12 == pFVar1) break;
      pFVar10 = FDS_SkillTableRow::Get((longlong)*(int *)pFVar12,true);
      if (pFVar10 != (FDS_SkillTableRow *)0x0) {
        local_98[0] = 0;
        ::FString::FString(&local_90,"");
        ::FString::FString(&local_80,"");
        local_98[0] = *(int *)pFVar12;
        local_70 = 0;
        local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_e8.Data.ArrayNum = 0;
        local_e8.Data.ArrayMax = 0;
        ::FString::AppendInt(&local_e8,local_98[0]);
        if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_90.Data.AllocatorInstance.Data);
        }
        local_90.Data.AllocatorInstance.Data = local_e8.Data.AllocatorInstance.Data;
        local_90.Data.ArrayNum = local_e8.Data.ArrayNum;
        local_90.Data.ArrayMax = local_e8.Data.ArrayMax;
        local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_e8.Data.ArrayNum = 0;
        local_e8.Data.ArrayMax = 0;
        pFVar11 = (FString *)(**(code **)((pFVar10->ID_Name)._padding_ + 8))();
        if (&local_80 != pFVar11) {
          iVar3 = (pFVar11->Data).ArrayNum;
          pFVar4 = (pFVar11->Data).AllocatorInstance.Data;
          local_80.Data.ArrayNum = iVar3;
          if ((iVar3 == 0) && (local_80.Data.ArrayMax == 0)) {
            local_80.Data.ArrayMax = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,iVar3,local_80.Data.ArrayMax,(ForAnyElementType *)&local_80,iVar3,
                       &local_80.Data.ArrayMax);
            if (iVar3 != 0) {
              memcpy(local_80.Data.AllocatorInstance.Data,pFVar4,(longlong)iVar3 * 2);
            }
          }
        }
        local_d0 = local_98;
        local_d8 = pFVar12;
        TSet<TTuple<int,FDS_CheatManager_SkillInfo>,TDefaultMapHashableKeyFuncs<int,FDS_CheatManager_SkillInfo,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<int_const_&,FDS_CheatManager_SkillInfo_&>_>
                  ((TSet<TTuple<int,FDS_CheatManager_SkillInfo>,TDefaultMapHashableKeyFuncs<int,FDS_CheatManager_SkillInfo,0>,FDefaultSetAllocator>
                    *)&this->NormalAttackList,
                   (TPairInitializer<int_const_&,FDS_CheatManager_SkillInfo_&> *)&local_res10.Value,
                   (bool *)&local_d8);
        if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_80.Data.AllocatorInstance.Data);
        }
        if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_90.Data.AllocatorInstance.Data);
        }
      }
      pFVar12 = pFVar12 + 4;
    }
    TSet<TTuple<int,FDS_CheatManager_SkillInfo>,TDefaultMapHashableKeyFuncs<int,FDS_CheatManager_SkillInfo,0>,FDefaultSetAllocator>
    ::Reserve((TSet<TTuple<int,FDS_CheatManager_SkillInfo>,TDefaultMapHashableKeyFuncs<int,FDS_CheatManager_SkillInfo,0>,FDefaultSetAllocator>
               *)&local_res8->SkillAttackList,(pFVar9->ID_SkillAttack).ArrayNum);
    pFVar12 = (pFVar9->ID_SkillAttack).AllocatorInstance.Data;
    iVar2 = (pFVar9->ID_SkillAttack).ArrayNum;
    pFVar1 = pFVar12 + (longlong)iVar2 * 4;
    while( true ) {
      if ((pFVar9->ID_SkillAttack).ArrayNum != iVar2) {
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_res10);
      }
      pFVar6 = local_res8;
      if (pFVar12 == pFVar1) break;
      pFVar10 = FDS_SkillTableRow::Get((longlong)*(int *)pFVar12,true);
      if (pFVar10 != (FDS_SkillTableRow *)0x0) {
        local_68[0] = 0;
        ::FString::FString(&local_60,"");
        ::FString::FString(&local_50,"");
        local_68[0] = *(int *)pFVar12;
        local_40 = 0;
        local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_e8.Data.ArrayNum = 0;
        local_e8.Data.ArrayMax = 0;
        ::FString::AppendInt(&local_e8,local_68[0]);
        if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_60.Data.AllocatorInstance.Data);
        }
        local_60.Data.AllocatorInstance.Data = local_e8.Data.AllocatorInstance.Data;
        local_60.Data.ArrayNum = local_e8.Data.ArrayNum;
        local_60.Data.ArrayMax = local_e8.Data.ArrayMax;
        local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_e8.Data.ArrayNum = 0;
        local_e8.Data.ArrayMax = 0;
        pFVar11 = (FString *)(**(code **)((pFVar10->ID_Name)._padding_ + 8))();
        if (&local_50 != pFVar11) {
          iVar3 = (pFVar11->Data).ArrayNum;
          pFVar4 = (pFVar11->Data).AllocatorInstance.Data;
          local_50.Data.ArrayNum = iVar3;
          if ((iVar3 == 0) && (local_50.Data.ArrayMax == 0)) {
            local_50.Data.ArrayMax = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,iVar3,local_50.Data.ArrayMax,(ForAnyElementType *)&local_50,iVar3,
                       &local_50.Data.ArrayMax);
            if (iVar3 != 0) {
              memcpy(local_50.Data.AllocatorInstance.Data,pFVar4,(longlong)iVar3 * 2);
            }
          }
        }
        local_d0 = local_68;
        local_d8 = pFVar12;
        TSet<TTuple<int,FDS_CheatManager_SkillInfo>,TDefaultMapHashableKeyFuncs<int,FDS_CheatManager_SkillInfo,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<int_const_&,FDS_CheatManager_SkillInfo_&>_>
                  ((TSet<TTuple<int,FDS_CheatManager_SkillInfo>,TDefaultMapHashableKeyFuncs<int,FDS_CheatManager_SkillInfo,0>,FDefaultSetAllocator>
                    *)&pFVar5->SkillAttackList,
                   (TPairInitializer<int_const_&,FDS_CheatManager_SkillInfo_&> *)&local_res10.Value,
                   (bool *)&local_d8);
        if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_50.Data.AllocatorInstance.Data);
        }
        if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_60.Data.AllocatorInstance.Data);
        }
      }
      pFVar12 = pFVar12 + 4;
    }
    TSet<TTuple<int,FDS_CheatManager_SkillInfo>,TDefaultMapHashableKeyFuncs<int,FDS_CheatManager_SkillInfo,0>,FDefaultSetAllocator>
    ::Reserve((TSet<TTuple<int,FDS_CheatManager_SkillInfo>,TDefaultMapHashableKeyFuncs<int,FDS_CheatManager_SkillInfo,0>,FDefaultSetAllocator>
               *)&local_res8->EventActionSkillList,(pFVar9->ID_EventActionSkill).ArrayNum);
    pFVar12 = (pFVar9->ID_EventActionSkill).AllocatorInstance.Data;
    iVar2 = (pFVar9->ID_EventActionSkill).ArrayNum;
    pFVar1 = pFVar12 + (longlong)iVar2 * 4;
    while( true ) {
      if ((pFVar9->ID_EventActionSkill).ArrayNum != iVar2) {
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_res8);
      }
      if (pFVar12 == pFVar1) break;
      pFVar10 = FDS_SkillTableRow::Get((longlong)*(int *)pFVar12,true);
      if (pFVar10 != (FDS_SkillTableRow *)0x0) {
        local_c8[0] = 0;
        ::FString::FString(&local_c0,"");
        ::FString::FString(&local_b0,"");
        local_c8[0] = *(int *)pFVar12;
        local_a0 = 0;
        local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_e8.Data.ArrayNum = 0;
        local_e8.Data.ArrayMax = 0;
        ::FString::AppendInt(&local_e8,local_c8[0]);
        if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c0.Data.AllocatorInstance.Data);
        }
        local_c0.Data.AllocatorInstance.Data = local_e8.Data.AllocatorInstance.Data;
        local_c0.Data.ArrayNum = local_e8.Data.ArrayNum;
        local_c0.Data.ArrayMax = local_e8.Data.ArrayMax;
        local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_e8.Data.ArrayNum = 0;
        local_e8.Data.ArrayMax = 0;
        pFVar11 = (FString *)(**(code **)((pFVar10->ID_Name)._padding_ + 8))();
        if (&local_b0 != pFVar11) {
          iVar3 = (pFVar11->Data).ArrayNum;
          pFVar4 = (pFVar11->Data).AllocatorInstance.Data;
          local_b0.Data.ArrayNum = iVar3;
          if ((iVar3 == 0) && (local_b0.Data.ArrayMax == 0)) {
            local_b0.Data.ArrayMax = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,iVar3,local_b0.Data.ArrayMax,(ForAnyElementType *)&local_b0,iVar3,
                       &local_b0.Data.ArrayMax);
            if (iVar3 != 0) {
              memcpy(local_b0.Data.AllocatorInstance.Data,pFVar4,(longlong)iVar3 * 2);
            }
          }
        }
        local_d0 = local_c8;
        local_a0 = 1;
        local_d8 = pFVar12;
        TSet<TTuple<int,FDS_CheatManager_SkillInfo>,TDefaultMapHashableKeyFuncs<int,FDS_CheatManager_SkillInfo,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<int_const_&,FDS_CheatManager_SkillInfo_&>_>
                  ((TSet<TTuple<int,FDS_CheatManager_SkillInfo>,TDefaultMapHashableKeyFuncs<int,FDS_CheatManager_SkillInfo,0>,FDefaultSetAllocator>
                    *)&pFVar6->EventActionSkillList,&local_res10,(bool *)&local_d8);
        if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b0.Data.AllocatorInstance.Data);
        }
        if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c0.Data.AllocatorInstance.Data);
        }
      }
      pFVar12 = pFVar12 + 4;
    }
  }
  return;
}

// UpdateTickInfo @ 14badaea0

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

void __thiscall
FDS_CheatManager_TargetInfo::UpdateTickInfo(FDS_CheatManager_TargetInfo *this,float *param_1)

{
  UDS_EntityManager *this_00;
  
  if (this->TargetEntityID == 0) {
    return;
  }
  this_00 = UDS_EntityManager::GetInst();
  if (this_00 == (UDS_EntityManager *)0x0) {
    return;
  }
  UDS_EntityManager::FindEntityBase(this_00,this->TargetEntityID);
  return;
}

