// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 24

// SetChangedVisibility_WrapperImpl @ 14b675230

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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

void __cdecl UDS_VM_Interaction::SetChangedVisibility_WrapperImpl(void *param_1,void *param_2)

{
  byte bVar1;
  code *pcVar2;
  FName FVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  FDS_EntityBase *pFVar9;
  UDS_LogManager *pUVar10;
  FDS_InteractionTableRow *this;
  FDS_NpcBaseTableRow *this_00;
  UDS_PlayerData *pUVar11;
  FDS_PlayerSkillBaseTableRow *pFVar12;
  FDS_PlayerSkillNeedItemTableRow *pFVar13;
  FDS_StuffBaseTableRow *this_01;
  UEnum *pUVar14;
  FDS_ItemBaseTableRow *pFVar15;
  ForAnyElementType FVar16;
  FName *pFVar17;
  undefined1 auStackY_4a8 [32];
  EDS_PlayerSkillType aEStack_468 [8];
  byte *pbStack_460;
  undefined8 uStack_458;
  TArray<int,TSizedDefaultAllocator<32>_> TStack_450;
  FWeakObjectPtr FStack_440;
  FDS_StringBaseID FStack_438;
  FName FStack_428;
  int iStack_420;
  FName FStack_418;
  int iStack_410;
  FName FStack_408;
  int iStack_400;
  FName FStack_3f8;
  int iStack_3f0;
  FName FStack_3e8;
  int iStack_3e0;
  FName FStack_3d8;
  int iStack_3d0;
  FName FStack_3c8;
  int iStack_3c0;
  FName FStack_3b8;
  int iStack_3b0;
  FName FStack_3a8;
  int iStack_3a0;
  FName FStack_398;
  int iStack_390;
  FName FStack_388;
  int iStack_380;
  FName FStack_378;
  int iStack_370;
  FDS_Text FStack_368;
  FDS_Text FStack_318;
  FDS_PlayerSkillTargetInfo FStack_2c8;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_168;
  ulonglong uStack_48;
  
  if (*(char *)param_2 != '\x04') {
    return;
  }
  uStack_48 = __security_cookie.value ^ (ulonglong)auStackY_4a8;
  pFVar9 = FDS_EntityBase::GetEntityBase((ulong64 *)((longlong)param_1 + 0x218));
  if (pFVar9 == (FDS_EntityBase *)0x0) {
    pUVar10 = UDS_LogManager::GetInst();
    if (pUVar10 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar10 = UDS_LogManager::GetInst();
    TStack_288._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&TStack_288,"UDS_VM_Interaction::Refresh",0x1b,Yes);
    UDS_LogManager::PrintLog(pUVar10,1,Error,TStack_288.Ptr,0x82,L"targetEntity is nullptr.");
    if ((void *)TStack_288._padding_ == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)TStack_288._padding_);
    return;
  }
  UDS_PlayerData::GetMainPlayerData();
  bVar5 = FWeakObjectPtr::IsValid(&FStack_440);
  if (!bVar5) {
    return;
  }
  this = FDS_InteractionTableRow::GetRef((longlong)*(int *)((longlong)param_1 + 0x220),true);
  bVar5 = FDS_InteractionTableRow::IsValid(this);
  iVar4 = FFieldNotificationClassDescriptor::ActionText.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::ActionText.FieldName;
  if (!bVar5) {
    pUVar10 = UDS_LogManager::GetInst();
    if (pUVar10 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar10 = UDS_LogManager::GetInst();
    TStack_168._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&TStack_168,"UDS_VM_Interaction::Refresh",0x1b,Yes);
    UDS_LogManager::PrintLog(pUVar10,1,Error,TStack_168.Ptr,0x8f,L"interactionTable is invalid. %d")
    ;
    FVar16.Data = (FScriptContainerElement *)TStack_168._padding_;
    goto LAB_14be46a81;
  }
  FStack_368.StringTableID = 0;
  FStack_368.StringEnumTableNameID.ComparisonIndex.Value = 0;
  FStack_368.StringEnumTableNameID.Number = 0;
  FStack_368.DateTime.Ticks = 0;
  FStack_368.TimeSpan.Ticks = 0;
  FStack_368.TimeExpressionType = None;
  FStack_368.IsExpression = false;
  FStack_368.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_368.UniqueString.Data.ArrayNum = 0;
  FStack_368.UniqueString.Data.ArrayMax = 0;
  FStack_368.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_368.FormatArgs.ArrayNum = 0;
  FStack_368.FormatArgs.ArrayMax = 0;
  FStack_368.StringTableType = None;
  FDS_Text::SetTextFromStringID(&FStack_368,&this->ID_Name);
  FDS_Text::operator=((FDS_Text *)((longlong)param_1 + 0xf0),&FStack_368);
  FStack_428 = FVar3;
  iStack_420 = iVar4;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong)param_1 + 0x28,&FStack_428);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)FStack_368.FormatArgs.AllocatorInstance.Data,
             FStack_368.FormatArgs.ArrayNum);
  if ((FDS_TextFormatArg *)FStack_368.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0)
  {
    FMemory::Free(FStack_368.FormatArgs.AllocatorInstance.Data);
  }
  if (FStack_368.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_368.UniqueString.Data.AllocatorInstance.Data);
  }
  FStack_2c8.EntityID = 0;
  FStack_2c8.bIsStuff = false;
  FStack_2c8.Position.field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  FStack_2c8.Position.field0_0x0._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  bVar7 = false;
  FStack_2c8.TableID = 0;
  FStack_2c8.ZoneID = 0;
  bVar5 = false;
  FStack_2c8.Position.field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  FStack_2c8.EndTime = 0.0;
  FStack_438._padding_ = (longlong)&___7FDS_StringBaseID__6B_;
  FStack_438.ID = 0;
  TStack_450.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TStack_450.ArrayNum = 0;
  TStack_450.ArrayMax = 0;
  pbStack_460 = (byte *)0x0;
  uStack_458 = 0;
  if (pFVar9->EntityType == NPC) {
    this_00 = FDS_NpcBaseTableRow::GetRef(pFVar9->TableID,true);
    bVar6 = FDS_NpcBaseTableRow::IsValid(this_00);
    if ((bVar6) && (bVar6 = FDS_NpcBaseTableRow::HasPlayerSkill(this_00,6), bVar6)) {
      pUVar11 = (UDS_PlayerData *)FWeakObjectPtr::Get(&FStack_440);
      aEStack_468[0] = Ling;
      bVar7 = UDS_PlayerData::GetPlayerSkillTargetInfo
                        (pUVar11,aEStack_468,(ulong64 *)((longlong)param_1 + 0x218),&FStack_2c8);
      bVar5 = true;
    }
    pFVar12 = FDS_PlayerSkillBaseTableRow::GetRef(6,true);
    FStack_438.ID = (pFVar12->ID_SkillName).ID;
    pFVar13 = FDS_PlayerSkillNeedItemTableRow::GetRefByNpcLingData
                        (*(long64 *)((longlong)param_1 + 0x218));
    if ((pFVar13->ID_ReqItem).ArrayNum == 0) {
      TArray<int,TSizedDefaultAllocator<32>_>::operator=(&TStack_450,&pFVar13->ID_ReqItem);
      TArray<enum_EDS_TicketType,TSizedDefaultAllocator<32>_>::operator=
                (&pbStack_460,&pFVar13->ReqTicketType);
    }
LAB_14be466ea:
    if ((bVar5 == true) && (bVar7 == true)) {
      *(double *)((longlong)param_1 + 0x210) = FStack_2c8.EndTime;
      iVar4 = FFieldNotificationClassDescriptor::PlayerSkillText.BitNumber;
      FVar3 = FFieldNotificationClassDescriptor::PlayerSkillText.FieldName;
      FStack_318.DateTime.Ticks = 0;
      FStack_318.TimeSpan.Ticks = 0;
      FStack_318.StringTableType = None;
      FStack_318.StringTableID = 0;
      FStack_318.StringEnumTableNameID.ComparisonIndex.Value = 0;
      FStack_318.StringEnumTableNameID.Number = 0;
      FStack_318.TimeExpressionType = None;
      FStack_318.IsExpression = false;
      FStack_318.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FStack_318.UniqueString.Data.ArrayNum = 0;
      FStack_318.UniqueString.Data.ArrayMax = 0;
      FStack_318.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FStack_318.FormatArgs.ArrayNum = 0;
      FStack_318.FormatArgs.ArrayMax = 0;
      FDS_Text::SetTextFromStringID(&FStack_318,&FStack_438);
      FDS_Text::operator=((FDS_Text *)((longlong)param_1 + 0x158),&FStack_318);
      FStack_408 = FVar3;
      iStack_400 = iVar4;
      (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
                ((longlong)param_1 + 0x28,&FStack_408);
      DestructItems<FDS_TextFormatArg,int>
                ((FDS_TextFormatArg *)FStack_318.FormatArgs.AllocatorInstance.Data,
                 FStack_318.FormatArgs.ArrayNum);
      if ((FDS_TextFormatArg *)FStack_318.FormatArgs.AllocatorInstance.Data !=
          (FDS_TextFormatArg *)0x0) {
        FMemory::Free(FStack_318.FormatArgs.AllocatorInstance.Data);
      }
      if (FStack_318.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_318.UniqueString.Data.AllocatorInstance.Data);
      }
    }
  }
  else if (pFVar9->EntityType == StuffGather) {
    this_01 = FDS_StuffBaseTableRow::GetRef(pFVar9->TableID,true);
    bVar5 = FDS_StuffBaseTableRow::IsValid(this_01);
    if (bVar5) {
      pUVar11 = (UDS_PlayerData *)FWeakObjectPtr::Get(&FStack_440);
      aEStack_468[1] = 4;
      bVar7 = UDS_PlayerData::GetPlayerSkillTargetInfo
                        (pUVar11,aEStack_468 + 1,(ulong64 *)((longlong)param_1 + 0x218),&FStack_2c8)
      ;
    }
    pFVar12 = FDS_PlayerSkillBaseTableRow::GetRef(4,true);
    FStack_438.ID = (pFVar12->ID_SkillName).ID;
    pFVar13 = FDS_PlayerSkillNeedItemTableRow::GetRefByStuffGatherData
                        (*(long64 *)((longlong)param_1 + 0x218),OpenLocks);
    if ((pFVar13->ReqTicketType).ArrayNum == 0) {
      TArray<int,TSizedDefaultAllocator<32>_>::operator=(&TStack_450,&pFVar13->ID_ReqItem);
      TArray<enum_EDS_TicketType,TSizedDefaultAllocator<32>_>::operator=
                (&pbStack_460,&pFVar13->ReqTicketType);
      iVar4 = FFieldNotificationClassDescriptor::Vis_CostTicket.BitNumber;
      FVar3 = FFieldNotificationClassDescriptor::Vis_CostTicket.FieldName;
      if (*(char *)((longlong)param_1 + 0x145) != '\x01') {
        *(undefined1 *)((longlong)param_1 + 0x145) = 1;
        iStack_410 = iVar4;
        FStack_418 = FVar3;
        (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
                  ((longlong)param_1 + 0x28,&FStack_418);
      }
    }
    goto LAB_14be466ea;
  }
  iVar4 = FFieldNotificationClassDescriptor::Vis_CostTicket.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::Vis_CostTicket.FieldName;
  if ((int)uStack_458 == 0) {
    if (*(char *)((longlong)param_1 + 0x145) != '\x01') {
      *(undefined1 *)((longlong)param_1 + 0x145) = 1;
      pFVar17 = &FStack_3f8;
      FStack_3f8 = FVar3;
      iStack_3f0 = iVar4;
LAB_14be468b7:
      (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
                ((longlong)param_1 + 0x28,pFVar17);
    }
  }
  else {
    if (*(char *)((longlong)param_1 + 0x145) != '\x04') {
      *(undefined1 *)((longlong)param_1 + 0x145) = 4;
      FStack_3e8 = FVar3;
      iStack_3e0 = iVar4;
      (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
                ((longlong)param_1 + 0x28,&FStack_3e8);
    }
    iVar4 = FFieldNotificationClassDescriptor::CostTicketIconID.BitNumber;
    FVar3 = FFieldNotificationClassDescriptor::CostTicketIconID.FieldName;
    if (((int)uStack_458 < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar1 = *pbStack_460;
    pUVar14 = StaticEnum<enum_EDS_TicketType>();
    iVar8 = DS_Util::GetEnumIconID(pUVar14,(uint)bVar1);
    if (*(int *)((longlong)param_1 + 0x148) != iVar8) {
      *(int *)((longlong)param_1 + 0x148) = iVar8;
      pFVar17 = &FStack_3d8;
      FStack_3d8 = FVar3;
      iStack_3d0 = iVar4;
      goto LAB_14be468b7;
    }
  }
  iVar4 = FFieldNotificationClassDescriptor::Vis_Cost.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::Vis_Cost.FieldName;
  if (TStack_450.ArrayNum == 0) {
    if (*(char *)((longlong)param_1 + 0x144) != '\x01') {
      *(undefined1 *)((longlong)param_1 + 0x144) = 1;
      iStack_3c0 = iVar4;
      FStack_3c8 = FVar3;
      (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
                ((longlong)param_1 + 0x28,&FStack_3c8);
    }
    iVar4 = FFieldNotificationClassDescriptor::Vis_CostItem.BitNumber;
    FVar3 = FFieldNotificationClassDescriptor::Vis_CostItem.FieldName;
    if (*(char *)((longlong)param_1 + 0x14c) != '\x01') {
      *(undefined1 *)((longlong)param_1 + 0x14c) = 1;
      pFVar17 = &FStack_3b8;
      FStack_3b8 = FVar3;
      iStack_3b0 = iVar4;
LAB_14be46a25:
      (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
                ((longlong)param_1 + 0x28,pFVar17);
    }
  }
  else {
    if (*(char *)((longlong)param_1 + 0x144) != '\x04') {
      *(undefined1 *)((longlong)param_1 + 0x144) = 4;
      iStack_3a0 = iVar4;
      FStack_3a8 = FVar3;
      (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
                ((longlong)param_1 + 0x28,&FStack_3a8);
    }
    iVar4 = FFieldNotificationClassDescriptor::Vis_CostItem.BitNumber;
    FVar3 = FFieldNotificationClassDescriptor::Vis_CostItem.FieldName;
    if (*(char *)((longlong)param_1 + 0x14c) != '\x04') {
      *(undefined1 *)((longlong)param_1 + 0x14c) = 4;
      iStack_390 = iVar4;
      FStack_398 = FVar3;
      (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
                ((longlong)param_1 + 0x28,&FStack_398);
    }
    iVar4 = FFieldNotificationClassDescriptor::CostItemIconID.BitNumber;
    FVar3 = FFieldNotificationClassDescriptor::CostItemIconID.FieldName;
    if ((TStack_450.ArrayNum < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar15 = FDS_ItemBaseTableRow::GetRef((longlong)*(int *)TStack_450.AllocatorInstance.Data,true)
    ;
    if (*(longlong *)((longlong)param_1 + 0x150) != (longlong)pFVar15->ID_Icon) {
      *(longlong *)((longlong)param_1 + 0x150) = (longlong)pFVar15->ID_Icon;
      pFVar17 = &FStack_388;
      FStack_388 = FVar3;
      iStack_380 = iVar4;
      goto LAB_14be46a25;
    }
  }
  iVar4 = FFieldNotificationClassDescriptor::Vis_CostTicket.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::Vis_CostTicket.FieldName;
  if (*(char *)((longlong)param_1 + 0x145) != '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x145) = 1;
    FStack_378 = FVar3;
    iStack_370 = iVar4;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_378);
  }
  FVar16.Data = TStack_450.AllocatorInstance.Data;
  if (pbStack_460 != (byte *)0x0) {
    FMemory::Free(pbStack_460);
    FVar16.Data = TStack_450.AllocatorInstance.Data;
  }
LAB_14be46a81:
  if (FVar16.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar16.Data);
  }
  return;
}

// StaticClass @ 14b675240

UClass * __cdecl UDS_VM_Interaction::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Interaction.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Interaction",
               &Z_Registration_Info_UClass_UDS_VM_Interaction.InnerSingleton,
               StaticRegisterNativesUDS_VM_Interaction,0x228,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_Interaction>,
               InternalVTableHelperCtorCaller<UDS_VM_Interaction>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Interaction.InnerSingleton;
}

// UDS_VM_Interaction @ 14b67aef0

UDS_VM_Interaction * __thiscall
UDS_VM_Interaction::UDS_VM_Interaction(UDS_VM_Interaction *this,FVTableHelper *param_1)

{
  TVector2<double> TVar1;
  
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->Vis_Cost = Collapsed;
  this->Vis_CostTicket = Collapsed;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->AnimationEvent).NumberOfLoops = 1;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Interaction__6B_;
  (this->AnimationEvent).AnimationName.ComparisonIndex = 0;
  (this->AnimationEvent).AnimationName.Number = 0;
  (this->AnimationEvent).AnimationPlayTime = 0.0;
  (this->AnimationEvent).AnimationEventType = None;
  (this->AnimationEvent).AnimationStateType = None;
  *(undefined8 *)&(this->AnimationEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x10 = 0;
  (this->ActionText).StringTableType = None;
  (this->ActionText).StringTableID = 0;
  (this->ActionText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->ActionText).StringEnumTableNameID.Number = 0;
  (this->ActionText).DateTime.Ticks = 0;
  (this->ActionText).TimeSpan.Ticks = 0;
  (this->ActionText).TimeExpressionType = None;
  (this->ActionText).IsExpression = false;
  (this->ActionText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActionText).UniqueString.Data.ArrayNum = 0;
  (this->ActionText).UniqueString.Data.ArrayMax = 0;
  (this->ActionText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActionText).FormatArgs.ArrayNum = 0;
  (this->ActionText).FormatArgs.ArrayMax = 0;
  (this->PlayerSkillText).StringTableType = None;
  (this->PlayerSkillText).StringTableID = 0;
  (this->PlayerSkillText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->PlayerSkillText).StringEnumTableNameID.Number = 0;
  (this->PlayerSkillText).DateTime.Ticks = 0;
  (this->PlayerSkillText).TimeSpan.Ticks = 0;
  (this->PlayerSkillText).TimeExpressionType = None;
  (this->PlayerSkillText).IsExpression = false;
  (this->PlayerSkillText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PlayerSkillText).UniqueString.Data.ArrayNum = 0;
  (this->PlayerSkillText).UniqueString.Data.ArrayMax = 0;
  (this->PlayerSkillText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PlayerSkillText).FormatArgs.ArrayNum = 0;
  (this->PlayerSkillText).FormatArgs.ArrayMax = 0;
  (this->PlayerSkillRemainTime).StringTableType = None;
  (this->PlayerSkillRemainTime).StringTableID = 0;
  (this->PlayerSkillRemainTime).StringEnumTableNameID.ComparisonIndex = 0;
  (this->PlayerSkillRemainTime).StringEnumTableNameID.Number = 0;
  (this->PlayerSkillRemainTime).DateTime.Ticks = 0;
  (this->PlayerSkillRemainTime).TimeSpan.Ticks = 0;
  (this->PlayerSkillRemainTime).TimeExpressionType = None;
  (this->PlayerSkillRemainTime).IsExpression = false;
  (this->PlayerSkillRemainTime).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PlayerSkillRemainTime).UniqueString.Data.ArrayNum = 0;
  (this->PlayerSkillRemainTime).UniqueString.Data.ArrayMax = 0;
  (this->PlayerSkillRemainTime).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PlayerSkillRemainTime).FormatArgs.ArrayNum = 0;
  (this->PlayerSkillRemainTime).FormatArgs.ArrayMax = 0;
  this->CostTicketIconID = 0;
  this->CostItemIconID = 0;
  this->Vis_Time = Collapsed;
  this->Vis_CostItem = Collapsed;
  TVar1 = UE::Math::TVector2<double>::ZeroVector;
  this->bSelected = false;
  this->EndTime = 0.0;
  this->TargetEntityID = 0;
  this->InteractionID = 0;
  this->OrderIndex = 0;
  (this->OffsetPosition).field0_0x0._s_0 = (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
  return this;
}

// UDS_VM_Interaction @ 14b67b0a0

UDS_VM_Interaction * __thiscall
UDS_VM_Interaction::UDS_VM_Interaction(UDS_VM_Interaction *this,FObjectInitializer *param_1)

{
  TVector2<double> TVar1;
  
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->Vis_Cost = Collapsed;
  this->Vis_CostTicket = Collapsed;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->AnimationEvent).NumberOfLoops = 1;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Interaction__6B_;
  (this->AnimationEvent).AnimationName.ComparisonIndex = 0;
  (this->AnimationEvent).AnimationName.Number = 0;
  (this->AnimationEvent).AnimationPlayTime = 0.0;
  (this->AnimationEvent).AnimationEventType = None;
  (this->AnimationEvent).AnimationStateType = None;
  *(undefined8 *)&(this->AnimationEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x10 = 0;
  (this->ActionText).StringTableType = None;
  (this->ActionText).StringTableID = 0;
  (this->ActionText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->ActionText).StringEnumTableNameID.Number = 0;
  (this->ActionText).DateTime.Ticks = 0;
  (this->ActionText).TimeSpan.Ticks = 0;
  (this->ActionText).TimeExpressionType = None;
  (this->ActionText).IsExpression = false;
  (this->ActionText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActionText).UniqueString.Data.ArrayNum = 0;
  (this->ActionText).UniqueString.Data.ArrayMax = 0;
  (this->ActionText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActionText).FormatArgs.ArrayNum = 0;
  (this->ActionText).FormatArgs.ArrayMax = 0;
  (this->PlayerSkillText).StringTableType = None;
  (this->PlayerSkillText).StringTableID = 0;
  (this->PlayerSkillText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->PlayerSkillText).StringEnumTableNameID.Number = 0;
  (this->PlayerSkillText).DateTime.Ticks = 0;
  (this->PlayerSkillText).TimeSpan.Ticks = 0;
  (this->PlayerSkillText).TimeExpressionType = None;
  (this->PlayerSkillText).IsExpression = false;
  (this->PlayerSkillText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PlayerSkillText).UniqueString.Data.ArrayNum = 0;
  (this->PlayerSkillText).UniqueString.Data.ArrayMax = 0;
  (this->PlayerSkillText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PlayerSkillText).FormatArgs.ArrayNum = 0;
  (this->PlayerSkillText).FormatArgs.ArrayMax = 0;
  (this->PlayerSkillRemainTime).StringTableType = None;
  (this->PlayerSkillRemainTime).StringTableID = 0;
  (this->PlayerSkillRemainTime).StringEnumTableNameID.ComparisonIndex = 0;
  (this->PlayerSkillRemainTime).StringEnumTableNameID.Number = 0;
  (this->PlayerSkillRemainTime).DateTime.Ticks = 0;
  (this->PlayerSkillRemainTime).TimeSpan.Ticks = 0;
  (this->PlayerSkillRemainTime).TimeExpressionType = None;
  (this->PlayerSkillRemainTime).IsExpression = false;
  (this->PlayerSkillRemainTime).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PlayerSkillRemainTime).UniqueString.Data.ArrayNum = 0;
  (this->PlayerSkillRemainTime).UniqueString.Data.ArrayMax = 0;
  (this->PlayerSkillRemainTime).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PlayerSkillRemainTime).FormatArgs.ArrayNum = 0;
  (this->PlayerSkillRemainTime).FormatArgs.ArrayMax = 0;
  this->CostTicketIconID = 0;
  this->CostItemIconID = 0;
  this->Vis_Time = Collapsed;
  this->Vis_CostItem = Collapsed;
  TVar1 = UE::Math::TVector2<double>::ZeroVector;
  this->bSelected = false;
  this->EndTime = 0.0;
  this->TargetEntityID = 0;
  this->InteractionID = 0;
  this->OrderIndex = 0;
  (this->OffsetPosition).field0_0x0._s_0 = (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
  return this;
}

// ~UDS_VM_Interaction @ 14b67bdc0

void __thiscall UDS_VM_Interaction::~UDS_VM_Interaction(UDS_VM_Interaction *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Interaction__6B_;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->PlayerSkillRemainTime).FormatArgs.AllocatorInstance.Data,
             (this->PlayerSkillRemainTime).FormatArgs.ArrayNum);
  pFVar1 = (this->PlayerSkillRemainTime).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PlayerSkillRemainTime).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->PlayerSkillText).FormatArgs.AllocatorInstance.Data,
             (this->PlayerSkillText).FormatArgs.ArrayNum);
  pFVar1 = (this->PlayerSkillText).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PlayerSkillText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->ActionText).FormatArgs.AllocatorInstance.Data,
             (this->ActionText).FormatArgs.ArrayNum);
  pFVar1 = (this->ActionText).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ActionText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->AnimationEvent).Delegate_ValidAnimation);
  pvVar2 = *(void **)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->AnimationEvent).Delegate_ValidAnimation);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->AnimationEvent).Delegate_AnimationFinish);
  pvVar2 = *(void **)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->AnimationEvent).Delegate_AnimationFinish);
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b67e280

IClassDescriptor * __thiscall
UDS_VM_Interaction::GetFieldNotificationDescriptor(UDS_VM_Interaction *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_Interaction::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b67efb0

UClass * __cdecl UDS_VM_Interaction::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Interaction.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Interaction",
               &Z_Registration_Info_UClass_UDS_VM_Interaction.InnerSingleton,
               StaticRegisterNativesUDS_VM_Interaction,0x228,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_Interaction>,
               InternalVTableHelperCtorCaller<UDS_VM_Interaction>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Interaction.InnerSingleton;
}

// GetTickableTickType @ 14b67f0b0

ETickableTickType __thiscall UDS_VM_Interaction::GetTickableTickType(UDS_VM_Interaction *this)

{
  return Conditional;
}

// IsUpdate @ 14b67f110

bool __thiscall UDS_VM_Interaction::IsUpdate(UDS_VM_Interaction *this)

{
  return true;
}

// StaticRegisterNativesUDS_VM_Interaction @ 14b67f3a0

void __cdecl UDS_VM_Interaction::StaticRegisterNativesUDS_VM_Interaction(void)

{
  return;
}

// __VTableCtorCaller @ 14b6800b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl UDS_VM_Interaction::__VTableCtorCaller(FVTableHelper *param_1)

{
  TVector2<double> TVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  UDS_ViewModelBase *this;
  
  pUVar2 = GetTransientPackageAsObject();
  pUVar3 = GetPrivateStaticClass();
  this = (UDS_ViewModelBase *)
         StaticAllocateObject
                   (pUVar3,pUVar2,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDS_ViewModelBase *)0x0) {
    UDS_ViewModelBase::UDS_ViewModelBase(this,param_1);
    *(undefined2 *)((longlong)&this[2]._padding_ + 4) = 0x101;
    this->_padding_ = (longlong)&_vftable__for__UObject__;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined2 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined4 *)&this[1]._padding_ = 1;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].ViewModelContext.Object = (FDS_ViewModelContext *)0x0;
    *(undefined4 *)&this[1].ViewModelContext.SharedReferenceCount.ReferenceController = 0;
    *(undefined1 *)
     ((longlong)&this[1].ViewModelContext.SharedReferenceCount.ReferenceController + 4) = 0;
    this[1].Visibility = Visible;
    *(undefined3 *)&this[1].field_0x81 = 0;
    this[1].VMName.ComparisonIndex = 0;
    *(undefined8 *)&this[1].VMName.Number = 0;
    this[1].TextPropertyIDList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1].TextPropertyIDList.ArrayNum = 0;
    this[1].TextPropertyIDList.ArrayMax = 0;
    *(undefined1 *)&this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    *(undefined1 *)((longlong)&this[2]._padding_ + 4) = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined1 *)&this[2]._padding_ = 0;
    this[2].ViewModelContext.Object = (FDS_ViewModelContext *)0x0;
    this[2].ViewModelContext.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    this[2].Visibility = Visible;
    *(undefined3 *)&this[2].field_0x81 = 0;
    this[2].VMName.ComparisonIndex = 0;
    *(undefined8 *)&this[2].VMName.Number = 0;
    *(undefined4 *)&this[2].TextPropertyIDList.AllocatorInstance.Data = 0;
    *(undefined1 *)((longlong)&this[2].TextPropertyIDList.AllocatorInstance.Data + 4) = 0;
    this[2].TextPropertyIDList.ArrayNum = 0;
    this[2].TextPropertyIDList.ArrayMax = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
    this->_padding_ = (longlong)&___7UDS_VM_Interaction__6B_;
    *(undefined1 *)((longlong)&this[2]._padding_ + 6) = 1;
    *(undefined4 *)&this[2]._padding_ = 0;
    *(undefined1 *)((longlong)&this[2]._padding_ + 4) = 1;
    this[2]._padding_ = 0;
    TVar1 = UE::Math::TVector2<double>::ZeroVector;
    *(undefined1 *)&this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    *(TVector2<double>_u_0 *)&this[3]._padding_ = (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// BindModel @ 14be11310

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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

void __thiscall UDS_VM_Interaction::BindModel(UDS_VM_Interaction *this)

{
  bool bVar1;
  FDS_EntityBase *pFVar2;
  UDS_LogManager *pUVar3;
  UObject *pUVar4;
  UDS_InputEvent *pUVar5;
  undefined1 auStackY_198 [32];
  undefined1 local_168 [304];
  ForAnyElementType local_38;
  wchar_t *local_30;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  pFVar2 = FDS_EntityBase::GetEntityBase(&this->TargetEntityID);
  if (pFVar2 == (FDS_EntityBase *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_38.Data = (FScriptContainerElement *)0x0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(local_168 + 0x30),
                 "UDS_VM_Interaction::BindModel",0x1d,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Error,local_30,0x5b,L"targetEntity is nullptr.");
      if (local_38.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data);
      }
    }
  }
  else {
    UDS_PlayerData::GetMainPlayerData();
    bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(local_168 + 0x10));
    if (bVar1) {
      local_168._8_4_ = 0;
      local_168._0_8_ = OnPlayerSkillTargetInfoChanged;
      local_168._40_8_ = (ulonglong)(uint)local_168._12_4_ << 0x20;
      local_168._32_8_ = OnPlayerSkillTargetInfoChanged;
      pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)(local_168 + 0x10));
      TMulticastDelegateRegistration<void___cdecl(enum_EDS_PlayerSkillType_const_&,FDS_PlayerSkillTargetInfo_const_&,enum_EDS_PlayerSkillTargetInfoChangeType_const_&),FDefaultDelegateUserPolicy>
      ::AddUObject<UDS_VM_Interaction>
                (&pUVar4[0xf].field_0x10,(UDS_VM_Interaction *)local_168,(pmf_a95a413b *)this);
    }
    pUVar5 = UDS_InputEvent::GetEvent();
    if (pUVar5 != (UDS_InputEvent *)0x0) {
      local_168._8_4_ = 0;
      local_168._0_8_ = OnSelectEvent;
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &pUVar5->OnInteractionSelectedIndex,this);
      local_168._40_8_ = CONCAT44(local_168._12_4_,local_168._8_4_);
      local_168._32_8_ = local_168._0_8_;
      TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
      AddUObject<UDS_VM_Interaction>
                ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
                 &pUVar5->OnInteractionSelectedIndex,(UDS_VM_Interaction *)local_168,
                 (pmf_719d3bf9 *)this);
    }
  }
  return;
}

// CheckCost @ 14be14480

bool __thiscall UDS_VM_Interaction::CheckCost(UDS_VM_Interaction *this)

{
  bool bVar1;
  UDS_InteractionData *this_00;
  FWeakObjectPtr local_res8 [4];
  
  UDS_InteractionData::GetData
            ((ulong64)local_res8,this->TargetEntityID,SUB41(this->InteractionID,0));
  bVar1 = FWeakObjectPtr::IsValid(local_res8);
  if (!bVar1) {
    return false;
  }
  this_00 = (UDS_InteractionData *)FWeakObjectPtr::Get(local_res8);
  bVar1 = UDS_InteractionData::CheckCost(this_00);
  return bVar1;
}

// GetRemainTime @ 14be22190

double __thiscall UDS_VM_Interaction::GetRemainTime(UDS_VM_Interaction *this)

{
  return 0.0;
}

// InitViewModel @ 14be24f80

void __thiscall UDS_VM_Interaction::InitViewModel(UDS_VM_Interaction *this)

{
  return;
}

// OnChangedVisibility @ 14be2b5d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
UDS_VM_Interaction::OnChangedVisibility(UDS_VM_Interaction *this,ESlateVisibility *param_1)

{
  byte bVar1;
  code *pcVar2;
  FName FVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  FDS_EntityBase *pFVar9;
  UDS_LogManager *pUVar10;
  FDS_InteractionTableRow *this_00;
  FDS_NpcBaseTableRow *this_01;
  UDS_PlayerData *pUVar11;
  FDS_PlayerSkillBaseTableRow *pFVar12;
  FDS_PlayerSkillNeedItemTableRow *pFVar13;
  FDS_StuffBaseTableRow *this_02;
  UEnum *pUVar14;
  FDS_ItemBaseTableRow *pFVar15;
  ForAnyElementType FVar16;
  FName *pFVar17;
  undefined1 auStackY_4a8 [32];
  EDS_PlayerSkillType aEStack_468 [8];
  byte *pbStack_460;
  undefined8 uStack_458;
  TArray<int,TSizedDefaultAllocator<32>_> TStack_450;
  FWeakObjectPtr FStack_440;
  FDS_StringBaseID FStack_438;
  FName FStack_428;
  int iStack_420;
  FName FStack_418;
  int iStack_410;
  FName FStack_408;
  int iStack_400;
  FName FStack_3f8;
  int iStack_3f0;
  FName FStack_3e8;
  int iStack_3e0;
  FName FStack_3d8;
  int iStack_3d0;
  FName FStack_3c8;
  int iStack_3c0;
  FName FStack_3b8;
  int iStack_3b0;
  FName FStack_3a8;
  int iStack_3a0;
  FName FStack_398;
  int iStack_390;
  FName FStack_388;
  int iStack_380;
  FName FStack_378;
  int iStack_370;
  FDS_Text FStack_368;
  FDS_Text FStack_318;
  FDS_PlayerSkillTargetInfo FStack_2c8;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_168;
  ulonglong uStack_48;
  
  if (*param_1 != SelfHitTestInvisible) {
    return;
  }
  uStack_48 = __security_cookie.value ^ (ulonglong)auStackY_4a8;
  pFVar9 = FDS_EntityBase::GetEntityBase(&this->TargetEntityID);
  if (pFVar9 == (FDS_EntityBase *)0x0) {
    pUVar10 = UDS_LogManager::GetInst();
    if (pUVar10 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar10 = UDS_LogManager::GetInst();
    TStack_288._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&TStack_288,"UDS_VM_Interaction::Refresh",0x1b,Yes);
    UDS_LogManager::PrintLog(pUVar10,1,Error,TStack_288.Ptr,0x82,L"targetEntity is nullptr.");
    if ((void *)TStack_288._padding_ == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)TStack_288._padding_);
    return;
  }
  UDS_PlayerData::GetMainPlayerData();
  bVar5 = FWeakObjectPtr::IsValid(&FStack_440);
  if (!bVar5) {
    return;
  }
  this_00 = FDS_InteractionTableRow::GetRef((longlong)this->InteractionID,true);
  bVar5 = FDS_InteractionTableRow::IsValid(this_00);
  iVar4 = FFieldNotificationClassDescriptor::ActionText.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::ActionText.FieldName;
  if (!bVar5) {
    pUVar10 = UDS_LogManager::GetInst();
    if (pUVar10 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar10 = UDS_LogManager::GetInst();
    TStack_168._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&TStack_168,"UDS_VM_Interaction::Refresh",0x1b,Yes);
    UDS_LogManager::PrintLog(pUVar10,1,Error,TStack_168.Ptr,0x8f,L"interactionTable is invalid. %d")
    ;
    FVar16.Data = (FScriptContainerElement *)TStack_168._padding_;
    goto LAB_14be46a81;
  }
  FStack_368.StringTableID = 0;
  FStack_368.StringEnumTableNameID.ComparisonIndex.Value = 0;
  FStack_368.StringEnumTableNameID.Number = 0;
  FStack_368.DateTime.Ticks = 0;
  FStack_368.TimeSpan.Ticks = 0;
  FStack_368.TimeExpressionType = None;
  FStack_368.IsExpression = false;
  FStack_368.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_368.UniqueString.Data.ArrayNum = 0;
  FStack_368.UniqueString.Data.ArrayMax = 0;
  FStack_368.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_368.FormatArgs.ArrayNum = 0;
  FStack_368.FormatArgs.ArrayMax = 0;
  FStack_368.StringTableType = None;
  FDS_Text::SetTextFromStringID(&FStack_368,&this_00->ID_Name);
  FDS_Text::operator=(&this->ActionText,&FStack_368);
  FStack_428 = FVar3;
  iStack_420 = iVar4;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_428);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)FStack_368.FormatArgs.AllocatorInstance.Data,
             FStack_368.FormatArgs.ArrayNum);
  if ((FDS_TextFormatArg *)FStack_368.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0)
  {
    FMemory::Free(FStack_368.FormatArgs.AllocatorInstance.Data);
  }
  if (FStack_368.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_368.UniqueString.Data.AllocatorInstance.Data);
  }
  FStack_2c8.EntityID = 0;
  FStack_2c8.bIsStuff = false;
  FStack_2c8.Position.field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  FStack_2c8.Position.field0_0x0._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  bVar7 = false;
  FStack_2c8.TableID = 0;
  FStack_2c8.ZoneID = 0;
  bVar5 = false;
  FStack_2c8.Position.field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  FStack_2c8.EndTime = 0.0;
  FStack_438._padding_ = (longlong)&___7FDS_StringBaseID__6B_;
  FStack_438.ID = 0;
  TStack_450.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TStack_450.ArrayNum = 0;
  TStack_450.ArrayMax = 0;
  pbStack_460 = (byte *)0x0;
  uStack_458 = 0;
  if (pFVar9->EntityType == NPC) {
    this_01 = FDS_NpcBaseTableRow::GetRef(pFVar9->TableID,true);
    bVar6 = FDS_NpcBaseTableRow::IsValid(this_01);
    if ((bVar6) && (bVar6 = FDS_NpcBaseTableRow::HasPlayerSkill(this_01,6), bVar6)) {
      pUVar11 = (UDS_PlayerData *)FWeakObjectPtr::Get(&FStack_440);
      aEStack_468[0] = Ling;
      bVar7 = UDS_PlayerData::GetPlayerSkillTargetInfo
                        (pUVar11,aEStack_468,&this->TargetEntityID,&FStack_2c8);
      bVar5 = true;
    }
    pFVar12 = FDS_PlayerSkillBaseTableRow::GetRef(6,true);
    FStack_438.ID = (pFVar12->ID_SkillName).ID;
    pFVar13 = FDS_PlayerSkillNeedItemTableRow::GetRefByNpcLingData(this->TargetEntityID);
    if ((pFVar13->ID_ReqItem).ArrayNum == 0) {
      TArray<int,TSizedDefaultAllocator<32>_>::operator=(&TStack_450,&pFVar13->ID_ReqItem);
      TArray<enum_EDS_TicketType,TSizedDefaultAllocator<32>_>::operator=
                (&pbStack_460,&pFVar13->ReqTicketType);
    }
LAB_14be466ea:
    if ((bVar5 == true) && (bVar7 == true)) {
      this->EndTime = FStack_2c8.EndTime;
      iVar4 = FFieldNotificationClassDescriptor::PlayerSkillText.BitNumber;
      FVar3 = FFieldNotificationClassDescriptor::PlayerSkillText.FieldName;
      FStack_318.DateTime.Ticks = 0;
      FStack_318.TimeSpan.Ticks = 0;
      FStack_318.StringTableType = None;
      FStack_318.StringTableID = 0;
      FStack_318.StringEnumTableNameID.ComparisonIndex.Value = 0;
      FStack_318.StringEnumTableNameID.Number = 0;
      FStack_318.TimeExpressionType = None;
      FStack_318.IsExpression = false;
      FStack_318.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FStack_318.UniqueString.Data.ArrayNum = 0;
      FStack_318.UniqueString.Data.ArrayMax = 0;
      FStack_318.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FStack_318.FormatArgs.ArrayNum = 0;
      FStack_318.FormatArgs.ArrayMax = 0;
      FDS_Text::SetTextFromStringID(&FStack_318,&FStack_438);
      FDS_Text::operator=(&this->PlayerSkillText,&FStack_318);
      FStack_408 = FVar3;
      iStack_400 = iVar4;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_408);
      DestructItems<FDS_TextFormatArg,int>
                ((FDS_TextFormatArg *)FStack_318.FormatArgs.AllocatorInstance.Data,
                 FStack_318.FormatArgs.ArrayNum);
      if ((FDS_TextFormatArg *)FStack_318.FormatArgs.AllocatorInstance.Data !=
          (FDS_TextFormatArg *)0x0) {
        FMemory::Free(FStack_318.FormatArgs.AllocatorInstance.Data);
      }
      if (FStack_318.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_318.UniqueString.Data.AllocatorInstance.Data);
      }
    }
  }
  else if (pFVar9->EntityType == StuffGather) {
    this_02 = FDS_StuffBaseTableRow::GetRef(pFVar9->TableID,true);
    bVar5 = FDS_StuffBaseTableRow::IsValid(this_02);
    if (bVar5) {
      pUVar11 = (UDS_PlayerData *)FWeakObjectPtr::Get(&FStack_440);
      aEStack_468[1] = 4;
      bVar7 = UDS_PlayerData::GetPlayerSkillTargetInfo
                        (pUVar11,aEStack_468 + 1,&this->TargetEntityID,&FStack_2c8);
    }
    pFVar12 = FDS_PlayerSkillBaseTableRow::GetRef(4,true);
    FStack_438.ID = (pFVar12->ID_SkillName).ID;
    pFVar13 = FDS_PlayerSkillNeedItemTableRow::GetRefByStuffGatherData
                        (this->TargetEntityID,OpenLocks);
    if ((pFVar13->ReqTicketType).ArrayNum == 0) {
      TArray<int,TSizedDefaultAllocator<32>_>::operator=(&TStack_450,&pFVar13->ID_ReqItem);
      TArray<enum_EDS_TicketType,TSizedDefaultAllocator<32>_>::operator=
                (&pbStack_460,&pFVar13->ReqTicketType);
      iVar4 = FFieldNotificationClassDescriptor::Vis_CostTicket.BitNumber;
      FVar3 = FFieldNotificationClassDescriptor::Vis_CostTicket.FieldName;
      if (this->Vis_CostTicket != Collapsed) {
        this->Vis_CostTicket = Collapsed;
        iStack_410 = iVar4;
        FStack_418 = FVar3;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_418);
      }
    }
    goto LAB_14be466ea;
  }
  iVar4 = FFieldNotificationClassDescriptor::Vis_CostTicket.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::Vis_CostTicket.FieldName;
  if ((int)uStack_458 == 0) {
    if (this->Vis_CostTicket != Collapsed) {
      this->Vis_CostTicket = Collapsed;
      pFVar17 = &FStack_3f8;
      FStack_3f8 = FVar3;
      iStack_3f0 = iVar4;
LAB_14be468b7:
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,pFVar17);
    }
  }
  else {
    if (this->Vis_CostTicket != SelfHitTestInvisible) {
      this->Vis_CostTicket = SelfHitTestInvisible;
      FStack_3e8 = FVar3;
      iStack_3e0 = iVar4;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_3e8);
    }
    iVar4 = FFieldNotificationClassDescriptor::CostTicketIconID.BitNumber;
    FVar3 = FFieldNotificationClassDescriptor::CostTicketIconID.FieldName;
    if (((int)uStack_458 < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar1 = *pbStack_460;
    pUVar14 = StaticEnum<enum_EDS_TicketType>();
    iVar8 = DS_Util::GetEnumIconID(pUVar14,(uint)bVar1);
    if (this->CostTicketIconID != iVar8) {
      this->CostTicketIconID = iVar8;
      pFVar17 = &FStack_3d8;
      FStack_3d8 = FVar3;
      iStack_3d0 = iVar4;
      goto LAB_14be468b7;
    }
  }
  iVar4 = FFieldNotificationClassDescriptor::Vis_Cost.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::Vis_Cost.FieldName;
  if (TStack_450.ArrayNum == 0) {
    if (this->Vis_Cost != Collapsed) {
      this->Vis_Cost = Collapsed;
      iStack_3c0 = iVar4;
      FStack_3c8 = FVar3;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_3c8);
    }
    iVar4 = FFieldNotificationClassDescriptor::Vis_CostItem.BitNumber;
    FVar3 = FFieldNotificationClassDescriptor::Vis_CostItem.FieldName;
    if (this->Vis_CostItem != Collapsed) {
      this->Vis_CostItem = Collapsed;
      pFVar17 = &FStack_3b8;
      FStack_3b8 = FVar3;
      iStack_3b0 = iVar4;
LAB_14be46a25:
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,pFVar17);
    }
  }
  else {
    if (this->Vis_Cost != SelfHitTestInvisible) {
      this->Vis_Cost = SelfHitTestInvisible;
      iStack_3a0 = iVar4;
      FStack_3a8 = FVar3;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_3a8);
    }
    iVar4 = FFieldNotificationClassDescriptor::Vis_CostItem.BitNumber;
    FVar3 = FFieldNotificationClassDescriptor::Vis_CostItem.FieldName;
    if (this->Vis_CostItem != SelfHitTestInvisible) {
      this->Vis_CostItem = SelfHitTestInvisible;
      iStack_390 = iVar4;
      FStack_398 = FVar3;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_398);
    }
    iVar4 = FFieldNotificationClassDescriptor::CostItemIconID.BitNumber;
    FVar3 = FFieldNotificationClassDescriptor::CostItemIconID.FieldName;
    if ((TStack_450.ArrayNum < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar15 = FDS_ItemBaseTableRow::GetRef((longlong)*(int *)TStack_450.AllocatorInstance.Data,true)
    ;
    if (this->CostItemIconID != (longlong)pFVar15->ID_Icon) {
      this->CostItemIconID = (longlong)pFVar15->ID_Icon;
      pFVar17 = &FStack_388;
      FStack_388 = FVar3;
      iStack_380 = iVar4;
      goto LAB_14be46a25;
    }
  }
  iVar4 = FFieldNotificationClassDescriptor::Vis_CostTicket.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::Vis_CostTicket.FieldName;
  if (this->Vis_CostTicket != Collapsed) {
    this->Vis_CostTicket = Collapsed;
    FStack_378 = FVar3;
    iStack_370 = iVar4;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_378);
  }
  FVar16.Data = TStack_450.AllocatorInstance.Data;
  if (pbStack_460 != (byte *)0x0) {
    FMemory::Free(pbStack_460);
    FVar16.Data = TStack_450.AllocatorInstance.Data;
  }
LAB_14be46a81:
  if (FVar16.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar16.Data);
  }
  return;
}

// OnPlayerSkillTargetInfoChanged @ 14be32660

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
UDS_VM_Interaction::OnPlayerSkillTargetInfoChanged
          (UDS_VM_Interaction *this,EDS_PlayerSkillType *param_1,FDS_PlayerSkillTargetInfo *param_2,
          EDS_PlayerSkillTargetInfoChangeType *param_3)

{
  byte bVar1;
  code *pcVar2;
  FName FVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  FDS_EntityBase *pFVar9;
  UDS_LogManager *pUVar10;
  FDS_InteractionTableRow *this_00;
  FDS_NpcBaseTableRow *this_01;
  UDS_PlayerData *pUVar11;
  FDS_PlayerSkillBaseTableRow *pFVar12;
  FDS_PlayerSkillNeedItemTableRow *pFVar13;
  FDS_StuffBaseTableRow *this_02;
  UEnum *pUVar14;
  FDS_ItemBaseTableRow *pFVar15;
  ForAnyElementType FVar16;
  FName *pFVar17;
  undefined1 auStackY_4a8 [32];
  EDS_PlayerSkillType aEStack_468 [8];
  byte *pbStack_460;
  undefined8 uStack_458;
  TArray<int,TSizedDefaultAllocator<32>_> TStack_450;
  FWeakObjectPtr FStack_440;
  FDS_StringBaseID FStack_438;
  FName FStack_428;
  int iStack_420;
  FName FStack_418;
  int iStack_410;
  FName FStack_408;
  int iStack_400;
  FName FStack_3f8;
  int iStack_3f0;
  FName FStack_3e8;
  int iStack_3e0;
  FName FStack_3d8;
  int iStack_3d0;
  FName FStack_3c8;
  int iStack_3c0;
  FName FStack_3b8;
  int iStack_3b0;
  FName FStack_3a8;
  int iStack_3a0;
  FName FStack_398;
  int iStack_390;
  FName FStack_388;
  int iStack_380;
  FName FStack_378;
  int iStack_370;
  FDS_Text FStack_368;
  FDS_Text FStack_318;
  FDS_PlayerSkillTargetInfo FStack_2c8;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_168;
  ulonglong uStack_48;
  
  uStack_48 = __security_cookie.value ^ (ulonglong)auStackY_4a8;
  pFVar9 = FDS_EntityBase::GetEntityBase(&this->TargetEntityID);
  if (pFVar9 == (FDS_EntityBase *)0x0) {
    pUVar10 = UDS_LogManager::GetInst();
    if (pUVar10 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar10 = UDS_LogManager::GetInst();
    TStack_288._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&TStack_288,"UDS_VM_Interaction::Refresh",0x1b,Yes);
    UDS_LogManager::PrintLog(pUVar10,1,Error,TStack_288.Ptr,0x82,L"targetEntity is nullptr.");
    if ((void *)TStack_288._padding_ == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)TStack_288._padding_);
    return;
  }
  UDS_PlayerData::GetMainPlayerData();
  bVar5 = FWeakObjectPtr::IsValid(&FStack_440);
  if (!bVar5) {
    return;
  }
  this_00 = FDS_InteractionTableRow::GetRef((longlong)this->InteractionID,true);
  bVar5 = FDS_InteractionTableRow::IsValid(this_00);
  iVar4 = FFieldNotificationClassDescriptor::ActionText.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::ActionText.FieldName;
  if (!bVar5) {
    pUVar10 = UDS_LogManager::GetInst();
    if (pUVar10 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar10 = UDS_LogManager::GetInst();
    TStack_168._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&TStack_168,"UDS_VM_Interaction::Refresh",0x1b,Yes);
    UDS_LogManager::PrintLog(pUVar10,1,Error,TStack_168.Ptr,0x8f,L"interactionTable is invalid. %d")
    ;
    FVar16.Data = (FScriptContainerElement *)TStack_168._padding_;
    goto LAB_14be46a81;
  }
  FStack_368.StringTableID = 0;
  FStack_368.StringEnumTableNameID.ComparisonIndex.Value = 0;
  FStack_368.StringEnumTableNameID.Number = 0;
  FStack_368.DateTime.Ticks = 0;
  FStack_368.TimeSpan.Ticks = 0;
  FStack_368.TimeExpressionType = None;
  FStack_368.IsExpression = false;
  FStack_368.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_368.UniqueString.Data.ArrayNum = 0;
  FStack_368.UniqueString.Data.ArrayMax = 0;
  FStack_368.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_368.FormatArgs.ArrayNum = 0;
  FStack_368.FormatArgs.ArrayMax = 0;
  FStack_368.StringTableType = None;
  FDS_Text::SetTextFromStringID(&FStack_368,&this_00->ID_Name);
  FDS_Text::operator=(&this->ActionText,&FStack_368);
  FStack_428 = FVar3;
  iStack_420 = iVar4;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_428);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)FStack_368.FormatArgs.AllocatorInstance.Data,
             FStack_368.FormatArgs.ArrayNum);
  if ((FDS_TextFormatArg *)FStack_368.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0)
  {
    FMemory::Free(FStack_368.FormatArgs.AllocatorInstance.Data);
  }
  if (FStack_368.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_368.UniqueString.Data.AllocatorInstance.Data);
  }
  FStack_2c8.EntityID = 0;
  FStack_2c8.bIsStuff = false;
  FStack_2c8.Position.field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  FStack_2c8.Position.field0_0x0._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  bVar7 = false;
  FStack_2c8.TableID = 0;
  FStack_2c8.ZoneID = 0;
  bVar5 = false;
  FStack_2c8.Position.field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  FStack_2c8.EndTime = 0.0;
  FStack_438._padding_ = (longlong)&___7FDS_StringBaseID__6B_;
  FStack_438.ID = 0;
  TStack_450.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TStack_450.ArrayNum = 0;
  TStack_450.ArrayMax = 0;
  pbStack_460 = (byte *)0x0;
  uStack_458 = 0;
  if (pFVar9->EntityType == NPC) {
    this_01 = FDS_NpcBaseTableRow::GetRef(pFVar9->TableID,true);
    bVar6 = FDS_NpcBaseTableRow::IsValid(this_01);
    if ((bVar6) && (bVar6 = FDS_NpcBaseTableRow::HasPlayerSkill(this_01,6), bVar6)) {
      pUVar11 = (UDS_PlayerData *)FWeakObjectPtr::Get(&FStack_440);
      aEStack_468[0] = Ling;
      bVar7 = UDS_PlayerData::GetPlayerSkillTargetInfo
                        (pUVar11,aEStack_468,&this->TargetEntityID,&FStack_2c8);
      bVar5 = true;
    }
    pFVar12 = FDS_PlayerSkillBaseTableRow::GetRef(6,true);
    FStack_438.ID = (pFVar12->ID_SkillName).ID;
    pFVar13 = FDS_PlayerSkillNeedItemTableRow::GetRefByNpcLingData(this->TargetEntityID);
    if ((pFVar13->ID_ReqItem).ArrayNum == 0) {
      TArray<int,TSizedDefaultAllocator<32>_>::operator=(&TStack_450,&pFVar13->ID_ReqItem);
      TArray<enum_EDS_TicketType,TSizedDefaultAllocator<32>_>::operator=
                (&pbStack_460,&pFVar13->ReqTicketType);
    }
LAB_14be466ea:
    if ((bVar5 == true) && (bVar7 == true)) {
      this->EndTime = FStack_2c8.EndTime;
      iVar4 = FFieldNotificationClassDescriptor::PlayerSkillText.BitNumber;
      FVar3 = FFieldNotificationClassDescriptor::PlayerSkillText.FieldName;
      FStack_318.DateTime.Ticks = 0;
      FStack_318.TimeSpan.Ticks = 0;
      FStack_318.StringTableType = None;
      FStack_318.StringTableID = 0;
      FStack_318.StringEnumTableNameID.ComparisonIndex.Value = 0;
      FStack_318.StringEnumTableNameID.Number = 0;
      FStack_318.TimeExpressionType = None;
      FStack_318.IsExpression = false;
      FStack_318.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FStack_318.UniqueString.Data.ArrayNum = 0;
      FStack_318.UniqueString.Data.ArrayMax = 0;
      FStack_318.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FStack_318.FormatArgs.ArrayNum = 0;
      FStack_318.FormatArgs.ArrayMax = 0;
      FDS_Text::SetTextFromStringID(&FStack_318,&FStack_438);
      FDS_Text::operator=(&this->PlayerSkillText,&FStack_318);
      FStack_408 = FVar3;
      iStack_400 = iVar4;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_408);
      DestructItems<FDS_TextFormatArg,int>
                ((FDS_TextFormatArg *)FStack_318.FormatArgs.AllocatorInstance.Data,
                 FStack_318.FormatArgs.ArrayNum);
      if ((FDS_TextFormatArg *)FStack_318.FormatArgs.AllocatorInstance.Data !=
          (FDS_TextFormatArg *)0x0) {
        FMemory::Free(FStack_318.FormatArgs.AllocatorInstance.Data);
      }
      if (FStack_318.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_318.UniqueString.Data.AllocatorInstance.Data);
      }
    }
  }
  else if (pFVar9->EntityType == StuffGather) {
    this_02 = FDS_StuffBaseTableRow::GetRef(pFVar9->TableID,true);
    bVar5 = FDS_StuffBaseTableRow::IsValid(this_02);
    if (bVar5) {
      pUVar11 = (UDS_PlayerData *)FWeakObjectPtr::Get(&FStack_440);
      aEStack_468[1] = 4;
      bVar7 = UDS_PlayerData::GetPlayerSkillTargetInfo
                        (pUVar11,aEStack_468 + 1,&this->TargetEntityID,&FStack_2c8);
    }
    pFVar12 = FDS_PlayerSkillBaseTableRow::GetRef(4,true);
    FStack_438.ID = (pFVar12->ID_SkillName).ID;
    pFVar13 = FDS_PlayerSkillNeedItemTableRow::GetRefByStuffGatherData
                        (this->TargetEntityID,OpenLocks);
    if ((pFVar13->ReqTicketType).ArrayNum == 0) {
      TArray<int,TSizedDefaultAllocator<32>_>::operator=(&TStack_450,&pFVar13->ID_ReqItem);
      TArray<enum_EDS_TicketType,TSizedDefaultAllocator<32>_>::operator=
                (&pbStack_460,&pFVar13->ReqTicketType);
      iVar4 = FFieldNotificationClassDescriptor::Vis_CostTicket.BitNumber;
      FVar3 = FFieldNotificationClassDescriptor::Vis_CostTicket.FieldName;
      if (this->Vis_CostTicket != Collapsed) {
        this->Vis_CostTicket = Collapsed;
        iStack_410 = iVar4;
        FStack_418 = FVar3;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_418);
      }
    }
    goto LAB_14be466ea;
  }
  iVar4 = FFieldNotificationClassDescriptor::Vis_CostTicket.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::Vis_CostTicket.FieldName;
  if ((int)uStack_458 == 0) {
    if (this->Vis_CostTicket != Collapsed) {
      this->Vis_CostTicket = Collapsed;
      pFVar17 = &FStack_3f8;
      FStack_3f8 = FVar3;
      iStack_3f0 = iVar4;
LAB_14be468b7:
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,pFVar17);
    }
  }
  else {
    if (this->Vis_CostTicket != SelfHitTestInvisible) {
      this->Vis_CostTicket = SelfHitTestInvisible;
      FStack_3e8 = FVar3;
      iStack_3e0 = iVar4;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_3e8);
    }
    iVar4 = FFieldNotificationClassDescriptor::CostTicketIconID.BitNumber;
    FVar3 = FFieldNotificationClassDescriptor::CostTicketIconID.FieldName;
    if (((int)uStack_458 < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar1 = *pbStack_460;
    pUVar14 = StaticEnum<enum_EDS_TicketType>();
    iVar8 = DS_Util::GetEnumIconID(pUVar14,(uint)bVar1);
    if (this->CostTicketIconID != iVar8) {
      this->CostTicketIconID = iVar8;
      pFVar17 = &FStack_3d8;
      FStack_3d8 = FVar3;
      iStack_3d0 = iVar4;
      goto LAB_14be468b7;
    }
  }
  iVar4 = FFieldNotificationClassDescriptor::Vis_Cost.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::Vis_Cost.FieldName;
  if (TStack_450.ArrayNum == 0) {
    if (this->Vis_Cost != Collapsed) {
      this->Vis_Cost = Collapsed;
      iStack_3c0 = iVar4;
      FStack_3c8 = FVar3;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_3c8);
    }
    iVar4 = FFieldNotificationClassDescriptor::Vis_CostItem.BitNumber;
    FVar3 = FFieldNotificationClassDescriptor::Vis_CostItem.FieldName;
    if (this->Vis_CostItem != Collapsed) {
      this->Vis_CostItem = Collapsed;
      pFVar17 = &FStack_3b8;
      FStack_3b8 = FVar3;
      iStack_3b0 = iVar4;
LAB_14be46a25:
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,pFVar17);
    }
  }
  else {
    if (this->Vis_Cost != SelfHitTestInvisible) {
      this->Vis_Cost = SelfHitTestInvisible;
      iStack_3a0 = iVar4;
      FStack_3a8 = FVar3;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_3a8);
    }
    iVar4 = FFieldNotificationClassDescriptor::Vis_CostItem.BitNumber;
    FVar3 = FFieldNotificationClassDescriptor::Vis_CostItem.FieldName;
    if (this->Vis_CostItem != SelfHitTestInvisible) {
      this->Vis_CostItem = SelfHitTestInvisible;
      iStack_390 = iVar4;
      FStack_398 = FVar3;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_398);
    }
    iVar4 = FFieldNotificationClassDescriptor::CostItemIconID.BitNumber;
    FVar3 = FFieldNotificationClassDescriptor::CostItemIconID.FieldName;
    if ((TStack_450.ArrayNum < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar15 = FDS_ItemBaseTableRow::GetRef((longlong)*(int *)TStack_450.AllocatorInstance.Data,true)
    ;
    if (this->CostItemIconID != (longlong)pFVar15->ID_Icon) {
      this->CostItemIconID = (longlong)pFVar15->ID_Icon;
      pFVar17 = &FStack_388;
      FStack_388 = FVar3;
      iStack_380 = iVar4;
      goto LAB_14be46a25;
    }
  }
  iVar4 = FFieldNotificationClassDescriptor::Vis_CostTicket.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::Vis_CostTicket.FieldName;
  if (this->Vis_CostTicket != Collapsed) {
    this->Vis_CostTicket = Collapsed;
    FStack_378 = FVar3;
    iStack_370 = iVar4;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_378);
  }
  FVar16.Data = TStack_450.AllocatorInstance.Data;
  if (pbStack_460 != (byte *)0x0) {
    FMemory::Free(pbStack_460);
    FVar16.Data = TStack_450.AllocatorInstance.Data;
  }
LAB_14be46a81:
  if (FVar16.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar16.Data);
  }
  return;
}

// OnSelectEvent @ 14be32ee0

void __thiscall UDS_VM_Interaction::OnSelectEvent(UDS_VM_Interaction *this,int param_1)

{
  FName local_18;
  int local_10;
  
  this->bSelected = this->OrderIndex == param_1;
  local_10 = FFieldNotificationClassDescriptor::bSelected.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::bSelected.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// OnSetViewModel @ 14be36c20

void __thiscall
UDS_VM_Interaction::OnSetViewModel
          (UDS_VM_Interaction *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedPtr<FDS_ViewModelContext_Interaction,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  local_18.Object = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_Interaction>(&local_28,&local_18);
  if (local_28.Object != (FDS_ViewModelContext_Interaction *)0x0) {
    if (local_28.Object == (FDS_ViewModelContext_Interaction *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    this->TargetEntityID = (local_28.Object)->TargetEntityID;
    this->InteractionID = (local_28.Object)->InteractionID;
    this->OrderIndex = (local_28.Object)->Index;
    Refresh(this);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnUpdate @ 14be42bd0

void __thiscall UDS_VM_Interaction::OnUpdate(UDS_VM_Interaction *this,float param_1)

{
  double dVar1;
  EDS_AnimationEventType EVar2;
  FName FVar3;
  int iVar4;
  FName *pFVar5;
  double dVar6;
  FName local_res8;
  FName local_28;
  int local_20;
  
  dVar1 = this->EndTime;
  dVar6 = UDS_TimeUtilManager::GetCurrentServerTime();
  local_20 = FFieldNotificationClassDescriptor::Vis_Time.BitNumber;
  local_28 = FFieldNotificationClassDescriptor::Vis_Time.FieldName;
  dVar1 = dVar1 - dVar6;
  if (dVar1 <= 0.0) {
    if (this->Vis_Time != Collapsed) {
      this->Vis_Time = Collapsed;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
    }
    EVar2 = (this->AnimationEvent).AnimationEventType;
  }
  else {
    FDS_Text::SetTextFromSec(&this->PlayerSkillRemainTime,(float)dVar1,SecondsText,false);
    local_20 = FFieldNotificationClassDescriptor::PlayerSkillRemainTime.BitNumber;
    local_28 = FFieldNotificationClassDescriptor::PlayerSkillRemainTime.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
    iVar4 = FFieldNotificationClassDescriptor::Vis_Time.BitNumber;
    FVar3 = FFieldNotificationClassDescriptor::Vis_Time.FieldName;
    if (this->Vis_Time != SelfHitTestInvisible) {
      this->Vis_Time = SelfHitTestInvisible;
      local_20 = iVar4;
      local_28 = FVar3;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
    }
    iVar4 = DS_CommonDataHelper::InteractionPromptRemainingTime();
    EVar2 = (this->AnimationEvent).AnimationEventType;
    if (dVar1 <= (double)iVar4) {
      if (EVar2 == PlayForward) {
        return;
      }
      pFVar5 = ::FName::FName(&local_res8,"Remain_Ani");
      FVar3 = *pFVar5;
      (this->AnimationEvent).AnimationName = FVar3;
      if (FVar3 == (FName)0x0) {
        return;
      }
      (this->AnimationEvent).AnimationEventType = PlayForward;
      (this->AnimationEvent).NumberOfLoops = 0;
      goto LAB_14be42d1e;
    }
  }
  if (EVar2 == StopAnimation) {
    return;
  }
  (this->AnimationEvent).AnimationEventType = StopAnimation;
LAB_14be42d1e:
  local_20 = FFieldNotificationClassDescriptor::AnimationEvent.BitNumber;
  local_28 = FFieldNotificationClassDescriptor::AnimationEvent.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
  return;
}

// Refresh @ 14be462a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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

void __thiscall UDS_VM_Interaction::Refresh(UDS_VM_Interaction *this)

{
  byte bVar1;
  code *pcVar2;
  FName FVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  FDS_EntityBase *pFVar9;
  UDS_LogManager *pUVar10;
  FDS_InteractionTableRow *this_00;
  FDS_NpcBaseTableRow *this_01;
  UDS_PlayerData *pUVar11;
  FDS_PlayerSkillBaseTableRow *pFVar12;
  FDS_PlayerSkillNeedItemTableRow *pFVar13;
  FDS_StuffBaseTableRow *this_02;
  UEnum *pUVar14;
  FDS_ItemBaseTableRow *pFVar15;
  ForAnyElementType FVar16;
  FName *pFVar17;
  undefined1 auStackY_4a8 [32];
  EDS_PlayerSkillType local_468 [8];
  byte *local_460;
  undefined8 local_458;
  TArray<int,TSizedDefaultAllocator<32>_> local_450;
  FWeakObjectPtr local_440;
  FDS_StringBaseID local_438;
  FName local_428;
  int local_420;
  FName local_418;
  int local_410;
  FName local_408;
  int local_400;
  FName local_3f8;
  int local_3f0;
  FName local_3e8;
  int local_3e0;
  FName local_3d8;
  int local_3d0;
  FName local_3c8;
  int local_3c0;
  FName local_3b8;
  int local_3b0;
  FName local_3a8;
  int local_3a0;
  FName local_398;
  int local_390;
  FName local_388;
  int local_380;
  FName local_378;
  int local_370;
  FDS_Text local_368;
  FDS_Text local_318;
  FDS_PlayerSkillTargetInfo local_2c8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_4a8;
  pFVar9 = FDS_EntityBase::GetEntityBase(&this->TargetEntityID);
  if (pFVar9 == (FDS_EntityBase *)0x0) {
    pUVar10 = UDS_LogManager::GetInst();
    if (pUVar10 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar10 = UDS_LogManager::GetInst();
    local_288._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_288,"UDS_VM_Interaction::Refresh",0x1b,Yes);
    UDS_LogManager::PrintLog(pUVar10,1,Error,local_288.Ptr,0x82,L"targetEntity is nullptr.");
    if ((void *)local_288._padding_ == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)local_288._padding_);
    return;
  }
  UDS_PlayerData::GetMainPlayerData();
  bVar5 = FWeakObjectPtr::IsValid(&local_440);
  if (!bVar5) {
    return;
  }
  this_00 = FDS_InteractionTableRow::GetRef((longlong)this->InteractionID,true);
  bVar5 = FDS_InteractionTableRow::IsValid(this_00);
  iVar4 = FFieldNotificationClassDescriptor::ActionText.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::ActionText.FieldName;
  if (!bVar5) {
    pUVar10 = UDS_LogManager::GetInst();
    if (pUVar10 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar10 = UDS_LogManager::GetInst();
    local_168._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_168,"UDS_VM_Interaction::Refresh",0x1b,Yes);
    UDS_LogManager::PrintLog(pUVar10,1,Error,local_168.Ptr,0x8f,L"interactionTable is invalid. %d");
    FVar16.Data = (FScriptContainerElement *)local_168._padding_;
    goto LAB_14be46a81;
  }
  local_368.StringTableID = 0;
  local_368.StringEnumTableNameID.ComparisonIndex.Value = 0;
  local_368.StringEnumTableNameID.Number = 0;
  local_368.DateTime.Ticks = 0;
  local_368.TimeSpan.Ticks = 0;
  local_368.TimeExpressionType = None;
  local_368.IsExpression = false;
  local_368.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_368.UniqueString.Data.ArrayNum = 0;
  local_368.UniqueString.Data.ArrayMax = 0;
  local_368.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_368.FormatArgs.ArrayNum = 0;
  local_368.FormatArgs.ArrayMax = 0;
  local_368.StringTableType = None;
  FDS_Text::SetTextFromStringID(&local_368,&this_00->ID_Name);
  FDS_Text::operator=(&this->ActionText,&local_368);
  local_428 = FVar3;
  local_420 = iVar4;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_428);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_368.FormatArgs.AllocatorInstance.Data,
             local_368.FormatArgs.ArrayNum);
  if ((FDS_TextFormatArg *)local_368.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0)
  {
    FMemory::Free(local_368.FormatArgs.AllocatorInstance.Data);
  }
  if (local_368.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_368.UniqueString.Data.AllocatorInstance.Data);
  }
  local_2c8.EntityID = 0;
  local_2c8.bIsStuff = false;
  local_2c8.Position.field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_2c8.Position.field0_0x0._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  bVar7 = false;
  local_2c8.TableID = 0;
  local_2c8.ZoneID = 0;
  bVar5 = false;
  local_2c8.Position.field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_2c8.EndTime = 0.0;
  local_438._padding_ = (longlong)&___7FDS_StringBaseID__6B_;
  local_438.ID = 0;
  local_450.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_450.ArrayNum = 0;
  local_450.ArrayMax = 0;
  local_460 = (byte *)0x0;
  local_458 = 0;
  if (pFVar9->EntityType == NPC) {
    this_01 = FDS_NpcBaseTableRow::GetRef(pFVar9->TableID,true);
    bVar6 = FDS_NpcBaseTableRow::IsValid(this_01);
    if ((bVar6) && (bVar6 = FDS_NpcBaseTableRow::HasPlayerSkill(this_01,6), bVar6)) {
      pUVar11 = (UDS_PlayerData *)FWeakObjectPtr::Get(&local_440);
      local_468[0] = Ling;
      bVar7 = UDS_PlayerData::GetPlayerSkillTargetInfo
                        (pUVar11,local_468,&this->TargetEntityID,&local_2c8);
      bVar5 = true;
    }
    pFVar12 = FDS_PlayerSkillBaseTableRow::GetRef(6,true);
    local_438.ID = (pFVar12->ID_SkillName).ID;
    pFVar13 = FDS_PlayerSkillNeedItemTableRow::GetRefByNpcLingData(this->TargetEntityID);
    if ((pFVar13->ID_ReqItem).ArrayNum == 0) {
      TArray<int,TSizedDefaultAllocator<32>_>::operator=(&local_450,&pFVar13->ID_ReqItem);
      TArray<enum_EDS_TicketType,TSizedDefaultAllocator<32>_>::operator=
                (&local_460,&pFVar13->ReqTicketType);
    }
LAB_14be466ea:
    if ((bVar5 == true) && (bVar7 == true)) {
      this->EndTime = local_2c8.EndTime;
      iVar4 = FFieldNotificationClassDescriptor::PlayerSkillText.BitNumber;
      FVar3 = FFieldNotificationClassDescriptor::PlayerSkillText.FieldName;
      local_318.DateTime.Ticks = 0;
      local_318.TimeSpan.Ticks = 0;
      local_318.StringTableType = None;
      local_318.StringTableID = 0;
      local_318.StringEnumTableNameID.ComparisonIndex.Value = 0;
      local_318.StringEnumTableNameID.Number = 0;
      local_318.TimeExpressionType = None;
      local_318.IsExpression = false;
      local_318.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_318.UniqueString.Data.ArrayNum = 0;
      local_318.UniqueString.Data.ArrayMax = 0;
      local_318.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_318.FormatArgs.ArrayNum = 0;
      local_318.FormatArgs.ArrayMax = 0;
      FDS_Text::SetTextFromStringID(&local_318,&local_438);
      FDS_Text::operator=(&this->PlayerSkillText,&local_318);
      local_408 = FVar3;
      local_400 = iVar4;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_408);
      DestructItems<FDS_TextFormatArg,int>
                ((FDS_TextFormatArg *)local_318.FormatArgs.AllocatorInstance.Data,
                 local_318.FormatArgs.ArrayNum);
      if ((FDS_TextFormatArg *)local_318.FormatArgs.AllocatorInstance.Data !=
          (FDS_TextFormatArg *)0x0) {
        FMemory::Free(local_318.FormatArgs.AllocatorInstance.Data);
      }
      if (local_318.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_318.UniqueString.Data.AllocatorInstance.Data);
      }
    }
  }
  else if (pFVar9->EntityType == StuffGather) {
    this_02 = FDS_StuffBaseTableRow::GetRef(pFVar9->TableID,true);
    bVar5 = FDS_StuffBaseTableRow::IsValid(this_02);
    if (bVar5) {
      pUVar11 = (UDS_PlayerData *)FWeakObjectPtr::Get(&local_440);
      local_468[1] = 4;
      bVar7 = UDS_PlayerData::GetPlayerSkillTargetInfo
                        (pUVar11,local_468 + 1,&this->TargetEntityID,&local_2c8);
    }
    pFVar12 = FDS_PlayerSkillBaseTableRow::GetRef(4,true);
    local_438.ID = (pFVar12->ID_SkillName).ID;
    pFVar13 = FDS_PlayerSkillNeedItemTableRow::GetRefByStuffGatherData
                        (this->TargetEntityID,OpenLocks);
    if ((pFVar13->ReqTicketType).ArrayNum == 0) {
      TArray<int,TSizedDefaultAllocator<32>_>::operator=(&local_450,&pFVar13->ID_ReqItem);
      TArray<enum_EDS_TicketType,TSizedDefaultAllocator<32>_>::operator=
                (&local_460,&pFVar13->ReqTicketType);
      iVar4 = FFieldNotificationClassDescriptor::Vis_CostTicket.BitNumber;
      FVar3 = FFieldNotificationClassDescriptor::Vis_CostTicket.FieldName;
      if (this->Vis_CostTicket != Collapsed) {
        this->Vis_CostTicket = Collapsed;
        local_410 = iVar4;
        local_418 = FVar3;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_418);
      }
    }
    goto LAB_14be466ea;
  }
  iVar4 = FFieldNotificationClassDescriptor::Vis_CostTicket.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::Vis_CostTicket.FieldName;
  if ((int)local_458 == 0) {
    if (this->Vis_CostTicket != Collapsed) {
      this->Vis_CostTicket = Collapsed;
      pFVar17 = &local_3f8;
      local_3f8 = FVar3;
      local_3f0 = iVar4;
LAB_14be468b7:
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,pFVar17);
    }
  }
  else {
    if (this->Vis_CostTicket != SelfHitTestInvisible) {
      this->Vis_CostTicket = SelfHitTestInvisible;
      local_3e8 = FVar3;
      local_3e0 = iVar4;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_3e8);
    }
    iVar4 = FFieldNotificationClassDescriptor::CostTicketIconID.BitNumber;
    FVar3 = FFieldNotificationClassDescriptor::CostTicketIconID.FieldName;
    if (((int)local_458 < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar1 = *local_460;
    pUVar14 = StaticEnum<enum_EDS_TicketType>();
    iVar8 = DS_Util::GetEnumIconID(pUVar14,(uint)bVar1);
    if (this->CostTicketIconID != iVar8) {
      this->CostTicketIconID = iVar8;
      pFVar17 = &local_3d8;
      local_3d8 = FVar3;
      local_3d0 = iVar4;
      goto LAB_14be468b7;
    }
  }
  iVar4 = FFieldNotificationClassDescriptor::Vis_Cost.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::Vis_Cost.FieldName;
  if (local_450.ArrayNum == 0) {
    if (this->Vis_Cost != Collapsed) {
      this->Vis_Cost = Collapsed;
      local_3c0 = iVar4;
      local_3c8 = FVar3;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_3c8);
    }
    iVar4 = FFieldNotificationClassDescriptor::Vis_CostItem.BitNumber;
    FVar3 = FFieldNotificationClassDescriptor::Vis_CostItem.FieldName;
    if (this->Vis_CostItem != Collapsed) {
      this->Vis_CostItem = Collapsed;
      pFVar17 = &local_3b8;
      local_3b8 = FVar3;
      local_3b0 = iVar4;
LAB_14be46a25:
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,pFVar17);
    }
  }
  else {
    if (this->Vis_Cost != SelfHitTestInvisible) {
      this->Vis_Cost = SelfHitTestInvisible;
      local_3a0 = iVar4;
      local_3a8 = FVar3;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_3a8);
    }
    iVar4 = FFieldNotificationClassDescriptor::Vis_CostItem.BitNumber;
    FVar3 = FFieldNotificationClassDescriptor::Vis_CostItem.FieldName;
    if (this->Vis_CostItem != SelfHitTestInvisible) {
      this->Vis_CostItem = SelfHitTestInvisible;
      local_390 = iVar4;
      local_398 = FVar3;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_398);
    }
    iVar4 = FFieldNotificationClassDescriptor::CostItemIconID.BitNumber;
    FVar3 = FFieldNotificationClassDescriptor::CostItemIconID.FieldName;
    if ((local_450.ArrayNum < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar15 = FDS_ItemBaseTableRow::GetRef((longlong)*(int *)local_450.AllocatorInstance.Data,true);
    if (this->CostItemIconID != (longlong)pFVar15->ID_Icon) {
      this->CostItemIconID = (longlong)pFVar15->ID_Icon;
      pFVar17 = &local_388;
      local_388 = FVar3;
      local_380 = iVar4;
      goto LAB_14be46a25;
    }
  }
  iVar4 = FFieldNotificationClassDescriptor::Vis_CostTicket.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::Vis_CostTicket.FieldName;
  if (this->Vis_CostTicket != Collapsed) {
    this->Vis_CostTicket = Collapsed;
    local_378 = FVar3;
    local_370 = iVar4;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_378);
  }
  FVar16.Data = local_450.AllocatorInstance.Data;
  if (local_460 != (byte *)0x0) {
    FMemory::Free(local_460);
    FVar16.Data = local_450.AllocatorInstance.Data;
  }
LAB_14be46a81:
  if (FVar16.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar16.Data);
  }
  return;
}

// StartRemainTimeAnimation @ 14be53b00

void __thiscall UDS_VM_Interaction::StartRemainTimeAnimation(UDS_VM_Interaction *this)

{
  FName FVar1;
  FName *pFVar2;
  FName local_res8 [4];
  FName local_18;
  int local_10;
  
  if ((this->AnimationEvent).AnimationEventType != PlayForward) {
    pFVar2 = ::FName::FName(local_res8,"Remain_Ani");
    FVar1 = *pFVar2;
    (this->AnimationEvent).AnimationName = FVar1;
    if (FVar1 != (FName)0x0) {
      (this->AnimationEvent).AnimationEventType = PlayForward;
      (this->AnimationEvent).NumberOfLoops = 0;
      local_10 = FFieldNotificationClassDescriptor::AnimationEvent.BitNumber;
      local_18 = FFieldNotificationClassDescriptor::AnimationEvent.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
  }
  return;
}

// StopRemainTimeAnimation @ 14be54250

void __thiscall UDS_VM_Interaction::StopRemainTimeAnimation(UDS_VM_Interaction *this)

{
  FName local_18;
  int local_10;
  
  if ((this->AnimationEvent).AnimationEventType != StopAnimation) {
    (this->AnimationEvent).AnimationEventType = StopAnimation;
    local_10 = FFieldNotificationClassDescriptor::AnimationEvent.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::AnimationEvent.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// UnbindModel @ 14be552b0

void __thiscall UDS_VM_Interaction::UnbindModel(UDS_VM_Interaction *this)

{
  bool bVar1;
  UObject *pUVar2;
  UDS_InputEvent *pUVar3;
  FWeakObjectPtr local_res8 [4];
  
  UDS_PlayerData::GetMainPlayerData();
  bVar1 = FWeakObjectPtr::IsValid(local_res8);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(local_res8);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[0xf].field_0x10,this);
  }
  pUVar3 = UDS_InputEvent::GetEvent();
  if (pUVar3 != (UDS_InputEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar3->OnInteractionSelectedIndex,this);
  }
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  return;
}

